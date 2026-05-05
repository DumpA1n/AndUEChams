#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: SetPlatformStyle
// Enums: 0
// Structs: 0
// Classes: 1

enum class EFontConfigData_zh : uint8_t;
struct UImage;
struct URichTextBlock;
struct UTextBlock;
struct UTextLayoutWidget;
struct UWidget;
struct USetPlatformStyle_C;

// Object: BlueprintGeneratedClass SetPlatformStyle.SetPlatformStyle_C
// Size: 0x28 (Inherited: 0x28)
struct USetPlatformStyle_C : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(USetPlatformStyle_C, "SetPlatformStyle_C")

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetDefaultImage
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(3) Size(0x18) ]
	static void SetDefaultImage(struct UImage* Image, int32_t DefaultType, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetCommonPressed
	// Flags: [Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x10) ]
	static void SetCommonPressed(struct UImage* Image, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetSize
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	static void SetSize(struct UWidget* Widget, struct FVector2D PC, struct FVector2D Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetPosition
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	static void SetPosition(struct UWidget* __, struct FVector2D PC, struct FVector2D Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetImageSize
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	static void SetImageSize(struct UImage* __, struct FVector2D PC, struct FVector2D Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetImageColor
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x30) ]
	static void SetImageColor(struct UImage* __, struct FLinearColor PC, struct FLinearColor Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.Set Image Color_ID
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	static void Set_Image_Color_ID(struct UImage* InImage, struct FName PC, struct FName Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetTextColor
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x20) ]
	static void SetTextColor(struct UTextLayoutWidget* InTextWidget, struct FName PC, struct FName Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetRichTextSize
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	static void SetRichTextSize(struct URichTextBlock* __, EFontConfigData_zh PC, EFontConfigData_zh Mobile, struct UObject* __WorldContext);

	// Object: Function SetPlatformStyle.SetPlatformStyle_C.SetTextSize
	// Flags: [Static|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x18) ]
	static void SetTextSize(struct UTextBlock* Target, EFontConfigData_zh PC, EFontConfigData_zh Mobile, struct UObject* __WorldContext);
};

} // namespace SDK
