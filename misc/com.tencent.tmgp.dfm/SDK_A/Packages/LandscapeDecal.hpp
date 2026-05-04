#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LandscapeDecal
// Enums: 0
// Structs: 0
// Classes: 4

struct UStaticMeshComponent;
struct UAutoFitHeightComponent;
struct ALandscapeDecalActor;
struct ULandscapeDecalComponent;
struct AStereoDecalActor;

// Object: Class LandscapeDecal.AutoFitHeightComponent
// Size: 0x108 (Inherited: 0xF8)
struct UAutoFitHeightComponent : UActorComponent
{
	struct UStaticMeshComponent* PlanarMeshComponent; // 0xF8(0x8)
	struct UStaticMeshComponent* StereoMeshComponent; // 0x100(0x8)
	DEFINE_UE_CLASS_HELPERS(UAutoFitHeightComponent, "AutoFitHeightComponent")

};

// Object: Class LandscapeDecal.LandscapeDecalActor
// Size: 0x378 (Inherited: 0x370)
struct ALandscapeDecalActor : AActor
{
	struct UStaticMeshComponent* PlanarMeshComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(ALandscapeDecalActor, "LandscapeDecalActor")

};

// Object: Class LandscapeDecal.LandscapeDecalComponent
// Size: 0x830 (Inherited: 0x830)
struct ULandscapeDecalComponent : UStaticMeshComponent
{	DEFINE_UE_CLASS_HELPERS(ULandscapeDecalComponent, "LandscapeDecalComponent")

};

// Object: Class LandscapeDecal.StereoDecalActor
// Size: 0x380 (Inherited: 0x378)
struct AStereoDecalActor : ALandscapeDecalActor
{
	struct UStaticMeshComponent* SteroMeshComponent; // 0x378(0x8)
	DEFINE_UE_CLASS_HELPERS(AStereoDecalActor, "StereoDecalActor")

};

} // namespace SDK
