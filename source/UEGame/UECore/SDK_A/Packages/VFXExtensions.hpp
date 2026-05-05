#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: VFXExtensions
// Enums: 0
// Structs: 0
// Classes: 3

struct AActor;
struct ALevelSequenceActor;
struct ULevelSequence;
struct UMaterialParameterCollection;
struct UWorld;
struct AFXColorPaletteActor;
struct AFXPortalActor;
struct AFXSequencePlayerActor;

// Object: Class VFXExtensions.FXColorPaletteActor
// Size: 0x3F8 (Inherited: 0x370)
struct AFXColorPaletteActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AFXColorPaletteActor, "FXColorPaletteActor")

	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct FLinearColor FXUnlitGlobalColorMulti; // 0x380(0x10)
	struct TMap<int32_t, struct FLinearColor> FXUnlitTODColorMap; // 0x390(0x50)
	struct UMaterialParameterCollection* FXUnlitColorMPC; // 0x3E0(0x8)
	struct FLinearColor finalColorPreview; // 0x3E8(0x10)

	// Object: Function VFXExtensions.FXColorPaletteActor.UpdateFxUnlitGlobalColor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8d2cfd8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateFxUnlitGlobalColor(int32_t curTODID);
};

// Object: Class VFXExtensions.FXPortalActor
// Size: 0x3C8 (Inherited: 0x378)
struct AFXPortalActor : ATriggerBox
{
	DEFINE_UE_CLASS_HELPERS(AFXPortalActor, "FXPortalActor")

	uint8_t bTravelToNewLevel : 1; // 0x378(0x1), Mask(0x1)
	uint8_t BitPad_0x378_1 : 7; // 0x378(0x1)
	uint8_t Pad_0x379[0x7]; // 0x379(0x7)
	struct TSoftObjectPtr<UWorld> TargetLevel; // 0x380(0x28)
	struct FVector TargetLocation; // 0x3A8(0xC)
	uint8_t bUseTargetRotation : 1; // 0x3B4(0x1), Mask(0x1)
	uint8_t BitPad_0x3B4_1 : 7; // 0x3B4(0x1)
	uint8_t Pad_0x3B5[0x3]; // 0x3B5(0x3)
	struct FRotator TargetRotation; // 0x3B8(0xC)
	uint8_t Pad_0x3C4[0x4]; // 0x3C4(0x4)

	// Object: Function VFXExtensions.FXPortalActor.OnPortalBeginOverlap
	// Flags: [Final|Native|Protected]
	// Offset: 0x8d2d084
	// Params: [ Num(2) Size(0x10) ]
	void OnPortalBeginOverlap(struct AActor* OverlappedActor, struct AActor* OtherActor);
};

// Object: Class VFXExtensions.FXSequencePlayerActor
// Size: 0x428 (Inherited: 0x370)
struct AFXSequencePlayerActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AFXSequencePlayerActor, "FXSequencePlayerActor")

	int32_t curWeatherID; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct ALevelSequenceActor* OutActor; // 0x378(0x8)
	struct TMap<int32_t, struct ALevelSequenceActor*> SequencePlayerMap; // 0x380(0x50)
	struct TMap<int32_t, struct ULevelSequence*> SequenceAssets; // 0x3D0(0x50)
	uint8_t Loop : 1; // 0x420(0x1), Mask(0x1)
	uint8_t BitPad_0x420_1 : 7; // 0x420(0x1)
	uint8_t AutoPlay : 1; // 0x421(0x1), Mask(0x1)
	uint8_t BitPad_0x421_1 : 7; // 0x421(0x1)
	uint8_t Pad_0x422[0x6]; // 0x422(0x6)

	// Object: Function VFXExtensions.FXSequencePlayerActor.PlaySequence
	// Flags: [Final|Native|Public]
	// Offset: 0x8d2d180
	// Params: [ Num(0) Size(0x0) ]
	void PlaySequence();
};

} // namespace SDK
