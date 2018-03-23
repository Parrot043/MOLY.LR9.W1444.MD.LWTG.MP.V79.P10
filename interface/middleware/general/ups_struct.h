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
 *   ups_struct.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 *     HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
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
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/

#ifndef UPS_STRUCT_H
#define UPS_STRUCT_H
/******************************************************************************/

#include "kal_general_types.h"
#include "kal_public_defs.h"

#include "ps_public_ups_enum.h"

/******************************************************************************/

//MSG_ID_UPS_BUSY_MODE_IND

//MSG_ID_UPS_UT_UART_DATA_IND
typedef struct {
    LOCAL_PARA_HDR
	kal_uint8 index;
	kal_uint8 string[128];
} ups_ut_uart_data_ind_struct;

//MSG_ID_UPS_UT_UART_DATA_REQ
typedef struct {
    LOCAL_PARA_HDR
	kal_uint16 port;
} ups_ut_uart_data_req_struct;

// MSG_ID_UPS_FLC_DATA_RESUME_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 pool_id;
} ups_flc_data_resume_ind_struct;

// MSG_ID_UPS_FLC_DATA_SUSPEND_IND
typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 pool_id;
} ups_flc_data_suspend_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 port;
    kal_uint8 context_id;
} l4cups_port_activate_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 src_id;
    kal_uint8 port;
    kal_uint8 context_id;
    kal_bool result;
} l4cups_port_activate_cnf_struct;

typedef struct {
    LOCAL_PARA_HDR
    kal_uint8 port;
    kal_uint8 context_id;
} l4cups_port_deactivate_ind_struct;

typedef struct {
    LOCAL_PARA_HDR
    mbim_terminate_enum type;
    kal_uint32 tid;
} mbim_close_req_struct;

typedef struct {
    LOCAL_PARA_HDR
    mbim_terminate_enum type;
    kal_uint32 tid;
} mbim_close_cnf_struct;

/******************************************************************************/
#endif
