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
 *	csmcc_defs.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   this file contains the constant and macro definition used in CSM(CC) module.
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
 *
 * removed!
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


#ifndef _CSMCC_DEFS_H
#define _CSMCC_DEFS_H

//#include "app_ltlcom.h"
#include "kal_public_api.h"
#include "global_def.h"
//#include "csmcc_types.h"
#include "csm_trc.h"

extern kal_uint8 csmcc_ut_sim_service_table_query(kal_uint32 service);
extern kal_uint8 csm_ut_check_sim_status(void);

#define CSMCC_SUCCESS      (0)
#define CSMCC_FAILURE      (1)

#define CSMCC_KAL_U_ONE       (kal_uint8)1
#define CSMCC_KAL_U_ZERO      (kal_uint8)0

#define CSMCC_INVALID_CALL_ID      (kal_uint8)255
#define CSMCC_INVALID_SRC_ID       (kal_uint8)255
#define CSMCC_NO_CAUSE             (kal_uint8)0
#define CSMCC_INVALID_TI           (kal_uint8)7

#define CSMCC_MAX_CALL_NUM              (7)
#define MAX_MPTY_MEMBER_NUM       (5)
#define MAX_SS_BCD_NUM_LEN        (20)
#define MAX_SS_SUB_ADDR_LEN       (21)
#define L4_MAX_SUB_ADDR           (21)
#define MAX_CD_ARG_LEN            (47)
#define MAX_CUG_ARG_LEN           (10)
#define L4_MAX_BCD_NUM_LEN        (41)  /*mtk01602, 070710:define MAX BCD length for CSD address*/
#define CSMCC_GTIMER_NUM	  (3)   /*mtk01602: 3 global timers; dtmf and aoc,CALL_CONFIRM*/
#define CSMCC_CALL_CONFIRM_TIME (KAL_TICKS_30_SEC)


#define ACM_LEN                (3)
#define ACMMAX_LEN             (3)
#define EMLPP_LEN              (2)
#define AAEM_LEN               (1)

/* ss status oct[0], XXXXQPRA,only PRA=111, then Active.17.7.4 of 29.002 (QPRS). 23.011   */
#define SS_ACT_MASK    0x07 
/* ss notification oct[0], only the last 3 bits used, 24.080. */
#define SS_CF_MASK     0x07

#define CSMCC_FILE_ACM_MASK           0x01
#define CSMCC_FILE_ACMMAX_MASK        0x02
#define CSMCC_FILE_EMLPP_MASK         0x04
#define CSMCC_FILE_AAEM_MASK          0x08
#define CSMCC_ALL_FILE_MASK (CSMCC_FILE_ACM_MASK|   \
                               CSMCC_FILE_ACMMAX_MASK|   \
                               CSMCC_FILE_EMLPP_MASK|   \
                               CSMCC_FILE_AAEM_MASK)   \
                               
#define CSMCC_STARTUP_SIM_FAIL_MASK   0x40
#define CSMCC_STARTUP_NVRAM_FAIL_MASK 0x80
#define CSMCC_SIM_FILE_CHANGE_FAIL_MASK  0x40
#define CSMCC_TI_FLAG_OFFSET            (kal_uint8)3
#define CSMCC_TI_FLAG_MASK              0x08
#define CSMCC_TI_MASK                   0x07
#define CSMCC_VT_CAP_MASK             0x01




#if defined(__GEMINI__) || defined(__SGLTE__)
#define CSMCC_PTR_G_TO_L csmcc_context_struct *csmcc_ptr_l=csmcc_ptr_g;
#else
#define CSMCC_PTR_G_TO_L 
#endif

#define CSMCC_GET_CCM_INCR_FLAG( call_id ) \
             (((csmcc_ctab_g.call_tab[call_id-1].ccm_per_call) & 0x80000000) > 0)

#define CSMCC_SET_CCM_INCR_FLAG( call_id ) \
             csmcc_ctab_g.call_tab[call_id-1].ccm_per_call |= 0x80000000;

#define CSMCC_RESET_CCM_INCR_FLAG( call_id ) \
             csmcc_ctab_g.call_tab[call_id-1].ccm_per_call &= 0x7fffffff;

#define CSMCC_RESET_SIM_READ_FLAG \
             CSMCC_PTR->startup_req = 0;

#define CSMCC_UNSET_SIM_READ_FLAG( mask ) \
             CSMCC_PTR->startup_req &= ~mask;

#define CSMCC_SET_SIM_READ_FLAG( mask ) \
             CSMCC_PTR->startup_req |= mask;

#define CSMCC_GET_SIM_READ_FLAG( mask ) \
             (((CSMCC_PTR->startup_req) & mask ) > 0)

#define CSMCC_SET_STARTUP_SIM_FAIL_FLAG \
             CSMCC_PTR->startup_req |= CSMCC_STARTUP_SIM_FAIL_MASK;

#define CSMCC_GET_STARTUP_SIM_FAIL_FLAG \
             (((CSMCC_PTR->startup_req) & CSMCC_STARTUP_SIM_FAIL_MASK) >0)

#define CSMCC_SET_STARTUP_NVRAM_FAIL_FLAG \
             CSMCC_PTR->startup_req |= CSMCC_STARTUP_NVRAM_FAIL_MASK;

#define CSMCC_GET_STARTUP_NVRAM_FAIL_FLAG \
             (((CSMCC_PTR->startup_req) & CSMCC_STARTUP_NVRAM_FAIL_MASK) > 0)

#define CSMCC_SET_SIM_FILE_CHANGE_FAIL_FLAG \
             CSMCC_PTR->startup_req |= CSMCC_SIM_FILE_CHANGE_FAIL_MASK;

#define CSMCC_GET_SIM_FILE_CHANGE_FAIL_FLAG \
             (((CSMCC_PTR->startup_req) & CSMCC_SIM_FILE_CHANGE_FAIL_MASK) >0)

#define CSMCC_CONSTRUCT_LOCAL_PARA(local_para_ptr, local_para_struct) \
        local_para_ptr = (local_para_struct *) \
           construct_local_para((kal_uint16)sizeof(local_para_struct), \
           TD_RESET);

#define GET_CALL_STATUS( call_id ) \
             csmcc_ctab_g.call_pool[call_id]
             
#define SET_CALL_STATUS( call_id, status ) \
             csmcc_ctab_g.call_pool[call_id] = status;
                          
#define CALL_ENTRY( call_id ) \
             csmcc_ctab_g.call_tab[call_id-1]

#define CALL_DATA( call_id, var ) \
             csmcc_ctab_g.call_tab[call_id-1].var
             
#define GET_CALL_STATE( call_id ) \
             csmcc_ctab_g.call_tab[call_id-1].call_state


/* MAUI_01315252, update call state */
#define SET_CALL_STATE( call_id, state)   csmcc_set_call_state(call_id, state);
             
#define GET_MPTY_STATE( call_id ) \
             csmcc_ctab_g.call_tab[call_id-1].mpty_state             

#define SET_MPTY_STATE( call_id, state) \
             csmcc_ctab_g.call_tab[call_id-1].mpty_state = state; \
             kal_trace(TRACE_STATE, \
                       CSMCC_TRACE_MPTY_STATE_CHANGE, \
                       call_id, \
                       csmcc_ctab_g.call_tab[call_id-1].call_state, \
                       state, \
                       csmcc_ctab_g.call_tab[call_id-1].src_id);
                       
#define GET_CALL_TYPE( call_id ) \
             csmcc_ctab_g.call_tab[call_id-1].\
             bc[csmcc_ctab_g.call_tab[call_id-1].cur_call_type]
             
#define SET_CALL_TYPE( call_id, call_type) \
             csmcc_ctab_g.call_tab[call_id-1].\
             bc[csmcc_ctab_g.call_tab[call_id-1].cur_call_type] = call_type;

#define FILL_ACM_VAL( data, value ) \
             data[2] = (kal_uint8)(value & 0x000000ff); \
             data[1] = (kal_uint8)((value & 0x0000ff00)>>8); \
             data[0] = (kal_uint8)((value & 0x00ff0000)>>16); 

#define SET_ACM_VAL( data ) \
             CSMCC_PTR->acm = data[2]+(data[1]<<8)+(data[0]<<16);\
             CSMCC_PTR->pre_acm = data[2]+(data[1]<<8)+(data[0]<<16);

#define SET_ACMMAX_VAL( data ) \
             CSMCC_PTR->acmmax = data[2]+(data[1]<<8)+(data[0]<<16);

#define SET_EMLPP_VAL( data ) \
             CSMCC_PTR->default_call_priority = data[0];

#define SET_AAEM_VAL( data ) \
             CSMCC_PTR->auto_answer_priority_level = data[0];

#define AUTO_ANSWER( call_id ) \
             (((1 << (7 - csmcc_ctab_g.call_tab[call_id-1].call_priority)) & CSMCC_PTR->auto_answer_priority_level) > 0)

#define CSD_USER_ID_LEN      32
#define CSD_USER_PWD_LEN     32

#if (defined(__TCPIP_OVER_CSD__) && defined(__SATCE__))
#define SAT_LOCAL_ADDR_LEN      (4)
#endif

#if defined(__GEMINI__) || defined(__SGLTE__)
/*Get current sim card by module id*/
#define  CSMCC_SIM_INTERFACE  (CSMCC_PTR->csmcc_sim_interface) 
#define CSMCC_MOD_ID (CSMCC_PTR->csmcc_sim_interface + MOD_CSM)
#else
#define  CSMCC_SIM_INTERFACE  
#define CSMCC_MOD_ID MOD_CSM
#endif


#if (defined(__CSMCC_UT__) && defined(__MTK_INTERNAL__))
#define  CSMCC_SIM_SERVICE_TABLE_QUERY(x) (csmcc_ut_sim_service_table_query(x))
#define  CSMCC_CHECK_SIM_STATUS (csm_ut_check_sim_status())
#define  CSMSS_SIM_SERVICE_TABLE_QUERY(x) (csmcc_ut_sim_service_table_query(x))
#define  CSMSS_CHECK_SIM_STATUS (csm_ut_check_sim_status())
#else
#if defined(__GEMINI__) || defined(__SGLTE__)
/*Get current sim card by module id*/
/*If defined GEMINI, add another parameter in sim service table query API*/
#define  CSMCC_SIM_SERVICE_TABLE_QUERY(x) (sim_service_table_query(x, CSMCC_PTR->csmcc_sim_interface))
#define  CSMCC_CHECK_SIM_STATUS (check_sim_status(CSMCC_PTR->csmcc_sim_interface))
#define  CSMSS_SIM_SERVICE_TABLE_QUERY(x) (sim_service_table_query(x, (kal_uint8)(csmss_cur_mod-MOD_CSM)))
#define  CSMSS_CHECK_SIM_STATUS (check_sim_status((kal_uint8)(csmss_cur_mod-MOD_CSM)))
#else
#define  CSMCC_SIM_SERVICE_TABLE_QUERY(x) (sim_service_table_query(x))
#define  CSMCC_CHECK_SIM_STATUS (check_sim_status())
#define  CSMSS_SIM_SERVICE_TABLE_QUERY(x) (sim_service_table_query(x))
#define  CSMSS_CHECK_SIM_STATUS (check_sim_status())
#endif
#endif

#define CSMCC_SIM_TOTAL (MAX_SIM_NUM) 
#define CSMCC_DEFAULT_INTERFACE (15)

#endif /* _CSMCC_DEFS_H */

