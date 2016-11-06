#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t3695833539;

#include "AssemblyU2DCSharp_MenuOptions1909700639.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// STMenuOptions
struct  STMenuOptions_t1285101342  : public MenuOptions_t1909700639
{
public:
	// Vuforia.ReconstructionBehaviour STMenuOptions::mReconstructionBehaviour
	ReconstructionBehaviour_t3695833539 * ___mReconstructionBehaviour_5;

public:
	inline static int32_t get_offset_of_mReconstructionBehaviour_5() { return static_cast<int32_t>(offsetof(STMenuOptions_t1285101342, ___mReconstructionBehaviour_5)); }
	inline ReconstructionBehaviour_t3695833539 * get_mReconstructionBehaviour_5() const { return ___mReconstructionBehaviour_5; }
	inline ReconstructionBehaviour_t3695833539 ** get_address_of_mReconstructionBehaviour_5() { return &___mReconstructionBehaviour_5; }
	inline void set_mReconstructionBehaviour_5(ReconstructionBehaviour_t3695833539 * value)
	{
		___mReconstructionBehaviour_5 = value;
		Il2CppCodeGenWriteBarrier(&___mReconstructionBehaviour_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
