#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OpenWorldStreaming.hpp"

namespace SDK
{

// Package: OpenWorldPrecomputedVisibility
// Enums: 2
// Structs: 0
// Classes: 8

struct UPrimitiveComponent;
struct IOpenWorldPrecomputedForm;
struct UOpenWorldPrecomputedFormStatics;
struct UMutableFormMeshComponent;
struct UOpenWorldPrecomputedVisibilityBlockAsset;
struct UOpenWorldLevelPrecomputedVisibilityBlockAsset;
struct APrecomputedVisibilityAssetsStreamer;
struct ALevelPrecomputedVisibilityAssetsStreamer;
struct UOpenWorldPrecomputedVisibilitySubsystem;

// Object: Enum OpenWorldPrecomputedVisibility.EOpenWorldPrecomputedFormType
enum class EOpenWorldPrecomputedFormType : uint8_t
{
	None = 0,
	StaticBreakable = 1,
	LimitedBounds = 2,
	Transformable = 3,
	NUM = 4,
	EOpenWorldPrecomputedFormType_MAX = 5
};

// Object: Enum OpenWorldPrecomputedVisibility.ELevelPVSQueryType
enum class ELevelPVSQueryType : uint8_t
{
	InvisibleUnloaded = 0,
	AllInvisible = 1,
	AllUnloaded = 2,
	ELevelPVSQueryType_MAX = 3
};

// Object: Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm
// Size: 0x28 (Inherited: 0x28)
struct IOpenWorldPrecomputedForm : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IOpenWorldPrecomputedForm, "OpenWorldPrecomputedForm")

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm.GetFormType
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x7d2df6c
	// Params: [ Num(1) Size(0x1) ]
	EOpenWorldPrecomputedFormType GetFormType();

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm.GetFormIndex
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x7d2df30
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFormIndex();

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm.GetBoundsScaleIncrement
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x7d2def0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBoundsScaleIncrement();

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedForm.GetBoundsOriginOffset
	// Flags: [Native|Event|Public|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x7d2deb0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetBoundsOriginOffset();
};

// Object: Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics
// Size: 0x28 (Inherited: 0x28)
struct UOpenWorldPrecomputedFormStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldPrecomputedFormStatics, "OpenWorldPrecomputedFormStatics")

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.SetFormVisibilityIds
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7d2e5f4
	// Params: [ Num(2) Size(0x18) ]
	static void SetFormVisibilityIds(struct UObject* MutableForm, const struct TArray<int32_t>& VisibilityIds);

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.PreChangeForm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7d2e560
	// Params: [ Num(1) Size(0x8) ]
	static void PreChangeForm(struct UObject* MutableForm);

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.PostChangeForm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7d2e4cc
	// Params: [ Num(1) Size(0x8) ]
	static void PostChangeForm(struct UObject* MutableForm);

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.IsPrecomputedFormLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7d2e41c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsPrecomputedFormLevel(struct FString LevelPackageName);

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.IsPrecomputedForm
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7d2e374
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPrecomputedForm(struct UObject* Objcet);

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.GetFormVisibilityIds
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7d2e29c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<int32_t> GetFormVisibilityIds(struct UObject* MutableForm);

	// Object: Function OpenWorldPrecomputedVisibility.OpenWorldPrecomputedFormStatics.GetFormComponents
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7d2e1c4
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct UPrimitiveComponent*> GetFormComponents(struct UObject* Form);
};

// Object: Class OpenWorldPrecomputedVisibility.MutableFormMeshComponent
// Size: 0x840 (Inherited: 0x830)
struct UMutableFormMeshComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMutableFormMeshComponent, "MutableFormMeshComponent")

	uint8_t Pad_0x830[0x10]; // 0x830(0x10)

	// Object: Function OpenWorldPrecomputedVisibility.MutableFormMeshComponent.NextForm
	// Flags: [Final|Native|Private]
	// Offset: 0x7d2e6fc
	// Params: [ Num(0) Size(0x0) ]
	void NextForm();
};

// Object: Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedVisibilityBlockAsset
// Size: 0xB8 (Inherited: 0x28)
struct UOpenWorldPrecomputedVisibilityBlockAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldPrecomputedVisibilityBlockAsset, "OpenWorldPrecomputedVisibilityBlockAsset")

	uint8_t Pad_0x28[0x90]; // 0x28(0x90)
};

// Object: Class OpenWorldPrecomputedVisibility.OpenWorldLevelPrecomputedVisibilityBlockAsset
// Size: 0xB8 (Inherited: 0x28)
struct UOpenWorldLevelPrecomputedVisibilityBlockAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldLevelPrecomputedVisibilityBlockAsset, "OpenWorldLevelPrecomputedVisibilityBlockAsset")

	uint8_t Pad_0x28[0x90]; // 0x28(0x90)
};

// Object: Class OpenWorldPrecomputedVisibility.PrecomputedVisibilityAssetsStreamer
// Size: 0x7E0 (Inherited: 0x7B0)
struct APrecomputedVisibilityAssetsStreamer : AAssetsStreamer
{
	DEFINE_UE_CLASS_HELPERS(APrecomputedVisibilityAssetsStreamer, "PrecomputedVisibilityAssetsStreamer")

	struct FSoftObjectPath DownsampledForm; // 0x7A8(0x18)
	struct TArray<struct UOpenWorldPrecomputedVisibilityBlockAsset*> VisibilityBlockAssets; // 0x7C0(0x10)
	uint8_t Pad_0x7D8[0x8]; // 0x7D8(0x8)
};

// Object: Class OpenWorldPrecomputedVisibility.LevelPrecomputedVisibilityAssetsStreamer
// Size: 0x9B0 (Inherited: 0x7B0)
struct ALevelPrecomputedVisibilityAssetsStreamer : AAssetsStreamer
{
	DEFINE_UE_CLASS_HELPERS(ALevelPrecomputedVisibilityAssetsStreamer, "LevelPrecomputedVisibilityAssetsStreamer")

	uint8_t Pad_0x7B0[0x200]; // 0x7B0(0x200)

	// Object: Function OpenWorldPrecomputedVisibility.LevelPrecomputedVisibilityAssetsStreamer.OnLevelLoadingPercentage
	// Flags: [Final|Native|Public]
	// Offset: 0xe7a5b84
	// Params: [ Num(1) Size(0x4) ]
	void OnLevelLoadingPercentage(int32_t Percentage);
};

// Object: Class OpenWorldPrecomputedVisibility.OpenWorldPrecomputedVisibilitySubsystem
// Size: 0x3E0 (Inherited: 0x30)
struct UOpenWorldPrecomputedVisibilitySubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldPrecomputedVisibilitySubsystem, "OpenWorldPrecomputedVisibilitySubsystem")

	uint8_t Pad_0x30[0x3B0]; // 0x30(0x3B0)
};

} // namespace SDK
