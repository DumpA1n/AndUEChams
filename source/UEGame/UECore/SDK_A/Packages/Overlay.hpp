#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: Overlay
// Enums: 0
// Structs: 1
// Classes: 3

struct FOverlayItem;
struct UOverlays;
struct UBasicOverlays;
struct ULocalizedOverlays;

// Object: ScriptStruct Overlay.OverlayItem
// Size: 0x28 (Inherited: 0x0)
struct FOverlayItem
{
	struct FTimespan StartTime; // 0x0(0x8)
	struct FTimespan EndTime; // 0x8(0x8)
	struct FString Text; // 0x10(0x10)
	struct FVector2D Position; // 0x20(0x8)
};

// Object: Class Overlay.Overlays
// Size: 0x28 (Inherited: 0x28)
struct UOverlays : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOverlays, "Overlays")
};

// Object: Class Overlay.BasicOverlays
// Size: 0x38 (Inherited: 0x28)
struct UBasicOverlays : UOverlays
{
	DEFINE_UE_CLASS_HELPERS(UBasicOverlays, "BasicOverlays")

	struct TArray<struct FOverlayItem> Overlays; // 0x28(0x10)
};

// Object: Class Overlay.LocalizedOverlays
// Size: 0x80 (Inherited: 0x28)
struct ULocalizedOverlays : UOverlays
{
	DEFINE_UE_CLASS_HELPERS(ULocalizedOverlays, "LocalizedOverlays")

	struct UBasicOverlays* DefaultOverlays; // 0x28(0x8)
	struct TMap<struct FString, struct UBasicOverlays*> LocaleToOverlaysMap; // 0x30(0x50)
};

} // namespace SDK
