/*******************************************************************************
* File Name: QCW_enable_PM.c
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

#include "QCW_enable.h"

/* Check for removal by optimization */
#if !defined(QCW_enable_Sync_ctrl_reg__REMOVED)

static QCW_enable_BACKUP_STRUCT  QCW_enable_backup = {0u};

    
/*******************************************************************************
* Function Name: QCW_enable_SaveConfig
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
void QCW_enable_SaveConfig(void) 
{
    QCW_enable_backup.controlState = QCW_enable_Control;
}


/*******************************************************************************
* Function Name: QCW_enable_RestoreConfig
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
void QCW_enable_RestoreConfig(void) 
{
     QCW_enable_Control = QCW_enable_backup.controlState;
}


/*******************************************************************************
* Function Name: QCW_enable_Sleep
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
void QCW_enable_Sleep(void) 
{
    QCW_enable_SaveConfig();
}


/*******************************************************************************
* Function Name: QCW_enable_Wakeup
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
void QCW_enable_Wakeup(void)  
{
    QCW_enable_RestoreConfig();
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
