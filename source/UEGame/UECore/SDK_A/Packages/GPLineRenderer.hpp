#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPLineRenderer
// Enums: 0
// Structs: 2
// Classes: 1

struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct FLineSection;
struct FGPBatchedLine;
struct UGPLineRendererComponent;

// Object: ScriptStruct GPLineRenderer.LineSection
// Size: 0x30 (Inherited: 0x0)
struct FLineSection
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
	struct UMaterialInterface* Material; // 0x28(0x8)
};

// Object: ScriptStruct GPLineRenderer.GPBatchedLine
// Size: 0x100 (Inherited: 0x0)
struct FGPBatchedLine
{
	struct FVector Start; // 0x0(0xC)
	struct FVector StartNormal; // 0xC(0xC)
	struct FVector StartForward; // 0x18(0xC)
	uint8_t Pad_0x24[0xC]; // 0x24(0xC)
	struct FMatrix StartMatrix; // 0x30(0x40)
	struct FVector End; // 0x70(0xC)
	struct FVector EndNormal; // 0x7C(0xC)
	struct FVector EndForward; // 0x88(0xC)
	uint8_t Pad_0x94[0xC]; // 0x94(0xC)
	struct FMatrix EndMatrix; // 0xA0(0x40)
	struct FLinearColor Color; // 0xE0(0x10)
	float Thickness; // 0xF0(0x4)
	float RemainingLifeTime; // 0xF4(0x4)
	uint8_t DepthPriority; // 0xF8(0x1)
	uint8_t Pad_0xF9[0x7]; // 0xF9(0x7)
};

// Object: Class GPLineRenderer.GPLineRendererComponent
// Size: 0x7A0 (Inherited: 0x6F0)
struct UGPLineRendererComponent : UMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UGPLineRendererComponent, "GPLineRendererComponent")

	uint8_t bEnableUpdateOnlyLineData : 1; // 0x6E1(0x1), Mask(0x1)
	struct UMaterialInterface* LineMaterial; // 0x6E8(0x8)
	uint8_t bForceBoundCenterInComponent : 1; // 0x6F0(0x1), Mask(0x1)
	uint8_t bEnableDistanceThicknessScale : 1; // 0x6F1(0x1), Mask(0x1)
	float NearThickness; // 0x6F4(0x4)
	float FarThickness; // 0x6F8(0x4)
	float InScaleDistance; // 0x6FC(0x4)
	struct TMap<int32_t, struct FLineSection> Sections; // 0x700(0x50)
	struct TMap<int32_t, struct UMaterialInstanceDynamic*> SectionMaterials; // 0x750(0x50)

	// Object: Function GPLineRenderer.GPLineRendererComponent.UpdateLine
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8383510
	// Params: [ Num(3) Size(0x28) ]
	void UpdateLine(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals);

	// Object: Function GPLineRenderer.GPLineRendererComponent.SetLineVisible
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x838342c
	// Params: [ Num(2) Size(0x5) ]
	void SetLineVisible(int32_t SectionIndex, uint8_t bNewVisibility);

	// Object: Function GPLineRenderer.GPLineRendererComponent.RemoveLine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8383388
	// Params: [ Num(1) Size(0x4) ]
	void RemoveLine(int32_t SectionIndex);

	// Object: Function GPLineRenderer.GPLineRendererComponent.RemoveAllLines
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8383374
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllLines();

	// Object: Function GPLineRenderer.GPLineRendererComponent.IsLineVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x83832c4
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsLineVisible(int32_t SectionIndex);

	// Object: Function GPLineRenderer.GPLineRendererComponent.GetNumSections
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8383290
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumSections();

	// Object: Function GPLineRenderer.GPLineRendererComponent.CreateLineWithNormal
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8383074
	// Params: [ Num(6) Size(0x3D) ]
	void CreateLineWithNormal(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct TArray<struct FVector>& Normals, const struct FLinearColor& Color, float Thickness, uint8_t bScreenSpace);

	// Object: Function GPLineRenderer.GPLineRendererComponent.CreateLine2Points
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x8382e38
	// Params: [ Num(7) Size(0x35) ]
	void CreateLine2Points(int32_t SectionIndex, const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FLinearColor& Color, float Thickness, int32_t NumSegments, uint8_t bScreenSpace);

	// Object: Function GPLineRenderer.GPLineRendererComponent.CreateLine
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x8382c70
	// Params: [ Num(5) Size(0x2D) ]
	void CreateLine(int32_t SectionIndex, const struct TArray<struct FVector>& Vertices, const struct FLinearColor& Color, float Thickness, uint8_t bScreenSpace);
};

} // namespace SDK
