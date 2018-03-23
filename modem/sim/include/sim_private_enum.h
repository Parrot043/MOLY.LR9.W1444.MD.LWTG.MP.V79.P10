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
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2001
 *
 *******************************************************************************/

 /*******************************************************************************
 * Filename:
 * ---------
 *   sim_private_enum.h
 *
 * Project:
 * --------
 *   MAUI
 *
 * Description:
 * ------------
 *  Enum and Constant  provided by SIM task and inside-SIM task uses only
 *
 * Author:
 * -------
 * -------
 *
 *==============================================================================
 * 				HISTORY
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *==============================================================================
 *******************************************************************************/
#ifndef SIM_PRIVATE_ENUM_H
#define SIM_PRIVATE_ENUM_H


typedef enum
{
   SIM_SEEK_TYPE1_FROM_BEG=0x00,
   SIM_SEEK_TYPE1_FROM_BACK=0x01,
   SIM_SEEK_TYPE1_FROM_NEXT=0x02,
   SIM_SEEK_TYPE1_FROM_PREV=0x03,
   SIM_SEEK_TYPE2_FROM_BEG=0x10,
   SIM_SEEK_TYPE2_FROM_BACK=0x11,
   SIM_SEEK_TYPE2_FROM_NEXT=0x12,
   SIM_SEEK_TYPE2_FROM_PREV=0x13
}sim_seek_type_mode_enum;

typedef enum
{
    SFI_NONE    = 0x00,
    SFI_ECC,
    SFI_LI,
    SFI_AD,
    SFI_UST,
    SFI_EST,
    SFI_ACC,
    SFI_IMSI,
    SFI_KEYS,
    SFI_KEYSPS,
    SFI_UPLMN,
    SFI_LOCI,
    SFI_PSLOCI,
    SFI_FPLMN,
    SFI_CBMID,
    SFI_STARTHFN,
    SFI_THRESHOLD,
    SFI_OPLMN,
    SFI_HPPLMN,
    SFI_HPLMN,
    SFI_ICI,
    SFI_OCI,
    SFI_CCP2,
    SFI_ARR,
    SFI_EPSNSC,
    SFI_PNN,
    SFI_ONL,
    SFI_SPDI,
    SFI_ACM,
    SFI_EHPLMN,
    SFI_EPSLOCI,
    SFI_GSM_KC    = 0x01,
    SFI_GSM_KCGPRS    = 0x02
}usim_sfi_enum;

typedef enum
{
    SAT_RAT_GSM      = 0x00,
    SAT_RAT_UTRAN    = 0x03,
    SAT_RAT_C2K_1X   = 0x06,
    SAT_RAT_C2K_HRPD = 0x07,
    SAT_RAT_EUTRAN   = 0x08
}sat_rat_status_enum;   /* SAT - Access Technolog */


/******************************************************************************
 *
 * USIM Part
 *
 ******************************************************************************/

typedef enum
{
    USIM_PIN1_APP1 = 0x01,
    USIM_PIN1_APP2 = 0x02,
    USIM_PIN1_APP3 = 0x03,
    USIM_PIN1_APP4 = 0x04,
    USIM_PIN1_APP5 = 0x05,
    USIM_PIN1_APP6 = 0x06,
    USIM_PIN1_APP7 = 0x07,
    USIM_PIN1_APP8 = 0x08,    
    USIM_PIN_ADM1 = 0x0A,
    USIM_PIN_ADM2 = 0x0B,
    USIM_PIN_ADM3 = 0x0C,
    USIM_PIN_ADM4 = 0x0D,
    USIM_PIN_ADM5 = 0x0E,
    USIM_PIN_UNIV = 0x11,
    USIM_PIN2_APP1 = 0x81,
    USIM_PIN2_APP2 = 0x82,
    USIM_PIN2_APP3 = 0x83,
    USIM_PIN2_APP4 = 0x84,
    USIM_PIN2_APP5 = 0x85,
    USIM_PIN2_APP6 = 0x86,
    USIM_PIN2_APP7 = 0x87,
    USIM_PIN2_APP8 = 0x88,
    USIM_PIN_ADM6 = 0x8A,
    USIM_PIN_ADM7 = 0x8B,
    USIM_PIN_ADM8 = 0x8C,
    USIM_PIN_ADM9 = 0x8D,
    USIM_PIN_ADM10 = 0x8E
}usim_pin_type_enum;

typedef enum
{
    SFI_NOT_SUPPORT,
    SFI_FILE_ID,
    SFI_PROP_ID
} sfi_usage_enum;

typedef enum {
    USIM_STATUS_NO_IND,
    USIM_STATUS_APP_INIT,
    USIM_STATUS_APP_TERMINAL
} usim_status_opt_enum;

typedef enum {
    USIM_STATUS_FCP,
    USIM_STATUS_DF_NAME,
    USIM_STATUS_NO_RETURN = 0x0C
} usim_status_rsp_enum;

typedef enum
{
   NEXT_RECORD     = 0x02,
   PREVIOUS_RECORD = 0x03,
   ABSOLUTE_RECORD = 0x04,
   CURRENT_RECORD  = 0x04
}sim_record_access_mode_enum;

typedef enum
{
   TEST_SIM_RELATION_OR,
   TEST_SIM_RELATION_AND
}test_sim_relation_enum;

typedef enum
{
   SIM_AL_NORMAL_RESET,
   SIM_AL_EXPLICT_SIM_RESET  /* for usim_recovery_as_sim */
}sim_al_reset_type_enum;

typedef enum
{
    SIM_GSM_INSTRUCTION_CLASS = 0xa0
#ifdef __USIM_SUPPORT__		
    ,
    USIM_CLA_TYPE_0 = 0x00,
    USIM_CLA_TYPE_1 = 0x80,
    USIM_CLA_TYPE_2 = 0x40,
    USIM_CLA_TYPE_3 = 0xC0
#endif    
} sim_instruction_class_enum;


typedef enum
{
    SEL_APP_ACTIVATE = 0x00,
    SEL_APP_TERMINATE = 0x40
} usim_select_aid_ctrl_enum;

/* MAUI_02953154 */
typedef enum
{
    UICC_FORWARD_SEARCH = 0x04,    /* Start forward search from record indicated in P1 */
    UICC_BACKWARD_SEARCH = 0x05,  /* Start backward search from record indicated in P1 */
    UICC_ENHANCED_SEARCH = 0x06,    
    UICC_PROPRIETARY_SEARCH = 0x07
} uicc_search_record_mode_enum;

typedef enum
{
    SIM_SELECT = 0xa4,
    SIM_STATUS = 0xf2,
    SIM_READ_BINARY = 0xb0,
    SIM_UPDATE_BINARY = 0xd6,
    SIM_READ_RECORD = 0xb2,
    SIM_UPDATE_RECORD = 0xdc,
    SIM_SEEK = 0xa2,
    SIM_INCREASE = 0x32,
    SIM_VERIFY_CHV = 0x20,
    SIM_CHANGE_CHV = 0x24,
    SIM_DISABLE_CHV = 0x26,
    SIM_ENABLE_CHV = 0x28,
    SIM_UNBLOCK_CHV = 0x2c,
    SIM_INVALIDATE = 0x04,
    SIM_REHABILITATE = 0x44,
    SIM_RUN_GSM_ALGO = 0x88,
    SIM_SLEEP = 0xfa,
    SIM_GET_RESPONSE = 0xc0,
    SIM_TERMINAL_PROFILE = 0x10,
    SIM_ENVELOPE = 0xc2,
    SIM_FETCH = 0x12,
    SIM_TERMINAL_RESPONSE = 0x14,   
    USIM_SEARCH_RECORD = SIM_SEEK,
    USIM_AUTHENTICATE = SIM_RUN_GSM_ALGO,
    USIM_GET_CHALLENGE = 0x84,
    USIM_MANAGE_CHANNEL = 0x70,
    USIM_DEACTIVATE_FILE = SIM_INVALIDATE,
    USIM_ACTIVATE_FILE = SIM_REHABILITATE,
    USIM_MANAGE_SECURE_CHANNEL = 0x73,/* MAUI_03082391 */
    USIM_TRANSACT_DATA = 0x75,    
    USIM_RETRIEVE_DATA = 0xCB,
    USIM_SET_DATA = 0xDB,
    USIM_TERMINAL_CAPABILITY = 0xAA
} sim_instruction_code_enum;

#ifdef __USIM_SUPPORT__
/* USIM Key Reference */
typedef enum
{
    PIN1 = 0x01,
    PIN1_APP2 = 0x02,
    PIN1_APP3 = 0x03,
    PIN1_APP4 = 0x04,
    PIN1_APP5 = 0x05,
    PIN1_APP6 = 0x06,
    PIN1_APP7 = 0x07,
    PIN1_APP8 = 0x08,
    ADM1 = 0x0A,
    ADM2 = 0x0B,
    ADM3 = 0x0C,
    ADM4 = 0x0D,
    ADM5 = 0x0E,
    UNIV_PIN = 0x11,
    PIN2 = 0x81,
    PIN2_APP2 = 0x82,
    PIN2_APP3 = 0x83,
    PIN2_APP4 = 0x84,
    PIN2_APP5 = 0x85,
    PIN2_APP6 = 0x86,
    PIN2_APP7 = 0x87,
    PIN2_APP8 = 0x88,
    ADM6 = 0x8A,
    ADM7 = 0x8B,
    ADM8 = 0x8C,
    ADM9 = 0x8D,
    ADM10 = 0x8E
} usim_key_ref_enum;

typedef enum
{
    PIN1_IDX,
    PIN1_APP2_IDX,
    PIN1_APP3_IDX,
    PIN1_APP4_IDX,
    PIN1_APP5_IDX,
    PIN1_APP6_IDX,
    PIN1_APP7_IDX,
    PIN1_APP8_IDX,
    ADM1_IDX,
    ADM2_IDX,
    ADM3_IDX,
    ADM4_IDX,
    ADM5_IDX,
    UNIV_PIN_IDX,
    PIN2_IDX,
    PIN2_APP2_IDX,
    PIN2_APP3_IDX,
    PIN2_APP4_IDX,
    PIN2_APP5_IDX,
    PIN2_APP6_IDX,
    PIN2_APP7_IDX,
    PIN2_APP8_IDX,
    ADM6_IDX,
    ADM7_IDX,
    ADM8_IDX,
    ADM9_IDX,
    ADM10_IDX,
    USIM_NUM_OF_KEYS
} usim_key_idx_enum;
#endif /*__USIM_SUPPORT__*/	

#if (defined(__BT_SIM_PROFILE__) || defined(__GSMCDMA_DUALSIM__))
/*mtk01612: sim_feature_set: bt_sim_profile + G+C*/
typedef enum
{
    SIM_BT_SIM_PROFILE,
    SIM_GSM_CDMA
} sim_connect_type_enum;
#endif

typedef enum
{
    SIM_APDU_BT_SIM_PROFILE,
    SIM_APDU_ATCSIM
} sim_apdu_req_type_enum;

/*mtk01612: [MAUI_03020152] sync polling timer*/
#if defined(__GEMINI__) && defined(__SIM_SYNC_POLL_TIMER__)
typedef enum
{
    SIM_TIMER_BUSY,
    SIM_TIMER_IDLE,
    SIM_TIMER_IDLE_SYNC
} sim_sync_poll_timer_state_enum;
#endif

/* [MAUI_02620145] mtk01616_100910 : remove sim_timer_struct */

#ifdef __SAT__

typedef enum
{
    SAT_REFRESH_READY,
    SAT_REFRESH_BUSY
} sat_refresh_status_enum;

#endif /* __SAT__ */ 

typedef enum
{
    USIM_OPEN_LOGICAL_CHANNEL = 0x00,
    USIM_CLOSE_LOGICAL_CHANNEL = 0x80
} usim_channel_op_enum;

typedef enum
{
   EVDL_MT_CALL,
   EVDL_CALL_CONNECT,
   EVDL_CALL_DISCONNECT,
   EVDL_LOCATION_STATUS,
   EVDL_USER_ACTIVITY,
   EVDL_IDLE_SCREEN_AVAILABLE,
   EVDL_CARD_READER_STATUS,
   EVDL_LANGUAGE_SELECTION,
   EVDL_BROWSER_TERMINATION,
   EVDL_DATA_AVAILABLE,
   EVDL_CHANNEL_STATUS,
   EVDL_ACCESS_TECHNOLOGY_CHANGE,
   EVDL_NW_SEARCH_MODE_CHANGE       = 0x0E, /* mtk02374 20090513 add for nw search mode */
   EVDL_NW_REJECT                   = 0x12, /* Network Rejection event */
   EVDL_HCI_CONNECTIVITY            = 0x13, /* __SATCM__ */
   EVDL_IMS_REGESTRATION            = 0x17, /* IMS Registration event */
   EVDL_INCOMING_IMS_DATA           = 0x18  /* Incoming IMS Data event */
}sat_event_download_enum;

typedef enum
{
   SAT_DEFAULT_DCS        = 0x00,             /* GSM 7-bit */
   SAT_UNPACKED_SMS_ALPHABET=0x04,  /* 8-bit */
   SAT_UCS2_ALPHABET=0x08                   /* UCS2 */  
}sat_dcs_enum;

typedef enum
{
   TIME_MIN,
   TIME_SEC,
   TIME_TENTHS_OF_SEC    
}sat_time_unit_enum;

typedef enum
{
   PRI_NORMAL=0,
   PRI_HIGH=1
}sat_dspl_priority_enum;

typedef enum
{
   CLEAR_AFTER_DELAY=0,
   CLEAR_BY_USR=1
}sat_clear_text_enum;

typedef enum
{
   ICON_DSPL_BUT_REPLACE_TEXT=0,
   ICON_DSPL_WITH_TEXT=1
}sat_icon_qualifier_enum;

typedef enum
{
   PRESENT_TYPE_NONE,
   PRESENT_TYPE_DATA_VALUE,
   PRESENT_TYPE_NAVI    
}sat_select_item_presentation_type_enum;

typedef enum
{
   TYPE_LOCATION_INFO=0,
   TYPE_IMEI,
   TYPE_NET_MEASURE,
   TYPE_DATE_TIME_ZONE,
   TYPE_LANGUAGE_SET,
   TYPE_TIMING_ADVANCE,
   TYPE_ACCESS_TECHNOLOGY=0x06,    /* mtk01488 */
   TYPE_IMEISV=0x08,    
   TYPE_NW_SEARCH_MODE=0x09 /*mtk02374 20090513 add for nw search mode*/
}sat_local_info_enum;

typedef enum
{
   DEVICE_KEYPAD=0x01,
   DEVICE_DISPLAY=0x02,
   DEVICE_EARPIECE=0x03,    
   DEVICE_ADDITIONAL_CARD_READER_0=0x10,   
   DEVICE_ADDITIONAL_CARD_READER_1=0x11,
   DEVICE_ADDITIONAL_CARD_READER_2=0x12,   
   DEVICE_ADDITIONAL_CARD_READER_3=0x13,
   DEVICE_ADDITIONAL_CARD_READER_4=0x14,   
   DEVICE_ADDITIONAL_CARD_READER_5=0x15,
   DEVICE_ADDITIONAL_CARD_READER_6=0x16,   
   DEVICE_ADDITIONAL_CARD_READER_7=0x17,            
   DEVICE_CHAN_1=0x21,
   DEVICE_CHAN_2=0x22,      
   DEVICE_CHAN_3=0x23,
   DEVICE_CHAN_4=0x24,      
   DEVICE_CHAN_5=0x25,
   DEVICE_CHAN_6=0x26,      
   DEVICE_CHAN_7=0x27,
   DEVICE_SIM=0x81,
   DEVICE_ME=0x82,
   DEVICE_NET=0x83
}sat_device_id_enum;

/* USIM AUTHENTICATE TAG */
typedef enum
{
    AUTH_3G_SUCCESS_T = 0xDB,
    AUTH_3G_SYNC_FAILURE_T = 0xDC
} usim_auth_tag_enum;

/* FCP template tag */
typedef enum
{
    FCP_FILE_DES_T = 0x82,
    FCP_FILE_ID_T = 0x83,
    FCP_DF_NAME_T = 0x84,
    FCP_PROPRIETARY_T = 0xA5,
    FCP_LIFE_CYCLE_T = 0x8A,
    /* FCP_SEC_ATTRIBUTE_QUERY is for query */
    FCP_SEC_ATTRIBUTE_QUERY = 0xFF,
    FCP_SEC_COMPACT_T = 0x8C,
    FCP_SEC_EXPANDED_T = 0xAB,
    FCP_SEC_REF_T = 0x8B,
    /* end of security attribute query */
    FCP_PIN_DO_T = 0xC6,
    FCP_TOTAL_FILE_SIZE_T = 0x81,
    FCP_FILE_SIZE_T = 0x80,
    FCP_SFI_T = 0x88
} usim_fcp_tag_enum;

/* FCP proprietary information tag */
typedef enum
{
    PROP_UICC_CHAR_T = 0x80,
    PROP_APP_PWR_T = 0x81,
    PROP_MIN_APP_CLK_T = 0x82,
    PROP_AVAIL_MEM_T = 0x83,
    PROP_FILE_DETAIL_T = 0x84,
    PROP_RESERVED_FILE_SIZE_T = 0x85,
    PROP_MAX_FILE_SIZE_T = 0x86,
    PROP_SUPPORTED_SYS_CMD_T = 0x87,
    PROP_UICC_ENV_COND_T = 0x88
} usim_fcp_proprietary_info_tag_enum;

/* FCP security attributes tag */
typedef enum
{
    SECURITY_COMPACT_T = 0x8C,
    SECURITY_EXPANDED_T = 0xAB,
    SECURITY_REF_T = 0x8B
} usim_fcp_security_attributes_tag_enum;

/* FCP PIN status template DO tag */
typedef enum
{
    PIN_PS_DO_T = 0x90,
    PIN_USAGE_QUALIFIER_T = 0x95,
    PIN_KEY_REF_T = 0x83
} usim_fcp_pin_status_tag_enum;


#ifdef __SGLTE__

typedef enum
{
    SIM_INTSIM_ACCESS_FLIE_INFO,
    SIM_INTSIM_ACCESS_READ_BINARY,
    SIM_INTSIM_ACCESS_READ_RECORD,
    SIM_INTSIM_ACCESS_UPDATE_BINARY,
    SIM_INTSIM_ACCESS_UPDATE_RECORD,        
    SIM_INTSIM_ACCESS_AUTHENTICATION,
    SIM_INTSIM_ACCESS_INCREASE,    
    SIM_INTSIM_ACCESS_INVALIDATE,
    SIM_INTSIM_ACCESS_REHABILITATE
}sim_intsim_access_op_enum;


typedef enum
{
    MMDC_DEACTIVE,
	MMDC_ACTIVE
}sim_mmdc_mode_enum;

#endif /* __SGLTE__ */

typedef enum
{
    C2K_MODE_SVLTE,
    C2K_MODE_DATA_ONLY
}sim_c2k_mode_enum;

/* OPNE SIM REFRESH BY MMI */

/* MAUI_03041489 : for moveing sim_profile to custom folder */

#define MAX_ECC_NUM               5
#define MAX_EF_HEADER_LEN        15

/* Define the Service table length of SIM and USIM */
#define SIM_SUPPORT_SST_LEN     15   

//mtk02374 SIM/USIM
/* Define the UICC file path from MF */
#define PATH_MF_ID   {0x00,0x00,0x00,0x00,0x00,0x00}  
#define PATH_GSM_ID   {0x7F,0x20,0x00,0x00,0x00,0x00}
#define PATH_TELECOM_ID   {0x7F,0x10,0x00,0x00,0x00,0x00}
#define PATH_IRIDIUM_ID   {0x7F,0x20,0x5F,0x30,0x00,0x00}
#define PATH_GLOBST_ID   {0x7F,0x20,0x5F,0x31,0x00,0x00}
#define PATH_ICO_ID   {0x7F,0x20,0x5F,0x32,0x00,0x00}
#define PATH_ACES_ID   {0x7F,0x20,0x5F,0x33,0x00,0x00}
#define PATH_EIA_ID   {0x7F,0x20,0x5F,0x40,0x00,0x00}
#define PATH_CTS_ID   {0x7F,0x20,0x5F,0x60,0x00,0x00}
#define PATH_SOLSA_ID   {0x7F,0x20,0x5F,0x70,0x00,0x00}
#define PATH_MEXE_ID   {0x7F,0x20,0x5F,0x3C,0x00,0x00}
#define PATH_GRAPHICS_ID   {0x7F,0x10,0x5F,0x50,0x00,0x00}
#define PATH_ICCID_ID   {0x2F,0xE2,0x00,0x00,0x00,0x00}
#define PATH_ELP_ID   {0x2F,0x05,0x00,0x00,0x00,0x00}
#define PATH_SAI_ID   {0x7F,0x20,0x5F,0x70,0x4F,0x30}      /* Also under 7F20 */
#define PATH_SLL_ID   {0x7F,0x20,0x5F,0x70,0x4F,0x31}      /* Also under 7F20 */
#define PATH_MEXE_ST_ID   {0x7F,0x20,0x5F,0x3C,0x4F,0x40}  /* Also under 7F20 */
#define PATH_ORPK_ID   {0x7F,0x20,0x5F,0x3C,0x4F,0x41}     /* Also under 7F20 */
#define PATH_ARPK_ID   {0x7F,0x20,0x5F,0x3C,0x4F,0x42}     /* Also under 7F20 */
#define PATH_TPRPK_ID   {0x7F,0x20,0x5F,0x3C,0x4F,0x43}    /* Also under 7F20 */
#define PATH_IMG_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x20}
#define PATH_LP_ID   {0x7F,0x20,0x6F,0x05,0x00,0x00}       /* Also under 7F20 in USIM called EF_LI */
#define PATH_IMSI_ID   {0x7F,0x20,0x6F,0x07,0x00,0x00}     /* Also under 7F20 */
#define PATH_KC_ID   {0x7F,0x20,0x6F,0x20,0x00,0x00}       /* Also 6F20 under 7F20 */
#define PATH_PLMNSEL_ID   {0x7F,0x20,0x6F,0x30,0x00,0x00}  /* This file is only in SIM */
#define PATH_HPLMN_ID   {0x7F,0x20,0x6F,0x31,0x00,0x00}    /* Also under 7F20 */
#define PATH_ACMAX_ID   {0x7F,0x20,0x6F,0x37,0x00,0x00}    /* Also under 7F20 */
#define PATH_SST_ID   {0x7F,0x20,0x6F,0x38,0x00,0x00}      /* Cannot be mapped to UST */
#define PATH_ACM_ID   {0x7F,0x20,0x6F,0x39,0x00,0x00}      /* Also under 7F20 */
#define PATH_GID1_ID   {0x7F,0x20,0x6F,0x3E,0x00,0x00}     /* Also under 7F20*/
#define PATH_GID2_ID   {0x7F,0x20,0x6F,0x3F,0x00,0x00}     /* Also under 7F20*/
#define PATH_SPN_ID   {0x7F,0x20,0x6F,0x46,0x00,0x00}      /* Also under 7F20*/
#define PATH_PUCT_ID   {0x7F,0x20,0x6F,0x41,0x00,0x00}     /* Also under 7F20*/     
#define PATH_CBMI_ID   {0x7F,0x20,0x6F,0x45,0x00,0x00}     /* Also under 7F20*/
#define PATH_BCCH_ID   {0x7F,0x20,0x6F,0x74,0x00,0x00}     /* This file is only in SIM*/
#define PATH_ACC_ID   {0x7F,0x20,0x6F,0x78,0x00,0x00}      /* Also under 7F20*/
#define PATH_FPLMN_ID   {0x7F,0x20,0x6F,0x7B,0x00,0x00}    /* Also under 7F20*/
#define PATH_LOCI_ID   {0x7F,0x20,0x6F,0x7E,0x00,0x00}     /* Also under 7F20*/     
#define PATH_AD_ID   {0x7F,0x20,0x6F,0xAD,0x00,0x00}       /* Also under 7F20*/
#define PATH_PHASE_ID   {0x7F,0x20,0x6F,0xAE,0x00,0x00}    /* This file is only in SIM */
#define PATH_VGCS_ID   {0x7F,0x20,0x6F,0xB1,0x00,0x00}     /* Also under 7F20*/
#define PATH_VGCSS_ID   {0x7F,0x20,0x6F,0xB2,0x00,0x00}    /* Also under 7F20*/
#define PATH_VBS_ID   {0x7F,0x20,0x6F,0xB3,0x00,0x00}      /* Also under 7F20*/
#define PATH_VBSS_ID   {0x7F,0x20,0x6F,0xB4,0x00,0x00}     /* Also under 7F20*/
#define PATH_EMLPP_ID   {0x7F,0x20,0x6F,0xB5,0x00,0x00}    /* Also under 7F20*/
#define PATH_AAEM_ID   {0x7F,0x20,0x6F,0xB6,0x00,0x00}     /* Also under 7F20*/
#define PATH_CBMID_ID   {0x7F,0x20,0x6F,0x48,0x00,0x00}    /* Also under 7F20*/
#define PATH_ECC_ID   {0x7F,0x20,0x6F,0xB7,0x00,0x00}      /* Also under 7F20*/
#define PATH_CBMIR_ID   {0x7F,0x20,0x6F,0x50,0x00,0x00}    /* Also under 7F20*/
#define PATH_DCK_ID   {0x7F,0x20,0x6F,0x2C,0x00,0x00}      /* Also under 7F20*/
#define PATH_CNL_ID   {0x7F,0x20,0x6F,0x32,0x00,0x00}      /* Also under 7F20*/      
#define PATH_NIA_ID   {0x7F,0x20,0x6F,0x51,0x00,0x00}      /* Also under 7F20*/
#define PATH_KCGPRS_ID   {0x7F,0x20,0x6F,0x52,0x00,0x00}   /* Also under 7F20*/
#define PATH_LOCIGPRS_ID   {0x7F,0x20,0x6F,0x53,0x00,0x00} /* Also 6F53 under 7F20 */
#define PATH_SUME_ID   {0x7F,0x20,0x6F,0x54,0x00,0x00}     /* Also 6F54 under 7F20*/
#define PATH_PLMNWACT_ID   {0x7F,0x20,0x6F,0x60,0x00,0x00} /* Also under 7F20*/
#define PATH_OPLMNWACT_ID   {0x7F,0x20,0x6F,0x61,0x00,0x00}/* Also under 7F20*/
#define PATH_HPLMNACT_ID   {0x7F,0x20,0x6F,0x62,0x00,0x00} /* Also under 7F20*/
#define PATH_CPBCCH_ID   {0x7F,0x20,0x6F,0x63,0x00,0x00}   /* Also 6F63 under 7F20 */
#define PATH_INVSCAN_ID   {0x7F,0x20,0x6F,0x64,0x00,0x00}  /* Also 6F64 under 7F20 */
#define PATH_VM_WAIT_ID   {0x7F,0x20,0x6F,0x11,0x00,0x00}
#define PATH_CPHS_SST_ID   {0x7F,0x20,0x6F,0x12,0x00,0x00}
#define PATH_CF_FLAG_ID   {0x7F,0x20,0x6F,0x13,0x00,0x00}
#define PATH_OP_STRING_ID   {0x7F,0x20,0x6F,0x14,0x00,0x00}
#define PATH_CSP_ID   {0x7F,0x20,0x6F,0x15,0x00,0x00}
#define PATH_CPHS_INFO_ID   {0x7F,0x20,0x6F,0x16,0x00,0x00}
#define PATH_MAILBOX_NUM_ID   {0x7F,0x20,0x6F,0x17,0x00,0x00}
#define PATH_OP_SHORTFORM_ID   {0x7F,0x20,0x6F,0x18,0x00,0x00}
#define PATH_INFO_NUM_ID   {0x7F,0x20,0x6F,0x19,0x00,0x00}
#define PATH_ADN_ID   {0x7F,0x10,0x6F,0x3A,0x00,0x00}      /* !!!!! */
#define PATH_FDN_ID   {0x7F,0x10,0x6F,0x3B,0x00,0x00}      /* Also 6F3B under 7F10 */
#define PATH_SMS_ID   {0x7F,0x10,0x6F,0x3C,0x00,0x00}      /* Also 6F3C under 7F10 */
#define PATH_CCP_ID   {0x7F,0x10,0x6F,0x3D,0x00,0x00}      /* !!!!! Map to ECCP in USIM. Also 6F3D under 7F10 */
#define PATH_ECCP_ID   {0x7F,0x10,0x6F,0x4F,0x00,0x00}     /* !!!!! */
#define PATH_MSISDN_ID   {0x7F,0x10,0x6F,0x40,0x00,0x00}   /* Also 6F40 under 7F10 */
#define PATH_SMSP_ID   {0x7F,0x10,0x6F,0x42,0x00,0x00}     /* Also 6F42 under 7F10 */
#define PATH_SMSS_ID   {0x7F,0x10,0x6F,0x43,0x00,0x00}     /* Also 6F43 under 7F10 */
#define PATH_LND_ID   {0x7F,0x10,0x6F,0x44,0x00,0x00}      /* xxxxx */
#define PATH_SDN_ID   {0x7F,0x10,0x6F,0x49,0x00,0x00}      /* Also 6F49 under 7F10 */
#define PATH_EXT1_ID   {0x7F,0x10,0x6F,0x4A,0x00,0x00}     /* !!!!! */
#define PATH_EXT2_ID   {0x7F,0x10,0x6F,0x4B,0x00,0x00}     /* Also 6F4B under 7F10 */     
#define PATH_EXT3_ID   {0x7F,0x10,0x6F,0x4C,0x00,0x00}     /* Also 6F4C under 7F10 */
#define PATH_BDN_ID   {0x7F,0x10,0x6F,0x4D,0x00,0x00}      /* Also 6F4D under 7F10 */
#define PATH_EXT4_ID   {0x7F,0x10,0x6F,0x55,0x00,0x00}     /* Also 6F4E under 7F10 */
#define PATH_SMSR_ID   {0x7F,0x10,0x6F,0x47,0x00,0x00}
#define PATH_CMI_ID   {0x7F,0x10,0x6F,0x58,0x00,0x00}      /* Also under 7F10*/
#define PATH_IMG_1_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x01}
#define PATH_IMG_2_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x02}
#define PATH_IMG_3_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x03}
#define PATH_IMG_4_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x04}
#define PATH_IMG_5_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x05}
#define PATH_IMG_6_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x06}
#define PATH_IMG_7_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x07}
#define PATH_IMG_8_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x08}
#define PATH_IMG_9_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x09}
#define PATH_IMG_A_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x0A}
#define PATH_IMG_B_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x0B}
#define PATH_IMG_C_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x0C}
#define PATH_IMG_D_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x0D}
#define PATH_IMG_E_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x0E}
#define PATH_IMG_F_ID   {0x7F,0x10,0x5F,0x50,0x4F,0x0F}
#define PATH_VID_ID   {0x7F,0x43,0x00,0x00,0x00,0x00} 
/* HomeZone Support */
#define PATH_HZ_ID   {0x7F,0x43,0x6F,0x60,0x00,0x00}
#define PATH_HZ_CACHE1_ID   {0x7F,0x43,0x6F,0x61,0x00,0x00}
#define PATH_HZ_CACHE2_ID   {0x7F,0x43,0x6F,0x62,0x00,0x00}
#define PATH_HZ_CACHE3_ID   {0x7F,0x43,0x6F,0x63,0x00,0x00}
#define PATH_HZ_CACHE4_ID   {0x7F,0x43,0x6F,0x64,0x00,0x00}
/* ENS support mtk01488 */
#define PATH_ENS_DF_7F66_ID {0x7F,0x66,0x00,0x00,0x00,0x00}
#define PATH_ENS_DF_5F30_ID {0x7F,0x66,0x5F,0x30,0x00,0x00}
#define PATH_ENS_ACTING_HPLMN_ID {0x7F, 0x66, 0x5F, 0x30, 0x4F, 0x34}
#define PATH_ENS_TERMINAL_SUPPORT_TABLE {0x7F, 0x66, 0x6F, 0xD2, 0x00, 0x00}
#define PATH_PNN_ID   {0x7F,0x20,0x6F,0xC5,0x00,0x00}
#define PATH_OPL_ID   {0x7F,0x20,0x6F,0xC6,0x00,0x00}
#define PATH_MBDN_ID   {0x7F,0x20,0x6F,0xC7,0x00,0x00}
#define PATH_EXT6_ID   {0x7F,0x20,0x6F,0xC8,0x00,0x00}
#define PATH_MBI_ID   {0x7F,0x20,0x6F,0xC9,0x00,0x00}
#define PATH_MWIS_ID   {0x7F,0x20,0x6F,0xCA,0x00,0x00}
#define PATH_CFIS_ID   {0x7F,0x20,0x6F,0xCB,0x00,0x00}
#define PATH_EXT7_ID   {0x7F,0x20,0x6F,0xCC,0x00,0x00}
#define PATH_SPDI_ID   {0x7F,0x20,0x6F,0xCD,0x00,0x00}
#define PATH_MMSN_ID   {0x7F,0x20,0x6F,0xCE,0x00,0x00}
#define PATH_EXT8_ID   {0x7F,0x20,0x6F,0xCF,0x00,0x00}
#define PATH_MMSICP_ID   {0x7F,0x20,0x6F,0xD0,0x00,0x00}
#define PATH_MMSUP_ID   {0x7F,0x20,0x6F,0xD1,0x00,0x00}
#define PATH_MMSUCP_ID   {0x7F,0x20,0x6F,0xD2,0x00,0x00}
#define PATH_DIR_ID   {0x2F,0x00,0x00,0x00,0x00,0x00}
#define PATH_ARR_ID   {0x2F,0x06,0x00,0x00,0x00,0x00}
#define PATH_USIM_ID   {0x7F,0xFF,0x00,0x00,0x00,0x00}
#define PATH_U_LI_ID   {0x7F,0xFF,0x6F,0x05,0x00,0x00}
#define PATH_U_IMSI_ID   {0x7F,0xFF,0x6F,0x07,0x00,0x00}
#define PATH_U_KEYS_ID   {0x7F,0xFF,0x6F,0x08,0x00,0x00}
#define PATH_U_KEYSPS_ID   {0x7F,0xFF,0x6F,0x09,0x00,0x00}
#define PATH_U_PLMNWACT_ID   {0x7F,0xFF,0x6F,0x60,0x00,0x00}
#define PATH_U_HPPLMN_ID   {0x7F,0xFF,0x6F,0x31,0x00,0x00}
#define PATH_U_ACMMAX_ID   {0x7F,0xFF,0x6F,0x37,0x00,0x00}
#define PATH_U_UST_ID   {0x7F,0xFF,0x6F,0x38,0x00,0x00}
#define PATH_U_ACM_ID   {0x7F,0xFF,0x6F,0x39,0x00,0x00}
#define PATH_U_GID1_ID   {0x7F,0xFF,0x6F,0x3E,0x00,0x00}
#define PATH_U_GID2_ID   {0x7F,0xFF,0x6F,0x3F,0x00,0x00}
#define PATH_U_SPN_ID   {0x7F,0xFF,0x6F,0x46,0x00,0x00}
#define PATH_U_PUCT_ID   {0x7F,0xFF,0x6F,0x41,0x00,0x00}
#define PATH_U_CBMI_ID   {0x7F,0xFF,0x6F,0x45,0x00,0x00}
#define PATH_U_ACC_ID   {0x7F,0xFF,0x6F,0x78,0x00,0x00}
#define PATH_U_FPLMN_ID   {0x7F,0xFF,0x6F,0x7B,0x00,0x00}
#define PATH_U_LOCI_ID   {0x7F,0xFF,0x6F,0x7E,0x00,0x00}
#define PATH_U_AD_ID   {0x7F,0xFF,0x6F,0xAD,0x00,0x00}
#define PATH_U_CBMID_ID   {0x7F,0xFF,0x6F,0x48,0x00,0x00}
#define PATH_U_ECC_ID   {0x7F,0xFF,0x6F,0xB7,0x00,0x00}
#define PATH_U_CBMIR_ID   {0x7F,0xFF,0x6F,0x50,0x00,0x00}
#define PATH_U_PSLOCI_ID   {0x7F,0xFF,0x6F,0x73,0x00,0x00}
#define PATH_U_FDN_ID   {0x7F,0xFF,0x6F,0x3B,0x00,0x00}
#define PATH_U_SMS_ID   {0x7F,0xFF,0x6F,0x3C,0x00,0x00}
#define PATH_U_MSISDN_ID   {0x7F,0xFF,0x6F,0x40,0x00,0x00}
#define PATH_U_SMSP_ID   {0x7F,0xFF,0x6F,0x42,0x00,0x00}
#define PATH_U_SMSS_ID   {0x7F,0xFF,0x6F,0x43,0x00,0x00}
#define PATH_U_SDN_ID   {0x7F,0xFF,0x6F,0x49,0x00,0x00}
#define PATH_U_EXT2_ID   {0x7F,0xFF,0x6F,0x4B,0x00,0x00}
#define PATH_U_EXT3_ID   {0x7F,0xFF,0x6F,0x4C,0x00,0x00}
#define PATH_U_SMSR_ID   {0x7F,0xFF,0x6F,0x47,0x00,0x00}
#define PATH_U_ICI_ID   {0x7F,0xFF,0x6F,0x80,0x00,0x00}
#define PATH_U_OCI_ID   {0x7F,0xFF,0x6F,0x81,0x00,0x00}
#define PATH_U_ICT_ID   {0x7F,0xFF,0x6F,0x82,0x00,0x00}
#define PATH_U_OCT_ID   {0x7F,0xFF,0x6F,0x83,0x00,0x00}
#define PATH_U_EXT5_ID   {0x7F,0xFF,0x6F,0x4E,0x00,0x00}
#define PATH_U_CCP2_ID   {0x7F,0xFF,0x6F,0x4F,0x00,0x00}
#define PATH_U_EMLPP_ID   {0x7F,0xFF,0x6F,0xB5,0x00,0x00}
#define PATH_U_AAEM_ID   {0x7F,0xFF,0x6F,0xB6,0x00,0x00}
#define PATH_U_HIDDENKEY_ID   {0x7F,0xFF,0x6F,0xC3,0x00,0x00}
#define PATH_U_BDN_ID   {0x7F,0xFF,0x6F,0x4D,0x00,0x00}
#define PATH_U_EXT4_ID   {0x7F,0xFF,0x6F,0x55,0x00,0x00}
#define PATH_U_CMI_ID   {0x7F,0xFF,0x6F,0x58,0x00,0x00}
#define PATH_U_EST_ID   {0x7F,0xFF,0x6F,0x56,0x00,0x00}
#define PATH_U_ACL_ID   {0x7F,0xFF,0x6F,0x57,0x00,0x00}
#define PATH_U_DCK_ID   {0x7F,0xFF,0x6F,0x2C,0x00,0x00}
#define PATH_U_CNL_ID   {0x7F,0xFF,0x6F,0x32,0x00,0x00}
#define PATH_U_STARTHFN_ID   {0x7F,0xFF,0x6F,0x5B,0x00,0x00}
#define PATH_U_THRESHOLD_ID   {0x7F,0xFF,0x6F,0x5C,0x00,0x00}
#define PATH_U_OPLMNWACT_ID   {0x7F,0xFF,0x6F,0x61,0x00,0x00}
#define PATH_U_HPLMNWACT_ID   {0x7F,0xFF,0x6F,0x62,0x00,0x00}
#define PATH_U_ARR_ID   {0x7F,0xFF,0x6F,0x06,0x00,0x00}
#define PATH_U_NETPAR_ID   {0x7F,0xFF,0x6F,0xC4,0x00,0x00}
#define PATH_U_PNN_ID   {0x7F,0xFF,0x6F,0xC5,0x00,0x00}
#define PATH_U_OPL_ID   {0x7F,0xFF,0x6F,0xC6,0x00,0x00}
#define PATH_U_MBDN_ID   {0x7F,0xFF,0x6F,0xC7,0x00,0x00}
#define PATH_U_EXT6_ID   {0x7F,0xFF,0x6F,0xC8,0x00,0x00}
#define PATH_U_MBI_ID   {0x7F,0xFF,0x6F,0xC9,0x00,0x00}
#define PATH_U_MWIS_ID   {0x7F,0xFF,0x6F,0xCA,0x00,0x00}
#define PATH_U_CFIS_ID   {0x7F,0xFF,0x6F,0xCB,0x00,0x00}
#define PATH_U_EXT7_ID   {0x7F,0xFF,0x6F,0xCC,0x00,0x00}
#define PATH_U_SPDI_ID   {0x7F,0xFF,0x6F,0xCD,0x00,0x00}
#define PATH_U_MMSN_ID   {0x7F,0xFF,0x6F,0xCE,0x00,0x00}
#define PATH_U_EXT8_ID   {0x7F,0xFF,0x6F,0xCF,0x00,0x00}
#define PATH_U_MMSICP_ID   {0x7F,0xFF,0x6F,0xD0,0x00,0x00}
#define PATH_U_MMSUP_ID   {0x7F,0xFF,0x6F,0xD1,0x00,0x00}
#define PATH_U_MMSUCP_ID   {0x7F,0xFF,0x6F,0xD2,0x00,0x00}
#define PATH_U_NIA_ID   {0x7F,0xFF,0x6F,0xD3,0x00,0x00}
#define PATH_U_VGCS_ID   {0x7F,0xFF,0x6F,0xB1,0x00,0x00}
#define PATH_U_VGCSS_ID   {0x7F,0xFF,0x6F,0xB2,0x00,0x00}
#define PATH_U_VBS_ID   {0x7F,0xFF,0x6F,0xB3,0x00,0x00}
#define PATH_U_VBSS_ID   {0x7F,0xFF,0x6F,0xB4,0x00,0x00}
#define PATH_U_VGCSCA_ID   {0x7F,0xFF,0x6F,0xD4,0x00,0x00}
#define PATH_U_VBSCA_ID   {0x7F,0xFF,0x6F,0xD5,0x00,0x00}
#define PATH_U_GBAP_ID   {0x7F,0xFF,0x6F,0xD6,0x00,0x00}
#define PATH_U_MSK_ID   {0x7F,0xFF,0x6F,0xD7,0x00,0x00}
#define PATH_U_MUK_ID   {0x7F,0xFF,0x6F,0xD8,0x00,0x00}
#define PATH_U_GBANL_ID   {0x7F,0xFF,0x6F,0xDA,0x00,0x00}
#define PATH_U_SOLSA_ID   {0x7F,0xFF,0x5F,0x70,0x00,0x00}
#define PATH_U_SAI_ID   {0x7F,0xFF,0x5F,0x70,0x4F,0x30}
#define PATH_U_SLL_ID   {0x7F,0xFF,0x5F,0x70,0x4F,0x31}
#define PATH_U_LSAD_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_PHONEBOOK_ID   {0x7F,0xFF,0x5F,0x3A,0x00,0x00}
#define PATH_U_PBR_ID   {0x7F,0xFF,0x5F,0x3A,0x4F,0x30}
#define PATH_U_IAP_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_ADN_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_EXT1_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_PBC_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_GRP_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_AAS_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_GAS_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_ANR_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_SNE_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_CCP1_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_UID_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_PSC_ID   {0x7F,0xFF,0x5F,0x3A,0x4F,0x22}
#define PATH_U_CC_ID   {0x7F,0xFF,0x5F,0x3A,0x4F,0x23}
#define PATH_U_PUID_ID   {0x7F,0xFF,0x5F,0x3A,0x4F,0x24}
#define PATH_U_EMAIL_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_GSMACCESS_ID   {0x7F,0xFF,0x5F,0x3B,0x00,0x00}
#define PATH_U_KC_ID   {0x7F,0xFF,0x5F,0x3B,0x4F,0x20}
#define PATH_U_KCGPRS_ID   {0x7F,0xFF,0x5F,0x3B,0x4F,0x52}
#define PATH_U_CPBCCH_ID   {0x7F,0xFF,0x5F,0x3B,0x4F,0x63}
#define PATH_U_INVSCAN_ID   {0x7F,0xFF,0x5F,0x3B,0x4F,0x64}
#define PATH_U_MEXE_ID   {0x7F,0xFF,0x5F,0x3C,0x00,0x00}
#define PATH_U_MEXEST_ID   {0x7F,0xFF,0x5F,0x3C,0x4F,0x40}
#define PATH_U_ORPK_ID   {0x7F,0xFF,0x5F,0x3C,0x4F,0x41}
#define PATH_U_ARPK_ID   {0x7F,0xFF,0x5F,0x3C,0x4F,0x42}
#define PATH_U_TPRPK_ID   {0x7F,0xFF,0x5F,0x3C,0x4F,0x43}
#define PATH_U_TKCDF_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_U_WLAN_ID   {0x7F,0xFF,0x5F,0x40,0x00,0x00}
#define PATH_U_PSEUDO_ID   {0x7F,0xFF,0x5F,0x40,0x4F,0x41}
#define PATH_U_UPLMNWLAN_ID   {0x7F,0xFF,0x5F,0x40,0x4F,0x42}
#define PATH_U_OPLMNWLAN_ID   {0x7F,0xFF,0x5F,0x40,0x4F,0x43}
#define PATH_U_USSIDL_ID   {0x7F,0xFF,0x5F,0x40,0x4F,0x44}
#define PATH_U_OSSIDL_ID   {0x7F,0xFF,0x5F,0x40,0x4F,0x45}
#define PATH_U_WRI_ID   {0x7F,0xFF,0x5F,0x40,0x4F,0x46}
#define PATH_G_PHONEBOOK_ID   {0x7F,0x10,0x5F,0x3A,0x00,0x00}
#define PATH_G_PBR_ID   {0x7F,0x10,0x5F,0x3A,0x4F,0x30}
#define PATH_G_IAP_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_ADN_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_EXT1_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_PBC_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_GRP_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_AAS_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_GAS_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_ANR_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_SNE_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_CCP1_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_UID_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_G_PSC_ID   {0x7F,0x10,0x5F,0x3A,0x4F,0x22}
#define PATH_G_CC_ID   {0x7F,0x10,0x5F,0x3A,0x4F,0x23}
#define PATH_G_PUID_ID   {0x7F,0x10,0x5F,0x3A,0x4F,0x24}
#define PATH_G_EMAIL_ID   {0x00,0x00,0x00,0x00,0x00,0x00}
#define PATH_MULTIMEDIA_ID   {0x7F,0x10,0x5F,0x3B,0x00,0x00}
#define PATH_MML_ID   {0x7F,0x10,0x5F,0x3B,0x4F,0x47}
#define PATH_MMDF_ID   {0x7F,0x10,0x5F,0x3B,0x4F,0x48}
#define PATH_U_EHPLMN_ID   {0x7F,0xFF,0x6F,0xD9,0x00,0x00} //__R7_EHPLMN__ 
#define PATH_U_EHPLMNPI_ID   {0x7F,0xFF,0x6F,0xDB,0x00,0x00}
#define PATH_U_LRPLMNSI_ID   {0x7F,0xFF,0x6F,0xDC,0x00,0x00}
#define PATH_U_CSP_ID   {0x7F,0xFF,0x6F,0x15,0x00,0x00} /*[MAUI_02387843] mtk01612: AT&T proprietary EFU_CSP 7FFF\6F15*/
#define PATH_U_ENS_RAT_ID   {0x7F, 0x66, 0x5F, 0x30, 0x4F, 0x36}//__ENS_RAT_BALANCING__
#define PATH_U_ENS_TERMINAL_SUPPORT_TABLE   {0x7F, 0xFF, 0x7F, 0x66, 0x6F, 0xD2} /* [MAUI_02908638] mtk01616_110418 support EF_U_TS_table under 7FFF */
/* mtk01616_110502 __CSG_SUPPORT__ */
#define PATH_U_HNB_ID   {0x7F,0xFF,0x5F,0x50,0x00,0x00}  
#define PATH_U_ACSGL_ID   {0x7F,0xFF,0x5F,0x50,0x4F,0x81}
#define PATH_U_CSGT_ID   {0x7F,0xFF,0x5F,0x50,0x4F,0x82}
#define PATH_U_HNBN_ID   {0x7F,0xFF,0x5F,0x50,0x4F,0x83}
#define PATH_U_EPSLOCI_ID   {0x7F, 0xFF, 0x6F, 0xE3, 0x00, 0x00}
#define PATH_U_EPSNSC_ID    {0x7F, 0xFF, 0x6F, 0xE4, 0x00, 0x00}
#define PATH_NONE_ID   {0x00,0x00,0x00,0x00,0x00,0x00}

#define SERVICE_EST_FDN 0x01
#define SERVICE_EST_BDN 0x02
#define SERVICE_EST_ACL 0x03

#define SIM_DF_1800        0x7F21
#define SIM_NO_PARA                 0x00

#define SIM_MAX_TRIAL_COUNT     3

#define SIM_SELECT_PARA_LEN         0x02
#define SIM_INCREASE_PARA_LEN       0x03
#define SIM_VERIFY_CHV_PARA_LEN     0x08
#define SIM_CHANGE_CHV_PARA_LEN     0x10
#define SIM_SWITCH_CHV_PARA_LEN     0x08
#define SIM_DISABLE_CHV_PARA_LEN    SIM_SWITCH_CHV_PARA_LEN
#define SIM_ENABLE_CHV_PARA_LEN     SIM_SWITCH_CHV_PARA_LEN
#define SIM_UNBLOCK_CHV_PARA_LEN    0x10
#define SIM_RUN_GSM_ALGO_PARA_LEN   0x10
#define SIM_STATUS_CMD_LEN          0x16

#define SIM_MAX_RSP_DATA_LEN        256
#define SIM_DEFAULT_TIMER           KAL_TICKS_30_SEC-KAL_TICKS_1_SEC*3-KAL_TICKS_500_MSEC
#define SAT_EVDL_FIRST_LOC_TIMER    (KAL_TICKS_1_MIN + KAL_TICKS_30_SEC)

/* SELECT */
#define USIM_MAX_SELECT_AID_LEN     22  /* 5 + 16(AID) + 1 */
#define USIM_MAX_SELECT_PATH_LEN    14  /* 5 + 8(path) +1 */  /* MAUI_02921092 to support file path up to 8 */
/* P1 */
#define SEL_BY_FILE_ID                  0x00
#define SEL_CHILD_DF                     0x01
#define SEL_PARENT_DF                  0x03
#define SEL_BY_AID                         0x04
#define SEL_BY_PATH_FROM_MF     0x08
#define SEL_BY_PATH_FROM_DF     0x09
/* P2 */
#define SEL_RET_FCP                       0x04
#define SEL_NO_RET                        0x0C

/* INCREASE */
#define USIM_MAX_INCREASE_LEN   133     /* 5 + 127 + 1 */

/* VERIFY PIN */
#define VERIFY_PIN_LEN 8

/* CHANGE PIN */
#define CHANGE_PIN_LEN (VERIFY_PIN_LEN*2)       /* 16 */

/* DISABLE PIN or ENABLE PIN */
#define USIM_MAX_SWITCH_PIN_LEN 13     /* 5 + 8 */

/* UNBLOCK PIN */
#define USIM_MAX_UNBLOCK_PIN_LEN 21     /* 5 + 16 */

/* DEACTIVATE FILE */
#define USIM_MAX_DEACTIVATE_FILE_LEN 11 /* 5 + 6 */

/* ACTIVATE FILE */
#define USIM_MAX_ACTIVATE_FILE_LEN 11   /* 5 + 6 */

/* AUTHENTICATE */
#define USIM_MAX_AUTHENTICATE_LEN 261    /* 5 + 255 + 1 */
#define USIM_MAX_AUTHENTICATE_RSP_LEN 256
#define USIM_GSM_AUTHENTICATE_RSP_LEN 14
#define AUTH_GSM_CONTEXT  0x80
#define AUTH_3G_CONTEXT   0x81
#define AUTH_GBA_CONTEXT  0x84
#define AUTH_AUTN_LEN 16        /* 16 */
#define AUTH_RAND_LEN 16        /* 16 */

/* GET CHALLENGE */
#define USIM_MAX_GET_CHALLENGE_LEN 5    /* 4 + 1 */

/* MANAGE CHANNEL */
#define USIM_MAX_MANAGE_CHANNEL_LEN 5   /* 4 + 1 */

#define USIM_MAX_RSP_FCP_LEN 128
#define FCP_TEMP_T 0x62

/* Define application template Data Object  */
#define USIM_APP_TEMP_TAG 0x61
#define USIM_APP_ID_TAG 0x4F
#define USIM_APP_LABEL_TAG 0x50

#ifdef __USIM_SUPPORT__
#define USIM_FD_EMPTY 0x80
#endif

#define SIZE_OF_CMD_DETAIL               5

#define APP1_PIN1_M 0x00000001
#define APP1_PIN2_M 0x00000002
#define APP2_PIN1_M 0x00000004
#define APP2_PIN2_M 0x00000008
#define APP3_PIN1_M 0x00000010
#define APP3_PIN2_M 0x00000020
#define APP4_PIN1_M 0x00000040
#define APP4_PIN2_M 0x00000080
#define APP5_PIN1_M 0x00000100
#define APP5_PIN2_M 0x00000200
#define APP6_PIN1_M 0x00000400
#define APP6_PIN2_M 0x00000800
#define APP7_PIN1_M 0x00001000
#define APP7_PIN2_M 0x00002000
#define APP8_PIN1_M 0x00004000
#define APP8_PIN2_M 0x00008000
#define ADM01_M        0x00010000
#define ADM02_M        0x00020000
#define ADM03_M        0x00040000
#define ADM04_M        0x00080000
#define ADM05_M        0x00100000
#define ADM06_M        0x00200000
#define ADM07_M        0x00400000
#define ADM08_M        0x00800000
#define ADM09_M        0x01000000
#define ADM10_M        0x02000000
#define UNIV_PIN_M        0x80000000

#define SIM_CHECK_30VSIM          0x10	/* 3V technical SIM */
#define SIM_CHECK_18VSIM          0x20   /* 1.8V technical SIM */
#define SIM_CHECK_CLOCK_MODE     0x0D	/* bit mask for SIM clock mode */ 

/* __SAT__ start */
#define EVDL_NORMAL_SERVICE 0
#define EVDL_LIMITED_SERVICE 1
#define EVDL_NO_SERVICE 2
/* __SAT__ end */

#endif
