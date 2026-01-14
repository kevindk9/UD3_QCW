/*******************************************************************************
* File Name: interrupter1_control.h  
* Version 1.80
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CONTROL_REG_interrupter1_control_H) /* CY_CONTROL_REG_interrupter1_control_H */
#define CY_CONTROL_REG_interrupter1_control_H

#include "cyfitter.h"

#if ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC4) || \
     (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5))
    #include "cytypes.h"
#else
    #include "syslib/cy_syslib.h"
#endif

    
/***************************************
*     Data Struct Definitions
***************************************/

/* Sleep Mode API Support */
typedef struct
{
    uint8 controlState;

} interrupter1_control_BACKUP_STRUCT;


/***************************************
*         Function Prototypes 
***************************************/

void    interrupter1_control_Write(uint8 control) ;
uint8   interrupter1_control_Read(void) ;

void interrupter1_control_SaveConfig(void) ;
void interrupter1_control_RestoreConfig(void) ;
void interrupter1_control_Sleep(void) ; 
void interrupter1_control_Wakeup(void) ;


/***************************************
*            Registers        
***************************************/

/* Control Register */
#define interrupter1_control_Control        (* (reg8 *) interrupter1_control_Sync_ctrl_reg__CONTROL_REG )
#define interrupter1_control_Control_PTR    (  (reg8 *) interrupter1_control_Sync_ctrl_reg__CONTROL_REG )

#endif /* End CY_CONTROL_REG_interrupter1_control_H */


/* [] END OF FILE */
