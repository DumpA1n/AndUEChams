#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: NavigationSystem
// Enums: 4
// Structs: 10
// Classes: 38

struct AActor;
struct AController;
enum class EFNavigationSystemRunMode : uint8_t;
enum class ENavDataGatheringModeConfig : uint8_t;
struct FNavDataConfig;
struct FNavigationLink;
struct UCapsuleComponent;
struct UNavigationSystemConfig;
struct UPrimitiveComponent;
struct FNavCollisionBox;
struct FNavCollisionCylinder;
struct FSupportedAreaData;
struct FNavGraphNode;
struct FNavGraphEdge;
struct FNavigationFilterFlags;
struct FNavigationFilterArea;
struct FNavLinkCustomInstanceData;
struct FNavMeshTileData;
struct FRecastNavMeshGenerationProperties;
struct UNavigationSystemV1;
struct UNavigationSystemModuleConfig;
struct ANavigationTestingActor;
struct ANavModifierVolume;
struct UNavArea;
struct UNavigationQueryFilter;
struct ANavigationData;
struct ARecastNavMesh;
struct AAbstractNavData;
struct UCrowdManagerBase;
struct UNavArea_Default;
struct UNavArea_LowHeight;
struct UNavArea_Null;
struct UNavArea_Obstacle;
struct UNavAreaMeta;
struct UNavAreaMeta_SwitchByAgent;
struct UNavCollision;
struct ANavigationGraph;
struct ANavigationGraphNode;
struct UNavigationGraphNodeComponent;
struct UNavigationInvokerComponent;
struct UNavigationPath;
struct INavigationPathGenerator;
struct UNavLinkComponent;
struct UNavRelevantComponent;
struct UNavLinkCustomComponent;
struct INavLinkCustomInterface;
struct INavLinkHostInterface;
struct UNavLinkRenderingComponent;
struct UNavLinkTrivial;
struct ANavMeshBoundsVolume;
struct UNavMeshRenderingComponent;
struct UNavModifierComponent;
struct INavNodeInterface;
struct ANavSystemConfigOverride;
struct UNavTestRenderingComponent;
struct URecastFilter_UseDefaultArea;
struct URecastNavMeshDataChunk;

// Object: Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	Static = 0,
	DynamicModifiersOnly = 1,
	Dynamic = 2,
	LegacyGeneration = 3,
	ERuntimeGenerationType_MAX = 4
};

// Object: Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	TotalCost = 0,
	HeuristicOnly = 1,
	RealCostOnly = 2,
	ENavCostDisplay_MAX = 3
};

// Object: Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	Override = 0,
	Append = 1,
	Skip = 2,
	ENavSystemOverridePolicy_MAX = 3
};

// Object: Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	Monotone = 0,
	Watershed = 1,
	ChunkyMonotone = 2,
	ERecastPartitioning_MAX = 3
};

// Object: ScriptStruct NavigationSystem.NavCollisionBox
// Size: 0x18 (Inherited: 0x0)
struct FNavCollisionBox
{
	struct FVector Offset; // 0x0(0xC)
	struct FVector Extent; // 0xC(0xC)
};

// Object: ScriptStruct NavigationSystem.NavCollisionCylinder
// Size: 0x14 (Inherited: 0x0)
struct FNavCollisionCylinder
{
	struct FVector Offset; // 0x0(0xC)
	float Radius; // 0xC(0x4)
	float Height; // 0x10(0x4)
};

// Object: ScriptStruct NavigationSystem.SupportedAreaData
// Size: 0x20 (Inherited: 0x0)
struct FSupportedAreaData
{
	struct FString AreaClassName; // 0x0(0x10)
	int32_t AreaID; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct UObject* AreaClass; // 0x18(0x8)
};

// Object: ScriptStruct NavigationSystem.NavGraphNode
// Size: 0x18 (Inherited: 0x0)
struct FNavGraphNode
{
	struct UObject* Owner; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
};

// Object: ScriptStruct NavigationSystem.NavGraphEdge
// Size: 0x18 (Inherited: 0x0)
struct FNavGraphEdge
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct NavigationSystem.NavigationFilterFlags
// Size: 0x4 (Inherited: 0x0)
struct FNavigationFilterFlags
{
	uint8_t bNavFlag0 : 1; // 0x0(0x1), Mask(0x1)
	uint8_t bNavFlag1 : 1; // 0x0(0x1), Mask(0x2)
	uint8_t bNavFlag2 : 1; // 0x0(0x1), Mask(0x4)
	uint8_t bNavFlag3 : 1; // 0x0(0x1), Mask(0x8)
	uint8_t bNavFlag4 : 1; // 0x0(0x1), Mask(0x10)
	uint8_t bNavFlag5 : 1; // 0x0(0x1), Mask(0x20)
	uint8_t bNavFlag6 : 1; // 0x0(0x1), Mask(0x40)
	uint8_t bNavFlag7 : 1; // 0x0(0x1), Mask(0x80)
	uint8_t bNavFlag8 : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bNavFlag9 : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bNavFlag10 : 1; // 0x1(0x1), Mask(0x4)
	uint8_t bNavFlag11 : 1; // 0x1(0x1), Mask(0x8)
	uint8_t bNavFlag12 : 1; // 0x1(0x1), Mask(0x10)
	uint8_t bNavFlag13 : 1; // 0x1(0x1), Mask(0x20)
	uint8_t bNavFlag14 : 1; // 0x1(0x1), Mask(0x40)
	uint8_t bNavFlag15 : 1; // 0x1(0x1), Mask(0x80)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
};

// Object: ScriptStruct NavigationSystem.NavigationFilterArea
// Size: 0x18 (Inherited: 0x0)
struct FNavigationFilterArea
{
	struct UNavArea* AreaClass; // 0x0(0x8)
	float TravelCostOverride; // 0x8(0x4)
	float EnteringCostOverride; // 0xC(0x4)
	uint8_t bIsExcluded : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bOverrideTravelCost : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bOverrideEnteringCost : 1; // 0x10(0x1), Mask(0x4)
	uint8_t BitPad_0x10_3 : 5; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size: 0x70 (Inherited: 0x68)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData
{
	uint32_t NavLinkUserId; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
};

// Object: ScriptStruct NavigationSystem.NavMeshTileData
// Size: 0x38 (Inherited: 0x0)
struct FNavMeshTileData
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x40 (Inherited: 0x0)
struct FRecastNavMeshGenerationProperties
{
	int32_t TilePoolSize; // 0x0(0x4)
	float TileSizeUU; // 0x4(0x4)
	float CellSize; // 0x8(0x4)
	float CellHeight; // 0xC(0x4)
	float AgentRadius; // 0x10(0x4)
	float AgentHeight; // 0x14(0x4)
	float AgentMaxSlope; // 0x18(0x4)
	float AgentMaxStepHeight; // 0x1C(0x4)
	float MinRegionArea; // 0x20(0x4)
	float MergeRegionSize; // 0x24(0x4)
	float MaxSimplificationError; // 0x28(0x4)
	int32_t TileNumberHardLimit; // 0x2C(0x4)
	uint8_t RegionPartitioning; // 0x30(0x1)
	uint8_t LayerPartitioning; // 0x31(0x1)
	uint8_t Pad_0x32[0x2]; // 0x32(0x2)
	int32_t RegionChunkSplits; // 0x34(0x4)
	int32_t LayerChunkSplits; // 0x38(0x4)
	uint8_t bSortNavigationAreasByCost : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bPerformVoxelFiltering : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t bMarkLowHeightAreas : 1; // 0x3C(0x1), Mask(0x4)
	uint8_t bUseExtraTopCellWhenMarkingAreas : 1; // 0x3C(0x1), Mask(0x8)
	uint8_t bFilterLowSpanSequences : 1; // 0x3C(0x1), Mask(0x10)
	uint8_t bFilterLowSpanFromTileCache : 1; // 0x3C(0x1), Mask(0x20)
	uint8_t bFixedTilePoolSize : 1; // 0x3C(0x1), Mask(0x40)
	uint8_t BitPad_0x3C_7 : 1; // 0x3C(0x1)
	uint8_t Pad_0x3D[0x3]; // 0x3D(0x3)
};

// Object: Class NavigationSystem.NavigationSystemV1
// Size: 0x15F8 (Inherited: 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase
{
	DEFINE_UE_CLASS_HELPERS(UNavigationSystemV1, "NavigationSystemV1")

	struct ANavigationData* MainNavData; // 0x28(0x8)
	struct ANavigationData* AbstractNavData; // 0x30(0x8)
	struct FName DefaultAgentName; // 0x38(0x8)
	struct TSoftClassPtr<struct UCrowdManagerBase*> CrowdManagerClass; // 0x40(0x28)
	uint8_t bAutoCreateNavigationData : 1; // 0x68(0x1), Mask(0x1)
	uint8_t bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x1), Mask(0x2)
	uint8_t bAllowClientSideNavigation : 1; // 0x68(0x1), Mask(0x4)
	uint8_t bShouldDiscardSubLevelNavData : 1; // 0x68(0x1), Mask(0x8)
	uint8_t bTickWhilePaused : 1; // 0x68(0x1), Mask(0x10)
	uint8_t bSupportRebuilding : 1; // 0x68(0x1), Mask(0x20)
	uint8_t bInitialBuildingLocked : 1; // 0x68(0x1), Mask(0x40)
	uint8_t BitPad_0x68_7 : 1; // 0x68(0x1)
	uint8_t bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x1), Mask(0x1)
	uint8_t BitPad_0x69_1 : 7; // 0x69(0x1)
	uint8_t Pad_0x6A[0x2]; // 0x6A(0x2)
	float NavMeshQueryFindPathTimeLimit; // 0x6C(0x4)
	uint8_t bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x3]; // 0x71(0x3)
	float ActiveTilesUpdateInterval; // 0x74(0x4)
	ENavDataGatheringModeConfig DataGatheringMode; // 0x78(0x1)
	uint8_t Pad_0x79[0x3]; // 0x79(0x3)
	float DirtyAreaWarningSizeThreshold; // 0x7C(0x4)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x80(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x98(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xA8(0x10)
	uint8_t Pad_0xB8[0x10]; // 0xB8(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xC8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xD8(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationBeginDelegate; // 0xE8(0x10)
	uint8_t Pad_0xF8[0xDC]; // 0xF8(0xDC)
	EFNavigationSystemRunMode OperationMode; // 0x1D4(0x1)
	uint8_t Pad_0x1D5[0x13FF]; // 0x1D5(0x13FF)
	float DirtyAreasUpdateFreq; // 0x15D4(0x4)
	uint8_t Pad_0x15D8[0x20]; // 0x15D8(0x20)

	// Object: Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f574
	// Params: [ Num(1) Size(0x8) ]
	void UnregisterNavigationInvoker(struct AActor* Invoker);

	// Object: Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbe5ec2c
	// Params: [ Num(2) Size(0x14) ]
	static void SimpleMoveToLocation(struct AController* Controller, const struct FVector& Goal);

	// Object: Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xbe5ed0c
	// Params: [ Num(2) Size(0x10) ]
	static void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal);

	// Object: Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f754
	// Params: [ Num(1) Size(0x4) ]
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs);

	// Object: Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f4cc
	// Params: [ Num(1) Size(0x1) ]
	void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);

	// Object: Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f740
	// Params: [ Num(0) Size(0x0) ]
	void ResetMaxSimultaneousTileGenerationJobsCount();

	// Object: Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f61c
	// Params: [ Num(3) Size(0x10) ]
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);

	// Object: Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5f140
	// Params: [ Num(6) Size(0x40) ]
	static struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, const struct FVector& Point, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent);

	// Object: Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f2f4
	// Params: [ Num(1) Size(0x8) ]
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume);

	// Object: Function NavigationSystem.NavigationSystemV1.NavigationRaycast
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbe5f7fc
	// Params: [ Num(7) Size(0x41) ]
	static bool NavigationRaycast(struct UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, struct FVector& HitLocation, struct UNavigationQueryFilter* FilterClass, struct AController* Querier);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5f39c
	// Params: [ Num(4) Size(0x19) ]
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, struct UNavArea* OldArea, struct UNavArea* NewArea);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe60714
	// Params: [ Num(7) Size(0x3D) ]
	static bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, const struct FVector& Point, struct FVector& ProjectedLocation, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass, struct FVector QueryExtent);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe60514
	// Params: [ Num(7) Size(0x39) ]
	static bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, const struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5ea2c
	// Params: [ Num(7) Size(0x39) ]
	static bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, const struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbe60314
	// Params: [ Num(7) Size(0x39) ]
	static bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, const struct FVector& Origin, struct FVector& RandomLocation, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5fdac
	// Params: [ Num(2) Size(0x9) ]
	static bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject);

	// Object: Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5fe58
	// Params: [ Num(2) Size(0x9) ]
	static bool IsNavigationBeingBuilt(struct UObject* WorldContextObject);

	// Object: Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5ef90
	// Params: [ Num(6) Size(0x34) ]
	static struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, const struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5ede0
	// Params: [ Num(6) Size(0x34) ]
	static struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, const struct FVector& Origin, float Radius, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetPathLength
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe5ff04
	// Params: [ Num(7) Size(0x39) ]
	static uint8_t GetPathLength(struct UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float& PathLength, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetPathCost
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe6010c
	// Params: [ Num(7) Size(0x39) ]
	static uint8_t GetPathCost(struct UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, float& PathCost, struct ANavigationData* NavData, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.GetNavigationSystem
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xbe60914
	// Params: [ Num(2) Size(0x10) ]
	static struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject);

	// Object: Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbe5fbf0
	// Params: [ Num(6) Size(0x38) ]
	static struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass);

	// Object: Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0xbe5fa04
	// Params: [ Num(7) Size(0x40) ]
	static struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, const struct FVector& PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, struct UNavigationQueryFilter* FilterClass);
};

// Object: Class NavigationSystem.NavigationSystemModuleConfig
// Size: 0x50 (Inherited: 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig
{
	DEFINE_UE_CLASS_HELPERS(UNavigationSystemModuleConfig, "NavigationSystemModuleConfig")

	uint8_t bStrictlyStatic : 1; // 0x4D(0x1), Mask(0x1)
	uint8_t bCreateOnClient : 1; // 0x4D(0x1), Mask(0x2)
	uint8_t bAutoSpawnMissingNavData : 1; // 0x4D(0x1), Mask(0x4)
	uint8_t bSpawnNavDataInNavBoundsLevel : 1; // 0x4D(0x1), Mask(0x8)
};

// Object: Class NavigationSystem.NavigationTestingActor
// Size: 0x3F0 (Inherited: 0x300)
struct ANavigationTestingActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANavigationTestingActor, "NavigationTestingActor")

	uint8_t Pad_0x300[0x10]; // 0x300(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x310(0x8)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x318(0x8)
	uint8_t bActAsNavigationInvoker : 1; // 0x320(0x1), Mask(0x1)
	uint8_t BitPad_0x320_1 : 7; // 0x320(0x1)
	uint8_t Pad_0x321[0x7]; // 0x321(0x7)
	struct FNavAgentProperties NavAgentProps; // 0x328(0x30)
	struct FVector QueryingExtent; // 0x358(0xC)
	uint8_t Pad_0x364[0x4]; // 0x364(0x4)
	struct ANavigationData* MyNavData; // 0x368(0x8)
	struct FVector ProjectedLocation; // 0x370(0xC)
	uint8_t bProjectedLocationValid : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t bSearchStart : 1; // 0x37C(0x1), Mask(0x2)
	uint8_t BitPad_0x37C_2 : 6; // 0x37C(0x1)
	uint8_t Pad_0x37D[0x3]; // 0x37D(0x3)
	float CostLimitFactor; // 0x380(0x4)
	float MinimumCostLimit; // 0x384(0x4)
	uint8_t bBacktracking : 1; // 0x388(0x1), Mask(0x1)
	uint8_t bUseHierarchicalPathfinding : 1; // 0x388(0x1), Mask(0x2)
	uint8_t bGatherDetailedInfo : 1; // 0x388(0x1), Mask(0x4)
	uint8_t bDrawDistanceToWall : 1; // 0x388(0x1), Mask(0x8)
	uint8_t bShowNodePool : 1; // 0x388(0x1), Mask(0x10)
	uint8_t bShowBestPath : 1; // 0x388(0x1), Mask(0x20)
	uint8_t bShowDiffWithPreviousStep : 1; // 0x388(0x1), Mask(0x40)
	uint8_t bShouldBeVisibleInGame : 1; // 0x388(0x1), Mask(0x80)
	uint8_t CostDisplayMode; // 0x389(0x1)
	uint8_t Pad_0x38A[0x2]; // 0x38A(0x2)
	struct FVector2D TextCanvasOffset; // 0x38C(0x8)
	uint8_t bPathExist : 1; // 0x394(0x1), Mask(0x1)
	uint8_t bPathIsPartial : 1; // 0x394(0x1), Mask(0x2)
	uint8_t bPathSearchOutOfNodes : 1; // 0x394(0x1), Mask(0x4)
	uint8_t BitPad_0x394_3 : 5; // 0x394(0x1)
	uint8_t Pad_0x395[0x3]; // 0x395(0x3)
	float PathfindingTime; // 0x398(0x4)
	float PathCost; // 0x39C(0x4)
	int32_t PathfindingSteps; // 0x3A0(0x4)
	uint8_t Pad_0x3A4[0x4]; // 0x3A4(0x4)
	struct ANavigationTestingActor* OtherActor; // 0x3A8(0x8)
	struct UNavigationQueryFilter* FilterClass; // 0x3B0(0x8)
	int32_t ShowStepIndex; // 0x3B8(0x4)
	float OffsetFromCornersDistance; // 0x3BC(0x4)
	uint8_t Pad_0x3C0[0x30]; // 0x3C0(0x30)
};

// Object: Class NavigationSystem.NavModifierVolume
// Size: 0x350 (Inherited: 0x338)
struct ANavModifierVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(ANavModifierVolume, "NavModifierVolume")

	uint8_t Pad_0x338[0x8]; // 0x338(0x8)
	struct UNavArea* AreaClass; // 0x340(0x8)
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x348(0x1)
	uint8_t Pad_0x349[0x7]; // 0x349(0x7)

	// Object: Function NavigationSystem.NavModifierVolume.SetAreaClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe641a8
	// Params: [ Num(1) Size(0x8) ]
	void SetAreaClass(struct UNavArea* NewAreaClass);
};

// Object: Class NavigationSystem.NavArea
// Size: 0x48 (Inherited: 0x30)
struct UNavArea : UNavAreaBase
{
	DEFINE_UE_CLASS_HELPERS(UNavArea, "NavArea")

	float DefaultCost; // 0x2C(0x4)
	float FixedAreaEnteringCost; // 0x30(0x4)
	struct FColor DrawColor; // 0x34(0x4)
	struct FNavAgentSelector SupportedAgents; // 0x38(0x4)
	uint8_t bSupportsAgent0 : 1; // 0x3C(0x1), Mask(0x1)
	uint8_t bSupportsAgent1 : 1; // 0x3C(0x1), Mask(0x2)
	uint8_t bSupportsAgent2 : 1; // 0x3C(0x1), Mask(0x4)
	uint8_t bSupportsAgent3 : 1; // 0x3C(0x1), Mask(0x8)
	uint8_t bSupportsAgent4 : 1; // 0x3C(0x1), Mask(0x10)
	uint8_t bSupportsAgent5 : 1; // 0x3C(0x1), Mask(0x20)
	uint8_t bSupportsAgent6 : 1; // 0x3C(0x1), Mask(0x40)
	uint8_t bSupportsAgent7 : 1; // 0x3C(0x1), Mask(0x80)
	uint8_t bSupportsAgent8 : 1; // 0x3D(0x1), Mask(0x1)
	uint8_t bSupportsAgent9 : 1; // 0x3D(0x1), Mask(0x2)
	uint8_t bSupportsAgent10 : 1; // 0x3D(0x1), Mask(0x4)
	uint8_t bSupportsAgent11 : 1; // 0x3D(0x1), Mask(0x8)
	uint8_t bSupportsAgent12 : 1; // 0x3D(0x1), Mask(0x10)
	uint8_t bSupportsAgent13 : 1; // 0x3D(0x1), Mask(0x20)
	uint8_t bSupportsAgent14 : 1; // 0x3D(0x1), Mask(0x40)
	uint8_t bSupportsAgent15 : 1; // 0x3D(0x1), Mask(0x80)
	uint8_t Pad_0x42[0x6]; // 0x42(0x6)
};

// Object: Class NavigationSystem.NavigationQueryFilter
// Size: 0x48 (Inherited: 0x28)
struct UNavigationQueryFilter : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNavigationQueryFilter, "NavigationQueryFilter")

	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x4)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3C(0x4)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class NavigationSystem.NavigationData
// Size: 0x508 (Inherited: 0x300)
struct ANavigationData : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANavigationData, "NavigationData")

	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	struct UPrimitiveComponent* RenderingComp; // 0x308(0x8)
	struct FNavDataConfig NavDataConfig; // 0x310(0x78)
	uint8_t bEnableDrawing : 1; // 0x388(0x1), Mask(0x1)
	uint8_t bForceRebuildOnLoad : 1; // 0x388(0x1), Mask(0x2)
	uint8_t bAutoDestroyWhenNoNavigation : 1; // 0x388(0x1), Mask(0x4)
	uint8_t bCanBeMainNavData : 1; // 0x388(0x1), Mask(0x8)
	uint8_t bCanSpawnOnRebuild : 1; // 0x388(0x1), Mask(0x10)
	uint8_t bRebuildAtRuntime : 1; // 0x388(0x1), Mask(0x20)
	uint8_t BitPad_0x388_6 : 2; // 0x388(0x1)
	ERuntimeGenerationType RuntimeGeneration; // 0x389(0x1)
	uint8_t Pad_0x38A[0x2]; // 0x38A(0x2)
	float ObservedPathsTickInterval; // 0x38C(0x4)
	uint32_t DataVersion; // 0x390(0x4)
	uint8_t Pad_0x394[0x10C]; // 0x394(0x10C)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x4A0(0x10)
	uint8_t Pad_0x4B0[0x58]; // 0x4B0(0x58)
};

// Object: Class NavigationSystem.RecastNavMesh
// Size: 0x5B8 (Inherited: 0x508)
struct ARecastNavMesh : ANavigationData
{
	DEFINE_UE_CLASS_HELPERS(ARecastNavMesh, "RecastNavMesh")

	uint8_t bDrawTriangleEdges : 1; // 0x504(0x1), Mask(0x1)
	uint8_t bDrawPolyEdges : 1; // 0x504(0x1), Mask(0x2)
	uint8_t bDrawFilledPolys : 1; // 0x504(0x1), Mask(0x4)
	uint8_t bDrawNavMeshEdges : 1; // 0x504(0x1), Mask(0x8)
	uint8_t bDrawNavMeshClosedAngle : 1; // 0x504(0x1), Mask(0x10)
	uint8_t bDrawTileBounds : 1; // 0x504(0x1), Mask(0x20)
	uint8_t bDrawPathCollidingGeometry : 1; // 0x504(0x1), Mask(0x40)
	uint8_t bDrawTileLabels : 1; // 0x504(0x1), Mask(0x80)
	uint8_t bDrawPolygonLabels : 1; // 0x505(0x1), Mask(0x1)
	uint8_t bDrawDefaultPolygonCost : 1; // 0x505(0x1), Mask(0x2)
	uint8_t bDrawLabelsOnPathNodes : 1; // 0x505(0x1), Mask(0x4)
	uint8_t bDrawNavLinks : 1; // 0x505(0x1), Mask(0x8)
	uint8_t bDrawFailedNavLinks : 1; // 0x505(0x1), Mask(0x10)
	uint8_t bDrawClusters : 1; // 0x505(0x1), Mask(0x20)
	uint8_t bDrawOctree : 1; // 0x505(0x1), Mask(0x40)
	uint8_t bDrawOctreeDetails : 1; // 0x505(0x1), Mask(0x80)
	uint8_t bDrawMarkedForbiddenPolys : 1; // 0x506(0x1), Mask(0x1)
	uint8_t bDistinctlyDrawTilesBeingBuilt : 1; // 0x506(0x1), Mask(0x2)
	float DrawOffset; // 0x508(0x4)
	uint8_t bFixedTilePoolSize : 1; // 0x50C(0x1), Mask(0x1)
	uint8_t BitPad_0x50E_3 : 5; // 0x50E(0x1)
	uint8_t Pad_0x50F[0x1]; // 0x50F(0x1)
	int32_t TilePoolSize; // 0x510(0x4)
	float TileSizeUU; // 0x514(0x4)
	float CellSize; // 0x518(0x4)
	float CellHeight; // 0x51C(0x4)
	float AgentRadius; // 0x520(0x4)
	float AgentHeight; // 0x524(0x4)
	float AgentMaxSlope; // 0x528(0x4)
	float AgentMaxStepHeight; // 0x52C(0x4)
	float MinRegionArea; // 0x530(0x4)
	float MergeRegionSize; // 0x534(0x4)
	float MaxSimplificationError; // 0x538(0x4)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x53C(0x4)
	int32_t TileNumberHardLimit; // 0x540(0x4)
	int32_t PolyRefTileBits; // 0x544(0x4)
	int32_t PolyRefNavPolyBits; // 0x548(0x4)
	int32_t PolyRefSaltBits; // 0x54C(0x4)
	struct FVector NavMeshOriginOffset; // 0x550(0xC)
	float DefaultDrawDistance; // 0x55C(0x4)
	float DefaultMaxSearchNodes; // 0x560(0x4)
	float DefaultMaxHierarchicalSearchNodes; // 0x564(0x4)
	uint8_t RegionPartitioning; // 0x568(0x1)
	uint8_t LayerPartitioning; // 0x569(0x1)
	uint8_t Pad_0x56A[0x2]; // 0x56A(0x2)
	int32_t RegionChunkSplits; // 0x56C(0x4)
	int32_t LayerChunkSplits; // 0x570(0x4)
	uint8_t bSortNavigationAreasByCost : 1; // 0x574(0x1), Mask(0x1)
	uint8_t bPerformVoxelFiltering : 1; // 0x574(0x1), Mask(0x2)
	uint8_t bMarkLowHeightAreas : 1; // 0x574(0x1), Mask(0x4)
	uint8_t bUseExtraTopCellWhenMarkingAreas : 1; // 0x574(0x1), Mask(0x8)
	uint8_t bFilterLowSpanSequences : 1; // 0x574(0x1), Mask(0x10)
	uint8_t bFilterLowSpanFromTileCache : 1; // 0x574(0x1), Mask(0x20)
	uint8_t bDoFullyAsyncNavDataGathering : 1; // 0x574(0x1), Mask(0x40)
	uint8_t bUseBetterOffsetsFromCorners : 1; // 0x574(0x1), Mask(0x80)
	uint8_t bStoreEmptyTileLayers : 1; // 0x575(0x1), Mask(0x1)
	uint8_t bUseVirtualFilters : 1; // 0x575(0x1), Mask(0x2)
	uint8_t bAllowNavLinkAsPathEnd : 1; // 0x575(0x1), Mask(0x4)
	uint8_t bUseVoxelCache : 1; // 0x575(0x1), Mask(0x8)
	uint8_t BitPad_0x575_4 : 4; // 0x575(0x1)
	uint8_t Pad_0x576[0x2]; // 0x576(0x2)
	float TileSetUpdateInterval; // 0x578(0x4)
	float HeuristicScale; // 0x57C(0x4)
	float VerticalDeviationFromGroundCompensation; // 0x580(0x4)
	uint8_t Pad_0x584[0x34]; // 0x584(0x34)

	// Object: Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbe644b0
	// Params: [ Num(5) Size(0x32) ]
	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, struct UNavArea* OldArea, struct UNavArea* NewArea, bool ReplaceLinks);
};

// Object: Class NavigationSystem.AbstractNavData
// Size: 0x508 (Inherited: 0x508)
struct AAbstractNavData : ANavigationData
{
	DEFINE_UE_CLASS_HELPERS(AAbstractNavData, "AbstractNavData")
};

// Object: Class NavigationSystem.CrowdManagerBase
// Size: 0x28 (Inherited: 0x28)
struct UCrowdManagerBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCrowdManagerBase, "CrowdManagerBase")
};

// Object: Class NavigationSystem.NavArea_Default
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Default : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Default, "NavArea_Default")
};

// Object: Class NavigationSystem.NavArea_LowHeight
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_LowHeight : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_LowHeight, "NavArea_LowHeight")
};

// Object: Class NavigationSystem.NavArea_Null
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Null : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Null, "NavArea_Null")
};

// Object: Class NavigationSystem.NavArea_Obstacle
// Size: 0x48 (Inherited: 0x48)
struct UNavArea_Obstacle : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavArea_Obstacle, "NavArea_Obstacle")
};

// Object: Class NavigationSystem.NavAreaMeta
// Size: 0x48 (Inherited: 0x48)
struct UNavAreaMeta : UNavArea
{
	DEFINE_UE_CLASS_HELPERS(UNavAreaMeta, "NavAreaMeta")
};

// Object: Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size: 0xC8 (Inherited: 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta
{
	DEFINE_UE_CLASS_HELPERS(UNavAreaMeta_SwitchByAgent, "NavAreaMeta_SwitchByAgent")

	struct UNavArea* Agent0Area; // 0x48(0x8)
	struct UNavArea* Agent1Area; // 0x50(0x8)
	struct UNavArea* Agent2Area; // 0x58(0x8)
	struct UNavArea* Agent3Area; // 0x60(0x8)
	struct UNavArea* Agent4Area; // 0x68(0x8)
	struct UNavArea* Agent5Area; // 0x70(0x8)
	struct UNavArea* Agent6Area; // 0x78(0x8)
	struct UNavArea* Agent7Area; // 0x80(0x8)
	struct UNavArea* Agent8Area; // 0x88(0x8)
	struct UNavArea* Agent9Area; // 0x90(0x8)
	struct UNavArea* Agent10Area; // 0x98(0x8)
	struct UNavArea* Agent11Area; // 0xA0(0x8)
	struct UNavArea* Agent12Area; // 0xA8(0x8)
	struct UNavArea* Agent13Area; // 0xB0(0x8)
	struct UNavArea* Agent14Area; // 0xB8(0x8)
	struct UNavArea* Agent15Area; // 0xC0(0x8)
};

// Object: Class NavigationSystem.NavCollision
// Size: 0xD8 (Inherited: 0x70)
struct UNavCollision : UNavCollisionBase
{
	DEFINE_UE_CLASS_HELPERS(UNavCollision, "NavCollision")

	uint8_t Pad_0x70[0x10]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	struct UNavArea* AreaClass; // 0xA0(0x8)
	uint8_t bGatherConvexGeometry : 1; // 0xA8(0x1), Mask(0x1)
	uint8_t bCreateOnClient : 1; // 0xA8(0x1), Mask(0x2)
	uint8_t BitPad_0xA8_2 : 6; // 0xA8(0x1)
	uint8_t Pad_0xA9[0x2F]; // 0xA9(0x2F)
};

// Object: Class NavigationSystem.NavigationGraph
// Size: 0x508 (Inherited: 0x508)
struct ANavigationGraph : ANavigationData
{
	DEFINE_UE_CLASS_HELPERS(ANavigationGraph, "NavigationGraph")
};

// Object: Class NavigationSystem.NavigationGraphNode
// Size: 0x300 (Inherited: 0x300)
struct ANavigationGraphNode : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANavigationGraphNode, "NavigationGraphNode")
};

// Object: Class NavigationSystem.NavigationGraphNodeComponent
// Size: 0x250 (Inherited: 0x230)
struct UNavigationGraphNodeComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavigationGraphNodeComponent, "NavigationGraphNodeComponent")

	struct FNavGraphNode Node; // 0x228(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x240(0x8)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x248(0x8)
};

// Object: Class NavigationSystem.NavigationInvokerComponent
// Size: 0xE8 (Inherited: 0xE0)
struct UNavigationInvokerComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavigationInvokerComponent, "NavigationInvokerComponent")

	float TileGenerationRadius; // 0xE0(0x4)
	float TileRemovalRadius; // 0xE4(0x4)
};

// Object: Class NavigationSystem.NavigationPath
// Size: 0x80 (Inherited: 0x28)
struct UNavigationPath : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNavigationPath, "NavigationPath")

	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	uint8_t RecalculateOnInvalidation; // 0x48(0x1)
	uint8_t Pad_0x49[0x37]; // 0x49(0x37)

	// Object: Function NavigationSystem.NavigationPath.IsValid
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbe5e5a0
	// Params: [ Num(1) Size(0x1) ]
	bool IsValid();

	// Object: Function NavigationSystem.NavigationPath.IsStringPulled
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbe5e568
	// Params: [ Num(1) Size(0x1) ]
	bool IsStringPulled();

	// Object: Function NavigationSystem.NavigationPath.IsPartial
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbe5e5d8
	// Params: [ Num(1) Size(0x1) ]
	bool IsPartial();

	// Object: Function NavigationSystem.NavigationPath.GetPathLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbe5e644
	// Params: [ Num(1) Size(0x4) ]
	float GetPathLength();

	// Object: Function NavigationSystem.NavigationPath.GetPathCost
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbe5e610
	// Params: [ Num(1) Size(0x4) ]
	float GetPathCost();

	// Object: Function NavigationSystem.NavigationPath.GetDebugString
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xbe5e810
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDebugString();

	// Object: Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe5e678
	// Params: [ Num(1) Size(0x1) ]
	void EnableRecalculationOnInvalidation(uint8_t DoRecalculation);

	// Object: Function NavigationSystem.NavigationPath.EnableDebugDrawing
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xbe5e720
	// Params: [ Num(2) Size(0x14) ]
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor);
};

// Object: Class NavigationSystem.NavigationPathGenerator
// Size: 0x28 (Inherited: 0x28)
struct INavigationPathGenerator : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INavigationPathGenerator, "NavigationPathGenerator")
};

// Object: Class NavigationSystem.NavLinkComponent
// Size: 0x690 (Inherited: 0x680)
struct UNavLinkComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavLinkComponent, "NavLinkComponent")

	struct TArray<struct FNavigationLink> Links; // 0x680(0x10)
};

// Object: Class NavigationSystem.NavRelevantComponent
// Size: 0x110 (Inherited: 0xE0)
struct UNavRelevantComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavRelevantComponent, "NavRelevantComponent")

	uint8_t Pad_0xE0[0x24]; // 0xE0(0x24)
	uint8_t bAttachToOwnersRoot : 1; // 0x104(0x1), Mask(0x1)
	uint8_t BitPad_0x104_1 : 7; // 0x104(0x1)
	uint8_t Pad_0x105[0x3]; // 0x105(0x3)
	struct UObject* CachedNavParent; // 0x108(0x8)

	// Object: Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe64270
	// Params: [ Num(1) Size(0x1) ]
	void SetNavigationRelevancy(bool bRelevant);
};

// Object: Class NavigationSystem.NavLinkCustomComponent
// Size: 0x1C8 (Inherited: 0x110)
struct UNavLinkCustomComponent : UNavRelevantComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavLinkCustomComponent, "NavLinkCustomComponent")

	uint8_t Pad_0x110[0x8]; // 0x110(0x8)
	uint32_t NavLinkUserId; // 0x118(0x4)
	uint8_t Pad_0x11C[0x4]; // 0x11C(0x4)
	struct UNavArea* EnabledAreaClass; // 0x120(0x8)
	struct UNavArea* DisabledAreaClass; // 0x128(0x8)
	struct FNavAgentSelector SupportedAgents; // 0x130(0x4)
	struct FVector LinkRelativeStart; // 0x134(0xC)
	struct FVector LinkRelativeEnd; // 0x140(0xC)
	uint8_t LinkDirection; // 0x14C(0x1)
	uint8_t bLinkEnabled : 1; // 0x14D(0x1), Mask(0x1)
	uint8_t bNotifyWhenEnabled : 1; // 0x14D(0x1), Mask(0x2)
	uint8_t bNotifyWhenDisabled : 1; // 0x14D(0x1), Mask(0x4)
	uint8_t bCreateBoxObstacle : 1; // 0x14D(0x1), Mask(0x8)
	uint8_t BitPad_0x14D_4 : 4; // 0x14D(0x1)
	uint8_t Pad_0x14E[0x2]; // 0x14E(0x2)
	struct FVector ObstacleOffset; // 0x150(0xC)
	struct FVector ObstacleExtent; // 0x15C(0xC)
	struct UNavArea* ObstacleAreaClass; // 0x168(0x8)
	float BroadcastRadius; // 0x170(0x4)
	float BroadcastInterval; // 0x174(0x4)
	uint8_t BroadcastChannel; // 0x178(0x1)
	uint8_t Pad_0x179[0x4F]; // 0x179(0x4F)
};

// Object: Class NavigationSystem.NavLinkCustomInterface
// Size: 0x28 (Inherited: 0x28)
struct INavLinkCustomInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INavLinkCustomInterface, "NavLinkCustomInterface")
};

// Object: Class NavigationSystem.NavLinkHostInterface
// Size: 0x28 (Inherited: 0x28)
struct INavLinkHostInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INavLinkHostInterface, "NavLinkHostInterface")
};

// Object: Class NavigationSystem.NavLinkRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UNavLinkRenderingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavLinkRenderingComponent, "NavLinkRenderingComponent")
};

// Object: Class NavigationSystem.NavLinkTrivial
// Size: 0x50 (Inherited: 0x50)
struct UNavLinkTrivial : UNavLinkDefinition
{
	DEFINE_UE_CLASS_HELPERS(UNavLinkTrivial, "NavLinkTrivial")
};

// Object: Class NavigationSystem.NavMeshBoundsVolume
// Size: 0x340 (Inherited: 0x338)
struct ANavMeshBoundsVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(ANavMeshBoundsVolume, "NavMeshBoundsVolume")

	struct FNavAgentSelector SupportedAgents; // 0x338(0x4)
	uint8_t Pad_0x33C[0x4]; // 0x33C(0x4)
};

// Object: Class NavigationSystem.NavMeshRenderingComponent
// Size: 0x690 (Inherited: 0x680)
struct UNavMeshRenderingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavMeshRenderingComponent, "NavMeshRenderingComponent")

	uint8_t Pad_0x680[0x10]; // 0x680(0x10)
};

// Object: Class NavigationSystem.NavModifierComponent
// Size: 0x170 (Inherited: 0x110)
struct UNavModifierComponent : UNavRelevantComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavModifierComponent, "NavModifierComponent")

	struct UNavArea* AreaClass; // 0x110(0x8)
	struct FVector FailsafeExtent; // 0x118(0xC)
	uint8_t bIncludeAgentHeight : 1; // 0x124(0x1), Mask(0x1)
	uint8_t BitPad_0x124_1 : 7; // 0x124(0x1)
	uint8_t Pad_0x125[0x4B]; // 0x125(0x4B)

	// Object: Function NavigationSystem.NavModifierComponent.SetAreaClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xbe640e8
	// Params: [ Num(1) Size(0x8) ]
	void SetAreaClass(struct UNavArea* NewAreaClass);
};

// Object: Class NavigationSystem.NavNodeInterface
// Size: 0x28 (Inherited: 0x28)
struct INavNodeInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(INavNodeInterface, "NavNodeInterface")
};

// Object: Class NavigationSystem.NavSystemConfigOverride
// Size: 0x310 (Inherited: 0x300)
struct ANavSystemConfigOverride : AActor
{
	DEFINE_UE_CLASS_HELPERS(ANavSystemConfigOverride, "NavSystemConfigOverride")

	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x300(0x8)
	ENavSystemOverridePolicy OverridePolicy; // 0x308(0x1)
	uint8_t bLoadOnClient : 1; // 0x309(0x1), Mask(0x1)
	uint8_t BitPad_0x309_1 : 7; // 0x309(0x1)
	uint8_t Pad_0x30A[0x6]; // 0x30A(0x6)
};

// Object: Class NavigationSystem.NavTestRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UNavTestRenderingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UNavTestRenderingComponent, "NavTestRenderingComponent")
};

// Object: Class NavigationSystem.RecastFilter_UseDefaultArea
// Size: 0x48 (Inherited: 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter
{
	DEFINE_UE_CLASS_HELPERS(URecastFilter_UseDefaultArea, "RecastFilter_UseDefaultArea")
};

// Object: Class NavigationSystem.RecastNavMeshDataChunk
// Size: 0x40 (Inherited: 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk
{
	DEFINE_UE_CLASS_HELPERS(URecastNavMeshDataChunk, "RecastNavMeshDataChunk")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

} // namespace SDK
