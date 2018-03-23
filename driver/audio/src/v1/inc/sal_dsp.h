#ifndef SAL_DSP_H
#define SAL_DSP_H

#include "common_def.h"
#include "audio_dsp_d2c_def.h"

#if defined(MT6280)
#include "dpram_6280.h"
#endif

#if defined(MT6589)
#include "dpram_6589.h"
#endif

#if defined(MT6572)
#include "dpram_6572.h"
#endif

#if defined(MT6582)
#include "dpram_6582.h"
#endif

#if defined(MT6290)
#include "dpram_6290.h"
#endif

#if defined(MT6592)
#include "dpram_6592.h"
#endif

#if defined(MT6571)
#include "dpram_6571.h"
#endif

#if defined(MT6595)
#include "dpram_6595.h"
#endif

#if defined(MT6752)
#include "dpram_6752.h"
#endif

#if defined(MT6735)
#include "dpram_6735.h"
#endif

//defined in dpram.h start


#define SPH_APP_MODE_NONE 0
#define SPH_APP_MODE_VOIP 1
#define SPH_APP_MODE_CALL_2G 2
#define SPH_APP_MODE_CALL_3G 3
#define SPH_APP_MODE_CALL_4G 4
#define SPH_APP_MODE_AVS 5
#define SPH_APP_MODE_PCM_ROUNTER 6
#define SPH_APP_MODE_PCM_OTHER 7


#define DSP_SPH_DEL_R        DPRAM2_base(SPH_DEL_R)
#define DSP_SPH_DEL_W        DPRAM2_base(SPH_DEL_W)
#define DSP_SPH_DEL_M        DPRAM2_base(SPH_DEL_M)
#define DSP_SPH_DEL_O        DPRAM2_base(SPH_DEL_O)

#define DSP_SPH_8K_CTRL      DPRAM2_base(SPH_8K_CTRL)
#define DSP_SPH_SFE_CTRL     DPRAM2_base(SPH_SFE_CTRL)
#define DSP_SPH_ST_VOL       DPRAM2_base(SPH_ST_VOL)

#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6571)
#define DSP_SPH_AGC1_CTRL    DPRAM2_base(DP2_AGC_CTRL)
#define DSP_SPH_AGC2_CTRL    DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_AGC3_CTRL    DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_AGC4_CTRL    DPRAM2_base(SPH_BKCP_DUMMY)
#elif defined(MT6592) || defined(MT6290) || defined(MT6582)
#define DSP_SPH_AGC1_CTRL    DPRAM2_base(DP2_AGC_CTRL)
#define DSP_SPH_AGC2_CTRL    DPRAM2_base(DP2_AGC2_CTRL)
#define DSP_SPH_AGC3_CTRL    DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_AGC4_CTRL    DPRAM2_base(SPH_BKCP_DUMMY)
#else
#define DSP_SPH_AGC1_CTRL    DPRAM2_base(DP2_AGC_CTRL)
#define DSP_SPH_AGC2_CTRL    DPRAM2_base(DP2_AGC2_CTRL)
#define DSP_SPH_AGC3_CTRL    DPRAM2_base(DP2_AGC3_CTRL)
#define DSP_SPH_AGC4_CTRL    DPRAM2_base(DP2_AGC4_CTRL)
#endif

#define DSP_SPH_AGC_GAIN     DPRAM2_base(DP2_AGC_GAIN) 
#define DSP_SPH_AGC_SW_GAIN1 DPRAM2_base(DP_AGC_SW_GAIN1)
#define DSP_SPH_AGC_SW_GAIN2 DPRAM2_base(DP_AGC_SW_GAIN2)
#define DSP_SPH_BT_MODE      DPRAM2_base(SPH_BT_MODE)
#define DSP_SPH_BT_CTRL      DPRAM2_base(SPH_BT_CTRL)
#define DSP_VBI_SYNC_BT_Earphone_CTRL    DPRAM2_base(DP_VBI_SYNC_BT_Earphone_CTRL)
#define DSP_AUDIO_VIA_BT_CTRL            DPRAM2_base(DP2_AUDIO_VIA_BT_CTRL)
/*
#define DSP_PNW_PTR_UL1                  DPRAM2_base(DP_PNW_PTR_UL1)
#define DSP_PNW_PTR_UL2                  DPRAM2_base(DP_PNW_PTR_UL2)
#define DSP_PNW_PTR_DL1                  DPRAM2_base(DP_PNW_PTR_DL1)
#define DSP_PNW_PTR_DL2                  DPRAM2_base(DP_PNW_PTR_DL2)*/

#if defined(MT6280)
#define DSP_SPH_3G_CTRL					(DPRAM2_base(DP_3G_mode))
#else
#define DSP_SPH_3G_CTRL					(DPRAM2_base(SPH_3G_CTRL))
#endif

#define DSP_SPH_COD_CTRL	DPRAM2_base(SPH_COD_CTRL)
#define DSP_SPH_COD_MODE	DPRAM2_base(SPH_COD_MODE)
#define DSP_SPH_COD_VAD		DPRAM2_base(DP2_SC_VAD)
#define DSP_SPH_SCH_IMPROVE_CTRL 		DPRAM2_base(SPH_SCH_IMPROVE_CTRL)
#define DSP_SPH_2G_SE_DATA_HDR			DPRAM2_base(SPH_2G_SE_DATA_HDR)
#define DSP_SPH_2G_SD_DATA_HDR			DPRAM2_base(SPH_2G_SD_DATA_HDR)
#define DSP_SPH_2G_SE_DATA_HB			DPRAM2_base(SPH_2G_SE_DATA_HB)
#define DSP_SPH_2G_SD_DATA_HB			DPRAM2_base(SPH_2G_SD_DATA_HB)
#define DSP_SPH_3G_SE_DATA_HDR			DPRAM2_base(SPH_3G_SE_DATA_HDR)
#define DSP_SPH_3G_SE_DATA_HB			DPRAM2_base(SPH_3G_SE_DATA_HB)
#define DSP_SPH_MUTE_CTRL	DPRAM2_base(SPH_MUTE_CTRL)
#define DSP_SPH_3G_SD_DATA_HDR			DPRAM2_base(SPH_3G_SD_DATA_HDR)
#define DSP_SPH_3G_SD_DATA_HB			DPRAM2_base(SPH_3G_SD_DATA_HB)
#define DSP_SPH_Encoder_Used_Mode 		DPRAM2_base(DP_Encoder_Used_Mode)
#define DSP_SPH_Decoder_Used_Mode       DPRAM2_base(DP_Decoder_Used_Mode)
#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6290)
#define DSP_SPH_3G_SYNC_FLAG			DPRAM2_base(DP_SPH_3G_SYNC_FLAG)
#else
#define DSP_SPH_3G_SYNC_FLAG			DPRAM2_base(SPH_3G_UNSYNC_STATUS)
#endif
//for 3g codec
#if defined(MT6280)
#define DSP_SPH_3G_SE_RATE				DPRAM2_base(DP_3G_SC_Type)//for updating dsp 3g codec amr rate each frame
#define DSP_SPH_3G_SD_RATE				DPRAM2_base(DP_3G_SD_Type)//for updating dsp 3g codec amr rate each frame
#else
#define DSP_SPH_3G_SE_RATE				DPRAM2_base(SPH_3G_SE_RATE_UPDATE)
#define DSP_SPH_3G_SD_RATE				DPRAM2_base(SPH_3G_SD_RATE_UPDATE)
#endif

#if defined(MT6280)
#define DSP_SPH_BGS_ADDR_DL				DPRAM2_base(DP_BGS_ADDR)
#define DSP_SPH_BGS_ADDR_UL				DPRAM2_base(DP_BGS_ADDR)
#elif defined(MT6589)
#define DSP_SPH_BGS_ADDR_DL				DPRAM2_base(SPH_DM_ADDR_BGS_BUF)
#define DSP_SPH_BGS_ADDR_UL				DPRAM2_base(SPH_DM_ADDR_BGS_BUF)
#else // come back
#define DSP_SPH_BGS_ADDR_DL				DPRAM2_base(SPH_DM_ADDR_BGS_DL_BUF)
#define DSP_SPH_BGS_ADDR_UL				DPRAM2_base(SPH_DM_ADDR_BGS_UL_BUF)
#endif

#if defined(MT6280) || defined(MT6589)
#define DSP_SPH_BGS_LEN_DL				DPRAM2_base(DP_BGS_LEN)
#define DSP_SPH_BGS_LEN_UL				DPRAM2_base(DP_BGS_LEN)
#define DSP_SPH_BGS_CTRL				DPRAM2_base(DP_BGS_CTRL)
#define DSP_SPH_BGS_MIX					DPRAM2_base(DP_BGS_MIX)
#define DSP_SPH_BGS_UL_GAIN				DPRAM2_base(DP_BGS_UL_GAIN)
#define DSP_SPH_BGS_DL_GAIN				DPRAM2_base(DP_BGS_DL_GAIN)
#else //come back
#define DSP_SPH_BGS_LEN_DL				DPRAM2_base(SPH_BGS_LEN_DL)
#define DSP_SPH_BGS_LEN_UL				DPRAM2_base(SPH_BGS_LEN_UL)
#define DSP_SPH_BGS_CTRL				DPRAM2_base(SPH_BGS_CTRL)
#define DSP_SPH_BGS_MIX					DPRAM2_base(SPH_BGS_MIX)
#define DSP_SPH_BGS_UL_GAIN				DPRAM2_base(SPH_BGS_UL_GAIN)
#define DSP_SPH_BGS_DL_GAIN				DPRAM2_base(SPH_BGS_DL_GAIN)
#endif


#if !defined(MT6280)
#define DSP_SPH_APP_MODE				DPRAM2_base(SPH_APP_MODE)
#endif

#define DSP_SPH_HR_FR_CTRL 				DPRAM2_base(DP_ENHANCED_AUDIO_CTRL)


#define DSP_SPH_FLT_COEF_ADDR_ST		DPRAM2_base(SPH_PM_ADDR_ST_FLT_COEF)
#define DSP_SPH_FLT_COEF_ADDR_BKF_NB_UL	DPRAM2_base(SPH_PM_ADDR_BKF_FLT_COEF_UL_NB)
#define DSP_SPH_FLT_COEF_ADDR_BKF_NB_DL	DPRAM2_base(SPH_PM_ADDR_BKF_FLT_COEF_DL_NB)
#define DSP_SPH_FLT_COEF_ADDR_BKF_WB_UL	DPRAM2_base(SPH_PM_ADDR_BKF_FLT_COEF_UL_WB)
#define DSP_SPH_FLT_COEF_ADDR_BKF_WB_DL	DPRAM2_base(SPH_PM_ADDR_BKF_FLT_COEF_DL_WB)
#define DSP_SPH_FLT_COEF_ADDR_SRC		DPRAM2_base(SPH_PM_ADDR_SRC_FLT_COEF)

#define DSP_SPH_COMPEN_BLOCK_FILTER		DPRAM2_base(DP2_COMPEN_BLOCK_FILTER)

#define DSP_SPH_ENH_DL_CTRL				DPRAM2_base(SPH_ENH_DL_CTRL)
#define DSP_SPH_ENH_UL_CTRL				DPRAM2_base(SPH_ENH_UL_CTRL)
#if !defined(MT6280)
#define DSP_SPH_TDNC_CTRL				DPRAM2_base(DP_TDNC_CTRL)
#else
#define DSP_SPH_TDNC_CTRL				DPRAM2_base(DP_AEC_CTRL)
#endif
#define DSP_SPH_EES_CTRL				DPRAM2_base(DP_EES_CTRL)
#define DSP_SPH_DMNR_CTRL				DPRAM2_base(DP_DMNR_CTRL)
#define DSP_SPH_NR_CTRL					DPRAM2_base(DP_NR_CTRL)
#define DSP_SPH_DL_NR_CTRL				DPRAM2_base(DP_DL_NR_CTRL)

#if !defined(MT6280)
#define DSP_SPH_DUMIC_CTRL				DPRAM2_base(SPH_DUMIC_CTRL)
#endif

#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592) && !defined(MT6290) &&!defined(MT6571)
#define DSP_SPH_THIRDMIC_CTRL   DPRAM2_base(SPH_THIRDMIC_CTRL)
#define DSP_SPH_FOURTHMIC_CTRL  DPRAM2_base(SPH_FOURTHMIC_CTRL)
#define DSP_SPH_ANC_CTRL        DPRAM2_base(SPH_ANC_CTRL)
#else
#define DSP_SPH_THIRDMIC_CTRL   DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_FOURTHMIC_CTRL  DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_ANC_CTRL        DPRAM2_base(SPH_BKCP_DUMMY)
#endif

#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592) && !defined(MT6290) &&!defined(MT6571)
#define DSP_SPH_PCM_ROUTER_CTRL DPRAM2_base(SPH_PCM_ROUTER_CTRL)
#else
#define DSP_SPH_PCM_ROUTER_CTRL DPRAM2_base(SPH_BKCP_DUMMY)
#endif

#define DSP_SPH_ENH_DL_CTRL				DPRAM2_base(SPH_ENH_DL_CTRL)
#define DSP_SPH_ENH_UL_CTRL				DPRAM2_base(SPH_ENH_UL_CTRL)

#define DSP_SPH_DL_VOL					DPRAM2_base(SPH_DL_VOL)
#define DSP_SPH_UL_VOL					DPRAM2_base(SPH_UL_VOL)

#define DSP_SPH_UL_COMFORT_NOISE_THRESHOLD	DPRAM2_base(DP_UL_COMFORT_NOISE_THRESHOLD)
#define DSP_SPH_UL_COMFORT_NOISE_SHIFT		DPRAM2_base(DP_UL_COMFORT_NOISE_SHIFT)

#define DSP_SPH_EMP_ADDR				DPRAM2_base(SPH_DM_ADDR_EMP) //value = 0x2e80

#define DSP_SPH_SE_BUF_PTR				DPRAM2_base(SPH_DM_ADDR_SE_PTR)
#define DSP_SPH_SD_BUF_PTR				DPRAM2_base(SPH_DM_ADDR_SD_PTR)
#define DSP_SPH_SE2_BUF_PTR				DPRAM2_base(SPH_DM_ADDR_SE2_PTR)
//MT6280, se2 ptr is in dm5 32bd, and buffer is in dm5 3400


#define DSP_SPH_D2C_UL_INT					DPRAM2_base(DP_D2C_SPEECH_UL_INT)
#define DSP_SPH_D2C_DL_INT					DPRAM2_base(DP_D2C_SPEECH_DL_INT)


#define DSP_IID_SPEECH_UL_ID	1
#define DSP_IID_SPEECH_DL_ID	2
#define DSP_IID_SPEECH_UL_ID2	3


#if defined(MT6280) || defined(MT6589)
#define DSP_SPH_PNW_CTRL_UL1			DPRAM2_base(DP_PNW_CTRL_UL)
#define DSP_SPH_PNW_CTRL_UL2			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_CTRL_DL				DPRAM2_base(DP_PNW_CTRL_DL)
#define DSP_SPH_DACA_CTRL				DPRAM2_base(DP_DACA_CTRL)
#define DSP_SPH_PNW_LEN_UL1					DPRAM2_base(DP_PNW_LEN_UL)
#define DSP_SPH_PNW_LEN_UL2					DSP_SPH_PNW_LEN_UL1
#define DSP_SPH_PNW_LEN_UL3					DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_LEN_UL4					DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_LEN_DL					DPRAM2_base(DP_PNW_LEN_DL)
#define DSP_SPH_EPL_BND					DPRAM2_base(DP2_EPL_BND)
#define DSP_SPH_CTM_CTRL				DPRAM2_base(DP_CTM_CTRL)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT			DPRAM2_base(DP_CTM_AMR_CODEBOOK_GAIN_LIMIT)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE		DPRAM2_base(DP_CTM_AMR_CODEBOOK_GAIN_UPDATE)
#define DSP_SPH_CTM_BFI_FACCH_REPORT	DPRAM2_base(DP_CTM_BFI_FACCH_REPORT)
#define DSP_SPH_CTM_AMR_REAL_RX_TYPE	DPRAM2_base(DP_CTM_AMR_REAL_RX_TYPE)
#elif defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6290)
#define DSP_SPH_PNW_CTRL_UL1			DPRAM2_base(SPH_PNW_CTRL_UL)
#define DSP_SPH_PNW_CTRL_UL2			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_CTRL_DL				DPRAM2_base(SPH_PNW_CTRL_DL)
#define DSP_SPH_DACA_CTRL				DPRAM2_base(SPH_DACA_CTRL)
#define DSP_SPH_PNW_LEN_UL1					DPRAM2_base(SPH_PNW_LEN_UL)
#define DSP_SPH_PNW_LEN_UL2					DSP_SPH_PNW_LEN_UL1
#define DSP_SPH_PNW_LEN_UL3					DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_LEN_UL4					DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_LEN_DL					DPRAM2_base(SPH_PNW_LEN_DL)
#define DSP_SPH_EPL_BND					DPRAM2_base(SPH_EPL_BND)
#define DSP_SPH_CTM_CTRL				DPRAM2_base(SPH_CTM_CTRL)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT			DPRAM2_base(SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE		DPRAM2_base(SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE)
#define DSP_SPH_CTM_BFI_FACCH_REPORT	DPRAM2_base(SPH_CTM_BFI_FACCH_REPORT)
#define DSP_SPH_CTM_AMR_REAL_RX_TYPE	DPRAM2_base(SPH_CTM_AMR_REAL_RX_TYPE)
#elif defined(MT6571)
#define DSP_SPH_PNW_CTRL_UL1			DPRAM2_base(SPH_PNW_CTRL_UL1)
#define DSP_SPH_PNW_CTRL_UL2			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_CTRL_DL				DPRAM2_base(SPH_PNW_CTRL_DL)
#define DSP_SPH_DACA_CTRL				DPRAM2_base(SPH_DACA_CTRL)
#define DSP_SPH_PNW_LEN_UL1					DPRAM2_base(SPH_PNW_LEN_UL1)
#define DSP_SPH_PNW_LEN_UL2					DSP_SPH_PNW_LEN_UL1
#define DSP_SPH_PNW_LEN_UL3					DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_LEN_UL4					DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_LEN_DL					DPRAM2_base(SPH_PNW_LEN_DL)
#define DSP_SPH_EPL_BND					DPRAM2_base(SPH_EPL_BND)
#define DSP_SPH_CTM_CTRL				DPRAM2_base(SPH_CTM_CTRL)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT			DPRAM2_base(SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE		DPRAM2_base(SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE)
#define DSP_SPH_CTM_BFI_FACCH_REPORT	DPRAM2_base(SPH_CTM_BFI_FACCH_REPORT)
#define DSP_SPH_CTM_AMR_REAL_RX_TYPE	DPRAM2_base(SPH_CTM_AMR_REAL_RX_TYPE)
#else
#define DSP_SPH_PNW_CTRL_UL1			DPRAM2_base(SPH_PNW_CTRL_UL1)
#define DSP_SPH_PNW_CTRL_UL2			DPRAM2_base(SPH_PNW_CTRL_UL2)
#define DSP_SPH_PNW_CTRL_DL				DPRAM2_base(SPH_PNW_CTRL_DL)
#define DSP_SPH_DACA_CTRL				DPRAM2_base(SPH_DACA_CTRL)
#define DSP_SPH_PNW_LEN_UL1					DPRAM2_base(SPH_PNW_LEN_UL1)
#define DSP_SPH_PNW_LEN_UL2					DPRAM2_base(SPH_PNW_LEN_UL2)
#define DSP_SPH_PNW_LEN_UL3					DPRAM2_base(SPH_PNW_LEN_UL3)
#define DSP_SPH_PNW_LEN_UL4					DPRAM2_base(SPH_PNW_LEN_UL4)
#define DSP_SPH_PNW_LEN_DL					DPRAM2_base(SPH_PNW_LEN_DL)
#define DSP_SPH_EPL_BND					DPRAM2_base(SPH_EPL_BND)
#define DSP_SPH_CTM_CTRL				DPRAM2_base(SPH_CTM_CTRL)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT			DPRAM2_base(SPH_CTM_AMR_CODEBOOK_GAIN_LIMIT)
#define DSP_SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE		DPRAM2_base(SPH_CTM_AMR_CODEBOOK_GAIN_UPDATE)
#define DSP_SPH_CTM_BFI_FACCH_REPORT	DPRAM2_base(SPH_CTM_BFI_FACCH_REPORT)
#define DSP_SPH_CTM_AMR_REAL_RX_TYPE	DPRAM2_base(SPH_CTM_AMR_REAL_RX_TYPE)
#endif

#if defined(MT6280)
#define DSP_SPH_PNW_BUF_UL1				DPRAM2_base(DP_PNW_PTR_UL1)
#define DSP_SPH_PNW_BUF_UL2				DPRAM2_base(DP_PNW_PTR_UL2)
#define DSP_SPH_PNW_BUF_UL3				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_BUF_UL4				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_BUF_DL1				DPRAM2_base(DP_PNW_PTR_DL1)
#define DSP_SPH_PNW_BUF_DL2				DPRAM2_base(DP_PNW_PTR_DL2)
#define DSP_SPH_DACA_UL_BUF				DPRAM2_base(DP_DACA_PTR_UL)
#define DSP_SPH_DACA_DL_BUF				DPRAM2_base(DP_DACA_PTR_DL)
#elif defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6290)
#define DSP_SPH_PNW_BUF_UL1				DPRAM2_base(SPH_DM_ADDR_PNW_UL1_BUF)
#define DSP_SPH_PNW_BUF_UL2				DPRAM2_base(SPH_DM_ADDR_PNW_UL2_BUF)
#define DSP_SPH_PNW_BUF_UL3				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_BUF_UL4				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_BUF_DL1				DPRAM2_base(SPH_DM_ADDR_PNW_DL1_BUF)
#define DSP_SPH_PNW_BUF_DL2				DPRAM2_base(SPH_DM_ADDR_PNW_DL2_BUF)
#define DSP_SPH_DACA_UL_BUF				DPRAM2_base(SPH_DM_ADDR_DACA_UL_BUF)
#define DSP_SPH_DACA_DL_BUF				DPRAM2_base(SPH_DM_ADDR_DACA_DL_BUF)
#elif defined(MT6571)
#define DSP_SPH_PNW_BUF_UL1				DPRAM2_base(SPH_DM_ADDR_PNW_UL1_BUF)
#define DSP_SPH_PNW_BUF_UL2				DPRAM2_base(SPH_DM_ADDR_PNW_UL2_BUF)
#define DSP_SPH_PNW_BUF_UL3				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_BUF_UL4				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_PNW_BUF_DL1				DPRAM2_base(SPH_DM_ADDR_PNW_DL_BUF)
#define DSP_SPH_PNW_BUF_DL2				DPRAM2_base(SPH_DM_ADDR_PNW_DL_BUF)
#define DSP_SPH_DACA_UL_BUF				DPRAM2_base(SPH_DM_ADDR_DACA_UL_BUF)
#define DSP_SPH_DACA_DL_BUF				DPRAM2_base(SPH_DM_ADDR_DACA_DL_BUF)
#else
#define DSP_SPH_PNW_BUF_UL1				DPRAM2_base(SPH_DM_ADDR_PNW_UL1_BUF)
#define DSP_SPH_PNW_BUF_UL2				DPRAM2_base(SPH_DM_ADDR_PNW_UL2_BUF)
#define DSP_SPH_PNW_BUF_UL3				DPRAM2_base(SPH_DM_ADDR_PNW_UL3_BUF)
#define DSP_SPH_PNW_BUF_UL4				DPRAM2_base(SPH_DM_ADDR_PNW_UL4_BUF)
#define DSP_SPH_PNW_BUF_DL1				DPRAM2_base(SPH_DM_ADDR_PNW_DL_BUF)
#define DSP_SPH_PNW_BUF_DL2				DPRAM2_base(SPH_DM_ADDR_PNW_DL_BUF)
#define DSP_SPH_DACA_UL_BUF				DPRAM2_base(SPH_DM_ADDR_DACA_UL_BUF)
#define DSP_SPH_DACA_DL_BUF				DPRAM2_base(SPH_DM_ADDR_DACA_DL_BUF)
#endif




#if defined(MT6280)
#define DSP_SPH_PCM_REC_CTRL			DPRAM2_base(DP_UL_DL_PCM_REC_ENA)
#else
#define DSP_SPH_PCM_REC_CTRL			DPRAM2_base(SPH_PCM_REC_CTRL)
#endif

#define DSP_SAL_DBG					DPRAM2_base(0x3d86)


#if defined(MT6280)
#define DSP_SPH_BAND				DSP_DM_ADDR(5, 0x2FBF)
#elif defined(MT6589)
#define DSP_SPH_BAND				DSP_DM_ADDR(5, 0x32F1)
#elif (defined(MT6572) || defined(MT6582) || defined(MT6592))
#define DSP_SPH_BAND				DSP_DM_ADDR(5, 0x332A)
#else
#define DSP_SPH_BAND 				DSP_DM_ADDR(5, *DPRAM2_base(SPH_DM_ADDR_BAND_FLAG))
#endif

#if (defined(MT6280) || defined(MT6589))
#define DSP_SPH_BAND_FLAG_BIT_SCH_UL 0
#define DSP_SPH_BAND_FLAG_BIT_SCH_DL 0
#define DSP_SPH_BAND_FLAG_BIT_COD 1
#else
#define DSP_SPH_BAND_FLAG_BIT_SCH_UL 0
#define DSP_SPH_BAND_FLAG_BIT_SCH_DL 1
#define DSP_SPH_BAND_FLAG_BIT_COD 2
#endif

#define DSP_SPH_VM_DBG_INFO				DPRAM2_base(DP_VM_DBG_INFO)

#if defined(MT6280) || defined(MT6589) || defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6290) || defined(MT6571)
#define AUX_PAGE_NUM 5
#else
#define AUX_PAGE_NUM 8
#endif


#if !defined(MT6280)
#define DSP_SPH_EPL_UL_PRE_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_UL_PRE_BUF)
#define DSP_SPH_EPL_UL_POS_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_UL_POS_BUF)
#define DSP_SPH_EPL_DL_PRE_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_DL_PRE_BUF)
#define DSP_SPH_EPL_DL_POS_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_DL_POS_BUF)
#endif

#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592) && !defined(MT6290)
#define DSP_SPH_EPL_UL2_POS_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_UL2_BUF)
#endif

#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592) && !defined(MT6290) &&!defined(MT6571)
#define DSP_SPH_EPL_UL3_POS_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_UL3_BUF)
#define DSP_SPH_EPL_UL4_POS_BUF			DPRAM2_base(SPH_DM_ADDR_EPL_UL4_BUF)
#else
#define DSP_SPH_EPL_UL3_POS_BUF			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_EPL_UL4_POS_BUF			DPRAM2_base(SPH_BKCP_DUMMY)
#endif

//for backward compatible
#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592) && !defined(MT6290)
#define SPH_BKCP_DUMMY					SPH_SAL_CHIPDIFF_DUMMY
#else
#define SPH_BKCP_DUMMY					SPH_UL_BKF_FLT_TAP
#endif
/*
#if defined(MT6280)
#define DSP_SPH_ENH_DYMANIC_SWITCH		DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_ENH_DEBUG_ADDR			DPRAM2_base(SPH_BKCP_DUMMY)
#else 
*/
#define DSP_SPH_ENH_DYMANIC_SWITCH		DPRAM2_base(SPH_ENH_DYNAMIC_SWITCH)
#define DSP_SPH_ENH_DEBUG_ADDR			DPRAM2_base(SPH_ENH_DEBUG_ADDR)
//#endif

#if defined(MT6571)
#define DSP_SPH_ST_ADAPT_GAIN        DSP_DM_ADDR(5, 0x332F)
#elif defined(MT6592) || defined(MT6582)
#define DSP_SPH_ST_ADAPT_GAIN        DSP_DM_ADDR(5, 0x332D)
#elif defined(MT6595) || defined(MT6752) || defined(MT6735)
#define DSP_SPH_ST_ADAPT_GAIN        DSP_DM_ADDR(5, 0x37CE)
#else
#define DSP_SPH_ST_ADAPT_GAIN        DPRAM2_base(SPH_BKCP_DUMMY)
#endif

#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6571)
#define DSP_SPH_ENH_INTERNAL_PAR_ADDR   DPRAM2_base(SPH_ENH_INTERNAL_PAR_ADDR)
#else
#define DSP_SPH_ENH_INTERNAL_PAR_ADDR   DPRAM2_base(SPH_BKCP_DUMMY)
#endif

#if defined(MT6280) || defined(MT6589)
#define DSP_SPH_ENH_DL_GAIN				DPRAM2_base(SPH_BKCP_DUMMY)
#else //defined(MT6572) || defined(MT6582) || defined(MT6592) || defined(MT6571) || defined(MT6290) || defined(MT6595)
#define DSP_SPH_ENH_DL_GAIN				DPRAM2_base(SPH_ENH_DL_GAIN)
#endif

#if defined(MT6280) || defined(MT6589)
#define DSP_SPH_8K_RESYNC_CTRL 		DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_8K_RESYNC_OFFSET_UL			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_8K_RESYNC_OFFSET_DL			DPRAM2_base(SPH_BKCP_DUMMY)
#else 
#define DSP_SPH_8K_RESYNC_CTRL 		DPRAM2_base(SPH_8K_RESYNC_CTRL)
#define DSP_SPH_8K_RESYNC_OFFSET_UL			DPRAM2_base(SPH_8K_RESYNC_OFFSET_UL)
#define DSP_SPH_8K_RESYNC_OFFSET_DL			DPRAM2_base(SPH_8K_RESYNC_OFFSET_DL)
#endif

#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592)
#define DSP_SPH_WARN_MSG_UL			DPRAM2_base(SPH_WARN_MSG_UL)
#define DSP_SPH_WARN_MSG_DL			DPRAM2_base(SPH_WARN_MSG_DL)
#else
#define DSP_SPH_WARN_MSG_UL			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_WARN_MSG_DL			DPRAM2_base(SPH_BKCP_DUMMY)
#endif

//from 6595 join
#if !defined(MT6280) && !defined(MT6589) && !defined(MT6572) && !defined(MT6582) && !defined(MT6592) && !defined(MT6290)
#define DSP_SPH_DEL_M_DL     DPRAM2_base(SPH_DEL_M_DL)
#define DSP_SPH_DEL_M_UL     DPRAM2_base(SPH_DEL_M_UL)
#else
#define DSP_SPH_DEL_M_DL     DPRAM2_base(SPH_DEL_M)
#define DSP_SPH_DEL_M_UL     DPRAM2_base(SPH_BKCP_DUMMY)
#endif
#if defined(MT6290)
#define DSP_SPH_EXTCOD_PEX_CTRL			DPRAM2_base(SPH_EXTCOD_PEX_CTRL)
#define DSP_SPH_EXTCOD_PEX_LEN			DPRAM2_base(SPH_EXTCOD_PEX_LEN)
#define DSP_SPH_EXTCOD_BUF_UL				DSP_DM_ADDR(5, 0x0000)
#define DSP_SPH_EXTCOD_BUF_DL				DSP_DM_ADDR(5, 0x0140)
#define DSP_SPH_VOLTE_JBM_OUT_SN		DPRAM2_base(SPH_VOLTE_JBM_OUT_SN)
#else
#define DSP_SPH_EXTCOD_PEX_CTRL			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_EXTCOD_PEX_LEN			DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_EXTCOD_BUF_UL				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_EXTCOD_BUF_DL				DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_VOLTE_JBM_OUT_SN		DPRAM2_base(SPH_BKCP_DUMMY)
#endif

#if defined(MT6735) || defined(MT6595) || defined(MT6752)
#define DSP_SPH_ATTACK_GAIN_DL_NB   DPRAM2_base(SPH_ATTACK_GAIN_DL_NB)
#define DSP_SPH_RELEASE_GAIN_DL_NB  DPRAM2_base(SPH_RELEASE_GAIN_DL_NB)
#define DSP_SPH_ATTACK_GAIN_DL_WB   DPRAM2_base(SPH_ATTACK_GAIN_DL_WB)
#define DSP_SPH_RELEASE_GAIN_DL_WB  DPRAM2_base(SPH_RELEASE_GAIN_DL_WB)
#else
#define DSP_SPH_ATTACK_GAIN_DL_NB   DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_RELEASE_GAIN_DL_NB  DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_ATTACK_GAIN_DL_WB   DPRAM2_base(SPH_BKCP_DUMMY)
#define DSP_SPH_RELEASE_GAIN_DL_WB  DPRAM2_base(SPH_BKCP_DUMMY)
#endif

#define DSP_SPH_KT1_FSM					DPRAM2_base(KEYTONE1_CTRL)
#define DSP_SPH_KT2_FSM					DPRAM2_base(KEYTONE2_CTRL)
#define DSP_SPH_KT_FORCE_8K				DPRAM2_base(DP_ASP_FORCE_KT_8K)
#define DSP_SPH_KT1_FREQ1				DPRAM2_base(KEYTONE1_FREQ)
#define DSP_SPH_KT1_FREQ2				DPRAM2_base((KEYTONE1_FREQ + 1))
#define DSP_SPH_KT1_AMP					DPRAM2_base((KEYTONE1_FREQ + 2))
#define DSP_SPH_KT2_FREQ1				DPRAM2_base(KEYTONE2_FREQ)
#define DSP_SPH_KT2_FREQ2				DPRAM2_base((KEYTONE2_FREQ + 1))
#define DSP_SPH_KT2_AMP					DPRAM2_base((KEYTONE2_FREQ + 2))
#define DSP_SPH_KT_ATT_GAIN				DPRAM2_base(KEYTONE_ATT_GAIN_ADDR)

#define DSP_SPH_DEBUG_ASSERT_CTRL		DPRAM2_base(DEBUG_ASSERT_CTRL)

void Set_Dsp_Bit(volatile uint16 *addr, uint8 bitn);
void Clear_Dsp_Bit(volatile uint16 *addr, uint8 bitn);

#endif
