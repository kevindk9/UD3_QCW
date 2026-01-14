/*******************************************************************************
* File Name: ZCDref_PM.c  
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

#include "ZCDref.h"

static ZCDref_backupStruct ZCDref_backup;


/*******************************************************************************
* Function Name: ZCDref_SaveConfig
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
void ZCDref_SaveConfig(void) 
{
    if (!((ZCDref_CR1 & ZCDref_SRC_MASK) == ZCDref_SRC_UDB))
    {
        ZCDref_backup.data_value = ZCDref_Data;
    }
}


/*******************************************************************************
* Function Name: ZCDref_RestoreConfig
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
void ZCDref_RestoreConfig(void) 
{
    if (!((ZCDref_CR1 & ZCDref_SRC_MASK) == ZCDref_SRC_UDB))
    {
        if((ZCDref_Strobe & ZCDref_STRB_MASK) == ZCDref_STRB_EN)
        {
            ZCDref_Strobe &= (uint8)(~ZCDref_STRB_MASK);
            ZCDref_Data = ZCDref_backup.data_value;
            ZCDref_Strobe |= ZCDref_STRB_EN;
        }
        else
        {
            ZCDref_Data = ZCDref_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: ZCDref_Sleep
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
*  ZCDref_backup.enableState:  Is modified depending on the enable 
*  state  of the block before entering sleep mode.
*
*******************************************************************************/
void ZCDref_Sleep(void) 
{
    /* Save VDAC8's enable state */    
    if(ZCDref_ACT_PWR_EN == (ZCDref_PWRMGR & ZCDref_ACT_PWR_EN))
    {
        /* VDAC8 is enabled */
        ZCDref_backup.enableState = 1u;
    }
    else
    {
        /* VDAC8 is disabled */
        ZCDref_backup.enableState = 0u;
    }
    
    ZCDref_Stop();
    ZCDref_SaveConfig();
}


/*******************************************************************************
* Function Name: ZCDref_Wakeup
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
*  ZCDref_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void ZCDref_Wakeup(void) 
{
    ZCDref_RestoreConfig();
    
    if(ZCDref_backup.enableState == 1u)
    {
        /* Enable VDAC8's operation */
        ZCDref_Enable();

        /* Restore the data register */
        ZCDref_SetValue(ZCDref_Data);
    } /* Do nothing if VDAC8 was disabled before */    
}


/* [] END OF FILE */
