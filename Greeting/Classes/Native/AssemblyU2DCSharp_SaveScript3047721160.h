#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.InputField
struct InputField_t609046876;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveScript
struct  SaveScript_t3047721160  : public MonoBehaviour_t667441552
{
public:
	// System.String SaveScript::str
	String_t* ___str_2;
	// UnityEngine.UI.InputField SaveScript::inputField
	InputField_t609046876 * ___inputField_3;
	// UnityEngine.UI.Text SaveScript::text
	Text_t9039225 * ___text_4;

public:
	inline static int32_t get_offset_of_str_2() { return static_cast<int32_t>(offsetof(SaveScript_t3047721160, ___str_2)); }
	inline String_t* get_str_2() const { return ___str_2; }
	inline String_t** get_address_of_str_2() { return &___str_2; }
	inline void set_str_2(String_t* value)
	{
		___str_2 = value;
		Il2CppCodeGenWriteBarrier(&___str_2, value);
	}

	inline static int32_t get_offset_of_inputField_3() { return static_cast<int32_t>(offsetof(SaveScript_t3047721160, ___inputField_3)); }
	inline InputField_t609046876 * get_inputField_3() const { return ___inputField_3; }
	inline InputField_t609046876 ** get_address_of_inputField_3() { return &___inputField_3; }
	inline void set_inputField_3(InputField_t609046876 * value)
	{
		___inputField_3 = value;
		Il2CppCodeGenWriteBarrier(&___inputField_3, value);
	}

	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(SaveScript_t3047721160, ___text_4)); }
	inline Text_t9039225 * get_text_4() const { return ___text_4; }
	inline Text_t9039225 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t9039225 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier(&___text_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
