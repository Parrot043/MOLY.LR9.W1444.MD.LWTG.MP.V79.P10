#ifndef L1TRC_EPHY_RF_DEF_H
#define L1TRC_EPHY_RF_DEF_H

/******************************/
/* String category definition */
/******************************/
#define EPHY_TRC_STR_FLAG(v1)  (unsigned char)(v1+0)
#define EPHY_TRC_STR_HEX(v1)  (unsigned char)(v1+2)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPHY_TRC_Init() do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x002D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_Init()
#endif
#define EPHY_TRC_Init_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x002D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPHY_TRC_WakeUp(v1) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x012D, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_WakeUp(v1)
#endif
#define EPHY_TRC_WakeUp_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x012D, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPHY_TRC_Sleep() do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x01)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x022D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_Sleep()
#endif
#define EPHY_TRC_Sleep_NOFLTR() TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x022D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_BandSupport(v1) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x032D, (short)(v1)));\
	} while(0)
#else
	#define EPHY_TRC_BandSupport(v1)
#endif
#define EPHY_TRC_BandSupport_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x032D, (short)(v1)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_TEMPDAC_TABLE(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x042D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_TEMPDAC_TABLE(v1, v2)
#endif
#define EPHY_TRC_TEMPDAC_TABLE_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x042D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DRDI_Init(v1, v2, v3) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x052D, (short)(v3)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_DRDI_Init(v1, v2, v3)
#endif
#define EPHY_TRC_DRDI_Init_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x052D, (short)(v3)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DSDA_RX_STATUS(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x062D, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)), TRC_MERGE_4C((unsigned char)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_DSDA_RX_STATUS(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define EPHY_TRC_DSDA_RX_STATUS_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_4_DATA(TRC_MERGE_2S(0x062D, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)), TRC_MERGE_4C((unsigned char)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DSDA_TX_STATUS(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x072D, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)), TRC_MERGE_4C((unsigned char)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_DSDA_TX_STATUS(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define EPHY_TRC_DSDA_TX_STATUS_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_4_DATA(TRC_MERGE_2S(0x072D, (short)(v2)), TRC_MERGE_4C((unsigned char)(v1), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)), TRC_MERGE_4C((unsigned char)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_TPO_STATUS(v1, v2, v3, v4) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x04)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x082D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_TPO_STATUS(v1, v2, v3, v4)
#endif
#define EPHY_TRC_TPO_STATUS_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x082D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_D16_REG_DBG(v1, v2, v3, v4, v5) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x092D, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)));\
	} while(0)
#else
	#define EPHY_TRC_D16_REG_DBG(v1, v2, v3, v4, v5)
#endif
#define EPHY_TRC_D16_REG_DBG_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_2_DATA(TRC_MERGE_2S(0x092D, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_D32_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x0A2D, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)));\
	} while(0)
#else
	#define EPHY_TRC_D32_REG_DBG(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif
#define EPHY_TRC_D32_REG_DBG_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9) TRC_SEND_3_DATA(TRC_MERGE_2S(0x0A2D, (short)(v1)), TRC_MERGE_4C((unsigned char)(v2), (unsigned char)(v3), (unsigned char)(v4), (unsigned char)(v5)), TRC_MERGE_4C((unsigned char)(v6), (unsigned char)(v7), (unsigned char)(v8), (unsigned char)(v9)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG1(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0B2D, (unsigned short)(v1)), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG1(v1, v2)
#endif
#define EPHY_TRC_DEBUG1_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0B2D, (unsigned short)(v1)), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG2(v1, v2, v3) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x0C2D, (unsigned short)(v1)), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG2(v1, v2, v3)
#endif
#define EPHY_TRC_DEBUG2_NOFLTR(v1, v2, v3) TRC_SEND_3_DATA(TRC_MERGE_2S(0x0C2D, (unsigned short)(v1)), (long)(v2), (long)(v3))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG3(v1, v2, v3, v4) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x0D2D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG3(v1, v2, v3, v4)
#endif
#define EPHY_TRC_DEBUG3_NOFLTR(v1, v2, v3, v4) TRC_SEND_4_DATA(TRC_MERGE_2S(0x0D2D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG4(v1, v2, v3, v4, v5) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x0E2D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG4(v1, v2, v3, v4, v5)
#endif
#define EPHY_TRC_DEBUG4_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_5_DATA(TRC_MERGE_2S(0x0E2D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG5(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_6_DATA(TRC_MERGE_2S(0x0F2D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG5(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_DEBUG5_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_6_DATA(TRC_MERGE_2S(0x0F2D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG6(v1, v2, v3, v4, v5, v6, v7) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_7_DATA(TRC_MERGE_2S(0x102D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG6(v1, v2, v3, v4, v5, v6, v7)
#endif
#define EPHY_TRC_DEBUG6_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_7_DATA(TRC_MERGE_2S(0x102D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7))

#if defined(L1_CATCHER)
	#define EPHY_TRC_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_8_DATA(TRC_MERGE_2S(0x112D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (long)(v8));\
	} while(0)
#else
	#define EPHY_TRC_DEBUG7(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define EPHY_TRC_DEBUG7_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_8_DATA(TRC_MERGE_2S(0x112D, (unsigned short)(v1)), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (long)(v8))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG0(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x122D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG0(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG0_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x122D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG1(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x132D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v4)), TRC_MERGE_2S((short)(v5), (short)(v6)), (long)(v3));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG1(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG1_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x132D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v4)), TRC_MERGE_2S((short)(v5), (short)(v6)), (long)(v3))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG2(v1, v2, v3, v4, v5, v6, v7, v8, v9) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x142D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG2(v1, v2, v3, v4, v5, v6, v7, v8, v9)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG2_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9) TRC_SEND_5_DATA(TRC_MERGE_2S(0x142D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG3(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x152D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG3(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG3_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x152D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG4(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_9_DATA(TRC_MERGE_2S(0x162D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_1S2C((short)(v16), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG4(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG4_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16) TRC_SEND_9_DATA(TRC_MERGE_2S(0x162D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_1S2C((short)(v16), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_9_DATA(TRC_MERGE_2S(0x172D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG5(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG5_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17) TRC_SEND_9_DATA(TRC_MERGE_2S(0x172D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG6(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x182D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_1S2C((short)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG6(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG6_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_5_DATA(TRC_MERGE_2S(0x182D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_1S2C((short)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG7(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x192D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_1S2C((short)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG7(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG7_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_5_DATA(TRC_MERGE_2S(0x192D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_1S2C((short)(v8), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG8(v1, v2, v3, v4) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x1A2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG8(v1, v2, v3, v4)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG8_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x1A2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG9(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x1B2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG9(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG9_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x1B2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_8_DATA(TRC_MERGE_2S(0x1C2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG10(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG10_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15) TRC_SEND_8_DATA(TRC_MERGE_2S(0x1C2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG11(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1D2D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG11(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG11_NOFLTR(v1, v2) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x1D2D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG12(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x1E2D, (short)(v2)), TRC_MERGE_2S((short)(v3), (short)(v4)), TRC_MERGE_2S((short)(v5), (short)(v6)), (long)(v1));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG12(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG12_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x1E2D, (short)(v2)), TRC_MERGE_2S((short)(v3), (short)(v4)), TRC_MERGE_2S((short)(v5), (short)(v6)), (long)(v1))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG13(v1, v2, v3, v4, v5, v6, v7) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x1F2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG13(v1, v2, v3, v4, v5, v6, v7)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG13_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_4_DATA(TRC_MERGE_2S(0x1F2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG14(v1, v2, v3, v4, v5) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x202D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG14(v1, v2, v3, v4, v5)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG14_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x202D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG15(v1, v2, v3, v4, v5, v6, v7) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x212D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG15(v1, v2, v3, v4, v5, v6, v7)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG15_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_4_DATA(TRC_MERGE_2S(0x212D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG16(v1, v2, v3, v4, v5, v6, v7) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x222D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG16(v1, v2, v3, v4, v5, v6, v7)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG16_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_4_DATA(TRC_MERGE_2S(0x222D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG17(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_6_DATA(TRC_MERGE_2S(0x232D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_1S2C((short)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG17(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG17_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_6_DATA(TRC_MERGE_2S(0x232D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_1S2C((short)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG18(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x242D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG18(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG18_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x242D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG19(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x252D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG19(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG19_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x252D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG20(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x262D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG20(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG20_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x262D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG21(v1, v2, v3) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x272D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG21(v1, v2, v3)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG21_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x272D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG22(v1, v2, v3, v4, v5, v6, v7, v8) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_9_DATA(TRC_MERGE_1S2C(0x282D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (long)(v8));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG22(v1, v2, v3, v4, v5, v6, v7, v8)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG22_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8) TRC_SEND_9_DATA(TRC_MERGE_1S2C(0x282D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2), (long)(v3), (long)(v4), (long)(v5), (long)(v6), (long)(v7), (long)(v8))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG23(v1, v2, v3, v4) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x292D, (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG23(v1, v2, v3, v4)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG23_NOFLTR(v1, v2, v3, v4) TRC_SEND_4_DATA(TRC_MERGE_2S(0x292D, (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG24(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x2A2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG24(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG24_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x2A2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG25(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2B2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG25(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG25_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2B2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG26(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2C2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG26(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG26_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2C2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG27(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x2D2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG27(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG27_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x2D2D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG28(v1, v2, v3, v4, v5) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_5_DATA(TRC_MERGE_2S(0x2E2D, (short)(v4)), TRC_MERGE_1S2C((short)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2), (long)(v3));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG28(v1, v2, v3, v4, v5)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG28_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_5_DATA(TRC_MERGE_2S(0x2E2D, (short)(v4)), TRC_MERGE_1S2C((short)(v5), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2), (long)(v3))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG29(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_6_DATA(TRC_MERGE_2S(0x2F2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_1S2C((short)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG29(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG29_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_6_DATA(TRC_MERGE_2S(0x2F2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_1S2C((short)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG30(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_6_DATA(TRC_MERGE_2S(0x302D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_1S2C((short)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG30(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG30_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10) TRC_SEND_6_DATA(TRC_MERGE_2S(0x302D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_1S2C((short)(v10), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG31(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_17_DATA(TRC_MERGE_2S(0x312D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)), TRC_MERGE_2S((short)(v18), (short)(v19)), TRC_MERGE_2S((short)(v20), (short)(v21)), TRC_MERGE_2S((short)(v22), (short)(v23)), TRC_MERGE_2S((short)(v24), (short)(v25)), TRC_MERGE_2S((short)(v26), (short)(v27)), TRC_MERGE_2S((short)(v28), (short)(v29)), TRC_MERGE_2S((short)(v30), (short)(v31)), TRC_MERGE_2S((short)(v32), (short)(v33)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG31(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG31_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) TRC_SEND_17_DATA(TRC_MERGE_2S(0x312D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)), TRC_MERGE_2S((short)(v18), (short)(v19)), TRC_MERGE_2S((short)(v20), (short)(v21)), TRC_MERGE_2S((short)(v22), (short)(v23)), TRC_MERGE_2S((short)(v24), (short)(v25)), TRC_MERGE_2S((short)(v26), (short)(v27)), TRC_MERGE_2S((short)(v28), (short)(v29)), TRC_MERGE_2S((short)(v30), (short)(v31)), TRC_MERGE_2S((short)(v32), (short)(v33)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG32(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_17_DATA(TRC_MERGE_2S(0x322D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)), TRC_MERGE_2S((short)(v18), (short)(v19)), TRC_MERGE_2S((short)(v20), (short)(v21)), TRC_MERGE_2S((short)(v22), (short)(v23)), TRC_MERGE_2S((short)(v24), (short)(v25)), TRC_MERGE_2S((short)(v26), (short)(v27)), TRC_MERGE_2S((short)(v28), (short)(v29)), TRC_MERGE_2S((short)(v30), (short)(v31)), TRC_MERGE_2S((short)(v32), (short)(v33)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG32(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG32_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) TRC_SEND_17_DATA(TRC_MERGE_2S(0x322D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)), TRC_MERGE_2S((short)(v18), (short)(v19)), TRC_MERGE_2S((short)(v20), (short)(v21)), TRC_MERGE_2S((short)(v22), (short)(v23)), TRC_MERGE_2S((short)(v24), (short)(v25)), TRC_MERGE_2S((short)(v26), (short)(v27)), TRC_MERGE_2S((short)(v28), (short)(v29)), TRC_MERGE_2S((short)(v30), (short)(v31)), TRC_MERGE_2S((short)(v32), (short)(v33)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG33(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_17_DATA(TRC_MERGE_2S(0x332D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)), TRC_MERGE_2S((short)(v18), (short)(v19)), TRC_MERGE_2S((short)(v20), (short)(v21)), TRC_MERGE_2S((short)(v22), (short)(v23)), TRC_MERGE_2S((short)(v24), (short)(v25)), TRC_MERGE_2S((short)(v26), (short)(v27)), TRC_MERGE_2S((short)(v28), (short)(v29)), TRC_MERGE_2S((short)(v30), (short)(v31)), TRC_MERGE_2S((short)(v32), (short)(v33)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG33(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG33_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33) TRC_SEND_17_DATA(TRC_MERGE_2S(0x332D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_2S((short)(v14), (short)(v15)), TRC_MERGE_2S((short)(v16), (short)(v17)), TRC_MERGE_2S((short)(v18), (short)(v19)), TRC_MERGE_2S((short)(v20), (short)(v21)), TRC_MERGE_2S((short)(v22), (short)(v23)), TRC_MERGE_2S((short)(v24), (short)(v25)), TRC_MERGE_2S((short)(v26), (short)(v27)), TRC_MERGE_2S((short)(v28), (short)(v29)), TRC_MERGE_2S((short)(v30), (short)(v31)), TRC_MERGE_2S((short)(v32), (short)(v33)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG34(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x342D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG34(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG34_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x342D, (short)(v1)), TRC_MERGE_1S2C((short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG35(v1, v2, v3, v4, v5) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x352D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG35(v1, v2, v3, v4, v5)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG35_NOFLTR(v1, v2, v3, v4, v5) TRC_SEND_3_DATA(TRC_MERGE_2S(0x352D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG36(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_8_DATA(TRC_MERGE_2S(0x362D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_1S2C((short)(v14), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG36(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG36_NOFLTR(v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14) TRC_SEND_8_DATA(TRC_MERGE_2S(0x362D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_2S((short)(v6), (short)(v7)), TRC_MERGE_2S((short)(v8), (short)(v9)), TRC_MERGE_2S((short)(v10), (short)(v11)), TRC_MERGE_2S((short)(v12), (short)(v13)), TRC_MERGE_1S2C((short)(v14), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG37(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x372D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG37(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG37_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x372D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG38(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x382D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG38(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG38_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x382D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG39(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x392D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG39(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG39_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x392D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG46(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x3A2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG46(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG46_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x3A2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG47(v1, v2, v3, v4, v5, v6) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x3B2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG47(v1, v2, v3, v4, v5, v6)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG47_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x3B2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG40(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x3C2D, (short)(v1)), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG40(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG40_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x3C2D, (short)(v1)), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG41(v1, v2, v3, v4) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x3D2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG41(v1, v2, v3, v4)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG41_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x3D2D, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_1S2C((short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG42(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3E2D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG42(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG42_NOFLTR(v1, v2) TRC_SEND_3_DATA(TRC_MERGE_1S2C(0x3E2D, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (long)(v1), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG43(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x3F2D, (short)(v1)), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG43(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG43_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x3F2D, (short)(v1)), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG44(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x402D, (short)(v1)), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG44(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG44_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x402D, (short)(v1)), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_RFC_ETCAL_DBG45(v1, v2) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x412D, (short)(v1)), (long)(v2));\
	} while(0)
#else
	#define EPHY_TRC_RFC_ETCAL_DBG45(v1, v2)
#endif
#define EPHY_TRC_RFC_ETCAL_DBG45_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x412D, (short)(v1)), (long)(v2))

#if defined(L1_CATCHER)
	#define EPHY_TRC_ET_DRIVER_LOG1(v1) do {\
		if(EPHY_RF_Trace_Filter[0]==1 && (EPHY_RF_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x422D, (short)(v1)));\
	} while(0)
#else
	#define EPHY_TRC_ET_DRIVER_LOG1(v1)
#endif
#define EPHY_TRC_ET_DRIVER_LOG1_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x422D, (short)(v1)))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char EPHY_RF_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_EPHY_TRC_Init(void);
void L1TRC_Send_EPHY_TRC_WakeUp(unsigned char v1);
void L1TRC_Send_EPHY_TRC_Sleep(void);
void L1TRC_Send_EPHY_TRC_BandSupport(short v1);
void L1TRC_Send_EPHY_TRC_TEMPDAC_TABLE(short v1, short v2);
void L1TRC_Send_EPHY_TRC_DRDI_Init(unsigned char v1, unsigned char v2, short v3);
void L1TRC_Send_EPHY_TRC_DSDA_RX_STATUS(unsigned char v1, short v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9, unsigned char v10);
void L1TRC_Send_EPHY_TRC_DSDA_TX_STATUS(unsigned char v1, short v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9, unsigned char v10);
void L1TRC_Send_EPHY_TRC_TPO_STATUS(short v1, short v2, short v3, short v4);
void L1TRC_Send_EPHY_TRC_D16_REG_DBG(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5);
void L1TRC_Send_EPHY_TRC_D32_REG_DBG(short v1, unsigned char v2, unsigned char v3, unsigned char v4, unsigned char v5, unsigned char v6, unsigned char v7, unsigned char v8, unsigned char v9);
void L1TRC_Send_EPHY_TRC_DEBUG1(unsigned short v1, long v2);
void L1TRC_Send_EPHY_TRC_DEBUG2(unsigned short v1, long v2, long v3);
void L1TRC_Send_EPHY_TRC_DEBUG3(unsigned short v1, long v2, long v3, long v4);
void L1TRC_Send_EPHY_TRC_DEBUG4(unsigned short v1, long v2, long v3, long v4, long v5);
void L1TRC_Send_EPHY_TRC_DEBUG5(unsigned short v1, long v2, long v3, long v4, long v5, long v6);
void L1TRC_Send_EPHY_TRC_DEBUG6(unsigned short v1, long v2, long v3, long v4, long v5, long v6, long v7);
void L1TRC_Send_EPHY_TRC_DEBUG7(unsigned short v1, long v2, long v3, long v4, long v5, long v6, long v7, long v8);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG0(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG1(short v1, short v2, long v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG2(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG3(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG4(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG5(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16, short v17);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG6(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG7(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG8(short v1, short v2, short v3, short v4);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG9(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG10(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG11(long v1, long v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG12(long v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG13(short v1, short v2, short v3, short v4, short v5, short v6, short v7);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG14(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG15(short v1, short v2, short v3, short v4, short v5, short v6, short v7);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG16(short v1, short v2, short v3, short v4, short v5, short v6, short v7);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG17(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG18(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG19(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG20(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG21(short v1, short v2, short v3);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG22(long v1, long v2, long v3, long v4, long v5, long v6, long v7, long v8);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG23(long v1, long v2, short v3, short v4);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG24(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG25(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG26(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG27(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG28(long v1, long v2, long v3, short v4, short v5);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG29(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG30(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG31(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16, short v17, short v18, short v19, short v20, short v21, short v22, short v23, short v24, short v25, short v26, short v27, short v28, short v29, short v30, short v31, short v32, short v33);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG32(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16, short v17, short v18, short v19, short v20, short v21, short v22, short v23, short v24, short v25, short v26, short v27, short v28, short v29, short v30, short v31, short v32, short v33);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG33(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14, short v15, short v16, short v17, short v18, short v19, short v20, short v21, short v22, short v23, short v24, short v25, short v26, short v27, short v28, short v29, short v30, short v31, short v32, short v33);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG34(short v1, short v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG35(short v1, short v2, short v3, short v4, short v5);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG36(short v1, short v2, short v3, short v4, short v5, short v6, short v7, short v8, short v9, short v10, short v11, short v12, short v13, short v14);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG37(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG38(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG39(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG46(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG47(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG40(short v1, long v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG41(short v1, short v2, short v3, short v4);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG42(long v1, long v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG43(short v1, long v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG44(short v1, long v2);
void L1TRC_Send_EPHY_TRC_RFC_ETCAL_DBG45(short v1, long v2);
void L1TRC_Send_EPHY_TRC_ET_DRIVER_LOG1(short v1);

void Set_EPHY_RF_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EPHY_RF()	(EPHY_RF_Trace_Filter[0]==1)
#define ChkL1ClsFltr_EPHY_RF_EPHY_RF_L()	(ChkL1ModFltr_EPHY_RF()&&((EPHY_RF_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_EPHY_RF_EPHY_RF_M()	(ChkL1ModFltr_EPHY_RF()&&((EPHY_RF_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()	(ChkL1ModFltr_EPHY_RF()&&((EPHY_RF_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_EPHY_RF_EPHY_DBG_L()	(ChkL1ModFltr_EPHY_RF()&&((EPHY_RF_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()	(ChkL1ModFltr_EPHY_RF()&&((EPHY_RF_Trace_Filter[1]&0x10)!=0))
#define ChkL1MsgFltr_EPHY_TRC_Init()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_L()
#define ChkL1MsgFltr_EPHY_TRC_WakeUp()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_L()
#define ChkL1MsgFltr_EPHY_TRC_Sleep()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_L()
#define ChkL1MsgFltr_EPHY_TRC_BandSupport()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()
#define ChkL1MsgFltr_EPHY_TRC_TEMPDAC_TABLE()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()
#define ChkL1MsgFltr_EPHY_TRC_DRDI_Init()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()
#define ChkL1MsgFltr_EPHY_TRC_DSDA_RX_STATUS()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()
#define ChkL1MsgFltr_EPHY_TRC_DSDA_TX_STATUS()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()
#define ChkL1MsgFltr_EPHY_TRC_TPO_STATUS()	ChkL1ClsFltr_EPHY_RF_EPHY_RF_H()
#define ChkL1MsgFltr_EPHY_TRC_D16_REG_DBG()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_D32_REG_DBG()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG1()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG2()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG3()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG4()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG5()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG6()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_DEBUG7()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG0()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG1()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG2()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG3()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG4()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG5()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG6()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG7()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG8()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG9()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG10()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG11()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG12()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG13()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG14()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG15()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG16()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG17()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG18()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG19()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG20()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG21()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG22()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG23()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG24()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG25()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG26()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG27()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG28()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG29()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG30()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG31()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG32()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG33()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG34()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG35()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG36()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG37()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG38()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG39()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG46()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG47()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG40()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG41()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG42()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG43()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG44()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_RFC_ETCAL_DBG45()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()
#define ChkL1MsgFltr_EPHY_TRC_ET_DRIVER_LOG1()	ChkL1ClsFltr_EPHY_RF_EPHY_DBG_H()


#endif
