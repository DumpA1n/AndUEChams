#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OpenWorldStreaming.hpp"

namespace SDK
{

// Package: OpenWorldSpatialPrecomputedVisibility
// Enums: 0
// Structs: 0
// Classes: 6

struct ASpatialPrecomputedVisibilityController;
struct ASpatialPrecomputedVisibilityAssetsStreamer;
struct ASpatialPrecomputedVisibilityLocationMappingStreamer;
struct UOpenWorldSpatialPrecomputedVisibilityBuildInfo;
struct UOpenWorldSpatialPrecomputedVisibilityBlockAsset;
struct UOpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset;

// Object: Class OpenWorldSpatialPrecomputedVisibility.SpatialPrecomputedVisibilityController
// Size: 0x388 (Inherited: 0x370)
struct ASpatialPrecomputedVisibilityController : AActor
{
	DEFINE_UE_CLASS_HELPERS(ASpatialPrecomputedVisibilityController, "SpatialPrecomputedVisibilityController")

	struct UOpenWorldSpatialPrecomputedVisibilityBuildInfo* BuildInfo; // 0x370(0x8)
	uint8_t Pad_0x378[0x10]; // 0x378(0x10)
};

// Object: Class OpenWorldSpatialPrecomputedVisibility.SpatialPrecomputedVisibilityAssetsStreamer
// Size: 0x820 (Inherited: 0x7B0)
struct ASpatialPrecomputedVisibilityAssetsStreamer : AAssetsStreamer
{
	DEFINE_UE_CLASS_HELPERS(ASpatialPrecomputedVisibilityAssetsStreamer, "SpatialPrecomputedVisibilityAssetsStreamer")

	struct UOpenWorldSpatialPrecomputedVisibilityBuildInfo* BuildInfo; // 0x7A8(0x8)
	uint8_t Pad_0x7B8[0x68]; // 0x7B8(0x68)
};

// Object: Class OpenWorldSpatialPrecomputedVisibility.SpatialPrecomputedVisibilityLocationMappingStreamer
// Size: 0x800 (Inherited: 0x7B0)
struct ASpatialPrecomputedVisibilityLocationMappingStreamer : AAssetsStreamer
{
	DEFINE_UE_CLASS_HELPERS(ASpatialPrecomputedVisibilityLocationMappingStreamer, "SpatialPrecomputedVisibilityLocationMappingStreamer")

	uint8_t Pad_0x7B0[0x50]; // 0x7B0(0x50)
};

// Object: Class OpenWorldSpatialPrecomputedVisibility.OpenWorldSpatialPrecomputedVisibilityBuildInfo
// Size: 0x38 (Inherited: 0x28)
struct UOpenWorldSpatialPrecomputedVisibilityBuildInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSpatialPrecomputedVisibilityBuildInfo, "OpenWorldSpatialPrecomputedVisibilityBuildInfo")

	int32_t LocationMappingBlockSize; // 0x28(0x4)
	int32_t VisibilityBlockSize; // 0x2C(0x4)
	int32_t CellSizeXY; // 0x30(0x4)
	int32_t CellSizeZ; // 0x34(0x4)
};

// Object: Class OpenWorldSpatialPrecomputedVisibility.OpenWorldSpatialPrecomputedVisibilityBlockAsset
// Size: 0xA0 (Inherited: 0x28)
struct UOpenWorldSpatialPrecomputedVisibilityBlockAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSpatialPrecomputedVisibilityBlockAsset, "OpenWorldSpatialPrecomputedVisibilityBlockAsset")

	uint8_t Pad_0x28[0x78]; // 0x28(0x78)
};

// Object: Class OpenWorldSpatialPrecomputedVisibility.OpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset
// Size: 0x78 (Inherited: 0x28)
struct UOpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset, "OpenWorldSpatialPrecomputedVisibilityLocationMappingBlockAsset")

	uint8_t Pad_0x28[0x50]; // 0x28(0x50)
};

} // namespace SDK
