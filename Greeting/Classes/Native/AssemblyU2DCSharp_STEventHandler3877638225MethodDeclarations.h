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

// STEventHandler
struct STEventHandler_t3877638225;
// Vuforia.Surface
struct Surface_t3094389719;
// Vuforia.Prop
struct Prop_t2165309157;

#include "codegen/il2cpp-codegen.h"

// System.Void STEventHandler::.ctor()
extern "C"  void STEventHandler__ctor_m1698989930 (STEventHandler_t3877638225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::Start()
extern "C"  void STEventHandler_Start_m646127722 (STEventHandler_t3877638225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::OnDestroy()
extern "C"  void STEventHandler_OnDestroy_m659593059 (STEventHandler_t3877638225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::OnSurfaceCreated(Vuforia.Surface)
extern "C"  void STEventHandler_OnSurfaceCreated_m526644349 (STEventHandler_t3877638225 * __this, Il2CppObject * ___surface0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void STEventHandler::OnPropCreated(Vuforia.Prop)
extern "C"  void STEventHandler_OnPropCreated_m2825966399 (STEventHandler_t3877638225 * __this, Il2CppObject * ___prop0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
