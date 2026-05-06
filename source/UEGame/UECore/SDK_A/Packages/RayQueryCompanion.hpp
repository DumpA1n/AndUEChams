#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: RayQueryCompanion
// Enums: 0
// Structs: 0
// Classes: 1

struct UUserWidget;
struct ARayQueryCompanion;

// Object: Class RayQueryCompanion.RayQueryCompanion
// Size: 0x330 (Inherited: 0x300)
struct ARayQueryCompanion : AActor
{
	DEFINE_UE_CLASS_HELPERS(ARayQueryCompanion, "RayQueryCompanion")

	bool bApplyOnPlay; // 0x300(0x1)
	uint8_t Pad_0x301[0x7]; // 0x301(0x7)
	struct FString ProfileNameOverride; // 0x308(0x10)
	uint8_t Pad_0x318[0x8]; // 0x318(0x8)
	struct UUserWidget* UIClass; // 0x320(0x8)
	struct UUserWidget* UIWidget; // 0x328(0x8)

	// Object: Function RayQueryCompanion.RayQueryCompanion.ToggleUI
	// Flags: [Final|Native|Public]
	// Offset: 0x3869d88
	// Params: [ Num(0) Size(0x0) ]
	void ToggleUI();

	// Object: Function RayQueryCompanion.RayQueryCompanion.ShowUI
	// Flags: [Final|Native|Public]
	// Offset: 0x3869d9c
	// Params: [ Num(1) Size(0x1) ]
	void ShowUI(bool bShow);

	// Object: Function RayQueryCompanion.RayQueryCompanion.ApplyProfileForCurrentMap
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3869e4c
	// Params: [ Num(0) Size(0x0) ]
	void ApplyProfileForCurrentMap();
};

} // namespace SDK
