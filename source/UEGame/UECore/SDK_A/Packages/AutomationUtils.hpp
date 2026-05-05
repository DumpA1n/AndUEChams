#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AutomationUtils
// Enums: 0
// Structs: 0
// Classes: 1

struct UAutomationUtilsBlueprintLibrary;

// Object: Class AutomationUtils.AutomationUtilsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAutomationUtilsBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAutomationUtilsBlueprintLibrary, "AutomationUtilsBlueprintLibrary")

	// Object: Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e15bd8
	// Params: [ Num(4) Size(0x28) ]
	static void TakeGameplayAutomationScreenshot(struct FString ScreenshotName, float MaxGlobalError, float MaxLocalError, struct FString MapNameOverride);
};

} // namespace SDK
