// This file is meant to close the gap as I port the demo from STM32F4_disco
// to STM32F446RE_nucleo then later for the actual board

#ifndef _BOARD_INTEROP_H
#define _BOARD_INTEROP_H
#include "board.h"

#ifndef STM32F446xx
#define STM32F446xx
#endif

#define LINE_VBUS_FS                PAL_LINE(GPIOA, 9U)
#define LINE_OTG_FS_ID              PAL_LINE(GPIOA, 10U)
#define LINE_OVER_CURRENT           PAL_LINE(GPIOD, 5U)
#define LINE_OTG_FS_POWER_ON        PAL_LINE(GPIOC, 0U)

#define GPIOC_OTG_FS_POWER_ON       0U
#define GPIOA_VBUS_FS               9U
#define GPIOA_OTG_FS_ID             10U
#define GPIOA_OTG_FS_DM             11U
#define GPIOA_OTG_FS_DP             12U

#endif
