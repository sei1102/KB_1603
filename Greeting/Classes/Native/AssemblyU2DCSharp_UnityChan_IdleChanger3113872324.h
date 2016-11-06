#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo323110318.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityChan.IdleChanger
struct  IdleChanger_t3113872324  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator UnityChan.IdleChanger::anim
	Animator_t2776330603 * ___anim_2;
	// UnityEngine.AnimatorStateInfo UnityChan.IdleChanger::currentState
	AnimatorStateInfo_t323110318  ___currentState_3;
	// UnityEngine.AnimatorStateInfo UnityChan.IdleChanger::previousState
	AnimatorStateInfo_t323110318  ___previousState_4;
	// System.Boolean UnityChan.IdleChanger::_random
	bool ____random_5;
	// System.Single UnityChan.IdleChanger::_threshold
	float ____threshold_6;
	// System.Single UnityChan.IdleChanger::_interval
	float ____interval_7;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(IdleChanger_t3113872324, ___anim_2)); }
	inline Animator_t2776330603 * get_anim_2() const { return ___anim_2; }
	inline Animator_t2776330603 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t2776330603 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_currentState_3() { return static_cast<int32_t>(offsetof(IdleChanger_t3113872324, ___currentState_3)); }
	inline AnimatorStateInfo_t323110318  get_currentState_3() const { return ___currentState_3; }
	inline AnimatorStateInfo_t323110318 * get_address_of_currentState_3() { return &___currentState_3; }
	inline void set_currentState_3(AnimatorStateInfo_t323110318  value)
	{
		___currentState_3 = value;
	}

	inline static int32_t get_offset_of_previousState_4() { return static_cast<int32_t>(offsetof(IdleChanger_t3113872324, ___previousState_4)); }
	inline AnimatorStateInfo_t323110318  get_previousState_4() const { return ___previousState_4; }
	inline AnimatorStateInfo_t323110318 * get_address_of_previousState_4() { return &___previousState_4; }
	inline void set_previousState_4(AnimatorStateInfo_t323110318  value)
	{
		___previousState_4 = value;
	}

	inline static int32_t get_offset_of__random_5() { return static_cast<int32_t>(offsetof(IdleChanger_t3113872324, ____random_5)); }
	inline bool get__random_5() const { return ____random_5; }
	inline bool* get_address_of__random_5() { return &____random_5; }
	inline void set__random_5(bool value)
	{
		____random_5 = value;
	}

	inline static int32_t get_offset_of__threshold_6() { return static_cast<int32_t>(offsetof(IdleChanger_t3113872324, ____threshold_6)); }
	inline float get__threshold_6() const { return ____threshold_6; }
	inline float* get_address_of__threshold_6() { return &____threshold_6; }
	inline void set__threshold_6(float value)
	{
		____threshold_6 = value;
	}

	inline static int32_t get_offset_of__interval_7() { return static_cast<int32_t>(offsetof(IdleChanger_t3113872324, ____interval_7)); }
	inline float get__interval_7() const { return ____interval_7; }
	inline float* get_address_of__interval_7() { return &____interval_7; }
	inline void set__interval_7(float value)
	{
		____interval_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
