#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Triangulator
// Enums: 0
// Structs: 1
// Classes: 1

struct FPolyline;
struct UTriangulatorBPLibrary;

// Object: ScriptStruct Triangulator.Polyline
// Size: 0x10 (Inherited: 0x0)
struct FPolyline
{
	struct TArray<struct FVector> Points; // 0x0(0x10)
};

// Object: Class Triangulator.TriangulatorBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UTriangulatorBPLibrary : UBlueprintFunctionLibrary
{

	// Object: Function Triangulator.TriangulatorBPLibrary.TriangulatorSampleFunction
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x79877f0
	// Params: [ Num(2) Size(0x20) ]
	static struct TArray<int32_t> TriangulatorSampleFunction(const struct TArray<struct FPolyline>& Param);
	DEFINE_UE_CLASS_HELPERS(UTriangulatorBPLibrary, "TriangulatorBPLibrary")

};

} // namespace SDK
