/*******************************************************************************
* File Name: ADC_therm_PM.c
* Version 3.20
*
* Description:
*  This file provides the power manager source code to the API for the
*  Delta-Sigma ADC Component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ADC_therm.h"

static ADC_therm_BACKUP_STRUCT ADC_therm_backup =
{
    ADC_therm_DISABLED,
    ADC_therm_CFG1_DEC_CR
};


/*******************************************************************************
* Function Name: ADC_therm_SaveConfig
********************************************************************************
*
* Summary:
*  Save the register configuration which are not retention.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_therm_backup:  This global structure variable is used to store
*  configuration registers which are non retention whenever user wants to go
*  sleep mode by calling Sleep() API.
*
*******************************************************************************/
void ADC_therm_SaveConfig(void) 
{
    ADC_therm_backup.deccr = ADC_therm_DEC_CR_REG;
}


/*******************************************************************************
* Function Name: ADC_therm_RestoreConfig
********************************************************************************
*
* Summary:
*  Restore the register configurations which are not retention.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_therm_backup:  This global structure variable is used to restore
*  configuration registers which are non retention whenever user wants to switch
*  to active power mode by calling Wakeup() API.
*
*******************************************************************************/
void ADC_therm_RestoreConfig(void) 
{
    ADC_therm_DEC_CR_REG = ADC_therm_backup.deccr;
}


/*******************************************************************************
* Function Name: ADC_therm_Sleep
********************************************************************************
*
* Summary:
*  Stops the operation of the block and saves the user configuration.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_therm_backup:  The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void ADC_therm_Sleep(void) 
{
    /* Save ADC enable state */
    if((ADC_therm_ACT_PWR_DEC_EN == (ADC_therm_PWRMGR_DEC_REG & ADC_therm_ACT_PWR_DEC_EN)) &&
       (ADC_therm_ACT_PWR_DSM_EN == (ADC_therm_PWRMGR_DSM_REG & ADC_therm_ACT_PWR_DSM_EN)))
    {
        /* Component is enabled */
        ADC_therm_backup.enableState = ADC_therm_ENABLED;
        if((ADC_therm_DEC_CR_REG & ADC_therm_DEC_START_CONV) != 0u)
        {   
            /* Conversion is started */
            ADC_therm_backup.enableState |= ADC_therm_STARTED;
        }
		
        /* Stop the configuration */
        ADC_therm_Stop();
    }
    else
    {
        /* Component is disabled */
        ADC_therm_backup.enableState = ADC_therm_DISABLED;
    }

    /* Save the user configuration */
    ADC_therm_SaveConfig();
}


/*******************************************************************************
* Function Name: ADC_therm_Wakeup
********************************************************************************
*
* Summary:
*  Restores the user configuration and enables the power to the block.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  ADC_therm_backup:  The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void ADC_therm_Wakeup(void) 
{
    /* Restore the configuration */
    ADC_therm_RestoreConfig();

    /* Enables the component operation */
    if(ADC_therm_backup.enableState != ADC_therm_DISABLED)
    {
        ADC_therm_Enable();
        if((ADC_therm_backup.enableState & ADC_therm_STARTED) != 0u)
        {
            ADC_therm_StartConvert();
        }
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
