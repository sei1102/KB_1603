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

// VuMarkHandler
struct VuMarkHandler_t4209869662;
// Vuforia.VuMarkTarget
struct VuMarkTarget_t3123531359;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.String
struct String_t;
// UnityEngine.Sprite
struct Sprite_t3199167241;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Sprite3199167241.h"

// System.Void VuMarkHandler::.ctor()
extern "C"  void VuMarkHandler__ctor_m776456141 (VuMarkHandler_t4209869662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::Start()
extern "C"  void VuMarkHandler_Start_m4018561229 (VuMarkHandler_t4209869662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::Update()
extern "C"  void VuMarkHandler_Update_m27198688 (VuMarkHandler_t4209869662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::OnDestroy()
extern "C"  void VuMarkHandler_OnDestroy_m1109847622 (VuMarkHandler_t4209869662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::OnVuMarkDetected(Vuforia.VuMarkTarget)
extern "C"  void VuMarkHandler_OnVuMarkDetected_m1458957435 (VuMarkHandler_t4209869662 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::OnVuMarkLost(Vuforia.VuMarkTarget)
extern "C"  void VuMarkHandler_OnVuMarkLost_m2153844765 (VuMarkHandler_t4209869662 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VuMarkHandler::UpdateClosestTarget()
extern "C"  void VuMarkHandler_UpdateClosestTarget_m4236401196 (VuMarkHandler_t4209869662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator VuMarkHandler::ShowPanelAfter(System.Single,System.String,System.String,UnityEngine.Sprite)
extern "C"  Il2CppObject * VuMarkHandler_ShowPanelAfter_m3970474859 (VuMarkHandler_t4209869662 * __this, float ___seconds0, String_t* ___vuMarkTitle1, String_t* ___vuMarkId2, Sprite_t3199167241 * ___vuMarkImage3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VuMarkHandler::GetVuMarkDataType(Vuforia.VuMarkTarget)
extern "C"  String_t* VuMarkHandler_GetVuMarkDataType_m807882603 (VuMarkHandler_t4209869662 * __this, Il2CppObject * ___vumark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VuMarkHandler::GetVuMarkString(Vuforia.VuMarkTarget)
extern "C"  String_t* VuMarkHandler_GetVuMarkString_m1953268088 (VuMarkHandler_t4209869662 * __this, Il2CppObject * ___vumark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite VuMarkHandler::GetVuMarkImage(Vuforia.VuMarkTarget)
extern "C"  Sprite_t3199167241 * VuMarkHandler_GetVuMarkImage_m736076006 (VuMarkHandler_t4209869662 * __this, Il2CppObject * ___vumark0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
