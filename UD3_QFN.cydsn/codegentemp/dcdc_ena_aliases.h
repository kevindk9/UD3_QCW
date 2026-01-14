/*******************************************************************************
* File Name: dcdc_ena.h  
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

#if !defined(CY_PINS_dcdc_ena_ALIASES_H) /* Pins dcdc_ena_ALIASES_H */
#define CY_PINS_dcdc_ena_ALIASES_H

#include "cytypes.h"
#include "cyfitter.h"


/***************************************
*              Constants        
***************************************/
#define dcdc_ena_0			(dcdc_ena__0__PC)
#define dcdc_ena_0_INTR	((uint16)((uint16)0x0001u << dcdc_ena__0__SHIFT))

#define dcdc_ena_INTR_ALL	 ((uint16)(dcdc_ena_0_INTR))

#endif /* End Pins dcdc_ena_ALIASES_H */


/* [] END OF FILE */
