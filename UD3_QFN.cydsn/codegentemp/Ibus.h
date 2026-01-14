/*******************************************************************************
* File Name: Ibus.h  
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

#if !defined(CY_PINS_Ibus_H) /* Pins Ibus_H */
#define CY_PINS_Ibus_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Ibus_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Ibus__PORT == 15 && ((Ibus__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Ibus_Write(uint8 value);
void    Ibus_SetDriveMode(uint8 mode);
uint8   Ibus_ReadDataReg(void);
uint8   Ibus_Read(void);
void    Ibus_SetInterruptMode(uint16 position, uint16 mode);
uint8   Ibus_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Ibus_SetDriveMode() function.
     *  @{
     */
        #define Ibus_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Ibus_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Ibus_DM_RES_UP          PIN_DM_RES_UP
        #define Ibus_DM_RES_DWN         PIN_DM_RES_DWN
        #define Ibus_DM_OD_LO           PIN_DM_OD_LO
        #define Ibus_DM_OD_HI           PIN_DM_OD_HI
        #define Ibus_DM_STRONG          PIN_DM_STRONG
        #define Ibus_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Ibus_MASK               Ibus__MASK
#define Ibus_SHIFT              Ibus__SHIFT
#define Ibus_WIDTH              1u

/* Interrupt constants */
#if defined(Ibus__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Ibus_SetInterruptMode() function.
     *  @{
     */
        #define Ibus_INTR_NONE      (uint16)(0x0000u)
        #define Ibus_INTR_RISING    (uint16)(0x0001u)
        #define Ibus_INTR_FALLING   (uint16)(0x0002u)
        #define Ibus_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Ibus_INTR_MASK      (0x01u) 
#endif /* (Ibus__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Ibus_PS                     (* (reg8 *) Ibus__PS)
/* Data Register */
#define Ibus_DR                     (* (reg8 *) Ibus__DR)
/* Port Number */
#define Ibus_PRT_NUM                (* (reg8 *) Ibus__PRT) 
/* Connect to Analog Globals */                                                  
#define Ibus_AG                     (* (reg8 *) Ibus__AG)                       
/* Analog MUX bux enable */
#define Ibus_AMUX                   (* (reg8 *) Ibus__AMUX) 
/* Bidirectional Enable */                                                        
#define Ibus_BIE                    (* (reg8 *) Ibus__BIE)
/* Bit-mask for Aliased Register Access */
#define Ibus_BIT_MASK               (* (reg8 *) Ibus__BIT_MASK)
/* Bypass Enable */
#define Ibus_BYP                    (* (reg8 *) Ibus__BYP)
/* Port wide control signals */                                                   
#define Ibus_CTL                    (* (reg8 *) Ibus__CTL)
/* Drive Modes */
#define Ibus_DM0                    (* (reg8 *) Ibus__DM0) 
#define Ibus_DM1                    (* (reg8 *) Ibus__DM1)
#define Ibus_DM2                    (* (reg8 *) Ibus__DM2) 
/* Input Buffer Disable Override */
#define Ibus_INP_DIS                (* (reg8 *) Ibus__INP_DIS)
/* LCD Common or Segment Drive */
#define Ibus_LCD_COM_SEG            (* (reg8 *) Ibus__LCD_COM_SEG)
/* Enable Segment LCD */
#define Ibus_LCD_EN                 (* (reg8 *) Ibus__LCD_EN)
/* Slew Rate Control */
#define Ibus_SLW                    (* (reg8 *) Ibus__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Ibus_PRTDSI__CAPS_SEL       (* (reg8 *) Ibus__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Ibus_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Ibus__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Ibus_PRTDSI__OE_SEL0        (* (reg8 *) Ibus__PRTDSI__OE_SEL0) 
#define Ibus_PRTDSI__OE_SEL1        (* (reg8 *) Ibus__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Ibus_PRTDSI__OUT_SEL0       (* (reg8 *) Ibus__PRTDSI__OUT_SEL0) 
#define Ibus_PRTDSI__OUT_SEL1       (* (reg8 *) Ibus__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Ibus_PRTDSI__SYNC_OUT       (* (reg8 *) Ibus__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Ibus__SIO_CFG)
    #define Ibus_SIO_HYST_EN        (* (reg8 *) Ibus__SIO_HYST_EN)
    #define Ibus_SIO_REG_HIFREQ     (* (reg8 *) Ibus__SIO_REG_HIFREQ)
    #define Ibus_SIO_CFG            (* (reg8 *) Ibus__SIO_CFG)
    #define Ibus_SIO_DIFF           (* (reg8 *) Ibus__SIO_DIFF)
#endif /* (Ibus__SIO_CFG) */

/* Interrupt Registers */
#if defined(Ibus__INTSTAT)
    #define Ibus_INTSTAT            (* (reg8 *) Ibus__INTSTAT)
    #define Ibus_SNAP               (* (reg8 *) Ibus__SNAP)
    
	#define Ibus_0_INTTYPE_REG 		(* (reg8 *) Ibus__0__INTTYPE)
#endif /* (Ibus__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Ibus_H */


/* [] END OF FILE */
