/*******************************************************************************
* File Name: system_fault_PM.c
* Version 1.80
*
* Description:
*  This file contains the setup, control, and status commands to support 
*  the component operation in the low power mode. 
*
* Note:
*
********************************************************************************
* Copyright 2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "system_fault.h"

/* Check for removal by optimization */
#if !defined(system_fault_Sync_ctrl_reg__REMOVED)

static system_fault_BACKUP_STRUCT  system_fault_backup = {0u};

    
/*******************************************************************************
* Function Name: system_fault_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void system_fault_SaveConfig(void) 
{
    system_fault_backup.controlState = system_fault_Control;
}


/*******************************************************************************
* Function Name: system_fault_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the control register value.
*
* Parameters:
*  None
*
* Return:
*  None
*
*
*******************************************************************************/
void system_fault_RestoreConfig(void) 
{
     system_fault_Control = system_fault_backup.controlState;
}


/*******************************************************************************
* Function Name: system_fault_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void system_fault_Sleep(void) 
{
    system_fault_SaveConfig();
}


/*******************************************************************************
* Function Name: system_fault_Wakeup
********************************************************************************
*
* Summary:
*  Restores the component after waking up from the low power mode.
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void system_fault_Wakeup(void)  
{
    system_fault_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
