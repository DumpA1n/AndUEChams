#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GraphicMathUtils
// Enums: 0
// Structs: 0
// Classes: 1

struct UGraphicMathUtils;

// Object: Class GraphicMathUtils.GraphicMathUtils
// Size: 0x28 (Inherited: 0x28)
struct UGraphicMathUtils : UBlueprintFunctionLibrary
{

	// Object: Function GraphicMathUtils.GraphicMathUtils.VanDerCorputSequence
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x79251a8
	// Params: [ Num(2) Size(0x8) ]
	static float VanDerCorputSequence(int32_t I);

	// Object: Function GraphicMathUtils.GraphicMathUtils.HammersleySequence
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x79250cc
	// Params: [ Num(3) Size(0x10) ]
	static struct FVector2D HammersleySequence(int32_t I, int32_t TotalCount);

	// Object: Function GraphicMathUtils.GraphicMathUtils.GetUnitSphereRay
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7924fdc
	// Params: [ Num(3) Size(0x20) ]
	static struct FVector4 GetUnitSphereRay(const struct FVector2D& point2D, float cover);

	// Object: Function GraphicMathUtils.GraphicMathUtils.GetUnitHemisphereRay
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x7924f28
	// Params: [ Num(2) Size(0x20) ]
	static struct FVector4 GetUnitHemisphereRay(const struct FVector2D& point2D);

	// Object: Function GraphicMathUtils.GraphicMathUtils.GetUniformedUnitSphereSampleDirection
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x7924dfc
	// Params: [ Num(3) Size(0x1C) ]
	static void GetUniformedUnitSphereSampleDirection(int32_t sampleCount, struct TArray<struct FVector4>& Result, float cover);

	// Object: Function GraphicMathUtils.GraphicMathUtils.GenerateVanDerCorputSequence
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x7924cd8
	// Params: [ Num(3) Size(0x18) ]
	static void GenerateVanDerCorputSequence(int32_t StartIndex, int32_t EndIndex, struct TArray<float>& Result);

	// Object: Function GraphicMathUtils.GraphicMathUtils.GenerateHammersleySequence
	// Flags: [Final|Native|Static|Private|HasOutParms|BlueprintCallable]
	// Offset: 0x7924b7c
	// Params: [ Num(4) Size(0x20) ]
	static void GenerateHammersleySequence(int32_t StartIndex, int32_t EndIndex, int32_t TotalCount, struct TArray<struct FVector2D>& Result);

	// Object: Function GraphicMathUtils.GraphicMathUtils.Fibonacci2D
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x7924aa0
	// Params: [ Num(3) Size(0x10) ]
	static struct FVector2D Fibonacci2D(int32_t I, int32_t Samples);

	// Object: Function GraphicMathUtils.GraphicMathUtils.Fibonacci1D
	// Flags: [Final|Native|Static|Private|BlueprintCallable]
	// Offset: 0x79249fc
	// Params: [ Num(2) Size(0x8) ]
	static float Fibonacci1D(int32_t I);
	DEFINE_UE_CLASS_HELPERS(UGraphicMathUtils, "GraphicMathUtils")

};

} // namespace SDK
