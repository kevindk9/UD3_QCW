/*******************************************************************************
* File Name: ZCDA.h  
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

#if !defined(CY_PINS_ZCDA_H) /* Pins ZCDA_H */
#define CY_PINS_ZCDA_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ZCDA_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ZCDA__PORT == 15 && ((ZCDA__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    ZCDA_Write(uint8 value);
void    ZCDA_SetDriveMode(uint8 mode);
uint8   ZCDA_ReadDataReg(void);
uint8   ZCDA_Read(void);
void    ZCDA_SetInterruptMode(uint16 position, uint16 mode);
uint8   ZCDA_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the ZCDA_SetDriveMode() function.
     *  @{
     */
        #define ZCDA_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define ZCDA_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define ZCDA_DM_RES_UP          PIN_DM_RES_UP
        #define ZCDA_DM_RES_DWN         PIN_DM_RES_DWN
        #define ZCDA_DM_OD_LO           PIN_DM_OD_LO
        #define ZCDA_DM_OD_HI           PIN_DM_OD_HI
        #define ZCDA_DM_STRONG          PIN_DM_STRONG
        #define ZCDA_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define ZCDA_MASK               ZCDA__MASK
#define ZCDA_SHIFT              ZCDA__SHIFT
#define ZCDA_WIDTH              1u

/* Interrupt constants */
#if defined(ZCDA__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in ZCDA_SetInterruptMode() function.
     *  @{
     */
        #define ZCDA_INTR_NONE      (uint16)(0x0000u)
        #define ZCDA_INTR_RISING    (uint16)(0x0001u)
        #define ZCDA_INTR_FALLING   (uint16)(0x0002u)
        #define ZCDA_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define ZCDA_INTR_MASK      (0x01u) 
#endif /* (ZCDA__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ZCDA_PS                     (* (reg8 *) ZCDA__PS)
/* Data Register */
#define ZCDA_DR                     (* (reg8 *) ZCDA__DR)
/* Port Number */
#define ZCDA_PRT_NUM                (* (reg8 *) ZCDA__PRT) 
/* Connect to Analog Globals */                                                  
#define ZCDA_AG                     (* (reg8 *) ZCDA__AG)                       
/* Analog MUX bux enable */
#define ZCDA_AMUX                   (* (reg8 *) ZCDA__AMUX) 
/* Bidirectional Enable */                                                        
#define ZCDA_BIE                    (* (reg8 *) ZCDA__BIE)
/* Bit-mask for Aliased Register Access */
#define ZCDA_BIT_MASK               (* (reg8 *) ZCDA__BIT_MASK)
/* Bypass Enable */
#define ZCDA_BYP                    (* (reg8 *) ZCDA__BYP)
/* Port wide control signals */                                                   
#define ZCDA_CTL                    (* (reg8 *) ZCDA__CTL)
/* Drive Modes */
#define ZCDA_DM0                    (* (reg8 *) ZCDA__DM0) 
#define ZCDA_DM1                    (* (reg8 *) ZCDA__DM1)
#define ZCDA_DM2                    (* (reg8 *) ZCDA__DM2) 
/* Input Buffer Disable Override */
#define ZCDA_INP_DIS                (* (reg8 *) ZCDA__INP_DIS)
/* LCD Common or Segment Drive */
#define ZCDA_LCD_COM_SEG            (* (reg8 *) ZCDA__LCD_COM_SEG)
/* Enable Segment LCD */
#define ZCDA_LCD_EN                 (* (reg8 *) ZCDA__LCD_EN)
/* Slew Rate Control */
#define ZCDA_SLW                    (* (reg8 *) ZCDA__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ZCDA_PRTDSI__CAPS_SEL       (* (reg8 *) ZCDA__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ZCDA_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ZCDA__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ZCDA_PRTDSI__OE_SEL0        (* (reg8 *) ZCDA__PRTDSI__OE_SEL0) 
#define ZCDA_PRTDSI__OE_SEL1        (* (reg8 *) ZCDA__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ZCDA_PRTDSI__OUT_SEL0       (* (reg8 *) ZCDA__PRTDSI__OUT_SEL0) 
#define ZCDA_PRTDSI__OUT_SEL1       (* (reg8 *) ZCDA__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ZCDA_PRTDSI__SYNC_OUT       (* (reg8 *) ZCDA__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(ZCDA__SIO_CFG)
    #define ZCDA_SIO_HYST_EN        (* (reg8 *) ZCDA__SIO_HYST_EN)
    #define ZCDA_SIO_REG_HIFREQ     (* (reg8 *) ZCDA__SIO_REG_HIFREQ)
    #define ZCDA_SIO_CFG            (* (reg8 *) ZCDA__SIO_CFG)
    #define ZCDA_SIO_DIFF           (* (reg8 *) ZCDA__SIO_DIFF)
#endif /* (ZCDA__SIO_CFG) */

/* Interrupt Registers */
#if defined(ZCDA__INTSTAT)
    #define ZCDA_INTSTAT            (* (reg8 *) ZCDA__INTSTAT)
    #define ZCDA_SNAP               (* (reg8 *) ZCDA__SNAP)
    
	#define ZCDA_0_INTTYPE_REG 		(* (reg8 *) ZCDA__0__INTTYPE)
#endif /* (ZCDA__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ZCDA_H */


/* [] END OF FILE */
