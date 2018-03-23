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

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   md1_msgid.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   This file provides the msg id configuration.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef MD1_MSGID_H
#define MD1_MSGID_H

//do NOT use compile option in this file
//because compile option might be different among all MDs

	MSG_ID_UIM_SIM_APDU_ACCESS_REQ,
	MSG_ID_UIM_SIM_APDU_ACCESS_CNF,
	MSG_ID_UIM_SIM_ERROR_IND,
	MSG_ID_UIM_SIM_STATUS_IND,
	MSG_ID_UIM_SIM_RESET_IND,
	MSG_ID_UIM_SIM_SECURITY_CHANGE_IND,
	MSG_ID_UIM_SIM_AUTHENTICATE_REQ,
	MSG_ID_UIM_SIM_AUTHENTICATE_CNF,
	MSG_ID_UIM_SAT_TERMINAL_RSP_REQ,
	MSG_ID_UIM_SAT_TERMINAL_RSP_CNF,
	MSG_ID_UIM_SAT_ENVELOPE_REQ,
	MSG_ID_UIM_SAT_ENVELOPE_CNF,
	MSG_ID_UIM_SAT_FILE_CHANGE_RES,
	MSG_ID_UIM_SAT_PROACTIVE_CMD_IND,
	MSG_ID_UIM_SIM_READ_REQ,
	MSG_ID_UIM_SIM_READ_CNF,

	MSG_ID_BT_UIM_SIM_RESET_REQ,
	MSG_ID_BT_UIM_SIM_RESET_CNF,
	MSG_ID_BT_UIM_SIM_POWER_OFF_REQ,
	MSG_ID_BT_UIM_SIM_POWER_OFF_CNF,
	MSG_ID_BT_UIM_SIM_POWER_ON_REQ,
	MSG_ID_BT_UIM_SIM_POWER_ON_CNF,
	MSG_ID_UIM_PRL_READ_FINISH_IND, 

#endif /* MD1_MSGID_H */
