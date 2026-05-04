#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: DFMGameLaunch
// Enums: 1
// Structs: 3
// Classes: 20

enum class EConfigState : uint8_t;
enum class EMapleError : uint8_t;
enum class EMetaError : uint8_t;
enum class ETextureGroup : uint8_t;
struct FMapleData;
struct FMetaInfo;
struct FTimerHandle;
struct UDFSocketServer;
struct UDFSocketServerV2;
struct UGameInstance;
struct UGameSDKManager;
struct UUserWidget;
struct FDFGameLaunchStepFlow;
struct FGPMReportSettings;
struct FDFGameLaunchStep;
struct UDFBHDSubEnergyController;
struct UDFBHDMemoryController;
struct UDFBHDCPUController;
struct UDFBHDEnergyController;
struct UDFBHDHelper;
struct UDFBHDHelperRunnable;
struct UDFDevopsTest;
struct UDFGameLaunchManager;
struct UDFGameLaunchSettings;
struct UDFGameLaunchConfig;
struct UDFGameLaunchUserCache;
struct UDFGameLaunchStepBase;
struct UDFGameLaunchStepBPBase;
struct UDFGameLaunchStepFlowManager;
struct UGLS_CheckNetStatus;
struct UGLS_CheckPhysicSpace;
struct UGLS_OpenHealthTip;
struct UGLS_RequestCDNMeta;
struct UGLS_RequestMapleData;
struct UGLS_UnpakShader;

// Object: Enum DFMGameLaunch.ELaunchStepResult
enum class ELaunchStepResult : uint8_t
{
	ELSR_None = 0,
	ELSR_Success = 1,
	ELSR_Warning = 2,
	ELSR_Failed = 3,
	ELSR_Restart = 4,
	ELSR_MAX = 5
};

// Object: ScriptStruct DFMGameLaunch.DFGameLaunchStepFlow
// Size: 0x28 (Inherited: 0x0)
struct FDFGameLaunchStepFlow
{
	struct FName FlowName; // 0x0(0x8)
	struct TArray<struct FDFGameLaunchStep> Steps; // 0x8(0x10)
	struct FString GPMCategory; // 0x18(0x10)
};

// Object: ScriptStruct DFMGameLaunch.GPMReportSettings
// Size: 0x4 (Inherited: 0x0)
struct FGPMReportSettings
{
	int32_t StepId; // 0x0(0x4)
};

// Object: ScriptStruct DFMGameLaunch.DFGameLaunchStep
// Size: 0x28 (Inherited: 0x0)
struct FDFGameLaunchStep
{
	struct FName StepName; // 0x0(0x8)
	struct UDFGameLaunchStepBase* Step; // 0x8(0x8)
	struct FString StepDesc; // 0x10(0x10)
	uint8_t bIsStopFlow : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t bIsEnableMSDKReport : 1; // 0x21(0x1), Mask(0x1)
	uint8_t BitPad_0x21_1 : 7; // 0x21(0x1)
	uint8_t bIsEnableGPMReport : 1; // 0x22(0x1), Mask(0x1)
	uint8_t BitPad_0x22_1 : 7; // 0x22(0x1)
	uint8_t Pad_0x23[0x1]; // 0x23(0x1)
	struct FGPMReportSettings GPMReportSettings; // 0x24(0x4)
};

// Object: Class DFMGameLaunch.DFBHDSubEnergyController
// Size: 0x30 (Inherited: 0x28)
struct UDFBHDSubEnergyController : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	DEFINE_UE_CLASS_HELPERS(UDFBHDSubEnergyController, "DFBHDSubEnergyController")

};

// Object: Class DFMGameLaunch.DFBHDMemoryController
// Size: 0xD0 (Inherited: 0x30)
struct UDFBHDMemoryController : UDFBHDSubEnergyController
{
	struct FMulticastInlineDelegate OnMinimizeSwapchainStateChanged; // 0x30(0x10)
	uint8_t Pad_0x40[0x40]; // 0x40(0x40)
	uint8_t bHandleBinLock : 1; // 0x80(0x1), Mask(0x1)
	uint8_t BitPad_0x80_1 : 7; // 0x80(0x1)
	uint8_t bHandleWorkingSet : 1; // 0x81(0x1), Mask(0x1)
	uint8_t BitPad_0x81_1 : 7; // 0x81(0x1)
	uint8_t bHandlePSO : 1; // 0x82(0x1), Mask(0x1)
	uint8_t BitPad_0x82_1 : 7; // 0x82(0x1)
	uint8_t bMinimizeSwapchainSize : 1; // 0x83(0x1), Mask(0x1)
	uint8_t BitPad_0x83_1 : 7; // 0x83(0x1)
	struct FIntPoint MinSwapchainSize; // 0x84(0x8)
	uint8_t bReleaseRenderResource : 1; // 0x8C(0x1), Mask(0x1)
	uint8_t BitPad_0x8C_1 : 7; // 0x8C(0x1)
	uint8_t Pad_0x8D[0x3]; // 0x8D(0x3)
	struct TArray<ETextureGroup> TextureGroupsToRelease; // 0x90(0x10)
	struct TArray<struct FString> OverrideResourceCVars; // 0xA0(0x10)
	uint8_t bDisableGC : 1; // 0xB0(0x1), Mask(0x1)
	uint8_t BitPad_0xB0_1 : 7; // 0xB0(0x1)
	uint8_t Pad_0xB1[0x3]; // 0xB1(0x3)
	float LongGCTime; // 0xB4(0x4)
	uint8_t bLoopClearWorkingSet : 1; // 0xB8(0x1), Mask(0x1)
	uint8_t BitPad_0xB8_1 : 7; // 0xB8(0x1)
	uint8_t Pad_0xB9[0x7]; // 0xB9(0x7)
	double CheckWorkingSetDuration; // 0xC0(0x8)
	int32_t WorkingSetThresholdMB; // 0xC8(0x4)
	uint8_t bMemreport : 1; // 0xCC(0x1), Mask(0x1)
	uint8_t BitPad_0xCC_1 : 7; // 0xCC(0x1)
	uint8_t bHideWindow : 1; // 0xCD(0x1), Mask(0x1)
	uint8_t BitPad_0xCD_1 : 7; // 0xCD(0x1)
	uint8_t Pad_0xCE[0x2]; // 0xCE(0x2)
	DEFINE_UE_CLASS_HELPERS(UDFBHDMemoryController, "DFBHDMemoryController")

};

// Object: Class DFMGameLaunch.DFBHDCPUController
// Size: 0xF8 (Inherited: 0x30)
struct UDFBHDCPUController : UDFBHDSubEnergyController
{
	struct FMulticastInlineDelegate OnFPSLimitStateChanged; // 0x30(0x10)
	uint8_t Pad_0x40[0x68]; // 0x40(0x68)
	float MsUnit; // 0xA8(0x4)
	float TimeRed; // 0xAC(0x4)
	struct TArray<struct FString> ThreadsToIgnore; // 0xB0(0x10)
	struct TArray<struct FString> ThreadsToSuspend; // 0xC0(0x10)
	struct TArray<struct FName> LogCategoryWhitelist; // 0xD0(0x10)
	uint8_t bHandleProcessPriority : 1; // 0xE0(0x1), Mask(0x1)
	uint8_t BitPad_0xE0_1 : 7; // 0xE0(0x1)
	uint8_t bHandleThreadTime : 1; // 0xE1(0x1), Mask(0x1)
	uint8_t BitPad_0xE1_1 : 7; // 0xE1(0x1)
	uint8_t bHandleAffinities : 1; // 0xE2(0x1), Mask(0x1)
	uint8_t BitPad_0xE2_1 : 7; // 0xE2(0x1)
	uint8_t Pad_0xE3[0x1]; // 0xE3(0x1)
	int32_t MaxAffinitiesCores; // 0xE4(0x4)
	uint8_t bLimitFPS : 1; // 0xE8(0x1), Mask(0x1)
	uint8_t BitPad_0xE8_1 : 7; // 0xE8(0x1)
	uint8_t Pad_0xE9[0x3]; // 0xE9(0x3)
	int32_t MaxFPSBackground; // 0xEC(0x4)
	uint8_t bDisableLog : 1; // 0xF0(0x1), Mask(0x1)
	uint8_t BitPad_0xF0_1 : 7; // 0xF0(0x1)
	uint8_t bMuteAudio : 1; // 0xF1(0x1), Mask(0x1)
	uint8_t BitPad_0xF1_1 : 7; // 0xF1(0x1)
	uint8_t Pad_0xF2[0x6]; // 0xF2(0x6)


	// Object: DelegateFunction DFMGameLaunch.DFBHDCPUController.OnFPSLimitSateChanged__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x1) ]
	void OnFPSLimitSateChanged__DelegateSignature(uint8_t bLimited);

	// Object: Function DFMGameLaunch.DFBHDCPUController.IsLimitingMaxFPS
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a2218
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsLimitingMaxFPS();

	// Object: Function DFMGameLaunch.DFBHDCPUController.GetMaxFPSBackground
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a21e4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMaxFPSBackground();

	// Object: Function DFMGameLaunch.DFBHDCPUController.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd6a2140
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFBHDCPUController* Get(struct UObject* WorldContext);
	DEFINE_UE_CLASS_HELPERS(UDFBHDCPUController, "DFBHDCPUController")

};

// Object: Class DFMGameLaunch.DFBHDEnergyController
// Size: 0x80 (Inherited: 0x28)
struct UDFBHDEnergyController : UObject
{
	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
	struct TArray<struct UDFBHDSubEnergyController*> SubControllers; // 0x30(0x10)
	uint8_t Pad_0x40[0x38]; // 0x40(0x38)
	uint8_t bEnabledInEditor : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t bEnabled : 1; // 0x79(0x1), Mask(0x1)
	uint8_t BitPad_0x79_1 : 7; // 0x79(0x1)
	uint8_t Pad_0x7A[0x2]; // 0x7A(0x2)
	float DebugAutoRecoverTime; // 0x7C(0x4)


	// Object: Function DFMGameLaunch.DFBHDEnergyController.GetSubControllerByClass
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a22ac
	// Params: [ Num(2) Size(0x10) ]
	struct UDFBHDSubEnergyController* GetSubControllerByClass(struct UObject* InClass);
	DEFINE_UE_CLASS_HELPERS(UDFBHDEnergyController, "DFBHDEnergyController")

};

// Object: Class DFMGameLaunch.DFBHDHelper
// Size: 0xF0 (Inherited: 0x30)
struct UDFBHDHelper : UGameInstanceSubsystem
{
	uint8_t bEnterSleep : 1; // 0x30(0x1), Mask(0x1)
	uint8_t BitPad_0x30_1 : 7; // 0x30(0x1)
	uint8_t Pad_0x31[0x17]; // 0x31(0x17)
	struct UDFBHDHelperRunnable* BHDRunnable; // 0x48(0x8)
	struct UDFBHDEnergyController* EnergyController; // 0x50(0x8)
	struct FMulticastInlineDelegate DFConnectBHDExistDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate ProcCreatedDelegate; // 0x68(0x10)
	struct FMulticastInlineDelegate ProcLostDelegate; // 0x78(0x10)
	uint8_t Pad_0x88[0x18]; // 0x88(0x18)
	uint8_t bUseSocketV2 : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t Pad_0xA1[0x7]; // 0xA1(0x7)
	struct UDFSocketServer* DFSocketServer; // 0xA8(0x8)
	struct UDFSocketServerV2* DFSocketServerV2; // 0xB0(0x8)
	uint8_t Pad_0xB8[0x18]; // 0xB8(0x18)
	struct FMulticastInlineDelegate OnClientConnectedDelegate; // 0xD0(0x10)
	struct FMulticastInlineDelegate DFReceiveBHDJsonDelegate; // 0xE0(0x10)


	// Object: Function DFMGameLaunch.DFBHDHelper.StoreJsonString
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xd6a3324
	// Params: [ Num(2) Size(0x20) ]
	void StoreJsonString(struct FString MessageType, struct FString JsonStr);

	// Object: Function DFMGameLaunch.DFBHDHelper.SetDFExhibitionChange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a3278
	// Params: [ Num(1) Size(0x1) ]
	void SetDFExhibitionChange(uint8_t bConnectBHD);

	// Object: Function DFMGameLaunch.DFBHDHelper.SendJsonString
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xd6a31cc
	// Params: [ Num(1) Size(0x10) ]
	void SendJsonString(struct FString JsonStr);

	// Object: Function DFMGameLaunch.DFBHDHelper.OnSocketSendMessage
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6a3090
	// Params: [ Num(2) Size(0x11) ]
	void OnSocketSendMessage(struct FString Data, uint8_t bSuccess);

	// Object: Function DFMGameLaunch.DFBHDHelper.OnSocketRecvMessage
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6a2f98
	// Params: [ Num(1) Size(0x10) ]
	void OnSocketRecvMessage(struct FString JsonString);

	// Object: Function DFMGameLaunch.DFBHDHelper.OnLostBHDProc
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6a2eec
	// Params: [ Num(1) Size(0x1) ]
	void OnLostBHDProc(uint8_t IsLost);

	// Object: Function DFMGameLaunch.DFBHDHelper.OnCreateBHDProc
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6a2e40
	// Params: [ Num(1) Size(0x1) ]
	void OnCreateBHDProc(uint8_t IsCreated);

	// Object: Function DFMGameLaunch.DFBHDHelper.OnClientConnected
	// Flags: [Final|Native|Protected]
	// Offset: 0xd6a2d0c
	// Params: [ Num(2) Size(0x14) ]
	void OnClientConnected(struct FString ClientIP, int32_t ClientPort);

	// Object: Function DFMGameLaunch.DFBHDHelper.KillBHD
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a2cf8
	// Params: [ Num(0) Size(0x0) ]
	void KillBHD();

	// Object: Function DFMGameLaunch.DFBHDHelper.GetSubEnergyControllerByClass
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a2c4c
	// Params: [ Num(2) Size(0x10) ]
	struct UDFBHDSubEnergyController* GetSubEnergyControllerByClass(struct UObject* InClass);

	// Object: Function DFMGameLaunch.DFBHDHelper.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xd6a2ba8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFBHDHelper* GetInstance(struct UObject* Context);

	// Object: Function DFMGameLaunch.DFBHDHelper.GetFreePort
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xd6a2b74
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetFreePort();

	// Object: Function DFMGameLaunch.DFBHDHelper.GetDlcRootPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd6a2adc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDlcRootPath();

	// Object: Function DFMGameLaunch.DFBHDHelper.GetDlcBinaryPath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd6a2a44
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetDlcBinaryPath();

	// Object: Function DFMGameLaunch.DFBHDHelper.GetBHDBinRelativePath
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd6a29ac
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetBHDBinRelativePath();

	// Object: Function DFMGameLaunch.DFBHDHelper.FindGameExeUnderDir
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xd6a283c
	// Params: [ Num(3) Size(0x30) ]
	static struct FString FindGameExeUnderDir(struct FString Dir, struct FString RegexPattern);

	// Object: Function DFMGameLaunch.DFBHDHelper.CreateListenServer
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xd6a26d4
	// Params: [ Num(5) Size(0x1D) ]
	uint8_t CreateListenServer(struct FString ServerIP, int32_t ServerPort, int32_t ReceiveBufferSize, int32_t SendBufferSize);

	// Object: Function DFMGameLaunch.DFBHDHelper.CreateBHDSingleProc
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a2554
	// Params: [ Num(2) Size(0x20) ]
	void CreateBHDSingleProc(struct FString UE5ProgramPath, struct FString CommandLineArgs);

	// Object: Function DFMGameLaunch.DFBHDHelper.CreateBHD
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a2398
	// Params: [ Num(3) Size(0x24) ]
	void CreateBHD(struct FString UE5ProgramPath, struct FString CommandLineArgs, int32_t Port);

	// Object: Function DFMGameLaunch.DFBHDHelper.CloseListenServer
	// Flags: [Final|Native|Protected|BlueprintCallable]
	// Offset: 0xd6a2384
	// Params: [ Num(0) Size(0x0) ]
	void CloseListenServer();
	DEFINE_UE_CLASS_HELPERS(UDFBHDHelper, "DFBHDHelper")

};

// Object: Class DFMGameLaunch.DFBHDHelperRunnable
// Size: 0xA8 (Inherited: 0x28)
struct UDFBHDHelperRunnable : UObject
{
	uint8_t Pad_0x28[0x28]; // 0x28(0x28)
	float ThreadLostTime; // 0x50(0x4)
	uint8_t Pad_0x54[0x54]; // 0x54(0x54)
	DEFINE_UE_CLASS_HELPERS(UDFBHDHelperRunnable, "DFBHDHelperRunnable")

};

// Object: Class DFMGameLaunch.DFDevopsTest
// Size: 0x28 (Inherited: 0x28)
struct UDFDevopsTest : UBlueprintFunctionLibrary
{

	// Object: Function DFMGameLaunch.DFDevopsTest.IsBlueprintClassExist
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xd6a3494
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t IsBlueprintClassExist(struct FString InClassPath);

	// Object: Function DFMGameLaunch.DFDevopsTest.Echo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfcec71c
	// Params: [ Num(2) Size(0x20) ]
	static struct FString Echo(struct FString InInfo);
	DEFINE_UE_CLASS_HELPERS(UDFDevopsTest, "DFDevopsTest")

};

// Object: Class DFMGameLaunch.DFGameLaunchManager
// Size: 0xA8 (Inherited: 0x30)
struct UDFGameLaunchManager : UGameInstanceSubsystem
{
	struct FMulticastInlineDelegate OnGameLaunchFlowEnd; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLaunchStepBegin; // 0x40(0x10)
	struct FMulticastInlineDelegate OnLaunchStepEnd; // 0x50(0x10)
	struct UDFGameLaunchStepFlowManager* FlowManager; // 0x60(0x8)
	struct UDFGameLaunchUserCache* UserCache; // 0x68(0x8)
	uint8_t Pad_0x70[0x28]; // 0x70(0x28)
	struct UDFGameLaunchSettings* GameLaunchSettings; // 0x98(0x8)
	uint8_t Pad_0xA0[0x8]; // 0xA0(0x8)


	// Object: Function DFMGameLaunch.DFGameLaunchManager.StartPreCompilePSO
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a3af8
	// Params: [ Num(0) Size(0x0) ]
	void StartPreCompilePSO();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.ShouldPreCompilePSO
	// Flags: [Final|Native|Public]
	// Offset: 0x107c4154
	// Params: [ Num(1) Size(0x1) ]
	uint8_t ShouldPreCompilePSO();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.SetPSODoneVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a3a4c
	// Params: [ Num(1) Size(0x10) ]
	void SetPSODoneVersion(struct FString InVerStr);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.SetPreCompilePSOBegin
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a39a0
	// Params: [ Num(1) Size(0x1) ]
	void SetPreCompilePSOBegin(uint8_t bHasBegin);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.SetFirstLaunchEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a398c
	// Params: [ Num(0) Size(0x0) ]
	void SetFirstLaunchEnd();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.RunFlow
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf9be818
	// Params: [ Num(1) Size(0x8) ]
	void RunFlow(const struct FName& FlowName);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.ReportGameLaunchStepOutOfLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef83168
	// Params: [ Num(3) Size(0x21) ]
	void ReportGameLaunchStepOutOfLogin(struct FString InStepName, struct FString InMsg, ELaunchStepResult Result);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.ReportGameLaunchStepEnd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef0394c
	// Params: [ Num(1) Size(0x10) ]
	void ReportGameLaunchStepEnd(struct FString InOpenId);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.ReportException
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a3978
	// Params: [ Num(0) Size(0x0) ]
	void ReportException();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.OnSettingsDataLoaded
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a3964
	// Params: [ Num(0) Size(0x0) ]
	void OnSettingsDataLoaded();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.OnFlowStepEnd
	// Flags: [Final|Native|Private|HasOutParms|Const]
	// Offset: 0xd6a3874
	// Params: [ Num(2) Size(0x9) ]
	void OnFlowStepEnd(const struct FName& InStepName, ELaunchStepResult InResult);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.OnFlowStepBegin
	// Flags: [Final|Native|Private|HasOutParms|Const]
	// Offset: 0xd6a37c0
	// Params: [ Num(1) Size(0x8) ]
	void OnFlowStepBegin(const struct FName& InStepName);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.OnFlowEnd
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xd6a37ac
	// Params: [ Num(0) Size(0x0) ]
	void OnFlowEnd();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.LastReportID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a3778
	// Params: [ Num(1) Size(0x4) ]
	int32_t LastReportID();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.IsEnablePreCompilePSOOnDownloading
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a3740
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnablePreCompilePSOOnDownloading();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.GetPSODoneVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a36a8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPSODoneVersion();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.GetIsFirstLaunch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a3670
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstLaunch();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.GetGameLaunchManager
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfbfd1dc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFGameLaunchManager* GetGameLaunchManager(struct UObject* Context);

	// Object: Function DFMGameLaunch.DFGameLaunchManager.GetCurRunningStepName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a363c
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCurRunningStepName();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.GetCurRunningFlowName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a3608
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetCurRunningFlowName();

	// Object: Function DFMGameLaunch.DFGameLaunchManager.FinishStep
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf9c0018
	// Params: [ Num(3) Size(0x20) ]
	void FinishStep(const struct FName& StepName, ELaunchStepResult InStepResult, struct FString CustomMsg);
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchManager, "DFGameLaunchManager")

};

// Object: Class DFMGameLaunch.DFGameLaunchSettings
// Size: 0x38 (Inherited: 0x28)
struct UDFGameLaunchSettings : UObject
{
	struct TArray<struct FDFGameLaunchStepFlow> Settings; // 0x28(0x10)
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchSettings, "DFGameLaunchSettings")

};

// Object: Class DFMGameLaunch.DFGameLaunchConfig
// Size: 0x58 (Inherited: 0x28)
struct UDFGameLaunchConfig : UObject
{
	struct FSoftClassPath DFGameLaunchSettings; // 0x28(0x18)
	struct FSoftObjectPath SpaceLimitViewPath; // 0x40(0x18)
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchConfig, "DFGameLaunchConfig")

};

// Object: Class DFMGameLaunch.DFGameLaunchUserCache
// Size: 0x40 (Inherited: 0x28)
struct UDFGameLaunchUserCache : UObject
{
	uint8_t bIsFirstLaunch : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)
	struct FString PSODoneVersion; // 0x30(0x10)


	// Object: Function DFMGameLaunch.DFGameLaunchUserCache.UpdateConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a4104
	// Params: [ Num(0) Size(0x0) ]
	void UpdateConfig();

	// Object: Function DFMGameLaunch.DFGameLaunchUserCache.SetPSODoneVersion
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a4058
	// Params: [ Num(1) Size(0x10) ]
	void SetPSODoneVersion(struct FString InVerStr);

	// Object: Function DFMGameLaunch.DFGameLaunchUserCache.SetIsFirstLaunch
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a4044
	// Params: [ Num(0) Size(0x0) ]
	void SetIsFirstLaunch();

	// Object: Function DFMGameLaunch.DFGameLaunchUserCache.GetPSODoneVersion
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a3fac
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPSODoneVersion();

	// Object: Function DFMGameLaunch.DFGameLaunchUserCache.GetIsFirstLaunch
	// Flags: [Final|Native|Public]
	// Offset: 0xd6a3f74
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstLaunch();
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchUserCache, "DFGameLaunchUserCache")

};

// Object: Class DFMGameLaunch.DFGameLaunchStepBase
// Size: 0x50 (Inherited: 0x28)
struct UDFGameLaunchStepBase : UObject
{
	uint8_t Pad_0x28[0x10]; // 0x28(0x10)
	struct UDFGameLaunchStepFlowManager* StepFlowManager; // 0x38(0x8)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)


	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.UpdateBackgroundInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1092fc64
	// Params: [ Num(2) Size(0x1C) ]
	void UpdateBackgroundInfo(struct FText InTipText, float InLoadingPercent);

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.GLS_SetTimerByEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf4825a4
	// Params: [ Num(6) Size(0x28) ]
	struct FTimerHandle GLS_SetTimerByEvent(struct FDelegate Delegate, float Time, uint8_t bLooping, float InitialStartDelay, float InitialStartDelayVariance);

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.GLS_RemoveTimerByHandle
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a43c0
	// Params: [ Num(1) Size(0x8) ]
	void GLS_RemoveTimerByHandle(struct FTimerHandle TimerHandle);

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.GLS_ClearAllTimer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xd6a43ac
	// Params: [ Num(0) Size(0x0) ]
	void GLS_ClearAllTimer();

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.GetStepName
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xd6a4370
	// Params: [ Num(1) Size(0x8) ]
	struct FName GetStepName();

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.GetGameInstance
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0xd6a433c
	// Params: [ Num(1) Size(0x8) ]
	struct UGameInstance* GetGameInstance();

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.CallLuaModuleFunction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xfa22530
	// Params: [ Num(2) Size(0x20) ]
	void CallLuaModuleFunction(struct FString ModuleFunc, struct FString ArgStr);

	// Object: Function DFMGameLaunch.DFGameLaunchStepBase.CallLuaGlobalFunction
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xfa04914
	// Params: [ Num(1) Size(0x10) ]
	void CallLuaGlobalFunction(struct FString FuncName);
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchStepBase, "DFGameLaunchStepBase")

};

// Object: Class DFMGameLaunch.DFGameLaunchStepBPBase
// Size: 0x50 (Inherited: 0x50)
struct UDFGameLaunchStepBPBase : UDFGameLaunchStepBase
{

	// Object: Function DFMGameLaunch.DFGameLaunchStepBPBase.EndStep
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xfbe6644
	// Params: [ Num(2) Size(0x18) ]
	void EndStep(ELaunchStepResult Result, struct FString ErrorCode);

	// Object: Function DFMGameLaunch.DFGameLaunchStepBPBase.BP_OnStepEnd
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x18) ]
	void BP_OnStepEnd(ELaunchStepResult Result, struct FString ErrorCode);

	// Object: Function DFMGameLaunch.DFGameLaunchStepBPBase.BP_OnStepBegin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void BP_OnStepBegin();

	// Object: Function DFMGameLaunch.DFGameLaunchStepBPBase.BP_Init
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0xd6a4478
	// Params: [ Num(0) Size(0x0) ]
	void BP_Init();
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchStepBPBase, "DFGameLaunchStepBPBase")

};

// Object: Class DFMGameLaunch.DFGameLaunchStepFlowManager
// Size: 0x130 (Inherited: 0x28)
struct UDFGameLaunchStepFlowManager : UObject
{
	uint8_t Pad_0x28[0x48]; // 0x28(0x48)
	struct UDFGameLaunchStepBase* CurStepIns; // 0x70(0x8)
	struct UGameInstance* CachedGameInstance; // 0x78(0x8)
	uint8_t Pad_0x80[0xB0]; // 0x80(0xB0)


	// Object: Function DFMGameLaunch.DFGameLaunchStepFlowManager.RunStep
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a449c
	// Params: [ Num(0) Size(0x0) ]
	void RunStep();
	DEFINE_UE_CLASS_HELPERS(UDFGameLaunchStepFlowManager, "DFGameLaunchStepFlowManager")

};

// Object: Class DFMGameLaunch.GLS_CheckNetStatus
// Size: 0x58 (Inherited: 0x50)
struct UGLS_CheckNetStatus : UDFGameLaunchStepBase
{
	uint8_t Pad_0x50[0x8]; // 0x50(0x8)


	// Object: Function DFMGameLaunch.GLS_CheckNetStatus.OnConfirmBtnClicked
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4670
	// Params: [ Num(0) Size(0x0) ]
	void OnConfirmBtnClicked();
	DEFINE_UE_CLASS_HELPERS(UGLS_CheckNetStatus, "GLS_CheckNetStatus")

};

// Object: Class DFMGameLaunch.GLS_CheckPhysicSpace
// Size: 0x50 (Inherited: 0x50)
struct UGLS_CheckPhysicSpace : UDFGameLaunchStepBase
{

	// Object: Function DFMGameLaunch.GLS_CheckPhysicSpace.OnConfirmBtnClicked
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a468c
	// Params: [ Num(0) Size(0x0) ]
	void OnConfirmBtnClicked();
	DEFINE_UE_CLASS_HELPERS(UGLS_CheckPhysicSpace, "GLS_CheckPhysicSpace")

};

// Object: Class DFMGameLaunch.GLS_OpenHealthTip
// Size: 0x60 (Inherited: 0x50)
struct UGLS_OpenHealthTip : UDFGameLaunchStepBase
{
	struct UUserWidget* HealthTipView; // 0x50(0x8)
	float BaseWaitTime; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)


	// Object: Function DFMGameLaunch.GLS_OpenHealthTip.WarmupSteps
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a46f8
	// Params: [ Num(0) Size(0x0) ]
	void WarmupSteps();

	// Object: Function DFMGameLaunch.GLS_OpenHealthTip.WarmupMaple
	// Flags: [Final|Native|Private|Const]
	// Offset: 0xd6a46e4
	// Params: [ Num(0) Size(0x0) ]
	void WarmupMaple();

	// Object: Function DFMGameLaunch.GLS_OpenHealthTip.OpenHealthTip
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a46d0
	// Params: [ Num(0) Size(0x0) ]
	void OpenHealthTip();

	// Object: Function DFMGameLaunch.GLS_OpenHealthTip.EndStep_Manual
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a46bc
	// Params: [ Num(0) Size(0x0) ]
	void EndStep_Manual();

	// Object: Function DFMGameLaunch.GLS_OpenHealthTip.CheckAppVersionChanged
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a46a8
	// Params: [ Num(0) Size(0x0) ]
	void CheckAppVersionChanged();
	DEFINE_UE_CLASS_HELPERS(UGLS_OpenHealthTip, "GLS_OpenHealthTip")

};

// Object: Class DFMGameLaunch.GLS_RequestCDNMeta
// Size: 0x50 (Inherited: 0x50)
struct UGLS_RequestCDNMeta : UDFGameLaunchStepBPBase
{

	// Object: Function DFMGameLaunch.GLS_RequestCDNMeta.RequestMetaFile
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4b64
	// Params: [ Num(0) Size(0x0) ]
	void RequestMetaFile();

	// Object: Function DFMGameLaunch.GLS_RequestCDNMeta.OnLoadConfigEnd
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4ac0
	// Params: [ Num(1) Size(0x1) ]
	void OnLoadConfigEnd(EConfigState ConfigState);

	// Object: Function DFMGameLaunch.GLS_RequestCDNMeta.OnGetMetaDataFailed
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a49e0
	// Params: [ Num(2) Size(0x8) ]
	void OnGetMetaDataFailed(EMetaError MetaError, int32_t InErrorCode);

	// Object: Function DFMGameLaunch.GLS_RequestCDNMeta.OnGetMetaData
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0xd6a48d4
	// Params: [ Num(1) Size(0x10) ]
	void OnGetMetaData(const struct FMetaInfo& MetaInfo);

	// Object: Function DFMGameLaunch.GLS_RequestCDNMeta.BP_OnGetMetaDataFailed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(2) Size(0x8) ]
	void BP_OnGetMetaDataFailed(EMetaError MetaError, int32_t InErrorCode);

	// Object: Function DFMGameLaunch.GLS_RequestCDNMeta.BP_OnGetMetaData
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(1) Size(0x10) ]
	void BP_OnGetMetaData(const struct FMetaInfo& MetaInfo);
	DEFINE_UE_CLASS_HELPERS(UGLS_RequestCDNMeta, "GLS_RequestCDNMeta")

};

// Object: Class DFMGameLaunch.GLS_RequestMapleData
// Size: 0x68 (Inherited: 0x50)
struct UGLS_RequestMapleData : UDFGameLaunchStepBase
{
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	struct UGameSDKManager* CachedSDKManager; // 0x60(0x8)


	// Object: Function DFMGameLaunch.GLS_RequestMapleData.StartRequestMapleData
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4c4c
	// Params: [ Num(0) Size(0x0) ]
	void StartRequestMapleData();

	// Object: Function DFMGameLaunch.GLS_RequestMapleData.RequestMapleData
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4c38
	// Params: [ Num(0) Size(0x0) ]
	void RequestMapleData();

	// Object: Function DFMGameLaunch.GLS_RequestMapleData.OnPopWindowConfirmBtnClicked
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4c24
	// Params: [ Num(0) Size(0x0) ]
	void OnPopWindowConfirmBtnClicked();

	// Object: Function DFMGameLaunch.GLS_RequestMapleData.OnGetMapleDataFailed
	// Flags: [Final|Native|Private]
	// Offset: 0xd6a4b80
	// Params: [ Num(1) Size(0x4) ]
	void OnGetMapleDataFailed(EMapleError InErrorCode);

	// Object: Function DFMGameLaunch.GLS_RequestMapleData.OnGetMapleData
	// Flags: [Final|Native|Private]
	// Offset: 0x10a4fec4
	// Params: [ Num(1) Size(0x90) ]
	void OnGetMapleData(struct FMapleData MapleData);
	DEFINE_UE_CLASS_HELPERS(UGLS_RequestMapleData, "GLS_RequestMapleData")

};

// Object: Class DFMGameLaunch.GLS_UnpakShader
// Size: 0x60 (Inherited: 0x50)
struct UGLS_UnpakShader : UDFGameLaunchStepBase
{
	uint8_t Pad_0x50[0x10]; // 0x50(0x10)
	DEFINE_UE_CLASS_HELPERS(UGLS_UnpakShader, "GLS_UnpakShader")

};

} // namespace SDK
