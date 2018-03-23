/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2012
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
 * audl_service.c
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *   Audio Low Level Task
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
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
// #if defined(__DATA_CARD_SPEECH__) || (defined(__DSP_FCORE4__) && defined(__SMART_PHONE_MODEM__))
#if defined(__DATA_CARD_SPEECH__) || defined(__SMART_PHONE_MODEM__)

#include "kal_general_types.h"
#include "kal_public_defs.h"
#include "kal_public_api.h"
#include "task_config.h"
#include "syscomp_config.h"
#include "reg_base.h"
#include "kal_trace.h"

#include "l1audio.h"
#include "l1audio_def.h"
#include "l1sp_trc.h"

#include "audio_msgid.h"
#include "drv_msgid.h"
#include "cmux_msgid.h"

#include "ccci.h"

kal_bool audl_create(comptask_handler_struct **handle);
static void audl_main(task_entry_struct * task_entry_ptr);
static kal_bool audl_init(void);
void AUDL_Task(task_entry_struct * task_entry_ptr);

/* Start of Task Create */
/*************************************************************************
* FUNCTION
*  audl_init
*
* DESCRIPTION
*  Low level audio task initialization function.
*
* PARAMETERS
* IN      task_indx
* RETURNS
*  kal_bool
*
* GLOBALS AFFECTED
*
*************************************************************************/
#if defined (__SMART_PHONE_MODEM__)
extern void SpcIO_A2M_hisr(CCCI_BUFF_T *bufp);
extern void SpcIO_M2A_hisr(CCCI_BUFF_T *bufp);
#endif // defined (__SMART_PHONE_MODEM__)


static kal_bool audl_init(void)
{
#if defined (__SMART_PHONE_MODEM__)
   kal_int32 ret;
   ret = ccci_owner_init(CCCI_PCM_CHANNEL_ACK, kal_get_task_by_moduleID(MOD_AUDL), SpcIO_A2M_hisr);
   if (ret != CCCI_SUCCESS) {
       ASSERT(0);
   }
   ret = ccci_owner_init(CCCI_PCM_CHANNEL, kal_get_task_by_moduleID(MOD_AUDL), SpcIO_M2A_hisr);
   if (ret != CCCI_SUCCESS) {
       ASSERT(0);
   }
#endif // defined (__SMART_PHONE_MODEM__)

   return KAL_TRUE;
}

/*************************************************************************
* FUNCTION
*  audl_create
*
* DESCRIPTION
*  This function implements audl entity's create handler.
*
* PARAMETERS
*
* RETURNS
*  None
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_bool audl_create(comptask_handler_struct **handle)
{
   static const comptask_handler_struct audl_handler_info =
   {
      audl_main,     /* task entry function */
      audl_init,     /* task initialization function */
      NULL           /* task reset handler */
   };

   *handle = (comptask_handler_struct *)&audl_handler_info;
   return KAL_TRUE;
}

static void audl_main(task_entry_struct * task_entry_ptr)
{
   kal_set_active_module_id(MOD_AUDL);
   
   AUDL_Task( task_entry_ptr );
}
/* End of Task Create */

/* ------------------------------------------------------------------------------ */
/*  AUDL Msg Handler. Run under AUDL task as main message handler                 */
/* ------------------------------------------------------------------------------ */

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__SMART_PHONE_MODEM__) && 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif //#if defined(__SMART_PHONE_MODEM__)
/* under construction !*/
/* under construction !*/
#if defined(__DATA_CARD_SPEECH__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifdef __SPEECH_OVER_USB__             
/* under construction !*/
#endif       	
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

/* ------------------------------------------------------------------------------ */
/*  L1Audio Task                                                                  */
/* ------------------------------------------------------------------------------ */

// static kal_bool audlRun = KAL_FALSE;
// static kal_bool runInReal = KAL_FALSE;

#if defined(__DATA_CARD_SPEECH__)		
extern void SP_Strm_Audl_Handler( ilm_struct *ilm_ptr );
#elif defined (__SMART_PHONE_MODEM__)
extern void spcIO_Msg_Handler_inAudL(ilm_struct *current_ilm);
extern void SpcIO_Init(void);
#endif

void AUDL_Task(task_entry_struct * task_entry_ptr)
{
   /*----------------------------------------------------------------*/
   /* Local Variables                                                */
   /*----------------------------------------------------------------*/
   ilm_struct current_ilm;

   /*----------------------------------------------------------------*/
   /* Initialization                                                 */
   /*----------------------------------------------------------------*/
#if defined (__SMART_PHONE_MODEM__)
   SpcIO_Init();
#endif

   /*----------------------------------------------------------------*/
   /* Code Body (Wait Message)                                       */
   /*----------------------------------------------------------------*/

   while (1)
   {
#if VERIFY_DATA_TO_DSP
      VERIFY_DATA_TO_DSP_SAVE_DATA();
#endif

#if defined(__DATA_CARD_SPEECH__)

		msg_receive_extq(&current_ilm);
		kal_set_active_module_id(MOD_AUDL);

		SP_Strm_Audl_Handler( (void*)&current_ilm );
		
		destroy_ilm(&current_ilm);
#elif defined (__SMART_PHONE_MODEM__)
		{
		
		// if(runInReal == KAL_TRUE) {

		msg_type ilmMsgTypeId; 
		msg_receive_extq(&current_ilm);
		ilmMsgTypeId= current_ilm.msg_id;
		destroy_ilm(&current_ilm);
		
		// SpcIO_Msg_Handler_inAudL( (void*)&current_ilm);
		SpcIO_Msg_Handler_inAudL(ilmMsgTypeId);
		

		}
		
		
#endif
		
   }
}

#endif
