#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Canvas
struct Canvas_t2727140764;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DatabaseCheck
struct  DatabaseCheck_t3736979501  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Canvas DatabaseCheck::errorCanvas
	Canvas_t2727140764 * ___errorCanvas_2;
	// UnityEngine.UI.Text DatabaseCheck::errorTitle
	Text_t9039225 * ___errorTitle_3;
	// UnityEngine.UI.Text DatabaseCheck::errorMessage
	Text_t9039225 * ___errorMessage_4;

public:
	inline static int32_t get_offset_of_errorCanvas_2() { return static_cast<int32_t>(offsetof(DatabaseCheck_t3736979501, ___errorCanvas_2)); }
	inline Canvas_t2727140764 * get_errorCanvas_2() const { return ___errorCanvas_2; }
	inline Canvas_t2727140764 ** get_address_of_errorCanvas_2() { return &___errorCanvas_2; }
	inline void set_errorCanvas_2(Canvas_t2727140764 * value)
	{
		___errorCanvas_2 = value;
		Il2CppCodeGenWriteBarrier(&___errorCanvas_2, value);
	}

	inline static int32_t get_offset_of_errorTitle_3() { return static_cast<int32_t>(offsetof(DatabaseCheck_t3736979501, ___errorTitle_3)); }
	inline Text_t9039225 * get_errorTitle_3() const { return ___errorTitle_3; }
	inline Text_t9039225 ** get_address_of_errorTitle_3() { return &___errorTitle_3; }
	inline void set_errorTitle_3(Text_t9039225 * value)
	{
		___errorTitle_3 = value;
		Il2CppCodeGenWriteBarrier(&___errorTitle_3, value);
	}

	inline static int32_t get_offset_of_errorMessage_4() { return static_cast<int32_t>(offsetof(DatabaseCheck_t3736979501, ___errorMessage_4)); }
	inline Text_t9039225 * get_errorMessage_4() const { return ___errorMessage_4; }
	inline Text_t9039225 ** get_address_of_errorMessage_4() { return &___errorMessage_4; }
	inline void set_errorMessage_4(Text_t9039225 * value)
	{
		___errorMessage_4 = value;
		Il2CppCodeGenWriteBarrier(&___errorMessage_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
