#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Paper2D
// Enums: 7
// Structs: 13
// Classes: 23

struct FSlateBrush;
struct UBodySetup;
struct UMaterialInterface;
struct USceneComponent;
struct UTexture;
struct UTexture2D;
struct FIntMargin;
struct FPaperFlipbookKeyFrame;
struct FSpriteInstanceData;
struct FPaperSpriteSocket;
struct FPaperSpriteAtlasSlot;
struct FPaperTerrainMaterialRule;
struct FPaperTileInfo;
struct FPaperTileSetTerrain;
struct FSpriteGeometryCollection;
struct FPaperTileMetadata;
struct FSpriteGeometryShape;
struct FSpriteDrawCallRecord;
struct FSpriteAssetInitParameters;
struct UMaterialExpressionSpriteTextureSampler;
struct APaperCharacter;
struct UPaperFlipbook;
struct APaperFlipbookActor;
struct UPaperFlipbookComponent;
struct APaperGroupedSpriteActor;
struct UPaperGroupedSpriteComponent;
struct UPaperRuntimeSettings;
struct UPaperSprite;
struct APaperSpriteActor;
struct UPaperSpriteAtlas;
struct UPaperSpriteBlueprintLibrary;
struct UPaperSpriteComponent;
struct APaperTerrainActor;
struct UPaperTerrainComponent;
struct UPaperTerrainMaterial;
struct UPaperTerrainSplineComponent;
struct UPaperTileLayer;
struct UPaperTileMap;
struct APaperTileMapActor;
struct UPaperTileMapComponent;
struct UPaperTileSet;
struct UTileMapBlueprintLibrary;

// Object: Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t
{
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3
};

// Object: Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t
{
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2
};

// Object: Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t
{
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4
};

// Object: Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t
{
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10
};

// Object: Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t
{
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5
};

// Object: Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t
{
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3
};

// Object: Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t
{
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3
};

// Object: ScriptStruct Paper2D.IntMargin
// Size: 0x10 (Inherited: 0x0)
struct FIntMargin
{
	int32_t Left; // 0x0(0x4)
	int32_t Top; // 0x4(0x4)
	int32_t Right; // 0x8(0x4)
	int32_t Bottom; // 0xC(0x4)
};

// Object: ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size: 0x10 (Inherited: 0x0)
struct FPaperFlipbookKeyFrame
{
	struct UPaperSprite* Sprite; // 0x0(0x8)
	int32_t FrameRun; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Paper2D.SpriteInstanceData
// Size: 0x50 (Inherited: 0x0)
struct FSpriteInstanceData
{
	struct FMatrix Transform; // 0x0(0x40)
	struct UPaperSprite* SourceSprite; // 0x40(0x8)
	struct FColor VertexColor; // 0x48(0x4)
	int32_t MaterialIndex; // 0x4C(0x4)
};

// Object: ScriptStruct Paper2D.PaperSpriteSocket
// Size: 0x40 (Inherited: 0x0)
struct FPaperSpriteSocket
{
	struct FTransform LocalTransform; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	uint8_t Pad_0x38[0x8]; // 0x38(0x8)
};

// Object: ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size: 0x40 (Inherited: 0x0)
struct FPaperSpriteAtlasSlot
{
	struct TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0(0x28)
	int32_t AtlasIndex; // 0x28(0x4)
	int32_t X; // 0x2C(0x4)
	int32_t Y; // 0x30(0x4)
	int32_t Width; // 0x34(0x4)
	int32_t Height; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size: 0x38 (Inherited: 0x0)
struct FPaperTerrainMaterialRule
{
	struct UPaperSprite* StartCap; // 0x0(0x8)
	struct TArray<struct UPaperSprite*> Body; // 0x8(0x10)
	struct UPaperSprite* EndCap; // 0x18(0x8)
	float MinimumAngle; // 0x20(0x4)
	float MaximumAngle; // 0x24(0x4)
	bool bEnableCollision; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float CollisionOffset; // 0x2C(0x4)
	int32_t DrawOrder; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct Paper2D.PaperTileInfo
// Size: 0x10 (Inherited: 0x0)
struct FPaperTileInfo
{
	struct UPaperTileSet* TileSet; // 0x0(0x8)
	int32_t PackedTileIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct Paper2D.PaperTileSetTerrain
// Size: 0x18 (Inherited: 0x0)
struct FPaperTileSetTerrain
{
	struct FString TerrainName; // 0x0(0x10)
	int32_t CenterTileIndex; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct Paper2D.SpriteGeometryCollection
// Size: 0x30 (Inherited: 0x0)
struct FSpriteGeometryCollection
{
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x0(0x10)
	uint8_t GeometryType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t PixelsPerSubdivisionX; // 0x14(0x4)
	int32_t PixelsPerSubdivisionY; // 0x18(0x4)
	bool bAvoidVertexMerging; // 0x1C(0x1)
	uint8_t Pad_0x1D[0x3]; // 0x1D(0x3)
	float AlphaThreshold; // 0x20(0x4)
	float DetailAmount; // 0x24(0x4)
	float SimplifyEpsilon; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct Paper2D.PaperTileMetadata
// Size: 0x40 (Inherited: 0x0)
struct FPaperTileMetadata
{
	struct FName UserDataName; // 0x0(0x8)
	struct FSpriteGeometryCollection CollisionData; // 0x8(0x30)
	uint8_t TerrainMembership[0x4]; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct Paper2D.SpriteGeometryShape
// Size: 0x30 (Inherited: 0x0)
struct FSpriteGeometryShape
{
	ESpriteShapeType ShapeType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TArray<struct FVector2D> Vertices; // 0x8(0x10)
	struct FVector2D BoxSize; // 0x18(0x8)
	struct FVector2D BoxPosition; // 0x20(0x8)
	float Rotation; // 0x28(0x4)
	bool bNegativeWinding; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
};

// Object: ScriptStruct Paper2D.SpriteDrawCallRecord
// Size: 0xD0 (Inherited: 0x0)
struct FSpriteDrawCallRecord
{
	struct FVector Destination; // 0x0(0xC)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct UTexture* BaseTexture; // 0x10(0x8)
	uint8_t Pad_0x18[0x30]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x4)
	uint8_t Pad_0x4C[0x84]; // 0x4C(0x84)
};

// Object: ScriptStruct Paper2D.SpriteAssetInitParameters
// Size: 0x40 (Inherited: 0x0)
struct FSpriteAssetInitParameters
{
	uint8_t Pad_0x0[0x40]; // 0x0(0x40)
};

// Object: Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size: 0xA0 (Inherited: 0x80)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D
{
	DEFINE_UE_CLASS_HELPERS(UMaterialExpressionSpriteTextureSampler, "MaterialExpressionSpriteTextureSampler")

	bool bSampleAdditionalTextures; // 0x7C(0x1)
	int32_t AdditionalSlotIndex; // 0x80(0x4)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct FText SlotDisplayName; // 0x88(0x18)
};

// Object: Class Paper2D.PaperCharacter
// Size: 0x5C0 (Inherited: 0x5C0)
struct APaperCharacter : ACharacter
{
	DEFINE_UE_CLASS_HELPERS(APaperCharacter, "PaperCharacter")

	struct UPaperFlipbookComponent* Sprite; // 0x5B8(0x8)
};

// Object: Class Paper2D.PaperFlipbook
// Size: 0x50 (Inherited: 0x28)
struct UPaperFlipbook : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperFlipbook, "PaperFlipbook")

	float FramesPerSecond; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x8)
	uint8_t CollisionSource; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)

	// Object: Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a592c
	// Params: [ Num(2) Size(0x5) ]
	bool IsValidKeyFrameIndex(int32_t Index);

	// Object: Function Paper2D.PaperFlipbook.GetTotalDuration
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5ca8
	// Params: [ Num(1) Size(0x4) ]
	float GetTotalDuration();

	// Object: Function Paper2D.PaperFlipbook.GetSpriteAtTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5ab8
	// Params: [ Num(3) Size(0x10) ]
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);

	// Object: Function Paper2D.PaperFlipbook.GetSpriteAtFrame
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5a08
	// Params: [ Num(2) Size(0x10) ]
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);

	// Object: Function Paper2D.PaperFlipbook.GetNumKeyFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a59ec
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumKeyFrames();

	// Object: Function Paper2D.PaperFlipbook.GetNumFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5cdc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumFrames();

	// Object: Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5bb0
	// Params: [ Num(3) Size(0xC) ]
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);
};

// Object: Class Paper2D.PaperFlipbookActor
// Size: 0x308 (Inherited: 0x300)
struct APaperFlipbookActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APaperFlipbookActor, "PaperFlipbookActor")

	struct UPaperFlipbookComponent* RenderComponent; // 0x300(0x8)
};

// Object: Class Paper2D.PaperFlipbookComponent
// Size: 0x710 (Inherited: 0x6D0)
struct UPaperFlipbookComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UPaperFlipbookComponent, "PaperFlipbookComponent")

	struct UPaperFlipbook* SourceFlipbook; // 0x6C8(0x8)
	struct UMaterialInterface* Material; // 0x6D0(0x8)
	float PlayRate; // 0x6D8(0x4)
	uint8_t bLooping : 1; // 0x6DC(0x1), Mask(0x1)
	uint8_t bReversePlayback : 1; // 0x6DC(0x1), Mask(0x2)
	uint8_t bPlaying : 1; // 0x6DC(0x1), Mask(0x4)
	float AccumulatedTime; // 0x6E0(0x4)
	int32_t CachedFrameIndex; // 0x6E4(0x4)
	struct FLinearColor SpriteColor; // 0x6E8(0x10)
	struct UBodySetup* CachedBodySetup; // 0x6F8(0x8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x700(0x10)

	// Object: Function Paper2D.PaperFlipbookComponent.Stop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a63b8
	// Params: [ Num(0) Size(0x0) ]
	void Stop();

	// Object: Function Paper2D.PaperFlipbookComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a641c
	// Params: [ Num(1) Size(0x10) ]
	void SetSpriteColor(struct FLinearColor NewColor);

	// Object: Function Paper2D.PaperFlipbookComponent.SetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a5f74
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayRate(float NewRate);

	// Object: Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a625c
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);

	// Object: Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a6138
	// Params: [ Num(2) Size(0x5) ]
	void SetPlaybackPosition(float NewPosition, bool bFireEvents);

	// Object: Function Paper2D.PaperFlipbookComponent.SetNewTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a5e98
	// Params: [ Num(1) Size(0x4) ]
	void SetNewTime(float NewTime);

	// Object: Function Paper2D.PaperFlipbookComponent.SetLooping
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a6054
	// Params: [ Num(1) Size(0x1) ]
	void SetLooping(bool bNewLooping);

	// Object: Function Paper2D.PaperFlipbookComponent.SetFlipbook
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x40a6520
	// Params: [ Num(2) Size(0x9) ]
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook);

	// Object: Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a63cc
	// Params: [ Num(0) Size(0x0) ]
	void ReverseFromEnd();

	// Object: Function Paper2D.PaperFlipbookComponent.Reverse
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a63e0
	// Params: [ Num(0) Size(0x0) ]
	void Reverse();

	// Object: Function Paper2D.PaperFlipbookComponent.PlayFromStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a63f4
	// Params: [ Num(0) Size(0x0) ]
	void PlayFromStart();

	// Object: Function Paper2D.PaperFlipbookComponent.Play
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a6408
	// Params: [ Num(0) Size(0x0) ]
	void Play();

	// Object: Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// Flags: [Final|Native|Protected]
	// Offset: 0x40a5d54
	// Params: [ Num(1) Size(0x8) ]
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook);

	// Object: Function Paper2D.PaperFlipbookComponent.IsReversing
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a6348
	// Params: [ Num(1) Size(0x1) ]
	bool IsReversing();

	// Object: Function Paper2D.PaperFlipbookComponent.IsPlaying
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a6380
	// Params: [ Num(1) Size(0x1) ]
	bool IsPlaying();

	// Object: Function Paper2D.PaperFlipbookComponent.IsLooping
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a601c
	// Params: [ Num(1) Size(0x1) ]
	bool IsLooping();

	// Object: Function Paper2D.PaperFlipbookComponent.GetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a64c4
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetSpriteColor();

	// Object: Function Paper2D.PaperFlipbookComponent.GetPlayRate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5f40
	// Params: [ Num(1) Size(0x4) ]
	float GetPlayRate();

	// Object: Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a6228
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlaybackPositionInFrames();

	// Object: Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a6104
	// Params: [ Num(1) Size(0x4) ]
	float GetPlaybackPosition();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5e30
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFlipbookLengthInFrames();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5e64
	// Params: [ Num(1) Size(0x4) ]
	float GetFlipbookLength();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a5dfc
	// Params: [ Num(1) Size(0x4) ]
	float GetFlipbookFramerate();

	// Object: Function Paper2D.PaperFlipbookComponent.GetFlipbook
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a64e4
	// Params: [ Num(1) Size(0x8) ]
	struct UPaperFlipbook* GetFlipbook();
};

// Object: Class Paper2D.PaperGroupedSpriteActor
// Size: 0x308 (Inherited: 0x300)
struct APaperGroupedSpriteActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APaperGroupedSpriteActor, "PaperGroupedSpriteActor")

	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x300(0x8)
};

// Object: Class Paper2D.PaperGroupedSpriteComponent
// Size: 0x700 (Inherited: 0x6D0)
struct UPaperGroupedSpriteComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UPaperGroupedSpriteComponent, "PaperGroupedSpriteComponent")

	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x6C8(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x6D8(0x10)
	uint8_t Pad_0x6F0[0x10]; // 0x6F0(0x10)

	// Object: Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// Flags: [Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x40a6a08
	// Params: [ Num(6) Size(0x44) ]
	bool UpdateInstanceTransform(int32_t InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// Flags: [Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a68c4
	// Params: [ Num(4) Size(0x16) ]
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a6710
	// Params: [ Num(1) Size(0xC) ]
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x40a6808
	// Params: [ Num(2) Size(0x5) ]
	bool RemoveInstance(int32_t InstanceIndex);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a6c20
	// Params: [ Num(4) Size(0x42) ]
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace);

	// Object: Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a67b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetInstanceCount();

	// Object: Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x40a67ec
	// Params: [ Num(0) Size(0x0) ]
	void ClearInstances();

	// Object: Function Paper2D.PaperGroupedSpriteComponent.AddInstance
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x40a6d94
	// Params: [ Num(5) Size(0x50) ]
	int32_t AddInstance(const struct FTransform& Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color);
};

// Object: Class Paper2D.PaperRuntimeSettings
// Size: 0x30 (Inherited: 0x28)
struct UPaperRuntimeSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperRuntimeSettings, "PaperRuntimeSettings")

	bool bEnableSpriteAtlasGroups; // 0x28(0x1)
	bool bEnableTerrainSplineEditing; // 0x29(0x1)
	bool bResizeSpriteDataToMatchTextures; // 0x2A(0x1)
	uint8_t Pad_0x2B[0x5]; // 0x2B(0x5)
};

// Object: Class Paper2D.PaperSprite
// Size: 0xA8 (Inherited: 0x28)
struct UPaperSprite : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperSprite, "PaperSprite")

	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FVector2D BakedSourceUV; // 0x48(0x8)
	struct FVector2D BakedSourceDimension; // 0x50(0x8)
	struct UTexture2D* BakedSourceTexture; // 0x58(0x8)
	struct UMaterialInterface* DefaultMaterial; // 0x60(0x8)
	struct UMaterialInterface* AlternateMaterial; // 0x68(0x8)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x70(0x10)
	uint8_t SpriteCollisionDomain; // 0x80(0x1)
	uint8_t Pad_0x81[0x3]; // 0x81(0x3)
	float PixelsPerUnrealUnit; // 0x84(0x4)
	struct UBodySetup* BodySetup; // 0x88(0x8)
	int32_t AlternateMaterialSplitIndex; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct TArray<struct FVector4> BakedRenderData; // 0x98(0x10)
};

// Object: Class Paper2D.PaperSpriteActor
// Size: 0x308 (Inherited: 0x300)
struct APaperSpriteActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APaperSpriteActor, "PaperSpriteActor")

	struct UPaperSpriteComponent* RenderComponent; // 0x300(0x8)
};

// Object: Class Paper2D.PaperSpriteAtlas
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteAtlas : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperSpriteAtlas, "PaperSpriteAtlas")
};

// Object: Class Paper2D.PaperSpriteBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPaperSpriteBlueprintLibrary, "PaperSpriteBlueprintLibrary")

	// Object: Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a728c
	// Params: [ Num(4) Size(0xA0) ]
	static struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height);

	// Object: Function Paper2D.PaperSpriteBlueprintLibrary.GetTopLeftPosInPercent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a7138
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetTopLeftPosInPercent(struct UPaperSprite* Sprite);

	// Object: Function Paper2D.PaperSpriteBlueprintLibrary.GetSourceTextureOfSprite
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a71e4
	// Params: [ Num(2) Size(0x10) ]
	static struct UTexture2D* GetSourceTextureOfSprite(struct UPaperSprite* Sprite);

	// Object: Function Paper2D.PaperSpriteBlueprintLibrary.GetBottomRightPosInPercent
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a708c
	// Params: [ Num(2) Size(0x10) ]
	static struct FVector2D GetBottomRightPosInPercent(struct UPaperSprite* Sprite);
};

// Object: Class Paper2D.PaperSpriteComponent
// Size: 0x6F0 (Inherited: 0x6D0)
struct UPaperSpriteComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UPaperSpriteComponent, "PaperSpriteComponent")

	struct UPaperSprite* SourceSprite; // 0x6C8(0x8)
	struct UMaterialInterface* MaterialOverride; // 0x6D0(0x8)
	struct FLinearColor SpriteColor; // 0x6D8(0x10)

	// Object: Function Paper2D.PaperSpriteComponent.SetSpriteColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a74dc
	// Params: [ Num(1) Size(0x10) ]
	void SetSpriteColor(struct FLinearColor NewColor);

	// Object: Function Paper2D.PaperSpriteComponent.SetSprite
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x40a75c0
	// Params: [ Num(2) Size(0x9) ]
	bool SetSprite(struct UPaperSprite* NewSprite);

	// Object: Function Paper2D.PaperSpriteComponent.GetSprite
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a7584
	// Params: [ Num(1) Size(0x8) ]
	struct UPaperSprite* GetSprite();
};

// Object: Class Paper2D.PaperTerrainActor
// Size: 0x318 (Inherited: 0x300)
struct APaperTerrainActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APaperTerrainActor, "PaperTerrainActor")

	struct USceneComponent* DummyRoot; // 0x300(0x8)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x308(0x8)
	struct UPaperTerrainComponent* RenderComponent; // 0x310(0x8)
};

// Object: Class Paper2D.PaperTerrainComponent
// Size: 0x6D0 (Inherited: 0x680)
struct UPaperTerrainComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UPaperTerrainComponent, "PaperTerrainComponent")

	struct UPaperTerrainMaterial* TerrainMaterial; // 0x678(0x8)
	bool bClosedSpline; // 0x680(0x1)
	bool bFilledSpline; // 0x681(0x1)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x688(0x8)
	int32_t RandomSeed; // 0x690(0x4)
	float SegmentOverlapAmount; // 0x694(0x4)
	struct FLinearColor TerrainColor; // 0x698(0x10)
	int32_t ReparamStepsPerSegment; // 0x6A8(0x4)
	uint8_t SpriteCollisionDomain; // 0x6AC(0x1)
	uint8_t Pad_0x6AF[0x1]; // 0x6AF(0x1)
	float CollisionThickness; // 0x6B0(0x4)
	uint8_t Pad_0x6B4[0x4]; // 0x6B4(0x4)
	struct UBodySetup* CachedBodySetup; // 0x6B8(0x8)
	uint8_t Pad_0x6C0[0x10]; // 0x6C0(0x10)

	// Object: Function Paper2D.PaperTerrainComponent.SetTerrainColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a76a8
	// Params: [ Num(1) Size(0x10) ]
	void SetTerrainColor(struct FLinearColor NewColor);
};

// Object: Class Paper2D.PaperTerrainMaterial
// Size: 0x48 (Inherited: 0x30)
struct UPaperTerrainMaterial : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UPaperTerrainMaterial, "PaperTerrainMaterial")

	struct TArray<struct FPaperTerrainMaterialRule> rules; // 0x30(0x10)
	struct UPaperSprite* InteriorFill; // 0x40(0x8)
};

// Object: Class Paper2D.PaperTerrainSplineComponent
// Size: 0x780 (Inherited: 0x770)
struct UPaperTerrainSplineComponent : USplineComponent
{
	DEFINE_UE_CLASS_HELPERS(UPaperTerrainSplineComponent, "PaperTerrainSplineComponent")

	uint8_t Pad_0x770[0x10]; // 0x770(0x10)
};

// Object: Class Paper2D.PaperTileLayer
// Size: 0x98 (Inherited: 0x28)
struct UPaperTileLayer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperTileLayer, "PaperTileLayer")

	struct FText LayerName; // 0x28(0x18)
	int32_t LayerWidth; // 0x40(0x4)
	int32_t LayerHeight; // 0x44(0x4)
	uint8_t bHiddenInGame : 1; // 0x48(0x1), Mask(0x1)
	uint8_t bLayerCollides : 1; // 0x48(0x1), Mask(0x2)
	uint8_t bOverrideCollisionThickness : 1; // 0x48(0x1), Mask(0x4)
	uint8_t bOverrideCollisionOffset : 1; // 0x48(0x1), Mask(0x8)
	uint8_t BitPad_0x48_4 : 4; // 0x48(0x1)
	uint8_t Pad_0x49[0x3]; // 0x49(0x3)
	float CollisionThicknessOverride; // 0x4C(0x4)
	float CollisionOffsetOverride; // 0x50(0x4)
	struct FLinearColor LayerColor; // 0x54(0x10)
	int32_t AllocatedWidth; // 0x64(0x4)
	int32_t AllocatedHeight; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70(0x10)
	struct UPaperTileSet* TileSet; // 0x80(0x8)
	struct TArray<int32_t> AllocatedGrid; // 0x88(0x10)
};

// Object: Class Paper2D.PaperTileMap
// Size: 0xA8 (Inherited: 0x28)
struct UPaperTileMap : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperTileMap, "PaperTileMap")

	int32_t MapWidth; // 0x28(0x4)
	int32_t MapHeight; // 0x2C(0x4)
	int32_t TileWidth; // 0x30(0x4)
	int32_t TileHeight; // 0x34(0x4)
	float PixelsPerUnrealUnit; // 0x38(0x4)
	float SeparationPerTileX; // 0x3C(0x4)
	float SeparationPerTileY; // 0x40(0x4)
	float SeparationPerLayer; // 0x44(0x4)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48(0x28)
	struct UMaterialInterface* Material; // 0x70(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x4)
	uint8_t SpriteCollisionDomain; // 0x8C(0x1)
	uint8_t ProjectionMode; // 0x8D(0x1)
	uint8_t Pad_0x8E[0x2]; // 0x8E(0x2)
	int32_t HexSideLength; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct UBodySetup* BodySetup; // 0x98(0x8)
	int32_t LayerNameIndex; // 0xA0(0x4)
	uint8_t Pad_0xA4[0x4]; // 0xA4(0x4)
};

// Object: Class Paper2D.PaperTileMapActor
// Size: 0x308 (Inherited: 0x300)
struct APaperTileMapActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(APaperTileMapActor, "PaperTileMapActor")

	struct UPaperTileMapComponent* RenderComponent; // 0x300(0x8)
};

// Object: Class Paper2D.PaperTileMapComponent
// Size: 0x720 (Inherited: 0x6D0)
struct UPaperTileMapComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UPaperTileMapComponent, "PaperTileMapComponent")

	int32_t MapWidth; // 0x6C4(0x4)
	int32_t MapHeight; // 0x6C8(0x4)
	int32_t TileWidth; // 0x6CC(0x4)
	int32_t TileHeight; // 0x6D0(0x4)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x6D8(0x8)
	struct UMaterialInterface* Material; // 0x6E0(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x6E8(0x10)
	struct FLinearColor TileMapColor; // 0x6F8(0x10)
	int32_t UseSingleLayerIndex; // 0x708(0x4)
	bool bUseSingleLayer; // 0x70C(0x1)
	struct UPaperTileMap* TileMap; // 0x710(0x8)
	uint8_t Pad_0x71D[0x3]; // 0x71D(0x3)

	// Object: Function Paper2D.PaperTileMapComponent.SetTileMapColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a8234
	// Params: [ Num(1) Size(0x10) ]
	void SetTileMapColor(struct FLinearColor NewColor);

	// Object: Function Paper2D.PaperTileMapComponent.SetTileMap
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x40a881c
	// Params: [ Num(2) Size(0x9) ]
	bool SetTileMap(struct UPaperTileMap* NewTileMap);

	// Object: Function Paper2D.PaperTileMapComponent.SetTile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a842c
	// Params: [ Num(4) Size(0x20) ]
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue);

	// Object: Function Paper2D.PaperTileMapComponent.SetLayerColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x40a8090
	// Params: [ Num(2) Size(0x14) ]
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer);

	// Object: Function Paper2D.PaperTileMapComponent.SetLayerCollision
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a7888
	// Params: [ Num(7) Size(0x15) ]
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision);

	// Object: Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a7ad8
	// Params: [ Num(2) Size(0x5) ]
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);

	// Object: Function Paper2D.PaperTileMapComponent.ResizeMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a8348
	// Params: [ Num(2) Size(0x8) ]
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);

	// Object: Function Paper2D.PaperTileMapComponent.RebuildCollision
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a7874
	// Params: [ Num(0) Size(0x0) ]
	void RebuildCollision();

	// Object: Function Paper2D.PaperTileMapComponent.OwnsTileMap
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a88d8
	// Params: [ Num(1) Size(0x1) ]
	bool OwnsTileMap();

	// Object: Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a807c
	// Params: [ Num(0) Size(0x0) ]
	void MakeTileMapEditable();

	// Object: Function Paper2D.PaperTileMapComponent.GetTilePolygon
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a7bc8
	// Params: [ Num(5) Size(0x1D) ]
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace);

	// Object: Function Paper2D.PaperTileMapComponent.GetTileMapColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a82dc
	// Params: [ Num(1) Size(0x10) ]
	struct FLinearColor GetTileMapColor();

	// Object: Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a7f04
	// Params: [ Num(5) Size(0x1C) ]
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);

	// Object: Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a7d8c
	// Params: [ Num(5) Size(0x1C) ]
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);

	// Object: Function Paper2D.PaperTileMapComponent.GetTile
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a8598
	// Params: [ Num(4) Size(0x20) ]
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);

	// Object: Function Paper2D.PaperTileMapComponent.GetMapSize
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x40a86c8
	// Params: [ Num(3) Size(0xC) ]
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);

	// Object: Function Paper2D.PaperTileMapComponent.GetLayerColor
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x40a8178
	// Params: [ Num(2) Size(0x14) ]
	struct FLinearColor GetLayerColor(int32_t Layer);

	// Object: Function Paper2D.PaperTileMapComponent.CreateNewTileMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a8910
	// Params: [ Num(6) Size(0x15) ]
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer);

	// Object: Function Paper2D.PaperTileMapComponent.AddNewLayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x40a8314
	// Params: [ Num(1) Size(0x8) ]
	struct UPaperTileLayer* AddNewLayer();
};

// Object: Class Paper2D.PaperTileSet
// Size: 0xA8 (Inherited: 0x28)
struct UPaperTileSet : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPaperTileSet, "PaperTileSet")

	struct FIntPoint TileSize; // 0x28(0x8)
	struct UTexture2D* TileSheet; // 0x30(0x8)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FIntMargin BorderMargin; // 0x48(0x10)
	struct FIntPoint PerTileSpacing; // 0x58(0x8)
	struct FIntPoint DrawingOffset; // 0x60(0x8)
	int32_t WidthInTiles; // 0x68(0x4)
	int32_t HeightInTiles; // 0x6C(0x4)
	int32_t AllocatedWidth; // 0x70(0x4)
	int32_t AllocatedHeight; // 0x74(0x4)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88(0x10)
	int32_t TileWidth; // 0x98(0x4)
	int32_t TileHeight; // 0x9C(0x4)
	int32_t Margin; // 0xA0(0x4)
	int32_t Spacing; // 0xA4(0x4)
};

// Object: Class Paper2D.TileMapBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UTileMapBlueprintLibrary, "TileMapBlueprintLibrary")

	// Object: Function Paper2D.TileMapBlueprintLibrary.MakeTile
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a8d60
	// Params: [ Num(6) Size(0x28) ]
	static struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);

	// Object: Function Paper2D.TileMapBlueprintLibrary.GetTileUserData
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a9218
	// Params: [ Num(2) Size(0x18) ]
	static struct FName GetTileUserData(struct FPaperTileInfo Tile);

	// Object: Function Paper2D.TileMapBlueprintLibrary.GetTileTransform
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a9158
	// Params: [ Num(2) Size(0x40) ]
	static struct FTransform GetTileTransform(struct FPaperTileInfo Tile);

	// Object: Function Paper2D.TileMapBlueprintLibrary.BreakTile
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure]
	// Offset: 0x40a8f2c
	// Params: [ Num(6) Size(0x23) ]
	static void BreakTile(struct FPaperTileInfo Tile, int32_t& TileIndex, struct UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD);
};

} // namespace SDK
