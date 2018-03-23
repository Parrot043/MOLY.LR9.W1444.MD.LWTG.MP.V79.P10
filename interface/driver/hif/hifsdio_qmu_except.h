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
 * Filename:
 * ---------
 *   hifsdio_qmu_except.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *	This is interface of the HIF data path exception handler driver for SDIO
 *
 * Author:
 * -------
 * -------
 *
 * ==========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * Merging
 * 	//MOLY/BRANCHES_LR9/LR9.W1423.MD.LWTG.MP/mcu/...
 * 	to //MOLY/TRUNK/MOLY/mcu/...
 *
 * removed!
 * removed!
 * 	Merging
 *  	
 * 	//MOLY_CBr/cs.huang/MOLY_CCCI.Seq.Trace.W1427P1/mcu/...
 *  	
 * 	to //MOLY/BRANCHES_LR9/LR9.W1423.MD.LWTG.MP/mcu/...
 *
 * removed!
 * removed!
 * Add wake-up AP function for uart sync
 *
 * removed!
 * removed!
 * 	Remove API : hifsdio_clear_q & move the step into the except_init API
 *
 * removed!
 * removed!
 * MT6290 exception handle of SDIO driver
 *
 *
 ****************************************************************************/
#ifndef __HIFSDIO_QMU_EXCEPT_H__
#define __HIFSDIO_QMU_EXCEPT_H__

#include "hif_common.h"


/*!
 *   @brief  Help to wake AP up & lock AP sleep for excetion flow UART sync
 *   @return   excute success or fail
 */
kal_bool hifsdioq_except_AP_waklock_for_UART(void);


/*!
 *   @brief  initial the exception HIF driver, only support empty enqueue flow in exception
 *   @param  nonstopq     set n'th bit as 1 if n'th queue not stop while init, [0:15] for DL [16:31] for UP
 *   @param  exceptq      set queues would be used in exception mode, [0:15] for DL [16:31] for UP
 *   @return   excute pass or fail
 */
kal_bool hifsdioq_except_initial(kal_uint32 nonstopq, kal_uint32 exceptq);


/*!
 *  @brief  ask hif driver to set GPD buffer into QMU
 *			don't handle critical section protection becuase in the single thread exception handler
 *  @param  q_type        	the queue type
 *  @param  queue_no        QMU queue no
 *  @param  first_gpd       first GPD of a single GPD or GPD list
 *  @param  last_gpd        last GPD of a single GPD or GPD list
 *  @return KAL_TRUE : set gpd success,
 *          KAL_FALSE : set gpd fail and upper module should re-submit or free the queue list
 */
kal_bool hifsdioq_except_set_gpd(hif_queue_type_e q_type, kal_uint8 queue_no, qbm_gpd* first_gpd, qbm_gpd* last_gpd);
/*!
 *  @brief  poll specified QMU queue to see if any GPD complete
 *			deq_type == HIFQ_FREEQ, (use qbmt_free_q_hwo())
 *				would free the used queue after this function and return the deq number
 *			deq_type == HIF_DEQ,
 *				would just deq and return the deq list and the deq number
 *				use use qbmt_de_q() if generic buffer type
 *
 *  @param  deq_info        the que number , que type and deq type
 *  @param  first_gpd       first GPD of a single GPD or GPD list
 *  @param  last_gpd        last GPD of a single GPD or GPD list
 *  @return	return the deq number
 */

kal_uint32 hifsdioq_except_poll_queue(hif_deq_info_t deq_info, void **pp_first_gpd, void **pp_last_gpd);

/*!
 *	@brief	hif driver would count the timeout for TX queue not progressing
 *			upper driver should check this the status when they found channel abnormal
 *	@param	q_num, the tx queue number to check status
 *	@return	Return the hif driver counter of txq stall time in millisecond (ms)
*/
kal_uint32 hifsdioq_except_get_txq_timeout(kal_uint8 q_num);


/*!
 *	@brief	SDIO upper layer would call this function to drive HIF to do something
 *
*/
void hifsdioq_except_poll_isr(void);

/*!
 *  @brief  get currently que list for debug
 *	@param	is_tx, KAL_TRUE for txq , KAL_FALSE for rxq
 *	@param q_no , the queue number form 0~n
 *	@param pp_head , return the currently queue head
 *	@param pp_tail , return the currently queue tail
 */
void hifsdioq_except_get_que_list(kal_bool is_tx , kal_uint8 q_no, void **pp_head, void **pp_tail);


/*!
 *  @brief  CCCI packet sequence number related feature
 *             inform AP that MD get wrong seq number at CCCI
*/
void hifsdio_except_CCCI_wrong_seq_int(void);


/*!
 *  @brief  CCCI packet sequence number related feature
 *             inform the wrong seq number to AP side
 *	@param	seq, the wrong seq number which get by CCCI
*/
void hifsdio_except_write_seq_to_mb(kal_uint32 seq);


#endif
