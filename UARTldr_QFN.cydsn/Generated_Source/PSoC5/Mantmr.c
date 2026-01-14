/*******************************************************************************
* File Name: Mantmr.c
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

#include "Mantmr.h"

/* Error message for removed <resource> through optimization */
#ifdef Mantmr_PWMUDB_genblk1_ctrlreg__REMOVED
    #error PWM_v3_30 detected with a constant 0 for the enable or \
         constant 1 for reset. This will prevent the component from operating.
#endif /* Mantmr_PWMUDB_genblk1_ctrlreg__REMOVED */

uint8 Mantmr_initVar = 0u;


/*******************************************************************************
* Function Name: Mantmr_Start
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
*  Mantmr_initVar: Is modified when this function is called for the
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void Mantmr_Start(void) 
{
    /* If not Initialized then initialize all required hardware and software */
    if(Mantmr_initVar == 0u)
    {
        Mantmr_Init();
        Mantmr_initVar = 1u;
    }
    Mantmr_Enable();

}


/*******************************************************************************
* Function Name: Mantmr_Init
********************************************************************************
*
* Summary:
*  Initialize component's parameters to the parameters set by user in the
*  customizer of the component placed onto schematic. Usually called in
*  Mantmr_Start().
*
* Parameters:
*  None
*
* Return:
*  None
*
*******************************************************************************/
void Mantmr_Init(void) 
{
    #if (Mantmr_UsingFixedFunction || Mantmr_UseControl)
        uint8 ctrl;
    #endif /* (Mantmr_UsingFixedFunction || Mantmr_UseControl) */

    #if(!Mantmr_UsingFixedFunction)
        #if(Mantmr_UseStatus)
            /* Interrupt State Backup for Critical Region*/
            uint8 Mantmr_interruptState;
        #endif /* (Mantmr_UseStatus) */
    #endif /* (!Mantmr_UsingFixedFunction) */

    #if (Mantmr_UsingFixedFunction)
        /* You are allowed to write the compare value (FF only) */
        Mantmr_CONTROL |= Mantmr_CFG0_MODE;
        #if (Mantmr_DeadBand2_4)
            Mantmr_CONTROL |= Mantmr_CFG0_DB;
        #endif /* (Mantmr_DeadBand2_4) */

        ctrl = Mantmr_CONTROL3 & ((uint8 )(~Mantmr_CTRL_CMPMODE1_MASK));
        Mantmr_CONTROL3 = ctrl | Mantmr_DEFAULT_COMPARE1_MODE;

         /* Clear and Set SYNCTC and SYNCCMP bits of RT1 register */
        Mantmr_RT1 &= ((uint8)(~Mantmr_RT1_MASK));
        Mantmr_RT1 |= Mantmr_SYNC;

        /*Enable DSI Sync all all inputs of the PWM*/
        Mantmr_RT1 &= ((uint8)(~Mantmr_SYNCDSI_MASK));
        Mantmr_RT1 |= Mantmr_SYNCDSI_EN;

    #elif (Mantmr_UseControl)
        /* Set the default compare mode defined in the parameter */
        ctrl = Mantmr_CONTROL & ((uint8)(~Mantmr_CTRL_CMPMODE2_MASK)) &
                ((uint8)(~Mantmr_CTRL_CMPMODE1_MASK));
        Mantmr_CONTROL = ctrl | Mantmr_DEFAULT_COMPARE2_MODE |
                                   Mantmr_DEFAULT_COMPARE1_MODE;
    #endif /* (Mantmr_UsingFixedFunction) */

    #if (!Mantmr_UsingFixedFunction)
        #if (Mantmr_Resolution == 8)
            /* Set FIFO 0 to 1 byte register for period*/
            Mantmr_AUX_CONTROLDP0 |= (Mantmr_AUX_CTRL_FIFO0_CLR);
        #else /* (Mantmr_Resolution == 16)*/
            /* Set FIFO 0 to 1 byte register for period */
            Mantmr_AUX_CONTROLDP0 |= (Mantmr_AUX_CTRL_FIFO0_CLR);
            Mantmr_AUX_CONTROLDP1 |= (Mantmr_AUX_CTRL_FIFO0_CLR);
        #endif /* (Mantmr_Resolution == 8) */

        Mantmr_WriteCounter(Mantmr_INIT_PERIOD_VALUE);
    #endif /* (!Mantmr_UsingFixedFunction) */

    Mantmr_WritePeriod(Mantmr_INIT_PERIOD_VALUE);

        #if (Mantmr_UseOneCompareMode)
            Mantmr_WriteCompare(Mantmr_INIT_COMPARE_VALUE1);
        #else
            Mantmr_WriteCompare1(Mantmr_INIT_COMPARE_VALUE1);
            Mantmr_WriteCompare2(Mantmr_INIT_COMPARE_VALUE2);
        #endif /* (Mantmr_UseOneCompareMode) */

        #if (Mantmr_KillModeMinTime)
            Mantmr_WriteKillTime(Mantmr_MinimumKillTime);
        #endif /* (Mantmr_KillModeMinTime) */

        #if (Mantmr_DeadBandUsed)
            Mantmr_WriteDeadTime(Mantmr_INIT_DEAD_TIME);
        #endif /* (Mantmr_DeadBandUsed) */

    #if (Mantmr_UseStatus || Mantmr_UsingFixedFunction)
        Mantmr_SetInterruptMode(Mantmr_INIT_INTERRUPTS_MODE);
    #endif /* (Mantmr_UseStatus || Mantmr_UsingFixedFunction) */

    #if (Mantmr_UsingFixedFunction)
        /* Globally Enable the Fixed Function Block chosen */
        Mantmr_GLOBAL_ENABLE |= Mantmr_BLOCK_EN_MASK;
        /* Set the Interrupt source to come from the status register */
        Mantmr_CONTROL2 |= Mantmr_CTRL2_IRQ_SEL;
    #else
        #if(Mantmr_UseStatus)

            /* CyEnterCriticalRegion and CyExitCriticalRegion are used to mark following region critical*/
            /* Enter Critical Region*/
            Mantmr_interruptState = CyEnterCriticalSection();
            /* Use the interrupt output of the status register for IRQ output */
            Mantmr_STATUS_AUX_CTRL |= Mantmr_STATUS_ACTL_INT_EN_MASK;

             /* Exit Critical Region*/
            CyExitCriticalSection(Mantmr_interruptState);

            /* Clear the FIFO to enable the Mantmr_STATUS_FIFOFULL
                   bit to be set on FIFO full. */
            Mantmr_ClearFIFO();
        #endif /* (Mantmr_UseStatus) */
    #endif /* (Mantmr_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: Mantmr_Enable
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
void Mantmr_Enable(void) 
{
    /* Globally Enable the Fixed Function Block chosen */
    #if (Mantmr_UsingFixedFunction)
        Mantmr_GLOBAL_ENABLE |= Mantmr_BLOCK_EN_MASK;
        Mantmr_GLOBAL_STBY_ENABLE |= Mantmr_BLOCK_STBY_EN_MASK;
    #endif /* (Mantmr_UsingFixedFunction) */

    /* Enable the PWM from the control register  */
    #if (Mantmr_UseControl || Mantmr_UsingFixedFunction)
        Mantmr_CONTROL |= Mantmr_CTRL_ENABLE;
    #endif /* (Mantmr_UseControl || Mantmr_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: Mantmr_Stop
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
void Mantmr_Stop(void) 
{
    #if (Mantmr_UseControl || Mantmr_UsingFixedFunction)
        Mantmr_CONTROL &= ((uint8)(~Mantmr_CTRL_ENABLE));
    #endif /* (Mantmr_UseControl || Mantmr_UsingFixedFunction) */

    /* Globally disable the Fixed Function Block chosen */
    #if (Mantmr_UsingFixedFunction)
        Mantmr_GLOBAL_ENABLE &= ((uint8)(~Mantmr_BLOCK_EN_MASK));
        Mantmr_GLOBAL_STBY_ENABLE &= ((uint8)(~Mantmr_BLOCK_STBY_EN_MASK));
    #endif /* (Mantmr_UsingFixedFunction) */
}

#if (Mantmr_UseOneCompareMode)
    #if (Mantmr_CompareMode1SW)


        /*******************************************************************************
        * Function Name: Mantmr_SetCompareMode
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
        void Mantmr_SetCompareMode(uint8 comparemode) 
        {
            #if(Mantmr_UsingFixedFunction)

                #if(0 != Mantmr_CTRL_CMPMODE1_SHIFT)
                    uint8 comparemodemasked = ((uint8)((uint8)comparemode << Mantmr_CTRL_CMPMODE1_SHIFT));
                #else
                    uint8 comparemodemasked = comparemode;
                #endif /* (0 != Mantmr_CTRL_CMPMODE1_SHIFT) */

                Mantmr_CONTROL3 &= ((uint8)(~Mantmr_CTRL_CMPMODE1_MASK)); /*Clear Existing Data */
                Mantmr_CONTROL3 |= comparemodemasked;

            #elif (Mantmr_UseControl)

                #if(0 != Mantmr_CTRL_CMPMODE1_SHIFT)
                    uint8 comparemode1masked = ((uint8)((uint8)comparemode << Mantmr_CTRL_CMPMODE1_SHIFT)) &
                                                Mantmr_CTRL_CMPMODE1_MASK;
                #else
                    uint8 comparemode1masked = comparemode & Mantmr_CTRL_CMPMODE1_MASK;
                #endif /* (0 != Mantmr_CTRL_CMPMODE1_SHIFT) */

                #if(0 != Mantmr_CTRL_CMPMODE2_SHIFT)
                    uint8 comparemode2masked = ((uint8)((uint8)comparemode << Mantmr_CTRL_CMPMODE2_SHIFT)) &
                                               Mantmr_CTRL_CMPMODE2_MASK;
                #else
                    uint8 comparemode2masked = comparemode & Mantmr_CTRL_CMPMODE2_MASK;
                #endif /* (0 != Mantmr_CTRL_CMPMODE2_SHIFT) */

                /*Clear existing mode */
                Mantmr_CONTROL &= ((uint8)(~(Mantmr_CTRL_CMPMODE1_MASK |
                                            Mantmr_CTRL_CMPMODE2_MASK)));
                Mantmr_CONTROL |= (comparemode1masked | comparemode2masked);

            #else
                uint8 temp = comparemode;
            #endif /* (Mantmr_UsingFixedFunction) */
        }
    #endif /* Mantmr_CompareMode1SW */

#else /* UseOneCompareMode */

    #if (Mantmr_CompareMode1SW)


        /*******************************************************************************
        * Function Name: Mantmr_SetCompareMode1
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
        void Mantmr_SetCompareMode1(uint8 comparemode) 
        {
            #if(0 != Mantmr_CTRL_CMPMODE1_SHIFT)
                uint8 comparemodemasked = ((uint8)((uint8)comparemode << Mantmr_CTRL_CMPMODE1_SHIFT)) &
                                           Mantmr_CTRL_CMPMODE1_MASK;
            #else
                uint8 comparemodemasked = comparemode & Mantmr_CTRL_CMPMODE1_MASK;
            #endif /* (0 != Mantmr_CTRL_CMPMODE1_SHIFT) */

            #if (Mantmr_UseControl)
                Mantmr_CONTROL &= ((uint8)(~Mantmr_CTRL_CMPMODE1_MASK)); /*Clear existing mode */
                Mantmr_CONTROL |= comparemodemasked;
            #endif /* (Mantmr_UseControl) */
        }
    #endif /* Mantmr_CompareMode1SW */

#if (Mantmr_CompareMode2SW)


    /*******************************************************************************
    * Function Name: Mantmr_SetCompareMode2
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
    void Mantmr_SetCompareMode2(uint8 comparemode) 
    {

        #if(0 != Mantmr_CTRL_CMPMODE2_SHIFT)
            uint8 comparemodemasked = ((uint8)((uint8)comparemode << Mantmr_CTRL_CMPMODE2_SHIFT)) &
                                                 Mantmr_CTRL_CMPMODE2_MASK;
        #else
            uint8 comparemodemasked = comparemode & Mantmr_CTRL_CMPMODE2_MASK;
        #endif /* (0 != Mantmr_CTRL_CMPMODE2_SHIFT) */

        #if (Mantmr_UseControl)
            Mantmr_CONTROL &= ((uint8)(~Mantmr_CTRL_CMPMODE2_MASK)); /*Clear existing mode */
            Mantmr_CONTROL |= comparemodemasked;
        #endif /* (Mantmr_UseControl) */
    }
    #endif /*Mantmr_CompareMode2SW */

#endif /* UseOneCompareMode */


#if (!Mantmr_UsingFixedFunction)


    /*******************************************************************************
    * Function Name: Mantmr_WriteCounter
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
    void Mantmr_WriteCounter(uint8 counter) \
                                       
    {
        CY_SET_REG8(Mantmr_COUNTER_LSB_PTR, counter);
    }


    /*******************************************************************************
    * Function Name: Mantmr_ReadCounter
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
    uint8 Mantmr_ReadCounter(void) 
    {
        /* Force capture by reading Accumulator */
        /* Must first do a software capture to be able to read the counter */
        /* It is up to the user code to make sure there isn't already captured data in the FIFO */
          (void)CY_GET_REG8(Mantmr_COUNTERCAP_LSB_PTR_8BIT);

        /* Read the data from the FIFO */
        return (CY_GET_REG8(Mantmr_CAPTURE_LSB_PTR));
    }

    #if (Mantmr_UseStatus)


        /*******************************************************************************
        * Function Name: Mantmr_ClearFIFO
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
        void Mantmr_ClearFIFO(void) 
        {
            while(0u != (Mantmr_ReadStatusRegister() & Mantmr_STATUS_FIFONEMPTY))
            {
                (void)Mantmr_ReadCapture();
            }
        }

    #endif /* Mantmr_UseStatus */

#endif /* !Mantmr_UsingFixedFunction */


/*******************************************************************************
* Function Name: Mantmr_WritePeriod
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
void Mantmr_WritePeriod(uint8 period) 
{
    #if(Mantmr_UsingFixedFunction)
        CY_SET_REG16(Mantmr_PERIOD_LSB_PTR, (uint16)period);
    #else
        CY_SET_REG8(Mantmr_PERIOD_LSB_PTR, period);
    #endif /* (Mantmr_UsingFixedFunction) */
}

#if (Mantmr_UseOneCompareMode)


    /*******************************************************************************
    * Function Name: Mantmr_WriteCompare
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
    void Mantmr_WriteCompare(uint8 compare) \
                                       
    {
        #if(Mantmr_UsingFixedFunction)
            CY_SET_REG16(Mantmr_COMPARE1_LSB_PTR, (uint16)compare);
        #else
            CY_SET_REG8(Mantmr_COMPARE1_LSB_PTR, compare);
        #endif /* (Mantmr_UsingFixedFunction) */

        #if (Mantmr_PWMMode == Mantmr__B_PWM__DITHER)
            #if(Mantmr_UsingFixedFunction)
                CY_SET_REG16(Mantmr_COMPARE2_LSB_PTR, (uint16)(compare + 1u));
            #else
                CY_SET_REG8(Mantmr_COMPARE2_LSB_PTR, (compare + 1u));
            #endif /* (Mantmr_UsingFixedFunction) */
        #endif /* (Mantmr_PWMMode == Mantmr__B_PWM__DITHER) */
    }


#else


    /*******************************************************************************
    * Function Name: Mantmr_WriteCompare1
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
    void Mantmr_WriteCompare1(uint8 compare) \
                                        
    {
        #if(Mantmr_UsingFixedFunction)
            CY_SET_REG16(Mantmr_COMPARE1_LSB_PTR, (uint16)compare);
        #else
            CY_SET_REG8(Mantmr_COMPARE1_LSB_PTR, compare);
        #endif /* (Mantmr_UsingFixedFunction) */
    }


    /*******************************************************************************
    * Function Name: Mantmr_WriteCompare2
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
    void Mantmr_WriteCompare2(uint8 compare) \
                                        
    {
        #if(Mantmr_UsingFixedFunction)
            CY_SET_REG16(Mantmr_COMPARE2_LSB_PTR, compare);
        #else
            CY_SET_REG8(Mantmr_COMPARE2_LSB_PTR, compare);
        #endif /* (Mantmr_UsingFixedFunction) */
    }
#endif /* UseOneCompareMode */

#if (Mantmr_DeadBandUsed)


    /*******************************************************************************
    * Function Name: Mantmr_WriteDeadTime
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
    void Mantmr_WriteDeadTime(uint8 deadtime) 
    {
        /* If using the Dead Band 1-255 mode then just write the register */
        #if(!Mantmr_DeadBand2_4)
            CY_SET_REG8(Mantmr_DEADBAND_COUNT_PTR, deadtime);
        #else
            /* Otherwise the data has to be masked and offset */
            /* Clear existing data */
            Mantmr_DEADBAND_COUNT &= ((uint8)(~Mantmr_DEADBAND_COUNT_MASK));

            /* Set new dead time */
            #if(Mantmr_DEADBAND_COUNT_SHIFT)
                Mantmr_DEADBAND_COUNT |= ((uint8)((uint8)deadtime << Mantmr_DEADBAND_COUNT_SHIFT)) &
                                                    Mantmr_DEADBAND_COUNT_MASK;
            #else
                Mantmr_DEADBAND_COUNT |= deadtime & Mantmr_DEADBAND_COUNT_MASK;
            #endif /* (Mantmr_DEADBAND_COUNT_SHIFT) */

        #endif /* (!Mantmr_DeadBand2_4) */
    }


    /*******************************************************************************
    * Function Name: Mantmr_ReadDeadTime
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
    uint8 Mantmr_ReadDeadTime(void) 
    {
        /* If using the Dead Band 1-255 mode then just read the register */
        #if(!Mantmr_DeadBand2_4)
            return (CY_GET_REG8(Mantmr_DEADBAND_COUNT_PTR));
        #else

            /* Otherwise the data has to be masked and offset */
            #if(Mantmr_DEADBAND_COUNT_SHIFT)
                return ((uint8)(((uint8)(Mantmr_DEADBAND_COUNT & Mantmr_DEADBAND_COUNT_MASK)) >>
                                                                           Mantmr_DEADBAND_COUNT_SHIFT));
            #else
                return (Mantmr_DEADBAND_COUNT & Mantmr_DEADBAND_COUNT_MASK);
            #endif /* (Mantmr_DEADBAND_COUNT_SHIFT) */
        #endif /* (!Mantmr_DeadBand2_4) */
    }
#endif /* DeadBandUsed */

#if (Mantmr_UseStatus || Mantmr_UsingFixedFunction)


    /*******************************************************************************
    * Function Name: Mantmr_SetInterruptMode
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
    void Mantmr_SetInterruptMode(uint8 interruptMode) 
    {
        CY_SET_REG8(Mantmr_STATUS_MASK_PTR, interruptMode);
    }


    /*******************************************************************************
    * Function Name: Mantmr_ReadStatusRegister
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
    uint8 Mantmr_ReadStatusRegister(void) 
    {
        return (CY_GET_REG8(Mantmr_STATUS_PTR));
    }

#endif /* (Mantmr_UseStatus || Mantmr_UsingFixedFunction) */


#if (Mantmr_UseControl)


    /*******************************************************************************
    * Function Name: Mantmr_ReadControlRegister
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
    uint8 Mantmr_ReadControlRegister(void) 
    {
        uint8 result;

        result = CY_GET_REG8(Mantmr_CONTROL_PTR);
        return (result);
    }


    /*******************************************************************************
    * Function Name: Mantmr_WriteControlRegister
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
    void Mantmr_WriteControlRegister(uint8 control) 
    {
        CY_SET_REG8(Mantmr_CONTROL_PTR, control);
    }

#endif /* (Mantmr_UseControl) */


#if (!Mantmr_UsingFixedFunction)


    /*******************************************************************************
    * Function Name: Mantmr_ReadCapture
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
    uint8 Mantmr_ReadCapture(void) 
    {
        return (CY_GET_REG8(Mantmr_CAPTURE_LSB_PTR));
    }

#endif /* (!Mantmr_UsingFixedFunction) */


#if (Mantmr_UseOneCompareMode)


    /*******************************************************************************
    * Function Name: Mantmr_ReadCompare
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
    uint8 Mantmr_ReadCompare(void) 
    {
        #if(Mantmr_UsingFixedFunction)
            return ((uint8)CY_GET_REG16(Mantmr_COMPARE1_LSB_PTR));
        #else
            return (CY_GET_REG8(Mantmr_COMPARE1_LSB_PTR));
        #endif /* (Mantmr_UsingFixedFunction) */
    }

#else


    /*******************************************************************************
    * Function Name: Mantmr_ReadCompare1
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
    uint8 Mantmr_ReadCompare1(void) 
    {
        return (CY_GET_REG8(Mantmr_COMPARE1_LSB_PTR));
    }


    /*******************************************************************************
    * Function Name: Mantmr_ReadCompare2
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
    uint8 Mantmr_ReadCompare2(void) 
    {
        return (CY_GET_REG8(Mantmr_COMPARE2_LSB_PTR));
    }

#endif /* (Mantmr_UseOneCompareMode) */


/*******************************************************************************
* Function Name: Mantmr_ReadPeriod
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
uint8 Mantmr_ReadPeriod(void) 
{
    #if(Mantmr_UsingFixedFunction)
        return ((uint8)CY_GET_REG16(Mantmr_PERIOD_LSB_PTR));
    #else
        return (CY_GET_REG8(Mantmr_PERIOD_LSB_PTR));
    #endif /* (Mantmr_UsingFixedFunction) */
}

#if ( Mantmr_KillModeMinTime)


    /*******************************************************************************
    * Function Name: Mantmr_WriteKillTime
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
    void Mantmr_WriteKillTime(uint8 killtime) 
    {
        CY_SET_REG8(Mantmr_KILLMODEMINTIME_PTR, killtime);
    }


    /*******************************************************************************
    * Function Name: Mantmr_ReadKillTime
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
    uint8 Mantmr_ReadKillTime(void) 
    {
        return (CY_GET_REG8(Mantmr_KILLMODEMINTIME_PTR));
    }

#endif /* ( Mantmr_KillModeMinTime) */

/* [] END OF FILE */
