#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member
struct Member_t3117962305;
// Pathfinding.Serialization.JsonFx.JsonConverter
struct JsonConverter_t3109307074;
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[]
struct MemberU5BU5D_t1155216796;

#include "mscorlib_System_Array1146569071.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3117962305.h"
#include "Pathfinding_JsonFx_Pathfinding_Serialization_JsonF3109307074.h"
#include "Pathfinding.JsonFx_ArrayTypes.h"

#pragma once
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[]
struct MemberU5BU5D_t1155216796  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Member_t3117962305 * m_Items[1];

public:
	inline Member_t3117962305 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Member_t3117962305 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Member_t3117962305 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Serialization.JsonFx.JsonConverter[]
struct JsonConverterU5BU5D_t1187504119  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t3109307074 * m_Items[1];

public:
	inline JsonConverter_t3109307074 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JsonConverter_t3109307074 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t3109307074 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Pathfinding.Serialization.JsonFx.TypeCoercionUtility/Member[][]
struct MemberU5BU5DU5BU5D_t164336757  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) MemberU5BU5D_t1155216796* m_Items[1];

public:
	inline MemberU5BU5D_t1155216796* GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline MemberU5BU5D_t1155216796** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, MemberU5BU5D_t1155216796* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
