
#ifndef __PFB_REG_H__
#define __PFB_REG_H__

#include <reg_base.h>

#ifdef MT6290

    #define REG_PFB_CTRL         (BASE_ADDR_MDMCUMISC + 0x0C)
    #define REG_PFB_TOTAL_CNT    (BASE_ADDR_MDMCUMISC + 0x18)

#elif (defined(MT6595) || defined(MT6752) || defined(MT6735))

    #define MD_MCU2EMI_CON0      (BASE_ADDR_MDCONFIG + 0x0200)
    #define MD_MCU2EMI_STATUS0   (BASE_ADDR_MDCONFIG + 0x0204)
    #define MD_PFBUFFER_STATUS0  (BASE_ADDR_MDCONFIG + 0x0210)
    #define MD_PFBUFFER_STATUS1  (BASE_ADDR_MDCONFIG + 0x0214)
    #define MD_PFBUFFER_STATUS2  (BASE_ADDR_MDCONFIG + 0x0218)
    #define MD_PFBUFFER_STATUS3  (BASE_ADDR_MDCONFIG + 0x021C)

    #define REG_PFB_CTRL         (MD_MCU2EMI_CON0)
        #define PFB_EN           (1 << 0)
        #define PFB_COUNTER_EN   (1 << 1)
        #define PFB_LEN_EQ4      (1 << 2)
#ifdef MT6735
        #define PFB_PFLEN_SEL    (1 << 20)	// 0 : 32 bytes, 1 : 64 bytes
#endif // MT6735
    #define REG_PFB_STATUS       (MD_MCU2EMI_STATUS0)
        #define PFB_SI0_UPDATED  (1 << 0)
#ifdef MT6735
        #define PFB_EN_UPDATED   (1 << 29)
#endif // MT6735
    #define REG_PFB_CM_TOTAL_CNT (MD_PFBUFFER_STATUS3)
    #define REG_PFB_PF_TOTAL_CNT (MD_PFBUFFER_STATUS2)
    #define REG_PFB_HIT_CNT      (MD_PFBUFFER_STATUS1)
    #define REG_PFB_CON_HIT_CNT  (MD_PFBUFFER_STATUS0)

#endif // MT6290

#endif /* __PFB_REG_H__ */
