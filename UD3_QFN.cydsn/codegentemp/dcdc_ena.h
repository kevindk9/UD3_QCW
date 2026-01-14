/*******************************************************************************
* File Name: dcdc_ena.h  
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

#if !defined(CY_PINS_dcdc_ena_H) /* Pins dcdc_ena_H */
#define CY_PINS_dcdc_ena_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "dcdc_ena_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 dcdc_ena__PORT == 15 && ((dcdc_ena__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    dcdc_ena_Write(uint8 value);
void    dcdc_ena_SetDriveMode(uint8 mode);
uint8   dcdc_ena_ReadDataReg(void);
uint8   dcdc_ena_Read(void);
void    dcdc_ena_SetInterruptMode(uint16 position, uint16 mode);
uint8   dcdc_ena_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the dcdc_ena_SetDriveMode() function.
     *  @{
     */
        #define dcdc_ena_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define dcdc_ena_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define dcdc_ena_DM_RES_UP          PIN_DM_RES_UP
        #define dcdc_ena_DM_RES_DWN         PIN_DM_RES_DWN
        #define dcdc_ena_DM_OD_LO           PIN_DM_OD_LO
        #define dcdc_ena_DM_OD_HI           PIN_DM_OD_HI
        #define dcdc_ena_DM_STRONG          PIN_DM_STRONG
        #define dcdc_ena_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define dcdc_ena_MASK               dcdc_ena__MASK
#define dcdc_ena_SHIFT              dcdc_ena__SHIFT
#define dcdc_ena_WIDTH              1u

/* Interrupt constants */
#if defined(dcdc_ena__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in dcdc_ena_SetInterruptMode() function.
     *  @{
     */
        #define dcdc_ena_INTR_NONE      (uint16)(0x0000u)
        #define dcdc_ena_INTR_RISING    (uint16)(0x0001u)
        #define dcdc_ena_INTR_FALLING   (uint16)(0x0002u)
        #define dcdc_ena_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define dcdc_ena_INTR_MASK      (0x01u) 
#endif /* (dcdc_ena__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define dcdc_ena_PS                     (* (reg8 *) dcdc_ena__PS)
/* Data Register */
#define dcdc_ena_DR                     (* (reg8 *) dcdc_ena__DR)
/* Port Number */
#define dcdc_ena_PRT_NUM                (* (reg8 *) dcdc_ena__PRT) 
/* Connect to Analog Globals */                                                  
#define dcdc_ena_AG                     (* (reg8 *) dcdc_ena__AG)                       
/* Analog MUX bux enable */
#define dcdc_ena_AMUX                   (* (reg8 *) dcdc_ena__AMUX) 
/* Bidirectional Enable */                                                        
#define dcdc_ena_BIE                    (* (reg8 *) dcdc_ena__BIE)
/* Bit-mask for Aliased Register Access */
#define dcdc_ena_BIT_MASK               (* (reg8 *) dcdc_ena__BIT_MASK)
/* Bypass Enable */
#define dcdc_ena_BYP                    (* (reg8 *) dcdc_ena__BYP)
/* Port wide control signals */                                                   
#define dcdc_ena_CTL                    (* (reg8 *) dcdc_ena__CTL)
/* Drive Modes */
#define dcdc_ena_DM0                    (* (reg8 *) dcdc_ena__DM0) 
#define dcdc_ena_DM1                    (* (reg8 *) dcdc_ena__DM1)
#define dcdc_ena_DM2                    (* (reg8 *) dcdc_ena__DM2) 
/* Input Buffer Disable Override */
#define dcdc_ena_INP_DIS                (* (reg8 *) dcdc_ena__INP_DIS)
/* LCD Common or Segment Drive */
#define dcdc_ena_LCD_COM_SEG            (* (reg8 *) dcdc_ena__LCD_COM_SEG)
/* Enable Segment LCD */
#define dcdc_ena_LCD_EN                 (* (reg8 *) dcdc_ena__LCD_EN)
/* Slew Rate Control */
#define dcdc_ena_SLW                    (* (reg8 *) dcdc_ena__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define dcdc_ena_PRTDSI__CAPS_SEL       (* (reg8 *) dcdc_ena__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define dcdc_ena_PRTDSI__DBL_SYNC_IN    (* (reg8 *) dcdc_ena__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define dcdc_ena_PRTDSI__OE_SEL0        (* (reg8 *) dcdc_ena__PRTDSI__OE_SEL0) 
#define dcdc_ena_PRTDSI__OE_SEL1        (* (reg8 *) dcdc_ena__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define dcdc_ena_PRTDSI__OUT_SEL0       (* (reg8 *) dcdc_ena__PRTDSI__OUT_SEL0) 
#define dcdc_ena_PRTDSI__OUT_SEL1       (* (reg8 *) dcdc_ena__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define dcdc_ena_PRTDSI__SYNC_OUT       (* (reg8 *) dcdc_ena__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(dcdc_ena__SIO_CFG)
    #define dcdc_ena_SIO_HYST_EN        (* (reg8 *) dcdc_ena__SIO_HYST_EN)
    #define dcdc_ena_SIO_REG_HIFREQ     (* (reg8 *) dcdc_ena__SIO_REG_HIFREQ)
    #define dcdc_ena_SIO_CFG            (* (reg8 *) dcdc_ena__SIO_CFG)
    #define dcdc_ena_SIO_DIFF           (* (reg8 *) dcdc_ena__SIO_DIFF)
#endif /* (dcdc_ena__SIO_CFG) */

/* Interrupt Registers */
#if defined(dcdc_ena__INTSTAT)
    #define dcdc_ena_INTSTAT            (* (reg8 *) dcdc_ena__INTSTAT)
    #define dcdc_ena_SNAP               (* (reg8 *) dcdc_ena__SNAP)
    
	#define dcdc_ena_0_INTTYPE_REG 		(* (reg8 *) dcdc_ena__0__INTTYPE)
#endif /* (dcdc_ena__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_dcdc_ena_H */


/* [] END OF FILE */
