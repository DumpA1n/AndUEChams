#pragma once

#include <cstdint>

// =============================================================================
//  Offsets.h
//
//  Chams 流程仅需要以下偏移：本地玩家链 / Actor 列表 / Character::Mesh /
//  InventoryPickup::ModularWeaponDesc 与派生 FDFMCommonItemRow /
//  InteractorBase::CachedOutlineMeshComponents / Material 位域两枚。
//
//  默认值只是 fallback。SDK::Offsets::EnsureInit() 启动后通过 UE 反射
//  (UStruct::ChildProperties → FProperty::Offset_Internal) 回填实际偏移。
// =============================================================================

namespace SDK::Offsets
{
int32_t Resolve(const char* className, const char* propName);
void    EnsureInit();
} // namespace SDK::Offsets

// === LocalPlayer 链 ===
inline uintptr_t o_OwningGameInstance = 0x0; // World::OwningGameInstance
inline uintptr_t o_LocalPlayers       = 0x0;  // GameInstance::LocalPlayers
inline uintptr_t o_PlayerController   = 0x0;  // Player::PlayerController
inline uintptr_t o_AcknowledgedPawn   = 0x0; // PlayerController::AcknowledgedPawn

// === All Actors ===
inline uintptr_t o_PersistentLevel = 0x0; // World::PersistentLevel
inline uintptr_t o_Actors          = 0x98; // Level::Actors

// === Actor 校验 ===
inline uintptr_t o_RootComponent          = 0x0; // Actor::RootComponent
inline uintptr_t o_bActorIsBeingDestroyed = 0x0;  // Actor::bActorIsBeingDestroyed（mask 0x02）

// === Character Mesh ===
inline uintptr_t o_Mesh = 0x0; // Character::Mesh

// === Item ===
// inline uintptr_t o_ModularWeaponDesc = 0x0; // InventoryPickup::ModularWeaponDesc
// inline uintptr_t o_FDFMCommonItemRow = o_ModularWeaponDesc + 0x10;

// === Item Material ===
// inline uintptr_t o_CachedOutlineMeshComponents = 0x0; // InteractorBase::CachedOutlineMeshComponents

// === Material 位域 ===
inline uintptr_t o_bDisableDepthTest = 0x0; // Material::bDisableDepthTest
inline uintptr_t o_Wireframe         = 0x0; // Material::Wireframe
