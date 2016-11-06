#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode>
struct Dictionary_2_t612608542;

#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONClass
struct  JSONClass_t513845338  : public JSONNode_t4087157468
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,SimpleJSON.JSONNode> SimpleJSON.JSONClass::m_Dict
	Dictionary_2_t612608542 * ___m_Dict_0;

public:
	inline static int32_t get_offset_of_m_Dict_0() { return static_cast<int32_t>(offsetof(JSONClass_t513845338, ___m_Dict_0)); }
	inline Dictionary_2_t612608542 * get_m_Dict_0() const { return ___m_Dict_0; }
	inline Dictionary_2_t612608542 ** get_address_of_m_Dict_0() { return &___m_Dict_0; }
	inline void set_m_Dict_0(Dictionary_2_t612608542 * value)
	{
		___m_Dict_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Dict_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
