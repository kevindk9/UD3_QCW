/*******************************************************************************
* File Name: ZCD_compA.c
* Version 2.0
*
* Description:
*  This file provides the power management source code APIs for the
*  Comparator.
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

#include "ZCD_compA.h"

static ZCD_compA_backupStruct ZCD_compA_backup;


/*******************************************************************************
* Function Name: ZCD_compA_SaveConfig
********************************************************************************
*
* Summary:
*  Save the current user configuration
*
* Parameters:
*  void:
*
* Return:
*  void
*
*******************************************************************************/
void ZCD_compA_SaveConfig(void) 
{
    /* Empty since all are system reset for retention flops */
}


/*******************************************************************************
* Function Name: ZCD_compA_RestoreConfig
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
********************************************************************************/
void ZCD_compA_RestoreConfig(void) 
{
    /* Empty since all are system reset for retention flops */    
}


/*******************************************************************************
* Function Name: ZCD_compA_Sleep
********************************************************************************
*
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
*  ZCD_compA_backup.enableState:  Is modified depending on the enable 
*   state of the block before entering sleep mode.
*
*******************************************************************************/
void ZCD_compA_Sleep(void) 
{
    /* Save Comp's enable state */    
    if(ZCD_compA_ACT_PWR_EN == (ZCD_compA_PWRMGR & ZCD_compA_ACT_PWR_EN))
    {
        /* Comp is enabled */
        ZCD_compA_backup.enableState = 1u;
    }
    else
    {
        /* Comp is disabled */
        ZCD_compA_backup.enableState = 0u;
    }    
    
    ZCD_compA_Stop();
    ZCD_compA_SaveConfig();
}


/*******************************************************************************
* Function Name: ZCD_compA_Wakeup
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
*  ZCD_compA_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void ZCD_compA_Wakeup(void) 
{
    ZCD_compA_RestoreConfig();
    
    if(ZCD_compA_backup.enableState == 1u)
    {
        /* Enable Comp's operation */
        ZCD_compA_Enable();

    } /* Do nothing if Comp was disabled before */ 
}


/* [] END OF FILE */
