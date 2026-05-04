#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_Sky_Sphere
// Enums: 0
// Structs: 0
// Classes: 1

struct ADirectionalLight;
struct UCurveLinearColor;
struct UMaterialInstanceDynamic;
struct USceneComponent;
struct UStaticMeshComponent;
struct ABP_Sky_Sphere_C;

// Object: BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// Size: 0x410 (Inherited: 0x370)
struct ABP_Sky_Sphere_C : AActor
{
	struct UStaticMeshComponent* SkySphereMesh; // 0x370(0x8)
	struct USceneComponent* Base; // 0x378(0x8)
	struct UMaterialInstanceDynamic* Sky_material; // 0x380(0x8)
	uint8_t Refresh_material : 1; // 0x388(0x1), Mask(0x1)
	uint8_t BitPad_0x388_1 : 7; // 0x388(0x1)
	uint8_t Pad_0x389[0x7]; // 0x389(0x7)
	struct ADirectionalLight* Directional_light_actor; // 0x390(0x8)
	uint8_t Colors_determined_by_sun_position : 1; // 0x398(0x1), Mask(0x1)
	uint8_t BitPad_0x398_1 : 7; // 0x398(0x1)
	uint8_t Pad_0x399[0x3]; // 0x399(0x3)
	float Sun_height; // 0x39C(0x4)
	float Sun_brightness; // 0x3A0(0x4)
	float Horizon_falloff; // 0x3A4(0x4)
	struct FLinearColor Zenith_color; // 0x3A8(0x10)
	struct FLinearColor Horizon_color; // 0x3B8(0x10)
	struct FLinearColor Cloud_color; // 0x3C8(0x10)
	struct FLinearColor Overall_color; // 0x3D8(0x10)
	float Cloud_speed; // 0x3E8(0x4)
	float Cloud_opacity; // 0x3EC(0x4)
	float Stars_brightness; // 0x3F0(0x4)
	uint8_t Pad_0x3F4[0x4]; // 0x3F4(0x4)
	struct UCurveLinearColor* Horizon_color_curve; // 0x3F8(0x8)
	struct UCurveLinearColor* Zenith_color_curve; // 0x400(0x8)
	struct UCurveLinearColor* Cloud_color_curve; // 0x408(0x8)


	// Object: Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void RefreshMaterial();

	// Object: Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void UpdateSunDirection();

	// Object: Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript
	// Flags: [Event|Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void UserConstructionScript();
	DEFINE_UE_CLASS_HELPERS(ABP_Sky_Sphere_C, "BP_Sky_Sphere_C")

};

} // namespace SDK
