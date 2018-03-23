#ifndef L1TRC_EPDCP_DETAIL_DEF_H
#define L1TRC_EPDCP_DETAIL_DEF_H

/******************************/
/* String category definition */
/******************************/


/****************************/
/* Message macro definition */
/****************************/
#include "L1Trc.h"
#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_RX_CB_PDU_TO_CB_QUE(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x0010 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_RX_CB_PDU_TO_CB_QUE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_RX_CB_PDU_TO_OK_QUE(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x0110 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_RX_CB_PDU_TO_OK_QUE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_RX_OK_PDU_TO_OK_QUE(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x0210 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_RX_OK_PDU_TO_OK_QUE(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_OOW_PDU_INFO_HWM(v1, v2, v3) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x0310 | ((short)(v1) << 16), (unsigned long)(v2), (long)(v3));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_OOW_PDU_INFO_HWM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_OOW_PDU_INFO_SWM(v1, v2, v3) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x0410 | ((short)(v1) << 16), (unsigned long)(v2), (long)(v3));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_OOW_PDU_INFO_SWM(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_OOW_PDU_INFO_ROHC(v1, v2, v3) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x0510 | ((short)(v1) << 16), (unsigned long)(v2), (long)(v3));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_OOW_PDU_INFO_ROHC(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_INV_SDU_MACI_LEN_PDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0610 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_INV_SDU_MACI_LEN_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DROP_INV_HDR_LEN_DATA_PDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0710 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DROP_INV_HDR_LEN_DATA_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DROP_INV_SDU_LEN_DATA_PDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0810 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DROP_INV_SDU_LEN_DATA_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DROP_INV_PDU_LEN_CTRL_PDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0910 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DROP_INV_PDU_LEN_CTRL_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DROP_UM_CB_CHNL_PDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0A10 | ((short)(v1) << 16), (long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DROP_UM_CB_CHNL_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_NO_UL_GPD_ALLOCATED(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_1_word(0x0B10 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_NO_UL_GPD_ALLOCATED(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_SCALE_LPBK_SDU(v1, v2, v3) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_3_word(0x0C10 | ((short)(v1) << 16), (unsigned long)(v2), (long)(v3));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_SCALE_LPBK_SDU(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_NO_SCALE_LPBK_SDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0 )\
			l2trc_send_2_word(0x0D10 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_NO_SCALE_LPBK_SDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DL_IPID(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x0E10 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DL_IPID(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_UL_IPID_1_PDU(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_2_word(0x0F10 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_UL_IPID_1_PDU(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_UL_IPID_3_PDU(v1, v2, v3, v4) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x08)!=0 )\
			l2trc_send_4_word(0x1010 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3), (unsigned long)(v4));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_UL_IPID_3_PDU(v1, v2, v3, v4)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_UPDT_LAST_CB_PC(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x1110 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_UPDT_LAST_CB_PC(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DRB_DLVR_BMP(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x1210 | ((unsigned short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DRB_DLVR_BMP(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_CURR_OS_TICK(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_2_word(0x1310 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_CURR_OS_TICK(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DCCH_DATA_RES_PARAM_WRONG(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1410 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DCCH_DATA_RES_PARAM_WRONG(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_RESUME_CHNL_WO_VALID_DRB(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1510 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_RESUME_CHNL_WO_VALID_DRB(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_EMPTY_DL_WINDOW(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x04)!=0 )\
			l2trc_send_1_word(0x1610 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_EMPTY_DL_WINDOW(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_MERGE_DL_PDUS_TO_REORD_WND(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1710 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_MERGE_DL_PDUS_TO_REORD_WND(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_SEARCH_CONTINUE_PC_FROM_WND(v1, v2) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_2_word(0x1810 | ((short)(v1) << 16), (unsigned long)(v2));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_SEARCH_CONTINUE_PC_FROM_WND(v1, v2)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_UNEXP_PC_STOP(v1, v2, v3) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x1910 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_UNEXP_PC_STOP(v1, v2, v3)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DL_FC_WND_EMPTY(v1) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_1_word(0x1A10 | ((short)(v1) << 16));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DL_FC_WND_EMPTY(v1)
#endif

#if defined(L1_CATCHER) && ( !defined(_L1_DISABLE_TRACE_LEVEL_) || (_L1_DISABLE_TRACE_LEVEL_ < 1) )
	#define EPDCP_DTL_LOG_DL_FC_DLVR_UNEXP_PC_STOP(v1, v2, v3) do {\
		if(EPDCP_DETAIL_Trace_Filter[0]==1 && (EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0 )\
			l2trc_send_3_word(0x1B10 | ((short)(v1) << 16), (unsigned long)(v2), (unsigned long)(v3));\
	} while(0)
#else
	#define EPDCP_DTL_LOG_DL_FC_DLVR_UNEXP_PC_STOP(v1, v2, v3)
#endif



/*******************************/
/* declaration of filter array */
/*******************************/
extern unsigned char EPDCP_DETAIL_Trace_Filter[5];
/*************************/
/* Function declarations */
/*************************/
#ifdef L1_CATCHER

void L1TRC_Send_EPDCP_DTL_LOG_RX_CB_PDU_TO_CB_QUE(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_RX_CB_PDU_TO_OK_QUE(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_RX_OK_PDU_TO_OK_QUE(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_OOW_PDU_INFO_HWM(short v1, unsigned long v2, long v3);
void L1TRC_Send_EPDCP_DTL_LOG_OOW_PDU_INFO_SWM(short v1, unsigned long v2, long v3);
void L1TRC_Send_EPDCP_DTL_LOG_OOW_PDU_INFO_ROHC(short v1, unsigned long v2, long v3);
void L1TRC_Send_EPDCP_DTL_LOG_INV_SDU_MACI_LEN_PDU(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DROP_INV_HDR_LEN_DATA_PDU(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DROP_INV_SDU_LEN_DATA_PDU(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DROP_INV_PDU_LEN_CTRL_PDU(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DROP_UM_CB_CHNL_PDU(short v1, long v2);
void L1TRC_Send_EPDCP_DTL_LOG_NO_UL_GPD_ALLOCATED(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_SCALE_LPBK_SDU(short v1, unsigned long v2, long v3);
void L1TRC_Send_EPDCP_DTL_LOG_NO_SCALE_LPBK_SDU(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DL_IPID(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_UL_IPID_1_PDU(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_UL_IPID_3_PDU(short v1, unsigned long v2, unsigned long v3, unsigned long v4);
void L1TRC_Send_EPDCP_DTL_LOG_UPDT_LAST_CB_PC(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DRB_DLVR_BMP(unsigned short v1);
void L1TRC_Send_EPDCP_DTL_LOG_CURR_OS_TICK(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_DCCH_DATA_RES_PARAM_WRONG(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_RESUME_CHNL_WO_VALID_DRB(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_EMPTY_DL_WINDOW(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_MERGE_DL_PDUS_TO_REORD_WND(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_SEARCH_CONTINUE_PC_FROM_WND(short v1, unsigned long v2);
void L1TRC_Send_EPDCP_DTL_LOG_UNEXP_PC_STOP(short v1, unsigned long v2, unsigned long v3);
void L1TRC_Send_EPDCP_DTL_LOG_DL_FC_WND_EMPTY(short v1);
void L1TRC_Send_EPDCP_DTL_LOG_DL_FC_DLVR_UNEXP_PC_STOP(short v1, unsigned long v2, unsigned long v3);

void Set_EPDCP_DETAIL_Filter(unsigned char *setting);

#endif

/************************************/
/* Filter checking API declarations */
/************************************/

#define ChkL1ModFltr_EPDCP_DETAIL()	(EPDCP_DETAIL_Trace_Filter[0]==1)
#define ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()	(ChkL1ModFltr_EPDCP_DETAIL()&&((EPDCP_DETAIL_Trace_Filter[1]&0x01)!=0))
#define ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()	(ChkL1ModFltr_EPDCP_DETAIL()&&((EPDCP_DETAIL_Trace_Filter[1]&0x02)!=0))
#define ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_DBG()	(ChkL1ModFltr_EPDCP_DETAIL()&&((EPDCP_DETAIL_Trace_Filter[1]&0x04)!=0))
#define ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_IPID()	(ChkL1ModFltr_EPDCP_DETAIL()&&((EPDCP_DETAIL_Trace_Filter[1]&0x08)!=0))
#define ChkL1MsgFltr_EPDCP_DTL_LOG_RX_CB_PDU_TO_CB_QUE()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_RX_CB_PDU_TO_OK_QUE()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_RX_OK_PDU_TO_OK_QUE()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_DBG()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_OOW_PDU_INFO_HWM()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_OOW_PDU_INFO_SWM()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_OOW_PDU_INFO_ROHC()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_INV_SDU_MACI_LEN_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DROP_INV_HDR_LEN_DATA_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DROP_INV_SDU_LEN_DATA_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DROP_INV_PDU_LEN_CTRL_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DROP_UM_CB_CHNL_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_NO_UL_GPD_ALLOCATED()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_SCALE_LPBK_SDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_NO_SCALE_LPBK_SDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_PACKET()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DL_IPID()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_IPID()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_UL_IPID_1_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_IPID()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_UL_IPID_3_PDU()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_IPID()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_UPDT_LAST_CB_PC()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_DBG()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DRB_DLVR_BMP()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_DBG()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_CURR_OS_TICK()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_DBG()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DCCH_DATA_RES_PARAM_WRONG()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_RESUME_CHNL_WO_VALID_DRB()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_EMPTY_DL_WINDOW()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_DBG()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_MERGE_DL_PDUS_TO_REORD_WND()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_SEARCH_CONTINUE_PC_FROM_WND()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_UNEXP_PC_STOP()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DL_FC_WND_EMPTY()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()
#define ChkL1MsgFltr_EPDCP_DTL_LOG_DL_FC_DLVR_UNEXP_PC_STOP()	ChkL1ClsFltr_EPDCP_DETAIL_EPDCP_BRANCH()


#endif
