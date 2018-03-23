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
 *    sim_MT6302.h
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *   This file is intends for header files for MT6302 related control code
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
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef __SIM_MT6306_H__
#define __SIM_MT6306_H__

#include "mt6306_i2c.h"

#define	__DRV_2_SIM_USING_MT6306__
#define	SIM_MT6306_MAX_INTERFACES	2
#define	SIM_MT6306_REG_NUMBER	9
#define	SIM_MT6306_REG_CARDSS	8
#define	SIM_MT6306_REG_RST	0
#define	SIM_MT6306_REG_CLK		1
#define	SIM_MT6306_REG_DAT	2
#define	SIM_MT6306_REG_VCC	3

#define	SIM_MT6306_CONFMSK	0x33B
#define 	SIM_MT6306_SERVING_INTERFACE_NONE		0xff

#if defined(DRV_SIM_DBG_LOW_COST_ULC)
#define	SIM_MT6306_MSG_NUM			256
#elif defined(DRV_SIM_DBG_LOW_COST_COMMON)
#define	SIM_MT6306_MSG_NUM			512
#else
#define	SIM_MT6306_MSG_NUM			1024
#endif

#ifdef DRV_2_SIM_USING_LTC4558
#define SIM_MT6306_GPIO_LTC4558_CLKRUNA	4
#define SIM_MT6306_GPIO_LTC4558_CLKRUNB	7
#define SIM_MT6306_GPIO_LTC4558_ENABLEA	8
#define SIM_MT6306_GPIO_LTC4558_ENABLEB	9
#define SIM_MT6306_GPIO_LTC4558_CSEL			11
#define SIM_MT6306_GPIO_LTC4558_VSELA		12
#define SIM_MT6306_GPIO_LTC4558_VSELB		13
#endif

#ifndef __SIM_DRV_MULTI_DRV_ARCH__

#define MT6306_RACE_PROTECT(a) \
{ \
	if(0 < MT6306_raceConditionProtect[a]) \
		ASSERT(0); \
	MT6306_raceConditionProtect[a] ++; \
}

#define MT6306_RACE_RELEASE(a) \
{MT6306_raceConditionProtect[a] -- ;}

#else

#define MT6306_RACE_PROTECT(a) \
{ \
	if(0 < switch_CB->MT6306_raceConditionProtect[a]) \
		ASSERT(0); \
	switch_CB->MT6306_raceConditionProtect[a] ++; \
}

#define MT6306_RACE_RELEASE(a) \
{switch_CB->MT6306_raceConditionProtect[a] -- ;}

#endif


typedef enum{
	SIM_MT6306_SELECT_LTC4558	= 0x00030001,
	SIM_MT6306_RETREIVE_BAUD	= 0x00030002,
	SIM_MT6306_CLOCK_CTRL		= 0x00030003,
	SIM_MT6306_VCC_CTRL			= 0x00030004,
	SIM_MT6306_VCC_LVL_CTRL		= 0x00030005,
	SIM_MT6306_ACT_SIM_CTRL		= 0x00030006,
	SIM_MT6306_DEACT_SIM_CTRL	= 0x00030007,
	SIM_MT6306_RST_CTRL			= 0x00030008,
	SIM_MT6306_DAT_CTRL			= 0x00030009,

	SIM_MT6306_BLOCK_DAT			= 0x00040001,
	SIM_MT6306_BLOCK_RST			= 0x00040002,
	SIM_MT6306_PASS_DAT			= 0x00040003,
	SIM_MT6306_PASS_RST			= 0x00040004,
	SIM_MT6306_PASS_CLK			= 0x00040005,
	SIM_MT6306_BLOCK_CLK			= 0x00040006,
	SIM_MT6306_BLOCK_CLK_BEGIN		= 0x00040007,
	SIM_MT6306_NO_NEED_CLK_BEGIN		= 0x00040008,

	SIM_MT6306_D2D					= 0x00050001,
	SIM_MT6306_D2S					= 0x00050002,
	SIM_MT6306_R2D					= 0x00050003,
	SIM_MT6306_R2R					= 0x00050004,
	SIM_MT6306_R2S					= 0x00050005,
	SIM_MT6306_S2D					= 0x00050006,
	SIM_MT6306_S2R					= 0x00050007,
	SIM_MT6306_S2S					= 0x00050008,
	SIM_MT6306_D2R					= 0x00050009, /*this is only valid in MT6306*/

	SIM_MT6306_CHANGE_LISR		= 0x00060001,
	SIM_MT6306_CHANGE_CARD_STATE	= 0x00060002,
	SIM_MT6306_CHANGE_CURRENT_LISR	= 0x00060003,
	SIM_MT6306_CHANGE_CARD_TYPE	= 0x00060004,

	SIM_MT6306_DRIVER_ACT		= 0x00070001,
	SIM_MT6306_DRIVER_DEACT		= 0x00070002,
	SIM_MT6306_DRIVER_STOPCLK	= 0x00070003,
	SIM_MT6306_DRIVER_STARTCLK	= 0x00070004,
	SIM_MT6306_DRIVER_PDNEN		= 0x00070005,
	SIM_MT6306_DRIVER_PDNDIS	= 0x00070006,
	SIM_MT6306_DRIVER_STOPCLK_BEGIN	= 0x00070007,

	SIM_MT6306_ACTION_RESET		= 0x00080001,
	SIM_MT6306_ACTION_COMMAND	= 0x00080002,
	SIM_MT6306_ACTION_POWOFF	= 0x00080003,
	SIM_MT6306_ACTION_EOC		= 0x00080004,

	SIM_MT6306_TEST_1				= 0x00090001,
	SIM_MT6306_TEST_2				= 0x00090002,
	SIM_MT6306_TEST_3				= 0x00090003,
	SIM_MT6306_TEST_4				= 0x00090004,
	SIM_MT6306_TEST_5				= 0x00090005,
	SIM_MT6306_TEST_6				= 0x00090006,
	SIM_MT6306_TEST_7				= 0x00090007,
	SIM_MT6306_TEST_0				= 0x00090008,
	SIM_MT6306_TEST2_1			= 0x00090021,
	SIM_MT6306_TEST2_2			= 0x00090022,
	SIM_MT6306_TEST2_3			= 0x00090023,
	SIM_MT6306_TEST2_4			= 0x00090024,
	SIM_MT6306_TEST2_5			= 0x00090025,
	SIM_MT6306_TEST2_6			= 0x00090026,
	SIM_MT6306_TEST2_7			= 0x00090027,
	SIM_MT6306_TEST2_0			= 0x00090028,

	SIM_MT6306_CLKSTOP_TIMEOUT	= 0x000a0001,
	SIM_MT6306_CLKSTOP_START	= 0x000a0002,
	SIM_MT6306_CLKSTOP_ABORT	= 0x000a0003,
	SIM_MT6306_CLKSTOP_DEQUE	= 0x000a0004,
	SIM_MT6306_CLKSTOP_STOP 	= 0x000a0005,

	SIM_MT6306_CLKSTART_START	= 0x000b0001,
	SIM_MT6306_CLKSTART_END		= 0x000b0002,
	SIM_MT6306_CLKSTART_HISR	= 0x000b0003,
	SIM_MT6306_CLKSTART_NEW_TRUE	= 0x000b0004,
	SIM_MT6306_CLKSTART_NEW_FALSE	= 0x000b0005,
	SIM_MT6306_CLKSTART_HISR2	= 0x000b0006,

	SIM_MT6306_SPI_WRITE			= 0x000c0001
}sim_MT6306_msgTag;

#if defined(__DRV_2_SIM_USING_MT6306__)

#define	MT6306_CLK_CFG_BLOCKED(simInterface)	((sim_MT6306_card[simInterface].pins.CLK & (0x5<<hw_cb->simSwitchPortNo)) != (0x1<<hw_cb->simSwitchPortNo))

/*MT6306 's pin state is more complicated, if I don't describe it precisely, I may encounter struggle in the future*/
typedef enum{
	sim_MT6306_VCC18VDisable = 0,
	sim_MT6306_VCC3VDisable = 1, 
	sim_MT6306_VCC18V = 4, // I plan to use ((reg_value >> simInterface) & 0x5) to assign the pin state value, thus the enum should be the same as reg value
	sim_MT6306_VCC3V = 5
} sim_MT6306_stateVCC;
	
typedef enum{
	sim_MT6306_DATBlockedHigh = 0,
	sim_MT6306_DATPass_High = 1,	//Data is now pass and controlled by the side that driving, but DATA_L is 0, that is, when we block it will become high
	sim_MT6306_DATBlockedLow = 5,
	sim_MT6306_DATBlockedHigh_Low = 4,	//Data is now block high but DATA_L is 1, that is, when we set DATAEN, it will become block low

	/*in following state, pin is stay in low lv because no ldo supply*/
	sim_MT6306_NoLDO_DATBlockedHigh = 0x10,
	sim_MT6306_NoLDO_DATPass_High = 0x11,
	sim_MT6306_NoLDO_DATBlockedLow = 0x15,
	sim_MT6306_NoLDO_DATBlockedHigh_Low = 0x14
	
} sim_MT6306_stateDAT;

typedef enum{
	sim_MT6306_CLKBlockedLow = 0,
	sim_MT6306_CLKPass = 1, 
	sim_MT6306_CLKBlockedHigh = 5,
	sim_MT6306_CLKInvalidState = 4,

	/*in following state, pin is stay in low lv because no ldo supply*/
	sim_MT6306_NoLDO_CLKBlockedLow = 0x10,
	sim_MT6306_NoLDO_CLKPass = 0x11, 
	sim_MT6306_NoLDO_CLKBlockedHigh = 0x15,
	sim_MT6306_NoLDO_CLKInvalidState = 0x14
} sim_MT6306_stateCLK;

typedef enum{
	sim_MT6306_RSTPass_Low = 0, //RSTVAL is low, that is, when we block RST, it will becomes block low
	sim_MT6306_RSTBlockedLow = 1,
	sim_MT6306_RSTBlockedHigh = 5,
	sim_MT6306_RSTPass_High = 4,//RSTVAL is high, that is, when we block RST, it will becomes block high

	/*in following state, pin is stay in low lv because no ldo supply*/
	sim_MT6306_NoLDO_RSTPass_Low = 0x10, 
	sim_MT6306_NoLDO_RSTBlockedLow = 0x11,
	sim_MT6306_NoLDO_RSTBlockedHigh = 0x15,
	sim_MT6306_NoLDO_RSTPass_High = 0x14
} sim_MT6306_stateRST;

#elif defined (DRV_2_SIM_USING_LTC4558)

typedef enum{
	sim_MT6306_VCCDisable = 0,
	sim_MT6306_VCC18V = 1,
	sim_MT6306_VCC3V = 2,
	sim_MT6306_VCCMaxValue
} sim_MT6306_stateVCC;
	
typedef enum{
	sim_MT6306_DATBlockedHigh = 0,
	sim_MT6306_DATPass = 1,
	sim_MT6306_DATBlockedLow = 2,
	sim_MT6306_DATMaxValue
} sim_MT6306_stateDAT;

typedef enum{
	sim_MT6306_CLKBlockedLow = 0,
	sim_MT6306_CLKPass = 1,
	sim_MT6306_CLKBlockedHigh = 2,
	sim_MT6306_CLKMaxValue
} sim_MT6306_stateCLK;

typedef enum{
	sim_MT6306_RSTBlockedLow = 0,
	sim_MT6306_RSTPass = 1,
	sim_MT6306_RSTBlockedHigh = 2,
	sim_MT6306_RSTMaxValue
} sim_MT6306_stateRST;

#endif

typedef enum{
	sim_MT6306_statusNoError = 0
} sim_MT6306_status;

typedef enum{
	sim_MT6306_eventReset = 0,
	sim_MT6306_eventCommand,
	sim_MT6306_eventPowerOff
} sim_MT6306_changeEvent;

typedef enum{
	sim_MT6306_stateDeactiavate = 0,
	sim_MT6306_stateClkRunning = 1,
	sim_MT6306_stateClkStopped = 2
} sim_MT6306_cardState;

typedef enum{
	sim_MT6306_cardTypeAL = 0,
	sim_MT6306_cardTypeIR = 1,
	sim_MT6306_cardTypeMaxValue
} sim_MT6306_cardType;

typedef enum{
	sim_MT6306_LISRnotRegistered = 0,
	sim_MT6306_LISRUsim = 1,
	sim_MT6306_LISRSim
} sim_MT6306_LISRState;

enum{
	sim_MT6306_protectionChange = 0,
	sim_MT6306_protectionSpi,
	sim_MT6306_protectionCmd,
	sim_MT6306_protectionRst,
	sim_MT6306_protectionPwf,
	sim_MT6306_protectionPdn,
	sim_MT6306_protectionState,
	sim_MT6306_protectionStopper,
	SIM_MT6306_MAX_PROTECTION_NUM
};


/*this is the prototype in MT6302 driver*/
typedef void (*sim_MT6306_SPIWriter)(kal_uint32 chipNo, kal_uint16 data);

/*this is the reader/writer prototype among different I2C solution*/
typedef void (*sim_MT6306_I2CWriter_implementation)(kal_uint8 addr, kal_uint8 data_addr, kal_uint8 data_value);
typedef kal_uint8 (*sim_MT6306_I2CReader_implementation)(kal_uint8 device_addr, kal_uint8 data_addr);


typedef struct{
	sim_MT6306_msgTag		tag;
	kal_uint32					event;
	kal_uint32					data1;
	kal_uint32					data2;
}sim_MT6306_msg;

typedef struct{
	sim_MT6306_stateCLK	CLK;
	sim_MT6306_stateDAT	DAT;
	sim_MT6306_stateRST	RST;
	sim_MT6306_stateVCC	VCC;
}sim_MT6306_pinStatus;

typedef struct{
	sim_MT6306_pinStatus	pins;
	sim_MT6306_cardState	state;
	sim_MT6306_cardType	type;
	sim_MT6306_LISRState	lisrState;
	kal_uint16					baud;
	kal_uint16					config;
	kal_uint32				sim_MT6306_gptHandle;
	kal_bool				sim_MT6306_clkStopQueued;
} sim_MT6306_cardInfo;

typedef struct{
	kal_uint32			MT6306ChipNo; //for which MT6306 chip does this control block stand
	sim_MT6306_SPIWriter	sim_MT6320_writer;
	kal_uint32			sim_MT6306_servingInterface;// the latest interface that controller is serving
	kal_semid			sim_MT6306_arb;
	kal_bool				sim_MT6306_taskAccessing;
	kal_bool				sim_MT6306_needCLKStartTimeout;
	kal_uint8				sim_MT6306_regValue[SIM_MT6306_REG_NUMBER];
	sim_MT6306_LISRState	sim_MT6306_registeredLISR;
	kal_bool				sim_MT6306_needManualControl; /*this flag will only be set true in MT6306*/
	kal_uint8				MT6306_raceConditionProtect[SIM_MT6306_MAX_PROTECTION_NUM];
	kal_bool				sim_workingTaskWaiting; //this is used to know whether serving task is waiting for event
	kal_bool				sim_MT6306_initialized;
#ifdef __SIM_DRV_MULTI_DRV_ARCH__
	sim_HW_cb 			*usim_waitHisrCb_MT6306; //record the hw_cb pointer to whom is using this switch's hisr
	sim_HW_cb 			*sim_waitHisrCb_MT6306; //record the hw_cb pointer to whom is using this switch's hisr
	kal_uint32			nullByteGPTServingInterface;
	/*following is for LCD SPI*/
	kal_uint32	MT6306_SPI_LCDSerialData;
	kal_uint8		MT6306_LCD_pdnHandle; /*lcd_get_power_handle will return value less than 32, set this as RW 0xff*/
#endif
	kal_semid			sim_MT6306_Check_arb;
	kal_bool				sim_MT6306_CLKStopping;
} sim_MT6306_switchInfo;

typedef struct
{
   kal_bool isHandleCmd;
}sim_clockStopMap;

typedef struct
{
   sim_HW_cb *hw_cb;
   kal_bool queued;
}sim_MT6306_clockStopQueueEvent;
extern sim_clockStopMap clockStopMap[DRV_SIM_MAX_LOGICAL_INTERFACE];

#ifndef __SIM_DRV_MULTI_DRV_ARCH__
typedef sim_MT6306_status (*sim_MT6306_eventHandler)(kal_uint32, sim_MT6306_changeEvent);
#else
typedef sim_MT6306_status (*sim_MT6306_eventHandler)(sim_HW_cb *, sim_MT6306_changeEvent);
sim_MT6306_switchInfo *sim_MT6306_get_MT6306switchCB(sim_HW_cb *hw_cb);
sim_MT6306_cardInfo *sim_MT6306_get_MT6306CardCB(sim_HW_cb *hw_cb);
#endif


extern sim_status L1sim_Cmd_Layer_MT6306(kal_uint8  *txData,kal_uint32  *txSize,kal_uint8  *rxData, kal_uint32  *rxSize, sim_HW_cb *hw_cb, kal_bool *isSW6263);
extern kal_uint32 MT6306_getGPIOCLK(void);
extern kal_uint32 MT6306_getGPIODAT(void);
extern void MT6306_Writer_AL(kal_uint8 chipno, kal_uint16 data);
extern void MT6306_i2cInit(sim_MT6306_SPIWriter *spiWritePtr, kal_uint32 chipNo);
extern void sim_PDNDisable_MT6302(sim_HW_cb *hw_cb);
extern void sim_PDNEnable_MT6302(sim_HW_cb *hw_cb);
extern void MT6306_HW_I2C_init(kal_uint8 deviceAddress);
extern void SIM_WaitEvent_MT6306(Sim_Card *SIMCARD,kal_uint32 flag, kal_bool unmaskSIMIntr, sim_HW_cb *hw_cb);
extern void sim_MT6306_manualReset(sim_HW_cb *hw_cb);
extern void SIM_SetEvent_MT6306(Sim_Card *SIMCARD, kal_uint8 result, sim_HW_cb *hw_cb);
#endif //__SIM_MT6306_H__
