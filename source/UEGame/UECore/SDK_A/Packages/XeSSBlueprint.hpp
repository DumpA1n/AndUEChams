#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: XeSSBlueprint
// Enums: 1
// Structs: 0
// Classes: 1

struct UXeSSBlueprintLibrary;

// Object: Enum XeSSBlueprint.EXeSSQualityMode
enum class EXeSSQualityMode : uint8_t
{
	Off = 0,
	UltraPerformance = 1,
	Performance = 2,
	Balanced = 3,
	Quality = 4,
	UltraQuality = 5,
	UltraQualityPlus = 6,
	AntiAliasing = 7,
	EXeSSQualityMode_MAX = 8
};

// Object: Class XeSSBlueprint.XeSSBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UXeSSBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UXeSSBlueprintLibrary, "XeSSBlueprintLibrary")

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.SetXeSSQualityMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d555c0
	// Params: [ Num(1) Size(0x1) ]
	static void SetXeSSQualityMode(EXeSSQualityMode QualityMode);

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSSupported
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d55588
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsXeSSSupported();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.IsXeSSOptimalDriver
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d55550
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsXeSSOptimalDriver();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityModeInformation
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8d5545c
	// Params: [ Num(3) Size(0x9) ]
	static uint8_t GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage);

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetXeSSQualityMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d55428
	// Params: [ Num(1) Size(0x1) ]
	static EXeSSQualityMode GetXeSSQualityMode();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetSupportedXeSSQualityModes
	// Flags: [Final|RequiredAPI|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d55390
	// Params: [ Num(1) Size(0x10) ]
	static struct TArray<EXeSSQualityMode> GetSupportedXeSSQualityModes();

	// Object: Function XeSSBlueprint.XeSSBlueprintLibrary.GetDefaultXeSSQualityMode
	// Flags: [Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure]
	// Offset: 0x8d552f0
	// Params: [ Num(2) Size(0x9) ]
	static EXeSSQualityMode GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution);
};

} // namespace SDK
