﻿#pragma once

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

// Killable
struct  Killable_t3755038168  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 Killable::maxHealth
	int32_t ___maxHealth_2;
	// System.Int32 Killable::currentHealth
	int32_t ___currentHealth_3;

public:
	inline static int32_t get_offset_of_maxHealth_2() { return static_cast<int32_t>(offsetof(Killable_t3755038168, ___maxHealth_2)); }
	inline int32_t get_maxHealth_2() const { return ___maxHealth_2; }
	inline int32_t* get_address_of_maxHealth_2() { return &___maxHealth_2; }
	inline void set_maxHealth_2(int32_t value)
	{
		___maxHealth_2 = value;
	}

	inline static int32_t get_offset_of_currentHealth_3() { return static_cast<int32_t>(offsetof(Killable_t3755038168, ___currentHealth_3)); }
	inline int32_t get_currentHealth_3() const { return ___currentHealth_3; }
	inline int32_t* get_address_of_currentHealth_3() { return &___currentHealth_3; }
	inline void set_currentHealth_3(int32_t value)
	{
		___currentHealth_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
