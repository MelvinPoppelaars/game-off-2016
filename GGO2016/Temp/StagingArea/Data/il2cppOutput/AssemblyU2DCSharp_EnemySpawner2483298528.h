#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemySpawner
struct  EnemySpawner_t2483298528  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 EnemySpawner::MaxSpawns
	int32_t ___MaxSpawns_2;
	// System.Int32 EnemySpawner::MaxLenght
	int32_t ___MaxLenght_3;
	// System.Single EnemySpawner::SpawnerCooldown
	float ___SpawnerCooldown_5;
	// System.Single EnemySpawner::SpawnChanceValue
	float ___SpawnChanceValue_6;
	// System.Single EnemySpawner::SpawnDelay
	float ___SpawnDelay_7;
	// System.Single EnemySpawner::timer
	float ___timer_8;
	// System.Boolean EnemySpawner::SpawnReady
	bool ___SpawnReady_9;
	// System.Int32 EnemySpawner::Enemy
	int32_t ___Enemy_10;
	// System.Single EnemySpawner::probability
	float ___probability_11;
	// UnityEngine.GameObject[] EnemySpawner::Enemies
	GameObjectU5BU5D_t2662109048* ___Enemies_12;

public:
	inline static int32_t get_offset_of_MaxSpawns_2() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___MaxSpawns_2)); }
	inline int32_t get_MaxSpawns_2() const { return ___MaxSpawns_2; }
	inline int32_t* get_address_of_MaxSpawns_2() { return &___MaxSpawns_2; }
	inline void set_MaxSpawns_2(int32_t value)
	{
		___MaxSpawns_2 = value;
	}

	inline static int32_t get_offset_of_MaxLenght_3() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___MaxLenght_3)); }
	inline int32_t get_MaxLenght_3() const { return ___MaxLenght_3; }
	inline int32_t* get_address_of_MaxLenght_3() { return &___MaxLenght_3; }
	inline void set_MaxLenght_3(int32_t value)
	{
		___MaxLenght_3 = value;
	}

	inline static int32_t get_offset_of_SpawnerCooldown_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___SpawnerCooldown_5)); }
	inline float get_SpawnerCooldown_5() const { return ___SpawnerCooldown_5; }
	inline float* get_address_of_SpawnerCooldown_5() { return &___SpawnerCooldown_5; }
	inline void set_SpawnerCooldown_5(float value)
	{
		___SpawnerCooldown_5 = value;
	}

	inline static int32_t get_offset_of_SpawnChanceValue_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___SpawnChanceValue_6)); }
	inline float get_SpawnChanceValue_6() const { return ___SpawnChanceValue_6; }
	inline float* get_address_of_SpawnChanceValue_6() { return &___SpawnChanceValue_6; }
	inline void set_SpawnChanceValue_6(float value)
	{
		___SpawnChanceValue_6 = value;
	}

	inline static int32_t get_offset_of_SpawnDelay_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___SpawnDelay_7)); }
	inline float get_SpawnDelay_7() const { return ___SpawnDelay_7; }
	inline float* get_address_of_SpawnDelay_7() { return &___SpawnDelay_7; }
	inline void set_SpawnDelay_7(float value)
	{
		___SpawnDelay_7 = value;
	}

	inline static int32_t get_offset_of_timer_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___timer_8)); }
	inline float get_timer_8() const { return ___timer_8; }
	inline float* get_address_of_timer_8() { return &___timer_8; }
	inline void set_timer_8(float value)
	{
		___timer_8 = value;
	}

	inline static int32_t get_offset_of_SpawnReady_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___SpawnReady_9)); }
	inline bool get_SpawnReady_9() const { return ___SpawnReady_9; }
	inline bool* get_address_of_SpawnReady_9() { return &___SpawnReady_9; }
	inline void set_SpawnReady_9(bool value)
	{
		___SpawnReady_9 = value;
	}

	inline static int32_t get_offset_of_Enemy_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___Enemy_10)); }
	inline int32_t get_Enemy_10() const { return ___Enemy_10; }
	inline int32_t* get_address_of_Enemy_10() { return &___Enemy_10; }
	inline void set_Enemy_10(int32_t value)
	{
		___Enemy_10 = value;
	}

	inline static int32_t get_offset_of_probability_11() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___probability_11)); }
	inline float get_probability_11() const { return ___probability_11; }
	inline float* get_address_of_probability_11() { return &___probability_11; }
	inline void set_probability_11(float value)
	{
		___probability_11 = value;
	}

	inline static int32_t get_offset_of_Enemies_12() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528, ___Enemies_12)); }
	inline GameObjectU5BU5D_t2662109048* get_Enemies_12() const { return ___Enemies_12; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_Enemies_12() { return &___Enemies_12; }
	inline void set_Enemies_12(GameObjectU5BU5D_t2662109048* value)
	{
		___Enemies_12 = value;
		Il2CppCodeGenWriteBarrier(&___Enemies_12, value);
	}
};

struct EnemySpawner_t2483298528_StaticFields
{
public:
	// System.Int32 EnemySpawner::CurrentEnemies
	int32_t ___CurrentEnemies_4;

public:
	inline static int32_t get_offset_of_CurrentEnemies_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t2483298528_StaticFields, ___CurrentEnemies_4)); }
	inline int32_t get_CurrentEnemies_4() const { return ___CurrentEnemies_4; }
	inline int32_t* get_address_of_CurrentEnemies_4() { return &___CurrentEnemies_4; }
	inline void set_CurrentEnemies_4(int32_t value)
	{
		___CurrentEnemies_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
