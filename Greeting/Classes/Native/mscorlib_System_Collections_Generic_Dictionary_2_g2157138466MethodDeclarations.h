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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>
struct Dictionary_2_t2157138466;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t666883479;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2185721892;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>[]
struct KeyValuePair_2U5BU5D_t1589924909;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.Vector3>>
struct IEnumerator_1_t3967784221;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t951828701;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.Vector3>
struct KeyCollection_t3783897917;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.Vector3>
struct ValueCollection_t857744179;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2185721892.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2761351129.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22055919172.h"
#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3474461858.h"
#include "mscorlib_System_Collections_DictionaryEntry1751606614.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::.ctor()
extern "C"  void Dictionary_2__ctor_m1483054554_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1483054554(__this, method) ((  void (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2__ctor_m1483054554_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2012175185_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2012175185(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2012175185_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m1979931691_gshared (Dictionary_2_t2157138466 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m1979931691(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2157138466 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1979931691_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::.ctor(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3421006002_gshared (Dictionary_2_t2157138466 * __this, int32_t ___capacity0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m3421006002(__this, ___capacity0, ___comparer1, method) ((  void (*) (Dictionary_2_t2157138466 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3421006002_gshared)(__this, ___capacity0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1754571803_gshared (Dictionary_2_t2157138466 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1754571803(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2157138466 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2__ctor_m1754571803_gshared)(__this, ___info0, ___context1, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1769341358_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1769341358(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1769341358_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1781164435_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1781164435(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1781164435_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m1773069534_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1773069534(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1773069534_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m1494247889_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1494247889(__this, ___key0, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1494247889_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m552637820_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m552637820(__this, method) ((  bool (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m552637820_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3099806248_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3099806248(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m3099806248_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3289348800_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3289348800(__this, method) ((  bool (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3289348800_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m424425959_gshared (Dictionary_2_t2157138466 * __this, KeyValuePair_2_t2055919172  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m424425959(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2157138466 *, KeyValuePair_2_t2055919172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m424425959_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3359767355_gshared (Dictionary_2_t2157138466 * __this, KeyValuePair_2_t2055919172  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3359767355(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2157138466 *, KeyValuePair_2_t2055919172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3359767355_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m803937803_gshared (Dictionary_2_t2157138466 * __this, KeyValuePair_2U5BU5D_t1589924909* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m803937803(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2157138466 *, KeyValuePair_2U5BU5D_t1589924909*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m803937803_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1627108640_gshared (Dictionary_2_t2157138466 * __this, KeyValuePair_2_t2055919172  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1627108640(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2157138466 *, KeyValuePair_2_t2055919172 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1627108640_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m4221292714_gshared (Dictionary_2_t2157138466 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m4221292714(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m4221292714_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1278061733_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1278061733(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1278061733_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2403017890_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2403017890(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m2403017890_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m994529469_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m994529469(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m994529469_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m2007715138_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m2007715138(__this, method) ((  int32_t (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_get_Count_m2007715138_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::get_Item(TKey)
extern "C"  Vector3_t4282066566  Dictionary_2_get_Item_m3581379177_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3581379177(__this, ___key0, method) ((  Vector3_t4282066566  (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3581379177_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m949718554_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m949718554(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_set_Item_m949718554_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3057558866_gshared (Dictionary_2_t2157138466 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3057558866(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2157138466 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3057558866_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m1084009637_gshared (Dictionary_2_t2157138466 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1084009637(__this, ___size0, method) ((  void (*) (Dictionary_2_t2157138466 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1084009637_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m552469473_gshared (Dictionary_2_t2157138466 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m552469473(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m552469473_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t2055919172  Dictionary_2_make_pair_m1080758317_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m1080758317(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t2055919172  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_make_pair_m1080758317_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2857653545_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2857653545(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_pick_key_m2857653545_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::pick_value(TKey,TValue)
extern "C"  Vector3_t4282066566  Dictionary_2_pick_value_m4124052521_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m4124052521(__this /* static, unused */, ___key0, ___value1, method) ((  Vector3_t4282066566  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_pick_value_m4124052521_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3025085646_gshared (Dictionary_2_t2157138466 * __this, KeyValuePair_2U5BU5D_t1589924909* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3025085646(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2157138466 *, KeyValuePair_2U5BU5D_t1589924909*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3025085646_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::Resize()
extern "C"  void Dictionary_2_Resize_m3082814878_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3082814878(__this, method) ((  void (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_Resize_m3082814878_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3324808219_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m3324808219(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_Add_m3324808219_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::Clear()
extern "C"  void Dictionary_2_Clear_m3184155141_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3184155141(__this, method) ((  void (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_Clear_m3184155141_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m373556779_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m373556779(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m373556779_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m2676640939_gshared (Dictionary_2_t2157138466 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m2676640939(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2157138466 *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_ContainsValue_m2676640939_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m2401869944_gshared (Dictionary_2_t2157138466 * __this, SerializationInfo_t2185721892 * ___info0, StreamingContext_t2761351129  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m2401869944(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2157138466 *, SerializationInfo_t2185721892 *, StreamingContext_t2761351129 , const MethodInfo*))Dictionary_2_GetObjectData_m2401869944_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3930696940_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3930696940(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3930696940_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m739623909_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m739623909(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m739623909_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m602473348_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, Vector3_t4282066566 * ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m602473348(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2157138466 *, Il2CppObject *, Vector3_t4282066566 *, const MethodInfo*))Dictionary_2_TryGetValue_m602473348_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::get_Keys()
extern "C"  KeyCollection_t3783897917 * Dictionary_2_get_Keys_m3976502779_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m3976502779(__this, method) ((  KeyCollection_t3783897917 * (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_get_Keys_m3976502779_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::get_Values()
extern "C"  ValueCollection_t857744179 * Dictionary_2_get_Values_m2705120827_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2705120827(__this, method) ((  ValueCollection_t857744179 * (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_get_Values_m2705120827_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m2307512452_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m2307512452(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m2307512452_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::ToTValue(System.Object)
extern "C"  Vector3_t4282066566  Dictionary_2_ToTValue_m2436366660_gshared (Dictionary_2_t2157138466 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m2436366660(__this, ___value0, method) ((  Vector3_t4282066566  (*) (Dictionary_2_t2157138466 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m2436366660_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m2867153352_gshared (Dictionary_2_t2157138466 * __this, KeyValuePair_2_t2055919172  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m2867153352(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2157138466 *, KeyValuePair_2_t2055919172 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m2867153352_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::GetEnumerator()
extern "C"  Enumerator_t3474461858  Dictionary_2_GetEnumerator_m3893356063_gshared (Dictionary_2_t2157138466 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3893356063(__this, method) ((  Enumerator_t3474461858  (*) (Dictionary_2_t2157138466 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3893356063_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.Vector3>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t1751606614  Dictionary_2_U3CCopyToU3Em__0_m3746575022_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, Vector3_t4282066566  ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3746575022(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t1751606614  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t4282066566 , const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3746575022_gshared)(__this /* static, unused */, ___key0, ___value1, method)
