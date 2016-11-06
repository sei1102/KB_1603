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

// SimpleJSON.JSONLazyCreator
struct JSONLazyCreator_t1798821370;
// SimpleJSON.JSONNode
struct JSONNode_t4087157468;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// SimpleJSON.JSONArray
struct JSONArray_t512192827;
// SimpleJSON.JSONClass
struct JSONClass_t513845338;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONLazyC1798821370.h"

// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator__ctor_m3036761377 (JSONLazyCreator_t1798821370 * __this, JSONNode_t4087157468 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::.ctor(SimpleJSON.JSONNode,System.String)
extern "C"  void JSONLazyCreator__ctor_m66611101 (JSONLazyCreator_t1798821370 * __this, JSONNode_t4087157468 * ___aNode0, String_t* ___aKey1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Set(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Set_m646273057 (JSONLazyCreator_t1798821370 * __this, JSONNode_t4087157468 * ___aVal0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONLazyCreator_get_Item_m2852012659 (JSONLazyCreator_t1798821370 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m1102770240 (JSONLazyCreator_t1798821370 * __this, int32_t ___aIndex0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONLazyCreator::get_Item(System.String)
extern "C"  JSONNode_t4087157468 * JSONLazyCreator_get_Item_m2969744928 (JSONLazyCreator_t1798821370 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_set_Item_m2754972687 (JSONLazyCreator_t1798821370 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m3151759682 (JSONLazyCreator_t1798821370 * __this, JSONNode_t4087157468 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONLazyCreator_Add_m2105370750 (JSONLazyCreator_t1798821370 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::Equals(System.Object)
extern "C"  bool JSONLazyCreator_Equals_m4128503944 (JSONLazyCreator_t1798821370 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::GetHashCode()
extern "C"  int32_t JSONLazyCreator_GetHashCode_m123586348 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString()
extern "C"  String_t* JSONLazyCreator_ToString_m4199207232 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONLazyCreator::ToString(System.String)
extern "C"  String_t* JSONLazyCreator_ToString_m3982808514 (JSONLazyCreator_t1798821370 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONLazyCreator::get_AsInt()
extern "C"  int32_t JSONLazyCreator_get_AsInt_m219613071 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsInt(System.Int32)
extern "C"  void JSONLazyCreator_set_AsInt_m376808226 (JSONLazyCreator_t1798821370 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONLazyCreator::get_AsFloat()
extern "C"  float JSONLazyCreator_get_AsFloat_m1432128486 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsFloat(System.Single)
extern "C"  void JSONLazyCreator_set_AsFloat_m3951007789 (JSONLazyCreator_t1798821370 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONLazyCreator::get_AsDouble()
extern "C"  double JSONLazyCreator_get_AsDouble_m673104640 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsDouble(System.Double)
extern "C"  void JSONLazyCreator_set_AsDouble_m3512322065 (JSONLazyCreator_t1798821370 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::get_AsBool()
extern "C"  bool JSONLazyCreator_get_AsBool_m3226378386 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONLazyCreator::set_AsBool(System.Boolean)
extern "C"  void JSONLazyCreator_set_AsBool_m2723144545 (JSONLazyCreator_t1798821370 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONLazyCreator::get_AsArray()
extern "C"  JSONArray_t512192827 * JSONLazyCreator_get_AsArray_m734393415 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONLazyCreator::get_AsObject()
extern "C"  JSONClass_t513845338 * JSONLazyCreator_get_AsObject_m1324955252 (JSONLazyCreator_t1798821370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Equality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Equality_m759088255 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t1798821370 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONLazyCreator::op_Inequality(SimpleJSON.JSONLazyCreator,System.Object)
extern "C"  bool JSONLazyCreator_op_Inequality_m554062308 (Il2CppObject * __this /* static, unused */, JSONLazyCreator_t1798821370 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
