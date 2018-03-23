#ifndef L1TRC_ERLCUL_DEF_H
#define L1TRC_ERLCUL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_GENERIC(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_4_word(0x0009 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_GENERIC(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_ERROR(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x0109 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_ERROR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SCH_GRANT_IND(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0209 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SCH_GRANT_IND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SCH_RESULT(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0309 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SCH_RESULT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SCH_RESULT_PAD(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0409 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SCH_RESULT_PAD(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_1ST_RND_START(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x0509 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_1ST_RND_START(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_1ST_RND_RESTART(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x0609 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_1ST_RND_RESTART(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_1ST_RND_END(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0709 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_1ST_RND_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_2ND_RND_START(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x0809 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_2ND_RND_START(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_2ND_RND_RESTART(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0909 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_2ND_RND_RESTART(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_2ND_RND_END(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0A09 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_2ND_RND_END(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SIT_IDX_JMP(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0B09 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_SIT_IDX_JMP(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_SUMMARY(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x0C09 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_SUMMARY(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_RETX_PDU(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x0D09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SRV_RETX_PDU(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_RETX_SEG(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x0E09 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_SRV_RETX_SEG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_RETX_PDU_BY_RESEG(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0F09 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_SRV_RETX_PDU_BY_RESEG(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_RETX_SEG_BY_RESEG(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x1009 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_SRV_RETX_SEG_BY_RESEG(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_MAX_RETX(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1109 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_MAX_RETX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_AM_SN(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1209 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_AM_SN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_UM5_SN(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x1309 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_UL_UM5_SN(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_UM10_SN(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1409 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_UM10_SN(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SEND_STUS_PDU(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x1509 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_SEND_STUS_PDU(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_REGEN_STUS_PDU(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1609 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_REGEN_STUS_PDU(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_VT_A_UPDATE(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1709 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_VT_A_UPDATE(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_STUS_PDU_IND(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x1809 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_STUS_PDU_IND(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_STUS_PDU_IND_DUP(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_4_word(0x1909 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_STUS_PDU_IND_DUP(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_NACK_DUP(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x1A09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_NACK_DUP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_NACK_BAD_SO(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_4_word(0x1B09 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_NACK_BAD_SO(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRB_DATA_CNF(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1C09 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_SRB_DATA_CNF(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_DISCARD_SIT(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_4_word(0x1D09 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_DISCARD_SIT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_DISCARD_SIT_RANGE(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x1E09 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_DISCARD_SIT_RANGE(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_STUS_PROH(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1F09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_STUS_PROH(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_START(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2009 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_STOP(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2109 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_STOP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_EXPRY(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2209 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_EXPRY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_EXPRY_ADD_PDU(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x2309 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_EXPRY_ADD_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_EXPRY_NO_SDU(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2409 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_EXPRY_NO_SDU(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_EXPRY_NO_LOSS(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2509 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_EXPRY_NO_LOSS(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_EXPRY_FAKE(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2609 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_EXPRY_FAKE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_POLL_RETX_EXPRY_MULTI(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2709 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_POLL_RETX_EXPRY_MULTI(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_IDC_START(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2809 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_IDC_START(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_IDC_RESTART(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2909 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_IDC_RESTART(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_IDC_END(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2A09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_IDC_END(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_PDU_RETX_CNTR(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x2B09 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_PDU_RETX_CNTR(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_MAX_RETX_CNTR(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x2C09 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_MAX_RETX_CNTR(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_RST_COPRO_IDX(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2D09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_RST_COPRO_IDX(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_POLL_IN_COPRO_OFF(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2E09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_POLL_IN_COPRO_OFF(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_START_EVENT(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x2F09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_START_EVENT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_HWB_REL_FOR_NO_RB(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x3009 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_HWB_REL_FOR_NO_RB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_ADD_SRB(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x3109 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_ADD_SRB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_ADD_DRB_1(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x3209 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_ADD_DRB_1(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_ADD_DRB_2(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x3309 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_UL_ADD_DRB_2(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_DEL_SRB(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x3409 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_DEL_SRB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_DEL_DRB(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x3509 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_DEL_DRB(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_DEL_OLD_DRB(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x3609 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_UL_DEL_OLD_DRB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_DEL_NEW_DRB(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x3709 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_UL_DEL_NEW_DRB(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_RECFG_RB(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x3809 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_RECFG_RB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_REEST_WI_CFG_RB(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x3909 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_REEST_WI_CFG_RB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_REEST_WO_CFG_RB(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x3A09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_REEST_WO_CFG_RB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_RB_PARAM_ERR(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x3B09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_RB_PARAM_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_RB_STUS_ERR(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x3C09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_RB_STUS_ERR(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_HWB_STATS(v1, v2) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x3D09 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_HWB_STATS(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_HWB_STATS_2048(v1) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x3E09 | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_HWB_STATS_2048(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_NACK_POOL_STATS(v1, v2, v3, v4) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_4_word(0x3F09 | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_NACK_POOL_STATS(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_VIP_DATA_INFO(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x4009 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_VIP_DATA_INFO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_VIP_DATA_FULL(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x4109 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_VIP_DATA_FULL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_VIP_DATA_TMOUT(v1, v2, v3) do {\
		if(ERLCUL_Trace_Filter[0]==1 && (ERLCUL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x4209 | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_VIP_DATA_TMOUT(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char ERLCUL_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_ERLC_LOG_GENERIC(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_ERROR(short v1);
void L1TRC_Send_ERLC_LOG_SCH_GRANT_IND(short v1);
void L1TRC_Send_ERLC_LOG_SCH_RESULT(short v1);
void L1TRC_Send_ERLC_LOG_SCH_RESULT_PAD(short v1);
void L1TRC_Send_ERLC_LOG_1ST_RND_START(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_1ST_RND_RESTART(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_1ST_RND_END(short v1, long v2);
void L1TRC_Send_ERLC_LOG_2ND_RND_START(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_2ND_RND_RESTART(short v1, long v2);
void L1TRC_Send_ERLC_LOG_2ND_RND_END(short v1, long v2);
void L1TRC_Send_ERLC_LOG_SIT_IDX_JMP(short v1, long v2);
void L1TRC_Send_ERLC_LOG_SRV_SDU_SUMMARY(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_SRV_RETX_PDU(short v1);
void L1TRC_Send_ERLC_LOG_SRV_RETX_SEG(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_SRV_RETX_PDU_BY_RESEG(short v1, long v2);
void L1TRC_Send_ERLC_LOG_SRV_RETX_SEG_BY_RESEG(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_MAX_RETX(short v1);
void L1TRC_Send_ERLC_LOG_UL_AM_SN(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_UM5_SN(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_UL_UM10_SN(short v1, long v2);
void L1TRC_Send_ERLC_LOG_SEND_STUS_PDU(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_REGEN_STUS_PDU(short v1);
void L1TRC_Send_ERLC_LOG_VT_A_UPDATE(short v1, long v2);
void L1TRC_Send_ERLC_LOG_STUS_PDU_IND(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_STUS_PDU_IND_DUP(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_NACK_DUP(short v1);
void L1TRC_Send_ERLC_LOG_NACK_BAD_SO(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_SRB_DATA_CNF(short v1, long v2);
void L1TRC_Send_ERLC_LOG_DISCARD_SIT(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_DISCARD_SIT_RANGE(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_STUS_PROH(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_START(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_STOP(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_EXPRY(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_EXPRY_ADD_PDU(short v1, long v2);
void L1TRC_Send_ERLC_LOG_POLL_RETX_EXPRY_NO_SDU(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_EXPRY_NO_LOSS(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_EXPRY_FAKE(short v1);
void L1TRC_Send_ERLC_LOG_POLL_RETX_EXPRY_MULTI(short v1);
void L1TRC_Send_ERLC_LOG_IDC_START(short v1);
void L1TRC_Send_ERLC_LOG_IDC_RESTART(short v1);
void L1TRC_Send_ERLC_LOG_IDC_END(short v1);
void L1TRC_Send_ERLC_LOG_PDU_RETX_CNTR(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_MAX_RETX_CNTR(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_RST_COPRO_IDX(short v1);
void L1TRC_Send_ERLC_LOG_UL_POLL_IN_COPRO_OFF(short v1);
void L1TRC_Send_ERLC_LOG_START_EVENT(short v1);
void L1TRC_Send_ERLC_LOG_HWB_REL_FOR_NO_RB(short v1);
void L1TRC_Send_ERLC_LOG_UL_ADD_SRB(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_ADD_DRB_1(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_ADD_DRB_2(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_UL_DEL_SRB(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_DEL_DRB(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_DEL_OLD_DRB(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_UL_DEL_NEW_DRB(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_UL_RECFG_RB(short v1);
void L1TRC_Send_ERLC_LOG_UL_REEST_WI_CFG_RB(short v1);
void L1TRC_Send_ERLC_LOG_UL_REEST_WO_CFG_RB(short v1);
void L1TRC_Send_ERLC_LOG_UL_RB_PARAM_ERR(short v1);
void L1TRC_Send_ERLC_LOG_UL_RB_STUS_ERR(short v1);
void L1TRC_Send_ERLC_LOG_UL_HWB_STATS(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_HWB_STATS_2048(short v1);
void L1TRC_Send_ERLC_LOG_NACK_POOL_STATS(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_VIP_DATA_INFO(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_VIP_DATA_FULL(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_VIP_DATA_TMOUT(short v1, long v2, long v3);

void Set_ERLCUL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ERLCUL()	(ERLCUL_Trace_Filter[0]==1)
#define ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()	(ChkL1ModFltr_ERLCUL()&&((ERLCUL_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()	(ChkL1ModFltr_ERLCUL()&&((ERLCUL_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_ERLC_LOG_GENERIC()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_ERROR()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_SCH_GRANT_IND()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_SCH_RESULT()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_SCH_RESULT_PAD()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_1ST_RND_START()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_1ST_RND_RESTART()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_1ST_RND_END()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_2ND_RND_START()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_2ND_RND_RESTART()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_2ND_RND_END()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_SIT_IDX_JMP()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_SUMMARY()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_SRV_RETX_PDU()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_SRV_RETX_SEG()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_SRV_RETX_PDU_BY_RESEG()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_SRV_RETX_SEG_BY_RESEG()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_MAX_RETX()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_AM_SN()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_UM5_SN()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_UM10_SN()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_SEND_STUS_PDU()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_REGEN_STUS_PDU()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_VT_A_UPDATE()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_STUS_PDU_IND()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_STUS_PDU_IND_DUP()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_NACK_DUP()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_NACK_BAD_SO()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_SRB_DATA_CNF()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_DISCARD_SIT()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_DISCARD_SIT_RANGE()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_STUS_PROH()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_START()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_STOP()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_EXPRY()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_EXPRY_ADD_PDU()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_EXPRY_NO_SDU()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_EXPRY_NO_LOSS()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_EXPRY_FAKE()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_POLL_RETX_EXPRY_MULTI()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_IDC_START()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_IDC_RESTART()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_IDC_END()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_PDU_RETX_CNTR()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_MAX_RETX_CNTR()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_UL_RST_COPRO_IDX()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_POLL_IN_COPRO_OFF()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_START_EVENT()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_HWB_REL_FOR_NO_RB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_ADD_SRB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_ADD_DRB_1()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_ADD_DRB_2()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_DEL_SRB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_DEL_DRB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_DEL_OLD_DRB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_DEL_NEW_DRB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_RECFG_RB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_REEST_WI_CFG_RB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_REEST_WO_CFG_RB()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_RB_PARAM_ERR()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_RB_STUS_ERR()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_UL_HWB_STATS()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_UL_HWB_STATS_2048()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_NACK_POOL_STATS()	ChkL1ClsFltr_ERLCUL_ERLCUL_DUMP()
#define ChkL1MsgFltr_ERLC_LOG_VIP_DATA_INFO()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_VIP_DATA_FULL()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()
#define ChkL1MsgFltr_ERLC_LOG_VIP_DATA_TMOUT()	ChkL1ClsFltr_ERLCUL_ERLCUL_INFO()


#endif
