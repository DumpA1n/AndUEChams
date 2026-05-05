#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPGameHud.hpp"
#include "GPGameplay.hpp"

namespace SDK
{

// Package: DFM
// Enums: 0
// Structs: 1
// Classes: 4

struct UDFMCharacterAmbientAudioFSM;
struct UTextBlock;
struct FSlatePreDepthMeshTriangle;
struct UDFMGameInstance;
struct UPOIHUDView;
struct ASlatePreDepthActor;
struct USlatePreDepthMeshComponent;

// Object: ScriptStruct DFM.SlatePreDepthMeshTriangle
// Size: 0x24 (Inherited: 0x0)
struct FSlatePreDepthMeshTriangle
{
	struct FVector Vertex0; // 0x0(0xC)
	struct FVector Vertex1; // 0xC(0xC)
	struct FVector Vertex2; // 0x18(0xC)
};

// Object: Class DFM.DFMGameInstance
// Size: 0x3E0 (Inherited: 0x3D8)
struct UDFMGameInstance : UGPGameInstance
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameInstance, "DFMGameInstance")

	uint8_t bRenameToPIEWorldInLocalDS : 1; // 0x3D8(0x1), Mask(0x1)
	uint8_t BitPad_0x3D8_1 : 7; // 0x3D8(0x1)
	uint8_t Pad_0x3D9[0x7]; // 0x3D9(0x7)

	// Object: Function DFM.DFMGameInstance.StartLocalDS
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a844
	// Params: [ Num(2) Size(0x20) ]
	void StartLocalDS(struct FString MapName, struct FString PlayerIds);

	// Object: Function DFM.DFMGameInstance.ShowLocalHostAddr
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a830
	// Params: [ Num(0) Size(0x0) ]
	void ShowLocalHostAddr();

	// Object: Function DFM.DFMGameInstance.ShowLocalDSPanel
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a81c
	// Params: [ Num(0) Size(0x0) ]
	void ShowLocalDSPanel();

	// Object: Function DFM.DFMGameInstance.ShowLocalDSAddr
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a808
	// Params: [ Num(0) Size(0x0) ]
	void ShowLocalDSAddr();

	// Object: Function DFM.DFMGameInstance.SetCurrentAudioCulture
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a75c
	// Params: [ Num(1) Size(0x10) ]
	void SetCurrentAudioCulture(struct FString AudioCulture);

	// Object: Function DFM.DFMGameInstance.RTS
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a748
	// Params: [ Num(0) Size(0x0) ]
	void RTS();

	// Object: Function DFM.DFMGameInstance.ReciveFirstWorldBegunPlay
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ReciveFirstWorldBegunPlay();

	// Object: Function DFM.DFMGameInstance.OnStartGameInstance
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnStartGameInstance();

	// Object: Function DFM.DFMGameInstance.OnExecStartLocalDS
	// Flags: [Event|Protected|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void OnExecStartLocalDS(struct FString MapName, const struct TArray<struct FString>& PlayerIds);

	// Object: Function DFM.DFMGameInstance.OnExecShowLocalDSPanel
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnExecShowLocalDSPanel();

	// Object: Function DFM.DFMGameInstance.OnExecJoinLocalDS
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x20) ]
	void OnExecJoinLocalDS(struct FString DSAddr, struct FString PlayerId);

	// Object: Function DFM.DFMGameInstance.LuaRuntimeDebug
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a6a4
	// Params: [ Num(1) Size(0x4) ]
	void LuaRuntimeDebug(int32_t bShow);

	// Object: Function DFM.DFMGameInstance.JoinLocalDS
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a524
	// Params: [ Num(2) Size(0x20) ]
	void JoinLocalDS(struct FString DSAddr, struct FString PlayerId);

	// Object: Function DFM.DFMGameInstance.EnableLuaPerformanceMode
	// Flags: [Final|Exec|Native|Public|Const]
	// Offset: 0x10aa47e8
	// Params: [ Num(1) Size(0x1) ]
	void EnableLuaPerformanceMode(uint8_t bEnabled);

	// Object: Function DFM.DFMGameInstance.CollectPGO
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x8f0a510
	// Params: [ Num(0) Size(0x0) ]
	void CollectPGO();
};

// Object: Class DFM.POIHUDView
// Size: 0x420 (Inherited: 0x3F0)
struct UPOIHUDView : UBaseUIView
{
	DEFINE_UE_CLASS_HELPERS(UPOIHUDView, "POIHUDView")

	struct UDFMCharacterAmbientAudioFSM* OwnerFSM; // 0x3F0(0x8)
	struct UTextBlock* FirstTextBlock; // 0x3F8(0x8)
	struct UTextBlock* SecondTextBlock; // 0x400(0x8)
	struct FName POIHUDPanelName; // 0x408(0x8)
	struct FTimerHandle HideTimerHandle; // 0x410(0x8)
	float DelayHideDuration; // 0x418(0x4)
	uint8_t Pad_0x41C[0x4]; // 0x41C(0x4)

	// Object: Function DFM.POIHUDView.SetHudAndAutoHide
	// Flags: [Final|Native|Public]
	// Offset: 0x8f0af40
	// Params: [ Num(2) Size(0x20) ]
	void SetHudAndAutoHide(struct FString TextFirst, struct FString TextSecond);
};

// Object: Class DFM.SlatePreDepthActor
// Size: 0x378 (Inherited: 0x370)
struct ASlatePreDepthActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASlatePreDepthActor, "SlatePreDepthActor")

	struct USlatePreDepthMeshComponent* SlatePreDepthComponent; // 0x370(0x8)
};

// Object: Class DFM.SlatePreDepthMeshComponent
// Size: 0x700 (Inherited: 0x6F0)
struct USlatePreDepthMeshComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(USlatePreDepthMeshComponent, "SlatePreDepthMeshComponent")

	uint8_t Pad_0x6F0[0x10]; // 0x6F0(0x10)

	// Object: Function DFM.SlatePreDepthMeshComponent.SetMeshTriangles
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x8f0c12c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetMeshTriangles(const struct TArray<struct FSlatePreDepthMeshTriangle>& Triangles);

	// Object: Function DFM.SlatePreDepthMeshComponent.ClearMeshTriangles
	// Flags: [Final|Native|Public]
	// Offset: 0x8f0c118
	// Params: [ Num(0) Size(0x0) ]
	void ClearMeshTriangles();
};

} // namespace SDK
