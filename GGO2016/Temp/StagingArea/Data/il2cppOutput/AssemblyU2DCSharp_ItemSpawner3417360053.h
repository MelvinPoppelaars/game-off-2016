#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemSpawner
struct  ItemSpawner_t3417360053  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject ItemSpawner::Item
	GameObject_t3674682005 * ___Item_2;
	// System.Int32 ItemSpawner::ItemCount
	int32_t ___ItemCount_3;

public:
	inline static int32_t get_offset_of_Item_2() { return static_cast<int32_t>(offsetof(ItemSpawner_t3417360053, ___Item_2)); }
	inline GameObject_t3674682005 * get_Item_2() const { return ___Item_2; }
	inline GameObject_t3674682005 ** get_address_of_Item_2() { return &___Item_2; }
	inline void set_Item_2(GameObject_t3674682005 * value)
	{
		___Item_2 = value;
		Il2CppCodeGenWriteBarrier(&___Item_2, value);
	}

	inline static int32_t get_offset_of_ItemCount_3() { return static_cast<int32_t>(offsetof(ItemSpawner_t3417360053, ___ItemCount_3)); }
	inline int32_t get_ItemCount_3() const { return ___ItemCount_3; }
	inline int32_t* get_address_of_ItemCount_3() { return &___ItemCount_3; }
	inline void set_ItemCount_3(int32_t value)
	{
		___ItemCount_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
