﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SimpleJSON.JSONNode
struct JSONNode_t4087157468;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONNode/<>c__Iterator0
struct  U3CU3Ec__Iterator0_t2061311794  : public Il2CppObject
{
public:
	// System.Int32 SimpleJSON.JSONNode/<>c__Iterator0::$PC
	int32_t ___U24PC_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONNode/<>c__Iterator0::$current
	JSONNode_t4087157468 * ___U24current_1;

public:
	inline static int32_t get_offset_of_U24PC_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2061311794, ___U24PC_0)); }
	inline int32_t get_U24PC_0() const { return ___U24PC_0; }
	inline int32_t* get_address_of_U24PC_0() { return &___U24PC_0; }
	inline void set_U24PC_0(int32_t value)
	{
		___U24PC_0 = value;
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator0_t2061311794, ___U24current_1)); }
	inline JSONNode_t4087157468 * get_U24current_1() const { return ___U24current_1; }
	inline JSONNode_t4087157468 ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(JSONNode_t4087157468 * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
