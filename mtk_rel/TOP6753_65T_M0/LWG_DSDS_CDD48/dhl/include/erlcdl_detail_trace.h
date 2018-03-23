#ifndef L1TRC_ERLCDL_DETAIL_DEF_H
#define L1TRC_ERLCDL_DETAIL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_EMAC_REL_HWB(v1, v2, v3, v4) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x000C | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_EMAC_REL_HWB(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RX_CRC_NG(v1) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x010C | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_RX_CRC_NG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_LI_VAL_1(v1) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x020C | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_LI_VAL_1(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_LI_VAL_2(v1, v2) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x030C | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_LI_VAL_2(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_LI_VAL_3(v1, v2, v3) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x040C | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_LI_VAL_3(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_LI_VAL_4(v1, v2, v3, v4) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x050C | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_LI_VAL_4(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_AMD_PDU_CMPLT(v1) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x060C | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_AMD_PDU_CMPLT(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RSB_SRB_RANGE(v1, v2, v3, v4) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x070C | ((short)(v1) << 16), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_RSB_SRB_RANGE(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RSB_SRB_SDU(v1, v2) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x080C | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_RSB_SRB_SDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RSB_ENTRY(v1, v2, v3, v4) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x090C | ((short)(v1) << 16), (long)(v2), (unsigned long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_RSB_ENTRY(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RSB_ENTRY_FINAL(v1, v2, v3, v4) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_4_word(0x0A0C | ((short)(v1) << 16), (long)(v2), (unsigned long)(v3), (long)(v4));\
	} while(0)
#else
	#define ERLC_LOG_RSB_ENTRY_FINAL(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RSB_UNDO(v1, v2, v3) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_3_word(0x0B0C | ((short)(v1) << 16), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define ERLC_LOG_RSB_UNDO(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_RSB_FREE_IDX(v1, v2) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x0C0C | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_RSB_FREE_IDX(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_DL_RESRV_PST(v1) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0D0C | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_DL_RESRV_PST(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_DL_WRITE_PST(v1, v2) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x0E0C | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define ERLC_LOG_DL_WRITE_PST(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define ERLC_LOG_DL_CLEAR_PST(v1) do {\
		if(ERLCDL_DETAIL_Trace_Filter[0]==1 && (ERLCDL_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x0F0C | ((short)(v1) << 16));\
	} while(0)
#else
	#define ERLC_LOG_DL_CLEAR_PST(v1)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char ERLCDL_DETAIL_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_ERLC_LOG_EMAC_REL_HWB(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_ERLC_LOG_RX_CRC_NG(short v1);
void L1TRC_Send_ERLC_LOG_LI_VAL_1(short v1);
void L1TRC_Send_ERLC_LOG_LI_VAL_2(short v1, long v2);
void L1TRC_Send_ERLC_LOG_LI_VAL_3(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_LI_VAL_4(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_AMD_PDU_CMPLT(short v1);
void L1TRC_Send_ERLC_LOG_RSB_SRB_RANGE(short v1, long v2, long v3, long v4);
void L1TRC_Send_ERLC_LOG_RSB_SRB_SDU(short v1, long v2);
void L1TRC_Send_ERLC_LOG_RSB_ENTRY(short v1, long v2, unsigned long v3, long v4);
void L1TRC_Send_ERLC_LOG_RSB_ENTRY_FINAL(short v1, long v2, unsigned long v3, long v4);
void L1TRC_Send_ERLC_LOG_RSB_UNDO(short v1, long v2, long v3);
void L1TRC_Send_ERLC_LOG_RSB_FREE_IDX(short v1, long v2);
void L1TRC_Send_ERLC_LOG_DL_RESRV_PST(short v1);
void L1TRC_Send_ERLC_LOG_DL_WRITE_PST(short v1, long v2);
void L1TRC_Send_ERLC_LOG_DL_CLEAR_PST(short v1);

void Set_ERLCDL_DETAIL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_ERLCDL_DETAIL()	(ERLCDL_DETAIL_Trace_Filter[0]==1)
#define ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_FUNC()	(ChkL1ModFltr_ERLCDL_DETAIL()&&((ERLCDL_DETAIL_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_BRANCH()	(ChkL1ModFltr_ERLCDL_DETAIL()&&((ERLCDL_DETAIL_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()	(ChkL1ModFltr_ERLCDL_DETAIL()&&((ERLCDL_DETAIL_Trace_Filter[1]&0x04)!=0))
#define ChkL1MsgFltr_ERLC_LOG_EMAC_REL_HWB()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RX_CRC_NG()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_LI_VAL_1()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_LI_VAL_2()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_LI_VAL_3()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_LI_VAL_4()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_AMD_PDU_CMPLT()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RSB_SRB_RANGE()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RSB_SRB_SDU()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RSB_ENTRY()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RSB_ENTRY_FINAL()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RSB_UNDO()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_RSB_FREE_IDX()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_PACKET()
#define ChkL1MsgFltr_ERLC_LOG_DL_RESRV_PST()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_FUNC()
#define ChkL1MsgFltr_ERLC_LOG_DL_WRITE_PST()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_FUNC()
#define ChkL1MsgFltr_ERLC_LOG_DL_CLEAR_PST()	ChkL1ClsFltr_ERLCDL_DETAIL_ERLCDL_FUNC()


#endif
