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
 /*******************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/
 /*******************************************************************************
 * Filename:
 * ---------
 *   gmss_msgid.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   NWSEL related message identity definition
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *              HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/
#include "module_msg_range.h"

/*----------------------- GMSS_MSG_CODE_BEGIN------------------*/
MODULE_MSG_BEGIN( MSG_ID_GMSS_CODE_BEGIN )
/* messages received from RAC at RAC_GMSS_SAP */
    MSG_ID_RAC_GMSS_ATTACH_REQ = MSG_ID_GMSS_CODE_BEGIN,
    MSG_ID_RAC_GMSS_DETACH_REQ,
    MSG_ID_RAC_GMSS_PLMN_SEARCH_REQ,
    MSG_ID_RAC_GMSS_INIT_REQ,
    MSG_ID_RAC_GMSS_RFOFF_REQ, 
    MSG_ID_RAC_GMSS_SEL_MODE_REQ,
    MSG_ID_RAC_GMSS_SET_ROAMING_MODE_REQ,
    MSG_ID_RAC_GMSS_SET_PREFER_RAT_REQ,
    MSG_ID_RAC_GMSS_PLMN_LIST_REQ,
    MSG_ID_RAC_GMSS_PLMN_LIST_STOP_REQ,
    MSG_ID_RAC_GMSS_PLMN_LIST_ABORT_REQ,
    MSG_ID_RAC_GMSS_CSG_LIST_REQ,
    MSG_ID_RAC_GMSS_CSG_LIST_STOP_REQ,
    MSG_ID_RAC_GMSS_SET_RAT_MODE_REQ,
    MSG_ID_RAC_GMSS_UPDATE_UEMODE_REQ, /* should be replaced by the following MSG_ID_RAC_GMSS_UEMODE_PARAM_UPDATE_REQ */
    MSG_ID_RAC_GMSS_UEMODE_PARAM_UPDATE_REQ,
    MSG_ID_RAC_GMSS_RAT_CHANGE_START_REQ,
    MSG_ID_RAC_GMSS_RAT_CHANGE_FINISH_REQ,
    MSG_ID_RAC_GMSS_SUSP_RESU_UPDATE_REQ,
    MSG_ID_RAC_GMSS_PLMN_ID_RAT_INFO_REQ,
    MSG_ID_RAC_GMSS_UPDATE_SWITCH_MODEM_CAUSE_REQ,
    MSG_ID_RAC_GMSS_ABORT_EMERGENCY_PLMN_SEARCH_REQ,
    MSG_ID_RAC_GMSS_MMDC_RECOVERY_SEARCH_REQ,
#ifdef __SGLTE__    
    MSG_ID_RAC_GMSS_MMDC_MODE_UPDATE_REQ,
    MSG_ID_RAC_GMSS_MMDC_PS_DOMAIN_ON_REQ,
    MSG_ID_RAC_GMSS_PLMN_SEARCH_ABORT_REQ,
#endif /* __SGLTE__ */
    MSG_ID_RAC_GMSS_SET_RECOVERY_SEARCH_TIMER_REQ,
    MSG_ID_RAC_GMSS_GET_RECOVERY_SEARCH_TIMER_REQ,
    MSG_ID_RAC_GMSS_UE_OPLMN_UPDATE_REQ,
    MSG_ID_RAC_GMSS_SET_UTRAN_VOICE_DOMAIN_PREFERENCE_REQ,
    MSG_ID_RAC_GMSS_DATA_SERVICE_STATUS_UPDATE_REQ,
    MSG_ID_RAC_GMSS_MD_SIM_CONFIG_REQ,
    MSG_ID_RAC_GMSS_ACTIVE_SIM_INFO_REQ,
    MSG_ID_RAC_GMSS_RAT_CHANGE_SUCCESS_NOTIFY_REQ,
    MSG_ID_RAC_GMSS_DUPLEX_MODE_CHANGE_REQ,
    MSG_ID_RAC_GMSS_SET_CT_MODE_REQ,
    MSG_ID_RAC_GMSS_DISABLE_EUTRAN_REQ,
    MSG_ID_RAC_GMSS_ROAMING_DATA_CONFIG_REQ,
    MSG_ID_RAC_GMSS_SET_FIRST_CAMP_ON_PREFER_RAT_REQ,

/* messages received from NWSEL at GMSS_NWSEL_SAP */
    MSG_ID_GMSS_NWSEL_SET_RECOVERY_SEARCH_TIMER_CNF,
    MSG_ID_GMSS_NWSEL_GET_RECOVERY_SEARCH_TIMER_CNF,
    MSG_ID_GMSS_NWSEL_RFOFF_CNF,
    MSG_ID_GMSS_NWSEL_SET_ROAMING_MODE_CNF, /* 3G */
    MSG_ID_GMSS_NWSEL_SET_PREFER_RAT_CNF,
    MSG_ID_GMSS_NWSEL_SET_RAT_MODE_CNF,
    MSG_ID_GMSS_NWSEL_RAC_PLMN_SEARCH_CNF,
    MSG_ID_GMSS_NWSEL_RAC_PLMN_LIST_CNF,
    MSG_ID_GMSS_NWSEL_RAC_PLMN_LIST_STOP_CNF,
    MSG_ID_GMSS_NWSEL_RAC_CSG_LIST_CNF,
    MSG_ID_GMSS_NWSEL_RAC_CSG_LIST_STOP_CNF,
    MSG_ID_GMSS_NWSEL_PLMN_STATUS_IND,
    MSG_ID_GMSS_NWSEL_SUSPEND_STATUS_IND,
    MSG_ID_GMSS_NWSEL_PLMN_LIST_IND,
    MSG_ID_GMSS_NWSEL_PLMN_ID_RAT_INFO_IND,
    MSG_ID_GMSS_NWSEL_SUSP_RESU_UPDATE_CNF,
#ifdef __SGLTE__
    MSG_ID_GMSS_NWSEL_MMDC_CAMP_ON_STATUS_IND,
    MSG_ID_GMSS_GAS_RAT_MODE_OR_FLIGHT_MODE_IND,
    MSG_ID_GMSS_NWSEL_PLMN_SEARCH_ABORT_CNF,
    MSG_ID_GMSS_NWSEL_MMDC_PLMN_LOSS_IND,
#endif /* __SGLTE__ */
    MSG_ID_GMSS_NWSEL_IMS_SERVICE_IND,
    MSG_ID_GMSS_NWSEL_RESTART_CLEAR_CODE_33_PROC_IND,
    MSG_ID_GMSS_NWSEL_CS_DOMAIN_AVAILABILITY_IND,
    MSG_ID_GMSS_NWSEL_SUSPEND_IND,
    MSG_ID_GMSS_NWSEL_RESUME_IND,
    MSG_ID_GMSS_NWSEL_VIRTUAL_MODE_IND,
    MSG_ID_GMSS_NWSEL_PLMN_SEARCH_CNF,
    MSG_ID_GMSS_NWSEL_MCC_SEARCH_CNF,
    MSG_ID_GMSS_NWSEL_PLMN_LIST_CNF,
    MSG_ID_GMSS_NWSEL_PLMN_LIST_STOP_CNF,
    MSG_ID_GMSS_NWSEL_DEACTIVATE_CNF,
    MSG_ID_GMSS_NWSEL_OUT_OF_SERVICE_IND,
    MSG_ID_GMSS_NWSEL_CLASS_RAT_IND,
    MSG_ID_GMSS_NWSEL_SIGNAL_APPEAR_IND,
    MSG_ID_GMSS_NWSEL_IC_MODULE_TEST_FINISH_IND,
    MSG_ID_GMSS_NWSEL_EVENT_IND,
    MSG_ID_GMSS_NWSEL_C2K_IRAT_ATTACH_RESULT_IND,
    MSG_ID_GMSS_NWSEL_L2C_TRANSFER_CNF,
    MSG_ID_GMSS_NWSEL_SET_LTE_ACTIVE_CNF,
    // Robert temp - S: early_oos
    MSG_ID_GMSS_NWSEL_EARLY_OOS_IND,
    // Robert temp - E


/* messages for UT test */
    MSG_ID_GMSS_UT_CONFIG_REQ,
    MSG_ID_GMSS_UT_CONFIG_RSP,
    MSG_ID_GMSS_NWSEL_REG_STATUS_IND,
/* messages received from TCM at TCM_GMSS_SAP */
    MSG_ID_TCM_GMSS_DEFAULT_APN_CHANGE_IND,

    MSG_ID_GMSS_CODE_END = MSG_ID_TCM_GMSS_DEFAULT_APN_CHANGE_IND,


    
MODULE_MSG_END( MSG_ID_GMSS_CODE_TAIL )
/*----------------------- GMSS_MSG_CODE_END--------------------*/


