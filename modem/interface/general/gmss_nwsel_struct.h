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
 *  gmss_nwsel_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   This file is intends for struct definition between NWSEL and GMSS.
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
#ifndef _GMSS_NWSEL_STRUCT_H
#define _GMSS_NWSEL_STRUCT_H

#include "kal_general_types.h"
#include "l3_inc_enums.h"
#include "mcd_l3_inc_struct.h"
#include "ps_public_enum.h"
#include "l3_inc_local.h"
#include "mm_mmi_enums.h"

#ifdef __LTE_RAT__
#include "nvram_data_items.h"
#endif

#ifdef __IMS_SUPPORT__
#include "ims_common_def.h"
#endif /* __IMS_SUPPORT__ */

#include "rsvas_enum.h"
#include "nvram_editor_data_item.h"

#include "sim_ps_struct.h"

#include "l4c2rac_struct.h"
#include "rac2l4c_struct.h"


/* GMSS -> NWSEL */

typedef struct {
    LOCAL_PARA_HDR
    plmn_selection_mode_enum plmn_sel_mode;
    rat_enum rplmn_rat;
    kal_uint8 num_of_eq_plmn;
    plmn_id_struct eq_plmn[MAX_NUM_EQ_PLMN];
    kal_uint8 nvram_locigprs[14];
    rat_enum prefered_rat;
#ifdef __TC02_SECURITY_REQUIREMENT__
    kal_uint8 nvram_imsi_loci_gloci[MAX_LEN_OF_IMSI_LOCI_GLOCI]; //mtk02475: for man-in-middle-attack prevention
#endif
#if defined (__DYNAMIC_ROAMING_SUPPORT__) || defined (UNIT_TEST)
    kal_bool is_supporting_roaming;
#endif

#ifdef __LTE_RAT__
    kal_uint8 nvram_epsloci[NVRAM_EPSLOCI_SIZE];
#endif
#if defined(__CSG_SUPPORT__) || defined (UNIT_TEST)/* CSG R9 */
    plmn_id_rat_struct csg_previous_rplmn;
    kal_uint32 csg_id;
#endif
    kal_bool disable_international_roaming_support;
    kal_bool disable_national_roaming_support;
    kal_bool disable_hhplmn_search_support;
    kal_bool enable_roaming_broker_support;
    kal_uint32 recovery_timer[MAX_RECOVERY_TIMER_NUM ];
    kal_bool                        sms_only;
    voice_domain_preference_enum    eutran_voice_domain_preference;
    voice_domain_preference_enum    utran_voice_domain_preference;
    ue_mode_enum                    ue_mode;
    nvram_histoy_table_struct history_table;
    gmss_mru_info_struct gmss_mru_info;
} gmss_nwsel_init_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_selection_mode_enum plmn_sel_mode;
} gmss_nwsel_sel_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum attach_type;   /* CS-only, PS-only or both CS/PS*/
    kal_uint8 att_id;        /* Johnny: 3G RAC, for attach_req and detach_req using */
    mm_user_search_type_enum search_type;   //mm_user_search_type_enum
#ifdef __SGLTE__
    kal_bool mmdc_ps_attach;
    attach_cause_enum attach_cause;
#endif
} gmss_nwsel_attach_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    domain_id_enum detach_type; /* CS-only, PS-only or both CS/PS */
    kal_bool power_off;   /* mobile shut down or not */
    kal_uint8 att_id;      /* Johnny: 3G RAC, for attach_req and detach_req using */
} gmss_nwsel_detach_req_struct;


typedef struct {
    LOCAL_PARA_HDR
    plmn_reselection_enum plmn_search_mode;       /* plmn_reselection_enum */
    plmn_id_rat_struct selected_plmn; /* Selected PLMN */
#ifdef __CSG_SUPPORT__
    kal_bool is_manual_csg_sel;
    kal_uint32 csg_id;
#endif
    rat_enum prefer_rat;   //  0:default ,  1:GSM ,   2:UMTS
    kal_bool from_l4c;
    kal_uint32 factory_mode_arfcn; //0xFFFF means invalid arfcn, /* 20081110 mtk00714, for fast camp on test machine */
} gmss_nwsel_rac_plmn_search_req_struct;

#ifdef __CSG_SUPPORT__
typedef struct {
    LOCAL_PARA_HDR
    plmn_id_rat_struct plmn_id_rat;
} gmss_nwsel_rac_csg_list_req_struct;
#endif

typedef struct {
    LOCAL_PARA_HDR
    rat_enum rat_mode;              /* RATCM_RAT_ENUM*/
    rat_enum reported_rat;
} gmss_nwsel_set_rat_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_supporting_roaming;
    kal_bool disable_international_roaming_support;
    kal_bool disable_national_roaming_support;
    kal_bool disable_hhplmn_search_support;
} gmss_nwsel_set_roaming_mode_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum  prefer_rat;
}gmss_nwsel_set_prefer_rat_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_eutran_vdp_or_ue_usage_changed;
    voice_domain_preference_enum eutran_voice_domain_preference;
    ue_usage_setting_enum ue_usage_setting;
    ue_mode_enum ue_mode;
    ue_mode_enum ue_mode_exclude_18;
    ims_reg_status_enum ims_reg_status;
    kal_bool sms_only;
    kal_bool is_ims_support;
#ifdef __IMS_SUPPORT__    
    ims_dereg_cause_enum ims_dereg_cause;
#endif /* __IMS_SUPPORT__ */
} gmss_nwsel_uemode_param_update_req_struct;

/* NWSEL -> GMSS */

typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;          /* proc_status_enum */
    mm_cause_enum cause;           /* mm_cause_enum */
    kal_bool is_on_hplmn;
    cell_info_and_rat_struct cell_info;
} gmss_nwsel_rac_plmn_search_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;         /* proc_status_enum */
    mm_cause_enum  cause;          /* mm_cause_enum */
    kal_uint8 num_of_hplmn;
    rac_plmn_list_struct plmn_list;
} gmss_nwsel_rac_plmn_list_cnf_struct;

typedef gmss_nwsel_rac_plmn_list_cnf_struct gmss_nwsel_plmn_list_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    rac_plmn_id_rat_info_struct plmn_list;
} gmss_nwsel_plmn_id_rat_info_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    rac_plmn_id_rat_info_struct plmn_list;
} gmss_nwsel_plmn_id_rat_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    switch_modem_cause_enum  cause;
} gmss_nwsel_update_switch_modem_cause_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 susp_id;
} gmss_nwsel_suspend_status_ind_struct;

#ifdef __CSG_SUPPORT__
typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum status;
    mm_cause_enum cause;
    rac_csg_list_struct csg_list;
} gmss_nwsel_rac_csg_list_cnf_struct;
#endif

typedef struct {
    kal_uint8 ref_count;
    kal_uint16 msg_len;
    proc_status_enum status;         /* proc_status_enum */
    mm_cause_enum cause;          /* mm_cause_enum */
} gmss_nwsel_set_rat_mode_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_not_suspend; /* indicate if is_searching = TRUE is due to Gemini suspend */
    kal_bool is_update_is_searching; /* if TRUE, RAC can check is_searching flag */
    kal_bool is_searching;
    kal_bool is_camp_on_cell; /* if is_searching = FALSE && is_camp_on_cell = FALSE, then RAC update to L4C; 
                                 else, ignore the is_searching flag.  */
    kal_bool is_on_hplmn;
    kal_bool is_update_active_rat;
    rat_enum active_rat;
} gmss_nwsel_plmn_status_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    nwsel_ims_service_enum service_type;
} gmss_nwsel_ims_service_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum irat_type;
    rat_type_enum source_rat;
    rat_type_enum target_rat;
    ho_from_lte_type_enum ir_ho_type;
} gmss_nwsel_rat_change_start_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    irat_type_enum irat_type;
    irat_result_enum irat_result;
    rat_type_enum source_rat;
    rat_type_enum target_rat;
} gmss_nwsel_rat_change_finish_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool enter_cause18_plmn;
} gmss_nwsel_cs_domain_availability_ind_struct;

#ifdef __SGLTE__
typedef struct 
{
    LOCAL_PARA_HDR
    mmdc_mode_enum mode; 
} gmss_nwsel_mmdc_mode_update_req_struct;

typedef struct 
{
    LOCAL_PARA_HDR
    rat_enum  cell_rat;
    mmdc_camp_on_status_enum  cell_status;
    kal_bool  is_immediately_switch;
    mmdc_psd_switch_cause_enum cause;
    kal_bool  is_2g_cell_support_ps;      
} gmss_nwsel_mmdc_camp_on_status_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    mmdc_recovery_search_enum trigger_type;
} gmss_nwsel_mmdc_recovery_search_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    plmn_search_abort_cause_enum cause;
} gmss_nwsel_plmn_search_abort_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_search_abort_proc_status_enum status;          /* proc_status_enum */
} gmss_nwsel_plmn_search_abort_cnf_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum cell_rat;
} gmss_nwsel_mmdc_plmn_loss_ind_struct;
#endif /* __SGLTE__ */

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_action_enum action;
    susp_resu_result_enum result;
} gmss_nwsel_susp_resu_update_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    susp_resu_mode_enum  mode;
    susp_resu_action_enum action;
    kal_uint8            susp_id;
} gmss_nwsel_susp_resu_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 timer_interval[MAX_RECOVERY_TIMER_NUM];
} gmss_nwsel_set_recovery_search_timer_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint32 timer_interval[MAX_RECOVERY_TIMER_NUM];
} gmss_nwsel_get_recovery_search_timer_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool result;
} gmss_nwsel_set_recovery_search_timer_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_update_needed;
    kal_uint8 ue_oplmn_ver[2];
    kal_uint16 no_oplmn_entry;
    kal_uint8 *oplmn_data;
} gmss_nwsel_ue_oplmn_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    voice_domain_preference_enum utran_voice_domain_preference;
} gmss_nwsel_set_utran_voice_domain_preference_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_data_service_on;
} gmss_nwsel_data_service_status_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 trx_id;
    rat_enum rat;
    prio_class_enum gmss_class;
    lte_duplex_type_enum duplex_type; /* search this type only */
    plmn_id_struct mcc; /* only mcc1, mcc2, mcc3 are valid, for NWSEL to ignore PLMNs not in this MCC *
                         * If MCC, MNC are all 0x0F, it means no MCC restriction                      */                            
    scan_type_enum          scan_type;
} gmss_nwsel_plmn_search_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 trx_id;
    proc_status_enum proc_status;
    rat_enum rat;
    prio_class_enum gmss_class;
    mm_cause_enum proc_cause;
    mm_cause_enum nw_mm_cause;
    esm_cause_enum esm_cause;
} gmss_nwsel_plmn_search_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    rat_enum rat;
    lte_duplex_type_enum duplex_type;
    plmn_id_struct mcc; /* only mcc1, mcc2, mcc3 are valid, for NWSEL to ignore PLMNs not in this MCC */
    prio_class_enum quick_list_class; /* Home or PREF: quick list; others: normal list*/
} gmss_nwsel_plmn_list_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_id_struct mcc; /* only mcc1, mcc2, mcc3 are valid, for NWSEL to ignore PLMNs not in this MCC */
    prio_class_enum quick_list_class; /* Home or PREF: quick list; others: normal list*/
} gmss_nwsel_c2k_normal_service_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    proc_status_enum proc_status;
    prio_class_enum gmss_class;     // Only count plmn with suitable cell.
    mm_cause_enum cause;
    rac_plmn_list_struct plmn_list; // All available plmn including forbidden and may_suitable_cell_exist=FALSE.
} gmss_nwsel_plmn_list_cnf_struct;

#if 0   /* no local_para */
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

#ifdef __GEMINI__
typedef struct {
    LOCAL_PARA_HDR
    as_suspend_mode_reason_enum cause;
} gmss_nwsel_suspend_ind_struct;

#ifdef __GEMINI_MONITOR_PAGE_DURING_TRANSFER__
typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_virtual_idle_mode;
} gmss_nwsel_resume_ind_struct;
#endif /* __GEMINI_MONITOR_PAGE_DURING_TRANSFER__ */

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_virtual_idle_mode;
} gmss_nwsel_virtual_mode_ind_struct;
#endif /* __GEMINI__ */

typedef struct {
    LOCAL_PARA_HDR
    mm_cause_enum cause;
} gmss_nwsel_out_of_service_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    prio_class_enum gmss_class;
    rat_enum rat;
} gmss_nwsel_class_rat_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    mm_event_type_enum event;
} gmss_nwsel_event_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_controlled_by_gmss;
} gmss_nwsel_gmss_status_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool is_ir_search;
    irat_type_enum irat_type;
} gmss_nwsel_l2c_transfer_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    c2k_irat_attach_result_enum result;
} gmss_nwsel_c2k_irat_complete_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    c2k_irat_attach_result_enum  attach_result;
    kal_bool                     is_attach_req_sent;
    emm_cause_enum               emm_cause;
    esm_cause_enum               esm_cause;
} gmss_nwsel_c2k_irat_attach_result_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    rat_enum rat;
} gmss_nwsel_signal_appear_ind_struct;

typedef struct
{
    LOCAL_PARA_HDR
    gmss_mru_info_struct gmss_mru_info;
} gmss_nwsel_nvram_write_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    prio_class_enum prio_class;
} gmss_nwsel_prio_class_update_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 ef_imsi[9];
    kal_bool is_valid_ef_loci;
    kal_uint8 ef_loci[11];
    kal_bool is_valid_ef_gloci;
    kal_uint8 ef_gloci[14];
    kal_bool is_valid_ef_epsloci;
    kal_uint8 ef_epsloci[LEN_OF_EPSLOCI];
    kal_uint8 ef_hplmn_time;
    /* Forbidden PLMN */
    kal_bool is_valid_ef_fplmn;
    kal_uint8 num_of_fplmn;
    kal_uint8 ef_fplmn[30];
    /* PLMN selector*/
    kal_uint16 no_plmnsel_data;
    kal_uint8 *plmnsel_data;    /* Stored in SMU, and SMU will free it when it's updated */
    /* user PLMN */
    kal_uint16 no_uplmn_data;
    kal_uint8 *uplmn_data;      /* Stored in SMU, and SMU will free it when it's updated */
    /* operator PLMN */
    kal_uint16 no_oplmn_data;
    kal_uint8 *oplmn_data;      /* Stored in SMU, and SMU will free it when it's updated */
    /* HPLMN */
    kal_uint16 no_hplmn_data;
    kal_uint8 *hplmn_data;      /* Stored in SMU, and SMU will free it when it's updated */
    /* Acting HPLMN */
    kal_bool is_valid_ef_acting_hplmn;
    kal_uint8 ef_acting_hplmn[3]; 
    kal_bool is_usim;
    /* Equivalent Home PLMN */
    kal_bool is_valid_ef_ehplmn; 
    kal_uint8 num_of_ehplmn;
    kal_uint8 ef_ehplmn[12];
    /* EHPLMN Presentation Indication*/
    kal_bool is_valid_ef_ehplmnpi;
    kal_uint8 ef_ehplmnpi;
    /* Last RPLMN Selection Indication*/
    kal_bool is_valid_ef_lrplmnsi;
    kal_uint8 ef_lrplmnsi;
    kal_uint8 mnc_length;
    kal_bool is_valid_cdma_imsi_m;
    kal_uint8 cdma_imsi_m[10];
}gmss_nwsel_sim_ready_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    act_sim_enum  active_sim;
} gmss_nwsel_active_sim_info_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_bool need_forward;
    kal_bool force_success;  /* force success even SIM2 is in call */
} gmss_nwsel_set_lte_active_req_struct;

typedef struct
{
    LOCAL_PARA_HDR
    irat_result_enum irat_result;      // only IR_RESULT_SUCCESS and IR_RESULT_REJECT are valid
} gmss_nwsel_set_lte_active_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 trx_id;
    kal_uint8 rat_num;
    rat_enum rat[MAX_MCC_SEARCH_RAT_NUM];
} gmss_nwsel_mcc_search_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 trx_id;
    proc_status_enum proc_status;
    kal_uint8 plmn_count;
    plmn_id_rat_struct plmn_id_rat[RAC_MAX_NUM_LISTED_PLMNS];
} gmss_nwsel_mcc_search_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    plmn_id_struct plmn_id;
} gmss_nwsel_disable_eutran_req_struct;

typedef l4crac_set_roaming_data_config_req_struct gmss_nwsel_roaming_data_config_req_struct;

typedef sim_error_ind_struct gmss_nwsel_sim_error_req_struct;

typedef l4crac_nw_reg_status_ind_struct gmss_nwsel_reg_status_ind_struct;


#endif
