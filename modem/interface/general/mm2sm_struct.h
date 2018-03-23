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
 *  mm2sm_struct.h
 *
 * Project:
 * --------
 *  MAUI
 *
 * Description:
 * ------------
 *  This file describes the common structure of MM and SM. 
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
 *==============================================================================
 *******************************************************************************/

/********************************************************************************
*  Copyright Statement:
*  --------------------
*
*  This product has been developed using a protocol stack
*  developed by Sasken Communication Technologies Limited.
*
********************************************************************************/

#ifndef _MM2SM_STRUCT_H
#define _MM2SM_STRUCT_H

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l3_inc_enums.h"
#include "mmcm_enums.h"
#include "smmm_enums.h"
#include "as2nas_struct.h"
#include "irat_common_struct.h"

typedef struct {
    LOCAL_PARA_HDR
    gmmsm_cause_enum cause;
} gmmsm_suspend_req_struct;

typedef struct {
    LOCAL_PARA_HDR
} gmmsm_resume_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    //kal_uint8 cell_support_egprs;
    rr_mm_sgsnr_flag_enum  sgsnr_flag; /* Erica: 20070320 sgsnr */
} gmmsm_cell_info_update_ind_struct; /* Johnny: for egprs */

typedef struct {
    LOCAL_PARA_HDR
    rr_mm_sgsnr_flag_enum  sgsnr_flag;
    gmmsm_fop_status_enum  follow_on_status;
} gmmsm_attach_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    gmmsm_cause_enum cause;
} gmmsm_attach_rej_struct;

typedef struct {
    LOCAL_PARA_HDR
    gmmsm_cause_enum cause;
} gmmsm_detach_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    gmmcm_result_enum cause;    /* gmmcm_result_enum */
} gmmsm_est_rej_struct; 

typedef struct {
    LOCAL_PARA_HDR
    DC_Status status;
    peer_msg_id_struct peer_msg_id;
} gmmsm_unitdata_cnf_struct;

#ifdef __REL4__
typedef struct {
    LOCAL_PARA_HDR
    kal_uint16 nsapi_status;
} gmmsm_nsapi_status_ind_struct;
#endif

/** 
  * According to Multimode interRAT message processing rules, 
  * the receiving module, said... the MOD_A, need to process this message in the following way  
  * - (1) Relay this interRAT message to next module, said... the MOD_B, first
  * - (2) then MOD_A can start to do processing of this message
  * because when a RD designs a new MM iRAT feature, he/she will assume others process these messages in this way
  * this rules make sures the interRAT message flow is as expected
  */
typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum	irat_type;  //Indicates the inter-RAT type
    rat_type_enum	source_rat; //Source RAT (GAS or UAS)
    rat_type_enum	target_rat; //Target RAT (Should be EAS)

    mm2emm_irat_info_struct mm_info;
    void*	as_info_ptr;    //Indicates the address of the activation request for RAT change to LTE, the information is dedicated for AS.
                            //The buffer will be freed by soure or target AS
                            //Note: It should be NULL if irat_type is IR_TYPE_SEARCH
} gmmsm_rat_change_ind_struct;// (23G4 start) 

/** 
  * According to Multimode interRAT message processing rules, 
  * the receiving module, said... the MOD_A, need to process this message in the following way  
  * - (1) Relay this interRAT message to next module, said... the MOD_B, first
  * - (2) then MOD_A can start to do processing of this message
  * because when a RD designs a new MM iRAT feature, he/she will assume others process these messages in this way
  * this rules make sures the interRAT message flow is as expected
  */
typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum irat_type;
    rat_type_enum source_rat;
    rat_type_enum target_rat;
    irat_result_enum irat_result;

    kal_bool is_ps_sig_connected;   //GMM inform SM about the PS Signalling Conn status
    kal_bool is_attached; // 2012/12/4 mail confirmed. GMM tells SM if GMM is currently attached or detached (GMM owner confirmed that attaching is not possible, only attached or detached is possible)

    void*	 as_info_ptr;    //The pointer of AS container information
    // check L4_NAS_RAT_CHANGE_SAP.docx for detail
} gmmsm_rat_change_cnf_struct; // (4G23 finish) note: need two stage CNF if IRCCO

#ifdef __SGLTE__ 
typedef struct {
    LOCAL_PARA_HDR
    rat_enum source_rat;
    rat_enum target_rat;
    emm_mm_context_info_struct mm_context;
}gmmsm_ps_switch_context_transfer_ind_struct;
#endif /*__SGLTE__*/


#endif 


