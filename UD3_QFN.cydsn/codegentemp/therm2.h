/*******************************************************************************
* File Name: therm2.h  
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

#if !defined(CY_PINS_therm2_H) /* Pins therm2_H */
#define CY_PINS_therm2_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "therm2_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 therm2__PORT == 15 && ((therm2__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    therm2_Write(uint8 value);
void    therm2_SetDriveMode(uint8 mode);
uint8   therm2_ReadDataReg(void);
uint8   therm2_Read(void);
void    therm2_SetInterruptMode(uint16 position, uint16 mode);
uint8   therm2_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the therm2_SetDriveMode() function.
     *  @{
     */
        #define therm2_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define therm2_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define therm2_DM_RES_UP          PIN_DM_RES_UP
        #define therm2_DM_RES_DWN         PIN_DM_RES_DWN
        #define therm2_DM_OD_LO           PIN_DM_OD_LO
        #define therm2_DM_OD_HI           PIN_DM_OD_HI
        #define therm2_DM_STRONG          PIN_DM_STRONG
        #define therm2_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define therm2_MASK               therm2__MASK
#define therm2_SHIFT              therm2__SHIFT
#define therm2_WIDTH              1u

/* Interrupt constants */
#if defined(therm2__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in therm2_SetInterruptMode() function.
     *  @{
     */
        #define therm2_INTR_NONE      (uint16)(0x0000u)
        #define therm2_INTR_RISING    (uint16)(0x0001u)
        #define therm2_INTR_FALLING   (uint16)(0x0002u)
        #define therm2_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define therm2_INTR_MASK      (0x01u) 
#endif /* (therm2__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define therm2_PS                     (* (reg8 *) therm2__PS)
/* Data Register */
#define therm2_DR                     (* (reg8 *) therm2__DR)
/* Port Number */
#define therm2_PRT_NUM                (* (reg8 *) therm2__PRT) 
/* Connect to Analog Globals */                                                  
#define therm2_AG                     (* (reg8 *) therm2__AG)                       
/* Analog MUX bux enable */
#define therm2_AMUX                   (* (reg8 *) therm2__AMUX) 
/* Bidirectional Enable */                                                        
#define therm2_BIE                    (* (reg8 *) therm2__BIE)
/* Bit-mask for Aliased Register Access */
#define therm2_BIT_MASK               (* (reg8 *) therm2__BIT_MASK)
/* Bypass Enable */
#define therm2_BYP                    (* (reg8 *) therm2__BYP)
/* Port wide control signals */                                                   
#define therm2_CTL                    (* (reg8 *) therm2__CTL)
/* Drive Modes */
#define therm2_DM0                    (* (reg8 *) therm2__DM0) 
#define therm2_DM1                    (* (reg8 *) therm2__DM1)
#define therm2_DM2                    (* (reg8 *) therm2__DM2) 
/* Input Buffer Disable Override */
#define therm2_INP_DIS                (* (reg8 *) therm2__INP_DIS)
/* LCD Common or Segment Drive */
#define therm2_LCD_COM_SEG            (* (reg8 *) therm2__LCD_COM_SEG)
/* Enable Segment LCD */
#define therm2_LCD_EN                 (* (reg8 *) therm2__LCD_EN)
/* Slew Rate Control */
#define therm2_SLW                    (* (reg8 *) therm2__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define therm2_PRTDSI__CAPS_SEL       (* (reg8 *) therm2__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define therm2_PRTDSI__DBL_SYNC_IN    (* (reg8 *) therm2__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define therm2_PRTDSI__OE_SEL0        (* (reg8 *) therm2__PRTDSI__OE_SEL0) 
#define therm2_PRTDSI__OE_SEL1        (* (reg8 *) therm2__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define therm2_PRTDSI__OUT_SEL0       (* (reg8 *) therm2__PRTDSI__OUT_SEL0) 
#define therm2_PRTDSI__OUT_SEL1       (* (reg8 *) therm2__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define therm2_PRTDSI__SYNC_OUT       (* (reg8 *) therm2__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(therm2__SIO_CFG)
    #define therm2_SIO_HYST_EN        (* (reg8 *) therm2__SIO_HYST_EN)
    #define therm2_SIO_REG_HIFREQ     (* (reg8 *) therm2__SIO_REG_HIFREQ)
    #define therm2_SIO_CFG            (* (reg8 *) therm2__SIO_CFG)
    #define therm2_SIO_DIFF           (* (reg8 *) therm2__SIO_DIFF)
#endif /* (therm2__SIO_CFG) */

/* Interrupt Registers */
#if defined(therm2__INTSTAT)
    #define therm2_INTSTAT            (* (reg8 *) therm2__INTSTAT)
    #define therm2_SNAP               (* (reg8 *) therm2__SNAP)
    
	#define therm2_0_INTTYPE_REG 		(* (reg8 *) therm2__0__INTTYPE)
#endif /* (therm2__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_therm2_H */


/* [] END OF FILE */
