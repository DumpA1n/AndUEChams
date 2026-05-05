#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMParticleBenchmark
// Enums: 0
// Structs: 0
// Classes: 3

struct AActor;
struct UDataTable;
struct UParticleSystem;
struct UParticleSystemComponent;
struct AParticleBenchmark;
struct AParticleBenchmarkHD;
struct AParticleProfileActor;

// Object: Class DFMParticleBenchmark.ParticleBenchmark
// Size: 0x488 (Inherited: 0x370)
struct AParticleBenchmark : AActor
{
	DEFINE_UE_CLASS_HELPERS(AParticleBenchmark, "ParticleBenchmark")

	struct AActor* TheCamera; // 0x370(0x8)
	struct UDataTable* FXResourceDataTable; // 0x378(0x8)
	struct TArray<struct UDataTable*> FXResourceSubDataTables; // 0x380(0x10)
	struct UParticleSystem* ParticleSystem; // 0x390(0x8)
	float Distance; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	struct UParticleSystem* CurrentPS; // 0x3A0(0x8)
	struct UParticleSystemComponent* CurrentPSC; // 0x3A8(0x8)
	struct UParticleSystemComponent* SinglePSC; // 0x3B0(0x8)
	uint8_t Pad_0x3B8[0xD0]; // 0x3B8(0xD0)
};

// Object: Class DFMParticleBenchmark.ParticleBenchmarkHD
// Size: 0x4F8 (Inherited: 0x370)
struct AParticleBenchmarkHD : AActor
{
	DEFINE_UE_CLASS_HELPERS(AParticleBenchmarkHD, "ParticleBenchmarkHD")

	struct AActor* TheCamera; // 0x370(0x8)
	struct UDataTable* FXResourceDataTable; // 0x378(0x8)
	struct TArray<struct UDataTable*> FXResourceSubDataTables; // 0x380(0x10)
	struct UParticleSystem* ParticleSystem; // 0x390(0x8)
	float Distance; // 0x398(0x4)
	uint8_t Pad_0x39C[0x4]; // 0x39C(0x4)
	struct UDataTable* Table1; // 0x3A0(0x8)
	struct UDataTable* Table2; // 0x3A8(0x8)
	uint8_t UseForSceneParticlesBenchmark : 1; // 0x3B0(0x1), Mask(0x1)
	uint8_t BitPad_0x3B0_1 : 7; // 0x3B0(0x1)
	uint8_t Pad_0x3B1[0x7]; // 0x3B1(0x7)
	struct UParticleSystem* CurrentPS; // 0x3B8(0x8)
	struct UParticleSystemComponent* CurrentPSC; // 0x3C0(0x8)
	struct UParticleSystemComponent* SinglePSC; // 0x3C8(0x8)
	uint8_t Pad_0x3D0[0x128]; // 0x3D0(0x128)

	// Object: Function DFMParticleBenchmark.ParticleBenchmarkHD.CopyTableGPUCostTable1toTable2
	// Flags: [Final|Native|Public]
	// Offset: 0x13960b20
	// Params: [ Num(0) Size(0x0) ]
	void CopyTableGPUCostTable1toTable2();

	// Object: Function DFMParticleBenchmark.ParticleBenchmarkHD.CopyDataTableTest
	// Flags: [Final|Native|Public]
	// Offset: 0x13960b0c
	// Params: [ Num(0) Size(0x0) ]
	void CopyDataTableTest();

	// Object: Function DFMParticleBenchmark.ParticleBenchmarkHD.CollectParticleEffectHasLightList
	// Flags: [Final|Native|Public]
	// Offset: 0x13960af8
	// Params: [ Num(0) Size(0x0) ]
	void CollectParticleEffectHasLightList();

	// Object: Function DFMParticleBenchmark.ParticleBenchmarkHD.AnalysisFXResourceDataTableOverHighCostList
	// Flags: [Final|Native|Public]
	// Offset: 0x13960ae4
	// Params: [ Num(0) Size(0x0) ]
	void AnalysisFXResourceDataTableOverHighCostList();
};

// Object: Class DFMParticleBenchmark.ParticleProfileActor
// Size: 0x3F0 (Inherited: 0x370)
struct AParticleProfileActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AParticleProfileActor, "ParticleProfileActor")

	struct AActor* TheCamera; // 0x370(0x8)
	struct UDataTable* FXResourceDataTable; // 0x378(0x8)
	struct UParticleSystem* CurrentPS; // 0x380(0x8)
	struct UParticleSystemComponent* CurrentPSC; // 0x388(0x8)
	uint8_t Pad_0x390[0x60]; // 0x390(0x60)
};

} // namespace SDK
