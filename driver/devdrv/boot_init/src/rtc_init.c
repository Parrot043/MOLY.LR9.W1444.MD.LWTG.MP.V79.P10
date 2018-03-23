/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2013
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

/*******************************************************************************
 * Include header files
 *******************************************************************************/
#include "kal_general_types.h"
#include "kal_public_api.h"
#include "drvpdn.h"
#include "reg_base.h"

/*******************************************************************************
 * Function definitions
 *******************************************************************************/


 static void rtc_set_default(void)
{
	#if defined(MT6290)
	//#define BASE_ADDR_RTC (0xbf2e0000)
	#define DRV_Reg32(addr)              (*(volatile kal_uint32 *)(addr))
	#define SET_MD_OWN_BIT(reg_addr, bit_offset, md_own_bit)  ((md_own_bit) ? (DRV_Reg32((reg_addr)) |= (1 << (0x10 + (bit_offset)))) : (DRV_Reg32((reg_addr)) &= (~(1 << (0x10 + (bit_offset))))))
	#define SET_AP_OWN_BIT(reg_addr, bit_offset, ap_own_bit)  ((ap_own_bit) ? (DRV_Reg32((reg_addr)) |= (1 << (0x00 + (bit_offset)))) : (DRV_Reg32((reg_addr)) &= (~(1 << (0x00 + (bit_offset))))))
	#define RTC_REG_ISSET(offset, bit)	(*((volatile unsigned short*)(BASE_ADDR_RTC + offset)) & (bit))
	#define RTC_WRITEB(val, offset)  do {(*((volatile unsigned char*)(BASE_ADDR_RTC + offset))) = (val);}while (0)
	#define RTC_READB(offset) (*((volatile unsigned char*)(BASE_ADDR_RTC + offset)))
	#define RTC_PROT1				0x04
	#define RTC_PROT2				0x08
	#define RTC_PROT3				0x0C
	#define RTC_PROT4				0x10
	#define RTC_PROT1_PROTKEY			0xA5
	#define RTC_PROT2_PROTKEY			0x72
	#define RTC_PROT3_PROTKEY			0xC6
	#define RTC_PROT4_PROTKEY			0x58
	#define RTC_CTL 				0x18
	#define RTC_CTL_PROT_PASS			(1 << 4)	/* pass RTC security check protection */
	#define RTC_AL_CTL				0x38
	#define RTC_IRQ_STA				0x7C


	
	unsigned int timeout = 0;
	// set ownship
	SET_MD_OWN_BIT(0xBF80003C, 0xE, 1);
	SET_AP_OWN_BIT(0xBF80003C, 0xE, 1);
	 /* Make protection pass */
	 if (!RTC_REG_ISSET(RTC_CTL, RTC_CTL_PROT_PASS))
	 {
		 do
		 {
			 RTC_WRITEB(0x0, RTC_PROT4); // to enter protection to prevent glitch
			 RTC_WRITEB(0x0, RTC_PROT4); // to enter protection to prevent glitch
 
			 RTC_WRITEB(RTC_PROT1_PROTKEY, RTC_PROT1);
			 RTC_WRITEB(RTC_PROT1_PROTKEY, RTC_PROT1);
			 RTC_WRITEB(RTC_PROT2_PROTKEY, RTC_PROT2);
			 RTC_WRITEB(RTC_PROT2_PROTKEY, RTC_PROT2);
			 RTC_WRITEB(RTC_PROT3_PROTKEY, RTC_PROT3);
			 RTC_WRITEB(RTC_PROT3_PROTKEY, RTC_PROT3);
			 RTC_WRITEB(RTC_PROT4_PROTKEY, RTC_PROT4);
			 RTC_WRITEB(RTC_PROT4_PROTKEY, RTC_PROT4);
 
			 timeout++;
			 if (timeout > 0xff00)
			 {
				//BL_PRINT(LOG_ERROR,"RTC_protectionPass timeout!\r\n");
				ASSERT(0);
			 }
		 }
		 while (!RTC_REG_ISSET(RTC_CTL, RTC_CTL_PROT_PASS));
	 }


	RTC_WRITEB(0,RTC_AL_CTL);	// clear alarm enable 
	while((RTC_READB(RTC_IRQ_STA)&0x1)); // wait for interrupt disappear
	#endif
}

void boot_init_rtc_clock()
{
/*call rtc_set_default is just for 6290 
* RTC_AL_CTL has no default value , the value in some IC will be 0x1 when boot up which will cause a interrupt 
* so need a default value for RTC_AL_CTL when boot up 
*/
rtc_set_default();

/* Router project */
#if defined(__SMART_PHONE_MODEM__) && !defined(__X_BOOTING__)


/* Hosted dongle */
#elif defined(__MODEM_CARD__) && !defined(__TRADITIONAL_MODEM_CARD__)


/* Phone project */
#elif defined(__SMART_PHONE_MODEM__) && defined(__X_BOOTING__)

    PDN_SET(PDN_RTC);

/* Traditional dongle project */
#elif defined(__MODEM_CARD__) && defined(__TRADITIONAL_MODEM_CARD__)

    PDN_SET(PDN_RTC);

#endif
}
