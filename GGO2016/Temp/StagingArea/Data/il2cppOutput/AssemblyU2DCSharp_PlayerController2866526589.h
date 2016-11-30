#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::JumpForce
	float ___JumpForce_3;
	// System.Single PlayerController::JumpOffForce
	float ___JumpOffForce_4;
	// System.Single PlayerController::PlayerDamage
	float ___PlayerDamage_5;
	// System.Single PlayerController::AttackDamage
	float ___AttackDamage_6;
	// System.Single PlayerController::yOffset
	float ___yOffset_7;
	// UnityEngine.Collider2D PlayerController::Col
	Collider2D_t1552025098 * ___Col_9;
	// System.Single PlayerController::ScaleMin
	float ___ScaleMin_10;
	// System.Single PlayerController::ScalePlus
	float ___ScalePlus_11;
	// System.Single PlayerController::xMin
	float ___xMin_12;
	// System.Single PlayerController::xMax
	float ___xMax_13;
	// System.Single PlayerController::yMax
	float ___yMax_14;
	// System.Single PlayerController::top
	float ___top_15;
	// System.Single PlayerController::left
	float ___left_16;
	// System.Single PlayerController::right
	float ___right_17;
	// System.Single PlayerController::distanceToCamera
	float ___distanceToCamera_18;
	// UnityEngine.AudioClip PlayerController::EnemyHit
	AudioClip_t794140988 * ___EnemyHit_19;
	// UnityEngine.AudioClip PlayerController::JumpClip
	AudioClip_t794140988 * ___JumpClip_20;
	// UnityEngine.GameObject PlayerController::HitFX
	GameObject_t3674682005 * ___HitFX_21;
	// System.Boolean PlayerController::MovingRight
	bool ___MovingRight_22;
	// UnityEngine.Rigidbody2D PlayerController::rig
	Rigidbody2D_t1743771669 * ___rig_23;
	// UnityEngine.Animator PlayerController::anim
	Animator_t2776330603 * ___anim_24;
	// UnityEngine.AudioSource PlayerController::Audio
	AudioSource_t1740077639 * ___Audio_25;
	// System.Int32 PlayerController::RandomPitch
	int32_t ___RandomPitch_26;

public:
	inline static int32_t get_offset_of_JumpForce_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___JumpForce_3)); }
	inline float get_JumpForce_3() const { return ___JumpForce_3; }
	inline float* get_address_of_JumpForce_3() { return &___JumpForce_3; }
	inline void set_JumpForce_3(float value)
	{
		___JumpForce_3 = value;
	}

	inline static int32_t get_offset_of_JumpOffForce_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___JumpOffForce_4)); }
	inline float get_JumpOffForce_4() const { return ___JumpOffForce_4; }
	inline float* get_address_of_JumpOffForce_4() { return &___JumpOffForce_4; }
	inline void set_JumpOffForce_4(float value)
	{
		___JumpOffForce_4 = value;
	}

	inline static int32_t get_offset_of_PlayerDamage_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___PlayerDamage_5)); }
	inline float get_PlayerDamage_5() const { return ___PlayerDamage_5; }
	inline float* get_address_of_PlayerDamage_5() { return &___PlayerDamage_5; }
	inline void set_PlayerDamage_5(float value)
	{
		___PlayerDamage_5 = value;
	}

	inline static int32_t get_offset_of_AttackDamage_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___AttackDamage_6)); }
	inline float get_AttackDamage_6() const { return ___AttackDamage_6; }
	inline float* get_address_of_AttackDamage_6() { return &___AttackDamage_6; }
	inline void set_AttackDamage_6(float value)
	{
		___AttackDamage_6 = value;
	}

	inline static int32_t get_offset_of_yOffset_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___yOffset_7)); }
	inline float get_yOffset_7() const { return ___yOffset_7; }
	inline float* get_address_of_yOffset_7() { return &___yOffset_7; }
	inline void set_yOffset_7(float value)
	{
		___yOffset_7 = value;
	}

	inline static int32_t get_offset_of_Col_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___Col_9)); }
	inline Collider2D_t1552025098 * get_Col_9() const { return ___Col_9; }
	inline Collider2D_t1552025098 ** get_address_of_Col_9() { return &___Col_9; }
	inline void set_Col_9(Collider2D_t1552025098 * value)
	{
		___Col_9 = value;
		Il2CppCodeGenWriteBarrier(&___Col_9, value);
	}

	inline static int32_t get_offset_of_ScaleMin_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___ScaleMin_10)); }
	inline float get_ScaleMin_10() const { return ___ScaleMin_10; }
	inline float* get_address_of_ScaleMin_10() { return &___ScaleMin_10; }
	inline void set_ScaleMin_10(float value)
	{
		___ScaleMin_10 = value;
	}

	inline static int32_t get_offset_of_ScalePlus_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___ScalePlus_11)); }
	inline float get_ScalePlus_11() const { return ___ScalePlus_11; }
	inline float* get_address_of_ScalePlus_11() { return &___ScalePlus_11; }
	inline void set_ScalePlus_11(float value)
	{
		___ScalePlus_11 = value;
	}

	inline static int32_t get_offset_of_xMin_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___xMin_12)); }
	inline float get_xMin_12() const { return ___xMin_12; }
	inline float* get_address_of_xMin_12() { return &___xMin_12; }
	inline void set_xMin_12(float value)
	{
		___xMin_12 = value;
	}

	inline static int32_t get_offset_of_xMax_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___xMax_13)); }
	inline float get_xMax_13() const { return ___xMax_13; }
	inline float* get_address_of_xMax_13() { return &___xMax_13; }
	inline void set_xMax_13(float value)
	{
		___xMax_13 = value;
	}

	inline static int32_t get_offset_of_yMax_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___yMax_14)); }
	inline float get_yMax_14() const { return ___yMax_14; }
	inline float* get_address_of_yMax_14() { return &___yMax_14; }
	inline void set_yMax_14(float value)
	{
		___yMax_14 = value;
	}

	inline static int32_t get_offset_of_top_15() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___top_15)); }
	inline float get_top_15() const { return ___top_15; }
	inline float* get_address_of_top_15() { return &___top_15; }
	inline void set_top_15(float value)
	{
		___top_15 = value;
	}

	inline static int32_t get_offset_of_left_16() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___left_16)); }
	inline float get_left_16() const { return ___left_16; }
	inline float* get_address_of_left_16() { return &___left_16; }
	inline void set_left_16(float value)
	{
		___left_16 = value;
	}

	inline static int32_t get_offset_of_right_17() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___right_17)); }
	inline float get_right_17() const { return ___right_17; }
	inline float* get_address_of_right_17() { return &___right_17; }
	inline void set_right_17(float value)
	{
		___right_17 = value;
	}

	inline static int32_t get_offset_of_distanceToCamera_18() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___distanceToCamera_18)); }
	inline float get_distanceToCamera_18() const { return ___distanceToCamera_18; }
	inline float* get_address_of_distanceToCamera_18() { return &___distanceToCamera_18; }
	inline void set_distanceToCamera_18(float value)
	{
		___distanceToCamera_18 = value;
	}

	inline static int32_t get_offset_of_EnemyHit_19() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___EnemyHit_19)); }
	inline AudioClip_t794140988 * get_EnemyHit_19() const { return ___EnemyHit_19; }
	inline AudioClip_t794140988 ** get_address_of_EnemyHit_19() { return &___EnemyHit_19; }
	inline void set_EnemyHit_19(AudioClip_t794140988 * value)
	{
		___EnemyHit_19 = value;
		Il2CppCodeGenWriteBarrier(&___EnemyHit_19, value);
	}

	inline static int32_t get_offset_of_JumpClip_20() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___JumpClip_20)); }
	inline AudioClip_t794140988 * get_JumpClip_20() const { return ___JumpClip_20; }
	inline AudioClip_t794140988 ** get_address_of_JumpClip_20() { return &___JumpClip_20; }
	inline void set_JumpClip_20(AudioClip_t794140988 * value)
	{
		___JumpClip_20 = value;
		Il2CppCodeGenWriteBarrier(&___JumpClip_20, value);
	}

	inline static int32_t get_offset_of_HitFX_21() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___HitFX_21)); }
	inline GameObject_t3674682005 * get_HitFX_21() const { return ___HitFX_21; }
	inline GameObject_t3674682005 ** get_address_of_HitFX_21() { return &___HitFX_21; }
	inline void set_HitFX_21(GameObject_t3674682005 * value)
	{
		___HitFX_21 = value;
		Il2CppCodeGenWriteBarrier(&___HitFX_21, value);
	}

	inline static int32_t get_offset_of_MovingRight_22() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___MovingRight_22)); }
	inline bool get_MovingRight_22() const { return ___MovingRight_22; }
	inline bool* get_address_of_MovingRight_22() { return &___MovingRight_22; }
	inline void set_MovingRight_22(bool value)
	{
		___MovingRight_22 = value;
	}

	inline static int32_t get_offset_of_rig_23() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rig_23)); }
	inline Rigidbody2D_t1743771669 * get_rig_23() const { return ___rig_23; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rig_23() { return &___rig_23; }
	inline void set_rig_23(Rigidbody2D_t1743771669 * value)
	{
		___rig_23 = value;
		Il2CppCodeGenWriteBarrier(&___rig_23, value);
	}

	inline static int32_t get_offset_of_anim_24() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___anim_24)); }
	inline Animator_t2776330603 * get_anim_24() const { return ___anim_24; }
	inline Animator_t2776330603 ** get_address_of_anim_24() { return &___anim_24; }
	inline void set_anim_24(Animator_t2776330603 * value)
	{
		___anim_24 = value;
		Il2CppCodeGenWriteBarrier(&___anim_24, value);
	}

	inline static int32_t get_offset_of_Audio_25() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___Audio_25)); }
	inline AudioSource_t1740077639 * get_Audio_25() const { return ___Audio_25; }
	inline AudioSource_t1740077639 ** get_address_of_Audio_25() { return &___Audio_25; }
	inline void set_Audio_25(AudioSource_t1740077639 * value)
	{
		___Audio_25 = value;
		Il2CppCodeGenWriteBarrier(&___Audio_25, value);
	}

	inline static int32_t get_offset_of_RandomPitch_26() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___RandomPitch_26)); }
	inline int32_t get_RandomPitch_26() const { return ___RandomPitch_26; }
	inline int32_t* get_address_of_RandomPitch_26() { return &___RandomPitch_26; }
	inline void set_RandomPitch_26(int32_t value)
	{
		___RandomPitch_26 = value;
	}
};

struct PlayerController_t2866526589_StaticFields
{
public:
	// System.Single PlayerController::MovementSpeed
	float ___MovementSpeed_2;
	// System.Single PlayerController::health
	float ___health_8;
	// System.Boolean PlayerController::GameStart
	bool ___GameStart_27;

public:
	inline static int32_t get_offset_of_MovementSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___MovementSpeed_2)); }
	inline float get_MovementSpeed_2() const { return ___MovementSpeed_2; }
	inline float* get_address_of_MovementSpeed_2() { return &___MovementSpeed_2; }
	inline void set_MovementSpeed_2(float value)
	{
		___MovementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_health_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___health_8)); }
	inline float get_health_8() const { return ___health_8; }
	inline float* get_address_of_health_8() { return &___health_8; }
	inline void set_health_8(float value)
	{
		___health_8 = value;
	}

	inline static int32_t get_offset_of_GameStart_27() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589_StaticFields, ___GameStart_27)); }
	inline bool get_GameStart_27() const { return ___GameStart_27; }
	inline bool* get_address_of_GameStart_27() { return &___GameStart_27; }
	inline void set_GameStart_27(bool value)
	{
		___GameStart_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
