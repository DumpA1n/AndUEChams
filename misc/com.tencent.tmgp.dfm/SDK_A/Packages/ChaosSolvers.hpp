#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: ChaosSolvers
// Enums: 0
// Structs: 3
// Classes: 0

struct FSolverBreakingFilterSettings;
struct FSolverCollisionFilterSettings;
struct FSolverTrailingFilterSettings;

// Object: ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverBreakingFilterSettings
{
	uint8_t FilterEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// Object: ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverCollisionFilterSettings
{
	uint8_t FilterEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
};

// Object: ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// Size: 0x10 (Inherited: 0x0)
struct FSolverTrailingFilterSettings
{
	uint8_t FilterEnabled : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

} // namespace SDK
