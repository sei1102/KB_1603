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

// DynamicDataSetLoader
struct  DynamicDataSetLoader_t3713423532  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject DynamicDataSetLoader::augmentationObject
	GameObject_t3674682005 * ___augmentationObject_2;
	// System.String DynamicDataSetLoader::dataSetName
	String_t* ___dataSetName_3;

public:
	inline static int32_t get_offset_of_augmentationObject_2() { return static_cast<int32_t>(offsetof(DynamicDataSetLoader_t3713423532, ___augmentationObject_2)); }
	inline GameObject_t3674682005 * get_augmentationObject_2() const { return ___augmentationObject_2; }
	inline GameObject_t3674682005 ** get_address_of_augmentationObject_2() { return &___augmentationObject_2; }
	inline void set_augmentationObject_2(GameObject_t3674682005 * value)
	{
		___augmentationObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___augmentationObject_2, value);
	}

	inline static int32_t get_offset_of_dataSetName_3() { return static_cast<int32_t>(offsetof(DynamicDataSetLoader_t3713423532, ___dataSetName_3)); }
	inline String_t* get_dataSetName_3() const { return ___dataSetName_3; }
	inline String_t** get_address_of_dataSetName_3() { return &___dataSetName_3; }
	inline void set_dataSetName_3(String_t* value)
	{
		___dataSetName_3 = value;
		Il2CppCodeGenWriteBarrier(&___dataSetName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
