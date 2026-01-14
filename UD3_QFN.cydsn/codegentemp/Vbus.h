/*******************************************************************************
* File Name: Vbus.h  
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

#if !defined(CY_PINS_Vbus_H) /* Pins Vbus_H */
#define CY_PINS_Vbus_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vbus_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vbus__PORT == 15 && ((Vbus__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vbus_Write(uint8 value);
void    Vbus_SetDriveMode(uint8 mode);
uint8   Vbus_ReadDataReg(void);
uint8   Vbus_Read(void);
void    Vbus_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vbus_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vbus_SetDriveMode() function.
     *  @{
     */
        #define Vbus_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vbus_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vbus_DM_RES_UP          PIN_DM_RES_UP
        #define Vbus_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vbus_DM_OD_LO           PIN_DM_OD_LO
        #define Vbus_DM_OD_HI           PIN_DM_OD_HI
        #define Vbus_DM_STRONG          PIN_DM_STRONG
        #define Vbus_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vbus_MASK               Vbus__MASK
#define Vbus_SHIFT              Vbus__SHIFT
#define Vbus_WIDTH              1u

/* Interrupt constants */
#if defined(Vbus__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vbus_SetInterruptMode() function.
     *  @{
     */
        #define Vbus_INTR_NONE      (uint16)(0x0000u)
        #define Vbus_INTR_RISING    (uint16)(0x0001u)
        #define Vbus_INTR_FALLING   (uint16)(0x0002u)
        #define Vbus_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vbus_INTR_MASK      (0x01u) 
#endif /* (Vbus__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vbus_PS                     (* (reg8 *) Vbus__PS)
/* Data Register */
#define Vbus_DR                     (* (reg8 *) Vbus__DR)
/* Port Number */
#define Vbus_PRT_NUM                (* (reg8 *) Vbus__PRT) 
/* Connect to Analog Globals */                                                  
#define Vbus_AG                     (* (reg8 *) Vbus__AG)                       
/* Analog MUX bux enable */
#define Vbus_AMUX                   (* (reg8 *) Vbus__AMUX) 
/* Bidirectional Enable */                                                        
#define Vbus_BIE                    (* (reg8 *) Vbus__BIE)
/* Bit-mask for Aliased Register Access */
#define Vbus_BIT_MASK               (* (reg8 *) Vbus__BIT_MASK)
/* Bypass Enable */
#define Vbus_BYP                    (* (reg8 *) Vbus__BYP)
/* Port wide control signals */                                                   
#define Vbus_CTL                    (* (reg8 *) Vbus__CTL)
/* Drive Modes */
#define Vbus_DM0                    (* (reg8 *) Vbus__DM0) 
#define Vbus_DM1                    (* (reg8 *) Vbus__DM1)
#define Vbus_DM2                    (* (reg8 *) Vbus__DM2) 
/* Input Buffer Disable Override */
#define Vbus_INP_DIS                (* (reg8 *) Vbus__INP_DIS)
/* LCD Common or Segment Drive */
#define Vbus_LCD_COM_SEG            (* (reg8 *) Vbus__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vbus_LCD_EN                 (* (reg8 *) Vbus__LCD_EN)
/* Slew Rate Control */
#define Vbus_SLW                    (* (reg8 *) Vbus__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vbus_PRTDSI__CAPS_SEL       (* (reg8 *) Vbus__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vbus_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vbus__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vbus_PRTDSI__OE_SEL0        (* (reg8 *) Vbus__PRTDSI__OE_SEL0) 
#define Vbus_PRTDSI__OE_SEL1        (* (reg8 *) Vbus__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vbus_PRTDSI__OUT_SEL0       (* (reg8 *) Vbus__PRTDSI__OUT_SEL0) 
#define Vbus_PRTDSI__OUT_SEL1       (* (reg8 *) Vbus__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vbus_PRTDSI__SYNC_OUT       (* (reg8 *) Vbus__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vbus__SIO_CFG)
    #define Vbus_SIO_HYST_EN        (* (reg8 *) Vbus__SIO_HYST_EN)
    #define Vbus_SIO_REG_HIFREQ     (* (reg8 *) Vbus__SIO_REG_HIFREQ)
    #define Vbus_SIO_CFG            (* (reg8 *) Vbus__SIO_CFG)
    #define Vbus_SIO_DIFF           (* (reg8 *) Vbus__SIO_DIFF)
#endif /* (Vbus__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vbus__INTSTAT)
    #define Vbus_INTSTAT            (* (reg8 *) Vbus__INTSTAT)
    #define Vbus_SNAP               (* (reg8 *) Vbus__SNAP)
    
	#define Vbus_0_INTTYPE_REG 		(* (reg8 *) Vbus__0__INTTYPE)
#endif /* (Vbus__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vbus_H */


/* [] END OF FILE */
