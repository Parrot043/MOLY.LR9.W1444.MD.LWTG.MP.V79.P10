#ifndef _SIM_PUBLIC_ENUM_PUBLIC_H_
#define _SIM_PUBLIC_ENUM_PUBLIC_H_

/** 256 bytes for data + 5 bytes header information: CLA,INS,P1,P2,P3 */
#define APDU_REQ_MAX_LEN                  (261)

/** 256 bytes for data + 2 bytes status word SW1 and SW2 */
#define APDU_RSP_MAX_LEN                  (258)


/** sim error cause */
typedef enum
{
  SIM_CARD_REMOVED,       /**< card removed */
  SIM_ACCESS_ERROR,       /**< access error */
  SIM_REFRESH,            /**< sim refresh */
  SIM_REFRESH_POWER_OFF,  /**< sim refresh power off */
  SIM_PUK1,               /**< sim puk1 */
  SIM_ACCESS_PROFILE_ON,  /**< access profile on */
  SIM_ACCESS_PROFILE_OFF, /**< access profile off */
  DUALSIM_DISCONNECTED,   /**< dual sim disconnected */
  DUALSIM_CONNECTED,      /**< dual sim connected */
  SIM_VSIM_ON,            /**< vsim on */
  SIM_VSIM_OFF,           /**< vsim off */
  SIM_PLUG_OUT,           /**< sim plug out */
  SIM_PLUG_IN,            /**< sim plug in */
  SIM_RECOVERY_START,     /**< sim recovery start */
  SIM_RECOVERY_END,       /**< sim recovery end */
  SIM_IMEI_LOCK_FAIL,     /**< sim IMEI lock failure */
  SIM_OP09_LOCK_FAIL,
  SIM_CARD_TECHNICAL_PROBLEM
}sim_error_cause_enum;

/** sim command result */
typedef enum
{
  SIM_CMD_SUCCESS        = 2560,  /**< sim command success */
  SIM_CMD_FAIL           = 2561,  /**< sim command failure */
  SIM_FATAL_ERROR        = 2562,  /**< sim fatal error */
  SIM_NO_INSERTED        = 2563,  /**< sim no inserted */
  SIM_CHV_NOT_INIT       = 2564,  /**< sim pin not initialisation */
  SIM_CHV_RETRY_ALLOW    = 2565,  /**< sim pin retry allowed */
  SIM_CHV_BLOCK          = 2566,  /**< sim pin block */
  SIM_ACCESS_NOT_ALLOW   = 2567,  /**< sim access not allowed */
  SIM_SAT_CMD_BUSY       = 2568,  /**< sim sat command busy */
  SIM_DL_ERROR           = 2569,  /**< sim DL error */
  SIM_MEMORY_PROBLEM     = 2570,  /**< sim memory problem */
  SIM_TECHNICAL_PROBLEM  = 2571,  /**< sim technical problem */
  SIM_PUK_UNLOCK         = 2572,  /**< sim puk unblock */
  SIM_EF_RECORD_FULL     = 2573,  /**< sim EF record full */
  SIM_SELECT_FILE_INVALID = 2574, /**< sim select file invalid */
  SIM_SELECT_DF_TERMINATED = 2575,/**< sim select DF terminated */
  SIM_NO_EF_SELECTED       = 2576,/**< sim no EF selected */
  SIM_FILE_NOT_FOUND       = 2577,/**< sim file not found */
  SIM_RECORD_NOT_FOUND     = 2578,/**< sim record not found */
  SIM_REF_DATA_NOT_FOUND   = 2579,/**< sim REF data not found */
  SIM_INCREASE_FAIL        = 2580,/**< sim increase failure */
  SIM_AUTH_ERROR_WRONG_MAC = 2581,/**< sim autn error wrong MAC */
  SIM_AUTH_ERROR_GSM_NOT_SUPPORT = 2582,/**< sim auth error GSM not support */
  SIM_WRONG_INSTRUCTION_CLASS    = 2583 /**< sim wrong instruction class */
}sim_cmd_result_enum;

/** uicc channel number */
typedef enum
{
    USIM_DEFAULT_CH = 0x00,
    USIM_LOGIC_CH_1 = 0x01,
    USIM_LOGIC_CH_2 = 0x02,
    USIM_LOGIC_CH_3 = 0x03,
    USIM_LOGIC_CH_4 = 0x04,
    USIM_LOGIC_CH_5 = 0x05,
    USIM_LOGIC_CH_6 = 0x06,
    USIM_LOGIC_CH_7 = 0x07,
    USIM_LOGIC_CH_8 = 0x08,
    USIM_LOGIC_CH_9 = 0x09,
    USIM_LOGIC_CH_10 = 0x0a,
    USIM_LOGIC_CH_11 = 0x0b,
    USIM_LOGIC_CH_12 = 0x0c,
    USIM_LOGIC_CH_13 = 0x0d,
    USIM_LOGIC_CH_14 = 0x0e,
    USIM_LOGIC_CH_15 = 0x0f,
    USIM_LOGIC_CH_16 = 0x10,
    USIM_LOGIC_CH_17 = 0x11,
    USIM_LOGIC_CH_18 = 0x12,
    USIM_LOGIC_CH_19 = 0x13,
    USIM_LOGIC_CH_SIZE,
    USIM_LOGIC_CH_INVALID = 0xFF
} usim_logic_channel_enum;

typedef enum
{
    AKA_CONTEXT,
    GBA_CONTEXT,
    MAX_AUTH_CONTEXT
} uicc_auth_mode_enum;

#endif // _SIM_PUBLIC_ENUM_PUBLIC_H_

