/*******************************************************************************
* File Name: Mantmr_PM.c
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

#include "Mantmr.h"

static Mantmr_backupStruct Mantmr_backup;


/*******************************************************************************
* Function Name: Mantmr_SaveConfig
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
*  Mantmr_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void Mantmr_SaveConfig(void) 
{

    #if(!Mantmr_UsingFixedFunction)
        #if(!Mantmr_PWMModeIsCenterAligned)
            Mantmr_backup.PWMPeriod = Mantmr_ReadPeriod();
        #endif /* (!Mantmr_PWMModeIsCenterAligned) */
        Mantmr_backup.PWMUdb = Mantmr_ReadCounter();
        #if (Mantmr_UseStatus)
            Mantmr_backup.InterruptMaskValue = Mantmr_STATUS_MASK;
        #endif /* (Mantmr_UseStatus) */

        #if(Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_256_CLOCKS || \
            Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_2_4_CLOCKS)
            Mantmr_backup.PWMdeadBandValue = Mantmr_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(Mantmr_KillModeMinTime)
             Mantmr_backup.PWMKillCounterPeriod = Mantmr_ReadKillTime();
        #endif /* (Mantmr_KillModeMinTime) */

        #if(Mantmr_UseControl)
            Mantmr_backup.PWMControlRegister = Mantmr_ReadControlRegister();
        #endif /* (Mantmr_UseControl) */
    #endif  /* (!Mantmr_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: Mantmr_RestoreConfig
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
*  Mantmr_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void Mantmr_RestoreConfig(void) 
{
        #if(!Mantmr_UsingFixedFunction)
            #if(!Mantmr_PWMModeIsCenterAligned)
                Mantmr_WritePeriod(Mantmr_backup.PWMPeriod);
            #endif /* (!Mantmr_PWMModeIsCenterAligned) */

            Mantmr_WriteCounter(Mantmr_backup.PWMUdb);

            #if (Mantmr_UseStatus)
                Mantmr_STATUS_MASK = Mantmr_backup.InterruptMaskValue;
            #endif /* (Mantmr_UseStatus) */

            #if(Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_256_CLOCKS || \
                Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_2_4_CLOCKS)
                Mantmr_WriteDeadTime(Mantmr_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(Mantmr_KillModeMinTime)
                Mantmr_WriteKillTime(Mantmr_backup.PWMKillCounterPeriod);
            #endif /* (Mantmr_KillModeMinTime) */

            #if(Mantmr_UseControl)
                Mantmr_WriteControlRegister(Mantmr_backup.PWMControlRegister);
            #endif /* (Mantmr_UseControl) */
        #endif  /* (!Mantmr_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: Mantmr_Sleep
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
*  Mantmr_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void Mantmr_Sleep(void) 
{
    #if(Mantmr_UseControl)
        if(Mantmr_CTRL_ENABLE == (Mantmr_CONTROL & Mantmr_CTRL_ENABLE))
        {
            /*Component is enabled */
            Mantmr_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            Mantmr_backup.PWMEnableState = 0u;
        }
    #endif /* (Mantmr_UseControl) */

    /* Stop component */
    Mantmr_Stop();

    /* Save registers configuration */
    Mantmr_SaveConfig();
}


/*******************************************************************************
* Function Name: Mantmr_Wakeup
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
*  Mantmr_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void Mantmr_Wakeup(void) 
{
     /* Restore registers values */
    Mantmr_RestoreConfig();

    if(Mantmr_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        Mantmr_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
