#ifndef L1TRC_MML1_RF_DEF_H
#define L1TRC_MML1_RF_DEF_H

/******************************/
/* String category definition */
/******************************/
#define MML1_TRC_STR_SINGLE_RAT(v1)  (unsigned char)(v1+0)
#define MML1_TRC_STR_RAT(v1)  (unsigned char)(v1+17)
#define MML1_TRC_STR_RATs(v1)  (unsigned char)(v1+34)
#define MML1_TRC_STR_PHASE(v1)  (unsigned char)(v1+66)
#define MML1_TRC_STR_STATE(v1)  (unsigned char)(v1+68)
#define MML1_TRC_STR_FLAG(v1)  (unsigned char)(v1+70)
#define MML1_TRC_STR_ONOFF(v1)  (unsigned char)(v1+72)
#define MML1_TRC_STR_CLK_BUF_MODE(v1)  (unsigned char)(v1+74)
#define MML1_TRC_STR_CLK_BUF_SW_STATUS(v1)  (unsigned char)(v1+77)
#define MML1_TRC_STR_RW(v1)  (unsigned char)(v1+79)
#define MML1_TRC_STR_RFIC(v1)  (unsigned char)(v1+81)
#define MML1_TRC_STR_BSILOGGER_RAT(v1)  (unsigned char)(v1+84)
#define MML1_TRC_STR_BSILOGGER_RAT_RW(v1)  (unsigned char)(v1+89)
#define MML1_TRC_STR_HEX(v1)  (unsigned char)(v1+101)
#define MML1_TRC_STR_MD(v1)  (unsigned char)(v1+117)
#define MML1_TRC_STR_MASK_STATUS(v1)  (unsigned char)(v1+121)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER)
	#define MML1_TRC_RF_PowerOn(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0043, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_PowerOn(v1, v2, v3, v4)
#endif
#define MML1_TRC_RF_PowerOn_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0043, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_PowerOff(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0143, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_PowerOff(v1, v2, v3)
#endif
#define MML1_TRC_RF_PowerOff_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0143, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_CommonPOCDone() do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0243, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_CommonPOCDone()
#endif
#define MML1_TRC_RF_CommonPOCDone_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0243, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_RATWaitForPOC(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0343, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_RATWaitForPOC(v1, v2, v3)
#endif
#define MML1_TRC_RF_RATWaitForPOC_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0343, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_RATPOCDone(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0443, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_RATPOCDone(v1, v2, v3)
#endif
#define MML1_TRC_RF_RATPOCDone_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0443, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_EnterFlightMode(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0543, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define MML1_TRC_RF_EnterFlightMode(v1, v2)
#endif
#define MML1_TRC_RF_EnterFlightMode_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0543, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_LeaveFlightMode(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0643, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define MML1_TRC_RF_LeaveFlightMode(v1, v2)
#endif
#define MML1_TRC_RF_LeaveFlightMode_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0643, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_TDDUpdateStatus(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0743, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_TDDUpdateStatus(v1, v2, v3)
#endif
#define MML1_TRC_RF_TDDUpdateStatus_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0743, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_TDDStatus(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0843, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_TDDStatus(v1, v2, v3, v4)
#endif
#define MML1_TRC_RF_TDDStatus_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0843, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MML1_TRC_RF_TDDHandshake(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0943, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_TDDHandshake(v1, v2, v3)
#endif
#define MML1_TRC_RF_TDDHandshake_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0943, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_RFICInfo(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A43, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define MML1_TRC_RF_RFICInfo(v1, v2)
#endif
#define MML1_TRC_RF_RFICInfo_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0A43, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_RATInfo(v1) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0B43, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_RATInfo(v1)
#endif
#define MML1_TRC_RF_RATInfo_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0B43, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_DCXOCAPID(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0C43, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_DCXOCAPID(v1, v2)
#endif
#define MML1_TRC_RF_DCXOCAPID_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0C43, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_DCXOLPM(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x0D43, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_DCXOLPM(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_RF_DCXOLPM_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x0D43, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_DCXOFPM(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x0E43, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_DCXOFPM(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_RF_DCXOFPM_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x0E43, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_ChipVersion(v1) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x0F43, (short)(v1)));\
	} while(0)
#else
	#define MML1_TRC_RF_ChipVersion(v1)
#endif
#define MML1_TRC_RF_ChipVersion_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x0F43, (short)(v1)))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_CoClockSetting(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1043, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_CoClockSetting(v1, v2, v3, v4)
#endif
#define MML1_TRC_RF_CoClockSetting_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1043, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_ClkBuf_SWHWMode(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1143, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_ClkBuf_SWHWMode(v1, v2, v3, v4)
#endif
#define MML1_TRC_RF_ClkBuf_SWHWMode_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1143, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_ClkBuf_SWStatus(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1243, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_ClkBuf_SWStatus(v1, v2, v3, v4)
#endif
#define MML1_TRC_RF_ClkBuf_SWStatus_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1243, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_CW_VALUE(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1343, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RF_CW_VALUE(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_RF_CW_VALUE_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1343, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_POR_CW_VALUE(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1443, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_POR_CW_VALUE(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_POR_CW_VALUE_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1443, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_POC_CW_VALUE(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1543, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_POC_CW_VALUE(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_POC_CW_VALUE_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1543, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_POR_RD_CHECK(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x1643, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v8)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v9), (unsigned char)(v10), (unsigned char)(v11)), TRC_MERGE_4C((unsigned char)(v12), (unsigned char)(v13), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_POR_RD_CHECK(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13)
#endif
#define MML1_TRC_POR_RD_CHECK_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13) TRC_SEND_5_DATA(TRC_MERGE_2S(0x1643, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v8)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v9), (unsigned char)(v10), (unsigned char)(v11)), TRC_MERGE_4C((unsigned char)(v12), (unsigned char)(v13), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_RF_SHARE_BPI(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1743, (unsigned char)(v1), (unsigned char)(v2)), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define MML1_TRC_RF_SHARE_BPI(v1, v2, v3, v4)
#endif
#define MML1_TRC_RF_SHARE_BPI_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1743, (unsigned char)(v1), (unsigned char)(v2)), (unsigned long)(v3), (unsigned long)(v4))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MML1_TRC_PMIC_PWM_SET(v1) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1843, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_PMIC_PWM_SET(v1)
#endif
#define MML1_TRC_PMIC_PWM_SET_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1843, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define MML1_TRC_PMIC_PWM_CLR(v1) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1943, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_PMIC_PWM_CLR(v1)
#endif
#define MML1_TRC_PMIC_PWM_CLR_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1943, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MML1_TRC_PMIC_PWM_STATUS(v1) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1A43, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_PMIC_PWM_STATUS(v1)
#endif
#define MML1_TRC_PMIC_PWM_STATUS_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x1A43, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MML1_TRC_PMIC_PWM_BYRAT(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1B43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_PMIC_PWM_BYRAT(v1, v2, v3, v4)
#endif
#define MML1_TRC_PMIC_PWM_BYRAT_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1B43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 2) )
	#define MML1_TRC_PMIC_VPA_CONTROL(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1C43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_PMIC_VPA_CONTROL(v1, v2, v3)
#endif
#define MML1_TRC_PMIC_VPA_CONTROL_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1C43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_MIPI_PowerOn(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1D43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_MIPI_PowerOn(v1, v2, v3)
#endif
#define MML1_TRC_MIPI_PowerOn_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1D43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_MIPI_PowerOff(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1E43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_MIPI_PowerOff(v1, v2, v3)
#endif
#define MML1_TRC_MIPI_PowerOff_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x1E43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_MIPI_InitCW(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1F43, (short)(v6)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4)), TRC_MERGE_4C((unsigned char)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_MIPI_InitCW(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_MIPI_InitCW_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1F43, (short)(v6)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4)), TRC_MERGE_4C((unsigned char)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_MIPI_USID_TBL(v1, v2, v3, v4, v5, v6, v7) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x2043, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_MIPI_USID_TBL(v1, v2, v3, v4, v5, v6, v7)
#endif
#define MML1_TRC_MIPI_USID_TBL_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x2043, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_MIPI_RDCW_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x2143, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_4C((unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6), (unsigned char)(v7)), TRC_MERGE_4C((unsigned char)(v8), (unsigned char)(v9), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_MIPI_RDCW_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif
#define MML1_TRC_MIPI_RDCW_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9) TRC_SEND_4_DATA(TRC_MERGE_2S(0x2143, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_4C((unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6), (unsigned char)(v7)), TRC_MERGE_4C((unsigned char)(v8), (unsigned char)(v9), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_DRDI_Init(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x2243, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_DRDI_Init(v1, v2, v3)
#endif
#define MML1_TRC_DRDI_Init_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x2243, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_DRDI_Update(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2343, (short)(v3)), TRC_MERGE_1S2C((short)(v4), (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define MML1_TRC_DRDI_Update(v1, v2, v3, v4)
#endif
#define MML1_TRC_DRDI_Update_NOFLTR(v1, v2, v3, v4) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2343, (short)(v3)), TRC_MERGE_1S2C((short)(v4), (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define MML1_TRC_DRDI_Nvram_DBG(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2443, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_DRDI_Nvram_DBG(v1, v2)
#endif
#define MML1_TRC_DRDI_Nvram_DBG_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2443, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_DRDI_ReMap_DBG(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x2543, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_DRDI_ReMap_DBG(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_DRDI_ReMap_DBG_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x2543, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_DRDI_ReMapSetNum_DBG(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x2643, (short)(v2)), TRC_MERGE_2S((short)(v3), (short)(v4)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_DRDI_ReMapSetNum_DBG(v1, v2, v3, v4)
#endif
#define MML1_TRC_DRDI_ReMapSetNum_DBG_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x2643, (short)(v2)), TRC_MERGE_2S((short)(v3), (short)(v4)), TRC_MERGE_4C((unsigned char)(v1), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_CONFLICT_RAT_CHECK(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x2743, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define MML1_TRC_CONFLICT_RAT_CHECK(v1, v2)
#endif
#define MML1_TRC_CONFLICT_RAT_CHECK_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x2743, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER)
	#define MML1_TRC_LOAD_VER(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x2843, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_LOAD_VER(v1, v2, v3, v4)
#endif
#define MML1_TRC_LOAD_VER_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x2843, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_LOGGERPTR_DBG(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2943, (short)(v2)), TRC_MERGE_1S2C((short)(v3), (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_LOGGERPTR_DBG(v1, v2, v3)
#endif
#define MML1_TRC_LOGGERPTR_DBG_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2943, (short)(v2)), TRC_MERGE_1S2C((short)(v3), (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSILOGGER_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x2A43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9), (unsigned char)(v10)));\
	} while(0)
#else
	#define MML1_TRC_BSILOGGER_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define MML1_TRC_BSILOGGER_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x2A43, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9), (unsigned char)(v10)))

#if defined(L1_CATCHER)
	#define MML1_TRC_RFCW_DUMP_DBG(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x2B43, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_RFCW_DUMP_DBG(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_RFCW_DUMP_DBG_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_3_DATA(TRC_MERGE_2S(0x2B43, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSILOGGER_DBG1(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x2C43, (unsigned char)(v1), TRC_BOXSTER_PAD), (unsigned long)(v2));\
	} while(0)
#else
	#define MML1_TRC_BSILOGGER_DBG1(v1, v2)
#endif
#define MML1_TRC_BSILOGGER_DBG1_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x2C43, (unsigned char)(v1), TRC_BOXSTER_PAD), (unsigned long)(v2))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSILOGGER_DBG2(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x2D43, (unsigned char)(v1), (unsigned char)(v3)), (unsigned long)(v2), (unsigned long)(v4));\
	} while(0)
#else
	#define MML1_TRC_BSILOGGER_DBG2(v1, v2, v3, v4)
#endif
#define MML1_TRC_BSILOGGER_DBG2_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x2D43, (unsigned char)(v1), (unsigned char)(v3)), (unsigned long)(v2), (unsigned long)(v4))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSILOGGER_DBG3(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_1S2C(0x2E43, (unsigned char)(v1), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v6));\
	} while(0)
#else
	#define MML1_TRC_BSILOGGER_DBG3(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_BSILOGGER_DBG3_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_5_DATA(TRC_MERGE_1S2C(0x2E43, (unsigned char)(v1), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v6))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSILOGGER_DBG4(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_6_DATA(TRC_MERGE_1S2C(0x2F43, (unsigned char)(v1), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), (unsigned char)(v7), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v6), (unsigned long)(v8));\
	} while(0)
#else
	#define MML1_TRC_BSILOGGER_DBG4(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define MML1_TRC_BSILOGGER_DBG4_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_6_DATA(TRC_MERGE_1S2C(0x2F43, (unsigned char)(v1), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), (unsigned char)(v7), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v6), (unsigned long)(v8))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSILOGGER_DBG5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_7_DATA(TRC_MERGE_1S2C(0x3043, (unsigned char)(v1), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), (unsigned char)(v7), (unsigned char)(v9), TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v6), (unsigned long)(v8), (unsigned long)(v10));\
	} while(0)
#else
	#define MML1_TRC_BSILOGGER_DBG5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define MML1_TRC_BSILOGGER_DBG5_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_7_DATA(TRC_MERGE_1S2C(0x3043, (unsigned char)(v1), (unsigned char)(v3)), TRC_MERGE_4C((unsigned char)(v5), (unsigned char)(v7), (unsigned char)(v9), TRC_BOXSTER_PAD), (unsigned long)(v2), (unsigned long)(v4), (unsigned long)(v6), (unsigned long)(v8), (unsigned long)(v10))

#if defined(L1_CATCHER)
	#define MML1_TRC_D16_REG_DBG(v1, v2, v3, v4, v5) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x3143, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)));\
	} while(0)
#else
	#define MML1_TRC_D16_REG_DBG(v1, v2, v3, v4, v5)
#endif
#define MML1_TRC_D16_REG_DBG_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_2_DATA(TRC_MERGE_2S(0x3143, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)))

#if defined(L1_CATCHER)
	#define MML1_TRC_D32_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x3243, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)));\
	} while(0)
#else
	#define MML1_TRC_D32_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif
#define MML1_TRC_D32_REG_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9) TRC_SEND_3_DATA(TRC_MERGE_2S(0x3243, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)))

#if defined(L1_CATCHER)
	#define MML1_TRC_SRAM_CTRL_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3343, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_SRAM_CTRL_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define MML1_TRC_SRAM_CTRL_REG_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3343, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_HCLK_CGEN_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3443, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_HCLK_CGEN_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define MML1_TRC_HCLK_CGEN_REG_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3443, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_BSISPI_CGEN_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3543, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_BSISPI_CGEN_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define MML1_TRC_BSISPI_CGEN_REG_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3543, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_AUXADC_PDN_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3643, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define MML1_TRC_AUXADC_PDN_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define MML1_TRC_AUXADC_PDN_REG_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3643, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5), (unsigned char)(v6)), TRC_MERGE_4C((unsigned char)(v7), (unsigned char)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG1(v1, v2) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x3743, (unsigned short)(v1)), (long)(v2));\
	} while(0)
#else
	#define MML1_TRC_DEBUG1(v1, v2)
#endif
#define MML1_TRC_DEBUG1_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x3743, (unsigned short)(v1)), (long)(v2))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG2(v1, v2, v3) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x3843, (unsigned short)(v1)), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define MML1_TRC_DEBUG2(v1, v2, v3)
#endif
#define MML1_TRC_DEBUG2_NOFLTR(v1, v2, v3) TRC_SEND_3_DATA(TRC_MERGE_2S(0x3843, (unsigned short)(v1)), (long)(v2), (long)(v3))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG3(v1, v2, v3, v4) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x3943, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define MML1_TRC_DEBUG3(v1, v2, v3, v4)
#endif
#define MML1_TRC_DEBUG3_NOFLTR(v1, v2, v3, v4) TRC_SEND_4_DATA(TRC_MERGE_2S(0x3943, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG4(v1, v2, v3, v4, v5) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x3A43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5));\
	} while(0)
#else
	#define MML1_TRC_DEBUG4(v1, v2, v3, v4, v5)
#endif
#define MML1_TRC_DEBUG4_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_5_DATA(TRC_MERGE_2S(0x3A43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG5(v1, v2, v3, v4, v5, v6) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_6_DATA(TRC_MERGE_2S(0x3B43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6));\
	} while(0)
#else
	#define MML1_TRC_DEBUG5(v1, v2, v3, v4, v5, v6)
#endif
#define MML1_TRC_DEBUG5_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_6_DATA(TRC_MERGE_2S(0x3B43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG6(v1, v2, v3, v4, v5, v6, v7) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_7_DATA(TRC_MERGE_2S(0x3C43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7));\
	} while(0)
#else
	#define MML1_TRC_DEBUG6(v1, v2, v3, v4, v5, v6, v7)
#endif
#define MML1_TRC_DEBUG6_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_7_DATA(TRC_MERGE_2S(0x3C43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7))

#if defined(L1_CATCHER)
	#define MML1_TRC_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(MML1_RF_Trace_Filter[0]==1 && (MML1_RF_Trace_Filter[1]&0x08)!=0 )\
			TRC_SEND_8_DATA(TRC_MERGE_2S(0x3D43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (long)(v8));\
	} while(0)
#else
	#define MML1_TRC_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define MML1_TRC_DEBUG7_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_8_DATA(TRC_MERGE_2S(0x3D43, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (long)(v8))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char MML1_RF_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_MML1_TRC_RF_PowerOn(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_MML1_TRC_RF_PowerOff(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_RF_CommonPOCDone(void);
void L1TRC_Send_MML1_TRC_RF_RATWaitForPOC(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_RF_RATPOCDone(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_RF_EnterFlightMode(unsigned char v1, unsigned char v2);
void L1TRC_Send_MML1_TRC_RF_LeaveFlightMode(unsigned char v1, unsigned char v2);
void L1TRC_Send_MML1_TRC_RF_TDDUpdateStatus(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_RF_TDDStatus(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_MML1_TRC_RF_TDDHandshake(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_RF_RFICInfo(unsigned char v1, unsigned char v2);
void L1TRC_Send_MML1_TRC_RF_RATInfo(unsigned char v1);
void L1TRC_Send_MML1_TRC_RF_DCXOCAPID(unsigned char v1, short v2);
void L1TRC_Send_MML1_TRC_RF_DCXOLPM(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_MML1_TRC_RF_DCXOFPM(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_MML1_TRC_RF_ChipVersion(short v1);
void L1TRC_Send_MML1_TRC_RF_CoClockSetting(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_MML1_TRC_RF_ClkBuf_SWHWMode(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_MML1_TRC_RF_ClkBuf_SWStatus(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_MML1_TRC_RF_CW_VALUE(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_MML1_TRC_POR_CW_VALUE(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_MML1_TRC_POC_CW_VALUE(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_MML1_TRC_POR_RD_CHECK(short v1, short v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, short v8, unsigned char v9, unsigned char v10, unsigned char v11, unsigned char v12, unsigned char v13);
void L1TRC_Send_MML1_TRC_RF_SHARE_BPI(unsigned char v1, unsigned char v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_MML1_TRC_PMIC_PWM_SET(unsigned char v1);
void L1TRC_Send_MML1_TRC_PMIC_PWM_CLR(unsigned char v1);
void L1TRC_Send_MML1_TRC_PMIC_PWM_STATUS(unsigned char v1);
void L1TRC_Send_MML1_TRC_PMIC_PWM_BYRAT(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4);
void L1TRC_Send_MML1_TRC_PMIC_VPA_CONTROL(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_MIPI_PowerOn(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_MIPI_PowerOff(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_MIPI_InitCW(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, short v6);
void L1TRC_Send_MML1_TRC_MIPI_USID_TBL(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7);
void L1TRC_Send_MML1_TRC_MIPI_RDCW_DBG(short v1, short v2, short v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9);
void L1TRC_Send_MML1_TRC_DRDI_Init(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_MML1_TRC_DRDI_Update(unsigned char v1, unsigned char v2, short v3, short v4);
void L1TRC_Send_MML1_TRC_DRDI_Nvram_DBG(unsigned char v1, short v2);
void L1TRC_Send_MML1_TRC_DRDI_ReMap_DBG(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_MML1_TRC_DRDI_ReMapSetNum_DBG(unsigned char v1, short v2, short v3, short v4);
void L1TRC_Send_MML1_TRC_CONFLICT_RAT_CHECK(unsigned char v1, unsigned char v2);
void L1TRC_Send_MML1_TRC_LOAD_VER(short v1, short v2, short v3, short v4);
void L1TRC_Send_MML1_TRC_LOGGERPTR_DBG(unsigned char v1, short v2, short v3);
void L1TRC_Send_MML1_TRC_BSILOGGER_DBG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9, unsigned char v10);
void L1TRC_Send_MML1_TRC_RFCW_DUMP_DBG(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6);
void L1TRC_Send_MML1_TRC_BSILOGGER_DBG1(unsigned char v1, unsigned long v2);
void L1TRC_Send_MML1_TRC_BSILOGGER_DBG2(unsigned char v1, unsigned long v2, unsigned char v3, unsigned long v4);
void L1TRC_Send_MML1_TRC_BSILOGGER_DBG3(unsigned char v1, unsigned long v2, unsigned char v3, unsigned long v4, unsigned char v5, unsigned long v6);
void L1TRC_Send_MML1_TRC_BSILOGGER_DBG4(unsigned char v1, unsigned long v2, unsigned char v3, unsigned long v4, unsigned char v5, unsigned long v6, unsigned char v7, unsigned long v8);
void L1TRC_Send_MML1_TRC_BSILOGGER_DBG5(unsigned char v1, unsigned long v2, unsigned char v3, unsigned long v4, unsigned char v5, unsigned long v6, unsigned char v7, unsigned long v8, unsigned char v9, unsigned long v10);
void L1TRC_Send_MML1_TRC_D16_REG_DBG(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_MML1_TRC_D32_REG_DBG(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9);
void L1TRC_Send_MML1_TRC_SRAM_CTRL_REG_DBG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8);
void L1TRC_Send_MML1_TRC_HCLK_CGEN_REG_DBG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8);
void L1TRC_Send_MML1_TRC_BSISPI_CGEN_REG_DBG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8);
void L1TRC_Send_MML1_TRC_AUXADC_PDN_REG_DBG(unsigned char v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8);
void L1TRC_Send_MML1_TRC_DEBUG1(unsigned short v1, long v2);
void L1TRC_Send_MML1_TRC_DEBUG2(unsigned short v1, long v2, long v3);
void L1TRC_Send_MML1_TRC_DEBUG3(unsigned short v1, long v2, long v3, long v4);
void L1TRC_Send_MML1_TRC_DEBUG4(unsigned short v1, long v2, long v3, long v4, long v5);
void L1TRC_Send_MML1_TRC_DEBUG5(unsigned short v1, long v2, long v3, long v4, long v5, long v6);
void L1TRC_Send_MML1_TRC_DEBUG6(unsigned short v1, long v2, long v3, long v4, long v5, long v6, long v7);
void L1TRC_Send_MML1_TRC_DEBUG7(unsigned short v1, long v2, long v3, long v4, long v5, long v6, long v7, long v8);

void Set_MML1_RF_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_MML1_RF()	(MML1_RF_Trace_Filter[0]==1)
#define ChkL1ClsFltr_MML1_RF_MML1_RF_L()	(ChkL1ModFltr_MML1_RF()&&((MML1_RF_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_MML1_RF_MML1_RF_M()	(ChkL1ModFltr_MML1_RF()&&((MML1_RF_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_MML1_RF_MML1_RF_H()	(ChkL1ModFltr_MML1_RF()&&((MML1_RF_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_MML1_RF_MML1_DBG_H()	(ChkL1ModFltr_MML1_RF()&&((MML1_RF_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_MML1_RF_MML1_DBG_L()	(ChkL1ModFltr_MML1_RF()&&((MML1_RF_Trace_Filter[1]&0x10)!=0))
#define ChkL1MsgFltr_MML1_TRC_RF_PowerOn()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_PowerOff()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_CommonPOCDone()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_RATWaitForPOC()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_RATPOCDone()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_EnterFlightMode()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_LeaveFlightMode()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_TDDUpdateStatus()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_TDDStatus()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_TDDHandshake()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MML1_TRC_RF_RFICInfo()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_RATInfo()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_DCXOCAPID()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_DCXOLPM()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_DCXOFPM()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_ChipVersion()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_CoClockSetting()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_ClkBuf_SWHWMode()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_ClkBuf_SWStatus()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_RF_CW_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_POR_CW_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_POC_CW_VALUE()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_POR_RD_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_RF_SHARE_BPI()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_PMIC_PWM_SET()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MML1_TRC_PMIC_PWM_CLR()	ChkL1ClsFltr_MML1_RF_MML1_RF_L()
#define ChkL1MsgFltr_MML1_TRC_PMIC_PWM_STATUS()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MML1_TRC_PMIC_PWM_BYRAT()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MML1_TRC_PMIC_VPA_CONTROL()	ChkL1ClsFltr_MML1_RF_MML1_RF_M()
#define ChkL1MsgFltr_MML1_TRC_MIPI_PowerOn()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_MIPI_PowerOff()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_MIPI_InitCW()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_MIPI_USID_TBL()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_MIPI_RDCW_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DRDI_Init()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_DRDI_Update()	ChkL1ClsFltr_MML1_RF_MML1_RF_H()
#define ChkL1MsgFltr_MML1_TRC_DRDI_Nvram_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DRDI_ReMap_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DRDI_ReMapSetNum_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_CONFLICT_RAT_CHECK()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_LOAD_VER()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_LOGGERPTR_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSILOGGER_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_RFCW_DUMP_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSILOGGER_DBG1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSILOGGER_DBG2()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSILOGGER_DBG3()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSILOGGER_DBG4()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSILOGGER_DBG5()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_D16_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_D32_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_SRAM_CTRL_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_HCLK_CGEN_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_BSISPI_CGEN_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_AUXADC_PDN_REG_DBG()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG1()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG2()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG3()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG4()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG5()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG6()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()
#define ChkL1MsgFltr_MML1_TRC_DEBUG7()	ChkL1ClsFltr_MML1_RF_MML1_DBG_H()


#endif
