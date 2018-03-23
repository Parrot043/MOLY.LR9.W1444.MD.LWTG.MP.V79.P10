/******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2007
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
*******************************************************************************/

/******************************************************************************
 * Filename:
 * --------------------------------------------------------
 *   mrs_eas_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   The EAS capability stored in MRS context.
 *
 * Author:
 * --------------------------------------------------------
 * -------
 *
 * --------------------------------------------------------
 * $Log$
 *
 * removed!
 * removed!
 * MRS part
 *
 * removed!
 * removed!
 * MRS part
 *
 * removed!
 * removed!
 * Merge VIVO into MP7(CEL part)(OA domain)
 *
 * removed!
 * removed!
 * Denali C2K FDD/TDD mode switch (OA)
 *
 * removed!
 * removed!
 * Create mrs_eas_max_band_cap_for_user() to L4C for user friendly UI
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * .modify enum
 *
 * removed!
 * removed!
 * .add fdd/tdd jdg api
 *
 * removed!
 * removed!
 * .add eas fdd/tdd judge api in MRS
 *
 * removed!
 * removed!
 * merge mrs
 *
 * removed!
 * removed!
 * .
 *
 *****************************************************************************/

#ifndef _MRS_EAS_CAPABILITY_H
#define _MRS_EAS_CAPABILITY_H

#include "mrs_as_enums.h"

/*****************************************************************************
 * Macros Without Parameters
 *****************************************************************************/


/*****************************************************************************
 * Macros With Parameters
 *****************************************************************************/


/*****************************************************************************
 * Enums without tags
 *****************************************************************************/
#define EAS_BAND_INFO_SHIFT  5
#define EUTRAN_CAPA_MAX_LEN  1024
#define EAS_POWER_CLASS_MASK 0x0c
#define LTE_BAND_NUM         SIZE_LTE_BAND * 8
#define LTE_BAND_INVALID     0xffff
#define LTE_FREQ_INVALID     0xffff  
#define LTE_EARFCN_INVALID   0xffffffff 
#define EAS_EF_ERRC_PARTIAL_BAND_NUM 10


/*****************************************************************************
 * Type Definitions
 *****************************************************************************/
typedef struct {
    kal_uint16    band; 
    kal_uint32    dl_lower_earfcn;
    kal_uint32    dl_upper_earfcn;
    kal_uint32    ul_lower_earfcn;
    kal_uint32	  ul_upper_earfcn;
} eas_partial_band_list_struct;
	
	
typedef struct {
    kal_uint8	valid_num;
    eas_partial_band_list_struct  band_list[EAS_EF_ERRC_PARTIAL_BAND_NUM]; 
} eas_partial_band_inf_struct;

typedef struct {
    kal_uint32   earfcn; 
    kal_uint16   lte_band_num;
    kal_uint16  *lte_band_list_ptr;
}earfcn_list_struct;

typedef struct {
    kal_uint32  eutra_capa_length; 
    kal_uint8   eutra_capa[EUTRAN_CAPA_MAX_LEN];
    kal_uint8   eea_support;/*MSB: EEA0, EEA1,.....EEA7*/
    kal_uint8   eia_support;/*MSB: EIA0, EIA1,.....EIA7*/
    kal_uint8   eas_power_class;
//#ifdef __SGLTE__
    kal_bool is_band_39_ori_support;
//#endif /* __SGLTE__ */
    kal_uint8   is_band_ori_support[SIZE_LTE_BAND];
    kal_uint8   disable_bw_bmp[LTE_BAND_NUM];
    eas_partial_band_inf_struct partial_band_inf;
} eas_capability_context_struct;

typedef enum {
  EAS_BAND_PHY_FREQ_MIN,
  EAS_BAND_PHY_FREQ_MAX,  
  EAS_BAND_EARFCN_MIN,  
  EAS_BAND_EARFCN_MAX,
  EAS_BAND_EARFCN_FREQ_INFO_NUM
} eas_band_earfcn_freq_info_enum;

typedef enum {
  EAS_CELL_MODE_UNKNOWN,
  EAS_CELL_MODE_FDD,
  EAS_CELL_MODE_TDD
} eas_cell_mode_enum;

typedef enum {
  EAS_COUNTRY_JAPAN
} eas_country_enum;

/*****************************************************************************
 * Declarations Of Exported Globals
 *****************************************************************************/
kal_bool mrs_eas_is_supported_band(MRS_SIM_INDEX sim_index,
                                           kal_uint16    lte_band);

void mrs_eas_convert_dl_earfcn(
                                          kal_uint32    dl_earfcn,
                                          kal_uint16   *lte_band_ptr,
                                          kal_uint16   *phy_freq_ptr);

void mrs_eas_convert_ul_earfcn(
                                          kal_uint32    ul_earfcn,
                                          kal_uint16   *lte_band_ptr,
                                          kal_uint16   *phy_freq_ptr);


kal_bool mrs_eas_is_supported_dl_earfcn(MRS_SIM_INDEX sim_index,
                                                kal_uint32    dl_earfcn);
kal_bool mrs_eas_is_supported_ul_earfcn(MRS_SIM_INDEX sim_index, kal_uint32 ul_earfcn);


kal_bool mrs_eas_is_dl_earfcn_overlap(kal_uint32          dl_earfcn1,
                                            kal_uint32          dl_earfcn2);

kal_bool mrs_eas_is_ul_earfcn_overlap(kal_uint32          ul_earfcn1,
                                            kal_uint32          ul_earfcn2);

kal_bool mrs_eas_partical_band_range_chk(kal_uint16  lte_band,kal_uint32 dl_lower_earfcn,kal_uint32 dl_upper_earfcn,kal_uint32 ul_lower_earfcn,kal_uint32 ul_upper_earfcn);


kal_uint16 mrs_eas_convert_dl_earfcn_to_freq(kal_uint32    dl_earfcn);


kal_uint32 mrs_eas_convert_to_best_dl_earfcn_mfbi(MRS_SIM_INDEX sim_index,
                                                  kal_uint32    dl_earfcn,
                                                  kal_uint16    band_indicator,
                                                  kal_uint8     lte_band_num,
                                                  kal_uint16   *lte_band_list_ptr,
                                                  eas_bandwidth_enum band_width);

kal_uint32 mrs_eas_convert_ul_earfcn_to_target_band(kal_uint32    ul_earfcn,
                                                              kal_uint16    target_band);

kal_uint32 mrs_eas_multi_band_conversion(
                                         MRS_SIM_INDEX sim_index,
                                         kal_uint32    earfcn,
                                         kal_uint16    lte_band_num,
                                         kal_uint16   *lte_band_list_ptr);

kal_uint32 mrs_eas_multi_band_conversion_rej_redirection(
                                                         MRS_SIM_INDEX       sim_index,
                                                         kal_uint32          redirection_earfcn,
                                                         kal_uint8           freq_num,
                                                         earfcn_list_struct *earfcn_list_ptr);






kal_bool mrs_eas_is_lte_fdd_support(MRS_SIM_INDEX sim_index);

kal_bool mrs_eas_is_lte_tdd_support(MRS_SIM_INDEX sim_index);

kal_uint8 mrs_eas_get_eea_support(MRS_SIM_INDEX sim_index);

kal_uint8 mrs_eas_get_eia_support(MRS_SIM_INDEX sim_index);

kal_uint8 mrs_eas_get_powerclass(MRS_SIM_INDEX sim_index);

void mrs_eas_read_nvram_cnf_handler(kal_uint16 nvram_file_id, kal_uint8* data, kal_uint16 len);

void mrs_eas_set_ue_eutra_capability(MRS_SIM_INDEX sim_index, kal_uint8 *p_ue_eutra_cap, kal_uint32 cap_length);

kal_uint32 mrs_eas_get_ue_eutra_capability(MRS_SIM_INDEX sim_index, kal_uint8 **pp_ue_eutra_capa);

eas_cell_mode_enum mrs_eas_jdg_cell_mode_by_band(kal_uint16 lte_band);

eas_cell_mode_enum mrs_eas_jdg_cell_mode_by_earfcn(kal_uint32 earfcn);

kal_bool mrs_eas_is_supported_dl_earfcn_with_bw_check(MRS_SIM_INDEX sim_index,
                                                kal_uint32    dl_earfcn, eas_bandwidth_enum band_width);

kal_bool mrs_eas_is_supported_ul_earfcn_with_bw_check(MRS_SIM_INDEX sim_index,
                                                kal_uint32    ul_earfcn, eas_bandwidth_enum band_width);

kal_bool mrs_eas_is_supported_dl_bandwidth(MRS_SIM_INDEX sim_index,
                                                kal_uint16    lte_band, eas_bandwidth_enum band_width);


kal_bool mrs_eas_band_setting_update(MRS_SIM_INDEX sim_index, kal_uint8* lte_band_bmp);

void mrs_eas_max_band_cap_for_user(kal_uint8  *lte_band);

//#ifdef __SGLTE__
kal_bool mrs_eas_is_supported_band_in_nvram_stored(MRS_SIM_INDEX sim_index,
                                           kal_uint16    lte_band);
kal_bool mrs_eas_is_supported_earfcn_in_nvram_stored(MRS_SIM_INDEX sim_index,kal_uint32 dl_earfcn); 
//#endif /* __SGLTE__ */

void mrs_eas_intersection_svlte_band_config(kal_uint8    *oneByteBandBitMask);

#if defined(__BLACK_CELL_LIST__) || defined(UNIT_TEST)
void mrs_eas_add_black_cell_list_notification(void);

void mrs_eas_clear_black_cell_list_notification(void);
#endif /*__BLACK_CELL_LIST__*/

void mrs_eas_band_control_func(kal_uint16 lte_band, eas_band_control_enum band_ctrl_info);

kal_bool mrs_eas_is_mcc_match_country(eas_country_enum country,kal_uint8 mcc1,kal_uint8 mcc2,kal_uint8 mcc3);

void mrs_eas_add_remove_band(kal_uint16 lte_band, eas_band_control_enum band_ctrl_info);

#endif /* _MRS_EAS_CAPABILITY_H */

