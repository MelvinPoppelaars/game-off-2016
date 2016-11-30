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
// EventManager
struct EventManager_t1907836883;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyController
struct  EnemyController_t2729311524  : public MonoBehaviour_t667441552
{
public:
	// System.Single EnemyController::AttackDamage
	float ___AttackDamage_3;
	// System.Single EnemyController::AddTime
	float ___AddTime_4;
	// System.Single EnemyController::CollisionTimer
	float ___CollisionTimer_5;
	// System.Single EnemyController::Health
	float ___Health_6;
	// System.Int32 EnemyController::ScoreValue
	int32_t ___ScoreValue_7;
	// System.Single EnemyController::yOffset
	float ___yOffset_8;
	// System.Boolean EnemyController::enemyready
	bool ___enemyready_9;
	// UnityEngine.GameObject EnemyController::PlayerBody
	GameObject_t3674682005 * ___PlayerBody_10;
	// UnityEngine.GameObject EnemyController::Event
	GameObject_t3674682005 * ___Event_11;
	// EventManager EnemyController::Manager
	EventManager_t1907836883 * ___Manager_12;

public:
	inline static int32_t get_offset_of_AttackDamage_3() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___AttackDamage_3)); }
	inline float get_AttackDamage_3() const { return ___AttackDamage_3; }
	inline float* get_address_of_AttackDamage_3() { return &___AttackDamage_3; }
	inline void set_AttackDamage_3(float value)
	{
		___AttackDamage_3 = value;
	}

	inline static int32_t get_offset_of_AddTime_4() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___AddTime_4)); }
	inline float get_AddTime_4() const { return ___AddTime_4; }
	inline float* get_address_of_AddTime_4() { return &___AddTime_4; }
	inline void set_AddTime_4(float value)
	{
		___AddTime_4 = value;
	}

	inline static int32_t get_offset_of_CollisionTimer_5() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___CollisionTimer_5)); }
	inline float get_CollisionTimer_5() const { return ___CollisionTimer_5; }
	inline float* get_address_of_CollisionTimer_5() { return &___CollisionTimer_5; }
	inline void set_CollisionTimer_5(float value)
	{
		___CollisionTimer_5 = value;
	}

	inline static int32_t get_offset_of_Health_6() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___Health_6)); }
	inline float get_Health_6() const { return ___Health_6; }
	inline float* get_address_of_Health_6() { return &___Health_6; }
	inline void set_Health_6(float value)
	{
		___Health_6 = value;
	}

	inline static int32_t get_offset_of_ScoreValue_7() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___ScoreValue_7)); }
	inline int32_t get_ScoreValue_7() const { return ___ScoreValue_7; }
	inline int32_t* get_address_of_ScoreValue_7() { return &___ScoreValue_7; }
	inline void set_ScoreValue_7(int32_t value)
	{
		___ScoreValue_7 = value;
	}

	inline static int32_t get_offset_of_yOffset_8() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___yOffset_8)); }
	inline float get_yOffset_8() const { return ___yOffset_8; }
	inline float* get_address_of_yOffset_8() { return &___yOffset_8; }
	inline void set_yOffset_8(float value)
	{
		___yOffset_8 = value;
	}

	inline static int32_t get_offset_of_enemyready_9() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___enemyready_9)); }
	inline bool get_enemyready_9() const { return ___enemyready_9; }
	inline bool* get_address_of_enemyready_9() { return &___enemyready_9; }
	inline void set_enemyready_9(bool value)
	{
		___enemyready_9 = value;
	}

	inline static int32_t get_offset_of_PlayerBody_10() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___PlayerBody_10)); }
	inline GameObject_t3674682005 * get_PlayerBody_10() const { return ___PlayerBody_10; }
	inline GameObject_t3674682005 ** get_address_of_PlayerBody_10() { return &___PlayerBody_10; }
	inline void set_PlayerBody_10(GameObject_t3674682005 * value)
	{
		___PlayerBody_10 = value;
		Il2CppCodeGenWriteBarrier(&___PlayerBody_10, value);
	}

	inline static int32_t get_offset_of_Event_11() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___Event_11)); }
	inline GameObject_t3674682005 * get_Event_11() const { return ___Event_11; }
	inline GameObject_t3674682005 ** get_address_of_Event_11() { return &___Event_11; }
	inline void set_Event_11(GameObject_t3674682005 * value)
	{
		___Event_11 = value;
		Il2CppCodeGenWriteBarrier(&___Event_11, value);
	}

	inline static int32_t get_offset_of_Manager_12() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524, ___Manager_12)); }
	inline EventManager_t1907836883 * get_Manager_12() const { return ___Manager_12; }
	inline EventManager_t1907836883 ** get_address_of_Manager_12() { return &___Manager_12; }
	inline void set_Manager_12(EventManager_t1907836883 * value)
	{
		___Manager_12 = value;
		Il2CppCodeGenWriteBarrier(&___Manager_12, value);
	}
};

struct EnemyController_t2729311524_StaticFields
{
public:
	// System.Int32 EnemyController::CurrentEnemies
	int32_t ___CurrentEnemies_2;

public:
	inline static int32_t get_offset_of_CurrentEnemies_2() { return static_cast<int32_t>(offsetof(EnemyController_t2729311524_StaticFields, ___CurrentEnemies_2)); }
	inline int32_t get_CurrentEnemies_2() const { return ___CurrentEnemies_2; }
	inline int32_t* get_address_of_CurrentEnemies_2() { return &___CurrentEnemies_2; }
	inline void set_CurrentEnemies_2(int32_t value)
	{
		___CurrentEnemies_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
