#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGlobalDefines.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: CaptureStudio
// Enums: 0
// Structs: 1
// Classes: 3

struct AActor;
struct AHallCharacter;
struct ULightComponent;
struct UMaterialParameterCollection;
struct USceneCaptureComponent2D;
struct USceneComponent;
struct UTextureRenderTarget2D;
struct FCaptureTarget;
struct ACaptureEnv;
struct ACaptureLight;
struct UCaptureStudioManager;

// Object: ScriptStruct CaptureStudio.CaptureTarget
// Size: 0x10 (Inherited: 0x0)
struct FCaptureTarget
{
	struct AHallCharacter* CHARACTER; // 0x0(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x8(0x8)
};

// Object: Class CaptureStudio.CaptureEnv
// Size: 0xD90 (Inherited: 0x370)
struct ACaptureEnv : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACaptureEnv, "CaptureEnv")

	struct AHallCharacter* CharacterClass; // 0x370(0x8)
	struct AActor* BPLightEnvClass; // 0x378(0x8)
	uint32_t RenderTargetSizeX; // 0x380(0x4)
	uint32_t RenderTargetSizeY; // 0x384(0x4)
	uint8_t bDisableWorldRender : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t bCaptureOnEndFrame : 1; // 0x389(0x1), Mask(0x1)
	uint8_t BitPad_0x389_1 : 7; // 0x389(0x1)
	uint8_t Pad_0x38A[0x6]; // 0x38A(0x6)
	struct AActor* ALightEnv; // 0x390(0x8)
	struct USceneCaptureComponent2D* Capture2DCom; // 0x398(0x8)
	uint8_t Pad_0x3A0[0x10]; // 0x3A0(0x10)
	struct FCharacterMaterialParameterCollectionName CharacterMaterialParameterCollectionName; // 0x3B0(0x48)
	struct UMaterialParameterCollection* CharacterMaterialParameterCollection; // 0x3F8(0x8)
	struct USceneComponent* RootPoint; // 0x400(0x8)
	struct FCaptureTarget CaptureTarget; // 0x408(0x10)
	uint8_t Pad_0x418[0x8]; // 0x418(0x8)
	struct FPostProcessSettings DefaultPostProcessSettings; // 0x420(0x930)
	struct TArray<struct ULightComponent*> AllLight; // 0xD50(0x10)
	uint8_t Pad_0xD60[0x30]; // 0xD60(0x30)

	// Object: Function CaptureStudio.CaptureEnv.WeaponLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x152a86f0
	// Params: [ Num(0) Size(0x0) ]
	void WeaponLoadComplete();

	// Object: Function CaptureStudio.CaptureEnv.UpdateCapture
	// Flags: [Final|Native|Public]
	// Offset: 0x152a86dc
	// Params: [ Num(0) Size(0x0) ]
	void UpdateCapture();

	// Object: Function CaptureStudio.CaptureEnv.StopCapture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a86c8
	// Params: [ Num(0) Size(0x0) ]
	void StopCapture();

	// Object: Function CaptureStudio.CaptureEnv.SpawnCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a8694
	// Params: [ Num(1) Size(0x8) ]
	struct AHallCharacter* SpawnCharacter();

	// Object: Function CaptureStudio.CaptureEnv.ShowSkylight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a85e8
	// Params: [ Num(1) Size(0x1) ]
	void ShowSkylight(uint8_t bShow);

	// Object: Function CaptureStudio.CaptureEnv.SetCharartorRefreshLighParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a8508
	// Params: [ Num(2) Size(0x8) ]
	void SetCharartorRefreshLighParam(int32_t DataIndex, float Value);

	// Object: Function CaptureStudio.CaptureEnv.ResizeTarget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a842c
	// Params: [ Num(2) Size(0x8) ]
	void ResizeTarget(int32_t SizeX, int32_t SizeY);

	// Object: Function CaptureStudio.CaptureEnv.GetRootPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a83f8
	// Params: [ Num(1) Size(0x8) ]
	struct USceneComponent* GetRootPoint();

	// Object: Function CaptureStudio.CaptureEnv.GetCharartorRefreshLighParam
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a834c
	// Params: [ Num(2) Size(0x8) ]
	float GetCharartorRefreshLighParam(int32_t DataIndex);

	// Object: Function CaptureStudio.CaptureEnv.GetCharacterMaterialParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a82a0
	// Params: [ Num(2) Size(0x8) ]
	float GetCharacterMaterialParameter(int32_t DataIndex);

	// Object: Function CaptureStudio.CaptureEnv.GetCharacter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a826c
	// Params: [ Num(1) Size(0x8) ]
	struct AHallCharacter* GetCharacter();

	// Object: Function CaptureStudio.CaptureEnv.GetCaptureRT
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a8238
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* GetCaptureRT();

	// Object: Function CaptureStudio.CaptureEnv.Clear
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a8224
	// Params: [ Num(0) Size(0x0) ]
	void Clear();

	// Object: Function CaptureStudio.CaptureEnv.CheckShouldResizeTarget
	// Flags: [Final|Native|Protected]
	// Offset: 0x152a8210
	// Params: [ Num(0) Size(0x0) ]
	void CheckShouldResizeTarget();

	// Object: Function CaptureStudio.CaptureEnv.CharacterSetup
	// Flags: [Final|Native|Protected]
	// Offset: 0x152a81fc
	// Params: [ Num(0) Size(0x0) ]
	void CharacterSetup();

	// Object: Function CaptureStudio.CaptureEnv.CaptureInEditor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a81c8
	// Params: [ Num(1) Size(0x8) ]
	struct UTextureRenderTarget2D* CaptureInEditor();

	// Object: Function CaptureStudio.CaptureEnv.Capture
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a8114
	// Params: [ Num(2) Size(0x10) ]
	struct UTextureRenderTarget2D* Capture(uint8_t bCaptureEveryFrame);
};

// Object: Class CaptureStudio.CaptureLight
// Size: 0x370 (Inherited: 0x370)
struct ACaptureLight : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACaptureLight, "CaptureLight")
};

// Object: Class CaptureStudio.CaptureStudioManager
// Size: 0x58 (Inherited: 0x30)
struct UCaptureStudioManager : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UCaptureStudioManager, "CaptureStudioManager")

	struct FMulticastInlineDelegate OnCaptureEnvLoaded; // 0x30(0x10)
	struct ACaptureEnv* CaptureEnv; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)

	// Object: Function CaptureStudio.CaptureStudioManager.LoadCaptureEnv
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a92cc
	// Params: [ Num(1) Size(0x10) ]
	void LoadCaptureEnv(struct FString CaptureEnvPath);

	// Object: Function CaptureStudio.CaptureStudioManager.GetCaptureEnv
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x152a9298
	// Params: [ Num(1) Size(0x8) ]
	struct ACaptureEnv* GetCaptureEnv();

	// Object: Function CaptureStudio.CaptureStudioManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x152a91f4
	// Params: [ Num(2) Size(0x10) ]
	static struct UCaptureStudioManager* Get(struct UObject* WorldContext);
};

} // namespace SDK
