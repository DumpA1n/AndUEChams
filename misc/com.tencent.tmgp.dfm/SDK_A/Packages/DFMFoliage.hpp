#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMFoliage
// Enums: 2
// Structs: 2
// Classes: 2

struct UCurveFloat;
struct UStaticMesh;
struct FFoliageData;
struct FFoliageCollisionCategory;
struct AFoliageCollisionData;
struct UFoliageCollision;

// Object: Enum DFMFoliage.EFoliageCollisionName
enum class EFoliageCollisionName : uint8_t
{
	FoliageCollisionName_None = 0,
	FoliageCollisionName_AI = 1,
	FoliageCollisionName_Sound = 2,
	FoliageCollisionType_Max = 3,
	EFoliageCollisionName_MAX = 4
};

// Object: Enum DFMFoliage.EFoliageCollisionType
enum class EFoliageCollisionType : uint8_t
{
	FoliageCollisionType_BoundBox = 0,
	FoliageCollisionType_Voxel = 1,
	FoliageCollisionType_Max = 2
};

// Object: ScriptStruct DFMFoliage.FoliageData
// Size: 0x90 (Inherited: 0x0)
struct FFoliageData
{
	struct FName Category; // 0x0(0x8)
	uint8_t Pad_0x8[0x8]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FBox Box; // 0x40(0x1C)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TSoftObjectPtr<UStaticMesh> FoliageMesh; // 0x60(0x28)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: ScriptStruct DFMFoliage.FoliageCollisionCategory
// Size: 0x58 (Inherited: 0x0)
struct FFoliageCollisionCategory
{
	struct FName Category; // 0x0(0x8)
	struct TSet<struct TSoftObjectPtr<UStaticMesh>> ImportFoliageTypes; // 0x8(0x50)
};

// Object: Class DFMFoliage.FoliageCollisionData
// Size: 0x820 (Inherited: 0x370)
struct AFoliageCollisionData : AActor
{
	EFoliageCollisionName Name; // 0x370(0x1)
	EFoliageCollisionType CollisionType; // 0x371(0x1)
	uint8_t Pad_0x372[0x2]; // 0x372(0x2)
	float VoxelSize; // 0x374(0x4)
	int32_t VoxelNum; // 0x378(0x4)
	uint8_t bDrawDebug : 1; // 0x37C(0x1), Mask(0x1)
	uint8_t BitPad_0x37C_1 : 7; // 0x37C(0x1)
	uint8_t bSneakOpt : 1; // 0x37D(0x1), Mask(0x1)
	uint8_t BitPad_0x37D_1 : 7; // 0x37D(0x1)
	uint8_t Pad_0x37E[0x2]; // 0x37E(0x2)
	float DrawGrassRange; // 0x380(0x4)
	uint8_t Pad_0x384[0x4]; // 0x384(0x4)
	struct UCurveFloat* BlockRateDistanceCurve; // 0x388(0x8)
	struct TArray<struct FFoliageCollisionCategory> ImportFoliage; // 0x390(0x10)
	struct TArray<struct FFoliageData> Foliages; // 0x3A0(0x10)
	struct TArray<struct FFoliageData> SneakFoliages; // 0x3B0(0x10)
	uint8_t Pad_0x3C0[0x460]; // 0x3C0(0x460)


	// Object: Function DFMFoliage.FoliageCollisionData.TestOverlapSVO
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56b134
	// Params: [ Num(3) Size(0x19) ]
	uint8_t TestOverlapSVO(struct FVector Center, struct FVector HalfExtent);

	// Object: Function DFMFoliage.FoliageCollisionData.TestOverlapBound
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56b048
	// Params: [ Num(3) Size(0x19) ]
	uint8_t TestOverlapBound(struct FVector Center, struct FVector HalfExtent);

	// Object: Function DFMFoliage.FoliageCollisionData.TestBlockSVO
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56af5c
	// Params: [ Num(3) Size(0x19) ]
	uint8_t TestBlockSVO(struct FVector Start, struct FVector End);

	// Object: Function DFMFoliage.FoliageCollisionData.TestBlockRateSVO
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56ae74
	// Params: [ Num(3) Size(0x1C) ]
	float TestBlockRateSVO(struct FVector Start, struct FVector End);

	// Object: Function DFMFoliage.FoliageCollisionData.TestBlockRateBound
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56ad8c
	// Params: [ Num(3) Size(0x1C) ]
	float TestBlockRateBound(struct FVector Start, struct FVector End);

	// Object: Function DFMFoliage.FoliageCollisionData.TestBlockBound
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56aca0
	// Params: [ Num(3) Size(0x19) ]
	uint8_t TestBlockBound(struct FVector Start, struct FVector End);

	// Object: Function DFMFoliage.FoliageCollisionData.PreBuild
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56ac8c
	// Params: [ Num(0) Size(0x0) ]
	void PreBuild();

	// Object: Function DFMFoliage.FoliageCollisionData.OverlapSVO
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56ab70
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<struct FIntVector> OverlapSVO(struct FVector Center, struct FVector HalfExtent);

	// Object: Function DFMFoliage.FoliageCollisionData.OverlapBoundCylinder
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56aa3c
	// Params: [ Num(4) Size(0x28) ]
	struct TArray<struct FFoliageData> OverlapBoundCylinder(struct FVector Center, float radius, float HalfHeight);

	// Object: Function DFMFoliage.FoliageCollisionData.OverlapBound
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56a940
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<struct FFoliageData> OverlapBound(struct FVector Center, struct FVector HalfExtent);

	// Object: Function DFMFoliage.FoliageCollisionData.GetSneakOpt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56a908
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetSneakOpt();

	// Object: Function DFMFoliage.FoliageCollisionData.ChangeSneakOpt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56a85c
	// Params: [ Num(1) Size(0x1) ]
	void ChangeSneakOpt(uint8_t _bSneakOpt);

	// Object: Function DFMFoliage.FoliageCollisionData.BuildAndSave
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56a848
	// Params: [ Num(0) Size(0x0) ]
	void BuildAndSave();

	// Object: Function DFMFoliage.FoliageCollisionData.Build
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56a834
	// Params: [ Num(0) Size(0x0) ]
	void Build();

	// Object: Function DFMFoliage.FoliageCollisionData.AddFoliages
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc56a73c
	// Params: [ Num(2) Size(0x18) ]
	void AddFoliages(struct UStaticMesh* FoliageMesh, struct TArray<struct FTransform>& InFoliageInstacenTransforms);

	// Object: Function DFMFoliage.FoliageCollisionData.AddFoliage
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56a624
	// Params: [ Num(2) Size(0x40) ]
	void AddFoliage(struct UStaticMesh* FoliageMesh, struct FTransform Transform);
	DEFINE_UE_CLASS_HELPERS(AFoliageCollisionData, "FoliageCollisionData")

};

// Object: Class DFMFoliage.FoliageCollision
// Size: 0x48 (Inherited: 0x30)
struct UFoliageCollision : UWorldSubsystem
{
	struct TArray<struct AFoliageCollisionData*> FoliageDataTable; // 0x30(0x10)
	uint8_t Pad_0x40[0x8]; // 0x40(0x8)


	// Object: Function DFMFoliage.FoliageCollision.TestOverlap
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56bbe4
	// Params: [ Num(4) Size(0x1D) ]
	uint8_t TestOverlap(EFoliageCollisionName Name, struct FVector Center, struct FVector HalfExtent);

	// Object: Function DFMFoliage.FoliageCollision.TestBlockRate
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56bac0
	// Params: [ Num(4) Size(0x20) ]
	float TestBlockRate(EFoliageCollisionName Name, struct FVector Start, struct FVector End);

	// Object: Function DFMFoliage.FoliageCollision.TestBlock
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56b998
	// Params: [ Num(4) Size(0x1D) ]
	uint8_t TestBlock(EFoliageCollisionName Name, struct FVector Start, struct FVector End);

	// Object: Function DFMFoliage.FoliageCollision.SetEnableState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56b86c
	// Params: [ Num(3) Size(0x3) ]
	void SetEnableState(EFoliageCollisionName Name, uint8_t bStatic, uint8_t bValue);

	// Object: Function DFMFoliage.FoliageCollision.OverlapBoundCylinder
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56b6fc
	// Params: [ Num(5) Size(0x28) ]
	struct TArray<struct FFoliageData> OverlapBoundCylinder(EFoliageCollisionName Name, struct FVector Center, float radius, float HalfHeight);

	// Object: Function DFMFoliage.FoliageCollision.OverlapBound
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0xc56b5c4
	// Params: [ Num(4) Size(0x30) ]
	struct TArray<struct FFoliageData> OverlapBound(EFoliageCollisionName Name, struct FVector Center, struct FVector HalfExtent);

	// Object: Function DFMFoliage.FoliageCollision.Inst
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc56b520
	// Params: [ Num(2) Size(0x10) ]
	static struct UFoliageCollision* Inst(struct UObject* WorldContextObject);

	// Object: Function DFMFoliage.FoliageCollision.GetSneakOpt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56b470
	// Params: [ Num(2) Size(0x2) ]
	uint8_t GetSneakOpt(EFoliageCollisionName Name);

	// Object: Function DFMFoliage.FoliageCollision.GetEnableState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56b37c
	// Params: [ Num(3) Size(0x3) ]
	uint8_t GetEnableState(EFoliageCollisionName Name, uint8_t bStatic);

	// Object: Function DFMFoliage.FoliageCollision.ChangeSneakOpt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc56b294
	// Params: [ Num(2) Size(0x2) ]
	void ChangeSneakOpt(EFoliageCollisionName Name, uint8_t bSneakOpt);
	DEFINE_UE_CLASS_HELPERS(UFoliageCollision, "FoliageCollision")

};

} // namespace SDK
