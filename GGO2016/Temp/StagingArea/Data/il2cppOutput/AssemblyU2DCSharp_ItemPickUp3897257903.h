#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EventManager
struct EventManager_t1907836883;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ItemPickUp
struct  ItemPickUp_t3897257903  : public MonoBehaviour_t667441552
{
public:
	// EventManager ItemPickUp::manager
	EventManager_t1907836883 * ___manager_2;

public:
	inline static int32_t get_offset_of_manager_2() { return static_cast<int32_t>(offsetof(ItemPickUp_t3897257903, ___manager_2)); }
	inline EventManager_t1907836883 * get_manager_2() const { return ___manager_2; }
	inline EventManager_t1907836883 ** get_address_of_manager_2() { return &___manager_2; }
	inline void set_manager_2(EventManager_t1907836883 * value)
	{
		___manager_2 = value;
		Il2CppCodeGenWriteBarrier(&___manager_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
