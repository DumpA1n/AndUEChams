#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: VisibilityCache
// Enums: 0
// Structs: 5
// Classes: 2

struct FGridXYResult;
struct FGridXYBitMask;
struct FGridID;
struct FGridZList;
struct FGridVisibilityData;
struct UVisibilityCache;
struct UVcrCache;

// Object: ScriptStruct VisibilityCache.GridXYResult
// Size: 0x10 (Inherited: 0x0)
struct FGridXYResult
{
	struct TArray<uint64_t> GridXYResult; // 0x0(0x10)
};

// Object: ScriptStruct VisibilityCache.GridXYBitMask
// Size: 0x10 (Inherited: 0x0)
struct FGridXYBitMask
{
	struct TArray<uint8_t> GridXYBitMask; // 0x0(0x10)
};

// Object: ScriptStruct VisibilityCache.GridID
// Size: 0x10 (Inherited: 0x0)
struct FGridID
{
	struct TArray<int16_t> GridID; // 0x0(0x10)
};

// Object: ScriptStruct VisibilityCache.GridZList
// Size: 0x10 (Inherited: 0x0)
struct FGridZList
{
	struct TArray<int32_t> GridZList; // 0x0(0x10)
};

// Object: ScriptStruct VisibilityCache.GridVisibilityData
// Size: 0x50 (Inherited: 0x0)
struct FGridVisibilityData
{
	struct TMap<uint16_t, uint16_t> Data; // 0x0(0x50)
};

// Object: Class VisibilityCache.VisibilityCache
// Size: 0x1A8 (Inherited: 0x28)
struct UVisibilityCache : UObject
{
	float GridSize; // 0x28(0x4)
	float MinVisibilityRatio; // 0x2C(0x4)
	uint8_t bEnable : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t bUncachedInvisible : 1; // 0x31(0x1), Mask(0x1)
	uint8_t BitPad_0x31_1 : 7; // 0x31(0x1)
	uint8_t Pad_0x32[0x6]; // 0x32(0x6)
	struct TMap<struct FIntPoint, struct FGridVisibilityData> GridsVisibilityData; // 0x38(0x50)
	struct TMap<struct FName, uint16_t> NameIndexMap; // 0x88(0x50)
	int16_t ValidGridCount; // 0xD8(0x2)
	uint8_t Pad_0xDA[0x2]; // 0xDA(0x2)
	struct FBox Range; // 0xDC(0x1C)
	int32_t GirdXYSize; // 0xF8(0x4)
	int32_t GirdXSum; // 0xFC(0x4)
	int32_t GirdYSum; // 0x100(0x4)
	uint8_t Pad_0x104[0xA4]; // 0x104(0xA4)
	DEFINE_UE_CLASS_HELPERS(UVisibilityCache, "VisibilityCache")

};

// Object: Class VisibilityCache.VcrCache
// Size: 0x98 (Inherited: 0x28)
struct UVcrCache : UObject
{
	int16_t ValidGridCount; // 0x28(0x2)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FBox Range; // 0x2C(0x1C)
	int32_t GirdXYSize; // 0x48(0x4)
	int32_t GirdXSum; // 0x4C(0x4)
	int32_t GirdYSum; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct TArray<struct FGridZList> GridZList; // 0x58(0x10)
	struct TArray<struct FGridID> GridID; // 0x68(0x10)
	struct TArray<struct FGridXYBitMask> GridXYBitMask; // 0x78(0x10)
	struct TArray<struct FGridXYResult> GridXYResult; // 0x88(0x10)
	DEFINE_UE_CLASS_HELPERS(UVcrCache, "VcrCache")

};

} // namespace SDK
