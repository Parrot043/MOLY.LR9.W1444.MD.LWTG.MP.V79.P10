/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 *   sms_eval_enums.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   common enum definition between SMS and EVAL module
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * 	Merging
 * 	
 * 	//MOLY_CBr/allen.keh/MOLY_MP7.W16.05.p1/mcu/...
 * 	
 * 	to //MOLY/BRANCHES_LR9/LR9.W1444.MD.LWTG.MP/mcu/...
 *
 * 01 27 2016 ya.li
 * .
 * removed!
 * <saved by Perforce>
 *
 * 01 27 2016 ya.li
 * .
 * 01 29 2016 ya.li
 * removed!
 * 	
 * 	<saved by Perforce>
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * [EVAL] Add EVAL related interfaces and common strust
 ****************************************************************************/


#ifndef  _SMS_EVAL_ENUMS_INC
#define  _SMS_EVAL_ENUMS_INC

/***** common enum definition *****/
typedef enum
{
    SMS_EVAL_REG_STATUS_EPS_ONLY_ATTACHED = 0,
    SMS_EVAL_REG_STATUS_EPS_AND_NON_EPS_ATTACHED,
    SMS_EVAL_REG_STATUS_EPS_DETACHED,
    SMS_EVAL_REG_STATUS_NON_EPS_DETACHED,
    SMS_EVAL_REG_STATUS_EPS_AND_NON_EPS_DETACHED

} sms_eval_reg_status_enum;


typedef enum
{
    SMS_EVAL_EST_REJ_CAUSE_INVALID = 0,
    SMS_EVAL_EST_REJ_CAUSE_EPS_DETACH,
    SMS_EVAL_EST_REJ_CAUSE_REATTACH_REQ,
    SMS_EVAL_EST_REJ_CAUSE_T3417_EXPIRY,
    SMS_EVAL_EST_REJ_CAUSE_OTHER,
    SMS_EVAL_EST_REJ_CAUSE_LOWER_LAYER_FAILURE,
    SMS_EVAL_EST_REJ_CAUSE_INCOMPATIBLE_STATUS,
    SMS_EVAL_EST_REJ_CAUSE_INTER_RAT_COLLISION,
    SMS_EVAL_EST_REJ_CAUSE_CONGESTION

} sms_eval_est_rej_cause_enum;

typedef enum
{
    SMS_EVAL_REL_IND_CAUSE_REL_LB_TAU = 0,
    SMS_EVAL_REL_IND_CAUSE_REL_OTHER,
    SMS_EVAL_REL_IND_CAUSE_REEST_FAIL,
    SMS_EVAL_REL_IND_CAUSE_LOCAL_REL

} sms_eval_rel_ind_cause_enum;

typedef enum
{
    SMS_EVAL_UNITDATA_CNF_RESULT_DATA_SUCC = 0,
    SMS_EVAL_UNITDATA_CNF_RESULT_RLC_FAILURE,
    SMS_EVAL_UNITDATA_CNF_RESULT_DATA_NO_SEND

} sms_eval_unitdata_cnf_result_enum;

#endif   /* ----- #ifndef _SMS_EVAL_ENUMS_INC ----- */

