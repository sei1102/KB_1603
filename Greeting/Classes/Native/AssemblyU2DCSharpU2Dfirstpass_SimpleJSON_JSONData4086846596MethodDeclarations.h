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

// SimpleJSON.JSONData
struct JSONData_t4086846596;
// System.String
struct String_t;
// System.IO.BinaryWriter
struct BinaryWriter_t4146364100;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IO_BinaryWriter4146364100.h"

// System.Void SimpleJSON.JSONData::.ctor(System.String)
extern "C"  void JSONData__ctor_m1923599889 (JSONData_t4086846596 * __this, String_t* ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Single)
extern "C"  void JSONData__ctor_m1604923578 (JSONData_t4086846596 * __this, float ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Double)
extern "C"  void JSONData__ctor_m1355360849 (JSONData_t4086846596 * __this, double ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Boolean)
extern "C"  void JSONData__ctor_m4008077384 (JSONData_t4086846596 * __this, bool ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::.ctor(System.Int32)
extern "C"  void JSONData__ctor_m4065192034 (JSONData_t4086846596 * __this, int32_t ___aData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::get_Value()
extern "C"  String_t* JSONData_get_Value_m3294574362 (JSONData_t4086846596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::set_Value(System.String)
extern "C"  void JSONData_set_Value_m678588127 (JSONData_t4086846596 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString()
extern "C"  String_t* JSONData_ToString_m3533948284 (JSONData_t4086846596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SimpleJSON.JSONData::ToString(System.String)
extern "C"  String_t* JSONData_ToString_m3090391814 (JSONData_t4086846596 * __this, String_t* ___aPrefix0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleJSON.JSONData::Serialize(System.IO.BinaryWriter)
extern "C"  void JSONData_Serialize_m1313540754 (JSONData_t4086846596 * __this, BinaryWriter_t4146364100 * ___aWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
