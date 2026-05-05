#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: AvatarSystem
// Enums: 3
// Structs: 15
// Classes: 4

struct AActor;
struct AGPCharacter;
enum class EFXResourceCompPriority : uint8_t;
enum class EGPAudioWaterPreset : uint8_t;
enum class EGameAkType : uint8_t;
struct UAnimInstance;
struct UAnimMontage;
struct UAnimSequenceBase;
struct UFXResourceContainerComponent;
struct UMeshComponent;
struct USceneComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct UStaticMesh;
struct FAvatarAbilityMeshResourceRow;
struct FSkillItemAvatarMeshConfig;
struct FCharacterAvatarAttachMeshWeaponPartData;
struct FCharacterExtraPartMontageRow;
struct FAvatarResourceKeyData;
struct FAvatarResourceKeyRow;
struct FAvatarFXOperateHandle;
struct FAvatarHUDOperateHandle;
struct FAvatarScreenEffectOperateHandle;
struct FAvatarAudioOperatorPtr;
struct FAvatarMontageOperatorPtr;
struct FAvatarMontageOperateHandle;
struct FAvatarAudioOperateHandle;
struct FAvatarResourceKeyOverrides;
struct FSkillItemAvatarMeshEntry;
struct UCharacterExtraPartMontageManager;
struct UAvatarAbilityMeshResourceManager;
struct UAvatarSystem;
struct USkillItemAvatarComponent;

// Object: Enum AvatarSystem.ESkillItemAvatarAnimMode
enum class ESkillItemAvatarAnimMode : uint8_t
{
	AnimBlueprint = 0,
	AnimAsset = 1,
	ESkillItemAvatarAnimMode_MAX = 2
};

// Object: Enum AvatarSystem.ESkillItemAvatarMeshType
enum class ESkillItemAvatarMeshType : uint8_t
{
	Managed = 0,
	Runtime = 1,
	ESkillItemAvatarMeshType_MAX = 2
};

// Object: Enum AvatarSystem.EAvatarResourcePakMode
enum class EAvatarResourcePakMode : uint8_t
{
	BySkillID = 0,
	ByAvatarID = 1,
	EAvatarResourcePakMode_MAX = 2
};

// Object: ScriptStruct AvatarSystem.AvatarAbilityMeshResourceRow
// Size: 0x280 (Inherited: 0x10)
struct FAvatarAbilityMeshResourceRow : FDescRowBase
{
	struct FName MeshKey; // 0x10(0x8)
	struct TArray<struct FSkillItemAvatarMeshConfig> MeshPart; // 0x18(0x10)
	uint8_t bIsStatic : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh1P; // 0x30(0x28)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh3P; // 0x58(0x28)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh1P; // 0x80(0x28)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh3P; // 0xA8(0x28)
	ESkillItemAvatarAnimMode AnimMode; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct TSoftClassPtr<struct UAnimInstance*> AnimInstance1P; // 0xD8(0x28)
	struct TSoftClassPtr<struct UAnimInstance*> AnimInstance3P; // 0x100(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSequence1P; // 0x128(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSequence3P; // 0x150(0x28)
	uint8_t bLoopAnimation : 1; // 0x178(0x1), Mask(0x1)
	uint8_t BitPad_0x178_1 : 7; // 0x178(0x1)
	uint8_t Pad_0x179[0x7]; // 0x179(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> OverrideMaterialMap; // 0x180(0x50)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMeshPtr; // 0x1D0(0x28)
	struct TSoftObjectPtr<UStaticMesh> StaticMeshPtr; // 0x1F8(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterialPtrMap; // 0x220(0x50)
	EAvatarResourcePakMode PakMode; // 0x270(0x1)
	uint8_t Pad_0x271[0x3]; // 0x271(0x3)
	int32_t PakSkillID; // 0x274(0x4)
	uint64_t PakAvatarID; // 0x278(0x8)
};

// Object: ScriptStruct AvatarSystem.SkillItemAvatarMeshConfig
// Size: 0x160 (Inherited: 0x0)
struct FSkillItemAvatarMeshConfig
{
	struct FName MeshPartTag; // 0x0(0x8)
	uint8_t bIsStatic : 1; // 0x8(0x1), Mask(0x1)
	uint8_t BitPad_0x8_1 : 7; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x10(0x28)
	struct TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x38(0x28)
	ESkillItemAvatarAnimMode AnimMode; // 0x60(0x1)
	uint8_t Pad_0x61[0x7]; // 0x61(0x7)
	struct TSoftClassPtr<struct UAnimInstance*> AnimInstance; // 0x68(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> AnimSequence; // 0x90(0x28)
	uint8_t bLoopAnimation : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> OverrideMaterialMap; // 0xC0(0x50)
	ESkillItemAvatarMeshType MeshType; // 0x110(0x1)
	uint8_t Pad_0x111[0x3]; // 0x111(0x3)
	struct FName ParentMeshPartTag; // 0x114(0x8)
	struct FName AttachSocketName; // 0x11C(0x8)
	uint8_t Pad_0x124[0xC]; // 0x124(0xC)
	struct FTransform RelativeTransform; // 0x130(0x30)
};

// Object: ScriptStruct AvatarSystem.CharacterAvatarAttachMeshWeaponPartData
// Size: 0x78 (Inherited: 0x0)
struct FCharacterAvatarAttachMeshWeaponPartData
{
	struct TSoftObjectPtr<USkeletalMesh> SkeletalMeshPtr; // 0x0(0x28)
	struct TMap<int32_t, struct TSoftObjectPtr<UMaterialInterface>> SkinMaterialPtrMap; // 0x28(0x50)
};

// Object: ScriptStruct AvatarSystem.CharacterExtraPartMontageRow
// Size: 0x78 (Inherited: 0x10)
struct FCharacterExtraPartMontageRow : FDescRowBase
{
	struct FName AnimKey; // 0x10(0x8)
	struct TSoftObjectPtr<UAnimMontage> AnimMontagePtr1P; // 0x18(0x28)
	struct TSoftObjectPtr<UAnimMontage> AnimMontagePtr3P; // 0x40(0x28)
	int32_t PakSkillID; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	uint64_t PakAvatarID; // 0x70(0x8)
};

// Object: ScriptStruct AvatarSystem.AvatarResourceKeyData
// Size: 0x18 (Inherited: 0x0)
struct FAvatarResourceKeyData
{
	struct FName OverrideKey; // 0x0(0x8)
	struct FString Description; // 0x8(0x10)
};

// Object: ScriptStruct AvatarSystem.AvatarResourceKeyRow
// Size: 0x298 (Inherited: 0x10)
struct FAvatarResourceKeyRow : FDescRowBase
{
	struct FName AvatarID; // 0x10(0x8)
	struct TMap<struct FName, struct FAvatarResourceKeyData> FXKeyOverrides; // 0x18(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> HUDKeyOverrides; // 0x68(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> ScreenEffectKeyOverrides; // 0xB8(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> AudioKeyOverrides; // 0x108(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> AnimationKeyOverrides; // 0x158(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> MeshKeyOverrides; // 0x1A8(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> SocketNameOverrides; // 0x1F8(0x50)
	struct TMap<struct FName, struct FAvatarResourceKeyData> ClientBuffOverrides; // 0x248(0x50)
};

// Object: ScriptStruct AvatarSystem.AvatarFXOperateHandle
// Size: 0x10 (Inherited: 0x0)
struct FAvatarFXOperateHandle
{
	struct UFXResourceContainerComponent* FXComp; // 0x0(0x8)
	int32_t FXCompHandleIndex; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct AvatarSystem.AvatarHUDOperateHandle
// Size: 0x8 (Inherited: 0x0)
struct FAvatarHUDOperateHandle
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct AvatarSystem.AvatarScreenEffectOperateHandle
// Size: 0x8 (Inherited: 0x0)
struct FAvatarScreenEffectOperateHandle
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
};

// Object: ScriptStruct AvatarSystem.AvatarAudioOperatorPtr
// Size: 0x10 (Inherited: 0x0)
struct FAvatarAudioOperatorPtr
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct AvatarSystem.AvatarMontageOperatorPtr
// Size: 0x10 (Inherited: 0x0)
struct FAvatarMontageOperatorPtr
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct AvatarSystem.AvatarMontageOperateHandle
// Size: 0x18 (Inherited: 0x0)
struct FAvatarMontageOperateHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct AvatarSystem.AvatarAudioOperateHandle
// Size: 0x18 (Inherited: 0x0)
struct FAvatarAudioOperateHandle
{
	uint8_t Pad_0x0[0x18]; // 0x0(0x18)
};

// Object: ScriptStruct AvatarSystem.AvatarResourceKeyOverrides
// Size: 0x50 (Inherited: 0x0)
struct FAvatarResourceKeyOverrides
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct AvatarSystem.SkillItemAvatarMeshEntry
// Size: 0x170 (Inherited: 0x0)
struct FSkillItemAvatarMeshEntry
{
	struct FSkillItemAvatarMeshConfig MeshConfig; // 0x0(0x160)
	struct UMeshComponent* MeshComponent; // 0x160(0x8)
	uint8_t bPartVisible : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)
};

// Object: Class AvatarSystem.CharacterExtraPartMontageManager
// Size: 0x40 (Inherited: 0x30)
struct UCharacterExtraPartMontageManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UCharacterExtraPartMontageManager, "CharacterExtraPartMontageManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class AvatarSystem.AvatarAbilityMeshResourceManager
// Size: 0x40 (Inherited: 0x30)
struct UAvatarAbilityMeshResourceManager : UDataTableSystemManagerBase
{
	DEFINE_UE_CLASS_HELPERS(UAvatarAbilityMeshResourceManager, "AvatarAbilityMeshResourceManager")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class AvatarSystem.AvatarSystem
// Size: 0x1C8 (Inherited: 0x28)
struct UAvatarSystem : UObject
{
	DEFINE_UE_CLASS_HELPERS(UAvatarSystem, "AvatarSystem")

	uint8_t Pad_0x28[0xB0]; // 0x28(0xB0)
	struct TMap<struct FName, struct UObject*> ResourceReferenceMap; // 0xD8(0x50)
	struct TMap<uint64_t, struct FAvatarResourceKeyOverrides> CharacterAvatarKeyMap; // 0x128(0x50)
	struct TMap<uint64_t, struct FAvatarResourceKeyOverrides> SkillItemAvatarKeyMap; // 0x178(0x50)

	// Object: Function AvatarSystem.AvatarSystem.TransientPlayCharacterAvatarLocationAudio
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f47008
	// Params: [ Num(14) Size(0x51) ]
	void TransientPlayCharacterAvatarLocationAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct FVector Location, struct FRotator Rotator, struct UObject* WorldContext, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState);

	// Object: Function AvatarSystem.AvatarSystem.TransientPlayCharacterAvatarActorAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109532cc
	// Params: [ Num(8) Size(0x25) ]
	void TransientPlayCharacterAvatarActorAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct AActor* TargetPlayer, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosition);

	// Object: Function AvatarSystem.AvatarSystem.TransientPlayCharacterAvatar2DAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f46ee8
	// Params: [ Num(3) Size(0x11) ]
	void TransientPlayCharacterAvatar2DAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, uint8_t bNeedGetPosition);

	// Object: Function AvatarSystem.AvatarSystem.StopAvatarFX
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f46e30
	// Params: [ Num(1) Size(0x10) ]
	void StopAvatarFX(const struct FAvatarFXOperateHandle& Handle);

	// Object: Function AvatarSystem.AvatarSystem.StopAvatarExtraPartMontage
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f46d00
	// Params: [ Num(3) Size(0x24) ]
	void StopAvatarExtraPartMontage(const struct FAvatarMontageOperateHandle& Handle, float BlendOutTime, struct FName StopSection);

	// Object: Function AvatarSystem.AvatarSystem.StopAvatarAudio
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x107e94f0
	// Params: [ Num(2) Size(0x1C) ]
	void StopAvatarAudio(const struct FAvatarAudioOperateHandle& Handle, int32_t TransitionMS);

	// Object: Function AvatarSystem.AvatarSystem.RemoveAvatarScreenEffect
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f46c10
	// Params: [ Num(2) Size(0x10) ]
	void RemoveAvatarScreenEffect(const struct FAvatarScreenEffectOperateHandle& Handle, struct UObject* WorldContextObject);

	// Object: Function AvatarSystem.AvatarSystem.RemoveAvatarHUDOrState
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f46a90
	// Params: [ Num(4) Size(0x12) ]
	void RemoveAvatarHUDOrState(const struct FAvatarHUDOperateHandle& Handle, struct UObject* WorldContextObject, uint8_t bReleasePanel, uint8_t bForceRefreshHudState);

	// Object: Function AvatarSystem.AvatarSystem.RefreshAvatarAudioLifeTime
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x8f469d8
	// Params: [ Num(1) Size(0x18) ]
	void RefreshAvatarAudioLifeTime(const struct FAvatarAudioOperateHandle& Handle);

	// Object: Function AvatarSystem.AvatarSystem.PlaySkillItemAvatarFX
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f46618
	// Params: [ Num(13) Size(0x78) ]
	struct UFXResourceContainerComponent* PlaySkillItemAvatarFX(struct FName FXKey, int32_t SkillSkinId, struct UObject* WorldContext, uint8_t bIsIndependentFOV, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, struct USceneComponent* Socket, struct FName SocketName, uint8_t bUseObjectPool, uint8_t bIsHighFrequency, uint8_t bEnableInstanceLimit, EFXResourceCompPriority Priority);

	// Object: Function AvatarSystem.AvatarSystem.PlayCharacterAvatarLocationAudio
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x8f461c0
	// Params: [ Num(16) Size(0x6C) ]
	struct FAvatarAudioOperateHandle PlayCharacterAvatarLocationAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct FVector Location, struct FRotator Rotator, struct UObject* WorldContext, uint8_t bNeedRefreshLifeTime, uint8_t bActiveStopRequired, EGameAkType InGameAkType, uint8_t bPreCutted, float AttenuationScalar, uint8_t bCalcSimplifiedTranDiff, struct FVector LocationOffset, uint8_t bCalcCompletedTranDiff, float RTPCValue, EGPAudioWaterPreset WaterPresetState);

	// Object: Function AvatarSystem.AvatarSystem.PlayCharacterAvatarFX
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x8f45e3c
	// Params: [ Num(12) Size(0x80) ]
	struct FAvatarFXOperateHandle PlayCharacterAvatarFX(struct FName FXKey, struct AGPCharacter* AvatarCharacter, uint8_t bIsIndependentFOV, const struct FTransform& PlayTransform, struct AActor* CreatorOwner, struct USceneComponent* Socket, struct FName SocketName, uint8_t bUseObjectPool, uint8_t bIsHighFrequency, uint8_t bEnableInstanceLimit, EFXResourceCompPriority Priority);

	// Object: Function AvatarSystem.AvatarSystem.PlayCharacterAvatarExtraPartMontage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f45c98
	// Params: [ Num(6) Size(0x38) ]
	struct FAvatarMontageOperateHandle PlayCharacterAvatarExtraPartMontage(struct FName AnimId, struct AGPCharacter* AvatarCharacter, struct FName ItemMeshName, float PlayRate, float StartingPosition);

	// Object: Function AvatarSystem.AvatarSystem.PlayCharacterAvatarActorAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10743664
	// Params: [ Num(10) Size(0x44) ]
	struct FAvatarAudioOperateHandle PlayCharacterAvatarActorAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, struct AActor* TargetPlayer, uint8_t bNeedRefreshLifeTime, float Duration, uint8_t bNeedMakeNoise, uint8_t bPreCutted, float AttenuationScalar, uint8_t bNeedGetPosition);

	// Object: Function AvatarSystem.AvatarSystem.PlayCharacterAvatar2DAudio
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f45b14
	// Params: [ Num(5) Size(0x2C) ]
	struct FAvatarAudioOperateHandle PlayCharacterAvatar2DAudio(struct FName AudioId, struct AGPCharacter* AvatarCharacter, uint8_t bNeedRefreshLifeTime, uint8_t bNeedGetPosition);

	// Object: Function AvatarSystem.AvatarSystem.InitializeAvatarAbilityMesh
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f459b8
	// Params: [ Num(4) Size(0x19) ]
	void InitializeAvatarAbilityMesh(struct FName MeshID, int64_t AvatarID, struct UMeshComponent* TargetMeshComponent, uint8_t bInitialHide);

	// Object: Function AvatarSystem.AvatarSystem.GetSkillItemAvatarKeyOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f458d4
	// Params: [ Num(3) Size(0x18) ]
	struct FName GetSkillItemAvatarKeyOverride(struct FName OriginKey, int64_t AvatarID);

	// Object: Function AvatarSystem.AvatarSystem.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable|BlueprintPure]
	// Offset: 0xf8ba5a4
	// Params: [ Num(2) Size(0x10) ]
	static struct UAvatarSystem* GetInstance(struct UObject* WorldContextObject);

	// Object: Function AvatarSystem.AvatarSystem.GetCharacterAvatarSocketNameOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f457f0
	// Params: [ Num(3) Size(0x18) ]
	struct FName GetCharacterAvatarSocketNameOverride(struct FName OriginKey, int64_t AvatarID);

	// Object: Function AvatarSystem.AvatarSystem.GetCharacterAvatarKeyOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f4570c
	// Params: [ Num(3) Size(0x18) ]
	struct FName GetCharacterAvatarKeyOverride(struct FName OriginKey, int64_t AvatarID);

	// Object: Function AvatarSystem.AvatarSystem.GetCharacterAvatarClientBuffOverride
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f45628
	// Params: [ Num(3) Size(0x18) ]
	struct FName GetCharacterAvatarClientBuffOverride(struct FName OriginKey, int64_t AvatarID);

	// Object: Function AvatarSystem.AvatarSystem.AddCharacterAvatarScreenEffect
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f45508
	// Params: [ Num(4) Size(0x20) ]
	struct FAvatarScreenEffectOperateHandle AddCharacterAvatarScreenEffect(struct FName ScreenEffectID, struct AGPCharacter* AvatarCharacter, struct UObject* WorldContextObject);

	// Object: Function AvatarSystem.AvatarSystem.AddCharacterAvatarHUDOrState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f45368
	// Params: [ Num(6) Size(0x2C) ]
	struct FAvatarHUDOperateHandle AddCharacterAvatarHUDOrState(struct FName HUDKey, struct AGPCharacter* AvatarCharacter, struct UObject* WorldContextObject, struct UObject* HudOwner, uint8_t bForceRefreshHudState);
};

// Object: Class AvatarSystem.SkillItemAvatarComponent
// Size: 0x1D0 (Inherited: 0xF8)
struct USkillItemAvatarComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(USkillItemAvatarComponent, "SkillItemAvatarComponent")

	struct FName AvatarMeshKey; // 0xF8(0x8)
	uint8_t bInitialVisible : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t Pad_0x101[0x3]; // 0x101(0x3)
	struct FName OverrideMeshKey; // 0x104(0x8)
	uint8_t Pad_0x10C[0x4]; // 0x10C(0x4)
	struct AActor* AbilityActorOwner; // 0x110(0x8)
	struct AGPCharacter* CharacterOwner; // 0x118(0x8)
	uint8_t bResourceReady : 1; // 0x120(0x1), Mask(0x1)
	uint8_t BitPad_0x120_1 : 7; // 0x120(0x1)
	uint8_t Pad_0x121[0x7]; // 0x121(0x7)
	struct TMap<struct FName, struct FSkillItemAvatarMeshEntry> ManagedMeshEntries; // 0x128(0x50)
	struct TMap<struct FName, struct FSkillItemAvatarMeshEntry> RuntimeMeshEntries; // 0x178(0x50)
	uint8_t Pad_0x1C8[0x8]; // 0x1C8(0x8)

	// Object: Function AvatarSystem.SkillItemAvatarComponent.SetVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10afbf88
	// Params: [ Num(1) Size(0x1) ]
	void SetVisibility(uint8_t bNewVisibility);

	// Object: Function AvatarSystem.SkillItemAvatarComponent.SetMeshPartVisibility
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f487c8
	// Params: [ Num(2) Size(0x9) ]
	void SetMeshPartVisibility(struct FName MeshPartTag, uint8_t bNewVisibility);

	// Object: Function AvatarSystem.SkillItemAvatarComponent.IsVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f48790
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsVisible();

	// Object: Function AvatarSystem.SkillItemAvatarComponent.IsMeshPartVisible
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f486e0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsMeshPartVisible(struct FName MeshPartTag);

	// Object: Function AvatarSystem.SkillItemAvatarComponent.GetPrimarySkeletalMeshComponent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f486ac
	// Params: [ Num(1) Size(0x8) ]
	struct USkeletalMeshComponent* GetPrimarySkeletalMeshComponent();

	// Object: Function AvatarSystem.SkillItemAvatarComponent.GetPrimaryAnimInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f48678
	// Params: [ Num(1) Size(0x8) ]
	struct UAnimInstance* GetPrimaryAnimInstance();

	// Object: Function AvatarSystem.SkillItemAvatarComponent.GetMeshPart
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8f485cc
	// Params: [ Num(2) Size(0x10) ]
	struct UMeshComponent* GetMeshPart(struct FName MeshPartTag);
};

} // namespace SDK
