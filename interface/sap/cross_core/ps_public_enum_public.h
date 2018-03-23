#ifndef _PS_PUBLIC_ENUM_PUBLIC_H_
#define _PS_PUBLIC_ENUM_PUBLIC_H_


#define MAX_APN_LEN             100
#define MAX_GPRS_USER_NAME_LEN 32
#define MAX_GPRS_PASSWORD_LEN  32
#define MAX_GPRS_APN_LEN       100


typedef enum
{
     IPV4_ADDR_TYPE      = 0X21,
     IPV6_ADDR_TYPE      = 0X57,
     IPV4V6_ADDR_TYPE    = 0X8D, 
     PPP_ADDR_TYPE       = 0X01,
     OSP_IHOSS_ADDR_TYPE = 0X02,
     NULL_PDP_ADDR_TYPE  = 0X03  /* This is added incase if no pdpaddrtype is 
                                  * specified */
}pdp_addr_type_enum;


typedef enum
{
     IPV4_ADDR_LEN = 0X04,
     IPV6_ADDR_LEN = 0X10,
     IPV4V6_ADDR_LEN = 0X14, 
     PPP_ADDR_LEN  = 0X0,
     OSP_IHOSS_ADDR_LEN = 0X0,
    /* NULL_PDP_ADDR_LEN = 0X02  Incase if no pdpaddr is specified then this
                                 length will be null */
    NULL_PDP_ADDR_LEN = 0X01,
    MAXIMUM_POSSIBLE_ADDR_LEN = IPV4V6_ADDR_LEN
}pdp_addr_len_enum;


#endif // _PS_PUBLIC_ENUM_PUBLIC_H_
