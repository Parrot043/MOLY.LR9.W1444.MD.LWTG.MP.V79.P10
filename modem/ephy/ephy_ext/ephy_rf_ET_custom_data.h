/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * ephy_rf_ET_custom_data.h
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * EL1 RF ET Custom Data
 *
 * Author:
 * -------
 *
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef  _EPHY_RF_ET_CUSTOM_DATA_H_
#define  _EPHY_RF_ET_CUSTOM_DATA_H_

/*===============================================================================*/
#include "el1_rf_public.h"
#include "lte_custom_mipi.h"

/*===============================================================================*/

#ifndef IS_ET_FRONT_END_ENABLE
#define IS_ET_FRONT_END_ENABLE            0
#endif

#if IS_ET_FRONT_END_ENABLE
#define IS_ET_MEMORY_USAGE                1
#else
#define IS_ET_MEMORY_USAGE                0
#endif

#ifndef ETM_CHIP_TYPE
#define ETM_CHIP_TYPE                     ETM_NONE_CHIP
#endif

#ifndef MIPI_USID_ET
#define MIPI_USID_ET                      0x0000
#endif

#ifndef MIPI_PORT_ET
#define MIPI_PORT_ET                      0x0000
#endif

/*special option for ET data debug*/
#if IS_ET_FRONT_END_ENABLE
#define IS_ET_TABLE_DEBGUG_MODE           1
#else
#define IS_ET_TABLE_DEBGUG_MODE           0
#endif

#define IS_ET_MULTI_REG_BANKS_ENABLE   1
#define ET_REG_BANKS_NUMBER            4  //0~3
#define ET_REG_BANKS_ADDR_OFFSET       6  //ex:1,7,13,19

#ifndef LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING 0x0
#endif

#ifndef ET_OUTER_LOOP_GAIN_2dot0x
#define ET_OUTER_LOOP_GAIN_2dot0x               LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef ET_OUTER_LOOP_GAIN_1dot5x
#define ET_OUTER_LOOP_GAIN_1dot5x               LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef ET_OUTER_LOOP_GAIN_2dot5x
#define ET_OUTER_LOOP_GAIN_2dot5x               LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band4_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band4_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING    LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band12_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band12_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band13_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band13_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band27_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band27_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

#ifndef LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING
#define LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING   LTE_BandNone_ET_OUTER_LOOP_GAIN_SETTING
#endif

// ET VPA offset voltage definitions.

#define ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE         1000
#define ET_VPA_OFFSET_VOLTAGE_RESOLUTION            25
#define ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT        2

#ifndef LTE_BandNone_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_BandNone_ET_VPA_OFFSET_VOLTAGE_SETTING  ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band1_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band1_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band2_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band2_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band3_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band3_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band4_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band4_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band5_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band5_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band6_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band6_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band7_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band7_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band8_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band8_ET_VPA_OFFSET_VOLTAGE_SETTING     ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band11_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band11_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band12_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band12_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band13_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band13_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band17_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band17_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band19_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band19_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band20_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band20_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band21_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band21_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band27_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band27_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band28_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band28_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band38_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band38_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band39_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band39_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band40_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band40_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#ifndef LTE_Band41_ET_VPA_OFFSET_VOLTAGE_SETTING
#define LTE_Band41_ET_VPA_OFFSET_VOLTAGE_SETTING    ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE
#endif

#define LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band1_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band2_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band2_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band3_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band3_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band4_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band4_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band5_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band5_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band6_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band6_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band7_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band7_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band8_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE      ( ( ( LTE_Band8_ET_VPA_OFFSET_VOLTAGE_SETTING  - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band11_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band11_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band12_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band12_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band13_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band13_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band17_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band17_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band19_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band19_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band20_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band20_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band21_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band21_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band27_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band27_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band28_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band28_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band38_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band38_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band39_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band39_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band40_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band40_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )
#define LTE_Band41_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE     ( ( ( LTE_Band41_ET_VPA_OFFSET_VOLTAGE_SETTING - ET_VPA_OFFSET_VOLTAGE_MINIMUM_VALUE ) / ET_VPA_OFFSET_VOLTAGE_RESOLUTION ) * ET_VPA_OFFSET_VOLTAGE_REGISTER_SHIFT )

// ET calibration time minimum output voltage settings.

#define ET_CAL_MIN_OUTPUT_VOLTAGE_MINIMUM_VALUE         150
#define ET_CAL_MIN_OUTPUT_VOLTAGE_RESOLUTION            40
#define ET_CAL_MIN_OUTPUT_VOLTAGE_REGISTER_SHIFT        2

// Vmin = Vset + 150mv; Vset = ( register_value ) * 40mV
// Unit: mV, resolution: 40mV, minimum value = 150mV, maximum value = 5230mV
#define LTE_BandNone_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING    0
#define LTE_Band1_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band2_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band3_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band4_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band5_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band6_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band7_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band8_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING       670
#define LTE_Band11_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band12_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band13_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band17_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band19_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band20_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band21_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band27_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band28_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band38_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band39_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band40_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670
#define LTE_Band41_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING      670

// ET calibration time maxmum output voltage settings.

#define ET_CAL_MAX_OUTPUT_VOLTAGE_MINIMUM_VALUE             360
#define ET_CAL_MAX_OUTPUT_VOLTAGE_RESOLUTION                40
#define ET_CAL_MAX_OUTPUT_VOLTAGE_REGISTER_SHIFT            2
#define ET_CAL_MAX_OUTPUT_VOLTAGE_OFFSET_TO_SW2_OUTPUT      500

// Vmax = Vmin + Vab - 500mv; Vab = ( register_value ) * 40mV
// Unit: mV, resolution: 40mV, minimum value = 360mV, maximum value = 9800mV
#define LTE_BandNone_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING    0
#define LTE_Band1_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band2_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band3_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band4_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band5_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band6_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band7_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band8_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING       5250
#define LTE_Band11_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band12_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band13_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band17_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band19_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band20_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band21_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band27_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band28_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band38_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band39_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band40_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250
#define LTE_Band41_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING      5250

// SW2 Auto Bypass Enable Flag Setting. "1" means "Enable Auto-Bypass Function"; "0" means "Disable Auto-Bypass Function".
#define LTE_ET_SW2_AUTO_BYPASS_ENABLE_FLAG     0

/*BANK Selection OR data*/
#define LTE_ET_BANK0_SEL_OR_VALUE         (0x00 << 2)
#define LTE_ET_BANK1_SEL_OR_VALUE         (0x01 << 2)
#define LTE_ET_BANK2_SEL_OR_VALUE         (0x10 << 2)
#define LTE_ET_BANK3_SEL_OR_VALUE         (0x11 << 2)

#define LTE_TX_ON_DATA_START_ADDRESS      0
#define LTE_TX_ON_DATA_STOP_ADDRESS       1

#define LTE_TX_OFF_DATA_START_ADDRESS     2
#define LTE_TX_OFF_DATA_STOP_ADDRESS      5

/*ET subfreq by Band Setting*/
//Units: 100 kHz
//Band 1 Sub-frequency
//Band None Sub-frequency
#define ET_LTE_BandNone_SUB_0_Freq          0
#define ET_LTE_BandNone_SUB_1_Freq          0
#define ET_LTE_BandNone_SUB_2_Freq          0
#define ET_LTE_BandNone_SUB_3_Freq          0
#define ET_LTE_BandNone_SUB_4_Freq          0
#define ET_LTE_BandNone_SUB_5_Freq          0
#define ET_LTE_BandNone_SUB_6_Freq          0
#define ET_LTE_BandNone_SUB_7_Freq          0

#ifndef ET_LTE_Band1_SUB_0_Freq
#define ET_LTE_Band1_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_1_Freq
#define ET_LTE_Band1_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_2_Freq
#define ET_LTE_Band1_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_3_Freq
#define ET_LTE_Band1_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_4_Freq
#define ET_LTE_Band1_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_5_Freq
#define ET_LTE_Band1_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_6_Freq
#define ET_LTE_Band1_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band1_SUB_7_Freq
#define ET_LTE_Band1_SUB_7_Freq           0
#endif

//Band 2 Sub-frequency
#ifndef ET_LTE_Band2_SUB_0_Freq
#define ET_LTE_Band2_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_1_Freq
#define ET_LTE_Band2_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_2_Freq
#define ET_LTE_Band2_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_3_Freq
#define ET_LTE_Band2_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_4_Freq
#define ET_LTE_Band2_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_5_Freq
#define ET_LTE_Band2_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_6_Freq
#define ET_LTE_Band2_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band2_SUB_7_Freq
#define ET_LTE_Band2_SUB_7_Freq           0
#endif

//Band 3 Sub-frequency
#ifndef ET_LTE_Band3_SUB_0_Freq
#define ET_LTE_Band3_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_1_Freq
#define ET_LTE_Band3_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_2_Freq
#define ET_LTE_Band3_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_3_Freq
#define ET_LTE_Band3_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_4_Freq
#define ET_LTE_Band3_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_5_Freq
#define ET_LTE_Band3_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_6_Freq
#define ET_LTE_Band3_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band3_SUB_7_Freq
#define ET_LTE_Band3_SUB_7_Freq           0
#endif

//Band 4 Sub-frequency
#ifndef ET_LTE_Band4_SUB_0_Freq
#define ET_LTE_Band4_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_1_Freq
#define ET_LTE_Band4_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_2_Freq
#define ET_LTE_Band4_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_3_Freq
#define ET_LTE_Band4_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_4_Freq
#define ET_LTE_Band4_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_5_Freq
#define ET_LTE_Band4_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_6_Freq
#define ET_LTE_Band4_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band4_SUB_7_Freq
#define ET_LTE_Band4_SUB_7_Freq           0
#endif

//Band 5 Sub-frequency
#ifndef ET_LTE_Band5_SUB_0_Freq
#define ET_LTE_Band5_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_1_Freq
#define ET_LTE_Band5_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_2_Freq
#define ET_LTE_Band5_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_3_Freq
#define ET_LTE_Band5_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_4_Freq
#define ET_LTE_Band5_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_5_Freq
#define ET_LTE_Band5_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_6_Freq
#define ET_LTE_Band5_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band5_SUB_7_Freq
#define ET_LTE_Band5_SUB_7_Freq           0
#endif

//Band 6 Sub-frequency
#ifndef ET_LTE_Band6_SUB_0_Freq
#define ET_LTE_Band6_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_1_Freq
#define ET_LTE_Band6_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_2_Freq
#define ET_LTE_Band6_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_3_Freq
#define ET_LTE_Band6_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_4_Freq
#define ET_LTE_Band6_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_5_Freq
#define ET_LTE_Band6_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_6_Freq
#define ET_LTE_Band6_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band6_SUB_7_Freq
#define ET_LTE_Band6_SUB_7_Freq           0
#endif

//Band 7 Sub-frequency
#ifndef ET_LTE_Band7_SUB_0_Freq
#define ET_LTE_Band7_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_1_Freq
#define ET_LTE_Band7_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_2_Freq
#define ET_LTE_Band7_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_3_Freq
#define ET_LTE_Band7_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_4_Freq
#define ET_LTE_Band7_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_5_Freq
#define ET_LTE_Band7_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_6_Freq
#define ET_LTE_Band7_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band7_SUB_7_Freq
#define ET_LTE_Band7_SUB_7_Freq           0
#endif

//Band 8 Sub-frequency
#ifndef ET_LTE_Band8_SUB_0_Freq
#define ET_LTE_Band8_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_1_Freq
#define ET_LTE_Band8_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_2_Freq
#define ET_LTE_Band8_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_3_Freq
#define ET_LTE_Band8_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_4_Freq
#define ET_LTE_Band8_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_5_Freq
#define ET_LTE_Band8_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_6_Freq
#define ET_LTE_Band8_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band8_SUB_7_Freq
#define ET_LTE_Band8_SUB_7_Freq           0
#endif

//Band 11 Sub-frequency
#ifndef ET_LTE_Band11_SUB_0_Freq
#define ET_LTE_Band11_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_1_Freq
#define ET_LTE_Band11_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_2_Freq
#define ET_LTE_Band11_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_3_Freq
#define ET_LTE_Band11_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_4_Freq
#define ET_LTE_Band11_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_5_Freq
#define ET_LTE_Band11_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_6_Freq
#define ET_LTE_Band11_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band11_SUB_7_Freq
#define ET_LTE_Band11_SUB_7_Freq           0
#endif

//Band 12 Sub-frequency
#ifndef ET_LTE_Band12_SUB_0_Freq
#define ET_LTE_Band12_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_1_Freq
#define ET_LTE_Band12_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_2_Freq
#define ET_LTE_Band12_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_3_Freq
#define ET_LTE_Band12_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_4_Freq
#define ET_LTE_Band12_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_5_Freq
#define ET_LTE_Band12_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_6_Freq
#define ET_LTE_Band12_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band12_SUB_7_Freq
#define ET_LTE_Band12_SUB_7_Freq           0
#endif

//Band 13 Sub-frequency
#ifndef ET_LTE_Band13_SUB_0_Freq
#define ET_LTE_Band13_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_1_Freq
#define ET_LTE_Band13_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_2_Freq
#define ET_LTE_Band13_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_3_Freq
#define ET_LTE_Band13_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_4_Freq
#define ET_LTE_Band13_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_5_Freq
#define ET_LTE_Band13_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_6_Freq
#define ET_LTE_Band13_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band13_SUB_7_Freq
#define ET_LTE_Band13_SUB_7_Freq           0
#endif

//Band 17 Sub-frequency
#ifndef ET_LTE_Band17_SUB_0_Freq
#define ET_LTE_Band17_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_1_Freq
#define ET_LTE_Band17_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_2_Freq
#define ET_LTE_Band17_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_3_Freq
#define ET_LTE_Band17_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_4_Freq
#define ET_LTE_Band17_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_5_Freq
#define ET_LTE_Band17_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_6_Freq
#define ET_LTE_Band17_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band17_SUB_7_Freq
#define ET_LTE_Band17_SUB_7_Freq           0
#endif

//Band 19 Sub-frequency
#ifndef ET_LTE_Band19_SUB_0_Freq
#define ET_LTE_Band19_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_1_Freq
#define ET_LTE_Band19_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_2_Freq
#define ET_LTE_Band19_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_3_Freq
#define ET_LTE_Band19_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_4_Freq
#define ET_LTE_Band19_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_5_Freq
#define ET_LTE_Band19_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_6_Freq
#define ET_LTE_Band19_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band19_SUB_7_Freq
#define ET_LTE_Band19_SUB_7_Freq           0
#endif

//Band 20 Sub-frequency
#ifndef ET_LTE_Band20_SUB_0_Freq
#define ET_LTE_Band20_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_1_Freq
#define ET_LTE_Band20_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_2_Freq
#define ET_LTE_Band20_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_3_Freq
#define ET_LTE_Band20_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_4_Freq
#define ET_LTE_Band20_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_5_Freq
#define ET_LTE_Band20_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_6_Freq
#define ET_LTE_Band20_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band20_SUB_7_Freq
#define ET_LTE_Band20_SUB_7_Freq           0
#endif

//Band 21 Sub-frequency
#ifndef ET_LTE_Band21_SUB_0_Freq
#define ET_LTE_Band21_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_1_Freq
#define ET_LTE_Band21_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_2_Freq
#define ET_LTE_Band21_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_3_Freq
#define ET_LTE_Band21_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_4_Freq
#define ET_LTE_Band21_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_5_Freq
#define ET_LTE_Band21_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_6_Freq
#define ET_LTE_Band21_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band21_SUB_7_Freq
#define ET_LTE_Band21_SUB_7_Freq           0
#endif

//Band 27 Sub-frequency
#ifndef ET_LTE_Band27_SUB_0_Freq
#define ET_LTE_Band27_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_1_Freq
#define ET_LTE_Band27_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_2_Freq
#define ET_LTE_Band27_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_3_Freq
#define ET_LTE_Band27_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_4_Freq
#define ET_LTE_Band27_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_5_Freq
#define ET_LTE_Band27_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_6_Freq
#define ET_LTE_Band27_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band27_SUB_7_Freq
#define ET_LTE_Band27_SUB_7_Freq           0
#endif

//Band 28 Sub-frequency
#ifndef ET_LTE_Band28_SUB_0_Freq
#define ET_LTE_Band28_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_1_Freq
#define ET_LTE_Band28_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_2_Freq
#define ET_LTE_Band28_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_3_Freq
#define ET_LTE_Band28_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_4_Freq
#define ET_LTE_Band28_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_5_Freq
#define ET_LTE_Band28_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_6_Freq
#define ET_LTE_Band28_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band28_SUB_7_Freq
#define ET_LTE_Band28_SUB_7_Freq           0
#endif

//Band 38 Sub-frequency
#ifndef ET_LTE_Band38_SUB_0_Freq
#define ET_LTE_Band38_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_1_Freq
#define ET_LTE_Band38_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_2_Freq
#define ET_LTE_Band38_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_3_Freq
#define ET_LTE_Band38_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_4_Freq
#define ET_LTE_Band38_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_5_Freq
#define ET_LTE_Band38_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_6_Freq
#define ET_LTE_Band38_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band38_SUB_7_Freq
#define ET_LTE_Band38_SUB_7_Freq           0
#endif

//Band 39 Sub-frequency
#ifndef ET_LTE_Band39_SUB_0_Freq
#define ET_LTE_Band39_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_1_Freq
#define ET_LTE_Band39_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_2_Freq
#define ET_LTE_Band39_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_3_Freq
#define ET_LTE_Band39_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_4_Freq
#define ET_LTE_Band39_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_5_Freq
#define ET_LTE_Band39_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_6_Freq
#define ET_LTE_Band39_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band39_SUB_7_Freq
#define ET_LTE_Band39_SUB_7_Freq           0
#endif

//Band 40 Sub-frequency
#ifndef ET_LTE_Band40_SUB_0_Freq
#define ET_LTE_Band40_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_1_Freq
#define ET_LTE_Band40_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_2_Freq
#define ET_LTE_Band40_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_3_Freq
#define ET_LTE_Band40_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_4_Freq
#define ET_LTE_Band40_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_5_Freq
#define ET_LTE_Band40_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_6_Freq
#define ET_LTE_Band40_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band40_SUB_7_Freq
#define ET_LTE_Band40_SUB_7_Freq           0
#endif

//Band 41 Sub-frequency
#ifndef ET_LTE_Band41_SUB_0_Freq
#define ET_LTE_Band41_SUB_0_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_1_Freq
#define ET_LTE_Band41_SUB_1_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_2_Freq
#define ET_LTE_Band41_SUB_2_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_3_Freq
#define ET_LTE_Band41_SUB_3_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_4_Freq
#define ET_LTE_Band41_SUB_4_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_5_Freq
#define ET_LTE_Band41_SUB_5_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_6_Freq
#define ET_LTE_Band41_SUB_6_Freq           0
#endif

#ifndef ET_LTE_Band41_SUB_7_Freq
#define ET_LTE_Band41_SUB_7_Freq           0
#endif

/*===============================================================================*/
// Should not modify the following parameters !!

/***************************
*   ET Define
***************************/
//ET table parameters
#define LTE_ET_TX_EVENT_NUM                  2
#define LTE_ET_TX_DATA_NUM                   6

#define LTE_ET_TPC_EVENT_NUM                 5
#define LTE_ET_SCH_TPC_EVENT_NUM             1
#define LTE_ET_PRE_TPC_EVENT_NUM             0
#define LTE_ET_SUBBAND_NUM_PER_DATA          8  //support 8 subbands
#define LTE_ET_SECTION_NUM                   9  //level 0~7 + SRS blanking,index by power level

#define LTE_ET_LUT_VPA_EVENT_NUM                 5
#define LTE_ET_SCH_LUT_VPA_EVENT_NUM             1
#define LTE_ET_PRE_LUT_VPA_EVENT_NUM             0
#define LTE_ET_LOOKUP_VAP_SECTION_NUM           15 //16:0.5:23,index by target power

#define LTE_ET_BW_SWITCH_EVENT_NUM               5
#define LTE_ET_SCH_BW_SWITCH_EVENT_NUM           1
#define LTE_ET_PRE_BW_SWITCH_EVENT_NUM           0
#define LTE_ET_BW_SWITCH_SECTION_NUM             5  //support 5 BW switch scenario


#ifdef __MTK_TARGET__
#define LTE_ET_SCH_SECTION_DATA_NUM              1  //temp assign 1 data
#define LTE_ET_PRE_SECTION_DATA_NUM              4  //temp assign 4 data
#define LTE_ET_SCH_LOOKUP_VPA_SECTION_DATA_NUM   1  //temp assign 1 data
#define LTE_ET_PRE_LOOKUP_VPA_SECTION_DATA_NUM   2  //temp assign 2 data
#define LTE_ET_SCH_BW_SWITCH_SECTION_DATA_NUM    1  //temp assign 1 data
#define LTE_ET_PRE_BW_SWITCH_SECTION_DATA_NUM    1  //temp assign 1 data
#else
#define LTE_ET_SCH_SECTION_DATA_NUM              5  //temp assign 1 data
#define LTE_ET_PRE_SECTION_DATA_NUM              5  //temp assign 4 data
#define LTE_ET_SCH_LOOKUP_VPA_SECTION_DATA_NUM   5  //temp assign 1 data
#define LTE_ET_PRE_LOOKUP_VPA_SECTION_DATA_NUM   5  //temp assign 2 data
#define LTE_ET_SCH_BW_SWITCH_SECTION_DATA_NUM    5  //temp assign 1 data
#define LTE_ET_PRE_BW_SWITCH_SECTION_DATA_NUM    5  //temp assign 1 data
#endif

//evt type
#define LTE_ET_TPC_BANK_SEL                 (LTE_MIPI_TPC_SET + 1)
#define LTE_ET_TPC_BANK_PRELOAD             (LTE_ET_TPC_BANK_SEL +1)

//element type
#define LTE_MIPI_ET                         (LTE_MIPI_PA_SEC + 1)
#define LTE_MIPI_ET_SEC                     (LTE_MIPI_ET     + 1)
#define LTE_MIPI_ET_LUT                     (LTE_MIPI_ET_SEC + 1)
#define LTE_MIPI_ET_LUT_SEC                 (LTE_MIPI_ET_LUT + 1)
#define LTE_MIPI_ET_BW                      (LTE_MIPI_ET_LUT_SEC + 1)
#define LTE_MIPI_ET_BW_SEC                  (LTE_MIPI_ET_BW + 1)

/***************************
*   ET Table Special Pattern
***************************/
//ET PA SECTION DATA PATTERN
#define LTE_ET_SEC_DATA0              0x2000
#define LTE_ET_SEC_DATA1              0x2001
#define LTE_ET_SEC_DATA2              0x2002
#define LTE_ET_SEC_DATA3              0x2003
#define LTE_ET_SEC_DATA4              0x2004

//ET PA LOOKUP_VPA_SECTION DATA PATTERN
#define LTE_ET_LOOKUP_VPA_SEC_DATA0   0x3000
#define LTE_ET_LOOKUP_VPA_SEC_DATA1   0x3001
#define LTE_ET_LOOKUP_VPA_SEC_DATA2   0x3002
#define LTE_ET_LOOKUP_VPA_SEC_DATA3   0x3003
#define LTE_ET_LOOKUP_VPA_SEC_DATA4   0x3004

//ET BW SWITCH DATA PATTERN
#define LTE_ET_BW_SEC_DATA0           0x4000
#define LTE_ET_BW_SEC_DATA1           0x4001
#define LTE_ET_BW_SEC_DATA2           0x4002
#define LTE_ET_BW_SEC_DATA3           0x4003
#define LTE_ET_BW_SEC_DATA4           0x4004

//ET FEATURE MASK
#define LTE_FEATURE_ET_BANK_SEL       0x0001
#define LTE_FEATURE_ET_BANK_PRELOAD   0x0002

#define LTE_ET_BW_SWITCH_RB_THRESHOLD0 9   //RB
#define LTE_ET_BW_SWITCH_RB_THRESHOLD1 13  //RB
#define LTE_ET_BW_SWITCH_RB_THRESHOLD2 26  //RB
#define LTE_ET_BW_SWITCH_RB_THRESHOLD3 51  //RB

//LTE_META_TEST_MODE
#define LTE_META_ET_NORMAL_MODE                   0x0000
#define LTE_META_ET_FORCE_FD_MODE                 0x0001
#define LTE_META_ET_STATIC_TEST_MODE              0x0002
#define LTE_META_ET_STATIC_TEST_MODE_WITH_PA      0x0003

#define ET_STATIC_TEST_MODE_BOUNDARY        10

#define ETM_REGISTER_INDEX_00          0x00
#define ETM_REGISTER_INDEX_01          0x01
#define ETM_REGISTER_INDEX_02          0x02
#define ETM_REGISTER_INDEX_03          0x03
#define ETM_REGISTER_INDEX_04          0x04
#define ETM_REGISTER_INDEX_05          0x05
#define ETM_REGISTER_INDEX_06          0x06
#define ETM_REGISTER_INDEX_07          0x07
#define ETM_REGISTER_INDEX_08          0x08
#define ETM_REGISTER_INDEX_09          0x09
#define ETM_REGISTER_INDEX_10          0x0A
#define ETM_REGISTER_INDEX_11          0x0B
#define ETM_REGISTER_INDEX_12          0x0C
#define ETM_REGISTER_INDEX_13          0x0D
#define ETM_REGISTER_INDEX_14          0x0E
#define ETM_REGISTER_INDEX_15          0x0F
#define ETM_REGISTER_INDEX_16          0x10
#define ETM_REGISTER_INDEX_17          0x11
#define ETM_REGISTER_INDEX_18          0x12
#define ETM_REGISTER_INDEX_19          0x13
#define ETM_REGISTER_INDEX_20          0x14
#define ETM_REGISTER_INDEX_21          0x15
#define ETM_REGISTER_INDEX_22          0x16
#define ETM_REGISTER_INDEX_23          0x17
#define ETM_REGISTER_INDEX_24          0x18
#define ETM_REGISTER_INDEX_25          0x19
#define ETM_REGISTER_INDEX_26          0x1A
#define ETM_REGISTER_INDEX_27          0x1B
#define ETM_REGISTER_INDEX_28          0x1C
#define ETM_REGISTER_INDEX_29          0x1D
#define ETM_REGISTER_INDEX_30          0x1E
#define ETM_REGISTER_INDEX_31          0x1F
#define ETM_REGISTER_INDEX_32          0x20
#define ETM_REGISTER_INDEX_40          0x28

#define LTE_Band_ET_SUBFREQ(a, b)                                                 ET_##a##_SUB_##b##_Freq
#define LTE_ET_SUBFREQ(band_ind, sub_freq)                                        LTE_Band_ET_SUBFREQ(band_ind, sub_freq)

#define LTE_ET_BANK_PRELOAD_OFFSET        0xFFFFFFFF
#define LTE_ET_PAVCC_SEC_INDEX            3

/*ET customization related structure*/

//ET Tx event/ET TPC event/ET LOOKUP VPA event
typedef struct
{
   kal_uint16 mipi_elm_type;          //mipi element type
   LTE_MIPI_DATA_STSP mipi_data_stsp; //data start stop
   kal_uint16 mipi_evt_type;          //event type
   kal_uint32 mipi_evt_offset;        //event offset
}LTE_ET_EVENT_TABLE_T;

//ET Tx Data
typedef struct
{
   kal_uint16 mipi_elm_type;          //mipi element type
   kal_uint16 mipi_port_sel;          //port selection
   kal_uint16 mipi_data_seq;          //data write sequence format
   kal_uint16 mipi_usid;
   LTE_MIPI_DATA_EXPAND_TABLE_T mipi_subband_data[LTE_ET_SUBBAND_NUM_PER_DATA];
}LTE_ET_DATA_SUBBAND_TABLE_T;

//ET TPC Data
typedef struct
{
   kal_uint16 mipi_elm_type;          //mipi element type
   kal_uint16 mipi_port_sel;          //port selection
   kal_uint16 mipi_data_seq;          //data write sequence format
   kal_uint16 mipi_usid;              //mipi usid
   kal_uint16 mipi_addr;              //mipi addr
   kal_uint16 mipi_data;              //mipi data
}LTE_ET_DATA_TABLE_T;

//ET TPC Section Data
typedef struct
{
   kal_uint16 mipi_sec_data[LTE_ET_PRE_SECTION_DATA_NUM];
}LTE_ET_SECTION_DATA_T;

typedef struct
{
   LTE_ET_SECTION_DATA_T mipi_tpc_section_table[LTE_ET_SECTION_NUM];
}LTE_ET_TPC_SECTION_TABLE_T;

//ET Lookup VPA Section Data
typedef struct
{
   kal_uint16 mipi_sec_data[LTE_ET_PRE_LOOKUP_VPA_SECTION_DATA_NUM];
}LTE_ET_LOOKUP_VPA_SECTION_DATA_T;

typedef struct
{
   kal_uint16 mipi_subband_freq;
   LTE_ET_LOOKUP_VPA_SECTION_DATA_T et_lut_vpa_sec_data_table[LTE_ET_LOOKUP_VAP_SECTION_NUM];
}LTE_ET_LOOKUP_VPA_SECTION_TABLE_T;

//ET BW Switch Data
typedef struct
{
   kal_uint16 mipi_sec_data[LTE_ET_PRE_BW_SWITCH_SECTION_DATA_NUM];
}LTE_ET_BW_SWITCH_SECTION_DATA_T;

extern kal_uint16 LTE_ETM_MIPI_port_number;
extern kal_uint32  LTE_EtVinLut_SIZE_TABLE[];
extern kal_uint16 LTE_BANK_SEL_OR_VALUE[ET_REG_BANKS_NUMBER];

#if IS_ET_FRONT_END_ENABLE

extern LTE_RfcEtVinLutPerBand_T LTE_Band1_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band2_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band3_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band4_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band5_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band6_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band7_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band8_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band9_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band11_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band12_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band13_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band14_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band17_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band18_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band19_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band20_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band21_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band26_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band27_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band28_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band34_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band38_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band39_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band40_EtVinLutData;
extern LTE_RfcEtVinLutPerBand_T LTE_Band41_EtVinLutData;

#endif   // #if IS_ET_FRONT_END_ENABLE

#endif //_EPHY_RF_ET_CUSTOM_DATA_H_
