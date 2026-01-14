/*******************************************************************************
* File Name: Relay1.h  
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

#if !defined(CY_PINS_Relay1_H) /* Pins Relay1_H */
#define CY_PINS_Relay1_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Relay1_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Relay1__PORT == 15 && ((Relay1__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Relay1_Write(uint8 value);
void    Relay1_SetDriveMode(uint8 mode);
uint8   Relay1_ReadDataReg(void);
uint8   Relay1_Read(void);
void    Relay1_SetInterruptMode(uint16 position, uint16 mode);
uint8   Relay1_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Relay1_SetDriveMode() function.
     *  @{
     */
        #define Relay1_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Relay1_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Relay1_DM_RES_UP          PIN_DM_RES_UP
        #define Relay1_DM_RES_DWN         PIN_DM_RES_DWN
        #define Relay1_DM_OD_LO           PIN_DM_OD_LO
        #define Relay1_DM_OD_HI           PIN_DM_OD_HI
        #define Relay1_DM_STRONG          PIN_DM_STRONG
        #define Relay1_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Relay1_MASK               Relay1__MASK
#define Relay1_SHIFT              Relay1__SHIFT
#define Relay1_WIDTH              1u

/* Interrupt constants */
#if defined(Relay1__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Relay1_SetInterruptMode() function.
     *  @{
     */
        #define Relay1_INTR_NONE      (uint16)(0x0000u)
        #define Relay1_INTR_RISING    (uint16)(0x0001u)
        #define Relay1_INTR_FALLING   (uint16)(0x0002u)
        #define Relay1_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Relay1_INTR_MASK      (0x01u) 
#endif /* (Relay1__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Relay1_PS                     (* (reg8 *) Relay1__PS)
/* Data Register */
#define Relay1_DR                     (* (reg8 *) Relay1__DR)
/* Port Number */
#define Relay1_PRT_NUM                (* (reg8 *) Relay1__PRT) 
/* Connect to Analog Globals */                                                  
#define Relay1_AG                     (* (reg8 *) Relay1__AG)                       
/* Analog MUX bux enable */
#define Relay1_AMUX                   (* (reg8 *) Relay1__AMUX) 
/* Bidirectional Enable */                                                        
#define Relay1_BIE                    (* (reg8 *) Relay1__BIE)
/* Bit-mask for Aliased Register Access */
#define Relay1_BIT_MASK               (* (reg8 *) Relay1__BIT_MASK)
/* Bypass Enable */
#define Relay1_BYP                    (* (reg8 *) Relay1__BYP)
/* Port wide control signals */                                                   
#define Relay1_CTL                    (* (reg8 *) Relay1__CTL)
/* Drive Modes */
#define Relay1_DM0                    (* (reg8 *) Relay1__DM0) 
#define Relay1_DM1                    (* (reg8 *) Relay1__DM1)
#define Relay1_DM2                    (* (reg8 *) Relay1__DM2) 
/* Input Buffer Disable Override */
#define Relay1_INP_DIS                (* (reg8 *) Relay1__INP_DIS)
/* LCD Common or Segment Drive */
#define Relay1_LCD_COM_SEG            (* (reg8 *) Relay1__LCD_COM_SEG)
/* Enable Segment LCD */
#define Relay1_LCD_EN                 (* (reg8 *) Relay1__LCD_EN)
/* Slew Rate Control */
#define Relay1_SLW                    (* (reg8 *) Relay1__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Relay1_PRTDSI__CAPS_SEL       (* (reg8 *) Relay1__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Relay1_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Relay1__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Relay1_PRTDSI__OE_SEL0        (* (reg8 *) Relay1__PRTDSI__OE_SEL0) 
#define Relay1_PRTDSI__OE_SEL1        (* (reg8 *) Relay1__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Relay1_PRTDSI__OUT_SEL0       (* (reg8 *) Relay1__PRTDSI__OUT_SEL0) 
#define Relay1_PRTDSI__OUT_SEL1       (* (reg8 *) Relay1__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Relay1_PRTDSI__SYNC_OUT       (* (reg8 *) Relay1__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Relay1__SIO_CFG)
    #define Relay1_SIO_HYST_EN        (* (reg8 *) Relay1__SIO_HYST_EN)
    #define Relay1_SIO_REG_HIFREQ     (* (reg8 *) Relay1__SIO_REG_HIFREQ)
    #define Relay1_SIO_CFG            (* (reg8 *) Relay1__SIO_CFG)
    #define Relay1_SIO_DIFF           (* (reg8 *) Relay1__SIO_DIFF)
#endif /* (Relay1__SIO_CFG) */

/* Interrupt Registers */
#if defined(Relay1__INTSTAT)
    #define Relay1_INTSTAT            (* (reg8 *) Relay1__INTSTAT)
    #define Relay1_SNAP               (* (reg8 *) Relay1__SNAP)
    
	#define Relay1_0_INTTYPE_REG 		(* (reg8 *) Relay1__0__INTTYPE)
#endif /* (Relay1__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Relay1_H */


/* [] END OF FILE */
