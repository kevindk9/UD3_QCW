/*******************************************************************************
* File Name: CTout.h  
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

#if !defined(CY_PINS_CTout_H) /* Pins CTout_H */
#define CY_PINS_CTout_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "CTout_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 CTout__PORT == 15 && ((CTout__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    CTout_Write(uint8 value);
void    CTout_SetDriveMode(uint8 mode);
uint8   CTout_ReadDataReg(void);
uint8   CTout_Read(void);
void    CTout_SetInterruptMode(uint16 position, uint16 mode);
uint8   CTout_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the CTout_SetDriveMode() function.
     *  @{
     */
        #define CTout_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define CTout_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define CTout_DM_RES_UP          PIN_DM_RES_UP
        #define CTout_DM_RES_DWN         PIN_DM_RES_DWN
        #define CTout_DM_OD_LO           PIN_DM_OD_LO
        #define CTout_DM_OD_HI           PIN_DM_OD_HI
        #define CTout_DM_STRONG          PIN_DM_STRONG
        #define CTout_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define CTout_MASK               CTout__MASK
#define CTout_SHIFT              CTout__SHIFT
#define CTout_WIDTH              1u

/* Interrupt constants */
#if defined(CTout__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in CTout_SetInterruptMode() function.
     *  @{
     */
        #define CTout_INTR_NONE      (uint16)(0x0000u)
        #define CTout_INTR_RISING    (uint16)(0x0001u)
        #define CTout_INTR_FALLING   (uint16)(0x0002u)
        #define CTout_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define CTout_INTR_MASK      (0x01u) 
#endif /* (CTout__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define CTout_PS                     (* (reg8 *) CTout__PS)
/* Data Register */
#define CTout_DR                     (* (reg8 *) CTout__DR)
/* Port Number */
#define CTout_PRT_NUM                (* (reg8 *) CTout__PRT) 
/* Connect to Analog Globals */                                                  
#define CTout_AG                     (* (reg8 *) CTout__AG)                       
/* Analog MUX bux enable */
#define CTout_AMUX                   (* (reg8 *) CTout__AMUX) 
/* Bidirectional Enable */                                                        
#define CTout_BIE                    (* (reg8 *) CTout__BIE)
/* Bit-mask for Aliased Register Access */
#define CTout_BIT_MASK               (* (reg8 *) CTout__BIT_MASK)
/* Bypass Enable */
#define CTout_BYP                    (* (reg8 *) CTout__BYP)
/* Port wide control signals */                                                   
#define CTout_CTL                    (* (reg8 *) CTout__CTL)
/* Drive Modes */
#define CTout_DM0                    (* (reg8 *) CTout__DM0) 
#define CTout_DM1                    (* (reg8 *) CTout__DM1)
#define CTout_DM2                    (* (reg8 *) CTout__DM2) 
/* Input Buffer Disable Override */
#define CTout_INP_DIS                (* (reg8 *) CTout__INP_DIS)
/* LCD Common or Segment Drive */
#define CTout_LCD_COM_SEG            (* (reg8 *) CTout__LCD_COM_SEG)
/* Enable Segment LCD */
#define CTout_LCD_EN                 (* (reg8 *) CTout__LCD_EN)
/* Slew Rate Control */
#define CTout_SLW                    (* (reg8 *) CTout__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define CTout_PRTDSI__CAPS_SEL       (* (reg8 *) CTout__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define CTout_PRTDSI__DBL_SYNC_IN    (* (reg8 *) CTout__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define CTout_PRTDSI__OE_SEL0        (* (reg8 *) CTout__PRTDSI__OE_SEL0) 
#define CTout_PRTDSI__OE_SEL1        (* (reg8 *) CTout__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define CTout_PRTDSI__OUT_SEL0       (* (reg8 *) CTout__PRTDSI__OUT_SEL0) 
#define CTout_PRTDSI__OUT_SEL1       (* (reg8 *) CTout__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define CTout_PRTDSI__SYNC_OUT       (* (reg8 *) CTout__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(CTout__SIO_CFG)
    #define CTout_SIO_HYST_EN        (* (reg8 *) CTout__SIO_HYST_EN)
    #define CTout_SIO_REG_HIFREQ     (* (reg8 *) CTout__SIO_REG_HIFREQ)
    #define CTout_SIO_CFG            (* (reg8 *) CTout__SIO_CFG)
    #define CTout_SIO_DIFF           (* (reg8 *) CTout__SIO_DIFF)
#endif /* (CTout__SIO_CFG) */

/* Interrupt Registers */
#if defined(CTout__INTSTAT)
    #define CTout_INTSTAT            (* (reg8 *) CTout__INTSTAT)
    #define CTout_SNAP               (* (reg8 *) CTout__SNAP)
    
	#define CTout_0_INTTYPE_REG 		(* (reg8 *) CTout__0__INTTYPE)
#endif /* (CTout__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_CTout_H */


/* [] END OF FILE */
