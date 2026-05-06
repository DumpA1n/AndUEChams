#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: NiagaraCore
// Enums: 0
// Structs: 1
// Classes: 2

struct FNiagaraCompileHash;
struct UNiagaraMergeable;
struct UNiagaraDataInterfaceBase;

// Object: ScriptStruct NiagaraCore.NiagaraCompileHash
// Size: 0x10 (Inherited: 0x0)
struct FNiagaraCompileHash
{
	struct TArray<uint8_t> DataHash; // 0x0(0x10)
};

// Object: Class NiagaraCore.NiagaraMergeable
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraMergeable : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraMergeable, "NiagaraMergeable")
};

// Object: Class NiagaraCore.NiagaraDataInterfaceBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDataInterfaceBase : UNiagaraMergeable
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraDataInterfaceBase, "NiagaraDataInterfaceBase")
};

} // namespace SDK
