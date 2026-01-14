/*******************************************************************************
* File Name: Clock_18.h
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

#if !defined(CY_CLOCK_Clock_18_H)
#define CY_CLOCK_Clock_18_H

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

void Clock_18_Start(void) ;
void Clock_18_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void Clock_18_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void Clock_18_StandbyPower(uint8 state) ;
void Clock_18_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 Clock_18_GetDividerRegister(void) ;
void Clock_18_SetModeRegister(uint8 modeBitMask) ;
void Clock_18_ClearModeRegister(uint8 modeBitMask) ;
uint8 Clock_18_GetModeRegister(void) ;
void Clock_18_SetSourceRegister(uint8 clkSource) ;
uint8 Clock_18_GetSourceRegister(void) ;
#if defined(Clock_18__CFG3)
void Clock_18_SetPhaseRegister(uint8 clkPhase) ;
uint8 Clock_18_GetPhaseRegister(void) ;
#endif /* defined(Clock_18__CFG3) */

#define Clock_18_Enable()                       Clock_18_Start()
#define Clock_18_Disable()                      Clock_18_Stop()
#define Clock_18_SetDivider(clkDivider)         Clock_18_SetDividerRegister(clkDivider, 1u)
#define Clock_18_SetDividerValue(clkDivider)    Clock_18_SetDividerRegister((clkDivider) - 1u, 1u)
#define Clock_18_SetMode(clkMode)               Clock_18_SetModeRegister(clkMode)
#define Clock_18_SetSource(clkSource)           Clock_18_SetSourceRegister(clkSource)
#if defined(Clock_18__CFG3)
#define Clock_18_SetPhase(clkPhase)             Clock_18_SetPhaseRegister(clkPhase)
#define Clock_18_SetPhaseValue(clkPhase)        Clock_18_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(Clock_18__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define Clock_18_CLKEN              (* (reg8 *) Clock_18__PM_ACT_CFG)
#define Clock_18_CLKEN_PTR          ((reg8 *) Clock_18__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define Clock_18_CLKSTBY            (* (reg8 *) Clock_18__PM_STBY_CFG)
#define Clock_18_CLKSTBY_PTR        ((reg8 *) Clock_18__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define Clock_18_DIV_LSB            (* (reg8 *) Clock_18__CFG0)
#define Clock_18_DIV_LSB_PTR        ((reg8 *) Clock_18__CFG0)
#define Clock_18_DIV_PTR            ((reg16 *) Clock_18__CFG0)

/* Clock MSB divider configuration register. */
#define Clock_18_DIV_MSB            (* (reg8 *) Clock_18__CFG1)
#define Clock_18_DIV_MSB_PTR        ((reg8 *) Clock_18__CFG1)

/* Mode and source configuration register */
#define Clock_18_MOD_SRC            (* (reg8 *) Clock_18__CFG2)
#define Clock_18_MOD_SRC_PTR        ((reg8 *) Clock_18__CFG2)

#if defined(Clock_18__CFG3)
/* Analog clock phase configuration register */
#define Clock_18_PHASE              (* (reg8 *) Clock_18__CFG3)
#define Clock_18_PHASE_PTR          ((reg8 *) Clock_18__CFG3)
#endif /* defined(Clock_18__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define Clock_18_CLKEN_MASK         Clock_18__PM_ACT_MSK
#define Clock_18_CLKSTBY_MASK       Clock_18__PM_STBY_MSK

/* CFG2 field masks */
#define Clock_18_SRC_SEL_MSK        Clock_18__CFG2_SRC_SEL_MASK
#define Clock_18_MODE_MASK          (~(Clock_18_SRC_SEL_MSK))

#if defined(Clock_18__CFG3)
/* CFG3 phase mask */
#define Clock_18_PHASE_MASK         Clock_18__CFG3_PHASE_DLY_MASK
#endif /* defined(Clock_18__CFG3) */

#endif /* CY_CLOCK_Clock_18_H */


/* [] END OF FILE */
