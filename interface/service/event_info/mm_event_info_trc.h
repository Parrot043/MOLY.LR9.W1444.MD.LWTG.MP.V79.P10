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
 *  event_trc.h
 *
 * Project:
 * --------
 *
 *
 * Description:
 * ------------
 *   This is trace map definition.
 *
 * Author:
 * -------
 *
 *
 *==============================================================================
 * 				HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
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

[Code Collaborator Link]:
http://mtksap20:8080/go?page=ReviewDisplay&reviewid=29808

[Code Collaborator Link] (CSCE/ADR):
http://mtksap20:8080/go?page=ReviewDisplay&reviewid=29930

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


#ifndef _MM_EVENT_INFO_TRC_H
#define _MM_EVENT_INFO_TRC_H


#ifndef GEN_FOR_PC
#include "kal_public_defs.h" //MSBB change    #include "stack_config.h"
#endif /* GEN_FOR_PC */

#include "kal_trace.h"

//#include "event_info_utility.h"

#if !defined(GEN_FOR_PC)
#if defined(__TST_MODULE__) || defined(__CUSTOM_RELEASE__)
    #include "mm_event_info_trc_gen.h"
#endif /* TST Trace Defintion */
#endif
BEGIN_TRACE_MAP_WITH_RANGE(MOD_EVENT_INFO, 1301, 1400)
/***************************************************************************
  *     Part I : Protocol Action
  *
  * Notes: Use TRACE_GROUP_1 ~ 5 to display Protocol Action Events
  *                   TRACE_GROUP_1  ==> Protocol_level_1
  *                   TRACE_GROUP_2  ==> Protocol_level_2
  *                   TRACE_GROUP_3  ==> Protocol_level_3
  *                   TRACE_GROUP_4  ==> Reserved
  *                   TRACE_GROUP_5  ==> Reserved
  ***************************************************************************/
/***************************** Beging of Protocol Action  **************************/
#ifdef __GEMINI__
   /*Level 1 put here*/
   TRC_MSG(EVENT_INFO_GROUP1_MT_GPRS_DETACH, "%Msim_interface_enum, MT GPRS Detach, Type: %d")
   TRC_MSG(EVENT_INFO_GROUP1_GMM_R7_T3319_DETECTION, "%Msim_interface_enum, [GMM] R7 feature T3319 detected, Value: %d")
   
   /*Level 2 put here*/
   /*Level 3 put here*/
#else
   /*Level 1 put here*/
   TRC_MSG(EVENT_INFO_GROUP1_MT_GPRS_DETACH, "MT GPRS Detach, Type: %d")
   TRC_MSG(EVENT_INFO_GROUP1_GMM_R7_T3319_DETECTION, "[GMM] R7 feature T3319 detected, Value: %d")

   /*Level 2 put here*/
   /*Level 3 put here*/
#endif


/***************************** End of Protocol Action  ****************************/

/***************************************************************************
  *     Part II : User Action
  *
  * Notes: Use TRACE_GROUP_6 ~ 10 to display User Action Events
  *                   TRACE_GROUP_6  ==> User_Action_level_1
  *                   TRACE_GROUP_7  ==> User_Action_level_2
  *                   TRACE_GROUP_8  ==> User_Action_level_3
  *                   TRACE_GROUP_9  ==> Reserved
  *                   TRACE_GROUP_10 ==> Reserved
  ***************************************************************************/
/***************************** Beging of User Action  *****************************/


/***************************** End of User Action  *******************************/

/***************************************************************************
  *     Part III : Abnormal Event
  *
  * Notes: Use TRACE_WARNING to display Abnormal Events
  ***************************************************************************/
/***************************** Beging of Abnormal Event  **************************/


/***************************** End of Abnormal Event  ****************************/

/***************************************************************************
  *     Part IV : New Feature or Rare Configuration
  *
  * Notes: Use TRACE_FUNC to print New Feature or Rare Configuration Events
  ***************************************************************************/
/***************************** Beging of New Feature or Rare Configuration  ************/


/***************************** End of New Feature or Rare Configuration  **************/

/**********************************************************************************************/
/* Part IV : L1 EVENT INFO                                                                    */
/*                                                                                            */
/* Notes   : Use record rare FT event                                                         */
/**********************************************************************************************/
/***************************** Beging of L1 EVENT INFO  ***************************************/


/***************************** End of L1 EVENT INFO  ******************************************/

END_TRACE_MAP_WITH_RANGE(MOD_EVENT_INFO, 1301, 1400)
#endif

