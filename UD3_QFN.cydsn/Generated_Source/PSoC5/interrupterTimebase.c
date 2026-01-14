/*******************************************************************************
* File Name: interrupterTimebase.c  
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

#include "interrupterTimebase.h"

uint8 interrupterTimebase_initVar = 0u;


/*******************************************************************************
* Function Name: interrupterTimebase_Init
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
void interrupterTimebase_Init(void) 
{
        #if (!interrupterTimebase_UsingFixedFunction && !interrupterTimebase_ControlRegRemoved)
            uint8 ctrl;
        #endif /* (!interrupterTimebase_UsingFixedFunction && !interrupterTimebase_ControlRegRemoved) */
        
        #if(!interrupterTimebase_UsingFixedFunction) 
            /* Interrupt State Backup for Critical Region*/
            uint8 interrupterTimebase_interruptState;
        #endif /* (!interrupterTimebase_UsingFixedFunction) */
        
        #if (interrupterTimebase_UsingFixedFunction)
            /* Clear all bits but the enable bit (if it's already set for Timer operation */
            interrupterTimebase_CONTROL &= interrupterTimebase_CTRL_ENABLE;
            
            /* Clear the mode bits for continuous run mode */
            #if (CY_PSOC5A)
                interrupterTimebase_CONTROL2 &= ((uint8)(~interrupterTimebase_CTRL_MODE_MASK));
            #endif /* (CY_PSOC5A) */
            #if (CY_PSOC3 || CY_PSOC5LP)
                interrupterTimebase_CONTROL3 &= ((uint8)(~interrupterTimebase_CTRL_MODE_MASK));                
            #endif /* (CY_PSOC3 || CY_PSOC5LP) */
            /* Check if One Shot mode is enabled i.e. RunMode !=0*/
            #if (interrupterTimebase_RunModeUsed != 0x0u)
                /* Set 3rd bit of Control register to enable one shot mode */
                interrupterTimebase_CONTROL |= interrupterTimebase_ONESHOT;
            #endif /* (interrupterTimebase_RunModeUsed != 0x0u) */
            
            /* Set the IRQ to use the status register interrupts */
            interrupterTimebase_CONTROL2 |= interrupterTimebase_CTRL2_IRQ_SEL;
            
            /* Clear and Set SYNCTC and SYNCCMP bits of RT1 register */
            interrupterTimebase_RT1 &= ((uint8)(~interrupterTimebase_RT1_MASK));
            interrupterTimebase_RT1 |= interrupterTimebase_SYNC;     
                    
            /*Enable DSI Sync all all inputs of the Timer*/
            interrupterTimebase_RT1 &= ((uint8)(~interrupterTimebase_SYNCDSI_MASK));
            interrupterTimebase_RT1 |= interrupterTimebase_SYNCDSI_EN;

        #else
            #if(!interrupterTimebase_ControlRegRemoved)
            /* Set the default compare mode defined in the parameter */
            ctrl = interrupterTimebase_CONTROL & ((uint8)(~interrupterTimebase_CTRL_CMPMODE_MASK));
            interrupterTimebase_CONTROL = ctrl | interrupterTimebase_DEFAULT_COMPARE_MODE;
            
            /* Set the default capture mode defined in the parameter */
            ctrl = interrupterTimebase_CONTROL & ((uint8)(~interrupterTimebase_CTRL_CAPMODE_MASK));
            
            #if( 0 != interrupterTimebase_CAPTURE_MODE_CONF)
                interrupterTimebase_CONTROL = ctrl | interrupterTimebase_DEFAULT_CAPTURE_MODE;
            #else
                interrupterTimebase_CONTROL = ctrl;
            #endif /* 0 != interrupterTimebase_CAPTURE_MODE */ 
            
            #endif /* (!interrupterTimebase_ControlRegRemoved) */
        #endif /* (interrupterTimebase_UsingFixedFunction) */
        
        /* Clear all data in the FIFO's */
        #if (!interrupterTimebase_UsingFixedFunction)
            interrupterTimebase_ClearFIFO();
        #endif /* (!interrupterTimebase_UsingFixedFunction) */
        
        /* Set Initial values from Configuration */
        interrupterTimebase_WritePeriod(interrupterTimebase_INIT_PERIOD_VALUE);
        #if (!(interrupterTimebase_UsingFixedFunction && (CY_PSOC5A)))
            interrupterTimebase_WriteCounter(interrupterTimebase_INIT_COUNTER_VALUE);
        #endif /* (!(interrupterTimebase_UsingFixedFunction && (CY_PSOC5A))) */
        interrupterTimebase_SetInterruptMode(interrupterTimebase_INIT_INTERRUPTS_MASK);
        
        #if (!interrupterTimebase_UsingFixedFunction)
            /* Read the status register to clear the unwanted interrupts */
            (void)interrupterTimebase_ReadStatusRegister();
            /* Set the compare value (only available to non-fixed function implementation */
            interrupterTimebase_WriteCompare(interrupterTimebase_INIT_COMPARE_VALUE);
            /* Use the interrupt output of the status register for IRQ output */
            
            /* CyEnterCriticalRegion and CyExitCriticalRegion are used to mark following region critical*/
            /* Enter Critical Region*/
            interrupterTimebase_interruptState = CyEnterCriticalSection();
            
            interrupterTimebase_STATUS_AUX_CTRL |= interrupterTimebase_STATUS_ACTL_INT_EN_MASK;
            
            /* Exit Critical Region*/
            CyExitCriticalSection(interrupterTimebase_interruptState);
            
        #endif /* (!interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_Enable
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
void interrupterTimebase_Enable(void) 
{
    /* Globally Enable the Fixed Function Block chosen */
    #if (interrupterTimebase_UsingFixedFunction)
        interrupterTimebase_GLOBAL_ENABLE |= interrupterTimebase_BLOCK_EN_MASK;
        interrupterTimebase_GLOBAL_STBY_ENABLE |= interrupterTimebase_BLOCK_STBY_EN_MASK;
    #endif /* (interrupterTimebase_UsingFixedFunction) */  
        
    /* Enable the counter from the control register  */
    /* If Fixed Function then make sure Mode is set correctly */
    /* else make sure reset is clear */
    #if(!interrupterTimebase_ControlRegRemoved || interrupterTimebase_UsingFixedFunction)
        interrupterTimebase_CONTROL |= interrupterTimebase_CTRL_ENABLE;                
    #endif /* (!interrupterTimebase_ControlRegRemoved || interrupterTimebase_UsingFixedFunction) */
    
}


/*******************************************************************************
* Function Name: interrupterTimebase_Start
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
*  interrupterTimebase_initVar: Is modified when this function is called for the  
*   first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void interrupterTimebase_Start(void) 
{
    if(interrupterTimebase_initVar == 0u)
    {
        interrupterTimebase_Init();
        
        interrupterTimebase_initVar = 1u; /* Clear this bit for Initialization */        
    }
    
    /* Enable the Counter */
    interrupterTimebase_Enable();        
}


/*******************************************************************************
* Function Name: interrupterTimebase_Stop
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
void interrupterTimebase_Stop(void) 
{
    /* Disable Counter */
    #if(!interrupterTimebase_ControlRegRemoved || interrupterTimebase_UsingFixedFunction)
        interrupterTimebase_CONTROL &= ((uint8)(~interrupterTimebase_CTRL_ENABLE));        
    #endif /* (!interrupterTimebase_ControlRegRemoved || interrupterTimebase_UsingFixedFunction) */
    
    /* Globally disable the Fixed Function Block chosen */
    #if (interrupterTimebase_UsingFixedFunction)
        interrupterTimebase_GLOBAL_ENABLE &= ((uint8)(~interrupterTimebase_BLOCK_EN_MASK));
        interrupterTimebase_GLOBAL_STBY_ENABLE &= ((uint8)(~interrupterTimebase_BLOCK_STBY_EN_MASK));
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_SetInterruptMode
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
void interrupterTimebase_SetInterruptMode(uint8 interruptsMask) 
{
    interrupterTimebase_STATUS_MASK = interruptsMask;
}


/*******************************************************************************
* Function Name: interrupterTimebase_ReadStatusRegister
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
uint8   interrupterTimebase_ReadStatusRegister(void) 
{
    return interrupterTimebase_STATUS;
}


#if(!interrupterTimebase_ControlRegRemoved)
/*******************************************************************************
* Function Name: interrupterTimebase_ReadControlRegister
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
uint8   interrupterTimebase_ReadControlRegister(void) 
{
    return interrupterTimebase_CONTROL;
}


/*******************************************************************************
* Function Name: interrupterTimebase_WriteControlRegister
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
void    interrupterTimebase_WriteControlRegister(uint8 control) 
{
    interrupterTimebase_CONTROL = control;
}

#endif  /* (!interrupterTimebase_ControlRegRemoved) */


#if (!(interrupterTimebase_UsingFixedFunction && (CY_PSOC5A)))
/*******************************************************************************
* Function Name: interrupterTimebase_WriteCounter
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
void interrupterTimebase_WriteCounter(uint32 counter) \
                                   
{
    #if(interrupterTimebase_UsingFixedFunction)
        /* assert if block is already enabled */
        CYASSERT (0u == (interrupterTimebase_GLOBAL_ENABLE & interrupterTimebase_BLOCK_EN_MASK));
        /* If block is disabled, enable it and then write the counter */
        interrupterTimebase_GLOBAL_ENABLE |= interrupterTimebase_BLOCK_EN_MASK;
        CY_SET_REG16(interrupterTimebase_COUNTER_LSB_PTR, (uint16)counter);
        interrupterTimebase_GLOBAL_ENABLE &= ((uint8)(~interrupterTimebase_BLOCK_EN_MASK));
    #else
        CY_SET_REG32(interrupterTimebase_COUNTER_LSB_PTR, counter);
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}
#endif /* (!(interrupterTimebase_UsingFixedFunction && (CY_PSOC5A))) */


/*******************************************************************************
* Function Name: interrupterTimebase_ReadCounter
********************************************************************************
* Summary:
* Returns the current value of the counter.  It doesn't matter
* if the counter is enabled or running.
*
* Parameters:  
*  void:  
*
* Return: 
*  (uint32) The present value of the counter.
*
*******************************************************************************/
uint32 interrupterTimebase_ReadCounter(void) 
{
    /* Force capture by reading Accumulator */
    /* Must first do a software capture to be able to read the counter */
    /* It is up to the user code to make sure there isn't already captured data in the FIFO */
    #if(interrupterTimebase_UsingFixedFunction)
		(void)CY_GET_REG16(interrupterTimebase_COUNTER_LSB_PTR);
	#else
		(void)CY_GET_REG8(interrupterTimebase_COUNTER_LSB_PTR_8BIT);
	#endif/* (interrupterTimebase_UsingFixedFunction) */
    
    /* Read the data from the FIFO (or capture register for Fixed Function)*/
    #if(interrupterTimebase_UsingFixedFunction)
        return ((uint32)CY_GET_REG16(interrupterTimebase_STATICCOUNT_LSB_PTR));
    #else
        return (CY_GET_REG32(interrupterTimebase_STATICCOUNT_LSB_PTR));
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_ReadCapture
********************************************************************************
* Summary:
*   This function returns the last value captured.
*
* Parameters:  
*  void
*
* Return: 
*  (uint32) Present Capture value.
*
*******************************************************************************/
uint32 interrupterTimebase_ReadCapture(void) 
{
    #if(interrupterTimebase_UsingFixedFunction)
        return ((uint32)CY_GET_REG16(interrupterTimebase_STATICCOUNT_LSB_PTR));
    #else
        return (CY_GET_REG32(interrupterTimebase_STATICCOUNT_LSB_PTR));
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_WritePeriod
********************************************************************************
* Summary:
* Changes the period of the counter.  The new period 
* will be loaded the next time terminal count is detected.
*
* Parameters:  
*  period: (uint32) A value of 0 will result in
*         the counter remaining at zero.  
*
* Return: 
*  void
*
*******************************************************************************/
void interrupterTimebase_WritePeriod(uint32 period) 
{
    #if(interrupterTimebase_UsingFixedFunction)
        CY_SET_REG16(interrupterTimebase_PERIOD_LSB_PTR,(uint16)period);
    #else
        CY_SET_REG32(interrupterTimebase_PERIOD_LSB_PTR, period);
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_ReadPeriod
********************************************************************************
* Summary:
* Reads the current period value without affecting counter operation.
*
* Parameters:  
*  void:  
*
* Return: 
*  (uint32) Present period value.
*
*******************************************************************************/
uint32 interrupterTimebase_ReadPeriod(void) 
{
    #if(interrupterTimebase_UsingFixedFunction)
        return ((uint32)CY_GET_REG16(interrupterTimebase_PERIOD_LSB_PTR));
    #else
        return (CY_GET_REG32(interrupterTimebase_PERIOD_LSB_PTR));
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}


#if (!interrupterTimebase_UsingFixedFunction)
/*******************************************************************************
* Function Name: interrupterTimebase_WriteCompare
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
void interrupterTimebase_WriteCompare(uint32 compare) \
                                   
{
    #if(interrupterTimebase_UsingFixedFunction)
        CY_SET_REG16(interrupterTimebase_COMPARE_LSB_PTR, (uint16)compare);
    #else
        CY_SET_REG32(interrupterTimebase_COMPARE_LSB_PTR, compare);
    #endif /* (interrupterTimebase_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: interrupterTimebase_ReadCompare
********************************************************************************
* Summary:
* Returns the compare value.
*
* Parameters:  
*  void:
*
* Return: 
*  (uint32) Present compare value.
*
*******************************************************************************/
uint32 interrupterTimebase_ReadCompare(void) 
{
    return (CY_GET_REG32(interrupterTimebase_COMPARE_LSB_PTR));
}


#if (interrupterTimebase_COMPARE_MODE_SOFTWARE)
/*******************************************************************************
* Function Name: interrupterTimebase_SetCompareMode
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
void interrupterTimebase_SetCompareMode(uint8 compareMode) 
{
    /* Clear the compare mode bits in the control register */
    interrupterTimebase_CONTROL &= ((uint8)(~interrupterTimebase_CTRL_CMPMODE_MASK));
    
    /* Write the new setting */
    interrupterTimebase_CONTROL |= compareMode;
}
#endif  /* (interrupterTimebase_COMPARE_MODE_SOFTWARE) */


#if (interrupterTimebase_CAPTURE_MODE_SOFTWARE)
/*******************************************************************************
* Function Name: interrupterTimebase_SetCaptureMode
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
void interrupterTimebase_SetCaptureMode(uint8 captureMode) 
{
    /* Clear the capture mode bits in the control register */
    interrupterTimebase_CONTROL &= ((uint8)(~interrupterTimebase_CTRL_CAPMODE_MASK));
    
    /* Write the new setting */
    interrupterTimebase_CONTROL |= ((uint8)((uint8)captureMode << interrupterTimebase_CTRL_CAPMODE0_SHIFT));
}
#endif  /* (interrupterTimebase_CAPTURE_MODE_SOFTWARE) */


/*******************************************************************************
* Function Name: interrupterTimebase_ClearFIFO
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
void interrupterTimebase_ClearFIFO(void) 
{

    while(0u != (interrupterTimebase_ReadStatusRegister() & interrupterTimebase_STATUS_FIFONEMP))
    {
        (void)interrupterTimebase_ReadCapture();
    }

}
#endif  /* (!interrupterTimebase_UsingFixedFunction) */


/* [] END OF FILE */

