#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: DFXunYou
// Enums: 0
// Structs: 0
// Classes: 1

struct UIXunYou;

// Object: Class DFXunYou.IXunYou
// Size: 0xA0 (Inherited: 0x28)
struct UIXunYou : UObject
{
	uint8_t Pad_0x28[0x78]; // 0x28(0x78)


	// Object: Function DFXunYou.IXunYou.XunyouInstall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda774
	// Params: [ Num(3) Size(0x1C) ]
	int32_t XunyouInstall(int32_t ID, struct FString Path);

	// Object: Function DFXunYou.IXunYou.StartXunYou
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda654
	// Params: [ Num(4) Size(0x10) ]
	int32_t StartXunYou(int32_t ID, int32_t GameId, int32_t areId);

	// Object: Function DFXunYou.IXunYou.SetUserToken
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfaf8fd4
	// Params: [ Num(3) Size(0x30) ]
	void SetUserToken(struct FString UserId, struct FString Token, struct FString APPID);

	// Object: Function DFXunYou.IXunYou.SetUdpEchoAddress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfaf8cec
	// Params: [ Num(2) Size(0x14) ]
	void SetUdpEchoAddress(struct FString Ip, int32_t Port);

	// Object: Function DFXunYou.IXunYou.IsXunyouInstalled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda5a4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsXunyouInstalled(int32_t ID);

	// Object: Function DFXunYou.IXunYou.IsUDPProxy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda56c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUDPProxy();

	// Object: Function DFXunYou.IXunYou.IsAccelOpened
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe22788
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAccelOpened();

	// Object: Function DFXunYou.IXunYou.Initialize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfaf762c
	// Params: [ Num(5) Size(0x30) ]
	int32_t Initialize(int32_t HookType, struct FString Guid, struct FString NetLibName, int32_t EchoPort);

	// Object: Function DFXunYou.IXunYou.GetXunYou
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf7dae3c
	// Params: [ Num(1) Size(0x8) ]
	static struct UIXunYou* GetXunYou();

	// Object: Function DFXunYou.IXunYou.GetWebUIUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda48c
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetWebUIUrl(int32_t Type);

	// Object: Function DFXunYou.IXunYou.GetVipValidTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda3f4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetVipValidTime();

	// Object: Function DFXunYou.IXunYou.GetAccelState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda348
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetAccelState(int32_t ID);

	// Object: Function DFXunYou.IXunYou.GetAccelerationStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda314
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAccelerationStatus();

	// Object: Function DFXunYou.IXunYou.GameForeground
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda300
	// Params: [ Num(0) Size(0x0) ]
	void GameForeground();

	// Object: Function DFXunYou.IXunYou.GameBackground
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda2ec
	// Params: [ Num(0) Size(0x0) ]
	void GameBackground();

	// Object: Function DFXunYou.IXunYou.ClearAccelerationAddresses
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bda2d8
	// Params: [ Num(0) Size(0x0) ]
	void ClearAccelerationAddresses();

	// Object: Function DFXunYou.IXunYou.BeginRound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfaf83fc
	// Params: [ Num(2) Size(0x20) ]
	void BeginRound(struct FString OpenId, struct FString PvpId);

	// Object: Function DFXunYou.IXunYou.AddAccelAddress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfaf8770
	// Params: [ Num(3) Size(0x28) ]
	void AddAccelAddress(struct FString Ip, int32_t Port, struct FString Protocol);
	DEFINE_UE_CLASS_HELPERS(UIXunYou, "IXunYou")

};

} // namespace SDK
