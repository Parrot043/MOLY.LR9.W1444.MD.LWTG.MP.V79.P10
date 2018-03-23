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
 *   l1tst_nsft_lm_public.h
 *
 * Project:
 * --------
 *   MOLY Software
 *
 * Description:
 * ------------
 *   NSFT list mode public definition.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __L1TST_NSFT_LM_PUBLIC_H__
#define __L1TST_NSFT_LM_PUBLIC_H__

#include "l1_types_public.h"

/* ========== *\
|* Definition *|
\* ================================================================================================ */
#define MAX_TSET_NUM_IN_CHMEAS  8

typedef enum
{
   NSFT_LM_MCS_TYPE_GMSK = 0,
   NSFT_LM_MCS_TYPE_EPSK = 1,
   NSFT_LM_MCS_TYPE_MAX  = 0xFFFF
} NsftListModType;

typedef enum
{
   NSFT_LM_CMD_NULL    = 0,
   NSFT_LM_CMD_SYNC    = 1,
   NSFT_LM_CMD_TRIGGER = 2,
   NSFT_LM_CMD_CHMEAS  = 3,
   NSFT_LM_CMD_STOP    = 4,
   NSFT_LM_CMD_END     = 0xFFFF
} NsftListCmdType;

typedef enum
{
   NSFT_LM_EXECUTION_NULL    = 0,
   NSFT_LM_EXECUTION_INIT    = 1,
   NSFT_LM_EXECUTION_START   = 2,
   NSFT_LM_EXECUTION_DONE    = 3,
   NSFT_LM_EXECUTION_FAIL    = 4,
   NSFT_LM_EXECUTION_STA_MAX = 0xFFFF
} NsftListCmdStatus;

typedef kal_int16    NsftListPower;    // in unit of 1/8 dBm
typedef kal_int16    NsftListPCL;      // in unit of PCL

/*==================================================================================================*/

/* ================================= *\
|* Definition of Command's Structure *|
\* ================================================================================================ */
/* Structure for Sync------------------------------------------------------------------------------ */
typedef struct
{
   kal_uint16        command_id;
   FrequencyBand     RF_band;
   ARFCN             ARFCN;
   NsftListPower     sync_power;  // in unit of 1/8 dBm
   TimeSlot          sync_slot_offset;
} NsftListCmd_Sync_t;

/* Structure for Trigger--------------------------------------------------------------------------- */
typedef struct
{
   kal_uint16        command_id;
   FrequencyBand     RF_band;
   ARFCN             ARFCN;
   TSC               TSC;
   NsftListModType   RTX_types;
   NsftListPCL       TX_power;    // in format of PCL
} NsftListCmd_Trigger_t;

/* Structure for Channel measurement--------------------------------------------------------------- */
typedef struct
{
   kal_uint16        command_id;
   FrequencyBand     RF_band;
   ARFCN             ARFCN;
   TSC               TSC;
   NsftListModType   RTX_types;                              // GMSK/EPSK
   NsftListPCL       TX_power[MAX_TSET_NUM_IN_CHMEAS];       // in format of PCL
   NsftListPower     RX_power;                               // in unit of 1/8 dBm
   kal_uint16        repeat_count[MAX_TSET_NUM_IN_CHMEAS];   // in unit of radio block
} NsftListCmd_ChMeas_t;

/* Structure for stop LM--------------------------------------------------------------------------- */
typedef struct
{
   kal_uint16        command_id;
} NsftListCmd_Stop_t;

/* Structure for command union--------------------------------------------------------------------- */
typedef union
{
   NsftListCmd_Sync_t      sync;
   NsftListCmd_Trigger_t   trigger;
   NsftListCmd_ChMeas_t    test;
   NsftListCmd_Stop_t      stop;
} NsftListCmd_t;
/*================================================================================================= */

/* =============================== *\
|* Definition of Reort's Structure *|
\* ================================================================================================ */
typedef struct
{
   kal_uint16        command_id;
   NsftListCmdType   type;
   NsftListCmdStatus status;      // NSFT LM specific error code
} NsftListRpt_Com_t;

/* Structure for Sync------------------------------------------------------------------------------ */
typedef struct
{
   NsftListRpt_Com_t common;
   uint16            retry_counts;
   kal_int16         new_afc_dac;
   kal_int32         detected_foe;
} NsftListRpt_Sync_t;

/* Structure for Trigger--------------------------------------------------------------------------- */
typedef struct
{
   NsftListRpt_Com_t common;
} NsftListRpt_Trigger_t;

/* Structure for Channel measurement--------------------------------------------------------------- */
typedef struct
{
   NsftListRpt_Com_t common;
   kal_uint16        RX_level;    // in unit of 1/8 dBm
   kal_uint32        BER_sum;
   kal_uint32        BER_frame_count;
} NsftListRpt_ChMeas_t;

/* Structure for stop LM--------------------------------------------------------------------------- */
typedef NsftListRpt_Trigger_t NsftListRpt_Stop_t;

/* Structure for report union---------------------------------------------------------------------- */
typedef union
{
   NsftListRpt_Com_t       common;
   NsftListRpt_Sync_t      sync;
   NsftListRpt_Trigger_t   trigger;
   NsftListRpt_ChMeas_t    test;
   NsftListRpt_Stop_t      stop;
} NsftListRpt_t;
/*================================================================================================= */

/* ============================ *\
|* NSFT List Mode API Prototype *|
\* ================================================================================================ */
/* NSFT List Mode message handler for FT----------------------------------------------------------- */
void L1TST_NsftList_message_handler(void* ilmPtr);
/*================================================================================================= */

/**
 * Parameter for MSG_ID_MAL_TO_GSM_LM_REQ.
 */
typedef struct
{
    NsftListCmdType commandType;
    NsftListCmd_t   commandBuffer;
} nsft_lm_req_struct;

/**
 * Parameter for MSG_ID_GSM_LM_TO_MAL_RF_WAIT_IND
 */
typedef struct
{
    kal_uint32         reportCount;
    NsftListRpt_t      outputParameter;
} NsftList_RPT_Q_ENTRY_T;

#endif  /* _L1TST_NSFT_LM_PUBLIC_H */
