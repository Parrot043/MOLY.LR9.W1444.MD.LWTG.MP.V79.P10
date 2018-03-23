#ifndef _IRAT_COMMON_ENUMS_PUBLIC_H
#define _IRAT_COMMON_ENUMS_PUBLIC_H

typedef enum
{
    IR_TYPE_HO          = 0x00, //Indicates the inter-RAT procedure is handover procedure
    IR_TYPE_CCO         = 0x01, //Indicates the inter-RAT procedure is cell change order procedure. Note that this enumeration is only used between 2G and 4G.
    IR_TYPE_CCO_STAGE1  = 0x02, //Indicates the inter-RAT procedure is cell change order procedure before NAS starts to perform LU/RAU procedure for stage 2 contention phase. Note that this enumeration is only used between 2G and 4G.
    IR_TYPE_CCO_STAGE2  = 0x03, //Indicates the inter-RAT procedure is cell change order procedure for stage 2 contention phase. Note that this enumeration is only used between 2G and 4G.
    IR_TYPE_REDIRECT    = 0x04, //Indicates the inter-RAT procedure is redirection procedure
    IR_TYPE_CR          = 0x05, //Indicates the inter-RAT procedure is autonomous cell reselection procedure
    IR_TYPE_SEARCH      = 0x06, //This enumeration is only used by NAS to trigger search procedure. AS will not receive this enumeration.
    IR_TYPE_MPSR        = 0x07, //More preferred system reselection. Only for C2K
    IR_TYPE_SYS_LOSS    = 0x08  //System loss system reselection. Only for C2K

} irat_type_enum;

#define MAX_NUM_OF_EARFCN 8

#endif // _IRAT_COMMON_ENUMS_PUBLIC_H
