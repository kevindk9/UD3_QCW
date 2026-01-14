/***************************************************************************
* File Name: PWMB_PSB_DMA_dma.c  
* Version 1.70
*
*  Description:
*   Provides an API for the DMAC component. The API includes functions
*   for the DMA controller, DMA channels and Transfer Descriptors.
*
*
*   Note:
*     This module requires the developer to finish or fill in the auto
*     generated funcions and setup the dma channel and TD's.
*
********************************************************************************
* Copyright 2008-2010, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/
#include <CYLIB.H>
#include <CYDMAC.H>
#include <PWMB_PSB_DMA_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* PWMB_PSB_DMA__DRQ_CTL_REG
* 
* 
* PWMB_PSB_DMA__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* PWMB_PSB_DMA__NUMBEROF_TDS
* 
* Priority of this channel.
* PWMB_PSB_DMA__PRIORITY
* 
* True if PWMB_PSB_DMA_TERMIN_SEL is used.
* PWMB_PSB_DMA__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* PWMB_PSB_DMA__TERMIN_SEL
* 
* 
* True if PWMB_PSB_DMA_TERMOUT0_SEL is used.
* PWMB_PSB_DMA__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* PWMB_PSB_DMA__TERMOUT0_SEL
* 
* 
* True if PWMB_PSB_DMA_TERMOUT1_SEL is used.
* PWMB_PSB_DMA__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* PWMB_PSB_DMA__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of PWMB_PSB_DMA dma channel */
uint8 PWMB_PSB_DMA_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 PWMB_PSB_DMA_DmaInitalize
**********************************************************************
* Summary:
*   Allocates and initialises a channel of the DMAC to be used by the
*   caller.
*
* Parameters:
*   BurstCount.
*       
*       
*   ReqestPerBurst.
*       
*       
*   UpperSrcAddress.
*       
*       
*   UpperDestAddress.
*       
*
* Return:
*   The channel that can be used by the caller for DMA activity.
*   DMA_INVALID_CHANNEL (0xFF) if there are no channels left. 
*
*
*******************************************************************/
uint8 PWMB_PSB_DMA_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    PWMB_PSB_DMA_DmaHandle = (uint8)PWMB_PSB_DMA__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(PWMB_PSB_DMA_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)PWMB_PSB_DMA__TERMOUT0_SEL,
                                  (uint8)PWMB_PSB_DMA__TERMOUT1_SEL,
                                  (uint8)PWMB_PSB_DMA__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(PWMB_PSB_DMA_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(PWMB_PSB_DMA_DmaHandle, (uint8)PWMB_PSB_DMA__PRIORITY);
    
    return PWMB_PSB_DMA_DmaHandle;
}

/*********************************************************************
* Function Name: void PWMB_PSB_DMA_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with PWMB_PSB_DMA.
*
*
* Parameters:
*   void.
*
*
*
* Return:
*   void.
*
*******************************************************************/
void PWMB_PSB_DMA_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(PWMB_PSB_DMA_DmaHandle);
}

