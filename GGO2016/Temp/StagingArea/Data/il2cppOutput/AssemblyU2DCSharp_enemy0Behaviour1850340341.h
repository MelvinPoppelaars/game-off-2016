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

// enemy0Behaviour
struct  enemy0Behaviour_t1850340341  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject enemy0Behaviour::Enemy0
	GameObject_t3674682005 * ___Enemy0_2;
	// System.Single enemy0Behaviour::minSize
	float ___minSize_3;
	// System.Single enemy0Behaviour::maxSize
	float ___maxSize_4;
	// System.Single enemy0Behaviour::MinMovementSpeed
	float ___MinMovementSpeed_5;
	// System.Single enemy0Behaviour::distanceToCamera
	float ___distanceToCamera_6;
	// System.Single enemy0Behaviour::xMin
	float ___xMin_7;
	// System.Single enemy0Behaviour::xMax
	float ___xMax_8;
	// System.Single enemy0Behaviour::left
	float ___left_9;
	// System.Single enemy0Behaviour::right
	float ___right_10;
	// System.Single enemy0Behaviour::MaxMovementSpeed
	float ___MaxMovementSpeed_11;
	// System.Single enemy0Behaviour::movementSpeed
	float ___movementSpeed_12;
	// System.Single enemy0Behaviour::enemySize
	float ___enemySize_13;
	// System.Boolean enemy0Behaviour::MovingRight
	bool ___MovingRight_14;

public:
	inline static int32_t get_offset_of_Enemy0_2() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___Enemy0_2)); }
	inline GameObject_t3674682005 * get_Enemy0_2() const { return ___Enemy0_2; }
	inline GameObject_t3674682005 ** get_address_of_Enemy0_2() { return &___Enemy0_2; }
	inline void set_Enemy0_2(GameObject_t3674682005 * value)
	{
		___Enemy0_2 = value;
		Il2CppCodeGenWriteBarrier(&___Enemy0_2, value);
	}

	inline static int32_t get_offset_of_minSize_3() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___minSize_3)); }
	inline float get_minSize_3() const { return ___minSize_3; }
	inline float* get_address_of_minSize_3() { return &___minSize_3; }
	inline void set_minSize_3(float value)
	{
		___minSize_3 = value;
	}

	inline static int32_t get_offset_of_maxSize_4() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___maxSize_4)); }
	inline float get_maxSize_4() const { return ___maxSize_4; }
	inline float* get_address_of_maxSize_4() { return &___maxSize_4; }
	inline void set_maxSize_4(float value)
	{
		___maxSize_4 = value;
	}

	inline static int32_t get_offset_of_MinMovementSpeed_5() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___MinMovementSpeed_5)); }
	inline float get_MinMovementSpeed_5() const { return ___MinMovementSpeed_5; }
	inline float* get_address_of_MinMovementSpeed_5() { return &___MinMovementSpeed_5; }
	inline void set_MinMovementSpeed_5(float value)
	{
		___MinMovementSpeed_5 = value;
	}

	inline static int32_t get_offset_of_distanceToCamera_6() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___distanceToCamera_6)); }
	inline float get_distanceToCamera_6() const { return ___distanceToCamera_6; }
	inline float* get_address_of_distanceToCamera_6() { return &___distanceToCamera_6; }
	inline void set_distanceToCamera_6(float value)
	{
		___distanceToCamera_6 = value;
	}

	inline static int32_t get_offset_of_xMin_7() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___xMin_7)); }
	inline float get_xMin_7() const { return ___xMin_7; }
	inline float* get_address_of_xMin_7() { return &___xMin_7; }
	inline void set_xMin_7(float value)
	{
		___xMin_7 = value;
	}

	inline static int32_t get_offset_of_xMax_8() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___xMax_8)); }
	inline float get_xMax_8() const { return ___xMax_8; }
	inline float* get_address_of_xMax_8() { return &___xMax_8; }
	inline void set_xMax_8(float value)
	{
		___xMax_8 = value;
	}

	inline static int32_t get_offset_of_left_9() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___left_9)); }
	inline float get_left_9() const { return ___left_9; }
	inline float* get_address_of_left_9() { return &___left_9; }
	inline void set_left_9(float value)
	{
		___left_9 = value;
	}

	inline static int32_t get_offset_of_right_10() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___right_10)); }
	inline float get_right_10() const { return ___right_10; }
	inline float* get_address_of_right_10() { return &___right_10; }
	inline void set_right_10(float value)
	{
		___right_10 = value;
	}

	inline static int32_t get_offset_of_MaxMovementSpeed_11() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___MaxMovementSpeed_11)); }
	inline float get_MaxMovementSpeed_11() const { return ___MaxMovementSpeed_11; }
	inline float* get_address_of_MaxMovementSpeed_11() { return &___MaxMovementSpeed_11; }
	inline void set_MaxMovementSpeed_11(float value)
	{
		___MaxMovementSpeed_11 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_12() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___movementSpeed_12)); }
	inline float get_movementSpeed_12() const { return ___movementSpeed_12; }
	inline float* get_address_of_movementSpeed_12() { return &___movementSpeed_12; }
	inline void set_movementSpeed_12(float value)
	{
		___movementSpeed_12 = value;
	}

	inline static int32_t get_offset_of_enemySize_13() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___enemySize_13)); }
	inline float get_enemySize_13() const { return ___enemySize_13; }
	inline float* get_address_of_enemySize_13() { return &___enemySize_13; }
	inline void set_enemySize_13(float value)
	{
		___enemySize_13 = value;
	}

	inline static int32_t get_offset_of_MovingRight_14() { return static_cast<int32_t>(offsetof(enemy0Behaviour_t1850340341, ___MovingRight_14)); }
	inline bool get_MovingRight_14() const { return ___MovingRight_14; }
	inline bool* get_address_of_MovingRight_14() { return &___MovingRight_14; }
	inline void set_MovingRight_14(bool value)
	{
		___MovingRight_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
