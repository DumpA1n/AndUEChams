#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "StructUtils.hpp"

namespace SDK
{

// Package: MassEntity
// Enums: 3
// Structs: 31
// Classes: 10

struct FConstSharedStruct;
struct FSharedStruct;
struct FMassEntityHandle;
struct FCommandBufferEntryBase;
struct FCommandRemoveComposition;
struct FCommandSwapTags;
struct FCommandRemoveTag;
struct FCommandAddTag;
struct FCommandRemoveFragmentList;
struct FCommandAddFragmentList;
struct FCommandRemoveFragment;
struct FMassCommandAddFragmentInstanceList;
struct FCommandAddFragmentInstance;
struct FCommandAddFragment;
struct FBuildEntityFromFragmentInstances;
struct FBuildEntityFromFragmentInstance;
struct FDeferredCommand;
struct FMassEntityQuery;
struct FMassProcessingPhaseConfig;
struct FMassSharedFragment;
struct FMassChunkFragment;
struct FMassTag;
struct FMassFragment;
struct FMassEntityView;
struct FMassRuntimePipeline;
struct FMassObserversMap;
struct FMassObserverManager;
struct FMassProcessorClassCollection;
struct FMassEntityObserverClassesMap;
struct FMassProcessingPhase;
struct FMassProcessingContext;
struct FProcessorAuxDataBase;
struct FMassProcessorExecutionOrder;
struct UMassModuleSettings;
struct UMassEntitySettings;
struct UMassEntitySubsystem;
struct UMassProcessor;
struct UMassObserverProcessor;
struct UMassObserverRegistry;
struct UMassProcessingPhaseManager;
struct UMassCompositeProcessor;
struct UMassSchematic;
struct UMassSettings;

// Object: Enum MassEntity.EMassObservedOperation
enum class EMassObservedOperation : uint8_t
{
	Add = 0,
	Remove = 1,
	MAX = 2
};

// Object: Enum MassEntity.EMassProcessingPhase
enum class EMassProcessingPhase : uint8_t
{
	PrePhysics = 0,
	StartPhysics = 1,
	DuringPhysics = 2,
	EndPhysics = 3,
	PostPhysics = 4,
	FrameEnd = 5,
	MAX = 6
};

// Object: Enum MassEntity.EProcessorExecutionFlags
enum class EProcessorExecutionFlags : uint8_t
{
	None = 0,
	Standalone = 1,
	Server = 2,
	Client = 4,
	All = 7,
	EProcessorExecutionFlags_MAX = 8
};

// Object: ScriptStruct MassEntity.MassEntityHandle
// Size: 0x8 (Inherited: 0x0)
struct FMassEntityHandle
{
	int32_t Index; // 0x0(0x4)
	int32_t SerialNumber; // 0x4(0x4)
};

// Object: ScriptStruct MassEntity.CommandBufferEntryBase
// Size: 0x10 (Inherited: 0x0)
struct FCommandBufferEntryBase
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct MassEntity.CommandRemoveComposition
// Size: 0x90 (Inherited: 0x10)
struct FCommandRemoveComposition : FCommandBufferEntryBase
{
	uint8_t Pad_0x10[0x80]; // 0x10(0x80)
};

// Object: ScriptStruct MassEntity.CommandSwapTags
// Size: 0x20 (Inherited: 0x10)
struct FCommandSwapTags : FCommandBufferEntryBase
{
	struct UScriptStruct* OldTagType; // 0x10(0x8)
	struct UScriptStruct* NewTagType; // 0x18(0x8)
};

// Object: ScriptStruct MassEntity.CommandRemoveTag
// Size: 0x18 (Inherited: 0x10)
struct FCommandRemoveTag : FCommandBufferEntryBase
{
	struct UScriptStruct* StructParam; // 0x10(0x8)
};

// Object: ScriptStruct MassEntity.CommandAddTag
// Size: 0x18 (Inherited: 0x10)
struct FCommandAddTag : FCommandBufferEntryBase
{
	struct UScriptStruct* StructParam; // 0x10(0x8)
};

// Object: ScriptStruct MassEntity.CommandRemoveFragmentList
// Size: 0x20 (Inherited: 0x10)
struct FCommandRemoveFragmentList : FCommandBufferEntryBase
{
	struct TArray<struct UScriptStruct*> FragmentList; // 0x10(0x10)
};

// Object: ScriptStruct MassEntity.CommandAddFragmentList
// Size: 0x20 (Inherited: 0x10)
struct FCommandAddFragmentList : FCommandBufferEntryBase
{
	struct TArray<struct UScriptStruct*> FragmentList; // 0x10(0x10)
};

// Object: ScriptStruct MassEntity.CommandRemoveFragment
// Size: 0x18 (Inherited: 0x10)
struct FCommandRemoveFragment : FCommandBufferEntryBase
{
	struct UScriptStruct* StructParam; // 0x10(0x8)
};

// Object: ScriptStruct MassEntity.MassCommandAddFragmentInstanceList
// Size: 0x20 (Inherited: 0x10)
struct FMassCommandAddFragmentInstanceList : FCommandBufferEntryBase
{
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct MassEntity.CommandAddFragmentInstance
// Size: 0x20 (Inherited: 0x10)
struct FCommandAddFragmentInstance : FCommandBufferEntryBase
{
	uint8_t Pad_0x10[0x10]; // 0x10(0x10)
};

// Object: ScriptStruct MassEntity.CommandAddFragment
// Size: 0x18 (Inherited: 0x10)
struct FCommandAddFragment : FCommandBufferEntryBase
{
	struct UScriptStruct* StructParam; // 0x10(0x8)
};

// Object: ScriptStruct MassEntity.BuildEntityFromFragmentInstances
// Size: 0x48 (Inherited: 0x10)
struct FBuildEntityFromFragmentInstances : FCommandBufferEntryBase
{
	uint8_t Pad_0x10[0x38]; // 0x10(0x38)
};

// Object: ScriptStruct MassEntity.BuildEntityFromFragmentInstance
// Size: 0x48 (Inherited: 0x10)
struct FBuildEntityFromFragmentInstance : FCommandBufferEntryBase
{
	uint8_t Pad_0x10[0x38]; // 0x10(0x38)
};

// Object: ScriptStruct MassEntity.DeferredCommand
// Size: 0x50 (Inherited: 0x10)
struct FDeferredCommand : FCommandBufferEntryBase
{
	uint8_t Pad_0x10[0x40]; // 0x10(0x40)
};

// Object: ScriptStruct MassEntity.MassEntityQuery
// Size: 0x290 (Inherited: 0x0)
struct FMassEntityQuery
{
	uint8_t Pad_0x0[0x290]; // 0x0(0x290)
};

// Object: ScriptStruct MassEntity.MassProcessingPhaseConfig
// Size: 0x30 (Inherited: 0x0)
struct FMassProcessingPhaseConfig
{
	struct FName PhaseName; // 0x0(0x8)
	struct UMassCompositeProcessor* PhaseGroupClass; // 0x8(0x8)
	struct TArray<struct FName> OffGameThreadGroupNames; // 0x10(0x10)
	struct TArray<struct UMassProcessor*> ProcessorCDOs; // 0x20(0x10)
};

// Object: ScriptStruct MassEntity.MassSharedFragment
// Size: 0x1 (Inherited: 0x0)
struct FMassSharedFragment
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MassEntity.MassChunkFragment
// Size: 0x1 (Inherited: 0x0)
struct FMassChunkFragment
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MassEntity.MassTag
// Size: 0x1 (Inherited: 0x0)
struct FMassTag
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MassEntity.MassFragment
// Size: 0x1 (Inherited: 0x0)
struct FMassFragment
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MassEntity.MassEntityView
// Size: 0x20 (Inherited: 0x0)
struct FMassEntityView
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: ScriptStruct MassEntity.MassRuntimePipeline
// Size: 0x10 (Inherited: 0x0)
struct FMassRuntimePipeline
{
	struct TArray<struct UMassProcessor*> Processors; // 0x0(0x10)
};

// Object: ScriptStruct MassEntity.MassObserversMap
// Size: 0x50 (Inherited: 0x0)
struct FMassObserversMap
{
	struct TMap<struct UScriptStruct*, struct FMassRuntimePipeline> Container; // 0x0(0x50)
};

// Object: ScriptStruct MassEntity.MassObserverManager
// Size: 0x1C8 (Inherited: 0x0)
struct FMassObserverManager
{
	uint8_t Pad_0x0[0x80]; // 0x0(0x80)
	struct FMassObserversMap FragmentObservers[0x2]; // 0x80(0xA0)
	struct FMassObserversMap TagObservers[0x2]; // 0x120(0xA0)
	uint8_t Pad_0x1C0[0x8]; // 0x1C0(0x8)
};

// Object: ScriptStruct MassEntity.MassProcessorClassCollection
// Size: 0x1 (Inherited: 0x0)
struct FMassProcessorClassCollection
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MassEntity.MassEntityObserverClassesMap
// Size: 0x50 (Inherited: 0x0)
struct FMassEntityObserverClassesMap
{
	struct TMap<struct UScriptStruct*, struct FMassProcessorClassCollection> Container; // 0x0(0x50)
};

// Object: ScriptStruct MassEntity.MassProcessingPhase
// Size: 0xB0 (Inherited: 0x60)
struct FMassProcessingPhase : FTickFunction
{
	struct UMassCompositeProcessor* PhaseProcessor; // 0x60(0x8)
	struct UMassProcessingPhaseManager* Manager; // 0x68(0x8)
	uint8_t Pad_0x70[0x40]; // 0x70(0x40)
};

// Object: ScriptStruct MassEntity.MassProcessingContext
// Size: 0x38 (Inherited: 0x0)
struct FMassProcessingContext
{
	struct UMassEntitySubsystem* EntitySubsystem; // 0x0(0x8)
	float DeltaSeconds; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FInstancedStruct AuxData; // 0x10(0x10)
	uint8_t bFlushCommandBuffer : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x17]; // 0x21(0x17)
};

// Object: ScriptStruct MassEntity.ProcessorAuxDataBase
// Size: 0x1 (Inherited: 0x0)
struct FProcessorAuxDataBase
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct MassEntity.MassProcessorExecutionOrder
// Size: 0x28 (Inherited: 0x0)
struct FMassProcessorExecutionOrder
{
	struct FName ExecuteInGroup; // 0x0(0x8)
	struct TArray<struct FName> ExecuteBefore; // 0x8(0x10)
	struct TArray<struct FName> ExecuteAfter; // 0x18(0x10)
};

// Object: Class MassEntity.MassModuleSettings
// Size: 0x28 (Inherited: 0x28)
struct UMassModuleSettings : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMassModuleSettings, "MassModuleSettings")
};

// Object: Class MassEntity.MassEntitySettings
// Size: 0x170 (Inherited: 0x28)
struct UMassEntitySettings : UMassModuleSettings
{
	DEFINE_UE_CLASS_HELPERS(UMassEntitySettings, "MassEntitySettings")

	struct FString DumpDependencyGraphFileName; // 0x28(0x10)
	struct FMassProcessingPhaseConfig ProcessingPhasesConfig[0x6]; // 0x38(0x120)
	struct TArray<struct UMassProcessor*> ProcessorCDOs; // 0x158(0x10)
	uint8_t Pad_0x168[0x8]; // 0x168(0x8)
};

// Object: Class MassEntity.MassEntitySubsystem
// Size: 0x3C0 (Inherited: 0x30)
struct UMassEntitySubsystem : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UMassEntitySubsystem, "MassEntitySubsystem")

	uint8_t Pad_0x30[0x100]; // 0x30(0x100)
	struct TArray<struct FConstSharedStruct> ConstSharedFragments; // 0x130(0x10)
	uint8_t Pad_0x140[0x50]; // 0x140(0x50)
	struct TArray<struct FSharedStruct> SharedFragments; // 0x190(0x10)
	uint8_t Pad_0x1A0[0x50]; // 0x1A0(0x50)
	struct FMassObserverManager ObserverManager; // 0x1F0(0x1C8)
	uint8_t Pad_0x3B8[0x8]; // 0x3B8(0x8)
};

// Object: Class MassEntity.MassProcessor
// Size: 0x80 (Inherited: 0x28)
struct UMassProcessor : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMassProcessor, "MassProcessor")

	int32_t ExecutionFlags; // 0x28(0x4)
	EMassProcessingPhase ProcessingPhase; // 0x2C(0x1)
	uint8_t Pad_0x2D[0x3]; // 0x2D(0x3)
	struct FMassProcessorExecutionOrder ExecutionOrder; // 0x30(0x28)
	uint8_t bAutoRegisterWithProcessingPhases : 1; // 0x58(0x1), Mask(0x1)
	uint8_t BitPad_0x58_1 : 7; // 0x58(0x1)
	uint8_t Pad_0x59[0x1]; // 0x59(0x1)
	uint8_t bRequiresGameThreadExecution : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t Pad_0x5B[0x25]; // 0x5B(0x25)
};

// Object: Class MassEntity.MassObserverProcessor
// Size: 0x90 (Inherited: 0x80)
struct UMassObserverProcessor : UMassProcessor
{
	DEFINE_UE_CLASS_HELPERS(UMassObserverProcessor, "MassObserverProcessor")

	struct UScriptStruct* ObservedType; // 0x80(0x8)
	uint8_t Pad_0x88[0x8]; // 0x88(0x8)
};

// Object: Class MassEntity.MassObserverRegistry
// Size: 0x168 (Inherited: 0x28)
struct UMassObserverRegistry : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMassObserverRegistry, "MassObserverRegistry")

	struct FMassEntityObserverClassesMap FragmentObservers[0x2]; // 0x28(0xA0)
	struct FMassEntityObserverClassesMap TagObservers[0x2]; // 0xC8(0xA0)
};

// Object: Class MassEntity.MassProcessingPhaseManager
// Size: 0x458 (Inherited: 0x28)
struct UMassProcessingPhaseManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMassProcessingPhaseManager, "MassProcessingPhaseManager")

	struct FMassProcessingPhase ProcessingPhases[0x6]; // 0x28(0x420)
	struct UMassEntitySubsystem* EntitySubsystem; // 0x448(0x8)
	uint8_t Pad_0x450[0x8]; // 0x450(0x8)
};

// Object: Class MassEntity.MassCompositeProcessor
// Size: 0xC0 (Inherited: 0x80)
struct UMassCompositeProcessor : UMassProcessor
{
	DEFINE_UE_CLASS_HELPERS(UMassCompositeProcessor, "MassCompositeProcessor")

	struct FMassRuntimePipeline ChildPipeline; // 0x80(0x10)
	struct FName GroupName; // 0x90(0x8)
	uint8_t Pad_0x98[0x28]; // 0x98(0x28)
};

// Object: Class MassEntity.MassSchematic
// Size: 0x40 (Inherited: 0x30)
struct UMassSchematic : UDataAsset
{
	DEFINE_UE_CLASS_HELPERS(UMassSchematic, "MassSchematic")

	struct TArray<struct UMassProcessor*> Processors; // 0x30(0x10)
};

// Object: Class MassEntity.MassSettings
// Size: 0x88 (Inherited: 0x38)
struct UMassSettings : UDeveloperSettings
{
	DEFINE_UE_CLASS_HELPERS(UMassSettings, "MassSettings")

	struct TMap<struct FName, struct UMassModuleSettings*> ModuleSettings; // 0x38(0x50)
};

} // namespace SDK
