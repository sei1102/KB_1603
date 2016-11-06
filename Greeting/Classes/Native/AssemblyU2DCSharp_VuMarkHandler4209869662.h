#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PanelShowHide
struct PanelShowHide_t1258405859;
// Vuforia.VuMarkManager
struct VuMarkManager_t4267959307;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t3123531359;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuMarkHandler
struct  VuMarkHandler_t4209869662  : public MonoBehaviour_t667441552
{
public:
	// PanelShowHide VuMarkHandler::mIdPanel
	PanelShowHide_t1258405859 * ___mIdPanel_2;
	// Vuforia.VuMarkManager VuMarkHandler::mVuMarkManager
	VuMarkManager_t4267959307 * ___mVuMarkManager_3;
	// Vuforia.VuMarkTarget VuMarkHandler::mClosestVuMark
	Il2CppObject * ___mClosestVuMark_4;
	// Vuforia.VuMarkTarget VuMarkHandler::mCurrentVuMark
	Il2CppObject * ___mCurrentVuMark_5;

public:
	inline static int32_t get_offset_of_mIdPanel_2() { return static_cast<int32_t>(offsetof(VuMarkHandler_t4209869662, ___mIdPanel_2)); }
	inline PanelShowHide_t1258405859 * get_mIdPanel_2() const { return ___mIdPanel_2; }
	inline PanelShowHide_t1258405859 ** get_address_of_mIdPanel_2() { return &___mIdPanel_2; }
	inline void set_mIdPanel_2(PanelShowHide_t1258405859 * value)
	{
		___mIdPanel_2 = value;
		Il2CppCodeGenWriteBarrier(&___mIdPanel_2, value);
	}

	inline static int32_t get_offset_of_mVuMarkManager_3() { return static_cast<int32_t>(offsetof(VuMarkHandler_t4209869662, ___mVuMarkManager_3)); }
	inline VuMarkManager_t4267959307 * get_mVuMarkManager_3() const { return ___mVuMarkManager_3; }
	inline VuMarkManager_t4267959307 ** get_address_of_mVuMarkManager_3() { return &___mVuMarkManager_3; }
	inline void set_mVuMarkManager_3(VuMarkManager_t4267959307 * value)
	{
		___mVuMarkManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___mVuMarkManager_3, value);
	}

	inline static int32_t get_offset_of_mClosestVuMark_4() { return static_cast<int32_t>(offsetof(VuMarkHandler_t4209869662, ___mClosestVuMark_4)); }
	inline Il2CppObject * get_mClosestVuMark_4() const { return ___mClosestVuMark_4; }
	inline Il2CppObject ** get_address_of_mClosestVuMark_4() { return &___mClosestVuMark_4; }
	inline void set_mClosestVuMark_4(Il2CppObject * value)
	{
		___mClosestVuMark_4 = value;
		Il2CppCodeGenWriteBarrier(&___mClosestVuMark_4, value);
	}

	inline static int32_t get_offset_of_mCurrentVuMark_5() { return static_cast<int32_t>(offsetof(VuMarkHandler_t4209869662, ___mCurrentVuMark_5)); }
	inline Il2CppObject * get_mCurrentVuMark_5() const { return ___mCurrentVuMark_5; }
	inline Il2CppObject ** get_address_of_mCurrentVuMark_5() { return &___mCurrentVuMark_5; }
	inline void set_mCurrentVuMark_5(Il2CppObject * value)
	{
		___mCurrentVuMark_5 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentVuMark_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
