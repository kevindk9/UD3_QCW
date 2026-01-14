/*******************************************************************************
* File Name: FB_glitch_detect.h
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

#if !defined(CY_PWM_FB_glitch_detect_H)
#define CY_PWM_FB_glitch_detect_H

#include "cyfitter.h"
#include "cytypes.h"
#include "CyLib.h" /* For CyEnterCriticalSection() and CyExitCriticalSection() functions */

extern uint8 FB_glitch_detect_initVar;


/***************************************
* Conditional Compilation Parameters
***************************************/
#define FB_glitch_detect_Resolution                     (8u)
#define FB_glitch_detect_UsingFixedFunction             (0u)
#define FB_glitch_detect_DeadBandMode                   (0u)
#define FB_glitch_detect_KillModeMinTime                (0u)
#define FB_glitch_detect_KillMode                       (0u)
#define FB_glitch_detect_PWMMode                        (2u)
#define FB_glitch_detect_PWMModeIsCenterAligned         (0u)
#define FB_glitch_detect_DeadBandUsed                   (0u)
#define FB_glitch_detect_DeadBand2_4                    (0u)

#if !defined(FB_glitch_detect_PWMUDB_genblk8_stsreg__REMOVED)
    #define FB_glitch_detect_UseStatus                  (1u)
#else
    #define FB_glitch_detect_UseStatus                  (0u)
#endif /* !defined(FB_glitch_detect_PWMUDB_genblk8_stsreg__REMOVED) */

#if !defined(FB_glitch_detect_PWMUDB_genblk1_ctrlreg__REMOVED)
    #define FB_glitch_detect_UseControl                 (1u)
#else
    #define FB_glitch_detect_UseControl                 (0u)
#endif /* !defined(FB_glitch_detect_PWMUDB_genblk1_ctrlreg__REMOVED) */

#define FB_glitch_detect_UseOneCompareMode              (0u)
#define FB_glitch_detect_MinimumKillTime                (1u)
#define FB_glitch_detect_EnableMode                     (0u)

#define FB_glitch_detect_CompareMode1SW                 (0u)
#define FB_glitch_detect_CompareMode2SW                 (0u)

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component PWM_v3_30 requires cy_boot v3.0 or later
#endif /* (CY_ PSOC5LP) */

/* Use Kill Mode Enumerated Types */
#define FB_glitch_detect__B_PWM__DISABLED 0
#define FB_glitch_detect__B_PWM__ASYNCHRONOUS 1
#define FB_glitch_detect__B_PWM__SINGLECYCLE 2
#define FB_glitch_detect__B_PWM__LATCHED 3
#define FB_glitch_detect__B_PWM__MINTIME 4


/* Use Dead Band Mode Enumerated Types */
#define FB_glitch_detect__B_PWM__DBMDISABLED 0
#define FB_glitch_detect__B_PWM__DBM_2_4_CLOCKS 1
#define FB_glitch_detect__B_PWM__DBM_256_CLOCKS 2


/* Used PWM Mode Enumerated Types */
#define FB_glitch_detect__B_PWM__ONE_OUTPUT 0
#define FB_glitch_detect__B_PWM__TWO_OUTPUTS 1
#define FB_glitch_detect__B_PWM__DUAL_EDGE 2
#define FB_glitch_detect__B_PWM__CENTER_ALIGN 3
#define FB_glitch_detect__B_PWM__DITHER 5
#define FB_glitch_detect__B_PWM__HARDWARESELECT 4


/* Used PWM Compare Mode Enumerated Types */
#define FB_glitch_detect__B_PWM__LESS_THAN 1
#define FB_glitch_detect__B_PWM__LESS_THAN_OR_EQUAL 2
#define FB_glitch_detect__B_PWM__GREATER_THAN 3
#define FB_glitch_detect__B_PWM__GREATER_THAN_OR_EQUAL_TO 4
#define FB_glitch_detect__B_PWM__EQUAL 0
#define FB_glitch_detect__B_PWM__FIRMWARE 5



/***************************************
* Data Struct Definition
***************************************/


/**************************************************************************
 * Sleep Wakeup Backup structure for PWM Component
 *************************************************************************/
typedef struct
{

    uint8 PWMEnableState;

    #if(!FB_glitch_detect_UsingFixedFunction)
        uint8 PWMUdb;               /* PWM Current Counter value  */
        #if(!FB_glitch_detect_PWMModeIsCenterAligned)
            uint8 PWMPeriod;
        #endif /* (!FB_glitch_detect_PWMModeIsCenterAligned) */
        #if (FB_glitch_detect_UseStatus)
            uint8 InterruptMaskValue;   /* PWM Current Interrupt Mask */
        #endif /* (FB_glitch_detect_UseStatus) */

        /* Backup for Deadband parameters */
        #if(FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_256_CLOCKS || \
            FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_2_4_CLOCKS)
            uint8 PWMdeadBandValue; /* Dead Band Counter Current Value */
        #endif /* deadband count is either 2-4 clocks or 256 clocks */

        /* Backup Kill Mode Counter*/
        #if(FB_glitch_detect_KillModeMinTime)
            uint8 PWMKillCounterPeriod; /* Kill Mode period value */
        #endif /* (FB_glitch_detect_KillModeMinTime) */

        /* Backup control register */
        #if(FB_glitch_detect_UseControl)
            uint8 PWMControlRegister; /* PWM Control Register value */
        #endif /* (FB_glitch_detect_UseControl) */

    #endif /* (!FB_glitch_detect_UsingFixedFunction) */

}FB_glitch_detect_backupStruct;


/***************************************
*        Function Prototypes
 **************************************/

void    FB_glitch_detect_Start(void) ;
void    FB_glitch_detect_Stop(void) ;

#if (FB_glitch_detect_UseStatus || FB_glitch_detect_UsingFixedFunction)
    void  FB_glitch_detect_SetInterruptMode(uint8 interruptMode) ;
    uint8 FB_glitch_detect_ReadStatusRegister(void) ;
#endif /* (FB_glitch_detect_UseStatus || FB_glitch_detect_UsingFixedFunction) */

#define FB_glitch_detect_GetInterruptSource() FB_glitch_detect_ReadStatusRegister()

#if (FB_glitch_detect_UseControl)
    uint8 FB_glitch_detect_ReadControlRegister(void) ;
    void  FB_glitch_detect_WriteControlRegister(uint8 control)
          ;
#endif /* (FB_glitch_detect_UseControl) */

#if (FB_glitch_detect_UseOneCompareMode)
   #if (FB_glitch_detect_CompareMode1SW)
       void    FB_glitch_detect_SetCompareMode(uint8 comparemode)
               ;
   #endif /* (FB_glitch_detect_CompareMode1SW) */
#else
    #if (FB_glitch_detect_CompareMode1SW)
        void    FB_glitch_detect_SetCompareMode1(uint8 comparemode)
                ;
    #endif /* (FB_glitch_detect_CompareMode1SW) */
    #if (FB_glitch_detect_CompareMode2SW)
        void    FB_glitch_detect_SetCompareMode2(uint8 comparemode)
                ;
    #endif /* (FB_glitch_detect_CompareMode2SW) */
#endif /* (FB_glitch_detect_UseOneCompareMode) */

#if (!FB_glitch_detect_UsingFixedFunction)
    uint8   FB_glitch_detect_ReadCounter(void) ;
    uint8 FB_glitch_detect_ReadCapture(void) ;

    #if (FB_glitch_detect_UseStatus)
            void FB_glitch_detect_ClearFIFO(void) ;
    #endif /* (FB_glitch_detect_UseStatus) */

    void    FB_glitch_detect_WriteCounter(uint8 counter)
            ;
#endif /* (!FB_glitch_detect_UsingFixedFunction) */

void    FB_glitch_detect_WritePeriod(uint8 period)
        ;
uint8 FB_glitch_detect_ReadPeriod(void) ;

#if (FB_glitch_detect_UseOneCompareMode)
    void    FB_glitch_detect_WriteCompare(uint8 compare)
            ;
    uint8 FB_glitch_detect_ReadCompare(void) ;
#else
    void    FB_glitch_detect_WriteCompare1(uint8 compare)
            ;
    uint8 FB_glitch_detect_ReadCompare1(void) ;
    void    FB_glitch_detect_WriteCompare2(uint8 compare)
            ;
    uint8 FB_glitch_detect_ReadCompare2(void) ;
#endif /* (FB_glitch_detect_UseOneCompareMode) */


#if (FB_glitch_detect_DeadBandUsed)
    void    FB_glitch_detect_WriteDeadTime(uint8 deadtime) ;
    uint8   FB_glitch_detect_ReadDeadTime(void) ;
#endif /* (FB_glitch_detect_DeadBandUsed) */

#if ( FB_glitch_detect_KillModeMinTime)
    void FB_glitch_detect_WriteKillTime(uint8 killtime) ;
    uint8 FB_glitch_detect_ReadKillTime(void) ;
#endif /* ( FB_glitch_detect_KillModeMinTime) */

void FB_glitch_detect_Init(void) ;
void FB_glitch_detect_Enable(void) ;
void FB_glitch_detect_Sleep(void) ;
void FB_glitch_detect_Wakeup(void) ;
void FB_glitch_detect_SaveConfig(void) ;
void FB_glitch_detect_RestoreConfig(void) ;


/***************************************
*         Initialization Values
**************************************/
#define FB_glitch_detect_INIT_PERIOD_VALUE          (255u)
#define FB_glitch_detect_INIT_COMPARE_VALUE1        (233u)
#define FB_glitch_detect_INIT_COMPARE_VALUE2        (254u)
#define FB_glitch_detect_INIT_INTERRUPTS_MODE       (uint8)(((uint8)(0u <<   \
                                                    FB_glitch_detect_STATUS_TC_INT_EN_MASK_SHIFT)) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    FB_glitch_detect_STATUS_CMP2_INT_EN_MASK_SHIFT)) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    FB_glitch_detect_STATUS_CMP1_INT_EN_MASK_SHIFT )) | \
                                                    (uint8)((uint8)(0u <<  \
                                                    FB_glitch_detect_STATUS_KILL_INT_EN_MASK_SHIFT )))
#define FB_glitch_detect_DEFAULT_COMPARE2_MODE      (uint8)((uint8)1u <<  FB_glitch_detect_CTRL_CMPMODE2_SHIFT)
#define FB_glitch_detect_DEFAULT_COMPARE1_MODE      (uint8)((uint8)3u <<  FB_glitch_detect_CTRL_CMPMODE1_SHIFT)
#define FB_glitch_detect_INIT_DEAD_TIME             (3u)


/********************************
*         Registers
******************************** */

#if (FB_glitch_detect_UsingFixedFunction)
   #define FB_glitch_detect_PERIOD_LSB              (*(reg16 *) FB_glitch_detect_PWMHW__PER0)
   #define FB_glitch_detect_PERIOD_LSB_PTR          ( (reg16 *) FB_glitch_detect_PWMHW__PER0)
   #define FB_glitch_detect_COMPARE1_LSB            (*(reg16 *) FB_glitch_detect_PWMHW__CNT_CMP0)
   #define FB_glitch_detect_COMPARE1_LSB_PTR        ( (reg16 *) FB_glitch_detect_PWMHW__CNT_CMP0)
   #define FB_glitch_detect_COMPARE2_LSB            (0x00u)
   #define FB_glitch_detect_COMPARE2_LSB_PTR        (0x00u)
   #define FB_glitch_detect_COUNTER_LSB             (*(reg16 *) FB_glitch_detect_PWMHW__CNT_CMP0)
   #define FB_glitch_detect_COUNTER_LSB_PTR         ( (reg16 *) FB_glitch_detect_PWMHW__CNT_CMP0)
   #define FB_glitch_detect_CAPTURE_LSB             (*(reg16 *) FB_glitch_detect_PWMHW__CAP0)
   #define FB_glitch_detect_CAPTURE_LSB_PTR         ( (reg16 *) FB_glitch_detect_PWMHW__CAP0)
   #define FB_glitch_detect_RT1                     (*(reg8 *)  FB_glitch_detect_PWMHW__RT1)
   #define FB_glitch_detect_RT1_PTR                 ( (reg8 *)  FB_glitch_detect_PWMHW__RT1)

#else
   #if (FB_glitch_detect_Resolution == 8u) /* 8bit - PWM */

       #if(FB_glitch_detect_PWMModeIsCenterAligned)
           #define FB_glitch_detect_PERIOD_LSB      (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
           #define FB_glitch_detect_PERIOD_LSB_PTR  ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
       #else
           #define FB_glitch_detect_PERIOD_LSB      (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F0_REG)
           #define FB_glitch_detect_PERIOD_LSB_PTR  ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F0_REG)
       #endif /* (FB_glitch_detect_PWMModeIsCenterAligned) */

       #define FB_glitch_detect_COMPARE1_LSB        (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D0_REG)
       #define FB_glitch_detect_COMPARE1_LSB_PTR    ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D0_REG)
       #define FB_glitch_detect_COMPARE2_LSB        (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
       #define FB_glitch_detect_COMPARE2_LSB_PTR    ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
       #define FB_glitch_detect_COUNTERCAP_LSB      (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A1_REG)
       #define FB_glitch_detect_COUNTERCAP_LSB_PTR  ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A1_REG)
       #define FB_glitch_detect_COUNTER_LSB         (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A0_REG)
       #define FB_glitch_detect_COUNTER_LSB_PTR     ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A0_REG)
       #define FB_glitch_detect_CAPTURE_LSB         (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F1_REG)
       #define FB_glitch_detect_CAPTURE_LSB_PTR     ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F1_REG)

   #else
        #if(CY_PSOC3) /* 8-bit address space */
            #if(FB_glitch_detect_PWMModeIsCenterAligned)
               #define FB_glitch_detect_PERIOD_LSB      (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
               #define FB_glitch_detect_PERIOD_LSB_PTR  ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
            #else
               #define FB_glitch_detect_PERIOD_LSB      (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F0_REG)
               #define FB_glitch_detect_PERIOD_LSB_PTR  ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F0_REG)
            #endif /* (FB_glitch_detect_PWMModeIsCenterAligned) */

            #define FB_glitch_detect_COMPARE1_LSB       (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D0_REG)
            #define FB_glitch_detect_COMPARE1_LSB_PTR   ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D0_REG)
            #define FB_glitch_detect_COMPARE2_LSB       (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
            #define FB_glitch_detect_COMPARE2_LSB_PTR   ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__D1_REG)
            #define FB_glitch_detect_COUNTERCAP_LSB     (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A1_REG)
            #define FB_glitch_detect_COUNTERCAP_LSB_PTR ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A1_REG)
            #define FB_glitch_detect_COUNTER_LSB        (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A0_REG)
            #define FB_glitch_detect_COUNTER_LSB_PTR    ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A0_REG)
            #define FB_glitch_detect_CAPTURE_LSB        (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F1_REG)
            #define FB_glitch_detect_CAPTURE_LSB_PTR    ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__F1_REG)
        #else
            #if(FB_glitch_detect_PWMModeIsCenterAligned)
               #define FB_glitch_detect_PERIOD_LSB      (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
               #define FB_glitch_detect_PERIOD_LSB_PTR  ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
            #else
               #define FB_glitch_detect_PERIOD_LSB      (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG)
               #define FB_glitch_detect_PERIOD_LSB_PTR  ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_F0_REG)
            #endif /* (FB_glitch_detect_PWMModeIsCenterAligned) */

            #define FB_glitch_detect_COMPARE1_LSB       (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG)
            #define FB_glitch_detect_COMPARE1_LSB_PTR   ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_D0_REG)
            #define FB_glitch_detect_COMPARE2_LSB       (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
            #define FB_glitch_detect_COMPARE2_LSB_PTR   ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_D1_REG)
            #define FB_glitch_detect_COUNTERCAP_LSB     (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG)
            #define FB_glitch_detect_COUNTERCAP_LSB_PTR ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_A1_REG)
            #define FB_glitch_detect_COUNTER_LSB        (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG)
            #define FB_glitch_detect_COUNTER_LSB_PTR    ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_A0_REG)
            #define FB_glitch_detect_CAPTURE_LSB        (*(reg16 *) FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG)
            #define FB_glitch_detect_CAPTURE_LSB_PTR    ((reg16 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__16BIT_F1_REG)
        #endif /* (CY_PSOC3) */

       #define FB_glitch_detect_AUX_CONTROLDP1          (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u1__DP_AUX_CTL_REG)
       #define FB_glitch_detect_AUX_CONTROLDP1_PTR      ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u1__DP_AUX_CTL_REG)

   #endif /* (FB_glitch_detect_Resolution == 8) */

   #define FB_glitch_detect_COUNTERCAP_LSB_PTR_8BIT ( (reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__A1_REG)
   #define FB_glitch_detect_AUX_CONTROLDP0          (*(reg8 *)  FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG)
   #define FB_glitch_detect_AUX_CONTROLDP0_PTR      ((reg8 *)   FB_glitch_detect_PWMUDB_sP8_pwmdp_u0__DP_AUX_CTL_REG)

#endif /* (FB_glitch_detect_UsingFixedFunction) */

#if(FB_glitch_detect_KillModeMinTime )
    #define FB_glitch_detect_KILLMODEMINTIME        (*(reg8 *)  FB_glitch_detect_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    #define FB_glitch_detect_KILLMODEMINTIME_PTR    ((reg8 *)   FB_glitch_detect_PWMUDB_sKM_killmodecounterdp_u0__D0_REG)
    /* Fixed Function Block has no Kill Mode parameters because it is Asynchronous only */
#endif /* (FB_glitch_detect_KillModeMinTime ) */

#if(FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_256_CLOCKS)
    #define FB_glitch_detect_DEADBAND_COUNT         (*(reg8 *)  FB_glitch_detect_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define FB_glitch_detect_DEADBAND_COUNT_PTR     ((reg8 *)   FB_glitch_detect_PWMUDB_sDB255_deadbandcounterdp_u0__D0_REG)
    #define FB_glitch_detect_DEADBAND_LSB_PTR       ((reg8 *)   FB_glitch_detect_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
    #define FB_glitch_detect_DEADBAND_LSB           (*(reg8 *)  FB_glitch_detect_PWMUDB_sDB255_deadbandcounterdp_u0__A0_REG)
#elif(FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_2_4_CLOCKS)
    
    /* In Fixed Function Block these bits are in the control blocks control register */
    #if (FB_glitch_detect_UsingFixedFunction)
        #define FB_glitch_detect_DEADBAND_COUNT         (*(reg8 *)  FB_glitch_detect_PWMHW__CFG0)
        #define FB_glitch_detect_DEADBAND_COUNT_PTR     ((reg8 *)   FB_glitch_detect_PWMHW__CFG0)
        #define FB_glitch_detect_DEADBAND_COUNT_MASK    (uint8)((uint8)0x03u << FB_glitch_detect_DEADBAND_COUNT_SHIFT)

        /* As defined by the Register Map as DEADBAND_PERIOD[1:0] in CFG0 */
        #define FB_glitch_detect_DEADBAND_COUNT_SHIFT   (0x06u)
    #else
        /* Lower two bits of the added control register define the count 1-3 */
        #define FB_glitch_detect_DEADBAND_COUNT         (*(reg8 *)  FB_glitch_detect_PWMUDB_genblk7_dbctrlreg__CONTROL_REG)
        #define FB_glitch_detect_DEADBAND_COUNT_PTR     ((reg8 *)   FB_glitch_detect_PWMUDB_genblk7_dbctrlreg__CONTROL_REG)
        #define FB_glitch_detect_DEADBAND_COUNT_MASK    (uint8)((uint8)0x03u << FB_glitch_detect_DEADBAND_COUNT_SHIFT)

        /* As defined by the verilog implementation of the Control Register */
        #define FB_glitch_detect_DEADBAND_COUNT_SHIFT   (0x00u)
    #endif /* (FB_glitch_detect_UsingFixedFunction) */
#endif /* (FB_glitch_detect_DeadBandMode == FB_glitch_detect__B_PWM__DBM_256_CLOCKS) */



#if (FB_glitch_detect_UsingFixedFunction)
    #define FB_glitch_detect_STATUS                 (*(reg8 *) FB_glitch_detect_PWMHW__SR0)
    #define FB_glitch_detect_STATUS_PTR             ((reg8 *) FB_glitch_detect_PWMHW__SR0)
    #define FB_glitch_detect_STATUS_MASK            (*(reg8 *) FB_glitch_detect_PWMHW__SR0)
    #define FB_glitch_detect_STATUS_MASK_PTR        ((reg8 *) FB_glitch_detect_PWMHW__SR0)
    #define FB_glitch_detect_CONTROL                (*(reg8 *) FB_glitch_detect_PWMHW__CFG0)
    #define FB_glitch_detect_CONTROL_PTR            ((reg8 *) FB_glitch_detect_PWMHW__CFG0)
    #define FB_glitch_detect_CONTROL2               (*(reg8 *) FB_glitch_detect_PWMHW__CFG1)
    #define FB_glitch_detect_CONTROL3               (*(reg8 *) FB_glitch_detect_PWMHW__CFG2)
    #define FB_glitch_detect_GLOBAL_ENABLE          (*(reg8 *) FB_glitch_detect_PWMHW__PM_ACT_CFG)
    #define FB_glitch_detect_GLOBAL_ENABLE_PTR      ( (reg8 *) FB_glitch_detect_PWMHW__PM_ACT_CFG)
    #define FB_glitch_detect_GLOBAL_STBY_ENABLE     (*(reg8 *) FB_glitch_detect_PWMHW__PM_STBY_CFG)
    #define FB_glitch_detect_GLOBAL_STBY_ENABLE_PTR ( (reg8 *) FB_glitch_detect_PWMHW__PM_STBY_CFG)


    /***********************************
    *          Constants
    ***********************************/

    /* Fixed Function Block Chosen */
    #define FB_glitch_detect_BLOCK_EN_MASK          (FB_glitch_detect_PWMHW__PM_ACT_MSK)
    #define FB_glitch_detect_BLOCK_STBY_EN_MASK     (FB_glitch_detect_PWMHW__PM_STBY_MSK)
    
    /* Control Register definitions */
    #define FB_glitch_detect_CTRL_ENABLE_SHIFT      (0x00u)

    /* As defined by Register map as MODE_CFG bits in CFG2*/
    #define FB_glitch_detect_CTRL_CMPMODE1_SHIFT    (0x04u)

    /* As defined by Register map */
    #define FB_glitch_detect_CTRL_DEAD_TIME_SHIFT   (0x06u)  

    /* Fixed Function Block Only CFG register bit definitions */
    /*  Set to compare mode */
    #define FB_glitch_detect_CFG0_MODE              (0x02u)   

    /* Enable the block to run */
    #define FB_glitch_detect_CFG0_ENABLE            (0x01u)   
    
    /* As defined by Register map as DB bit in CFG0 */
    #define FB_glitch_detect_CFG0_DB                (0x20u)   

    /* Control Register Bit Masks */
    #define FB_glitch_detect_CTRL_ENABLE            (uint8)((uint8)0x01u << FB_glitch_detect_CTRL_ENABLE_SHIFT)
    #define FB_glitch_detect_CTRL_RESET             (uint8)((uint8)0x01u << FB_glitch_detect_CTRL_RESET_SHIFT)
    #define FB_glitch_detect_CTRL_CMPMODE2_MASK     (uint8)((uint8)0x07u << FB_glitch_detect_CTRL_CMPMODE2_SHIFT)
    #define FB_glitch_detect_CTRL_CMPMODE1_MASK     (uint8)((uint8)0x07u << FB_glitch_detect_CTRL_CMPMODE1_SHIFT)

    /* Control2 Register Bit Masks */
    /* As defined in Register Map, Part of the TMRX_CFG1 register */
    #define FB_glitch_detect_CTRL2_IRQ_SEL_SHIFT    (0x00u)
    #define FB_glitch_detect_CTRL2_IRQ_SEL          (uint8)((uint8)0x01u << FB_glitch_detect_CTRL2_IRQ_SEL_SHIFT)

    /* Status Register Bit Locations */
    /* As defined by Register map as TC in SR0 */
    #define FB_glitch_detect_STATUS_TC_SHIFT        (0x07u)   
    
    /* As defined by the Register map as CAP_CMP in SR0 */
    #define FB_glitch_detect_STATUS_CMP1_SHIFT      (0x06u)   

    /* Status Register Interrupt Enable Bit Locations */
    #define FB_glitch_detect_STATUS_KILL_INT_EN_MASK_SHIFT          (0x00u)
    #define FB_glitch_detect_STATUS_TC_INT_EN_MASK_SHIFT            (FB_glitch_detect_STATUS_TC_SHIFT - 4u)
    #define FB_glitch_detect_STATUS_CMP2_INT_EN_MASK_SHIFT          (0x00u)
    #define FB_glitch_detect_STATUS_CMP1_INT_EN_MASK_SHIFT          (FB_glitch_detect_STATUS_CMP1_SHIFT - 4u)

    /* Status Register Bit Masks */
    #define FB_glitch_detect_STATUS_TC              (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_TC_SHIFT)
    #define FB_glitch_detect_STATUS_CMP1            (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_CMP1_SHIFT)

    /* Status Register Interrupt Bit Masks */
    #define FB_glitch_detect_STATUS_TC_INT_EN_MASK              (uint8)((uint8)FB_glitch_detect_STATUS_TC >> 4u)
    #define FB_glitch_detect_STATUS_CMP1_INT_EN_MASK            (uint8)((uint8)FB_glitch_detect_STATUS_CMP1 >> 4u)

    /*RT1 Synch Constants */
    #define FB_glitch_detect_RT1_SHIFT             (0x04u)

    /* Sync TC and CMP bit masks */
    #define FB_glitch_detect_RT1_MASK              (uint8)((uint8)0x03u << FB_glitch_detect_RT1_SHIFT)
    #define FB_glitch_detect_SYNC                  (uint8)((uint8)0x03u << FB_glitch_detect_RT1_SHIFT)
    #define FB_glitch_detect_SYNCDSI_SHIFT         (0x00u)

    /* Sync all DSI inputs */
    #define FB_glitch_detect_SYNCDSI_MASK          (uint8)((uint8)0x0Fu << FB_glitch_detect_SYNCDSI_SHIFT)

    /* Sync all DSI inputs */
    #define FB_glitch_detect_SYNCDSI_EN            (uint8)((uint8)0x0Fu << FB_glitch_detect_SYNCDSI_SHIFT)


#else
    #define FB_glitch_detect_STATUS                (*(reg8 *)   FB_glitch_detect_PWMUDB_genblk8_stsreg__STATUS_REG )
    #define FB_glitch_detect_STATUS_PTR            ((reg8 *)    FB_glitch_detect_PWMUDB_genblk8_stsreg__STATUS_REG )
    #define FB_glitch_detect_STATUS_MASK           (*(reg8 *)   FB_glitch_detect_PWMUDB_genblk8_stsreg__MASK_REG)
    #define FB_glitch_detect_STATUS_MASK_PTR       ((reg8 *)    FB_glitch_detect_PWMUDB_genblk8_stsreg__MASK_REG)
    #define FB_glitch_detect_STATUS_AUX_CTRL       (*(reg8 *)   FB_glitch_detect_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG)
    #define FB_glitch_detect_CONTROL               (*(reg8 *)   FB_glitch_detect_PWMUDB_genblk1_ctrlreg__CONTROL_REG)
    #define FB_glitch_detect_CONTROL_PTR           ((reg8 *)    FB_glitch_detect_PWMUDB_genblk1_ctrlreg__CONTROL_REG)


    /***********************************
    *          Constants
    ***********************************/

    /* Control Register bit definitions */
    #define FB_glitch_detect_CTRL_ENABLE_SHIFT      (0x07u)
    #define FB_glitch_detect_CTRL_RESET_SHIFT       (0x06u)
    #define FB_glitch_detect_CTRL_CMPMODE2_SHIFT    (0x03u)
    #define FB_glitch_detect_CTRL_CMPMODE1_SHIFT    (0x00u)
    #define FB_glitch_detect_CTRL_DEAD_TIME_SHIFT   (0x00u)   /* No Shift Needed for UDB block */
    
    /* Control Register Bit Masks */
    #define FB_glitch_detect_CTRL_ENABLE            (uint8)((uint8)0x01u << FB_glitch_detect_CTRL_ENABLE_SHIFT)
    #define FB_glitch_detect_CTRL_RESET             (uint8)((uint8)0x01u << FB_glitch_detect_CTRL_RESET_SHIFT)
    #define FB_glitch_detect_CTRL_CMPMODE2_MASK     (uint8)((uint8)0x07u << FB_glitch_detect_CTRL_CMPMODE2_SHIFT)
    #define FB_glitch_detect_CTRL_CMPMODE1_MASK     (uint8)((uint8)0x07u << FB_glitch_detect_CTRL_CMPMODE1_SHIFT)

    /* Status Register Bit Locations */
    #define FB_glitch_detect_STATUS_KILL_SHIFT          (0x05u)
    #define FB_glitch_detect_STATUS_FIFONEMPTY_SHIFT    (0x04u)
    #define FB_glitch_detect_STATUS_FIFOFULL_SHIFT      (0x03u)
    #define FB_glitch_detect_STATUS_TC_SHIFT            (0x02u)
    #define FB_glitch_detect_STATUS_CMP2_SHIFT          (0x01u)
    #define FB_glitch_detect_STATUS_CMP1_SHIFT          (0x00u)

    /* Status Register Interrupt Enable Bit Locations - UDB Status Interrupt Mask match Status Bit Locations*/
    #define FB_glitch_detect_STATUS_KILL_INT_EN_MASK_SHIFT          (FB_glitch_detect_STATUS_KILL_SHIFT)
    #define FB_glitch_detect_STATUS_FIFONEMPTY_INT_EN_MASK_SHIFT    (FB_glitch_detect_STATUS_FIFONEMPTY_SHIFT)
    #define FB_glitch_detect_STATUS_FIFOFULL_INT_EN_MASK_SHIFT      (FB_glitch_detect_STATUS_FIFOFULL_SHIFT)
    #define FB_glitch_detect_STATUS_TC_INT_EN_MASK_SHIFT            (FB_glitch_detect_STATUS_TC_SHIFT)
    #define FB_glitch_detect_STATUS_CMP2_INT_EN_MASK_SHIFT          (FB_glitch_detect_STATUS_CMP2_SHIFT)
    #define FB_glitch_detect_STATUS_CMP1_INT_EN_MASK_SHIFT          (FB_glitch_detect_STATUS_CMP1_SHIFT)

    /* Status Register Bit Masks */
    #define FB_glitch_detect_STATUS_KILL            (uint8)((uint8)0x00u << FB_glitch_detect_STATUS_KILL_SHIFT )
    #define FB_glitch_detect_STATUS_FIFOFULL        (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_FIFOFULL_SHIFT)
    #define FB_glitch_detect_STATUS_FIFONEMPTY      (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_FIFONEMPTY_SHIFT)
    #define FB_glitch_detect_STATUS_TC              (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_TC_SHIFT)
    #define FB_glitch_detect_STATUS_CMP2            (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_CMP2_SHIFT)
    #define FB_glitch_detect_STATUS_CMP1            (uint8)((uint8)0x01u << FB_glitch_detect_STATUS_CMP1_SHIFT)

    /* Status Register Interrupt Bit Masks  - UDB Status Interrupt Mask match Status Bit Locations */
    #define FB_glitch_detect_STATUS_KILL_INT_EN_MASK            (FB_glitch_detect_STATUS_KILL)
    #define FB_glitch_detect_STATUS_FIFOFULL_INT_EN_MASK        (FB_glitch_detect_STATUS_FIFOFULL)
    #define FB_glitch_detect_STATUS_FIFONEMPTY_INT_EN_MASK      (FB_glitch_detect_STATUS_FIFONEMPTY)
    #define FB_glitch_detect_STATUS_TC_INT_EN_MASK              (FB_glitch_detect_STATUS_TC)
    #define FB_glitch_detect_STATUS_CMP2_INT_EN_MASK            (FB_glitch_detect_STATUS_CMP2)
    #define FB_glitch_detect_STATUS_CMP1_INT_EN_MASK            (FB_glitch_detect_STATUS_CMP1)

    /* Datapath Auxillary Control Register bit definitions */
    #define FB_glitch_detect_AUX_CTRL_FIFO0_CLR         (0x01u)
    #define FB_glitch_detect_AUX_CTRL_FIFO1_CLR         (0x02u)
    #define FB_glitch_detect_AUX_CTRL_FIFO0_LVL         (0x04u)
    #define FB_glitch_detect_AUX_CTRL_FIFO1_LVL         (0x08u)
    #define FB_glitch_detect_STATUS_ACTL_INT_EN_MASK    (0x10u) /* As defined for the ACTL Register */
#endif /* FB_glitch_detect_UsingFixedFunction */

#endif  /* CY_PWM_FB_glitch_detect_H */


/* [] END OF FILE */
