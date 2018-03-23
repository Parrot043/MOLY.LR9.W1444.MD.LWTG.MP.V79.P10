#ifndef L1TRC_EMAC_DETAIL_DEF_H
#define L1TRC_EMAC_DETAIL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TIMER_START(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x000E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TIMER_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_RA_RAR_DUMP(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x010E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_RA_RAR_DUMP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_SPS_UNSYNC_ERROR(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x020E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_SPS_UNSYNC_ERROR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_GET_HARQ(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x030E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_GET_HARQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_TTI_GET_HARQ(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x040E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_TTI_GET_HARQ(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_REQ_DATA(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x050E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_REQ_DATA(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CE_CRNTI(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x060E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CE_CRNTI(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CE_LBSR(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x070E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CE_LBSR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CE_SBSR(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x080E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CE_SBSR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CE_PHR(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x090E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CE_PHR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_STATUS_IND(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x0A0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_STATUS_IND(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_DATA_REQ(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x0B0E | ((unsigned short)(v1) << 16), (kal_uint32)((char)(v2)) | (((kal_uint32)((char)(v3))) << 8) | (((kal_uint32)TRC_L2_PAD) << 16) | (((kal_uint32)TRC_L2_PAD) << 24), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_DATA_REQ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_DATA_REQ2(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x0C0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_DATA_REQ2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CLOSS_SSID(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x0D0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CLOSS_SSID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CLR_TX_TL(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x0E0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_CLR_TX_TL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SET_TX_TL(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x0F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_SET_TX_TL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_DUP_RETX_INFO(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x100E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_DUP_RETX_INFO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_BSR_RETX_TMR_START(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x110E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_BSR_RETX_TMR_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_BSR_PERI_TMR_START(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x120E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_BSR_PERI_TMR_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_BSR_INCLUDE(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x130E | ((unsigned short)(v1) << 16), (kal_uint32)((char)(v2)) | (((kal_uint32)TRC_L2_PAD) << 8) | (((kal_uint32)TRC_L2_PAD) << 16) | (((kal_uint32)TRC_L2_PAD) << 24), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_BSR_INCLUDE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_BSR_TRIGGER(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x140E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_BSR_TRIGGER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_BSR_LCG_STATUS(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x150E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_BSR_LCG_STATUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SET_LONG_BSR(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x160E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_SET_LONG_BSR(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SET_SHORT_BSR(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x170E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_SET_SHORT_BSR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SET_TRU_BSR(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x180E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_SET_TRU_BSR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_RETX_INFO0(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x190E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_RETX_INFO0(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_RETX_INFO1(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x1A0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_RETX_INFO1(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_RETX_INFO2(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x1B0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_RETX_INFO2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_DROP_GRANT(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x1C0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_DROP_GRANT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DL_HT(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x1D0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_DL_HT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EAMC_LOG_DL_ASSIGNMENT(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x1E0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EAMC_LOG_DL_ASSIGNMENT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DL_SWO(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x1F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DL_SWO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DL_PROC_HT_RECORDS(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x200E | ((short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DL_PROC_HT_RECORDS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_LAST_ACTIVE_SUBFRAME(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x210E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_LAST_ACTIVE_SUBFRAME(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_STATUS(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x220E | ((short)(v1) << 16), (kal_uint32)((char)(v2)) | (((kal_uint32)((char)(v3))) << 8) | (((kal_uint32)((char)(v4))) << 16) | (((kal_uint32)TRC_L2_PAD) << 24));\
	} while(0)
#else
	#define EMAC_LOG_DRX_STATUS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_TIME_TO_HARQ(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x230E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_TIME_TO_HARQ(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_TIME_TO_PDCCH(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x240E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_TIME_TO_PDCCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_TIME_TO_RTT_TMR(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x250E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_TIME_TO_RTT_TMR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_HOST_WAKEUP(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x260E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_HOST_WAKEUP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_DRX_LOG_UPDATE_T_PDCCH(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x270E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_DRX_LOG_UPDATE_T_PDCCH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_SR_UPDATE_WAKE_TIME(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x280E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_SR_UPDATE_WAKE_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_SR_UPDATE_RNTI_TIME(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x290E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_SR_UPDATE_RNTI_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_HARQ_UPDATE_WAKE_TIME(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x2A0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_HARQ_UPDATE_WAKE_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_HARQ_UPDATE_RNTI_TIME(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x2B0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_HARQ_UPDATE_RNTI_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_UL_SPS_UPDATE_WAKE_TIME(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x2C0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_UL_SPS_UPDATE_WAKE_TIME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_DL_SPS_UPDATE_WAKE_TIME(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x2D0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_DL_SPS_UPDATE_WAKE_TIME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_DL_SPS_UPDATE_RNTI_TIME(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x2E0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_DL_SPS_UPDATE_RNTI_TIME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_WAKE_DRX_CYCLE(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x2F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_WAKE_DRX_CYCLE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_RNTI_DRX_CYCLE(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x300E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_RNTI_DRX_CYCLE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_PUSCH_UPDATE_WAKE_TIME(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x310E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_PUSCH_UPDATE_WAKE_TIME(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHK_PUSCH_GRANT(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x320E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHK_PUSCH_GRANT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHK_PUSCH_NACK(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x330E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHK_PUSCH_NACK(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHK_PUSCH_HARQ(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x340E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHK_PUSCH_HARQ(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHK_PUSCH_SKIP(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x350E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHK_PUSCH_SKIP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHK_PUSCH_TICK(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x360E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHK_PUSCH_TICK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_SLP_FRC(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x370E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_SLP_FRC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_SLP_RCV_UL_DATA(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x380E | ((short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_SLP_RCV_UL_DATA(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_SLP_NOT_TRIGGER_SR(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x390E | ((short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_SLP_NOT_TRIGGER_SR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_RCV_LEAVE_DRX(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x3A0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_RCV_LEAVE_DRX(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_RCV_WAKEUP_CNF(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x3B0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_RCV_WAKEUP_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_HOST_DATA_REQ_FLAG(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x3C0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_HOST_DATA_REQ_FLAG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_LATE_WAKEUP_CNF(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x3D0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_LATE_WAKEUP_CNF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CANCEL_PENDING_HOST_DATA(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x3E0E | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CANCEL_PENDING_HOST_DATA(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CANCEL_DRX_RETX_TIMER(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x3F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CANCEL_DRX_RETX_TIMER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_SBP_OFF(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x400E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_SBP_OFF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_IGNORE(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x410E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_IGNORE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_RCV_START(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x420E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_RCV_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_DUP_START(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x430E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_DUP_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_RCV_END(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x440E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_RCV_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_TMR_EXP(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x450E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_TMR_EXP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_DRX_SUS(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x460E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_DRX_SUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_RCV_END_AFT(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x470E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_RCV_END_AFT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_GAP_TMR_START(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x480E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_GAP_TMR_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_PROHIBIT_TMR_START(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x490E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_PROHIBIT_TMR_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_PROHIBIT_TMR_EXP(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x4A0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_PROHIBIT_TMR_EXP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_DCI_DROP_SUS(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x4B0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_DCI_DROP_SUS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_RESUME(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x4C0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_RESUME(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_PROHIBIT_RUNNING(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x4D0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_PROHIBIT_RUNNING(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_INJECT_GAP(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x4E0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_INJECT_GAP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_HARQ_CLOSE(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x4F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_HARQ_CLOSE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_INC_ACK_IN_GAP(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x500E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_DRX_INC_ACK_IN_GAP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_SR_SUSPEND_DRX(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x510E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_SR_SUSPEND_DRX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_RA_SUSPEND_DRX(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x520E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_RA_SUSPEND_DRX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHK_WAKE(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x530E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHK_WAKE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_RESERVE_GRANT(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x540E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_RESERVE_GRANT(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CLOSE_RESV_HARQ(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x550E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CLOSE_RESV_HARQ(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SCH_RESV_ADP_RETX(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x560E | ((unsigned short)(v1) << 16), (kal_uint32)((char)(v3)) | (((kal_uint32)TRC_L2_PAD) << 8) | (((kal_uint32)TRC_L2_PAD) << 16) | (((kal_uint32)TRC_L2_PAD) << 24), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_SCH_RESV_ADP_RETX(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SCH_RESV_NON_ADP_RETX(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x570E | ((unsigned short)(v1) << 16), (kal_uint32)((char)(v3)) | (((kal_uint32)TRC_L2_PAD) << 8) | (((kal_uint32)TRC_L2_PAD) << 16) | (((kal_uint32)TRC_L2_PAD) << 24), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_SCH_RESV_NON_ADP_RETX(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_REQ_IN_GEMINI_GAP(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x580E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_REQ_IN_GEMINI_GAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_PDCCH_MAY_BE_IN_GAP(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x590E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_PDCCH_MAY_BE_IN_GAP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_GAP_STATE(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x5A0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_GAP_STATE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_GEMINI_GAP_RX_START(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x5B0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_GEMINI_GAP_RX_START(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_GEMINI_GAP_RX_END(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x5C0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_GEMINI_GAP_RX_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SET_GEMINI_PHICH(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x5D0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_TX_SET_GEMINI_PHICH(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_GAP_FORCE_BSR(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x5E0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_GAP_FORCE_BSR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_JUDGE_RETX_MODE(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x5F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_JUDGE_RETX_MODE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_TX_SKIP_FOR_GAP(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x600E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_TX_SKIP_FOR_GAP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_UPDATE_G_GAP(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x610E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_UPDATE_G_GAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_SKIP_FOR_G_GAP(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x620E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_SKIP_FOR_G_GAP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_NOT_SKIP_LONG_GAP(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x630E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_NOT_SKIP_LONG_GAP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_NOT_SKIP_TX_NB(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x640E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_NOT_SKIP_TX_NB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_DISABLE_PHICH(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x650E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_DISABLE_PHICH(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_DISABLE_PHICH_BUNDLING(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x660E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_DISABLE_PHICH_BUNDLING(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_GEMINI_ALIGNED_GAP_TIME(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x670E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_TX_GEMINI_ALIGNED_GAP_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_GEMINI_SIM_RESULT(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x680E | ((unsigned short)(v1) << 16), (kal_uint32)((char)(v2)) | (((kal_uint32)TRC_L2_PAD) << 8) | (((kal_uint32)TRC_L2_PAD) << 16) | (((kal_uint32)TRC_L2_PAD) << 24), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_TX_GEMINI_SIM_RESULT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_REPORT(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x690E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_REPORT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_CALLON(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x6A0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_CALLON(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_CALLOFF(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x6B0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_CALLOFF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_REPORT_TIMING(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x6C0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_REPORT_TIMING(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_RB_STATUS(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x6D0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_RB_STATUS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_PREDICTION(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x6E0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_PREDICTION(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_NOT_WAKEUP(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x6F0E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_NOT_WAKEUP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_PREDICTION_HIT(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x700E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_PREDICTION_HIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_VSR_COVER(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x710E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_VSR_COVER(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_USING_VSR(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x720E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_USING_VSR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_VSR_CFG(v1, v2, v3, v4) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x730E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_VSR_CFG(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_UPDATE_WAKEUP(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x740E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_UPDATE_WAKEUP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_UPDATE_RX_TIME(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x750E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_UPDATE_RX_TIME(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_DRX_CHECK_SR_WAKEUP(v1, v2, v3) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_3_word(0x760E | ((unsigned short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EMAC_LOG_DRX_CHECK_SR_WAKEUP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_TX_CLOSE_INVALID_SSID(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x770E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_TX_CLOSE_INVALID_SSID(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_RA_SAVE_MSG3_HWB(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x780E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_RA_SAVE_MSG3_HWB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_RA_MSG3_HARQ_RELOAD_UPD(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x790E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_RA_MSG3_HARQ_RELOAD_UPD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_MSG3_FORCE_CLOSE_SKIP(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x7A0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_MSG3_FORCE_CLOSE_SKIP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_RA_RAPID_MISMATCH_DUMP(v1, v2) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x7B0E | ((unsigned short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EMAC_LOG_RA_RAPID_MISMATCH_DUMP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_RA_RAPID_MISMATCH_CNT(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x7C0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_RA_RAPID_MISMATCH_CNT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EMAC_LOG_VOLTE_SET_SILENCE(v1) do {\
		if(EMAC_DETAIL_Trace_Filter[0]==1 && (EMAC_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_1_word(0x7D0E | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EMAC_LOG_VOLTE_SET_SILENCE(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char EMAC_DETAIL_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_EMAC_LOG_TIMER_START(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_RA_RAR_DUMP(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_SPS_UNSYNC_ERROR(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_GET_HARQ(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_TTI_GET_HARQ(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_REQ_DATA(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_CE_CRNTI(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_CE_LBSR(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_CE_SBSR(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_CE_PHR(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_STATUS_IND(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_DATA_REQ(unsigned short v1, char v2, char v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_DATA_REQ2(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_CLOSS_SSID(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_CLR_TX_TL(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_SET_TX_TL(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_DUP_RETX_INFO(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_BSR_RETX_TMR_START(unsigned short v1);
void L1TRC_Send_EMAC_LOG_BSR_PERI_TMR_START(unsigned short v1);
void L1TRC_Send_EMAC_LOG_BSR_INCLUDE(unsigned short v1, char v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_BSR_TRIGGER(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_BSR_LCG_STATUS(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_SET_LONG_BSR(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_SET_SHORT_BSR(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_SET_TRU_BSR(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_RETX_INFO0(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_RETX_INFO1(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_RETX_INFO2(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_DROP_GRANT(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DL_HT(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EAMC_LOG_DL_ASSIGNMENT(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_DL_SWO(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DL_PROC_HT_RECORDS(short v1);
void L1TRC_Send_EMAC_LOG_DRX_LAST_ACTIVE_SUBFRAME(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_STATUS(short v1, char v2, char v3, char v4);
void L1TRC_Send_EMAC_LOG_DRX_TIME_TO_HARQ(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_TIME_TO_PDCCH(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_TIME_TO_RTT_TMR(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_HOST_WAKEUP(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_DRX_LOG_UPDATE_T_PDCCH(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_SR_UPDATE_WAKE_TIME(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_SR_UPDATE_RNTI_TIME(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_HARQ_UPDATE_WAKE_TIME(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_HARQ_UPDATE_RNTI_TIME(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_UL_SPS_UPDATE_WAKE_TIME(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_DL_SPS_UPDATE_WAKE_TIME(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_DL_SPS_UPDATE_RNTI_TIME(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_WAKE_DRX_CYCLE(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_RNTI_DRX_CYCLE(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_PUSCH_UPDATE_WAKE_TIME(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_CHK_PUSCH_GRANT(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_CHK_PUSCH_NACK(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_DRX_CHK_PUSCH_HARQ(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_DRX_CHK_PUSCH_SKIP(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_DRX_CHK_PUSCH_TICK(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_SLP_FRC(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_SLP_RCV_UL_DATA(short v1);
void L1TRC_Send_EMAC_LOG_DRX_SLP_NOT_TRIGGER_SR(short v1);
void L1TRC_Send_EMAC_LOG_DRX_RCV_LEAVE_DRX(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_RCV_WAKEUP_CNF(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_HOST_DATA_REQ_FLAG(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_LATE_WAKEUP_CNF(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_CANCEL_PENDING_HOST_DATA(short v1, long v2, long v3);
void L1TRC_Send_EMAC_LOG_DRX_CANCEL_DRX_RETX_TIMER(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_SBP_OFF(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_IGNORE(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_RCV_START(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_DUP_START(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_RCV_END(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_TMR_EXP(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_DRX_SUS(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_RCV_END_AFT(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_GAP_TMR_START(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_PROHIBIT_TMR_START(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_PROHIBIT_TMR_EXP(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_DCI_DROP_SUS(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_RESUME(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_PROHIBIT_RUNNING(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_INJECT_GAP(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_INC_HARQ_CLOSE(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_DRX_INC_ACK_IN_GAP(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_SR_SUSPEND_DRX(unsigned short v1);
void L1TRC_Send_EMAC_LOG_RA_SUSPEND_DRX(unsigned short v1);
void L1TRC_Send_EMAC_LOG_DRX_CHK_WAKE(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_RESERVE_GRANT(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_CLOSE_RESV_HARQ(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_SCH_RESV_ADP_RETX(unsigned short v1, unsigned long v2, char v3);
void L1TRC_Send_EMAC_LOG_TX_SCH_RESV_NON_ADP_RETX(unsigned short v1, unsigned long v2, char v3);
void L1TRC_Send_EMAC_LOG_TX_REQ_IN_GEMINI_GAP(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_PDCCH_MAY_BE_IN_GAP(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_GAP_STATE(unsigned short v1);
void L1TRC_Send_EMAC_LOG_GEMINI_GAP_RX_START(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_GEMINI_GAP_RX_END(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_SET_GEMINI_PHICH(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_TX_GAP_FORCE_BSR(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_JUDGE_RETX_MODE(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_TX_SKIP_FOR_GAP(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_UPDATE_G_GAP(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_SKIP_FOR_G_GAP(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_NOT_SKIP_LONG_GAP(unsigned short v1);
void L1TRC_Send_EMAC_LOG_TX_NOT_SKIP_TX_NB(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_DISABLE_PHICH(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_DISABLE_PHICH_BUNDLING(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_TX_GEMINI_ALIGNED_GAP_TIME(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_GEMINI_SIM_RESULT(unsigned short v1, char v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_VOLTE_REPORT(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_VOLTE_CALLON(unsigned short v1);
void L1TRC_Send_EMAC_LOG_VOLTE_CALLOFF(unsigned short v1);
void L1TRC_Send_EMAC_LOG_VOLTE_REPORT_TIMING(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_VOLTE_RB_STATUS(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_VOLTE_PREDICTION(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_VOLTE_NOT_WAKEUP(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_VOLTE_PREDICTION_HIT(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_VOLTE_VSR_COVER(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_VOLTE_USING_VSR(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_VOLTE_VSR_CFG(unsigned short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EMAC_LOG_DRX_UPDATE_WAKEUP(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_UPDATE_RX_TIME(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_DRX_CHECK_SR_WAKEUP(unsigned short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EMAC_LOG_TX_CLOSE_INVALID_SSID(unsigned short v1);
void L1TRC_Send_EMAC_LOG_RA_SAVE_MSG3_HWB(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_RA_MSG3_HARQ_RELOAD_UPD(unsigned short v1);
void L1TRC_Send_EMAC_LOG_MSG3_FORCE_CLOSE_SKIP(unsigned short v1);
void L1TRC_Send_EMAC_LOG_RA_RAPID_MISMATCH_DUMP(unsigned short v1, unsigned long v2);
void L1TRC_Send_EMAC_LOG_RA_RAPID_MISMATCH_CNT(unsigned short v1);
void L1TRC_Send_EMAC_LOG_VOLTE_SET_SILENCE(unsigned short v1);

void Set_EMAC_DETAIL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EMAC_DETAIL()	(EMAC_DETAIL_Trace_Filter[0]==1)
#define ChkL1ClsFltr_EMAC_DETAIL_EMAC_FUNC()	(ChkL1ModFltr_EMAC_DETAIL()&&((EMAC_DETAIL_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_EMAC_DETAIL_EMAC_BRANCH()	(ChkL1ModFltr_EMAC_DETAIL()&&((EMAC_DETAIL_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()	(ChkL1ModFltr_EMAC_DETAIL()&&((EMAC_DETAIL_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()	(ChkL1ModFltr_EMAC_DETAIL()&&((EMAC_DETAIL_Trace_Filter[1]&0x08)!=0))
#define ChkL1MsgFltr_EMAC_LOG_TIMER_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_FUNC()
#define ChkL1MsgFltr_EMAC_LOG_RA_RAR_DUMP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_SPS_UNSYNC_ERROR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_GET_HARQ()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_TTI_GET_HARQ()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_REQ_DATA()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_CE_CRNTI()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_CE_LBSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_CE_SBSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_CE_PHR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_STATUS_IND()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_DATA_REQ()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_DATA_REQ2()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_CLOSS_SSID()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_CLR_TX_TL()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_SET_TX_TL()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_DUP_RETX_INFO()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_BSR_RETX_TMR_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_BSR_PERI_TMR_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_BSR_INCLUDE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_BSR_TRIGGER()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_BSR_LCG_STATUS()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_SET_LONG_BSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_SET_SHORT_BSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_SET_TRU_BSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_TX_RETX_INFO0()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_RETX_INFO1()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_RETX_INFO2()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_DROP_GRANT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DL_HT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EAMC_LOG_DL_ASSIGNMENT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_DL_SWO()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_DL_PROC_HT_RECORDS()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_PACKET()
#define ChkL1MsgFltr_EMAC_LOG_DRX_LAST_ACTIVE_SUBFRAME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_STATUS()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_TIME_TO_HARQ()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_TIME_TO_PDCCH()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_TIME_TO_RTT_TMR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_HOST_WAKEUP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_DRX_LOG_UPDATE_T_PDCCH()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_SR_UPDATE_WAKE_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_SR_UPDATE_RNTI_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_HARQ_UPDATE_WAKE_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_HARQ_UPDATE_RNTI_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_UL_SPS_UPDATE_WAKE_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_DL_SPS_UPDATE_WAKE_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_DL_SPS_UPDATE_RNTI_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_WAKE_DRX_CYCLE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_RNTI_DRX_CYCLE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_PUSCH_UPDATE_WAKE_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHK_PUSCH_GRANT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHK_PUSCH_NACK()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHK_PUSCH_HARQ()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHK_PUSCH_SKIP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHK_PUSCH_TICK()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_SLP_FRC()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_SLP_RCV_UL_DATA()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_SLP_NOT_TRIGGER_SR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_RCV_LEAVE_DRX()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_RCV_WAKEUP_CNF()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_HOST_DATA_REQ_FLAG()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_LATE_WAKEUP_CNF()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CANCEL_PENDING_HOST_DATA()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CANCEL_DRX_RETX_TIMER()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_SBP_OFF()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_IGNORE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_RCV_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_DUP_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_RCV_END()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_TMR_EXP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_DRX_SUS()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_RCV_END_AFT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_GAP_TMR_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_PROHIBIT_TMR_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_PROHIBIT_TMR_EXP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_DCI_DROP_SUS()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_RESUME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_PROHIBIT_RUNNING()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_INJECT_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_HARQ_CLOSE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_INC_ACK_IN_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_SR_SUSPEND_DRX()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_RA_SUSPEND_DRX()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHK_WAKE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_RESERVE_GRANT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_CLOSE_RESV_HARQ()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_SCH_RESV_ADP_RETX()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_SCH_RESV_NON_ADP_RETX()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_REQ_IN_GEMINI_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_PDCCH_MAY_BE_IN_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_GAP_STATE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_GEMINI_GAP_RX_START()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_GEMINI_GAP_RX_END()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_SET_GEMINI_PHICH()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_GAP_FORCE_BSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_JUDGE_RETX_MODE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_TX_SKIP_FOR_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_UPDATE_G_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_SKIP_FOR_G_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_NOT_SKIP_LONG_GAP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_NOT_SKIP_TX_NB()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_DISABLE_PHICH()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_DISABLE_PHICH_BUNDLING()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_GEMINI_ALIGNED_GAP_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_GEMINI_SIM_RESULT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_REPORT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_CALLON()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_CALLOFF()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_REPORT_TIMING()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_RB_STATUS()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_PREDICTION()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_NOT_WAKEUP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_PREDICTION_HIT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_VSR_COVER()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_USING_VSR()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_VSR_CFG()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_UPDATE_WAKEUP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_UPDATE_RX_TIME()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_DRX_CHECK_SR_WAKEUP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_TX_CLOSE_INVALID_SSID()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_RA_SAVE_MSG3_HWB()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_RA_MSG3_HARQ_RELOAD_UPD()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_MSG3_FORCE_CLOSE_SKIP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_RA_RAPID_MISMATCH_DUMP()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_RA_RAPID_MISMATCH_CNT()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()
#define ChkL1MsgFltr_EMAC_LOG_VOLTE_SET_SILENCE()	ChkL1ClsFltr_EMAC_DETAIL_EMAC_INFO()


#endif
