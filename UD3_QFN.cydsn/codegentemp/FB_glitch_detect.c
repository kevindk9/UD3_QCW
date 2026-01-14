/*******************************************************************************
* File Name: FB_glitch_detect.c
* Version 3.30
*
* Description:
*  The PWM User Module consist of an 8 or 16-bit counter with two 8 or 16-bit
*  comparitors. Each instance of this user module is capable of generating
*  two PWM outputs with the same period. The pulse width is selectable between
*  1 and 255/65535. The period is selectable between 2 and 255/65536 clocks.
*  The compare value output may be configured to be active when the present
*  counter is less than or less than/equal to the compare value.
*  A terminal count output is also provided. It generates a pulse one clock
*  width wide when the counter is equal to zero.
*
* Note:
*
*******************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#include "FB_glitch_detect.h"

/* Error message for removed <resource> through optimization */
#ifdef FB_glitch_detect_PWMUDB_genblk1_ctrlreg__REMOVED
    #error PWM_v3_30 detected with a constant 0 for the enable or \
         constant 1 for reset. This will prevent the component from operating.
#endif /* FB_glitch_detect_PWMUDB_genblk1_ctrlreg__REMOVED */

uint8 FB_glitch_detect_initVar = 0u;


/*******************************************************************************
* Function Name: FB_glitch_detect_Start
********************************************************************************
*
* Summary:
*  The start function initializes the pwm with the default values, the
*  enables the counter to begin counting.  It does not enable interrupts,
*  the EnableInt command should be called if interrupt generation is required.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  FB_glitch_detect_initVar: Is modified when this function is called for the
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void FB_glitch_detect_Start(void) 
{
    /* If not Initialized then initialize all required hardware and software */
    if(FB_glitch_detect_initVar == 0u)
    {
        FB_glitch_detect_Init();
        FB_glitch_detect_initVar = 1u;
    }
    FB_glitch_detect_Enable();

}


/*******************************************************************************
* Function Name: FB_glitch_detect_Init
********************************************************************************
*
* Summary:
*  Initialize component's parameters to the parameters set by user in the
*  customizer of the component placed onto schematic. Usually called in
*  FB_glitch_detect_Start().
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void FB_glitch_detect_Init(void) 
{
    #if (FB_glitch_detect_UsingFixedFunction || FB_glitch_detect_UseControl)
        uint8 ctrl;
    #endif /* (FB_glitch_detect_UsingFixedFunction || FB_glitch_detect_UseControl) */

    #if(!FB_glitch_detect_UsingFixedFunction)
        #if(FB_glitch_detect_UseStatus)
            /* Interrupt State Backup for Critical Region*/
            uint8 FB_glitch_detect_interruptState;
        #endif /* (FB_glitch_detect_UseStatus) */
    #endif /* (!FB_glitch_detect_UsingFixedFunction) */

    #if (FB_glitch_detect_UsingFixedFunction)
        /* You are allowed to write the compare value (FF only) */
        FB_glitch_detect_CONTROL |= FB_glitch_detect_CFG0_MODE;
        #if (FB_glitch_detect_DeadBand2_4)
            FB_glitch_detect_CONTROL |= FB_glitch_detect_CFG0_DB;
        #endif /* (FB_glitch_detect_DeadBand2_4) */

        ctrl = FB_glitch_detect_CONTROL3 & ((uint8 )(~FB_glitch_detect_CTRL_CMPMODE1_MASK));
        FB_glitch_detect_CONTROL3 = ctrl | FB_glitch_detect_DEFAULT_COMPARE1_MODE;

         /* Clear and Set SYNCTC and SYNCCMP bits of RT1 register */
        FB_glitch_detect_RT1 &= ((uint8)(~FB_glitch_detect_RT1_MASK));
        FB_glitch_detect_RT1 |= FB_glitch_detect_SYNC;

        /*Enable DSI Sync all all inputs of the PWM*/
        FB_glitch_detect_RT1 &= ((uint8)(~FB_glitch_detect_SYNCDSI_MASK));
        FB_glitch_detect_RT1 |= FB_glitch_detect_SYNCDSI_EN;

    #elif (FB_glitch_detect_UseControl)
        /* Set the default compare mode defined in the parameter */
        ctrl = FB_glitch_detect_CONTROL & ((uint8)(~FB_glitch_detect_CTRL_CMPMODE2_MASK)) &
                ((uint8)(~FB_glitch_detect_CTRL_CMPMODE1_MASK));
        FB_glitch_detect_CONTROL = ctrl | FB_glitch_detect_DEFAULT_COMPARE2_MODE |
                                   FB_glitch_detect_DEFAULT_COMPARE1_MODE;
    #endif /* (FB_glitch_detect_UsingFixedFunction) */

    #if (!FB_glitch_detect_UsingFixedFunction)
        #if (FB_glitch_detect_Resolution == 8)
            /* Set FIFO 0 to 1 byte register for period*/
            FB_glitch_detect_AUX_CONTROLDP0 |= (FB_glitch_detect_AUX_CTRL_FIFO0_CLR);
        #else /* (FB_glitch_detect_Resolution == 16)*/
            /* Set FIFO 0 to 1 byte register for period */
            FB_glitch_detect_AUX_CONTROLDP0 |= (FB_glitch_detect_AUX_CTRL_FIFO0_CLR);
            FB_glitch_detect_AUX_CONTROLDP1 |= (FB_glitch_detect_AUX_CTRL_FIFO0_CLR);
        #endif /* (FB_glitch_detect_Resolution == 8) */

        FB_glitch_detect_WriteCounter(FB_glitch_detect_INIT_PERIOD_VALUE);
    #endif /* (!FB_glitch_detect_UsingFixedFunction) */

    FB_glitch_detect_WritePeriod(FB_glitch_detect_INIT_PERIOD_VALUE);

        #if (FB_glitch_detect_UseOneCompareMode)
            FB_glitch_detect_WriteCompare(FB_glitch_detect_INIT_COMPARE_VALUE1);
        #else
            FB_glitch_detect_WriteCompare1(FB_glitch_detect_INIT_COMPARE_VALUE1);
            FB_glitch_detect_WriteCompare2(FB_glitch_detect_INIT_COMPARE_VALUE2);
        #endif /* (FB_glitch_detect_UseOneCompareMode) */

        #if (FB_glitch_detect_KillModeMinTime)
            FB_glitch_detect_WriteKillTime(FB_glitch_detect_MinimumKillTime);
        #endif /* (FB_glitch_detect_KillModeMinTime) */

        #if (FB_glitch_detect_DeadBandUsed)
            FB_glitch_detect_WriteDeadTime(FB_glitch_detect_INIT_DEAD_TIME);
        #endif /* (FB_glitch_detect_DeadBandUsed) */

    #if (FB_glitch_detect_UseStatus || FB_glitch_detect_UsingFixedFunction)
        FB_glitch_detect_SetInterruptMode(FB_glitch_detect_INIT_INTERRUPTS_MODE);
    #endif /* (FB_glitch_detect_UseStatus || FB_glitch_detect_UsingFixedFunction) */

    #if (FB_glitch_detect_UsingFixedFunction)
        /* Globally Enable the Fixed Function Block chosen */
        FB_glitch_detect_GLOBAL_ENABLE |= FB_glitch_detect_BLOCK_EN_MASK;
        /* Set the Interrupt source to come from the status register */
        FB_glitch_detect_CONTROL2 |= FB_glitch_detect_CTRL2_IRQ_SEL;
    #else
        #if(FB_glitch_detect_UseStatus)

            /* CyEnterCriticalRegion and CyExitCriticalRegion are used to mark following region critical*/
            /* Enter Critical Region*/
            FB_glitch_detect_interruptState = CyEnterCriticalSection();
            /* Use the interrupt output of the status register for IRQ output */
            FB_glitch_detect_STATUS_AUX_CTRL |= FB_glitch_detect_STATUS_ACTL_INT_EN_MASK;

             /* Exit Critical Region*/
            CyExitCriticalSection(FB_glitch_detect_interruptState);

            /* Clear the FIFO to enable the FB_glitch_detect_STATUS_FIFOFULL
                   bit to be set on FIFO full. */
            FB_glitch_detect_ClearFIFO();
        #endif /* (FB_glitch_detect_UseStatus) */
    #endif /* (FB_glitch_detect_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: FB_glitch_detect_Enable
********************************************************************************
*
* Summary:
*  Enables the PWM block operation
*
* Parameters:
*  None
*
* Return:
*  None
*
* Side Effects:
*  This works only if software enable mode is chosen
*
*******************************************************************************/
void FB_glitch_detect_Enable(void) 
{
    /* Globally Enable the Fixed Function Block chosen */
    #if (FB_glitch_detect_UsingFixedFunction)
        FB_glitch_detect_GLOBAL_ENABLE |= FB_glitch_detect_BLOCK_EN_MASK;
        FB_glitch_detect_GLOBAL_STBY_ENABLE |= FB_glitch_detect_BLOCK_STBY_EN_MASK;
    #endif /* (FB_glitch_detect_UsingFixedFunction) */

    /* Enable the PWM from the control register  */
    #if (FB_glitch_detect_UseControl || FB_glitch_detect_UsingFixedFunction)
        FB_glitch_detect_CONTROL |= FB_glitch_detect_CTRL_ENABLE;
    #endif /* (FB_glitch_detect_UseControl || FB_glitch_detect_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: FB_glitch_detect_Stop
********************************************************************************
*
* Summary:
*  The stop function halts the PWM, but does not change any modes or disable
*  interrupts.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Side Effects:
*  If the Enable mode is set to Hardware only then this function
*  has no effect on the operation of the PWM
*
*******************************************************************************/
void FB_glitch_detect_Stop(void) 
{
    #if (FB_glitch_detect_UseControl || FB_glitch_detect_UsingFixedFunction)
        FB_glitch_detect_CONTROL &= ((uint8)(~FB_glitch_detect_CTRL_ENABLE));
    #endif /* (FB_glitch_detect_UseControl || FB_glitch_detect_UsingFixedFunction) */

    /* Globally disable the Fixed Function Block chosen */
    #if (FB_glitch_detect_UsingFixedFunction)
        FB_glitch_detect_GLOBAL_ENABLE &= ((uint8)(~FB_glitch_detect_BLOCK_EN_MASK));
        FB_glitch_detect_GLOBAL_STBY_ENABLE &= ((uint8)(~FB_glitch_detect_BLOCK_STBY_EN_MASK));
    #endif /* (FB_glitch_detect_UsingFixedFunction) */
}

#if (FB_glitch_detect_UseOneCompareMode)
    #if (FB_glitch_detect_CompareMode1SW)


        /*******************************************************************************
        * Function Name: FB_glitch_detect_SetCompareMode
        ********************************************************************************
        *
        * Summary:
        *  This function writes the Compare Mode for the pwm output when in Dither mode,
        *  Center Align Mode or One Output Mode.
        *
        * Parameters:
        *  comparemode:  The new compare mode for the PWM output. Use the compare types
        *                defined in the H file as input arguments.
        *
        * Return:
        *  None
        *
        *******************************************************************************/
        void FB_glitch_detect_SetCompareMode(uint8 comparemode) 
        {
            #if(FB_glitch_detect_UsingFixedFunction)

                #if(0 != FB_glitch_detect_CTRL_CMPMODE1_SHIFT)
                    uint8 comparemodemasked = ((uint8)((uint8)comparemode << FB_glitch_detect_CTRL_CMPMODE1_SHIFT));
                #else
                    uint8 comparemodemasked = comparemode;
                #endif /* (0 != FB_glitch_detect_CTRL_CMPMODE1_SHIFT) */

                FB_glitch_detect_CONTROL3 &= ((uint8)(~FB_glitch_detect_CTRL_CMPMODE1_MASK)); /*Clear Existing Data */
                FB_glitch_detect_CONTROL3 |= comparemodemasked;

            #elif (FB_glitch_detect_UseControl)

                #if(0 != FB_glitch_detect_CTRL_CMPMODE1_SHIFT)
                    uint8 comparemode1masked = ((uint8)((uint8)comparemode << FB_glitch_detect_CTRL_CMPMODE1_SHIFT)) &
                                                FB_glitch_detect_CTRL_CMPMODE1_MASK;
                #else
                    uint8 comparemode1masked = comparemode & FB_glitch_detect_CTRL_CMPMODE1_MASK;
                #endif /* (0 != FB_glitch_detect_CTRL_CMPMODE1_SHIFT) */

                #if(0 != FB_glitch_detect_CTRL_CMPMODE2_SHIFT)
                    uint8 comparemode2masked = ((uint8)((uint8)comparemode << FB_glitch_detect_CTRL_CMPMODE2_SHIFT)) &
                                               FB_glitch_detect_CTRL_CMPMODE2_MASK;
                #else
                    uint8 comparemode2masked = comparemode & FB_glitch_detect_CTRL_CMPMODE2_MASK;
                #endif /* (0 != FB_glitch_detect_CTRL_CMPMODE2_SHIFT) */

                /*Clear existing mode */
                FB_glitch_detect_CONTROL &= ((uint8)(~(FB_glitch_detect_CTRL_CMPMODE1_MASK |
                                            FB_glitch_detect_CTRL_CMPMODE2_MASK)));
                FB_glitch_detect_CONTROL |= (comparemode1masked | comparemode2masked);

            #else
                uint8 temp = comparemode;
            #endif /* (FB_glitch_detect_UsingFixedFunction) */
        }
    #endif /* FB_glitch_detect_CompareMode1SW */

#else /* UseOneCompareMode */

    #if (FB_glitch_detect_CompareMode1SW)


        /*******************************************************************************
        * Function Name: FB_glitch_detect_SetCompareMode1
        ********************************************************************************
        *
        * Summary:
        *  This function writes the Compare Mode for the pwm or pwm1 output
        *
        * Parameters:
        *  comparemode:  The new compare mode for the PWM output. Use the compare types
        *                defined in the H file as input arguments.
        *
        * Return:
        *  None
        *
        *******************************************************************************/
        void FB_glitch_detect_SetCompareMode1(uint8 comparemode) 
        {
            #if(0 != FB_glitch_detect_CTRL_CMPMODE1_SHIFT)
                uint8 comparemodemasked = ((uint8)((uint8)comparemode << FB_glitch_detect_CTRL_CMPMODE1_SHIFT)) &
                                           FB_glitch_detect_CTRL_CMPMODE1_MASK;
            #else
                uint8 comparemodemasked = comparemode & FB_glitch_detect_CTRL_CMPMODE1_MASK;
            #endif /* (0 != FB_glitch_detect_CTRL_CMPMODE1_SHIFT) */

            #if (FB_glitch_detect_UseControl)
                FB_glitch_detect_CONTROL &= ((uint8)(~FB_glitch_detect_CTRL_CMPMODE1_MASK)); /*Clear existing mode */
                FB_glitch_detect_CONTROL |= comparemodemasked;
            #endif /* (FB_glitch_detect_UseControl) */
        }
    #endif /* FB_glitch_detect_CompareMode1SW */

#if (FB_glitch_detect_CompareMode2SW)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_SetCompareMode2
    ********************************************************************************
    *
    * Summary:
    *  This function writes the Compare Mode for the pwm or pwm2 output
    *
    * Parameters:
    *  comparemode:  The new compare mode for the PWM output. Use the compare types
    *                defined in the H file as input arguments.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_SetCompareMode2(uint8 comparemode) 
    {

        #if(0 != FB_glitch_detect_CTRL_CMPMODE2_SHIFT)
            uint8 comparemodemasked = ((uint8)((uint8)comparemode << FB_glitch_detect_CTRL_CMPMODE2_SHIFT)) &
                                                 FB_glitch_detect_CTRL_CMPMODE2_MASK;
        #else
            uint8 comparemodemasked = comparemode & FB_glitch_detect_CTRL_CMPMODE2_MASK;
        #endif /* (0 != FB_glitch_detect_CTRL_CMPMODE2_SHIFT) */

        #if (FB_glitch_detect_UseControl)
            FB_glitch_detect_CONTROL &= ((uint8)(~FB_glitch_detect_CTRL_CMPMODE2_MASK)); /*Clear existing mode */
            FB_glitch_detect_CONTROL |= comparemodemasked;
        #endif /* (FB_glitch_detect_UseControl) */
    }
    #endif /*FB_glitch_detect_CompareMode2SW */

#endif /* UseOneCompareMode */


#if (!FB_glitch_detect_UsingFixedFunction)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteCounter
    ********************************************************************************
    *
    * Summary:
    *  Writes a new counter value directly to the counter register. This will be
    *  implemented for that currently running period and only that period. This API
    *  is valid only for UDB implementation and not available for fixed function
    *  PWM implementation.
    *
    * Parameters:
    *  counter:  The period new period counter value.
    *
    * Return:
    *  None
    *
    * Side Effects:
    *  The PWM Period will be reloaded when a counter value will be a zero
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteCounter(uint8 counter) \
                                       
    {
        CY_SET_REG8(FB_glitch_detect_COUNTER_LSB_PTR, counter);
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadCounter
    ********************************************************************************
    *
    * Summary:
    *  This function returns the current value of the counter.  It doesn't matter
    *  if the counter is enabled or running.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  The current value of the counter.
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadCounter(void) 
    {
        /* Force capture by reading Accumulator */
        /* Must first do a software capture to be able to read the counter */
        /* It is up to the user code to make sure there isn't already captured data in the FIFO */
          (void)CY_GET_REG8(FB_glitch_detect_COUNTERCAP_LSB_PTR_8BIT);

        /* Read the data from the FIFO */
        return (CY_GET_REG8(FB_glitch_detect_CAPTURE_LSB_PTR));
    }

    #if (FB_glitch_detect_UseStatus)


        /*******************************************************************************
        * Function Name: FB_glitch_detect_ClearFIFO
        ********************************************************************************
        *
        * Summary:
        *  This function clears all capture data from the capture FIFO
        *
        * Parameters:
        *  None
        *
        * Return:
        *  None
        *
        *******************************************************************************/
        void FB_glitch_detect_ClearFIFO(void) 
        {
            while(0u != (FB_glitch_detect_ReadStatusRegister() & FB_glitch_detect_STATUS_FIFONEMPTY))
            {
                (void)FB_glitch_detect_ReadCapture();
            }
        }

    #endif /* FB_glitch_detect_UseStatus */

#endif /* !FB_glitch_detect_UsingFixedFunction */


/*******************************************************************************
* Function Name: FB_glitch_detect_WritePeriod
********************************************************************************
*
* Summary:
*  This function is used to change the period of the counter.  The new period
*  will be loaded the next time terminal count is detected.
*
* Parameters:
*  period:  Period value. May be between 1 and (2^Resolution)-1.  A value of 0
*           will result in the counter remaining at zero.
*
* Return:
*  None
*
*******************************************************************************/
void FB_glitch_detect_WritePeriod(uint8 period) 
{
    #if(FB_glitch_detect_UsingFixedFunction)
        CY_SET_REG16(FB_glitch_detect_PERIOD_LSB_PTR, (uint16)period);
    #else
        CY_SET_REG8(FB_glitch_detect_PERIOD_LSB_PTR, period);
    #endif /* (FB_glitch_detect_UsingFixedFunction) */
}

#if (FB_glitch_detect_UseOneCompareMode)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteCompare
    ********************************************************************************
    *
    * Summary:
    *  This funtion is used to change the compare1 value when the PWM is in Dither
    *  mode. The compare output will reflect the new value on the next UDB clock.
    *  The compare output will be driven high when the present counter value is
    *  compared to the compare value based on the compare mode defined in
    *  Dither Mode.
    *
    * Parameters:
    *  compare:  New compare value.
    *
    * Return:
    *  None
    *
    * Side Effects:
    *  This function is only available if the PWM mode parameter is set to
    *  Dither Mode, Center Aligned Mode or One Output Mode
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteCompare(uint8 compare) \
                                       
    {
        #if(FB_glitch_detect_UsingFixedFunction)
            CY_SET_REG16(FB_glitch_detect_COMPARE1_LSB_PTR, (uint16)compare);
        #else
            CY_SET_REG8(FB_glitch_detect_COMPARE1_LSB_PTR, compare);
        #endif /* (FB_glitch_detect_UsingFixedFunction) */

        #if (FB_glitch_detect_PWMMode == FB_glitch_detect__B_PWM__DITHER)
            #if(FB_glitch_detect_UsingFixedFunction)
                CY_SET_REG16(FB_glitch_detect_COMPARE2_LSB_PTR, (uint16)(compare + 1u));
            #else
                CY_SET_REG8(FB_glitch_detect_COMPARE2_LSB_PTR, (compare + 1u));
            #endif /* (FB_glitch_detect_UsingFixedFunction) */
        #endif /* (FB_glitch_detect_PWMMode == FB_glitch_detect__B_PWM__DITHER) */
    }


#else


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteCompare1
    ********************************************************************************
    *
    * Summary:
    *  This funtion is used to change the compare1 value.  The compare output will
    *  reflect the new value on the next UDB clock.  The compare output will be
    *  driven high when the present counter value is less than or less than or
    *  equal to the compare register, depending on the mode.
    *
    * Parameters:
    *  compare:  New compare value.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteCompare1(uint8 compare) \
                                        
    {
        #if(FB_glitch_detect_UsingFixedFunction)
            CY_SET_REG16(FB_glitch_detect_COMPARE1_LSB_PTR, (uint16)compare);
        #else
            CY_SET_REG8(FB_glitch_detect_COMPARE1_LSB_PTR, compare);
        #endif /* (FB_glitch_detect_UsingFixedFunction) */
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteCompare2
    ********************************************************************************
    *
    * Summary:
    *  This funtion is used to change the compare value, for compare1 output.
    *  The compare output will reflect the new value on the next UDB clock.
    *  The compare output will be driven high when the present counter value is
    *  less than or less than or equal to the compare register, depending on the
    *  mode.
    *
    * Parameters:
    *  compare:  New compare value.
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteCompare2(uint8 compare) \
                                        
    {
        #if(FB_glitch_detect_UsingFixedFunction)
            CY_SET_REG16(FB_glitch_detect_COMPARE2_LSB_PTR, compare);
        #else
            CY_SET_REG8(FB_glitch_detect_COMPARE2_LSB_PTR, compare);
        #endif /* (FB_glitch_detect_UsingFixedFunction) */
    }
#endif /* UseOneCompareMode */

#if (FB_glitch_detect_DeadBandUsed)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteDeadTime
    ********************************************************************************
    *
    * Summary:
    *  This function writes the dead-band counts to the corresponding register
    *
    * Parameters:
    *  deadtime:  Number of counts for dead time
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteDeadTime(uint8 deadtime) 
    {
        /* If using the Dead Band 1-255 mode then just write the register */
        #if(!FB_glitch_detect_DeadBand2_4)
            CY_SET_REG8(FB_glitch_detect_DEADBAND_COUNT_PTR, deadtime);
        #else
            /* Otherwise the data has to be masked and offset */
            /* Clear existing data */
            FB_glitch_detect_DEADBAND_COUNT &= ((uint8)(~FB_glitch_detect_DEADBAND_COUNT_MASK));

            /* Set new dead time */
            #if(FB_glitch_detect_DEADBAND_COUNT_SHIFT)
                FB_glitch_detect_DEADBAND_COUNT |= ((uint8)((uint8)deadtime << FB_glitch_detect_DEADBAND_COUNT_SHIFT)) &
                                                    FB_glitch_detect_DEADBAND_COUNT_MASK;
            #else
                FB_glitch_detect_DEADBAND_COUNT |= deadtime & FB_glitch_detect_DEADBAND_COUNT_MASK;
            #endif /* (FB_glitch_detect_DEADBAND_COUNT_SHIFT) */

        #endif /* (!FB_glitch_detect_DeadBand2_4) */
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadDeadTime
    ********************************************************************************
    *
    * Summary:
    *  This function reads the dead-band counts from the corresponding register
    *
    * Parameters:
    *  None
    *
    * Return:
    *  Dead Band Counts
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadDeadTime(void) 
    {
        /* If using the Dead Band 1-255 mode then just read the register */
        #if(!FB_glitch_detect_DeadBand2_4)
            return (CY_GET_REG8(FB_glitch_detect_DEADBAND_COUNT_PTR));
        #else

            /* Otherwise the data has to be masked and offset */
            #if(FB_glitch_detect_DEADBAND_COUNT_SHIFT)
                return ((uint8)(((uint8)(FB_glitch_detect_DEADBAND_COUNT & FB_glitch_detect_DEADBAND_COUNT_MASK)) >>
                                                                           FB_glitch_detect_DEADBAND_COUNT_SHIFT));
            #else
                return (FB_glitch_detect_DEADBAND_COUNT & FB_glitch_detect_DEADBAND_COUNT_MASK);
            #endif /* (FB_glitch_detect_DEADBAND_COUNT_SHIFT) */
        #endif /* (!FB_glitch_detect_DeadBand2_4) */
    }
#endif /* DeadBandUsed */

#if (FB_glitch_detect_UseStatus || FB_glitch_detect_UsingFixedFunction)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_SetInterruptMode
    ********************************************************************************
    *
    * Summary:
    *  This function configures the interrupts mask control of theinterrupt
    *  source status register.
    *
    * Parameters:
    *  uint8 interruptMode: Bit field containing the interrupt sources enabled
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_SetInterruptMode(uint8 interruptMode) 
    {
        CY_SET_REG8(FB_glitch_detect_STATUS_MASK_PTR, interruptMode);
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadStatusRegister
    ********************************************************************************
    *
    * Summary:
    *  This function returns the current state of the status register.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8 : Current status register value. The status register bits are:
    *  [7:6] : Unused(0)
    *  [5]   : Kill event output
    *  [4]   : FIFO not empty
    *  [3]   : FIFO full
    *  [2]   : Terminal count
    *  [1]   : Compare output 2
    *  [0]   : Compare output 1
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadStatusRegister(void) 
    {
        return (CY_GET_REG8(FB_glitch_detect_STATUS_PTR));
    }

#endif /* (FB_glitch_detect_UseStatus || FB_glitch_detect_UsingFixedFunction) */


#if (FB_glitch_detect_UseControl)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadControlRegister
    ********************************************************************************
    *
    * Summary:
    *  Returns the current state of the control register. This API is available
    *  only if the control register is not removed.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8 : Current control register value
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadControlRegister(void) 
    {
        uint8 result;

        result = CY_GET_REG8(FB_glitch_detect_CONTROL_PTR);
        return (result);
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteControlRegister
    ********************************************************************************
    *
    * Summary:
    *  Sets the bit field of the control register. This API is available only if
    *  the control register is not removed.
    *
    * Parameters:
    *  uint8 control: Control register bit field, The status register bits are:
    *  [7]   : PWM Enable
    *  [6]   : Reset
    *  [5:3] : Compare Mode2
    *  [2:0] : Compare Mode2
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteControlRegister(uint8 control) 
    {
        CY_SET_REG8(FB_glitch_detect_CONTROL_PTR, control);
    }

#endif /* (FB_glitch_detect_UseControl) */


#if (!FB_glitch_detect_UsingFixedFunction)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadCapture
    ********************************************************************************
    *
    * Summary:
    *  Reads the capture value from the capture FIFO.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8/uint16: The current capture value
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadCapture(void) 
    {
        return (CY_GET_REG8(FB_glitch_detect_CAPTURE_LSB_PTR));
    }

#endif /* (!FB_glitch_detect_UsingFixedFunction) */


#if (FB_glitch_detect_UseOneCompareMode)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadCompare
    ********************************************************************************
    *
    * Summary:
    *  Reads the compare value for the compare output when the PWM Mode parameter is
    *  set to Dither mode, Center Aligned mode, or One Output mode.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8/uint16: Current compare value
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadCompare(void) 
    {
        #if(FB_glitch_detect_UsingFixedFunction)
            return ((uint8)CY_GET_REG16(FB_glitch_detect_COMPARE1_LSB_PTR));
        #else
            return (CY_GET_REG8(FB_glitch_detect_COMPARE1_LSB_PTR));
        #endif /* (FB_glitch_detect_UsingFixedFunction) */
    }

#else


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadCompare1
    ********************************************************************************
    *
    * Summary:
    *  Reads the compare value for the compare1 output.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8/uint16: Current compare value.
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadCompare1(void) 
    {
        return (CY_GET_REG8(FB_glitch_detect_COMPARE1_LSB_PTR));
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadCompare2
    ********************************************************************************
    *
    * Summary:
    *  Reads the compare value for the compare2 output.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8/uint16: Current compare value.
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadCompare2(void) 
    {
        return (CY_GET_REG8(FB_glitch_detect_COMPARE2_LSB_PTR));
    }

#endif /* (FB_glitch_detect_UseOneCompareMode) */


/*******************************************************************************
* Function Name: FB_glitch_detect_ReadPeriod
********************************************************************************
*
* Summary:
*  Reads the period value used by the PWM hardware.
*
* Parameters:
*  None
*
* Return:
*  uint8/16: Period value
*
*******************************************************************************/
uint8 FB_glitch_detect_ReadPeriod(void) 
{
    #if(FB_glitch_detect_UsingFixedFunction)
        return ((uint8)CY_GET_REG16(FB_glitch_detect_PERIOD_LSB_PTR));
    #else
        return (CY_GET_REG8(FB_glitch_detect_PERIOD_LSB_PTR));
    #endif /* (FB_glitch_detect_UsingFixedFunction) */
}

#if ( FB_glitch_detect_KillModeMinTime)


    /*******************************************************************************
    * Function Name: FB_glitch_detect_WriteKillTime
    ********************************************************************************
    *
    * Summary:
    *  Writes the kill time value used by the hardware when the Kill Mode
    *  is set to Minimum Time.
    *
    * Parameters:
    *  uint8: Minimum Time kill counts
    *
    * Return:
    *  None
    *
    *******************************************************************************/
    void FB_glitch_detect_WriteKillTime(uint8 killtime) 
    {
        CY_SET_REG8(FB_glitch_detect_KILLMODEMINTIME_PTR, killtime);
    }


    /*******************************************************************************
    * Function Name: FB_glitch_detect_ReadKillTime
    ********************************************************************************
    *
    * Summary:
    *  Reads the kill time value used by the hardware when the Kill Mode is set
    *  to Minimum Time.
    *
    * Parameters:
    *  None
    *
    * Return:
    *  uint8: The current Minimum Time kill counts
    *
    *******************************************************************************/
    uint8 FB_glitch_detect_ReadKillTime(void) 
    {
        return (CY_GET_REG8(FB_glitch_detect_KILLMODEMINTIME_PTR));
    }

#endif /* ( FB_glitch_detect_KillModeMinTime) */

/* [] END OF FILE */
