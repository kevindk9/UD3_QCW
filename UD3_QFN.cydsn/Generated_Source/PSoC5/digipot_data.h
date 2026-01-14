/*******************************************************************************
* File Name: digipot_data.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_digipot_data_H) /* Pins digipot_data_H */
#define CY_PINS_digipot_data_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "digipot_data_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 digipot_data__PORT == 15 && ((digipot_data__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    digipot_data_Write(uint8 value);
void    digipot_data_SetDriveMode(uint8 mode);
uint8   digipot_data_ReadDataReg(void);
uint8   digipot_data_Read(void);
void    digipot_data_SetInterruptMode(uint16 position, uint16 mode);
uint8   digipot_data_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the digipot_data_SetDriveMode() function.
     *  @{
     */
        #define digipot_data_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define digipot_data_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define digipot_data_DM_RES_UP          PIN_DM_RES_UP
        #define digipot_data_DM_RES_DWN         PIN_DM_RES_DWN
        #define digipot_data_DM_OD_LO           PIN_DM_OD_LO
        #define digipot_data_DM_OD_HI           PIN_DM_OD_HI
        #define digipot_data_DM_STRONG          PIN_DM_STRONG
        #define digipot_data_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define digipot_data_MASK               digipot_data__MASK
#define digipot_data_SHIFT              digipot_data__SHIFT
#define digipot_data_WIDTH              1u

/* Interrupt constants */
#if defined(digipot_data__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in digipot_data_SetInterruptMode() function.
     *  @{
     */
        #define digipot_data_INTR_NONE      (uint16)(0x0000u)
        #define digipot_data_INTR_RISING    (uint16)(0x0001u)
        #define digipot_data_INTR_FALLING   (uint16)(0x0002u)
        #define digipot_data_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define digipot_data_INTR_MASK      (0x01u) 
#endif /* (digipot_data__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define digipot_data_PS                     (* (reg8 *) digipot_data__PS)
/* Data Register */
#define digipot_data_DR                     (* (reg8 *) digipot_data__DR)
/* Port Number */
#define digipot_data_PRT_NUM                (* (reg8 *) digipot_data__PRT) 
/* Connect to Analog Globals */                                                  
#define digipot_data_AG                     (* (reg8 *) digipot_data__AG)                       
/* Analog MUX bux enable */
#define digipot_data_AMUX                   (* (reg8 *) digipot_data__AMUX) 
/* Bidirectional Enable */                                                        
#define digipot_data_BIE                    (* (reg8 *) digipot_data__BIE)
/* Bit-mask for Aliased Register Access */
#define digipot_data_BIT_MASK               (* (reg8 *) digipot_data__BIT_MASK)
/* Bypass Enable */
#define digipot_data_BYP                    (* (reg8 *) digipot_data__BYP)
/* Port wide control signals */                                                   
#define digipot_data_CTL                    (* (reg8 *) digipot_data__CTL)
/* Drive Modes */
#define digipot_data_DM0                    (* (reg8 *) digipot_data__DM0) 
#define digipot_data_DM1                    (* (reg8 *) digipot_data__DM1)
#define digipot_data_DM2                    (* (reg8 *) digipot_data__DM2) 
/* Input Buffer Disable Override */
#define digipot_data_INP_DIS                (* (reg8 *) digipot_data__INP_DIS)
/* LCD Common or Segment Drive */
#define digipot_data_LCD_COM_SEG            (* (reg8 *) digipot_data__LCD_COM_SEG)
/* Enable Segment LCD */
#define digipot_data_LCD_EN                 (* (reg8 *) digipot_data__LCD_EN)
/* Slew Rate Control */
#define digipot_data_SLW                    (* (reg8 *) digipot_data__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define digipot_data_PRTDSI__CAPS_SEL       (* (reg8 *) digipot_data__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define digipot_data_PRTDSI__DBL_SYNC_IN    (* (reg8 *) digipot_data__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define digipot_data_PRTDSI__OE_SEL0        (* (reg8 *) digipot_data__PRTDSI__OE_SEL0) 
#define digipot_data_PRTDSI__OE_SEL1        (* (reg8 *) digipot_data__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define digipot_data_PRTDSI__OUT_SEL0       (* (reg8 *) digipot_data__PRTDSI__OUT_SEL0) 
#define digipot_data_PRTDSI__OUT_SEL1       (* (reg8 *) digipot_data__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define digipot_data_PRTDSI__SYNC_OUT       (* (reg8 *) digipot_data__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(digipot_data__SIO_CFG)
    #define digipot_data_SIO_HYST_EN        (* (reg8 *) digipot_data__SIO_HYST_EN)
    #define digipot_data_SIO_REG_HIFREQ     (* (reg8 *) digipot_data__SIO_REG_HIFREQ)
    #define digipot_data_SIO_CFG            (* (reg8 *) digipot_data__SIO_CFG)
    #define digipot_data_SIO_DIFF           (* (reg8 *) digipot_data__SIO_DIFF)
#endif /* (digipot_data__SIO_CFG) */

/* Interrupt Registers */
#if defined(digipot_data__INTSTAT)
    #define digipot_data_INTSTAT            (* (reg8 *) digipot_data__INTSTAT)
    #define digipot_data_SNAP               (* (reg8 *) digipot_data__SNAP)
    
	#define digipot_data_0_INTTYPE_REG 		(* (reg8 *) digipot_data__0__INTTYPE)
#endif /* (digipot_data__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_digipot_data_H */


/* [] END OF FILE */
