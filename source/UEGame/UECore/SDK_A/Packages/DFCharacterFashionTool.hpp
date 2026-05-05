#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFCharacterFashionTool
// Enums: 0
// Structs: 1
// Classes: 1

enum class EHeroMeshType : uint8_t;
struct USkeletalMeshComponent;
struct FHeroItemResLoaderHandle;
struct UDFMCharacterItemFashionManager;

// Object: ScriptStruct DFCharacterFashionTool.HeroItemResLoaderHandle
// Size: 0x68 (Inherited: 0x0)
struct FHeroItemResLoaderHandle
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
	struct TArray<struct UObject*> BufferedObjects; // 0x58(0x10)
};

// Object: Class DFCharacterFashionTool.DFMCharacterItemFashionManager
// Size: 0xE8 (Inherited: 0x30)
struct UDFMCharacterItemFashionManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMCharacterItemFashionManager, "DFMCharacterItemFashionManager")

	struct FMulticastInlineDelegate OnSetMatTaskComplete; // 0x30(0x10)
	uint8_t Pad_0x40[0xA8]; // 0x40(0xA8)

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.UnloadFashionDatatable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5d9d0
	// Params: [ Num(0) Size(0x0) ]
	void UnloadFashionDatatable();

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.SetHeroItemMeshMaterialsAndFashion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5d874
	// Params: [ Num(5) Size(0x20) ]
	int32_t SetHeroItemMeshMaterialsAndFashion(struct USkeletalMeshComponent* InMeshComp, EHeroMeshType InMeshType, struct FName InHeroItemId, struct FName InHeroItemFashionId);

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.SetHeroItemMeshFashion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5d718
	// Params: [ Num(5) Size(0x20) ]
	int32_t SetHeroItemMeshFashion(struct USkeletalMeshComponent* InMeshComp, EHeroMeshType InMeshType, struct FName InHeroItemId, struct FName InHeroItemFashionId);

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.ResetCachedFashionConfigs
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5d658
	// Params: [ Num(0) Size(0x0) ]
	void ResetCachedFashionConfigs();

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8793b4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMCharacterItemFashionManager* Get(struct UObject* WorldContextObject);

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.CancelTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5d5b4
	// Params: [ Num(1) Size(0x4) ]
	void CancelTask(int32_t InHandleId);

	// Object: Function DFCharacterFashionTool.DFMCharacterItemFashionManager.AddCachedFashionConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7a5d4d8
	// Params: [ Num(2) Size(0x10) ]
	void AddCachedFashionConfig(struct FName InHeroItemId, struct FName InFashionId);
};

} // namespace SDK
