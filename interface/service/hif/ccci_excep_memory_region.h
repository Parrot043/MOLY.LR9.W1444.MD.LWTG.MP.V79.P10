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
 *   ccci_excep_memory_region.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Set ccci exception memory region 
 *
 * Author:
 * -------
 * -------
 *
 *
 * ==========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * 	[SHM] Add for low power - MP7
 *
 * removed!
 * removed!
 * [CCCI] Change exception share memory from 2M to 64K
 *
 * removed!
 * removed!
 * [CCCI] Change exception share memory from 2M to 64K
 *
 * removed!
 * removed!
 * [CCCI FS] Support CCCI FS exception mode.
 *
 * removed!
 * removed!
 * [CCCI FS] Support CCCI FS exception mode.
 * removed!
 * removed!
 * [CCCI] ccci new debug mechanism
 *
 * removed!
 * removed!
 * [CCCI] CCCI new debug mechanism
 * removed!
 * removed!
 * [CCCI] Add Bach share momory region config
 *
 *
 ****************************************************************************/
#if	defined(__HIF_CCIF_SUPPORT__) // Bach
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI, 976)   //- the region for CCCI debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCIFS_DUMP, 48)   //- the region for CCCI debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI_SEQ_DEBUG, 1024)   //- the region for CCCI seq debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_KAL , 2048)   //- the region for KAL
        X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER , 1024)	//- the region for low power 
#elif	defined(__HIF_CLDMA_SUPPORT__) || defined(__CCIFCORE_SUPPORT__)// Internal modem
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI, 976)   //- the region for CCCI debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCIFS_DUMP, 48)   //- the region for CCCI debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI_SEQ_DEBUG, 1024)   //- the region for CCCI seq debug
	#if     defined(MT6735)
        X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_KAL , 62464)	//- the region for KAL
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER , 1024)	//- the region for low power 
	#else
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_KAL , 2094080)	//- the region for KAL
        X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER , 1024)	//- the region for low power 
	#endif
#else // external modem
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI, 976)   //- the region for CCCI debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCIFS_DUMP, 48)   //- the region for CCCI debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_CCCI_SEQ_DEBUG, 1024)   //- the region for CCCI seq debug
	X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_KAL , 2048)	//- the region for KAL
        X_CCCI_EXCEP_MEMORY_CONF(CCCI_EXCEP_MEMORY_REGION_LOW_POWER , 1024)	//- the region for low power 
#endif
