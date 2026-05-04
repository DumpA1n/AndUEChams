#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameLoading.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: LF_PrepareNecessaryServerData
// Enums: 0
// Structs: 0
// Classes: 1

struct UDFMFlowManager;
struct ULF_PrepareNecessaryServerData_C;

// Object: BlueprintGeneratedClass LF_PrepareNecessaryServerData.LF_PrepareNecessaryServerData_C
// Size: 0x70 (Inherited: 0x68)
struct ULF_PrepareNecessaryServerData_C : UDFMFlowBPBase
{
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x68(0x8)


	// Object: Function LF_PrepareNecessaryServerData.LF_PrepareNecessaryServerData_C.BP_Init
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_Init(struct UDFMFlowManager* inFlowManager);

	// Object: Function LF_PrepareNecessaryServerData.LF_PrepareNecessaryServerData_C.ExecuteUbergraph_LF_PrepareNecessaryServerData
	// Flags: [Final|UbergraphFunction]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void ExecuteUbergraph_LF_PrepareNecessaryServerData(int32_t EntryPoint);
	DEFINE_UE_CLASS_HELPERS(ULF_PrepareNecessaryServerData_C, "LF_PrepareNecessaryServerData_C")

};

} // namespace SDK
