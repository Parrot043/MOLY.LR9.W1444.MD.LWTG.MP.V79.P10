#ifndef L1TRC_EL1_IRT_1_DEF_H
#define L1TRC_EL1_IRT_1_DEF_H

/******************************/
/* String category definition */
/******************************/
#define IRT_Srvcc_Proc_String(v1)  (unsigned char)(v1+0)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_RF_CONFLICT() do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0006, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT()
#endif
#define IRT_LOG_RF_CONFLICT_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0006, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_RF_CONFLICT_START(v1, v2, v3) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0106, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v3), (unsigned char)(v2), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT_START(v1, v2, v3)
#endif
#define IRT_LOG_RF_CONFLICT_START_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0106, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v3), (unsigned char)(v2), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_RF_CONFLICT_END(v1, v2, v3) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0206, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v3), (unsigned char)(v2), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_RF_CONFLICT_END(v1, v2, v3)
#endif
#define IRT_LOG_RF_CONFLICT_END_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0206, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v3), (unsigned char)(v2), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SWITCH_AFC_CONTROL(v1, v2) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0306, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SWITCH_AFC_CONTROL(v1, v2)
#endif
#define IRT_LOG_SWITCH_AFC_CONTROL_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0306, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_GET_FREQ_OFFST(v1, v2, v3, v4) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x0406, (unsigned short)(v2)), TRC_MERGE_1S2C((unsigned short)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v4));\
	} while(0)
#else
	#define IRT_LOG_GET_FREQ_OFFST(v1, v2, v3, v4)
#endif
#define IRT_LOG_GET_FREQ_OFFST_NOFLTR(v1, v2, v3, v4) TRC_SEND_4_DATA(TRC_MERGE_2S(0x0406, (unsigned short)(v2)), TRC_MERGE_1S2C((unsigned short)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v4))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_OFF_INFO() do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0506, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_OFF_INFO()
#endif
#define IRT_LOG_SRVCC_OFF_INFO_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0506, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_OFF_1_INFO() do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0606, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_OFF_1_INFO()
#endif
#define IRT_LOG_SRVCC_OFF_1_INFO_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0606, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_ON_INFO() do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0706, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_ON_INFO()
#endif
#define IRT_LOG_SRVCC_ON_INFO_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0706, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_HOLD_INFO(v1) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0806, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_HOLD_INFO(v1)
#endif
#define IRT_LOG_SRVCC_HOLD_INFO_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0806, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_REL_INFO(v1, v2) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x0906, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_REL_INFO(v1, v2)
#endif
#define IRT_LOG_SRVCC_REL_INFO_NOFLTR(v1, v2) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x0906, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_ZERO_GAP_INFO_1(v1) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A06, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_ZERO_GAP_INFO_1(v1)
#endif
#define IRT_LOG_SRVCC_ZERO_GAP_INFO_1_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A06, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_GAP_INFO_1(v1, v2, v3, v4, v5) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_1S2C(0x0B06, (unsigned char)(v3), TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v5));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_GAP_INFO_1(v1, v2, v3, v4, v5)
#endif
#define IRT_LOG_SRVCC_GAP_INFO_1_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_5_DATA(TRC_MERGE_1S2C(0x0B06, (unsigned char)(v3), TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v5))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_ZERO_GAP_INFO() do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0C06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_ZERO_GAP_INFO()
#endif
#define IRT_LOG_SRVCC_ZERO_GAP_INFO_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0C06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_SRVCC_GAP_INFO(v1, v2, v3, v4, v5) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_1S2C(0x0D06, (unsigned char)(v3), TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v5));\
	} while(0)
#else
	#define IRT_LOG_SRVCC_GAP_INFO(v1, v2, v3, v4, v5)
#endif
#define IRT_LOG_SRVCC_GAP_INFO_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_5_DATA(TRC_MERGE_1S2C(0x0D06, (unsigned char)(v3), TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v5))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define IRT_LOG_QUERY_AFC_VALUE(v1, v2, v3) do {\
		if(EL1_IRT_1_Trace_Filter[0]==1 && (EL1_IRT_1_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_1S2C(0x0E06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define IRT_LOG_QUERY_AFC_VALUE(v1, v2, v3)
#endif
#define IRT_LOG_QUERY_AFC_VALUE_NOFLTR(v1, v2, v3) TRC_SEND_4_DATA(TRC_MERGE_1S2C(0x0E06, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2), (long)(v3))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char EL1_IRT_1_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_IRT_LOG_RF_CONFLICT(void);
void L1TRC_Send_IRT_LOG_RF_CONFLICT_START(unsigned short v1, unsigned char v2, unsigned short v3);
void L1TRC_Send_IRT_LOG_RF_CONFLICT_END(unsigned short v1, unsigned char v2, unsigned short v3);
void L1TRC_Send_IRT_LOG_SWITCH_AFC_CONTROL(unsigned short v1, unsigned short v2);
void L1TRC_Send_IRT_LOG_GET_FREQ_OFFST(long v1, unsigned short v2, unsigned short v3, long v4);
void L1TRC_Send_IRT_LOG_SRVCC_OFF_INFO(void);
void L1TRC_Send_IRT_LOG_SRVCC_OFF_1_INFO(void);
void L1TRC_Send_IRT_LOG_SRVCC_ON_INFO(void);
void L1TRC_Send_IRT_LOG_SRVCC_HOLD_INFO(unsigned char v1);
void L1TRC_Send_IRT_LOG_SRVCC_REL_INFO(unsigned long v1, unsigned long v2);
void L1TRC_Send_IRT_LOG_SRVCC_ZERO_GAP_INFO_1(unsigned char v1);
void L1TRC_Send_IRT_LOG_SRVCC_GAP_INFO_1(unsigned long v1, unsigned long v2, unsigned char v3, unsigned long v4, unsigned long v5);
void L1TRC_Send_IRT_LOG_SRVCC_ZERO_GAP_INFO(void);
void L1TRC_Send_IRT_LOG_SRVCC_GAP_INFO(unsigned long v1, unsigned long v2, unsigned char v3, unsigned long v4, unsigned long v5);
void L1TRC_Send_IRT_LOG_QUERY_AFC_VALUE(long v1, long v2, long v3);

void Set_EL1_IRT_1_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_IRT_1()	(EL1_IRT_1_Trace_Filter[0]==1)
#define ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()	(ChkL1ModFltr_EL1_IRT_1()&&((EL1_IRT_1_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_EL1_IRT_1_irt_afc_trace()	(ChkL1ModFltr_EL1_IRT_1()&&((EL1_IRT_1_Trace_Filter[1]&0x02)!=0))
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT_START()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_RF_CONFLICT_END()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SWITCH_AFC_CONTROL()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_GET_FREQ_OFFST()	ChkL1ClsFltr_EL1_IRT_1_irt_afc_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_OFF_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_OFF_1_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_ON_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_HOLD_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_REL_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_ZERO_GAP_INFO_1()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_GAP_INFO_1()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_ZERO_GAP_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_SRVCC_GAP_INFO()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()
#define ChkL1MsgFltr_IRT_LOG_QUERY_AFC_VALUE()	ChkL1ClsFltr_EL1_IRT_1_rf_conflict_trace()


#endif
