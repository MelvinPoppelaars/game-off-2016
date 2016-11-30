#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Slider
struct Slider_t79469677;
// UnityEngine.Animator
struct Animator_t2776330603;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UIManager
struct  UIManager_t1861242489  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject UIManager::HighscoreTXT
	GameObject_t3674682005 * ___HighscoreTXT_4;
	// UnityEngine.UI.Text UIManager::ScoreTxt
	Text_t9039225 * ___ScoreTxt_6;
	// UnityEngine.GameObject UIManager::Player
	GameObject_t3674682005 * ___Player_7;
	// UnityEngine.UI.Slider UIManager::Timer
	Slider_t79469677 * ___Timer_8;
	// System.Single UIManager::MaxTime
	float ___MaxTime_9;
	// System.Single UIManager::CurrentTimer
	float ___CurrentTimer_10;
	// UnityEngine.Animator UIManager::anim
	Animator_t2776330603 * ___anim_11;

public:
	inline static int32_t get_offset_of_HighscoreTXT_4() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___HighscoreTXT_4)); }
	inline GameObject_t3674682005 * get_HighscoreTXT_4() const { return ___HighscoreTXT_4; }
	inline GameObject_t3674682005 ** get_address_of_HighscoreTXT_4() { return &___HighscoreTXT_4; }
	inline void set_HighscoreTXT_4(GameObject_t3674682005 * value)
	{
		___HighscoreTXT_4 = value;
		Il2CppCodeGenWriteBarrier(&___HighscoreTXT_4, value);
	}

	inline static int32_t get_offset_of_ScoreTxt_6() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___ScoreTxt_6)); }
	inline Text_t9039225 * get_ScoreTxt_6() const { return ___ScoreTxt_6; }
	inline Text_t9039225 ** get_address_of_ScoreTxt_6() { return &___ScoreTxt_6; }
	inline void set_ScoreTxt_6(Text_t9039225 * value)
	{
		___ScoreTxt_6 = value;
		Il2CppCodeGenWriteBarrier(&___ScoreTxt_6, value);
	}

	inline static int32_t get_offset_of_Player_7() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___Player_7)); }
	inline GameObject_t3674682005 * get_Player_7() const { return ___Player_7; }
	inline GameObject_t3674682005 ** get_address_of_Player_7() { return &___Player_7; }
	inline void set_Player_7(GameObject_t3674682005 * value)
	{
		___Player_7 = value;
		Il2CppCodeGenWriteBarrier(&___Player_7, value);
	}

	inline static int32_t get_offset_of_Timer_8() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___Timer_8)); }
	inline Slider_t79469677 * get_Timer_8() const { return ___Timer_8; }
	inline Slider_t79469677 ** get_address_of_Timer_8() { return &___Timer_8; }
	inline void set_Timer_8(Slider_t79469677 * value)
	{
		___Timer_8 = value;
		Il2CppCodeGenWriteBarrier(&___Timer_8, value);
	}

	inline static int32_t get_offset_of_MaxTime_9() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___MaxTime_9)); }
	inline float get_MaxTime_9() const { return ___MaxTime_9; }
	inline float* get_address_of_MaxTime_9() { return &___MaxTime_9; }
	inline void set_MaxTime_9(float value)
	{
		___MaxTime_9 = value;
	}

	inline static int32_t get_offset_of_CurrentTimer_10() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___CurrentTimer_10)); }
	inline float get_CurrentTimer_10() const { return ___CurrentTimer_10; }
	inline float* get_address_of_CurrentTimer_10() { return &___CurrentTimer_10; }
	inline void set_CurrentTimer_10(float value)
	{
		___CurrentTimer_10 = value;
	}

	inline static int32_t get_offset_of_anim_11() { return static_cast<int32_t>(offsetof(UIManager_t1861242489, ___anim_11)); }
	inline Animator_t2776330603 * get_anim_11() const { return ___anim_11; }
	inline Animator_t2776330603 ** get_address_of_anim_11() { return &___anim_11; }
	inline void set_anim_11(Animator_t2776330603 * value)
	{
		___anim_11 = value;
		Il2CppCodeGenWriteBarrier(&___anim_11, value);
	}
};

struct UIManager_t1861242489_StaticFields
{
public:
	// System.Int32 UIManager::Score
	int32_t ___Score_3;
	// System.Int32 UIManager::count
	int32_t ___count_5;

public:
	inline static int32_t get_offset_of_Score_3() { return static_cast<int32_t>(offsetof(UIManager_t1861242489_StaticFields, ___Score_3)); }
	inline int32_t get_Score_3() const { return ___Score_3; }
	inline int32_t* get_address_of_Score_3() { return &___Score_3; }
	inline void set_Score_3(int32_t value)
	{
		___Score_3 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(UIManager_t1861242489_StaticFields, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
