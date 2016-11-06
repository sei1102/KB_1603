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

// SimpleJSON.JSONClass
struct JSONClass_t513845338;
// SimpleJSON.JSONNode
struct JSONNode_t4087157468;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t3093103129;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void SimpleJSON.JSONClass::.ctor()
extern "C"  void JSONClass__ctor_m158050451 (JSONClass_t513845338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String)
extern "C"  JSONNode_t4087157468 * JSONClass_get_Item_m2960321792 (JSONClass_t513845338 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONClass_set_Item_m1043193519 (JSONClass_t513845338 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONClass_get_Item_m2990256019 (JSONClass_t513845338 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONClass_set_Item_m4095592864 (JSONClass_t513845338 * __this, int32_t ___aIndex0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONClass::get_Count()
extern "C"  int32_t JSONClass_get_Count_m1607612385 (JSONClass_t513845338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONClass_Add_m3540251102 (JSONClass_t513845338 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.String)
extern "C"  JSONNode_t4087157468 * JSONClass_Remove_m384126104 (JSONClass_t513845338 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONClass_Remove_m1521679611 (JSONClass_t513845338 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONClass::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t4087157468 * JSONClass_Remove_m3286637322 (JSONClass_t513845338 * __this, JSONNode_t4087157468 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONClass::get_Childs()
extern "C"  Il2CppObject* JSONClass_get_Childs_m2065873467 (JSONClass_t513845338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONClass::GetEnumerator()
extern "C"  Il2CppObject * JSONClass_GetEnumerator_m3348823995 (JSONClass_t513845338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString()
extern "C"  String_t* JSONClass_ToString_m2639089888 (JSONClass_t513845338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONClass::ToString(System.String)
extern "C"  String_t* JSONClass_ToString_m4014389794 (JSONClass_t513845338 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONClass::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONClass_Serialize_m990138388 (JSONClass_t513845338 * __this, BinaryWriter_t4146364100 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
