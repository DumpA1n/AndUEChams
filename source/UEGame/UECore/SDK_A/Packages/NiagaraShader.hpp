#pragma once

#include "../CoreUObject_classes.hpp"

namespace SDK
{

// Package: NiagaraShader
// Enums: 1
// Structs: 4
// Classes: 1

struct FSimulationStageMetaData;
struct FNiagaraDataInterfaceGPUParamInfo;
struct FNiagaraDataInterfaceGeneratedFunction;
struct FNiagaraCompileEvent;
struct UNiagaraScriptBase;

// Object: Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class EFNiagaraCompileEventSeverity : uint8_t
{
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};

// Object: ScriptStruct NiagaraShader.SimulationStageMetaData
// Size: 0x30 (Inherited: 0x0)
struct FSimulationStageMetaData
{
	struct FName SimulationStageName; // 0x0(0x8)
	struct FName IterationSource; // 0x8(0x8)
	uint8_t bSpawnOnly : 1; // 0x10(0x1), Mask(0x1)
	uint8_t bWritesParticles : 1; // 0x10(0x1), Mask(0x2)
	uint8_t bPartialParticleUpdate : 1; // 0x10(0x1), Mask(0x4)
	uint8_t BitPad_0x10_3 : 5; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<struct FName> OutputDestinations; // 0x18(0x10)
	int32_t MinStage; // 0x28(0x4)
	int32_t MaxStage; // 0x2C(0x4)
};

// Object: ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x30 (Inherited: 0x0)
struct FNiagaraDataInterfaceGPUParamInfo
{
	struct FString DataInterfaceHLSLSymbol; // 0x0(0x10)
	struct FString DIClassName; // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
};

// Object: ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28 (Inherited: 0x0)
struct FNiagaraDataInterfaceGeneratedFunction
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x48 (Inherited: 0x0)
struct FNiagaraCompileEvent
{
	EFNiagaraCompileEventSeverity Severity; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FGuid NodeGuid; // 0x18(0x10)
	struct FGuid PinGuid; // 0x28(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x38(0x10)
};

// Object: Class NiagaraShader.NiagaraScriptBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraScriptBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UNiagaraScriptBase, "NiagaraScriptBase")
};

} // namespace SDK
