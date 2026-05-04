#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MeshDecal
// Enums: 0
// Structs: 1
// Classes: 4

struct UMaterialInterface;
struct FInnerRect;
struct AMeshDecalActor;
struct UDecalUpdateCommandlet;
struct UMeshDecalComponent;
struct UMeshDecalSettings;

// Object: ScriptStruct MeshDecal.InnerRect
// Size: 0x10 (Inherited: 0x0)
struct FInnerRect
{
	float Left; // 0x0(0x4)
	float Top; // 0x4(0x4)
	float Right; // 0x8(0x4)
	float Bottom; // 0xC(0x4)
};

// Object: Class MeshDecal.MeshDecalActor
// Size: 0x378 (Inherited: 0x370)
struct AMeshDecalActor : AActor
{
	struct UMeshDecalComponent* MeshDecalComponent; // 0x370(0x8)
	DEFINE_UE_CLASS_HELPERS(AMeshDecalActor, "MeshDecalActor")

};

// Object: Class MeshDecal.DecalUpdateCommandlet
// Size: 0x88 (Inherited: 0x88)
struct UDecalUpdateCommandlet : UCommandlet
{	DEFINE_UE_CLASS_HELPERS(UDecalUpdateCommandlet, "DecalUpdateCommandlet")

};

// Object: Class MeshDecal.MeshDecalComponent
// Size: 0x240 (Inherited: 0x240)
struct UMeshDecalComponent : USceneComponent
{	DEFINE_UE_CLASS_HELPERS(UMeshDecalComponent, "MeshDecalComponent")

};

// Object: Class MeshDecal.MeshDecalSettings
// Size: 0x68 (Inherited: 0x38)
struct UMeshDecalSettings : UDeveloperSettings
{
	uint8_t bBuildDeferredMeshDecalForPC : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TSoftObjectPtr<UMaterialInterface> DeferredMeshDecalMaterialTemplate; // 0x40(0x28)
	DEFINE_UE_CLASS_HELPERS(UMeshDecalSettings, "MeshDecalSettings")

};

} // namespace SDK
