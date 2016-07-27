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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BulletMoving
struct  BulletMoving_t571409424  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject BulletMoving::player
	GameObject_t3674682005 * ___player_2;
	// UnityEngine.Vector2 BulletMoving::moveBullet
	Vector2_t4282066565  ___moveBullet_3;
	// UnityEngine.Rigidbody2D BulletMoving::myRigidbody
	Rigidbody2D_t1743771669 * ___myRigidbody_4;
	// System.Int32 BulletMoving::bulletSpeedX
	int32_t ___bulletSpeedX_5;
	// System.Int32 BulletMoving::bulletSpeedY
	int32_t ___bulletSpeedY_6;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(BulletMoving_t571409424, ___player_2)); }
	inline GameObject_t3674682005 * get_player_2() const { return ___player_2; }
	inline GameObject_t3674682005 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t3674682005 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_moveBullet_3() { return static_cast<int32_t>(offsetof(BulletMoving_t571409424, ___moveBullet_3)); }
	inline Vector2_t4282066565  get_moveBullet_3() const { return ___moveBullet_3; }
	inline Vector2_t4282066565 * get_address_of_moveBullet_3() { return &___moveBullet_3; }
	inline void set_moveBullet_3(Vector2_t4282066565  value)
	{
		___moveBullet_3 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_4() { return static_cast<int32_t>(offsetof(BulletMoving_t571409424, ___myRigidbody_4)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody_4() const { return ___myRigidbody_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody_4() { return &___myRigidbody_4; }
	inline void set_myRigidbody_4(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_4, value);
	}

	inline static int32_t get_offset_of_bulletSpeedX_5() { return static_cast<int32_t>(offsetof(BulletMoving_t571409424, ___bulletSpeedX_5)); }
	inline int32_t get_bulletSpeedX_5() const { return ___bulletSpeedX_5; }
	inline int32_t* get_address_of_bulletSpeedX_5() { return &___bulletSpeedX_5; }
	inline void set_bulletSpeedX_5(int32_t value)
	{
		___bulletSpeedX_5 = value;
	}

	inline static int32_t get_offset_of_bulletSpeedY_6() { return static_cast<int32_t>(offsetof(BulletMoving_t571409424, ___bulletSpeedY_6)); }
	inline int32_t get_bulletSpeedY_6() const { return ___bulletSpeedY_6; }
	inline int32_t* get_address_of_bulletSpeedY_6() { return &___bulletSpeedY_6; }
	inline void set_bulletSpeedY_6(int32_t value)
	{
		___bulletSpeedY_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
