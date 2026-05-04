#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: OpenWorldRuntime
// Enums: 0
// Structs: 0
// Classes: 3

struct AClipmapActor;
struct UClipmap;
struct UExponentialHeightFogComponent;
struct UOpenWorldBPFunctionLibrary;
struct UOpenWorldRuntimeUtils;
struct UOpenWorldSettings;

// Object: Class OpenWorldRuntime.OpenWorldBPFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOpenWorldBPFunctionLibrary : UBlueprintFunctionLibrary
{

	// Object: Function OpenWorldRuntime.OpenWorldBPFunctionLibrary.SetUnderWaterFogHeightMapUV
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7c3b9a8
	// Params: [ Num(2) Size(0x14) ]
	static void SetUnderWaterFogHeightMapUV(struct UExponentialHeightFogComponent* HeightFogComp, struct FVector UV);

	// Object: Function OpenWorldRuntime.OpenWorldBPFunctionLibrary.GetClipmapActorOriginTextureSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7c3b904
	// Params: [ Num(2) Size(0x10) ]
	static struct FIntPoint GetClipmapActorOriginTextureSize(struct AClipmapActor* ClipmapActor);

	// Object: Function OpenWorldRuntime.OpenWorldBPFunctionLibrary.GetClipmapActorOriginClipmap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7c3b824
	// Params: [ Num(3) Size(0x18) ]
	static struct UClipmap* GetClipmapActorOriginClipmap(struct AClipmapActor* ClipmapActor, int32_t Index);

	// Object: Function OpenWorldRuntime.OpenWorldBPFunctionLibrary.GetClipmapActorLeftTopPosXYAndTextureSize
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x7c3b77c
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetClipmapActorLeftTopPosXYAndTextureSize(struct AClipmapActor* ClipmapActor);
	DEFINE_UE_CLASS_HELPERS(UOpenWorldBPFunctionLibrary, "OpenWorldBPFunctionLibrary")

};

// Object: Class OpenWorldRuntime.OpenWorldRuntimeUtils
// Size: 0x28 (Inherited: 0x28)
struct UOpenWorldRuntimeUtils : UBlueprintFunctionLibrary
{	DEFINE_UE_CLASS_HELPERS(UOpenWorldRuntimeUtils, "OpenWorldRuntimeUtils")

};

// Object: Class OpenWorldRuntime.OpenWorldSettings
// Size: 0x88 (Inherited: 0x38)
struct UOpenWorldSettings : UDeveloperSettings
{
	uint8_t Pad_0x38[0x50]; // 0x38(0x50)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldSettings, "OpenWorldSettings")

};

} // namespace SDK
