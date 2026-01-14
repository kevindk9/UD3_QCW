/*******************************************************************************
* File Name: ADC_peak_PM.c
* Version 3.10
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ADC_peak.h"


/***************************************
* Local data allocation
***************************************/

static ADC_peak_BACKUP_STRUCT  ADC_peak_backup =
{
    ADC_peak_DISABLED
};


/*******************************************************************************
* Function Name: ADC_peak_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ADC_peak_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: ADC_peak_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ADC_peak_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: ADC_peak_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The ADC_peak_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ADC_peak_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void ADC_peak_Sleep(void)
{
    if((ADC_peak_PWRMGR_SAR_REG  & ADC_peak_ACT_PWR_SAR_EN) != 0u)
    {
        if((ADC_peak_SAR_CSR0_REG & ADC_peak_SAR_SOF_START_CONV) != 0u)
        {
            ADC_peak_backup.enableState = ADC_peak_ENABLED | ADC_peak_STARTED;
        }
        else
        {
            ADC_peak_backup.enableState = ADC_peak_ENABLED;
        }
        ADC_peak_Stop();
    }
    else
    {
        ADC_peak_backup.enableState = ADC_peak_DISABLED;
    }
}


/*******************************************************************************
* Function Name: ADC_peak_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  ADC_peak_Sleep() was called. If the component was enabled before the
*  ADC_peak_Sleep() function was called, the
*  ADC_peak_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ADC_peak_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void ADC_peak_Wakeup(void)
{
    if(ADC_peak_backup.enableState != ADC_peak_DISABLED)
    {
        ADC_peak_Enable();
        #if(ADC_peak_DEFAULT_CONV_MODE != ADC_peak__HARDWARE_TRIGGER)
            if((ADC_peak_backup.enableState & ADC_peak_STARTED) != 0u)
            {
                ADC_peak_StartConvert();
            }
        #endif /* End ADC_peak_DEFAULT_CONV_MODE != ADC_peak__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */
