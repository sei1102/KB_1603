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

// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;
// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t541860733;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;

#include "codegen/il2cpp-codegen.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonFx541860733.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Object4170816371.h"

// System.Boolean Pathfinding.Serialization.JsonFx.JsonConverter::Write(Pathfinding.Serialization.JsonFx.JsonWriter,System.Int32,System.Type,System.Object)
extern "C"  bool JsonConverter_Write_m3791799759 (JsonConverter_t3109307074 * __this, JsonWriter_t541860733 * ___writer0, int32_t ___depth1, Type_t * ___type2, Il2CppObject * ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Pathfinding.Serialization.JsonFx.JsonConverter::WriteJson(System.Type,System.Object)
extern "C"  Dictionary_2_t696267445 * JsonConverter_WriteJson_m2763289637 (JsonConverter_t3109307074 * __this, Type_t * ___type0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
