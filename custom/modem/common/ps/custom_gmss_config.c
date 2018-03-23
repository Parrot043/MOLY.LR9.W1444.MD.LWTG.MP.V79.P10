/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *
 * Filename:
 * ---------
 *   custom_gmss_config.c
 *
 * Project:
 * --------
 *   Moly_Software
 *
 * Description:
 * ------------
 *   This file is used to define the GMSS configuration that can be customized
 *
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *==============================================================================
 *******************************************************************************/
#ifndef __L1_STANDALONE__
#include "string.h"
#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "l3_inc_enums.h"
#include "l3_inc_local.h"
#include "mcd_l3_inc_struct.h"
#include "custom_gmss_config.h"
#include "custom_nwsel_config.h"
#include "ps_public_enum.h"



/*************************************************************************
* Scan timer
*
* CT spec t_scan:
*   while power-on or lost coverage, keep search network 
*   until t_scan timer expiry 
*
* Note: This value should NOT be 0, minimum value is 1 min
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_SCAN_TIMER_VALUE_SECS  = 10*60;	// default 10 minutes

/*************************************************************************
* Sleep timer
*
* CT spec t_sleep:
*   while power-on or lost coverage, keep search network 
*   until t_scan timer expiry 
*
* Note: This value should NOT be 0, minimum value is 1 min
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_SLEEP_TIMER_VALUE_SECS =  3*60;   // default 3 mintues

/*************************************************************************
* default MPSR timer value
*
*   if UE camp in a network without any MSPL record associated with it,
*   UE will use start a default MPSR timer for high priority search
*
* Note: This value should NOT be 0, minimum value is 1 min
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_MPSR_TIMER_VALUE_SECS  = 2*60; // default 2 mintues


/*************************************************************************
* loss delay timer value
*
*   if UE camp in normal service and then lost coverage, GMSS will not
*   search network until this timer expiry. 
*
* Note: This value should NOT be 0, minimum value is 1 sec 
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_LOSS_DELAY_TIMER_VALUE_SECS = 20;	// default 20 seconds

/*************************************************************************
* search MSPL delay timer value
*
*   If search all MSPL and cannot camp on network, wait the timer expired to continued in case
*   external queue is full if GMSS continuous PLMN search is triggered in a short time
*
* Note: This value should NOT be 0, minimum value is 1 sec 
*************************************************************************/
const kal_uint16 GMSS_CUSTOM_DELAY_MSPL_SEARCH_TIMER_VALUE_SECS = 1;	// default 1 seconds



kal_bool gmss_custom_is_op09()
{
    if (gmss_is_cdma2000_supported())
    //&& (gmss_query_sbp_feature(SBP_OP09))
    {
        return KAL_TRUE;
    }
    else
    {
        return KAL_FALSE;
    }
}


/*************************************************************************
* Access table (Technology table)
*
* A table containing access technologies in order that is used for MCC search.
* CT and Verizon have different configurations
*
*************************************************************************/
const gmss_rat_enum GMSS_ACCESS_TABLE_OP09[] = 
{
    GMSS_RAT_CDMA2000_1xRTT,
    GMSS_RAT_3GPP_ALL                   // Group 3GPP RAT to improve MCC search performance
};

void gmss_custom_get_access_table(gmss_rat_enum **access_table_ptr, kal_uint8 *size_ptr)
{
    //if (gmss_query_sbp_feature(SBP_OP09))
    {
        *access_table_ptr = &GMSS_ACCESS_TABLE_OP09[0];
        *size_ptr = sizeof(GMSS_ACCESS_TABLE_OP09)/sizeof(gmss_rat_enum);
    }
}

/* Get CS RAT according to location */
gmss_rat_enum gmss_custom_get_cs_rat(plmn_id_struct loc, l4c_irat_type_enum irat_type)
{
    if (gmss_custom_is_op09())
    {
        if (irat_type == MD_BASED_IRAT)
        {    
            if ((loc.mcc1 == 4 && loc.mcc2 == 6 && loc.mcc3 == 0) ||    // China
                (loc.mcc1 == 4 && loc.mcc2 == 5 && loc.mcc3 == 5))      // Macau
            {
                return GMSS_RAT_CDMA2000_1xRTT;
            }
            else
            {
                return GMSS_RAT_3GPP_ALL;
            }
        }
        else if(irat_type == MD_BASED_IRAT_LCG) // WCDMA is not supported
        {
            if ((loc.mcc1 == 4 && loc.mcc2 == 6 && loc.mcc3 == 0) ||
                (loc.mcc1 == 4 && loc.mcc2 == 5 && loc.mcc3 == 5) ||
                (loc.mcc1 == 4 && loc.mcc2 == 4 && loc.mcc3 == 0) ||
                (loc.mcc1 == 4 && loc.mcc2 == 5 && loc.mcc3 == 0))
            {
                return GMSS_RAT_CDMA2000_1xRTT;
            }
            else
            {
                return GMSS_RAT_3GPP_ALL;
            }
        }
        else
        {
            return GMSS_RAT_3GPP_ALL;
        }
    }
    else
    {
        //TODO
        return GMSS_RAT_CDMA2000_1xRTT;
    }
}

kal_bool gmss_custom_is_attach_allowed(plmn_id_struct loc, gmss_rat_enum rat, prio_class_enum prio_class)
{
    // TODO:
    return KAL_TRUE;
}

/*****************************************************************************
* FUNCTION
*  gmss_custom_determine_op_mode_by_loc
*
* DESCRIPTION
*  This function is used to determine the operation_mode by location 
*
* PARAMETERS
*
* RETURNS
*  NONE
*
* GLOBALS AFFECTED
*  None
*****************************************************************************/
gmss_op_mode_enum gmss_custom_determine_op_mode_by_loc(plmn_id_struct* new_loc, l4c_irat_type_enum irat_type)
{
    if (gmss_custom_is_op09() == KAL_TRUE)
    {
        if (irat_type == MD_BASED_IRAT)
        {
            if ((new_loc->mcc1 == 4 && new_loc->mcc2 == 6 && new_loc->mcc3 == 0) ||
                (new_loc->mcc1 == 4 && new_loc->mcc2 == 5 && new_loc->mcc3 == 5))
            {
                /* LC mode while in China/Macau */
                return GMSS_OP_MODE_LC;
            }
            else
            {
                return GMSS_OP_MODE_LWG;
            }
        }
        else if(irat_type == MD_BASED_IRAT_LCG) // WCDMA is not supported
        {
            if ((new_loc->mcc1 == 4 && new_loc->mcc2 == 6 && new_loc->mcc3 == 0) ||
                (new_loc->mcc1 == 4 && new_loc->mcc2 == 5 && new_loc->mcc3 == 5) ||
                (new_loc->mcc1 == 4 && new_loc->mcc2 == 4 && new_loc->mcc3 == 0) ||
                (new_loc->mcc1 == 4 && new_loc->mcc2 == 5 && new_loc->mcc3 == 0))
            {
                /* LC mode while in China/Macau/Japan/South Korea */
                return GMSS_OP_MODE_LC;
            }
            else
            {
                return GMSS_OP_MODE_LG;
            }
        }
    }

    return GMSS_OP_MODE_NONE;
}


lte_duplex_type_enum gmss_custom_get_lte_duplex_type()
{
    if (gmss_custom_is_op09())
    {
        return LTE_DUPLEX_TYPE_FDD;
    }

    return LTE_DUPLEX_TYPE_NO_RESTRICTION;

}


/*****************************************************************************
* FUNCTION
*  gmss_custom_get_loc_from_plmn_list
*
* DESCRIPTION
*   choose a representative plmn from a plmn_list
*
* PARAMETERS
*
* RETURNS
*   selected plmn index
*****************************************************************************/
plmn_id_struct gmss_custom_get_loc_from_plmn_list(kal_uint8 plmn_count, const plmn_id_rat_struct *plmn_list_ptr)
{
    kal_uint8 i = 0;

    if (gmss_custom_is_op09())
    {
        for (i = 0; i < plmn_count; i++)
        {
            if (plmn_list_ptr[i].plmn_id.mcc1 == 4 &&
                plmn_list_ptr[i].plmn_id.mcc2 == 6 &&
                plmn_list_ptr[i].plmn_id.mcc3 == 0)
            {
                /* China MCC(460) is found */
                return plmn_list_ptr[i].plmn_id;
            }
        }

        /* no China MCC is found. Return the first one (high quality PLMN) */
        return plmn_list_ptr[0].plmn_id;
    }
    else
    {
        /* Default return the first one */
        return plmn_list_ptr[0].plmn_id;
    }

}


#if 0
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
#endif /* #ifndef __L1_STANDALONE__ */

