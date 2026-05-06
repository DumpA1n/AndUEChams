#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Dawn20RuntimeComponents
// Enums: 1
// Structs: 2
// Classes: 5

struct FDawn20InteriorVolumePlaneGroup;
struct FDawn20InteriorVolumePlane;
struct ADawn20InteriorPortalActor;
struct ADawn20InteriorVolume;
struct ADawn20InteriorVolumeMeshProxy;
struct UDawn20InteriorVolumeMeshProxyPreviewComponent;
struct UDawn20InteriorVolumePlaneGroupComponent;

// Object: Enum Dawn20RuntimeComponents.EDawn20InteriorVolumePlaneBiasMode
enum class EDawn20InteriorVolumePlaneBiasMode : uint8_t
{
	None = 0,
	ForceEnable = 1,
	ForceDisable = 2,
	EDawn20InteriorVolumePlaneBiasMode_MAX = 3
};

// Object: ScriptStruct Dawn20RuntimeComponents.Dawn20InteriorVolumePlaneGroup
// Size: 0x50 (Inherited: 0x0)
struct FDawn20InteriorVolumePlaneGroup
{
	struct TArray<struct FDawn20InteriorVolumePlane> Planes; // 0x0(0x10)
	struct TArray<struct FVector> LocalVertices; // 0x10(0x10)
	struct TArray<int32_t> Indices; // 0x20(0x10)
	struct FBox LocalBounds; // 0x30(0x1C)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
};

// Object: ScriptStruct Dawn20RuntimeComponents.Dawn20InteriorVolumePlane
// Size: 0x18 (Inherited: 0x0)
struct FDawn20InteriorVolumePlane
{
	int32_t Index0; // 0x0(0x4)
	int32_t Index1; // 0x4(0x4)
	int32_t Index2; // 0x8(0x4)
	float ExtraBrickTextureUVBias; // 0xC(0x4)
	float BrickTextureUVBias; // 0x10(0x4)
	EDawn20InteriorVolumePlaneBiasMode OverrideBiasMode; // 0x14(0x1)
	uint8_t bEnableBias : 1; // 0x15(0x1), Mask(0x1)
	uint8_t BitPad_0x15_1 : 7; // 0x15(0x1)
	uint8_t Pad_0x16[0x2]; // 0x16(0x2)
};

// Object: Class Dawn20RuntimeComponents.Dawn20InteriorPortalActor
// Size: 0x308 (Inherited: 0x300)
struct ADawn20InteriorPortalActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADawn20InteriorPortalActor, "Dawn20InteriorPortalActor")

	struct UDawn20InteriorVolumePlaneGroupComponent* InteriorVolumePlaneGroupComponent; // 0x300(0x8)
};

// Object: Class Dawn20RuntimeComponents.Dawn20InteriorVolume
// Size: 0x340 (Inherited: 0x338)
struct ADawn20InteriorVolume : AVolume
{
	DEFINE_UE_CLASS_HELPERS(ADawn20InteriorVolume, "Dawn20InteriorVolume")

	struct UDawn20InteriorVolumePlaneGroupComponent* InteriorVolumePlaneGroupComponent; // 0x338(0x8)
};

// Object: Class Dawn20RuntimeComponents.Dawn20InteriorVolumeMeshProxy
// Size: 0x308 (Inherited: 0x300)
struct ADawn20InteriorVolumeMeshProxy : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADawn20InteriorVolumeMeshProxy, "Dawn20InteriorVolumeMeshProxy")

	struct UDawn20InteriorVolumePlaneGroupComponent* InteriorVolumePlaneGroupComponent; // 0x300(0x8)
};

// Object: Class Dawn20RuntimeComponents.Dawn20InteriorVolumeMeshProxyPreviewComponent
// Size: 0x6A0 (Inherited: 0x680)
struct UDawn20InteriorVolumeMeshProxyPreviewComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UDawn20InteriorVolumeMeshProxyPreviewComponent, "Dawn20InteriorVolumeMeshProxyPreviewComponent")

	struct FBoxSphereBounds MeshBounds; // 0x678(0x1C)
	uint8_t Pad_0x69C[0x4]; // 0x69C(0x4)
};

// Object: Class Dawn20RuntimeComponents.Dawn20InteriorVolumePlaneGroupComponent
// Size: 0x270 (Inherited: 0x230)
struct UDawn20InteriorVolumePlaneGroupComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UDawn20InteriorVolumePlaneGroupComponent, "Dawn20InteriorVolumePlaneGroupComponent")

	struct FVector InnerScale; // 0x230(0xC)
	float Weight; // 0x23C(0x4)
	struct TArray<struct FDawn20InteriorVolumePlaneGroup> PlaneGroups; // 0x240(0x10)
	float FadeoutThickness; // 0x250(0x4)
	struct FBoxSphereBounds PlaneGroupBounds; // 0x254(0x1C)

	// Object: Function Dawn20RuntimeComponents.Dawn20InteriorVolumePlaneGroupComponent.SetWeight
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x51c91ac
	// Params: [ Num(1) Size(0x4) ]
	void SetWeight(float InWeight);
};

} // namespace SDK
