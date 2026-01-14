/*******************************************************************************
* File Name: ZCDB.h  
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

#if !defined(CY_PINS_ZCDB_H) /* Pins ZCDB_H */
#define CY_PINS_ZCDB_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "ZCDB_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 ZCDB__PORT == 15 && ((ZCDB__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    ZCDB_Write(uint8 value);
void    ZCDB_SetDriveMode(uint8 mode);
uint8   ZCDB_ReadDataReg(void);
uint8   ZCDB_Read(void);
void    ZCDB_SetInterruptMode(uint16 position, uint16 mode);
uint8   ZCDB_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the ZCDB_SetDriveMode() function.
     *  @{
     */
        #define ZCDB_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define ZCDB_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define ZCDB_DM_RES_UP          PIN_DM_RES_UP
        #define ZCDB_DM_RES_DWN         PIN_DM_RES_DWN
        #define ZCDB_DM_OD_LO           PIN_DM_OD_LO
        #define ZCDB_DM_OD_HI           PIN_DM_OD_HI
        #define ZCDB_DM_STRONG          PIN_DM_STRONG
        #define ZCDB_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define ZCDB_MASK               ZCDB__MASK
#define ZCDB_SHIFT              ZCDB__SHIFT
#define ZCDB_WIDTH              1u

/* Interrupt constants */
#if defined(ZCDB__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in ZCDB_SetInterruptMode() function.
     *  @{
     */
        #define ZCDB_INTR_NONE      (uint16)(0x0000u)
        #define ZCDB_INTR_RISING    (uint16)(0x0001u)
        #define ZCDB_INTR_FALLING   (uint16)(0x0002u)
        #define ZCDB_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define ZCDB_INTR_MASK      (0x01u) 
#endif /* (ZCDB__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define ZCDB_PS                     (* (reg8 *) ZCDB__PS)
/* Data Register */
#define ZCDB_DR                     (* (reg8 *) ZCDB__DR)
/* Port Number */
#define ZCDB_PRT_NUM                (* (reg8 *) ZCDB__PRT) 
/* Connect to Analog Globals */                                                  
#define ZCDB_AG                     (* (reg8 *) ZCDB__AG)                       
/* Analog MUX bux enable */
#define ZCDB_AMUX                   (* (reg8 *) ZCDB__AMUX) 
/* Bidirectional Enable */                                                        
#define ZCDB_BIE                    (* (reg8 *) ZCDB__BIE)
/* Bit-mask for Aliased Register Access */
#define ZCDB_BIT_MASK               (* (reg8 *) ZCDB__BIT_MASK)
/* Bypass Enable */
#define ZCDB_BYP                    (* (reg8 *) ZCDB__BYP)
/* Port wide control signals */                                                   
#define ZCDB_CTL                    (* (reg8 *) ZCDB__CTL)
/* Drive Modes */
#define ZCDB_DM0                    (* (reg8 *) ZCDB__DM0) 
#define ZCDB_DM1                    (* (reg8 *) ZCDB__DM1)
#define ZCDB_DM2                    (* (reg8 *) ZCDB__DM2) 
/* Input Buffer Disable Override */
#define ZCDB_INP_DIS                (* (reg8 *) ZCDB__INP_DIS)
/* LCD Common or Segment Drive */
#define ZCDB_LCD_COM_SEG            (* (reg8 *) ZCDB__LCD_COM_SEG)
/* Enable Segment LCD */
#define ZCDB_LCD_EN                 (* (reg8 *) ZCDB__LCD_EN)
/* Slew Rate Control */
#define ZCDB_SLW                    (* (reg8 *) ZCDB__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define ZCDB_PRTDSI__CAPS_SEL       (* (reg8 *) ZCDB__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define ZCDB_PRTDSI__DBL_SYNC_IN    (* (reg8 *) ZCDB__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define ZCDB_PRTDSI__OE_SEL0        (* (reg8 *) ZCDB__PRTDSI__OE_SEL0) 
#define ZCDB_PRTDSI__OE_SEL1        (* (reg8 *) ZCDB__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define ZCDB_PRTDSI__OUT_SEL0       (* (reg8 *) ZCDB__PRTDSI__OUT_SEL0) 
#define ZCDB_PRTDSI__OUT_SEL1       (* (reg8 *) ZCDB__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define ZCDB_PRTDSI__SYNC_OUT       (* (reg8 *) ZCDB__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(ZCDB__SIO_CFG)
    #define ZCDB_SIO_HYST_EN        (* (reg8 *) ZCDB__SIO_HYST_EN)
    #define ZCDB_SIO_REG_HIFREQ     (* (reg8 *) ZCDB__SIO_REG_HIFREQ)
    #define ZCDB_SIO_CFG            (* (reg8 *) ZCDB__SIO_CFG)
    #define ZCDB_SIO_DIFF           (* (reg8 *) ZCDB__SIO_DIFF)
#endif /* (ZCDB__SIO_CFG) */

/* Interrupt Registers */
#if defined(ZCDB__INTSTAT)
    #define ZCDB_INTSTAT            (* (reg8 *) ZCDB__INTSTAT)
    #define ZCDB_SNAP               (* (reg8 *) ZCDB__SNAP)
    
	#define ZCDB_0_INTTYPE_REG 		(* (reg8 *) ZCDB__0__INTTYPE)
#endif /* (ZCDB__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_ZCDB_H */


/* [] END OF FILE */
