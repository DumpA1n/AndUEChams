#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OpenWorldSceneAutommation
// Enums: 0
// Structs: 3
// Classes: 4

struct UWorld;
struct FAutomationFlowPath;
struct FOpenWorldSceneAutomationFlowRuntimeSection;
struct FOpenWorldSceneAutomationPosition;
struct UOpenWorldSceneAutommationFlowComponent;
struct AOpenWorldSceneProfileCollector;
struct AOpenWorldSceneAutommationFlow;
struct UOpenWorldSceneAutommationMethod;

// Object: ScriptStruct OpenWorldSceneAutommation.AutomationFlowPath
// Size: 0x20 (Inherited: 0x0)
struct FAutomationFlowPath
{
	struct TArray<struct FVector> AutomationPositions; // 0x0(0x10)
	int32_t PositionCount; // 0x10(0x4)
	uint8_t Pad_0x14[0xC]; // 0x14(0xC)
};

// Object: ScriptStruct OpenWorldSceneAutommation.OpenWorldSceneAutomationFlowRuntimeSection
// Size: 0x70 (Inherited: 0x0)
struct FOpenWorldSceneAutomationFlowRuntimeSection
{
	struct FString FromRecordFilePath; // 0x0(0x10)
	struct UOpenWorldSceneAutommationMethod* SectionMethod; // 0x10(0x8)
	struct FString TargetSplineComponentName; // 0x18(0x10)
	struct TArray<struct FString> ExcuteCommands; // 0x28(0x10)
	uint8_t WiatForStraming : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	float WiatTimeForRun; // 0x3C(0x4)
	struct FAutomationFlowPath FlowPath; // 0x40(0x20)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)
};

// Object: ScriptStruct OpenWorldSceneAutommation.OpenWorldSceneAutomationPosition
// Size: 0x18 (Inherited: 0x0)
struct FOpenWorldSceneAutomationPosition
{
	struct FVector StartLocation; // 0x0(0xC)
	struct FRotator StartRotator; // 0xC(0xC)
};

// Object: Class OpenWorldSceneAutommation.OpenWorldSceneAutommationFlowComponent
// Size: 0x2B0 (Inherited: 0x240)
struct UOpenWorldSceneAutommationFlowComponent : USceneComponent
{
	float PlayerSpeed; // 0x240(0x4)
	float PlayerHigh; // 0x244(0x4)
	struct FString POIName; // 0x248(0x10)
	struct TArray<struct FOpenWorldSceneAutomationFlowRuntimeSection> RuntimeSections; // 0x258(0x10)
	uint8_t Pad_0x268[0x28]; // 0x268(0x28)
	struct UWorld* CacheWorld; // 0x290(0x8)
	uint8_t Pad_0x298[0x18]; // 0x298(0x18)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSceneAutommationFlowComponent, "OpenWorldSceneAutommationFlowComponent")

};

// Object: Class OpenWorldSceneAutommation.OpenWorldSceneProfileCollector
// Size: 0x390 (Inherited: 0x370)
struct AOpenWorldSceneProfileCollector : AActor
{
	uint8_t Pad_0x370[0x20]; // 0x370(0x20)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldSceneProfileCollector, "OpenWorldSceneProfileCollector")

};

// Object: Class OpenWorldSceneAutommation.OpenWorldSceneAutommationFlow
// Size: 0x388 (Inherited: 0x370)
struct AOpenWorldSceneAutommationFlow : AActor
{
	struct UOpenWorldSceneAutommationFlowComponent* FlowComponent; // 0x370(0x8)
	struct FString OpenWorldSceneAutommationFlowName; // 0x378(0x10)


	// Object: Function OpenWorldSceneAutommation.OpenWorldSceneAutommationFlow.InitAutomationData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7e5f41c
	// Params: [ Num(0) Size(0x0) ]
	void InitAutomationData();
	DEFINE_UE_CLASS_HELPERS(AOpenWorldSceneAutommationFlow, "OpenWorldSceneAutommationFlow")

};

// Object: Class OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod
// Size: 0x30 (Inherited: 0x28)
struct UOpenWorldSceneAutommationMethod : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)


	// Object: Function OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod.UpdatePlayerLocaiton
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7e5f610
	// Params: [ Num(2) Size(0x18) ]
	void UpdatePlayerLocaiton(const struct FVector& InPlayerLocation, const struct FRotator& InPlayerRotator);

	// Object: Function OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod.OnAutomationMethodExcute
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x7e5f574
	// Params: [ Num(2) Size(0x5) ]
	uint8_t OnAutomationMethodExcute(float ExcuteTime);

	// Object: Function OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod.OnAutomationMethodBegin
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x7e5f560
	// Params: [ Num(0) Size(0x0) ]
	void OnAutomationMethodBegin();

	// Object: Function OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod.GetCurentPlayerRotation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7e5f528
	// Params: [ Num(1) Size(0xC) ]
	struct FRotator GetCurentPlayerRotation();

	// Object: Function OpenWorldSceneAutommation.OpenWorldSceneAutommationMethod.GetCurentPlayerLocation
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7e5f4f0
	// Params: [ Num(1) Size(0xC) ]
	struct FVector GetCurentPlayerLocation();
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSceneAutommationMethod, "OpenWorldSceneAutommationMethod")

};

} // namespace SDK
