#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PrefabricatorRuntime
// Enums: 1
// Structs: 4
// Classes: 14

struct AActor;
enum class EComponentMobility : uint8_t;
struct UActorComponent;
struct UThumbnailInfo;
struct FPrefabricatorAssetCollectionItem;
struct FPrefabricatorActorData;
struct FPrefabricatorComponentData;
struct FPrefabricatorPropertyAssetMapping;
struct APrefabActor;
struct AReplicablePrefabActor;
struct UPrefabComponent;
struct APrefabRandomizer;
struct UPrefabricatorProperty;
struct UPrefabricatorEventListener;
struct UPrefabricatorAssetInterface;
struct UPrefabricatorAsset;
struct UPrefabricatorAssetCollection;
struct UPrefabricatorAssetUserData;
struct UPrefabricatorBlueprintLibrary;
struct UPrefabricatorSettings;
struct UPrefabSeedLinkerComponent;
struct APrefabSeedLinker;

// Object: Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
enum class EPrefabricatorPivotPosition : uint8_t
{
	ExtremeLeft = 0,
	ExtremeRight = 1,
	Center = 2,
	EPrefabricatorPivotPosition_MAX = 3
};

// Object: ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
// Size: 0x30 (Inherited: 0x0)
struct FPrefabricatorAssetCollectionItem
{
	struct TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset; // 0x0(0x28)
	float Weight; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
// Size: 0x90 (Inherited: 0x0)
struct FPrefabricatorActorData
{
	struct FGuid PrefabItemID; // 0x0(0x10)
	struct FTransform RelativeTransform; // 0x10(0x30)
	struct FString ClassPath; // 0x40(0x10)
	struct FSoftClassPath ClassPathRef; // 0x50(0x18)
	struct TArray<struct UPrefabricatorProperty*> Properties; // 0x68(0x10)
	struct TArray<struct FPrefabricatorComponentData> Components; // 0x78(0x10)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
// Size: 0x50 (Inherited: 0x0)
struct FPrefabricatorComponentData
{
	struct FTransform RelativeTransform; // 0x0(0x30)
	struct FString ComponentName; // 0x30(0x10)
	struct TArray<struct UPrefabricatorProperty*> Properties; // 0x40(0x10)
};

// Object: ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
// Size: 0x38 (Inherited: 0x0)
struct FPrefabricatorPropertyAssetMapping
{
	struct FSoftObjectPath AssetReference; // 0x0(0x18)
	struct FString AssetClassName; // 0x18(0x10)
	struct FName AssetObjectPath; // 0x28(0x8)
	uint8_t bUseQuotes : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class PrefabricatorRuntime.PrefabActor
// Size: 0x390 (Inherited: 0x370)
struct APrefabActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APrefabActor, "PrefabActor")

	struct UPrefabComponent* PrefabComponent; // 0x370(0x8)
	struct FGuid LastUpdateID; // 0x378(0x10)
	int32_t Seed; // 0x388(0x4)
	uint8_t Pad_0x38C[0x4]; // 0x38C(0x4)

	// Object: Function PrefabricatorRuntime.PrefabActor.SavePrefab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b5aabc
	// Params: [ Num(0) Size(0x0) ]
	void SavePrefab();

	// Object: Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8b5a9c4
	// Params: [ Num(2) Size(0x9) ]
	void RandomizeSeed(const struct FRandomStream& InRandom, uint8_t bRecursive);

	// Object: Function PrefabricatorRuntime.PrefabActor.LoadPrefab
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b5a9b0
	// Params: [ Num(0) Size(0x0) ]
	void LoadPrefab();

	// Object: Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8b5a978
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPrefabOutdated();

	// Object: Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8b5a944
	// Params: [ Num(1) Size(0x8) ]
	struct UPrefabricatorAsset* GetPrefabAsset();

	// Object: Function PrefabricatorRuntime.PrefabActor.GetChildComponentsByComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b5a864
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct UActorComponent*> GetChildComponentsByComponent(struct UActorComponent* ComponentClass);

	// Object: Function PrefabricatorRuntime.PrefabActor.GetChildActorsByComponent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b5a784
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct AActor*> GetChildActorsByComponent(struct UActorComponent* ComponentClass);

	// Object: Function PrefabricatorRuntime.PrefabActor.GetChildActorsByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b5a6a4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct AActor*> GetChildActorsByClass(struct AActor* ActorClass);
};

// Object: Class PrefabricatorRuntime.ReplicablePrefabActor
// Size: 0x390 (Inherited: 0x390)
struct AReplicablePrefabActor : APrefabActor
{
	DEFINE_UE_CLASS_HELPERS(AReplicablePrefabActor, "ReplicablePrefabActor")
};

// Object: Class PrefabricatorRuntime.PrefabComponent
// Size: 0x270 (Inherited: 0x240)
struct UPrefabComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UPrefabComponent, "PrefabComponent")

	struct TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface; // 0x240(0x28)
	uint8_t Pad_0x268[0x8]; // 0x268(0x8)
};

// Object: Class PrefabricatorRuntime.PrefabRandomizer
// Size: 0x3A8 (Inherited: 0x370)
struct APrefabRandomizer : AActor
{
	DEFINE_UE_CLASS_HELPERS(APrefabRandomizer, "PrefabRandomizer")

	uint8_t bRandomizeOnBeginPlay : 1; // 0x370(0x1), Mask(0x1)
	uint8_t BitPad_0x370_1 : 7; // 0x370(0x1)
	uint8_t Pad_0x371[0x3]; // 0x371(0x3)
	int32_t SeedOffset; // 0x374(0x4)
	float MaxBuildTimePerFrame; // 0x378(0x4)
	uint8_t Pad_0x37C[0x4]; // 0x37C(0x4)
	struct FMulticastInlineDelegate OnRandomizationComplete; // 0x380(0x10)
	uint8_t Pad_0x390[0x18]; // 0x390(0x18)

	// Object: Function PrefabricatorRuntime.PrefabRandomizer.Randomize
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8b5abf4
	// Params: [ Num(1) Size(0x4) ]
	void Randomize(int32_t InSeed);
};

// Object: Class PrefabricatorRuntime.PrefabricatorProperty
// Size: 0x58 (Inherited: 0x28)
struct UPrefabricatorProperty : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorProperty, "PrefabricatorProperty")

	struct FString PropertyName; // 0x28(0x10)
	struct FString ExportedValue; // 0x38(0x10)
	struct TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x48(0x10)
};

// Object: Class PrefabricatorRuntime.PrefabricatorEventListener
// Size: 0x28 (Inherited: 0x28)
struct UPrefabricatorEventListener : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorEventListener, "PrefabricatorEventListener")

	// Object: Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x8b5ad34
	// Params: [ Num(1) Size(0x8) ]
	void PostSpawn(struct APrefabActor* Prefab);
};

// Object: Class PrefabricatorRuntime.PrefabricatorAssetInterface
// Size: 0x38 (Inherited: 0x28)
struct UPrefabricatorAssetInterface : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorAssetInterface, "PrefabricatorAssetInterface")

	struct UPrefabricatorEventListener* EventListener; // 0x28(0x8)
	uint8_t bReplicates : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x7]; // 0x31(0x7)
};

// Object: Class PrefabricatorRuntime.PrefabricatorAsset
// Size: 0x70 (Inherited: 0x38)
struct UPrefabricatorAsset : UPrefabricatorAssetInterface
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorAsset, "PrefabricatorAsset")

	struct TArray<struct FPrefabricatorActorData> ActorData; // 0x38(0x10)
	EComponentMobility PrefabMobility; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	struct FGuid LastUpdateID; // 0x4C(0x10)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct UThumbnailInfo* ThumbnailInfo; // 0x60(0x8)
	uint32_t Version; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: Class PrefabricatorRuntime.PrefabricatorAssetCollection
// Size: 0x50 (Inherited: 0x38)
struct UPrefabricatorAssetCollection : UPrefabricatorAssetInterface
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorAssetCollection, "PrefabricatorAssetCollection")

	struct TArray<struct FPrefabricatorAssetCollectionItem> Prefabs; // 0x38(0x10)
	uint32_t Version; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: Class PrefabricatorRuntime.PrefabricatorAssetUserData
// Size: 0x40 (Inherited: 0x28)
struct UPrefabricatorAssetUserData : UAssetUserData
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorAssetUserData, "PrefabricatorAssetUserData")

	struct TWeakObjectPtr<struct APrefabActor> PrefabActor; // 0x28(0x8)
	struct FGuid ItemID; // 0x30(0x10)
};

// Object: Class PrefabricatorRuntime.PrefabricatorBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPrefabricatorBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorBlueprintLibrary, "PrefabricatorBlueprintLibrary")

	// Object: Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8b5b094
	// Params: [ Num(5) Size(0x50) ]
	static struct APrefabActor* SpawnPrefab(struct UObject* WorldContextObject, struct UPrefabricatorAssetInterface* Prefab, const struct FTransform& Transform, int32_t Seed);

	// Object: Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.RandomizePrefab
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8b5afb4
	// Params: [ Num(2) Size(0x10) ]
	static void RandomizePrefab(struct APrefabActor* PrefabActor, const struct FRandomStream& InRandom);

	// Object: Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8b5aecc
	// Params: [ Num(2) Size(0x18) ]
	static void GetAllAttachedActors(struct AActor* Prefab, struct TArray<struct AActor*>& AttachedActors);
};

// Object: Class PrefabricatorRuntime.PrefabricatorSettings
// Size: 0x40 (Inherited: 0x38)
struct UPrefabricatorSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UPrefabricatorSettings, "PrefabricatorSettings")

	EPrefabricatorPivotPosition PivotPosition; // 0x38(0x1)
	uint8_t bAllowDynamicUpdate : 1; // 0x39(0x1), Mask(0x1)
	uint8_t BitPad_0x39_1 : 7; // 0x39(0x1)
	uint8_t bShowAssetThumbnails : 1; // 0x3A(0x1), Mask(0x1)
	uint8_t BitPad_0x3A_1 : 7; // 0x3A(0x1)
	uint8_t Pad_0x3B[0x5]; // 0x3B(0x5)
};

// Object: Class PrefabricatorRuntime.PrefabSeedLinkerComponent
// Size: 0x240 (Inherited: 0x240)
struct UPrefabSeedLinkerComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UPrefabSeedLinkerComponent, "PrefabSeedLinkerComponent")
};

// Object: Class PrefabricatorRuntime.PrefabSeedLinker
// Size: 0x388 (Inherited: 0x370)
struct APrefabSeedLinker : AActor
{
	DEFINE_UE_CLASS_HELPERS(APrefabSeedLinker, "PrefabSeedLinker")

	struct TArray<struct TWeakObjectPtr<struct APrefabActor>> LinkedActors; // 0x370(0x10)
	struct UPrefabSeedLinkerComponent* SeedLinkerComponent; // 0x380(0x8)
};

} // namespace SDK
