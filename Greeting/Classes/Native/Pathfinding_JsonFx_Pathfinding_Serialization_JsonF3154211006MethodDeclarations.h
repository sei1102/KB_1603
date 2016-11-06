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

// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t3154211006;
// System.Type
struct Type_t;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3394579648;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[]
struct MemberU5BU5D_t1155216796;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member
struct Member_t3117962305;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3394579648.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3117962305.h"

// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::.ctor()
extern "C"  void TypeCoercionUtility__ctor_m3724068137 (TypeCoercionUtility_t3154211006 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetTypeInfo(System.Type)
extern "C"  Type_t * TypeCoercionUtility_GetTypeInfo_m3198666030 (Il2CppObject * __this /* static, unused */, Type_t * ___tp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.TypeCoercionUtility::GetMemberWritingMap(System.Type,Pathfinding.Serialization.JsonFx.JsonWriterSettings,Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[]&)
extern "C"  void TypeCoercionUtility_GetMemberWritingMap_m2892382527 (TypeCoercionUtility_t3154211006 * __this, Type_t * ___objectType0, JsonWriterSettings_t3394579648 * ___settings1, MemberU5BU5D_t1155216796** ___outMembers2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.JsonFx.TypeCoercionUtility::<GetMemberWritingMap>m__0(Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member,Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member)
extern "C"  int32_t TypeCoercionUtility_U3CGetMemberWritingMapU3Em__0_m753315362 (Il2CppObject * __this /* static, unused */, Member_t3117962305 * ___a0, Member_t3117962305 * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
