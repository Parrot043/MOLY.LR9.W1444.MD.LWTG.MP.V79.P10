#ifndef _MMI_L3_ENUMS_PUBLIC_H
#define _MMI_L3_ENUMS_PUBLIC_H

/* The following definitions have been packed in enumeration for future
 * increase of compression algorithms */

typedef enum
{
    SND_RFC_1144,
    SND_NUM_OF_PCOMP_ALGOS,
    SND_NO_PCOMP,
    SND_PCOMP_TOTAL_NUM
}snd_pcomp_algo_enum;

typedef enum
{
    SND_V42_BIS,
    SND_NUM_OF_DCOMP_ALGOS,
    SND_NO_DCOMP,
    SND_DCOMP_TOTAL_NUM
}snd_dcomp_algo_enum;

#endif //_MMI_L3_ENUMS_PUBLIC_H
