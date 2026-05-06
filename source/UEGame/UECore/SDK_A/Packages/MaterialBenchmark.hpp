#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: MaterialBenchmark
// Enums: 1
// Structs: 3
// Classes: 5

struct UDataTable;
struct UMaterialInterface;
struct FMaterialBenchmarkDataRow;
struct FMaterialBenchmarkStat;
struct FMaterialBenchmarkInfo;
struct AAnchorPointsRecorder;
struct AMaterialBenchmarkCmdsSeq;
struct UMaterialBenchmarkExtensionLib;
struct AMaterialBenchmarkUtilsActor;
struct AMaterialBenchmarkStatActor;

// Object: Enum MaterialBenchmark.EExecType
enum class EExecType : uint8_t
{
	EET_PerBooth = 0,
	EET_AllBooths = 1,
	EET_UseDynamicBooth = 2,
	EET_Num = 3,
	EET_MAX = 4
};

// Object: ScriptStruct MaterialBenchmark.MaterialBenchmarkDataRow
// Size: 0x20 (Inherited: 0x8)
struct FMaterialBenchmarkDataRow : FTableRowBase
{
	struct FString MaterialPath; // 0x8(0x10)
	uint8_t BlendMode; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
};

// Object: ScriptStruct MaterialBenchmark.MaterialBenchmarkStat
// Size: 0x50 (Inherited: 0x0)
struct FMaterialBenchmarkStat
{
	struct FDateTime CurrentDateTime; // 0x0(0x8)
	int32_t FrameCount; // 0x8(0x4)
	float TimeSecs; // 0xC(0x4)
	float FPS; // 0x10(0x4)
	int32_t PointLightNum; // 0x14(0x4)
	struct FString MaterialPath; // 0x18(0x10)
	struct FString BaseMaterialPath; // 0x28(0x10)
	uint8_t BlendMode; // 0x38(0x1)
	uint8_t Pad_0x39[0x3]; // 0x39(0x3)
	int32_t BoothID; // 0x3C(0x4)
	float FrameTime; // 0x40(0x4)
	float GameTime; // 0x44(0x4)
	float DrawTime; // 0x48(0x4)
	float GPUTime; // 0x4C(0x4)
};

// Object: ScriptStruct MaterialBenchmark.MaterialBenchmarkInfo
// Size: 0x88 (Inherited: 0x0)
struct FMaterialBenchmarkInfo
{
	struct FString CSVSavePathBase; // 0x0(0x10)
	struct FString BranchName; // 0x10(0x10)
	struct FString BuildTime; // 0x20(0x10)
	struct FString AppVersion; // 0x30(0x10)
	struct FString BuildConfig; // 0x40(0x10)
	bool bHasLightMap; // 0x50(0x1)
	bool bHasClimateSystem; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FString MapPath; // 0x58(0x10)
	struct FString MapName; // 0x68(0x10)
	struct FString Gfx; // 0x78(0x10)
};

// Object: Class MaterialBenchmark.AnchorPointsRecorder
// Size: 0x3F8 (Inherited: 0x300)
struct AAnchorPointsRecorder : AActor
{
	DEFINE_UE_CLASS_HELPERS(AAnchorPointsRecorder, "AnchorPointsRecorder")

	int32_t NextAnchorBoothID; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	struct TMap<int32_t, struct FVector> AnchorPoints; // 0x308(0x50)
	struct TMap<int32_t, struct FString> MaterialPaths; // 0x358(0x50)
	struct TMap<int32_t, struct UMaterialInterface*> Materials; // 0x3A8(0x50)

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.IncreaseNextAnchorBoothID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406cfa4
	// Params: [ Num(0) Size(0x0) ]
	void IncreaseNextAnchorBoothID();

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.GetNextAnchorBoothID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406cfc4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNextAnchorBoothID();

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.DoMBTransport
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406d4f0
	// Params: [ Num(1) Size(0x4) ]
	void DoMBTransport(int32_t BoothID);

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.DeleteBoothIDToMaterialPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406d170
	// Params: [ Num(1) Size(0x4) ]
	void DeleteBoothIDToMaterialPath(int32_t BoothID);

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.DeleteBoothIDToMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406cfe0
	// Params: [ Num(1) Size(0x4) ]
	void DeleteBoothIDToMaterial(int32_t BoothID);

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.DeleteAnchorPoints
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406d360
	// Params: [ Num(1) Size(0x4) ]
	void DeleteAnchorPoints(int32_t BoothID);

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.AddBoothIDToMaterialPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406d218
	// Params: [ Num(2) Size(0x18) ]
	void AddBoothIDToMaterialPath(int32_t BoothID, struct FString MaterialPath);

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.AddBoothIDToMaterial
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x406d088
	// Params: [ Num(2) Size(0x10) ]
	void AddBoothIDToMaterial(int32_t BoothID, struct UMaterialInterface* Material);

	// Object: Function MaterialBenchmark.AnchorPointsRecorder.AddAnchorPoints
	// Flags: [Final|Native|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x406d408
	// Params: [ Num(2) Size(0x10) ]
	void AddAnchorPoints(int32_t BoothID, struct FVector AnchorPos);
};

// Object: Class MaterialBenchmark.MaterialBenchmarkCmdsSeq
// Size: 0x3E0 (Inherited: 0x300)
struct AMaterialBenchmarkCmdsSeq : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMaterialBenchmarkCmdsSeq, "MaterialBenchmarkCmdsSeq")

	float SecondsBeforeAutomation; // 0x300(0x4)
	float Interval; // 0x304(0x4)
	EExecType ExecType; // 0x308(0x4)
	uint8_t Pad_0x30C[0x4]; // 0x30C(0x4)
	struct UDataTable* MaterialDataTable; // 0x310(0x8)
	struct TArray<struct FString> CmdsBeforeAutomation; // 0x318(0x10)
	struct TArray<struct FString> AutomationCmds; // 0x328(0x10)
	struct TArray<struct FString> AllCmdsNeedExec; // 0x338(0x10)
	float TimeLastCommandExec; // 0x348(0x4)
	int32_t IdxLastCmdExec; // 0x34C(0x4)
	struct TWeakObjectPtr<struct AAnchorPointsRecorder> CachedAnchorPointsRecorder; // 0x350(0x8)
	int32_t CurBoothID; // 0x358(0x4)
	uint8_t Pad_0x35C[0x4]; // 0x35C(0x4)
	struct FString CurMaterialPath; // 0x360(0x10)
	struct FString CurBaseMaterialPath; // 0x370(0x10)
	uint8_t CurBlendMode; // 0x380(0x1)
	uint8_t Pad_0x381[0x3]; // 0x381(0x3)
	int32_t CurPointLightNum; // 0x384(0x4)
	struct TMap<struct FString, struct UMaterialInterface*> TestMaterials; // 0x388(0x50)
	uint8_t Pad_0x3D8[0x8]; // 0x3D8(0x8)

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.UpdateDataOnCmdExec
	// Flags: [Final|Native|Public]
	// Offset: 0x406d698
	// Params: [ Num(1) Size(0x4) ]
	void UpdateDataOnCmdExec(int32_t CmdIdx);

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.LoadAllTestMaterials
	// Flags: [Final|Native|Public]
	// Offset: 0x406d648
	// Params: [ Num(0) Size(0x0) ]
	void LoadAllTestMaterials();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.IfEnableAutomation
	// Flags: [Final|Native|Public]
	// Offset: 0x406d778
	// Params: [ Num(1) Size(0x1) ]
	bool IfEnableAutomation();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.ExecCmds
	// Flags: [Final|Native|Public]
	// Offset: 0x406d7d8
	// Params: [ Num(2) Size(0x11) ]
	void ExecCmds(struct TArray<struct FString> Cmds, bool bForceExec);

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.CanExecCmdThisFrame
	// Flags: [Final|Native|Public]
	// Offset: 0x406d740
	// Params: [ Num(1) Size(0x1) ]
	bool CanExecCmdThisFrame();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.CacheDataInTheScene
	// Flags: [Final|Native|Public]
	// Offset: 0x406d7b0
	// Params: [ Num(0) Size(0x0) ]
	void CacheDataInTheScene();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.BuildAllCmdsNeedExecPerBooth
	// Flags: [Final|Native|Public]
	// Offset: 0x406d684
	// Params: [ Num(0) Size(0x0) ]
	void BuildAllCmdsNeedExecPerBooth();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.BuildAllCmdsNeedExecByDynamicBooth
	// Flags: [Final|Native|Public]
	// Offset: 0x406d65c
	// Params: [ Num(0) Size(0x0) ]
	void BuildAllCmdsNeedExecByDynamicBooth();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.BuildAllCmdsNeedExecAllBooth
	// Flags: [Final|Native|Public]
	// Offset: 0x406d670
	// Params: [ Num(0) Size(0x0) ]
	void BuildAllCmdsNeedExecAllBooth();

	// Object: Function MaterialBenchmark.MaterialBenchmarkCmdsSeq.BuildAllCmdsNeedExec
	// Flags: [Final|Native|Public]
	// Offset: 0x406d7c4
	// Params: [ Num(0) Size(0x0) ]
	void BuildAllCmdsNeedExec();
};

// Object: Class MaterialBenchmark.MaterialBenchmarkExtensionLib
// Size: 0x28 (Inherited: 0x28)
struct UMaterialBenchmarkExtensionLib : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMaterialBenchmarkExtensionLib, "MaterialBenchmarkExtensionLib")

	// Object: Function MaterialBenchmark.MaterialBenchmarkExtensionLib.GetConsoleVariableStringValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x406db4c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetConsoleVariableStringValue(struct FString CVarName);

	// Object: Function MaterialBenchmark.MaterialBenchmarkExtensionLib.GetConsoleVariableInt32Value
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x406da94
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetConsoleVariableInt32Value(struct FString CVarName);

	// Object: Function MaterialBenchmark.MaterialBenchmarkExtensionLib.GetConsoleVariableFloatValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x406d9e0
	// Params: [ Num(2) Size(0x14) ]
	static float GetConsoleVariableFloatValue(struct FString CVarName);

	// Object: Function MaterialBenchmark.MaterialBenchmarkExtensionLib.GetConsoleVariableBoolValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x406d924
	// Params: [ Num(2) Size(0x11) ]
	static bool GetConsoleVariableBoolValue(struct FString CVarName);
};

// Object: Class MaterialBenchmark.MaterialBenchmarkUtilsActor
// Size: 0x300 (Inherited: 0x300)
struct AMaterialBenchmarkUtilsActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMaterialBenchmarkUtilsActor, "MaterialBenchmarkUtilsActor")
};

// Object: Class MaterialBenchmark.MaterialBenchmarkStatActor
// Size: 0x4D0 (Inherited: 0x300)
struct AMaterialBenchmarkStatActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(AMaterialBenchmarkStatActor, "MaterialBenchmarkStatActor")

	int32_t StatsRecordFrequency; // 0x300(0x4)
	uint8_t Pad_0x304[0x4]; // 0x304(0x4)
	struct FMaterialBenchmarkInfo Info; // 0x308(0x88)
	struct TWeakObjectPtr<struct AMaterialBenchmarkCmdsSeq> CachedCmdsSeq; // 0x390(0x8)
	struct TWeakObjectPtr<struct AAnchorPointsRecorder> CachedAnchorPointsRecorder; // 0x398(0x8)
	EExecType CachedExecType; // 0x3A0(0x4)
	uint8_t Pad_0x3A4[0x12C]; // 0x3A4(0x12C)
};

} // namespace SDK
