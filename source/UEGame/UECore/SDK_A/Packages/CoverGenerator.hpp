#pragma once

#include "../CoreUObject_classes.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: CoverGenerator
// Enums: 0
// Structs: 0
// Classes: 8

struct AController;
struct ANavigationData;
struct AVolume;
struct UEnvQueryContext;
struct ACoverGenerator;
struct UCoverPoint;
struct UEnvQueryGenerator_CoverFMemory;
struct UEnvQueryItemType_Cover;
struct UEnvQueryTest_CoverPointFree;
struct UEnvQueryTest_IsCoverPosition;
struct UEnvQueryTest_ParallelToCoverDirection;
struct UEnvQueryTest_TraceDistance;

// Object: Class CoverGenerator.CoverGenerator
// Size: 0x3A0 (Inherited: 0x300)
struct ACoverGenerator : AInfo
{
	DEFINE_UE_CLASS_HELPERS(ACoverGenerator, "CoverGenerator")

	bool bRegenerateAtBeginPlay; // 0x300(0x1)
	bool bRegenerateAtNavigationRebuilt; // 0x301(0x1)
	uint8_t Pad_0x302[0x2]; // 0x302(0x2)
	float SegmentLength; // 0x304(0x4)
	float MaxSegDist; // 0x308(0x4)
	float CharHeight; // 0x30C(0x4)
	float StepDistTrace; // 0x310(0x4)
	float TraceLength; // 0x314(0x4)
	float MinSpaceBetweenValidPoints; // 0x318(0x4)
	float SphereSize; // 0x31C(0x4)
	float WidthMaxAgent; // 0x320(0x4)
	float HeightMaxCrouching; // 0x324(0x4)
	float HeightMaxStanding; // 0x328(0x4)
	float OffsetWhenLeaningSides; // 0x32C(0x4)
	float OffsetFrontAim; // 0x330(0x4)
	float EscapeRadius; // 0x334(0x4)
	int32_t MinCoverNum; // 0x338(0x4)
	float MinEscapeStep; // 0x33C(0x4)
	struct AVolume* VolumeClass; // 0x340(0x8)
	bool bDraw1AllSegmentPointsTested; // 0x348(0x1)
	bool bDraw2SegmentPointsWithinBounds; // 0x349(0x1)
	bool bDraw3SimpleCoverGeometryTest; // 0x34A(0x1)
	bool bDraw4SecondPassTracesSides; // 0x34B(0x1)
	bool bDraw4SecondPassTracesSidesFrontAndBottom; // 0x34C(0x1)
	bool bDraw5SecondPassArrows; // 0x34D(0x1)
	bool DebugDrawAllPoints; // 0x34E(0x1)
	bool DebugDrawAllBusyPoints; // 0x34F(0x1)
	bool DebugDisplayLog; // 0x350(0x1)
	uint8_t Pad_0x351[0x3]; // 0x351(0x3)
	float DebugDistance; // 0x354(0x4)
	bool bDrawOctreeBounds; // 0x358(0x1)
	bool bDebugVerts; // 0x359(0x1)
	bool bDebugEdgeVerts; // 0x35A(0x1)
	bool bDebugPolyVerts; // 0x35B(0x1)
	uint8_t Pad_0x35C[0xC]; // 0x35C(0xC)
	struct TArray<struct UCoverPoint*> AllCoverPoints; // 0x368(0x10)
	struct TArray<struct UCoverPoint*> CoverPointsCurrentlyUsed; // 0x378(0x10)
	struct TArray<struct FVector> EscapesPoints; // 0x388(0x10)
	uint8_t Pad_0x398[0x8]; // 0x398(0x8)

	// Object: Function CoverGenerator.CoverGenerator.ReleaseCover
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d1c3fc
	// Params: [ Num(1) Size(0x8) ]
	void ReleaseCover(struct UCoverPoint* CoverPoint);

	// Object: Function CoverGenerator.CoverGenerator.OnNavigationGenerationFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x3d1c04c
	// Params: [ Num(1) Size(0x8) ]
	void OnNavigationGenerationFinished(struct ANavigationData* NavData);

	// Object: Function CoverGenerator.CoverGenerator.OccupyCover
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d1c4a4
	// Params: [ Num(3) Size(0x11) ]
	bool OccupyCover(struct UCoverPoint* CoverPoint, struct AController* Controller);

	// Object: Function CoverGenerator.CoverGenerator.IsFreeCoverPoint
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3d1c348
	// Params: [ Num(2) Size(0x9) ]
	bool IsFreeCoverPoint(struct UCoverPoint* CoverPoint);

	// Object: Function CoverGenerator.CoverGenerator.GetCoverWithinBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3d1c258
	// Params: [ Num(2) Size(0x30) ]
	struct TArray<struct UCoverPoint*> GetCoverWithinBox(const struct FBox& BoxIn);

	// Object: Function CoverGenerator.CoverGenerator.GetCoverGenerator
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x3d1c0f4
	// Params: [ Num(2) Size(0x10) ]
	static struct ACoverGenerator* GetCoverGenerator(struct UObject* WorldContextObject);

	// Object: Function CoverGenerator.CoverGenerator.CoverExistWithinBox
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x3d1c19c
	// Params: [ Num(2) Size(0x1D) ]
	bool CoverExistWithinBox(const struct FBox& BoxIn);
};

// Object: Class CoverGenerator.CoverPoint
// Size: 0x60 (Inherited: 0x28)
struct UCoverPoint : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCoverPoint, "CoverPoint")

	struct FVector Location; // 0x28(0xC)
	struct FVector _DirectionToWall; // 0x34(0xC)
	struct FRotator RotatorXToWall; // 0x40(0xC)
	bool bLeftCoverStanding; // 0x4C(0x1)
	bool bRightCoverStanding; // 0x4D(0x1)
	bool bLeftCoverCrouched; // 0x4E(0x1)
	bool bRightCoverCrouched; // 0x4F(0x1)
	bool bFrontCoverCrouched; // 0x50(0x1)
	bool bCrouchedCover; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct AController* OccupiedBy; // 0x58(0x8)
};

// Object: Class CoverGenerator.EnvQueryGenerator_CoverFMemory
// Size: 0xC8 (Inherited: 0x50)
struct UEnvQueryGenerator_CoverFMemory : UEnvQueryGenerator
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryGenerator_CoverFMemory, "EnvQueryGenerator_CoverFMemory")

	struct FAIDataProviderFloatValue SquareExtent; // 0x50(0x38)
	struct FAIDataProviderFloatValue BoxHeight; // 0x88(0x38)
	struct UEnvQueryContext* GenerateAround; // 0xC0(0x8)
};

// Object: Class CoverGenerator.EnvQueryItemType_Cover
// Size: 0x30 (Inherited: 0x30)
struct UEnvQueryItemType_Cover : UEnvQueryItemType_VectorBase
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryItemType_Cover, "EnvQueryItemType_Cover")
};

// Object: Class CoverGenerator.EnvQueryTest_CoverPointFree
// Size: 0x1F8 (Inherited: 0x1F8)
struct UEnvQueryTest_CoverPointFree : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_CoverPointFree, "EnvQueryTest_CoverPointFree")
};

// Object: Class CoverGenerator.EnvQueryTest_IsCoverPosition
// Size: 0x2D8 (Inherited: 0x1F8)
struct UEnvQueryTest_IsCoverPosition : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_IsCoverPosition, "EnvQueryTest_IsCoverPosition")

	struct FEnvTraceData TraceData; // 0x1F8(0x30)
	struct UEnvQueryContext* Context; // 0x228(0x8)
	struct FAIDataProviderFloatValue ContextHorizontalDistanceOffset; // 0x230(0x38)
	struct FAIDataProviderFloatValue ContextVerticalDistanceOffset; // 0x268(0x38)
	struct FAIDataProviderBoolValue DebugData; // 0x2A0(0x38)
};

// Object: Class CoverGenerator.EnvQueryTest_ParallelToCoverDirection
// Size: 0x238 (Inherited: 0x1F8)
struct UEnvQueryTest_ParallelToCoverDirection : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_ParallelToCoverDirection, "EnvQueryTest_ParallelToCoverDirection")

	struct UEnvQueryContext* Context; // 0x1F8(0x8)
	struct FAIDataProviderFloatValue MaxEpsilon; // 0x200(0x38)
};

// Object: Class CoverGenerator.EnvQueryTest_TraceDistance
// Size: 0x2A0 (Inherited: 0x1F8)
struct UEnvQueryTest_TraceDistance : UEnvQueryTest
{
	DEFINE_UE_CLASS_HELPERS(UEnvQueryTest_TraceDistance, "EnvQueryTest_TraceDistance")

	struct FEnvTraceData TraceData; // 0x1F8(0x30)
	struct UEnvQueryContext* Context; // 0x228(0x8)
	struct FAIDataProviderFloatValue MaxTraceDistance; // 0x230(0x38)
	struct FAIDataProviderFloatValue VerticalOffset; // 0x268(0x38)
};

} // namespace SDK
