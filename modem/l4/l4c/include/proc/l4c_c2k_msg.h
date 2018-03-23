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
 * l4c_c2k_msg.h
 *
 * Project:
 * --------
 *   DENALI
 *
 * Description:
 * ------------
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 *****************************************************************************/

#ifndef _L4C_C2K_MSG_H
#define _L4C_C2K_MSG_H

#ifdef __CDMA2000_RAT__

#include "l4c_context.h"
#include "kal_public_api.h"
#include "mmi_sm_enums.h"
#include "mmi_l3_enums.h"
#include "ps_public_enum.h"
#include "ppp_l4_enums.h"
#include "l4c_common_enum.h"
#include "tcm_context.h"
#include "c2k_irat_msg_struct.h"
#include "irat_common_enums.h"
#include "l4c_eval_struct.h"


typedef struct{
    LOCAL_PARA_HDR
    l4c_c2k_irat_context_struct l4c_c2k_context;
}l4c_c2k_ut_check_context_ind_struct;

extern kal_bool l4c_ei3gppirat_hdlr();

void l4c_ei3gppirat_report_rind(ei3gppirat_action_enum action, irat_ps_type_enum src_rat, irat_ps_type_enum target_rat);

extern void l4c_egcontrdp_report_rind(kal_uint8 context_id);

extern void l4c_c2k_lte_rat_change_req_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_lte_c2k_rat_change_cnf_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4crac_attach_result_ind_hdlr(local_para_struct *local_para_ptr, peer_buff_struct *peer_buff_ptr);

extern void l4c_c2k_send_rat_change_cnf_to_c2k(irat_result_enum err_code, kal_bool resync, kal_bool is_irat_success);

extern void l4c_c2k_config_pdn_establishing_status(kal_uint8 cid, l4c_c2k_func_action_enum action);

extern void l4c_c2k_pdn_establish_result_hdlr(kal_uint8 cid, kal_bool is_success);

extern void l4c_c2k_config_irat_state(l4c_c2k_irat_state_enum new_state);

extern void l4c_c2k_config_c2k_to_lte_src_rat(irat_ps_type_enum new_rat);

extern kal_bool l4c_c2k_omadm_check(kal_uint8 cid);

extern void l4c_c2k_config_waiting_ei3gppirat(kal_bool is_waiting);

extern void l4c_send_msg_to_val(msg_type msg_name, void *param_ptr);

extern void l4c_c2k_record_stage_1_temp_info(l4c_eval_rat_change_ind_struct *rat_change_ind_msg);

extern void l4c_c2k_config_deact_retry(kal_bool deact_retry, kal_uint8 context_num);
extern void l4c_c2k_clear_all_deact_retry();

extern void l4c_c2k_clear_c2l_irat_related_context();

#if defined __L4C_GPRS_UT__
extern void l4c_c2k_test_func();
extern void l4c_ut_set_pdn_info(kal_uint8 case_num);
extern void l4c_c2k_print_context();
#endif

#endif

#endif /* #ifndef _L4C_C2K_MSG_H */

