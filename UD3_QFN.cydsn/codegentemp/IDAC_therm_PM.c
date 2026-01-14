/*******************************************************************************
* File Name: IDAC_therm.c
* Version 2.0
*
* Description:
*  This file provides the power management source code to API for the
*  IDAC8.
*
* Note:
*  None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/


#include "IDAC_therm.h"

static IDAC_therm_backupStruct IDAC_therm_backup;


/*******************************************************************************
* Function Name: IDAC_therm_SaveConfig
********************************************************************************
* Summary:
*  Save the current user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
*******************************************************************************/
void IDAC_therm_SaveConfig(void) 
{
    if (!((IDAC_therm_CR1 & IDAC_therm_SRC_MASK) == IDAC_therm_SRC_UDB))
    {
        IDAC_therm_backup.data_value = IDAC_therm_Data;
    }
}


/*******************************************************************************
* Function Name: IDAC_therm_RestoreConfig
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
*******************************************************************************/
void IDAC_therm_RestoreConfig(void) 
{
    if (!((IDAC_therm_CR1 & IDAC_therm_SRC_MASK) == IDAC_therm_SRC_UDB))
    {
        if((IDAC_therm_Strobe & IDAC_therm_STRB_MASK) == IDAC_therm_STRB_EN)
        {
            IDAC_therm_Strobe &= (uint8)(~IDAC_therm_STRB_MASK);
            IDAC_therm_Data = IDAC_therm_backup.data_value;
            IDAC_therm_Strobe |= IDAC_therm_STRB_EN;
        }
        else
        {
            IDAC_therm_Data = IDAC_therm_backup.data_value;
        }
    }
}


/*******************************************************************************
* Function Name: IDAC_therm_Sleep
********************************************************************************
* Summary:
*  Stop and Save the user configuration
*
* Parameters:
*  void:
*
* Return:
*  void
*
* Global variables:
*  IDAC_therm_backup.enableState: Is modified depending on the enable 
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void IDAC_therm_Sleep(void) 
{
    if(IDAC_therm_ACT_PWR_EN == (IDAC_therm_PWRMGR & IDAC_therm_ACT_PWR_EN))
    {
        /* IDAC8 is enabled */
        IDAC_therm_backup.enableState = 1u;
    }
    else
    {
        /* IDAC8 is disabled */
        IDAC_therm_backup.enableState = 0u;
    }

    IDAC_therm_Stop();
    IDAC_therm_SaveConfig();
}


/*******************************************************************************
* Function Name: IDAC_therm_Wakeup
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
*  IDAC_therm_backup.enableState: Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void IDAC_therm_Wakeup(void) 
{
    IDAC_therm_RestoreConfig();
    
    if(IDAC_therm_backup.enableState == 1u)
    {
        /* Enable IDAC8's operation */
        IDAC_therm_Enable();
        
        /* Set the data register */
        IDAC_therm_SetValue(IDAC_therm_Data);
    } /* Do nothing if IDAC8 was disabled before */    
}


/* [] END OF FILE */
