#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AssetTags
// Enums: 1
// Structs: 0
// Classes: 1

struct FAssetData;
struct UAssetTagsSubsystem;

// Object: Enum AssetTags.ECollectionScriptingShareType
enum class ECollectionScriptingShareType : uint8_t
{
	Local = 0,
	Private = 1,
	Shared = 2,
	ECollectionScriptingShareType_MAX = 3
};

// Object: Class AssetTags.AssetTagsSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UAssetTagsSubsystem : UEngineSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UAssetTagsSubsystem, "AssetTagsSubsystem")

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e786a4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> GetCollectionsContainingAssetPtr(struct UObject* AssetPtr);

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8e7853c
	// Params: [ Num(2) Size(0x60) ]
	struct TArray<struct FName> GetCollectionsContainingAssetData(const struct FAssetData& AssetData);

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e7845c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName AssetPathName);

	// Object: Function AssetTags.AssetTagsSubsystem.GetCollections
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e783c4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetCollections();

	// Object: Function AssetTags.AssetTagsSubsystem.GetAssetsInCollection
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e78304
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName Name);

	// Object: Function AssetTags.AssetTagsSubsystem.CollectionExists
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e78254
	// Params: [ Num(2) Size(0x9) ]
	uint8_t CollectionExists(struct FName Name);
};

} // namespace SDK
