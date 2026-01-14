/*******************************************************************************
* File Name: Vdriver.h  
* Version 2.20
*
* Description:
*  This file contains the Alias definitions for Per-Pin APIs in cypins.h. 
*  Information on using these APIs can be found in the System Reference Guide.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Vdriver_ALIASES_H) /* Pins Vdriver_ALIASES_H */
#define CY_PINS_Vdriver_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define Vdriver_0			(Vdriver__0__PC)
#define Vdriver_0_INTR	((uint16)((uint16)0x0001u << Vdriver__0__SHIFT))

#define Vdriver_INTR_ALL	 ((uint16)(Vdriver_0_INTR))

#endif /* End Pins Vdriver_ALIASES_H */


/* [] END OF FILE */
