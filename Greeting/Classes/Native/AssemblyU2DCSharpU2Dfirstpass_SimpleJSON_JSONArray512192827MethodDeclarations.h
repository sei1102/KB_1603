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

// SimpleJSON.JSONArray
struct JSONArray_t512192827;
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
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void SimpleJSON.JSONArray::.ctor()
extern "C"  void JSONArray__ctor_m2704428242 (JSONArray_t512192827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONArray_get_Item_m3401459060 (JSONArray_t512192827 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m2990769409 (JSONArray_t512192827 * __this, int32_t ___aIndex0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::get_Item(System.String)
extern "C"  JSONNode_t4087157468 * JSONArray_get_Item_m2822714175 (JSONArray_t512192827 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_set_Item_m1153404782 (JSONArray_t512192827 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONArray::get_Count()
extern "C"  int32_t JSONArray_get_Count_m2938021024 (JSONArray_t512192827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONArray_Add_m793281983 (JSONArray_t512192827 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONArray_Remove_m3211491100 (JSONArray_t512192827 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONArray::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t4087157468 * JSONArray_Remove_m3549899209 (JSONArray_t512192827 * __this, JSONNode_t4087157468 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONArray::get_Childs()
extern "C"  Il2CppObject* JSONArray_get_Childs_m358868316 (JSONArray_t512192827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SimpleJSON.JSONArray::GetEnumerator()
extern "C"  Il2CppObject * JSONArray_GetEnumerator_m2371155194 (JSONArray_t512192827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString()
extern "C"  String_t* JSONArray_ToString_m4067479617 (JSONArray_t512192827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONArray::ToString(System.String)
extern "C"  String_t* JSONArray_ToString_m3876782177 (JSONArray_t512192827 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONArray::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONArray_Serialize_m284758931 (JSONArray_t512192827 * __this, BinaryWriter_t4146364100 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
