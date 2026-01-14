/*******************************************************************************
* File Name: safe.h  
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

#if !defined(CY_PINS_safe_H) /* Pins safe_H */
#define CY_PINS_safe_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "safe_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 safe__PORT == 15 && ((safe__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    safe_Write(uint8 value);
void    safe_SetDriveMode(uint8 mode);
uint8   safe_ReadDataReg(void);
uint8   safe_Read(void);
void    safe_SetInterruptMode(uint16 position, uint16 mode);
uint8   safe_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the safe_SetDriveMode() function.
     *  @{
     */
        #define safe_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define safe_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define safe_DM_RES_UP          PIN_DM_RES_UP
        #define safe_DM_RES_DWN         PIN_DM_RES_DWN
        #define safe_DM_OD_LO           PIN_DM_OD_LO
        #define safe_DM_OD_HI           PIN_DM_OD_HI
        #define safe_DM_STRONG          PIN_DM_STRONG
        #define safe_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define safe_MASK               safe__MASK
#define safe_SHIFT              safe__SHIFT
#define safe_WIDTH              1u

/* Interrupt constants */
#if defined(safe__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in safe_SetInterruptMode() function.
     *  @{
     */
        #define safe_INTR_NONE      (uint16)(0x0000u)
        #define safe_INTR_RISING    (uint16)(0x0001u)
        #define safe_INTR_FALLING   (uint16)(0x0002u)
        #define safe_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define safe_INTR_MASK      (0x01u) 
#endif /* (safe__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define safe_PS                     (* (reg8 *) safe__PS)
/* Data Register */
#define safe_DR                     (* (reg8 *) safe__DR)
/* Port Number */
#define safe_PRT_NUM                (* (reg8 *) safe__PRT) 
/* Connect to Analog Globals */                                                  
#define safe_AG                     (* (reg8 *) safe__AG)                       
/* Analog MUX bux enable */
#define safe_AMUX                   (* (reg8 *) safe__AMUX) 
/* Bidirectional Enable */                                                        
#define safe_BIE                    (* (reg8 *) safe__BIE)
/* Bit-mask for Aliased Register Access */
#define safe_BIT_MASK               (* (reg8 *) safe__BIT_MASK)
/* Bypass Enable */
#define safe_BYP                    (* (reg8 *) safe__BYP)
/* Port wide control signals */                                                   
#define safe_CTL                    (* (reg8 *) safe__CTL)
/* Drive Modes */
#define safe_DM0                    (* (reg8 *) safe__DM0) 
#define safe_DM1                    (* (reg8 *) safe__DM1)
#define safe_DM2                    (* (reg8 *) safe__DM2) 
/* Input Buffer Disable Override */
#define safe_INP_DIS                (* (reg8 *) safe__INP_DIS)
/* LCD Common or Segment Drive */
#define safe_LCD_COM_SEG            (* (reg8 *) safe__LCD_COM_SEG)
/* Enable Segment LCD */
#define safe_LCD_EN                 (* (reg8 *) safe__LCD_EN)
/* Slew Rate Control */
#define safe_SLW                    (* (reg8 *) safe__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define safe_PRTDSI__CAPS_SEL       (* (reg8 *) safe__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define safe_PRTDSI__DBL_SYNC_IN    (* (reg8 *) safe__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define safe_PRTDSI__OE_SEL0        (* (reg8 *) safe__PRTDSI__OE_SEL0) 
#define safe_PRTDSI__OE_SEL1        (* (reg8 *) safe__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define safe_PRTDSI__OUT_SEL0       (* (reg8 *) safe__PRTDSI__OUT_SEL0) 
#define safe_PRTDSI__OUT_SEL1       (* (reg8 *) safe__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define safe_PRTDSI__SYNC_OUT       (* (reg8 *) safe__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(safe__SIO_CFG)
    #define safe_SIO_HYST_EN        (* (reg8 *) safe__SIO_HYST_EN)
    #define safe_SIO_REG_HIFREQ     (* (reg8 *) safe__SIO_REG_HIFREQ)
    #define safe_SIO_CFG            (* (reg8 *) safe__SIO_CFG)
    #define safe_SIO_DIFF           (* (reg8 *) safe__SIO_DIFF)
#endif /* (safe__SIO_CFG) */

/* Interrupt Registers */
#if defined(safe__INTSTAT)
    #define safe_INTSTAT            (* (reg8 *) safe__INTSTAT)
    #define safe_SNAP               (* (reg8 *) safe__SNAP)
    
	#define safe_0_INTTYPE_REG 		(* (reg8 *) safe__0__INTTYPE)
#endif /* (safe__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_safe_H */


/* [] END OF FILE */
