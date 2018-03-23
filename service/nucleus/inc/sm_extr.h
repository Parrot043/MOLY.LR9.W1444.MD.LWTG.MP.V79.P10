/*************************************************************************/
/*                                                                       */
/*        Copyright (c) 1993-2001 Accelerated Technology, Inc.           */
/*                                                                       */
/* PROPRIETARY RIGHTS of Accelerated Technology are involved in the      */
/* subject matter of this material.  All manufacturing, reproduction,    */
/* use, and sales rights pertaining to this subject matter are governed  */
/* by the license agreement.  The recipient of this software implicitly  */
/* accepts the terms of the license.                                     */
/*                                                                       */
/*************************************************************************/

/*************************************************************************/
/*                                                                       */
/* FILE NAME                                            VERSION          */
/*                                                                       */
/*      sm_extr.h                                       PLUS  1.13       */
/*                                                                       */
/* COMPONENT                                                             */
/*                                                                       */
/*      SM - Semaphore Management                                        */
/*                                                                       */
/* DESCRIPTION                                                           */
/*                                                                       */
/*      This file contains function prototypes of all functions          */
/*      accessible to other components.                                  */
/*                                                                       */
/* AUTHOR                                                                */
/*                                                                       */
/*      Accelerated Technology, Inc.                                     */
/*                                                                       */
/* DATA STRUCTURES                                                       */
/*                                                                       */
/*      None                                                             */
/*                                                                       */
/* FUNCTIONS                                                             */
/*                                                                       */
/*      None                                                             */
/*                                                                       */
/* DEPENDENCIES                                                          */
/*                                                                       */
/*      sm_defs.h                           Semaphore Management constant*/
/*                                                                       */
/* HISTORY                                                               */
/*                                                                       */
/*         DATE                    REMARKS                               */
/*                                                                       */
/*      03-01-1993      Created initial version 1.0                      */
/*      04-19-1993      Verified version 1.0                             */
/*      03-01-1994      Moved include files outside of                   */
/*                      the file #ifndef to allow the                    */
/*                      use of actual data structures,                   */
/*                      modified function prototypes,                    */
/*                      resulting in version 1.1                         */
/*                                                                       */
/*      03-18-1994      Verified version 1.1                             */
/*      04-17-1996      updated to version 1.2                           */
/*      03-24-1998      Released version 1.3                             */
/*                                                                       */
/*************************************************************************/
/*=========================================================================
*             HISTORY
* Below this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*--------------------------------------------------------------------------
* $Revision$
* $Modtime$
* $Log$
*
* 03 19 2014 hc.yang
 * removed!
* .
*
*--------------------------------------------------------------------------
* Upper this line, this part is controlled by PVCS VM. DO NOT MODIFY!!
*========================================================================*/

#include        "sm_defs.h"                 /* Include SM constants      */


/* Check to see if the file has been included already.  */

#ifndef SM_EXTR
#define SM_EXTR


/*  Initialization functions.  */

VOID            SMI_Initialize(VOID);


/* Error checking core functions.  */

STATUS          SMCE_Create_Semaphore(NU_SEMAPHORE *semaphore_ptr, CHAR *name,
                        UNSIGNED initial_count, OPTION suspend_type);
STATUS          SMCE_Delete_Semaphore(NU_SEMAPHORE *semaphore_ptr);
STATUS          SMCE_Obtain_Semaphore(NU_SEMAPHORE *semaphore_ptr, 
                                                        UNSIGNED suspend);
STATUS          SMCE_Release_Semaphore(NU_SEMAPHORE *semaphore_ptr);


/* Error checking supplemental functions.  */

STATUS          SMSE_Reset_Semaphore(NU_SEMAPHORE *semaphore_ptr, 
                                                    UNSIGNED initial_count);


/* Core processing functions.  */

STATUS          SMC_Create_Semaphore(NU_SEMAPHORE *semaphore_ptr, CHAR *name,
                        UNSIGNED initial_count, OPTION suspend_type);
STATUS          SMC_Delete_Semaphore(NU_SEMAPHORE *semaphore_ptr);
STATUS          SMC_Obtain_Semaphore(NU_SEMAPHORE *semaphore_ptr, 
                                                        UNSIGNED suspend);
STATUS          SMC_Release_Semaphore(NU_SEMAPHORE *semaphore_ptr);


/* Supplemental processing functions.  */

STATUS          SMS_Reset_Semaphore(NU_SEMAPHORE *semaphore_ptr, 
                                                UNSIGNED initial_count);


/* Information retrieval functions.  */

UNSIGNED        SMF_Established_Semaphores(VOID);
STATUS          SMF_Semaphore_Information(NU_SEMAPHORE *semaphore_ptr, 
                  CHAR *name, UNSIGNED *current_count, OPTION *suspend_type, 
                  UNSIGNED *tasks_waiting, NU_TASK **first_task);
UNSIGNED        SMF_Semaphore_Pointers(NU_SEMAPHORE **pointer_list, 
                                                UNSIGNED maximum_pointers);
#endif


