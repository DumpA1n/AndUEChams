#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: UAGraphicsCommonRuntime
// Enums: 0
// Structs: 2
// Classes: 1

struct UMaterialParameterCollection;
struct FVectorParameterSetting;
struct FScalarParameterSetting;
struct UMFCSettingsComponent;

// Object: ScriptStruct UAGraphicsCommonRuntime.VectorParameterSetting
// Size: 0x30 (Inherited: 0x0)
struct FVectorParameterSetting
{
	struct FString Name; // 0x0(0x10)
	struct FLinearColor Value; // 0x10(0x10)
	struct FLinearColor ResetValue; // 0x20(0x10)
};

// Object: ScriptStruct UAGraphicsCommonRuntime.ScalarParameterSetting
// Size: 0x18 (Inherited: 0x0)
struct FScalarParameterSetting
{
	struct FString Name; // 0x0(0x10)
	float Value; // 0x10(0x4)
	float ResetValue; // 0x14(0x4)
};

// Object: Class UAGraphicsCommonRuntime.MFCSettingsComponent
// Size: 0x110 (Inherited: 0xE0)
struct UMFCSettingsComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFCSettingsComponent, "MFCSettingsComponent")

	struct UMaterialParameterCollection* TargetMFC; // 0xE0(0x8)
	struct TArray<struct FScalarParameterSetting> ScalarParameterSettings; // 0xE8(0x10)
	struct TArray<struct FVectorParameterSetting> VectorParameterSettings; // 0xF8(0x10)
	uint8_t Pad_0x108[0x8]; // 0x108(0x8)

	// Object: Function UAGraphicsCommonRuntime.MFCSettingsComponent.UpdateMFCParamValues
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x3eeb668
	// Params: [ Num(1) Size(0x1) ]
	void UpdateMFCParamValues(bool bUseResetValue);
};

} // namespace SDK
