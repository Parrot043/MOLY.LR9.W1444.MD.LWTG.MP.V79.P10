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
 *    drv_features_6256.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is merged for MT6255 driver features.
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
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_FEATURES_6256_H
#define DRV_FEATURES_6256_H

#if  defined(MT6256)
/* Features for ACCDET */
#define DRV_ACCDET_6256_SERIES
/* Features for ADC */
#define DRV_ADC_6256_SERIES
/* Features for BMT */
#define DRV_BMT_6256_SERIES
/* Features for DISPLAY */
#define DRV_LCD_MT6256_SERIES
/* Features for G2D */

/* Features for GCU*/
#define DRV_GCU_6225_SERIES
/* Features for GIF */

/* Features for GPIO */
#define DRV_GPIO_6256_SERIES
/* Features for GPT*/
#define DRV_GPT_6276_SERIES

/* Features for SPI */
#define DRV_SPI_6256_SERIES

/* Features for HIF */
#define DRV_HIF_V2_SERIES

/* Features for I2C */
#define DRV_I2C_6256_SERIES
/* Features for IRDA */

/* Features for ISP */
#define DRV_ISP_6276_SERIES
/* Features for JPEG */
#define __DRV_GRAPHICS_JPEG_6256_SERIES__   // temporally turn it off for ic evaluation
/* Features for KBD*/
#define DRV_KBD_6238_SERIES
/* Features for MDP */
#define DRV_IDP_MT6256_SERIES
/* Features for MISC */
#define DRV_MISC_6255_SERIES
/* Features for MMSYSMISC */
#define DRV_MMSYSMISC_MT6256_SERIES
/* Features for MSDC */
#define DRV_MSDC_MT6256_SERIES
/* Features for PFC */

/* Features for PWM */
#define DRV_PWM_6255_SERIES
/* Features for RESIZER */

/* Features for ROTATOR */

/* Features for RTC */
#define DRV_RTC_6256_SERIES
/*Features for SIM*/
#define DRV_SIM_6256_SERIES
/* Features for SPI */

/* Features for STACK_SWITCH */

/* Features for TP */
#define DRV_TP_6256_SERIES
/* Features for UART */
#define DRV_UART_6256_SERIES
/* Features for USB */
#define DRV_USB_6256_SERIES
/* Features for VCODEC */

/* Features for VIDEO */

/* Features for WDT */
#define DRV_WDT_6217_SERIES

/// OPENGLES
#define __DRV_GRAPHICS_OPENGLES_HW_SUPPORT__
/*Above is MT6256*/
#endif /* MT6256*/
#endif   /*DRV_FEATURES_6256_H*/
