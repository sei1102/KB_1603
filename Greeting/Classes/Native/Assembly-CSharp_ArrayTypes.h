#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Vuforia.VirtualButtonBehaviour
struct VirtualButtonBehaviour_t2253448098;
// Vuforia.WireframeBehaviour
struct WireframeBehaviour_t433318935;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_Vuforia_VirtualButtonBehaviour2253448098.h"
#include "AssemblyU2DCSharp_Vuforia_WireframeBehaviour433318935.h"

#pragma once
// Vuforia.VirtualButtonBehaviour[]
struct VirtualButtonBehaviourU5BU5D_t460537751  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) VirtualButtonBehaviour_t2253448098 * m_Items[1];

public:
	inline VirtualButtonBehaviour_t2253448098 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline VirtualButtonBehaviour_t2253448098 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, VirtualButtonBehaviour_t2253448098 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Vuforia.WireframeBehaviour[]
struct WireframeBehaviourU5BU5D_t1176995246  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) WireframeBehaviour_t433318935 * m_Items[1];

public:
	inline WireframeBehaviour_t433318935 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WireframeBehaviour_t433318935 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WireframeBehaviour_t433318935 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
