#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLaunch.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: BP_GLS_PreloadResource
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GLS_PreloadResource_C;

// Object: BlueprintGeneratedClass BP_GLS_PreloadResource.BP_GLS_PreloadResource_C
// Size: 0x58 (Inherited: 0x50)
struct UBP_GLS_PreloadResource_C : UDFGameLaunchStepBPBase
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x50(0x8)


	// Object: Function BP_GLS_PreloadResource.BP_GLS_PreloadResource_C.ResourcePreloadImplement
	// Flags: [Public|BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void ResourcePreloadImplement();

	// Object: Function BP_GLS_PreloadResource.BP_GLS_PreloadResource_C.BP_OnStepBegin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnStepBegin();

	// Object: Function BP_GLS_PreloadResource.BP_GLS_PreloadResource_C.RestartLuaVM
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void RestartLuaVM();

	// Object: Function BP_GLS_PreloadResource.BP_GLS_PreloadResource_C.DelayOnmore
	// Flags: [BlueprintCallable|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void DelayOnmore();

	// Object: Function BP_GLS_PreloadResource.BP_GLS_PreloadResource_C.ExecuteUbergraph_BP_GLS_PreloadResource
	// Flags: [Final|UbergraphFunction|HasDefaults]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_BP_GLS_PreloadResource(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(UBP_GLS_PreloadResource_C, "BP_GLS_PreloadResource_C")

};

} // namespace SDK
