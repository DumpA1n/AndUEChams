#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: UIParticleSystem
// Enums: 0
// Structs: 0
// Classes: 3

struct AActor;
struct UParticleSystem;
struct UParticleSystemComponent;
struct UParticleSystemWidget;
struct UUIParticleComponent;
struct AUIParticleActor;

// Object: Class UIParticleSystem.ParticleSystemWidget
// Size: 0x160 (Inherited: 0x130)
struct UParticleSystemWidget : UWidget
{
	DEFINE_UE_CLASS_HELPERS(UParticleSystemWidget, "ParticleSystemWidget")

	struct UParticleSystem* ParticleSystemTemplate; // 0x130(0x8)
	bool bAutoActivate; // 0x138(0x1)
	bool bReactivate; // 0x139(0x1)
	uint8_t Pad_0x13A[0x6]; // 0x13A(0x6)
	struct UUIParticleComponent* WorldParticleComponent; // 0x140(0x8)
	struct AActor* WorldParticleActor; // 0x148(0x8)
	uint8_t Pad_0x150[0x10]; // 0x150(0x10)

	// Object: Function UIParticleSystem.ParticleSystemWidget.SetReactivate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94e3ef8
	// Params: [ Num(1) Size(0x1) ]
	void SetReactivate(bool bActivateAndReset);

	// Object: Function UIParticleSystem.ParticleSystemWidget.GetParticleComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x39d9e7c
	// Params: [ Num(1) Size(0x8) ]
	struct UParticleSystemComponent* GetParticleComponent();

	// Object: Function UIParticleSystem.ParticleSystemWidget.ActivateParticles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x39d9eb0
	// Params: [ Num(2) Size(0x2) ]
	void ActivateParticles(bool bActive, bool bReset);
};

// Object: Class UIParticleSystem.UIParticleComponent
// Size: 0x8E0 (Inherited: 0x8E0)
struct UUIParticleComponent : UParticleSystemComponent
{
	DEFINE_UE_CLASS_HELPERS(UUIParticleComponent, "UIParticleComponent")
};

// Object: Class UIParticleSystem.UIParticleActor
// Size: 0x300 (Inherited: 0x300)
struct AUIParticleActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AUIParticleActor, "UIParticleActor")
};

} // namespace SDK
