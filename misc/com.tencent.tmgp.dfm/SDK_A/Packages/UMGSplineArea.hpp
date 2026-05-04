#pragma once

#include "../CoreUObject_classes.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UMGSplineArea
// Enums: 1
// Structs: 2
// Classes: 1

struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct FUMGSplineAreaInfo;
struct FUMGSplineAreaPoint;
struct USplineAreaWidget;

// Object: Enum UMGSplineArea.EUMGSplineAreaType
enum class EUMGSplineAreaType : uint8_t
{
	Linear = 0,
	Curve = 1,
	EUMGSplineAreaType_MAX = 2
};

// Object: ScriptStruct UMGSplineArea.UMGSplineAreaInfo
// Size: 0x50 (Inherited: 0x0)
struct FUMGSplineAreaInfo
{
	EUMGSplineAreaType SplineType; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	float Thickness; // 0x4(0x4)
	struct TArray<struct FUMGSplineAreaPoint> Points; // 0x8(0x10)
	struct TArray<struct FUMGSplineAreaPoint> TrianglePoints; // 0x18(0x10)
	uint8_t bClosedLoop : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t bSplitLine : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	struct FLinearColor TintColor; // 0x2C(0x10)
	struct FLinearColor AreaTintColor; // 0x3C(0x10)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct UMGSplineArea.UMGSplineAreaPoint
// Size: 0x18 (Inherited: 0x0)
struct FUMGSplineAreaPoint
{
	struct FVector2D Location; // 0x0(0x8)
	struct FVector2D Direction; // 0x8(0x8)
	struct FVector2D UV; // 0x10(0x8)
};

// Object: Class UMGSplineArea.SplineAreaWidget
// Size: 0x1C8 (Inherited: 0x158)
struct USplineAreaWidget : UWidget
{
	struct FUMGSplineAreaInfo SplineAreaInfo; // 0x158(0x50)
	struct UMaterialInterface* Material; // 0x1A8(0x8)
	struct UMaterialInstanceDynamic* DynamicMaterial; // 0x1B0(0x8)
	uint8_t Pad_0x1B8[0x10]; // 0x1B8(0x10)
	DEFINE_UE_CLASS_HELPERS(USplineAreaWidget, "SplineAreaWidget")

};

} // namespace SDK
