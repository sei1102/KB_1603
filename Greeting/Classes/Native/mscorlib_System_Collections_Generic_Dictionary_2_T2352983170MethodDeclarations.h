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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>
struct Transform_1_t2352983170;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m843809800_gshared (Transform_1_t2352983170 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m843809800(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2352983170 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m843809800_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m2292276916_gshared (Transform_1_t2352983170 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2292276916(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t2352983170 *, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Transform_1_Invoke_m2292276916_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m246956947_gshared (Transform_1_t2352983170 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m246956947(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2352983170 *, Il2CppObject *, Vector3_t4282066566 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m246956947_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m655018326_gshared (Transform_1_t2352983170 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m655018326(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t2352983170 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m655018326_gshared)(__this, ___result0, method)
