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
 * Filename:
 * ---------
 * ps_public_utility.h
 *
 * Description:
 * ------------
 *   This file is intends for put the header of PS public API
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
*****************************************************************************/

#include "kal_general_types.h"
#include "ps_public_struct.h"
#include "sim_public_enum.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "keypad_sw.h"
#if defined(__SMS_STORAGE_BY_MMI__)
#include "smslib_def.h"
#include "smslib_enum.h"
#include "mcd_l4_common.h"
#endif
#include "nvram_data_items.h"

#include "c2k_irat_msg_struct.h"

extern kal_uint8 l4c_cc_ss_string_parsing(kal_uint8 *string_ptr, kal_uint8 length, kal_uint8 sim_interface, kal_bool is_in_call);

#ifdef __SGLTE_DSDS__
extern kal_bool is_SGLTE_4G_switched();
#else
extern sim_interface_enum l4c_gemini_get_actual_sim_id(sim_interface_enum simId);
#endif

extern kal_bool is_sim_poweroff_req_sent(sim_interface_enum simId);

extern sim_interface_enum l4c_gemini_get_switched_sim_id(sim_interface_enum simId);

extern sim_interface_enum l4c_csus_get_actual_sim_slot_id(protocol_id_enum sim_ps_Id);

extern protocol_id_enum l4c_csus_get_switched_sim_ps_id(sim_interface_enum sim_slot_Id);

extern module_type rmmi_get_default_uart_owner(void);

extern void smsal_gsm7_unpack(kal_uint8  *packed_data, kal_uint8  *unpacked_data, kal_uint16 data_len, kal_uint16 offset);
extern kal_uint16 smsal_msg_len_in_character(kal_uint8 dcs, kal_uint16 len, kal_uint8 last_byte);
extern kal_bool smsal_is_support_r4_mbdn(void);

extern void smsal_sdm_set_tp_rd(kal_uint8 *str, kal_uint16 str_len);

#if defined(__SMS_STORAGE_BY_MMI__)
extern smslib_status_enum smslib_alloc_sms_struct(smslib_mti_enum mti, smslib_general_struct *ptr_g);
extern smslib_status_enum smslib_dealloc_sms_struct(smslib_general_struct *ptr_g);
extern smslib_status_enum smslib_reset_sms_struct(smslib_general_struct *ptr_g);
smslib_status_enum smslib_get_msg_content(kal_uint8, smslib_general_struct *, l4_addr_bcd_struct *);
smslib_status_enum smslib_decode_pdu(kal_uint8 *, kal_uint8, smslib_general_struct *);
extern void smslib_convert_MMI_to_RP(l4c_number_struct *, l4_addr_bcd_struct *);
extern void smslib_convert_RP_to_TPAddr(l4_addr_bcd_struct *, kal_uint8 *, kal_uint8 *);
extern smslib_status_enum smslib_convert_MMIUserData_to_TPUserData(smslib_general_struct *);
#endif

extern kal_bool l4c_kbd_getkeydata(kbd_data *keydata);

extern void rmmi_sleep_mode_callback(void);

extern void l4c_report_voice_codec(kal_uint16 codec);

extern kal_bool tcm_get_ims_flag_by_nsapi(kal_uint8 nsapi);
extern kal_uint16 tcm_get_ims_flag_to_bitmap();

#if defined(__FAST_DORMANCY__) || defined(__NO_PSDATA_SEND_SCRI__)
/****************************************************************************
 * Function:    RRC_CPCSupport
 *
 * Description: Return TRUE if UE supports CPC.
 *****************************************************************************/
extern kal_bool RRC_CPCSupport(void);

#ifdef __FAST_DORMANCY__
/****************************************************************************
 * Function:    RRC_NW_R8_FD_Support
 *
 * Description: Return TRUE if NW supports T323.
 *****************************************************************************/
extern kal_bool RRC_NW_R8_FD_Support();
#endif /* __FAST_DORMANCY__ */
#endif /* __FAST_DORMANCY__ || __NO_PSDATA_SEND_SCRI__ */


/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_query_md_feature(sbp_md_feature_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature()
*
* DESCRIPTION
*   This function is used to set modem configuration
*
* PARAMETERS
*   feature         [IN]    modem feature
*   is_turned_on    [IN]
*   sbp_feature_ptr [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_set_md_feature(sbp_md_feature_enum feature, 
                                   kal_bool is_turned_on, 
                                   nvram_ef_sbp_modem_config_struct *sbp_feature_ptr);

/*****************************************************************************
* FUNCTION
*   sbp_query_md_feature_data()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature [IN]    modem feature
*
* RETURNS
*   The byte value for the input feature
*****************************************************************************/
extern kal_uint8 sbp_query_md_feature_data(sbp_md_feature_data_enum feature);

/*****************************************************************************
* FUNCTION
*   sbp_set_md_feature_data()
*
* DESCRIPTION
*   This function is used to query modem configuration
*
* PARAMETERS
*   feature         [IN]    modem feature
*   data            [IN]
*   sbp_data_ptr    [IN/OUT]
*
* RETURNS
*   KAL_TRUE if success; otherwise KAL_FALSE
*****************************************************************************/
extern kal_bool sbp_set_md_feature_data(sbp_md_feature_data_enum feature, 
                                        kal_uint8 data, 
                                        nvram_ef_sbp_modem_data_config_struct *sbp_data_ptr);

/*****************************************************************************
* FUNCTION
*   errc_cel_com_lte_rat_info_to_as_info()
*
* DESCRIPTION
*   This function is used in IRAT from C2K to LTE to convert LTE RAT info (from C2K) into EAS RAT info (for EAS)
*
* PARAMETERS
*   a_irat_type        [IN]    IRAT type from C2K to LTE
*   *a_lte_rat_info    [IN]    LTE RAT info from C2K
*
* RETURNS
*   EAS RAT info pointer, which the data is converted from *a_lte_rat_info
*****************************************************************************/
extern void *errc_cel_com_lte_rat_info_to_as_info(irat_type_enum a_irat_type, lte_rat_info_struct *a_lte_rat_info);

/*****************************************************************************
* FUNCTION
*   errc_cel_com_as_info_to_c2k_rat_info()
*
* DESCRIPTION
*   This function is used in IRAT from LTE to C2K to convert EAS RAT info (from EAS) into C2K RAT info (for C2K)
*
* PARAMETERS
*   *a_as_info_ptr     [IN]      LTE RAT info from EAS
*   *c2k_rat_info      [IN/OUT]  LTE RAT info, containing info converted from *a_as_info_ptr, for C2K
*
* RETURNS
*   N/A
*****************************************************************************/
extern void errc_cel_com_as_info_to_c2k_rat_info(c2k_rat_info_struct *c2k_rat_info, void *a_as_info_ptr);

/*****************************************************************************
* FUNCTION
*   l4c_get_iratmode_req()
*
* DESCRIPTION
*   This function is used to get the setting of iratmode
*
* PARAMETERS
*   N/A
*
* RETURNS
*   l4c_irat_type_enum  0: AP based iRAT; 1: modem based iRAT
*****************************************************************************/
extern l4c_irat_type_enum l4c_get_iratmode_req(void);

/*****************************************************************************
* FUNCTION
*   sbp_md_feature_overwrite()
*
* DESCRIPTION
*   This function is used to overwrite the configuration for GCF or other test modes
*
* PARAMETERS
*   feature [IN]    modem feature
*   enabled [IN]   feature is turned on or not 
*
* RETURNS
*   KAL_TRUE    : if this feature is turned on
*   KAL_FALSE   : if this feature is turned off
*****************************************************************************/
extern kal_bool sbp_md_feature_overwrite(sbp_md_feature_enum feature, kal_bool enabled);

/*****************************************************************************
* FUNCTION
*   sbp_md_feature_data_overwrite()
*
* DESCRIPTION
*   This function is used to overwrite the configuration for GCF or other test modes
*
* PARAMETERS
*   feature [IN]    modem feature
*   value [IN]       the value of the feature 
*
* RETURNS
*   the overwrited value for the feature
*****************************************************************************/
extern kal_uint8 sbp_md_feature_data_overwrite(sbp_md_feature_data_enum feature, kal_uint8 value);

