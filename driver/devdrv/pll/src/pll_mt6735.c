/*****************************************************************************
 *  Copyright Statement:
 *  --------------------
 *  This software is protected by Copyright and the information contained
 *  herein is confidential. The software may not be copied and the information
 *  contained herein may not be used or disclosed except with the written
 *  permission of MediaTek Inc. (C) 2012
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
 ****************************************************************************/

/*****************************************************************************
 * Filename:
 * ---------
 *   pll_mt6735.c
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   PLL Related Functions
 *
 * Author:
 * -------
 * -------
 *
 * ===========================================================================
 * $Log$
 *
 * removed!
 * removed!
 * Modify method for RF performance.
 *
 * removed!
 * removed!
 * 1. Disable ARM7 ccif clock.
 * 2. copy efuse value to MDPLL_CON1 and MDPLL_CON3 for RF performance
 *
 * removed!
 * removed!
 * Roll back.
 *
 * removed!
 * removed!
 * MD bus(CR4PLL) hopping default enable.
 *
 * removed!
 * removed!
 * change dsp clock switch sequence because of phy_fc1pll300m >= Phy_pll300m.
 *
 * removed!
 * removed!
 * 1. Denali-1/2/3 run time config.
 * 2. For C2K PLL stability.
 *
 * removed!
 * removed!
 * Provide CR4/DSP pll select api for Denali.
 *
 * removed!
 * removed!
 * 1. change MT6735 1X bus clock define from 61.44 to 59.8Mhz.
 * 2. DSP clock source change from DSPPLL to CR4PLL
 * 3. cancel PLL force on.
 * 4. Mark dps frequency switch code.
 *
 * removed!
 * removed!
 * Fix an error for lte pll switch api.
 *
 * removed!
 * removed!
 * implement DSP freqeuncy switch api.
 *
 * removed!
 * removed!
 * PLL solution 2.
 * CR4PLL 598 -> BUS/BSI
 * WHPLL 578 -> CR4
 * LTEPLL 300 -> DSPx6
 *
 * removed!
 * removed!
 * Rollback pll config to 11/30 MD phone call status.
 * CR4 588Mhz.
 *
 * removed!
 * removed!
 * Merge MD bring up modification to MP7.
 *
 * removed!
 * removed!
 * Update PLL driver for Denali.
 *
 * removed!
 * removed!
 * change MD_GLOBAL_CON1 to be PLL_MD_GLOBAL_CON1.
 *
 * removed!
 * removed!
 * Modify assembly code(clock rate mark) for gcc upgrade.
 *
 * removed!
 * removed!
 * MP6.FPB merge back MOLY Trunk for PLL.
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 *
 * removed!
 * removed!
 * Fix SIM CLK from typo
 *
 * removed!
 * removed!
 * Switch LTEDSP from 26M to LTEDSPPLL
 *
 * removed!
 * removed!
 *
 ****************************************************************************/

/*****************************************************************************
 * Locally Used Options
 ****************************************************************************/

/*****************************************************************************
 * Include header files
 ****************************************************************************/

#include "pll.h"
#include "kal_general_types.h"
#include "reg_base.h"
#include "init.h"
#ifdef __MTK_TARGET__ /* should NOT be compiled on MODIS */

/*****************************************************************************
 * Locally Used Macro Function
 ****************************************************************************/
#define PLL_REG32(addr)   *(volatile kal_uint32 *)(addr)

/* Original option, remove later? */
//#undef  FH_OFF          /* enable FH for cosim/dsim */
//#define MD2G_FROM_RF2   /* use RF2 for 2G */
//#undef  PLL_OFF         /* enable PLL */
//#undef  SIM_26M         /* clock switch to PLL instead of 26M */
//#define RF2_FAST_SETTLE /* Reduce RF2 settle time at cosim */
//#undef  WHPLL_TDD_MODE  /* Disable WHPLL TDD mode */
#define WHPLL_FOR_LTEDSP



__PLL_NONCACHED_DATA__ volatile kal_uint32 loop_var;
__PLL_NONCACHED_DATA__ volatile UINT32P sleep_clk_con_p;
__PLL_NONCACHED_DATA__ volatile UINT32P ap_pll_con2_p;



void mon_counter_set(unsigned int event0, unsigned int event1, unsigned int event2, unsigned int divide)
{
    int value;

	if (1==divide)
	{
		__asm__ __volatile__
	    (
	       "mrc p15, 0, %0, c9, c12, 0\r\n"
	       "orr %0, %0, #0x0F\r\n"
	       "mcr p15, 0, %0, c9, c12, 0\r\n"
	       :"=r"(value)
	       :
	    );
	}
	else
	{
		__asm__ __volatile__
	    (
	       "mrc p15, 0, %0, c9, c12, 0\r\n"
	       "bic %0, %0, #0x0F\r\n"
	       "orr %0, %0, #0x07\r\n"
	       "mcr p15, 0, %0, c9, c12, 0\r\n"
	       :"=r"(value)
	       :
	    );
	}

    // Select Counter 0, and Select Event
    __asm__ __volatile__
    (
       "mrc p15, 0, %0, c9, c12, 5\r\n"
       "bic %0, %0, #0x1F\r\n"
       "orr %0, %0, #0x00\r\n"
       "mcr p15, 0, %0, c9, c12, 5\r\n"
       "mrc p15, 0, %0, c9, c13, 1\r\n"
       "bic %0, %0, #0xFF\r\n"
       "orr %0, %0, %1\r\n"
       "mcr p15, 0, %0, c9, c13, 1\r\n"
       :
       :"r"(value), "r"(event0)
    );

    // Select Counter 1, and Select Event
    __asm__ __volatile__
    (
       "mrc p15, 0, %0, c9, c12, 5\r\n"
       "bic %0, %0, #0x1F\r\n"
       "orr %0, %0, #0x01\r\n"
       "mcr p15, 0, %0, c9, c12, 5\r\n"
       "mrc p15, 0, %0, c9, c13, 1\r\n"
       "bic %0, %0, #0xFF\r\n"
       "orr %0, %0, %1\r\n"
       "mcr p15, 0, %0, c9, c13, 1\r\n"
       :
       :"r"(value), "r"(event1)
    );

    // Select Counter 2, and Select Event
    __asm__ __volatile__
    (
       "mrc p15, 0, %0, c9, c12, 5\r\n"
       "bic %0, %0, #0x1F\r\n"
       "orr %0, %0, #0x02\r\n"
       "mcr p15, 0, %0, c9, c12, 5\r\n"
       "mrc p15, 0, %0, c9, c13, 1\r\n"
       "bic %0, %0, #0xFF\r\n"
       "orr %0, %0, %1\r\n"
       "mcr p15, 0, %0, c9, c13, 1\r\n"
       :
       :"r"(value), "r"(event2)
    );
}

void mon_counter_start(void)
{
    // Enable all counters (local bits)
    int value = 0, tmp;

	tmp = 0x80000007;

    __asm__ __volatile__
    (
       "mrc p15, 0, %0, c9, c12, 1\r\n"
       "orr %0, %0, %1\r\n"
       "mcr p15, 0, %0, c9, c12, 1\r\n"
       :
       :"r"(value), "r"(tmp)
    );
}

void mon_counter_stop(void)
{
    unsigned int tmp;
    int value = 0;

	tmp = 0x80000007;

    // Disable all counters (local bits)
    __asm__ __volatile__
    (
       "mrc p15, 0, %0, c9, c12, 2\r\n"
       "orr %0, %0, %1\r\n"
       "mcr p15, 0, %0, c9, c12, 2\r\n"
       :
       :"r"(value), "r"(tmp)
    );
}

kal_uint32 mon_counter_cycle_value(void)
{
	unsigned int counter;

	// Read Cycle Counter Register
    __asm__ __volatile__
    (
       "mrc p15, 0, %0, c9, c13, 0\r\n"
       :"=r"(counter)
       :
    );

	return counter;
}

#if 1
/* macro for loop delay , delay value 100: about 1us!! */
#define FOR_LOOP_DELAY(__VAR__, __ITR__) do {\
        for (__VAR__ = 0; __VAR__ < (__ITR__); __VAR__++);\
    } while(0)
#else
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

#if defined(__SGLTE__) || defined(__DUAL_TALK_SUPPORT__)
static void wait_usec_cpu_clock_at_phase2(const unsigned int usec)
{
    // DO NOT START & STOP PMU CYCLE COUNTER at this stage, since OTHER MODULES USE
    // CYCLE COUNTER!
    kal_uint32 beg, end, dur;
    beg = mon_counter_cycle_value();
    dur = 0;

    while (dur <= usec * (CPU_CLOCK_MHZ)) {
        end = mon_counter_cycle_value();
        dur = ((end) >= (beg)) ? ((end) - (beg)) : (0xffffffff - (beg) + (end));
    }
}
#endif

void AP_SIDE_PLL_SETTING(void)
{
    #ifdef MD2G_FROM_RF2 /* 2+4 (only for denali2 only with 2/3/4) */
		//sleep_clk_con_p 				= (UINT32P)((UINT32P)(SLEEP_CLK_CON) + 0x90000000);
		//*sleep_clk_con_p			   |= 0x0000100C;		
		//ap_pll_con2_p					= (UINT32P)((UINT32P)(AP_PLL_CON2) + 0x90000000);
		//*ap_pll_con2_p				   &= 0xFFFFFFFB; //>bit2 set0
		*SLEEP_CLK_CON |= 0x0000100C;
		*AP_PLL_CON2 &= 0xFFFFFFFB;
    #endif /* MD2G_FROM_RF2 */
}

void MD_PLL_SRCLKEN_SETTING(void)
{
    #ifdef MD2G_FROM_RF2 // 2+4 (only for denali2 only with 2/3/4)
                         // a.k.a. SGLTE

        *MD_DUAL_TALK                   = 0x0001; //Bit 1: REG_DUAL_TALK_TYPE2

		//src clock request 
		//srclkena0 md/2G/3G/LTE/TDD
        *PLL_MD_SRCLKEN_CTL0            = 0x002F; //2G+4G
        
        //srclkena2 2G/LTE
        *PLL_MD_SRCLKEN_CTL1            = 0x0003;

      #ifdef SOFTWARE_COSIM_HVT_LOAD
        // Set TOPSM Request of 2G and TDD Clock to sw own and set to 0 (masked)
        *PLL_MD_MDTOPSM_SW_CTL          = 0x0060; // Set bit 6 rg_mdtopsm_tdd_mixedclk_req_sw_own (MDTOPSM TDD)
                                                  //     bit 5 rg_mdtopsm_tdma_mixedclk_req_sw_own (MDTOPSM 2G)

        *PLL_MD_MODEMTOPSM_SW_CTL       = 0x0040; // Set bit 5 rg_tdd_topsm_clken_req_sw_own (TDD TOPSM)
        *PLL_MD_M2GTOPSM_SW_CTL         = 0x0009; // Set bit 3 rg_modem2_x16gclk_req_sw_own (2G TOPSM x16g)
                                                ; //     bit 0 rg_modem2_sysclk_req_sw_oen (2G TOPSM system clock, i.e., 26M)
      #endif //SOFTWARE_COSIM_HVT_LOAD
    #else //only 2G/3G/4G (MD1 control RF1 only)
        *MD_DUAL_TALK                   = 0x0000;
	
		//src clock request 
		//srclkena0 md/2G/3G/LTE/TDD
        *PLL_MD_SRCLKEN_CTL0            = 0x002F;
		
		//srclkena2 2G/3G/LTE/TDD
        *PLL_MD_SRCLKEN_CTL1            = 0x000F; //srclkena2
    #endif /* MD2G_FROM_RF2 */
}

void MD_PLL_FREQ_SETTING_PHASE1(void)
{
	CHIP_NAME denali_ver = E_CHIP_UNKNOWN;
	denali_ver = INT_DenaliVersion();
    #ifndef PLL_OFF
        /* Hopping HW mode enable */
        *PLL_PLL_RESERVE_REG            = 0x0005; // Bit 0:FHC_HW_MODE
                                                  // Bit 2:Autoswitch bus clk to 26M as PLL off

        *PLL_DFS_CON8                   = 0x0580; // Adjust PLL settle to 100us

        #ifdef RF2_FAST_SETTLE
            *PLL_DFS_CON8_1             = 0x0008; // Bit 7-0: OGT_SYSCLK_SETTLE_32K
            FOR_LOOP_DELAY(loop_var, 35);
        #endif

        FOR_LOOP_DELAY(loop_var, 1);

        *PLL_DFS_CON7                   = 0x01FF; // [FORCE ON]
                                                  // Bit  8: SYSCLK
                                                  // Bit  7: OGTMDPLL
                                                  // Bit  6: MDPLL
                                                  // Bit  5: CR4PLL2
                                                  // Bit  4: OGTWPLL
                                                  // Bit  3: WHPLL
                                                  // Bit  2: WPLL
                                                  // Bit  1: MCUPLL
                                                  // Bit  0: ARM7PLL (LTEDSPPLL)
        *PLL_PLL_CON3                   = 0x0000; // [PWR_EN form HW]
        *PLL_PLL_MTCMOS_CON0            = 0x0000; // [PWR_EN form HW]

        *PLL_PLL_CON2                   = 0x0000; // [TOPSM & SW CTRL]
                                                  // Bit   12: MDPLL
                                                  // Bit  8: MCUPLL
                                                  // Bit  4: WPLL
                                                  // Bit  0: WHPLL
        *PLL_PLL_CON2_1                 = 0x0000; // [TOPSM & SW CTRL]
                                                  // Bit   12: CR4PLL2
                                                  // Bit  8: ARM7PLL
                                                  // Bit  4: TDPLL
                                                  // Bit  0: OTGWPLL

        *PLL_PLLTD_CON0                 = 0x0000; // [ FHCTL & SW CTRL ]
                                                  // Bit   15: SEL_FAST_CK
                                                  // Bit  4: BP_CHG_CTRL  0:CHG from hopping
                                                  // Bit  1: BP_OLT_CTRL
                                                  // Bit  0: BP_PLL_DLY   0;HW PLL_EN

        *PLL_TDPLL_CON0_SUB            &= 0xBFFF;
        *PLL_TDPLL_CON0                 = 0x450F;
        *PLL_TDPLL_CON1                 = 0x0416;
        *PLL_TDPLL_CON4                 = 0x0004;
        *PLL_TDPLL_CON3                |= 0x0100;
        *PLL_TDPLL_CON3                &= 0xFFDF;

        /* DCX0 SETTING */
        #ifndef RF2_FAST_SETTLE                   /* For settle time setting, use hw mode replace force */
            *PLL_PLL_CON4               = 0x0013; // Bit  4: LTE_DCX0_FORCE_ON
                                                  // Bit  3:GPT_BP_PLL_DLY
                                                  // Bit  2:OT_CLKSQ_EN_SEL
                                                  // Bit  1:RG_OGT_CLKSQ_EN
                                                  // Bit  0:OGT_DCX0_FORCE_ON
        #endif

        /* DPM mapping ------------------
         *  0: LTEDSP(arm7pll),
         *  1: CR4PLL(mcupll),
         *  2: wpll,
         *  3: whpll,
         *  4: ogtwpll,
         *  5: CR4PLL2,
         *  6: 2gpll(mdpll),
         *  7: ogtmdpll,
         * PLL_DPM_SEL_SW_CTL0 (1001_1010_1010_1001 = 0x9AA9)
         *     dpm_sel_sw_ctrl0[15]      = ltephy_clk_sel_sw_own;  //1
         *     dpm_sel_sw_ctrl0[14:12]   = ltephy_clk_sel_sw_ctl;  //011 (WHPLL) phy_fix300m
         *     dpm_sel_sw_ctrl0[11]      = tddsys_clk_sel_sw_own;  //1
         *     dpm_sel_sw_ctrl0[10:8]    = tddsys_clk_sel_sw_ctl;  //010 (WPLL)
         *     dpm_sel_sw_ctrl0[7]       = fd216_clk_sel_sw_own;   //1
         *     dpm_sel_sw_ctrl0[6:4]     = fd216_clk_sel_sw_ctl;   //001 (CR4PLL)
         *     dpm_sel_sw_ctrl0[3]       = mdcr4_clk_sel_sw_own;   //1
         *     dpm_sel_sw_ctrl0[2:0]     = mdcr4_clk_sel_sw_ctl;   //001 (CR4PLL)
         
         * PLL_DPM_SEL_SW_CTL1 (0000_1010_1010_1001)
         *     dpm_sel_sw_ctrl1[15]      = reserve1_clk_sel_sw_own; //0
         *     dpm_sel_sw_ctrl1[14:12]   = reserve1_clk_sel_sw_ctl; //000
         *     dpm_sel_sw_ctrl1[11]      = mdbus2x_clk_sel_sw_own;  //1
         *     dpm_sel_sw_ctrl1[10:8]    = mdbus2x_clk_sel_sw_ctl;  //001 (CR4PLL)
         *     dpm_sel_sw_ctrl1[7]       = ltel1_clk_sel_sw_own;    //1
         *     dpm_sel_sw_ctrl1[6:4]     = ltel1_clk_sel_sw_ctl;    //001 (CR4PLL)
         *     dpm_sel_sw_ctrl1[3]       = mdarm7_clk_sel_sw_own;   //1
         *     dpm_sel_sw_ctrl1[2:0]     = mdarm7_clk_sel_sw_ctl;   //001 (CR4PLL)
         */
#ifdef WHPLL_FOR_LTEDSP
        ///>/*TINFO="common_c define WHPLL_FOR_LTEDSP"*/
        *PLL_DPM_SEL_SW_CTL0            = 0x9A9B;
        *PLL_DPM_SEL_SW_CTL1            = 0x0999;
#else
        *PLL_DPM_SEL_SW_CTL0            = 0x9AA9;
        *PLL_DPM_SEL_SW_CTL1            = 0x0AA9;
#endif

        /*
         * [PLL_MD_SRCLKEN_CTL0]
         *     BIT 15: RG_SW_SRCLKENA1
         *     BIT 14: RG_SRCLKENA1_AP_EN
         *     BIT 13: RG_SRCLKENA1_MD_EN
         *     BIT 12: RG_SRCLKENA1_EXT_EN
         *     BIT 11: RG_SRCLKENA1_TDD_EN
         *     BIT 10: RG_SRCLKENA1_3G_EN
         *     BIT   9: RG_SRCLKENA1_2G_EN
         *     BIT   8: RG_SRCLKENA1_LTE_EN
         *     BIT   7: RG_SW_SRCLKENA0
         *     BIT   6: RG_SRCLKENA0_AP_EN
         *     BIT   5: RG_SRCLKENA0_MD_EN
         *     BIT   4: RG_SRCLKENA0_EXT_EN
         *     BIT   3: RG_SRCLKENA0_TDD_EN
         *     BIT   2: RG_SRCLKENA0_3G_EN
         *     BIT   1: RG_SRCLKENA0_2G_EN
         *     BIT   0: RG_SRCLKENA0_LTE_EN
         *
         * [PLL_MD_SRCLKEN_CTL1]
         *     Bit 3: RG_SRCLKENA2_TDD_EN
         *     Bit 2: RG_SRCLKENA2_FDD_EN
         *     Bit 1: RG_SRCLKENA2_2G_EN
         *     Bit 0: RG_SRCLKENA2_LTE_EN
         */

        #ifdef WHPLL_TDD_MODE
            /* WHPLL : 250.25M => 260M*/
            *PLL_WHPLL_CON2             = 0x8050; //Bit    15: WHPLL_N_INFO_CHG
            //Bit 6-0: WHPLL_N_INFO_INT
            *PLL_WHPLL_CON3             = 0x0000; //Bit 13-0: WHPLL_N_INFO_FRA
        #endif


  ///>/*TINFO="common_c slow down cr4pll in 572x2=1144Mhz"*/
 // *PLL_MCUPLL_CON2  =   0x802C; //572Mx2 = 1144Mhz (int)
//  *PLL_MCUPLL_CON3  =   0x3627; //572Mx2 = 1144Mhz (frac)

  #ifndef FH_OFF
    ///>/*TINFO="common_c slow down cr4pll in 572x2=1144Mhz and hopping"*/
    //>*PLL_FH_CON_FREQ_BASE   &=  0xFF80; //1144M
    //>*PLL_FH_CON_FREQ_BASE   |=  0x0028; //1144M
    //*PLL_FH_CON_FREQ_BASE   =  0x94A8; //1144M
  #endif //FH_OFF

#ifdef WHPLL_FOR_LTEDSP
  if(E_DENALI_1 == denali_ver)
  {
      //Denali-1
	  *PLL_WHPLL_CON2  =  0x8058; //572M (int)
	  *PLL_WHPLL_CON3  =  0x0000; //572M (frac)
  }
  else
  {
      //Denali-2/3      
	  *PLL_WHPLL_CON2  =  0x805C; //598M (int)
	  *PLL_WHPLL_CON3  =  0x0000; //598M (frac)
  }
#endif

		*PLL_MDPLL_CON3_SUB            = 0x0F13;//for MDPLL1_SUBPLL1_LDO_RCODE=3 
		*PLL_MDPLL_CON3                = 0x0F13;//for MDPLL1_SUBPLL2_LDO_RCODE=3
		
		if(E_DENALI_1 == denali_ver)
		{
            *PLL_MDPLL_CON0            = 0x090F; //change posdiv[1:0] from 2'b01 to 2'b10
		}
		else
		{			
	        *PLL_MDPLL_CON0            = 0x050F; 
		}
        /* Enable PLLs*/
        *PLL_MDPLL_CON0                |= 0x8000; //Bit  15: MDPLL_EN
        *PLL_MCUPLL_CON0               |= 0x8000; //Bit  15: CR4_EN
        *PLL_WPLL_CON0                 |= 0x8000; //Bit  15: WPLL_EN
        *PLL_WHPLL_CON0                |= 0x8000; //Bit  15: WHPLL_EN
        //*PLL_TDPLL_CON0                |= 0x8000; //Bit  15: TDPLL_EN
        *PLL_ARM7PLL_CON2			    = 0x802E;
		*PLL_ARM7PLL_CON3			    = 0x09D8;
        *PLL_ARM7PLL_CON0              |= 0x8000; //Bit  15: LTEDSP_EN

        /* CR4 DIV MACRO CONTROL */
        FOR_LOOP_DELAY(loop_var, 2);             //DELAY 2us
        *PLL_MD_CR4PLL_DIV_CON         |=0x0002; //Bit 2: MCULL DIV MACRO, pll_clk_en
        FOR_LOOP_DELAY(loop_var, 2);             //DELAY 2us
        *PLL_MD_CR4PLL_DIV_CON         |=0x0020; //Bit 5: MCULL DIV MACRO, RESET release
        FOR_LOOP_DELAY(loop_var, 2);             //DELAY 2us
        *PLL_MD_CR4PLL_DIV_CON         |=0x5000; //Bit 2: MCUPLL DIV MACRO
                                                 //Bit 14: GG enable

        #ifndef FH_OFF
            /* Frequency Hopping */
            /* LTEDSPPLL Hopping Setting */
            *PLL_FH_CON8_1              = 0x0070; // DOWN Hopping 8%, HOPPING_MAX_RANGE=0xFFEF
            //*PLL_FH_CON8                = 0xA454;
            *PLL_FH_CON8                = 0x0;

            /* CR4PLL (600MHz) Hopping Setting */
            //> 5%
            //>*PLL_FH_CON5                = 0x008A; // DOWN Hopping 5%
            //>                                      // Bit 15-8: MCUPLL DDS UPPER LIMIT
            //>                                      // Bit  7-0: MCUPLL DDS LOWER LIMIT
            //> 4%
            //*PLL_FH_CON5                = 0x0070; // DOWN Hopping 4%
            *PLL_FH_CON5                = 0x003B; // DOWN Hopping 2%
                                                  // Bit 15-8: MCUPLL DDS UPPER LIMIT
                                                  // Bit  7-0: MCUPLL DDS LOWER LIMIT
#if defined(MD_HOPPING_DISABLE)                                                              
            *PLL_FH_CON4                = 0x0; //disable
#else
			*PLL_FH_CON4				= 0xA454; // FREE RUN MODE
#endif			

                                                  // Bit     0: FH_EN
                                                  // Bit     1: SOFT_START_EN
                                                  // Bit     2: FREE_RUN_EN
                                                  // Bit  10-9: FREE_RUN_TIME_STEP
                                                  // Bit 14-12: FREE_RUN_DDS_STEP

            /* CR4PLL2 Hopping Setting (no CR4PLL2) */
            #ifdef WHPLL_TDD_MODE
                *PLL_FH_CON7            = 0x008C; // Bit  15-8: WHPLL DDS UPPER LIMIT, HOPPING_MAX_RANGE=0xFFFF
                                                  // Bit   7-0: WHPLL DDS LOWER LIMIT
                *PLL_FH_CON6            = 0xA454; // Bit     0: FH_EN
                                                  // Bit     1: SOFT_START_EN
                                                  // Bit     2: FREE_RUN_EN
                                                  // Bit  10-9: FREE_RUN_TIME_STEP
                                                  // Bit 14-12: FREE_RUN_DDS_STEP
            #endif /* WHPLL_TDD_MODE */
        #endif /* !FH_OFF */

        /* CR4 DIV MACRO CONTROL - release to topsm*/
        *PLL_MD_CR4PLL_DIV_CON         &=0xFEEE; //Bit 8: MCUPLL DIV MACRO, BYPASS =0
                                                 //Bit 4: MCUPLL DIV MACRO, CR4PLLDIV_RSTB_SEL =0
                                                 //Bit 0: MCUPLL DIV MACRO, CR4PLL_OUT_RSTB_SEL =0


        FOR_LOOP_DELAY(loop_var, 400);           //DELAY 100us

        *PLL_MDPLL_CON0                &=0x7FFF; // Bit  15: MDPLL_EN
        //>change autok addr
        //>rg_mdpll_autok_en:     [new] PLL_MDPLL_CON2[15], [org] PLL_MDPLL_CON4[0]
        //>rg_mdpll_autok_load:  [new] PLL_MDPLL_CON2[14], [org] PLL_MDPLL_CON4[1]
        //>*PLL_MDPLL_CON4  =0x0002;        // Bit 0: DISABLE MDPLL AUTOK

        *PLL_MDPLL_CON2                &=0x7FFF; // Bit 0: DISABLE MDPLL AUTOK
        FOR_LOOP_DELAY(loop_var, 1);             //DELAY 1us
        *PLL_MDPLL_CON0                |=0x8000; // Bit 15: MDPLL_EN
        FOR_LOOP_DELAY(loop_var, 15);            //DELAY 15us

        /* Clock Switch Setting */
        *PLL_CLKSW_FDIV7                = 0xC100; // Bit 15: CG EN
                                                 // Bit 14/8: DISABLE CONN DESENSE

        *PLL_MD_GLOBAL_CON1                |= 0x20000000; // Bit 29: BUS_CLK = PLL Freq (not 26MHz)

        #ifndef SIM_26M
            *PLL_CLKSW_CKSEL0           = 0x2010; // Bit 15-12: MDMCU_CLK = CR4PLL = 598 MHz
                                                  // Bit   7-4:   DSP_CLK   = WPLL = 491.52 MHz / 2 = 245.76MHz

            //>need to set mdbus first, then change mdbus clock (PLL_CLKSW_CKSEL1)
            //>*PLL_CLKSW_CKSEL6           = 0x0403; // Bit     0: LTEL2_PHY_CK SW_CG
            //>for ltel1_axi_ck use cr4pll
            *PLL_CLKSW_CKSEL6           = 0x0003; // Bit     0: LTEL2_PHY_CK SW_CG
                                                  // Bit     1: MML1_BUS1X SW_CG
            *PLL_CLKSW_CKSEL4           = 0x5500; // Bit 14-12: ARM7_CLK  = LTEDSPPLL = 300MHzs
                                                  // Bit  11-9: LTEL2_PHY_CLK  = WPLL  = 491.52 MHz / 4 = 122.88 MHz
                                                  // Bit     8: LTEL1_AXI_CLK    = WPLL  = 491.52 MHzR_MDCIRQ_MIN_PRLV / 2 = 245.76 MHz
            *PLL_CLKSW_CKSEL1           = 0xB000; // Bit 15-12: BUS_CLK = WPLL = 491.52 MHz / 4 = 122.88MHz
            *PLL_CLKSW_CKSEL2           = 0x6F20; // Bit 15-12: FX64W_CLK = WPLL = 245.76MHz
                                                  // Bit  11-8: FX16G_CLK = MDPLL = 416MHz / 2 = 208 Mhz
                                                  // Bit   7-4:  HW64W_CLK = WPLL = 491.52MHz / 2 = 245.76 Mhz
            //*PLL_CLKSW_CKSEL3           = 0x0121; // Bit  10-8: WPLL => MCUPLL
            *PLL_CLKSW_CKSEL3           = 0x0123; // Bit  10-8: WPLL => MCUPLL
                                                  // Bit   6-4: MDMCU_CLK   = CR4PLL    = 600MHz
                                                  // Bit     1: WHPLL_D1_CKEN (disable now)
                                                  // Bit     0: WPLL_D1_CKEN
            //*PLL_CLKSW_CKSEL5          |= 0x0020;
            *PLL_CLKSW_CKSEL5          |= 0x0020;
#ifdef WHPLL_FOR_LTEDSP
            //*PLL_CLKSW_CKSEL3          |= 0x0002;
            //*PLL_CLKSW_CKSEL5          |= 0x0010;
#endif
            //*PLL_CLKSW_CKSEL8          |= 0x02FF; // Bit     0: csw_phy_pll300m_ck mux sel (0 :26M)
            *PLL_CLKSW_CKSEL8          |= 0x04FF; // Bit     0: csw_phy_pll300m_ck mux sel (0 :26M)
                                                  // Bit     1: lte_dfe_f52m_ck_out mux sel (0 :26M)
                                                  // Bit     2: lte_dfe_f104m_ck_out mux sel (0 :26M)
                                                  // Bit     3: pre_ltephy_pll208m_ck_out mux sel (0 :26M)
                                                  // Bit     4: phy26m_2x_ck_out mux sel (0 :26M)
                                                  // Bit     5: pre_mdpll_416_ck_scan_mixedsys mux sel (0 :26M)
                                                  // Bit     6: pre_ogtmdpll_416_ck_scan_mixedsys mux sel (0 :26M)
                                                  // Bit     7: csw_ltel1_axi_ck mux sel (0 :26M)
        #endif /* SIM_26M */
#ifndef WHPLL_FOR_LTEDSP
        //------- disable WHPLL (TOPSM from SW & disable WHPLL_EN)
        *PLL_PLL_CON2                  |= 0x0001; // [TOPSM & SW CTRL]
                                                  // Bit    12: MDPLL ,
                                                  // Bit    8: MCUPLL ,
                                                  // Bit    4: WPLL ,
                                                  // Bit    0: WHPLL ,

        *PLL_WHPLL_CON0                &= ~(0x8000); // Bit  15: WHPLL_EN
#endif
        //------- disable OGTWPLL (TOPSM from SW & disable OGTWPLL_EN)
        //------- disable LTEDSPPLL_EN (TOPSM from SW & disable LTEDSPPLL_EN: default use CR4-div2)
        *PLL_PLL_CON2_1                |= 0x1001;    // [TOPSM & SW CTRL]
                                                     // Bit    12: CR4PLL2 ,
                                                     // Bit    8: ARM7PLL ,
                                                     // Bit    4: TDPLL ,
                                                     // Bit    0: OGTWPLL ,
        *PLL_CR4PLL2_CON0              &= ~(0x8000); // Bit  15: CR4PLL2_EN
        *PLL_OGTWPLL_CON0              &= ~(0x8000); // Bit  15: OGTWPLL_EN
    #endif /* PLL_OFF */

    //*PLL_CLKSW_CKSEL7                   = 0x0001;    // Bit  0: ARM8 ccif sw cg
    //ARM7 ccif clock disable
    *PLL_CLKSW_CKSEL7                   = 0x0000; // Bit  0: ARM7 ccif sw cg

    /* Relase PLL Force*/
#ifdef WHPLL_FOR_LTEDSP
    *PLL_DFS_CON7                       = 0x0000;
#else
    *PLL_DFS_CON7                       = 0x0000;
#endif
    *PLL_PLL_CON4                       = 0x0000;
}


/*****************************************************************************
 * FUNCTION
 *  INT_SetPLL
 *
 * DESCRIPTION
 *  This function dedicates for PLL setting.
 *
 * PARAMETERS
 *  Init mode of PLL
 *
 * RETURNS
 *
 ****************************************************************************/
void INT_SetPLL(pll_init_mode mode)
{
	AP_SIDE_PLL_SETTING();
	MD_PLL_SRCLKEN_SETTING();
	MD_PLL_FREQ_SETTING_PHASE1();
	
	//CS Chao request for LTE RF performace because of manufactor processing change
	//TSMC: PLL_EFUSE_M_HW_RESC[4:0] will be 0x0, it should keep default value
	if(((*PLL_EFUSE_M_HW_RESC)&(0x01F))!=0)
	{
	   // Non-TSMC: overwrite according to efuse value
   	//A.MDPLL_CON3 [7:6] <=  0x61B0[4:3]
   	*PLL_MDPLL_CON3 &= ~(0xC0);
   	*PLL_MDPLL_CON3 |= ((*PLL_EFUSE_M_HW_RESC)&(0x18))<<3;
   
   	//A.MDPLL_CON1 [10:8] <=  0x61B0[2:0]
   	*PLL_MDPLL_CON1 &= ~(0x700);
   	*PLL_MDPLL_CON1 |= ((*PLL_EFUSE_M_HW_RESC)&(0x07))<<8;
   }
}

void INT_SetPLL_Phase2()
{
#ifdef MD2G_FROM_RF2 // 2+4 (only for denali2 only with 2/3/4)
						 // a.k.a. SGLTE
	*PLL_MD_SRCLKEN_CTL0			= 0x2F2F; //2G+4G
	*PLL_DFS_CON7					= 0x0080; // [FORCE ON]
											  // Bit 8: SYSCLK
											  // Bit 7: OGTMDPLL
											  // Bit 6: MDPLL
											  // Bit 5: CR4PLL2
											  // Bit 4: OGTWPLL
											  // Bit 3: WHPLL
											  // Bit 2: WPLL
											  // Bit 1: MCUPLL
											  // Bit 0: ARM7PLL (LTEDSPPLL)
	FOR_LOOP_DELAY(loop_var, 400);			  // dummy wait

	*PLL_TDPLL_CON0 			   |= 0x8000; //Bit  15: TDPLL_EN

	FOR_LOOP_DELAY(loop_var, 25000);			// DELAY >200us for TDPLL stable (first-time)
	FOR_LOOP_DELAY(loop_var, 40000);
	*PLL_TDPLL_CON0 			   &= 0x7FFF;	// Bit	  15: TDPLL_EN
	*PLL_TDPLL_CON2 			   &= 0x7FFF;	// Bit	  15: DISABLE TDPLL AUTOK
	FOR_LOOP_DELAY(loop_var, 5000); 			// DELAY >20us
	
	*PLL_TDPLL_CON0 			   |= 0x8000;	  //Bit  15: TDPLL_EN
	FOR_LOOP_DELAY(loop_var, 2500); 			// DELAY
	FOR_LOOP_DELAY(loop_var, 2500); 			// DELAY
	*PLL_DFS_CON7				   = 0x0000;	// release force on
	#ifdef SOFTWARE_COSIM_HVT_LOAD
	*PLL_MD_MDTOPSM_SW_CTL			= 0x0000;
	*PLL_MD_MODEMTOPSM_SW_CTL		= 0x0000;
	*PLL_MD_M2GTOPSM_SW_CTL 		= 0x0000;
	#endif //SOFTWARE_COSIM_HVT_LOAD
#endif /* MD2G_FROM_RF2 */

}


/*
 * Provide HW POR Control by Request of RF Control Members
 */
void set_hw_por_ctrlmode(hw_por_ctrl_mode mode)
{
    switch (mode)
    {
        case CTRL_MODE_HW:
            #if defined(__SGLTE__) || defined(__DUAL_TALK_SUPPORT__)
                #if defined(__UMTS_FDD_MODE__)
                PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x0005;
                #elif defined(__UMTS_TDD128_MODE__)
                PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x0009;
                #else
                    #error "Undefined Product Type. Error Code: PLL0004"
                #endif
            #else
                #if defined(__UMTS_FDD_MODE__) || defined(__FLAVOR_BASIC__)
                PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x0007;
                #elif defined(__UMTS_TDD128_MODE__)
                PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x000B;
                #else
                    #error "Undefined Product Type. Error Code: PLL0005"
                #endif
            #endif
        break;
        case CTRL_MODE_SW: // Default to be Off
            PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x0000;
        break;
    }
}

void set_hw_por_swctrl(hw_por_swctrl swctrl)
{
    switch (swctrl)
    {
        case SWCTRL_FORCE_OFF:
            PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x0000;
        break;
        case SWCTRL_FORCE_ON:
            PLL_REG32(PLL_MD_SRCLKEN_CTL1)          = 0x0080;
        break;
    }
}

void set_csw_lt1l1_axi_ck(kal_uint32 onoff)
{
    if(onoff == 0 /* off */) {
        /* turn csw_ltel1_axi_ck to 26M when non-lte-mode */
        PLL_REG32(PLL_CLKSW_CKSEL8)          &= (~(1<<7)); /* Clr bit 7 csw_ltel1_axi_ck mux sel to 0(26M) */
        PLL_REG32(PLL_CLKSW_CKSEL7)          |=   (1<<1);  /* Set bit 1 LTEL1_BUS_CK_DIS to disable(1) bus ltel1 clock */
    } else if(onoff == 1 /* on */) {
        /* turn csw_ltel1_axi_ck back to PLL when lte-mode */
        PLL_REG32(PLL_CLKSW_CKSEL7)          &= (~(1<<1)); /* Clr bit 1 LTEL1_BUS_CK_DIS to enable(0) bus ltel1 clock */
        PLL_REG32(PLL_CLKSW_CKSEL8)          |=   (1<<7);  /* Set bit 7 csw_ltel1_axi_ck mux sel to 1(PLL) */
    }	
}

DSP_clk_csw lte_pll_status = DSP_CLOCK_END;

void set_csw_lte_pll_swtich(DSP_clk_csw clk)
{
	if(lte_pll_status == clk)
	{
		// it should not switch
		//assert(0);
	}
	lte_pll_status = clk;

	//switch to CR4PLL
	*PLL_CLKSW_CKSEL8          &= (~(1<<9));	
	*PLL_CLKSW_CKSEL5          &= (~(1<<4));

	FOR_LOOP_DELAY(loop_var, 100);

	//disable LTEDSPPLL
	*PLL_ARM7PLL_CON0		  &= (~(0x8000));
	switch (clk)
    {
        case DSP_CLOCK_250M:
			// LTEDSPPLL = 250Mhz
			*PLL_ARM7PLL_CON2				= 0x8026;
			*PLL_ARM7PLL_CON3				= 0x1D89;
        	break;
        case DSP_CLOCK_300M:
			// LTEDSPPLL = 300Mhz
			*PLL_ARM7PLL_CON2				= 0x802E;
			*PLL_ARM7PLL_CON3				= 0x09D8;
        	break;
		default:
			break;
    }
	//enable LTEDSPPLL
	*PLL_ARM7PLL_CON0              |= 0x8000; //Bit  15: LTEDSP_EN

	//delay 20us to be stable.
	FOR_LOOP_DELAY(loop_var, 2000);
	
	//switch to LTEDSPPLL
	*PLL_CLKSW_CKSEL8          |= (1<<9);
	*PLL_CLKSW_CKSEL5          |= (1<<4);

}

void set_csw_lte_clksrc_swtich(PLL_clk_sel source)
{
	if (PLL_INVALID_SEL <= source)
		return;

	switch (source)
    {
        case PLL_DSPPLL_SEL:
			//switch to LTEDSPPLL, phy_fc1pll300m >= Phy_pll300m	
			*PLL_CLKSW_CKSEL5		   |= (1<<4);
			*PLL_CLKSW_CKSEL8		   |= (1<<9);
        	break;
        case PLL_CR4PLL_SEL:
			//switch to CR4PLL
			*PLL_CLKSW_CKSEL8          &= (~(1<<9));	
			*PLL_CLKSW_CKSEL5          &= (~(1<<4));
        	break;
		default:
			break;
    }	
}


#endif /* __MTK_TARGET__ --- should NOT be compiled on MODIS */
