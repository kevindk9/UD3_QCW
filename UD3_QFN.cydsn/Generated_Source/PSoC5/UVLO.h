/*******************************************************************************
* File Name: UVLO.h  
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

#if !defined(CY_PINS_UVLO_H) /* Pins UVLO_H */
#define CY_PINS_UVLO_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "UVLO_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 UVLO__PORT == 15 && ((UVLO__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    UVLO_Write(uint8 value);
void    UVLO_SetDriveMode(uint8 mode);
uint8   UVLO_ReadDataReg(void);
uint8   UVLO_Read(void);
void    UVLO_SetInterruptMode(uint16 position, uint16 mode);
uint8   UVLO_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the UVLO_SetDriveMode() function.
     *  @{
     */
        #define UVLO_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define UVLO_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define UVLO_DM_RES_UP          PIN_DM_RES_UP
        #define UVLO_DM_RES_DWN         PIN_DM_RES_DWN
        #define UVLO_DM_OD_LO           PIN_DM_OD_LO
        #define UVLO_DM_OD_HI           PIN_DM_OD_HI
        #define UVLO_DM_STRONG          PIN_DM_STRONG
        #define UVLO_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define UVLO_MASK               UVLO__MASK
#define UVLO_SHIFT              UVLO__SHIFT
#define UVLO_WIDTH              1u

/* Interrupt constants */
#if defined(UVLO__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in UVLO_SetInterruptMode() function.
     *  @{
     */
        #define UVLO_INTR_NONE      (uint16)(0x0000u)
        #define UVLO_INTR_RISING    (uint16)(0x0001u)
        #define UVLO_INTR_FALLING   (uint16)(0x0002u)
        #define UVLO_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define UVLO_INTR_MASK      (0x01u) 
#endif /* (UVLO__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define UVLO_PS                     (* (reg8 *) UVLO__PS)
/* Data Register */
#define UVLO_DR                     (* (reg8 *) UVLO__DR)
/* Port Number */
#define UVLO_PRT_NUM                (* (reg8 *) UVLO__PRT) 
/* Connect to Analog Globals */                                                  
#define UVLO_AG                     (* (reg8 *) UVLO__AG)                       
/* Analog MUX bux enable */
#define UVLO_AMUX                   (* (reg8 *) UVLO__AMUX) 
/* Bidirectional Enable */                                                        
#define UVLO_BIE                    (* (reg8 *) UVLO__BIE)
/* Bit-mask for Aliased Register Access */
#define UVLO_BIT_MASK               (* (reg8 *) UVLO__BIT_MASK)
/* Bypass Enable */
#define UVLO_BYP                    (* (reg8 *) UVLO__BYP)
/* Port wide control signals */                                                   
#define UVLO_CTL                    (* (reg8 *) UVLO__CTL)
/* Drive Modes */
#define UVLO_DM0                    (* (reg8 *) UVLO__DM0) 
#define UVLO_DM1                    (* (reg8 *) UVLO__DM1)
#define UVLO_DM2                    (* (reg8 *) UVLO__DM2) 
/* Input Buffer Disable Override */
#define UVLO_INP_DIS                (* (reg8 *) UVLO__INP_DIS)
/* LCD Common or Segment Drive */
#define UVLO_LCD_COM_SEG            (* (reg8 *) UVLO__LCD_COM_SEG)
/* Enable Segment LCD */
#define UVLO_LCD_EN                 (* (reg8 *) UVLO__LCD_EN)
/* Slew Rate Control */
#define UVLO_SLW                    (* (reg8 *) UVLO__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define UVLO_PRTDSI__CAPS_SEL       (* (reg8 *) UVLO__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define UVLO_PRTDSI__DBL_SYNC_IN    (* (reg8 *) UVLO__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define UVLO_PRTDSI__OE_SEL0        (* (reg8 *) UVLO__PRTDSI__OE_SEL0) 
#define UVLO_PRTDSI__OE_SEL1        (* (reg8 *) UVLO__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define UVLO_PRTDSI__OUT_SEL0       (* (reg8 *) UVLO__PRTDSI__OUT_SEL0) 
#define UVLO_PRTDSI__OUT_SEL1       (* (reg8 *) UVLO__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define UVLO_PRTDSI__SYNC_OUT       (* (reg8 *) UVLO__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(UVLO__SIO_CFG)
    #define UVLO_SIO_HYST_EN        (* (reg8 *) UVLO__SIO_HYST_EN)
    #define UVLO_SIO_REG_HIFREQ     (* (reg8 *) UVLO__SIO_REG_HIFREQ)
    #define UVLO_SIO_CFG            (* (reg8 *) UVLO__SIO_CFG)
    #define UVLO_SIO_DIFF           (* (reg8 *) UVLO__SIO_DIFF)
#endif /* (UVLO__SIO_CFG) */

/* Interrupt Registers */
#if defined(UVLO__INTSTAT)
    #define UVLO_INTSTAT            (* (reg8 *) UVLO__INTSTAT)
    #define UVLO_SNAP               (* (reg8 *) UVLO__SNAP)
    
	#define UVLO_0_INTTYPE_REG 		(* (reg8 *) UVLO__0__INTTYPE)
#endif /* (UVLO__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_UVLO_H */


/* [] END OF FILE */
