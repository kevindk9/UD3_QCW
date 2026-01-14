/*******************************************************************************
* File Name: FB_capture_PM.c
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

#include "FB_capture.h"

static FB_capture_backupStruct FB_capture_backup;


/*******************************************************************************
* Function Name: FB_capture_SaveConfig
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
*  FB_capture_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void FB_capture_SaveConfig(void) 
{
    #if (!FB_capture_UsingFixedFunction)
        FB_capture_backup.TimerUdb = FB_capture_ReadCounter();
        FB_capture_backup.InterruptMaskValue = FB_capture_STATUS_MASK;
        #if (FB_capture_UsingHWCaptureCounter)
            FB_capture_backup.TimerCaptureCounter = FB_capture_ReadCaptureCount();
        #endif /* Back Up capture counter register  */

        #if(!FB_capture_UDB_CONTROL_REG_REMOVED)
            FB_capture_backup.TimerControlRegister = FB_capture_ReadControlRegister();
        #endif /* Backup the enable state of the Timer component */
    #endif /* Backup non retention registers in UDB implementation. All fixed function registers are retention */
}


/*******************************************************************************
* Function Name: FB_capture_RestoreConfig
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
*  FB_capture_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void FB_capture_RestoreConfig(void) 
{   
    #if (!FB_capture_UsingFixedFunction)

        FB_capture_WriteCounter(FB_capture_backup.TimerUdb);
        FB_capture_STATUS_MASK =FB_capture_backup.InterruptMaskValue;
        #if (FB_capture_UsingHWCaptureCounter)
            FB_capture_SetCaptureCount(FB_capture_backup.TimerCaptureCounter);
        #endif /* Restore Capture counter register*/

        #if(!FB_capture_UDB_CONTROL_REG_REMOVED)
            FB_capture_WriteControlRegister(FB_capture_backup.TimerControlRegister);
        #endif /* Restore the enable state of the Timer component */
    #endif /* Restore non retention registers in the UDB implementation only */
}


/*******************************************************************************
* Function Name: FB_capture_Sleep
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
*  FB_capture_backup.TimerEnableState:  Is modified depending on the
*  enable state of the block before entering sleep mode.
*
*******************************************************************************/
void FB_capture_Sleep(void) 
{
    #if(!FB_capture_UDB_CONTROL_REG_REMOVED)
        /* Save Counter's enable state */
        if(FB_capture_CTRL_ENABLE == (FB_capture_CONTROL & FB_capture_CTRL_ENABLE))
        {
            /* Timer is enabled */
            FB_capture_backup.TimerEnableState = 1u;
        }
        else
        {
            /* Timer is disabled */
            FB_capture_backup.TimerEnableState = 0u;
        }
    #endif /* Back up enable state from the Timer control register */
    FB_capture_Stop();
    FB_capture_SaveConfig();
}


/*******************************************************************************
* Function Name: FB_capture_Wakeup
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
*  FB_capture_backup.enableState:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void FB_capture_Wakeup(void) 
{
    FB_capture_RestoreConfig();
    #if(!FB_capture_UDB_CONTROL_REG_REMOVED)
        if(FB_capture_backup.TimerEnableState == 1u)
        {     /* Enable Timer's operation */
                FB_capture_Enable();
        } /* Do nothing if Timer was disabled before */
    #endif /* Remove this code section if Control register is removed */
}


/* [] END OF FILE */
