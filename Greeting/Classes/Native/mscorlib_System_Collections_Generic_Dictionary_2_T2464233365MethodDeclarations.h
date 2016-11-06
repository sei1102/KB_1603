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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,UnityEngine.Vector3>
struct Transform_1_t2464233365;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2555222989_gshared (Transform_1_t2464233365 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2555222989(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2464233365 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2555222989_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,UnityEngine.Vector3>::Invoke(TKey,TValue)
extern "C"  Vector3_t4282066566  Transform_1_Invoke_m626207759_gshared (Transform_1_t2464233365 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m626207759(__this, ___key0, ___value1, method) ((  Vector3_t4282066566  (*) (Transform_1_t2464233365 *, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Transform_1_Invoke_m626207759_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,UnityEngine.Vector3>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3745158766_gshared (Transform_1_t2464233365 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3745158766(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2464233365 *, Il2CppObject *, Vector3_t4282066566 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3745158766_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t4282066566  Transform_1_EndInvoke_m1598858523_gshared (Transform_1_t2464233365 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1598858523(__this, ___result0, method) ((  Vector3_t4282066566  (*) (Transform_1_t2464233365 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1598858523_gshared)(__this, ___result0, method)
