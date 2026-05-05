#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPGameplay.hpp"

namespace SDK
{

// Package: DFMWeaponSkinBussiness
// Enums: 6
// Structs: 10
// Classes: 8

enum class EAdapterItemType : uint8_t;
struct UAnimMontage;
struct UAnimSequence;
struct UAnimSequenceBase;
struct UBlendSpaceBase;
struct UFXResourceContainerComponent;
struct UGPMaterialProxy;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UMaterialSequencer;
struct UMaterialSequencerPlayer;
struct UModularWeaponDynamicSkeletalMeshComponent;
struct USkeletalMesh;
struct USkeletalMeshComponent;
struct UTexture2D;
struct UWeaponSkeletalMeshComponent;
struct FWeaponSkinBussinessMaterialParams;
struct FWeaponSkinBussinessReplaceMaterialParam;
struct FMechrevoMeshStateVisibilityConfig;
struct FMechrevoMeshMaterialSequencerConfig;
struct FMechrevoMeshMaterialReplaceConfigs;
struct FMechrevoMeshMaterialReplaceConfig;
struct FMechrevoMeshMaterialInfo;
struct FWeaponSkinConfig_MechrevoMeshChildPartInfo;
struct FWeaponSkinConfig_MechrevoMeshConfig;
struct FWeaponSkinMechrevoRobertAnimInstanceProxy;
struct UDFMWeaponSkinBussinessUtil;
struct UWeaponPendantFireHeatAnimInstance;
struct UWeaponPendantSkinApperanceModifer_FireHeatAttachMesh;
struct UWeaponSkinAnimNotify_AttachParticleEffect;
struct UWeaponSkinApperanceModifer_MechrevoConfigAsset;
struct UWeaponSkinApperanceModifer_Mechrevo;
struct UWeaponSkinComponent_Mechrevo;
struct UWeaponSkinMechrevoRobertAnimInstance;

// Object: Enum DFMWeaponSkinBussiness.EWeaponSkinBussinessMaterialValueType
enum class EWeaponSkinBussinessMaterialValueType : uint8_t
{
	Float = 0,
	Texture = 1,
	StrongTexture = 2,
	Color = 3,
	EWeaponSkinBussinessMaterialValueType_MAX = 4
};

// Object: Enum DFMWeaponSkinBussiness.EPendantSkinFireHeatState
enum class EPendantSkinFireHeatState : uint8_t
{
	None = 0,
	Increase = 1,
	Waiting = 2,
	Decrease = 3,
	EPendantSkinFireHeatState_MAX = 4
};

// Object: Enum DFMWeaponSkinBussiness.EWeaponSkinAnimNotify_AttachParticleEffectBindType
enum class EWeaponSkinAnimNotify_AttachParticleEffectBindType : uint8_t
{
	None = 0,
	AdapterEnum = 1,
	ItemId = 2,
	EWeaponSkinAnimNotify_MAX = 3
};

// Object: Enum DFMWeaponSkinBussiness.EWeaponSkinMechrevoVariableAdapterType
enum class EWeaponSkinMechrevoVariableAdapterType : uint8_t
{
	None = 0,
	UpperRec = 1,
	Handguard = 2,
	Muzzle = 3,
	EWeaponSkinMechrevoVariableAdapterType_MAX = 4
};

// Object: Enum DFMWeaponSkinBussiness.EWeaponSkinMechrevoMeshType
enum class EWeaponSkinMechrevoMeshType : uint8_t
{
	None = 0,
	OrginHandguard = 1,
	Handguard1 = 2,
	Handguard2 = 3,
	OrginUpperRec = 4,
	UpperRec1 = 5,
	UpperRec2 = 6,
	OrginMuzzle = 7,
	Muzzle1 = 8,
	Muzzle2 = 9,
	ReuseUpperRec = 10,
	HandguardChilds = 11,
	DevOrRailcover = 12,
	All = 99,
	EWeaponSkinMechrevoMeshType_MAX = 100
};

// Object: Enum DFMWeaponSkinBussiness.EWeaponSkinMechrevoState
enum class EWeaponSkinMechrevoState : uint8_t
{
	Orgin = 0,
	State1 = 1,
	State2 = 2,
	None = 100,
	EWeaponSkinMechrevoState_MAX = 101
};

// Object: ScriptStruct DFMWeaponSkinBussiness.WeaponSkinBussinessMaterialParams
// Size: 0x50 (Inherited: 0x0)
struct FWeaponSkinBussinessMaterialParams
{
	struct FName ParamName; // 0x0(0x8)
	EWeaponSkinBussinessMaterialValueType ValueType; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Value; // 0xC(0x4)
	struct FLinearColor ColorValue; // 0x10(0x10)
	struct TSoftObjectPtr<UTexture2D> SoftTexture; // 0x20(0x28)
	struct UTexture2D* StrongTexture; // 0x48(0x8)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.WeaponSkinBussinessReplaceMaterialParam
// Size: 0x18 (Inherited: 0x0)
struct FWeaponSkinBussinessReplaceMaterialParam
{
	struct FName ReplaceMaterialSrcName; // 0x0(0x8)
	struct UMaterialInterface* ReplaceMaterial; // 0x8(0x8)
	uint8_t bCopyParameter : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.MechrevoMeshStateVisibilityConfig
// Size: 0x20 (Inherited: 0x0)
struct FMechrevoMeshStateVisibilityConfig
{
	struct TArray<EWeaponSkinMechrevoMeshType> VisibleMeshTypes; // 0x0(0x10)
	struct TArray<EWeaponSkinMechrevoMeshType> HiddenMeshTypes; // 0x10(0x10)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.MechrevoMeshMaterialSequencerConfig
// Size: 0x20 (Inherited: 0x0)
struct FMechrevoMeshMaterialSequencerConfig
{
	struct FName BeginEventName; // 0x0(0x8)
	struct FName EndTEventName; // 0x8(0x8)
	EWeaponSkinMechrevoMeshType MechrevoMeshType; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct UMaterialSequencer* Sequencer; // 0x18(0x8)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.MechrevoMeshMaterialReplaceConfigs
// Size: 0x10 (Inherited: 0x0)
struct FMechrevoMeshMaterialReplaceConfigs
{
	struct TArray<struct FMechrevoMeshMaterialReplaceConfig> ReplaceConfigs; // 0x0(0x10)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.MechrevoMeshMaterialReplaceConfig
// Size: 0x40 (Inherited: 0x0)
struct FMechrevoMeshMaterialReplaceConfig
{
	struct FName SrcMaterialName; // 0x0(0x8)
	struct UMaterialInterface* ReplaceMaterial; // 0x8(0x8)
	struct UMaterialInterface* NonPresetReplaceMaterial; // 0x10(0x8)
	uint8_t bCopySrcParams : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct TArray<struct FWeaponSkinBussinessMaterialParams> MaterialParams; // 0x20(0x10)
	struct TArray<struct FWeaponSkinBussinessMaterialParams> NonePresetMaterialParams; // 0x30(0x10)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.MechrevoMeshMaterialInfo
// Size: 0x30 (Inherited: 0x0)
struct FMechrevoMeshMaterialInfo
{
	EWeaponSkinMechrevoMeshType MeshType; // 0x0(0x1)
	uint8_t bDefaultPreset : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	struct UWeaponSkeletalMeshComponent* SkeletalMeshComponent; // 0x8(0x8)
	struct TArray<int32_t> MaterialIndexs; // 0x10(0x10)
	struct TArray<struct UGPMaterialProxy*> MaterialProxies; // 0x20(0x10)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.WeaponSkinConfig_MechrevoMeshChildPartInfo
// Size: 0xE8 (Inherited: 0x0)
struct FWeaponSkinConfig_MechrevoMeshChildPartInfo
{
	struct FName SrcSocket; // 0x0(0x8)
	uint64_t PartNodeGUID; // 0x8(0x8)
	uint64_t PartNodeIndex; // 0x10(0x8)
	uint64_t ParentPartNodeIndex; // 0x18(0x8)
	uint64_t ParentPartGUID; // 0x20(0x8)
	struct FVector RelativePosition; // 0x28(0xC)
	struct FRotator RelativeRot; // 0x34(0xC)
	struct TMap<EWeaponSkinMechrevoMeshType, struct FVector> CachedRelativePositions; // 0x40(0x50)
	struct TMap<EWeaponSkinMechrevoMeshType, struct FRotator> CachedRelativeRots; // 0x90(0x50)
	EWeaponSkinMechrevoMeshType ParentMeshType; // 0xE0(0x1)
	uint8_t Pad_0xE1[0x7]; // 0xE1(0x7)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.WeaponSkinConfig_MechrevoMeshConfig
// Size: 0x30 (Inherited: 0x0)
struct FWeaponSkinConfig_MechrevoMeshConfig
{
	EWeaponSkinMechrevoMeshType MeshType; // 0x0(0x1)
	uint8_t bExtraModel : 1; // 0x1(0x1), Mask(0x1)
	uint8_t BitPad_0x1_1 : 7; // 0x1(0x1)
	uint8_t Pad_0x2[0x6]; // 0x2(0x6)
	uint64_t ExtraModelItemId; // 0x8(0x8)
	struct USkeletalMesh* SkeletalMesh; // 0x10(0x8)
	struct FName AttachSocket; // 0x18(0x8)
	struct TArray<struct FName> OrginMeshSlotNames; // 0x20(0x10)
};

// Object: ScriptStruct DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstanceProxy
// Size: 0x7B0 (Inherited: 0x7A0)
struct FWeaponSkinMechrevoRobertAnimInstanceProxy : FAnimInstanceProxy
{
	uint8_t bIsFiring : 1; // 0x798(0x1), Mask(0x1)
	int32_t bIsReloading; // 0x79C(0x4)
	uint8_t bInspecting : 1; // 0x7A0(0x1), Mask(0x1)
	uint8_t bEmptyInspecting : 1; // 0x7A1(0x1), Mask(0x1)
	uint8_t bIdleLoop : 1; // 0x7A2(0x1), Mask(0x1)
	uint8_t BitPad_0x7A4_4 : 4; // 0x7A4(0x1)
	uint8_t Pad_0x7A5[0xB]; // 0x7A5(0xB)
};

// Object: Class DFMWeaponSkinBussiness.DFMWeaponSkinBussinessUtil
// Size: 0x28 (Inherited: 0x28)
struct UDFMWeaponSkinBussinessUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMWeaponSkinBussinessUtil, "DFMWeaponSkinBussinessUtil")

	// Object: Function DFMWeaponSkinBussiness.DFMWeaponSkinBussinessUtil.SetMaterialParam
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x14207574
	// Params: [ Num(2) Size(0x58) ]
	static void SetMaterialParam(struct UMaterialInstanceDynamic* MaterialDynamic, const struct FWeaponSkinBussinessMaterialParams& Param);

	// Object: Function DFMWeaponSkinBussiness.DFMWeaponSkinBussinessUtil.ReplaceMaterials
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x14207448
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct UMaterialInterface*> ReplaceMaterials(struct USkeletalMeshComponent* InMeshComponent, struct FWeaponSkinBussinessReplaceMaterialParam ReplaceParam);
};

// Object: Class DFMWeaponSkinBussiness.WeaponPendantFireHeatAnimInstance
// Size: 0x280 (Inherited: 0x270)
struct UWeaponPendantFireHeatAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UWeaponPendantFireHeatAnimInstance, "WeaponPendantFireHeatAnimInstance")

	float FireHeat; // 0x26C(0x4)
	uint8_t bPlayKilling : 1; // 0x270(0x1), Mask(0x1)
	uint8_t BitPad_0x274_1 : 7; // 0x274(0x1)
	uint8_t Pad_0x275[0xB]; // 0x275(0xB)

	// Object: Function DFMWeaponSkinBussiness.WeaponPendantFireHeatAnimInstance.SetPlayKilling
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x142085fc
	// Params: [ Num(1) Size(0x1) ]
	void SetPlayKilling(uint8_t PlayKilling);

	// Object: Function DFMWeaponSkinBussiness.WeaponPendantFireHeatAnimInstance.SetFireHeat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x14208558
	// Params: [ Num(1) Size(0x4) ]
	void SetFireHeat(float InFireHeat);

	// Object: Function DFMWeaponSkinBussiness.WeaponPendantFireHeatAnimInstance.OnFireHeatUpdated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x4) ]
	void OnFireHeatUpdated(float InFireHeat);

	// Object: Function DFMWeaponSkinBussiness.WeaponPendantFireHeatAnimInstance.GetPlayKilling
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1420853c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetPlayKilling();

	// Object: Function DFMWeaponSkinBussiness.WeaponPendantFireHeatAnimInstance.GetFireHeat
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x14208520
	// Params: [ Num(1) Size(0x4) ]
	float GetFireHeat();
};

// Object: Class DFMWeaponSkinBussiness.WeaponPendantSkinApperanceModifer_FireHeatAttachMesh
// Size: 0x1A0 (Inherited: 0x98)
struct UWeaponPendantSkinApperanceModifer_FireHeatAttachMesh : UWeaponPendantSkinApperanceModiferBase
{
	DEFINE_UE_CLASS_HELPERS(UWeaponPendantSkinApperanceModifer_FireHeatAttachMesh, "WeaponPendantSkinApperanceModifer_FireHeatAttachMesh")

	struct TSoftObjectPtr<USkeletalMesh> AttachMesh_1P; // 0x98(0x28)
	struct TSoftObjectPtr<USkeletalMesh> AttachMesh_UI; // 0xC0(0x28)
	struct TSoftObjectPtr<USkeletalMesh> AttachMesh_3P; // 0xE8(0x28)
	struct USkeletalMesh* mAttachMesh_1P; // 0x110(0x8)
	struct USkeletalMesh* mAttachMesh_UI; // 0x118(0x8)
	struct USkeletalMesh* mAttachMesh_3P; // 0x120(0x8)
	uint8_t bSetUpMysticalAttachMesh : 1; // 0x128(0x1), Mask(0x1)
	uint8_t BitPad_0x128_1 : 7; // 0x128(0x1)
	uint8_t Pad_0x129[0x3]; // 0x129(0x3)
	struct FName AttachSocket; // 0x12C(0x8)
	uint8_t Pad_0x134[0x4]; // 0x134(0x4)
	struct UWeaponPendantFireHeatAnimInstance* AnimBlueprintClass; // 0x138(0x8)
	struct UBlendSpaceBase* DefaultBlendSpace1D; // 0x140(0x8)
	struct UAnimMontage* DefaultKillDispearAnim; // 0x148(0x8)
	float TimerUpdateRate; // 0x150(0x4)
	float FireStep; // 0x154(0x4)
	float IncreaseSpeed; // 0x158(0x4)
	float DecreaseSpeed; // 0x15C(0x4)
	float StopFireWaitTime; // 0x160(0x4)
	float MinFireHeat; // 0x164(0x4)
	float MaxFireHeat; // 0x168(0x4)
	float KillEffectDuration; // 0x16C(0x4)
	struct UModularWeaponDynamicSkeletalMeshComponent* AttachMeshComp; // 0x170(0x8)
	float CurrentFireHeat; // 0x178(0x4)
	int32_t FireCount; // 0x17C(0x4)
	uint8_t bFiring : 1; // 0x180(0x1), Mask(0x1)
	uint8_t BitPad_0x180_1 : 7; // 0x180(0x1)
	EPendantSkinFireHeatState CurrentState; // 0x181(0x1)
	uint8_t Pad_0x182[0x2]; // 0x182(0x2)
	float StopFireTimer; // 0x184(0x4)
	uint8_t Pad_0x188[0x18]; // 0x188(0x18)

	// Object: Function DFMWeaponSkinBussiness.WeaponPendantSkinApperanceModifer_FireHeatAttachMesh.OnUpdateFireHeat
	// Flags: [Final|Native|Protected]
	// Offset: 0x14208c0c
	// Params: [ Num(0) Size(0x0) ]
	void OnUpdateFireHeat();
};

// Object: Class DFMWeaponSkinBussiness.WeaponSkinAnimNotify_AttachParticleEffect
// Size: 0x90 (Inherited: 0x30)
struct UWeaponSkinAnimNotify_AttachParticleEffect : UAnimNotifyState
{
	DEFINE_UE_CLASS_HELPERS(UWeaponSkinAnimNotify_AttachParticleEffect, "WeaponSkinAnimNotify_AttachParticleEffect")

	struct FName NotifyName; // 0x2C(0x8)
	EWeaponSkinAnimNotify_AttachParticleEffectBindType BindType; // 0x34(0x1)
	EAdapterItemType BindAdapterItemType; // 0x35(0x1)
	uint64_t BindItemId; // 0x38(0x8)
	uint64_t BindItemParentItemId; // 0x40(0x8)
	struct FName BindItemParentSocket; // 0x48(0x8)
	struct FName EffectId; // 0x50(0x8)
	struct FName AttachSocketName; // 0x58(0x8)
	struct FVector LocationOffset; // 0x60(0xC)
	struct FRotator RotationOffset; // 0x6C(0xC)
	struct FVector ScaleOffset; // 0x78(0xC)
	uint8_t bFPP : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x86_1 : 7; // 0x86(0x1)
	uint8_t Pad_0x87[0x1]; // 0x87(0x1)
	struct UFXResourceContainerComponent* FXComp; // 0x88(0x8)
};

// Object: Class DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_MechrevoConfigAsset
// Size: 0x278 (Inherited: 0x30)
struct UWeaponSkinApperanceModifer_MechrevoConfigAsset : UWeaponSkinApperanceModifer_BaseConfigAsset
{
	DEFINE_UE_CLASS_HELPERS(UWeaponSkinApperanceModifer_MechrevoConfigAsset, "WeaponSkinApperanceModifer_MechrevoConfigAsset")

	struct TArray<struct FWeaponSkinConfig_MechrevoMeshConfig> ExtraMeshConfigs; // 0x30(0x10)
	uint64_t RobertItemId; // 0x40(0x8)
	struct UWeaponSkinMechrevoRobertAnimInstance* MechrevoRobertAnimInstanceClass; // 0x48(0x8)
	struct TMap<EWeaponSkinMechrevoMeshType, struct FName> UpperRecMaterialSlotNames; // 0x50(0x50)
	struct TArray<struct FName> OrginMuzzleMaterialSlotNames; // 0xA0(0x10)
	struct TSoftObjectPtr<UAnimSequence> DefaultReloadAnim; // 0xB0(0x28)
	struct TSoftObjectPtr<UAnimSequence> DefaultFullReloadAnim; // 0xD8(0x28)
	struct TMap<uint64_t, struct TSoftObjectPtr<UAnimSequence>> ReloadAnims; // 0x100(0x50)
	struct UAnimMontage* RobertInspectMontage; // 0x150(0x8)
	struct UAnimMontage* RobertEmptyInspectMontage; // 0x158(0x8)
	struct TMap<uint64_t, struct TSoftObjectPtr<UAnimSequence>> FullReloadAnims; // 0x160(0x50)
	struct TMap<EWeaponSkinMechrevoMeshType, struct FMechrevoMeshMaterialReplaceConfigs> MaterialReplaceConfig; // 0x1B0(0x50)
	struct TArray<struct FMechrevoMeshMaterialSequencerConfig> MaterialSequencerConfigs; // 0x200(0x10)
	struct TArray<struct FString> DevOrRailcoverMaterialSlotKeywords; // 0x210(0x10)
	float UpdateDT; // 0x220(0x4)
	uint8_t Pad_0x224[0x4]; // 0x224(0x4)
	struct TArray<uint64_t> HandguardPresetId; // 0x228(0x10)
	struct TArray<uint64_t> MuzzlePresetId; // 0x238(0x10)
	struct TArray<struct FString> DevPresetSlotName; // 0x248(0x10)
	struct TArray<struct FName> ExtraMuzzleModelMaterialSlot; // 0x258(0x10)
	struct TArray<struct FName> IgnoreMysticalMaterialSlotName; // 0x268(0x10)
};

// Object: Class DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo
// Size: 0x230 (Inherited: 0x50)
struct UWeaponSkinApperanceModifer_Mechrevo : UWeaponSkinApperanceModiferBase
{
	DEFINE_UE_CLASS_HELPERS(UWeaponSkinApperanceModifer_Mechrevo, "WeaponSkinApperanceModifer_Mechrevo")

	uint8_t Pad_0x50[0x8]; // 0x50(0x8)
	EWeaponSkinMechrevoState CurrentMechrevoState; // 0x58(0x1)
	uint8_t bPlayingSwitchAnimtation : 1; // 0x59(0x1), Mask(0x1)
	uint8_t BitPad_0x59_1 : 7; // 0x59(0x1)
	uint8_t bRobertIsFiring : 1; // 0x5A(0x1), Mask(0x1)
	uint8_t BitPad_0x5A_1 : 7; // 0x5A(0x1)
	uint8_t Pad_0x5B[0x1]; // 0x5B(0x1)
	int32_t bRobertIsReloading; // 0x5C(0x4)
	uint8_t bRobertInspecting : 1; // 0x60(0x1), Mask(0x1)
	uint8_t BitPad_0x60_1 : 7; // 0x60(0x1)
	uint8_t bRobertEmptyInspecting : 1; // 0x61(0x1), Mask(0x1)
	uint8_t BitPad_0x61_1 : 7; // 0x61(0x1)
	uint8_t Pad_0x62[0x6]; // 0x62(0x6)
	struct TMap<EWeaponSkinMechrevoMeshType, struct UModularWeaponDynamicSkeletalMeshComponent*> MeshMap; // 0x68(0x50)
	struct TArray<struct FWeaponSkinConfig_MechrevoMeshChildPartInfo> HandguardChildPartInfos; // 0xB8(0x10)
	uint64_t OnLoadPartMeshesCallbackId; // 0xC8(0x8)
	uint8_t Pad_0xD0[0x30]; // 0xD0(0x30)
	uint8_t bHandguardPreset : 1; // 0x100(0x1), Mask(0x1)
	uint8_t BitPad_0x100_1 : 7; // 0x100(0x1)
	uint8_t bMuzzlePreset : 1; // 0x101(0x1), Mask(0x1)
	uint8_t BitPad_0x101_1 : 7; // 0x101(0x1)
	uint8_t Pad_0x102[0x6]; // 0x102(0x6)
	struct TArray<struct FName> OrginHandguardSlotNames; // 0x108(0x10)
	uint8_t bCreateMechrevoMeshs : 1; // 0x118(0x1), Mask(0x1)
	uint8_t BitPad_0x118_1 : 7; // 0x118(0x1)
	uint8_t Pad_0x119[0x7]; // 0x119(0x7)
	struct TArray<struct UGPMaterialProxy*> MaterialProxies; // 0x120(0x10)
	struct TSoftObjectPtr<UAnimSequenceBase> ReloadSeqSoftPtr; // 0x130(0x28)
	struct TSoftObjectPtr<UAnimSequenceBase> FullReloadSeqSoftPtr; // 0x158(0x28)
	struct UModularWeaponDynamicSkeletalMeshComponent* RobertSkeletalMesh; // 0x180(0x8)
	struct TMap<EWeaponSkinMechrevoMeshType, struct UMaterialSequencerPlayer*> SequencerPlayers; // 0x188(0x50)
	struct FTimerHandle UpdateHandle; // 0x1D8(0x8)
	struct TMap<EWeaponSkinMechrevoMeshType, uint8_t> bSwitchWeaponMaterialMap; // 0x1E0(0x50)

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.UpdateRobertAnimInstanceState
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x1420b420
	// Params: [ Num(0) Size(0x0) ]
	void UpdateRobertAnimInstanceState();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.UpdateHandguardChildMeshPositions
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420b37c
	// Params: [ Num(1) Size(0x1) ]
	void UpdateHandguardChildMeshPositions(EWeaponSkinMechrevoMeshType MechrevoMeshType);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.SyncMeshState
	// Flags: [Final|Native|Public]
	// Offset: 0x1420b2d8
	// Params: [ Num(1) Size(0x1) ]
	void SyncMeshState(uint8_t State);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.SwitchWeaponMaterials
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420b1f0
	// Params: [ Num(2) Size(0x2) ]
	void SwitchWeaponMaterials(EWeaponSkinMechrevoMeshType MechrevoMeshType, uint8_t bEnable);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.SwitchMeshState
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420b14c
	// Params: [ Num(1) Size(0x1) ]
	void SwitchMeshState(EWeaponSkinMechrevoState State);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.StopMaterialSequence
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420b06c
	// Params: [ Num(2) Size(0x10) ]
	void StopMaterialSequence(EWeaponSkinMechrevoMeshType MeshType, struct UMaterialSequencer* MaterialSequencer);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.SetRobertAnimState
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420aef4
	// Params: [ Num(4) Size(0xA) ]
	void SetRobertAnimState(uint8_t bInIsFiring, int32_t bInIsReloading, uint8_t bInInspecting, uint8_t bInEmptyInspecting);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.SetMeshVisibility
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420ae0c
	// Params: [ Num(2) Size(0x2) ]
	void SetMeshVisibility(EWeaponSkinMechrevoMeshType MeshType, uint8_t bVisibity);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.PlayMaterialSequence
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420ad2c
	// Params: [ Num(2) Size(0x10) ]
	void PlayMaterialSequence(EWeaponSkinMechrevoMeshType MeshType, struct UMaterialSequencer* MaterialSequencer);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.OnUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0x1420ad18
	// Params: [ Num(0) Size(0x0) ]
	void OnUpdate();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.OnPlaySwitchAnimation
	// Flags: [Final|Native|Public]
	// Offset: 0x1420ad04
	// Params: [ Num(0) Size(0x0) ]
	void OnPlaySwitchAnimation();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.OnLoadRobertAnims
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420ac34
	// Params: [ Num(1) Size(0x10) ]
	void OnLoadRobertAnims(struct TArray<struct FSoftObjectPath> SoftObjectPaths);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.OnLoadPartMeshesCallback
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420ab64
	// Params: [ Num(1) Size(0x10) ]
	void OnLoadPartMeshesCallback(struct TArray<struct FSoftObjectPath> SoftObjectPaths);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.OnFinishSwitchAnimation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1420ab50
	// Params: [ Num(0) Size(0x0) ]
	void OnFinishSwitchAnimation();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.OnCreateMechrevoSkeletalMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420a9fc
	// Params: [ Num(4) Size(0x20) ]
	void OnCreateMechrevoSkeletalMesh(struct USkeletalMeshComponent* Mesh, uint64_t ItemID, uint64_t Guid, struct UWeaponSkeletalMeshComponent* WeaponSkeletalMeshComponent);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.InitRobertAnims
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420a9e8
	// Params: [ Num(0) Size(0x0) ]
	void InitRobertAnims();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetWeaponMaterialPrxoy
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420a928
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FMechrevoMeshMaterialInfo> GetWeaponMaterialPrxoy(EWeaponSkinMechrevoMeshType MechrevoMeshType);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetVibilityMeshTypes
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x1420a848
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<EWeaponSkinMechrevoMeshType> GetVibilityMeshTypes(EWeaponSkinMechrevoState State);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetNextState
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x1420a814
	// Params: [ Num(1) Size(0x1) ]
	EWeaponSkinMechrevoState GetNextState();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetMeshTypeByAdapaterType
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x1420a72c
	// Params: [ Num(3) Size(0x3) ]
	EWeaponSkinMechrevoMeshType GetMeshTypeByAdapaterType(EWeaponSkinMechrevoState State, EWeaponSkinMechrevoVariableAdapterType AdapterType);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetInVibilityMeshTypes
	// Flags: [Final|Native|Protected|BlueprintCallable|BlueprintPure]
	// Offset: 0x1420a64c
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<EWeaponSkinMechrevoMeshType> GetInVibilityMeshTypes(EWeaponSkinMechrevoState State);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetHandguardMeshType
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0x1420a5a0
	// Params: [ Num(2) Size(0x2) ]
	EWeaponSkinMechrevoMeshType GetHandguardMeshType(EWeaponSkinMechrevoState State);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.GetConfigAsset
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1420a56c
	// Params: [ Num(1) Size(0x8) ]
	struct UWeaponSkinApperanceModifer_MechrevoConfigAsset* GetConfigAsset();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.CreateMechrevoMeshs
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420a558
	// Params: [ Num(0) Size(0x0) ]
	void CreateMechrevoMeshs();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.ClearMechrevoMeshs
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420a544
	// Params: [ Num(0) Size(0x0) ]
	void ClearMechrevoMeshs();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.BP_OnProcessAnimNotifyEvent
	// Flags: [Event|Protected|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x8) ]
	void BP_OnProcessAnimNotifyEvent(struct FName Name);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.BP_OnPlaySwitchAnimation
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnPlaySwitchAnimation();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.BP_OnFinishSwitchAnimation
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnFinishSwitchAnimation();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinApperanceModifer_Mechrevo.BindRobertSkeletalMesh
	// Flags: [Final|Native|Protected]
	// Offset: 0x1420a530
	// Params: [ Num(0) Size(0x0) ]
	void BindRobertSkeletalMesh();
};

// Object: Class DFMWeaponSkinBussiness.WeaponSkinComponent_Mechrevo
// Size: 0x448 (Inherited: 0x440)
struct UWeaponSkinComponent_Mechrevo : UWeaponSkinComponent_Common
{
	DEFINE_UE_CLASS_HELPERS(UWeaponSkinComponent_Mechrevo, "WeaponSkinComponent_Mechrevo")

	int32_t CurrentMeshState; // 0x440(0x4)
	uint8_t Pad_0x444[0x4]; // 0x444(0x4)

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinComponent_Mechrevo.ServerSwitchWeaponMeshSkinState
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1420d5a0
	// Params: [ Num(1) Size(0x4) ]
	void ServerSwitchWeaponMeshSkinState(int32_t InMeshState);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinComponent_Mechrevo.OnCurrentMeshState
	// Flags: [Final|Native|Public]
	// Offset: 0x1420d58c
	// Params: [ Num(0) Size(0x0) ]
	void OnCurrentMeshState();
};

// Object: Class DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance
// Size: 0xA50 (Inherited: 0x270)
struct UWeaponSkinMechrevoRobertAnimInstance : UAnimInstance
{
	DEFINE_UE_CLASS_HELPERS(UWeaponSkinMechrevoRobertAnimInstance, "WeaponSkinMechrevoRobertAnimInstance")

	struct UAnimSequenceBase* ReloadSeq; // 0x270(0x8)
	struct UAnimSequenceBase* FullReloadSeq; // 0x278(0x8)
	float WaitActionToIdleTime; // 0x280(0x4)
	uint8_t Pad_0x284[0xC]; // 0x284(0xC)
	struct FWeaponSkinMechrevoRobertAnimInstanceProxy LocalProxy; // 0x290(0x7B0)
	float LastActionTime; // 0xA40(0x4)
	uint8_t Pad_0xA44[0xC]; // 0xA44(0xC)

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.SetMechrevoState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1420de04
	// Params: [ Num(4) Size(0xA) ]
	void SetMechrevoState(uint8_t bInIsFiring, int32_t bInIsReloading, uint8_t bInInspecting, uint8_t bInEmptyInspecting);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.OnMechrevoStateUpdated
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(4) Size(0x4) ]
	void OnMechrevoStateUpdated(uint8_t bInIsFiring, uint8_t bInIsReloading, uint8_t bInInspecting, uint8_t bInEmptyInspecting);

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.IsMechrevoReloading
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1420dde0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMechrevoReloading();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.IsMechrevoInspecting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1420ddc4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMechrevoInspecting();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.IsMechrevoFiring
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1420dda8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMechrevoFiring();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.IsMechrevoEmptyInspecting
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1420dd8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMechrevoEmptyInspecting();

	// Object: Function DFMWeaponSkinBussiness.WeaponSkinMechrevoRobertAnimInstance.AddAction
	// Flags: [Final|Native|Public]
	// Offset: 0x1420dd78
	// Params: [ Num(0) Size(0x0) ]
	void AddAction();
};

} // namespace SDK
