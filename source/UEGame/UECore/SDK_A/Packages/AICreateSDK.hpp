#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AICreateSDK
// Enums: 1
// Structs: 2
// Classes: 3

struct FSharePlatformAccount;
struct FShareVideoContent;
struct IAICreateAppInterface;
struct UAICreateSDKBlueprint;
struct UAICreateSDKCallbacks;

// Object: Enum AICreateSDK.EAuthorizeRequest
enum class EAuthorizeRequest : uint8_t
{
	AuthorizeRequestUnused = 0,
	AuthorizeRequestQuery = 1,
	AuthorizeRequestBind = 2,
	AuthorizeRequestUnbind = 3,
	EAuthorizeRequest_MAX = 4
};

// Object: ScriptStruct AICreateSDK.SharePlatformAccount
// Size: 0x20 (Inherited: 0x0)
struct FSharePlatformAccount
{
	struct FString Platform; // 0x0(0x10)
	struct FString AccountId; // 0x10(0x10)
};

// Object: ScriptStruct AICreateSDK.ShareVideoContent
// Size: 0x68 (Inherited: 0x0)
struct FShareVideoContent
{
	struct TArray<struct FString> VideoPaths; // 0x0(0x10)
	int32_t MediaType; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct TMap<struct FString, struct FString> ExtraParams; // 0x18(0x50)
};

// Object: Class AICreateSDK.AICreateAppInterface
// Size: 0x28 (Inherited: 0x28)
struct IAICreateAppInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IAICreateAppInterface, "AICreateAppInterface")
};

// Object: Class AICreateSDK.AICreateSDKBlueprint
// Size: 0x28 (Inherited: 0x28)
struct UAICreateSDKBlueprint : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAICreateSDKBlueprint, "AICreateSDKBlueprint")

	// Object: Function AICreateSDK.AICreateSDKBlueprint.ShareVideo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x505f0ac
	// Params: [ Num(2) Size(0x78) ]
	static void ShareVideo(struct FString Platform, const struct FShareVideoContent& VideoContent);

	// Object: Function AICreateSDK.AICreateSDKBlueprint.SetupWithAppID
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x505f480
	// Params: [ Num(2) Size(0x20) ]
	static void SetupWithAppID(struct FString AppID, const struct TScriptInterface<IAICreateAppInterface>& AppService);

	// Object: Function AICreateSDK.AICreateSDKBlueprint.PublishVideo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x505f1e0
	// Params: [ Num(2) Size(0x78) ]
	static void PublishVideo(const struct TArray<struct FSharePlatformAccount>& PlatformAccounts, const struct FShareVideoContent& VideoContent);

	// Object: Function AICreateSDK.AICreateSDKBlueprint.AuthorizePlatform
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x505f320
	// Params: [ Num(3) Size(0x68) ]
	static void AuthorizePlatform(EAuthorizeRequest Request, struct FString Platform, const struct TMap<struct FString, struct FString>& ExtraParams);

	// Object: Function AICreateSDK.AICreateSDKBlueprint.Alert
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x505efbc
	// Params: [ Num(2) Size(0x20) ]
	static void Alert(struct FString Title, struct FString Message);
};

// Object: Class AICreateSDK.AICreateSDKCallbacks
// Size: 0xE0 (Inherited: 0xE0)
struct UAICreateSDKCallbacks : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UAICreateSDKCallbacks, "AICreateSDKCallbacks")
};

} // namespace SDK
