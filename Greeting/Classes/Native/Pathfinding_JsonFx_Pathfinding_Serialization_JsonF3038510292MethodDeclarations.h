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

// Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter
struct ReferenceHandlerWriter_t3038510292;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"

// System.Int32 Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::GetReferenceID(System.Object)
extern "C"  int32_t ReferenceHandlerWriter_GetReferenceID_m393854737 (ReferenceHandlerWriter_t3038510292 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::IsHandled(System.Type)
extern "C"  bool ReferenceHandlerWriter_IsHandled_m3107206898 (ReferenceHandlerWriter_t3038510292 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::IsOwnedRef(System.Reflection.MemberInfo)
extern "C"  bool ReferenceHandlerWriter_IsOwnedRef_m4121016153 (ReferenceHandlerWriter_t3038510292 * __this, MemberInfo_t * ___info0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.ReferenceHandlerWriter::MarkAsSerialized(System.Object)
extern "C"  void ReferenceHandlerWriter_MarkAsSerialized_m958756900 (ReferenceHandlerWriter_t3038510292 * __this, Il2CppObject * ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
