/*******************************************************************************
* File Name: CyINTCLK.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_CyINTCLK_H)
#define CY_CLOCK_CyINTCLK_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void CyINTCLK_Start(void) ;
void CyINTCLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void CyINTCLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void CyINTCLK_StandbyPower(uint8 state) ;
void CyINTCLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 CyINTCLK_GetDividerRegister(void) ;
void CyINTCLK_SetModeRegister(uint8 modeBitMask) ;
void CyINTCLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 CyINTCLK_GetModeRegister(void) ;
void CyINTCLK_SetSourceRegister(uint8 clkSource) ;
uint8 CyINTCLK_GetSourceRegister(void) ;
#if defined(CyINTCLK__CFG3)
void CyINTCLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 CyINTCLK_GetPhaseRegister(void) ;
#endif /* defined(CyINTCLK__CFG3) */

#define CyINTCLK_Enable()                       CyINTCLK_Start()
#define CyINTCLK_Disable()                      CyINTCLK_Stop()
#define CyINTCLK_SetDivider(clkDivider)         CyINTCLK_SetDividerRegister(clkDivider, 1u)
#define CyINTCLK_SetDividerValue(clkDivider)    CyINTCLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define CyINTCLK_SetMode(clkMode)               CyINTCLK_SetModeRegister(clkMode)
#define CyINTCLK_SetSource(clkSource)           CyINTCLK_SetSourceRegister(clkSource)
#if defined(CyINTCLK__CFG3)
#define CyINTCLK_SetPhase(clkPhase)             CyINTCLK_SetPhaseRegister(clkPhase)
#define CyINTCLK_SetPhaseValue(clkPhase)        CyINTCLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(CyINTCLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define CyINTCLK_CLKEN              (* (reg8 *) CyINTCLK__PM_ACT_CFG)
#define CyINTCLK_CLKEN_PTR          ((reg8 *) CyINTCLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define CyINTCLK_CLKSTBY            (* (reg8 *) CyINTCLK__PM_STBY_CFG)
#define CyINTCLK_CLKSTBY_PTR        ((reg8 *) CyINTCLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define CyINTCLK_DIV_LSB            (* (reg8 *) CyINTCLK__CFG0)
#define CyINTCLK_DIV_LSB_PTR        ((reg8 *) CyINTCLK__CFG0)
#define CyINTCLK_DIV_PTR            ((reg16 *) CyINTCLK__CFG0)

/* Clock MSB divider configuration register. */
#define CyINTCLK_DIV_MSB            (* (reg8 *) CyINTCLK__CFG1)
#define CyINTCLK_DIV_MSB_PTR        ((reg8 *) CyINTCLK__CFG1)

/* Mode and source configuration register */
#define CyINTCLK_MOD_SRC            (* (reg8 *) CyINTCLK__CFG2)
#define CyINTCLK_MOD_SRC_PTR        ((reg8 *) CyINTCLK__CFG2)

#if defined(CyINTCLK__CFG3)
/* Analog clock phase configuration register */
#define CyINTCLK_PHASE              (* (reg8 *) CyINTCLK__CFG3)
#define CyINTCLK_PHASE_PTR          ((reg8 *) CyINTCLK__CFG3)
#endif /* defined(CyINTCLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define CyINTCLK_CLKEN_MASK         CyINTCLK__PM_ACT_MSK
#define CyINTCLK_CLKSTBY_MASK       CyINTCLK__PM_STBY_MSK

/* CFG2 field masks */
#define CyINTCLK_SRC_SEL_MSK        CyINTCLK__CFG2_SRC_SEL_MASK
#define CyINTCLK_MODE_MASK          (~(CyINTCLK_SRC_SEL_MSK))

#if defined(CyINTCLK__CFG3)
/* CFG3 phase mask */
#define CyINTCLK_PHASE_MASK         CyINTCLK__CFG3_PHASE_DLY_MASK
#endif /* defined(CyINTCLK__CFG3) */

#endif /* CY_CLOCK_CyINTCLK_H */


/* [] END OF FILE */
