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
 * mml1_rf_custom_func.c
 *
 * Project:
 * --------
 * MT6290
 *
 * Description:
 * ------------
 * MML1 RF Custom Function
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *----------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 *
 *----------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*===============================================================================*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "mml1_rf_global.h"
#include "mml1_custom_rf.h"
#include "mml1_custom_drdi.h"

/*** Check if we need to use CDCOC new calibration flow ***/
#if defined(IS_CDCOC_NEW_CAL_FLOW_ENABLE)
kal_uint16 MML1_CDCOC_NEW_CAL_FLOW_ENABLE = IS_CDCOC_NEW_CAL_FLOW_ENABLE;
#else
kal_uint16 MML1_CDCOC_NEW_CAL_FLOW_ENABLE = 0;
#endif

#if defined(IS_MML1_DRDI_ENABLE)
kal_uint16 MML1_DRDI_STATUS = IS_MML1_DRDI_ENABLE;
#else
kal_uint16 MML1_DRDI_STATUS = 0;
#endif

#if defined(IS_MML1_DRDI_REMAP_ENABLE)
kal_uint16 MML1_DRDI_REMAP_ENABLE = IS_MML1_DRDI_REMAP_ENABLE;
#else
kal_uint16 MML1_DRDI_REMAP_ENABLE = 0;
#endif

#if defined(MML1_TAS_FOR_C2K_2GCS_PREFER_EN)
kal_uint16 mml1_tas_for_c2k_2gcs_prefer_en = MML1_TAS_FOR_C2K_2GCS_PREFER_EN;
#else
kal_uint16 mml1_tas_for_c2k_2gcs_prefer_en = 0;
#endif

kal_uint16 mml1_custom_total_set_nums     = MML1_CUSTOM_TOTAL_SET_NUMS;
kal_uint16 mml1_custom_mmrf_real_set_nums = MML1_DRDI_REMAP_MMRF_REAL_SET_NUMS;

#if (IS_MML1_CUSTOM_MEMORY_DATA_SUPPORT)
/*===============================================================================*/
/* this function can be modified by HTC,they can set the mapping rule whatever they want;*/
kal_uint16 mml_rf_drdi_DynamicMappingSettingForCustom(kal_uint16 result_idx)
{
	kal_uint16 MappingRFSettingValue=0;
	MappingRFSettingValue=MML1_DRDI_CUSTOM_ReMapTable[result_idx];
    return MappingRFSettingValue;
}
#endif
