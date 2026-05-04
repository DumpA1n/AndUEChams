#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: ImageStyleRuntime
// Enums: 0
// Structs: 0
// Classes: 2

struct FImageStyle;
struct UDataTable;
struct UImage;
struct UImageStyleBlueprintFuncLib;
struct UImageStyleRuntimeManager;

// Object: Class ImageStyleRuntime.ImageStyleBlueprintFuncLib
// Size: 0x28 (Inherited: 0x28)
struct UImageStyleBlueprintFuncLib : UBlueprintFunctionLibrary
{

	// Object: Function ImageStyleRuntime.ImageStyleBlueprintFuncLib.SetImageStyle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe664130
	// Params: [ Num(2) Size(0x10) ]
	static void SetImageStyle(struct UImage* InImage, struct FName InStyleName);
	DEFINE_UE_CLASS_HELPERS(UImageStyleBlueprintFuncLib, "ImageStyleBlueprintFuncLib")

};

// Object: Class ImageStyleRuntime.ImageStyleRuntimeManager
// Size: 0xC8 (Inherited: 0x30)
struct UImageStyleRuntimeManager : UEngineSubsystem
{
	uint8_t Pad_0x30[0x90]; // 0x30(0x90)
	struct UDataTable* CachedCurImageStyleConfig; // 0xC0(0x8)


	// Object: Function ImageStyleRuntime.ImageStyleRuntimeManager.GetImageStyleCfgData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x86be870
	// Params: [ Num(3) Size(0x31) ]
	uint8_t GetImageStyleCfgData(const struct FName& InName, struct FImageStyle& OutCustomImageStyle);

	// Object: Function ImageStyleRuntime.ImageStyleRuntimeManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86be83c
	// Params: [ Num(1) Size(0x8) ]
	static struct UImageStyleRuntimeManager* Get();
	DEFINE_UE_CLASS_HELPERS(UImageStyleRuntimeManager, "ImageStyleRuntimeManager")

};

} // namespace SDK
