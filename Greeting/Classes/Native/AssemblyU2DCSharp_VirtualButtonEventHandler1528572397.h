#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t170856778;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t943818363;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1974256870;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualButtonEventHandler
struct  VirtualButtonEventHandler_t1528572397  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Material[] VirtualButtonEventHandler::m_TeapotMaterials
	MaterialU5BU5D_t170856778* ___m_TeapotMaterials_2;
	// UnityEngine.GameObject VirtualButtonEventHandler::mTeapot
	GameObject_t3674682005 * ___mTeapot_3;
	// System.Collections.Generic.List`1<UnityEngine.Material> VirtualButtonEventHandler::mActiveMaterials
	List_1_t943818363 * ___mActiveMaterials_4;

public:
	inline static int32_t get_offset_of_m_TeapotMaterials_2() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1528572397, ___m_TeapotMaterials_2)); }
	inline MaterialU5BU5D_t170856778* get_m_TeapotMaterials_2() const { return ___m_TeapotMaterials_2; }
	inline MaterialU5BU5D_t170856778** get_address_of_m_TeapotMaterials_2() { return &___m_TeapotMaterials_2; }
	inline void set_m_TeapotMaterials_2(MaterialU5BU5D_t170856778* value)
	{
		___m_TeapotMaterials_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_TeapotMaterials_2, value);
	}

	inline static int32_t get_offset_of_mTeapot_3() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1528572397, ___mTeapot_3)); }
	inline GameObject_t3674682005 * get_mTeapot_3() const { return ___mTeapot_3; }
	inline GameObject_t3674682005 ** get_address_of_mTeapot_3() { return &___mTeapot_3; }
	inline void set_mTeapot_3(GameObject_t3674682005 * value)
	{
		___mTeapot_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTeapot_3, value);
	}

	inline static int32_t get_offset_of_mActiveMaterials_4() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1528572397, ___mActiveMaterials_4)); }
	inline List_1_t943818363 * get_mActiveMaterials_4() const { return ___mActiveMaterials_4; }
	inline List_1_t943818363 ** get_address_of_mActiveMaterials_4() { return &___mActiveMaterials_4; }
	inline void set_mActiveMaterials_4(List_1_t943818363 * value)
	{
		___mActiveMaterials_4 = value;
		Il2CppCodeGenWriteBarrier(&___mActiveMaterials_4, value);
	}
};

struct VirtualButtonEventHandler_t1528572397_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> VirtualButtonEventHandler::<>f__switch$map0
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map0_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> VirtualButtonEventHandler::<>f__switch$map1
	Dictionary_2_t1974256870 * ___U3CU3Ef__switchU24map1_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_5() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1528572397_StaticFields, ___U3CU3Ef__switchU24map0_5)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map0_5() const { return ___U3CU3Ef__switchU24map0_5; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map0_5() { return &___U3CU3Ef__switchU24map0_5; }
	inline void set_U3CU3Ef__switchU24map0_5(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map0_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map0_5, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_6() { return static_cast<int32_t>(offsetof(VirtualButtonEventHandler_t1528572397_StaticFields, ___U3CU3Ef__switchU24map1_6)); }
	inline Dictionary_2_t1974256870 * get_U3CU3Ef__switchU24map1_6() const { return ___U3CU3Ef__switchU24map1_6; }
	inline Dictionary_2_t1974256870 ** get_address_of_U3CU3Ef__switchU24map1_6() { return &___U3CU3Ef__switchU24map1_6; }
	inline void set_U3CU3Ef__switchU24map1_6(Dictionary_2_t1974256870 * value)
	{
		___U3CU3Ef__switchU24map1_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
