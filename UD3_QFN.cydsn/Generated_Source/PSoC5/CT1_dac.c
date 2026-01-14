/*******************************************************************************
* File Name: CT1_dac.c  
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
#include "CT1_dac.h"

#if (CY_PSOC5A)
#include <CyLib.h>
#endif /* CY_PSOC5A */

uint8 CT1_dac_initVar = 0u;

#if (CY_PSOC5A)
    static uint8 CT1_dac_restoreVal = 0u;
#endif /* CY_PSOC5A */

#if (CY_PSOC5A)
    static CT1_dac_backupStruct CT1_dac_backup;
#endif /* CY_PSOC5A */


/*******************************************************************************
* Function Name: CT1_dac_Init
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
void CT1_dac_Init(void) 
{
    CT1_dac_CR0 = (CT1_dac_MODE_V );

    /* Set default data source */
    #if(CT1_dac_DEFAULT_DATA_SRC != 0 )
        CT1_dac_CR1 = (CT1_dac_DEFAULT_CNTL | CT1_dac_DACBUS_ENABLE) ;
    #else
        CT1_dac_CR1 = (CT1_dac_DEFAULT_CNTL | CT1_dac_DACBUS_DISABLE) ;
    #endif /* (CT1_dac_DEFAULT_DATA_SRC != 0 ) */

    /* Set default strobe mode */
    #if(CT1_dac_DEFAULT_STRB != 0)
        CT1_dac_Strobe |= CT1_dac_STRB_EN ;
    #endif/* (CT1_dac_DEFAULT_STRB != 0) */

    /* Set default range */
    CT1_dac_SetRange(CT1_dac_DEFAULT_RANGE); 

    /* Set default speed */
    CT1_dac_SetSpeed(CT1_dac_DEFAULT_SPEED);
}


/*******************************************************************************
* Function Name: CT1_dac_Enable
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
void CT1_dac_Enable(void) 
{
    CT1_dac_PWRMGR |= CT1_dac_ACT_PWR_EN;
    CT1_dac_STBY_PWRMGR |= CT1_dac_STBY_PWR_EN;

    /*This is to restore the value of register CR0 ,
    which is modified  in Stop API , this prevents misbehaviour of VDAC */
    #if (CY_PSOC5A)
        if(CT1_dac_restoreVal == 1u) 
        {
             CT1_dac_CR0 = CT1_dac_backup.data_value;
             CT1_dac_restoreVal = 0u;
        }
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: CT1_dac_Start
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
*  CT1_dac_initVar: Is modified when this function is called for the 
*  first time. Is used to ensure that initialization happens only once.
*
*******************************************************************************/
void CT1_dac_Start(void)  
{
    /* Hardware initiazation only needs to occure the first time */
    if(CT1_dac_initVar == 0u)
    { 
        CT1_dac_Init();
        CT1_dac_initVar = 1u;
    }

    /* Enable power to DAC */
    CT1_dac_Enable();

    /* Set default value */
    CT1_dac_SetValue(CT1_dac_DEFAULT_DATA); 
}


/*******************************************************************************
* Function Name: CT1_dac_Stop
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
void CT1_dac_Stop(void) 
{
    /* Disble power to DAC */
    CT1_dac_PWRMGR &= (uint8)(~CT1_dac_ACT_PWR_EN);
    CT1_dac_STBY_PWRMGR &= (uint8)(~CT1_dac_STBY_PWR_EN);

    /* This is a work around for PSoC5A  ,
    this sets VDAC to current mode with output off */
    #if (CY_PSOC5A)
        CT1_dac_backup.data_value = CT1_dac_CR0;
        CT1_dac_CR0 = CT1_dac_CUR_MODE_OUT_OFF;
        CT1_dac_restoreVal = 1u;
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: CT1_dac_SetSpeed
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
void CT1_dac_SetSpeed(uint8 speed) 
{
    /* Clear power mask then write in new value */
    CT1_dac_CR0 &= (uint8)(~CT1_dac_HS_MASK);
    CT1_dac_CR0 |=  (speed & CT1_dac_HS_MASK);
}


/*******************************************************************************
* Function Name: CT1_dac_SetRange
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
void CT1_dac_SetRange(uint8 range) 
{
    CT1_dac_CR0 &= (uint8)(~CT1_dac_RANGE_MASK);      /* Clear existing mode */
    CT1_dac_CR0 |= (range & CT1_dac_RANGE_MASK);      /*  Set Range  */
    CT1_dac_DacTrim();
}


/*******************************************************************************
* Function Name: CT1_dac_SetValue
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
void CT1_dac_SetValue(uint8 value) 
{
    #if (CY_PSOC5A)
        uint8 CT1_dac_intrStatus = CyEnterCriticalSection();
    #endif /* CY_PSOC5A */

    CT1_dac_Data = value;                /*  Set Value  */

    /* PSOC5A requires a double write */
    /* Exit Critical Section */
    #if (CY_PSOC5A)
        CT1_dac_Data = value;
        CyExitCriticalSection(CT1_dac_intrStatus);
    #endif /* CY_PSOC5A */
}


/*******************************************************************************
* Function Name: CT1_dac_DacTrim
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
void CT1_dac_DacTrim(void) 
{
    uint8 mode;

    mode = (uint8)((CT1_dac_CR0 & CT1_dac_RANGE_MASK) >> 2) + CT1_dac_TRIM_M7_1V_RNG_OFFSET;
    CT1_dac_TR = CY_GET_XTND_REG8((uint8 *)(CT1_dac_DAC_TRIM_BASE + mode));
}


/* [] END OF FILE */
