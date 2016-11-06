#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkManager
struct  NetworkManager_t2424564159  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject NetworkManager::objectPrefab
	GameObject_t3674682005 * ___objectPrefab_2;
	// System.String NetworkManager::ip
	String_t* ___ip_3;
	// System.String NetworkManager::port
	String_t* ___port_4;
	// System.Boolean NetworkManager::connected
	bool ___connected_5;

public:
	inline static int32_t get_offset_of_objectPrefab_2() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___objectPrefab_2)); }
	inline GameObject_t3674682005 * get_objectPrefab_2() const { return ___objectPrefab_2; }
	inline GameObject_t3674682005 ** get_address_of_objectPrefab_2() { return &___objectPrefab_2; }
	inline void set_objectPrefab_2(GameObject_t3674682005 * value)
	{
		___objectPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectPrefab_2, value);
	}

	inline static int32_t get_offset_of_ip_3() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___ip_3)); }
	inline String_t* get_ip_3() const { return ___ip_3; }
	inline String_t** get_address_of_ip_3() { return &___ip_3; }
	inline void set_ip_3(String_t* value)
	{
		___ip_3 = value;
		Il2CppCodeGenWriteBarrier(&___ip_3, value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___port_4)); }
	inline String_t* get_port_4() const { return ___port_4; }
	inline String_t** get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(String_t* value)
	{
		___port_4 = value;
		Il2CppCodeGenWriteBarrier(&___port_4, value);
	}

	inline static int32_t get_offset_of_connected_5() { return static_cast<int32_t>(offsetof(NetworkManager_t2424564159, ___connected_5)); }
	inline bool get_connected_5() const { return ___connected_5; }
	inline bool* get_address_of_connected_5() { return &___connected_5; }
	inline void set_connected_5(bool value)
	{
		___connected_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
