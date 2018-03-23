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
 *   md_pccif.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This Module defines PCCIF driver behavior
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
#include "md_pccif_hw.h"
#include "md_pccif_int.h"
#include "cc_irq_int.h"
#include "reg_base.h"
#include "intrCtrl.h"
#include "cc_irq_adaptation.h"

#define MD_PCCIF_GET_WRITE_ADDR_BASE(index)           (PCCIF_TX_SRAM_base + (index) * PCCIF_BUFFER_SIZE)
#define MD_PCCIF_GET_READ_ADDR_BASE(index)            (PCCIF_RX_SRAM_base + (index) * PCCIF_BUFFER_SIZE)

#define MD_PCCIF_CHL_PKT_SIZE    32

#define MD_PCCIF_HW_CHL_NUMBER_PER_IRQ                (PCCIF_CHANNEL_NUMBER / PCCIF_BUFF_NUMBER)
#define MD_PCCIF_HW_CHL_MASK                          ((1 << MD_PCCIF_HW_CHL_NUMBER_PER_IRQ) - 1)
#define MD_PCCIF_HW_CHL_START_OFF(index)              ((index) * MD_PCCIF_HW_CHL_NUMBER_PER_IRQ)
#define MD_PCCIF_HW_GET_CHL_MASK(index, chl_mask)     (((chl_mask) >> MD_PCCIF_HW_CHL_START_OFF(index)) & MD_PCCIF_HW_CHL_MASK)
#define MD_PCCIF_HW_CHL_IS_FULL(chl_mask)             (chl_mask == MD_PCCIF_HW_CHL_MASK)
#define MD_PCCIF_HW_CHL_IS_EMPTY(chl_mask)            (chl_mask == 0)

#define MD_PCCIF_GET_WRITE_PTR(index)         (md_pccif_tx_chl_ptr[index] * MD_PCCIF_CHL_PKT_SIZE + MD_PCCIF_GET_WRITE_ADDR_BASE(index))
#define MD_PCCIF_GET_READ_PTR(index)          (md_pccif_rx_chl_ptr[index] * MD_PCCIF_CHL_PKT_SIZE + MD_PCCIF_GET_READ_ADDR_BASE(index))

#define MD_PCCIF_MUTEX_MD1_KEY_1    0x3131444D    //- "_MD11"
#define MD_PCCIF_MUTEX_MD1_KEY_2    0x3231444D    //- "_MD12"
#define MD_PCCIF_MUTEX_MD2_KEY_1    0x3132444D    //- "_MD21"
#define MD_PCCIF_MUTEX_MD2_KEY_2    0x3232444D    //- "_MD22"

#define MD_PCCIF_MUTEX_MD1_TURN     0
#define MD_PCCIF_MUTEX_MD2_TURN     1

#if defined(__MD1__)    //- case for MD1
#define MD_PCCIF_SET_WRITE_PTR(index, val)    do { \
        p_pccif_share_space->md1md2_buff_ctrl[(index)].write_ptr = val; \
    } while(0)
#define MD_PCCIF_SET_READ_PTR(index, val)    do { \
        p_pccif_share_space->md2md1_buff_ctrl[(index)].read_ptr = val; \
    } while(0)
#else    //- case for MD2
#define MD_PCCIF_SET_WRITE_PTR(index, val)    do { \
        p_pccif_share_space->md2md1_buff_ctrl[(index)].write_ptr = val; \
    } while(0)
#define MD_PCCIF_SET_READ_PTR(index, val)    do { \
        p_pccif_share_space->md1md2_buff_ctrl[(index)].read_ptr = val; \
    } while(0)
#endif    //- end of case for MD2

#define MD_PCCIF_DBG_LOG_MAX    64

#define __MD_PCCIF_DBG_EN__

typedef struct {
    md_pccif_pkt_hdr_t hdr;
    kal_uint32 busy_msk_before_tx;
    kal_uint32 first_tx_address_in_sram;
    kal_uint32 last_tx_address_in_sram;
    kal_uint32 buff[CC_IRQ_BUFF_MAX / 4];
    kal_uint32 tx_msk;
    kal_uint8  next_tx_chl_ptr;
    kal_uint8  buff_len;
    kal_uint8  start_write_chl;
    kal_uint8  tx_chl_number;    
    kal_uint8  cc_irq_index;
    kal_uint8  dbg_log_updateing;
} md_pccif_dbg_tx_t;

typedef struct {
    kal_uint32 index;
    kal_uint32 hdr;
    kal_uint32 rx_chl;
    kal_uint32 ack_chl;
    kal_uint32 chl_number;
    kal_uint32 src_ptr;
    kal_uint32 buff[32];
    kal_uint32 length;
} md_pccif_dbg_rx_t;

md_pccif_dbg_tx_t md_pccif_dbg_log[MD_PCCIF_DBG_LOG_MAX];
kal_uint32        md_pccif_dbg_log_ptr = 0;
md_pccif_dbg_rx_t md_pccif_dbg_rx_log[MD_PCCIF_DBG_LOG_MAX];
kal_uint32        md_pccif_dbg_rx_log_ptr = 0;

volatile md_pccif_ctrl_t * const p_pccif_share_space = (md_pccif_ctrl_t*)PCCIF_CTRL_SRAM_base;
kal_uint32 md_pccif_tx_chl_ptr[PCCIF_BUFF_NUMBER];
kal_uint32 md_pccif_rx_chl_ptr[PCCIF_BUFF_NUMBER];
kal_uint32 tx_chl_number, tx_chl_mask;
kal_uint32 rx_chl_number[PCCIF_IRQ_NUMBER];
kal_uint32 md_pccif_do_runtime_reset = 0;
volatile kal_uint32 md_pccif_op_enable = KAL_FALSE;

kal_uint32 rx_dbg_chl_ptr[PCCIF_IRQ_NUMBER];

/* declare it as global variable instead stack to avoid extra consumption to thread stack size */
/* non-reentrant: interrupt will be disabled when the variable is accessed. */
/* if md_pccif_enqueue_buff() is enabled while interrupt is enabled, be sure to modified it to local variable */
kal_uint32 pccif_tmp_buff[CC_IRQ_BUFF_MAX / 4];
kal_uint8  md_pccif_loop_timeout = KAL_FALSE;

kal_uint32 md_pccif_is_init_hs_pkt();

extern CC_IRQ_CALLBACK_P cc_irq_cb[];

void md_pccif_local_hw_init()
{
    kal_uint32 i, tx_mask, savedMask;

    CC_IRQ_DRV_MASK_ALL_INTERRUPT(savedMask);
    /* set HW mask */
    tx_mask = (1 << MD_PCCIF_HW_CHL_NUMBER_PER_IRQ) - 1;
    for(i = 0; i < PCCIF_BUFF_NUMBER; i++)
    {
        *PCCIF_MASK(i) = tx_mask << (MD_PCCIF_HW_CHL_NUMBER_PER_IRQ * i);
    }

    for(i = 0; i < PCCIF_BUFF_NUMBER; i++)
    {
        md_pccif_tx_chl_ptr[i] = 0;
        md_pccif_rx_chl_ptr[i] = 0;
    }
    CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
    
    p_pccif_share_space->md1_version = CC_IRQ_VERSION;
    p_pccif_share_space->md1_md2_sched_notify = 0;
}

void md_pccif_init_phase2()
{
    kal_uint32 loop_start_time, loop_current_time, loop_dur;
	
    p_pccif_share_space->md1_md2_sched_notify = PCCIF_SYNC_IND;
    CC_IRQ_USC(loop_start_time);
    while(p_pccif_share_space->md2_md1_sched_notify != PCCIF_SYNC_IND)
    {
        // Add WDT kick here.
        
        CC_IRQ_USC(loop_current_time);
        CC_IRQ_GET_DURATION_US(loop_start_time, loop_current_time, loop_dur);
        
        if (loop_dur > CC_IRQ_SCHED_WAIT_TIMEOUT);
        {
            //- Loop timeout!!
            md_pccif_loop_timeout = KAL_TRUE;
            break;
        }
    }
    
    /* Add timer for status sync here */
    /* Check version in the 1st timeout or rx of sync pakcet handler */
}

kal_uint32 md_pccif_is_tx_res_avail(kal_uint32 index, kal_uint32 length)
{
    kal_uint32 chl_busy_mask, req_chl;
	
    /* Get used channel for this index */
    chl_busy_mask = *PCCIF_BUSY;
    chl_busy_mask = MD_PCCIF_HW_GET_CHL_MASK(index, chl_busy_mask);

    /* add header length */
    length += MD_PCCIF_HDR_LEN;

    /* 2. each channel can transmit 32 bytes. Calculate required channel number */
    tx_chl_number = (length / MD_PCCIF_CHL_PKT_SIZE) + ((length % MD_PCCIF_CHL_PKT_SIZE!=0)?1:0);
    ASSERT(tx_chl_number > 0 && tx_chl_number < MD_PCCIF_HW_CHL_NUMBER_PER_IRQ);
    
    /* 3. check whether there is enough TX channel */
    req_chl = 0;
    tx_chl_mask = 0;    
    while(req_chl != tx_chl_number)
    {
        tx_chl_mask |= (1 << ((md_pccif_tx_chl_ptr[index] + req_chl) % MD_PCCIF_HW_CHL_NUMBER_PER_IRQ));	
        req_chl++;
    }

    /* next tx channel is busy */
    if (chl_busy_mask & tx_chl_mask)
        return KAL_FALSE;

    /* dbg log */
#if defined(__MD_PCCIF_DBG_EN__)
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].dbg_log_updateing = 1;
    //- CC IRQ Index
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].cc_irq_index = index;
    //- TX channels used for TX (remapped) */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].tx_chl_number = tx_chl_number;
    //- Current busy channels (remapped) */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].busy_msk_before_tx = chl_busy_mask;
    //- Start channel for tx (remapped) */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].start_write_chl = md_pccif_tx_chl_ptr[index];
#endif
    
    return KAL_TRUE;
}

void md_pccif_enqueue_para(kal_uint32 index, kal_uint32 para0, kal_uint32 para1, kal_uint32 para2)
{
    md_pccif_pkt_hdr_t hdr;
    kal_uint32         *address;

    /* do not check range of index because this should be checked in caller */
    hdr.magic_number_2 = MD_PCCIF_HDR_MAGIC_NUMBER_2;
    hdr.index = index | CC_IRQ_MD1MD2_BASE;
    hdr.length = MD_PCCIF_HDR_LENGTH_PARA;
    hdr.type = MD_PCCIF_HDR_TYPE_PARA;
    hdr.magic_number_1 = MD_PCCIF_HDR_MAGIC_NUMBER_1;
    
    address = (kal_uint32*)MD_PCCIF_GET_WRITE_PTR(index);

    *(address + 0) = *(kal_uint32 *)&hdr;
    *(address + 1) = para0;
    *(address + 2) = para1;
    *(address + 3) = para2;
    
    /* dbg log */
#if defined(__MD_PCCIF_DBG_EN__)
    /* last data address of this packet */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].last_tx_address_in_sram = (kal_uint32)(address + 4) - 1;
    /* header content */
    *(kal_uint32 *)&md_pccif_dbg_log[md_pccif_dbg_log_ptr].hdr = *(kal_uint32 *)&hdr;
    /* packet content */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].buff[0] = para0;
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].buff[1] = para1;
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].buff[2] = para2;
#endif
}

static void pccif_mem_cpy(void *dst, void *src, kal_uint32 length)
{
    if ((kal_uint32)src % 4 == 0 && length % 4 == 0)
    {
        CC_IRQ_MEM_CPY(dst, src, length);
    }
    /* source is 4-byte align, length is not */
    else if ((kal_uint32)src % 4 == 0)
    {
        length += (4 - length % 4);
        CC_IRQ_MEM_CPY((void*)dst, src, length);
    }
    /* source and length are not 4 byte aligned */
    else
    {
       CC_IRQ_MEM_CPY((void*)pccif_tmp_buff, src, length);
       if (length % 4)
           length += (4 - length % 4);
       CC_IRQ_MEM_CPY(dst, (void*)pccif_tmp_buff, length);
    }
}

void md_pccif_enqueue_buff(kal_uint32 index, void *addr, kal_uint32 length)
{
    md_pccif_pkt_hdr_t hdr;
    kal_uint32         write_ptr;
    kal_uint32         *dst_addr;

     /* do not check range of index because this should be checked in caller */
    hdr.magic_number_2 = MD_PCCIF_HDR_MAGIC_NUMBER_2;
    hdr.index = index | CC_IRQ_MD1MD2_BASE;
    hdr.length = MD_PCCIF_HDR_LEN + length;
    hdr.type = MD_PCCIF_HDR_TYPE_BUFF;
    hdr.magic_number_1 = MD_PCCIF_HDR_MAGIC_NUMBER_1;
    
    dst_addr = (kal_uint32*)MD_PCCIF_GET_WRITE_PTR(index);
    write_ptr = (kal_uint32)dst_addr - MD_PCCIF_GET_WRITE_ADDR_BASE(index);

    /* write header */
    *dst_addr++ = *(kal_uint32*)&hdr;
    
    /* copy buffer */
    if (write_ptr + MD_PCCIF_HDR_LEN + length <= PCCIF_BUFFER_SIZE)
    {
        //kal_mem_cpy((void*)dst_addr, addr, length);
        pccif_mem_cpy((void*)dst_addr, addr, length);

        write_ptr = (kal_uint32)dst_addr + length;
    }
    /* wrap case */
    else
    {
        kal_uint32 cpy_len_h, cpy_len_l;
        
        cpy_len_h = PCCIF_BUFFER_SIZE - write_ptr - MD_PCCIF_HDR_LEN;
        cpy_len_l = length - cpy_len_h;
        pccif_mem_cpy((void*)dst_addr, addr, cpy_len_h);
        pccif_mem_cpy((void*)MD_PCCIF_GET_WRITE_ADDR_BASE(index), addr + cpy_len_h, cpy_len_l);
        
        write_ptr = (kal_uint32)MD_PCCIF_GET_WRITE_ADDR_BASE(index) + cpy_len_l;
    }

    /* dbg log */
#if defined(__MD_PCCIF_DBG_EN__)
    //- Write buffer length
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].buff_len = length;
    /* header content */
    *(kal_uint32 *)&md_pccif_dbg_log[md_pccif_dbg_log_ptr].hdr = *(kal_uint32 *)&hdr;
    /* last data address of this packet */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].last_tx_address_in_sram = write_ptr - 1;
    /* start address of this packet */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].first_tx_address_in_sram = (kal_uint32)dst_addr;
    /* copy buffer to debug log */
    CC_IRQ_MEM_CPY((void*)md_pccif_dbg_log[md_pccif_dbg_log_ptr].buff, addr, length);
#endif
}

void md_pccif_trigger_irq(kal_uint32 index)
{
    kal_uint32 pccif_busy, tx_chl;
	
    pccif_busy = *PCCIF_BUSY;
    
    //get physcial channel that will be transmit
    tx_chl = index * MD_PCCIF_HW_CHL_NUMBER_PER_IRQ + md_pccif_tx_chl_ptr[index];
    
    ASSERT((pccif_busy & (1 << tx_chl)) == 0);
    
    *PCCIF_BUSY = 1 << tx_chl;
    *PCCIF_TCHNUM = tx_chl;
    
    md_pccif_tx_chl_ptr[index] = (md_pccif_tx_chl_ptr[index] + tx_chl_number) % MD_PCCIF_HW_CHL_NUMBER_PER_IRQ;

    /* dbg log */
#if defined(__MD_PCCIF_DBG_EN__)
    /* updated write pointer */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].next_tx_chl_ptr = md_pccif_tx_chl_ptr[index];
    /* tx channel mask */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].tx_msk = 1 << tx_chl;
    /* update complete */
    md_pccif_dbg_log[md_pccif_dbg_log_ptr].dbg_log_updateing = 0;
    /* update debug log pointer */
    md_pccif_dbg_log_ptr = (md_pccif_dbg_log_ptr + 1) % MD_PCCIF_DBG_LOG_MAX;
#endif
}

void md_pccif_isr(kal_uint32 index)
{
    kal_uint32 buff[CC_IRQ_BUFF_MAX / sizeof(kal_uint32)];
    kal_uint32 chl_rx_mask, i, rx_chl_start, tmp_chl;
    kal_uint32 savedMask, log_index;
    
    /* get pended channel mask */
    chl_rx_mask = *PCCIF_RCHNUM;
    chl_rx_mask = MD_PCCIF_HW_GET_CHL_MASK(index, chl_rx_mask);
    rx_chl_start = md_pccif_rx_chl_ptr[index];

    /* scan each channel from md_pccif_rx_chl_ptr[index] until reach 0 */
    for (i = 0; i < MD_PCCIF_HW_CHL_NUMBER_PER_IRQ; i++)
    {
        tmp_chl = (rx_chl_start + i) % MD_PCCIF_HW_CHL_NUMBER_PER_IRQ;
        
        if (chl_rx_mask & (1 << tmp_chl))
        {
            md_pccif_pkt_hdr_t *hdr;
            kal_uint32         *src_addr;
            kal_uint32         length, ack_mask, rx_chl_number, read_ptr;

            /* get logging index */
            CC_IRQ_DRV_MASK_ALL_INTERRUPT(savedMask);
            log_index = md_pccif_dbg_rx_log_ptr;
            md_pccif_dbg_rx_log_ptr = (md_pccif_dbg_rx_log_ptr + 1) % MD_PCCIF_DBG_LOG_MAX;
            CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
    
            /* ======== Part 1 - copy buffer ======== */        	
            src_addr = (kal_uint32*)(tmp_chl * MD_PCCIF_CHL_PKT_SIZE + MD_PCCIF_GET_READ_ADDR_BASE(index));
            read_ptr = (kal_uint32)src_addr - MD_PCCIF_GET_READ_ADDR_BASE(index);
            hdr = (md_pccif_pkt_hdr_t*)src_addr++;
    
            length = hdr->length;
            ASSERT(length <= MD_PCCIF_HDR_LEN + CC_IRQ_BUFF_MAX);
            ASSERT(hdr->type < MD_PCCIF_HDR_TYPE_MAX);
            ASSERT(hdr->index == index);
    
            /* get occupied channel number according to length */
            rx_chl_number = (length / MD_PCCIF_CHL_PKT_SIZE) + ((length % MD_PCCIF_CHL_PKT_SIZE)?1:0);
    
            length -= MD_PCCIF_HDR_LEN;
    
            /* copy buffer */
            if (read_ptr + MD_PCCIF_HDR_LEN + length <= PCCIF_BUFFER_SIZE)
            {
                CC_IRQ_MEM_CPY((void*)buff, (void*)src_addr, length);
                read_ptr = read_ptr + length;
            }
            /* wrap case */
            else
            {
                kal_uint32 cpy_len_h, cpy_len_l;
                
                cpy_len_h = PCCIF_BUFFER_SIZE - read_ptr - MD_PCCIF_HDR_LEN;
                cpy_len_l = length - cpy_len_h;
                CC_IRQ_MEM_CPY((void*)buff, (void*)src_addr, cpy_len_h);
                CC_IRQ_MEM_CPY((void*)buff + cpy_len_h, (void*)MD_PCCIF_GET_READ_ADDR_BASE(index), cpy_len_l);
                read_ptr = cpy_len_l;
            }
            
            if (read_ptr & 0xF)
                read_ptr = (read_ptr & ~0xF) + 0x10;
            
            md_pccif_dbg_rx_log[log_index].index  = index;
            md_pccif_dbg_rx_log[log_index].hdr    = *(kal_uint32*)hdr;
            md_pccif_dbg_rx_log[log_index].length = length;
            md_pccif_dbg_rx_log[log_index].rx_chl = tmp_chl;
            md_pccif_dbg_rx_log[log_index].ack_chl = (tmp_chl - MD_PCCIF_HW_CHL_START_OFF(index) + rx_chl_number) % MD_PCCIF_HW_CHL_NUMBER_PER_IRQ;
            kal_mem_cpy(md_pccif_dbg_rx_log[log_index].buff, buff, length);
    
            /* is general RX is allowed?? */
            if (md_pccif_op_enable == KAL_TRUE)
            {
                if (hdr->type == MD_PCCIF_HDR_TYPE_PARA)
                    cc_irq_cb[index](buff[0], buff[1], buff[2]);
                else
                    cc_irq_cb[index]((kal_uint32)buff, length, 0);

                /* update md_pccif_rx_chl_ptr */
                ASSERT(tmp_chl + MD_PCCIF_HW_CHL_START_OFF(index) >= MD_PCCIF_HW_CHL_START_OFF(index));
                md_pccif_rx_chl_ptr[index] = (tmp_chl + rx_chl_number) % MD_PCCIF_HW_CHL_NUMBER_PER_IRQ;
            }
            else
            {    
                if (CC_IRQ_RX_INDEX_OFFSET(CC_IRQ_SYS_RX_INDEX) == index)
                {
                    cc_irq_cb[index]((kal_uint32)buff, length, 0);
                }
                else
                {
                    /* Only system packet is allowed before handshake */
                    EXT_ASSERT(0, index, 0, 0);
                }
            }
            
            /* if general RX is disabllowed, only process init handshake packet. */
           
           /* ACK channel */
            ack_mask = 1 << (tmp_chl + MD_PCCIF_HW_CHL_START_OFF(index));
            *PCCIF_ACK = ack_mask;

            /* when a channel is processed, clear the rx mask */
            /* if all the channels are processed, break */
            chl_rx_mask &= ~(1 << tmp_chl);
            if (chl_rx_mask == 0)
                break;
        }
    }
}

kal_uint32 md_pccif_get_user_ram_base()
{
    return (PCCIF_CTRL_SRAM_base + PCCIF_CTRL_SRAM_USER_SIZE);
}

#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__MD1__)
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#else
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
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#if defined(__MD1__)
/* under construction !*/
/* under construction !*/
#else
/* under construction !*/
/* under construction !*/
#endif
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
#endif

void md_pccif_set_enable()
{
    md_pccif_op_enable = KAL_TRUE;
}

void md_pccif_set_disable()
{
    md_pccif_op_enable = KAL_FALSE;
}

kal_uint32 md_pccif_is_enabled()
{
    return md_pccif_op_enable;
}

void* md_pccif_get_ctrl_sram_addr()
{
    return (void*)PCCIF_CTRL_SRAM_base;
}

kal_uint32 md_pccif_get_version()
{
    return p_pccif_share_space->md2_version;
}
