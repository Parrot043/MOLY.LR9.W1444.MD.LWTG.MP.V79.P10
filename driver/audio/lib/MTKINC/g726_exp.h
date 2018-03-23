/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
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
 *
 * Filename:
 * ---------
 *   g726_exp.h
 *
 * Project:
 * --------
 *   
 *
 * Description:
 * ------------
 *   G726 codec interface API
 *
 * Author:
 * -------
 * -------
 *
 *------------------------------------------------------------------------------
 * $Revision:$ 1.0.0
 * $Modtime:$  
 * $Log:$
 *
 * removed!
 * [WCPSP00000711] [Audio][SWIP][G Series]Modification Check-In
 * .
 *
 * removed!
 * [WCPSP00000520] Remove g711plc, g726, g729, and g7231 assert functions
 * .
 *
 *
 *******************************************************************************/

#ifndef __G726_CODEC_DOT_H__
#define __G726_CODEC_DOT_H__

#ifdef __cplusplus
extern "C"{
#endif 

#include "g_series_exp.h"

#define G726_10MS_PCM_FRAME_SIZE_IN_BYTES 160

typedef enum {
    G726_BITRATE_16 = 2, 
    G726_BITRATE_24, 
    G726_BITRATE_32, 
    G726_BITRATE_40
} G726_BitRate;

typedef enum {
    G726_BR_16 = 20, 
    G726_BR_24 = 30, 
    G726_BR_32 = 40, 
    G726_BR_40 = 50, 
    G726_BR_NA = -1
} G726_FrameLen;

typedef struct {
    G726_BitRate BitRate;
} G726_Enc_Init_Param;

typedef struct {
    G726_BitRate BitRate;
} G726_Dec_Init_Param;

typedef struct {
    G726_BitRate BitRate;
} G726_Enc_Runtime_Param;

int G726_Dec_Set_Handle(G_Series_Handle *p_handle);
int G726_Enc_Set_Handle(G_Series_Handle *p_handle);

#ifdef __cplusplus
}
#endif 
#endif


