/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2015
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
 * custom_sdm_utility.c
 *
 * Project:
 * --------
 * MOLY
 *
 * Description:
 * ------------
 * This file is for sms domain management customization functions, 
 * customer can use these functions to configure parameters for SMS
 * domain selection. 
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

/*
**   Includes
*/
#include <string.h>

#include "kal_general_types.h"


/*****************************************************************************
* FUNCTION
*   sms_over_sgs_preferred_in_lte
* DESCRIPTION
*   This function is used to define SMS over SGs preference to SMS over IP
*   for 4G MO SMS domain selection in specific networks (MCC & MNC) 
*
* PARAMETERS
*
* RETURNS
*   kal_bool
* GLOBALS AFFECTED
*   None
*****************************************************************************/

kal_bool sms_over_sgs_preferred_in_lte(char *mcc, char *mnc)
{
    /* When TRUE is returned, SMS over SGs is preferred over IMS */

    /* Telefonica Germany */
    if ( (strncmp(mcc, "262", 3) == 0) && 
            ( (strncmp(mnc, "03", 2) == 0) ||
              (strncmp(mnc, "07", 2) == 0) ||
              (strncmp(mnc, "77", 2) == 0) ) )
    {
        return (KAL_TRUE);
    }

    /* VDF Spain */
    if ( (strncmp(mcc, "214", 3) == 0) && (strncmp(mnc, "01", 2) == 0) )
    {
        return (KAL_TRUE);
    }

    /* VDF Portugal */
    if ( (strncmp(mcc, "268", 3) == 0) && (strncmp(mnc, "01", 2) == 0) )
    {
        return (KAL_TRUE);
    }

    /* VDF UK */
    if ( (strncmp(mcc, "234", 3) == 0) && (strncmp(mnc, "15", 2) == 0) )
    {
        return (KAL_TRUE);
    }

    /* Default */
    return (KAL_FALSE);
}

