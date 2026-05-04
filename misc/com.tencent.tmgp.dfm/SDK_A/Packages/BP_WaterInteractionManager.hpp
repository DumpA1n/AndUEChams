#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_WaterInteractionManager
// Enums: 0
// Structs: 0
// Classes: 1

enum class EDFMWaterInteractionState : uint8_t;
enum class EEndPlayReason : uint8_t;
struct UTextureRenderTarget2D;
struct ABP_WaterInteractionManager_C;

// Object: BlueprintGeneratedClass BP_WaterInteractionManager.BP_WaterInteractionManager_C
// Size: 0x475 (Inherited: 0x430)
struct ABP_WaterInteractionManager_C : ADFMWaterInteractionManager
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x8)
	struct UTextureRenderTarget2D* RTCurrent; // 0x438(0x8)
	struct UTextureRenderTarget2D* RTPrevious; // 0x440(0x8)
	struct UTextureRenderTarget2D* RTPrePrevious; // 0x448(0x8)
	struct UTextureRenderTarget2D* RTCapture; // 0x450(0x8)
	float VehicleTravelSpeed; // 0x458(0x4)
	float DefaultTravelSpeed; // 0x45C(0x4)
	struct FLinearColor DefaultSimParam; // 0x460(0x10)
	float SwimTravelSpeed; // 0x470(0x4)
	uint8_t WaterSystemNotValid : 1; // 0x474(0x1), Mask(0x1)
	uint8_t BitPad_0x474_1 : 7; // 0x474(0x1)


	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.SetRT
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SetRT();

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.UpdateSimParam
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void UpdateSimParam(float TravelSpeed);

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.ClearRT
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ClearRT();

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.ReceiveBeginPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ReceiveBeginPlay();

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ReceiveTick(float DeltaSeconds);

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.OnWaterInteractionStateChanged
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnWaterInteractionStateChanged(EDFMWaterInteractionState NewState);

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.WaterInteractiveRenderTargetChangedEvent
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void WaterInteractiveRenderTargetChangedEvent();

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.ReceiveEndPlay
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);

	// Object: Function BP_WaterInteractionManager.BP_WaterInteractionManager_C.ExecuteUbergraph_BP_WaterInteractionManager
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_WaterInteractionManager(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(ABP_WaterInteractionManager_C, "BP_WaterInteractionManager_C")

};

} // namespace SDK
