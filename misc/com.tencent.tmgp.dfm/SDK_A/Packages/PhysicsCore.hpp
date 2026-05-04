#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: PhysicsCore
// Enums: 3
// Structs: 0
// Classes: 0

// Object: Enum PhysicsCore.EChaosBufferMode
enum class EChaosBufferMode : uint8_t
{
	Double = 0,
	Triple = 1,
	Num = 2,
	Invalid = 3,
	EChaosBufferMode_MAX = 4
};

// Object: Enum PhysicsCore.EChaosThreadingMode
enum class EChaosThreadingMode : uint8_t
{
	DedicatedThread = 0,
	TaskGraph = 1,
	SingleThread = 2,
	Num = 3,
	Invalid = 4,
	EChaosThreadingMode_MAX = 5
};

// Object: Enum PhysicsCore.EChaosSolverTickMode
enum class EChaosSolverTickMode : uint8_t
{
	Fixed = 0,
	Variable = 1,
	VariableCapped = 2,
	VariableCappedWithTarget = 3,
	EChaosSolverTickMode_MAX = 4
};

} // namespace SDK
