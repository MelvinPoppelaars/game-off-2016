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
// UnityEngine.Transform
struct Transform_t1659122786;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy3Behaviour
struct  Enemy3Behaviour_t263782194  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Enemy3Behaviour::Player
	GameObject_t3674682005 * ___Player_2;
	// UnityEngine.Vector3 Enemy3Behaviour::Playerpos
	Vector3_t4282066566  ___Playerpos_3;
	// System.Single Enemy3Behaviour::MinSpeed
	float ___MinSpeed_4;
	// System.Single Enemy3Behaviour::MaxSpeed
	float ___MaxSpeed_5;
	// System.Single Enemy3Behaviour::MovementSpeed
	float ___MovementSpeed_6;
	// UnityEngine.Transform Enemy3Behaviour::PlayerChild
	Transform_t1659122786 * ___PlayerChild_7;

public:
	inline static int32_t get_offset_of_Player_2() { return static_cast<int32_t>(offsetof(Enemy3Behaviour_t263782194, ___Player_2)); }
	inline GameObject_t3674682005 * get_Player_2() const { return ___Player_2; }
	inline GameObject_t3674682005 ** get_address_of_Player_2() { return &___Player_2; }
	inline void set_Player_2(GameObject_t3674682005 * value)
	{
		___Player_2 = value;
		Il2CppCodeGenWriteBarrier(&___Player_2, value);
	}

	inline static int32_t get_offset_of_Playerpos_3() { return static_cast<int32_t>(offsetof(Enemy3Behaviour_t263782194, ___Playerpos_3)); }
	inline Vector3_t4282066566  get_Playerpos_3() const { return ___Playerpos_3; }
	inline Vector3_t4282066566 * get_address_of_Playerpos_3() { return &___Playerpos_3; }
	inline void set_Playerpos_3(Vector3_t4282066566  value)
	{
		___Playerpos_3 = value;
	}

	inline static int32_t get_offset_of_MinSpeed_4() { return static_cast<int32_t>(offsetof(Enemy3Behaviour_t263782194, ___MinSpeed_4)); }
	inline float get_MinSpeed_4() const { return ___MinSpeed_4; }
	inline float* get_address_of_MinSpeed_4() { return &___MinSpeed_4; }
	inline void set_MinSpeed_4(float value)
	{
		___MinSpeed_4 = value;
	}

	inline static int32_t get_offset_of_MaxSpeed_5() { return static_cast<int32_t>(offsetof(Enemy3Behaviour_t263782194, ___MaxSpeed_5)); }
	inline float get_MaxSpeed_5() const { return ___MaxSpeed_5; }
	inline float* get_address_of_MaxSpeed_5() { return &___MaxSpeed_5; }
	inline void set_MaxSpeed_5(float value)
	{
		___MaxSpeed_5 = value;
	}

	inline static int32_t get_offset_of_MovementSpeed_6() { return static_cast<int32_t>(offsetof(Enemy3Behaviour_t263782194, ___MovementSpeed_6)); }
	inline float get_MovementSpeed_6() const { return ___MovementSpeed_6; }
	inline float* get_address_of_MovementSpeed_6() { return &___MovementSpeed_6; }
	inline void set_MovementSpeed_6(float value)
	{
		___MovementSpeed_6 = value;
	}

	inline static int32_t get_offset_of_PlayerChild_7() { return static_cast<int32_t>(offsetof(Enemy3Behaviour_t263782194, ___PlayerChild_7)); }
	inline Transform_t1659122786 * get_PlayerChild_7() const { return ___PlayerChild_7; }
	inline Transform_t1659122786 ** get_address_of_PlayerChild_7() { return &___PlayerChild_7; }
	inline void set_PlayerChild_7(Transform_t1659122786 * value)
	{
		___PlayerChild_7 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerChild_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
