/*******************************************************************************
* File Name: GD2A.h  
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

#if !defined(CY_PINS_GD2A_H) /* Pins GD2A_H */
#define CY_PINS_GD2A_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "GD2A_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 GD2A__PORT == 15 && ((GD2A__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    GD2A_Write(uint8 value);
void    GD2A_SetDriveMode(uint8 mode);
uint8   GD2A_ReadDataReg(void);
uint8   GD2A_Read(void);
void    GD2A_SetInterruptMode(uint16 position, uint16 mode);
uint8   GD2A_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the GD2A_SetDriveMode() function.
     *  @{
     */
        #define GD2A_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define GD2A_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define GD2A_DM_RES_UP          PIN_DM_RES_UP
        #define GD2A_DM_RES_DWN         PIN_DM_RES_DWN
        #define GD2A_DM_OD_LO           PIN_DM_OD_LO
        #define GD2A_DM_OD_HI           PIN_DM_OD_HI
        #define GD2A_DM_STRONG          PIN_DM_STRONG
        #define GD2A_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define GD2A_MASK               GD2A__MASK
#define GD2A_SHIFT              GD2A__SHIFT
#define GD2A_WIDTH              1u

/* Interrupt constants */
#if defined(GD2A__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in GD2A_SetInterruptMode() function.
     *  @{
     */
        #define GD2A_INTR_NONE      (uint16)(0x0000u)
        #define GD2A_INTR_RISING    (uint16)(0x0001u)
        #define GD2A_INTR_FALLING   (uint16)(0x0002u)
        #define GD2A_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define GD2A_INTR_MASK      (0x01u) 
#endif /* (GD2A__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define GD2A_PS                     (* (reg8 *) GD2A__PS)
/* Data Register */
#define GD2A_DR                     (* (reg8 *) GD2A__DR)
/* Port Number */
#define GD2A_PRT_NUM                (* (reg8 *) GD2A__PRT) 
/* Connect to Analog Globals */                                                  
#define GD2A_AG                     (* (reg8 *) GD2A__AG)                       
/* Analog MUX bux enable */
#define GD2A_AMUX                   (* (reg8 *) GD2A__AMUX) 
/* Bidirectional Enable */                                                        
#define GD2A_BIE                    (* (reg8 *) GD2A__BIE)
/* Bit-mask for Aliased Register Access */
#define GD2A_BIT_MASK               (* (reg8 *) GD2A__BIT_MASK)
/* Bypass Enable */
#define GD2A_BYP                    (* (reg8 *) GD2A__BYP)
/* Port wide control signals */                                                   
#define GD2A_CTL                    (* (reg8 *) GD2A__CTL)
/* Drive Modes */
#define GD2A_DM0                    (* (reg8 *) GD2A__DM0) 
#define GD2A_DM1                    (* (reg8 *) GD2A__DM1)
#define GD2A_DM2                    (* (reg8 *) GD2A__DM2) 
/* Input Buffer Disable Override */
#define GD2A_INP_DIS                (* (reg8 *) GD2A__INP_DIS)
/* LCD Common or Segment Drive */
#define GD2A_LCD_COM_SEG            (* (reg8 *) GD2A__LCD_COM_SEG)
/* Enable Segment LCD */
#define GD2A_LCD_EN                 (* (reg8 *) GD2A__LCD_EN)
/* Slew Rate Control */
#define GD2A_SLW                    (* (reg8 *) GD2A__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define GD2A_PRTDSI__CAPS_SEL       (* (reg8 *) GD2A__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define GD2A_PRTDSI__DBL_SYNC_IN    (* (reg8 *) GD2A__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define GD2A_PRTDSI__OE_SEL0        (* (reg8 *) GD2A__PRTDSI__OE_SEL0) 
#define GD2A_PRTDSI__OE_SEL1        (* (reg8 *) GD2A__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define GD2A_PRTDSI__OUT_SEL0       (* (reg8 *) GD2A__PRTDSI__OUT_SEL0) 
#define GD2A_PRTDSI__OUT_SEL1       (* (reg8 *) GD2A__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define GD2A_PRTDSI__SYNC_OUT       (* (reg8 *) GD2A__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(GD2A__SIO_CFG)
    #define GD2A_SIO_HYST_EN        (* (reg8 *) GD2A__SIO_HYST_EN)
    #define GD2A_SIO_REG_HIFREQ     (* (reg8 *) GD2A__SIO_REG_HIFREQ)
    #define GD2A_SIO_CFG            (* (reg8 *) GD2A__SIO_CFG)
    #define GD2A_SIO_DIFF           (* (reg8 *) GD2A__SIO_DIFF)
#endif /* (GD2A__SIO_CFG) */

/* Interrupt Registers */
#if defined(GD2A__INTSTAT)
    #define GD2A_INTSTAT            (* (reg8 *) GD2A__INTSTAT)
    #define GD2A_SNAP               (* (reg8 *) GD2A__SNAP)
    
	#define GD2A_0_INTTYPE_REG 		(* (reg8 *) GD2A__0__INTTYPE)
#endif /* (GD2A__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_GD2A_H */


/* [] END OF FILE */
