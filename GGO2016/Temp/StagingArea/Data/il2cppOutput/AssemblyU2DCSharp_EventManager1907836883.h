#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_EventManager_States3739906014.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EventManager
struct  EventManager_t1907836883  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.UI.Text EventManager::CurseTxt
	Text_t9039225 * ___CurseTxt_4;
	// System.Int32 EventManager::CurseRange
	int32_t ___CurseRange_5;
	// UnityEngine.GameObject EventManager::Curse
	GameObject_t3674682005 * ___Curse_6;
	// UnityEngine.GameObject EventManager::Clouds
	GameObject_t3674682005 * ___Clouds_7;
	// UnityEngine.GameObject EventManager::LavaFloor
	GameObject_t3674682005 * ___LavaFloor_8;
	// UnityEngine.GameObject EventManager::IceFloor
	GameObject_t3674682005 * ___IceFloor_9;
	// UnityEngine.GameObject EventManager::Forrest
	GameObject_t3674682005 * ___Forrest_10;
	// UnityEngine.AudioClip EventManager::LightningClip
	AudioClip_t794140988 * ___LightningClip_11;
	// PlayerController EventManager::playerScript
	PlayerController_t2866526589 * ___playerScript_12;
	// UnityEngine.GameObject EventManager::Player
	GameObject_t3674682005 * ___Player_13;
	// UnityEngine.GameObject EventManager::Background
	GameObject_t3674682005 * ___Background_14;
	// UnityEngine.Animator EventManager::BgAnim
	Animator_t2776330603 * ___BgAnim_15;
	// UnityEngine.Animator EventManager::CamAnim
	Animator_t2776330603 * ___CamAnim_16;
	// UnityEngine.GameObject EventManager::Lightning
	GameObject_t3674682005 * ___Lightning_17;
	// UnityEngine.GameObject EventManager::Body
	GameObject_t3674682005 * ___Body_18;
	// UnityEngine.Rigidbody2D EventManager::BodyRig
	Rigidbody2D_t1743771669 * ___BodyRig_19;
	// UnityEngine.GameObject EventManager::Level
	GameObject_t3674682005 * ___Level_20;
	// UnityEngine.GameObject EventManager::CentreSpawners
	GameObject_t3674682005 * ___CentreSpawners_21;
	// System.Single EventManager::time
	float ___time_22;
	// UnityEngine.GameObject EventManager::start
	GameObject_t3674682005 * ___start_23;
	// UnityEngine.GameObject EventManager::game
	GameObject_t3674682005 * ___game_24;
	// UnityEngine.GameObject EventManager::end
	GameObject_t3674682005 * ___end_25;
	// UnityEngine.GameObject EventManager::disco
	GameObject_t3674682005 * ___disco_26;

public:
	inline static int32_t get_offset_of_CurseTxt_4() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___CurseTxt_4)); }
	inline Text_t9039225 * get_CurseTxt_4() const { return ___CurseTxt_4; }
	inline Text_t9039225 ** get_address_of_CurseTxt_4() { return &___CurseTxt_4; }
	inline void set_CurseTxt_4(Text_t9039225 * value)
	{
		___CurseTxt_4 = value;
		Il2CppCodeGenWriteBarrier(&___CurseTxt_4, value);
	}

	inline static int32_t get_offset_of_CurseRange_5() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___CurseRange_5)); }
	inline int32_t get_CurseRange_5() const { return ___CurseRange_5; }
	inline int32_t* get_address_of_CurseRange_5() { return &___CurseRange_5; }
	inline void set_CurseRange_5(int32_t value)
	{
		___CurseRange_5 = value;
	}

	inline static int32_t get_offset_of_Curse_6() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Curse_6)); }
	inline GameObject_t3674682005 * get_Curse_6() const { return ___Curse_6; }
	inline GameObject_t3674682005 ** get_address_of_Curse_6() { return &___Curse_6; }
	inline void set_Curse_6(GameObject_t3674682005 * value)
	{
		___Curse_6 = value;
		Il2CppCodeGenWriteBarrier(&___Curse_6, value);
	}

	inline static int32_t get_offset_of_Clouds_7() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Clouds_7)); }
	inline GameObject_t3674682005 * get_Clouds_7() const { return ___Clouds_7; }
	inline GameObject_t3674682005 ** get_address_of_Clouds_7() { return &___Clouds_7; }
	inline void set_Clouds_7(GameObject_t3674682005 * value)
	{
		___Clouds_7 = value;
		Il2CppCodeGenWriteBarrier(&___Clouds_7, value);
	}

	inline static int32_t get_offset_of_LavaFloor_8() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___LavaFloor_8)); }
	inline GameObject_t3674682005 * get_LavaFloor_8() const { return ___LavaFloor_8; }
	inline GameObject_t3674682005 ** get_address_of_LavaFloor_8() { return &___LavaFloor_8; }
	inline void set_LavaFloor_8(GameObject_t3674682005 * value)
	{
		___LavaFloor_8 = value;
		Il2CppCodeGenWriteBarrier(&___LavaFloor_8, value);
	}

	inline static int32_t get_offset_of_IceFloor_9() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___IceFloor_9)); }
	inline GameObject_t3674682005 * get_IceFloor_9() const { return ___IceFloor_9; }
	inline GameObject_t3674682005 ** get_address_of_IceFloor_9() { return &___IceFloor_9; }
	inline void set_IceFloor_9(GameObject_t3674682005 * value)
	{
		___IceFloor_9 = value;
		Il2CppCodeGenWriteBarrier(&___IceFloor_9, value);
	}

	inline static int32_t get_offset_of_Forrest_10() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Forrest_10)); }
	inline GameObject_t3674682005 * get_Forrest_10() const { return ___Forrest_10; }
	inline GameObject_t3674682005 ** get_address_of_Forrest_10() { return &___Forrest_10; }
	inline void set_Forrest_10(GameObject_t3674682005 * value)
	{
		___Forrest_10 = value;
		Il2CppCodeGenWriteBarrier(&___Forrest_10, value);
	}

	inline static int32_t get_offset_of_LightningClip_11() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___LightningClip_11)); }
	inline AudioClip_t794140988 * get_LightningClip_11() const { return ___LightningClip_11; }
	inline AudioClip_t794140988 ** get_address_of_LightningClip_11() { return &___LightningClip_11; }
	inline void set_LightningClip_11(AudioClip_t794140988 * value)
	{
		___LightningClip_11 = value;
		Il2CppCodeGenWriteBarrier(&___LightningClip_11, value);
	}

	inline static int32_t get_offset_of_playerScript_12() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___playerScript_12)); }
	inline PlayerController_t2866526589 * get_playerScript_12() const { return ___playerScript_12; }
	inline PlayerController_t2866526589 ** get_address_of_playerScript_12() { return &___playerScript_12; }
	inline void set_playerScript_12(PlayerController_t2866526589 * value)
	{
		___playerScript_12 = value;
		Il2CppCodeGenWriteBarrier(&___playerScript_12, value);
	}

	inline static int32_t get_offset_of_Player_13() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Player_13)); }
	inline GameObject_t3674682005 * get_Player_13() const { return ___Player_13; }
	inline GameObject_t3674682005 ** get_address_of_Player_13() { return &___Player_13; }
	inline void set_Player_13(GameObject_t3674682005 * value)
	{
		___Player_13 = value;
		Il2CppCodeGenWriteBarrier(&___Player_13, value);
	}

	inline static int32_t get_offset_of_Background_14() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Background_14)); }
	inline GameObject_t3674682005 * get_Background_14() const { return ___Background_14; }
	inline GameObject_t3674682005 ** get_address_of_Background_14() { return &___Background_14; }
	inline void set_Background_14(GameObject_t3674682005 * value)
	{
		___Background_14 = value;
		Il2CppCodeGenWriteBarrier(&___Background_14, value);
	}

	inline static int32_t get_offset_of_BgAnim_15() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___BgAnim_15)); }
	inline Animator_t2776330603 * get_BgAnim_15() const { return ___BgAnim_15; }
	inline Animator_t2776330603 ** get_address_of_BgAnim_15() { return &___BgAnim_15; }
	inline void set_BgAnim_15(Animator_t2776330603 * value)
	{
		___BgAnim_15 = value;
		Il2CppCodeGenWriteBarrier(&___BgAnim_15, value);
	}

	inline static int32_t get_offset_of_CamAnim_16() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___CamAnim_16)); }
	inline Animator_t2776330603 * get_CamAnim_16() const { return ___CamAnim_16; }
	inline Animator_t2776330603 ** get_address_of_CamAnim_16() { return &___CamAnim_16; }
	inline void set_CamAnim_16(Animator_t2776330603 * value)
	{
		___CamAnim_16 = value;
		Il2CppCodeGenWriteBarrier(&___CamAnim_16, value);
	}

	inline static int32_t get_offset_of_Lightning_17() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Lightning_17)); }
	inline GameObject_t3674682005 * get_Lightning_17() const { return ___Lightning_17; }
	inline GameObject_t3674682005 ** get_address_of_Lightning_17() { return &___Lightning_17; }
	inline void set_Lightning_17(GameObject_t3674682005 * value)
	{
		___Lightning_17 = value;
		Il2CppCodeGenWriteBarrier(&___Lightning_17, value);
	}

	inline static int32_t get_offset_of_Body_18() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Body_18)); }
	inline GameObject_t3674682005 * get_Body_18() const { return ___Body_18; }
	inline GameObject_t3674682005 ** get_address_of_Body_18() { return &___Body_18; }
	inline void set_Body_18(GameObject_t3674682005 * value)
	{
		___Body_18 = value;
		Il2CppCodeGenWriteBarrier(&___Body_18, value);
	}

	inline static int32_t get_offset_of_BodyRig_19() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___BodyRig_19)); }
	inline Rigidbody2D_t1743771669 * get_BodyRig_19() const { return ___BodyRig_19; }
	inline Rigidbody2D_t1743771669 ** get_address_of_BodyRig_19() { return &___BodyRig_19; }
	inline void set_BodyRig_19(Rigidbody2D_t1743771669 * value)
	{
		___BodyRig_19 = value;
		Il2CppCodeGenWriteBarrier(&___BodyRig_19, value);
	}

	inline static int32_t get_offset_of_Level_20() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___Level_20)); }
	inline GameObject_t3674682005 * get_Level_20() const { return ___Level_20; }
	inline GameObject_t3674682005 ** get_address_of_Level_20() { return &___Level_20; }
	inline void set_Level_20(GameObject_t3674682005 * value)
	{
		___Level_20 = value;
		Il2CppCodeGenWriteBarrier(&___Level_20, value);
	}

	inline static int32_t get_offset_of_CentreSpawners_21() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___CentreSpawners_21)); }
	inline GameObject_t3674682005 * get_CentreSpawners_21() const { return ___CentreSpawners_21; }
	inline GameObject_t3674682005 ** get_address_of_CentreSpawners_21() { return &___CentreSpawners_21; }
	inline void set_CentreSpawners_21(GameObject_t3674682005 * value)
	{
		___CentreSpawners_21 = value;
		Il2CppCodeGenWriteBarrier(&___CentreSpawners_21, value);
	}

	inline static int32_t get_offset_of_time_22() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___time_22)); }
	inline float get_time_22() const { return ___time_22; }
	inline float* get_address_of_time_22() { return &___time_22; }
	inline void set_time_22(float value)
	{
		___time_22 = value;
	}

	inline static int32_t get_offset_of_start_23() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___start_23)); }
	inline GameObject_t3674682005 * get_start_23() const { return ___start_23; }
	inline GameObject_t3674682005 ** get_address_of_start_23() { return &___start_23; }
	inline void set_start_23(GameObject_t3674682005 * value)
	{
		___start_23 = value;
		Il2CppCodeGenWriteBarrier(&___start_23, value);
	}

	inline static int32_t get_offset_of_game_24() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___game_24)); }
	inline GameObject_t3674682005 * get_game_24() const { return ___game_24; }
	inline GameObject_t3674682005 ** get_address_of_game_24() { return &___game_24; }
	inline void set_game_24(GameObject_t3674682005 * value)
	{
		___game_24 = value;
		Il2CppCodeGenWriteBarrier(&___game_24, value);
	}

	inline static int32_t get_offset_of_end_25() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___end_25)); }
	inline GameObject_t3674682005 * get_end_25() const { return ___end_25; }
	inline GameObject_t3674682005 ** get_address_of_end_25() { return &___end_25; }
	inline void set_end_25(GameObject_t3674682005 * value)
	{
		___end_25 = value;
		Il2CppCodeGenWriteBarrier(&___end_25, value);
	}

	inline static int32_t get_offset_of_disco_26() { return static_cast<int32_t>(offsetof(EventManager_t1907836883, ___disco_26)); }
	inline GameObject_t3674682005 * get_disco_26() const { return ___disco_26; }
	inline GameObject_t3674682005 ** get_address_of_disco_26() { return &___disco_26; }
	inline void set_disco_26(GameObject_t3674682005 * value)
	{
		___disco_26 = value;
		Il2CppCodeGenWriteBarrier(&___disco_26, value);
	}
};

struct EventManager_t1907836883_StaticFields
{
public:
	// System.Single EventManager::EventTime
	float ___EventTime_2;
	// System.Single EventManager::timer
	float ___timer_3;
	// EventManager/States EventManager::CurrentState
	int32_t ___CurrentState_27;

public:
	inline static int32_t get_offset_of_EventTime_2() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___EventTime_2)); }
	inline float get_EventTime_2() const { return ___EventTime_2; }
	inline float* get_address_of_EventTime_2() { return &___EventTime_2; }
	inline void set_EventTime_2(float value)
	{
		___EventTime_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___timer_3)); }
	inline float get_timer_3() const { return ___timer_3; }
	inline float* get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(float value)
	{
		___timer_3 = value;
	}

	inline static int32_t get_offset_of_CurrentState_27() { return static_cast<int32_t>(offsetof(EventManager_t1907836883_StaticFields, ___CurrentState_27)); }
	inline int32_t get_CurrentState_27() const { return ___CurrentState_27; }
	inline int32_t* get_address_of_CurrentState_27() { return &___CurrentState_27; }
	inline void set_CurrentState_27(int32_t value)
	{
		___CurrentState_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
