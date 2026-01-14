/*******************************************************************************
* File Name: therm1.h  
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

#if !defined(CY_PINS_therm1_ALIASES_H) /* Pins therm1_ALIASES_H */
#define CY_PINS_therm1_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define therm1_0			(therm1__0__PC)
#define therm1_0_INTR	((uint16)((uint16)0x0001u << therm1__0__SHIFT))

#define therm1_INTR_ALL	 ((uint16)(therm1_0_INTR))

#endif /* End Pins therm1_ALIASES_H */


/* [] END OF FILE */
