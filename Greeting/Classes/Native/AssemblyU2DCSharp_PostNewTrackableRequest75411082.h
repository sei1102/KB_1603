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

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PostNewTrackableRequest
struct  PostNewTrackableRequest_t75411082  : public Il2CppObject
{
public:
	// System.String PostNewTrackableRequest::name
	String_t* ___name_0;
	// System.Single PostNewTrackableRequest::width
	float ___width_1;
	// System.String PostNewTrackableRequest::image
	String_t* ___image_2;
	// System.String PostNewTrackableRequest::application_metadata
	String_t* ___application_metadata_3;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(PostNewTrackableRequest_t75411082, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier(&___name_0, value);
	}

	inline static int32_t get_offset_of_width_1() { return static_cast<int32_t>(offsetof(PostNewTrackableRequest_t75411082, ___width_1)); }
	inline float get_width_1() const { return ___width_1; }
	inline float* get_address_of_width_1() { return &___width_1; }
	inline void set_width_1(float value)
	{
		___width_1 = value;
	}

	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(PostNewTrackableRequest_t75411082, ___image_2)); }
	inline String_t* get_image_2() const { return ___image_2; }
	inline String_t** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(String_t* value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier(&___image_2, value);
	}

	inline static int32_t get_offset_of_application_metadata_3() { return static_cast<int32_t>(offsetof(PostNewTrackableRequest_t75411082, ___application_metadata_3)); }
	inline String_t* get_application_metadata_3() const { return ___application_metadata_3; }
	inline String_t** get_address_of_application_metadata_3() { return &___application_metadata_3; }
	inline void set_application_metadata_3(String_t* value)
	{
		___application_metadata_3 = value;
		Il2CppCodeGenWriteBarrier(&___application_metadata_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
