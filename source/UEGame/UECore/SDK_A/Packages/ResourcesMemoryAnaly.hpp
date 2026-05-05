#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ResourcesMemoryAnaly
// Enums: 0
// Structs: 2
// Classes: 2

struct FMemoryStatistInfo;
struct FStatisticalInfo;
struct UAnalyStatisticalConfig;
struct UResourcesMemoryAnalyBPTools;

// Object: ScriptStruct ResourcesMemoryAnaly.MemoryStatistInfo
// Size: 0x20 (Inherited: 0x0)
struct FMemoryStatistInfo
{
	struct FString Name; // 0x0(0x10)
	struct TArray<struct FName> StatNames; // 0x10(0x10)
};

// Object: ScriptStruct ResourcesMemoryAnaly.StatisticalInfo
// Size: 0x40 (Inherited: 0x0)
struct FStatisticalInfo
{
	struct FString Name; // 0x0(0x10)
	struct TArray<struct FString> FunctionFilterName; // 0x10(0x10)
	struct TArray<struct FString> ResPathFilterName; // 0x20(0x10)
	struct TArray<struct FString> ResTypeFilter; // 0x30(0x10)
};

// Object: Class ResourcesMemoryAnaly.AnalyStatisticalConfig
// Size: 0x38 (Inherited: 0x28)
struct UAnalyStatisticalConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAnalyStatisticalConfig, "AnalyStatisticalConfig")

	struct TArray<struct FStatisticalInfo> StatisticalInfos; // 0x28(0x10)
};

// Object: Class ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools
// Size: 0x28 (Inherited: 0x28)
struct UResourcesMemoryAnalyBPTools : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UResourcesMemoryAnalyBPTools, "ResourcesMemoryAnalyBPTools")

	// Object: Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.TickMemoryAnaly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8c5b30c
	// Params: [ Num(0) Size(0x0) ]
	static void TickMemoryAnaly();

	// Object: Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.StopMemoryAnaly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8c5b22c
	// Params: [ Num(2) Size(0x11) ]
	static void StopMemoryAnaly(struct FString InSaveFileName, uint8_t bInUpload);

	// Object: Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.PushMemoryDetailInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8c5b154
	// Params: [ Num(2) Size(0x18) ]
	static void PushMemoryDetailInfo(struct FString InMemoryType, int64_t InMemoryBits);

	// Object: Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.IsMemoryAnalying
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8c5b11c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMemoryAnalying();

	// Object: Function ResourcesMemoryAnaly.ResourcesMemoryAnalyBPTools.BeginMemoryAnaly
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8c5b108
	// Params: [ Num(0) Size(0x0) ]
	static void BeginMemoryAnaly();
};

} // namespace SDK
