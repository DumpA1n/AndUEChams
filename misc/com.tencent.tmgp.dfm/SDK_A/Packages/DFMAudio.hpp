#pragma once

#include "../CoreUObject_classes.hpp"
#include "AvatarSystem.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "GPAudioRuntime.hpp"
#include "GPGameplay.hpp"
#include "GPWeaponRuntime.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DFMAudio
// Enums: 7
// Structs: 25
// Classes: 44

struct AActor;
struct ACHARACTER;
struct AController;
struct ADFMCharacter;
struct AGPCharacter;
struct AGPCharacterBase;
struct AIntCharacter;
struct APawn;
struct AWeaponBulletRPGSimulate;
enum class EAudioCharacterViewState : uint8_t;
enum class EChracterPoseType : uint8_t;
enum class EDFMGamePlayMode : uint8_t;
enum class EGPAudioActionOnEventType : uint8_t;
enum class EGPAudioBlueprintType : uint8_t;
enum class EGPAudioFootSoundType : uint8_t;
enum class EGPEventCallbackType : uint8_t;
enum class EGPWeaponInnerEvent : uint8_t;
enum class EMatchOverReason : uint8_t;
enum class ESoundVisualizationType : uint8_t;
enum class EStateAudioEventType : uint8_t;
enum class EUIAudioPreloadState : uint8_t;
struct FGPAudioEventAdditionalFunction;
struct FGPClippedWeaponFakeEventNeededInfo;
struct FHitResult;
struct FPVSAudioActorInfo;
struct IGPWeaponInterface;
struct UAnimSequenceBase;
struct UCurveFloat;
struct UDFMCharacterAmbientAudioFSM;
struct UDamageType;
struct UDataTable;
struct UGPAudioAnimationNotifyPlayer;
struct UGPAudioEventAsset;
struct UPhysicalMaterial;
struct UPhysicalMaterialAudioDataAsset;
struct USkeletalMeshComponent;
struct UTravelerGameAk;
struct FDFMAudioEventData;
struct FSceneAudioLevelSettingRow;
struct FAudioLevelSettingDataTableRow;
struct FDFMCharacterAudioCompHandle;
struct FWeaponFireAudioEventRecord;
struct FSeekAudioContext;
struct FUIAudioEvent;
struct FWeaponLoopEventConfigList;
struct FWeaponLoopEventConfig;
struct FWeaponLoopEventConfigAsset;
struct FWeaponAudioConfigAsset;
struct FWeaponAudioEventAsset;
struct FWeaponAudioConfig;
struct FWeaponAudioEvent;
struct FWeaponControlAudioRow;
struct FWeaponGameModeAudioEventRow;
struct FWeaponMainAudioDataRow;
struct FWeapon1PFireCache;
struct FWeaponAudioAssetSet;
struct FCharacterAudioComponents;
struct FShellDropAudioPriority;
struct FWeaponTypeAudioPriority;
struct FWeaponAudioPriority;
struct FGPAudioBulletFlyTraceResult;
struct FGPAudioBulletFlyTraceParam;
struct UAnimNotify_CharacterVoice;
struct UAnimNotify_FootStepAudio;
struct UAnimNotify_FPPFootStepAudio;
struct UAnimNotify_GPAudioEvent;
struct UAnimNotify_GPAudioEvent2D;
struct UAnimNotifyState_DFMAudioEvent;
struct UAnimNotifyState_SlideAudio;
struct ABulletSoundActor;
struct UDFAudioTrackHelper;
struct UDFMAudioComponent;
struct UDFMAudioComponentBase;
struct UAudioFootStepAnimProxyDataTableManager;
struct UDFMAudioGMStatic;
struct UDFMAudioLevelSettingDataTableManager;
struct UDFMSceneAudioLevelSettingManager;
struct UDFMAudioMastering;
struct UDFMAudioSubsystem;
struct UDFMBuffPlayUIAudio;
struct UDFMCharacterAudioComponent;
struct UDFMControllerAudioComponent;
struct UDFMFSM_SpecialStateAudioControlAction;
struct UDFMListenerComponent;
struct UDFMUIAudioPlayer;
struct UDFMusicPlayer;
struct UDFMusicPlayWrapper;
struct UWeaponFuncComponentAudio;
struct UFixedWeaponFuncComponentAudio;
struct USlowBulletAudioComponent;
struct UThrowableWeaponFuncComponentAudio;
struct UUIAudioDataAsset;
struct UUIAudioResourceManager;
struct UMusicAudioTableManager;
struct UWeaponAudioDataAsset;
struct UShellDropAudioDataAsset;
struct UWeaponMainAudioManager;
struct UWeaponMeleeMainAudioManager;
struct UWeaponCompositeAudioManager;
struct UWeaponGameModeAudioEventManager;
struct UWeaponControlAudioManager;
struct UGPAudioPriorityMethod_Fire;
struct UWeaponFuncComponentAudio_C103Smoke;
struct UWeaponFuncComponentAudioElectricShock;
struct UWeaponFuncComponentAudioFlameThrower;
struct UWeaponTypeAudioDataAsset;

// Object: Enum DFMAudio.FCharacterAudioState
enum class EFCharacterAudioState : uint8_t
{
	EState_1P = 0,
	EState_3P = 1,
	EState_TEAMATE_3P = 2,
	EState_ENEMY_3P = 3,
	EState_AIM_1P = 4,
	EState_AIM_3P = 5,
	EState_MAX = 6
};

// Object: Enum DFMAudio.EDFMAudioAniNotifyType
enum class EDFMAudioAniNotifyType : uint8_t
{
	EANI_CHANGLE_CLIP = 0,
	EANI_CHANGLE_1 = 1,
	EANI_CHANGLE_2 = 2,
	EANI_CHANGLE_3 = 3,
	EANI_CHANGLE_4 = 4,
	EANI_CHANGLE_5 = 5,
	EANI_CHANGLE_6 = 6,
	EANI_CHANGLE_7 = 7,
	EANI_CHANGLE_8 = 8,
	EANI_CHANGLE_9 = 9,
	EANI_CHANGLE_10 = 10,
	EANI_CHANGLE_11 = 11,
	EANI_CHANGLE_12 = 12,
	EANI_CHANGLE_13 = 13,
	EANI_CHANGLE_14 = 14,
	EANI_CHANGLE_15 = 15,
	EANI_CHANGLE_16 = 16,
	EANI_CHANGLE_17 = 17,
	EANI_CHANGLE_18 = 18,
	EANI_CHANGLE_19 = 19,
	EANI_CHANGLE_20 = 20,
	EANI_CHANGLE_21 = 21,
	EANI_CHANGLE_22 = 22,
	EANI_CHANGLE_23 = 23,
	EANI_CHANGLE_24 = 24,
	EANI_CHANGLE_25 = 25,
	EANI_CHANGLE_26 = 26,
	EANI_CHANGLE_27 = 27,
	EANI_CHANGLE_28 = 28,
	EANI_CHANGLE_29 = 29,
	EANI_CHANGLE_30 = 30,
	EANI_CHANGLE_31 = 31,
	EANI_CHANGLE_40 = 32,
	EANI_CHANGLE_41 = 33,
	EANI_CHANGLE_42 = 34,
	EANI_CHANGLE_43 = 35,
	EANI_CHANGLE_44 = 36,
	EANI_CHANGLE_45 = 37,
	EANI_CHANGLE_46 = 38,
	EANI_CHANGLE_47 = 39,
	EANI_CHANGLE_48 = 40,
	EANI_CHANGLE_49 = 41,
	EANI_CHANGLE_50 = 42,
	EANI_CHANGLE_51 = 43,
	EANI_CHANGLE_52 = 44,
	EANI_CHANGLE_53 = 45,
	EANI_CHANGLE_54 = 46,
	EANI_CHANGLE_55 = 47,
	EANI_CHANGLE_56 = 48,
	EANI_CHANGLE_57 = 49,
	EANI_CHANGLE_58 = 50,
	EANI_CHANGLE_59 = 51,
	EANI_CHANGLE_60 = 52,
	EANI_CHANGLE_61 = 53,
	EANI_CHANGLE_MAX = 54
};

// Object: Enum DFMAudio.EUIAudioEvent
enum class EUIAudioEvent : uint8_t
{
	NONE = 0,
	EBGM_GlobalInit = 1,
	EBGM_Login = 2,
	EBGM_Lobby = 3,
	EBGM_NONE = 4,
	EUI_ClickNormal = 5,
	EUI_ItemSearchWhite = 6,
	EUI_ItemSearchBlue = 7,
	EUI_ItemSearchPurple = 8,
	EUI_ItemSearchOrange = 9,
	EUI_MoveInContainer = 10,
	EUI_MoveAcrossContainer = 11,
	EUI_MoveIntoSafeBox = 12,
	EUI_CommonItemClick = 13,
	EUI_Drop_Ammo = 14,
	EUI_Drop_Consumable = 15,
	EUI_Drop_Equipment = 16,
	EUI_Drop_Weapon = 17,
	EUI_Drop_Common = 18,
	EUI_Login_Vedio_Sound = 19,
	EUI_Lobby_Vedio_Sound = 20,
	EUI_ModeHall_Vedio_Sound = 21,
	EUIAudioEvent_MAX = 22
};

// Object: Enum DFMAudio.EWeapon3PFireType
enum class EWeapon3PFireType : uint8_t
{
	ENone = 0,
	ENear = 1,
	EMedium = 2,
	EFar = 3,
	EDist = 4,
	EWeapon3PFireType_MAX = 5
};

// Object: Enum DFMAudio.EAudioArea
enum class EAudioArea : uint8_t
{
	EClsInView = 0,
	EClsOutView = 1,
	EFarInView = 2,
	EFarOutView = 3,
	ETeamMateInView = 4,
	ETeamMateOutView = 5,
	EAudioArea_MAX = 6
};

// Object: Enum DFMAudio.EBulletFlyTraceDistance
enum class EBulletFlyTraceDistance : uint8_t
{
	ENear = 0,
	EMedium = 1,
	EFar = 2,
	EOutOfRange = 3,
	EBulletFlyTraceDistance_MAX = 4
};

// Object: Enum DFMAudio.FWeaponAudioMode
enum class EFWeaponAudioMode : uint8_t
{
	EWeapMode_None = 0,
	EWeapMode_1P = 1,
	EWeapMode_3P = 2,
	EWeapMode_MAX = 3
};

// Object: ScriptStruct DFMAudio.DFMAudioEventData
// Size: 0x10 (Inherited: 0x0)
struct FDFMAudioEventData
{
	struct UGPAudioEventAsset* BeginAudioEvent; // 0x0(0x8)
	struct UGPAudioEventAsset* EndAudioEvent; // 0x8(0x8)
};

// Object: ScriptStruct DFMAudio.SceneAudioLevelSettingRow
// Size: 0x20 (Inherited: 0x10)
struct FSceneAudioLevelSettingRow : FDescRowBase
{
	struct FName SceneName; // 0x10(0x8)
	float SceneFactor; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DFMAudio.AudioLevelSettingDataTableRow
// Size: 0x38 (Inherited: 0x10)
struct FAudioLevelSettingDataTableRow : FDescRowBase
{
	uint64_t AudioLevelSettingID; // 0x10(0x8)
	float ThreePWeaponFireAttenuationScalingFactor; // 0x18(0x4)
	float ThreePWeaponFireCloseDistance; // 0x1C(0x4)
	float ThreePWeaponFireMedDistance; // 0x20(0x4)
	float ThreePWeaponFireFarDistance; // 0x24(0x4)
	float ThreePWeaponFireAttenuationScalingFactor_Silencer; // 0x28(0x4)
	float ThreePWeaponFireCloseDistance_Silencer; // 0x2C(0x4)
	float ThreePWeaponFireMedDistance_Silencer; // 0x30(0x4)
	float ThreePWeaponFireFarDistance_Silencer; // 0x34(0x4)
};

// Object: ScriptStruct DFMAudio.DFMCharacterAudioCompHandle
// Size: 0x1C (Inherited: 0x0)
struct FDFMCharacterAudioCompHandle
{
	uint32_t HandleIndex; // 0x0(0x4)
	struct FAvatarAudioOperateHandle Handle; // 0x4(0x18)
};

// Object: ScriptStruct DFMAudio.WeaponFireAudioEventRecord
// Size: 0x20 (Inherited: 0x0)
struct FWeaponFireAudioEventRecord
{
	struct UWeaponFuncComponentAudio* WeaponAudioSourse; // 0x0(0x8)
	uint8_t Pad_0x8[0x10]; // 0x8(0x10)
	struct ACHARACTER* CHARACTER; // 0x18(0x8)
};

// Object: ScriptStruct DFMAudio.SeekAudioContext
// Size: 0x18 (Inherited: 0x0)
struct FSeekAudioContext
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct UGPAudioEventAsset* EventAsset; // 0x8(0x8)
	uint8_t Pad_0x10[0x8]; // 0x10(0x8)
};

// Object: ScriptStruct DFMAudio.UIAudioEvent
// Size: 0x18 (Inherited: 0x0)
struct FUIAudioEvent
{
	EUIAudioEvent EventType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGPAudioEventAsset* AudioEvent; // 0x8(0x8)
	int32_t EventPriority; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMAudio.WeaponLoopEventConfigList
// Size: 0x10 (Inherited: 0x0)
struct FWeaponLoopEventConfigList
{
	struct TArray<struct FWeaponLoopEventConfig> LoopEvents; // 0x0(0x10)
};

// Object: ScriptStruct DFMAudio.WeaponLoopEventConfig
// Size: 0x68 (Inherited: 0x0)
struct FWeaponLoopEventConfig
{
	EGPWeaponInnerEvent WeaponEvent; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> LoopAudioEventStart; // 0x8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LoopAudioEventEnd; // 0x30(0x28)
	int32_t Priority; // 0x58(0x4)
	struct FName TypeName; // 0x5C(0x8)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
};

// Object: ScriptStruct DFMAudio.WeaponLoopEventConfigAsset
// Size: 0x30 (Inherited: 0x0)
struct FWeaponLoopEventConfigAsset
{
	EGPWeaponInnerEvent WeaponEvent; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGPAudioEventAsset* LoopAudioEventStart; // 0x8(0x8)
	struct UGPAudioEventAsset* LoopAudioEventEnd; // 0x10(0x8)
	int32_t Priority; // 0x18(0x4)
	struct FName TypeName; // 0x1C(0x8)
	uint32_t PlayingId; // 0x24(0x4)
	EAudioCharacterViewState LastPostedCharacterState; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DFMAudio.WeaponAudioConfigAsset
// Size: 0x10 (Inherited: 0x0)
struct FWeaponAudioConfigAsset
{
	struct TArray<struct FWeaponAudioEventAsset> AudioEvent; // 0x0(0x10)
};

// Object: ScriptStruct DFMAudio.WeaponAudioEventAsset
// Size: 0x18 (Inherited: 0x0)
struct FWeaponAudioEventAsset
{
	EGPWeaponInnerEvent EventType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct UGPAudioEventAsset* AudioEvent; // 0x8(0x8)
	int32_t EventPriority; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMAudio.WeaponAudioConfig
// Size: 0x10 (Inherited: 0x0)
struct FWeaponAudioConfig
{
	struct TArray<struct FWeaponAudioEvent> AudioEvent; // 0x0(0x10)
};

// Object: ScriptStruct DFMAudio.WeaponAudioEvent
// Size: 0x38 (Inherited: 0x0)
struct FWeaponAudioEvent
{
	EGPWeaponInnerEvent EventType; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> AudioEvent; // 0x8(0x28)
	int32_t EventPriority; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DFMAudio.WeaponControlAudioRow
// Size: 0x3E0 (Inherited: 0x8)
struct FWeaponControlAudioRow : FTableRowBase
{
	uint64_t ControlAudioID; // 0x8(0x8)
	struct TSoftObjectPtr<UGPAudioEventAsset> EnterAudio; // 0x10(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> ExitAudio; // 0x38(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> ZoomInAudio; // 0x60(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> ZoomOutAudio; // 0x88(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> RotateEndHorizontalAudio; // 0xB0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> RotateEndVerticalAudio; // 0xD8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> RotateStartAudio; // 0x100(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> RotateStopAudio; // 0x128(0x28)
	float RotateHitCD; // 0x150(0x4)
	uint8_t Pad_0x154[0x4]; // 0x154(0x4)
	struct FString RotateHorizontalSpeed; // 0x158(0x10)
	struct FString RotateVerticalSpeed; // 0x168(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> DestroyBeginAudio; // 0x178(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> DestroyEndAudio; // 0x1A0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> ExplodeAudio; // 0x1C8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LowHPStartAudio; // 0x1F0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> LowHPStopAudio; // 0x218(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BeginOverHeatAudio; // 0x240(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EndOverHeatAudio; // 0x268(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> CoolDownBeginAudio; // 0x290(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> CoolDownEndOAudio; // 0x2B8(0x28)
	struct FString OverHeatRTPC; // 0x2E0(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> AimAudio; // 0x2F0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> StartLockLoopAudio; // 0x318(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> StopLockLoopAudio; // 0x340(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> BeAimedAudio; // 0x368(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> StartBeLockedLoopAudio; // 0x390(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> StopBeLockedLoopAudio; // 0x3B8(0x28)
};

// Object: ScriptStruct DFMAudio.WeaponGameModeAudioEventRow
// Size: 0x68 (Inherited: 0x8)
struct FWeaponGameModeAudioEventRow : FTableRowBase
{
	EDFMGamePlayMode GameMode; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
	struct TSoftObjectPtr<UGPAudioEventAsset> EventOfGameModeBegin; // 0x10(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> EventOfGameModeEnd; // 0x38(0x28)
	struct FName RTPCName; // 0x60(0x8)
};

// Object: ScriptStruct DFMAudio.WeaponMainAudioDataRow
// Size: 0x8B8 (Inherited: 0x8)
struct FWeaponMainAudioDataRow : FTableRowBase
{
	struct FName ResourceID; // 0x8(0x8)
	struct FString Desc; // 0x10(0x10)
	struct FGPAudioMIDIEvent MIDIFireEvent; // 0x20(0xB0)
	struct TSoftObjectPtr<UGPAudioEventAsset> LastFireOfClipAudioEvent; // 0xD0(0x28)
	struct TArray<struct FWeaponLoopEventConfig> LoopAudioEvent; // 0xF8(0x10)
	uint8_t bForce3PSingleFire : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t Pad_0x109[0x7]; // 0x109(0x7)
	struct FGPAudio3PFireEvent Close3PFireEvent; // 0x110(0xC8)
	struct FGPAudio3PFireEvent Med3PFireEvent; // 0x1D8(0xC8)
	struct FGPAudio3PFireEvent Far3PFireEvent; // 0x2A0(0xC8)
	struct FGPAudio3PFireEvent Dist3PFireEvent; // 0x368(0xC8)
	uint8_t CanUseDefault3PFire : 1; // 0x430(0x1), Mask(0x1)
	uint8_t BitPad_0x430_1 : 7; // 0x430(0x1)
	uint8_t bNeedFireModeRTPC : 1; // 0x431(0x1), Mask(0x1)
	uint8_t BitPad_0x431_1 : 7; // 0x431(0x1)
	uint8_t Pad_0x432[0x6]; // 0x432(0x6)
	struct TSoftObjectPtr<UGPAudioEventAsset> DryfireAudioEvent; // 0x438(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> RicochetEvent; // 0x460(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> UnEquipEvent; // 0x488(0x28)
	float UnEquipDelay; // 0x4B0(0x4)
	uint8_t Pad_0x4B4[0x4]; // 0x4B4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> EquipEvent; // 0x4B8(0x28)
	float EquipDelay; // 0x4E0(0x4)
	uint8_t Pad_0x4E4[0x4]; // 0x4E4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> SwitchFireModeEvent; // 0x4E8(0x28)
	float SwitchFireModeDelay; // 0x510(0x4)
	uint8_t SwitchFireMode_EnemyAudible : 1; // 0x514(0x1), Mask(0x1)
	uint8_t BitPad_0x514_1 : 7; // 0x514(0x1)
	uint8_t SwitchFireMode_FriendAudible : 1; // 0x515(0x1), Mask(0x1)
	uint8_t BitPad_0x515_1 : 7; // 0x515(0x1)
	uint8_t Pad_0x516[0x2]; // 0x516(0x2)
	struct TSoftObjectPtr<UGPAudioEventAsset> SwitchScopeEvent; // 0x518(0x28)
	float SwitchScopeDelay; // 0x540(0x4)
	uint8_t Pad_0x544[0x4]; // 0x544(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> ZoomInEvent; // 0x548(0x28)
	float ZoomInDelay; // 0x570(0x4)
	uint8_t Pad_0x574[0x4]; // 0x574(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> ZoomOutEvent; // 0x578(0x28)
	float ZoomOutDelay; // 0x5A0(0x4)
	uint8_t ZoomInOrOut_EnemyAudible : 1; // 0x5A4(0x1), Mask(0x1)
	uint8_t BitPad_0x5A4_1 : 7; // 0x5A4(0x1)
	uint8_t ZoomInOrOut_FriendAudible : 1; // 0x5A5(0x1), Mask(0x1)
	uint8_t BitPad_0x5A5_1 : 7; // 0x5A5(0x1)
	uint8_t Pad_0x5A6[0x2]; // 0x5A6(0x2)
	struct TSoftObjectPtr<UGPAudioEventAsset> SwitchSildeAimEvent; // 0x5A8(0x28)
	float SwitchSildeAimDelay; // 0x5D0(0x4)
	uint8_t Pad_0x5D4[0x4]; // 0x5D4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> SwitchSecondaryAimEvent; // 0x5D8(0x28)
	float SwitchSecondaryAimDelay; // 0x600(0x4)
	uint8_t Pad_0x604[0x4]; // 0x604(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> SwitchZoomRateEvent; // 0x608(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> SwitchTacticalEquipEvent; // 0x630(0x28)
	float SwitchTacticalEquipDelay; // 0x658(0x4)
	uint8_t SwitchTacticalEquip_EnemyAudible : 1; // 0x65C(0x1), Mask(0x1)
	uint8_t BitPad_0x65C_1 : 7; // 0x65C(0x1)
	uint8_t SwitchTacticalEquip_FriendAudible : 1; // 0x65D(0x1), Mask(0x1)
	uint8_t BitPad_0x65D_1 : 7; // 0x65D(0x1)
	uint8_t Pad_0x65E[0x2]; // 0x65E(0x2)
	float PreThrowDelay; // 0x660(0x4)
	uint8_t Pad_0x664[0x4]; // 0x664(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> PreThrowEvent; // 0x668(0x28)
	float ThrowDelay; // 0x690(0x4)
	uint8_t Pad_0x694[0x4]; // 0x694(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> ThrowEvent; // 0x698(0x28)
	float FastThrowDelay; // 0x6C0(0x4)
	uint8_t Pad_0x6C4[0x4]; // 0x6C4(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> FastThrowEvent; // 0x6C8(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PrefireStartEvent; // 0x6F0(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> PrefireEndEvent; // 0x718(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> HoldIdleStartEvent; // 0x740(0x28)
	struct TSoftObjectPtr<UGPAudioEventAsset> HoldIdleEndEvent; // 0x768(0x28)
	uint8_t bSlowBulletFlyByFunc : 1; // 0x790(0x1), Mask(0x1)
	uint8_t BitPad_0x790_1 : 7; // 0x790(0x1)
	uint8_t Pad_0x791[0x7]; // 0x791(0x7)
	struct TSoftObjectPtr<UWeaponTypeAudioDataAsset> BulletAudioDataAsset; // 0x798(0x28)
	struct TMap<struct FName, struct TSoftObjectPtr<UGPAudioEventAsset>> AnimationAudios; // 0x7C0(0x50)
	uint8_t bEnableShellBounceAudioAfterfire : 1; // 0x810(0x1), Mask(0x1)
	uint8_t BitPad_0x810_1 : 7; // 0x810(0x1)
	uint8_t Pad_0x811[0x7]; // 0x811(0x7)
	struct TSoftObjectPtr<UShellDropAudioDataAsset> ShellBounceAudioDataAsset; // 0x818(0x28)
	struct FWeaponAudioConfig WeaponAudio; // 0x840(0x10)
	struct TSoftObjectPtr<UGPAudioEventAsset> BulletWooshEvent; // 0x850(0x28)
	uint8_t bForceAISingleFire : 1; // 0x878(0x1), Mask(0x1)
	uint8_t BitPad_0x878_1 : 7; // 0x878(0x1)
	uint8_t Pad_0x879[0x3]; // 0x879(0x3)
	float fAILoopTailTime; // 0x87C(0x4)
	uint8_t bUseAIStableFire : 1; // 0x880(0x1), Mask(0x1)
	uint8_t BitPad_0x880_1 : 7; // 0x880(0x1)
	uint8_t Pad_0x881[0x3]; // 0x881(0x3)
	float fAIStableFireTailTime; // 0x884(0x4)
	float CustomAIFireInterval; // 0x888(0x4)
	int32_t CustomContinuousFireNum; // 0x88C(0x4)
	struct TSoftObjectPtr<UGPAudioEventAsset> AutoAddAmmoEvent; // 0x890(0x28)
};

// Object: ScriptStruct DFMAudio.Weapon1PFireCache
// Size: 0x20 (Inherited: 0x0)
struct FWeapon1PFireCache
{
	struct TArray<struct UObject*> CacheAudioAssetsInUse; // 0x0(0x10)
	struct TArray<struct UObject*> CacheAudioAssetsNoInUse; // 0x10(0x10)
};

// Object: ScriptStruct DFMAudio.WeaponAudioAssetSet
// Size: 0x1 (Inherited: 0x0)
struct FWeaponAudioAssetSet
{
	uint8_t Pad_0x0[0x1]; // 0x0(0x1)
};

// Object: ScriptStruct DFMAudio.CharacterAudioComponents
// Size: 0x18 (Inherited: 0x0)
struct FCharacterAudioComponents
{
	struct UDFMListenerComponent* ListenerComponent; // 0x0(0x8)
	struct UDFMCharacterAmbientAudioFSM* CharacterAmbientAudioFSM; // 0x8(0x8)
	struct UDFMCharacterAudioComponent* CharacterAudioComponent; // 0x10(0x8)
};

// Object: ScriptStruct DFMAudio.ShellDropAudioPriority
// Size: 0x10 (Inherited: 0x0)
struct FShellDropAudioPriority
{
	struct UShellDropAudioDataAsset* ShellBounceAudioData; // 0x0(0x8)
	int32_t Priority; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMAudio.WeaponTypeAudioPriority
// Size: 0x10 (Inherited: 0x0)
struct FWeaponTypeAudioPriority
{
	struct UWeaponTypeAudioDataAsset* BulletAudioDataAsset; // 0x0(0x8)
	int32_t Priority; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMAudio.WeaponAudioPriority
// Size: 0x10 (Inherited: 0x0)
struct FWeaponAudioPriority
{
	struct UGPAudioEventAsset* AudioEventAssetData; // 0x0(0x8)
	int32_t Priority; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
};

// Object: ScriptStruct DFMAudio.GPAudioBulletFlyTraceResult
// Size: 0x50 (Inherited: 0x0)
struct FGPAudioBulletFlyTraceResult
{
	uint8_t Pad_0x0[0x50]; // 0x0(0x50)
};

// Object: ScriptStruct DFMAudio.GPAudioBulletFlyTraceParam
// Size: 0x70 (Inherited: 0x0)
struct FGPAudioBulletFlyTraceParam
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: Class DFMAudio.AnimNotify_CharacterVoice
// Size: 0x50 (Inherited: 0x38)
struct UAnimNotify_CharacterVoice : UAnimNotify
{
	struct FString CharacterVoiceTypeString; // 0x38(0x10)
	uint8_t bIsLoopStopEvent : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t Pad_0x49[0x7]; // 0x49(0x7)
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_CharacterVoice, "AnimNotify_CharacterVoice")

};

// Object: Class DFMAudio.AnimNotify_FootStepAudio
// Size: 0x40 (Inherited: 0x40)
struct UAnimNotify_FootStepAudio : UAnimNotify_GPAudioBase
{

	// Object: Function DFMAudio.AnimNotify_FootStepAudio.ReceivedNotifyFunc
	// Flags: [Final|Native|Static|Public|BlueprintCallable|Const]
	// Offset: 0xe661ff4
	// Params: [ Num(5) Size(0x21) ]
	static void ReceivedNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UAnimSequenceBase* Animation, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType);

	// Object: Function DFMAudio.AnimNotify_FootStepAudio.InnerProcessTPPFootstep
	// Flags: [Final|Native|Static|Protected|Const]
	// Offset: 0xc527f40
	// Params: [ Num(6) Size(0x22) ]
	static void InnerProcessTPPFootstep(struct UAnimSequenceBase* Animation, struct ADFMCharacter* DFMCharacter, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType, uint8_t bIsTPPNotify);

	// Object: Function DFMAudio.AnimNotify_FootStepAudio.InnerProcessSimulatedCharacterFootstep
	// Flags: [Final|Native|Static|Protected|Const]
	// Offset: 0xc527dc0
	// Params: [ Num(5) Size(0x21) ]
	static void InnerProcessSimulatedCharacterFootstep(struct UAnimSequenceBase* Animation, struct ADFMCharacter* DFMCharacter, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType);

	// Object: Function DFMAudio.AnimNotify_FootStepAudio.InnerProcessFPPFootstep
	// Flags: [Final|Native|Static|Protected|Const]
	// Offset: 0xc527bfc
	// Params: [ Num(6) Size(0x22) ]
	static void InnerProcessFPPFootstep(struct UAnimSequenceBase* Animation, struct ADFMCharacter* DFMCharacter, struct UPhysicalMaterial* BindPhysMat, struct UPhysicalMaterialAudioDataAsset* BindConfig, EGPAudioFootSoundType AudioType, uint8_t bIsTPPNotify);
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_FootStepAudio, "AnimNotify_FootStepAudio")

};

// Object: Class DFMAudio.AnimNotify_FPPFootStepAudio
// Size: 0x40 (Inherited: 0x38)
struct UAnimNotify_FPPFootStepAudio : UAnimNotify
{
	uint8_t bIsLeftFootstep : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_FPPFootStepAudio, "AnimNotify_FPPFootStepAudio")

};

// Object: Class DFMAudio.AnimNotify_GPAudioEvent
// Size: 0x98 (Inherited: 0x40)
struct UAnimNotify_GPAudioEvent : UAnimNotify_GPAudioBase
{
	uint8_t bTriggerSoundVisualization : 1; // 0x3C(0x1), Mask(0x1)
	ESoundVisualizationType SoundVisualizationType; // 0x3D(0x1)
	uint8_t bLogicPlayAudio : 1; // 0x3E(0x1), Mask(0x1)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AvatarEvents; // 0x40(0x50)
	uint8_t bProcessNoOwnerNotify : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x91_3 : 5; // 0x91(0x1)
	uint8_t Pad_0x92[0x6]; // 0x92(0x6)


	// Object: Function DFMAudio.AnimNotify_GPAudioEvent.ReceivedGPAudioEventNotifyFunc
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xe65eba4
	// Params: [ Num(9) Size(0x40) ]
	void ReceivedGPAudioEventNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent, uint8_t bFollow, EGPAudioBlueprintType AudioType, struct FName NotifyName, uint8_t bOnlyFPP, uint8_t bOnlyTPP, struct FGPAudioEventAdditionalFunction AddFunc, struct FString AttachName);

	// Object: Function DFMAudio.AnimNotify_GPAudioEvent.ProcessNoOwnerEvent
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xc5282cc
	// Params: [ Num(3) Size(0x11) ]
	void ProcessNoOwnerEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEventAsset, EGPAudioBlueprintType AudioType);

	// Object: Function DFMAudio.AnimNotify_GPAudioEvent.GetAvatarAudioEventByCharacter
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc528220
	// Params: [ Num(2) Size(0x10) ]
	struct UGPAudioEventAsset* GetAvatarAudioEventByCharacter(struct AGPCharacter* CHARACTER);

	// Object: Function DFMAudio.AnimNotify_GPAudioEvent.GetAvatarAudioEvent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc52813c
	// Params: [ Num(3) Size(0x18) ]
	struct UGPAudioEventAsset* GetAvatarAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent);
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_GPAudioEvent, "AnimNotify_GPAudioEvent")

};

// Object: Class DFMAudio.AnimNotify_GPAudioEvent2D
// Size: 0x88 (Inherited: 0x38)
struct UAnimNotify_GPAudioEvent2D : UAnimNotify
{
	struct TMap<struct FName, struct UGPAudioEventAsset*> AvatarEvents; // 0x38(0x50)


	// Object: Function DFMAudio.AnimNotify_GPAudioEvent2D.ReceivedGPAudioEventNotifyFunc
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xc528518
	// Params: [ Num(2) Size(0x10) ]
	void ReceivedGPAudioEventNotifyFunc(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent);

	// Object: Function DFMAudio.AnimNotify_GPAudioEvent2D.GetAvatarAudioEvent
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xc528434
	// Params: [ Num(3) Size(0x18) ]
	struct UGPAudioEventAsset* GetAvatarAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent);
	DEFINE_UE_CLASS_HELPERS(UAnimNotify_GPAudioEvent2D, "AnimNotify_GPAudioEvent2D")

};

// Object: Class DFMAudio.AnimNotifyState_DFMAudioEvent
// Size: 0x100 (Inherited: 0x30)
struct UAnimNotifyState_DFMAudioEvent : UAnimNotifyState_AudioEventBase
{
	struct TMap<struct FName, struct FDFMAudioEventData> AvatarEvents; // 0x30(0x50)
	uint8_t bStopOnlyStateInterrupt : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t bConfigWithName : 1; // 0x81(0x1), Mask(0x1)
	uint8_t BitPad_0x81_1 : 7; // 0x81(0x1)
	uint8_t Pad_0x82[0x6]; // 0x82(0x6)
	struct UGPAudioEventAsset* BeginAudioEvent; // 0x88(0x8)
	struct FName BeginAudioName; // 0x90(0x8)
	EGPAudioBlueprintType BeginAudioType; // 0x98(0x1)
	uint8_t Pad_0x99[0x7]; // 0x99(0x7)
	uint8_t bStopAudioOnSeqExit : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct UGPAudioEventAsset* EndAudioEvent; // 0xA8(0x8)
	struct FName EndAudioName; // 0xB0(0x8)
	EGPAudioBlueprintType EndAudioType; // 0xB8(0x1)
	uint8_t bOnlyFPP : 1; // 0xB9(0x1), Mask(0x1)
	uint8_t BitPad_0xB9_1 : 7; // 0xB9(0x1)
	uint8_t bOnlyTPP : 1; // 0xBA(0x1), Mask(0x1)
	uint8_t BitPad_0xBA_1 : 7; // 0xBA(0x1)
	uint8_t Pad_0xBB[0x5]; // 0xBB(0x5)
	struct FString AttachSocketName; // 0xC0(0x10)
	uint8_t bNeedFollow : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	uint8_t bVO_FPP : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t bVO_TPP : 1; // 0xD9(0x1), Mask(0x1)
	uint8_t BitPad_0xD9_1 : 7; // 0xD9(0x1)
	uint8_t Pad_0xDA[0x6]; // 0xDA(0x6)
	struct FString VO_String; // 0xE0(0x10)
	struct FString VO_StopString; // 0xF0(0x10)


	// Object: Function DFMAudio.AnimNotifyState_DFMAudioEvent.GetAvatarStartAudioEvent
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xc528838
	// Params: [ Num(3) Size(0x18) ]
	struct UGPAudioEventAsset* GetAvatarStartAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent);

	// Object: Function DFMAudio.AnimNotifyState_DFMAudioEvent.GetAvatarEndAudioEvent
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xc528754
	// Params: [ Num(3) Size(0x18) ]
	struct UGPAudioEventAsset* GetAvatarEndAudioEvent(struct USkeletalMeshComponent* MeshComp, struct UGPAudioEventAsset* AudioEvent);

	// Object: Function DFMAudio.AnimNotifyState_DFMAudioEvent.GetAvatarCharacterStartAudioEvent
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xc5286a8
	// Params: [ Num(2) Size(0x10) ]
	struct UGPAudioEventAsset* GetAvatarCharacterStartAudioEvent(struct AGPCharacter* GPOwner);

	// Object: Function DFMAudio.AnimNotifyState_DFMAudioEvent.GetAvatarCharacterEndAudioEvent
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0xc5285fc
	// Params: [ Num(2) Size(0x10) ]
	struct UGPAudioEventAsset* GetAvatarCharacterEndAudioEvent(struct AGPCharacter* GPOwner);
	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_DFMAudioEvent, "AnimNotifyState_DFMAudioEvent")

};

// Object: Class DFMAudio.AnimNotifyState_SlideAudio
// Size: 0x30 (Inherited: 0x30)
struct UAnimNotifyState_SlideAudio : UAnimNotifyState
{	DEFINE_UE_CLASS_HELPERS(UAnimNotifyState_SlideAudio, "AnimNotifyState_SlideAudio")

};

// Object: Class DFMAudio.BulletSoundActor
// Size: 0x3F8 (Inherited: 0x370)
struct ABulletSoundActor : AActor
{
	uint8_t Pad_0x370[0x10]; // 0x370(0x10)
	struct UGPAudioEventAsset* InFlybyAudioEvent; // 0x380(0x8)
	struct UGPAudioEventAsset* OutFlybyAudioEvent; // 0x388(0x8)
	float PlayInEventSeconds; // 0x390(0x4)
	float PlayOutEventSeconds; // 0x394(0x4)
	float KillSeconds; // 0x398(0x4)
	struct FVector SpeedPerSecond; // 0x39C(0xC)
	struct UTravelerGameAk* TravelerAk; // 0x3A8(0x8)
	uint8_t Pad_0x3B0[0x48]; // 0x3B0(0x48)
	DEFINE_UE_CLASS_HELPERS(ABulletSoundActor, "BulletSoundActor")

};

// Object: Class DFMAudio.DFAudioTrackHelper
// Size: 0x38 (Inherited: 0x30)
struct UDFAudioTrackHelper : UEngineSubsystem
{
	struct UDataTable* UIAudioDataAsset; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFAudioTrackHelper, "DFAudioTrackHelper")

};

// Object: Class DFMAudio.DFMAudioComponent
// Size: 0xF8 (Inherited: 0xF8)
struct UDFMAudioComponent : UActorComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMAudioComponent, "DFMAudioComponent")

};

// Object: Class DFMAudio.DFMAudioComponentBase
// Size: 0xF8 (Inherited: 0xF8)
struct UDFMAudioComponentBase : UActorComponent
{	DEFINE_UE_CLASS_HELPERS(UDFMAudioComponentBase, "DFMAudioComponentBase")

};

// Object: Class DFMAudio.AudioFootStepAnimProxyDataTableManager
// Size: 0x40 (Inherited: 0x30)
struct UAudioFootStepAnimProxyDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UAudioFootStepAnimProxyDataTableManager, "AudioFootStepAnimProxyDataTableManager")

};

// Object: Class DFMAudio.DFMAudioGMStatic
// Size: 0x28 (Inherited: 0x28)
struct UDFMAudioGMStatic : UBlueprintFunctionLibrary
{	DEFINE_UE_CLASS_HELPERS(UDFMAudioGMStatic, "DFMAudioGMStatic")

};

// Object: Class DFMAudio.DFMAudioLevelSettingDataTableManager
// Size: 0x38 (Inherited: 0x30)
struct UDFMAudioLevelSettingDataTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMAudioLevelSettingDataTableManager, "DFMAudioLevelSettingDataTableManager")

};

// Object: Class DFMAudio.DFMSceneAudioLevelSettingManager
// Size: 0x38 (Inherited: 0x30)
struct UDFMSceneAudioLevelSettingManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMSceneAudioLevelSettingManager, "DFMSceneAudioLevelSettingManager")

};

// Object: Class DFMAudio.DFMAudioMastering
// Size: 0x28 (Inherited: 0x28)
struct UDFMAudioMastering : UBlueprintFunctionLibrary
{

	// Object: Function DFMAudio.DFMAudioMastering.SetPCNightMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc528ad0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t SetPCNightMode();

	// Object: Function DFMAudio.DFMAudioMastering.SetPCHomeCinema
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc528a98
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t SetPCHomeCinema();

	// Object: Function DFMAudio.DFMAudioMastering.SetPCHeadphones
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc528a60
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t SetPCHeadphones();

	// Object: Function DFMAudio.DFMAudioMastering.SetMobileMobileSpeakers
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc528a28
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t SetMobileMobileSpeakers();

	// Object: Function DFMAudio.DFMAudioMastering.SetMobileHeadphones
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc5289f0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t SetMobileHeadphones();
	DEFINE_UE_CLASS_HELPERS(UDFMAudioMastering, "DFMAudioMastering")

};

// Object: Class DFMAudio.DFMAudioSubsystem
// Size: 0x30 (Inherited: 0x30)
struct UDFMAudioSubsystem : UGPAudioSubsystem
{

	// Object: Function DFMAudio.DFMAudioSubsystem.GetDFMAudioSubsystem
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc528b4c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMAudioSubsystem* GetDFMAudioSubsystem(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UDFMAudioSubsystem, "DFMAudioSubsystem")

};

// Object: Class DFMAudio.DFMBuffPlayUIAudio
// Size: 0x138 (Inherited: 0x130)
struct UDFMBuffPlayUIAudio : UGPEffectCueHandler
{
	struct FName EnterAudioName; // 0x130(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMBuffPlayUIAudio, "DFMBuffPlayUIAudio")

};

// Object: Class DFMAudio.DFMCharacterAudioComponent
// Size: 0x280 (Inherited: 0xF8)
struct UDFMCharacterAudioComponent : UActorComponent
{
	uint8_t Pad_0xF8[0x4]; // 0xF8(0x4)
	float NextUpdateAudioHandleTime; // 0xFC(0x4)
	float UpdateAudioHandleInterval; // 0x100(0x4)
	uint8_t Pad_0x104[0x4]; // 0x104(0x4)
	struct TArray<struct FDFMCharacterAudioCompHandle> AudioHandleList; // 0x108(0x10)
	struct TSoftObjectPtr<UObject> PlayTypeRTPC; // 0x118(0x28)
	struct TSoftObjectPtr<UObject> CameraModeRTPC; // 0x140(0x28)
	struct TSoftObjectPtr<UObject> ADSRTPC; // 0x168(0x28)
	struct UGPAudioEventAsset* BornAudioEvent; // 0x190(0x8)
	float FoliageOverlapCD; // 0x198(0x4)
	uint8_t Pad_0x19C[0x4]; // 0x19C(0x4)
	struct TArray<struct UGPAudioEventAsset*> PreLoadEvents; // 0x1A0(0x10)
	uint8_t Pad_0x1B0[0x50]; // 0x1B0(0x50)
	struct TArray<struct UGPAudioEventAsset*> FootstepAudioAssetCache; // 0x200(0x10)
	uint8_t Pad_0x210[0x10]; // 0x210(0x10)
	struct TScriptInterface<IGPWeaponInterface> LastFireWeapon; // 0x220(0x10)
	uint8_t Pad_0x230[0x50]; // 0x230(0x50)


	// Object: Function DFMAudio.DFMCharacterAudioComponent.UpdateUnderWaterMaskingByOnwer
	// Flags: [Final|Native|Public]
	// Offset: 0xc529260
	// Params: [ Num(1) Size(0x1) ]
	void UpdateUnderWaterMaskingByOnwer(uint8_t bNeedCheckAlive);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.TryUpdateAudioHandle
	// Flags: [Final|Native|Public]
	// Offset: 0xc52924c
	// Params: [ Num(0) Size(0x0) ]
	void TryUpdateAudioHandle();

	// Object: Function DFMAudio.DFMCharacterAudioComponent.SetSameCamp_AI
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc529238
	// Params: [ Num(0) Size(0x0) ]
	void SetSameCamp_AI();

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnXPPChange
	// Flags: [Final|Native|Public]
	// Offset: 0xf66d864
	// Params: [ Num(1) Size(0x1) ]
	void OnXPPChange(uint8_t bNewFPP);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnUnderWaterStateChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc52918c
	// Params: [ Num(1) Size(0x1) ]
	void OnUnderWaterStateChanged(uint8_t bUnderWater);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnPickupAmmoSucc
	// Flags: [Final|Native|Public]
	// Offset: 0xc5290e8
	// Params: [ Num(1) Size(0x4) ]
	void OnPickupAmmoSucc(int32_t AmmoNum);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnLocalPlayerPawnChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc52900c
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnLocalCharacterStopUIAudio
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc528f1c
	// Params: [ Num(2) Size(0xC) ]
	void OnLocalCharacterStopUIAudio(const struct FName& AudioName, uint32_t AudioIndex);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnLocalCharacterPlayUIAudio
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xf849060
	// Params: [ Num(2) Size(0xC) ]
	void OnLocalCharacterPlayUIAudio(const struct FName& AudioName, uint32_t AudioIndex);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnFootstepEventsLoadedFinished
	// Flags: [Final|Native|Public]
	// Offset: 0xc528e4c
	// Params: [ Num(1) Size(0x10) ]
	void OnFootstepEventsLoadedFinished(struct TArray<struct FSoftObjectPath> ObjectPaths);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnCharacterReborn
	// Flags: [Final|Native|Public]
	// Offset: 0xc528e38
	// Params: [ Num(0) Size(0x0) ]
	void OnCharacterReborn();

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnCharacterPVSVisibilityChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc528d8c
	// Params: [ Num(1) Size(0x1) ]
	void OnCharacterPVSVisibilityChanged(uint8_t bNewVisibility);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.OnCharacterDead
	// Flags: [Final|Native|Public]
	// Offset: 0xf05419c
	// Params: [ Num(3) Size(0x18) ]
	void OnCharacterDead(struct AGPCharacterBase* CHARACTER, struct AController* Killer, struct UDamageType* DamageType);

	// Object: Function DFMAudio.DFMCharacterAudioComponent.ChangeUnderWaterMasking
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xc528c68
	// Params: [ Num(3) Size(0x10) ]
	static void ChangeUnderWaterMasking(uint8_t bUnderWater, uint8_t bNeedCheckAlive, struct AGPCharacter* FocusedCharacter);
	DEFINE_UE_CLASS_HELPERS(UDFMCharacterAudioComponent, "DFMCharacterAudioComponent")

};

// Object: Class DFMAudio.DFMControllerAudioComponent
// Size: 0x480 (Inherited: 0x260)
struct UDFMControllerAudioComponent : UGPControllerAudioComponent
{
	uint8_t Pad_0x260[0x100]; // 0x260(0x100)
	struct TMap<struct AIntCharacter*, struct FPVSAudioActorInfo> ServerPVSActorInfo; // 0x360(0x50)
	struct TMap<uint64_t, struct FPVSAudioActorInfo> ClientPVSActorInfo; // 0x3B0(0x50)
	uint8_t Pad_0x400[0x10]; // 0x400(0x10)
	struct TMap<EStateAudioEventType, struct FCharacterStateAudioEventConfig> StateAudioEventConfigMap; // 0x410(0x50)
	uint8_t Pad_0x460[0x8]; // 0x460(0x8)
	struct FString PlayerStateGroupName; // 0x468(0x10)
	uint8_t Pad_0x478[0x8]; // 0x478(0x8)


	// Object: Function DFMAudio.DFMControllerAudioComponent.UpdateClientPVSActorInfo
	// Flags: [Net|Native|Event|Protected|NetClient]
	// Offset: 0xc529754
	// Params: [ Num(2) Size(0x24) ]
	void UpdateClientPVSActorInfo(uint64_t CharacterUin, struct FPVSAudioActorInfo PVSAudioActorInfo);

	// Object: Function DFMAudio.DFMControllerAudioComponent.OnStopLocalFocus
	// Flags: [Final|Native|Public]
	// Offset: 0xf6f3098
	// Params: [ Num(1) Size(0x8) ]
	void OnStopLocalFocus(struct AActor* TargetActor);

	// Object: Function DFMAudio.DFMControllerAudioComponent.OnStateAudioTypeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xf1e226c
	// Params: [ Num(1) Size(0x1) ]
	void OnStateAudioTypeChanged(EStateAudioEventType InType);

	// Object: Function DFMAudio.DFMControllerAudioComponent.OnStartLocalFocus
	// Flags: [Final|Native|Public]
	// Offset: 0xf562310
	// Params: [ Num(1) Size(0x8) ]
	void OnStartLocalFocus(struct AActor* TargetActor);

	// Object: Function DFMAudio.DFMControllerAudioComponent.OnMatchOver
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x10894364
	// Params: [ Num(1) Size(0x1) ]
	void OnMatchOver(const EMatchOverReason& MatchOverReason);

	// Object: Function DFMAudio.DFMControllerAudioComponent.OnLocalPlayerPawnChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc529678
	// Params: [ Num(2) Size(0x10) ]
	void OnLocalPlayerPawnChanged(struct AActor* OldCharacter, struct AActor* NewCharacter);

	// Object: Function DFMAudio.DFMControllerAudioComponent.OnGamePlayModeChanged
	// Flags: [Final|Native|Public]
	// Offset: 0xc5295d4
	// Params: [ Num(1) Size(0x1) ]
	void OnGamePlayModeChanged(EDFMGamePlayMode NewGamePlayMode);

	// Object: Function DFMAudio.DFMControllerAudioComponent.AsyncLoadAssetDataFinished
	// Flags: [Final|Native|Public]
	// Offset: 0xc52948c
	// Params: [ Num(2) Size(0x58) ]
	void AsyncLoadAssetDataFinished(struct TArray<struct FSoftObjectPath> OutPaths, struct FGPClippedWeaponFakeEventNeededInfo FakeEventInfo);
	DEFINE_UE_CLASS_HELPERS(UDFMControllerAudioComponent, "DFMControllerAudioComponent")

};

// Object: Class DFMAudio.DFMFSM_SpecialStateAudioControlAction
// Size: 0x110 (Inherited: 0x108)
struct UDFMFSM_SpecialStateAudioControlAction : UDFMFSMAction
{
	uint8_t isDeath : 1; // 0x108(0x1), Mask(0x1)
	uint8_t BitPad_0x108_1 : 7; // 0x108(0x1)
	uint8_t IsImpendingDeath : 1; // 0x109(0x1), Mask(0x1)
	uint8_t BitPad_0x109_1 : 7; // 0x109(0x1)
	uint8_t Pad_0x10A[0x6]; // 0x10A(0x6)
	DEFINE_UE_CLASS_HELPERS(UDFMFSM_SpecialStateAudioControlAction, "DFMFSM_SpecialStateAudioControlAction")

};

// Object: Class DFMAudio.DFMListenerComponent
// Size: 0x1C8 (Inherited: 0xF8)
struct UDFMListenerComponent : UActorComponent
{
	struct TArray<struct FWeaponFireAudioEventRecord> LeftNearAudioWeapon; // 0xF8(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> LeftMedAudioWeapon; // 0x108(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> LeftFarAudioWeapon; // 0x118(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> LeftSuperFarAudioWeapon; // 0x128(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightNearAudioWeapon; // 0x138(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightMedAudioWeapon; // 0x148(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightFarAudioWeapon; // 0x158(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> RightSuperFarAudioWeapon; // 0x168(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleNearAudioWeapon; // 0x178(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleMedAudioWeapon; // 0x188(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleFarAudioWeapon; // 0x198(0x10)
	struct TArray<struct FWeaponFireAudioEventRecord> MiddleSuperFarAudioWeapon; // 0x1A8(0x10)
	struct ACHARACTER* OwnerCharacter; // 0x1B8(0x8)
	struct FTimerHandle ClearDirtyDataTimerHandle; // 0x1C0(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFMListenerComponent, "DFMListenerComponent")

};

// Object: Class DFMAudio.DFMUIAudioPlayer
// Size: 0x230 (Inherited: 0x30)
struct UDFMUIAudioPlayer : UEngineSubsystem
{
	struct FMulticastInlineDelegate OnUIAudioPlayEnd; // 0x30(0x10)
	struct FMulticastInlineDelegate OnUIAudioBeginPlay; // 0x40(0x10)
	struct FDelegate OnGPAudioFinished; // 0x50(0x10)
	uint8_t Pad_0x60[0xA0]; // 0x60(0xA0)
	struct TMap<struct FName, struct FSeekAudioContext> SeekAudioMap; // 0x100(0x50)
	uint8_t bIsPreloading : 1; // 0x150(0x1), Mask(0x1)
	uint8_t BitPad_0x150_1 : 7; // 0x150(0x1)
	uint8_t Pad_0x151[0x7]; // 0x151(0x7)
	uint64_t PreloadHandle; // 0x158(0x8)
	struct FMulticastInlineDelegate OnUIAudioPreloadFinished; // 0x160(0x10)
	struct TMap<struct FString, struct UGPAudioEventAsset*> AudioAssetCache; // 0x170(0x50)
	struct TMap<struct FString, uint64_t> AudioLoadingMap; // 0x1C0(0x50)
	uint8_t Pad_0x210[0x20]; // 0x210(0x20)


	// Object: Function DFMAudio.DFMUIAudioPlayer.StopUIEventByName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xf6dc7e4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t StopUIEventByName(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.StopUIAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xc52c688
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t StopUIAudio(struct UObject* WorldContext, struct FString EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.SeekUIAudioToPercent
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x10a9eb9c
	// Params: [ Num(2) Size(0xC) ]
	void SeekUIAudioToPercent(const struct FName& EvtName, float Percent);

	// Object: Function DFMAudio.DFMUIAudioPlayer.ResumeUIAudio
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x109e1c28
	// Params: [ Num(1) Size(0x8) ]
	void ResumeUIAudio(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc52c674
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMAudio.DFMUIAudioPlayer.ReleaseCachedAudio
	// Flags: [Final|Native|Public]
	// Offset: 0x10b21780
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseCachedAudio();

	// Object: Function DFMAudio.DFMUIAudioPlayer.ProcessUIAudioAction
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52c584
	// Params: [ Num(2) Size(0x9) ]
	void ProcessUIAudioAction(const struct FName& EvtName, EGPAudioActionOnEventType InType);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PreloadAudioAssets
	// Flags: [Final|Native|Public]
	// Offset: 0x106d6064
	// Params: [ Num(1) Size(0x1) ]
	void PreloadAudioAssets(EUIAudioPreloadState UIAudioPreloadState);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PreloadAssetsByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xc52c4d0
	// Params: [ Num(1) Size(0x8) ]
	void PreloadAssetsByName(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayUIEventWithSeek
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1067ef5c
	// Params: [ Num(1) Size(0x8) ]
	void PlayUIEventWithSeek(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayUIEventByNameWrapper
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52c410
	// Params: [ Num(2) Size(0x9) ]
	uint8_t PlayUIEventByNameWrapper(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayUIEventByName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xf56a7bc
	// Params: [ Num(3) Size(0xA) ]
	uint8_t PlayUIEventByName(const struct FName& EvtName, uint8_t bNeedGetPosion);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayUIAudioWithEndCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52c350
	// Params: [ Num(2) Size(0x9) ]
	uint8_t PlayUIAudioWithEndCallback(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayUIAudioWithCallback
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0xc52c290
	// Params: [ Num(1) Size(0x18) ]
	void PlayUIAudioWithCallback(const struct FSoftObjectPath& AudioSoftPath);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayUIAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf3a8f48
	// Params: [ Num(3) Size(0x19) ]
	static uint8_t PlayUIAudio(struct UObject* WorldContext, struct FString EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayMusicByName
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf2bc550
	// Params: [ Num(1) Size(0x8) ]
	void PlayMusicByName(const struct FName& MusicEventName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayIngameMusicByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc52c198
	// Params: [ Num(1) Size(0x10) ]
	void PlayIngameMusicByName(struct FString MusicEventName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PlayAudioWithEndCallback
	// Flags: [Final|Native|Public]
	// Offset: 0xc52c0ec
	// Params: [ Num(2) Size(0xC) ]
	int32_t PlayAudioWithEndCallback(struct UGPAudioEventAsset* InAudioAsset);

	// Object: Function DFMAudio.DFMUIAudioPlayer.PauseUIAudio
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52c038
	// Params: [ Num(1) Size(0x8) ]
	void PauseUIAudio(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.OnStopUIEventByName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xf6b2fe0
	// Params: [ Num(1) Size(0x8) ]
	void OnStopUIEventByName(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.OnSingleAudioPreloadFinished
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc52bf78
	// Params: [ Num(1) Size(0x18) ]
	void OnSingleAudioPreloadFinished(const struct FSoftObjectPath& AudioPath);

	// Object: Function DFMAudio.DFMUIAudioPlayer.OnPlayUIEventByName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xef46f98
	// Params: [ Num(1) Size(0x8) ]
	void OnPlayUIEventByName(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.OnGPAudioPlayFinishEnd
	// Flags: [Final|Native|Public]
	// Offset: 0xc52be98
	// Params: [ Num(2) Size(0x8) ]
	void OnGPAudioPlayFinishEnd(EGPEventCallbackType EventCallbackType, int32_t PlayingId);

	// Object: Function DFMAudio.DFMUIAudioPlayer.OnAudioPreloadFinished
	// Flags: [Final|Native|Private]
	// Offset: 0xc52bd8c
	// Params: [ Num(2) Size(0x11) ]
	void OnAudioPreloadFinished(struct TArray<struct FSoftObjectPath> PreloadedAssets, EUIAudioPreloadState UIAudioPreloadState);

	// Object: Function DFMAudio.DFMUIAudioPlayer.InitAudioAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf97fb04
	// Params: [ Num(0) Size(0x0) ]
	void InitAudioAsset();

	// Object: Function DFMAudio.DFMUIAudioPlayer.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b63540
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DFMAudio.DFMUIAudioPlayer.GetUIEventPlayPosition
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xefd7b04
	// Params: [ Num(2) Size(0xC) ]
	int32_t GetUIEventPlayPosition(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMUIAudioPlayer.GetIsAssetInit
	// Flags: [Final|Native|Public]
	// Offset: 0xc52bd54
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsAssetInit();

	// Object: Function DFMAudio.DFMUIAudioPlayer.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfe3c048
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMUIAudioPlayer* Get(struct UObject* WorldContext);

	// Object: Function DFMAudio.DFMUIAudioPlayer.DumpCachedAudioInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xc52bd40
	// Params: [ Num(0) Size(0x0) ]
	void DumpCachedAudioInfo();

	// Object: Function DFMAudio.DFMUIAudioPlayer.ClearLoadingAsset
	// Flags: [Final|Native|Public]
	// Offset: 0xc52bd2c
	// Params: [ Num(0) Size(0x0) ]
	void ClearLoadingAsset();

	// Object: Function DFMAudio.DFMUIAudioPlayer.CancelLoading
	// Flags: [Final|Native|Public]
	// Offset: 0xc52bc80
	// Params: [ Num(1) Size(0x10) ]
	void CancelLoading(struct FString InAssetPath);

	// Object: Function DFMAudio.DFMUIAudioPlayer.AsyncPlayUIAudioWithEndCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52badc
	// Params: [ Num(3) Size(0x31) ]
	uint8_t AsyncPlayUIAudioWithEndCallback(const struct FName& EvtName, struct TSoftObjectPtr<UGPAudioEventAsset> AssetSoftPtr);

	// Object: Function DFMAudio.DFMUIAudioPlayer.AsyncPlay2DGlobalAudio
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52b8a0
	// Params: [ Num(5) Size(0x33) ]
	uint8_t AsyncPlay2DGlobalAudio(struct TSoftObjectPtr<UGPAudioEventAsset> AssetSoftPtr, const struct FName& EvtName, uint8_t bIsStopEvent, uint8_t bNeedGetPosion);
	DEFINE_UE_CLASS_HELPERS(UDFMUIAudioPlayer, "DFMUIAudioPlayer")

};

// Object: Class DFMAudio.DFMusicPlayer
// Size: 0x190 (Inherited: 0x30)
struct UDFMusicPlayer : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnMainMusicPlayBegin; // 0x30(0x10)
	struct TMap<struct FSoftObjectPath, struct UDFMusicPlayWrapper*> LoadingMusicAsset; // 0x40(0x50)
	struct TMap<struct FSoftObjectPath, struct FGPAudioFuturePlayingID> DependenciesMusicPlayingMap; // 0x90(0x50)
	struct TMap<struct FSoftObjectPath, struct FGPAudioFuturePlayingID> PlayingMusic; // 0xE0(0x50)
	struct TMap<struct FSoftObjectPath, struct UGPAudioEventAsset*> PlayingMusicAsset; // 0x130(0x50)
	struct AActor* LobbyMusicPlayerActor; // 0x180(0x8)
	uint8_t Pad_0x188[0x8]; // 0x188(0x8)


	// Object: Function DFMAudio.DFMusicPlayer.StopMusicByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc12d2c
	// Params: [ Num(2) Size(0xC) ]
	void StopMusicByName(struct FName InMusicName, int32_t TransitionMS);

	// Object: Function DFMAudio.DFMusicPlayer.StopAllMusicForce
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a57dc8
	// Params: [ Num(1) Size(0x4) ]
	void StopAllMusicForce(int32_t TransitionMS);

	// Object: Function DFMAudio.DFMusicPlayer.SeekMusicToPercent
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52d088
	// Params: [ Num(3) Size(0xD) ]
	uint8_t SeekMusicToPercent(const struct FName& EvtName, float InPercent);

	// Object: Function DFMAudio.DFMusicPlayer.Reset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc52d074
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMAudio.DFMusicPlayer.PlayMusicWithDependencyAsset
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc52cf08
	// Params: [ Num(3) Size(0x31) ]
	void PlayMusicWithDependencyAsset(const struct FSoftObjectPath& InDependencyMusicAssetPath, const struct FSoftObjectPath& InAudioMusicAssetPath, uint8_t bIs3DPlay);

	// Object: Function DFMAudio.DFMusicPlayer.PlayMusicByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xc52ce64
	// Params: [ Num(1) Size(0x8) ]
	void PlayMusicByName(struct FName InMusicName);

	// Object: Function DFMAudio.DFMusicPlayer.PlayLobbyMusicByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe0dec4
	// Params: [ Num(1) Size(0x8) ]
	void PlayLobbyMusicByName(struct FName InMusicName);

	// Object: Function DFMAudio.DFMusicPlayer.OnMusicAssetLoadCompleted
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc52cd58
	// Params: [ Num(2) Size(0x19) ]
	void OnMusicAssetLoadCompleted(const struct FSoftObjectPath& InAudioAssetPath, uint8_t bIs3DPlay);

	// Object: Function DFMAudio.DFMusicPlayer.OnDependedMusicBeginPlay
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc52cc54
	// Params: [ Num(2) Size(0x1C) ]
	void OnDependedMusicBeginPlay(const struct FSoftObjectPath& AudioAssetPath, int32_t PlayingId);

	// Object: Function DFMAudio.DFMusicPlayer.OnDelayPlayMusic
	// Flags: [Final|Native|Private]
	// Offset: 0xc52cc40
	// Params: [ Num(0) Size(0x0) ]
	void OnDelayPlayMusic();

	// Object: Function DFMAudio.DFMusicPlayer.IsMusicPlaying
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52cb80
	// Params: [ Num(2) Size(0x9) ]
	uint8_t IsMusicPlaying(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMusicPlayer.InitAudioAsset
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109824ec
	// Params: [ Num(0) Size(0x0) ]
	void InitAudioAsset();

	// Object: Function DFMAudio.DFMusicPlayer.GetMusicPlayPercent
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52cac4
	// Params: [ Num(2) Size(0xC) ]
	float GetMusicPlayPercent(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMusicPlayer.GetMusicPlayer
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10ab64a4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMusicPlayer* GetMusicPlayer(struct UObject* Context);

	// Object: Function DFMAudio.DFMusicPlayer.GetMusicDuration
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xc52ca08
	// Params: [ Num(2) Size(0xC) ]
	float GetMusicDuration(const struct FName& EvtName);

	// Object: Function DFMAudio.DFMusicPlayer.GetLobbyMusicPlayerActor
	// Flags: [Final|Native|Public]
	// Offset: 0xc52c9d4
	// Params: [ Num(1) Size(0x8) ]
	struct AActor* GetLobbyMusicPlayerActor();

	// Object: Function DFMAudio.DFMusicPlayer.AsyncPlayMusic
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0xc52c8c8
	// Params: [ Num(2) Size(0x19) ]
	void AsyncPlayMusic(const struct FSoftObjectPath& InAudioAssetPath, uint8_t bIs3DPlay);
	DEFINE_UE_CLASS_HELPERS(UDFMusicPlayer, "DFMusicPlayer")

};

// Object: Class DFMAudio.DFMusicPlayWrapper
// Size: 0x88 (Inherited: 0x28)
struct UDFMusicPlayWrapper : UObject
{
	uint8_t Pad_0x28[0x60]; // 0x28(0x60)


	// Object: Function DFMAudio.DFMusicPlayWrapper.UpdateLoadingId
	// Flags: [Final|Native|Public]
	// Offset: 0xc52d1e4
	// Params: [ Num(1) Size(0x8) ]
	void UpdateLoadingId(uint64_t InLoadingId);

	// Object: Function DFMAudio.DFMusicPlayWrapper.OnDependencyAudioBeginPlay
	// Flags: [Final|Native|Public]
	// Offset: 0xf142014
	// Params: [ Num(2) Size(0x8) ]
	void OnDependencyAudioBeginPlay(EGPEventCallbackType EventCallbackType, int32_t PlayingId);

	// Object: Function DFMAudio.DFMusicPlayWrapper.CancelLoading
	// Flags: [Final|Native|Public]
	// Offset: 0xc52d1d0
	// Params: [ Num(0) Size(0x0) ]
	void CancelLoading();
	DEFINE_UE_CLASS_HELPERS(UDFMusicPlayWrapper, "DFMusicPlayWrapper")

};

// Object: Class DFMAudio.WeaponFuncComponentAudio
// Size: 0x1850 (Inherited: 0x158)
struct UWeaponFuncComponentAudio : UGPWeaponViewComponentBase
{
	uint8_t Pad_0x158[0x18]; // 0x158(0x18)
	struct FAmmoDataRow CurrentAmmoDataRow; // 0x170(0x1D0)
	float BulletFlyDistance; // 0x340(0x4)
	uint8_t Pad_0x344[0x14]; // 0x344(0x14)
	struct FWeaponControlAudioRow WeaponControlAudioData; // 0x358(0x3E0)
	uint8_t Pad_0x738[0x8]; // 0x738(0x8)
	struct FWeaponMainAudioDataRow AudioData; // 0x740(0x8B8)
	uint8_t Pad_0xFF8[0xC0]; // 0xFF8(0xC0)
	struct TScriptInterface<IGPWeaponInterface> LastFireWeapon; // 0x10B8(0x10)
	uint8_t Pad_0x10C8[0xF0]; // 0x10C8(0xF0)
	struct FTimerHandle WeaponFireTimerHandle; // 0x11B8(0x8)
	struct FTimerHandle Start3PWeaponLoopFireTimerHandle; // 0x11C0(0x8)
	struct FTimerHandle End3PWeaponLoopFireTimerHandle; // 0x11C8(0x8)
	struct FTimerHandle Check3PWeaponLoopFireTimerHandle; // 0x11D0(0x8)
	struct FTimerHandle LoopFireCheckTimerHandle; // 0x11D8(0x8)
	struct FTimerHandle LoopFireCountTimerHandle; // 0x11E0(0x8)
	struct FGPAudioMIDIEventAsset MIDIFireEvent; // 0x11E8(0x40)
	struct UGPAudioEventAsset* CandidateFireAudio; // 0x1228(0x8)
	struct FGPAudioMIDIEventAsset FinalMIDIFireEvent3P; // 0x1230(0x40)
	uint8_t Pad_0x1270[0x8]; // 0x1270(0x8)
	struct TArray<struct UGPAudioEventAsset*> Fire3PLoopWaitToEndArray; // 0x1278(0x10)
	struct UGPAudioEventAsset* CommonFire3PLoopEndEvent; // 0x1288(0x8)
	struct FGPAudioMIDIEventAsset DefaultFireEvent3P; // 0x1290(0x40)
	struct TArray<struct FWeaponLoopEventConfigAsset> LoopAudioEvent; // 0x12D0(0x10)
	struct TArray<struct FWeaponLoopEventConfigAsset> PostedLoopEvents; // 0x12E0(0x10)
	struct TMap<struct FSoftObjectPath, struct FWeaponAudioPriority> LoadedAudioEventData; // 0x12F0(0x50)
	struct TArray<struct UObject*> WeaponControlAudioCache; // 0x1340(0x10)
	struct TMap<EGPWeaponInnerEvent, struct FWeaponLoopEventConfigAsset> WeaponLoopEventConfig; // 0x1350(0x50)
	struct FWeaponAudioConfigAsset WeaponAudio; // 0x13A0(0x10)
	struct TWeakObjectPtr<struct UDFMCharacterAudioComponent> CharacterAudioComponent; // 0x13B0(0x8)
	struct FGPAudioCompositeParam CompositeParam; // 0x13B8(0x58)
	struct TWeakObjectPtr<struct UGPAudioAnimationNotifyPlayer> AnimationNotifyPlayer; // 0x1410(0x8)
	struct UWeaponTypeAudioDataAsset* BulletAudioData; // 0x1418(0x8)
	struct FGPAudioMIDIEventAsset CloseMIDIFireEvent; // 0x1420(0x40)
	struct FGPAudioMIDIEventAsset MedMIDIFireEvent; // 0x1460(0x40)
	struct FGPAudioMIDIEventAsset FarMIDIFireEvent; // 0x14A0(0x40)
	struct FGPAudioMIDIEventAsset DistMIDIFireEvent; // 0x14E0(0x40)
	uint8_t Pad_0x1520[0x8]; // 0x1520(0x8)
	struct TMap<struct FSoftObjectPath, struct FWeaponTypeAudioPriority> LoadedBulletAudioData; // 0x1528(0x50)
	struct UShellDropAudioDataAsset* ShellBounceAudioData; // 0x1578(0x8)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AnimationAudios; // 0x1580(0x50)
	struct TMap<struct FSoftObjectPath, struct FShellDropAudioPriority> LoadedShellBounceAudioData; // 0x15D0(0x50)
	struct FTimerHandle AIStableFireEndTimerHandle; // 0x1620(0x8)
	struct FTimerHandle AIStableFireTimerHandle; // 0x1628(0x8)
	struct FTimerHandle ThirdPlayerStableFireTimerHandle; // 0x1630(0x8)
	struct FTimerHandle CheckLoopAudioNotStopTimerHandle; // 0x1638(0x8)
	struct FTimerHandle OutFlybyAudioTimerHandle; // 0x1640(0x8)
	float fCheckLoopAudioNotStopTickTime; // 0x1648(0x4)
	uint8_t Pad_0x164C[0x18]; // 0x164C(0x18)
	uint8_t bEnableMagazineDropAudio : 1; // 0x1664(0x1), Mask(0x1)
	uint8_t BitPad_0x1664_1 : 7; // 0x1664(0x1)
	uint8_t Pad_0x1665[0x3]; // 0x1665(0x3)
	struct UGPAudioEventAsset* DefaultMagazineDropEvent; // 0x1668(0x8)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> MagazineDropMap; // 0x1670(0x50)
	struct FVector MagazineDropDeltaPos; // 0x16C0(0xC)
	uint8_t Pad_0x16CC[0x4]; // 0x16CC(0x4)
	struct TMap<EChracterPoseType, float> DropMagazineAudioDelay; // 0x16D0(0x50)
	float MagazineDropAudioDisSqr; // 0x1720(0x4)
	uint8_t Pad_0x1724[0xC]; // 0x1724(0xC)
	struct TMap<struct AGPCharacter*, struct FCharacterAudioComponents> CharacterAudioComponents; // 0x1730(0x50)
	uint8_t IsSoundSuppressorTriggerBulletCrack : 1; // 0x1780(0x1), Mask(0x1)
	uint8_t BitPad_0x1780_1 : 7; // 0x1780(0x1)
	uint8_t Pad_0x1781[0x37]; // 0x1781(0x37)
	struct TArray<struct UObject*> Cached3PAudioNear; // 0x17B8(0x10)
	struct TArray<struct UObject*> Cached3PAudioMed; // 0x17C8(0x10)
	struct TArray<struct UObject*> Cached3PAudioFar; // 0x17D8(0x10)
	struct TArray<struct UObject*> Cached3PAudioDist; // 0x17E8(0x10)
	struct FWeapon1PFireCache FireAudio1pCache; // 0x17F8(0x20)
	uint8_t Pad_0x1818[0x8]; // 0x1818(0x8)
	float FireIcon3PCDTime; // 0x1820(0x4)
	uint8_t Pad_0x1824[0x14]; // 0x1824(0x14)
	uint8_t WeaponDCFiring[0x8]; // 0x1838(0x8)
	uint8_t WeaponFcFiring[0x8]; // 0x1840(0x8)
	uint8_t Pad_0x1848[0x8]; // 0x1848(0x8)


	// Object: Function DFMAudio.WeaponFuncComponentAudio.UpdateMagazineDropConfig
	// Flags: [Final|Native|Private]
	// Offset: 0xc53061c
	// Params: [ Num(0) Size(0x0) ]
	void UpdateMagazineDropConfig();

	// Object: Function DFMAudio.WeaponFuncComponentAudio.ShouldUseSkillAudioType
	// Flags: [Final|Native|Protected]
	// Offset: 0xc5305e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldUseSkillAudioType();

	// Object: Function DFMAudio.WeaponFuncComponentAudio.SendAudioListenerEvent
	// Flags: [Final|Native|Protected]
	// Offset: 0xc530540
	// Params: [ Num(1) Size(0x1) ]
	void SendAudioListenerEvent(EGPWeaponInnerEvent WeaponEvent);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnWeaponStartFireFailed
	// Flags: [Final|Native|Protected]
	// Offset: 0xc53052c
	// Params: [ Num(0) Size(0x0) ]
	void OnWeaponStartFireFailed();

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnTimeDilationChanged
	// Flags: [Final|Native|Private]
	// Offset: 0x105c81e0
	// Params: [ Num(1) Size(0x4) ]
	void OnTimeDilationChanged(float InNewTimeDilation);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnRoleLoadChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xc530488
	// Params: [ Num(1) Size(0x1) ]
	void OnRoleLoadChanged(uint8_t CurrentRoleLoadValue);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnProjectileHited
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0xc530384
	// Params: [ Num(2) Size(0x90) ]
	void OnProjectileHited(struct APawn* SourcePawn, struct FHitResult& HitReslut);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnPlaySwitchZoomRateAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc530370
	// Params: [ Num(0) Size(0x0) ]
	void OnPlaySwitchZoomRateAudio();

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnPlay3PWeaponChangeClipAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xf1ffb7c
	// Params: [ Num(2) Size(0xC) ]
	void OnPlay3PWeaponChangeClipAudio(struct UAnimSequenceBase* AnimSeq, float PlayRate);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnOpenWarTapeModeChange
	// Flags: [Final|Native|Private]
	// Offset: 0xc5302c4
	// Params: [ Num(1) Size(0x1) ]
	void OnOpenWarTapeModeChange(uint8_t IsOpen);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnGameStateBegin
	// Flags: [Final|Native|Protected]
	// Offset: 0xc530220
	// Params: [ Num(1) Size(0x1) ]
	void OnGameStateBegin(EDFMGamePlayMode NewGamePlayMode);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.OnGameAkMoved
	// Flags: [Final|Native|Public]
	// Offset: 0xc53017c
	// Params: [ Num(1) Size(0x4) ]
	void OnGameAkMoved(float DistanceFromListener);

	// Object: Function DFMAudio.WeaponFuncComponentAudio.IsTriggerBulletCrack
	// Flags: [Final|Native|Private]
	// Offset: 0xc530144
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTriggerBulletCrack();

	// Object: Function DFMAudio.WeaponFuncComponentAudio.CheckStopLoopFire
	// Flags: [Final|Native|Protected]
	// Offset: 0xc530130
	// Params: [ Num(0) Size(0x0) ]
	void CheckStopLoopFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudio.CheckStop1pReflFire
	// Flags: [Final|Native|Protected]
	// Offset: 0xc53011c
	// Params: [ Num(0) Size(0x0) ]
	void CheckStop1pReflFire();
	DEFINE_UE_CLASS_HELPERS(UWeaponFuncComponentAudio, "WeaponFuncComponentAudio")

};

// Object: Class DFMAudio.FixedWeaponFuncComponentAudio
// Size: 0x1870 (Inherited: 0x1850)
struct UFixedWeaponFuncComponentAudio : UWeaponFuncComponentAudio
{
	uint8_t Pad_0x1850[0x10]; // 0x1850(0x10)
	float InitSpeed; // 0x1860(0x4)
	uint8_t Pad_0x1864[0xC]; // 0x1864(0xC)
	DEFINE_UE_CLASS_HELPERS(UFixedWeaponFuncComponentAudio, "FixedWeaponFuncComponentAudio")

};

// Object: Class DFMAudio.SlowBulletAudioComponent
// Size: 0x128 (Inherited: 0xF8)
struct USlowBulletAudioComponent : UActorComponent
{
	struct UGPAudioEventAsset* InFlybyAudioEvent; // 0xF8(0x8)
	struct ADFMCharacter* LocalPlayerCharacter; // 0x100(0x8)
	struct AWeaponBulletRPGSimulate* BulletOwner; // 0x108(0x8)
	uint8_t Pad_0x110[0x10]; // 0x110(0x10)
	struct UTravelerGameAk* TravelerAk; // 0x120(0x8)


	// Object: Function DFMAudio.SlowBulletAudioComponent.OnBulletUsed
	// Flags: [Final|Native|Protected]
	// Offset: 0xc52d29c
	// Params: [ Num(0) Size(0x0) ]
	void OnBulletUsed();
	DEFINE_UE_CLASS_HELPERS(USlowBulletAudioComponent, "SlowBulletAudioComponent")

};

// Object: Class DFMAudio.ThrowableWeaponFuncComponentAudio
// Size: 0x1880 (Inherited: 0x1850)
struct UThrowableWeaponFuncComponentAudio : UWeaponFuncComponentAudio
{
	struct UGPAudioEventAsset* PrefireStartEvent; // 0x1850(0x8)
	struct UGPAudioEventAsset* PrefireEndEvent; // 0x1858(0x8)
	struct UGPAudioEventAsset* HoldIdleStartEvent; // 0x1860(0x8)
	struct UGPAudioEventAsset* HoldIdleEndEvent; // 0x1868(0x8)
	uint8_t bIsPlayIdleAudio : 1; // 0x1870(0x1), Mask(0x1)
	uint8_t BitPad_0x1870_1 : 7; // 0x1870(0x1)
	uint8_t bIsPlayPrefireAudio : 1; // 0x1871(0x1), Mask(0x1)
	uint8_t BitPad_0x1871_1 : 7; // 0x1871(0x1)
	uint8_t Pad_0x1872[0xE]; // 0x1872(0xE)


	// Object: Function DFMAudio.ThrowableWeaponFuncComponentAudio.RefreshCacheByAddDataAsset
	// Flags: [Native|Public]
	// Offset: 0xc52d318
	// Params: [ Num(1) Size(0x4) ]
	void RefreshCacheByAddDataAsset(int32_t InPriority);

	// Object: Function DFMAudio.ThrowableWeaponFuncComponentAudio.PlayPrefireLoopAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc52d304
	// Params: [ Num(0) Size(0x0) ]
	void PlayPrefireLoopAudio();

	// Object: Function DFMAudio.ThrowableWeaponFuncComponentAudio.PlayIdleLoopAudio
	// Flags: [Final|Native|Private]
	// Offset: 0xc52d2f0
	// Params: [ Num(0) Size(0x0) ]
	void PlayIdleLoopAudio();

	// Object: Function DFMAudio.ThrowableWeaponFuncComponentAudio.IsAutonomousOrObserve
	// Flags: [Final|Native|Private]
	// Offset: 0xc52d2b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAutonomousOrObserve();
	DEFINE_UE_CLASS_HELPERS(UThrowableWeaponFuncComponentAudio, "ThrowableWeaponFuncComponentAudio")

};

// Object: Class DFMAudio.UIAudioDataAsset
// Size: 0x40 (Inherited: 0x30)
struct UUIAudioDataAsset : UDataAsset
{
	struct TArray<struct FUIAudioEvent> UIAudioEvents; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UUIAudioDataAsset, "UIAudioDataAsset")

};

// Object: Class DFMAudio.UIAudioResourceManager
// Size: 0x38 (Inherited: 0x30)
struct UUIAudioResourceManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UUIAudioResourceManager, "UIAudioResourceManager")

};

// Object: Class DFMAudio.MusicAudioTableManager
// Size: 0x38 (Inherited: 0x30)
struct UMusicAudioTableManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	DEFINE_UE_CLASS_HELPERS(UMusicAudioTableManager, "MusicAudioTableManager")

};

// Object: Class DFMAudio.WeaponAudioDataAsset
// Size: 0x2C0 (Inherited: 0x30)
struct UWeaponAudioDataAsset : UDataAsset
{
	struct FGPAudioMIDIEvent MIDIFireEvent; // 0x30(0xB0)
	struct FWeaponAudioConfig WeaponAudio; // 0xE0(0x10)
	struct UGPAudioEventAsset* CloseAudioEvent; // 0xF0(0x8)
	struct UGPAudioEventAsset* MedAudioEvent; // 0xF8(0x8)
	struct UGPAudioEventAsset* FarAudioEvent; // 0x100(0x8)
	struct UGPAudioEventAsset* DistAudioEvent; // 0x108(0x8)
	struct TArray<struct FWeaponLoopEventConfig> LoopAudioEvent; // 0x110(0x10)
	struct TMap<struct UPhysicalMaterial*, struct FGPAudioLoopEvent> LoopBulletDropMap; // 0x120(0x50)
	struct UGPAudioEventAsset* DefaultBulletDropEvent; // 0x170(0x8)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> OneShotBulletDropMap; // 0x178(0x50)
	struct FVector ShellDropDeltaPos; // 0x1C8(0xC)
	uint8_t Pad_0x1D4[0x4]; // 0x1D4(0x4)
	struct UGPAudioEventAsset* BulletWooshEvent; // 0x1D8(0x8)
	struct UGPAudioEventAsset* DryfireAudioEvent; // 0x1E0(0x8)
	struct UGPAudioEventAsset* LastFireOfClipAudioEvent; // 0x1E8(0x8)
	uint8_t bForceAISingleFire : 1; // 0x1F0(0x1), Mask(0x1)
	uint8_t BitPad_0x1F0_1 : 7; // 0x1F0(0x1)
	uint8_t Pad_0x1F1[0x3]; // 0x1F1(0x3)
	float fAILoopTailTime; // 0x1F4(0x4)
	uint8_t bUseAIStableFire : 1; // 0x1F8(0x1), Mask(0x1)
	uint8_t BitPad_0x1F8_1 : 7; // 0x1F8(0x1)
	uint8_t Pad_0x1F9[0x3]; // 0x1F9(0x3)
	float fAIStableFireTailTime; // 0x1FC(0x4)
	float CustomAIFireInterval; // 0x200(0x4)
	int32_t CustomContinuousFireNum; // 0x204(0x4)
	struct UGPAudioEventAsset* UnEquipEvent; // 0x208(0x8)
	float UnEquipDelay; // 0x210(0x4)
	uint8_t Pad_0x214[0x4]; // 0x214(0x4)
	struct UGPAudioEventAsset* EquipEvent; // 0x218(0x8)
	float EquipDelay; // 0x220(0x4)
	uint8_t Pad_0x224[0x4]; // 0x224(0x4)
	struct UGPAudioEventAsset* SwitchFireModeEvent; // 0x228(0x8)
	float SwitchFireModeDelay; // 0x230(0x4)
	uint8_t Pad_0x234[0x4]; // 0x234(0x4)
	struct UGPAudioEventAsset* SwitchScopeEvent; // 0x238(0x8)
	float SwitchScopeDelay; // 0x240(0x4)
	uint8_t Pad_0x244[0x4]; // 0x244(0x4)
	struct UGPAudioEventAsset* ZoomInEvent; // 0x248(0x8)
	float ZoomInDelay; // 0x250(0x4)
	uint8_t Pad_0x254[0x4]; // 0x254(0x4)
	struct UGPAudioEventAsset* ZoomOutEvent; // 0x258(0x8)
	float ZoomOutDelay; // 0x260(0x4)
	uint8_t Pad_0x264[0x4]; // 0x264(0x4)
	struct TMap<struct FName, struct UGPAudioEventAsset*> AnimationAudios; // 0x268(0x50)
	struct UWeaponTypeAudioDataAsset* BulletAudioDataAsset; // 0x2B8(0x8)
	DEFINE_UE_CLASS_HELPERS(UWeaponAudioDataAsset, "WeaponAudioDataAsset")

};

// Object: Class DFMAudio.ShellDropAudioDataAsset
// Size: 0xF0 (Inherited: 0x30)
struct UShellDropAudioDataAsset : UDataAsset
{
	struct TMap<EChracterPoseType, float> DropShellAudioDelay; // 0x30(0x50)
	float DropAudioDisSqr; // 0x80(0x4)
	uint8_t Pad_0x84[0x4]; // 0x84(0x4)
	struct UGPAudioEventAsset* DefaultBulletDropEvent; // 0x88(0x8)
	struct TMap<struct UPhysicalMaterial*, struct UGPAudioEventAsset*> OneShotBulletDropMap; // 0x90(0x50)
	struct FVector ShellDropDeltaPos; // 0xE0(0xC)
	uint8_t Pad_0xEC[0x4]; // 0xEC(0x4)
	DEFINE_UE_CLASS_HELPERS(UShellDropAudioDataAsset, "ShellDropAudioDataAsset")

};

// Object: Class DFMAudio.WeaponMainAudioManager
// Size: 0x40 (Inherited: 0x30)
struct UWeaponMainAudioManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UWeaponMainAudioManager, "WeaponMainAudioManager")

};

// Object: Class DFMAudio.WeaponMeleeMainAudioManager
// Size: 0x40 (Inherited: 0x30)
struct UWeaponMeleeMainAudioManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UWeaponMeleeMainAudioManager, "WeaponMeleeMainAudioManager")

};

// Object: Class DFMAudio.WeaponCompositeAudioManager
// Size: 0x40 (Inherited: 0x30)
struct UWeaponCompositeAudioManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UWeaponCompositeAudioManager, "WeaponCompositeAudioManager")

};

// Object: Class DFMAudio.WeaponGameModeAudioEventManager
// Size: 0x40 (Inherited: 0x30)
struct UWeaponGameModeAudioEventManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UWeaponGameModeAudioEventManager, "WeaponGameModeAudioEventManager")

};

// Object: Class DFMAudio.WeaponControlAudioManager
// Size: 0x40 (Inherited: 0x30)
struct UWeaponControlAudioManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UWeaponControlAudioManager, "WeaponControlAudioManager")

};

// Object: Class DFMAudio.GPAudioPriorityMethod_Fire
// Size: 0x118 (Inherited: 0xA0)
struct UGPAudioPriorityMethod_Fire : UGPAudioPriorityMethod
{
	int32_t LimitTypes; // 0xA0(0x4)
	EAudioArea LimitArea; // 0xA4(0x1)
	uint8_t Pad_0xA5[0x3]; // 0xA5(0x3)
	float CircleRadius; // 0xA8(0x4)
	int32_t MaxAudioCnt; // 0xAC(0x4)
	float MaxDPS; // 0xB0(0x4)
	uint8_t Pad_0xB4[0x4]; // 0xB4(0x4)
	struct TSoftObjectPtr<UCurveFloat> TargetShootDirCurve; // 0xB8(0x28)
	struct TSoftObjectPtr<UCurveFloat> ListenerViewDirCurve; // 0xE0(0x28)
	struct UCurveFloat* TargetShootDirCurveCache; // 0x108(0x8)
	struct UCurveFloat* ListenerViewDirCurveCache; // 0x110(0x8)
	DEFINE_UE_CLASS_HELPERS(UGPAudioPriorityMethod_Fire, "GPAudioPriorityMethod_Fire")

};

// Object: Class DFMAudio.WeaponFuncComponentAudio_C103Smoke
// Size: 0x1850 (Inherited: 0x1850)
struct UWeaponFuncComponentAudio_C103Smoke : UWeaponFuncComponentAudio
{	DEFINE_UE_CLASS_HELPERS(UWeaponFuncComponentAudio_C103Smoke, "WeaponFuncComponentAudio_C103Smoke")

};

// Object: Class DFMAudio.WeaponFuncComponentAudioElectricShock
// Size: 0x1888 (Inherited: 0x1850)
struct UWeaponFuncComponentAudioElectricShock : UWeaponFuncComponentAudio
{
	struct UGPAudioEventAsset* LoopAudioEventStart; // 0x1850(0x8)
	struct UGPAudioEventAsset* LoopAudioEventEnd; // 0x1858(0x8)
	struct UGPAudioEventAsset* LoopAudioEventPreFire; // 0x1860(0x8)
	float DelayEndTime3P; // 0x1868(0x4)
	uint8_t bIsFiring : 1; // 0x186C(0x1), Mask(0x1)
	uint8_t BitPad_0x186C_1 : 7; // 0x186C(0x1)
	uint8_t Pad_0x186D[0x3]; // 0x186D(0x3)
	struct FGPAudioFuturePlayingID PlayingId; // 0x1870(0x8)
	uint8_t SoundEnable1P : 1; // 0x1878(0x1), Mask(0x1)
	uint8_t BitPad_0x1878_1 : 7; // 0x1878(0x1)
	uint8_t SoundEnable3P : 1; // 0x1879(0x1), Mask(0x1)
	uint8_t BitPad_0x1879_1 : 7; // 0x1879(0x1)
	uint8_t b3PPlayEndFire : 1; // 0x187A(0x1), Mask(0x1)
	uint8_t BitPad_0x187A_1 : 7; // 0x187A(0x1)
	uint8_t Pad_0x187B[0x5]; // 0x187B(0x5)
	struct FTimerHandle DelayEndFireHandle; // 0x1880(0x8)


	// Object: Function DFMAudio.WeaponFuncComponentAudioElectricShock.ElectricShockPreFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc532a1c
	// Params: [ Num(0) Size(0x0) ]
	void ElectricShockPreFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudioElectricShock.ElectricShockEndFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc532a08
	// Params: [ Num(0) Size(0x0) ]
	void ElectricShockEndFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudioElectricShock.ElectricShockBeginFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc5329f4
	// Params: [ Num(0) Size(0x0) ]
	void ElectricShockBeginFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudioElectricShock.DoEndFire3P
	// Flags: [Final|Native|Public]
	// Offset: 0xc5329e0
	// Params: [ Num(0) Size(0x0) ]
	void DoEndFire3P();

	// Object: Function DFMAudio.WeaponFuncComponentAudioElectricShock.DoEndFire1P
	// Flags: [Final|Native|Public]
	// Offset: 0xc5329cc
	// Params: [ Num(0) Size(0x0) ]
	void DoEndFire1P();
	DEFINE_UE_CLASS_HELPERS(UWeaponFuncComponentAudioElectricShock, "WeaponFuncComponentAudioElectricShock")

};

// Object: Class DFMAudio.WeaponFuncComponentAudioFlameThrower
// Size: 0x1888 (Inherited: 0x1850)
struct UWeaponFuncComponentAudioFlameThrower : UWeaponFuncComponentAudio
{
	struct UGPAudioEventAsset* LoopAudioEventStart; // 0x1850(0x8)
	struct UGPAudioEventAsset* LoopAudioEventEnd; // 0x1858(0x8)
	struct UGPAudioEventAsset* LoopAudioEventPreFire; // 0x1860(0x8)
	float DelayEndTime3P; // 0x1868(0x4)
	uint8_t bIsFiring : 1; // 0x186C(0x1), Mask(0x1)
	uint8_t BitPad_0x186C_1 : 7; // 0x186C(0x1)
	uint8_t Pad_0x186D[0x3]; // 0x186D(0x3)
	struct FGPAudioFuturePlayingID PlayingId; // 0x1870(0x8)
	uint8_t SoundEnable1P : 1; // 0x1878(0x1), Mask(0x1)
	uint8_t BitPad_0x1878_1 : 7; // 0x1878(0x1)
	uint8_t SoundEnable3P : 1; // 0x1879(0x1), Mask(0x1)
	uint8_t BitPad_0x1879_1 : 7; // 0x1879(0x1)
	uint8_t b3PPlayEndFire : 1; // 0x187A(0x1), Mask(0x1)
	uint8_t BitPad_0x187A_1 : 7; // 0x187A(0x1)
	uint8_t Pad_0x187B[0x5]; // 0x187B(0x5)
	struct FTimerHandle DelayEndFireHandle; // 0x1880(0x8)


	// Object: Function DFMAudio.WeaponFuncComponentAudioFlameThrower.FlameThrowerPreFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc532ac8
	// Params: [ Num(0) Size(0x0) ]
	void FlameThrowerPreFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudioFlameThrower.FlameThrowerEndFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc532ab4
	// Params: [ Num(0) Size(0x0) ]
	void FlameThrowerEndFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudioFlameThrower.FlameThrowerBeginFire
	// Flags: [Final|Native|Public]
	// Offset: 0xc532aa0
	// Params: [ Num(0) Size(0x0) ]
	void FlameThrowerBeginFire();

	// Object: Function DFMAudio.WeaponFuncComponentAudioFlameThrower.DoEndFire3P
	// Flags: [Final|Native|Public]
	// Offset: 0xc532a8c
	// Params: [ Num(0) Size(0x0) ]
	void DoEndFire3P();

	// Object: Function DFMAudio.WeaponFuncComponentAudioFlameThrower.DoEndFire1P
	// Flags: [Final|Native|Public]
	// Offset: 0xc532a78
	// Params: [ Num(0) Size(0x0) ]
	void DoEndFire1P();
	DEFINE_UE_CLASS_HELPERS(UWeaponFuncComponentAudioFlameThrower, "WeaponFuncComponentAudioFlameThrower")

};

// Object: Class DFMAudio.WeaponTypeAudioDataAsset
// Size: 0x128 (Inherited: 0x30)
struct UWeaponTypeAudioDataAsset : UDataAsset
{
	float BulletCrackMaxTriggerDistance; // 0x30(0x4)
	float BulletCrackMuteDistance; // 0x34(0x4)
	float BulletCrackNearDistance; // 0x38(0x4)
	float BulletCrackMedDistance; // 0x3C(0x4)
	float CrackOutsideCircleRadius; // 0x40(0x4)
	float CrackInsideCircleRadius; // 0x44(0x4)
	struct UGPAudioEventAsset* BulletCrackNear; // 0x48(0x8)
	struct UGPAudioEventAsset* BulletCrackMed; // 0x50(0x8)
	struct UGPAudioEventAsset* BulletCrackFar; // 0x58(0x8)
	float BulletFlyByMaxTriggerDistance; // 0x60(0x4)
	float BulletFlyByMuteDistance; // 0x64(0x4)
	float BulletFlyByNearDistance; // 0x68(0x4)
	float BulletFlyByMedDistance; // 0x6C(0x4)
	float BulletFlyByNearRadius; // 0x70(0x4)
	float BulletFlyByMedRadius; // 0x74(0x4)
	float BulletFlyByFarRadius; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct UGPAudioEventAsset* BulletFlyByFarFarIn; // 0x80(0x8)
	struct UGPAudioEventAsset* BulletFlyByMedFarIn; // 0x88(0x8)
	struct UGPAudioEventAsset* BulletFlyByNearFarIn; // 0x90(0x8)
	struct UGPAudioEventAsset* BulletFlyByFarMedIn; // 0x98(0x8)
	struct UGPAudioEventAsset* BulletFlyByMedMedIn; // 0xA0(0x8)
	struct UGPAudioEventAsset* BulletFlyByNearMedIn; // 0xA8(0x8)
	struct UGPAudioEventAsset* BulletFlyByFarNearIn; // 0xB0(0x8)
	struct UGPAudioEventAsset* BulletFlyByMedNearIn; // 0xB8(0x8)
	struct UGPAudioEventAsset* BulletFlyByNearNearIn; // 0xC0(0x8)
	struct UGPAudioEventAsset* BulletFlyByFarFarOut; // 0xC8(0x8)
	struct UGPAudioEventAsset* BulletFlyByMedFarOut; // 0xD0(0x8)
	struct UGPAudioEventAsset* BulletFlyByNearFarOut; // 0xD8(0x8)
	struct UGPAudioEventAsset* BulletFlyByFarMedOut; // 0xE0(0x8)
	struct UGPAudioEventAsset* BulletFlyByMedMedOut; // 0xE8(0x8)
	struct UGPAudioEventAsset* BulletFlyByNearMedOut; // 0xF0(0x8)
	struct UGPAudioEventAsset* BulletFlyByFarNearOut; // 0xF8(0x8)
	struct UGPAudioEventAsset* BulletFlyByMedNearOut; // 0x100(0x8)
	struct UGPAudioEventAsset* BulletFlyByNearNearOut; // 0x108(0x8)
	float BulletSpeedPerSecond; // 0x110(0x4)
	uint8_t Pad_0x114[0x4]; // 0x114(0x4)
	struct TArray<EDFMGamePlayMode> AllowCrackGameModeArray; // 0x118(0x10)
	DEFINE_UE_CLASS_HELPERS(UWeaponTypeAudioDataAsset, "WeaponTypeAudioDataAsset")

};

} // namespace SDK
