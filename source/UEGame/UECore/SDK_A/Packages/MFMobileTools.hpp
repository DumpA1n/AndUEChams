#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFMobileTools
// Enums: 0
// Structs: 0
// Classes: 1

struct UMFMobileToolsModuleHelper;

// Object: Class MFMobileTools.MFMobileToolsModuleHelper
// Size: 0x28 (Inherited: 0x28)
struct UMFMobileToolsModuleHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFMobileToolsModuleHelper, "MFMobileToolsModuleHelper")

	// Object: Function MFMobileTools.MFMobileToolsModuleHelper.WriteEvent2Calendar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e4647c
	// Params: [ Num(6) Size(0x3C) ]
	static void WriteEvent2Calendar(int32_t InStartMillis, int32_t InPreviousMinutes, struct FString InZoneTime, struct FString InTitle, struct FString InContent, int32_t InEndMillis);

	// Object: Function MFMobileTools.MFMobileToolsModuleHelper.DeleteEventFromeCalendar
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e463d8
	// Params: [ Num(1) Size(0x10) ]
	static void DeleteEventFromeCalendar(struct FString InTitle);
};

} // namespace SDK
