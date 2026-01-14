/*******************************************************************************
* File Name: FB_THRSH_DAC_PM.c  
* Version 1.90
*
* Description:
*  This file provides the power management source code to API for the
*  VDAC8.  
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "FB_THRSH_DAC.h"

static FB_THRSH_DAC_backupStruct FB_THRSH_DAC_backup;


/*******************************************************************************
* Function Name: FB_THRSH_DAC_SaveConfig
********************************************************************************
* Summary:
*  Save the current user configuration
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void FB_THRSH_DAC_SaveConfig(void) 
{
    if (!((FB_THRSH_DAC_CR1 & FB_THRSH_DAC_SRC_MASK) == FB_THRSH_DAC_SRC_UDB))
    {
        FB_THRSH_DAC_backup.data_value = FB_THRSH_DAC_Data;
    }
}


/*******************************************************************************
* Function Name: FB_THRSH_DAC_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:  
*  void
*
* Return: 
*  void
*
*******************************************************************************/
void FB_THRSH_DAC_RestoreConfig(void) 
{
    if (!((FB_THRSH_DAC_CR1 & FB_THRSH_DAC_SRC_MASK) == FB_THRSH_DAC_SRC_UDB))
    {
        if((FB_THRSH_DAC_Strobe & FB_THRSH_DAC_STRB_MASK) == FB_THRSH_DAC_STRB_EN)
        {
            FB_THRSH_DAC_Strobe &= (uint8)(~FB_THRSH_DAC_STRB_MASK);
            FB_THRSH_DAC_Data = FB_THRSH_DAC_backup.data_value;
            FB_THRSH_DAC_Strobe |= FB_THRSH_DAC_STRB_EN;
        }
        else
        {
            FB_THRSH_DAC_Data = FB_THRSH_DAC_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: FB_THRSH_DAC_Sleep
********************************************************************************
* Summary:
*  Stop and Save the user configuration
*
* Parameters:  
*  void:  
*
* Return: 
*  void
*
* Global variables:
*  FB_THRSH_DAC_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void FB_THRSH_DAC_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(FB_THRSH_DAC_ACT_PWR_EN == (FB_THRSH_DAC_PWRMGR & FB_THRSH_DAC_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        FB_THRSH_DAC_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        FB_THRSH_DAC_backup.enableState = 0u;
    }
    
    FB_THRSH_DAC_Stop();
    FB_THRSH_DAC_SaveConfig();
}


/*******************************************************************************
* Function Name: FB_THRSH_DAC_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  FB_THRSH_DAC_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void FB_THRSH_DAC_Wakeup(void) 
{
    FB_THRSH_DAC_RestoreConfig();
    
    if(FB_THRSH_DAC_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        FB_THRSH_DAC_Enable();

        /* Restore the data register */
        FB_THRSH_DAC_SetValue(FB_THRSH_DAC_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
