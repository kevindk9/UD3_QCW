/*******************************************************************************
* File Name: Therm_Mux.h
* Version 1.80
*
*  Description:
*    This file contains the constants and function prototypes for the Analog
*    Multiplexer User Module AMux.
*
*   Note:
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(CY_AMUX_Therm_Mux_H)
#define CY_AMUX_Therm_Mux_H

#include "cyfitter.h"
#include "cyfitter_cfg.h"

#if ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) || \
         (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC4) || \
         (CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC5))    
    #include "cytypes.h"
#else
    #include "syslib/cy_syslib.h"
#endif /* ((CYDEV_CHIP_FAMILY_USED == CYDEV_CHIP_FAMILY_PSOC3) */


/***************************************
*        Function Prototypes
***************************************/

void Therm_Mux_Start(void) ;
#define Therm_Mux_Init() Therm_Mux_Start()
void Therm_Mux_FastSelect(uint8 channel) ;
/* The Stop, Select, Connect, Disconnect and DisconnectAll functions are declared elsewhere */
/* void Therm_Mux_Stop(void); */
/* void Therm_Mux_Select(uint8 channel); */
/* void Therm_Mux_Connect(uint8 channel); */
/* void Therm_Mux_Disconnect(uint8 channel); */
/* void Therm_Mux_DisconnectAll(void) */


/***************************************
*         Parameter Constants
***************************************/

#define Therm_Mux_CHANNELS  3u
#define Therm_Mux_MUXTYPE   1
#define Therm_Mux_ATMOSTONE 1

/***************************************
*             API Constants
***************************************/

#define Therm_Mux_NULL_CHANNEL 0xFFu
#define Therm_Mux_MUX_SINGLE   1
#define Therm_Mux_MUX_DIFF     2


/***************************************
*        Conditional Functions
***************************************/

#if Therm_Mux_MUXTYPE == Therm_Mux_MUX_SINGLE
# if !Therm_Mux_ATMOSTONE
#  define Therm_Mux_Connect(channel) Therm_Mux_Set(channel)
# endif
# define Therm_Mux_Disconnect(channel) Therm_Mux_Unset(channel)
#else
# if !Therm_Mux_ATMOSTONE
void Therm_Mux_Connect(uint8 channel) ;
# endif
void Therm_Mux_Disconnect(uint8 channel) ;
#endif

#if Therm_Mux_ATMOSTONE
# define Therm_Mux_Stop() Therm_Mux_DisconnectAll()
# define Therm_Mux_Select(channel) Therm_Mux_FastSelect(channel)
void Therm_Mux_DisconnectAll(void) ;
#else
# define Therm_Mux_Stop() Therm_Mux_Start()
void Therm_Mux_Select(uint8 channel) ;
# define Therm_Mux_DisconnectAll() Therm_Mux_Start()
#endif

#endif /* CY_AMUX_Therm_Mux_H */


/* [] END OF FILE */
