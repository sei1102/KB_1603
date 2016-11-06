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

// Pathfinding.Serialization.JsonFx.JsonWriter
struct JsonWriter_t541860733;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings
struct JsonWriterSettings_t3394579648;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Enum
struct Enum_t2862688501;
// System.Uri
struct Uri_t1116831938;
// System.Version
struct Version_t763695022;
// System.Collections.IEnumerable
struct IEnumerable_t3464557803;
// System.Collections.IDictionary
struct IDictionary_t537317817;
// System.Enum[]
struct EnumU5BU5D_t3205174168;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3394579648.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Guid2862754429.h"
#include "mscorlib_System_Enum2862688501.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Decimal1954350631.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Version763695022.h"

// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder)
extern "C"  void JsonWriter__ctor_m450991676 (JsonWriter_t541860733 * __this, StringBuilder_t243639308 * ___output0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::.ctor(System.Text.StringBuilder,Pathfinding.Serialization.JsonFx.JsonWriterSettings)
extern "C"  void JsonWriter__ctor_m3320010686 (JsonWriter_t541860733 * __this, StringBuilder_t243639308 * ___output0, JsonWriterSettings_t3394579648 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Pathfinding.Serialization.JsonFx.JsonWriterSettings Pathfinding.Serialization.JsonFx.JsonWriter::get_Settings()
extern "C"  JsonWriterSettings_t3394579648 * JsonWriter_get_Settings_m3312657913 (JsonWriter_t541860733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Pathfinding.Serialization.JsonFx.JsonWriter::Serialize(System.Object)
extern "C"  String_t* JsonWriter_Serialize_m2182724453 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object)
extern "C"  void JsonWriter_Write_m456059081 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteSkipConverters(System.Object)
extern "C"  void JsonWriter_WriteSkipConverters_m316302903 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Object,System.Boolean,System.Type,System.Boolean)
extern "C"  void JsonWriter_Write_m3046202326 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, bool ___isProperty1, Type_t * ___fieldType2, bool ___skipConverters3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.DateTime)
extern "C"  void JsonWriter_Write_m1416422445 (JsonWriter_t541860733 * __this, DateTime_t4283661327  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Guid)
extern "C"  void JsonWriter_Write_m203707007 (JsonWriter_t541860733 * __this, Guid_t2862754429  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Enum)
extern "C"  void JsonWriter_Write_m201663239 (JsonWriter_t541860733 * __this, Enum_t2862688501 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m233948727 (JsonWriter_t541860733 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Boolean)
extern "C"  void JsonWriter_Write_m3168498914 (JsonWriter_t541860733 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Byte)
extern "C"  void JsonWriter_Write_m199219168 (JsonWriter_t541860733 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.SByte)
extern "C"  void JsonWriter_Write_m2316894095 (JsonWriter_t541860733 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int16)
extern "C"  void JsonWriter_Write_m2071022710 (JsonWriter_t541860733 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt16)
extern "C"  void JsonWriter_Write_m774476073 (JsonWriter_t541860733 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m2071024508 (JsonWriter_t541860733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt32)
extern "C"  void JsonWriter_Write_m774477871 (JsonWriter_t541860733 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Int64)
extern "C"  void JsonWriter_Write_m2071027453 (JsonWriter_t541860733 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m774480816 (JsonWriter_t541860733 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Single)
extern "C"  void JsonWriter_Write_m4210239712 (JsonWriter_t541860733 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Double)
extern "C"  void JsonWriter_Write_m3960676983 (JsonWriter_t541860733 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m1727967961 (JsonWriter_t541860733 * __this, Decimal_t1954350631  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Char)
extern "C"  void JsonWriter_Write_m199618386 (JsonWriter_t541860733 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.TimeSpan)
extern "C"  void JsonWriter_Write_m1701218193 (JsonWriter_t541860733 * __this, TimeSpan_t413522987  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Uri)
extern "C"  void JsonWriter_Write_m1669553310 (JsonWriter_t541860733 * __this, Uri_t1116831938 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::Write(System.Version)
extern "C"  void JsonWriter_Write_m3472349746 (JsonWriter_t541860733 * __this, Version_t763695022 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArray(System.Collections.IEnumerable,System.Type)
extern "C"  void JsonWriter_WriteArray_m3481453514 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, Type_t * ___elementType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItem(System.Object,System.Type)
extern "C"  void JsonWriter_WriteArrayItem_m663517092 (JsonWriter_t541860733 * __this, Il2CppObject * ___item0, Type_t * ___elementType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Collections.IDictionary)
extern "C"  void JsonWriter_WriteObject_m1204844483 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteDictionary(System.Collections.IEnumerable)
extern "C"  void JsonWriter_WriteDictionary_m862648104 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectProperty(System.String,System.Object,System.Type)
extern "C"  void JsonWriter_WriteObjectProperty_m4023419428 (JsonWriter_t541860733 * __this, String_t* ___key0, Il2CppObject * ___value1, Type_t * ___fieldType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyName(System.String)
extern "C"  void JsonWriter_WriteObjectPropertyName_m3042846680 (JsonWriter_t541860733 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyValue(System.Object,System.Type)
extern "C"  void JsonWriter_WriteObjectPropertyValue_m3302699507 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, Type_t * ___fieldType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObject(System.Object,System.Type,System.Boolean,System.Type)
extern "C"  void JsonWriter_WriteObject_m2794625491 (JsonWriter_t541860733 * __this, Il2CppObject * ___value0, Type_t * ___type1, bool ___serializePrivate2, Type_t * ___fieldType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteArrayItemDelim()
extern "C"  void JsonWriter_WriteArrayItemDelim_m2561128782 (JsonWriter_t541860733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteObjectPropertyDelim()
extern "C"  void JsonWriter_WriteObjectPropertyDelim_m4015810770 (JsonWriter_t541860733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::WriteLine()
extern "C"  void JsonWriter_WriteLine_m3952464063 (JsonWriter_t541860733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Enum[] Pathfinding.Serialization.JsonFx.JsonWriter::GetFlagList(System.Type,System.Object)
extern "C"  EnumU5BU5D_t3205174168* JsonWriter_GetFlagList_m4244203690 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Pathfinding.Serialization.JsonFx.JsonWriter::InvalidIeee754(System.Decimal)
extern "C"  bool JsonWriter_InvalidIeee754_m2029422535 (JsonWriter_t541860733 * __this, Decimal_t1954350631  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Pathfinding.Serialization.JsonFx.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m3492616945 (JsonWriter_t541860733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
