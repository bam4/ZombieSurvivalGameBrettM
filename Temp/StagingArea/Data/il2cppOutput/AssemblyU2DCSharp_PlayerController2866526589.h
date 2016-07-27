#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Vector2 PlayerController::moveVector
	Vector2_t4282066565  ___moveVector_3;
	// UnityEngine.Rigidbody2D PlayerController::myRigidbody
	Rigidbody2D_t1743771669 * ___myRigidbody_4;
	// UnityEngine.Transform PlayerController::player
	Transform_t1659122786 * ___player_5;
	// UnityEngine.GameObject PlayerController::bulletObject
	GameObject_t3674682005 * ___bulletObject_6;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_moveVector_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveVector_3)); }
	inline Vector2_t4282066565  get_moveVector_3() const { return ___moveVector_3; }
	inline Vector2_t4282066565 * get_address_of_moveVector_3() { return &___moveVector_3; }
	inline void set_moveVector_3(Vector2_t4282066565  value)
	{
		___moveVector_3 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___myRigidbody_4)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody_4() const { return ___myRigidbody_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody_4() { return &___myRigidbody_4; }
	inline void set_myRigidbody_4(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_4, value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___player_5)); }
	inline Transform_t1659122786 * get_player_5() const { return ___player_5; }
	inline Transform_t1659122786 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(Transform_t1659122786 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_bulletObject_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___bulletObject_6)); }
	inline GameObject_t3674682005 * get_bulletObject_6() const { return ___bulletObject_6; }
	inline GameObject_t3674682005 ** get_address_of_bulletObject_6() { return &___bulletObject_6; }
	inline void set_bulletObject_6(GameObject_t3674682005 * value)
	{
		___bulletObject_6 = value;
		Il2CppCodeGenWriteBarrier(&___bulletObject_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
