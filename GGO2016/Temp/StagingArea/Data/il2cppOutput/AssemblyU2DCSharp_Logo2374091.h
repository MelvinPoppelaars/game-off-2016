#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Logo
struct  Logo_t2374091  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Animator Logo::anim
	Animator_t2776330603 * ___anim_2;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(Logo_t2374091, ___anim_2)); }
	inline Animator_t2776330603 * get_anim_2() const { return ___anim_2; }
	inline Animator_t2776330603 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t2776330603 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
