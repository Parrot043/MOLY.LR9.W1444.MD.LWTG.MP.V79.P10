/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*****************************************************************************/

/*****************************************************************************
 *
 * Filename:
 * ---------
 *   emi.h
 *
 * Project:
 * --------
 *   MOLY
 *
 * Description:
 * ------------
 *   Header file for EMI interface.
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
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/

#ifndef __EMI_MT6290_SERIES_H__
#define __EMI_MT6290_SERIES_H__

/*******************************************************************************
 * Define data structures.
 *******************************************************************************/

typedef struct drv_dram_info_s {
    unsigned int dual_rank;
    unsigned int row_num;
    unsigned int bank_num;
    unsigned int col_num;
    unsigned int bus_width;
    unsigned int apmcu_ofst;
    unsigned int apperi_ofst;
} drv_ramc_dram_info_t;

/*******************************************************************************
 * Define macros.
 *******************************************************************************/

/*******************************************************************************
 * Exported functions.
 *******************************************************************************/
unsigned int drv_ramc_get_dram_info(drv_ramc_dram_info_t * drv_ramc_dram_info);

#endif  /* __EBM_IF_H__ */

