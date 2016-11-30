#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LavaDeath
struct  LavaDeath_t1815477076  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean LavaDeath::DestroySwitch
	bool ___DestroySwitch_2;
	// UnityEngine.AudioClip LavaDeath::Burn
	AudioClip_t794140988 * ___Burn_3;
	// UnityEngine.GameObject LavaDeath::CurrentTarget
	GameObject_t3674682005 * ___CurrentTarget_4;
	// UnityEngine.Animator LavaDeath::PlayerAnim
	Animator_t2776330603 * ___PlayerAnim_5;
	// UnityEngine.GameObject LavaDeath::Player
	GameObject_t3674682005 * ___Player_6;

public:
	inline static int32_t get_offset_of_DestroySwitch_2() { return static_cast<int32_t>(offsetof(LavaDeath_t1815477076, ___DestroySwitch_2)); }
	inline bool get_DestroySwitch_2() const { return ___DestroySwitch_2; }
	inline bool* get_address_of_DestroySwitch_2() { return &___DestroySwitch_2; }
	inline void set_DestroySwitch_2(bool value)
	{
		___DestroySwitch_2 = value;
	}

	inline static int32_t get_offset_of_Burn_3() { return static_cast<int32_t>(offsetof(LavaDeath_t1815477076, ___Burn_3)); }
	inline AudioClip_t794140988 * get_Burn_3() const { return ___Burn_3; }
	inline AudioClip_t794140988 ** get_address_of_Burn_3() { return &___Burn_3; }
	inline void set_Burn_3(AudioClip_t794140988 * value)
	{
		___Burn_3 = value;
		Il2CppCodeGenWriteBarrier(&___Burn_3, value);
	}

	inline static int32_t get_offset_of_CurrentTarget_4() { return static_cast<int32_t>(offsetof(LavaDeath_t1815477076, ___CurrentTarget_4)); }
	inline GameObject_t3674682005 * get_CurrentTarget_4() const { return ___CurrentTarget_4; }
	inline GameObject_t3674682005 ** get_address_of_CurrentTarget_4() { return &___CurrentTarget_4; }
	inline void set_CurrentTarget_4(GameObject_t3674682005 * value)
	{
		___CurrentTarget_4 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentTarget_4, value);
	}

	inline static int32_t get_offset_of_PlayerAnim_5() { return static_cast<int32_t>(offsetof(LavaDeath_t1815477076, ___PlayerAnim_5)); }
	inline Animator_t2776330603 * get_PlayerAnim_5() const { return ___PlayerAnim_5; }
	inline Animator_t2776330603 ** get_address_of_PlayerAnim_5() { return &___PlayerAnim_5; }
	inline void set_PlayerAnim_5(Animator_t2776330603 * value)
	{
		___PlayerAnim_5 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerAnim_5, value);
	}

	inline static int32_t get_offset_of_Player_6() { return static_cast<int32_t>(offsetof(LavaDeath_t1815477076, ___Player_6)); }
	inline GameObject_t3674682005 * get_Player_6() const { return ___Player_6; }
	inline GameObject_t3674682005 ** get_address_of_Player_6() { return &___Player_6; }
	inline void set_Player_6(GameObject_t3674682005 * value)
	{
		___Player_6 = value;
		Il2CppCodeGenWriteBarrier(&___Player_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
