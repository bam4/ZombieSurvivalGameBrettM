#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZombieSpawner
struct  ZombieSpawner_t3503245378  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform ZombieSpawner::zombieSpawnerPos
	Transform_t1659122786 * ___zombieSpawnerPos_2;
	// UnityEngine.GameObject ZombieSpawner::zombie
	GameObject_t3674682005 * ___zombie_3;

public:
	inline static int32_t get_offset_of_zombieSpawnerPos_2() { return static_cast<int32_t>(offsetof(ZombieSpawner_t3503245378, ___zombieSpawnerPos_2)); }
	inline Transform_t1659122786 * get_zombieSpawnerPos_2() const { return ___zombieSpawnerPos_2; }
	inline Transform_t1659122786 ** get_address_of_zombieSpawnerPos_2() { return &___zombieSpawnerPos_2; }
	inline void set_zombieSpawnerPos_2(Transform_t1659122786 * value)
	{
		___zombieSpawnerPos_2 = value;
		Il2CppCodeGenWriteBarrier(&___zombieSpawnerPos_2, value);
	}

	inline static int32_t get_offset_of_zombie_3() { return static_cast<int32_t>(offsetof(ZombieSpawner_t3503245378, ___zombie_3)); }
	inline GameObject_t3674682005 * get_zombie_3() const { return ___zombie_3; }
	inline GameObject_t3674682005 ** get_address_of_zombie_3() { return &___zombie_3; }
	inline void set_zombie_3(GameObject_t3674682005 * value)
	{
		___zombie_3 = value;
		Il2CppCodeGenWriteBarrier(&___zombie_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
