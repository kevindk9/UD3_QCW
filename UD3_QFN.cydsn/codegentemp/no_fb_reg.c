/*******************************************************************************
* File Name: no_fb_reg.c  
* Version 1.90
*
* Description:
*  This file contains API to enable firmware to read the value of a Status 
*  Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "no_fb_reg.h"

#if !defined(no_fb_reg_sts_sts_reg__REMOVED) /* Check for removal by optimization */


/*******************************************************************************
* Function Name: no_fb_reg_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The current value in the Status Register.
*
*******************************************************************************/
uint8 no_fb_reg_Read(void) 
{ 
    return no_fb_reg_Status;
}


/*******************************************************************************
* Function Name: no_fb_reg_InterruptEnable
********************************************************************************
*
* Summary:
*  Enables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void no_fb_reg_InterruptEnable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    no_fb_reg_Status_Aux_Ctrl |= no_fb_reg_STATUS_INTR_ENBL;
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: no_fb_reg_InterruptDisable
********************************************************************************
*
* Summary:
*  Disables the Status Register interrupt.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void no_fb_reg_InterruptDisable(void) 
{
    uint8 interruptState;
    interruptState = CyEnterCriticalSection();
    no_fb_reg_Status_Aux_Ctrl &= (uint8)(~no_fb_reg_STATUS_INTR_ENBL);
    CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: no_fb_reg_WriteMask
********************************************************************************
*
* Summary:
*  Writes the current mask value assigned to the Status Register.
*
* Parameters:
*  mask:  Value to write into the mask register.
*
* Return:
*  None.
*
*******************************************************************************/
void no_fb_reg_WriteMask(uint8 mask) 
{
    #if(no_fb_reg_INPUTS < 8u)
    	mask &= ((uint8)(1u << no_fb_reg_INPUTS) - 1u);
	#endif /* End no_fb_reg_INPUTS < 8u */
    no_fb_reg_Status_Mask = mask;
}


/*******************************************************************************
* Function Name: no_fb_reg_ReadMask
********************************************************************************
*
* Summary:
*  Reads the current interrupt mask assigned to the Status Register.
*
* Parameters:
*  None.
*
* Return:
*  The value of the interrupt mask of the Status Register.
*
*******************************************************************************/
uint8 no_fb_reg_ReadMask(void) 
{
    return no_fb_reg_Status_Mask;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
