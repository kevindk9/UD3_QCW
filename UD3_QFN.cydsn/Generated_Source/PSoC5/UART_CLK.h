/*******************************************************************************
* File Name: UART_CLK.h
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

#if !defined(CY_CLOCK_UART_CLK_H)
#define CY_CLOCK_UART_CLK_H

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

void UART_CLK_Start(void) ;
void UART_CLK_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void UART_CLK_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void UART_CLK_StandbyPower(uint8 state) ;
void UART_CLK_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 UART_CLK_GetDividerRegister(void) ;
void UART_CLK_SetModeRegister(uint8 modeBitMask) ;
void UART_CLK_ClearModeRegister(uint8 modeBitMask) ;
uint8 UART_CLK_GetModeRegister(void) ;
void UART_CLK_SetSourceRegister(uint8 clkSource) ;
uint8 UART_CLK_GetSourceRegister(void) ;
#if defined(UART_CLK__CFG3)
void UART_CLK_SetPhaseRegister(uint8 clkPhase) ;
uint8 UART_CLK_GetPhaseRegister(void) ;
#endif /* defined(UART_CLK__CFG3) */

#define UART_CLK_Enable()                       UART_CLK_Start()
#define UART_CLK_Disable()                      UART_CLK_Stop()
#define UART_CLK_SetDivider(clkDivider)         UART_CLK_SetDividerRegister(clkDivider, 1u)
#define UART_CLK_SetDividerValue(clkDivider)    UART_CLK_SetDividerRegister((clkDivider) - 1u, 1u)
#define UART_CLK_SetMode(clkMode)               UART_CLK_SetModeRegister(clkMode)
#define UART_CLK_SetSource(clkSource)           UART_CLK_SetSourceRegister(clkSource)
#if defined(UART_CLK__CFG3)
#define UART_CLK_SetPhase(clkPhase)             UART_CLK_SetPhaseRegister(clkPhase)
#define UART_CLK_SetPhaseValue(clkPhase)        UART_CLK_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(UART_CLK__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define UART_CLK_CLKEN              (* (reg8 *) UART_CLK__PM_ACT_CFG)
#define UART_CLK_CLKEN_PTR          ((reg8 *) UART_CLK__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define UART_CLK_CLKSTBY            (* (reg8 *) UART_CLK__PM_STBY_CFG)
#define UART_CLK_CLKSTBY_PTR        ((reg8 *) UART_CLK__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define UART_CLK_DIV_LSB            (* (reg8 *) UART_CLK__CFG0)
#define UART_CLK_DIV_LSB_PTR        ((reg8 *) UART_CLK__CFG0)
#define UART_CLK_DIV_PTR            ((reg16 *) UART_CLK__CFG0)

/* Clock MSB divider configuration register. */
#define UART_CLK_DIV_MSB            (* (reg8 *) UART_CLK__CFG1)
#define UART_CLK_DIV_MSB_PTR        ((reg8 *) UART_CLK__CFG1)

/* Mode and source configuration register */
#define UART_CLK_MOD_SRC            (* (reg8 *) UART_CLK__CFG2)
#define UART_CLK_MOD_SRC_PTR        ((reg8 *) UART_CLK__CFG2)

#if defined(UART_CLK__CFG3)
/* Analog clock phase configuration register */
#define UART_CLK_PHASE              (* (reg8 *) UART_CLK__CFG3)
#define UART_CLK_PHASE_PTR          ((reg8 *) UART_CLK__CFG3)
#endif /* defined(UART_CLK__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define UART_CLK_CLKEN_MASK         UART_CLK__PM_ACT_MSK
#define UART_CLK_CLKSTBY_MASK       UART_CLK__PM_STBY_MSK

/* CFG2 field masks */
#define UART_CLK_SRC_SEL_MSK        UART_CLK__CFG2_SRC_SEL_MASK
#define UART_CLK_MODE_MASK          (~(UART_CLK_SRC_SEL_MSK))

#if defined(UART_CLK__CFG3)
/* CFG3 phase mask */
#define UART_CLK_PHASE_MASK         UART_CLK__CFG3_PHASE_DLY_MASK
#endif /* defined(UART_CLK__CFG3) */

#endif /* CY_CLOCK_UART_CLK_H */


/* [] END OF FILE */
