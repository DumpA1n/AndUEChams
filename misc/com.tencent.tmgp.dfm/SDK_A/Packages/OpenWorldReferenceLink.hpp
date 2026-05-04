#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: OpenWorldReferenceLink
// Enums: 0
// Structs: 4
// Classes: 2

struct FOpenWorldLinkGroupInfo;
struct FOpenWorldVarInfoGroup;
struct FOpenWorldVarInfo;
struct FOpenWorldRefLinkComps;
struct UOpenWorldRefLinkComponent;
struct AOpenWorldRefLinkSubSystem;

// Object: ScriptStruct OpenWorldReferenceLink.OpenWorldLinkGroupInfo
// Size: 0x18 (Inherited: 0x0)
struct FOpenWorldLinkGroupInfo
{
	struct FName ObjectName; // 0x0(0x8)
	struct TArray<struct FOpenWorldVarInfoGroup> VarInfoGroups; // 0x8(0x10)
};

// Object: ScriptStruct OpenWorldReferenceLink.OpenWorldVarInfoGroup
// Size: 0x10 (Inherited: 0x0)
struct FOpenWorldVarInfoGroup
{
	struct TArray<struct FOpenWorldVarInfo> VarInfos; // 0x0(0x10)
};

// Object: ScriptStruct OpenWorldReferenceLink.OpenWorldVarInfo
// Size: 0xC (Inherited: 0x0)
struct FOpenWorldVarInfo
{
	struct FName VariableName; // 0x0(0x8)
	int32_t Index; // 0x8(0x4)
};

// Object: ScriptStruct OpenWorldReferenceLink.OpenWorldRefLinkComps
// Size: 0x28 (Inherited: 0x0)
struct FOpenWorldRefLinkComps
{
	struct TArray<struct UOpenWorldRefLinkComponent*> Comps; // 0x0(0x10)
	struct UOpenWorldRefLinkComponent* MainComp; // 0x10(0x8)
	struct FGuid Guid; // 0x18(0x10)
};

// Object: Class OpenWorldReferenceLink.OpenWorldRefLinkComponent
// Size: 0x148 (Inherited: 0xF8)
struct UOpenWorldRefLinkComponent : UActorComponent
{
	struct TMap<struct FGuid, struct FOpenWorldLinkGroupInfo> LinkGroupMap; // 0xF8(0x50)
	DEFINE_UE_CLASS_HELPERS(UOpenWorldRefLinkComponent, "OpenWorldRefLinkComponent")

};

// Object: Class OpenWorldReferenceLink.OpenWorldRefLinkSubSystem
// Size: 0x3C0 (Inherited: 0x370)
struct AOpenWorldRefLinkSubSystem : ALevelSubsystem
{
	struct TMap<struct FGuid, struct FOpenWorldRefLinkComps> LinkCompsMap; // 0x370(0x50)
	DEFINE_UE_CLASS_HELPERS(AOpenWorldRefLinkSubSystem, "OpenWorldRefLinkSubSystem")

};

} // namespace SDK
