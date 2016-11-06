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

// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3394579648;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility
struct TypeCoercionUtility_t3154211006;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1418687608;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime>
struct WriteDelegate_1_t4036178619;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MemberInfo3995515898.h"
#include "mscorlib_System_Object4170816371.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonWriterSettings::.ctor()
extern "C"  void JsonWriterSettings__ctor_m946693515 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_Coercion()
extern "C"  TypeCoercionUtility_t3154211006 * JsonWriterSettings_get_Coercion_m2552820639 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_HandleCyclicReferences()
extern "C"  bool JsonWriterSettings_get_HandleCyclicReferences_m1680156523 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintName()
extern "C"  String_t* JsonWriterSettings_get_TypeHintName_m5140843 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DefaultAssembly()
extern "C"  Assembly_t1418687608 * JsonWriterSettings_get_DefaultAssembly_m3001172358 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_TypeHintsOnlyWhenNeeded()
extern "C"  bool JsonWriterSettings_get_TypeHintsOnlyWhenNeeded_m1606552653 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_PrettyPrint()
extern "C"  bool JsonWriterSettings_get_PrettyPrint_m817954679 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_Tab()
extern "C"  String_t* JsonWriterSettings_get_Tab_m629898552 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_NewLine()
extern "C"  String_t* JsonWriterSettings_get_NewLine_m177139351 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_MaxDepth()
extern "C"  int32_t JsonWriterSettings_get_MaxDepth_m1911450087 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_UseXmlSerializationAttributes()
extern "C"  bool JsonWriterSettings_get_UseXmlSerializationAttributes_m2162988055 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.WriteDelegate`1<System.DateTime> Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DateTimeSerializer()
extern "C"  WriteDelegate_1_t4036178619 * JsonWriterSettings_get_DateTimeSerializer_m1011810803 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::get_DebugMode()
extern "C"  bool JsonWriterSettings_get_DebugMode_m4262594102 (JsonWriterSettings_t3394579648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriterSettings::IsIgnored(System.Type,System.Reflection.MemberInfo,System.Object)
extern "C"  bool JsonWriterSettings_IsIgnored_m832873248 (JsonWriterSettings_t3394579648 * __this, Type_t * ___objType0, MemberInfo_t * ___member1, Il2CppObject * ___obj2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonConverter Pathfinding.Serialization.JsonFx.JsonWriterSettings::GetConverter(System.Type)
extern "C"  JsonConverter_t3109307074 * JsonWriterSettings_GetConverter_m4109070163 (JsonWriterSettings_t3394579648 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
