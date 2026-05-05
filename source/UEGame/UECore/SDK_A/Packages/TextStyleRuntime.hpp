#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"

namespace SDK
{

// Package: TextStyleRuntime
// Enums: 0
// Structs: 2
// Classes: 4

enum class ETextUpperPolicy : uint8_t;
struct FSlateFontInfo;
struct UDataTable;
struct UTextLayoutWidget;
struct UWidget;
struct FCustomTextStyle;
struct FFontConfigData;
struct UFontStyleRuntimeManager;
struct UStyleTableConfigObj;
struct UTextStyleBlueprintLib;
struct UTextStyleRuntimeManager;

// Object: ScriptStruct TextStyleRuntime.CustomTextStyle
// Size: 0xB8 (Inherited: 0x8)
struct FCustomTextStyle : FTableRowBase
{
	struct FSlateColor ColorAndOpacity; // 0x8(0x28)
	struct FSlateColor ColorAndOpacity_Console; // 0x30(0x28)
	uint8_t bUseConsoleColor : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)
	struct FFontOutlineSettings OutlineSettings; // 0x60(0x20)
	struct FVector2D ShadowOffset; // 0x80(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x88(0x10)
	struct FMargin Margin; // 0x98(0x10)
	float LineHeightPercentage; // 0xA8(0x4)
	struct FName ColorKey; // 0xAC(0x8)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
};

// Object: ScriptStruct TextStyleRuntime.FontConfigData
// Size: 0x68 (Inherited: 0x8)
struct FFontConfigData : FTableRowBase
{
	struct FSlateFontInfo TextFontData; // 0x8(0x58)
	ETextUpperPolicy TextUpperPolicy; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
};

// Object: Class TextStyleRuntime.FontStyleRuntimeManager
// Size: 0x170 (Inherited: 0x30)
struct UFontStyleRuntimeManager : UEngineSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UFontStyleRuntimeManager, "FontStyleRuntimeManager")

	uint8_t Pad_0x30[0xA0]; // 0x30(0xA0)
	struct FName CachedCulture; // 0xD0(0x8)
	uint8_t Pad_0xD8[0x90]; // 0xD8(0x90)
	struct UDataTable* CachedCurFontConfig; // 0x168(0x8)

	// Object: Function TextStyleRuntime.FontStyleRuntimeManager.WarmupText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xfab33d4
	// Params: [ Num(2) Size(0x18) ]
	void WarmupText(const struct FName& InStyleName, struct FString InContent);

	// Object: Function TextStyleRuntime.FontStyleRuntimeManager.OnTextWidgetFontStyleCustomize
	// Flags: [Final|Native|Private]
	// Offset: 0x8cff038
	// Params: [ Num(1) Size(0x8) ]
	void OnTextWidgetFontStyleCustomize(struct UWidget* InWidget);

	// Object: Function TextStyleRuntime.FontStyleRuntimeManager.OnCultureChanged
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8cff024
	// Params: [ Num(0) Size(0x0) ]
	void OnCultureChanged();

	// Object: Function TextStyleRuntime.FontStyleRuntimeManager.GetFontConfigData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8cfee78
	// Params: [ Num(3) Size(0x61) ]
	uint8_t GetFontConfigData(const struct FName& InName, struct FSlateFontInfo& OutSlateFontInfo);

	// Object: Function TextStyleRuntime.FontStyleRuntimeManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10903288
	// Params: [ Num(1) Size(0x8) ]
	static struct UFontStyleRuntimeManager* Get();
};

// Object: Class TextStyleRuntime.StyleTableConfigObj
// Size: 0xA8 (Inherited: 0x28)
struct UStyleTableConfigObj : UObject
{
	DEFINE_UE_CLASS_HELPERS(UStyleTableConfigObj, "StyleTableConfigObj")

	struct FSoftObjectPath TextStyleTable; // 0x28(0x18)
	struct FSoftObjectPath DefaultFontConfig; // 0x40(0x18)
	struct TMap<struct FName, struct FSoftObjectPath> FontDataConfigs; // 0x58(0x50)
};

// Object: Class TextStyleRuntime.TextStyleBlueprintLib
// Size: 0x28 (Inherited: 0x28)
struct UTextStyleBlueprintLib : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UTextStyleBlueprintLib, "TextStyleBlueprintLib")

	// Object: Function TextStyleRuntime.TextStyleBlueprintLib.Blueprint_SetTextStyle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xe66573c
	// Params: [ Num(2) Size(0x10) ]
	static void Blueprint_SetTextStyle(struct UTextLayoutWidget* InTextWidget, struct FName InTextStyleIdx);
};

// Object: Class TextStyleRuntime.TextStyleRuntimeManager
// Size: 0xC8 (Inherited: 0x30)
struct UTextStyleRuntimeManager : UEngineSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UTextStyleRuntimeManager, "TextStyleRuntimeManager")

	uint8_t Pad_0x30[0x90]; // 0x30(0x90)
	struct UDataTable* CachedCurTxtStyleConfig; // 0xC0(0x8)

	// Object: Function TextStyleRuntime.TextStyleRuntimeManager.GetTextStyleCfgData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8cff138
	// Params: [ Num(3) Size(0xC1) ]
	uint8_t GetTextStyleCfgData(const struct FName& InName, struct FCustomTextStyle& OutCustomTextStyle);

	// Object: Function TextStyleRuntime.TextStyleRuntimeManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8cff104
	// Params: [ Num(1) Size(0x8) ]
	static struct UTextStyleRuntimeManager* Get();
};

} // namespace SDK
