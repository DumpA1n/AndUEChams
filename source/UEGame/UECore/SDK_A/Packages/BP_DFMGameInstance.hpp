#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFM.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_DFMGameInstance
// Enums: 0
// Structs: 0
// Classes: 1

enum class ENetworkFailure : uint8_t;
struct UBP_DFMGameInstance_C;

// Object: BlueprintGeneratedClass BP_DFMGameInstance.BP_DFMGameInstance_C
// Size: 0x439 (Inherited: 0x3E0)
struct UBP_DFMGameInstance_C : UDFMGameInstance
{
	DEFINE_UE_CLASS_HELPERS(UBP_DFMGameInstance_C, "BP_DFMGameInstance_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3E0(0x8)
	struct TSet<struct FString> CustomGFWhiteList; // 0x3E8(0x50)
	uint8_t NewGameFlowLifeTime : 1; // 0x438(0x1), Mask(0x1)
	uint8_t BitPad_0x438_1 : 7; // 0x438(0x1)

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.Show Network Error
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x2) ]
	void Show_Network_Error(ENetworkFailure Type, uint8_t IsServer);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.EncodePlayerBasicInfoList
	// Flags: [Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void EncodePlayerBasicInfoList(struct TArray<struct FString>& PlayerIds, struct FString& Buffer);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.Join Local DS Internal
	// Flags: [Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(6) Size(0x4C) ]
	void Join_Local_DS_Internal(struct FString DSAddr, struct FString PlayerId, int32_t ModularWeapon, struct FString Cookie, struct FString MapID, int32_t SpotGroup);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.Start Local DS Internal
	// Flags: [Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(7) Size(0x40) ]
	void Start_Local_DS_Internal(struct FString MapName, int32_t RoomId, int32_t Port, int32_t DSAPort, int32_t InPort, struct FString DSAIP, struct TArray<struct FString>& PlayerIds);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.Show Local DSPanel Internal
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void Show_Local_DSPanel_Internal();

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.OnExecJoinLocalDS
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void OnExecJoinLocalDS(struct FString DSAddr, struct FString PlayerId);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.OnExecShowLocalDSPanel
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnExecShowLocalDSPanel();

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.OnExecStartLocalDS
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void OnExecStartLocalDS(struct FString MapName, const struct TArray<struct FString>& PlayerIds);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.OnStartGameInstance
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStartGameInstance();

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.HandleNetworkError
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x2) ]
	void HandleNetworkError(ENetworkFailure FailureType, uint8_t bIsServer);

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.ReciveFirstWorldBegunPlay
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ReciveFirstWorldBegunPlay();

	// Object: Function BP_DFMGameInstance.BP_DFMGameInstance_C.ExecuteUbergraph_BP_DFMGameInstance
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_DFMGameInstance(int32_t EntryPoint);
};

} // namespace SDK
