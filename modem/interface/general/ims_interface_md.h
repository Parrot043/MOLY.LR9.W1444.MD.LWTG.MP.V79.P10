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
 *==============================================================================
 * 				HISTORY
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
 *
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
 *==============================================================================
 *******************************************************************************/
#ifndef _IMS_INTERFACE_MD_H
#define _IMS_INTERFACE_MD_H

//#include "imc_general_sap.h"
//#include "imcf_general.h"
#include "module_msg_range.h"
#include "imc_msgid.h"

/* Change Log -
 * 1E - (+) CMCC advanced conference call
 * 1F - (+) MT conference participant interface
 * 20 - (+) CMCC auto test tool - EBI filter/IPSec
 * 21 - (+) dynamic SBP id setting from MNC/MCC
 * 22 - (+) TMOUS MOS patch back
 * 23 - (+) Align with WWOP sbp_id
 * 24 - (-) SIM refresh
 * 25 - ( ) video capability URC
 * 26 - (-) ims_vops to UA interface(ATT)
 * 27 - (-) early media direction interface (ATT)
 * 28 - (+) WFC
 * 29 - (+) RJIL dynamic sbp id
 * 30 - (+) DCM feature - retry after
 * 31 - (+) ipv6 address format
 * 32 - (+) TWN, CHT, FET operator id
 * 33 - (+) new call stop cause
 * 34 - (+) new reg fail cause for VDF PDN reject cause #26 and #27 handling
 * 35 - (+) EIMSCMODE extend
 * 36 - (+) default bearer id to ltecsr
 * 37 - (-) ViLTE feature
 * 38 - (+) bCSFB feature
 * 39 - (+) v1.2 IMS interface re-organization
 * 3A - (+) RTCP CNAME
 * 3B - (+) Add operator_code for Telstra/Sprint/Softbank/SFR/Telcel/Beeline/KT/SKT/UPLUS
 * 3C - (+) Extend +EIMSCMODE, ims call audio codec information
 * 3D - (+) 91 TMOUS ViLTE (phase3)
 * 3E - (+) Add operator_code for Smartfren/YTL
 * 3F - (+) USSI Feature
 * 40 - (+) WFC Location Info support
 * 41 - (-) 90 DoCoMo VoLTE feature patch back
 * 42 - (-) 90 VzW VoLTE feature patch back
 * 43 - (+) Orange early media change
 * 44 - (+) Non-UE detectable emergency call R12 feature
 * 45 - (+) Align WWOP_ID for Natcom/119 and Claro/120
 * 46 - (-) 91 AT&T feature patch back
 * 47 - (-) IMS UX Enhancement(AT+EIMSVOLTE, AT+EIMSVOICE, AT+EIMSSMS)/ IMS configurations re-origanization
 * 48 - (-) VzW eHRPD feature patch back
 * 49 - (-) IMS Debug/EM Framework
 * 4A - (-) VZW eHRPD C2K reg cause
        (+) IMCB/IMC verno sync
        (+) TLV general setting
        (-) CISRVCC
        (-) EVS
        (+) WWOP operator code
        (+) CC Cause extend
        (+) dereg cause
*/
#define IMCB_IMC_HEADER_FILE_VERNO  0x0000004A

/* Change Log -
 * 01 - CMCC auto test tool
*/
#define IMCB_IMC_MSGID_VERNO        0x00000001

/*****imcf_type.h START*****/
/* os/platform dependent */
/*----------------------------------------------------*/
#ifndef __IMCF_MTK_MD__
#define __IMCF_MTK_MD__ 1
#endif

#if 0
/* under construction !*/
/* under construction !*/
#elif 0
#elif defined(__IMCF_LINUX__) || defined(__IMCF_MTK_VA__)

#define IMCF_MSG_HDR

typedef enum imcf_bool {
    IMCF_FALSE,
    IMCF_TRUE
} imcf_bool;

typedef unsigned short imcf_wchar;

typedef char      imcf_int8 ;
typedef short int imcf_int16;
typedef       int imcf_int32;

typedef unsigned char       imcf_uint8 ;
typedef unsigned short int  imcf_uint16;
typedef unsigned       int  imcf_uint32;

typedef imcf_uint16 imcf_user_spec_t;

#elif defined(__IMCF_MTK_MD__)

#include "kal_public_defs.h"
#include "kal_general_types.h"

#define IMCF_MSG_CTRL_HDR LOCAL_PARA_HDR
#define IMCF_MSG_DATA_HDR PEER_BUFF_HDR
#define IMCF_MSG_CTRL_HDR_SIZE (sizeof(local_para_struct))
#define IMCF_MSG_DATA_HDR_SIZE (sizeof(peer_buff_struct ))

#define IMCF_FALSE KAL_FALSE
#define IMCF_TRUE  KAL_TRUE

typedef kal_wchar imcf_wchar;

typedef kal_bool  imcf_bool;
typedef kal_int8  imcf_int8;
typedef kal_int16 imcf_int16;
typedef kal_int32 imcf_int32;

typedef kal_uint8   imcf_uint8;
typedef kal_uint16  imcf_uint16;
typedef kal_uint32  imcf_uint32;

typedef module_type imcf_user_spec_t;

#else

#error "please define type of VMF !!"

#endif
/*****imcf_type.h END*****/

/*****imc_general_def.h START*****/
#define IMC_MAX_CELL_ID_LEN         64
#define IMC_MAX_PLMN_LEN            8   /* WFC four bytes in hex, 6 + '\0' */
#define IMC_MAX_LAC_LEN             8   /* WFC four bytes in hex, 4 + '\0' */
#define IMC_MAX_CI_LEN              12  /* WFC four bytes in hex, 8 + '\0' */
#define IMC_MAX_IMEI_LEN 			20
#define IMC_MAX_MNC_MCC_LEN         4
#define IMC_MAX_IMPU_NUM 			5
#define IMC_MAX_IMPU_LEN 			256
#define IMC_MAX_IMPI_LEN 			256
#define IMC_MAX_DOMAIN_NAME_LEN     256
#define IMC_MAX_IMSI_LEN			16
#define IMC_MAX_RESPONSE_LEN		256
#define IMC_MAX_AUTS_LEN			256
#define IMC_MAX_CK_LEN				256
#define IMC_MAX_IK_LEN				256
#define IMC_MAX_NONCE_LEN	  	    64
#define IMC_MAX_NC_LEN	  	        12
#define IMC_MAX_AUTN_LEN	  	    32
#define IMC_MAX_RAND_LEN	  	    32
#define IMS_PCSCF_MAX_NUM           16
#define IMC_MAX_SIM_SMSP_LEN        256
#define IMC_MAX_USIM_MSISDN_LEN      12
#define IMC_MAX_USIM_PSISMSC_LEN    256
#define IMC_MAX_ISIM_PSISMSC_LEN    256
#define IMC_MAX_XUI_LEN             512
#define IMC_MAX_CALL_NUM_IN_CONFERENCE 5
#define IMC_MAX_URI_LENGTH          128
#define IMC_MAX_ASSERTED_URI        (IMC_MAX_URI_LENGTH << 2)
#define IMC_CALL_INVAL_ID           255
#define IMC_CALL_MAX_NUM            16
#define IMC_P_ASSERT_URI_LEN        128
#define IMC_PHONE_NUM_LEN           64
#define IMC_USSD_LANGUANGE_LEN      (32)
#define IMC_USSD_MAX_MSG_LEN        (400)
#define IMC_MAX_SMS_TPDA_LEN        (21)
#define IMC_MAX_REASON_TEXT_LENGTH  128
#define IMC_MAX_EMERGENCY_AID_LEN   32

#define UNIQUE_NAME                 MAKE_NAME(__LINE__)
#define MAKE_NAME(line)             MAKE_NAME2(line)
#define MAKE_NAME2(line)            constraint_ ## line

#define MAKE_VALUE_TO_STRING(x)     #x
#define MAKE_VALUE(x)               MAKE_VALUE_TO_STRING(x)
#define MAKE_VAR_NAME_VALUE(var)    #var "="  MAKE_VALUE(var)
/*#pragma message(MAKE_VAR_NAME_VALUE(MSG_ID_WRAP_IMSA_IMCB_BEGIN))*/

#define IMC_CHK(expr)               enum { UNIQUE_NAME = (1/(expr))};

#define IMC_CHK_STRUCT_SIZE(x,y)    IMC_CHK(sizeof(x) == sizeof(y))
#define IMC_CHK_ENUM(x,y)  IMC_CHK((x) == (y))

/* for multiple VoLTE or VoLTE work on SIM2, we should think about another solution */
#if 0
/* under construction !*/
#else
#define IMC_SIM_NUM 1
#endif
/*****imc_general_def.h END*****/

/*****imc_general_enum.h START*****/
typedef enum {
    IMS_SIM_TYPE_SIM_USIM_INVALID = 0,
    IMS_SIM_TYPE_SIM_USIM_VALID,
    IMS_SIM_TYPE_ISIM_UNKNOWN,
    IMS_SIM_TYPE_ISIM_INVALID,
    IMS_SIM_TYPE_ISIM_VALID,
    IMS_SIM_TYPE_SIM_USIM_RELOAD_DONE,
    IMS_SIM_TYPE_ISIM_RELOAD_DONE
} ims_sim_type_enum;

typedef enum {
    IMS_SIM_USIM_IMSI = 0,
    IMS_SIM_USIM_PSISMSC,
    IMS_SIM_USIM_SMSP,
    IMS_SIM_USIM_MSISDN
} ims_sim_usim_data_enum;

typedef enum {
    IMS_ISIM_IMPI = 0,
    IMS_ISIM_IMPU,
    IMS_ISIM_DOMAIN_NAME,
    IMS_ISIM_PSISMSC,
    IMS_ISIM_IST
} ims_isim_data_enum;

typedef enum {
    IMC_RAT_TYPE_NONE ,
    IMC_RAT_TYPE_2G = IMC_RAT_TYPE_NONE,
    IMC_RAT_TYPE_3G_FDD,
    IMC_RAT_TYPE_3G_TDD,
    IMC_RAT_TYPE_4G_FDD,
    IMC_RAT_TYPE_4G_TDD,

    /* WFC */
    IMC_RAT_TYPE_802_11,
    IMC_RAT_TYPE_802_11a,
    IMC_RAT_TYPE_802_11b,
    IMC_RAT_TYPE_802_11g,
    IMC_RAT_TYPE_802_11n,
    IMC_RAT_TYPE_802_11ac,

    /* C2K */
    IMC_RAT_TYPE_1xRTT,
    IMC_RAT_TYPE_HRPD,
    IMC_RAT_TYPE_eHRPD,

    IMC_RAT_TYPE_MAX = IMC_RAT_TYPE_eHRPD,
    IMC_RAT_TYPE_UNSPEC = 0x80,
} imc_rat_type_enum;

/* WFC */
typedef enum {
    IMC_ACCESS_RAT_UNSPEC = 0,
    IMC_ACCESS_RAT_LTE,
    IMC_ACCESS_RAT_WIFI,
    IMC_ACCESS_RAT_EHRPD,
    IMC_ACCESS_RAT_NUM, /*MAX */
} imc_access_rat_type_enum;

/* WFC */
typedef enum {
   IMC_ECMP_NONE=0,
   IMC_ECMP_UNSPEC,
   IMC_ECMP_LTE,
   IMC_ECMP_WLAN,
   IMC_ECMP_EHRPD,
   IMC_ECMP_MAX,
} imc_ecmp_enum;

typedef enum {
    IMC_LOOP_TEST_NONE,
    IMC_LOOP_TEST_E2E,
    IMC_LOOP_TEST_E2E_TIMER,
    IMC_LOOP_TEST_2WAY_BV,
    IMC_LOOP_TEST_2WAY_VV,

    IMC_LOOP_TEST_LAST
} imc_loop_test_enum;

typedef enum {
    IMC_LOOP_TEST_CAUSE_NONE,
    IMC_LOOP_TEST_CAUSE_OK,
    IMC_LOOP_TEST_CAUSE_UNDER_TESTING,
    IMC_LOOP_TEST_CAUSE_OTHER_FAIL,

    IMC_LOOP_TEST_CAUSE_LAST
} imc_loop_test_cause_enum;

/* initial confifuration */
typedef enum {
    IMC_V4_ONLY = 0,
    IMC_V6_ONLY,
    IMC_V4_PREFER,
    IMC_V6_PREFER
} imc_v4v6_preference_enum;

typedef enum {
    IMC_ACCT_TY_NORMAL    = 0,
    IMC_ACCT_TY_EMERGENCY = 1,
    IMC_ACCT_TY_MAX
} imc_acct_type_enum;

typedef enum {
    IMC_EMERGENCY_IND_BEARER_UNKNOWN_SERVICE = 0,
    IMC_EMERGENCY_IND_BEARER_NOT_FOR_EMERGENCY_SERVICE,
    IMC_EMERGENCY_IND_BEARER_FOR_EMERGENCY_SERVICE
} imc_emergency_ind_enum;

typedef enum {
    IMC_NOT_FOR_IM_CN_SIGNALING = 0,
    IMC_FOR_IM_CN_SIGNALING
} imc_im_cn_signaling_flag_enum;

typedef enum {
    IMC_PCSCF_ADDR_DISCOVERY_VIA_NONE                  = 0,
    IMC_PCSCF_ADDR_DISCOVERY_VIA_NAS_SIGNALLING        = 1,
    IMC_PCSCF_ADDR_DISCOVERY_VIA_DHCP                  = 2
} imc_pcscf_discovery_enum;

typedef enum {
    IMC_RLM_DISABLED = 0,
    IMC_RLM_ENABLED
} imc_rlm_enum;

typedef enum {
    IMC_CC_RESULT_NONE,
    IMC_CC_RESULT_SUCCESS,
    IMC_CC_RESULT_FAIL,
    IMC_CC_RESULT_END
} imc_cc_result_enum;

typedef enum {
    IMC_CC_CALL_MOD_NONE,
    IMC_CC_CALL_MOD_NORAMAL,
    IMC_CC_CALL_MOD_EMERGENCY,
    IMC_CC_CALL_MOD_END
} imc_cc_call_mode_enum;

typedef enum {
    IMC_CC_CAUSE_NONE,
    IMC_CC_CAUSE_END
} imc_cc_cause_enum;

typedef enum {
    IMC_ECPI_NONE,
    IMC_ECPI_END
} imc_ecpi_enum;
/*****imc_general_enum.h END*****/

/*****imc_general_struct.h START*****/
typedef struct {
    imcf_uint8  len;
    imcf_uint8  pad[3];
    imcf_uint8  data[256];
} ims_sim_usim_data_struct;

typedef struct {
    imcf_uint8  len;
    imcf_uint8  pad[3];
    imcf_uint8  data[256];
} ims_isim_data_struct;

typedef struct {
    imcf_uint8 length;
    imcf_uint8 data[IMC_MAX_IMPU_LEN];
} ims_impu_struct;

/* in modem, sim_id = sim_idx */
/* please ref modem/general/sim_public_enum.h */

typedef imcf_uint8 imc_sim_id_t;
typedef imcf_uint8 imc_acct_id_t;

#define VSIM_ID_GET_SIM_ID(x) (x >> 4 )
#define VSIM_ID_GET_TYPE(x)   (x & 0x0F)

typedef imcf_uint8 imc_vsim_id_t;
typedef union {
    imc_vsim_id_t vsim_id;
    imc_acct_id_t acct_id;
    imcf_uint8    pad[1];
} imc_ctxt_map_t;

#define IMC_LOOP_TEST_DATA_LEN  (1000)
typedef struct {

    imc_ctxt_map_t            ctxt;
    imcf_uint8  ttl;
    imc_loop_test_enum type;
    union {
        imcf_uint8 timeout; /* in sec */
        imcf_uint8 pad[1];
    } data;

    imcf_uint32 token;
    imcf_uint8  chk_data[IMC_LOOP_TEST_DATA_LEN];

} imc_loop_test_send_struct;

typedef struct {

    imc_ctxt_map_t            ctxt;
    imc_loop_test_cause_enum  cause;
    imcf_uint8                ttl;
    imcf_uint8                pad[1];

    imcf_uint32 token;
    imcf_uint8  chk_data[IMC_LOOP_TEST_DATA_LEN];

} imc_loop_test_ack_struct;

#if defined(__IMC_RELAY_TYPE_SOCKET__)
#define IMC_IPC_BODY_LNE (46000)
#else
/* 
ccci_chanel - ccci_reserve = ipc_struct_size
3584 - 128 = 3456
ipc_struct_size - ipc_hrader = ipc_body_size
3456 - 64 = 3392 (max_ilm_size)
*/
#define IMC_IPC_BODY_LNE (3392)
#endif

typedef struct imc_ipc_cfg_struct {

    /* we reserve 10 * 4 bytes for config */
    imcf_uint32 pad[10];

}imc_ipc_cfg_struct;

typedef struct imc_ipc_header_struct {
    imcf_uint32 msg_id;

    imcf_uint16 sqn;
    imcf_uint8  dst_id;
    imcf_uint8  log_flag;

    imcf_uint32 resrv1;
    imcf_uint32 resrv2;

    imcf_uint32 ctrl_len;
    imcf_uint32 data_len;

    imc_ipc_cfg_struct cfg;

}imc_ipc_header_struct;

typedef struct imc_ipc_struct {
    imc_ipc_header_struct header;

    /* content ctrl + data part */
    imcf_uint8  body[IMC_IPC_BODY_LNE];

} imc_ipc_struct;

typedef struct imc_em_cfg_struct {
    imcf_bool   dbg_log;
    imcf_bool   log_to_msg;
    imcf_bool   dbg_assert;

} imc_em_cfg_struct;

typedef struct {
    imc_rat_type_enum rat_type;
    imcf_uint8        pad[3];

    imcf_uint8        plmn[IMC_MAX_PLMN_LEN]; /* in string format */
    imcf_uint8        lac [IMC_MAX_LAC_LEN];  /* in string format, lac or tac */
    imcf_uint8        ci  [IMC_MAX_CI_LEN];   /* in string format */
    imcf_uint8        cell_id[IMC_MAX_CELL_ID_LEN]; /* ignore 3gpp or non-3gpp */

    imcf_uint8        is_ems_support;
    imcf_uint8        pad2[3];
} imc_rat_cell_info_struct;
/*****imc_general_struct.h END*****/

/*****imc_general_sap.h START*****/
#define __IMCB_IMC_LOCAL_PARA_HDR_ON__ 1

#if defined(__IMCB_IMC_LOCAL_PARA_HDR_ON__)
#if __IMCB_IMC_LOCAL_PARA_HDR_ON__
#define IMCB_IMC_LOCAL_PARA_HDR LOCAL_PARA_HDR
#else
#define IMCB_IMC_LOCAL_PARA_HDR
#endif
#else
#error "please specified IMCB_IMC_LOCAL_PARA_HDR_OFF !"
#endif
/*****imc_general_sap.h END*****/

/*****imcb_imc_struct.h START*****/
//MACRO
#define IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH  (16)
#define IMCB_IMC_MAX_RTP_ADDRESS_LENGTH         (64)
#define IMCB_IMC_MAX_SDP_EGBYTE_LENGTH          (8)
#define IMCB_IMC_IPADDR_LENGTH                  (16)
#define IMCB_IMC_MAX_CALL_NUM                   (7)
#define IMCB_IMC_MAX_DATA_TO_IMC_LENGTH         (512)
#define IMCB_IMC_MAX_CNAME_LENGTH               (52)

//IMS Common Enum
typedef enum {
    IMCB_IMC_OPERATOR_DEFAULT       = 0x00, //0
    /* WWOP system */
    IMCB_IMC_OPERATOR_CMCC          = 0x01, //1
    IMCB_IMC_OPERATOR_CU            = 0x02, //2
    IMCB_IMC_OPERATOR_ORANGE        = 0x03, //3
    IMCB_IMC_OPERATOR_TMOEU         = 0x05, //5
    IMCB_IMC_OPERATOR_VDF           = 0x06, //6
    IMCB_IMC_OPERATOR_ATT           = 0x07, //7
    IMCB_IMC_OPERATOR_TMOUS         = 0x08, //8
    IMCB_IMC_OPERATOR_CT            = 0x09, //9
    IMCB_IMC_OPERATOR_TIER2         = 0x0A, //10
    IMCB_IMC_OPERATOR_H3G           = 0x0B, //11
    IMCB_IMC_OPERATOR_VZW           = 0x0C, //12
    IMCB_IMC_OPERATOR_TELEFONICA    = 0x0F, //15
    IMCB_IMC_OPERATOR_EE            = 0x10, //16
    IMCB_IMC_OPERATOR_DCM           = 0x11, //17
    IMCB_IMC_OPERATOR_RJIL          = 0x12, //18
    IMCB_IMC_OPERATOR_TELSTRA       = 0x13, //19
    IMCB_IMC_OPERATOR_SPRINT        = 0x14, //20
    IMCB_IMC_OPERATOR_SOFTBANK      = 0x32, //50
    IMCB_IMC_OPERATOR_CSL           = 0x64, //100
    IMCB_IMC_OPERATOR_PCCW          = 0x65, //101
    IMCB_IMC_OPERATOR_SMT           = 0x66, //102
    IMCB_IMC_OPERATOR_SINGTEL       = 0x67, //103
    IMCB_IMC_OPERATOR_STARHUB       = 0x68, //104
    IMCB_IMC_OPERATOR_AMX           = 0x69, //105
    IMCB_IMC_OPERATOR_3HK           = 0x6A, //106
    IMCB_IMC_OPERATOR_SFR           = 0x6B, //107
    IMCB_IMC_OPERATOR_TWN           = 0x6C, //108
    IMCB_IMC_OPERATOR_CHT           = 0x6D, //109
    IMCB_IMC_OPERATOR_FET           = 0x6E, //110
    IMCB_IMC_OPERATOR_TELCEL        = 0x70, //112
    IMCB_IMC_OPERATOR_BEELINE       = 0x71, //113
    IMCB_IMC_OPERATOR_KT            = 0x72, //114
    IMCB_IMC_OPERATOR_SKT           = 0x73, //115
    IMCB_IMC_OPERATOR_UPLUS         = 0x74, //116
    IMCB_IMC_OPERATOR_SMARTFREN     = 0x75, //117
    IMCB_IMC_OPERATOR_YTL           = 0x76, //118
    IMCB_IMC_OPERATOR_NATCOM        = 0x77, //119
    IMCB_IMC_OPERATOR_CLARO         = 0x78, //120
    IMCB_IMC_OPERATOR_BELL          = 0x79, //121
    IMCB_IMC_OPERATOR_AIS           = 0x7A, //122
    IMCB_IMC_OPERATOR_CMCC_2        = 0x7B, //123
    IMCB_IMC_OPERATOR_APTG          = 0x7C, //124
    /* For Any IODT Activities */
    IMCB_IMC_OPERATOR_ERICSSON_IMS_IWLAN = 0x03E9, //1001
    /* VoLTE internal */
    IMCB_IMC_OPERATOR_8475          = 0x4000, //16384
    IMCB_IMC_OPERATOR_ERICSSON      = 0x4001, //16385
    IMCB_IMC_OPERATOR_CMW500        = 0x4002, //16386
    IMCB_IMC_OPERATOR_PCT           = 0x4003, //16387
    /* Lab testing */
    IMCB_IMC_OPERATOR_NSN           = 0x5000, //20480
    /* Free Test */
    IMCB_IMC_OPERATOR_FREE_TEST     = 0xFEE0, //no charge for testing 
} imcb_imc_operator_id_enum;

typedef enum {
    IMCB_IMC_QUERY_TYPE_INVALID = 0,
    IMCB_IMC_QUERY_TYPE_CELL_ID = 1
} imcb_imc_query_type_enum;

//IMS SIM Enum
typedef enum {
    IMCB_IMC_SIM_PLUG_OUT       = 0,
    IMCB_IMC_SIM_USIM_REFRESH   = 1,
    IMCB_IMC_ISIM_REFRESH       = 2,
    IMCB_IMC_SIM_USIM_RESET     = 3, //unused
    IMCB_IMC_ISIM_RESET         = 4, //unused
    IMCB_IMC_SIM_USIM_INIT      = 5, //unused
    IMCB_IMC_ISIM_INIT          = 6  //unused
} imcb_imc_sim_error_reason_enum;

typedef enum {
    IMCB_IMC_IMS_AKA_USING_USIM = 0,
    IMCB_IMC_IMS_AKA_USING_ISIM
} imcb_imc_ims_aka_cal_decision_enum;

//IMS Bearer Enum
typedef enum {
    IMCB_IMC_SIP_TYPE = 0,
    IMCB_IMC_NON_SIP_TYPE,
    IMCB_IMC_VOICE_TYPE,
    IMCB_IMC_VIDEO_TYPE
} imcb_imc_ebi_filter_type_enum;

//IMS P-CSCF Enum
typedef enum {
    IMCB_IMC_PCSCF_P_LIST_NONE      = 0,
    IMCB_IMC_PCSCF_P_LIST_DHCP      = 1,
    IMCB_IMC_PCSCF_P_LIST_PCO       = 2,
    IMCB_IMC_PCSCF_P_LIST_SIM       = 3,
    IMCB_IMC_PCSCF_P_LIST_MO        = 4,
    IMCB_IMC_PCSCF_P_LIST_MANUAL    = 5,
    IMCB_IMC_PCSCF_P_LIST_END
} imcb_imc_pcscf_priority_list_enum; // copy from imcb_imcb_struct.h, imcb_pcscf_type_enum

typedef enum {
    IMCB_IMC_USE_DEDICATED_BEAERER = 0,
    IMCB_IMC_USE_SIGNALLING_BEARER = 1,
    IMCB_IMC_FORCE_SIGNALLING_BEARER = 2
} imcb_imc_voice_bearer_ctrl_enum;

//IMS Registration Enum
typedef enum {
    IMC_REG_STATE_UNREGISTERED = 0,
    IMC_REG_STATE_REGISTERING,
    IMC_REG_STATE_REGISTERED,
    IMC_REG_STATE_UNREGISTERING
} imc_reg_state_enum;

typedef enum {
    IMC_SIP_CAUSE_UNSPECIFIED                               = 0,
    IMC_SIP_CAUSE_300_MULTIPLE_CHOICES                      = 300,
    IMC_SIP_CAUSE_301_MOVED_PERMANENTLY                     = 301,
    IMC_SIP_CAUSE_302_MOVED_TEMPORARILY                     = 302,
    IMC_SIP_CAUSE_305_USE_PROXY                             = 305,
    IMC_SIP_CAUSE_380_ALTERNATIVE_SERVICE                   = 380,
    IMC_SIP_CAUSE_400_BAD_REQUEST                           = 400,
    IMC_SIP_CAUSE_401_UNAUTHORIZED                          = 401,
    IMC_SIP_CAUSE_402_PAYMENT_REQUIRED                      = 402,
    IMC_SIP_CAUSE_403_FORBIDDEN                             = 403,
    IMC_SIP_CAUSE_404_NOT_FOUND                             = 404,
    IMC_SIP_CAUSE_405_METHOD_NOT_ALLOWED                    = 405,
    IMC_SIP_CAUSE_406_NOT_ACCEPTABLE                        = 406,
    IMC_SIP_CAUSE_407_PROXY_AUTHENTICATION_REQUIRED         = 407,
    IMC_SIP_CAUSE_408_REQUEST_TIMEOUT                       = 408,
    IMC_SIP_CAUSE_410_GONE                                  = 410,
    IMC_SIP_CAUSE_413_REQUEST_ENTITY_TOO_LARGE              = 413,
    IMC_SIP_CAUSE_414_REQUEST_URI_TOO_LARGE                 = 414,
    IMC_SIP_CAUSE_415_UNSUPPORTED_MEDIA_TYPE                = 415,
    IMC_SIP_CAUSE_416_UNSUPPORTED_URI_SCHEME                = 416,
    IMC_SIP_CAUSE_420_BAD_EXTENSION                         = 420,
    IMC_SIP_CAUSE_421_EXTENSION_REQUIRED                    = 421,
    IMC_SIP_CAUSE_423_INTERVAL_TOO_BRIEF                    = 423,
    IMC_SIP_CAUSE_480_TEMPORARILY_NOT_AVAILABLE             = 480,
    IMC_SIP_CAUSE_481_CALL_LEG_TRANSACTION_DOES_NOT_EXIST   = 481,
    IMC_SIP_CAUSE_482_LOOP_DETECTED                         = 482,
    IMC_SIP_CAUSE_483_TOO_MANY_HOPS                         = 483,
    IMC_SIP_CAUSE_484_ADDRESS_INCOMPLETE                    = 484,
    IMC_SIP_CAUSE_485_AMBIGUOUS                             = 485,
    IMC_SIP_CAUSE_486_BUSY_HERE                             = 486,
    IMC_SIP_CAUSE_487_REQUEST_TERMINATED                    = 487,
    IMC_SIP_CAUSE_488_NOT_ACCEPTABLE_HERE                   = 488,
    IMC_SIP_CAUSE_491_REQUEST_PENDING                       = 491,
    IMC_SIP_CAUSE_493_UNDECIPHERABLE                        = 493,
    IMC_SIP_CAUSE_494_SECURITY_AGREEMENT_REQUIRED           = 494,
    IMC_SIP_CAUSE_500_SERVER_INT_ERROR                      = 500,
    IMC_SIP_CAUSE_501_NOT_IMPLEMENTED                       = 501,
    IMC_SIP_CAUSE_502_BAD_GATEWAY                           = 502,
    IMC_SIP_CAUSE_503_SERVICE_UNAVAILABLE                   = 503,
    IMC_SIP_CAUSE_504_SERVER_TIME_OUT                       = 504,
    IMC_SIP_CAUSE_505_SIP_VERSION_NOT_SUPPORTED             = 505,
    IMC_SIP_CAUSE_513_MESSAGE_TOO_LARGE                     = 513,
    IMC_SIP_CAUSE_580_PRECONDITION_FAILURE                  = 580,
    IMC_SIP_CAUSE_600_BUSY_EVERYWHERE                       = 600,
    IMC_SIP_CAUSE_603_DECLINE                               = 603,
    IMC_SIP_CAUSE_604_DOES_NOT_EXIST_ANYWHERE               = 604,
    IMC_SIP_CAUSE_606_NOT_ACCEPTABLE                        = 606,
    IMC_SIP_CAUSE_UNKNOWN                                   = 700,
    IMC_SIP_CAUSE_MAX				                        = IMC_SIP_CAUSE_UNKNOWN,
} imcb_imc_sip_cause_enum;

typedef enum {
    IMC_CAUSE_NORMAL                                    = 0,
    IMC_CAUSE_INTERNAL_ERROR                            = 1,
    IMC_CAUSE_STACK_ERROR                               = 2,
    IMC_CAUSE_TIMER_ERROR                               = 3,
    IMC_CAUSE_TRY_NEXT_PCSCF                            = 4,
    IMC_CAUSE_PCSCF_ALL_FAILED                          = 5,
    IMC_CAUSE_AUTH_ERROR                                = 6,
    IMC_CAUSE_RESET                                     = 7,
    IMC_CAUSE_ASSURI_CHANGED                            = 8,
    IMC_CAUSE_NETWORK_INITIATED                         = 10,
    IMC_CAUSE_CHANNEL_BIND                              = 11,
    IMC_CAUSE_OOS                                       = 12,
    IMC_CAUSE_SIP_ERROR                                 = 13,
    IMC_CAUSE_PARAMETER_ERROR                           = 14,
    IMC_CAUSE_NOT_BIND                                  = 15,
    IMC_CAUSE_NOT_AUTO_RE_REG                           = 16,
    IMC_CAUSE_RETRY_AFTER                               = 17,
    IMC_CAUSE_IMS_PDN_FATAL_FAIL                        = 18,
    IMC_CAUSE_MD_LOWER_LAYER_ERR                        = 19,
    IMC_CAUSE_C2K_FAIL                                  = 20,
    IMC_CAUSE_UNKNOWN                                   = 99,
    IMC_CAUSE_MAX				                        = IMC_CAUSE_UNKNOWN,
} imcb_imc_reg_cause_enum;

typedef enum {
    IMCB_IMC_EM_REG_SCHEME_NONE                         = 0,
    IMCB_IMC_EM_REG_SCHEME_EM_CALL_WITH_EM_REG          = 1,
    IMCB_IMC_EM_REG_SCHEME_EM_CALL_WITHOUT_EM_REG       = 2,
    IMCB_IMC_EM_REG_SCHEME_EM_CALL_BY_NORMAL_IMS_PDN    = 3
} imcb_imc_em_reg_scheme_enum;

typedef enum {
    IMCB_IMC_DEREG_REASON_NORMAL = 0,
    IMCB_IMC_DEREG_REASON_23G_WITHOUT_IMS_DEREG = 1,
    IMCB_IMC_DEREG_REASON_23G_WITH_IMS_DEREG = 2
} imcb_imc_dereg_reason_enum;

typedef enum {
    IMCB_IMC_DEREG_CS_NONE,
    IMCB_IMC_DEREG_CS_PWR_OFF,
    IMCB_IMC_DEREG_CS_RF_OFF,
    IMCB_IMC_DEREG_CS_RUNTIME
} imcb_imc_dereg_cause_enum;

//IMS SMSoIP Enum
typedef enum {
    IMCB_IMC_SMS_TYPE_UNKNOWN       = 0,
    IMCB_IMC_SMS_TYPE_3GPP_SMS      = 1,
    IMCB_IMC_SMS_TYPE_3GPP_REPORT   = 2,
    IMCB_IMC_SMS_TYPE_TEXT          = 3,
    IMCB_IMC_SMS_TYPE_3GPP2_SMS     = 4,
    IMCB_IMC_SMS_TYPE_MAX,
} imcb_imc_sms_type_enum;

typedef enum {
//  IMCB_IMC_SMS_RESULT_SUCCESS = 0,
    IMCB_IMC_SMS_RESULT_ACCOUNT_ERROR       = 1,
    IMCB_IMC_SMS_RESULT_SENDSIP_ERROR       = 2,
    IMCB_IMC_SMS_RESULT_INREPLYTO_NOMATCH   = 3,
    IMCB_IMC_SMS_RESULT_INREPLYTO_TIMEOUT   = 4,
    IMCB_IMC_SMS_RESULT_NOSLOT              = 5,
    IMCB_IMC_SMS_RESULT_PARAMETER_ERROR     = 6,
    IMCB_IMC_SMS_RESULT_UNREGISTERED        = 7,
    IMCB_IMC_SMS_RESULT_TIMER_F_EXPIRY      = 8,
    IMCB_IMC_SMS_RESULT_MAX,
} imcb_imc_sms_result_enum;

//IMS Call Enum
typedef enum {
    IMCB_IMC_ECCTRL_STATE_CHANGE_HELD = 131,
    IMCB_IMC_ECCTRL_STATE_CHANGE_ACTIVE = 132
} imcb_imc_ecctrl_enum;

typedef enum {
    IMS_SR_AC_BARRED            = 0,
    IMS_SR_NW_REJ_CONN_REQUEST  = 1,
    IMS_SR_T3346_START          = 2,
    IMS_SR_T3346_STOP           = 3,
    IMS_SR_T3346_EXPIRY         = 4,
} ims_service_request_fail_enum;

typedef enum {
    IMCB_IMC_CALL_CAUSE_NORMAL = 0,
    IMCB_IMC_CALL_CAUSE_ABNORMAL,
    IMCB_IMC_CALL_CAUSE_NONUMBER,
    IMCB_IMC_CALL_CAUSE_UNREGISTERED,
    IMCB_IMC_CALL_CAUSE_DISCONNECT,
    IMCB_IMC_CALL_CAUSE_BECANCEL,
    IMCB_IMC_CALL_CAUSE_BEREJECT,
    IMCB_IMC_CALL_CAUSE_BEREJECT_380,
    IMCB_IMC_CALL_CAUSE_BEREJECT_380_EMERGENCY_TO_CS,
    IMCB_IMC_CALL_CAUSE_BEREJECT_380_EMERGENCY_REREG,
    IMCB_IMC_CALL_CAUSE_BEREJECT_380_EMERGENCY_TO_NORMAL_CS,
    IMCB_IMC_CALL_CAUSE_BEREJECT_480,
    IMCB_IMC_CALL_CAUSE_BEREJECT_503,
    IMCB_IMC_CALL_CAUSE_TX_TIMEOUT,
    IMCB_IMC_CALL_CAUSE_NO_PRIVACY,
    IMCB_IMC_CALL_CAUSE_PRECONDFAIL,
    IMCB_IMC_CALL_CAUSE_SECONDCALL,
    IMCB_IMC_CALL_CAUSE_NOMEDIACONTENT,
    IMCB_IMC_CALL_CAUSE_INVALIDMSG,
    IMCB_IMC_CALL_CAUSE_INVALIDCMD,
    IMCB_IMC_CALL_CAUSE_INVALIDIDX,
    IMCB_IMC_CALL_CAUSE_SRVCC,
    IMCB_IMC_CALL_CAUSE_FACILITY_REJECTED,
    IMCB_IMC_CALL_CAUSE_DEDICATED_BEARER_TIMEOUT,
    IMCB_IMC_CALL_CAUSE_RETRY_CS,
    IMCB_IMC_CALL_CAUSE_NO_RETRY,
    IMCB_IMC_CALL_CAUSE_RETRY_IMS_CS,
    IMCB_IMC_CALL_CAUSE_ABORTED,
    IMCB_IMC_CALL_CAUSE_TIMER_B_EXPIRY,
    IMCB_IMC_CALL_CAUSE_UA_MAX,
    IMCB_IMC_CALL_CAUSE_AVAIABLE_OF_CALLS,
    /* WFC */
    IMCB_IMC_CALL_CAUSE_RAT_MISMATCH,
    IMCB_IMC_CALL_CAUSE_MAX,
} imcb_imc_call_stop_cause_enum;

typedef enum {
    IMCB_IMC_CALL_MODE_AUDIO = 0,           // 0, normal voice call
    IMCB_IMC_CALL_MODE_VIDEO_AUDIO,         // 1, normal video call
    IMCB_IMC_CALL_MODE_VIDEO_ONLY,          // 2, only video call

    /* specifical call */
    IMCB_IMC_CALL_MODE_AUDIO_CONF = 11,    // 11, audio conference call
    IMCB_IMC_CALL_MODE_VIDEO_CONF,         // 12, video conference call

    IMCB_IMC_CALL_MODE_AUDIO_CONF_PARTS = 21,   // 21, audio conference call participant
    IMCB_IMC_CALL_MODE_VIDEO_CONF_PARTS,        // 22, video conference call participant

    /* emergency */
    IMCB_IMC_CALL_MODE_EMERGENCY = 81,      // 81, emergency call
    IMCB_IMC_CALL_MODE_EMER_POLICE,         // 82, police emergency call
    IMCB_IMC_CALL_MODE_EMER_FIRE,           // 83, fire emergency call
    IMCB_IMC_CALL_MODE_EMER_GAS,
    IMCB_IMC_CALL_MODE_EMER_AMBULANCE,
    IMCB_IMC_CALL_MODE_EMER_ANIMAL,
    IMCB_IMC_CALL_MODE_EMER_MARINE,
    IMCB_IMC_CALL_MODE_EMER_MOUNTAIN,
    IMCB_IMC_CALL_MODE_EMER_PHYSICIAN,
    IMCB_IMC_CALL_MODE_EMER_POISON,
    IMCB_IMC_CALL_MODE_MAX,
} imcb_imc_call_mode_enum;

typedef enum {
    IMCB_IMC_CALL_PROG_ECPI_0     = 0,
    IMCB_IMC_CALL_PROG_ECPI_2     = 2,
    IMCB_IMC_CALL_PROG_ECPI_6     = 6,
    IMCB_IMC_CALL_PROG_ECPI_131   = 131,
    IMCB_IMC_CALL_PROG_ECPI_132   = 132,
    IMCB_IMC_CALL_PROG_ECPI_133   = 133,
    IMCB_IMC_CALL_PROG_ECPI_MAX,
} imcb_imc_call_prog_ecpi_enum;

typedef enum {
    IMCB_IMC_CALL_HOLD_BY_LOCAL   = 0,
    IMCB_IMC_CALL_HOLD_BY_REMOTE  = 1,
    IMCB_IMC_CALL_HOLD_BY_MAX,
} imcb_imc_call_hold_by_enum;

typedef enum {
    IMCB_IMC_CALL_MDEIA_OFF = 0,
    IMCB_IMC_CALL_MEDIA_ON,
    IMCB_IMC_CALL_MEDIA_MAX,
} imcb_imc_media_enum;

typedef enum {
    IMCB_IMC_CALL_RESULT_OK = 0,
    IMCB_IMC_CALL_RESULT_FAILED,
    IMCB_IMC_CALL_RESULT_MAX,
} imcb_imc_call_stop_result_enum;

typedef enum {
    IMCB_IMC_MD_LOWER_LAYER_ERR_AC_BARRED = 0,
    IMCB_IMC_MD_LOWER_LAYER_ERR_NW_REJ_CONN = 1,
    IMCB_IMC_MD_LOWER_LAYER_ERR_T3346_START = 2,
    IMCB_IMC_MD_LOWER_LAYER_ERR_T3346_STOP = 3,
    IMCB_IMC_MD_LOWER_LAYER_ERR_T3346_EXPIRY = 4,
    IMCB_IMC_MD_LOWER_LAYER_ERR_MAX,
} imcb_imc_md_lower_layer_err_enum;

typedef enum {
    IMCB_IMC_OPERATION_UNKNOWN  = 0,
    IMCB_IMC_OPERATION_HOLD     = 1,
    IMCB_IMC_OPERATION_UNHOLD   = 2,
    IMCB_IMC_OPERATION_HOLD_N_UNHOLD = 3,
    IMCB_IMC_OPERATION_HOLD_N_ACCEPT = 4,
    IMCB_IMC_OPERATION_REMOTE_HOLD = 5,
    IMCB_IMC_OPERATION_REMOTE_UNHOLD = 6,
    IMCB_IMC_OPERATION_REL_ALL  = 11,
    IMCB_IMC_OPERATION_ATH_REL_ALL = 12,
    IMCB_IMC_OPERATION_REL_BG   = 13,
    IMCB_IMC_OPERATION_REL_WAIT = 14,
    IMCB_IMC_OPERATION_REL_ACTIVE_N_RESUME = 15,
    IMCB_IMC_OPERATION_CREATE_3WAY_CONF = 16,
    IMCB_IMC_OPERATION_ADD_OTHER_TO_CONF = 17,
    IMCB_IMC_OPERATION_CREATE_CONF_BRIDGE = 18,
    IMCB_IMC_OPERATION_REMOVE_OTHER_FROM_CONF = 19,
    IMCB_IMC_OPERATION_JOIN_OTHER_TO_CONF = 20,
    IMCB_IMC_OPERATION_REL_ACTIVE_N_ACCEPT = 21,
    IMCB_IMC_OPERATION_ACCEPT = 22,
    IMCB_IMC_OPERATION_ECCTRL = 23,
    IMCB_IMC_OPERATION_CONF_W_RESOURCE_LIST = 24,
    IMCB_IMC_OPERATION_REL_MAX,
} imcb_imc_ss_operation_enum;

typedef enum {
    IMCB_IMC_NOTIFY_CALL_WAITING    = 0,
    IMCB_IMC_NOTIFY_CALL_BARRING    = 1,
    IMCB_IMC_NOTIFY_CALL_FORWARDING = 2,
    IMCB_IMC_NOTIFY_MWI             = 3,
    IMCB_IMC_NOTIFY_CONFERENCE      = 4,
    IMCB_IMC_NOTIFY_MAX,
} imcb_imc_ss_notify_service_enum;

typedef enum {
    IMCB_IMC_SUB_EVENT_UNKNOWN = 0,
    IMCB_IMC_SUB_EVENT_CONF = 1,
    IMCB_IMC_SUB_EVENT_MAX,
} imcb_imc_ss_sub_event_enum;

typedef enum {
    IMCB_IMC_URI_SCHEME_TYPE_NONE = 0,
    IMCB_IMC_URI_SCHEME_TYPE_SIP,
    IMCB_IMC_URI_SCHEME_TYPE_TEL,
    IMCB_IMC_URI_SCHEME_TYPE_URN,
    IMCB_IMC_URI_SCHEME_TYPE_MAX
} imcb_imc_uri_scheme_type_enum;

//IMS SRVCC Enum
typedef enum {
    IMCB_IMC_SRVCC_RESULT_STARTED = 0,
    IMCB_IMC_SRVCC_RESULT_SUCCESS,
    IMCB_IMC_SRVCC_RESULT_FAILED,
    IMCB_IMC_SRVCC_RESULT_CANCELLED,
    IMCB_IMC_SRVCC_RESULT_UNKNOWN,
    IMCB_IMC_SRVCC_RESULT_MAX
} imcb_imc_srvcc_status_enum;

typedef enum {
    IMCB_IMC_SRVCC_CALL_DIRECTION_MO = 0,
    IMCB_IMC_SRVCC_CALL_DIRECTION_MT,
    IMCB_IMC_SRVCC_CALL_DIRECTION_MAX,
} imcb_imc_srvcc_call_direction_enum;

typedef enum {
    IMCB_IMC_SRVCC_CALL_STATE_EARLY = 0,
    IMCB_IMC_SRVCC_CALL_STATE_EARLY_WITH_MEDIA,
    IMCB_IMC_SRVCC_CALL_STATE_ACTIVE,
    IMCB_IMC_SRVCC_CALL_STATE_ON_HOLD,
    IMCB_IMC_SRVCC_CALL_STATE_MAX
} imcb_imc_srvcc_call_state_enum;

typedef enum {
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_UNSPECIFIED = 0,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_POLICE      = 0x1,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_AMBULANCE   = 0x2,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_FIRE        = 0x4,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_MARINE      = 0x8,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_MOUNTAIN    = 0x10,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_GAS         = 0x20,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_ANIMAL      = 0x40,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_PHYSICIAN   = 0x80,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_POISON      = 0x100,
    IMCB_IMC_SRVCC_CALL_ECC_CTGY_MAX         = 0xFFFF
} imcb_imc_srvcc_call_ecc_category_enum;

/* Ref 3GPP 26.445 Table A.3 */
/* Only for Primary mode */
typedef enum { 
    IMCB_IMC_EVS_CODEC_BITRATE_5_9 = 0x0,
    IMCB_IMC_EVS_CODEC_BITRATE_7_2,
    IMCB_IMC_EVS_CODEC_BITRATE_8_0,
    IMCB_IMC_EVS_CODEC_BITRATE_9_6,
    IMCB_IMC_EVS_CODEC_BITRATE_13_2,
    IMCB_IMC_EVS_CODEC_BITRATE_16_4,
    IMCB_IMC_EVS_CODEC_BITRATE_24_4,
    IMCB_IMC_EVS_CODEC_BITRATE_32_0,
    IMCB_IMC_EVS_CODEC_BITRATE_48_0,
    IMCB_IMC_EVS_CODEC_BITRATE_64_0,
    IMCB_IMC_EVS_CODEC_BITRATE_96_0,
    IMCB_IMC_EVS_CODEC_BITRATE_128_0 = 0xB,
    IMCB_IMC_EVS_CODEC_BITRATE_MAX,
    IMCB_IMC_EVS_CODEC_BITRATE_NONE = 0xF,
} imcb_imc_evs_codec_bitrate_enum;
    
typedef enum {
    IMCB_IMC_EVS_BANDWIDTH_NB,
    IMCB_IMC_EVS_BANDWIDTH_WB,
    IMCB_IMC_EVS_BANDWIDTH_SWB,
    IMCB_IMC_EVS_BANDWIDTH_FB,
    IMCB_IMC_EVS_BANDWIDTH_MAX,
    IMCB_IMC_EVS_BANDWIDTH_NONE = 0xF,
} imcb_imc_evs_bandwidth_enum;
    
//IMS USSI Enum
typedef enum {
    IMCB_IMC_USSD_URC_STATUS_DISABLED   = 0,
    IMCB_IMC_USSD_URC_STATUS_ENABLED    = 1,
} imcb_imc_ussd_urc_status_enum;

typedef enum {
    /* UA TLV setting */
    /* ------------------------------------------------ */
    /*  System                                          */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_SYSTEM_START_CODE  = 0,
    IMCB_IMC_TLV_SYSTEM_OPERATOR_ID = IMCB_IMC_TLV_SYSTEM_START_CODE + 1,                  ///< DATA TYPE INT
    IMCB_IMC_TLV_SYSTEM_GENERAL_SETTING = IMCB_IMC_TLV_SYSTEM_START_CODE + 2,

    /* ------------------------------------------------ */
    /*  Network Information                             */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE                = 1000,
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_ADDRESS             = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 1,     ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_PORT                = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 2,     ///< DATA TYPE INT 
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_PROTOCOL_TYPE       = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 3,     ///< UDP: 0, TCP: 1
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_PROTOCOL_VERSION    = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 4,     ///< IPV4: 1, IPV6: 2
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_IPSEC_PORT_START    = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 5,     
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_IPSEC_PORT_RANGE    = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 6,     
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_RTP_RTCP_PORT_START = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 7,     
    IMCB_IMC_TLV_NETWORK_INFORMATION_LOCAL_RTP_RTCP_PORT_RANGE = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 8,     
    IMCB_IMC_TLV_NETWORK_INFORMATION_IPSEC                     = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 9,     ///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_NETWORK_INFORMATION_CELL_ID                   = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 10,    ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_NETWORK_INFORMATION_RTP_DSCP                  = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 11,    /// FOR BUILD PASS, NEED TO REMOVE
    IMCB_IMC_TLV_NETWORK_INFORMATION_IF_NAME                   = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 12,    ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_NETWORK_INFORMATION_NETWORK_ID                = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 13,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_SIP_DSCP                  = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 14,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_RTP_VOICE_DSCP            = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 15,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_RTP_VIDEO_DSCP            = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 16,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_SIP_SOC_PRIORITY          = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 17,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_SIP_SOC_TCP_MSS           = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 18,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_RTP_VOICE_SOC_PRIORITY    = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 19,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_RTP_VIDEO_SOC_PRIORITY    = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 20,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_LBS_LOCATION_INFO         = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 21,    ///< DATA TYPE IS INTEGER
    IMCB_IMC_TLV_NETWORK_INFORMATION_SECURITY                  = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 22,
    IMCB_IMC_TLV_NETWORK_INFORMATION_AUTHENTICATION            = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 23,
    IMCB_IMC_TLV_NETWORK_INFORMATION_PCSCF_PORT                = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 24,
    IMCB_IMC_TLV_NETWORK_INFORMATION_EMERGENCY_AID             = IMCB_IMC_TLV_NETWORK_INFORMATION_START_CODE + 25,

    /* ------------------------------------------------ */
    /*  Account Settings                                */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE        = 2000,
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_PUBLIC_UID        = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 1,        ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_PRIVATE_UID       = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 2,        ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_HOME_URI          = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 3,        ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_IMEI              = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 4,        ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_CONFFACTORYURI    = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 5,
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_IMSI_MNC          = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 6,
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_IMSI_MCC          = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 7,
    IMCB_IMC_TLV_ACCOUNT_SETTINGS_MSISDN            = IMCB_IMC_TLV_ACCOUNT_SETTINGS_START_CODE + 8,

    /* ------------------------------------------------ */
    /*  Server Settings                                 */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_SERVER_SETTINGS_START_CODE         = 3000,
    IMCB_IMC_TLV_SERVER_SETTINGS_PCSCF_LIST         = IMCB_IMC_TLV_SERVER_SETTINGS_START_CODE + 1,         ///< DATA TYPE IS STRING

    /* ------------------------------------------------ */
    /*  VoLTE Service Settings                          */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_SERVICE_START_CODE                 = 10000,
    
    /* ------------------------------------------------ */
    /*  VoLTE Call Settings                             */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_CALL_START_CODE                            = 11000,
    IMCB_IMC_TLV_CALL_SESSION_FLAG                          = IMCB_IMC_TLV_CALL_START_CODE + 1,
    IMCB_IMC_TLV_CALL_SESSION_TIMER                         = IMCB_IMC_TLV_CALL_START_CODE + 2,              ///< IN SECONDS
    IMCB_IMC_TLV_CALL_SESSION_MINSE                         = IMCB_IMC_TLV_CALL_START_CODE + 3,              ///< IN SECONDS
    IMCB_IMC_TLV_CALL_PRIVACY                               = IMCB_IMC_TLV_CALL_START_CODE + 4,
    IMCB_IMC_TLV_CALL_CAPABILITY                            = IMCB_IMC_TLV_CALL_START_CODE + 5,              ///< DATA TYPE IS ::VOLTE_CALL_CAPABILITY_TYPE_E
    IMCB_IMC_TLV_CALL_RTCP_INTERVAL                         = IMCB_IMC_TLV_CALL_START_CODE + 6,              ///< IN MS
    IMCB_IMC_TLV_CALL_EARLY_MEDIA                           = IMCB_IMC_TLV_CALL_START_CODE + 7,              ///< IF THE INCOMING CALL SUPPORT EARLY MEDIA, SHALL WE REQUIRE IT TO PLAY?
    IMCB_IMC_TLV_CALL_CODECORDER1                           = IMCB_IMC_TLV_CALL_START_CODE + 8,              ///< VOIP_CODEC_ENUM
    IMCB_IMC_TLV_CALL_CODECORDER2                           = IMCB_IMC_TLV_CALL_START_CODE + 9,              ///< VOIP_CODEC_ENUM
    IMCB_IMC_TLV_CALL_CODECORDER3                           = IMCB_IMC_TLV_CALL_START_CODE + 10,              ///< VOIP_CODEC_ENUM
    IMCB_IMC_TLV_CALL_DEF_MAX_PTIME                         = IMCB_IMC_TLV_CALL_START_CODE + 11,
    IMCB_IMC_TLV_CALL_DEF_PTIME                             = IMCB_IMC_TLV_CALL_START_CODE + 12,
    IMCB_IMC_TLV_CALL_G711_PTIME                            = IMCB_IMC_TLV_CALL_START_CODE + 13,
    IMCB_IMC_TLV_CALL_G726_PTIME                            = IMCB_IMC_TLV_CALL_START_CODE + 14,
    IMCB_IMC_TLV_CALL_G729_PTIME                            = IMCB_IMC_TLV_CALL_START_CODE + 15,
    IMCB_IMC_TLV_CALL_AMR_PT                                = IMCB_IMC_TLV_CALL_START_CODE + 16,
    IMCB_IMC_TLV_CALL_AMR_WB_PT                             = IMCB_IMC_TLV_CALL_START_CODE + 17,
    IMCB_IMC_TLV_CALL_H264_PT                               = IMCB_IMC_TLV_CALL_START_CODE + 18,
    IMCB_IMC_TLV_CALL_G729_ANNEXB                           = IMCB_IMC_TLV_CALL_START_CODE + 19,
    IMCB_IMC_TLV_CALL_TELEVT                                = IMCB_IMC_TLV_CALL_START_CODE + 20,
    IMCB_IMC_TLV_CALL_TELEVT_PT                             = IMCB_IMC_TLV_CALL_START_CODE + 21,
    IMCB_IMC_TLV_CALL_PRIORITY                              = IMCB_IMC_TLV_CALL_START_CODE + 22,
    IMCB_IMC_TLV_CALL_USERAGENT                             = IMCB_IMC_TLV_CALL_START_CODE + 23,             ///< VOLTE_MAX_ADDRESS_LENGTH
    IMCB_IMC_TLV_CALL_REJCODE                               = IMCB_IMC_TLV_CALL_START_CODE + 24,
    IMCB_IMC_TLV_CALL_NORESOURCECODE                        = IMCB_IMC_TLV_CALL_START_CODE + 25,
    IMCB_IMC_TLV_CALL_REJMEDIACODE                          = IMCB_IMC_TLV_CALL_START_CODE + 26,
    IMCB_IMC_TLV_CALL_REJBYUSERCODE                         = IMCB_IMC_TLV_CALL_START_CODE + 27,
    IMCB_IMC_TLV_CALL_CONF_SUBTIMER                         = IMCB_IMC_TLV_CALL_START_CODE + 28,
    IMCB_IMC_TLV_CALL_AMR_MODE_SET                          = IMCB_IMC_TLV_CALL_START_CODE + 29,
    IMCB_IMC_TLV_CALL_AMR_WB_MODE_SET                       = IMCB_IMC_TLV_CALL_START_CODE + 30,
    IMCB_IMC_TLV_CALL_AMR_FMT_VARIANT                       = IMCB_IMC_TLV_CALL_START_CODE + 31,
    IMCB_IMC_TLV_CALL_PRECONDITION                          = IMCB_IMC_TLV_CALL_START_CODE + 32,
    IMCB_IMC_TLV_CALL_MO_INVITE_TO_BWCNF_TIME               = IMCB_IMC_TLV_CALL_START_CODE + 33,
    IMCB_IMC_TLV_CALL_H264_PT2                              = IMCB_IMC_TLV_CALL_START_CODE + 34,
    IMCB_IMC_TLV_CALL_H265_PT                               = IMCB_IMC_TLV_CALL_START_CODE + 35,
    IMCB_IMC_TLV_CALL_H265_PT2                              = IMCB_IMC_TLV_CALL_START_CODE + 36,
    IMCB_IMC_TLV_CALL_AMR_OCT_PT                            = IMCB_IMC_TLV_CALL_START_CODE + 37,
    IMCB_IMC_TLV_CALL_AMR_OPEN_PT                           = IMCB_IMC_TLV_CALL_START_CODE + 38,
    IMCB_IMC_TLV_CALL_AMR_WB_OCT_PT                         = IMCB_IMC_TLV_CALL_START_CODE + 39,
    IMCB_IMC_TLV_CALL_TELEVT_WB_PT                          = IMCB_IMC_TLV_CALL_START_CODE + 40,

    IMCB_IMC_TLV_CALL_CONTACT_WITH_USERNAME_INCALL          = IMCB_IMC_TLV_CALL_START_CODE + 41,
    IMCB_IMC_TLV_CALL_SENDRECV_BEFORE_PRCD                  = IMCB_IMC_TLV_CALL_START_CODE + 42,
    IMCB_IMC_TLV_CALL_ALWAYS_USE_UPDATE_FOR_PRCD            = IMCB_IMC_TLV_CALL_START_CODE + 43,
    IMCB_IMC_TLV_CALL_MERGE_NEED_SWAP                       = IMCB_IMC_TLV_CALL_START_CODE + 44,
    IMCB_IMC_TLV_CALL_ALWAYS_USE_SIP_URI_FOR_MO_CALL        = IMCB_IMC_TLV_CALL_START_CODE + 45,
    IMCB_IMC_TLV_CALL_SET_STRENGTH_MANDATORY                = IMCB_IMC_TLV_CALL_START_CODE + 46,
    IMCB_IMC_TLV_CALL_SEND_REFER_TO_PEER                    = IMCB_IMC_TLV_CALL_START_CODE + 47,
    IMCB_IMC_TLV_CALL_ADD_3GPP_IMS_IN_ACCEPT                = IMCB_IMC_TLV_CALL_START_CODE + 48,
    IMCB_IMC_TLV_CALL_TERMINAL_BASED_CW                     = IMCB_IMC_TLV_CALL_START_CODE + 49,
    IMCB_IMC_TLV_CALL_REFER_DIALOG_TO_SERVER                = IMCB_IMC_TLV_CALL_START_CODE + 50,
    IMCB_IMC_TLV_CALL_CHECK_REASON_PHRASE                   = IMCB_IMC_TLV_CALL_START_CODE + 51,
    IMCB_IMC_TLV_CALL_MERGE_SEND_BYE                        = IMCB_IMC_TLV_CALL_START_CODE + 52,
    IMCB_IMC_TLV_CALL_WHEN_STOP_TCALL                       = IMCB_IMC_TLV_CALL_START_CODE + 53,
    IMCB_IMC_TLV_CALL_SET_RTCP_0                            = IMCB_IMC_TLV_CALL_START_CODE + 54,
    IMCB_IMC_TLV_CALL_CHECK_CONTACT_380                     = IMCB_IMC_TLV_CALL_START_CODE + 55,
    IMCB_IMC_TLV_CALL_CONF_PARTICIPANT_NOT_SUBSCRIBE        = IMCB_IMC_TLV_CALL_START_CODE + 56,
    IMCB_IMC_TLV_CALL_ADD_SDP_IN_180_FOR_NON_PRECOND        = IMCB_IMC_TLV_CALL_START_CODE + 57,
    IMCB_IMC_TLV_CALL_ADD_PRECONDITION_IN_HOLD_UNHOLD_SDP   = IMCB_IMC_TLV_CALL_START_CODE + 58,
    IMCB_IMC_TLV_CALL_USE_ORG_SDP_FOR_INVITE_WITHOUT_SDP    = IMCB_IMC_TLV_CALL_START_CODE + 59,
    IMCB_IMC_TLV_CALL_OIR_PRIVACY_TO_HEADER                 = IMCB_IMC_TLV_CALL_START_CODE + 60,
    IMCB_IMC_TLV_CALL_REGISTER_CAP_WHENEVER                 = IMCB_IMC_TLV_CALL_START_CODE + 61,
    IMCB_IMC_TLV_CALL_NO_AUTO_RETRY_FOR_MO_CALL             = IMCB_IMC_TLV_CALL_START_CODE + 62,
    IMCB_IMC_TLV_CALL_USE_EPS_PREFIX_IN_PHONE_CONTEXT       = IMCB_IMC_TLV_CALL_START_CODE + 63,
    IMCB_IMC_TLV_CALL_FOLLOW_NW_IMS_VOPS_SUPPORT            = IMCB_IMC_TLV_CALL_START_CODE + 64,
    IMCB_IMC_TLV_CALL_ATTEMPT_REG_WHEN_RECEIVE403           = IMCB_IMC_TLV_CALL_START_CODE + 65,
    IMCB_IMC_TLV_CALL_WAITING_487_FOR_CANCEL_TIMER_TIMEOUT  = IMCB_IMC_TLV_CALL_START_CODE + 66,
    IMCB_IMC_TLV_CALL_BCSFB_FEATURE_ENABLE                  = IMCB_IMC_TLV_CALL_START_CODE + 67,
    IMCB_IMC_TLV_CALL_SEND_183_WHEN_PRCD_NONE               = IMCB_IMC_TLV_CALL_START_CODE + 68,
    IMCB_IMC_TLV_CALL_CALL_ID_WITH_HOST_INCALL              = IMCB_IMC_TLV_CALL_START_CODE + 69,
    IMCB_IMC_TLV_CALL_ADD_RTCP_PORT_INTO_SDP                = IMCB_IMC_TLV_CALL_START_CODE + 70,
    IMCB_IMC_TLV_CALL_ECC_SESSION_TIMER_ENABLE              = IMCB_IMC_TLV_CALL_START_CODE + 71,
    IMCB_IMC_TLV_CALL_SUBSCRIBE_DIALOG_TO_SERVER            = IMCB_IMC_TLV_CALL_START_CODE + 72,
    IMCB_IMC_TLV_CALL_CHECK_CONFERENCE_SUBSCRIBE            = IMCB_IMC_TLV_CALL_START_CODE + 73,
    IMCB_IMC_TLV_CALL_CONFERENCE_SUBSCRIBE_TIMING           = IMCB_IMC_TLV_CALL_START_CODE + 74,
    IMCB_IMC_TLV_CALL_GENERAL_AMR_NB_WB                     = IMCB_IMC_TLV_CALL_START_CODE + 75,
    IMCB_IMC_TLV_CALL_DISABLE_CONF_CALL_PRCD                = IMCB_IMC_TLV_CALL_START_CODE + 76,
    IMCB_IMC_TLV_CALL_WAIT_CANCEL_IN_SRVCC_END              = IMCB_IMC_TLV_CALL_START_CODE + 77,
    IMCB_IMC_TLV_CALL_REJECT_1W_IF_1A1H                     = IMCB_IMC_TLV_CALL_START_CODE + 78,
    IMCB_IMC_TLV_CALL_NO_AUTO_RETRY_FOR_DCM_MO_CALL         = IMCB_IMC_TLV_CALL_START_CODE + 79,
    IMCB_IMC_TLV_CALL_JOIN_SEND_BYE                         = IMCB_IMC_TLV_CALL_START_CODE + 80,
    IMCB_IMC_TLV_CALL_SET_ZERO_CELL_ID_IN_WIFI              = IMCB_IMC_TLV_CALL_START_CODE + 81,
    IMCB_IMC_TLV_CALL_REJECT_MTCALL_BY_VOPS                 = IMCB_IMC_TLV_CALL_START_CODE + 82,
    IMCB_IMC_TLV_CALL_REJECT_MTCALL_WHEN_VILTE              = IMCB_IMC_TLV_CALL_START_CODE + 83,
    IMCB_IMC_TLV_CALL_NOT_ADD_SDP_IN_OPTIONS                = IMCB_IMC_TLV_CALL_START_CODE + 84,
    IMCB_IMC_TLV_CALL_PCSCF_ERROR_WHEN663                   = IMCB_IMC_TLV_CALL_START_CODE + 85,
    IMCB_IMC_TLV_CALL_REL_CONF_IF_NO_PARTICIPANT            = IMCB_IMC_TLV_CALL_START_CODE + 86,
    IMCB_IMC_TLV_CALL_ADD_NO_FORK                           = IMCB_IMC_TLV_CALL_START_CODE + 87,
    IMCB_IMC_TLV_CALL_TMO_SPECIFIC_SDP                      = IMCB_IMC_TLV_CALL_START_CODE + 88,
    IMCB_IMC_TLV_CALL_CALL_RINGING_TIMER_TIMEOUT            = IMCB_IMC_TLV_CALL_START_CODE + 89,
    IMCB_IMC_TLV_CALL_CALL_RINGBACK_TIMER_TIMEOUT           = IMCB_IMC_TLV_CALL_START_CODE + 90,
    IMCB_IMC_TLV_CALL_CALL_TCALL_TIMER_TIMEOUT              = IMCB_IMC_TLV_CALL_START_CODE + 91,
    IMCB_IMC_TLV_CALL_REJECT_CODE_IN23G                     = IMCB_IMC_TLV_CALL_START_CODE + 92,
    IMCB_IMC_TLV_CALL_CALL_REFRESHCALL_TIMER_EXPIRE         = IMCB_IMC_TLV_CALL_START_CODE + 93,
    IMCB_IMC_TLV_CALL_CALL_CALLEND_TIMER_TIMEOUT            = IMCB_IMC_TLV_CALL_START_CODE + 94,
    IMCB_IMC_TLV_CALL_WAITING_MT_CNF_TIMER_TIMEOUT          = IMCB_IMC_TLV_CALL_START_CODE + 95,
    IMCB_IMC_TLV_CALL_CONF_SUB_TIMER_TIMEOUT                = IMCB_IMC_TLV_CALL_START_CODE + 96,
    IMCB_IMC_TLV_CALL_MO_INVITE_TO_BW_CNF_TIMER_TIMEOUT     = IMCB_IMC_TLV_CALL_START_CODE + 97,
    IMCB_IMC_TLV_CALL_SRVCC_CAPABILITY                      = IMCB_IMC_TLV_CALL_START_CODE + 98,
    IMCB_IMC_TLV_Call_EVS_SUPPORT                           = IMCB_IMC_TLV_CALL_START_CODE + 99,
    IMCB_IMC_TLV_Call_EVS_MODE_SWITCH                       = IMCB_IMC_TLV_CALL_START_CODE + 100,
    IMCB_IMC_TLV_Call_HF_ONLY                               = IMCB_IMC_TLV_CALL_START_CODE + 101,
    IMCB_IMC_TLV_Call_DTX                                   = IMCB_IMC_TLV_CALL_START_CODE + 102,
    IMCB_IMC_TLV_Call_DTX_RECV                              = IMCB_IMC_TLV_CALL_START_CODE + 103,
    IMCB_IMC_TLV_Call_BR_BEGIN                              = IMCB_IMC_TLV_CALL_START_CODE + 104,
    IMCB_IMC_TLV_Call_BR_END                                = IMCB_IMC_TLV_CALL_START_CODE + 105,
    IMCB_IMC_TLV_Call_BR_SEND_BEGIN                         = IMCB_IMC_TLV_CALL_START_CODE + 106,
    IMCB_IMC_TLV_Call_BR_SEND_END                           = IMCB_IMC_TLV_CALL_START_CODE + 107,
    IMCB_IMC_TLV_Call_BR_RECV_BEGIN                         = IMCB_IMC_TLV_CALL_START_CODE + 108,
    IMCB_IMC_TLV_Call_BR_RECV_END                           = IMCB_IMC_TLV_CALL_START_CODE + 109,
    IMCB_IMC_TLV_Call_BW_BEGIN                              = IMCB_IMC_TLV_CALL_START_CODE + 110,
    IMCB_IMC_TLV_Call_BW_END                                = IMCB_IMC_TLV_CALL_START_CODE + 111,
    IMCB_IMC_TLV_Call_BW_SEND_BEGIN                         = IMCB_IMC_TLV_CALL_START_CODE + 112,
    IMCB_IMC_TLV_Call_BW_SEND_END                           = IMCB_IMC_TLV_CALL_START_CODE + 113,
    IMCB_IMC_TLV_Call_BW_RECV_BEGIN                         = IMCB_IMC_TLV_CALL_START_CODE + 114,
    IMCB_IMC_TLV_Call_BW_RECV_END                           = IMCB_IMC_TLV_CALL_START_CODE + 115,
    IMCB_IMC_TLV_Call_CH_SEND                               = IMCB_IMC_TLV_CALL_START_CODE + 116,
    IMCB_IMC_TLV_Call_CH_RECV                               = IMCB_IMC_TLV_CALL_START_CODE + 117,
    IMCB_IMC_TLV_Call_CH_AW_RECV                            = IMCB_IMC_TLV_CALL_START_CODE + 118,
    IMCB_IMC_TLV_Call_CMR                                   = IMCB_IMC_TLV_CALL_START_CODE + 119,

    /* ------------------------------------------------ */
    /*  VoLTE MWI Settings                              */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_MWI_START_CODE                 = IMCB_IMC_TLV_CALL_START_CODE + 900,

    /* ------------------------------------------------ */
    /*  VoLTE SMS Settings                              */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_SMS_START_CODE                 = 12000,
    IMCB_IMC_TLV_SMS_CAPABILITY                 = IMCB_IMC_TLV_SMS_START_CODE + 1,               ///< DATA TYPE IS BOOLEAN (1 OR 0) */
    IMCB_IMC_TLV_SMS_3GPP_SMS_PSI               = IMCB_IMC_TLV_SMS_START_CODE + 2,               ///< DATA TYPE IS STRING

    IMCB_IMC_TLV_SMS_PSISMSC_FROM_USER          = IMCB_IMC_TLV_SMS_START_CODE + 3,
    IMCB_IMC_TLV_SMS_FORCE_PSI_SCHEME_TO_TEL    = IMCB_IMC_TLV_SMS_START_CODE + 4,
    IMCB_IMC_TLV_SMS_ADD_USER_PHONE             = IMCB_IMC_TLV_SMS_START_CODE + 5,
    IMCB_IMC_TLV_SMS_UPDATE_CALL_ID_WITH_HOST   = IMCB_IMC_TLV_SMS_START_CODE + 6,
    IMCB_IMC_TLV_SMS_ADD_NO_FORK_IN_SMS         = IMCB_IMC_TLV_SMS_START_CODE + 7,
    IMCB_IMC_TLV_SMS_NSN_SPECIFIC               = IMCB_IMC_TLV_SMS_START_CODE + 8,
    IMCB_IMC_TLV_SMS_MO_RETRY_AFTER_504         = IMCB_IMC_TLV_SMS_START_CODE + 9,
    IMCB_IMC_TLV_SMS_SEND_TIMERF_EXPIRY         = IMCB_IMC_TLV_SMS_START_CODE + 10,
    IMCB_IMC_TLV_SMS_IMSI_REGED_DISABLE_SMS     = IMCB_IMC_TLV_SMS_START_CODE + 11,

    /* ------------------------------------------------ */
    /*  VoLTE XDM Settings                              */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_XDM_START_CODE                     = 13000,
    
    /* ------------------------------------------------ */
    /*  VoLTE REG Settings                              */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_REG_START_CODE                                     = 14000,
    IMCB_IMC_TLV_REG_REGISTER_EXPIRY                                = IMCB_IMC_TLV_REG_START_CODE + 1,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_REG_EVENT_SUBSCRIBE                                = IMCB_IMC_TLV_REG_START_CODE + 2,               ///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_REG_EMERGENCY                                      = IMCB_IMC_TLV_REG_START_CODE + 3,               ///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_REG_RETRY_FIRST_TIME                               = IMCB_IMC_TLV_REG_START_CODE + 4,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_REG_RETRY_BASE_TIME                                = IMCB_IMC_TLV_REG_START_CODE + 5,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_REG_RETRY_MAX_TIME                                 = IMCB_IMC_TLV_REG_START_CODE + 6,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_REG_CONTACT_WITH_USERNAME                          = IMCB_IMC_TLV_REG_START_CODE + 7,               ///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_REG_URI_WITH_PORT                                  = IMCB_IMC_TLV_REG_START_CODE + 8,               ///< DISABLE: 0, ENABLE: 1   
    IMCB_IMC_TLV_REG_IPSEC_ALGO_SET                                 = IMCB_IMC_TLV_REG_START_CODE + 9,				///< DATA TYPE IS INT	 
    IMCB_IMC_TLV_REG_ENABLE_HTTP_DIGEST	                            = IMCB_IMC_TLV_REG_START_CODE + 10,				///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_REG_AUTH_NAME			                            = IMCB_IMC_TLV_REG_START_CODE + 11,			   ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_REG_AUTH_PASSWORD		                            = IMCB_IMC_TLV_REG_START_CODE + 12,			   ///< DATA TYPE IS STRING
	IMCB_IMC_TLV_REG_SPECIFIC_IPSEC_ALGO                            = IMCB_IMC_TLV_REG_START_CODE + 13,				 ///< DATA TYPE IS INT	 
    IMCB_IMC_TLV_REG_CONTACT_WITH_TRANSPORT                         = IMCB_IMC_TLV_REG_START_CODE + 14,
    IMCB_IMC_TLV_REG_CONTACT_WITH_REGID                             = IMCB_IMC_TLV_REG_START_CODE + 15,
    IMCB_IMC_TLV_REG_CONTACT_WITH_MOBILITY                          = IMCB_IMC_TLV_REG_START_CODE + 16,
    IMCB_IMC_TLV_REG_CONTACT_WITH_EXPIRES                           = IMCB_IMC_TLV_REG_START_CODE + 17,
    IMCB_IMC_TLV_REG_AUTHORIZATION_WITH_ALGO                        = IMCB_IMC_TLV_REG_START_CODE + 18,
    IMCB_IMC_TLV_REG_REREG_IN_RAT_CHANGE                            = IMCB_IMC_TLV_REG_START_CODE + 19,
    IMCB_IMC_TLV_REG_REREG_IN_OOS_END                               = IMCB_IMC_TLV_REG_START_CODE + 20,
    IMCB_IMC_TLV_REG_DE_SUBSCRIBE                                   = IMCB_IMC_TLV_REG_START_CODE + 21,
    IMCB_IMC_TLV_REG_USE_SPECIFIC_IPSEC_ALGO                        = IMCB_IMC_TLV_REG_START_CODE + 22,
    IMCB_IMC_TLV_REG_TRY_NEXT_PCSCF                                 = IMCB_IMC_TLV_REG_START_CODE + 23,
    IMCB_IMC_TLV_REG_DEREG_CLEAR_IPSEC                              = IMCB_IMC_TLV_REG_START_CODE + 24,
    IMCB_IMC_TLV_REG_INITIAL_REG_WITHOUT_PANI                       = IMCB_IMC_TLV_REG_START_CODE + 25,
    IMCB_IMC_TLV_REG_DEREG_RESET_TCP_CLIENT                         = IMCB_IMC_TLV_REG_START_CODE + 26,
    IMCB_IMC_TLV_REG_TREG                                           = IMCB_IMC_TLV_REG_START_CODE + 27,
    IMCB_IMC_TLV_REG_REREG_23G4                                     = IMCB_IMC_TLV_REG_START_CODE + 28,
    IMCB_IMC_TLV_REG_RESUB_23G4                                     = IMCB_IMC_TLV_REG_START_CODE + 29,
    IMCB_IMC_TLV_REG_NOT_AUTO_REG_403                               = IMCB_IMC_TLV_REG_START_CODE + 30,
    IMCB_IMC_TLV_REG_CALL_ID_WITH_HOST_INREG                        = IMCB_IMC_TLV_REG_START_CODE + 31,
    IMCB_IMC_TLV_REG_KEEP_ALIVE_MODE                                = IMCB_IMC_TLV_REG_START_CODE + 32,
    IMCB_IMC_TLV_REG_TCP_CONNECT_MAX_TIME_INVITE                    = IMCB_IMC_TLV_REG_START_CODE + 33,
    IMCB_IMC_TLV_REG_EMS_MODE_IND                                   = IMCB_IMC_TLV_REG_START_CODE + 34,
    IMCB_IMC_TLV_REG_CONTACT_WITH_ACCESSTYPE                        = IMCB_IMC_TLV_REG_START_CODE + 35,
    IMCB_IMC_TLV_REG_WFC_WITH_PLANI                                 = IMCB_IMC_TLV_REG_START_CODE + 36,
    IMCB_IMC_TLV_REG_USE_UDP_ON_TCP_FAIL                            = IMCB_IMC_TLV_REG_START_CODE + 37,
    IMCB_IMC_TLV_REG_IPSEC_FAIL_ALLOWED                             = IMCB_IMC_TLV_REG_START_CODE + 38,
    IMCB_IMC_TLV_REG_CONTACT_WITH_VIDEO_FEATURE_TAG_IN_SUBSCRIBE    = IMCB_IMC_TLV_REG_START_CODE + 39,
    IMCB_IMC_TLV_REG_VIA_WITHOUT_RPORT                              = IMCB_IMC_TLV_REG_START_CODE + 40,
    IMCB_IMC_TLV_REG_REG_ROUTE_HDR                                  = IMCB_IMC_TLV_REG_START_CODE + 41,
    IMCB_IMC_TLV_REG_VIA_URI_WITH_DEFAULT_PORT                      = IMCB_IMC_TLV_REG_START_CODE + 42,
    IMCB_IMC_TLV_REG_NOTIFY_SMS_NOTIFY_DONE                         = IMCB_IMC_TLV_REG_START_CODE + 43,
    IMCB_IMC_TLV_REG_EMERGENCY_USE_IMSI                             = IMCB_IMC_TLV_REG_START_CODE + 44,
    IMCB_IMC_TLV_REG_CHECK_MSISDN                                   = IMCB_IMC_TLV_REG_START_CODE + 45,
    IMCB_IMC_TLV_REG_RETRY_INTERVAL_AFTER_403                       = IMCB_IMC_TLV_REG_START_CODE + 46,
    IMCB_IMC_TLV_REG_SUPPORT_THROTTLING_ALGO                        = IMCB_IMC_TLV_REG_START_CODE + 47,
    IMCB_IMC_TLV_REG_REG_AFTER_NW_DEREG_60S                         = IMCB_IMC_TLV_REG_START_CODE + 48,
    IMCB_IMC_TLV_REG_SUB_CONTACT_WITH_SIP_INSTANCE                  = IMCB_IMC_TLV_REG_START_CODE + 49,
    IMCB_IMC_TLV_REG_STOP_REG_MD_LOWER_LAYER_ERR                    = IMCB_IMC_TLV_REG_START_CODE + 50,
    IMCB_IMC_TLV_REG_REG_GRUU_SUPPORT                               = IMCB_IMC_TLV_REG_START_CODE + 51,

    /* ------------------------------------------------ */
    /*  VoLTE SIP Settings                              */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_SIP_START_CODE         = 15000,
    IMCB_IMC_TLV_SIP_T1_TIMER           = IMCB_IMC_TLV_SIP_START_CODE + 1,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_SIP_T2_TIMER           = IMCB_IMC_TLV_SIP_START_CODE + 2,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_SIP_T4_TIMER           = IMCB_IMC_TLV_SIP_START_CODE + 3,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_SIP_KEEP_ALIVE         = IMCB_IMC_TLV_SIP_START_CODE + 4,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_SIP_FORCE_USE_UDP      = IMCB_IMC_TLV_SIP_START_CODE + 5,               ///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_SIP_TCP_ON_DEMAND      = IMCB_IMC_TLV_SIP_START_CODE + 6,               ///< DISABLE: 0, ENABLE: 1
    IMCB_IMC_TLV_SIP_TCP_MTU_SIZE       = IMCB_IMC_TLV_SIP_START_CODE + 7,               ///< DATA TYPE IS INT
    IMCB_IMC_TLV_SIP_REG_TIMESTAMP      = IMCB_IMC_TLV_SIP_START_CODE + 8,               ///< DATA TYPE IS STRING, FOR WFC PLANI HEADER
    IMCB_IMC_TLV_SIP_TRANSACTION_TIMER  = IMCB_IMC_TLV_SIP_START_CODE + 9,               ///< DATA TYPE IS INT
    
    /* ------------------------------------------------ */
    /*  VoLTE USSD Settings                              */
    /* ------------------------------------------------ */
    IMCB_IMC_TLV_USSD_START_CODE            = 16000,
    IMCB_IMC_TLV_USSD_NW_TIMEOUT_TIMER      = IMCB_IMC_TLV_USSD_START_CODE + 1,               ///< DATA TYPE IS UINT8 */
    IMCB_IMC_TLV_USSD_SETUP_TIMEOUT_TIMER   = IMCB_IMC_TLV_USSD_START_CODE + 2,               ///< DATA TYPE IS UINT8 */
    IMCB_IMC_TLV_USSD_CAPABILITY            = IMCB_IMC_TLV_USSD_START_CODE + 3,               ///< DATA TYPE IS UINT8 */

    /* IMCB <-> IMC internal */
    IMCB_IMC_TLV_START_CODE                 = 100000,
    IMCB_IMC_TLV_VIDEO_CAPABILITY           = IMCB_IMC_TLV_START_CODE + 1,
    IMCB_IMC_TLV_VOICE_CAPABILITY           = IMCB_IMC_TLV_START_CODE + 2,
    IMCB_IMC_TLV_IGNORE_SGN_QCI_CHECK       = IMCB_IMC_TLV_START_CODE + 3,
    IMCB_IMC_TLV_IGNORE_MEDIA_QOS_CHECK     = IMCB_IMC_TLV_START_CODE + 4,
    IMCB_IMC_TLV_DEFAULT_FALLBACK_SUPPORT   = IMCB_IMC_TLV_START_CODE + 5,
    IMCB_IMC_TLV_DEDICATED_FALLBACK_SUPPORT = IMCB_IMC_TLV_START_CODE + 6,
    IMCB_IMC_TLV_RESTORE_PCSCF              = IMCB_IMC_TLV_START_CODE + 7,
    IMCB_IMC_TLV_NOT_ACQUIRE_AUDIO_RTCP     = IMCB_IMC_TLV_START_CODE + 8,
    IMCB_IMC_TLV_NOT_ACQUIRE_VIDEO_RTCP     = IMCB_IMC_TLV_START_CODE + 9,
    IMCB_IMC_TLV_IMCB_SETTING_STRING        = IMCB_IMC_TLV_START_CODE + 10,
    IMCB_IMC_TLV_PCSCF_HOME_POLICY_LIST     = IMCB_IMC_TLV_START_CODE + 11,             ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_PCSCF_VISIT_POLICY_LIST    = IMCB_IMC_TLV_START_CODE + 12,             ///< DATA TYPE IS STRING
    IMCB_IMC_TLV_GENERAL_SETTING            = IMCB_IMC_TLV_START_CODE + 13,
} imcb_imc_tlv_para_enum;

//IMS Common Interface
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 is_test_mode_on;
} imcb_imc_set_test_mode_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 reserved;
} imcb_imc_set_test_mode_cell_info_req_struct;

typedef struct {
    imcf_uint8 is_connected; //boolean, IMSA is connected to UA or not
    imcf_uint8 pad[3];
} imcb_imc_comm_error_req_struct;

#define IMS_MAX_TIME_STAMP_LENGTH 32
typedef struct
{
    imcf_int32  lat[2]; //double lat
    imcf_int32  lng[2]; //double lng
    imcf_int32  acc;
    imcf_uint8  timestamp[IMS_MAX_TIME_STAMP_LENGTH]; //32
} imcb_imc_loc_ts_struct;

/**
 * Description
 *  - the primitive is used for IMC indicate information to IMCB/UA,
 *    and IMCB will mapping(relay) to UA by UA's event msessage - VoLTE_REQ_INIT
 * Direction
 *	- IMC -> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 struct_verno;
    imcf_uint32 msgid_verno;
} imcb_imc_ims_init_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 verno;
} imcb_imc_imsa_connect_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 is_connected;
} imcb_imc_va_connect_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 account_id;
    imcf_uint8 rat_type; //imc_rat_type_enum
    imcf_uint8 pad[2];
    /* WFC */
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_rat_change_ind_struct;

typedef struct {
	IMCB_IMC_LOCAL_PARA_HDR
	imcf_uint8  account_id;
	imcf_uint8  event_type;// 0: Signal is weak  1: LTE OOS search is on-going and may not recover
	imcf_uint16 lte_band;// the LTE band number, UA don't use it currently, just reserve(0: Invalid, 1-256: possible LTE band range)
} imcb_imc_rlm_event_ind_struct;

//IMS SIM Interface
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8    sim_type;   //ims_sim_type_enum
    imcf_uint8    session_id;
    imcf_uint8    pad[2];
} imcb_imc_sim_ready_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8    sim_type;   //ims_sim_type_enum
    imcf_uint8    session_id;
    imcf_uint8    pad[2];
} imcb_imc_sim_refresh_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32	reason;
} imcb_imc_sim_error_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32	reason;
} imcb_imc_sim_query_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8    sim_usim_type;    //ims_sim_type_enum
    imcf_uint8    isim_type;        //ims_sim_type_enum
    imcf_uint8    session_id;
    imcf_uint8    pad[2];
} imcb_imc_sim_query_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8  data_type;    //ims_sim_usim_data_enum
    imcf_uint8  pad[3];
} imcb_imc_read_sim_usim_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8                is_success;   //boolean
    imcf_uint8                data_type;    //ims_sim_usim_data_enum
    imcf_uint8                num_of_data;
    imcf_uint8                mnc_len;
    ims_sim_usim_data_struct  sim_usim_data;
} imcb_imc_read_sim_usim_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8  data_type; //ims_isim_data_enum
    imcf_uint8  pad[3];
} imcb_imc_read_isim_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8  is_success;
    imcf_uint8  data_type;  // ims_isim_data_enum
    imcf_uint8  num_of_data;
    imcf_uint8  pad[1];
    ims_isim_data_struct isim_data[5];
} imcb_imc_read_isim_rsp_struct;

//IMS Registration Interface
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  account_id;
    imcf_int32  type;    // imcb_imc_query_type_enum
} imcb_imc_query_state_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  account_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_query_state_cnf_struct;

/**
 * Description
 *  - the primitive is used for IMC indicate information to IMCB,
 *    and IMCB will mapping(relay) to UA by UA's event msessage - VoLTE_REQ_UPDATE_RT_SETTING
 * Direction
 *	- IMC -> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 				account_id;
    imcf_uint8              imei_len;
    imcf_uint8              pad[2];
    imcf_uint8              imei[IMC_MAX_IMEI_LEN];

    imcf_uint8              imsi_mnc_len;
    imcf_uint8              pad1[3];
    imcf_uint8              imsi_mnc[IMC_MAX_MNC_MCC_LEN];

    imcf_uint8              imsi_mcc_len;
    imcf_uint8              pad2[3];
    imcf_uint8              imsi_mcc[IMC_MAX_MNC_MCC_LEN];

    imcf_uint8              impi_len;
    imcf_uint8              pad3[3];
    imcf_uint8    			impi[IMC_MAX_IMPI_LEN];

    imcf_uint8 				num_of_impu;
    imcf_uint8              pad4[3];
    ims_impu_struct			impu[IMC_MAX_IMPU_NUM];

    imcf_uint8              domain_name_len;
    imcf_uint8              pad5[3];
    imcf_uint8            	domain_name[IMC_MAX_DOMAIN_NAME_LEN];

    imcf_uint8              psismsc_len;
    imcf_uint8              pad6[3];
    imcf_uint8              psismsc[IMC_MAX_ISIM_PSISMSC_LEN]; // should equal IMC_MAX_USIM_PSISMSC_LEN and IMC_MAX_SIM_SMSP_LEN

    /********************INIT Configuration ****************/
    /* IMCB part */
    imcf_uint32 resource_retain_timer;
    imcf_uint32 emergency_pdn_retain_timer;
    imcf_uint32 poweroff_ims_dereg_timer;
    imcf_uint8  pcscf_priority_list[8];
    imcf_uint8  set_ue_im_cn_signaling_flag;
    imcf_uint8  check_nw_im_cn_signaling_flag;
    imcf_uint8  ims_signaling_qci;
    imcf_uint8  ims_voice_qci;
    imcf_uint8  ims_video_qci;
    imcf_uint8  ims_v4v6_preference; // imc_v4v6_preference_enum
    imcf_uint8  pcscf_manual_support;
    imcf_uint8  pcscf_mo_support;
    imcf_uint8  pcscf_sim_support;
    imcf_uint8  pcscf_pco_renew_support;
    imcf_uint8  resource_allocation_mode;   //config UE initial or NW initial dedicated EPS bearer activation
    imcf_uint8  is_roaming;
    imcf_uint8  set_pcscf_discovery_via_nas;
    imcf_uint8  em_reg_scheme;
    imcf_uint8  ims_aka_cal_decision;
    imcf_uint8  voice_bearer_ctrl; // imcb_imc_voice_bearer_ctrl_enum
    imcf_uint8  pcscf_manual_list[16];
    imcf_uint8  default_pcscf_address_is_v4;
    imcf_uint8  pad7[3];
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];

    /* UA part */
    imcf_uint32  local_port;
    imcf_uint32  ipsec_local_port_start;
    imcf_uint32  ipsec_local_port_range;
    imcf_uint32  rtp_rtcp_local_port_start;
    imcf_uint32  rtp_rtcp_local_port_range;
    imcf_uint32  rtcp_interval;

    /* WFC */
    imcf_uint32  sip_dscp;
    imcf_uint32  sip_priority;
    imcf_uint32  dscp;             /*audio*/
    imcf_uint32  audio_priority;
    imcf_uint32  video_dscp;
    imcf_uint32  video_priority;

    imcf_uint32  register_expiry;
    imcf_uint32  UA_reg_t1_timer;
    imcf_uint32  UA_reg_t2_timer;
    imcf_uint32  UA_reg_t4_timer;
    imcf_uint32  UA_call_conf_subtimer;
    imcf_uint32  UA_call_session_timer;
    imcf_uint32  UA_call_amr_fmt_variant;

  	imcf_uint8   VoLTE_Setting_SIP_Force_Use_UDP;
  	imcf_uint8   VoLTE_Setting_SIP_TCP_On_Demand;
    imcf_uint16  VoLTE_Setting_SIP_TCP_MTU_Size;
    /* WFC */
    imcf_uint32  VoLTE_Setting_SIP_TCP_MSS;

    imcf_uint16  UA_call_session_min_se;
    imcf_uint16  UA_call_rej_code;
    imcf_uint16  UA_call_no_resource_code;
    imcf_uint16  UA_call_rej_media_code;
    imcf_uint16  UA_call_rej_by_user_code;
    imcf_uint16  operator_code;
    imcf_uint8   local_sip_protocol_type;
    imcf_uint8   UA_g711_ptime;
    imcf_uint8   UA_g726_ptime;
    imcf_uint8   UA_call_codec_order1;
    imcf_uint8   UA_call_codec_order2;
    imcf_uint8   UA_call_codec_order3;
    imcf_uint8   UA_call_def_max_ptime;
    imcf_uint8   UA_call_def_ptime;
    imcf_uint8   UA_call_amr_pt;
    imcf_uint8   UA_call_amr_wb_pt;
    imcf_uint8   UA_call_h264_pt;
    imcf_uint8   UA_call_g729_annexb;
    imcf_uint8   UA_call_g729_ptime;
    imcf_uint8   UA_call_priority;
    imcf_uint8   UA_call_privacy;
    imcf_uint8   UA_call_session_flag;
    imcf_uint8   UA_call_tel_evt;
    imcf_uint8   UA_call_tel_evt_pt;
    imcf_uint8   UA_call_precondition;
    imcf_uint8   early_media;
    imcf_uint8   sms_support;
    imcf_uint8   voice_support;
    imcf_uint8   video_over_ps_support;
    imcf_uint8   mwi_license;
    imcf_uint8   UA_reg_keep_alive;
    imcf_uint8   UA_net_ipsec;
    imcf_uint8   UA_reg_uri_with_port;
    imcf_uint8   UA_reg_ipsec_algo;
    imcf_uint8   UA_reg_http_digest;
    imcf_uint8   UA_reg_specific_ipsec_algo;
    imcf_uint8   UA_call_mo_invite_to_bw_cnf_time;
    imcf_uint8   amr_nb_codec_support;
    imcf_uint8   amr_wb_codec_support;
    imcf_uint8   g_series_codec_support;
    imcf_uint8   user_agent[128];
    imcf_uint8   UA_call_amr_mode_set[16];
    imcf_uint8   UA_call_amr_wb_mode_set[20];
    imcf_uint8   UA_reg_auth_name[64];
    imcf_uint8   UA_reg_auth_password[32];
    imcf_uint8   UA_conf_factory_uri[128];
    /* WFC */
    imcf_uint8   wfc_support;
    imcf_uint8   UA_call_h264_pt2;
    imcf_uint8   UA_call_h265_pt;
    imcf_uint8   ipv6_zero_compression;
    imcf_uint8   UA_call_h265_pt2;
    /* USSI */
    imcf_uint8   ussd_support;
    imcf_uint8   UA_ussd_nw_timeout_timer;
    imcf_uint8   UA_ussd_setup_timeout_timer;
    imcf_uint32  pcscf_port_number;
    imcf_uint32  UA_reg_f_timer;
    imcf_uint8   msisdn_len;
    imcf_uint8   pad9[3];
    imcf_uint8   msisdn[IMC_MAX_USIM_MSISDN_LEN];
} imcb_imc_req_update_rt_setting_struct;  //relay

#define IMC_MAX_ILM_BUFFER_LEN     IMC_IPC_BODY_LNE - 4
/* size(LOCAL_PARA_HDR) = 4 */
#define IMC_MAX_DEBUG_INFO_IND_LEN  500

#define IMC_EM_TAG_LEN   2
#define IMC_EM_LENGTH_LEN   2

typedef enum {
    IMCB_IMC_TLV_TO_UNSPECIFIC = 0,
    IMCB_IMC_TLV_TO_UA = 1,
    IMCB_IMC_TLV_TO_IMCB = 2
} imcb_imc_tlv_dst_enum;

/* For TLV parsing prototype */
/*
typedef struct {
    imcf_uint32 type;   // imcb_imc_tlv_para_enum
    imcf_uint32 len;
    imcf_uint8  value[0];
} imcb_imc_tlv_struct;
*/

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 acct_id;
    imcf_uint32 total_len;
    imcf_uint32 total_num;
    imcf_uint32 tlv_dst;
    imcf_uint8  data[IMC_MAX_ILM_BUFFER_LEN-16]; //imcb_imc_tlv_struct
} imcb_imc_tlv_para_setting_ind_struct;

/**
 * Description
 *  - the primitive is used for IMC requesting IMCB to do IMS registration,
 *    IMCB will mapping to two UA's event message - VoLTE_REQ_NETWORK_CHANGE, VoLTE_REQ_REG
 * Direction
 *	- IMC -> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 		  account_id;
    imcf_uint8	      rat_type;   //imc_rat_type_enum
    imcf_uint8 		  pad[2];

    imcf_uint8 		  cell_id[IMC_MAX_CELL_ID_LEN];
    /* WFC */
    imcf_uint32        access_rat_type; /* imc_access_rat_type_enum */
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ims_reg_ind_struct;

/**
 * Description
 *  - the primitive is used for IMCB notifing IMC current IMS registration state,
 *    the message is mapping from UA's event message - VoLTE_IND_REG_STATE
 * Direction
 *	- IMCB -> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 		      account_id;
    imcf_uint8       	  reg_state;  //imc_reg_state_enum
    imcf_uint16           cause;      //imcb_imc_reg_cause_enum
    imcf_uint32           sip_cause;  //imcb_imc_sip_cause_enum
    imcf_int32            retry_after; // time delay for IMC retrying initial registration

    /* WFC */
    imcf_uint8            rat_type; /* imc_rat_type_enum */
    imcf_uint8            ecmp;     /* imc_ecmp_enum     */
    imcf_uint8            is_ems_support;
    imcf_uint8            pad[1];
} imcb_imc_ims_reg_state_req_struct;

/**
 * Description
 *  - the primitive is used for IMC indicating IMCB to do IMS deregistration,
 *    the message will map to UA's event message - VoLTE_REQ_DEREG
 * Direction
 *	- IMC -> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 account_id;
    imcf_uint8 reason;  // imcb_imc_dereg_reason_enum
    imcf_uint8 cause;   // imcb_imc_dereg_cause_enum
    imcf_uint8 pad[1];
    imcf_uint8 cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ims_dereg_ind_struct;

/**
 * Description
 *  - the primitive is used for IMC indicating IMCB to send OOS_start event msg to UA
 *    the message mapping to UA's event message - VoLTE_XXX
 * Direction
 *	- IMC -> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 account_id;
    imcf_uint8 pad[3];
} imcb_imc_oos_start_ind_struct;

/**
 * Description
 *  - the primitive is used for IMC indicating IMCB to send OOS_end event msg to UA
 *    the message mapping to UA's event message - VoLTE_XXX
 * Direction
 *	- IMC -> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 account_id;
    imcf_uint8 pad[3];
} imcb_imc_oos_end_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 account_id;
    imcf_uint32 vops;
} imcb_imc_ims_vops_notification_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imc_loop_test_send_struct test_send;
} imcb_imc_loop_test_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imc_loop_test_ack_struct test_ack;
} imcb_imc_loop_test_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imc_ipc_struct ipc;
} imcb_imc_ipc_ind_struct;

typedef imcb_imc_ipc_ind_struct imcb_imc_ipc_req_struct;

/* volte_event_media_config */
typedef struct imcb_imc_media_param_struct {
    imcf_int8                            local_address[IMCB_IMC_IPADDR_LENGTH];

    //  RTP and RTCP session for audio and video
    imcf_uint32                          audio_b_as;               // RTP bandwidth
    imcf_uint32                          audio_b_rs;               // RTCP sender bandwidth
    imcf_uint32                          audio_b_rr;               // RTCP receiver bandwidth
    imcf_uint16                          audio_remote_rtp_port;
    imcf_uint16                          audio_remote_rtcp_port;
    imcf_uint16                          audio_local_rtcp_port;     ///< rtcp port number. we may configure it not rtp_port+1
    imcf_uint16                          audio_local_rtp_port;      ///< rtp port number for media attribute in SDP message
    imcf_int8                            audio_remote_rtp_address[IMCB_IMC_IPADDR_LENGTH];
    imcf_int8                            audio_remote_rtcp_address[IMCB_IMC_IPADDR_LENGTH];

    imcf_uint32                          video_b_as;               // RTP bandwidth
    imcf_uint32                          video_b_rs;               // RTCP sender bandwidth
    imcf_uint32                          video_b_rr;               // RTCP receiver bandwidth
    imcf_uint16                          video_remote_rtp_port;
    imcf_uint16                          video_remote_rtcp_port;
    imcf_uint16                          video_local_rtcp_port;     ///< rtcp port number. we may configure it not rtp_port+1
    imcf_uint16                          video_local_rtp_port;      ///< rtp port number for media attribute in SDP message
    imcf_int8                            video_remote_rtp_address[IMCB_IMC_IPADDR_LENGTH];
    imcf_int8                            video_remote_rtcp_address[IMCB_IMC_IPADDR_LENGTH];

    imcf_uint8                           remote_addr_type;           ///< VoLTE_Event_IP_Version_e, apply to RTP audio & video session, RTCP audio & video session
    imcf_uint8                           audio_rtp_direction;        ///< VoLTE_Event_RTP_DIRECTION_e
    imcf_uint8                           video_rtp_direction;        ///< VoLTE_Event_RTP_DIRECTION_e
    // required by video codec
    imcf_uint8                           video_payload_type;
    imcf_uint32                          rtcp_interval;              ///< IMCB will get value from NVRAM
    /* WFC */
    imcf_uint32         dscp;              /* audio */
    imcf_uint32         video_dscp;
    imcf_uint32         voice_soc_priority;
    imcf_uint32         video_soc_priority;

    // required by voice codec driver
    imcf_uint8                           audio_codec;                ///< voip_codec_enum in codec_def.h
    imcf_uint8                           audio_payload_type;         ///< payload type
    imcf_uint8                           audio_clock_rate;           ///< dynamic rate, clock rate, see sdp_clock_rate_enum
    imcf_uint8                           is_dtmf;                    ///< is dtmf tone useing telephony event

    imcf_uint8                           tele_evt_payload_type;  ///< telephony event payload type
    imcf_uint8                           tele_evt_clock_rate;    ///< telephony event rate
    imcf_uint8                           g723_bitrate;           ///< VoLTE_Event_G7231_BitRate_e
    imcf_uint8                           is_g723_annexAYES;      ///< G.723.1 annexA Yes:1, No:0

    imcf_uint8                           is_g729_annexBYES;      ///< G.729 annexB Yes:1, No:0
    imcf_uint8                           ilbc_mode;              ///< VoLTE_Event_iLBC_Rate_e
    // required by RFC 6679 ECN
    imcf_uint8                           ecn_capable_rtp_method; ///< VoLTE_Event_ECN_RTP_METHOD_e
    imcf_uint8                           ecn_capable_ect;        //0, 1

    imcf_uint32                          ptime;         ///< ptime of the codec
    imcf_uint32                          max_ptime;    ///< max ptime is the buffer size for data plane. may not the same to ptime
    // required by AMR and AMR WB codec
    imcf_int8                            mode_set[IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH];

    imcf_uint8                           is_octet_align;     ///< 0:default, bandwidth-efficient, 1: octet_align
    imcf_uint8                           mode_change_period; ///< the period should be N. but currently only 1(default) or 2.
    imcf_uint8                           mode_change_cap;    ///< 1(default) or 2(recommended to support)
    imcf_uint8                           mode_change_neighbor;///< 0(default) or 1

    imcf_uint8                           crc;                ///< 0 or 1
    imcf_uint8                           robust;             ///< 0 or 1
    imcf_uint8                           interleaving;       ///< the maximum number of frame-blocks. 0: not present
    imcf_uint8                           channel;            ///< the number of audio channel. must be 1 currently
    imcf_uint16                          max_red;            // the maximum duration in ms
// required by RTCP FB
    imcf_uint16                          rtcp_rsize;
    imcf_uint32                          rtcpfb_type;        ///< bitmap, VoLTE_Event_RTCP_FB_Type_e
    /* WFC */
    imcf_uint32                          network_id;
    imcf_int8                            id[IMCB_IMC_MAX_SDP_EGBYTE_LENGTH];
    imcf_int8                            trr_int[IMCB_IMC_MAX_SDP_EGBYTE_LENGTH];
    imcf_int8                            id_app_string[IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
    imcf_int8                            ack_app_string[IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
    imcf_int8                            nack_app_string[IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
    imcf_int8                            tmmbr_string[IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
    imcf_int8                            vbcm_string[IMCB_IMC_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
    imcf_int8                            cname_string[IMCB_IMC_MAX_CNAME_LENGTH];

    /* EVS Support */
    imcf_uint8                           evs_support;
    imcf_uint8                           evs_mode_switch;
    imcf_uint8                           hf_only;
    imcf_uint8                           dtx;
    imcf_uint8                           dtx_recv;
    imcf_uint8                           pading[3];
    imcf_uint8                           br[2];              ///< VoLTE_EVS_Codec_Bitrate_e
    imcf_uint8                           br_send[2];         ///< VoLTE_EVS_Codec_Bitrate_e
    imcf_uint8                           br_recv[2];         ///< VoLTE_EVS_Codec_Bitrate_e
    imcf_uint8                           bw[2];              ///< VoLTE_EVS_Bandwidth_e
    imcf_uint8                           bw_send[2];         ///< VoLTE_EVS_Bandwidth_e
    imcf_uint8                           bw_recv[2];         ///< VoLTE_EVS_Bandwidth_e
    imcf_uint8                           ch_send;
    imcf_uint8                           ch_recv;
    imcf_int8                            ch_aw_recv;
    imcf_int8                            cmr;
} imcb_imc_media_param_struct;

/* mcu/interface/middelware/general/ */
typedef enum imcb_imc_func_class_enum {
    IMCB_IMC_FC_RTP          = (1<<0),
    IMCB_IMC_FC_XMIT         = (1<<1),
    IMCB_IMC_FC_VOICE        = (1<<2),
    IMCB_IMC_FC_VIDEO        = (1<<3),
    IMCB_IMC_FC_DTMF         = (1<<4),
    IMCB_IMC_FC_CODEC        = (1<<5),
    /* WFC */
    IMCB_IMC_FC_HANDOVER     = (1<<6),
    IMCB_IMC_FC_ALL          = ((IMCB_IMC_FC_HANDOVER << 1)-1)
} imcb_imc_func_class_enum;

typedef enum imcb_imc_xmit_mode_enum {
    IMCB_IMC_XMIT_MODE_NONE=0,
    IMCB_IMC_XMIT_MODE_SENDONLY,
    IMCB_IMC_XMIT_MODE_RECVONLY,
    IMCB_IMC_XMIT_MODE_SENDRECV,
    IMCB_IMC_XMIT_MODE_INACTIVE,
    IMCB_IMC_XMIT_MODE_ACTIVE,
} imcb_imc_xmit_mode_enum;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct imcb_imc_xxx2ltecsr_param_struct {

    /* call id */
    imcf_int32 call_id;

    /* session id */
    imcf_int32 voice_sid;
    imcf_int32 video_sid;

    /* ebi for voice and video */
    /* for media_del, ebi    is not used */
    imcf_int32 voice_ebi;
    imcf_int32 video_ebi;
    /* WFC */
    imcf_uint16 voice_type;  /* 0 (LTE), 1 (WIFI) */
    imcf_uint16 video_type;  /* 0 (LTE), 1 (WIFI) */

    /* op code */
    /* for media_new, we should set all 1's */
    /* for media_del, only vioce/viedeo fc are used */
    imcf_uint32 func_class;

    /* pdn_id */
    imcf_uint32 default_ebi;

    /* all parameters */
    /* for media_del, params is not used */
    imcb_imc_media_param_struct params;

} imcb_imc_xxx2ltecsr_param_struct ;

typedef struct imcb_imc_media_new {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 tv_sec;
    imcb_imc_xxx2ltecsr_param_struct param;
} imcb_imc_media_new_struct;

typedef struct imcb_imc_media_del {
    IMCB_IMC_LOCAL_PARA_HDR
    imcb_imc_xxx2ltecsr_param_struct param;
} imcb_imc_media_del_struct;

typedef struct imcb_imc_media_update {
    IMCB_IMC_LOCAL_PARA_HDR
    imcb_imc_xxx2ltecsr_param_struct param;
} imcb_imc_media_update_struct;

//IMS SMSoIP Interface
/**
 * Description
 *  - the primitive is used for IMC to request VoLTE UA to send SMS via IMC-B
 *    IMC-B will mapping to VOLTE_REQ_SMS_SEND
 *
 * Remark
 *  - header file: volte_event.h
 *  - MSG_ID    : VOLTE_REQ_SMS_SEND
 *  - struct      : VoLTE_Event_SMS_Send_Message_t
 *
 * Direction
 *  - [SMS-sub] -- MSG_ID_SMSSUB_IMC_SEND_SMS_REQ --> [IMC]
 *  - [IMC] --MSG_ID_IMCB_IMC_SEND_SMS_IND--> [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
    imcf_uint32		type;       //imcb_imc_sms_type_enum
    imcf_uint32		timeout;
    imcf_uint8		psi[128];
    imcf_uint8      cell_id[IMC_MAX_CELL_ID_LEN];
    imcf_int32		message_len;
    imcf_uint8 		message[512];
    imcb_imc_loc_ts_struct loc_info;
    imcf_uint8      tpda[IMC_MAX_SMS_TPDA_LEN];
    imcf_uint8      is_valid_tpda;
    imcf_uint8      is_international;
    imcf_uint8      pad[1];
} imcb_imc_send_sms_ind_struct;

/**
 * Description
 *  -
 *
 * Remark
 *  - header file: volte_event.h
 *  - MSG_ID    : VOLTE_RSP_SMS_SENT
 *  - struct      : VoLTE_Event_SMS_Result_t
 *
 * Direction
 *  - [SMS-sub] <--MSG_ID_SMSSUB_IMC_SEND_SMS_CNF-- [IMC]
 *  - [IMC] <--MSG_ID_IMCB_IMC_SEND_SMS_RSP-- [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
    imcf_int32		resp_code;    //imcb_imc_sms_result_enum
} imcb_imc_send_sms_rsp_struct;

/**
 * Description
 *  -
 *
 *
 * Remark
 *  	- header file: volte_event.h
 *	- MSG_ID:    VOLTE_IND_SMS_RECEIVED
 *	- struct:      VoLTE_Event_SMS_Recv_Message_t
 *
 * Direction
 * - [SMS-sub] <--MSG_ID_SMSSUB_IMC_RECV_SMS_IND-- [IMC]
 * - [IMC] <--MSG_ID_IMCB_IMC_RECV_SMS_REQ-- [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
    imcf_uint32		type;       //imcb_imc_sms_type_enum
    imcf_uint8		psi[128];
    imcf_int32		message_len;
    imcf_uint8 		message[512];
} imcb_imc_recv_sms_req_struct;

/**
 * Description
 *  -
 *
 * Remark
 *  	- header file: volte_event.h
 *	- MSG_ID:    VOLTE_CNF_SMS_RECEIVED
 *	- struct:      VoLTE_Event_SMS_Confirm_t
 *
 * Direction
 *  - [SMS-sub] --MSG_ID_SMSSUB_IMC_RECV_SMS_RSP--> [IMC]
 *  - [IMC] --MSG_ID_IMCB_IMC_SEND_SMS_CNF--> [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
    imcf_int32		resp_code;  // SIP response code
    imcf_uint8      cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_recv_sms_cnf_struct;

/**
 * Description
 *  -
 *
 *
 * Remark
 *  	- header file: volte_event.h
 *	- MSG_ID:    VOLTE_REQ_SMS_RELEASE
 *	- struct:      VoLTE_Event_SMS_Release_t
 *
 * Direction
 *  - [SMS-sub] -- MSG_ID_SMSSUB_IMC_REL_SMS_REQ --> [IMC]
 *  - [IMC] --MSG_ID_IMCB_IMC_REL_SMS_IND--> [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
} imcb_imc_rel_sms_ind_struct;

/**
 * Description
 *  -
 *
 * Remark
 *  	- header file: volte_event.h
 *	- MSG_ID:    VOLTE_IND_SMS_ERROR
 *	- struct:      VoLTE_Event_SMS_Result_t
 *
 * Direction
 *  - [SMS-sub] <--MSG_ID_SMSSUB_IMC_RECV_SMS_ERROR_IND-- [IMC]
 *  - [IMC] <--MSG_ID_IMCB_IMC_RECV_SMS_ERROR_REQ-- [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
    imcf_int32		resp_code;    //imcb_imc_sms_result_enum
} imcb_imc_recv_sms_error_req_struct;

/**
 * Description
 *  - the structure should be same to imcb_imc_rel_sms_ind_struct
 *
 *
 * Remark
 *  	- header file: volte_event.h
 *	- MSG_ID:    VOLTE_REQ_SMS_RELEASE
 *	- struct:      VoLTE_Event_SMS_Release_t
 *
 * Direction
 *  - [SMS-sub] --MSG_ID_IMCB_IMC_ABORT_SEND_SMS_REQ--> [IMC]
 *  - [IMC] --MSG_ID_IMCB_IMC_ABORT_SEND_SMS_IND--> [IMC-B]
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
} imcb_imc_abort_send_sms_ind_struct;

/**
 * Description
 *  - the structure should be same to imcb_imc_rel_sms_ind_struct
 *
 *
 * Remark
 *  	- header file: volte_event.h
 *	- MSG_ID:    VOLTE_REQ_SMS_RELEASE
 *	- struct:      VoLTE_Event_SMS_Release_t
 *
 * Direction
 *  - [SMS-sub] --MSG_ID_IMCB_IMC_ABORT_RECV_SMS_REQ--> [IMC]
 *	-  IMC --MSG_ID_IMCB_IMC_ABORT_RECV_SMS_IND--> IMC-B
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32		account_id;
    imcf_uint32		request_id;
} imcb_imc_abort_recv_sms_ind_struct;

//IMS Call Interface
/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_CALL_PROGRESS_IND
 *	- struct:      VoLTE_Event_Call_Prog_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_int32    is_ibt;
    imcf_uint8    p_assert_uri[IMC_MAX_ASSERTED_URI];
    imcf_int32    cause;        //imcb_imc_call_stop_cause_enum
    imcf_int32    call_mode;    //imcb_imc_call_mode_enum
    imcf_int32    ecpi;         //imcb_imc_call_prog_ecpi_enum
    imcf_int32    hold_by;      //imcb_imc_call_hold_by_enum
    imcf_int32    dir;
} imcb_imc_cc_call_progress_req_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_SIP_CALL_PROGRESS_IND
 *	- struct:      VoLTE_Event_SIP_Call_Prog_Ind_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_uint8    call_mode;
    imcf_uint8    dir;             /*0: send, 1: receive*/
    imcf_uint8    sip_msg_type;    /*0: request, 1: response*/
    imcf_uint8    method;          /*1:SIP_INVITE_METHOD,2:SIP_REFER_METHOD ..etc , refer to inet_method_enum*/

    imcf_uint16   response_code;   /*0:only used when SIP type is request, else: response code(100~600)*/
    imcf_uint8    pad[2];
    imcf_uint8    reason_text[IMC_MAX_REASON_TEXT_LENGTH];
} imcb_imc_cc_sip_call_progress_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MEDIA_IND
 *	- struct:      VoLTE_Event_MediaInfo_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_int32  is_on;    //imcb_imc_media_enum
} imcb_imc_cc_media_req_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_CALL_REQ
 *	- struct:      VoLTE_Event_Call_Start_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8    dial_number[128];
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_uint8    clir;
    imcf_uint8    call_mode;    //imcb_imc_call_mode_enum
    imcf_wchar    uri_scheme;   //imcb_imc_uri_scheme_type_enum
    imcf_uint8    cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mo_call_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_CALL_CNF
 *	- struct:      VoLTE_Event_MO_Call_Cnf_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_int32    cause;            //imcb_imc_call_stop_cause_enum
    imcf_uint8    result;           //imcb_imc_call_stop_result_enum
    imcf_uint8    call_mode;        //imcb_imc_call_mode_enum
    imcf_uint8    is_international; // 0:no, 1: the phone is number is national number
    imcf_uint8    isDateString;     // 0: not a date string, 1: it is a date string in time variable
    imcf_uint32   time;
    imcf_int32    duration;
    imcf_uint8    reason[128];
    imcf_uint32   ecc_category;     //imcb_imc_srvcc_call_ecc_category_enum
} imcb_imc_cc_mo_call_rsp_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MT_CALL_ABORT_IND
 *	- struct:      VoLTE_Event_MT_Call_Abort_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   seq_no; /* acctually uint8, or 4-byte align */
    imcf_int32    cause;    //imcb_imc_call_stop_cause_enum
} imcb_imc_cc_mt_call_abort_req_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MT_CALL_PRESENT_IND
 *	- struct:      VoLTE_Event_MT_Call_Ind_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint8    seq_no;
    imcf_uint8    is_national_num; // 0: local number, 1: national number
    imcf_uint8    call_mode;       //imcb_imc_call_mode_enum
    imcf_uint8    uri_scheme;      //imcb_imc_uri_scheme_type_enum
    imcf_uint8    dial_number[128];
} imcb_imc_cc_mt_call_present_req_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MT_CALL_PRESENT_RSP
 *	- struct:      VoLTE_Event_MT_Call_Rsp_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_uint8    seq_no;
    imcf_uint8    call_mode;      //imcb_imc_call_mode_enum
    imcf_wchar    result;         //imcb_imc_call_stop_result_enum
    imcf_int32    response_code;
    imcf_uint8    cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mt_call_present_cnf_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MT_CALL_RING_IND
 *	- struct:      VoLTE_Event_Call_Refresh_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_uint8    p_assert_uri[IMC_MAX_ASSERTED_URI];
} imcb_imc_cc_mt_call_ring_req_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_HANGUP_REQ
 *	- struct:      VoLTE_Event_Req_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mo_force_hangup_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_HANGUP_REQ
 *	- struct:      VoLTE_Event_Req_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mo_hangup_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_HANGUP_CNF
 *	- struct:      VoLTE_Event_Call_Stop_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_int32  result; //imcb_imc_call_stop_result_enum
    imcf_int32  cause;  //imcb_imc_call_stop_cause_enum
} imcb_imc_cc_mo_hangup_rsp_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MT_ACCEPT_REQ
 *	- struct:      VoLTE_Event_Req_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mt_accept_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *  - MSG_ID:      VOLTE_NO_RTPPKT_REQ
 *  - struct:      VoLTE_Event_Req_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
     IMCB_IMC_LOCAL_PARA_HDR
     imcf_int32  acct_id;
     imcf_uint32 call_id;
     imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
     imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_no_rtppkt_ind_struct;

/**
 * Description
 *  - This message is used to inform when call receives
 *     RTP packets before media is activated.
 * Remark
 *  - header file: volte_event.h
 *  - MSG_ID:      VOLTE_INCOMING_RTPPKT_REQ
 *  - struct:      VoLTE_Event_Req_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
     IMCB_IMC_LOCAL_PARA_HDR
     imcf_int32  acct_id;
     imcf_uint32 call_id;
     imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
     imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_incoming_rtppkt_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MT_ACCEPT_RSP
 *	- struct:      VoLTE_Event_Call_Stop_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_int32  result; //imcb_imc_call_stop_result_enum
    imcf_int32  cause;  //imcb_imc_call_stop_cause_enum
} imcb_imc_cc_mt_accept_rsp_struct;

/*
 * @brief
 * @note MSG_ID_IMCB_IMC_CALL_CONTROL_IND
 *           AT>AT+ECCTRL=<call_id>,<call_state>
 */
 typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_int32  expected_call_state; //imcb_imc_ecctrl_enum
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
 } imcb_imc_call_control_ind_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_CALL_CONTROL_RSP
 *           AT< OK | ...
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_call_control_rsp_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_CONF_CALL_REQ
 *	- struct:      VoLTE_Event_Conf_Call_Start_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_uint8    call_mode;    //imcb_imc_call_mode_enum
    imcf_uint8    conf_call_participants;
    imcf_uint8    pad[2];
    imcf_uint8    conf_call_number_list[IMC_MAX_CALL_NUM_IN_CONFERENCE][128];
    imcf_uint8    cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mo_conf_call_ind_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_MO_CONF_CALL_CNF
 *	- struct:      VoLTE_Event_MO_Conf_Call_Cnf_t
 * Direction
 *  - IMCB --> IMC
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32    acct_id;
    imcf_uint32   call_id;
    imcf_int32    cause;            //imcb_imc_call_stop_cause_enum
    imcf_uint8    result;           //imcb_imc_call_stop_result_enum
    imcf_uint8    call_mode;       //imcb_imc_call_mode_enum
    imcf_uint8    pad[2];
} imcb_imc_cc_mo_conf_call_rsp_struct;

/**
 * Description
 *  -
 * Remark
 *  - header file: volte_event.h
 *	- MSG_ID:      VOLTE_REQ_MD_LOWER_LAYER_ERR
 *	- struct:      VoLTE_Event_MD_Lower_Layer_Err_t
 * Direction
 *  - IMC --> IMCB
 */
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint32 cause; //imcb_imc_md_lower_layer_err_enum
} imcb_imc_md_lower_layer_err_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_switch_waiting_or_holding_and_active_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_switch_waiting_or_holding_and_active_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_release_waiting_or_all_bg_calls_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_release_waiting_or_all_bg_calls_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_release_all_fg_and_resume_bg_call_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_release_all_fg_and_resume_bg_call_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_release_all_fg_and_bg_calls_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_release_all_fg_and_bg_calls_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_explicit_call_transfer_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_explicit_call_transfer_rsp_struct;

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_create_conference_call_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_create_conference_call_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_ath_rel_all_calls_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_ath_rel_all_calls_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 reserved;
} imcb_imc_ss_list_current_calls_ind_struct;

typedef struct {
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint8  is_mt_call;
    imcf_uint8  state_of_the_call;
    imcf_uint8  mode;
    imcf_uint8  is_conference_call;
    imcf_uint8  phone_number[128];
    imcf_uint32 is_international;   // 0:no, 1: the phone number is a national number
} imcb_list_one_call_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32               total_call;
    imcb_list_one_call_struct call_list[12];   // max_account*3, may changed??
} imcb_imc_ss_list_current_calls_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_uint32 service;  //imcb_imc_ss_notify_service_enum
    imcf_uint8  data[IMCB_IMC_MAX_DATA_TO_IMC_LENGTH];
} imcb_imc_ss_progress_notify_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 conf_call_id;
    imcf_uint32 joined_call_id;
    imcf_uint8  dial_number[128];
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_conference_control_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 call_id;
    imcf_int32  event;      //imcb_imc_ss_sub_event_enum
    imcf_int32  result;     //imcb_imc_call_stop_result_enum
    imcf_int32  cause;      //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_subscribe_control_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_uint32 conf_call_id;
    imcf_int32  joined_call_id;
    imcf_uint32 op;  //imcb_imc_ss_operation_enum
    imcf_uint8  number[128];
    imcf_uint8  cell_id[IMC_MAX_CELL_ID_LEN];
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_ss_conference_control_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32  acct_id;
    imcf_int32  operation;    //imcb_imc_ss_operation_enum
    imcf_int32  result;       //imcb_imc_call_stop_result_enum
    imcf_int32  cause;        //imcb_imc_call_stop_cause_enum
} imcb_imc_ss_conference_control_rsp_struct;

//IMS SRVCC Interface
typedef struct {
    imcf_int32      call_id;
    imcf_uint32     ecc_category;       /* imcb_imc_srvcc_call_ecc_category_enum */
    imcf_uint8      call_mode;          /* imcb_imc_call_mode_enum */
    imcf_uint8      direction;          /* imcb_imc_srvcc_call_direction_enum */
    imcf_uint8      dlg_state;          /* imcb_imc_srvcc_call_state_enum */
    imcf_uint8      num_of_conf_parts;
} imcb_imc_srvcc_call_ctxt_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32  num_calls;
    imcb_imc_srvcc_call_ctxt_struct	srvcc_call_ctxt_from_ims[IMCB_IMC_MAX_CALL_NUM];
} imcb_imc_srvcc_context_transfer_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32 acct_id;
    imcf_int32 srvcc_ho_status;         /* imcb_imc_srvcc_status_enum */
} imcb_imc_srvcc_status_update_ind_struct;

//Auto Test Tool Interface
typedef struct {
    imcf_uint8        src_ip[64];
    imcf_uint8        dst_ip[64];
    imcf_uint8        src_port[16];
    imcf_uint8        dst_port[16];
    imcf_uint8        spi[32];
    imcf_uint8        dir;          //0:in 1:out
    imcf_uint8        padding[3];
} imcb_imc_reg_ipsec_info_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
} imcb_imc_reg_ipsec_flush_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcb_imc_reg_ipsec_info_struct  ipsec_info[4];
    imcf_uint8                      index;
    imcf_uint8                      transport;          //0:udp 1:tcp
    imcf_uint8                      mode;               //0:Transport 1:Tunnel
    imcf_uint8                      protocol;           //0:AH 1:ESP
    imcf_uint8                      encry_algo;         /* VoLTE_Stack_IPSec_Encry_Algo_e */
    imcf_uint8                      integrity_algo;     /* enum VoLTE_Stack_IPSec_Integrity_Algo_e */
    imcf_uint8                      padding[2];
    imcf_uint8                      ck[256];
    imcf_uint8                      ik[256];
} imcb_imc_reg_ipsec_add_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8                      index;
    imcf_uint8                      padding[3];
} imcb_imc_reg_ipsec_delete_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8  type; // imcb_imc_ebi_filter_type_enum
    imcf_uint8  pad[3];
    imcf_uint32 ebi;
} imcb_imc_start_ebi_filter_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8  type; // imcb_imc_ebi_filter_type_enum
    imcf_uint8  pad[3];
    imcf_uint32 ebi;
} imcb_imc_stop_ebi_filter_req_struct;

//IMS USSI Interface
typedef struct imcb_imc_send_ussd_ind {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32     account_id;     /*< Account ID*/
    imcf_uint8      cmd_class;      /*< class */
    imcf_uint8      operation;      /*< oper */
    imcf_uint16     action;         /*< action */
    imcf_uint8      language[IMC_USSD_LANGUANGE_LEN];   /*< language */
    imcf_int16      error_code;     /*< error_code */
    imcf_int16      message_len;   /*< message length */
    imcf_uint8      message[IMC_USSD_MAX_MSG_LEN];
} imcb_imc_send_ussd_ind_struct;

typedef struct imcb_imc_send_ussd_rsp {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32     account_id;     /*< Account ID*/
    imcf_uint32     response;       /*< OK or ERROR, may be extended to CME ERROR later on*/
} imcb_imc_send_ussd_rsp_struct;

typedef struct imcb_imc_recv_ussd_req {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32     account_id;     /*< Account ID*/
    imcf_uint8      urc_class;      /*< class */
    imcf_uint8      alert_pattern;  /*< Alertin Pattern for AP */
    imcf_uint8      padding[2];     /*< oper */
    imcf_uint16     status;         /*< status */
    imcf_uint16     sip_cause;      /*< status */
    imcf_uint8      language[IMC_USSD_LANGUANGE_LEN];   /*< language */
    imcf_int16      error_code;     /*< error_code */
    imcf_int16      message_len;        /*< message length */
    imcf_uint8      message[IMC_USSD_MAX_MSG_LEN];
} imcb_imc_recv_ussd_req_struct;


typedef struct imcb_imc_ussd_urc_status_ind {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32     account_id;     /*< Account ID*/
    imcf_uint32     status;         /*< USSI URC enabled status */
} imcb_imc_ussd_urc_status_ind_struct;

//IMS VT Service Interface
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 account_id;
    imcf_uint32 is_connected;
} imcb_imc_vt_connect_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 account_id;
} imcb_imc_vt_cap_query_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 account_id;
    imcf_uint32 result; //0: success, 1: fail
} imcb_imc_vt_cap_query_rsp_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint32 account_id;
    imcf_uint32 call_id;
    imcf_int32  direction;
} imcb_imc_cc_vt_active_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32 account_id;
    imcf_uint32 call_id;
    imcf_uint8  call_mode;    //imcb_imc_call_mode_enum
    //  0 : inactive
    //  1 : send_only
    //  2 : recv_only
    //  3 : send_recv
    imcf_uint8  camera_direction;
    imcf_uint8  audio_direction;
    imcf_uint8  audio_codec; //opaque
    imcf_int8   p_assert_uri[IMC_MAX_ASSERTED_URI];
} imcb_imc_cc_media_mod_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32 account_id;
    imcf_uint32 call_id;
    imcf_uint8  local_video_cap;
    imcf_uint8  remote_video_cap;
    imcf_uint8  pad[2];
} imcb_imc_cc_video_cap_req_struct;

typedef enum {
    IMCB_IMC_EVTA_MODE_UNKNOWN                        = 0,
    IMCB_IMC_EVTA_MODE_ACCEPT_AS_VOICE                = 1,
    IMCB_IMC_EVTA_MODE_ACCEPT_AS_ONE_WAY_VIDEO_RX     = 2,
    IMCB_IMC_EVTA_MODE_ACCEPT_AS_ONE_WAY_VIDEO_TX     = 3,
    IMCB_IMC_EVTA_MODE_MAX,
} imcb_imc_evta_mode_enum;

typedef enum
{
    IMCB_IMC_SEND_USSD_RESULT_SUCCESS               = 0,
    IMCB_IMC_SEND_USSD_RESULT_FAILURE               = 1,
    IMCB_IMC_SEND_USSD_RESULT_MAX                   ,
} imcb_imc_send_ussd_result_enum;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32              acct_id;
    imcf_uint32             call_id;
    imcf_uint8              cell_id[IMC_MAX_CELL_ID_LEN];
    imcf_uint32             mode;   /* imcb_imc_evta_mode_enum */
    imcb_imc_loc_ts_struct loc_info;
} imcb_imc_cc_mt_vt_special_accept_ind_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_int32                  acct_id;
    imcf_uint32                 call_id;
    imcf_int32                  result; /*0: success, 1: fail*/
    imcf_int32                  cause;  /*imcb_imc_call_stop_cause_enum*/
} imcb_imc_cc_mt_vt_special_accept_rsp_struct;

//WFC
typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8           source_rat_type;
    imcf_uint8           target_rat_type;
    imcf_uint8           pad[2];
} imcb_imc_handover_start_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8            source_rat_type;
    imcf_uint8            target_rat_type;
    imcf_uint8            is_success;
    imcf_uint8            pad[1];
} imcb_imc_handover_stop_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8 			  account_id;
    imcf_uint8            rat_type; //imc_rat_type_enum
    imcf_uint8            ecmp;     /* imc_ecmp_enum */
    imcf_uint8            pad[1];
} imcb_imc_reg_ems_mode_req_struct;

typedef struct {
    IMCB_IMC_LOCAL_PARA_HDR
    imcf_uint8  tlv_data[IMC_MAX_ILM_BUFFER_LEN];
} imcb_imc_ims_debug_info_req_struct;

typedef struct
{
    IMCB_IMC_LOCAL_PARA_HDR
    kal_uint8 tlv_data[IMC_MAX_DEBUG_INFO_IND_LEN];
} imcb_imc_ims_debug_info_ind_struct; 


/*****imcb_imc_struct.h END*****/

/*****ims_msgid.h START*****/
#define IMC_BV_RANGE  (500)

MODULE_MSG_BEGIN( MSG_ID_IMC_IN_BEGIN)
MSG_ID_IMC_BV_BEGIN = MSG_ID_IMC_IN_BEGIN,
  /* IMCB-IMC BV */
  MSG_ID_IMCB_IMC_BEGIN,

    MSG_ID_IMCB_IMC_IPC_IND,
    MSG_ID_IMCB_IMC_IPC_REQ,

    MSG_ID_IMCB_IMC_LOOP_TEST_IND,
    MSG_ID_IMCB_IMC_LOOP_TEST_RSP,

    MSG_ID_IMCB_IMC_SET_TEST_MODE_REQ,
    MSG_ID_IMCB_IMC_SET_TEST_MODE_CELL_INFO_REQ,

    /* IMS Initialization */
    MSG_ID_IMCB_IMC_IMS_INIT_IND,

    /* IMS SIM */
    MSG_ID_IMCB_IMC_SIM_READY_REQ,
    MSG_ID_IMCB_IMC_SIM_REFRESH_REQ,
    MSG_ID_IMCB_IMC_SIM_ERROR_REQ,
    MSG_ID_IMCB_IMC_IMSA_CONNECT_REQ,
    MSG_ID_IMCB_IMC_VA_CONNECT_REQ,
    MSG_ID_IMCB_IMC_SIM_QUERY_IND,
    MSG_ID_IMCB_IMC_SIM_QUERY_RSP,
    MSG_ID_IMCB_IMC_READ_SIM_USIM_IND,
    MSG_ID_IMCB_IMC_READ_SIM_USIM_RSP,
    MSG_ID_IMCB_IMC_READ_ISIM_IND,
    MSG_ID_IMCB_IMC_READ_ISIM_RSP,

    /* WFC */
    MSG_ID_IMCB_IMC_HANDOVER_START_REQ,
    MSG_ID_IMCB_IMC_HANDOVER_STOP_REQ,

    /* IMS Registration */
    MSG_ID_IMCB_IMC_REQ_UPDATE_RT_SETTING,
    MSG_ID_IMCB_IMC_IMS_REG_IND,
    MSG_ID_IMCB_IMC_IMS_REG_REJ_RSP,
    MSG_ID_IMCB_IMC_IMS_DEREG_IND,
    MSG_ID_IMCB_IMC_IMS_REG_STATE_REQ,
    MSG_ID_IMCB_IMC_IND_REG_AUTH_REQ,
    MSG_ID_IMCB_IMC_REG_EMS_MODE_REQ,
    MSG_ID_IMCB_IMC_CNF_REG_AUTH_REQ,
    MSG_ID_IMCB_IMC_OOS_START_IND,
    MSG_ID_IMCB_IMC_OOS_END_IND,
    MSG_ID_IMCB_IMC_QUERY_STATE_REQ,
    MSG_ID_IMCB_IMC_QUERY_STATE_CNF,
    MSG_ID_IMCB_IMC_RAT_CHANGE_IND,
    MSG_ID_IMCB_IMC_IMSVOPS_NOTIFICATION_IND,
	MSG_ID_IMCB_IMC_RLM_EVENT_IND,

    /* VILTE */
    MSG_ID_IMCB_IMC_VT_CONNECT_REQ,
    MSG_ID_IMCB_IMC_VT_CAP_QUERY_IND,
    MSG_ID_IMCB_IMC_VT_CAP_QUERY_RSP,

    /* SMS relay */
    MSG_ID_IMCB_IMC_SMS_BEGIN,
      MSG_ID_IMCB_IMC_SEND_SMS_IND,
      MSG_ID_IMCB_IMC_SEND_SMS_RSP,
      MSG_ID_IMCB_IMC_RECV_SMS_REQ,
      MSG_ID_IMCB_IMC_RECV_SMS_CNF,
      MSG_ID_IMCB_IMC_REL_SMS_IND,
      MSG_ID_IMCB_IMC_RECV_SMS_ERROR_REQ,
      MSG_ID_IMCB_IMC_ABORT_SEND_SMS_IND,
      MSG_ID_IMCB_IMC_ABORT_RECV_SMS_IND,
    MSG_ID_IMCB_IMC_SMS_END,

    /* CC relay */
    MSG_ID_IMCB_IMC_CC_BEGIN,
      MSG_ID_IMCB_IMC_CC_CALL_PROGRESS_REQ,
      MSG_ID_IMCB_IMC_CC_SIP_CALL_PROGRESS_IND,
      MSG_ID_IMCB_IMC_CC_MEDIA_REQ,
      MSG_ID_IMCB_IMC_CC_MO_CALL_IND,
      MSG_ID_IMCB_IMC_CC_MO_CALL_RSP,
      MSG_ID_IMCB_IMC_CC_MT_CALL_ABORT_REQ,
      MSG_ID_IMCB_IMC_CC_MT_CALL_PRESENT_REQ,
      MSG_ID_IMCB_IMC_CC_MT_CALL_PRESENT_CNF,
      MSG_ID_IMCB_IMC_CC_MT_CALL_RING_REQ,
      MSG_ID_IMCB_IMC_CC_MO_FORCE_HANGUP_IND,
      MSG_ID_IMCB_IMC_CC_MT_ACCEPT_IND,
      MSG_ID_IMCB_IMC_CC_MT_ACCEPT_RSP,
      MSG_ID_IMCB_IMC_CC_MO_HANGUP_IND,
      MSG_ID_IMCB_IMC_CC_MO_HANGUP_RSP,
      MSG_ID_IMCB_IMC_SRVCC_STATUS_UPDATE_IND,
      MSG_ID_IMCB_IMC_SRVCC_CONTEXT_TRANSFER_REQ,
      MSG_ID_IMCB_IMC_CALL_CONTROL_IND,
      MSG_ID_IMCB_IMC_CALL_CONTROL_RSP,
      MSG_ID_IMCB_IMC_CC_MO_CONF_CALL_IND,
      MSG_ID_IMCB_IMC_CC_MO_CONF_CALL_RSP,

      /* VILTE */
      MSG_ID_IMCB_IMC_CC_VT_ACTIVE_IND,
      MSG_ID_IMCB_IMC_CC_MEDIA_MOD_REQ,
      MSG_ID_IMCB_IMC_CC_VIDEO_CAP_REQ,

      /* SDP info */
      MSG_ID_IMCB_IMC_MEDIA_NEW,
      MSG_ID_IMCB_IMC_MEDIA_UPDATE,
      MSG_ID_IMCB_IMC_MEDIA_DEL,

      /* VILTE */
      MSG_ID_IMCB_IMC_CC_MT_VT_SPECIAL_ACCEPT_IND,
      MSG_ID_IMCB_IMC_CC_MT_VT_SPECIAL_ACCEPT_RSP,
    MSG_ID_IMCB_IMC_CC_END,

    /* SS relay */
    MSG_ID_IMCB_IMC_SS_BEGIN,
      MSG_ID_IMCB_IMC_SS_SWITCH_WAITING_OR_HOLDING_AND_ACTIVE_IND,
      MSG_ID_IMCB_IMC_SS_SWITCH_WAITING_OR_HOLDING_AND_ACTIVE_RSP,
      MSG_ID_IMCB_IMC_SS_RELEASE_WAITING_OR_ALL_BG_CALLS_IND,
      MSG_ID_IMCB_IMC_SS_RELEASE_WAITING_OR_ALL_BG_CALLS_RSP,
      MSG_ID_IMCB_IMC_SS_RELEASE_ALL_FG_AND_RESUME_BG_CALL_IND,
      MSG_ID_IMCB_IMC_SS_RELEASE_ALL_FG_AND_RESUME_BG_CALL_RSP,
      MSG_ID_IMCB_IMC_SS_RELEASE_ALL_FG_AND_BG_CALLS_IND,
      MSG_ID_IMCB_IMC_SS_RELEASE_ALL_FG_AND_BG_CALLS_RSP,
      MSG_ID_IMCB_IMC_SS_EXPLICIT_CALL_TRANSFER_IND,
      MSG_ID_IMCB_IMC_SS_EXPLICIT_CALL_TRANSFER_RSP,
      MSG_ID_IMCB_IMC_SS_CREATE_CONFERENCE_CALL_IND,
      MSG_ID_IMCB_IMC_SS_CREATE_CONFERENCE_CALL_RSP,
      MSG_ID_IMCB_IMC_SS_ATH_REL_ALL_CALLS_IND,
      MSG_ID_IMCB_IMC_SS_ATH_REL_ALL_CALLS_RSP,
      MSG_ID_IMCB_IMC_SS_LIST_CURRENT_CALLS_IND,
      MSG_ID_IMCB_IMC_SS_LIST_CURRENT_CALLS_RSP,
      MSG_ID_IMCB_IMC_SS_PROGRESS_NOTIFY_REQ,
      MSG_ID_IMCB_IMC_CC_NO_RTPPKT_IND,
      MSG_ID_IMCB_IMC_CC_NO_RTPPKT_RSP,
      MSG_ID_IMCB_IMC_SS_CONFERENCE_CONTROL_REQ,
      MSG_ID_IMCB_IMC_SS_SUBSCRIBE_CONTROL_REQ,
      MSG_ID_IMCB_IMC_SS_CONFERENCE_CONTROL_IND,
      MSG_ID_IMCB_IMC_SS_CONFERENCE_CONTROL_RSP,
      MSG_ID_IMCB_IMC_CC_INCOMING_RTPPKT_IND,
    MSG_ID_IMCB_IMC_SS_END,

    /* USSD */
    MSG_ID_IMCB_IMC_SEND_USSD_IND,  //Send USSD Request to UA
    MSG_ID_IMCB_IMC_SEND_USSD_RSP,  //Send USSD's Response from UA
    MSG_ID_IMCB_IMC_RECV_USSD_REQ,  //URC from UA
    MSG_ID_IMCB_IMC_USSD_URC_STATUS_IND, //Send URC Status to UA

    /* CMCC Auto Test Tool */
    MSG_ID_IMCB_IMC_START_EBI_FILTER_REQ,
    MSG_ID_IMCB_IMC_STOP_EBI_FILTER_REQ,
    MSG_ID_IMCB_IMC_REG_IPSEC_FLUSH_REQ,
    MSG_ID_IMCB_IMC_REG_IPSEC_ADD_REQ,
    MSG_ID_IMCB_IMC_REG_IPSEC_DELETE_REQ,

    /* MD Lower Layer Error (Service request failed, AC Barred...etc) */
    MSG_ID_IMCB_IMC_MD_LOWER_LAYER_ERR_IND,

    MSG_ID_IMCB_IMC_TLV_PARA_SETTING_IND,

    /* IMS Debug Information IMCB->IMC*/
    MSG_ID_IMCB_IMC_IMS_DEBUG_INFO_REQ,
    /* IMS Debug Information IMC->IMCB */
    MSG_ID_IMCB_IMC_IMS_DEBUG_INFO_IND,

  MSG_ID_IMCB_IMC_END,
  /* IMCB-IMC BV */
MSG_ID_IMC_BV_END,
MODULE_MSG_END( MSG_ID_IMC_IN_END) /* } */

IMC_CHK( (MSG_ID_IMC_BV_BEGIN + IMC_BV_RANGE) > MSG_ID_IMC_BV_END )
/*****ims_msgid.h END*****/

/*****ims_common_def.h START*****/
// Constant
#define MAX_CC_ATD_NUM_LEN          81
#define MAX_CC_CDU_URI_LEN          MAX_CC_ATD_NUM_LEN
#define MAX_CC_ECPI_NUM_LEN         MAX_CC_ATD_NUM_LEN
#define MAX_CC_EAIC_NUM_LEN         MAX_CC_ATD_NUM_LEN

#define IMS_MAX_CALL_NUM            7
#define IMS_P_ASSERT_URI_LEN        512
#define IMS_MAX_CALL_NUM_IN_CONF    5
#define MAX_SS_NOTIFY_DATA_LEN      512

#define IMS_USSD_MAX_MSG_LEN        (400)
#define IMS_USSD_LANGUANGE_LEN      (32)
#define MAX_C2K_SMS_DA              (20+1)

typedef enum
{
    IMS_CALL_CATEGORY_NORMAL = 0,
    IMS_CALL_CATEGORY_EMERGENCY
} ims_call_category_enum;

typedef enum
{
    IMS_CC_RESULT_SUCCESS = 0,
    IMS_CC_RESULT_FAILURE,
    IMS_CC_RESULT_INVALID
} ims_cc_result_enum;

typedef enum
{
    // Source: UA
    IMS_CC_CAUSE_NORMAL = 0,        /* receive BYE request, MO hangup, or User reject to receive the all. mapping to CS NORMAL_CLEARING = 16. */
    IMS_CC_CAUSE_ABNORMAL,          /* memory allocation failed, or no resource for call session in the very first begin!!! VDM can require CS to make call, mapping to CS RESOURCE_UNAVAILABLE = 47*/
    IMS_CC_CAUSE_NONUMBER,          /* no dialing number for MO call. mapping to CS Unassigned/Unobtainable number, VDM can require CS to make call. UNOBTAINABLE_NUMBER = 1*/
    IMS_CC_CAUSE_UNREGISTERED,      /* account is not registered, VDM can require CS to make call, mapping to CS NORMAL_UNSPECIFIED = 31*/
    IMS_CC_CAUSE_DISCONNECT,        /* register state go to disconnect state, mapping to CS BEARER_NOT_AVAIL = 58, play congestion tone*/
    IMS_CC_CAUSE_BECANCEL,          /* we cancel the call, which is receive MO_HANGUP_REQ from AP side. Mapping to CS_NORMAL_CLEANING = 16*/
    IMS_CC_CAUSE_BEREJECT,          /* receive 4xx,5xx,6xx from the peer side to  cancel request, mapping to CS USER_BUSY = 17, play busy tone*/
    IMS_CC_CAUSE_BEREJECT_380,      /* receive 380 alternative service, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make call */
    IMS_CC_CAUSE_BEREJECT_380_EMERGENCY_TO_CS, /* receive 380 alternative service, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make call */
    IMS_CC_CAUSE_BEREJECT_380_EMERGENCY_REREG, /* receive 380 alternative service with reason, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make call */
    IMS_CC_CAUSE_BEREJECT_380_EMERGENCY_TO_NORMAL_CS, /* receive 380 alternative service, mapping to CS SERVICE_NOT_AVAILABLE = 63. VDM can require CS to make a normal call */
    IMS_CC_CAUSE_BEREJECT_480,      /* receive 480, mapping to CS TEMPORARY_FAILURE = 41, play congestion tone*/
    IMS_CC_CAUSE_BEREJECT_503,      /* receive 503 Service Unavailable, retry-after time period is reported. In this time period, UE cannot use VoLTE to make call. mapping to CS SERVICE_NOT_AVAILABLE = 63.*/
    IMS_CC_CAUSE_TX_TIMEOUT,        /* receive internal error from SIPTX, or AP side do not send confirmation for this MT call until we timeout, we abort the MT call presentation. mapping to CS SERVICE_NOT_AVAILABLE = 63.*/
    IMS_CC_CAUSE_NO_PRIVACY,        /* network cannot support privacy service when user requires critical level. mapping to CS BEARER_NOT_AVAIL = 58, play congestion tone */
    IMS_CC_CAUSE_PRECONDFAIL,       /* receive 580 precondition failure, mapping to CS BEARER_NOT_AVAIL = 58, play congestion tone*/
    IMS_CC_CAUSE_SECONDCALL,        /* receive second call request, VDM can have its policy, mapping to CS NORMAL_UNSPECIFIED = 31*/
    IMS_CC_CAUSE_NOMEDIACONTENT,    /* peer side do not provide SDP for media content or receive 488, mapping to CS QOS_NOT_AVAIL = 49, play congestion tone*/
    IMS_CC_CAUSE_INVALIDMSG,        /*SIP message is not valid, so that the related SS command cannot be executed. This happens in SS function. mapping to CS FACILITY_REJECTED = 29. no tone.*/
    IMS_CC_CAUSE_INVALIDCMD,        /*The command cannot be executed since no related call session is existed. This happens in SS function. cannot mapping to CS, AP side require to send 0. no tone.*/
    IMS_CC_CAUSE_INVALIDIDX,        /* cannot find the acct_id or call_id in the Request command, we send Confirmation with failure result and this cause. mapping to CS NORMAL_UNSPECIFIED = 31 */
    IMS_CC_CAUSE_SRVCC,             /* Add for SRVCC, mapping to CS NORMAL_UNSPECIFIED = 31 */
    IMS_CC_CAUSE_FACILITY_REJECTED, /* receive 504 with XML body for Registration Restoration. Mapping to CS FACILILITY_REJECTED = 29 */
    IMS_CC_CAUSE_DEDICATED_BEARER_TIMEOUT,  /* for MO call, send INVITE but no response and timeout, send indication to VDM and VDM can use CS (TMO, CMCC requirement) */
    IMS_CC_CAUSE_GENERIC_RETRY_CS,
    IMS_CC_CAUSE_GENERIC_NO_RETRY,
    IMS_CC_CAUSE_GENERIC_RETRY_IMS_CS,
    IMS_CC_CAUSE_ABORTED,
    IMS_CC_CAUSE_TIMER_B_EXPIRY,
    IMS_CC_CAUSE_UA_MAX,

    // Source: IMC
    IMS_CC_CAUSE_UNAVAILABLE_OF_CALLS,  /* unavailable of IMS Voice Service */
    IMS_CC_CAUSE_RAT_MISMATCH,

    // Do not assign 0xC8 for new error code because it is used by VDM_CC_CAUSE_RESEL_IMS_FOR_ECC for VDM/L4 workaround

    IMS_CC_CAUSE_MAX
} ims_cc_cause_enum;

typedef enum
{
    IMS_CC_EAIC_ALLOWED = 0,
    IMS_CC_EAIC_NOT_ALLOWED
} ims_cc_eaic_result_enum;

typedef enum
{
    IMS_CALL_RELATED_SS_TYPE_REL_HELD_OR_UDUB,                  // AT+CHLD=0
    IMS_CALL_RELATED_SS_TYPE_REL_ACTIVE_AND_ACCEPT,             // AT+CHLD=1
    IMS_CALL_RELATED_SS_TYPE_REL_SPECIFIC_CALL,                 // AT+CHLD=1x
    IMS_CALL_RELATED_SS_TYPE_HOLD_ACTIVE_AND_ACCEPT,            // AT+CHLD=2
    IMS_CALL_RELATED_SS_TYPE_HOLD_ACTIVE_EXCEPT_SPECIFIC_CALL,  // AT+CHLD=2x
    IMS_CALL_RELATED_SS_TYPE_ADD_HELD_CALL,                     // AT+CHLD=3
    IMS_CALL_RELATED_SS_TYPE_EXPLICIT_CALL_TRANSFER,            // AT+CHLD=4
    IMS_CALL_RELATED_SS_TYPE_ACTIVATE_CCBS_CALL,                // AT+CHLD=5
    IMS_CALL_RELATED_SS_TYPE_REL_ALL,                           // AT+CHLD=6
    IMS_CALL_RELATED_SS_TYPE_REL_CALL_REJECT,                   // AT+CHLD=8
    IMS_CALL_RELATED_SS_TYPE_VT_FALL_TO_VOICE,                  // AT+CHLD=9x
    IMS_CALL_RELATED_SS_TYPE_INVALID
} ims_call_related_ss_type_enum;

typedef enum
{
    /* Ref: TS27.007 +CIREPH.
     * NOTE 1: vSRVCC is a Rel-11 feature
     * NOTE 2: Value 3, general non specific failure, might be used
     *         e.g. in the case of handover cancellation as specified in 3GPP
     *         TS 24.301 [83] subclause 6.6.2.
     */
    SRVCC_STATUS_HO_STARTED = 0,        // 0: SRVCC handover has started in the CS domain
    SRVCC_STATUS_HO_SUCCESSFUL,         // 1: SRVCC handover successful
    SRVCC_STATUS_HO_FAILED,             // 2: SRVCC or vSRVCC handover cancelled ("Handover Failure" sent)
    SRVCC_STATUS_HO_CANCELLED,          // 3: SRVCC or vSRVCC handover, general non specific failure
    SRVCC_STATUS_HO_VSRVCC_STARTED,     // 4: vSRVCC handover has started in the CS domain
    SRVCC_STATUS_HO_VSRVCC_SUCCESSFUL,  // 5: vSRVCC handover successful
    SRVCC_STATUS_HO_MAX
} srvcc_status_enum;

typedef enum
{
    IMS_EXT_ERROR_REPORT_NORMAL_CLEARING                = 16,
    IMS_EXT_ERROR_REPORT_RESOURCE_UNAVAILABLE           = 47,
    IMS_EXT_ERROR_REPORT_UNOBTAINABLE_NUMBER            = 1,
    IMS_EXT_ERROR_REPORT_NORMAL_UNSPECIFIED             = 31,
    IMS_EXT_ERROR_REPORT_BEARER_NOT_AVAIL               = 58,
    IMS_EXT_ERROR_REPORT_USER_BUSY                      = 17,
    IMS_EXT_ERROR_REPORT_SERVICE_NOT_AVAILABLE          = 63,
    IMS_EXT_ERROR_REPORT_FDN_RESTRICTION                = 2600, // refer to ps_cause_enum
    IMS_EXT_ERROR_REPORT_TEMPORTARY_FAILURE             = 41,
    IMS_EXT_ERROR_REPORT_QOS_NOT_AVAIL                  = 49,
    IMC_EXT_ERROR_REPORT_INVALID_CMD                    = 0,
    IMS_EXT_ERROR_REPORT_FACILITY_REJECTED              = 29,
    IMS_EXT_ERROR_REPORT_CALL_REJECTED                  = 21,
    IMS_EXT_ERROR_REPORT_DEDICATED_BEARER_TIMEOUT       = 1000, // may reselect CS domain
    IMS_EXT_ERROR_REPORT_GENERIC_RETRY_CS               = 1001, // may reselect CS domain
    IMS_EXT_ERROR_REPORT_GENERIC_NO_RETRY               = 1002,
    IMS_EXT_ERROR_REPORT_GENERIC_RETRY_IMS_CS           = 1003, // may retry IMS once, then CS domain
    IMS_EXT_ERROR_REPORT_TIMER_B_EXPIRY                 = 1004,
    IMS_EXT_ERROR_REPORT_NON_UE_DETECT_EMERG            = 380, // report to AP to trigger normal to ecc redial
    IMS_EXT_ERROR_REPORT_SILENT_REDIAL_3GPP2            = 2001, 
    IMS_EXT_ERROR_REPORT_DIAL_1XRTT_DIRECTLY            = 2002, 
    IMS_EXT_ERROR_REPORT_NEED_GLOBAL_MODE_FOR_EMERG     = 2003,
} ims_ext_error_report_enum;

typedef ims_ext_error_report_enum ims_disc_cause_enum;

typedef enum
{
    IMS_REG_STATE_UNREGISTERED = 0,
    IMS_REG_STATE_REGISTERED
} ims_reg_state_enum;

typedef enum
{
    IMS_REG_TYPE_NORMAL = 0,
    IMS_REG_TYPE_EMERGENCY
} ims_reg_type_enum;

typedef enum
{
    IMS_ACCESS_RAT_LTE = 0,
    IMS_ACCESS_RAT_WIFI,
    IMS_ACCESS_RAT_EHRPD,
    IMS_ACCESS_RAT_NUM
} ims_access_rat_enum;

// Emergency Call Mode Preference
typedef enum
{
   IMS_ECMP_UNSPEC,
   IMS_ECMP_LTE,
   IMS_ECMP_WLAN,
   IMS_ECMP_MAX
} ims_ecmp_enum;

typedef enum
{
    IMS_SUB_EVENT_UNKNOWN = 0,
    IMS_SUB_EVENT_CONF = 1,
    IMS_SUB_EVENT_MAX,
}ims_ss_sub_event_enum;

typedef enum
{
    IMS_DEREG_CAUSE_UNSPECIFIED = 0,
    IMS_DEREG_CAUSE_PWR_OFF = 1,
    IMS_DEREG_CAUSE_RF_OFF = 2,
    IMS_DEREG_CAUSE_MAX
}ims_dereg_cause_enum;

typedef enum
{
    VOICE_ADS_CTRL_AUTO = 0,        //  VDM apply domain selection
    VOICE_ADS_CTRL_IMS_ALWAYS       //  VDM select IMS domain as long as IMS Registered
} voice_ads_ctrl_enum;

typedef enum
{
    IMS_SRVCC_CALL_MODE_VOICE = 0,
    IMS_SRVCC_CALL_MODE_VIDEO,
    IMS_SRVCC_CALL_MODE_EMERGENCY,
    IMS_SRVCC_CALL_MODE_VOICE_CONFERENCE,
    IMS_SRVCC_CALL_MODE_VIDEO_CONFERENCE,
    IMS_SRVCC_CALL_MODE_VOICE_CONFERENCE_PARTS, // voice conference call participant
    IMS_SRVCC_CALL_MODE_VIDEO_CONFERENCE_PARTS, // video conference call participant
    IMS_SRVCC_CALL_MODE_MAX
}ims_srvcc_call_mode_enum;

typedef enum
{
    IMS_SRVCC_CALL_DIRECTION_MO = 0,
    IMS_SRVCC_CALL_DIRECTION_MT,
    IMS_SRVCC_CALL_DIRECTION_MAX,
}ims_srvcc_call_direction_enum;

typedef enum
{
    IMS_SRVCC_CALL_STATE_EARLY = 0,
    IMS_SRVCC_CALL_STATE_EARLY_WITH_MEDIA,
    IMS_SRVCC_CALL_STATE_ACTIVE,
    IMS_SRVCC_CALL_STATE_ON_HOLD,
    IMS_SRVCC_CALL_STATE_MAX
}ims_srvcc_call_state_enum;

typedef enum
{
    IMS_SRVCC_CALL_ECC_CTGY_UNSPECIFIED = 0,
    IMS_SRVCC_CALL_ECC_CTGY_POLICE      = 0x1,
    IMS_SRVCC_CALL_ECC_CTGY_AMBULANCE   = 0x2,
    IMS_SRVCC_CALL_ECC_CTGY_FIRE        = 0x4,
    IMS_SRVCC_CALL_ECC_CTGY_MARINE      = 0x8,
    IMS_SRVCC_CALL_ECC_CTGY_MOUNTAIN    = 0x10,
    IMS_SRVCC_CALL_ECC_CTGY_GAS         = 0x20,
    IMS_SRVCC_CALL_ECC_CTGY_ANIMAL      = 0x40,
    IMS_SRVCC_CALL_ECC_CTGY_PHYSICIAN   = 0x80,
    IMS_SRVCC_CALL_ECC_CTGY_POISON      = 0x100,
    IMS_SRVCC_CALL_ECC_CTGY_MAX         = 0xFFFF
}ims_srvcc_call_ecc_category_enum;

typedef enum
{
/*
<ext_info>: numeric value in hexadecimal format. The value range is from 1 to FFFFFFFF. It is a sum of hexadecimal values, each representing a particular IMS capability of the MT. The MT can have IMS capabilites not covered by the below list. This parameter is not present if the IMS registration status is "not registered".
   1 RTP-based transfer of voice according to MMTEL, see 3GPP TS 24.173 [87]. This functionality can not be indicated if the UE is not available for voice over PS, see 3GPP TS 24.229 [89].
   2 RTP-based transfer of text according to MMTEL, see 3GPP TS 24.173 [87].
   4 SMS using IMS functionality, see 3GPP TS 24.341 [101].
   8 RTP-based transfer of video according to MMTEL, see 3GPP TS 24.173 [87].
The hexadecimal values 10, 20, 40 ?80000 are reserved by the present document.
Example: The parameter <ext_info>=5 means that both RTP-based transfer of voice according to MMTEL and SMS using IMS functionality can be used.
*/

    IMS_REG_SRV_NONE     = 0x00,
    IMS_REG_SRV_VOICE    = 0x01,
    IMS_REG_SRV_TXT      = 0x02,
    IMS_REG_SRV_SMS      = 0x04,
    IMS_REG_SRV_VIDEO    = 0x08,

    IMS_REG_SRV_ALL      = (IMS_REG_SRV_VOICE |
                            IMS_REG_SRV_SMS |
                            IMS_REG_SRV_VIDEO),

    IMS_REG_SRV_BOTH     = IMS_REG_SRV_VOICE | IMS_REG_SRV_SMS
}ims_reg_service_enum;

typedef enum
{
    IMS_CC_EVTA_MODE_UNKNOWN                        = 0,
    IMS_CC_EVTA_MODE_ACCEPT_AS_VOICE                = 1,
    IMS_CC_EVTA_MODE_ACCEPT_AS_ONE_WAY_VIDEO_RX     = 2,
    IMS_CC_EVTA_MODE_ACCEPT_AS_ONE_WAY_VIDEO_TX     = 3,
    IMS_CC_EVTA_MODE_MAX,
} ims_cc_evta_mode_enum;

typedef enum
{
    IMS_CALL_TYPE_NATIONAL        = 129,
    IMS_CALL_TYPE_INTERNATIONAL	= 145,
} ims_call_type_enum;

typedef enum
{
    IMS_CALL_DIR_MO_CALL = 0,
    IMS_CALL_DIR_MT_CALL = 1,
} ims_call_dir_enum;

typedef enum
{
    IMS_CALL_STATE_ACTIVE       = 0,
    IMS_CALL_STATE_HELD         = 1,
    IMS_CALL_STATE_MO_DIALING   = 2,
    IMS_CALL_STATE_MO_ALERTING  = 3,
    IMS_CALL_STATE_MT_INCOMING  = 4,
    IMS_CALL_STATE_MT_WAITING   = 5,
} ims_call_state_enum;

typedef enum
{
    IMS_CALL_MODE_CS_DOMAIN_BEGIN     = 0,
    IMS_CALL_MODE_CS_VOICE_CALL       = IMS_CALL_MODE_CS_DOMAIN_BEGIN,
    IMS_CALL_MODE_CS_DATA_CALL,
    IMS_CALL_MODE_CS_FAX_CALL,
    IMS_CALL_MODE_CS_VFD_VOICE,     /* voice followed by data, voice mode */
    IMS_CALL_MODE_CS_AVD_VOICE,     /* alternating voice/data, voice mode */
    IMS_CALL_MODE_CS_AVF_VOICE,     /* alternating voice/fax, voice mode */
    IMS_CALL_MODE_CS_VFD_DATA,      /* voice followed by data, data mode */
    IMS_CALL_MODE_CS_AVD_DATA,      /* alternating voice/data, data mode */
    IMS_CALL_MODE_CS_AVF_FAX,       /* alternating voice/fax, fax mode */
    IMS_CALL_MODE_CS_UNKNOWN_MODE,
    IMS_CALL_MODE_CS_VIDEO_CALL,

    IMS_CALL_MODE_IMS_DOMAIN_BEGIN    = 20,
    IMS_CALL_MODE_IMS_VOICE_CALL      = IMS_CALL_MODE_IMS_DOMAIN_BEGIN,
    IMS_CALL_MODE_IMS_VIDEO_CALL,
    IMS_CALL_MODE_IMS_VOICE_CONF,
    IMS_CALL_MODE_IMS_VIDEO_CONF,
    IMS_CALL_MODE_IMS_VOICE_CONF_PARTS, // voice conference call participant
    IMS_CALL_MODE_IMS_VIDEO_CONF_PARTS, // video conference call participant
    IMS_CALL_MODE_IMS_DOMAIN_END      = 39
} ims_call_mode_enum;

typedef enum
{
    IMCSMS_MS_NW_RP_DATA =0,
    IMCSMS_NW_MS_RP_DATA,
    IMCSMS_MS_NW_RP_ACK,
    IMCSMS_NW_MS_RP_ACK,
    IMCSMS_MS_NW_RP_ERROR,
    IMCSMS_NW_MS_RP_ERROR,
    IMCSMS_MS_NW_RP_SMMA
}imcsms_rp_msg_type_enum;

typedef enum
{
    SC_UNSPECIFIED                      = (0<<0),
    SC_POLICE                           = (1<<0), 
    SC_AMBULANCE                        = (1<<1), 
    SC_FIRE                             = (1<<2), 
    SC_MARINE                           = (1<<3), 
    SC_MOUNTAIN                         = (1<<4),  
    SC_MANUALLY_INITIATED_ECALL         = (1<<5),
    SC_AUTOMATICALLY_INITIATED_ECALL    = (1<<6),
    SC_RESERVED                         = (1<<7),
    SC_GAS                              = (1<<8), 
    SC_ANIMAL                           = (1<<9), 
    SC_PHYSICAL                         = (1<<10),
    SC_POISON                           = (1<<11) 
}ims_ecc_category_enum;

typedef struct
{
    /* +ECPI:<call_id>,<msg_type>,<is_ibt>,<is_tch>,<dir>,
     *       <call_mode>,[<number>,<type>],[<disc_cause>],[<pau>]
     */
    kal_bool                is_ibt;
    kal_bool                is_tch;
    ims_call_dir_enum       call_dir;
    ims_call_mode_enum      call_mode;
    kal_bool                is_number_call_type_present;
    kal_uint8               number[MAX_CC_ECPI_NUM_LEN];
    ims_call_type_enum      call_type;
    kal_bool                is_disc_cause_present;
    ims_disc_cause_enum     disc_cause;
} ims_ecpi_info_struct;

typedef struct
{
    kal_uint8                           call_id;      /* call_id_ims = call_id_ap */
    ims_srvcc_call_mode_enum            call_mode;
    ims_srvcc_call_direction_enum       call_direction;
    ims_srvcc_call_state_enum           call_state;
    ims_srvcc_call_ecc_category_enum    call_ecc_category;
    kal_uint8                           num_of_conf_parts;
    kal_uint8                           call_number[MAX_CC_ATD_NUM_LEN];
} ims_srvcc_call_ctxt_struct;

typedef struct {
    kal_uint8               number[MAX_CC_ECPI_NUM_LEN];
    ims_call_type_enum      call_type;
    ims_call_mode_enum      call_mode;
} ims_cc_eaic_info_struct;

/* +CLCC:<idx>,<dir>,<stat>,<mode>,<mpty>,[<number>,<type>]... */
typedef struct {
    kal_uint8               call_id;
    ims_call_dir_enum       dir;
    ims_call_state_enum     call_state;
    ims_call_mode_enum      call_mode;
    kal_bool                mpty;  // FALSE: is NOT conference call, TRUE: is conference call
    ims_call_type_enum      call_type;
    kal_uint8               number[MAX_CC_ATD_NUM_LEN];
} ims_call_list_struct;

/* ViLTE */
typedef enum
{
    IMS_CC_CAMERA_INACTIVE                          = 0,
    IMS_CC_CAMERA_SEND_ONLY                         = 1,
    IMS_CC_CAMERA_RECV_ONLY                         = 2,
    IMS_CC_CAMERA_SEND_RECV                         = 3,
    IMS_CC_CAMERA_MAX,
} ims_cc_camera_direction_enum;

typedef enum
{
    IMS_SEND_USSD_RESULT_SUCCESS                    = 0,
    IMS_SEND_USSD_RESULT_FAILURE                    = 1,
    IMS_SEND_USSD_RESULT_MAX,
} ims_send_ussd_result_enum;

typedef enum
{
    IMCSMS_C2K_SUBMIT = 0,
    IMCSMS_C2K_ACKNOWLEDGE
}imcsms_c2k_msg_type_enum;

typedef enum
{
    IMCSMS_C2K_CLASS_NONE =0,    //No error
    IMCSMS_C2K_CLASS_RESERVED,   //Reserved
    IMCSMS_C2K_CLASS_TEMPORARY, //Temporary error
    IMCSMS_C2K_CLASS_PERMANENT  //Permanent error
}imcsms_c2k_error_class_enum;

typedef enum
{
    IMCSMS_C2K_CAUSE_START = 0,
    IMCSMS_C2K_CAUSE_NWRES = 2,
    IMCSMS_C2K_CAUSE_NWFAIL = 3,
    IMCSMS_C2K_CAUSE_OTHER_GENERAL_PROBLEM = 107,
    IMCSMS_C2K_CAUSE_OK = 32768,
    IMCSMS_C2K_CAUSE_END = 32780,
}imcsms_c2k_cause_code_enum;

/*****ims_common_def.h END*****/

/*****imsp_imc_struct.h START*****/
typedef enum {
    IMS_ECCTRL_STATE_CHANGE_HELD = 131,
    IMS_ECCTRL_STATE_CHANGE_ACTIVE = 132
} ims_ecctrl_enum;

/*
 * Description
 *  - the primitive is used for PS to notify IMC that the UE is in limited service
 * Direction
 *	- PS -> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
} imsp_imc_oos_start_req_struct;

/*
 * Description
 *  - the primitive is used for PS to notify IMC that the UE is out of limited service
 * Direction
 *	- PS -> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
} imsp_imc_oos_end_req_struct;

/*
 * Description
 *  - the primitive is used for IMC to notify PS current IMS REG state. (IMC has to indicate VDM + PS other modules)
 * Direction
 *	- IMC -> PS
 */
typedef struct {
    LOCAL_PARA_HDR
    ims_reg_state_enum 	 reg_state;	// REGISTERED, UNREGISTERED
    ims_reg_type_enum	 reg_type;	// normal or emergency reg
    ims_dereg_cause_enum dereg_cause; //ims_comm_def.h
    ims_access_rat_enum  rat;
    ims_ecmp_enum        ecmp;
    /* ViLTE */
    ims_reg_service_enum  reg_service;
} imsp_imc_ims_reg_status_ind_struct;

// CC Interface
typedef struct imsp_imc_cc_call_progress_ind_struct {
    LOCAL_PARA_HDR
    kal_uint8             call_id;
    kal_uint8             msg_type;
    ims_ecpi_info_struct  ecpi_info;
} imsp_imc_cc_call_progress_ind_struct;

typedef struct imsp_imc_cc_imsems_ind_struct {
    LOCAL_PARA_HDR
    kal_uint8               call_id;
} imsp_imc_cc_imsems_ind_struct;

typedef struct imsp_imc_cc_evtstatus_ind_struct {
    LOCAL_PARA_HDR
    kal_bool is_on;
} imsp_imc_cc_evtstatus_ind_struct;

typedef struct imsp_imc_cc_espeech_ind_struct {
    LOCAL_PARA_HDR
    kal_bool is_on;
} imsp_imc_cc_espeech_ind_struct;

typedef struct imsp_imc_cc_cssu_ind_struct {
    LOCAL_PARA_HDR
    kal_uint8   msg_type;
} imsp_imc_cc_cssu_ind_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_CALL_CONTROL_REQ
 *           AT>AT+ECCTRL=<call_id>,<call_state>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 call_id;
    ims_ecctrl_enum call_state;
} imsp_imc_call_control_req_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_CALL_CONTROL_CNF
 *           AT< OK | ...
 */
typedef struct {
    LOCAL_PARA_HDR
    ims_cc_result_enum result;
    ims_cc_cause_enum  cause;
} imsp_imc_call_control_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   call_id;
    kal_uint8   dir;
    kal_uint8   msg_type;
    kal_uint8   method;
    kal_uint16  response_code;
    imcf_uint8  reason_text[IMC_MAX_REASON_TEXT_LENGTH];
} imsp_imc_sip_call_progress_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    ims_service_request_fail_enum cause;
} imsp_imc_service_request_fail_req_struct;

// SS Interface
typedef enum {
    IMS_CONF_OP_ADD    = 0,    // add
    IMS_CONF_OP_REMOVE = 1,    // remove
    IMS_CONF_OP_MAX
} ims_conf_operation_enum;


typedef enum {
    IMS_NOTIFY_SERVICE_CALL_WAITING     = 259,  // mapped <service_id> = 259
    IMS_NOTIFY_SERVICE_CALL_BARRING	    = 256,	// mapped <service_id> = 256
    IMS_NOTIFY_SERVICE_CALL_FORWARDING  = 13,   // mapped <service_id> = 13
    IMS_NOTIFY_SERVICE_CALL_MWI         = 3,    // Not used
    IMS_NOTIFY_SERVICE_CALL_CONFERENCE  = 4,    // Not used
    IMS_NOTIFY_SERVICE_MAX
} ims_notify_service_enum;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_SET_VIDEO_ABILITY_REQ
 *           AT>AT+EIMSCCP=0|1
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_enable;
} imsp_imc_ss_set_video_ability_req_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_SET_VIDEO_ABILITY_CNF
 *           AT< OK
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_success;
    kal_uint32  cause;      //unused
} imsp_imc_ss_set_video_ability_cnf_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SET_VOICE_CAPABILITY_REQ
 *           AT>AT+EIMSVOICE=0|1
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_enable;
} imsp_imc_set_voice_capability_req_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SET_VOICE_CAPABILITY_CNF
 *           AT< OK
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_success;
    kal_uint32  cause;      //unused
} imsp_imc_set_voice_capability_cnf_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SET_SMS_CAPABILITY_REQ
 *           AT>AT+EIMSSMS=0|1
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_enable;
} imsp_imc_set_sms_capability_req_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SET_SMS_CAPABILITY_CNF
 *           AT< OK
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_success;
    kal_uint32  cause;      //unused
} imsp_imc_set_sms_capability_cnf_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_CONFERENCE_CONTROL_REQ
 *           AT>AT+ECONF=<conf_call_id>,<operation>,<num>[,<joined_call_id>]
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               conf_call_id;
    ims_conf_operation_enum operation;
    kal_uint8               num[MAX_CC_ATD_NUM_LEN];
    kal_uint8               joined_call_id;
} imsp_imc_ss_conference_control_req_struct;


/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_CONFERENCE_CONTROL_CNF
 *           AT< OK | ...
 */
typedef struct {
    LOCAL_PARA_HDR
    ims_cc_result_enum result;
    ims_cc_cause_enum  cause;
} imsp_imc_ss_conference_control_cnf_struct;


/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_SUBSCRIBE_CONTROL_IND
 *           AT< +ESUBCTRL:<call_id>,<event>,<result>,<cause>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               call_id;
    ims_ss_sub_event_enum   event;
    ims_cc_result_enum      result;
    ims_cc_cause_enum       cause;
} imsp_imc_ss_subscribe_control_ind_struct;


/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_CONFERENCE_CONTROL_IND
 *           AT< +ECONF:<conf_call_id>,<operation>,<num>,<result>,<cause>[,<joined_call_id>]
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               conf_call_id;
    ims_conf_operation_enum operation;
    kal_uint8               num[MAX_CC_ATD_NUM_LEN];
    kal_uint8               joined_call_id;
    ims_cc_result_enum      result;
    ims_cc_cause_enum       cause;
} imsp_imc_ss_conference_control_ind_struct;


/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SS_PROGRESS_NOTIFY_IND
 *           AT< +ECMCCSS:<call_id>,<service_id>,<data>
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               call_id;
    ims_notify_service_enum service;
    kal_uint8               data[MAX_SS_NOTIFY_DATA_LEN]; // 512
} imsp_imc_ss_progress_notify_ind_struct;

/* WFC */
typedef struct {
    LOCAL_PARA_HDR
    ims_access_rat_enum                        source_rat;
    ims_access_rat_enum                        target_rat;
}imsp_imc_handover_start_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    ims_access_rat_enum                        source_rat;
    ims_access_rat_enum                        target_rat;
    kal_bool                                   result; /* fail (FALSE) or success (TRUE) */
}imsp_imc_handover_stop_ind_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_CC_MEDIA_MOD_IND
 */
/* VILTE */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8                       call_id;
    ims_call_mode_enum 	            call_mode;
    ims_cc_camera_direction_enum    camera_direction;
    kal_uint8                       audio_direction;
    kal_uint8                       audio_codec; // opaque
    kal_int8                        p_assert_uri[IMS_P_ASSERT_URI_LEN];
} imsp_imc_cc_media_mod_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8                       call_id;
    kal_uint8 	                    local_video_capability;
    kal_uint8                       remote_video_capability;
} imsp_imc_cc_video_cap_ind_struct;

/*
 * @brief Turn on/off Radio link monitor
 * @note MSG_ID_IMSP_IMC_RLM_EVENT_IND
 */
typedef struct {
	LOCAL_PARA_HDR
	kal_uint8	  reserve;
	kal_uint8     event_type;
	kal_uint16	  band;
} imsp_imc_rlm_event_ind_struct;

/**
 * @brief USSD AT Command RILD-->IMSP-->IMC-->IMCB-->UA
 * @note MSG_ID_IMSP_IMC_SEND_USSD_REQ
 */
typedef struct imsp_imc_send_ussd_req {
    LOCAL_PARA_HDR
    kal_uint8       cmd_class;      /*< class */
    kal_uint8       operation;      /*< oper */
    kal_uint16      action;         /*< action */
    kal_uint8       language[IMS_USSD_LANGUANGE_LEN];   /*< language */
    kal_uint16      error_code;     /*< error_code */
    kal_uint16      message_len;    /*< message length */
    kal_uint8       message[IMS_USSD_MAX_MSG_LEN];
} imsp_imc_send_ussd_req_struct;

/**
 * @brief USSD AT Command RILD<--IMSP<--IMC<--IMCB<--UA
 * @note MSG_ID_IMSP_IMC_SEND_USSD_CNF
 */
typedef struct imsp_imc_send_ussd_cnf {
    LOCAL_PARA_HDR
    kal_uint32      response;       /*< OK or ERROR, may be extended to CME ERROR later on*/
} imsp_imc_send_ussd_cnf_struct;

/**
 * @brief USSD AT Command RILD<--IMSP<--IMC<--IMCB<--UA
 * @note MSG_ID_IMSP_IMC_RECV_USSD_IND
 */
typedef struct imsp_imc_recv_ussd_ind {
    LOCAL_PARA_HDR
    kal_uint8       urc_class;      /*< class */
    kal_uint8       alert_pattern;  /*< Alertin Pattern for AP */
    kal_uint8       padding[2];     /*< oper */
    kal_uint16      status;         /*< status */
    kal_uint16      sip_cause;      /*< status */
    kal_uint8       language[IMS_USSD_LANGUANGE_LEN];   /*< language */
    kal_uint16      error_code;     /*< error_code */
    kal_uint16      message_len;    /*< message length */
    kal_uint8       message[IMS_USSD_MAX_MSG_LEN];
} imsp_imc_recv_ussd_ind_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SET_EMERGENCY_AID_REQ
 *           AT>AT+EIMSAID="xxxx-yyyy-wwww-zzzz"
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 emergency_aid[IMC_MAX_EMERGENCY_AID_LEN];
} imsp_imc_set_emergency_aid_req_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_SET_EMERGENCY_AID_CNF
 *           AT< OK
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_success;
    kal_uint32  cause;      //unused
} imsp_imc_set_emergency_aid_cnf_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_CISRVCC_REQ
 *           AT>AT+CISRVCC=0|1
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_enable;
} imsp_imc_cisrvcc_req_struct;

/*
 * @brief
 * @note MSG_ID_IMSP_IMC_CISRVCC_CNF
 *           AT< OK
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_bool    is_success;
    kal_uint32  cause;      //unused
} imsp_imc_cisrvcc_cnf_struct;

/*****imsp_imc_struct.h END*****/

/*****imcsms_imc_struct.h START*****/
/*
 * Description
 *  - the primitive is used to send SMS RPDU(RP-DATA/RP-ACK/RP-ERROR) to network through IMS domain
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               seq_id;
    kal_uint8               cb_id;
    imcsms_rp_msg_type_enum data_type;
    kal_bool                is_valid_tpda; /*To specify that the TP-DA has valid content*/
    kal_bool                is_international;/* to specify the type of number is International or Not*/
    /* spec 23.040 9.1.2.5 mentions the MAX size of TP-DA(Address length(1) + Type-of-address(1) +
         Address Value(max 10 bytes)) can be 12 bytes, and hence the actual address when converted to
          string will take 21 bytes including '\0'*/
    kal_uint8               tpda[21];
} imcsms_imc_send_sms_req_struct;

/*
 * Description
 *  - the primitive is used report SMS RPDU sending status
 * Direction
 *  - SMS sub-module(IMCSMS) <-- IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               seq_id;
    imcsms_rp_msg_type_enum data_type;
    kal_bool                result;
    kal_uint8               cause;
} imcsms_imc_send_sms_cnf_struct;

/*
 * Description
 *  - the primitive is used notify IMCSMS the received RPDU(RP-DATA/RP-ACK/RP-ERROR)
 * Direction
 *  - SMS sub-module(IMCSMS) <-- IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  seq_id;
    kal_uint8  cb_id;
} imcsms_imc_recv_sms_ind_struct;

/*
 * Description
 *  - the primitive is used to notify IMC  the received RPDU type and status
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               seq_id;
    kal_uint8               cb_id;
    kal_uint8               result;
    imcsms_rp_msg_type_enum data_type;
} imcsms_imc_recv_sms_rsp_struct;

/*
 * Description
 *  - the primitive is used to notify IMC the SMS FSM is complete and IMC is able to clean related callback data according to cb_id
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  seq_id;
    kal_uint8  cb_id;
} imcsms_imc_rel_sms_req_struct;

/*
 * Description
 *  - the primitive is used to notify IMC the MO SMS FSM is terminated
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  seq_id;
    kal_uint8  cb_id;
    kal_uint8  cause;
} imcsms_imc_abort_send_sms_req_struct;

/*
 * Description
 *  - the primitive is used to notify Vm the MO SMS FSM is terminated
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  seq_id;
    kal_uint8  cb_id;
} imcsms_imc_abort_recv_sms_req_struct;

/*
 * Description
 *  - the primitive is used report SMS sub-module the error of IMS domain
 * Direction
 *  - SMS sub-module(IMCSMS) <-- IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  seq_id;
    kal_uint8  cause;
    kal_bool   result;
} imcsms_imc_recv_sms_error_ind_struct;

/*
 * Description
 *  - the primitive is used to send C2K SMS to network through IMS domain
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8                cb_id;
    imcsms_c2k_msg_type_enum msg_type;

    /*Add destination address here for SIP header*/
    kal_bool                 is_da_valid;
    kal_bool                 is_international;
    kal_uint8                da[MAX_C2K_SMS_DA];
} imcsms_imc_send_c2k_sms_req_struct;

/*
 * Description
 *  - the primitive is used report C2K SMS sending status
 * Direction
 *  - SMS sub-module(IMCSMS) <-- IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    imcsms_c2k_msg_type_enum msg_type;
    kal_bool                 result;
    kal_uint16                cause;
} imcsms_imc_send_c2k_sms_cnf_struct;

/*
 * Description
 *  - the primitive is used notify IMCSMS the received C2K SMS
 * Direction
 *  - SMS sub-module(IMCSMS) <-- IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8  cb_id;
} imcsms_imc_recv_c2k_sms_ind_struct;

/*
 * Description
 *  - the primitive is used to notify IMC  the received C2K SMS status
 * Direction
 *  - SMS sub-module(IMCSMS) --> IMC
 */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8               cb_id;
    kal_uint8               result;
} imcsms_imc_recv_c2k_sms_rsp_struct;
/*****imcsms_imc_struct.h END*****/

/*****vdm_imc_struct.h START*****/
// SRVCC
typedef struct
{
  LOCAL_PARA_HDR
  kal_uint32                    num_of_calls;
  ims_srvcc_call_ctxt_struct    srvcc_call_ctxt_from_ims[IMS_MAX_CALL_NUM];
} vdm_imc_srvcc_context_transfer_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    srvcc_status_enum           srvcc_ho_status;
} vdm_imc_srvcc_status_update_req_struct;

// Call Control and Supplementary Service
// MO call establishment related
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_call_category_enum      call_category;
    ims_call_mode_enum          call_mode;
    kal_uint8                   number[MAX_CC_ATD_NUM_LEN];
    ims_call_type_enum          call_type;
    ims_access_rat_enum         rat;
    kal_uint16                  emergency_service_category; //ims_ecc_category_enum
} vdm_imc_ims_cc_mo_call_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
    ims_access_rat_enum         rat;
    kal_uint16                  emergency_service_category; //ims_ecc_category_enum
} vdm_imc_ims_cc_mo_call_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_call_category_enum      call_category;
    ims_call_mode_enum          call_mode;
    kal_uint8                   conf_call_participants;
    kal_uint8                   conf_call_number_list[IMS_MAX_CALL_NUM_IN_CONF][MAX_CC_ATD_NUM_LEN];
} vdm_imc_ims_cc_mo_conf_call_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_mo_conf_call_cnf_struct;

// MT call establishment related
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   seq_no;
    ims_cc_eaic_info_struct     eaic_info;
} vdm_imc_ims_cc_mt_call_present_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    kal_uint8                   seq_no;
    ims_cc_eaic_result_enum	    eaic_result;
} vdm_imc_ims_cc_mt_call_present_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_imc_ims_cc_mt_call_accept_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_cc_evta_mode_enum       mode;
} vdm_imc_ims_cc_mt_vt_special_accept_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_mt_call_accept_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_mt_vt_special_accept_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_ecpi_info_struct        ecpi_info;
} vdm_imc_ims_cc_mt_call_setup_ind_struct;


typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   seq_no;
    ims_ecpi_info_struct        ecpi_info;
} vdm_imc_ims_cc_mt_call_abort_ind_struct;

// Hangup call related
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_ecpi_info_struct        ecpi_info;
} vdm_imc_ims_cc_call_disconnect_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_imc_ims_cc_mt_call_ring_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_imc_ims_cc_hangup_all_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_hangup_all_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
} vdm_imc_ims_cc_force_hangup_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   call_id;
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_force_hangup_cnf_struct;

// Supplementary service related
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                       call_id;
    ims_call_related_ss_type_enum   opcode;
} vdm_imc_ims_cc_call_related_ss_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_call_related_ss_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_imc_ims_cc_ext_error_report_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    ims_ext_error_report_enum   ceer_cause;
    ims_cc_result_enum          result;
    ims_cc_cause_enum           cause;
} vdm_imc_ims_cc_ext_error_report_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_imc_ims_cc_list_current_calls_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8                   total_call;
    ims_call_list_struct        call_list[IMS_MAX_CALL_NUM];
} vdm_imc_ims_cc_list_current_calls_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
} vdm_imc_ims_cc_alloc_conf_call_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool                    is_success;
    kal_uint8                   conf_call_id;
} vdm_imc_ims_cc_alloc_conf_call_rsp_struct;

typedef struct
{
    LOCAL_PARA_HDR
    voice_ads_ctrl_enum ads_ctrl;
} vdm_imc_ads_ctrl_ind_struct;
/*****vdm_imc_struct.h END*****/

/*****ltecsr_struct.h START*****/
#define VOLTE_IPADDR_LENGTH                 16
#define VOLTE_IPV4_LENGTH                   4
#define VOLTE_IPV6_LENGTH                   16
#define VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH 16
#define VOLTE_MAX_SDP_EGBYTE_LENGTH         8
#define VOLTE_MAX_CNAME_LENGTH              52

typedef struct volte_event_media_config {
    kal_uint8   local_address[VOLTE_IPADDR_LENGTH];

    //  RTP and RTCP session for audio and video
    kal_uint32  audio_b_as;               // RTP bandwidth
    kal_uint32  audio_b_rs;               // RTCP sender bandwidth
    kal_uint32  audio_b_rr;               // RTCP receiver bandwidth
    kal_uint16  audio_remote_rtp_port;
    kal_uint16  audio_remote_rtcp_port;
    kal_uint16  audio_local_rtcp_port;     ///< rtcp port number. we may configure it not rtp_port+1
    kal_uint16  audio_local_rtp_port;      ///< rtp port number for media attribute in SDP message
    kal_uint8   audio_remote_rtp_address[VOLTE_IPADDR_LENGTH];
    kal_uint8   audio_remote_rtcp_address[VOLTE_IPADDR_LENGTH];

    kal_uint32  video_b_as;               // RTP bandwidth
    kal_uint32  video_b_rs;               // RTCP sender bandwidth
    kal_uint32  video_b_rr;               // RTCP receiver bandwidth
    kal_uint16  video_remote_rtp_port;
    kal_uint16  video_remote_rtcp_port;
    kal_uint16  video_local_rtcp_port;     ///< rtcp port number. we may configure it not rtp_port+1
    kal_uint16  video_local_rtp_port;      ///< rtp port number for media attribute in SDP message
    kal_uint8   video_remote_rtp_address[VOLTE_IPADDR_LENGTH];
    kal_uint8   video_remote_rtcp_address[VOLTE_IPADDR_LENGTH];

    kal_uint8   remote_addr_type;           ///< VoLTE_Event_IP_Version_e, apply to RTP audio & video session, RTCP audio & video session
    kal_uint8   audio_rtp_direction;        ///< VoLTE_Event_RTP_DIRECTION_e
    kal_uint8   video_rtp_direction;        ///< VoLTE_Event_RTP_DIRECTION_e
    // required by video codec
    kal_uint8   video_payload_type;

    kal_uint32  rtcp_interval;              ///< IMCB will get value from NVRAM. Used by data plane.
    kal_uint32	dscp;		    	    ///< IMCB will get value from NVRAM. Used by data plane.
    kal_uint32	video_dscp;		    ///< IMCB will get value from NVRAM. Used by data plane.
    kal_uint32	voice_soc_priority;	    ///< IMCB will get value from NVRAM. Used by data plane.
    kal_uint32	video_soc_priority;	    ///< IMCB will get value from NVRAM. Used by data plane.

    // required by voice codec driver
    kal_uint8   audio_codec;                ///< voip_codec_enum in codec_def.h
    kal_uint8   audio_payload_type;         ///< payload type
    kal_uint8   audio_clock_rate;           ///< dynamic rate, clock rate, see VoLTE_Event_Clock_Rate_e
    kal_uint8   is_dtmf;                    ///< is dtmf tone useing telephony event

    kal_uint8   tele_evt_payload_type;  ///< telephony event payload type
    kal_uint8   tele_evt_clock_rate;    ///< telephony event rate
    kal_uint8   g723_bitrate;           ///< VoLTE_Event_G7231_BitRate_e
    kal_uint8   is_g723_annexAYES;      ///< G.723.1 annexA Yes:1, No:0

    kal_uint8   is_g729_annexBYES;      ///< G.729 annexB Yes:1, No:0
    kal_uint8   ilbc_mode;              ///< VoLTE_Event_iLBC_Rate_e
    // required by RFC 6679 ECN
    kal_uint8   ecn_capable_rtp_method; ///< VoLTE_Event_ECN_RTP_METHOD_e
    kal_uint8   ecn_capable_ect;        //0, 1

    kal_uint32  ptime;         ///< ptime of the codec
    kal_uint32  max_ptime;    ///< max ptime is the buffer size for data plane. may not the same to ptime
    // required by AMR and AMR WB codec
    kal_int8    mode_set[VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH];

    kal_uint8   is_octet_align;     ///< 0:default, bandwidth-efficient, 1: octet_align
    kal_uint8   mode_change_period; ///< the period should be N. but currently only 1(default) or 2.
    kal_uint8   mode_change_cap;    ///< 1(default) or 2(recommended to support)
    kal_uint8   mode_change_neighbor;///< 0(default) or 1

    kal_uint8   crc;                ///< 0 or 1
    kal_uint8   robust;             ///< 0 or 1
    kal_uint8   interleaving;       ///< the maximum number of frame-blocks. 0: not present
    kal_uint8   channel;            ///< the number of audio channel. must be 1 currently
    kal_uint16  max_red;            // the maximum duration in ms
// required by RTCP FB
    kal_uint16  rtcp_rsize;
    kal_uint32  rtcpfb_type;        ///< bitmap, VoLTE_Event_RTCP_FB_Type_e
    kal_uint32	network_id;
	kal_int8    id[VOLTE_MAX_SDP_EGBYTE_LENGTH];
	kal_int8    trr_int[VOLTE_MAX_SDP_EGBYTE_LENGTH];
	kal_int8    id_app_string[VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
	kal_int8    ack_app_string[VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
	kal_int8    nack_app_string[VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
	kal_int8    tmmbr_string[VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
	kal_int8    vbcm_string[VOLTE_MAX_SDP_FMTP_SUB_VALUE_LENGTH];
	kal_int8    cname_string[VOLTE_MAX_CNAME_LENGTH];

    /* EVS Support */
    kal_uint8   evs_support;
    kal_uint8   evs_mode_switch;
    kal_uint8   hf_only;
    kal_uint8   dtx;
    kal_uint8   dtx_recv;
    kal_uint8   pading[3];
    kal_uint8   br[2];              ///< VoLTE_EVS_Codec_Bitrate_e
    kal_uint8   br_send[2];         ///< VoLTE_EVS_Codec_Bitrate_e
    kal_uint8   br_recv[2];         ///< VoLTE_EVS_Codec_Bitrate_e
    kal_uint8   bw[2];              ///< VoLTE_EVS_Bandwidth_e
    kal_uint8   bw_send[2];         ///< VoLTE_EVS_Bandwidth_e
    kal_uint8   bw_recv[2];         ///< VoLTE_EVS_Bandwidth_e
    kal_uint8   ch_send;
    kal_uint8   ch_recv;
    kal_int8    ch_aw_recv;
    kal_int8    cmr;
} VoLTE_Event_Media_config_t;

typedef struct s_media_param {
	VoLTE_Event_Media_config_t o;
} media_param_t;

typedef struct s_xxx2ltecsr_param {

	/* call id */
	kal_int32 cid;

	/* session id */
	kal_int32 voice_sid;
	kal_int32 video_sid;

   	/* ebi for voice and video */
   	/* for media_del, ebi    is not used */
   	kal_int32 voice_ebi;
   	kal_int32 video_ebi;

	/* channel for voice and video */
   	kal_uint16 voice_type;  /* 0 (LTE), 1 (WIFI) */
   	kal_uint16 video_type;  /* 0 (LTE), 1 (WIFI) */

	/* op code */
	kal_uint32 func_class;

	/* pdn_id */
	kal_uint32 default_ebi;

	/* all parameters */
	media_param_t params;

} xxx2ltecsr_param_t ;
/* from IMC to LTECSR */
typedef struct s_ltecsr_media_new {
	LOCAL_PARA_HDR
    kal_uint32  tv_sec;         // IMCB use gettimeofday to get the time from 1970 (sec)
	xxx2ltecsr_param_t param;
} ltecsr_media_new_struct;

typedef struct s_ltecsr_media_del {
	LOCAL_PARA_HDR
	xxx2ltecsr_param_t param;
} ltecsr_media_del_struct;

typedef struct s_ltecsr_media_update {
	LOCAL_PARA_HDR
	xxx2ltecsr_param_t param;
} ltecsr_media_update_struct;

typedef struct s_ltecsr_media_active {
	LOCAL_PARA_HDR
	kal_int32 cid;
	kal_int32 direction;
} ltecsr_media_active_struct;

/* from LTECSR to IMC */
typedef struct s_ltecsr_media_no_dlpkt_struct {
	LOCAL_PARA_HDR
	kal_int32 cid;
} ltecsr_media_no_dlpkt_struct;
/*****ltecsr_struct.h END*****/
#endif /* _IMS_INTERFACE_MD_H */
