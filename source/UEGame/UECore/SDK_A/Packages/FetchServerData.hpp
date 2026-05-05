#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLoading.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: FetchServerData
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFMFlowManager;
struct UFetchServerData_C;

// Object: BlueprintGeneratedClass FetchServerData.FetchServerData_C
// Size: 0x70 (Inherited: 0x68)
struct UFetchServerData_C : UDFMFlowBPBase
{
	DEFINE_UE_CLASS_HELPERS(UFetchServerData_C, "FetchServerData_C")

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x68(0x8)

	// Object: Function FetchServerData.FetchServerData_C.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function FetchServerData.FetchServerData_C.ExecuteUbergraph_FetchServerData
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_FetchServerData(int32_t EntryPoint);
};

} // namespace SDK
