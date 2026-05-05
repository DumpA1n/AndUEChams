#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BPSpline
// Enums: 0
// Structs: 0
// Classes: 2

struct AActor;
struct UActorComponent;
struct USplineComponent;
struct UBPSplineCatenaryFunctions;
struct UBPSplineBlueprintFunctionHelper;

// Object: Class BPSpline.BPSplineCatenaryFunctions
// Size: 0x28 (Inherited: 0x28)
struct UBPSplineCatenaryFunctions : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBPSplineCatenaryFunctions, "BPSplineCatenaryFunctions")

	// Object: Function BPSpline.BPSplineCatenaryFunctions.CreateCatenaryPoints
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x7b15260
	// Params: [ Num(6) Size(0x40) ]
	static struct TArray<struct FVector> CreateCatenaryPoints(struct FVector Point1, struct FVector Point2, float Length, struct FVector Up, int32_t NumPoints);
};

// Object: Class BPSpline.BPSplineBlueprintFunctionHelper
// Size: 0x28 (Inherited: 0x28)
struct UBPSplineBlueprintFunctionHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UBPSplineBlueprintFunctionHelper, "BPSplineBlueprintFunctionHelper")

	// Object: Function BPSpline.BPSplineBlueprintFunctionHelper.SnapToGround
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x7b15938
	// Params: [ Num(2) Size(0x9) ]
	static void SnapToGround(struct USplineComponent* SplineComp, uint8_t bInAlign);

	// Object: Function BPSpline.BPSplineBlueprintFunctionHelper.SnapToFixedAngleXY
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x7b15768
	// Params: [ Num(4) Size(0x30) ]
	static void SnapToFixedAngleXY(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints);

	// Object: Function BPSpline.BPSplineBlueprintFunctionHelper.SnapToFixedAngle
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x7b15598
	// Params: [ Num(4) Size(0x30) ]
	static void SnapToFixedAngle(struct USplineComponent* SplineComp, struct TArray<float> AllowedAngles, uint8_t bSnapToGround, struct TArray<struct FVector>& ResultPoints);

	// Object: Function BPSpline.BPSplineBlueprintFunctionHelper.RerunConstructionScripts
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x7b15504
	// Params: [ Num(1) Size(0x8) ]
	static void RerunConstructionScripts(struct AActor* Actor);

	// Object: Function BPSpline.BPSplineBlueprintFunctionHelper.RemoveComponentFromActor
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x7b15438
	// Params: [ Num(2) Size(0x10) ]
	static void RemoveComponentFromActor(struct AActor* Actor, struct UActorComponent* Component);
};

} // namespace SDK
