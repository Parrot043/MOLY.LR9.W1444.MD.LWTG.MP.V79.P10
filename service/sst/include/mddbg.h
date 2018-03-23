#ifndef __SST_MDDBG__
#define __SST_MDDBG__


#if defined(__MTK_SECURE_PLATFORM__) || defined(__PRODUCTION_RELEASE__) || !defined(__MTK_TARGET__) || !defined(__CR4__)
    #define DISABLE_MDDBG_FUNCTION
#endif

#if !defined(DISABLE_MDDBG_FUNCTION)

#include "kal_public_api.h"
#include "ex_item.h"

//#define MDDBG_API_UT_SUPPORT

/* MDDBG Flags */
#define MDDBG_CTRL_BY_ICE          (1UL<< 0)
#define MDDBG_CTRL_BY_TARGET       (1UL<< 1)
#define MDDBG_CTRL_INIT_VAL        (1UL<<30)
#define MDDBG_MODE_M2H             (1UL<<29)
#define MDDBG_MODE_COND_CHECK      (1UL<<28)
#define MDDBG_MODE_LOG_ONLY        (1UL<<27)
#define MDDBG_MODE_TASK_INIT_SET   (1UL<<26)
extern void mddbg_backup(void);
extern void mddbg_restore(void);
extern void mddbg_init(void);

enum mddbg_def_db{
    MDDBG_VAR_COUNT=16U,
    MDDBG_CONDITION_BUFFER=128U,
    MDDBG_BP_MASK_OFFSET=0U,
    MDDBG_WP_MASK_OFFSET=8U,
    /* ILM Comands, bit15-0 are reserved for BP/WP */
    MDDBG_CMD_SETBP   = 1U<<31,
    MDDBG_CMD_SETWP   = 1U<<30,
    MDDBG_CMD_SETCOND = 1U<<29,
    MDDBG_CMD_MONITOR = 1U<<28,
    MDDBG_CMD_HALTING = 1U<<27,
    MDDBG_CMD_M2H     = 1U<<26,
    MDDBG_CMD_LOG     = 1U<<25, /* Output log, the MONITOR must be 1 */
    MDDBG_CMD_QUERY   = 1U<<24, /* Query Status */
#ifdef MDDBG_API_UT_SUPPORT
    MDDBG_API_UT_WP_MONITOR_MASK    = 0xF000,
    MDDBG_API_UT_WP_MONITOR_SHIFT   = 12,
    MDDBG_API_UT_WP_TYPE_MASK       = 0x0F00,
    MDDBG_API_UT_WP_TYPE_SHIFT      = 8,
    MDDBG_API_UT_HDL_TYPE_MASK      = 0x00F0,
    MDDBG_API_UT_HDL_TYPE_SHIFT     = 4,
    MDDBG_API_UT_ACTION_MASK        = 0x000F,
    MDDBG_API_UT_ACTION_SHIFT       = 0,
    MDDBG_API_UT_ACT_MEM_READ       = 11,
    MDDBG_API_UT_ACT_SET_WP_RGE     = 10,
    MDDBG_API_UT_ACT_SET_WP         = 9,
    MDDBG_API_UT_ACT_DIS_WPS        = 8,
    MDDBG_API_UT_ACT_EN_WPS         = 7,
    MDDBG_API_UT_ACT_SET_BP         = 6,
    MDDBG_API_UT_ACT_DIS_BPS        = 5,
    MDDBG_API_UT_ACT_EN_BPS         = 4,
    MDDBG_API_UT_ACT_QUERY          = 3,
    MDDBG_API_UT_ACT_DISABLE        = 2,
    MDDBG_API_UT_ACT_ENABLE         = 1,
#endif

#if defined(MT6290)||defined(MT6595)||defined(MT6752)
    CHIP_BP_CNT=2,
    CHIP_WP_CNT=1,
#elif defined(MT6291)||defined(MT6735)
    CHIP_BP_CNT=8,
    CHIP_WP_CNT=8,
#else  /* Chip defined */
    #error "UnSupport Chip Setting"
#endif /* Chip defined */
};

typedef enum {
    arm_r0   = 0,
    arm_r1   = 1, 
    arm_r2   = 2,
    arm_r3   = 3,
    arm_r4   = 4,
    arm_r5   = 5,
    arm_r6   = 6,
    arm_r7   = 7,
    arm_r8   = 8,
    arm_r9   = 9,
    arm_r10  = 10,
    arm_r11  = 11,
    arm_r12  = 12,
    arm_sp   = 13,
    arm_lr   = 14,
    arm_pc   = 15,
    arm_cpsr = 16,
//    arm_spsr = 17,
    arm_reg_num
}arm_reg_type;

typedef struct mddbg_req{
    kal_uint8  ref_count;
    kal_uint16 msg_len;
    kal_uint32 cmd;        //setting flags, which kinds of parameter is enabled, enable/disable/query
    kal_uint32 proc_idx;
    kal_uint32 bvr[CHIP_BP_CNT];
    kal_uint32 bcr[CHIP_BP_CNT];
    kal_uint32 wvr[CHIP_WP_CNT];
    kal_uint32 wcr[CHIP_WP_CNT];
    kal_uint32 var[MDDBG_VAR_COUNT];
    kal_uint16 hit_count_B[CHIP_BP_CNT];
    kal_uint16 hit_count_W[CHIP_WP_CNT];
    kal_uint16 hit_count_Log;
    kal_uint8  condition[MDDBG_CONDITION_BUFFER];      //expression, context ID, check value, ..
}mddbg_req_struct;

typedef struct mddbg_response{
    kal_uint8  ref_count;
    kal_uint16 msg_len;
    kal_uint32 cmd;        //setting flags, which kinds of parameter is enabled, enable/disable/query
    kal_uint32 proc_idx;
    kal_uint32 bvr[CHIP_BP_CNT];
    kal_uint32 bcr[CHIP_BP_CNT];
    kal_uint32 wvr[CHIP_WP_CNT];
    kal_uint32 wcr[CHIP_WP_CNT];
    kal_uint32 var[MDDBG_VAR_COUNT];
    kal_uint16 hit_count_B[CHIP_BP_CNT];
    kal_uint16 hit_count_W[CHIP_WP_CNT];
    kal_uint16 hit_count_Log;
    kal_uint8  condition[MDDBG_CONDITION_BUFFER];      //expression, context ID, check value, ..
}mddbg_response_struct;
typedef void (*get_next_instr_cb)(unsigned int next_addr);

#endif /* !DISABLE_MDDBG_FUNCTION */

#endif /* __SST_MDDBG__ */

