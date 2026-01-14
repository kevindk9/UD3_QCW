/*******************************************************************************
* File Name: OnTimeCounter.h
* Version 2.80
*
*  Description:
*     Contains the function prototypes and constants available to the timer
*     user module.
*
*   Note:
*     None
*
********************************************************************************
* Copyright 2008-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_TIMER_OnTimeCounter_H)
#define CY_TIMER_OnTimeCounter_H

#include "cytypes.h"
#include "cyfitter.h"
#include "CyLib.h" /* For CyEnterCriticalSection() and CyExitCriticalSection() functions */

extern uint8 OnTimeCounter_initVar;

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component Timer_v2_80 requires cy_boot v3.0 or later
#endif /* (CY_ PSOC5LP) */


/**************************************
*           Parameter Defaults
**************************************/

#define OnTimeCounter_Resolution                 24u
#define OnTimeCounter_UsingFixedFunction         0u
#define OnTimeCounter_UsingHWCaptureCounter      0u
#define OnTimeCounter_SoftwareCaptureMode        0u
#define OnTimeCounter_SoftwareTriggerMode        0u
#define OnTimeCounter_UsingHWEnable              0u
#define OnTimeCounter_EnableTriggerMode          0u
#define OnTimeCounter_InterruptOnCaptureCount    0u
#define OnTimeCounter_RunModeUsed                0u
#define OnTimeCounter_ControlRegRemoved          0u

#if defined(OnTimeCounter_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG)
    #define OnTimeCounter_UDB_CONTROL_REG_REMOVED            (0u)
#elif  (OnTimeCounter_UsingFixedFunction)
    #define OnTimeCounter_UDB_CONTROL_REG_REMOVED            (0u)
#else 
    #define OnTimeCounter_UDB_CONTROL_REG_REMOVED            (1u)
#endif /* End OnTimeCounter_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG */


/***************************************
*       Type defines
***************************************/


/**************************************************************************
 * Sleep Wakeup Backup structure for Timer Component
 *************************************************************************/
typedef struct
{
    uint8 TimerEnableState;
    #if(!OnTimeCounter_UsingFixedFunction)

        uint32 TimerUdb;
        uint8 InterruptMaskValue;
        #if (OnTimeCounter_UsingHWCaptureCounter)
            uint8 TimerCaptureCounter;
        #endif /* variable declarations for backing up non retention registers in CY_UDB_V1 */

        #if (!OnTimeCounter_UDB_CONTROL_REG_REMOVED)
            uint8 TimerControlRegister;
        #endif /* variable declaration for backing up enable state of the Timer */
    #endif /* define backup variables only for UDB implementation. Fixed function registers are all retention */

}OnTimeCounter_backupStruct;


/***************************************
*       Function Prototypes
***************************************/

void    OnTimeCounter_Start(void) ;
void    OnTimeCounter_Stop(void) ;

void    OnTimeCounter_SetInterruptMode(uint8 interruptMode) ;
uint8   OnTimeCounter_ReadStatusRegister(void) ;
/* Deprecated function. Do not use this in future. Retained for backward compatibility */
#define OnTimeCounter_GetInterruptSource() OnTimeCounter_ReadStatusRegister()

#if(!OnTimeCounter_UDB_CONTROL_REG_REMOVED)
    uint8   OnTimeCounter_ReadControlRegister(void) ;
    void    OnTimeCounter_WriteControlRegister(uint8 control) ;
#endif /* (!OnTimeCounter_UDB_CONTROL_REG_REMOVED) */

uint32  OnTimeCounter_ReadPeriod(void) ;
void    OnTimeCounter_WritePeriod(uint32 period) ;
uint32  OnTimeCounter_ReadCounter(void) ;
void    OnTimeCounter_WriteCounter(uint32 counter) ;
uint32  OnTimeCounter_ReadCapture(void) ;
void    OnTimeCounter_SoftwareCapture(void) ;

#if(!OnTimeCounter_UsingFixedFunction) /* UDB Prototypes */
    #if (OnTimeCounter_SoftwareCaptureMode)
        void    OnTimeCounter_SetCaptureMode(uint8 captureMode) ;
    #endif /* (!OnTimeCounter_UsingFixedFunction) */

    #if (OnTimeCounter_SoftwareTriggerMode)
        void    OnTimeCounter_SetTriggerMode(uint8 triggerMode) ;
    #endif /* (OnTimeCounter_SoftwareTriggerMode) */

    #if (OnTimeCounter_EnableTriggerMode)
        void    OnTimeCounter_EnableTrigger(void) ;
        void    OnTimeCounter_DisableTrigger(void) ;
    #endif /* (OnTimeCounter_EnableTriggerMode) */


    #if(OnTimeCounter_InterruptOnCaptureCount)
        void    OnTimeCounter_SetInterruptCount(uint8 interruptCount) ;
    #endif /* (OnTimeCounter_InterruptOnCaptureCount) */

    #if (OnTimeCounter_UsingHWCaptureCounter)
        void    OnTimeCounter_SetCaptureCount(uint8 captureCount) ;
        uint8   OnTimeCounter_ReadCaptureCount(void) ;
    #endif /* (OnTimeCounter_UsingHWCaptureCounter) */

    void OnTimeCounter_ClearFIFO(void) ;
#endif /* UDB Prototypes */

/* Sleep Retention APIs */
void OnTimeCounter_Init(void)          ;
void OnTimeCounter_Enable(void)        ;
void OnTimeCounter_SaveConfig(void)    ;
void OnTimeCounter_RestoreConfig(void) ;
void OnTimeCounter_Sleep(void)         ;
void OnTimeCounter_Wakeup(void)        ;


/***************************************
*   Enumerated Types and Parameters
***************************************/

/* Enumerated Type B_Timer__CaptureModes, Used in Capture Mode */
#define OnTimeCounter__B_TIMER__CM_NONE 0
#define OnTimeCounter__B_TIMER__CM_RISINGEDGE 1
#define OnTimeCounter__B_TIMER__CM_FALLINGEDGE 2
#define OnTimeCounter__B_TIMER__CM_EITHEREDGE 3
#define OnTimeCounter__B_TIMER__CM_SOFTWARE 4



/* Enumerated Type B_Timer__TriggerModes, Used in Trigger Mode */
#define OnTimeCounter__B_TIMER__TM_NONE 0x00u
#define OnTimeCounter__B_TIMER__TM_RISINGEDGE 0x04u
#define OnTimeCounter__B_TIMER__TM_FALLINGEDGE 0x08u
#define OnTimeCounter__B_TIMER__TM_EITHEREDGE 0x0Cu
#define OnTimeCounter__B_TIMER__TM_SOFTWARE 0x10u


/***************************************
*    Initialial Parameter Constants
***************************************/

#define OnTimeCounter_INIT_PERIOD             16777215u
#define OnTimeCounter_INIT_CAPTURE_MODE       ((uint8)((uint8)0u << OnTimeCounter_CTRL_CAP_MODE_SHIFT))
#define OnTimeCounter_INIT_TRIGGER_MODE       ((uint8)((uint8)0u << OnTimeCounter_CTRL_TRIG_MODE_SHIFT))
#if (OnTimeCounter_UsingFixedFunction)
    #define OnTimeCounter_INIT_INTERRUPT_MODE (((uint8)((uint8)0u << OnTimeCounter_STATUS_TC_INT_MASK_SHIFT)) | \
                                                  ((uint8)((uint8)0 << OnTimeCounter_STATUS_CAPTURE_INT_MASK_SHIFT)))
#else
    #define OnTimeCounter_INIT_INTERRUPT_MODE (((uint8)((uint8)0u << OnTimeCounter_STATUS_TC_INT_MASK_SHIFT)) | \
                                                 ((uint8)((uint8)0 << OnTimeCounter_STATUS_CAPTURE_INT_MASK_SHIFT)) | \
                                                 ((uint8)((uint8)0 << OnTimeCounter_STATUS_FIFOFULL_INT_MASK_SHIFT)))
#endif /* (OnTimeCounter_UsingFixedFunction) */
#define OnTimeCounter_INIT_CAPTURE_COUNT      (2u)
#define OnTimeCounter_INIT_INT_CAPTURE_COUNT  ((uint8)((uint8)(1u - 1u) << OnTimeCounter_CTRL_INTCNT_SHIFT))


/***************************************
*           Registers
***************************************/

#if (OnTimeCounter_UsingFixedFunction) /* Implementation Specific Registers and Register Constants */


    /***************************************
    *    Fixed Function Registers
    ***************************************/

    #define OnTimeCounter_STATUS         (*(reg8 *) OnTimeCounter_TimerHW__SR0 )
    /* In Fixed Function Block Status and Mask are the same register */
    #define OnTimeCounter_STATUS_MASK    (*(reg8 *) OnTimeCounter_TimerHW__SR0 )
    #define OnTimeCounter_CONTROL        (*(reg8 *) OnTimeCounter_TimerHW__CFG0)
    #define OnTimeCounter_CONTROL2       (*(reg8 *) OnTimeCounter_TimerHW__CFG1)
    #define OnTimeCounter_CONTROL2_PTR   ( (reg8 *) OnTimeCounter_TimerHW__CFG1)
    #define OnTimeCounter_RT1            (*(reg8 *) OnTimeCounter_TimerHW__RT1)
    #define OnTimeCounter_RT1_PTR        ( (reg8 *) OnTimeCounter_TimerHW__RT1)

    #if (CY_PSOC3 || CY_PSOC5LP)
        #define OnTimeCounter_CONTROL3       (*(reg8 *) OnTimeCounter_TimerHW__CFG2)
        #define OnTimeCounter_CONTROL3_PTR   ( (reg8 *) OnTimeCounter_TimerHW__CFG2)
    #endif /* (CY_PSOC3 || CY_PSOC5LP) */
    #define OnTimeCounter_GLOBAL_ENABLE  (*(reg8 *) OnTimeCounter_TimerHW__PM_ACT_CFG)
    #define OnTimeCounter_GLOBAL_STBY_ENABLE  (*(reg8 *) OnTimeCounter_TimerHW__PM_STBY_CFG)

    #define OnTimeCounter_CAPTURE_LSB         (* (reg16 *) OnTimeCounter_TimerHW__CAP0 )
    #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg16 *) OnTimeCounter_TimerHW__CAP0 )
    #define OnTimeCounter_PERIOD_LSB          (* (reg16 *) OnTimeCounter_TimerHW__PER0 )
    #define OnTimeCounter_PERIOD_LSB_PTR        ((reg16 *) OnTimeCounter_TimerHW__PER0 )
    #define OnTimeCounter_COUNTER_LSB         (* (reg16 *) OnTimeCounter_TimerHW__CNT_CMP0 )
    #define OnTimeCounter_COUNTER_LSB_PTR       ((reg16 *) OnTimeCounter_TimerHW__CNT_CMP0 )


    /***************************************
    *    Register Constants
    ***************************************/

    /* Fixed Function Block Chosen */
    #define OnTimeCounter_BLOCK_EN_MASK                     OnTimeCounter_TimerHW__PM_ACT_MSK
    #define OnTimeCounter_BLOCK_STBY_EN_MASK                OnTimeCounter_TimerHW__PM_STBY_MSK

    /* Control Register Bit Locations */
    /* Interrupt Count - Not valid for Fixed Function Block */
    #define OnTimeCounter_CTRL_INTCNT_SHIFT                  0x00u
    /* Trigger Polarity - Not valid for Fixed Function Block */
    #define OnTimeCounter_CTRL_TRIG_MODE_SHIFT               0x00u
    /* Trigger Enable - Not valid for Fixed Function Block */
    #define OnTimeCounter_CTRL_TRIG_EN_SHIFT                 0x00u
    /* Capture Polarity - Not valid for Fixed Function Block */
    #define OnTimeCounter_CTRL_CAP_MODE_SHIFT                0x00u
    /* Timer Enable - As defined in Register Map, part of TMRX_CFG0 register */
    #define OnTimeCounter_CTRL_ENABLE_SHIFT                  0x00u

    /* Control Register Bit Masks */
    #define OnTimeCounter_CTRL_ENABLE                        ((uint8)((uint8)0x01u << OnTimeCounter_CTRL_ENABLE_SHIFT))

    /* Control2 Register Bit Masks */
    /* As defined in Register Map, Part of the TMRX_CFG1 register */
    #define OnTimeCounter_CTRL2_IRQ_SEL_SHIFT                 0x00u
    #define OnTimeCounter_CTRL2_IRQ_SEL                      ((uint8)((uint8)0x01u << OnTimeCounter_CTRL2_IRQ_SEL_SHIFT))

    #if (CY_PSOC5A)
        /* Use CFG1 Mode bits to set run mode */
        /* As defined by Verilog Implementation */
        #define OnTimeCounter_CTRL_MODE_SHIFT                 0x01u
        #define OnTimeCounter_CTRL_MODE_MASK                 ((uint8)((uint8)0x07u << OnTimeCounter_CTRL_MODE_SHIFT))
    #endif /* (CY_PSOC5A) */
    #if (CY_PSOC3 || CY_PSOC5LP)
        /* Control3 Register Bit Locations */
        #define OnTimeCounter_CTRL_RCOD_SHIFT        0x02u
        #define OnTimeCounter_CTRL_ENBL_SHIFT        0x00u
        #define OnTimeCounter_CTRL_MODE_SHIFT        0x00u

        /* Control3 Register Bit Masks */
        #define OnTimeCounter_CTRL_RCOD_MASK  ((uint8)((uint8)0x03u << OnTimeCounter_CTRL_RCOD_SHIFT)) /* ROD and COD bit masks */
        #define OnTimeCounter_CTRL_ENBL_MASK  ((uint8)((uint8)0x80u << OnTimeCounter_CTRL_ENBL_SHIFT)) /* HW_EN bit mask */
        #define OnTimeCounter_CTRL_MODE_MASK  ((uint8)((uint8)0x03u << OnTimeCounter_CTRL_MODE_SHIFT)) /* Run mode bit mask */

        #define OnTimeCounter_CTRL_RCOD       ((uint8)((uint8)0x03u << OnTimeCounter_CTRL_RCOD_SHIFT))
        #define OnTimeCounter_CTRL_ENBL       ((uint8)((uint8)0x80u << OnTimeCounter_CTRL_ENBL_SHIFT))
    #endif /* (CY_PSOC3 || CY_PSOC5LP) */

    /*RT1 Synch Constants: Applicable for PSoC3 and PSoC5LP */
    #define OnTimeCounter_RT1_SHIFT                       0x04u
    /* Sync TC and CMP bit masks */
    #define OnTimeCounter_RT1_MASK                        ((uint8)((uint8)0x03u << OnTimeCounter_RT1_SHIFT))
    #define OnTimeCounter_SYNC                            ((uint8)((uint8)0x03u << OnTimeCounter_RT1_SHIFT))
    #define OnTimeCounter_SYNCDSI_SHIFT                   0x00u
    /* Sync all DSI inputs with Mask  */
    #define OnTimeCounter_SYNCDSI_MASK                    ((uint8)((uint8)0x0Fu << OnTimeCounter_SYNCDSI_SHIFT))
    /* Sync all DSI inputs */
    #define OnTimeCounter_SYNCDSI_EN                      ((uint8)((uint8)0x0Fu << OnTimeCounter_SYNCDSI_SHIFT))

    #define OnTimeCounter_CTRL_MODE_PULSEWIDTH            ((uint8)((uint8)0x01u << OnTimeCounter_CTRL_MODE_SHIFT))
    #define OnTimeCounter_CTRL_MODE_PERIOD                ((uint8)((uint8)0x02u << OnTimeCounter_CTRL_MODE_SHIFT))
    #define OnTimeCounter_CTRL_MODE_CONTINUOUS            ((uint8)((uint8)0x00u << OnTimeCounter_CTRL_MODE_SHIFT))

    /* Status Register Bit Locations */
    /* As defined in Register Map, part of TMRX_SR0 register */
    #define OnTimeCounter_STATUS_TC_SHIFT                 0x07u
    /* As defined in Register Map, part of TMRX_SR0 register, Shared with Compare Status */
    #define OnTimeCounter_STATUS_CAPTURE_SHIFT            0x06u
    /* As defined in Register Map, part of TMRX_SR0 register */
    #define OnTimeCounter_STATUS_TC_INT_MASK_SHIFT        (OnTimeCounter_STATUS_TC_SHIFT - 0x04u)
    /* As defined in Register Map, part of TMRX_SR0 register, Shared with Compare Status */
    #define OnTimeCounter_STATUS_CAPTURE_INT_MASK_SHIFT   (OnTimeCounter_STATUS_CAPTURE_SHIFT - 0x04u)

    /* Status Register Bit Masks */
    #define OnTimeCounter_STATUS_TC                       ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_TC_SHIFT))
    #define OnTimeCounter_STATUS_CAPTURE                  ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_CAPTURE_SHIFT))
    /* Interrupt Enable Bit-Mask for interrupt on TC */
    #define OnTimeCounter_STATUS_TC_INT_MASK              ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_TC_INT_MASK_SHIFT))
    /* Interrupt Enable Bit-Mask for interrupt on Capture */
    #define OnTimeCounter_STATUS_CAPTURE_INT_MASK         ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_CAPTURE_INT_MASK_SHIFT))

#else   /* UDB Registers and Register Constants */


    /***************************************
    *           UDB Registers
    ***************************************/

    #define OnTimeCounter_STATUS              (* (reg8 *) OnTimeCounter_TimerUDB_rstSts_stsreg__STATUS_REG )
    #define OnTimeCounter_STATUS_MASK         (* (reg8 *) OnTimeCounter_TimerUDB_rstSts_stsreg__MASK_REG)
    #define OnTimeCounter_STATUS_AUX_CTRL     (* (reg8 *) OnTimeCounter_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG)
    #define OnTimeCounter_CONTROL             (* (reg8 *) OnTimeCounter_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG )
    
    #if(OnTimeCounter_Resolution <= 8u) /* 8-bit Timer */
        #define OnTimeCounter_CAPTURE_LSB         (* (reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
        #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
        #define OnTimeCounter_PERIOD_LSB          (* (reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
        #define OnTimeCounter_PERIOD_LSB_PTR        ((reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
        #define OnTimeCounter_COUNTER_LSB         (* (reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
        #define OnTimeCounter_COUNTER_LSB_PTR       ((reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
    #elif(OnTimeCounter_Resolution <= 16u) /* 8-bit Timer */
        #if(CY_PSOC3) /* 8-bit addres space */
            #define OnTimeCounter_CAPTURE_LSB         (* (reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
            #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
            #define OnTimeCounter_PERIOD_LSB          (* (reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
            #define OnTimeCounter_PERIOD_LSB_PTR        ((reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
            #define OnTimeCounter_COUNTER_LSB         (* (reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
            #define OnTimeCounter_COUNTER_LSB_PTR       ((reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
        #else /* 16-bit address space */
            #define OnTimeCounter_CAPTURE_LSB         (* (reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__16BIT_F0_REG )
            #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__16BIT_F0_REG )
            #define OnTimeCounter_PERIOD_LSB          (* (reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__16BIT_D0_REG )
            #define OnTimeCounter_PERIOD_LSB_PTR        ((reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__16BIT_D0_REG )
            #define OnTimeCounter_COUNTER_LSB         (* (reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__16BIT_A0_REG )
            #define OnTimeCounter_COUNTER_LSB_PTR       ((reg16 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__16BIT_A0_REG )
        #endif /* CY_PSOC3 */
    #elif(OnTimeCounter_Resolution <= 24u)/* 24-bit Timer */
        #define OnTimeCounter_CAPTURE_LSB         (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
        #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
        #define OnTimeCounter_PERIOD_LSB          (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
        #define OnTimeCounter_PERIOD_LSB_PTR        ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
        #define OnTimeCounter_COUNTER_LSB         (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
        #define OnTimeCounter_COUNTER_LSB_PTR       ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
    #else /* 32-bit Timer */
        #if(CY_PSOC3 || CY_PSOC5) /* 8-bit address space */
            #define OnTimeCounter_CAPTURE_LSB         (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
            #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__F0_REG )
            #define OnTimeCounter_PERIOD_LSB          (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
            #define OnTimeCounter_PERIOD_LSB_PTR        ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__D0_REG )
            #define OnTimeCounter_COUNTER_LSB         (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
            #define OnTimeCounter_COUNTER_LSB_PTR       ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
        #else /* 32-bit address space */
            #define OnTimeCounter_CAPTURE_LSB         (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__32BIT_F0_REG )
            #define OnTimeCounter_CAPTURE_LSB_PTR       ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__32BIT_F0_REG )
            #define OnTimeCounter_PERIOD_LSB          (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__32BIT_D0_REG )
            #define OnTimeCounter_PERIOD_LSB_PTR        ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__32BIT_D0_REG )
            #define OnTimeCounter_COUNTER_LSB         (* (reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__32BIT_A0_REG )
            #define OnTimeCounter_COUNTER_LSB_PTR       ((reg32 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__32BIT_A0_REG )
        #endif /* CY_PSOC3 || CY_PSOC5 */ 
    #endif

    #define OnTimeCounter_COUNTER_LSB_PTR_8BIT       ((reg8 *) OnTimeCounter_TimerUDB_sT24_timerdp_u0__A0_REG )
    
    #if (OnTimeCounter_UsingHWCaptureCounter)
        #define OnTimeCounter_CAP_COUNT              (*(reg8 *) OnTimeCounter_TimerUDB_sCapCount_counter__PERIOD_REG )
        #define OnTimeCounter_CAP_COUNT_PTR          ( (reg8 *) OnTimeCounter_TimerUDB_sCapCount_counter__PERIOD_REG )
        #define OnTimeCounter_CAPTURE_COUNT_CTRL     (*(reg8 *) OnTimeCounter_TimerUDB_sCapCount_counter__CONTROL_AUX_CTL_REG )
        #define OnTimeCounter_CAPTURE_COUNT_CTRL_PTR ( (reg8 *) OnTimeCounter_TimerUDB_sCapCount_counter__CONTROL_AUX_CTL_REG )
    #endif /* (OnTimeCounter_UsingHWCaptureCounter) */


    /***************************************
    *       Register Constants
    ***************************************/

    /* Control Register Bit Locations */
    #define OnTimeCounter_CTRL_INTCNT_SHIFT              0x00u       /* As defined by Verilog Implementation */
    #define OnTimeCounter_CTRL_TRIG_MODE_SHIFT           0x02u       /* As defined by Verilog Implementation */
    #define OnTimeCounter_CTRL_TRIG_EN_SHIFT             0x04u       /* As defined by Verilog Implementation */
    #define OnTimeCounter_CTRL_CAP_MODE_SHIFT            0x05u       /* As defined by Verilog Implementation */
    #define OnTimeCounter_CTRL_ENABLE_SHIFT              0x07u       /* As defined by Verilog Implementation */

    /* Control Register Bit Masks */
    #define OnTimeCounter_CTRL_INTCNT_MASK               ((uint8)((uint8)0x03u << OnTimeCounter_CTRL_INTCNT_SHIFT))
    #define OnTimeCounter_CTRL_TRIG_MODE_MASK            ((uint8)((uint8)0x03u << OnTimeCounter_CTRL_TRIG_MODE_SHIFT))
    #define OnTimeCounter_CTRL_TRIG_EN                   ((uint8)((uint8)0x01u << OnTimeCounter_CTRL_TRIG_EN_SHIFT))
    #define OnTimeCounter_CTRL_CAP_MODE_MASK             ((uint8)((uint8)0x03u << OnTimeCounter_CTRL_CAP_MODE_SHIFT))
    #define OnTimeCounter_CTRL_ENABLE                    ((uint8)((uint8)0x01u << OnTimeCounter_CTRL_ENABLE_SHIFT))

    /* Bit Counter (7-bit) Control Register Bit Definitions */
    /* As defined by the Register map for the AUX Control Register */
    #define OnTimeCounter_CNTR_ENABLE                    0x20u

    /* Status Register Bit Locations */
    #define OnTimeCounter_STATUS_TC_SHIFT                0x00u  /* As defined by Verilog Implementation */
    #define OnTimeCounter_STATUS_CAPTURE_SHIFT           0x01u  /* As defined by Verilog Implementation */
    #define OnTimeCounter_STATUS_TC_INT_MASK_SHIFT       OnTimeCounter_STATUS_TC_SHIFT
    #define OnTimeCounter_STATUS_CAPTURE_INT_MASK_SHIFT  OnTimeCounter_STATUS_CAPTURE_SHIFT
    #define OnTimeCounter_STATUS_FIFOFULL_SHIFT          0x02u  /* As defined by Verilog Implementation */
    #define OnTimeCounter_STATUS_FIFONEMP_SHIFT          0x03u  /* As defined by Verilog Implementation */
    #define OnTimeCounter_STATUS_FIFOFULL_INT_MASK_SHIFT OnTimeCounter_STATUS_FIFOFULL_SHIFT

    /* Status Register Bit Masks */
    /* Sticky TC Event Bit-Mask */
    #define OnTimeCounter_STATUS_TC                      ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_TC_SHIFT))
    /* Sticky Capture Event Bit-Mask */
    #define OnTimeCounter_STATUS_CAPTURE                 ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_CAPTURE_SHIFT))
    /* Interrupt Enable Bit-Mask */
    #define OnTimeCounter_STATUS_TC_INT_MASK             ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_TC_SHIFT))
    /* Interrupt Enable Bit-Mask */
    #define OnTimeCounter_STATUS_CAPTURE_INT_MASK        ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_CAPTURE_SHIFT))
    /* NOT-Sticky FIFO Full Bit-Mask */
    #define OnTimeCounter_STATUS_FIFOFULL                ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_FIFOFULL_SHIFT))
    /* NOT-Sticky FIFO Not Empty Bit-Mask */
    #define OnTimeCounter_STATUS_FIFONEMP                ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_FIFONEMP_SHIFT))
    /* Interrupt Enable Bit-Mask */
    #define OnTimeCounter_STATUS_FIFOFULL_INT_MASK       ((uint8)((uint8)0x01u << OnTimeCounter_STATUS_FIFOFULL_SHIFT))

    #define OnTimeCounter_STATUS_ACTL_INT_EN             0x10u   /* As defined for the ACTL Register */

    /* Datapath Auxillary Control Register definitions */
    #define OnTimeCounter_AUX_CTRL_FIFO0_CLR             0x01u   /* As defined by Register map */
    #define OnTimeCounter_AUX_CTRL_FIFO1_CLR             0x02u   /* As defined by Register map */
    #define OnTimeCounter_AUX_CTRL_FIFO0_LVL             0x04u   /* As defined by Register map */
    #define OnTimeCounter_AUX_CTRL_FIFO1_LVL             0x08u   /* As defined by Register map */
    #define OnTimeCounter_STATUS_ACTL_INT_EN_MASK        0x10u   /* As defined for the ACTL Register */

#endif /* Implementation Specific Registers and Register Constants */

#endif  /* CY_TIMER_OnTimeCounter_H */


/* [] END OF FILE */
