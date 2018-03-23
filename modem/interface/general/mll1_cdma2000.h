#ifndef _MLL1_CDMA2000_H
#define _MLL1_CDMA2000_H

#include "kal_public_defs.h" /*for LOCAL_PARA_HDR*/
#include "mll1_common.h"



/*****************************************************************************
* STRUCT
*   cdma2000_time_struct
*
* DESCRIPTIONS
*   CDMA2000 system timing base
*
* PARAMETERS
*   sfn         - ??? -1 = IMMEDIATELY
*   sub_frame   - ???
*   sample      - ???
*****************************************************************************/
typedef struct
{
  kal_uint32 sfn;
  kal_uint8  sub_frame;
  kal_uint16 sample;
}cdma2000_time_struct;

/*****************************************************************************
* STRUCT
*   cdma2000_drx_gap_struct
*
* DESCRIPTIONS
*   cdma2000 drx gap structure.
*
* PARAMETERS
*   start_time  - start time of the gap session
*   length      - length of the gap session (in sub_frame)
*   is_drx_tick   - KAL_TRUE : First tick in this DRX period
*                   KAL_FALSE: Not the first free interval in this DRX period
*****************************************************************************/
typedef struct
{
   cdma2000_time_struct start_time;
   kal_int32            length;
   kal_bool             is_drx_tick;
}cdma2000_drx_gap_struct;

/*****************************************************************************
* STRUCT
*   cl1_ll1_gap_pattern_ind_struct
*
* DESCRIPTIONS
*   CL1 sends this message to inform LL1 that the free RF period in CL1 as gap pattern. 
* PARAMETERS
*   LOCAL_PARA_HDR  
*   cl1_current_time - Ul1 current time
*   idle_gap         - No matter the length is bigger than zero or not, 
*                      CL1 should send this message and sets is_drx_tick = KAL_TRUE in one DRX period once.
*****************************************************************************/
typedef struct
{
   LOCAL_PARA_HDR
   cdma2000_time_struct     cl1_current_time;
   cdma2000_drx_gap_struct  idle_gap;
}cl1_ll1_gap_pattern_ind_struct;

/*****************************************************************************
* STRUCT
*   mll1_cl1_info_database_struct
*
* DESCRIPTIONS
*   CL1 information structure.
*
* PARAMETERS
*
*****************************************************************************/
typedef struct
{  /* measure req*/
   kal_uint8                           tick_bmp;            /* use to record tick bitmap*/
   kal_uint8                           rank_tick_tid;       /* tid for rank tick*/
   kal_uint8                           prio_tick_tid;       /* tid for prio tick*/
   kal_uint8                           meas_done_bmp;       /* measurement done ind bitmap*/
   kal_bool                            is_meas_done_useful; /* umts fdd uses meas_done or not by checking meas_purpose_bmp*/
   kal_uint8                           meas_purpose_bitmap; /* record the measure purpose bitmap*/
   cdma2000_time_struct                current_time;        /* umts fdd current time when request gap service*/
   /* Mode status*/
   ll1_active_rat_mode_status_enum     mode_status;         /* mode status*/   
   /* GAP pattern*/
   cl1_ll1_gap_pattern_ind_struct      gap_pattern;         /* Gap pattern */
   /* Gap request from standby rat should do sync in connection*/
   kal_bool                            valid_timing;        /* KAL_TRUE  : with valid timing */
                                                            /* KAL_FALSE : with invalid timing */
   kal_uint8                           meas_req_tid;        /* Tid for lastest meas_req on, LL1 will expand gap notify ind with this tid*/
}mll1_cl1_info_database_struct;

/*****************************************************************************
* FUNCTION
*  mll1_cdma2000_handler()
* DESCRIPTION
*   Function to handle the primitive from CL1
*
* PARAMETERS
*   current_ilm - primitive from CL1.
*
* RETURNS
*  none
*****************************************************************************/
void mll1_cdma2000_handler(void *ptr_ilm);

/*****************************************************************************
* FUNCTION
*   mll1_cl1_gap_service_req
* DESCRIPTION
*   ll1 sends gap service req to CDMA2000 now
*
* PARAMETERS
*   enable   - KAL_TRUE  : turn on gap service 
*            - KAL_FALSE : turn off gap service
* RETURNS
*   none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void mll1_cl1_gap_service_req(kal_bool enable);

/*****************************************************************************
* FUNCTION
*   mll1_cl1_get_current_time
* DESCRIPTION
*   ll1 gets current time + ahead margin to expand gap
*
* PARAMETERS
*   cdma2000_time - start time of expansion period
*   kal_bool is_ahead_time
*         TRUE : advance eutran_time with the predefined ahead_time
*         FALSE: don't advance eutran_time with the predefined ahead_time
* RETURNS
*   none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void mll1_cl1_get_current_time(cdma2000_time_struct* cdma2000_time, kal_bool is_ahead_time);

/*****************************************************************************
* FUNCTION
*   mll1_cl1_get_timing_status
* DESCRIPTION
*
* PARAMETERS
* RETURNS
*   kal_bool  - valid_timing KAL_TRUE  : with valid timing 
*                            KAL_FALSE : with invalid timing 
* GLOBALS AFFECTED
*   none
*****************************************************************************/
kal_bool mll1_cl1_get_timing_status(void);

/*****************************************************************************
* FUNCTION
*   mll1_cl1_set_timing_status
* DESCRIPTION
*
* PARAMETERS
*   flag     - set valid_timing = flag
* RETURNS
*   none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void mll1_cl1_set_timing_status(kal_bool flag);

/*****************************************************************************
* FUNCTION
*   mll1_cl1_update_current_time
* DESCRIPTION
*   ll1 updates current after timing sync done
*
* PARAMETERS
*   cdma2000_time - current time
* RETURNS
*   none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void mll1_cl1_update_current_time(cdma2000_time_struct* cdma2000_time);

/*****************************************************************************
* FUNCTION
*   mll1_cl1_sync_time_req
* DESCRIPTION
*   When timing synchronization procedure is triggered, mll1 will decide which rat should do 
*   timing synchronization based on the result of g_ll1_standby_rat || g_ll1_active_rat.
*
* PARAMETERS
* RETURNS
*   none
* GLOBALS AFFECTED
*   none
*****************************************************************************/
void mll1_cl1_sync_time_req(void);

#endif /*_MLL1_CDMA2000_H*/
