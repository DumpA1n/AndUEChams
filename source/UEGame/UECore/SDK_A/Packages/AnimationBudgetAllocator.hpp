#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: AnimationBudgetAllocator
// Enums: 0
// Structs: 1
// Classes: 2

struct FAnimationBudgetAllocatorParameters;
struct UAnimationBudgetBlueprintLibrary;
struct USkeletalMeshComponentBudgeted;

// Object: ScriptStruct AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
// Size: 0x50 (Inherited: 0x0)
struct FAnimationBudgetAllocatorParameters
{
	float BudgetInMs; // 0x0(0x4)
	float MinQuality; // 0x4(0x4)
	int32_t MaxTickRate; // 0x8(0x4)
	float WorkUnitSmoothingSpeed; // 0xC(0x4)
	float AlwaysTickFalloffAggression; // 0x10(0x4)
	float InterpolationFalloffAggression; // 0x14(0x4)
	int32_t InterpolationMaxRate; // 0x18(0x4)
	int32_t MaxInterpolatedComponents; // 0x1C(0x4)
	float InterpolationTickMultiplier; // 0x20(0x4)
	float InitialEstimatedWorkUnitTimeMs; // 0x24(0x4)
	int32_t MaxTickedOffsreenComponents; // 0x28(0x4)
	int32_t StateChangeThrottleInFrames; // 0x2C(0x4)
	float BudgetFactorBeforeReducedWork; // 0x30(0x4)
	float BudgetFactorBeforeReducedWorkEpsilon; // 0x34(0x4)
	float BudgetPressureSmoothingSpeed; // 0x38(0x4)
	int32_t ReducedWorkThrottleMinInFrames; // 0x3C(0x4)
	int32_t ReducedWorkThrottleMaxInFrames; // 0x40(0x4)
	float BudgetFactorBeforeAggressiveReducedWork; // 0x44(0x4)
	int32_t ReducedWorkThrottleMaxPerFrame; // 0x48(0x4)
	float BudgetPressureBeforeEmergencyReducedWork; // 0x4C(0x4)
};

// Object: Class AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnimationBudgetBlueprintLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UAnimationBudgetBlueprintLibrary, "AnimationBudgetBlueprintLibrary")

	// Object: Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.SetAnimationBudgetParameters
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x396163c
	// Params: [ Num(2) Size(0x58) ]
	static void SetAnimationBudgetParameters(struct UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters);

	// Object: Function AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary.EnableAnimationBudget
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3961798
	// Params: [ Num(2) Size(0x9) ]
	static void EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled);
};

// Object: Class AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
// Size: 0x1220 (Inherited: 0x11F0)
struct USkeletalMeshComponentBudgeted : USkeletalMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(USkeletalMeshComponentBudgeted, "SkeletalMeshComponentBudgeted")

	uint8_t Pad_0x11F0[0x18]; // 0x11F0(0x18)
	uint8_t bAutoRegisterWithBudgetAllocator : 1; // 0x1208(0x1), Mask(0x1)
	uint8_t bAutoCalculateSignificance : 1; // 0x1208(0x1), Mask(0x2)
	uint8_t bShouldUseActorRenderedFlag : 1; // 0x1208(0x1), Mask(0x4)
	uint8_t BitPad_0x1208_3 : 5; // 0x1208(0x1)
	uint8_t Pad_0x1209[0x7]; // 0x1209(0x7)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x1210(0x10)

	// Object: Function AnimationBudgetAllocator.SkeletalMeshComponentBudgeted.SetAutoRegisterWithBudgetAllocator
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x396188c
	// Params: [ Num(1) Size(0x1) ]
	void SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator);
};

} // namespace SDK
