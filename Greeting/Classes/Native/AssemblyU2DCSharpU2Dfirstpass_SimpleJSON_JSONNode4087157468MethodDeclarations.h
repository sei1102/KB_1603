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

// SimpleJSON.JSONNode
struct JSONNode_t4087157468;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode>
struct IEnumerable_1_t3093103129;
// SimpleJSON.JSONArray
struct JSONArray_t512192827;
// SimpleJSON.JSONClass
struct JSONClass_t513845338;
// System.Object
struct Il2CppObject;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;
// System.IO.Stream
struct Stream_t1561764144;
// System.IO.BinaryReader
struct BinaryReader_t3990958868;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"
#include "mscorlib_System_IO_Stream1561764144.h"
#include "mscorlib_System_IO_BinaryReader3990958868.h"

// System.Void SimpleJSON.JSONNode::.ctor()
extern "C"  void JSONNode__ctor_m39807289 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m4209089656 (JSONNode_t4087157468 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___aItem1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONNode_get_Item_m2900078435 (JSONNode_t4087157468 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m1234212666 (JSONNode_t4087157468 * __this, int32_t ___aIndex0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_get_Item_m164816688 (JSONNode_t4087157468 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode)
extern "C"  void JSONNode_set_Item_m2534720597 (JSONNode_t4087157468 * __this, String_t* ___aKey0, JSONNode_t4087157468 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::get_Value()
extern "C"  String_t* JSONNode_get_Value_m716998594 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_Value(System.String)
extern "C"  void JSONNode_set_Value_m1237544759 (JSONNode_t4087157468 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_Count()
extern "C"  int32_t JSONNode_get_Count_m4199899827 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode)
extern "C"  void JSONNode_Add_m3402717884 (JSONNode_t4087157468 * __this, JSONNode_t4087157468 * ___aItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_Remove_m2875069128 (JSONNode_t4087157468 * __this, String_t* ___aKey0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(System.Int32)
extern "C"  JSONNode_t4087157468 * JSONNode_Remove_m770748619 (JSONNode_t4087157468 * __this, int32_t ___aIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Remove(SimpleJSON.JSONNode)
extern "C"  JSONNode_t4087157468 * JSONNode_Remove_m459111738 (JSONNode_t4087157468 * __this, JSONNode_t4087157468 * ___aNode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_Childs()
extern "C"  Il2CppObject* JSONNode_get_Childs_m1772976129 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<SimpleJSON.JSONNode> SimpleJSON.JSONNode::get_DeepChilds()
extern "C"  Il2CppObject* JSONNode_get_DeepChilds_m4161671309 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString()
extern "C"  String_t* JSONNode_ToString_m679854036 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::ToString(System.String)
extern "C"  String_t* JSONNode_ToString_m4078253998 (JSONNode_t4087157468 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::get_AsInt()
extern "C"  int32_t JSONNode_get_AsInt_m2498774145 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32)
extern "C"  void JSONNode_set_AsInt_m523450984 (JSONNode_t4087157468 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SimpleJSON.JSONNode::get_AsFloat()
extern "C"  float JSONNode_get_AsFloat_m4098928068 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsFloat(System.Single)
extern "C"  void JSONNode_set_AsFloat_m308704039 (JSONNode_t4087157468 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double SimpleJSON.JSONNode::get_AsDouble()
extern "C"  double JSONNode_get_AsDouble_m3231545108 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsDouble(System.Double)
extern "C"  void JSONNode_set_AsDouble_m2270055511 (JSONNode_t4087157468 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::get_AsBool()
extern "C"  bool JSONNode_get_AsBool_m2927447380 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::set_AsBool(System.Boolean)
extern "C"  void JSONNode_set_AsBool_m3375808091 (JSONNode_t4087157468 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONArray SimpleJSON.JSONNode::get_AsArray()
extern "C"  JSONArray_t512192827 * JSONNode_get_AsArray_m532209501 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONClass SimpleJSON.JSONNode::get_AsObject()
extern "C"  JSONClass_t513845338 * JSONNode_get_AsObject_m1093981756 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::Equals(System.Object)
extern "C"  bool JSONNode_Equals_m2471396870 (JSONNode_t4087157468 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SimpleJSON.JSONNode::GetHashCode()
extern "C"  int32_t JSONNode_GetHashCode_m4259024798 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::Escape(System.String)
extern "C"  String_t* JSONNode_Escape_m3126929209 (Il2CppObject * __this /* static, unused */, String_t* ___aText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Parse(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_Parse_m1279392515 (Il2CppObject * __this /* static, unused */, String_t* ___aJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONNode_Serialize_m291040570 (JSONNode_t4087157468 * __this, BinaryWriter_t4146364100 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToStream_m3872140282 (JSONNode_t4087157468 * __this, Stream_t1561764144 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedStream(System.IO.Stream)
extern "C"  void JSONNode_SaveToCompressedStream_m1128141339 (JSONNode_t4087157468 * __this, Stream_t1561764144 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToCompressedFile(System.String)
extern "C"  void JSONNode_SaveToCompressedFile_m3524532162 (JSONNode_t4087157468 * __this, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToCompressedBase64()
extern "C"  String_t* JSONNode_SaveToCompressedBase64_m3946704720 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONNode::SaveToFile(System.String)
extern "C"  void JSONNode_SaveToFile_m2940669571 (JSONNode_t4087157468 * __this, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::SaveToBase64()
extern "C"  String_t* JSONNode_SaveToBase64_m2556247919 (JSONNode_t4087157468 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::Deserialize(System.IO.BinaryReader)
extern "C"  JSONNode_t4087157468 * JSONNode_Deserialize_m2114312606 (Il2CppObject * __this /* static, unused */, BinaryReader_t3990958868 * ___aReader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedFile(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_LoadFromCompressedFile_m3733501887 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedStream(System.IO.Stream)
extern "C"  JSONNode_t4087157468 * JSONNode_LoadFromCompressedStream_m3784239166 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromCompressedBase64(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_LoadFromCompressedBase64_m4072157452 (Il2CppObject * __this /* static, unused */, String_t* ___aBase640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromStream(System.IO.Stream)
extern "C"  JSONNode_t4087157468 * JSONNode_LoadFromStream_m1296613853 (Il2CppObject * __this /* static, unused */, Stream_t1561764144 * ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromFile(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_LoadFromFile_m329717440 (Il2CppObject * __this /* static, unused */, String_t* ___aFileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::LoadFromBase64(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_LoadFromBase64_m1505416141 (Il2CppObject * __this /* static, unused */, String_t* ___aBase640, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// SimpleJSON.JSONNode SimpleJSON.JSONNode::op_Implicit(System.String)
extern "C"  JSONNode_t4087157468 * JSONNode_op_Implicit_m2932149555 (Il2CppObject * __this /* static, unused */, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONNode::op_Implicit(SimpleJSON.JSONNode)
extern "C"  String_t* JSONNode_op_Implicit_m3884568727 (Il2CppObject * __this /* static, unused */, JSONNode_t4087157468 * ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Equality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Equality_m912335575 (Il2CppObject * __this /* static, unused */, JSONNode_t4087157468 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SimpleJSON.JSONNode::op_Inequality(SimpleJSON.JSONNode,System.Object)
extern "C"  bool JSONNode_op_Inequality_m1017226386 (Il2CppObject * __this /* static, unused */, JSONNode_t4087157468 * ___a0, Il2CppObject * ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
