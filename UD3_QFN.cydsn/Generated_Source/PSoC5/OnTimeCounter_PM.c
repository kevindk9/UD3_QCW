/*******************************************************************************
* File Name: OnTimeCounter_PM.c
* Version 2.80
*
*  Description:
*     This file provides the power management source code to API for the
*     Timer.
*
*   Note:
*     None
*
*******************************************************************************
* Copyright 2008-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#include "OnTimeCounter.h"

static OnTimeCounter_backupStruct OnTimeCounter_backup;


/*******************************************************************************
* Function Name: OnTimeCounter_SaveConfig
********************************************************************************
*
* Summary:
*     Save the current user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OnTimeCounter_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void OnTimeCounter_SaveConfig(void) 
{
    #if (!OnTimeCounter_UsingFixedFunction)
        OnTimeCounter_backup.TimerUdb = OnTimeCounter_ReadCounter();
        OnTimeCounter_backup.InterruptMaskValue = OnTimeCounter_STATUS_MASK;
        #if (OnTimeCounter_UsingHWCaptureCounter)
            OnTimeCounter_backup.TimerCaptureCounter = OnTimeCounter_ReadCaptureCount();
        #endif /* Back Up capture counter register  */

        #if(!OnTimeCounter_UDB_CONTROL_REG_REMOVED)
            OnTimeCounter_backup.TimerControlRegister = OnTimeCounter_ReadControlRegister();
        #endif /* Backup the enable state of the Timer component */
    #endif /* Backup non retention registers in UDB implementation. All fixed function registers are retention */
}


/*******************************************************************************
* Function Name: OnTimeCounter_RestoreConfig
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
* Global variables:
*  OnTimeCounter_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void OnTimeCounter_RestoreConfig(void) 
{   
    #if (!OnTimeCounter_UsingFixedFunction)

        OnTimeCounter_WriteCounter(OnTimeCounter_backup.TimerUdb);
        OnTimeCounter_STATUS_MASK =OnTimeCounter_backup.InterruptMaskValue;
        #if (OnTimeCounter_UsingHWCaptureCounter)
            OnTimeCounter_SetCaptureCount(OnTimeCounter_backup.TimerCaptureCounter);
        #endif /* Restore Capture counter register*/

        #if(!OnTimeCounter_UDB_CONTROL_REG_REMOVED)
            OnTimeCounter_WriteControlRegister(OnTimeCounter_backup.TimerControlRegister);
        #endif /* Restore the enable state of the Timer component */
    #endif /* Restore non retention registers in the UDB implementation only */
}


/*******************************************************************************
* Function Name: OnTimeCounter_Sleep
********************************************************************************
*
* Summary:
*     Stop and Save the user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  OnTimeCounter_backup.TimerEnableState:  Is modified depending on the
*  enable state of the block before entering sleep mode.
*
*******************************************************************************/
void OnTimeCounter_Sleep(void) 
{
    #if(!OnTimeCounter_UDB_CONTROL_REG_REMOVED)
        /* Save Counter's enable state */
        if(OnTimeCounter_CTRL_ENABLE == (OnTimeCounter_CONTROL & OnTimeCounter_CTRL_ENABLE))
        {
            /* Timer is enabled */
            OnTimeCounter_backup.TimerEnableState = 1u;
        }
        else
        {
            /* Timer is disabled */
            OnTimeCounter_backup.TimerEnableState = 0u;
        }
    #endif /* Back up enable state from the Timer control register */
    OnTimeCounter_Stop();
    OnTimeCounter_SaveConfig();
}


/*******************************************************************************
* Function Name: OnTimeCounter_Wakeup
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
*  OnTimeCounter_backup.enableState:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void OnTimeCounter_Wakeup(void) 
{
    OnTimeCounter_RestoreConfig();
    #if(!OnTimeCounter_UDB_CONTROL_REG_REMOVED)
        if(OnTimeCounter_backup.TimerEnableState == 1u)
        {     /* Enable Timer's operation */
                OnTimeCounter_Enable();
        } /* Do nothing if Timer was disabled before */
    #endif /* Remove this code section if Control register is removed */
}


/* [] END OF FILE */
