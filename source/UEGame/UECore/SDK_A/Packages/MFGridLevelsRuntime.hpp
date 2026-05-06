#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"
#include "ProceduralMeshComponent.hpp"

namespace SDK
{

// Package: MFGridLevelsRuntime
// Enums: 3
// Structs: 10
// Classes: 13

struct AActor;
struct ALODActor;
struct ALandscapeMeshProxyActor;
struct AMFVoxelEnvAreaClusterActor;
struct AVolume;
struct FHitResult;
struct FProcMeshTangent;
struct UBoxComponent;
struct UDataTable;
struct ULandscapeComponent;
struct ULevel;
struct ULevelStreaming;
struct UMaterialInterface;
struct UMaterialParameterCollection;
struct UPrimitiveComponent;
struct UStaticMeshComponent;
struct FMFFoliageBillboardInstanceInfo;
struct FMFStaticMeshComponentGroupForCombine;
struct FMFStaticMeshComponentForCombine;
struct FMFLoadDistModifier;
struct FMFLoadLevelByVisModifier;
struct FMFLoadDistActorModifiers;
struct FMFLoadDistActorModifiersTableRow;
struct FMFLoadDistStrategyTableRow;
struct FPlayerVolume2DistanceScale;
struct FVolumeLoadDistance;
struct ALODViewDistanceVolume;
struct UMFFoliageBillboardMeshComponent;
struct AMFFoliageBillboardProxy;
struct UMFGeneralDynamicCombineMeshComponent;
struct AMFGeneralDynamicCombineProxy;
struct UMFModifyLoadDistanceSettings;
struct IMFModifyLoadDistActorInterface;
struct AMFModifyLoadDistanceActor;
struct UMFWaterComponent;
struct UMFWorldComposition;
struct AMFWorldCompositionActor;
struct UMFWorldCompositionStatics;
struct AWorldCompositionLevelLoadActor;

// Object: Enum MFGridLevelsRuntime.EMFModifyLoadDistActorType
enum class EMFModifyLoadDistActorType : uint8_t
{
	None = 0,
	Character1P_ViewTarget = 1,
	Character1P_NotViewTarget = 2,
	DynamicInv = 3,
	StaticInv = 4,
	EMFModifyLoadDistActorType_MAX = 5
};

// Object: Enum MFGridLevelsRuntime.EMFLoadLevelState
enum class EMFLoadLevelState : uint8_t
{
	None = 0,
	Common = 1,
	LoadForGameStart = 2,
	LoadForChangeViewTarget = 3,
	EMFLoadLevelState_MAX = 4
};

// Object: Enum MFGridLevelsRuntime.EMFLevelLoadType
enum class EMFLevelLoadType : uint8_t
{
	EMFLevelLoadType_NONE = 0,
	EMFLevelLoadType_CoverDistance = 1,
	EMFLevelLoadType_AdapterInDistance = 2,
	EMFLevelLoadType_MAX = 3
};

// Object: ScriptStruct MFGridLevelsRuntime.MFFoliageBillboardInstanceInfo
// Size: 0x8 (Inherited: 0x0)
struct FMFFoliageBillboardInstanceInfo
{
	int32_t SectionIndex; // 0x0(0x4)
	uint8_t bVisibile : 1; // 0x4(0x1), Mask(0x1)
	uint8_t BitPad_0x4_1 : 7; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFStaticMeshComponentGroupForCombine
// Size: 0x10 (Inherited: 0x0)
struct FMFStaticMeshComponentGroupForCombine
{
	struct TArray<struct FMFStaticMeshComponentForCombine> StaticMeshComponents; // 0x0(0x10)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFStaticMeshComponentForCombine
// Size: 0x30 (Inherited: 0x0)
struct FMFStaticMeshComponentForCombine
{
	struct UStaticMeshComponent* Component; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
	uint32_t HashCode; // 0x10(0x4)
	uint8_t Pad_0x14[0x1C]; // 0x14(0x1C)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFLoadDistModifier
// Size: 0x8 (Inherited: 0x0)
struct FMFLoadDistModifier
{
	float DistanceScale; // 0x0(0x4)
	float MinLoadDistance; // 0x4(0x4)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFLoadLevelByVisModifier
// Size: 0x8 (Inherited: 0x0)
struct FMFLoadLevelByVisModifier
{
	float MaxLoadDistance; // 0x0(0x4)
	bool bConsiderAdjacentArea; // 0x4(0x1)
	uint8_t Pad_0x5[0x3]; // 0x5(0x3)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFLoadDistActorModifiers
// Size: 0xA8 (Inherited: 0x0)
struct FMFLoadDistActorModifiers
{
	bool bEnablePersistantViewTarget; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TMap<EMFModifyLoadDistActorType, struct FMFLoadDistModifier> ActorType2LoadDistModifier; // 0x8(0x50)
	struct TMap<EMFModifyLoadDistActorType, struct FMFLoadLevelByVisModifier> ActorType2LoadLevelByVisModifier; // 0x58(0x50)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFLoadDistActorModifiersTableRow
// Size: 0xC8 (Inherited: 0x8)
struct FMFLoadDistActorModifiersTableRow : FTableRowBase
{
	int32_t ModifiersIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString Description; // 0x10(0x10)
	struct FMFLoadDistActorModifiers Modifiers; // 0x20(0xA8)
};

// Object: ScriptStruct MFGridLevelsRuntime.MFLoadDistStrategyTableRow
// Size: 0xD8 (Inherited: 0x8)
struct FMFLoadDistStrategyTableRow : FTableRowBase
{
	int32_t StrategyIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString PlayModeIDRegex; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct TMap<EMFLoadLevelState, int32_t> LoadState2ModifiersIndex; // 0x30(0x50)
	struct TSet<EMFLoadLevelState> StatesNeedUnloadBeforeLoad; // 0x80(0x50)
	int32_t ModifierIndexForUnload; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x4]; // 0xD4(0x4)
};

// Object: ScriptStruct MFGridLevelsRuntime.PlayerVolume2DistanceScale
// Size: 0x50 (Inherited: 0x0)
struct FPlayerVolume2DistanceScale
{
	struct TMap<struct AVolume*, float> PlayerVolume2Scale; // 0x0(0x50)
};

// Object: ScriptStruct MFGridLevelsRuntime.VolumeLoadDistance
// Size: 0x58 (Inherited: 0x0)
struct FVolumeLoadDistance
{
	struct TSoftObjectPtr<AVolume> PlayerVolume; // 0x0(0x28)
	struct TSoftObjectPtr<AVolume> LevelVolume; // 0x28(0x28)
	float DistanceScale; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: Class MFGridLevelsRuntime.LODViewDistanceVolume
// Size: 0x380 (Inherited: 0x348)
struct ALODViewDistanceVolume : APhysicsVolume
{
	DEFINE_UE_CLASS_HELPERS(ALODViewDistanceVolume, "LODViewDistanceVolume")

	uint8_t Pad_0x348[0x10]; // 0x348(0x10)
	struct TArray<struct AActor*> SubActors; // 0x358(0x10)
	struct TArray<struct FString> LevelPathNames; // 0x368(0x10)
	float DrawDistanceMultiply; // 0x378(0x4)
	float DrawDistanceAdd; // 0x37C(0x4)

	// Object: Function MFGridLevelsRuntime.LODViewDistanceVolume.ActorEndOverlap
	// Flags: [Native|Public]
	// Offset: 0x33cd1f8
	// Params: [ Num(4) Size(0x1C) ]
	void ActorEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);

	// Object: Function MFGridLevelsRuntime.LODViewDistanceVolume.ActorBeginOverlap
	// Flags: [Native|Public|HasOutParms]
	// Offset: 0x33cd364
	// Params: [ Num(6) Size(0xB8) ]
	void ActorBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
};

// Object: Class MFGridLevelsRuntime.MFFoliageBillboardMeshComponent
// Size: 0x730 (Inherited: 0x730)
struct UMFFoliageBillboardMeshComponent : UProceduralMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFFoliageBillboardMeshComponent, "MFFoliageBillboardMeshComponent")
};

// Object: Class MFGridLevelsRuntime.MFFoliageBillboardProxy
// Size: 0x448 (Inherited: 0x300)
struct AMFFoliageBillboardProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFFoliageBillboardProxy, "MFFoliageBillboardProxy")

	uint8_t Pad_0x300[0x18]; // 0x300(0x18)
	struct UMaterialInterface* MaterialInterface; // 0x318(0x8)
	struct TMap<struct FString, struct FSoftObjectPath> SpecificClimateMaterialInterfaces; // 0x320(0x50)
	struct TMap<struct FString, struct FMFFoliageBillboardInstanceInfo> LevelPathToFoliageBillboard; // 0x370(0x50)
	struct TMap<struct FString, struct ULevel*> LevelPathToLevel; // 0x3C0(0x50)
	int32_t TotalProcMeshSectionNums; // 0x410(0x4)
	uint8_t Pad_0x414[0x4]; // 0x414(0x4)
	struct UMFFoliageBillboardMeshComponent* FoliageBillboardComponent; // 0x418(0x8)
	uint8_t Pad_0x420[0x28]; // 0x420(0x28)
};

// Object: Class MFGridLevelsRuntime.MFGeneralDynamicCombineMeshComponent
// Size: 0x730 (Inherited: 0x730)
struct UMFGeneralDynamicCombineMeshComponent : UProceduralMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFGeneralDynamicCombineMeshComponent, "MFGeneralDynamicCombineMeshComponent")
};

// Object: Class MFGridLevelsRuntime.MFGeneralDynamicCombineProxy
// Size: 0x458 (Inherited: 0x300)
struct AMFGeneralDynamicCombineProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFGeneralDynamicCombineProxy, "MFGeneralDynamicCombineProxy")

	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct TArray<struct UMaterialInterface*> MaterialInterfaces; // 0x310(0x10)
	int32_t MaxVertexNumsPerMesh; // 0x320(0x4)
	int32_t DistanceToUseMaxLOD; // 0x324(0x4)
	int32_t DistanceToHideMesh; // 0x328(0x4)
	uint8_t Pad_0x32C[0x4]; // 0x32C(0x4)
	struct TMap<struct ULevel*, struct FMFStaticMeshComponentGroupForCombine> AddStaticMeshComponentGroups; // 0x330(0x50)
	struct TMap<struct UMaterialInterface*, int32_t> AddedMaterials; // 0x380(0x50)
	struct TArray<struct UMFGeneralDynamicCombineMeshComponent*> CombinedMeshComponents; // 0x3D0(0x10)
	struct TMap<uint32_t, int32_t> SectionIndexMap; // 0x3E0(0x50)
	uint8_t Pad_0x430[0x28]; // 0x430(0x28)
};

// Object: Class MFGridLevelsRuntime.MFModifyLoadDistanceSettings
// Size: 0x88 (Inherited: 0x38)
struct UMFModifyLoadDistanceSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFModifyLoadDistanceSettings, "MFModifyLoadDistanceSettings")

	struct TSoftObjectPtr<UDataTable> LoadDistActorModifiersTable; // 0x38(0x28)
	struct TSoftObjectPtr<UDataTable> LoadDistStrategyTable; // 0x60(0x28)
};

// Object: Class MFGridLevelsRuntime.MFModifyLoadDistActorInterface
// Size: 0x28 (Inherited: 0x28)
struct IMFModifyLoadDistActorInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMFModifyLoadDistActorInterface, "MFModifyLoadDistActorInterface")

	// Object: Function MFGridLevelsRuntime.MFModifyLoadDistActorInterface.IsVisibleToBox
	// Flags: [Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const]
	// Offset: 0x9890330
	// Params: [ Num(2) Size(0x1D) ]
	bool IsVisibleToBox(const struct FBox& Box);

	// Object: Function MFGridLevelsRuntime.MFModifyLoadDistActorInterface.GetModifyLoadDistActorType_NotViewTarget
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x33cd698
	// Params: [ Num(1) Size(0x1) ]
	EMFModifyLoadDistActorType GetModifyLoadDistActorType_NotViewTarget();

	// Object: Function MFGridLevelsRuntime.MFModifyLoadDistActorInterface.GetModifyLoadDistActorType
	// Flags: [Native|Event|Public|BlueprintEvent|Const]
	// Offset: 0x33cd6d4
	// Params: [ Num(1) Size(0x1) ]
	EMFModifyLoadDistActorType GetModifyLoadDistActorType();
};

// Object: Class MFGridLevelsRuntime.MFModifyLoadDistanceActor
// Size: 0x620 (Inherited: 0x300)
struct AMFModifyLoadDistanceActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFModifyLoadDistanceActor, "MFModifyLoadDistanceActor")

	struct TArray<struct FVolumeLoadDistance> ClientVolumeLoadDistances; // 0x300(0x10)
	struct TMap<struct FName, struct AVolume*> Level2VolumeMap; // 0x310(0x50)
	struct TMap<struct AVolume*, struct FPlayerVolume2DistanceScale> VolumeLoadDistScaleMap; // 0x360(0x50)
	struct TSet<struct AVolume*> PlayerVolumes; // 0x3B0(0x50)
	struct AVolume* CurPlayerVolume; // 0x400(0x8)
	uint8_t Pad_0x408[0x10]; // 0x408(0x10)
	struct FTimerHandle RegisterWorldCompositionHandle; // 0x418(0x8)
	struct FTimerHandle InitVolumeLoadDistanceInfoHandle; // 0x420(0x8)
	struct FTimerHandle InitLoadDistActorModifierHandle; // 0x428(0x8)
	struct TSoftObjectPtr<UDataTable> LoadDistActorModifiersTablePtr; // 0x430(0x28)
	struct TSoftObjectPtr<UDataTable> LoadDistStrategyTablePtr; // 0x458(0x28)
	uint8_t Pad_0x480[0x1A0]; // 0x480(0x1A0)
};

// Object: Class MFGridLevelsRuntime.MFWaterComponent
// Size: 0x7C0 (Inherited: 0x730)
struct UMFWaterComponent : UProceduralMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFWaterComponent, "MFWaterComponent")

	int32_t NumSectionX; // 0x730(0x4)
	int32_t NumSectionY; // 0x734(0x4)
	int32_t SectionSizeX; // 0x738(0x4)
	int32_t SectionSizeY; // 0x73C(0x4)
	int32_t NumVertexX; // 0x740(0x4)
	int32_t NumVertexY; // 0x744(0x4)
	float fLOD; // 0x748(0x4)
	uint8_t Pad_0x74C[0x4]; // 0x74C(0x4)
	struct TArray<struct FVector> Vertices; // 0x750(0x10)
	struct TArray<int32_t> Triangles; // 0x760(0x10)
	struct TArray<struct FVector> Normals; // 0x770(0x10)
	struct TArray<struct FVector2D> UV0; // 0x780(0x10)
	struct TArray<struct FVector2D> UV1; // 0x790(0x10)
	struct TArray<struct FColor> VertexColors; // 0x7A0(0x10)
	struct TArray<struct FProcMeshTangent> Tangents; // 0x7B0(0x10)

	// Object: Function MFGridLevelsRuntime.MFWaterComponent.GenerateMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd7f8
	// Params: [ Num(0) Size(0x0) ]
	void GenerateMesh();

	// Object: Function MFGridLevelsRuntime.MFWaterComponent.ApplyLOD
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd7e4
	// Params: [ Num(0) Size(0x0) ]
	void ApplyLOD();
};

// Object: Class MFGridLevelsRuntime.MFWorldComposition
// Size: 0x588 (Inherited: 0x68)
struct UMFWorldComposition : UWorldComposition
{
	DEFINE_UE_CLASS_HELPERS(UMFWorldComposition, "MFWorldComposition")

	struct TArray<struct FString> ClientLevelPathFilters; // 0x68(0x10)
	struct TArray<struct FString> ClientLevelPathIgnores; // 0x78(0x10)
	struct TArray<struct FString> ClientLevelPathIgnoresForStandardPackage; // 0x88(0x10)
	struct TArray<struct FString> ClientLevelPathIgnoresForLowDevice; // 0x98(0x10)
	struct TArray<struct FString> ClientLevelPathIgnoresForMediumDevice; // 0xA8(0x10)
	struct TArray<struct FString> ClientLevelPathConsider; // 0xB8(0x10)
	struct TArray<struct FString> ClientLevelPathLoadByVisibility; // 0xC8(0x10)
	struct TArray<struct FString> ServerLevelPathFilters; // 0xD8(0x10)
	struct TArray<struct FString> ServerLevelPathIgnores; // 0xE8(0x10)
	struct TArray<struct FString> ServerLevelPathConsider; // 0xF8(0x10)
	bool bOverrideStreamingDistance; // 0x108(0x1)
	bool bEnableStreamVolume; // 0x109(0x1)
	uint8_t Pad_0x10A[0x2]; // 0x10A(0x2)
	float StreamingDistance; // 0x10C(0x4)
	struct TMap<struct FString, float> StreamingDistanceScaleLowMemory; // 0x110(0x50)
	struct TMap<int32_t, struct FString> TileCacheMap; // 0x160(0x50)
	uint8_t Pad_0x1B0[0x88]; // 0x1B0(0x88)
	struct TArray<struct ULevelStreaming*> DiscardTilesStreaming; // 0x238(0x10)
	uint8_t Pad_0x248[0x10]; // 0x248(0x10)
	struct TArray<struct ULevelStreaming*> DiscardLabelTilesStreaming; // 0x258(0x10)
	struct TArray<struct ULevelStreaming*> VolumedLevelStreaming; // 0x268(0x10)
	struct TMap<struct FString, int32_t> ExcludeLevelStreamingMap; // 0x278(0x50)
	uint8_t Pad_0x2C8[0x20]; // 0x2C8(0x20)
	bool LimitLoadLevel; // 0x2E8(0x1)
	uint8_t Pad_0x2E9[0x3]; // 0x2E9(0x3)
	int32_t MaxAsynLoadNum; // 0x2EC(0x4)
	int32_t MaxUnlimitLoadNum; // 0x2F0(0x4)
	uint8_t Pad_0x2F4[0x14]; // 0x2F4(0x14)
	int32_t PerFrameCount; // 0x308(0x4)
	uint8_t Pad_0x30C[0x44]; // 0x30C(0x44)
	struct TArray<struct AWorldCompositionLevelLoadActor*> LevelLoadActors; // 0x350(0x10)
	uint8_t Pad_0x360[0x70]; // 0x360(0x70)
	struct AMFVoxelEnvAreaClusterActor* AreaClusterActor; // 0x3D0(0x8)
	uint8_t Pad_0x3D8[0x70]; // 0x3D8(0x70)
	struct AMFModifyLoadDistanceActor* ModifyLoadDistanceActor; // 0x448(0x8)
	struct AActor* ViewTargetToTransition; // 0x450(0x8)
	struct AActor* PersistantViewTarget; // 0x458(0x8)
	uint8_t Pad_0x460[0x128]; // 0x460(0x128)

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.UpdateTileCacheMap
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd8bc
	// Params: [ Num(0) Size(0x0) ]
	void UpdateTileCacheMap();

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.UnLoadLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33ce148
	// Params: [ Num(1) Size(0x10) ]
	void UnLoadLevel(struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.SetOverrideStreamingDistance
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd9cc
	// Params: [ Num(2) Size(0x8) ]
	void SetOverrideStreamingDistance(bool bOverride, float StreamingDistance);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.SetbEnableStreamVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd91c
	// Params: [ Num(1) Size(0x1) ]
	void SetbEnableStreamVolume(bool bEnable);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.RestoreLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33ce24c
	// Params: [ Num(1) Size(0x10) ]
	void RestoreLevel(struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.RemovePreloadLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33cdabc
	// Params: [ Num(1) Size(0x10) ]
	void RemovePreloadLevel(struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.RemoveExcludeLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33cdf40
	// Params: [ Num(1) Size(0x10) ]
	void RemoveExcludeLevel(struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.RegisterLevelLoadActor
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd814
	// Params: [ Num(1) Size(0x8) ]
	void RegisterLevelLoadActor(struct AWorldCompositionLevelLoadActor* CurrLevelLoadActor);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.IsDisableTickInDS
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x33cd8d0
	// Params: [ Num(1) Size(0x1) ]
	bool IsDisableTickInDS();

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.IncrementAddExcludeLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33cde6c
	// Params: [ Num(1) Size(0x10) ]
	void IncrementAddExcludeLevel(struct TArray<struct FString> UnloadLevelArray);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.DisableTickInDS
	// Flags: [Final|Native|Public]
	// Offset: 0x33cd908
	// Params: [ Num(0) Size(0x0) ]
	void DisableTickInDS();

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.AddtionLabelFilterTiles
	// Flags: [Final|Native|Public]
	// Offset: 0x33cdcc4
	// Params: [ Num(1) Size(0x10) ]
	void AddtionLabelFilterTiles(struct TArray<struct FString> AdditionLabelFilterLevels);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.AddtionIgnoreTiles
	// Flags: [Final|Native|Public]
	// Offset: 0x33cdd98
	// Params: [ Num(1) Size(0x10) ]
	void AddtionIgnoreTiles(struct TArray<struct FString> AdditionIgnoreLevels);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.AddPreloadLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33cdbc0
	// Params: [ Num(1) Size(0x10) ]
	void AddPreloadLevel(struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldComposition.AddExcludeLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x33ce044
	// Params: [ Num(1) Size(0x10) ]
	void AddExcludeLevel(struct FString LevelName);
};

// Object: Class MFGridLevelsRuntime.MFWorldCompositionActor
// Size: 0x440 (Inherited: 0x300)
struct AMFWorldCompositionActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFWorldCompositionActor, "MFWorldCompositionActor")

	struct TArray<struct FString> ClientLevelPathFilters; // 0x300(0x10)
	struct TArray<struct FString> ClientLevelPathIgnores; // 0x310(0x10)
	struct TArray<struct FString> ClientLevelPathIgnoresForStandardPackage; // 0x320(0x10)
	struct TArray<struct FString> ClientLevelPathIgnoresForLowDevice; // 0x330(0x10)
	struct TArray<struct FString> ClientLevelPathIgnoresForMediumDevice; // 0x340(0x10)
	struct TArray<struct FString> ClientLevelPathConsider; // 0x350(0x10)
	struct TArray<struct FString> ClientLevelPathLoadByVisibility; // 0x360(0x10)
	struct TArray<struct FString> ServerLevelPathFilters; // 0x370(0x10)
	struct TArray<struct FString> ServerLevelPathIgnores; // 0x380(0x10)
	struct TArray<struct FString> ServerLevelPathConsider; // 0x390(0x10)
	bool bUseLandscapeMeshProxy; // 0x3A0(0x1)
	uint8_t Pad_0x3A1[0x7]; // 0x3A1(0x7)
	struct ALandscapeMeshProxyActor* CachedLandscapeMeshProxyActor; // 0x3A8(0x8)
	struct TArray<struct ULandscapeComponent*> CachedLandscapeComponents; // 0x3B0(0x10)
	struct TArray<struct ALODActor*> CachedLODActors; // 0x3C0(0x10)
	struct UMaterialParameterCollection* MPC_LandscapeRegion; // 0x3D0(0x8)
	float LandscapeViewDistance; // 0x3D8(0x4)
	bool bOverrideStreamingDistance; // 0x3DC(0x1)
	uint8_t Pad_0x3DD[0x3]; // 0x3DD(0x3)
	float StreamingDistance; // 0x3E0(0x4)
	uint8_t Pad_0x3E4[0x4]; // 0x3E4(0x4)
	struct TMap<struct FString, float> StreamingDistanceScaleLowMemory; // 0x3E8(0x50)
	int32_t AreaCluster1stCnt; // 0x438(0x4)
	uint8_t Pad_0x43C[0x4]; // 0x43C(0x4)
};

// Object: Class MFGridLevelsRuntime.MFWorldCompositionStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFWorldCompositionStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFWorldCompositionStatics, "MFWorldCompositionStatics")

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.UnLoadLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33cf238
	// Params: [ Num(2) Size(0x18) ]
	static void UnLoadLevel(struct UObject* WorldContextObject, struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.UnLimitLevelLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ceb28
	// Params: [ Num(2) Size(0x9) ]
	static void UnLimitLevelLoad(struct UObject* WorldContextObject, bool bEnabled);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.SetOverrideStreamingDistance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ced80
	// Params: [ Num(3) Size(0x10) ]
	static void SetOverrideStreamingDistance(struct UObject* WorldContextObject, bool bOverride, float StreamingDistance);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.SetLoadLevelState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce618
	// Params: [ Num(3) Size(0x18) ]
	static void SetLoadLevelState(struct UObject* WorldContextObject, EMFLoadLevelState InLoadLevelState, struct AActor* ViewTarget);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.SetLimitLoadLevelEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ceca0
	// Params: [ Num(2) Size(0x9) ]
	static void SetLimitLoadLevelEnable(struct UObject* WorldContextObject, bool bEnable);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.SetbEnableStreamVolume
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33cea48
	// Params: [ Num(2) Size(0x9) ]
	static void SetbEnableStreamVolume(struct UObject* WorldContextObject, bool bEnabled);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.RestoreLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33cf378
	// Params: [ Num(2) Size(0x18) ]
	static void RestoreLevel(struct UObject* WorldContextObject, struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.RemovePreloadLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce7c8
	// Params: [ Num(2) Size(0x18) ]
	static void RemovePreloadLevel(struct UObject* WorldContextObject, struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.RemoveExcludeLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33cefb8
	// Params: [ Num(2) Size(0x18) ]
	static void RemoveExcludeLevel(struct UObject* WorldContextObject, struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.ReloadLimitLoadLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33cec08
	// Params: [ Num(1) Size(0x8) ]
	static void ReloadLimitLoadLevel(struct UObject* WorldContextObject);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.IsWaitingForUnloading
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce56c
	// Params: [ Num(2) Size(0x9) ]
	static bool IsWaitingForUnloading(struct UObject* WorldContextObject);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.IncrementAddExcludeLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ceea8
	// Params: [ Num(2) Size(0x18) ]
	static void IncrementAddExcludeLevel(struct UObject* WorldContextObject, struct TArray<struct FString> UnloadLevelArray);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.FlushWorldCompositionLevelLoadData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce3c4
	// Params: [ Num(1) Size(0x8) ]
	static void FlushWorldCompositionLevelLoadData(struct UObject* WorldContextObject);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.DisableWorldCompositionTickInDS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce730
	// Params: [ Num(1) Size(0x8) ]
	static void DisableWorldCompositionTickInDS(struct UObject* WorldContextObject);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.AddtionLabelFilterTiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce45c
	// Params: [ Num(2) Size(0x18) ]
	static void AddtionLabelFilterTiles(struct UObject* WorldContextObject, struct TArray<struct FString> LabelTags);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.AddPreloadLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33ce908
	// Params: [ Num(2) Size(0x18) ]
	static void AddPreloadLevel(struct UObject* WorldContextObject, struct FString LevelName);

	// Object: Function MFGridLevelsRuntime.MFWorldCompositionStatics.AddExcludeLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x33cf0f8
	// Params: [ Num(2) Size(0x18) ]
	static void AddExcludeLevel(struct UObject* WorldContextObject, struct FString LevelName);
};

// Object: Class MFGridLevelsRuntime.WorldCompositionLevelLoadActor
// Size: 0x318 (Inherited: 0x300)
struct AWorldCompositionLevelLoadActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AWorldCompositionLevelLoadActor, "WorldCompositionLevelLoadActor")

	EMFLevelLoadType LevelLoadType; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	float Distance; // 0x304(0x4)
	bool bIgnoreViewTarget; // 0x308(0x1)
	uint8_t Pad_0x309[0x7]; // 0x309(0x7)
	struct UBoxComponent* BoxComponent; // 0x310(0x8)
};

} // namespace SDK
