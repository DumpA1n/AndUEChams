#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: GPRenderer
// Enums: 0
// Structs: 2
// Classes: 1

struct AEmitter;
struct UParticleSystemComponent;
struct UTextureRenderTarget2D;
struct FParticleData;
struct FParticleTriangle;
struct UParticleRenderComponent2D;

// Object: ScriptStruct GPRenderer.ParticleData
// Size: 0x38 (Inherited: 0x0)
struct FParticleData
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: ScriptStruct GPRenderer.ParticleTriangle
// Size: 0x38 (Inherited: 0x0)
struct FParticleTriangle
{
	uint8_t Pad_0x0[0x38]; // 0x0(0x38)
};

// Object: Class GPRenderer.ParticleRenderComponent2D
// Size: 0x280 (Inherited: 0x240)
struct UParticleRenderComponent2D : USceneComponent
{
	float AspectRatio; // 0x240(0x4)
	float OrthoWidth; // 0x244(0x4)
	struct UTextureRenderTarget2D* RenderTarget; // 0x248(0x8)
	struct AEmitter* Emitter; // 0x250(0x8)
	struct TArray<struct UParticleSystemComponent*> DrawedParticleArray; // 0x258(0x10)
	struct TArray<struct UParticleSystemComponent*> CullingParticleArray; // 0x268(0x10)
	uint8_t Pad_0x278[0x8]; // 0x278(0x8)


	// Object: Function GPRenderer.ParticleRenderComponent2D.DrawMaterialParticlesToRenderTarget
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xade6678
	// Params: [ Num(2) Size(0x18) ]
	void DrawMaterialParticlesToRenderTarget(const struct TArray<struct UParticleSystemComponent*>& InParticleSystemComponents, struct UTextureRenderTarget2D* InRenderTarget);
	DEFINE_UE_CLASS_HELPERS(UParticleRenderComponent2D, "ParticleRenderComponent2D")

};

} // namespace SDK
