#ifndef __MDDBG_PUBLIC_H__
#define __MDDBG_PUBLIC_H__

typedef enum MDDBG_HDL_TYPE_e {
    MDDBG_HT_HALT,
    MDDBG_HT_MEMDUMP,
    MDDBG_HT_LOG,
    MDDBG_HT_MAX,
} MDDBG_HDL_TYPE;

typedef enum MDDBG_WP_ACCESS_TYPE_e {
    MDDBG_WAT_READ = 1,
    MDDBG_WAT_WRITE,
    MDDBG_WAT_RW,
    MDDBG_WAT_MAX,
} MDDBG_WP_ACCESS_TYPE;

typedef enum MDDBG_WP_MONITOR_BYTE_e {
    MDDBG_WMB_1BYTE = 1,
    MDDBG_WMB_2BYTES,
    MDDBG_WMB_3BYTES,
    MDDBG_WMB_4BYTES,
    MDDBG_WMB_MAX,
} MDDBG_WP_MONITOR_BYTE;

typedef enum MDDBG_RESULT_e {
    MDDBG_SUCCESS,
    MDDBG_INVALID_PARAM,
    MDDBG_BP_TOO_MANY,
    MDDBG_BP_ALREADY_ENABLED,
    MDDBG_BP_ALREADY_DISABLED,
    MDDBG_WP_TOO_MANY,
    MDDBG_WP_MON_OUT_OF_RANGE,
} MDDBG_RESULT;

typedef struct mddbg_bp_info {
    kal_uint32 address;
    kal_bool enable;
} mddbg_bp_info_st;

typedef struct mddbg_wp_info {
    kal_uint32 address;
    kal_uint32 mask;
    MDDBG_WP_ACCESS_TYPE access_type;
    kal_bool enable;
} mddbg_wp_info_st;

MDDBG_RESULT mddbg_enable(MDDBG_HDL_TYPE);
MDDBG_RESULT mddbg_disable(void);
MDDBG_RESULT mddbg_query(kal_uint32 *, kal_uint32 *);
MDDBG_RESULT mddbg_enable_bps(void);
MDDBG_RESULT mddbg_disable_bps(void);
MDDBG_RESULT mddbg_set_bp(kal_uint32, kal_bool);
MDDBG_RESULT mddbg_enable_wps(void);
MDDBG_RESULT mddbg_disable_wps(void);
MDDBG_RESULT mddbg_set_wp(kal_uint32, MDDBG_WP_MONITOR_BYTE, MDDBG_WP_ACCESS_TYPE, kal_bool enable);
MDDBG_RESULT mddbg_set_wp_range(kal_uint32, kal_uint32, MDDBG_WP_ACCESS_TYPE, kal_bool);
#if 0
/* under construction !*/
/* under construction !*/
#endif


#endif // __MDDBG_PUBLIC_H__