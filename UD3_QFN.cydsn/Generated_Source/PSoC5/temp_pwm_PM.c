/*******************************************************************************
* File Name: temp_pwm_PM.c
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

#include "temp_pwm.h"

static temp_pwm_backupStruct temp_pwm_backup;


/*******************************************************************************
* Function Name: temp_pwm_SaveConfig
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
*  temp_pwm_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void temp_pwm_SaveConfig(void) 
{

    #if(!temp_pwm_UsingFixedFunction)
        #if(!temp_pwm_PWMModeIsCenterAligned)
            temp_pwm_backup.PWMPeriod = temp_pwm_ReadPeriod();
        #endif /* (!temp_pwm_PWMModeIsCenterAligned) */
        temp_pwm_backup.PWMUdb = temp_pwm_ReadCounter();
        #if (temp_pwm_UseStatus)
            temp_pwm_backup.InterruptMaskValue = temp_pwm_STATUS_MASK;
        #endif /* (temp_pwm_UseStatus) */

        #if(temp_pwm_DeadBandMode == temp_pwm__B_PWM__DBM_256_CLOCKS || \
            temp_pwm_DeadBandMode == temp_pwm__B_PWM__DBM_2_4_CLOCKS)
            temp_pwm_backup.PWMdeadBandValue = temp_pwm_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(temp_pwm_KillModeMinTime)
             temp_pwm_backup.PWMKillCounterPeriod = temp_pwm_ReadKillTime();
        #endif /* (temp_pwm_KillModeMinTime) */

        #if(temp_pwm_UseControl)
            temp_pwm_backup.PWMControlRegister = temp_pwm_ReadControlRegister();
        #endif /* (temp_pwm_UseControl) */
    #endif  /* (!temp_pwm_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: temp_pwm_RestoreConfig
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
*  temp_pwm_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void temp_pwm_RestoreConfig(void) 
{
        #if(!temp_pwm_UsingFixedFunction)
            #if(!temp_pwm_PWMModeIsCenterAligned)
                temp_pwm_WritePeriod(temp_pwm_backup.PWMPeriod);
            #endif /* (!temp_pwm_PWMModeIsCenterAligned) */

            temp_pwm_WriteCounter(temp_pwm_backup.PWMUdb);

            #if (temp_pwm_UseStatus)
                temp_pwm_STATUS_MASK = temp_pwm_backup.InterruptMaskValue;
            #endif /* (temp_pwm_UseStatus) */

            #if(temp_pwm_DeadBandMode == temp_pwm__B_PWM__DBM_256_CLOCKS || \
                temp_pwm_DeadBandMode == temp_pwm__B_PWM__DBM_2_4_CLOCKS)
                temp_pwm_WriteDeadTime(temp_pwm_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(temp_pwm_KillModeMinTime)
                temp_pwm_WriteKillTime(temp_pwm_backup.PWMKillCounterPeriod);
            #endif /* (temp_pwm_KillModeMinTime) */

            #if(temp_pwm_UseControl)
                temp_pwm_WriteControlRegister(temp_pwm_backup.PWMControlRegister);
            #endif /* (temp_pwm_UseControl) */
        #endif  /* (!temp_pwm_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: temp_pwm_Sleep
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
*  temp_pwm_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void temp_pwm_Sleep(void) 
{
    #if(temp_pwm_UseControl)
        if(temp_pwm_CTRL_ENABLE == (temp_pwm_CONTROL & temp_pwm_CTRL_ENABLE))
        {
            /*Component is enabled */
            temp_pwm_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            temp_pwm_backup.PWMEnableState = 0u;
        }
    #endif /* (temp_pwm_UseControl) */

    /* Stop component */
    temp_pwm_Stop();

    /* Save registers configuration */
    temp_pwm_SaveConfig();
}


/*******************************************************************************
* Function Name: temp_pwm_Wakeup
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
*  temp_pwm_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void temp_pwm_Wakeup(void) 
{
     /* Restore registers values */
    temp_pwm_RestoreConfig();

    if(temp_pwm_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        temp_pwm_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
