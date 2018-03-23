#ifndef L1TRC_EL1_DRV_2_DEF_H
#define L1TRC_EL1_DRV_2_DEF_H

/******************************/
/* String category definition */
/******************************/
#define DRV_Dynm_Id_String(v1)  (unsigned char)(v1+0)
#define DRV_Send_Msg_String(v1)  (unsigned char)(v1+14)


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_DYNM_CMD_HDR(v1, v2, v3) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0005, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_DYNM_CMD_HDR(v1, v2, v3)
#endif
#define DRV_LOG_DYNM_CMD_HDR_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_1S2C(0x0005, (unsigned char)(v1), (unsigned char)(v2)), TRC_MERGE_4C((unsigned char)(v3), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_DYNM_RPT_HDR(v1, v2) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0105, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define DRV_LOG_DYNM_RPT_HDR(v1, v2)
#endif
#define DRV_LOG_DYNM_RPT_HDR_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0105, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_MSG_SND(v1) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x02)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0205, (unsigned char)(v1), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_MSG_SND(v1)
#endif
#define DRV_LOG_MSG_SND_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0205, (unsigned char)(v1), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_CDIF_RX_CRNTI_READ(v1, v2, v3) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_1S2C(0x0305, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define DRV_LOG_CDIF_RX_CRNTI_READ(v1, v2, v3)
#endif
#define DRV_LOG_CDIF_RX_CRNTI_READ_NOFLTR(v1, v2, v3) TRC_SEND_4_DATA(TRC_MERGE_1S2C(0x0305, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD), (unsigned long)(v1), (unsigned long)(v2), (unsigned long)(v3))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_TR32K(v1, v2, v3) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0405, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)));\
	} while(0)
#else
	#define DRV_LOG_TR32K(v1, v2, v3)
#endif
#define DRV_LOG_TR32K_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0405, (unsigned short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_DRX_CYCLE(v1) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_2S(0x0505, (unsigned short)(v1)));\
	} while(0)
#else
	#define DRV_LOG_DRX_CYCLE(v1)
#endif
#define DRV_LOG_DRX_CYCLE_NOFLTR(v1) TRC_SEND_1_DATA(TRC_MERGE_2S(0x0505, (unsigned short)(v1)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_TIME_ERR_LPM(v1, v2) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0605, (unsigned short)(v1)), (long)(v2));\
	} while(0)
#else
	#define DRV_LOG_TIME_ERR_LPM(v1, v2)
#endif
#define DRV_LOG_TIME_ERR_LPM_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0605, (unsigned short)(v1)), (long)(v2))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_CDC_32K_IND(v1, v2) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0705, (unsigned short)(v1)), TRC_MERGE_4C((unsigned char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_CDC_32K_IND(v1, v2)
#endif
#define DRV_LOG_CDC_32K_IND_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0705, (unsigned short)(v1)), TRC_MERGE_4C((unsigned char)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_AFC_FWS_FREEZE(v1, v2) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0805, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define DRV_LOG_AFC_FWS_FREEZE(v1, v2)
#endif
#define DRV_LOG_AFC_FWS_FREEZE_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0805, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_TR32K_Freeze_Nbcch(v1, v2) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0905, (unsigned char)(v1), (unsigned char)(v2)));\
	} while(0)
#else
	#define DRV_LOG_TR32K_Freeze_Nbcch(v1, v2)
#endif
#define DRV_LOG_TR32K_Freeze_Nbcch_NOFLTR(v1, v2) TRC_SEND_1_DATA(TRC_MERGE_1S2C(0x0905, (unsigned char)(v1), (unsigned char)(v2)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_FORCE_RS_ON(v1, v2, v3) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0A05, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), (unsigned char)(v3), TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_FORCE_RS_ON(v1, v2, v3)
#endif
#define DRV_LOG_FORCE_RS_ON_NOFLTR(v1, v2, v3) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0A05, (unsigned short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), (unsigned char)(v3), TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_LPM_FWS_UPDT_TRACE(v1, v2, v3, v4, v5, v6) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x0B05, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_LPM_FWS_UPDT_TRACE(v1, v2, v3, v4, v5, v6)
#endif
#define DRV_LOG_LPM_FWS_UPDT_TRACE_NOFLTR(v1, v2, v3, v4, v5, v6) TRC_SEND_4_DATA(TRC_MERGE_2S(0x0B05, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (short)(v5)), TRC_MERGE_1S2C((short)(v6), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_CDIF_HST_AFC(v1, v2) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_2_DATA(TRC_MERGE_2S(0x0C05, (short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_CDIF_HST_AFC(v1, v2)
#endif
#define DRV_LOG_CDIF_HST_AFC_NOFLTR(v1, v2) TRC_SEND_2_DATA(TRC_MERGE_2S(0x0C05, (short)(v1)), TRC_MERGE_1S2C((unsigned short)(v2), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_GET_HST_AFC_STATUS(v1, v2, v3, v4, v5, v6, v7) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_4_DATA(TRC_MERGE_2S(0x0D05, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (unsigned short)(v5)), TRC_MERGE_2S((unsigned short)(v6), (short)(v7)));\
	} while(0)
#else
	#define DRV_LOG_GET_HST_AFC_STATUS(v1, v2, v3, v4, v5, v6, v7)
#endif
#define DRV_LOG_GET_HST_AFC_STATUS_NOFLTR(v1, v2, v3, v4, v5, v6, v7) TRC_SEND_4_DATA(TRC_MERGE_2S(0x0D05, (short)(v1)), TRC_MERGE_2S((short)(v2), (short)(v3)), TRC_MERGE_2S((short)(v4), (unsigned short)(v5)), TRC_MERGE_2S((unsigned short)(v6), (short)(v7)))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_PARAM_IN_ALGO(v1, v2, v3, v4) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x0E05, (short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_PARAM_IN_ALGO(v1, v2, v3, v4)
#endif
#define DRV_LOG_PARAM_IN_ALGO_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x0E05, (short)(v1)), TRC_MERGE_2S((unsigned short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define DRV_LOG_UPDATE_FROM_DRV(v1, v2, v3, v4) do {\
		if(EL1_DRV_2_Trace_Filter[0]==1 && (EL1_DRV_2_Trace_Filter[1]&0x10)!=0 )\
			TRC_SEND_3_DATA(TRC_MERGE_2S(0x0F05, (short)(v1)), TRC_MERGE_2S((short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD));\
	} while(0)
#else
	#define DRV_LOG_UPDATE_FROM_DRV(v1, v2, v3, v4)
#endif
#define DRV_LOG_UPDATE_FROM_DRV_NOFLTR(v1, v2, v3, v4) TRC_SEND_3_DATA(TRC_MERGE_2S(0x0F05, (short)(v1)), TRC_MERGE_2S((short)(v2), (unsigned short)(v3)), TRC_MERGE_1S2C((unsigned short)(v4), TRC_BOXSTER_PAD, TRC_BOXSTER_PAD))



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char EL1_DRV_2_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_DRV_LOG_DYNM_CMD_HDR(unsigned char v1, unsigned char v2, unsigned char v3);
void L1TRC_Send_DRV_LOG_DYNM_RPT_HDR(unsigned char v1, unsigned char v2);
void L1TRC_Send_DRV_LOG_MSG_SND(unsigned char v1);
void L1TRC_Send_DRV_LOG_CDIF_RX_CRNTI_READ(unsigned long v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_DRV_LOG_TR32K(unsigned short v1, unsigned short v2, unsigned short v3);
void L1TRC_Send_DRV_LOG_DRX_CYCLE(unsigned short v1);
void L1TRC_Send_DRV_LOG_TIME_ERR_LPM(unsigned short v1, long v2);
void L1TRC_Send_DRV_LOG_CDC_32K_IND(unsigned short v1, unsigned char v2);
void L1TRC_Send_DRV_LOG_AFC_FWS_FREEZE(unsigned char v1, unsigned char v2);
void L1TRC_Send_DRV_LOG_TR32K_Freeze_Nbcch(unsigned char v1, unsigned char v2);
void L1TRC_Send_DRV_LOG_FORCE_RS_ON(unsigned short v1, unsigned short v2, unsigned char v3);
void L1TRC_Send_DRV_LOG_LPM_FWS_UPDT_TRACE(short v1, short v2, short v3, short v4, short v5, short v6);
void L1TRC_Send_DRV_LOG_CDIF_HST_AFC(short v1, unsigned short v2);
void L1TRC_Send_DRV_LOG_GET_HST_AFC_STATUS(short v1, short v2, short v3, short v4, unsigned short v5, unsigned short v6, short v7);
void L1TRC_Send_DRV_LOG_PARAM_IN_ALGO(short v1, unsigned short v2, unsigned short v3, unsigned short v4);
void L1TRC_Send_DRV_LOG_UPDATE_FROM_DRV(short v1, short v2, unsigned short v3, unsigned short v4);

void Set_EL1_DRV_2_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EL1_DRV_2()	(EL1_DRV_2_Trace_Filter[0]==1)
#define ChkL1ClsFltr_EL1_DRV_2_drv_func_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_func_trace_1()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_func_trace_2()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_math_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x08)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x10)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_var_trace_l()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x20)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_var_trace_2()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x40)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_flow_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[1]&0x80)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_flow_trace_1()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[2]&0x01)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_flow_trace_2()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[2]&0x02)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_error_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[2]&0x04)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_param_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[2]&0x08)!=0))
#define ChkL1ClsFltr_EL1_DRV_2_drv_fws_trace()	(ChkL1ModFltr_EL1_DRV_2()&&((EL1_DRV_2_Trace_Filter[2]&0x10)!=0))
#define ChkL1MsgFltr_DRV_LOG_DYNM_CMD_HDR()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_DYNM_RPT_HDR()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_MSG_SND()	ChkL1ClsFltr_EL1_DRV_2_drv_func_trace_1()
#define ChkL1MsgFltr_DRV_LOG_CDIF_RX_CRNTI_READ()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_TR32K()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_DRX_CYCLE()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_TIME_ERR_LPM()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_CDC_32K_IND()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_AFC_FWS_FREEZE()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_TR32K_Freeze_Nbcch()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_FORCE_RS_ON()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_LPM_FWS_UPDT_TRACE()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_CDIF_HST_AFC()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_GET_HST_AFC_STATUS()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_PARAM_IN_ALGO()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()
#define ChkL1MsgFltr_DRV_LOG_UPDATE_FROM_DRV()	ChkL1ClsFltr_EL1_DRV_2_drv_var_trace()


#endif
