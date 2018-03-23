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
 * custom_eas_config.c
 *
 * Project:
 * --------
 *   MONZA
 *
 * Description:
 * ------------
 *   This file is used to define the EAS configuration.
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
 *
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef _CUSTOM_EAS_CONFIG_H
#define _CUSTOM_EAS_CONFIG_H

#include "kal_general_types.h"
#include "kal_public_api.h"

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
/* The number of specific channels */
#define NUM_OF_LTE_SPECIFIC_CHANNELS    4
#define NUM_OF_LTE_SPECIFIC_BANDS      25 /* MIN:1, MAX:64 */

extern kal_bool eas_custom_specific_channel_srch;
extern kal_uint16 specific_earfcn[NUM_OF_LTE_SPECIFIC_BANDS][NUM_OF_LTE_SPECIFIC_CHANNELS];
#endif

/*************************************************************************
* Function
*************************************************************************/
void eas_custom_get_bgsrch_intv_para(kal_uint8 *a_intv_init_ptr,
                                     kal_uint8 *a_intv_max_ptr,
                                     kal_uint8 *a_intv_delta_ptr );

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
extern void eas_custom_set_specific_channel_srch( kal_bool set_value );
extern kal_bool eas_custom_is_specific_channel_srch(void);
extern kal_uint16 eas_custom_get_specific_earfcn(kal_uint8 band, kal_uint8 earfcn);
extern void eas_custom_set_specific_earfcn(kal_uint8 band, kal_uint8 earfcn_index, kal_uint16 earfcn);
extern kal_uint8 eas_custom_get_lte_specific_band_number(void);
extern kal_uint8 eas_custom_get_lte_specific_channel_number(void);
#endif

#if 0
#ifdef __CUSTOM_EAS_DYN_AFR_SETTING__
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif /*  __CUSTOM_EAS_DYN_AFR_SETTING__ */
#endif
#endif /* _CUSTOM_EAS_CONFIG_H */

