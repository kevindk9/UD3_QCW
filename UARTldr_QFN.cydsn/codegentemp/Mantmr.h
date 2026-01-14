/*******************************************************************************
* File Name: Mantmr.h
* Version 3.30
*
* Description:
*  Contains the prototypes and constants for the functions available to the
*  PWM user module.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_PWM_Mantmr_H)
#define CY_PWM_Mantmr_H

#include "cyfitter.h"
#include "cytypes.h"
#include "CyLib.h" /* For CyEnterCriticalSection() and CyExitCriticalSection() functions */

extern uint8 Mantmr_initVar;


/***************************************
* Conditional Compilation Parameters
***************************************/
#define Mantmr_Resolution                     (8u)
#define Mantmr_UsingFixedFunction             (0u)
#define Mantmr_DeadBandMode                   (0u)
#define Mantmr_KillModeMinTime                (0u)
#define Mantmr_KillMode                       (0u)
#define Mantmr_PWMMode                        (0u)
#define Mantmr_PWMModeIsCenterAligned         (0u)
#define Mantmr_DeadBandUsed                   (0u)
#define Mantmr_DeadBand2_4                    (0u)

#if !defined(Mantmr_PWMUDB_genblk8_stsreg__REMOVED)
    #define Mantmr_UseStatus                  (1u)
#else
    #define Mantmr_UseStatus                  (0u)
#endif /* !defined(Mantmr_PWMUDB_genblk8_stsreg__REMOVED) */

#if !defined(Mantmr_PWMUDB_genblk1_ctrlreg__REMOVED)
    #define Mantmr_UseControl                 (1u)
#else
    #define Mantmr_UseControl                 (0u)
#endif /* !defined(Mantmr_PWMUDB_genblk1_ctrlreg__REMOVED) */

#define Mantmr_UseOneCompareMode              (1u)
#define Mantmr_MinimumKillTime                (1u)
#define Mantmr_EnableMode                     (0u)

#define Mantmr_CompareMode1SW                 (0u)
#define Mantmr_CompareMode2SW                 (0u)

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component PWM_v3_30 requires cy_boot v3.0 or later
#endif /* (CY_ PSOC5LP) */

/* Use Kill Mode Enumerated Types */
#define Mantmr__B_PWM__DISABLED 0
#define Mantmr__B_PWM__ASYNCHRONOUS 1
#define Mantmr__B_PWM__SINGLECYCLE 2
#define Mantmr__B_PWM__LATCHED 3
#define Mantmr__B_PWM__MINTIME 4


/* Use Dead Band Mode Enumerated Types */
#define Mantmr__B_PWM__DBMDISABLED 0
#define Mantmr__B_PWM__DBM_2_4_CLOCKS 1
#define Mantmr__B_PWM__DBM_256_CLOCKS 2


/* Used PWM Mode Enumerated Types */
#define Mantmr__B_PWM__ONE_OUTPUT 0
#define Mantmr__B_PWM__TWO_OUTPUTS 1
#define Mantmr__B_PWM__DUAL_EDGE 2
#define Mantmr__B_PWM__CENTER_ALIGN 3
#define Mantmr__B_PWM__DITHER 5
#define Mantmr__B_PWM__HARDWARESELECT 4


/* Used PWM Compare Mode Enumerated Types */
#define Mantmr__B_PWM__LESS_THAN 1
#define Mantmr__B_PWM__LESS_THAN_OR_EQUAL 2
#define Mantmr__B_PWM__GREATER_THAN 3
#define Mantmr__B_PWM__GREATER_THAN_OR_EQUAL_TO 4
#define Mantmr__B_PWM__EQUAL 0
#define Mantmr__B_PWM__FIRMWARE 5



/***************************************
* Data Struct Definition
***************************************/


/**************************************************************************
 * Sleep Wakeup Backup structure for PWM Component
 *************************************************************************/
typedef struct
{

    uint8 PWMEnableState;

    #if(!Mantmr_UsingFixedFunction)
        uint8 PWMUdb;               /* PWM Current Counter value  */
        #if(!Mantmr_PWMModeIsCenterAligned)
            uint8 PWMPeriod;
        #endif /* (!Mantmr_PWMModeIsCenterAligned) */
        #if (Mantmr_UseStatus)
            uint8 InterruptMaskValue;   /* PWM Current Interrupt Mask */
        #endif /* (Mantmr_UseStatus) */

        /* Backup for Deadband parameters */
        #if(Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_256_CLOCKS || \
            Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_2_4_CLOCKS)
            uint8 PWMdeadBandValue; /* Dead Band Counter Current Value */
        #endif /* deadband count is either 2-4 clocks or 256 clocks */

        /* Backup Kill Mode Counter*/
        #if(Mantmr_KillModeMinTime)
            uint8 PWMKillCounterPeriod; /* Kill Mode period value */
        #endif /* (Mantmr_KillModeMinTime) */

        /* Backup control register */
        #if(Mantmr_UseControl)
            uint8 PWMControlRegister; /* PWM Control Register value */
        #endif /* (Mantmr_UseControl) */

    #endif /* (!Mantmr_UsingFixedFunction) */

}Mantmr_backupStruct;


/***************************************
*        Function Prototypes
 **************************************/

void    Mantmr_Start(void) ;
void    Mantmr_Stop(void) ;

#if (Mantmr_UseStatus || Mantmr_UsingFixedFunction)
    void  Mantmr_SetInterruptMode(uint8 interruptMode) ;
    uint8 Mantmr_ReadStatusRegister(void) ;
#endif /* (Mantmr_UseStatus || Mantmr_UsingFixedFunction) */

#define Mantmr_GetInterruptSource() Mantmr_ReadStatusRegister()

#if (Mantmr_UseControl)
    uint8 Mantmr_ReadControlRegister(void) ;
    void  Mantmr_WriteControlRegister(uint8 control)
          ;
#endif /* (Mantmr_UseControl) */

#if (Mantmr_UseOneCompareMode)
   #if (Mantmr_CompareMode1SW)
       void    Mantmr_SetCompareMode(uint8 comparemode)
               ;
   #endif /* (Mantmr_CompareMode1SW) */
#else
    #if (Mantmr_CompareMode1SW)
        void    Mantmr_SetCompareMode1(uint8 comparemode)
                ;
    #endif /* (Mantmr_CompareMode1SW) */
    #if (Mantmr_CompareMode2SW)
        void    Mantmr_SetCompareMode2(uint8 comparemode)
                ;
    #endif /* (Mantmr_CompareMode2SW) */
#endif /* (Mantmr_UseOneCompareMode) */

#if (!Mantmr_UsingFixedFunction)
    uint8   Mantmr_ReadCounter(void) ;
    uint8 Mantmr_ReadCapture(void) ;

    #if (Mantmr_UseStatus)
            void Mantmr_ClearFIFO(void) ;
    #endif /* (Mantmr_UseStatus) */

    void    Mantmr_WriteCounter(uint8 counter)
            ;
#endif /* (!Mantmr_UsingFixedFunction) */

void    Mantmr_WritePeriod(uint8 period)
        ;
uint8 Mantmr_ReadPeriod(void) ;

#if (Mantmr_UseOneCompareMode)
    void    Mantmr_WriteCompare(uint8 compare)
            ;
    uint8 Mantmr_ReadCompare(void) ;
#else
    void    Mantmr_WriteCompare1(uint8 compare)
            ;
    uint8 Mantmr_ReadCompare1(void) ;
    void    Mantmr_WriteCompare2(uint8 compare)
            ;
    uint8 Mantmr_ReadCompare2(void) ;
#endif /* (Mantmr_UseOneCompareMode) */


#if (Mantmr_DeadBandUsed)
    void    Mantmr_WriteDeadTime(uint8 deadtime) ;
    uint8   Mantmr_ReadDeadTime(void) ;
#endif /* (Mantmr_DeadBandUsed) */

#if ( Mantmr_KillModeMinTime)
    void Mantmr_WriteKillTime(uint8 killtime) ;
    uint8 Mantmr_ReadKillTime(void) ;
#endif /* ( Mantmr_KillModeMinTime) */

void Mantmr_Init(void) ;
void Mantmr_Enable(void) ;
void Mantmr_Sleep(void) ;
void Mantmr_Wakeup(void) ;
void Mantmr_SaveConfig(void) ;
void Mantmr_RestoreConfig(void) ;


/***************************************
*         Initialization Values
**************************************/
#define Mantmr_INIT_PERIOD_VALUE          (20u)
#define Mantmr_INIT_COMPARE_VALUE1        (0u)
#define Mantmr_INIT_COMPARE_VALUE2        (63u)
#define Mantmr_INIT_INTERRUPTS_MODE       (uint8)(((uint8)(0u <<   \
                                                    Mantmr_STATUS_TC_INT_EN_MASK_SHIFT)) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    Mantmr_STATUS_CMP2_INT_EN_MASK_SHIFT)) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    Mantmr_STATUS_CMP1_INT_EN_MASK_SHIFT )) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    Mantmr_STATUS_KILL_INT_EN_MASK_SHIFT )))
#define Mantmr_DEFAULT_COMPARE2_MODE      (uint8)((uint8)1u <<  Mantmr_CTRL_CMPMODE2_SHIFT)
#define Mantmr_DEFAULT_COMPARE1_MODE      (uint8)((uint8)0u <<  Mantmr_CTRL_CMPMODE1_SHIFT)
#define Mantmr_INIT_DEAD_TIME             (1u)


/********************************
*         Registers
******************************** */

#if (Mantmr_UsingFixedFunction)
   #define Mantmr_PERIOD_LSB              (*(reg16 *) Mantmr_PWMHW__PER0)
   #define Mantmr_PERIOD_LSB_PTR          ( (reg16 *) Mantmr_PWMHW__PER0)
   #define Mantmr_COMPARE1_LSB            (*(reg16 *) Mantmr_PWMHW__CNT_CMP0)
   #define Mantmr_COMPARE1_LSB_PTR        ( (reg16 *) Mantmr_PWMHW__CNT_CMP0)
   #define Mantmr_COMPARE2_LSB            (0x00u)
   #define Mantmr_COMPARE2_LSB_PTR        (0x00u)
   #define Mantmr_COUNTER_LSB             (*(reg16 *) Mantmr_PWMHW__CNT_CMP0)
   #define Mantmr_COUNTER_LSB_PTR         ( (reg16 *) Mantmr_PWMHW__CNT_CMP0)
   #define Mantmr_CAPTURE_LSB             (*(reg16 *) Mantmr_PWMHW__CAP0)
   #define Mantmr_CAPTURE_LSB_PTR         ( (reg16 *) Mantmr_PWMHW__CAP0)
   #define Mantmr_RT1                     (*(reg8 *)  Mantmr_PWMHW__RT1)
   #define Mantmr_RT1_PTR                 ( (reg8 *)  Mantmr_PWMHW__RT1)

#else
   #if (Mantmr_Resolution == 8u) /* 8bit - PWM */

       #if(Mantmr_PWMModeIsCenterAligned)
           #define Mantmr_PERIOD_LSB      (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
           #define Mantmr_PERIOD_LSB_PTR  ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
       #else
           #define Mantmr_PERIOD_LSB      (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__F0_REG)
           #define Mantmr_PERIOD_LSB_PTR  ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__F0_REG)
       #endif /* (Mantmr_PWMModeIsCenterAligned) */

       #define Mantmr_COMPARE1_LSB        (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__D0_REG)
       #define Mantmr_COMPARE1_LSB_PTR    ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__D0_REG)
       #define Mantmr_COMPARE2_LSB        (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
       #define Mantmr_COMPARE2_LSB_PTR    ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
       #define Mantmr_COUNTERCAP_LSB      (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__A1_REG)
       #define Mantmr_COUNTERCAP_LSB_PTR  ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__A1_REG)
       #define Mantmr_COUNTER_LSB         (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__A0_REG)
       #define Mantmr_COUNTER_LSB_PTR     ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__A0_REG)
       #define Mantmr_CAPTURE_LSB         (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__F1_REG)
       #define Mantmr_CAPTURE_LSB_PTR     ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__F1_REG)

   #else
        #if(CY_PSOC3) /* 8-bit address space */
            #if(Mantmr_PWMModeIsCenterAligned)
               #define Mantmr_PERIOD_LSB      (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
               #define Mantmr_PERIOD_LSB_PTR  ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
            #else
               #define Mantmr_PERIOD_LSB      (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__F0_REG)
               #define Mantmr_PERIOD_LSB_PTR  ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__F0_REG)
            #endif /* (Mantmr_PWMModeIsCenterAligned) */

            #define Mantmr_COMPARE1_LSB       (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__D0_REG)
            #define Mantmr_COMPARE1_LSB_PTR   ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__D0_REG)
            #define Mantmr_COMPARE2_LSB       (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
            #define Mantmr_COMPARE2_LSB_PTR   ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__D1_REG)
            #define Mantmr_COUNTERCAP_LSB     (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__A1_REG)
            #define Mantmr_COUNTERCAP_LSB_PTR ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__A1_REG)
            #define Mantmr_COUNTER_LSB        (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__A0_REG)
            #define Mantmr_COUNTER_LSB_PTR    ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__A0_REG)
            #define Mantmr_CAPTURE_LSB        (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__F1_REG)
            #define Mantmr_CAPTURE_LSB_PTR    ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__F1_REG)
        #else
            #if(Mantmr_PWMModeIsCenterAligned)
               #define Mantmr_PERIOD_LSB      (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
               #define Mantmr_PERIOD_LSB_PTR  ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
            #else
               #define Mantmr_PERIOD_LSB      (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG)
               #define Mantmr_PERIOD_LSB_PTR  ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG)
            #endif /* (Mantmr_PWMModeIsCenterAligned) */

            #define Mantmr_COMPARE1_LSB       (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG)
            #define Mantmr_COMPARE1_LSB_PTR   ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG)
            #define Mantmr_COMPARE2_LSB       (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
            #define Mantmr_COMPARE2_LSB_PTR   ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
            #define Mantmr_COUNTERCAP_LSB     (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG)
            #define Mantmr_COUNTERCAP_LSB_PTR ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG)
            #define Mantmr_COUNTER_LSB        (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG)
            #define Mantmr_COUNTER_LSB_PTR    ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG)
            #define Mantmr_CAPTURE_LSB        (*(reg16 *) Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG)
            #define Mantmr_CAPTURE_LSB_PTR    ((reg16 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG)
        #endif /* (CY_PSOC3) */

       #define Mantmr_AUX_CONTROLDP1          (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u1__DP_AUX_CTL_REG)
       #define Mantmr_AUX_CONTROLDP1_PTR      ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u1__DP_AUX_CTL_REG)

   #endif /* (Mantmr_Resolution == 8) */

   #define Mantmr_COUNTERCAP_LSB_PTR_8BIT ( (reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__A1_REG)
   #define Mantmr_AUX_CONTROLDP0          (*(reg8 *)  Mantmr_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG)
   #define Mantmr_AUX_CONTROLDP0_PTR      ((reg8 *)   Mantmr_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG)

#endif /* (Mantmr_UsingFixedFunction) */

#if(Mantmr_KillModeMinTime )
    #define Mantmr_KILLMODEMINTIME        (*(reg8 *)  Mantmr_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    #define Mantmr_KILLMODEMINTIME_PTR    ((reg8 *)   Mantmr_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    /* Fixed Function Block has no Kill Mode parameters because it is Asynchronous only */
#endif /* (Mantmr_KillModeMinTime ) */

#if(Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_256_CLOCKS)
    #define Mantmr_DEADBAND_COUNT         (*(reg8 *)  Mantmr_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define Mantmr_DEADBAND_COUNT_PTR     ((reg8 *)   Mantmr_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define Mantmr_DEADBAND_LSB_PTR       ((reg8 *)   Mantmr_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
    #define Mantmr_DEADBAND_LSB           (*(reg8 *)  Mantmr_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
#elif(Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_2_4_CLOCKS)
    
    /* In Fixed Function Block these bits are in the control blocks control register */
    #if (Mantmr_UsingFixedFunction)
        #define Mantmr_DEADBAND_COUNT         (*(reg8 *)  Mantmr_PWMHW__CFG0)
        #define Mantmr_DEADBAND_COUNT_PTR     ((reg8 *)   Mantmr_PWMHW__CFG0)
        #define Mantmr_DEADBAND_COUNT_MASK    (uint8)((uint8)0x03u << Mantmr_DEADBAND_COUNT_SHIFT)

        /* As defined by the Register Map as DEADBAND_PERIOD[1:0] in CFG0 */
        #define Mantmr_DEADBAND_COUNT_SHIFT   (0x06u)
    #else
        /* Lower two bits of the added control register define the count 1-3 */
        #define Mantmr_DEADBAND_COUNT         (*(reg8 *)  Mantmr_PWMUDB_genblk7_dbctrlreg__CONTROL_REG)
        #define Mantmr_DEADBAND_COUNT_PTR     ((reg8 *)   Mantmr_PWMUDB_genblk7_dbctrlreg__CONTROL_REG)
        #define Mantmr_DEADBAND_COUNT_MASK    (uint8)((uint8)0x03u << Mantmr_DEADBAND_COUNT_SHIFT)

        /* As defined by the verilog implementation of the Control Register */
        #define Mantmr_DEADBAND_COUNT_SHIFT   (0x00u)
    #endif /* (Mantmr_UsingFixedFunction) */
#endif /* (Mantmr_DeadBandMode == Mantmr__B_PWM__DBM_256_CLOCKS) */



#if (Mantmr_UsingFixedFunction)
    #define Mantmr_STATUS                 (*(reg8 *) Mantmr_PWMHW__SR0)
    #define Mantmr_STATUS_PTR             ((reg8 *) Mantmr_PWMHW__SR0)
    #define Mantmr_STATUS_MASK            (*(reg8 *) Mantmr_PWMHW__SR0)
    #define Mantmr_STATUS_MASK_PTR        ((reg8 *) Mantmr_PWMHW__SR0)
    #define Mantmr_CONTROL                (*(reg8 *) Mantmr_PWMHW__CFG0)
    #define Mantmr_CONTROL_PTR            ((reg8 *) Mantmr_PWMHW__CFG0)
    #define Mantmr_CONTROL2               (*(reg8 *) Mantmr_PWMHW__CFG1)
    #define Mantmr_CONTROL3               (*(reg8 *) Mantmr_PWMHW__CFG2)
    #define Mantmr_GLOBAL_ENABLE          (*(reg8 *) Mantmr_PWMHW__PM_ACT_CFG)
    #define Mantmr_GLOBAL_ENABLE_PTR      ( (reg8 *) Mantmr_PWMHW__PM_ACT_CFG)
    #define Mantmr_GLOBAL_STBY_ENABLE     (*(reg8 *) Mantmr_PWMHW__PM_STBY_CFG)
    #define Mantmr_GLOBAL_STBY_ENABLE_PTR ( (reg8 *) Mantmr_PWMHW__PM_STBY_CFG)


    /***********************************
    *          Constants
    ***********************************/

    /* Fixed Function Block Chosen */
    #define Mantmr_BLOCK_EN_MASK          (Mantmr_PWMHW__PM_ACT_MSK)
    #define Mantmr_BLOCK_STBY_EN_MASK     (Mantmr_PWMHW__PM_STBY_MSK)
    
    /* Control Register definitions */
    #define Mantmr_CTRL_ENABLE_SHIFT      (0x00u)

    /* As defined by Register map as MODE_CFG bits in CFG2*/
    #define Mantmr_CTRL_CMPMODE1_SHIFT    (0x04u)

    /* As defined by Register map */
    #define Mantmr_CTRL_DEAD_TIME_SHIFT   (0x06u)  

    /* Fixed Function Block Only CFG register bit definitions */
    /*  Set to compare mode */
    #define Mantmr_CFG0_MODE              (0x02u)   

    /* Enable the block to run */
    #define Mantmr_CFG0_ENABLE            (0x01u)   
    
    /* As defined by Register map as DB bit in CFG0 */
    #define Mantmr_CFG0_DB                (0x20u)   

    /* Control Register Bit Masks */
    #define Mantmr_CTRL_ENABLE            (uint8)((uint8)0x01u << Mantmr_CTRL_ENABLE_SHIFT)
    #define Mantmr_CTRL_RESET             (uint8)((uint8)0x01u << Mantmr_CTRL_RESET_SHIFT)
    #define Mantmr_CTRL_CMPMODE2_MASK     (uint8)((uint8)0x07u << Mantmr_CTRL_CMPMODE2_SHIFT)
    #define Mantmr_CTRL_CMPMODE1_MASK     (uint8)((uint8)0x07u << Mantmr_CTRL_CMPMODE1_SHIFT)

    /* Control2 Register Bit Masks */
    /* As defined in Register Map, Part of the TMRX_CFG1 register */
    #define Mantmr_CTRL2_IRQ_SEL_SHIFT    (0x00u)
    #define Mantmr_CTRL2_IRQ_SEL          (uint8)((uint8)0x01u << Mantmr_CTRL2_IRQ_SEL_SHIFT)

    /* Status Register Bit Locations */
    /* As defined by Register map as TC in SR0 */
    #define Mantmr_STATUS_TC_SHIFT        (0x07u)   
    
    /* As defined by the Register map as CAP_CMP in SR0 */
    #define Mantmr_STATUS_CMP1_SHIFT      (0x06u)   

    /* Status Register Interrupt Enable Bit Locations */
    #define Mantmr_STATUS_KILL_INT_EN_MASK_SHIFT          (0x00u)
    #define Mantmr_STATUS_TC_INT_EN_MASK_SHIFT            (Mantmr_STATUS_TC_SHIFT - 4u)
    #define Mantmr_STATUS_CMP2_INT_EN_MASK_SHIFT          (0x00u)
    #define Mantmr_STATUS_CMP1_INT_EN_MASK_SHIFT          (Mantmr_STATUS_CMP1_SHIFT - 4u)

    /* Status Register Bit Masks */
    #define Mantmr_STATUS_TC              (uint8)((uint8)0x01u << Mantmr_STATUS_TC_SHIFT)
    #define Mantmr_STATUS_CMP1            (uint8)((uint8)0x01u << Mantmr_STATUS_CMP1_SHIFT)

    /* Status Register Interrupt Bit Masks */
    #define Mantmr_STATUS_TC_INT_EN_MASK              (uint8)((uint8)Mantmr_STATUS_TC >> 4u)
    #define Mantmr_STATUS_CMP1_INT_EN_MASK            (uint8)((uint8)Mantmr_STATUS_CMP1 >> 4u)

    /*RT1 Synch Constants */
    #define Mantmr_RT1_SHIFT             (0x04u)

    /* Sync TC and CMP bit masks */
    #define Mantmr_RT1_MASK              (uint8)((uint8)0x03u << Mantmr_RT1_SHIFT)
    #define Mantmr_SYNC                  (uint8)((uint8)0x03u << Mantmr_RT1_SHIFT)
    #define Mantmr_SYNCDSI_SHIFT         (0x00u)

    /* Sync all DSI inputs */
    #define Mantmr_SYNCDSI_MASK          (uint8)((uint8)0x0Fu << Mantmr_SYNCDSI_SHIFT)

    /* Sync all DSI inputs */
    #define Mantmr_SYNCDSI_EN            (uint8)((uint8)0x0Fu << Mantmr_SYNCDSI_SHIFT)


#else
    #define Mantmr_STATUS                (*(reg8 *)   Mantmr_PWMUDB_genblk8_stsreg__STATUS_REG )
    #define Mantmr_STATUS_PTR            ((reg8 *)    Mantmr_PWMUDB_genblk8_stsreg__STATUS_REG )
    #define Mantmr_STATUS_MASK           (*(reg8 *)   Mantmr_PWMUDB_genblk8_stsreg__MASK_REG)
    #define Mantmr_STATUS_MASK_PTR       ((reg8 *)    Mantmr_PWMUDB_genblk8_stsreg__MASK_REG)
    #define Mantmr_STATUS_AUX_CTRL       (*(reg8 *)   Mantmr_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG)
    #define Mantmr_CONTROL               (*(reg8 *)   Mantmr_PWMUDB_genblk1_ctrlreg__CONTROL_REG)
    #define Mantmr_CONTROL_PTR           ((reg8 *)    Mantmr_PWMUDB_genblk1_ctrlreg__CONTROL_REG)


    /***********************************
    *          Constants
    ***********************************/

    /* Control Register bit definitions */
    #define Mantmr_CTRL_ENABLE_SHIFT      (0x07u)
    #define Mantmr_CTRL_RESET_SHIFT       (0x06u)
    #define Mantmr_CTRL_CMPMODE2_SHIFT    (0x03u)
    #define Mantmr_CTRL_CMPMODE1_SHIFT    (0x00u)
    #define Mantmr_CTRL_DEAD_TIME_SHIFT   (0x00u)   /* No Shift Needed for UDB block */
    
    /* Control Register Bit Masks */
    #define Mantmr_CTRL_ENABLE            (uint8)((uint8)0x01u << Mantmr_CTRL_ENABLE_SHIFT)
    #define Mantmr_CTRL_RESET             (uint8)((uint8)0x01u << Mantmr_CTRL_RESET_SHIFT)
    #define Mantmr_CTRL_CMPMODE2_MASK     (uint8)((uint8)0x07u << Mantmr_CTRL_CMPMODE2_SHIFT)
    #define Mantmr_CTRL_CMPMODE1_MASK     (uint8)((uint8)0x07u << Mantmr_CTRL_CMPMODE1_SHIFT)

    /* Status Register Bit Locations */
    #define Mantmr_STATUS_KILL_SHIFT          (0x05u)
    #define Mantmr_STATUS_FIFONEMPTY_SHIFT    (0x04u)
    #define Mantmr_STATUS_FIFOFULL_SHIFT      (0x03u)
    #define Mantmr_STATUS_TC_SHIFT            (0x02u)
    #define Mantmr_STATUS_CMP2_SHIFT          (0x01u)
    #define Mantmr_STATUS_CMP1_SHIFT          (0x00u)

    /* Status Register Interrupt Enable Bit Locations - UDB Status Interrupt Mask match Status Bit Locations*/
    #define Mantmr_STATUS_KILL_INT_EN_MASK_SHIFT          (Mantmr_STATUS_KILL_SHIFT)
    #define Mantmr_STATUS_FIFONEMPTY_INT_EN_MASK_SHIFT    (Mantmr_STATUS_FIFONEMPTY_SHIFT)
    #define Mantmr_STATUS_FIFOFULL_INT_EN_MASK_SHIFT      (Mantmr_STATUS_FIFOFULL_SHIFT)
    #define Mantmr_STATUS_TC_INT_EN_MASK_SHIFT            (Mantmr_STATUS_TC_SHIFT)
    #define Mantmr_STATUS_CMP2_INT_EN_MASK_SHIFT          (Mantmr_STATUS_CMP2_SHIFT)
    #define Mantmr_STATUS_CMP1_INT_EN_MASK_SHIFT          (Mantmr_STATUS_CMP1_SHIFT)

    /* Status Register Bit Masks */
    #define Mantmr_STATUS_KILL            (uint8)((uint8)0x00u << Mantmr_STATUS_KILL_SHIFT )
    #define Mantmr_STATUS_FIFOFULL        (uint8)((uint8)0x01u << Mantmr_STATUS_FIFOFULL_SHIFT)
    #define Mantmr_STATUS_FIFONEMPTY      (uint8)((uint8)0x01u << Mantmr_STATUS_FIFONEMPTY_SHIFT)
    #define Mantmr_STATUS_TC              (uint8)((uint8)0x01u << Mantmr_STATUS_TC_SHIFT)
    #define Mantmr_STATUS_CMP2            (uint8)((uint8)0x01u << Mantmr_STATUS_CMP2_SHIFT)
    #define Mantmr_STATUS_CMP1            (uint8)((uint8)0x01u << Mantmr_STATUS_CMP1_SHIFT)

    /* Status Register Interrupt Bit Masks  - UDB Status Interrupt Mask match Status Bit Locations */
    #define Mantmr_STATUS_KILL_INT_EN_MASK            (Mantmr_STATUS_KILL)
    #define Mantmr_STATUS_FIFOFULL_INT_EN_MASK        (Mantmr_STATUS_FIFOFULL)
    #define Mantmr_STATUS_FIFONEMPTY_INT_EN_MASK      (Mantmr_STATUS_FIFONEMPTY)
    #define Mantmr_STATUS_TC_INT_EN_MASK              (Mantmr_STATUS_TC)
    #define Mantmr_STATUS_CMP2_INT_EN_MASK            (Mantmr_STATUS_CMP2)
    #define Mantmr_STATUS_CMP1_INT_EN_MASK            (Mantmr_STATUS_CMP1)

    /* Datapath Auxillary Control Register bit definitions */
    #define Mantmr_AUX_CTRL_FIFO0_CLR         (0x01u)
    #define Mantmr_AUX_CTRL_FIFO1_CLR         (0x02u)
    #define Mantmr_AUX_CTRL_FIFO0_LVL         (0x04u)
    #define Mantmr_AUX_CTRL_FIFO1_LVL         (0x08u)
    #define Mantmr_STATUS_ACTL_INT_EN_MASK    (0x10u) /* As defined for the ACTL Register */
#endif /* Mantmr_UsingFixedFunction */

#endif  /* CY_PWM_Mantmr_H */


/* [] END OF FILE */
