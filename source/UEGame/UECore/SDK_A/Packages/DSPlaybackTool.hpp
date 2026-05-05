#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DSPlaybackTool
// Enums: 3
// Structs: 57
// Classes: 1

struct FAceSoundVisual;
struct FPlayback;
struct FPlayback_AceBase;
struct FPlayback_MovementModeChange;
struct FPlayback_UsingItem;
struct FPlayback_SoundVisual;
struct FPlayback_AceConnection;
struct FAceConnectionRecord;
struct FPlayback_NightVision;
struct FPlayback_DoorInfo;
struct FPlayback_SpawnDropItem;
struct FPlayback_Looting;
struct FPlayback_BeingRescue;
struct FPlayback_MatchEnd;
struct FPlayback_SmokeEnd;
struct FPlayback_SmokeStart;
struct FPlayback_CancelMarkLoc;
struct FPlayback_MarkLoc;
struct FPlayback_ActiveWeapon;
struct FPlayback_SwitchWeapon;
struct FPlayback_SkillEnd;
struct FPlayback_SkillStart;
struct FPlayback_Grenade;
struct FPlayback_VehicleOut;
struct FPlayback_VehicleIn;
struct FPlayback_BuffEnd;
struct FPlayback_BuffStart;
struct FPlayback_RebornStart;
struct FPlayback_AceAction;
struct FPlayback_AceDeath;
struct FPlayback_AceHitDown;
struct FPlayback_AceHit;
struct FPlayback_AceFire;
struct FAceRotator;
struct FPlayback_AceWorldToScreen;
struct FAceEnemyInfo;
struct FPlayback_AcePosition;
struct FPlayback_AceSummary;
struct FPlayback_AceMatchStart;
struct FPlayback_AceStart;
struct FC2SAceEnemyInfoPackage;
struct FC2SAceEnemyInfoArray;
struct FC2SAceEnemyInfo;
struct FPlayback_EventID;
struct FPlayback_Fire;
struct FPlayback_AgentFind;
struct FPlayback_AgentEQS;
struct FPlayback_AgentMove;
struct FPlayback_Agent;
struct FPlayback_BoxFill;
struct FPlayback_BoxLine;
struct FPlayback_Path;
struct FPlayback_Line;
struct FPlayback_Points;
struct FPlayback_ClickPoint;
struct FSendRateLimit;
struct FPlaybackRateLimit;
struct UDSPlaybackManager;

// Object: Enum DSPlaybackTool.EPlaybackStructAce_ActionType
enum class EPlaybackStructAce_ActionType : uint8_t
{
	Default = 0,
	Reload = 1,
	Crouch = 2,
	Prone = 3,
	Stand = 4,
	Zoom = 5,
	LeftLean = 6,
	RightLean = 7,
	NoneLean = 8,
	SlidingTackle = 9,
	EndZoom = 10,
	Jump = 11,
	EnterSwim = 12,
	ExitSwim = 13,
	EPlaybackStructAce_MAX = 14
};

// Object: Enum DSPlaybackTool.EPlaybackStructType
enum class EPlaybackStructType : uint8_t
{
	Default = 0,
	Common_ClickPoint = 1,
	Common_Points = 2,
	Common_Line = 3,
	Common_Path = 4,
	Common_BoxLine = 5,
	Common_BoxFill = 6,
	Nav_Agent = 10,
	Nav_AgentMove = 11,
	Nav_AgentEQS = 12,
	Nav_AgentFind = 13,
	Nav_Fire = 14,
	Nav_EventID = 15,
	Ace_Start = 100,
	Ace_Summary = 101,
	Ace_Position = 102,
	Ace_WorldToScreen = 103,
	Ace_Fire = 104,
	Ace_Hit = 105,
	Ace_HitDown = 106,
	Ace_Death = 107,
	Ace_Action = 108,
	Ace_MatchStart = 109,
	Ace_RebornStart = 110,
	Ace_Grenade = 111,
	SkillStart = 112,
	SkillEnd = 113,
	BuffStart = 114,
	BuffEnd = 115,
	VehicleIn = 116,
	VehicleOut = 117,
	Ace_SwitchWeapon = 118,
	Ace_ActiveWeapon = 119,
	ACE_MarkLoc = 120,
	ACE_CancelMarkLoc = 121,
	ACE_SmokeStart = 122,
	ACE_SmokeEnd = 123,
	Ace_MatchEnd = 124,
	Ace_BeingResuce = 125,
	Ace_Looting = 126,
	Ace_SpawnDropItem = 127,
	Ace_NightVision = 128,
	Ace_Connection = 129,
	Ace_DoorInfo = 130,
	Ace_SoundVisual = 131,
	Ace_UseItem = 132,
	Ace_MovementModeChange = 133,
	EPlaybackStructType_MAX = 134
};

// Object: Enum DSPlaybackTool.EPlaybackDataType
enum class EPlaybackDataType : uint8_t
{
	Default = 0,
	Nav = 1,
	AI = 2,
	Player = 3,
	Weapon = 4,
	ACE = 5,
	EPlaybackDataType_MAX = 6
};

// Object: ScriptStruct DSPlaybackTool.AceSoundVisual
// Size: 0x18 (Inherited: 0x0)
struct FAceSoundVisual
{
	uint64_t SoundPlayerId; // 0x0(0x8)
	uint8_t Type; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	float Duration; // 0xC(0x4)
	uint64_t CurrentTick; // 0x10(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback
// Size: 0x10 (Inherited: 0x0)
struct FPlayback
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	EPlaybackDataType PlaybackDataType; // 0x8(0x1)
	uint8_t Pad_0x9[0x7]; // 0x9(0x7)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceBase
// Size: 0x18 (Inherited: 0x10)
struct FPlayback_AceBase : FPlayback
{
	uint64_t BaseGameTimeTick; // 0x10(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_MovementModeChange
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_MovementModeChange : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint8_t OldMovementMode; // 0x20(0x1)
	uint8_t NewMovementMode; // 0x21(0x1)
	uint8_t OldCustomMode; // 0x22(0x1)
	uint8_t NewCustomMode; // 0x23(0x1)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_UsingItem
// Size: 0x48 (Inherited: 0x18)
struct FPlayback_UsingItem : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	struct TArray<uint64_t> ItemIds; // 0x20(0x10)
	struct TArray<uint64_t> ItemGIds; // 0x30(0x10)
	uint8_t bFinish : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x7]; // 0x41(0x7)
};

// Object: ScriptStruct DSPlaybackTool.Playback_SoundVisual
// Size: 0x30 (Inherited: 0x18)
struct FPlayback_SoundVisual : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t SoundPlayerId; // 0x20(0x8)
	uint8_t Type; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	float Duration; // 0x2C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceConnection
// Size: 0x20 (Inherited: 0x18)
struct FPlayback_AceConnection : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
};

// Object: ScriptStruct DSPlaybackTool.AceConnectionRecord
// Size: 0x10 (Inherited: 0x0)
struct FAceConnectionRecord
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DSPlaybackTool.Playback_NightVision
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_NightVision : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint8_t bEnable : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DSPlaybackTool.Playback_DoorInfo
// Size: 0x48 (Inherited: 0x18)
struct FPlayback_DoorInfo : FPlayback_AceBase
{
	struct FString DoorName; // 0x18(0x10)
	int32_t DoorState; // 0x28(0x4)
	int32_t DoorOpt; // 0x2C(0x4)
	uint64_t StartTimeTick; // 0x30(0x8)
	uint64_t PlayerUin; // 0x38(0x8)
	int32_t DoorType; // 0x40(0x4)
	int32_t bStart; // 0x44(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_SpawnDropItem
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_SpawnDropItem : FPlayback_AceBase
{
	uint64_t ItemID; // 0x18(0x8)
	uint64_t ItemGid; // 0x20(0x8)
	uint8_t ItemLevel; // 0x28(0x1)
	uint8_t Pad_0x29[0x3]; // 0x29(0x3)
	struct FVector Loc; // 0x2C(0xC)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Looting
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_Looting : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t ItemID; // 0x20(0x8)
	uint64_t ItemGid; // 0x28(0x8)
	uint8_t ItemLevel; // 0x30(0x1)
	uint8_t LootObjectType; // 0x31(0x1)
	uint8_t ItemFlowType; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
};

// Object: ScriptStruct DSPlaybackTool.Playback_BeingRescue
// Size: 0x30 (Inherited: 0x18)
struct FPlayback_BeingRescue : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t RescuePlayerId; // 0x20(0x8)
	uint8_t bFromDead : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
};

// Object: ScriptStruct DSPlaybackTool.Playback_MatchEnd
// Size: 0x18 (Inherited: 0x18)
struct FPlayback_MatchEnd : FPlayback_AceBase
{
};

// Object: ScriptStruct DSPlaybackTool.Playback_SmokeEnd
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_SmokeEnd : FPlayback_AceBase
{
	int32_t SmokeUid; // 0x18(0x4)
	int32_t SmokeId; // 0x1C(0x4)
	struct FVector BoxCenter; // 0x20(0xC)
	struct FVector BoxExtend; // 0x2C(0xC)
};

// Object: ScriptStruct DSPlaybackTool.Playback_SmokeStart
// Size: 0x48 (Inherited: 0x18)
struct FPlayback_SmokeStart : FPlayback_AceBase
{
	int32_t SmokeUid; // 0x18(0x4)
	int32_t SmokeId; // 0x1C(0x4)
	struct FVector BoxCenter; // 0x20(0xC)
	struct FVector BoxExtend; // 0x2C(0xC)
	float FadeInTime; // 0x38(0x4)
	float FadeOutTime; // 0x3C(0x4)
	float LifeDuration; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_CancelMarkLoc
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_CancelMarkLoc : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint8_t MarkingLocationType; // 0x20(0x1)
	uint8_t bRemovedProactively; // 0x21(0x1)
	uint8_t Pad_0x22[0x6]; // 0x22(0x6)
};

// Object: ScriptStruct DSPlaybackTool.Playback_MarkLoc
// Size: 0x30 (Inherited: 0x18)
struct FPlayback_MarkLoc : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint8_t MarkingLocationType; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	struct FVector MarkLocation; // 0x24(0xC)
};

// Object: ScriptStruct DSPlaybackTool.Playback_ActiveWeapon
// Size: 0x30 (Inherited: 0x18)
struct FPlayback_ActiveWeapon : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t WeaponID; // 0x20(0x8)
	uint32_t bActive; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_SwitchWeapon
// Size: 0x30 (Inherited: 0x18)
struct FPlayback_SwitchWeapon : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t LastWeaponId; // 0x20(0x8)
	uint64_t WeaponID; // 0x28(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_SkillEnd
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_SkillEnd : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t SkillId; // 0x20(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_SkillStart
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_SkillStart : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t SkillId; // 0x20(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Grenade
// Size: 0x40 (Inherited: 0x18)
struct FPlayback_Grenade : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t ProjectileId; // 0x20(0x8)
	struct FVector ExplodesionLocation; // 0x28(0xC)
	float Ranage; // 0x34(0x4)
	float Duration; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_VehicleOut
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_VehicleOut : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t VehcileId; // 0x20(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_VehicleIn
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_VehicleIn : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t VehcileId; // 0x20(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_BuffEnd
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_BuffEnd : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t FromPlayerId; // 0x20(0x8)
	uint64_t BuffId; // 0x28(0x8)
	uint64_t BuffGId; // 0x30(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_BuffStart
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_BuffStart : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t FromPlayerId; // 0x20(0x8)
	uint64_t BuffId; // 0x28(0x8)
	uint64_t BuffGId; // 0x30(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_RebornStart
// Size: 0x38 (Inherited: 0x18)
struct FPlayback_RebornStart : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t ExpertId; // 0x20(0x8)
	struct FVector RebornLocation; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceAction
// Size: 0x28 (Inherited: 0x18)
struct FPlayback_AceAction : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint8_t ActionId; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceDeath
// Size: 0x58 (Inherited: 0x18)
struct FPlayback_AceDeath : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t AttackValueId; // 0x20(0x8)
	struct FVector Loc; // 0x28(0xC)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	uint64_t AttackerPlayerId; // 0x38(0x8)
	uint64_t SkillId; // 0x40(0x8)
	uint64_t WeaponID; // 0x48(0x8)
	uint64_t BuffId; // 0x50(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceHitDown
// Size: 0x90 (Inherited: 0x18)
struct FPlayback_AceHitDown : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t TakerId; // 0x20(0x8)
	struct FVector MakerCharacterLoc; // 0x28(0xC)
	struct FVector TakerCharacterLoc; // 0x34(0xC)
	uint8_t bVisiblity; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FRotator MakerViewRot; // 0x44(0xC)
	uint64_t WeaponID; // 0x50(0x8)
	struct FVector TakerHitLoc; // 0x58(0xC)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	uint64_t SkillId; // 0x68(0x8)
	uint64_t BuffId; // 0x70(0x8)
	uint64_t AttackValueId; // 0x78(0x8)
	uint64_t FireId; // 0x80(0x8)
	uint8_t bFromImpendingDeath : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceHit
// Size: 0xA8 (Inherited: 0x18)
struct FPlayback_AceHit : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t TakerId; // 0x20(0x8)
	struct FVector MakerCharacterLoc; // 0x28(0xC)
	struct FVector TakerCharacterLoc; // 0x34(0xC)
	uint8_t bVisiblity; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	struct FRotator MakerViewRot; // 0x44(0xC)
	uint64_t WeaponID; // 0x50(0x8)
	struct FVector TakerHitLoc; // 0x58(0xC)
	float HPDamage; // 0x64(0x4)
	float HPRemain; // 0x68(0x4)
	float ArmorDamage; // 0x6C(0x4)
	uint64_t ArmorId; // 0x70(0x8)
	float ArmorRemain; // 0x78(0x4)
	uint8_t bIsImpendingDeath; // 0x7C(0x1)
	uint8_t Pad_0x7D[0x3]; // 0x7D(0x3)
	float ImpendingDeathHP; // 0x80(0x4)
	uint8_t HitDamagePart; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	uint64_t FireId; // 0x88(0x8)
	uint8_t Pad_0x90[0x18]; // 0x90(0x18)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceFire
// Size: 0x50 (Inherited: 0x18)
struct FPlayback_AceFire : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint64_t WeaponID; // 0x20(0x8)
	uint64_t FireId; // 0x28(0x8)
	struct FRotator Rotator; // 0x30(0xC)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	uint64_t SightItemId; // 0x40(0x8)
	uint8_t bZoom : 1; // 0x48(0x1), Mask(0x1)
	uint8_t BitPad_0x48_1 : 7; // 0x48(0x1)
	uint8_t bIsThermalImaging : 1; // 0x49(0x1), Mask(0x1)
	uint8_t BitPad_0x49_1 : 7; // 0x49(0x1)
	uint8_t Pad_0x4A[0x6]; // 0x4A(0x6)
};

// Object: ScriptStruct DSPlaybackTool.AceRotator
// Size: 0x8 (Inherited: 0x0)
struct FAceRotator
{
	float Pitch; // 0x0(0x4)
	float Yaw; // 0x4(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceWorldToScreen
// Size: 0x48 (Inherited: 0x18)
struct FPlayback_AceWorldToScreen : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	struct FVector PlayerLoc; // 0x20(0xC)
	struct FAceRotator PlayerRot; // 0x2C(0x8)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct TArray<struct FAceEnemyInfo> EnemyInfos; // 0x38(0x10)
};

// Object: ScriptStruct DSPlaybackTool.AceEnemyInfo
// Size: 0x30 (Inherited: 0x0)
struct FAceEnemyInfo
{
	uint64_t EnemyId; // 0x0(0x8)
	uint8_t EnemyVisible; // 0x8(0x1)
	uint8_t Pad_0x9[0x3]; // 0x9(0x3)
	struct FVector EnemyLoc; // 0xC(0xC)
	struct FVector2D EnemyScreenLoc; // 0x18(0x8)
	struct FVector2D EnemyHeadScreenLoc; // 0x20(0x8)
	float EnemyScreenDist; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AcePosition
// Size: 0x60 (Inherited: 0x18)
struct FPlayback_AcePosition : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	struct FVector PlayerLoc; // 0x20(0xC)
	struct FRotator PlayerViewRot; // 0x2C(0xC)
	struct FVector Velocity; // 0x38(0xC)
	struct FVector CameraLoc; // 0x44(0xC)
	float FOV; // 0x50(0x4)
	struct FVector MeshRotation; // 0x54(0xC)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceSummary
// Size: 0x50 (Inherited: 0x18)
struct FPlayback_AceSummary : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	uint8_t MatchOverReason; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	float Duration; // 0x24(0x4)
	int32_t Team; // 0x28(0x4)
	int32_t Camp; // 0x2C(0x4)
	int32_t Score; // 0x30(0x4)
	uint32_t KillNum; // 0x34(0x4)
	uint32_t DeadNum; // 0x38(0x4)
	uint32_t HeadShotNum; // 0x3C(0x4)
	uint32_t AssistsNum; // 0x40(0x4)
	float TotalDamage; // 0x44(0x4)
	float CarryIn; // 0x48(0x4)
	float CarryOut; // 0x4C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceMatchStart
// Size: 0x20 (Inherited: 0x18)
struct FPlayback_AceMatchStart : FPlayback_AceBase
{
	uint32_t FPS; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AceStart
// Size: 0x70 (Inherited: 0x18)
struct FPlayback_AceStart : FPlayback_AceBase
{
	uint64_t PlayerId; // 0x18(0x8)
	struct FString PlayerNickName; // 0x20(0x10)
	uint32_t PlayerLevel; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	uint64_t GameModeId; // 0x38(0x8)
	uint64_t MapID; // 0x40(0x8)
	uint64_t RoomId; // 0x48(0x8)
	struct FString GameVersion; // 0x50(0x10)
	int32_t TeamID; // 0x60(0x4)
	int32_t CampId; // 0x64(0x4)
	uint64_t ExpertId; // 0x68(0x8)
};

// Object: ScriptStruct DSPlaybackTool.C2SAceEnemyInfoPackage
// Size: 0x18 (Inherited: 0x0)
struct FC2SAceEnemyInfoPackage
{
	uint8_t Pad_0x0[0x8]; // 0x0(0x8)
	struct TArray<struct FC2SAceEnemyInfoArray> C2SC2SAceEnemyInfoPackages; // 0x8(0x10)
};

// Object: ScriptStruct DSPlaybackTool.C2SAceEnemyInfoArray
// Size: 0x10 (Inherited: 0x0)
struct FC2SAceEnemyInfoArray
{
	struct TArray<struct FC2SAceEnemyInfo> C2SAceEnemyInfos; // 0x0(0x10)
};

// Object: ScriptStruct DSPlaybackTool.C2SAceEnemyInfo
// Size: 0x10 (Inherited: 0x0)
struct FC2SAceEnemyInfo
{
	uint32_t ID; // 0x0(0x4)
	uint8_t Pad_0x4[0xC]; // 0x4(0xC)
};

// Object: ScriptStruct DSPlaybackTool.Playback_EventID
// Size: 0x28 (Inherited: 0x10)
struct FPlayback_EventID : FPlayback
{
	struct TArray<uint64_t> AllEventIDs; // 0x10(0x10)
	uint64_t FrameCounter; // 0x20(0x8)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Fire
// Size: 0x38 (Inherited: 0x10)
struct FPlayback_Fire : FPlayback
{
	uint64_t Uin; // 0x10(0x8)
	uint64_t FrameCounter; // 0x18(0x8)
	struct FVector FireStart; // 0x20(0xC)
	struct FVector FireEnd; // 0x2C(0xC)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AgentFind
// Size: 0x60 (Inherited: 0x10)
struct FPlayback_AgentFind : FPlayback
{
	uint64_t Uin; // 0x10(0x8)
	uint64_t FrameCounter; // 0x18(0x8)
	struct FVector StartLoc; // 0x20(0xC)
	struct FVector EndLoc; // 0x2C(0xC)
	uint8_t bFoundPath : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
	struct TArray<float> Points; // 0x40(0x10)
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AgentEQS
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_AgentEQS : FPlayback
{
	uint64_t Uin; // 0x10(0x8)
	uint64_t FrameCounter; // 0x18(0x8)
	struct TArray<float> Path; // 0x20(0x10)
	struct TArray<uint8_t> FoundPath; // 0x30(0x10)
};

// Object: ScriptStruct DSPlaybackTool.Playback_AgentMove
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_AgentMove : FPlayback
{
	uint64_t Uin; // 0x10(0x8)
	uint64_t FrameCounter; // 0x18(0x8)
	uint64_t Time; // 0x20(0x8)
	struct FVector Loc; // 0x28(0xC)
	float Yaw; // 0x34(0x4)
	float Pitch; // 0x38(0x4)
	float Roll; // 0x3C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Agent
// Size: 0x38 (Inherited: 0x10)
struct FPlayback_Agent : FPlayback
{
	uint64_t Uin; // 0x10(0x8)
	int32_t AgentMode; // 0x18(0x4)
	struct FVector Loc; // 0x1C(0xC)
	struct FString AgentName; // 0x28(0x10)
};

// Object: ScriptStruct DSPlaybackTool.Playback_BoxFill
// Size: 0x48 (Inherited: 0x10)
struct FPlayback_BoxFill : FPlayback
{
	uint64_t Time; // 0x10(0x8)
	struct FVector CenterLoc; // 0x18(0xC)
	struct FVector Scale; // 0x24(0xC)
	struct FRotator Rotator; // 0x30(0xC)
	uint32_t Color; // 0x3C(0x4)
	float During; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_BoxLine
// Size: 0x48 (Inherited: 0x10)
struct FPlayback_BoxLine : FPlayback
{
	uint64_t Time; // 0x10(0x8)
	struct FVector CenterLoc; // 0x18(0xC)
	struct FVector Scale; // 0x24(0xC)
	struct FRotator Rotator; // 0x30(0xC)
	float Width; // 0x3C(0x4)
	uint32_t Color; // 0x40(0x4)
	float During; // 0x44(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Path
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_Path : FPlayback
{
	uint64_t Time; // 0x10(0x8)
	int32_t LocNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<float> Points; // 0x20(0x10)
	float Width; // 0x30(0x4)
	uint32_t Color; // 0x34(0x4)
	float During; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Line
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_Line : FPlayback
{
	uint64_t Time; // 0x10(0x8)
	struct FVector StartLoc; // 0x18(0xC)
	struct FVector EndLoc; // 0x24(0xC)
	float Width; // 0x30(0x4)
	uint32_t Color; // 0x34(0x4)
	float During; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_Points
// Size: 0x40 (Inherited: 0x10)
struct FPlayback_Points : FPlayback
{
	uint64_t Time; // 0x10(0x8)
	int32_t LocNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct TArray<float> Points; // 0x20(0x10)
	float size; // 0x30(0x4)
	uint32_t Color; // 0x34(0x4)
	float During; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
};

// Object: ScriptStruct DSPlaybackTool.Playback_ClickPoint
// Size: 0x48 (Inherited: 0x10)
struct FPlayback_ClickPoint : FPlayback
{
	uint64_t Time; // 0x10(0x8)
	struct FVector Loc; // 0x18(0xC)
	float size; // 0x24(0x4)
	uint32_t Color; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString Format; // 0x30(0x10)
	float During; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct DSPlaybackTool.SendRateLimit
// Size: 0x14 (Inherited: 0x0)
struct FSendRateLimit
{
	uint32_t CurNum; // 0x0(0x4)
	uint32_t TotalSendNum; // 0x4(0x4)
	uint32_t LastUpdateTick; // 0x8(0x4)
	uint32_t MaxSendNum; // 0xC(0x4)
	uint32_t MaxWaitSendNum; // 0x10(0x4)
};

// Object: ScriptStruct DSPlaybackTool.PlaybackRateLimit
// Size: 0x20 (Inherited: 0x10)
struct FPlaybackRateLimit : FDescRowBase
{
	EPlaybackDataType PlaybackDataType; // 0x10(0x1)
	uint8_t Pad_0x11[0x3]; // 0x11(0x3)
	int32_t MaxSendNum; // 0x14(0x4)
	int32_t MaxWaitSendNum; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
};

// Object: Class DSPlaybackTool.DSPlaybackManager
// Size: 0x178 (Inherited: 0x30)
struct UDSPlaybackManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDSPlaybackManager, "DSPlaybackManager")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	int32_t MaxUpdateNumPerFrame; // 0x38(0x4)
	int32_t MaxMemoryBufferSize; // 0x3C(0x4)
	uint8_t bDSEnablePlayback : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0x3]; // 0x41(0x3)
	uint32_t DefaultTotalSendNum; // 0x44(0x4)
	uint32_t DefaultWaitSendNum; // 0x48(0x4)
	uint8_t Pad_0x4C[0x12C]; // 0x4C(0x12C)

	// Object: Function DSPlaybackTool.DSPlaybackManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x79c4b24
	// Params: [ Num(2) Size(0x10) ]
	static struct UDSPlaybackManager* Get(struct UObject* WorldContextObject);

	// Object: Function DSPlaybackTool.DSPlaybackManager.AddPoints
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x79c497c
	// Params: [ Num(5) Size(0x24) ]
	void AddPoints(EPlaybackDataType Type, const struct TArray<struct FVector>& Loc, float size, struct FColor Color, float During);

	// Object: Function DSPlaybackTool.DSPlaybackManager.AddPath
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x79c47d4
	// Params: [ Num(5) Size(0x24) ]
	void AddPath(EPlaybackDataType Type, const struct TArray<struct FVector>& pathPoint, float Width, struct FColor Color, float During);

	// Object: Function DSPlaybackTool.DSPlaybackManager.AddLine
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x79c4608
	// Params: [ Num(6) Size(0x28) ]
	void AddLine(EPlaybackDataType Type, struct FVector StartLoc, struct FVector EndLoc, float Width, struct FColor Color, float During);

	// Object: Function DSPlaybackTool.DSPlaybackManager.AddClickPoint
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x79c4434
	// Params: [ Num(6) Size(0x2C) ]
	void AddClickPoint(EPlaybackDataType Type, struct FVector Loc, float size, struct FColor Color, struct FString DebugInfo, float During);

	// Object: Function DSPlaybackTool.DSPlaybackManager.AddBoxLine
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x79c426c
	// Params: [ Num(5) Size(0x4C) ]
	void AddBoxLine(EPlaybackDataType Type, struct FTransform Transform, float Width, struct FColor Color, float During);

	// Object: Function DSPlaybackTool.DSPlaybackManager.AddBoxFill
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x79c40e0
	// Params: [ Num(4) Size(0x48) ]
	void AddBoxFill(EPlaybackDataType Type, struct FTransform Transform, struct FColor Color, float During);
};

} // namespace SDK
