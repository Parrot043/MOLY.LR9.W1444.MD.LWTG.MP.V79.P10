/*******************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2001
*
*******************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 *	nvram_mml1_default.c
 *
 * Project:
 * --------
 *   MT7206RF
 *
 * Description:
 * ------------
 *   
 *
 * Author:
 * -------
 *	
 *
 *******************************************************************************/
/*===============================================================================================*/

#include "kal_general_types.h"
#include "kal_public_api.h"
#include "kal_public_defs.h"
#include "nvram_data_items.h"

#include "mml1_custom_mipi.h"


void nvram_get_mmL1_default_value_to_write(nvram_lid_core_enum lid, kal_uint8 *buffer, kal_uint16 buffer_size)
{
   kal_uint8 index_select;

   switch (lid)
   {
#ifdef __RF_DRDI_CAPABILITY_SUPPORT__
      case NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_LID:
      {
        kal_mem_cpy(buffer, &MML1_DRDI_STATUS, NVRAM_EF_MML1_CUSTOM_DYNAMIC_INIT_SIZE);
      }
      break;
#endif
      case NVRAM_EF_MML1_MIPI_INITIAL_CW_LID:
      {
        kal_mem_cpy(buffer, &MML1_MIPI_INITIAL_CW, NVRAM_EF_MML1_MIPI_INITIAL_CW_SIZE);
      }
      break;
      case NVRAM_EF_MML1_MIPI_USID_CHANGE_LID:
      {
        kal_mem_cpy(buffer, &MML1_MIPI_USID_CHANGE_TABLE, NVRAM_EF_MML1_MIPI_USID_CHANGE_SIZE);
      }
      break;
      default:
         ASSERT(KAL_FALSE);
      break;
   }
}

