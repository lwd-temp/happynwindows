#ifndef _H_NET_INTERFACE
#define _H_NET_INTERfACE


BOOL set_netinterface_name_by_id(WCHAR device_uuid[]);
DWORD get_adapter_friendly_name(CHAR* adapter_name, WCHAR* friendly_name, ULONG max_name_length);
void get_mac_address(WCHAR* mac_address, WCHAR* guid);
void get_addresses(WCHAR* ip_address, WCHAR* mac_address);
bool validate_ipv4_address(WCHAR* ip_address);
bool validate_mac_address(WCHAR* mac_address);
bool validate_number_range(WCHAR* num, int min, int max);

#endif