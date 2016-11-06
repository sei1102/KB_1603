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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>
struct Transform_1_t238085971;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22055919172.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2441316242_gshared (Transform_1_t238085971 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2441316242(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t238085971 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2441316242_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t2055919172  Transform_1_Invoke_m2143648038_gshared (Transform_1_t238085971 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2143648038(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t2055919172  (*) (Transform_1_t238085971 *, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Transform_1_Invoke_m2143648038_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1833782225_gshared (Transform_1_t238085971 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1833782225(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t238085971 *, Il2CppObject *, Vector3_t4282066566 , AsyncCallback_t1369114871 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1833782225_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,UnityEngine.Vector3,System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t2055919172  Transform_1_EndInvoke_m2303595428_gshared (Transform_1_t238085971 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m2303595428(__this, ___result0, method) ((  KeyValuePair_2_t2055919172  (*) (Transform_1_t238085971 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m2303595428_gshared)(__this, ___result0, method)
