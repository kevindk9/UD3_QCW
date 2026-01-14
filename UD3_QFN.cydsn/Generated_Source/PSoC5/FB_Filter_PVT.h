/*******************************************************************************
* File Name: FB_Filter_PVT.h
* Version 2.30
*
* Description:
*  This header file contains internal definitions for the FILT component.
*  It must be included after FB_Filter.h.
*
* Note:
* 
********************************************************************************
* Copyright 2008-2013, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#if !defined(FB_Filter_PVT_H) /* FILT Header File */
#define FB_Filter_PVT_H

#include "FB_Filter.H"


/*******************************************************************************
* FILT component internal function prototypes.
*******************************************************************************/

extern void FB_Filter_SetInterruptMode(uint8 events) ;
extern void FB_Filter_SetDMAMode(uint8 events) ;


/*******************************************************************************
* FILT component internal variables.
*******************************************************************************/

extern const uint8 CYCODE FB_Filter_control[FB_Filter_CSA_RAM_SIZE_CUR]; 
extern const uint8 CYCODE FB_Filter_data_a[FB_Filter_DA_RAM_SIZE_CUR];
extern const uint8 CYCODE FB_Filter_data_b[FB_Filter_DB_RAM_SIZE_CUR];
extern const uint8 CYCODE FB_Filter_cfsm[FB_Filter_CFSM_RAM_SIZE_CUR];
extern const uint8 CYCODE FB_Filter_acu[FB_Filter_ACU_RAM_SIZE_CUR];


/*******************************************************************************
* FILT component internal constants.
*******************************************************************************/

/* Parameters */
#define FB_Filter_INIT_INTERRUPT_MODE    (0u)
#define FB_Filter_INIT_DMA_MODE          (1u)
#define FB_Filter_INIT_COHER             (0x00u)
#define FB_Filter_INIT_DALIGN            (0x0Fu)

/* RAM memory map offsets */
#define FB_Filter_DA_RAM                 (void XDATA *) (FB_Filter_DFB__DPA_SRAM_DATA)
#define FB_Filter_DB_RAM                 (void XDATA *) (FB_Filter_DFB__DPB_SRAM_DATA)
#define FB_Filter_CSA_RAM                (void XDATA *) (FB_Filter_DFB__CSA_SRAM_DATA)
#define FB_Filter_CSB_RAM                (void XDATA *) (FB_Filter_DFB__CSB_SRAM_DATA)
#define FB_Filter_CFSM_RAM               (void XDATA *) (FB_Filter_DFB__FSM_SRAM_DATA)
#define FB_Filter_ACU_RAM                (void XDATA *) (FB_Filter_DFB__ACU_SRAM_DATA)

/* RAM register space sizes in bytes. */
#if (CY_PSOC3)
    #define FB_Filter_DA_RAM_SIZE            ((int16)0x0200)
    #define FB_Filter_DB_RAM_SIZE            ((int16)0x0200)
    #define FB_Filter_CSA_RAM_SIZE           ((int16)0x0100)
    #define FB_Filter_CSB_RAM_SIZE           ((int16)0x0100)
    #define FB_Filter_CFSM_RAM_SIZE          ((int16)0x0100)
    #define FB_Filter_ACU_RAM_SIZE           ((int16)0x0040)
#else
    #define FB_Filter_DA_RAM_SIZE            ((uint16)0x0200u)
    #define FB_Filter_DB_RAM_SIZE            ((uint16)0x0200u)
    #define FB_Filter_CSA_RAM_SIZE           ((uint16)0x0100u)
    #define FB_Filter_CSB_RAM_SIZE           ((uint16)0x0100u)
    #define FB_Filter_CFSM_RAM_SIZE          ((uint16)0x0100u)
    #define FB_Filter_ACU_RAM_SIZE           ((uint16)0x0040u)
#endif /* (CY_PSOC3) */


/*******************************************************************************
* FILT component internal register contents.
*******************************************************************************/

#define FB_Filter_PM_ACT_MSK             FB_Filter_DFB__PM_ACT_MSK 
#define FB_Filter_PM_STBY_MSK            FB_Filter_DFB__PM_STBY_MSK 

#define FB_Filter_RUN_MASK               (0x01u)
#define FB_Filter_EVENT_MASK             (0x1Fu)
#define FB_Filter_SR_EVENT_SHIFT         (0x03u)
#define FB_Filter_DMA_CTRL_MASK          (0x0Fu)
#define FB_Filter_RAM_DIR_BUS            (0x3Fu)
#define FB_Filter_RAM_DIR_DFB            (0x00u)


/*******************************************************************************
* FILT component internal DFB registers.
*******************************************************************************/

/* DFB interrupt control register */
#define FB_Filter_INT_CTRL_REG           (* (reg8 *) FB_Filter_DFB__INT_CTRL)
#define FB_Filter_INT_CTRL_PTR           (  (reg8 *) FB_Filter_DFB__INT_CTRL)

/* DFB DMA control register */
#define FB_Filter_DMA_CTRL_REG           (* (reg8 *) FB_Filter_DFB__DMA_CTRL)
#define FB_Filter_DMA_CTRL_PTR           (  (reg8 *) FB_Filter_DFB__DMA_CTRL)

/* DFB ram direction register */
#define FB_Filter_RAM_DIR_REG            (* (reg8 *) FB_Filter_DFB__RAM_DIR)
#define FB_Filter_RAM_DIR_PTR            (  (reg8 *) FB_Filter_DFB__RAM_DIR)

/* DFB DSI control register */
#define FB_Filter_DSI_CTRL_REG           (* (reg8 *) FB_Filter_DFB__DSI_CTRL)
#define FB_Filter_DSI_CTRL_PTR           (  (reg8 *) FB_Filter_DFB__DSI_CTRL)

/* DFB HOLDA(Output LSB) register */
#define FB_Filter_HOLDA_REG              (* (reg8 *) FB_Filter_DFB__HOLDA)
#define FB_Filter_HOLDA_PTR              (  (reg8 *) FB_Filter_DFB__HOLDA)

/* DFB HOLDAH(Output MSB) register */
#define FB_Filter_HOLDAH_REG             (* (reg8 *) FB_Filter_DFB__HOLDAH)
#define FB_Filter_HOLDAH_PTR             (  (reg8 *) FB_Filter_DFB__HOLDAH)

/* DFB HOLDAM(Output middle) register */
#define FB_Filter_HOLDAM_REG             (* (reg8 *) FB_Filter_DFB__HOLDAM)
#define FB_Filter_HOLDAM_PTR             (  (reg8 *) FB_Filter_DFB__HOLDAM)

/* DFB HOLDB(Output LSB) register */
#define FB_Filter_HOLDB_REG              (* (reg8 *) FB_Filter_DFB__HOLDB)
#define FB_Filter_HOLDB_PTR              (  (reg8 *) FB_Filter_DFB__HOLDB)

/* DFB HOLDBH(Output MSB) register */
#define FB_Filter_HOLDBH_REG             (* (reg8 *) FB_Filter_DFB__HOLDBH)
#define FB_Filter_HOLDBH_PTR             (  (reg8 *) FB_Filter_DFB__HOLDBH)

/* DFB HOLDBM(Output middle) register */
#define FB_Filter_HOLDBM_REG             (* (reg8 *) FB_Filter_DFB__HOLDBM)
#define FB_Filter_HOLDBM_PTR             (  (reg8 *) FB_Filter_DFB__HOLDBM)

/* Active mode power control register */
#define FB_Filter_PM_ACT_CFG_REG         (* (reg8 *) FB_Filter_DFB__PM_ACT_CFG)
#define FB_Filter_PM_ACT_CFG_PTR         (  (reg8 *) FB_Filter_DFB__PM_ACT_CFG)

/* Alternative active mode power control register */
#define FB_Filter_PM_STBY_CFG_REG        (* (reg8 *) FB_Filter_DFB__PM_STBY_CFG)
#define FB_Filter_PM_STBY_CFG_PTR        (  (reg8 *) FB_Filter_DFB__PM_STBY_CFG)

/* DFB ram enable register */
#define FB_Filter_RAM_EN_REG             (* (reg8 *) FB_Filter_DFB__RAM_EN)
#define FB_Filter_RAM_EN_PTR             (  (reg8 *) FB_Filter_DFB__RAM_EN)

/* DFB STAGEA(Input LSB) register */
#define FB_Filter_STAGEA_REG             (* (reg8 *) FB_Filter_DFB__STAGEA)
#define FB_Filter_STAGEA_PTR             (  (reg8 *) FB_Filter_DFB__STAGEA)

/* DFB STAGEAH(Input MSB) register */
#define FB_Filter_STAGEAH_REG            (* (reg8 *) FB_Filter_DFB__STAGEAH)
#define FB_Filter_STAGEAH_PTR            (  (reg8 *) FB_Filter_DFB__STAGEAH)

/* DFB STAGEAM(Input middle) register */
#define FB_Filter_STAGEAM_REG            (* (reg8 *) FB_Filter_DFB__STAGEAM)
#define FB_Filter_STAGEAM_PTR            (  (reg8 *) FB_Filter_DFB__STAGEAM)

/* DFB STAGEB(Input LSB) register */
#define FB_Filter_STAGEB_REG             (* (reg8 *) FB_Filter_DFB__STAGEB )
#define FB_Filter_STAGEB_PTR             (  (reg8 *) FB_Filter_DFB__STAGEB )

/* DFB STAGEBH(Input MSB) register */
#define FB_Filter_STAGEBH_REG            (* (reg8 *) FB_Filter_DFB__STAGEBH)
#define FB_Filter_STAGEBH_PTR            (  (reg8 *) FB_Filter_DFB__STAGEBH)

/* DFB STAGEBM(Input middle) register */
#define FB_Filter_STAGEBM_REG            (* (reg8 *) FB_Filter_DFB__STAGEBM)
#define FB_Filter_STAGEBM_PTR            (  (reg8 *) FB_Filter_DFB__STAGEBM)

/* DFB coherence register */
#define FB_Filter_COHER_REG              (* (reg8 *) FB_Filter_DFB__COHER)
#define FB_Filter_COHER_PTR              (  (reg8 *) FB_Filter_DFB__COHER)

/* DFB data align register */
#define FB_Filter_DALIGN_REG             (* (reg8 *) FB_Filter_DFB__DALIGN)
#define FB_Filter_DALIGN_PTR             (  (reg8 *) FB_Filter_DFB__DALIGN)

/* DFB semaphore register */
#define FB_Filter_SEMA_REG               (* (reg8 *) FB_Filter_DFB__SEMA)
#define FB_Filter_SEMA_PTR               (  (reg8 *) FB_Filter_DFB__SEMA)

/* DFB output register which are 16 bit aligned */
#define FB_Filter_HOLDA16_REG            (* (reg16 *) FB_Filter_DFB__HOLDAM)
#define FB_Filter_HOLDA16_PTR            (  (reg16 *) FB_Filter_DFB__HOLDAM)

#define FB_Filter_HOLDB16_REG            (* (reg16 *) FB_Filter_DFB__HOLDBM)
#define FB_Filter_HOLDB16_PTR            (  (reg16 *) FB_Filter_DFB__HOLDBM)

/* DFB input register which are 16 bit aligned */
#define FB_Filter_STAGEA16_REG           (* (reg16 *) FB_Filter_DFB__STAGEAM)
#define FB_Filter_STAGEA16_PTR           (  (reg16 *) FB_Filter_DFB__STAGEAM)

#define FB_Filter_STAGEB16_REG           (* (reg16 *) FB_Filter_DFB__STAGEBM)
#define FB_Filter_STAGEB16_PTR           (  (reg16 *) FB_Filter_DFB__STAGEBM)

/* DFB output registers which are 24 bit aligned */
#define FB_Filter_HOLDA24_REG            (* (reg32 *) FB_Filter_DFB__HOLDA)
#define FB_Filter_HOLDA24_PTR            (  (reg32 *) FB_Filter_DFB__HOLDA)

#define FB_Filter_HOLDB24_REG            (* (reg32 *) FB_Filter_DFB__HOLDB)
#define FB_Filter_HOLDB24_PTR            (  (reg32 *) FB_Filter_DFB__HOLDB)

/* DFB input registers which are 24 bit aligned */
#define FB_Filter_STAGEA24_REG           (* (reg32 *) FB_Filter_DFB__STAGEA)
#define FB_Filter_STAGEA24_PTR           (  (reg32 *) FB_Filter_DFB__STAGEA)

#define FB_Filter_STAGEB24_REG           (* (reg32 *) FB_Filter_DFB__STAGEB)
#define FB_Filter_STAGEB24_PTR           (  (reg32 *) FB_Filter_DFB__STAGEB)

#endif /* End FB_Filter_PVT_H Header File */


/* [] END OF FILE */
