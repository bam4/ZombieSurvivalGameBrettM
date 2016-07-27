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

// ZombieMoveScript
struct  ZombieMoveScript_t3133650658  : public MonoBehaviour_t667441552
{
public:
	// System.Single ZombieMoveScript::zombieSpeed
	float ___zombieSpeed_2;
	// UnityEngine.GameObject ZombieMoveScript::player
	GameObject_t3674682005 * ___player_3;

public:
	inline static int32_t get_offset_of_zombieSpeed_2() { return static_cast<int32_t>(offsetof(ZombieMoveScript_t3133650658, ___zombieSpeed_2)); }
	inline float get_zombieSpeed_2() const { return ___zombieSpeed_2; }
	inline float* get_address_of_zombieSpeed_2() { return &___zombieSpeed_2; }
	inline void set_zombieSpeed_2(float value)
	{
		___zombieSpeed_2 = value;
	}

	inline static int32_t get_offset_of_player_3() { return static_cast<int32_t>(offsetof(ZombieMoveScript_t3133650658, ___player_3)); }
	inline GameObject_t3674682005 * get_player_3() const { return ___player_3; }
	inline GameObject_t3674682005 ** get_address_of_player_3() { return &___player_3; }
	inline void set_player_3(GameObject_t3674682005 * value)
	{
		___player_3 = value;
		Il2CppCodeGenWriteBarrier(&___player_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
