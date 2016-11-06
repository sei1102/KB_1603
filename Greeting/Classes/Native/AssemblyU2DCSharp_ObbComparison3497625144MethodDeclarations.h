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

// ObbComparison
struct ObbComparison_t3497625144;
// Vuforia.WordResult
struct WordResult_t1079862857;

#include "codegen/il2cpp-codegen.h"
#include "Vuforia_UnityExtensions_Vuforia_WordResult1079862857.h"
#include "Vuforia_UnityExtensions_Vuforia_OrientedBoundingBo2236164205.h"

// System.Void ObbComparison::.ctor()
extern "C"  void ObbComparison__ctor_m1873304115 (ObbComparison_t3497625144 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObbComparison::Compare(Vuforia.WordResult,Vuforia.WordResult)
extern "C"  int32_t ObbComparison_Compare_m3115665762 (ObbComparison_t3497625144 * __this, WordResult_t1079862857 * ___x0, WordResult_t1079862857 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObbComparison::CompareX(Vuforia.OrientedBoundingBox,Vuforia.OrientedBoundingBox)
extern "C"  int32_t ObbComparison_CompareX_m641276346 (Il2CppObject * __this /* static, unused */, OrientedBoundingBox_t2236164205  ___box10, OrientedBoundingBox_t2236164205  ___box21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObbComparison::CompareY(Vuforia.OrientedBoundingBox,Vuforia.OrientedBoundingBox)
extern "C"  int32_t ObbComparison_CompareY_m3005624537 (Il2CppObject * __this /* static, unused */, OrientedBoundingBox_t2236164205  ___box10, OrientedBoundingBox_t2236164205  ___box21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
