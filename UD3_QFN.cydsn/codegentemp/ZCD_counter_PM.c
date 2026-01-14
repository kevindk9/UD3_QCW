/*******************************************************************************
* File Name: ZCD_counter_PM.c  
* Version 3.0
*
*  Description:
*    This file provides the power management source code to API for the
*    Counter.  
*
*   Note:
*     None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "ZCD_counter.h"

static ZCD_counter_backupStruct ZCD_counter_backup;


/*******************************************************************************
* Function Name: ZCD_counter_SaveConfig
********************************************************************************
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
*  ZCD_counter_backup:  Variables of this global structure are modified to 
*  store the values of non retention configuration registers when Sleep() API is 
*  called.
*
*******************************************************************************/
void ZCD_counter_SaveConfig(void) 
{
    #if (!ZCD_counter_UsingFixedFunction)

        ZCD_counter_backup.CounterUdb = ZCD_counter_ReadCounter();

        #if(!ZCD_counter_ControlRegRemoved)
            ZCD_counter_backup.CounterControlRegister = ZCD_counter_ReadControlRegister();
        #endif /* (!ZCD_counter_ControlRegRemoved) */

    #endif /* (!ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_RestoreConfig
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
*  ZCD_counter_backup:  Variables of this global structure are used to 
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void ZCD_counter_RestoreConfig(void) 
{      
    #if (!ZCD_counter_UsingFixedFunction)

       ZCD_counter_WriteCounter(ZCD_counter_backup.CounterUdb);

        #if(!ZCD_counter_ControlRegRemoved)
            ZCD_counter_WriteControlRegister(ZCD_counter_backup.CounterControlRegister);
        #endif /* (!ZCD_counter_ControlRegRemoved) */

    #endif /* (!ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_Sleep
********************************************************************************
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
*  ZCD_counter_backup.enableState:  Is modified depending on the enable 
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void ZCD_counter_Sleep(void) 
{
    #if(!ZCD_counter_ControlRegRemoved)
        /* Save Counter's enable state */
        if(ZCD_counter_CTRL_ENABLE == (ZCD_counter_CONTROL & ZCD_counter_CTRL_ENABLE))
        {
            /* Counter is enabled */
            ZCD_counter_backup.CounterEnableState = 1u;
        }
        else
        {
            /* Counter is disabled */
            ZCD_counter_backup.CounterEnableState = 0u;
        }
    #else
        ZCD_counter_backup.CounterEnableState = 1u;
        if(ZCD_counter_backup.CounterEnableState != 0u)
        {
            ZCD_counter_backup.CounterEnableState = 0u;
        }
    #endif /* (!ZCD_counter_ControlRegRemoved) */
    
    ZCD_counter_Stop();
    ZCD_counter_SaveConfig();
}


/*******************************************************************************
* Function Name: ZCD_counter_Wakeup
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
*  ZCD_counter_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void ZCD_counter_Wakeup(void) 
{
    ZCD_counter_RestoreConfig();
    #if(!ZCD_counter_ControlRegRemoved)
        if(ZCD_counter_backup.CounterEnableState == 1u)
        {
            /* Enable Counter's operation */
            ZCD_counter_Enable();
        } /* Do nothing if Counter was disabled before */    
    #endif /* (!ZCD_counter_ControlRegRemoved) */
    
}


/* [] END OF FILE */
