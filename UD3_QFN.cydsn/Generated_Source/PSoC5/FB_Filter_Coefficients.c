#include "FB_Filter.h"
#include "FB_Filter_PVT.h"


/*******************************************************************************
* ChannelA filter coefficients.
* Filter Type is FIR
*******************************************************************************/

/* Renamed array for backward compatibility.
*  Should not be used in new designs.
*/
#define ChannelAFirCoefficients FB_Filter_ChannelAFirCoefficients

/* Number of FIR filter taps are: 4 */

const uint8 CYCODE FB_Filter_ChannelAFirCoefficients[FB_Filter_FIR_A_SIZE] = 
{
 0x00u, 0x00u, 0x20u, 0x00u, /* Tap(0), 0.25 */

 0x00u, 0x00u, 0x20u, 0x00u, /* Tap(1), 0.25 */

 0x00u, 0x00u, 0x20u, 0x00u, /* Tap(2), 0.25 */

 0x00u, 0x00u, 0x20u, 0x00u, /* Tap(3), 0.25 */
};

