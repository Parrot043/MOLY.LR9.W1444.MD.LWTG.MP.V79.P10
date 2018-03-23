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
 * ul1_cnst.h
 *
 * Project:
 * --------
 *   WCDMA_Software
 *
 * Description:
 * ------------
 *   Layer 1 and Protocol Stack related message identity definition
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
/* Request for CPHY */
#include "module_msg_range.h"

#ifndef _UL1_MSG_H
#define _UL1_MSG_H

#if defined(__UMTS_RAT__) && defined(__UMTS_FDD_MODE__)

#ifdef _Test_Hdr_On_PC
enum {
#endif

MODULE_MSG_BEGIN( MSG_ID_UL1_MSG_CODE_BEGIN )
/* RELEASE REQ should be put before SETUP/MODIFY REQ */
/* MSG_ID_CPHY_BCH_RELEASE_REQ to MSG_ID_CPHY_DCH_MODIFY_REQ must be continuous */
MSG_ID_UL1_MSG_CODE_REQ_BEGIN = MSG_ID_UL1_MSG_CODE_BEGIN,
MSG_ID_CPHY_BCH_RELEASE_REQ,
MSG_ID_CPHY_BCH_MODIFY_REQ,
MSG_ID_CPHY_BCH_SETUP_REQ,
MSG_ID_CPHY_PCH_RELEASE_REQ,
MSG_ID_CPHY_PCH_SETUP_REQ,
MSG_ID_CPHY_PCH_MODIFY_REQ,
MSG_ID_CPHY_FACH_RELEASE_REQ,
MSG_ID_CPHY_FACH_SETUP_REQ,
MSG_ID_CPHY_FACH_MODIFY_REQ,
MSG_ID_CPHY_RACH_RELEASE_REQ,
MSG_ID_CPHY_RACH_SETUP_REQ,
MSG_ID_CPHY_DCH_RELEASE_REQ,
MSG_ID_CPHY_DCH_SETUP_REQ,
MSG_ID_CPHY_DCH_MODIFY_REQ,
/* __HSDPA_SUPPORT__ */
MSG_ID_CPHY_HSDSCH_RELEASE_REQ,
MSG_ID_CPHY_HSDSCH_SETUP_REQ,
MSG_ID_CPHY_HSDSCH_MODIFY_REQ,
/* __HSUPA_SUPPORT__ */
MSG_ID_CPHY_EDCH_RELEASE_REQ,
MSG_ID_CPHY_EDCH_SETUP_REQ,
MSG_ID_CPHY_EDCH_MODIFY_REQ,
/* __UMTS_R7__ */
MSG_ID_CPHY_CPC_CONFIG_REQ,
MSG_ID_PHY_MAC_EHS_RESET_REQ,

MSG_ID_CPHY_TGPS_DELETE_REQ,
MSG_ID_CPHY_TGPS_OVERLAP_RESUME_REPORTING_REQ,
MSG_ID_CPHY_FREQUENCY_SCAN_REQ,
MSG_ID_CPHY_FREQUENCY_SCAN_CONTINUE_REQ,
MSG_ID_CPHY_FREQUENCY_SCAN_SUSPEND_REQ,
MSG_ID_CPHY_FREQUENCY_SCAN_STOP_REQ,
MSG_ID_CPHY_RSSI_SNIFFER_START_REQ, //Add by Janet
MSG_ID_CPHY_RSSI_SNIFFER_STOP_REQ,  //Add by Janet
MSG_ID_CPHY_MEASUREMENT_CONFIG_TGPS_REQ,
MSG_ID_CPHY_MEASUREMENT_CONFIG_FMO_REQ,
MSG_ID_CPHY_MEASUREMENT_CONFIG_CELL_REQ,
MSG_ID_CPHY_MEASUREMENT_CONFIG_RSSI_EVENT_REQ,
MSG_ID_CPHY_TRESELECTION_START_REQ,
MSG_ID_CPHY_MEASUREMENT_CONFIG_TX_POWER_REQ,
MSG_ID_CPHY_MEASUREMENT_CONFIG_TX_POWER_STOP_REQ,
MSG_ID_CPHY_TX_POWER_RESULT_REQ,
MSG_ID_CPHY_SPECIFIC_CELL_SEARCH_REQ,
MSG_ID_CPHY_SPECIFIC_CELL_SEARCH_STOP_REQ,
MSG_ID_CPHY_RESET_REQ,
MSG_ID_CPHY_RF_ON_REQ,
MSG_ID_CPHY_RF_OFF_REQ,
MSG_ID_CPHY_SET_ACTIVE_RAT_REQ,
MSG_ID_CPHY_MSG_CONTAINER_REQ,
MSG_ID_CPHY_ABORT_REQ,
MSG_ID_WAKEUP_3G_REQ,            /*For F8F9, called at ADR*/
MSG_ID_WAKEUP_3G_LOCK_REQ,       /*For L2 CoPro*/
MSG_ID_WAKEUP_3G_UNLOCK_REQ,     /*For L2 CoPro*/
/* __UMTS_R8__ */
MSG_ID_CPHY_START_MONITOR_ORDER_REQ,
MSG_ID_CPHY_STOP_MONITOR_ORDER_REQ,

MSG_ID_USER_WAKEUP_3G_HANDLE_REQ,
MSG_ID_USER_WAKEUP_3G_LOCK_REQ,
MSG_ID_USER_WAKEUP_3G_UNLOCK_REQ,
/* Request from PHY */
MSG_ID_PHY_RACH_DATA_REQ,
MSG_ID_PHY_ACCESS_REQ,
/* __UMTS_R8__ */
MSG_ID_PHY_CEDCH_TERMINATION_REQ,

/* __GEMINI_GSM__ && __UMTS_RAT__*/
MSG_ID_RSVAS_UL1_SUSPEND_REQ,
MSG_ID_RSVAS_UL1_RESUME_REQ,
/* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */
MSG_ID_RSVAS_UL1_VIRTUAL_RESUME_REQ,
MSG_ID_URR_UL1_SWITCH_GEMINI_MODE_REQ,
MSG_ID_CPHY_PEER_GEMINI_MODE_NOTIFY_REQ,
MSG_ID_CPHY_CHANNEL_PRIORITY_ADJUSTMENT_REQ,
/* __L1_GPS_AUTO_TIMING_SYNC_SUPPORT__ || __L1_GPS_REF_TIME_SUPPORT__*/
/* The corresponding SAP is defined in mcu\interface\hal\L1\hal_ul1_sap.h. */
MSG_ID_UL1_GPS_TIME_SYNC_REQ,    /* Request from GPS Task */
MSG_ID_CPHY_OUT_OF_SERVICE_REQ,
/* __HSDPA_SUPPORT__ */
MSG_ID_CPHY_RLC_INFO_REQ,
/* __MULTI_MODE_SUPPORT__ */
MSG_ID_CPHY_AUTO_GAP_ON_REQ,
MSG_ID_CPHY_AUTO_GAP_ON_CNF,
MSG_ID_CPHY_AUTO_GAP_OFF_REQ,
MSG_ID_CPHY_AUTO_GAP_OFF_CNF,

MSG_ID_UL1_MSG_CODE_REQ_END,

MSG_ID_UL1C_UL1A_UREPORT,
MSG_ID_UL1D_UL1C_UREPORT,

/* Confirm & Indication for CPHY */
MSG_ID_CPHY_BCH_SETUP_CNF,
MSG_ID_CPHY_BCH_SETUP_IND,
MSG_ID_CPHY_BCH_MODIFY_CNF,
MSG_ID_CPHY_BCH_MODIFY_IND,
MSG_ID_CPHY_BCH_RELEASE_CNF,
MSG_ID_CPHY_BCH_RELEASE_IND,
MSG_ID_CPHY_SFN_IND,
MSG_ID_CPHY_TGPS_OVERLAP_IND,
MSG_ID_CPHY_GAP_COMPLETE_IND,
MSG_ID_CPHY_T312_EXPIRY_IND,
MSG_ID_CPHY_DL_INIT_SYNC_IND,
MSG_ID_CPHY_RL_FAILURE_IND,
MSG_ID_CPHY_TGPS_DELETE_IND,
/*Joy 012207 remove DELETE_TGPS interface*/
//MSG_ID_CPHY_TGPS_DELETE_CNF,
//MSG_ID_CPHY_TGPS_DELETE_IND,
MSG_ID_CPHY_FREQUENCY_SCAN_CNF,
MSG_ID_CPHY_FREQUENCY_SCAN_IND,
MSG_ID_CPHY_FREQUENCY_SCAN_CONTINUE_CNF,
MSG_ID_CPHY_FREQUENCY_SCAN_SUSPEND_CNF,
MSG_ID_CPHY_FREQUENCY_SCAN_SUSPEND_IND,
MSG_ID_CPHY_FREQUENCY_SCAN_STOP_CNF,
MSG_ID_CPHY_FREQUENCY_SCAN_STOP_IND,
MSG_ID_CPHY_RSSI_SNIFFER_START_CNF, //Add by Janet
MSG_ID_CPHY_RSSI_SNIFFER_STOP_CNF,  //Add by Janet
MSG_ID_CPHY_RSSI_SNIFFER_STOP_IND,
MSG_ID_CPHY_RSSI_SNIFFER_SIGNAL_APPEAR_IND,  //Add by Janet
MSG_ID_CPHY_MEASUREMENT_CONFIG_TGPS_CNF,
MSG_ID_CPHY_MEASUREMENT_CONFIG_TGPS_IND,
MSG_ID_CPHY_MEASUREMENT_CONFIG_FMO_CNF,
MSG_ID_CPHY_MEASUREMENT_CONFIG_CELL_CNF,
MSG_ID_CPHY_MEASUREMENT_CELL_IND,
MSG_ID_CPHY_MEASUREMENT_CELL_SFN_IND,
MSG_ID_CPHY_RSSI_EXCEED_RANGE_IND,
MSG_ID_CPHY_MEASUREMENT_RL_IND,
MSG_ID_CPHY_MEASUREMENT_CONFIG_TX_POWER_CNF,
MSG_ID_CPHY_MEASUREMENT_TX_POWER_PERIODIC_IND,
MSG_ID_CPHY_MEASUREMENT_TX_POWER_EVENT_IND,
MSG_ID_CPHY_TX_POWER_RESULT_IND,
MSG_ID_CPHY_SPECIFIC_CELL_SEARCH_IND,
MSG_ID_CPHY_SPECIFIC_CELL_SEARCH_STOP_IND,
MSG_ID_CPHY_RESET_CNF,
MSG_ID_CPHY_RF_ON_CNF,
MSG_ID_CPHY_RF_OFF_CNF,
MSG_ID_CPHY_SET_ACTIVE_RAT_CNF,
MSG_ID_CPHY_ASU_SUCCESS_IND,

MSG_ID_CPHY_MSG_CONTAINER_CNF,
MSG_ID_CPHY_MSG_CONTAINER_IND,
MSG_ID_CPHY_ABORT_CNF,
MSG_ID_CPHY_TX_STATUS_IND,
/* __UMTS_R7__ */
//MSG_ID_CPHY_D_HRNTI_DETECTED_IND,
/* __UMTS_R8__ */
MSG_ID_CPHY_MONITOR_ORDER_RECEIVED_IND,
MSG_ID_CPHY_START_MONITOR_ORDER_CNF,
MSG_ID_CPHY_STOP_MONITOR_ORDER_CNF,

/* Confirm & Indication for PHY */
MSG_ID_PHY_PCH_SETUP_IND,
MSG_ID_PHY_PCH_MODIFY_IND,
MSG_ID_PHY_PCH_RELEASE_IND,
MSG_ID_PHY_FACH_SETUP_IND,
MSG_ID_PHY_FACH_MODIFY_IND,
MSG_ID_PHY_FACH_RELEASE_IND,
MSG_ID_PHY_RACH_SETUP_IND,
MSG_ID_PHY_RACH_RELEASE_IND,
MSG_ID_PHY_DCH_SETUP_IND,
MSG_ID_PHY_DCH_MODIFY_IND,
MSG_ID_PHY_DCH_RELEASE_IND,
MSG_ID_PHY_CONFIG_ABORT_IND,
MSG_ID_PHY_CONFIG_FAIL_IND,

MSG_ID_PHY_DL_INIT_SYNC_IND,
MSG_ID_PHY_BCH_DATA_IND,
MSG_ID_PHY_DATA_IND,
MSG_ID_PHY_ACCESS_IND,
MSG_ID_PHY_POST_TX_IND,
MSG_ID_PHY_END_DCH_TX_IND,
/* __HSDPA_SUPPORT__ */
MSG_ID_PHY_HSDSCH_DATA_IND,
/* __HSUPA_SUPPORT__ */
MSG_ID_PHY_END_EDCH_TX_IND,
/* __UMTS_R8__ */
MSG_ID_PHY_CEDCH_SETUP_IND,
MSG_ID_PHY_CEDCH_MODIFY_IND,
MSG_ID_PHY_CEDCH_RELEASE_IND,
MSG_ID_PHY_CEDCH_TERMINATION_IND,
/* EM Msg */
MSG_ID_L4CUL1_EM_TST_CONTROL_REQ,
MSG_ID_L4CUL1_EM_TST_CONTROL_CNF,
/* SLT Msg */
MSG_ID_UL1_SLT_TASK_INIT_IND,
/*========== UMAC UT SIMULATE MESSAGE   ==========*/
//#ifdef  __MNT_UT_UMAC_ALONE_WITHOUT_L1__  /* UMAC UT */
MSG_ID_PHY_SIMULATE_DCH_UL_CCTRCH_TASK, 
MSG_ID_PHY_SIMULATE_DCH_UL_CCTRCH_HISR,
MSG_ID_PHY_SIMULATE_DCH_UL_CCTRCH_HISR_RSP,
MSG_ID_PHY_SIMULATE_DCH_UL_CCTRCH_LISR,
MSG_ID_PHY_SIMULATE_DCH_UL_CCTRCH_LISR_RSP,

MSG_ID_PHY_SIMULATE_DCH_UL_CALLBACK_CCTRCH, 
MSG_ID_PHY_SIMULATE_DCH_UL_CALLBACK_CCTRCH_RSP,
MSG_ID_PHY_SIMULATE_DCH_UL_CALLBACK_POWER,
MSG_ID_PHY_SIMULATE_END_DCH_TX_IND, 

MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_1,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_1_RSP,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_2_PARAM_SETUP,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_2,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_2_RSP,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_3,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_3_RSP,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_4,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_4_RSP,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_5,
MSG_ID_PHY_SIMULATE_UMAC_E_DCH_TICK_5_RSP,
MSG_ID_PHY_SIMULATE_INVOKE_UL_INFORM_EDCH_MAC,
MSG_ID_PHY_SIMULATE_UMAC_GET_HS_BUFFER,
MSG_ID_PHY_SIMULATE_UMAC_FREE_HS_BUFFER,
MSG_ID_PHY_SIMULATE_TRY_TO_TRIGGER_CSR_STATUS_IND,
//MSG_ID_PHY_SIMULATE_END_EDCH_TX_IND,
//#endif  /* __MNT_UT_UMAC_ALONE_WITHOUT_L1__ */
/*========== END UMAC UT SIMULATE MESSAGE   ==========*/
/* __GEMINI_GSM__ && __UMTS_RAT__*/
MSG_ID_RSVAS_UL1_SUSPEND_CNF,
/* __L1_GPS_AUTO_TIMING_SYNC_SUPPORT__ || __L1_GPS_REF_TIME_SUPPORT__*/
/* The corresponding SAP is defined in mcu\interface\hal\L1\hal_ul1_sap.h. */
MSG_ID_UL1_GPS_TIME_SYNC_IND, /* Indication to GPS Task */
MSG_ID_USER_WAKEUP_3G_HANDLE_IND,
/*========== UL1 INTERNAL MESSAGE  ==========*/
MSG_ID_UL1_SPECIFIC_CELL_SEARCH_REQ,
MSG_ID_UL1_SPECIFIC_CELL_SEARCH_IND,
MSG_ID_UL1_SPECIFIC_CELL_SEARCH_STOP_REQ,
MSG_ID_UL1_SPECIFIC_CELL_SEARCH_STOP_IND,
MSG_ID_UL1_SFN_DECODE_REQ,
MSG_ID_UL1_SFN_DECODE_CNF,
MSG_ID_UL1_SFN_STOP_REQ,
MSG_ID_UL1_SFN_STOP_IND,
MSG_ID_UL1_SFN_DECODE_SFN_IND,
MSG_ID_UL1_MSG_CONTAINER_REQ,
MSG_ID_UL1_T312_EXPIRY_IND,
MSG_ID_UL1_MM_TGPS_CHANNELACT_REQ,
MSG_ID_UL1_MM_TGPS_CHANNELACT_CNF,
MSG_ID_UL1_PHY_CONFIG_FAIL_IND,

MSG_ID_UL1_MEASUREMENT_CONFIG_CELL_REQ,
MSG_ID_UL1_BCH_SETUP_REQ,
MSG_ID_UL1_BCH_RELEASE_REQ,
MSG_ID_UL1_AUTO_GAP_ON_REQ,
MSG_ID_UL1_AUTO_GAP_OFF_REQ,
MSG_ID_UL1_FREQUENCY_SCAN_REQ,
MSG_ID_UL1_FREQUENCY_SCAN_SUSPEND_REQ,
MSG_ID_UL1_FREQUENCY_SCAN_CONTINUE_REQ,
MSG_ID_UL1_MEASUREMENT_CELL_IND,

/*========== END UL1 INTERNAL MESSAGE    ==========*/

MODULE_MSG_END( MSG_ID_UL1_MSG_CODE_TAIL )

#ifdef _Test_Hdr_On_PC
};
#endif
#endif

#endif  //_UL1_MSG_H
