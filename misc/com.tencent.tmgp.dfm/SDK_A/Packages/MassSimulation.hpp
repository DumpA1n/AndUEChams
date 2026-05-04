#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "MassEntity.hpp"

namespace SDK
{

// Package: MassSimulation
// Enums: 0
// Structs: 0
// Classes: 3

struct UMassEntitySubsystem;
struct UMassProcessingPhaseManager;
struct UMassSchematic;
struct AMassSimulationLocalCoordinator;
struct UMassSimulationSettings;
struct UMassSimulationSubsystem;

// Object: Class MassSimulation.MassSimulationLocalCoordinator
// Size: 0x3B0 (Inherited: 0x370)
struct AMassSimulationLocalCoordinator : AActor
{
	float MaxSpeed; // 0x370(0x4)
	uint8_t Pad_0x374[0x4]; // 0x374(0x4)
	struct TArray<struct TSoftObjectPtr<UMassSchematic>> PostSpawnSchematics; // 0x378(0x10)
	struct TArray<struct TSoftObjectPtr<UMassSchematic>> TickSchematics; // 0x388(0x10)
	struct TArray<struct UScriptStruct*> LocallyAppliedSpawnComponents; // 0x398(0x10)
	float ControlRadius; // 0x3A8(0x4)
	uint8_t Pad_0x3AC[0x4]; // 0x3AC(0x4)
	DEFINE_UE_CLASS_HELPERS(AMassSimulationLocalCoordinator, "MassSimulationLocalCoordinator")

};

// Object: Class MassSimulation.MassSimulationSettings
// Size: 0x58 (Inherited: 0x28)
struct UMassSimulationSettings : UMassModuleSettings
{
	struct TArray<struct TSoftObjectPtr<UMassSchematic>> TickSchematics; // 0x28(0x10)
	double DesiredActorSpawningTimeSlicePerTick; // 0x38(0x8)
	double DesiredActorDestructionTimeSlicePerTick; // 0x40(0x8)
	double DesiredEntityCompactionTimeSlicePerTick; // 0x48(0x8)
	float DesiredActorFailedSpawningRetryTimeInterval; // 0x50(0x4)
	float DesiredActorFailedSpawningRetryMoveDistance; // 0x54(0x4)
	DEFINE_UE_CLASS_HELPERS(UMassSimulationSettings, "MassSimulationSettings")

};

// Object: Class MassSimulation.MassSimulationSubsystem
// Size: 0x58 (Inherited: 0x30)
struct UMassSimulationSubsystem : UWorldSubsystem
{
	struct UMassEntitySubsystem* EntitySubsystem; // 0x30(0x8)
	struct UMassProcessingPhaseManager* PhaseManager; // 0x38(0x8)
	struct FMassRuntimePipeline RuntimePipeline; // 0x40(0x10)
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	DEFINE_UE_CLASS_HELPERS(UMassSimulationSubsystem, "MassSimulationSubsystem")

};

} // namespace SDK
