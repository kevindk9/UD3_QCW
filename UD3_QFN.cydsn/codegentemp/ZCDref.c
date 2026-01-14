/*******************************************************************************
* File Name: ZCDref.c  
* Version 1.90
*
* Description:
*  This file provides the source code to the API for the 8-bit Voltage DAC 
*  (VDAC8) User Module.
*
* Note:
*  Any unusual or non-standard behavior should be noted here. Other-
*  wise, this section should remain blank.
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "ZCDref.h"

#if (CY_PSOC5A)
#include <CyLib.h>
#endif /* CY_PSOC5A */

uint8 ZCDref_initVar = 0u;

#if (CY_PSOC5A)
    static uint8 ZCDref_restoreVal = 0u;
#endif /* CY_PSOC5A */

#if (CY_PSOC5A)
    static ZCDref_backupStruct ZCDref_backup;
#endif /* CY_PSOC5A */


/*******************************************************************************
* Function Name: ZCDref_Init
********************************************************************************
* Summary:
*  Initialize to the schematic state.
* 
* Parameters:
*  void:
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_Init(void) 
{
    ZCDref_CR0 = (ZCDref_MODE_V );

    /* Set default data source */
    #if(ZCDref_DEFAULT_DATA_SRC != 0 )
        ZCDref_CR1 = (ZCDref_DEFAULT_CNTL | ZCDref_DACBUS_ENABLE) ;
    #else
        ZCDref_CR1 = (ZCDref_DEFAULT_CNTL | ZCDref_DACBUS_DISABLE) ;
    #endif /* (ZCDref_DEFAULT_DATA_SRC != 0 ) */

    /* Set default strobe mode */
    #if(ZCDref_DEFAULT_STRB != 0)
        ZCDref_Strobe |= ZCDref_STRB_EN ;
    #endif/* (ZCDref_DEFAULT_STRB != 0) */

    /* Set default range */
    ZCDref_SetRange(ZCDref_DEFAULT_RANGE); 

    /* Set default speed */
    ZCDref_SetSpeed(ZCDref_DEFAULT_SPEED);
}


/*******************************************************************************
* Function Name: ZCDref_Enable
********************************************************************************
* Summary:
*  Enable the VDAC8
* 
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_Enable(void) 
{
    ZCDref_PWRMGR |= ZCDref_ACT_PWR_EN;
    ZCDref_STBY_PWRMGR |= ZCDref_STBY_PWR_EN;

    /*This is to restore the value of register CR0 ,
    which is modified  in Stop API , this prevents misbehaviour of VDAC */
    #if (CY_PSOC5A)
        if(ZCDref_restoreVal == 1u) 
        {
             ZCDref_CR0 = ZCDref_backup.data_value;
             ZCDref_restoreVal = 0u;
        }
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: ZCDref_Start
********************************************************************************
*
* Summary:
*  The start function initializes the voltage DAC with the default values, 
*  and sets the power to the given level.  A power level of 0, is the same as
*  executing the stop function.
*
* Parameters:
*  Power: Sets power level between off (0) and (3) high power
*
* Return:
*  void 
*
* Global variables:
*  ZCDref_initVar: Is modified when this function is called for the 
*  first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void ZCDref_Start(void)  
{
    /* Hardware initiazation only needs to occure the first time */
    if(ZCDref_initVar == 0u)
    { 
        ZCDref_Init();
        ZCDref_initVar = 1u;
    }

    /* Enable power to DAC */
    ZCDref_Enable();

    /* Set default value */
    ZCDref_SetValue(ZCDref_DEFAULT_DATA); 
}


/*******************************************************************************
* Function Name: ZCDref_Stop
********************************************************************************
*
* Summary:
*  Powers down DAC to lowest power state.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_Stop(void) 
{
    /* Disble power to DAC */
    ZCDref_PWRMGR &= (uint8)(~ZCDref_ACT_PWR_EN);
    ZCDref_STBY_PWRMGR &= (uint8)(~ZCDref_STBY_PWR_EN);

    /* This is a work around for PSoC5A  ,
    this sets VDAC to current mode with output off */
    #if (CY_PSOC5A)
        ZCDref_backup.data_value = ZCDref_CR0;
        ZCDref_CR0 = ZCDref_CUR_MODE_OUT_OFF;
        ZCDref_restoreVal = 1u;
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: ZCDref_SetSpeed
********************************************************************************
*
* Summary:
*  Set DAC speed
*
* Parameters:
*  power: Sets speed value
*
* Return:
*  void
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_SetSpeed(uint8 speed) 
{
    /* Clear power mask then write in new value */
    ZCDref_CR0 &= (uint8)(~ZCDref_HS_MASK);
    ZCDref_CR0 |=  (speed & ZCDref_HS_MASK);
}


/*******************************************************************************
* Function Name: ZCDref_SetRange
********************************************************************************
*
* Summary:
*  Set one of three current ranges.
*
* Parameters:
*  Range: Sets one of Three valid ranges.
*
* Return:
*  void 
*
* Theory:
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_SetRange(uint8 range) 
{
    ZCDref_CR0 &= (uint8)(~ZCDref_RANGE_MASK);      /* Clear existing mode */
    ZCDref_CR0 |= (range & ZCDref_RANGE_MASK);      /*  Set Range  */
    ZCDref_DacTrim();
}


/*******************************************************************************
* Function Name: ZCDref_SetValue
********************************************************************************
*
* Summary:
*  Set 8-bit DAC value
*
* Parameters:  
*  value:  Sets DAC value between 0 and 255.
*
* Return: 
*  void 
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_SetValue(uint8 value) 
{
    #if (CY_PSOC5A)
        uint8 ZCDref_intrStatus = CyEnterCriticalSection();
    #endif /* CY_PSOC5A */

    ZCDref_Data = value;                /*  Set Value  */

    /* PSOC5A requires a double write */
    /* Exit Critical Section */
    #if (CY_PSOC5A)
        ZCDref_Data = value;
        CyExitCriticalSection(ZCDref_intrStatus);
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: ZCDref_DacTrim
********************************************************************************
*
* Summary:
*  Set the trim value for the given range.
*
* Parameters:
*  range:  1V or 4V range.  See constants.
*
* Return:
*  void
*
* Theory: 
*
* Side Effects:
*
*******************************************************************************/
void ZCDref_DacTrim(void) 
{
    uint8 mode;

    mode = (uint8)((ZCDref_CR0 & ZCDref_RANGE_MASK) >> 2) + ZCDref_TRIM_M7_1V_RNG_OFFSET;
    ZCDref_TR = CY_GET_XTND_REG8((uint8 *)(ZCDref_DAC_TRIM_BASE + mode));
}


/* [] END OF FILE */
