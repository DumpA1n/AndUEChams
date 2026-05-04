#pragma once

#include "../CoreUObject_classes.hpp"
#include "GameCore.hpp"

namespace SDK
{

// Package: DataTableLoader
// Enums: 2
// Structs: 12
// Classes: 3

enum class EDataTableUseScene : uint8_t;
enum class EGameFlowStageType : uint8_t;
struct FDataTableUseSceneValue;
struct UWorld;
struct FDataTableGameFlow2Scene;
struct FDataTableHotfixedData;
struct FDataTableHotfixFilePackage;
struct FDataTableHotfixFile;
struct FDataTableHotfixCell;
struct FDataTableHotfixNotifier;
struct FDataTableHotfixEventBridge;
struct FDataTableHotfixEventHandle;
struct FCSVZipPkg;
struct FCSVZipTable;
struct FDataTableHotfixC2SParam;
struct FDataTableHotfixParam;
struct UDataTableGameFlow2SceneManager;
struct UDataTableHotfixer;
struct UDataTableLoader;

// Object: Enum DataTableLoader.EDataTableHotfixFileState
enum class EDataTableHotfixFileState : uint8_t
{
	EState_Obsoleted = 0,
	EState_WaitSync = 1,
	EState_Synced = 2,
	EState_Overrided = 4,
	EState_WaitNofity = 8,
	EState_MAX = 9
};

// Object: Enum DataTableLoader.EDataTableLoaderGameScene
enum class EDataTableLoaderGameScene : uint8_t
{
	GameScene_None = 0,
	GameScene_SOL = 1,
	GameScene_BattleField = 2,
	GameScene_MAX = 3
};

// Object: ScriptStruct DataTableLoader.DataTableGameFlow2Scene
// Size: 0x18 (Inherited: 0x10)
struct FDataTableGameFlow2Scene : FDescRowBase
{
	EDataTableUseScene UseScene; // 0x10(0x1)
	EGameFlowStageType GameFlow; // 0x11(0x1)
	uint8_t Pad_0x12[0x6]; // 0x12(0x6)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixedData
// Size: 0x30 (Inherited: 0x0)
struct FDataTableHotfixedData
{
	uint8_t Result : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x3]; // 0x1(0x3)
	struct FName TableName; // 0x4(0x8)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString MD5; // 0x10(0x10)
	struct TArray<struct FString> Keys; // 0x20(0x10)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixFilePackage
// Size: 0x68 (Inherited: 0x0)
struct FDataTableHotfixFilePackage
{
	uint8_t Pad_0x0[0x68]; // 0x0(0x68)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixFile
// Size: 0x88 (Inherited: 0x0)
struct FDataTableHotfixFile
{
	uint8_t Pad_0x0[0x88]; // 0x0(0x88)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixCell
// Size: 0x28 (Inherited: 0x0)
struct FDataTableHotfixCell
{
	uint8_t Pad_0x0[0x28]; // 0x0(0x28)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixNotifier
// Size: 0x58 (Inherited: 0x0)
struct FDataTableHotfixNotifier
{
	uint8_t Pad_0x0[0x58]; // 0x0(0x58)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixEventBridge
// Size: 0x18 (Inherited: 0x0)
struct FDataTableHotfixEventBridge
{
	struct FName DataTableName; // 0x0(0x8)
	struct TArray<struct FDataTableHotfixEventHandle> EventHandles; // 0x8(0x10)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixEventHandle
// Size: 0x18 (Inherited: 0x0)
struct FDataTableHotfixEventHandle
{
	int64_t Token; // 0x0(0x8)
	struct FDelegate Event; // 0x8(0x10)
};

// Object: ScriptStruct DataTableLoader.CSVZipPkg
// Size: 0x28 (Inherited: 0x0)
struct FCSVZipPkg
{
	uint64_t Seq; // 0x0(0x8)
	uint64_t Idx; // 0x8(0x8)
	uint64_t Total; // 0x10(0x8)
	struct TArray<struct FCSVZipTable> Tables; // 0x18(0x10)
};

// Object: ScriptStruct DataTableLoader.CSVZipTable
// Size: 0x50 (Inherited: 0x0)
struct FCSVZipTable
{
	uint8_t bCompress : 1; // 0x0(0x1), Mask(0x1)
	uint8_t BitPad_0x0_1 : 7; // 0x0(0x1)
	uint8_t Pad_0x1[0x7]; // 0x1(0x7)
	uint64_t Source_CSV_Size; // 0x8(0x8)
	struct FString CSV; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
	struct FString CSV_Name; // 0x30(0x10)
	struct FString Hash; // 0x40(0x10)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixC2SParam
// Size: 0x20 (Inherited: 0x0)
struct FDataTableHotfixC2SParam
{
	uint64_t Token; // 0x0(0x8)
	struct FName Name; // 0x8(0x8)
	struct FString Hash; // 0x10(0x10)
};

// Object: ScriptStruct DataTableLoader.DataTableHotfixParam
// Size: 0x40 (Inherited: 0x0)
struct FDataTableHotfixParam
{
	int32_t ReceiveCount; // 0x0(0x4)
	int32_t HotfixCount; // 0x4(0x4)
	struct FName TableName; // 0x8(0x8)
	struct FString MD5; // 0x10(0x10)
	struct FString Header; // 0x20(0x10)
	struct FString Content; // 0x30(0x10)
};

// Object: Class DataTableLoader.DataTableGameFlow2SceneManager
// Size: 0x40 (Inherited: 0x30)
struct UDataTableGameFlow2SceneManager : UDataTableSystemManagerBase
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	DEFINE_UE_CLASS_HELPERS(UDataTableGameFlow2SceneManager, "DataTableGameFlow2SceneManager")

};

// Object: Class DataTableLoader.DataTableHotfixer
// Size: 0x1C8 (Inherited: 0x30)
struct UDataTableHotfixer : UGPSubsystemBase
{
	struct FMulticastInlineDelegate OnHotfixDatatableFinishCallback; // 0x30(0x10)
	struct FMulticastInlineDelegate OnHotfixDataTableCallback; // 0x40(0x10)
	uint8_t Pad_0x50[0x178]; // 0x50(0x178)


	// Object: Function DataTableLoader.DataTableHotfixer.WriteTable
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7b2f8d8
	// Params: [ Num(1) Size(0x50) ]
	void WriteTable(struct FCSVZipTable& InParam);

	// Object: Function DataTableLoader.DataTableHotfixer.Write
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7b2f814
	// Params: [ Num(1) Size(0x28) ]
	void Write(struct FCSVZipPkg& InParam);

	// Object: Function DataTableLoader.DataTableHotfixer.RemoveHotfixCallback
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f770
	// Params: [ Num(1) Size(0x8) ]
	void RemoveHotfixCallback(int64_t Token);

	// Object: Function DataTableLoader.DataTableHotfixer.ProcessBegin
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f75c
	// Params: [ Num(0) Size(0x0) ]
	void ProcessBegin();

	// Object: Function DataTableLoader.DataTableHotfixer.OnFinishLoadDataTable
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x10675f18
	// Params: [ Num(2) Size(0xC) ]
	void OnFinishLoadDataTable(const struct FDataTableUseSceneValue& UseSceneValue, int32_t LoadedNum);

	// Object: Function DataTableLoader.DataTableHotfixer.OnBeginLoadDataTable
	// Flags: [Final|Native|Private]
	// Offset: 0xfc60e34
	// Params: [ Num(0) Size(0x0) ]
	void OnBeginLoadDataTable();

	// Object: Function DataTableLoader.DataTableHotfixer.ManualClear
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7b2f748
	// Params: [ Num(0) Size(0x0) ]
	static void ManualClear();

	// Object: Function DataTableLoader.DataTableHotfixer.IsOverrided
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f710
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsOverrided();

	// Object: Function DataTableLoader.DataTableHotfixer.IsEnableDebug
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f6d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableDebug();

	// Object: Function DataTableLoader.DataTableHotfixer.IsEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f6b8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnable();

	// Object: Function DataTableLoader.DataTableHotfixer.GetHotfixedPropertyKeysFromTableName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7b2f5e8
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FString> GetHotfixedPropertyKeysFromTableName(const struct FName& DataTableKey);

	// Object: Function DataTableLoader.DataTableHotfixer.GetHotfixedMD5FromTableName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7b2f4f8
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetHotfixedMD5FromTableName(const struct FName& DataTableKey);

	// Object: Function DataTableLoader.DataTableHotfixer.GetHotfixedKeysFromTableName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7b2f3f0
	// Params: [ Num(2) Size(0x18) ]
	void GetHotfixedKeysFromTableName(const struct FName& DataTableKey, struct TArray<struct FString>& Result);

	// Object: Function DataTableLoader.DataTableHotfixer.GetHotFixedDataTableNames
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f358
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FName> GetHotFixedDataTableNames();

	// Object: Function DataTableLoader.DataTableHotfixer.GetHotfixedDataFromTableName
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x7b2f1f4
	// Params: [ Num(3) Size(0x40) ]
	struct FDataTableHotfixedData GetHotfixedDataFromTableName(const struct FName& DataTableKey, uint8_t bContainedKeys);

	// Object: Function DataTableLoader.DataTableHotfixer.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf83c9d4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDataTableHotfixer* Get(struct UObject* WorldContextObject);

	// Object: Function DataTableLoader.DataTableHotfixer.EndWriteTable
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2f1e0
	// Params: [ Num(0) Size(0x0) ]
	void EndWriteTable();

	// Object: Function DataTableLoader.DataTableHotfixer.Dump
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x7b2f1cc
	// Params: [ Num(0) Size(0x0) ]
	static void Dump();

	// Object: Function DataTableLoader.DataTableHotfixer.DebugWrite
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2ee74
	// Params: [ Num(6) Size(0x58) ]
	void DebugWrite(uint64_t InToken, struct FString InName, struct FString InHash, struct FString InHeader, struct FString InKeys, struct FString InValues);

	// Object: Function DataTableLoader.DataTableHotfixer.Debug4Write
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x7b2ed84
	// Params: [ Num(2) Size(0x18) ]
	static void Debug4Write(const struct TArray<struct FString>& Args, struct UWorld* World);

	// Object: Function DataTableLoader.DataTableHotfixer.CollectC2SParam
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2ecc4
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FDataTableHotfixC2SParam> CollectC2SParam(uint64_t InToken);

	// Object: Function DataTableLoader.DataTableHotfixer.BeginWriteTable
	// Flags: [Final|Native|Public]
	// Offset: 0x7b2ebac
	// Params: [ Num(3) Size(0x18) ]
	void BeginWriteTable(uint64_t Toekn, uint64_t Total, uint64_t Index);

	// Object: Function DataTableLoader.DataTableHotfixer.AddHotfixCallback
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xfa3708c
	// Params: [ Num(3) Size(0x20) ]
	int64_t AddHotfixCallback(const struct FName& DataTableKey, struct FDelegate callback);
	DEFINE_UE_CLASS_HELPERS(UDataTableHotfixer, "DataTableHotfixer")

};

// Object: Class DataTableLoader.DataTableLoader
// Size: 0x38 (Inherited: 0x30)
struct UDataTableLoader : UGPSubsystemBase
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)


	// Object: Function DataTableLoader.DataTableLoader.SetRunMainGameFlow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x101ae300
	// Params: [ Num(1) Size(0x1) ]
	void SetRunMainGameFlow(uint8_t inbRunMainGameFlow);

	// Object: Function DataTableLoader.DataTableLoader.SetClientGameScene
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10747560
	// Params: [ Num(2) Size(0x10) ]
	static void SetClientGameScene(EDataTableLoaderGameScene inClientGameMode, struct UObject* WorldContextObject);

	// Object: Function DataTableLoader.DataTableLoader.ReportsDataTableLoadingInfo
	// Flags: [Final|Native|Protected]
	// Offset: 0x7b2fb54
	// Params: [ Num(2) Size(0x20) ]
	void ReportsDataTableLoadingInfo(struct FString ReportsKey, struct FString ReportsInfo);

	// Object: Function DataTableLoader.DataTableLoader.OnProcessPreEnterGameFlowStage
	// Flags: [Final|Native|Protected]
	// Offset: 0xf906708
	// Params: [ Num(1) Size(0x1) ]
	void OnProcessPreEnterGameFlowStage(EGameFlowStageType GameFlowStage);

	// Object: Function DataTableLoader.DataTableLoader.OnProcessPostLeaveGameFlowStage
	// Flags: [Final|Native|Protected]
	// Offset: 0xf892ebc
	// Params: [ Num(1) Size(0x1) ]
	void OnProcessPostLeaveGameFlowStage(EGameFlowStageType GameFlowStage);

	// Object: Function DataTableLoader.DataTableLoader.OnProcessDataTableManagerLiteInitResourcesCallBack
	// Flags: [Final|Native|Protected]
	// Offset: 0xf9063b8
	// Params: [ Num(0) Size(0x0) ]
	void OnProcessDataTableManagerLiteInitResourcesCallBack();

	// Object: Function DataTableLoader.DataTableLoader.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7b2fab0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDataTableLoader* Get(struct UObject* WorldContextObject);
	DEFINE_UE_CLASS_HELPERS(UDataTableLoader, "DataTableLoader")

};

} // namespace SDK
