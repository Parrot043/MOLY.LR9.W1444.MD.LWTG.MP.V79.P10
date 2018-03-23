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
 *    drv_features_f8f9bc.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is for the f8f9 driver features
 *
 * Author:
 * -------
 * -------
 *
 ****************************************************************************/

#ifndef __DRV_FEATURES_F8F9BC_H__
#define __DRV_FEATURES_F8F9BC_H__

#include "drv_features_chip_select.h"

	
#if defined(DRV_F8F9BC_6268_SERIES)  

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6268A_SERIES) 

#define __3G_F8F9BC_HW_DRV_V1__

#elif defined(DRV_F8F9BC_6268T_SERIES) 

#define __3G_F8F9BC_HW_DRV_V1__

#elif defined(DRV_F8F9BC_6268H_SERIES) 

#define __3G_F8F9BC_HW_DRV_V1__

#elif defined(DRV_F8F9BC_6270A_SERIES) 

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6276_SERIES)  

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6573_SERIES)  

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6575_SERIES)

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6280_SERIES)

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6583_SERIES)

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6572_SERIES)

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#elif defined(DRV_F8F9BC_6582_SERIES)

#define __3G_F8F9BC_HW_DRV_V1__
#define __3G_F8F9_THREE_SETS__

#endif

#endif /*End __DRV_FEATURES_F8F9BC_H__*/
