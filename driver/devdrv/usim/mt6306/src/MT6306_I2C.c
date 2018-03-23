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
 * MT6302_interface.C
 *
 * Project:
 * --------
 *   Gemini
 *
 * Description:
 * ------------
 *   this file is to be adaption layer for different SPI implementation
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef DRV_SIM_OFF
#include	"drv_comm.h"
#include	"reg_base.h"
//#include	"gpio_sw.h"
#include  "sim_reg_adp.h"
#include	"mt6306_i2c.h"
//#include	"mt63062.h"
#include "sim_sw_comm.h"
#include "sim_mt6306.h"
#include "dcl.h"
#include "dcl_sim_gpio.h"
#include "drv_features.h"

#if defined(SIM_DRV_SWITCH_MT6306)
kal_uint32 MT6306_initDelayTime;
extern kal_bool spiWriterFlag;
extern kal_uint32 MT6306_getGPIODAT(void);
extern kal_uint32 MT6306_getGPIOCLK(void);
extern kal_char sim_dbg_str[];

/*MT6306_I2C.c and MT6306_HW_I2C.c are too couple, I don't want to use header file to define the prototype*/
extern void MT6306_HW_I2C_writer(kal_uint8 addr, kal_uint8 data_addr, kal_uint8 data_value);
extern kal_uint8 MT6306_HW_I2C_reader(kal_uint8 device_addr, kal_uint8 data_addr);

//extern void sim_MT63062_CacheRegVal(kal_uint32 chipNo, kal_uint8 addr, kal_uint8 value);
extern kal_uint32 MT6306_geti2cInterface(kal_uint32 MT6306Interface);
extern sim_HW_cb *retreiveQueuedCb(kal_uint32 i);
extern kal_uint8 MT6306_getDeviceAddr(void);
extern kal_uint32 MT6306_getVIOLevel();
extern void sim_MT63062_TakeI2Csem(void);
extern void  sim_MT63062_GiveI2Csem(void) ;
#define MT6306_SIM_GPIO_VCC_DELAY             500
#define MT6306_SIM_GPIO_PIN_GROUP_REG       0x1A

extern kal_bool spiWriterGptTimeoutFlag;
typedef struct
{
	kal_uint16 drive_high;
	kal_uint32 drive_low;
	kal_uint16 dir;
	kal_uint16 gpi_val;
	kal_uint8  pin_group;
	kal_uint16  vcc;
	kal_uint16  voltH;
	kal_uint16  voltL;
} mt6306_simgpio_reg_table;
mt6306_simgpio_reg_table regTable[] =
{
	{0x015, 0x010, 0x012, 0x0A0, 0x0, 0x032, 0x030, 0x022},
	{0x005, 0x000, 0x002, 0x0B0, 0x0, 0x032, 0x030, 0x022},
	{0x021, 0x020, 0x080, 0x0C0, 0x0, 0x032, 0x030, 0x022},

	{0x01A, 0x011, 0x013, 0x0A1, 0x1, 0x033, 0x031, 0x023},
	{0x00A, 0x001, 0x003, 0x0B1, 0x1, 0x033, 0x031, 0x023},
	{0x022, 0x021, 0x081, 0x0C1, 0x1, 0x033, 0x031, 0x023},

	{0x055, 0x050, 0x052, 0x0A2, 0x2, 0x072, 0x070, 0x062},
	{0x045, 0x040, 0x042, 0x0B2, 0x2, 0x072, 0x070, 0x062},
	{0x061, 0x060, 0x082, 0x0C2, 0x2, 0x072, 0x070, 0x062},

	{0x05A, 0x051, 0x053, 0x0A3, 0x3, 0x073, 0x071, 0x063},
	{0x04A, 0x041, 0x043, 0x0B3, 0x3, 0x073, 0x071, 0x063},
	{0x062, 0x061, 0x083, 0x0C3, 0x3, 0x073, 0x071, 0x063},

	{0x0, 0x0, 0x0, 0x0D2, 0x0, 0x0, 0x0, 0x0},
	{0x0, 0x0, 0x0, 0x0D3, 0x0, 0x0, 0x0, 0x0},
	{0x0, 0x0, 0x0, 0x0D0, 0x0, 0x0, 0x0, 0x0},

	{0x0, 0x0, 0x0, 0x0D1, 0x0, 0x0, 0x0, 0x0},
	{0x0, 0x0, 0x0, 0x0E0, 0x0, 0x0, 0x0, 0x0},
	{0x0, 0x0, 0x0, 0x0E1, 0x0, 0x0, 0x0, 0x0},
};

sim_MT6306_I2CWriter_implementation I2CWriterPtr;
sim_MT6306_I2CReader_implementation I2CReaderPtr;
DCL_HANDLE clkHandle, datHandle;

//******************************************************************//
//                                                                  //
//                   adaptation layer                               //
//******************************************************************//

/*This is an adaptation layer of all kinds of MT6306 writer, all of MT6306 related driver should call this writer.*/
void MT6306_Writer_AL(kal_uint8 chipno, kal_uint16 data)
{
	kal_uint16 tmpaddr = 0;
	kal_uint8 addr, value;
#if defined(__ARMCC_VERSION)
	kal_uint32 retAddr;
#else
	void	*retAddr;
#endif
	DRV_GET_RET_ADDR(retAddr);
	sim_addMsg(0x11042001, chipno,  data, (kal_uint32)retAddr);

	/*
		data is a 12 bit value, use uint16 to store its value, its format is :
		|	11:8		|	7:4		|	3:0		|
		addr_high	addr_low		data

		and we want to send data to MT6306 as following format:
		|S    |7:1        |W  |A   |11:8		 |7:4		 |A  |all zero,7:4|3:0	|A  |S
	   start device addr R/W ack  addr_high addr_low ack stuff 0		 data ack stop
	*/

	/*handling address swap*/

	/*handling address swap*/
	tmpaddr = (data & 0xFF0);
	addr = (kal_uint8)(tmpaddr >> 4);   //MT6306 I2C Spec.
	value = (kal_uint8)(data & 0x0F);

	if(addr <= 3)
	{
		if(chipno == 1)
		{
			addr = addr + 4;
		}
	}

	I2CWriterPtr(MT6306_getDeviceAddr(), addr, value);// MT6306_Writer_GPIO
}

/*This is an adaptation layer of all kinds of MT6306 writer, all of MT6306 related driver should call this writer.*/
kal_uint8 MT6306_Reader_AL(kal_uint8 chipno, kal_uint16 addr)
{
	kal_uint8 readValue;
	if(addr <= 3)
	{
		if(chipno == 1)
		{
			addr = addr + 4;
		}
	}

	readValue = I2CReaderPtr(chipno, addr);
	return readValue;
}


//******************************************************************//
//                                                                  //
//                   Implement software I2C                         //
//******************************************************************//
void MT6306_GPIO_init(kal_uint8 deviceAddress)
{
	/* in order to confirm GPIO had been configre correctly.
	   we set mode and direction at each Writer_GPIO/Read_GPIO
	   operation. It will avoid share pin issue */
	datHandle = DclGPIO_Open(DCL_GPIO, MT6306_getGPIODAT());

	DclGPIO_Control(datHandle, GPIO_CMD_ENABLE_PULL, NULL);
	DclGPIO_Control(datHandle, GPIO_CMD_SET_PULL_HIGH, NULL);
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	
	DclGPIO_Control(datHandle, GPIO_CMD_SET_MODE_0, 0);
	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_OUT, NULL);
	

	clkHandle = DclGPIO_Open(DCL_GPIO, MT6306_getGPIOCLK());
	
	DclGPIO_Control(clkHandle, GPIO_CMD_ENABLE_PULL, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_SET_PULL_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);

	
	DclGPIO_Control(clkHandle, GPIO_CMD_SET_MODE_0, 0);
	DclGPIO_Control(clkHandle, GPIO_CMD_SET_DIR_OUT, NULL);
	
// kal_sprintf(sim_dbg_str,"MT6306_Writer_GPIO(%x, %x)",clkHandle, datHandle);
// kal_print(sim_dbg_str);
}
void Delay(kal_uint16 index)
{
	kal_uint16 counter;
	for(counter = 0; counter <= index; counter++)
	{
		counter = counter;
	}
}

/*
*  MT6306_Writer_GPIO
*
* DESCRIPTION
*     The function is used to write MT6306 register by GPIO
*
* CALLS
*
* PARAMETERS
*  None
*
* RETURNS
*  None
*
* GLOBALS AFFECTED
*   external_global
*/

void MT6306_Writer_GPIO(kal_uint8 device_addr, kal_uint8 data_addr, kal_uint8 data_value)
{
	kal_uint32 j = 3;
	/* not to open datHandle and clkHandle at here because it cause (414)DRVHISR
	   assertion */
	//i = SaveAndSetIRQMask();
	//I2C start
	/*send start bit*/

//dbg_print("\r\n[%s]Addr:%x,value:%x\r\n ", __func__,data_addr,data_value);

	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//SlaveAddr 0x64 = 1100100'b
	/*send dat 1*/
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	/*send dat 1*/
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	/*send dat 0*/
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	//R/W
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	//ACK, in I2C protocol, the sender should wait for ACK here, but not send the ACK bit
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	/*send data*/
	//Address
	if(data_addr & 0x80)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit7
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}
	if(data_addr & 0x40)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit6
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_addr & 0x20)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit5
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_addr & 0x10)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit4
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_addr & 0x08)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit3
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_addr & 0x04)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit2
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_addr & 0x02)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit1
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_addr & 0x01)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit0
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	//ACK
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	//data
	if(data_value & 0x80)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit7
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x40)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit6
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x20)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit5
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x10)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit4
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x08)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit3
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x04)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit2
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x02)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit1
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	if(data_value & 0x01)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		//bit0
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	//ACK
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);

	//STOP
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);

//	DclGPIO_Close(datHandle);
//	DclGPIO_Close(clkHandle);
	//RestoreIRQMask(i);
}

/*
* FUNCTION
*  MT6306_Read_GPIO
*
* DESCRIPTION
*     The function is used to read MT6306 register by GPIO
*
* CALLS
*     readValue = MT6306_Reader_AL(0,0x10); read register 0x10h
* PARAMETERS
*  None
*
* RETURNS
*  None
*
* GLOBALS AFFECTED
*   external_global
*/
kal_uint8 MT6306_Read_GPIO(kal_uint8 device_addr, kal_uint8 data_addr)
{
	kal_uint32 j = 3;
	kal_uint8 value = 0, bTmp = 0;
	DCL_CTRL_DATA_T i2cDat;
	GPIO_CTRL_READ_T	*prRead;

	/* not to open datHandle and clkHandle at here because it cause (414)DRVHISR
	   assertion */
	value = value;
	//i = SaveAndSetIRQMask();

	//I2C start
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//SlaveAddr 0x64
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//R/W
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//ACK
	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_IN, 0);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_OUT, 0);
	Delay(j);

	//Address
	if(data_addr & 0x80)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x40)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x20)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x10)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x08)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x04)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x02)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
	}

	if(data_addr & 0x01)
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}
	else
	{
		DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	}

	//ACK
	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_IN, 0);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_OUT, 0);
	Delay(j);

	//I2C start
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//SlaveAddr 0x64
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//R/W
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//ACK
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_IN, 0);
	//Read word data
	for(bTmp = 0; bTmp < 8; bTmp++)
	{
		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
		Delay(j);
		/* reset SDA data */
		i2cDat.rRead.u1IOData = 0;

		DclGPIO_Control(datHandle, GPIO_CMD_READ, &i2cDat);
		Delay(j);
		prRead = &(i2cDat.rRead);

		if(prRead->u1IOData)
		{
			value |= (1 << (7 - bTmp));
		}
		else
		{
			value |= (0 << (7 - bTmp));
		}

		DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
		Delay(2 * j);
	}

	//noACK
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(datHandle, GPIO_CMD_SET_DIR_OUT, 0);

	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);

	//STOP
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_LOW, NULL);
	Delay(j);
	DclGPIO_Control(clkHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);
	i2cDat.rWriteSpi.data = 1;
	DclGPIO_Control(datHandle, GPIO_CMD_WRITE_HIGH, NULL);
	Delay(j);

	//RestoreIRQMask(i);

	return (value);
}

void MT6306_i2cInit(sim_MT6306_SPIWriter *spiWritePtr, kal_uint32 chipNo)
{
	kal_uint32 i, j;
	kal_uint8 readValue = 0;
	j = drv_get_current_time();
	for(i = 3000; i > 0; i--);
	readValue = readValue;

	MT6306_initDelayTime = drv_get_duration_tick(j, drv_get_current_time());

	/*no matter which I2C solution we used, the writer pointer of MT6302 driver should point to writer adaptation*/
	*spiWritePtr = (sim_MT6306_SPIWriter)MT6306_Writer_AL;

	if(MT6306_I2C_USE_DEDICATED_GPIO == MT6306_geti2cInterface(chipNo)) //MT6306_I2C_USE_DEDICATED_GPIO
	{
		MT6306_GPIO_init(MT6306_getDeviceAddr());
		I2CWriterPtr = MT6306_Writer_GPIO;
		I2CReaderPtr = MT6306_Read_GPIO;
	}
	else if(MT6306_I2C_USE_HW_I2C == MT6306_geti2cInterface(chipNo))
	{
		MT6306_HW_I2C_init(MT6306_getDeviceAddr());
		I2CWriterPtr = MT6306_HW_I2C_writer;
		I2CReaderPtr = MT6306_HW_I2C_reader;
	}

	if(MT6306_VIO_1V8 == MT6306_getVIOLevel())
	{
		MT6306_Writer_AL(0, 0x108); // set VIOLVL = 1.8V
		//readValue = MT6306_Reader_AL(0,0x10);		
	}
}

/*************************************************************************
* FUNCTION
*	MT6306_GPIO_checkClkStopQueue
*
* DESCRIPTION
*	This function implements check clock stop queue when SIMGPIO access done.
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
void MT6306_GPIO_checkClkStopQueue(void)
{
	/*borrow the task context to stop the queued Clk stop event*/
	int i;
	sim_HW_cb *queuedCb;

	for(i = 0; 4 > i; i++)
	{
		queuedCb = retreiveQueuedCb(i);
		if(queuedCb != NULL)
		{
			sim_MT6306_clkStopper(queuedCb);
		}
	}
	spiWriterGptTimeoutFlag = KAL_FALSE;
}

/*************************************************************************
* FUNCTION
*	MT6306_GPIO_InitIO
*
* DESCRIPTION
*	This function implements SIMGPIO direction output/input mode.
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
void MT6306_GPIO_InitIO(kal_uint16 dir, kal_uint16 port)
{
	kal_uint8 Reg = 0, chipno = 1, addr = 0, offset = 0;
	kal_uint16 tmpaddr = 0, dir_val = 0;

	dir_val = regTable[port].dir;
	tmpaddr = (dir_val & 0xFF0);
	addr = (kal_uint8)(tmpaddr >> 4);	//MT6306 I2C Spec.
	offset = dir & 0xF;
	if(addr <= 3)
	{
		chipno = 0;
	}

	sim_MT63062_TakeI2Csem();
	/* used to check if any context access Writer interface */
	if(spiWriterFlag == KAL_TRUE)
		ASSERT(0);
	spiWriterFlag = KAL_TRUE;

	if(dir == KAL_TRUE)
	{
		Reg = MT6306_Reader_AL(chipno, addr);
		Reg |= 1 << offset;

		MT6306_Writer_AL(chipno, ((addr << 4) | Reg));
	}
	else
	{
		Reg = MT6306_Reader_AL(chipno, addr);
		Reg &= ~(1 << offset);

		MT6306_Writer_AL(chipno, ((addr << 4) | Reg));
	}
	if(spiWriterGptTimeoutFlag == KAL_TRUE)
	{
		MT6306_GPIO_checkClkStopQueue();
	}
	spiWriterFlag = KAL_FALSE;
	sim_MT63062_GiveI2Csem();

}

/*************************************************************************
* FUNCTION
*	MT6306_GPIO_SelPinGroup
*
* DESCRIPTION
*	This function implements SIMGPIO ping group selection(only GPIO1~12).
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
void MT6306_GPIO_SelPinGroup(kal_uint8 pg)
{
	kal_uint8 Reg = 0;
	Reg = MT6306_Reader_AL(1, MT6306_SIM_GPIO_PIN_GROUP_REG);
	Reg |= 1 << pg;
	MT6306_Writer_AL(1, ((MT6306_SIM_GPIO_PIN_GROUP_REG << 4) | Reg)); //chipno don't care
}

/*************************************************************************
* FUNCTION
*	MT6306_GPIO_TurnOnVcc
*
* DESCRIPTION
*	This function implements SIMGPIO turn on/off VCC(VCC1~4).
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
void MT6306_GPIO_TurnOnVcc(kal_bool on, kal_uint8 volt, kal_uint8 port)
{
	kal_uint8 Reg = 0, chipno = 1, addr = 0, offset = 0, voltH = 0, voltL = 0;
	kal_uint8 voltHaddr = 0, VoltHoffset = 0, voltLaddr = 0, VoltLoffset = 0;
	kal_uint16 tmpaddr = 0, tmpvoltHAddr = 0, tmpvoltLAddr = 0, pg = 0, vcc_val = 0;

	pg = regTable[port].pin_group;
	vcc_val = regTable[port].vcc;
	voltH = regTable[port].voltH;
	voltL = regTable[port].voltL;

	tmpaddr = (vcc_val & 0xFF0);
	addr = (kal_uint8)(tmpaddr >> 4);	//MT6306 I2C Spec.
	offset = vcc_val & 0xF;
	if(addr <= 3)
	{
		chipno = 0;
	}


	
	sim_MT63062_TakeI2Csem();
	/* used to check if any context access Writer interface */
	if(spiWriterFlag == KAL_TRUE)
		ASSERT(0);
	spiWriterFlag = KAL_TRUE;
	if(on == KAL_TRUE)
	{
		/* select pin group */
		MT6306_GPIO_SelPinGroup(pg);

		tmpvoltHAddr = (voltH & 0xFF0);
		voltHaddr = (kal_uint8)(tmpvoltHAddr >> 4);	//MT6306 I2C Spec.
		VoltHoffset = voltH & 0xF;

		tmpvoltLAddr = (voltL & 0xFF0);
		voltLaddr = (kal_uint8)(tmpvoltLAddr >> 4);	//MT6306 I2C Spec.
		VoltLoffset = voltL & 0xF;

		switch(volt)
		{
			case SIMGPIO_VOLT_18V:
				/* write VSELx[1] */
				Reg = MT6306_Reader_AL(chipno, voltHaddr);
				Reg &= ~(1 << VoltHoffset);

				MT6306_Writer_AL(chipno, ((voltHaddr << 4) | Reg));

				/* write VSELx[0] */
				Reg = MT6306_Reader_AL(chipno, voltLaddr);
				Reg &= ~(1 << VoltLoffset);

				MT6306_Writer_AL(chipno, ((voltLaddr << 4) | Reg));
				break;
			case SIMGPIO_VOLT_28V:
				/* write VSELx[1] */
				Reg = MT6306_Reader_AL(chipno, voltHaddr);
				Reg &= ~(1 << VoltHoffset);

				MT6306_Writer_AL(chipno, ((voltHaddr << 4) | Reg));

				/* write VSELx[0] */
				Reg = MT6306_Reader_AL(chipno, voltLaddr);
				Reg |= 1 << VoltLoffset;

				MT6306_Writer_AL(chipno, ((voltLaddr << 4) | Reg));
				break;
			case SIMGPIO_VOLT_30V:
				/* write VSELx[1] */
				Reg = MT6306_Reader_AL(chipno, voltHaddr);
				Reg |= 1 << VoltHoffset;

				MT6306_Writer_AL(chipno, ((voltHaddr << 4) | Reg));

				/* write VSELx[0] */
				Reg = MT6306_Reader_AL(chipno, voltLaddr);
				Reg &= ~(1 << VoltLoffset);

				MT6306_Writer_AL(chipno, ((voltLaddr << 4) | Reg));
				break;
			default:
				ASSERT(0);
				break;
		}
		Reg = MT6306_Reader_AL(chipno, addr);
		Reg |= 1 << offset;

		MT6306_Writer_AL(chipno, ((addr << 4) | Reg));
		Delay(MT6306_SIM_GPIO_VCC_DELAY);
	}
	else
	{
		Reg = MT6306_Reader_AL(chipno, addr);
		Reg &= ~(1 << offset);

		MT6306_Writer_AL(chipno, ((addr << 4) | Reg));
		Delay(MT6306_SIM_GPIO_VCC_DELAY);
	}
	if(spiWriterGptTimeoutFlag == KAL_TRUE)
	{
		MT6306_GPIO_checkClkStopQueue();
	}
	spiWriterFlag = KAL_FALSE;
	sim_MT63062_GiveI2Csem();
}

/*************************************************************************
* FUNCTION
*	MT6306_GPIO_ReadIO
*
* DESCRIPTION
*	This function implements read SIMGPIO value.
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 MT6306_GPIO_ReadIO(kal_uint8 port)
{
	kal_uint8 Reg = 0, chipno = 1, addr = 0, offset = 0;
	kal_uint16 tmpaddr = 0, gpi_val = 0;

	gpi_val = regTable[port].gpi_val;

	tmpaddr = (gpi_val & 0xFF0);
	addr = (kal_uint8)(tmpaddr >> 4);	//MT6306 I2C Spec.
	offset = gpi_val & 0xF;
	if(addr <= 3)
	{
		chipno = 0;
	}

	sim_MT63062_TakeI2Csem();
	/* used to check if any context access Writer interface */
	if(spiWriterFlag == KAL_TRUE)
		ASSERT(0);
	spiWriterFlag = KAL_TRUE;
	Reg = MT6306_Reader_AL(chipno, addr);
	if(spiWriterGptTimeoutFlag == KAL_TRUE)
	{
		MT6306_GPIO_checkClkStopQueue();
	}
	spiWriterFlag = KAL_FALSE;
	sim_MT63062_GiveI2Csem();
	return Reg >> offset;
}

/*************************************************************************
* FUNCTION
*	MT6306_GPIO_WriteIO
*
* DESCRIPTION
*	This function implements write SIMGPIO drive high/low.
*
* PARAMETERS
*
* RETURNS
*	None
*
* GLOBALS AFFECTED
*
*************************************************************************/
kal_uint8 MT6306_GPIO_WriteIO(kal_uint8 data, kal_uint8 port)
{
	kal_uint8 Reg = 0, chipno = 1, addr = 0, offset = 0;
	kal_uint16 tmpaddr = 0, drive = 0;

	drive = regTable[port].drive_high;
	tmpaddr = (drive & 0xFF0);
	addr = (kal_uint8)(tmpaddr >> 4);	//MT6306 I2C Spec.

	if(addr <= 3)
	{
		chipno = 0;
	}
	sim_MT63062_TakeI2Csem();
	/* used to check if any context access Writer interface */
	if(spiWriterFlag == KAL_TRUE)
		ASSERT(0);
	spiWriterFlag = KAL_TRUE;

	if(data == 1)
	{
		Reg = MT6306_Reader_AL(chipno, addr);
		drive |= Reg;
	}
	else
	{
		offset = regTable[port].drive_low & 0xF;
		Reg = MT6306_Reader_AL(chipno, addr);
		Reg &= ~(1 << offset);
		drive = (addr << 4) | Reg;
	}
	MT6306_Writer_AL(chipno, drive);
	if(spiWriterGptTimeoutFlag == KAL_TRUE)
	{
		MT6306_GPIO_checkClkStopQueue();
	}
	spiWriterFlag = KAL_FALSE;
	sim_MT63062_GiveI2Csem();
	return 1; //success return
}
#endif
#endif //DRV_SIM_OFF


