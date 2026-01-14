/*******************************************************************************
* File Name: safe_state_PM.c
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

#include "safe_state.h"

/* Check for removal by optimization */
#if !defined(safe_state_Sync_ctrl_reg__REMOVED)

static safe_state_BACKUP_STRUCT  safe_state_backup = {0u};

    
/*******************************************************************************
* Function Name: safe_state_SaveConfig
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
void safe_state_SaveConfig(void) 
{
    safe_state_backup.controlState = safe_state_Control;
}


/*******************************************************************************
* Function Name: safe_state_RestoreConfig
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
void safe_state_RestoreConfig(void) 
{
     safe_state_Control = safe_state_backup.controlState;
}


/*******************************************************************************
* Function Name: safe_state_Sleep
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
void safe_state_Sleep(void) 
{
    safe_state_SaveConfig();
}


/*******************************************************************************
* Function Name: safe_state_Wakeup
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
void safe_state_Wakeup(void)  
{
    safe_state_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
