#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BaseSystem
// Enums: 0
// Structs: 11
// Classes: 7

struct AActor;
struct UActorComponent;
struct UDataTable;
struct FRangeValue;
struct FSystemData;
struct FDataStorageBase;
struct FDataTableRowNamePicker;
struct FDataTablePathPicker;
struct FDataTableRowPicker;
struct FDataTablePicker;
struct FSystemConfigs;
struct FSystemConfig;
struct FActorDependences;
struct FActorDependence;
struct ABaseSystem;
struct UBaseSystemBlueprintLibrary;
struct USystemDataStorage;
struct UBaseSystemContainer;
struct UWorldPreloadData;
struct USystemSettingGroup;
struct ABaseWorldSettings;

// Object: ScriptStruct BaseSystem.RangeValue
// Size: 0xC (Inherited: 0x0)
struct FRangeValue
{
	int32_t MinValue; // 0x0(0x4)
	int32_t MaxValue; // 0x4(0x4)
	int32_t Value; // 0x8(0x4)
};

// Object: ScriptStruct BaseSystem.SystemData
// Size: 0x28 (Inherited: 0x0)
struct FSystemData
{
	struct UObject* obj; // 0x0(0x8)
	uint8_t Pad_0x8[0x20]; // 0x8(0x20)
};

// Object: ScriptStruct BaseSystem.DataStorageBase
// Size: 0x8 (Inherited: 0x0)
struct FDataStorageBase
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct BaseSystem.DataTableRowNamePicker
// Size: 0x8 (Inherited: 0x0)
struct FDataTableRowNamePicker
{
	struct FName RowName; // 0x0(0x8)
};

// Object: ScriptStruct BaseSystem.DataTablePathPicker
// Size: 0x28 (Inherited: 0x0)
struct FDataTablePathPicker
{
	struct TSoftObjectPtr<UDataTable> DataTablePath; // 0x0(0x28)
};

// Object: ScriptStruct BaseSystem.DataTableRowPicker
// Size: 0x10 (Inherited: 0x0)
struct FDataTableRowPicker
{
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// Object: ScriptStruct BaseSystem.DataTablePicker
// Size: 0x8 (Inherited: 0x0)
struct FDataTablePicker
{
	struct UDataTable* DataTable; // 0x0(0x8)
};

// Object: ScriptStruct BaseSystem.SystemConfigs
// Size: 0x10 (Inherited: 0x0)
struct FSystemConfigs
{
	struct TArray<struct FSystemConfig> Configs; // 0x0(0x10)
};

// Object: ScriptStruct BaseSystem.SystemConfig
// Size: 0x10 (Inherited: 0x0)
struct FSystemConfig
{
	struct ABaseSystem* SystemClass; // 0x0(0x8)
	uint8_t Flags; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct BaseSystem.ActorDependences
// Size: 0x10 (Inherited: 0x0)
struct FActorDependences
{
	struct TArray<struct FActorDependence> Configs; // 0x0(0x10)
};

// Object: ScriptStruct BaseSystem.ActorDependence
// Size: 0x58 (Inherited: 0x0)
struct FActorDependence
{
	struct TSet<struct UActorComponent*> ComponentClasses; // 0x0(0x50)
	uint8_t Flags; // 0x50(0x1)
	uint8_t Pad_0x51[0x7]; // 0x51(0x7)
};

// Object: Class BaseSystem.BaseSystem
// Size: 0x3C8 (Inherited: 0x370)
struct ABaseSystem : AActor
{
	DEFINE_UE_CLASS_HELPERS(ABaseSystem, "BaseSystem")

	struct TMap<struct AActor*, struct FActorDependence> DataComponentClasses; // 0x370(0x50)
	uint8_t Pad_0x3C0[0x8]; // 0x3C0(0x8)
};

// Object: Class BaseSystem.BaseSystemBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UBaseSystemBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBaseSystemBlueprintLibrary, "BaseSystemBlueprintLibrary")

	// Object: Function BaseSystem.BaseSystemBlueprintLibrary.RegisterAutoSpawnComponentForActor
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x75cf0fc
	// Params: [ Num(4) Size(0x12) ]
	static void RegisterAutoSpawnComponentForActor(struct AActor* ActorClass, struct UActorComponent* DataComponentClass, uint8_t bPersistent, uint8_t Flags);
};

// Object: Class BaseSystem.SystemDataStorage
// Size: 0x78 (Inherited: 0x28)
struct USystemDataStorage : UObject
{
	DEFINE_UE_CLASS_HELPERS(USystemDataStorage, "SystemDataStorage")

	struct TMap<struct UScriptStruct*, struct FSystemData> DataStore; // 0x28(0x50)
};

// Object: Class BaseSystem.BaseSystemContainer
// Size: 0x38 (Inherited: 0x28)
struct UBaseSystemContainer : UObject
{
	DEFINE_UE_CLASS_HELPERS(UBaseSystemContainer, "BaseSystemContainer")

	struct TArray<struct TWeakObjectPtr<struct ABaseSystem>> Systems; // 0x28(0x10)
};

// Object: Class BaseSystem.WorldPreloadData
// Size: 0x58 (Inherited: 0x28)
struct UWorldPreloadData : UObject
{
	DEFINE_UE_CLASS_HELPERS(UWorldPreloadData, "WorldPreloadData")

	struct TArray<struct UObject*> PreloadOjects; // 0x28(0x10)
	struct TArray<struct FSoftObjectPath> SoftObjects; // 0x38(0x10)
	struct TArray<struct UObject*> LoadedOjects; // 0x48(0x10)
};

// Object: Class BaseSystem.SystemSettingGroup
// Size: 0x38 (Inherited: 0x28)
struct USystemSettingGroup : UObject
{
	DEFINE_UE_CLASS_HELPERS(USystemSettingGroup, "SystemSettingGroup")

	struct TArray<struct FSystemConfig> SettingDatas; // 0x28(0x10)
};

// Object: Class BaseSystem.BaseWorldSettings
// Size: 0x600 (Inherited: 0x580)
struct ABaseWorldSettings : AWorldSettings
{
	DEFINE_UE_CLASS_HELPERS(ABaseWorldSettings, "BaseWorldSettings")

	uint8_t Pad_0x580[0x8]; // 0x580(0x8)
	struct TArray<struct UWorldPreloadData*> PreloadConfigs; // 0x588(0x10)
	struct TArray<struct FSystemConfig> SystemSettings; // 0x598(0x10)
	struct TMap<struct AActor*, struct FActorDependence> ComponentRegistry; // 0x5A8(0x50)
	struct USystemSettingGroup* SystemGroup; // 0x5F8(0x8)
};

} // namespace SDK
