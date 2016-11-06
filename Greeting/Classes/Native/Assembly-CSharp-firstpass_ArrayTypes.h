#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// SimpleJSON.JSONNode
struct JSONNode_t4087157468;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_SimpleJSON_JSONNode4087157468.h"

#pragma once
// SimpleJSON.JSONNode[]
struct JSONNodeU5BU5D_t1210473013  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JSONNode_t4087157468 * m_Items[1];

public:
	inline JSONNode_t4087157468 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline JSONNode_t4087157468 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, JSONNode_t4087157468 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
