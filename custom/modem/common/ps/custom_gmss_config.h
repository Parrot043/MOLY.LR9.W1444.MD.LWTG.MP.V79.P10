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
 *   custom_gmss_config.h
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the configurations of Selection customization feature
 *
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
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef _CUSTOM_GMSS_CONFIG_H
#define _CUSTOM_GMSS_CONFIG_H


#include "kal_general_types.h"
#include "l3_inc_enums.h"
#include "l3_inc_local.h"
#include "mcd_l3_inc_struct.h"



/*************************************************************************
* Constant
*************************************************************************/
/* Do not modify the following default values */

extern const kal_uint16 GMSS_CUSTOM_SCAN_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_SLEEP_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_MPSR_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_LOSS_DELAY_TIMER_VALUE_SECS;
extern const kal_uint16 GMSS_CUSTOM_DELAY_MSPL_SEARCH_TIMER_VALUE_SECS;


/*************************************************************************
* Enum
*************************************************************************/
typedef enum
{
    GMSS_OP_MODE_NONE   = 0,
    GMSS_OP_MODE_LC     = 1,
    GMSS_OP_MODE_LWG    = 2,
    GMSS_OP_MODE_LG     = 3
} gmss_op_mode_enum;


/*************************************************************************
* Function
*************************************************************************/

kal_bool gmss_custom_is_op09();
void gmss_custom_get_access_table(gmss_rat_enum **access_table_ptr, kal_uint8 *size_ptr);
gmss_rat_enum gmss_custom_get_cs_rat(plmn_id_struct loc, l4c_irat_type_enum irat_type);
kal_bool gmss_custom_is_attach_allowed(plmn_id_struct loc, gmss_rat_enum rat, prio_class_enum prio_class);
lte_duplex_type_enum gmss_custom_get_lte_duplex_type();
plmn_id_struct gmss_custom_get_loc_from_plmn_list(kal_uint8 plmn_count, const plmn_id_rat_struct *plmn_list_ptr);
nwsel_rat_enum gmss_custom_get_rat_order(rat_enum reported_rat, kal_uint8 rat_index);
gmss_op_mode_enum gmss_custom_determine_op_mode_by_loc(plmn_id_struct* new_loc, l4c_irat_type_enum irat_type);

#endif /* _CUSTOM_GMSS_CONFIG_H */

