#ifndef _TCM_CONTEXT_PUBLIC_H
#define _TCM_CONTEXT_PUBLIC_H

/* for R12 */
typedef enum {
    REQUEST_TYPE_INITIAL_REQUEST = 1,
    REQUEST_TYPE_HANDOVER = 2,
    REQUEST_TYPE_UNUSED = 3,
    REQUEST_TYPE_EMERGENCY = 4,    
}tcm_request_type_enum;

/** P-CSCF address discovery method */
typedef enum {
    P_CSCF_ADDR_DISCOVERY_VIA_NONE                  = 0,   /**< none */
    P_CSCF_ADDR_DISCOVERY_VIA_NAS_SIGNALLING        = 1,   /**< NAS signalling */
    P_CSCF_ADDR_DISCOVERY_VIA_DHCP                  = 2    /**< DHCP */
}tcm_p_cscf_discovery_enum;

/** IM CN signalling */
typedef enum {
    NOT_FOR_IM_CN_SIGNALLING    = 0,      /**< not */
    FOR_IM_CN_SIGNALLING        = 1       /**< IM CN signalling */
}tcm_im_cn_signalling_enum;

#endif //_TCM_CONTEXT_PUBLIC_H
