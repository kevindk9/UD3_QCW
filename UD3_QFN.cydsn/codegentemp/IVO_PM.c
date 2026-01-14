/*******************************************************************************
* File Name: IVO_PM.c
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

#include "IVO.h"

/* Check for removal by optimization */
#if !defined(IVO_Sync_ctrl_reg__REMOVED)

static IVO_BACKUP_STRUCT  IVO_backup = {0u};

    
/*******************************************************************************
* Function Name: IVO_SaveConfig
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
void IVO_SaveConfig(void) 
{
    IVO_backup.controlState = IVO_Control;
}


/*******************************************************************************
* Function Name: IVO_RestoreConfig
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
void IVO_RestoreConfig(void) 
{
     IVO_Control = IVO_backup.controlState;
}


/*******************************************************************************
* Function Name: IVO_Sleep
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
void IVO_Sleep(void) 
{
    IVO_SaveConfig();
}


/*******************************************************************************
* Function Name: IVO_Wakeup
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
void IVO_Wakeup(void)  
{
    IVO_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
