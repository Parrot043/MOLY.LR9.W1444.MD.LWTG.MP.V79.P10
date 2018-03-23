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
 *    dcl_sim_gpio.c
 *
 * Project:
 * --------
 *   Maui_Software
 *
 * Description:
 * ------------
 *	This Module defines DCL (Driver Common Layer) of the SIM GPIO card driver.
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
 * removed!
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#include "drv_features.h"
#include "drv_comm.h"
#include "dcl.h"
#include "init.h"
#include "kal_public_api.h"
#ifdef DCL_SIM_INTERFACE

#if !defined(DRV_SIM_OFF)
/**************************************************************************
following defines static global variables used in this file
***************************************************************************/

/******************************************************************************************
*following are extern variables from other file
******************************************************************************************/
#define DCL_SIMGPIO_MAGIC_NUM			0x20000000
#define DCL_SIMGPI_MAGIC_NUM				0x10000000

#define DCL_SIMGPIO_IS_HANDLE_MAGIC(handle_) ((handle_)& DCL_SIMGPIO_MAGIC_NUM)
#define DCL_SIMGPIO_GET_DEV(handle_) 			  ((handle_)& (~DCL_SIMGPIO_MAGIC_NUM))

#define DCL_SIMGPI_IS_HANDLE_MAGIC(handle_)	((handle_) & DCL_SIMGPI_MAGIC_NUM)
#define DCL_SIMGPI_GET_DEV(handle_) 					((handle_) & (~DCL_SIMGPI_MAGIC_NUM))

/***************************************************************************************
followings are DCL SIM GPIO API exported 
*****************************************************************************************/
DCL_STATUS DclSIMGPIO_Initialize(void)
{		
	return STATUS_OK;
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  DclSIMGPIO_Open
* DESCRIPTION
*  This function is to open the GPIO module and get a handle. Note that multiple opens are allowed.
*
* PARAMETERS
*	eDev: - only valid for DCL_GPIO,DCL_GPO,DCL_GPIO_CLK.
*	flags: - no sepcial flags is needed. Please use FLAGS_NONE
*
* RETURN VALUES
*	DCL_HANDLE_INVALID: - Open failed.
* other value: - a valid handle
*
*-----------------------------------------------------------------------*/

DCL_HANDLE DclSIMGPIO_Open(DCL_DEV eDev, DCL_FLAGS flags)
{
	if(flags>0xFF)
 	{
 		ASSERT(0);
 		return DCL_HANDLE_INVALID;
 	}
   if(eDev==DCL_SIM_GPIO)
	  return (DCL_SIMGPIO_MAGIC_NUM | flags);
   else if(eDev==DCL_SIM_GPI)
	   return (DCL_SIMGPI_MAGIC_NUM | flags);
   else
   {
	   EXT_ASSERT(0,eDev,flags,0);
     return DCL_HANDLE_INVALID;
   }		
   return DCL_HANDLE_NONE;
}

DCL_STATUS DclSIMGPIO_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
	ASSERT(0);
	return 	STATUS_UNSUPPORTED;
}

DCL_STATUS DclSIMGPIO_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN *buf_len, DCL_OPTIONS options)
{
	ASSERT(0);
	return 	STATUS_UNSUPPORTED;
}

DCL_STATUS DclSIMGPIO_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
	ASSERT(0);
	return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSIMGPIO_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
	ASSERT(0);
	return 	STATUS_UNSUPPORTED;
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  DclSIMGPIO_Control
*
* DESCRIPTION
*  This function is to send command to control the GPIO module.
*
* PARAMETERS
*	handle - a valid handle return by DclGPIO_Open()
*  cmd   - a control command for GPIO module
*          1. SIMGPIO_CMD_READ: to read the input value from the GPIO port contain in handle.
*          2. SIMGPIO_CMD_WRITE: to write low to the output of GPIO port contain in handle.
*          3. SIMGPIO_CMD_SET_DIR: to set direction of  GPIO port contain in handle.
*          4. SIMGPIO_CMD_TRUN_ON_VCC: to turn vcc and select voltage domain.
*          5. SIMGPI_CMD_READ: to read GPI value.
* RETURNS
*	STATUS_OK - command is executed successfully.
*	STATUS_FAIL - command is failed.
*  STATUS_INVALID_CMD - The command is invalid.
*  STATUS_INVALID_DCL_HANDLE - The handle is invalid.
*  STATUS_INVALID_CTRL_DATA - The ctrl data is not valid.
*-----------------------------------------------------------------------*/
DCL_STATUS DclSIMGPIO_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
   kal_char port; 
   port= 0x000000FF & handle;

   if(DCL_SIMGPIO_IS_HANDLE_MAGIC(handle))
   {

	   switch(cmd)
	   {
		   case SIMGPIO_CMD_READ:
		      {
		         SIMGPIO_CTRL_READ_T   *prRead;

		         prRead = &(data->rSGRead);
		         prRead->u1IOData = MT6306_GPIO_ReadIO(port);
		         break;
		      }
		   case SIMGPIO_CMD_WRITE:
		      {
		         SIMGPIO_CTRL_WRITE_T   *prWrite;

		         prWrite = &(data->rSGWrite);
		         MT6306_GPIO_WriteIO(prWrite->u1IOData, port);
		         break;
		      }
		   case SIMGPIO_CMD_SET_DIR:
		      {
		         SIMGPIO_CTRL_SET_DIR_T   *prSetDir;

		         prSetDir = &(data->rSGSetDir);
		         MT6306_GPIO_InitIO(prSetDir->u2Dir, port);
		         break;
		      }
		   case SIMGPIO_CMD_TRUN_ON_VCC:
		      {
		         SIMGPIO_CTRL_TRUN_ON_POWER   *prTurnOnPower;

		         prTurnOnPower = &(data->rSGTurnOnPower);
		         MT6306_GPIO_TurnOnVcc(prTurnOnPower->on, prTurnOnPower->volt, port);
		         break;
		      }
			default:
				EXT_ASSERT(0,handle,cmd,0);
				return STATUS_INVALID_DCL_HANDLE;

	   }
	}
   else if(DCL_SIMGPI_IS_HANDLE_MAGIC(handle))
   {
		switch(cmd)
		{
		   case SIMGPI_CMD_READ:
			   {
				   SIMGPIO_CTRL_READ_T	*prIRead;
		  
				   prIRead = &(data->rSGIRead);
				   prIRead->u1IOData = MT6306_GPIO_ReadIO(port);
				   break;
			   }
			default:
				EXT_ASSERT(0,handle,cmd,0);
				return STATUS_INVALID_DCL_HANDLE;
		}
	}
   else
   {
      EXT_ASSERT(0,handle,cmd,0);
      return STATUS_INVALID_DCL_HANDLE;
   }  
   return STATUS_OK;
}

/*-----------------------------------------------------------------------*
* FUNCTION
*  DclSIMGPIO_Close
*
* DESCRIPTION
*  This function is not supported for the GPIO module now.
*
* PARAMETERS
*	N/A
*
* RETURNS
*	STATUS_UNSUPPORTED
*
*-----------------------------------------------------------------------*/
DCL_STATUS DclSIMGPIO_Close(DCL_HANDLE handle)
{
   return STATUS_OK;
}

#else /*!defined(DRV_SIM_OFF)*/


DCL_STATUS DclSIMGPIO_Initialize(void)
{
	return STATUS_FAIL;
}

DCL_HANDLE DclSIMGPIO_Open(DCL_DEV dev, DCL_FLAGS flags)
{
   return DCL_HANDLE_INVALID;
}

DCL_STATUS DclSIMGPIO_ReadData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{
	return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSIMGPIO_WriteData(DCL_HANDLE handle, DCL_BUFF *buff, DCL_BUFF_LEN buf_len, DCL_OPTIONS options)
{
	return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSIMGPIO_Configure(DCL_HANDLE handle, DCL_CONFIGURE_T *configure)
{
	return STATUS_UNSUPPORTED;
}

DCL_STATUS DclSIMGPIO_RegisterCallback(DCL_HANDLE handle, DCL_EVENT event, PFN_DCL_CALLBACK callback)
{
	return STATUS_FAIL;
}

DCL_STATUS DclSIMGPIO_Control(DCL_HANDLE handle, DCL_CTRL_CMD cmd, DCL_CTRL_DATA_T *data)
{
	return STATUS_FAIL;
}

DCL_STATUS DclSIMGPIO_Close(DCL_HANDLE handle)
{
	return STATUS_FAIL;
}

#endif /*!defined(DRV_SIM_OFF)*/

#endif /*DCL_SIM_INTERFACE*/
