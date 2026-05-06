#pragma once

#include "../CoreUObject_classes.hpp"
#include "SGFramework.hpp"

namespace SDK
{

// Package: BP_GameInstance
// Enums: 0
// Structs: 0
// Classes: 1

struct UBP_GameInstance_C;

// Object: BlueprintGeneratedClass BP_GameInstance.BP_GameInstance_C
// Size: 0x298 (Inherited: 0x288)
struct UBP_GameInstance_C : USGGameInstance
{
	DEFINE_UE_CLASS_HELPERS(UBP_GameInstance_C, "BP_GameInstance_C")

	struct FMulticastInlineDelegate OnAndroidBackPressed; // 0x288(0x10)

	// Object: Function BP_GameInstance.BP_GameInstance_C.OnAndroidBackPressed__DelegateSignature
	// Flags: [Public|Delegate|BlueprintCallable|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnAndroidBackPressed__DelegateSignature();
};

} // namespace SDK
