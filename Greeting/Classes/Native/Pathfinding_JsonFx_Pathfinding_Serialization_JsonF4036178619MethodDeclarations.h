﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t4036178619;
// System.Object
struct Il2CppObject;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t541860733;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx541860733.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::.ctor(System.Object,System.IntPtr)
extern "C"  void WriteDelegate_1__ctor_m3341752708_gshared (WriteDelegate_1_t4036178619 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define WriteDelegate_1__ctor_m3341752708(__this, ___object0, ___method1, method) ((  void (*) (WriteDelegate_1_t4036178619 *, Il2CppObject *, IntPtr_t, const MethodInfo*))WriteDelegate_1__ctor_m3341752708_gshared)(__this, ___object0, ___method1, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::Invoke(Pathfinding.Serialization.JsonFx.JsonWriter,T)
extern "C"  void WriteDelegate_1_Invoke_m3448592485_gshared (WriteDelegate_1_t4036178619 * __this, JsonWriter_t541860733 * ___writer0, DateTime_t4283661327  ___value1, const MethodInfo* method);
#define WriteDelegate_1_Invoke_m3448592485(__this, ___writer0, ___value1, method) ((  void (*) (WriteDelegate_1_t4036178619 *, JsonWriter_t541860733 *, DateTime_t4283661327 , const MethodInfo*))WriteDelegate_1_Invoke_m3448592485_gshared)(__this, ___writer0, ___value1, method)
// System.IAsyncResult Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::BeginInvoke(Pathfinding.Serialization.JsonFx.JsonWriter,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WriteDelegate_1_BeginInvoke_m2054724560_gshared (WriteDelegate_1_t4036178619 * __this, JsonWriter_t541860733 * ___writer0, DateTime_t4283661327  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define WriteDelegate_1_BeginInvoke_m2054724560(__this, ___writer0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (WriteDelegate_1_t4036178619 *, JsonWriter_t541860733 *, DateTime_t4283661327 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_BeginInvoke_m2054724560_gshared)(__this, ___writer0, ___value1, ___callback2, ___object3, method)
// System.Void Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>::EndInvoke(System.IAsyncResult)
extern "C"  void WriteDelegate_1_EndInvoke_m854846868_gshared (WriteDelegate_1_t4036178619 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define WriteDelegate_1_EndInvoke_m854846868(__this, ___result0, method) ((  void (*) (WriteDelegate_1_t4036178619 *, Il2CppObject *, const MethodInfo*))WriteDelegate_1_EndInvoke_m854846868_gshared)(__this, ___result0, method)
