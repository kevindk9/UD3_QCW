/*******************************************************************************
* File Name: IVO.c  
* Version 1.80
*
* Description:
*  This file contains API to enable firmware control of a Control Register.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "IVO.h"

/* Check for removal by optimization */
#if !defined(IVO_Sync_ctrl_reg__REMOVED)

    
/*******************************************************************************
* Function Name: IVO_Write
********************************************************************************
*
* Summary:
*  Write a byte to the Control Register.
*
* Parameters:
*  control:  The value to be assigned to the Control Register.
*
* Return:
*  None.
*
*******************************************************************************/
void IVO_Write(uint8 control) 
{
    IVO_Control = control;
}


/*******************************************************************************
* Function Name: IVO_Read
********************************************************************************
*
* Summary:
*  Reads the current value assigned to the Control Register.
*
* Parameters:
*  None.
*
* Return:
*  Returns the current value in the Control Register.
*
*******************************************************************************/
uint8 IVO_Read(void) 
{
    return IVO_Control;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
