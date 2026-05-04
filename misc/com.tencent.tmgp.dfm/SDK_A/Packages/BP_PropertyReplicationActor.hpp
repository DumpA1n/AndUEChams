#pragma once

#include "../CoreUObject_classes.hpp"
#include "PropertyReplication.hpp"

namespace SDK
{

// Package: BP_PropertyReplicationActor
// Enums: 0
// Structs: 0
// Classes: 1

struct UPropertyReplicationComponent;
struct ABP_PropertyReplicationActor_C;

// Object: BlueprintGeneratedClass BP_PropertyReplicationActor.BP_PropertyReplicationActor_C
// Size: 0x388 (Inherited: 0x380)
struct ABP_PropertyReplicationActor_C : APropertyReplicationActor
{
	struct UPropertyReplicationComponent* PropertyReplication; // 0x380(0x8)
	DEFINE_UE_CLASS_HELPERS(ABP_PropertyReplicationActor_C, "BP_PropertyReplicationActor_C")

};

} // namespace SDK
