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
// SimpleJSON.JSONArray
struct JSONArray_t512192827;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1180048494.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleJSON.JSONArray/<>c__Iterator2
struct  U3CU3Ec__Iterator2_t592205557  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1/Enumerator<SimpleJSON.JSONNode> SimpleJSON.JSONArray/<>c__Iterator2::<$s_5>__0
	Enumerator_t1180048494  ___U3CU24s_5U3E__0_0;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator2::<N>__1
	JSONNode_t4087157468 * ___U3CNU3E__1_1;
	// System.Int32 SimpleJSON.JSONArray/<>c__Iterator2::$PC
	int32_t ___U24PC_2;
	// SimpleJSON.JSONNode SimpleJSON.JSONArray/<>c__Iterator2::$current
	JSONNode_t4087157468 * ___U24current_3;
	// SimpleJSON.JSONArray SimpleJSON.JSONArray/<>c__Iterator2::<>f__this
	JSONArray_t512192827 * ___U3CU3Ef__this_4;

public:
	inline static int32_t get_offset_of_U3CU24s_5U3E__0_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator2_t592205557, ___U3CU24s_5U3E__0_0)); }
	inline Enumerator_t1180048494  get_U3CU24s_5U3E__0_0() const { return ___U3CU24s_5U3E__0_0; }
	inline Enumerator_t1180048494 * get_address_of_U3CU24s_5U3E__0_0() { return &___U3CU24s_5U3E__0_0; }
	inline void set_U3CU24s_5U3E__0_0(Enumerator_t1180048494  value)
	{
		___U3CU24s_5U3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CNU3E__1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator2_t592205557, ___U3CNU3E__1_1)); }
	inline JSONNode_t4087157468 * get_U3CNU3E__1_1() const { return ___U3CNU3E__1_1; }
	inline JSONNode_t4087157468 ** get_address_of_U3CNU3E__1_1() { return &___U3CNU3E__1_1; }
	inline void set_U3CNU3E__1_1(JSONNode_t4087157468 * value)
	{
		___U3CNU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator2_t592205557, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator2_t592205557, ___U24current_3)); }
	inline JSONNode_t4087157468 * get_U24current_3() const { return ___U24current_3; }
	inline JSONNode_t4087157468 ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(JSONNode_t4087157468 * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_4() { return static_cast<int32_t>(offsetof(U3CU3Ec__Iterator2_t592205557, ___U3CU3Ef__this_4)); }
	inline JSONArray_t512192827 * get_U3CU3Ef__this_4() const { return ___U3CU3Ef__this_4; }
	inline JSONArray_t512192827 ** get_address_of_U3CU3Ef__this_4() { return &___U3CU3Ef__this_4; }
	inline void set_U3CU3Ef__this_4(JSONArray_t512192827 * value)
	{
		___U3CU3Ef__this_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif