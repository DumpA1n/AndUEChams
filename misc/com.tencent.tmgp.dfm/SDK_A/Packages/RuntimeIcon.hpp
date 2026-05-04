#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: RuntimeIcon
// Enums: 1
// Structs: 4
// Classes: 3

struct UTexture;
struct UTextureRenderTarget2D;
struct FAtlasRectangleContainer;
struct FAtlasPackingAlgorithm;
struct FAtlasRectangleData;
struct FRTIConfigParam;
struct URuntimeTile;
struct URuntimeAtlas;
struct URuntimeIconManager;

// Object: Enum RuntimeIcon.ERTI_RT
enum class ERTI_RT : uint8_t
{
	ERTI_RT_Capture = 0,
	ERTI_RT_MergeAtlas = 1,
	ERTI_RT_Downsample = 2,
	ERTI_RT_MAX = 3
};

// Object: ScriptStruct RuntimeIcon.AtlasRectangleContainer
// Size: 0x38 (Inherited: 0x0)
struct FAtlasRectangleContainer
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct RuntimeIcon.AtlasPackingAlgorithm
// Size: 0x8 (Inherited: 0x0)
struct FAtlasPackingAlgorithm
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct RuntimeIcon.AtlasRectangleData
// Size: 0x1C (Inherited: 0x0)
struct FAtlasRectangleData
{
	uint8_t Pad_0x0[0x1C]; // 0x0(0x1C)
};

// Object: ScriptStruct RuntimeIcon.RTIConfigParam
// Size: 0x14 (Inherited: 0x0)
struct FRTIConfigParam
{
	float IconScale; // 0x0(0x4)
	int32_t FrontendMaxNum; // 0x4(0x4)
	int32_t FrontendAtlasSize; // 0x8(0x4)
	int32_t InGameMaxNum; // 0xC(0x4)
	int32_t InGameAtlasSize; // 0x10(0x4)
};

// Object: Class RuntimeIcon.RuntimeTile
// Size: 0x80 (Inherited: 0x28)
struct URuntimeTile : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint64_t TileKey; // 0x30(0x8)
	struct UTexture* Texture; // 0x38(0x8)
	struct FVector2D StartUV; // 0x40(0x8)
	struct FVector2D SizeUV; // 0x48(0x8)
	struct URuntimeAtlas* RuntimeAtlas; // 0x50(0x8)
	struct FVector2D RectangleDataStart; // 0x58(0x8)
	struct FVector2D RawSize; // 0x60(0x8)
	struct TArray<struct TWeakObjectPtr<struct UObject>> RefWeakObjects; // 0x68(0x10)
	uint8_t bHighMesh : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bIsMergeTile : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t bIsStaticIconDownsampled : 1; // 0x7A(0x1), Mask(0x1)
	uint8_t BitPad_0x7A_1 : 7; // 0x7A(0x1)
	uint8_t bIsStaticIcon : 1; // 0x7B(0x1), Mask(0x1)
	uint8_t BitPad_0x7B_1 : 7; // 0x7B(0x1)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	DEFINE_UE_CLASS_HELPERS(URuntimeTile, "RuntimeTile")

};

// Object: Class RuntimeIcon.RuntimeAtlas
// Size: 0xC0 (Inherited: 0x28)
struct URuntimeAtlas : UObject
{
	struct UTextureRenderTarget2D* AtlasRenderTarget2D; // 0x28(0x8)
	uint8_t Pad_0x30[0x40]; // 0x30(0x40)
	struct TMap<uint64_t, struct URuntimeTile*> AllTilesMap; // 0x70(0x50)
	DEFINE_UE_CLASS_HELPERS(URuntimeAtlas, "RuntimeAtlas")

};

// Object: Class RuntimeIcon.RuntimeIconManager
// Size: 0x110 (Inherited: 0x28)
struct URuntimeIconManager : UObject
{
	struct FRTIConfigParam RTIConfigParam; // 0x28(0x14)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct TArray<struct URuntimeAtlas*> AllRuntimeAtlasList_Merge; // 0x40(0x10)
	struct TArray<struct TWeakObjectPtr<struct URuntimeTile>> AllWeakTileList_Merge; // 0x50(0x10)
	struct TMap<uint64_t, struct TWeakObjectPtr<struct URuntimeTile>> AllWeakTileMap_DontMerge; // 0x60(0x50)
	uint8_t Pad_0xB0[0x60]; // 0xB0(0x60)


	// Object: Function RuntimeIcon.RuntimeIconManager.SetIsInGame
	// Flags: [Final|Native|Public]
	// Offset: 0x8c98084
	// Params: [ Num(1) Size(0x1) ]
	void SetIsInGame(uint8_t bInIsInGame);

	// Object: Function RuntimeIcon.RuntimeIconManager.IsInGame
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x8c9804c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInGame();

	// Object: Function RuntimeIcon.RuntimeIconManager.IsFrontend
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf9f8ab8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFrontend();

	// Object: Function RuntimeIcon.RuntimeIconManager.GetIconScale
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x8c98018
	// Params: [ Num(1) Size(0x4) ]
	float GetIconScale();

	// Object: Function RuntimeIcon.RuntimeIconManager.ClearAllAtlas
	// Flags: [Final|Native|Public]
	// Offset: 0x8c98004
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllAtlas();
	DEFINE_UE_CLASS_HELPERS(URuntimeIconManager, "RuntimeIconManager")

};

} // namespace SDK
