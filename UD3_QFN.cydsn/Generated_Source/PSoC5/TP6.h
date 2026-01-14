/*******************************************************************************
* File Name: TP6.h  
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

#if !defined(CY_PINS_TP6_H) /* Pins TP6_H */
#define CY_PINS_TP6_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "TP6_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 TP6__PORT == 15 && ((TP6__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    TP6_Write(uint8 value);
void    TP6_SetDriveMode(uint8 mode);
uint8   TP6_ReadDataReg(void);
uint8   TP6_Read(void);
void    TP6_SetInterruptMode(uint16 position, uint16 mode);
uint8   TP6_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the TP6_SetDriveMode() function.
     *  @{
     */
        #define TP6_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define TP6_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define TP6_DM_RES_UP          PIN_DM_RES_UP
        #define TP6_DM_RES_DWN         PIN_DM_RES_DWN
        #define TP6_DM_OD_LO           PIN_DM_OD_LO
        #define TP6_DM_OD_HI           PIN_DM_OD_HI
        #define TP6_DM_STRONG          PIN_DM_STRONG
        #define TP6_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define TP6_MASK               TP6__MASK
#define TP6_SHIFT              TP6__SHIFT
#define TP6_WIDTH              1u

/* Interrupt constants */
#if defined(TP6__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in TP6_SetInterruptMode() function.
     *  @{
     */
        #define TP6_INTR_NONE      (uint16)(0x0000u)
        #define TP6_INTR_RISING    (uint16)(0x0001u)
        #define TP6_INTR_FALLING   (uint16)(0x0002u)
        #define TP6_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define TP6_INTR_MASK      (0x01u) 
#endif /* (TP6__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define TP6_PS                     (* (reg8 *) TP6__PS)
/* Data Register */
#define TP6_DR                     (* (reg8 *) TP6__DR)
/* Port Number */
#define TP6_PRT_NUM                (* (reg8 *) TP6__PRT) 
/* Connect to Analog Globals */                                                  
#define TP6_AG                     (* (reg8 *) TP6__AG)                       
/* Analog MUX bux enable */
#define TP6_AMUX                   (* (reg8 *) TP6__AMUX) 
/* Bidirectional Enable */                                                        
#define TP6_BIE                    (* (reg8 *) TP6__BIE)
/* Bit-mask for Aliased Register Access */
#define TP6_BIT_MASK               (* (reg8 *) TP6__BIT_MASK)
/* Bypass Enable */
#define TP6_BYP                    (* (reg8 *) TP6__BYP)
/* Port wide control signals */                                                   
#define TP6_CTL                    (* (reg8 *) TP6__CTL)
/* Drive Modes */
#define TP6_DM0                    (* (reg8 *) TP6__DM0) 
#define TP6_DM1                    (* (reg8 *) TP6__DM1)
#define TP6_DM2                    (* (reg8 *) TP6__DM2) 
/* Input Buffer Disable Override */
#define TP6_INP_DIS                (* (reg8 *) TP6__INP_DIS)
/* LCD Common or Segment Drive */
#define TP6_LCD_COM_SEG            (* (reg8 *) TP6__LCD_COM_SEG)
/* Enable Segment LCD */
#define TP6_LCD_EN                 (* (reg8 *) TP6__LCD_EN)
/* Slew Rate Control */
#define TP6_SLW                    (* (reg8 *) TP6__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define TP6_PRTDSI__CAPS_SEL       (* (reg8 *) TP6__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define TP6_PRTDSI__DBL_SYNC_IN    (* (reg8 *) TP6__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define TP6_PRTDSI__OE_SEL0        (* (reg8 *) TP6__PRTDSI__OE_SEL0) 
#define TP6_PRTDSI__OE_SEL1        (* (reg8 *) TP6__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define TP6_PRTDSI__OUT_SEL0       (* (reg8 *) TP6__PRTDSI__OUT_SEL0) 
#define TP6_PRTDSI__OUT_SEL1       (* (reg8 *) TP6__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define TP6_PRTDSI__SYNC_OUT       (* (reg8 *) TP6__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(TP6__SIO_CFG)
    #define TP6_SIO_HYST_EN        (* (reg8 *) TP6__SIO_HYST_EN)
    #define TP6_SIO_REG_HIFREQ     (* (reg8 *) TP6__SIO_REG_HIFREQ)
    #define TP6_SIO_CFG            (* (reg8 *) TP6__SIO_CFG)
    #define TP6_SIO_DIFF           (* (reg8 *) TP6__SIO_DIFF)
#endif /* (TP6__SIO_CFG) */

/* Interrupt Registers */
#if defined(TP6__INTSTAT)
    #define TP6_INTSTAT            (* (reg8 *) TP6__INTSTAT)
    #define TP6_SNAP               (* (reg8 *) TP6__SNAP)
    
	#define TP6_0_INTTYPE_REG 		(* (reg8 *) TP6__0__INTTYPE)
#endif /* (TP6__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_TP6_H */


/* [] END OF FILE */
