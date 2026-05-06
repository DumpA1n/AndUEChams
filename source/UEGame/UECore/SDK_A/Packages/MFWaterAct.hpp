#pragma once

#include "../CoreUObject_classes.hpp"
#include "DeveloperSettings.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFWaterAct
// Enums: 0
// Structs: 1
// Classes: 5

struct UMaterialInstanceDynamic;
struct UMaterialParameterCollectionInstance;
struct USceneCaptureComponent2D;
struct UTextureRenderTarget2D;
struct FMFWaterActMaterialParamsName;
struct AMFWaterActActor;
struct UMFWaterActInteractorComponent;
struct UMFWaterActSettings;
struct UMFWaterActSurfaceComponent;
struct UMFWaterActWorldSubSystem;

// Object: ScriptStruct MFWaterAct.MFWaterActMaterialParamsName
// Size: 0x50 (Inherited: 0x0)
struct FMFWaterActMaterialParamsName
{
	struct FName CaptureRT; // 0x0(0x8)
	struct FName PrevPrevHeightRT; // 0x8(0x8)
	struct FName PrevHeightRT; // 0x10(0x8)
	struct FName CurrentHeightRT; // 0x18(0x8)
	struct FName WaterDamping; // 0x20(0x8)
	struct FName WaterPressure; // 0x28(0x8)
	struct FName WaterViscosity; // 0x30(0x8)
	struct FName WorldPosXYToCaptureAreaUV_MulX_AddYZ; // 0x38(0x8)
	struct FName SimulateResolution; // 0x40(0x8)
	struct FName InvSimulateResolution; // 0x48(0x8)
};

// Object: Class MFWaterAct.MFWaterActActor
// Size: 0x358 (Inherited: 0x300)
struct AMFWaterActActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFWaterActActor, "MFWaterActActor")

	bool bShowInteractorComp; // 0x300(0x1)
	uint8_t Pad_0x301[0x3]; // 0x301(0x3)
	float CaptureSize; // 0x304(0x4)
	float GlobalDamping; // 0x308(0x4)
	float Pressure; // 0x30C(0x4)
	float Viscosity; // 0x310(0x4)
	uint8_t Pad_0x314[0x4]; // 0x314(0x4)
	struct USceneCaptureComponent2D* SceneCaptureComp; // 0x318(0x8)
	struct UMFWaterActWorldSubSystem* WASystem; // 0x320(0x8)
	struct TArray<struct UTextureRenderTarget2D*> RTHeights; // 0x328(0x10)
	struct UMaterialInstanceDynamic* SplatMaterialMID; // 0x338(0x8)
	struct UMaterialInstanceDynamic* HeightSimMID; // 0x340(0x8)
	struct UMaterialParameterCollectionInstance* MPCI; // 0x348(0x8)
	uint8_t Pad_0x350[0x8]; // 0x350(0x8)
};

// Object: Class MFWaterAct.MFWaterActInteractorComponent
// Size: 0x230 (Inherited: 0x230)
struct UMFWaterActInteractorComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFWaterActInteractorComponent, "MFWaterActInteractorComponent")

	bool bAutoSyncChildToSocketByItsName; // 0x224(0x1)
};

// Object: Class MFWaterAct.MFWaterActSettings
// Size: 0xD0 (Inherited: 0x38)
struct UMFWaterActSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMFWaterActSettings, "MFWaterActSettings")

	struct FMFWaterActMaterialParamsName MaterialParamsName; // 0x38(0x50)
	struct FSoftObjectPath SplatMaterial; // 0x88(0x18)
	struct FSoftObjectPath HeightSimMaterial; // 0xA0(0x18)
	struct FSoftObjectPath MaterialParamCollection; // 0xB8(0x18)
};

// Object: Class MFWaterAct.MFWaterActSurfaceComponent
// Size: 0x100 (Inherited: 0xE0)
struct UMFWaterActSurfaceComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFWaterActSurfaceComponent, "MFWaterActSurfaceComponent")

	uint8_t Pad_0xE0[0x20]; // 0xE0(0x20)
};

// Object: Class MFWaterAct.MFWaterActWorldSubSystem
// Size: 0x58 (Inherited: 0x30)
struct UMFWaterActWorldSubSystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMFWaterActWorldSubSystem, "MFWaterActWorldSubSystem")

	struct TArray<struct UMFWaterActSurfaceComponent*> WASurfaceComponents; // 0x30(0x10)
	struct TArray<struct UMFWaterActInteractorComponent*> WAInteractorComponents; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
};

} // namespace SDK
