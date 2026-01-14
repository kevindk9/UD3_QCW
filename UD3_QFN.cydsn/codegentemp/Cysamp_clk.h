/*******************************************************************************
* File Name: Cysamp_clk.h
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

#if !defined(CY_CLOCK_Cysamp_clk_H)
#define CY_CLOCK_Cysamp_clk_H

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

void Cysamp_clk_Start(void) ;
void Cysamp_clk_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Cysamp_clk_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Cysamp_clk_StandbyPower(uint8 state) ;
void Cysamp_clk_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Cysamp_clk_GetDividerRegister(void) ;
void Cysamp_clk_SetModeRegister(uint8 modeBitMask) ;
void Cysamp_clk_ClearModeRegister(uint8 modeBitMask) ;
uint8 Cysamp_clk_GetModeRegister(void) ;
void Cysamp_clk_SetSourceRegister(uint8 clkSource) ;
uint8 Cysamp_clk_GetSourceRegister(void) ;
#if defined(Cysamp_clk__CFG3)
void Cysamp_clk_SetPhaseRegister(uint8 clkPhase) ;
uint8 Cysamp_clk_GetPhaseRegister(void) ;
#endif /* defined(Cysamp_clk__CFG3) */

#define Cysamp_clk_Enable()                       Cysamp_clk_Start()
#define Cysamp_clk_Disable()                      Cysamp_clk_Stop()
#define Cysamp_clk_SetDivider(clkDivider)         Cysamp_clk_SetDividerRegister(clkDivider, 1u)
#define Cysamp_clk_SetDividerValue(clkDivider)    Cysamp_clk_SetDividerRegister((clkDivider) - 1u, 1u)
#define Cysamp_clk_SetMode(clkMode)               Cysamp_clk_SetModeRegister(clkMode)
#define Cysamp_clk_SetSource(clkSource)           Cysamp_clk_SetSourceRegister(clkSource)
#if defined(Cysamp_clk__CFG3)
#define Cysamp_clk_SetPhase(clkPhase)             Cysamp_clk_SetPhaseRegister(clkPhase)
#define Cysamp_clk_SetPhaseValue(clkPhase)        Cysamp_clk_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Cysamp_clk__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Cysamp_clk_CLKEN              (* (reg8 *) Cysamp_clk__PM_ACT_CFG)
#define Cysamp_clk_CLKEN_PTR          ((reg8 *) Cysamp_clk__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Cysamp_clk_CLKSTBY            (* (reg8 *) Cysamp_clk__PM_STBY_CFG)
#define Cysamp_clk_CLKSTBY_PTR        ((reg8 *) Cysamp_clk__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Cysamp_clk_DIV_LSB            (* (reg8 *) Cysamp_clk__CFG0)
#define Cysamp_clk_DIV_LSB_PTR        ((reg8 *) Cysamp_clk__CFG0)
#define Cysamp_clk_DIV_PTR            ((reg16 *) Cysamp_clk__CFG0)

/* Clock MSB divider configuration register. */
#define Cysamp_clk_DIV_MSB            (* (reg8 *) Cysamp_clk__CFG1)
#define Cysamp_clk_DIV_MSB_PTR        ((reg8 *) Cysamp_clk__CFG1)

/* Mode and source configuration register */
#define Cysamp_clk_MOD_SRC            (* (reg8 *) Cysamp_clk__CFG2)
#define Cysamp_clk_MOD_SRC_PTR        ((reg8 *) Cysamp_clk__CFG2)

#if defined(Cysamp_clk__CFG3)
/* Analog clock phase configuration register */
#define Cysamp_clk_PHASE              (* (reg8 *) Cysamp_clk__CFG3)
#define Cysamp_clk_PHASE_PTR          ((reg8 *) Cysamp_clk__CFG3)
#endif /* defined(Cysamp_clk__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Cysamp_clk_CLKEN_MASK         Cysamp_clk__PM_ACT_MSK
#define Cysamp_clk_CLKSTBY_MASK       Cysamp_clk__PM_STBY_MSK

/* CFG2 field masks */
#define Cysamp_clk_SRC_SEL_MSK        Cysamp_clk__CFG2_SRC_SEL_MASK
#define Cysamp_clk_MODE_MASK          (~(Cysamp_clk_SRC_SEL_MSK))

#if defined(Cysamp_clk__CFG3)
/* CFG3 phase mask */
#define Cysamp_clk_PHASE_MASK         Cysamp_clk__CFG3_PHASE_DLY_MASK
#endif /* defined(Cysamp_clk__CFG3) */

#endif /* CY_CLOCK_Cysamp_clk_H */


/* [] END OF FILE */
