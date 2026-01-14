/*******************************************************************************
* File Name: Vdriver.h  
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

#if !defined(CY_PINS_Vdriver_H) /* Pins Vdriver_H */
#define CY_PINS_Vdriver_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Vdriver_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Vdriver__PORT == 15 && ((Vdriver__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Vdriver_Write(uint8 value);
void    Vdriver_SetDriveMode(uint8 mode);
uint8   Vdriver_ReadDataReg(void);
uint8   Vdriver_Read(void);
void    Vdriver_SetInterruptMode(uint16 position, uint16 mode);
uint8   Vdriver_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Vdriver_SetDriveMode() function.
     *  @{
     */
        #define Vdriver_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Vdriver_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Vdriver_DM_RES_UP          PIN_DM_RES_UP
        #define Vdriver_DM_RES_DWN         PIN_DM_RES_DWN
        #define Vdriver_DM_OD_LO           PIN_DM_OD_LO
        #define Vdriver_DM_OD_HI           PIN_DM_OD_HI
        #define Vdriver_DM_STRONG          PIN_DM_STRONG
        #define Vdriver_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Vdriver_MASK               Vdriver__MASK
#define Vdriver_SHIFT              Vdriver__SHIFT
#define Vdriver_WIDTH              1u

/* Interrupt constants */
#if defined(Vdriver__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Vdriver_SetInterruptMode() function.
     *  @{
     */
        #define Vdriver_INTR_NONE      (uint16)(0x0000u)
        #define Vdriver_INTR_RISING    (uint16)(0x0001u)
        #define Vdriver_INTR_FALLING   (uint16)(0x0002u)
        #define Vdriver_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Vdriver_INTR_MASK      (0x01u) 
#endif /* (Vdriver__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Vdriver_PS                     (* (reg8 *) Vdriver__PS)
/* Data Register */
#define Vdriver_DR                     (* (reg8 *) Vdriver__DR)
/* Port Number */
#define Vdriver_PRT_NUM                (* (reg8 *) Vdriver__PRT) 
/* Connect to Analog Globals */                                                  
#define Vdriver_AG                     (* (reg8 *) Vdriver__AG)                       
/* Analog MUX bux enable */
#define Vdriver_AMUX                   (* (reg8 *) Vdriver__AMUX) 
/* Bidirectional Enable */                                                        
#define Vdriver_BIE                    (* (reg8 *) Vdriver__BIE)
/* Bit-mask for Aliased Register Access */
#define Vdriver_BIT_MASK               (* (reg8 *) Vdriver__BIT_MASK)
/* Bypass Enable */
#define Vdriver_BYP                    (* (reg8 *) Vdriver__BYP)
/* Port wide control signals */                                                   
#define Vdriver_CTL                    (* (reg8 *) Vdriver__CTL)
/* Drive Modes */
#define Vdriver_DM0                    (* (reg8 *) Vdriver__DM0) 
#define Vdriver_DM1                    (* (reg8 *) Vdriver__DM1)
#define Vdriver_DM2                    (* (reg8 *) Vdriver__DM2) 
/* Input Buffer Disable Override */
#define Vdriver_INP_DIS                (* (reg8 *) Vdriver__INP_DIS)
/* LCD Common or Segment Drive */
#define Vdriver_LCD_COM_SEG            (* (reg8 *) Vdriver__LCD_COM_SEG)
/* Enable Segment LCD */
#define Vdriver_LCD_EN                 (* (reg8 *) Vdriver__LCD_EN)
/* Slew Rate Control */
#define Vdriver_SLW                    (* (reg8 *) Vdriver__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Vdriver_PRTDSI__CAPS_SEL       (* (reg8 *) Vdriver__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Vdriver_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Vdriver__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Vdriver_PRTDSI__OE_SEL0        (* (reg8 *) Vdriver__PRTDSI__OE_SEL0) 
#define Vdriver_PRTDSI__OE_SEL1        (* (reg8 *) Vdriver__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Vdriver_PRTDSI__OUT_SEL0       (* (reg8 *) Vdriver__PRTDSI__OUT_SEL0) 
#define Vdriver_PRTDSI__OUT_SEL1       (* (reg8 *) Vdriver__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Vdriver_PRTDSI__SYNC_OUT       (* (reg8 *) Vdriver__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Vdriver__SIO_CFG)
    #define Vdriver_SIO_HYST_EN        (* (reg8 *) Vdriver__SIO_HYST_EN)
    #define Vdriver_SIO_REG_HIFREQ     (* (reg8 *) Vdriver__SIO_REG_HIFREQ)
    #define Vdriver_SIO_CFG            (* (reg8 *) Vdriver__SIO_CFG)
    #define Vdriver_SIO_DIFF           (* (reg8 *) Vdriver__SIO_DIFF)
#endif /* (Vdriver__SIO_CFG) */

/* Interrupt Registers */
#if defined(Vdriver__INTSTAT)
    #define Vdriver_INTSTAT            (* (reg8 *) Vdriver__INTSTAT)
    #define Vdriver_SNAP               (* (reg8 *) Vdriver__SNAP)
    
	#define Vdriver_0_INTTYPE_REG 		(* (reg8 *) Vdriver__0__INTTYPE)
#endif /* (Vdriver__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Vdriver_H */


/* [] END OF FILE */
