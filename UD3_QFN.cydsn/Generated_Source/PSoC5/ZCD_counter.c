/*******************************************************************************
* File Name: ZCD_counter.c  
* Version 3.0
*
*  Description:
*     The Counter component consists of a 8, 16, 24 or 32-bit counter with
*     a selectable period between 2 and 2^Width - 1.  
*
*   Note:
*     None
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "ZCD_counter.h"

uint8 ZCD_counter_initVar = 0u;


/*******************************************************************************
* Function Name: ZCD_counter_Init
********************************************************************************
* Summary:
*     Initialize to the schematic state
* 
* Parameters:  
*  void  
*
* Return: 
*  void
*
*******************************************************************************/
void ZCD_counter_Init(void) 
{
        #if (!ZCD_counter_UsingFixedFunction && !ZCD_counter_ControlRegRemoved)
            uint8 ctrl;
        #endif /* (!ZCD_counter_UsingFixedFunction && !ZCD_counter_ControlRegRemoved) */
        
        #if(!ZCD_counter_UsingFixedFunction) 
            /* Interrupt State Backup for Critical Region*/
            uint8 ZCD_counter_interruptState;
        #endif /* (!ZCD_counter_UsingFixedFunction) */
        
        #if (ZCD_counter_UsingFixedFunction)
            /* Clear all bits but the enable bit (if it's already set for Timer operation */
            ZCD_counter_CONTROL &= ZCD_counter_CTRL_ENABLE;
            
            /* Clear the mode bits for continuous run mode */
            #if (CY_PSOC5A)
                ZCD_counter_CONTROL2 &= ((uint8)(~ZCD_counter_CTRL_MODE_MASK));
            #endif /* (CY_PSOC5A) */
            #if (CY_PSOC3 || CY_PSOC5LP)
                ZCD_counter_CONTROL3 &= ((uint8)(~ZCD_counter_CTRL_MODE_MASK));                
            #endif /* (CY_PSOC3 || CY_PSOC5LP) */
            /* Check if One Shot mode is enabled i.e. RunMode !=0*/
            #if (ZCD_counter_RunModeUsed != 0x0u)
                /* Set 3rd bit of Control register to enable one shot mode */
                ZCD_counter_CONTROL |= ZCD_counter_ONESHOT;
            #endif /* (ZCD_counter_RunModeUsed != 0x0u) */
            
            /* Set the IRQ to use the status register interrupts */
            ZCD_counter_CONTROL2 |= ZCD_counter_CTRL2_IRQ_SEL;
            
            /* Clear and Set SYNCTC and SYNCCMP bits of RT1 register */
            ZCD_counter_RT1 &= ((uint8)(~ZCD_counter_RT1_MASK));
            ZCD_counter_RT1 |= ZCD_counter_SYNC;     
                    
            /*Enable DSI Sync all all inputs of the Timer*/
            ZCD_counter_RT1 &= ((uint8)(~ZCD_counter_SYNCDSI_MASK));
            ZCD_counter_RT1 |= ZCD_counter_SYNCDSI_EN;

        #else
            #if(!ZCD_counter_ControlRegRemoved)
            /* Set the default compare mode defined in the parameter */
            ctrl = ZCD_counter_CONTROL & ((uint8)(~ZCD_counter_CTRL_CMPMODE_MASK));
            ZCD_counter_CONTROL = ctrl | ZCD_counter_DEFAULT_COMPARE_MODE;
            
            /* Set the default capture mode defined in the parameter */
            ctrl = ZCD_counter_CONTROL & ((uint8)(~ZCD_counter_CTRL_CAPMODE_MASK));
            
            #if( 0 != ZCD_counter_CAPTURE_MODE_CONF)
                ZCD_counter_CONTROL = ctrl | ZCD_counter_DEFAULT_CAPTURE_MODE;
            #else
                ZCD_counter_CONTROL = ctrl;
            #endif /* 0 != ZCD_counter_CAPTURE_MODE */ 
            
            #endif /* (!ZCD_counter_ControlRegRemoved) */
        #endif /* (ZCD_counter_UsingFixedFunction) */
        
        /* Clear all data in the FIFO's */
        #if (!ZCD_counter_UsingFixedFunction)
            ZCD_counter_ClearFIFO();
        #endif /* (!ZCD_counter_UsingFixedFunction) */
        
        /* Set Initial values from Configuration */
        ZCD_counter_WritePeriod(ZCD_counter_INIT_PERIOD_VALUE);
        #if (!(ZCD_counter_UsingFixedFunction && (CY_PSOC5A)))
            ZCD_counter_WriteCounter(ZCD_counter_INIT_COUNTER_VALUE);
        #endif /* (!(ZCD_counter_UsingFixedFunction && (CY_PSOC5A))) */
        ZCD_counter_SetInterruptMode(ZCD_counter_INIT_INTERRUPTS_MASK);
        
        #if (!ZCD_counter_UsingFixedFunction)
            /* Read the status register to clear the unwanted interrupts */
            (void)ZCD_counter_ReadStatusRegister();
            /* Set the compare value (only available to non-fixed function implementation */
            ZCD_counter_WriteCompare(ZCD_counter_INIT_COMPARE_VALUE);
            /* Use the interrupt output of the status register for IRQ output */
            
            /* CyEnterCriticalRegion and CyExitCriticalRegion are used to mark following region critical*/
            /* Enter Critical Region*/
            ZCD_counter_interruptState = CyEnterCriticalSection();
            
            ZCD_counter_STATUS_AUX_CTRL |= ZCD_counter_STATUS_ACTL_INT_EN_MASK;
            
            /* Exit Critical Region*/
            CyExitCriticalSection(ZCD_counter_interruptState);
            
        #endif /* (!ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_Enable
********************************************************************************
* Summary:
*     Enable the Counter
* 
* Parameters:  
*  void  
*
* Return: 
*  void
*
* Side Effects: 
*   If the Enable mode is set to Hardware only then this function has no effect 
*   on the operation of the counter.
*
*******************************************************************************/
void ZCD_counter_Enable(void) 
{
    /* Globally Enable the Fixed Function Block chosen */
    #if (ZCD_counter_UsingFixedFunction)
        ZCD_counter_GLOBAL_ENABLE |= ZCD_counter_BLOCK_EN_MASK;
        ZCD_counter_GLOBAL_STBY_ENABLE |= ZCD_counter_BLOCK_STBY_EN_MASK;
    #endif /* (ZCD_counter_UsingFixedFunction) */  
        
    /* Enable the counter from the control register  */
    /* If Fixed Function then make sure Mode is set correctly */
    /* else make sure reset is clear */
    #if(!ZCD_counter_ControlRegRemoved || ZCD_counter_UsingFixedFunction)
        ZCD_counter_CONTROL |= ZCD_counter_CTRL_ENABLE;                
    #endif /* (!ZCD_counter_ControlRegRemoved || ZCD_counter_UsingFixedFunction) */
    
}


/*******************************************************************************
* Function Name: ZCD_counter_Start
********************************************************************************
* Summary:
*  Enables the counter for operation 
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
* Global variables:
*  ZCD_counter_initVar: Is modified when this function is called for the  
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void ZCD_counter_Start(void) 
{
    if(ZCD_counter_initVar == 0u)
    {
        ZCD_counter_Init();
        
        ZCD_counter_initVar = 1u; /* Clear this bit for Initialization */        
    }
    
    /* Enable the Counter */
    ZCD_counter_Enable();        
}


/*******************************************************************************
* Function Name: ZCD_counter_Stop
********************************************************************************
* Summary:
* Halts the counter, but does not change any modes or disable interrupts.
*
* Parameters:  
*  void  
*
* Return: 
*  void
*
* Side Effects: If the Enable mode is set to Hardware only then this function
*               has no effect on the operation of the counter.
*
*******************************************************************************/
void ZCD_counter_Stop(void) 
{
    /* Disable Counter */
    #if(!ZCD_counter_ControlRegRemoved || ZCD_counter_UsingFixedFunction)
        ZCD_counter_CONTROL &= ((uint8)(~ZCD_counter_CTRL_ENABLE));        
    #endif /* (!ZCD_counter_ControlRegRemoved || ZCD_counter_UsingFixedFunction) */
    
    /* Globally disable the Fixed Function Block chosen */
    #if (ZCD_counter_UsingFixedFunction)
        ZCD_counter_GLOBAL_ENABLE &= ((uint8)(~ZCD_counter_BLOCK_EN_MASK));
        ZCD_counter_GLOBAL_STBY_ENABLE &= ((uint8)(~ZCD_counter_BLOCK_STBY_EN_MASK));
    #endif /* (ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_SetInterruptMode
********************************************************************************
* Summary:
* Configures which interrupt sources are enabled to generate the final interrupt
*
* Parameters:  
*  InterruptsMask: This parameter is an or'd collection of the status bits
*                   which will be allowed to generate the counters interrupt.   
*
* Return: 
*  void
*
*******************************************************************************/
void ZCD_counter_SetInterruptMode(uint8 interruptsMask) 
{
    ZCD_counter_STATUS_MASK = interruptsMask;
}


/*******************************************************************************
* Function Name: ZCD_counter_ReadStatusRegister
********************************************************************************
* Summary:
*   Reads the status register and returns it's state. This function should use
*       defined types for the bit-field information as the bits in this
*       register may be permuteable.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) The contents of the status register
*
* Side Effects:
*   Status register bits may be clear on read. 
*
*******************************************************************************/
uint8   ZCD_counter_ReadStatusRegister(void) 
{
    return ZCD_counter_STATUS;
}


#if(!ZCD_counter_ControlRegRemoved)
/*******************************************************************************
* Function Name: ZCD_counter_ReadControlRegister
********************************************************************************
* Summary:
*   Reads the control register and returns it's state. This function should use
*       defined types for the bit-field information as the bits in this
*       register may be permuteable.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) The contents of the control register
*
*******************************************************************************/
uint8   ZCD_counter_ReadControlRegister(void) 
{
    return ZCD_counter_CONTROL;
}


/*******************************************************************************
* Function Name: ZCD_counter_WriteControlRegister
********************************************************************************
* Summary:
*   Sets the bit-field of the control register.  This function should use
*       defined types for the bit-field information as the bits in this
*       register may be permuteable.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) The contents of the control register
*
*******************************************************************************/
void    ZCD_counter_WriteControlRegister(uint8 control) 
{
    ZCD_counter_CONTROL = control;
}

#endif  /* (!ZCD_counter_ControlRegRemoved) */


#if (!(ZCD_counter_UsingFixedFunction && (CY_PSOC5A)))
/*******************************************************************************
* Function Name: ZCD_counter_WriteCounter
********************************************************************************
* Summary:
*   This funtion is used to set the counter to a specific value
*
* Parameters:  
*  counter:  New counter value. 
*
* Return: 
*  void 
*
*******************************************************************************/
void ZCD_counter_WriteCounter(uint8 counter) \
                                   
{
    #if(ZCD_counter_UsingFixedFunction)
        /* assert if block is already enabled */
        CYASSERT (0u == (ZCD_counter_GLOBAL_ENABLE & ZCD_counter_BLOCK_EN_MASK));
        /* If block is disabled, enable it and then write the counter */
        ZCD_counter_GLOBAL_ENABLE |= ZCD_counter_BLOCK_EN_MASK;
        CY_SET_REG16(ZCD_counter_COUNTER_LSB_PTR, (uint16)counter);
        ZCD_counter_GLOBAL_ENABLE &= ((uint8)(~ZCD_counter_BLOCK_EN_MASK));
    #else
        CY_SET_REG8(ZCD_counter_COUNTER_LSB_PTR, counter);
    #endif /* (ZCD_counter_UsingFixedFunction) */
}
#endif /* (!(ZCD_counter_UsingFixedFunction && (CY_PSOC5A))) */


/*******************************************************************************
* Function Name: ZCD_counter_ReadCounter
********************************************************************************
* Summary:
* Returns the current value of the counter.  It doesn't matter
* if the counter is enabled or running.
*
* Parameters:  
*  void:  
*
* Return: 
*  (uint8) The present value of the counter.
*
*******************************************************************************/
uint8 ZCD_counter_ReadCounter(void) 
{
    /* Force capture by reading Accumulator */
    /* Must first do a software capture to be able to read the counter */
    /* It is up to the user code to make sure there isn't already captured data in the FIFO */
    #if(ZCD_counter_UsingFixedFunction)
		(void)CY_GET_REG16(ZCD_counter_COUNTER_LSB_PTR);
	#else
		(void)CY_GET_REG8(ZCD_counter_COUNTER_LSB_PTR_8BIT);
	#endif/* (ZCD_counter_UsingFixedFunction) */
    
    /* Read the data from the FIFO (or capture register for Fixed Function)*/
    #if(ZCD_counter_UsingFixedFunction)
        return ((uint8)CY_GET_REG16(ZCD_counter_STATICCOUNT_LSB_PTR));
    #else
        return (CY_GET_REG8(ZCD_counter_STATICCOUNT_LSB_PTR));
    #endif /* (ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_ReadCapture
********************************************************************************
* Summary:
*   This function returns the last value captured.
*
* Parameters:  
*  void
*
* Return: 
*  (uint8) Present Capture value.
*
*******************************************************************************/
uint8 ZCD_counter_ReadCapture(void) 
{
    #if(ZCD_counter_UsingFixedFunction)
        return ((uint8)CY_GET_REG16(ZCD_counter_STATICCOUNT_LSB_PTR));
    #else
        return (CY_GET_REG8(ZCD_counter_STATICCOUNT_LSB_PTR));
    #endif /* (ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_WritePeriod
********************************************************************************
* Summary:
* Changes the period of the counter.  The new period 
* will be loaded the next time terminal count is detected.
*
* Parameters:  
*  period: (uint8) A value of 0 will result in
*         the counter remaining at zero.  
*
* Return: 
*  void
*
*******************************************************************************/
void ZCD_counter_WritePeriod(uint8 period) 
{
    #if(ZCD_counter_UsingFixedFunction)
        CY_SET_REG16(ZCD_counter_PERIOD_LSB_PTR,(uint16)period);
    #else
        CY_SET_REG8(ZCD_counter_PERIOD_LSB_PTR, period);
    #endif /* (ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_ReadPeriod
********************************************************************************
* Summary:
* Reads the current period value without affecting counter operation.
*
* Parameters:  
*  void:  
*
* Return: 
*  (uint8) Present period value.
*
*******************************************************************************/
uint8 ZCD_counter_ReadPeriod(void) 
{
    #if(ZCD_counter_UsingFixedFunction)
        return ((uint8)CY_GET_REG16(ZCD_counter_PERIOD_LSB_PTR));
    #else
        return (CY_GET_REG8(ZCD_counter_PERIOD_LSB_PTR));
    #endif /* (ZCD_counter_UsingFixedFunction) */
}


#if (!ZCD_counter_UsingFixedFunction)
/*******************************************************************************
* Function Name: ZCD_counter_WriteCompare
********************************************************************************
* Summary:
* Changes the compare value.  The compare output will 
* reflect the new value on the next UDB clock.  The compare output will be 
* driven high when the present counter value compares true based on the 
* configured compare mode setting. 
*
* Parameters:  
*  Compare:  New compare value. 
*
* Return: 
*  void
*
*******************************************************************************/
void ZCD_counter_WriteCompare(uint8 compare) \
                                   
{
    #if(ZCD_counter_UsingFixedFunction)
        CY_SET_REG16(ZCD_counter_COMPARE_LSB_PTR, (uint16)compare);
    #else
        CY_SET_REG8(ZCD_counter_COMPARE_LSB_PTR, compare);
    #endif /* (ZCD_counter_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: ZCD_counter_ReadCompare
********************************************************************************
* Summary:
* Returns the compare value.
*
* Parameters:  
*  void:
*
* Return: 
*  (uint8) Present compare value.
*
*******************************************************************************/
uint8 ZCD_counter_ReadCompare(void) 
{
    return (CY_GET_REG8(ZCD_counter_COMPARE_LSB_PTR));
}


#if (ZCD_counter_COMPARE_MODE_SOFTWARE)
/*******************************************************************************
* Function Name: ZCD_counter_SetCompareMode
********************************************************************************
* Summary:
*  Sets the software controlled Compare Mode.
*
* Parameters:
*  compareMode:  Compare Mode Enumerated Type.
*
* Return:
*  void
*
*******************************************************************************/
void ZCD_counter_SetCompareMode(uint8 compareMode) 
{
    /* Clear the compare mode bits in the control register */
    ZCD_counter_CONTROL &= ((uint8)(~ZCD_counter_CTRL_CMPMODE_MASK));
    
    /* Write the new setting */
    ZCD_counter_CONTROL |= compareMode;
}
#endif  /* (ZCD_counter_COMPARE_MODE_SOFTWARE) */


#if (ZCD_counter_CAPTURE_MODE_SOFTWARE)
/*******************************************************************************
* Function Name: ZCD_counter_SetCaptureMode
********************************************************************************
* Summary:
*  Sets the software controlled Capture Mode.
*
* Parameters:
*  captureMode:  Capture Mode Enumerated Type.
*
* Return:
*  void
*
*******************************************************************************/
void ZCD_counter_SetCaptureMode(uint8 captureMode) 
{
    /* Clear the capture mode bits in the control register */
    ZCD_counter_CONTROL &= ((uint8)(~ZCD_counter_CTRL_CAPMODE_MASK));
    
    /* Write the new setting */
    ZCD_counter_CONTROL |= ((uint8)((uint8)captureMode << ZCD_counter_CTRL_CAPMODE0_SHIFT));
}
#endif  /* (ZCD_counter_CAPTURE_MODE_SOFTWARE) */


/*******************************************************************************
* Function Name: ZCD_counter_ClearFIFO
********************************************************************************
* Summary:
*   This function clears all capture data from the capture FIFO
*
* Parameters:  
*  void:
*
* Return: 
*  None
*
*******************************************************************************/
void ZCD_counter_ClearFIFO(void) 
{

    while(0u != (ZCD_counter_ReadStatusRegister() & ZCD_counter_STATUS_FIFONEMP))
    {
        (void)ZCD_counter_ReadCapture();
    }

}
#endif  /* (!ZCD_counter_UsingFixedFunction) */


/* [] END OF FILE */

