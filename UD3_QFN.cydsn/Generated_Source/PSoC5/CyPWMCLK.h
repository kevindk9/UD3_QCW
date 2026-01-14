/*******************************************************************************
* File Name: CyPWMCLK.h
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

#if !defined(CY_CLOCK_CyPWMCLK_H)
#define CY_CLOCK_CyPWMCLK_H

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

void CyPWMCLK_Start(void) ;
void CyPWMCLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void CyPWMCLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void CyPWMCLK_StandbyPower(uint8 state) ;
void CyPWMCLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 CyPWMCLK_GetDividerRegister(void) ;
void CyPWMCLK_SetModeRegister(uint8 modeBitMask) ;
void CyPWMCLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 CyPWMCLK_GetModeRegister(void) ;
void CyPWMCLK_SetSourceRegister(uint8 clkSource) ;
uint8 CyPWMCLK_GetSourceRegister(void) ;
#if defined(CyPWMCLK__CFG3)
void CyPWMCLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 CyPWMCLK_GetPhaseRegister(void) ;
#endif /* defined(CyPWMCLK__CFG3) */

#define CyPWMCLK_Enable()                       CyPWMCLK_Start()
#define CyPWMCLK_Disable()                      CyPWMCLK_Stop()
#define CyPWMCLK_SetDivider(clkDivider)         CyPWMCLK_SetDividerRegister(clkDivider, 1u)
#define CyPWMCLK_SetDividerValue(clkDivider)    CyPWMCLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define CyPWMCLK_SetMode(clkMode)               CyPWMCLK_SetModeRegister(clkMode)
#define CyPWMCLK_SetSource(clkSource)           CyPWMCLK_SetSourceRegister(clkSource)
#if defined(CyPWMCLK__CFG3)
#define CyPWMCLK_SetPhase(clkPhase)             CyPWMCLK_SetPhaseRegister(clkPhase)
#define CyPWMCLK_SetPhaseValue(clkPhase)        CyPWMCLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(CyPWMCLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define CyPWMCLK_CLKEN              (* (reg8 *) CyPWMCLK__PM_ACT_CFG)
#define CyPWMCLK_CLKEN_PTR          ((reg8 *) CyPWMCLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define CyPWMCLK_CLKSTBY            (* (reg8 *) CyPWMCLK__PM_STBY_CFG)
#define CyPWMCLK_CLKSTBY_PTR        ((reg8 *) CyPWMCLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define CyPWMCLK_DIV_LSB            (* (reg8 *) CyPWMCLK__CFG0)
#define CyPWMCLK_DIV_LSB_PTR        ((reg8 *) CyPWMCLK__CFG0)
#define CyPWMCLK_DIV_PTR            ((reg16 *) CyPWMCLK__CFG0)

/* Clock MSB divider configuration register. */
#define CyPWMCLK_DIV_MSB            (* (reg8 *) CyPWMCLK__CFG1)
#define CyPWMCLK_DIV_MSB_PTR        ((reg8 *) CyPWMCLK__CFG1)

/* Mode and source configuration register */
#define CyPWMCLK_MOD_SRC            (* (reg8 *) CyPWMCLK__CFG2)
#define CyPWMCLK_MOD_SRC_PTR        ((reg8 *) CyPWMCLK__CFG2)

#if defined(CyPWMCLK__CFG3)
/* Analog clock phase configuration register */
#define CyPWMCLK_PHASE              (* (reg8 *) CyPWMCLK__CFG3)
#define CyPWMCLK_PHASE_PTR          ((reg8 *) CyPWMCLK__CFG3)
#endif /* defined(CyPWMCLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define CyPWMCLK_CLKEN_MASK         CyPWMCLK__PM_ACT_MSK
#define CyPWMCLK_CLKSTBY_MASK       CyPWMCLK__PM_STBY_MSK

/* CFG2 field masks */
#define CyPWMCLK_SRC_SEL_MSK        CyPWMCLK__CFG2_SRC_SEL_MASK
#define CyPWMCLK_MODE_MASK          (~(CyPWMCLK_SRC_SEL_MSK))

#if defined(CyPWMCLK__CFG3)
/* CFG3 phase mask */
#define CyPWMCLK_PHASE_MASK         CyPWMCLK__CFG3_PHASE_DLY_MASK
#endif /* defined(CyPWMCLK__CFG3) */

#endif /* CY_CLOCK_CyPWMCLK_H */


/* [] END OF FILE */
