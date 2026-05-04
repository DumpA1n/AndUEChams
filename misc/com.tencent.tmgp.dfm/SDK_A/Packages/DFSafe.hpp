#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: DFSafe
// Enums: 0
// Structs: 0
// Classes: 1

struct UIDFSafe;

// Object: Class DFSafe.IDFSafe
// Size: 0x28 (Inherited: 0x28)
struct UIDFSafe : UObject
{

	// Object: Function DFSafe.IDFSafe.InstallBoot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7bd70dc
	// Params: [ Num(1) Size(0x4) ]
	int32_t InstallBoot();

	// Object: Function DFSafe.IDFSafe.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7bd70a8
	// Params: [ Num(1) Size(0x8) ]
	static struct UIDFSafe* GetInstance();
	DEFINE_UE_CLASS_HELPERS(UIDFSafe, "IDFSafe")

};

} // namespace SDK
