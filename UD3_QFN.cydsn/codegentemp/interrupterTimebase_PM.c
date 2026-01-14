/*******************************************************************************
* File Name: interrupterTimebase_PM.c  
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

#include "interrupterTimebase.h"

static interrupterTimebase_backupStruct interrupterTimebase_backup;


/*******************************************************************************
* Function Name: interrupterTimebase_SaveConfig
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
*  interrupterTimebase_backup:  Variables of this global structure are modified to 
*  store the values of non retention configuration registers when Sleep() API is 
*  called.
*
*******************************************************************************/
void interrupterTimebase_SaveConfig(void) 
{
    #if (!interrupterTimebase_UsingFixedFunction)

        interrupterTimebase_backup.CounterUdb = interrupterTimebase_ReadCounter();

        #if(!interrupterTimebase_ControlRegRemoved)
            interrupterTimebase_backup.CounterControlRegister = interrupterTimebase_ReadControlRegister();
        #endif /* (!interrupterTimebase_ControlRegRemoved) */

    #endif /* (!interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_RestoreConfig
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
*  interrupterTimebase_backup:  Variables of this global structure are used to 
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void interrupterTimebase_RestoreConfig(void) 
{      
    #if (!interrupterTimebase_UsingFixedFunction)

       interrupterTimebase_WriteCounter(interrupterTimebase_backup.CounterUdb);

        #if(!interrupterTimebase_ControlRegRemoved)
            interrupterTimebase_WriteControlRegister(interrupterTimebase_backup.CounterControlRegister);
        #endif /* (!interrupterTimebase_ControlRegRemoved) */

    #endif /* (!interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_Sleep
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
*  interrupterTimebase_backup.enableState:  Is modified depending on the enable 
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void interrupterTimebase_Sleep(void) 
{
    #if(!interrupterTimebase_ControlRegRemoved)
        /* Save Counter's enable state */
        if(interrupterTimebase_CTRL_ENABLE == (interrupterTimebase_CONTROL & interrupterTimebase_CTRL_ENABLE))
        {
            /* Counter is enabled */
            interrupterTimebase_backup.CounterEnableState = 1u;
        }
        else
        {
            /* Counter is disabled */
            interrupterTimebase_backup.CounterEnableState = 0u;
        }
    #else
        interrupterTimebase_backup.CounterEnableState = 1u;
        if(interrupterTimebase_backup.CounterEnableState != 0u)
        {
            interrupterTimebase_backup.CounterEnableState = 0u;
        }
    #endif /* (!interrupterTimebase_ControlRegRemoved) */
    
    interrupterTimebase_Stop();
    interrupterTimebase_SaveConfig();
}


/*******************************************************************************
* Function Name: interrupterTimebase_Wakeup
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
*  interrupterTimebase_backup.enableState:  Is used to restore the enable state of 
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void interrupterTimebase_Wakeup(void) 
{
    interrupterTimebase_RestoreConfig();
    #if(!interrupterTimebase_ControlRegRemoved)
        if(interrupterTimebase_backup.CounterEnableState == 1u)
        {
            /* Enable Counter's operation */
            interrupterTimebase_Enable();
        } /* Do nothing if Counter was disabled before */    
    #endif /* (!interrupterTimebase_ControlRegRemoved) */
    
}


/* [] END OF FILE */
