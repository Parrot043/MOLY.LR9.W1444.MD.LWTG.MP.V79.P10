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

/** \file
 *
 * Filename:
 * ---------
 *   c2k_irat_msg_struct.h
 *
 * Project:
 * --------
 *   C2K
 *
 * Description:
 * ------------
 * This file defines the structures of messages between MD1 and MD3.
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Log$
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * c+w lr9.
 *
 * removed!
 * removed!
 * .interface
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * 	Denali C+G GSM Tx information got from MD1
 *
 * removed!
 * removed!
 * Check in MD1-MD3 interface
 *
 * removed!
 * removed!
 * move MAX_NUM_OF_EARFCN definition
 *
 * removed!
 * removed!
 * c2k neighbor  list update for ap/md irat (sap part)
 *
 * removed!
 * removed!
 * 	Merge CL939480 from LR9.W1423.MD.LWTG.MP.LTEC2KIRAT.DEV to LR9.W1444.MD.LWTG.MP
 *
 * removed!
 * removed!
 * help yong.zhao to submit this CL
 *
 * 12 04 2014 max.mo
 * removed!
 * . change binding_id from kal_uint8 to kal_uint32 in pdn_info_struct
 *
 * removed!
 * removed!
 * Add MD3 debug trace
 *
 * removed!
 * removed!
 * .
 *
 * 11 07 2014 max.mo
 * removed!
 * . change fallback from kal_bool to enum, change C2K cause structure.
 *
 * removed!
 * removed!
 * <saved by Perforce>
 *
 * 11 03 2014 max.mo
 * removed!
 * . update deact_retry interface in pdn_info_struct
 *
 * 10 22 2014 max.mo
 * removed!
 * . Sync Interface
 *
 * removed!
 * removed!
 * Modify VAL-RAC SAP
 *
 * removed!
 * removed!
 * Modify VAL-RAC SAP
 *
 * removed!
 * removed!
 * Modify VAL-RAC SAP
 *
 * 10 20 2014 max.mo
 * removed!
 * [L4C] Sync c2k_lte_rat_chage_req_struct
 * 	c2k_lte_rat_chage_cnf_struct
 * 	lte_c2k_rat_chage_req_struct
 * 	lte_c2K_rat_chage_cnf_struct
 *
 * removed!
 * removed!
 * [SIXTH00001201] [New feature][PS][CSS/VAL]IRAT code development
 * 	IRAT development
 *
 * removed!
 * removed!
 * Back out changelist 814142
 *
 * removed!
 * removed!
 * update UIM-SIM SAT interface according to the UIM-SIM SAT SAP document
 *
 * removed!
 * removed!
 * update MD1 & MD3 interface file. 1: remove message id used by MD3 into its internal file. 2: add c2k_irat_result_enum define
 *
 * removed!
 * removed!
 * update SIM-UIM sap:message id and message struct between MD3 and MD1
 *
 * removed!
 * removed!
 * check-in struct
 *
 * removed!
 * removed!
 * Add interface message id enum value for C2K IRAT PC IT
 *
 * removed!
 * removed!
 * modify c2k_irat_msg_struct for SIM_APDU_ACCESS_REQ/SIM_APDU_ACCESS_CNF
 *
 * removed!
 * removed!
 * 	Sync cross_core folder
 *
 * removed!
 * removed!
 * modify c2k_irat_message_struct.h according to the modification oof GMSS_CSS_SAP
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef _C2K_IRAT_MSG_STRUCT_H
#define _C2K_IRAT_MSG_STRUCT_H
#ifdef __cplusplus
extern "C" {
#endif

#include "ps_public_enum_public.h"
#include "tcm_context_public.h"
#include "mmi_sm_enums_public.h"
#include "mmi_l3_enums_public.h"
#include "l4c_common_enum_public.h"
#include "irat_common_enums_public.h"
#include "sim_public_enum_public.h"
#include "sim_ps_struct_public.h"
#include "l3_inc_enums_public.h"

/** \defgroup c2k_irat_macros C2K_IRAT Macros
 * \ingroup SigC2kIrat
 *
 * Enumeration definitions used in C2K_IRAT interface.
 *
 * @{
 */

/** max PDN number */
#define MAX_PDN_NUM                       (5)


/** 2 bytes status word SW1 and SW2 */
#define STATUS_WORD_LEN                   (2)

/** proactive command data */
#define SAT_PROACTIVE_CMD_LEN             (260)

/** Max debug trace length from MD3 */
#define MAX_MD3_DEBUG_TRACE_LEN           (256)

/** @} */ /* End of c2k_irat_macros group */


/** \defgroup c2k_irat_enumerations C2K_IRAT Enumerations
 * \ingroup SigC2kIrat
 *
 * Enumeration definitions used in C2K_IRAT interface.
 *
 * @{
 */


/** System type */
typedef enum
{
    SYS_TYPE_CDMA2000_AI,          /**< All 3GPP2 access technology */
    SYS_TYPE_3GPP_AI,              /**< All 3GPP access technology */
    SYS_TYPE_CDMA2000_1x,          /**< CDMA2000 1xRTT */
    SYS_TYPE_CDMA2000_HRPD,        /**< CDMA2000 HRPD (1xEV-DO) */
    SYS_TYPE_GERAN,                /**< GSM */
    SYS_TYPE_UTRAN,                /**< UMTS */
    SYS_TYPE_EUTRAN,               /**< LTE */

}sys_type_enum;

/** PS service type */
typedef enum
{
    IRAT_PS_NO,                     /**< PS service has not established or network released the current PS */
    IRAT_PS_1X,                     /**< PS service is on 1X */
    IRAT_PS_HRPD,                   /**< PS service is on HRPD */
    IRAT_PS_EHRPD,                  /**< PS service is on EHRPD */
    IRAT_PS_LTE,                    /**< PS service is on LTE */
}irat_ps_type_enum;

/** PS service type */
typedef enum
{
    IRAT_C2K_AI   = 0,          /**< SYSTEM type defined in MSPL: C2K_AI */
    IRAT_3GPP_AI,               /**< SYSTEM type defined in MSPL: 3GPP_AI */
    IRAT_C2K_1X,                /**< SYSTEM type defined in MSPL: C2K_1X */
    IRAT_C2K_HRPD,              /**< SYSTEM type defined in MSPL: C2K_HRPD */
    IRAT_GERAN,             /**< SYSTEM type defined in MSPL: GSM */
    IRAT_UTRAN,             /**< SYSTEM type defined in MSPL: WCDMA */
    IRAT_EUTRAN,            /**< SYSTEM type defined in MSPL: LTE */
    IRAT_NONE                   /**< SYSTEM type defined in MSPL: INVALID */
}irat_system_type_enum;


/** IRAT priority class */
typedef enum
{
    IRAT_HOME,                      /**< priority is HOME */
    IRAT_PREF,                      /**< priority is PREFER */
    IRAT_ANY                        /**< priority is ANY */
}irat_priority_class_enum;

/** CSS failure cause code */
typedef enum
{
    CSS_CAUSE_NONE,                 /**< none */
    CSS_CAUSE_NOT_CACHABLE,         /**< not cachable */
    CSS_CAUSE_WRONG_MODE,           /**< wrong mode */
    CSS_CAUSE_1X_CONNECTION,        /**< in 1xRTT connection */
    CSS_CAUSE_PWR_DOWN,             /**< in power down */
    CSS_CAUSE_NO_ASSO_CH,           /**< no associated channel */
    CSS_CAUSE_EXAULST,              /**< exhausted */
    CSS_CAUSE_SESSION_FAIL,         /**< session fail */
    CSS_CAUSE_SYS_LOST,             /**< system lost */
    CSS_CAUSE_EMERGENCY_CALL_BACK_MODE, /**< MD3 is in emergency call back mode */
    CSS_CAUSE_SIM_ERROR,            /**< SIM error */
    CSS_CAUSE_PS_ON_SIM2,           /**< PS service is on SIM2 */
    CSS_CAUSE_ABORT_BY_GMSS,        /**< Prempt by GMSS operation */
    CSS_CAUSE_TIME_OUT              /**< Time out */
}css_cause_code_enum;

/** C2K error code */
typedef enum
{
    IRAT_GENERAL_ERROR,                         /**<    IratGeneralError                       */
    IRAT_UNAUTHORIZED_APN,                      /**<    IratUnauthorizedAPN                    */
    IRAT_PDN_LIMIT_EXCEEDED,                    /**<    IratPDNLimitExceeded                   */
    IRAT_NO_PGW_AVAILABLE,                      /**<    IratNoPGWAvailable                     */
    IRAT_PGW_UNREACHABLE,                       /**<    IratPGWUnreachable                     */
    IRAT_PGW_REJECT,                            /**<    IratPGWReject                          */
    IRAT_INSUFFICIENT_PARAMETERS,               /**<    IratInsufficientParameters             */
    IRAT_RESOURCE_UNAVAILABLE,                  /**<    IratResourceUnavailable                */
    IRAT_ADMIN_PROHIBITED,                      /**<    IratAdminProhibited                    */
    IRAT_PDNID_ALREADY_INUSE,                   /**<    IratPDNIDAlreadyInUse                  */
    IRAT_SUBSCRIPTION_LIMITATION,               /**<    IratSubScriptionLimitation             */
    IRAT_PDN_CONN_ALREADY_EXIST_FOR_PDN,        /**<    IratPDNConnAlreadyExistForPDN          */
    IRAT_EMERGENCY_NOT_SUPPORTED,               /**<    IratEmergencyNotSupported              */
    IRAT_RECONNECT_NOT_ALLOWED,
                                                /**<    IratReconnectNotAllowed                */
    IRAT_EAPAKA_FAILURE = 0x80,                 /**<    IratEAPAKAfailure                      */
    IRAT_RETRY_TMR_THROTTLING,                  /**<    IratRetryTmrThrottling                 */
    IRAT_NETWORK_NO_RESPONSE,                   /**<    IratNetworkNoResponse                  */
    IRAT_PDN_ATTACH_ABORT,                      /**<    IratPDNAttachAbort                     */
    IRAT_PDN_LIMIT_EXCEEDED_IN_UE_SIDE,         /**<    IratPDNLimitExceededInUESide           */
    IRAT_PDNID_ALREADY_INUSE_IN_UE_SIDE,        /**<    IratPDNIDAlreadyInUseInUESide          */
    IRAT_INVALID_PDN_ATTACH_REQ,                /**<    IratInvalidPDNAttachReq                */
    IRAT_PDN_REC_FAILURE,                       /**<    IratPdnRecFailure                      */
    IRAT_MAIN_CONN_SETUP_FAILURE,               /**<    IratMainConnSetupFailure               */
    IRAT_BEARER_RESOURCE_UNAVAILABLE,           /**<    IratBearerResourceUnAvailable          */
    IRAT_OP_ABORT_BY_USER,                      /**<    IratOpAbortByUser                      */
    IRAT_1XDATA_CONNECTED,                      /**<    Irat1xDataConnected                    */
    IRAT_EAPAKA_REJECT,                         /**<    IratEAPAKAReject                       */
    IRAT_LCP_NEGOTIATE_FAILURE,                 /**<    IratLCPNegotiateFailure                */
    IRAT_TCH_SETUP_FAILURE,                     /**<    IratTchSetupFailure                    */
    IRAT_NW_NO_RSP_IN_LCP,                      /**<    IratNwNoRspInLCP                       */
    IRAT_NW_NO_RSP_IN_AUTH,                     /**<    IratNwNoRspInAuth                      */
    IRAT_1XRTT_IN_CALL,                         /**<    Irat1xRTTInCall                        */
    IRAT_FREQ_UNSUPPORTED,                      /**<    IratFreqUnSupported                    */
    IRAT_SECT_NOT_FOUND,                        /**<    IratSectNotFound                       */
    IRAT_SESSION_NEGO_FAIL,                     /**<    IratSessionNegoFail                    */
    IRAT_REG_FAIL,                              /**<    IratRegFail                            */

    IRAT_NO_ERROR = 0xff                        /**<    IratNoError                            */
}c2k_irat_result_enum;

/** MMSS file ID */
typedef enum
{
    FILE_MLPL,                      /**< MMSS file EFmlpl */
    FILE_MSPL,                      /**< MMSS file EFmspl */
    FILE_MMSSMODE,                  /**< MMSS file EFmmssmode */
    FILE_ALL                        /**< MMSS file EFmlpl and EFmspl */
}css_mmss_updated_file_id_enum;

/** card type */
enum
{
  IRAT_NO_CARD    = 0x00,   /**< no card */
  IRAT_UIM_CARD   = 0x01,   /**< UIM card */
  IRAT_SIM_CARD   = 0x02,   /**< SIM card */
  IRAT_UICC_CARD  = 0x04,   /**< UICC card */
  IRAT_CSIM_CARD  = 0x10,   /**< CSIM card */
  IRAT_USIM_CARD  = 0x20,   /**< USIM card */
  IRAT_ISIM_CARD  = 0x40,   /**< ISIM card */
  IRAT_UNKNOWN_CARD = 0x80  /**< unknown card */
};

/** remote sim access option
   * 0 - MD3 UIM task access local UIM(include non-RUIM configuration),maybe C2K modem will not be switched on
   * 1 - MD3  UIM task will remote access SIM card through SIM task1 in MD1;
   * 2 - MD3 UIM task will remote access SIM card through SIM task2 in MD1; */
typedef enum
{
  UIM_IRAT_ACCESS_LOCAL_CARD,   /**< MD3 access local card */
  UIM_IRAT_ACCESS_REMOTE_SIM1,  /**< MD3 access remote SIM task1 */
  UIM_IRAT_ACCESS_REMOTE_SIM2,  /**< MD3 access remote SIM task2 */
  UIM_IRAT_ACCESS_NUM,          /**< number of the access option */
  UIM_IRAT_ACCESS_INVALID = 0xff /* invalid access option, only for initialisation */
}uim_access_option_enum;

/** @} */ /* End of c2k_irat_enumerations group */


/** \defgroup c2k_irat_structures C2K_IRAT Structures
 * \ingroup SigC2kIrat
 * Structures used in C2K_IRAT interface
 * @{
 */

/** This struct defines PDN information
 */
typedef struct
{
    /** Context identifier (cid). */
    kal_uint8 context_id;

    /** AT commands defined(set) by user so far. using bitmap */
    kal_uint8 AT_definition;

    /** Context type identifier (primary/secondary). */
    pdp_context_type_enum context_type;

    /**
     * Indicates the associated cid of this context.
     *
     * - Initially, primary_context_id would be set to context_id (cid).
     * - It would be altered when receiving AT+CGDSCONT.
     *
     */
    kal_uint8 primary_context_id;

    /** Type of pdp address. */
    pdp_addr_type_enum user_defined_pdp_type;
    pdp_addr_type_enum nw_applied_pdp_type;

    /** Length of pdp address. */
    pdp_addr_len_enum user_defined_pdp_len;
    pdp_addr_len_enum nw_applied_pdp_len;

    /** The pdp address itself.
     *  the former 4 bytes are for IPv4, the latter 16 bytes are for IPv6
     */
    kal_uint8 user_defined_pdp_addr[IPV4V6_ADDR_LEN];
    kal_uint8 nw_applied_pdp_addr[IPV4V6_ADDR_LEN];

    /** User defined APN */
    kal_uint8 user_defined_apn_len;
    kal_uint8 user_defined_apn[MAX_APN_LEN];

    /** NW applied APN */
    kal_uint8 nw_applied_apn_len;
    kal_uint8 nw_applied_apn[MAX_APN_LEN];

    /** Protocol compression algorithm to be used in SNDCP. */
    snd_pcomp_algo_enum pcomp_algo;

    /** Data compression algorithm to be used in SNDCP. */
    snd_dcomp_algo_enum dcomp_algo;

    /**
     * Store MODIFYs (TFT or QOS) user set before/after activated:
     * - Cleared only if receiving: ACT_CNF, SEC_ACT_CNF, DEACT_CNF, and DEACT_IND;
     * - Otherwise, it keeps the MODIFYs info set by user.
     *
     *    TCM simply accepts it by returning OK to L4C.
     * 3. This mod_type only stores user's request. DO NOT store mod_type from SM in MODIFY-CNF/-IND here.
     * .
     */

    kal_uint32 binding_id;

    /** Used to know whether the sib is free or in use. */
    kal_uint8 is_chap;
    kal_uint8 user_name[TCM_MAX_GPRS_USER_NAME_LEN];
    kal_uint8 password[TCM_MAX_GPRS_PASSWORD_LEN];

    /** Use +CGPROC to set whether including PCO of requesting DNSv4 in PDP ACT.
     *  # Note #
     *  To avoid compatibility-issues in legacy 23G NW, this PCO would be included only if:
     *  (1) current RAT is 4G (since the PCO is added along with 4G spec.) or
     *  (2) MSQ uses R8 QOS (i.e. PLMN is on the list or Test mode is ON)
     *
     *  See tcm_fill_config_options() for the implementations.
     */
    l4c_tcm_activate_pdp_with_dnsv4_address_enum act_pdp_with_pco_req_dnsv4 ;

    /** Poying: For IPv6 smartphone, AT+CGPRCO is used to set req_IPv6_DNS flag. */
    l4c_tcm_activate_pdp_request_ipv6_dns_enum act_pdp_cntxt_req_ipv6_dns;

    tcm_request_type_enum request_type;

    tcm_p_cscf_discovery_enum p_cscf_discovery;
    tcm_im_cn_signalling_enum user_defined_im_cn_signalling_flag;
    /** 24.229, Annex B:
     *  If the flag is not received, the UE shall consider the PDP context as a general-purpose PDP context.
     */
    kal_uint8 initial_attach;

    /** Use to inform Target MD this PDN need to do deact retry (AP deact fail in source MD)*/
    kal_bool deact_retry;
}pdn_info_struct;

typedef struct
{
    /** The band class of the target sector */
    kal_uint8                          band;
    /** ARFCN of the target sector range 0~2047 */
    kal_uint16                         channel;
    /** indicate whether PS is included or not. It should be set to true when rat type is "RESELECTION"*/
    kal_bool                           pn_include;
    /** PN of the target reselected sector */
    kal_uint16                         pn;
} c2k_rat_info_struct;

typedef struct
{
    /** TBD: to be filled */
    kal_uint8 dummy;
} lte_rat_info_struct;

/** @} */ /* End of c2k_irat_structures group*/


/** \defgroup SigGmssCss GMSS_CSS Signalling Interface
 * \ingroup SigC2kIrat
 *
 * This section defines all the primitives exchanged between the GMSS and CSS modules.
 *
 * @{
 */

/** CSS MCC Search Request.
 *  This primitive is sent from GMSS to CSS to start an MCC search
 *  Message is MSG_ID_GMSS_CSS_MCC_SEARCH_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum               sys_type;
}gmss_css_mcc_search_req_struct;

/** CSS MCC Search Confirm.
 *  This primitive is sent from CSS to GMSS to confirm an MCC search
 *  Message is MSG_ID_GMSS_CSS_MCC_SEARCH_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** result of MCC search */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc1;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc2;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc3;
}gmss_css_mcc_search_cnf_struct;

/** CSS System Acquire Request.
 *  This primitive is sent from GMSS to CSS to start a system accquire
 *  Message is MSG_ID_GMSS_CSS_SYS_ACQUIRE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum           sys_type;
    /** priority class required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_sys_acquire_req_struct;

/** CSS System Accquire Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a system accquire
 *  Message is MSG_ID_GMSS_CSS_SYS_ACQUIRE_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** result of system acquire */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
    /** PS system type */
    irat_system_type_enum           sys_type;
    /** priority class required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_sys_acquire_cnf_struct;

/** CSS CS Register Request.
 *  This primitive is sent from GMSS to CSS to start a CS Register
 *  Message is MSG_ID_GMSS_CSS_CS_REG_REQ.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
 *  typedef struct
 *  {
 *    LOCAL_PARA_HDR
 *
 *  }gmss_css_cs_reg_req_struct;
*/

/** CSS CS Register Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a CS Register
 *  Message is MSG_ID_GMSS_CSS_CS_REG_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** result of system acquire */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
}gmss_css_cs_reg_cnf_struct;


/** CSS PS Register Request.
 *  This primitive is sent from GMSS to CSS to start a PS Register
 *  Message is MSG_ID_GMSS_CSS_PS_REG_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum           sys_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_ps_reg_req_struct;

/** CSS PS Register Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a PS Register
 *  Message is MSG_ID_GMSS_CSS_PS_REG_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** result of system acquire */
    kal_bool                        result;
    /** cause of failure */
    css_cause_code_enum             css_cause;
    /** PS system type */
    irat_ps_type_enum               ps_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_ps_reg_cnf_struct;

/** CSS Deactivate Request.
 *  This primitive is sent from GMSS to CSS to make C2K modem enter deep sleep
 *  Message is MSG_ID_GMSS_CSS_DEACTIVATE_REQ.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
 *  typedef struct
 *  {
 *    LOCAL_PARA_HDR
 *
 *  }gmss_css_deactivate_req_struct;
*/

/** CSS Deactivate Confirm.
 *  This primitive is sent from CSS to GMSS to confirm a deactivate
 *  Message is MSG_ID_GMSS_CSS_DEACTIVATE_CNF.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
 *  typedef struct
 *  {
 *    LOCAL_PARA_HDR
 *
 *  }gmss_css_deactivate_cnf_struct;
*/

/** CSS RAT Change Request.
 *  This primitive is sent from GMSS to CSS to start a RAT change
 *  Message is MSG_ID_GMSS_CSS_RAT_CHANGE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** RAT change type */
    irat_type_enum      irat_type;
}gmss_css_rat_change_req_struct;

/** CSS 1x voice call status Indication.
 *  This primitive is sent from CSS to GMSS to indicate C2K 1X enter or exit a voice call
 *  Message is GMSS_CSS_1X_CONN_STATUS_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** C2K 1x voice call enter or exit */
    kal_bool            conn_start;
}gmss_css_1x_conn_status_ind_struct;


/** CSS System Lost Indication.
 *  This primitive is sent from CSS to GMSS to indication a C2K system lost indication
 *  Message is MSG_ID_GMSS_CSS_SYS_LOST_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum               sys_type;
}gmss_css_sys_lost_ind_struct;

/** CSS System Recovery Indication.
 *  This primitive is sent from CSS to GMSS to indication a C2K system has recovered
 *  Message is MSG_ID_GMSS_CSS_SYS_RECOVERY_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_system_type_enum               sys_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum            prio_class;
}gmss_css_sys_recovery_ind_struct;

/** CSS Ready Indication.
 *  This primitive is sent from CSS to GMSS that after reading PRL, CSS is ready and GMSS can start running the algo now
 *  Message is MSG_ID_GMSS_CSS_SYS_READY_IND.
 *  this message carries no buffer data, comment out for MD3 compile, MD1 need define it locally
 *  typedef struct
 *  {
 *    LOCAL_PARA_HDR
 *
 *  }gmss_css_ready_ind_struct;
*/

/** CSS MMSS File Update Indication.
 *  This primitive is sent from CSS to GMSS to notify MMSS file has been updated
 *  Message is MSG_ID_GMSS_CSS_MMSS_FILE_UPDATE_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** file ID updated by OTA */
    css_mmss_updated_file_id_enum   file_id;
}gmss_css_mmss_file_update_ind_struct;

/** CSS PS Change Indication.
 *  This primitive is sent from CSS to GMSS to notify PS system has been changed
 *  Message is MSG_ID_GMSS_CSS_PS_CHANGE_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** PS system type */
    irat_ps_type_enum               ps_type;
    /** priority class to register required by GMSS */
    irat_priority_class_enum        prio_class;
}gmss_css_ps_change_ind_struct;

/** CSS PS service entered or exit connected state.
 *  This primitive is sent from CSS to GMSS to indicate C2K PS enter or exit connected state
 *  Message is MSG_ID_GMSS_CSS_PS_CONN_STATUS_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    /** PS system type */
    irat_ps_type_enum               ps_type;
    /** C2K ps service enter or exit */
    kal_bool                        conn_start;
}gmss_css_ps_conn_status_ind_struct;

/** CSS MCC Change Indication.
 *  This primitive is sent from CSS to GMSS to notify MCC has been changed
 *  Message is MSG_ID_GMSS_CSS_MCC_CHANGE_IND.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc1;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc2;
    /** MCC value, avaiable only when result is KAL_TRUE */
    kal_uint8                       mcc3;
}gmss_css_mcc_change_ind_struct;

/** Active SIM ifno request.
 *  This primitive is sent from GMSS to CSS to notify the current active SIM for PS service
 *  Message is MSG_ID_GMSS_CSS_ACTIVE_SIM_INFO_REQ
 */
typedef struct 
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** Active SIM for PS service */
    act_sim_enum  active_sim;
} gmss_css_active_sim_info_req_struct;

/** CSS not ready indication.
 *  This primitive is sent from CSS to GMSS to notify CSS is not ready with provided cause
 *  Message is MSG_ID_GMSS_CSS_NOT_READY_IND
 */
typedef struct 
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** Cause of CSS not ready */
    css_cause_code_enum css_cause;
} gmss_css_not_ready_ind_struct;



/** @} */ /* End of SigGmssCss group*/

/** \defgroup SigL4cCpsdm L4C_VAL Signalling Interface
 * \ingroup SigC2kIrat
 *
 * This section defines all the primitives exchanged between the L4C and VAL(CPSDM) modules.
 *
 * @{
 */

/** LTE to C2K RAT Change Request.
 *  This primitive is sent from L4C to VAL to start an RAT change.
 *  Message is MSG_ID_LTE_C2K_RAT_CHANGE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8                       tid;                     /**< transaction ID */
    irat_type_enum                  irat_type;               /**< RAT change type */
    kal_uint8                       pdn_num;                 /**< PDN No. */
    pdn_info_struct                 pdn[MAX_PDN_NUM];        /**< PDN information */
    c2k_rat_info_struct             rat_info;                /**< C2K RAT information */
}lte_c2k_rat_change_req_struct;

/** LTE to C2K RAT Change Confirm.
 *  This primitive is sent from VAL to L4C to confirm an RAT change.
 *  Message is MSG_ID_LTE_C2K_RAT_CHANGE_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** transaction ID */
    kal_uint8                       tid;
    /** KAL_TRUE: success; KAL_FALSE: failure */
    kal_bool                        is_irat_success;
    /** in case of IRAT failure, indicate if original RAT should perform PDN resync operation
     *  KAL_TRUE:  yes
     *  KAL_FALSE: no, set as default value
     *  avaiable only when status is 1
     */
    kal_bool                        resync;
    /** C2K error code */
    c2k_irat_result_enum            err_code;
    /** eHRPD fallback enum */
    irat_ps_type_enum               fallback_target_rat;
    /**< RAT change type */
    irat_type_enum                  irat_type;
}lte_c2k_rat_change_cnf_struct;

/** C2K to LTE RAT Change Request.
 *  This primitive is sent from VAL to L4C to confirm an RAT change.
 *  Message is MSG_ID_C2K_LTE_RAT_CHANGE_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    kal_uint8                       tid;                     /**< transaction ID */
    irat_type_enum                  irat_type;               /**< RAT change type */
    irat_ps_type_enum               src_rat;                 /**< Source RAT type */
    kal_uint8                       pdn_num;                 /**< PDN No. */
    pdn_info_struct                 pdn[MAX_PDN_NUM];        /**< PDN information */
    lte_rat_info_struct             rat_info;                /**< LTE RAT information */
}c2k_lte_rat_change_req_struct;

/** C2K to LTE RAT Change Confirm.
 *  This primitive is sent from L4C to VAL to confirm an RAT change.
 *  Message is MSG_ID_C2K_LTE_RAT_CHANGE_CNF.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR

    /** transaction ID */
    kal_uint8                       tid;
    /** KAL_TRUE: success; KAL_FALSE: failure */
    kal_bool                        is_irat_success;
    /** in case of IRAT failure, indicate if original RAT should perform PDN resync operation
     *  KAL_TRUE:  yes
     *  KAL_FALSE: no, set as default value
     *  avaiable only when status is 1
     */
    kal_bool                        resync;
    /** LTE error code */
    kal_uint8                       err_code;
}c2k_lte_rat_change_cnf_struct;

/** @} */ /* End of SigL4cCpsdm group*/

/** \defgroup SigRacCpsdm RAC_VAL Signalling Interface
 * \ingroup SigC2kIrat
 *
 * This section defines all the primitives exchanged between the RAC and VAL(CPSDM) modules.
 *
 * @{
 */

/** VAL to RAC RAT Change Start Request.
 *  This primitive is sent from VAL to RAC to notify an RAT change has been started
 *  Message is MSG_ID_VAL_RAC_RAT_CHANGE_START_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    irat_type_enum                  irat_type;               /**< RAT change type */
}val_rac_rat_change_start_req_struct;

/** VAL to RAC RAT Change Finish Request.
 *  This primitive is sent from VAL to RAC to notify an RAT change has been finished
 *  Message is MSG_ID_VAL_RAC_RAT_CHANGE_FINISH_REQ.
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    irat_type_enum                  irat_type;               /**< RAT change type */
    kal_bool                        result;                  /**< RAT change result. TRUE: success; FALSE: failure */
}val_rac_rat_change_finish_req_struct;

/** @} */ /* End of SigRacCpsdm group*/

/** MD3 debug trace indication
 *  This primitive is sent from MD3 to MD1 for debugging trace
 *  Message is MSG_ID_MD3_DEBUG_TRACE_IND
 */
typedef struct
{
    /** ILM specific header. */
    LOCAL_PARA_HDR
    kal_uint8                       debug_trace[MAX_MD3_DEBUG_TRACE_LEN];               /**< Debug trace */
} md3_debug_trace_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   earfcn_num;                                  /**< Number of EARFCN to be passed to EAS */
    kal_uint16  earfcn[MAX_NUM_OF_EARFCN];                   /**< EARFCN list to be passed to EAS */
} clc_eas_earfcn_list_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool            result;
    css_cause_code_enum cause;
} eas_css_sys_sniffer_cnf_struct;

/** C2K to LTE RAT Txpwr report.
 *  This primitive is sent from CL1 to LTE to apply tx power backoff.
 *  Message is MSG_ID_C2K_EL1_TXPWR_BACKOFF_INFO_IND.
 */
typedef struct
{
	LOCAL_PARA_HDR
    kal_bool        enable;  /* valid falg */
    kal_uint8       band;    /* current band */
    kal_uint16      channel; /* current channel */
    kal_int16       rssi;    /* rx power */
    kal_int16       tx_pwr;  /* tx power */
} c2k_el1_txpwr_backoff_info_ind_struct;
typedef struct
{
  LOCAL_PARA_HDR
  kal_bool tx_status;
}rrm_val_gsm_rf_status_req_struct;
typedef struct
{
  LOCAL_PARA_HDR
  kal_bool tx_status;
}urr_val_uas_rf_status_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_bool tx_status;
}errc_val_eas_tx_status_req_struct;

#ifdef __cplusplus
}
#endif

#endif /* _C2K_IRAT_MSG_STRUCT_H */

