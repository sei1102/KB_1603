#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t4036178619;
// System.String
struct String_t;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t3154211006;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter>
struct List_1_t182525330;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct  JsonWriterSettings_t3394579648  : public Il2CppObject
{
public:
	// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::dateTimeSerializer
	WriteDelegate_1_t4036178619 * ___dateTimeSerializer_0;
	// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::maxDepth
	int32_t ___maxDepth_1;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::newLine
	String_t* ___newLine_2;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::prettyPrint
	bool ___prettyPrint_3;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::tab
	String_t* ___tab_4;
	// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::typeHintName
	String_t* ___typeHintName_5;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::useXmlSerializationAttributes
	bool ___useXmlSerializationAttributes_6;
	// Pathfinding.Serialization.JsonFx.TypeCoercionUtility Pathfinding.Serialization.JsonFx.JsonWriterSettings::coercion
	TypeCoercionUtility_t3154211006 * ___coercion_7;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<HandleCyclicReferences>k__BackingField
	bool ___U3CHandleCyclicReferencesU3Ek__BackingField_8;
	// System.Reflection.Assembly Pathfinding.Serialization.JsonFx.JsonWriterSettings::<DefaultAssembly>k__BackingField
	Assembly_t1418687608 * ___U3CDefaultAssemblyU3Ek__BackingField_9;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<TypeHintsOnlyWhenNeeded>k__BackingField
	bool ___U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10;
	// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::<DebugMode>k__BackingField
	bool ___U3CDebugModeU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<Pathfinding.Serialization.JsonFx.JsonConverter> Pathfinding.Serialization.JsonFx.JsonWriterSettings::converters
	List_1_t182525330 * ___converters_12;

public:
	inline static int32_t get_offset_of_dateTimeSerializer_0() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___dateTimeSerializer_0)); }
	inline WriteDelegate_1_t4036178619 * get_dateTimeSerializer_0() const { return ___dateTimeSerializer_0; }
	inline WriteDelegate_1_t4036178619 ** get_address_of_dateTimeSerializer_0() { return &___dateTimeSerializer_0; }
	inline void set_dateTimeSerializer_0(WriteDelegate_1_t4036178619 * value)
	{
		___dateTimeSerializer_0 = value;
		Il2CppCodeGenWriteBarrier(&___dateTimeSerializer_0, value);
	}

	inline static int32_t get_offset_of_maxDepth_1() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___maxDepth_1)); }
	inline int32_t get_maxDepth_1() const { return ___maxDepth_1; }
	inline int32_t* get_address_of_maxDepth_1() { return &___maxDepth_1; }
	inline void set_maxDepth_1(int32_t value)
	{
		___maxDepth_1 = value;
	}

	inline static int32_t get_offset_of_newLine_2() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___newLine_2)); }
	inline String_t* get_newLine_2() const { return ___newLine_2; }
	inline String_t** get_address_of_newLine_2() { return &___newLine_2; }
	inline void set_newLine_2(String_t* value)
	{
		___newLine_2 = value;
		Il2CppCodeGenWriteBarrier(&___newLine_2, value);
	}

	inline static int32_t get_offset_of_prettyPrint_3() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___prettyPrint_3)); }
	inline bool get_prettyPrint_3() const { return ___prettyPrint_3; }
	inline bool* get_address_of_prettyPrint_3() { return &___prettyPrint_3; }
	inline void set_prettyPrint_3(bool value)
	{
		___prettyPrint_3 = value;
	}

	inline static int32_t get_offset_of_tab_4() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___tab_4)); }
	inline String_t* get_tab_4() const { return ___tab_4; }
	inline String_t** get_address_of_tab_4() { return &___tab_4; }
	inline void set_tab_4(String_t* value)
	{
		___tab_4 = value;
		Il2CppCodeGenWriteBarrier(&___tab_4, value);
	}

	inline static int32_t get_offset_of_typeHintName_5() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___typeHintName_5)); }
	inline String_t* get_typeHintName_5() const { return ___typeHintName_5; }
	inline String_t** get_address_of_typeHintName_5() { return &___typeHintName_5; }
	inline void set_typeHintName_5(String_t* value)
	{
		___typeHintName_5 = value;
		Il2CppCodeGenWriteBarrier(&___typeHintName_5, value);
	}

	inline static int32_t get_offset_of_useXmlSerializationAttributes_6() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___useXmlSerializationAttributes_6)); }
	inline bool get_useXmlSerializationAttributes_6() const { return ___useXmlSerializationAttributes_6; }
	inline bool* get_address_of_useXmlSerializationAttributes_6() { return &___useXmlSerializationAttributes_6; }
	inline void set_useXmlSerializationAttributes_6(bool value)
	{
		___useXmlSerializationAttributes_6 = value;
	}

	inline static int32_t get_offset_of_coercion_7() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___coercion_7)); }
	inline TypeCoercionUtility_t3154211006 * get_coercion_7() const { return ___coercion_7; }
	inline TypeCoercionUtility_t3154211006 ** get_address_of_coercion_7() { return &___coercion_7; }
	inline void set_coercion_7(TypeCoercionUtility_t3154211006 * value)
	{
		___coercion_7 = value;
		Il2CppCodeGenWriteBarrier(&___coercion_7, value);
	}

	inline static int32_t get_offset_of_U3CHandleCyclicReferencesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___U3CHandleCyclicReferencesU3Ek__BackingField_8)); }
	inline bool get_U3CHandleCyclicReferencesU3Ek__BackingField_8() const { return ___U3CHandleCyclicReferencesU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CHandleCyclicReferencesU3Ek__BackingField_8() { return &___U3CHandleCyclicReferencesU3Ek__BackingField_8; }
	inline void set_U3CHandleCyclicReferencesU3Ek__BackingField_8(bool value)
	{
		___U3CHandleCyclicReferencesU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultAssemblyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___U3CDefaultAssemblyU3Ek__BackingField_9)); }
	inline Assembly_t1418687608 * get_U3CDefaultAssemblyU3Ek__BackingField_9() const { return ___U3CDefaultAssemblyU3Ek__BackingField_9; }
	inline Assembly_t1418687608 ** get_address_of_U3CDefaultAssemblyU3Ek__BackingField_9() { return &___U3CDefaultAssemblyU3Ek__BackingField_9; }
	inline void set_U3CDefaultAssemblyU3Ek__BackingField_9(Assembly_t1418687608 * value)
	{
		___U3CDefaultAssemblyU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CDefaultAssemblyU3Ek__BackingField_9, value);
	}

	inline static int32_t get_offset_of_U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10)); }
	inline bool get_U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10() const { return ___U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10() { return &___U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10; }
	inline void set_U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10(bool value)
	{
		___U3CTypeHintsOnlyWhenNeededU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CDebugModeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___U3CDebugModeU3Ek__BackingField_11)); }
	inline bool get_U3CDebugModeU3Ek__BackingField_11() const { return ___U3CDebugModeU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CDebugModeU3Ek__BackingField_11() { return &___U3CDebugModeU3Ek__BackingField_11; }
	inline void set_U3CDebugModeU3Ek__BackingField_11(bool value)
	{
		___U3CDebugModeU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_converters_12() { return static_cast<int32_t>(offsetof(JsonWriterSettings_t3394579648, ___converters_12)); }
	inline List_1_t182525330 * get_converters_12() const { return ___converters_12; }
	inline List_1_t182525330 ** get_address_of_converters_12() { return &___converters_12; }
	inline void set_converters_12(List_1_t182525330 * value)
	{
		___converters_12 = value;
		Il2CppCodeGenWriteBarrier(&___converters_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
