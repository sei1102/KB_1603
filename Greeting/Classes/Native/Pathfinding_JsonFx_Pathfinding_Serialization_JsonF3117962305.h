#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member
struct  Member_t3117962305  : public Il2CppObject
{
public:
	// System.String Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member::name
	String_t* ___name_0;
	// System.Reflection.MemberInfo Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member::member
	MemberInfo_t * ___member_1;
	// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member::hasDefaultValue
	bool ___hasDefaultValue_2;
	// System.Object Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member::defaultValue
	Il2CppObject * ___defaultValue_3;
	// System.Int32 Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member::index
	int32_t ___index_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Member_t3117962305, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(Member_t3117962305, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier(&___member_1, value);
	}

	inline static int32_t get_offset_of_hasDefaultValue_2() { return static_cast<int32_t>(offsetof(Member_t3117962305, ___hasDefaultValue_2)); }
	inline bool get_hasDefaultValue_2() const { return ___hasDefaultValue_2; }
	inline bool* get_address_of_hasDefaultValue_2() { return &___hasDefaultValue_2; }
	inline void set_hasDefaultValue_2(bool value)
	{
		___hasDefaultValue_2 = value;
	}

	inline static int32_t get_offset_of_defaultValue_3() { return static_cast<int32_t>(offsetof(Member_t3117962305, ___defaultValue_3)); }
	inline Il2CppObject * get_defaultValue_3() const { return ___defaultValue_3; }
	inline Il2CppObject ** get_address_of_defaultValue_3() { return &___defaultValue_3; }
	inline void set_defaultValue_3(Il2CppObject * value)
	{
		___defaultValue_3 = value;
		Il2CppCodeGenWriteBarrier(&___defaultValue_3, value);
	}

	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(Member_t3117962305, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
