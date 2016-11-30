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
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnManager
struct  SpawnManager_t1443706834  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] SpawnManager::Spawners
	GameObjectU5BU5D_t2662109048* ___Spawners_2;
	// UnityEngine.GameObject SpawnManager::enemy
	GameObject_t3674682005 * ___enemy_3;
	// UnityEngine.GameObject SpawnManager::Centre
	GameObject_t3674682005 * ___Centre_4;
	// UnityEngine.GameObject SpawnManager::Other
	GameObject_t3674682005 * ___Other_5;

public:
	inline static int32_t get_offset_of_Spawners_2() { return static_cast<int32_t>(offsetof(SpawnManager_t1443706834, ___Spawners_2)); }
	inline GameObjectU5BU5D_t2662109048* get_Spawners_2() const { return ___Spawners_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_Spawners_2() { return &___Spawners_2; }
	inline void set_Spawners_2(GameObjectU5BU5D_t2662109048* value)
	{
		___Spawners_2 = value;
		Il2CppCodeGenWriteBarrier(&___Spawners_2, value);
	}

	inline static int32_t get_offset_of_enemy_3() { return static_cast<int32_t>(offsetof(SpawnManager_t1443706834, ___enemy_3)); }
	inline GameObject_t3674682005 * get_enemy_3() const { return ___enemy_3; }
	inline GameObject_t3674682005 ** get_address_of_enemy_3() { return &___enemy_3; }
	inline void set_enemy_3(GameObject_t3674682005 * value)
	{
		___enemy_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemy_3, value);
	}

	inline static int32_t get_offset_of_Centre_4() { return static_cast<int32_t>(offsetof(SpawnManager_t1443706834, ___Centre_4)); }
	inline GameObject_t3674682005 * get_Centre_4() const { return ___Centre_4; }
	inline GameObject_t3674682005 ** get_address_of_Centre_4() { return &___Centre_4; }
	inline void set_Centre_4(GameObject_t3674682005 * value)
	{
		___Centre_4 = value;
		Il2CppCodeGenWriteBarrier(&___Centre_4, value);
	}

	inline static int32_t get_offset_of_Other_5() { return static_cast<int32_t>(offsetof(SpawnManager_t1443706834, ___Other_5)); }
	inline GameObject_t3674682005 * get_Other_5() const { return ___Other_5; }
	inline GameObject_t3674682005 ** get_address_of_Other_5() { return &___Other_5; }
	inline void set_Other_5(GameObject_t3674682005 * value)
	{
		___Other_5 = value;
		Il2CppCodeGenWriteBarrier(&___Other_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
