/*******************************************************************************
* File Name: CT1_comp.c
* Version 2.0
*
* Description:
*  This file provides the power management source code APIs for the
*  Comparator.
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

#include "CT1_comp.h"

static CT1_comp_backupStruct CT1_comp_backup;


/*******************************************************************************
* Function Name: CT1_comp_SaveConfig
********************************************************************************
*
* Summary:
*  Save the current user configuration
*
* Parameters:
*  void:
*
* Return:
*  void
*
*******************************************************************************/
void CT1_comp_SaveConfig(void) 
{
    /* Empty since all are system reset for retention flops */
}


/*******************************************************************************
* Function Name: CT1_comp_RestoreConfig
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
********************************************************************************/
void CT1_comp_RestoreConfig(void) 
{
    /* Empty since all are system reset for retention flops */    
}


/*******************************************************************************
* Function Name: CT1_comp_Sleep
********************************************************************************
*
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
*  CT1_comp_backup.enableState:  Is modified depending on the enable 
*   state of the block before entering sleep mode.
*
*******************************************************************************/
void CT1_comp_Sleep(void) 
{
    /* Save Comp's enable state */    
    if(CT1_comp_ACT_PWR_EN == (CT1_comp_PWRMGR & CT1_comp_ACT_PWR_EN))
    {
        /* Comp is enabled */
        CT1_comp_backup.enableState = 1u;
    }
    else
    {
        /* Comp is disabled */
        CT1_comp_backup.enableState = 0u;
    }    
    
    CT1_comp_Stop();
    CT1_comp_SaveConfig();
}


/*******************************************************************************
* Function Name: CT1_comp_Wakeup
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
*  CT1_comp_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void CT1_comp_Wakeup(void) 
{
    CT1_comp_RestoreConfig();
    
    if(CT1_comp_backup.enableState == 1u)
    {
        /* Enable Comp's operation */
        CT1_comp_Enable();

    } /* Do nothing if Comp was disabled before */ 
}


/* [] END OF FILE */
