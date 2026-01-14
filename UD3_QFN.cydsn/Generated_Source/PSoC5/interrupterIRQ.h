/*******************************************************************************
* File Name: interrupterIRQ.h
* Version 1.71
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_interrupterIRQ_H)
#define CY_ISR_interrupterIRQ_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void interrupterIRQ_Start(void);
void interrupterIRQ_StartEx(cyisraddress address);
void interrupterIRQ_Stop(void);

CY_ISR_PROTO(interrupterIRQ_Interrupt);

void interrupterIRQ_SetVector(cyisraddress address);
cyisraddress interrupterIRQ_GetVector(void);

void interrupterIRQ_SetPriority(uint8 priority);
uint8 interrupterIRQ_GetPriority(void);

void interrupterIRQ_Enable(void);
uint8 interrupterIRQ_GetState(void);
void interrupterIRQ_Disable(void);

void interrupterIRQ_SetPending(void);
void interrupterIRQ_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the interrupterIRQ ISR. */
#define interrupterIRQ_INTC_VECTOR            ((reg32 *) interrupterIRQ__INTC_VECT)

/* Address of the interrupterIRQ ISR priority. */
#define interrupterIRQ_INTC_PRIOR             ((reg8 *) interrupterIRQ__INTC_PRIOR_REG)

/* Priority of the interrupterIRQ interrupt. */
#define interrupterIRQ_INTC_PRIOR_NUMBER      interrupterIRQ__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable interrupterIRQ interrupt. */
#define interrupterIRQ_INTC_SET_EN            ((reg32 *) interrupterIRQ__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the interrupterIRQ interrupt. */
#define interrupterIRQ_INTC_CLR_EN            ((reg32 *) interrupterIRQ__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the interrupterIRQ interrupt state to pending. */
#define interrupterIRQ_INTC_SET_PD            ((reg32 *) interrupterIRQ__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the interrupterIRQ interrupt. */
#define interrupterIRQ_INTC_CLR_PD            ((reg32 *) interrupterIRQ__INTC_CLR_PD_REG)


#endif /* CY_ISR_interrupterIRQ_H */


/* [] END OF FILE */
