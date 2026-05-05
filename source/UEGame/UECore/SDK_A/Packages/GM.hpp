#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameplay.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: GM
// Enums: 1
// Structs: 2
// Classes: 5

struct AActor;
struct ACHARACTER;
struct ADFMAICharacter;
struct ADFMCharacter;
struct ADFMPlayerState;
struct ADramaArea;
struct AGPCharacter;
struct AGPDeformableSmokeEmitActor;
struct AGPPlayerState;
struct AMockPathHelper;
struct APawn;
struct AWeaponBase;
enum class EAttachPosition : uint8_t;
enum class EGPAudioBlueprintType : uint8_t;
enum class EGPAudioFootSoundType : uint8_t;
enum class ESkillLogicType : uint8_t;
enum class ESubtitleSequenceType : uint8_t;
struct FAIHitRateDebugData;
struct FAiDifficultyDebugDataInfos;
struct FGMCoverDrawInfo;
struct FGPWeaponDescInfo;
struct FMapEconomyReportData;
struct FPerceptionDebugData;
struct FSimulateAILabDebugData;
struct FTestCharacterParam;
struct FTestWeaponParam;
struct FVCCheckFailed;
struct UAttributeOperatorEffect;
struct UBaseUIView;
struct UButton;
struct UCharacterMoveStuckTestObjectSingleton;
struct UDFEditableTextBox;
struct UDFTextBlock;
struct UFont;
struct UGPModularWeaponDesc;
struct UGameplayEffect;
struct ULineBatchComponent;
struct UModularWeaponDesc;
struct UParticleSystemComponent;
struct UProceduralMeshComponent;
struct UUserWidget;
struct UWorld;
struct FMapSelectNavPoint;
struct FClimbVaultAngleResult;
struct UDFMPlayerGMComponent;
struct UCrashSightGameInfoCollectSys;
struct UMapDropBoxDataHUDView;
struct UPlayerGMComponentRaid;
struct UTestButton;

// Object: Enum GM.EClimbVaultResult
enum class EClimbVaultResult : uint8_t
{
	EChoice_None = 0,
	Succeed = 1,
	NoObstacle = 2,
	TouchAngle = 3,
	ObstacleHeight = 4,
	ApexPoint = 5,
	ObstacleAbruptSlope = 6,
	ObstacleWidth = 7,
	CollideOverHead = 8,
	CollideOverHead_TopNearTarget = 9,
	EClimbVaultResult_MAX = 10
};

// Object: ScriptStruct GM.MapSelectNavPoint
// Size: 0x110 (Inherited: 0x0)
struct FMapSelectNavPoint
{
	struct UWorld* WorldContent; // 0x0(0x8)
	struct TArray<struct FVector> AllSelectPoints; // 0x8(0x10)
	struct TArray<struct FClimbVaultAngleResult> ClimbVaultFaildResult; // 0x18(0x10)
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	uint8_t DrawPointDebug : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x9B]; // 0x31(0x9B)
	float ObstacleHeightCheckInterval; // 0xCC(0x4)
	int32_t MaxObstacleHeightCheckCount; // 0xD0(0x4)
	uint8_t Pad_0xD4[0x3C]; // 0xD4(0x3C)
};

// Object: ScriptStruct GM.ClimbVaultAngleResult
// Size: 0x20 (Inherited: 0x0)
struct FClimbVaultAngleResult
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
};

// Object: Class GM.DFMPlayerGMComponent
// Size: 0x888 (Inherited: 0x2D8)
struct UDFMPlayerGMComponent : UPlayerGMComponent
{
	DEFINE_UE_CLASS_HELPERS(UDFMPlayerGMComponent, "DFMPlayerGMComponent")

	struct ACHARACTER* AIViewCharacter; // 0x2D8(0x8)
	struct ACHARACTER* AIViewDeadCharacter; // 0x2E0(0x8)
	uint8_t Pad_0x2E8[0x10]; // 0x2E8(0x10)
	struct TArray<struct AActor*> CachedCreatedGMBreakableItems; // 0x2F8(0x10)
	struct AActor* AILabSpawnerClass; // 0x308(0x8)
	struct TArray<struct FName> SuperOverLoadEquipmentIds; // 0x310(0x10)
	struct FString DebugInfo; // 0x320(0x10)
	uint8_t Pad_0x330[0x20]; // 0x330(0x20)
	struct TArray<struct FAIHitRateDebugData> CachedHRData; // 0x350(0x10)
	uint8_t nonPerceptual : 1; // 0x360(0x1), Mask(0x1)
	uint8_t BitPad_0x360_1 : 7; // 0x360(0x1)
	uint8_t Pad_0x361[0x5F]; // 0x361(0x5F)
	struct TMap<struct UParticleSystemComponent*, struct FTimerHandle> FXTimeoutTimerMap; // 0x3C0(0x50)
	struct TArray<struct UParticleSystemComponent*> ActiveFXComponents; // 0x410(0x10)
	uint8_t Pad_0x420[0x28]; // 0x420(0x28)
	struct UParticleSystemComponent* CurrentPSC; // 0x448(0x8)
	uint8_t Pad_0x450[0x20]; // 0x450(0x20)
	struct AGPDeformableSmokeEmitActor* SmokeActorBP; // 0x470(0x8)
	uint8_t Pad_0x478[0x10]; // 0x478(0x10)
	struct UFont* XRayDebugFont; // 0x488(0x8)
	struct FString AILabDebugMsg; // 0x490(0x10)
	struct FString AILabFrameDebugMsg; // 0x4A0(0x10)
	uint8_t Pad_0x4B0[0x30]; // 0x4B0(0x30)
	int32_t OnceSendFailedNum; // 0x4E0(0x4)
	uint8_t Pad_0x4E4[0x6C]; // 0x4E4(0x6C)
	struct UProceduralMeshComponent* ClientDrawFoliageComponent; // 0x550(0x8)
	uint8_t Pad_0x558[0x48]; // 0x558(0x48)
	struct ULineBatchComponent* ClientDrawNavComponent; // 0x5A0(0x8)
	struct FSimulateAIDebugData SimulateAIDebugData; // 0x5A8(0xA8)
	struct TArray<struct FSimulateAILabDebugData> SimulateAILabDebugData; // 0x650(0x10)
	struct UGameplayEffect* GMKillMeGameplayEffect; // 0x660(0x8)
	struct UGameplayEffect* GMHurtImPendingDeathGameplayEffect; // 0x668(0x8)
	struct UGameplayEffect* GMResetGameplayEffect; // 0x670(0x8)
	struct UAttributeOperatorEffect* GMKillMeAttributeEffect; // 0x678(0x8)
	struct UAttributeOperatorEffect* GMResetAttributeEffect; // 0x680(0x8)
	struct AActor* WeaponDebugViewTarget; // 0x688(0x8)
	float LastRestartTime; // 0x690(0x4)
	uint8_t Pad_0x694[0x24]; // 0x694(0x24)
	struct FMulticastInlineDelegate OnDrawCover; // 0x6B8(0x10)
	uint8_t Pad_0x6C8[0x170]; // 0x6C8(0x170)
	struct UUserWidget* DropLogicViewInst; // 0x838(0x8)
	uint8_t Pad_0x840[0x30]; // 0x840(0x30)
	struct UCharacterMoveStuckTestObjectSingleton* CharacterMoveStuckTestManager; // 0x870(0x8)
	uint8_t Pad_0x878[0x10]; // 0x878(0x10)

	// Object: Function GM.DFMPlayerGMComponent.VCCheckTool
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15360744
	// Params: [ Num(5) Size(0x14) ]
	void VCCheckTool(float InRangeHalfX, float InRangeHalfY, float InCellSize, float InDeltaAngle, float InDebuglifetime);

	// Object: Function GM.DFMPlayerGMComponent.UseSkill_T
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153606a0
	// Params: [ Num(1) Size(0x4) ]
	void UseSkill_T(int32_t SkillId);

	// Object: Function GM.DFMPlayerGMComponent.UseSkill
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153605fc
	// Params: [ Num(1) Size(0x4) ]
	void UseSkill(int32_t SkillId);

	// Object: Function GM.DFMPlayerGMComponent.UseAILabGM
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1536050c
	// Params: [ Num(2) Size(0x18) ]
	void UseAILabGM(int64_t Uin, struct FString GMCmd);

	// Object: Function GM.DFMPlayerGMComponent.UpdatePerceptionDebugInfoToClient
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x15360458
	// Params: [ Num(1) Size(0x10) ]
	void UpdatePerceptionDebugInfoToClient(struct TArray<struct FPerceptionDebugData> PerceptionDebugInfo);

	// Object: Function GM.DFMPlayerGMComponent.UpdatePerceptionDebugInfo
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x153603ac
	// Params: [ Num(1) Size(0x4) ]
	void UpdatePerceptionDebugInfo(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.UpdateMonitorAIMouse
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable]
	// Offset: 0x1536023c
	// Params: [ Num(4) Size(0x30) ]
	void UpdateMonitorAIMouse(struct FVector CamLoc, struct FRotator CamRot, struct FVector pint, struct FVector Dir);

	// Object: Function GM.DFMPlayerGMComponent.UpdateMonitorAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15360220
	// Params: [ Num(0) Size(0x0) ]
	void UpdateMonitorAI();

	// Object: Function GM.DFMPlayerGMComponent.UpdateHitRateDebugInfoToClient
	// Flags: [Net|Native|Event|Public|NetClient|BlueprintCallable]
	// Offset: 0x1536016c
	// Params: [ Num(1) Size(0x10) ]
	void UpdateHitRateDebugInfoToClient(struct TArray<struct FAIHitRateDebugData> AIHitRateData);

	// Object: Function GM.DFMPlayerGMComponent.UpdateDrawAIDsLocation
	// Flags: [Final|Native|Public]
	// Offset: 0x15360158
	// Params: [ Num(0) Size(0x0) ]
	void UpdateDrawAIDsLocation();

	// Object: Function GM.DFMPlayerGMComponent.UpdateDebugToClient
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x153600b4
	// Params: [ Num(1) Size(0x8) ]
	void UpdateDebugToClient(struct APawn* AICharacter);

	// Object: Function GM.DFMPlayerGMComponent.UpdateAILabInfoToClient
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15360098
	// Params: [ Num(0) Size(0x0) ]
	void UpdateAILabInfoToClient();

	// Object: Function GM.DFMPlayerGMComponent.UpdateAILabDebug
	// Flags: [Net|Native|Event|Public|NetClient|BlueprintCallable]
	// Offset: 0x1535ffe4
	// Params: [ Num(1) Size(0x10) ]
	void UpdateAILabDebug(struct FString Msg);

	// Object: Function GM.DFMPlayerGMComponent.UpdateAIDifficultyDebugInfoToClient
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x1535fea0
	// Params: [ Num(1) Size(0x28) ]
	void UpdateAIDifficultyDebugInfoToClient(struct FAiDifficultyDebugDataInfos Infos);

	// Object: Function GM.DFMPlayerGMComponent.UpdateAIDebugInfoToClient
	// Flags: [Net|Native|Event|Public|NetClient|BlueprintCallable]
	// Offset: 0x1535fd6c
	// Params: [ Num(3) Size(0x28) ]
	void UpdateAIDebugInfoToClient(struct APawn* AICharacter, struct FString DebugInfoMsg, struct FString DebugInfoMsgRight);

	// Object: Function GM.DFMPlayerGMComponent.UpdateAIDebugInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1535fd58
	// Params: [ Num(0) Size(0x0) ]
	void UpdateAIDebugInfo();

	// Object: Function GM.DFMPlayerGMComponent.TryToSampleWaterData
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535fc78
	// Params: [ Num(2) Size(0x8) ]
	void TryToSampleWaterData(int32_t SampledCount, float MaxDistance);

	// Object: Function GM.DFMPlayerGMComponent.TryLanding
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x1535fbd4
	// Params: [ Num(1) Size(0xC) ]
	void TryLanding(struct FVector StartLoc);

	// Object: Function GM.DFMPlayerGMComponent.TransAILabCommand
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535fa3c
	// Params: [ Num(5) Size(0x20) ]
	void TransAILabCommand(int64_t Uin, int32_t Command, float value1, float value2, int64_t Value3);

	// Object: Function GM.DFMPlayerGMComponent.ToggleXPP
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535fa28
	// Params: [ Num(0) Size(0x0) ]
	void ToggleXPP();

	// Object: Function GM.DFMPlayerGMComponent.ToggleLocationDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f984
	// Params: [ Num(1) Size(0x4) ]
	void ToggleLocationDebug(int32_t DebugMode);

	// Object: Function GM.DFMPlayerGMComponent.ToggleAudioEventDebugPanel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f8d8
	// Params: [ Num(1) Size(0x1) ]
	void ToggleAudioEventDebugPanel(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.ToggleAILabDebugMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f834
	// Params: [ Num(1) Size(0x4) ]
	void ToggleAILabDebugMode(int32_t DebugMode);

	// Object: Function GM.DFMPlayerGMComponent.TestWeaponTrace
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535f790
	// Params: [ Num(1) Size(0x4) ]
	void TestWeaponTrace(int32_t TraceTimes);

	// Object: Function GM.DFMPlayerGMComponent.TestServerSwitchAssassinateState
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535f6dc
	// Params: [ Num(1) Size(0x1) ]
	void TestServerSwitchAssassinateState(uint8_t Enter);

	// Object: Function GM.DFMPlayerGMComponent.TestServerFinishAssassinate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535f6c0
	// Params: [ Num(0) Size(0x0) ]
	void TestServerFinishAssassinate();

	// Object: Function GM.DFMPlayerGMComponent.TestServerEndMatch
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535f6a4
	// Params: [ Num(0) Size(0x0) ]
	void TestServerEndMatch();

	// Object: Function GM.DFMPlayerGMComponent.TestGMViewClicked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1535f690
	// Params: [ Num(0) Size(0x0) ]
	void TestGMViewClicked();

	// Object: Function GM.DFMPlayerGMComponent.SwitchAIPrevPressed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535f674
	// Params: [ Num(0) Size(0x0) ]
	void SwitchAIPrevPressed();

	// Object: Function GM.DFMPlayerGMComponent.SwitchAINextPressed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535f658
	// Params: [ Num(0) Size(0x0) ]
	void SwitchAINextPressed();

	// Object: Function GM.DFMPlayerGMComponent.StopCutscene
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535f560
	// Params: [ Num(1) Size(0x10) ]
	void StopCutscene(struct FString Tag);

	// Object: Function GM.DFMPlayerGMComponent.StartSchemeAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f4bc
	// Params: [ Num(1) Size(0x4) ]
	void StartSchemeAI(int32_t PlayerSchemeId);

	// Object: Function GM.DFMPlayerGMComponent.StarSucker
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535f4a0
	// Params: [ Num(0) Size(0x0) ]
	void StarSucker();

	// Object: Function GM.DFMPlayerGMComponent.SprintSwimStaminaDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f48c
	// Params: [ Num(0) Size(0x0) ]
	void SprintSwimStaminaDebug();

	// Object: Function GM.DFMPlayerGMComponent.SpeedUpOccupy
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535f3ac
	// Params: [ Num(2) Size(0x8) ]
	void SpeedUpOccupy(int32_t multipy, float MoveSpeed);

	// Object: Function GM.DFMPlayerGMComponent.SpawnTestAI
	// Flags: [Final|Exec|Native|Public|HasDefaults]
	// Offset: 0x1535f290
	// Params: [ Num(3) Size(0x14) ]
	void SpawnTestAI(int32_t Index, int32_t Num, struct FVector postion);

	// Object: Function GM.DFMPlayerGMComponent.SpawnPvpAiAround
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f170
	// Params: [ Num(3) Size(0x18) ]
	void SpawnPvpAiAround(struct FString StrParams, int32_t Num, int32_t ArmedForce);

	// Object: Function GM.DFMPlayerGMComponent.SpawnPortableAmmoBox
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535f0cc
	// Params: [ Num(1) Size(0x8) ]
	void SpawnPortableAmmoBox(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.SpawnGMStatueAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535f0b8
	// Params: [ Num(0) Size(0x0) ]
	void SpawnGMStatueAI();

	// Object: Function GM.DFMPlayerGMComponent.SpawnGMAI2
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535ef84
	// Params: [ Num(2) Size(0x14) ]
	void SpawnGMAI2(struct FString npcName, int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.SpawnGMAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535ee50
	// Params: [ Num(2) Size(0x14) ]
	void SpawnGMAI(struct FString npcName, int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.SpawnAndBreakItem
	// Flags: [Final|Exec|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x1535ed20
	// Params: [ Num(3) Size(0x20) ]
	void SpawnAndBreakItem(struct FString ItemPath, const struct FVector& Location, float Lifetime);

	// Object: Function GM.DFMPlayerGMComponent.SOLRandomContract
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535ed0c
	// Params: [ Num(0) Size(0x0) ]
	void SOLRandomContract();

	// Object: Function GM.DFMPlayerGMComponent.SOLRandomContainer
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535ecf8
	// Params: [ Num(0) Size(0x0) ]
	void SOLRandomContainer();

	// Object: Function GM.DFMPlayerGMComponent.SkillInputActionTest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535ec54
	// Params: [ Num(1) Size(0x4) ]
	void SkillInputActionTest(int32_t Param);

	// Object: Function GM.DFMPlayerGMComponent.SkillIgnoreCD
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535ec40
	// Params: [ Num(0) Size(0x0) ]
	void SkillIgnoreCD();

	// Object: Function GM.DFMPlayerGMComponent.SkillCheckMemoryLeakage
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535ec2c
	// Params: [ Num(0) Size(0x0) ]
	void SkillCheckMemoryLeakage();

	// Object: Function GM.DFMPlayerGMComponent.ShowRandomRoomDebugInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535eb80
	// Params: [ Num(1) Size(0x1) ]
	void ShowRandomRoomDebugInfo(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.ShowGroupLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535eb64
	// Params: [ Num(0) Size(0x0) ]
	void ShowGroupLocation();

	// Object: Function GM.DFMPlayerGMComponent.ShowGMPanel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535eac0
	// Params: [ Num(1) Size(0x8) ]
	void ShowGMPanel(struct FName PaenlName);

	// Object: Function GM.DFMPlayerGMComponent.Show3CDebugInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535ea1c
	// Params: [ Num(1) Size(0x4) ]
	void Show3CDebugInfo(float NearlyDistance);

	// Object: Function GM.DFMPlayerGMComponent.SetPerkCondForceSucceed
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535ea08
	// Params: [ Num(0) Size(0x0) ]
	void SetPerkCondForceSucceed();

	// Object: Function GM.DFMPlayerGMComponent.SetOldMonitorAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e95c
	// Params: [ Num(1) Size(0x8) ]
	void SetOldMonitorAI(struct ADFMCharacter* AI);

	// Object: Function GM.DFMPlayerGMComponent.SetMockPathLen
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e874
	// Params: [ Num(2) Size(0xC) ]
	void SetMockPathLen(struct AMockPathHelper* MPH, float Degree);

	// Object: Function GM.DFMPlayerGMComponent.SetMockPathFocusPlayer
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e784
	// Params: [ Num(2) Size(0x9) ]
	void SetMockPathFocusPlayer(struct AMockPathHelper* MPH, uint8_t bFocus);

	// Object: Function GM.DFMPlayerGMComponent.SetMockPathFocus
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e664
	// Params: [ Num(3) Size(0x10) ]
	void SetMockPathFocus(struct AMockPathHelper* MPH, float Yaw, float Pitch);

	// Object: Function GM.DFMPlayerGMComponent.SetMockPathDegree
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e57c
	// Params: [ Num(2) Size(0xC) ]
	void SetMockPathDegree(struct AMockPathHelper* MPH, float Degree);

	// Object: Function GM.DFMPlayerGMComponent.SetFPPLowerMeshYOffset
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535e4d8
	// Params: [ Num(1) Size(0x4) ]
	void SetFPPLowerMeshYOffset(float YOffset);

	// Object: Function GM.DFMPlayerGMComponent.SetFPPLowerMeshHidden
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535e42c
	// Params: [ Num(1) Size(0x1) ]
	void SetFPPLowerMeshHidden(uint8_t bHidden);

	// Object: Function GM.DFMPlayerGMComponent.SetEndGameTimeout
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535e388
	// Params: [ Num(1) Size(0x4) ]
	void SetEndGameTimeout(float Timeout);

	// Object: Function GM.DFMPlayerGMComponent.SetDramaNpcName
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e2a4
	// Params: [ Num(2) Size(0x10) ]
	void SetDramaNpcName(struct ADramaArea* drama, struct FName npcName);

	// Object: Function GM.DFMPlayerGMComponent.SetDramaBehaviorTree
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable]
	// Offset: 0x1535e150
	// Params: [ Num(2) Size(0x20) ]
	void SetDramaBehaviorTree(struct ADramaArea* drama, struct FSoftObjectPath BehaviorTreeSoft);

	// Object: Function GM.DFMPlayerGMComponent.SetDebugFullThreatInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535e09c
	// Params: [ Num(1) Size(0x1) ]
	void SetDebugFullThreatInfo(uint8_t bFullThreat);

	// Object: Function GM.DFMPlayerGMComponent.SetCharacterWaitingStartSOLState
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535dff8
	// Params: [ Num(1) Size(0x4) ]
	void SetCharacterWaitingStartSOLState(int32_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.SetArmedForce
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535dee0
	// Params: [ Num(3) Size(0xC) ]
	void SetArmedForce(int32_t ArmID, int32_t HeroId, int32_t BagId);

	// Object: Function GM.DFMPlayerGMComponent.SetAINonPerceptualEx
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535de2c
	// Params: [ Num(1) Size(0x1) ]
	void SetAINonPerceptualEx(uint8_t bNonPerceptual);

	// Object: Function GM.DFMPlayerGMComponent.SetAINonPerceptual
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535dd80
	// Params: [ Num(1) Size(0x1) ]
	void SetAINonPerceptual(uint8_t bNonPerceptual);

	// Object: Function GM.DFMPlayerGMComponent.SetActorWithTagToLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults|BlueprintCallable]
	// Offset: 0x1535dc98
	// Params: [ Num(2) Size(0x14) ]
	void SetActorWithTagToLocation(struct FName Tag, struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.SetAbilityByType
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x1535dbec
	// Params: [ Num(1) Size(0x1) ]
	void SetAbilityByType(ESkillLogicType ESkillLogicType);

	// Object: Function GM.DFMPlayerGMComponent.ServerWeaponUpdatePartDynamicEffective
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535dac4
	// Params: [ Num(3) Size(0x11) ]
	void ServerWeaponUpdatePartDynamicEffective(struct AWeaponBase* Weapon, uint64_t PartFunctionId, uint8_t bDynamicEffective);

	// Object: Function GM.DFMPlayerGMComponent.ServerVCCheck
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d968
	// Params: [ Num(4) Size(0x10) ]
	void ServerVCCheck(float InRangeHalfX, float InRangeHalfY, float InCellSize, float InDeltaAngle);

	// Object: Function GM.DFMPlayerGMComponent.ServerUseStartSpotTemplate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d8bc
	// Params: [ Num(1) Size(0x8) ]
	void ServerUseStartSpotTemplate(struct FName RowId);

	// Object: Function GM.DFMPlayerGMComponent.ServerUseOptOnDoorFrontCheck
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d808
	// Params: [ Num(1) Size(0x1) ]
	void ServerUseOptOnDoorFrontCheck(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerUseGlassOpt
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d754
	// Params: [ Num(1) Size(0x1) ]
	void ServerUseGlassOpt(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerUseForceStartSpot
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d6a0
	// Params: [ Num(1) Size(0x10) ]
	void ServerUseForceStartSpot(struct FString StartSpotName);

	// Object: Function GM.DFMPlayerGMComponent.ServerUseCustomMovementSpeed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d5b0
	// Params: [ Num(2) Size(0x8) ]
	void ServerUseCustomMovementSpeed(uint8_t bUseCustomSpeed, float CustomSpeed);

	// Object: Function GM.DFMPlayerGMComponent.ServerUseConstMovementSpeed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d4fc
	// Params: [ Num(1) Size(0x1) ]
	void ServerUseConstMovementSpeed(uint8_t bUseConstSpeed);

	// Object: Function GM.DFMPlayerGMComponent.ServerUnEquipPerk
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d4e0
	// Params: [ Num(0) Size(0x0) ]
	void ServerUnEquipPerk();

	// Object: Function GM.DFMPlayerGMComponent.ServerTriggerBossDied
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d4c4
	// Params: [ Num(0) Size(0x0) ]
	void ServerTriggerBossDied();

	// Object: Function GM.DFMPlayerGMComponent.ServerToggleLocationDebug
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d418
	// Params: [ Num(1) Size(0x4) ]
	void ServerToggleLocationDebug(int32_t DebugMode);

	// Object: Function GM.DFMPlayerGMComponent.ServerThreeInspect
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d36c
	// Params: [ Num(1) Size(0x8) ]
	void ServerThreeInspect(int64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerThreeAnimJumpToEndByItemGid
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d2c0
	// Params: [ Num(1) Size(0x8) ]
	void ServerThreeAnimJumpToEndByItemGid(uint64_t InItemGid);

	// Object: Function GM.DFMPlayerGMComponent.ServerTestRadialDamage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535d1d8
	// Params: [ Num(2) Size(0x14) ]
	void ServerTestRadialDamage(int64_t AttackId, struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.ServerTestNightVisionEquipment
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d1bc
	// Params: [ Num(0) Size(0x0) ]
	void ServerTestNightVisionEquipment();

	// Object: Function GM.DFMPlayerGMComponent.ServerTestAreaFreeze
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d0d0
	// Params: [ Num(2) Size(0x5) ]
	void ServerTestAreaFreeze(int32_t AreaID, uint8_t bEnter);

	// Object: Function GM.DFMPlayerGMComponent.ServerTeleportToLegalTransform
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535d0bc
	// Params: [ Num(0) Size(0x0) ]
	void ServerTeleportToLegalTransform();

	// Object: Function GM.DFMPlayerGMComponent.ServerSwitchToEmptyHand
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535d010
	// Params: [ Num(1) Size(0x4) ]
	void ServerSwitchToEmptyHand(float DelayTime);

	// Object: Function GM.DFMPlayerGMComponent.ServerSwitchCharacterAvatarID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535cf2c
	// Params: [ Num(2) Size(0x10) ]
	void ServerSwitchCharacterAvatarID(uint64_t PlayerId, struct FName HeroId);

	// Object: Function GM.DFMPlayerGMComponent.ServerStopLooting
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ce78
	// Params: [ Num(1) Size(0x1) ]
	void ServerStopLooting(uint8_t bSwitchFromLoot2BagView);

	// Object: Function GM.DFMPlayerGMComponent.ServerSprintSwimStaminaDebug
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ce5c
	// Params: [ Num(0) Size(0x0) ]
	void ServerSprintSwimStaminaDebug();

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnTestAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535cd38
	// Params: [ Num(3) Size(0x14) ]
	void ServerSpawnTestAI(int32_t Index, int32_t Num, struct FVector postion);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnPvpAiAround
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535cc10
	// Params: [ Num(3) Size(0x18) ]
	void ServerSpawnPvpAiAround(struct FString StrParams, int32_t Num, int32_t ArmedForce);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnPortableAmmoBox
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535cb64
	// Params: [ Num(1) Size(0x8) ]
	void ServerSpawnPortableAmmoBox(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnPickupWhenReleaseDoor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535cab0
	// Params: [ Num(1) Size(0x1) ]
	void ServerSpawnPickupWhenReleaseDoor(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnNormalFootball
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ca94
	// Params: [ Num(0) Size(0x0) ]
	void ServerSpawnNormalFootball();

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnMovingFish
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ca78
	// Params: [ Num(0) Size(0x0) ]
	void ServerSpawnMovingFish();

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnJetForTest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c990
	// Params: [ Num(2) Size(0x8) ]
	void ServerSpawnJetForTest(int32_t Num, float Height);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnJailBreakDeadBody
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c8e4
	// Params: [ Num(1) Size(0x4) ]
	void ServerSpawnJailBreakDeadBody(int32_t TeamStartGroupId);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnItemWithSourcePlayer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c800
	// Params: [ Num(2) Size(0x10) ]
	void ServerSpawnItemWithSourcePlayer(uint64_t ItemID, uint64_t PlayerId);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnItemPickup
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c754
	// Params: [ Num(1) Size(0x8) ]
	void ServerSpawnItemPickup(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnItemOwnedToPlayer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c670
	// Params: [ Num(2) Size(0x10) ]
	void ServerSpawnItemOwnedToPlayer(uint64_t ItemID, uint64_t PlayerId);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnFootballStaticGate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c654
	// Params: [ Num(0) Size(0x0) ]
	void ServerSpawnFootballStaticGate();

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnFootballAIGate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c638
	// Params: [ Num(0) Size(0x0) ]
	void ServerSpawnFootballAIGate();

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnFireArrow
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535c514
	// Params: [ Num(3) Size(0x20) ]
	void ServerSpawnFireArrow(uint64_t BulletId, struct FVector StartLoc, struct FRotator StartRot);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnArchiveItemNew
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c2b0
	// Params: [ Num(8) Size(0x48) ]
	void ServerSpawnArchiveItemNew(int32_t Level, uint8_t KilledByBoss, struct FString Killer, struct FString BeKiller, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnArchiveItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535c114
	// Params: [ Num(5) Size(0x30) ]
	void ServerSpawnArchiveItem(struct FString Killer, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnAndBreakItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535bfec
	// Params: [ Num(3) Size(0x20) ]
	void ServerSpawnAndBreakItem(struct FString ItemPath, struct FVector Location, float Lifetime);

	// Object: Function GM.DFMPlayerGMComponent.ServerSpawnAIForView
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bf04
	// Params: [ Num(2) Size(0xC) ]
	void ServerSpawnAIForView(struct FName npcName, int32_t NpcDiffculty);

	// Object: Function GM.DFMPlayerGMComponent.ServerSOLRandomContract
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bee8
	// Params: [ Num(0) Size(0x0) ]
	void ServerSOLRandomContract();

	// Object: Function GM.DFMPlayerGMComponent.ServerSOLRandomContainer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535becc
	// Params: [ Num(0) Size(0x0) ]
	void ServerSOLRandomContainer();

	// Object: Function GM.DFMPlayerGMComponent.ServerSkillIgnoreCD
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535beb0
	// Params: [ Num(0) Size(0x0) ]
	void ServerSkillIgnoreCD();

	// Object: Function GM.DFMPlayerGMComponent.ServerShowWaterSparseOctree
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bdc8
	// Params: [ Num(2) Size(0x8) ]
	void ServerShowWaterSparseOctree(int32_t LOD, float Range);

	// Object: Function GM.DFMPlayerGMComponent.ServerShowSparseOctree
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bce0
	// Params: [ Num(2) Size(0x8) ]
	void ServerShowSparseOctree(int32_t LOD, float Range);

	// Object: Function GM.DFMPlayerGMComponent.ServerShowRandomRoomDebugInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bc2c
	// Params: [ Num(1) Size(0x1) ]
	void ServerShowRandomRoomDebugInfo(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetVehicleHPLock
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bb78
	// Params: [ Num(1) Size(0x1) ]
	void ServerSetVehicleHPLock(uint8_t bLock);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetTestScanDelayDuration
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535bacc
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetTestScanDelayDuration(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetTestInRelink
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ba18
	// Params: [ Num(1) Size(0x1) ]
	void ServerSetTestInRelink(uint8_t InRelink);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetTestDelayReplicate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b928
	// Params: [ Num(2) Size(0x8) ]
	void ServerSetTestDelayReplicate(uint8_t bTest, float DelayDuration);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetScanableEffectDuration
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b87c
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetScanableEffectDuration(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetRelinkPerformDataByConfigId
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b790
	// Params: [ Num(2) Size(0x5) ]
	void ServerSetRelinkPerformDataByConfigId(int32_t ConfigId, uint8_t bSpecial);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetPlayerContributorID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b6e4
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetPlayerContributorID(int32_t ContributorID);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetPerkCondForceSucceed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b6c8
	// Params: [ Num(0) Size(0x0) ]
	void ServerSetPerkCondForceSucceed();

	// Object: Function GM.DFMPlayerGMComponent.ServerSetMaxReceiveValue
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b5d8
	// Params: [ Num(2) Size(0x10) ]
	void ServerSetMaxReceiveValue(uint8_t bDaily, int64_t Value);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetMapId
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b52c
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetMapId(int32_t MapID);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetItemCarryOutRemainNum
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b448
	// Params: [ Num(2) Size(0x10) ]
	void ServerSetItemCarryOutRemainNum(uint64_t ItemID, uint64_t RemainNum);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetInterlayerEffectDuration
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b39c
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetInterlayerEffectDuration(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetFallout
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b2f0
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetFallout(float Value);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetEndGameTimeout
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b244
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetEndGameTimeout(float Timeout);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetCharacterWaitingStartSOLState
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b198
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetCharacterWaitingStartSOLState(int32_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetBattleClass
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535b0a8
	// Params: [ Num(2) Size(0x18) ]
	void ServerSetBattleClass(uint32_t BattleClassId, struct TArray<uint32_t> AbilityIdArr);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetAmmoConsumeType
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535afc0
	// Params: [ Num(2) Size(0xC) ]
	void ServerSetAmmoConsumeType(struct AWeaponBase* Weapon, int32_t Type);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetAllPickupScanable
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535af0c
	// Params: [ Num(1) Size(0x1) ]
	void ServerSetAllPickupScanable(uint8_t Scanable);

	// Object: Function GM.DFMPlayerGMComponent.ServerSetAllOpenBoxScanable
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ae60
	// Params: [ Num(1) Size(0x4) ]
	void ServerSetAllOpenBoxScanable(int32_t InDoRandom);

	// Object: Function GM.DFMPlayerGMComponent.ServerSendHongBao
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535ad7c
	// Params: [ Num(2) Size(0x10) ]
	void ServerSendHongBao(uint64_t ReceiverPlayerId, uint64_t ItemGid);

	// Object: Function GM.DFMPlayerGMComponent.ServerScientistCommand
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535acd0
	// Params: [ Num(1) Size(0x4) ]
	void ServerScientistCommand(int32_t Command);

	// Object: Function GM.DFMPlayerGMComponent.ServerRunLuaCodeOnDS
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535abe0
	// Params: [ Num(2) Size(0x18) ]
	void ServerRunLuaCodeOnDS(uint64_t Index, struct FString LuaCode);

	// Object: Function GM.DFMPlayerGMComponent.ServerRequestSubtitleSequence
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535aaf8
	// Params: [ Num(2) Size(0x9) ]
	void ServerRequestSubtitleSequence(struct FName SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType);

	// Object: Function GM.DFMPlayerGMComponent.ServerReportMapEconomy
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535aadc
	// Params: [ Num(0) Size(0x0) ]
	void ServerReportMapEconomy();

	// Object: Function GM.DFMPlayerGMComponent.ServerRemoveBagAmmo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535aac0
	// Params: [ Num(0) Size(0x0) ]
	void ServerRemoveBagAmmo();

	// Object: Function GM.DFMPlayerGMComponent.ServerRedBagAnimJumpToEndByItemGid
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535aa14
	// Params: [ Num(1) Size(0x8) ]
	void ServerRedBagAnimJumpToEndByItemGid(uint64_t InItemGid);

	// Object: Function GM.DFMPlayerGMComponent.ServerRangeScan
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535a8c0
	// Params: [ Num(4) Size(0x20) ]
	void ServerRangeScan(struct FVector CamLoc, struct FVector CamDir, float Dis, float Angle);

	// Object: Function GM.DFMPlayerGMComponent.ServerQuestJumpObjective
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a7dc
	// Params: [ Num(2) Size(0x8) ]
	void ServerQuestJumpObjective(int32_t objectiveId, int32_t InstIndex);

	// Object: Function GM.DFMPlayerGMComponent.ServerQueryPath
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535a734
	// Params: [ Num(1) Size(0xC) ]
	void ServerQueryPath(struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.ServerPrintWeaponInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a718
	// Params: [ Num(0) Size(0x0) ]
	void ServerPrintWeaponInfo();

	// Object: Function GM.DFMPlayerGMComponent.ServerPlayerBan
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a6fc
	// Params: [ Num(0) Size(0x0) ]
	void ServerPlayerBan();

	// Object: Function GM.DFMPlayerGMComponent.ServerOxygenDebug
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a6e0
	// Params: [ Num(0) Size(0x0) ]
	void ServerOxygenDebug();

	// Object: Function GM.DFMPlayerGMComponent.ServerOpenAssaKillShowEffectInEnd
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a62c
	// Params: [ Num(1) Size(0x1) ]
	void ServerOpenAssaKillShowEffectInEnd(uint8_t InEnd);

	// Object: Function GM.DFMPlayerGMComponent.ServerNotifyAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a53c
	// Params: [ Num(2) Size(0x18) ]
	void ServerNotifyAI(uint64_t PlayerId, struct FString NotifyMessage);

	// Object: Function GM.DFMPlayerGMComponent.ServerNewAddBuff
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a490
	// Params: [ Num(1) Size(0x8) ]
	void ServerNewAddBuff(uint64_t BuffId);

	// Object: Function GM.DFMPlayerGMComponent.ServerMoveToLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535a3e8
	// Params: [ Num(1) Size(0xC) ]
	void ServerMoveToLocation(struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.ServerMoveToActor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a33c
	// Params: [ Num(1) Size(0x8) ]
	void ServerMoveToActor(struct AActor* Actor);

	// Object: Function GM.DFMPlayerGMComponent.ServerModifyAmmo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a254
	// Params: [ Num(2) Size(0xC) ]
	void ServerModifyAmmo(struct AWeaponBase* Weapon, int32_t Val);

	// Object: Function GM.DFMPlayerGMComponent.ServerMapSelectPoint
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a238
	// Params: [ Num(0) Size(0x0) ]
	void ServerMapSelectPoint();

	// Object: Function GM.DFMPlayerGMComponent.ServerLoadQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a18c
	// Params: [ Num(1) Size(0x4) ]
	void ServerLoadQuest(int32_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.ServerLandingTest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535a074
	// Params: [ Num(3) Size(0x18) ]
	void ServerLandingTest(struct FVector2D LeftUp, struct FVector2D RightUp, struct FVector2D LeftDown);

	// Object: Function GM.DFMPlayerGMComponent.ServerKillAllJetForTest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a058
	// Params: [ Num(0) Size(0x0) ]
	void ServerKillAllJetForTest();

	// Object: Function GM.DFMPlayerGMComponent.ServerKickTeammate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535a03c
	// Params: [ Num(0) Size(0x0) ]
	void ServerKickTeammate();

	// Object: Function GM.DFMPlayerGMComponent.ServerHoldJet
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359f88
	// Params: [ Num(1) Size(0x1) ]
	void ServerHoldJet(uint8_t bHold);

	// Object: Function GM.DFMPlayerGMComponent.ServerHasEnoughSpaceToAddAmmo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359edc
	// Params: [ Num(1) Size(0x8) ]
	void ServerHasEnoughSpaceToAddAmmo(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerGoTrackingPickUp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359ec0
	// Params: [ Num(0) Size(0x0) ]
	void ServerGoTrackingPickUp();

	// Object: Function GM.DFMPlayerGMComponent.ServerGotoWithNavAdjust
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15359dd8
	// Params: [ Num(2) Size(0x18) ]
	void ServerGotoWithNavAdjust(struct FVector Location, struct FRotator Dir);

	// Object: Function GM.DFMPlayerGMComponent.ServerGoto2D
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15359d30
	// Params: [ Num(1) Size(0x8) ]
	void ServerGoto2D(struct FVector2D Location);

	// Object: Function GM.DFMPlayerGMComponent.ServerGoto
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15359c48
	// Params: [ Num(2) Size(0x18) ]
	void ServerGoto(struct FVector Location, struct FRotator Dir);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMWeaponTestRemoveAllSpawnCharacter
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359c2c
	// Params: [ Num(0) Size(0x0) ]
	void ServerGMWeaponTestRemoveAllSpawnCharacter();

	// Object: Function GM.DFMPlayerGMComponent.ServerGMWeaponTestCharacterStopAutoFire
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359c10
	// Params: [ Num(0) Size(0x0) ]
	void ServerGMWeaponTestCharacterStopAutoFire();

	// Object: Function GM.DFMPlayerGMComponent.ServerGMWeaponTestCharacterAutoFire
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359b64
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMWeaponTestCharacterAutoFire(float FireInterval);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMUnEquipLeftWeapon
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359ab8
	// Params: [ Num(1) Size(0x8) ]
	void ServerGMUnEquipLeftWeapon(uint64_t WeaponID);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMTriggerPreMiniGameSucceed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359a0c
	// Params: [ Num(1) Size(0x8) ]
	void ServerGMTriggerPreMiniGameSucceed(struct FName MiniGameTag);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMToggleExit
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153598e0
	// Params: [ Num(3) Size(0xC) ]
	void ServerGMToggleExit(int32_t ID, uint8_t Enable, float CountDown);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMTimeScale
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359834
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMTimeScale(float Scale);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMTestSpawnCharacterInLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153596d4
	// Params: [ Num(3) Size(0x70) ]
	void ServerGMTestSpawnCharacterInLocation(struct FTestCharacterParam TestCharacterParam, struct FTestWeaponParam Weapon01, struct FTestWeaponParam Weapon02);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMTestPassiveMove
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359628
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMTestPassiveMove(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSpawnLimit
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535957c
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMSpawnLimit(int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSpawnAllSniperDrama
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359560
	// Params: [ Num(0) Size(0x0) ]
	void ServerGMSpawnAllSniperDrama();

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSkinPlayer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359440
	// Params: [ Num(3) Size(0x18) ]
	void ServerGMSkinPlayer(struct AGPPlayerState* PS, uint64_t WeaponID, uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSkinPendant
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535935c
	// Params: [ Num(2) Size(0x10) ]
	void ServerGMSkinPendant(struct ADFMCharacter* GPChar, uint64_t PendantItemId);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSkinGun
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359278
	// Params: [ Num(2) Size(0x10) ]
	void ServerGMSkinGun(struct ADFMCharacter* GPChar, uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSkinAppGun
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15359158
	// Params: [ Num(3) Size(0x18) ]
	void ServerGMSkinAppGun(struct ADFMCharacter* GPChar, uint64_t SkinId, uint64_t MysticalId);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSimulateDSFrameTime
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358fc4
	// Params: [ Num(5) Size(0x14) ]
	void ServerGMSimulateDSFrameTime(float AvgMax, float AvgMin, float StunRate, float StunMax, float StunMin);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMShowNavExtInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358f18
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMShowNavExtInfo(float RefreshTime);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSetDropLogicCounter
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358e34
	// Params: [ Num(2) Size(0x8) ]
	void ServerGMSetDropLogicCounter(uint32_t Key, uint32_t InCounter);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSetDebugTransform
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358d88
	// Params: [ Num(1) Size(0x8) ]
	void ServerGMSetDebugTransform(uint64_t PlayerUin);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSetDangerLevel
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358cdc
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMSetDangerLevel(int32_t InDangerLevel);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMSetCurrent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358c30
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMSetCurrent(uint32_t InCurrent);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMResetTriggerExitByIndex
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358b84
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMResetTriggerExitByIndex(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMResetAllAbility
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358b68
	// Params: [ Num(0) Size(0x0) ]
	void ServerGMResetAllAbility();

	// Object: Function GM.DFMPlayerGMComponent.ServerGMRemovePerkSPEffect
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358abc
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMRemovePerkSPEffect(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMRemovePerk
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358a10
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMRemovePerk(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMRemoveDropLogicBuff
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358964
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMRemoveDropLogicBuff(uint32_t InKey);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMLineTraceWater
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x1535887c
	// Params: [ Num(2) Size(0x18) ]
	void ServerGMLineTraceWater(struct FVector Start, struct FVector End);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMJPSTrace
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15358794
	// Params: [ Num(2) Size(0x18) ]
	void ServerGMJPSTrace(struct FVector Start, struct FVector End);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMGodDamage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153586e0
	// Params: [ Num(1) Size(0x1) ]
	void ServerGMGodDamage(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMGiveWepaonByDesc
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358534
	// Params: [ Num(1) Size(0x150) ]
	void ServerGMGiveWepaonByDesc(struct FGPWeaponDescInfo WeaponDesc);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMGiveWeapon
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358444
	// Params: [ Num(2) Size(0x18) ]
	void ServerGMGiveWeapon(uint64_t PresetId, struct TArray<uint64_t> Items);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMGiveCurrency
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535835c
	// Params: [ Num(2) Size(0x10) ]
	void ServerGMGiveCurrency(float InValue, int64_t FakeQuestId);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMForceTeamDamage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153582a8
	// Params: [ Num(1) Size(0x1) ]
	void ServerGMForceTeamDamage(uint8_t bForce);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMEquipLeftWeapon
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153581fc
	// Params: [ Num(1) Size(0x8) ]
	void ServerGMEquipLeftWeapon(uint64_t WeaponID);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMEndAssaShark
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153581e0
	// Params: [ Num(0) Size(0x0) ]
	void ServerGMEndAssaShark();

	// Object: Function GM.DFMPlayerGMComponent.ServerGMEnableFriendDamage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535812c
	// Params: [ Num(1) Size(0x1) ]
	void ServerGMEnableFriendDamage(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMConsumeCurrency
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358080
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMConsumeCurrency(float ConsumeValue);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMClearAllAbility
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15358064
	// Params: [ Num(0) Size(0x0) ]
	void ServerGMClearAllAbility();

	// Object: Function GM.DFMPlayerGMComponent.ServerGMCD
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357f40
	// Params: [ Num(3) Size(0xC) ]
	void ServerGMCD(int32_t operate, int32_t Slot, float Time);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMBraveGameEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357e50
	// Params: [ Num(2) Size(0x14) ]
	void ServerGMBraveGameEvent(struct FString EventName, int32_t Param);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMBraveGameConveyFixRandomPC
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357d30
	// Params: [ Num(3) Size(0xC) ]
	void ServerGMBraveGameConveyFixRandomPC(int32_t Index1, int32_t Index2, int32_t Index3);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAttemptUpdateWeaponItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357b40
	// Params: [ Num(2) Size(0x158) ]
	void ServerGMAttemptUpdateWeaponItem(uint64_t GunGID, struct FGPWeaponDescInfo NewDesc);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAssaID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357a94
	// Params: [ Num(1) Size(0x8) ]
	void ServerGMAssaID(uint64_t AssaID);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMArenaTriggerEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153579e0
	// Params: [ Num(1) Size(0x10) ]
	void ServerGMArenaTriggerEvent(struct FString Event);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAddTestDeadBox
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153578c0
	// Params: [ Num(3) Size(0xC) ]
	void ServerGMAddTestDeadBox(float X, float Y, float Z);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAddPerkSPEffect
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357814
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMAddPerkSPEffect(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAddPerk
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357768
	// Params: [ Num(1) Size(0x4) ]
	void ServerGMAddPerk(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAddHolidayID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535767c
	// Params: [ Num(2) Size(0x5) ]
	void ServerGMAddHolidayID(uint32_t Key, uint8_t bAdd);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAddDropLogicBuff
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15357474
	// Params: [ Num(7) Size(0x1C) ]
	void ServerGMAddDropLogicBuff(uint32_t Key, uint32_t InDropLogicID, uint32_t InCounter, int32_t TodayActiveTimes, int32_t CareerTriggerCnt, int32_t TodayActiveUpBound, int32_t CareerTriggerUpBound);

	// Object: Function GM.DFMPlayerGMComponent.ServerGMAddArenaScore
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535738c
	// Params: [ Num(2) Size(0x5) ]
	void ServerGMAddArenaScore(int32_t InAddScore, uint8_t InAddIncreaseScoreCount);

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveWeaponFromStr
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153572d8
	// Params: [ Num(1) Size(0x10) ]
	void ServerGiveWeaponFromStr(struct FString str);

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveResetSlot
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x153572bc
	// Params: [ Num(0) Size(0x0) ]
	void ServerGiveResetSlot();

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveItemImpl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1535712c
	// Params: [ Num(5) Size(0x18) ]
	void ServerGiveItemImpl(int64_t ItemID, int32_t Num, int32_t AttachPos, int32_t BindType, float Durability);

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356f94
	// Params: [ Num(5) Size(0x18) ]
	void ServerGiveItem(uint64_t ItemID, int32_t Num, EAttachPosition AttachPos, int32_t BindType, float Durability);

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveInfinityCarriedAmmo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356ee8
	// Params: [ Num(1) Size(0x8) ]
	void ServerGiveInfinityCarriedAmmo(struct AWeaponBase* Weapon);

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveAbilityByType
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356e3c
	// Params: [ Num(1) Size(0x1) ]
	void ServerGiveAbilityByType(ESkillLogicType ESkillLogicType);

	// Object: Function GM.DFMPlayerGMComponent.ServerGiveAbilityByExpertID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356d90
	// Params: [ Num(1) Size(0x8) ]
	void ServerGiveAbilityByExpertID(int64_t ExpertId);

	// Object: Function GM.DFMPlayerGMComponent.ServerGetTrackingItemPosition
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356d74
	// Params: [ Num(0) Size(0x0) ]
	void ServerGetTrackingItemPosition();

	// Object: Function GM.DFMPlayerGMComponent.ServerGetRedBagOnlyFromTeammate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356cc0
	// Params: [ Num(1) Size(0x1) ]
	void ServerGetRedBagOnlyFromTeammate(uint8_t bOnly);

	// Object: Function GM.DFMPlayerGMComponent.ServerGetCurrentFirstWeaponItemID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356ca4
	// Params: [ Num(0) Size(0x0) ]
	void ServerGetCurrentFirstWeaponItemID();

	// Object: Function GM.DFMPlayerGMComponent.ServerForceFinishMission
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356c88
	// Params: [ Num(0) Size(0x0) ]
	void ServerForceFinishMission();

	// Object: Function GM.DFMPlayerGMComponent.ServerForceEnableImpendingDeath
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356bd4
	// Params: [ Num(1) Size(0x1) ]
	void ServerForceEnableImpendingDeath(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.ServerForceCheckGuideItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356b20
	// Params: [ Num(1) Size(0x1) ]
	void ServerForceCheckGuideItem(uint8_t bForceCheckGuideItem);

	// Object: Function GM.DFMPlayerGMComponent.ServerFootballSignAnimJumpToEndByItemGid
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356a74
	// Params: [ Num(1) Size(0x8) ]
	void ServerFootballSignAnimJumpToEndByItemGid(uint64_t InItemGid);

	// Object: Function GM.DFMPlayerGMComponent.ServerFootballSign
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153569c8
	// Params: [ Num(1) Size(0x8) ]
	void ServerFootballSign(int64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerFootballGate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153569ac
	// Params: [ Num(0) Size(0x0) ]
	void ServerFootballGate();

	// Object: Function GM.DFMPlayerGMComponent.ServerFinishCurrentStage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356990
	// Params: [ Num(0) Size(0x0) ]
	void ServerFinishCurrentStage();

	// Object: Function GM.DFMPlayerGMComponent.ServerExecuteConsoleCommand
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153568dc
	// Params: [ Num(1) Size(0x10) ]
	void ServerExecuteConsoleCommand(struct FString Command);

	// Object: Function GM.DFMPlayerGMComponent.ServerEquipPerk
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356830
	// Params: [ Num(1) Size(0x8) ]
	void ServerEquipPerk(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerEnableWaterRouteVis
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535677c
	// Params: [ Num(1) Size(0x1) ]
	void ServerEnableWaterRouteVis(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.ServerEnableTearOffAICharacterAfterDeath
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153566c8
	// Params: [ Num(1) Size(0x1) ]
	void ServerEnableTearOffAICharacterAfterDeath(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.ServerEnablePvpAIDebug
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x1535661c
	// Params: [ Num(1) Size(0x4) ]
	void ServerEnablePvpAIDebug(int32_t Param);

	// Object: Function GM.DFMPlayerGMComponent.ServerEnableAISpeakDebug
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356568
	// Params: [ Num(1) Size(0x1) ]
	void ServerEnableAISpeakDebug(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseForwardAndCheckHitFirstly
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153564b4
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoUseForwardAndCheckHitFirstly(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseFakeTickInterval
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153563c4
	// Params: [ Num(2) Size(0x8) ]
	void ServerDoUseFakeTickInterval(uint8_t InbUse, float InInterval);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseDSCheckNearly
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15356310
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoUseDSCheckNearly(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseCheckUnlock
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535625c
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoUseCheckUnlock(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseCheckHack
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153561a8
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoUseCheckHack(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseCheckCollSweep
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535607c
	// Params: [ Num(3) Size(0xC) ]
	void ServerDoUseCheckCollSweep(int32_t Index, uint8_t InbUse, float InRadius);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoUseCheckCapture
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355fc8
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoUseCheckCapture(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoSetNearlyThreshold
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355f1c
	// Params: [ Num(1) Size(0x4) ]
	void ServerDoSetNearlyThreshold(float Dis);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoSetInteractSystemDSCheck
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355e68
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoSetInteractSystemDSCheck(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoSetInteractorCheckCollisionChannel
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355db4
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoSetInteractorCheckCollisionChannel(uint8_t InbUsePawn);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoSetDSOpenCloseDoorSpeedScale
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355c58
	// Params: [ Num(4) Size(0x10) ]
	void ServerDoSetDSOpenCloseDoorSpeedScale(float RotOpen, float RotClose, float SlideOpen, float SlideClose);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoOpenInteractSystemDetailLog
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355c3c
	// Params: [ Num(0) Size(0x0) ]
	void ServerDoOpenInteractSystemDetailLog();

	// Object: Function GM.DFMPlayerGMComponent.ServerDontDestroyFootballGateNoRep
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355b88
	// Params: [ Num(1) Size(0x1) ]
	void ServerDontDestroyFootballGateNoRep(uint8_t InDont);

	// Object: Function GM.DFMPlayerGMComponent.ServerDoDSUseClientPosToCheckBlock
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355ad4
	// Params: [ Num(1) Size(0x1) ]
	void ServerDoDSUseClientPosToCheckBlock(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.ServerDisablePvpAIDebug
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15355ab8
	// Params: [ Num(0) Size(0x0) ]
	void ServerDisablePvpAIDebug();

	// Object: Function GM.DFMPlayerGMComponent.ServerDisableMoveClientIsBoss
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355a9c
	// Params: [ Num(0) Size(0x0) ]
	void ServerDisableMoveClientIsBoss();

	// Object: Function GM.DFMPlayerGMComponent.ServerCompelteContract
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153559b4
	// Params: [ Num(2) Size(0xC) ]
	void ServerCompelteContract(struct AActor* Source, int32_t ContractID);

	// Object: Function GM.DFMPlayerGMComponent.ServerCommand
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355900
	// Params: [ Num(1) Size(0x10) ]
	void ServerCommand(struct FString Cmd);

	// Object: Function GM.DFMPlayerGMComponent.ServerCheckNotInterceptPickup
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153558e4
	// Params: [ Num(0) Size(0x0) ]
	void ServerCheckNotInterceptPickup();

	// Object: Function GM.DFMPlayerGMComponent.ServerCheckInterceptAndAdd
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153558c8
	// Params: [ Num(0) Size(0x0) ]
	void ServerCheckInterceptAndAdd();

	// Object: Function GM.DFMPlayerGMComponent.ServerChangeCampIdToRebornMode
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153558ac
	// Params: [ Num(0) Size(0x0) ]
	void ServerChangeCampIdToRebornMode();

	// Object: Function GM.DFMPlayerGMComponent.ServerAzSpawnCapacitorKey
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355890
	// Params: [ Num(0) Size(0x0) ]
	void ServerAzSpawnCapacitorKey();

	// Object: Function GM.DFMPlayerGMComponent.ServerAzRandomCapacitor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153557e4
	// Params: [ Num(1) Size(0x8) ]
	void ServerAzRandomCapacitor(uint64_t RandSeed);

	// Object: Function GM.DFMPlayerGMComponent.ServerAILabDebugMode
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355738
	// Params: [ Num(1) Size(0x4) ]
	void ServerAILabDebugMode(int32_t DebugMode);

	// Object: Function GM.DFMPlayerGMComponent.ServerAIGiveWeapon
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535568c
	// Params: [ Num(1) Size(0x8) ]
	void ServerAIGiveWeapon(uint64_t WeaponID);

	// Object: Function GM.DFMPlayerGMComponent.ServerAddVehicleSkinInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153555e0
	// Params: [ Num(1) Size(0x8) ]
	void ServerAddVehicleSkinInfo(uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.ServerAddVehiclePartInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355534
	// Params: [ Num(1) Size(0x8) ]
	void ServerAddVehiclePartInfo(uint64_t PartId);

	// Object: Function GM.DFMPlayerGMComponent.ServerAddSlotWeapon
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535544c
	// Params: [ Num(2) Size(0xC) ]
	void ServerAddSlotWeapon(uint64_t PresetId, int32_t Slot);

	// Object: Function GM.DFMPlayerGMComponent.ServerAddMerit
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153553a0
	// Params: [ Num(1) Size(0x4) ]
	void ServerAddMerit(float Merit);

	// Object: Function GM.DFMPlayerGMComponent.ServerAddAndUseAbilityItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153552f4
	// Params: [ Num(1) Size(0x8) ]
	void ServerAddAndUseAbilityItem(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.ServerAddAmmoToInventoryManager
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535520c
	// Params: [ Num(2) Size(0xC) ]
	void ServerAddAmmoToInventoryManager(uint64_t ItemID, int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.ServerActivateVaultGasVolume
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355158
	// Params: [ Num(1) Size(0x1) ]
	void ServerActivateVaultGasVolume(uint8_t bActivate);

	// Object: Function GM.DFMPlayerGMComponent.ServerAcceptActivity
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15355074
	// Params: [ Num(2) Size(0x10) ]
	void ServerAcceptActivity(int64_t TaskID, int64_t GoalID);

	// Object: Function GM.DFMPlayerGMComponent.Server2ClientMoveInfo
	// Flags: [Net|Native|Event|Public|NetClient]
	// Offset: 0x15354f90
	// Params: [ Num(2) Size(0x8) ]
	void Server2ClientMoveInfo(float SOlScore, float MPScore);

	// Object: Function GM.DFMPlayerGMComponent.Server2ClientCharacterWaterInfo
	// Flags: [Net|Native|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15354c18
	// Params: [ Num(12) Size(0x26) ]
	void Server2ClientCharacterWaterInfo(float WaterHeight, float WaterDepth, float WaveOffset, float LastGatherDataTime, struct FVector LastGatherDataPos, uint8_t IsClientCameraLocUnderWater, uint8_t IsEyeUnderWater, uint8_t IsCapsuleCenterInWater, uint8_t IsCapsuleBottomInWater, float GatherCapsuleHeight, uint8_t IsCharacterStateCanSwim, uint8_t IsNeedFootRipple);

	// Object: Function GM.DFMPlayerGMComponent.Server2ClientCameraLocDiff
	// Flags: [Net|Native|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15354a7c
	// Params: [ Num(5) Size(0x24) ]
	void Server2ClientCameraLocDiff(struct FVector ServerCameraLoc, float FOV, float Yaw, float Pitch, struct FVector CharacterLoc);

	// Object: Function GM.DFMPlayerGMComponent.SendPlayerDropBuffInfoStr
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x153549c8
	// Params: [ Num(1) Size(0x10) ]
	void SendPlayerDropBuffInfoStr(struct FString OutStr);

	// Object: Function GM.DFMPlayerGMComponent.SendFailedPointLoop
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15354914
	// Params: [ Num(1) Size(0x10) ]
	void SendFailedPointLoop(struct TArray<struct FVCCheckFailed> SendFailedPoints);

	// Object: Function GM.DFMPlayerGMComponent.SendFailedPointFinish
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15354860
	// Params: [ Num(1) Size(0x10) ]
	void SendFailedPointFinish(struct TArray<struct FVCCheckFailed> SendFailedPoints);

	// Object: Function GM.DFMPlayerGMComponent.SendDropLogicStr
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0xf720c44
	// Params: [ Num(1) Size(0x10) ]
	void SendDropLogicStr(struct FString InStr);

	// Object: Function GM.DFMPlayerGMComponent.ScientistCommand
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153547bc
	// Params: [ Num(1) Size(0x4) ]
	void ScientistCommand(int32_t Command);

	// Object: Function GM.DFMPlayerGMComponent.ResetCurrentWheeledVehicle
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153547a8
	// Params: [ Num(0) Size(0x0) ]
	void ResetCurrentWheeledVehicle();

	// Object: Function GM.DFMPlayerGMComponent.RequestUpdateBTDebugString
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x153546fc
	// Params: [ Num(1) Size(0x8) ]
	void RequestUpdateBTDebugString(struct ADFMAICharacter* CHARACTER);

	// Object: Function GM.DFMPlayerGMComponent.RequestHitRateDebugInfo
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x153546e0
	// Params: [ Num(0) Size(0x0) ]
	void RequestHitRateDebugInfo();

	// Object: Function GM.DFMPlayerGMComponent.RequestDrawCover
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x153545b4
	// Params: [ Num(3) Size(0x20) ]
	void RequestDrawCover(struct TArray<struct FVector> Locations, float Range, struct ADFMAICharacter* AI);

	// Object: Function GM.DFMPlayerGMComponent.ReportMapEconomy
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153545a0
	// Params: [ Num(0) Size(0x0) ]
	void ReportMapEconomy();

	// Object: Function GM.DFMPlayerGMComponent.RemoveScreenEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153544a8
	// Params: [ Num(1) Size(0x10) ]
	void RemoveScreenEffect(struct FString EffectName);

	// Object: Function GM.DFMPlayerGMComponent.RemovePerkSPEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15354404
	// Params: [ Num(1) Size(0x4) ]
	void RemovePerkSPEffect(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.RemovePerk
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15354360
	// Params: [ Num(1) Size(0x4) ]
	void RemovePerk(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.RemoveHudOrState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15354278
	// Params: [ Num(2) Size(0x9) ]
	void RemoveHudOrState(struct FName Name, uint8_t bReleasePanel);

	// Object: Function GM.DFMPlayerGMComponent.RemoveBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15354198
	// Params: [ Num(2) Size(0x9) ]
	void RemoveBuff(uint64_t BuffId, uint8_t CharaterPart);

	// Object: Function GM.DFMPlayerGMComponent.RemoveAllScreenEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15354184
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllScreenEffect();

	// Object: Function GM.DFMPlayerGMComponent.RemoveAllBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15354170
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAllBuff();

	// Object: Function GM.DFMPlayerGMComponent.RaidS3ArmoredCarAddHP
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153540cc
	// Params: [ Num(1) Size(0x4) ]
	void RaidS3ArmoredCarAddHP(float AddedHealth);

	// Object: Function GM.DFMPlayerGMComponent.ProcessExecFunc
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15354020
	// Params: [ Num(1) Size(0x10) ]
	void ProcessExecFunc(struct FString Command);

	// Object: Function GM.DFMPlayerGMComponent.PrintCurrentInteractWorldLocation
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535400c
	// Params: [ Num(0) Size(0x0) ]
	void PrintCurrentInteractWorldLocation();

	// Object: Function GM.DFMPlayerGMComponent.PrintAllCompAndInitAnim
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15353ff8
	// Params: [ Num(0) Size(0x0) ]
	void PrintAllCompAndInitAnim();

	// Object: Function GM.DFMPlayerGMComponent.PlayWwiseDynamicDialogue
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	// Offset: 0x15353ec0
	// Params: [ Num(2) Size(0x58) ]
	void PlayWwiseDynamicDialogue(struct FName& Prefix, struct TMap<struct FName, struct FName>& Switchs);

	// Object: Function GM.DFMPlayerGMComponent.PlayerVehicleMaxHP
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15353e14
	// Params: [ Num(1) Size(0x1) ]
	void PlayerVehicleMaxHP(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.PlayCutscene
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15353d1c
	// Params: [ Num(1) Size(0x10) ]
	void PlayCutscene(struct FString Tag);

	// Object: Function GM.DFMPlayerGMComponent.PlayAllParticles
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15353c3c
	// Params: [ Num(2) Size(0x8) ]
	void PlayAllParticles(int32_t InBatchNum, float InTimeoutSeconds);

	// Object: Function GM.DFMPlayerGMComponent.OxygenDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15353c28
	// Params: [ Num(0) Size(0x0) ]
	void OxygenDebug();

	// Object: Function GM.DFMPlayerGMComponent.OnWarmParticleTimeout
	// Flags: [Final|Native|Public]
	// Offset: 0x15353b84
	// Params: [ Num(1) Size(0x8) ]
	void OnWarmParticleTimeout(struct UParticleSystemComponent* PSystem);

	// Object: Function GM.DFMPlayerGMComponent.OnWarmParticlePlayFinished
	// Flags: [Final|Native|Public]
	// Offset: 0x15353ae0
	// Params: [ Num(1) Size(0x8) ]
	void OnWarmParticlePlayFinished(struct UParticleSystemComponent* PSystem);

	// Object: Function GM.DFMPlayerGMComponent.OnShowInputDebugPanel
	// Flags: [Final|Native|Public]
	// Offset: 0x153539f8
	// Params: [ Num(2) Size(0x18) ]
	void OnShowInputDebugPanel(struct FString FunctionName, struct UBaseUIView* View);

	// Object: Function GM.DFMPlayerGMComponent.OnPickupInfosUpdate
	// Flags: [Final|Native|Public]
	// Offset: 0x153539e4
	// Params: [ Num(0) Size(0x0) ]
	void OnPickupInfosUpdate();

	// Object: Function GM.DFMPlayerGMComponent.OnLoadingPercentage
	// Flags: [Final|Native|Public]
	// Offset: 0x15353940
	// Params: [ Num(1) Size(0x4) ]
	void OnLoadingPercentage(int32_t Percentage);

	// Object: Function GM.DFMPlayerGMComponent.OnDetorurResult
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15353814
	// Params: [ Num(3) Size(0x28) ]
	void OnDetorurResult(struct TArray<struct FVector> Paths, struct FVector StartPos, struct FVector EndPos);

	// Object: Function GM.DFMPlayerGMComponent.OnAIViewDeadbody
	// Flags: [Final|Native|Public]
	// Offset: 0x15353738
	// Params: [ Num(2) Size(0x10) ]
	void OnAIViewDeadbody(struct ACHARACTER* CHARACTER, struct AActor* Deadbody);

	// Object: Function GM.DFMPlayerGMComponent.NotifyServerRaidS3ArmoredCarAddHP
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1535368c
	// Params: [ Num(1) Size(0x4) ]
	void NotifyServerRaidS3ArmoredCarAddHP(float AddedHealth);

	// Object: Function GM.DFMPlayerGMComponent.NotifyServerPlayerVehicleMaxHP
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153535d8
	// Params: [ Num(1) Size(0x1) ]
	void NotifyServerPlayerVehicleMaxHP(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.NotifyLuaCodeResult
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x153534e8
	// Params: [ Num(2) Size(0x18) ]
	void NotifyLuaCodeResult(uint64_t Index, struct FString Result);

	// Object: Function GM.DFMPlayerGMComponent.NotifyAI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153533f0
	// Params: [ Num(1) Size(0x10) ]
	void NotifyAI(struct FString NotifyMessage);

	// Object: Function GM.DFMPlayerGMComponent.NewAddBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535334c
	// Params: [ Num(1) Size(0x8) ]
	void NewAddBuff(uint64_t BuffId);

	// Object: Function GM.DFMPlayerGMComponent.MultiWorldStart
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15353264
	// Params: [ Num(2) Size(0xC) ]
	void MultiWorldStart(uint64_t RoomId, int32_t Port);

	// Object: Function GM.DFMPlayerGMComponent.MultiWorldEnd
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153531b8
	// Params: [ Num(1) Size(0x8) ]
	void MultiWorldEnd(uint64_t RoomId);

	// Object: Function GM.DFMPlayerGMComponent.MulticastGMTimeScale
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x1535310c
	// Params: [ Num(1) Size(0x4) ]
	void MulticastGMTimeScale(float Scale);

	// Object: Function GM.DFMPlayerGMComponent.KickTeammate
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153530f8
	// Params: [ Num(0) Size(0x0) ]
	void KickTeammate();

	// Object: Function GM.DFMPlayerGMComponent.IsAISpeakDebugEnable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x153530c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsAISpeakDebugEnable();

	// Object: Function GM.DFMPlayerGMComponent.InvTest_RefillBullets_Server
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15352fd0
	// Params: [ Num(2) Size(0x10) ]
	void InvTest_RefillBullets_Server(uint8_t bLeft, uint64_t TargetBulletID);

	// Object: Function GM.DFMPlayerGMComponent.InvTest_RefillBullets
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352ee8
	// Params: [ Num(2) Size(0x10) ]
	void InvTest_RefillBullets(uint8_t bLeft, uint64_t TargetBulletID);

	// Object: Function GM.DFMPlayerGMComponent.GMWhoIsYourDaddy
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352e44
	// Params: [ Num(1) Size(0x4) ]
	void GMWhoIsYourDaddy(int32_t Health);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponUpdatePartDynamicEffective
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352d5c
	// Params: [ Num(2) Size(0x9) ]
	void GMWeaponUpdatePartDynamicEffective(uint64_t PartFunctionId, uint8_t bDynamicEffective);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponUpdateBulletModel
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352cb8
	// Params: [ Num(1) Size(0x4) ]
	void GMWeaponUpdateBulletModel(int32_t AmmoCount);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestSpawnWeaponMesh
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352b24
	// Params: [ Num(5) Size(0x20) ]
	void GMWeaponTestSpawnWeaponMesh(uint64_t WeaponID, uint64_t SkinAppId, uint8_t MeshType, uint32_t Index, uint64_t MysticalId);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestSpawnCharacterInFace
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352958
	// Params: [ Num(6) Size(0x21) ]
	void GMWeaponTestSpawnCharacterInFace(struct FName CharacterConfig, uint64_t WeaponID, uint64_t SkinAppId, float Distance, int32_t Index, uint8_t FaceTo);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestSpawnCharacter
	// Flags: [Final|Exec|Native|Public|HasDefaults]
	// Offset: 0x1535278c
	// Params: [ Num(6) Size(0x34) ]
	void GMWeaponTestSpawnCharacter(struct FName CharacterConfig, uint64_t WeaponID, uint64_t SkinAppId, struct FVector Location, struct FRotator Rotator, int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestRemoveAllWeaponMesh
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352778
	// Params: [ Num(0) Size(0x0) ]
	void GMWeaponTestRemoveAllWeaponMesh();

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestRemoveAllSpawnCharacter
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352764
	// Params: [ Num(0) Size(0x0) ]
	void GMWeaponTestRemoveAllSpawnCharacter();

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestFocusWeaponMesh
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153526c0
	// Params: [ Num(1) Size(0x4) ]
	void GMWeaponTestFocusWeaponMesh(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestCharacterStopAutoFire
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153526ac
	// Params: [ Num(0) Size(0x0) ]
	void GMWeaponTestCharacterStopAutoFire();

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponTestCharacterAutoFire
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352608
	// Params: [ Num(1) Size(0x4) ]
	void GMWeaponTestCharacterAutoFire(float FireInterval);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponReplicateTimeOut
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352564
	// Params: [ Num(1) Size(0x4) ]
	void GMWeaponReplicateTimeOut(int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponRefreshFiringAnim
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352550
	// Params: [ Num(0) Size(0x0) ]
	void GMWeaponRefreshFiringAnim();

	// Object: Function GM.DFMPlayerGMComponent.GMWeaponConsumeType
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153524ac
	// Params: [ Num(1) Size(0x1) ]
	void GMWeaponConsumeType(uint8_t ConsumeType);

	// Object: Function GM.DFMPlayerGMComponent.GMWeapon_CallLuaWeaponMain
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352498
	// Params: [ Num(0) Size(0x0) ]
	void GMWeapon_CallLuaWeaponMain();

	// Object: Function GM.DFMPlayerGMComponent.GMWaterUpRest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352484
	// Params: [ Num(0) Size(0x0) ]
	void GMWaterUpRest();

	// Object: Function GM.DFMPlayerGMComponent.GMWaterUp
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352470
	// Params: [ Num(0) Size(0x0) ]
	void GMWaterUp();

	// Object: Function GM.DFMPlayerGMComponent.GMWaterDataCheck
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15352278
	// Params: [ Num(6) Size(0xE) ]
	void GMWaterDataCheck(float Precision, uint8_t bExecuteOneStep, uint8_t bDrawDebugEachStep, float HalfEdgeLength, uint8_t bShouldDrawNoConnectionPoint, uint8_t bGenerateFakeErrorSphere);

	// Object: Function GM.DFMPlayerGMComponent.GMVehicleStopMusic
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15352264
	// Params: [ Num(0) Size(0x0) ]
	void GMVehicleStopMusic();

	// Object: Function GM.DFMPlayerGMComponent.GMVehiclePlayMusic
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15352250
	// Params: [ Num(0) Size(0x0) ]
	void GMVehiclePlayMusic();

	// Object: Function GM.DFMPlayerGMComponent.GMUseTA
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535223c
	// Params: [ Num(0) Size(0x0) ]
	void GMUseTA();

	// Object: Function GM.DFMPlayerGMComponent.GMUseStartSpotTemplate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15352198
	// Params: [ Num(1) Size(0x8) ]
	void GMUseStartSpotTemplate(struct FName RowId);

	// Object: Function GM.DFMPlayerGMComponent.GMUseSKUBrick
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15352184
	// Params: [ Num(0) Size(0x0) ]
	void GMUseSKUBrick();

	// Object: Function GM.DFMPlayerGMComponent.GMUseOptOnDoorFrontCheck
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153520d8
	// Params: [ Num(1) Size(0x1) ]
	void GMUseOptOnDoorFrontCheck(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseOnlyPlayerCharacterWhenCheckPreInMaxDis
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535202c
	// Params: [ Num(1) Size(0x1) ]
	void GMUseOnlyPlayerCharacterWhenCheckPreInMaxDis(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseGlassOpt
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15351f80
	// Params: [ Num(1) Size(0x1) ]
	void GMUseGlassOpt(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseForwardAndCheckHitFirstly
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351ed4
	// Params: [ Num(1) Size(0x1) ]
	void GMUseForwardAndCheckHitFirstly(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseFakeTickInterval
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351dec
	// Params: [ Num(2) Size(0x8) ]
	void GMUseFakeTickInterval(uint8_t InbUse, float InInterval);

	// Object: Function GM.DFMPlayerGMComponent.GMUseDSCheckNearly
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351d40
	// Params: [ Num(1) Size(0x1) ]
	void GMUseDSCheckNearly(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseCustomMovementSpeed
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351c58
	// Params: [ Num(2) Size(0x8) ]
	void GMUseCustomMovementSpeed(uint8_t bUseCustomSpeed, float CustomSpeed);

	// Object: Function GM.DFMPlayerGMComponent.GMUseConstMovementSpeed
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351bac
	// Params: [ Num(1) Size(0x1) ]
	void GMUseConstMovementSpeed(uint8_t bUseConstSpeed);

	// Object: Function GM.DFMPlayerGMComponent.GMUseClientWhenCheckPreInMaxDis
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351b00
	// Params: [ Num(1) Size(0x1) ]
	void GMUseClientWhenCheckPreInMaxDis(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseClientOverlapWhenCheckPreInMaxDis
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351a18
	// Params: [ Num(2) Size(0x8) ]
	void GMUseClientOverlapWhenCheckPreInMaxDis(uint8_t InbUse, float InRadius);

	// Object: Function GM.DFMPlayerGMComponent.GMUseCheckUnlock
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535196c
	// Params: [ Num(1) Size(0x1) ]
	void GMUseCheckUnlock(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseCheckHack
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153518c0
	// Params: [ Num(1) Size(0x1) ]
	void GMUseCheckHack(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseCheckCollSweep
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535179c
	// Params: [ Num(3) Size(0xC) ]
	void GMUseCheckCollSweep(int32_t Index, uint8_t InbUse, float InRadius);

	// Object: Function GM.DFMPlayerGMComponent.GMUseCheckCapture
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153516f0
	// Params: [ Num(1) Size(0x1) ]
	void GMUseCheckCapture(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMUseAILabGM
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351608
	// Params: [ Num(2) Size(0x18) ]
	void GMUseAILabGM(int64_t Uin, struct FString GMCmd);

	// Object: Function GM.DFMPlayerGMComponent.GMUnlockLootingBox
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153515f4
	// Params: [ Num(0) Size(0x0) ]
	void GMUnlockLootingBox();

	// Object: Function GM.DFMPlayerGMComponent.GMUnEquipPerk
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153515e0
	// Params: [ Num(0) Size(0x0) ]
	void GMUnEquipPerk();

	// Object: Function GM.DFMPlayerGMComponent.GMUnEquipLeftWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535153c
	// Params: [ Num(1) Size(0x8) ]
	void GMUnEquipLeftWeapon(uint64_t WeaponID);

	// Object: Function GM.DFMPlayerGMComponent.GMTryCallDeliverAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535141c
	// Params: [ Num(3) Size(0x9) ]
	void GMTryCallDeliverAI(int32_t Diff, int32_t Style, uint8_t IsTeammate);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggleSOLTimeLineEvent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351408
	// Params: [ Num(0) Size(0x0) ]
	void GMTriggleSOLTimeLineEvent();

	// Object: Function GM.DFMPlayerGMComponent.GMTriggleInteractorWhiteDotDistance
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1535135c
	// Params: [ Num(1) Size(0x1) ]
	void GMTriggleInteractorWhiteDotDistance(uint8_t ShowWhiteDotDistance);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggleBattleFieldPlayerAudio
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153512b8
	// Params: [ Num(1) Size(0x4) ]
	void GMTriggleBattleFieldPlayerAudio(int32_t InType);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerSOLTrain
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153512a4
	// Params: [ Num(0) Size(0x0) ]
	void GMTriggerSOLTrain();

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerPreMiniGameSucceed
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15351200
	// Params: [ Num(1) Size(0x8) ]
	void GMTriggerPreMiniGameSucceed(struct FName MiniGameTag);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerInteractorKeyPressed
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535115c
	// Params: [ Num(1) Size(0x4) ]
	void GMTriggerInteractorKeyPressed(int32_t KeyIndex);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerHudStateChange
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15351148
	// Params: [ Num(0) Size(0x0) ]
	void GMTriggerHudStateChange();

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerFirework
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15351134
	// Params: [ Num(0) Size(0x0) ]
	void GMTriggerFirework();

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerEarthquake
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15351054
	// Params: [ Num(2) Size(0x8) ]
	void GMTriggerEarthquake(int32_t Intensity, float DelaySeconds);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerBossDied
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15351040
	// Params: [ Num(0) Size(0x0) ]
	void GMTriggerBossDied();

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerAShellSpawn
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350f9c
	// Params: [ Num(1) Size(0x4) ]
	void GMTriggerAShellSpawn(int32_t Delay);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerArenaEnd
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350ef8
	// Params: [ Num(1) Size(0x4) ]
	void GMTriggerArenaEnd(int32_t InType);

	// Object: Function GM.DFMPlayerGMComponent.GMTriggerAllPlayerToEscape
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15350ee4
	// Params: [ Num(0) Size(0x0) ]
	void GMTriggerAllPlayerToEscape();

	// Object: Function GM.DFMPlayerGMComponent.GMTransAILabCommand
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350d54
	// Params: [ Num(5) Size(0x20) ]
	void GMTransAILabCommand(int64_t Uin, int32_t Command, float value1, float value2, int64_t Value3);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleVehicleTurretLock
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15350d40
	// Params: [ Num(0) Size(0x0) ]
	void GMToggleVehicleTurretLock();

	// Object: Function GM.DFMPlayerGMComponent.GMToggleUIBatch
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350c9c
	// Params: [ Num(1) Size(0x4) ]
	void GMToggleUIBatch(int32_t Visible);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleTrainSOL
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350bf0
	// Params: [ Num(1) Size(0x1) ]
	void GMToggleTrainSOL(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleSpectateMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350b4c
	// Params: [ Num(1) Size(0x4) ]
	void GMToggleSpectateMode(int32_t Visible);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleParticleSystemComponentDebug
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15350b38
	// Params: [ Num(0) Size(0x0) ]
	void GMToggleParticleSystemComponentDebug();

	// Object: Function GM.DFMPlayerGMComponent.GMToggleObserverMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350b24
	// Params: [ Num(0) Size(0x0) ]
	void GMToggleObserverMode();

	// Object: Function GM.DFMPlayerGMComponent.GMToggleHUD
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350a80
	// Params: [ Num(1) Size(0x4) ]
	void GMToggleHUD(int32_t Visible);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleHideMiniMap
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153509dc
	// Params: [ Num(1) Size(0x4) ]
	void GMToggleHideMiniMap(int32_t InHide);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleFirePriorityDebugView
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350930
	// Params: [ Num(1) Size(0x1) ]
	void GMToggleFirePriorityDebugView(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.GMToggleExit
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535080c
	// Params: [ Num(3) Size(0xC) ]
	void GMToggleExit(int32_t ID, uint8_t Enable, float CountDown);

	// Object: Function GM.DFMPlayerGMComponent.GMTimeScale
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15350768
	// Params: [ Num(1) Size(0x4) ]
	void GMTimeScale(float Scale);

	// Object: Function GM.DFMPlayerGMComponent.GMThreeInspect
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153506c4
	// Params: [ Num(1) Size(0x8) ]
	void GMThreeInspect(int64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMThreeAnimJumpToEndByItemGid
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15350620
	// Params: [ Num(1) Size(0x8) ]
	void GMThreeAnimJumpToEndByItemGid(uint64_t InItemGid);

	// Object: Function GM.DFMPlayerGMComponent.GMTestTrace
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1535060c
	// Params: [ Num(0) Size(0x0) ]
	void GMTestTrace();

	// Object: Function GM.DFMPlayerGMComponent.GMTestTearOff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15350568
	// Params: [ Num(1) Size(0x4) ]
	void GMTestTearOff(int32_t TearOffMode);

	// Object: Function GM.DFMPlayerGMComponent.GMTestSweepCast
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153503dc
	// Params: [ Num(5) Size(0x14) ]
	void GMTestSweepCast(float LocX, float LocY, float LocZ, float Height, float radius);

	// Object: Function GM.DFMPlayerGMComponent.GMTestRadialDamage
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15350244
	// Params: [ Num(5) Size(0x15) ]
	void GMTestRadialDamage(int64_t AttackId, float X, float Y, float Z, uint8_t bDebugDraw);

	// Object: Function GM.DFMPlayerGMComponent.GMTestPassiveMove
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153501a0
	// Params: [ Num(1) Size(0x4) ]
	void GMTestPassiveMove(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.GMTestNightVisionEquipment
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153500f4
	// Params: [ Num(1) Size(0x1) ]
	void GMTestNightVisionEquipment(uint8_t bTestOnServer);

	// Object: Function GM.DFMPlayerGMComponent.GMTestFindPath
	// Flags: [Final|Exec|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x1534ffd8
	// Params: [ Num(3) Size(0x1C) ]
	void GMTestFindPath(struct FVector Start, struct FVector End, float LiftTime);

	// Object: Function GM.DFMPlayerGMComponent.GMTestDragForPassiveMove
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ff34
	// Params: [ Num(1) Size(0x4) ]
	void GMTestDragForPassiveMove(int32_t Stage);

	// Object: Function GM.DFMPlayerGMComponent.GMTestAutoMoveToLocation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534fe1c
	// Params: [ Num(3) Size(0xC) ]
	void GMTestAutoMoveToLocation(float LocX, float LocY, float LocZ);

	// Object: Function GM.DFMPlayerGMComponent.GMTestAreaFreeze
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534fd38
	// Params: [ Num(2) Size(0x5) ]
	void GMTestAreaFreeze(int32_t AreaID, uint8_t bEnter);

	// Object: Function GM.DFMPlayerGMComponent.GMTestAISpawnRate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534fc5c
	// Params: [ Num(2) Size(0x8) ]
	void GMTestAISpawnRate(int32_t Count, int32_t TagId);

	// Object: Function GM.DFMPlayerGMComponent.GMTeelMeLocation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534fc48
	// Params: [ Num(0) Size(0x0) ]
	void GMTeelMeLocation();

	// Object: Function GM.DFMPlayerGMComponent.GMTeamInfoSetTeammateState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534fba4
	// Params: [ Num(1) Size(0x4) ]
	void GMTeamInfoSetTeammateState(int32_t TeammateState);

	// Object: Function GM.DFMPlayerGMComponent.GMTeamInfoSetPlayerGamePlayState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534fb00
	// Params: [ Num(1) Size(0x4) ]
	void GMTeamInfoSetPlayerGamePlayState(int32_t InPlayerGamePlayState);

	// Object: Function GM.DFMPlayerGMComponent.GMSwitchWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534fa5c
	// Params: [ Num(1) Size(0x4) ]
	void GMSwitchWeapon(EAttachPosition pos);

	// Object: Function GM.DFMPlayerGMComponent.GmSwitchToEmptyHand
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f9b8
	// Params: [ Num(1) Size(0x4) ]
	void GmSwitchToEmptyHand(float DelayTime);

	// Object: Function GM.DFMPlayerGMComponent.GMSwitchSkillWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f914
	// Params: [ Num(1) Size(0x4) ]
	void GMSwitchSkillWeapon(int32_t SkillId);

	// Object: Function GM.DFMPlayerGMComponent.GMSwitchCharacterAvatarID
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f838
	// Params: [ Num(2) Size(0x10) ]
	void GMSwitchCharacterAvatarID(uint64_t PlayerId, struct FName HeroId);

	// Object: Function GM.DFMPlayerGMComponent.GMSwitchBreakableItemSkeletalMeshLodControl
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f794
	// Params: [ Num(1) Size(0x4) ]
	void GMSwitchBreakableItemSkeletalMeshLodControl(int32_t IsOpen);

	// Object: Function GM.DFMPlayerGMComponent.GMSwitchBreakableItemDestoryTime
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f6f0
	// Params: [ Num(1) Size(0x4) ]
	void GMSwitchBreakableItemDestoryTime(int32_t isNeverDestroy);

	// Object: Function GM.DFMPlayerGMComponent.GMSuperSprint
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f6dc
	// Params: [ Num(0) Size(0x0) ]
	void GMSuperSprint();

	// Object: Function GM.DFMPlayerGMComponent.GMSummonAILab
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f600
	// Params: [ Num(2) Size(0x8) ]
	void GMSummonAILab(int32_t Type, int32_t Diff);

	// Object: Function GM.DFMPlayerGMComponent.GMStopLooting
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f554
	// Params: [ Num(1) Size(0x1) ]
	void GMStopLooting(uint8_t bSwitchFromLoot2BagView);

	// Object: Function GM.DFMPlayerGMComponent.GMStopGuide
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f540
	// Params: [ Num(0) Size(0x0) ]
	void GMStopGuide();

	// Object: Function GM.DFMPlayerGMComponent.GMStopExitTriggerAudio
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f52c
	// Params: [ Num(0) Size(0x0) ]
	void GMStopExitTriggerAudio();

	// Object: Function GM.DFMPlayerGMComponent.GMStopCurrentExitCutScene
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f518
	// Params: [ Num(0) Size(0x0) ]
	void GMStopCurrentExitCutScene();

	// Object: Function GM.DFMPlayerGMComponent.GMStartSpectate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f504
	// Params: [ Num(0) Size(0x0) ]
	void GMStartSpectate();

	// Object: Function GM.DFMPlayerGMComponent.GMStartGuideInGame
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f460
	// Params: [ Num(1) Size(0x4) ]
	void GMStartGuideInGame(int32_t StageId);

	// Object: Function GM.DFMPlayerGMComponent.GMSpeedUpOccupy
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534f3b4
	// Params: [ Num(1) Size(0x4) ]
	void GMSpeedUpOccupy(int32_t multipy);

	// Object: Function GM.DFMPlayerGMComponent.GMSpectateNext
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f3a0
	// Params: [ Num(0) Size(0x0) ]
	void GMSpectateNext();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnVehicle
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f2f4
	// Params: [ Num(1) Size(0x10) ]
	void GMSpawnVehicle(struct FString VehicleName);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnTotalVehicles
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f250
	// Params: [ Num(1) Size(0x4) ]
	void GMSpawnTotalVehicles(float dist);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnSmokeActor
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f1ac
	// Params: [ Num(1) Size(0x4) ]
	void GMSpawnSmokeActor(int32_t SmokeId);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnProfileVehicles
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f108
	// Params: [ Num(1) Size(0x4) ]
	void GMSpawnProfileVehicles(float dist);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnPlunderContract
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f0f4
	// Params: [ Num(0) Size(0x0) ]
	void GMSpawnPlunderContract();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnPickupWhenReleaseDoor
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534f048
	// Params: [ Num(1) Size(0x1) ]
	void GMSpawnPickupWhenReleaseDoor(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnNormalFootball
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f034
	// Params: [ Num(0) Size(0x0) ]
	void GMSpawnNormalFootball();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnMovingFish
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534f020
	// Params: [ Num(0) Size(0x0) ]
	void GMSpawnMovingFish();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnMovieBP
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534ef28
	// Params: [ Num(1) Size(0x10) ]
	void GMSpawnMovieBP(struct FString Path);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnLimit
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ee84
	// Params: [ Num(1) Size(0x4) ]
	void GMSpawnLimit(int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnJetForTest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534eda4
	// Params: [ Num(2) Size(0x8) ]
	void GMSpawnJetForTest(int32_t Num, float Height);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnJailBreakDeadBody
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ed00
	// Params: [ Num(1) Size(0x4) ]
	void GMSpawnJailBreakDeadBody(int32_t TeamStartGroupId);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnItemWithSourcePlayer
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ec24
	// Params: [ Num(2) Size(0x10) ]
	void GMSpawnItemWithSourcePlayer(uint64_t ItemID, uint64_t PlayerId);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnItemPickup
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534eb80
	// Params: [ Num(1) Size(0x8) ]
	void GMSpawnItemPickup(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnItemOwnedToPlayer
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534eaa4
	// Params: [ Num(2) Size(0x10) ]
	void GMSpawnItemOwnedToPlayer(uint64_t ItemID, uint64_t PlayerId);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnItem
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534e9c4
	// Params: [ Num(2) Size(0xC) ]
	void GMSpawnItem(int64_t ItemID, int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnInLocation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534e868
	// Params: [ Num(4) Size(0x1C) ]
	void GMSpawnInLocation(struct FString AIName, float X, float Y, float Z);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnFootballStaticGate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534e854
	// Params: [ Num(0) Size(0x0) ]
	void GMSpawnFootballStaticGate();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnFootballAIGate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534e840
	// Params: [ Num(0) Size(0x0) ]
	void GMSpawnFootballAIGate();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnFireArrow
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534e79c
	// Params: [ Num(1) Size(0x8) ]
	void GMSpawnFireArrow(uint64_t BulletId);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnDFMCharacterInLocation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534e4ec
	// Params: [ Num(9) Size(0x6C) ]
	void GMSpawnDFMCharacterInLocation(struct FString CharacterID, struct FString BagId, struct FString ChestId, struct FString VestID, struct FString WeaponID1, struct FString WeaponID2, float X, float Y, float Z);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnArchiveItemNew
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534e1f0
	// Params: [ Num(8) Size(0x48) ]
	void GMSpawnArchiveItemNew(int32_t Level, uint8_t KilledByBoss, struct FString Killer, struct FString BeKiller, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnArchiveItem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534e00c
	// Params: [ Num(5) Size(0x30) ]
	void GMSpawnArchiveItem(struct FString Killer, uint64_t KillerWeaponID, uint64_t MapID, int64_t KillTimestamp, int64_t EquipmentValue);

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnAllSniperDrama
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534dff8
	// Params: [ Num(0) Size(0x0) ]
	void GMSpawnAllSniperDrama();

	// Object: Function GM.DFMPlayerGMComponent.GMSpawnAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534dec4
	// Params: [ Num(3) Size(0x21) ]
	void GMSpawnAI(struct FString BotName, struct FString Args, uint8_t TPToStart);

	// Object: Function GM.DFMPlayerGMComponent.GMSOLStartMatch
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534deb0
	// Params: [ Num(0) Size(0x0) ]
	void GMSOLStartMatch();

	// Object: Function GM.DFMPlayerGMComponent.GMSnapshot
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534de9c
	// Params: [ Num(0) Size(0x0) ]
	void GMSnapshot();

	// Object: Function GM.DFMPlayerGMComponent.GMSkinPlayer
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ddc0
	// Params: [ Num(2) Size(0x10) ]
	void GMSkinPlayer(uint64_t WeaponID, uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.GMSkinPendant
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534dd1c
	// Params: [ Num(1) Size(0x8) ]
	void GMSkinPendant(uint64_t PendantItemId);

	// Object: Function GM.DFMPlayerGMComponent.GMSkinMysticalGun
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534dc04
	// Params: [ Num(3) Size(0x18) ]
	void GMSkinMysticalGun(uint64_t SkinId, uint64_t MysticalId, uint64_t RandomSeed);

	// Object: Function GM.DFMPlayerGMComponent.GMSkinMysticalAppGun
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534db28
	// Params: [ Num(2) Size(0x10) ]
	void GMSkinMysticalAppGun(uint64_t SkinApperanceId, uint64_t MysticalId);

	// Object: Function GM.DFMPlayerGMComponent.GMSkinGun
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534da84
	// Params: [ Num(1) Size(0x8) ]
	void GMSkinGun(uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.GMSkinAppGun
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d9e0
	// Params: [ Num(1) Size(0x8) ]
	void GMSkinAppGun(uint64_t SkinApperanceId);

	// Object: Function GM.DFMPlayerGMComponent.GMSkillInspect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d93c
	// Params: [ Num(1) Size(0x4) ]
	void GMSkillInspect(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.GMSimulateSplitRedEnvelope
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d860
	// Params: [ Num(2) Size(0x10) ]
	void GMSimulateSplitRedEnvelope(uint64_t EnvelopeItemID, int64_t TryTimes);

	// Object: Function GM.DFMPlayerGMComponent.GMSimulateOpenBox
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534d7bc
	// Params: [ Num(1) Size(0x4) ]
	void GMSimulateOpenBox(int32_t Times);

	// Object: Function GM.DFMPlayerGMComponent.GMSimulateDSFrameTimeDefault
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d7a8
	// Params: [ Num(0) Size(0x0) ]
	void GMSimulateDSFrameTimeDefault();

	// Object: Function GM.DFMPlayerGMComponent.GMSimulateDSFrameTime
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d61c
	// Params: [ Num(5) Size(0x14) ]
	void GMSimulateDSFrameTime(float AvgMax, float AvgMin, float StunRate, float StunMax, float StunMin);

	// Object: Function GM.DFMPlayerGMComponent.GMSimulateCollectionDataEvent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534d578
	// Params: [ Num(1) Size(0x8) ]
	void GMSimulateCollectionDataEvent(int64_t Type);

	// Object: Function GM.DFMPlayerGMComponent.GMShowWaterSparseOctree
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d498
	// Params: [ Num(2) Size(0x8) ]
	void GMShowWaterSparseOctree(int32_t LOD, float Range);

	// Object: Function GM.DFMPlayerGMComponent.GMShowUIHidePanel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534d484
	// Params: [ Num(0) Size(0x0) ]
	void GMShowUIHidePanel();

	// Object: Function GM.DFMPlayerGMComponent.GMShowSparseOctree
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d3a4
	// Params: [ Num(2) Size(0x8) ]
	void GMShowSparseOctree(int32_t LOD, float Range);

	// Object: Function GM.DFMPlayerGMComponent.GMShowSOLCommonBanner
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534d300
	// Params: [ Num(1) Size(0x4) ]
	void GMShowSOLCommonBanner(int32_t Val);

	// Object: Function GM.DFMPlayerGMComponent.GMShowSOLBroadcastBanner
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d218
	// Params: [ Num(2) Size(0x14) ]
	void GMShowSOLBroadcastBanner(struct FString Text, float Duration);

	// Object: Function GM.DFMPlayerGMComponent.GMShowSocket
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d174
	// Params: [ Num(1) Size(0x8) ]
	void GMShowSocket(struct FName SocketName);

	// Object: Function GM.DFMPlayerGMComponent.GMShowSkill
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534d160
	// Params: [ Num(0) Size(0x0) ]
	void GMShowSkill();

	// Object: Function GM.DFMPlayerGMComponent.GMShowServerMoveInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d0bc
	// Params: [ Num(1) Size(0x4) ]
	void GMShowServerMoveInfo(int32_t MoveType);

	// Object: Function GM.DFMPlayerGMComponent.GMShowRebornPlayerBanner
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534d0a8
	// Params: [ Num(0) Size(0x0) ]
	void GMShowRebornPlayerBanner();

	// Object: Function GM.DFMPlayerGMComponent.GMShowPickupInfos
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534d004
	// Params: [ Num(1) Size(0x4) ]
	void GMShowPickupInfos(int32_t ShowType);

	// Object: Function GM.DFMPlayerGMComponent.GMShowNavExtInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534cf60
	// Params: [ Num(1) Size(0x4) ]
	void GMShowNavExtInfo(float RefreshTime);

	// Object: Function GM.DFMPlayerGMComponent.GMShowNav
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534ceb4
	// Params: [ Num(1) Size(0x4) ]
	void GMShowNav(float Range);

	// Object: Function GM.DFMPlayerGMComponent.GMShowMovingFishPath
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534cea0
	// Params: [ Num(0) Size(0x0) ]
	void GMShowMovingFishPath();

	// Object: Function GM.DFMPlayerGMComponent.GMShowLogicBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534cdf4
	// Params: [ Num(1) Size(0x1) ]
	void GMShowLogicBuff(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.GmShowKillTip
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534cde0
	// Params: [ Num(0) Size(0x0) ]
	void GmShowKillTip();

	// Object: Function GM.DFMPlayerGMComponent.GMShowInputDebugPanel
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534cd3c
	// Params: [ Num(1) Size(0x4) ]
	void GMShowInputDebugPanel(int32_t InType);

	// Object: Function GM.DFMPlayerGMComponent.GMShowGroupLocation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534cd28
	// Params: [ Num(0) Size(0x0) ]
	void GMShowGroupLocation();

	// Object: Function GM.DFMPlayerGMComponent.GMShowFps
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534cd14
	// Params: [ Num(0) Size(0x0) ]
	void GMShowFps();

	// Object: Function GM.DFMPlayerGMComponent.GMShowFoliage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534cc1c
	// Params: [ Num(2) Size(0x2) ]
	void GMShowFoliage(uint8_t bSneakOpt, uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMShowDeadBoxText
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534cb78
	// Params: [ Num(1) Size(0x4) ]
	void GMShowDeadBoxText(int32_t TextType);

	// Object: Function GM.DFMPlayerGMComponent.GMShowCharacterWaterInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534cad4
	// Params: [ Num(1) Size(0x4) ]
	void GMShowCharacterWaterInfo(int32_t ShowType);

	// Object: Function GM.DFMPlayerGMComponent.GMShowCharacterLightAttachmentAsGroup
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534cac0
	// Params: [ Num(0) Size(0x0) ]
	void GMShowCharacterLightAttachmentAsGroup();

	// Object: Function GM.DFMPlayerGMComponent.GMShowCameraLocDiff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ca14
	// Params: [ Num(1) Size(0x1) ]
	void GMShowCameraLocDiff(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMShowAllVaultGasVolume
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c968
	// Params: [ Num(1) Size(0x1) ]
	void GMShowAllVaultGasVolume(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.GMShowAllSmokeBlindnessVolume
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c8bc
	// Params: [ Num(1) Size(0x1) ]
	void GMShowAllSmokeBlindnessVolume(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.GMShowAllFlameDamageVolume
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c810
	// Params: [ Num(1) Size(0x1) ]
	void GMShowAllFlameDamageVolume(uint8_t bShow);

	// Object: Function GM.DFMPlayerGMComponent.GMShowAllFishShoal
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c76c
	// Params: [ Num(1) Size(0x4) ]
	void GMShowAllFishShoal(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.GMSetWorldTimeDilation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534c6c0
	// Params: [ Num(1) Size(0x4) ]
	void GMSetWorldTimeDilation(float NewTimeDilation);

	// Object: Function GM.DFMPlayerGMComponent.GMSetWeatherAudioId
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c61c
	// Params: [ Num(1) Size(0x8) ]
	void GMSetWeatherAudioId(int64_t WeatherID);

	// Object: Function GM.DFMPlayerGMComponent.GMSetVolumetricViewDistance
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534c578
	// Params: [ Num(1) Size(0x4) ]
	void GMSetVolumetricViewDistance(float InDistance);

	// Object: Function GM.DFMPlayerGMComponent.GMSetVehicleHPLock
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c4cc
	// Params: [ Num(1) Size(0x1) ]
	void GMSetVehicleHPLock(uint8_t bLock);

	// Object: Function GM.DFMPlayerGMComponent.GMSetUseGlassEffectCull
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c420
	// Params: [ Num(1) Size(0x1) ]
	void GMSetUseGlassEffectCull(uint8_t InUse);

	// Object: Function GM.DFMPlayerGMComponent.GMSettlement
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c37c
	// Params: [ Num(1) Size(0x1) ]
	void GMSettlement(uint8_t MathOverReason);

	// Object: Function GM.DFMPlayerGMComponent.GMSetTestScanDelayDuration
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c2d8
	// Params: [ Num(1) Size(0x4) ]
	void GMSetTestScanDelayDuration(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.GMSetTestInRelink
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c22c
	// Params: [ Num(1) Size(0x1) ]
	void GMSetTestInRelink(uint8_t InRelink);

	// Object: Function GM.DFMPlayerGMComponent.GMSetTestDelayReplicate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c144
	// Params: [ Num(2) Size(0x8) ]
	void GMSetTestDelayReplicate(uint8_t bTest, float DelayDuration);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLTimelineConfig
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534c05c
	// Params: [ Num(2) Size(0x8) ]
	void GMSetSOLTimelineConfig(uint8_t Enable, int32_t Interval);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLShellingConfig
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534bf3c
	// Params: [ Num(3) Size(0xC) ]
	void GMSetSOLShellingConfig(uint8_t Enable, int32_t AreaNumLimit, int32_t ShellNumPerZone);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLParatrooperRealNumLimit
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534be60
	// Params: [ Num(2) Size(0x8) ]
	void GMSetSOLParatrooperRealNumLimit(int32_t TotalNum, int32_t NumPerZone);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLParatrooperFakeNumLimit
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534bd84
	// Params: [ Num(2) Size(0x8) ]
	void GMSetSOLParatrooperFakeNumLimit(int32_t TotalNum, int32_t NumPerZone);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLParatrooperEnable
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534bcd8
	// Params: [ Num(1) Size(0x1) ]
	void GMSetSOLParatrooperEnable(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLIntroEventState
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534bc2c
	// Params: [ Num(1) Size(0x10) ]
	void GMSetSOLIntroEventState(struct FString EventIdsStr);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSOLHolidayEventIdArray
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534bb80
	// Params: [ Num(1) Size(0x10) ]
	void GMSetSOLHolidayEventIdArray(struct FString HolidayEventIdsStr);

	// Object: Function GM.DFMPlayerGMComponent.GMSetShellingFX
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534bad4
	// Params: [ Num(1) Size(0x1) ]
	void GMSetShellingFX(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetServerCVarInt
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b988
	// Params: [ Num(2) Size(0x14) ]
	void GMSetServerCVarInt(struct FString CVarName, int32_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMSetScanableEffectDuration
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b8e4
	// Params: [ Num(1) Size(0x4) ]
	void GMSetScanableEffectDuration(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.GMSetSafeBoxSkinID
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534b840
	// Params: [ Num(1) Size(0x8) ]
	void GMSetSafeBoxSkinID(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMSetReplicationVolumeEnableGlobal
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b794
	// Params: [ Num(1) Size(0x1) ]
	void GMSetReplicationVolumeEnableGlobal(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetReplicationVolumeEnableConnection
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b6e8
	// Params: [ Num(1) Size(0x1) ]
	void GMSetReplicationVolumeEnableConnection(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetRelinkTrackProperty
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b594
	// Params: [ Num(4) Size(0x10) ]
	void GMSetRelinkTrackProperty(float Param1, float Param2, float param3, float paramFactor);

	// Object: Function GM.DFMPlayerGMComponent.GMSetRelinkPerformDataByConfigId
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b4b0
	// Params: [ Num(2) Size(0x5) ]
	void GMSetRelinkPerformDataByConfigId(int32_t ConfigId, uint8_t bSpecial);

	// Object: Function GM.DFMPlayerGMComponent.GMSetRecycleTime
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b40c
	// Params: [ Num(1) Size(0x4) ]
	void GMSetRecycleTime(int32_t InRecycleTime);

	// Object: Function GM.DFMPlayerGMComponent.GMSetPickupInfosDis
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534b368
	// Params: [ Num(1) Size(0x4) ]
	void GMSetPickupInfosDis(float Dis);

	// Object: Function GM.DFMPlayerGMComponent.GMSetPickupCullScreenSize
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534b288
	// Params: [ Num(2) Size(0x8) ]
	void GMSetPickupCullScreenSize(int32_t InID, float CullScreenSize);

	// Object: Function GM.DFMPlayerGMComponent.GMSetPanningRule
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534b1e4
	// Params: [ Num(1) Size(0x4) ]
	void GMSetPanningRule(int32_t Rule);

	// Object: Function GM.DFMPlayerGMComponent.GMSetNeedCheckAndRefresh
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b138
	// Params: [ Num(1) Size(0x1) ]
	void GMSetNeedCheckAndRefresh(uint8_t InbNeed);

	// Object: Function GM.DFMPlayerGMComponent.GMSetNearlyThreshold
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534b094
	// Params: [ Num(1) Size(0x4) ]
	void GMSetNearlyThreshold(float Dis);

	// Object: Function GM.DFMPlayerGMComponent.GMSetMaxSubstepsDeltaTime
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534aff0
	// Params: [ Num(1) Size(0x4) ]
	void GMSetMaxSubstepsDeltaTime(float DeltaTime);

	// Object: Function GM.DFMPlayerGMComponent.GMSetMaxSubsteps
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534af4c
	// Params: [ Num(1) Size(0x4) ]
	void GMSetMaxSubsteps(int32_t MaxSubsteps);

	// Object: Function GM.DFMPlayerGMComponent.GMSetMaxReceiveValue
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ae64
	// Params: [ Num(2) Size(0x10) ]
	void GMSetMaxReceiveValue(uint8_t bDaily, int64_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMSetMatchTime
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534adc0
	// Params: [ Num(1) Size(0x4) ]
	void GMSetMatchTime(int32_t MatchTime);

	// Object: Function GM.DFMPlayerGMComponent.GMSetMapLevel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534ad1c
	// Params: [ Num(1) Size(0x4) ]
	void GMSetMapLevel(int32_t MapLevel);

	// Object: Function GM.DFMPlayerGMComponent.GMSetMapId
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ac78
	// Params: [ Num(1) Size(0x4) ]
	void GMSetMapId(int32_t MapID);

	// Object: Function GM.DFMPlayerGMComponent.GMSetItemCarryOutRemainNum
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534ab98
	// Params: [ Num(2) Size(0xC) ]
	void GMSetItemCarryOutRemainNum(uint64_t ItemID, int32_t RemainNum);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInterlayerEffectDuration
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534aaf4
	// Params: [ Num(1) Size(0x4) ]
	void GMSetInterlayerEffectDuration(float Duration);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInteractSystemDSCheck
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534aa48
	// Params: [ Num(1) Size(0x1) ]
	void GMSetInteractSystemDSCheck(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInteractOutlineLaziedOpened
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a99c
	// Params: [ Num(1) Size(0x1) ]
	void GMSetInteractOutlineLaziedOpened(uint8_t InbOpened);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInteractorUseSceneQuery
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a8f0
	// Params: [ Num(1) Size(0x1) ]
	void GMSetInteractorUseSceneQuery(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInteractorSceneQueryRadius
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a84c
	// Params: [ Num(1) Size(0x4) ]
	void GMSetInteractorSceneQueryRadius(float InRadius);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInteractorDetectInterval
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a7a8
	// Params: [ Num(1) Size(0x4) ]
	void GMSetInteractorDetectInterval(float InInterval);

	// Object: Function GM.DFMPlayerGMComponent.GMSetInteractorCheckCollisionChannel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a6fc
	// Params: [ Num(1) Size(0x1) ]
	void GMSetInteractorCheckCollisionChannel(uint8_t InbUsePawn);

	// Object: Function GM.DFMPlayerGMComponent.GMSetHRTFs
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a658
	// Params: [ Num(1) Size(0x4) ]
	void GMSetHRTFs(int32_t HRTFIndex);

	// Object: Function GM.DFMPlayerGMComponent.GMSetGamepadAutoSprintMinThreshold
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534a5b4
	// Params: [ Num(1) Size(0x4) ]
	void GMSetGamepadAutoSprintMinThreshold(float Threshold);

	// Object: Function GM.DFMPlayerGMComponent.GMSetGameAIDifficulty
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a510
	// Params: [ Num(1) Size(0x4) ]
	void GMSetGameAIDifficulty(int32_t AILevel);

	// Object: Function GM.DFMPlayerGMComponent.GMSetFingerprint
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a434
	// Params: [ Num(2) Size(0x8) ]
	void GMSetFingerprint(int32_t ConfigId, int32_t Difficulty);

	// Object: Function GM.DFMPlayerGMComponent.GMSetFallout
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534a390
	// Params: [ Num(1) Size(0x4) ]
	void GMSetFallout(float Value);

	// Object: Function GM.DFMPlayerGMComponent.GMSetDSOpenCloseDoorSpeedScale
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a23c
	// Params: [ Num(4) Size(0x10) ]
	void GMSetDSOpenCloseDoorSpeedScale(float RotOpen, float RotClose, float SlideOpen, float SlideClose);

	// Object: Function GM.DFMPlayerGMComponent.GMSetDropLogicCounter
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534a160
	// Params: [ Num(2) Size(0x8) ]
	void GMSetDropLogicCounter(uint32_t Key, uint32_t InCounter);

	// Object: Function GM.DFMPlayerGMComponent.GMSetDecipherTime
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534a0bc
	// Params: [ Num(1) Size(0x4) ]
	void GMSetDecipherTime(int32_t InDecipherTime);

	// Object: Function GM.DFMPlayerGMComponent.GMSetDebugTransform
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15349fd4
	// Params: [ Num(2) Size(0x9) ]
	void GMSetDebugTransform(uint64_t PlayerUin, uint8_t ToServer);

	// Object: Function GM.DFMPlayerGMComponent.GMSetDeadBoxType
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349f30
	// Params: [ Num(1) Size(0x4) ]
	void GMSetDeadBoxType(int32_t DeadBoxType);

	// Object: Function GM.DFMPlayerGMComponent.GMSetDangerLevel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349e8c
	// Params: [ Num(1) Size(0x4) ]
	void GMSetDangerLevel(int32_t InDangerLevel);

	// Object: Function GM.DFMPlayerGMComponent.GMSetCurrent
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15349de8
	// Params: [ Num(1) Size(0x4) ]
	void GMSetCurrent(uint32_t InCurrent);

	// Object: Function GM.DFMPlayerGMComponent.GMSetCloseAIHint
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349d3c
	// Params: [ Num(1) Size(0x1) ]
	void GMSetCloseAIHint(uint8_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMSetCharacterOutline
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349c08
	// Params: [ Num(3) Size(0x8) ]
	void GMSetCharacterOutline(uint8_t bAdd, uint8_t bIncludeSelf, int32_t OutLineType);

	// Object: Function GM.DFMPlayerGMComponent.GMSetCacheVehicleWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15349b18
	// Params: [ Num(2) Size(0x2) ]
	void GMSetCacheVehicleWeapon(uint8_t bEnableCache, uint8_t bCacheOnlyLastSeat);

	// Object: Function GM.DFMPlayerGMComponent.GMSetBoxMeshType
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349a74
	// Params: [ Num(1) Size(0x4) ]
	void GMSetBoxMeshType(int32_t MeshType);

	// Object: Function GM.DFMPlayerGMComponent.GMSetBattleClass
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	// Offset: 0x1534997c
	// Params: [ Num(2) Size(0x18) ]
	void GMSetBattleClass(uint32_t BattleClassId, const struct TArray<uint32_t>& AbilityIdArr);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAltarInteractLimit
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153498d8
	// Params: [ Num(1) Size(0x4) ]
	void GMSetAltarInteractLimit(int32_t InLimit);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllVehicleCloaking
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534982c
	// Params: [ Num(1) Size(0x1) ]
	void GMSetAllVehicleCloaking(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllVehicleAddComponentDamage
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534974c
	// Params: [ Num(2) Size(0xC) ]
	void GMSetAllVehicleAddComponentDamage(struct FName ComponentName, float Damage);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllRemoterCharacterAKFootSoundAttenuationScalar
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534966c
	// Params: [ Num(2) Size(0x8) ]
	void GMSetAllRemoterCharacterAKFootSoundAttenuationScalar(EGPAudioFootSoundType FootSoundType, float ScaleValue);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllRemoterCharacterAKFootSoundAttenuationByRTPC
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153495c0
	// Params: [ Num(1) Size(0x1) ]
	void GMSetAllRemoterCharacterAKFootSoundAttenuationByRTPC(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllRemoterCharacterAKAttenuationScalar
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153494e0
	// Params: [ Num(2) Size(0x8) ]
	void GMSetAllRemoterCharacterAKAttenuationScalar(EGPAudioBlueprintType AudioBlueprintType, float ScaleValue);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllPickupScanable
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349434
	// Params: [ Num(1) Size(0x1) ]
	void GMSetAllPickupScanable(uint8_t Scanable);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllOpenBoxScanable
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15349390
	// Params: [ Num(1) Size(0x4) ]
	void GMSetAllOpenBoxScanable(int32_t InDoRandom);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllOnlyScanableVisible
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153492e4
	// Params: [ Num(1) Size(0x1) ]
	void GMSetAllOnlyScanableVisible(uint8_t InVisible);

	// Object: Function GM.DFMPlayerGMComponent.GMSetAllAIInFront
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153492d0
	// Params: [ Num(0) Size(0x0) ]
	void GMSetAllAIInFront();

	// Object: Function GM.DFMPlayerGMComponent.GMSetAbilityDebugLogLevel
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15349224
	// Params: [ Num(1) Size(0x4) ]
	void GMSetAbilityDebugLogLevel(int32_t NewAbilityDebugLogLevel);

	// Object: Function GM.DFMPlayerGMComponent.GMServerWaterUpRest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15349208
	// Params: [ Num(0) Size(0x0) ]
	void GMServerWaterUpRest();

	// Object: Function GM.DFMPlayerGMComponent.GMServerWaterUp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153491ec
	// Params: [ Num(0) Size(0x0) ]
	void GMServerWaterUp();

	// Object: Function GM.DFMPlayerGMComponent.GMServerUseSKUBrick
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153491d0
	// Params: [ Num(0) Size(0x0) ]
	void GMServerUseSKUBrick();

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggleSOLTimeLineEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153491b4
	// Params: [ Num(0) Size(0x0) ]
	void GMServerTriggleSOLTimeLineEvent();

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggleBattleFieldPlayerAudio
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15349108
	// Params: [ Num(1) Size(0x4) ]
	void GMServerTriggleBattleFieldPlayerAudio(int32_t InType);

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggerSOLTrain
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153490ec
	// Params: [ Num(0) Size(0x0) ]
	void GMServerTriggerSOLTrain();

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggerFirework
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153490d0
	// Params: [ Num(0) Size(0x0) ]
	void GMServerTriggerFirework();

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggerAShellSpawn
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15349024
	// Params: [ Num(1) Size(0x4) ]
	void GMServerTriggerAShellSpawn(int32_t Delay);

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggerArenaEnd
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348f78
	// Params: [ Num(1) Size(0x4) ]
	void GMServerTriggerArenaEnd(int32_t InType);

	// Object: Function GM.DFMPlayerGMComponent.GMServerTriggerAllPlayerToEscape
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348f5c
	// Params: [ Num(0) Size(0x0) ]
	void GMServerTriggerAllPlayerToEscape();

	// Object: Function GM.DFMPlayerGMComponent.GMServerToggleTrainSOL
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348ea8
	// Params: [ Num(1) Size(0x1) ]
	void GMServerToggleTrainSOL(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMServerToggleObserverMode
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348e8c
	// Params: [ Num(0) Size(0x0) ]
	void GMServerToggleObserverMode();

	// Object: Function GM.DFMPlayerGMComponent.GMServerTestFindPath
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15348d68
	// Params: [ Num(3) Size(0x1C) ]
	void GMServerTestFindPath(struct FVector Start, struct FVector End, float LiftTime);

	// Object: Function GM.DFMPlayerGMComponent.GMServerTestAISpawnRate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348c84
	// Params: [ Num(2) Size(0x8) ]
	void GMServerTestAISpawnRate(int32_t Count, int32_t TagId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerTeelMeLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348c68
	// Params: [ Num(0) Size(0x0) ]
	void GMServerTeelMeLocation();

	// Object: Function GM.DFMPlayerGMComponent.GMServerStartSchemeAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348bbc
	// Params: [ Num(1) Size(0x4) ]
	void GMServerStartSchemeAI(int32_t PlayerSchemeId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnVehicle
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348b08
	// Params: [ Num(1) Size(0x10) ]
	void GMServerSpawnVehicle(struct FString VehicleName);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnTotalVehicles
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348a5c
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSpawnTotalVehicles(float dist);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnSmokeActor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x153488fc
	// Params: [ Num(4) Size(0x28) ]
	void GMServerSpawnSmokeActor(int32_t SmokeId, struct FVector Location, struct FRotator Rotation, struct AGPCharacter* CharacterOwner);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnProfileVehicles
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348850
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSpawnProfileVehicles(float dist);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnPlunderContract
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348834
	// Params: [ Num(0) Size(0x0) ]
	void GMServerSpawnPlunderContract();

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348710
	// Params: [ Num(3) Size(0x14) ]
	void GMServerSpawnItem(uint32_t CharacterID, int64_t ItemID, int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnInLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15348620
	// Params: [ Num(2) Size(0x1C) ]
	void GMServerSpawnInLocation(struct FString AIName, struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnDFMCharacterInLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x153483dc
	// Params: [ Num(7) Size(0x6C) ]
	void GMServerSpawnDFMCharacterInLocation(struct FString CharacterID, struct FString BagId, struct FString ChestId, struct FString VestID, struct FString WeaponID1, struct FString WeaponID2, struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnBot
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153482a0
	// Params: [ Num(3) Size(0x21) ]
	void GMServerSpawnBot(struct FString BotName, struct FString Args, uint8_t TPToStart);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSpawnBossSquad
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348284
	// Params: [ Num(0) Size(0x0) ]
	void GMServerSpawnBossSquad();

	// Object: Function GM.DFMPlayerGMComponent.GMServerSimulateOpenBox
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153481d8
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSimulateOpenBox(int32_t Times);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSimulateCollectionDataEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534812c
	// Params: [ Num(1) Size(0x8) ]
	void GMServerSimulateCollectionDataEvent(int64_t Type);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSettlement
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15348080
	// Params: [ Num(1) Size(0x1) ]
	void GMServerSettlement(uint8_t MatchOverReason);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetStamina
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15347fd4
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetStamina(float StaminaValue);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLTimelineConfig
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347ee4
	// Params: [ Num(2) Size(0x8) ]
	void GMServerSetSOLTimelineConfig(uint8_t Enable, int32_t Interval);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLShellingConfig
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347dbc
	// Params: [ Num(3) Size(0xC) ]
	void GMServerSetSOLShellingConfig(uint8_t Enable, int32_t AreaNumLimit, int32_t ShellNumPerZone);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLParatrooperRealNumLimit
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347cd8
	// Params: [ Num(2) Size(0x8) ]
	void GMServerSetSOLParatrooperRealNumLimit(int32_t TotalNum, int32_t NumPerZone);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLParatrooperFakeNumLimit
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347bf4
	// Params: [ Num(2) Size(0x8) ]
	void GMServerSetSOLParatrooperFakeNumLimit(int32_t TotalNum, int32_t NumPerZone);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLParatrooperEnable
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347b40
	// Params: [ Num(1) Size(0x1) ]
	void GMServerSetSOLParatrooperEnable(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLIntroEventState
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347a8c
	// Params: [ Num(1) Size(0x10) ]
	void GMServerSetSOLIntroEventState(struct FString EventIdsStr);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSOLHolidayEventIdArray
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153479d8
	// Params: [ Num(1) Size(0x10) ]
	void GMServerSetSOLHolidayEventIdArray(struct FString HolidayEventIdsStr);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetServerCVarInt
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153478e8
	// Params: [ Num(2) Size(0x14) ]
	void GMServerSetServerCVarInt(struct FString CVarName, int32_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetSafeBoxSkinID
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534783c
	// Params: [ Num(1) Size(0x8) ]
	void GMServerSetSafeBoxSkinID(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetReplicationVolumeEnableGlobal
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347788
	// Params: [ Num(1) Size(0x1) ]
	void GMServerSetReplicationVolumeEnableGlobal(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetReplicationVolumeEnableConnection
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153476d4
	// Params: [ Num(1) Size(0x1) ]
	void GMServerSetReplicationVolumeEnableConnection(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetRecycleTime
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347628
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetRecycleTime(int32_t InRecycleTime);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetMatchTime
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534757c
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetMatchTime(int32_t MatchTime);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetMapLevel
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153474d0
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetMapLevel(int32_t MapLevel);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetGameAIDifficultyStatic
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x15347400
	// Params: [ Num(2) Size(0xC) ]
	static void GMServerSetGameAIDifficultyStatic(struct UObject* Context, int32_t AILevel);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetGameAIDifficulty
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347354
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetGameAIDifficulty(int32_t AILevel);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetFingerprint
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347270
	// Params: [ Num(2) Size(0x8) ]
	void GMServerSetFingerprint(int32_t ConfigId, int32_t Difficulty);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetDecipherTime
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153471c4
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetDecipherTime(int32_t InDecipherTime);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetDeadBoxType
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347118
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetDeadBoxType(int32_t DeadBoxType);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetCloseAIHint
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15347064
	// Params: [ Num(1) Size(0x1) ]
	void GMServerSetCloseAIHint(uint8_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetBoxMeshType
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346fb8
	// Params: [ Num(1) Size(0x4) ]
	void GMServerSetBoxMeshType(int32_t MeshType);

	// Object: Function GM.DFMPlayerGMComponent.GMServerSetAllVehicleCloaking
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346f04
	// Params: [ Num(1) Size(0x1) ]
	void GMServerSetAllVehicleCloaking(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMServerRunPilotVoxelization
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15346db0
	// Params: [ Num(4) Size(0x10) ]
	void GMServerRunPilotVoxelization(float boxX, float boxY, float boxZ, float BigBoxSize);

	// Object: Function GM.DFMPlayerGMComponent.GMServerRotateCurrentDriveVehicle
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346c90
	// Params: [ Num(3) Size(0xC) ]
	void GMServerRotateCurrentDriveVehicle(float Roll, float Pitch, float Yaw);

	// Object: Function GM.DFMPlayerGMComponent.GMServerRestartAISpawners
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346c74
	// Params: [ Num(0) Size(0x0) ]
	void GMServerRestartAISpawners();

	// Object: Function GM.DFMPlayerGMComponent.GMServerResetExitTrigger
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346c58
	// Params: [ Num(0) Size(0x0) ]
	void GMServerResetExitTrigger();

	// Object: Function GM.DFMPlayerGMComponent.GMServerResetAISpawnTemplate
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346b68
	// Params: [ Num(2) Size(0x14) ]
	void GMServerResetAISpawnTemplate(struct FString TemplateName, int32_t ActivityId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerRemoveQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346abc
	// Params: [ Num(1) Size(0x8) ]
	void GMServerRemoveQuest(int64_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerRefreshGenerator
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346a10
	// Params: [ Num(1) Size(0x4) ]
	void GMServerRefreshGenerator(int32_t SpawnID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerReducePlayerExitEscapeCount
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346964
	// Params: [ Num(1) Size(0x4) ]
	void GMServerReducePlayerExitEscapeCount(int32_t ReduceEscapeCount);

	// Object: Function GM.DFMPlayerGMComponent.GMServerReducePlayerExitCountDownTime
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153468b8
	// Params: [ Num(1) Size(0x4) ]
	void GMServerReducePlayerExitCountDownTime(float ReduceCountDownTime);

	// Object: Function GM.DFMPlayerGMComponent.GMServerRangeScan
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153467dc
	// Params: [ Num(2) Size(0x8) ]
	void GMServerRangeScan(float Dis, float Angle);

	// Object: Function GM.DFMPlayerGMComponent.GMServerPrintWorldActor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153467c0
	// Params: [ Num(0) Size(0x0) ]
	void GMServerPrintWorldActor();

	// Object: Function GM.DFMPlayerGMComponent.GMServerPlayCutScene
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346714
	// Params: [ Num(1) Size(0x8) ]
	void GMServerPlayCutScene(struct FName Tag);

	// Object: Function GM.DFMPlayerGMComponent.GMServerOpenAllDoor
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153466f8
	// Params: [ Num(0) Size(0x0) ]
	void GMServerOpenAllDoor();

	// Object: Function GM.DFMPlayerGMComponent.GMServerMPResetDifficultPool
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346644
	// Params: [ Num(1) Size(0x10) ]
	void GMServerMPResetDifficultPool(struct FString StrDifficulty);

	// Object: Function GM.DFMPlayerGMComponent.GMServerMPResetDifficultName
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346590
	// Params: [ Num(1) Size(0x10) ]
	void GMServerMPResetDifficultName(struct FString StrDifficulty);

	// Object: Function GM.DFMPlayerGMComponent.GMServerMPFulfullAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153464e4
	// Params: [ Num(1) Size(0x4) ]
	void GMServerMPFulfullAI(int32_t MaxCountPerSide);

	// Object: Function GM.DFMPlayerGMComponent.GMServerMPFRemoveAllAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153464c8
	// Params: [ Num(0) Size(0x0) ]
	void GMServerMPFRemoveAllAI();

	// Object: Function GM.DFMPlayerGMComponent.GMServerMPAiFunc
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153463d8
	// Params: [ Num(2) Size(0x14) ]
	void GMServerMPAiFunc(struct FString Name, float Val);

	// Object: Function GM.DFMPlayerGMComponent.GMServerKillAINotRomytheus
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534632c
	// Params: [ Num(1) Size(0x4) ]
	void GMServerKillAINotRomytheus(float diatance);

	// Object: Function GM.DFMPlayerGMComponent.GMServerKillAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346280
	// Params: [ Num(1) Size(0x4) ]
	void GMServerKillAI(float diatance);

	// Object: Function GM.DFMPlayerGMComponent.GMServerHackSOLTrain
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346264
	// Params: [ Num(0) Size(0x0) ]
	void GMServerHackSOLTrain();

	// Object: Function GM.DFMPlayerGMComponent.GMServerGMSetAllAIInFront
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15346248
	// Params: [ Num(0) Size(0x0) ]
	void GMServerGMSetAllAIInFront();

	// Object: Function GM.DFMPlayerGMComponent.GMServerGetOverLoadEquipment
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534619c
	// Params: [ Num(1) Size(0x4) ]
	void GMServerGetOverLoadEquipment(int32_t OverLoadType);

	// Object: Function GM.DFMPlayerGMComponent.GMServerGetAiDifficultyInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x153460f0
	// Params: [ Num(1) Size(0x4) ]
	void GMServerGetAiDifficultyInfo(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.GMServerForceSOLMajorEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153460d4
	// Params: [ Num(0) Size(0x0) ]
	void GMServerForceSOLMajorEvent();

	// Object: Function GM.DFMPlayerGMComponent.GMServerForceSOLEvacuationEvent
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153460b8
	// Params: [ Num(0) Size(0x0) ]
	void GMServerForceSOLEvacuationEvent();

	// Object: Function GM.DFMPlayerGMComponent.GMServerForceMoveVehicle
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345f54
	// Params: [ Num(4) Size(0x1C) ]
	void GMServerForceMoveVehicle(struct TArray<struct AActor*> TargetVehicleArray, float XOffset, float YOffset, float ZOffset);

	// Object: Function GM.DFMPlayerGMComponent.GMServerForceFireCrackerRankId
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345ea8
	// Params: [ Num(1) Size(0x4) ]
	void GMServerForceFireCrackerRankId(int32_t RankId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerForceCountDownTriggerRealTime
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345db8
	// Params: [ Num(2) Size(0x18) ]
	void GMServerForceCountDownTriggerRealTime(int32_t TriggerId, struct FString RealTriggerTime);

	// Object: Function GM.DFMPlayerGMComponent.GMServerFinishQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345cd4
	// Params: [ Num(2) Size(0x10) ]
	void GMServerFinishQuest(int64_t QuestID, int64_t QuestObjectId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerExportPxScene
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345cb8
	// Params: [ Num(0) Size(0x0) ]
	void GMServerExportPxScene();

	// Object: Function GM.DFMPlayerGMComponent.GMServerExitJailBreak
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345c0c
	// Params: [ Num(1) Size(0x8) ]
	void GMServerExitJailBreak(struct AGPPlayerState* GPPlayerState);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDropAllBagItems
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345bf0
	// Params: [ Num(0) Size(0x0) ]
	void GMServerDropAllBagItems();

	// Object: Function GM.DFMPlayerGMComponent.GMServerDPVSForceVisible
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345b08
	// Params: [ Num(2) Size(0x8) ]
	void GMServerDPVSForceVisible(int32_t Mode, float DistParam);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDisposalBombs
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345a5c
	// Params: [ Num(1) Size(0x4) ]
	void GMServerDisposalBombs(int32_t InCount);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDisableAllDoorBySpecies
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153459a8
	// Params: [ Num(1) Size(0x1) ]
	void GMServerDisableAllDoorBySpecies(uint8_t bDisable);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDetectRangeInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153458c0
	// Params: [ Num(2) Size(0x8) ]
	void GMServerDetectRangeInfo(int32_t State, float radius);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDestroyCharacter
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153458a4
	// Params: [ Num(0) Size(0x0) ]
	void GMServerDestroyCharacter();

	// Object: Function GM.DFMPlayerGMComponent.GMServerDesSingleItemBreak
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153457b4
	// Params: [ Num(2) Size(0x14) ]
	void GMServerDesSingleItemBreak(struct FString ObjectPath, int32_t AttackerValueId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDesRemoveCraterMeshes
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345708
	// Params: [ Num(1) Size(0x8) ]
	void GMServerDesRemoveCraterMeshes(struct FName SectorID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerDesAddBreakableItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|HasDefaults]
	// Offset: 0x15345618
	// Params: [ Num(2) Size(0x1C) ]
	void GMServerDesAddBreakableItem(struct FString ObjectPath, struct FVector Location);

	// Object: Function GM.DFMPlayerGMComponent.GMServerCommand
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534556c
	// Params: [ Num(1) Size(0x10) ]
	void GMServerCommand(struct FString Cmd);

	// Object: Function GM.DFMPlayerGMComponent.GMServerCloseVehicleCollision
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345550
	// Params: [ Num(0) Size(0x0) ]
	void GMServerCloseVehicleCollision();

	// Object: Function GM.DFMPlayerGMComponent.GMServerChangeTODType
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153454a4
	// Params: [ Num(1) Size(0x8) ]
	void GMServerChangeTODType(int64_t WeatherID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerChangeLaserEmitterConfig
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345360
	// Params: [ Num(3) Size(0x3) ]
	void GMServerChangeLaserEmitterConfig(uint8_t bEnableLaserAtStart, uint8_t bDisablePermanentLaserWhenNoPlayer, uint8_t bEnableServerActiveLaserPSC);

	// Object: Function GM.DFMPlayerGMComponent.GMServerCancelNewContractQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345344
	// Params: [ Num(0) Size(0x0) ]
	void GMServerCancelNewContractQuest();

	// Object: Function GM.DFMPlayerGMComponent.GMServerBreakableRecoveryAll
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345328
	// Params: [ Num(0) Size(0x0) ]
	void GMServerBreakableRecoveryAll();

	// Object: Function GM.DFMPlayerGMComponent.GMServerBreakableItemSetHugeDamage
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345274
	// Params: [ Num(1) Size(0x1) ]
	void GMServerBreakableItemSetHugeDamage(uint8_t IsOpen);

	// Object: Function GM.DFMPlayerGMComponent.GMServerBreakableBreakAll
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345258
	// Params: [ Num(0) Size(0x0) ]
	void GMServerBreakableBreakAll();

	// Object: Function GM.DFMPlayerGMComponent.GMServerBPDisableDelay
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534523c
	// Params: [ Num(0) Size(0x0) ]
	void GMServerBPDisableDelay();

	// Object: Function GM.DFMPlayerGMComponent.GMServerBattleFieldEndMatchCamp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345190
	// Params: [ Num(1) Size(0x4) ]
	void GMServerBattleFieldEndMatchCamp(int32_t Camp);

	// Object: Function GM.DFMPlayerGMComponent.GMServerBattleFieldEndMatch
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345174
	// Params: [ Num(0) Size(0x0) ]
	void GMServerBattleFieldEndMatch();

	// Object: Function GM.DFMPlayerGMComponent.GMServerBattleFieldCampScoreTrigger
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15345090
	// Params: [ Num(2) Size(0x8) ]
	void GMServerBattleFieldCampScoreTrigger(int32_t Camp, int32_t Score);

	// Object: Function GM.DFMPlayerGMComponent.GMServerBanNearestPlayer
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534507c
	// Params: [ Num(0) Size(0x0) ]
	void GMServerBanNearestPlayer();

	// Object: Function GM.DFMPlayerGMComponent.GMServerAiTestFunc
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344f48
	// Params: [ Num(3) Size(0x24) ]
	void GMServerAiTestFunc(struct FString Name, struct FString Param, float Val);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAirDrop
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344dec
	// Params: [ Num(4) Size(0x10) ]
	void GMServerAirDrop(int32_t GroupID, int32_t AirDropIndex, int32_t TimeStart, int32_t TimeEnd);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAiClosestSpeak
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344d40
	// Params: [ Num(1) Size(0x4) ]
	void GMServerAiClosestSpeak(int32_t SpeakId);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAIClosestPlayMusic
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344c94
	// Params: [ Num(1) Size(0x8) ]
	void GMServerAIClosestPlayMusic(struct FName Music);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAiClosestGroupVoice
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344be8
	// Params: [ Num(1) Size(0x8) ]
	void GMServerAiClosestGroupVoice(struct FName Voice);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAddPlayerObjectionForTestMPQuestShow
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344ac8
	// Params: [ Num(3) Size(0x14) ]
	void GMServerAddPlayerObjectionForTestMPQuestShow(int64_t TaskID, int64_t ID, int32_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAddHelicopterRange
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534499c
	// Params: [ Num(3) Size(0x9) ]
	void GMServerAddHelicopterRange(int32_t IconIndex, float Range, uint8_t Active);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAddDynamicLevelGroup
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153448f0
	// Params: [ Num(1) Size(0x8) ]
	void GMServerAddDynamicLevelGroup(struct FName GroupID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAddAI2LocalTeam
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534480c
	// Params: [ Num(2) Size(0x8) ]
	void GMServerAddAI2LocalTeam(int32_t LocalCampID, int32_t LocalTeamID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerActiveFireCrackerEmitterGroup
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344758
	// Params: [ Num(1) Size(0x10) ]
	void GMServerActiveFireCrackerEmitterGroup(struct FString EmitterGroupIds);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAcceptNewQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153446ac
	// Params: [ Num(1) Size(0x8) ]
	void GMServerAcceptNewQuest(int64_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMServerAcceptNewContractQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344600
	// Params: [ Num(1) Size(0x8) ]
	void GMServerAcceptNewContractQuest(int64_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMSendHongBao
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15344524
	// Params: [ Num(2) Size(0x10) ]
	void GMSendHongBao(uint64_t ReceiverPlayerId, uint64_t ItemGid);

	// Object: Function GM.DFMPlayerGMComponent.GMSendEvent_Server
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15344434
	// Params: [ Num(2) Size(0x18) ]
	void GMSendEvent_Server(int32_t ModeId, struct FString Tag);

	// Object: Function GM.DFMPlayerGMComponent.GMSendEvent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153442fc
	// Params: [ Num(2) Size(0x18) ]
	void GMSendEvent(int32_t ModeId, struct FString Tag);

	// Object: Function GM.DFMPlayerGMComponent.GMRunPilotVoxelizationClientShow
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x153442e0
	// Params: [ Num(0) Size(0x0) ]
	void GMRunPilotVoxelizationClientShow();

	// Object: Function GM.DFMPlayerGMComponent.GMRotateCurrentDriveVehicle
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153441c8
	// Params: [ Num(3) Size(0xC) ]
	void GMRotateCurrentDriveVehicle(float Roll, float Pitch, float Yaw);

	// Object: Function GM.DFMPlayerGMComponent.GMRestartAISpawners
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153441b4
	// Params: [ Num(0) Size(0x0) ]
	void GMRestartAISpawners();

	// Object: Function GM.DFMPlayerGMComponent.GMResetTriggerExitByIndex
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15344110
	// Params: [ Num(1) Size(0x4) ]
	void GMResetTriggerExitByIndex(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.GMResetRemoterCharacterAKFootSoundAttenuationScalar
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153440fc
	// Params: [ Num(0) Size(0x0) ]
	void GMResetRemoterCharacterAKFootSoundAttenuationScalar();

	// Object: Function GM.DFMPlayerGMComponent.GMResetPlayerState
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153440e0
	// Params: [ Num(0) Size(0x0) ]
	void GMResetPlayerState();

	// Object: Function GM.DFMPlayerGMComponent.GMResetHUD
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153440cc
	// Params: [ Num(0) Size(0x0) ]
	void GMResetHUD();

	// Object: Function GM.DFMPlayerGMComponent.GMResetExitTrigger
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153440b8
	// Params: [ Num(0) Size(0x0) ]
	void GMResetExitTrigger();

	// Object: Function GM.DFMPlayerGMComponent.GMResetAllRemoterCharacterAKAttenuationScalar
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15344014
	// Params: [ Num(1) Size(0x1) ]
	void GMResetAllRemoterCharacterAKAttenuationScalar(EGPAudioBlueprintType AudioBlueprintType);

	// Object: Function GM.DFMPlayerGMComponent.GMResetAllAbility
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15344000
	// Params: [ Num(0) Size(0x0) ]
	void GMResetAllAbility();

	// Object: Function GM.DFMPlayerGMComponent.GMResetAISpawnTemplate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343f18
	// Params: [ Num(2) Size(0x14) ]
	void GMResetAISpawnTemplate(struct FString TemplateName, int32_t ActivityId);

	// Object: Function GM.DFMPlayerGMComponent.GMReset
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15343efc
	// Params: [ Num(0) Size(0x0) ]
	void GMReset();

	// Object: Function GM.DFMPlayerGMComponent.GmRequestWeaponContexts
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343ee8
	// Params: [ Num(0) Size(0x0) ]
	void GmRequestWeaponContexts();

	// Object: Function GM.DFMPlayerGMComponent.GMRequestSubtitleSequence
	// Flags: [Final|Exec|Native|Public|HasOutParms]
	// Offset: 0x15343df8
	// Params: [ Num(2) Size(0x9) ]
	void GMRequestSubtitleSequence(const struct FName& SubtitleSeqId, ESubtitleSequenceType SubtitleSeqType);

	// Object: Function GM.DFMPlayerGMComponent.GMRequestPrintWeaponInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343de4
	// Params: [ Num(0) Size(0x0) ]
	void GMRequestPrintWeaponInfo();

	// Object: Function GM.DFMPlayerGMComponent.GMRequestNewWorldOrigin
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343ccc
	// Params: [ Num(3) Size(0xC) ]
	void GMRequestNewWorldOrigin(int32_t X, int32_t Y, int32_t Z);

	// Object: Function GM.DFMPlayerGMComponent.GMRequestLootingBoxUnlock
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343cb8
	// Params: [ Num(0) Size(0x0) ]
	void GMRequestLootingBoxUnlock();

	// Object: Function GM.DFMPlayerGMComponent.GMReplayForceExit2Login
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343ca4
	// Params: [ Num(0) Size(0x0) ]
	void GMReplayForceExit2Login();

	// Object: Function GM.DFMPlayerGMComponent.GMRemoveQuest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343c00
	// Params: [ Num(1) Size(0x8) ]
	void GMRemoveQuest(int64_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMRemoveHudState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343b5c
	// Params: [ Num(1) Size(0x1) ]
	void GMRemoveHudState(uint8_t InHudState);

	// Object: Function GM.DFMPlayerGMComponent.GMRemoveDropLogicBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343ab8
	// Params: [ Num(1) Size(0x4) ]
	void GMRemoveDropLogicBuff(uint32_t InKey);

	// Object: Function GM.DFMPlayerGMComponent.GMRemoveBagAmmo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343aa4
	// Params: [ Num(0) Size(0x0) ]
	void GMRemoveBagAmmo();

	// Object: Function GM.DFMPlayerGMComponent.GMRefreshGenerator
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343a00
	// Params: [ Num(1) Size(0x4) ]
	void GMRefreshGenerator(int32_t SpawnID);

	// Object: Function GM.DFMPlayerGMComponent.GMReducePlayerExitEscapeCount
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534395c
	// Params: [ Num(1) Size(0x4) ]
	void GMReducePlayerExitEscapeCount(int32_t ReduceEscapeCount);

	// Object: Function GM.DFMPlayerGMComponent.GMReducePlayerExitCountDownTime
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153438b8
	// Params: [ Num(1) Size(0x4) ]
	void GMReducePlayerExitCountDownTime(float ReduceCountDownTime);

	// Object: Function GM.DFMPlayerGMComponent.GMRedBagAnimJumpToEndByItemGid
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343814
	// Params: [ Num(1) Size(0x8) ]
	void GMRedBagAnimJumpToEndByItemGid(uint64_t InItemGid);

	// Object: Function GM.DFMPlayerGMComponent.GMQuestJumpObjective
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343738
	// Params: [ Num(2) Size(0x8) ]
	void GMQuestJumpObjective(int32_t objectiveId, int32_t InstIndex);

	// Object: Function GM.DFMPlayerGMComponent.GMPseudoSeamlessEntryStart
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153435cc
	// Params: [ Num(3) Size(0x18) ]
	void GMPseudoSeamlessEntryStart(struct FString MapName, int32_t TeamStartId, int32_t extra);

	// Object: Function GM.DFMPlayerGMComponent.GMPrintWeaponStateHistory
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153435b8
	// Params: [ Num(0) Size(0x0) ]
	void GMPrintWeaponStateHistory();

	// Object: Function GM.DFMPlayerGMComponent.GMPrintInteractOutlineLaziedInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153435a4
	// Params: [ Num(0) Size(0x0) ]
	void GMPrintInteractOutlineLaziedInfo();

	// Object: Function GM.DFMPlayerGMComponent.GMPrintEnums
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153434ac
	// Params: [ Num(1) Size(0x10) ]
	void GMPrintEnums(struct FString EnumName);

	// Object: Function GM.DFMPlayerGMComponent.GMPlayMontage
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153433bc
	// Params: [ Num(2) Size(0x20) ]
	void GMPlayMontage(struct FString AnimPath, struct FString AnimationPlayTypes);

	// Object: Function GM.DFMPlayerGMComponent.GMPlayHitEffect
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343318
	// Params: [ Num(1) Size(0x4) ]
	void GMPlayHitEffect(int32_t EventType);

	// Object: Function GM.DFMPlayerGMComponent.GMPlayFootstepOnEscapedChar
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343304
	// Params: [ Num(0) Size(0x0) ]
	void GMPlayFootstepOnEscapedChar();

	// Object: Function GM.DFMPlayerGMComponent.GMPlayCutScene
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343260
	// Params: [ Num(1) Size(0x8) ]
	void GMPlayCutScene(struct FName Tag);

	// Object: Function GM.DFMPlayerGMComponent.GMPlayCurrentExitCutScene
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534324c
	// Params: [ Num(0) Size(0x0) ]
	void GMPlayCurrentExitCutScene();

	// Object: Function GM.DFMPlayerGMComponent.GMPlayCameraHitEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153430f8
	// Params: [ Num(4) Size(0x14) ]
	void GMPlayCameraHitEffect(int64_t FinalBeHitCameraMoveId, float DamageVale, float animTime, float CameraMoveScale);

	// Object: Function GM.DFMPlayerGMComponent.GMPerspective
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534304c
	// Params: [ Num(1) Size(0x1) ]
	void GMPerspective(uint8_t IsOpen);

	// Object: Function GM.DFMPlayerGMComponent.GMPCTestClientBreakableRecoveryAll
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343038
	// Params: [ Num(0) Size(0x0) ]
	void GMPCTestClientBreakableRecoveryAll();

	// Object: Function GM.DFMPlayerGMComponent.GMPause
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15343024
	// Params: [ Num(0) Size(0x0) ]
	void GMPause();

	// Object: Function GM.DFMPlayerGMComponent.GMOpenOptOnFirstRenderedDetailLog
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15343010
	// Params: [ Num(0) Size(0x0) ]
	void GMOpenOptOnFirstRenderedDetailLog();

	// Object: Function GM.DFMPlayerGMComponent.GMOpenLoadAniOnCommandDetailLog
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342ffc
	// Params: [ Num(0) Size(0x0) ]
	void GMOpenLoadAniOnCommandDetailLog();

	// Object: Function GM.DFMPlayerGMComponent.GMOpenInteractSystemDetailLog
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342fe8
	// Params: [ Num(0) Size(0x0) ]
	void GMOpenInteractSystemDetailLog();

	// Object: Function GM.DFMPlayerGMComponent.GMOpenInteractComponentTick
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342f3c
	// Params: [ Num(1) Size(0x1) ]
	void GMOpenInteractComponentTick(uint8_t InbOpen);

	// Object: Function GM.DFMPlayerGMComponent.GMOpenDSInteractSystemDetailLog
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342f28
	// Params: [ Num(0) Size(0x0) ]
	void GMOpenDSInteractSystemDetailLog();

	// Object: Function GM.DFMPlayerGMComponent.GMOpenAssaKillShowEffectInEnd
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342e7c
	// Params: [ Num(1) Size(0x1) ]
	void GMOpenAssaKillShowEffectInEnd(uint8_t InEnd);

	// Object: Function GM.DFMPlayerGMComponent.GMOpenAllDoor
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342e68
	// Params: [ Num(0) Size(0x0) ]
	void GMOpenAllDoor();

	// Object: Function GM.DFMPlayerGMComponent.GMOpenAILabDebugPanel
	// Flags: [Net|Native|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15342d80
	// Params: [ Num(2) Size(0x10) ]
	void GMOpenAILabDebugPanel(int32_t Mode, int64_t Uin);

	// Object: Function GM.DFMPlayerGMComponent.GMOnServerTeamInfoSetPlayerGamePlayState
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15342c98
	// Params: [ Num(2) Size(0xC) ]
	void GMOnServerTeamInfoSetPlayerGamePlayState(struct ADFMPlayerState* InPlayerState, int32_t InPlayerGamePlayState);

	// Object: Function GM.DFMPlayerGMComponent.GMNotAllowFourFingersConsole
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342c84
	// Params: [ Num(0) Size(0x0) ]
	void GMNotAllowFourFingersConsole();

	// Object: Function GM.DFMPlayerGMComponent.GMMPResetDifficultPool
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342bd8
	// Params: [ Num(1) Size(0x10) ]
	void GMMPResetDifficultPool(struct FString StrDifficulty);

	// Object: Function GM.DFMPlayerGMComponent.GMMPResetDifficultName
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342b2c
	// Params: [ Num(1) Size(0x10) ]
	void GMMPResetDifficultName(struct FString StrDifficulty);

	// Object: Function GM.DFMPlayerGMComponent.GMMPRemoveAllAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342b18
	// Params: [ Num(0) Size(0x0) ]
	void GMMPRemoveAllAI();

	// Object: Function GM.DFMPlayerGMComponent.GMMPInGameUpgradeTest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15342a74
	// Params: [ Num(1) Size(0x4) ]
	void GMMPInGameUpgradeTest(int32_t InType);

	// Object: Function GM.DFMPlayerGMComponent.GMMPFulfillAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153429d0
	// Params: [ Num(1) Size(0x4) ]
	void GMMPFulfillAI(int32_t MaxCountPerSide);

	// Object: Function GM.DFMPlayerGMComponent.GMMPAiFunc
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153428e8
	// Params: [ Num(2) Size(0x14) ]
	void GMMPAiFunc(struct FString Name, float Val);

	// Object: Function GM.DFMPlayerGMComponent.GMMoveStuckTestInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15342844
	// Params: [ Num(1) Size(0x4) ]
	void GMMoveStuckTestInfo(int32_t Type);

	// Object: Function GM.DFMPlayerGMComponent.GMModifySkillCD
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15342764
	// Params: [ Num(2) Size(0x8) ]
	void GMModifySkillCD(int32_t Index, float Speed);

	// Object: Function GM.DFMPlayerGMComponent.GMModifyAmmoToCurrent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153426c0
	// Params: [ Num(1) Size(0x4) ]
	void GMModifyAmmoToCurrent(int32_t Val);

	// Object: Function GM.DFMPlayerGMComponent.GMModifyAmmoToAll
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534261c
	// Params: [ Num(1) Size(0x4) ]
	void GMModifyAmmoToAll(int32_t Val);

	// Object: Function GM.DFMPlayerGMComponent.GMMissionRewards
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342578
	// Params: [ Num(1) Size(0x8) ]
	void GMMissionRewards(int64_t InventoryId);

	// Object: Function GM.DFMPlayerGMComponent.GMMissionInitServer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1534255c
	// Params: [ Num(0) Size(0x0) ]
	void GMMissionInitServer();

	// Object: Function GM.DFMPlayerGMComponent.GMMissionInit
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342548
	// Params: [ Num(0) Size(0x0) ]
	void GMMissionInit();

	// Object: Function GM.DFMPlayerGMComponent.GMMiniMapIndicate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153424a4
	// Params: [ Num(1) Size(0x4) ]
	void GMMiniMapIndicate(int32_t NewType);

	// Object: Function GM.DFMPlayerGMComponent.GMMemReportWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153423f8
	// Params: [ Num(1) Size(0x10) ]
	void GMMemReportWeapon(struct FString Cmd);

	// Object: Function GM.DFMPlayerGMComponent.GMMarkerDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153423e4
	// Params: [ Num(0) Size(0x0) ]
	void GMMarkerDebug();

	// Object: Function GM.DFMPlayerGMComponent.GMMallocMemory
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15342340
	// Params: [ Num(1) Size(0x4) ]
	void GMMallocMemory(int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.GMMakeAllIntoAILabAI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534232c
	// Params: [ Num(0) Size(0x0) ]
	void GMMakeAllIntoAILabAI();

	// Object: Function GM.DFMPlayerGMComponent.GMLockCamToWeapon2
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153421d8
	// Params: [ Num(4) Size(0x10) ]
	void GMLockCamToWeapon2(int32_t bEnable, float Pitch, float Yaw, float Scale);

	// Object: Function GM.DFMPlayerGMComponent.GMLockCamToWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153420f4
	// Params: [ Num(2) Size(0x5) ]
	void GMLockCamToWeapon(int32_t bEnable, uint8_t bLeft);

	// Object: Function GM.DFMPlayerGMComponent.GMLocalCloseGlitch
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15342048
	// Params: [ Num(1) Size(0x1) ]
	void GMLocalCloseGlitch(uint8_t bClose);

	// Object: Function GM.DFMPlayerGMComponent.GMLocalAcceptMission
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341fa4
	// Params: [ Num(1) Size(0x4) ]
	void GMLocalAcceptMission(int32_t missionid);

	// Object: Function GM.DFMPlayerGMComponent.GMLoadQuest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15341f00
	// Params: [ Num(1) Size(0x4) ]
	void GMLoadQuest(int32_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMLineTraceWater
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15341e18
	// Params: [ Num(2) Size(0x5) ]
	void GMLineTraceWater(float Distance, uint8_t bOnDS);

	// Object: Function GM.DFMPlayerGMComponent.GMLeftWeaponStartFire
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15341e04
	// Params: [ Num(0) Size(0x0) ]
	void GMLeftWeaponStartFire();

	// Object: Function GM.DFMPlayerGMComponent.GMLeftWeaponEndFire
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15341df0
	// Params: [ Num(0) Size(0x0) ]
	void GMLeftWeaponEndFire();

	// Object: Function GM.DFMPlayerGMComponent.GMLandingTest
	// Flags: [Final|Exec|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15341ce0
	// Params: [ Num(3) Size(0x18) ]
	void GMLandingTest(struct FVector2D LeftUp, struct FVector2D RightUp, struct FVector2D LeftDown);

	// Object: Function GM.DFMPlayerGMComponent.GMKnowBack
	// Flags: [Final|Exec|Native|Public|HasDefaults]
	// Offset: 0x15341c3c
	// Params: [ Num(1) Size(0xC) ]
	void GMKnowBack(struct FVector LocalPos);

	// Object: Function GM.DFMPlayerGMComponent.GMKillMeNoImPendingDeath
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15341c20
	// Params: [ Num(0) Size(0x0) ]
	void GMKillMeNoImPendingDeath();

	// Object: Function GM.DFMPlayerGMComponent.GMKillMe
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15341c04
	// Params: [ Num(0) Size(0x0) ]
	void GMKillMe();

	// Object: Function GM.DFMPlayerGMComponent.GMKillAllJetForTest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341bf0
	// Params: [ Num(0) Size(0x0) ]
	void GMKillAllJetForTest();

	// Object: Function GM.DFMPlayerGMComponent.GMKillAINotRomytheus
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341b4c
	// Params: [ Num(1) Size(0x4) ]
	void GMKillAINotRomytheus(float diatance);

	// Object: Function GM.DFMPlayerGMComponent.GMKillAI
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341aa8
	// Params: [ Num(1) Size(0x4) ]
	void GMKillAI(float diatance);

	// Object: Function GM.DFMPlayerGMComponent.GMKeepAllRemoterCharacterAKFootSoundAttenuationScalar
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341a04
	// Params: [ Num(1) Size(0x1) ]
	void GMKeepAllRemoterCharacterAKFootSoundAttenuationScalar(EGPAudioFootSoundType FootSoundType);

	// Object: Function GM.DFMPlayerGMComponent.GMKeepAllRemoterCharacterAKAttenuationScalarAliving
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341960
	// Params: [ Num(1) Size(0x1) ]
	void GMKeepAllRemoterCharacterAKAttenuationScalarAliving(EGPAudioBlueprintType AudioBlueprintType);

	// Object: Function GM.DFMPlayerGMComponent.GMJPSTrace
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15341798
	// Params: [ Num(6) Size(0x18) ]
	void GMJPSTrace(float Sx, float Sy, float Sz, float Ex, float Ey, float Ez);

	// Object: Function GM.DFMPlayerGMComponent.GMHurtMeBodyPart
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153416bc
	// Params: [ Num(2) Size(0x8) ]
	void GMHurtMeBodyPart(int32_t bodyPart, int32_t HurtHealthNum);

	// Object: Function GM.DFMPlayerGMComponent.GMHUDForceShowRescueWhiteDot
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15341610
	// Params: [ Num(1) Size(0x1) ]
	void GMHUDForceShowRescueWhiteDot(uint8_t InbShow);

	// Object: Function GM.DFMPlayerGMComponent.GMHideSocket
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534156c
	// Params: [ Num(1) Size(0x8) ]
	void GMHideSocket(struct FName SocketName);

	// Object: Function GM.DFMPlayerGMComponent.GMHideMySelfFromOthers
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153414c0
	// Params: [ Num(1) Size(0x1) ]
	void GMHideMySelfFromOthers(uint8_t bHide);

	// Object: Function GM.DFMPlayerGMComponent.GMHideMyself
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153413d0
	// Params: [ Num(2) Size(0x2) ]
	void GMHideMyself(uint8_t bHide, uint8_t bMuteWhenHide);

	// Object: Function GM.DFMPlayerGMComponent.GMHideMission
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153413bc
	// Params: [ Num(0) Size(0x0) ]
	void GMHideMission();

	// Object: Function GM.DFMPlayerGMComponent.GMHasEnoughSpaceToAddAmmo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153412d4
	// Params: [ Num(2) Size(0x10) ]
	void GMHasEnoughSpaceToAddAmmo(uint8_t bServer, uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMHackSOLTrain
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153412c0
	// Params: [ Num(0) Size(0x0) ]
	void GMHackSOLTrain();

	// Object: Function GM.DFMPlayerGMComponent.GmGunSwayHit
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153411e4
	// Params: [ Num(2) Size(0x8) ]
	void GmGunSwayHit(float CameraSwayHitScale, float GunSwayHitScale);

	// Object: Function GM.DFMPlayerGMComponent.GmGunSway
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153410cc
	// Params: [ Num(3) Size(0xC) ]
	void GmGunSway(int32_t GSOperation, float DirX, float DirY);

	// Object: Function GM.DFMPlayerGMComponent.GMGuideUseFrontEndUI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340f78
	// Params: [ Num(4) Size(0x10) ]
	void GMGuideUseFrontEndUI(int32_t UIType, int32_t Param1, int32_t Param2, int32_t param3);

	// Object: Function GM.DFMPlayerGMComponent.GMGuideUseFrontEndClickUI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340e9c
	// Params: [ Num(2) Size(0x8) ]
	void GMGuideUseFrontEndClickUI(int32_t ClickId, int32_t ClickType);

	// Object: Function GM.DFMPlayerGMComponent.GMGuideStartOneStep
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340df8
	// Params: [ Num(1) Size(0x4) ]
	void GMGuideStartOneStep(int32_t GuideStepId);

	// Object: Function GM.DFMPlayerGMComponent.GMGuideInGameTrigger
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340d54
	// Params: [ Num(1) Size(0x4) ]
	void GMGuideInGameTrigger(int32_t EventId);

	// Object: Function GM.DFMPlayerGMComponent.GMGuideCloseFrontEndUI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340c00
	// Params: [ Num(4) Size(0x10) ]
	void GMGuideCloseFrontEndUI(int32_t UIType, int32_t Param1, int32_t Param2, int32_t param3);

	// Object: Function GM.DFMPlayerGMComponent.GMGuideCloseFrontEndClickUI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340bec
	// Params: [ Num(0) Size(0x0) ]
	void GMGuideCloseFrontEndClickUI();

	// Object: Function GM.DFMPlayerGMComponent.GMGoTrackingPickUp
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340bd8
	// Params: [ Num(0) Size(0x0) ]
	void GMGoTrackingPickUp();

	// Object: Function GM.DFMPlayerGMComponent.GMGotoObjective
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340b34
	// Params: [ Num(1) Size(0x4) ]
	void GMGotoObjective(int32_t obojectiveid);

	// Object: Function GM.DFMPlayerGMComponent.GMGotoMissionObjective
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340a58
	// Params: [ Num(2) Size(0x8) ]
	void GMGotoMissionObjective(int32_t missionid, int32_t obojectiveid);

	// Object: Function GM.DFMPlayerGMComponent.GMGotoMarkWithNavAdjust
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340a44
	// Params: [ Num(0) Size(0x0) ]
	void GMGotoMarkWithNavAdjust();

	// Object: Function GM.DFMPlayerGMComponent.GMGotoMark
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340a30
	// Params: [ Num(0) Size(0x0) ]
	void GMGotoMark();

	// Object: Function GM.DFMPlayerGMComponent.GMGoto2D
	// Flags: [Final|Exec|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15340990
	// Params: [ Num(1) Size(0x8) ]
	void GMGoto2D(struct FVector2D Location);

	// Object: Function GM.DFMPlayerGMComponent.GMGoto
	// Flags: [Final|Exec|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x15340830
	// Params: [ Num(4) Size(0x20) ]
	void GMGoto(struct FVector Location, float Delay, uint8_t navAdjustPos, struct FRotator Dir);

	// Object: Function GM.DFMPlayerGMComponent.GMGodDamage
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340784
	// Params: [ Num(1) Size(0x1) ]
	void GMGodDamage(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GmGiveWeaponFromStr
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1534068c
	// Params: [ Num(1) Size(0x10) ]
	void GmGiveWeaponFromStr(struct FString str);

	// Object: Function GM.DFMPlayerGMComponent.GMGiveWeaponByDesc
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153405e8
	// Params: [ Num(1) Size(0x8) ]
	void GMGiveWeaponByDesc(struct UModularWeaponDesc* WeaponDesc);

	// Object: Function GM.DFMPlayerGMComponent.GMGiveWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153404b0
	// Params: [ Num(2) Size(0x18) ]
	void GMGiveWeapon(uint64_t PresetId, struct TArray<uint64_t> Items);

	// Object: Function GM.DFMPlayerGMComponent.GMGiveInfinityCarriedAmmoToCurrent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1534049c
	// Params: [ Num(0) Size(0x0) ]
	void GMGiveInfinityCarriedAmmoToCurrent();

	// Object: Function GM.DFMPlayerGMComponent.GMGiveCurrency
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153403bc
	// Params: [ Num(2) Size(0x10) ]
	void GMGiveCurrency(float InValue, int64_t FakeQuestId);

	// Object: Function GM.DFMPlayerGMComponent.GMGetTrackingItemPosition
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153403a8
	// Params: [ Num(0) Size(0x0) ]
	void GMGetTrackingItemPosition();

	// Object: Function GM.DFMPlayerGMComponent.GMGetSOLTimelineEventID
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340374
	// Params: [ Num(1) Size(0x4) ]
	int32_t GMGetSOLTimelineEventID();

	// Object: Function GM.DFMPlayerGMComponent.GMGetRedBagOnlyFromTeammate
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153402c8
	// Params: [ Num(1) Size(0x1) ]
	void GMGetRedBagOnlyFromTeammate(uint8_t bOnly);

	// Object: Function GM.DFMPlayerGMComponent.GMGetOverLoadEquipment
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15340224
	// Params: [ Num(1) Size(0x4) ]
	void GMGetOverLoadEquipment(int32_t OverLoadType);

	// Object: Function GM.DFMPlayerGMComponent.GMGetMoveStuckTestLocation
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15340098
	// Params: [ Num(5) Size(0x14) ]
	void GMGetMoveStuckTestLocation(float X, float Y, float Z, int32_t Type, int32_t DataType);

	// Object: Function GM.DFMPlayerGMComponent.GMGetCurrentFirstWeaponItemID
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ffec
	// Params: [ Num(1) Size(0x1) ]
	void GMGetCurrentFirstWeaponItemID(uint8_t bServer);

	// Object: Function GM.DFMPlayerGMComponent.GMGetCurAllCharacterAppearanceInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ffd8
	// Params: [ Num(0) Size(0x0) ]
	void GMGetCurAllCharacterAppearanceInfo();

	// Object: Function GM.DFMPlayerGMComponent.GMGetAiDifficultyInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ff34
	// Params: [ Num(1) Size(0x4) ]
	void GMGetAiDifficultyInfo(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.GMFxCleanupAcquiredPoolUnused
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ff20
	// Params: [ Num(0) Size(0x0) ]
	void GMFxCleanupAcquiredPoolUnused();

	// Object: Function GM.DFMPlayerGMComponent.GMForceUseActorLocForDFMCharacter
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533fe74
	// Params: [ Num(1) Size(0x1) ]
	void GMForceUseActorLocForDFMCharacter(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMForceTriggerExitBanner
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533fdd0
	// Params: [ Num(1) Size(0x4) ]
	void GMForceTriggerExitBanner(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.GMForceTeamDamage
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533fd24
	// Params: [ Num(1) Size(0x1) ]
	void GMForceTeamDamage(uint8_t bForce);

	// Object: Function GM.DFMPlayerGMComponent.GMForceSOLMajorEvent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533fd10
	// Params: [ Num(0) Size(0x0) ]
	void GMForceSOLMajorEvent();

	// Object: Function GM.DFMPlayerGMComponent.GMForceSOLEvacuationEvent
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533fcfc
	// Params: [ Num(0) Size(0x0) ]
	void GMForceSOLEvacuationEvent();

	// Object: Function GM.DFMPlayerGMComponent.GMForceMoveVehicle
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533fba0
	// Params: [ Num(4) Size(0x10) ]
	void GMForceMoveVehicle(uint8_t bOnlyDrivenVehicle, float XOffset, float YOffset, float ZOffset);

	// Object: Function GM.DFMPlayerGMComponent.GMForceHideInteractorOutline
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533faf4
	// Params: [ Num(1) Size(0x1) ]
	void GMForceHideInteractorOutline(uint8_t InbHide);

	// Object: Function GM.DFMPlayerGMComponent.GMForceFireCrackerRankId
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533fa50
	// Params: [ Num(1) Size(0x4) ]
	void GMForceFireCrackerRankId(int32_t RankId);

	// Object: Function GM.DFMPlayerGMComponent.GMForceFinishMission
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f9ac
	// Params: [ Num(1) Size(0x4) ]
	void GMForceFinishMission(int32_t missionid);

	// Object: Function GM.DFMPlayerGMComponent.GMForceCountDownTriggerRealTime
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f8c4
	// Params: [ Num(2) Size(0x18) ]
	void GMForceCountDownTriggerRealTime(int32_t TriggerId, struct FString RealTriggerTime);

	// Object: Function GM.DFMPlayerGMComponent.GMForceCheckGuideItem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f818
	// Params: [ Num(1) Size(0x1) ]
	void GMForceCheckGuideItem(uint8_t bForceCheckGuideItem);

	// Object: Function GM.DFMPlayerGMComponent.GMForceAllowRescue
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f76c
	// Params: [ Num(1) Size(0x1) ]
	void GMForceAllowRescue(uint8_t InbAllow);

	// Object: Function GM.DFMPlayerGMComponent.GMForceAllowDeadBody
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f6c0
	// Params: [ Num(1) Size(0x1) ]
	void GMForceAllowDeadBody(uint8_t InbAllow);

	// Object: Function GM.DFMPlayerGMComponent.GMForceAllowCarryBody
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f614
	// Params: [ Num(1) Size(0x1) ]
	void GMForceAllowCarryBody(uint8_t InbAllow);

	// Object: Function GM.DFMPlayerGMComponent.GMFootballSignAnimJumpToEndByItemGid
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f570
	// Params: [ Num(1) Size(0x8) ]
	void GMFootballSignAnimJumpToEndByItemGid(uint64_t InItemGid);

	// Object: Function GM.DFMPlayerGMComponent.GMFootballSign
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f4cc
	// Params: [ Num(1) Size(0x8) ]
	void GMFootballSign(int64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMFootballGate
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f4b8
	// Params: [ Num(0) Size(0x0) ]
	void GMFootballGate();

	// Object: Function GM.DFMPlayerGMComponent.GMFocusParticleSystem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f414
	// Params: [ Num(1) Size(0x8) ]
	void GMFocusParticleSystem(struct FName ParticleSystemName);

	// Object: Function GM.DFMPlayerGMComponent.GMFirePriorityNum
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f338
	// Params: [ Num(2) Size(0x8) ]
	void GMFirePriorityNum(int32_t P0Num, int32_t P1Num);

	// Object: Function GM.DFMPlayerGMComponent.GMFireForAI
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f324
	// Params: [ Num(0) Size(0x0) ]
	void GMFireForAI();

	// Object: Function GM.DFMPlayerGMComponent.GMFinishQuest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f248
	// Params: [ Num(2) Size(0x10) ]
	void GMFinishQuest(int64_t QuestID, int64_t QuestObjectId);

	// Object: Function GM.DFMPlayerGMComponent.GMFinishCurrentStage
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f234
	// Params: [ Num(0) Size(0x0) ]
	void GMFinishCurrentStage();

	// Object: Function GM.DFMPlayerGMComponent.GMExportAllCharacterAppearanceInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f220
	// Params: [ Num(0) Size(0x0) ]
	void GMExportAllCharacterAppearanceInfo();

	// Object: Function GM.DFMPlayerGMComponent.GMExplosionBeHitCamera
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533f17c
	// Params: [ Num(1) Size(0x4) ]
	void GMExplosionBeHitCamera(int32_t ExplosionID);

	// Object: Function GM.DFMPlayerGMComponent.GMExitJailBreak
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f168
	// Params: [ Num(0) Size(0x0) ]
	void GMExitJailBreak();

	// Object: Function GM.DFMPlayerGMComponent.GMExecuteConsoleCommandOnDS
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f0bc
	// Params: [ Num(1) Size(0x10) ]
	void GMExecuteConsoleCommandOnDS(struct FString Command);

	// Object: Function GM.DFMPlayerGMComponent.GMEquipPerk
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533f018
	// Params: [ Num(1) Size(0x8) ]
	void GMEquipPerk(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMEquipLeftWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ef74
	// Params: [ Num(1) Size(0x8) ]
	void GMEquipLeftWeapon(uint64_t WeaponID);

	// Object: Function GM.DFMPlayerGMComponent.GMEquipHelmetNightVision
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ef60
	// Params: [ Num(0) Size(0x0) ]
	void GMEquipHelmetNightVision();

	// Object: Function GM.DFMPlayerGMComponent.GMEnterRaidWorld
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ef4c
	// Params: [ Num(0) Size(0x0) ]
	void GMEnterRaidWorld();

	// Object: Function GM.DFMPlayerGMComponent.GMEnterOpenWorld
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ef38
	// Params: [ Num(0) Size(0x0) ]
	void GMEnterOpenWorld();

	// Object: Function GM.DFMPlayerGMComponent.GMEndAssaShark
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ef24
	// Params: [ Num(0) Size(0x0) ]
	void GMEndAssaShark();

	// Object: Function GM.DFMPlayerGMComponent.GMEnableXRayCheats
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ee80
	// Params: [ Num(1) Size(0x4) ]
	void GMEnableXRayCheats(int32_t xMask);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableWaterRouteVis
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533edd4
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableWaterRouteVis(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableTearOffAICharacterAfterDeath
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ed28
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableTearOffAICharacterAfterDeath(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableSelfVehicleOverrideThrottle
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ec84
	// Params: [ Num(1) Size(0x4) ]
	void GMEnableSelfVehicleOverrideThrottle(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableMpSolMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ebd8
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableMpSolMode(uint8_t RespawnSamePos);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableMissionReplay
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ebc4
	// Params: [ Num(0) Size(0x0) ]
	void GMEnableMissionReplay();

	// Object: Function GM.DFMPlayerGMComponent.GMEnableMission
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533eb18
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableMission(uint8_t B);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableInterceptItemByRemainNum
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ea6c
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableInterceptItemByRemainNum(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableFriendDamage
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e9c0
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableFriendDamage(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.GMEnableDebugVehicleHealth
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e9ac
	// Params: [ Num(0) Size(0x0) ]
	void GMEnableDebugVehicleHealth();

	// Object: Function GM.DFMPlayerGMComponent.GMEnableDebugAudioAttenuation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e998
	// Params: [ Num(0) Size(0x0) ]
	void GMEnableDebugAudioAttenuation();

	// Object: Function GM.DFMPlayerGMComponent.GMDumpHudState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e984
	// Params: [ Num(0) Size(0x0) ]
	void GMDumpHudState();

	// Object: Function GM.DFMPlayerGMComponent.GMDumpAllWidgetInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e970
	// Params: [ Num(0) Size(0x0) ]
	void GMDumpAllWidgetInfo();

	// Object: Function GM.DFMPlayerGMComponent.GMDSUseClientPosToCheckBlock
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e8c4
	// Params: [ Num(1) Size(0x1) ]
	void GMDSUseClientPosToCheckBlock(uint8_t InbUse);

	// Object: Function GM.DFMPlayerGMComponent.GMDSBanPlayer
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e820
	// Params: [ Num(1) Size(0x8) ]
	void GMDSBanPlayer(uint64_t PlayerUin);

	// Object: Function GM.DFMPlayerGMComponent.GMDropAllBagItems
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e80c
	// Params: [ Num(0) Size(0x0) ]
	void GMDropAllBagItems();

	// Object: Function GM.DFMPlayerGMComponent.GMDrawSphere
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e6b8
	// Params: [ Num(4) Size(0x10) ]
	void GMDrawSphere(float X, float Y, float Z, float radius);

	// Object: Function GM.DFMPlayerGMComponent.GMDrawCharacterMeshBounds
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e5bc
	// Params: [ Num(3) Size(0xC) ]
	void GMDrawCharacterMeshBounds(float Range, float Duration, int32_t MeshType);

	// Object: Function GM.DFMPlayerGMComponent.GMDPVSForceVisible
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e4dc
	// Params: [ Num(2) Size(0x8) ]
	void GMDPVSForceVisible(int32_t Mode, float DistParam);

	// Object: Function GM.DFMPlayerGMComponent.GMDoScan
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e4c8
	// Params: [ Num(0) Size(0x0) ]
	void GMDoScan();

	// Object: Function GM.DFMPlayerGMComponent.GMDontDestroyFootballGateNoRep
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e41c
	// Params: [ Num(1) Size(0x1) ]
	void GMDontDestroyFootballGateNoRep(uint8_t InDont);

	// Object: Function GM.DFMPlayerGMComponent.GMDisposalBombs
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e378
	// Params: [ Num(1) Size(0x4) ]
	void GMDisposalBombs(int32_t InCount);

	// Object: Function GM.DFMPlayerGMComponent.GMDisableInteractorCheckCollision
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e2cc
	// Params: [ Num(1) Size(0x1) ]
	void GMDisableInteractorCheckCollision(uint8_t InbDisable);

	// Object: Function GM.DFMPlayerGMComponent.GMDisableDebugAudioAttenuation
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e2b8
	// Params: [ Num(0) Size(0x0) ]
	void GMDisableDebugAudioAttenuation();

	// Object: Function GM.DFMPlayerGMComponent.GMDisableAllDoorBySpecies
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533e20c
	// Params: [ Num(1) Size(0x1) ]
	void GMDisableAllDoorBySpecies(uint8_t bDisable);

	// Object: Function GM.DFMPlayerGMComponent.GMDetoruTestFindCharacter
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e168
	// Params: [ Num(1) Size(0x4) ]
	void GMDetoruTestFindCharacter(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.GMDetoruTest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533e0c4
	// Params: [ Num(1) Size(0x4) ]
	void GMDetoruTest(float Distance);

	// Object: Function GM.DFMPlayerGMComponent.GMDetoruFindPath
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533dfe4
	// Params: [ Num(2) Size(0x8) ]
	void GMDetoruFindPath(float ForwardDistance, int32_t Unit);

	// Object: Function GM.DFMPlayerGMComponent.GMDetectRangeInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533df04
	// Params: [ Num(2) Size(0x8) ]
	void GMDetectRangeInfo(int32_t State, float radius);

	// Object: Function GM.DFMPlayerGMComponent.GMDestroyCharacter
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533def0
	// Params: [ Num(0) Size(0x0) ]
	void GMDestroyCharacter();

	// Object: Function GM.DFMPlayerGMComponent.GMDesSingleItemBreak
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ddbc
	// Params: [ Num(2) Size(0x14) ]
	void GMDesSingleItemBreak(struct FString ObjectPath, int32_t AttackerValueId);

	// Object: Function GM.DFMPlayerGMComponent.GMDesRemoveCraterMeshes
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533dd18
	// Params: [ Num(1) Size(0x8) ]
	void GMDesRemoveCraterMeshes(struct FName SectorID);

	// Object: Function GM.DFMPlayerGMComponent.GMDesAddBreakableItem
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533dc20
	// Params: [ Num(1) Size(0x10) ]
	void GMDesAddBreakableItem(struct FString ObjectPath);

	// Object: Function GM.DFMPlayerGMComponent.GMDebugInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533db7c
	// Params: [ Num(1) Size(0x4) ]
	void GMDebugInfo(int32_t ShowType);

	// Object: Function GM.DFMPlayerGMComponent.GMDebugAILabRot
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533dad8
	// Params: [ Num(1) Size(0x4) ]
	void GMDebugAILabRot(int32_t Open);

	// Object: Function GM.DFMPlayerGMComponent.GMDamageView
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533dac4
	// Params: [ Num(0) Size(0x0) ]
	void GMDamageView();

	// Object: Function GM.DFMPlayerGMComponent.GMCopyWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533dab0
	// Params: [ Num(0) Size(0x0) ]
	void GMCopyWeapon();

	// Object: Function GM.DFMPlayerGMComponent.GMControlAILab
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d9c8
	// Params: [ Num(2) Size(0x10) ]
	void GMControlAILab(uint8_t Open, int64_t Uin);

	// Object: Function GM.DFMPlayerGMComponent.GMConsumeCurrency
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d924
	// Params: [ Num(1) Size(0x4) ]
	void GMConsumeCurrency(float ConsumeValue);

	// Object: Function GM.DFMPlayerGMComponent.GMCompelteContract
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d880
	// Params: [ Num(1) Size(0x4) ]
	void GMCompelteContract(int32_t ContractID);

	// Object: Function GM.DFMPlayerGMComponent.GMCloseVehicleCollision
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d86c
	// Params: [ Num(0) Size(0x0) ]
	void GMCloseVehicleCollision();

	// Object: Function GM.DFMPlayerGMComponent.GMClientTryInteract
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d858
	// Params: [ Num(0) Size(0x0) ]
	void GMClientTryInteract();

	// Object: Function GM.DFMPlayerGMComponent.GMClientReceiveLocation
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x1533d7ac
	// Params: [ Num(1) Size(0xC) ]
	void GMClientReceiveLocation(struct FVector Loc);

	// Object: Function GM.DFMPlayerGMComponent.GMClientRangeScan
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d798
	// Params: [ Num(0) Size(0x0) ]
	void GMClientRangeScan();

	// Object: Function GM.DFMPlayerGMComponent.GMClientPickMandelBrick
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d784
	// Params: [ Num(0) Size(0x0) ]
	void GMClientPickMandelBrick();

	// Object: Function GM.DFMPlayerGMComponent.GMClientHoldJet
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d6d8
	// Params: [ Num(1) Size(0x1) ]
	void GMClientHoldJet(uint8_t bHold);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDrawNavEnd
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533d62c
	// Params: [ Num(1) Size(0x4) ]
	void GMClientDrawNavEnd(int32_t timems);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDrawNavBegin
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533d580
	// Params: [ Num(1) Size(0x4) ]
	void GMClientDrawNavBegin(int32_t timems);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDrawNav
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533d3bc
	// Params: [ Num(5) Size(0x50) ]
	void GMClientDrawNav(struct TArray<struct FVector> Verts, struct TArray<int32_t> nverts, struct TArray<struct FVector> centers, struct TArray<int32_t> Regions, struct TArray<struct FVector> Links);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDrawFoliageEnd
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533d310
	// Params: [ Num(1) Size(0x4) ]
	void GMClientDrawFoliageEnd(int32_t timems);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDrawFoliageBegin
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533d264
	// Params: [ Num(1) Size(0x4) ]
	void GMClientDrawFoliageBegin(int32_t timems);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDrawFoliage
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x1533d138
	// Params: [ Num(3) Size(0x20) ]
	void GMClientDrawFoliage(struct TArray<struct FIntVector> Voxels, struct FVector SVOOrigin, float SVOSize);

	// Object: Function GM.DFMPlayerGMComponent.GMClientDecipherMandelBrick
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d124
	// Params: [ Num(0) Size(0x0) ]
	void GMClientDecipherMandelBrick();

	// Object: Function GM.DFMPlayerGMComponent.GMClientBreakableRecoveryAll
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533d110
	// Params: [ Num(0) Size(0x0) ]
	void GMClientBreakableRecoveryAll();

	// Object: Function GM.DFMPlayerGMComponent.GMClearWeaponHiddenTag
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d0fc
	// Params: [ Num(0) Size(0x0) ]
	void GMClearWeaponHiddenTag();

	// Object: Function GM.DFMPlayerGMComponent.GMClearAllAbility
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d0e8
	// Params: [ Num(0) Size(0x0) ]
	void GMClearAllAbility();

	// Object: Function GM.DFMPlayerGMComponent.GMCleanWaterDataCheckCacheData
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d0d4
	// Params: [ Num(0) Size(0x0) ]
	void GMCleanWaterDataCheckCacheData();

	// Object: Function GM.DFMPlayerGMComponent.GMCleanupAcquiredPickupPoolUnused
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d0c0
	// Params: [ Num(0) Size(0x0) ]
	void GMCleanupAcquiredPickupPoolUnused();

	// Object: Function GM.DFMPlayerGMComponent.GMCheckNotInterceptPickup
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d0ac
	// Params: [ Num(0) Size(0x0) ]
	void GMCheckNotInterceptPickup();

	// Object: Function GM.DFMPlayerGMComponent.GMCheckInterceptAndAdd
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533d098
	// Params: [ Num(0) Size(0x0) ]
	void GMCheckInterceptAndAdd();

	// Object: Function GM.DFMPlayerGMComponent.GMChanneInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533cff4
	// Params: [ Num(1) Size(0x4) ]
	void GMChanneInfo(int32_t ChannelIndex);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeVehicleSkinByID
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533cf50
	// Params: [ Num(1) Size(0x8) ]
	void GMChangeVehicleSkinByID(uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeVehicleSkin
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ceac
	// Params: [ Num(1) Size(0x8) ]
	void GMChangeVehicleSkin(uint64_t SkinId);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeTODType
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ce08
	// Params: [ Num(1) Size(0x8) ]
	void GMChangeTODType(int64_t WeatherID);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeSol2Mp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533cd10
	// Params: [ Num(2) Size(0x2) ]
	void GMChangeSol2Mp(uint8_t ChangeOrRevert, uint8_t RespawnSamePos);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeSkillCD
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533cc28
	// Params: [ Num(2) Size(0x8) ]
	void GMChangeSkillCD(int32_t Index, float Speed);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeRain
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533cb84
	// Params: [ Num(1) Size(0x8) ]
	void GMChangeRain(int64_t RainId);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeMPItem
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533cad8
	// Params: [ Num(1) Size(0x8) ]
	void GMChangeMPItem(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeLaserEmitterConfig
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c970
	// Params: [ Num(3) Size(0x3) ]
	void GMChangeLaserEmitterConfig(uint8_t bEnableLaserAtStart, uint8_t bDisablePermanentLaserWhenNoPlayer, uint8_t bEnableServerActiveLaserPSC);

	// Object: Function GM.DFMPlayerGMComponent.GMChangeCampIdToRebornMode
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c95c
	// Params: [ Num(0) Size(0x0) ]
	void GMChangeCampIdToRebornMode();

	// Object: Function GM.DFMPlayerGMComponent.GMChangeBreakableItemMatrial
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c948
	// Params: [ Num(0) Size(0x0) ]
	void GMChangeBreakableItemMatrial();

	// Object: Function GM.DFMPlayerGMComponent.GMChangeAvatar
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c8a4
	// Params: [ Num(1) Size(0x8) ]
	void GMChangeAvatar(struct FName AvatarID);

	// Object: Function GM.DFMPlayerGMComponent.GMCD
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c788
	// Params: [ Num(3) Size(0xC) ]
	void GMCD(int32_t operate, int32_t Slot, float Time);

	// Object: Function GM.DFMPlayerGMComponent.GMCancelRequestLootingBoxUnlock
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c774
	// Params: [ Num(0) Size(0x0) ]
	void GMCancelRequestLootingBoxUnlock();

	// Object: Function GM.DFMPlayerGMComponent.GMCancelFocusParticleSystem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c760
	// Params: [ Num(0) Size(0x0) ]
	void GMCancelFocusParticleSystem();

	// Object: Function GM.DFMPlayerGMComponent.GMCancelContract
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c74c
	// Params: [ Num(0) Size(0x0) ]
	void GMCancelContract();

	// Object: Function GM.DFMPlayerGMComponent.GMBreakthrougShowLodDebug
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c738
	// Params: [ Num(0) Size(0x0) ]
	void GMBreakthrougShowLodDebug();

	// Object: Function GM.DFMPlayerGMComponent.GMBreakableRecoveryAll
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c724
	// Params: [ Num(0) Size(0x0) ]
	void GMBreakableRecoveryAll();

	// Object: Function GM.DFMPlayerGMComponent.GMBreakableItemSetHugeDamage
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c680
	// Params: [ Num(1) Size(0x4) ]
	void GMBreakableItemSetHugeDamage(int32_t IsOpen);

	// Object: Function GM.DFMPlayerGMComponent.GMBreakableBreakAll
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c66c
	// Params: [ Num(0) Size(0x0) ]
	void GMBreakableBreakAll();

	// Object: Function GM.DFMPlayerGMComponent.GMBraveGameEvent
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c584
	// Params: [ Num(2) Size(0x14) ]
	void GMBraveGameEvent(struct FString EventName, int32_t Param);

	// Object: Function GM.DFMPlayerGMComponent.GMBraveGameConveyFixRandomPC
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c46c
	// Params: [ Num(3) Size(0xC) ]
	void GMBraveGameConveyFixRandomPC(int32_t Index1, int32_t Index2, int32_t Index3);

	// Object: Function GM.DFMPlayerGMComponent.GMBPDisableDelay
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c458
	// Params: [ Num(0) Size(0x0) ]
	void GMBPDisableDelay();

	// Object: Function GM.DFMPlayerGMComponent.GMBattleFieldEndMatchCamp
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c3b4
	// Params: [ Num(1) Size(0x4) ]
	void GMBattleFieldEndMatchCamp(int32_t Camp);

	// Object: Function GM.DFMPlayerGMComponent.GMBattleFieldEndMatch
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c3a0
	// Params: [ Num(0) Size(0x0) ]
	void GMBattleFieldEndMatch();

	// Object: Function GM.DFMPlayerGMComponent.GMBattleFieldCampScoreTrigger
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533c2c4
	// Params: [ Num(2) Size(0x8) ]
	void GMBattleFieldCampScoreTrigger(int32_t Camp, int32_t Score);

	// Object: Function GM.DFMPlayerGMComponent.GmAutoFire
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c1dc
	// Params: [ Num(2) Size(0x8) ]
	void GmAutoFire(uint8_t bEnable, int32_t FireTimes);

	// Object: Function GM.DFMPlayerGMComponent.GMAttemptUpdateWeaponItem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c100
	// Params: [ Num(2) Size(0x10) ]
	void GMAttemptUpdateWeaponItem(uint64_t GunGID, struct UGPModularWeaponDesc* NewDesc);

	// Object: Function GM.DFMPlayerGMComponent.GMAttachPendant
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533c05c
	// Params: [ Num(1) Size(0x8) ]
	void GMAttachPendant(uint64_t PendantItemId);

	// Object: Function GM.DFMPlayerGMComponent.GMAssaID
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533bfb8
	// Params: [ Num(1) Size(0x8) ]
	void GMAssaID(uint64_t AssaID);

	// Object: Function GM.DFMPlayerGMComponent.GMArenaTriggerEvent
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533bf0c
	// Params: [ Num(1) Size(0x10) ]
	void GMArenaTriggerEvent(struct FString Event);

	// Object: Function GM.DFMPlayerGMComponent.GMAllowFourFingersConsole
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533bef8
	// Params: [ Num(0) Size(0x0) ]
	void GMAllowFourFingersConsole();

	// Object: Function GM.DFMPlayerGMComponent.GMAiTestFunc
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533bdcc
	// Params: [ Num(3) Size(0x24) ]
	void GMAiTestFunc(struct FString Name, struct FString Param, float Val);

	// Object: Function GM.DFMPlayerGMComponent.GMAirDrop
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533bc78
	// Params: [ Num(4) Size(0x10) ]
	void GMAirDrop(int32_t GroupID, int32_t AirDropIndex, int32_t TimeStart, int32_t TimeEnd);

	// Object: Function GM.DFMPlayerGMComponent.GMAillyuTest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533bc64
	// Params: [ Num(0) Size(0x0) ]
	void GMAillyuTest();

	// Object: Function GM.DFMPlayerGMComponent.GMAILabDumpPBItemInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533bbc0
	// Params: [ Num(1) Size(0x4) ]
	void GMAILabDumpPBItemInfo(int32_t Type);

	// Object: Function GM.DFMPlayerGMComponent.GMAIInfoView
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533bbac
	// Params: [ Num(0) Size(0x0) ]
	void GMAIInfoView();

	// Object: Function GM.DFMPlayerGMComponent.GMAIGiveWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533bb08
	// Params: [ Num(1) Size(0x8) ]
	void GMAIGiveWeapon(uint64_t WeaponID);

	// Object: Function GM.DFMPlayerGMComponent.GMAiClosestSpeak
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ba64
	// Params: [ Num(1) Size(0x4) ]
	void GMAiClosestSpeak(int32_t SpeakId);

	// Object: Function GM.DFMPlayerGMComponent.GMAIClosestPlayMusic
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b9c0
	// Params: [ Num(1) Size(0x8) ]
	void GMAIClosestPlayMusic(struct FName Music);

	// Object: Function GM.DFMPlayerGMComponent.GMAiClosestGroupVoice
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b91c
	// Params: [ Num(1) Size(0x8) ]
	void GMAiClosestGroupVoice(struct FName Voice);

	// Object: Function GM.DFMPlayerGMComponent.GMAddWishItem
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533b878
	// Params: [ Num(1) Size(0x8) ]
	void GMAddWishItem(struct FName ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMAddVehiclePartInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b7d4
	// Params: [ Num(1) Size(0x8) ]
	void GMAddVehiclePartInfo(uint64_t PartId);

	// Object: Function GM.DFMPlayerGMComponent.GMAddTestDeadBox
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b6bc
	// Params: [ Num(3) Size(0xC) ]
	void GMAddTestDeadBox(float X, float Y, float Z);

	// Object: Function GM.DFMPlayerGMComponent.GMAddTA
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b6a8
	// Params: [ Num(0) Size(0x0) ]
	void GMAddTA();

	// Object: Function GM.DFMPlayerGMComponent.GMAddSlotWeapon
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b5c8
	// Params: [ Num(2) Size(0xC) ]
	void GMAddSlotWeapon(uint64_t PresetId, int32_t Slot);

	// Object: Function GM.DFMPlayerGMComponent.GMAddPlayerObjectionForTestMPQuestShow
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b4b0
	// Params: [ Num(3) Size(0x14) ]
	void GMAddPlayerObjectionForTestMPQuestShow(int64_t TaskID, int64_t ID, int32_t Value);

	// Object: Function GM.DFMPlayerGMComponent.GMAddMerit
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533b40c
	// Params: [ Num(1) Size(0x4) ]
	void GMAddMerit(float Merit);

	// Object: Function GM.DFMPlayerGMComponent.GMAddHudState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b368
	// Params: [ Num(1) Size(0x1) ]
	void GMAddHudState(uint8_t InHudState);

	// Object: Function GM.DFMPlayerGMComponent.GMAddHolidayID
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b284
	// Params: [ Num(2) Size(0x5) ]
	void GMAddHolidayID(uint32_t Key, uint8_t bAdd);

	// Object: Function GM.DFMPlayerGMComponent.GMAddHelicopterRange
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533b160
	// Params: [ Num(3) Size(0x9) ]
	void GMAddHelicopterRange(int32_t IconIndex, float Range, uint8_t Active);

	// Object: Function GM.DFMPlayerGMComponent.GMAddDynamicLevelGroup
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533b0bc
	// Params: [ Num(1) Size(0x8) ]
	void GMAddDynamicLevelGroup(struct FName GroupID);

	// Object: Function GM.DFMPlayerGMComponent.GMAddDropLogicBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533aebc
	// Params: [ Num(7) Size(0x1C) ]
	void GMAddDropLogicBuff(uint32_t Key, uint32_t InDropLogicID, uint32_t InCounter, int32_t TodayActiveTimes, int32_t CareerTriggerCnt, int32_t TodayActiveUpBound, int32_t CareerTriggerUpBound);

	// Object: Function GM.DFMPlayerGMComponent.GMAddArenaScore
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533addc
	// Params: [ Num(2) Size(0x5) ]
	void GMAddArenaScore(int32_t InAddScore, uint8_t InAddIncreaseScoreCount);

	// Object: Function GM.DFMPlayerGMComponent.GMAddAndUseAbilityItem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ad38
	// Params: [ Num(1) Size(0x8) ]
	void GMAddAndUseAbilityItem(uint64_t ItemID);

	// Object: Function GM.DFMPlayerGMComponent.GMAddAmmoToInventoryManager
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ac58
	// Params: [ Num(2) Size(0xC) ]
	void GMAddAmmoToInventoryManager(uint64_t ItemID, int32_t Num);

	// Object: Function GM.DFMPlayerGMComponent.GMAddAI2LocalTeam
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533ac44
	// Params: [ Num(0) Size(0x0) ]
	void GMAddAI2LocalTeam();

	// Object: Function GM.DFMPlayerGMComponent.GMActiveFireCrackerEmitterGroup
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533ab98
	// Params: [ Num(1) Size(0x10) ]
	void GMActiveFireCrackerEmitterGroup(struct FString EmitterGroupIds);

	// Object: Function GM.DFMPlayerGMComponent.GMActivateVaultGasVolume
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533aaec
	// Params: [ Num(1) Size(0x1) ]
	void GMActivateVaultGasVolume(uint8_t bActivate);

	// Object: Function GM.DFMPlayerGMComponent.GMAcceptNewQuest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533aa48
	// Params: [ Num(1) Size(0x8) ]
	void GMAcceptNewQuest(int64_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMAcceptNewContractQuest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533a9a4
	// Params: [ Num(1) Size(0x8) ]
	void GMAcceptNewContractQuest(int64_t QuestID);

	// Object: Function GM.DFMPlayerGMComponent.GMAcceptMission
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533a900
	// Params: [ Num(1) Size(0x4) ]
	void GMAcceptMission(int32_t missionid);

	// Object: Function GM.DFMPlayerGMComponent.GMAcceptActivity
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533a85c
	// Params: [ Num(1) Size(0x8) ]
	void GMAcceptActivity(int64_t GoalID);

	// Object: Function GM.DFMPlayerGMComponent.GM_HurtMe
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533a778
	// Params: [ Num(2) Size(0x8) ]
	void GM_HurtMe(float InHurtValue, float InImpendingDeathHurtValue);

	// Object: Function GM.DFMPlayerGMComponent.GM_AddSpeed
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533a6cc
	// Params: [ Num(1) Size(0x4) ]
	void GM_AddSpeed(float AddedValue);

	// Object: Function GM.DFMPlayerGMComponent.GM_AddHP
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533a620
	// Params: [ Num(1) Size(0x4) ]
	void GM_AddHP(float AddedValue);

	// Object: Function GM.DFMPlayerGMComponent.GM3PCarryInfo
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533a60c
	// Params: [ Num(0) Size(0x0) ]
	void GM3PCarryInfo();

	// Object: Function GM.DFMPlayerGMComponent.GiveSelfAbility
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a5f8
	// Params: [ Num(0) Size(0x0) ]
	void GiveSelfAbility();

	// Object: Function GM.DFMPlayerGMComponent.GiveResetSlot
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0xf810a94
	// Params: [ Num(0) Size(0x0) ]
	void GiveResetSlot();

	// Object: Function GM.DFMPlayerGMComponent.GiveItem
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a468
	// Params: [ Num(5) Size(0x18) ]
	void GiveItem(uint64_t ItemID, int32_t Num, EAttachPosition AttachPos, int32_t BindType, float Durability);

	// Object: Function GM.DFMPlayerGMComponent.GiveExpertSkill
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a3c4
	// Params: [ Num(1) Size(0x8) ]
	void GiveExpertSkill(int64_t ExpertId);

	// Object: Function GM.DFMPlayerGMComponent.GiveD
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a3b0
	// Params: [ Num(0) Size(0x0) ]
	void GiveD();

	// Object: Function GM.DFMPlayerGMComponent.GiveC
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a39c
	// Params: [ Num(0) Size(0x0) ]
	void GiveC();

	// Object: Function GM.DFMPlayerGMComponent.GiveB
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a388
	// Params: [ Num(0) Size(0x0) ]
	void GiveB();

	// Object: Function GM.DFMPlayerGMComponent.GiveAbilityByType
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a2e4
	// Params: [ Num(1) Size(0x1) ]
	void GiveAbilityByType(ESkillLogicType ESkillLogicType);

	// Object: Function GM.DFMPlayerGMComponent.GiveAbilityById
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a240
	// Params: [ Num(1) Size(0x4) ]
	void GiveAbilityById(int32_t SkillId);

	// Object: Function GM.DFMPlayerGMComponent.GiveAbilityByExpertID
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1533a19c
	// Params: [ Num(1) Size(0x8) ]
	void GiveAbilityByExpertID(int64_t ExpertId);

	// Object: Function GM.DFMPlayerGMComponent.GiveAbility
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a188
	// Params: [ Num(0) Size(0x0) ]
	void GiveAbility();

	// Object: Function GM.DFMPlayerGMComponent.GiveA
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a174
	// Params: [ Num(0) Size(0x0) ]
	void GiveA();

	// Object: Function GM.DFMPlayerGMComponent.GetPlayerDropBuffInfoStr
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x1533a158
	// Params: [ Num(0) Size(0x0) ]
	void GetPlayerDropBuffInfoStr();

	// Object: Function GM.DFMPlayerGMComponent.ForceEnableImpendingDeath
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533a0ac
	// Params: [ Num(1) Size(0x1) ]
	void ForceEnableImpendingDeath(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.FlushMovePath
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533a090
	// Params: [ Num(0) Size(0x0) ]
	void FlushMovePath();

	// Object: Function GM.DFMPlayerGMComponent.EnableVehicleDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15339fe4
	// Params: [ Num(1) Size(0x1) ]
	void EnableVehicleDebug(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.EnableSelfSoundVisualization
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15339f38
	// Params: [ Num(1) Size(0x1) ]
	void EnableSelfSoundVisualization(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.EnablePvpAIDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15339e94
	// Params: [ Num(1) Size(0x4) ]
	void EnablePvpAIDebug(int32_t Param);

	// Object: Function GM.DFMPlayerGMComponent.EnableAISpeakDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15339de8
	// Params: [ Num(1) Size(0x1) ]
	void EnableAISpeakDebug(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.DumpBuffInfo
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15339dd4
	// Params: [ Num(0) Size(0x0) ]
	void DumpBuffInfo();

	// Object: Function GM.DFMPlayerGMComponent.DSBanPlayer
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15339d28
	// Params: [ Num(1) Size(0x8) ]
	void DSBanPlayer(uint64_t PlayerUin);

	// Object: Function GM.DFMPlayerGMComponent.DrawMovePath
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x15339c6c
	// Params: [ Num(1) Size(0x10) ]
	void DrawMovePath(const struct TArray<struct FVector>& MovePoints);

	// Object: Function GM.DFMPlayerGMComponent.DrawMesh
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15339b7c
	// Params: [ Num(2) Size(0x9) ]
	void DrawMesh(struct APawn* AICharacter, uint8_t bIsDraw);

	// Object: Function GM.DFMPlayerGMComponent.DrawLocation
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15339ac8
	// Params: [ Num(1) Size(0x1) ]
	void DrawLocation(uint8_t bIsDraw);

	// Object: Function GM.DFMPlayerGMComponent.DisablePvpAIDebug
	// Flags: [Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15339aac
	// Params: [ Num(0) Size(0x0) ]
	void DisablePvpAIDebug();

	// Object: Function GM.DFMPlayerGMComponent.DisableMoveClientIsBoss
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15339a98
	// Params: [ Num(0) Size(0x0) ]
	void DisableMoveClientIsBoss();

	// Object: Function GM.DFMPlayerGMComponent.CollectDynamicObjectsPSO
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15339940
	// Params: [ Num(4) Size(0x10) ]
	void CollectDynamicObjectsPSO(int32_t InParticleBatchNum, float InParticleTimeoutSeconds, int32_t InDestructionBatchNum, float InDestructionBreakInterval);

	// Object: Function GM.DFMPlayerGMComponent.CloseMonitorAI
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15339924
	// Params: [ Num(0) Size(0x0) ]
	void CloseMonitorAI();

	// Object: Function GM.DFMPlayerGMComponent.CloseGMPanel
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15339880
	// Params: [ Num(1) Size(0x8) ]
	void CloseGMPanel(struct FName PaenlName);

	// Object: Function GM.DFMPlayerGMComponent.Clinet2ServerShowMoveInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153397d4
	// Params: [ Num(1) Size(0x4) ]
	void Clinet2ServerShowMoveInfo(int32_t MoveType);

	// Object: Function GM.DFMPlayerGMComponent.Clinet2ServerShowCharacterWaterInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15339728
	// Params: [ Num(1) Size(0x4) ]
	void Clinet2ServerShowCharacterWaterInfo(int32_t ShowType);

	// Object: Function GM.DFMPlayerGMComponent.Clinet2ServerShowCameraLocDiff
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15339674
	// Params: [ Num(1) Size(0x1) ]
	void Clinet2ServerShowCameraLocDiff(uint8_t bEnable);

	// Object: Function GM.DFMPlayerGMComponent.ClientVCCheck
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x153395c0
	// Params: [ Num(1) Size(0x10) ]
	void ClientVCCheck(struct TArray<struct FVector> InCheckResult);

	// Object: Function GM.DFMPlayerGMComponent.ClientUpdateAIView
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x153394c8
	// Params: [ Num(2) Size(0x20) ]
	void ClientUpdateAIView(struct FString Bag, struct FString DeadBodyBag);

	// Object: Function GM.DFMPlayerGMComponent.ClientShowWaterSparseOctree
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x153393d8
	// Params: [ Num(2) Size(0x14) ]
	void ClientShowWaterSparseOctree(struct TArray<struct FVector> VoxelArr, float size);

	// Object: Function GM.DFMPlayerGMComponent.ClientShowTips
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15339324
	// Params: [ Num(1) Size(0x10) ]
	void ClientShowTips(struct FString Tips);

	// Object: Function GM.DFMPlayerGMComponent.ClientShowSparseOctree
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15339234
	// Params: [ Num(2) Size(0x14) ]
	void ClientShowSparseOctree(struct TArray<struct FVector> VoxelArr, float size);

	// Object: Function GM.DFMPlayerGMComponent.ClientShowRelinkTrackItemPosition
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15339180
	// Params: [ Num(1) Size(0x10) ]
	void ClientShowRelinkTrackItemPosition(struct TArray<struct FVector> Positions);

	// Object: Function GM.DFMPlayerGMComponent.ClientShowNavExtInfo
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15338fc0
	// Params: [ Num(5) Size(0x58) ]
	void ClientShowNavExtInfo(float Duration, struct FString Info, struct FBox TileBox, struct TArray<uint32_t> LinkDirs, struct TArray<struct FVector> LinkTargets);

	// Object: Function GM.DFMPlayerGMComponent.ClientShowCommonTips
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15338ed0
	// Params: [ Num(2) Size(0x14) ]
	void ClientShowCommonTips(struct FString Tip, float Duration);

	// Object: Function GM.DFMPlayerGMComponent.ClientReportMapEconomy
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15338d40
	// Params: [ Num(1) Size(0x30) ]
	void ClientReportMapEconomy(struct FMapEconomyReportData Data);

	// Object: Function GM.DFMPlayerGMComponent.ClientPrintWeaponInfo
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15338c48
	// Params: [ Num(2) Size(0x20) ]
	void ClientPrintWeaponInfo(struct TArray<uint64_t> WeaponIds, struct TArray<struct FString> WeaponNames);

	// Object: Function GM.DFMPlayerGMComponent.ClientPrintToScreen
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15338b20
	// Params: [ Num(3) Size(0x18) ]
	void ClientPrintToScreen(struct FString Text, struct FColor Color, float Duration);

	// Object: Function GM.DFMPlayerGMComponent.ClientMoveAlongPath
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15338a6c
	// Params: [ Num(1) Size(0x10) ]
	void ClientMoveAlongPath(struct TArray<struct FVector> PathPoints);

	// Object: Function GM.DFMPlayerGMComponent.ClientGoTrackingPickUp
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x153389c0
	// Params: [ Num(1) Size(0xC) ]
	void ClientGoTrackingPickUp(struct FVector Position);

	// Object: Function GM.DFMPlayerGMComponent.ClientGMLineTraceWaterResult
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15338850
	// Params: [ Num(4) Size(0x28) ]
	void ClientGMLineTraceWaterResult(uint8_t bHit, struct FVector Start, struct FVector End, struct FVector HitPoint);

	// Object: Function GM.DFMPlayerGMComponent.ClientGMJPSTracePathDraw
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533879c
	// Params: [ Num(1) Size(0x10) ]
	void ClientGMJPSTracePathDraw(struct TArray<struct FVector> Lines);

	// Object: Function GM.DFMPlayerGMComponent.ClientGMGoto
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x153386b4
	// Params: [ Num(2) Size(0x10) ]
	void ClientGMGoto(struct FVector Location, float Delay);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawPoint
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x15338600
	// Params: [ Num(1) Size(0x10) ]
	void ClientDrawPoint(struct TArray<struct FVector> InCheckResult);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawMovePath
	// Flags: [Net|NetReliableNative|Event|Public|NetClient]
	// Offset: 0x1533854c
	// Params: [ Num(1) Size(0x10) ]
	void ClientDrawMovePath(struct TArray<struct FVector> MovePoints);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawDebugString
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x153383b0
	// Params: [ Num(5) Size(0x2C) ]
	void ClientDrawDebugString(struct FVector Location, struct FString Text, struct FColor Color, float Lifetime, float Scale);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawDebugSphere
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x1533821c
	// Params: [ Num(5) Size(0x1C) ]
	void ClientDrawDebugSphere(struct FVector Center, float radius, struct FColor Color, float Lifetime, float Thickness);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawDebugLine
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15338088
	// Params: [ Num(5) Size(0x24) ]
	void ClientDrawDebugLine(struct FVector LineStart, struct FVector LineEnd, struct FColor Color, float Lifetime, float Thickness);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawDebugBox
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x15337e40
	// Params: [ Num(8) Size(0x44) ]
	void ClientDrawDebugBox(struct FVector Center, struct FVector Extent, struct FQuat Rotation, struct FColor Color, uint8_t bPersistentLines, float Lifetime, uint8_t DepthPriority, float Thickness);

	// Object: Function GM.DFMPlayerGMComponent.ClientDrawCover
	// Flags: [Net|NetReliableNative|Event|Public|NetClient|BlueprintCallable]
	// Offset: 0x15337d8c
	// Params: [ Num(1) Size(0x10) ]
	void ClientDrawCover(struct TArray<struct FGMCoverDrawInfo> Covers);

	// Object: Function GM.DFMPlayerGMComponent.ClearAllSkill
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337d78
	// Params: [ Num(0) Size(0x0) ]
	void ClearAllSkill();

	// Object: Function GM.DFMPlayerGMComponent.ChangeArmedForceData
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15337ccc
	// Params: [ Num(1) Size(0x4) ]
	void ChangeArmedForceData(int32_t ID);

	// Object: Function GM.DFMPlayerGMComponent.CatalyticReplenish
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15337cb0
	// Params: [ Num(0) Size(0x0) ]
	void CatalyticReplenish();

	// Object: Function GM.DFMPlayerGMComponent.CancelUpdateBTDebugString
	// Flags: [Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable]
	// Offset: 0x15337c94
	// Params: [ Num(0) Size(0x0) ]
	void CancelUpdateBTDebugString();

	// Object: Function GM.DFMPlayerGMComponent.BreakAllDestructionResources
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337bb4
	// Params: [ Num(2) Size(0x8) ]
	void BreakAllDestructionResources(int32_t InBatchNum, float InBreakInterval);

	// Object: Function GM.DFMPlayerGMComponent.AzSpawnCapacitorKey
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337ba0
	// Params: [ Num(0) Size(0x0) ]
	void AzSpawnCapacitorKey();

	// Object: Function GM.DFMPlayerGMComponent.AzRandomCapacitor
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337afc
	// Params: [ Num(1) Size(0x8) ]
	void AzRandomCapacitor(uint64_t RandSeed);

	// Object: Function GM.DFMPlayerGMComponent.AutoStraight
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337a14
	// Params: [ Num(2) Size(0x8) ]
	void AutoStraight(uint8_t Enable, int32_t Step);

	// Object: Function GM.DFMPlayerGMComponent.AILabShowDoorLocAndRot
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15337970
	// Params: [ Num(1) Size(0x4) ]
	void AILabShowDoorLocAndRot(int32_t Mode);

	// Object: Function GM.DFMPlayerGMComponent.AILabProjDebug
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153378c4
	// Params: [ Num(1) Size(0x1) ]
	void AILabProjDebug(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.AILabDebugSys
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15337818
	// Params: [ Num(1) Size(0x1) ]
	void AILabDebugSys(uint8_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.AddScreenEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337720
	// Params: [ Num(1) Size(0x10) ]
	void AddScreenEffect(struct FString EffectName);

	// Object: Function GM.DFMPlayerGMComponent.AddPerkSPEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533767c
	// Params: [ Num(1) Size(0x4) ]
	void AddPerkSPEffect(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.AddPerk
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153375d8
	// Params: [ Num(1) Size(0x4) ]
	void AddPerk(int32_t Index);

	// Object: Function GM.DFMPlayerGMComponent.AddMultiDynamicEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153374fc
	// Params: [ Num(2) Size(0x8) ]
	void AddMultiDynamicEffect(float Distance, float MaxDuration);

	// Object: Function GM.DFMPlayerGMComponent.AddHudOrState
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15337458
	// Params: [ Num(1) Size(0x8) ]
	void AddHudOrState(struct FName Name);

	// Object: Function GM.DFMPlayerGMComponent.AddDynamicEffectWithRotator
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x1533723c
	// Params: [ Num(6) Size(0x24) ]
	void AddDynamicEffectWithRotator(struct FString EffectResourceId, float Distance, float MaxDuration, float Pitch, float Yaw, float Roll);

	// Object: Function GM.DFMPlayerGMComponent.AddDynamicEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x153370d0
	// Params: [ Num(3) Size(0x18) ]
	void AddDynamicEffect(struct FString EffectResourceId, float Distance, float MaxDuration);

	// Object: Function GM.DFMPlayerGMComponent.AddBuff
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15336ff0
	// Params: [ Num(2) Size(0x9) ]
	void AddBuff(uint64_t BuffId, uint8_t CharaterPart);

	// Object: Function GM.DFMPlayerGMComponent.AddAllScreenEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15336f4c
	// Params: [ Num(1) Size(0x4) ]
	void AddAllScreenEffect(int32_t Enable);

	// Object: Function GM.DFMPlayerGMComponent.AddAllDynamicEffect
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15336e6c
	// Params: [ Num(2) Size(0x8) ]
	void AddAllDynamicEffect(int32_t Enable, float Duration);

	// Object: Function GM.DFMPlayerGMComponent.ActivateSkillByUISlot
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x15336d90
	// Params: [ Num(2) Size(0x8) ]
	void ActivateSkillByUISlot(int32_t Slot, int32_t BtnCall);
};

// Object: Class GM.CrashSightGameInfoCollectSys
// Size: 0x48 (Inherited: 0x30)
struct UCrashSightGameInfoCollectSys : UWorldSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UCrashSightGameInfoCollectSys, "CrashSightGameInfoCollectSys")

	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
};

// Object: Class GM.MapDropBoxDataHUDView
// Size: 0x388 (Inherited: 0x2F8)
struct UMapDropBoxDataHUDView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMapDropBoxDataHUDView, "MapDropBoxDataHUDView")

	float RPCDuration; // 0x2F8(0x4)
	uint8_t Pad_0x2FC[0x4]; // 0x2FC(0x4)
	struct UButton* Button_AddBuff; // 0x300(0x8)
	struct UButton* Button_RemoveBuff; // 0x308(0x8)
	struct UDFEditableTextBox* Input_KeyOrDropLogicID; // 0x310(0x8)
	struct UDFEditableTextBox* Input_DropLogicID; // 0x318(0x8)
	struct UDFEditableTextBox* Input_Counter; // 0x320(0x8)
	struct UDFEditableTextBox* Input_TodayActiveTimes; // 0x328(0x8)
	struct UDFEditableTextBox* Input_CareerTriggerCnt; // 0x330(0x8)
	struct UDFEditableTextBox* Input_TodayActiveUpBound; // 0x338(0x8)
	struct UDFEditableTextBox* Input_CareerTriggerUpBound; // 0x340(0x8)
	struct UButton* Button_SetCounter; // 0x348(0x8)
	struct UDFEditableTextBox* Input_Key; // 0x350(0x8)
	struct UDFEditableTextBox* Input_CurCounter; // 0x358(0x8)
	struct UButton* Button_SetCurrent; // 0x360(0x8)
	struct UDFEditableTextBox* Input_Current; // 0x368(0x8)
	struct UDFTextBlock* PlayerBuffInfoText; // 0x370(0x8)
	struct UDFTextBlock* DropLogicInfo; // 0x378(0x8)
	struct UDFMPlayerGMComponent* GMComp; // 0x380(0x8)

	// Object: Function GM.MapDropBoxDataHUDView.OnClick_Button_SetCurrent
	// Flags: [Final|Native|Public]
	// Offset: 0x15364ab0
	// Params: [ Num(0) Size(0x0) ]
	void OnClick_Button_SetCurrent();

	// Object: Function GM.MapDropBoxDataHUDView.OnClick_Button_SetCounter
	// Flags: [Final|Native|Public]
	// Offset: 0x15364a9c
	// Params: [ Num(0) Size(0x0) ]
	void OnClick_Button_SetCounter();

	// Object: Function GM.MapDropBoxDataHUDView.OnClick_Button_RemoveBuff
	// Flags: [Final|Native|Public]
	// Offset: 0x15364a88
	// Params: [ Num(0) Size(0x0) ]
	void OnClick_Button_RemoveBuff();

	// Object: Function GM.MapDropBoxDataHUDView.OnClick_Button_AddBuff
	// Flags: [Final|Native|Public]
	// Offset: 0x15364a74
	// Params: [ Num(0) Size(0x0) ]
	void OnClick_Button_AddBuff();
};

// Object: Class GM.PlayerGMComponentRaid
// Size: 0x888 (Inherited: 0x888)
struct UPlayerGMComponentRaid : UDFMPlayerGMComponent
{
	DEFINE_UE_CLASS_HELPERS(UPlayerGMComponentRaid, "PlayerGMComponentRaid")

	// Object: Function GM.PlayerGMComponentRaid.ServerSetBreakableActorHP
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15366804
	// Params: [ Num(3) Size(0x18) ]
	void ServerSetBreakableActorHP(int32_t DesHP, struct AActor* Target, struct FName ActorsTag);

	// Object: Function GM.PlayerGMComponentRaid.ServerRailRideSpeedUp
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15366758
	// Params: [ Num(1) Size(0x4) ]
	void ServerRailRideSpeedUp(float Percentage);

	// Object: Function GM.PlayerGMComponentRaid.ServerPlayerVehicleAddHP
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x153666ac
	// Params: [ Num(1) Size(0x4) ]
	void ServerPlayerVehicleAddHP(int32_t HP);

	// Object: Function GM.PlayerGMComponentRaid.ServerGoToQuest
	// Flags: [Net|NetReliableNative|Event|Public|NetServer]
	// Offset: 0x15366600
	// Params: [ Num(1) Size(0x8) ]
	void ServerGoToQuest(int64_t QuestID);

	// Object: Function GM.PlayerGMComponentRaid.GMRailRideSpeedUp
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x1536655c
	// Params: [ Num(1) Size(0x4) ]
	void GMRailRideSpeedUp(float Percentage);

	// Object: Function GM.PlayerGMComponentRaid.GMPlayerVehicleAddHP
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153664b8
	// Params: [ Num(1) Size(0x4) ]
	void GMPlayerVehicleAddHP(int32_t HP);

	// Object: Function GM.PlayerGMComponentRaid.GMGoToQuest
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15366414
	// Params: [ Num(1) Size(0x8) ]
	void GMGoToQuest(int64_t QuestID);

	// Object: Function GM.PlayerGMComponentRaid.GMBreakTrain
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x15366400
	// Params: [ Num(0) Size(0x0) ]
	void GMBreakTrain();

	// Object: Function GM.PlayerGMComponentRaid.GMBreakMonitorRoom
	// Flags: [Final|Exec|Native|Public|BlueprintCallable]
	// Offset: 0x153663ec
	// Params: [ Num(0) Size(0x0) ]
	void GMBreakMonitorRoom();
};

// Object: Class GM.TestButton
// Size: 0x4B0 (Inherited: 0x4A0)
struct UTestButton : UButton
{
	DEFINE_UE_CLASS_HELPERS(UTestButton, "TestButton")

	uint8_t Pad_0x4A0[0x10]; // 0x4A0(0x10)

	// Object: Function GM.TestButton.OnClickedFunc
	// Flags: [Final|Native|Public]
	// Offset: 0x153675e4
	// Params: [ Num(0) Size(0x0) ]
	void OnClickedFunc();
};

} // namespace SDK
