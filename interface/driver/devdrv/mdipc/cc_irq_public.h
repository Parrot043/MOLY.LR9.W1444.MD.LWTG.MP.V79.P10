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
 *   cc_irq_public_api.h
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

#ifndef __CC_IRQ_PUBLIC_API_H__
#define __CC_IRQ_PUBLIC_API_H__

typedef enum {
    CC_IRQ_MD1MD2_BASE = 0UL,
    /* MD1 to MD2 */
    CC_IRQ_MD1MD2_START = CC_IRQ_MD1MD2_BASE,
    CC_IRQ_MD1MD2_SYS = CC_IRQ_MD1MD2_START,
    CC_IRQ_MD1MD2_END,
    /* MD1 to MD2 */
    CC_IRQ_MD2MD1_START = CC_IRQ_MD1MD2_END,
    CC_IRQ_MD2MD1_SYS = CC_IRQ_MD2MD1_START,
    CC_IRQ_MD2MD1_END
} CC_IRQ_ID_T;

#define CC_IRQ_MD1MD2_NUMBER    (CC_IRQ_MD1MD2_END - CC_IRQ_MD1MD2_START)
#define CC_IRQ_MD2MD1_NUMBER    (CC_IRQ_MD2MD1_END - CC_IRQ_MD2MD1_START)

#define CC_IRQ_BUFF_MAX         60
#define CC_IRQ_GROUP_MAX        0x20UL
#define CC_IRQ_GROUP_MASK       (CC_IRQ_GROUP_MAX - 1)

typedef enum {
    CC_IRQ_SUCCESS = 0,
    CC_IRQ_ERR_PARAM = -0x1001,
    CC_IRQ_ERR_CHANNEL_FULL = -0x1002,
    CC_IRQ_ERR_PEER_ASYNC = -0x1003
} CC_IRQ_RET_STATUS_T;

typedef enum {
    /* MD1 <-> MD2 */
    CC_IRQ_VFLAG_2G_RF_BAND_SYNC,
    CC_IRQ_VFLAG_MD1MD2_END
} CC_IRQ_VFLAG_INDEX_T;

/* CCIRQ user index */
typedef enum {
    CC_IRQ_SYS_USER_MD1MD2_START = 0,
    /* ==== Start of MD1 to MD2 user index ==== */
    CC_IRQ_SYS_USER_MD1MD2_RESERVED = CC_IRQ_SYS_USER_MD1MD2_START,
    /* ==== End of MD1 to MD2 user index ==== */
    CC_IRQ_SYS_USER_MD1MD2_END,
    CC_IRQ_SYS_USER_MD2MD1_START = CC_IRQ_SYS_USER_MD1MD2_END,
    /* ==== Start of MD2 to MD1 user index ==== */ /* Actually, MD2 means MD3(C2K), we correct it for user to avoid confusing.*/
    CC_IRQ_SYS_USER_MD3MD1_EPOF = CC_IRQ_SYS_USER_MD2MD1_START,
    /* ==== End of MD2 to MD1 user index ==== */
    CC_IRQ_SYS_USER_MD2MD1_END
} CC_IRQ_SYS_USER_INDEX_T;

#define CC_IRQ_SYS_USER_MD1MD2_NUMBER    (CC_IRQ_SYS_USER_MD1MD2_END - CC_IRQ_SYS_USER_MD1MD2_START)
#define CC_IRQ_SYS_USER_MD2MD1_NUMBER    (CC_IRQ_SYS_USER_MD2MD1_END - CC_IRQ_SYS_USER_MD2MD1_START)


typedef void (*CC_IRQ_CALLBACK_P)(kal_uint32 para0, kal_uint32 para1, kal_uint32 para2);

extern void cc_irq_init();
extern void cc_irq_init_phase2();
extern kal_int32 cc_irq_mask(kal_uint32 index);
extern kal_int32 cc_irq_unmask(kal_uint32 index);
extern kal_int32 cc_irq_register_callback(kal_uint32 index, CC_IRQ_CALLBACK_P cb);
extern kal_int32 cc_irq_trigger_interrupt(kal_uint32 index, kal_uint32 para0, kal_uint32 para1, kal_uint32 para2);
extern kal_int32 cc_irq_trigger_interrupt_with_buff(kal_uint32 index, void *addr, kal_uint32 length);

extern kal_int32 cc_irq_msg_send5(module_type _src_mod_id, module_type _dest_mod_id, sap_type _sap_id, msg_type _msg_id,
                   local_para_struct *_local_para_ptr);

extern kal_uint32* cc_irq_get_shared_vflag(kal_uint32 index, kal_uint32 vflag_id);

extern kal_int32 cc_irq_user_tx(kal_uint32 user_index, void *addr, kal_uint32 length);
extern kal_int32 cc_irq_user_register_cb(kal_uint32 user_index, CC_IRQ_CALLBACK_P user_cb);

extern void cc_sys_comm_excep_handling(void* tx_buff, kal_uint32 tx_buff_len);
extern kal_uint32 cc_sys_get_MD3_status();

#endif
