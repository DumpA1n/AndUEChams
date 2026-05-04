#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "OpenWorldStreaming.hpp"

namespace SDK
{

// Package: OpenWorldOccluderStreaming
// Enums: 0
// Structs: 0
// Classes: 3

struct UOpenWorldLandscapeOccluderComponent;
struct UOpenWorldOccluderAsset;
struct AOccluderAssetsStreamer;

// Object: Class OpenWorldOccluderStreaming.OpenWorldLandscapeOccluderComponent
// Size: 0x580 (Inherited: 0x580)
struct UOpenWorldLandscapeOccluderComponent : UPrimitiveComponent
{
	struct UOpenWorldOccluderAsset* OccluderAsset; // 0x578(0x8)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldLandscapeOccluderComponent, "OpenWorldLandscapeOccluderComponent")

};

// Object: Class OpenWorldOccluderStreaming.OpenWorldOccluderAsset
// Size: 0xB0 (Inherited: 0x28)
struct UOpenWorldOccluderAsset : UObject
{
	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
	int32_t NumSubsections; // 0x58(0x4)
	int32_t SubsectionsSizeQuads; // 0x5C(0x4)
	struct FTransform Transform; // 0x60(0x30)
	struct FBoxSphereBounds Bounds; // 0x90(0x1C)
	uint8_t Pad_0xAC[0x4]; // 0xAC(0x4)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldOccluderAsset, "OpenWorldOccluderAsset")

};

// Object: Class OpenWorldOccluderStreaming.OccluderAssetsStreamer
// Size: 0x800 (Inherited: 0x7B0)
struct AOccluderAssetsStreamer : AAssetsStreamer
{
	struct TMap<struct FString, struct UOpenWorldLandscapeOccluderComponent*> AssetToComponentMap; // 0x7A8(0x50)
	DEFINE_UE_CLASS_HELPERS(AOccluderAssetsStreamer, "OccluderAssetsStreamer")

};

} // namespace SDK
