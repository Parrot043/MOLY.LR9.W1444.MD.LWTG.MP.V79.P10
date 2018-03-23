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
 *   md3_msgid.h
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

#ifndef MD3_MSGID_H
#define MD3_MSGID_H

//do NOT use compile option in this file
//because compile option might be different among all MDs
//MD3 is C2K
    /* C2K_LTE_SAP */
    MSG_ID_C2K_LTE_RAT_CHANGE_REQ            ,
    MSG_ID_C2K_LTE_RAT_CHANGE_CNF            ,

    /* GMSS_CSS_SAP */
    MSG_ID_GMSS_CSS_MCC_SEARCH_REQ           ,
    MSG_ID_GMSS_CSS_MCC_SEARCH_CNF           ,
    MSG_ID_GMSS_CSS_SYS_ACQUIRE_REQ          ,
    MSG_ID_GMSS_CSS_SYS_ACQUIRE_CNF          ,
    MSG_ID_GMSS_CSS_CS_REG_REQ               ,
    MSG_ID_GMSS_CSS_CS_REG_CNF               ,
    MSG_ID_GMSS_CSS_PS_REG_REQ               ,
    MSG_ID_GMSS_CSS_PS_REG_CNF               ,
    MSG_ID_GMSS_CSS_DEACTIVATE_REQ           ,
    MSG_ID_GMSS_CSS_DEACTIVATE_CNF           ,
    MSG_ID_GMSS_CSS_RAT_CHANGE_REQ           ,
    MSG_ID_GMSS_CSS_READY_IND                ,
    MSG_ID_GMSS_CSS_NOT_READY_IND            ,
    MSG_ID_GMSS_CSS_SYS_LOST_IND             ,
    MSG_ID_GMSS_CSS_SYS_RECOVERY_IND         ,
    MSG_ID_GMSS_CSS_1X_CONN_STATUS_IND       ,
    MSG_ID_GMSS_CSS_MMSS_FILE_UPDATE_IND     ,
    MSG_ID_GMSS_CSS_PS_CHANGE_IND            ,
    MSG_ID_GMSS_CSS_PS_CONN_STATUS_IND       ,
    MSG_ID_GMSS_CSS_MCC_CHANGE_IND           ,
    MSG_ID_GMSS_CSS_PS_DEREG_REQ             ,
    MSG_ID_GMSS_CSS_ACTIVE_SIM_INFO_REQ      ,

    /* LTE_C2K_SAP */
    MSG_ID_LTE_C2K_RAT_CHANGE_REQ            ,
    MSG_ID_LTE_C2K_RAT_CHANGE_CNF            ,

    /* VAL_RAC_SAP */
    MSG_ID_VAL_RAC_RAT_CHANGE_START_REQ      ,
    MSG_ID_VAL_RAC_RAT_CHANGE_FINISH_REQ     ,
    MSG_ID_MD3_DEBUG_TRACE_IND,

    /* CLC_EAS_SAP */
    MSG_ID_CLC_EAS_EARFCN_LIST_UPDATE_REQ    ,

    MSG_ID_C2K_EL1_TXPWR_BACKOFF_INFO_IND,
	MSG_ID_RRM_VAL_GSM_RF_STATUS_REQ,

    /* LTE_C2K_SAP */
    MSG_ID_EAS_CSS_SYS_SNIFFER_REQ           ,
    MSG_ID_EAS_CSS_SYS_SNIFFER_CNF           ,
    /* URR_C2K_SAP */
    MSG_ID_URR_VAL_UAS_TX_STATUS_REQ         ,
    
    /* ERRC_VAL_SAP */
    MSG_ID_ERRC_VAL_EAS_TX_STATUS_REQ        ,
#endif /* MD3_MSGID_H */
