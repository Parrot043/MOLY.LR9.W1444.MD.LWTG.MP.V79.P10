#ifndef _L4C_COMMON_PUBLIC_ENUM_H
#define _L4C_COMMON_PUBLIC_ENUM_H

// for IPv6 and IPv4v6
typedef enum
{
   TCM_ACTIVATE_PDP_NEED_REQUEST_IPV6_DNS = 0,
   TCM_ACTIVATE_PDP_NOT_REQUEST_IPV6_DNS =1
}l4c_tcm_activate_pdp_request_ipv6_dns_enum;

// for IPv4 DNS address request
typedef enum
{
   TCM_ACTIVATE_PDP_WITHOUT_DNSV4_ADDRESS_REQUEST = 0,
   TCM_ACTIVATE_PDP_WITH_DNSV4_ADDRESS_REQUEST = 1
}l4c_tcm_activate_pdp_with_dnsv4_address_enum ;

#endif // _L4C_COMMON_PUBLIC_ENUM_H
