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
 * Filename:
 * ---------
 *   ltecsr_struct.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *	define the message struct parameters
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *     HISTORY
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
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 *
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
 * removed!
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _LTECSR_STRUCT_H
#define _LTECSR_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"


#include "codec_def.h"
#include "ims_interface_md.h"

/* value define for common_para2 */
typedef enum e_ltecsr_feature_option {
	LTECSR_FEATURE_NONE                     = (0),
	LTECSR_FEATURE_DTMF_MUTE                = (1<<0),
	LTECSR_FEATURE_HOLDCALL_DL_CHECK        = (1<<1),
} ltecsr_feature_option_e;

typedef enum e_func_class {
	FC_RTP          = (1<<0),
	FC_XMIT         = (1<<1),
	FC_VOICE        = (1<<2),
	FC_VIDEO        = (1<<3),
	FC_DTMF         = (1<<4),
	FC_CODEC        = (1<<5),
	FC_HANDOVER	= (1<<6),
} func_class_e;

typedef enum e_xmit_mode {
	XMIT_MODE_NONE=0,
	XMIT_MODE_INACTIVE,
	XMIT_MODE_SENDONLY,
	XMIT_MODE_RECVONLY,
	XMIT_MODE_SENDRECV,
	XMIT_MODE_ACTIVE,
} xmit_mode_e;

typedef enum e_ecfg{
    LTECSR_ECFG_NONE                        = 0,
    LTECSR_ECFG_DTX_ENABLE                  = 1,
    LTECSR_ECFG_SILENCE_DROPCALL_THRESHOLD  = 2,
    LTECSR_ECFG_JBM_LOAD_PARAMS_ENABLE      = 3,
    LTECSR_ECFG_JBM_PREBUF_LEN              = 4,
    LTECSR_ECFG_JBM_JITTER_MAX_DEPTH        = 5,
    LTECSR_ECFG_JBM_JITTER_FULL_OFFSET      = 6,
    LTECSR_ECFG_LTECSR_COMMON_PARA0         = 7,
    LTECSR_ECFG_LTECSR_COMMON_PARA1         = 8,
    LTECSR_ECFG_LTECSR_COMMON_PARA2         = 9,
    LTECSR_ECFG_LTECSR_COMMON_PARA3         = 10,
    LTECSR_ECFG_LTECSR_COMMON_PARA4         = 11
} ecfg_e;


enum VoLTE_Event_RTP_DIRECTION_e {
    VoLTE_Event_RTP_DIRECTION_INACTIVE = 0,     ///< RTP session suspends. Inactive also is default value.
    VoLTE_Event_RTP_DIRECTION_SENDONLY,         ///< Send only
    VoLTE_Event_RTP_DIRECTION_RECVONLY,         ///< Receive only
    VoLTE_Event_RTP_DIRECTION_SENDRECV,         ///< Send and Receive
    /*add here*/    
    VoLTE_Event_RTP_DIRECTION_Max,
};

enum VoLTE_Event_IP_Version_e {
    VoLTE_Event_IPv4 = 0, 
    VoLTE_Event_IPv6,
    /*add here*/    
    VoLTE_Event_IPv_Max,
};

typedef enum e_dtmf_mode {
	DTMF_IN_BAND=0,
	DTMF_OUT_BAND=1,
	DTMF_INOUT_BAND=2,
} dtmf_mode_e;

typedef enum e_dtmf_duration {
	DTMF_PLAY_INFINITE=-1,
	DTMF_STOP=0,
	DTMF_PLAY_ONESHOT=40, 
	/* others value: for unit(ms) */
} dtmf_duration_e;

typedef struct s_xxx2ltecsr_dtmf_param {
	kal_int32 cid;
//	kal_int32 sid;
	kal_uint8 digit;
//	kal_int8 mode;
	kal_int8 duration;
} xxx2ltecsr_dtmf_param_t;

typedef enum e_dtmf_event_state {
	DTMF_KEY_RELEASE =0,
	DTMF_KEY_PUSH_STR=1,
	DTMF_KEY_PUSH_ING=2,
	DTMF_KEY_PUSH_RE1=3,
	DTMF_KEY_PUSH_RE2=4,
	DTMF_KEY_PUSH_RE3=5,
} dtmf_event_state_e;

/**
 * IMC External
 */
typedef struct s_ltecsr_dtmf_req {
	LOCAL_PARA_HDR
	xxx2ltecsr_dtmf_param_t param;
} ltecsr_dtmf_req_struct;

typedef struct s_ltecsr_media_incoming_dlpkt_struct {
	LOCAL_PARA_HDR
	kal_int32 cid;
} ltecsr_media_incoming_dlpkt_struct;

/* WFC */
typedef struct s_ltecsr_ims_init_req {
	LOCAL_PARA_HDR
    kal_int32 seq_no;
    kal_bool  wfc_support;
} ltecsr_ims_init_req_struct;

typedef struct s_ltecsr_ims_init_cnf {
	LOCAL_PARA_HDR
    kal_int32 seq_no;
} ltecsr_ims_init_cnf_struct;

/* from LTECSR to ERRC */
typedef enum e_ltecsr_errc_volte_status {
	LTECSR_ERRC_VOLTE_CALL_START        = 0,
	LTECSR_ERRC_VOLTE_CALL_END          = 1,
} ltecsr_errc_volte_status_e;

typedef struct s_ltecsr_errc_volte_status_ntf_struct {
	LOCAL_PARA_HDR
	ltecsr_errc_volte_status_e volte_status;
} ltecsr_errc_volte_status_ntf_struct;


/**
 * L1SP External
 */
typedef struct s_ltecsr_voice_ul_data_notify {
	LOCAL_PARA_HDR
} ltecsr_voice_ul_data_notify_struct;

/**
 * LTECSR Internal
 */
typedef struct s_ltecsr_media_init {
	LOCAL_PARA_HDR
	xxx2ltecsr_param_t param;
} ltecsr_media_init_struct;

typedef struct s_ltecsr_media_start {
	LOCAL_PARA_HDR
	kal_int32 cid;
	kal_int32 sid;
} ltecsr_media_start_struct;

typedef struct s_ltecsr_media_stop {
	LOCAL_PARA_HDR
	kal_int32 cid;
	kal_int32 sid;
} ltecsr_media_stop_struct;

typedef struct s_ltecsr_media_xmit_mode_set {
	LOCAL_PARA_HDR
	kal_int32 cid;
	kal_int32 sid;
	kal_int8 xmit_mode; /* xmit_mode_e */
} ltecsr_media_xmit_mode_set_struct;

typedef struct s_ltecsr_dtmf_play {
	LOCAL_PARA_HDR
	xxx2ltecsr_dtmf_param_t param;
} ltecsr_dtmf_play_struct;

typedef struct s_ltecsr_dtmf_stop {
	LOCAL_PARA_HDR
	kal_int32 cid;
} ltecsr_dtmf_stop_struct;

typedef struct s_ltecsr_media_pt_set {
	LOCAL_PARA_HDR
	kal_int32 cid;
	kal_int32 codec;
	kal_int32 pt;
} ltecsr_media_pt_set_struct;

typedef struct s_ltecsr_rtcp_send_interval_set {
	LOCAL_PARA_HDR
	kal_int32 cid;
	kal_int32 sid;
	kal_int32 rtcp_send_interval;
} ltecsr_rtcp_send_interval_set_struct;

typedef struct s_ltecsr_ecfg_req {
		LOCAL_PARA_HDR
    kal_bool    op_code;    // 0:get, 1:set
    ecfg_e      config_type;
    kal_uint32  value;      // only set op_code will use it (for LTECSR)
} ltecsr_ecfg_req_struct;

typedef struct s_ltecsr_ecfg_cnf {
		LOCAL_PARA_HDR
    kal_bool    result;     // KAL_TRUE or KAL_FALSE
    kal_bool    op_code;    // 0:get, 1:set
    ecfg_e      config_type;
    kal_uint32  value;      // only get op_code will use it (for IMC)
} ltecsr_ecfg_cnf_struct;

typedef struct s_ltecsr_epdg_ho_ind {
		LOCAL_PARA_HDR
    kal_int32  stage;      // stage: 0->Handover Start, 1->Handover End
    kal_int32  rat;        // rat: 0->LTE, 1->WiFi
    kal_int32  network_id; // network_id
    kal_int32  pdn_id;     // if (stage==1 && rat==0), pdn_id must be non-zero 
} ltecsr_epdg_ho_ind_struct;

#endif

