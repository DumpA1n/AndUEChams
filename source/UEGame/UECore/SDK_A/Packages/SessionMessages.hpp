#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: SessionMessages
// Enums: 0
// Structs: 5
// Classes: 0

struct FSessionServiceLogUnsubscribe;
struct FSessionServiceLogSubscribe;
struct FSessionServiceLog;
struct FSessionServicePong;
struct FSessionServicePing;

// Object: ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// Size: 0x1 (Inherited: 0x0)
struct FSessionServiceLogUnsubscribe
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SessionMessages.SessionServiceLogSubscribe
// Size: 0x1 (Inherited: 0x0)
struct FSessionServiceLogSubscribe
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct SessionMessages.SessionServiceLog
// Size: 0x38 (Inherited: 0x0)
struct FSessionServiceLog
{
	struct FName Category; // 0x0(0x8)
	struct FString Data; // 0x8(0x10)
	struct FGuid instanceid; // 0x18(0x10)
	double TimeSeconds; // 0x28(0x8)
	uint8_t Verbosity; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: ScriptStruct SessionMessages.SessionServicePong
// Size: 0x90 (Inherited: 0x0)
struct FSessionServicePong
{
	uint8_t Authorized : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString BuildDate; // 0x8(0x10)
	struct FString DeviceName; // 0x18(0x10)
	struct FGuid instanceid; // 0x28(0x10)
	struct FString InstanceName; // 0x38(0x10)
	struct FString PlatformName; // 0x48(0x10)
	struct FGuid SessionId; // 0x58(0x10)
	struct FString SessionName; // 0x68(0x10)
	struct FString SessionOwner; // 0x78(0x10)
	uint8_t Standalone : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: ScriptStruct SessionMessages.SessionServicePing
// Size: 0x10 (Inherited: 0x0)
struct FSessionServicePing
{
	struct FString userName; // 0x0(0x10)
};

} // namespace SDK
