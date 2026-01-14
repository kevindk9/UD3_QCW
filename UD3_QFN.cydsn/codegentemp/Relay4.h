/*******************************************************************************
* File Name: Relay4.h  
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

#if !defined(CY_PINS_Relay4_H) /* Pins Relay4_H */
#define CY_PINS_Relay4_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Relay4_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Relay4__PORT == 15 && ((Relay4__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Relay4_Write(uint8 value);
void    Relay4_SetDriveMode(uint8 mode);
uint8   Relay4_ReadDataReg(void);
uint8   Relay4_Read(void);
void    Relay4_SetInterruptMode(uint16 position, uint16 mode);
uint8   Relay4_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Relay4_SetDriveMode() function.
     *  @{
     */
        #define Relay4_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Relay4_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Relay4_DM_RES_UP          PIN_DM_RES_UP
        #define Relay4_DM_RES_DWN         PIN_DM_RES_DWN
        #define Relay4_DM_OD_LO           PIN_DM_OD_LO
        #define Relay4_DM_OD_HI           PIN_DM_OD_HI
        #define Relay4_DM_STRONG          PIN_DM_STRONG
        #define Relay4_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Relay4_MASK               Relay4__MASK
#define Relay4_SHIFT              Relay4__SHIFT
#define Relay4_WIDTH              1u

/* Interrupt constants */
#if defined(Relay4__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Relay4_SetInterruptMode() function.
     *  @{
     */
        #define Relay4_INTR_NONE      (uint16)(0x0000u)
        #define Relay4_INTR_RISING    (uint16)(0x0001u)
        #define Relay4_INTR_FALLING   (uint16)(0x0002u)
        #define Relay4_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Relay4_INTR_MASK      (0x01u) 
#endif /* (Relay4__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Relay4_PS                     (* (reg8 *) Relay4__PS)
/* Data Register */
#define Relay4_DR                     (* (reg8 *) Relay4__DR)
/* Port Number */
#define Relay4_PRT_NUM                (* (reg8 *) Relay4__PRT) 
/* Connect to Analog Globals */                                                  
#define Relay4_AG                     (* (reg8 *) Relay4__AG)                       
/* Analog MUX bux enable */
#define Relay4_AMUX                   (* (reg8 *) Relay4__AMUX) 
/* Bidirectional Enable */                                                        
#define Relay4_BIE                    (* (reg8 *) Relay4__BIE)
/* Bit-mask for Aliased Register Access */
#define Relay4_BIT_MASK               (* (reg8 *) Relay4__BIT_MASK)
/* Bypass Enable */
#define Relay4_BYP                    (* (reg8 *) Relay4__BYP)
/* Port wide control signals */                                                   
#define Relay4_CTL                    (* (reg8 *) Relay4__CTL)
/* Drive Modes */
#define Relay4_DM0                    (* (reg8 *) Relay4__DM0) 
#define Relay4_DM1                    (* (reg8 *) Relay4__DM1)
#define Relay4_DM2                    (* (reg8 *) Relay4__DM2) 
/* Input Buffer Disable Override */
#define Relay4_INP_DIS                (* (reg8 *) Relay4__INP_DIS)
/* LCD Common or Segment Drive */
#define Relay4_LCD_COM_SEG            (* (reg8 *) Relay4__LCD_COM_SEG)
/* Enable Segment LCD */
#define Relay4_LCD_EN                 (* (reg8 *) Relay4__LCD_EN)
/* Slew Rate Control */
#define Relay4_SLW                    (* (reg8 *) Relay4__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Relay4_PRTDSI__CAPS_SEL       (* (reg8 *) Relay4__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Relay4_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Relay4__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Relay4_PRTDSI__OE_SEL0        (* (reg8 *) Relay4__PRTDSI__OE_SEL0) 
#define Relay4_PRTDSI__OE_SEL1        (* (reg8 *) Relay4__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Relay4_PRTDSI__OUT_SEL0       (* (reg8 *) Relay4__PRTDSI__OUT_SEL0) 
#define Relay4_PRTDSI__OUT_SEL1       (* (reg8 *) Relay4__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Relay4_PRTDSI__SYNC_OUT       (* (reg8 *) Relay4__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Relay4__SIO_CFG)
    #define Relay4_SIO_HYST_EN        (* (reg8 *) Relay4__SIO_HYST_EN)
    #define Relay4_SIO_REG_HIFREQ     (* (reg8 *) Relay4__SIO_REG_HIFREQ)
    #define Relay4_SIO_CFG            (* (reg8 *) Relay4__SIO_CFG)
    #define Relay4_SIO_DIFF           (* (reg8 *) Relay4__SIO_DIFF)
#endif /* (Relay4__SIO_CFG) */

/* Interrupt Registers */
#if defined(Relay4__INTSTAT)
    #define Relay4_INTSTAT            (* (reg8 *) Relay4__INTSTAT)
    #define Relay4_SNAP               (* (reg8 *) Relay4__SNAP)
    
	#define Relay4_0_INTTYPE_REG 		(* (reg8 *) Relay4__0__INTTYPE)
#endif /* (Relay4__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Relay4_H */


/* [] END OF FILE */
