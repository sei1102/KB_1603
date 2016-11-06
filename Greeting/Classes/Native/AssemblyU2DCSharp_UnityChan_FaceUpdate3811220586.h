#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationClip[]
struct AnimationClipU5BU5D_t4186127791;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityChan.FaceUpdate
struct  FaceUpdate_t3811220586  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.AnimationClip[] UnityChan.FaceUpdate::animations
	AnimationClipU5BU5D_t4186127791* ___animations_2;
	// UnityEngine.Animator UnityChan.FaceUpdate::anim
	Animator_t2776330603 * ___anim_3;
	// System.Single UnityChan.FaceUpdate::delayWeight
	float ___delayWeight_4;
	// System.Boolean UnityChan.FaceUpdate::isKeepFace
	bool ___isKeepFace_5;
	// System.Single UnityChan.FaceUpdate::current
	float ___current_6;

public:
	inline static int32_t get_offset_of_animations_2() { return static_cast<int32_t>(offsetof(FaceUpdate_t3811220586, ___animations_2)); }
	inline AnimationClipU5BU5D_t4186127791* get_animations_2() const { return ___animations_2; }
	inline AnimationClipU5BU5D_t4186127791** get_address_of_animations_2() { return &___animations_2; }
	inline void set_animations_2(AnimationClipU5BU5D_t4186127791* value)
	{
		___animations_2 = value;
		Il2CppCodeGenWriteBarrier(&___animations_2, value);
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(FaceUpdate_t3811220586, ___anim_3)); }
	inline Animator_t2776330603 * get_anim_3() const { return ___anim_3; }
	inline Animator_t2776330603 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animator_t2776330603 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_delayWeight_4() { return static_cast<int32_t>(offsetof(FaceUpdate_t3811220586, ___delayWeight_4)); }
	inline float get_delayWeight_4() const { return ___delayWeight_4; }
	inline float* get_address_of_delayWeight_4() { return &___delayWeight_4; }
	inline void set_delayWeight_4(float value)
	{
		___delayWeight_4 = value;
	}

	inline static int32_t get_offset_of_isKeepFace_5() { return static_cast<int32_t>(offsetof(FaceUpdate_t3811220586, ___isKeepFace_5)); }
	inline bool get_isKeepFace_5() const { return ___isKeepFace_5; }
	inline bool* get_address_of_isKeepFace_5() { return &___isKeepFace_5; }
	inline void set_isKeepFace_5(bool value)
	{
		___isKeepFace_5 = value;
	}

	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(FaceUpdate_t3811220586, ___current_6)); }
	inline float get_current_6() const { return ___current_6; }
	inline float* get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(float value)
	{
		___current_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
