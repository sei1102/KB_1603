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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MyCanvas
struct  MyCanvas_t3077300804  : public MonoBehaviour_t667441552
{
public:

public:
};

struct MyCanvas_t3077300804_StaticFields
{
public:
	// UnityEngine.Canvas MyCanvas::_canvas
	Canvas_t2727140764 * ____canvas_2;

public:
	inline static int32_t get_offset_of__canvas_2() { return static_cast<int32_t>(offsetof(MyCanvas_t3077300804_StaticFields, ____canvas_2)); }
	inline Canvas_t2727140764 * get__canvas_2() const { return ____canvas_2; }
	inline Canvas_t2727140764 ** get_address_of__canvas_2() { return &____canvas_2; }
	inline void set__canvas_2(Canvas_t2727140764 * value)
	{
		____canvas_2 = value;
		Il2CppCodeGenWriteBarrier(&____canvas_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
