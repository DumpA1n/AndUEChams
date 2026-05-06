#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PerfDogExtension
// Enums: 0
// Structs: 0
// Classes: 1

struct UPerfDogExtensionBlueprintLibrary;

// Object: Class PerfDogExtension.PerfDogExtensionBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPerfDogExtensionBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPerfDogExtensionBlueprintLibrary, "PerfDogExtensionBlueprintLibrary")

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.SetLabel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9150
	// Params: [ Num(1) Size(0x10) ]
	static void SetLabel(struct FString LabelName);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostStringValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe91f4
	// Params: [ Num(3) Size(0x30) ]
	static void PostStringValue(struct FString Category, struct FString Key, struct FString Value);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostIntValue3
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9330
	// Params: [ Num(5) Size(0x2C) ]
	static void PostIntValue3(struct FString Category, struct FString Key, int32_t Value1, int32_t Value2, int32_t Value3);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostIntValue2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe94dc
	// Params: [ Num(4) Size(0x28) ]
	static void PostIntValue2(struct FString Category, struct FString Key, int32_t Value1, int32_t Value2);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostIntValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9648
	// Params: [ Num(3) Size(0x24) ]
	static void PostIntValue(struct FString Category, struct FString Key, int32_t Value);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostFloatValue3
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9778
	// Params: [ Num(5) Size(0x2C) ]
	static void PostFloatValue3(struct FString Category, struct FString Key, float Value1, float Value2, float Value3);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostFloatValue2
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9924
	// Params: [ Num(4) Size(0x28) ]
	static void PostFloatValue2(struct FString Category, struct FString Key, float Value1, float Value2);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.PostFloatValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9a90
	// Params: [ Num(3) Size(0x24) ]
	static void PostFloatValue(struct FString Category, struct FString Key, float Value);

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.IsTestStarted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9bc0
	// Params: [ Num(1) Size(0x1) ]
	static bool IsTestStarted();

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.EnablePerfDogExtension
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe9bf8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t EnablePerfDogExtension();

	// Object: Function PerfDogExtension.PerfDogExtensionBlueprintLibrary.AddNote
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x4fe90ac
	// Params: [ Num(1) Size(0x10) ]
	static void AddNote(struct FString NoteText);
};

} // namespace SDK
