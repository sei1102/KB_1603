﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ScanLine
struct ScanLine_t3468871729;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t4179556250;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudRecoTrackableEventHandler
struct  CloudRecoTrackableEventHandler_t1437864929  : public MonoBehaviour_t667441552
{
public:
	// ScanLine CloudRecoTrackableEventHandler::scanLine
	ScanLine_t3468871729 * ___scanLine_2;
	// Vuforia.TrackableBehaviour CloudRecoTrackableEventHandler::mTrackableBehaviour
	TrackableBehaviour_t4179556250 * ___mTrackableBehaviour_3;

public:
	inline static int32_t get_offset_of_scanLine_2() { return static_cast<int32_t>(offsetof(CloudRecoTrackableEventHandler_t1437864929, ___scanLine_2)); }
	inline ScanLine_t3468871729 * get_scanLine_2() const { return ___scanLine_2; }
	inline ScanLine_t3468871729 ** get_address_of_scanLine_2() { return &___scanLine_2; }
	inline void set_scanLine_2(ScanLine_t3468871729 * value)
	{
		___scanLine_2 = value;
		Il2CppCodeGenWriteBarrier(&___scanLine_2, value);
	}

	inline static int32_t get_offset_of_mTrackableBehaviour_3() { return static_cast<int32_t>(offsetof(CloudRecoTrackableEventHandler_t1437864929, ___mTrackableBehaviour_3)); }
	inline TrackableBehaviour_t4179556250 * get_mTrackableBehaviour_3() const { return ___mTrackableBehaviour_3; }
	inline TrackableBehaviour_t4179556250 ** get_address_of_mTrackableBehaviour_3() { return &___mTrackableBehaviour_3; }
	inline void set_mTrackableBehaviour_3(TrackableBehaviour_t4179556250 * value)
	{
		___mTrackableBehaviour_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableBehaviour_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
