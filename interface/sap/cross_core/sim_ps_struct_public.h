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
 *   sim_ps_struct_public.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Structure provided by SIM task and inside-PS task uses only
 *
 * Author:
 * -------
 * -------
 *
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
 *
 * removed!
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef SIM_PS_STRUCT_PUBLIC_H
#define SIM_PS_STRUCT_PUBLIC_H

#include "sim_public_enum_public.h"

/* MSG_ID_UIM_SIM_ERROR_IND */
typedef struct {
    LOCAL_PARA_HDR
    sim_error_cause_enum cause;
} uim_sim_error_ind_struct;

/* MSG_ID_UIM_SIM_APDU_ACCESS_REQ */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 channel_id;
    kal_uint16 req_len;
    kal_uint8 req[APDU_REQ_MAX_LEN];
    kal_uint8  cmd_type;    //0: CGLA, 1: CSIM
} uim_sim_apdu_access_req_struct;

/* MSG_ID_UIM_SIM_APDU_ACCESS_CNF */
typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint16 result;
    kal_uint16 rsp_len;
    kal_uint8 rsp[APDU_RSP_MAX_LEN];
    kal_uint8  cmd_type;    //0: CGLA, 1: CSIM
} uim_sim_apdu_access_cnf_struct;

/* MSG_ID_UIM_SIM_AUTHENTICATE_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8   rand[16];
    kal_bool    is_auth_present;
    kal_uint8   auth[16];
    kal_uint8   src_id; 
    uicc_auth_mode_enum mode;
    kal_uint8   channel_id;
    kal_uint8   command_len;
    kal_uint8   command_data[256];
} uim_sim_authenticate_req_struct;

/* MSG_ID_UIM_SIM_AUTHENTICATE_CNF*/
typedef struct {
    LOCAL_PARA_HDR
    sim_cmd_result_enum result;
    kal_uint16 status_word;
    kal_uint8   kc[8];
    kal_uint8   sres[4];
    kal_uint8   ck[16];
    kal_uint8   ik[16];
    kal_uint8   res[16];
    kal_uint8   res_len;
    kal_uint8   auts[16];
    kal_uint8   auts_len;
    kal_uint8   auth_res[256];
    kal_uint16  auth_res_len;  
    kal_uint8   src_id;  
} uim_sim_authenticate_cnf_struct;

/* MSG_ID_UIM_SIM_STATUS_IND */
typedef struct{
    LOCAL_PARA_HDR
    kal_uint16 card_type;
    usim_logic_channel_enum USIMchan;
    usim_logic_channel_enum ISIMchan;
    kal_uint8 atr_length;
    kal_uint8 atr[40];
	kal_uint8 remote_sim_protocol_task;
	kal_uint8 modem_status;
}uim_sim_status_ind_struct;

/* MSG_ID_UIM_SAT_PROACTIVE_CMD_IND */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 proactive_cmd_len;
    kal_uint8 proactive_cmd[260];
} uim_sat_proactive_cmd_ind_struct;

/* MSG_ID_UIM_SAT_TERMINAL_RSP_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint16 length;
    kal_uint8 terminal_rsp[261];
} uim_sat_terminal_rsp_req_struct;

/* MSG_ID_UIM_SAT_TERMINAL_RSP_CNF */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint16 status_word;
} uim_sat_terminal_rsp_cnf_struct;

/* MSG_ID_UIM_SAT_ENVELOPE_REQ */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint16 length;
    kal_uint8 envelope[261];
} uim_sat_envelope_req_struct;

/* MSG_ID_UIM_SAT_ENVELOPE_CNF */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint16 status_word;
    sim_cmd_result_enum result;
    kal_uint16 length;
    kal_uint8 envelope_rsp[256];
} uim_sat_envelope_cnf_struct;

/* MSG_ID_UIM_SAT_FILE_CHANGE_RES */
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 is_successful;
} uim_sat_file_change_res_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 access_id;
    kal_uint8 path[6];
    kal_uint8 src_id; 
    kal_uint8 channel_id;
} uim_sim_read_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 file_idx;
    kal_uint16 para;
    kal_uint16 length;
    kal_uint8 data[258]; // 256 + 2 for driver usage in T=1
    kal_uint16 result;
    kal_uint16 status_word;
    kal_uint8 access_id;
    kal_uint8 src_id; 
} uim_sim_read_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 transport_protocol_type;
    kal_uint8 src_id;    
} bt_uim_sim_reset_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 result;
    kal_uint8 current_transport_protocol_type;
    kal_uint16 atr_len;
    kal_uint8 atr[40];
    kal_uint8 src_id;    
} bt_uim_sim_reset_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint8 src_id;
} bt_uim_sim_power_off_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    kal_uint16 result;
    kal_uint8 src_id;    
} bt_uim_sim_power_off_cnf_struct;

typedef bt_uim_sim_reset_req_struct bt_uim_sim_power_on_req_struct;
typedef bt_uim_sim_reset_cnf_struct bt_uim_sim_power_on_cnf_struct;

#endif

