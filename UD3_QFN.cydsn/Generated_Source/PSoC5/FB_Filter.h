/*******************************************************************************
* File Name: FB_Filter.h
* Version 2.30
*
* Description:
*  This header file contains definitions associated with the FILT component.
*
* Note:
* 
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(FB_Filter_H) /* FILT Header File */
#define FB_Filter_H

#include "cyfitter.h"
#include "CyLib.h"

extern uint8 FB_Filter_initVar;


/***************************************
*   Conditional Compilation Parameters
***************************************/
#define FB_Filter_DA_RAM_SIZE_CUR        (0x200u)
#define FB_Filter_DB_RAM_SIZE_CUR        (0x200u)
#define FB_Filter_CSA_RAM_SIZE_CUR       (0x100u)
#define FB_Filter_CSB_RAM_SIZE_CUR       (0x100u)
#define FB_Filter_CFSM_RAM_SIZE_CUR      (0x100u)
#define FB_Filter_ACU_RAM_SIZE_CUR       (0x40u)

#define FB_Filter_FIR_A_SIZE       (16u)
	
extern const uint8 CYCODE FB_Filter_ChannelAFirCoefficients[FB_Filter_FIR_A_SIZE];


/***************************************
*     Data Struct Definition
***************************************/

/* Low power Mode API Support */
typedef struct 
{
    uint8 enableState;
    uint8 cr;
    uint8 sr;
    uint8 sema;
    uint8 saveAcu[FB_Filter_ACU_RAM_SIZE_CUR];
}   FB_Filter_backupStruct;


/***************************************
* FILT component function prototypes.
****************************************/

void   FB_Filter_Start(void) ;
void   FB_Filter_Stop(void) ;
uint8 FB_Filter_Read8(uint8 channel) ;
uint16 FB_Filter_Read16(uint8 channel) ;
uint32 FB_Filter_Read24(uint8 channel) ;
void FB_Filter_Write8(uint8 channel, uint8 sample) ;
void FB_Filter_Write16(uint8 channel, uint16 sample) ;
void FB_Filter_Write24(uint8 channel, uint32 sample) ;
void FB_Filter_Sleep(void) ;
void FB_Filter_Wakeup(void) ;
void FB_Filter_SaveConfig(void) ;
void FB_Filter_RestoreConfig(void) ;
void FB_Filter_Init(void) ;
void FB_Filter_Enable(void) ;
void FB_Filter_SetCoherency(uint8 channel, uint8 byteSelect) ;
void FB_Filter_SetCoherencyEx(uint8 regSelect, uint8 key) ;
void FB_Filter_SetDalign(uint8 regSelect, uint8 state) ;

/*****************************************
* FILT component API Constants.
******************************************/

/* Channel Definitions */
#define FB_Filter_CHANNEL_A             (0u)
#define FB_Filter_CHANNEL_B             (1u)

#define FB_Filter_CHANNEL_A_INTR        (0x08u)
#define FB_Filter_CHANNEL_B_INTR        (0x10u)

#define FB_Filter_ALL_INTR              (0xf8u)

#define FB_Filter_SIGN_BIT              ((uint32)0x00800000u)
#define FB_Filter_SIGN_BYTE             ((uint32)0xFF000000u)

/* Component's enable/disable state */
#define FB_Filter_ENABLED               (0x01u)
#define FB_Filter_DISABLED              (0x00u)

/* SetCoherency API constants */
#define FB_Filter_KEY_LOW               (0x00u)
#define FB_Filter_KEY_MID               (0x01u)
#define FB_Filter_KEY_HIGH              (0x02u)


/*******************************************************************************
* FILT component macros.
*******************************************************************************/

#define FB_Filter_ClearInterruptSource() \
   (FB_Filter_SR_REG = FB_Filter_ALL_INTR )

#define FB_Filter_IsInterruptChannelA() \
    (FB_Filter_SR_REG & FB_Filter_CHANNEL_A_INTR)

#define FB_Filter_IsInterruptChannelB() \
    (FB_Filter_SR_REG & FB_Filter_CHANNEL_B_INTR)


/*******************************************************************************
* FILT component DFB registers.
*******************************************************************************/

/* DFB Status register */
#define FB_Filter_SR_REG             (* (reg8 *) FB_Filter_DFB__SR)
#define FB_Filter_SR_PTR             (  (reg8 *) FB_Filter_DFB__SR)

/* DFB Control register */
#define FB_Filter_CR_REG             (* (reg8 *) FB_Filter_DFB__CR)
#define FB_Filter_CR_PTR             (  (reg8 *) FB_Filter_DFB__CR)


/*******************************************************************************
* DFB.COHER bit field defines.
*******************************************************************************/

/* STAGEA key coherency mask */
#define FB_Filter_STAGEA_COHER_MASK    (0x03u)
#define FB_Filter_STAGEA_COHER         FB_Filter_STAGEA_COHER_MASK

/* HOLDA key coherency mask */
#define FB_Filter_HOLDA_COHER_MASK     ((uint8)((uint8)0x03u << 4u))
#define FB_Filter_HOLDA_COHER          FB_Filter_HOLDA_COHER_MASK

/* STAGEB key coherency mask */
#define FB_Filter_STAGEB_COHER_MASK    (0x0Cu)
#define FB_Filter_STAGEB_COHER         FB_Filter_STAGEB_COHER_MASK

/* HOLDB key coherency mask */
#define FB_Filter_HOLDB_COHER_MASK     ((uint8)((uint8)0x0Cu << 4u))
#define FB_Filter_HOLDB_COHER          FB_Filter_HOLDB_COHER_MASK


/*******************************************************************************
* DFB.DALIGN bit field defines.
*******************************************************************************/

/* STAGEA dalign mask */
#define FB_Filter_STAGEA_DALIGN    (0x01u)

/* HOLDA dalign mask */
#define FB_Filter_HOLDA_DALIGN     (0x04u)

/* STAGEB dalign mask */
#define FB_Filter_STAGEB_DALIGN    (0x02u)

/* HOLDB dalign mask */
#define FB_Filter_HOLDB_DALIGN     (0x08u)


#endif /* End FILT Header File */


/* [] END OF FILE */
