#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: InputCore
// Enums: 4
// Structs: 1
// Classes: 1

struct FKey;
struct UInputCoreTypes;

// Object: Enum InputCore.ETouchIndex
enum class ETouchIndex : uint8_t
{
	Touch1 = 0,
	Touch2 = 1,
	Touch3 = 2,
	Touch4 = 3,
	Touch5 = 4,
	Touch6 = 5,
	Touch7 = 6,
	Touch8 = 7,
	Touch9 = 8,
	Touch10 = 9,
	CursorPointerIndex = 10,
	MAX_TOUCHES = 11,
	ETouchIndex_MAX = 12
};

// Object: Enum InputCore.ETouchType
enum class ETouchType : uint8_t
{
	Began = 0,
	Moved = 1,
	Stationary = 2,
	ForceChanged = 3,
	FirstMove = 4,
	Ended = 5,
	NumTypes = 6,
	ETouchType_MAX = 7
};

// Object: Enum InputCore.EControllerHand
enum class EControllerHand : uint8_t
{
	Left = 0,
	Right = 1,
	AnyHand = 2,
	Pad = 3,
	ExternalCamera = 4,
	Gun = 5,
	Special_1 = 6,
	Special_2 = 7,
	Special_3 = 8,
	Special_4 = 9,
	Special_5 = 10,
	Special_6 = 11,
	Special_7 = 12,
	Special_8 = 13,
	Special_9 = 14,
	Special_10 = 15,
	Special_11 = 16,
	ControllerHand_Count = 17,
	EControllerHand_MAX = 18
};

// Object: Enum InputCore.EConsoleForGamepadLabels
enum class EConsoleForGamepadLabels : uint8_t
{
	None = 0,
	XBoxOne = 1,
	PS4 = 2,
	EConsoleForGamepadLabels_MAX = 3
};

// Object: ScriptStruct InputCore.Key
// Size: 0x18 (Inherited: 0x0)
struct FKey
{
	struct FName KeyName; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: Class InputCore.InputCoreTypes
// Size: 0x28 (Inherited: 0x28)
struct UInputCoreTypes : UObject
{
	DEFINE_UE_CLASS_HELPERS(UInputCoreTypes, "InputCoreTypes")
};

} // namespace SDK
