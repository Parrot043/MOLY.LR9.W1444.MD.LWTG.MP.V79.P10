/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2005
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 * switchControl2.c(originally named sim_MT6302.C)
 *
 * Project:
 * --------
 *   Gemini
 *
 * Description:
 * ------------
 *   this file is to do MT6302 related operation
 *
 * Author:
 * -------
 * -------
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *
 * removed!
 * removed!
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_SIM_OFF
#include  	"drv_comm.h"
#ifdef __SIM_DRV_MULTI_DRV_ARCH__
#include 	"reg_base.h"
#include 	"intrCtrl.h"
#include    "sim_reg_adp.h"

#include    "sim_al.h"
#include    "sim_hw_mtk.h"
//#include 		"dma_sw.h"
#include    "sim_sw_comm.h"
//#include    "sim_sw.h"
//#include    "dma_hw.h"
//#include	"gpt_sw.h"
//#include	"gpio_sw.h"
#include	"drv_hisr.h"
//#include	"usim_drv.h"
#include	"sim_mt6306.h"
#include "mt6306_i2c.h"
//#include "..\..\..\ps\sim\include\sim_trc.h"
/*RHR*/
#include "drv_features.h"
//#include "kal_non_specific_general_types.h"
#include "string.h"
#include "nvram_data_items.h"
#include "kal_public_defs.h" //MSBB change #include "stack_config.h"
#include "stack_ltlcom.h"
#include "stdio.h"
//#include "pmic_features.h"
#include "kal_trace.h"
#include "kal_debug.h"
/*RHR*/
#include "sim_drv_trc.h"
//#include "mt63062.h"
#include		"drv_hisr.h"
#if  (defined(DRV_SIM_ALL_SOLUTION_BUILT) || (defined(DRV_MULTIPLE_SIM) && !defined(DRV_2_SIM_CONTROLLER)))
#if defined(SIM_DRV_SWITCH_MT6306)
#ifdef __CLKG_DEFINE__
#if (defined(DRVPDN_CON1) || defined(DRVPDN_CON0))
#error "__CLKG_DEFINE__ & DRVPDN_CON1 are all defined"
#else /*(defined(DRVPDN_CON1) || defined(DRVPDN_CON0))*/

#ifdef SIM_PDN_REG_VERSION_3
#define DRVPDN_CON1		CG_CON0
#else /*SIM_PDN_REG_VERSION_3*/
#define DRVPDN_CON1		CG_CON1
#endif /*SIM_PDN_REG_VERSION_3*/

#ifdef SIM_PDN_REG_VERSION_3
/*MT6516 E2 has SIM2 PDN bit on MD side, we have to access CG_CON0 directly*/
#define DRVPDN_CON0		CG_CON0
#else /*SIM_PDN_REG_VERSION_3*/
#define DRVPDN_CON0		CG_CON0
#endif /*SIM_PDN_REG_VERSION_3*/

#endif /*(defined(DRVPDN_CON1) || defined(DRVPDN_CON0))*/

#if (defined(DRVPDN_CON1_SIM) || defined(DRVPDN_CON0_SIM2))
#error "__CLKG_DEFINE__ & DRVPDN_CON1_SIM are all defined"
#else /*(defined(DRVPDN_CON1_SIM) || defined(DRVPDN_CON0_SIM2))*/


#ifdef SIM_PDN_REG_VERSION_3
#define DRVPDN_CON1_SIM	CG_CON0_SIM
#else /*SIM_PDN_REG_VERSION_3*/
#define DRVPDN_CON1_SIM	CG_CON1_SIM
#endif /*SIM_PDN_REG_VERSION_3*/

#ifdef SIM_PDN_REG_VERSION_3
/*MT6516 E2 has SIM2 PDN bit on MD side, we have to access this bit*/
#define DRVPDN_CON0_SIM2	CG_CON0_SIM2
#else /*SIM_PDN_REG_VERSION_3*/
#define DRVPDN_CON0_SIM2	CG_CON0_SIM2
#endif /*SIM_PDN_REG_VERSION_3*/


#endif /*(defined(DRVPDN_CON1_SIM) || defined(DRVPDN_CON0_SIM2))*/
#endif /*__CLKG_DEFINE__*/

#define FILE_SWITCHCONTROL2 3

#define VERIFY_MT6306_REG 0
sim_MT6306_status sim_MT6306_blockCLK(sim_HW_cb *hw_cb);
sim_MT6306_status sim_MT6306_blockDAT(sim_HW_cb *hw_cb);
sim_MT6306_status sim_MT6306_passRST(sim_HW_cb *hw_cb);
sim_MT6306_status sim_MT6306_passDAT(sim_HW_cb *hw_cb);
sim_MT6306_status sim_MT6306_passCLK(sim_HW_cb *hw_cb);
sim_MT6306_status sim_MT6306_d2D(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_d2R(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_d2S(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_r2D(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_r2R(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_r2S(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_s2D(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_s2R(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
sim_MT6306_status sim_MT6306_s2S(sim_HW_cb *hw_cb, sim_MT6306_changeEvent	event);
void sim_MT6306_clkStopper(sim_HW_cb *hw_cb);
void sim_MT6306_clkStopTimerStop(sim_HW_cb *hw_cb);
void sim_MT6306_setCardState(sim_HW_cb *hw_cb, sim_MT6306_cardState cardState);

void sim_PDNDisable_MT6306(sim_HW_cb *hw_cb);
void sim_PDNEnable_MT6306(sim_HW_cb *hw_cb);
void sim_MT6306_deClkStopQueue(sim_HW_cb *hw_cb);
void sim_MT6306_enClkStopQueue(sim_HW_cb *hw_cb);
sim_HW_cb *retreiveQueuedCb(kal_uint32 i);
extern void SIM_HISR_MT6306(void);
extern void SIM_HISR2_MT6306(void);
extern void usim_hisr(void);
extern void usim_hisr2(void);
extern kal_uint32 SIM_GetCurrentTime(void);


sim_MT6306_cardInfo		sim_MT6306_card[DRV_SIM_MAX_LOGICAL_INTERFACE];

//sim_MT6306_msg			sim_MT6306_msgArray[SIM_MT6306_MSG_NUM];
//kal_uint32				sim_MT6306_msgIndex;

kal_bool spiWriterFlag;
kal_bool spiWriterGptTimeoutFlag = KAL_FALSE;

/*all global variables merge to following control blocks*/
sim_MT6306_switchInfo switchCBMT6306[SIM_MT6302_MAX_MT6302];
kal_uint8 queueIndex = 0;
sim_MT6306_clockStopQueueEvent clockStopQueue[DRV_SIM_MAX_LOGICAL_INTERFACE];
kal_char *mt6306StateStr[9] = {"D2D", "D2R", "D2S", "R2D", "R2R", "R2S", "S2D", "S2R", "S2S"};

#ifdef ATEST_DRV_ENABLE
#define MT6306_DBG( fmt, ...) 	// dbg_print(fmt, ##__VA_ARGS__)
#else
#if 0
/* under construction !*/
#else
#define MT6306_DBG( fmt, ...) \
	do{ 											\
		kal_sprintf(sim_dbg_str,fmt,##__VA_ARGS__); \
		dhl_print(TRACE_INFO, DHL_USER_FLAG_NONE, MOD_SIM_DRV, sim_dbg_str); \
	}while(0)
#endif
#endif

sim_MT6306_eventHandler	sim_MT6306_handlerTable[9] =
{
	sim_MT6306_d2D,
	sim_MT6306_d2R,
	sim_MT6306_d2S,
	sim_MT6306_r2D,
	sim_MT6306_r2R,
	sim_MT6306_r2S,
	sim_MT6306_s2D,
	sim_MT6306_s2R,
	sim_MT6306_s2S,
};

void usim_lisr_MT6306(void);
void usim_lisr2_MT6306(void);
void SIM_LISR_MT6306(void);
void SIM_LISR2_MT6306(void);
//extern kal_uint32 sim_waitHisrInterface, usim_waitHisrInterface;
//extern sim_HW_cb *usim_waitHisrCb_MT6306, *sim_waitHisrCb_MT6306; have moved to sim_MT6306_switchInfo
extern Sim_Card SimCard_cb[];
extern usim_dcb_struct usim_cb[];
extern kal_char sim_dbg_str[];
extern void L1sim_Enable_Enhanced_Speed(kal_bool enable, sim_HW_cb *hw_cb);

typedef struct
{
	kal_uint32      MT6306ChipNo; //for which MT6306 chip does this control block stand
	kal_semid       sim_MT6306_arb;
	kal_uint8       sim_MT6306_regValue[SIM_MT6306_REG_NUMBER];
	kal_uint8       sim_MT6306_internal_bypass_sem;   //WPLin 20110407 remove usage of MT6306_Writer_GPIO_Krl()
#ifdef MT6306_SEC_AVERAGE       //WPLin 20110505
	kal_uint8       sim_MT6306_prev_check_result[MT6306_SEC_AVERAGE_CHECK_NUM]; // [0] means oldest result
#else
	kal_uint8       sim_MT6306_prev_check_result;     //WPLin 20110407
#endif
} sim_MT63062_switchCB;
sim_MT63062_switchCB switch_CB_63062;

void sim_MT6306_SPIWrite(sim_MT6306_switchInfo *switch_CB, kal_uint16 data);
kal_uint8 sim_MT6306_SPIRead(sim_MT6306_switchInfo *switch_CB, kal_uint16 addr);

void sim_MT63062_TakeI2Csem(void)  //WPLin 20110407 separate functions from MT6306_I2C.c --> MT6306_security.c
{
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif


	DRV_GET_RET_ADDR(retAddr);

	sim_addMsg(0x11042002, 0, 0, (kal_uint32)retAddr);

	if(KAL_FALSE == kal_if_hisr() && KAL_FALSE == kal_query_systemInit())
		kal_take_sem(switch_CB_63062.sim_MT6306_arb, KAL_INFINITE_WAIT);
}

void sim_MT63062_GiveI2Csem(void)  //WPLin 20110407 separate functions from MT6306_I2C.c --> MT6306_security.c
{
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif


	DRV_GET_RET_ADDR(retAddr);
	sim_addMsg(0x11042003, 0, 0, (kal_uint32)retAddr);

	if(KAL_FALSE == kal_if_hisr() && KAL_FALSE == kal_query_systemInit())
		kal_give_sem(switch_CB_63062.sim_MT6306_arb);
}

void sim_MT6306_SPIWrite(sim_MT6306_switchInfo *switch_CB, kal_uint16 data);


/*following is MT6306 specific funcion, not originated from MT6302*/
/*since 4 card share the same register but MT6302 behave in two SIM cards, we have to globally record the value of this register*/
kal_uint16 sim_MT6306_CSTOPRegValue = 0x9F;
void sim_MT6306_SetCSTOP(sim_HW_cb *hw_cb)
{
	kal_uint32 chipNo, portNo;
	sim_MT6306_switchInfo *switch_CB;

	chipNo = hw_cb->simSwitchChipNo;
	portNo = hw_cb->simSwitchPortNo;
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	if(1 < chipNo || 1 < portNo)
		ASSERT(0);
	sim_MT6306_CSTOPRegValue |= (0x1 << (chipNo * 2 + portNo));
	sim_MT6306_SPIWrite(switch_CB, sim_MT6306_CSTOPRegValue);
}

void sim_MT6306_ClearCSTOP(sim_HW_cb *hw_cb)
{
	kal_uint32 chipNo, portNo;
	sim_MT6306_switchInfo *switch_CB;

	chipNo = hw_cb->simSwitchChipNo;
	portNo = hw_cb->simSwitchPortNo;
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	if(1 < chipNo || 1 < portNo)
		ASSERT(0);
	sim_MT6306_CSTOPRegValue &= ~(0x1 << (chipNo * 2 + portNo));
	sim_MT6306_SPIWrite(switch_CB, sim_MT6306_CSTOPRegValue);
}



void sim_MT6306_addMsg(kal_uint32 tag, kal_uint32 event, kal_uint32 data1, kal_uint32 data2)
{
	/*share the same meg array, reduce the RAM size*/
	sim_addMsg(tag,  event,  data1,  data2);
}

void sim_MT6306_checkCtrlPDN(sim_HW_cb *hw_cb)
{
	/*MT6306 may not connect to SIM1, be careful on this*/
#ifdef __OLD_PDN_ARCH__
	if(DRV_Reg(hw_cb->mtk_pdnAddr) & (hw_cb->mtk_pdnBit))
		sim_PDNDisable_MT6306(hw_cb);
#else
	/* We should make sure we disable PDN before access SIMIF */
	sim_PDNDisable_MT6306(hw_cb);
#endif
}

sim_MT6306_switchInfo *sim_MT6306_get_MT6306switchCB(sim_HW_cb *hw_cb)
{
	return &switchCBMT6306[hw_cb->simSwitchChipNo];
}

sim_MT6306_cardInfo *sim_MT6306_get_MT6306CardCB(sim_HW_cb *hw_cb)
{
	return &sim_MT6306_card[hw_cb->simInterface];
}


#ifdef	__DRV_2_SIM_USING_MT6306__

extern kal_uint8 MT6306_Reader_AL(kal_uint8 chipno, kal_uint16 addr);
void sim_MT6306_SPIWrite(sim_MT6306_switchInfo *switch_CB, kal_uint16 data)
{
	if(KAL_TRUE == kal_if_hisr() && KAL_TRUE == switch_CB->sim_MT6306_taskAccessing && KAL_FALSE == switch_CB->sim_workingTaskWaiting)
		ASSERT(0);
	//kal_uint32 t1=SIM_GetCurrentTime();
	//if(switch_CB->MT6306ChipNo==1)
	{
		//MT6306_DBG("[Race Protect] Chip:%d, now:%x, thread:%x",  switch_CB->MT6306ChipNo,t1,(kal_uint32)kal_get_current_thread_ID());
	}

	MT6306_RACE_PROTECT(sim_MT6306_protectionSpi);

	if(0x43 == data)
		ASSERT(0);

	sim_MT63062_TakeI2Csem();
	/* used to check if any context access Writer interface */
	if(spiWriterFlag == KAL_TRUE)
		ASSERT(0);

	spiWriterFlag = KAL_TRUE;
	switch_CB->sim_MT6320_writer(switch_CB->MT6306ChipNo, data); //MT6306_Writer_GPIO

#if VERIFY_MT6306_REG //Enable this to check if 6306 is ok
	kal_uint8 readValue = MT6306_Reader_AL(switch_CB->MT6306ChipNo, data >> 4);
	if((data & 0xF) != readValue)
	{
		kal_sprintf(sim_dbg_str, "[ERROR][%s] Chip:%d, Addr:%x, write:%x, readValue:%x", __func__, switch_CB->MT6306ChipNo, data >> 4, data & 0xF, readValue);
		DRV_ICC_print_str(sim_dbg_str);

		int i = 0;
		for(i = 0; i <= 0x13; i++)
		{
			kal_uint8 value = MT6306_Reader_AL(0, i);
			kal_sprintf(sim_dbg_str, "\r\nReg:%x:%x", i, value);
			DRV_ICC_print_str(sim_dbg_str);
		}
		ASSERT(0);
	}
#endif

	spiWriterFlag = KAL_FALSE;
	sim_MT63062_GiveI2Csem();

	MT6306_RACE_RELEASE(sim_MT6306_protectionSpi);

//	kal_uint32 t2=SIM_GetCurrentTime();
	//if(switch_CB->MT6306ChipNo==1)
	{
		//MT6306_DBG("[Race Release] Chip:%d, cost:%x, thread:%x",  switch_CB->MT6306ChipNo,t2-t1,(kal_uint32)kal_get_current_thread_ID());
	}
	sim_MT6306_addMsg(SIM_MT6306_SPI_WRITE, data, switch_CB->MT6306ChipNo, kal_if_hisr());
}
kal_uint8 sim_MT6306_SPIRead(sim_MT6306_switchInfo *switch_CB, kal_uint16 addr)
{
	kal_uint8 readValue;
	if(KAL_TRUE == kal_if_hisr() && KAL_TRUE == switch_CB->sim_MT6306_taskAccessing && KAL_FALSE == switch_CB->sim_workingTaskWaiting)
		ASSERT(0);
	MT6306_RACE_PROTECT(sim_MT6306_protectionSpi);
	sim_MT63062_TakeI2Csem();
	/* used to check if any context access Writer interface */
	if(spiWriterFlag == KAL_TRUE)
		ASSERT(0);
	spiWriterFlag = KAL_TRUE;
	readValue = MT6306_Reader_AL(switch_CB->MT6306ChipNo, addr);  //MT6306_Writer_GPIO
	spiWriterFlag = KAL_FALSE;
	sim_MT63062_GiveI2Csem();
	MT6306_RACE_RELEASE(sim_MT6306_protectionSpi);
	return readValue;
}
sim_MT6306_status sim_MT6306_setVCC(sim_HW_cb *hw_cb, kal_uint32 level)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d, level:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo, level);

	if(KAL_FALSE == switch_CB->sim_MT6306_taskAccessing)
		ASSERT(0);
	if(1 < level)
		ASSERT(0);
	if(0 == level) /*1.8V*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC] &= ~(0x1 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);
		/*clear VSEL bit*/
		card_cb->pins.VCC &= ~0x1;
	}
	else /*3V*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC] |= (0x1 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);
		/*set VSEL bit*/
		card_cb->pins.VCC |= 0x1;
	}
	sim_MT6306_addMsg(SIM_MT6306_VCC_LVL_CTRL, MT6306PortNo, level, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_switchVCC(sim_HW_cb *hw_cb, kal_uint32 on)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d, onoff:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo, on);

	if(KAL_FALSE == switch_CB->sim_MT6306_taskAccessing)
		ASSERT(0);
	if(1 < on)
		ASSERT(0);
	if(0 == on) /*turn off*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC] &= ~(0x4 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);

		/*in MT6306, if VCC is down, pin state have to change*/
		card_cb->pins.VCC &= ~0x4;
		if(sim_MT6306_VCC18VDisable != card_cb->pins.VCC && sim_MT6306_VCC3VDisable != card_cb->pins.VCC)
			ASSERT(0);
		card_cb->pins.CLK |= 0x10;
		card_cb->pins.DAT |= 0x10;
		card_cb->pins.RST |= 0x10;

		sim_MT6306_setCardState(hw_cb, sim_MT6306_stateDeactiavate);

	}
	else /*turn on*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC] |= (0x4 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);

		/*in MT6306, if VCC is down, pin state have to change*/
		card_cb->pins.VCC |= 0x4;
		if(sim_MT6306_VCC18V != card_cb->pins.VCC && sim_MT6306_VCC3V != card_cb->pins.VCC)
			ASSERT(0);
		card_cb->pins.CLK &= ~0x10;
		card_cb->pins.DAT &= ~0x10;
		card_cb->pins.RST &= ~0x10;

	}
	sim_MT6306_addMsg(SIM_MT6306_VCC_CTRL, MT6306PortNo, on, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);

	return sim_MT6306_statusNoError;
}

/*	this function pure set RSTVAL, that is, if we block RST, what level will RST stay
*	call this function doesn't change block or pass on RST
*/
sim_MT6306_status sim_MT6306_setRST(sim_HW_cb *hw_cb, kal_uint32 level)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	if(KAL_FALSE == switch_CB->sim_MT6306_taskAccessing)
		ASSERT(0);

	if(1 < level)
		ASSERT(0);
	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d,level:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo, level);
	if(0 == level) /*turn off*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] &= ~(0x4 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST]);
		card_cb->pins.RST &= ~0x4;
	}
	else /*set to high*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] |= 0x4 << MT6306PortNo;
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST]);
		card_cb->pins.RST |= 0x4;
	}
	sim_MT6306_addMsg(SIM_MT6306_RST_CTRL, MT6306PortNo, level, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST]);

	return sim_MT6306_statusNoError;
}

/*	this function pure set DATA_L, that is, if we block DAT, what level will DAT stay
*	call this function doesn't change block or pass on DAT
*/
sim_MT6306_status sim_MT6306_setDAT(sim_HW_cb *hw_cb, kal_uint32 level)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	if(KAL_FALSE == switch_CB->sim_MT6306_taskAccessing)
		ASSERT(0);
	if(1 < level)
		ASSERT(0);
	if(KAL_FALSE == switch_CB->sim_MT6306_needManualControl)
		ASSERT(0);
	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d, level:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo, level);
	if(0 == level) /*set to block low*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] |= (0x5 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);
		card_cb->pins.DAT |= 0x5;
	}
	else /*set to block high*/
	{
		switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] &= ~(0x5 << MT6306PortNo);
		sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);
		card_cb->pins.DAT &= ~0x5;
	}
	sim_MT6306_addMsg(SIM_MT6306_DAT_CTRL, MT6306PortNo, level, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);

	return sim_MT6306_statusNoError;
}

void sim_MT6306_manualReset(sim_HW_cb *hw_cb)
{
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	/*
		in design spec, we have to do following:
		(1)raise B's VCC, (2)pass B's CLK, (3)pass B's DAT, (4)set timeout, (5)raise B's RST to replace SIM controller's activation
	*/
	/*VCC has been raised in USIM/SIM driver, we don't need to control VCC here*/

	/*controller's clk must now running, that is why we implement manual reset*/
	if(DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & 0x2)
		ASSERT(0);

	/*after we pass B's clk, clk start running*/
	sim_MT6306_passCLK(hw_cb);

	sim_MT6306_passDAT(hw_cb);

	//DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK) |= SIM_IRQEN_TOUT;
	DRV_SetBits((SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK), SIM_IRQEN_TOUT);

	/*enable timeout, must guarantee a 0->1 change*/
	//DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK) &= ~SIM_CONF_TOUTEN;
	DRV_ClearBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);
	//DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK) |= SIM_CONF_TOUTEN;
	DRV_SetBits((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), SIM_CONF_TOUTEN);


	/*RX IRQ has been enabled*/

	/*RST should be low now*/
	//if(card_cb->pins.RST & 0x4)
	//	ASSERT(0);

	/*RST should be block now*/
	if((card_cb->pins.RST & 0x1) == 0)
		ASSERT(0);



	/*manual raise B's RST, not by controller*/
	sim_MT6306_setRST(hw_cb, 1);
}

void sim_MT6306_manualDeactive(sim_HW_cb *hw_cb)
{
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);

	/*
		(1)pull down B's RST, (2)stop clk low, (3)block DAT low (4)close the power
	*/

	/*RST should be block now*/
	if((card_cb->pins.RST & 0x1) == 0)
		ASSERT(0);

	sim_MT6306_setRST(hw_cb, 0);

	sim_MT6306_blockCLK(hw_cb);

	sim_MT6306_setDAT(hw_cb, 0);
	sim_MT6306_blockDAT(hw_cb);

	sim_MT6306_switchVCC(hw_cb, 0);
}
#endif

//#ifdef DRV_2_SIM_USING_LTC4558
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif


sim_MT6306_status sim_MT6306_retreiveDirectionBaud(sim_HW_cb *hw_cb)
{
	kal_uint16	temp_reg;
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);

	sim_MT6306_checkCtrlPDN(hw_cb);

	/*setting baud rate*/
	temp_reg = DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK);
	temp_reg &= SIM_BRR_CLKMSK;
	temp_reg |= (card_cb->baud << 2);
	//DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) = temp_reg;
	DRV_WriteReg((SIM0_BASE_ADDR_MTK + SIM_BRR_MTK), temp_reg);

	/*setting convention and T0, T1*/
	temp_reg = DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK);
	temp_reg &= ~SIM_MT6306_CONFMSK;
	temp_reg |= (card_cb->config & SIM_MT6306_CONFMSK);
	//DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK) = temp_reg;
#if defined (__SIM_ATRSTA_BIT_SHIFT__)
	DRV_WriteReg((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), temp_reg | SIM_CONF_RSTCTL);
#else
	DRV_WriteReg((SIM0_BASE_ADDR_MTK + SIM_CONF_MTK), temp_reg);
#endif
	sim_MT6306_addMsg(SIM_MT6306_RETREIVE_BAUD, hw_cb->simSwitchPortNo, DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK), DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK));

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_blockDAT(sim_HW_cb *hw_cb)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);


	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);
#if defined(__DRV_2_SIM_USING_MT6306__)
	switch(card_cb->pins.DAT)
	{
		case sim_MT6306_DATPass_High:
		case sim_MT6306_NoLDO_DATPass_High:
		{
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] & (0x1 << MT6306PortNo)) != (0x1 << MT6306PortNo))
				ASSERT(0);

			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] &= ~(0x1 << MT6306PortNo);
			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);

			card_cb->pins.DAT &= ~0x1;

			break;
		}
		case sim_MT6306_DATBlockedLow:
		case sim_MT6306_NoLDO_DATBlockedLow:
		{
			break;
		}
		case sim_MT6306_DATBlockedHigh_Low:
		case sim_MT6306_NoLDO_DATBlockedHigh_Low:
		{

			break;
		}
		case sim_MT6306_DATBlockedHigh:
		case sim_MT6306_NoLDO_DATBlockedHigh:
			break;
		default:
			ASSERT(0);
			break;
	}
#elif defined (DRV_2_SIM_USING_LTC4558)

	if(sim_MT6306_DATPass == card_cb->pins.DAT)
	{
		/*we do need to config the switch*/

		/*in LTC4558, we can only select one channel, can't control DAT line separately*/
		/*to block one channel's dat line, the only way is to select the other channel*/
		sim_LTC4558_select(1 - MT6302InterfaceNo);
		card_cb->pins.DAT = sim_MT6302_DATBlockedHigh;
		card_cb->pins.RST = sim_MT6302_RSTBlockedHigh;

		/*the other interface's state is also changed*/
		card_cb->pins.DAT = sim_MT6302_DATPass;
		card_cb->pins.RST = sim_MT6302_RSTPass;


	}
	else if(sim_MT6306_DATBlockedLow == card_cb->pins.DAT)
	{
		/*by "block DAT", we mean let switch pull high DAT line. If DAT is low currently, must change its value*/
		IMPLEMENTING_ASSERT;
	}
#endif
	sim_MT6306_addMsg(SIM_MT6306_BLOCK_DAT, MT6306PortNo, card_cb->pins.DAT, card_cb->pins.DAT);

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_blockRST(sim_HW_cb *hw_cb)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);
#if defined(__DRV_2_SIM_USING_MT6306__)
	switch(card_cb->pins.RST)
	{
		case sim_MT6306_RSTPass_High:
		case sim_MT6306_RSTPass_Low:
		case sim_MT6306_NoLDO_RSTPass_High:
		case sim_MT6306_NoLDO_RSTPass_Low:
		{
			if(switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] & (0x1 << MT6306PortNo))
				ASSERT(0);
			/*to block RST, we only need to set 1<<interface*/
			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] |= (0x1 << MT6306PortNo);
			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST]);

			card_cb->pins.RST |= 0x1;
			break;
		}
		case sim_MT6306_RSTBlockedHigh:
		case sim_MT6306_RSTBlockedLow:
		case sim_MT6306_NoLDO_RSTBlockedHigh:
		case sim_MT6306_NoLDO_RSTBlockedLow:
			break;
		default :
			ASSERT(0);
	}
#elif defined (DRV_2_SIM_USING_LTC4558)
	if(sim_MT6306_RSTPass == card_cb->pins.RST)
	{
		/*we do need to config the switch*/

		/*in LTC4558, we can only select one channel, can't control RST line separately*/
		/*to block one channel's RST line, the only way is to select the other channel*/
		sim_LTC4558_select(1 - MT6302InterfaceNo);

		/*state of this interface has been changed*/
		card_cb->pins.DAT = sim_MT6302_DATBlockedHigh;
		card_cb->pins.RST = sim_MT6302_RSTBlockedHigh;

		/*the other interface's state is also changed*/
		sim_MT6306_card[1 - MT6302Interface].pins.DAT = sim_MT6306_DATPass;
		sim_MT6306_card[1 - MT6302Interface].pins.RST = sim_MT6306_RSTPass;
	}
#endif
	sim_MT6306_addMsg(SIM_MT6306_BLOCK_RST, MT6306PortNo, sim_MT6306_card[hw_cb->simInterface].pins.RST, sim_MT6306_card[hw_cb->simInterface].pins.RST);

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_passDAT(sim_HW_cb *hw_cb)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);

#if defined(__DRV_2_SIM_USING_MT6306__)
	switch(card_cb->pins.DAT)
	{
		case sim_MT6306_DATBlockedHigh:/*b000*/
		case sim_MT6306_NoLDO_DATBlockedHigh:/*b000*/
		{
			if(switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] & (0x1 << MT6306PortNo))
				ASSERT(0);

			/*b00 -> b01*/
			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] |= (0x1 << MT6306PortNo);
			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);

			card_cb->pins.DAT |= 0x1;
			break;
		}
		case sim_MT6306_DATBlockedLow:/*b101*/
		case sim_MT6306_NoLDO_DATBlockedLow:/*b101*/
		{
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] & (0x5 << MT6306PortNo)) != (0x5 << MT6306PortNo))
				ASSERT(0);

			/*b101->b001*/
			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] &= ~(0x4 << MT6306PortNo);
			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);

			card_cb->pins.DAT &= ~0x4;
			break;
		}
		case sim_MT6306_DATBlockedHigh_Low:
		case sim_MT6306_NoLDO_DATBlockedHigh_Low:
		{
			IMPLEMENTING_ASSERT;
		}
		case sim_MT6306_DATPass_High:
		case sim_MT6306_NoLDO_DATPass_High:
			break;
		default:
			ASSERT(0);
	}
#elif defined (DRV_2_SIM_USING_LTC4558)
	if(sim_MT6306_DATBlockedHigh == card_cb->pins.DAT)
	{
		/*we do need to config the switch*/
		/*in LTC4558, we can only select one channel, can't control DAT line separately*/
		/*to pass one channel's dat line, the only way is to select this channel*/
		sim_LTC4558_select(simInterface);
		card_cb->pins.DAT = sim_MT6306_DATPass;
		card_cb->pins.RST = sim_MT6306_RSTPass;

		/*the other interface's state is also changed*/
		sim_MT6306_card[1 - simInterface].pins.DAT = sim_MT6306_DATBlockedHigh;
		sim_MT6306_card[1 - simInterface].pins.RST = sim_MT6306_RSTBlockedHigh;
	}
	else if(sim_MT6306_DATBlockedLow == card_cb->pins.DAT)
	{
		/*it's impossible for LTC4558 to be in this state*/
		IMPLEMENTING_ASSERT;
	}
#endif
	sim_MT6306_addMsg(SIM_MT6306_PASS_DAT, hw_cb->simInterface, sim_MT6306_card[hw_cb->simInterface].pins.DAT, sim_MT6306_card[hw_cb->simInterface].pins.DAT);
	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_passRST(sim_HW_cb *hw_cb)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);


	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);

#if defined(__DRV_2_SIM_USING_MT6306__)
	switch(card_cb->pins.RST)
	{
		case sim_MT6306_RSTBlockedHigh:
		case sim_MT6306_RSTBlockedLow:
		case sim_MT6306_NoLDO_RSTBlockedHigh:
		case sim_MT6306_NoLDO_RSTBlockedLow:
		{
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] & (0x1 << MT6306PortNo)) != (0x1 << MT6306PortNo))
				ASSERT(0);

			/*to pass RST, we only need to clear 1<<interface*/
			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] &= ~(0x1 << MT6306PortNo);
			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST]);

			card_cb->pins.RST &= ~0x1;

			break;
		}
		case sim_MT6306_RSTPass_High:
		case sim_MT6306_RSTPass_Low:
		case sim_MT6306_NoLDO_RSTPass_High:
		case sim_MT6306_NoLDO_RSTPass_Low:
			break;
		default:
			ASSERT(0);
	}
#elif defined (DRV_2_SIM_USING_LTC4558)
	if(sim_MT6306_RSTBlockedHigh == card_cb->pins.RST || sim_MT6306_RSTBlockedLow == card_cb->pins.RST)
	{
		/*in LTC4558, we can only select one channel, can't control RST line separately*/
		/*to pass one channel's RST line, the only way is to select this channel*/
		sim_LTC4558_select(simInterface);
		card_cb->pins.DAT = sim_MT6306_DATPass;
		card_cb->pins.RST = sim_MT6306_RSTPass;

		/*the other interface's state is also changed*/
		sim_MT6306_card[1 - simInterface].pins.DAT = sim_MT6306_DATBlockedHigh;
		sim_MT6306_card[1 - simInterface].pins.RST = sim_MT6306_RSTBlockedHigh;
	}
#endif
	sim_MT6306_addMsg(SIM_MT6306_PASS_RST, MT6306PortNo, sim_MT6306_card[hw_cb->simInterface].pins.RST, sim_MT6306_card[hw_cb->simInterface].pins.RST);

	return sim_MT6306_statusNoError;
}


sim_MT6306_status sim_MT6306_passCLK(sim_HW_cb *hw_cb)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);

#if defined(__DRV_2_SIM_USING_MT6306__)
	switch(card_cb->pins.CLK)
	{
		case sim_MT6306_CLKBlockedHigh:
		case sim_MT6306_NoLDO_CLKBlockedHigh:
		{
			/*should be 0x5<<interface, others assert*/
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] & (0x5 << MT6306PortNo)) != (0x5 << MT6306PortNo))
				ASSERT(0);
			/*original is 0x5<<interface, now change to 0x1<<interface, mask 0x4<<interface*/
			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] &= ~(0x4 << MT6306PortNo);

			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK]);
			card_cb->pins.CLK &= 0xf0;// we must preserve the information of LDO state
			card_cb->pins.CLK |= sim_MT6306_CLKPass;
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] & (0x5 << MT6306PortNo)) != (0x1 << MT6306PortNo))
				ASSERT(0);
			break;
		}
		case sim_MT6306_CLKBlockedLow:
		case sim_MT6306_NoLDO_CLKBlockedLow:
		{
			/*should be 0x0<<interface, others assert*/
			if(switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] & (0x5 << MT6306PortNo))
				ASSERT(0);
			/*original is 0x0<<interface, now change to 0x1<<interface, set 0x1<<interface*/
			switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] |= (0x1 << MT6306PortNo);

			sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK]);
			card_cb->pins.CLK &= 0xf0;// we must preserve the information of LDO state
			card_cb->pins.CLK |= sim_MT6306_CLKPass;
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] & (0x5 << MT6306PortNo)) != (0x1 << MT6306PortNo))
				ASSERT(0);
			break;
		}
		case sim_MT6306_CLKPass:
		case sim_MT6306_NoLDO_CLKPass:
			break;
		case sim_MT6306_CLKInvalidState:
		case sim_MT6306_NoLDO_CLKInvalidState:
			ASSERT(0);
		default:
			ASSERT(0);
	}

#elif defined (DRV_2_SIM_USING_LTC4558)
	if(sim_MT6306_CLKBlockedHigh == card_cb->pins.CLK)
	{
		/*it's impossible for LTC4558 to be in this state*/
		IMPLEMENTING_ASSERT;
	}
	else if(sim_MT6306_CLKBlockedLow == card_cb->pins.CLK)
	{
		/*to pass CLK to interface not selected, must use CLKRUN to pass the Clk*/
		/*we don't select interface here, since if we do need to select interface, it can be done when pass other signals*/

		sim_LTC4558_CLKCtrl(MT6306Interface, 1);
		/*state of this interface has been changed*/
		card_cb->pins.CLK = sim_MT6306_CLKPass;
	}
	else
		ASSERT(0);
#endif

	sim_MT6306_ClearCSTOP(hw_cb);

	/*if SIM controller is now clk running, from card's viewpoint, its clk is now starting*/
	if((DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_HALT) == 0x0)
	{
		switch_CB->sim_MT6306_needCLKStartTimeout = KAL_TRUE;
	}
	sim_MT6306_addMsg(SIM_MT6306_PASS_CLK, hw_cb->simInterface, sim_MT6306_card[hw_cb->simInterface].pins.CLK, sim_MT6306_card[hw_cb->simInterface].pins.CLK);
	return sim_MT6306_statusNoError;
}
kal_bool MT6306_ShowReg(int chip)
{
	int i = 0;
	kal_uint8 readValue = 0;
	for(i = 0; i < 4; i++)
	{
		readValue = MT6306_Reader_AL(0, i + (chip * 4));
		//MT6306_DBG("\r\naddr:%x, readValue:%x", i + (chip * 4), readValue);
	}
	readValue = MT6306_Reader_AL(0, 0x08);
	//MT6306_DBG("\r\naddr:%x, readValue:%x", 0x08, readValue);
	readValue = readValue;
	return KAL_TRUE;

}
sim_MT6306_status sim_MT6306_blockCLK(sim_HW_cb *hw_cb)
{
	Sim_Card *simCard;
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;
	usim_dcb_struct *usim_dcb;
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif

	DRV_GET_RET_ADDR(retAddr);

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	simCard = GET_SIM_CB(hw_cb->simInterface);
	usim_dcb = GET_USIM_CB(hw_cb->simInterface);
	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);
	sim_MT6306_addMsg(SIM_MT6306_BLOCK_CLK_BEGIN, hw_cb->simInterface, (kal_uint32)retAddr, sim_MT6306_card[1].pins.CLK);

#if defined(__DRV_2_SIM_USING_MT6306__)
	switch(card_cb->pins.CLK)
	{
		case sim_MT6306_CLKPass:
		case sim_MT6306_NoLDO_CLKPass:
		{
			/*should be 0x1<<interface, others assert*/
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] & (0x5 << MT6306PortNo)) != (0x1 << MT6306PortNo))
				ASSERT(0);

			/*if clock stop is not enable and not manual control, there is something wrong*/
			if(!simCard->clkStop && !usim_dcb->clock_stop_en)  /*both states in sim and usim are not enabled*/
			{
				/*we must allow clkstop when we doing manual control, manul control is the back door to clk control*/
				/*for case that SIM1 PTS failed and deactive, we wato block signal and do SIM2 command, this case should be allowed*/
				if(KAL_FALSE == switch_CB->sim_MT6306_needManualControl && sim_MT6306_stateClkRunning == card_cb->state)
				{
					ASSERT(0);
				}
				else
				{
					/*when we block clk in manual control, we just want to block it low*/
					switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] &= ~(0x1 << MT6306PortNo);
					sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK]);
					card_cb->pins.CLK &= 0xf0;//preserve LDO state
					card_cb->pins.CLK |= sim_MT6306_CLKBlockedLow;
				}
			}

			if(simCard->clkStopLevel || CLOCK_STOP_HIGH == usim_dcb->clock_stop_type)
			{
				/*original is 0x1<<interface, now change to 0x5<<interface, set 0x5<<interface*/
				switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] |= (0x5 << MT6306PortNo);
				sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK]);
				card_cb->pins.CLK &= 0xf0;//preserve LDO state
				card_cb->pins.CLK |= sim_MT6306_CLKBlockedHigh;
			}
			else
			{
				/*original is 0x1<<interface, now change to 0x0<<interface, mask 0x1<<interface*/
				switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] &= ~(0x1 << MT6306PortNo);
				sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK]);
				card_cb->pins.CLK &= 0xf0;//preserve LDO state
				card_cb->pins.CLK |= sim_MT6306_CLKBlockedLow;
			}
			if((switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] & (0x5 << MT6306PortNo)) == (0x1 << MT6306PortNo))
				ASSERT(0);

			break;
		}
		case sim_MT6306_CLKBlockedHigh:
		case sim_MT6306_CLKBlockedLow:
		case sim_MT6306_NoLDO_CLKBlockedHigh:
		case sim_MT6306_NoLDO_CLKBlockedLow:
			break;
		case sim_MT6306_CLKInvalidState:
		case sim_MT6306_NoLDO_CLKInvalidState:
			ASSERT(0);
		default:
			ASSERT(0);
	}
#elif defined (DRV_2_SIM_USING_LTC4558)
	/*need to stop the clock according to its clk stop level*/
	if(sim_MT6306_CLKPass == card_cb->pins.CLK)
	{

		/*in LTC4558, if we want to stop interface's clock, we must select other interface then block the clock*/
		sim_LTC4558_select(1 - simInterface);

		/*we don't de-select interface here, since if we do need to de-select interface, it can be done when block other signals*/
		sim_LTC4558_CLKCtrl(simInterface, 0);
		card_cb->pins.CLK = sim_MT6306_CLKBlockedLow;
	}
#endif

	sim_MT6306_SetCSTOP(hw_cb);

	sim_MT6306_addMsg(SIM_MT6306_BLOCK_CLK, hw_cb->simInterface, sim_MT6306_card[hw_cb->simInterface].pins.CLK, sim_MT6306_card[hw_cb->simInterface].pins.CLK);

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_blockAllSignal(sim_HW_cb *hw_cb)
{
	kal_uint32 MT6306PortNo;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	MT6306PortNo = hw_cb->simSwitchPortNo;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	/*handle DAT*/
	sim_MT6306_blockDAT(hw_cb);


	MT6306_DBG("[%s]: Interface:%d, Switch:%d, Port:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo, MT6306PortNo);

	/*handle RST*/
#ifdef __DRV_2_SIM_USING_MT6306__
	/*set RST to suitable level if not yet config*/
	if(sim_MT6306_cardTypeAL == card_cb->type && !(switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] & (0x4 << MT6306PortNo)))
	{
		sim_MT6306_setRST(hw_cb, 1);
	}
	else if(sim_MT6306_cardTypeIR == card_cb->type && (switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] & (0x4 << MT6306PortNo)))
	{
		sim_MT6306_setRST(hw_cb, 0);
	}
#endif

	sim_MT6306_blockRST(hw_cb);

	/*handle CLK*/
#ifdef __DRV_2_SIM_USING_MT6306__
	if((card_cb->pins.CLK & 0x10) != 0x10) /*in MT6306, if VCC ldo is not enable, the CLK is always down*/
#endif
		sim_MT6306_blockCLK(hw_cb);

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_activateSIMCtrl(sim_HW_cb *hw_cb)
{

	sim_MT6306_checkCtrlPDN(hw_cb);

	/*set controller to activate*/
	DRV_WriteReg((SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK), 0x0001);

	sim_MT6306_addMsg(SIM_MT6306_ACT_SIM_CTRL, 0, 0, 0);

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_deactivateSIMCtrl(sim_HW_cb *hw_cb)
{

	sim_MT6306_checkCtrlPDN(hw_cb);

	//DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) = 0;
	DRV_WriteReg((SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK), 0);

	/*we must wait SIM controller deactive down*/
#ifdef __MAUI_BASIC__
	//GPTI_BusyWait(40);
	ASSERT(0);
#else
	kal_sleep_task(10);
#endif

	sim_MT6306_addMsg(SIM_MT6306_DEACT_SIM_CTRL, DRV_Reg(0x80000304), 0, DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK));

	return sim_MT6306_statusNoError;
}

sim_MT6306_status sim_MT6306_recordDirectionBaud(sim_HW_cb *hw_cb)
{
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	/*record convention*/
	card_cb->config = DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CONF_MTK);

	/*record baud rare*/
	card_cb->baud = DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_BRR_MTK) >> 2;

	return sim_MT6306_statusNoError;
}


sim_MT6306_status sim_MT6306_passAllSignal(sim_HW_cb *hw_cb)
{
	sim_MT6306_cardInfo	*card_cb;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);

	/*handle DAT*/
	sim_MT6306_passDAT(hw_cb);

#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
	/*handle RST*/
	sim_MT6306_passRST(hw_cb);
#endif
	/*handle CLK*/
	if(sim_MT6306_CLKPass != card_cb->pins.CLK)
		sim_MT6306_passCLK(hw_cb);

	/*handle convention & baud rate*/
	//sim_MT6306_retreiveDirectionBaud(simInterface);
	return sim_MT6306_statusNoError;
}



/*
*	deactivated to deactivated handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_d2D(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	sim_MT6306_addMsg(SIM_MT6306_D2D, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	if(sim_MT6306_eventReset != event)
		ASSERT(0);
	if(0 == hw_cb->simSwitchPeerInterfaceCb)
		ASSERT(0);
	/*make sure block all signals*/
	sim_MT6306_blockAllSignal(hw_cb->simSwitchPeerInterfaceCb);

	sim_MT6306_passAllSignal(hw_cb);

	return sim_MT6306_statusNoError;
}

/*
*	deactivated to clock running handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_d2R(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	Sim_Card *SimCard;
	sim_MT6306_switchInfo *switch_CB;

	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	sim_MT6306_addMsg(SIM_MT6306_D2R, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	/*we can only accept this case if B can't stop clock, check it*/
	SimCard = GET_SIM_CB(hw_cb->simInterface);
	/* MAUI_03018847
	   1. sim card support clock stop, if clock stop successfully, it should not enter this state
	   2. sim card start clock stop timer
	   3. sim card has been reset, and clock stop timer is stopped
	   4. enter this wrong state
	   5. add SimCard->clkstoping for checking. It is impossible clock is stopping and entering d2R state */
	if((KAL_FALSE != SimCard->clkStop) &&
	        (SimCard->clkstoping == KAL_TRUE))
	{
		ASSERT(0);
	}
	else /*now that B can't stop clok, we must check that SIM controller must clk running now*/
	{
		if(DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) != 0x1)
			ASSERT(0);
	}

	sim_MT6306_blockAllSignal(hw_cb->simSwitchPeerInterfaceCb);

	/*not like D2S scenario, in D2R, controller is still clk running, we don't need to activate controller*/

	/*no matter what event we want to do, DAT should pass*/
	sim_MT6306_passDAT(hw_cb);

	if(sim_MT6306_eventCommand != event)
	{
#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
		sim_MT6306_passRST(hw_cb);
#endif
	}

	switch_CB->sim_waitHisrCb_MT6306 = hw_cb;
	switch_CB->usim_waitHisrCb_MT6306 = hw_cb;

	return sim_MT6306_statusNoError;
}

/*
*	deactivated to clock Stopped handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_d2S(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	sim_MT6306_cardInfo	*card_cb;
	sim_MT6306_switchInfo *switch_CB;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	//Sim_Card *SimCard;

	//SimCard = GET_SIM_CB(simInterface);
	sim_MT6306_addMsg(SIM_MT6306_D2S, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	/*make sure block all signals of both cards then activate sim controller*/
#if defined(__DRV_2_SIM_USING_MT6306__)
	sim_MT6306_blockAllSignal(hw_cb->simSwitchPeerInterfaceCb);
#elif defined (DRV_2_SIM_USING_LTC4558)
	/*	in LTC4558, we can only make switch to stay in one interface, of course can't stay in the interface we want to keep alive
	*	We stay in original deactivate interface, and close its power, then activate SIM controller
	*/

#else
	IMPLEMENTING_ASSERT;
#endif
	sim_MT6306_blockAllSignal(hw_cb);
	kal_uint32 tmpsts = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
	SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, tmpsts);


	//Enable PMIC
#if !defined(__DRV_SIM_SIMIF_CONTROL_VSIM__)
	if(SIM_base == hw_cb->mtk_baseAddr)
	{
		DRV_ICC_PMU_switch(0, KAL_TRUE);
	}
	else
	{
		DRV_ICC_PMU_switch(1, KAL_TRUE);
	}
#endif
	/*activate SIM controller*/
	sim_MT6306_activateSIMCtrl(hw_cb);

	/*must polling until activation done before changing to another interface, this is a bad method, just for experiment.
	maybe design a small HISR and hook dynamically then wait event is better*/
	//if(((*(kal_uint16 *)0x80140070) & 0x180) == 0);
	//kal_sleep_task(30000);

	//SIM_DisAllIntr(simInterface);
	//DRV_WriteReg(SIM0_BASE_ADDR_MTK + SIM_IRQEN_MTK, SIM_IRQEN_NATR);
	//while(DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK) != SIM_STS_NATR);

	/*polling until SIM controller stay in state 8*/
#if defined (__SIM_ATRSTA_BIT_SHIFT__)
	while(DRV_Reg(SIM0_BASE_ADDR_MTK + 0x0070) != 0x200)
#else
	while((DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_ATRSTA_MTK) & (SIM_ATRSTA_IR | SIM_ATRSTA_AL)) == 0)
		//while(1)
#endif
	{
		kal_sleep_task(2);
	}


	SIM_SetRXRetry(7);
	SIM_SetTXRetry(7);

	//SIM_WaitEvent(SimCard, ACTIVATE_DONE);

	/*we will connect B's signals, must take care of which type card B is, IR or AL*/
	if(sim_MT6306_cardTypeIR == card_cb->type)
	{
		/*since wr want to do reset or power off, it should not matter even RST park at high for a while, just record the event*/
#ifdef __OLD_PDN_ARCH__
		//	drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
		//	event, sim_MT6306_card[hw_cb->MT6306Interface].type, DRV_Reg(DRVPDN_CON1), switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] ,
		//switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] , switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]
		//);
#else
#endif
	}
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	sim_MT6306_passAllSignal(hw_cb);

	switch_CB->sim_waitHisrCb_MT6306 = hw_cb;
	switch_CB->usim_waitHisrCb_MT6306 = hw_cb;
	
	tmpsts = SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK);
	SIM_WriteReg(SIM0_BASE_ADDR_MTK + SIM_STS_MTK, tmpsts);
	
	return sim_MT6306_statusNoError;
}

/*
*	clock running to deactivated handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_r2D(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	Sim_Card	*peerSimCard;
	sim_HW_cb 	*peerHWCb;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	card_cb = card_cb;
	sim_MT6306_addMsg(SIM_MT6306_R2D, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	if(sim_MT6306_eventReset != event)
		ASSERT(0);

	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerSimCard = GET_SIM_CB(peerHWCb->simInterface);
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);
	if(KAL_FALSE == peerSimCard->clkStop)
	{
#if defined(__DRV_2_SIM_USING_MT6306__)
		/*non-clkStop card, need special action*/
		/*block A's DAT*/
		sim_MT6306_blockDAT(peerHWCb);

		/*in most case, we block RST to high, pull it low now*/
		sim_MT6306_setRST(hw_cb, 0);

		/*
			in design spec, we have to do following:
			(1)raise B's VCC, (2)pass B's CLK, (3)pass B's DAT, (4)set timeout, (5)raise B's RST to replace SIM controller's activation
			we do nothing but set a flag here, usim_activation and SIM_initialize will check this flag then call our API to activate.
		*/
		switch_CB->sim_MT6306_needManualControl = KAL_TRUE;

		return sim_MT6306_statusNoError;
#elif defined (DRV_2_SIM_USING_LTC4558)
		IMPLEMENTING_ASSERT;
#else
		IMPLEMENTING_ASSERT;
#endif
	}

	/*since we will block A's siganl, this means to stop its clk, must take care whether A's clk-stop timer expire or not*/
#ifdef __MAUI_BASIC__
	//GPTI_BusyWait(20);
	ASSERT(0);
#else
	kal_sleep_task(5);
#endif

	/*stop all signal of A*/
	sim_MT6306_blockAllSignal(hw_cb->simSwitchPeerInterfaceCb);

#ifdef __DRV_2_SIM_USING_MT6306__
	if(sim_MT6306_stateClkRunning == peerCard_cb->state)
		sim_MT6306_setCardState(peerHWCb, sim_MT6306_stateClkStopped);
#endif

#ifdef DRV_2_SIM_USING_LTC4558
	/*following code should be wrong and should be the same as MT6306's case, but LTC4558 has finished its UT, I don't want to modify this part in case this was intended to do*/
	if(sim_MT6306_stateClkRunning == peerCard_cb->state)
		sim_MT6306_setCardState(hw_cb, sim_MT6306_stateClkStopped);
#endif

	/*in design spec, we assume controller is in IR or LA state, make sure controller is not in deactivation state*/

#ifdef __DRV_2_SIM_USING_MT6306__ /*in LTC4558, if we select B, then A's signal will connected*/
	/*block B's signal*/
	sim_MT6306_blockAllSignal(hw_cb);
#endif

	/*deactivate SIM controller to stand the same position with B*/
	sim_MT6306_deactivateSIMCtrl(hw_cb);

	/*connect all signal to B*/
	sim_MT6306_passAllSignal(hw_cb);

	return sim_MT6306_statusNoError;
}

/*
*	clock running to clock running handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_r2R(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	Sim_Card *SimCard;
	sim_HW_cb *peerHWCb;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;
	sim_MT6306_switchInfo *switch_CB;

	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);

	sim_MT6306_addMsg(SIM_MT6306_R2R, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);
	if(sim_MT6306_CLKPass != sim_MT6306_card[hw_cb->simInterface].pins.CLK || sim_MT6306_CLKPass != sim_MT6306_card[peerHWCb->simInterface].pins.CLK)
		ASSERT(0);

	if(sim_MT6306_eventCommand == event)
	{
		sim_MT6306_blockDAT(peerHWCb);
		sim_MT6306_passDAT(hw_cb);

#ifdef DRV_2_SIM_USING_LTC4558
		card_cb->pins.CLK = sim_MT6306_CLKPass;
#endif
		/* [MAUI_03053369][1] Assert Fail: icc_switchControl2_mt6306.c 1502 -SIM*/
		/*
			we may encounter send command and cmd timeout. In this case, we should manual deactivate card
		*/
		switch_CB->sim_MT6306_needManualControl = KAL_TRUE;

	}
	else/*reset or power off*/
	{
		SimCard = GET_SIM_CB(peerHWCb->simInterface);
		if(KAL_FALSE == SimCard->clkStop)
		{
#if defined(__DRV_2_SIM_USING_MT6306__)
			/*non-clkStop card, need special action*/
			/*block A's DAT*/
			sim_MT6306_blockDAT(peerHWCb);

			/*in most case, we block RST to high, pull it low now*/
			sim_MT6306_setRST(hw_cb, 0);

			/*
				in design spec, we have to do following:
				(1)raise B's VCC, (2)pass B's CLK, (3)pass B's DAT, (4)set timeout, (5)raise B's RST to replace SIM controller's activation
				we do nothing but set a flag here, usim_activation and SIM_initialize will check this flag then call our API to activate.
			*/
			switch_CB->sim_MT6306_needManualControl = KAL_TRUE;

			return sim_MT6306_statusNoError;
#elif defined (DRV_2_SIM_USING_LTC4558)
			IMPLEMENTING_ASSERT;
#else
			IMPLEMENTING_ASSERT;
#endif

		}
		else
		{
			/*since we will block A's siganl, this means to stop its clk, must take care whether A's clk-stop timer expire or not*/
#ifdef __MAUI_BASIC__
			//GPTI_BusyWait(20);
			ASSERT(0);
#else
			kal_sleep_task(5);
#endif

			/*block all A's signal*/
			sim_MT6306_blockAllSignal(peerHWCb);

#ifdef __DRV_2_SIM_USING_MT6306__
			if(sim_MT6306_stateClkRunning == peerCard_cb->state)
				sim_MT6306_setCardState(peerHWCb, sim_MT6306_stateClkStopped);
#endif


#ifdef __DRV_2_SIM_USING_MT6306__
			if(sim_MT6306_cardTypeIR == card_cb->type)
			{
				/*keep B's RST low, should to consider if we want to reset after deactivating, when to connect RST signal*/
				/*if want to do power off, keep low is fine, if want to do reset, IR card need not RST to pull high*/
				sim_MT6306_setRST(hw_cb, 0);
				sim_MT6306_blockRST(hw_cb);
#ifdef __OLD_PDN_ARCH__
//				drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
//					event, card_cb->type, DRV_Reg(DRVPDN_CON1), switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] ,
//					switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] , switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]
//				);
#else
#endif
			}
			else
			{
#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
				sim_MT6306_passRST(hw_cb);
#endif
			}
#endif

			/*CLK is connected, just need to pass DAT*/
			sim_MT6306_passDAT(hw_cb);
		}
	}

	return sim_MT6306_statusNoError;
}

/*
*	clock running to clock stopped handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_r2S(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	Sim_Card *SimCard;
	sim_HW_cb *peerHWCb;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	sim_MT6306_addMsg(SIM_MT6306_R2S, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);

	if(sim_MT6306_eventCommand == event)
	{
		sim_MT6306_blockDAT(peerHWCb);
		sim_MT6306_passCLK(hw_cb);
		sim_MT6306_passDAT(hw_cb);
		/* [MAUI_03053369][1] Assert Fail: icc_switchControl2_mt6306.c 1502 -SIM*/
		/*
			we may encounter send command and cmd timeout. In this case, we should manual deactivate card
		*/
		switch_CB->sim_MT6306_needManualControl = KAL_TRUE;

	}
	else/*reset or power off*/
	{
		SimCard = GET_SIM_CB(peerHWCb->simInterface);
		if(KAL_FALSE == SimCard->clkStop)
		{
#if defined(__DRV_2_SIM_USING_MT6306__)
			/*non-clkStop card, need special action*/
			/*block A's DAT*/
			sim_MT6306_blockDAT(peerHWCb);

			/*in most case, we block RST to high, pull it low now*/
			sim_MT6306_setRST(hw_cb, 0);

			/*
				in design spec, we have to do following:
				(1)raise B's VCC, (2)pass B's CLK, (3)pass B's DAT, (4)set timeout, (5)raise B's RST to replace SIM controller's activation
				we do nothing but set a flag here, usim_activation and SIM_initialize will check this flag then call our API to activate.
			*/
			switch_CB->sim_MT6306_needManualControl = KAL_TRUE;

			return sim_MT6306_statusNoError;
#elif defined (DRV_2_SIM_USING_LTC4558)
			IMPLEMENTING_ASSERT;
#else
			IMPLEMENTING_ASSERT;
#endif

		}
		else
		{
			/*block all A's signal*/
			/*Be careful!!!, if we block A's clock now, it means we stop A's clock, need to consider the 1860 clk, about 1ms*/
			kal_sleep_task(2);
			sim_MT6306_blockAllSignal(peerHWCb);
			if(sim_MT6306_stateClkRunning == peerCard_cb->state)
				sim_MT6306_setCardState(peerHWCb, sim_MT6306_stateClkStopped);

#ifdef __DRV_2_SIM_USING_MT6306__
			if(sim_MT6306_cardTypeIR == card_cb->type)
			{
				/*keep B's RST low, should to consider if we want to reset after deactivating, when to connect RST signal*/
				/*if want to do power off, keep low is fine, if want to do reset, IR card need not RST to pull high*/
				sim_MT6306_setRST(hw_cb, 0);
				sim_MT6306_blockRST(hw_cb);
#ifdef __OLD_PDN_ARCH__
//				drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
//					event, card_cb->type, DRV_Reg(DRVPDN_CON1), switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] ,
//					switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] , switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]
//				);
#else
#endif
			}
			else
			{
#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
				/*pass B's RST*/
				sim_MT6306_passRST(hw_cb);
#endif
			}

			/*pass B's clk*/
			sim_MT6306_passCLK(hw_cb);
#endif

#ifdef DRV_2_SIM_USING_LTC4558
			/*in LTC4558, when we block A's signal, we connect B's signal, though controller's CLK maybe stopped*/
			card_cb->pins.CLK = sim_MT6306_CLKPass;
#endif
			/*CLK is connected, just need to pass DAT*/
			sim_MT6306_passDAT(hw_cb);
		}
	}

	return sim_MT6306_statusNoError;
}

/*
*	clock stopped to deactivated handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_s2D(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	Sim_Card *SimCard;
	sim_HW_cb *peerHWCb;

	sim_MT6306_addMsg(SIM_MT6306_S2D, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;


	if(sim_MT6306_eventReset != event)
		ASSERT(0);

	SimCard = GET_SIM_CB(peerHWCb->simInterface);

	/*If A's clkstop is false, we can never stop A's clk*/
	if(KAL_FALSE == SimCard->clkStop)
	{
		ASSERT(0);
	}

	/*stop all signal of A*/
	sim_MT6306_blockAllSignal(peerHWCb);

	/*in design spec, we assume controller is in IR or LA state, make sure controller is not in deactivation state*/

#ifdef __DRV_2_SIM_USING_MT6306__
	/*block B's signal*/
	sim_MT6306_blockAllSignal(hw_cb);
#endif
	/*deactivate SIM controller to stand the same position with B*/
	sim_MT6306_deactivateSIMCtrl(hw_cb);

	/*connect all signal to B*/
	sim_MT6306_passAllSignal(hw_cb);

	return sim_MT6306_statusNoError;
}

/*
*	clock stopped to clock running handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_s2R(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	switch_CB = switch_CB;
	sim_MT6306_addMsg(SIM_MT6306_S2R, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	if(sim_MT6306_eventCommand == event)
	{
		sim_MT6306_blockDAT(hw_cb->simSwitchPeerInterfaceCb);
		sim_MT6306_passDAT(hw_cb);
	}
	else/*reset or power off*/
	{

		/*block all A's signal*/
		sim_MT6306_blockAllSignal(hw_cb->simSwitchPeerInterfaceCb);

#ifdef __DRV_2_SIM_USING_MT6306__
		if(sim_MT6306_cardTypeIR == card_cb->type)
		{
			/*keep B's RST low, should to consider if we want to reset after deactivating, when to connect RST signal*/
			sim_MT6306_setRST(hw_cb, 0);
			sim_MT6306_blockRST(hw_cb);
#ifdef __OLD_PDN_ARCH__
//				drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
//					event, card_cb->type, DRV_Reg(DRVPDN_CON1), switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] ,
//					switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] , switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]
//				);
#else
#endif
		}
		else
		{
#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
			sim_MT6306_passRST(hw_cb);
#endif
		}
#endif

		/*CLK is connected, just need to pass DAT*/
		sim_MT6306_passDAT(hw_cb);
	}

	return sim_MT6306_statusNoError;
}

/*
*	clock stopped to clock stopped handler
*	simInterface:	target interface that we want to switch to
*/
sim_MT6306_status sim_MT6306_s2S(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	switch_CB = switch_CB;
	sim_MT6306_addMsg(SIM_MT6306_S2S, hw_cb->simSwitchChipNo, event, hw_cb->simInterface);

	if(sim_MT6306_eventCommand == event)
	{
		sim_MT6306_blockDAT(hw_cb->simSwitchPeerInterfaceCb);

		/*controller's clk should be enabled in driver, we just connect CLK now*/
		sim_MT6306_passCLK(hw_cb);
		sim_MT6306_passDAT(hw_cb);
	}
	else/*reset or power off*/
	{
		/*block all A's signal*/
		sim_MT6306_blockAllSignal(hw_cb->simSwitchPeerInterfaceCb);

#ifdef __DRV_2_SIM_USING_MT6306__
		if(sim_MT6306_cardTypeIR == card_cb->type)
		{
			/*keep B's RST low, should to consider if we want to reset after deactivating, when to connect RST signal*/
			sim_MT6306_setRST(hw_cb, 0);
			sim_MT6306_blockRST(hw_cb);
#ifdef __OLD_PDN_ARCH__
			drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
			           event, card_cb->type, DRV_Reg(DRVPDN_CON1), switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] ,
			           switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] , switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]
			          );
#else
#endif
		}
		else
		{
#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
			sim_MT6306_passRST(hw_cb);
#endif
		}
#endif

#ifdef DRV_2_SIM_USING_LTC4558
		/*in LTC4558, when we block A's signal, we connect B's signal, though controller's CLK maybe stopped*/
		card_cb->pins.CLK = sim_MT6306_CLKPass;
#endif
		/*CLK is connected, just need to pass DAT*/
		sim_MT6306_passCLK(hw_cb);

		sim_MT6306_passDAT(hw_cb);

	}

	return sim_MT6306_statusNoError;
}
sim_MT6306_status sim_MT6306_change(
    sim_HW_cb *hw_cb,
    sim_MT6306_changeEvent	event
)
{
	kal_uint32	handlerIndex;
	Sim_Card *SimCard;
	sim_HW_cb *peerHWCb;

	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;
	kal_uint32 t2, t1;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	MT6306_DBG("[%s] interface:%d, thread:%x\n\r", __func__, hw_cb->simInterface, (kal_uint32)kal_get_current_thread_ID());
	/*semaphore protect*/
	kal_take_sem(switch_CB->sim_MT6306_arb, KAL_INFINITE_WAIT);

	switch_CB->sim_MT6306_taskAccessing = KAL_TRUE;

	/*in MT6306 driver, one SIMIF may surve multiple cards, we need record the current master*/
	sim_set_logical_to_SIMIF(sim_get_hwCtrl_from_logicalNum(hw_cb->simInterface), hw_cb->simInterface);

	MT6306_RACE_PROTECT(sim_MT6306_protectionChange);

	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);

	/*we are ready to seving this interface, stop its clk-stop gpt timer now*/
	sim_MT6306_clkStopTimerStop(hw_cb);
	card_cb->sim_MT6306_clkStopQueued = KAL_FALSE;
	sim_MT6306_deClkStopQueue(hw_cb);
	switch_CB->sim_MT6306_needCLKStartTimeout = KAL_FALSE;



	if(switch_CB->sim_MT6306_CLKStopping == KAL_TRUE)
	{
		t1 = SIM_GetCurrentTime();
		do
		{
			//Wait until clock stop done
			kal_sleep_task(1);
			t2 = SIM_GetCurrentTime();			
		}while(switch_CB->sim_MT6306_CLKStopping == KAL_TRUE);// Clock is being stopped( I2C writting)
		MT6306_DBG("[%s]: Interface:%d, Clock Stopping take:%d\r\n", __func__, hw_cb->simInterface, t2 - t1);
	}
	/*from 2/18 meeting minutes, SIM controller's clk must run before we pass MT6306's clk*/
	if(sim_MT6306_eventCommand == event)
		sim_PDNDisable_MT6306(hw_cb);

	SimCard = GET_SIM_CB(peerHWCb->simInterface);
	/*current connection check*/
	if(switch_CB->sim_MT6306_servingInterface == hw_cb->simInterface)
	{
		/*we don't need to switch, must take care on reset, power off commands*/

		/*in MT6306, we block DAT and RST in EOC to protect any signal error, we have to pass them now*/
#ifdef __DRV_2_SIM_USING_MT6306__
		/*pass DAT, maybe for some card, we can't pass DAT, need more revise*/
		sim_MT6306_passDAT(hw_cb);

		/*for reset and power off, we have to pass RST, but there maybe some card can't pass, have to revise*/
		if(sim_MT6306_eventCommand != event)
		{
#if !defined (__SIM_DRV_ENABLE_MT6306_SAVE_RST_PIN__)
			if(sim_MT6306_stateClkRunning != peerCard_cb->state)
				sim_MT6306_passRST(hw_cb);
#endif
		}

		/*we may have blocked CLK, no matter we will do command or reset, power off, we have to pass clk*/
		if(MT6306_CLK_CFG_BLOCKED(hw_cb->simInterface))
		{
			sim_MT6306_passCLK(hw_cb);

			/*if SIM controller is now clk running, from card's viewpoint, its clk is now starting*/
			if((DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK) & SIM_CTRL_HALT) == 0x0)
				switch_CB->sim_MT6306_needCLKStartTimeout = KAL_TRUE;
		}

#endif

		/*what if A's clock is running, which means its CLK is pass, and we want to do reset or power off now*/
		if(sim_MT6306_stateClkRunning == peerCard_cb->state)
		{
			switch_CB->sim_MT6306_needManualControl = KAL_TRUE; //In case of command fail->powoff. Need to manul powoff if peer is clk running
#if defined(__DRV_2_SIM_USING_MT6306__)
			if(sim_MT6306_eventCommand != event)
			{
				if(KAL_TRUE == SimCard->clkStop)
				{
					/*since we will block A's siganl, this means to stop its clk, must take care whether A's clk-stop timer expire or not*/
//					dbg_print("we use a bad delay to avoid blocking A's signal before clk-stop timer expire\n\r");
#ifdef __MAUI_BASIC__
					//GPTI_BusyWait(20);
					ASSERT(0);
#else
					kal_sleep_task(5);
#endif
					sim_MT6306_blockAllSignal(peerHWCb);

					sim_MT6306_setCardState(peerHWCb, sim_MT6306_stateClkStopped);
				}
				else
				{

					/*block A's DAT*/
					sim_MT6306_blockDAT(peerHWCb);

					sim_MT6306_blockRST(hw_cb);
					/*in most case, we block RST to high, pull it low now*/
					sim_MT6306_setRST(hw_cb, 0);


				}
			}
#elif defined (DRV_2_SIM_USING_LTC4558)
			dbg_print("havn't implement case 1\n\r");
#else
			IMPLEMENTING_ASSERT;
#endif

		}
	}
	else
	{
		/*record previous lisr state*/
		peerCard_cb->lisrState = switch_CB->sim_MT6306_registeredLISR;

		/*change LISR registration if need*/
		if(switch_CB->sim_MT6306_registeredLISR != card_cb->lisrState)
		{
			sim_MT6306_addMsg(SIM_MT6306_CHANGE_LISR, switch_CB->sim_MT6306_registeredLISR, sim_MT6306_card[hw_cb->simInterface].lisrState, sim_MT6306_card[peerHWCb->simInterface].lisrState);
			if(sim_MT6306_LISRSim == card_cb->lisrState)
			{
				if(SIM_base == hw_cb->mtk_baseAddr)
				{
					DRV_Register_HISR(DRV_SIM_HISR_ID, SIM_HISR_MT6306);
					IRQ_Register_LISR(hw_cb->mtk_lisrCode, SIM_LISR_MT6306, "SIM handler");
				}
				else
				{
					DRV_Register_HISR(DRV_SIM2_HISR_ID, SIM_HISR2_MT6306);
					IRQ_Register_LISR(hw_cb->mtk_lisrCode, SIM_LISR2_MT6306, "SIM2 handler");
				}
			}
			else if(sim_MT6306_LISRUsim == card_cb->lisrState)
			{
				if(SIM_base == hw_cb->mtk_baseAddr)
				{
					DRV_Register_HISR(DRV_USIM_HSIR_ID, usim_hisr);
					IRQ_Register_LISR(hw_cb->mtk_lisrCode, usim_lisr_MT6306, "USIM_Lisr");
				}
				else
				{
					DRV_Register_HISR(DRV_USIM2_HSIR_ID, usim_hisr2);
					IRQ_Register_LISR(hw_cb->mtk_lisrCode, usim_lisr2_MT6306, "USIM2_Lisr");
				}
			}

			switch_CB->sim_MT6306_registeredLISR = card_cb->lisrState;
		}
		else  /*for the case that both cards are all activated, and we change from one interface to another*/
		{
			if(sim_MT6306_LISRSim == switch_CB->sim_MT6306_registeredLISR)
			{
				//sim_waitHisrInterface = hw_cb->MT6306Interface;
				switch_CB->sim_waitHisrCb_MT6306 = hw_cb;
			}
			else if(sim_MT6306_LISRUsim == switch_CB->sim_MT6306_registeredLISR)
			{
				//usim_waitHisrInterface = hw_cb->MT6306Interface;
				switch_CB->usim_waitHisrCb_MT6306 = hw_cb;
			}
		}

		/*should not record baud here, should record only after PTS, which is only by the end of l1sim_reset_all*/
		//sim_MT6306_recordDirectionBaud(1 - simInterface);

		sim_MT6306_retreiveDirectionBaud(hw_cb);
#ifdef __OLD_PDN_ARCH__
		drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
		           peerCard_cb->state, card_cb->state, peerCard_cb->lisrState , card_cb->lisrState,
		           hw_cb->simInterface, event
		          );
#endif
		/*decide which handler for this*/
		handlerIndex = (peerCard_cb->state * 3) + card_cb->state;
		MT6306_DBG("[%s] Hadler:%s(%d), peer state:%d, my state:%d, interface(%d->%d), event:%d\r\n", __func__, mt6306StateStr[handlerIndex], handlerIndex, peerCard_cb->state, card_cb->state, peerHWCb->simInterface, hw_cb->simInterface, event);

		sim_MT6306_handlerTable[handlerIndex](hw_cb , event);
	}

	/*record the servingInterface, since we judge this by who is the latest interface that controller served*/
	/*move from EOC to here on 1/22, since there is a case that we didn't do change in power off, since the card is already deactivate, but change this variable since we did EOC*/
	switch_CB->sim_MT6306_servingInterface = hw_cb->simInterface;


	MT6306_RACE_RELEASE(sim_MT6306_protectionChange);
	return sim_MT6306_statusNoError;
}

void sim_MT6306_setCardState(sim_HW_cb *hw_cb, sim_MT6306_cardState cardState)
{
	sim_MT6306_switchInfo	*switch_CB;
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	MT6306_RACE_PROTECT(sim_MT6306_protectionState);

	/*doing state assert*/
	if(sim_MT6306_stateDeactiavate == card_cb->state)
	{
		if(sim_MT6306_stateClkStopped == cardState)
			ASSERT(0);
	}

	sim_MT6306_addMsg(SIM_MT6306_CHANGE_CARD_STATE, hw_cb->simInterface, card_cb->state, cardState);
	card_cb->state = cardState;

	if(sim_MT6306_stateDeactiavate == cardState)
	{
		card_cb->sim_MT6306_clkStopQueued = KAL_FALSE;
		sim_MT6306_deClkStopQueue(hw_cb);
		sim_MT6306_addMsg(SIM_MT6306_CLKSTOP_DEQUE, card_cb->state, hw_cb->simInterface, 0);


	}

	MT6306_RACE_RELEASE(sim_MT6306_protectionState);
}

void sim_MT6306_setCardType(sim_HW_cb *hw_cb, sim_MT6306_cardType cardType)
{
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);

	sim_MT6306_addMsg(SIM_MT6306_CHANGE_CARD_TYPE, hw_cb->simSwitchChipNo, card_cb->type, cardType);

	card_cb->type = cardType;

}

void sim_MT6306_endOfAction(sim_HW_cb *hw_cb)
{
	sim_HW_cb *peerHWCb;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);


	MT6306_DBG("[%s] interface:%d\n\r", __func__, hw_cb->simInterface);

#ifdef __DRV_2_SIM_USING_MT6306__
	/*hold RST and DAT*/
	sim_MT6306_blockDAT(hw_cb);
	if(sim_MT6306_stateDeactiavate != card_cb->state) /*if card is currently active*/
	{
#ifdef __DRV_2_SIM_USING_MT6306__
		if(sim_MT6306_cardTypeAL == card_cb->type)
		{
			/*if card is LA card, we should block its RST to high*/
			sim_MT6306_setRST(hw_cb, 1);
		}
		else if(sim_MT6306_cardTypeIR == card_cb->type)
		{
			/*if card is IR card, we should block its RST to low*/
			sim_MT6306_setRST(hw_cb, 0);
		}
#endif

	}
	sim_MT6306_blockRST(hw_cb);
#endif

	/*since clkStopper will stop clk depends on in SIM or USIM method, we have to record interface's using LISR now*/
	card_cb->lisrState = switch_CB->sim_MT6306_registeredLISR;

	if(KAL_TRUE == card_cb->sim_MT6306_clkStopQueued)
	{
		MT6306_DBG("[%s] Calling Stopper, interface:%d, Queued\n\r", __func__, hw_cb->simInterface);
		sim_MT6306_clkStopper(hw_cb);
	}
	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);
	if(KAL_TRUE == peerCard_cb->sim_MT6306_clkStopQueued)
	{
		MT6306_DBG("[%s] Calling Stopper(%d), interface:%d, PeerCard\n\r", __func__, peerHWCb->simInterface, hw_cb->simInterface);
		sim_MT6306_clkStopper(peerHWCb);
	}

	/*borrow the task context to stop the queued Clk stop event*/
	{
		int i;
		sim_HW_cb *queuedCb;//,*queued_PeerCb;
		sim_MT6306_switchInfo *queued_switch_CB;
		sim_MT6306_cardInfo	*queued_card_cb;//, *queued_peerCard_cb;


		for(i = 0; 4 > i; i++)
		{
			queuedCb = retreiveQueuedCb(i);
			if(queuedCb != NULL)
			{
				queued_switch_CB = sim_MT6306_get_MT6306switchCB(queuedCb);

				/*stop peer or itself directly since no other task is accessing( SIM1 try to stop SIM2(or SIM1), SIM2 is definitely not accessing)*/
				if(queued_switch_CB->MT6306ChipNo == switch_CB->MT6306ChipNo)
				{
					MT6306_DBG("[%s] Calling Stopper(%d), interface:%d, Case6-1 queuedCB serving:%d\n\r", __func__, queuedCb->simInterface, hw_cb->simInterface, queued_switch_CB->sim_MT6306_servingInterface);
					sim_MT6306_clkStopper(queuedCb);
				}
				else if(queued_switch_CB->sim_MT6306_taskAccessing)
				{
					/* SIM1 try to stop SIM3, SIM3  busy. Stop clock in SIM3's endOfAction*/
					/* or SIM3 try to stop SIM1, but SIM2(peer) is busy. Stop clock in SIM2's endOfAction*/
					queued_card_cb = sim_MT6306_get_MT6306CardCB(queuedCb);
					queued_card_cb->sim_MT6306_clkStopQueued = KAL_TRUE;
					MT6306_DBG("[%s] !!!!!! Postpone (%d), interface:%d, Case6-2, queuedCB serving:%d\n\r", __func__, queuedCb->simInterface, hw_cb->simInterface, queued_switch_CB->sim_MT6306_servingInterface);

				}
				else // SIM1 try to stop SIM3, SIM3 is free.
				{
					MT6306_DBG("[%s] Calling Stopper(%d), interface:%d, Case6-4\n\r", __func__, queuedCb->simInterface, hw_cb->simInterface);
					sim_MT6306_clkStopper(queuedCb);
				}


			}
		}
	}


	switch_CB->sim_MT6306_needManualControl = KAL_FALSE;


	switch_CB->sim_MT6306_taskAccessing = KAL_FALSE;

	/*handle the semaphore*/
	kal_give_sem(switch_CB->sim_MT6306_arb);

}

/*	this is to be called by simd, usim driver, to set the voltage level to the card
*	level 0 means 1.8V, 1 means 3V
*/
void sim_MT6306_VCCLvlCtrl(sim_HW_cb *hw_cb, kal_uint32 level)
{
#if defined(__DRV_2_SIM_USING_MT6306__)
	sim_MT6306_setVCC(hw_cb, level);
#elif defined (DRV_2_SIM_USING_LTC4558)
	/*LTC4558 related init*/
	sim_LTC4558_VCCLvlCtrl(hw_cb, level);
#else
	IMPLEMENTING_ASSERT;
#endif

}

void sim_MT6306_VCCCtrl(sim_HW_cb *hw_cb, kal_uint32 on)
{
#if defined(__DRV_2_SIM_USING_MT6306__)
	sim_MT6306_switchVCC(hw_cb, on);
#elif defined (DRV_2_SIM_USING_LTC4558)
	/*LTC4558 related init*/
	sim_LTC4558_VCCCtrl(hw_cb, on);
#else
	IMPLEMENTING_ASSERT;
#endif

}

kal_bool sim_MT6306_QueryNeedManualControl(sim_HW_cb *hw_cb)
{
	sim_MT6306_switchInfo *switch_CB;

	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	return switch_CB->sim_MT6306_needManualControl;
}

kal_bool sim_MT6306_QuerySIMActive(sim_HW_cb *hw_cb)
{
	sim_MT6306_cardInfo	*card_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);

	if(sim_MT6306_stateClkRunning == card_cb->state || sim_MT6306_stateClkStopped == card_cb->state)
		return KAL_TRUE;
	else
		return KAL_FALSE;
}

void sim_MT6306_LISRStateChange(sim_HW_cb *hw_cb, sim_MT6306_LISRState lisrState)
{
	sim_MT6306_switchInfo *switch_CB;

	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	sim_MT6306_addMsg(SIM_MT6306_CHANGE_CURRENT_LISR, switch_CB->sim_MT6306_registeredLISR, lisrState, 0);

	switch_CB->sim_MT6306_registeredLISR = lisrState;
}

kal_bool sim_MT6306_allCLKStopped(sim_HW_cb *hw_cb)
{
	sim_HW_cb *peerHWCb;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);

	if(sim_MT6306_stateClkStopped == card_cb->state && sim_MT6306_stateClkStopped == peerCard_cb->state)
		return KAL_TRUE;
	else
		return KAL_FALSE;
}
kal_bool sim_MT6306_noneNeedClk(sim_HW_cb *hw_cb)
{
	sim_HW_cb *peerHWCb;
	sim_MT6306_cardInfo	*card_cb, *peerCard_cb;
	//sim_MT6306_switchInfo *switch_CB;
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif


	DRV_GET_RET_ADDR(retAddr);

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	peerHWCb = hw_cb->simSwitchPeerInterfaceCb;
	peerCard_cb = sim_MT6306_get_MT6306CardCB(peerHWCb);
	sim_MT6306_addMsg(SIM_MT6306_NO_NEED_CLK_BEGIN, hw_cb->simInterface, 1, (kal_uint32)retAddr);
#if defined(__SIM_DRV_TRACE__)

	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);

	drv_trace8(TRACE_GROUP_4, SIM_GEMINI_GEN1, FILE_SWITCHCONTROL2, __LINE__,
	           switch_CB->sim_MT6306_needCLKStartTimeout , hw_cb->simInterface, switch_CB->sim_MT6306_taskAccessing, SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK),
	           switch_CB->sim_MT6306_needManualControl, SIM_Reg(SIM0_BASE_ADDR_MTK + SIM_COUNT_MTK));
#endif
	if(sim_MT6306_stateClkRunning != card_cb->state && sim_MT6306_stateClkRunning != peerCard_cb->state)
		return KAL_TRUE;
	else
		return KAL_FALSE;
}


/*this API may run in timer HISR or task */
void sim_MT6306_clkStopper(sim_HW_cb *hw_cb)
{
	Sim_Card *SimCard;
	usim_dcb_struct *usim_dcb;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif

	DRV_GET_RET_ADDR(retAddr);



	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	MT6306_RACE_PROTECT(sim_MT6306_protectionStopper);
	
	switch_CB->sim_MT6306_CLKStopping = KAL_TRUE;
	
	sim_MT6306_addMsg(SIM_MT6306_DRIVER_STOPCLK_BEGIN, hw_cb->simInterface, (kal_uint32)retAddr, drv_get_current_time());
	if(KAL_TRUE == kal_if_hisr() && KAL_TRUE == switch_CB->sim_MT6306_taskAccessing)
		ASSERT(0);
	MT6306_DBG("[%s]: Interface:%d, Switch:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo);
	/*caution!!!!!, clk may not be stopped in this stopper, clk maybe stoped while changing interface*/
	/*this stopper is to stop the clok, if it havn't been stopped*/
	usim_dcb = GET_USIM_CB(hw_cb->simInterface);
	SimCard = GET_SIM_CB(hw_cb->simInterface);
	SimCard = SimCard;
	/*check whether SIM or USIM state current interface is*/
	if(sim_MT6306_LISRSim == card_cb->lisrState)
	{

		sim_MT6306_blockCLK(hw_cb);
		sim_MT6306_setCardState(hw_cb, sim_MT6306_stateClkStopped);
		//if(sim_MT6306_allCLKStopped())
		if(sim_MT6306_noneNeedClk(hw_cb) && (0x1 == DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK)))
		{
			//sim_MT6306_addMsg(SIM_MT6306_DRIVER_STOPCLK, simInterface, 1, drv_get_gpt_current_time());
			sim_MT6306_addMsg(SIM_MT6306_DRIVER_STOPCLK, hw_cb->simInterface, 1, drv_get_current_time());
			/*in Gemini we don't need to care what clkStopLevel we set on SIM controller since the level is controller by MT6306*/
			/*we don't set clk-stop bit of SIM controller, only power down SIM controller*/
			sim_PDNEnable_MT6306(hw_cb);

		}
	}
	else if(sim_MT6306_LISRUsim == card_cb->lisrState)
	{
		{
			kal_bool level;
			level = level;

			usim_dcb->main_state = CLK_STOPPED_STATE;
			if(usim_dcb->clock_stop_type == CLOCK_STOP_HIGH)
				level = KAL_TRUE;
			else
				level = KAL_FALSE;
			sim_MT6306_blockCLK(hw_cb);
			sim_MT6306_setCardState(hw_cb, sim_MT6306_stateClkStopped);
			//if(sim_MT6306_allCLKStopped())
			if(sim_MT6306_noneNeedClk(hw_cb) && (0x1 == DRV_Reg(SIM0_BASE_ADDR_MTK + SIM_CTRL_MTK)))
			{
				sim_MT6306_addMsg(SIM_MT6306_DRIVER_STOPCLK, hw_cb->simInterface, 0, drv_get_current_time());
				/*we don't set clk-stop bit of SIM controller, only power down SIM controller*/
				sim_PDNEnable_MT6306(hw_cb);

			}
		}
	}
	else
		ASSERT(0);

	MT6306_RACE_RELEASE(sim_MT6306_protectionStopper);
	switch_CB->sim_MT6306_CLKStopping = KAL_FALSE;

}

void sim_MT6306_clkStopTimeoutHandler(void *parameter)
{
	sim_HW_cb *hw_cb;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;
	Sim_Card *SimCard;

	/* For mt6306 GPIO checking */
	spiWriterGptTimeoutFlag = KAL_TRUE;

	hw_cb = (sim_HW_cb *)parameter;
	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	SimCard = GET_SIM_CB(hw_cb->simInterface);
	/*This flag is used to check is cmd clock stop timer is started. If cmd clock stop timer is
	  started and stoped again, we should allow this case for d2R */
	SimCard->clkstoping = KAL_FALSE;
	sim_MT6306_addMsg(SIM_MT6306_CLKSTOP_TIMEOUT, hw_cb->simInterface, drv_get_current_time(), switch_CB->sim_MT6306_taskAccessing);


	/*if we deactivate usim card in command error then the timer expired, we will not do anything about clock stop*/
	if(sim_MT6306_stateDeactiavate == card_cb->state)
	{
		sim_MT6306_addMsg(SIM_MT6306_CLKSTOP_ABORT, card_cb->state, 0, 0);
		return;
	}

	/*this runs in HISR, it's purpose is : 1. If no task is accessing SIM, stop clk immediately; 2. set flag only*/
	if(KAL_FALSE == switch_CB->sim_MT6306_taskAccessing && KAL_FALSE == spiWriterFlag)
	{

		MT6306_DBG("[%s]: Interface:%d, Switch:%d, Case1\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo);
		/*stop clk immediately*/
		sim_MT6306_clkStopper(hw_cb);
	}
	else if(KAL_TRUE == switch_CB->sim_MT6306_taskAccessing)
	{
		MT6306_DBG("[%s]: Interface:%d, Switch:%d, Case2(Stop In the End)\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo);
		card_cb->sim_MT6306_clkStopQueued = KAL_TRUE;
	}
	else
	{
		MT6306_DBG("[%s]: Interface:%d, Switch:%d, Case3(Enqueued)\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo);
		//sim_MT6306_enClkStopQueue(hw_cb);
		sim_MT6306_enClkStopQueue(hw_cb);
	}
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
}

/*this is the API called by SIM driver, for clock stop*/
void sim_MT6306_clkStopTimer(sim_HW_cb *hw_cb)
{

	Sim_Card *SimCard;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;
	SimCard = GET_SIM_CB(hw_cb->simInterface);

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	switch_CB = sim_MT6306_get_MT6306switchCB(hw_cb);
	switch_CB = switch_CB;
	/*in case that previous gpt timer expire right after we set clkStopQueued to kal_true*/
	sim_MT6306_clkStopTimerStop(hw_cb);
	MT6306_DBG("[%s]: Interface:%d, Switch:%d\r\n", __func__, hw_cb->simInterface, switch_CB->MT6306ChipNo);
	/*in the case that two SIM commands send in L1sim_cmd_all, we have to re-count timeout, thus, we must set previouse kal_true to kal_false*/
	card_cb->sim_MT6306_clkStopQueued = KAL_FALSE;
	sim_MT6306_deClkStopQueue(hw_cb);
	sim_MT6306_addMsg(SIM_MT6306_CLKSTOP_START, hw_cb->simInterface, drv_get_current_time(), 0);
	/*1860 clk is about 572 u-sec << 1 mili-second, no matter we use kal timer or gpt timer, 2 is enough*/
	DRV_ICC_GPTI_StartItem(card_cb->sim_MT6306_gptHandle, 1, sim_MT6306_clkStopTimeoutHandler, (void *)hw_cb);

	/*This flag is used to check is cmd clock stop timer is started. If cmd clock stop timer is
	  started and stoped again, we should allow this case for d2R */
	SimCard->clkstoping = KAL_TRUE;
}

void sim_MT6306_clkStopTimerStop(sim_HW_cb *hw_cb)
{
	Sim_Card *SimCard;
	sim_MT6306_cardInfo	*card_cb;
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif


	DRV_GET_RET_ADDR(retAddr);
	sim_MT6306_addMsg(SIM_MT6306_CLKSTOP_STOP, hw_cb->simInterface, (kal_uint32)retAddr, 0);

	card_cb = sim_MT6306_get_MT6306CardCB(hw_cb);
	SimCard = GET_SIM_CB(hw_cb->simInterface);
	DRV_ICC_GPTI_StopItem(card_cb->sim_MT6306_gptHandle);
	/*This flag is used to check is cmd clock stop timer is started. If cmd clock stop timer is
	  started and stoped again, we should allow this case for d2R */
	SimCard->clkstoping = KAL_FALSE;
}

void sim_MT6306_controlPeerSwitchVSIM(sim_HW_cb *hw_cb, kal_uint8 regValue)
{
	sim_MT6306_switchInfo *peerSwitch_CB;

	/*this API is only for VSIM control, so we have to make sure the register address is 3*/
	if((regValue & 0xf0) != 0x30)
		ASSERT(0);

	/*find our peer switch's switch_cb*/
#if (SIM_MT6302_MAX_MT6302 == 2)
	if(0 == hw_cb->simSwitchChipNo)
		peerSwitch_CB = &switchCBMT6306[1];
	else
		peerSwitch_CB = &switchCBMT6306[0];
#else
	ASSERT(0);
#endif

	sim_MT6306_SPIWrite(peerSwitch_CB, regValue);
}
void sim_MT6306_switchInit(sim_MT6306_switchInfo *switch_CB, kal_uint32 MT6306Interface)
{

	switch_CB->sim_MT6306_arb = kal_create_sem("MT6306_LOCK", 1);
	switch_CB->sim_MT6306_Check_arb = kal_create_sem("MT6306_Check", 1);//unused?
	if(switch_CB_63062.sim_MT6306_arb == NULL)
		switch_CB_63062.sim_MT6306_arb = kal_create_sem("MT6306_SEC_LOCK", 1);
	switch_CB->sim_MT6306_servingInterface = SIM_MT6306_SERVING_INTERFACE_NONE;
	switch_CB->MT6306ChipNo = MT6306Interface;
	switch_CB->MT6306_LCD_pdnHandle = 0xff;
	spiWriterFlag = KAL_FALSE;
#if defined(__DRV_2_SIM_USING_MT6306__)

#if 0 //Blue mark this when early UT, will open it and consider whether to move security check's position
/* under construction !*/
/* under construction !*/
/* under construction !*/
#endif
	/*Blue turn on in HW I2C development*/
	//sim_MT63062_Init(1);

	/*MT6306 related init*/
	MT6306_i2cInit(&switch_CB->sim_MT6320_writer, MT6306Interface);

	switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST] = 0x00;//default all value 0, and addr is 0
	switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK] = 0x13;//CLK register is default in block low state
	switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT] = 0x20;//default all value 0, and addr is 2
	switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC] = 0x30;//default all value 0, and addr is 3
	switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CARDSS] = 0x8C;//SIM1=card 1/2, SIM2=card 3/4

	/*when use MT6318 PMIC, MT6306 may not have been reset here, write to 4 registers for safety*/
	sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CLK]);
	sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_RST]);
	sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_DAT]);
	sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_VCC]);

	sim_MT6306_SPIWrite(switch_CB, switch_CB->sim_MT6306_regValue[SIM_MT6306_REG_CARDSS]);


// TODO: temp remove
#if 0
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
/* under construction !*/
#ifndef GEMINI25_EVB
/* under construction !*/
/* under construction !*/
#endif
#endif
	/*disable PH resister for FTA issue*/
	sim_MT6306_SPIWrite(switch_CB, 0x130);


#elif defined (DRV_2_SIM_USING_LTC4558)
	/*LTC4558 related init*/
	GPIO_ModeSetup(4, 0);
	GPIO_ModeSetup(7, 0);
	GPIO_ModeSetup(8, 0);
	GPIO_ModeSetup(9, 0);
	GPIO_ModeSetup(11, 0);
	GPIO_ModeSetup(12, 0);
	GPIO_ModeSetup(13, 0);
	GPIO_InitIO(1, 4);
	GPIO_InitIO(1, 7);
	GPIO_InitIO(1, 8);
	GPIO_InitIO(1, 9);
	GPIO_InitIO(1, 11);
	GPIO_InitIO(1, 12);
	GPIO_InitIO(1, 13);

	/*in first Gemini EVB, we use MT6227EVB to attach MT6225DTB, GPIO13 in MT6227EVB caonnect to MT6225 DTB GPIO28
	* this GPIO is set to BPI_BUS9 and has a pull low strength, must set this to GPIO mode to make GPIO13 work correctly
	*/
	GPIO_ModeSetup(28, 0);
#else
	IMPLEMENTING_ASSERT;
#endif
}

void sim_MT6306_init()
{
	kal_uint32 maskedValue;
	kal_uint32 i;
	sim_MT6306_switchInfo *switch_CB;
	sim_MT6306_cardInfo	*card_cb;
	for(i = 0; i < SIM_MT6302_MAX_MT6302; i++)
	{
		switch_CB = &switchCBMT6306[i];
		maskedValue = SaveAndSetIRQMask();
		if(KAL_FALSE == switch_CB->sim_MT6306_initialized)
		{
			switch_CB->sim_MT6306_initialized = KAL_TRUE;
			RestoreIRQMask(maskedValue);

			sim_MT6306_switchInit(switch_CB, i);
		}
		else
		{
			RestoreIRQMask(maskedValue);
		}
	}


	for(i = 0; i < DRV_SIM_MAX_LOGICAL_INTERFACE; i++)
	{
		card_cb = &sim_MT6306_card[i];
		if(0 == card_cb->sim_MT6306_gptHandle)
			DRV_ICC_GPTI_GetHandle(&card_cb->sim_MT6306_gptHandle);
		if(0 == card_cb->sim_MT6306_gptHandle)
			ASSERT(0);
		card_cb->pins.CLK = sim_MT6306_NoLDO_CLKPass;
		card_cb->pins.RST = sim_MT6306_NoLDO_RSTPass_Low;
		card_cb->pins.DAT = sim_MT6306_NoLDO_DATBlockedHigh;
		card_cb->pins.VCC = sim_MT6306_VCC18VDisable;
	}

}

void sim_MT6306_deClkStopQueue(sim_HW_cb *hw_cb)
{
	int i;
	for(i = 0; 4 > i; i++)
	{
		if(hw_cb == clockStopQueue[i].hw_cb && KAL_TRUE == clockStopQueue[i].queued)
			clockStopQueue[i].queued = KAL_FALSE;
	}
}

void sim_MT6306_enClkStopQueue(sim_HW_cb *hw_cb)
{
	clockStopQueue[queueIndex].hw_cb = hw_cb;
	clockStopQueue[queueIndex].queued = KAL_TRUE;
	if(3 == queueIndex)
		queueIndex = 0;
	else
		queueIndex++;
}
sim_HW_cb *retreiveQueuedCb(kal_uint32 i)
{
	if(KAL_TRUE == clockStopQueue[i].queued)
	{
		if(clockStopMap[clockStopQueue[i].hw_cb->simInterface].isHandleCmd == KAL_TRUE)
			return NULL;
		else
		{
			clockStopQueue[i].queued = KAL_FALSE;
			return clockStopQueue[i].hw_cb;
		}
	}

	return NULL;
}
#endif //#if defined(SIM_DRV_SWITCH_MT6306)
#endif //DRV_MULTIPLE_SIM
#endif /*__SIM_DRV_MULTI_DRV_ARCH__*/

#endif //DRV_SIM_OFF

