#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: PixEmbed
// Enums: 0
// Structs: 0
// Classes: 1

struct UPixEmbedBPLibrary;

// Object: Class PixEmbed.PixEmbedBPLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPixEmbedBPLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UPixEmbedBPLibrary, "PixEmbedBPLibrary")

	// Object: Function PixEmbed.PixEmbedBPLibrary.PixEmbed_Startup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x514d728
	// Params: [ Num(1) Size(0x1) ]
	static bool PixEmbed_Startup();

	// Object: Function PixEmbed.PixEmbedBPLibrary.PixEmbed_Shutdown
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x514d6f0
	// Params: [ Num(1) Size(0x1) ]
	static bool PixEmbed_Shutdown();

	// Object: Function PixEmbed.PixEmbedBPLibrary.PixEmbed_OpenNativeView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x514d43c
	// Params: [ Num(8) Size(0x29) ]
	static bool PixEmbed_OpenNativeView(int32_t Left, int32_t Top, int32_t Width, int32_t Height, bool IsNativeRender, bool IsCoreAsync, struct FString strUrl);

	// Object: Function PixEmbed.PixEmbedBPLibrary.PixEmbed_CloseNativeView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x514d404
	// Params: [ Num(1) Size(0x1) ]
	static bool PixEmbed_CloseNativeView();
};

} // namespace SDK
