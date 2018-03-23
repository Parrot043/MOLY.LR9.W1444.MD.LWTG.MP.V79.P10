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
 *   mrs_common_capability.h
 *
 * Project:
 * --------------------------------------------------------
 *   Multimode
 *
 * Description:
 * --------------------------------------------------------
 *   Declaration of funcitons of mrs_common_capability.c.
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
 * [MT6290][CMCC 2016 new requirement][MP7] HSFR + EPLMN (interface) (OA part)
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 * VIVO black cell list TDD CSCE part
 *
 * removed!
 * removed!
 * 	.
 *
 * removed!
 * removed!
 * .
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * B3/B39 common capability.
 *
 * removed!
 * removed!
 * .
 *
 *****************************************************************************/

#ifndef _MRS_COMMON_CAPABILITY_H
#define _MRS_COMMON_CAPABILITY_H

#include "mrs_as_enums.h" // for MRS_SIM_INDE

#if defined(__BLACK_CELL_LIST__) || defined(UNIT_TEST)
#include "mrs_as_struct.h" //for mrs_as_black_cell_struct
#endif /*__BLACK_CELL_LIST__*/

#define MRS_LTE_BAND_BITMASK_SIZE 8

/*  Type Definitions */
typedef struct {
    kal_uint8  gsm_band;
    kal_uint32 umts_band;
    kal_uint8  lte_band[MRS_LTE_BAND_BITMASK_SIZE];
} mrs_as_band_setting;

#if defined(__BLACK_CELL_LIST__) || defined(UNIT_TEST)
#define MAX_BLACK_CELL_NUM      50

typedef struct {
    kal_uint8                   num;
    mrs_as_black_cell_struct    as_black_cell_list[MAX_BLACK_CELL_NUM];
} mrs_as_black_cell_list_struct;
#endif /*__BLACK_CELL_LIST__*/


/* PUBLIC FUNCTION PROTOTYPES ***********************************************/
extern void mrs_get_as_band_setting (MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);

extern void mrs_set_as_band_setting (MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);
extern void mrs_set_as_band_setting_nosave (MRS_SIM_INDEX sim_index, mrs_as_band_setting *band_setting);
extern void mrs_set_as_c2k_is_exist(kal_bool on_off);
extern kal_bool mrs_get_as_c2k_is_exist();
extern void mrs_hsr_set_mode(kal_bool hsr_mode);
extern kal_bool mrs_hsr_get_mode();

#ifdef __SGLTE__
extern void mrs_band_39_control_func(rat_enum rat_mode, band_39_control_enum band_39_control);
#endif /* __SGLTE__ */

extern void mrs_scsi_retrieveGsmBandBitmask(MRS_SIM_INDEX sim_index, kal_uint8 *pGBandBitmask);
extern void mrs_scsi_retrieveUmtsBandBitmask(MRS_SIM_INDEX sim_index, kal_uint32 *pUBandBitmask);
extern void mrs_scsi_retrieveLteBandBitmask(MRS_SIM_INDEX sim_index, void *pLBandBitmask);

#if defined(__BLACK_CELL_LIST__) || defined(UNIT_TEST)
extern kal_bool mrs_add_black_cell_list(mrs_as_black_cell_list_struct *black_cell_list);
extern void mrs_get_black_cell_list(mrs_as_black_cell_list_struct *black_cell_list);
extern kal_bool mrs_check_black_cell_list(MRS_RAT_MODE_TYPE rat, mrs_plmn_id plmn_id, kal_uint32 cell_identity, kal_uint16 lac_or_tac);
extern void mrs_clear_black_cell_list(void);
#endif /*__BLACK_CELL_LIST__*/

#endif /* _MRS_COMMON_CAPABILITY_H */
