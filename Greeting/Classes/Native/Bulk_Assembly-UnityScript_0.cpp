#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Test_UnityScript
struct Test_UnityScript_t3121556595;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_Test_UnityScript3121556595.h"
#include "AssemblyU2DUnityScript_Test_UnityScript3121556595MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "Boo_Lang_Boo_Lang_Runtime_RuntimeServices3947355960MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass513845338MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONClass513845338.h"
#include "mscorlib_System_Int321153838500.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUILayout3864601915MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GUILayoutOption331591504.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Test_UnityScript::.ctor()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Test_UnityScript__ctor_m2295941373_MetadataUsageId;
extern "C"  void Test_UnityScript__ctor_m2295941373 (Test_UnityScript_t3121556595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Test_UnityScript__ctor_m2295941373_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_m_InGameLog_2(L_0);
		Vector2_t4282066565  L_1 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_m_Position_3(L_1);
		return;
	}
}
// System.Void Test_UnityScript::P(System.String)
extern Il2CppClass* RuntimeServices_t3947355960_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral10;
extern const uint32_t Test_UnityScript_P_m511150423_MetadataUsageId;
extern "C"  void Test_UnityScript_P_m511150423 (Test_UnityScript_t3121556595 * __this, String_t* ___aText0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Test_UnityScript_P_m511150423_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = __this->get_m_InGameLog_2();
		String_t* L_1 = ___aText0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t3947355960_il2cpp_TypeInfo_var);
		String_t* L_2 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, L_1, _stringLiteral10, /*hidden argument*/NULL);
		String_t* L_3 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		__this->set_m_InGameLog_2(L_3);
		return;
	}
}
// System.Void Test_UnityScript::Test()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* RuntimeServices_t3947355960_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* JSONClass_t513845338_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1829172974;
extern Il2CppCodeGenString* _stringLiteral93090393;
extern Il2CppCodeGenString* _stringLiteral70822;
extern Il2CppCodeGenString* _stringLiteral66547;
extern Il2CppCodeGenString* _stringLiteral186887839;
extern Il2CppCodeGenString* _stringLiteral4036903473;
extern Il2CppCodeGenString* _stringLiteral1359255969;
extern Il2CppCodeGenString* _stringLiteral3373707;
extern Il2CppCodeGenString* _stringLiteral1025888393;
extern Il2CppCodeGenString* _stringLiteral3124404810;
extern Il2CppCodeGenString* _stringLiteral333300220;
extern Il2CppCodeGenString* _stringLiteral3298341188;
extern Il2CppCodeGenString* _stringLiteral997010036;
extern Il2CppCodeGenString* _stringLiteral3076010;
extern Il2CppCodeGenString* _stringLiteral2485055841;
extern Il2CppCodeGenString* _stringLiteral2522574515;
extern Il2CppCodeGenString* _stringLiteral2736119827;
extern Il2CppCodeGenString* _stringLiteral351608024;
extern Il2CppCodeGenString* _stringLiteral2888638859;
extern Il2CppCodeGenString* _stringLiteral1900293857;
extern Il2CppCodeGenString* _stringLiteral106642798;
extern Il2CppCodeGenString* _stringLiteral1584875013;
extern Il2CppCodeGenString* _stringLiteral532133121;
extern Il2CppCodeGenString* _stringLiteral1874818847;
extern Il2CppCodeGenString* _stringLiteral111972721;
extern Il2CppCodeGenString* _stringLiteral3946179771;
extern Il2CppCodeGenString* _stringLiteral63328374;
extern Il2CppCodeGenString* _stringLiteral3917656959;
extern Il2CppCodeGenString* _stringLiteral48563;
extern Il2CppCodeGenString* _stringLiteral878064156;
extern Il2CppCodeGenString* _stringLiteral1108506297;
extern Il2CppCodeGenString* _stringLiteral4113555902;
extern Il2CppCodeGenString* _stringLiteral648766876;
extern const uint32_t Test_UnityScript_Test_m1579432121_MetadataUsageId;
extern "C"  void Test_UnityScript_Test_m1579432121 (Test_UnityScript_t3121556595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Test_UnityScript_Test_m1579432121_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	JSONNode_t4087157468 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	JSONClass_t513845338 * V_3 = NULL;
	{
		JSONNode_t4087157468 * L_0 = JSONNode_Parse_m1279392515(NULL /*static, unused*/, _stringLiteral1829172974, /*hidden argument*/NULL);
		V_0 = L_0;
		JSONNode_t4087157468 * L_1 = V_0;
		NullCheck(L_1);
		JSONNode_t4087157468 * L_2 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_1, _stringLiteral93090393);
		NullCheck(L_2);
		JSONNode_t4087157468 * L_3 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_2, 1);
		JSONNode_t4087157468 * L_4 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral66547, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, JSONNode_t4087157468 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_3, _stringLiteral70822, L_4);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral186887839);
		JSONNode_t4087157468 * L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_5);
		String_t* L_7 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_5, L_6);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_7);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_8);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral4036903473);
		JSONNode_t4087157468 * L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_9);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_10);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_11);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral1359255969);
		JSONNode_t4087157468 * L_12 = V_0;
		NullCheck(L_12);
		JSONNode_t4087157468 * L_13 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_12, _stringLiteral3373707);
		String_t* L_14 = JSONNode_op_Implicit_m3884568727(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_14);
		String_t* L_15 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_15);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral1025888393);
		JSONNode_t4087157468 * L_16 = V_0;
		NullCheck(L_16);
		JSONNode_t4087157468 * L_17 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_16, _stringLiteral93090393);
		String_t* L_18 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_17);
		String_t* L_19 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(17 /* System.String SimpleJSON.JSONNode::ToString(System.String) */, L_17, L_18);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_19);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_20);
		JSONNode_t4087157468 * L_21 = V_0;
		NullCheck(L_21);
		JSONNode_t4087157468 * L_22 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_21, _stringLiteral93090393);
		NullCheck(L_22);
		JSONNode_t4087157468 * L_23 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_22, 0);
		String_t* L_24 = JSONNode_op_Implicit_m3884568727(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t3947355960_il2cpp_TypeInfo_var);
		String_t* L_25 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral3124404810, L_24, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_25);
		String_t* L_26 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_26);
		JSONNode_t4087157468 * L_27 = V_0;
		NullCheck(L_27);
		JSONNode_t4087157468 * L_28 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_27, _stringLiteral93090393);
		NullCheck(L_28);
		JSONNode_t4087157468 * L_29 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_28, 0);
		NullCheck(L_29);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_29, ((int32_t)10));
		JSONNode_t4087157468 * L_30 = V_0;
		NullCheck(L_30);
		JSONNode_t4087157468 * L_31 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_30, _stringLiteral93090393);
		NullCheck(L_31);
		JSONNode_t4087157468 * L_32 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_31, 0);
		String_t* L_33 = JSONNode_op_Implicit_m3884568727(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		String_t* L_34 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral333300220, L_33, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_34);
		JSONNode_t4087157468 * L_35 = V_0;
		NullCheck(L_35);
		JSONNode_t4087157468 * L_36 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_35, _stringLiteral93090393);
		NullCheck(L_36);
		JSONNode_t4087157468 * L_37 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_36, 0);
		NullCheck(L_37);
		int32_t L_38 = VirtFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 SimpleJSON.JSONNode::get_AsInt() */, L_37);
		int32_t L_39 = L_38;
		Il2CppObject * L_40 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_39);
		String_t* L_41 = RuntimeServices_op_Addition_m3613207904(NULL /*static, unused*/, _stringLiteral3298341188, L_40, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_41);
		String_t* L_42 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_42);
		JSONNode_t4087157468 * L_43 = V_0;
		NullCheck(L_43);
		JSONNode_t4087157468 * L_44 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_43, _stringLiteral93090393);
		NullCheck(L_44);
		JSONNode_t4087157468 * L_45 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_44, 1);
		NullCheck(L_45);
		JSONNode_t4087157468 * L_46 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.String) */, L_45, _stringLiteral3076010);
		String_t* L_47 = JSONNode_op_Implicit_m3884568727(NULL /*static, unused*/, L_46, /*hidden argument*/NULL);
		String_t* L_48 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral997010036, L_47, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_48);
		String_t* L_49 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_49);
		JSONNode_t4087157468 * L_50 = V_0;
		NullCheck(L_50);
		String_t* L_51 = JSONNode_SaveToBase64_m2556247919(L_50, /*hidden argument*/NULL);
		V_1 = L_51;
		JSONNode_t4087157468 * L_52 = V_0;
		NullCheck(L_52);
		String_t* L_53 = JSONNode_SaveToCompressedBase64_m3946704720(L_52, /*hidden argument*/NULL);
		V_2 = L_53;
		V_0 = (JSONNode_t4087157468 *)NULL;
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral2485055841);
		String_t* L_54 = V_1;
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_54);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral2522574515);
		String_t* L_55 = V_2;
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_55);
		String_t* L_56 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_56);
		String_t* L_57 = V_1;
		JSONNode_t4087157468 * L_58 = JSONNode_LoadFromBase64_m1505416141(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		V_0 = L_58;
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral2736119827);
		JSONNode_t4087157468 * L_59 = V_0;
		NullCheck(L_59);
		String_t* L_60 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_59);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_60);
		String_t* L_61 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_61);
		JSONClass_t513845338 * L_62 = (JSONClass_t513845338 *)il2cpp_codegen_object_new(JSONClass_t513845338_il2cpp_TypeInfo_var);
		JSONClass__ctor_m158050451(L_62, /*hidden argument*/NULL);
		V_3 = L_62;
		JSONClass_t513845338 * L_63 = V_3;
		NullCheck(L_63);
		JSONNode_t4087157468 * L_64 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_63, _stringLiteral351608024);
		NullCheck(L_64);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void SimpleJSON.JSONNode::set_AsInt(System.Int32) */, L_64, 5);
		JSONClass_t513845338 * L_65 = V_3;
		NullCheck(L_65);
		JSONNode_t4087157468 * L_66 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_65, _stringLiteral2888638859);
		JSONNode_t4087157468 * L_67 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral1900293857, /*hidden argument*/NULL);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, JSONNode_t4087157468 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_66, _stringLiteral3373707, L_67);
		JSONClass_t513845338 * L_68 = V_3;
		NullCheck(L_68);
		JSONNode_t4087157468 * L_69 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_68, _stringLiteral2888638859);
		JSONNode_t4087157468 * L_70 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral1584875013, /*hidden argument*/NULL);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, JSONNode_t4087157468 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_69, _stringLiteral106642798, L_70);
		JSONClass_t513845338 * L_71 = V_3;
		NullCheck(L_71);
		JSONNode_t4087157468 * L_72 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_71, _stringLiteral3076010);
		JSONNode_t4087157468 * L_73 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral532133121, /*hidden argument*/NULL);
		NullCheck(L_72);
		VirtActionInvoker2< int32_t, JSONNode_t4087157468 * >::Invoke(6 /* System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode) */, L_72, (-1), L_73);
		JSONClass_t513845338 * L_74 = V_3;
		NullCheck(L_74);
		JSONNode_t4087157468 * L_75 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_74, _stringLiteral3076010);
		JSONNode_t4087157468 * L_76 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral1874818847, /*hidden argument*/NULL);
		NullCheck(L_75);
		VirtActionInvoker2< int32_t, JSONNode_t4087157468 * >::Invoke(6 /* System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode) */, L_75, (-1), L_76);
		JSONClass_t513845338 * L_77 = V_3;
		NullCheck(L_77);
		JSONNode_t4087157468 * L_78 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_77, _stringLiteral3076010);
		NullCheck(L_78);
		JSONNode_t4087157468 * L_79 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_78, (-1));
		JSONNode_t4087157468 * L_80 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral3946179771, /*hidden argument*/NULL);
		NullCheck(L_79);
		VirtActionInvoker2< String_t*, JSONNode_t4087157468 * >::Invoke(8 /* System.Void SimpleJSON.JSONNode::set_Item(System.String,SimpleJSON.JSONNode) */, L_79, _stringLiteral111972721, L_80);
		JSONClass_t513845338 * L_81 = V_3;
		NullCheck(L_81);
		JSONNode_t4087157468 * L_82 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_81, _stringLiteral3076010);
		JSONNode_t4087157468 * L_83 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral63328374, /*hidden argument*/NULL);
		NullCheck(L_82);
		VirtActionInvoker1< JSONNode_t4087157468 * >::Invoke(12 /* System.Void SimpleJSON.JSONNode::Add(SimpleJSON.JSONNode) */, L_82, L_83);
		JSONClass_t513845338 * L_84 = V_3;
		NullCheck(L_84);
		JSONNode_t4087157468 * L_85 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_84, _stringLiteral3076010);
		JSONClass_t513845338 * L_86 = V_3;
		NullCheck(L_86);
		JSONNode_t4087157468 * L_87 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_86, _stringLiteral3076010);
		NullCheck(L_87);
		JSONNode_t4087157468 * L_88 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_87, 1);
		String_t* L_89 = JSONNode_op_Implicit_m3884568727(NULL /*static, unused*/, L_88, /*hidden argument*/NULL);
		String_t* L_90 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, L_89, _stringLiteral3917656959, /*hidden argument*/NULL);
		JSONNode_t4087157468 * L_91 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, L_90, /*hidden argument*/NULL);
		NullCheck(L_85);
		VirtActionInvoker2< int32_t, JSONNode_t4087157468 * >::Invoke(6 /* System.Void SimpleJSON.JSONNode::set_Item(System.Int32,SimpleJSON.JSONNode) */, L_85, 1, L_91);
		JSONClass_t513845338 * L_92 = V_3;
		JSONNode_t4087157468 * L_93 = JSONNode_op_Implicit_m2932149555(NULL /*static, unused*/, _stringLiteral48563, /*hidden argument*/NULL);
		NullCheck(L_92);
		VirtActionInvoker2< String_t*, JSONNode_t4087157468 * >::Invoke(4 /* System.Void SimpleJSON.JSONClass::Add(System.String,SimpleJSON.JSONNode) */, L_92, _stringLiteral351608024, L_93);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, _stringLiteral878064156);
		JSONClass_t513845338 * L_94 = V_3;
		NullCheck(L_94);
		String_t* L_95 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONClass::ToString() */, L_94);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_95);
		String_t* L_96 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_96);
		JSONClass_t513845338 * L_97 = V_3;
		NullCheck(L_97);
		JSONNode_t4087157468 * L_98 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_97, _stringLiteral3076010);
		NullCheck(L_98);
		JSONNode_t4087157468 * L_99 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_98, 0);
		String_t* L_100 = JSONNode_op_Implicit_m3884568727(NULL /*static, unused*/, L_99, /*hidden argument*/NULL);
		String_t* L_101 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral1108506297, L_100, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_101);
		JSONClass_t513845338 * L_102 = V_3;
		NullCheck(L_102);
		JSONNode_t4087157468 * L_103 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_102, _stringLiteral3076010);
		NullCheck(L_103);
		JSONNode_t4087157468 * L_104 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_103, 0);
		NullCheck(L_104);
		String_t* L_105 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String SimpleJSON.JSONNode::ToString() */, L_104);
		String_t* L_106 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral4113555902, L_105, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_106);
		JSONClass_t513845338 * L_107 = V_3;
		NullCheck(L_107);
		JSONNode_t4087157468 * L_108 = VirtFuncInvoker1< JSONNode_t4087157468 *, String_t* >::Invoke(7 /* SimpleJSON.JSONNode SimpleJSON.JSONClass::get_Item(System.String) */, L_107, _stringLiteral3076010);
		NullCheck(L_108);
		JSONNode_t4087157468 * L_109 = VirtFuncInvoker1< JSONNode_t4087157468 *, int32_t >::Invoke(5 /* SimpleJSON.JSONNode SimpleJSON.JSONNode::get_Item(System.Int32) */, L_108, 0);
		NullCheck(L_109);
		String_t* L_110 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String SimpleJSON.JSONNode::get_Value() */, L_109);
		String_t* L_111 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral648766876, L_110, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Test_UnityScript::P(System.String) */, __this, L_111);
		return;
	}
}
// System.Void Test_UnityScript::Start()
extern Il2CppClass* RuntimeServices_t3947355960_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1067467672;
extern const uint32_t Test_UnityScript_Start_m1243079165_MetadataUsageId;
extern "C"  void Test_UnityScript_Start_m1243079165 (Test_UnityScript_t3121556595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Test_UnityScript_Start_m1243079165_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Test_UnityScript::Test() */, __this);
		String_t* L_0 = __this->get_m_InGameLog_2();
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t3947355960_il2cpp_TypeInfo_var);
		String_t* L_1 = RuntimeServices_op_Addition_m3391097550(NULL /*static, unused*/, _stringLiteral1067467672, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Test_UnityScript::OnGUI()
extern Il2CppClass* GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var;
extern const uint32_t Test_UnityScript_OnGUI_m1791340023_MetadataUsageId;
extern "C"  void Test_UnityScript_OnGUI_m1791340023 (Test_UnityScript_t3121556595 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Test_UnityScript_OnGUI_m1791340023_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t4282066565  L_0 = __this->get_m_Position_3();
		Vector2_t4282066565  L_1 = GUILayout_BeginScrollView_m247627737(NULL /*static, unused*/, L_0, ((GUILayoutOptionU5BU5D_t2977405297*)SZArrayNew(GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		__this->set_m_Position_3(L_1);
		String_t* L_2 = __this->get_m_InGameLog_2();
		GUILayout_Label_m925445731(NULL /*static, unused*/, L_2, ((GUILayoutOptionU5BU5D_t2977405297*)SZArrayNew(GUILayoutOptionU5BU5D_t2977405297_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		GUILayout_EndScrollView_m2116108639(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Test_UnityScript::Main()
extern "C"  void Test_UnityScript_Main_m1375030304 (Test_UnityScript_t3121556595 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
