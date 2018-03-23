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
 * ephy_rf_ET_custom_data.c
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
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#include "kal_general_types.h"
#include "kal_public_api.h"

#include "el1_rf_public.h"
#include "el1_rf_common.h"

#include "ephy_rf_ET_custom_data.h"
#include "lte_custom_mipi.h"
#include "lte_custom_drdi.h"   // for DRDI feature

/*===============================================================================*/

kal_uint16 LTE_ET_ENABLE = IS_ET_FRONT_END_ENABLE;

kal_uint16 LTE_ETM_chip_type = ETM_CHIP_TYPE;

kal_uint8  LTE_ET_MIPI_USID = MIPI_USID_ET;

kal_uint16 LTE_ETM_MIPI_port_number = MIPI_PORT_ET;

kal_uint8 ET_OUTER_LOOP_GAIN[ LTE_TARGET_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR1 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR2 ),   
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR3 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR4 ),   
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR5 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR6 ),   
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR7 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR8 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR9 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR10 ),   
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR11 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR12 ),   
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR13 ),
   LTE_ET_OUTER_LOOP_GAIN_SETTING( BAND_INDICATOR14 )
};

kal_uint16 ET_VPA_OFFSET_VOLTAGE[ LTE_TARGET_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR1 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR2 ),   
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR3 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR4 ),   
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR5 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR6 ),   
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR7 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR8 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR9 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR10 ),   
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR11 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR12 ),   
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR13 ),
   LTE_ET_VPA_OFFSET_VOLTAGE_SETTING( BAND_INDICATOR14 )
};

kal_uint16 ET_MINIMUM_OUTPUT_VOLTAGE[ LTE_TARGET_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR1 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR2 ),   
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR3 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR4 ),   
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR5 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR6 ),   
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR7 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR8 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR9 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR10 ),   
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR11 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR12 ),   
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR13 ),
   LTE_ET_MINIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR14 )
};

kal_uint16 ET_MAXIMUM_OUTPUT_VOLTAGE[ LTE_TARGET_MAX_SUPPORT_BAND_NUM ] =
{
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR1 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR2 ),   
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR3 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR4 ),   
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR5 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR6 ),   
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR7 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR8 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR9 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR10 ),   
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR11 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR12 ),   
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR13 ),
   LTE_ET_MAXIMUM_OUTPUT_VOLTAGE_SETTING( BAND_INDICATOR14 )
};

kal_uint16 LTE_ET_SUBFREQ_GROUP[EL1_TARGET_MAX_SUPPORT_BAND_NUM][LTE_ET_SUBBAND_NUM_PER_DATA] =
{
   //BAND_INDICATOR1,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR1, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR2,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR2, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR3,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR3, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR4,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR4, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR5,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR5, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR6,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR6, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR7,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR7, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR8,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR8, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR9,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR9, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR10,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR10, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR11,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR11, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR12,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR12, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR13,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR13, 7/*sub_freq*/)),
   },
   //BAND_INDICATOR14,
   {
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 0/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 1/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 2/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 3/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 4/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 5/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 6/*sub_freq*/)),
      (LTE_ET_SUBFREQ(BAND_INDICATOR14, 7/*sub_freq*/)),
   },
};

kal_uint16 LTE_BANK_SEL_OR_VALUE[ET_REG_BANKS_NUMBER] =
{
    0x00,//bank selection 0
    0x04,//bank selection 1
    0x08,//bank selection 2
    0x0C,//bank selection 3
};

LTE_ET_EVENT_TABLE_T LTE_BandNone_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset     */
   /*                        { start, stop },                      ( us )         */
   { /* 0  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_BandNone_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr , data}, { subband freq /*1*/     , addr , data}, { subband freq /*2*/     , addr , data}, { subband freq /*3*/     , addr , data}, { subband freq /*4*/     , addr , data}, { subband freq /*5*/     , addr , data}, { subband freq /*6*/     , addr , data}, { subband freq /*7*/     , addr , data},} },
   { /* 0  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0    , 0   }, { 0                      , 0    , 0   }, { 0                      , 0    , 0   }, { 0                      , 0    , 0   }, { 0                      , 0    , 0   }, { 0                      , 0    , 0   }, { 0                      , 0    , 0   }, { 0                      , 0    , 0   },} },
};

/*ET control event and data align with Tx TPC index*/
/*Design for FD mode volatage setting and ET mode warm up sequence base on TPC index*/
LTE_ET_EVENT_TABLE_T LTE_BandNone_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset     */
   /*                        { start, stop },                      ( us )         */
   { /* 0  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_DATA_TABLE_T LTE_BandNone_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_BandNone_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type   , port_sel       , data_seq, data
   {/* 0  */ LTE_MIPI_NULL  , 0              , 0       , 0    }, // Data ref. by PA Section table idx 0
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      0,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_DATA_TABLE_T LTE_BandNone_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_TPC_SECTION_TABLE_T LTE_BandNone_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:0
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:1
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:2
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:3
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:4
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:5
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:6
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//TPC lvl idx:7
      {{ 0x0, 0x0, 0x0, 0x0, 0x0}},//SRS blanking
   }
};

/*ET control event and data based on Pout(Tx output target power) for TPC index 7*/
LTE_ET_EVENT_TABLE_T LTE_BandNone_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type           , evt_offset     */
   /*                        { start, stop },                      ( us )         */
   { /* 0  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0              },
};

LTE_ET_EVENT_TABLE_T LTE_BandNone_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_BandNone_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x0, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

#if IS_ET_FRONT_END_ENABLE

/* Design Note:
 * $Date : 20140107
 * $Description:
 *
 * LTE_ET_INITIAL_CW would be merge into ERF_MIPI_INITIAL_DATA
 * LTE_ET_SLEEP_CW would be merge into ERF_MIPI_SLEEP_DATA
*/
LTE_MIPI_IMM_DATA_TABLE_T LTE_ET_INITIAL_CW[] =
{
   // elm type   ,       port_sel      ,          data_seq         ,          USID       ,              addr ,                                data  ,              wait_time(us)
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_00, 0x10      } , WAITUSCNT(0)   },//enter stdby mode
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_26, 0x00      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_02, 0x00      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_04, 0x00      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_06, 0x62      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_08, 0x00      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_10, 0x00      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W        , MIPI_USID_ET  , {ETM_REGISTER_INDEX_12, 0x62      } , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W_EXT_1ST, MIPI_USID_ET  , {ETM_REGISTER_INDEX_32, 0x00000000} , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W_EXT_END, MIPI_USID_ET  , {ETM_REGISTER_INDEX_32, 0x00000000} , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W_EXT_1ST, MIPI_USID_ET  , {ETM_REGISTER_INDEX_40, 0x00000020} , WAITUSCNT(0)   },
   {LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W_EXT_END, MIPI_USID_ET  , {ETM_REGISTER_INDEX_40, 0x00000000} , WAITUSCNT(0)   },
   {LTE_MIPI_END_PATTERN,0,0,0,{0,0},0},
};

LTE_MIPI_IMM_DATA_TABLE_T LTE_ET_SLEEP_CW[] =
{
   // elm type  ,      port_sel       ,           data_seq  ,    USID      ,              addr ,                                data  ,    wait_time(us)
   {LTE_MIPI_ET , MIPI_PORT_ET   , LTE_REG_W , MIPI_USID_ET , {ETM_REGISTER_INDEX_00, 0x10} , WAITUSCNT(0) },//enter stdby mode before VIO deasserted
   {LTE_MIPI_END_PATTERN,0,0,0,{0,0},0},
};

LTE_ET_EVENT_TABLE_T LTE_Band1_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band2_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band3_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band5_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band6_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band7_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band8_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band11_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band17_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band19_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band20_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band21_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band28_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band38_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band39_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band40_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T LTE_Band41_ET_TX_EVENT[] =
{
   /* No.     elm type     , data idx                                                       , evt_type           , evt_offset     */
   /*                        { start,                        stop                          },                      ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { LTE_TX_ON_DATA_START_ADDRESS,  LTE_TX_ON_DATA_STOP_ADDRESS  }, LTE_MIPI_TRX_ON    , LTE_ET_TX_ON0 },//ET On
   { /* 1  */ LTE_MIPI_ET  , { LTE_TX_OFF_DATA_START_ADDRESS, LTE_TX_OFF_DATA_STOP_ADDRESS }, LTE_MIPI_TRX_OFF   , LTE_ET_TX_OFF0},//ET Off
   { /* 2  */ LTE_MIPI_NULL, { 0,                             0                            }, LTE_MIPI_EVENT_NULL, 0             },
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_TX_EVENT_TABLE[] =
{
      LTE_BandNone_ET_TX_EVENT,
      LTE_ET_TX_EVENT(BAND_INDICATOR1 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR2 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR3 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR4 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR5 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR6 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR7 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR8 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR9 ),
      LTE_ET_TX_EVENT(BAND_INDICATOR10),
      LTE_ET_TX_EVENT(BAND_INDICATOR11),
      LTE_ET_TX_EVENT(BAND_INDICATOR12),
      LTE_ET_TX_EVENT(BAND_INDICATOR13),
      LTE_ET_TX_EVENT(BAND_INDICATOR14),
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band1_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data}, { subband freq /*1*/     , addr , data}, { subband freq /*2*/     , addr , data}, { subband freq /*3*/     , addr , data}, { subband freq /*4*/     , addr , data}, { subband freq /*5*/     , addr , data}, { subband freq /*6*/     , addr , data}, { subband freq /*7*/     , addr , data},} },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band1_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band1_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band1_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band1_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band1_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set part enable
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band1_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band1_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//set back to stdby mode
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band1_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band1_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//set to FD mode
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band1_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band1_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//enable Main SW
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band1_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band1_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//Set the FD as 0 V
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band2_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data},                                 { subband freq /*1*/     , addr,                  data},                                 { subband freq /*2*/     , addr,                  data},                                 { subband freq /*3*/     , addr,                  data},                                 { subband freq /*4*/     , addr,                  data},                                 { subband freq /*5*/     , addr,                  data},                                 { subband freq /*6*/     , addr,                  data},                                 { subband freq /*7*/     , addr,                  data},                                
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band2_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band2_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band2_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band2_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band2_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band2_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band2_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band2_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band2_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band2_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band2_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band2_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band2_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band3_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data},                                 { subband freq /*1*/     , addr,                  data},                                 { subband freq /*2*/     , addr,                  data},                                 { subband freq /*3*/     , addr,                  data},                                 { subband freq /*4*/     , addr,                  data},                                 { subband freq /*5*/     , addr,                  data},                                 { subband freq /*6*/     , addr,                  data},                                 { subband freq /*7*/     , addr,                  data},                                } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band3_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band3_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band3_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band3_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band3_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band3_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band3_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band3_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band3_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band3_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band3_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band3_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band3_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band5_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data},                                 { subband freq /*1*/     , addr,                  data},                                 { subband freq /*2*/     , addr,                  data},                                 { subband freq /*3*/     , addr,                  data},                                 { subband freq /*4*/     , addr,                  data},                                 { subband freq /*5*/     , addr,                  data},                                 { subband freq /*6*/     , addr,                  data},                                 { subband freq /*7*/     , addr,                  data},                                } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band5_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band5_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band5_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band5_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band5_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band5_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band5_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band5_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band5_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band5_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band5_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band5_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band5_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band6_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data},                                 { subband freq /*1*/     , addr,                  data},                                 { subband freq /*2*/     , addr,                  data},                                 { subband freq /*3*/     , addr,                  data},                                 { subband freq /*4*/     , addr,                  data},                                 { subband freq /*5*/     , addr,                  data},                                 { subband freq /*6*/     , addr,                  data},                                 { subband freq /*7*/     , addr,                  data},                                } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band6_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band6_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band6_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band6_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band6_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band6_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band6_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band6_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band6_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band6_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band6_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band6_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band6_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band7_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data},                                 { subband freq /*1*/     , addr,                  data},                                 { subband freq /*2*/     , addr,                  data},                                 { subband freq /*3*/     , addr,                  data},                                 { subband freq /*4*/     , addr,                  data},                                 { subband freq /*5*/     , addr,                  data},                                 { subband freq /*6*/     , addr,                  data},                                 { subband freq /*7*/     , addr,                  data},                                } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band7_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band7_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band7_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band7_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band7_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band7_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band7_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band7_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band7_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band7_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band7_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band7_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band7_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band8_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/     , addr,                  data},                                 { subband freq /*1*/     , addr,                  data},                                 { subband freq /*2*/     , addr,                  data},                                 { subband freq /*3*/     , addr,                  data},                                 { subband freq /*4*/     , addr,                  data},                                 { subband freq /*5*/     , addr,                  data},                                 { subband freq /*6*/     , addr,                  data},                                 { subband freq /*7*/     , addr,                  data},                                } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band8_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band8_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band8_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band8_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 { ET_LTE_Band8_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band8_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 { ET_LTE_Band8_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band8_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 { ET_LTE_Band8_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band8_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 { ET_LTE_Band8_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band8_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 { ET_LTE_Band8_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                 { 0                      , 0                    , 0   },                                } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band11_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band11_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band11_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band11_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band11_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band11_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band11_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band11_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band11_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band11_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band11_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band11_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band11_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band11_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                       , 0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band17_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band17_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band17_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band17_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band17_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band17_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band17_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band17_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band17_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band17_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band17_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band17_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band17_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band17_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                       , 0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band19_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band19_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band19_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band19_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band19_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band19_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band19_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band19_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band19_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band19_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band19_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band19_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band19_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band19_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                       , 0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band20_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band20_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band20_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band20_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band20_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band20_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band20_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band20_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band20_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band20_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band20_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band20_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band20_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band20_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band21_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band21_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band21_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band21_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band21_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band21_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band21_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band21_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band21_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band21_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band21_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band21_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band21_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band21_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band28_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band28_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band28_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band28_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band28_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band28_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band28_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band28_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band28_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band28_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band28_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band28_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band28_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band28_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band38_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band38_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band38_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band38_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band38_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band38_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band38_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band38_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band38_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band38_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band38_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band38_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band38_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band38_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band39_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band39_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band39_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band39_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band39_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band39_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band39_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band39_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band39_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band39_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band39_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band39_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band39_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band39_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band40_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band40_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band40_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band40_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band40_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band40_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band40_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band40_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band40_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band40_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band40_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band40_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band40_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band40_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T LTE_Band41_ET_TX_DATA[] =
{
   //No.      elm type     , port_sel      , data_seq , USID        , { { subband freq /*0*/      , addr,                  data},                                  { subband freq /*1*/      , addr,                  data},                                  { subband freq /*2*/      , addr,                  data},                                  { subband freq /*3*/      , addr,                  data},                                  { subband freq /*4*/      , addr,                  data},                                  { subband freq /*5*/      , addr,                  data},                                  { subband freq /*6*/      , addr,                  data},                                  { subband freq /*7*/      , addr,                  data},                                 } },
   { /* 0  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band41_SUB_0_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_1_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_2_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_3_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_4_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_5_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_6_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING}, { ET_LTE_Band41_SUB_7_Freq, ETM_REGISTER_INDEX_25, LTE_Band41_ET_OUTER_LOOP_GAIN_SETTING},} },//set to FD mode
   { /* 1  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band41_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x11},                                  { ET_LTE_Band41_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x11},                                 } },//set to FD mode
   { /* 2  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band41_SUB_0_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_1_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_2_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_3_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_4_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_5_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_6_Freq, ETM_REGISTER_INDEX_00, 0x10},                                  { ET_LTE_Band41_SUB_7_Freq, ETM_REGISTER_INDEX_00, 0x10},                                 } },//enable Main SW
   { /* 3  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band41_SUB_0_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_1_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_2_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_3_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_4_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_5_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_6_Freq, ETM_REGISTER_INDEX_02, 0x00},                                  { ET_LTE_Band41_SUB_7_Freq, ETM_REGISTER_INDEX_02, 0x00},                                 } },//Set the FD as 0 V
   { /* 4  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band41_SUB_0_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_1_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_2_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_3_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_4_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_5_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_6_Freq, ETM_REGISTER_INDEX_04, 0x00},                                  { ET_LTE_Band41_SUB_7_Freq, ETM_REGISTER_INDEX_04, 0x00},                                 } },//set part enable
   { /* 5  */ LTE_MIPI_ET  , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, { { ET_LTE_Band41_SUB_0_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_1_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_2_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_3_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_4_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_5_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_6_Freq, ETM_REGISTER_INDEX_06, 0x62},                                  { ET_LTE_Band41_SUB_7_Freq, ETM_REGISTER_INDEX_06, 0x62},                                 } },//set back to stdby mode
   { /* 6  */ LTE_MIPI_NULL, 0             , 0        , 0           , { { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                  { 0                      ,  0                    , 0   },                                 } },
};

LTE_ET_DATA_SUBBAND_TABLE_T*  LTE_ET_TX_DATA_TABLE[] =
{
      LTE_BandNone_ET_TX_DATA,
      LTE_ET_TX_DATA(BAND_INDICATOR1 ),
      LTE_ET_TX_DATA(BAND_INDICATOR2 ),
      LTE_ET_TX_DATA(BAND_INDICATOR3 ),
      LTE_ET_TX_DATA(BAND_INDICATOR4 ),
      LTE_ET_TX_DATA(BAND_INDICATOR5 ),
      LTE_ET_TX_DATA(BAND_INDICATOR6 ),
      LTE_ET_TX_DATA(BAND_INDICATOR7 ),
      LTE_ET_TX_DATA(BAND_INDICATOR8 ),
      LTE_ET_TX_DATA(BAND_INDICATOR9 ),
      LTE_ET_TX_DATA(BAND_INDICATOR10),
      LTE_ET_TX_DATA(BAND_INDICATOR11),
      LTE_ET_TX_DATA(BAND_INDICATOR12),
      LTE_ET_TX_DATA(BAND_INDICATOR13),
      LTE_ET_TX_DATA(BAND_INDICATOR14),
};

LTE_ET_EVENT_TABLE_T LTE_Band1_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band2_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band3_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band5_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band6_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band7_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band8_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band11_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band17_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band19_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band20_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band21_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band28_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band38_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band39_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band40_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band41_ET_TPC_EVENT[] =
{
   /* No.     elm type     , data idx       , evt_type               , evt_offset     */
   /*                        { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET  , { 0    , 0    }, LTE_ET_TPC_BANK_SEL    , LTE_ET_TPC_OFFSET         },
   { /* 1  */ LTE_MIPI_ET  , { 1    , 4    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 2  */ LTE_MIPI_NULL, { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_TPC_EVENT_TABLE[] =
{
      LTE_BandNone_ET_TPC_EVENT,
      LTE_ET_TPC_EVENT(BAND_INDICATOR1 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR2 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR3 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR4 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR5 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR6 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR7 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR8 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR9 ),
      LTE_ET_TPC_EVENT(BAND_INDICATOR10),
      LTE_ET_TPC_EVENT(BAND_INDICATOR11),
      LTE_ET_TPC_EVENT(BAND_INDICATOR12),
      LTE_ET_TPC_EVENT(BAND_INDICATOR13),
      LTE_ET_TPC_EVENT(BAND_INDICATOR14),
};

LTE_ET_DATA_TABLE_T LTE_Band1_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band1_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band2_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band2_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band3_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band3_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band5_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band5_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band6_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band6_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band7_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band7_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band8_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band8_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band11_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band11_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band17_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band17_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band19_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band19_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band20_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , 0x78            },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band21_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band21_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band28_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band28_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band38_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band38_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band39_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band39_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band40_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band40_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T LTE_Band41_ET_TPC_DATA[] =
{
   //No.     elm type       , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x00   , 0x11            },
   {/* 1  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x02   , LTE_ET_SEC_DATA0},
   {/* 2  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x06   , LTE_ET_SEC_DATA1},
   {/* 3  */ LTE_MIPI_ET_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_SEC_DATA2},
   {/* 4  */ LTE_MIPI_ET    , MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x01   , LTE_Band41_ET_VPA_OFFSET_VOLTAGE_REGISTER_VALUE },
   {/* 5  */ LTE_MIPI_NULL  , 0             , 0        , 0           , 0      , 0               },
};

LTE_ET_DATA_TABLE_T*  LTE_ET_TPC_DATA_TABLE[] =
{
      LTE_BandNone_ET_TPC_DATA,
      LTE_ET_TPC_DATA(BAND_INDICATOR1 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR2 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR3 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR4 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR5 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR6 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR7 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR8 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR9 ),
      LTE_ET_TPC_DATA(BAND_INDICATOR10),
      LTE_ET_TPC_DATA(BAND_INDICATOR11),
      LTE_ET_TPC_DATA(BAND_INDICATOR12),
      LTE_ET_TPC_DATA(BAND_INDICATOR13),
      LTE_ET_TPC_DATA(BAND_INDICATOR14),
};

LTE_ET_DATA_TABLE_T LTE_Band1_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band2_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band3_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band5_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band6_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band7_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band8_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band11_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band17_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band19_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band20_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band21_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band28_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band38_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band39_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band40_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T LTE_Band41_ET_LOOKUP_VPA_DATA[] =
{
   //No.     elm type           , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x05   , LTE_ET_LOOKUP_VPA_SEC_DATA0},
   {/* 1  */ LTE_MIPI_ET_LUT_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x04   , LTE_ET_LOOKUP_VPA_SEC_DATA1},
   {/* 2  */ LTE_MIPI_NULL      , 0             , 0        , 0           , 0      , 0                          },
};

LTE_ET_DATA_TABLE_T*  LTE_ET_LOOKUP_VPA_DATA_TABLE[] =
{
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR1 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR2 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR3 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR4 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR5 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR6 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR7 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR8 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR9 ),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR10),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR11),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR12),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR13),
      LTE_ET_LOOKUP_VPA_DATA(BAND_INDICATOR14),
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band1_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band1_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band1_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band1_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band1_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band1_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band1_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band1_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band1_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band2_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band2_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band2_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band2_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band2_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band2_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band2_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band2_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band2_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band3_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band3_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band3_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band3_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band3_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band3_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band3_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band3_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band3_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band5_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band5_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band5_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band5_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band5_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band5_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band5_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band5_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band5_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band6_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band6_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band6_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band6_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band6_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band6_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band6_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band6_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band6_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band7_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band7_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band7_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band7_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band7_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band7_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band7_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band7_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band7_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band8_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band8_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band8_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band8_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band8_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band8_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band8_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band8_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band8_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band11_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band11_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band11_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band11_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band11_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band11_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band11_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band11_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band11_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};


LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band17_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band17_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band17_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band17_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band17_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band17_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band17_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band17_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band17_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band19_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band19_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band19_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band19_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band19_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band19_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band19_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band19_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band19_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band20_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band20_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band20_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band20_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band20_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band20_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band20_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band20_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band20_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band21_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band21_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band21_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band21_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band21_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band21_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band21_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band21_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band21_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band28_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band28_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band28_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band28_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band28_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band28_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band28_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band28_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band28_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band38_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band38_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band38_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band38_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band38_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band38_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band38_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band38_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band38_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band39_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band39_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band39_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band39_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band39_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band39_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band39_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band39_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band39_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band40_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band40_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band40_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band40_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band40_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band40_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band40_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band40_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band40_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T LTE_Band41_ET_LOOKUP_VPA_SECTION_DATA[LTE_ET_SUBBAND_NUM_PER_DATA]=
{
   /*sub freq 0*/
   {
      ET_LTE_Band41_SUB_0_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 1*/
   {
      ET_LTE_Band41_SUB_1_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 2*/
   {
      ET_LTE_Band41_SUB_2_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 3*/
   {
      ET_LTE_Band41_SUB_3_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 4*/
   {
      ET_LTE_Band41_SUB_4_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 5*/
   {
      ET_LTE_Band41_SUB_5_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 6*/
   {
      ET_LTE_Band41_SUB_6_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },

   /*sub freq 7*/
   {
      ET_LTE_Band41_SUB_7_Freq,/*100kHz*/
      {
         //SEC_DATA0, SEC_DATA1, SEC_DATA2,...
         /* 0*/{{ 0x45, 0xAE, 0x0, 0x0, 0x0}},
         /* 1*/{{ 0x43, 0xB0, 0x0, 0x0, 0x0}},
         /* 2*/{{ 0x40, 0xB2, 0x0, 0x0, 0x0}},
         /* 3*/{{ 0x3E, 0xB5, 0x0, 0x0, 0x0}},
         /* 4*/{{ 0x3C, 0xB6, 0x0, 0x0, 0x0}},
         /* 5*/{{ 0x3A, 0xAD, 0x0, 0x0, 0x0}},
         /* 6*/{{ 0x38, 0xA4, 0x0, 0x0, 0x0}},
         /* 7*/{{ 0x37, 0x9B, 0x0, 0x0, 0x0}},
         /* 8*/{{ 0x36, 0x94, 0x0, 0x0, 0x0}},
         /* 9*/{{ 0x35, 0x8D, 0x0, 0x0, 0x0}},
         /*10*/{{ 0x33, 0x87, 0x0, 0x0, 0x0}},
         /*11*/{{ 0x32, 0x81, 0x0, 0x0, 0x0}},
         /*12*/{{ 0x31, 0x7C, 0x0, 0x0, 0x0}},
         /*13*/{{ 0x30, 0x77, 0x0, 0x0, 0x0}},
         /*14*/{{ 0x2F, 0x72, 0x0, 0x0, 0x0}},
       }
   },
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T*  LTE_ET_LOOKUP_VPA_SECTION_DATA_TABLE[] =
{
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR1 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR2 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR3 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR4 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR5 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR6 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR7 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR8 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR9 ),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR10),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR11),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR12),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR13),
      LTE_ET_LOOKUP_VPA_SECTION_DATA(BAND_INDICATOR14),
};

LTE_ET_DATA_TABLE_T LTE_Band1_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band2_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band3_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band5_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band6_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band7_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band8_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band11_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band17_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band19_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band20_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band21_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band28_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band38_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band39_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band40_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T LTE_Band41_ET_BW_SWITCH_DATA[] =
{
   //No.     elm type          , port_sel      , data_seq , USID        , address, data
   {/* 0  */ LTE_MIPI_ET_BW_SEC, MIPI_PORT_ET  , LTE_REG_W, MIPI_USID_ET, 0x03   , LTE_ET_BW_SEC_DATA0},
   {/* 1  */ LTE_MIPI_NULL     , 0             , 0        , 0           , 0      , 0                  },
};

LTE_ET_DATA_TABLE_T*  LTE_ET_BW_SWITCH_DATA_TABLE[] =
{
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR1 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR2 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR3 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR4 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR5 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR6 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR7 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR8 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR9 ),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR10),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR11),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR12),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR13),
      LTE_ET_BW_SWITCH_DATA(BAND_INDICATOR14),
};

kal_uint32 LTE_EtVinLut_SIZE_TABLE[ LTE_AUGMENTED_BAND_ARRAY_NUM ] =
{
      sizeof( LTE_BandNone_EtVinLutData ),
      sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR1  ) ),
      sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR2  ) ),
      sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR3  ) ),
      sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR4  ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR5  ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR6  ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR7  ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR8  ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR9  ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR10 ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR11 ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR12 ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR13 ) ),
	  sizeof( LTE_ET_VIN_LUT( BAND_INDICATOR14 ) ),
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band1_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band2_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band3_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band5_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band6_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band7_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band8_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band11_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band17_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band19_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band20_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band21_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band28_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band38_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band39_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band40_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T LTE_Band41_ET_TPC_SECTION_DATA =
{
   {
      // PAEn=1
      //PA_SEC_DATA0, PA_SEC_DATA1, PA_SEC_DATA2,...
      {{ 0x00, 0x72, 0x29, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x3D, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x47, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x51, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x65, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x79, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x8D, 0x0, 0x0}},
      {{ 0x03, 0x73, 0xAB, 0x0, 0x0}},
      {{ 0x00, 0x72, 0x01, 0x0, 0x0}},//SRS blanking
   }
};

LTE_ET_TPC_SECTION_TABLE_T*  LTE_ET_TPC_SECTION_DATA_TABLE[] =
{
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR1 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR2 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR3 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR4 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR5 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR6 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR7 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR8 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR9 ),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR10),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR11),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR12),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR13),
      &LTE_ET_TPC_SECTION_DATA(BAND_INDICATOR14),
};

LTE_ET_EVENT_TABLE_T LTE_Band1_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band2_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band3_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band5_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band6_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band7_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band8_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band11_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band17_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band19_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band20_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band21_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band28_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band38_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band39_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band40_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T LTE_Band41_ET_LOOKUP_VPA_EVENT[] =
{
   /* No.     elm type       , data idx       , evt_type               , evt_offset     */
   /*                          { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_LUT, { 0    , 1    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL  , { 0    , 0    }, LTE_MIPI_EVENT_NULL    , 0                         },
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_LOOKUP_VPA_EVENT_TABLE[] =
{
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR1 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR2 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR3 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR4 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR5 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR6 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR7 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR8 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR9 ),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR10),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR11),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR12),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR13),
      LTE_ET_LOOKUP_VPA_EVENT(BAND_INDICATOR14),
};

LTE_ET_EVENT_TABLE_T LTE_Band1_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band2_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band3_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band5_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band6_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band7_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band8_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band11_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band17_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band19_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band20_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band21_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band28_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band38_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band39_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band40_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T LTE_Band41_ET_BW_SWITCH_EVENT[] =
{
   /* No.     elm type      , data idx       , evt_type               , evt_offset     */
   /*                         { start, stop },                          ( us )         */
   { /* 0  */ LTE_MIPI_ET_BW, { 0    , 0    }, LTE_ET_TPC_BANK_PRELOAD, LTE_ET_BANK_PRELOAD_OFFSET},
   { /* 1  */ LTE_MIPI_NULL , { 0    , 0    }, LTE_MIPI_EVENT_NULL, 0                             },
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_BW_SWITCH_EVENT_TABLE[] =
{
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR1 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR2 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR3 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR4 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR5 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR6 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR7 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR8 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR9 ),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR10),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR11),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR12),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR13),
      LTE_ET_BW_SWITCH_EVENT(BAND_INDICATOR14),
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band1_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band2_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band3_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band5_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band6_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band7_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band8_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band11_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band17_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band19_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band20_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band21_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band28_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band38_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band39_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band40_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T LTE_Band41_ET_BW_SWITCH_SECTION_DATA[LTE_ET_BW_SWITCH_SECTION_NUM] =
{
   //SEC_DATA0, SEC_DATA1,
   /* 0*/{{ 0xAD, 0x0, 0x0, 0x0, 0x0}},//1~8RB
   /* 1*/{{ 0xA5, 0x0, 0x0, 0x0, 0x0}},//9~12RB
   /* 2*/{{ 0xB4, 0x0, 0x0, 0x0, 0x0}},//13~25RB
   /* 3*/{{ 0x02, 0x0, 0x0, 0x0, 0x0}},//26~50RB
   /* 4*/{{ 0x53, 0x0, 0x0, 0x0, 0x0}},//51~100RB
};

LTE_ET_BW_SWITCH_SECTION_DATA_T*  LTE_ET_BW_SWITCH_SECTION_DATA_TABLE[] =
{
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR1 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR2 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR3 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR4 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR5 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR6 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR7 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR8 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR9 ),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR10),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR11),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR12),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR13),
      LTE_ET_BW_SWITCH_SECTION_DATA(BAND_INDICATOR14),
};

#else   // #if IS_ET_FRONT_END_ENABLE

LTE_MIPI_IMM_DATA_TABLE_T LTE_ET_INITIAL_CW[] =
{
   // elm type   ,       port_sel      ,          data_seq         ,          USID       ,              addr ,                                data  ,              wait_time(us)
   {LTE_MIPI_END_PATTERN,0,0,0,{0,0},0},
};

LTE_MIPI_IMM_DATA_TABLE_T LTE_ET_SLEEP_CW[] =
{
   // elm type  ,      port_sel       ,           data_seq  ,    USID      ,              addr ,                                data  ,    wait_time(us)
   {LTE_MIPI_END_PATTERN,0,0,0,{0,0},0},
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_TX_EVENT_TABLE[] =
{
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
      LTE_BandNone_ET_TX_EVENT,
};

LTE_ET_DATA_SUBBAND_TABLE_T*  LTE_ET_TX_DATA_TABLE[] =
{
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
	  LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
      LTE_BandNone_ET_TX_DATA,
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_TPC_EVENT_TABLE[] =
{
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
      LTE_BandNone_ET_TPC_EVENT,
};

LTE_ET_DATA_TABLE_T*  LTE_ET_TPC_DATA_TABLE[] =
{
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
      LTE_BandNone_ET_TPC_DATA,
};

LTE_ET_DATA_TABLE_T*  LTE_ET_LOOKUP_VPA_DATA_TABLE[] =
{
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_DATA,
};

LTE_ET_LOOKUP_VPA_SECTION_TABLE_T*  LTE_ET_LOOKUP_VPA_SECTION_DATA_TABLE[] =
{
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
      LTE_BandNone_ET_LOOKUP_VPA_SECTION_DATA,
};

LTE_ET_DATA_TABLE_T*  LTE_ET_BW_SWITCH_DATA_TABLE[] =
{
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
      LTE_BandNone_ET_BW_SWITCH_DATA,
};

kal_uint32 LTE_EtVinLut_SIZE_TABLE[ LTE_AUGMENTED_BAND_ARRAY_NUM ] =
{
      sizeof( LTE_BandNone_EtVinLutData ),
      sizeof( LTE_BandNone_EtVinLutData ),
      sizeof( LTE_BandNone_EtVinLutData ),
      sizeof( LTE_BandNone_EtVinLutData ),
      sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
	  sizeof( LTE_BandNone_EtVinLutData ),
};

LTE_ET_TPC_SECTION_TABLE_T*  LTE_ET_TPC_SECTION_DATA_TABLE[] =
{
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
      &LTE_BandNone_ET_TPC_SECTION_DATA,
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_LOOKUP_VPA_EVENT_TABLE[] =
{
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
      LTE_BandNone_ET_LOOKUP_VPA_EVENT,
};

LTE_ET_EVENT_TABLE_T*  LTE_ET_BW_SWITCH_EVENT_TABLE[] =
{
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
      LTE_BandNone_ET_BW_SWITCH_EVENT,
};

LTE_ET_BW_SWITCH_SECTION_DATA_T*  LTE_ET_BW_SWITCH_SECTION_DATA_TABLE[] =
{
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
      LTE_BandNone_ET_BW_SWITCH_SECTION_DATA,
};

#endif   // #if IS_ET_FRONT_END_ENABLE

