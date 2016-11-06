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

// UnityChan.CameraController
struct CameraController_t2421733957;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void UnityChan.CameraController::.ctor()
extern "C"  void CameraController__ctor_m382936595 (CameraController_t2421733957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::setupFocusObject(System.String)
extern "C"  void CameraController_setupFocusObject_m1098026807 (CameraController_t2421733957 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::Start()
extern "C"  void CameraController_Start_m3625041683 (CameraController_t2421733957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::Update()
extern "C"  void CameraController_Update_m712994650 (CameraController_t2421733957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::OnGUI()
extern "C"  void CameraController_OnGUI_m4173302541 (CameraController_t2421733957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::mouseEvent()
extern "C"  void CameraController_mouseEvent_m2470020198 (CameraController_t2421733957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::mouseDragEvent(UnityEngine.Vector3)
extern "C"  void CameraController_mouseDragEvent_m3502838663 (CameraController_t2421733957 * __this, Vector3_t4282066566  ___mousePos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::mouseWheelEvent(System.Single)
extern "C"  void CameraController_mouseWheelEvent_m1199673078 (CameraController_t2421733957 * __this, float ___delta0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::cameraTranslate(UnityEngine.Vector3)
extern "C"  void CameraController_cameraTranslate_m752869599 (CameraController_t2421733957 * __this, Vector3_t4282066566  ___vec0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityChan.CameraController::cameraRotate(UnityEngine.Vector3)
extern "C"  void CameraController_cameraRotate_m2724297384 (CameraController_t2421733957 * __this, Vector3_t4282066566  ___eulerAngle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
