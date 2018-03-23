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
 *    drv_features_6235.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is merged for MT6235 driver features.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_FEATURES_6235_H
#define DRV_FEATURES_6235_H

#if  defined(MT6235)
/* Features for LCD */
#define DRV_LCD_MT6235_SERIES

/**** Features for Image Data Path -- START ****/
#define DRV_IDP_6235_SERIES
/**** Features for Image Data Path -- END ******/

/* Features for MSDC */
#define DRV_MSDC_MT6235_SERIES

/* Features for USB */
#define DRV_USB_6235_SERIES 					/* support USB 6238 SERIES IP */


/* Features for UPLL */
#define DRV_UPLL_6238_SERIES 					/* support UPLL 6238 SERIES IP */

/* Features for MP4 */
//#define DRV_MP4_6238_SERIES 						/* support MP4 6228 SERIES IP */

/* Features for I2C */
#define DRV_I2C_6225_BASIC_SERIES

/* Features for ADC */
#define DRV_ADC_6235_SERIES
#define DRV_TP_6235_SERIES

/* Features for GCU*/
#define DRV_GCU_6225_SERIES

/* Features for GPT*/
//#define DRV_GPT_6217_SERIES
#define DRV_GPT_6238_SERIES

/* Features for KBD*/
#define DRV_KBD_6238_SERIES

/* Features for PWM */
#define DRV_PWM_6238_SERIES
#define DRV_ALERTER_NOT_EXIST

/* Features for RTC */
#define DRV_RTC_6235_SERIES

/* Features for WDT */
#define DRV_WDT_6217_SERIES

/* Features for UART */
#define DRV_UART_6225_SERIES

/* Features for IrDA */
#define DRV_IRDA_6228_SERIES

/* Features for GPIO */
#define DRV_GPIO_6235_SERIES

/* Misc. driver featuers */
#define DRV_MISC_6235_SERIES

/* Features for Camera ISP */
#define DRV_ISP_6235_SERIES

#define __DRV_EINT_EDGE_TRIGGER_NOT_UNMASK__

//#define DRV_SPI_SUPPORT

/*storage cached transfer support*/
#define SIM_CACHED_SUPPORT

#ifdef __INNOFIDEI_IF202__
#define __MSDC_SD_SDIO__
#endif

/// G2D
#define __DRV_GRAPHICS_G2D_6235_SERIES__

/// JPEG
#define __DRV_GRAPHICS_JPEG_6235_SERIES__ 

/// Stack Switch
#define __DRV_GRAPHICS_STACK_SWITCH_6235_SERIES__

#define DRV_MM_POWER_CTRL_MT6235_SERIES

#define DRV_MM_INTMEM_MT6235_SERIES

/*Above is MT6235*/
#endif /* MT6235*/
#endif   /*DRV_FEATURES_6235_H*/
