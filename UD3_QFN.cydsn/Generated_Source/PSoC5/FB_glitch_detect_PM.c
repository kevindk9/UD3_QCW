/*******************************************************************************
* File Name: FB_glitch_detect_PM.c
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

#include "FB_glitch_detect.h"

static FB_glitch_detect_backupStruct FB_glitch_detect_backup;


/*******************************************************************************
* Function Name: FB_glitch_detect_SaveConfig
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
*  FB_glitch_detect_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void FB_glitch_detect_SaveConfig(void) 
{

    #if(!FB_glitch_detect_UsingFixedFunction)
        #if(!FB_glitch_detect_PWMModeIsCenterAligned)
            FB_glitch_detect_backup.PWMPeriod = FB_glitch_detect_ReadPeriod();
        #endif /* (!FB_glitch_detect_PWMModeIsCenterAligned) */
        FB_glitch_detect_backup.PWMUdb = FB_glitch_detect_ReadCounter();
        #if (FB_glitch_detect_UseStatus)
            FB_glitch_detect_backup.InterruptMaskValue = FB_glitch_detect_STATUS_MASK;
        #endif /* (FB_glitch_detect_UseStatus) */

        #if(FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_256_CLOCKS || \
            FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_2_4_CLOCKS)
            FB_glitch_detect_backup.PWMdeadBandValue = FB_glitch_detect_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(FB_glitch_detect_KillModeMinTime)
             FB_glitch_detect_backup.PWMKillCounterPeriod = FB_glitch_detect_ReadKillTime();
        #endif /* (FB_glitch_detect_KillModeMinTime) */

        #if(FB_glitch_detect_UseControl)
            FB_glitch_detect_backup.PWMControlRegister = FB_glitch_detect_ReadControlRegister();
        #endif /* (FB_glitch_detect_UseControl) */
    #endif  /* (!FB_glitch_detect_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: FB_glitch_detect_RestoreConfig
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
*  FB_glitch_detect_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void FB_glitch_detect_RestoreConfig(void) 
{
        #if(!FB_glitch_detect_UsingFixedFunction)
            #if(!FB_glitch_detect_PWMModeIsCenterAligned)
                FB_glitch_detect_WritePeriod(FB_glitch_detect_backup.PWMPeriod);
            #endif /* (!FB_glitch_detect_PWMModeIsCenterAligned) */

            FB_glitch_detect_WriteCounter(FB_glitch_detect_backup.PWMUdb);

            #if (FB_glitch_detect_UseStatus)
                FB_glitch_detect_STATUS_MASK = FB_glitch_detect_backup.InterruptMaskValue;
            #endif /* (FB_glitch_detect_UseStatus) */

            #if(FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_256_CLOCKS || \
                FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_2_4_CLOCKS)
                FB_glitch_detect_WriteDeadTime(FB_glitch_detect_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(FB_glitch_detect_KillModeMinTime)
                FB_glitch_detect_WriteKillTime(FB_glitch_detect_backup.PWMKillCounterPeriod);
            #endif /* (FB_glitch_detect_KillModeMinTime) */

            #if(FB_glitch_detect_UseControl)
                FB_glitch_detect_WriteControlRegister(FB_glitch_detect_backup.PWMControlRegister);
            #endif /* (FB_glitch_detect_UseControl) */
        #endif  /* (!FB_glitch_detect_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: FB_glitch_detect_Sleep
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
*  FB_glitch_detect_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void FB_glitch_detect_Sleep(void) 
{
    #if(FB_glitch_detect_UseControl)
        if(FB_glitch_detect_CTRL_ENABLE == (FB_glitch_detect_CONTROL & FB_glitch_detect_CTRL_ENABLE))
        {
            /*Component is enabled */
            FB_glitch_detect_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            FB_glitch_detect_backup.PWMEnableState = 0u;
        }
    #endif /* (FB_glitch_detect_UseControl) */

    /* Stop component */
    FB_glitch_detect_Stop();

    /* Save registers configuration */
    FB_glitch_detect_SaveConfig();
}


/*******************************************************************************
* Function Name: FB_glitch_detect_Wakeup
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
*  FB_glitch_detect_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void FB_glitch_detect_Wakeup(void) 
{
     /* Restore registers values */
    FB_glitch_detect_RestoreConfig();

    if(FB_glitch_detect_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        FB_glitch_detect_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
