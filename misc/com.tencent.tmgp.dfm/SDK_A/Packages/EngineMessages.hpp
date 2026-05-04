#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: EngineMessages
// Enums: 0
// Structs: 7
// Classes: 0

struct FEngineServiceNotification;
struct FEngineServiceTerminate;
struct FEngineServiceExecuteCommand;
struct FEngineServiceAuthGrant;
struct FEngineServiceAuthDeny;
struct FEngineServicePong;
struct FEngineServicePing;

// Object: ScriptStruct EngineMessages.EngineServiceNotification
// Size: 0x18 (Inherited: 0x0)
struct FEngineServiceNotification
{
	struct FString Text; // 0x0(0x10)
	double TimeSeconds; // 0x10(0x8)
};

// Object: ScriptStruct EngineMessages.EngineServiceTerminate
// Size: 0x10 (Inherited: 0x0)
struct FEngineServiceTerminate
{
	struct FString userName; // 0x0(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServiceExecuteCommand
// Size: 0x20 (Inherited: 0x0)
struct FEngineServiceExecuteCommand
{
	struct FString Command; // 0x0(0x10)
	struct FString userName; // 0x10(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServiceAuthGrant
// Size: 0x20 (Inherited: 0x0)
struct FEngineServiceAuthGrant
{
	struct FString userName; // 0x0(0x10)
	struct FString UserToGrant; // 0x10(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServiceAuthDeny
// Size: 0x20 (Inherited: 0x0)
struct FEngineServiceAuthDeny
{
	struct FString userName; // 0x0(0x10)
	struct FString UserToDeny; // 0x10(0x10)
};

// Object: ScriptStruct EngineMessages.EngineServicePong
// Size: 0x50 (Inherited: 0x0)
struct FEngineServicePong
{
	struct FString CurrentLevel; // 0x0(0x10)
	int32_t EngineVersion; // 0x10(0x4)
	uint8_t HasBegunPlay : 1; // 0x14(0x1), Mask(0x1)
	uint8_t BitPad_0x14_1 : 7; // 0x14(0x1)
	uint8_t Pad_0x15[0x3]; // 0x15(0x3)
	struct FGuid instanceid; // 0x18(0x10)
	struct FString InstanceType; // 0x28(0x10)
	struct FGuid SessionId; // 0x38(0x10)
	float WorldTimeSeconds; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct EngineMessages.EngineServicePing
// Size: 0x1 (Inherited: 0x0)
struct FEngineServicePing
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

} // namespace SDK
