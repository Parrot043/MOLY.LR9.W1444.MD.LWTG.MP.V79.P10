/*!
 *  @file nmu.h
 *  @author Roger Huang <chaomin.haung@mediatek.com>
 *  @version 1.0
 *  @section LICENSE
 *
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
 *  @section DESCRIPTION
 *  This file provides interface of nmu ( network management unit )
 */

#ifndef _NMU_H
#define _NMU_H

#define DECLARE_NMU_ETH_ENUM(_prefix) \
    NMU_ ## _prefix ## _UP, \
    NMU_ ## _prefix ## _HOST_MAC, \
    NMU_ ## _prefix ## _GATEWAY_MAC, \
    NMU_ ## _prefix ## _TX_PKT_CNT, \
    NMU_ ## _prefix ## _RX_PKT_CNT, \
    NMU_ ## _prefix ## _TX_BYTE_CNT, \
    NMU_ ## _prefix ## _RX_BYTE_CNT, \
    NMU_ ## _prefix ## _TX_DROP_PKT_CNT, \
    NMU_ ## _prefix ## _RX_DROP_PKT_CNT,

#define DECLARE_NMU_IP_ENUM(_prefix) \
    NMU_ ## _prefix ## _UP, \
    NMU_ ## _prefix ## _ADDR, \
    NMU_ ## _prefix ## _MASK, \
    NMU_ ## _prefix ## _GATEWAY, \
    NMU_ ## _prefix ## _MTU_SIZE, \
    NMU_ ## _prefix ## _DNS_NUM, \
    NMU_ ## _prefix ## _DNS1, \
    NMU_ ## _prefix ## _DNS2, \
    NMU_ ## _prefix ## _IP6_UP, \
    NMU_ ## _prefix ## _IP6_PREFIX, \
    NMU_ ## _prefix ## _IP6_PREFIX_LEN, \
    NMU_ ## _prefix ## _IP6_IID, \
    NMU_ ## _prefix ## _IP6_IID_LEN, \
    NMU_ ## _prefix ## _IP6_MTU_SIZE, \
    NMU_ ## _prefix ## _IP6_DNS_NUM, \
    NMU_ ## _prefix ## _IP6_DNS1, \
    NMU_ ## _prefix ## _IP6_DNS2,

/*!
 *  @brief nmu_entry_e enumberate all information entry support in nmu
 */
typedef enum _nmu_entry_e {
    NMU_MTU_SIZE,           /* Maximal transmission unit in bytes.
                               Default value is 1500. */
    NMU_UL_SPEED,           /* Uplink speed in unit of bps. */
    NMU_DL_SPEED,           /* Downlink speed in unit of bps. */

    DECLARE_NMU_ETH_ENUM(ETH0)
    DECLARE_NMU_ETH_ENUM(ETH1)
    DECLARE_NMU_ETH_ENUM(ETH2)
    DECLARE_NMU_ETH_ENUM(ETH3)
    DECLARE_NMU_ETH_ENUM(ETH4)
    DECLARE_NMU_ETH_ENUM(ETH5)
    DECLARE_NMU_ETH_ENUM(ETH6)
    DECLARE_NMU_ETH_ENUM(ETH7)
    DECLARE_NMU_ETH_ENUM(ETH8)
    DECLARE_NMU_ETH_ENUM(ETH9)
    DECLARE_NMU_ETH_ENUM(ETH10)
    DECLARE_NMU_ETH_ENUM(ETH11)
    DECLARE_NMU_ETH_ENUM(ETH12)
    DECLARE_NMU_ETH_ENUM(ETH13)
    DECLARE_NMU_ETH_ENUM(ETH14)
    DECLARE_NMU_ETH_ENUM(ETH15)

    DECLARE_NMU_IP_ENUM(IP0)
    DECLARE_NMU_IP_ENUM(IP1)
    DECLARE_NMU_IP_ENUM(IP2)
    DECLARE_NMU_IP_ENUM(IP3)
    DECLARE_NMU_IP_ENUM(IP4)
    DECLARE_NMU_IP_ENUM(IP5)
    DECLARE_NMU_IP_ENUM(IP6)
    DECLARE_NMU_IP_ENUM(IP7)
    DECLARE_NMU_IP_ENUM(IP8)
    DECLARE_NMU_IP_ENUM(IP9)
    DECLARE_NMU_IP_ENUM(IP10)
    DECLARE_NMU_IP_ENUM(IP11)
    DECLARE_NMU_IP_ENUM(IP12)
    DECLARE_NMU_IP_ENUM(IP13)
    DECLARE_NMU_IP_ENUM(IP14)
    DECLARE_NMU_IP_ENUM(IP15)

    /* always be the last line */
    NMU_MAX_ENTRY,
} nmu_entry_e;

typedef kal_uint8                   nmu_eth_addr_t[6];
typedef kal_uint32                  nmu_in_addr_t;
typedef kal_uint32                  nmu_in6_addr_t[4];
typedef kal_uint8                   nmu_status_t;
typedef kal_uint32                  nmu_stat_t;

/*!
 *  @brief nmu_nvram_table_t is a collection of network information stored
 *                           in nvram
 */
typedef struct _nmu_nvram_table {
    kal_uint32              make_compiler_happy;
    nmu_eth_addr_t          eth0_host_mac;

} nmu_nvram_table_t;

/*!
 *  @brief  nmu init function
 */
void nmu_init(void);


/*!
 *  @brief  write entry value to nmu
 *  @param  entry entry enum value
 *  @param  len   the length to write
 *  @param  data  pointer to the start address of entry data
 *  @return KAL_TRUE if success, KAL_FALSE if entry not exist, or Read Only
 *          attribute is set
 */
kal_bool nmu_set_property(nmu_entry_e entry, kal_uint32 len, void* data);


/*!
 *  @brief  read entry value from nmu
 *  @param  entry entry enum value
 *  @param  len   the length to read
 *  @param  data  pointer to the start address of entry data
 *  @return KAL_TRUE if success, KAL_FALSE if entry not exist, or
 *          data buffer is not big enough
 */
kal_bool nmu_get_property(nmu_entry_e entry, kal_uint32 len, void* data);


#endif  // _NMU_H

