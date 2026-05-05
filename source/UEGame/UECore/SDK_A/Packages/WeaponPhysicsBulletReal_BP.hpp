#pragma once

#include "../CoreUObject_classes.hpp"
#include "GPGameplay.hpp"

namespace SDK
{

// Package: WeaponPhysicsBulletReal_BP
// Enums: 0
// Structs: 0
// Classes: 1

struct USceneComponent;
struct AWeaponPhysicsBulletReal_BP_C;

// Object: BlueprintGeneratedClass WeaponPhysicsBulletReal_BP.WeaponPhysicsBulletReal_BP_C
// Size: 0xEB8 (Inherited: 0xEB0)
struct AWeaponPhysicsBulletReal_BP_C : AWeaponBulletPhysicsSimulate
{
	DEFINE_UE_CLASS_HELPERS(AWeaponPhysicsBulletReal_BP_C, "WeaponPhysicsBulletReal_BP_C")

	struct USceneComponent* DefaultSceneRoot; // 0xEB0(0x8)
};

} // namespace SDK
