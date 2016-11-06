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

// CloudRecoEventHandler
struct CloudRecoEventHandler_t1800305412;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_InitSt138063285.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Updat3822354588.h"
#include "Vuforia_UnityExtensions_Vuforia_TargetFinder_Targe3609410114.h"
#include "mscorlib_System_String7231557.h"

// System.Void CloudRecoEventHandler::.ctor()
extern "C"  void CloudRecoEventHandler__ctor_m3394806503 (CloudRecoEventHandler_t1800305412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::Start()
extern "C"  void CloudRecoEventHandler_Start_m2341944295 (CloudRecoEventHandler_t1800305412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnInitialized()
extern "C"  void CloudRecoEventHandler_OnInitialized_m4275628602 (CloudRecoEventHandler_t1800305412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnInitError(Vuforia.TargetFinder/InitState)
extern "C"  void CloudRecoEventHandler_OnInitError_m3009746089 (CloudRecoEventHandler_t1800305412 * __this, int32_t ___initError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnUpdateError(Vuforia.TargetFinder/UpdateState)
extern "C"  void CloudRecoEventHandler_OnUpdateError_m1116165705 (CloudRecoEventHandler_t1800305412 * __this, int32_t ___updateError0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnStateChanged(System.Boolean)
extern "C"  void CloudRecoEventHandler_OnStateChanged_m1739384214 (CloudRecoEventHandler_t1800305412 * __this, bool ___scanning0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::OnNewSearchResult(Vuforia.TargetFinder/TargetSearchResult)
extern "C"  void CloudRecoEventHandler_OnNewSearchResult_m1621125573 (CloudRecoEventHandler_t1800305412 * __this, TargetSearchResult_t3609410114  ___targetSearchResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::CloseErrorDialog()
extern "C"  void CloudRecoEventHandler_CloseErrorDialog_m342816213 (CloudRecoEventHandler_t1800305412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::ShowScanLine(System.Boolean)
extern "C"  void CloudRecoEventHandler_ShowScanLine_m514483810 (CloudRecoEventHandler_t1800305412 * __this, bool ___show0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::ShowError(System.String,System.String)
extern "C"  void CloudRecoEventHandler_ShowError_m981466478 (CloudRecoEventHandler_t1800305412 * __this, String_t* ___title0, String_t* ___msg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CloudRecoEventHandler::RestartApplication()
extern "C"  void CloudRecoEventHandler_RestartApplication_m138681342 (CloudRecoEventHandler_t1800305412 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
