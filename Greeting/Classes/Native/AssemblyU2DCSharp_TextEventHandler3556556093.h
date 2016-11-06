#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<Vuforia.WordResult>
struct List_1_t2448048409;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t3798907012;
// UnityEngine.Canvas
struct Canvas_t2727140764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextEventHandler
struct  TextEventHandler_t3556556093  : public MonoBehaviour_t667441552
{
public:
	// System.Single TextEventHandler::mLoupeWidth
	float ___mLoupeWidth_2;
	// System.Single TextEventHandler::mLoupeHeight
	float ___mLoupeHeight_3;
	// System.Single TextEventHandler::mBBoxLineWidth
	float ___mBBoxLineWidth_4;
	// System.Single TextEventHandler::mBBoxPadding
	float ___mBBoxPadding_5;
	// UnityEngine.Color TextEventHandler::mBBoxColor
	Color_t4194546905  ___mBBoxColor_6;
	// UnityEngine.Rect TextEventHandler::mDetectionAndTrackingRect
	Rect_t4241904616  ___mDetectionAndTrackingRect_7;
	// UnityEngine.Texture2D TextEventHandler::mBoundingBoxTexture
	Texture2D_t3884108195 * ___mBoundingBoxTexture_8;
	// UnityEngine.Material TextEventHandler::mBoundingBoxMaterial
	Material_t3870600107 * ___mBoundingBoxMaterial_9;
	// System.Boolean TextEventHandler::mIsInitialized
	bool ___mIsInitialized_10;
	// System.Boolean TextEventHandler::mVideoBackgroundChanged
	bool ___mVideoBackgroundChanged_11;
	// System.Collections.Generic.List`1<Vuforia.WordResult> TextEventHandler::mSortedWords
	List_1_t2448048409 * ___mSortedWords_12;
	// UnityEngine.UI.Text[] TextEventHandler::mDisplayedWords
	TextU5BU5D_t3798907012* ___mDisplayedWords_13;
	// UnityEngine.Material TextEventHandler::boundingBoxMaterial
	Material_t3870600107 * ___boundingBoxMaterial_14;
	// UnityEngine.Canvas TextEventHandler::textRecoCanvas
	Canvas_t2727140764 * ___textRecoCanvas_15;

public:
	inline static int32_t get_offset_of_mLoupeWidth_2() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mLoupeWidth_2)); }
	inline float get_mLoupeWidth_2() const { return ___mLoupeWidth_2; }
	inline float* get_address_of_mLoupeWidth_2() { return &___mLoupeWidth_2; }
	inline void set_mLoupeWidth_2(float value)
	{
		___mLoupeWidth_2 = value;
	}

	inline static int32_t get_offset_of_mLoupeHeight_3() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mLoupeHeight_3)); }
	inline float get_mLoupeHeight_3() const { return ___mLoupeHeight_3; }
	inline float* get_address_of_mLoupeHeight_3() { return &___mLoupeHeight_3; }
	inline void set_mLoupeHeight_3(float value)
	{
		___mLoupeHeight_3 = value;
	}

	inline static int32_t get_offset_of_mBBoxLineWidth_4() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mBBoxLineWidth_4)); }
	inline float get_mBBoxLineWidth_4() const { return ___mBBoxLineWidth_4; }
	inline float* get_address_of_mBBoxLineWidth_4() { return &___mBBoxLineWidth_4; }
	inline void set_mBBoxLineWidth_4(float value)
	{
		___mBBoxLineWidth_4 = value;
	}

	inline static int32_t get_offset_of_mBBoxPadding_5() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mBBoxPadding_5)); }
	inline float get_mBBoxPadding_5() const { return ___mBBoxPadding_5; }
	inline float* get_address_of_mBBoxPadding_5() { return &___mBBoxPadding_5; }
	inline void set_mBBoxPadding_5(float value)
	{
		___mBBoxPadding_5 = value;
	}

	inline static int32_t get_offset_of_mBBoxColor_6() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mBBoxColor_6)); }
	inline Color_t4194546905  get_mBBoxColor_6() const { return ___mBBoxColor_6; }
	inline Color_t4194546905 * get_address_of_mBBoxColor_6() { return &___mBBoxColor_6; }
	inline void set_mBBoxColor_6(Color_t4194546905  value)
	{
		___mBBoxColor_6 = value;
	}

	inline static int32_t get_offset_of_mDetectionAndTrackingRect_7() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mDetectionAndTrackingRect_7)); }
	inline Rect_t4241904616  get_mDetectionAndTrackingRect_7() const { return ___mDetectionAndTrackingRect_7; }
	inline Rect_t4241904616 * get_address_of_mDetectionAndTrackingRect_7() { return &___mDetectionAndTrackingRect_7; }
	inline void set_mDetectionAndTrackingRect_7(Rect_t4241904616  value)
	{
		___mDetectionAndTrackingRect_7 = value;
	}

	inline static int32_t get_offset_of_mBoundingBoxTexture_8() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mBoundingBoxTexture_8)); }
	inline Texture2D_t3884108195 * get_mBoundingBoxTexture_8() const { return ___mBoundingBoxTexture_8; }
	inline Texture2D_t3884108195 ** get_address_of_mBoundingBoxTexture_8() { return &___mBoundingBoxTexture_8; }
	inline void set_mBoundingBoxTexture_8(Texture2D_t3884108195 * value)
	{
		___mBoundingBoxTexture_8 = value;
		Il2CppCodeGenWriteBarrier(&___mBoundingBoxTexture_8, value);
	}

	inline static int32_t get_offset_of_mBoundingBoxMaterial_9() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mBoundingBoxMaterial_9)); }
	inline Material_t3870600107 * get_mBoundingBoxMaterial_9() const { return ___mBoundingBoxMaterial_9; }
	inline Material_t3870600107 ** get_address_of_mBoundingBoxMaterial_9() { return &___mBoundingBoxMaterial_9; }
	inline void set_mBoundingBoxMaterial_9(Material_t3870600107 * value)
	{
		___mBoundingBoxMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___mBoundingBoxMaterial_9, value);
	}

	inline static int32_t get_offset_of_mIsInitialized_10() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mIsInitialized_10)); }
	inline bool get_mIsInitialized_10() const { return ___mIsInitialized_10; }
	inline bool* get_address_of_mIsInitialized_10() { return &___mIsInitialized_10; }
	inline void set_mIsInitialized_10(bool value)
	{
		___mIsInitialized_10 = value;
	}

	inline static int32_t get_offset_of_mVideoBackgroundChanged_11() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mVideoBackgroundChanged_11)); }
	inline bool get_mVideoBackgroundChanged_11() const { return ___mVideoBackgroundChanged_11; }
	inline bool* get_address_of_mVideoBackgroundChanged_11() { return &___mVideoBackgroundChanged_11; }
	inline void set_mVideoBackgroundChanged_11(bool value)
	{
		___mVideoBackgroundChanged_11 = value;
	}

	inline static int32_t get_offset_of_mSortedWords_12() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mSortedWords_12)); }
	inline List_1_t2448048409 * get_mSortedWords_12() const { return ___mSortedWords_12; }
	inline List_1_t2448048409 ** get_address_of_mSortedWords_12() { return &___mSortedWords_12; }
	inline void set_mSortedWords_12(List_1_t2448048409 * value)
	{
		___mSortedWords_12 = value;
		Il2CppCodeGenWriteBarrier(&___mSortedWords_12, value);
	}

	inline static int32_t get_offset_of_mDisplayedWords_13() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___mDisplayedWords_13)); }
	inline TextU5BU5D_t3798907012* get_mDisplayedWords_13() const { return ___mDisplayedWords_13; }
	inline TextU5BU5D_t3798907012** get_address_of_mDisplayedWords_13() { return &___mDisplayedWords_13; }
	inline void set_mDisplayedWords_13(TextU5BU5D_t3798907012* value)
	{
		___mDisplayedWords_13 = value;
		Il2CppCodeGenWriteBarrier(&___mDisplayedWords_13, value);
	}

	inline static int32_t get_offset_of_boundingBoxMaterial_14() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___boundingBoxMaterial_14)); }
	inline Material_t3870600107 * get_boundingBoxMaterial_14() const { return ___boundingBoxMaterial_14; }
	inline Material_t3870600107 ** get_address_of_boundingBoxMaterial_14() { return &___boundingBoxMaterial_14; }
	inline void set_boundingBoxMaterial_14(Material_t3870600107 * value)
	{
		___boundingBoxMaterial_14 = value;
		Il2CppCodeGenWriteBarrier(&___boundingBoxMaterial_14, value);
	}

	inline static int32_t get_offset_of_textRecoCanvas_15() { return static_cast<int32_t>(offsetof(TextEventHandler_t3556556093, ___textRecoCanvas_15)); }
	inline Canvas_t2727140764 * get_textRecoCanvas_15() const { return ___textRecoCanvas_15; }
	inline Canvas_t2727140764 ** get_address_of_textRecoCanvas_15() { return &___textRecoCanvas_15; }
	inline void set_textRecoCanvas_15(Canvas_t2727140764 * value)
	{
		___textRecoCanvas_15 = value;
		Il2CppCodeGenWriteBarrier(&___textRecoCanvas_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
