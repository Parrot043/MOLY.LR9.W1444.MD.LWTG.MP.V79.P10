#ifndef _MMI_SM_ENUMS_PUBLIC_H
#define _MMI_SM_ENUMS_PUBLIC_H

#include "ps_public_enum_public.h"

/* Define the length of user_name, password and APN for internal PDP context */
/* Poying: MAUI_02735345 */
#define INT_MAX_GPRS_USER_NAME_LEN  MAX_GPRS_USER_NAME_LEN
#define INT_MAX_GPRS_PASSWORD_LEN   MAX_GPRS_PASSWORD_LEN
#define INT_MAX_GPRS_APN_LEN        MAX_GPRS_APN_LEN

/* Poying: MSBB: Move to ps_public_enum.h. */
//#define MAX_NUM_CONFIG_OPTION_PACKETS   5

/* Poying: MAUI_02735345 */
#define TCM_MAX_GPRS_USER_NAME_LEN  INT_MAX_GPRS_USER_NAME_LEN
#define TCM_MAX_GPRS_PASSWORD_LEN   INT_MAX_GPRS_PASSWORD_LEN
#define TCM_MAX_GPRS_APN_LEN        INT_MAX_GPRS_APN_LEN


typedef enum
{
    PRIMARY_CONTEXT,
    SECONDARY_CONTEXT,
    UNKNOWN_CONTEXT
}pdp_context_type_enum;

#endif // _MMI_SM_ENUMS_PUBLIC_H
