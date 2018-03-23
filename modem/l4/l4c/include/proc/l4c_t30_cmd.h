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
 * l4c_t30_cmd.h
 *
 * Project:
 * --------
 *   MT6208
 *
 * Description:
 * ------------
 *   This file is intends for �K.
 *
 * Author:
 * -------
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
 *
 *==============================================================================*/
#ifndef _L4C_T30_CMD_H
#define _L4C_T30_CMD_H

//#include "kal_non_specific_general_types.h"
#include "l4c2t30_struct.h"
#include "kal_general_types.h"

extern kal_bool l4c_t30_fdt_tx_msg_req(
                    kal_uint8 src_id,
                    kal_uint8 cmd_mode,
                    kal_uint8 serv_class,
                    kal_uint8 df,
                    kal_uint8 vr,
                    kal_uint8 wd,
                    kal_uint8 ln);

extern kal_bool l4c_t30_fdr_rx_msg_req(kal_uint8 src_id);

extern kal_bool l4c_t30_ftm_tx_msg_req(kal_uint8 src_id, kal_uint8 mod);

extern kal_bool l4c_t30_frm_rx_msg_req(kal_uint8 src_id, kal_uint8 mod);

extern kal_bool l4c_t30_fth_tx_bcs_req(kal_uint8 src_id, kal_uint8 mod);

extern kal_bool l4c_t30_frh_rx_bcs_req(kal_uint8 src_id, kal_uint8 mod);

extern kal_bool l4c_t30_fts_tx_silence_req(kal_uint8 src_id, kal_uint8 time);

extern kal_bool l4c_t30_frs_rx_silence_req(kal_uint8 src_id, kal_uint8 time);

extern kal_bool l4c_t30_fet_tx_ppm_req(kal_uint8 src_id, kal_uint8 ppr);

extern kal_bool l4c_t30_rw_param_req(
                    kal_uint8 src_id,
                    kal_uint8 cmd_code,
                    kal_uint8 cmd_mode,
                    kal_uint8 serv_class,
                    t30_rw_param_struct *t30_rw_param);

extern kal_bool l4c_t30_rw_str_param_req(
                    kal_uint8 src_id,
                    kal_uint8 cmd_code,
                    kal_uint8 cmd_mode,
                    kal_uint8 serv_class,
                    t30_str_param_struct *t30_str_param);

#endif /* _L4C_T30_CMD_H */

