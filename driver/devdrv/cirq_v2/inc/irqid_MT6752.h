#ifndef __MT6752_IRQID_H__
#define __MT6752_IRQID_H__
/* MD IRQID LIST */
#define MD_IRQID_OST                 (0)
#define MD_IRQID_ALC1                (1)
#define MD_IRQID_LMAC_RAR            (2)
#define MD_IRQID_LMAC_EAR            (3)
#define MD_IRQID_MD_WDT              (4)
//#define MD_IRQID_AP_WDT            (5)  //removed: compare to 6290
#define MD_IRQID_CCIF_ACK            (6)
#define MD_IRQID_CCIF_VLD            (7)
#define MD_IRQID_CLDMA               (8)
//#define MD_IRQID_RAMC              (9)  //removed: compare to 6290
//#define MD_IRQID_SPI_ERROR         (10)  //removed: compare to 6290
//#define MD_IRQID_NFI               (11)  //removed: compare to 6290
#define MD_IRQID_L2COPRO             (12)
#define MD_IRQID_USB2                (13)

//#define MD_IRQID_SDIO              (16)  //removed: compare to 6290
//#define MD_IRQID_MSDC0             (17)  //removed: compare to 6290
//#define MD_IRQID_EHPI0             (18)  //removed: compare to 6290
//#define MD_IRQID_NIC               (19)  //removed: compare to 6290
#define MD_IRQID_RSV_0	             (14)
#define MD_IRQID_RSV_1	             (15)
#define MD_IRQID_RSV_2	             (16)
#define MD_IRQID_RSV_3	             (17)
#define MD_IRQID_RSV_4	             (18)
#define MD_IRQID_RSV_5	             (19)

#define MD_IRQID_MDGPTM_EVENT1       (20)
#define MD_IRQID_MDGPTM_EVENT2       (21)
#define MD_IRQID_MDGPTM_EVENT3       (22)
#define MD_IRQID_MDGPTM_EVENT4       (23)
#define MD_IRQID_MDGPTM_EVENT5       (24)
#define MD_IRQID_MDGPTM_EVENT6       (25)
#define MD_IRQID_MDUART              (27)
#define MD_IRQID_PERIUART0           (28)
#define MD_IRQID_BUSMON              (29)
#define MD_IRQID_PCMON               (30)

//#define MD_IRQID_I2C               (31)  //removed: compare to 6290
#define MD_IRQID_RSV_6               (31)

#define MD_IRQID_USIM1               (32)
#define MD_IRQID_USIM2               (33)

#define MD_IRQID_RSV_7               (34)
//#define MD_IRQID_LED               (35)  //removed: compare to 6290
//#define MD_IRQID_RTC               (36)  //removed: compare to 6290
//#define MD_IRQID_SOE               (37)  //removed: compare to 6290

#define MD_IRQID_DSP_IRQ_EVENT       (38)
#define MD_IRQID_DSP_TIMER           (39)
#define MD_IRQID_DSP_L1DMA           (40)
//#define MD_IRQID_PERIUART1         (41)  //removed: compare to 6290
#define MD_IRQID_MDGDMA0             (42)
#define MD_IRQID_MDGDMA1             (43)
#define MD_IRQID_MDGDMA2             (44)
#define MD_IRQID_MDGDMA3             (45)
#define MD_IRQID_EINT0               (46)
#define MD_IRQID_EINT1               (47)
#define MD_IRQID_EINT2               (48)
#define MD_IRQID_EINT3               (49)
#define MD_IRQID_EINT_SHARE          (50)
//#define MD_IRQID_ALC2              (51)  //removed: compare to 6290
//#define MD_IRQID_MSDC1             (52)  //removed: compare to 6290
//#define MD_IRQID_BUS_ERR           (53)  //removed: compare to 6290
#define MD_IRQID_MD_TOPSM            (54)
#define MD_IRQID_TDD_IRQ             (55)
#define MD_IRQID_TDD_WAKEUP          (56)
//#define MD_IRQID_DEM_TRIG          (57)  //removed: compare to 6290
#define MD_IRQID_CA_DL_LMAC_RAR      (58)
#define MD_IRQID_CA_DL_LMAC_EAR      (59)
#define MD_IRQID_USB_MCU_INT_1P      (60)  //add: compare to 6290
#define MD_IRQID_MDMCU_BUSMON        (61)  //add: compare to 6290
#define MD_IRQID_USB_MCU_HOST_IRQ_0P (62)  //add: compare to 6290
#define MD_IRQID_RSV_8               (63)
#define MD_IRQID_BT_CVSD             (64)
#define MD_IRQID_PMIC_WRAP_ERR       (65)  //add: compare to 6290
#define MD_IRQID_DEBUG_MD            (66)  //add: compare to 6290
#define MD_IRQID_PMU                 (67)  //add: compare to 6290
//#define MD_IRQID_PFC               (68)  //removed: compare to 6290
#define MD_IRQID_BSICTRL_IMM_RDINT   (69)
#define MD_IRQID_CAIF_VALID          (70)
#define MD_IRQID_CAIF_ACK            (71)
#define MD_IRQID_A7WDT               (72)
//#define MD_IRQID_PERFCNT           (73)  //removed: compare to 6290
#define MD_IRQID_LTE2MD_PEER_WAKEUP  (79)
#define MD_IRQID_C1_IRQ_T1           (80)
#define MD_IRQID_C1_IRQ_T6           (81)
#define MD_IRQID_MD_CCIF0            (82)
#define MD_IRQID_MD_CCIF1            (83)
#define MD_IRQID_MD_PCCIF0           (84)
#define MD_IRQID_MD_PCCIF1           (85)
#define MD_IRQID_MD_PCCIF2           (86)
#define MD_IRQID_MD_PCCIF3           (87)
#define MD_IRQID_IDC2ARM             (90)
#define MD_IRQID_AUXADC              (91)  //removed: compare to 6290
#define MD_IRQID_MODEMSYS_00	(96)
#define MD_IRQID_MODEMSYS_01	(97)
#define MD_IRQID_MODEMSYS_02	(98)
#define MD_IRQID_MODEMSYS_03	(99)
#define MD_IRQID_MODEMSYS_04	(100)
#define MD_IRQID_MODEMSYS_05	(101)
#define MD_IRQID_MODEMSYS_06	(102)
#define MD_IRQID_MODEMSYS_07	(103)
#define MD_IRQID_MODEMSYS_08	(104)
#define MD_IRQID_MODEMSYS_09	(105)
#define MD_IRQID_MODEMSYS_10	(106)
#define MD_IRQID_MODEMSYS_11	(107)
#define MD_IRQID_MODEMSYS_12	(108)
#define MD_IRQID_MODEMSYS_13	(109)
#define MD_IRQID_MODEMSYS_14	(110)
#define MD_IRQID_MODEMSYS_15	(111)
#define MD_IRQID_MODEMSYS_16	(112)
#define MD_IRQID_MODEMSYS_17	(113)
#define MD_IRQID_MODEMSYS_18	(114)
#define MD_IRQID_MODEMSYS_19	(115)
#define MD_IRQID_MODEMSYS_20	(116)
#define MD_IRQID_MODEMSYS_21	(117)
#define MD_IRQID_MODEMSYS_22	(118)
#define MD_IRQID_MODEMSYS_23	(119)
#define MD_IRQID_MODEMSYS_24	(120)
#define MD_IRQID_MODEMSYS_25	(121)
#define MD_IRQID_MODEMSYS_26	(122)
#define MD_IRQID_MODEMSYS_27	(123)
#define MD_IRQID_MODEMSYS_28	(124)
#define MD_IRQID_MODEMSYS_29	(125)
#define MD_IRQID_MODEMSYS_30	(126)
#define MD_IRQID_MODEMSYS_31	(127)


/* ARM7 IRQID LIST */
#define ARM7_IRQID_EINT_SHARE	(28)
#define ARM7_IRQID_EINT3	(27)
#define ARM7_IRQID_BUSMON_INT	(26)
#define ARM7_IRQID_EMI_INT	(25)
#define ARM7_IRQID_D2M_INT	(24)
#define ARM7_IRQID_OSTIMER_INT	(23)
#define ARM7_IRQID_SLV_ACC_ERR	(22)
#define ARM7_IRQID_EMI_ACC_ERR	(21)
#define ARM7_IRQID_MDGDMA3	(20)
#define ARM7_IRQID_MDGDMA2	(19)
#define ARM7_IRQID_MDGDMA1	(18)
#define ARM7_IRQID_MDGDMA0	(17)
#define ARM7_IRQID_DSP_L1DMA	(16)
#define ARM7_IRQID_DSP_TIMER	(15)
#define ARM7_IRQID_DSP_IRQ_EVENT	(14)
#define ARM7_IRQID_UART_SH1	(13)
#define ARM7_IRQID_UART_SH0	(12)
#define ARM7_IRQID_UART_MD	(11)
#define ARM7_IRQID_MDGPTM6	(10)
#define ARM7_IRQID_MDGPTM5	(9)
#define ARM7_IRQID_MDGPTM4	(8)
#define ARM7_IRQID_MDGPTM3	(7)
#define ARM7_IRQID_MDGPTM2	(6)
#define ARM7_IRQID_MDGPTM1	(5)
#define ARM7_IRQID_CCIF_A7_VLD_INT	(4)
#define ARM7_IRQID_CCIF_A7_ACK_INT	(3)
#define ARM7_IRQID_L2COPRO	(2)
#define ARM7_IRQID_LMAC_EAR	(1)
#define ARM7_IRQID_LMAC_RAR	(0)


#endif /*end of __MT6752_IRQID_H__*/
