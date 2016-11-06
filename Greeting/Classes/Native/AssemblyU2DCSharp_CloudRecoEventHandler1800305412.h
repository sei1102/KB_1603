#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ObjectTracker
struct ObjectTracker_t455954211;
// ContentManager
struct ContentManager_t188544276;
// TrackableSettings
struct TrackableSettings_t3516027976;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// Vuforia.ImageTargetBehaviour
struct ImageTargetBehaviour_t1735871187;
// ScanLine
struct ScanLine_t3468871729;
// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CloudRecoEventHandler
struct  CloudRecoEventHandler_t1800305412  : public MonoBehaviour_t667441552
{
public:
	// Vuforia.ObjectTracker CloudRecoEventHandler::mObjectTracker
	ObjectTracker_t455954211 * ___mObjectTracker_2;
	// ContentManager CloudRecoEventHandler::mContentManager
	ContentManager_t188544276 * ___mContentManager_3;
	// TrackableSettings CloudRecoEventHandler::mTrackableSettings
	TrackableSettings_t3516027976 * ___mTrackableSettings_4;
	// System.Boolean CloudRecoEventHandler::mMustRestartApp
	bool ___mMustRestartApp_5;
	// UnityEngine.GameObject CloudRecoEventHandler::mParentOfImageTargetTemplate
	GameObject_t3674682005 * ___mParentOfImageTargetTemplate_6;
	// Vuforia.ImageTargetBehaviour CloudRecoEventHandler::ImageTargetTemplate
	ImageTargetBehaviour_t1735871187 * ___ImageTargetTemplate_7;
	// ScanLine CloudRecoEventHandler::scanLine
	ScanLine_t3468871729 * ___scanLine_8;
	// UnityEngine.Canvas CloudRecoEventHandler::cloudErrorCanvas
	Canvas_t2727140764 * ___cloudErrorCanvas_9;
	// UnityEngine.UI.Text CloudRecoEventHandler::cloudErrorTitle
	Text_t9039225 * ___cloudErrorTitle_10;
	// UnityEngine.UI.Text CloudRecoEventHandler::cloudErrorText
	Text_t9039225 * ___cloudErrorText_11;

public:
	inline static int32_t get_offset_of_mObjectTracker_2() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___mObjectTracker_2)); }
	inline ObjectTracker_t455954211 * get_mObjectTracker_2() const { return ___mObjectTracker_2; }
	inline ObjectTracker_t455954211 ** get_address_of_mObjectTracker_2() { return &___mObjectTracker_2; }
	inline void set_mObjectTracker_2(ObjectTracker_t455954211 * value)
	{
		___mObjectTracker_2 = value;
		Il2CppCodeGenWriteBarrier(&___mObjectTracker_2, value);
	}

	inline static int32_t get_offset_of_mContentManager_3() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___mContentManager_3)); }
	inline ContentManager_t188544276 * get_mContentManager_3() const { return ___mContentManager_3; }
	inline ContentManager_t188544276 ** get_address_of_mContentManager_3() { return &___mContentManager_3; }
	inline void set_mContentManager_3(ContentManager_t188544276 * value)
	{
		___mContentManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___mContentManager_3, value);
	}

	inline static int32_t get_offset_of_mTrackableSettings_4() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___mTrackableSettings_4)); }
	inline TrackableSettings_t3516027976 * get_mTrackableSettings_4() const { return ___mTrackableSettings_4; }
	inline TrackableSettings_t3516027976 ** get_address_of_mTrackableSettings_4() { return &___mTrackableSettings_4; }
	inline void set_mTrackableSettings_4(TrackableSettings_t3516027976 * value)
	{
		___mTrackableSettings_4 = value;
		Il2CppCodeGenWriteBarrier(&___mTrackableSettings_4, value);
	}

	inline static int32_t get_offset_of_mMustRestartApp_5() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___mMustRestartApp_5)); }
	inline bool get_mMustRestartApp_5() const { return ___mMustRestartApp_5; }
	inline bool* get_address_of_mMustRestartApp_5() { return &___mMustRestartApp_5; }
	inline void set_mMustRestartApp_5(bool value)
	{
		___mMustRestartApp_5 = value;
	}

	inline static int32_t get_offset_of_mParentOfImageTargetTemplate_6() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___mParentOfImageTargetTemplate_6)); }
	inline GameObject_t3674682005 * get_mParentOfImageTargetTemplate_6() const { return ___mParentOfImageTargetTemplate_6; }
	inline GameObject_t3674682005 ** get_address_of_mParentOfImageTargetTemplate_6() { return &___mParentOfImageTargetTemplate_6; }
	inline void set_mParentOfImageTargetTemplate_6(GameObject_t3674682005 * value)
	{
		___mParentOfImageTargetTemplate_6 = value;
		Il2CppCodeGenWriteBarrier(&___mParentOfImageTargetTemplate_6, value);
	}

	inline static int32_t get_offset_of_ImageTargetTemplate_7() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___ImageTargetTemplate_7)); }
	inline ImageTargetBehaviour_t1735871187 * get_ImageTargetTemplate_7() const { return ___ImageTargetTemplate_7; }
	inline ImageTargetBehaviour_t1735871187 ** get_address_of_ImageTargetTemplate_7() { return &___ImageTargetTemplate_7; }
	inline void set_ImageTargetTemplate_7(ImageTargetBehaviour_t1735871187 * value)
	{
		___ImageTargetTemplate_7 = value;
		Il2CppCodeGenWriteBarrier(&___ImageTargetTemplate_7, value);
	}

	inline static int32_t get_offset_of_scanLine_8() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___scanLine_8)); }
	inline ScanLine_t3468871729 * get_scanLine_8() const { return ___scanLine_8; }
	inline ScanLine_t3468871729 ** get_address_of_scanLine_8() { return &___scanLine_8; }
	inline void set_scanLine_8(ScanLine_t3468871729 * value)
	{
		___scanLine_8 = value;
		Il2CppCodeGenWriteBarrier(&___scanLine_8, value);
	}

	inline static int32_t get_offset_of_cloudErrorCanvas_9() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___cloudErrorCanvas_9)); }
	inline Canvas_t2727140764 * get_cloudErrorCanvas_9() const { return ___cloudErrorCanvas_9; }
	inline Canvas_t2727140764 ** get_address_of_cloudErrorCanvas_9() { return &___cloudErrorCanvas_9; }
	inline void set_cloudErrorCanvas_9(Canvas_t2727140764 * value)
	{
		___cloudErrorCanvas_9 = value;
		Il2CppCodeGenWriteBarrier(&___cloudErrorCanvas_9, value);
	}

	inline static int32_t get_offset_of_cloudErrorTitle_10() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___cloudErrorTitle_10)); }
	inline Text_t9039225 * get_cloudErrorTitle_10() const { return ___cloudErrorTitle_10; }
	inline Text_t9039225 ** get_address_of_cloudErrorTitle_10() { return &___cloudErrorTitle_10; }
	inline void set_cloudErrorTitle_10(Text_t9039225 * value)
	{
		___cloudErrorTitle_10 = value;
		Il2CppCodeGenWriteBarrier(&___cloudErrorTitle_10, value);
	}

	inline static int32_t get_offset_of_cloudErrorText_11() { return static_cast<int32_t>(offsetof(CloudRecoEventHandler_t1800305412, ___cloudErrorText_11)); }
	inline Text_t9039225 * get_cloudErrorText_11() const { return ___cloudErrorText_11; }
	inline Text_t9039225 ** get_address_of_cloudErrorText_11() { return &___cloudErrorText_11; }
	inline void set_cloudErrorText_11(Text_t9039225 * value)
	{
		___cloudErrorText_11 = value;
		Il2CppCodeGenWriteBarrier(&___cloudErrorText_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
