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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   cc_sys_comm.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This Module defines CC IRQ system control functions.
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
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "cc_irq_public.h"
#include "cc_irq_adaptation.h"
#include "dhl_trace.h"
#include "kal_internal_api.h"
#if defined(__TST_MODULE__)
#include "mdipc_trace.h"
#endif

#include "ex_mem_manager_public.h"

#define CC_IRQ_SYS_DBG_ENABLE
#define CC_IRQ_SYS_DBG_LOG_ENABLE
#define CC_SYS_CTRL_SRAM_SIZE        512

extern void cc_irq_msg_init();
extern void cc_irq_msg_isr();
extern void cc_irq_msg_runtime_reset();

CC_IRQ_CALLBACK_P cc_irq_sys_misc_cb[CC_IRQ_SYS_USER_CB_NUMBER];
kal_uint32        cc_sys_state = 0;
kal_uint32        cc_sys_last_excep_tx_ret = 0xFFFFFFFF;
kal_uint32        cc_sys_ctrl_sram_backup[CC_SYS_CTRL_SRAM_SIZE / 4];
kal_uint32        cc_sys_ex_log_from_peer[CC_SYS_CTRL_SRAM_SIZE / 4];
kal_uint32        cc_sys_disable_excep_tx = KAL_FALSE;

#if defined(__TST_MODULE__)
mdipc_msg_sys_state_enum    cc_sys_state_trace[CC_IRQ_SYS_STATE_MAX] = {MSG_ID_MDIPC_SYS_STATE_INIT, MSG_ID_MDIPC_SYS_STATE_RUNNING, MSG_ID_MDIPC_SYS_STATE_ASYNC};
#endif


#if defined(CC_IRQ_SYS_DBG_ENABLE)
//- The only state transition will only from init -> running.
//- No need too much debug entry.
#define CC_SYS_STATE_DBG_NUM    2
kal_uint32 cc_sys_state_dbg_cur_state[CC_SYS_STATE_DBG_NUM], cc_sys_state_dbg_next_state[CC_SYS_STATE_DBG_NUM];
kal_uint32 cc_sys_state_dbg_ptr = 0;
#endif

//- Declare status sync log.
#define CC_SYS_STS_SYNC_LOG_MAX    16
kal_uint32 cc_sys_status_sync_tx_time[CC_SYS_STS_SYNC_LOG_MAX];
kal_uint32 cc_sys_status_sync_rx_time[CC_SYS_STS_SYNC_LOG_MAX];
kal_uint32 cc_sys_status_sync_tx_time_index = 0;
kal_uint32 cc_sys_status_sync_rx_time_index = 0;

kal_timerid cc_sys_ping_timer_id;
kal_timerid cc_sys_ping_ack_timer_id;

/* MD3 is alive or not ==> If MD3 is alive, we should wait his EPOF notification when we receive EPOF */
kal_uint32 cc_sys_MD3_status = KAL_FALSE;

kal_int32 cc_sys_state_trans(kal_uint32 current_state, kal_uint32 next_state)
{
#if defined(CC_IRQ_SYS_DBG_ENABLE)
    if (current_state >= CC_IRQ_SYS_STATE_MAX || next_state >= CC_IRQ_SYS_STATE_MAX)
        return -1;
    
    /* Platform-dependent */
    dhl_trace(TRACE_INFO, 0, MDIPC_SYS_STATE_TRANS, cc_sys_state_trace[current_state], cc_sys_state_trace[next_state]);

#if defined(CC_IRQ_SYS_DBG_LOG_ENABLE)
    cc_sys_state_dbg_cur_state[cc_sys_state_dbg_ptr] = current_state;
    cc_sys_state_dbg_next_state[cc_sys_state_dbg_ptr] = next_state;
    cc_sys_state_dbg_ptr = (cc_sys_state_dbg_ptr + 1) % CC_SYS_STATE_DBG_NUM;
#endif
#endif

    cc_sys_state = next_state;
    
    return 0;
}

static void cc_sys_state_trans_running()
{
    ASSERT(cc_sys_state_trans(cc_sys_state, CC_IRQ_SYS_STATE_RUNNING) == 0);

    /* Platform-dependent */
    dhl_trace(TRACE_INFO, 0, MDIPC_SYS_STATE_RX_INIT_HS);

    CC_IRQ_SET_ENABLE();

    cc_sys_MD3_status = KAL_TRUE;
}

/* TX function for service */
kal_int32 cc_irq_sys_tx_with_buffer(void *addr, kal_uint32 length)
{
    kal_int32            ret;
    kal_uint32           usc_start, usc_current;
    kal_uint32           savedMask;

    CC_IRQ_USC(usc_start);
    
    while (1)
    {
        ret = cc_irq_trigger_interrupt_with_buff(CC_IRQ_SYS_TX_INDEX, addr, length);

        if (ret == CC_IRQ_SUCCESS)
        {
            return CC_IRQ_SUCCESS;
        }
        else if (ret == CC_IRQ_ERR_CHANNEL_FULL)
        {
            usc_current = ust_get_current_time();
            if (ust_us_duration(usc_start, usc_current) > CC_IRQ_NR_TIMEOUT_US)
            {
#if !defined(__CC_IRQ_UT__)
                //- Peer has no response, possible due to HW/SW hang.            

                //- In exception handler, no exception should be triggered.
                if (!CC_IRQ_IN_EXCEP())
                {
                    /* avoid context switch before entering scheduler */
                    CC_IRQ_DRV_MASK_ALL_INTERRUPT(savedMask);
                    kal_fatal_error_handler(KAL_ERROR_C2K_LONG_TIME_NO_RESPONSE, CC_IRQ_SYS_PEER_NO_RESPONSE_TX);
                    CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
                }
                                
                return CC_IRQ_ERR_PEER_ASYNC;
#endif
            }
        }
        else if (ret == CC_IRQ_ERR_PEER_ASYNC)
        {
            return CC_IRQ_ERR_PEER_ASYNC;
        }
        else
        {
            EXT_ASSERT(0, ret, CC_IRQ_SYS_TX_INDEX, (kal_uint32)addr);
        }
    }
}

kal_int32 cc_sys_comm_tx(void *addr, kal_uint32 length, cc_irq_sys_pkt_hdr_t *hdr)
{
    kal_uint8  buffer[CC_IRQ_BUFF_MAX];
    
    ASSERT(length <= CC_IRQ_BUFF_MAX - sizeof(cc_irq_sys_pkt_hdr_t));
    
    /* init header */
    *(cc_irq_sys_pkt_hdr_t*)buffer = *hdr;
    
    /* copy payload */
    if (addr && (length != 0))
    {
        CC_IRQ_MEM_CPY((void*)buffer + sizeof(cc_irq_sys_pkt_hdr_t), addr, length);
    }
    
    return cc_irq_sys_tx_with_buffer((void*)buffer, length + sizeof(cc_irq_sys_pkt_hdr_t));
}

static void cc_sys_ping_ack_timer_cb()
{
    kal_uint32 pre_idx = cc_sys_status_sync_tx_time_index;
    
    if (pre_idx == 0)
        pre_idx = CC_SYS_STS_SYNC_LOG_MAX - 1;
    else
        pre_idx = pre_idx - 1;
    
    kal_fatal_error_handler(KAL_ERROR_C2K_LONG_TIME_NO_RESPONSE, CC_IRQ_SYS_PEER_NO_RESPONSE_SYNC);
}

static void cc_sys_ping_timer_cb()
{
    cc_irq_sys_pkt_ctrl_t hdr;
	
    /* send periodically ping pkt */
    hdr.op_id = CC_IRQ_SYS_OP_CTRL;
    hdr.ctrl_type = CC_IRQ_SYS_PKT_TYPE_PING;
    hdr.reserved = 0;
    
    cc_irq_mask(CC_IRQ_SYS_RX_INDEX);
    
    ASSERT(cc_sys_comm_tx(NULL, 0, (cc_irq_sys_pkt_hdr_t*)&hdr) == CC_IRQ_SUCCESS);
    
    /* start timer for ack */
    kal_set_timer(cc_sys_ping_ack_timer_id, cc_sys_ping_ack_timer_cb, NULL, KAL_TICKS_5_SEC, 0);

    cc_irq_unmask(CC_IRQ_SYS_RX_INDEX);
    
    /* log */
    dhl_trace(TRACE_INFO, 0, MDIPC_SYS_PING_TX);
    cc_sys_status_sync_tx_time[cc_sys_status_sync_tx_time_index] = ust_get_current_time();
    cc_sys_status_sync_tx_time_index = (cc_sys_status_sync_tx_time_index + 1) % CC_SYS_STS_SYNC_LOG_MAX;
}

static void cc_sys_comm_cb(kal_uint32 para0, kal_uint32 para1, kal_uint32 para2)
{
    cc_irq_sys_pkt_ctrl_t *sys_hdr;
    
    sys_hdr = (cc_irq_sys_pkt_ctrl_t *)para0;
    
    /* Platform-dependent */
    dhl_trace(TRACE_INFO, 0, MDIPC_SYS_HISR, sys_hdr->op_id);
    
    switch (sys_hdr->op_id)
    {
    case CC_IRQ_SYS_OP_CTRL:
        {
            /* Exception */
            if (sys_hdr->ctrl_type == CC_IRQ_SYS_PKT_TYPE_EXCEP)
            {
                kal_uint32 savedMask;
                void*      p_peer_ex_log;
            	
                /* Platform-dependent */
                dhl_trace(TRACE_INFO, 0, MDIPC_SYS_STATE_RX_EXCEP_HS);
                
                /* avoid context switch before entering scheduler */
                /* Reason: if context switch takes place after cc_sys_disable_excep_tx is set, but before fatal error is called, */
                /* exception handler still need be triggered */
                /* Removing mask interrupt is also allowed */
                CC_IRQ_DRV_MASK_ALL_INTERRUPT(savedMask);
                
                //- disable sending exception packet and copy ex_log to share space.
                cc_sys_disable_excep_tx = KAL_TRUE;
                
                //- copy exception log from peer.
                p_peer_ex_log = CC_IRQ_SYS_GET_EX_LOG_ADDR();
                kal_mem_cpy((void*)cc_sys_ex_log_from_peer, p_peer_ex_log, CC_SYS_CTRL_SRAM_SIZE);
                
                kal_fatal_error_handler(KAL_ERROR_C2K_EXCP, CC_IRQ_SYS_PEER_TRIGGER_EXCEP);
                
                //- kill build warning.
                CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
           }
            /* Init HS */
            else if (cc_sys_state == CC_IRQ_SYS_STATE_INIT && sys_hdr->ctrl_type == CC_IRQ_SYS_PKT_TYPE_INIT_HS)
            {
//                kal_uint32 peer_version;

                /* Platform-dependent */
                dhl_trace(TRACE_INFO, 0, MDIPC_SYS_STATE_RX_INIT_HS);

#if 0                
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif

                ASSERT(cc_sys_ping_timer_id);
                ASSERT(cc_sys_ping_ack_timer_id);

                kal_set_timer(cc_sys_ping_timer_id, cc_sys_ping_timer_cb, NULL, KAL_TICKS_5_SEC * 2, KAL_TICKS_5_SEC * 2);
                
                cc_sys_state_trans_running();
            }
            else if (cc_sys_state == CC_IRQ_SYS_STATE_RUNNING && sys_hdr->ctrl_type == CC_IRQ_SYS_PKT_TYPE_PING_ACK)
            {
                /* cancel timer for ack timeout */
                kal_cancel_timer(cc_sys_ping_ack_timer_id);
            	
                /* log */
                dhl_trace(TRACE_INFO, 0, MDIPC_SYS_PING_RX);
                cc_sys_status_sync_rx_time[cc_sys_status_sync_rx_time_index] = ust_get_current_time();
                cc_sys_status_sync_rx_time_index = (cc_sys_status_sync_rx_time_index + 1) % CC_SYS_STS_SYNC_LOG_MAX;
            }			
            /* Undefined combination */
            else
            {
                EXT_ASSERT(0, cc_sys_state, sys_hdr->ctrl_type, 0);
            }
        }
        break;
    case CC_IRQ_SYS_OP_MSG:
        {
            if (CC_IRQ_SYS_STATE_ASYNC == cc_sys_state)
                return;
        	
            cc_irq_msg_isr((void*)para0, para1);
        }
        break;
    case CC_IRQ_SYS_OP_MISC:
        {
            cc_irq_sys_pkt_misc_t *misc_hdr = (cc_irq_sys_pkt_misc_t *)sys_hdr;

            if (CC_IRQ_SYS_STATE_ASYNC == cc_sys_state)
                return;
            
            EXT_ASSERT(cc_sys_state == CC_IRQ_SYS_STATE_RUNNING, cc_sys_state, misc_hdr->ext_id, 0);			
            ASSERT(misc_hdr->ext_id < CC_IRQ_SYS_USER_CB_NUMBER);
            EXT_ASSERT(cc_irq_sys_misc_cb[misc_hdr->ext_id] != NULL, misc_hdr->ext_id, 0, 0);

            if(misc_hdr->ext_id == CC_IRQ_USER_RX_INDEX_OFFSET(CC_IRQ_SYS_USER_MD3MD1_EPOF))
            {/* MD3 receive EPOF, tell MD1 to disable polling */

                kal_uint32 usc;

                /* cancel both timer for polling */            
                kal_cancel_timer(cc_sys_ping_timer_id);            
                kal_cancel_timer(cc_sys_ping_ack_timer_id);
 				
                /* log */
                dhl_trace(TRACE_INFO, 0, MDIPC_SYS_EPOF_SYNC);
                
                /* EMM log */
                CC_IRQ_USC(usc);
                EMM_WriteDbgInfo(EMM_CC_IRQ_MD3_PWR_OFF_IND, &usc);

                CC_IRQ_SET_DISABLE();            
                cc_sys_state_trans(cc_sys_state, CC_IRQ_SYS_STATE_ASYNC);
            }
			
            cc_irq_sys_misc_cb[misc_hdr->ext_id](para0 + sizeof(cc_irq_sys_pkt_hdr_t), para1 - sizeof(cc_irq_sys_pkt_hdr_t), 0);
        }
        break;
    default:
        ASSERT(0);
    }
}

void cc_sys_comm_init_phase2()
{
    cc_irq_sys_pkt_ctrl_t hdr;
    kal_int32             ret;

    /* send init HS packet */
    /* trigger cc irq to notify another core */
    hdr.op_id = CC_IRQ_SYS_OP_CTRL;
    hdr.ctrl_type = CC_IRQ_SYS_PKT_TYPE_INIT_HS;
    hdr.reserved = 0;
    
    /* enable TX for init HS */
    CC_IRQ_SET_ENABLE();

    ret = cc_sys_comm_tx(NULL, 0, (cc_irq_sys_pkt_hdr_t*)&hdr);
    ASSERT(ret == CC_IRQ_SUCCESS);
    /* disable TX */
    CC_IRQ_SET_DISABLE();
}

void cc_sys_comm_init()
{
#if !defined(__CC_IRQ_UT__)    
#if 0
/* under construction !*/
/* under construction !*/
#endif    

    /* Important!! Assume that AP will reset PCCIF. */
    /* If the assumption is wrong, md need to do the reset itself */
#if 0    
/* under construction !*/
/* under construction !*/
#endif


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
#endif


    /* Important!! Assume that AP will reset PCCIF. */
    /* If the assumption is wrong, md need to do the reset itself */
#if 0    
/* under construction !*/
#endif

#else    /* __CC_IRQ_UT__ */

    /* in CC IRQ UT case, bypass init handshake, and set TX/RX enable */
    CC_IRQ_SET_ENABLE();

#endif

    cc_irq_register_callback(CC_IRQ_SYS_RX_INDEX, cc_sys_comm_cb);
    cc_irq_msg_init();
    cc_irq_unmask(CC_IRQ_SYS_RX_INDEX);
    
    /* init timer id */    
    cc_sys_ping_timer_id    = kal_create_timer("CC_PING_TIMER");
    cc_sys_ping_ack_timer_id = kal_create_timer("CC_PING_ACK_TIMER");
}

kal_int32 cc_irq_user_register_cb(kal_uint32 user_index, CC_IRQ_CALLBACK_P user_cb)
{
    if (!CC_IRQ_USER_RX_INDEX_IS_IN_RANGE(user_index) || user_cb == NULL)
    {
        return CC_IRQ_ERR_PARAM;
    }

    user_index = CC_IRQ_USER_RX_INDEX_OFFSET(user_index);

    cc_irq_sys_misc_cb[user_index] = user_cb;
    
    return CC_IRQ_SUCCESS;
}

kal_int32 cc_irq_user_tx(kal_uint32 user_index, void *addr, kal_uint32 length)
{
    cc_irq_sys_pkt_misc_t hdr;

    if (!CC_IRQ_USER_TX_INDEX_IS_IN_RANGE(user_index) || addr == NULL || length > CC_IRQ_BUFF_MAX - sizeof(cc_irq_sys_pkt_hdr_t))
        return CC_IRQ_ERR_PARAM;

    hdr.op_id = CC_IRQ_SYS_OP_MISC;
    hdr.ext_id = CC_IRQ_USER_TX_INDEX_OFFSET(user_index);
    hdr.reserved = 0;
    
    return cc_sys_comm_tx(addr, length, (cc_irq_sys_pkt_hdr_t*)&hdr);
}

/* called by exception handler */
void cc_sys_comm_excep_handling(void* tx_buff, kal_uint32 tx_buff_len)
{
    cc_irq_sys_pkt_ctrl_t hdr;
    void*                 ex_log_addr;
       
    if (KAL_TRUE == cc_sys_disable_excep_tx || !CC_IRQ_OPTION_IS_ENABLED())
    {
        return;
    }

    ex_log_addr = CC_IRQ_SYS_GET_EX_LOG_ADDR();

    if (tx_buff && tx_buff_len)
    {
        /* copy data from ex log memory */
        kal_mem_cpy((void*)cc_sys_ctrl_sram_backup, ex_log_addr, CC_SYS_CTRL_SRAM_SIZE);
        /* ex log to ex log memory according to tx_buff_len. if tx_buff_len larger than tx_buff, only copy size of tx_buff */
        kal_mem_cpy(ex_log_addr, tx_buff, (tx_buff_len>=CC_SYS_CTRL_SRAM_SIZE)?CC_SYS_CTRL_SRAM_SIZE:tx_buff_len);
    }

    if (cc_sys_state == CC_IRQ_SYS_STATE_INIT)
    {
        CC_IRQ_SET_ENABLE();
    }

    /* notify another core the exception status */
    hdr.op_id = CC_IRQ_SYS_OP_CTRL;
    hdr.ctrl_type = CC_IRQ_SYS_PKT_TYPE_EXCEP;
    hdr.reserved = 0;
    cc_sys_last_excep_tx_ret = cc_sys_comm_tx(NULL, 0, (cc_irq_sys_pkt_hdr_t*)&hdr);

    CC_IRQ_SET_DISABLE();
}

/* MD3 is alive or not ==> If MD3 is alive, we should wait his EPOF notification when we receive EPOF */
kal_uint32 cc_sys_get_MD3_status()
{
    return  cc_sys_MD3_status;
}
