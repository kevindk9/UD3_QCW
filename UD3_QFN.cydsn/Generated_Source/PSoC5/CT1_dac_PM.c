/*******************************************************************************
* File Name: CT1_dac_PM.c  
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

#include "CT1_dac.h"

static CT1_dac_backupStruct CT1_dac_backup;


/*******************************************************************************
* Function Name: CT1_dac_SaveConfig
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
void CT1_dac_SaveConfig(void) 
{
    if (!((CT1_dac_CR1 & CT1_dac_SRC_MASK) == CT1_dac_SRC_UDB))
    {
        CT1_dac_backup.data_value = CT1_dac_Data;
    }
}


/*******************************************************************************
* Function Name: CT1_dac_RestoreConfig
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
void CT1_dac_RestoreConfig(void) 
{
    if (!((CT1_dac_CR1 & CT1_dac_SRC_MASK) == CT1_dac_SRC_UDB))
    {
        if((CT1_dac_Strobe & CT1_dac_STRB_MASK) == CT1_dac_STRB_EN)
        {
            CT1_dac_Strobe &= (uint8)(~CT1_dac_STRB_MASK);
            CT1_dac_Data = CT1_dac_backup.data_value;
            CT1_dac_Strobe |= CT1_dac_STRB_EN;
        }
        else
        {
            CT1_dac_Data = CT1_dac_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: CT1_dac_Sleep
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
*  CT1_dac_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void CT1_dac_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(CT1_dac_ACT_PWR_EN == (CT1_dac_PWRMGR & CT1_dac_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        CT1_dac_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        CT1_dac_backup.enableState = 0u;
    }
    
    CT1_dac_Stop();
    CT1_dac_SaveConfig();
}


/*******************************************************************************
* Function Name: CT1_dac_Wakeup
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
*  CT1_dac_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void CT1_dac_Wakeup(void) 
{
    CT1_dac_RestoreConfig();
    
    if(CT1_dac_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        CT1_dac_Enable();

        /* Restore the data register */
        CT1_dac_SetValue(CT1_dac_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
