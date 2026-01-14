/*******************************************************************************
* File Name: LED_int.h  
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

#if !defined(CY_PINS_LED_int_ALIASES_H) /* Pins LED_int_ALIASES_H */
#define CY_PINS_LED_int_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define LED_int_0			(LED_int__0__PC)
#define LED_int_0_INTR	((uint16)((uint16)0x0001u << LED_int__0__SHIFT))

#define LED_int_INTR_ALL	 ((uint16)(LED_int_0_INTR))

#endif /* End Pins LED_int_ALIASES_H */


/* [] END OF FILE */
