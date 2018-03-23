#include "kal_public_api.h"
#include "drv_comm.h"
#include "reg_base.h"

#include "sim_hw_mtk.h"
#include "sim_drv_HW_def_MTK.h"
#include "sim_al.h"
#include "sim_drv_SW_struct.h"
#include "sim_drv_SW_API.h"

#include "sim_drv_SW_function.h"

#include "drv_rstctl.h"
#include "drvpdn.h"
#include "drv_gdma.h"

#define	USIM_ATRSTA_OFF	0x0001

#define USIM_3_3V KAL_TRUE
#ifdef USIM_3_3V
#define	USIM_VOL_CFG	0x1
#else
#define	USIM_VOL_CFG	0x0
#endif

#define	USIM_SMT_NO_ERROR	0x0
#define	USIM_SMT_NO_TS		0x1
#define	USIM_SMT_NO_TOUT	0x2
#define	USIM_SMT_NO_T0END	0x3
#define	USIM_SMT_NO_ATRSTA_OFF	0x4
#define	USIM_SMT_SW_ERROR	0x5
#define	USIM_SMT_COUNT_ERROR	0x6
#define	USIM_SMT_HDMA_ERROR	0x7
#define USIM_SMT_IFCLR_ERROR	0x8
#define USIM_SMT_PPS_ERROR	0x9
#define USIM_SMT_MT6306_ERROR	0xA

// macro
#if defined(MT6595)
#define	USIM_SMT_UPDATE_USIM_IF_FLAG(_if) {					\
	if((_if) == 0)								\
	{									\
		usim_base = SIM_base;						\
		PDN_CLR(PDN_USIM1);						\
		HDMA_PDN_CLR(0);						\
		DRV_WriteReg32(REG_SIM1_PU_PD_SEL, (((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_RST) | (((!SIMx_PD_SEL) | SIMx_PU_PD_50K) << SIMx_DAT) | ((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_CLK))); \
	} else if((_if) == 1)							\
	{									\
		usim_base = SIM2_base;						\
		PDN_CLR(PDN_USIM2);						\
		HDMA_PDN_CLR(1);						\
		DRV_WriteReg32(REG_SIM2_PU_PD_SEL, (((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_RST) | (((!SIMx_PD_SEL) | SIMx_PU_PD_50K) << SIMx_DAT) | ((SIMx_PD_SEL | SIMx_PU_PD_50K) << SIMx_CLK))); \
	} else ASSERT(0);							\
	usim_iftest_sw_reset_usim((_if));					\
} while(0);
#else
#define	USIM_SMT_UPDATE_USIM_IF_FLAG(_if) {					\
	if((_if) == 0)								\
	{									\
		usim_base = SIM_base;						\
		PDN_CLR(PDN_USIM1);						\
		HDMA_PDN_CLR(0);						\
	} else if((_if) == 1)							\
	{									\
		usim_base = SIM2_base;						\
		PDN_CLR(PDN_USIM2);						\
		HDMA_PDN_CLR(1);						\
	} else ASSERT(0);							\
	usim_iftest_sw_reset_usim((_if));					\
} while(0);
#endif

#ifdef __FPGA__
#define	USIM_SMT_DEACTIVATION(_if)	{		\
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)); \
} while(0);
#else
#define	USIM_SMT_DEACTIVATION(_if)	{		\
	DRV_WriteReg32((usim_base + SIM_IRQEN_MTK), SIM_IRQEN_ALLOFF); \
	DRV_WriteReg32((usim_base + SIM_CTRL_MTK), DRV_Reg32(usim_base + SIM_CTRL_MTK) | SIM_CTRL_IFCLR); \
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)); \
	DRV_ICC_PMU_switch((_if), KAL_FALSE);	\
} while(0);
#endif

extern kal_uint32    sim_uncachedTxBuffer0[], sim_uncachedRxBuffer0[], sim_uncachedTxBuffer1[], sim_uncachedRxBuffer1[];

int usim_iftest_for_smt(kal_uint32 hwInterfaceNo);
void usim_iftest_sw_reset_usim(kal_uint32 hwInterfaceNo);

extern kal_char sim_dbg_str[];
// The GPIO number is depend on project
#define EINT1_GPIO 8
#define EINT2_GPIO 9
#define EINT3_GPIO 43
#if  defined(__SIM_HOT_SWAP_SUPPORT__)
#include "ccci_rpc_if.h"
#endif
#include "eint.h"
extern char GPIO_ReadIO(char port);
extern kal_uint32 drv_get_current_time(void);
extern kal_uint32 drv_get_duration_ms(kal_uint32 previous_time);
typedef enum {
	EINT_STATE_INIT,
	EINT_STATE_1, // Samepled High for a period	
	EINT_STATE_2, // Samepled Low for a period	
	EINT_STATE_3, // Samepled High for a period	
}EINT_SampleState;

int usim_EINTTest_for_smt(kal_uint32 hwInterfaceNo)
{
	kal_uint32 GPIOPort=EINT1_GPIO;
	kal_uint32 SampleState=EINT_STATE_INIT;
	kal_uint32 sampleVal;
	
	kal_bool polarity=1,TestDone=0;
	kal_uint32 sampledHigh=0,sampledLow=0;



	kal_uint8 *query, querystring[25] = "MD1_SIM1_HOT_PLUG_EINT";
	query=&querystring[0];
	if(hwInterfaceNo==0)
		GPIOPort=EINT1_GPIO;
	else if(hwInterfaceNo==1)
	{
		GPIOPort=EINT2_GPIO;
		query = (kal_uint8 *)"MD1_SIM2_HOT_PLUG_EINT";
	}
#ifdef SIM_DRV_SWITCH_MT6306
	else if(hwInterfaceNo==2)
	{
		GPIOPort=EINT3_GPIO;
		query = (kal_uint8 *)"MD1_SIM3_HOT_PLUG_EINT";
	}
#endif
	query=query;
#if  defined(__SIM_HOT_SWAP_SUPPORT__)
	kal_int32 ipcStatus = IPC_RPC_EINT_GetAttribute(query, 23, SIM_HOT_PLUG_EINT_POLARITY, (void *)&polarity, 4);
	if (ipcStatus < 0)
	{ 
		ASSERT(0);
	}
#endif

	volatile kal_uint32 t1=drv_get_current_time();
	do
	{
		kal_sleep_task(1);
		GPIOPort=GPIOPort;
		sampleVal= GPIO_ReadIO(GPIOPort);
		//sampleVal= GPIO_ReadIO(202);
		
		if(sampleVal==polarity)
			sampledHigh++;
		else
			sampledLow++;

		//dbg_print("\r\n%x,%d,%d,%d",SampleState,sampleVal,sampledHigh,sampledLow);
		switch(SampleState)
		{
			case EINT_STATE_INIT:
				if(sampledLow>0)
				{
					sampledLow=0;
					sampledHigh=0; // reset high if any low detected
				}
				if(sampledHigh>=30)
				{
					//dbg_print("\r\n%x,%d,%d,%d",SampleState,sampleVal,sampledHigh,sampledLow);
					sampledLow=0;
					SampleState=EINT_STATE_1;
					t1=drv_get_current_time();
				}
				break;
			case EINT_STATE_1:
				if(sampledHigh>0)
				{
					sampledLow=0; // reset Low  if any high detected
					sampledHigh=0; 
				}
				if(sampledLow>=50)
				{
					//dbg_print("\r\n%x,%d,%d,%d",SampleState,sampleVal,sampledHigh,sampledLow);
					sampledHigh=0;
					SampleState=EINT_STATE_2;
					t1=drv_get_current_time();
				}
				break;	
			case EINT_STATE_2:
				if(sampledLow>0)
				{
					sampledLow=0;
					sampledHigh=0; // reset high if any low detected
				}
				if(sampledHigh>=50)
				{
					//dbg_print("\r\n%x,%d,%d,%d",SampleState,sampleVal,sampledHigh,sampledLow);
					sampledLow=0;
					TestDone=1;
					//dbg_print("\r\nDone~~~~~~");
				}				
				break;		
		}
		if(TestDone==1)
			return 0;
		
	}while(drv_get_duration_ms(t1) < 10000);  // 10 Second timeout if no state change
	//dbg_print("\r\nTimeOut!!!!!!");
	return -1;
}
#ifdef SIM_DRV_SWITCH_MT6306
#include "sim_mt6306.h"
extern void MT6306_Writer_GPIO(kal_uint8 device_addr, kal_uint8 data_addr, kal_uint8 data_value);
extern kal_uint8 MT6306_Reader_AL(kal_uint8 chipno, kal_uint16 addr);
extern kal_bool MT6306_ShowReg(int chip);
extern DCL_HANDLE clkHandle, datHandle;;


static int MT6306_validateREG(kal_uint8 chipno,kal_uint8 reg, kal_uint8 writeVal)
{
	kal_uint8 readvalue= MT6306_Reader_AL(chipno, reg);
	if(readvalue!=writeVal)
	{
		kal_sprintf(sim_dbg_str, "[SIM_SMT]MT6306 Error: chip:%d, reg:%x,  Write:%x, Read:%x\n\r",chipno,reg,writeVal,readvalue);
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_MT6306_ERROR;
	}
	return USIM_SMT_NO_ERROR;
}

int MT6306_blockRST(kal_uint8 chipno, kal_uint8 port, kal_uint8 level)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_RST);

	value |= (1 << port);
	value &= ~(4 << port);
	if(level)
		value |= (4 << port);

	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_RST + (chipno * 4), value);
	return MT6306_validateREG(chipno,SIM_MT6306_REG_RST,value);	
}
int MT6306_blockCLK(kal_uint8 chipno, kal_uint8 port)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_CLK);
	value &= ~(1 << port);
	value &= ~(4 << port);
	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_CLK + (chipno * 4), value);
	return MT6306_validateREG(chipno, SIM_MT6306_REG_CLK,value);
}
int MT6306_blockDAT(kal_uint8 chipno, kal_uint8 port)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_DAT);
	value &= ~(1 << port);
	value &= ~(4 << port);
	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_DAT + (chipno * 4), value);
	return MT6306_validateREG(chipno, SIM_MT6306_REG_DAT,value);
}
int MT6306_passRST(kal_uint8 chipno, kal_uint8 port)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_RST);
	value &= ~(1 << port);
	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_RST + (chipno * 4), value);
	return MT6306_validateREG(chipno, SIM_MT6306_REG_RST,value);
}
int MT6306_passCLK(kal_uint8 chipno, kal_uint8 port)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_CLK);

	value |= (1 << port);
	value &= ~(4 << port);

	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_CLK + (chipno * 4), value);
	return MT6306_validateREG(chipno, SIM_MT6306_REG_CLK,value);
}
int MT6306_passDAT(kal_uint8 chipno, kal_uint8 port)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_DAT);
	value |= (1 << port);
	value &= ~(4 << port);
	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_DAT + (chipno * 4), value);
	return MT6306_validateREG(chipno, SIM_MT6306_REG_DAT,value);
}
int MT6306_setVCC(kal_uint8 chipno, kal_uint8 port, kal_uint32 onoff, kal_uint32 level)
{
	kal_uint8 value = MT6306_Reader_AL(chipno, SIM_MT6306_REG_VCC);
	if(onoff == 0)
		value &= ~(4 << port);
	else
		value |= (4 << port);
	if(level == 0)
		value &= ~(1 << port);
	else
		value |= (1 << port);
	MT6306_Writer_GPIO(0x64, SIM_MT6306_REG_VCC + (chipno * 4), value);
	return MT6306_validateREG(chipno, SIM_MT6306_REG_VCC,value);
}
int MT6306_passALLSignal(kal_uint8 chipno, kal_uint8 port)
{
	int result=USIM_SMT_NO_ERROR;
	result|=MT6306_passRST(chipno, port);
	result|=MT6306_passCLK(chipno, port);
	result|=MT6306_passDAT(chipno, port);
	return result;
}
int MT6306_blockALLSignal(kal_uint8 chipno, kal_uint8 port)
{	
	int result=USIM_SMT_NO_ERROR;
	result|=MT6306_blockRST(chipno, port, 0);
	result|=MT6306_blockCLK(chipno, port);
	result|=MT6306_blockDAT(chipno, port);
	return result;
}
int usim_iftest_rx_cmd(kal_uint8* ins, kal_uint8 length,kal_uint8 hwInterfaceNo,kal_uint32 usim_base)
{
	kal_uint32 j=0;
	// clear FIFO
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) | SIM_CTRL_IFCLR;
	j = 0;
	while(DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON);
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str, "[SIM_SMT]: IFCLR ERROR\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_IFCLR_ERROR;
		}
		j++;
	}
	//clear interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
	// 2.0 Select File
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[0];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[1];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[2];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[3];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[4];

	
	if(hwInterfaceNo)
	{
		// HDMA RX (Device to Memory), USIM's Bus Width is Fixed to 8 bits
		DRV_Reg32(REG_HDMA_HDCTRR1) = HDCTRR_RX_SEL0(1) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R1) = (kal_uint32) sim_uncachedRxBuffer1;
		DRV_Reg32(REG_HDMA_HDC0R1) = HDCR_XFER_SIZE0(length) | HDCR_START0;
	}
	else
	{
		// HDMA RX (Device to Memory), USIM's Bus Width is Fixed to 8 bits
		DRV_Reg32(REG_HDMA_HDCTRR0) = HDCTRR_RX_SEL0(1) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R0) = (kal_uint32) sim_uncachedRxBuffer0;
		DRV_Reg32(REG_HDMA_HDC0R0) = HDCR_XFER_SIZE0(length) | HDCR_START0;
	}

	DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = ins[4];
	DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | ins[1]; // Expect to Receive
	
	// Wait Until TX FIFO Empty
	j = 0;
	while(DRV_Reg32(usim_base + SIM_COUNT_MTK) != 0)
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str, "[SIM_SMT]: COUNT ERROR\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_COUNT_ERROR;
		}
		j++;
	}

	// 2.4 Wait for Operation Done (Including Response)
	j = 0;
	while(!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str, "[SIM_SMT]: NO T0END\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_T0END;
		}
		j++;
	}
	j = 0;
	if(hwInterfaceNo)
	{
		while((DRV_Reg32(REG_HDMA_HDSR) & HDMA_STAT0_1))
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str, "[SIM_SMT]: HDMA ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_HDMA_ERROR;
			}
			j++;
		}
		kal_sprintf(sim_dbg_str, "[SIM_SMT]: Get %x %x %x %x %x  %x %x %x %x %x  %x %x %x %x %x\n\r",
		            sim_uncachedRxBuffer1[0], sim_uncachedRxBuffer1[1], sim_uncachedRxBuffer1[2], sim_uncachedRxBuffer1[3], sim_uncachedRxBuffer1[4],
		            sim_uncachedRxBuffer1[5], sim_uncachedRxBuffer1[6], sim_uncachedRxBuffer1[7], sim_uncachedRxBuffer1[8], sim_uncachedRxBuffer1[9],
		            sim_uncachedRxBuffer1[10], sim_uncachedRxBuffer1[11], sim_uncachedRxBuffer1[12], sim_uncachedRxBuffer1[13], sim_uncachedRxBuffer1[14]);
	}
	else
	{
		while((DRV_Reg32(REG_HDMA_HDSR) & HDMA_STAT0_0))
		{
			if(j > 0xFFFFFF)
{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str, "[SIM_SMT]: HDMA ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_HDMA_ERROR;
			}
			j++;
		}
		kal_sprintf(sim_dbg_str, "[SIM_SMT]: Get %x %x %x %x %x  %x %x %x %x %x  %x %x %x %x %x\n\r",
		            sim_uncachedRxBuffer0[0], sim_uncachedRxBuffer0[1], sim_uncachedRxBuffer0[2], sim_uncachedRxBuffer0[3], sim_uncachedRxBuffer0[4],
		            sim_uncachedRxBuffer0[5], sim_uncachedRxBuffer0[6], sim_uncachedRxBuffer0[7], sim_uncachedRxBuffer0[8], sim_uncachedRxBuffer0[9],
		            sim_uncachedRxBuffer0[10], sim_uncachedRxBuffer0[11], sim_uncachedRxBuffer0[12], sim_uncachedRxBuffer0[13], sim_uncachedRxBuffer0[14]);
	}
	//DRV_ICC_print_str(sim_dbg_str);
	
	return USIM_SMT_NO_ERROR;
}
int usim_iftest_for_smt(kal_uint32 interfaceNo)
{
	kal_uint32 hwInterfaceNo = interfaceNo; //interfaceNo will be 0 or 1, mapping to SIM_IF0 or SIM_IF1
	kal_uint32 usim_base = 0;
	kal_uint8 atr_bytes[50]={0};
	kal_uint8 ins[7] = {0xA0, 0xA4, 0x00, 0x00, 0x02, 0x2F, 0xE2};
	//kal_uint8 ins[7] = {0x00, 0xA4, 0x00, 0x00, 0x02, 0x2F, 0xE2};
	kal_uint8 *atr_ptr = atr_bytes + 1;
	kal_uint32 sw1, sw2;
	kal_uint32 i = 0, j = 0;
	kal_uint32 length = 0;

	kal_uint32 PPS_buf[5], cksum = 0xFF, need_PPS = 0, Fi = 0, Di = 0;

	kal_uint32 status, data;

#ifdef SIM_DRV_SWITCH_MT6306
	//hwInterfaceNo will be 0,1,2
	hwInterfaceNo = interfaceNo / 2;
	kal_uint8 port = interfaceNo % 2;
	kal_uint8 chip = hwInterfaceNo;
	
	//Block all chip, all port
	if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(0, 0))
		return USIM_SMT_MT6306_ERROR;
	if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(0, 1))
		return USIM_SMT_MT6306_ERROR;
	if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(1, 0))
		return USIM_SMT_MT6306_ERROR;
	if(USIM_SMT_NO_ERROR!=MT6306_blockALLSignal(1, 0))
		return USIM_SMT_MT6306_ERROR;
	
	if(USIM_SMT_NO_ERROR!=MT6306_setVCC(chip, 0, 0, 0))//turn off port 0
		return USIM_SMT_MT6306_ERROR;
	if(USIM_SMT_NO_ERROR!=MT6306_setVCC(chip, 1, 0, 0))//turn off port 1
		return USIM_SMT_MT6306_ERROR;
	
	kal_sprintf(sim_dbg_str, "[SIM_SMT]hwInterfaceNo:%d, chip:%d, port:%d",hwInterfaceNo,chip,port);
	DRV_ICC_print_str(sim_dbg_str);
#endif

	// 0. Update USIM interface flag
	USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

	
	
	usim_dcb_struct *usim_dcb;
	//Sim_Card *SimCard = GET_SIM_CB(interfaceNo);
	usim_dcb = GET_USIM_CB(interfaceNo);
	if(usim_dcb->present)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: driver status is correct\n\r");
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_NO_ERROR;
	}

	// 1. get ATR STR
#ifdef __FPGA__
#else
	// 1.0 Deactivate SIM
	DRV_ICC_PMU_switch(hwInterfaceNo, KAL_FALSE);
#endif
	DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | (372 << 2);
	DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN);
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) & ~(SIM_CTRL_SIMON);

	// 1.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1
	DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

	// 1.2 Clear Interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 1.3 If TOUT = 1, T0EN/T1EN = 0
	DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_T0EN | SIM_CONF_T1EN | SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (SIM_CONF_TOUTEN | USIM_VOL_CFG);


	// 1.2 Clear Interrupt
	DRV_Reg32(usim_base + SIM_IRQEN_MTK) = DRV_Reg32(usim_base + SIM_IRQEN_MTK) | (SIM_STS_RXERR | SIM_STS_NATR | SIM_STS_RX);


#ifdef SIM_DRV_SWITCH_MT6306
#ifdef USIM_3_3V
	MT6306_setVCC(hwInterfaceNo, port, 1, 1);
#else
	MT6306_setVCC(hwInterfaceNo, port, 1, 0);
#endif
	MT6306_passALLSignal(chip, port);
	//dbg_print("r\nAfter config:");
	//MT6306_ShowReg(chip);

#endif
#ifdef __FPGA__
#else

#ifdef SIM_DRV_SWITCH_MT6306
	DRV_ICC_PMU_setVolt(hwInterfaceNo, CLASS_C_18V);  //Always 1.8v from PMIC

#elif defined( USIM_3_3V)
	DRV_ICC_PMU_setVolt(hwInterfaceNo, CLASS_B_30V);
   #else
	DRV_ICC_PMU_setVolt(hwInterfaceNo, CLASS_C_18V);
   #endif
	DRV_ICC_PMU_switch(hwInterfaceNo, KAL_TRUE);
#endif

	// 1.4 Set SIMON, Activate SIM
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)) | SIM_CTRL_SIMON;

	// 1.5 Wait first bytes of ATR
	j = 0;
	while(!DRV_Reg32(usim_base + SIM_COUNT_MTK))
	{
		if(j > 0xFFFFFF)
		{
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO TS, %x, %d\n\r", usim_base, hwInterfaceNo);
			DRV_ICC_print_str(sim_dbg_str);
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			return USIM_SMT_NO_TS;
		}
		j++;
	}


	// 0.6 Read FIFO Count
	j = 0;
	while (1)
	{
		status = DRV_Reg32(usim_base + SIM_COUNT_MTK);
		// FIFO Non-Empty
		if(status != 0x0)
		{
			for(i = 0; i < status; i++)
			{
				data = DRV_Reg32(usim_base + SIM_DATA_MTK);
				atr_ptr[0] = data;
				atr_ptr++;
			}
		}

		// TOUT Status = 1
		if(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_TOUT)
		{
			// Clear Interrupt
			DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
			// Clear IP's Internal TOUT enable bit
			DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN);
			// End of ATR, # of ATR
			atr_bytes[0] = atr_ptr - atr_bytes - 1;
			break;
		}

		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO TOUT\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_TOUT;
		}
		j++;
	}


	kal_sprintf(sim_dbg_str,"[SIM_SMT]: ATR: ");
	DRV_ICC_print_str(sim_dbg_str);
	for(j = 0; j < atr_bytes[0] ; j++)
	{
		kal_sprintf(sim_dbg_str+j,"%x ",atr_bytes[j + 1]);
	}
	DRV_ICC_print_str(sim_dbg_str);

	if(atr_bytes[3] == ATR_TA1_64)
	{
		Fi = 512;
		Di = 8;
	}
	else if(atr_bytes[3] == ATR_TA1_32)
	{
		Fi = 512;
		Di = 16;
	}
	else if(atr_bytes[3] == ATR_TA1_16)
	{
		Fi = 512;
		Di = 32;
	}
	else if(atr_bytes[3] == ATR_TA1_8)
	{
		Fi = 512;
		Di = 64;
	}

	if(atr_bytes[2] & 0x80) // Is TD1 existed ?
	{
		j = 0;
		if(atr_bytes[2] & 0x10) j++;
		if(atr_bytes[2] & 0x20) j++;
		if(atr_bytes[2] & 0x40) j++;
		if(atr_bytes[2] & 0x80) j++;

		if(atr_bytes[2+j] & 0x01) // is TA2 existed
		{
			if(!(atr_bytes[2+j+1] & 0x10) && !(atr_bytes[2+j+1] & 0x80)) need_PPS = 1;
		}
	}

	if(need_PPS || (atr_bytes[3] != 0x01 && atr_bytes[3] != 0x11 && atr_bytes[2] & 0x10))
	{


		// Set TOUT = 1
		DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (SIM_CONF_TOUTEN | USIM_VOL_CFG);
		// Clear
		DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) | SIM_CTRL_IFCLR;
		j = 0;
		while(DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON);
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: IFCLR ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_IFCLR_ERROR;
			}
			j++;
		}

		// Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1
		DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

		j = 0;
		// Send PPSS
		DRV_Reg32(usim_base + SIM_DATA_MTK) = 0xFF;
		PPS_buf[j++] = 0xFF;

		// Send PPS0
		DRV_Reg32(usim_base + SIM_DATA_MTK) = 0x10;
		cksum ^= 0x10;
		PPS_buf[j++] = 0x10;

		// Send PPS1
		// Propose new Fi, Di
		DRV_Reg32(usim_base + SIM_DATA_MTK) = atr_bytes[3];
		cksum ^= atr_bytes[3];
		PPS_buf[j++] = atr_bytes[3];

        
		// Send PCK
		DRV_Reg32(usim_base + SIM_DATA_MTK) = cksum;
		PPS_buf[j++] = cksum;

		// Wait Until TX FIFO Empty
		j = 0;
		while(DRV_Reg32(usim_base + SIM_COUNT_MTK) != 0)
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: COUNT ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_COUNT_ERROR;
			}
			j++;
		}

		// PPS Exchange RX
		j = 0;
		data = 0;
		while(1)
		{
			status = DRV_Reg32(usim_base + SIM_COUNT_MTK);

			// FIFO Non-Empty
			if(status != 0x0)
			{
				for(i = 0; i < status; i++)
				{
					data = DRV_Reg32(usim_base + SIM_DATA_MTK);
					if(PPS_buf[j++] != data)
					{
						kal_sprintf(sim_dbg_str, "[SIM_SMT]: not consistent:%x %x\n\r", data, PPS_buf[j-1]);
						DRV_ICC_print_str(sim_dbg_str);
						USIM_SMT_DEACTIVATION(hwInterfaceNo);
						return USIM_SMT_PPS_ERROR;
					}
				}
			}	
        
			// TOUT Status = 1
			if(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_TOUT)
			{
				if(data == 0)
				{
					if(DRV_Reg32(usim_base + SIM_COUNT_MTK) == 0x0)
					{
						kal_sprintf(sim_dbg_str, "[SIM_SMT]: USIM does not reply on time\n\r");
						DRV_ICC_print_str(sim_dbg_str);
						USIM_SMT_DEACTIVATION(hwInterfaceNo);
						return USIM_SMT_PPS_ERROR;
					}
                		}

				// Clear Interrupt
				DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
				// Clear IP's Internal TOUT enable bit
				DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (USIM_VOL_CFG);
				break;
			}
		}
		DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | ((Fi / Di) << 2);
		kal_sleep_task(10);
	}

#ifdef SIM_DRV_SWITCH_MT6306
/*MT6306 I2C Stress test*/ 
	for(i=0;i<200;i++)
	{
		int result=0;
		result|=MT6306_blockDAT(chip,  port);
		result|=MT6306_passDAT(chip,  port);
		if(result!=0)
		{
			kal_sprintf(sim_dbg_str, "[SIM_SMT]:[ERROR] MT6306 I2C Stress Test Fail\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_ERROR;
		}		
	}
#endif


#define	EF_ICCID	0x2FE2
	// Clear
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) | SIM_CTRL_IFCLR;
	j = 0;
	while(DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON);
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: IFCLR ERROR\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_IFCLR_ERROR;
		}
		j++;
	}
	// 2.0 Select File of ICCID
	// 2.0 set file id
	ins[5] = (EF_ICCID >> 8) & 0xFF;
	ins[6] = EF_ICCID & 0xFF;

	// 2.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1 (Note: TXTIDE cannot be 0 for DMA)
	DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

	// 2.2 Enable T0
	DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN; 

	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 2.3 Directly Write File ID to USIM FIFO
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[0];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[1];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[2];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[3];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[4];

	if(hwInterfaceNo)
	{
		// HDMA TX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
		//DRV_Reg8(sim_uncachedTxBuffer1 + 0x00) = ins[5];
		//DRV_Reg8(sim_uncachedTxBuffer1 + 0x01) = ins[6];
		kal_mem_cpy((kal_uint8 *)sim_uncachedTxBuffer1,&ins[5],2);
		DRV_Reg32(REG_HDMA_HDCTRR1) = HDCTRR_RX_SEL0(0) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R1) = (kal_uint32) sim_uncachedTxBuffer1;
		DRV_Reg32(REG_HDMA_HDC0R1) = HDCR_XFER_SIZE0(2) | HDCR_START0;
	}
	else
	{
		// HDMA TX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
		//DRV_Reg8(sim_uncachedTxBuffer0 + 0x00) = ins[5];
		//DRV_Reg8(sim_uncachedTxBuffer0 + 0x01) = ins[6];
		kal_mem_cpy((kal_uint8 *)sim_uncachedTxBuffer0,&ins[5],2);
		DRV_Reg32(REG_HDMA_HDCTRR0) = HDCTRR_RX_SEL0(0) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R0) = (kal_uint32) sim_uncachedTxBuffer0;
		DRV_Reg32(REG_HDMA_HDC0R0) = HDCR_XFER_SIZE0(2) | HDCR_START0;
	}

	DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = ins[4];
	DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | SIM_INS_INSD | ins[1]; // Expect to Send

	// 2.4 Wait for Operation Done (Including Response)
	j = 0;
	while(!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT:%d]: NO T0END\n\r", __LINE__);
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_T0END;
		}
		j++;
	}

	// 2.5 Clear Interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 2.6 Check Returned Status Bytes
	sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
	sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK);
	sw2 = sw2;

	if((sw1 & 0xF0) != 0x90 && sw1 != 0x69)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW ERROR %x %x\n\r", sw1, sw2);
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_SW_ERROR;
	}

	if(sw1 == 0x94)
	//if(1)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW:%x %x, use non-HDMA mode to test again\n\r", sw1, sw2);
		DRV_ICC_print_str(sim_dbg_str);
		// 2.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1 (Note: TXTIDE cannot be 0 for DMA)
		DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

		// 2.2 Enable T0
		DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN; 

		// 2.3 Directly Write File ID to USIM FIFO
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[0];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[1];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[2];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[3];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[4];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[5];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[6];

		DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = ins[4];
		DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | SIM_INS_INSD | ins[1]; // Expect to Send

		// 2.4 Wait for Operation Done (Including Response)
		j = 0;
		while(!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO T0END\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_NO_T0END;
			}
			j++;
		}

		// 2.5 Clear Interrupt
		DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

		// 2.6 Check Returned Status Bytes
		sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
		sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK);
		sw2 = sw2;
		//dbg_print("\r\nSW1=%x, SW2=%x", sw1, sw2);
		if(((sw1 & 0xF0) != 0x90 && sw1 != 0x69) || sw1 == 0x94)
		{
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW ERROR %x %x\n\r", sw1, sw2);
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_SW_ERROR;
		}
	
	}

// --

	// 3.0 Get Response
	DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN;

	length = sw2;

	ins[0] = 0xA0;
	ins[1] = 0xC0;
	ins[2] = 0x00;
	ins[3] = 0x00;
	ins[4] = length;
		
	kal_uint32 result=0;
	result=usim_iftest_rx_cmd(ins,ins[4], hwInterfaceNo,usim_base);
	if(result!=USIM_SMT_NO_ERROR)
		return result;

	ins[0] = 0xA0;
	ins[1] = 0xB0;		//Read Record
	ins[2] = 0x00;
	ins[3] = 0x00;
	ins[4] = 0x0A;  	//10 Bytes ICCID
	
	result=usim_iftest_rx_cmd(ins,ins[4], hwInterfaceNo,usim_base);
	if(result!=USIM_SMT_NO_ERROR)
		return result;
	
	kal_uint8  *rxbuf = (kal_uint8  *)sim_uncachedRxBuffer0;
	if(hwInterfaceNo==1)
		rxbuf = (kal_uint8  *)sim_uncachedRxBuffer1;

	kal_sprintf(sim_dbg_str,"[SIM_SMT]: ICCID: ");
	DRV_ICC_print_str(sim_dbg_str);
	for(j = 0; j < 10 ; j++)
	{
		kal_sprintf(sim_dbg_str+j,"%x ",*(rxbuf + j));
	}
	DRV_ICC_print_str(sim_dbg_str);




	
	
	// 2.5 Clear Interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 2.6 Check Returned Status Bytes
	sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
	sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK);
	sw2 = sw2;

	if(sw1 != 0x90)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW ERROR, expt:0x90, real:%x\n\r", sw1);
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_SW_ERROR;
	}
// --

	// 3. Deactivation
	// 3.0 If SIM Aleady Activated, Deactivate it
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON);
	j = 0;
	while(!(DRV_Reg32(usim_base + SIM_ATRSTA_MTK) & USIM_ATRSTA_OFF))
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO ATRSTA OFF\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_ATRSTA_OFF;
		}
		j++;

	}
#ifdef __FPGA__
#else
	DRV_ICC_PMU_switch(hwInterfaceNo, KAL_FALSE);
#ifdef SIM_DRV_SWITCH_MT6306
	MT6306_blockALLSignal(chip, port);
	MT6306_setVCC(hwInterfaceNo, port, 0, 0); //Turn off VSIM
#endif
#endif

	return USIM_SMT_NO_ERROR;
}

#else // #ifdef SIM_DRV_SWITCH_MT6306
int usim_iftest_for_smt(kal_uint32 hwInterfaceNo)
{
	kal_uint32 usim_base = 0;
	kal_uint8 atr_bytes[50];
	kal_uint8 ins[7] = {0xA0, 0xA4, 0x00, 0x00, 0x02, 0x2F, 0xE2};
	kal_uint8 *atr_ptr = atr_bytes + 1;
	kal_uint32 sw1, sw2;
	kal_uint32 i = 0, j = 0;
	kal_uint32 length = 0;

	kal_uint32 PPS_buf[5], cksum = 0xFF, need_PPS = 0, Fi = 0, Di = 0;

	kal_uint32 status, data;

	// 0. Update USIM interface flag
	USIM_SMT_UPDATE_USIM_IF_FLAG(hwInterfaceNo);

	usim_dcb_struct *usim_dcb;
	usim_dcb = GET_USIM_CB(hwInterfaceNo);
	if(usim_dcb->present)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: driver status is correct\n\r");
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_NO_ERROR;
	}

	// 1. get ATR STR
#ifdef __FPGA__
#else
	// 1.0 Deactivate SIM
	DRV_ICC_PMU_switch(hwInterfaceNo, KAL_FALSE);
#endif
	DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | (372 << 2);
	DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN);
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) & ~(SIM_CTRL_SIMON);

	// 1.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1
	DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

	// 1.2 Clear Interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 1.3 If TOUT = 1, T0EN/T1EN = 0
	DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_T0EN | SIM_CONF_T1EN | SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (SIM_CONF_TOUTEN | USIM_VOL_CFG);
#ifdef __FPGA__
#else
   #ifdef USIM_3_3V
	DRV_ICC_PMU_setVolt(hwInterfaceNo, CLASS_B_30V);
   #else
	DRV_ICC_PMU_setVolt(hwInterfaceNo, CLASS_C_18V);
   #endif
	DRV_ICC_PMU_switch(hwInterfaceNo, KAL_TRUE);
#endif

	// 1.4 Set SIMON, Activate SIM
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = (DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON)) | SIM_CTRL_SIMON;

	// 1.5 Wait first bytes of ATR
	j = 0;
	while(!DRV_Reg32(usim_base + SIM_COUNT_MTK))
	{
		if(j > 0xFFFFFF)
		{
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO TS, %x, %d\n\r", usim_base, hwInterfaceNo);
			DRV_ICC_print_str(sim_dbg_str);
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			return USIM_SMT_NO_TS;
		}
		j++;
	}


	// 0.6 Read FIFO Count
	j = 0;
	while (1)
	{
		status = DRV_Reg32(usim_base + SIM_COUNT_MTK);
		// FIFO Non-Empty
		if(status != 0x0)
		{
			for(i = 0; i < status; i++)
			{
				data = DRV_Reg32(usim_base + SIM_DATA_MTK);
				atr_ptr[0] = data;
				atr_ptr++;
			}
		}

		// TOUT Status = 1
		if(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_TOUT)
		{
			// Clear Interrupt
			DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
			// Clear IP's Internal TOUT enable bit
			DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN);
			// End of ATR, # of ATR
			atr_bytes[0] = atr_ptr - atr_bytes - 1;
			break;
		}

		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO TOUT\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_TOUT;
		}
		j++;
	}


	if(atr_bytes[3] == ATR_TA1_64)
	{
		Fi = 512;
		Di = 8;
	}
	else if(atr_bytes[3] == ATR_TA1_32)
	{
		Fi = 512;
		Di = 16;
	}
	else if(atr_bytes[3] == ATR_TA1_16)
	{
		Fi = 512;
		Di = 32;
	}
	else if(atr_bytes[3] == ATR_TA1_8)
	{
		Fi = 512;
		Di = 64;
	}

	if(atr_bytes[2] & 0x80) // Is TD1 existed ?
	{
		j = 0;
		if(atr_bytes[2] & 0x10) j++;
		if(atr_bytes[2] & 0x20) j++;
		if(atr_bytes[2] & 0x40) j++;
		if(atr_bytes[2] & 0x80) j++;

		if(atr_bytes[2+j] & 0x01) // is TA2 existed
		{
			if(!(atr_bytes[2+j+1] & 0x10) && !(atr_bytes[2+j+1] & 0x80)) need_PPS = 1;
		}
	}

	if(need_PPS || (atr_bytes[3] != 0x01 && atr_bytes[3] != 0x11 && atr_bytes[2] & 0x10))
	{


		// Set TOUT = 1
		DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (SIM_CONF_TOUTEN | USIM_VOL_CFG);
		// Clear
		DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) | SIM_CTRL_IFCLR;
		j = 0;
		while(DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON);
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: IFCLR ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_IFCLR_ERROR;
			}
			j++;
		}

		// Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1
		DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

		j = 0;
		// Send PPSS
		DRV_Reg32(usim_base + SIM_DATA_MTK) = 0xFF;
		PPS_buf[j++] = 0xFF;

		// Send PPS0
		DRV_Reg32(usim_base + SIM_DATA_MTK) = 0x10;
		cksum ^= 0x10;
		PPS_buf[j++] = 0x10;

		// Send PPS1
		// Propose new Fi, Di
		DRV_Reg32(usim_base + SIM_DATA_MTK) = atr_bytes[3];
		cksum ^= atr_bytes[3];
		PPS_buf[j++] = atr_bytes[3];

        
		// Send PCK
		DRV_Reg32(usim_base + SIM_DATA_MTK) = cksum;
		PPS_buf[j++] = cksum;

		// Wait Until TX FIFO Empty
		j = 0;
		while(DRV_Reg32(usim_base + SIM_COUNT_MTK) != 0)
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: COUNT ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_COUNT_ERROR;
			}
			j++;
		}

		// PPS Exchange RX
		j = 0; data = 0;
		while(1)
		{
			status = DRV_Reg32(usim_base + SIM_COUNT_MTK);

			// FIFO Non-Empty
			if(status != 0x0)
			{
				for(i = 0; i < status; i++)
				{
					data = DRV_Reg32(usim_base + SIM_DATA_MTK);
					if(PPS_buf[j++] != data)
					{
						kal_sprintf(sim_dbg_str, "[SIM_SMT]: not consistent:%x %x\n\r", data, PPS_buf[j-1]);
						DRV_ICC_print_str(sim_dbg_str);
						USIM_SMT_DEACTIVATION(hwInterfaceNo);
						return USIM_SMT_PPS_ERROR;
					}
				}
			}	
        
			// TOUT Status = 1
			if(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_TOUT)
			{
				if(data == 0)
				{
					if(DRV_Reg32(usim_base + SIM_COUNT_MTK) == 0x0)
					{
						kal_sprintf(sim_dbg_str, "[SIM_SMT]: USIM does not reply on time\n\r");
						DRV_ICC_print_str(sim_dbg_str);
						USIM_SMT_DEACTIVATION(hwInterfaceNo);
						return USIM_SMT_PPS_ERROR;
					}
                		}

				// Clear Interrupt
				DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);
				// Clear IP's Internal TOUT enable bit
				DRV_Reg32(usim_base + SIM_CONF_MTK) = (DRV_Reg32(usim_base + SIM_CONF_MTK) & ~(SIM_CONF_TOUTEN | USIM_VOL_CFG)) | (USIM_VOL_CFG);
				break;
			}
		}
		DRV_Reg32(usim_base + SIM_BRR_MTK) = (DRV_Reg32(usim_base + SIM_BRR_MTK) & 0x3) | ((Fi / Di) << 2);
		kal_sleep_task(10);
	}


#define	EF_ICCID	0x2FE2
	// Clear
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) | SIM_CTRL_IFCLR;
	j = 0;
	while(DRV_Reg32(usim_base + SIM_CONFSTA_MTK) & SIM_CONFSTA_IFCLR_ON);
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: IFCLR ERROR\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_IFCLR_ERROR;
		}
		j++;
	}
	// 2.0 Select File of ICCID
	// 2.0 set file id
	ins[5] = (EF_ICCID >> 8) & 0xFF;
	ins[6] = EF_ICCID & 0xFF;

	// 2.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1 (Note: TXTIDE cannot be 0 for DMA)
	DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

	// 2.2 Enable T0
	DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN; 

	// 2.3 Directly Write File ID to USIM FIFO
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[0];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[1];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[2];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[3];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[4];

	if(hwInterfaceNo)
	{
		// HDMA TX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
		DRV_Reg8(sim_uncachedTxBuffer1 + 0x00) = ins[5];
		DRV_Reg8(sim_uncachedTxBuffer1 + 0x01) = ins[6];
		DRV_Reg32(REG_HDMA_HDCTRR1) = HDCTRR_RX_SEL0(0) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R1) = (kal_uint32) sim_uncachedTxBuffer1;
		DRV_Reg32(REG_HDMA_HDC0R1) = HDCR_XFER_SIZE0(2) | HDCR_START0;
	} else
	{
		// HDMA TX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
		DRV_Reg8(sim_uncachedTxBuffer0 + 0x00) = ins[5];
		DRV_Reg8(sim_uncachedTxBuffer0 + 0x01) = ins[6];
		DRV_Reg32(REG_HDMA_HDCTRR0) = HDCTRR_RX_SEL0(0) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R0) = (kal_uint32) sim_uncachedTxBuffer0;
		DRV_Reg32(REG_HDMA_HDC0R0) = HDCR_XFER_SIZE0(2) | HDCR_START0;
	}

	DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = ins[4];
	DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | SIM_INS_INSD | ins[1]; // Expect to Send

	// 2.4 Wait for Operation Done (Including Response)
	j = 0;
	while(!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT:%d]: NO T0END\n\r", __LINE__);
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_T0END;
		}
		j++;
	}

	// 2.5 Clear Interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 2.6 Check Returned Status Bytes
	sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
	sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK); sw2 = sw2;

	if((sw1 & 0xF0) != 0x90 && sw1 != 0x69)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW ERROR %x %x\n\r", sw1, sw2);
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_SW_ERROR;
	}

	if(sw1 == 0x94)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW:%x %x, use non-HDMA mode to test again\n\r", sw1, sw2);
		DRV_ICC_print_str(sim_dbg_str);
		// 2.1 Set RXTIDE of SIM_TIDE to 0 and TXTIDE to 1 (Note: TXTIDE cannot be 0 for DMA)
		DRV_Reg32(usim_base + SIM_TIDE_MTK) = (DRV_Reg32(usim_base + SIM_TIDE_MTK) & (~SIM_TIDE_RXMASK) & (~SIM_TIDE_TXMASK)) | 0x0100;

		// 2.2 Enable T0
		DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN; 

		// 2.3 Directly Write File ID to USIM FIFO
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[0];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[1];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[2];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[3];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[4];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[5];
		DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[6];

		DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = ins[4];
		DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | SIM_INS_INSD | ins[1]; // Expect to Send

		// 2.4 Wait for Operation Done (Including Response)
		j = 0;
		while(!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO T0END\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_NO_T0END;
			}
			j++;
		}

		// 2.5 Clear Interrupt
		DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

		// 2.6 Check Returned Status Bytes
		sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
		sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK); sw2 = sw2;

		if(((sw1 & 0xF0) != 0x90 && sw1 != 0x69) || sw1 == 0x94)
		{
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW ERROR %x %x\n\r", sw1, sw2);
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_SW_ERROR;
		}
	}

// --

	// 3.0 Get Response
	DRV_Reg32(usim_base + SIM_CONF_MTK) = DRV_Reg32(usim_base + SIM_CONF_MTK) | SIM_CONF_T0EN;

	length = sw2;

	ins[0] = 0xA0;
	ins[1] = 0xC0;
	ins[2] = 0x00;
	ins[3] = 0x00;
	ins[4] = length;
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[0];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[1];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[2];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[3];
	DRV_Reg32(usim_base + SIM_DATA_MTK) = ins[4];

	if(hwInterfaceNo)
	{
		// HDMA RX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
		DRV_Reg32(REG_HDMA_HDCTRR1) = HDCTRR_RX_SEL0(1) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R1) = (kal_uint32) sim_uncachedRxBuffer1;
		DRV_Reg32(REG_HDMA_HDC0R1) = HDCR_XFER_SIZE0(length) | HDCR_START0;
	} else
	{
		// HDMA RX (Memory to Device), USIM's Bus Width is Fixed to 8 bits
		DRV_Reg32(REG_HDMA_HDCTRR0) = HDCTRR_RX_SEL0(1) | HDCTRR_BST_SIZE(HDCTRR_BST_SIZE_16) | HDCTRR_DEV_BUS_WIDTH(HDCTRR_BUS_WIDTH_8) | HDCTRR_MEM_BUS_WIDTH(HDCTRR_BUS_WIDTH_32);
		DRV_Reg32(REG_HDMA_HPRGA0R0) = (kal_uint32) sim_uncachedRxBuffer0;
		DRV_Reg32(REG_HDMA_HDC0R0) = HDCR_XFER_SIZE0(length) | HDCR_START0;
	}

	DRV_Reg32(usim_base + SIM_COMDLEN_MTK) = ins[4];
	DRV_Reg32(usim_base + SIM_COMDCTRL_MTK) = SIM_INS_START | ins[1]; // Expect to Receive

	// Wait Until TX FIFO Empty
	j = 0;
	while (DRV_Reg32(usim_base + SIM_COUNT_MTK) != 0)
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: COUNT ERROR\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_COUNT_ERROR;
		}
		j++;
	}

	// 2.4 Wait for Operation Done (Including Response)
	j = 0;
	while(!(DRV_Reg32(usim_base + SIM_STS_MTK) & SIM_STS_T0END))
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO T0END\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_T0END;
		}
		j++;
	}

	j = 0;
	if(hwInterfaceNo)
	{
		while((DRV_Reg32(REG_HDMA_HDSR) & HDMA_STAT0_1))
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: HDMA ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_HDMA_ERROR;
			}
			j++;
		}
		kal_sprintf(sim_dbg_str, "[SIM_SMT]: Get %x %x %x %x %x  %x %x %x %x %x  %x %x %x %x %x\n\r",
			sim_uncachedRxBuffer1[0], sim_uncachedRxBuffer1[1], sim_uncachedRxBuffer1[2], sim_uncachedRxBuffer1[3], sim_uncachedRxBuffer1[4],
			sim_uncachedRxBuffer1[5], sim_uncachedRxBuffer1[6], sim_uncachedRxBuffer1[7], sim_uncachedRxBuffer1[8], sim_uncachedRxBuffer1[9],
			sim_uncachedRxBuffer1[10], sim_uncachedRxBuffer1[11], sim_uncachedRxBuffer1[12], sim_uncachedRxBuffer1[13], sim_uncachedRxBuffer1[14]);
	} else
	{
		while((DRV_Reg32(REG_HDMA_HDSR) & HDMA_STAT0_0))
		{
			if(j > 0xFFFFFF)
			{
				USIM_SMT_DEACTIVATION(hwInterfaceNo);
				kal_sprintf(sim_dbg_str,"[SIM_SMT]: HDMA ERROR\n\r");
				DRV_ICC_print_str(sim_dbg_str);
				return USIM_SMT_HDMA_ERROR;
			}
			j++;
		}
		kal_sprintf(sim_dbg_str, "[SIM_SMT]: Get %x %x %x %x %x  %x %x %x %x %x  %x %x %x %x %x\n\r",
			sim_uncachedRxBuffer0[0], sim_uncachedRxBuffer0[1], sim_uncachedRxBuffer0[2], sim_uncachedRxBuffer0[3], sim_uncachedRxBuffer0[4],
			sim_uncachedRxBuffer0[5], sim_uncachedRxBuffer0[6], sim_uncachedRxBuffer0[7], sim_uncachedRxBuffer0[8], sim_uncachedRxBuffer0[9],
			sim_uncachedRxBuffer0[10], sim_uncachedRxBuffer0[11], sim_uncachedRxBuffer0[12], sim_uncachedRxBuffer0[13], sim_uncachedRxBuffer0[14]);
	}
	DRV_ICC_print_str(sim_dbg_str);

	// 2.5 Clear Interrupt
	DRV_Reg32(usim_base + SIM_STS_MTK) = DRV_Reg32(usim_base + SIM_STS_MTK);

	// 2.6 Check Returned Status Bytes
	sw1 = DRV_Reg32(usim_base + SIM_SW1_MTK);
	sw2 = DRV_Reg32(usim_base + SIM_SW2_MTK); sw2 = sw2;

	if(sw1 != 0x90)
	{
		kal_sprintf(sim_dbg_str,"[SIM_SMT]: SW ERROR, expt:0x90, real:%x\n\r", sw1);
		DRV_ICC_print_str(sim_dbg_str);
		return USIM_SMT_SW_ERROR;
	}
// --

	// 3. Deactivation
	// 3.0 If SIM Aleady Activated, Deactivate it
	DRV_Reg32(usim_base + SIM_CTRL_MTK) = DRV_Reg32(usim_base + SIM_CTRL_MTK) & (~SIM_CTRL_SIMON);
	j = 0;
	while(!(DRV_Reg32(usim_base + SIM_ATRSTA_MTK) & USIM_ATRSTA_OFF))
	{
		if(j > 0xFFFFFF)
		{
			USIM_SMT_DEACTIVATION(hwInterfaceNo);
			kal_sprintf(sim_dbg_str,"[SIM_SMT]: NO ATRSTA OFF\n\r");
			DRV_ICC_print_str(sim_dbg_str);
			return USIM_SMT_NO_ATRSTA_OFF;
		}
		j++;

	}
#ifdef __FPGA__
#else
	DRV_ICC_PMU_switch(hwInterfaceNo, KAL_FALSE);
#endif

	return USIM_SMT_NO_ERROR;
}
#endif
void usim_iftest_sw_reset_usim(kal_uint32 hwInterfaceNo)
{
#if defined(MT6290)
	if(hwInterfaceNo == 0) drv_rstctl_sw_reset(RST_USIM0);
	else drv_rstctl_sw_reset(RST_USIM1);
#elif defined(MT6595)
#elif defined(MT6752)
#elif defined(MT6735)
#endif
	return;
}
