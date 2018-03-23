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
 *   cc_irq.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   This Module defines CC IRQ API.
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
#include "hisr_config.h"
#include "cc_irq_public.h"
#include "cc_irq_int.h"
#include "md_pccif_int.h"
#include "intrCtrl.h"
#include "cc_irq_adaptation.h"

#define CC_IRQ_PARA_DATA_LENGTH    (12UL)

CC_IRQ_CALLBACK_P cc_irq_cb[CC_IRQ_NUMBER];
#if defined(__UNIFIED_ISR_LEVEL__)
kal_uint32 cc_hisr_index_mapping[CC_IRQ_NUMBER] = {CC_IRQ_HISR_ID_MAPPING};
#else
extern void cc_irq_lisr(kal_uint32 irqid);
kal_hisrid cc_irq_hisrid;
kal_uint32 cc_irq_is_triggered[CC_IRQ_NUMBER];
#endif

/* CC_IRQ_0 (system or service) will be handled in HISR context */
const kal_uint32 cc_irq_cb_called_in_hisr[CC_IRQ_NUMBER] = {KAL_TRUE};

static void cc_irq_isr(kal_uint32 index)
{
    CC_IRQ_DRV_ISR(index);
}

static void cc_irq_interrupt_init()
{
    kal_uint32 i;
    
    for(i = 0; i < CC_IRQ_NUMBER; i++)
    {
        CC_IRQ_SET_SENSITIVITY_LEVEL(CC_IRQ_INTR_ID_START + i);
    }
    
    /* There is an assumption that CC IRQ ID at interrupt controller aligns CC IRQ number */
    /* ex: CC_IRQ_0 -> IRQ_x
           CC_IRQ_1 -> IRQ_x + 1
           CC_IRQ_2 -> IRQ_x + 2
           ...                    */
    /* Please check this during pre-sillicon. */
    CC_IRQ_DRV_REG_ISR(CC_IRQ_INTR_ID_START);
    CC_IRQ_DRV_REG_ISR(CC_IRQ_INTR_ID_START + 1);
    CC_IRQ_DRV_REG_ISR(CC_IRQ_INTR_ID_START + 2);
    CC_IRQ_DRV_REG_ISR(CC_IRQ_INTR_ID_START + 3);
    
    /* init ISR */    
#if !defined(__UNIFIED_ISR_LEVEL__)
    cc_irq_hisrid = kal_init_hisr(CC_SYS_HISR);
#endif
    
}

void cc_irq_init()
{
    if (!CC_IRQ_OPTION_IS_ENABLED())
        return;
	
    cc_irq_interrupt_init();
    CC_IRQ_DRV_INIT();

    /* init cc sys comm */
    cc_sys_comm_init();
}

kal_int32 cc_irq_mask(kal_uint32 index)
{
    if (!CC_IRQ_RX_INDEX_IS_IN_RANGE(index))
    {
        return CC_IRQ_ERR_PARAM;
    }
    
    index = CC_IRQ_RX_INDEX_OFFSET(index);    
    CC_IRQ_DRV_MASK(CC_IRQ_INTR_ID_START + index);
    
    return CC_IRQ_SUCCESS;
}

kal_int32 cc_irq_unmask(kal_uint32 index)
{
    if (!CC_IRQ_RX_INDEX_IS_IN_RANGE(index))
    {
        return CC_IRQ_ERR_PARAM;
    }
    
    index = CC_IRQ_RX_INDEX_OFFSET(index);    
    IRQUnmask(CC_IRQ_INTR_ID_START + index);
    
    return CC_IRQ_SUCCESS;
}

kal_int32 cc_irq_register_callback(kal_uint32 index, CC_IRQ_CALLBACK_P cb)
{
    if (!CC_IRQ_RX_INDEX_IS_IN_RANGE(index))
    {
        return CC_IRQ_ERR_PARAM;
    }

    if (NULL == cb)
    {
        return CC_IRQ_ERR_PARAM;
    }

    index = CC_IRQ_RX_INDEX_OFFSET(index);    
    cc_irq_cb[index] = cb;
    
    return CC_IRQ_SUCCESS;
}

kal_int32 cc_irq_trigger_interrupt(kal_uint32 index, kal_uint32 para0, kal_uint32 para1, kal_uint32 para2)
{
    kal_uint32 savedMask;
    kal_int32  ret;

    if (!CC_IRQ_TX_INDEX_IS_IN_RANGE(index))
    {
        return CC_IRQ_ERR_PARAM;
    }
    
    index = CC_IRQ_TX_INDEX_OFFSET(index);    

    CC_IRQ_DRV_MASK_ALL_INTERRUPT(savedMask);
    if (CC_IRQ_IS_TX_RESOURCE_AVAIL(index, CC_IRQ_PARA_DATA_LENGTH))
    {
        if (!CC_IRQ_IS_ENABLED())
        {
            CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
            return CC_IRQ_ERR_PEER_ASYNC;
        }
    	
        CC_IRQ_ENQUEUE_PARA(index, para0, para1, para2);
        CC_IRQ_TRIGGER_INTR(index);
        ret = CC_IRQ_SUCCESS;
    }
    else
    {
        ret = CC_IRQ_ERR_CHANNEL_FULL;
    }
    CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
    
    return ret;
}

kal_int32 cc_irq_trigger_interrupt_with_buff(kal_uint32 index, void *addr, kal_uint32 length)
{
    kal_uint32 savedMask;
    kal_int32  ret;

    if (!CC_IRQ_TX_INDEX_IS_IN_RANGE(index) || addr == NULL || length > CC_IRQ_BUFF_MAX)
    {
        return CC_IRQ_ERR_PARAM;
    }
    
    index = CC_IRQ_TX_INDEX_OFFSET(index);    

    CC_IRQ_DRV_MASK_ALL_INTERRUPT(savedMask);
    if (CC_IRQ_IS_TX_RESOURCE_AVAIL(index, length))
    {
        if (!CC_IRQ_IS_ENABLED())
        {
            CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
            return CC_IRQ_ERR_PEER_ASYNC;
        }
            
        CC_IRQ_ENQUEUE_BUFF(index, addr, length);
        CC_IRQ_TRIGGER_INTR(index);
        ret = CC_IRQ_SUCCESS;
    }
    else
    {
        ret = CC_IRQ_ERR_CHANNEL_FULL;
    }
    CC_IRQ_DRV_RESTORE_ALL_INTERRUPT(savedMask);
    
    return ret;
}

#if defined(__UNIFIED_ISR_LEVEL__)
/* LISR to HISR case */

/* Platform-Dependent function */
void cc_irq_hisr()
{
    kal_uint32 hisr_id, index;
	
    hisr_id = kal_get_current_hisr_index();

    for(index = 0; index < CC_IRQ_NUMBER; index++)
    {
        if(hisr_id == cc_hisr_index_mapping[index])
            break;
    }
    cc_irq_isr(index);
}

#else    /* defined(__UNIFIED_ISR_LEVEL__) */

/* Platform-Dependent function */
void cc_irq_hisr()
{
    kal_uint32 index;
 
    /* TODO: add time profile for callback function */
    for (index = 0; index < CC_IRQ_NUMBER; index++)
    {
        if (cc_irq_is_triggered[index] == KAL_TRUE)
        {
            cc_irq_isr(index);
            cc_irq_is_triggered[index] = KAL_FALSE;
            cc_irq_unmask(index);
        }
    }
}

/* Platform-Dependent function */
void cc_irq_lisr(kal_uint32 irqid)
{
    kal_uint32 index;

    /* remap irqid from line to code */
extern kal_uint8 irqLine[];
    irqid = irqLine[irqid];

    index = irqid - CC_IRQ_INTR_ID_START;
    
    /* case for callback being handled in HISR */
    if (cc_irq_cb_called_in_hisr[index] == KAL_TRUE)
    {
        /* LISR shouldn't be called again before it is handled in HISR */
        ASSERT(cc_irq_is_triggered[index] == KAL_FALSE);
        
        cc_irq_is_triggered[index] = KAL_TRUE;
        kal_activate_hisr(cc_irq_hisrid);
        cc_irq_mask(index);
    }
    /* case for callback being handled in LISR */
    else
    {
        cc_irq_isr(index);
    }
}
#endif



/* User request for MD1/MD2. No request in MD3 */
/* Plan to phase out if no future request */
kal_uint32* cc_irq_get_shared_vflag(kal_uint32 index, kal_uint32 vflag_id)
{
    if (index != CC_IRQ_MD1MD2_SYS && index != CC_IRQ_MD2MD1_SYS)
        return NULL;
    if (vflag_id >= CC_IRQ_VFLAG_MD1MD2_END)
        return NULL;
    
    return (kal_uint32*)CC_IRQ_GET_VFLAG_BASE(index) + vflag_id;
}

void cc_irq_init_phase2()
{
    if (!CC_IRQ_OPTION_IS_ENABLED())
        return;
	
    cc_sys_comm_init_phase2();
}
