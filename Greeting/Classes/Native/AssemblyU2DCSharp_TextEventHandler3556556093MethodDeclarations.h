#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TextEventHandler
struct TextEventHandler_t3556556093;
// Vuforia.WordResult
struct WordResult_t1079862857;
// Vuforia.Word
struct Word_t2165514892;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordResult1079862857.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void TextEventHandler::.ctor()
extern "C"  void TextEventHandler__ctor_m1037893118 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::Start()
extern "C"  void TextEventHandler_Start_m4279998206 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnRenderObject()
extern "C"  void TextEventHandler_OnRenderObject_m1186495546 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::Update()
extern "C"  void TextEventHandler_Update_m3836777679 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnInitialized()
extern "C"  void TextEventHandler_OnInitialized_m1408777809 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnWordDetected(Vuforia.WordResult)
extern "C"  void TextEventHandler_OnWordDetected_m1478075614 (TextEventHandler_t3556556093 * __this, WordResult_t1079862857 * ___wordResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnWordLost(Vuforia.Word)
extern "C"  void TextEventHandler_OnWordLost_m2716248861 (TextEventHandler_t3556556093 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::OnVideoBackgroundConfigChanged()
extern "C"  void TextEventHandler_OnVideoBackgroundConfigChanged_m2085322318 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::DrawWordBoundingBoxes()
extern "C"  void TextEventHandler_DrawWordBoundingBoxes_m494657539 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::DrawBoundingBox(UnityEngine.Vector2[])
extern "C"  void TextEventHandler_DrawBoundingBox_m1890584441 (TextEventHandler_t3556556093 * __this, Vector2U5BU5D_t4024180168* ___corners0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] TextEventHandler::ExtendCorners(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single)
extern "C"  Vector2U5BU5D_t4024180168* TextEventHandler_ExtendCorners_m3094116392 (Il2CppObject * __this /* static, unused */, Vector2U5BU5D_t4024180168* ___corners0, Vector2U5BU5D_t4024180168* ___normals1, float ___extension2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TextEventHandler::IntersectLines(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  TextEventHandler_IntersectLines_m2404727797 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___p10, Vector2_t4282066565  ___p21, Vector2_t4282066565  ___p32, Vector2_t4282066565  ___p43, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::AddWord(Vuforia.WordResult)
extern "C"  void TextEventHandler_AddWord_m3964225172 (TextEventHandler_t3556556093 * __this, WordResult_t1079862857 * ___wordResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::RemoveWord(Vuforia.Word)
extern "C"  void TextEventHandler_RemoveWord_m3906531006 (TextEventHandler_t3556556093 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TextEventHandler::ContainsWord(Vuforia.Word)
extern "C"  bool TextEventHandler_ContainsWord_m3498790669 (TextEventHandler_t3556556093 * __this, Il2CppObject * ___word0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextEventHandler::CalculateLoupeRegion()
extern "C"  void TextEventHandler_CalculateLoupeRegion_m642825115 (TextEventHandler_t3556556093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
