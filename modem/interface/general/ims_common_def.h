/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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
 * Filename:
 * ------------
 *   ims_common_def.h
 *
 * Project:
 * ------------
 *   MOLY
 *
 * Description:
 * ------------
 *   This file defines structures and enums commonly used by IMC, IMSP, and xDM.
 *
 * Author:
 * -----------
 * -------
 *
 *===========================================================
 * $Log$
 *
 * removed!
 * removed!
 * 	(v1.2)ims interface re-org
 *
 * removed!
 * removed!
 * ViLTE interface patch back
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * add new call stop cause.
 *
 * removed!
 * removed!
 * 	.IMS interface
 *
 * removed!
 * removed!
 * 	interface - common part.
 * removed!
 * removed!
 * .merge 1224875
 *
 * removed!
 * removed!
 * TMOUS MOS patch back
 * removed!
 * removed!
 * .
 * 	confirm patched
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * 	.interface part
 *
 * removed!
 * removed!
 * 	.
 *
 * removed!
 * removed!
 * 	.
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * Merge from MP6.CMCC3 to MP7.FPB.
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * .
 * removed!
 * removed!
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 *
 * removed!
 * removed!
 * MP7.CMCCVOLTE.FPB merge back to MP7
 *
 * removed!
 * removed!
 * CMCC requirement 6.7, 380 handling
 *
 * removed!
 * removed!
 * 	IMS MO call timeout trigger call retry on CS domain - VDM TRK part
 *
 * removed!
 * removed!
 * MP6 merge back to TRUNK
 *
 * removed!
 * removed!
 * 	link to ALPS01634796
 *
 * removed!
 * removed!
 * MMIVT2MP6
 *
 * removed!
 * removed!
 * MMIVT2MOLY
 *
 * removed!
 * removed!
 * Integration change for 504 cause
 *
 * removed!
 * removed!
 * 504 cause
 *
 * removed!
 * removed!
 * SRVCC cause mapping to error report
 *
 * removed!
 * removed!
 * Add SRVCC cause
 *
 * removed!
 * removed!
 * check-in SRVCC R10 feature for IMC and /modem_interface/ims
 *
 * removed!
 * removed!
 * Fix build error.
 *
 * removed!
 * removed!
 * change IMS reg state enum
 *
 * removed!
 * removed!
 * AT+CDU=0 feature in
 *
 * removed!
 * removed!
 * Add IMC handle for ads ctrl to VDM
 *
 * removed!
 * removed!
 * Add ads_ctrl message to VDM for Test Mode
 *
 * removed!
 * removed!
 * SS phase2 conferce call check-in
 * for IMCB pre-checkin (if failed the Basic IT, it will be rollback)
 *
 * removed!
 * IMSP.
 *
 * removed!
 * removed!
 * IMS enable/disable feature-in for IMC related part
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * pre-checkin ims_dereg_cause_enum
 *
 * removed!
 * removed!
 * IMC merge code v1, sync to Ben's CBR CL: 258323
 *****************************************************************************/

#ifndef _IMS_COMMON_DEF_H_
#define _IMS_COMMON_DEF_H_

#include "kal_general_types.h"
#include "kal_public_defs.h"

// To use some enums such as ue_mode_enum, voice_domain_preference_enum, ...
#include "l3_inc_enums.h"
#include "ps_public_enum.h"
#include "ims_interface_md.h"

/******************************************************************************
 *                              Constant
 *****************************************************************************/
#define IMC_SMS_SUCCESS (1)
#define IMC_SMS_FAIL    (0)

/******************************************************************************
 *                               Enum
 *****************************************************************************/
typedef enum
{
    IMS_RAT_TYPE_2G = 0,
    IMS_RAT_TYPE_3G_FDD,
    IMS_RAT_TYPE_3G_TDD,
    IMS_RAT_TYPE_4G_FDD,
    IMS_RAT_TYPE_4G_TDD
} ims_rat_type_enum;

typedef enum
{
    IMS_RCODE_OK,
    IMS_RCODE_CONNECT,
    IMS_RCODE_RING,
    IMS_RCODE_NO_CARRIER,        //3
    IMS_RCODE_ERROR,             //4
    IMS_RCODE_BUSY = 7,

    /* Below are MTK proprietary result codes */
    IMS_RCODE_CONNECT_PS = 100,

    /* Below are result codes added for IMS */

} ims_result_code_enum;

typedef enum
{
    IMS_ERR_PHONE_FAILURE = 0,
    IMS_ERR_OPERATION_NOT_ALLOWED_ERR = 3,
    IMS_ERR_OPERATION_NOT_SUPPORTED = 4,
    IMS_ERR_PH_SIM_PIN_REQUIRED = 5,
    IMS_ERR_PH_FSIM_PIN_REQUIRED = 6, 
    IMS_ERR_PH_FSIM_PUK_REQUIRED = 7,
    IMS_ERR_SIM_NOT_INSERTED = 10,
    IMS_ERR_SIM_PIN_REQUIRED = 11,
    IMS_ERR_SIM_PUK_REQUIRED = 12,
    IMS_ERR_SIM_FAILURE = 13,
    IMS_ERR_SIM_BUSY = 14,
    IMS_ERR_SIM_WRONG = 15,
    IMS_ERR_INCORRECT_PASSWD = 16,
    IMS_ERR_SIM_PIN2_REQUIRED = 17,
    IMS_ERR_SIM_PUK2_REQUIRED = 18,
    IMS_ERR_MEM_FULL = 20,
    IMS_ERR_INVALID_INDEX = 21,
    IMS_ERR_NO_FOUND = 22,
    IMS_ERR_TEXT_ERRSTRING_TOO_LONG_ERR = 24,
    IMS_ERR_INVALID_CHARACTERS_IN_TEXT_ERRSTRING_ERR = 25,
    IMS_ERR_DIAL_ERRSTRING_TOO_LONG_ERR = 26, 
    IMS_ERR_INVALID_CHARACTERS_IN_DIAL_ERRSTRING_ERR = 27,
    IMS_ERR_NO_NW_SERVICE = 30,
    IMS_ERR_NETWORK_TIMEOUT = 31,
    IMS_ERR_NETWORK_NOT_ALLOWED = 32,
    IMS_ERR_NW_PERSON_PIN_REQUIRED = 40,
    IMS_ERR_NW_PERSON_PUK_REQUIRED = 41,
    IMS_ERR_NW_SUB_PERSON_PIN_REQUIRED = 42,
    IMS_ERR_NW_SUB_PERSON_PUK_REQUIRED = 43,
    IMS_ERR_SP_PERSON_PIN_REQUIRED = 44,
    IMS_ERR_SP_PERSON_PUK_REQUIRED = 45,
    IMS_ERR_CORP_PERSON_PIN_REQUIRED = 46,
    IMS_ERR_CORP_PERSON_PUK_REQUIRED = 47,
    IMS_ERR_UNKNOWN = 100,
    IMS_ERR_ILLEGAL_MS = 103,
    IMS_ERR_ILLEGAL_ME = 106,
    IMS_ERR_GPRS_NOT_ALLOWED = 107,
    IMS_ERR_PLMN_NOT_ALLOWED = 111,
    IMS_ERR_LA_NOT_ALLOWED = 112,
    IMS_ERR_ROAMING_AREA_NOT_ALLOWED = 113,
    IMS_ERR_SERV_OPTION_NOT_SUPPORTED = 132,
    IMS_ERR_REQ_SERV_OPTION_NOT_SUBSCRIBED = 133,
    IMS_ERR_SERV_OPTION_TEMP_OUT_OF_ORDER = 134,
    IMS_ERR_GPRS_UNSPECIFIED_ERROR = 148,
    IMS_ERR_PDP_AUTH_FAIL = 149,
    IMS_ERR_INVALID_MOBILE_CLASS = 150,
    IMS_ERR_LINK_NS_SP_PERSON_PIN_REQUIRED = 151,
    IMS_ERR_LINK_NS_SP_PERSON_PUK_REQUIRED = 152,
    IMS_ERR_LINK_SIM_C_PERSON_PIN_REQUIRED = 153,
    IMS_ERR_LINK_SIM_C_PERSON_PUK_REQUIRED = 154,

    /* Below are MTK proprietary error codes */
    IMS_ERR_COMMAND_CONFLICT = 302,
    IMS_NO_ERR = 600,
    IMS_ERR_UNRECOGNIZED_CMD = 601,
    IMS_ERR_RETURN_ERROR = 602,
    IMS_ERR_SYNTEX_ERROR = 603,
    IMS_ERR_UNSPECIFIED = 604,
    IMS_ERR_DATA_TRANSFER_ALREADY = 605,
    IMS_ERR_ACTION_ALREADY = 606,
    IMS_ERR_NOT_AT_CMD = 607,
    IMS_ERR_MULTI_CMD_TOO_LONG = 608,
    IMS_ERR_ABORT_COPS = 609,
    IMS_ERR_NO_CALL_DISC = 610,
    IMS_ERR_BT_SAP_UNDEFINED = 611,
    IMS_ERR_BT_SAP_NOT_ACCESSIBLE = 612,
    IMS_ERR_BT_SAP_CARD_REMOVED = 613,
    IMS_ERR_AT_NOT_ALLOWED_BY_CUSTOMER = 614

} ims_err_id_enum;

typedef enum
{
    IMS_ECPI_DISC_CAUSE_XXX = 0
} ims_ecpi_disc_cause_enum;

typedef enum 
{
    WFC_PROFILE_CELLULAR_ONLY = 0,
    WFC_PROFILE_WIFI_PREFERRED,
    WFC_PROFILE_CELLULAR_PREFERRED,
    WFC_PROFILE_WIFI_ONLY,
    WFC_PROFILE_NUM
} wfc_profile_enum;

typedef enum 
{
    IMS_HANDOVER_STATUS_NONE = 0,
    IMS_HANDOVER_STATUS_LTE_TO_WIFI,
    IMS_HANDOVER_STATUS_WIFI_TO_LTE,
    IMS_HANDOVER_STATUS_MAX,
} ims_handover_status_enum; 

// For extended DTMF operation commands from IMSP to VDM
typedef enum 
{
    IMS_DTMF_ACTION_START = 0,
    IMS_DTMF_ACTION_STOP
} ims_dtmf_action_enum;

typedef enum 
{
    IMS_SERVICE_NORMAL_SERVICE = 0, /* NAS registration success */
    IMS_SERVICE_LIMITED_SERVICE,
    IMS_SERVICE_NO_SERVICE   /* plmn loss/idle oos happen */
} ims_service_enum;

typedef enum 
{
    CELL_NORMAL_SERVICE = 0,
    CELL_LIMITED_SERVICE
} cell_service_enum;

typedef enum
{
    IMS_URI_TYPE_SIP = 0x01,
    IMS_URI_TYPE_TEL = 0x02,
    IMS_URI_TYPE_URN = 0x04
}ims_uri_type_enum;

/**
 *  MM means generic mobility management
 *  not for 2G MM module
 */
typedef enum
{
    MM_IMS_VOICE_TERMINATION_DISABLED = 1,
    MM_IMS_VOICE_TERMINATION_ENABLED
} mm_ims_voice_termination;

typedef enum 
{
    IMS_SRVCC_CALL_NUM_FORMAT_UNSPECIFIED = 0,
    IMS_SRVCC_CALL_NUM_FORMAT_URI         = 1,
    IMS_SRVCC_CALL_NUM_FORMAT_BCD         = 2,
    IMS_SRVCC_CALL_NUM_FORMAT_MAX,
}ims_srvcc_call_number_format_enum;

/******************************************************************************
 *                                Struct
 *****************************************************************************/
// <pau> field of +ECPI
typedef struct
{
    kal_uint8 p_asserted_uri[IMS_P_ASSERT_URI_LEN]; 
} pau_info_struct;

#endif /* _IMS_COMMON_DEF_H_ */

