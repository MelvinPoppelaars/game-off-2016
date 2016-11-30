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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicManager
struct  MusicManager_t2870594024  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject MusicManager::start
	GameObject_t3674682005 * ___start_2;
	// UnityEngine.GameObject MusicManager::game
	GameObject_t3674682005 * ___game_3;
	// UnityEngine.GameObject MusicManager::end
	GameObject_t3674682005 * ___end_4;
	// UnityEngine.GameObject MusicManager::disco
	GameObject_t3674682005 * ___disco_5;

public:
	inline static int32_t get_offset_of_start_2() { return static_cast<int32_t>(offsetof(MusicManager_t2870594024, ___start_2)); }
	inline GameObject_t3674682005 * get_start_2() const { return ___start_2; }
	inline GameObject_t3674682005 ** get_address_of_start_2() { return &___start_2; }
	inline void set_start_2(GameObject_t3674682005 * value)
	{
		___start_2 = value;
		Il2CppCodeGenWriteBarrier(&___start_2, value);
	}

	inline static int32_t get_offset_of_game_3() { return static_cast<int32_t>(offsetof(MusicManager_t2870594024, ___game_3)); }
	inline GameObject_t3674682005 * get_game_3() const { return ___game_3; }
	inline GameObject_t3674682005 ** get_address_of_game_3() { return &___game_3; }
	inline void set_game_3(GameObject_t3674682005 * value)
	{
		___game_3 = value;
		Il2CppCodeGenWriteBarrier(&___game_3, value);
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(MusicManager_t2870594024, ___end_4)); }
	inline GameObject_t3674682005 * get_end_4() const { return ___end_4; }
	inline GameObject_t3674682005 ** get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(GameObject_t3674682005 * value)
	{
		___end_4 = value;
		Il2CppCodeGenWriteBarrier(&___end_4, value);
	}

	inline static int32_t get_offset_of_disco_5() { return static_cast<int32_t>(offsetof(MusicManager_t2870594024, ___disco_5)); }
	inline GameObject_t3674682005 * get_disco_5() const { return ___disco_5; }
	inline GameObject_t3674682005 ** get_address_of_disco_5() { return &___disco_5; }
	inline void set_disco_5(GameObject_t3674682005 * value)
	{
		___disco_5 = value;
		Il2CppCodeGenWriteBarrier(&___disco_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
