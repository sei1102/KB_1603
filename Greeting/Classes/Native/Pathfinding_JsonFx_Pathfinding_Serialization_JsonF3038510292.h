#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3323877696;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2646837914;
// System.Collections.Generic.Dictionary`2<System.Type,System.Boolean>
struct Dictionary_2_t582221203;
// System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,System.Boolean>
struct Dictionary_2_t2213137431;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter
struct  ReferenceHandlerWriter_t3038510292  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::mapping
	Dictionary_2_t3323877696 * ___mapping_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean> Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::hasBeenSerialized
	Dictionary_2_t2646837914 * ___hasBeenSerialized_1;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Boolean> Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::isHandledCache
	Dictionary_2_t582221203 * ___isHandledCache_2;
	// System.Collections.Generic.Dictionary`2<System.Reflection.MemberInfo,System.Boolean> Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::isOwnedRefCache
	Dictionary_2_t2213137431 * ___isOwnedRefCache_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(ReferenceHandlerWriter_t3038510292, ___mapping_0)); }
	inline Dictionary_2_t3323877696 * get_mapping_0() const { return ___mapping_0; }
	inline Dictionary_2_t3323877696 ** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(Dictionary_2_t3323877696 * value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier(&___mapping_0, value);
	}

	inline static int32_t get_offset_of_hasBeenSerialized_1() { return static_cast<int32_t>(offsetof(ReferenceHandlerWriter_t3038510292, ___hasBeenSerialized_1)); }
	inline Dictionary_2_t2646837914 * get_hasBeenSerialized_1() const { return ___hasBeenSerialized_1; }
	inline Dictionary_2_t2646837914 ** get_address_of_hasBeenSerialized_1() { return &___hasBeenSerialized_1; }
	inline void set_hasBeenSerialized_1(Dictionary_2_t2646837914 * value)
	{
		___hasBeenSerialized_1 = value;
		Il2CppCodeGenWriteBarrier(&___hasBeenSerialized_1, value);
	}

	inline static int32_t get_offset_of_isHandledCache_2() { return static_cast<int32_t>(offsetof(ReferenceHandlerWriter_t3038510292, ___isHandledCache_2)); }
	inline Dictionary_2_t582221203 * get_isHandledCache_2() const { return ___isHandledCache_2; }
	inline Dictionary_2_t582221203 ** get_address_of_isHandledCache_2() { return &___isHandledCache_2; }
	inline void set_isHandledCache_2(Dictionary_2_t582221203 * value)
	{
		___isHandledCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___isHandledCache_2, value);
	}

	inline static int32_t get_offset_of_isOwnedRefCache_3() { return static_cast<int32_t>(offsetof(ReferenceHandlerWriter_t3038510292, ___isOwnedRefCache_3)); }
	inline Dictionary_2_t2213137431 * get_isOwnedRefCache_3() const { return ___isOwnedRefCache_3; }
	inline Dictionary_2_t2213137431 ** get_address_of_isOwnedRefCache_3() { return &___isOwnedRefCache_3; }
	inline void set_isOwnedRefCache_3(Dictionary_2_t2213137431 * value)
	{
		___isOwnedRefCache_3 = value;
		Il2CppCodeGenWriteBarrier(&___isOwnedRefCache_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
