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
 *   hif_mw_msgid.h
 *
 * Project:
 * --------
 *   TATAKA
 *
 * Description:
 * ------------
 *   HIF middleware related message identity definition
 *
 * Author:
 * -------
 *
 *==============================================================================
 *                 HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
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
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 * removed!
 *
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!! 
 *==============================================================================
 *******************************************************************************/

#ifndef __INC_HIF_MW_MSGID_H
#define __INC_HIF_MW_MSGID_H

#include "module_msg_range.h"

MODULE_MSG_BEGIN( MSG_ID_HIF_MW_CODE_BEGIN )

    MSG_ID_IPCORE_CODE_BEGIN = MSG_ID_HIF_MW_CODE_BEGIN,
    MSG_ID_IPCORE_LINK_UP_REQ,
    MSG_ID_IPCORE_LINK_DOWN_REQ,
    MSG_ID_LMS_DL_SDU,
    MSG_ID_LMS_NETIF_ATTACH,
    MSG_ID_IPCORE_PROCESS_UL_QUEUE_REQ,
    MSG_ID_IPCORE_RETRY_UL_RELOAD_REQ,
    MSG_ID_IPCORE_DL_PACKET_FILTERED_REQ,
    MSG_ID_IPCORE_UL_PACKET_FILTERED_REQ,
    MSG_ID_IPCORE_IP_UP_REQ,
    MSG_ID_IPCORE_IP_DOWN_REQ,
    MSG_ID_IPCORE_LINK_UP_IND,
    MSG_ID_IPCORE_IP_UP_IND,
    MSG_ID_IPCORE_LINK_UP_RSP,
    MSG_ID_IPCORE_IP_UP_RSP,
    MSG_ID_IPCORE_QUERY_INFO_REQ,
    MSG_ID_IPCORE_QUERY_INFO_CNF,
    MSG_ID_IPCORE_DL_PACKET_FILTERED_WITH_INFO_REQ,
    MSG_ID_IPCORE_UL_PACKET_FILTERED_WITH_INFO_REQ,
    MSG_ID_IPCORE_SET_UL_THROTTLE,
    MSG_ID_IPCORE_CODE_TAIL = MSG_ID_IPCORE_CODE_BEGIN + 40,

    MSG_ID_ETHERCORE_CODE_BEGIN,
    MSG_ID_ETHERCORE_HANDLE_PACKET_REQ,
    MSG_ID_ETHERCORE_LINK_UP_REQ,
    MSG_ID_ETHERCORE_LINK_DOWN_REQ,
    MSG_ID_ETHERCORE_CODE_TAIL = MSG_ID_ETHERCORE_CODE_BEGIN + 40,

    MSG_ID_DHCP4C_CODE_BEGIN,
    MSG_ID_DHCP4C_ACTIVATE_REQ,
    MSG_ID_DHCP4C_DEACTIVATE_REQ,
    MSG_ID_DHCP4C_PACKET_REQ,
    MSG_ID_DHCP4C_ACTIVATE_RSP,
    MSG_ID_DHCP4C_DEACTIVATE_RSP,
    MSG_ID_DHCP4C_IP_UP_IND,
    MSG_ID_DHCP4C_IP_DOWN_IND,
    MSG_ID_DHCP4C_PACKET_IND,
    MSG_ID_DHCP4C_CODE_TAIL = MSG_ID_DHCP4C_CODE_BEGIN + 40,

    MSG_ID_NDPC_CODE_BEGIN,
    MSG_ID_NDPC_ACTIVATE_REQ,
    MSG_ID_NDPC_DEACTIVATE_REQ,
    MSG_ID_NDPC_PACKET_REQ,
    MSG_ID_NDPC_ACTIVATE_RSP,
    MSG_ID_NDPC_DEACTIVATE_RSP,
    MSG_ID_NDPC_IP_UP_IND,
    MSG_ID_NDPC_IP_DOWN_IND,
    MSG_ID_NDPC_PACKET_IND,
    MSG_ID_NDPC_CODE_TAIL = MSG_ID_NDPC_CODE_BEGIN + 40,

    MSG_ID_RNDIS_CODE_BEGIN,
    MSG_ID_RNDIS_RELOAD_UL_BUFFER_REQ,
    MSG_ID_RNDIS_START_HAD_REQ,
    MSG_ID_RNDIS_START_DATA_PATH_REQ,
    MSG_ID_RNDIS_STOP_DATA_PATH_REQ,
    MSG_ID_RNDIS_DISCONNECTED_DEV_SHUTDOWN_REQ,
    MSG_ID_RNDIS_CONNECTED_DEV_SHUTDOWN_REQ,
    MSG_ID_RNDIS_CODE_TAIL = MSG_ID_RNDIS_CODE_BEGIN + 40,

    MSG_ID_CCCI_TTY_CODE_BEGIN,
    MSG_ID_CCCI_TTY_SESSION_INIT_REQ,
    MSG_ID_CCCI_TTY_SESSION_DEINIT_REQ,
    MSG_ID_CCCI_TTY_UL_DEQUEUE_REQ,
    MSG_ID_CCCI_TTY_CODE_TAIL = MSG_ID_CCCI_TTY_CODE_BEGIN + 40,

    MSG_ID_CCMNI_CODE_BEGIN,
    MSG_ID_CCMNI_LINK_UP_REQ,
    MSG_ID_CCMNI_LINK_DOWN_REQ,
    MSG_ID_CCMNI_SESSION_INIT_REQ,
    MSG_ID_CCMNI_SESSION_DEINIT_REQ,
    MSG_ID_CCMNI_RETRY_UL_RELOAD_REQ,
    MSG_ID_CCMNI_CODE_TAIL = MSG_ID_CCMNI_CODE_BEGIN + 40,

	MSG_ID_MS_CODE_BEGIN,
	MSG_ID_MS_CTRL_USB_SETUP_PKT,
	MSG_ID_MS_CTRL_USB_CTRL_COMPLETED,
	MSG_ID_MS_CTRL_USB_ATTACHED,
	MSG_ID_MS_CTRL_USB_SUSPENDING,
	MSG_ID_MS_CTRL_USB_RESUME,
	MSG_ID_MS_CTRL_USB_DETACHING,
	MSG_ID_MS_CTRL_USB_RESET,
	MSG_ID_MS_CTRL_USB_SPEED_CHANGED,	
	MSG_ID_MS_CTRL_REINIT_REQ,
	MSG_ID_MS_CTRL_UL_RELOAD_REQ,
	MSG_ID_MS_DATA_RX_COMPLETED,
	MSG_ID_MS_DATA_TX_COMPLETED,
	MSG_ID_MS_BULKIN_EP_STALL,
	MSG_ID_MS_BULKOUT_EP_STALL,
	MSG_ID_MS_SET_USB_MODE_REQ,
	MSG_ID_MS_RESET_DEVICE_REQ,
	MSG_ID_MS_CODE_TAIL = MSG_ID_MS_CODE_BEGIN + 40,

    MSG_ID_AOMGR_CODE_BEGIN,
    MSG_ID_AOMGR_LINK_DOWN_IND,
    MSG_ID_AOMGR_CODE_TAIL = MSG_ID_AOMGR_CODE_BEGIN + 40,

    MSG_ID_USBCORE_CODE_BEGIN,
    MSG_ID_USBCORE_SUSPEND_TO_IDLE,
    MSG_ID_USBCORE_IDLE_NOTIFY_TO_L4,
    MSG_ID_USBCORE_CODE_TAIL = MSG_ID_USBCORE_CODE_BEGIN + 20,

    MSG_ID_CDCECM_CODE_BEGIN,
    MSG_ID_CDCECM_RELOAD_UPLINK_REQ,
    MSG_ID_CDCECM_START_DATA_PATH_REQ,
    MSG_ID_CDCECM_STOP_DATA_PATH_REQ,
    MSG_ID_CDCECM_CODE_TAIL = MSG_ID_CDCECM_CODE_BEGIN + 20,

    MSG_ID_USBCLASS_USBCORE_ESL_CODE_BEGIN,
    MSG_ID_USBCLASS_USBCORE_ESL_ENTER_CONNECTED_STATE_REQ,
    MSG_ID_USBCLASS_USBCORE_ESL_CODE_TAIL = MSG_ID_USBCLASS_USBCORE_ESL_CODE_BEGIN + 10,

MODULE_MSG_END( MSG_ID_HIF_MW_CODE_TAIL )

#endif /* __INC_HIF_MW_MSGID_H */
