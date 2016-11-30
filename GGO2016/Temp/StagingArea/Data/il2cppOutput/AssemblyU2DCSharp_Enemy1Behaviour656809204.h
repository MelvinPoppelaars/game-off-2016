#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy1Behaviour
struct  Enemy1Behaviour_t656809204  : public MonoBehaviour_t667441552
{
public:
	// System.Single Enemy1Behaviour::MinMovementSpeed
	float ___MinMovementSpeed_2;
	// System.Single Enemy1Behaviour::MaxMovementSpeed
	float ___MaxMovementSpeed_3;
	// System.Single Enemy1Behaviour::movementSpeed
	float ___movementSpeed_4;

public:
	inline static int32_t get_offset_of_MinMovementSpeed_2() { return static_cast<int32_t>(offsetof(Enemy1Behaviour_t656809204, ___MinMovementSpeed_2)); }
	inline float get_MinMovementSpeed_2() const { return ___MinMovementSpeed_2; }
	inline float* get_address_of_MinMovementSpeed_2() { return &___MinMovementSpeed_2; }
	inline void set_MinMovementSpeed_2(float value)
	{
		___MinMovementSpeed_2 = value;
	}

	inline static int32_t get_offset_of_MaxMovementSpeed_3() { return static_cast<int32_t>(offsetof(Enemy1Behaviour_t656809204, ___MaxMovementSpeed_3)); }
	inline float get_MaxMovementSpeed_3() const { return ___MaxMovementSpeed_3; }
	inline float* get_address_of_MaxMovementSpeed_3() { return &___MaxMovementSpeed_3; }
	inline void set_MaxMovementSpeed_3(float value)
	{
		___MaxMovementSpeed_3 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(Enemy1Behaviour_t656809204, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
