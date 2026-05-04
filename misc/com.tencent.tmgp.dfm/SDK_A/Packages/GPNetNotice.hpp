#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPNetNotice
// Enums: 1
// Structs: 0
// Classes: 2

struct IGPNetNoticeInterface;
struct UGPNetNoticeWorld;

// Object: Enum GPNetNotice.EGPNetNoticeType
enum class EGPNetNoticeType : uint8_t
{
	Auto = 0,
	EGPNetNoticeType_MAX = 1
};

// Object: Class GPNetNotice.GPNetNoticeInterface
// Size: 0x28 (Inherited: 0x28)
struct IGPNetNoticeInterface : IInterface
{	DEFINE_UE_CLASS_HELPERS(IGPNetNoticeInterface, "GPNetNoticeInterface")

};

// Object: Class GPNetNotice.GPNetNoticeWorld
// Size: 0x88 (Inherited: 0x30)
struct UGPNetNoticeWorld : UWorldSubsystem
{
	uint8_t Pad_0x30[0x58]; // 0x30(0x58)
	DEFINE_UE_CLASS_HELPERS(UGPNetNoticeWorld, "GPNetNoticeWorld")

};

} // namespace SDK
