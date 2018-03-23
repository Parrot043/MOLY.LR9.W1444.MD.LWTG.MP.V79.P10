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
 *   global_sap.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   This file provides the task index and module index configuration.
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

#ifndef GLOBAL_SAP_H
#define GLOBAL_SAP_H

#include "global_sap_range.h"

MODULE_SAP_BEGIN(SAP_ID_GLOBAL_BEGIN)
    //this group is for NIL enum
    INVALID_SAP = SAP_ID_GLOBAL_BEGIN,
MODULE_SAP_END(SAP_ID_GLOBAL_NIL_CHECK_TAIL)

MODULE_SAP_BEGIN(SAP_ID_GLOBAL_MD1_BEGIN)
    #include "md1_sap.h"
    SAP_TAG_SAP_ID_GLOBAL_MD1_TAIL,
MODULE_SAP_END(SAP_ID_GLOBAL_MD1_TAIL)

MODULE_SAP_BEGIN(SAP_ID_GLOBAL_MD2_BEGIN)
    #include "md2_sap.h"
    SAP_TAG_SAP_ID_GLOBAL_MD2_TAIL,
MODULE_SAP_END(SAP_ID_GLOBAL_MD2_TAIL)

MODULE_SAP_BEGIN(SAP_ID_GLOBAL_MD3_BEGIN)
    #include "md3_sap.h"
    SAP_TAG_SAP_ID_GLOBAL_MD3_TAIL,
MODULE_SAP_END(SAP_ID_GLOBAL_MD3_TAIL)

#define IS_GLOBAL_MD1_SAP(global_sap) \
((global_sap>SAP_ID_GLOBAL_MD1_BEGIN)&&(global_sap<SAP_TAG_SAP_ID_GLOBAL_MD1_TAIL))
#define IS_GLOBAL_MD2_SAP(global_sap) \
((global_sap>SAP_ID_GLOBAL_MD2_BEGIN)&&(global_sap<SAP_TAG_SAP_ID_GLOBAL_MD2_TAIL))
#define IS_GLOBAL_MD3_SAP(global_sap) \
((global_sap>SAP_ID_GLOBAL_MD3_BEGIN)&&(global_sap<SAP_TAG_SAP_ID_GLOBAL_MD3_TAIL))

#endif /* GLOBAL_SAP_H */
