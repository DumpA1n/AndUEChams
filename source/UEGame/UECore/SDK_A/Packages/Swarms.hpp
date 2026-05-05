#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: Swarms
// Enums: 2
// Structs: 9
// Classes: 4

struct APawn;
enum class ECollisionChannel : uint8_t;
struct UCurveFloat;
struct UInstancedStaticMeshComponent;
struct UMaterialInstanceDynamic;
struct UMaterialInterface;
struct UStaticMesh;
struct FSwarmsBlockSyncData;
struct FSwarmsFindPathData;
struct FSwarmsMoveToTargetData;
struct FSwarmsMapCellData;
struct FSwarmsBoidsData;
struct FSwarmsVoxelSettings;
struct FSwarmsBoidsSettings;
struct FSwarmsMeshRendererData;
struct FSwarmsQualitySettings;
struct ISwarmsActorInterface;
struct USwarmsComponent;
struct USwarmsComponentCPU;
struct ATestSwarmsActor;

// Object: Enum Swarms.ESwarmsQualityLevel
enum class ESwarmsQualityLevel : uint8_t
{
	Low = 0,
	Medium = 1,
	High = 2,
	ESwarmsQualityLevel_MAX = 3
};

// Object: Enum Swarms.ESwarmsFadeInType
enum class ESwarmsFadeInType : uint8_t
{
	None = 0,
	Scale = 1,
	ScaleAsAlpha = 2,
	Alpha = 3,
	ESwarmsFadeInType_MAX = 4
};

// Object: ScriptStruct Swarms.SwarmsBlockSyncData
// Size: 0x10 (Inherited: 0x0)
struct FSwarmsBlockSyncData
{
	struct TArray<uint8_t> CellsInfo; // 0x0(0x10)
};

// Object: ScriptStruct Swarms.SwarmsFindPathData
// Size: 0x10 (Inherited: 0x0)
struct FSwarmsFindPathData
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct Swarms.SwarmsMoveToTargetData
// Size: 0x70 (Inherited: 0x0)
struct FSwarmsMoveToTargetData
{
	uint8_t Pad_0x0[0x70]; // 0x0(0x70)
};

// Object: ScriptStruct Swarms.SwarmsMapCellData
// Size: 0x29 (Inherited: 0x0)
struct FSwarmsMapCellData
{
	uint8_t Pad_0x0[0x29]; // 0x0(0x29)
};

// Object: ScriptStruct Swarms.SwarmsBoidsData
// Size: 0x44 (Inherited: 0x0)
struct FSwarmsBoidsData
{
	uint8_t Pad_0x0[0x44]; // 0x0(0x44)
};

// Object: ScriptStruct Swarms.SwarmsVoxelSettings
// Size: 0x40 (Inherited: 0x0)
struct FSwarmsVoxelSettings
{
	ECollisionChannel CellTraceChannel; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FVector CellCheckSize; // 0x4(0xC)
	int32_t BlockSize; // 0x10(0x4)
	float FirstBlockCheckRate; // 0x14(0x4)
	int32_t FirstCheckBlockNum; // 0x18(0x4)
	int32_t ClientStartMinBlock; // 0x1C(0x4)
	int32_t BackConnecteCellNum; // 0x20(0x4)
	float DiffuseSimCenterOffsetZ; // 0x24(0x4)
	struct FVector2D DamageCheckStart; // 0x28(0x8)
	struct FVector2D DiffuseSimStart; // 0x30(0x8)
	float DiffuseSimStopDistance; // 0x38(0x4)
	float CellsNextTargetYZWeight; // 0x3C(0x4)
};

// Object: ScriptStruct Swarms.SwarmsBoidsSettings
// Size: 0x98 (Inherited: 0x0)
struct FSwarmsBoidsSettings
{
	float MaxLifeTime; // 0x0(0x4)
	struct FVector MainVolumeSize; // 0x4(0xC)
	float SpawnAlphaRate; // 0x10(0x4)
	float SpawnAlphaMin; // 0x14(0x4)
	float SpawnAlphaMax; // 0x18(0x4)
	float SpawnDuration; // 0x1C(0x4)
	float PitchLimitValue; // 0x20(0x4)
	float YawLimitValue; // 0x24(0x4)
	float Acceleration; // 0x28(0x4)
	float SpawnVelocity; // 0x2C(0x4)
	float SpawnTurningDelay; // 0x30(0x4)
	float BaseVelocity; // 0x34(0x4)
	float RandomAddVelocity; // 0x38(0x4)
	float TurningSpeed; // 0x3C(0x4)
	float XMoveExtraSpace; // 0x40(0x4)
	float NavPathRollbackDistance; // 0x44(0x4)
	float NavPathVelocityRatio; // 0x48(0x4)
	float NavPathMaxVelocityRatio; // 0x4C(0x4)
	float NavPathMinCellDistance; // 0x50(0x4)
	float StopNavPitchRandomRange; // 0x54(0x4)
	float StopNavYawRandomRange; // 0x58(0x4)
	float DeathLoopFadeOutSpeed; // 0x5C(0x4)
	float MoveToTargetMaxDisToCamera; // 0x60(0x4)
	float MoveToTargetTime; // 0x64(0x4)
	struct UCurveFloat* MoveToTargetCurve; // 0x68(0x8)
	float MoveToTargetHitRate; // 0x70(0x4)
	float MoveToTargetFadeInRate; // 0x74(0x4)
	float MoveToTargetZMoveCostRate; // 0x78(0x4)
	float MoveToTargetMaxDis; // 0x7C(0x4)
	float MoveToTargetMinSpeedRate; // 0x80(0x4)
	float MoveToTargetMaxSpeedRate; // 0x84(0x4)
	float MoveToTargetPathRadius; // 0x88(0x4)
	float MoveToTargetPathRandomOffset; // 0x8C(0x4)
	float NoiseOffset; // 0x90(0x4)
	float NoiseSpeed; // 0x94(0x4)
};

// Object: ScriptStruct Swarms.SwarmsMeshRendererData
// Size: 0x48 (Inherited: 0x0)
struct FSwarmsMeshRendererData
{
	struct TArray<struct UStaticMesh*> AllMeshes; // 0x0(0x10)
	struct TArray<struct UMaterialInterface*> AllMaterials; // 0x10(0x10)
	struct FLinearColor EmissiveColor; // 0x20(0x10)
	struct FLinearColor EnemyEmissiveColor; // 0x30(0x10)
	float FadeInTime; // 0x40(0x4)
	float FadeInMaxVal; // 0x44(0x4)
};

// Object: ScriptStruct Swarms.SwarmsQualitySettings
// Size: 0x28 (Inherited: 0x0)
struct FSwarmsQualitySettings
{
	int32_t BoidsNum; // 0x0(0x4)
	uint8_t MaxTargetNum; // 0x4(0x1)
	uint8_t TargetBoidsNum; // 0x5(0x1)
	uint8_t bCastShadow : 1; // 0x6(0x1), Mask(0x1)
	uint8_t BitPad_0x6_1 : 7; // 0x6(0x1)
	ESwarmsFadeInType FadeInType; // 0x7(0x1)
	int32_t ClientOneFrameCheckNum; // 0x8(0x4)
	int32_t CellsNextTargetCheckDistance; // 0xC(0x4)
	uint8_t bIsLowMoveMode : 1; // 0x10(0x1), Mask(0x1)
	uint8_t BitPad_0x10_1 : 7; // 0x10(0x1)
	uint8_t Pad_0x11[0x7]; // 0x11(0x7)
	struct TArray<float> LODDistanceSettings; // 0x18(0x10)
};

// Object: Class Swarms.SwarmsActorInterface
// Size: 0x28 (Inherited: 0x28)
struct ISwarmsActorInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(ISwarmsActorInterface, "SwarmsActorInterface")
};

// Object: Class Swarms.SwarmsComponent
// Size: 0x800 (Inherited: 0xF8)
struct USwarmsComponent : UActorComponent
{
	DEFINE_UE_CLASS_HELPERS(USwarmsComponent, "SwarmsComponent")

	uint8_t bIsDrawMainVolume : 1; // 0xF8(0x1), Mask(0x1)
	uint8_t BitPad_0xF8_1 : 7; // 0xF8(0x1)
	uint8_t bIsDrawBlock : 1; // 0xF9(0x1), Mask(0x1)
	uint8_t BitPad_0xF9_1 : 7; // 0xF9(0x1)
	uint8_t bIsDrawDamageBox : 1; // 0xFA(0x1), Mask(0x1)
	uint8_t BitPad_0xFA_1 : 7; // 0xFA(0x1)
	uint8_t bIsDrawCheckWater : 1; // 0xFB(0x1), Mask(0x1)
	uint8_t BitPad_0xFB_1 : 7; // 0xFB(0x1)
	uint8_t bIsDrawDebugConnectedInfo : 1; // 0xFC(0x1), Mask(0x1)
	uint8_t BitPad_0xFC_1 : 7; // 0xFC(0x1)
	uint8_t bIsDrawDebugConnectedSingle : 1; // 0xFD(0x1), Mask(0x1)
	uint8_t BitPad_0xFD_1 : 7; // 0xFD(0x1)
	uint8_t bIsDrawDebugLineTrace : 1; // 0xFE(0x1), Mask(0x1)
	uint8_t BitPad_0xFE_1 : 7; // 0xFE(0x1)
	uint8_t bIsDrawDebugTargetPath : 1; // 0xFF(0x1), Mask(0x1)
	uint8_t BitPad_0xFF_1 : 7; // 0xFF(0x1)
	int32_t DrawBlockIndex; // 0x100(0x4)
	int32_t DrawDebugCell_Y; // 0x104(0x4)
	int32_t DrawDebugCell_Z; // 0x108(0x4)
	uint8_t bIsParallelFindPath : 1; // 0x10C(0x1), Mask(0x1)
	uint8_t BitPad_0x10C_1 : 7; // 0x10C(0x1)
	uint8_t Pad_0x10D[0x3]; // 0x10D(0x3)
	float DamageAreaSize; // 0x110(0x4)
	float DamageArea_HitRate; // 0x114(0x4)
	float DamageArea_ShowRate; // 0x118(0x4)
	float LODCheckCD; // 0x11C(0x4)
	int32_t SpawnPointsCheckCellNum; // 0x120(0x4)
	uint8_t Pad_0x124[0x4]; // 0x124(0x4)
	struct TArray<struct FVector> SpawnPoints; // 0x128(0x10)
	struct TArray<struct FVector> SpawnPoints_Crouch; // 0x138(0x10)
	struct TArray<struct FVector> SpawnPoints_Prone; // 0x148(0x10)
	struct FSwarmsQualitySettings HighSetting; // 0x158(0x28)
	struct FSwarmsQualitySettings MediumSetting; // 0x180(0x28)
	struct FSwarmsQualitySettings LowSetting; // 0x1A8(0x28)
	struct FSwarmsMeshRendererData MeshData; // 0x1D0(0x48)
	struct FSwarmsBoidsSettings BoidsSettings_SOL; // 0x218(0x98)
	struct FSwarmsBoidsSettings BoidsSettings_BF; // 0x2B0(0x98)
	struct FSwarmsVoxelSettings VoxelSettings; // 0x348(0x40)
	uint8_t Pad_0x388[0x60]; // 0x388(0x60)
	struct FSwarmsQualitySettings CurrQualitySettings; // 0x3E8(0x28)
	struct FSwarmsBoidsSettings BoidsSettings; // 0x410(0x98)
	float MaxLifeTime; // 0x4A8(0x4)
	struct FVector MainVolumeSize; // 0x4AC(0xC)
	int32_t CellNumX; // 0x4B8(0x4)
	int32_t CellNumY; // 0x4BC(0x4)
	int32_t CellNumZ; // 0x4C0(0x4)
	int32_t CurrMapCellsNum; // 0x4C4(0x4)
	int32_t CurrBoidsNum; // 0x4C8(0x4)
	float CurrPlayTime; // 0x4CC(0x4)
	float CellDataScale; // 0x4D0(0x4)
	float CellSizeReciprocalY; // 0x4D4(0x4)
	float CellSizeReciprocalZ; // 0x4D8(0x4)
	uint8_t Pad_0x4DC[0x4]; // 0x4DC(0x4)
	struct FTransform ActorToWorldTransform; // 0x4E0(0x30)
	struct FMatrix WorldToActorMatrix; // 0x510(0x40)
	struct FMatrix ActorToWorldMatrix; // 0x550(0x40)
	uint8_t bIsInitBlocksParams : 1; // 0x590(0x1), Mask(0x1)
	uint8_t BitPad_0x590_1 : 7; // 0x590(0x1)
	uint8_t bIsSyncMapInfo : 1; // 0x591(0x1), Mask(0x1)
	uint8_t BitPad_0x591_1 : 7; // 0x591(0x1)
	uint8_t bIsPlaying : 1; // 0x592(0x1), Mask(0x1)
	uint8_t BitPad_0x592_1 : 7; // 0x592(0x1)
	uint8_t bIsCheckingCell : 1; // 0x593(0x1), Mask(0x1)
	uint8_t BitPad_0x593_1 : 7; // 0x593(0x1)
	uint8_t bIsInitBoids : 1; // 0x594(0x1), Mask(0x1)
	uint8_t BitPad_0x594_1 : 7; // 0x594(0x1)
	uint8_t bIsClientStart : 1; // 0x595(0x1), Mask(0x1)
	uint8_t BitPad_0x595_1 : 7; // 0x595(0x1)
	uint8_t Pad_0x596[0x2]; // 0x596(0x2)
	struct FVector CurrForward; // 0x598(0xC)
	struct FVector CurrRight; // 0x5A4(0xC)
	struct FVector CurrUp; // 0x5B0(0xC)
	uint8_t Pad_0x5BC[0x4]; // 0x5BC(0x4)
	struct FQuat ActorQuat; // 0x5C0(0x10)
	struct UInstancedStaticMeshComponent* ISMComponent; // 0x5D0(0x8)
	struct TArray<struct FTransform> TransArray; // 0x5D8(0x10)
	struct TArray<float> CustomDataArray; // 0x5E8(0x10)
	struct TArray<float> ISMCustomDataArray; // 0x5F8(0x10)
	struct TArray<struct FVector> ValidSpawnPoints; // 0x608(0x10)
	int32_t TotalBlockNum; // 0x618(0x4)
	float BlockCehckTime; // 0x61C(0x4)
	int32_t OneSecondCheckNum; // 0x620(0x4)
	uint8_t CurrBlockIndex; // 0x624(0x1)
	uint8_t CurrBlockStart; // 0x625(0x1)
	uint8_t CurrBlockEnd; // 0x626(0x1)
	uint8_t CurrBlockMinDamageX; // 0x627(0x1)
	float CurrBlockWaterHeight; // 0x628(0x4)
	float CurrBlockWaterDepth; // 0x62C(0x4)
	struct TArray<uint8_t> BlockCellsInfo; // 0x630(0x10)
	int32_t CurrBlockCount; // 0x640(0x4)
	uint8_t Pad_0x644[0x4]; // 0x644(0x4)
	struct TArray<struct FSwarmsBlockSyncData> BlockSyncDataArray; // 0x648(0x10)
	int32_t ClientInUesBlockIndex; // 0x658(0x4)
	int32_t ClientInUesCellIndex; // 0x65C(0x4)
	int32_t CurrCheckY; // 0x660(0x4)
	int32_t CurrCheckZ; // 0x664(0x4)
	struct TArray<uint8_t> LastCheckEmptyArray; // 0x668(0x10)
	int32_t CheckCellCount; // 0x678(0x4)
	int32_t CheckDiffuseCutCount; // 0x67C(0x4)
	int32_t CheckWaterCutCount; // 0x680(0x4)
	int32_t CheckEmptyCutCount; // 0x684(0x4)
	float FadeInSpeed; // 0x688(0x4)
	uint8_t Pad_0x68C[0x4]; // 0x68C(0x4)
	struct TArray<int32_t> DamageCheckStartCells; // 0x690(0x10)
	float CurrDamageSpeed; // 0x6A0(0x4)
	float CurrDamageMinX; // 0x6A4(0x4)
	float CurrDamageMaxX; // 0x6A8(0x4)
	float CurrDamageShowMaxX; // 0x6AC(0x4)
	uint8_t Pad_0x6B0[0xD8]; // 0x6B0(0xD8)
	int32_t CurrLOD; // 0x788(0x4)
	float NextCheckLODTime; // 0x78C(0x4)
	struct TArray<struct UMaterialInstanceDynamic*> AllMainMaterials; // 0x790(0x10)
	float BaseMoveToTargetCostTime; // 0x7A0(0x4)
	float CheckTargetAddDistance; // 0x7A4(0x4)
	float DamageAreaMoveCost; // 0x7A8(0x4)
	uint8_t Pad_0x7AC[0x24]; // 0x7AC(0x24)
	uint8_t bIsUseVoxelData : 1; // 0x7D0(0x1), Mask(0x1)
	uint8_t BitPad_0x7D0_1 : 7; // 0x7D0(0x1)
	uint8_t Pad_0x7D1[0x3]; // 0x7D1(0x3)
	float NextCheckVoxelTime; // 0x7D4(0x4)
	struct TArray<uint8_t> VoxelData; // 0x7D8(0x10)
	struct FIntVector VoxelCount; // 0x7E8(0xC)
	uint8_t Pad_0x7F4[0xC]; // 0x7F4(0xC)

	// Object: Function Swarms.SwarmsComponent.UpdateInstances
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf2e04
	// Params: [ Num(0) Size(0x0) ]
	void UpdateInstances();

	// Object: Function Swarms.SwarmsComponent.TryMergeCellsInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2d60
	// Params: [ Num(1) Size(0x1) ]
	void TryMergeCellsInfo(uint8_t CellInfo);

	// Object: Function Swarms.SwarmsComponent.TryClientStart_Low
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2d4c
	// Params: [ Num(0) Size(0x0) ]
	void TryClientStart_Low();

	// Object: Function Swarms.SwarmsComponent.TryClientStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2d38
	// Params: [ Num(0) Size(0x0) ]
	void TryClientStart();

	// Object: Function Swarms.SwarmsComponent.TryCheckEmptyBlock
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2c50
	// Params: [ Num(3) Size(0x9) ]
	uint8_t TryCheckEmptyBlock(int32_t Y, int32_t Z);

	// Object: Function Swarms.SwarmsComponent.TryAddToBlockInfo
	// Flags: [Final|Native|Static|Protected|HasOutParms]
	// Offset: 0x8cf2b04
	// Params: [ Num(3) Size(0x18) ]
	static void TryAddToBlockInfo(const float& ObjStart, const float& ObjEnd, struct TArray<struct FVector2D>& BlockInfo);

	// Object: Function Swarms.SwarmsComponent.TryAddCellDamageInfo
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x8cf298c
	// Params: [ Num(4) Size(0xA) ]
	void TryAddCellDamageInfo(int32_t Y, int32_t Z, const uint8_t& Start, const uint8_t& End);

	// Object: Function Swarms.SwarmsComponent.TickUpdateTransArray
	// Flags: [Native|Protected]
	// Offset: 0x8cf28e0
	// Params: [ Num(1) Size(0x4) ]
	void TickUpdateTransArray(float DeltaTime);

	// Object: Function Swarms.SwarmsComponent.TickFindAllMapCellsNextTarget
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf28a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TickFindAllMapCellsNextTarget();

	// Object: Function Swarms.SwarmsComponent.TickDamageTarget
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2804
	// Params: [ Num(1) Size(0x4) ]
	void TickDamageTarget(float DeltaTime);

	// Object: Function Swarms.SwarmsComponent.TickDamageArea
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf27f0
	// Params: [ Num(0) Size(0x0) ]
	void TickDamageArea();

	// Object: Function Swarms.SwarmsComponent.TickClientDoUesBlockCellsInfo_Client
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf27dc
	// Params: [ Num(0) Size(0x0) ]
	void TickClientDoUesBlockCellsInfo_Client();

	// Object: Function Swarms.SwarmsComponent.TickCheckVoxel
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf27a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t TickCheckVoxel();

	// Object: Function Swarms.SwarmsComponent.TickCheckBlocks
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2700
	// Params: [ Num(1) Size(0x4) ]
	void TickCheckBlocks(float DeltaTime);

	// Object: Function Swarms.SwarmsComponent.TickActorTransform
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf26ec
	// Params: [ Num(0) Size(0x0) ]
	void TickActorTransform();

	// Object: Function Swarms.SwarmsComponent.SyncMapInfoToClient
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf26d8
	// Params: [ Num(0) Size(0x0) ]
	void SyncMapInfoToClient();

	// Object: Function Swarms.SwarmsComponent.StartParallelFindMoveToTargetPath
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf26c4
	// Params: [ Num(0) Size(0x0) ]
	void StartParallelFindMoveToTargetPath();

	// Object: Function Swarms.SwarmsComponent.StartInitBlocks
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf26b0
	// Params: [ Num(0) Size(0x0) ]
	void StartInitBlocks();

	// Object: Function Swarms.SwarmsComponent.StartClientDoUesBlockCellsInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf260c
	// Params: [ Num(1) Size(0x4) ]
	void StartClientDoUesBlockCellsInfo(int32_t BlockIndex);

	// Object: Function Swarms.SwarmsComponent.SlerpForward
	// Flags: [Final|Native|Static|Protected|HasDefaults]
	// Offset: 0x8cf24b4
	// Params: [ Num(5) Size(0x2C) ]
	static struct FVector SlerpForward(struct FVector Current, struct FVector Target, float DeltaTime, float AngleSpeed);

	// Object: Function Swarms.SwarmsComponent.SetShowLOD
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf2410
	// Params: [ Num(1) Size(0x4) ]
	void SetShowLOD(int32_t LOD);

	// Object: Function Swarms.SwarmsComponent.SetDamageArea
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf236c
	// Params: [ Num(1) Size(0x4) ]
	void SetDamageArea(float DamageCenterX);

	// Object: Function Swarms.SwarmsComponent.SetCurrBlockIndex
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf22c8
	// Params: [ Num(1) Size(0x4) ]
	void SetCurrBlockIndex(int32_t Index);

	// Object: Function Swarms.SwarmsComponent.SetAvatarMesh
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf2224
	// Params: [ Num(1) Size(0x8) ]
	void SetAvatarMesh(struct UStaticMesh* AvatarMesh);

	// Object: Function Swarms.SwarmsComponent.SetAvatarMaterial
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf2180
	// Params: [ Num(1) Size(0x8) ]
	void SetAvatarMaterial(struct UMaterialInterface* AvatarMaterial);

	// Object: Function Swarms.SwarmsComponent.RayCheckDamageMapCell
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x8cf2070
	// Params: [ Num(3) Size(0x11) ]
	uint8_t RayCheckDamageMapCell(const struct FVector& LocalPosition, const float& TargetX);

	// Object: Function Swarms.SwarmsComponent.ParallelFindMoveToTargetPath
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf205c
	// Params: [ Num(0) Size(0x0) ]
	void ParallelFindMoveToTargetPath();

	// Object: Function Swarms.SwarmsComponent.OnRep_BlockSyncDataArray
	// Flags: [Final|Native|Protected]
	// Offset: 0xf941d10
	// Params: [ Num(0) Size(0x0) ]
	void OnRep_BlockSyncDataArray();

	// Object: Function Swarms.SwarmsComponent.NormalizeMovePath
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cf1f4c
	// Params: [ Num(2) Size(0x20) ]
	void NormalizeMovePath(struct TArray<struct FVector>& BaseMovePath, struct TArray<float>& BaseMoveRate);

	// Object: Function Swarms.SwarmsComponent.MoveCellIndex
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cf1dfc
	// Params: [ Num(4) Size(0xD) ]
	uint8_t MoveCellIndex(int32_t& Y, int32_t& Z, int32_t ForwardType);

	// Object: Function Swarms.SwarmsComponent.IsUseVoxelData
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf1dc4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsUseVoxelData();

	// Object: Function Swarms.SwarmsComponent.IsStandalone
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf1d8c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsStandalone();

	// Object: Function Swarms.SwarmsComponent.IsOverlap
	// Flags: [Final|Native|Static|Protected]
	// Offset: 0x8cf1c34
	// Params: [ Num(5) Size(0x11) ]
	static uint8_t IsOverlap(float Start1, float End1, float Start2, float End2);

	// Object: Function Swarms.SwarmsComponent.IsNextEmptyBlock
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1b84
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsNextEmptyBlock(int32_t Y);

	// Object: Function Swarms.SwarmsComponent.IsDS
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf1b4c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDS();

	// Object: Function Swarms.SwarmsComponent.IsClient
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf1b14
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsClient();

	// Object: Function Swarms.SwarmsComponent.InverseForwardsOneAxis
	// Flags: [Final|Native|Static|Protected]
	// Offset: 0x8cf19f0
	// Params: [ Num(4) Size(0x10) ]
	static float InverseForwardsOneAxis(float Val, uint8_t bIsPositiveTarget, float MinAbsVal);

	// Object: Function Swarms.SwarmsComponent.InitQualitySettings
	// Flags: [Native|Protected]
	// Offset: 0x8cf19d4
	// Params: [ Num(0) Size(0x0) ]
	void InitQualitySettings();

	// Object: Function Swarms.SwarmsComponent.InitLineTraceParams
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf19c0
	// Params: [ Num(0) Size(0x0) ]
	void InitLineTraceParams();

	// Object: Function Swarms.SwarmsComponent.InitDamageCheckStartCells
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf19ac
	// Params: [ Num(0) Size(0x0) ]
	void InitDamageCheckStartCells();

	// Object: Function Swarms.SwarmsComponent.InitCheckVoxelParams
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf1998
	// Params: [ Num(0) Size(0x0) ]
	void InitCheckVoxelParams();

	// Object: Function Swarms.SwarmsComponent.InitBoidsSettings
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1984
	// Params: [ Num(0) Size(0x0) ]
	void InitBoidsSettings();

	// Object: Function Swarms.SwarmsComponent.InitBoids
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1970
	// Params: [ Num(0) Size(0x0) ]
	void InitBoids();

	// Object: Function Swarms.SwarmsComponent.InitBlocksParams
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1938
	// Params: [ Num(1) Size(0x1) ]
	uint8_t InitBlocksParams();

	// Object: Function Swarms.SwarmsComponent.InitAllMapCellsDamageInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1924
	// Params: [ Num(0) Size(0x0) ]
	void InitAllMapCellsDamageInfo();

	// Object: Function Swarms.SwarmsComponent.HandleExistingParallelTask
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1910
	// Params: [ Num(0) Size(0x0) ]
	void HandleExistingParallelTask();

	// Object: Function Swarms.SwarmsComponent.GetMoveToTargetCurrBaseLocation
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x8cf1800
	// Params: [ Num(2) Size(0x7C) ]
	struct FVector GetMoveToTargetCurrBaseLocation(const struct FSwarmsMoveToTargetData& Target);

	// Object: Function Swarms.SwarmsComponent.GetIsFadeIn
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf17c8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFadeIn();

	// Object: Function Swarms.SwarmsComponent.GetCurrSpawnPoints
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf1740
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FVector> GetCurrSpawnPoints();

	// Object: Function Swarms.SwarmsComponent.GetCurrMaterial
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1694
	// Params: [ Num(2) Size(0x10) ]
	struct UMaterialInterface* GetCurrMaterial(int32_t LOD);

	// Object: Function Swarms.SwarmsComponent.FindMoveToTargetPathBaseLocation
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x8cf1538
	// Params: [ Num(4) Size(0x20) ]
	struct FVector FindMoveToTargetPathBaseLocation(const struct FVector& ActorLocation, const int32_t& CellIndex, const int32_t& LayerNum);

	// Object: Function Swarms.SwarmsComponent.FindMoveToTargetPath
	// Flags: [Final|Native|Protected|HasOutParms]
	// Offset: 0x8cf1434
	// Params: [ Num(1) Size(0x70) ]
	void FindMoveToTargetPath(struct FSwarmsMoveToTargetData& CurrTarget);

	// Object: Function Swarms.SwarmsComponent.FindMinOpenPoint
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cf12e0
	// Params: [ Num(3) Size(0x64) ]
	int32_t FindMinOpenPoint(const struct TArray<int32_t>& OpenCells, const struct TMap<int32_t, struct FSwarmsFindPathData>& FindPathDataset);

	// Object: Function Swarms.SwarmsComponent.FindDefaultSpawnPoint
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x8cf12a8
	// Params: [ Num(1) Size(0xC) ]
	struct FVector FindDefaultSpawnPoint();

	// Object: Function Swarms.SwarmsComponent.FindDeathMapCells
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf1294
	// Params: [ Num(0) Size(0x0) ]
	void FindDeathMapCells();

	// Object: Function Swarms.SwarmsComponent.DoUesBlockCellsInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf11f0
	// Params: [ Num(1) Size(0x4) ]
	void DoUesBlockCellsInfo(int32_t BlockIndex);

	// Object: Function Swarms.SwarmsComponent.DoTickCheckVoxel
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf11dc
	// Params: [ Num(0) Size(0x0) ]
	void DoTickCheckVoxel();

	// Object: Function Swarms.SwarmsComponent.DoTickCheckBlocks
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf112c
	// Params: [ Num(2) Size(0x5) ]
	uint8_t DoTickCheckBlocks(float DeltaTime);

	// Object: Function Swarms.SwarmsComponent.DoSingleCellCheck
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x8cf0fec
	// Params: [ Num(4) Size(0xF) ]
	uint8_t DoSingleCellCheck(struct FVector pos, uint8_t bCheckBlock, uint8_t bDrawDebugLine);

	// Object: Function Swarms.SwarmsComponent.DoInitBoids
	// Flags: [Native|Protected|HasOutParms]
	// Offset: 0x8cf0f30
	// Params: [ Num(1) Size(0x4) ]
	void DoInitBoids(const int32_t& Index);

	// Object: Function Swarms.SwarmsComponent.DoFindMoveToTargetPath
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x8cf0d8c
	// Params: [ Num(4) Size(0x24) ]
	void DoFindMoveToTargetPath(struct TArray<struct FVector>& BaseMovePath, const struct FVector& TargetLocalPosition, const int32_t& LocalCellIndex, const int32_t& LocalLayerNum);

	// Object: Function Swarms.SwarmsComponent.DoFindDeathMapCells
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0cb0
	// Params: [ Num(2) Size(0x8) ]
	void DoFindDeathMapCells(int32_t Y, int32_t Z);

	// Object: Function Swarms.SwarmsComponent.DoDsStop
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0c9c
	// Params: [ Num(0) Size(0x0) ]
	void DoDsStop();

	// Object: Function Swarms.SwarmsComponent.DoDsStart
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0c88
	// Params: [ Num(0) Size(0x0) ]
	void DoDsStart();

	// Object: Function Swarms.SwarmsComponent.DoCustomTick
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf0be4
	// Params: [ Num(1) Size(0x4) ]
	void DoCustomTick(float DeltaTime);

	// Object: Function Swarms.SwarmsComponent.DoCountMapCellsTarget
	// Flags: [Final|Native|Protected|Const]
	// Offset: 0x8cf0a48
	// Params: [ Num(6) Size(0xC) ]
	uint8_t DoCountMapCellsTarget(int32_t Y, int32_t Z, uint8_t Start, uint8_t End, uint8_t ForwardType);

	// Object: Function Swarms.SwarmsComponent.DoCountMapCellsMaxMoveDistance
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cf08c0
	// Params: [ Num(5) Size(0x14) ]
	float DoCountMapCellsMaxMoveDistance(int32_t Y, int32_t Z, float& Start, float& End);

	// Object: Function Swarms.SwarmsComponent.DoClientStop
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf08ac
	// Params: [ Num(0) Size(0x0) ]
	void DoClientStop();

	// Object: Function Swarms.SwarmsComponent.DoClientStart
	// Flags: [Native|Protected]
	// Offset: 0x8cf0890
	// Params: [ Num(0) Size(0x0) ]
	void DoClientStart();

	// Object: Function Swarms.SwarmsComponent.DoCheckSpawnPoint
	// Flags: [Final|Native|Protected|HasDefaults]
	// Offset: 0x8cf0768
	// Params: [ Num(4) Size(0x15) ]
	uint8_t DoCheckSpawnPoint(int32_t CellY, int32_t CellZ, struct FVector SpawnPoint);

	// Object: Function Swarms.SwarmsComponent.DoCheckBlock
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf068c
	// Params: [ Num(2) Size(0x8) ]
	void DoCheckBlock(int32_t Y, int32_t Z);

	// Object: Function Swarms.SwarmsComponent.DoAddDamageTarget
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x8cf0588
	// Params: [ Num(1) Size(0x70) ]
	void DoAddDamageTarget(const struct FSwarmsMoveToTargetData& CurrTarget);

	// Object: Function Swarms.SwarmsComponent.CreateISMComponent
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0574
	// Params: [ Num(0) Size(0x0) ]
	void CreateISMComponent();

	// Object: Function Swarms.SwarmsComponent.CountMapCellsMaxMoveDistance
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf045c
	// Params: [ Num(3) Size(0xC) ]
	void CountMapCellsMaxMoveDistance(int32_t Y, int32_t Z, int32_t LayerIndex);

	// Object: Function Swarms.SwarmsComponent.CountLOD
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0428
	// Params: [ Num(1) Size(0x4) ]
	int32_t CountLOD();

	// Object: Function Swarms.SwarmsComponent.ClientTestStop
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf0414
	// Params: [ Num(0) Size(0x0) ]
	void ClientTestStop();

	// Object: Function Swarms.SwarmsComponent.ClientTestStart
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf0400
	// Params: [ Num(0) Size(0x0) ]
	void ClientTestStart();

	// Object: Function Swarms.SwarmsComponent.ClientDrawBox
	// Flags: [Net|NetReliableNative|Event|Public|HasDefaults|NetClient]
	// Offset: 0x8cf0258
	// Params: [ Num(5) Size(0x38) ]
	void ClientDrawBox(struct FVector Center, struct FVector BoxSize, struct FQuat BoxQuat, struct FColor Color, float Lifetime);

	// Object: Function Swarms.SwarmsComponent.ClientCheckBlockCells
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0244
	// Params: [ Num(0) Size(0x0) ]
	void ClientCheckBlockCells();

	// Object: Function Swarms.SwarmsComponent.CheckVoxelData
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x8cf00e0
	// Params: [ Num(4) Size(0x21) ]
	uint8_t CheckVoxelData(struct TArray<uint8_t>& OutVoxelData, struct FIntVector& OutVoxelCount, const int32_t& BlockIndex);

	// Object: Function Swarms.SwarmsComponent.CheckTargetDistanceToCamera
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x8cf0024
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CheckTargetDistanceToCamera(const struct FVector& ActorLocation);

	// Object: Function Swarms.SwarmsComponent.CheckSpawnPoints
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cf0010
	// Params: [ Num(0) Size(0x0) ]
	void CheckSpawnPoints();

	// Object: Function Swarms.SwarmsComponent.CheckPathPoint
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x8ceff04
	// Params: [ Num(3) Size(0x19) ]
	uint8_t CheckPathPoint(const struct FVector& TargetPosition, const struct FVector& pathPoint);

	// Object: Function Swarms.SwarmsComponent.CheckParallelFindMoveToTargetPathTask
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cefef0
	// Params: [ Num(0) Size(0x0) ]
	void CheckParallelFindMoveToTargetPathTask();

	// Object: Function Swarms.SwarmsComponent.CheckLOD
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cefedc
	// Params: [ Num(0) Size(0x0) ]
	void CheckLOD();

	// Object: Function Swarms.SwarmsComponent.CheckIndex
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cefd7c
	// Params: [ Num(4) Size(0xA) ]
	uint8_t CheckIndex(const int32_t& Y, const int32_t& Z, const uint8_t& bShowError);

	// Object: Function Swarms.SwarmsComponent.CheckDiffuse
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults]
	// Offset: 0x8cefcc0
	// Params: [ Num(2) Size(0xD) ]
	uint8_t CheckDiffuse(const struct FVector& pos);

	// Object: Function Swarms.SwarmsComponent.CheckDamageTarget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|Const]
	// Offset: 0x8cefb14
	// Params: [ Num(5) Size(0x1C) ]
	float CheckDamageTarget(const struct FVector& Position, const float& radius, int32_t& CellIndex, int32_t& LayerNum);

	// Object: Function Swarms.SwarmsComponent.CheckDamageMapCell
	// Flags: [Final|Native|Protected|HasOutParms|HasDefaults|Const]
	// Offset: 0x8cef964
	// Params: [ Num(5) Size(0x19) ]
	uint8_t CheckDamageMapCell(const struct FVector& LocalPosition, const float& radius, int32_t& CellIndex, int32_t& LayerNum);

	// Object: Function Swarms.SwarmsComponent.CheckCurrBlockWaterHeight
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cef950
	// Params: [ Num(0) Size(0x0) ]
	void CheckCurrBlockWaterHeight();

	// Object: Function Swarms.SwarmsComponent.CheckCellIndex
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cef890
	// Params: [ Num(2) Size(0x5) ]
	uint8_t CheckCellIndex(const int32_t& Index);

	// Object: Function Swarms.SwarmsComponent.AddToOpenArray
	// Flags: [Final|Native|Protected|HasOutParms|Const]
	// Offset: 0x8cef4f8
	// Params: [ Num(10) Size(0x81) ]
	uint8_t AddToOpenArray(const int32_t& Y, const int32_t& Z, const float& Start, const float& End, const int32_t& ParentIndex, const float& MoveCost, const float& TargetX, struct TArray<int32_t>& OpenCells, struct TMap<int32_t, struct FSwarmsFindPathData>& FindPathDataset);

	// Object: Function Swarms.SwarmsComponent.AddDamageTarget
	// Flags: [Final|Native|Public]
	// Offset: 0x8cef39c
	// Params: [ Num(4) Size(0x14) ]
	void AddDamageTarget(struct APawn* Target, uint8_t bIsLocalPawn, int32_t CellIndex, int32_t LayerNum);

	// Object: Function Swarms.SwarmsComponent.AddCellDamageInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x8cef284
	// Params: [ Num(3) Size(0xC) ]
	void AddCellDamageInfo(int32_t Y, int32_t Z, int32_t Layer);
};

// Object: Class Swarms.SwarmsComponentCPU
// Size: 0x800 (Inherited: 0x800)
struct USwarmsComponentCPU : USwarmsComponent
{
	DEFINE_UE_CLASS_HELPERS(USwarmsComponentCPU, "SwarmsComponentCPU")

	// Object: Function Swarms.SwarmsComponentCPU.UpdateTransArray_Low
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf488c
	// Params: [ Num(1) Size(0x4) ]
	void UpdateTransArray_Low(float DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.UpdateTransArray
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf47e8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateTransArray(float DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.UpdateNoise
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf4734
	// Params: [ Num(1) Size(0x4) ]
	void UpdateNoise(const int32_t& Index);

	// Object: Function Swarms.SwarmsComponentCPU.UpdateFadeIn
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf4678
	// Params: [ Num(2) Size(0x8) ]
	float UpdateFadeIn(const int32_t& Index);

	// Object: Function Swarms.SwarmsComponentCPU.SimpleMoveWithNavPath
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf4588
	// Params: [ Num(2) Size(0x8) ]
	void SimpleMoveWithNavPath(const int32_t& Index, float MoveDis);

	// Object: Function Swarms.SwarmsComponentCPU.SetNavPath
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf4350
	// Params: [ Num(6) Size(0x3D) ]
	void SetNavPath(const int32_t& InCellIdxY, const int32_t& InCellIdxZ, const int32_t& Index, const struct FSwarmsMapCellData& InCell, const int32_t& LayerNum, uint8_t bIsNextPath);

	// Object: Function Swarms.SwarmsComponentCPU.MoveToTargetLerp
	// Flags: [Final|Native|Static|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf4118
	// Params: [ Num(7) Size(0x3C) ]
	static struct FVector MoveToTargetLerp(const struct FVector& offset, const struct FVector& From, const struct FVector& To, const float& FromRate, const float& ToRate, const float& Rate);

	// Object: Function Swarms.SwarmsComponentCPU.MoveToTarget
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf4038
	// Params: [ Num(2) Size(0x8) ]
	void MoveToTarget(uint16_t Index, float DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.GetNavPath
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf3ed8
	// Params: [ Num(4) Size(0x18) ]
	struct FVector GetNavPath(const float& TargetX, const int32_t& IndexY, const int32_t& IndexZ);

	// Object: Function Swarms.SwarmsComponentCPU.DoUpdateTransArray_Low
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf3df8
	// Params: [ Num(2) Size(0x8) ]
	void DoUpdateTransArray_Low(float DeltaTime, int32_t Index);

	// Object: Function Swarms.SwarmsComponentCPU.DoUpdateTransArray
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf3d18
	// Params: [ Num(2) Size(0x8) ]
	void DoUpdateTransArray(float DeltaTime, int32_t Index);

	// Object: Function Swarms.SwarmsComponentCPU.DoSimpleMoveWithNavPath
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf3bbc
	// Params: [ Num(4) Size(0x15) ]
	uint8_t DoSimpleMoveWithNavPath(const int32_t& Index, const struct FVector& NavPathPoint, float& MoveDis);

	// Object: Function Swarms.SwarmsComponentCPU.DoInitBoids_Low
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf3b08
	// Params: [ Num(1) Size(0x4) ]
	void DoInitBoids_Low(const int32_t& I);

	// Object: Function Swarms.SwarmsComponentCPU.CheckTargetVelocity
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf3a08
	// Params: [ Num(2) Size(0x8) ]
	void CheckTargetVelocity(const int32_t& Index, const float& DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.CheckSpawnState
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf3954
	// Params: [ Num(1) Size(0x4) ]
	void CheckSpawnState(const int32_t& Index);

	// Object: Function Swarms.SwarmsComponentCPU.CheckNextNavPath
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf3858
	// Params: [ Num(2) Size(0x10) ]
	void CheckNextNavPath(const int32_t& Index, const struct FVector& Position);

	// Object: Function Swarms.SwarmsComponentCPU.CheckMapCells_Low
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf375c
	// Params: [ Num(2) Size(0x10) ]
	void CheckMapCells_Low(const int32_t& Index, struct FVector& TargetPosition);

	// Object: Function Swarms.SwarmsComponentCPU.CheckMapCells
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf3660
	// Params: [ Num(2) Size(0x10) ]
	void CheckMapCells(const int32_t& Index, struct FVector& TargetPosition);

	// Object: Function Swarms.SwarmsComponentCPU.CheckMainVolume
	// Flags: [Final|Native|Private|HasOutParms|HasDefaults]
	// Offset: 0x8cf3564
	// Params: [ Num(2) Size(0x10) ]
	void CheckMainVolume(const int32_t& Index, struct FVector& TargetPosition);

	// Object: Function Swarms.SwarmsComponentCPU.CheckFadeIn_Low
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf3464
	// Params: [ Num(2) Size(0x8) ]
	void CheckFadeIn_Low(const int32_t& Index, const float& DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.CheckFadeIn
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf3364
	// Params: [ Num(2) Size(0x8) ]
	void CheckFadeIn(const int32_t& Index, const float& DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.CheckDamageBox
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x8cf32b0
	// Params: [ Num(1) Size(0x4) ]
	void CheckDamageBox(const int32_t& Index);

	// Object: Function Swarms.SwarmsComponentCPU.BaseUpdateTrans_Low
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf31d0
	// Params: [ Num(2) Size(0x8) ]
	void BaseUpdateTrans_Low(uint16_t Index, float DeltaTime);

	// Object: Function Swarms.SwarmsComponentCPU.BaseUpdateTrans
	// Flags: [Final|Native|Private]
	// Offset: 0x8cf30f0
	// Params: [ Num(2) Size(0x8) ]
	void BaseUpdateTrans(uint16_t Index, float DeltaTime);
};

// Object: Class Swarms.TestSwarmsActor
// Size: 0x3E8 (Inherited: 0x370)
struct ATestSwarmsActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ATestSwarmsActor, "TestSwarmsActor")

	uint8_t Pad_0x370[0x8]; // 0x370(0x8)
	uint8_t bIsTick : 1; // 0x378(0x1), Mask(0x1)
	uint8_t BitPad_0x378_1 : 7; // 0x378(0x1)
	uint8_t bIsDebugDestroy : 1; // 0x379(0x1), Mask(0x1)
	uint8_t BitPad_0x379_1 : 7; // 0x379(0x1)
	uint8_t bIsEnemySwarms : 1; // 0x37A(0x1), Mask(0x1)
	uint8_t BitPad_0x37A_1 : 7; // 0x37A(0x1)
	ESwarmsQualityLevel QualityLevel; // 0x37B(0x1)
	float CheckEnemyDelay; // 0x37C(0x4)
	ECollisionChannel TargetTraceChannel; // 0x380(0x1)
	uint8_t Pad_0x381[0x7]; // 0x381(0x7)
	struct USwarmsComponent* SwarmsComponent; // 0x388(0x8)
	uint8_t Pad_0x390[0x58]; // 0x390(0x58)

	// Object: Function Swarms.TestSwarmsActor.SubCheckOverlapResult
	// Flags: [Final|Native|Public]
	// Offset: 0x8cf4ba4
	// Params: [ Num(2) Size(0x9) ]
	uint8_t SubCheckOverlapResult(struct APawn* Char);

	// Object: Function Swarms.TestSwarmsActor.MultiAddDamageTarget
	// Flags: [Net|NetReliableNative|Event|NetMulticast|Public]
	// Offset: 0x8cf4a40
	// Params: [ Num(4) Size(0x14) ]
	void MultiAddDamageTarget(struct APawn* Target, uint8_t bIsLocalPawn, int32_t CellIndex, int32_t LayerNum);
};

} // namespace SDK
