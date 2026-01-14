/***************************************************************************
* File Name: fram_to_PWMA_DMA_dma.c  
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
#include <fram_to_PWMA_DMA_dma.H>



/****************************************************************************
* 
* The following defines are available in Cyfitter.h
* 
* 
* 
* fram_to_PWMA_DMA__DRQ_CTL_REG
* 
* 
* fram_to_PWMA_DMA__DRQ_NUMBER
* 
* Number of TD's used by this channel.
* fram_to_PWMA_DMA__NUMBEROF_TDS
* 
* Priority of this channel.
* fram_to_PWMA_DMA__PRIORITY
* 
* True if fram_to_PWMA_DMA_TERMIN_SEL is used.
* fram_to_PWMA_DMA__TERMIN_EN
* 
* TERMIN interrupt line to signal terminate.
* fram_to_PWMA_DMA__TERMIN_SEL
* 
* 
* True if fram_to_PWMA_DMA_TERMOUT0_SEL is used.
* fram_to_PWMA_DMA__TERMOUT0_EN
* 
* 
* TERMOUT0 interrupt line to signal completion.
* fram_to_PWMA_DMA__TERMOUT0_SEL
* 
* 
* True if fram_to_PWMA_DMA_TERMOUT1_SEL is used.
* fram_to_PWMA_DMA__TERMOUT1_EN
* 
* 
* TERMOUT1 interrupt line to signal completion.
* fram_to_PWMA_DMA__TERMOUT1_SEL
* 
****************************************************************************/


/* Zero based index of fram_to_PWMA_DMA dma channel */
uint8 fram_to_PWMA_DMA_DmaHandle = DMA_INVALID_CHANNEL;

/*********************************************************************
* Function Name: uint8 fram_to_PWMA_DMA_DmaInitalize
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
uint8 fram_to_PWMA_DMA_DmaInitialize(uint8 BurstCount, uint8 ReqestPerBurst, uint16 UpperSrcAddress, uint16 UpperDestAddress) 
{

    /* Allocate a DMA channel. */
    fram_to_PWMA_DMA_DmaHandle = (uint8)fram_to_PWMA_DMA__DRQ_NUMBER;

    /* Configure the channel. */
    (void)CyDmaChSetConfiguration(fram_to_PWMA_DMA_DmaHandle,
                                  BurstCount,
                                  ReqestPerBurst,
                                  (uint8)fram_to_PWMA_DMA__TERMOUT0_SEL,
                                  (uint8)fram_to_PWMA_DMA__TERMOUT1_SEL,
                                  (uint8)fram_to_PWMA_DMA__TERMIN_SEL);

    /* Set the extended address for the transfers */
    (void)CyDmaChSetExtendedAddress(fram_to_PWMA_DMA_DmaHandle, UpperSrcAddress, UpperDestAddress);

    /* Set the priority for this channel */
    (void)CyDmaChPriority(fram_to_PWMA_DMA_DmaHandle, (uint8)fram_to_PWMA_DMA__PRIORITY);
    
    return fram_to_PWMA_DMA_DmaHandle;
}

/*********************************************************************
* Function Name: void fram_to_PWMA_DMA_DmaRelease
**********************************************************************
* Summary:
*   Frees the channel associated with fram_to_PWMA_DMA.
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
void fram_to_PWMA_DMA_DmaRelease(void) 
{
    /* Disable the channel */
    (void)CyDmaChDisable(fram_to_PWMA_DMA_DmaHandle);
}

