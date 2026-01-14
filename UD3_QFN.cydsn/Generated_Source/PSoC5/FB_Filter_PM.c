/*******************************************************************************
* File Name: FB_Filter_PM.c
* Version 2.30
*
* Description:
*  This file provides the power managaer API source code for the FILT component.
*
* Note:
*  
*******************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#include "FB_Filter_PVT.h"

static FB_Filter_backupStruct  FB_Filter_backup = 
{
    FB_Filter_DISABLED,
    FB_Filter_RUN_MASK,
    
};


/*******************************************************************************
* Function Name: FB_Filter_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  FB_Filter_backup:  This global structure variable is used to store 
*  configuration registers which are non retention whenever user wants to go 
*  sleep mode by calling Sleep() API.
*
*******************************************************************************/
void FB_Filter_SaveConfig(void) 
{
    FB_Filter_backup.sr = FB_Filter_SR_REG;
    FB_Filter_backup.sema = FB_Filter_SEMA_REG;

    /* Put DFB RAM on the bus */
    FB_Filter_RAM_DIR_REG = FB_Filter_RAM_DIR_BUS;

    /* Save the ACU RAM as this is not retension */
    (void)memcpy(FB_Filter_backup.saveAcu,
        FB_Filter_ACU_RAM, FB_Filter_ACU_RAM_SIZE); 

    /* Take DFB RAM off the bus */
    FB_Filter_RAM_DIR_REG = FB_Filter_RAM_DIR_DFB;
}


/*******************************************************************************
* Function Name: FB_Filter_RestoreConfig
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
*  FB_Filter_backup:  This global structure variable is used to restore 
*  configuration registers which are non retention whenever user wants to switch 
*  to active power mode by calling Wakeup() API.
*
*******************************************************************************/
void FB_Filter_RestoreConfig(void) 
{
    FB_Filter_SR_REG = FB_Filter_backup.sr;
    FB_Filter_SEMA_REG = FB_Filter_backup.sema;
    
    /* Power on DFB before initializing the RAMs */
    FB_Filter_PM_ACT_CFG_REG |= FB_Filter_PM_ACT_MSK;

    /* Put DFB RAM on the bus */
    FB_Filter_RAM_DIR_REG = FB_Filter_RAM_DIR_BUS;

    /* Restore ACU RAM as this is not retension */
    (void)memcpy(FB_Filter_ACU_RAM,
        FB_Filter_backup.saveAcu, FB_Filter_ACU_RAM_SIZE); 

    /* Take DFB RAM off the bus */
    FB_Filter_RAM_DIR_REG = FB_Filter_RAM_DIR_DFB;
}


/*******************************************************************************
* Function Name: FB_Filter_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves its configuration. Should be called 
*  just prior to entering sleep.
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  FB_Filter_backup:  The structure field 'enableState' is modified 
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void FB_Filter_Sleep(void) 
{
    /* Save Filter enable state */
    if(FB_Filter_PM_ACT_MSK == (FB_Filter_PM_ACT_CFG_REG & FB_Filter_PM_ACT_MSK))
    {
        /* Component is enabled */
        FB_Filter_backup.enableState = FB_Filter_ENABLED;
    }
    else
    {
        /* Component is disabled */
        FB_Filter_backup.enableState = FB_Filter_DISABLED;
    }

    /* Save the configuration */
    FB_Filter_SaveConfig();
    
    /* Stop the component */
    FB_Filter_Stop();
}


/*******************************************************************************
* Function Name: FB_Filter_Wakeup
********************************************************************************
*
* Summary:
*  Enables block's operation and restores its configuration. Should be called
*  just after awaking from sleep.
*  
* Parameters:  
*  void
*
* Return: 
*  void
*
* Global variables:
*  FB_Filter_backup:  The structure field 'enableState' is used to 
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void FB_Filter_Wakeup(void) 
{
    /* Restore the configuration */
    FB_Filter_RestoreConfig();
    
    /* Enable's the component operation */
    if(FB_Filter_backup.enableState == FB_Filter_ENABLED)
    {
        FB_Filter_Enable();
    } /* Do nothing if component was disable before */
}


/* [] END OF FILE */
