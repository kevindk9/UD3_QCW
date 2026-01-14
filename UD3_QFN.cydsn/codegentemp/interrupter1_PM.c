/*******************************************************************************
* File Name: interrupter1_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "interrupter1.h"

static interrupter1_backupStruct interrupter1_backup;


/*******************************************************************************
* Function Name: interrupter1_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  interrupter1_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void interrupter1_SaveConfig(void) 
{

    #if(!interrupter1_UsingFixedFunction)
        #if(!interrupter1_PWMModeIsCenterAligned)
            interrupter1_backup.PWMPeriod = interrupter1_ReadPeriod();
        #endif /* (!interrupter1_PWMModeIsCenterAligned) */
        interrupter1_backup.PWMUdb = interrupter1_ReadCounter();
        #if (interrupter1_UseStatus)
            interrupter1_backup.InterruptMaskValue = interrupter1_STATUS_MASK;
        #endif /* (interrupter1_UseStatus) */

        #if(interrupter1_DeadBandMode == interrupter1__B_PWM__DBM_256_CLOCKS || \
            interrupter1_DeadBandMode == interrupter1__B_PWM__DBM_2_4_CLOCKS)
            interrupter1_backup.PWMdeadBandValue = interrupter1_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(interrupter1_KillModeMinTime)
             interrupter1_backup.PWMKillCounterPeriod = interrupter1_ReadKillTime();
        #endif /* (interrupter1_KillModeMinTime) */

        #if(interrupter1_UseControl)
            interrupter1_backup.PWMControlRegister = interrupter1_ReadControlRegister();
        #endif /* (interrupter1_UseControl) */
    #endif  /* (!interrupter1_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupter1_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  interrupter1_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void interrupter1_RestoreConfig(void) 
{
        #if(!interrupter1_UsingFixedFunction)
            #if(!interrupter1_PWMModeIsCenterAligned)
                interrupter1_WritePeriod(interrupter1_backup.PWMPeriod);
            #endif /* (!interrupter1_PWMModeIsCenterAligned) */

            interrupter1_WriteCounter(interrupter1_backup.PWMUdb);

            #if (interrupter1_UseStatus)
                interrupter1_STATUS_MASK = interrupter1_backup.InterruptMaskValue;
            #endif /* (interrupter1_UseStatus) */

            #if(interrupter1_DeadBandMode == interrupter1__B_PWM__DBM_256_CLOCKS || \
                interrupter1_DeadBandMode == interrupter1__B_PWM__DBM_2_4_CLOCKS)
                interrupter1_WriteDeadTime(interrupter1_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(interrupter1_KillModeMinTime)
                interrupter1_WriteKillTime(interrupter1_backup.PWMKillCounterPeriod);
            #endif /* (interrupter1_KillModeMinTime) */

            #if(interrupter1_UseControl)
                interrupter1_WriteControlRegister(interrupter1_backup.PWMControlRegister);
            #endif /* (interrupter1_UseControl) */
        #endif  /* (!interrupter1_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: interrupter1_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  interrupter1_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void interrupter1_Sleep(void) 
{
    #if(interrupter1_UseControl)
        if(interrupter1_CTRL_ENABLE == (interrupter1_CONTROL & interrupter1_CTRL_ENABLE))
        {
            /*Component is enabled */
            interrupter1_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            interrupter1_backup.PWMEnableState = 0u;
        }
    #endif /* (interrupter1_UseControl) */

    /* Stop component */
    interrupter1_Stop();

    /* Save registers configuration */
    interrupter1_SaveConfig();
}


/*******************************************************************************
* Function Name: interrupter1_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  interrupter1_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void interrupter1_Wakeup(void) 
{
     /* Restore registers values */
    interrupter1_RestoreConfig();

    if(interrupter1_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        interrupter1_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
