#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[]>
struct Dictionary_2_t1260639281;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member>
struct List_1_t191180561;
// System.Comparison`1<Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member>
struct Comparison_1_t1834323492;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct  TypeCoercionUtility_t3154211006  : public Il2CppObject
{
public:
	// System.Boolean Pathfinding.Serialization.JsonFx.TypeCoercionUtility::allowNullValueTypes
	bool ___allowNullValueTypes_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[]> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::writingMaps
	Dictionary_2_t1260639281 * ___writingMaps_1;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::memberList
	List_1_t191180561 * ___memberList_2;

public:
	inline static int32_t get_offset_of_allowNullValueTypes_0() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t3154211006, ___allowNullValueTypes_0)); }
	inline bool get_allowNullValueTypes_0() const { return ___allowNullValueTypes_0; }
	inline bool* get_address_of_allowNullValueTypes_0() { return &___allowNullValueTypes_0; }
	inline void set_allowNullValueTypes_0(bool value)
	{
		___allowNullValueTypes_0 = value;
	}

	inline static int32_t get_offset_of_writingMaps_1() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t3154211006, ___writingMaps_1)); }
	inline Dictionary_2_t1260639281 * get_writingMaps_1() const { return ___writingMaps_1; }
	inline Dictionary_2_t1260639281 ** get_address_of_writingMaps_1() { return &___writingMaps_1; }
	inline void set_writingMaps_1(Dictionary_2_t1260639281 * value)
	{
		___writingMaps_1 = value;
		Il2CppCodeGenWriteBarrier(&___writingMaps_1, value);
	}

	inline static int32_t get_offset_of_memberList_2() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t3154211006, ___memberList_2)); }
	inline List_1_t191180561 * get_memberList_2() const { return ___memberList_2; }
	inline List_1_t191180561 ** get_address_of_memberList_2() { return &___memberList_2; }
	inline void set_memberList_2(List_1_t191180561 * value)
	{
		___memberList_2 = value;
		Il2CppCodeGenWriteBarrier(&___memberList_2, value);
	}
};

struct TypeCoercionUtility_t3154211006_StaticFields
{
public:
	// System.Comparison`1<Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member> Pathfinding.Serialization.JsonFx.TypeCoercionUtility::<>f__am$cache0
	Comparison_1_t1834323492 * ___U3CU3Ef__amU24cache0_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_3() { return static_cast<int32_t>(offsetof(TypeCoercionUtility_t3154211006_StaticFields, ___U3CU3Ef__amU24cache0_3)); }
	inline Comparison_1_t1834323492 * get_U3CU3Ef__amU24cache0_3() const { return ___U3CU3Ef__amU24cache0_3; }
	inline Comparison_1_t1834323492 ** get_address_of_U3CU3Ef__amU24cache0_3() { return &___U3CU3Ef__amU24cache0_3; }
	inline void set_U3CU3Ef__amU24cache0_3(Comparison_1_t1834323492 * value)
	{
		___U3CU3Ef__amU24cache0_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
