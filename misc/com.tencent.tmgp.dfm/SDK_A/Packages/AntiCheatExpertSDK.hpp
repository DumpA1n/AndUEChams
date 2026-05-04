#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AntiCheatExpertSDK
// Enums: 0
// Structs: 0
// Classes: 1

struct UAntiCheatExpertSDKManager;

// Object: Class AntiCheatExpertSDK.AntiCheatExpertSDKManager
// Size: 0x70 (Inherited: 0x30)
struct UAntiCheatExpertSDKManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x40]; // 0x30(0x40)


	// Object: Function AntiCheatExpertSDK.AntiCheatExpertSDKManager.OnGetConnectResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178b73c4
	// Params: [ Num(4) Size(0x1D) ]
	void OnGetConnectResult(uint8_t isSuccess, struct FString ID, int32_t Channel, uint8_t forceAddWaterMark);

	// Object: Function AntiCheatExpertSDK.AntiCheatExpertSDKManager.OnDisconnect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178b73b0
	// Params: [ Num(0) Size(0x0) ]
	void OnDisconnect();

	// Object: Function AntiCheatExpertSDK.AntiCheatExpertSDKManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x178b730c
	// Params: [ Num(2) Size(0x10) ]
	static struct UAntiCheatExpertSDKManager* Get(struct UObject* Context);
	DEFINE_UE_CLASS_HELPERS(UAntiCheatExpertSDKManager, "AntiCheatExpertSDKManager")

};

} // namespace SDK
