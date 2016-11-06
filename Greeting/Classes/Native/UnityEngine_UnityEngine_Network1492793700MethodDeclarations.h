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

// System.String
struct String_t;
// UnityEngine.Object
struct Object_t3071478659;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_NetworkConnectionError1049203712.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// UnityEngine.NetworkConnectionError UnityEngine.Network::InitializeServer(System.Int32,System.Int32,System.Boolean)
extern "C"  int32_t Network_InitializeServer_m1086070119 (Il2CppObject * __this /* static, unused */, int32_t ___connections0, int32_t ___listenPort1, bool ___useNat2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::Internal_ConnectToSingleIP(System.String,System.Int32,System.Int32,System.String)
extern "C"  int32_t Network_Internal_ConnectToSingleIP_m3562152815 (Il2CppObject * __this /* static, unused */, String_t* ___IP0, int32_t ___remotePort1, int32_t ___localPort2, String_t* ___password3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::Connect(System.String,System.Int32)
extern "C"  int32_t Network_Connect_m3532691876 (Il2CppObject * __this /* static, unused */, String_t* ___IP0, int32_t ___remotePort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.NetworkConnectionError UnityEngine.Network::Connect(System.String,System.Int32,System.String)
extern "C"  int32_t Network_Connect_m3659141856 (Il2CppObject * __this /* static, unused */, String_t* ___IP0, int32_t ___remotePort1, String_t* ___password2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Network::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32)
extern "C"  Object_t3071478659 * Network_Instantiate_m2753034863 (Il2CppObject * __this /* static, unused */, Object_t3071478659 * ___prefab0, Vector3_t4282066566  ___position1, Quaternion_t1553702882  ___rotation2, int32_t ___group3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Network::INTERNAL_CALL_Instantiate(UnityEngine.Object,UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32)
extern "C"  Object_t3071478659 * Network_INTERNAL_CALL_Instantiate_m4087140154 (Il2CppObject * __this /* static, unused */, Object_t3071478659 * ___prefab0, Vector3_t4282066566 * ___position1, Quaternion_t1553702882 * ___rotation2, int32_t ___group3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
