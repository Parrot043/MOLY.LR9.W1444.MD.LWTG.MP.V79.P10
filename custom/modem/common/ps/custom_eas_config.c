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

#include "custom_eas_config.h"
/*4G Background Search interval parameter setting:
  Any modification for these value should according to the defined range.
  Otherwise,MD will use the default value instead of setting value.
  Please noted that the maximum value should greater or equal to the initial value.
  NOTE: You may set the delta value to ZERO for fix interval.
*/  
kal_uint8 lte_bgsrch_intv_para[]={  2,/*Initial value(minutes),range:(2..120),default value:2*/
                                  120,/*Maximum value(minutes),range:(2..120),default value:120*/
                                    1 /*Delta value(minutes),  range:(0..5)  ,default value:1*/
                                  };

/*****************************************************************************
* FUNCTION
*   eas_custom_get_bgsrch_intv_para
* DESCRIPTION
*   The function gives 4G background search interval parameters.
*
* PARAMETERS
*  The output value pointers
* RETURNS
*  void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void eas_custom_get_bgsrch_intv_para(kal_uint8 *a_intv_init_ptr,
                                     kal_uint8 *a_intv_max_ptr,
                                     kal_uint8 *a_intv_delta_ptr )
{
    if (a_intv_init_ptr)
    {
        *a_intv_init_ptr  = lte_bgsrch_intv_para[0];
    }
    if (a_intv_max_ptr)
    {
        *a_intv_max_ptr   = lte_bgsrch_intv_para[1];
    }
    if (a_intv_delta_ptr)
    {
        *a_intv_delta_ptr = lte_bgsrch_intv_para[2];
    }

}                                                                       

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
kal_bool eas_custom_specific_channel_srch = KAL_FALSE;


/**
 * The specific channels
 * How to use:
 * Max number is define in NUM_OF_LTE_SPECIFIC_CHANNELS.
 * If user only want to config EARFCNs less than NUM_OF_LTE_SPECIFIC_CHANNELS in some band, just fill invalid EARFCN.
 * For example, if band 1 only need 3 EARFCNs, just fill {300,301,302,0xffff}
 */
kal_uint16 specific_earfcn[NUM_OF_LTE_SPECIFIC_BANDS][NUM_OF_LTE_SPECIFIC_CHANNELS]     = 
{
    {  300,  301,  302,  500}, /* band  1 */
    {  900,  901,  902,  903}, /* band  2 */
    { 1575, 1576, 1577, 1578}, /* band  3 */
    { 2175, 2176, 2177, 2178}, /* band  4 */
    { 2525, 2526, 2527, 2528}, /* band  5 */
    { 2700, 2701, 2702, 2703}, /* band  6 */
    { 3100, 3101, 3102, 3103}, /* band  7 */
    { 3625, 3626, 3627, 3628}, /* band  8 */
    { 3975, 3976, 3977, 3978}, /* band  9 */
    { 4450, 4451, 4452, 4453}, /* band 10 */
    { 4850, 4851, 4852, 4853}, /* band 11 */
    { 5095, 5096, 5097, 5098}, /* band 12 */
    { 5230, 5231, 5232, 5233}, /* band 13 */
    { 5330, 5331, 5332, 5333}, /* band 14 */
    {65535,65535,65535,65535}, /* band 15 */
    {65535,65535,65535,65535}, /* band 16 */
    { 5790, 5791, 5792,65535}, /* band 17 */
    {65535,65535,65535,65535}, /* band 18 */
    { 6075, 6076, 6077, 6078}, /* band 19 */
    { 6300, 6301, 6302, 6303}, /* band 20 */
    { 6525, 6526, 6527, 6528}, /* band 21 */
    {65535,65535,65535,65535}, /* band 22 */
    {65535,65535,65535,65535}, /* band 23 */
    {65535,65535,65535,65535}, /* band 24 */
    { 8365, 8366, 8367, 8368}  /* band 25 */
};
#endif

/*************************************************************************
* Function
*************************************************************************/

#if defined (__AS_SPECIFIC_CHANNEL_SRCH__)|| defined(UNIT_TEST)
/*****************************************************************************
* FUNCTION
*  eas_custom_set_specific_channel_srch
* DESCRIPTION
*   The function set specific search mode.
*
* PARAMETERS
*   kal_bool
*   TRUE: set specific search mode, FALSE: disable specific search mode.
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void eas_custom_set_specific_channel_srch( kal_bool set_value )
{
    eas_custom_specific_channel_srch = set_value;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_is_specific_channel_srch
* DESCRIPTION
*   The function returns whether UE is in specific channel search mode.
*
* PARAMETERS
*  Void
* RETURNS
*  kal_bool
*  TRUE: specific channel search mode, FALSE: normal search mode
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_bool eas_custom_is_specific_channel_srch(void)
{
    return eas_custom_specific_channel_srch;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_get_specific_earfcn
* DESCRIPTION
*   The function returns custom configured specific earfcn.
*
* PARAMETERS
*   kal_uint8 band: the specific band
*   kal_uint8 earfcn_index: the specific channel index
* RETURNS
*  kal_uint16: earfcn
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint16 eas_custom_get_specific_earfcn(kal_uint8 band, kal_uint8 earfcn_index)
{
    return specific_earfcn[band][earfcn_index];
}
/*****************************************************************************
* FUNCTION
*  eas_custom_set_specific_earfcn
* DESCRIPTION
*   The function sets custom configured specific earfcn.
*
* PARAMETERS
*   kal_uint8 band: the specific band
*   kal_uint8 earfcn_index: the specific channel index
*   kal_uint16 earfcn: the specific earfcn
* RETURNS
*   Void
* GLOBALS AFFECTED
*   None
*****************************************************************************/
void eas_custom_set_specific_earfcn(kal_uint8 band, kal_uint8 earfcn_index, kal_uint16 earfcn)
{
    specific_earfcn[band][earfcn_index] = earfcn;
    return;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_get_lte_specific_band_number
* DESCRIPTION
*   The function returns custom configured the number of specific band.
*
* PARAMETERS
*   void
* RETURNS
*  kal_uint8: NUM_OF_LTE_SPECIFIC_BANDS
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 eas_custom_get_lte_specific_band_number(void)
{
    return (kal_uint8)NUM_OF_LTE_SPECIFIC_BANDS;
}
/*****************************************************************************
* FUNCTION
*  eas_custom_get_lte_specific_channel_number
* DESCRIPTION
*   The function returns custom configured the number of specific earfcn.
*
* PARAMETERS
*   void
* RETURNS
*  kal_uint8: NUM_OF_LTE_SPECIFIC_CHANNELS
* GLOBALS AFFECTED
*   None
*****************************************************************************/
kal_uint8 eas_custom_get_lte_specific_channel_number(void)
{
    return (kal_uint8)NUM_OF_LTE_SPECIFIC_CHANNELS;
}
#endif

#if 0
#ifdef __CUSTOM_EAS_DYN_AFR_SETTING__
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
#endif /*  __CUSTOM_EAS_DYN_AFR_SETTING__ */
#endif

