#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GPTools.hpp"

namespace SDK
{

// Package: MetaDorian
// Enums: 1
// Structs: 0
// Classes: 48

struct AActor;
struct ABrush;
struct ACHARACTER;
struct ACameraActor;
struct AController;
struct ADefaultPawn;
struct AGameModeBase;
struct AGameStateBase;
struct APawn;
struct APlayerCameraManager;
struct APlayerController;
struct APlayerState;
struct ASceneCapture2D;
struct AStaticMeshActor;
struct ATriggerBase;
enum class EComponentReplicationFlags : uint8_t;
enum class ENetRole : uint8_t;
enum class ERenderMatrixMode : uint8_t;
enum class ETeleportType : uint8_t;
enum class ETravelType : uint8_t;
struct FBasedMovementInfo;
struct FGameplayResourceSet;
struct FHitResult;
struct FRepMovement;
struct FURL;
struct FWorldContext;
struct UAISystemBase;
struct UActorComponent;
struct UAvoidanceManager;
struct UBrushComponent;
struct UCameraComponent;
struct UCapsuleComponent;
struct UCharacterMovementComponent;
struct UEngine;
struct UEngineSubsystem;
struct UGameInstance;
struct UGameInstanceSubsystem;
struct UInputComponent;
struct ULevelStreaming;
struct UMaterialInterface;
struct UMovementComponent;
struct UNavigationSystemBase;
struct UNetDriver;
struct UPanelWidget;
struct UPendingNetGame;
struct UPrimitiveComponent;
struct USceneCaptureComponent2D;
struct USceneComponent;
struct UShapeComponent;
struct USkeletalMeshComponent;
struct USphereComponent;
struct UStaticMesh;
struct UStaticMeshComponent;
struct UWidget;
struct UWorld;
struct UWorldSubsystem;
struct UGPTMetaDorianNative;
struct UMetaDorianUtils;
struct UMetaDorianManager;
struct UMTAndroidJNI;
struct UMTAPI_UWidget;
struct UMTAPI_UPanelWidget;
struct UMTAPI_FGameplayResourceSet;
struct UMTAPI_UEngine;
struct UMTAPI_UGameInstance;
struct UMTAPI_UWorld;
struct UMTAPI_UAssetManager;
struct UMTAPI_ABrush;
struct UMTAPI_ASceneCapture2D;
struct UMTAPI_AStaticMeshActor;
struct UMTAPI_ATriggerBase;
struct UMTAPI_AActor;
struct UMTAPI_APlayerState;
struct UMTAPI_APlayerCameraManager;
struct UMTAPI_ACameraActor;
struct UMTAPI_AController;
struct UMTAPI_APawn;
struct UMTAPI_ACharacter;
struct UMTAPI_UNavMovementComponent;
struct UMTAPI_UMovementComponent;
struct UMTAPI_UCharacterMovementComponent;
struct UMTAPI_UStaticMeshComponent;
struct UMTAPI_UActorComponent;
struct UMTAPI_UPrimitiveComponent;
struct UMTAPI_USceneComponent;
struct UMTAPI_UObject;
struct UMTAPI_FUObjectArray;
struct UMTAPI_FScriptInterface;
struct UMTAPI_NameTypes;
struct UMTAPI_TypeHash;
struct UMTAPI_CoreMisc;
struct UMTAPI_FGenericPlatformTime;
struct UMTAPI_FGenericPlatformMisc;
struct UMTAPI_FGenericPlatformMemory;
struct UMTAPI_FApp;
struct UMTAPI_UnrealString;
struct UMTAPI_CoreGlobals;
struct UMTAPI_Math;
struct UMTAppUtils;
struct UMTDorianSOVerInfo;
struct UMTDorianSOUpdater;
struct UMTFileUtils;
struct UMTHttpLoader;
struct UMTOpenHarmony;

// Object: Enum MetaDorian.EMTHttpLoaderResult
enum class EMTHttpLoaderResult : uint8_t
{
	Succeeded = 0,
	Failed = 1,
	InvalidURL = 2,
	EMTHttpLoaderResult_MAX = 3
};

// Object: Class MetaDorian.GPTMetaDorianNative
// Size: 0x50 (Inherited: 0x50)
struct UGPTMetaDorianNative : UGPToolBase
{	DEFINE_UE_CLASS_HELPERS(UGPTMetaDorianNative, "GPTMetaDorianNative")

};

// Object: Class MetaDorian.MetaDorianUtils
// Size: 0x38 (Inherited: 0x30)
struct UMetaDorianUtils : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x8]; // 0x30(0x8)


	// Object: Function MetaDorian.MetaDorianUtils.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c018
	// Params: [ Num(1) Size(0x8) ]
	static struct UMetaDorianUtils* Get();

	// Object: Function MetaDorian.MetaDorianUtils.DisplayMessage
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554bea8
	// Params: [ Num(2) Size(0x20) ]
	static void DisplayMessage(struct FString Title, struct FString Content);
	DEFINE_UE_CLASS_HELPERS(UMetaDorianUtils, "MetaDorianUtils")

};

// Object: Class MetaDorian.MetaDorianManager
// Size: 0x70 (Inherited: 0x30)
struct UMetaDorianManager : UEngineSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FMulticastInlineDelegate OnDorianSOUpdaterComplete; // 0x40(0x10)
	struct FString DorianSOStubPath; // 0x50(0x10)
	struct FString DorianSOLibPath; // 0x60(0x10)


	// Object: Function MetaDorian.MetaDorianManager.TryGetLuaScriptRealPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554db3c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString TryGetLuaScriptRealPath(struct FString ScriptPath);

	// Object: Function MetaDorian.MetaDorianManager.StopStubTesting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554db28
	// Params: [ Num(0) Size(0x0) ]
	static void StopStubTesting();

	// Object: Function MetaDorian.MetaDorianManager.StartStubTesting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554da0c
	// Params: [ Num(3) Size(0x24) ]
	static void StartStubTesting(struct FString ModuleName, struct FString HubFuncName, int32_t Flag);

	// Object: Function MetaDorian.MetaDorianManager.ShowStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d924
	// Params: [ Num(2) Size(0x2) ]
	static void ShowStat(uint8_t bShow, uint8_t bFull);

	// Object: Function MetaDorian.MetaDorianManager.SetStubProfilerRecordSize
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d890
	// Params: [ Num(1) Size(0x4) ]
	static void SetStubProfilerRecordSize(int32_t size);

	// Object: Function MetaDorian.MetaDorianManager.SetStubProfilerEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d7f4
	// Params: [ Num(1) Size(0x1) ]
	static void SetStubProfilerEnabled(uint8_t bEnabled);

	// Object: Function MetaDorian.MetaDorianManager.SetSingleDorianFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d6a8
	// Params: [ Num(4) Size(0x1C) ]
	static void SetSingleDorianFunction(int32_t ModuleID, int32_t StubId, struct FString FuncAliasName, int32_t Flag);

	// Object: Function MetaDorian.MetaDorianManager.SetMTLogLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d614
	// Params: [ Num(1) Size(0x4) ]
	static void SetMTLogLevel(int32_t Level);

	// Object: Function MetaDorian.MetaDorianManager.SetMetaDorianOption
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d534
	// Params: [ Num(2) Size(0x20) ]
	static void SetMetaDorianOption(struct FString OptName, struct FString OptValue);

	// Object: Function MetaDorian.MetaDorianManager.SetDorianFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d418
	// Params: [ Num(3) Size(0x24) ]
	static void SetDorianFunction(struct FString ModuleName, struct FString FuncName, int32_t Flag);

	// Object: Function MetaDorian.MetaDorianManager.SetCurrentStubFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d384
	// Params: [ Num(1) Size(0x4) ]
	static void SetCurrentStubFlag(int32_t Flag);

	// Object: Function MetaDorian.MetaDorianManager.RunDorianScripts
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d2e8
	// Params: [ Num(1) Size(0x10) ]
	static void RunDorianScripts(struct FString ScriptPath);

	// Object: Function MetaDorian.MetaDorianManager.RunAllDorianScriptsUnderDir
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d24c
	// Params: [ Num(1) Size(0x10) ]
	static void RunAllDorianScriptsUnderDir(struct FString DirPath);

	// Object: Function MetaDorian.MetaDorianManager.RestStubProfilerInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d238
	// Params: [ Num(0) Size(0x0) ]
	static void RestStubProfilerInfo();

	// Object: Function MetaDorian.MetaDorianManager.ResetStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d224
	// Params: [ Num(0) Size(0x0) ]
	static void ResetStat();

	// Object: Function MetaDorian.MetaDorianManager.ResetDorianSO
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554d210
	// Params: [ Num(0) Size(0x0) ]
	static void ResetDorianSO();

	// Object: Function MetaDorian.MetaDorianManager.ResetAllStubs
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf75d14c
	// Params: [ Num(0) Size(0x0) ]
	static void ResetAllStubs();

	// Object: Function MetaDorian.MetaDorianManager.QueryType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554d0e4
	// Params: [ Num(2) Size(0x20) ]
	static struct FString QueryType(struct FString TypeName);

	// Object: Function MetaDorian.MetaDorianManager.QueryStub
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554cf60
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t QueryStub(struct FString ModuleName, struct FString FunctionName);

	// Object: Function MetaDorian.MetaDorianManager.QueryPropOffset
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554cde0
	// Params: [ Num(3) Size(0x24) ]
	static int32_t QueryPropOffset(struct FString ClassName, struct FString PropName);

	// Object: Function MetaDorian.MetaDorianManager.QueryClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554ccb4
	// Params: [ Num(2) Size(0x20) ]
	static struct FString QueryClass(struct FString ClassName);

	// Object: Function MetaDorian.MetaDorianManager.PrintStubProfilerInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554cb88
	// Params: [ Num(2) Size(0x20) ]
	static struct FString PrintStubProfilerInfo(struct FString Key);

	// Object: Function MetaDorian.MetaDorianManager.PrintStagedLog
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554caf0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString PrintStagedLog();

	// Object: Function MetaDorian.MetaDorianManager.ModifyCurrentFuncArgNum
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554ca20
	// Params: [ Num(2) Size(0x10) ]
	static void ModifyCurrentFuncArgNum(int32_t I, double Value);

	// Object: Function MetaDorian.MetaDorianManager.ModifyCurrentFuncArgInt
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c950
	// Params: [ Num(2) Size(0x10) ]
	static void ModifyCurrentFuncArgInt(int32_t I, int64_t Value);

	// Object: Function MetaDorian.MetaDorianManager.MetaDorianDriverInit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c93c
	// Params: [ Num(0) Size(0x0) ]
	static void MetaDorianDriverInit();

	// Object: Function MetaDorian.MetaDorianManager.IsNeedUpdateDorianSO
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c88c
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsNeedUpdateDorianSO(struct FString JTextVerInfo);

	// Object: Function MetaDorian.MetaDorianManager.InstallDorianSO
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c798
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t InstallDorianSO(struct FString InZipPath, struct FString InHashValue);

	// Object: Function MetaDorian.MetaDorianManager.Init
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c784
	// Params: [ Num(0) Size(0x0) ]
	static void Init();

	// Object: Function MetaDorian.MetaDorianManager.GetStubModuleNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf75cd60
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetStubModuleNum();

	// Object: Function MetaDorian.MetaDorianManager.GetStubFuncNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf75cd14
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetStubFuncNum();

	// Object: Function MetaDorian.MetaDorianManager.GetStatInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c6a4
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetStatInfo(uint8_t bFull);

	// Object: Function MetaDorian.MetaDorianManager.GetRTTITypeNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf75c6bc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetRTTITypeNum();

	// Object: Function MetaDorian.MetaDorianManager.GetPlatformName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c60c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPlatformName();

	// Object: Function MetaDorian.MetaDorianManager.GetMTLogLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c5d8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMTLogLevel();

	// Object: Function MetaDorian.MetaDorianManager.GetMetaGlueStat
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c540
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetMetaGlueStat();

	// Object: Function MetaDorian.MetaDorianManager.GetInternalFilePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c4a8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetInternalFilePath();

	// Object: Function MetaDorian.MetaDorianManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c46c
	// Params: [ Num(1) Size(0x8) ]
	static struct UMetaDorianManager* GetInstance();

	// Object: Function MetaDorian.MetaDorianManager.GetDorianSOStubPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c3d4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDorianSOStubPath();

	// Object: Function MetaDorian.MetaDorianManager.GetDorianSOLibPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c33c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDorianSOLibPath();

	// Object: Function MetaDorian.MetaDorianManager.CheckDorianSOVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554c248
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t CheckDorianSOVersion(struct FString TargetUrl, struct FString HashValue);

	// Object: Function MetaDorian.MetaDorianManager.AddSingleDorianFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c134
	// Params: [ Num(3) Size(0x18) ]
	static void AddSingleDorianFunction(int32_t ModuleID, int32_t StubId, struct FString FuncAliasName);

	// Object: Function MetaDorian.MetaDorianManager.AddDorianFunction
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1554c054
	// Params: [ Num(2) Size(0x20) ]
	static void AddDorianFunction(struct FString ModuleName, struct FString FuncName);
	DEFINE_UE_CLASS_HELPERS(UMetaDorianManager, "MetaDorianManager")

};

// Object: Class MetaDorian.MTAndroidJNI
// Size: 0x28 (Inherited: 0x28)
struct UMTAndroidJNI : UObject
{

	// Object: Function MetaDorian.MTAndroidJNI.IsOverrideAndroidLogDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554ec28
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsOverrideAndroidLogDir();

	// Object: Function MetaDorian.MTAndroidJNI.IsOBBinAPK
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554ebf0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsOBBinAPK();

	// Object: Function MetaDorian.MTAndroidJNI.GetOBBFilePathBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554eb58
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOBBFilePathBase();

	// Object: Function MetaDorian.MTAndroidJNI.GetInternalFilePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554eac0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetInternalFilePath();

	// Object: Function MetaDorian.MTAndroidJNI.GetFontPathBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554ea28
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFontPathBase();

	// Object: Function MetaDorian.MTAndroidJNI.GetFilePathBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554e990
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFilePathBase();

	// Object: Function MetaDorian.MTAndroidJNI.GetExternalFilePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554e8f8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetExternalFilePath();

	// Object: Function MetaDorian.MTAndroidJNI.GetAPKFilename
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554e860
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAPKFilename();
	DEFINE_UE_CLASS_HELPERS(UMTAndroidJNI, "MTAndroidJNI")

};

// Object: Class MetaDorian.MTAPI_UWidget
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UWidget : UObject
{

	// Object: Function MetaDorian.MTAPI_UWidget.CanSafelyRouteEvent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f170
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CanSafelyRouteEvent(struct UWidget* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UWidget, "MTAPI_UWidget")

};

// Object: Class MetaDorian.MTAPI_UPanelWidget
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UPanelWidget : UObject
{

	// Object: Function MetaDorian.MTAPI_UPanelWidget.CanAddMoreChildren
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f22c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CanAddMoreChildren(struct UPanelWidget* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UPanelWidget, "MTAPI_UPanelWidget")

};

// Object: Class MetaDorian.MTAPI_FGameplayResourceSet
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FGameplayResourceSet : UObject
{

	// Object: Function MetaDorian.MTAPI_FGameplayResourceSet.AddID
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1554f2fc
	// Params: [ Num(3) Size(0x6) ]
	static struct FGameplayResourceSet AddID(struct FGameplayResourceSet& Self, uint8_t ResourceID);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_FGameplayResourceSet, "MTAPI_FGameplayResourceSet")

};

// Object: Class MetaDorian.MTAPI_UEngine
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UEngine : UObject
{

	// Object: Function MetaDorian.MTAPI_UEngine.Tick
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550034
	// Params: [ Num(3) Size(0xD) ]
	static void Tick(struct UEngine* Self, float DeltaSeconds, uint8_t bIdleMode);

	// Object: Function MetaDorian.MTAPI_UEngine.SetConsoleVarOrExecuteConsoleCommand
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554ff54
	// Params: [ Num(2) Size(0x20) ]
	static void SetConsoleVarOrExecuteConsoleCommand(struct FString ConsoleName, struct FString ConsoleValue);

	// Object: Function MetaDorian.MTAPI_UEngine.NetworkRemapPath
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1554fdd0
	// Params: [ Num(5) Size(0x22) ]
	static uint8_t NetworkRemapPath(struct UEngine* Self, struct UPendingNetGame* PendingNetGame, struct FString& str, uint8_t bReading);

	// Object: Function MetaDorian.MTAPI_UEngine.GetWorldFromContextObject
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554fcb0
	// Params: [ Num(4) Size(0x20) ]
	static struct UWorld* GetWorldFromContextObject(struct UEngine* Self, struct UObject* Object, uint8_t bChecked);

	// Object: Function MetaDorian.MTAPI_UEngine.GetWorldContexts
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554fbf8
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct FWorldContext> GetWorldContexts(struct UEngine* Self);

	// Object: Function MetaDorian.MTAPI_UEngine.GetWorldContextFromWorldChecked
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554fb00
	// Params: [ Num(3) Size(0x290) ]
	static struct FWorldContext GetWorldContextFromWorldChecked(struct UEngine* Engine, struct UWorld* InWorld);

	// Object: Function MetaDorian.MTAPI_UEngine.GetUrl
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f8c0
	// Params: [ Num(4) Size(0xE8) ]
	static struct FURL GetUrl(struct FURL Base, struct FString TextURL, ETravelType Type);

	// Object: Function MetaDorian.MTAPI_UEngine.GetEngineSubsystemBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f7e0
	// Params: [ Num(3) Size(0x18) ]
	static struct UEngineSubsystem* GetEngineSubsystemBase(struct UEngine* Self, struct UEngineSubsystem* SubsystemClass);

	// Object: Function MetaDorian.MTAPI_UEngine.GetEngine
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f7c0
	// Params: [ Num(1) Size(0x8) ]
	static struct UEngine* GetEngine();

	// Object: Function MetaDorian.MTAPI_UEngine.GetConsoleVarStrValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f6e0
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetConsoleVarStrValue(struct FString ConsoleName);

	// Object: Function MetaDorian.MTAPI_UEngine.GetConsoleVarIntValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f634
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetConsoleVarIntValue(struct FString ConsoleName);

	// Object: Function MetaDorian.MTAPI_UEngine.GetConsoleVarFloatValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f588
	// Params: [ Num(2) Size(0x14) ]
	static float GetConsoleVarFloatValue(struct FString ConsoleName);

	// Object: Function MetaDorian.MTAPI_UEngine.GetConsoleVarBoolValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f4d8
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t GetConsoleVarBoolValue(struct FString ConsoleName);

	// Object: Function MetaDorian.MTAPI_UEngine.FWorldContext_World
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1554f418
	// Params: [ Num(2) Size(0x288) ]
	static struct UWorld* FWorldContext_World(struct FWorldContext& Self);

	// Object: Function MetaDorian.MTAPI_UEngine.DumpStackTraceToLog
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1554f404
	// Params: [ Num(0) Size(0x0) ]
	static void DumpStackTraceToLog();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UEngine, "MTAPI_UEngine")

};

// Object: Class MetaDorian.MTAPI_UGameInstance
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UGameInstance : UObject
{

	// Object: Function MetaDorian.MTAPI_UGameInstance.GetSubsystemBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550194
	// Params: [ Num(3) Size(0x18) ]
	static struct UGameInstanceSubsystem* GetSubsystemBase(struct UGameInstance* Self, struct UGameInstanceSubsystem* SubsystemClass);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UGameInstance, "MTAPI_UGameInstance")

};

// Object: Class MetaDorian.MTAPI_UWorld
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UWorld : UObject
{

	// Object: Function MetaDorian.MTAPI_UWorld.TimeSince
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550d50
	// Params: [ Num(3) Size(0x10) ]
	static float TimeSince(struct UWorld* Self, float Time);

	// Object: Function MetaDorian.MTAPI_UWorld.SetGameInstance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550c80
	// Params: [ Num(2) Size(0x10) ]
	static void SetGameInstance(struct UWorld* Self, struct UGameInstance* NewGI);

	// Object: Function MetaDorian.MTAPI_UWorld.IsNetMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550b88
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsNetMode(struct UWorld* Self, int32_t Mode);

	// Object: Function MetaDorian.MTAPI_UWorld.GetTimeSeconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550ae0
	// Params: [ Num(2) Size(0xC) ]
	static float GetTimeSeconds(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetSubsystemBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550a00
	// Params: [ Num(3) Size(0x18) ]
	static struct UWorldSubsystem* GetSubsystemBase(struct UWorld* Self, struct UWorldSubsystem* SubsystemClass);

	// Object: Function MetaDorian.MTAPI_UWorld.GetStreamingLevels
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155508f4
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct ULevelStreaming*> GetStreamingLevels(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetRealTimeSeconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555084c
	// Params: [ Num(2) Size(0xC) ]
	static float GetRealTimeSeconds(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetNetMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155507a8
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetNetMode(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetNetDriver
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550700
	// Params: [ Num(2) Size(0x10) ]
	static struct UNetDriver* GetNetDriver(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetNavigationSystem
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555065c
	// Params: [ Num(2) Size(0x10) ]
	static struct UNavigationSystemBase* GetNavigationSystem(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetGameState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155505b4
	// Params: [ Num(2) Size(0x10) ]
	static struct AGameStateBase* GetGameState(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetGameInstance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555050c
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameInstance* GetGameInstance(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetDeltaSeconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550468
	// Params: [ Num(2) Size(0xC) ]
	static float GetDeltaSeconds(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetAvoidanceManager
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155503c4
	// Params: [ Num(2) Size(0x10) ]
	static struct UAvoidanceManager* GetAvoidanceManager(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetAuthGameMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550320
	// Params: [ Num(2) Size(0x10) ]
	static struct AGameModeBase* GetAuthGameMode(struct UWorld* Self);

	// Object: Function MetaDorian.MTAPI_UWorld.GetAISystem
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555027c
	// Params: [ Num(2) Size(0x10) ]
	static struct UAISystemBase* GetAISystem(struct UWorld* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UWorld, "MTAPI_UWorld")

};

// Object: Class MetaDorian.MTAPI_UAssetManager
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UAssetManager : UObject
{	DEFINE_UE_CLASS_HELPERS(UMTAPI_UAssetManager, "MTAPI_UAssetManager")

};

// Object: Class MetaDorian.MTAPI_ABrush
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_ABrush : UObject
{

	// Object: Function MetaDorian.MTAPI_ABrush.GetBrushComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550e58
	// Params: [ Num(2) Size(0x10) ]
	static struct UBrushComponent* GetBrushComponent(struct ABrush* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_ABrush, "MTAPI_ABrush")

};

// Object: Class MetaDorian.MTAPI_ASceneCapture2D
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_ASceneCapture2D : UObject
{

	// Object: Function MetaDorian.MTAPI_ASceneCapture2D.GetCaptureComponent2D
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550f04
	// Params: [ Num(2) Size(0x10) ]
	static struct USceneCaptureComponent2D* GetCaptureComponent2D(struct ASceneCapture2D* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_ASceneCapture2D, "MTAPI_ASceneCapture2D")

};

// Object: Class MetaDorian.MTAPI_AStaticMeshActor
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_AStaticMeshActor : UObject
{

	// Object: Function MetaDorian.MTAPI_AStaticMeshActor.GetStaticMeshComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15550fb0
	// Params: [ Num(2) Size(0x10) ]
	static struct UStaticMeshComponent* GetStaticMeshComponent(struct AStaticMeshActor* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_AStaticMeshActor, "MTAPI_AStaticMeshActor")

};

// Object: Class MetaDorian.MTAPI_ATriggerBase
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_ATriggerBase : UObject
{

	// Object: Function MetaDorian.MTAPI_ATriggerBase.GetCollisionComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555105c
	// Params: [ Num(2) Size(0x10) ]
	static struct UShapeComponent* GetCollisionComponent(struct ATriggerBase* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_ATriggerBase, "MTAPI_ATriggerBase")

};

// Object: Class MetaDorian.MTAPI_AActor
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_AActor : UObject
{

	// Object: Function MetaDorian.MTAPI_AActor.OnConstruction
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15552994
	// Params: [ Num(2) Size(0x40) ]
	static void OnConstruction(struct AActor* Self, const struct FTransform& Transform);

	// Object: Function MetaDorian.MTAPI_AActor.OnChildAttached
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552884
	// Params: [ Num(3) Size(0x18) ]
	static void OnChildAttached(struct AActor* Self, struct USceneComponent* MySourceComponent, struct USceneComponent* NewChildComponent);

	// Object: Function MetaDorian.MTAPI_AActor.OnAttachmentChanged
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155527e8
	// Params: [ Num(1) Size(0x8) ]
	static void OnAttachmentChanged(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.K2_GetActorRotation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15552740
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator K2_GetActorRotation(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.IsReplicatingMovement
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552698
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsReplicatingMovement(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.IsPendingKillPending
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155525a0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPendingKillPending(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.IsOwnedBy
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155524a8
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsOwnedBy(struct AActor* Self, struct AActor* TestOwner);

	// Object: Function MetaDorian.MTAPI_AActor.IsNetMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155523c4
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsNetMode(struct AActor* Self, int32_t InMode);

	// Object: Function MetaDorian.MTAPI_AActor.IsHidden
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555231c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsHidden(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.IsActorInitialized
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552274
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsActorInitialized(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.HasAuthority
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155521c8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasAuthority(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.HasActorBegunPlay
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552110
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasActorBegunPlay(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetTearOff
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552068
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetTearOff(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetSimpleCollisionRadius
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551fb0
	// Params: [ Num(2) Size(0xC) ]
	static float GetSimpleCollisionRadius(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetSimpleCollisionHalfHeight
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551ef8
	// Params: [ Num(2) Size(0xC) ]
	static float GetSimpleCollisionHalfHeight(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetRootComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551e50
	// Params: [ Num(2) Size(0x10) ]
	static struct USceneComponent* GetRootComponent(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetReplicatedMovement
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551d3c
	// Params: [ Num(2) Size(0x40) ]
	static struct FRepMovement GetReplicatedMovement(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetRemoteRole
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551c98
	// Params: [ Num(2) Size(0x9) ]
	static ENetRole GetRemoteRole(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetPlayerViewZoomingFactor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551bec
	// Params: [ Num(2) Size(0xC) ]
	static float GetPlayerViewZoomingFactor(struct APlayerController* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetOwner
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551b48
	// Params: [ Num(2) Size(0x10) ]
	static struct AActor* GetOwner(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetNetMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551aa4
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetNetMode(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetLocalRole
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551a00
	// Params: [ Num(2) Size(0x9) ]
	static ENetRole GetLocalRole(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetIsReplicated
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551958
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetIsReplicated(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetComponentsByClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551844
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UActorComponent*> GetComponentsByClass(struct AActor* Self, struct UActorComponent* ComponentClass);

	// Object: Function MetaDorian.MTAPI_AActor.GetComponents
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555179c
	// Params: [ Num(2) Size(0x58) ]
	static struct TSet<struct UActorComponent*> GetComponents(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetActorTransform
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155516d8
	// Params: [ Num(2) Size(0x40) ]
	static struct FEncTransform GetActorTransform(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetActorScale
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15551610
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetActorScale(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetActorRotation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15551568
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator GetActorRotation(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetActorQuat
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155514a8
	// Params: [ Num(2) Size(0x20) ]
	static struct FQuat GetActorQuat(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetActorLocation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155513c8
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetActorLocation(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.GetActorEnableCollision
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551320
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetActorEnableCollision(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.CanEverTick
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15551278
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CanEverTick(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.CanBeDamaged
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155511d0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t CanBeDamaged(struct AActor* Self);

	// Object: Function MetaDorian.MTAPI_AActor.ActorToWorld
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15551108
	// Params: [ Num(2) Size(0x40) ]
	static struct FEncTransform ActorToWorld(struct AActor* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_AActor, "MTAPI_AActor")

};

// Object: Class MetaDorian.MTAPI_APlayerState
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_APlayerState : UObject
{

	// Object: Function MetaDorian.MTAPI_APlayerState.GetPawn
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552b48
	// Params: [ Num(2) Size(0x10) ]
	static struct APawn* GetPawn(struct APlayerState* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_APlayerState, "MTAPI_APlayerState")

};

// Object: Class MetaDorian.MTAPI_APlayerCameraManager
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_APlayerCameraManager : UObject
{

	// Object: Function MetaDorian.MTAPI_APlayerCameraManager.GetLockedFOV
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552bf4
	// Params: [ Num(2) Size(0xC) ]
	static float GetLockedFOV(struct APlayerCameraManager* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_APlayerCameraManager, "MTAPI_APlayerCameraManager")

};

// Object: Class MetaDorian.MTAPI_ACameraActor
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_ACameraActor : UObject
{

	// Object: Function MetaDorian.MTAPI_ACameraActor.GetCameraComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552ca0
	// Params: [ Num(2) Size(0x10) ]
	static struct UCameraComponent* GetCameraComponent(struct ACameraActor* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_ACameraActor, "MTAPI_ACameraActor")

};

// Object: Class MetaDorian.MTAPI_AController
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_AController : UObject
{

	// Object: Function MetaDorian.MTAPI_AController.IsPlayerController
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552f54
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPlayerController(struct AController* Self);

	// Object: Function MetaDorian.MTAPI_AController.IsLocalPlayerController
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552e94
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsLocalPlayerController(struct AController* Self);

	// Object: Function MetaDorian.MTAPI_AController.GetPawn
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552df0
	// Params: [ Num(2) Size(0x10) ]
	static struct APawn* GetPawn(struct AController* Self);

	// Object: Function MetaDorian.MTAPI_AController.GetCharacter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15552d4c
	// Params: [ Num(2) Size(0x10) ]
	static struct ACHARACTER* GetCharacter(struct AController* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_AController, "MTAPI_AController")

};

// Object: Class MetaDorian.MTAPI_APawn
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_APawn : UObject
{

	// Object: Function MetaDorian.MTAPI_APawn.SetupPlayerInputComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553358
	// Params: [ Num(2) Size(0x10) ]
	static void SetupPlayerInputComponent(struct APawn* Self, struct UInputComponent* PlayerInputComponent);

	// Object: Function MetaDorian.MTAPI_APawn.GetPlayerState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155532b4
	// Params: [ Num(2) Size(0x10) ]
	static struct APlayerState* GetPlayerState(struct APawn* Self);

	// Object: Function MetaDorian.MTAPI_APawn.GetMovementBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553208
	// Params: [ Num(2) Size(0x10) ]
	static struct UPrimitiveComponent* GetMovementBase(struct APawn* Self);

	// Object: Function MetaDorian.MTAPI_APawn.GetMeshComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553164
	// Params: [ Num(2) Size(0x10) ]
	static struct UStaticMeshComponent* GetMeshComponent(struct ADefaultPawn* Self);

	// Object: Function MetaDorian.MTAPI_APawn.GetController
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155530c0
	// Params: [ Num(2) Size(0x10) ]
	static struct AController* GetController(struct APawn* Self);

	// Object: Function MetaDorian.MTAPI_APawn.GetCollisionComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555301c
	// Params: [ Num(2) Size(0x10) ]
	static struct USphereComponent* GetCollisionComponent(struct ADefaultPawn* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_APawn, "MTAPI_APawn")

};

// Object: Class MetaDorian.MTAPI_ACharacter
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_ACharacter : UObject
{

	// Object: Function MetaDorian.MTAPI_ACharacter.MovementBaseUtility_UseRelativeLocation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553ba0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t MovementBaseUtility_UseRelativeLocation(struct UPrimitiveComponent* MovementBase);

	// Object: Function MetaDorian.MTAPI_ACharacter.MovementBaseUtility_TransformToWorld
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555395c
	// Params: [ Num(8) Size(0x59) ]
	static uint8_t MovementBaseUtility_TransformToWorld(struct UCharacterMovementComponent* CharacterMovement, struct UPrimitiveComponent* MovementBase, struct FName BoneName, struct FVector& BaseLocation, struct FQuat& BaseQuat, const struct FVector& InLocalLocation, struct FVector& OutWorldLocation);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetReplicatedServerLastTransformUpdateTimeStamp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155538b8
	// Params: [ Num(2) Size(0xC) ]
	static float GetReplicatedServerLastTransformUpdateTimeStamp(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetReplicatedMovementMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553814
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetReplicatedMovementMode(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetMovementBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553770
	// Params: [ Num(2) Size(0x10) ]
	static struct UPrimitiveComponent* GetMovementBase(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetMesh
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155536cc
	// Params: [ Num(2) Size(0x10) ]
	static struct USkeletalMeshComponent* GetMesh(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetCharacterMovement
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553628
	// Params: [ Num(2) Size(0x10) ]
	static struct UCharacterMovementComponent* GetCharacterMovement(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetCapsuleComponent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553584
	// Params: [ Num(2) Size(0x10) ]
	static struct UCapsuleComponent* GetCapsuleComponent(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetBaseTranslationOffset
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155534d4
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetBaseTranslationOffset(struct ACHARACTER* Self);

	// Object: Function MetaDorian.MTAPI_ACharacter.GetBasedMovement
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553424
	// Params: [ Num(2) Size(0x38) ]
	static struct FBasedMovementInfo GetBasedMovement(struct ACHARACTER* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_ACharacter, "MTAPI_ACharacter")

};

// Object: Class MetaDorian.MTAPI_UNavMovementComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UNavMovementComponent : UObject
{	DEFINE_UE_CLASS_HELPERS(UMTAPI_UNavMovementComponent, "MTAPI_UNavMovementComponent")

};

// Object: Class MetaDorian.MTAPI_UMovementComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UMovementComponent : UObject
{

	// Object: Function MetaDorian.MTAPI_UMovementComponent.StopMovementImmediately
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155545a8
	// Params: [ Num(1) Size(0x8) ]
	static void StopMovementImmediately(struct UMovementComponent* Self);

	// Object: Function MetaDorian.MTAPI_UMovementComponent.SafeMoveUpdatedComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15554354
	// Params: [ Num(7) Size(0xAE) ]
	static uint8_t SafeMoveUpdatedComponent(struct UMovementComponent* Self, const struct FVector& Delta, const struct FRotator& NewRotation, uint8_t bSweep, struct FHitResult& OutHit, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_UMovementComponent.ResolvePenetration
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155541ac
	// Params: [ Num(5) Size(0xB1) ]
	static uint8_t ResolvePenetration(struct UMovementComponent* Self, const struct FVector& Adjustment, const struct FHitResult& Hit, const struct FQuat& NewRotation);

	// Object: Function MetaDorian.MTAPI_UMovementComponent.MoveUpdatedComponent2
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15553f7c
	// Params: [ Num(7) Size(0xBE) ]
	static uint8_t MoveUpdatedComponent2(struct UMovementComponent* Self, const struct FVector& Delta, const struct FQuat& NewRotation, uint8_t bSweep, struct FHitResult& OutHit, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_UMovementComponent.MoveUpdatedComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15553d20
	// Params: [ Num(7) Size(0xAE) ]
	static uint8_t MoveUpdatedComponent(struct UMovementComponent* Self, const struct FVector& Delta, const struct FRotator& NewRotation, uint8_t bSweep, struct FHitResult& OutHit, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_UMovementComponent.GetMaxSpeed
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15553c74
	// Params: [ Num(2) Size(0xC) ]
	static float GetMaxSpeed(struct UMovementComponent* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UMovementComponent, "MTAPI_UMovementComponent")

};

// Object: Class MetaDorian.MTAPI_UCharacterMovementComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UCharacterMovementComponent : UObject
{

	// Object: Function MetaDorian.MTAPI_UCharacterMovementComponent.IsWalking
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155547e8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsWalking(struct UCharacterMovementComponent* Self);

	// Object: Function MetaDorian.MTAPI_UCharacterMovementComponent.HasAnimRootMotion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554744
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasAnimRootMotion(struct UCharacterMovementComponent* Self);

	// Object: Function MetaDorian.MTAPI_UCharacterMovementComponent.GetServerLastTransformUpdateTimeStamp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155546a0
	// Params: [ Num(2) Size(0xC) ]
	static float GetServerLastTransformUpdateTimeStamp(struct UCharacterMovementComponent* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UCharacterMovementComponent, "MTAPI_UCharacterMovementComponent")

};

// Object: Class MetaDorian.MTAPI_UStaticMeshComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UStaticMeshComponent : UObject
{

	// Object: Function MetaDorian.MTAPI_UStaticMeshComponent.GetStaticMesh
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155548b8
	// Params: [ Num(2) Size(0x10) ]
	static struct UStaticMesh* GetStaticMesh(struct UStaticMeshComponent* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UStaticMeshComponent, "MTAPI_UStaticMeshComponent")

};

// Object: Class MetaDorian.MTAPI_UActorComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UActorComponent : UObject
{

	// Object: Function MetaDorian.MTAPI_UActorComponent.MarkAsEditorOnlySubobject
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155552c8
	// Params: [ Num(1) Size(0x8) ]
	static void MarkAsEditorOnlySubobject(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.IsRegistered
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555220
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsRegistered(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.IsRegisterAsData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555178
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsRegisterAsData(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.IsPhysicsStateCreated
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155550d0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPhysicsStateCreated(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.IsNetMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554fd8
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t IsNetMode(struct UActorComponent* Self, int32_t Mode);

	// Object: Function MetaDorian.MTAPI_UActorComponent.IsEditorOnly
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554f28
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsEditorOnly(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.HasBegunPlay
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554e80
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasBegunPlay(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.HasBeenInitialized
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554dd8
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t HasBeenInitialized(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.GetWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554d28
	// Params: [ Num(2) Size(0x10) ]
	static struct UWorld* GetWorld(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.GetReplicationFlag
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554c84
	// Params: [ Num(2) Size(0x9) ]
	static EComponentReplicationFlags GetReplicationFlag(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.GetOwner
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554be0
	// Params: [ Num(2) Size(0x10) ]
	static struct AActor* GetOwner(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.GetNetMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554b3c
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetNetMode(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.GetIsReplicated
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15554a94
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetIsReplicated(struct UActorComponent* Self);

	// Object: Function MetaDorian.MTAPI_UActorComponent.ApplyWorldOffset
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15554964
	// Params: [ Num(3) Size(0x15) ]
	static void ApplyWorldOffset(struct UActorComponent* Self, const struct FVector& InOffset, uint8_t bWorldShift);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UActorComponent, "MTAPI_UActorComponent")

};

// Object: Class MetaDorian.MTAPI_UPrimitiveComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UPrimitiveComponent : UObject
{

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.SetRenderMatrixMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555590c
	// Params: [ Num(2) Size(0x9) ]
	static void SetRenderMatrixMode(struct UPrimitiveComponent* Self, ERenderMatrixMode Mode);

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.GetUsedMaterials
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155557e4
	// Params: [ Num(3) Size(0x20) ]
	static struct TArray<struct UMaterialInterface*> GetUsedMaterials(struct UPrimitiveComponent* Self, uint8_t bGetDebugMaterials);

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.GetMoveIgnoreMask
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555740
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetMoveIgnoreMask(struct UPrimitiveComponent* Self);

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.GetLastRenderTimeOnScreen
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555569c
	// Params: [ Num(2) Size(0xC) ]
	static float GetLastRenderTimeOnScreen(struct UPrimitiveComponent* Self);

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.GetLastRenderTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155555f8
	// Params: [ Num(2) Size(0xC) ]
	static float GetLastRenderTime(struct UPrimitiveComponent* Self);

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.GetGenerateOverlapEvents
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555550
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t GetGenerateOverlapEvents(struct UPrimitiveComponent* Self);

	// Object: Function MetaDorian.MTAPI_UPrimitiveComponent.AddTorqueInDegrees
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155553d8
	// Params: [ Num(4) Size(0x1D) ]
	static void AddTorqueInDegrees(struct UPrimitiveComponent* Self, struct FVector Torque, struct FName BoneName, uint8_t bAccelChange);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UPrimitiveComponent, "MTAPI_UPrimitiveComponent")

};

// Object: Class MetaDorian.MTAPI_USceneComponent
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_USceneComponent : UObject
{

	// Object: Function MetaDorian.MTAPI_USceneComponent.UpdateComponentToWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556938
	// Params: [ Num(3) Size(0xD) ]
	static void UpdateComponentToWorld(struct USceneComponent* Self, int32_t UpdateTransformFlags, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_USceneComponent.SetRelativeRotation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15556748
	// Params: [ Num(5) Size(0xAD) ]
	static void SetRelativeRotation(struct USceneComponent* Self, const struct FQuat& NewRotation, uint8_t bSweep, struct FHitResult& OutSweepHitResult, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_USceneComponent.SetRelativeLocation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15556584
	// Params: [ Num(5) Size(0xA1) ]
	static void SetRelativeLocation(struct USceneComponent* Self, struct FVector NewLocation, uint8_t bSweep, struct FHitResult& OutSweepHitResult, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_USceneComponent.MoveComponent
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555630c
	// Params: [ Num(8) Size(0xC2) ]
	static uint8_t MoveComponent(struct USceneComponent* Self, const struct FVector& Delta, const struct FQuat& NewRotation, uint8_t bSweep, struct FHitResult& Hit, int32_t MoveFlags, ETeleportType Teleport);

	// Object: Function MetaDorian.MTAPI_USceneComponent.IsQueryCollisionEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556254
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsQueryCollisionEnabled(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.IsCollisionEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155561a0
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsCollisionEnabled(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetRelativeRotation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155560f4
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator GetRelativeRotation(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetRelativeLocation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x1555604c
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetRelativeLocation(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetComponentTransform
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15555f84
	// Params: [ Num(2) Size(0x40) ]
	static struct FTransform GetComponentTransform(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetComponentRotation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15555edc
	// Params: [ Num(2) Size(0x14) ]
	static struct FRotator GetComponentRotation(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetComponentLocation
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15555e2c
	// Params: [ Num(2) Size(0x14) ]
	static struct FVector GetComponentLocation(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetAttachParent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555d88
	// Params: [ Num(2) Size(0x10) ]
	static struct USceneComponent* GetAttachParent(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.GetAttachChildren
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555c7c
	// Params: [ Num(2) Size(0x18) ]
	static struct TArray<struct USceneComponent*> GetAttachChildren(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.ConditionalUpdateComponentToWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15555bd4
	// Params: [ Num(1) Size(0x8) ]
	static void ConditionalUpdateComponentToWorld(struct USceneComponent* Self);

	// Object: Function MetaDorian.MTAPI_USceneComponent.AddRelativeRotation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15555a08
	// Params: [ Num(5) Size(0xA1) ]
	static void AddRelativeRotation(struct USceneComponent* Self, struct FRotator DeltaRotation, uint8_t bSweep, struct FHitResult& OutSweepHitResult, ETeleportType Teleport);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_USceneComponent, "MTAPI_USceneComponent")

};

// Object: Class MetaDorian.MTAPI_UObject
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UObject : UObject
{

	// Object: Function MetaDorian.MTAPI_UObject.SetFlags
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557a7c
	// Params: [ Num(2) Size(0xC) ]
	static void SetFlags(struct UObject* Self, int32_t NewFlags);

	// Object: Function MetaDorian.MTAPI_UObject.RemoveFromRoot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155579a8
	// Params: [ Num(1) Size(0x8) ]
	static void RemoveFromRoot(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.MarkPendingKill
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155578d4
	// Params: [ Num(1) Size(0x8) ]
	static void MarkPendingKill(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.IsValid
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155577ec
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsValid(struct UObject* Test);

	// Object: Function MetaDorian.MTAPI_UObject.IsUnreachable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555770c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsUnreachable(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.IsRooted
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555762c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsRooted(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.IsPendingKillOrUnreachable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557548
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPendingKillOrUnreachable(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.IsPendingKill
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557468
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPendingKill(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.IsNative
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557388
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsNative(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.HasAnyInternalFlags
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557268
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t HasAnyInternalFlags(struct UObject* Self, int32_t FlagsToCheck);

	// Object: Function MetaDorian.MTAPI_UObject.HasAnyFlags
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557180
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t HasAnyFlags(struct UObject* Self, int32_t FlagsToCheck);

	// Object: Function MetaDorian.MTAPI_UObject.HasAllFlags
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557098
	// Params: [ Num(3) Size(0xD) ]
	static uint8_t HasAllFlags(struct UObject* Self, int32_t FlagsToCheck);

	// Object: Function MetaDorian.MTAPI_UObject.GetUniqueID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556ff4
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetUniqueID(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.GetOuter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556f50
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetOuter(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.GetName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556e6c
	// Params: [ Num(2) Size(0x18) ]
	static struct FString GetName(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.GetFName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556dc8
	// Params: [ Num(2) Size(0x10) ]
	static struct FName GetFName(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.GetClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556d24
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* GetClass(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.ClearPendingKill
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556c50
	// Params: [ Num(1) Size(0x8) ]
	static void ClearPendingKill(struct UObject* Self);

	// Object: Function MetaDorian.MTAPI_UObject.ClearFlags
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556b78
	// Params: [ Num(2) Size(0xC) ]
	static void ClearFlags(struct UObject* Self, int32_t NewFlags);

	// Object: Function MetaDorian.MTAPI_UObject.AddToRoot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15556aa4
	// Params: [ Num(1) Size(0x8) ]
	static void AddToRoot(struct UObject* Self);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UObject, "MTAPI_UObject")

};

// Object: Class MetaDorian.MTAPI_FUObjectArray
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FUObjectArray : UObject
{

	// Object: Function MetaDorian.MTAPI_FUObjectArray.IsDisregardForGC
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557e14
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsDisregardForGC(struct UObject* Object);

	// Object: Function MetaDorian.MTAPI_FUObjectArray.IndexToObjectExtra
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557cd4
	// Params: [ Num(3) Size(0x10) ]
	static struct UObject* IndexToObjectExtra(int32_t Index, uint8_t bEvenIfPendingKill);

	// Object: Function MetaDorian.MTAPI_FUObjectArray.IndexToObject
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557be8
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* IndexToObject(int32_t Index);

	// Object: Function MetaDorian.MTAPI_FUObjectArray.GetObjectArrayNum
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557bc8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetObjectArrayNum();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_FUObjectArray, "MTAPI_FUObjectArray")

};

// Object: Class MetaDorian.MTAPI_FScriptInterface
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FScriptInterface : UObject
{	DEFINE_UE_CLASS_HELPERS(UMTAPI_FScriptInterface, "MTAPI_FScriptInterface")

};

// Object: Class MetaDorian.MTAPI_NameTypes
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_NameTypes : UObject
{

	// Object: Function MetaDorian.MTAPI_NameTypes.GetTypeHash
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557ef4
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetTypeHash(struct FName Name);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_NameTypes, "MTAPI_NameTypes")

};

// Object: Class MetaDorian.MTAPI_TypeHash
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_TypeHash : UObject
{

	// Object: Function MetaDorian.MTAPI_TypeHash.HashCombine
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558244
	// Params: [ Num(3) Size(0xC) ]
	static uint32_t HashCombine(uint32_t A, uint32_t C);

	// Object: Function MetaDorian.MTAPI_TypeHash.GetTypeHashUInt64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555819c
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetTypeHashUInt64(uint64_t A);

	// Object: Function MetaDorian.MTAPI_TypeHash.GetTypeHashInt64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155580f4
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetTypeHashInt64(int64_t A);

	// Object: Function MetaDorian.MTAPI_TypeHash.GetTypeHashFloat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558054
	// Params: [ Num(2) Size(0x8) ]
	static uint32_t GetTypeHashFloat(float Value);

	// Object: Function MetaDorian.MTAPI_TypeHash.GetTypeHashDouble
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15557fac
	// Params: [ Num(2) Size(0xC) ]
	static uint32_t GetTypeHashDouble(double Value);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_TypeHash, "MTAPI_TypeHash")

};

// Object: Class MetaDorian.MTAPI_CoreMisc
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_CoreMisc : UObject
{

	// Object: Function MetaDorian.MTAPI_CoreMisc.IsRunningGame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558340
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsRunningGame();

	// Object: Function MetaDorian.MTAPI_CoreMisc.IsRunningDedicatedServer
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558328
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsRunningDedicatedServer();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_CoreMisc, "MTAPI_CoreMisc")

};

// Object: Class MetaDorian.MTAPI_FGenericPlatformTime
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FGenericPlatformTime : UObject
{

	// Object: Function MetaDorian.MTAPI_FGenericPlatformTime.ToSeconds64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555843c
	// Params: [ Num(2) Size(0x10) ]
	static double ToSeconds64(uint64_t Cycles);

	// Object: Function MetaDorian.MTAPI_FGenericPlatformTime.ToMilliseconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555837c
	// Params: [ Num(2) Size(0x8) ]
	static float ToMilliseconds(uint32_t Cycles);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_FGenericPlatformTime, "MTAPI_FGenericPlatformTime")

};

// Object: Class MetaDorian.MTAPI_FGenericPlatformMisc
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FGenericPlatformMisc : UObject
{

	// Object: Function MetaDorian.MTAPI_FGenericPlatformMisc.GetNetworkConnectionType
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155584f8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetNetworkConnectionType();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_FGenericPlatformMisc, "MTAPI_FGenericPlatformMisc")

};

// Object: Class MetaDorian.MTAPI_FGenericPlatformMemory
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FGenericPlatformMemory : UObject
{

	// Object: Function MetaDorian.MTAPI_FGenericPlatformMemory.GetMemoryUsedFast
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558518
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetMemoryUsedFast();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_FGenericPlatformMemory, "MTAPI_FGenericPlatformMemory")

};

// Object: Class MetaDorian.MTAPI_FApp
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_FApp : UObject
{

	// Object: Function MetaDorian.MTAPI_FApp.GetCurrentTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558570
	// Params: [ Num(1) Size(0x8) ]
	static double GetCurrentTime();

	// Object: Function MetaDorian.MTAPI_FApp.CanEverRender
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558538
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t CanEverRender();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_FApp, "MTAPI_FApp")

};

// Object: Class MetaDorian.MTAPI_UnrealString
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_UnrealString : UObject
{

	// Object: Function MetaDorian.MTAPI_UnrealString.GetTypeHash
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155585a4
	// Params: [ Num(2) Size(0x14) ]
	static uint32_t GetTypeHash(struct FString S);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_UnrealString, "MTAPI_UnrealString")

};

// Object: Class MetaDorian.MTAPI_CoreGlobals
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_CoreGlobals : UObject
{

	// Object: Function MetaDorian.MTAPI_CoreGlobals.IsRunningCommandlet
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559ddc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsRunningCommandlet();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.IsInGameThread
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559d84
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsInGameThread();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetPRIVATE_GIsRunningCommandlet
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559d64
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetPRIVATE_GIsRunningCommandlet();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetPRIVATE_GAllowCommandletRendering
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559d44
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetPRIVATE_GAllowCommandletRendering();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetPRIVATE_GAllowCommandletAudio
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559d24
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetPRIVATE_GAllowCommandletAudio();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGVerifyObjectReferencesOnly
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559d04
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGVerifyObjectReferencesOnly();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGUITextureAmplifiedRate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559ce4
	// Params: [ Num(1) Size(0x4) ]
	static float GetGUITextureAmplifiedRate();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGSystemStartTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559c10
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGSystemStartTime();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGStartTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559bf0
	// Params: [ Num(1) Size(0x8) ]
	static double GetGStartTime();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGSlowTaskOccurred
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559bd0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGSlowTaskOccurred();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGSlateLoadingThreadId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559bb0
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGSlateLoadingThreadId();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGShouldSuspendRenderingThread
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559b90
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGShouldSuspendRenderingThread();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGScreenshotResolutionY
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559b70
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGScreenshotResolutionY();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGScreenshotResolutionX
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559b50
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGScreenshotResolutionX();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGScreenMessagesRestoreState
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559b30
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGScreenMessagesRestoreState();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGScalabilityIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559a5c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGScalabilityIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGSavingCompressionChunkSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559a3c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGSavingCompressionChunkSize();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRuntimeOptionsIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559968
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGRuntimeOptionsIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRHIThreadId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559948
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGRHIThreadId();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRHICurrentFrameCounterInputTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559928
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGRHICurrentFrameCounterInputTime();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRHICurrentFrameCounter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559908
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGRHICurrentFrameCounter();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRenderThreadId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155598e8
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGRenderThreadId();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRenderThreadCurrentFrameCounterInputTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155598c8
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGRenderThreadCurrentFrameCounterInputTime();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGRenderThreadCurrentFrameCounter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155598a8
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGRenderThreadCurrentFrameCounter();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGPumpingMessagesOutsideOfMainLoop
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559888
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGPumpingMessagesOutsideOfMainLoop();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGPumpingMessages
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559868
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGPumpingMessages();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGPrintLogVerbosity
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559848
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGPrintLogVerbosity();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGPrintLogCategory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559828
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGPrintLogCategory();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGPlayInEditorID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559808
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGPlayInEditorID();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGPlatformNeedsPowerOfTwoTextures
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155597e8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGPlatformNeedsPowerOfTwoTextures();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGNearClippingPlane
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155597c8
	// Params: [ Num(1) Size(0x4) ]
	static float GetGNearClippingPlane();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGMakeCacheIDIndex
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155597a8
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGMakeCacheIDIndex();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGLightmassIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155596d4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGLightmassIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGLastGCFrame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155596b4
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGLastGCFrame();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsUsingHDInput
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559694
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsUsingHDInput();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsUCCMakeStandaloneHeaderGenerator
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555967c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsUCCMakeStandaloneHeaderGenerator();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsSlowTask
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555965c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsSlowTask();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsSilent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555963c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsSilent();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsServer
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555961c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsServer();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsRunningUnattendedScript
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155595fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsRunningUnattendedScript();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsRetrievingVTablePtr
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155595dc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsRetrievingVTablePtr();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsRequestingExit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155595bc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsRequestingExit();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsReinstancing
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555959c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsReinstancing();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsReconstructingBlueprintInstances
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555957c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsReconstructingBlueprintInstances();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsPlayInEditorWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555955c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsPlayInEditorWorld();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsPIEUsingPlayerStart
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555953c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsPIEUsingPlayerStart();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsMultiWorld
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555951c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsMultiWorld();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsMobileWin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155594fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsMobileWin();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsInitialLoad
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155594dc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsInitialLoad();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsHighResScreenshot
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155594bc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsHighResScreenshot();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555949c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsHD();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsGuarded
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555947c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsGuarded();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsGCingAfterBlueprintCompile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555945c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsGCingAfterBlueprintCompile();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsGameThreadIdInitialized
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555943c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsGameThreadIdInitialized();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsGameAgnosticExe
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555941c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsGameAgnosticExe();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsFirstInstance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155593fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsFirstInstance();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsEnableBuildMapsHD
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155593dc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsEnableBuildMapsHD();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsEditorLoadingPackage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155593bc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsEditorLoadingPackage();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsEditor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155593a4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsEditor();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsDuplicatingClassForReinstancing
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559384
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsDuplicatingClassForReinstancing();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsDumpingMovie
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559364
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGIsDumpingMovie();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsDemoMode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559344
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsDemoMode();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsCriticalError
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559324
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsCriticalError();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsCookerLoadingPackage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559304
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsCookerLoadingPackage();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsClient
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155592e4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsClient();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsBuildMachine
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155592c4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsBuildMachine();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIsAutomationTesting
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155592a4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIsAutomationTesting();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGIntraFrameDebuggingGameThread
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555928c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGIntraFrameDebuggingGameThread();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGInputTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555926c
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGInputTime();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGInputIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559198
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGInputIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGHitchThresholdMS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15559178
	// Params: [ Num(1) Size(0x4) ]
	static float GetGHitchThresholdMS();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGHardwareIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155590a4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGHardwareIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGGameUserSettingsIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558fd0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGGameUserSettingsIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGGameThreadId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558fb0
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGGameThreadId();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGGameIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558edc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGGameIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFrameNumberRenderThread
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558ebc
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGFrameNumberRenderThread();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFrameNumberAuxRHISkipCompile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558e9c
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGFrameNumberAuxRHISkipCompile();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFrameNumber
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558e7c
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGFrameNumber();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFrameCounterRenderThread
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558e5c
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGFrameCounterRenderThread();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFrameCounter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558e3c
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t GetGFrameCounter();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGForwardCommonToPlatformContent
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558e1c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGForwardCommonToPlatformContent();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGForceLoadEditorOnly
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558dfc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGForceLoadEditorOnly();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFMessageDialogUseWarnLogf
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558ddc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGFMessageDialogUseWarnLogf();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFirstFrameIntraFrameDebugging
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558dc4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGFirstFrameIntraFrameDebugging();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGFastPathUniqueNameGeneration
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558da4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGFastPathUniqueNameGeneration();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGExitPurge
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558d84
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGExitPurge();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEventDrivenLoaderEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558d64
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGEventDrivenLoaderEnabled();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEngineIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558c90
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGEngineIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEnableVREditorHacks
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558c70
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGEnableVREditorHacks();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEdSelectionLock
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558c50
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGEdSelectionLock();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEditorSettingsIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558b7c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGEditorSettingsIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEditorPerProjectIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558aa8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGEditorPerProjectIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEditorLayoutIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155589d4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGEditorLayoutIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEditorKeyBindingsIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558900
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGEditorKeyBindingsIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGEditorIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555882c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGEditorIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGCycleStatsShouldEmitNamedEvents
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555880c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGCycleStatsShouldEmitNamedEvents();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGCompilingBlueprint
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155587ec
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGCompilingBlueprint();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGCompatIni
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558718
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGCompatIni();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGAuxRHIThreadId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155586f8
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGAuxRHIThreadId();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGAudioThreadId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155586d8
	// Params: [ Num(1) Size(0x4) ]
	static uint32_t GetGAudioThreadId();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGAreScreenMessagesEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155586b8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGAreScreenMessagesEnabled();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.GetGAllowActorScriptExecutionInEditor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558698
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGAllowActorScriptExecutionInEditor();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.Get_GlobalCostCyclesPerFrame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558678
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t Get_GlobalCostCyclesPerFrame();

	// Object: Function MetaDorian.MTAPI_CoreGlobals.Get_GlobalBudgetCyclesPerFrame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15558658
	// Params: [ Num(1) Size(0x8) ]
	static uint64_t Get_GlobalBudgetCyclesPerFrame();
	DEFINE_UE_CLASS_HELPERS(UMTAPI_CoreGlobals, "MTAPI_CoreGlobals")

};

// Object: Class MetaDorian.MTAPI_Math
// Size: 0x28 (Inherited: 0x28)
struct UMTAPI_Math : UBlueprintFunctionLibrary
{

	// Object: Function MetaDorian.MTAPI_Math.WindRelativeAnglesDegrees
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15568734
	// Params: [ Num(2) Size(0x8) ]
	static void WindRelativeAnglesDegrees(float InAngle0, float& InOutAngle1);

	// Object: Function MetaDorian.MTAPI_Math.WeightedMovingAverage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155685fc
	// Params: [ Num(4) Size(0x10) ]
	static float WeightedMovingAverage(float CurrentSample, float PreviousSample, float Weight);

	// Object: Function MetaDorian.MTAPI_Math.VRandConeV2
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155684d4
	// Params: [ Num(4) Size(0x20) ]
	static struct FVector VRandConeV2(const struct FVector& Dir, float HorizontalConeHalfAngleRad, float VerticalConeHalfAngleRad);

	// Object: Function MetaDorian.MTAPI_Math.VRandCone
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155683e4
	// Params: [ Num(3) Size(0x1C) ]
	static struct FVector VRandCone(const struct FVector& Dir, float ConeHalfAngleRad);

	// Object: Function MetaDorian.MTAPI_Math.VRand
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x155683ac
	// Params: [ Num(1) Size(0xC) ]
	static struct FVector VRand();

	// Object: Function MetaDorian.MTAPI_Math.VInterpTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15568234
	// Params: [ Num(5) Size(0x2C) ]
	static struct FVector VInterpTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.VInterpNormalRotationTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155680bc
	// Params: [ Num(5) Size(0x2C) ]
	static struct FVector VInterpNormalRotationTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float RotationSpeedDegrees);

	// Object: Function MetaDorian.MTAPI_Math.VInterpConstantTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15567f44
	// Params: [ Num(5) Size(0x2C) ]
	static struct FVector VInterpConstantTo(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.Vector2DInterpTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15567dd0
	// Params: [ Num(5) Size(0x20) ]
	static struct FVector2D Vector2DInterpTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.Vector2DInterpConstantTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15567c5c
	// Params: [ Num(5) Size(0x20) ]
	static struct FVector2D Vector2DInterpConstantTo(const struct FVector2D& Current, const struct FVector2D& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.UnwindRadians
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15567b74
	// Params: [ Num(2) Size(0x8) ]
	static float UnwindRadians(float A);

	// Object: Function MetaDorian.MTAPI_Math.UnwindDegrees
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15567a80
	// Params: [ Num(2) Size(0x8) ]
	static float UnwindDegrees(float A);

	// Object: Function MetaDorian.MTAPI_Math.TruncateToHalfIfClose
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155679a4
	// Params: [ Num(3) Size(0x18) ]
	static double TruncateToHalfIfClose(double F, double Tolerance);

	// Object: Function MetaDorian.MTAPI_Math.Square
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15567900
	// Params: [ Num(2) Size(0x10) ]
	static double Square(double A);

	// Object: Function MetaDorian.MTAPI_Math.SphereDistToLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1556776c
	// Params: [ Num(5) Size(0x34) ]
	static void SphereDistToLine(struct FVector SphereOrigin, float SphereRadius, struct FVector LineOrigin, struct FVector LineDir, struct FVector& OutClosestPoint);

	// Object: Function MetaDorian.MTAPI_Math.SphereConeIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155675b8
	// Params: [ Num(6) Size(0x25) ]
	static uint8_t SphereConeIntersection(const struct FVector& SphereCenter, float SphereRadius, const struct FVector& ConeAxis, float ConeAngleSin, float ConeAngleCos);

	// Object: Function MetaDorian.MTAPI_Math.SphereAABBIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15567480
	// Params: [ Num(4) Size(0x2D) ]
	static uint8_t SphereAABBIntersection(const struct FVector& SphereCenter, float RadiusSquared, const struct FBox& AABB);

	// Object: Function MetaDorian.MTAPI_Math.SmoothStep
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15567330
	// Params: [ Num(4) Size(0x10) ]
	static float SmoothStep(float A, float B, float X);

	// Object: Function MetaDorian.MTAPI_Math.SinCos
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x155671fc
	// Params: [ Num(3) Size(0xC) ]
	static void SinCos(float& ScalarSin, float& ScalarCos, float Value);

	// Object: Function MetaDorian.MTAPI_Math.SegmentTriangleIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15566f80
	// Params: [ Num(8) Size(0x55) ]
	static uint8_t SegmentTriangleIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& A, const struct FVector& B, const struct FVector& C, struct FVector& OutIntersectPoint, struct FVector& OutTriangleNormal);

	// Object: Function MetaDorian.MTAPI_Math.SegmentPlaneIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15566dec
	// Params: [ Num(5) Size(0x3D) ]
	static uint8_t SegmentPlaneIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FPlane& Plane, struct FVector& out_IntersectionPoint);

	// Object: Function MetaDorian.MTAPI_Math.SegmentIntersection2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15566c08
	// Params: [ Num(6) Size(0x3D) ]
	static uint8_t SegmentIntersection2D(const struct FVector& SegmentStartA, const struct FVector& SegmentEndA, const struct FVector& SegmentStartB, const struct FVector& SegmentEndB, struct FVector& out_IntersectionPoint);

	// Object: Function MetaDorian.MTAPI_Math.SegmentDistToSegmentSafe
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15566a18
	// Params: [ Num(6) Size(0x48) ]
	static void SegmentDistToSegmentSafe(struct FVector A1, struct FVector B1, struct FVector A2, struct FVector B2, struct FVector& OutP1, struct FVector& OutP2);

	// Object: Function MetaDorian.MTAPI_Math.SegmentDistToSegment
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15566828
	// Params: [ Num(6) Size(0x48) ]
	static void SegmentDistToSegment(struct FVector A1, struct FVector B1, struct FVector A2, struct FVector B2, struct FVector& OutP1, struct FVector& OutP2);

	// Object: Function MetaDorian.MTAPI_Math.Saturate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15566774
	// Params: [ Num(2) Size(0x8) ]
	static float Saturate(float X);

	// Object: Function MetaDorian.MTAPI_Math.RoundToZero
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155666c4
	// Params: [ Num(2) Size(0x10) ]
	static double RoundToZero(double F);

	// Object: Function MetaDorian.MTAPI_Math.RoundToPositiveInfinity
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15566620
	// Params: [ Num(2) Size(0x10) ]
	static double RoundToPositiveInfinity(double F);

	// Object: Function MetaDorian.MTAPI_Math.RoundToNegativeInfinity
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556657c
	// Params: [ Num(2) Size(0x10) ]
	static double RoundToNegativeInfinity(double F);

	// Object: Function MetaDorian.MTAPI_Math.RoundHalfToZero
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155664d8
	// Params: [ Num(2) Size(0x10) ]
	static double RoundHalfToZero(double F);

	// Object: Function MetaDorian.MTAPI_Math.RoundHalfToEven
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15566434
	// Params: [ Num(2) Size(0x10) ]
	static double RoundHalfToEven(double F);

	// Object: Function MetaDorian.MTAPI_Math.RoundHalfFromZero
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15566390
	// Params: [ Num(2) Size(0x10) ]
	static double RoundHalfFromZero(double F);

	// Object: Function MetaDorian.MTAPI_Math.RoundFromZero
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155662e0
	// Params: [ Num(2) Size(0x10) ]
	static double RoundFromZero(double F);

	// Object: Function MetaDorian.MTAPI_Math.RInterpTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15566168
	// Params: [ Num(5) Size(0x2C) ]
	static struct FRotator RInterpTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.RInterpConstantTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15565ff0
	// Params: [ Num(5) Size(0x2C) ]
	static struct FRotator RInterpConstantTo(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.RayPlaneIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15565ea4
	// Params: [ Num(4) Size(0x3C) ]
	static struct FVector RayPlaneIntersection(const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FPlane& Plane);

	// Object: Function MetaDorian.MTAPI_Math.RandRangeFloat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15565db4
	// Params: [ Num(3) Size(0xC) ]
	static float RandRangeFloat(float InMin, float InMax);

	// Object: Function MetaDorian.MTAPI_Math.RandRange64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15565c9c
	// Params: [ Num(3) Size(0x18) ]
	static int64_t RandRange64(int64_t Min, int64_t Max);

	// Object: Function MetaDorian.MTAPI_Math.RandRange32
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15565b88
	// Params: [ Num(3) Size(0xC) ]
	static int32_t RandRange32(int32_t Min, int32_t Max);

	// Object: Function MetaDorian.MTAPI_Math.RandPointInCircle
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x15565ae4
	// Params: [ Num(2) Size(0xC) ]
	static struct FVector2D RandPointInCircle(float CircleRadius);

	// Object: Function MetaDorian.MTAPI_Math.RandPointInBox
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15565a30
	// Params: [ Num(2) Size(0x28) ]
	static struct FVector RandPointInBox(const struct FBox& Box);

	// Object: Function MetaDorian.MTAPI_Math.RandHelper64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15565958
	// Params: [ Num(2) Size(0x10) ]
	static int64_t RandHelper64(int64_t A);

	// Object: Function MetaDorian.MTAPI_Math.RandHelper
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15565884
	// Params: [ Num(2) Size(0x8) ]
	static int32_t RandHelper(int32_t A);

	// Object: Function MetaDorian.MTAPI_Math.RandBool
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556583c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t RandBool();

	// Object: Function MetaDorian.MTAPI_Math.RadiansToDegrees
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1556577c
	// Params: [ Num(2) Size(0x10) ]
	static double RadiansToDegrees(const double& RadVal);

	// Object: Function MetaDorian.MTAPI_Math.Quantize8UnsignedByte
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155656cc
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t Quantize8UnsignedByte(float X);

	// Object: Function MetaDorian.MTAPI_Math.Quantize8SignedByte
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15565614
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t Quantize8SignedByte(float X);

	// Object: Function MetaDorian.MTAPI_Math.QInterpTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1556549c
	// Params: [ Num(5) Size(0x40) ]
	static struct FQuat QInterpTo(const struct FQuat& Current, const struct FQuat& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.QInterpConstantTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15565324
	// Params: [ Num(5) Size(0x40) ]
	static struct FQuat QInterpConstantTo(const struct FQuat& Current, const struct FQuat& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.PointsAreCoplanar
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15565228
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t PointsAreCoplanar(const struct TArray<struct FVector>& Points, float Tolerance);

	// Object: Function MetaDorian.MTAPI_Math.PointDistToSegmentSquared
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155650e0
	// Params: [ Num(4) Size(0x28) ]
	static float PointDistToSegmentSquared(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint);

	// Object: Function MetaDorian.MTAPI_Math.PointDistToSegment
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564f98
	// Params: [ Num(4) Size(0x28) ]
	static float PointDistToSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint);

	// Object: Function MetaDorian.MTAPI_Math.PointDistToLineExtend
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564e08
	// Params: [ Num(5) Size(0x34) ]
	static float PointDistToLineExtend(const struct FVector& Point, const struct FVector& Direction, const struct FVector& Origin, struct FVector& OutClosestPoint);

	// Object: Function MetaDorian.MTAPI_Math.PointDistToLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564cc0
	// Params: [ Num(4) Size(0x28) ]
	static float PointDistToLine(const struct FVector& Point, const struct FVector& Direction, const struct FVector& Origin);

	// Object: Function MetaDorian.MTAPI_Math.PointBoxIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564b34
	// Params: [ Num(3) Size(0x29) ]
	static uint8_t PointBoxIntersection(const struct FVector& Point, const struct FBox& Box);

	// Object: Function MetaDorian.MTAPI_Math.PlaneAABBRelativePosition
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564a3c
	// Params: [ Num(3) Size(0x30) ]
	static int32_t PlaneAABBRelativePosition(const struct FPlane& P, const struct FBox& AABB);

	// Object: Function MetaDorian.MTAPI_Math.PlaneAABBIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564940
	// Params: [ Num(3) Size(0x2D) ]
	static uint8_t PlaneAABBIntersection(const struct FPlane& P, const struct FBox& AABB);

	// Object: Function MetaDorian.MTAPI_Math.PerlinNoise3D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564890
	// Params: [ Num(2) Size(0x10) ]
	static float PerlinNoise3D(const struct FVector& Location);

	// Object: Function MetaDorian.MTAPI_Math.PerlinNoise2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155647e0
	// Params: [ Num(2) Size(0xC) ]
	static float PerlinNoise2D(const struct FVector2D& Location);

	// Object: Function MetaDorian.MTAPI_Math.PerlinNoise1D
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556473c
	// Params: [ Num(2) Size(0x8) ]
	static float PerlinNoise1D(float Value);

	// Object: Function MetaDorian.MTAPI_Math.Min3
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15564618
	// Params: [ Num(4) Size(0x20) ]
	static double Min3(double A, double B, double C);

	// Object: Function MetaDorian.MTAPI_Math.Max3
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155644f4
	// Params: [ Num(4) Size(0x20) ]
	static double Max3(double A, double B, double C);

	// Object: Function MetaDorian.MTAPI_Math.MakePulsatingValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15564398
	// Params: [ Num(4) Size(0x14) ]
	static float MakePulsatingValue(double InCurrentTime, float InPulsesPerSecond, float InPhase);

	// Object: Function MetaDorian.MTAPI_Math.Log2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x155642f4
	// Params: [ Num(2) Size(0x8) ]
	static float Log2(float Value);

	// Object: Function MetaDorian.MTAPI_Math.LineSphereIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15564130
	// Params: [ Num(6) Size(0x2D) ]
	static uint8_t LineSphereIntersection(const struct FVector& Start, const struct FVector& Dir, float Length, const struct FVector& Origin, float radius);

	// Object: Function MetaDorian.MTAPI_Math.LinePlaneIntersection2
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15563f88
	// Params: [ Num(4) Size(0x3C) ]
	static struct FVector LinePlaneIntersection2(const struct FVector& Point1, const struct FVector& Point2, const struct FPlane& Plane);

	// Object: Function MetaDorian.MTAPI_Math.LinePlaneIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15563df4
	// Params: [ Num(5) Size(0x3C) ]
	static struct FVector LinePlaneIntersection(const struct FVector& Point1, const struct FVector& Point2, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal);

	// Object: Function MetaDorian.MTAPI_Math.LineExtentBoxIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15563b74
	// Params: [ Num(8) Size(0x5D) ]
	static uint8_t LineExtentBoxIntersection(const struct FBox& InBox, const struct FVector& Start, const struct FVector& End, const struct FVector& Extent, struct FVector& HitLocation, struct FVector& HitNormal, float& hitTime);

	// Object: Function MetaDorian.MTAPI_Math.LineBoxIntersectionExtend
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15563990
	// Params: [ Num(6) Size(0x4D) ]
	static uint8_t LineBoxIntersectionExtend(const struct FBox& Box, const struct FVector& Start, const struct FVector& End, const struct FVector& Direction, const struct FVector& OneOverDirection);

	// Object: Function MetaDorian.MTAPI_Math.LineBoxIntersection
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155637ac
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t LineBoxIntersection(const struct FBox& Box, const struct FVector& Start, const struct FVector& End, const struct FVector& Direction);

	// Object: Function MetaDorian.MTAPI_Math.LerpStable
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15563654
	// Params: [ Num(4) Size(0x20) ]
	static double LerpStable(const double& A, const double& B, double Alpha);

	// Object: Function MetaDorian.MTAPI_Math.LerpRotator
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15563504
	// Params: [ Num(4) Size(0x2C) ]
	static struct FRotator LerpRotator(const struct FRotator& A, const struct FRotator& B, const double& Alpha);

	// Object: Function MetaDorian.MTAPI_Math.LerpRange
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155633b4
	// Params: [ Num(4) Size(0x2C) ]
	static struct FRotator LerpRange(const struct FRotator& A, const struct FRotator& B, const double& Alpha);

	// Object: Function MetaDorian.MTAPI_Math.LerpQuat
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15563264
	// Params: [ Num(4) Size(0x40) ]
	static struct FQuat LerpQuat(const struct FQuat& A, const struct FQuat& B, const double& Alpha);

	// Object: Function MetaDorian.MTAPI_Math.Lerp
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15563100
	// Params: [ Num(4) Size(0x20) ]
	static double Lerp(const double& A, const double& B, const double& Alpha);

	// Object: Function MetaDorian.MTAPI_Math.LeastCommonMultiplier
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15562ff0
	// Params: [ Num(3) Size(0xC) ]
	static int32_t LeastCommonMultiplier(int32_t A, int32_t B);

	// Object: Function MetaDorian.MTAPI_Math.IsWithinInclusive
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15562e84
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t IsWithinInclusive(const double& TestValue, const double& MinValue, const double& MaxValue);

	// Object: Function MetaDorian.MTAPI_Math.IsWithin
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15562d18
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t IsWithin(const double& TestValue, const double& MinValue, const double& MaxValue);

	// Object: Function MetaDorian.MTAPI_Math.IsPowerOfTwo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15562c6c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsPowerOfTwo(int64_t Value);

	// Object: Function MetaDorian.MTAPI_Math.IsNearlyZero
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15562b7c
	// Params: [ Num(3) Size(0x11) ]
	static uint8_t IsNearlyZero(double Value, double ErrorTolerance);

	// Object: Function MetaDorian.MTAPI_Math.IsNearlyEqual
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15562a50
	// Params: [ Num(4) Size(0x19) ]
	static uint8_t IsNearlyEqual(double A, double B, double ErrorTolerance);

	// Object: Function MetaDorian.MTAPI_Math.IntersectPlanes3
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155628bc
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t IntersectPlanes3(struct FVector& I, const struct FPlane& p1, const struct FPlane& p2, const struct FPlane& p3);

	// Object: Function MetaDorian.MTAPI_Math.IntersectPlanes2
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15562728
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t IntersectPlanes2(struct FVector& I, struct FVector& D, const struct FPlane& p1, const struct FPlane& p2);

	// Object: Function MetaDorian.MTAPI_Math.InterpStep
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15562554
	// Params: [ Num(5) Size(0x20) ]
	static double InterpStep(const double& A, const double& B, float Alpha, int32_t Steps);

	// Object: Function MetaDorian.MTAPI_Math.InterpSinOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x155623f0
	// Params: [ Num(4) Size(0x20) ]
	static double InterpSinOut(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpSinInOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15562234
	// Params: [ Num(4) Size(0x20) ]
	static double InterpSinInOut(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpSinIn
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x155620c8
	// Params: [ Num(4) Size(0x20) ]
	static double InterpSinIn(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpExpoOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561f4c
	// Params: [ Num(4) Size(0x20) ]
	static double InterpExpoOut(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpExpoInOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561d88
	// Params: [ Num(4) Size(0x20) ]
	static double InterpExpoInOut(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpExpoIn
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561c14
	// Params: [ Num(4) Size(0x20) ]
	static double InterpExpoIn(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpEaseOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561a70
	// Params: [ Num(5) Size(0x20) ]
	static double InterpEaseOut(const double& A, const double& B, float Alpha, float Exp);

	// Object: Function MetaDorian.MTAPI_Math.InterpEaseInOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561898
	// Params: [ Num(5) Size(0x20) ]
	static double InterpEaseInOut(const double& A, const double& B, float Alpha, float Exp);

	// Object: Function MetaDorian.MTAPI_Math.InterpEaseIn
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561708
	// Params: [ Num(5) Size(0x20) ]
	static double InterpEaseIn(const double& A, const double& B, float Alpha, float Exp);

	// Object: Function MetaDorian.MTAPI_Math.InterpCircularOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x155615a0
	// Params: [ Num(4) Size(0x20) ]
	static double InterpCircularOut(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpCircularInOut
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x155613f0
	// Params: [ Num(4) Size(0x20) ]
	static double InterpCircularInOut(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.InterpCircularIn
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x15561284
	// Params: [ Num(4) Size(0x20) ]
	static double InterpCircularIn(const double& A, const double& B, float Alpha);

	// Object: Function MetaDorian.MTAPI_Math.GridSnap
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15561190
	// Params: [ Num(3) Size(0x18) ]
	static double GridSnap(double Location, double Grid);

	// Object: Function MetaDorian.MTAPI_Math.GreatestCommonDivisor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15561098
	// Params: [ Num(3) Size(0xC) ]
	static int32_t GreatestCommonDivisor(int32_t A, int32_t B);

	// Object: Function MetaDorian.MTAPI_Math.GetTForSegmentPlaneIntersect
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560f50
	// Params: [ Num(4) Size(0x34) ]
	static float GetTForSegmentPlaneIntersect(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FPlane& Plane);

	// Object: Function MetaDorian.MTAPI_Math.GetReflectionVector
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560e54
	// Params: [ Num(3) Size(0x24) ]
	static struct FVector GetReflectionVector(const struct FVector& Direction, const struct FVector& SurfaceNormal);

	// Object: Function MetaDorian.MTAPI_Math.GetRangeValue
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560d60
	// Params: [ Num(3) Size(0x10) ]
	static float GetRangeValue(const struct FVector2D& Range, float Pct);

	// Object: Function MetaDorian.MTAPI_Math.GetRangePct
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15560c14
	// Params: [ Num(4) Size(0x10) ]
	static float GetRangePct(float MinValue, float MaxValue, float Value);

	// Object: Function MetaDorian.MTAPI_Math.GetMappedRangeValueUnclamped
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560a88
	// Params: [ Num(4) Size(0x18) ]
	static float GetMappedRangeValueUnclamped(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);

	// Object: Function MetaDorian.MTAPI_Math.GetMappedRangeValueClamped
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155608e8
	// Params: [ Num(4) Size(0x18) ]
	static float GetMappedRangeValueClamped(const struct FVector2D& InputRange, const struct FVector2D& OutputRange, float Value);

	// Object: Function MetaDorian.MTAPI_Math.GetDotDistance
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560704
	// Params: [ Num(6) Size(0x39) ]
	static uint8_t GetDotDistance(struct FVector2D& OutDotDist, const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ);

	// Object: Function MetaDorian.MTAPI_Math.GetDistanceWithinConeSegment
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560514
	// Params: [ Num(7) Size(0x31) ]
	static uint8_t GetDistanceWithinConeSegment(struct FVector Point, struct FVector ConeStartPoint, struct FVector ConeLine, float RadiusAtStart, float RadiusAtEnd, float& PercentageOut);

	// Object: Function MetaDorian.MTAPI_Math.GetBaryCentric2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x15560380
	// Params: [ Num(5) Size(0x3C) ]
	static struct FVector GetBaryCentric2D(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);

	// Object: Function MetaDorian.MTAPI_Math.GetAzimuthAndElevation
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x155601f0
	// Params: [ Num(5) Size(0x38) ]
	static struct FVector2D GetAzimuthAndElevation(const struct FVector& Direction, const struct FVector& AxisX, const struct FVector& AxisY, const struct FVector& AxisZ);

	// Object: Function MetaDorian.MTAPI_Math.FRandRange
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15560100
	// Params: [ Num(3) Size(0xC) ]
	static float FRandRange(float InMin, float InMax);

	// Object: Function MetaDorian.MTAPI_Math.FormatIntToHumanReadable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15560028
	// Params: [ Num(2) Size(0x18) ]
	static struct FString FormatIntToHumanReadable(int32_t Val);

	// Object: Function MetaDorian.MTAPI_Math.FixedTurn
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555ff10
	// Params: [ Num(4) Size(0x10) ]
	static float FixedTurn(float InCurrent, float InDesired, float InDeltaRate);

	// Object: Function MetaDorian.MTAPI_Math.FInterpTo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555fdbc
	// Params: [ Num(5) Size(0x14) ]
	static float FInterpTo(float Current, float Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.FInterpConstantTo
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555fc68
	// Params: [ Num(5) Size(0x14) ]
	static float FInterpConstantTo(float Current, float Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.FindDeltaAngleRadians
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555fb54
	// Params: [ Num(3) Size(0xC) ]
	static float FindDeltaAngleRadians(float A1, float A2);

	// Object: Function MetaDorian.MTAPI_Math.FindDeltaAngleDegrees
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555fa44
	// Params: [ Num(3) Size(0xC) ]
	static float FindDeltaAngleDegrees(float A1, float A2);

	// Object: Function MetaDorian.MTAPI_Math.FastAsin
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555f910
	// Params: [ Num(2) Size(0x8) ]
	static float FastAsin(float Value);

	// Object: Function MetaDorian.MTAPI_Math.Eval
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555f7c8
	// Params: [ Num(3) Size(0x15) ]
	static uint8_t Eval(struct FString str, float& OutValue);

	// Object: Function MetaDorian.MTAPI_Math.DynamicWeightedMovingAverage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555f5f0
	// Params: [ Num(6) Size(0x18) ]
	static float DynamicWeightedMovingAverage(float CurrentSample, float PreviousSample, float MaxDistance, float MinWeight, float MaxWeight);

	// Object: Function MetaDorian.MTAPI_Math.DivideAndRoundUp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555f508
	// Params: [ Num(3) Size(0x18) ]
	static double DivideAndRoundUp(double Dividend, double Divisor);

	// Object: Function MetaDorian.MTAPI_Math.DivideAndRoundNearest
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555f40c
	// Params: [ Num(3) Size(0x18) ]
	static double DivideAndRoundNearest(double Dividend, double Divisor);

	// Object: Function MetaDorian.MTAPI_Math.DivideAndRoundDown
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555f330
	// Params: [ Num(3) Size(0x18) ]
	static double DivideAndRoundDown(double Dividend, double Divisor);

	// Object: Function MetaDorian.MTAPI_Math.DegreesToRadians
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555f270
	// Params: [ Num(2) Size(0x10) ]
	static double DegreesToRadians(const double& DegVal);

	// Object: Function MetaDorian.MTAPI_Math.CubicInterpSecondDerivative
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555f030
	// Params: [ Num(6) Size(0x30) ]
	static double CubicInterpSecondDerivative(const double& p0, const double& T0, const double& p1, const double& T1, const double& A);

	// Object: Function MetaDorian.MTAPI_Math.CubicInterpQuat
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555ee40
	// Params: [ Num(6) Size(0x60) ]
	static struct FQuat CubicInterpQuat(const struct FQuat& p0, const struct FQuat& T0, const struct FQuat& p1, const struct FQuat& T1, const double& A);

	// Object: Function MetaDorian.MTAPI_Math.CubicInterpDerivative
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555ebf0
	// Params: [ Num(6) Size(0x30) ]
	static double CubicInterpDerivative(const double& p0, const double& T0, const double& p1, const double& T1, const double& A);

	// Object: Function MetaDorian.MTAPI_Math.CubicInterp
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555e98c
	// Params: [ Num(6) Size(0x30) ]
	static double CubicInterp(const double& p0, const double& T0, const double& p1, const double& T1, const double& A);

	// Object: Function MetaDorian.MTAPI_Math.CubicCRSplineInterpSafe
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555e6c0
	// Params: [ Num(10) Size(0x40) ]
	static double CubicCRSplineInterpSafe(const double& p0, const double& p1, const double& p2, const double& p3, float T0, float T1, float T2, float T3, float T);

	// Object: Function MetaDorian.MTAPI_Math.CubicCRSplineInterp
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555e3f4
	// Params: [ Num(10) Size(0x40) ]
	static double CubicCRSplineInterp(const double& p0, const double& p1, const double& p2, const double& p3, float T0, float T1, float T2, float T3, float T);

	// Object: Function MetaDorian.MTAPI_Math.ComputeBaryCentric3D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555e210
	// Params: [ Num(6) Size(0x50) ]
	static struct FVector4 ComputeBaryCentric3D(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& D);

	// Object: Function MetaDorian.MTAPI_Math.ComputeBaryCentric2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555e07c
	// Params: [ Num(5) Size(0x3C) ]
	static struct FVector ComputeBaryCentric2D(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);

	// Object: Function MetaDorian.MTAPI_Math.ClosestPointOnTriangleToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555dee8
	// Params: [ Num(5) Size(0x3C) ]
	static struct FVector ClosestPointOnTriangleToPoint(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C);

	// Object: Function MetaDorian.MTAPI_Math.ClosestPointOnTetrahedronToPoint
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555dd04
	// Params: [ Num(6) Size(0x48) ]
	static struct FVector ClosestPointOnTetrahedronToPoint(const struct FVector& Point, const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FVector& D);

	// Object: Function MetaDorian.MTAPI_Math.ClosestPointOnSegment2D
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555dbbc
	// Params: [ Num(4) Size(0x20) ]
	static struct FVector2D ClosestPointOnSegment2D(const struct FVector2D& Point, const struct FVector2D& StartPoint, const struct FVector2D& EndPoint);

	// Object: Function MetaDorian.MTAPI_Math.ClosestPointOnSegment
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555da70
	// Params: [ Num(4) Size(0x30) ]
	static struct FVector ClosestPointOnSegment(const struct FVector& Point, const struct FVector& StartPoint, const struct FVector& EndPoint);

	// Object: Function MetaDorian.MTAPI_Math.ClosestPointOnLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555d924
	// Params: [ Num(4) Size(0x30) ]
	static struct FVector ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);

	// Object: Function MetaDorian.MTAPI_Math.ClosestPointOnInfiniteLine
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555d7d8
	// Params: [ Num(4) Size(0x30) ]
	static struct FVector ClosestPointOnInfiniteLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);

	// Object: Function MetaDorian.MTAPI_Math.ClampAngle
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555d6c0
	// Params: [ Num(4) Size(0x10) ]
	static float ClampAngle(float AngleDegrees, float MinAngleDegrees, float MaxAngleDegrees);

	// Object: Function MetaDorian.MTAPI_Math.Clamp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1555d59c
	// Params: [ Num(4) Size(0x20) ]
	static double Clamp(double X, double Min, double Max);

	// Object: Function MetaDorian.MTAPI_Math.CInterpTo
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555d424
	// Params: [ Num(5) Size(0x38) ]
	static struct FLinearColor CInterpTo(const struct FLinearColor& Current, const struct FLinearColor& Target, float DeltaTime, float InterpSpeed);

	// Object: Function MetaDorian.MTAPI_Math.BiLerpQuat
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555d214
	// Params: [ Num(7) Size(0x60) ]
	static struct FQuat BiLerpQuat(const struct FQuat& P00, const struct FQuat& P10, const struct FQuat& P01, const struct FQuat& P11, float FracX, float FracY);

	// Object: Function MetaDorian.MTAPI_Math.BiLerp
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1555cfa8
	// Params: [ Num(7) Size(0x38) ]
	static double BiLerp(const double& P00, const double& P10, const double& P01, const double& P11, const double& FracX, const double& FracY);

	// Object: Function MetaDorian.MTAPI_Math.ApplyScaleToFloat
	// Flags: [Final|Native|Static|Public|HasOutParms|HasDefaults]
	// Offset: 0x1555ce78
	// Params: [ Num(3) Size(0x14) ]
	static void ApplyScaleToFloat(float& Dst, const struct FVector& DeltaScale, float Magnitude);
	DEFINE_UE_CLASS_HELPERS(UMTAPI_Math, "MTAPI_Math")

};

// Object: Class MetaDorian.MTAppUtils
// Size: 0x28 (Inherited: 0x28)
struct UMTAppUtils : UObject
{

	// Object: Function MetaDorian.MTAppUtils.SetVolumeMultiplier
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a2e4
	// Params: [ Num(1) Size(0x4) ]
	static void SetVolumeMultiplier(float InVolumeMultiplier);

	// Object: Function MetaDorian.MTAppUtils.SetUnfocusedVolumeMultiplier
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a250
	// Params: [ Num(1) Size(0x4) ]
	static void SetUnfocusedVolumeMultiplier(float InVolumeMultiplier);

	// Object: Function MetaDorian.MTAppUtils.PrintStartupLogMessages
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a23c
	// Params: [ Num(0) Size(0x0) ]
	static void PrintStartupLogMessages();

	// Object: Function MetaDorian.MTAppUtils.IsGame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a204
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsGame();

	// Object: Function MetaDorian.MTAppUtils.GetVolumeMultiplier
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a1d0
	// Params: [ Num(1) Size(0x4) ]
	static float GetVolumeMultiplier();

	// Object: Function MetaDorian.MTAppUtils.GetUnixTimestamp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a19c
	// Params: [ Num(1) Size(0x8) ]
	static double GetUnixTimestamp();

	// Object: Function MetaDorian.MTAppUtils.GetUnfocusedVolumeMultiplier
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a168
	// Params: [ Num(1) Size(0x4) ]
	static float GetUnfocusedVolumeMultiplier();

	// Object: Function MetaDorian.MTAppUtils.GetTimecode
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a0d0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetTimecode();

	// Object: Function MetaDorian.MTAppUtils.GetProjectName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a038
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetProjectName();

	// Object: Function MetaDorian.MTAppUtils.GetName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569fa0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetName();

	// Object: Function MetaDorian.MTAppUtils.GetLastTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569f6c
	// Params: [ Num(1) Size(0x8) ]
	static double GetLastTime();

	// Object: Function MetaDorian.MTAppUtils.GetGraphicsRHI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569ed4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGraphicsRHI();

	// Object: Function MetaDorian.MTAppUtils.GetEpicProductIdentifier
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569e3c
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetEpicProductIdentifier();

	// Object: Function MetaDorian.MTAppUtils.GetEngineIsPromotedBuild
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569e08
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetEngineIsPromotedBuild();

	// Object: Function MetaDorian.MTAppUtils.GetDeltaTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569dd4
	// Params: [ Num(1) Size(0x8) ]
	static double GetDeltaTime();

	// Object: Function MetaDorian.MTAppUtils.GetCyclesMilliseconds64
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569da0
	// Params: [ Num(1) Size(0x8) ]
	static double GetCyclesMilliseconds64();

	// Object: Function MetaDorian.MTAppUtils.GetCyclesMilliseconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569d6c
	// Params: [ Num(1) Size(0x4) ]
	static float GetCyclesMilliseconds();

	// Object: Function MetaDorian.MTAppUtils.GetCurrentTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569d38
	// Params: [ Num(1) Size(0x8) ]
	static double GetCurrentTime();

	// Object: Function MetaDorian.MTAppUtils.GetBuildVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569ca0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetBuildVersion();

	// Object: Function MetaDorian.MTAppUtils.GetBuildTargetType
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569c6c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetBuildTargetType();

	// Object: Function MetaDorian.MTAppUtils.GetBuildDate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569bd4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetBuildDate();

	// Object: Function MetaDorian.MTAppUtils.GetBuildConfiguration
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x15569ba0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetBuildConfiguration();
	DEFINE_UE_CLASS_HELPERS(UMTAppUtils, "MTAppUtils")

};

// Object: Class MetaDorian.MTDorianSOVerInfo
// Size: 0x68 (Inherited: 0x28)
struct UMTDorianSOVerInfo : UObject
{
	struct FString TargetUrl; // 0x28(0x10)
	struct FString HashValue; // 0x38(0x10)
	struct FString Timestamp; // 0x48(0x10)
	struct FString Version; // 0x58(0x10)


	// Object: Function MetaDorian.MTDorianSOVerInfo.Create
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556a87c
	// Params: [ Num(2) Size(0x18) ]
	static struct UMTDorianSOVerInfo* Create(struct FString JsonText);
	DEFINE_UE_CLASS_HELPERS(UMTDorianSOVerInfo, "MTDorianSOVerInfo")

};

// Object: Class MetaDorian.MTDorianSOUpdater
// Size: 0x88 (Inherited: 0x28)
struct UMTDorianSOUpdater : UObject
{
	struct UMTDorianSOVerInfo* VerInfo; // 0x28(0x8)
	struct FString LibPath; // 0x30(0x10)
	struct FString StubPath; // 0x40(0x10)
	uint8_t Pad_0x50[0x18]; // 0x50(0x18)
	struct FMulticastInlineDelegate OnComplete; // 0x68(0x10)
	uint8_t bDone : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct UMTHttpLoader* Loader; // 0x80(0x8)


	// Object: Function MetaDorian.MTDorianSOUpdater.IsDone
	// Flags: [Final|Native|Public]
	// Offset: 0x1556adbc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDone();

	// Object: Function MetaDorian.MTDorianSOUpdater.IsDoing
	// Flags: [Final|Native|Public]
	// Offset: 0x1556ad98
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsDoing();

	// Object: Function MetaDorian.MTDorianSOUpdater.Install
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556ac1c
	// Params: [ Num(5) Size(0x41) ]
	static uint8_t Install(struct FString InZipPath, struct FString InLibPath, struct FString InStubPath, struct FString InHashValue);

	// Object: Function MetaDorian.MTDorianSOUpdater.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x1556aaf0
	// Params: [ Num(3) Size(0x28) ]
	void Init(struct UMTDorianSOVerInfo* InVerInfo, struct FString InLibPath, struct FString InStubPath);

	// Object: Function MetaDorian.MTDorianSOUpdater.GetUnzipTempOutDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556aa10
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetUnzipTempOutDir(struct FString InZipFilePath);

	// Object: Function MetaDorian.MTDorianSOUpdater.Download
	// Flags: [Final|Native|Public]
	// Offset: 0x1556a9d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t Download();
	DEFINE_UE_CLASS_HELPERS(UMTDorianSOUpdater, "MTDorianSOUpdater")

};

// Object: Class MetaDorian.MTFileUtils
// Size: 0x28 (Inherited: 0x28)
struct UMTFileUtils : UObject
{

	// Object: Function MetaDorian.MTFileUtils.UnzipFileSync
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556ce90
	// Params: [ Num(5) Size(0x32) ]
	static uint8_t UnzipFileSync(struct FString ZipFilePath, struct FString TargetLocation, struct FString Password, uint8_t bForce);

	// Object: Function MetaDorian.MTFileUtils.UnzipFileSimpleSync
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556cd9c
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t UnzipFileSimpleSync(struct FString ZipFilePath, struct FString TargetLocation);

	// Object: Function MetaDorian.MTFileUtils.SetSandboxEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556cd00
	// Params: [ Num(1) Size(0x1) ]
	static void SetSandboxEnabled(uint8_t bInEnabled);

	// Object: Function MetaDorian.MTFileUtils.Move
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556caf4
	// Params: [ Num(7) Size(0x25) ]
	static uint8_t Move(struct FString Dest, struct FString Src, uint8_t Replace, uint8_t EvenIfReadOnly, uint8_t Attributes, uint8_t bDoNotRetryOrError);

	// Object: Function MetaDorian.MTFileUtils.MakeSureParentDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556ca58
	// Params: [ Num(1) Size(0x10) ]
	static void MakeSureParentDir(struct FString InPath);

	// Object: Function MetaDorian.MTFileUtils.MakeSureDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c9bc
	// Params: [ Num(1) Size(0x10) ]
	static void MakeSureDir(struct FString InDirPath);

	// Object: Function MetaDorian.MTFileUtils.MakeDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c8c8
	// Params: [ Num(3) Size(0x12) ]
	static uint8_t MakeDirectory(struct FString Path, uint8_t Tree);

	// Object: Function MetaDorian.MTFileUtils.IsSandboxEnabled
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c890
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsSandboxEnabled();

	// Object: Function MetaDorian.MTFileUtils.IsReadOnly
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c7e0
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsReadOnly(struct FString Filename);

	// Object: Function MetaDorian.MTFileUtils.IsFileExists
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c730
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsFileExists(struct FString InPath);

	// Object: Function MetaDorian.MTFileUtils.IsFile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c680
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsFile(struct FString InPath);

	// Object: Function MetaDorian.MTFileUtils.IsDirectoryExists
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c5d0
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsDirectoryExists(struct FString InPath);

	// Object: Function MetaDorian.MTFileUtils.IsDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c520
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsDirectory(struct FString InPath);

	// Object: Function MetaDorian.MTFileUtils.GetFileSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c474
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetFileSize(struct FString Filename);

	// Object: Function MetaDorian.MTFileUtils.GetFilenameOnDisk
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c394
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetFilenameOnDisk(struct FString Filename);

	// Object: Function MetaDorian.MTFileUtils.GetFileMd5
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c2b4
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetFileMd5(struct FString InPath);

	// Object: Function MetaDorian.MTFileUtils.GetFileAgeSeconds
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c208
	// Params: [ Num(2) Size(0x18) ]
	static double GetFileAgeSeconds(struct FString Filename);

	// Object: Function MetaDorian.MTFileUtils.FindFilesRecursive
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556c030
	// Params: [ Num(6) Size(0x38) ]
	static struct TArray<struct FString> FindFilesRecursive(struct FString StartDirectory, struct FString Filename, uint8_t bFiles, uint8_t bDirectories, uint8_t bClearFileNames);

	// Object: Function MetaDorian.MTFileUtils.FindFiles
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556bf2c
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> FindFiles(struct FString Directory, struct FString FileExtension);

	// Object: Function MetaDorian.MTFileUtils.FindFileOrDirs
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556bde4
	// Params: [ Num(4) Size(0x28) ]
	static struct TArray<struct FString> FindFileOrDirs(struct FString Filename, uint8_t bFiles, uint8_t bDirectories);

	// Object: Function MetaDorian.MTFileUtils.DeleteDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556bcac
	// Params: [ Num(4) Size(0x13) ]
	static uint8_t DeleteDirectory(struct FString Path, uint8_t RequireExists, uint8_t Tree);

	// Object: Function MetaDorian.MTFileUtils.Delete
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556bb28
	// Params: [ Num(5) Size(0x14) ]
	static uint8_t Delete(struct FString Filename, uint8_t RequireExists, uint8_t EvenReadOnly, uint8_t Quiet);

	// Object: Function MetaDorian.MTFileUtils.Copy
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556b8f0
	// Params: [ Num(8) Size(0x30) ]
	static uint32_t Copy(struct FString Dest, struct FString Src, uint8_t Replace, uint8_t EvenIfReadOnly, uint8_t Attributes, int32_t ReadFlags, int32_t WriteFlags);

	// Object: Function MetaDorian.MTFileUtils.ConvertToRelativePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556b810
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ConvertToRelativePath(struct FString Filename);

	// Object: Function MetaDorian.MTFileUtils.ConvertToAbsolutePathForExternalAppForWrite
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556b730
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ConvertToAbsolutePathForExternalAppForWrite(struct FString AbsolutePath);

	// Object: Function MetaDorian.MTFileUtils.ConvertToAbsolutePathForExternalAppForRead
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556b650
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ConvertToAbsolutePathForExternalAppForRead(struct FString AbsolutePath);

	// Object: Function MetaDorian.MTFileUtils.ConvertRelativePathToFull
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556b570
	// Params: [ Num(2) Size(0x20) ]
	static struct FString ConvertRelativePathToFull(struct FString InPath);
	DEFINE_UE_CLASS_HELPERS(UMTFileUtils, "MTFileUtils")

};

// Object: Class MetaDorian.MTHttpLoader
// Size: 0x78 (Inherited: 0x28)
struct UMTHttpLoader : UObject
{
	struct FString URL; // 0x28(0x10)
	struct FString ContentType; // 0x38(0x10)
	uint8_t Pad_0x48[0x20]; // 0x48(0x20)
	struct FDelegate OnComplete; // 0x68(0x10)


	// Object: Function MetaDorian.MTHttpLoader.Load
	// Flags: [Final|Native|Public]
	// Offset: 0x1556d794
	// Params: [ Num(3) Size(0x21) ]
	uint8_t Load(struct FString InURL, struct FString InContentType);
	DEFINE_UE_CLASS_HELPERS(UMTHttpLoader, "MTHttpLoader")

};

// Object: Class MetaDorian.MTOpenHarmony
// Size: 0x28 (Inherited: 0x28)
struct UMTOpenHarmony : UObject
{

	// Object: Function MetaDorian.MTOpenHarmony.IsOverrideOpenHarmonyLogDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556e2a0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsOverrideOpenHarmonyLogDir();

	// Object: Function MetaDorian.MTOpenHarmony.GetProjectName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556e208
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetProjectName();

	// Object: Function MetaDorian.MTOpenHarmony.GetInternalFilePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556e170
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetInternalFilePath();

	// Object: Function MetaDorian.MTOpenHarmony.GetFilePathBase
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556e0d8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFilePathBase();

	// Object: Function MetaDorian.MTOpenHarmony.GetExternalFilePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1556e040
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetExternalFilePath();
	DEFINE_UE_CLASS_HELPERS(UMTOpenHarmony, "MTOpenHarmony")

};

} // namespace SDK
