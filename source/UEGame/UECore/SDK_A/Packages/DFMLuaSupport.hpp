#pragma once

#include "../CoreUObject_classes.hpp"
#include "DFMGameSDK.hpp"
#include "Engine.hpp"
#include "GPTools.hpp"

namespace SDK
{

// Package: DFMLuaSupport
// Enums: 1
// Structs: 2
// Classes: 16

struct AGPPlayerState;
struct APlayerController;
enum class EMetaError : uint8_t;
struct FGridSize;
struct FItemLocation;
struct FMetaInfo;
struct FTeamMemberInfo;
struct UCanvasPanelSlot;
struct UGameInstance;
struct UImage;
struct ULevelStreaming;
struct ULuaUIBaseView;
struct UMaterialInterface;
struct USplineAreaWidget;
struct UTextBlock;
struct UTexture;
struct UTexture2D;
struct UUserWidget;
struct UWidget;
struct UWidgetAnimation;
struct UWidgetComponent;
struct UWidgetSwitcher;
struct UWorld;
struct FPerfStatData;
struct FLuaWidgetCreatedPool;
struct ADFLuaActor;
struct UDFMToolLua;
struct ULuaDebugUtil;
struct ULuaExtension;
struct ALuaFrontEndGameMode;
struct ULuaFunctionForward;
struct ULuaItemDragConfigUtil;
struct ULuaLevelLoader;
struct ALuaLobbyGameMode;
struct ULuaResourceConverter;
struct ULuaResourceLoader;
struct ULuaSubsystem;
struct ULuaWidgetCreateManager;
struct ULuaWidgetSwitcherManager;
struct UOnlineLuaProcess;
struct UStoreLotteryBGManager;

// Object: Enum DFMLuaSupport.ELuaFrontEndType
enum class ELuaFrontEndType : uint8_t
{
	None = 0,
	Normal = 1,
	FromSettlement = 2,
	WidgetTest = 10,
	ELuaFrontEndType_MAX = 11
};

// Object: ScriptStruct DFMLuaSupport.PerfStatData
// Size: 0x18 (Inherited: 0x0)
struct FPerfStatData
{
	float GameThreadTime; // 0x0(0x4)
	float RenderThreadTime; // 0x4(0x4)
	float RHIThreadTime; // 0x8(0x4)
	float DynamicResolution; // 0xC(0x4)
	float InputLatencyTime; // 0x10(0x4)
	float GPUFrameTime; // 0x14(0x4)
};

// Object: ScriptStruct DFMLuaSupport.LuaWidgetCreatedPool
// Size: 0x40 (Inherited: 0x0)
struct FLuaWidgetCreatedPool
{
	struct TArray<struct UUserWidget*> CreatedWidgets; // 0x0(0x10)
	struct TArray<struct UUserWidget*> BindLuaWidgets; // 0x10(0x10)
	struct TArray<struct TWeakObjectPtr<struct UUserWidget>> UsingWidget; // 0x20(0x10)
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
};

// Object: Class DFMLuaSupport.DFLuaActor
// Size: 0x388 (Inherited: 0x370)
struct ADFLuaActor : AActor
{
	DEFINE_UE_CLASS_HELPERS(ADFLuaActor, "DFLuaActor")

	struct FString LuaPath; // 0x370(0x10)
	uint8_t Pad_0x380[0x8]; // 0x380(0x8)

	// Object: Function DFMLuaSupport.DFLuaActor.MarkWidgetRenderStateDirty
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x13949870
	// Params: [ Num(1) Size(0x8) ]
	void MarkWidgetRenderStateDirty(struct UWidgetComponent* Widget);
};

// Object: Class DFMLuaSupport.DFMToolLua
// Size: 0x70 (Inherited: 0x50)
struct UDFMToolLua : UGPToolBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMToolLua, "DFMToolLua")

	uint8_t Pad_0x50[0x20]; // 0x50(0x20)
};

// Object: Class DFMLuaSupport.LuaDebugUtil
// Size: 0x28 (Inherited: 0x28)
struct ULuaDebugUtil : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaDebugUtil, "LuaDebugUtil")

	// Object: Function DFMLuaSupport.LuaDebugUtil.GetPerfStatData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949ba8
	// Params: [ Num(1) Size(0x18) ]
	static struct FPerfStatData GetPerfStatData();

	// Object: Function DFMLuaSupport.LuaDebugUtil.GetMaxSupportedRefreshRate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949b74
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMaxSupportedRefreshRate();

	// Object: Function DFMLuaSupport.LuaDebugUtil.ForceSleepGamethread
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949ae0
	// Params: [ Num(1) Size(0x4) ]
	static void ForceSleepGamethread(float SleepTime);

	// Object: Function DFMLuaSupport.LuaDebugUtil.ForceMarkObjPendingKill
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949a4c
	// Params: [ Num(1) Size(0x8) ]
	static void ForceMarkObjPendingKill(struct UObject* obj);

	// Object: Function DFMLuaSupport.LuaDebugUtil.CreateTransientObj
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x139499a8
	// Params: [ Num(2) Size(0x10) ]
	static struct UObject* CreateTransientObj(struct UObject* Outer);
};

// Object: Class DFMLuaSupport.LuaExtension
// Size: 0x28 (Inherited: 0x28)
struct ULuaExtension : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaExtension, "LuaExtension")

	// Object: Function DFMLuaSupport.LuaExtension.XOREncodeData
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394cd90
	// Params: [ Num(3) Size(0x30) ]
	static struct FString XOREncodeData(struct FString InData, struct FString Key);

	// Object: Function DFMLuaSupport.LuaExtension.TestRefParam_FStruct
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394ccb0
	// Params: [ Num(1) Size(0x60) ]
	static void TestRefParam_FStruct(struct FGridSize& OutGridSize);

	// Object: Function DFMLuaSupport.LuaExtension.TestReadINI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394cc78
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t TestReadINI();

	// Object: Function DFMLuaSupport.LuaExtension.TestMofidyAnimation
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394c9d4
	// Params: [ Num(8) Size(0x39) ]
	static uint8_t TestMofidyAnimation(struct UWidgetAnimation* Animation, struct UObject* BindObj, const struct FName& TrackName, int32_t SectionIndex, struct FName& PropertyName, int32_t FrameIndex, struct TArray<float> Vars);

	// Object: Function DFMLuaSupport.LuaExtension.String2UpperMD5
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfbf0ca8
	// Params: [ Num(2) Size(0x20) ]
	static struct FString String2UpperMD5(struct FString str);

	// Object: Function DFMLuaSupport.LuaExtension.ShowInGameHud
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c8fc
	// Params: [ Num(2) Size(0x9) ]
	static void ShowInGameHud(struct UObject* WorldContext, uint8_t bShow);

	// Object: Function DFMLuaSupport.LuaExtension.SetVectorDataToTexture2D
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c6c0
	// Params: [ Num(5) Size(0x30) ]
	static void SetVectorDataToTexture2D(struct UTexture2D* MaskTex, int32_t Width, int32_t Height, struct TArray<uint8_t> RData, struct TArray<uint8_t> GData);

	// Object: Function DFMLuaSupport.LuaExtension.SetLuaErrTipsFlag
	// Flags: [Final|Exec|Native|Static|Public|BlueprintCallable]
	// Offset: 0x107f99f8
	// Params: [ Num(1) Size(0x1) ]
	static void SetLuaErrTipsFlag(uint8_t Value);

	// Object: Function DFMLuaSupport.LuaExtension.SetGlobalDragTriggerDistance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c62c
	// Params: [ Num(1) Size(0x4) ]
	static void SetGlobalDragTriggerDistance(float Distance);

	// Object: Function DFMLuaSupport.LuaExtension.SetEnableLuaProfilerTick
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394c590
	// Params: [ Num(1) Size(0x1) ]
	static void SetEnableLuaProfilerTick(uint8_t bValue);

	// Object: Function DFMLuaSupport.LuaExtension.SetColorToTexture2D
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c460
	// Params: [ Num(2) Size(0x18) ]
	static void SetColorToTexture2D(struct UTexture2D* MaskTex, struct TArray<struct FColor> ColorData);

	// Object: Function DFMLuaSupport.LuaExtension.SaveMoLiFixError
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394c390
	// Params: [ Num(2) Size(0x8) ]
	static void SaveMoLiFixError(EMetaError MetaError, int32_t InErrorCode);

	// Object: Function DFMLuaSupport.LuaExtension.SaveMoLiFixData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1394c28c
	// Params: [ Num(1) Size(0x10) ]
	static void SaveMoLiFixData(const struct FMetaInfo& MetaInfo);

	// Object: Function DFMLuaSupport.LuaExtension.SafeEngineForceGC
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c1b4
	// Params: [ Num(2) Size(0x9) ]
	static void SafeEngineForceGC(struct UGameInstance* GameInstance, uint8_t bForcePurge);

	// Object: Function DFMLuaSupport.LuaExtension.RoleInfoCopy2Clipboard
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c0cc
	// Params: [ Num(1) Size(0x10) ]
	static void RoleInfoCopy2Clipboard(struct FString str);

	// Object: Function DFMLuaSupport.LuaExtension.ReportLuaUIShow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf8cae0c
	// Params: [ Num(1) Size(0x10) ]
	static void ReportLuaUIShow(struct FString ReportKeyPath);

	// Object: Function DFMLuaSupport.LuaExtension.ReportLuaUIClose
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf842318
	// Params: [ Num(1) Size(0x10) ]
	static void ReportLuaUIClose(struct FString ReportKeyPath);

	// Object: Function DFMLuaSupport.LuaExtension.PrintLuaHotFixFiles
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c0b8
	// Params: [ Num(0) Size(0x0) ]
	static void PrintLuaHotFixFiles();

	// Object: Function DFMLuaSupport.LuaExtension.OpenDolbyAudio
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c0a4
	// Params: [ Num(0) Size(0x0) ]
	static void OpenDolbyAudio();

	// Object: Function DFMLuaSupport.LuaExtension.Open3PPriorityNumFunctionLimit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394c090
	// Params: [ Num(0) Size(0x0) ]
	static void Open3PPriorityNumFunctionLimit();

	// Object: Function DFMLuaSupport.LuaExtension.MemOpt_SetCanvasPosAndSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf1a97d0
	// Params: [ Num(5) Size(0x18) ]
	static void MemOpt_SetCanvasPosAndSize(struct UCanvasPanelSlot* Slot, float posX, float posY, float SizeX, float SizeY);

	// Object: Function DFMLuaSupport.LuaExtension.MemOpt_GetRelativeOffset
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0xe7a6ec0
	// Params: [ Num(4) Size(0x18) ]
	static void MemOpt_GetRelativeOffset(struct UWidget* Child, struct UWidget* Parent, float& RelativeX, float& RelativeY);

	// Object: Function DFMLuaSupport.LuaExtension.MemOpt_GetCanvasPosAndSize
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394bebc
	// Params: [ Num(5) Size(0x18) ]
	static void MemOpt_GetCanvasPosAndSize(struct UCanvasPanelSlot* Slot, float& posX, float& posY, float& SizeX, float& SizeY);

	// Object: Function DFMLuaSupport.LuaExtension.LuaSetWorldRenderingStatus
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394bde4
	// Params: [ Num(2) Size(0x9) ]
	static void LuaSetWorldRenderingStatus(struct UObject* WorldContext, uint8_t bShow);

	// Object: Function DFMLuaSupport.LuaExtension.LuaErrTipsWithoutFrameWork
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394bd48
	// Params: [ Num(1) Size(0x10) ]
	static void LuaErrTipsWithoutFrameWork(struct FString ErrStr);

	// Object: Function DFMLuaSupport.LuaExtension.LoadClassByName
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394bc9c
	// Params: [ Num(2) Size(0x18) ]
	static struct UObject* LoadClassByName(struct FString Name);

	// Object: Function DFMLuaSupport.LuaExtension.IsUObjectClass
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394bba0
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsUObjectClass(struct FString ClassName);

	// Object: Function DFMLuaSupport.LuaExtension.IsMobileCharging
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf6df698
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsMobileCharging();

	// Object: Function DFMLuaSupport.LuaExtension.IsLuaDebug
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10b5375c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsLuaDebug();

	// Object: Function DFMLuaSupport.LuaExtension.InvalidateAllWidgets
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394bb04
	// Params: [ Num(1) Size(0x1) ]
	static void InvalidateAllWidgets(uint8_t bClearResourcesImmediately);

	// Object: Function DFMLuaSupport.LuaExtension.InitSplineAreaWidgetForSlotView
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0xf4357fc
	// Params: [ Num(3) Size(0x1C) ]
	static void InitSplineAreaWidgetForSlotView(struct USplineAreaWidget* SplineAreaWidget, float Thickness, struct FLinearColor SplineColor);

	// Object: Function DFMLuaSupport.LuaExtension.InitSplineAreaWidgetForKeySlotView
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x1067930c
	// Params: [ Num(5) Size(0x24) ]
	static void InitSplineAreaWidgetForKeySlotView(struct USplineAreaWidget* SplineAreaWidget, int32_t GridNum, int32_t MaxLength, float Thickness, struct FLinearColor SplineColor);

	// Object: Function DFMLuaSupport.LuaExtension.GetUObjectAliveObjectNum
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394ba60
	// Params: [ Num(2) Size(0xC) ]
	static int32_t GetUObjectAliveObjectNum(struct UGameInstance* GameInstance);

	// Object: Function DFMLuaSupport.LuaExtension.GetTextureParameterValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b984
	// Params: [ Num(3) Size(0x18) ]
	static struct UTexture* GetTextureParameterValue(struct FName ParameterName, struct UMaterialInterface* MaterialInterface);

	// Object: Function DFMLuaSupport.LuaExtension.GetOSVersion
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b8ec
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOSVersion();

	// Object: Function DFMLuaSupport.LuaExtension.GetMainSceneRenderBufferSize
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394b7b8
	// Params: [ Num(3) Size(0x10) ]
	static void GetMainSceneRenderBufferSize(struct UObject* WorldContextObj, int32_t& OutSizeX, int32_t& OutSizeY);

	// Object: Function DFMLuaSupport.LuaExtension.GetLuaErrTipsFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10803548
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetLuaErrTipsFlag();

	// Object: Function DFMLuaSupport.LuaExtension.GetLuaDebugPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10b196c8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetLuaDebugPath();

	// Object: Function DFMLuaSupport.LuaExtension.GetItemLocationSubSpaceIndex
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b700
	// Params: [ Num(2) Size(0x1C) ]
	static int32_t GetItemLocationSubSpaceIndex(struct FItemLocation Loc);

	// Object: Function DFMLuaSupport.LuaExtension.GetInt32EnumString
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b5e4
	// Params: [ Num(3) Size(0x28) ]
	static struct FString GetInt32EnumString(struct FString EnumName, int32_t Value);

	// Object: Function DFMLuaSupport.LuaExtension.GetGlobalDragTriggerDistance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b5b0
	// Params: [ Num(1) Size(0x4) ]
	static float GetGlobalDragTriggerDistance();

	// Object: Function DFMLuaSupport.LuaExtension.GetFromClipboard
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b518
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetFromClipboard();

	// Object: Function DFMLuaSupport.LuaExtension.GetDFAntiCheatUClassEnable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b4e0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetDFAntiCheatUClassEnable();

	// Object: Function DFMLuaSupport.LuaExtension.GetDeviceMakeAndModel
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b448
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceMakeAndModel();

	// Object: Function DFMLuaSupport.LuaExtension.GetDeviceID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b3b0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDeviceID();

	// Object: Function DFMLuaSupport.LuaExtension.GetClassSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b2b8
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetClassSize(struct FString ClassName);

	// Object: Function DFMLuaSupport.LuaExtension.GetCharacterInitializedDelegate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b234
	// Params: [ Num(1) Size(0x10) ]
	static struct FMulticastInlineDelegate GetCharacterInitializedDelegate();

	// Object: Function DFMLuaSupport.LuaExtension.GetAntiCheatUClassEncryptedValue
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b1fc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetAntiCheatUClassEncryptedValue();

	// Object: Function DFMLuaSupport.LuaExtension.GetAntiCheatUClassEncryptedBitFlag
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b1c8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAntiCheatUClassEncryptedBitFlag();

	// Object: Function DFMLuaSupport.LuaExtension.GetAceAntiCheatUClassEnable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b190
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetAceAntiCheatUClassEnable();

	// Object: Function DFMLuaSupport.LuaExtension.GeneratePointEmitter
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b0c0
	// Params: [ Num(2) Size(0xC) ]
	static void GeneratePointEmitter(struct UObject* WorldContext, int32_t ID);

	// Object: Function DFMLuaSupport.LuaExtension.ForEachHotFixLuaSource2MD5
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394b028
	// Params: [ Num(1) Size(0x10) ]
	static struct FString ForEachHotFixLuaSource2MD5();

	// Object: Function DFMLuaSupport.LuaExtension.ForceGC
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1094b588
	// Params: [ Num(0) Size(0x0) ]
	static void ForceGC();

	// Object: Function DFMLuaSupport.LuaExtension.FindUIResObject
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394aef0
	// Params: [ Num(3) Size(0x20) ]
	static struct UObject* FindUIResObject(struct UObject* WorldContext, struct FString ResPath);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_MakeDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394ae54
	// Params: [ Num(1) Size(0x10) ]
	static void Ext_MakeDirectory(struct FString Path);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_LoadFileToString
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394ad04
	// Params: [ Num(3) Size(0x21) ]
	static uint8_t Ext_LoadFileToString(struct FString& OutStr, struct FString FilePath);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_GetPlatformClientInfo
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x10b64870
	// Params: [ Num(1) Size(0x50) ]
	static void Ext_GetPlatformClientInfo(struct TMap<struct FString, struct FString>& Infos);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_GetMultiModifyTimeStamps
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394abe4
	// Params: [ Num(2) Size(0x20) ]
	static void Ext_GetMultiModifyTimeStamps(struct TArray<struct FString> FilePaths, struct TArray<int64_t>& FileModifyTSArr);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_GetModifyTimeStamp
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394aaec
	// Params: [ Num(2) Size(0x18) ]
	static int64_t Ext_GetModifyTimeStamp(struct FString FilePath);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_GetFileSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xef3d6f0
	// Params: [ Num(2) Size(0x18) ]
	static int64_t Ext_GetFileSize(struct FString Path);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_GetDebugFile
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf639024
	// Params: [ Num(3) Size(0x30) ]
	static struct TArray<struct FString> Ext_GetDebugFile(struct FString Directory, struct FString Extension);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_FTimespan_ToFormatString
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x1394a984
	// Params: [ Num(3) Size(0x28) ]
	static struct FString Ext_FTimespan_ToFormatString(struct FTimespan Timespan, struct FString Format);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_FTimespan_FormatGetText
	// Flags: [Final|Native|Static|Public|HasDefaults]
	// Offset: 0x1394a8b0
	// Params: [ Num(2) Size(0x18) ]
	static struct FString Ext_FTimespan_FormatGetText(struct FTimespan Timespan);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_FindFilesRecursive
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394a610
	// Params: [ Num(6) Size(0x33) ]
	static void Ext_FindFilesRecursive(struct TArray<struct FString>& FileNames, struct FString StartDirectory, struct FString Filename, uint8_t Files, uint8_t Directories, uint8_t bClearFileNames);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_FileExists
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xeed1368
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t Ext_FileExists(struct FString Path);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_DirectoryExists
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394a514
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t Ext_DirectoryExists(struct FString Path);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_DeleteDirectory
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394a39c
	// Params: [ Num(3) Size(0x12) ]
	static void Ext_DeleteDirectory(struct FString Path, uint8_t RequireExists, uint8_t Tree);

	// Object: Function DFMLuaSupport.LuaExtension.Ext_ATeamInfo_GatherAllMembers
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394a2b4
	// Params: [ Num(2) Size(0x18) ]
	static void Ext_ATeamInfo_GatherAllMembers(struct AGPPlayerState* GPPlayerState, struct TArray<struct FTeamMemberInfo>& Members);

	// Object: Function DFMLuaSupport.LuaExtension.DestroyPartsDisplayActor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394a220
	// Params: [ Num(1) Size(0x8) ]
	static void DestroyPartsDisplayActor(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaExtension.DeleteTransientTexture
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394a18c
	// Params: [ Num(1) Size(0x8) ]
	static void DeleteTransientTexture(struct UTexture2D* MaskTex);

	// Object: Function DFMLuaSupport.LuaExtension.DeleteMoLiDirectoryRecursivelyByPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394a0f0
	// Params: [ Num(1) Size(0x10) ]
	static void DeleteMoLiDirectoryRecursivelyByPath(struct FString DeletePath);

	// Object: Function DFMLuaSupport.LuaExtension.CreateTransientTexture
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394a014
	// Params: [ Num(3) Size(0x10) ]
	static struct UTexture2D* CreateTransientTexture(int32_t Width, int32_t Height);

	// Object: Function DFMLuaSupport.LuaExtension.CreatePartsDisplayActor
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949f80
	// Params: [ Num(1) Size(0x8) ]
	static void CreatePartsDisplayActor(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaExtension.CopyWidgetAnimation
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949edc
	// Params: [ Num(2) Size(0x10) ]
	static struct UWidgetAnimation* CopyWidgetAnimation(struct UWidgetAnimation* CloneFrom);

	// Object: Function DFMLuaSupport.LuaExtension.CloseDolbyAudio
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949ec8
	// Params: [ Num(0) Size(0x0) ]
	static void CloseDolbyAudio();

	// Object: Function DFMLuaSupport.LuaExtension.Close3PPriorityNumFunctionLimit
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949eb4
	// Params: [ Num(0) Size(0x0) ]
	static void Close3PPriorityNumFunctionLimit();

	// Object: Function DFMLuaSupport.LuaExtension.CheckIsHDD
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13949e7c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t CheckIsHDD();

	// Object: Function DFMLuaSupport.LuaExtension.CheckFileExist
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949dcc
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CheckFileExist(struct FString FilePathAndExtension);

	// Object: Function DFMLuaSupport.LuaExtension.ChangeTextBlockOutlineSize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949cfc
	// Params: [ Num(2) Size(0xC) ]
	static void ChangeTextBlockOutlineSize(struct UTextBlock* TextBlock, int32_t NewSize);

	// Object: Function DFMLuaSupport.LuaExtension.CalcFileMD5
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13949c1c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString CalcFileMD5(struct FString InPath);
};

// Object: Class DFMLuaSupport.LuaFrontEndGameMode
// Size: 0x458 (Inherited: 0x458)
struct ALuaFrontEndGameMode : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(ALuaFrontEndGameMode, "LuaFrontEndGameMode")

	ELuaFrontEndType FrontEndType; // 0x451(0x1)
};

// Object: Class DFMLuaSupport.LuaFunctionForward
// Size: 0x28 (Inherited: 0x28)
struct ULuaFunctionForward : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaFunctionForward, "LuaFunctionForward")
};

// Object: Class DFMLuaSupport.LuaItemDragConfigUtil
// Size: 0x28 (Inherited: 0x28)
struct ULuaItemDragConfigUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(ULuaItemDragConfigUtil, "LuaItemDragConfigUtil")

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateMaxDragPointSampleNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d610
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateMaxDragPointSampleNum(int32_t Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateIgnoreFirstSample
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d574
	// Params: [ Num(1) Size(0x1) ]
	static void UpdateIgnoreFirstSample(uint8_t Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateFastDragThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d4e0
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateFastDragThreshold(float Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateFastDragAngle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d44c
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateFastDragAngle(float Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateDragThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d3b8
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateDragThreshold(float Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.UpdateDragAngle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d324
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateDragAngle(float Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.SyncWarehouseIVInteractive
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d24c
	// Params: [ Num(2) Size(0x9) ]
	static void SyncWarehouseIVInteractive(struct ULuaUIBaseView* View, uint8_t bFirstAdd);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.SyncDragConfig2View
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d1b8
	// Params: [ Num(1) Size(0x8) ]
	static void SyncDragConfig2View(struct ULuaUIBaseView* View);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.SetLongPressTriggerDuration
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394d124
	// Params: [ Num(1) Size(0x4) ]
	static void SetLongPressTriggerDuration(float Value);

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.InitDragConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10ad4ac8
	// Params: [ Num(0) Size(0x0) ]
	static void InitDragConfig();

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.GetMaxDragPointSampleNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d104
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetMaxDragPointSampleNum();

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.GetIgnoreFirstSample
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d0e4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIgnoreFirstSample();

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.GetFastDragThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d0c4
	// Params: [ Num(1) Size(0x4) ]
	static float GetFastDragThreshold();

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.GetFastDragAngle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d0a4
	// Params: [ Num(1) Size(0x4) ]
	static float GetFastDragAngle();

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.GetDragThreshold
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d084
	// Params: [ Num(1) Size(0x4) ]
	static float GetDragThreshold();

	// Object: Function DFMLuaSupport.LuaItemDragConfigUtil.GetDragAngle
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394d064
	// Params: [ Num(1) Size(0x4) ]
	static float GetDragAngle();
};

// Object: Class DFMLuaSupport.LuaLevelLoader
// Size: 0x100 (Inherited: 0x30)
struct ULuaLevelLoader : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULuaLevelLoader, "LuaLevelLoader")

	struct FMulticastInlineDelegate OnLoadStreamLevelComplete; // 0x30(0x10)
	struct FMulticastInlineDelegate OnUnloadStreamLevelComplete; // 0x40(0x10)
	uint8_t Pad_0x50[0xB0]; // 0x50(0xB0)

	// Object: Function DFMLuaSupport.LuaLevelLoader.RequestUnloadStreamLevel
	// Flags: [Final|Native|Public]
	// Offset: 0xfa90a84
	// Params: [ Num(3) Size(0x10) ]
	int32_t RequestUnloadStreamLevel(struct FName UnloadLevelName, uint8_t bShouldBlockOnUnload);

	// Object: Function DFMLuaSupport.LuaLevelLoader.RequestLoadStreamLevel
	// Flags: [Final|Native|Public]
	// Offset: 0xf38bad0
	// Params: [ Num(4) Size(0x10) ]
	int32_t RequestLoadStreamLevel(struct FName LoadLevelName, uint8_t bMakeVisibleAfterLoad, uint8_t bShouldBlockOnLoad);

	// Object: Function DFMLuaSupport.LuaLevelLoader.OnStreamLevelUnloadFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa0d20c
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamLevelUnloadFinished(int32_t UnloadID);

	// Object: Function DFMLuaSupport.LuaLevelLoader.OnStreamLevelLoadFinished
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf3d666c
	// Params: [ Num(1) Size(0x4) ]
	void OnStreamLevelLoadFinished(int32_t LoadID);

	// Object: Function DFMLuaSupport.LuaLevelLoader.GetStreamingLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x1394ea24
	// Params: [ Num(2) Size(0x10) ]
	struct ULevelStreaming* GetStreamingLevel(int32_t LoadID);

	// Object: Function DFMLuaSupport.LuaLevelLoader.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a8a61c
	// Params: [ Num(2) Size(0x10) ]
	static struct ULuaLevelLoader* Get(struct UObject* GameContextObject);

	// Object: Function DFMLuaSupport.LuaLevelLoader.CancelLoad
	// Flags: [Final|Native|Public]
	// Offset: 0x1394e980
	// Params: [ Num(1) Size(0x4) ]
	void CancelLoad(int32_t LoadID);
};

// Object: Class DFMLuaSupport.LuaLobbyGameMode
// Size: 0x458 (Inherited: 0x458)
struct ALuaLobbyGameMode : AGameMode
{
	DEFINE_UE_CLASS_HELPERS(ALuaLobbyGameMode, "LuaLobbyGameMode")
};

// Object: Class DFMLuaSupport.LuaResourceConverter
// Size: 0x28 (Inherited: 0x28)
struct ULuaResourceConverter : UObject
{
	DEFINE_UE_CLASS_HELPERS(ULuaResourceConverter, "LuaResourceConverter")

	// Object: Function DFMLuaSupport.LuaResourceConverter.IsEmptyTexture
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394ebc4
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsEmptyTexture(struct UTexture* Tex);

	// Object: Function DFMLuaSupport.LuaResourceConverter.IsEmptyImage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfc8b50c
	// Params: [ Num(2) Size(0x9) ]
	static uint8_t IsEmptyImage(struct UImage* Img);

	// Object: Function DFMLuaSupport.LuaResourceConverter.ConvertTextureFromBin
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1394eb08
	// Params: [ Num(2) Size(0x18) ]
	static struct UTexture* ConvertTextureFromBin(const struct TArray<uint8_t>& BinData);

	// Object: Function DFMLuaSupport.LuaResourceConverter.ConvertImageFromBin
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x10b7cf08
	// Params: [ Num(2) Size(0x18) ]
	static struct UImage* ConvertImageFromBin(const struct TArray<uint8_t>& BinData);
};

// Object: Class DFMLuaSupport.LuaResourceLoader
// Size: 0x98 (Inherited: 0x30)
struct ULuaResourceLoader : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULuaResourceLoader, "LuaResourceLoader")

	struct FMulticastInlineDelegate OnBatchComplete; // 0x30(0x10)
	uint8_t Pad_0x40[0x58]; // 0x40(0x58)

	// Object: Function DFMLuaSupport.LuaResourceLoader.RequestAsyncLoad
	// Flags: [Final|Native|Public]
	// Offset: 0x1394ef7c
	// Params: [ Num(3) Size(0x18) ]
	int32_t RequestAsyncLoad(struct TArray<struct FString> InPaths, int32_t Priority);

	// Object: Function DFMLuaSupport.LuaResourceLoader.OnLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x1394eed8
	// Params: [ Num(1) Size(0x4) ]
	void OnLoadComplete(int32_t BatchId);

	// Object: Function DFMLuaSupport.LuaResourceLoader.OnFastLoadComplete
	// Flags: [Final|Native|Protected]
	// Offset: 0x1394ee34
	// Params: [ Num(1) Size(0x4) ]
	void OnFastLoadComplete(int32_t BatchId);

	// Object: Function DFMLuaSupport.LuaResourceLoader.GetResourceSizeBytes
	// Flags: [Final|Native|Public]
	// Offset: 0x1394ed4c
	// Params: [ Num(3) Size(0x10) ]
	float GetResourceSizeBytes(struct UObject* obj, int32_t Mode);

	// Object: Function DFMLuaSupport.LuaResourceLoader.GetProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x1394eca0
	// Params: [ Num(2) Size(0x8) ]
	float GetProgress(int32_t BatchId);

	// Object: Function DFMLuaSupport.LuaResourceLoader.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a8a8e8
	// Params: [ Num(2) Size(0x10) ]
	static struct ULuaResourceLoader* Get(struct UObject* GameContextObject);

	// Object: Function DFMLuaSupport.LuaResourceLoader.CancelLoad
	// Flags: [Final|Native|Public]
	// Offset: 0xf61fb28
	// Params: [ Num(1) Size(0x4) ]
	void CancelLoad(int32_t BatchId);

	// Object: Function DFMLuaSupport.LuaResourceLoader.CancelAllLoads
	// Flags: [Final|Native|Public]
	// Offset: 0x1394ec8c
	// Params: [ Num(0) Size(0x0) ]
	void CancelAllLoads();
};

// Object: Class DFMLuaSupport.LuaSubsystem
// Size: 0x2A8 (Inherited: 0x30)
struct ULuaSubsystem : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULuaSubsystem, "LuaSubsystem")

	uint8_t Pad_0x30[0x98]; // 0x30(0x98)
	struct FString URL; // 0xC8(0x10)
	struct FString MixtureStr; // 0xD8(0x10)
	struct FString Timestamp; // 0xE8(0x10)
	struct FString MD5; // 0xF8(0x10)
	struct FString SoMD5; // 0x108(0x10)
	int64_t Version; // 0x118(0x8)
	struct FString Force; // 0x120(0x10)
	struct FMulticastInlineDelegate OnLuaPreClearDynamicObjectsDelegate; // 0x130(0x10)
	struct FMulticastInlineDelegate OnLuaPostEngineInitDelegate; // 0x140(0x10)
	struct FMulticastInlineDelegate OnLuaPostClearDynamicObjectsDelegate; // 0x150(0x10)
	struct FMulticastInlineDelegate OnLuaUObjectNumWarningDelegate; // 0x160(0x10)
	struct FMulticastInlineDelegate OnLuaLowMemoryWarningDelegate; // 0x170(0x10)
	struct FMulticastInlineDelegate OnAsyncLoadingFlushDelegate; // 0x180(0x10)
	struct FMulticastInlineDelegate OnNotifyLuaResolutionResized; // 0x190(0x10)
	struct FMulticastInlineDelegate OnLuaSafeZoneChanged; // 0x1A0(0x10)
	struct FMulticastInlineDelegate OnLuaViewportChangedOrSafeZoneChanged; // 0x1B0(0x10)
	struct FMulticastInlineDelegate OnLuaClientSeamlessTravelEnd; // 0x1C0(0x10)
	struct FMulticastInlineDelegate OnLuaClientSeamlessTravelStart; // 0x1D0(0x10)
	struct FMulticastInlineDelegate OnActorProxyUpdate; // 0x1E0(0x10)
	struct FMulticastInlineDelegate OnLuaNetworkFailure; // 0x1F0(0x10)
	struct FMulticastInlineDelegate OnLuaPostWorldInitialization; // 0x200(0x10)
	struct FMulticastInlineDelegate OnLuaStartFinishedDelegate; // 0x210(0x10)
	struct FMulticastInlineDelegate OnLuaPreGarbageCollect; // 0x220(0x10)
	struct FMetaInfo MetaInfoCache; // 0x230(0x10)
	uint8_t Error2SkipMoLi : 1; // 0x240(0x1), Mask(0x1)
	uint8_t BitPad_0x240_1 : 7; // 0x240(0x1)
	uint8_t bGetMetaData : 1; // 0x241(0x1), Mask(0x1)
	uint8_t BitPad_0x241_1 : 7; // 0x241(0x1)
	uint8_t bIsNewMoLi : 1; // 0x242(0x1), Mask(0x1)
	uint8_t BitPad_0x242_1 : 7; // 0x242(0x1)
	uint8_t bHttpSuccess : 1; // 0x243(0x1), Mask(0x1)
	uint8_t BitPad_0x243_1 : 7; // 0x243(0x1)
	int32_t HttpReTryNum; // 0x244(0x4)
	struct FString ErrCode; // 0x248(0x10)
	int32_t MoLiFlag; // 0x258(0x4)
	uint8_t Pad_0x25C[0x4]; // 0x25C(0x4)
	struct FMulticastInlineDelegate OnLuaPostPCCreatedDelegate; // 0x260(0x10)
	uint8_t Pad_0x270[0x20]; // 0x270(0x20)
	struct UOnlineLuaProcess* OnlineObj; // 0x290(0x8)
	uint8_t bShoudlRestartLua : 1; // 0x298(0x1), Mask(0x1)
	uint8_t BitPad_0x298_1 : 7; // 0x298(0x1)
	uint8_t Pad_0x299[0xF]; // 0x299(0xF)

	// Object: Function DFMLuaSupport.LuaSubsystem.UpdateUObjectReportConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x139506e0
	// Params: [ Num(0) Size(0x0) ]
	static void UpdateUObjectReportConfig();

	// Object: Function DFMLuaSupport.LuaSubsystem.TestObjectWarning
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x139505f0
	// Params: [ Num(2) Size(0x18) ]
	static void TestObjectWarning(const struct TArray<struct FString>& Args, struct UWorld* World);

	// Object: Function DFMLuaSupport.LuaSubsystem.TestObjectConstruct
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x13950500
	// Params: [ Num(2) Size(0x18) ]
	static void TestObjectConstruct(const struct TArray<struct FString>& Args, struct UWorld* World);

	// Object: Function DFMLuaSupport.LuaSubsystem.StartLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b5ceb0
	// Params: [ Num(0) Size(0x0) ]
	void StartLua();

	// Object: Function DFMLuaSupport.LuaSubsystem.ShutDownLua
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139504ec
	// Params: [ Num(0) Size(0x0) ]
	void ShutDownLua();

	// Object: Function DFMLuaSupport.LuaSubsystem.SetGCParam
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x139503a4
	// Params: [ Num(4) Size(0x14) ]
	static void SetGCParam(struct UObject* obj, float limitSeconds, int32_t LimitCount, float Interval);

	// Object: Function DFMLuaSupport.LuaSubsystem.ReSetGetMetaData
	// Flags: [Final|Native|Public]
	// Offset: 0x13950390
	// Params: [ Num(0) Size(0x0) ]
	void ReSetGetMetaData();

	// Object: Function DFMLuaSupport.LuaSubsystem.ReqSpareHttp2Download
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139502e4
	// Params: [ Num(1) Size(0x10) ]
	void ReqSpareHttp2Download(struct FString UrlStr);

	// Object: Function DFMLuaSupport.LuaSubsystem.ReqHttp2Download
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x139502d0
	// Params: [ Num(0) Size(0x0) ]
	void ReqHttp2Download();

	// Object: Function DFMLuaSupport.LuaSubsystem.ReportUObjectSnapshot
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13950234
	// Params: [ Num(1) Size(0x1) ]
	static void ReportUObjectSnapshot(uint8_t Upload2Cos);

	// Object: Function DFMLuaSupport.LuaSubsystem.ReportMoLiVer2GPM
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x10b81f10
	// Params: [ Num(0) Size(0x0) ]
	void ReportMoLiVer2GPM();

	// Object: Function DFMLuaSupport.LuaSubsystem.ReportEncData2CrashSight
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1090ecc4
	// Params: [ Num(0) Size(0x0) ]
	void ReportEncData2CrashSight();

	// Object: Function DFMLuaSupport.LuaSubsystem.OnMetaGetFail
	// Flags: [Final|Native|Public]
	// Offset: 0x13950154
	// Params: [ Num(2) Size(0x8) ]
	void OnMetaGetFail(EMetaError MetaError, int32_t InErrorCode);

	// Object: Function DFMLuaSupport.LuaSubsystem.OnMapleGetFail
	// Flags: [Final|Native|Public]
	// Offset: 0x139500b0
	// Params: [ Num(1) Size(0x4) ]
	void OnMapleGetFail(int32_t MapleError);

	// Object: Function DFMLuaSupport.LuaSubsystem.OnLocalPlayerPawnReady
	// Flags: [Final|Native|Private]
	// Offset: 0xfa7ab24
	// Params: [ Num(0) Size(0x0) ]
	void OnLocalPlayerPawnReady();

	// Object: Function DFMLuaSupport.LuaSubsystem.LuaGetGameState
	// Flags: [Final|Native|Public]
	// Offset: 0x13950004
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* LuaGetGameState(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaSubsystem.LuaGetFirstPlayerState
	// Flags: [Final|Native|Public]
	// Offset: 0x1394ff58
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* LuaGetFirstPlayerState(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaSubsystem.LuaGetFirstPlayerController
	// Flags: [Final|Native|Public]
	// Offset: 0x1394feac
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* LuaGetFirstPlayerController(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaSubsystem.LuaGetFirstCharacter
	// Flags: [Final|Native|Public]
	// Offset: 0x1394fe00
	// Params: [ Num(2) Size(0x10) ]
	struct UObject* LuaGetFirstCharacter(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaSubsystem.LuaCallTrimMemory
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394fdec
	// Params: [ Num(0) Size(0x0) ]
	static void LuaCallTrimMemory();

	// Object: Function DFMLuaSupport.LuaSubsystem.IsEnableUObjectReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394fdb4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnableUObjectReport();

	// Object: Function DFMLuaSupport.LuaSubsystem.InitUObjectRepoter
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394fda0
	// Params: [ Num(0) Size(0x0) ]
	static void InitUObjectRepoter();

	// Object: Function DFMLuaSupport.LuaSubsystem.ImmediateFullGC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394fc74
	// Params: [ Num(3) Size(0x3) ]
	static void ImmediateFullGC(uint8_t bCallLuaGC, uint8_t bCallUEGC, uint8_t bImmediateUEGC);

	// Object: Function DFMLuaSupport.LuaSubsystem.GetUObjectPendingDestoryObjectNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394fc40
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetUObjectPendingDestoryObjectNum();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetUObjectCount
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf649f0c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetUObjectCount();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMoLiVersion
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x109c32e0
	// Params: [ Num(1) Size(0x8) ]
	int64_t GetMoLiVersion();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMoLiUrl
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394fba8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMoLiUrl();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMoLiTimestamp
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394fb10
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMoLiTimestamp();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMoLiMD5
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394fa78
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMoLiMD5();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMoLiFlag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x107c6ccc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMoLiFlag();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMoLiErrFlag
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394fa40
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetMoLiErrFlag();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetMixtureStr
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394f9a8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMixtureStr();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetLuaSubSystemMgrIns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10946f18
	// Params: [ Num(2) Size(0x10) ]
	static struct ULuaSubsystem* GetLuaSubSystemMgrIns(struct UObject* WorldContext);

	// Object: Function DFMLuaSupport.LuaSubsystem.GetLuaReleaseCallGCDelayTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1394f974
	// Params: [ Num(1) Size(0x4) ]
	static float GetLuaReleaseCallGCDelayTime();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetIsLuaLowMemoryEnable
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10952d68
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsLuaLowMemoryEnable();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetIsLuaLogApplyShippingRule
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f93c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetIsLuaLogApplyShippingRule();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetGInjectLuaDebugSymbolOnStart
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x10701e08
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGInjectLuaDebugSymbolOnStart();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetGEnableLuaPackageWrapper
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f904
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGEnableLuaPackageWrapper();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetGEnableLuaClassVtblLookup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x106823d4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGEnableLuaClassVtblLookup();

	// Object: Function DFMLuaSupport.LuaSubsystem.GetErrCode
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1394f86c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetErrCode();

	// Object: Function DFMLuaSupport.LuaSubsystem.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xef6c90c
	// Params: [ Num(1) Size(0x8) ]
	static struct ULuaSubsystem* Get();

	// Object: Function DFMLuaSupport.LuaSubsystem.FullGC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f7d0
	// Params: [ Num(1) Size(0x1) ]
	static void FullGC(uint8_t bCallLuaGC);

	// Object: Function DFMLuaSupport.LuaSubsystem.EndMoLi
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1394f698
	// Params: [ Num(2) Size(0x18) ]
	void EndMoLi(int32_t Flag, struct FString ErrStr);

	// Object: Function DFMLuaSupport.LuaSubsystem.DumpObj
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394f684
	// Params: [ Num(0) Size(0x0) ]
	void DumpObj();

	// Object: Function DFMLuaSupport.LuaSubsystem.DoUnZip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1394f504
	// Params: [ Num(2) Size(0x20) ]
	void DoUnZip(struct FString BeginPath, struct FString EndPath);

	// Object: Function DFMLuaSupport.LuaSubsystem.DoMoLi
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1394f4f0
	// Params: [ Num(0) Size(0x0) ]
	void DoMoLi();

	// Object: Function DFMLuaSupport.LuaSubsystem.DisConnectServer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1394f4dc
	// Params: [ Num(0) Size(0x0) ]
	void DisConnectServer();

	// Object: Function DFMLuaSupport.LuaSubsystem.Convert2PublicSavedPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10109e30
	// Params: [ Num(1) Size(0x10) ]
	static struct FString Convert2PublicSavedPath();

	// Object: Function DFMLuaSupport.LuaSubsystem.ClearZip
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f4c8
	// Params: [ Num(0) Size(0x0) ]
	static void ClearZip();

	// Object: Function DFMLuaSupport.LuaSubsystem.ClearLuaFunctionInject
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f42c
	// Params: [ Num(1) Size(0x1) ]
	static void ClearLuaFunctionInject(uint8_t bIncludeWhiteList);

	// Object: Function DFMLuaSupport.LuaSubsystem.ClearAllLuaFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f418
	// Params: [ Num(0) Size(0x0) ]
	static void ClearAllLuaFile();

	// Object: Function DFMLuaSupport.LuaSubsystem.CheckPathValid
	// Flags: [Final|Native|Public]
	// Offset: 0x1394f314
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckPathValid(struct FString Path);

	// Object: Function DFMLuaSupport.LuaSubsystem.CheckNeedLuaMoLi
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1394f2dc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckNeedLuaMoLi();

	// Object: Function DFMLuaSupport.LuaSubsystem.CheckGetMetaData
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1394f2a4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t CheckGetMetaData();

	// Object: Function DFMLuaSupport.LuaSubsystem.CheckFullGC
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1394f1bc
	// Params: [ Num(2) Size(0x2) ]
	static void CheckFullGC(uint8_t bImmediateGC, uint8_t bImmediateUEGC);

	// Object: Function DFMLuaSupport.LuaSubsystem.CacheMetaInfo
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1394f0b0
	// Params: [ Num(1) Size(0x10) ]
	void CacheMetaInfo(const struct FMetaInfo& MetaInfo);

	// Object: Function DFMLuaSupport.LuaSubsystem.CacheMapleInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x10b8f750
	// Params: [ Num(0) Size(0x0) ]
	void CacheMapleInfo();

	// Object: Function DFMLuaSupport.LuaSubsystem.BeginMoLi
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a84a48
	// Params: [ Num(0) Size(0x0) ]
	void BeginMoLi();
};

// Object: Class DFMLuaSupport.LuaWidgetCreateManager
// Size: 0x80 (Inherited: 0x30)
struct ULuaWidgetCreateManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULuaWidgetCreateManager, "LuaWidgetCreateManager")

	struct TMap<int32_t, struct FLuaWidgetCreatedPool> CreatedWidgets; // 0x30(0x50)

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.SetMaxPreateNumByUIId
	// Flags: [Final|Native|Public]
	// Offset: 0x13951074
	// Params: [ Num(2) Size(0x8) ]
	void SetMaxPreateNumByUIId(int32_t UINavId, int32_t NewMaxNum);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.RealUseLuaUI
	// Flags: [Final|Native|Public]
	// Offset: 0x13950f94
	// Params: [ Num(2) Size(0x10) ]
	void RealUseLuaUI(int32_t UINavId, struct UUserWidget* NeedRemove);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.PreCreateByUIIdAndName
	// Flags: [Final|Native|Public]
	// Offset: 0x13950df8
	// Params: [ Num(6) Size(0x25) ]
	uint8_t PreCreateByUIIdAndName(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer, int32_t UINavId, struct FName UIName);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.IsEnablePreCreated
	// Flags: [Final|Native|Public]
	// Offset: 0x13950dc0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnablePreCreated();

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.IsEnableFramingBindLua
	// Flags: [Final|Native|Public]
	// Offset: 0x13950d88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnableFramingBindLua();

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x10a8abb4
	// Params: [ Num(2) Size(0x10) ]
	static struct ULuaWidgetCreateManager* Get(struct UObject* GameContextObject);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.DumpDebugInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x13950d74
	// Params: [ Num(0) Size(0x0) ]
	void DumpDebugInfo();

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.CreateByUIIdAndName
	// Flags: [Final|Native|Public]
	// Offset: 0xe7a56cc
	// Params: [ Num(6) Size(0x30) ]
	struct UUserWidget* CreateByUIIdAndName(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer, int32_t UINavId, struct FName UIName);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.CreateByUIId
	// Flags: [Final|Native|Public]
	// Offset: 0x13950c18
	// Params: [ Num(5) Size(0x28) ]
	struct UUserWidget* CreateByUIId(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer, int32_t UINavId);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.Create
	// Flags: [Final|Native|Public]
	// Offset: 0x13950af8
	// Params: [ Num(4) Size(0x20) ]
	struct UUserWidget* Create(struct UObject* WorldContextObject, struct UUserWidget* WidgetType, struct APlayerController* OwningPlayer);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.CleanLuaUIById
	// Flags: [Final|Native|Public]
	// Offset: 0x13950a54
	// Params: [ Num(1) Size(0x4) ]
	void CleanLuaUIById(int32_t UINavId);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.CleanByUIId
	// Flags: [Final|Native|Public]
	// Offset: 0x139509b0
	// Params: [ Num(1) Size(0x4) ]
	void CleanByUIId(int32_t UINavId);

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.CleanAll
	// Flags: [Final|Native|Public]
	// Offset: 0x106be898
	// Params: [ Num(0) Size(0x0) ]
	void CleanAll();

	// Object: Function DFMLuaSupport.LuaWidgetCreateManager.BindLuaByUIId
	// Flags: [Final|Native|Public]
	// Offset: 0x13950904
	// Params: [ Num(2) Size(0x10) ]
	struct UUserWidget* BindLuaByUIId(int32_t UINavId);
};

// Object: Class DFMLuaSupport.LuaWidgetSwitcherManager
// Size: 0x90 (Inherited: 0x30)
struct ULuaWidgetSwitcherManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULuaWidgetSwitcherManager, "LuaWidgetSwitcherManager")

	struct TMap<int32_t, struct UUserWidget*> LoadedWidgets; // 0x30(0x50)
	struct UWidgetSwitcher* Switcher; // 0x80(0x8)
	int32_t MaxCacheCount; // 0x88(0x4)
	uint8_t Pad_0x8C[0x4]; // 0x8C(0x4)

	// Object: Function DFMLuaSupport.LuaWidgetSwitcherManager.SwitchWidget
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x13951de8
	// Params: [ Num(2) Size(0x20) ]
	void SwitchWidget(int32_t Index, const struct FSoftObjectPath& SoftWidgetPath);

	// Object: Function DFMLuaSupport.LuaWidgetSwitcherManager.SetSwitcher
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13951d44
	// Params: [ Num(1) Size(0x8) ]
	void SetSwitcher(struct UWidget* InSwitcher);

	// Object: Function DFMLuaSupport.LuaWidgetSwitcherManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13951d10
	// Params: [ Num(1) Size(0x8) ]
	static struct ULuaWidgetSwitcherManager* Get();

	// Object: Function DFMLuaSupport.LuaWidgetSwitcherManager.ClearAll
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13951cfc
	// Params: [ Num(0) Size(0x0) ]
	void ClearAll();
};

// Object: Class DFMLuaSupport.OnlineLuaProcess
// Size: 0x28 (Inherited: 0x28)
struct UOnlineLuaProcess : UObject
{
	DEFINE_UE_CLASS_HELPERS(UOnlineLuaProcess, "OnlineLuaProcess")

	// Object: Function DFMLuaSupport.OnlineLuaProcess.OnlineLuaGetWorld
	// Flags: [Final|Native|Public]
	// Offset: 0x13951eec
	// Params: [ Num(1) Size(0x8) ]
	struct UWorld* OnlineLuaGetWorld();
};

// Object: Class DFMLuaSupport.StoreLotteryBGManager
// Size: 0x60 (Inherited: 0x30)
struct UStoreLotteryBGManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UStoreLotteryBGManager, "StoreLotteryBGManager")

	struct UUserWidget* CurrentWidget; // 0x30(0x8)
	uint8_t Pad_0x38[0x28]; // 0x38(0x28)

	// Object: Function DFMLuaSupport.StoreLotteryBGManager.RemoveCurrent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13952058
	// Params: [ Num(0) Size(0x0) ]
	void RemoveCurrent();

	// Object: Function DFMLuaSupport.StoreLotteryBGManager.LoadAndAttachAsync
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable]
	// Offset: 0x13951f5c
	// Params: [ Num(2) Size(0x20) ]
	void LoadAndAttachAsync(struct UWidget* ParentWidget, const struct FSoftObjectPath& SoftWidgetPath);

	// Object: Function DFMLuaSupport.StoreLotteryBGManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13951f28
	// Params: [ Num(1) Size(0x8) ]
	static struct UStoreLotteryBGManager* Get();
};

} // namespace SDK
