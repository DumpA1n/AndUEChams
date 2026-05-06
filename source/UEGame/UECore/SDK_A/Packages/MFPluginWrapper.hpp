#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: MFPluginWrapper
// Enums: 14
// Structs: 10
// Classes: 76

struct FSlateBrush;
struct UCanvasPanel;
struct UGameInstance;
struct UImage;
struct UTexture2DDynamic;
struct UUserWidget;
struct UWidget;
struct UWorld;
struct FMSDKNoticeReturnData;
struct FMSDKNoticeTextInfo;
struct FMSDKNoticeInfo;
struct FMSDKNoticePictureInfo;
struct FPufferTaskInfo;
struct FPufferInitConfigData;
struct FIntlFriendInfo;
struct FPlayerSystemSettingConfig;
struct FSettingValueInfo;
struct FMyHotfixStruct;
struct UHashChecker;
struct IHotFixTestInterface;
struct UMyAICreateEventCallback;
struct UMFPWObject;
struct UMFGCloudService;
struct UMFAICreateSDKService;
struct UMFBoxService;
struct UMFComplianceService;
struct UMFCTIPayObserver;
struct UMFCustomerService;
struct UMFEsCapturerService;
struct UMFGCloudCommonStatics;
struct UMFGCloudCrashObserver;
struct UMFGCloudCrashService;
struct UMFGCloudDolphinService;
struct UMFGCloudFriendObserver;
struct UMFGCloudFriendService;
struct UMFGCloudGroupObserver;
struct UMFGCloudGroupService;
struct UMFGCloudLoginObserver;
struct UMFGCloudLoginService;
struct UMFGCloudMessageHandler;
struct UMFGCloudMessageHandlerChildTss;
struct UMFGCloudMessageObserver;
struct UMFGCloudMessageService;
struct UMFGCloudNetWorkStateObserver;
struct UMFGCloudNetWorkStateService;
struct UMFGCloudNotice;
struct UMFPWPlugin;
struct UMFGCloudPlugin;
struct UMFGCloudPredownload;
struct UMFGCloudPufferService;
struct UMFGCloudRobotService;
struct UMFGCloudSetting;
struct UMFGCloudTGPAObserver;
struct UMFGCloudTGPAService;
struct UMFGCloudToolsObserver;
struct UMFGCloudToolsService;
struct UMFGCloudTssService;
struct UMFGCloudWebViewObserver;
struct UMFGCloudWebViewService;
struct UMFGCloudXGObserver;
struct UMFGCloudXGService;
struct UMFGPMAgent;
struct UMFGPMHelperFunctionLibrary;
struct UMFHttpDNSService;
struct UMFIntlComplianceObserver;
struct UMFIntlCustomerObserver;
struct UMFIntlFriendObserver;
struct UMFIntlLBSObserver;
struct UMFIntlLoginObserver;
struct UMFIntlWebViewObserver;
struct UMFIOSBackgroundDownload;
struct UMFIOSRuntimeHelper;
struct UMFLBSObserver;
struct UMFLBSService;
struct UMFMidasObserver;
struct UMFMidasService;
struct UMFMNAService;
struct UMFMountPakService;
struct UMFPandoraService;
struct UMFPlayerSystemSetting;
struct IMFPWGetPluginManagerInterface;
struct UMFPWMessageHeader;
struct UMFPWPluginManager;
struct UMFTGPAPredownload;
struct UMFTPioneerService;
struct UMFVoiceObserver;
struct UMFVoiceRoosterObserver;
struct UUnLuaTestObject;
struct UMFVoiceService;
struct UMFWeGameEvent;
struct UMFWeGamePlugin;
struct UMFWXGameLiveObserver;
struct UMFWXGameLiveService;
struct UMFXunyouService;

// Object: Enum MFPluginWrapper.EMFBoxLoginSourceType
enum class EMFBoxLoginSourceType : uint8_t
{
	NONE = 0,
	QQLogin = 1,
	WeChatLogin = 2,
	Tourist = 3,
	EMFBoxLoginSourceType_MAX = 4
};

// Object: Enum MFPluginWrapper.EMFBoxClientType
enum class EMFBoxClientType : uint8_t
{
	NONE = 0,
	InitBox = 1,
	EMFBoxClientType_MAX = 2
};

// Object: Enum MFPluginWrapper.EMFNewNetworkState
enum class EMFNewNetworkState : uint8_t
{
	NotReachable = 0,
	WWAN = 1,
	Wifi = 2,
	Others = 3,
	EMFNewNetworkState_MAX = 4
};

// Object: Enum MFPluginWrapper.EPufferTaskState
enum class EPufferTaskState : uint8_t
{
	PufferTask_None = 0,
	PufferTask_Downloading = 1,
	PufferTask_Error = 2,
	PufferTask_MAX = 3
};

// Object: Enum MFPluginWrapper.EUamDeviceRank
enum class EUamDeviceRank : uint8_t
{
	SuperFirstGear = 0,
	FirstGear = 1,
	SecondGear = 2,
	ThirdGear = 3,
	FourthGear = 4,
	FifthGear = 5,
	SixthGear = 6,
	EUamDeviceRank_MAX = 7
};

// Object: Enum MFPluginWrapper.EUAGraphicStyleQuality
enum class EUAGraphicStyleQuality : uint8_t
{
	GfxStyleQualityDefault = 0,
	GfxStyleQualityRealistic = 1,
	GfxStyleQualityWarm = 2,
	GfxStyleQualityCold = 3,
	GfxStyleQualityBright = 4,
	EUAGraphicStyleQuality_MAX = 5
};

// Object: Enum MFPluginWrapper.EUAFrameRateLevel
enum class EUAFrameRateLevel : uint8_t
{
	FrameRateDefault = 0,
	FrameRateLow = 1,
	FrameRateMedium = 2,
	FrameRateHigh = 3,
	FrameRateSuper = 4,
	FrameRateMax = 5,
	FrameRate90 = 6,
	FrameRate120 = 7,
	FrameRate144 = 8,
	FrameRate165 = 9,
	EUAFrameRateLevel_MAX = 10
};

// Object: Enum MFPluginWrapper.EUAGrahpicsQuality
enum class EUAGrahpicsQuality : uint8_t
{
	GfxQualityDefault = 0,
	GfxQualitySuperLow = 1,
	GfxQualityLow = 2,
	GfxQualityMedium = 3,
	GfxQualityHigh = 4,
	GfxQualityHDRHigh = 5,
	GfxQualitySuperHigh = 6,
	GfxQualityNum = 7,
	EUAGrahpicsQuality_MAX = 8
};

// Object: Enum MFPluginWrapper.EMFLBSLocationAuthorizationStates
enum class EMFLBSLocationAuthorizationStates : uint8_t
{
	AuthorizedWhenInUse = 0,
	AuthorizedDenied = 1,
	AuthorizedNotDetermined = 2,
	EMFLBSLocationAuthorizationStates_MAX = 3
};

// Object: Enum MFPluginWrapper.EMFVoiceEvent
enum class EMFVoiceEvent : uint8_t
{
	kEventNoDeviceConnected = 0,
	kEventHeadsetDisconnected = 10,
	kEventHeadsetConnected = 11,
	kEventBluetoothHeadsetDisconnected = 20,
	kEventBluetoothHeadsetConnected = 21,
	kEventMicStateOpenSucc = 30,
	kEventMicStateOpenErr = 31,
	kEventMicStateNoOpen = 32,
	kEventSpeakerStateOpenSucc = 40,
	kEventSpeakerStateOpenErr = 41,
	kEventSpeakerStateNoOpen = 42,
	kEventAudioInterruptBegin = 50,
	kEventAudioInterruptEnd = 51,
	kEventAudioRecoderException = 52,
	kEventAudioRenderException = 53,
	kEventPhoneCallPickUp = 54,
	kEventPhoneCallHangUp = 55,
	EMFVoiceEvent_MAX = 56
};

// Object: Enum MFPluginWrapper.EMFVoiceSpeechTranslateType
enum class EMFVoiceSpeechTranslateType : uint8_t
{
	SPEECH_TRANSLATE_STST = 0,
	SPEECH_TRANSLATE_STTT = 1,
	SPEECH_TRANSLATE_STTS = 2,
	SPEECH_TRANSLATE_MAX = 3
};

// Object: Enum MFPluginWrapper.EMFVoiceSpeechLanguageType
enum class EMFVoiceSpeechLanguageType : uint8_t
{
	SPEECH_LANGUAGE_ZH = 0,
	SPEECH_LANGUAGE_EN = 1,
	SPEECH_LANGUAGE_JA = 2,
	SPEECH_LANGUAGE_KO = 3,
	SPEECH_LANGUAGE_DE = 4,
	SPEECH_LANGUAGE_FR = 5,
	SPEECH_LANGUAGE_ES = 6,
	SPEECH_LANGUAGE_IT = 7,
	SPEECH_LANGUAGE_TR = 8,
	SPEECH_LANGUAGE_RU = 9,
	SPEECH_LANGUAGE_PT = 10,
	SPEECH_LANGUAGE_VI = 11,
	SPEECH_LANGUAGE_ID = 12,
	SPEECH_LANGUAGE_MS = 13,
	SPEECH_LANGUAGE_TH = 14,
	SPEECH_LANGUAGE_ZH_TW = 15,
	SPEECH_LANGUAGE_AF = 16,
	SPEECH_LANGUAGE_SQ = 17,
	SPEECH_LANGUAGE_AM = 18,
	SPEECH_LANGUAGE_AR = 19,
	SPEECH_LANGUAGE_HY = 20,
	SPEECH_LANGUAGE_AZ = 21,
	SPEECH_LANGUAGE_EU = 22,
	SPEECH_LANGUAGE_BN = 23,
	SPEECH_LANGUAGE_BS = 24,
	SPEECH_LANGUAGE_BG = 25,
	SPEECH_LANGUAGE_MY = 26,
	SPEECH_LANGUAGE_CA = 27,
	SPEECH_LANGUAGE_HR = 28,
	SPEECH_LANGUAGE_CS = 29,
	SPEECH_LANGUAGE_DA = 30,
	SPEECH_LANGUAGE_NL = 31,
	SPEECH_LANGUAGE_ET = 32,
	SPEECH_LANGUAGE_FIL = 33,
	SPEECH_LANGUAGE_FI = 34,
	SPEECH_LANGUAGE_GL = 35,
	SPEECH_LANGUAGE_KA = 36,
	SPEECH_LANGUAGE_EL = 37,
	SPEECH_LANGUAGE_GU = 38,
	SPEECH_LANGUAGE_IW = 39,
	SPEECH_LANGUAGE_HI = 40,
	SPEECH_LANGUAGE_HU = 41,
	SPEECH_LANGUAGE_IS = 42,
	SPEECH_LANGUAGE_JV = 43,
	SPEECH_LANGUAGE_KN = 44,
	SPEECH_LANGUAGE_KK = 45,
	SPEECH_LANGUAGE_KM = 46,
	SPEECH_LANGUAGE_LO = 47,
	SPEECH_LANGUAGE_LV = 48,
	SPEECH_LANGUAGE_LT = 49,
	SPEECH_LANGUAGE_MK = 50,
	SPEECH_LANGUAGE_ML = 51,
	SPEECH_LANGUAGE_MR = 52,
	SPEECH_LANGUAGE_MN = 53,
	SPEECH_LANGUAGE_NE = 54,
	SPEECH_LANGUAGE_NO = 55,
	SPEECH_LANGUAGE_FA = 56,
	SPEECH_LANGUAGE_PL = 57,
	SPEECH_LANGUAGE_PA = 58,
	SPEECH_LANGUAGE_RO = 59,
	SPEECH_LANGUAGE_SR = 60,
	SPEECH_LANGUAGE_SI = 61,
	SPEECH_LANGUAGE_SK = 62,
	SPEECH_LANGUAGE_SL = 63,
	SPEECH_LANGUAGE_SU = 64,
	SPEECH_LANGUAGE_SW = 65,
	SPEECH_LANGUAGE_SV = 66,
	SPEECH_LANGUAGE_TA = 67,
	SPEECH_LANGUAGE_TE = 68,
	SPEECH_LANGUAGE_UK = 69,
	SPEECH_LANGUAGE_UR = 70,
	SPEECH_LANGUAGE_UZ = 71,
	SPEECH_LANGUAGE_ZU = 72,
	SPEECH_LANGUAGE_CNT = 73,
	SPEECH_LANGUAGE_MAX = 74
};

// Object: Enum MFPluginWrapper.EMFVoiceMemberRole
enum class EMFVoiceMemberRole : uint8_t
{
	kVoiceMemberRoleNone = 0,
	kVoiceMemberRoleAnchor = 1,
	kVoiceMemberRoleAudience = 2,
	EMFVoiceMemberRole_MAX = 3
};

// Object: Enum MFPluginWrapper.EMFVoiceLanguage
enum class EMFVoiceLanguage : uint8_t
{
	kVoiceLanguageChina = 0,
	kVoiceLanguageKorean = 1,
	kVoiceLanguageEnglish = 2,
	kVoiceLanguageJapanese = 3,
	EMFVoiceLanguage_MAX = 4
};

// Object: ScriptStruct MFPluginWrapper.MSDKNoticeReturnData
// Size: 0x60 (Inherited: 0x0)
struct FMSDKNoticeReturnData
{
	int32_t MethodNameID; // 0x0(0x4)
	int32_t RetCode; // 0x4(0x4)
	struct FString RetMsg; // 0x8(0x10)
	int32_t ThirdCode; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ThirdMsg; // 0x20(0x10)
	struct FString extraJson; // 0x30(0x10)
	struct FString RequestID; // 0x40(0x10)
	struct TArray<struct FMSDKNoticeInfo> NoticeInfoList; // 0x50(0x10)
};

// Object: ScriptStruct MFPluginWrapper.MSDKNoticeTextInfo
// Size: 0x30 (Inherited: 0x0)
struct FMSDKNoticeTextInfo
{
	struct FString NoticeTitle; // 0x0(0x10)
	struct FString NoticeContent; // 0x10(0x10)
	struct FString NoticeRedirectUrl; // 0x20(0x10)
};

// Object: ScriptStruct MFPluginWrapper.MSDKNoticeInfo
// Size: 0xA0 (Inherited: 0x0)
struct FMSDKNoticeInfo
{
	int32_t NoticeID; // 0x0(0x4)
	int32_t NoticeType; // 0x4(0x4)
	struct FString NoticeGroup; // 0x8(0x10)
	int32_t BeginTime; // 0x18(0x4)
	int32_t endTime; // 0x1C(0x4)
	int32_t UpdateTime; // 0x20(0x4)
	int32_t Order; // 0x24(0x4)
	int32_t ContentType; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString Language; // 0x30(0x10)
	struct FMSDKNoticeTextInfo TextInfo; // 0x40(0x30)
	struct TArray<struct FMSDKNoticePictureInfo> PicUrlList; // 0x70(0x10)
	struct FString WebUrl; // 0x80(0x10)
	struct FString extraJson; // 0x90(0x10)
};

// Object: ScriptStruct MFPluginWrapper.MSDKNoticePictureInfo
// Size: 0x48 (Inherited: 0x0)
struct FMSDKNoticePictureInfo
{
	struct FString NoticePicUrl; // 0x0(0x10)
	struct FString NoticePicHashcode; // 0x10(0x10)
	struct FString NoticePicTitle; // 0x20(0x10)
	struct FString NoticePicSize; // 0x30(0x10)
	int32_t ScreenDir; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
};

// Object: ScriptStruct MFPluginWrapper.PufferTaskInfo
// Size: 0x38 (Inherited: 0x0)
struct FPufferTaskInfo
{
	int32_t TaskId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString TaskName; // 0x8(0x10)
	EPufferTaskState TaskState; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	int64_t NowSize; // 0x20(0x8)
	int64_t TotalSize; // 0x28(0x8)
	bool bIsFileTask; // 0x30(0x1)
	bool bIsBatchTask; // 0x31(0x1)
	bool bIsRestoreTask; // 0x32(0x1)
	uint8_t Pad_0x33[0x5]; // 0x33(0x5)
};

// Object: ScriptStruct MFPluginWrapper.PufferInitConfigData
// Size: 0xA8 (Inherited: 0x0)
struct FPufferInitConfigData
{
	int32_t MaxDownloadSpeed; // 0x0(0x4)
	int32_t MaxDownTask; // 0x4(0x4)
	int32_t MaxDownloadsPerTask; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	int64_t PufferProductId; // 0x10(0x8)
	int32_t NeedCheck; // 0x18(0x4)
	int32_t NeedFileRestore; // 0x1C(0x4)
	int32_t RemoveOldWhenUpdate; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString StrSourceDir; // 0x28(0x10)
	struct FString StrPufferServerUrl; // 0x38(0x10)
	struct FString StrPufferGroupMarkId; // 0x48(0x10)
	struct FString strUserID; // 0x58(0x10)
	int64_t PufferGameId; // 0x68(0x8)
	int32_t PufferUpdateType; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	int64_t PufferDolphinProductId; // 0x78(0x8)
	struct FString StrDolphinAppVersion; // 0x80(0x10)
	struct FString StrDolphinResVersion; // 0x90(0x10)
	int32_t EnableIOSBGDownload; // 0xA0(0x4)
	int32_t ShowFileList; // 0xA4(0x4)
};

// Object: ScriptStruct MFPluginWrapper.IntlFriendInfo
// Size: 0x88 (Inherited: 0x0)
struct FIntlFriendInfo
{
	struct FString Openid; // 0x0(0x10)
	struct FString userName; // 0x10(0x10)
	int32_t Gender; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString PictureUrl; // 0x28(0x10)
	struct FString Country; // 0x38(0x10)
	struct FString Province; // 0x48(0x10)
	struct FString City; // 0x58(0x10)
	struct FString Language; // 0x68(0x10)
	struct FString extraJson; // 0x78(0x10)
};

// Object: ScriptStruct MFPluginWrapper.PlayerSystemSettingConfig
// Size: 0xF0 (Inherited: 0x0)
struct FPlayerSystemSettingConfig
{
	uint8_t Pad_0x0[0xF0]; // 0x0(0xF0)
};

// Object: ScriptStruct MFPluginWrapper.SettingValueInfo
// Size: 0x28 (Inherited: 0x0)
struct FSettingValueInfo
{
	struct FString SystemSettingValue; // 0x0(0x10)
	struct FString DefaultSettingValue; // 0x10(0x10)
	uint8_t LowestGraphicsNeed; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct MFPluginWrapper.MyHotfixStruct
// Size: 0x8 (Inherited: 0x0)
struct FMyHotfixStruct
{
	int32_t A; // 0x0(0x4)
	int32_t B; // 0x4(0x4)
};

// Object: Class MFPluginWrapper.HashChecker
// Size: 0xC8 (Inherited: 0x28)
struct UHashChecker : UObject
{
	DEFINE_UE_CLASS_HELPERS(UHashChecker, "HashChecker")

	struct FMulticastInlineDelegate OnHashCheckerEvent; // 0x28(0x10)
	struct TArray<struct FString> RunningTasks; // 0x38(0x10)
	struct TMap<struct FString, struct FString> CachedFileHash; // 0x48(0x50)
	uint8_t Pad_0x98[0x30]; // 0x98(0x30)

	// Object: Function MFPluginWrapper.HashChecker.XXHashString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e02598
	// Params: [ Num(3) Size(0x28) ]
	static struct FString XXHashString(struct FString inStr, int32_t InDisplayAsHex);

	// Object: Function MFPluginWrapper.HashChecker.XorData
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e0245c
	// Params: [ Num(3) Size(0x28) ]
	static struct TArray<uint8_t> XorData(const struct TArray<uint8_t>& InData, int32_t InKey);

	// Object: Function MFPluginWrapper.HashChecker.SetHashDisplayMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e026c4
	// Params: [ Num(2) Size(0x8) ]
	int32_t SetHashDisplayMode(int32_t InHexMode);

	// Object: Function MFPluginWrapper.HashChecker.LoadXorFileToString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e02330
	// Params: [ Num(3) Size(0x28) ]
	static struct FString LoadXorFileToString(struct FString InFile, int32_t InKey);

	// Object: Function MFPluginWrapper.HashChecker.AsyncXXHashFileList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e02774
	// Params: [ Num(3) Size(0x24) ]
	int32_t AsyncXXHashFileList(const struct TArray<struct FString>& InFileList, struct FString InCustomParam);
};

// Object: Class MFPluginWrapper.HotFixTestInterface
// Size: 0x28 (Inherited: 0x28)
struct IHotFixTestInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IHotFixTestInterface, "HotFixTestInterface")

	// Object: Function MFPluginWrapper.HotFixTestInterface.TestFunc
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e0289c
	// Params: [ Num(0) Size(0x0) ]
	void TestFunc();
};

// Object: Class MFPluginWrapper.MyAICreateEventCallback
// Size: 0x298 (Inherited: 0x290)
struct UMyAICreateEventCallback : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UMyAICreateEventCallback, "MyAICreateEventCallback")

	uint8_t Pad_0x290[0x8]; // 0x290(0x8)
};

// Object: Class MFPluginWrapper.MFPWObject
// Size: 0x40 (Inherited: 0x28)
struct UMFPWObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFPWObject, "MFPWObject")

	uint8_t Pad_0x28[0x18]; // 0x28(0x18)
};

// Object: Class MFPluginWrapper.MFGCloudService
// Size: 0x40 (Inherited: 0x40)
struct UMFGCloudService : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudService, "MFGCloudService")
};

// Object: Class MFPluginWrapper.MFAICreateSDKService
// Size: 0x58 (Inherited: 0x40)
struct UMFAICreateSDKService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFAICreateSDKService, "MFAICreateSDKService")

	struct UMyAICreateEventCallback* myCallback; // 0x40(0x8)
	uint8_t Pad_0x48[0x10]; // 0x48(0x10)

	// Object: Function MFPluginWrapper.MFAICreateSDKService.ShareVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e03180
	// Params: [ Num(7) Size(0x70) ]
	void ShareVideo(struct FString Platform, struct FString videopath, struct FString CoverPath, struct FString Title, struct FString Desc, struct FString ContentId, struct FString ShareInfo);

	// Object: Function MFPluginWrapper.MFAICreateSDKService.PublishVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e02c6c
	// Params: [ Num(8) Size(0x80) ]
	void PublishVideo(struct FString Platform, struct FString videopath, struct FString CoverPath, struct FString Title, struct FString Desc, struct FString AccountId, struct FString ContentId, struct FString ShareInfo);

	// Object: Function MFPluginWrapper.MFAICreateSDKService.InitSDK
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x942bae8
	// Params: [ Num(1) Size(0x10) ]
	void InitSDK(struct FString AppID);

	// Object: Function MFPluginWrapper.MFAICreateSDKService.AuthorizeUnbind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e028cc
	// Params: [ Num(2) Size(0x20) ]
	void AuthorizeUnbind(struct FString Platform, struct FString AccountId);

	// Object: Function MFPluginWrapper.MFAICreateSDKService.AuthorizeQuery
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e02b68
	// Params: [ Num(1) Size(0x10) ]
	void AuthorizeQuery(struct FString Platform);

	// Object: Function MFPluginWrapper.MFAICreateSDKService.AuthorizeBind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e02a64
	// Params: [ Num(1) Size(0x10) ]
	void AuthorizeBind(struct FString Platform);
};

// Object: Class MFPluginWrapper.MFBoxService
// Size: 0x40 (Inherited: 0x40)
struct UMFBoxService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFBoxService, "MFBoxService")

	// Object: Function MFPluginWrapper.MFBoxService.OpenCommunity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e037c0
	// Params: [ Num(2) Size(0x11) ]
	bool OpenCommunity(struct FString URL);

	// Object: Function MFPluginWrapper.MFBoxService.OnBoxCallbackUnreal
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e0368c
	// Params: [ Num(2) Size(0x18) ]
	void OnBoxCallbackUnreal(int32_t ClientType, struct FString Msg);

	// Object: Function MFPluginWrapper.MFBoxService.IsRunning
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e03788
	// Params: [ Num(1) Size(0x1) ]
	bool IsRunning();

	// Object: Function MFPluginWrapper.MFBoxService.InitCommunity
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x952be60
	// Params: [ Num(1) Size(0x10) ]
	void InitCommunity(struct FString JsonString);
};

// Object: Class MFPluginWrapper.MFComplianceService
// Size: 0x48 (Inherited: 0x40)
struct UMFComplianceService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFComplianceService, "MFComplianceService")

	struct UMFIntlComplianceObserver* INTLComplianceObserver; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceSetUserProfile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03f24
	// Params: [ Num(6) Size(0x49) ]
	static bool ComplianceSetUserProfile(struct FString GameId, struct FString Openid, struct FString Token, int32_t channelID, struct FString region);

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceSetParentCertificateStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e039b8
	// Params: [ Num(1) Size(0x4) ]
	static void ComplianceSetParentCertificateStatus(int32_t Status);

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceSetEUAgreeStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03b44
	// Params: [ Num(1) Size(0x4) ]
	static void ComplianceSetEUAgreeStatus(int32_t Status);

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceSetAdulthood
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03e78
	// Params: [ Num(1) Size(0x4) ]
	static void ComplianceSetAdulthood(int32_t Status);

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceSendEmail
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03cf0
	// Params: [ Num(2) Size(0x20) ]
	static void ComplianceSendEmail(struct FString email, struct FString userName);

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceQueryUserStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03f10
	// Params: [ Num(0) Size(0x0) ]
	static void ComplianceQueryUserStatus();

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceQueryIsEEA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03a50
	// Params: [ Num(1) Size(0x10) ]
	static void ComplianceQueryIsEEA(struct FString region);

	// Object: Function MFPluginWrapper.MFComplianceService.ComplianceCommitBirthday
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e03bdc
	// Params: [ Num(3) Size(0xC) ]
	static void ComplianceCommitBirthday(int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay);
};

// Object: Class MFPluginWrapper.MFCTIPayObserver
// Size: 0x88 (Inherited: 0x40)
struct UMFCTIPayObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFCTIPayObserver, "MFCTIPayObserver")

	uint8_t Pad_0x40[0x48]; // 0x40(0x48)
};

// Object: Class MFPluginWrapper.MFCustomerService
// Size: 0x48 (Inherited: 0x40)
struct UMFCustomerService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFCustomerService, "MFCustomerService")

	struct UMFIntlCustomerObserver* customerObserver; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFCustomerService.LaunchCustomerUI
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e04250
	// Params: [ Num(5) Size(0x50) ]
	void LaunchCustomerUI(struct FString langType, struct FString sign, struct FString Openid, struct FString gameLevel, struct FString NickName);
};

// Object: Class MFPluginWrapper.MFEsCapturerService
// Size: 0x58 (Inherited: 0x40)
struct UMFEsCapturerService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFEsCapturerService, "MFEsCapturerService")

	uint8_t Pad_0x40[0x18]; // 0x40(0x18)

	// Object: Function MFPluginWrapper.MFEsCapturerService.UpdateStartParams
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e045dc
	// Params: [ Num(1) Size(0x10) ]
	void UpdateStartParams(struct FString UserInfo);

	// Object: Function MFPluginWrapper.MFEsCapturerService.SetCallback
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90bd224
	// Params: [ Num(0) Size(0x0) ]
	void SetCallback();

	// Object: Function MFPluginWrapper.MFEsCapturerService.ReAuthDouyin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e045b4
	// Params: [ Num(0) Size(0x0) ]
	void ReAuthDouyin();

	// Object: Function MFPluginWrapper.MFEsCapturerService.InitSDK
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94430d4
	// Params: [ Num(1) Size(0x10) ]
	void InitSDK(struct FString UserInfo);

	// Object: Function MFPluginWrapper.MFEsCapturerService.GetDouyinToken
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e045c8
	// Params: [ Num(0) Size(0x0) ]
	void GetDouyinToken();

	// Object: Function MFPluginWrapper.MFEsCapturerService.Fire
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e046e0
	// Params: [ Num(1) Size(0x10) ]
	void Fire(struct FString RecordParams);

	// Object: Function MFPluginWrapper.MFEsCapturerService.Finish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97eaf74
	// Params: [ Num(2) Size(0x11) ]
	bool Finish(struct FString Params);

	// Object: Function MFPluginWrapper.MFEsCapturerService.Available
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97a9c20
	// Params: [ Num(1) Size(0x1) ]
	bool Available();
};

// Object: Class MFPluginWrapper.MFGCloudCommonStatics
// Size: 0x28 (Inherited: 0x28)
struct UMFGCloudCommonStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudCommonStatics, "MFGCloudCommonStatics")

	// Object: Function MFPluginWrapper.MFGCloudCommonStatics.GetNetworkConnectionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9373478
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetNetworkConnectionType();

	// Object: Function MFPluginWrapper.MFGCloudCommonStatics.GetCarrier
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9598cac
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCarrier();
};

// Object: Class MFPluginWrapper.MFGCloudCrashObserver
// Size: 0x2D0 (Inherited: 0x40)
struct UMFGCloudCrashObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudCrashObserver, "MFGCloudCrashObserver")

	uint8_t Pad_0x40[0x290]; // 0x40(0x290)

	// Object: Function MFPluginWrapper.MFGCloudCrashObserver.TrySetVkCrashNum
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e0480c
	// Params: [ Num(2) Size(0x8) ]
	static void TrySetVkCrashNum(int32_t LaunchID, int32_t CrashNum);
};

// Object: Class MFPluginWrapper.MFGCloudCrashService
// Size: 0x1A0 (Inherited: 0x40)
struct UMFGCloudCrashService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudCrashService, "MFGCloudCrashService")

	struct UMFGCloudCrashObserver* CrashObserver; // 0x40(0x8)
	uint8_t Pad_0x48[0x158]; // 0x48(0x158)

	// Object: Function MFPluginWrapper.MFGCloudCrashService.UACrastTest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05224
	// Params: [ Num(0) Size(0x0) ]
	void UACrastTest();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.SetWaterMarkInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8be6fd0
	// Params: [ Num(1) Size(0x10) ]
	void SetWaterMarkInfo(struct FString Info);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.SetUserValue
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8722578
	// Params: [ Num(2) Size(0x20) ]
	void SetUserValue(struct FString Key, struct FString Value);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.SetUserId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0546c
	// Params: [ Num(1) Size(0x10) ]
	void SetUserId(struct FString UserId);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.SetDownloadState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995b45c
	// Params: [ Num(1) Size(0x4) ]
	void SetDownloadState(int32_t nState);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.ReportWithLogLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e05660
	// Params: [ Num(3) Size(0x28) ]
	static void ReportWithLogLua(struct UObject* WorldContextObject, struct FString Name, struct FString buf);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.ReportMetalTrace
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04b54
	// Params: [ Num(0) Size(0x0) ]
	void ReportMetalTrace();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.reportLastOutOfMemory
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e048e8
	// Params: [ Num(1) Size(0x4) ]
	void reportLastOutOfMemory(int32_t Step);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.ReportException
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x7756594
	// Params: [ Num(6) Size(0x8C) ]
	void ReportException(int32_t Type, struct FString exceptionName, struct FString exceptionMsg, struct FString exceptionStack, struct TMap<struct FString, struct FString>& extInfo, int32_t repFlag);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.recordGameNeed
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e04990
	// Params: [ Num(5) Size(0x20) ]
	void recordGameNeed(bool bRead, int32_t Index, int32_t Value, int32_t delVal, struct FString& reason);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnStepToGameCall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9472288
	// Params: [ Num(0) Size(0x0) ]
	void OnStepToGameCall();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelperDumplastRecord
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0509c
	// Params: [ Num(1) Size(0x4) ]
	void OnMatrixiOSHelperDumplastRecord(int32_t Param);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelperCmd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05144
	// Params: [ Num(1) Size(0x10) ]
	void OnMatrixiOSHelperCmd(struct FString Cmd);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_stopTrackCPU
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0504c
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_stopTrackCPU();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_stopDisplayLink
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04c8c
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_stopDisplayLink();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_stopBlockMonitor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05074
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_stopBlockMonitor();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_startTrackCPU
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05060
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_startTrackCPU();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_startDisplayLink
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04ca0
	// Params: [ Num(1) Size(0x10) ]
	void OnMatrixiOSHelper_startDisplayLink(struct FString strSense);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_startBlockMonitor
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05088
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_startBlockMonitor();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_setShouldSuspendAllThreads
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04e90
	// Params: [ Num(1) Size(0x1) ]
	void OnMatrixiOSHelper_setShouldSuspendAllThreads(bool shouldSuspendAllThreads);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_setRunloopThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04f68
	// Params: [ Num(1) Size(0x4) ]
	void OnMatrixiOSHelper_setRunloopThreshold(int32_t Seconds);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_setCustomInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04b68
	// Params: [ Num(3) Size(0xC) ]
	void OnMatrixiOSHelper_setCustomInfo(int32_t Index, int32_t Value, int32_t Delete);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_recoverRunloopThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04f40
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_recoverRunloopThreshold();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_recoverCPUUsage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05010
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_recoverCPUUsage();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_lowerRunloopThreshold
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04f54
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_lowerRunloopThreshold();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_lowerCPUUsage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05024
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_lowerCPUUsage();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_isBackgroundCPUTooSmall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05038
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_isBackgroundCPUTooSmall();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e051f8
	// Params: [ Num(0) Size(0x0) ]
	void OnMatrixiOSHelper_Init();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnMatrixiOSHelper_generateLiveReportWithDumpType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e04d54
	// Params: [ Num(3) Size(0x19) ]
	void OnMatrixiOSHelper_generateLiveReportWithDumpType(int32_t dumpType1, struct FString reason, bool bSelfDefined);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnGPMAgentReport
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0533c
	// Params: [ Num(3) Size(0x18) ]
	void OnGPMAgentReport(struct FString ReportName, int32_t Enable, int32_t Level);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.OnConsoleDumphitches
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x978a688
	// Params: [ Num(2) Size(0x5) ]
	void OnConsoleDumphitches(int32_t From, bool bStart);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.LogMonitorInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05238
	// Params: [ Num(1) Size(0x10) ]
	void LogMonitorInfo(struct FString Info);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.LogInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05520
	// Params: [ Num(3) Size(0x28) ]
	void LogInfo(int32_t Level, struct FString Tag, struct FString Log);

	// Object: Function MFPluginWrapper.MFGCloudCrashService.is_RUNNING_WITH_ASAN
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0520c
	// Params: [ Num(1) Size(0x1) ]
	bool is_RUNNING_WITH_ASAN();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.GetWaterMarkInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95ea6fc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetWaterMarkInfo();

	// Object: Function MFPluginWrapper.MFGCloudCrashService.ConsoleDumphitches
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x995b500
	// Params: [ Num(1) Size(0x1) ]
	void ConsoleDumphitches(bool bStart);
};

// Object: Class MFPluginWrapper.MFGCloudDolphinService
// Size: 0xA0 (Inherited: 0x40)
struct UMFGCloudDolphinService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudDolphinService, "MFGCloudDolphinService")

	uint8_t Pad_0x40[0x60]; // 0x40(0x60)

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.UpdateAndroidDownloadNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e0591c
	// Params: [ Num(2) Size(0x18) ]
	static void UpdateAndroidDownloadNotify(int32_t InProgress, struct FString InContentText);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.ShowAndroidDownloadNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e05a00
	// Params: [ Num(2) Size(0x14) ]
	static void ShowAndroidDownloadNotify(struct FString InTitle, int32_t InFlag);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.SetUseThreadPoll
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e05884
	// Params: [ Num(1) Size(0x4) ]
	static void SetUseThreadPoll(int32_t InValue);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.SetPreDownloadDir
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e06268
	// Params: [ Num(1) Size(0x10) ]
	void SetPreDownloadDir(struct FString InDir);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.SetGrayInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e060cc
	// Params: [ Num(2) Size(0x20) ]
	void SetGrayInfo(struct FString InUserID, struct FString InWorldID);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnNoticeInstallApk
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x11) ]
	void OnNoticeInstallApk(struct FString InApkPath, bool InResult);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnDolphinVersionInfoImplement
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(8) Size(0x32) ]
	void OnDolphinVersionInfoImplement(bool isAppUpdating, bool isNeedUpdating, bool isForcedUpdating, struct FString InGameVersion, int64_t needDownloadSize, struct FString userDefineStr, bool isAuditVersion, bool isGrayVersion);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnDolphinStageChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnDolphinStageChanged(int32_t InNewStage);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnDolphinRestart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05b80
	// Params: [ Num(0) Size(0x0) ]
	void OnDolphinRestart();

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnDolphinProgress
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnDolphinProgress(int32_t curVersionStage, int64_t TotalSize, int64_t currentSize);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnDolphinCallBackSuccess
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnDolphinCallBackSuccess();

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnDolphinCallBackError
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x8) ]
	void OnDolphinCallBackError(int32_t VersionStage, int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnContinueDolphin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05b94
	// Params: [ Num(1) Size(0x1) ]
	void OnContinueDolphin(bool bContinue);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.OnCancelDolphin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97e9f80
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelDolphin();

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.GetPreDownloadDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e061cc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPreDownloadDir();

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.GetCacheDir
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e05ae4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCacheDir();

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.DynamicAdjustDolphinSystemParameter
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05c44
	// Params: [ Num(2) Size(0x18) ]
	void DynamicAdjustDolphinSystemParameter(int32_t InParamKey, struct FString InValue);

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.CloseAndroidDownloadNotify
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92984a8
	// Params: [ Num(0) Size(0x0) ]
	static void CloseAndroidDownloadNotify();

	// Object: Function MFPluginWrapper.MFGCloudDolphinService.CheckUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e05d38
	// Params: [ Num(7) Size(0x49) ]
	void CheckUpdate(int32_t InUpdateType, int32_t InChannelId, struct FString InAppVersion, struct FString InAssetVersion, struct FString InRemoteURL, struct FString InUpdateDir, bool InFixupMode);
};

// Object: Class MFPluginWrapper.MFGCloudFriendObserver
// Size: 0x50 (Inherited: 0x40)
struct UMFGCloudFriendObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudFriendObserver, "MFGCloudFriendObserver")

	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: Class MFPluginWrapper.MFGCloudFriendService
// Size: 0x130 (Inherited: 0x40)
struct UMFGCloudFriendService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudFriendService, "MFGCloudFriendService")

	uint8_t Pad_0x40[0xC0]; // 0x40(0xC0)
	struct UImage* Image; // 0x100(0x8)
	struct UTexture2DDynamic* InDyTexture; // 0x108(0x8)
	uint8_t Pad_0x110[0x10]; // 0x110(0x10)
	struct UMFGCloudFriendObserver* MFGCloudFriendObserver; // 0x120(0x8)
	struct UMFIntlFriendObserver* MFIntlFriendObserver; // 0x128(0x8)

	// Object: Function MFPluginWrapper.MFGCloudFriendService.UploadFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b4e8
	// Params: [ Num(3) Size(0x21) ]
	bool UploadFile(struct FString InFilePath, struct FString InCosPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.UpdateProgress
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void UpdateProgress(int32_t Progress);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareVideo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b924
	// Params: [ Num(2) Size(0x20) ]
	void ShareVideo(struct FString MediaPath, struct FString Channel);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareQQZone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0bdb8
	// Params: [ Num(2) Size(0x20) ]
	void ShareQQZone(struct FString ThumbPath, struct FString Link);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareOverseaEx
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a890
	// Params: [ Num(9) Size(0x79) ]
	bool ShareOverseaEx(struct FString Channel, int32_t ShareType, struct FString Title, struct FString Desc, struct FString ImgPath, struct FString ThumbPath, struct FString MediaPath, struct FString Link);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareOversea
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0ab60
	// Params: [ Num(6) Size(0x49) ]
	bool ShareOversea(struct FString Channel, int32_t ShareType, struct FString Link, struct FString img, struct FString Desc);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareMiniApp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0c32c
	// Params: [ Num(5) Size(0x50) ]
	void ShareMiniApp(struct FString ExtralJson, struct FString ThumbPath, struct FString Link, struct FString Title, struct FString Desc);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareLink
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0ad48
	// Params: [ Num(5) Size(0x50) ]
	void ShareLink(struct FString Channel, struct FString Link, struct FString Thumb, struct FString Title, struct FString Desc);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareImgWeChat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0bd04
	// Params: [ Num(1) Size(0x10) ]
	void ShareImgWeChat(struct FString ImgPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ShareImgQQ
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0beb8
	// Params: [ Num(1) Size(0x10) ]
	void ShareImgQQ(struct FString ImgPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendVLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0c510
	// Params: [ Num(1) Size(0x10) ]
	void SendVLog(struct FString MediaPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0c9dc
	// Params: [ Num(4) Size(0x40) ]
	void SendText(struct FString Channel, struct FString User, struct FString Desc, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendResultImg
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0ba24
	// Params: [ Num(3) Size(0x28) ]
	void SendResultImg(int32_t Window, struct FString ThumbPath, struct FString img);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendMiniApp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0c710
	// Params: [ Num(8) Size(0x80) ]
	void SendMiniApp(struct FString extraJson, struct FString Channel, struct FString Thumb, struct FString Link, struct FString Title, struct FString Desc, struct FString MediaPath, struct FString User);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendLink
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0af2c
	// Params: [ Num(7) Size(0x70) ]
	void SendLink(struct FString Channel, struct FString User, struct FString Link, struct FString Thumb, struct FString Openid, struct FString Title, struct FString Desc);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendInviteSilent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0bf6c
	// Params: [ Num(2) Size(0x20) ]
	void SendInviteSilent(struct FString ImgPath, struct FString User);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendInvite
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0c06c
	// Params: [ Num(8) Size(0x78) ]
	void SendInvite(struct FString ImgPath, int32_t Type, struct FString extraJson, struct FString Link, struct FString Channel, struct FString Desc, struct FString User, struct FString Title);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendImgWeChat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0cb74
	// Params: [ Num(3) Size(0x30) ]
	void SendImgWeChat(struct FString ImgPath, struct FString User, struct FString ThumbPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SendImgQQ
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0ccc0
	// Params: [ Num(3) Size(0x30) ]
	void SendImgQQ(struct FString ImgPath, struct FString User, struct FString ThumbPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.ScreenShotEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a630
	// Params: [ Num(3) Size(0x18) ]
	void ScreenShotEvent(bool IsWindow, bool SavePhoto, struct FString Name);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.SaveResultImg
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0bb64
	// Params: [ Num(5) Size(0x14) ]
	void SaveResultImg(int32_t X, int32_t Y, int32_t Width, int32_t Height, int32_t Window);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.RobotOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a7e0
	// Params: [ Num(1) Size(0x1) ]
	void RobotOpen(bool IsOpen);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.RequestStorageWritePermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a2d8
	// Params: [ Num(0) Size(0x0) ]
	void RequestStorageWritePermissions();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.RequestStorageReadPermissions
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a2c4
	// Params: [ Num(0) Size(0x0) ]
	void RequestStorageReadPermissions();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.PullUpMiniApp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0c5c4
	// Params: [ Num(3) Size(0x30) ]
	void PullUpMiniApp(struct FString MediaPath, struct FString ExtralJson, struct FString Channel);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.PostCosUploadImage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void PostCosUploadImage(struct FString InRetVal, struct FString Path);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.PostCosDownload
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void PostCosDownload(struct FString URL);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnShare
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnShare();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnScreenShotPanel
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnScreenShotPanel();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnScreenShotPandora
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnScreenShotPandora(struct FString ImgPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnLoadUrlFinish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b7a4
	// Params: [ Num(4) Size(0x28) ]
	void OnLoadUrlFinish(struct FString miniPath, struct FString bgPath, int32_t bErWeiMa, float Scale);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnIOSPhotoPermissionsRequestReturn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e09fe4
	// Params: [ Num(1) Size(0x1) ]
	void OnIOSPhotoPermissionsRequestReturn(bool Status);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnIOSPhotoPermissionsCallback
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e09f2c
	// Params: [ Num(1) Size(0x1) ]
	void OnIOSPhotoPermissionsCallback(bool Status);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnImageFinish
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x8) ]
	void OnImageFinish(struct UObject* Image1);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnHarmonyPhotoPermissionRequestReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e09e14
	// Params: [ Num(2) Size(0x20) ]
	void OnHarmonyPhotoPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<int32_t>& GrantResults);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnAndroidRequestStorageWritePermissionsReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e0a094
	// Params: [ Num(2) Size(0x20) ]
	void OnAndroidRequestStorageWritePermissionsReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.OnAndroidRequestStorageReadPermissionsReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e0a1ac
	// Params: [ Num(2) Size(0x20) ]
	void OnAndroidRequestStorageReadPermissionsReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.MFCheckAndroidVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a2ec
	// Params: [ Num(2) Size(0x5) ]
	bool MFCheckAndroidVersion(int32_t Level);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.LoadLogoFinish
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b1e0
	// Params: [ Num(2) Size(0x11) ]
	bool LoadLogoFinish(struct FString Path);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.LoadImageFromScreenShot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a408
	// Params: [ Num(7) Size(0x20) ]
	void LoadImageFromScreenShot(struct UImage* img, int32_t Type, bool specifyRect, int32_t minX, int32_t minY, int32_t maxX, int32_t maxY);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.GetScreenShotImgPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b708
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetScreenShotImgPath();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.GenerateLogoImg
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b1a8
	// Params: [ Num(1) Size(0x1) ]
	bool GenerateLogoImg();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.DownloadFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b5f8
	// Params: [ Num(3) Size(0x21) ]
	bool DownloadFile(struct FString FilePath, struct FString InCosPath);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.DestroyDynamicImage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95e6ff0
	// Params: [ Num(0) Size(0x0) ]
	void DestroyDynamicImage();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.CheckStorageWritePermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a3d4
	// Params: [ Num(1) Size(0x4) ]
	int32_t CheckStorageWritePermission();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.CheckStorageReadPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a3a0
	// Params: [ Num(1) Size(0x4) ]
	int32_t CheckStorageReadPermission();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.CancelAllDownloads
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0a7cc
	// Params: [ Num(0) Size(0x0) ]
	void CancelAllDownloads();

	// Object: Function MFPluginWrapper.MFGCloudFriendService.BindResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void BindResult(int32_t RetCode);

	// Object: Function MFPluginWrapper.MFGCloudFriendService.Bind
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0b2f4
	// Params: [ Num(4) Size(0x29) ]
	bool Bind(int32_t channelType, struct FString subChannel, struct FString extraJson);
};

// Object: Class MFPluginWrapper.MFGCloudGroupObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudGroupObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudGroupObserver, "MFGCloudGroupObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFGCloudGroupService
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudGroupService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudGroupService, "MFGCloudGroupService")

	struct UMFGCloudGroupObserver* MFGCloudGroupObserver; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFGCloudGroupService.UnbindGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0d828
	// Params: [ Num(6) Size(0x60) ]
	void UnbindGroup(struct FString Channel, struct FString unionID, struct FString unionName, struct FString zoneid, struct FString roleID, struct FString AreaID);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.SendGroupMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0d330
	// Params: [ Num(7) Size(0x70) ]
	void SendGroupMessage(struct FString Channel, struct FString unionID, struct FString Link, struct FString extraJson, struct FString AreaID, struct FString Title, struct FString Desc);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.RemindToBindGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0d5ac
	// Params: [ Num(7) Size(0x70) ]
	void RemindToBindGroup(struct FString unionID, struct FString zoneid, struct FString roleID, struct FString RoleName, struct FString leaderOpenID, struct FString leaderRoleID, struct FString AreaID);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.OnUnBindGroup
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnUnBindGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.OnRemindToBindGroup
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnRemindToBindGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.OnJoinGroup
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnJoinGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.OnGetGroupState
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void OnGetGroupState(int32_t Status, struct FString GroupID);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.OnGetGroupRelation
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnGetGroupRelation(int32_t Status);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.OnCreateGroup
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnCreateGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.JoinGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0dd3c
	// Params: [ Num(6) Size(0x60) ]
	void JoinGroup(struct FString Channel, struct FString unionID, struct FString zoneid, struct FString roleID, struct FString GroupID, struct FString AreaID);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.GetGroupState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0dba4
	// Params: [ Num(4) Size(0x40) ]
	void GetGroupState(struct FString Channel, struct FString unionID, struct FString zoneid, struct FString AreaID);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.GetGroupRelation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0da58
	// Params: [ Num(3) Size(0x30) ]
	void GetGroupRelation(struct FString Channel, struct FString groupIDOrUnionID, struct FString AreaID);

	// Object: Function MFPluginWrapper.MFGCloudGroupService.CreateGroup
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0df6c
	// Params: [ Num(7) Size(0x70) ]
	void CreateGroup(struct FString Channel, struct FString unionID, struct FString unionName, struct FString RoleName, struct FString zoneid, struct FString roleID, struct FString AreaID);
};

// Object: Class MFPluginWrapper.MFGCloudLoginObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudLoginObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudLoginObserver, "MFGCloudLoginObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFGCloudLoginService
// Size: 0xB8 (Inherited: 0x40)
struct UMFGCloudLoginService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudLoginService, "MFGCloudLoginService")

	struct UMFGCloudLoginObserver* LoginObserver; // 0x40(0x8)
	struct UMFIntlLoginObserver* IntlLoginObserver; // 0x48(0x8)
	struct FMulticastInlineDelegate HttpPostDelegate; // 0x50(0x10)
	uint8_t Pad_0x60[0x58]; // 0x60(0x58)

	// Object: Function MFPluginWrapper.MFGCloudLoginService.UnBind
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f858
	// Params: [ Num(4) Size(0x29) ]
	bool UnBind(int32_t channelType, struct FString subChannel, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.ThirdChannelAutoBindLIP
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0eb34
	// Params: [ Num(5) Size(0x39) ]
	bool ThirdChannelAutoBindLIP(struct FString Channel, int32_t opsType, struct FString friendName, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.SwitchUser
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f768
	// Params: [ Num(1) Size(0x1) ]
	void SwitchUser(bool bSwitch);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.SetLoginServiceSubClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e0fc90
	// Params: [ Num(2) Size(0x9) ]
	static bool SetLoginServiceSubClass(struct UMFGCloudLoginService* InSubClass);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.QueryBindInfo
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0fc50
	// Params: [ Num(1) Size(0x1) ]
	bool QueryBindInfo();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnWakeUpProc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void OnWakeUpProc(int32_t RetCode, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnQueryBindInfo
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x28) ]
	void OnQueryBindInfo(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString BindList);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnLIEventCallback
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void OnLIEventCallback(int32_t Event, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnINTLAccountResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(8) Size(0x3C) ]
	void OnINTLAccountResult(int32_t RetCode, int32_t ThirdCode, int32_t methodId, struct FString userName, struct FString uid, int32_t isRegister, int32_t isReceiveEmail, int32_t isSetPassword);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnDiscordSetRichPresence
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(5) Size(0x38) ]
	void OnDiscordSetRichPresence(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString ThirdMsg, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnDiscordSendMessage
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(5) Size(0x38) ]
	void OnDiscordSendMessage(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString ThirdMsg, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnDiscordMessageUpdatedResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(12) Size(0x79) ]
	void OnDiscordMessageUpdatedResult(int32_t RetCode, int32_t ThirdCode, int32_t Type, struct FString gid, struct FString uid, struct FString receiverGid, struct FString receiverUid, struct FString Content, struct FString messageId, int32_t editedTimestamp, int32_t sentTimestamp, bool isSentFromGame);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnDiscordGetFriendResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(13) Size(0x7C) ]
	void OnDiscordGetFriendResult(int32_t RetCode, int32_t ThirdCode, struct FString extraJson, struct FString gid, struct FString uid, struct FString avatarUrl, struct FString userName, struct FString DisplayName, int32_t Status, int32_t relationshipType, int32_t isInGame, int32_t Index, int32_t Num);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnDiscordGetConnectedUserResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(10) Size(0x64) ]
	void OnDiscordGetConnectedUserResult(int32_t RetCode, int32_t ThirdCode, struct FString gid, struct FString uid, struct FString avatarUrl, struct FString userName, struct FString DisplayName, int32_t Status, int32_t relationshipType, int32_t isInGame);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnDiscordAuthorize
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(5) Size(0x38) ]
	void OnDiscordAuthorize(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString ThirdMsg, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnBindResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x28) ]
	void OnBindResult(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnAuthResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x28) ]
	void OnAuthResult(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.OnAccountLoginProc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(18) Size(0xEC) ]
	void OnAccountLoginProc(int32_t Result, int32_t ThirdCode, struct FString reason, int32_t channelType, struct FString strOpenID, struct FString strUserID, struct FString strTokenAccess, struct FString strTokenRefresh, struct FString strTokenPay, struct FString strPF, struct FString strPFKey, struct FString strSTKey, struct FString regChannel, int32_t FirstLogin, struct FString ChannelInfo, struct FString extraJson, struct FString strPicUrl, int32_t DeleteAccountStatus);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.Logout
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f83c
	// Params: [ Num(0) Size(0x0) ]
	void Logout();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.Login
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995d960
	// Params: [ Num(5) Size(0x39) ]
	bool Login(int32_t channelType, struct FString fakeOpenID, struct FString subChannel, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.LIAuthResult
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x8) ]
	void LIAuthResult(int32_t RetCode, int32_t ThirdCode);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.HttpPostRequest
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e0e99c
	// Params: [ Num(2) Size(0x20) ]
	void HttpPostRequest(struct FString URL, struct FString StrContent);

	// Object: DelegateFunction MFPluginWrapper.MFGCloudLoginService.HttpPostDelegate__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void HttpPostDelegate__DelegateSignature(struct FString RspContent);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.GetLoginRet
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f820
	// Params: [ Num(0) Size(0x0) ]
	void GetLoginRet();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.GetCachedToken
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e0e7fc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCachedToken();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.GetCachedSigKey
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e0e72c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCachedSigKey();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.GetCachedOpenID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e0e8cc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCachedOpenID();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.GetCachedLoginChannel
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e0e640
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCachedLoginChannel();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.GetCachedHeadURL
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e0e65c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCachedHeadURL();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.DiscordSetRichPresence
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0edbc
	// Params: [ Num(13) Size(0x91) ]
	bool DiscordSetRichPresence(struct FString gameName, struct FString State, struct FString details, struct FString largeText, struct FString largeImage, struct FString SmallText, struct FString smallImage, int32_t startTime, int32_t endTime, int32_t partyMaxSize, int32_t supportedPlatforms, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.DiscordSendMessage
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f400
	// Params: [ Num(3) Size(0x21) ]
	bool DiscordSendMessage(struct FString recipientId, struct FString Content);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.DiscordQueryFriends
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f5b0
	// Params: [ Num(3) Size(0x9) ]
	bool DiscordQueryFriends(int32_t page, int32_t Count);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.DiscordOverseaSDKRegist
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f728
	// Params: [ Num(1) Size(0x1) ]
	bool DiscordOverseaSDKRegist();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.DiscordGetConnectedUser
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f6a8
	// Params: [ Num(1) Size(0x1) ]
	bool DiscordGetConnectedUser();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.DiscordAuthorize
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0f6e8
	// Params: [ Num(1) Size(0x1) ]
	bool DiscordAuthorize();

	// Object: Function MFPluginWrapper.MFGCloudLoginService.Bind
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e0fa54
	// Params: [ Num(4) Size(0x29) ]
	bool Bind(int32_t channelType, struct FString subChannel, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGCloudLoginService.AutoLogin
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995d848
	// Params: [ Num(1) Size(0x10) ]
	void AutoLogin(struct FString fakeOpenID);
};

// Object: Class MFPluginWrapper.MFGCloudMessageHandler
// Size: 0x30 (Inherited: 0x28)
struct UMFGCloudMessageHandler : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudMessageHandler, "MFGCloudMessageHandler")

	bool bIsConnected; // 0x28(0x1)
	uint8_t Pad_0x29[0x7]; // 0x29(0x7)

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.UnInitialize
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e125a8
	// Params: [ Num(0) Size(0x0) ]
	void UnInitialize();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.Tick
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x995e57c
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float DeltaSeconds);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.SetSendPkgHeaderZoneID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e12404
	// Params: [ Num(1) Size(0x10) ]
	void SetSendPkgHeaderZoneID(struct FString ID);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.SetDevUrl
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void SetDevUrl(struct FString ip, struct FString Port);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.SetClientType
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void SetClientType(int32_t ClientType);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.RequestLogin
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void RequestLogin(struct FString inPlayerName, bool isReconnected, float overTimeSeconds);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.RelayConnect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void RelayConnect();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnWaitingReliableNumChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnWaitingReliableNumChanged(int32_t NewWaitingReliableNum);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnStateChangedProc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x10) ]
	void OnStateChangedProc(int32_t connectorState, int32_t ErrorCode, int32_t extend1, int32_t extend2);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnRelayConnectedProc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnRelayConnectedProc(int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnOverTime
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0xD) ]
	void OnOverTime(int32_t MsgID, int32_t SerialId, int32_t overtimes, bool isShowError);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnDisconnectProc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnDisconnectProc(int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnDataRecvedProc
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnDataRecvedProc(int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnConnectorInvalid
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnConnectorInvalid();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnConnected
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnConnected(int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.OnAcquiredWeGameToken
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e122b0
	// Params: [ Num(3) Size(0x30) ]
	void OnAcquiredWeGameToken(struct FString PlayerId, struct FString PlayerName, struct FString Token);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.IsConnectedTest
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e124ec
	// Params: [ Num(1) Size(0x1) ]
	bool IsConnectedTest();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.IsConnected
	// Flags: [Native|Public]
	// Offset: 0x3e1252c
	// Params: [ Num(1) Size(0x1) ]
	bool IsConnected();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.HasAcquiredWeGameToken
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12270
	// Params: [ Num(1) Size(0x1) ]
	bool HasAcquiredWeGameToken();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.GetService
	// Flags: [Native|Public]
	// Offset: 0x3e1256c
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudService* GetService();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.GetServerID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e124b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetServerID();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.GetIP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x956c6e8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIP();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.GetConnectInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x959eed4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetConnectInfo();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.Disconnect
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void Disconnect();

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.DevConnect
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(6) Size(0x3A) ]
	bool DevConnect(int32_t Channel, struct FString uin, struct FString pwd, const struct TArray<struct FString>& urlList, bool Clear);

	// Object: Function MFPluginWrapper.MFGCloudMessageHandler.Connect
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(7) Size(0x51) ]
	bool Connect(int32_t Channel, const struct TArray<struct FString>& urlList, bool Clear, struct FString Openid, struct FString openKey, struct FString extInfo);
};

// Object: Class MFPluginWrapper.MFGCloudMessageHandlerChildTss
// Size: 0x60 (Inherited: 0x30)
struct UMFGCloudMessageHandlerChildTss : UMFGCloudMessageHandler
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudMessageHandlerChildTss, "MFGCloudMessageHandlerChildTss")

	uint8_t Pad_0x30[0x30]; // 0x30(0x30)
};

// Object: Class MFPluginWrapper.MFGCloudMessageObserver
// Size: 0x188 (Inherited: 0x40)
struct UMFGCloudMessageObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudMessageObserver, "MFGCloudMessageObserver")

	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
	struct UMFPWMessageHeader* SendPkgHeader; // 0x58(0x8)
	struct UMFPWMessageHeader* RecvPkgHeader; // 0x60(0x8)
	uint8_t Pad_0x68[0x8]; // 0x68(0x8)
	bool bManualUpdate; // 0x70(0x1)
	uint8_t Pad_0x71[0xB7]; // 0x71(0xB7)
	bool IsDebug; // 0x128(0x1)
	bool IsNetworkOptimizationOn; // 0x129(0x1)
	uint8_t Pad_0x12A[0x5E]; // 0x12A(0x5E)
};

// Object: Class MFPluginWrapper.MFGCloudMessageService
// Size: 0x60 (Inherited: 0x40)
struct UMFGCloudMessageService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudMessageService, "MFGCloudMessageService")

	bool bIsConnected; // 0x39(0x1)
	struct TArray<struct UMFGCloudMessageHandler*> MsgHandlerArr; // 0x40(0x10)
	struct UMFGCloudMessageObserver* ConnectorObserver; // 0x50(0x8)
	uint8_t Pad_0x59[0x7]; // 0x59(0x7)

	// Object: Function MFPluginWrapper.MFGCloudMessageService.UnRegisterMessageHandlerByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1301c
	// Params: [ Num(2) Size(0x9) ]
	bool UnRegisterMessageHandlerByClass(struct UMFGCloudMessageHandler* InClass);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.UnRegisterAllMessageHandler
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95ba6cc
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterAllMessageHandler();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.SetTickType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ed98
	// Params: [ Num(1) Size(0x4) ]
	void SetTickType(int32_t Type);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.SetRecvMessage
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12c2c
	// Params: [ Num(1) Size(0x1) ]
	void SetRecvMessage(bool recvMsg);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.SetOvertime
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12b38
	// Params: [ Num(2) Size(0x5) ]
	void SetOvertime(int32_t Cmd, bool OverTime);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.SetKickOffState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x91a1aac
	// Params: [ Num(1) Size(0x1) ]
	void SetKickOffState(bool IsKickOff);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.SetClientType
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x995ee48
	// Params: [ Num(1) Size(0x4) ]
	void SetClientType(int32_t ClientType);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.RelayConnect
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12d40
	// Params: [ Num(0) Size(0x0) ]
	void RelayConnect();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.RegisterMessageHandlerByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92bc198
	// Params: [ Num(2) Size(0x10) ]
	struct UMFGCloudMessageHandler* RegisterMessageHandlerByClass(struct UMFGCloudMessageHandler* InClass);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.ManualReconnect
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12d00
	// Params: [ Num(1) Size(0x1) ]
	bool ManualReconnect();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.GetServerID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92ea0bc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetServerID();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.GetMsgHandlerByType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93b2adc
	// Params: [ Num(2) Size(0x10) ]
	struct UMFGCloudMessageHandler* GetMsgHandlerByType(struct UMFGCloudMessageHandler* classType);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.GetIP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e12a9c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIP();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.GetConnectInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e12a00
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetConnectInfo();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.Disconnect
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12d5c
	// Params: [ Num(0) Size(0x0) ]
	void Disconnect();

	// Object: Function MFPluginWrapper.MFGCloudMessageService.DevConnect
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e12d78
	// Params: [ Num(6) Size(0x3A) ]
	bool DevConnect(int32_t Channel, struct FString uin, struct FString pwd, const struct TArray<struct FString>& urlList, bool Clear);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.Connect
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x995eef8
	// Params: [ Num(7) Size(0x51) ]
	bool Connect(int32_t Channel, const struct TArray<struct FString>& urlList, bool Clear, struct FString Openid, struct FString openKey, struct FString extInfo);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.ClipPendingResponseArr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95d19fc
	// Params: [ Num(1) Size(0x1) ]
	void ClipPendingResponseArr(bool IsReconnect);

	// Object: Function MFPluginWrapper.MFGCloudMessageService.ClearAckID
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e12ce4
	// Params: [ Num(0) Size(0x0) ]
	void ClearAckID();
};

// Object: Class MFPluginWrapper.MFGCloudNetWorkStateObserver
// Size: 0x58 (Inherited: 0x40)
struct UMFGCloudNetWorkStateObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudNetWorkStateObserver, "MFGCloudNetWorkStateObserver")

	uint8_t Pad_0x40[0x18]; // 0x40(0x18)
};

// Object: Class MFPluginWrapper.MFGCloudNetWorkStateService
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudNetWorkStateService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudNetWorkStateService, "MFGCloudNetWorkStateService")

	struct UMFGCloudNetWorkStateObserver* NetworkObserver; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFGCloudNetWorkStateService.OnNetworkStateChanged
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnNetworkStateChanged(int32_t State);
};

// Object: Class MFPluginWrapper.MFGCloudNotice
// Size: 0x100 (Inherited: 0x40)
struct UMFGCloudNotice : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudNotice, "MFGCloudNotice")

	struct FDelegate OnLoadNoticeCompleted; // 0x3C(0x10)
	struct FMSDKNoticeReturnData LastReturnData; // 0x50(0x60)
	struct FString CachedGroup; // 0xB0(0x10)
	struct FString CachedLanguage; // 0xC0(0x10)
	struct FString CachedRegion; // 0xD0(0x10)
	struct FString CachedPartition; // 0xE0(0x10)
	struct FString CachedExtra; // 0xF0(0x10)

	// Object: Function MFPluginWrapper.MFGCloudNotice.OnNotificationPermissionsGrantedDynamic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e133dc
	// Params: [ Num(1) Size(0x1) ]
	void OnNotificationPermissionsGrantedDynamic(bool Status);

	// Object: DelegateFunction MFPluginWrapper.MFGCloudNotice.OnLoadNoticeCompleted__DelegateSignature
	// Flags: [Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnLoadNoticeCompleted__DelegateSignature();

	// Object: Function MFPluginWrapper.MFGCloudNotice.LoadNotice
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e131b8
	// Params: [ Num(6) Size(0x60) ]
	struct FString LoadNotice(struct FString InGroup, struct FString InLanguage, struct FString InRegion, struct FString InPartition, struct FString InExtra);
};

// Object: Class MFPluginWrapper.MFPWPlugin
// Size: 0x40 (Inherited: 0x40)
struct UMFPWPlugin : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFPWPlugin, "MFPWPlugin")
};

// Object: Class MFPluginWrapper.MFGCloudPlugin
// Size: 0x90 (Inherited: 0x40)
struct UMFGCloudPlugin : UMFPWPlugin
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudPlugin, "MFGCloudPlugin")

	struct TMap<struct UMFGCloudService*, struct UMFGCloudService*> ServiceMap; // 0x40(0x50)

	// Object: Function MFPluginWrapper.MFGCloudPlugin.SetLogLevel
	// Flags: [Final|Native|Public|BlueprintCallable|Const]
	// Offset: 0x3e134a0
	// Params: [ Num(1) Size(0x4) ]
	void SetLogLevel(int32_t GcloudLogLevel);

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetUMFTPioneerService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x87248c4
	// Params: [ Num(1) Size(0x8) ]
	struct UMFTPioneerService* GetUMFTPioneerService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetUMFEsCapturerService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8b957a8
	// Params: [ Num(1) Size(0x8) ]
	struct UMFEsCapturerService* GetUMFEsCapturerService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetUMFAICreateSDKService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8bf6df0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFAICreateSDKService* GetUMFAICreateSDKService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetMountPakService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8bc7d74
	// Params: [ Num(1) Size(0x8) ]
	struct UMFMountPakService* GetMountPakService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetLBSService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e13548
	// Params: [ Num(1) Size(0x8) ]
	struct UMFLBSService* GetLBSService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudXGService
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e49b20
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudXGService* GetGCloudXGService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudToolsService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8bf8e54
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudToolsService* GetGCloudToolsService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudPufferService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x7fbc028
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudPufferService* GetGCloudPufferService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudPlugin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x6bc69cc
	// Params: [ Num(2) Size(0x10) ]
	static struct UMFGCloudPlugin* GetGCloudPlugin(struct UObject* WorldContextObject);

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudNoticeService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x86a33b0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudNotice* GetGCloudNoticeService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudMessageService
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93eda84
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudMessageService* GetGCloudMessageService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudLoginService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e135e4
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudLoginService* GetGCloudLoginService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudHttpDNSService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e1357c
	// Params: [ Num(1) Size(0x8) ]
	struct UMFHttpDNSService* GetGCloudHttpDNSService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudGroupService
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e13618
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudGroupService* GetGCloudGroupService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudFriendService
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1364c
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudFriendService* GetGCloudFriendService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudDolphinService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8b822d0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudDolphinService* GetGCloudDolphinService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetGCloudCrashService
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x918c3f0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFGCloudCrashService* GetGCloudCrashService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.GetCustomerService
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e135b0
	// Params: [ Num(1) Size(0x8) ]
	struct UMFCustomerService* GetCustomerService();

	// Object: Function MFPluginWrapper.MFGCloudPlugin.AddServiceByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8f04f30
	// Params: [ Num(2) Size(0x10) ]
	struct UMFGCloudService* AddServiceByClass(struct UMFGCloudService* InClass);
};

// Object: Class MFPluginWrapper.MFGCloudPredownload
// Size: 0x28 (Inherited: 0x28)
struct UMFGCloudPredownload : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudPredownload, "MFGCloudPredownload")

	// Object: Function MFPluginWrapper.MFGCloudPredownload.SetImmDLMaxSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e138fc
	// Params: [ Num(2) Size(0x5) ]
	static bool SetImmDLMaxSpeed(int32_t InMaxSpeed);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.SaveProgress
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13b80
	// Params: [ Num(2) Size(0x10) ]
	static void SaveProgress(int64_t InNowSize, int64_t InTotalSize);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.Resume
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13ff8
	// Params: [ Num(1) Size(0x1) ]
	static bool Resume();

	// Object: Function MFPluginWrapper.MFGCloudPredownload.Remove
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13f4c
	// Params: [ Num(2) Size(0x9) ]
	static bool Remove(int64_t TaskId);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.Pause
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e14030
	// Params: [ Num(1) Size(0x1) ]
	static bool Pause();

	// Object: Function MFPluginWrapper.MFGCloudPredownload.IsFileReady
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13d40
	// Params: [ Num(2) Size(0x11) ]
	static bool IsFileReady(struct FString Filename);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.Initialize
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e13dfc
	// Params: [ Num(2) Size(0xA9) ]
	static bool Initialize(const struct FPufferInitConfigData& InParam);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetTotalSizeFromCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e139a8
	// Params: [ Num(1) Size(0x8) ]
	static int64_t GetTotalSizeFromCache();

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetTotalSizeByAppVersionFromCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13ac8
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetTotalSizeByAppVersionFromCache(struct FString AppVersion);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetFileSizeComressed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13844
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetFileSizeComressed(struct FString Filename);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetFileHash
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13c54
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetFileHash(struct FString Filename);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetDownloadingSpeed
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x7522860
	// Params: [ Num(1) Size(0x4) ]
	static float GetDownloadingSpeed();

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetDownloadedSizeFromCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e139dc
	// Params: [ Num(1) Size(0x8) ]
	static int64_t GetDownloadedSizeFromCache();

	// Object: Function MFPluginWrapper.MFGCloudPredownload.GetDownloadedSizeByAppVersionFromCache
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e13a10
	// Params: [ Num(2) Size(0x18) ]
	static int64_t GetDownloadedSizeByAppVersionFromCache(struct FString AppVersion);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.Download
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e14068
	// Params: [ Num(2) Size(0x18) ]
	static int64_t Download(struct FString BatchList);

	// Object: Function MFPluginWrapper.MFGCloudPredownload.AsyncMoveFiles
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e13688
	// Params: [ Num(4) Size(0x40) ]
	static void AsyncMoveFiles(struct FString InDstDir, struct FString InSrcDir, struct TArray<struct FString> FileList, const struct TArray<struct FString>& InPakHashList);
};

// Object: Class MFPluginWrapper.MFGCloudPufferService
// Size: 0x1B8 (Inherited: 0x40)
struct UMFGCloudPufferService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudPufferService, "MFGCloudPufferService")

	uint8_t Pad_0x40[0x178]; // 0x40(0x178)

	// Object: Function MFPluginWrapper.MFGCloudPufferService.UnmountPakList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e16bc0
	// Params: [ Num(2) Size(0x14) ]
	int32_t UnmountPakList(const struct TArray<struct FString>& InPakList);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.StartRestoreFiles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e177b4
	// Params: [ Num(2) Size(0x10) ]
	int64_t StartRestoreFiles(int32_t Priority);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.SetUseThreadPoll
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e16b28
	// Params: [ Num(1) Size(0x4) ]
	static void SetUseThreadPoll(int32_t InValue);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.SetTaskPriority
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e176c0
	// Params: [ Num(3) Size(0xD) ]
	bool SetTaskPriority(int64_t TaskId, int32_t Priority);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.SetImmDLMaxTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e17150
	// Params: [ Num(2) Size(0x5) ]
	bool SetImmDLMaxTask(int32_t InTaskNum);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.SetImmDLMaxSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92ea7a4
	// Params: [ Num(2) Size(0x5) ]
	bool SetImmDLMaxSpeed(int32_t InMaxSpeed);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.SaveTaskProgress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8c07a70
	// Params: [ Num(3) Size(0x20) ]
	void SaveTaskProgress(struct FString InTaskName, int64_t InNowSize, int64_t InTotalSize);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.ResumeTask
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x9960dac
	// Params: [ Num(2) Size(0x9) ]
	bool ResumeTask(int64_t TaskId);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.ResumeAllTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e16eb4
	// Params: [ Num(1) Size(0x4) ]
	int32_t ResumeAllTask();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.RestartPuffer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e16f50
	// Params: [ Num(2) Size(0x5) ]
	bool RestartPuffer(int32_t InRestoreFlag);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.RemoveTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8aed0bc
	// Params: [ Num(2) Size(0x9) ]
	bool RemoveTask(int64_t InTaskID);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.RemoveAllTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e16f1c
	// Params: [ Num(1) Size(0x4) ]
	int32_t RemoveAllTask();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.ReceiveTick
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void ReceiveTick(float InDeltaTime);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.ReadCachedTotalSizeByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e16df4
	// Params: [ Num(2) Size(0x18) ]
	int64_t ReadCachedTotalSizeByName(struct FString InTaskName);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.ReadCachedCurrentSizeByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8597870
	// Params: [ Num(2) Size(0x18) ]
	int64_t ReadCachedCurrentSizeByName(struct FString InTaskName);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.PauseTask
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e17864
	// Params: [ Num(2) Size(0x9) ]
	bool PauseTask(int64_t TaskId);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.PauseAllTask
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e16ee8
	// Params: [ Num(1) Size(0x4) ]
	int32_t PauseAllTask();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnRestoreReturn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x8) ]
	void OnRestoreReturn(bool IsSuccess, int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnRestoreProgress
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnRestoreProgress(int32_t stage, int64_t NowSize, int64_t TotalSize);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnPufferFileListItem
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	void OnPufferFileListItem(struct FString InFilename, int32_t InState);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnPakSigFailed
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(6) Size(0x48) ]
	void OnPakSigFailed(struct FString InPakName, int32_t InChunkIndex, struct FString InExpectedHash, struct FString InReceivedHash, int64_t DataOffset, int64_t DataSize);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnInitReturn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x8) ]
	void OnInitReturn(bool IsSuccess, int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnInitProgress
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnInitProgress(int32_t stage, int64_t NowSize, int64_t TotalSize);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnDownloadReturn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x14) ]
	void OnDownloadReturn(int64_t TaskId, int32_t fileID, bool IsSuccess, int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnDownloadProgress
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnDownloadProgress(int64_t TaskId, int64_t NowSize, int64_t TotalSize);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnDownloadIOSBackgroundDone
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnDownloadIOSBackgroundDone();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnDownloadBatchReturn
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(6) Size(0x28) ]
	void OnDownloadBatchReturn(int64_t batchTaskId, int32_t fileID, bool IsSuccess, int32_t ErrorCode, int32_t batchType, struct FString strRet);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnDownloadBatchProgress
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnDownloadBatchProgress(int64_t batchTaskId, int64_t NowSize, int64_t TotalSize);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.OnAsyncMountPakDone
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x40) ]
	void OnAsyncMountPakDone(struct FString InTaskName, const struct TArray<struct FString>& InPakList, const struct TArray<int32_t>& InResultList, struct FString InCustomParam);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.MountPakList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e16c84
	// Params: [ Num(3) Size(0x24) ]
	int32_t MountPakList(const struct TArray<struct FString>& InPakList, struct TArray<int32_t> InMountOrders);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.IsInitDone
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8398750
	// Params: [ Num(1) Size(0x1) ]
	bool IsInitDone();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.IsFileReadyByName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x902f6d4
	// Params: [ Num(2) Size(0x11) ]
	bool IsFileReadyByName(struct FString InFile);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.IsFileReady
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x86b9c48
	// Params: [ Num(2) Size(0x9) ]
	bool IsFileReady(int64_t InFileID);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.IsBatchDirReady
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e172f4
	// Params: [ Num(6) Size(0x21) ]
	bool IsBatchDirReady(struct FString Dir, bool blSubDir, int32_t& nTotal, int32_t& nReady, int32_t& nNotReady);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.InitPufferConfig
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x93cb328
	// Params: [ Num(2) Size(0xA9) ]
	bool InitPufferConfig(const struct FPufferInitConfigData& InParam);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetTaskState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e170a0
	// Params: [ Num(2) Size(0x5) ]
	EPufferTaskState GetTaskState(int32_t InTaskID);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetTaskInfoByTaskName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8ae94a4
	// Params: [ Num(2) Size(0x48) ]
	struct FPufferTaskInfo GetTaskInfoByTaskName(struct FString InTaskName);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetTaskInfoByTaskID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x858c1ec
	// Params: [ Num(2) Size(0x40) ]
	struct FPufferTaskInfo GetTaskInfoByTaskID(int32_t InTaskID);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetRestoreTaskName
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e17004
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRestoreTaskName();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetRestoreTaskID
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x74f9e9c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetRestoreTaskID();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetFileSizeCompressed
	// Flags: [Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x9960e68
	// Params: [ Num(2) Size(0x10) ]
	int64_t GetFileSizeCompressed(int64_t fileID);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetFileMd5
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e17204
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetFileMd5(int32_t fileID);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetFileId
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x8735520
	// Params: [ Num(2) Size(0x18) ]
	int64_t GetFileId(struct FString InFile);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetDownloadingTaskInfoList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95c9eac
	// Params: [ Num(2) Size(0x18) ]
	struct TArray<struct FPufferTaskInfo> GetDownloadingTaskInfoList(bool bIncludePaused);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetCurrentSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x7cafe00
	// Params: [ Num(1) Size(0x4) ]
	float GetCurrentSpeed();

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetCurrentDownloadingTaskNum
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x815c8a0
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetCurrentDownloadingTaskNum(bool bIncludePaused);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetBatchDirSizeCompressed
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e17558
	// Params: [ Num(3) Size(0x20) ]
	int64_t GetBatchDirSizeCompressed(struct FString Dir, bool blSubDir);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.GetBatchDirFileCount
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e17b0c
	// Params: [ Num(3) Size(0x18) ]
	int32_t GetBatchDirFileCount(struct FString Dir, bool blSubDir);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.DownloadFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e17c1c
	// Params: [ Num(5) Size(0x30) ]
	int64_t DownloadFile(struct FString InFile, bool InForceSync, int32_t InPriority, struct FString InTaskName);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.DownloadBatchList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95502a4
	// Params: [ Num(5) Size(0x30) ]
	int64_t DownloadBatchList(struct FString InFileList, bool forceSync, int32_t Priority, struct FString InTaskName);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.DownloadBatchDir
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e17920
	// Params: [ Num(6) Size(0x30) ]
	int64_t DownloadBatchDir(struct FString Dir, bool blSubDir, bool forceSync, int32_t Priority, struct FString InTaskName);

	// Object: Function MFPluginWrapper.MFGCloudPufferService.AsyncMountPakList
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x97f1944
	// Params: [ Num(5) Size(0x44) ]
	int32_t AsyncMountPakList(struct FString InTaskName, const struct TArray<struct FString>& InPakList, struct TArray<int32_t> InMountOrders, struct FString InCustomParam);
};

// Object: Class MFPluginWrapper.MFGCloudRobotService
// Size: 0x40 (Inherited: 0x40)
struct UMFGCloudRobotService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudRobotService, "MFGCloudRobotService")

	// Object: Function MFPluginWrapper.MFGCloudRobotService.ShowRobot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e183d8
	// Params: [ Num(8) Size(0x51) ]
	bool ShowRobot(struct UObject* InWorldContext, struct FString roleID, struct FString Question, struct FString Scene, struct FString ext, int32_t isLandscape, int32_t newActivity);

	// Object: Function MFPluginWrapper.MFGCloudRobotService.OnURLCallback
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnURLCallback(struct FString InParam);

	// Object: Function MFPluginWrapper.MFGCloudRobotService.OnStopRecord
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnStopRecord(int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudRobotService.OnStartRecord
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnStartRecord();

	// Object: Function MFPluginWrapper.MFGCloudRobotService.OnSpeechToText2GRobot
	// Flags: [Final|Native|Public]
	// Offset: 0x3e1829c
	// Params: [ Num(2) Size(0x14) ]
	void OnSpeechToText2GRobot(struct FString Text, int32_t ErrorCode);

	// Object: Function MFPluginWrapper.MFGCloudRobotService.OnShowCallback
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnShowCallback();

	// Object: Function MFPluginWrapper.MFGCloudRobotService.OnCloseCallback
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseCallback();

	// Object: Function MFPluginWrapper.MFGCloudRobotService.GetDefault
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e18390
	// Params: [ Num(1) Size(0x8) ]
	static struct UMFGCloudRobotService* GetDefault();

	// Object: Function MFPluginWrapper.MFGCloudRobotService.CloseRobot
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e183c4
	// Params: [ Num(0) Size(0x0) ]
	void CloseRobot();
};

// Object: Class MFPluginWrapper.MFGCloudSetting
// Size: 0xD8 (Inherited: 0x28)
struct UMFGCloudSetting : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudSetting, "MFGCloudSetting")

	struct FString GameId; // 0x28(0x10)
	struct FString GameKey; // 0x38(0x10)
	struct FString QQAppID; // 0x48(0x10)
	struct FString QQAppKey; // 0x58(0x10)
	struct FString WeiXinAppID; // 0x68(0x10)
	struct FString WeiXinAppKey; // 0x78(0x10)
	struct FString MSDK_GAME_ID; // 0x88(0x10)
	struct FString MSDK_SDK_Key; // 0x98(0x10)
	struct FString ConnectorDHP; // 0xA8(0x10)
	int32_t Dumphitches; // 0xB8(0x4)
	int32_t TssSDKID; // 0xBC(0x4)
	int32_t GRobotGameID; // 0xC0(0x4)
	uint8_t Pad_0xC4[0x4]; // 0xC4(0x4)
	struct FString GRobotGameCode; // 0xC8(0x10)

	// Object: Function MFPluginWrapper.MFGCloudSetting.GetWeiXinAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92e9660
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetWeiXinAppID();

	// Object: Function MFPluginWrapper.MFGCloudSetting.GetTssSDKID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e188f0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetTssSDKID();

	// Object: Function MFPluginWrapper.MFGCloudSetting.GetQQAppID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b38254
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetQQAppID();

	// Object: Function MFPluginWrapper.MFGCloudSetting.GetMSDKSDKKey
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e18924
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetMSDKSDKKey();

	// Object: Function MFPluginWrapper.MFGCloudSetting.GetMSDKGameID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x90b1fb0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetMSDKGameID();

	// Object: Function MFPluginWrapper.MFGCloudSetting.GetGameId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e189c0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetGameId();
};

// Object: Class MFPluginWrapper.MFGCloudTGPAObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudTGPAObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudTGPAObserver, "MFGCloudTGPAObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFGCloudTGPAService
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudTGPAService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudTGPAService, "MFGCloudTGPAService")

	struct UMFGCloudTGPAObserver* GCLoudTGPAObserver; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFGCloudTGPAService.OnNotifySystemInfo
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnNotifySystemInfo(struct FString& Json);
};

// Object: Class MFPluginWrapper.MFGCloudToolsObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudToolsObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudToolsObserver, "MFGCloudToolsObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFGCloudToolsService
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudToolsService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudToolsService, "MFGCloudToolsService")

	struct UMFGCloudToolsObserver* ToolsObserver; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFGCloudToolsService.OpenPrajnaWebView
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x3e18a88
	// Params: [ Num(1) Size(0x10) ]
	void OpenPrajnaWebView(struct FString jsonStr);

	// Object: Function MFPluginWrapper.MFGCloudToolsService.IsAppInstall
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x981262c
	// Params: [ Num(3) Size(0x21) ]
	bool IsAppInstall(struct FString Channel, struct FString Extra);

	// Object: Function MFPluginWrapper.MFGCloudToolsService.GetConfigChannelID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94325b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetConfigChannelID();
};

// Object: Class MFPluginWrapper.MFGCloudTssService
// Size: 0x40 (Inherited: 0x40)
struct UMFGCloudTssService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudTssService, "MFGCloudTssService")
};

// Object: Class MFPluginWrapper.MFGCloudWebViewObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudWebViewObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudWebViewObserver, "MFGCloudWebViewObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFGCloudWebViewService
// Size: 0x50 (Inherited: 0x40)
struct UMFGCloudWebViewService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudWebViewService, "MFGCloudWebViewService")

	struct UMFGCloudWebViewObserver* WebViewObserver; // 0x40(0x8)
	struct UMFIntlWebViewObserver* IntlWebViewObserver; // 0x48(0x8)

	// Object: Function MFPluginWrapper.MFGCloudWebViewService.OnWebViewPreClose
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e1b24c
	// Params: [ Num(0) Size(0x0) ]
	void OnWebViewPreClose();

	// Object: Function MFPluginWrapper.MFGCloudWebViewService.OnWebViewBackCall
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e1b110
	// Params: [ Num(3) Size(0x18) ]
	void OnWebViewBackCall(int32_t methodId, int32_t MsgType, struct FString MsgJsonData);

	// Object: Function MFPluginWrapper.MFGCloudWebViewService.OnCustomerServiceBackCall
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e1b014
	// Params: [ Num(2) Size(0x18) ]
	void OnCustomerServiceBackCall(int32_t MsgType, struct FString MsgJsonData);
};

// Object: Class MFPluginWrapper.MFGCloudXGObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFGCloudXGObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudXGObserver, "MFGCloudXGObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFGCloudXGService
// Size: 0x60 (Inherited: 0x40)
struct UMFGCloudXGService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFGCloudXGService, "MFGCloudXGService")

	struct UMFGCloudXGObserver* XGObserver; // 0x40(0x8)
	uint8_t Pad_0x48[0x18]; // 0x48(0x18)

	// Object: Function MFPluginWrapper.MFGCloudXGService.UnregisterPush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1bd58
	// Params: [ Num(1) Size(0x10) ]
	void UnregisterPush(struct FString Channel);

	// Object: Function MFPluginWrapper.MFGCloudXGService.SetTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9393f70
	// Params: [ Num(2) Size(0x20) ]
	void SetTag(struct FString Channel, struct FString Tag);

	// Object: Function MFPluginWrapper.MFGCloudXGService.SetAccount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1bc58
	// Params: [ Num(2) Size(0x20) ]
	void SetAccount(struct FString Channel, struct FString account);

	// Object: Function MFPluginWrapper.MFGCloudXGService.RequestCalendarPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1b7b8
	// Params: [ Num(0) Size(0x0) ]
	void RequestCalendarPermission();

	// Object: Function MFPluginWrapper.MFGCloudXGService.RegisterPush
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1be0c
	// Params: [ Num(2) Size(0x20) ]
	void RegisterPush(struct FString Channel, struct FString account);

	// Object: Function MFPluginWrapper.MFGCloudXGService.OnIOSCalendarPermissionRequestReturn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1b37c
	// Params: [ Num(1) Size(0x1) ]
	void OnIOSCalendarPermissionRequestReturn(bool Status);

	// Object: Function MFPluginWrapper.MFGCloudXGService.OnAndroidCalendarPermissionRequestReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e1b42c
	// Params: [ Num(2) Size(0x20) ]
	void OnAndroidCalendarPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults);

	// Object: Function MFPluginWrapper.MFGCloudXGService.DeleteTag
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90db38c
	// Params: [ Num(2) Size(0x20) ]
	void DeleteTag(struct FString Channel, struct FString Tag);

	// Object: Function MFPluginWrapper.MFGCloudXGService.DeleteEventFromeCalendar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1b544
	// Params: [ Num(1) Size(0x10) ]
	void DeleteEventFromeCalendar(struct FString Title);

	// Object: Function MFPluginWrapper.MFGCloudXGService.DeleteAccount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1bb58
	// Params: [ Num(2) Size(0x20) ]
	void DeleteAccount(struct FString Channel, struct FString account);

	// Object: Function MFPluginWrapper.MFGCloudXGService.CheckCalendarPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1b784
	// Params: [ Num(1) Size(0x4) ]
	int32_t CheckCalendarPermission();

	// Object: Function MFPluginWrapper.MFGCloudXGService.AddLocalNotification
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1b7cc
	// Params: [ Num(8) Size(0x48) ]
	void AddLocalNotification(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Min, struct FString Title, struct FString Content, struct FString content_ios);

	// Object: Function MFPluginWrapper.MFGCloudXGService.AddEvent2Calendar
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e1b5f8
	// Params: [ Num(4) Size(0x38) ]
	void AddEvent2Calendar(int32_t InStartTime, struct FString zoneTime, struct FString Title, struct FString Content);
};

// Object: Class MFPluginWrapper.MFGPMAgent
// Size: 0x28 (Inherited: 0x28)
struct UMFGPMAgent : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFGPMAgent, "MFGPMAgent")

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteSuperResolutionState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x953796c
	// Params: [ Num(1) Size(0x4) ]
	static void WriteSuperResolutionState(int32_t InSuperResolutionState);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteResolutionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d368
	// Params: [ Num(1) Size(0x1) ]
	static void WriteResolutionType(uint8_t InResolution);

	// Object: Function MFPluginWrapper.MFGPMAgent.WritePreferenceIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d580
	// Params: [ Num(1) Size(0x1) ]
	static void WritePreferenceIndex(uint8_t InPreferenceIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.WritePerfSubsystemFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93087f8
	// Params: [ Num(1) Size(0x1) ]
	static void WritePerfSubsystemFlag(uint8_t InPerfSubsystemFlag);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteMpeFrameInterpolation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f56318
	// Params: [ Num(1) Size(0x1) ]
	static void WriteMpeFrameInterpolation(uint8_t bEnable);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteGraphicStyleQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cd1c
	// Params: [ Num(1) Size(0x1) ]
	static void WriteGraphicStyleQualityLevel(uint8_t InGraphicStyleQualityLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d400
	// Params: [ Num(2) Size(0x2) ]
	static void WriteGraphicsQualityLevel(uint8_t GraphicsQualityLevel, uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteFramerateModeSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cdb4
	// Params: [ Num(1) Size(0x1) ]
	static void WriteFramerateModeSetting(uint8_t InFramerateModeEnabled);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteFrameRateLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91bfe44
	// Params: [ Num(2) Size(0x2) ]
	static void WriteFrameRateLevel(uint8_t InFrameRateLevel, uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteEnergyModeFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ce80
	// Params: [ Num(1) Size(0x1) ]
	static void WriteEnergyModeFlag(uint8_t InEnergyModeFlag);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteDeviceWorkloadLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94fea10
	// Params: [ Num(1) Size(0x4) ]
	static void WriteDeviceWorkloadLevel(int32_t InWorkloadLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteDetailMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9504fa0
	// Params: [ Num(1) Size(0x4) ]
	static void WriteDetailMode(int32_t InDetailMode);

	// Object: Function MFPluginWrapper.MFGPMAgent.WriteAntiAliasingState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c8d0
	// Params: [ Num(2) Size(0x2) ]
	static void WriteAntiAliasingState(uint8_t pageIndex, bool bOpen);

	// Object: Function MFPluginWrapper.MFGPMAgent.UpdateRayQueryRenderState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90c1a68
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateRayQueryRenderState(int32_t InRayQueryEnable);

	// Object: Function MFPluginWrapper.MFGPMAgent.UamSetFrameRateStrategy
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c09c
	// Params: [ Num(3) Size(0x3) ]
	static void UamSetFrameRateStrategy(EUamDeviceRank InDeviceRank, EUAFrameRateLevel InTargetFrameRateLevel, bool bIsDisableGearTwoMpe);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetMpeFrameInterpolation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cc44
	// Params: [ Num(2) Size(0x2) ]
	static void SetMpeFrameInterpolation(uint8_t bEnable, uint8_t bIsRenderFrameShortcut);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetIsInLobby_FromLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e97314
	// Params: [ Num(1) Size(0x1) ]
	static void SetIsInLobby_FromLua(bool bIsInLobby);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetGraphicStyleQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d0d0
	// Params: [ Num(2) Size(0x10) ]
	static void SetGraphicStyleQualityLevel(uint8_t GraphicStyleQualityLevel, struct UWorld* World);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x904a650
	// Params: [ Num(5) Size(0x12) ]
	static void SetGraphicsQualityLevel(uint8_t InQuality, uint8_t InResolution, struct UWorld* World, bool bSkipFlushAsyncLoading, uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetFramerateModeEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cb34
	// Params: [ Num(2) Size(0x10) ]
	static void SetFramerateModeEnabled(uint8_t bEnabled, struct UWorld* World);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetFrameRateLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d250
	// Params: [ Num(3) Size(0x11) ]
	static void SetFrameRateLevel(uint8_t InFrameRateLevel, struct UWorld* World, uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetForceBlockFXAA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c7b0
	// Params: [ Num(2) Size(0x10) ]
	static void SetForceBlockFXAA(bool bBlock, struct UWorld* World);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetCurrentHapticPlayerType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9459f58
	// Params: [ Num(1) Size(0x4) ]
	static void SetCurrentHapticPlayerType(int32_t PlayerType);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetCurrentFrameRateLevel_FromLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9185edc
	// Params: [ Num(2) Size(0x5) ]
	static void SetCurrentFrameRateLevel_FromLua(int32_t InCurrentFrameRateLevel, uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetApmQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x90b132c
	// Params: [ Num(1) Size(0x1) ]
	static void SetApmQuality(uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.SetAntiAliasingState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x996317c
	// Params: [ Num(2) Size(0x10) ]
	static void SetAntiAliasingState(bool bOpen, struct UWorld* World);

	// Object: Function MFPluginWrapper.MFGPMAgent.ReportNetworkReconnectTimes
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95c6668
	// Params: [ Num(1) Size(0x4) ]
	static void ReportNetworkReconnectTimes(int32_t ReconnectTimes);

	// Object: Function MFPluginWrapper.MFGPMAgent.ReportMemInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b9f918
	// Params: [ Num(0) Size(0x0) ]
	static void ReportMemInfo();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReportGraphics2APM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d6b4
	// Params: [ Num(1) Size(0x1) ]
	static bool ReportGraphics2APM();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadSuperResolutionState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94e4190
	// Params: [ Num(1) Size(0x4) ]
	static int32_t ReadSuperResolutionState();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadResolutionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92e6de4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ReadResolutionType();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadPreferenceIndex
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94e43f8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t ReadPreferenceIndex();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadPerfSubsystemFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92c3354
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ReadPerfSubsystemFlag();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadMpeFrameInterpolation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93f8f88
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ReadMpeFrameInterpolation();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadGraphicStyleQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9327da8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ReadGraphicStyleQualityLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d4d8
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t ReadGraphicsQualityLevel(uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadFramerateModeSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ce4c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ReadFramerateModeSetting();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadFrameRateLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cf4c
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t ReadFrameRateLevel(uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadEnergyModeFlag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cf18
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ReadEnergyModeFlag();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadDeviceWorkloadLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94e26a8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t ReadDeviceWorkloadLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadDetailMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95548c0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t ReadDetailMode();

	// Object: Function MFPluginWrapper.MFGPMAgent.ReadAntiAliasingState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c9b0
	// Params: [ Num(2) Size(0x2) ]
	static bool ReadAntiAliasingState(uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.InitContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x935c2e8
	// Params: [ Num(0) Size(0x0) ]
	static void InitContext();

	// Object: Function MFPluginWrapper.MFGPMAgent.HapticStop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9432bac
	// Params: [ Num(0) Size(0x0) ]
	static void HapticStop();

	// Object: Function MFPluginWrapper.MFGPMAgent.HapticPlayWithFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c1f0
	// Params: [ Num(4) Size(0x1C) ]
	static void HapticPlayWithFile(struct FString heJson, int32_t Loop, int32_t Interval, int32_t Amplitude);

	// Object: Function MFPluginWrapper.MFGPMAgent.HapticPlay
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c350
	// Params: [ Num(4) Size(0x1C) ]
	static void HapticPlay(struct FString heJson, int32_t Loop, int32_t Interval, int32_t Amplitude);

	// Object: Function MFPluginWrapper.MFGPMAgent.GPUMorphTargetsBlackListHit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c58c
	// Params: [ Num(0) Size(0x0) ]
	static void GPUMorphTargetsBlackListHit();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetResolutionType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d6ec
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetResolutionType();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetMpeConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92baeec
	// Params: [ Num(3) Size(0xC) ]
	static int32_t GetMpeConfigValue(int32_t InDeviceRank, int32_t InTargetFrameRateLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.GetMinGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d680
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetMinGraphicsQualityLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetMaxGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d64c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetMaxGraphicsQualityLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetLowestLevelSuperResolutionInLobby
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c064
	// Params: [ Num(1) Size(0x1) ]
	static bool GetLowestLevelSuperResolutionInLobby();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetLowestLevelResolutionTypeInLobby
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c030
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetLowestLevelResolutionTypeInLobby();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetIsInLobby_FromLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8b6acd4
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsInLobby_FromLua();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetIs60FPSMpeEnabledOnLevel2Device
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8e973c0
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIs60FPSMpeEnabledOnLevel2Device();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetGraphicStyleQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8bba278
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetGraphicStyleQualityLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x996330c
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t GetGraphicsQualityLevel(int32_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.GetFrameRateLevelFromFrameRate
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cff4
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t GetFrameRateLevelFromFrameRate(int32_t InFrameRate);

	// Object: Function MFPluginWrapper.MFGPMAgent.GetFrameRateLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d1a8
	// Params: [ Num(2) Size(0x2) ]
	static uint8_t GetFrameRateLevel(uint8_t pageIndex);

	// Object: Function MFPluginWrapper.MFGPMAgent.GetFrameRateFromFrameRateLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9963264
	// Params: [ Num(2) Size(0x8) ]
	static int32_t GetFrameRateFromFrameRateLevel(uint8_t InFrameRateLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.GetForceBlockFXAA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c898
	// Params: [ Num(1) Size(0x1) ]
	static bool GetForceBlockFXAA();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c77c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetDeviceLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetDefaultGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d618
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetDefaultGraphicsQualityLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetDefaultFrameRateLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d09c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetDefaultFrameRateLevel();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetCurrentMpeFrameInterpolation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c1bc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetCurrentMpeFrameInterpolation();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetCanSkipNetTickConfigValue
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93351b0
	// Params: [ Num(3) Size(0xC) ]
	static int32_t GetCanSkipNetTickConfigValue(int32_t InDeviceRank, int32_t InTargetFrameRateLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.GetAntiAliasingState
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1cc0c
	// Params: [ Num(1) Size(0x1) ]
	static bool GetAntiAliasingState();

	// Object: Function MFPluginWrapper.MFGPMAgent.GetAndroidGPUFamily
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d720
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAndroidGPUFamily();

	// Object: Function MFPluginWrapper.MFGPMAgent.GameSwitchConfig
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c6e4
	// Params: [ Num(1) Size(0x8) ]
	static void GameSwitchConfig(struct UWorld* World);

	// Object: Function MFPluginWrapper.MFGPMAgent.FPS90BlackListHit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c638
	// Params: [ Num(1) Size(0x4) ]
	static void FPS90BlackListHit(int32_t TargetFrameLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.FPS120BlackListHit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c5a0
	// Params: [ Num(1) Size(0x4) ]
	static void FPS120BlackListHit(int32_t TargetFrameLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.ExecResolutionConfigConsoleVars
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91aaa00
	// Params: [ Num(0) Size(0x0) ]
	static void ExecResolutionConfigConsoleVars();

	// Object: Function MFPluginWrapper.MFGPMAgent.ExecConfigConsoleVars
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9177864
	// Params: [ Num(0) Size(0x0) ]
	static void ExecConfigConsoleVars();

	// Object: Function MFPluginWrapper.MFGPMAgent.DeviceLevelToGraphicsQualityLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d7bc
	// Params: [ Num(2) Size(0x5) ]
	static uint8_t DeviceLevelToGraphicsQualityLevel(int32_t DeviceLevel);

	// Object: Function MFPluginWrapper.MFGPMAgent.CheckHapticPlayerSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c4e4
	// Params: [ Num(2) Size(0x8) ]
	static int32_t CheckHapticPlayerSupport(int32_t HapticPlayerType);

	// Object: Function MFPluginWrapper.MFGPMAgent.CheckHapticAmplitudeSupport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c4b0
	// Params: [ Num(1) Size(0x4) ]
	static int32_t CheckHapticAmplitudeSupport();

	// Object: Function MFPluginWrapper.MFGPMAgent.CallSetFramePaceCommand_FromLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x928d0ac
	// Params: [ Num(1) Size(0x4) ]
	static void CallSetFramePaceCommand_FromLua(int32_t TheFramePace_Value);

	// Object: Function MFPluginWrapper.MFGPMAgent.BlackListHitReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1c6d0
	// Params: [ Num(0) Size(0x0) ]
	static void BlackListHitReport();

	// Object: Function MFPluginWrapper.MFGPMAgent.ApplyFramerateModeSetting
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ca5c
	// Params: [ Num(2) Size(0x10) ]
	static void ApplyFramerateModeSetting(uint8_t bEnabled, struct UWorld* World);
};

// Object: Class MFPluginWrapper.MFGPMHelperFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMFGPMHelperFunctionLibrary : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFGPMHelperFunctionLibrary, "MFGPMHelperFunctionLibrary")

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfoStringMap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x95c5abc
	// Params: [ Num(2) Size(0x60) ]
	static void TGPAUpdateGameInfoStringMap(struct FString Key, struct TMap<struct FString, struct FString> mapData);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfoIntString
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1eaf0
	// Params: [ Num(2) Size(0x18) ]
	static void TGPAUpdateGameInfoIntString(int32_t Key, struct FString Value);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfo2String
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91bac24
	// Params: [ Num(2) Size(0x20) ]
	static void TGPAUpdateGameInfo2String(struct FString Key, struct FString Value);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.TGPAUpdateGameInfo2Int
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ec30
	// Params: [ Num(2) Size(0x8) ]
	static void TGPAUpdateGameInfo2Int(int32_t Key, int32_t Value);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetVersionIden
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1edb0
	// Params: [ Num(1) Size(0x10) ]
	static void SetVersionIden(struct FString versionName);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetSwitcher
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8be2368
	// Params: [ Num(2) Size(0x8) ]
	static void SetSwitcher(int32_t switcher, int32_t places);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetServerInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x952e314
	// Params: [ Num(2) Size(0x20) ]
	static void SetServerInfo(struct FString zoneid, struct FString roomIp);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1f010
	// Params: [ Num(1) Size(0x4) ]
	static void SetQuality(int32_t Quality);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetOpenId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93fe68c
	// Params: [ Num(1) Size(0x10) ]
	static void SetOpenId(struct FString InOpenID);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetNextBootFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x99647f0
	// Params: [ Num(4) Size(0x19) ]
	static bool SetNextBootFile(int32_t Os, int32_t Step, struct FString Path);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetMatchId
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d9d8
	// Params: [ Num(1) Size(0x10) ]
	static void SetMatchId(struct FString MatchID);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.SetDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9844adc
	// Params: [ Num(1) Size(0x4) ]
	static void SetDeviceLevel(int32_t Level);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.ReportPayStep
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1e640
	// Params: [ Num(8) Size(0x42) ]
	static void ReportPayStep(int32_t Step, bool Result, int32_t ErrorCode, struct FString StepName, struct FString Key, struct FString Value, bool authorize, bool Finish);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.ReportLoginStep
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86c0910
	// Params: [ Num(10) Size(0xA2) ]
	static void ReportLoginStep(struct TMap<struct FString, struct FString> paramsMap, int32_t Step, int32_t Result, int32_t ErrorCode, struct FString StepName, struct FString StepComment, struct FString Key, struct FString Value, bool authorize, bool Finish);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.ReportEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x977d8e0
	// Params: [ Num(4) Size(0x80) ]
	static void ReportEvent(struct FString EventName, struct FString SpecialChannel, struct TMap<struct FString, struct FString> paramsMap, struct FString extraJson);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.ReleaseStepEventContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1e1e4
	// Params: [ Num(0) Size(0x0) ]
	static void ReleaseStepEventContext();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValueS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8d65d30
	// Params: [ Num(3) Size(0x30) ]
	static void PostValueS(struct FString Category, struct FString Key, struct FString InVal);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValueI
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9964988
	// Params: [ Num(3) Size(0x24) ]
	static void PostValueI(struct FString Category, struct FString Key, int32_t A);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValueF
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x857db60
	// Params: [ Num(3) Size(0x24) ]
	static void PostValueF(struct FString Category, struct FString Key, float A);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue3I
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1dbb4
	// Params: [ Num(5) Size(0x2C) ]
	static void PostValue3I(struct FString Category, struct FString Key, int32_t A, int32_t B, int32_t C);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue3F
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1decc
	// Params: [ Num(5) Size(0x2C) ]
	static void PostValue3F(struct FString Category, struct FString Key, float A, float B, float C);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue2I
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1dd60
	// Params: [ Num(4) Size(0x28) ]
	static void PostValue2I(struct FString Category, struct FString Key, int32_t A, int32_t B);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostValue2F
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1e078
	// Params: [ Num(4) Size(0x28) ]
	static void PostValue2F(struct FString Category, struct FString Key, float A, float B);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostStepEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1e1f8
	// Params: [ Num(9) Size(0x92) ]
	static void PostStepEvent(struct FString eventCategory, int32_t stepId, int32_t Status, int32_t Code, struct FString Msg, struct FString extraKey, struct TMap<struct FString, struct FString> paramsMap, bool authorize, bool Finish);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostNTL
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x86fc18c
	// Params: [ Num(1) Size(0x4) ]
	static void PostNTL(int32_t latency);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostFrame
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ed04
	// Params: [ Num(2) Size(0x5) ]
	static bool PostFrame(float DeltaTime);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostEventSS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ee54
	// Params: [ Num(2) Size(0x20) ]
	static void PostEventSS(struct FString Key, struct FString Value);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.PostEventIS
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x87ef8d0
	// Params: [ Num(2) Size(0x18) ]
	static void PostEventIS(int32_t Key, struct FString Info);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkStartUpFinish
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ef44
	// Params: [ Num(0) Size(0x0) ]
	static void MarkStartUpFinish();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkLevelLoadCompleted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8be7f88
	// Params: [ Num(0) Size(0x0) ]
	static void MarkLevelLoadCompleted();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkLevelLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9042dbc
	// Params: [ Num(1) Size(0x10) ]
	static void MarkLevelLoad(struct FString SceneName);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.MarkLevelFin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x87fc5d4
	// Params: [ Num(0) Size(0x0) ]
	static void MarkLevelFin();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.IsUseGPM
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1f144
	// Params: [ Num(1) Size(0x1) ]
	static bool IsUseGPM();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.IsGLDriverUpdated
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d91c
	// Params: [ Num(2) Size(0x11) ]
	static bool IsGLDriverUpdated(struct FString Filename);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.INTLReportFunnelCustomEventWithCustomField
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x8f15098
	// Params: [ Num(4) Size(0x78) ]
	static void INTLReportFunnelCustomEventWithCustomField(struct FString l1_event_name, struct FString l2_event_name, int32_t error_code, struct TMap<struct FString, struct FString> paramsMap);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.INTLReportFunnelCustomEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9420c8c
	// Params: [ Num(3) Size(0x24) ]
	static void INTLReportFunnelCustomEvent(struct FString l1_event_name, struct FString l2_event_name, int32_t error_code);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.INTLReportFunnel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x956b0c8
	// Params: [ Num(2) Size(0x14) ]
	static void INTLReportFunnel(struct FString StepComment, int32_t error_code);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.InitStepEventContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9052740
	// Params: [ Num(0) Size(0x0) ]
	static void InitStepEventContext();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.InitContext
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1f1b0
	// Params: [ Num(2) Size(0x14) ]
	static int32_t InitContext(struct FString AppID);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.GetSDKVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1f0a8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetSDKVersion();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.GetReportType
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1f17c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetReportType();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.GetDeviceLevel
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1dab0
	// Params: [ Num(3) Size(0x24) ]
	static int32_t GetDeviceLevel(struct FString ConfigName, struct FString FilePath);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.GetDataFromTGPA
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9019208
	// Params: [ Num(3) Size(0x30) ]
	static struct FString GetDataFromTGPA(struct FString Key, struct FString Value);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.GetAPMQuality
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1da7c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetAPMQuality();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.FlushPerfSightData
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1d908
	// Params: [ Num(0) Size(0x0) ]
	static void FlushPerfSightData();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.EndTupleWrap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x788f150
	// Params: [ Num(0) Size(0x0) ]
	static void EndTupleWrap();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.EndTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ef58
	// Params: [ Num(0) Size(0x0) ]
	static void EndTag();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.EndExclude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x933d5a8
	// Params: [ Num(0) Size(0x0) ]
	static void EndExclude();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.detectInTimeout
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x94e8ad8
	// Params: [ Num(0) Size(0x0) ]
	static void detectInTimeout();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.BeginTupleWrap
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x84a2f44
	// Params: [ Num(1) Size(0x10) ]
	static void BeginTupleWrap(struct FString Key);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.BeginTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1ef6c
	// Params: [ Num(1) Size(0x10) ]
	static void BeginTag(struct FString TagName);

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.BeginExclude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x933d5c4
	// Params: [ Num(0) Size(0x0) ]
	static void BeginExclude();

	// Object: Function MFPluginWrapper.MFGPMHelperFunctionLibrary.AddReportLoginStepParams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e1e944
	// Params: [ Num(2) Size(0x60) ]
	static void AddReportLoginStepParams(struct FString eventCategory, struct TMap<struct FString, struct FString> paramsMap);
};

// Object: Class MFPluginWrapper.MFHttpDNSService
// Size: 0x50 (Inherited: 0x40)
struct UMFHttpDNSService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFHttpDNSService, "MFHttpDNSService")

	uint8_t Pad_0x40[0x10]; // 0x40(0x10)

	// Object: Function MFPluginWrapper.MFHttpDNSService.QueryIpByHostAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2199c
	// Params: [ Num(1) Size(0x10) ]
	void QueryIpByHostAsync(struct FString Host);

	// Object: Function MFPluginWrapper.MFHttpDNSService.QueryIpByHost
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e21a50
	// Params: [ Num(2) Size(0x20) ]
	struct FString QueryIpByHost(struct FString Host);
};

// Object: Class MFPluginWrapper.MFIntlComplianceObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFIntlComplianceObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFIntlComplianceObserver, "MFIntlComplianceObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFIntlCustomerObserver
// Size: 0x40 (Inherited: 0x40)
struct UMFIntlCustomerObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFIntlCustomerObserver, "MFIntlCustomerObserver")
};

// Object: Class MFPluginWrapper.MFIntlFriendObserver
// Size: 0x50 (Inherited: 0x40)
struct UMFIntlFriendObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFIntlFriendObserver, "MFIntlFriendObserver")

	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: Class MFPluginWrapper.MFIntlLBSObserver
// Size: 0x48 (Inherited: 0x40)
struct UMFIntlLBSObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFIntlLBSObserver, "MFIntlLBSObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFIntlLoginObserver
// Size: 0x40 (Inherited: 0x40)
struct UMFIntlLoginObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFIntlLoginObserver, "MFIntlLoginObserver")
};

// Object: Class MFPluginWrapper.MFIntlWebViewObserver
// Size: 0x40 (Inherited: 0x40)
struct UMFIntlWebViewObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFIntlWebViewObserver, "MFIntlWebViewObserver")
};

// Object: Class MFPluginWrapper.MFIOSBackgroundDownload
// Size: 0x28 (Inherited: 0x28)
struct UMFIOSBackgroundDownload : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFIOSBackgroundDownload, "MFIOSBackgroundDownload")

	// Object: Function MFPluginWrapper.MFIOSBackgroundDownload.Stop
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21bbc
	// Params: [ Num(0) Size(0x0) ]
	static void Stop();

	// Object: Function MFPluginWrapper.MFIOSBackgroundDownload.Start
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21bd0
	// Params: [ Num(0) Size(0x0) ]
	static void Start();

	// Object: Function MFPluginWrapper.MFIOSBackgroundDownload.Setup
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21be4
	// Params: [ Num(2) Size(0x11) ]
	static bool Setup(struct FString AudioPath);

	// Object: Function MFPluginWrapper.MFIOSBackgroundDownload.EnableBackgroundAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21ba8
	// Params: [ Num(0) Size(0x0) ]
	static void EnableBackgroundAudio();

	// Object: Function MFPluginWrapper.MFIOSBackgroundDownload.DisableBackgroundAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21b94
	// Params: [ Num(0) Size(0x0) ]
	static void DisableBackgroundAudio();

	// Object: Function MFPluginWrapper.MFIOSBackgroundDownload.CanPlayBackgroundAudio
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x93f5fd8
	// Params: [ Num(1) Size(0x1) ]
	static bool CanPlayBackgroundAudio();
};

// Object: Class MFPluginWrapper.MFIOSRuntimeHelper
// Size: 0x28 (Inherited: 0x28)
struct UMFIOSRuntimeHelper : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFIOSRuntimeHelper, "MFIOSRuntimeHelper")

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.RequestUserAgent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21db8
	// Params: [ Num(0) Size(0x0) ]
	static void RequestUserAgent();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.RequestASAAttribution
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21dcc
	// Params: [ Num(0) Size(0x0) ]
	static void RequestASAAttribution();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.GetUserAgentError
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x935cbcc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetUserAgentError();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.GetUserAgent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x935ccdc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetUserAgent();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.GetUniversalLinkActivityID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21d84
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetUniversalLinkActivityID();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.GetUniversalLink
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21cd4
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetUniversalLink();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.GetASAInfoError
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x935cdec
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetASAInfoError();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.GetASAInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x935cefc
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetASAInfo();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.ClearUniversalLinkActivityID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21d70
	// Params: [ Num(0) Size(0x0) ]
	static void ClearUniversalLinkActivityID();

	// Object: Function MFPluginWrapper.MFIOSRuntimeHelper.ClearUniversalLink
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e21cc0
	// Params: [ Num(0) Size(0x0) ]
	static void ClearUniversalLink();
};

// Object: Class MFPluginWrapper.MFLBSObserver
// Size: 0x58 (Inherited: 0x40)
struct UMFLBSObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFLBSObserver, "MFLBSObserver")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)
	struct FMulticastInlineDelegate OnAuthorizationStatusChanged; // 0x48(0x10)
};

// Object: Class MFPluginWrapper.MFLBSService
// Size: 0x58 (Inherited: 0x40)
struct UMFLBSService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFLBSService, "MFLBSService")

	struct UMFPWObject* LBSObserver; // 0x40(0x8)
	struct FString region; // 0x48(0x10)

	// Object: Function MFPluginWrapper.MFLBSService.RequestIPInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e221a4
	// Params: [ Num(0) Size(0x0) ]
	static void RequestIPInfo();

	// Object: Function MFPluginWrapper.MFLBSService.QueryLocationPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e22110
	// Params: [ Num(0) Size(0x0) ]
	static void QueryLocationPermission();

	// Object: Function MFPluginWrapper.MFLBSService.QueryLocation
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e22190
	// Params: [ Num(0) Size(0x0) ]
	static void QueryLocation();

	// Object: Function MFPluginWrapper.MFLBSService.OnOHLocationPermissionRequestReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e21ee0
	// Params: [ Num(2) Size(0x20) ]
	void OnOHLocationPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<int32_t>& GrantResults);

	// Object: Function MFPluginWrapper.MFLBSService.OnIOSLocationPermissionRequestReturn
	// Flags: [Final|Native|Public]
	// Offset: 0x3e21e38
	// Params: [ Num(1) Size(0x4) ]
	void OnIOSLocationPermissionRequestReturn(int32_t AuthorizationStatus);

	// Object: Function MFPluginWrapper.MFLBSService.OnAndroidLocationPermissionRequestReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e21ff8
	// Params: [ Num(2) Size(0x20) ]
	void OnAndroidLocationPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults);

	// Object: Function MFPluginWrapper.MFLBSService.CheckLocationServices
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e22124
	// Params: [ Num(1) Size(0x1) ]
	static bool CheckLocationServices();

	// Object: Function MFPluginWrapper.MFLBSService.CheckLocationPermission
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2215c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t CheckLocationPermission();
};

// Object: Class MFPluginWrapper.MFMidasObserver
// Size: 0x98 (Inherited: 0x40)
struct UMFMidasObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFMidasObserver, "MFMidasObserver")

	uint8_t Pad_0x40[0x58]; // 0x40(0x58)
};

// Object: Class MFPluginWrapper.MFMidasService
// Size: 0xA0 (Inherited: 0x40)
struct UMFMidasService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFMidasService, "MFMidasService")

	uint8_t Pad_0x40[0x48]; // 0x40(0x48)
	struct UMFMidasObserver* MFMidasObserver; // 0x88(0x8)
	struct UMFCTIPayObserver* MFCTIPayObserver; // 0x90(0x8)
	uint8_t Pad_0x98[0x8]; // 0x98(0x8)

	// Object: Function MFPluginWrapper.MFMidasService.PayUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e22ab0
	// Params: [ Num(3) Size(0x30) ]
	void PayUrl(struct FString PayInfo, struct FString PayChannel, struct FString CallBackData);

	// Object: Function MFPluginWrapper.MFMidasService.PayMonthCard
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e22dfc
	// Params: [ Num(9) Size(0x69) ]
	void PayMonthCard(struct FString ProductId, int32_t price, int32_t Time, struct FString CallBackData, struct FString ServiceName, struct FString ServiceCode, struct FString BasePlanId, struct FString GWOfferId, bool bAutoPay);

	// Object: Function MFPluginWrapper.MFMidasService.PayH5
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e22cfc
	// Params: [ Num(2) Size(0x20) ]
	void PayH5(struct FString charac_id, struct FString charac_name);

	// Object: Function MFPluginWrapper.MFMidasService.PayGoods
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e230f8
	// Params: [ Num(9) Size(0x70) ]
	void PayGoods(struct FString GoodsTokenUrl, int32_t GoodsPrice, int32_t GoodsNum, struct FString CallBackData, int32_t zoneid, struct FString OfferId, struct FString pf, struct FString PfExt, struct FString ChannelExtras);

	// Object: Function MFPluginWrapper.MFMidasService.PayCoin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e233e8
	// Params: [ Num(3) Size(0x28) ]
	void PayCoin(struct FString ProductId, int32_t GoodsNum, struct FString CallBackData);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasReprovideFinished
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e22560
	// Params: [ Num(1) Size(0x10) ]
	void OnMidasReprovideFinished(struct FString resultJson);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasPayFinished
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e2261c
	// Params: [ Num(5) Size(0x48) ]
	void OnMidasPayFinished(int32_t ResultCode, struct FString resultInerCode, struct FString realSaveNum, struct FString resultMsg, struct FString CallBackData);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasOvertime
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e22274
	// Params: [ Num(1) Size(0x1) ]
	void OnMidasOvertime(bool overtimeState);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasLoginExpired
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e227fc
	// Params: [ Num(0) Size(0x0) ]
	void OnMidasLoginExpired();

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasInitFinished
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e22818
	// Params: [ Num(1) Size(0x10) ]
	void OnMidasInitFinished(struct FString resultJson);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasGetLocalPrice
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e224a4
	// Params: [ Num(1) Size(0x10) ]
	void OnMidasGetLocalPrice(struct FString Result);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasGetIntroPrice
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e223e8
	// Params: [ Num(1) Size(0x10) ]
	void OnMidasGetIntroPrice(struct FString Result);

	// Object: Function MFPluginWrapper.MFMidasService.OnMidasGetInfoFinished
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e2232c
	// Params: [ Num(1) Size(0x10) ]
	void OnMidasGetInfoFinished(struct FString Result);

	// Object: Function MFPluginWrapper.MFMidasService.MidasPay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e22bfc
	// Params: [ Num(2) Size(0x20) ]
	void MidasPay(struct FString PayInfo, struct FString CallBackData);

	// Object: Function MFPluginWrapper.MFMidasService.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9331d34
	// Params: [ Num(6) Size(0x29) ]
	bool Init(bool IsSandBox, bool EnableLog, int32_t GoodsZoneId, struct FString InPayChannel, struct FString InOfferId);

	// Object: Function MFPluginWrapper.MFMidasService.GetLocalPriceInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e229a4
	// Params: [ Num(2) Size(0x20) ]
	void GetLocalPriceInfo(const struct TArray<struct FString>& ProductIds, struct FString ProductType);

	// Object: Function MFPluginWrapper.MFMidasService.GetIntroPriceInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e228e8
	// Params: [ Num(1) Size(0x10) ]
	void GetIntroPriceInfo(const struct TArray<struct FString>& ProductIds);

	// Object: Function MFPluginWrapper.MFMidasService.GetCountryCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e221d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCountryCode();

	// Object: Function MFPluginWrapper.MFMidasService.GetChargeInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e228d4
	// Params: [ Num(0) Size(0x0) ]
	void GetChargeInfo();
};

// Object: Class MFPluginWrapper.MFMNAService
// Size: 0x50 (Inherited: 0x40)
struct UMFMNAService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFMNAService, "MFMNAService")

	struct UUserWidget* StartingWidgetClass; // 0x40(0x8)
	struct UUserWidget* CurrentWidget; // 0x48(0x8)

	// Object: Function MFPluginWrapper.MFMNAService.TransportInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24168
	// Params: [ Num(0) Size(0x0) ]
	void TransportInfo();

	// Object: Function MFPluginWrapper.MFMNAService.StartSpeedEnterMapLoading
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97d1f14
	// Params: [ Num(0) Size(0x0) ]
	void StartSpeedEnterMapLoading();

	// Object: Function MFPluginWrapper.MFMNAService.StartSpeed
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x982591c
	// Params: [ Num(2) Size(0x14) ]
	void StartSpeed(struct FString VipIP, int32_t VipPort);

	// Object: Function MFPluginWrapper.MFMNAService.SetZoneId
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9336408
	// Params: [ Num(1) Size(0x4) ]
	void SetZoneId(int32_t zoneid);

	// Object: Function MFPluginWrapper.MFMNAService.SetUserName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x945ad7c
	// Params: [ Num(2) Size(0x18) ]
	void SetUserName(int32_t channelType, struct FString Openid);

	// Object: Function MFPluginWrapper.MFMNAService.SetPvpSpeedIp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24244
	// Params: [ Num(2) Size(0x14) ]
	void SetPvpSpeedIp(struct FString VipIP, int32_t VipPort);

	// Object: Function MFPluginWrapper.MFMNAService.SetObserver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x93946ec
	// Params: [ Num(2) Size(0x18) ]
	void SetObserver(struct FString Tag, struct UMFMNAService* InClass);

	// Object: Function MFPluginWrapper.MFMNAService.SetDualTunnelBindNetType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x98077bc
	// Params: [ Num(2) Size(0x5) ]
	void SetDualTunnelBindNetType(int32_t bindNetType, bool useSaveFlow);

	// Object: Function MFPluginWrapper.MFMNAService.SetControlDomain
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92fb9c4
	// Params: [ Num(2) Size(0x18) ]
	void SetControlDomain(struct FString ControlDomain, int64_t ControlPort);

	// Object: Function MFPluginWrapper.MFMNAService.QueryPreciseKartin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e23fd8
	// Params: [ Num(3) Size(0x20) ]
	void QueryPreciseKartin(int64_t curServTime, int64_t pvpDurationTime, struct FString triggerDelay);

	// Object: Function MFPluginWrapper.MFMNAService.QueryKartin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2417c
	// Params: [ Num(1) Size(0x10) ]
	void QueryKartin(struct FString Tag);

	// Object: Function MFPluginWrapper.MFMNAService.OnWebViewBackCall
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnWebViewBackCall(int32_t methodId, int32_t MsgType, struct FString MsgJsonData);

	// Object: Function MFPluginWrapper.MFMNAService.OnUdppingWorkTestCall
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0xC) ]
	void OnUdppingWorkTestCall(int32_t flag, int32_t jump_network, int32_t jump_signal);

	// Object: Function MFPluginWrapper.MFMNAService.OnStartSpeedCall
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	void OnStartSpeedCall(int32_t Type, int32_t flag, struct FString Desc);

	// Object: Function MFPluginWrapper.MFMNAService.OnNetWorkUDPPingCall
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void OnNetWorkUDPPingCall(struct FString bisTimeOut, struct FString UdpPing);

	// Object: Function MFPluginWrapper.MFMNAService.OnNetWorkTestCall
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(15) Size(0x70) ]
	void OnNetWorkTestCall(int32_t flag, int32_t jump_network, int32_t jump_signal, int32_t jump_direct, int32_t direct_status, struct FString direct_desc, int32_t jump_export, int32_t export_status, struct FString export_desc, int32_t jump_terminal, int32_t terminal_status, struct FString terminal_desc, int32_t jump_router, int32_t router_status, struct FString router_desc);

	// Object: Function MFPluginWrapper.MFMNAService.IsQOSWork
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24230
	// Params: [ Num(0) Size(0x0) ]
	void IsQOSWork();

	// Object: Function MFPluginWrapper.MFMNAService.IsAnyVPNOpen
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9372bb8
	// Params: [ Num(1) Size(0x1) ]
	bool IsAnyVPNOpen();

	// Object: Function MFPluginWrapper.MFMNAService.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9438a70
	// Params: [ Num(1) Size(0x10) ]
	void Init(struct FString QQAppID);

	// Object: Function MFPluginWrapper.MFMNAService.GoFront
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95e32e4
	// Params: [ Num(0) Size(0x0) ]
	void GoFront();

	// Object: Function MFPluginWrapper.MFMNAService.GoBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95e34f0
	// Params: [ Num(0) Size(0x0) ]
	void GoBack();

	// Object: Function MFPluginWrapper.MFMNAService.GetTelephonyType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e23afc
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTelephonyType();

	// Object: Function MFPluginWrapper.MFMNAService.GetStaticMNAService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e24430
	// Params: [ Num(1) Size(0x8) ]
	static struct UMFMNAService* GetStaticMNAService();

	// Object: Function MFPluginWrapper.MFMNAService.GetNetworkType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97659a8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNetworkType();

	// Object: Function MFPluginWrapper.MFMNAService.GetIpGroupDelaysUseTCPUnlimited
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e23b30
	// Params: [ Num(5) Size(0x2C) ]
	void GetIpGroupDelaysUseTCPUnlimited(struct FString Tag, struct FString ipPortGroup, int32_t intervalMills, int32_t Count, int32_t pkgTimeoutMills);

	// Object: Function MFPluginWrapper.MFMNAService.GetIpGroupDelaysUseTCP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e23d84
	// Params: [ Num(5) Size(0x2C) ]
	void GetIpGroupDelaysUseTCP(struct FString Tag, struct FString ipPortGroup, int32_t intervalMills, int32_t Count, int32_t pkgTimeoutMills);

	// Object: Function MFPluginWrapper.MFMNAService.EndSpeedAndReportInformation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x982ea80
	// Params: [ Num(3) Size(0x28) ]
	void EndSpeedAndReportInformation(struct FString vip, int32_t Port, struct FString InformationGroup);

	// Object: Function MFPluginWrapper.MFMNAService.ChangeMenuWidget
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24388
	// Params: [ Num(1) Size(0x8) ]
	void ChangeMenuWidget(struct UUserWidget* NewWidgetClass);

	// Object: Function MFPluginWrapper.MFMNAService.AddServiceByClass
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x955c810
	// Params: [ Num(2) Size(0x10) ]
	struct UMFMNAService* AddServiceByClass(struct UMFMNAService* InClass);
};

// Object: Class MFPluginWrapper.MFMountPakService
// Size: 0xE0 (Inherited: 0x40)
struct UMFMountPakService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFMountPakService, "MFMountPakService")

	uint8_t Pad_0x40[0xA0]; // 0x40(0xA0)

	// Object: Function MFPluginWrapper.MFMountPakService.UnmountMapWithLock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x944ea68
	// Params: [ Num(1) Size(0x10) ]
	void UnmountMapWithLock(struct FString ExcludedMapName);

	// Object: Function MFPluginWrapper.MFMountPakService.UnmountMap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void UnmountMap(struct FString MapName);

	// Object: Function MFPluginWrapper.MFMountPakService.OnPrePreLoadMap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnPrePreLoadMap(struct FString MapName);

	// Object: Function MFPluginWrapper.MFMountPakService.OnPostLoadMap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void OnPostLoadMap(struct FString MapName);

	// Object: Function MFPluginWrapper.MFMountPakService.OnPakFileMissing
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x14) ]
	void OnPakFileMissing(struct FString MissingFile, int32_t PakNum);

	// Object: Function MFPluginWrapper.MFMountPakService.MountMapWithLock
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e246cc
	// Params: [ Num(1) Size(0x10) ]
	void MountMapWithLock(struct FString MapName);

	// Object: Function MFPluginWrapper.MFMountPakService.MountMap
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void MountMap(struct FString MapName);
};

// Object: Class MFPluginWrapper.MFPandoraService
// Size: 0x70 (Inherited: 0x40)
struct UMFPandoraService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFPandoraService, "MFPandoraService")

	struct FMulticastInlineDelegate OnPLuaTimerTickStartDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnPLuaTimerTickEndDelegate; // 0x50(0x10)
	uint8_t Pad_0x60[0x10]; // 0x60(0x10)

	// Object: Function MFPluginWrapper.MFPandoraService.TdmReporterDelegate
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x68) ]
	void TdmReporterDelegate(int32_t srcID, struct FString EventName, struct TMap<struct FString, struct FString>& eventData);

	// Object: Function MFPluginWrapper.MFPandoraService.ShowItemTips
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void ShowItemTips(struct UCanvasPanel* anchor, struct FString itemID);

	// Object: Function MFPluginWrapper.MFPandoraService.ShowItemIcon
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	void ShowItemIcon(struct UImage* Image, struct FString itemID);

	// Object: Function MFPluginWrapper.MFPandoraService.ShowItemEx
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x1C) ]
	void ShowItemEx(struct UCanvasPanel* anchor, struct FString itemID, int32_t itemCnt);

	// Object: Function MFPluginWrapper.MFPandoraService.SetUserData
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x721b8fc
	// Params: [ Num(1) Size(0x50) ]
	void SetUserData(const struct TMap<struct FString, struct FString>& userdata);

	// Object: Function MFPluginWrapper.MFPandoraService.SetSDKVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x919bb40
	// Params: [ Num(1) Size(0x4) ]
	void SetSDKVersion(int32_t InVersion);

	// Object: Function MFPluginWrapper.MFPandoraService.SetSDKCoreDataPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24d0c
	// Params: [ Num(1) Size(0x10) ]
	void SetSDKCoreDataPath(struct FString InFilePath);

	// Object: Function MFPluginWrapper.MFPandoraService.SetRegistDate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9389614
	// Params: [ Num(1) Size(0x10) ]
	void SetRegistDate(struct FString Date);

	// Object: Function MFPluginWrapper.MFPandoraService.SetFont
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24ea4
	// Params: [ Num(2) Size(0x20) ]
	void SetFont(struct FString FontName, struct FString FontPath);

	// Object: Function MFPluginWrapper.MFPandoraService.RemoveUserWidgetFromGame
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x2C) ]
	void RemoveUserWidgetFromGame(struct UUserWidget* Widget, struct FString panelName, struct FString anchorID, int32_t Type);

	// Object: Function MFPluginWrapper.MFPandoraService.PlaySound
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void PlaySound(struct FString ID);

	// Object: Function MFPluginWrapper.MFPandoraService.PdrPanic
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x10) ]
	void PdrPanic(struct FString InErrorMsg);

	// Object: Function MFPluginWrapper.MFPandoraService.PandoraLoadBrush
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0xA8) ]
	void PandoraLoadBrush(struct UObject* Obj, struct FSlateBrush& Brush, struct FString InPath);

	// Object: Function MFPluginWrapper.MFPandoraService.PandoraCreateUWidget
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x18) ]
	struct UWidget* PandoraCreateUWidget(struct FString InPath);

	// Object: DelegateFunction MFPluginWrapper.MFPandoraService.OnPLuaTimerTickStart__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnPLuaTimerTickStart__DelegateSignature(int32_t timerID);

	// Object: DelegateFunction MFPluginWrapper.MFPandoraService.OnPLuaTimerTickEnd__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x4) ]
	void OnPLuaTimerTickEnd__DelegateSignature(int32_t timerID);

	// Object: Function MFPluginWrapper.MFPandoraService.Jump
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(2) Size(0x20) ]
	void Jump(struct FString Type, struct FString Content);

	// Object: Function MFPluginWrapper.MFPandoraService.IsExpClient
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24fa4
	// Params: [ Num(1) Size(0x1) ]
	bool IsExpClient();

	// Object: Function MFPluginWrapper.MFPandoraService.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8e78048
	// Params: [ Num(3) Size(0xD) ]
	bool Init(struct UGameInstance* InGI, int32_t Env);

	// Object: Function MFPluginWrapper.MFPandoraService.GetPdrLuaCallHistiry
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e24c70
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPdrLuaCallHistiry();

	// Object: Function MFPluginWrapper.MFPandoraService.GetCurrency
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x50) ]
	void GetCurrency(struct TMap<struct FString, struct FString>& results);

	// Object: Function MFPluginWrapper.MFPandoraService.GetAccountToken
	// Flags: [Event|Public|HasOutParms|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(1) Size(0x50) ]
	void GetAccountToken(struct TMap<struct FString, struct FString>& results);

	// Object: Function MFPluginWrapper.MFPandoraService.EnableTimerDelegate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e24bc0
	// Params: [ Num(1) Size(0x1) ]
	void EnableTimerDelegate(bool Enable);

	// Object: Function MFPluginWrapper.MFPandoraService.DoCmdWithParams
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e24dc0
	// Params: [ Num(1) Size(0x50) ]
	void DoCmdWithParams(const struct TMap<struct FString, struct FString>& Cmd);

	// Object: Function MFPluginWrapper.MFPandoraService.DoCmd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x8bca618
	// Params: [ Num(1) Size(0x10) ]
	void DoCmd(struct FString Cmd);

	// Object: Function MFPluginWrapper.MFPandoraService.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95d2a00
	// Params: [ Num(1) Size(0x1) ]
	bool Close();

	// Object: Function MFPluginWrapper.MFPandoraService.CallGameCmd
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(3) Size(0x18) ]
	int32_t CallGameCmd(struct FString InCmd, int32_t Type);

	// Object: Function MFPluginWrapper.MFPandoraService.AddUserWidgetToGame
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x5d8cbc8
	// Params: [ Num(4) Size(0x2C) ]
	void AddUserWidgetToGame(struct UUserWidget* Widget, struct FString panelName, struct FString anchorID, int32_t Type);
};

// Object: Class MFPluginWrapper.MFPlayerSystemSetting
// Size: 0x28 (Inherited: 0x28)
struct UMFPlayerSystemSetting : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFPlayerSystemSetting, "MFPlayerSystemSetting")

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.UpdatePlayerSystemSettingConfigFromLua
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x913b2d4
	// Params: [ Num(4) Size(0x22) ]
	static void UpdatePlayerSystemSettingConfigFromLua(struct FString CVarName, struct FString CVarValue, uint8_t CVarEnv, uint8_t LowestGraphicsNeed);

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.UpdateDefaultConsoleVarsInner
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e286fc
	// Params: [ Num(1) Size(0x1) ]
	static void UpdateDefaultConsoleVarsInner(uint8_t SceneEnv);

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.UpdateDefaultConsoleVarsBeforePlayerSetting
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e28794
	// Params: [ Num(0) Size(0x0) ]
	static void UpdateDefaultConsoleVarsBeforePlayerSetting();

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.InitPlayerSystemSettingConfig
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e287a8
	// Params: [ Num(0) Size(0x0) ]
	static void InitPlayerSystemSettingConfig();

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.ExecThisConsoleVar
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x3e28568
	// Params: [ Num(1) Size(0x28) ]
	static void ExecThisConsoleVar(const struct FSettingValueInfo& SettingValueInfo);

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.ExecConsoleVarsInLobby
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e286e8
	// Params: [ Num(0) Size(0x0) ]
	static void ExecConsoleVarsInLobby();

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.ExecConsoleVarsInBattle
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e286d4
	// Params: [ Num(0) Size(0x0) ]
	static void ExecConsoleVarsInBattle();

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.ExecConsoleVarsCommon
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e286c0
	// Params: [ Num(0) Size(0x0) ]
	static void ExecConsoleVarsCommon();

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.ExecConsoleVars
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e28628
	// Params: [ Num(1) Size(0x1) ]
	static void ExecConsoleVars(uint8_t SceneEnv);

	// Object: Function MFPluginWrapper.MFPlayerSystemSetting.CanExecuateInCurrentQualitySetting
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x3e28490
	// Params: [ Num(2) Size(0x29) ]
	static bool CanExecuateInCurrentQualitySetting(const struct FSettingValueInfo& SettingValueInfo);
};

// Object: Class MFPluginWrapper.MFPWGetPluginManagerInterface
// Size: 0x28 (Inherited: 0x28)
struct IMFPWGetPluginManagerInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IMFPWGetPluginManagerInterface, "MFPWGetPluginManagerInterface")
};

// Object: Class MFPluginWrapper.MFPWMessageHeader
// Size: 0x58 (Inherited: 0x28)
struct UMFPWMessageHeader : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFPWMessageHeader, "MFPWMessageHeader")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class MFPluginWrapper.MFPWPluginManager
// Size: 0x98 (Inherited: 0x28)
struct UMFPWPluginManager : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFPWPluginManager, "MFPWPluginManager")

	struct TMap<struct UMFPWPlugin*, struct UMFPWPlugin*> PluginMap; // 0x28(0x50)
	uint8_t Pad_0x78[0x20]; // 0x78(0x20)

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceIF
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2aa6c
	// Params: [ Num(6) Size(0x58) ]
	static struct FText TextFormatInterfaceIF(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, float Parm4);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI3
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2b6dc
	// Params: [ Num(8) Size(0x70) ]
	static struct FText TextFormatInterfaceI3(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, int32_t Parm4, struct FString Parm5, int32_t Parm6);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI2f
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e29f64
	// Params: [ Num(8) Size(0x70) ]
	static struct FText TextFormatInterfaceI2f(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, int32_t Parm4, struct FString Parm5, float Parm6);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2bacc
	// Params: [ Num(6) Size(0x58) ]
	static struct FText TextFormatInterfaceI2(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, int32_t Parm4);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2bde4
	// Params: [ Num(4) Size(0x40) ]
	static struct FText TextFormatInterfaceI(struct FString FormatString, struct FString Parm1, int32_t Parm2);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceFI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2a74c
	// Params: [ Num(6) Size(0x58) ]
	static struct FText TextFormatInterfaceFI(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, int32_t Parm4);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF3
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2ad84
	// Params: [ Num(8) Size(0x70) ]
	static struct FText TextFormatInterfaceF3(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, float Parm4, struct FString Parm5, float Parm6);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF2I
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2a354
	// Params: [ Num(8) Size(0x70) ]
	static struct FText TextFormatInterfaceF2I(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, float Parm4, struct FString Parm5, int32_t Parm6);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF2
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2b17c
	// Params: [ Num(6) Size(0x58) ]
	static struct FText TextFormatInterfaceF2(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, float Parm4);

	// Object: Function MFPluginWrapper.MFPWPluginManager.TextFormatInterfaceF
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2b49c
	// Params: [ Num(4) Size(0x40) ]
	static struct FText TextFormatInterfaceF(struct FString FormatString, struct FString Parm1, float Parm2);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewWithoutEncode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2c5a0
	// Params: [ Num(2) Size(0x11) ]
	static void OpenWebViewWithoutEncode(struct FString URL, bool isFullScreen);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewWithJson
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d514
	// Params: [ Num(6) Size(0x2A) ]
	static void OpenWebViewWithJson(struct FString URL, int32_t InOrientation, bool bEncodeUrl, struct FString ExJson, bool bFullScreen, bool bSystemBrowserEnable);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewWithEncodeDebug
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d090
	// Params: [ Num(2) Size(0x14) ]
	static void OpenWebViewWithEncodeDebug(struct FString URL, int32_t InOrientation);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewWithEncode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d3e0
	// Params: [ Num(2) Size(0x14) ]
	static void OpenWebViewWithEncode(struct FString URL, int32_t InOrientation);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewOSBrowser
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d1c4
	// Params: [ Num(5) Size(0x17) ]
	static void OpenWebViewOSBrowser(struct FString URL, int32_t InOrientation, bool FullScreen, bool EncryptEnable, bool SystemBrowser);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewInterfaceRimless
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2cb78
	// Params: [ Num(8) Size(0x1A) ]
	static void OpenWebViewInterfaceRimless(struct FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView, bool bEnableToolBar, bool bPortraitToolBarHiddenEnable, bool bLandscapeToolBarHiddenEnable);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewInterfaceAllParams
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2c6e4
	// Params: [ Num(12) Size(0x30) ]
	static void OpenWebViewInterfaceAllParams(struct FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView, bool bEnableToolBar, bool bPortraitToolBarHiddenEnable, bool bLandscapeToolBarHiddenEnable, bool EncryptEnable, bool isFullScreen, bool bExternal, struct FString OverseaExtra);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewInterface
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2ce74
	// Params: [ Num(5) Size(0x17) ]
	static void OpenWebViewInterface(struct FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewEx
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d7c8
	// Params: [ Num(3) Size(0x15) ]
	static void OpenWebViewEx(struct FString URL, int32_t InOrientation, bool bEncodeUrl);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebViewCustomerService
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2c25c
	// Params: [ Num(5) Size(0x50) ]
	static void OpenWebViewCustomerService(struct FString ScenceId, struct FString GameZone, struct FString ZoneName, struct FString RoleName, struct FString roleID);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenWebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d960
	// Params: [ Num(1) Size(0x10) ]
	static void OpenWebView(struct FString URL);

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenRateWindow
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2d94c
	// Params: [ Num(0) Size(0x0) ]
	static void OpenRateWindow();

	// Object: Function MFPluginWrapper.MFPWPluginManager.OpenGetIntelSDKVersion
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2da54
	// Params: [ Num(1) Size(0x10) ]
	static struct FString OpenGetIntelSDKVersion();

	// Object: Function MFPluginWrapper.MFPWPluginManager.OnTssServerLogin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x952554c
	// Params: [ Num(5) Size(0x30) ]
	static void OnTssServerLogin(struct FString feature_name, int32_t feature_name_len, struct FString Data, int32_t data_len, int32_t data_crc);

	// Object: Function MFPluginWrapper.MFPWPluginManager.ObjLeakCheck
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x3e2dba0
	// Params: [ Num(2) Size(0x18) ]
	void ObjLeakCheck(int32_t nParam, struct FString strParam);

	// Object: Function MFPluginWrapper.MFPWPluginManager.NicoTest2
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x3e2dce8
	// Params: [ Num(3) Size(0x1C) ]
	void NicoTest2(int32_t nParam, struct FString strParam, int32_t nParam2);

	// Object: Function MFPluginWrapper.MFPWPluginManager.NicoTest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x3e2de70
	// Params: [ Num(1) Size(0x4) ]
	void NicoTest(int32_t nParam);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsTimespan
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e29214
	// Params: [ Num(5) Size(0x38) ]
	static struct FText L10NAsTimespan(struct FString Type, int32_t Hour, int32_t Minute, int32_t Second);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e297f4
	// Params: [ Num(10) Size(0x58) ]
	static struct FText L10NAsTime(struct FString TimeZone, struct FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsNumberInt
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x93c9954
	// Params: [ Num(2) Size(0x20) ]
	static struct FText L10NAsNumberInt(int64_t InputNumber);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsNumberFloatWithFractionalDigits
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e29088
	// Params: [ Num(4) Size(0x28) ]
	static struct FText L10NAsNumberFloatWithFractionalDigits(double InputNumber, int32_t MinFractionalDigits, int32_t MaxFractionalDigits);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsNumberFloat
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8ae5100
	// Params: [ Num(2) Size(0x20) ]
	static struct FText L10NAsNumberFloat(double InputNumber);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsDateTime
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e2943c
	// Params: [ Num(10) Size(0x58) ]
	static struct FText L10NAsDateTime(struct FString TimeZone, struct FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);

	// Object: Function MFPluginWrapper.MFPWPluginManager.L10NAsDate
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x3e29bac
	// Params: [ Num(10) Size(0x58) ]
	static struct FText L10NAsDate(struct FString TimeZone, struct FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond);

	// Object: Function MFPluginWrapper.MFPWPluginManager.IsEmulator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2e05c
	// Params: [ Num(1) Size(0x1) ]
	static bool IsEmulator();

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetXWID
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2daf0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetXWID();

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetMSDKEncodeUrl
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x92d5014
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetMSDKEncodeUrl(struct FString URL);

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetMFPWPluginByClass
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e288b0
	// Params: [ Num(3) Size(0x18) ]
	static struct UMFPWPlugin* GetMFPWPluginByClass(struct UObject* WorldContextObject, struct UMFPWPlugin* InClass);

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetIsCloudEmulator
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x9057a20
	// Params: [ Num(1) Size(0x1) ]
	static bool GetIsCloudEmulator();

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetEmulatorName
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2dfc0
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetEmulatorName();

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetDeviceId
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x3e2db8c
	// Params: [ Num(0) Size(0x0) ]
	void GetDeviceId();

	// Object: Function MFPluginWrapper.MFPWPluginManager.GetAdultType
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x8ce6d50
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetAdultType();

	// Object: Function MFPluginWrapper.MFPWPluginManager.GenerateGuid
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x91b5c04
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GenerateGuid();

	// Object: Function MFPluginWrapper.MFPWPluginManager.CustomPostValueS
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x3e28c34
	// Params: [ Num(3) Size(0x30) ]
	static void CustomPostValueS(struct FString Category, struct FString Key, struct FString InVal);

	// Object: Function MFPluginWrapper.MFPWPluginManager.CustomPostValueI
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x3e28d70
	// Params: [ Num(3) Size(0x24) ]
	static void CustomPostValueI(struct FString Category, struct FString Key, int32_t A);

	// Object: Function MFPluginWrapper.MFPWPluginManager.CustomPostValueF
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x3e28ea0
	// Params: [ Num(3) Size(0x24) ]
	static void CustomPostValueF(struct FString Category, struct FString Key, float A);

	// Object: Function MFPluginWrapper.MFPWPluginManager.CustomEndTupleWrap
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x3e28fd0
	// Params: [ Num(0) Size(0x0) ]
	static void CustomEndTupleWrap();

	// Object: Function MFPluginWrapper.MFPWPluginManager.CustomBeginTupleWrap
	// Flags: [Final|Exec|Native|Static|Public]
	// Offset: 0x3e28fe4
	// Params: [ Num(1) Size(0x10) ]
	static void CustomBeginTupleWrap(struct FString Category);

	// Object: Function MFPluginWrapper.MFPWPluginManager.CppVMTest
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x3e2df18
	// Params: [ Num(1) Size(0x4) ]
	void CppVMTest(int32_t nParam);

	// Object: Function MFPluginWrapper.MFPWPluginManager.CloseWebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2c154
	// Params: [ Num(0) Size(0x0) ]
	static void CloseWebView();

	// Object: Function MFPluginWrapper.MFPWPluginManager.ChangeWebView
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2c168
	// Params: [ Num(1) Size(0x10) ]
	static void ChangeWebView(struct FString Json);

	// Object: Function MFPluginWrapper.MFPWPluginManager.AddFriend
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2c024
	// Params: [ Num(3) Size(0x28) ]
	static void AddFriend(struct FString Openid, struct UObject* WorldContextObject, struct FString Channel);
};

// Object: Class MFPluginWrapper.MFTGPAPredownload
// Size: 0x28 (Inherited: 0x28)
struct UMFTGPAPredownload : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UMFTGPAPredownload, "MFTGPAPredownload")

	// Object: Function MFPluginWrapper.MFTGPAPredownload.AsyncUnzipFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2e280
	// Params: [ Num(3) Size(0x30) ]
	static void AsyncUnzipFiles(struct FString InDstDir, struct FString InSrcDir, struct TArray<struct FString> InFileList);

	// Object: Function MFPluginWrapper.MFTGPAPredownload.AsyncMoveFiles
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e2e3dc
	// Params: [ Num(3) Size(0x30) ]
	static void AsyncMoveFiles(struct FString InDstDir, struct FString InSrcDir, struct TArray<struct FString> FileList);
};

// Object: Class MFPluginWrapper.MFTPioneerService
// Size: 0x40 (Inherited: 0x40)
struct UMFTPioneerService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFTPioneerService, "MFTPioneerService")

	// Object: Function MFPluginWrapper.MFTPioneerService.StartSDK
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90cfddc
	// Params: [ Num(0) Size(0x0) ]
	void StartSDK();

	// Object: Function MFPluginWrapper.MFTPioneerService.StartMidasPay
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2e540
	// Params: [ Num(2) Size(0x11) ]
	bool StartMidasPay(struct FString InJsonStr);

	// Object: Function MFPluginWrapper.MFTPioneerService.SendGameEvent
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2e654
	// Params: [ Num(1) Size(0x10) ]
	void SendGameEvent(struct FString Data);

	// Object: Function MFPluginWrapper.MFTPioneerService.LoginWith
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2e76c
	// Params: [ Num(1) Size(0x10) ]
	void LoginWith(struct FString Type);

	// Object: Function MFPluginWrapper.MFTPioneerService.IsCloudGameEnv
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9175fe4
	// Params: [ Num(1) Size(0x1) ]
	bool IsCloudGameEnv();

	// Object: Function MFPluginWrapper.MFTPioneerService.GetVersion
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2e870
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetVersion();

	// Object: Function MFPluginWrapper.MFTPioneerService.GetProp
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95425b4
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetProp(struct FString Key);

	// Object: Function MFPluginWrapper.MFTPioneerService.GetDeviceInfoAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e2e758
	// Params: [ Num(0) Size(0x0) ]
	void GetDeviceInfoAsync();
};

// Object: Class MFPluginWrapper.MFVoiceObserver
// Size: 0x50 (Inherited: 0x40)
struct UMFVoiceObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFVoiceObserver, "MFVoiceObserver")

	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: Class MFPluginWrapper.MFVoiceRoosterObserver
// Size: 0x40 (Inherited: 0x40)
struct UMFVoiceRoosterObserver : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFVoiceRoosterObserver, "MFVoiceRoosterObserver")
};

// Object: Class MFPluginWrapper.UnLuaTestObject
// Size: 0x30 (Inherited: 0x28)
struct UUnLuaTestObject : UObject
{
	DEFINE_UE_CLASS_HELPERS(UUnLuaTestObject, "UnLuaTestObject")

	int32_t Pro1; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
};

// Object: Class MFPluginWrapper.MFVoiceService
// Size: 0x88 (Inherited: 0x40)
struct UMFVoiceService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFVoiceService, "MFVoiceService")

	uint8_t Pad_0x40[0x28]; // 0x40(0x28)
	struct UMFPWObject* VoiceObserver; // 0x68(0x8)
	int32_t HotFixTestProperty; // 0x70(0x4)
	uint8_t Pad_0x74[0x4]; // 0x74(0x4)
	struct FMulticastInlineDelegate hotfixDeletegate1; // 0x78(0x10)

	// Object: Function MFPluginWrapper.MFVoiceService.UploadRecordedFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e359f0
	// Params: [ Num(2) Size(0x14) ]
	int32_t UploadRecordedFile(struct FString FilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.UpdateCoordinate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3634c
	// Params: [ Num(6) Size(0x34) ]
	int32_t UpdateCoordinate(struct FString roomName, int64_t X, int64_t Y, int64_t Z, int64_t R);

	// Object: Function MFPluginWrapper.MFVoiceService.TextTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e32aa0
	// Params: [ Num(5) Size(0x20) ]
	int32_t TextTranslate(struct FString Text, int32_t srcLang, int32_t targetLang, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.TextToStreamSpeechStop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e32c6c
	// Params: [ Num(1) Size(0x4) ]
	int32_t TextToStreamSpeechStop();

	// Object: Function MFPluginWrapper.MFVoiceService.TextToStreamSpeechStart
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e32ca0
	// Params: [ Num(5) Size(0x3C) ]
	int32_t TextToStreamSpeechStart(struct FString Text, struct FString VoiceType, int32_t nTimeoutMS, struct FString FilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.TextToSpeechFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e32f1c
	// Params: [ Num(8) Size(0x3C) ]
	int32_t TextToSpeechFile(struct FString Text, int32_t lang, struct FString FilePath, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.TextToSpeech
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e33200
	// Params: [ Num(5) Size(0x20) ]
	int32_t TextToSpeech(struct FString Text, int32_t lang, int32_t VoiceType, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.TestMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e347b0
	// Params: [ Num(1) Size(0x4) ]
	int32_t TestMic();

	// Object: Function MFPluginWrapper.MFVoiceService.TestHotfix
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e32a38
	// Params: [ Num(1) Size(0x4) ]
	int32_t TestHotfix();

	// Object: Function MFPluginWrapper.MFVoiceService.StopRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x97f0f14
	// Params: [ Num(1) Size(0x4) ]
	int32_t StopRecording();

	// Object: Function MFPluginWrapper.MFVoiceService.StopPlayFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35708
	// Params: [ Num(1) Size(0x4) ]
	int32_t StopPlayFile();

	// Object: Function MFPluginWrapper.MFVoiceService.StartRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35b00
	// Params: [ Num(2) Size(0x14) ]
	int32_t StartRecording(struct FString FilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.SpeechTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e33e0c
	// Params: [ Num(6) Size(0x24) ]
	int32_t SpeechTranslate(struct FString fileID, int32_t srcLang, int32_t targetLang, int32_t transType, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.SpeechToText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e354ac
	// Params: [ Num(3) Size(0x18) ]
	int32_t SpeechToText(struct FString fileID, EMFVoiceLanguage Language);

	// Object: Function MFPluginWrapper.MFVoiceService.SpeechFileTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e33b84
	// Params: [ Num(8) Size(0x2C) ]
	int32_t SpeechFileTranslate(struct FString FilePath, int32_t srcLang, int32_t targetLang, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.SpeechFileToText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e339b8
	// Params: [ Num(5) Size(0x20) ]
	int32_t SpeechFileToText(struct FString FilePath, int32_t srcLang, int32_t targetLang, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.SetVoiceMode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x89f0250
	// Params: [ Num(2) Size(0x8) ]
	int32_t SetVoiceMode(int32_t VoiceMode);

	// Object: Function MFPluginWrapper.MFVoiceService.SetTransSecInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34298
	// Params: [ Num(1) Size(0x10) ]
	void SetTransSecInfo(struct FString secInfo);

	// Object: Function MFPluginWrapper.MFVoiceService.SetSpeakerVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92e9164
	// Params: [ Num(2) Size(0x8) ]
	int32_t SetSpeakerVolume(int32_t Volume);

	// Object: Function MFPluginWrapper.MFVoiceService.SetServerInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36cc0
	// Params: [ Num(3) Size(0x24) ]
	int32_t SetServerInfo(struct FString URL, struct FString defaultipsvr);

	// Object: Function MFPluginWrapper.MFVoiceService.SetRSTTServerInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e33780
	// Params: [ Num(4) Size(0x34) ]
	int32_t SetRSTTServerInfo(struct FString RSTTUrl, struct FString httpDnsIPs, struct FString wxAppID);

	// Object: Function MFPluginWrapper.MFVoiceService.SetReportedPlayerInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e345bc
	// Params: [ Num(4) Size(0x28) ]
	int32_t SetReportedPlayerInfo(struct TArray<struct FString> cszOpenID, struct TArray<int32_t> nMemberID, int32_t nCount);

	// Object: Function MFPluginWrapper.MFVoiceService.SetReportBufferTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94722a8
	// Params: [ Num(1) Size(0x4) ]
	void SetReportBufferTime(int32_t nTimeSec);

	// Object: Function MFPluginWrapper.MFVoiceService.SetPlayerVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34e00
	// Params: [ Num(3) Size(0x18) ]
	int32_t SetPlayerVolume(struct FString PlayerId, int32_t vol);

	// Object: Function MFPluginWrapper.MFVoiceService.SetMicVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x92e92a8
	// Params: [ Num(2) Size(0x8) ]
	int32_t SetMicVolume(int32_t Volume);

	// Object: Function MFPluginWrapper.MFVoiceService.SetCivilBinPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34188
	// Params: [ Num(2) Size(0x14) ]
	int32_t SetCivilBinPath(struct FString pPath);

	// Object: Function MFPluginWrapper.MFVoiceService.SetBitRate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34f00
	// Params: [ Num(2) Size(0x8) ]
	int32_t SetBitRate(int32_t bitrate);

	// Object: Function MFPluginWrapper.MFVoiceService.SetAudience
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35154
	// Params: [ Num(4) Size(0x2C) ]
	int32_t SetAudience(struct TArray<int32_t> members, int32_t Count, struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.SetAppInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9851c74
	// Params: [ Num(4) Size(0x34) ]
	int32_t SetAppInfo(struct FString AppID, struct FString AppKey, struct FString Openid);

	// Object: Function MFPluginWrapper.MFVoiceService.Set3DUpward
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35f10
	// Params: [ Num(4) Size(0x10) ]
	int32_t Set3DUpward(float X, float Y, float Z);

	// Object: Function MFPluginWrapper.MFVoiceService.Set3DPosition
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36168
	// Params: [ Num(4) Size(0x10) ]
	int32_t Set3DPosition(float X, float Y, float Z);

	// Object: Function MFPluginWrapper.MFVoiceService.Set3DForward
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3603c
	// Params: [ Num(4) Size(0x10) ]
	int32_t Set3DForward(float X, float Y, float Z);

	// Object: Function MFPluginWrapper.MFVoiceService.Set3DDistProperties
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35da4
	// Params: [ Num(5) Size(0x14) ]
	int32_t Set3DDistProperties(int32_t attenuationModel, float MinDis, float MaxDis, float rollOff);

	// Object: Function MFPluginWrapper.MFVoiceService.RSTSSpeechToText
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e335a8
	// Params: [ Num(5) Size(0x24) ]
	int32_t RSTSSpeechToText(int32_t srcLang, struct TArray<int32_t> pTargetLangs, int32_t nTargetLangCnt, int32_t nTimeoutMS);

	// Object: Function MFPluginWrapper.MFVoiceService.ReportPlayer
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34454
	// Params: [ Num(4) Size(0x2C) ]
	int32_t ReportPlayer(struct TArray<struct FString> cszOpenID, int32_t nCount, struct FString cszInfo);

	// Object: Function MFPluginWrapper.MFVoiceService.QuitRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36818
	// Params: [ Num(2) Size(0x14) ]
	int32_t QuitRoom(struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.QueryPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e347e4
	// Params: [ Num(1) Size(0x4) ]
	int32_t QueryPermission();

	// Object: Function MFPluginWrapper.MFVoiceService.PlayRecordedFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3573c
	// Params: [ Num(2) Size(0x14) ]
	int32_t PlayRecordedFile(struct FString FilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.OpenSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90efd4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t OpenSpeaker();

	// Object: Function MFPluginWrapper.MFVoiceService.OpenMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3695c
	// Params: [ Num(1) Size(0x4) ]
	int32_t OpenMic();

	// Object: Function MFPluginWrapper.MFVoiceService.OnVoiceRecording
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e3224c
	// Params: [ Num(0) Size(0x0) ]
	void OnVoiceRecording();

	// Object: Function MFPluginWrapper.MFVoiceService.OnUploadedFile
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e32104
	// Params: [ Num(3) Size(0x28) ]
	void OnUploadedFile(int32_t Code, struct FString FilePath, struct FString fileID);

	// Object: Function MFPluginWrapper.MFVoiceService.OnTextTranslate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31838
	// Params: [ Num(5) Size(0x30) ]
	void OnTextTranslate(int32_t Code, int32_t srcLang, struct FString srcText, int32_t targetLang, struct FString targetText);

	// Object: Function MFPluginWrapper.MFVoiceService.OnStreamSpeechToTextDone
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31bf4
	// Params: [ Num(4) Size(0x28) ]
	void OnStreamSpeechToTextDone(int32_t Code, int32_t Error, struct FString Result, struct FString VoicePath);

	// Object: Function MFPluginWrapper.MFVoiceService.OnStatusUpdate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e327c0
	// Params: [ Num(3) Size(0x1C) ]
	void OnStatusUpdate(int32_t Status, struct FString roomName, int32_t memberID);

	// Object: Function MFPluginWrapper.MFVoiceService.OnSpeechTranslate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31664
	// Params: [ Num(5) Size(0x3C) ]
	void OnSpeechTranslate(int32_t Code, struct FString srcText, struct FString targetText, struct FString targetFileID, int32_t srcFileDuration);

	// Object: Function MFPluginWrapper.MFVoiceService.OnSpeechToTextDone
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31d78
	// Params: [ Num(3) Size(0x28) ]
	void OnSpeechToTextDone(int32_t Code, struct FString fileID, struct FString Result);

	// Object: Function MFPluginWrapper.MFVoiceService.OnRoomMemberInfo
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e32638
	// Params: [ Num(4) Size(0x30) ]
	void OnRoomMemberInfo(int32_t Code, struct FString roomName, int32_t memid, struct FString Openid);

	// Object: Function MFPluginWrapper.MFVoiceService.OnReportPlayer
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e319fc
	// Params: [ Num(2) Size(0x18) ]
	void OnReportPlayer(int32_t Code, struct FString cszInfo);

	// Object: Function MFPluginWrapper.MFVoiceService.OnQuitedRoom
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e32318
	// Params: [ Num(2) Size(0x18) ]
	void OnQuitedRoom(int32_t Code, struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.OnPlayedRecordedFile
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31ec0
	// Params: [ Num(2) Size(0x18) ]
	void OnPlayedRecordedFile(int32_t Code, struct FString FilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.OnMultiRoomMemberVoice
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e32414
	// Params: [ Num(3) Size(0x18) ]
	void OnMultiRoomMemberVoice(struct FString roomName, int32_t memid, int32_t Status);

	// Object: Function MFPluginWrapper.MFVoiceService.OnMemberVoice
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e3254c
	// Params: [ Num(2) Size(0x8) ]
	void OnMemberVoice(int32_t memid, int32_t Status);

	// Object: Function MFPluginWrapper.MFVoiceService.OnJoinedRoom
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e328fc
	// Params: [ Num(3) Size(0x1C) ]
	void OnJoinedRoom(int32_t Code, struct FString roomName, int32_t memberID);

	// Object: Function MFPluginWrapper.MFVoiceService.OnIOSPermissionRequestReturn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34930
	// Params: [ Num(1) Size(0x1) ]
	void OnIOSPermissionRequestReturn(bool Status);

	// Object: Function MFPluginWrapper.MFVoiceService.OnHarmonyPermissionRequestReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e34818
	// Params: [ Num(2) Size(0x20) ]
	void OnHarmonyPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<int32_t>& GrantResults);

	// Object: Function MFPluginWrapper.MFVoiceService.OnEvent
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31af8
	// Params: [ Num(2) Size(0x18) ]
	void OnEvent(int32_t Event, struct FString Info);

	// Object: Function MFPluginWrapper.MFVoiceService.OnDownloadedFile
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31fbc
	// Params: [ Num(3) Size(0x28) ]
	void OnDownloadedFile(int32_t Code, struct FString FilePath, struct FString fileID);

	// Object: Function MFPluginWrapper.MFVoiceService.OnAppliedMessageKey
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e32268
	// Params: [ Num(1) Size(0x4) ]
	void OnAppliedMessageKey(int32_t Code);

	// Object: Function MFPluginWrapper.MFVoiceService.OnAndroidPermissionRequestReturn
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x3e349e0
	// Params: [ Num(2) Size(0x20) ]
	void OnAndroidPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults);

	// Object: Function MFPluginWrapper.MFVoiceService.JoinTeamRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36bb0
	// Params: [ Num(2) Size(0x14) ]
	int32_t JoinTeamRoom(struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.JoinRangeRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36aa0
	// Params: [ Num(2) Size(0x14) ]
	int32_t JoinRangeRoom(struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.JoinNationalRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36990
	// Params: [ Num(2) Size(0x14) ]
	int32_t JoinNationalRoom(struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.IsSpeaking
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x3e34778
	// Params: [ Num(1) Size(0x1) ]
	bool IsSpeaking();

	// Object: Function MFPluginWrapper.MFVoiceService.Invoke
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9593f64
	// Params: [ Num(3) Size(0xC) ]
	void Invoke(int32_t Cmd, int32_t Param1, int32_t Param2);

	// Object: Function MFPluginWrapper.MFVoiceService.InitMFVoiceEngine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95cbe00
	// Params: [ Num(4) Size(0x34) ]
	int32_t InitMFVoiceEngine(struct FString AppID, struct FString AppKey, struct FString Openid);

	// Object: Function MFPluginWrapper.MFVoiceService.GetSpeakerState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34bec
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSpeakerState();

	// Object: Function MFPluginWrapper.MFVoiceService.GetSpeakerLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34c54
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSpeakerLevel();

	// Object: Function MFPluginWrapper.MFVoiceService.GetRoomMembers
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34b2c
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetRoomMembers(struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.GetPlayerVolume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34d40
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetPlayerVolume(struct FString PlayerId);

	// Object: Function MFPluginWrapper.MFVoiceService.GetObserver
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e32a6c
	// Params: [ Num(1) Size(0x8) ]
	struct UMFPWObject* GetObserver();

	// Object: Function MFPluginWrapper.MFVoiceService.GetMicState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34c20
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMicState();

	// Object: Function MFPluginWrapper.MFVoiceService.GetMicLevel
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34c88
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetMicLevel(bool FadeOut);

	// Object: Function MFPluginWrapper.MFVoiceService.GetFileTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e355fc
	// Params: [ Num(2) Size(0x14) ]
	float GetFileTime(struct FString FilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.GameResume
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9797b94
	// Params: [ Num(1) Size(0x4) ]
	int32_t GameResume();

	// Object: Function MFPluginWrapper.MFVoiceService.GamePause
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9797e04
	// Params: [ Num(1) Size(0x4) ]
	int32_t GamePause();

	// Object: Function MFPluginWrapper.MFVoiceService.ForbidMemberVoice
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34fb0
	// Params: [ Num(4) Size(0x1C) ]
	int32_t ForbidMemberVoice(int32_t member, bool Enable, struct FString roomName);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e333cc
	// Params: [ Num(5) Size(0x20) ]
	int32_t EnableTranslate(struct FString roomName, bool bEnable, int32_t myLang, int32_t transType);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableSpeakerOn
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3533c
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableSpeakerOn(bool Enable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableRoomSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36558
	// Params: [ Num(3) Size(0x18) ]
	int32_t EnableRoomSpeaker(struct FString roomName, bool Enable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableRoomMicrophone
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e366b8
	// Params: [ Num(3) Size(0x18) ]
	int32_t EnableRoomMicrophone(struct FString roomName, bool Enable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableReportALLAbroad
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3439c
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableReportALLAbroad(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableReportALL
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95212d4
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableReportALL(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableMultiRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9521420
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableMultiRoom(bool Enable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableLogCallBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34018
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableLogCallBack(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableLog
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x94e6a28
	// Params: [ Num(1) Size(0x1) ]
	void EnableLog(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableCivilVoice
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9521188
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableCivilVoice(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableCivilFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e340d0
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableCivilFile(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.EnableBluetoothSCO
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e353f4
	// Params: [ Num(2) Size(0x8) ]
	int32_t EnableBluetoothSCO(bool Enable);

	// Object: Function MFPluginWrapper.MFVoiceService.Enable3DVoiceRoom
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35c44
	// Params: [ Num(3) Size(0x18) ]
	int32_t Enable3DVoiceRoom(struct FString roomName, bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.Enable3DVoice
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36294
	// Params: [ Num(2) Size(0x8) ]
	int32_t Enable3DVoice(bool bEnable);

	// Object: Function MFPluginWrapper.MFVoiceService.DownloadRecordedFile
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3584c
	// Params: [ Num(3) Size(0x24) ]
	int32_t DownloadRecordedFile(struct FString fileID, struct FString DownloadFilePath);

	// Object: Function MFPluginWrapper.MFVoiceService.CloseSpeaker
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e36928
	// Params: [ Num(1) Size(0x4) ]
	int32_t CloseSpeaker();

	// Object: Function MFPluginWrapper.MFVoiceService.CloseMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x90efe00
	// Params: [ Num(1) Size(0x4) ]
	int32_t CloseMic();

	// Object: Function MFPluginWrapper.MFVoiceService.CheckPermission
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e34af8
	// Params: [ Num(1) Size(0x4) ]
	int32_t CheckPermission();

	// Object: Function MFPluginWrapper.MFVoiceService.ApplyMessageKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e35c10
	// Params: [ Num(1) Size(0x4) ]
	int32_t ApplyMessageKey();

	// Object: Function MFPluginWrapper.MFVoiceService.ApplicationWillEnterBackground
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31648
	// Params: [ Num(0) Size(0x0) ]
	void ApplicationWillEnterBackground();

	// Object: Function MFPluginWrapper.MFVoiceService.ApplicationWillDeactivate
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e31610
	// Params: [ Num(0) Size(0x0) ]
	void ApplicationWillDeactivate();

	// Object: Function MFPluginWrapper.MFVoiceService.ApplicationHasReactivated
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e315f4
	// Params: [ Num(0) Size(0x0) ]
	void ApplicationHasReactivated();

	// Object: Function MFPluginWrapper.MFVoiceService.ApplicationHasEnteredForeground
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e3162c
	// Params: [ Num(0) Size(0x0) ]
	void ApplicationHasEnteredForeground();
};

// Object: Class MFPluginWrapper.MFWeGameEvent
// Size: 0x40 (Inherited: 0x40)
struct UMFWeGameEvent : UMFPWObject
{
	DEFINE_UE_CLASS_HELPERS(UMFWeGameEvent, "MFWeGameEvent")
};

// Object: Class MFPluginWrapper.MFWeGamePlugin
// Size: 0x48 (Inherited: 0x40)
struct UMFWeGamePlugin : UMFPWPlugin
{
	DEFINE_UE_CLASS_HELPERS(UMFWeGamePlugin, "MFWeGamePlugin")

	struct UMFWeGameEvent* RailEvent; // 0x40(0x8)
};

// Object: Class MFPluginWrapper.MFWXGameLiveObserver
// Size: 0x58 (Inherited: 0x28)
struct UMFWXGameLiveObserver : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMFWXGameLiveObserver, "MFWXGameLiveObserver")

	uint8_t Pad_0x28[0x30]; // 0x28(0x30)
};

// Object: Class MFPluginWrapper.MFWXGameLiveService
// Size: 0x48 (Inherited: 0x40)
struct UMFWXGameLiveService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFWXGameLiveService, "MFWXGameLiveService")

	struct UMFWXGameLiveObserver* Observer; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFWXGameLiveService.WXGameLiveInit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a3bc
	// Params: [ Num(4) Size(0x31) ]
	bool WXGameLiveInit(struct FString gameName, struct FString AppID, struct FString LinkId);

	// Object: Function MFPluginWrapper.MFWXGameLiveService.WXGameLiveGvoiceCmd
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a0ec
	// Params: [ Num(3) Size(0xC) ]
	void WXGameLiveGvoiceCmd(int32_t Cmd, int32_t P1, int32_t p2);

	// Object: Function MFPluginWrapper.MFWXGameLiveService.StopLive
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e39fb0
	// Params: [ Num(0) Size(0x0) ]
	void StopLive();

	// Object: Function MFPluginWrapper.MFWXGameLiveService.StartLive
	// Flags: [Native|Event|Public|BlueprintEvent]
	// Offset: 0x3e39fcc
	// Params: [ Num(0) Size(0x0) ]
	void StartLive();

	// Object: Function MFPluginWrapper.MFWXGameLiveService.PostGameMessage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e39fe8
	// Params: [ Num(1) Size(0x10) ]
	void PostGameMessage(struct FString Msg);

	// Object: Function MFPluginWrapper.MFWXGameLiveService.OnMessageFromWeChat
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e39eac
	// Params: [ Num(1) Size(0x10) ]
	void OnMessageFromWeChat(struct FString Msg);

	// Object: Function MFPluginWrapper.MFWXGameLiveService.OnLiveButtonClicked
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a2ac
	// Params: [ Num(0) Size(0x0) ]
	void OnLiveButtonClicked();

	// Object: Function MFPluginWrapper.MFWXGameLiveService.IsSupported
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e39e74
	// Params: [ Num(1) Size(0x1) ]
	bool IsSupported();

	// Object: Function MFPluginWrapper.MFWXGameLiveService.GetPrimaryGPUBrand
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x3e3a210
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetPrimaryGPUBrand();

	// Object: Function MFPluginWrapper.MFWXGameLiveService.CheckSupportAndPrepare
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a2c0
	// Params: [ Num(2) Size(0x11) ]
	void CheckSupportAndPrepare(struct FString UserInfo, bool TestEnv);
};

// Object: Class MFPluginWrapper.MFXunyouService
// Size: 0x48 (Inherited: 0x40)
struct UMFXunyouService : UMFGCloudService
{
	DEFINE_UE_CLASS_HELPERS(UMFXunyouService, "MFXunyouService")

	uint8_t Pad_0x40[0x8]; // 0x40(0x8)

	// Object: Function MFPluginWrapper.MFXunyouService.SetWiFiAccelSwitch
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3af34
	// Params: [ Num(1) Size(0x1) ]
	void SetWiFiAccelSwitch(bool bEnable);

	// Object: Function MFPluginWrapper.MFXunyouService.SetUserToken
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x96acb48
	// Params: [ Num(3) Size(0x30) ]
	void SetUserToken(struct FString UserId, struct FString Token, struct FString AppID);

	// Object: Function MFPluginWrapper.MFXunyouService.SetUdpEchoPort
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3b3e8
	// Params: [ Num(1) Size(0x4) ]
	void SetUdpEchoPort(int32_t Port);

	// Object: Function MFPluginWrapper.MFXunyouService.SetUdpEchoAddress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3b2a4
	// Params: [ Num(2) Size(0x14) ]
	void SetUdpEchoAddress(struct FString ip, int32_t Port);

	// Object: Function MFPluginWrapper.MFXunyouService.setUamAreaCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9821f14
	// Params: [ Num(1) Size(0x4) ]
	void setUamAreaCode(int32_t areaCode);

	// Object: Function MFPluginWrapper.MFXunyouService.PrepareGameAsync
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a788
	// Params: [ Num(6) Size(0x44) ]
	void PrepareGameAsync(struct UObject* WorldContext, struct FString EchoIp, int32_t Echoport, struct FString AccProtocal, struct FString AccIp, int32_t AccPort);

	// Object: Function MFPluginWrapper.MFXunyouService.OnPostTryNextIP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a638
	// Params: [ Num(1) Size(0x10) ]
	void OnPostTryNextIP(struct FString IPAddress);

	// Object: Function MFPluginWrapper.MFXunyouService.OnNetDelayQuality4
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9822930
	// Params: [ Num(2) Size(0x8) ]
	void OnNetDelayQuality4(float pingAvg, float sd);

	// Object: Function MFPluginWrapper.MFXunyouService.OnNetDelayJni
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3ac5c
	// Params: [ Num(1) Size(0x4) ]
	void OnNetDelayJni(int32_t milis);

	// Object: Function MFPluginWrapper.MFXunyouService.OnAccelRecommendationWindowPop
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3ada0
	// Params: [ Num(1) Size(0x4) ]
	void OnAccelRecommendationWindowPop(int32_t Type);

	// Object: Function MFPluginWrapper.MFXunyouService.OnAccelRecommendationResult
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3ae48
	// Params: [ Num(2) Size(0x5) ]
	void OnAccelRecommendationResult(int32_t Type, bool isConfirm);

	// Object: Function MFPluginWrapper.MFXunyouService.IsAccelOpened
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x939a788
	// Params: [ Num(1) Size(0x1) ]
	bool IsAccelOpened();

	// Object: Function MFPluginWrapper.MFXunyouService.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x95b08c0
	// Params: [ Num(1) Size(0x10) ]
	void Init(struct FString Guid);

	// Object: Function MFPluginWrapper.MFXunyouService.GetWebUIUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3afe4
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetWebUIUrl(int32_t Type);

	// Object: Function MFPluginWrapper.MFXunyouService.GetVIPValidTime
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3ad04
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetVIPValidTime();

	// Object: Function MFPluginWrapper.MFXunyouService.GetIP
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a6ec
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIP();

	// Object: Function MFPluginWrapper.MFXunyouService.GetAccelRecommendation
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x980b14c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAccelRecommendation();

	// Object: Function MFPluginWrapper.MFXunyouService.GetAccelerationStatus
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x9363e38
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAccelerationStatus();

	// Object: Function MFPluginWrapper.MFXunyouService.ClearAccelAddresses
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3a624
	// Params: [ Num(0) Size(0x0) ]
	void ClearAccelAddresses();

	// Object: Function MFPluginWrapper.MFXunyouService.BeginRound
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3aa7c
	// Params: [ Num(3) Size(0x21) ]
	void BeginRound(struct FString Openid, struct FString pvpid, bool bBegin);

	// Object: Function MFPluginWrapper.MFXunyouService.AddAccelAddress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x3e3b0cc
	// Params: [ Num(3) Size(0x24) ]
	void AddAccelAddress(struct FString protocal, struct FString ip, int32_t Port);
};

} // namespace SDK
