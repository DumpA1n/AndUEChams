#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"
#include "NavigationSystem.hpp"

namespace SDK
{

// Package: AIActionPointGeneratorRuntime
// Enums: 6
// Structs: 32
// Classes: 25

struct AActor;
struct ANavigationData;
struct ARecastNavMesh;
struct AVolume;
struct UArrowComponent;
struct UCapsuleComponent;
struct UPrimitiveComponent;
struct USceneComponent;
struct UWorld;
struct FActionPointData;
struct FKeyRoutePointData;
struct FActionPointRadianSafe;
struct FKeyRoutePointLink;
struct FCoverPointOctreeElement;
struct FDoorPointTmpBuildData;
struct FCoverPointOctreeData;
struct FCoverPoseData;
struct FTakeCoverPointIDListInfo;
struct FCoverPointRuntimeInfo;
struct FNavMeshCoverPointPoseSamplingConfig;
struct FDebugArrow;
struct FDebugPoint;
struct FNavMeshEdgeCoverDataEditor;
struct FDTOCoverDataEditor;
struct FDTOCoverData;
struct FNavMeshTacticPointSampleData;
struct FKeyRouteSkeletonEditPoint;
struct FNavMeshTacticPointBuilder;
struct FNavMeshTacticPointBuildStage;
struct FNavMeshTacticPointCalculatePointDefenceAngleStage;
struct FNavMeshTacticPointCalculatePointDefenceRatioStage;
struct FNavMeshTacticPointCollectBoundaryEdgeStage;
struct FNavMeshTacticPointGenerateEdgeDefenceMapStage;
struct FNavMeshTacticPointGenerateSamplePointStage;
struct FNavMeshTacticPointMergeParallelEdgeStage;
struct FNavMeshTacticPointRemoveTooClosePointStage;
struct FNavMeshTacticPointSetupEdgeDataStage;
struct FSeekANode;
struct FTacticPointData;
struct FTacticPointGuardTargetAndDirection;
struct FTacticPointTypeColor;
struct ITacticDoorInterface;
struct AActionPointEditorActor;
struct AActionPointSystemActor;
struct ABPTacticPointEditorActor;
struct AChangeNotifyingRecastNavMesh;
struct UCoverFinderVisData;
struct UCoverFinderVisualizerService;
struct ACoverPointEditorActor;
struct UCoverPointGeneratorStatics;
struct UCoverPointRenderingComponent;
struct ACoverPointTestingActor;
struct ACoverPointExclusionVolume;
struct UCoverSystem;
struct ACoverSystemActor;
struct ADoorPointEditorActor;
struct AGuardPointVolume;
struct AKeyRouteAssistActor;
struct AKeyRoutePointEditorActor;
struct AKeyRouteVolume;
struct USeekPointStatics;
struct ATacticPointEditorActor;
struct ITacticPointEditorActorInterface;
struct ATacticPointGuardDotActor;
struct ATacticSystemActor;
struct AWindowPointEditorActor;

// Object: Enum AIActionPointGeneratorRuntime.EActionPointType
enum class EActionPointType : uint8_t
{
	None = 0,
	CoverPoint = 1,
	TacticPoint = 2,
	KeyRoutePoint = 3,
	NavSkeletonPoint = 4,
	CoverEdgePoint = 5,
	EActionPointType_MAX = 6
};

// Object: Enum AIActionPointGeneratorRuntime.ETakeCoverResult
enum class ETakeCoverResult : uint8_t
{
	InvalidActor = 0,
	AlreadyNull = 1,
	Occupied = 2,
	OtherUsing = 3,
	SelfUsing = 4,
	Released = 5,
	COUNT = 6,
	ETakeCoverResult_MAX = 7
};

// Object: Enum AIActionPointGeneratorRuntime.ENavMeshEdgeDropReason
enum class ENavMeshEdgeDropReason : uint8_t
{
	None = 0,
	LengthTooShort = 1,
	InvalidHoleSide = 2,
	InvalidMovableRange = 3,
	SetupDefenceMapFailed = 4,
	NoAnyDefenceRegionFastTest = 5,
	NoAnyDefenceRegion = 6,
	Count = 7,
	ENavMeshEdgeDropReason_MAX = 8
};

// Object: Enum AIActionPointGeneratorRuntime.ENavMeshTacticPointDropReason
enum class ENavMeshTacticPointDropReason : uint8_t
{
	None = 0,
	InExclusionVolume = 1,
	AbsoluteDefenceRatioNotEnough = 2,
	WindowDefenceRatioNotEnough = 3,
	LessThanRequiredMinimumDefenceAngle = 4,
	GreaterThanLimitedMaximumDefenceAngle = 5,
	DefenceDirectionNotInHoleSide = 6,
	PointsTooClose = 7,
	Count = 8,
	ENavMeshTacticPointDropReason_MAX = 9
};

// Object: Enum AIActionPointGeneratorRuntime.ENPCPoseType
enum class ENPCPoseType : uint8_t
{
	Invalid = 0,
	Prone = 1,
	Crouch = 2,
	Stand = 3,
	ENPCPoseType_MAX = 4
};

// Object: Enum AIActionPointGeneratorRuntime.ETacticPointType
enum class ETacticPointType : uint8_t
{
	NONE = 0,
	FlashBag = 1,
	Smoke = 2,
	HighValue = 3,
	FatalGate = 4,
	Escape = 5,
	Trap = 6,
	OverWatch = 7,
	Prone = 8,
	Window = 9,
	Door = 10,
	Retreat = 11,
	Transfer = 12,
	DoorSafety = 13,
	ETacticPointType_MAX = 14
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.ActionPointData
// Size: 0x10 (Inherited: 0x0)
struct FActionPointData
{
	int32_t UniqueIndex; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.KeyRoutePointData
// Size: 0x60 (Inherited: 0x10)
struct FKeyRoutePointData : FActionPointData
{
	int32_t PointID; // 0x10(0x4)
	float Radius; // 0x14(0x4)
	float MaxNavPathForMultipleOfRadius; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<struct FKeyRoutePointLink> LinkPoints; // 0x20(0x10)
	struct TArray<struct FActionPointRadianSafe> OrientSafetys; // 0x30(0x10)
	float DangerValue; // 0x40(0x4)
	float CalculateDangerTime; // 0x44(0x4)
	int64_t PolyRef; // 0x48(0x8)
	struct TArray<int64_t> NeighborPolyRefs; // 0x50(0x10)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.ActionPointRadianSafe
// Size: 0x8 (Inherited: 0x0)
struct FActionPointRadianSafe
{
	float Radian; // 0x0(0x4)
	float CoverDistance; // 0x4(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.KeyRoutePointLink
// Size: 0x8 (Inherited: 0x0)
struct FKeyRoutePointLink
{
	int32_t Index; // 0x0(0x4)
	float NavPathLength; // 0x4(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.CoverPointOctreeElement
// Size: 0x30 (Inherited: 0x0)
struct FCoverPointOctreeElement
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.DoorPointTmpBuildData
// Size: 0x18 (Inherited: 0x0)
struct FDoorPointTmpBuildData
{
	struct FVector Location; // 0x0(0xC)
	bool IsSafety; // 0xC(0x1)
	uint8_t Pad_0xD[0x3]; // 0xD(0x3)
	int32_t RelevanceIndex; // 0x10(0x4)
	int32_t DangerValue; // 0x14(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.CoverPointOctreeData
// Size: 0x50 (Inherited: 0x0)
struct FCoverPointOctreeData
{
	int32_t CoverID; // 0x0(0x4)
	EActionPointType PointType; // 0x4(0x1)
	uint8_t Pad_0x5[0xB]; // 0x5(0xB)
	struct FVector Location; // 0x10(0xC)
	struct FVector Direction; // 0x1C(0xC)
	struct FVector RightDirection; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FCoverPoseData> PoseData; // 0x38(0x10)
	uint8_t Pad_0x48[0x8]; // 0x48(0x8)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.CoverPoseData
// Size: 0x28 (Inherited: 0x0)
struct FCoverPoseData
{
	ENPCPoseType PoseType; // 0x0(0x1)
	uint8_t bLShootable : 1; // 0x1(0x1), Mask(0x1)
	uint8_t bRShootable : 1; // 0x1(0x1), Mask(0x2)
	uint8_t bMShootable : 1; // 0x1(0x1), Mask(0x4)
	uint8_t BitPad_0x1_3 : 5; // 0x1(0x1)
	uint8_t Pad_0x2[0x2]; // 0x2(0x2)
	struct FVector Location; // 0x4(0xC)
	struct FVector Direction; // 0x10(0xC)
	float DefenceRatio; // 0x1C(0x4)
	float LDefenceAngle; // 0x20(0x4)
	float RDefenceAngle; // 0x24(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.TakeCoverPointIDListInfo
// Size: 0x10 (Inherited: 0x0)
struct FTakeCoverPointIDListInfo
{
	struct TArray<int32_t> List; // 0x0(0x10)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.CoverPointRuntimeInfo
// Size: 0x14 (Inherited: 0x0)
struct FCoverPointRuntimeInfo
{
	struct TWeakObjectPtr<struct AActor> TakenActor; // 0x0(0x8)
	float TakenBeginTime; // 0x8(0x4)
	float NextAvailableTime; // 0xC(0x4)
	float LastSpottedTime; // 0x10(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshCoverPointPoseSamplingConfig
// Size: 0x1C (Inherited: 0x0)
struct FNavMeshCoverPointPoseSamplingConfig
{
	ENPCPoseType PoseType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float DefenceHeight; // 0x4(0x4)
	float DefenceRatio; // 0x8(0x4)
	float FireHeight; // 0xC(0x4)
	float RequiredMinimumDefenceAngle; // 0x10(0x4)
	float LimitedMaximumDefenceAngle; // 0x14(0x4)
	uint8_t Pad_0x18[0x4]; // 0x18(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.DebugArrow
// Size: 0x20 (Inherited: 0x0)
struct FDebugArrow
{
	struct FVector Start; // 0x0(0xC)
	struct FVector End; // 0xC(0xC)
	struct FColor Color; // 0x18(0x4)
	bool bGenericOrUnitDebugData; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.DebugPoint
// Size: 0x14 (Inherited: 0x0)
struct FDebugPoint
{
	struct FVector Location; // 0x0(0xC)
	struct FColor Color; // 0xC(0x4)
	bool bGenericOrUnitDebugData; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshEdgeCoverDataEditor
// Size: 0x1 (Inherited: 0x0)
struct FNavMeshEdgeCoverDataEditor
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.DTOCoverDataEditor
// Size: 0x1 (Inherited: 0x0)
struct FDTOCoverDataEditor
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.DTOCoverData
// Size: 0x50 (Inherited: 0x10)
struct FDTOCoverData : FActionPointData
{
	uint64_t NavPolyRef; // 0x10(0x8)
	int32_t EdgeIndex; // 0x18(0x4)
	uint8_t bCustomized : 1; // 0x1C(0x1), Mask(0x1)
	uint8_t bMarked : 1; // 0x1C(0x1), Mask(0x2)
	uint8_t bAddable : 1; // 0x1C(0x1), Mask(0x4)
	uint8_t bLMovable : 1; // 0x1C(0x1), Mask(0x8)
	uint8_t bRMovable : 1; // 0x1C(0x1), Mask(0x10)
	uint8_t BitPad_0x1C_5 : 3; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float BaseWeight; // 0x20(0x4)
	struct FRotator Rotation; // 0x24(0xC)
	struct FVector RightDir; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct FCoverPoseData> PoseData; // 0x40(0x10)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointSampleData
// Size: 0x58 (Inherited: 0x50)
struct FNavMeshTacticPointSampleData : FDTOCoverData
{
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.KeyRouteSkeletonEditPoint
// Size: 0x30 (Inherited: 0x0)
struct FKeyRouteSkeletonEditPoint
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	int32_t UniqueID; // 0x8(0x4)
	struct FVector Location; // 0xC(0xC)
	float DistanceToWall; // 0x18(0x4)
	bool bDistanceToWallSmall; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	int32_t ConnectionCount; // 0x20(0x4)
	float Score; // 0x24(0x4)
	bool IsJunction; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointBuilder
// Size: 0x78 (Inherited: 0x0)
struct FNavMeshTacticPointBuilder
{
	struct ACoverSystemActor* CoverSystemActor; // 0x0(0x8)
	uint8_t Pad_0x8[0x20]; // 0x8(0x20)
	struct UWorld* World; // 0x28(0x8)
	struct ARecastNavMesh* MainNavData; // 0x30(0x8)
	uint8_t Pad_0x38[0x40]; // 0x38(0x40)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointBuildStage
// Size: 0x10 (Inherited: 0x0)
struct FNavMeshTacticPointBuildStage
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointCalculatePointDefenceAngleStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointCalculatePointDefenceAngleStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointCalculatePointDefenceRatioStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointCalculatePointDefenceRatioStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointCollectBoundaryEdgeStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointCollectBoundaryEdgeStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointGenerateEdgeDefenceMapStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointGenerateEdgeDefenceMapStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointGenerateSamplePointStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointGenerateSamplePointStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointMergeParallelEdgeStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointMergeParallelEdgeStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointRemoveTooClosePointStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointRemoveTooClosePointStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.NavMeshTacticPointSetupEdgeDataStage
// Size: 0x10 (Inherited: 0x10)
struct FNavMeshTacticPointSetupEdgeDataStage : FNavMeshTacticPointBuildStage
{
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.SeekANode
// Size: 0x14 (Inherited: 0x0)
struct FSeekANode
{
	int32_t Index; // 0x0(0x4)
	int32_t ParentIndex; // 0x4(0x4)
	float NowCost; // 0x8(0x4)
	float CostFromBot; // 0xC(0x4)
	float CostEstimate; // 0x10(0x4)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.TacticPointData
// Size: 0x70 (Inherited: 0x10)
struct FTacticPointData : FActionPointData
{
	ETacticPointType TacticPointType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t PointID; // 0x14(0x4)
	float Interval; // 0x18(0x4)
	bool AlwaysActivated; // 0x1C(0x1)
	bool ShouldCrouch; // 0x1D(0x1)
	uint8_t Pad_0x1E[0x2]; // 0x1E(0x2)
	struct TArray<struct FTacticPointGuardTargetAndDirection> GuardTargetAndDirections; // 0x20(0x10)
	bool FieldTrace; // 0x30(0x1)
	uint8_t Pad_0x31[0x3]; // 0x31(0x3)
	float Radius; // 0x34(0x4)
	uint8_t bCustomized : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	uint32_t ActorID; // 0x3C(0x4)
	int8_t IndRelatedToActor; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	float CustomValue; // 0x44(0x4)
	struct FVector CustomVector; // 0x48(0xC)
	struct FRotator Rotation; // 0x54(0xC)
	struct TArray<struct FActionPointRadianSafe> OrientSafetys; // 0x60(0x10)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.TacticPointGuardTargetAndDirection
// Size: 0x18 (Inherited: 0x0)
struct FTacticPointGuardTargetAndDirection
{
	struct FVector Location; // 0x0(0xC)
	struct FRotator Direction; // 0xC(0xC)
};

// Object: ScriptStruct AIActionPointGeneratorRuntime.TacticPointTypeColor
// Size: 0xD0 (Inherited: 0x0)
struct FTacticPointTypeColor
{
	struct FLinearColor None_Color; // 0x0(0x10)
	struct FLinearColor FlashBag_Color; // 0x10(0x10)
	struct FLinearColor Smoke_Color; // 0x20(0x10)
	struct FLinearColor HighValue_Color; // 0x30(0x10)
	struct FLinearColor FatalGate_Color; // 0x40(0x10)
	struct FLinearColor Escape_Color; // 0x50(0x10)
	struct FLinearColor Trap_Color; // 0x60(0x10)
	struct FLinearColor OverWatch_Color; // 0x70(0x10)
	struct FLinearColor Prone_Color; // 0x80(0x10)
	struct FLinearColor Window_Color; // 0x90(0x10)
	struct FLinearColor Door_Color; // 0xA0(0x10)
	struct FLinearColor Retreat_Color; // 0xB0(0x10)
	struct FLinearColor Transfer_Color; // 0xC0(0x10)
};

// Object: Class AIActionPointGeneratorRuntime.TacticDoorInterface
// Size: 0x28 (Inherited: 0x28)
struct ITacticDoorInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ITacticDoorInterface, "TacticDoorInterface")
};

// Object: Class AIActionPointGeneratorRuntime.ActionPointEditorActor
// Size: 0x328 (Inherited: 0x300)
struct AActionPointEditorActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AActionPointEditorActor, "ActionPointEditorActor")

	EActionPointType ActionPointType; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	float ProjectDistanceOfNavigationMesh; // 0x304(0x4)
	struct USceneComponent* DRootComponent; // 0x308(0x8)
	struct UPrimitiveComponent* SpotComponent; // 0x310(0x8)
	struct UPrimitiveComponent* WarnComponent; // 0x318(0x8)
	struct UArrowComponent* ArrowComponent; // 0x320(0x8)
};

// Object: Class AIActionPointGeneratorRuntime.ActionPointSystemActor
// Size: 0x358 (Inherited: 0x300)
struct AActionPointSystemActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AActionPointSystemActor, "ActionPointSystemActor")

	struct TMap<int64_t, float> PointToOtherNavPathLengths; // 0x300(0x50)
	float MAX_NAV_PATH_DISTANCE; // 0x350(0x4)
	int32_t PointToOtherNavPathLengthsCount; // 0x354(0x4)
};

// Object: Class AIActionPointGeneratorRuntime.BPTacticPointEditorActor
// Size: 0x380 (Inherited: 0x300)
struct ABPTacticPointEditorActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ABPTacticPointEditorActor, "BPTacticPointEditorActor")

	uint8_t Pad_0x300[0x8]; // 0x300(0x8)
	int32_t BPTacticType; // 0x308(0x4)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct FTacticPointData PointData; // 0x310(0x70)

	// Object: Function AIActionPointGeneratorRuntime.BPTacticPointEditorActor.CheckActivationCPlus
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3d086b4
	// Params: [ Num(5) Size(0x25) ]
	bool CheckActivationCPlus(struct AActor* ThreatTarget, struct FVector ThreatTargetLoc, bool bOccupied, struct FRotator& AimRot);
};

// Object: Class AIActionPointGeneratorRuntime.ChangeNotifyingRecastNavMesh
// Size: 0x6C0 (Inherited: 0x5B8)
struct AChangeNotifyingRecastNavMesh : ARecastNavMesh
{
	DEFINE_UE_CLASS_HELPERS(AChangeNotifyingRecastNavMesh, "ChangeNotifyingRecastNavMesh")

	uint8_t Pad_0x5B8[0xD8]; // 0x5B8(0xD8)
	struct FMulticastInlineDelegate NavmeshTilesUpdatedImmediateDelegate; // 0x690(0x10)
	struct FMulticastInlineDelegate NavmeshTilesUpdatedBufferedDelegate; // 0x6A0(0x10)
	struct FMulticastInlineDelegate NavmeshTilesUpdatedUntilFinishedDelegate; // 0x6B0(0x10)

	// Object: Function AIActionPointGeneratorRuntime.ChangeNotifyingRecastNavMesh.ProcessQueuedTiles
	// Flags: [Final|Native|Public]
	// Offset: 0x3d08908
	// Params: [ Num(0) Size(0x0) ]
	void ProcessQueuedTiles();

	// Object: Function AIActionPointGeneratorRuntime.ChangeNotifyingRecastNavMesh.OnNavmeshGenerationFinishedHandler
	// Flags: [Final|Native|Public]
	// Offset: 0x3d08860
	// Params: [ Num(1) Size(0x8) ]
	void OnNavmeshGenerationFinishedHandler(struct ANavigationData* NavData);
};

// Object: Class AIActionPointGeneratorRuntime.CoverFinderVisData
// Size: 0x48 (Inherited: 0x28)
struct UCoverFinderVisData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCoverFinderVisData, "CoverFinderVisData")

	struct TArray<struct FDebugPoint> DebugPoints; // 0x28(0x10)
	struct TArray<struct FDebugArrow> DebugArrows; // 0x38(0x10)
};

// Object: Class AIActionPointGeneratorRuntime.CoverFinderVisualizerService
// Size: 0x88 (Inherited: 0x68)
struct UCoverFinderVisualizerService : UBTService
{
	DEFINE_UE_CLASS_HELPERS(UCoverFinderVisualizerService, "CoverFinderVisualizerService")

	uint8_t Pad_0x68[0x20]; // 0x68(0x20)
};

// Object: Class AIActionPointGeneratorRuntime.CoverPointEditorActor
// Size: 0x328 (Inherited: 0x328)
struct ACoverPointEditorActor : AActionPointEditorActor
{
	DEFINE_UE_CLASS_HELPERS(ACoverPointEditorActor, "CoverPointEditorActor")
};

// Object: Class AIActionPointGeneratorRuntime.CoverPointGeneratorStatics
// Size: 0x28 (Inherited: 0x28)
struct UCoverPointGeneratorStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UCoverPointGeneratorStatics, "CoverPointGeneratorStatics")
};

// Object: Class AIActionPointGeneratorRuntime.CoverPointRenderingComponent
// Size: 0x680 (Inherited: 0x680)
struct UCoverPointRenderingComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UCoverPointRenderingComponent, "CoverPointRenderingComponent")
};

// Object: Class AIActionPointGeneratorRuntime.CoverPointTestingActor
// Size: 0x4E0 (Inherited: 0x300)
struct ACoverPointTestingActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ACoverPointTestingActor, "CoverPointTestingActor")

	struct UCapsuleComponent* CapsuleComponent; // 0x300(0x8)
	struct ACoverSystemActor* GeneratorActor; // 0x308(0x8)
	uint8_t Pad_0x310[0x78]; // 0x310(0x78)
	struct FNavAgentProperties NavAgentProps; // 0x388(0x30)
	struct FVector QueryingExtent; // 0x3B8(0xC)
	float GroundOffset; // 0x3C4(0x4)
	float EndPointSize; // 0x3C8(0x4)
	float EdgeThickness; // 0x3CC(0x4)
	float CoverPointSize; // 0x3D0(0x4)
	uint8_t bDrawCoverPoint : 1; // 0x3D4(0x1), Mask(0x1)
	uint8_t bDrawDefenceMap : 1; // 0x3D4(0x1), Mask(0x2)
	uint8_t bDrawDefenceWall : 1; // 0x3D4(0x1), Mask(0x4)
	uint8_t bDrawDefenceAngle : 1; // 0x3D4(0x1), Mask(0x8)
	uint8_t bDrawFireTrace : 1; // 0x3D4(0x1), Mask(0x10)
	uint8_t BitPad_0x3D4_5 : 3; // 0x3D4(0x1)
	bool bEdgeChanged; // 0x3D5(0x1)
	uint8_t Pad_0x3D6[0x2]; // 0x3D6(0x2)
	struct AActor* TargetActor; // 0x3D8(0x8)
	uint8_t Pad_0x3E0[0x70]; // 0x3E0(0x70)
	struct FNavMeshEdgeCoverDataEditor EdgeDataEditor; // 0x450(0x1)
	uint8_t Pad_0x451[0x67]; // 0x451(0x67)
	struct FDTOCoverDataEditor PointDataEditor; // 0x4B8(0x1)
	uint8_t Pad_0x4B9[0x3]; // 0x4B9(0x3)
	struct FVector SincePoint; // 0x4BC(0xC)
	struct FVector UntilPoint; // 0x4C8(0xC)
	float SegmentRatio; // 0x4D4(0x4)
	float SegmentLength; // 0x4D8(0x4)
	uint8_t Pad_0x4DC[0x4]; // 0x4DC(0x4)
};

// Object: Class AIActionPointGeneratorRuntime.CoverPointExclusionVolume
// Size: 0x338 (Inherited: 0x338)
struct ACoverPointExclusionVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(ACoverPointExclusionVolume, "CoverPointExclusionVolume")
};

// Object: Class AIActionPointGeneratorRuntime.CoverSystem
// Size: 0x1D8 (Inherited: 0x28)
struct UCoverSystem : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UCoverSystem, "CoverSystem")

	uint8_t Pad_0x28[0xA0]; // 0x28(0xA0)
	struct TMap<int32_t, struct FCoverPointRuntimeInfo> CoverPointRuntimeInfoMap; // 0xC8(0x50)
	struct TMap<struct TWeakObjectPtr<struct AActor>, struct FTakeCoverPointIDListInfo> ActorTakeCoverPointMap; // 0x118(0x50)
	uint8_t Pad_0x168[0x50]; // 0x168(0x50)
	struct AChangeNotifyingRecastNavMesh* NavMesh; // 0x1B8(0x8)
	uint8_t Pad_0x1C0[0x1]; // 0x1C0(0x1)
	bool bDebugDraw; // 0x1C1(0x1)
	uint8_t Pad_0x1C2[0x6]; // 0x1C2(0x6)
	struct ACoverSystemActor* CoverPointGenerator; // 0x1C8(0x8)
	struct ATacticSystemActor* TacticPointGenerator; // 0x1D0(0x8)

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.RemoveStaleCoverPoints
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x3d08af4
	// Params: [ Num(2) Size(0x18) ]
	void RemoveStaleCoverPoints(struct FVector Origin, struct FVector Extent);

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.RemoveCoverPointsOfObject
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d08a4c
	// Params: [ Num(1) Size(0x8) ]
	void RemoveCoverPointsOfObject(struct AActor* CoverObject);

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.RemoveAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d08a38
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAll();

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.OnNavMeshTilesUpdated
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x3d08cfc
	// Params: [ Num(1) Size(0x50) ]
	void OnNavMeshTilesUpdated(const struct TSet<uint32_t>& UpdatedTiles);

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.OnBeginPlay
	// Flags: [Final|Native|Private]
	// Offset: 0x3d08e88
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginPlay();

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.NotifyCoverActorDied
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d08de0
	// Params: [ Num(1) Size(0x8) ]
	void NotifyCoverActorDied(struct AActor* InCheckActor);

	// Object: Function AIActionPointGeneratorRuntime.CoverSystem.GetCoverPointData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3d08bdc
	// Params: [ Num(3) Size(0x59) ]
	bool GetCoverPointData(int32_t PointID, struct FCoverPointOctreeData& Data);
};

// Object: Class AIActionPointGeneratorRuntime.CoverSystemActor
// Size: 0x538 (Inherited: 0x358)
struct ACoverSystemActor : AActionPointSystemActor
{
	DEFINE_UE_CLASS_HELPERS(ACoverSystemActor, "CoverSystemActor")

	struct UCoverSystem* CoverSystem; // 0x358(0x8)
	struct TArray<struct FDTOCoverData> RawCoverPoints; // 0x360(0x10)
	uint8_t Pad_0x370[0x128]; // 0x370(0x128)
	int32_t GeneratorVersion; // 0x498(0x4)
	uint8_t Pad_0x49C[0x4]; // 0x49C(0x4)
	struct TArray<struct FNavMeshCoverPointPoseSamplingConfig> PoseSamplingConfigs; // 0x4A0(0x10)
	bool bTestEndpointMovable; // 0x4B0(0x1)
	bool bTraceComplex; // 0x4B1(0x1)
	uint8_t TraceChannel; // 0x4B2(0x1)
	uint8_t Pad_0x4B3[0x5]; // 0x4B3(0x5)
	struct TArray<struct FString> RejectedActorNames; // 0x4B8(0x10)
	struct TArray<struct AVolume*> ExclusionVolumes; // 0x4C8(0x10)
	float GeneratableEdgeMinLength; // 0x4D8(0x4)
	float HoleTestOffset; // 0x4DC(0x4)
	float SamplingHeight; // 0x4E0(0x4)
	float SamplingWidth; // 0x4E4(0x4)
	float HalfAbsoluteWidth; // 0x4E8(0x4)
	float HalfShoulderWidth; // 0x4EC(0x4)
	float ScanStep; // 0x4F0(0x4)
	float ScanReach; // 0x4F4(0x4)
	float CoverPointMinDistance; // 0x4F8(0x4)
	float CoverPointGroundOffset; // 0x4FC(0x4)
	float FireTestOffset; // 0x500(0x4)
	float FireLineRadius; // 0x504(0x4)
	float FireLineLength; // 0x508(0x4)
	float DefenceTraceLength; // 0x50C(0x4)
	float DefenceAngleStep; // 0x510(0x4)
	float RemoveDistance; // 0x514(0x4)
	float RemoveAngle; // 0x518(0x4)
	float CliffEdgeDistance; // 0x51C(0x4)
	float StraightCliffErrorTolerance; // 0x520(0x4)
	bool bEnableNavmeshHeightCorrection; // 0x524(0x1)
	bool bUseFastTestNoDefenceRegion; // 0x525(0x1)
	bool bParallelNavMeshTile; // 0x526(0x1)
	bool bParallelDefenceTest; // 0x527(0x1)
	bool bParallelDefenceAngle; // 0x528(0x1)
	bool bParallelCollectBoundaryEdge; // 0x529(0x1)
	bool bParallelGenerateSamplePoint; // 0x52A(0x1)
	bool bParallelGenerateDefenceMapPoint; // 0x52B(0x1)
	bool bParallelCalculatePointDefenceRatio; // 0x52C(0x1)
	bool bParallelCalculatePointDefenceAngle; // 0x52D(0x1)
	uint8_t Pad_0x52E[0x2]; // 0x52E(0x2)
	float CoverPointRuntimeInfoExpireTime; // 0x530(0x4)
	bool bInitOctree; // 0x534(0x1)
	bool bKeepRemoved; // 0x535(0x1)
	bool bDebugDraw; // 0x536(0x1)
	uint8_t Pad_0x537[0x1]; // 0x537(0x1)

	// Object: Function AIActionPointGeneratorRuntime.CoverSystemActor.InitOctreeTree
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d08ebc
	// Params: [ Num(2) Size(0x2) ]
	bool InitOctreeTree(bool bForceRebuild);
};

// Object: Class AIActionPointGeneratorRuntime.DoorPointEditorActor
// Size: 0x328 (Inherited: 0x328)
struct ADoorPointEditorActor : AActionPointEditorActor
{
	DEFINE_UE_CLASS_HELPERS(ADoorPointEditorActor, "DoorPointEditorActor")
};

// Object: Class AIActionPointGeneratorRuntime.GuardPointVolume
// Size: 0x338 (Inherited: 0x338)
struct AGuardPointVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AGuardPointVolume, "GuardPointVolume")

	// Object: Function AIActionPointGeneratorRuntime.GuardPointVolume.SaveToTaticSystemActor
	// Flags: [Final|Native|Public]
	// Offset: 0x3d0d058
	// Params: [ Num(0) Size(0x0) ]
	void SaveToTaticSystemActor();

	// Object: Function AIActionPointGeneratorRuntime.GuardPointVolume.GenTacticalPoints
	// Flags: [Final|Native|Public]
	// Offset: 0x3d0d06c
	// Params: [ Num(0) Size(0x0) ]
	void GenTacticalPoints();
};

// Object: Class AIActionPointGeneratorRuntime.KeyRouteAssistActor
// Size: 0x308 (Inherited: 0x300)
struct AKeyRouteAssistActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AKeyRouteAssistActor, "KeyRouteAssistActor")

	struct AActor* ParentPointEdActor; // 0x300(0x8)
};

// Object: Class AIActionPointGeneratorRuntime.KeyRoutePointEditorActor
// Size: 0x328 (Inherited: 0x328)
struct AKeyRoutePointEditorActor : AActionPointEditorActor
{
	DEFINE_UE_CLASS_HELPERS(AKeyRoutePointEditorActor, "KeyRoutePointEditorActor")
};

// Object: Class AIActionPointGeneratorRuntime.KeyRouteVolume
// Size: 0x338 (Inherited: 0x338)
struct AKeyRouteVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(AKeyRouteVolume, "KeyRouteVolume")

	// Object: Function AIActionPointGeneratorRuntime.KeyRouteVolume.IsInVolume
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x3d0d0b8
	// Params: [ Num(2) Size(0xD) ]
	bool IsInVolume(const struct FVector& Point);
};

// Object: Class AIActionPointGeneratorRuntime.SeekPointStatics
// Size: 0x28 (Inherited: 0x28)
struct USeekPointStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USeekPointStatics, "SeekPointStatics")

	// Object: Function AIActionPointGeneratorRuntime.SeekPointStatics.GetKeyRoutePointIndexsOfDepth
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3d0d1cc
	// Params: [ Num(5) Size(0x31) ]
	static bool GetKeyRoutePointIndexsOfDepth(int32_t FromIndex, struct TArray<struct FKeyRoutePointData>& KeyRoutePoints, int32_t Depth, struct TArray<int32_t>& OutPointIndexs);

	// Object: Function AIActionPointGeneratorRuntime.SeekPointStatics.FindKeyRoutePath
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3d0d36c
	// Params: [ Num(6) Size(0x31) ]
	static bool FindKeyRoutePath(struct ATacticSystemActor* TacticSystem, int32_t FromIndex, int32_t ToIndex, struct TArray<struct FKeyRoutePointData>& KeyRoutePoints, struct TArray<int32_t>& OutPath);

	// Object: Function AIActionPointGeneratorRuntime.SeekPointStatics.CalculateNavPathLength
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3d0d548
	// Params: [ Num(4) Size(0x24) ]
	static float CalculateNavPathLength(struct UObject* InWorldContext, const struct FVector& InFromPoint, const struct FVector& InToPoint);
};

// Object: Class AIActionPointGeneratorRuntime.TacticPointEditorActor
// Size: 0x330 (Inherited: 0x328)
struct ATacticPointEditorActor : AActionPointEditorActor
{
	DEFINE_UE_CLASS_HELPERS(ATacticPointEditorActor, "TacticPointEditorActor")

	uint8_t Pad_0x328[0x8]; // 0x328(0x8)
};

// Object: Class AIActionPointGeneratorRuntime.TacticPointEditorActorInterface
// Size: 0x28 (Inherited: 0x28)
struct ITacticPointEditorActorInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ITacticPointEditorActorInterface, "TacticPointEditorActorInterface")
};

// Object: Class AIActionPointGeneratorRuntime.TacticPointGuardDotActor
// Size: 0x310 (Inherited: 0x300)
struct ATacticPointGuardDotActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ATacticPointGuardDotActor, "TacticPointGuardDotActor")

	struct ATacticPointEditorActor* ParentEditPoint; // 0x300(0x8)
	int32_t IndexOfGuard; // 0x308(0x4)
	bool bArrowDir; // 0x30C(0x1)
	uint8_t Pad_0x30D[0x3]; // 0x30D(0x3)
};

// Object: Class AIActionPointGeneratorRuntime.TacticSystemActor
// Size: 0x4E8 (Inherited: 0x358)
struct ATacticSystemActor : AActionPointSystemActor
{
	DEFINE_UE_CLASS_HELPERS(ATacticSystemActor, "TacticSystemActor")

	struct UCoverSystem* CoverSystem; // 0x358(0x8)
	struct TArray<struct FTacticPointData> TacticPoints; // 0x360(0x10)
	struct TArray<struct FTacticPointData> DoorTacticPoints; // 0x370(0x10)
	struct TArray<struct FTacticPointData> WindowTacticPoints; // 0x380(0x10)
	struct TArray<struct FTacticPointData> EscapeTacticPoints; // 0x390(0x10)
	struct FTacticPointTypeColor TacticPointTypeColor; // 0x3A0(0xD0)
	struct TArray<ETacticPointType> GenerateOrientSafetyTypes; // 0x470(0x10)
	struct TArray<struct FKeyRoutePointData> KeyRoutePoints; // 0x480(0x10)
	struct TMap<int32_t, float> KeyRoutePointsChians; // 0x490(0x50)
	int32_t NumOfOrientPointSafe; // 0x4E0(0x4)
	int32_t LengthOfOrientPointSafe; // 0x4E4(0x4)
};

// Object: Class AIActionPointGeneratorRuntime.WindowPointEditorActor
// Size: 0x328 (Inherited: 0x328)
struct AWindowPointEditorActor : AActionPointEditorActor
{
	DEFINE_UE_CLASS_HELPERS(AWindowPointEditorActor, "WindowPointEditorActor")
};

} // namespace SDK
