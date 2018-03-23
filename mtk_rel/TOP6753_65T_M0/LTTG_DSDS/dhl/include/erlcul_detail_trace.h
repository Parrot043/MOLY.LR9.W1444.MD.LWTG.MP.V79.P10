#ifndef L1TRC_ERLCUL_DETAIL_DEF_H
#define L1TRC_ERLCUL_DETAIL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_SIT_REL(v1, v2, v3) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x000A | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_UL_SIT_REL(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_PDU_REL(v1, v2) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x010A | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_PDU_REL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_BSR_REDUCE(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x020A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_BSR_REDUCE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_TRG_SDU_SEG(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x030A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_TRG_SDU_SEG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_TRG_AMD_RESEG(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x040A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_TRG_AMD_RESEG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_1(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x050A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_2(v1, v2) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x060A | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_3(v1, v2, v3) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x070A | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_4(v1, v2, v3, v4) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x080A | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x090A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_BY_SEG(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x0A0A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_BY_SEG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_SDU_NO_GRANT(v1, v2, v3) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x0B0A | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_SRV_SDU_NO_GRANT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_RETX_PDU_NO_GRANT(v1, v2, v3) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x0C0A | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_SRV_RETX_PDU_NO_GRANT(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_SRV_RETX_SEG_NO_GRANT(v1, v2, v3, v4) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x0D0A | ((short)(v1) << 16), (unsigned long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_SRV_RETX_SEG_NO_GRANT(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_RESRV_PST(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0E0A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_RESRV_PST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_WRITE_PST(v1, v2) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0F0A | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_WRITE_PST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_CLEAR_PST(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x100A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_CLEAR_PST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_WRITE_PST_FAIL(v1, v2) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x110A | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_UL_WRITE_PST_FAIL(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_UL_CLEAR_PST_FAIL(v1) do {\
		if(ERLCUL_DETAIL_Trace_Filter[0]==1 && (ERLCUL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x120A | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_UL_CLEAR_PST_FAIL(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char ERLCUL_DETAIL_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_ERLC_LOG_UL_SIT_REL(short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_ERLC_LOG_UL_PDU_REL(short v1, long v2);
void L1TRC_Send_ERLC_LOG_BSR_REDUCE(short v1);
void L1TRC_Send_ERLC_LOG_TRG_SDU_SEG(short v1);
void L1TRC_Send_ERLC_LOG_TRG_AMD_RESEG(short v1);
void L1TRC_Send_ERLC_LOG_SRV_SDU_1(short v1);
void L1TRC_Send_ERLC_LOG_SRV_SDU_2(short v1, long v2);
void L1TRC_Send_ERLC_LOG_SRV_SDU_3(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_SRV_SDU_4(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_SRV_SDU(short v1);
void L1TRC_Send_ERLC_LOG_SRV_SDU_BY_SEG(short v1);
void L1TRC_Send_ERLC_LOG_SRV_SDU_NO_GRANT(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_SRV_RETX_PDU_NO_GRANT(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_SRV_RETX_SEG_NO_GRANT(short v1, unsigned long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_UL_RESRV_PST(short v1);
void L1TRC_Send_ERLC_LOG_UL_WRITE_PST(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_CLEAR_PST(short v1);
void L1TRC_Send_ERLC_LOG_UL_WRITE_PST_FAIL(short v1, long v2);
void L1TRC_Send_ERLC_LOG_UL_CLEAR_PST_FAIL(short v1);

void Set_ERLCUL_DETAIL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ERLCUL_DETAIL()	(ERLCUL_DETAIL_Trace_Filter[0]==1)
#define ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_FUNC()	(ChkL1ModFltr_ERLCUL_DETAIL()&&((ERLCUL_DETAIL_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_BRANCH()	(ChkL1ModFltr_ERLCUL_DETAIL()&&((ERLCUL_DETAIL_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()	(ChkL1ModFltr_ERLCUL_DETAIL()&&((ERLCUL_DETAIL_Trace_Filter[1]&0x04)!=0))
#define ChkL1MsgFltr_ERLC_LOG_UL_SIT_REL()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_UL_PDU_REL()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_BSR_REDUCE()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_TRG_SDU_SEG()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_TRG_AMD_RESEG()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_1()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_2()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_3()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_4()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_BY_SEG()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_SDU_NO_GRANT()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_RETX_PDU_NO_GRANT()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_SRV_RETX_SEG_NO_GRANT()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_UL_RESRV_PST()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_FUNC()
#define ChkL1MsgFltr_ERLC_LOG_UL_WRITE_PST()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_FUNC()
#define ChkL1MsgFltr_ERLC_LOG_UL_CLEAR_PST()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_FUNC()
#define ChkL1MsgFltr_ERLC_LOG_UL_WRITE_PST_FAIL()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_FUNC()
#define ChkL1MsgFltr_ERLC_LOG_UL_CLEAR_PST_FAIL()	ChkL1ClsFltr_ERLCUL_DETAIL_ERLCUL_FUNC()


#endif
