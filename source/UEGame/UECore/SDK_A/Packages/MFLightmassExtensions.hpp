#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MFLightmassExtensions
// Enums: 0
// Structs: 0
// Classes: 7

struct AActor;
struct UMFILCTwoSideSampleStaticMeshComponent;
struct AMFILCDebugSamplePointActor;
struct UMFILCDebugSamplePointComponent;
struct UMFILCDynamicScaleComponent;
struct AMFILCDynamicScaleVolume;
struct AMFILCMaskVolume;
struct UMFILCSampleProxyComponent;

// Object: Class MFLightmassExtensions.MFILCTwoSideSampleStaticMeshComponent
// Size: 0x7D0 (Inherited: 0x790)
struct UMFILCTwoSideSampleStaticMeshComponent : UStaticMeshComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFILCTwoSideSampleStaticMeshComponent, "MFILCTwoSideSampleStaticMeshComponent")

	uint8_t bUseTwoSideILCSample : 1; // 0x78C(0x1), Mask(0x1)
	float ForwardSampleHeightOffset; // 0x790(0x4)
	float BackSampleHeightOffset; // 0x794(0x4)
	float ForwardSampleDistanceOffset; // 0x798(0x4)
	float BackSampleDistanceOffset; // 0x79C(0x4)
	float ForwardSampleHorizontalOffset; // 0x7A0(0x4)
	float BackSampleHorizontalOffset; // 0x7A4(0x4)
	float IndoorSkyVisibilityCompensation; // 0x7A8(0x4)
	struct FVector CachedActorForwardDirection; // 0x7AC(0xC)
	struct FVector CachedActorRightDirection; // 0x7B8(0xC)
	uint8_t BitPad_0x7C4_1 : 7; // 0x7C4(0x1)
	uint8_t Pad_0x7C5[0xB]; // 0x7C5(0xB)
};

// Object: Class MFLightmassExtensions.MFILCDebugSamplePointActor
// Size: 0x308 (Inherited: 0x300)
struct AMFILCDebugSamplePointActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFILCDebugSamplePointActor, "MFILCDebugSamplePointActor")

	struct UMFILCDebugSamplePointComponent* SamplePointComponent; // 0x300(0x8)
};

// Object: Class MFLightmassExtensions.MFILCDebugSamplePointComponent
// Size: 0x680 (Inherited: 0x680)
struct UMFILCDebugSamplePointComponent : UPrimitiveComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFILCDebugSamplePointComponent, "MFILCDebugSamplePointComponent")
};

// Object: Class MFLightmassExtensions.MFILCDynamicScaleComponent
// Size: 0x240 (Inherited: 0x230)
struct UMFILCDynamicScaleComponent : UIndirectLightingDynamicInjectionComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFILCDynamicScaleComponent, "MFILCDynamicScaleComponent")

	float CenterRadius; // 0x230(0x4)
	float SkyLightLerpFactor; // 0x234(0x4)
	float ILCScaleFactor; // 0x238(0x4)
	float SkyLightScaleFactor; // 0x23C(0x4)

	// Object: Function MFLightmassExtensions.MFILCDynamicScaleComponent.SetSkyLightScaleFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4dd6cec
	// Params: [ Num(1) Size(0x4) ]
	void SetSkyLightScaleFactor(float SkyLightScaleFactor);

	// Object: Function MFLightmassExtensions.MFILCDynamicScaleComponent.SetSkyLightLerpFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4dd6e3c
	// Params: [ Num(1) Size(0x4) ]
	void SetSkyLightLerpFactor(float SkyLightLerpFactor);

	// Object: Function MFLightmassExtensions.MFILCDynamicScaleComponent.SetILCScaleFactor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x4dd6d94
	// Params: [ Num(1) Size(0x4) ]
	void SetILCScaleFactor(float ILCScaleFactor);
};

// Object: Class MFLightmassExtensions.MFILCDynamicScaleVolume
// Size: 0x308 (Inherited: 0x300)
struct AMFILCDynamicScaleVolume : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMFILCDynamicScaleVolume, "MFILCDynamicScaleVolume")

	struct UMFILCDynamicScaleComponent* ILCDynamicScaleComponent; // 0x300(0x8)
};

// Object: Class MFLightmassExtensions.MFILCMaskVolume
// Size: 0x340 (Inherited: 0x340)
struct AMFILCMaskVolume : ALightmassInteriorMaskActor
{
	DEFINE_UE_CLASS_HELPERS(AMFILCMaskVolume, "MFILCMaskVolume")

	uint8_t bEnableDivideILC : 1; // 0x33D(0x1), Mask(0x1)
};

// Object: Class MFLightmassExtensions.MFILCSampleProxyComponent
// Size: 0x240 (Inherited: 0x230)
struct UMFILCSampleProxyComponent : USceneComponent
{
	DEFINE_UE_CLASS_HELPERS(UMFILCSampleProxyComponent, "MFILCSampleProxyComponent")

	struct AActor* ProxyActor; // 0x228(0x8)
	uint8_t Pad_0x238[0x8]; // 0x238(0x8)

	// Object: Function MFLightmassExtensions.MFILCSampleProxyComponent.DestroyILCProxyActor
	// Flags: [Final|Native|Protected]
	// Offset: 0x4dd6fc8
	// Params: [ Num(0) Size(0x0) ]
	void DestroyILCProxyActor();

	// Object: Function MFLightmassExtensions.MFILCSampleProxyComponent.CreateILCProxyActor
	// Flags: [Final|Native|Protected]
	// Offset: 0x4dd6fdc
	// Params: [ Num(0) Size(0x0) ]
	void CreateILCProxyActor();
};

} // namespace SDK
