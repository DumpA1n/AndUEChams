#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"
#include "GameCore.hpp"
#include "UMG.hpp"

namespace SDK
{

// Package: DFMGameSDK
// Enums: 13
// Structs: 36
// Classes: 50

enum class EDownloadResult : uint8_t;
enum class EGameFlowStageType : uint8_t;
enum class EPerfGearQualityLevel : uint8_t;
struct UCanvasPanel;
struct UDFCommonButton;
struct UDFCommonMediaView;
struct UGameInstance;
struct UImage;
struct ULuaUIBaseView;
struct UProgressBar;
struct URichTextBlock;
struct URuntimeFilesDownloaderProxy;
struct UTextBlock;
struct UTexture2D;
struct UUserWidget;
struct UWorld;
struct FLuaRecvBufferInfo;
struct FConnectServerInfo;
struct FConnectorResultInfo;
struct FDFNoticeRet;
struct FDFNoticeTextInfo;
struct FDFNoticeInfo;
struct FDFNoticePictureInfo;
struct FDfmBaseRet;
struct FDfmLoginRet;
struct FDfmQrCodeRet;
struct FDfmExtendRet;
struct FDfVoiceControlRet;
struct FDFINTLComplianceRet;
struct FDFDiscordFriendResult;
struct FDFRichPresence;
struct FDFDiscordUserInfo;
struct FLBSRelationRet;
struct FMetaInfo;
struct FMapleData;
struct FHttpBatch;
struct FCDNNoticeInfo;
struct FAPPUpdateInfo;
struct FDFMCrashSightExtraDataStruct;
struct FDfmFriendReqInfo;
struct FDFMLocalNotification_IOS;
struct FDFMLocalNotification_OpenHarmony;
struct FDFMLocalNotification_Android;
struct FGVoiceRoomMember;
struct FGVoiceRoom;
struct FQueryPS5PlatformBlockListInfoRes;
struct FQueryPS5PlatformBlockListInfo;
struct FQueryUIDRes;
struct FQueryUIDInfo;
struct FRecvBufferInfo;
struct FOnlineConnectResult;
struct FGameSDKInitRuleRow;
struct UCommonTipView;
struct UBaseBackground;
struct UCDNInfoManager;
struct UMapleSavedInfo;
struct UCDNPathConfig;
struct UDFMSDKBase;
struct UDFGameMatchReport;
struct UDFMBackGroundDownload;
struct UDFMCrashSight;
struct UDFMExpansionPackCoordinator;
struct UDFMGameAnnounce;
struct UDFMGameBeacon;
struct UDFMGameBrowser;
struct UDFMGameCentauri;
struct UDFMGameConnect;
struct UDFMGameFriend;
struct UDFMGameGarena;
struct UDFMGameGPM;
struct UDFMGameIdcSelector;
struct UDFMGameLBS;
struct UDFMGamelet;
struct UDFMGameLogin;
struct UDFMGameMaple;
struct UDFMGameMidas;
struct UDFMGameNetBar;
struct UDFMGameNotch;
struct UDFMGameOneSDK;
struct UDFMGamePlayerInfo;
struct UDFMGameProtocol;
struct UDFMGamePush;
struct UDFMGameReport;
struct UDFMGameTDM;
struct UDFMGameTss;
struct UDFMGameUdpMgr;
struct UDFMGameUrlGenerator;
struct UDFMGameVoice;
struct UDFMLocalizationCrashsightManager;
struct UDolphinController;
struct UDolphinManager;
struct IGameIdcSelectorInterface;
struct UGameSDKInitUtil;
struct UGameSDKManager;
struct UGameSDKStatics;
struct ULitePackageWrapper;
struct ULoginTipWidget;
struct UPufferInterface;
struct UPufferManager;
struct UPufferModule;
struct UPufferQuest;
struct UQRCodeUtil;

// Object: Enum DFMGameSDK.EMetaError
enum class EMetaError : uint8_t
{
	NOT_FOUND = 0,
	DOWNLOAD_FAIL = 1,
	DECRYPT_FAIL = 2,
	RETRY_FAIL = 3,
	EMetaError_MAX = 4
};

// Object: Enum DFMGameSDK.EConfigState
enum class EConfigState : uint8_t
{
	Success = 0,
	DOWNLOAD_FAILED = 1,
	DECRYPT_FAILED = 2,
	LOAD_FILE_FAILED = 3,
	EConfigState_MAX = 4
};

// Object: Enum DFMGameSDK.EMapleError
enum class EMapleError : uint8_t
{
	InnerError = 0,
	NetworkException = 1,
	Timeout = 2,
	InvalidArgument = 3,
	LengthError = 4,
	Unknown = 5,
	Empty = 6,
	NotInitialized = 7,
	NotSupported = 8,
	NotInstalled = 9,
	SystemError = 10,
	NoPermission = 11,
	InvalidGameId = 12,
	InvalidToken = 13,
	NoToken = 14,
	AccessTokenExpired = 15,
	RefreshTokenExpired = 16,
	PayTokenExpired = 17,
	LoginFailed = 18,
	UserCancel = 19,
	UserDenied = 20,
	Checking = 21,
	NeedRealNameAuth = 22,
	NetworkError = 23,
	SendError = 24,
	RecvError = 25,
	LeafNotFound = 26,
	PlatformNotFound = 27,
	InvalidErrorCode = 28,
	Success = 29,
	MapleNotInit = 30,
	FetchDataOutOfTime = 31,
	HandleDataFailed = 32,
	EMapleError_MAX = 33
};

// Object: Enum DFMGameSDK.EMatchFlowStep
enum class EMatchFlowStep : uint32_t
{
	Start = 10001,
	PrepareJoinMatch = 10002,
	MatchVerify = 10003,
	PlayerJoinMatch = 10004,
	DsLink = 10005,
	Success = 10006,
	DSCore = 99999,
	EMatchFlowStep_MAX = 100000
};

// Object: Enum DFMGameSDK.DFMGameDataKeyForControlState
enum class EDFMGameDataKeyForControlState : uint8_t
{
	FiringStart = 0,
	FiringEnd = 1,
	BeginZoom3 = 2,
	EndZoom3 = 3,
	BeginZoom6 = 4,
	EndZoom6 = 5,
	BeginZoom7 = 6,
	EndZoom7 = 7,
	BeginHurt = 8,
	EndHurt = 9,
	BeginLooting = 10,
	EndLooting = 11,
	OpenBag = 12,
	CloseBag = 13,
	BeginBlueprintHolder = 14,
	EndBlueprintHolder = 15,
	BeginSeamLessEnterGame = 16,
	EndSeamLessEnterGame = 17,
	BeginRedeploy = 18,
	EndRedeploy = 19,
	BeginGetOnVehicle = 20,
	EndGetOnVehicle = 21,
	DFMGameDataKeyForControlState_MAX = 22
};

// Object: Enum DFMGameSDK.DFMGameDataKeyForStoryState
enum class EDFMGameDataKeyForStoryState : uint8_t
{
	Launch = 0,
	VersionUpdate = 1,
	Loading = 2,
	Lobby = 3,
	CommonEnterGame = 4,
	CommonGame = 5,
	POI = 6,
	BattleField = 7,
	SOLExit = 8,
	Settlement = 9,
	DFMGameDataKeyForStoryState_MAX = 10
};

// Object: Enum DFMGameSDK.EGVoiceButtonType
enum class EGVoiceButtonType : uint8_t
{
	GVoiceButtonType_Close = 0,
	GVoiceButtonType_ClosePress = 1,
	GVoiceButtonType_MossPress = 11,
	GVoiceButtonType_Team = 30,
	GVoiceButtonType_TeamPress = 31,
	GVoiceButtonType_All = 50,
	GVoiceButtonType_AllPress = 51,
	GVoiceButtonType_Camp = 70,
	GVoiceButtonType_CampPress = 71,
	GVoiceButtonType_MAX = 72
};

// Object: Enum DFMGameSDK.EGVoiceRoomChannel
enum class EGVoiceRoomChannel : uint8_t
{
	GVoiceRoomChannel_None = 0,
	GVoiceRoomChannel_Moss = 1,
	GVoiceRoomChannel_Team = 3,
	GVoiceRoomChannel_All = 5,
	GVoiceRoomChannel_Camp = 7,
	GVoiceRoomChannel_MAX = 8
};

// Object: Enum DFMGameSDK.EDolphinVersionUpdateStep
enum class EDolphinVersionUpdateStep : uint8_t
{
	None = 0,
	Begin = 1,
	CheckClearFiles = 2,
	App = 3,
	Extract = 4,
	Resource = 5,
	CheckResource = 6,
	Finish = 7,
	EDolphinVersionUpdateStep_MAX = 8
};

// Object: Enum DFMGameSDK.EGameSDKInitRuleType
enum class EGameSDKInitRuleType : uint8_t
{
	All = 0,
	Disable = 1,
	RegionList = 2,
	XIDSuffixRange = 3,
	EGameSDKInitRuleType_MAX = 4
};

// Object: Enum DFMGameSDK.EGameSDKType
enum class EGameSDKType : uint8_t
{
	None = 0,
	Perfsight = 1,
	Crashsight = 2,
	EGameSDKType_MAX = 3
};

// Object: Enum DFMGameSDK.EQRencodeMode
enum class EQRencodeMode : uint8_t
{
	QR_MODE_NUL = 0,
	QR_MODE_NUM = 1,
	QR_MODE_AN = 2,
	QR_MODE_8 = 3,
	QR_MODE_KANJI = 4,
	QR_MODE_STRUCTURE = 5,
	QR_MODE_ECI = 6,
	QR_MODE_FNC1FIRST = 7,
	QR_MODE_FNC1SECOND = 8,
	QR_MODE_MAX = 9
};

// Object: Enum DFMGameSDK.EQRecLevel
enum class EQRecLevel : uint8_t
{
	QR_ECLEVEL_L = 0,
	QR_ECLEVEL_M = 1,
	QR_ECLEVEL_Q = 2,
	QR_ECLEVEL_H = 3,
	QR_ECLEVEL_MAX = 4
};

// Object: ScriptStruct DFMGameSDK.LuaRecvBufferInfo
// Size: 0x18 (Inherited: 0x0)
struct FLuaRecvBufferInfo
{
	struct FString buf; // 0x0(0x10)
	int32_t Len; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
};

// Object: ScriptStruct DFMGameSDK.ConnectServerInfo
// Size: 0x90 (Inherited: 0x0)
struct FConnectServerInfo
{
	struct FString Ip; // 0x0(0x10)
	int32_t Port; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString DebugName; // 0x18(0x10)
	struct FName SocketType; // 0x28(0x8)
	uint32_t AuthType; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString APPID; // 0x38(0x10)
	int32_t Channel; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FString OpenId; // 0x50(0x10)
	struct FString Token; // 0x60(0x10)
	int64_t Expire; // 0x70(0x8)
	struct TArray<struct FString> Urls; // 0x78(0x10)
	uint8_t bClear : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t Pad_0x89[0x7]; // 0x89(0x7)
};

// Object: ScriptStruct DFMGameSDK.ConnectorResultInfo
// Size: 0x50 (Inherited: 0x0)
struct FConnectorResultInfo
{
	int32_t State; // 0x0(0x4)
	int32_t ErrorCode; // 0x4(0x4)
	struct FString Reason; // 0x8(0x10)
	uint8_t isSuccess : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t Pad_0x19[0x7]; // 0x19(0x7)
	struct FString RealIP; // 0x20(0x10)
	struct FString URL; // 0x30(0x10)
	int32_t WaitingQueuePosition; // 0x40(0x4)
	int32_t WaitingQueueLen; // 0x44(0x4)
	int32_t WaitingEstimateTime; // 0x48(0x4)
	uint8_t IsConnected : 1; // 0x4C(0x1), Mask(0x1)
	uint8_t BitPad_0x4C_1 : 7; // 0x4C(0x1)
	uint8_t Pad_0x4D[0x3]; // 0x4D(0x3)
};

// Object: ScriptStruct DFMGameSDK.DFNoticeRet
// Size: 0x20 (Inherited: 0x0)
struct FDFNoticeRet
{
	struct FString ReqId; // 0x0(0x10)
	struct TArray<struct FDFNoticeInfo> NoticeInfos; // 0x10(0x10)
};

// Object: ScriptStruct DFMGameSDK.DFNoticeTextInfo
// Size: 0xC0 (Inherited: 0x0)
struct FDFNoticeTextInfo
{
	struct FString NoticeTitle; // 0x0(0x10)
	struct FString NoticeContent; // 0x10(0x10)
	struct FString NoticeRedirectUrl; // 0x20(0x10)
	int32_t ContentId; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString AppContentId; // 0x38(0x10)
	struct FString LanguageType; // 0x48(0x10)
	int32_t UpdateTime; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct TMap<struct FString, struct FString> ExtraData; // 0x60(0x50)
	struct TArray<struct FDFNoticePictureInfo> ContentPictureList; // 0xB0(0x10)
};

// Object: ScriptStruct DFMGameSDK.DFNoticeInfo
// Size: 0x1C0 (Inherited: 0x0)
struct FDFNoticeInfo
{
	int32_t NoticeID; // 0x0(0x4)
	int32_t BeginTime; // 0x4(0x4)
	int32_t EndTime; // 0x8(0x4)
	int32_t UpdateTime; // 0xC(0x4)
	struct TArray<struct FDFNoticePictureInfo> PicUrlList; // 0x10(0x10)
	int32_t NoticeType; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString NoticeGroup; // 0x28(0x10)
	int32_t Order; // 0x38(0x4)
	int32_t ContentType; // 0x3C(0x4)
	struct FString Language; // 0x40(0x10)
	struct FString WebUrl; // 0x50(0x10)
	struct FDFNoticeTextInfo TextInfo; // 0x60(0xC0)
	struct FString APPID; // 0x120(0x10)
	struct FString AppNoticeId; // 0x130(0x10)
	int32_t Status; // 0x140(0x4)
	uint8_t Pad_0x144[0x4]; // 0x144(0x4)
	struct FString AreaList; // 0x148(0x10)
	struct TArray<struct FDFNoticeTextInfo> TextInfoList; // 0x158(0x10)
	struct TMap<struct FString, struct FString> ExtraData; // 0x168(0x50)
	uint8_t IsUsable : 1; // 0x1B8(0x1), Mask(0x1)
	uint8_t BitPad_0x1B8_1 : 7; // 0x1B8(0x1)
	uint8_t Pad_0x1B9[0x7]; // 0x1B9(0x7)
};

// Object: ScriptStruct DFMGameSDK.DFNoticePictureInfo
// Size: 0xA8 (Inherited: 0x0)
struct FDFNoticePictureInfo
{
	struct FString NoticePicUrl; // 0x0(0x10)
	struct FString NoticePicHashcode; // 0x10(0x10)
	struct FString NoticePicTitle; // 0x20(0x10)
	struct FString NoticePicSize; // 0x30(0x10)
	int32_t ScreenDir; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString PicRedirectUrl; // 0x48(0x10)
	struct TMap<struct FString, struct FString> ExtraData; // 0x58(0x50)
};

// Object: ScriptStruct DFMGameSDK.DfmBaseRet
// Size: 0x40 (Inherited: 0x0)
struct FDfmBaseRet
{
	int32_t methodNameID; // 0x0(0x4)
	int32_t retCode; // 0x4(0x4)
	struct FString retMsg; // 0x8(0x10)
	int32_t thirdCode; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString thirdMsg; // 0x20(0x10)
	struct FString extraJson; // 0x30(0x10)
};

// Object: ScriptStruct DFMGameSDK.DfmLoginRet
// Size: 0x150 (Inherited: 0x40)
struct FDfmLoginRet : FDfmBaseRet
{
	struct FString OpenId; // 0x40(0x10)
	struct FString Token; // 0x50(0x10)
	int64_t tokenExpire; // 0x60(0x8)
	int32_t firstLogin; // 0x68(0x4)
	uint8_t Pad_0x6C[0x4]; // 0x6C(0x4)
	struct FString regChannelDis; // 0x70(0x10)
	struct FString userName; // 0x80(0x10)
	int32_t gender; // 0x90(0x4)
	uint8_t Pad_0x94[0x4]; // 0x94(0x4)
	struct FString birthdate; // 0x98(0x10)
	struct FString pictureUrl; // 0xA8(0x10)
	struct FString pf; // 0xB8(0x10)
	struct FString pfKey; // 0xC8(0x10)
	uint8_t realNameAuth : 1; // 0xD8(0x1), Mask(0x1)
	uint8_t BitPad_0xD8_1 : 7; // 0xD8(0x1)
	uint8_t Pad_0xD9[0x3]; // 0xD9(0x3)
	int32_t channelID; // 0xDC(0x4)
	struct FString Channel; // 0xE0(0x10)
	struct FString channelInfo; // 0xF0(0x10)
	struct FString confirmCode; // 0x100(0x10)
	int64_t confirmCodeExpireTime; // 0x110(0x8)
	struct FString bindList; // 0x118(0x10)
	struct FString RegionCode; // 0x128(0x10)
	int32_t playerAdultState; // 0x138(0x4)
	uint8_t Pad_0x13C[0x4]; // 0x13C(0x4)
	struct FString wg_login_info; // 0x140(0x10)
};

// Object: ScriptStruct DFMGameSDK.DfmQrCodeRet
// Size: 0x68 (Inherited: 0x40)
struct FDfmQrCodeRet : FDfmBaseRet
{
	int32_t loginChanelId; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString loginChanel; // 0x48(0x10)
	struct FString qrCodeUrl; // 0x58(0x10)
};

// Object: ScriptStruct DFMGameSDK.DfmExtendRet
// Size: 0x58 (Inherited: 0x40)
struct FDfmExtendRet : FDfmBaseRet
{
	int32_t ExtendChannelID; // 0x40(0x4)
	uint8_t Pad_0x44[0x4]; // 0x44(0x4)
	struct FString ExtendMethodName; // 0x48(0x10)
};

// Object: ScriptStruct DFMGameSDK.DfVoiceControlRet
// Size: 0x50 (Inherited: 0x40)
struct FDfVoiceControlRet : FDfmBaseRet
{
	int32_t NeedVoiceControl; // 0x40(0x4)
	int32_t VoiceControlStatus; // 0x44(0x4)
	int32_t NeedVoiceControlIngame; // 0x48(0x4)
	int32_t NeedVoiceControlParentCert; // 0x4C(0x4)
};

// Object: ScriptStruct DFMGameSDK.DFINTLComplianceRet
// Size: 0x108 (Inherited: 0x40)
struct FDFINTLComplianceRet : FDfmBaseRet
{
	int32_t adultStatus; // 0x40(0x4)
	int32_t parentCertificateStatus; // 0x44(0x4)
	struct FString parentCertificateStatusExpiration; // 0x48(0x10)
	int32_t eUUserAgreeStatus; // 0x58(0x4)
	uint8_t Pad_0x5C[0x4]; // 0x5C(0x4)
	struct FString countryCode; // 0x60(0x10)
	int32_t adultAge; // 0x70(0x4)
	int32_t gameGrade; // 0x74(0x4)
	int32_t certificateType; // 0x78(0x4)
	uint8_t Pad_0x7C[0x4]; // 0x7C(0x4)
	struct FString adultStatusExpiration; // 0x80(0x10)
	struct FString tS; // 0x90(0x10)
	uint8_t isEEA : 1; // 0xA0(0x1), Mask(0x1)
	uint8_t BitPad_0xA0_1 : 7; // 0xA0(0x1)
	uint8_t isDMA : 1; // 0xA1(0x1), Mask(0x1)
	uint8_t BitPad_0xA1_1 : 7; // 0xA1(0x1)
	uint8_t Pad_0xA2[0x6]; // 0xA2(0x6)
	struct FString Region; // 0xA8(0x10)
	struct FString email; // 0xB8(0x10)
	int32_t realNameAuthStatus; // 0xC8(0x4)
	int32_t needRealNameAuth; // 0xCC(0x4)
	uint8_t needLICertification : 1; // 0xD0(0x1), Mask(0x1)
	uint8_t BitPad_0xD0_1 : 7; // 0xD0(0x1)
	uint8_t Pad_0xD1[0x7]; // 0xD1(0x7)
	struct FString adultAgeMap; // 0xD8(0x10)
	struct FString gameGradeMap; // 0xE8(0x10)
	int32_t NeedVoiceControl; // 0xF8(0x4)
	int32_t VoiceControlStatus; // 0xFC(0x4)
	int32_t NeedVoiceControlIngame; // 0x100(0x4)
	int32_t NeedVoiceControlParentCert; // 0x104(0x4)
};

// Object: ScriptStruct DFMGameSDK.DFDiscordFriendResult
// Size: 0x50 (Inherited: 0x40)
struct FDFDiscordFriendResult : FDfmBaseRet
{
	struct TArray<struct FDFDiscordUserInfo> friendInfoList; // 0x40(0x10)
};

// Object: ScriptStruct DFMGameSDK.DFRichPresence
// Size: 0x90 (Inherited: 0x0)
struct FDFRichPresence
{
	struct FString gameName; // 0x0(0x10)
	struct FString State; // 0x10(0x10)
	struct FString details; // 0x20(0x10)
	struct FString largeText; // 0x30(0x10)
	struct FString largeImage; // 0x40(0x10)
	struct FString SmallText; // 0x50(0x10)
	struct FString smallImage; // 0x60(0x10)
	int32_t StartTime; // 0x70(0x4)
	int32_t EndTime; // 0x74(0x4)
	int32_t partyMaxSize; // 0x78(0x4)
	int32_t supportedPlatforms; // 0x7C(0x4)
	struct FString extraJson; // 0x80(0x10)
};

// Object: ScriptStruct DFMGameSDK.DFDiscordUserInfo
// Size: 0x108 (Inherited: 0x0)
struct FDFDiscordUserInfo
{
	struct FString uid; // 0x0(0x10)
	struct FString avatarUrl; // 0x10(0x10)
	struct FString userName; // 0x20(0x10)
	struct FString DisplayName; // 0x30(0x10)
	int32_t Status; // 0x40(0x4)
	int32_t relationshipType; // 0x44(0x4)
	int32_t IsInGame; // 0x48(0x4)
	uint8_t Pad_0x4C[0x4]; // 0x4C(0x4)
	struct FString Gid; // 0x50(0x10)
	int32_t lastLoginTimestamp; // 0x60(0x4)
	uint8_t Pad_0x64[0x4]; // 0x64(0x4)
	struct FDFRichPresence presence; // 0x68(0x90)
	struct FString extraJson; // 0xF8(0x10)
};

// Object: ScriptStruct DFMGameSDK.LBSRelationRet
// Size: 0x88 (Inherited: 0x0)
struct FLBSRelationRet
{
	struct FString OpenId; // 0x0(0x10)
	struct FString userName; // 0x10(0x10)
	int32_t gender; // 0x20(0x4)
	uint8_t Pad_0x24[0x4]; // 0x24(0x4)
	struct FString pictureUrl; // 0x28(0x10)
	struct FString country; // 0x38(0x10)
	struct FString province; // 0x48(0x10)
	struct FString city; // 0x58(0x10)
	struct FString Language; // 0x68(0x10)
	double Distance; // 0x78(0x8)
	int32_t IsFriend; // 0x80(0x4)
	int32_t Timestamp; // 0x84(0x4)
};

// Object: ScriptStruct DFMGameSDK.MetaInfo
// Size: 0x10 (Inherited: 0x0)
struct FMetaInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DFMGameSDK.MapleData
// Size: 0x90 (Inherited: 0x0)
struct FMapleData
{
	int32_t ID; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString NodeName; // 0x8(0x10)
	int32_t ParentId; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	struct FString ServerUrl; // 0x20(0x10)
	int32_t CustomNum_1; // 0x30(0x4)
	int32_t CustomNum_2; // 0x34(0x4)
	struct TMap<struct FString, struct FString> CustomData; // 0x38(0x50)
	uint8_t bIsInReview : 1; // 0x88(0x1), Mask(0x1)
	uint8_t BitPad_0x88_1 : 7; // 0x88(0x1)
	uint8_t bIsVersionUsable : 1; // 0x89(0x1), Mask(0x1)
	uint8_t BitPad_0x89_1 : 7; // 0x89(0x1)
	uint8_t Pad_0x8A[0x6]; // 0x8A(0x6)
};

// Object: ScriptStruct DFMGameSDK.HttpBatch
// Size: 0x30 (Inherited: 0x0)
struct FHttpBatch
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
};

// Object: ScriptStruct DFMGameSDK.CDNNoticeInfo
// Size: 0x38 (Inherited: 0x0)
struct FCDNNoticeInfo
{
	struct FString Title; // 0x0(0x10)
	struct FString Content; // 0x10(0x10)
	uint8_t bIsUsable : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x3]; // 0x21(0x3)
	int32_t NoticeType; // 0x24(0x4)
	struct FString Version; // 0x28(0x10)
};

// Object: ScriptStruct DFMGameSDK.APPUpdateInfo
// Size: 0x28 (Inherited: 0x0)
struct FAPPUpdateInfo
{
	struct FString URL; // 0x0(0x10)
	struct FString Notice; // 0x10(0x10)
	uint8_t bIsUsable : 1; // 0x20(0x1), Mask(0x1)
	uint8_t BitPad_0x20_1 : 7; // 0x20(0x1)
	uint8_t Pad_0x21[0x7]; // 0x21(0x7)
};

// Object: ScriptStruct DFMGameSDK.DFMCrashSightExtraDataStruct
// Size: 0x1E0 (Inherited: 0x0)
struct FDFMCrashSightExtraDataStruct
{
	uint8_t Pad_0x0[0x1E0]; // 0x0(0x1E0)
};

// Object: ScriptStruct DFMGameSDK.DfmFriendReqInfo
// Size: 0x88 (Inherited: 0x0)
struct FDfmFriendReqInfo
{
	int32_t Type; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString User; // 0x8(0x10)
	struct FString Title; // 0x18(0x10)
	struct FString Desc; // 0x28(0x10)
	struct FString ImagePath; // 0x38(0x10)
	struct FString thumbPath; // 0x48(0x10)
	struct FString mediaPath; // 0x58(0x10)
	struct FString link; // 0x68(0x10)
	struct FString extraJson; // 0x78(0x10)
};

// Object: ScriptStruct DFMGameSDK.DFMLocalNotification_IOS
// Size: 0x88 (Inherited: 0x0)
struct FDFMLocalNotification_IOS
{
	int32_t RepeatType; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	int64_t FireTime; // 0x8(0x8)
	int32_t Badge; // 0x10(0x4)
	uint8_t Pad_0x14[0x4]; // 0x14(0x4)
	struct FString AlertBody; // 0x18(0x10)
	struct FString AlertAction; // 0x28(0x10)
	struct TMap<struct FString, struct FString> UserInfo; // 0x38(0x50)
};

// Object: ScriptStruct DFMGameSDK.DFMLocalNotification_OpenHarmony
// Size: 0x48 (Inherited: 0x0)
struct FDFMLocalNotification_OpenHarmony
{
	int32_t Type; // 0x0(0x4)
	int32_t ActionType; // 0x4(0x4)
	struct FString Title; // 0x8(0x10)
	struct FString Content; // 0x18(0x10)
	int32_t Date; // 0x28(0x4)
	int32_t Hour; // 0x2C(0x4)
	int32_t Min; // 0x30(0x4)
	uint8_t Pad_0x34[0x4]; // 0x34(0x4)
	struct FString Uri; // 0x38(0x10)
};

// Object: ScriptStruct DFMGameSDK.DFMLocalNotification_Android
// Size: 0x108 (Inherited: 0x0)
struct FDFMLocalNotification_Android
{
	int32_t Type; // 0x0(0x4)
	int32_t ActionType; // 0x4(0x4)
	int32_t IconType; // 0x8(0x4)
	int32_t Lights; // 0xC(0x4)
	int32_t Ring; // 0x10(0x4)
	int32_t Vibrate; // 0x14(0x4)
	int32_t StyleId; // 0x18(0x4)
	uint8_t Pad_0x1C[0x4]; // 0x1C(0x4)
	int64_t BuilderID; // 0x20(0x8)
	struct FString Content; // 0x28(0x10)
	struct FString CustomContent; // 0x38(0x10)
	struct FString Activity; // 0x48(0x10)
	struct FString PackageDownloadUrl; // 0x58(0x10)
	struct FString PackageName; // 0x68(0x10)
	struct FString IconRes; // 0x78(0x10)
	struct FString Date; // 0x88(0x10)
	struct FString Hour; // 0x98(0x10)
	struct FString Min; // 0xA8(0x10)
	struct FString Title; // 0xB8(0x10)
	struct FString Intent; // 0xC8(0x10)
	struct FString URL; // 0xD8(0x10)
	struct FString RingRaw; // 0xE8(0x10)
	struct FString SmallIcon; // 0xF8(0x10)
};

// Object: ScriptStruct DFMGameSDK.GVoiceRoomMember
// Size: 0x20 (Inherited: 0x0)
struct FGVoiceRoomMember
{
	int32_t MemberId; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString OpenId; // 0x8(0x10)
	uint8_t IsSpeaking : 1; // 0x18(0x1), Mask(0x1)
	uint8_t BitPad_0x18_1 : 7; // 0x18(0x1)
	uint8_t IsMicrophoneOpen : 1; // 0x19(0x1), Mask(0x1)
	uint8_t BitPad_0x19_1 : 7; // 0x19(0x1)
	uint8_t IsForbidden : 1; // 0x1A(0x1), Mask(0x1)
	uint8_t BitPad_0x1A_1 : 7; // 0x1A(0x1)
	uint8_t Pad_0x1B[0x1]; // 0x1B(0x1)
	uint32_t Volume; // 0x1C(0x4)
};

// Object: ScriptStruct DFMGameSDK.GVoiceRoom
// Size: 0xA0 (Inherited: 0x0)
struct FGVoiceRoom
{
	int32_t RoomChannel; // 0x0(0x4)
	int32_t RoomType; // 0x4(0x4)
	int32_t RetryJoinTimes; // 0x8(0x4)
	uint8_t Pad_0xC[0x4]; // 0xC(0x4)
	struct FString RoomName; // 0x10(0x10)
	uint8_t Pad_0x20[0x10]; // 0x20(0x10)
	struct FGVoiceRoomMember SelfMember; // 0x30(0x20)
	struct TMap<struct FString, struct FGVoiceRoomMember> RoomMembers; // 0x50(0x50)
};

// Object: ScriptStruct DFMGameSDK.QueryPS5PlatformBlockListInfoRes
// Size: 0x28 (Inherited: 0x0)
struct FQueryPS5PlatformBlockListInfoRes
{
	int32_t Ret; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Msg; // 0x8(0x10)
	struct TArray<struct FString> BlockOpenIdList; // 0x18(0x10)
};

// Object: ScriptStruct DFMGameSDK.QueryPS5PlatformBlockListInfo
// Size: 0x70 (Inherited: 0x0)
struct FQueryPS5PlatformBlockListInfo
{
	uint8_t Pad_0x0[0x20]; // 0x0(0x20)
	struct FString HeaderKey; // 0x20(0x10)
	struct FString HeaderValue; // 0x30(0x10)
	struct FString RequestBody; // 0x40(0x10)
	struct FString URL; // 0x50(0x10)
	struct FString Verb; // 0x60(0x10)
};

// Object: ScriptStruct DFMGameSDK.QueryUIDRes
// Size: 0x40 (Inherited: 0x0)
struct FQueryUIDRes
{
	int32_t Ret; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString Msg; // 0x8(0x10)
	struct FString OpenId; // 0x18(0x10)
	struct FString uid; // 0x28(0x10)
	uint8_t bHasUID : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x7]; // 0x39(0x7)
};

// Object: ScriptStruct DFMGameSDK.QueryUIDInfo
// Size: 0x80 (Inherited: 0x0)
struct FQueryUIDInfo
{
	uint8_t Pad_0x0[0x30]; // 0x0(0x30)
	struct FString HeaderKey; // 0x30(0x10)
	struct FString HeaderValue; // 0x40(0x10)
	struct FString RequestBody; // 0x50(0x10)
	struct FString URL; // 0x60(0x10)
	struct FString Verb; // 0x70(0x10)
};

// Object: ScriptStruct DFMGameSDK.RecvBufferInfo
// Size: 0x10 (Inherited: 0x0)
struct FRecvBufferInfo
{
	uint8_t Pad_0x0[0x10]; // 0x0(0x10)
};

// Object: ScriptStruct DFMGameSDK.OnlineConnectResult
// Size: 0x2 (Inherited: 0x0)
struct FOnlineConnectResult
{
	uint8_t Pad_0x0[0x2]; // 0x0(0x2)
};

// Object: ScriptStruct DFMGameSDK.GameSDKInitRuleRow
// Size: 0x38 (Inherited: 0x10)
struct FGameSDKInitRuleRow : FDescRowBase
{
	EGameSDKType TargetSDK; // 0x10(0x1)
	EGameSDKInitRuleType RuleType; // 0x11(0x1)
	uint8_t bRuleReverse : 1; // 0x12(0x1), Mask(0x1)
	uint8_t BitPad_0x12_1 : 7; // 0x12(0x1)
	uint8_t Pad_0x13[0x1]; // 0x13(0x1)
	int32_t PriorOrder; // 0x14(0x4)
	struct TArray<struct FString> RuleData; // 0x18(0x10)
	struct FDateTime EffectiveBeginTime; // 0x28(0x8)
	struct FDateTime EffectiveEndTime; // 0x30(0x8)
};

// Object: Class DFMGameSDK.CommonTipView
// Size: 0x350 (Inherited: 0x2F8)
struct UCommonTipView : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UCommonTipView, "CommonTipView")

	struct FMulticastInlineDelegate OnCancelBtnClicked; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnConfirmBtnClicked; // 0x308(0x10)
	struct FMulticastInlineDelegate OnWidgetHide; // 0x318(0x10)
	uint8_t bHasCloseAnim : 1; // 0x328(0x1), Mask(0x1)
	uint8_t BitPad_0x328_1 : 7; // 0x328(0x1)
	uint8_t Pad_0x329[0x7]; // 0x329(0x7)
	struct UDFCommonButton* CancelBtn; // 0x330(0x8)
	struct UDFCommonButton* ConfirmBtn; // 0x338(0x8)
	struct URichTextBlock* ShowText; // 0x340(0x8)
	uint8_t bIsCloseSelfAfterConfirm : 1; // 0x348(0x1), Mask(0x1)
	uint8_t BitPad_0x348_1 : 7; // 0x348(0x1)
	uint8_t Pad_0x349[0x7]; // 0x349(0x7)

	// Object: Function DFMGameSDK.CommonTipView.SetShowText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13556cbc
	// Params: [ Num(1) Size(0x18) ]
	void SetShowText(const struct FText& InText);

	// Object: Function DFMGameSDK.CommonTipView.SetConfirmText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13556ba4
	// Params: [ Num(1) Size(0x18) ]
	void SetConfirmText(const struct FText& InText);

	// Object: Function DFMGameSDK.CommonTipView.SetConfirmBtnVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13556af0
	// Params: [ Num(1) Size(0x1) ]
	void SetConfirmBtnVisibility(uint8_t bIsVisible);

	// Object: Function DFMGameSDK.CommonTipView.SetCloseSelfAfterConfirm
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13556a3c
	// Params: [ Num(1) Size(0x1) ]
	void SetCloseSelfAfterConfirm(uint8_t InClose);

	// Object: Function DFMGameSDK.CommonTipView.SetCancelText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13556924
	// Params: [ Num(1) Size(0x18) ]
	void SetCancelText(const struct FText& InText);

	// Object: Function DFMGameSDK.CommonTipView.SetCancelBtnVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13556870
	// Params: [ Num(1) Size(0x1) ]
	void SetCancelBtnVisibility(uint8_t bIsVisible);

	// Object: Function DFMGameSDK.CommonTipView.RemoveSelf
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13556854
	// Params: [ Num(0) Size(0x0) ]
	void RemoveSelf();

	// Object: DelegateFunction DFMGameSDK.CommonTipView.OnWidgetHide__DelegateSignature
	// Flags: [MulticastDelegate|Public|Delegate]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnWidgetHide__DelegateSignature();

	// Object: Function DFMGameSDK.CommonTipView.OnConfirmBtnClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x10978184
	// Params: [ Num(0) Size(0x0) ]
	void OnConfirmBtnClick();

	// Object: Function DFMGameSDK.CommonTipView.OnCloseCalled
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void OnCloseCalled();

	// Object: Function DFMGameSDK.CommonTipView.OnCancelBtnClick
	// Flags: [Final|Native|Protected]
	// Offset: 0x13556840
	// Params: [ Num(0) Size(0x0) ]
	void OnCancelBtnClick();

	// Object: Function DFMGameSDK.CommonTipView.InitDataWithoutBtn
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x13556728
	// Params: [ Num(1) Size(0x18) ]
	void InitDataWithoutBtn(const struct FText& InShowText);

	// Object: Function DFMGameSDK.CommonTipView.InitDataWithBtn
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x107b4c08
	// Params: [ Num(4) Size(0x49) ]
	void InitDataWithBtn(const struct FText& InShowText, const struct FText& InConfirmText, const struct FText& InCancelText, uint8_t bIsOnlyOneBtn);

	// Object: Function DFMGameSDK.CommonTipView.CallConfirmBtnClickEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x13556714
	// Params: [ Num(0) Size(0x0) ]
	void CallConfirmBtnClickEvent();

	// Object: Function DFMGameSDK.CommonTipView.CallCancelBtnClickEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x13556700
	// Params: [ Num(0) Size(0x0) ]
	void CallCancelBtnClickEvent();
};

// Object: Class DFMGameSDK.BaseBackground
// Size: 0x360 (Inherited: 0x2F8)
struct UBaseBackground : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(UBaseBackground, "BaseBackground")

	struct FName DefaultMovieRowName; // 0x2F8(0x8)
	struct UTextBlock* LoadingPercent_Text; // 0x300(0x8)
	struct UProgressBar* LoadingProgress; // 0x308(0x8)
	struct UTextBlock* LoadingLeftTime_Text; // 0x310(0x8)
	struct UTextBlock* LoadingTips_Text; // 0x318(0x8)
	struct FText DefaultPercentText; // 0x320(0x18)
	struct UProgressBar* LoadingProgressBar_PCMaterial; // 0x338(0x8)
	struct UDFCommonMediaView* CommonMediaView; // 0x340(0x8)
	struct UImage* BgImage; // 0x348(0x8)
	struct UTextBlock* VersionInfo_Text; // 0x350(0x8)
	struct UCanvasPanel* LoadingPanel; // 0x358(0x8)

	// Object: Function DFMGameSDK.BaseBackground.UpdateLoadingTips
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xfc078ec
	// Params: [ Num(1) Size(0x18) ]
	void UpdateLoadingTips(const struct FText& InText);

	// Object: Function DFMGameSDK.BaseBackground.UpdateLoadingPercentFloat
	// Flags: [Native|Public]
	// Offset: 0xf70f840
	// Params: [ Num(1) Size(0x8) ]
	void UpdateLoadingPercentFloat(double InPercent);

	// Object: Function DFMGameSDK.BaseBackground.UpdateLoadingPercent
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf0be3b4
	// Params: [ Num(1) Size(0x4) ]
	void UpdateLoadingPercent(int32_t InPercent);

	// Object: Function DFMGameSDK.BaseBackground.UpdateLeftTimeText
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0xf9aec34
	// Params: [ Num(1) Size(0x18) ]
	void UpdateLeftTimeText(const struct FText& InText);

	// Object: Function DFMGameSDK.BaseBackground.SetLoadingPercentTextVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13555674
	// Params: [ Num(1) Size(0x1) ]
	void SetLoadingPercentTextVisibility(uint8_t InIsVisible);

	// Object: Function DFMGameSDK.BaseBackground.SetLoadingPanelVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x10a153b4
	// Params: [ Num(1) Size(0x1) ]
	void SetLoadingPanelVisibility(uint8_t bIsVisible);

	// Object: Function DFMGameSDK.BaseBackground.SetLeftTimeVisibility
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0xf8eb018
	// Params: [ Num(1) Size(0x1) ]
	void SetLeftTimeVisibility(uint8_t bIsVisible);

	// Object: Function DFMGameSDK.BaseBackground.ResumeMovie
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13555658
	// Params: [ Num(0) Size(0x0) ]
	void ResumeMovie();

	// Object: Function DFMGameSDK.BaseBackground.RemoveSelf
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1355563c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveSelf();

	// Object: Function DFMGameSDK.BaseBackground.PlayMovieByName
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13555590
	// Params: [ Num(1) Size(0x8) ]
	void PlayMovieByName(struct FName InMovieName);

	// Object: Function DFMGameSDK.BaseBackground.PauseMovie
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13555574
	// Params: [ Num(0) Size(0x0) ]
	void PauseMovie();

	// Object: Function DFMGameSDK.BaseBackground.OnMediaClosedUnexpected
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x1046524c
	// Params: [ Num(1) Size(0x10) ]
	void OnMediaClosedUnexpected(struct FString PlayingUrl);
};

// Object: Class DFMGameSDK.CDNInfoManager
// Size: 0x1E0 (Inherited: 0x30)
struct UCDNInfoManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UCDNInfoManager, "CDNInfoManager")

	struct FMulticastInlineDelegate OnGetMetaData; // 0x30(0x10)
	struct FMulticastInlineDelegate OnGetMetaData2MoLi; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGetMaple2MoLi; // 0x50(0x10)
	struct FMulticastInlineDelegate OnGetMapleFailed2MoLi; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMetaFailed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnConfigDownloadSuccess; // 0x80(0x10)
	struct FMulticastInlineDelegate OnConfigFileLoaded; // 0x90(0x10)
	uint8_t Pad_0xA0[0x60]; // 0xA0(0x60)
	struct UCDNPathConfig* CDNPathConfig; // 0x100(0x8)
	struct FAPPUpdateInfo APPUpdateInfo; // 0x108(0x28)
	struct FCDNNoticeInfo CDNNoticeInfo; // 0x130(0x38)
	uint8_t Pad_0x168[0x78]; // 0x168(0x78)

	// Object: Function DFMGameSDK.CDNInfoManager.ResetInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13556444
	// Params: [ Num(0) Size(0x0) ]
	void ResetInfo();

	// Object: Function DFMGameSDK.CDNInfoManager.RequestMetaFile
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13556428
	// Params: [ Num(0) Size(0x0) ]
	void RequestMetaFile();

	// Object: Function DFMGameSDK.CDNInfoManager.RequestDownload
	// Flags: [Native|Public|BlueprintCallable]
	// Offset: 0x13556330
	// Params: [ Num(2) Size(0x11) ]
	void RequestDownload(struct FString URL, uint8_t bIsMeta);

	// Object: Function DFMGameSDK.CDNInfoManager.LoadDynamicConfigFile
	// Flags: [Final|Native|Private]
	// Offset: 0x1355631c
	// Params: [ Num(0) Size(0x0) ]
	void LoadDynamicConfigFile();

	// Object: Function DFMGameSDK.CDNInfoManager.HasConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13556300
	// Params: [ Num(1) Size(0x1) ]
	uint8_t HasConfig();

	// Object: Function DFMGameSDK.CDNInfoManager.HandleMetaData_Internal
	// Flags: [Final|Native|Private|HasOutParms]
	// Offset: 0x135561ec
	// Params: [ Num(1) Size(0x10) ]
	void HandleMetaData_Internal(const struct FMetaInfo& MetaInfo);

	// Object: Function DFMGameSDK.CDNInfoManager.HandleMeta_Config
	// Flags: [Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x135560d8
	// Params: [ Num(1) Size(0x10) ]
	void HandleMeta_Config(const struct FMetaInfo& MetaData);

	// Object: Function DFMGameSDK.CDNInfoManager.GetInited
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135560bc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetInited();

	// Object: Function DFMGameSDK.CDNInfoManager.GetInfoByName_AsString
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13555fd4
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetInfoByName_AsString(struct FString InName);

	// Object: Function DFMGameSDK.CDNInfoManager.GetInfoByName_AsInt
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13555f20
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetInfoByName_AsInt(struct FString InName);

	// Object: Function DFMGameSDK.CDNInfoManager.GetCustomData
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13555e38
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetCustomData(struct FString InCustomKey);

	// Object: Function DFMGameSDK.CDNInfoManager.GetCDNUrl
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13555d8c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCDNUrl();

	// Object: Function DFMGameSDK.CDNInfoManager.GetCDNNoticeInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13555c44
	// Params: [ Num(1) Size(0x38) ]
	struct FCDNNoticeInfo GetCDNNoticeInfo();

	// Object: Function DFMGameSDK.CDNInfoManager.GetCDNInfoMgrIns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13555ba0
	// Params: [ Num(2) Size(0x10) ]
	static struct UCDNInfoManager* GetCDNInfoMgrIns(struct UObject* WorldContext);

	// Object: Function DFMGameSDK.CDNInfoManager.GetCdnHeader
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13555ab8
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetCdnHeader(struct FString InDomain);

	// Object: Function DFMGameSDK.CDNInfoManager.GetCDNFallbackUrls
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13555a48
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetCDNFallbackUrls();

	// Object: Function DFMGameSDK.CDNInfoManager.GetCachedMetaVersion
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x13555a14
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCachedMetaVersion();

	// Object: Function DFMGameSDK.CDNInfoManager.GetAppUpdateInfo
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1355590c
	// Params: [ Num(1) Size(0x28) ]
	struct FAPPUpdateInfo GetAppUpdateInfo();

	// Object: Function DFMGameSDK.CDNInfoManager.EnableCDNInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135558d4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableCDNInfo();
};

// Object: Class DFMGameSDK.MapleSavedInfo
// Size: 0x30 (Inherited: 0x28)
struct UMapleSavedInfo : UObject
{
	DEFINE_UE_CLASS_HELPERS(UMapleSavedInfo, "MapleSavedInfo")

	int64_t LastTimeStamp; // 0x28(0x8)
};

// Object: Class DFMGameSDK.CDNPathConfig
// Size: 0x60 (Inherited: 0x28)
struct UCDNPathConfig : UObject
{
	DEFINE_UE_CLASS_HELPERS(UCDNPathConfig, "CDNPathConfig")

	struct FString BaseRootPath; // 0x28(0x10)
	struct FString DefaultMetaFile; // 0x38(0x10)
	struct FString DefaultConfigFile; // 0x48(0x10)
	struct UMapleSavedInfo* SavedInfo; // 0x58(0x8)

	// Object: Function DFMGameSDK.CDNPathConfig.UpdateTimeStamp
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0x13556644
	// Params: [ Num(1) Size(0x8) ]
	void UpdateTimeStamp(const int64_t& InNewTimestamp);

	// Object: Function DFMGameSDK.CDNPathConfig.GetDefaultConfigFilePath
	// Flags: [Final|Native|Public]
	// Offset: 0x135565d4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDefaultConfigFilePath();

	// Object: Function DFMGameSDK.CDNPathConfig.GetBaseRootPath
	// Flags: [Final|Native|Public]
	// Offset: 0x13556564
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetBaseRootPath();
};

// Object: Class DFMGameSDK.DFMSDKBase
// Size: 0x30 (Inherited: 0x28)
struct UDFMSDKBase : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMSDKBase, "DFMSDKBase")

	uint8_t Pad_0x28[0x8]; // 0x28(0x8)
};

// Object: Class DFMGameSDK.DFGameMatchReport
// Size: 0x30 (Inherited: 0x30)
struct UDFGameMatchReport : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFGameMatchReport, "DFGameMatchReport")

	// Object: Function DFMGameSDK.DFGameMatchReport.SetGameMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13557168
	// Params: [ Num(1) Size(0x4) ]
	static void SetGameMode(int32_t GameMode);

	// Object: Function DFMGameSDK.DFGameMatchReport.ReportMatchStep
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13556f70
	// Params: [ Num(5) Size(0x21) ]
	static void ReportMatchStep(int32_t StepId, int32_t Status, int32_t Code, struct FString Msg, uint8_t Finish);

	// Object: Function DFMGameSDK.DFGameMatchReport.GetGameMode
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13556f3c
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetGameMode();
};

// Object: Class DFMGameSDK.DFMBackGroundDownload
// Size: 0x50 (Inherited: 0x30)
struct UDFMBackGroundDownload : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMBackGroundDownload, "DFMBackGroundDownload")

	struct FMulticastInlineDelegate BGDOnApplicationActiveDelegate; // 0x30(0x10)
	uint8_t Pad_0x40[0x10]; // 0x40(0x10)
};

// Object: Class DFMGameSDK.DFMCrashSight
// Size: 0x7A28 (Inherited: 0x30)
struct UDFMCrashSight : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMCrashSight, "DFMCrashSight")

	uint8_t Pad_0x30[0x79F8]; // 0x30(0x79F8)

	// Object: Function DFMGameSDK.DFMCrashSight.SetUserValue
	// Flags: [Final|Native|Public]
	// Offset: 0x13557fb8
	// Params: [ Num(2) Size(0x20) ]
	void SetUserValue(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMCrashSight.SetUserId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfc6d8c8
	// Params: [ Num(1) Size(0x10) ]
	static void SetUserId(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMCrashSight.SetPlayerPos
	// Flags: [Final|Native|Public]
	// Offset: 0x13557ea0
	// Params: [ Num(3) Size(0xC) ]
	void SetPlayerPos(float X, float Y, float Z);

	// Object: Function DFMGameSDK.DFMCrashSight.SetPerfGearData
	// Flags: [Final|Native|Public]
	// Offset: 0xf6cd8cc
	// Params: [ Num(2) Size(0x20) ]
	void SetPerfGearData(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMCrashSight.SetLoadingFlowData
	// Flags: [Final|Native|Public]
	// Offset: 0xec724b0
	// Params: [ Num(2) Size(0x20) ]
	void SetLoadingFlowData(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMCrashSight.SetHotfixData
	// Flags: [Final|Native|Public]
	// Offset: 0xfd84fd8
	// Params: [ Num(2) Size(0x20) ]
	void SetHotfixData(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMCrashSight.SetGameInfoData
	// Flags: [Final|Native|Public]
	// Offset: 0xf72ba10
	// Params: [ Num(2) Size(0x20) ]
	void SetGameInfoData(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMCrashSight.SetBuildInfoData
	// Flags: [Final|Native|Public]
	// Offset: 0x13557d20
	// Params: [ Num(2) Size(0x20) ]
	void SetBuildInfoData(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMCrashSight.ResetQualityLevelUserValue
	// Flags: [Final|Native|Public]
	// Offset: 0xf6cd194
	// Params: [ Num(1) Size(0x1) ]
	void ResetQualityLevelUserValue(EPerfGearQualityLevel InQualityLevel);

	// Object: Function DFMGameSDK.DFMCrashSight.ResetPerfGearUserValue
	// Flags: [Final|Native|Public]
	// Offset: 0x13557d0c
	// Params: [ Num(0) Size(0x0) ]
	void ResetPerfGearUserValue();

	// Object: Function DFMGameSDK.DFMCrashSight.ResetFPSLevelUserValue
	// Flags: [Final|Native|Public]
	// Offset: 0xf6cd3e8
	// Params: [ Num(1) Size(0x1) ]
	void ResetFPSLevelUserValue(EPerfGearQualityLevel InFpsLevel);

	// Object: Function DFMGameSDK.DFMCrashSight.ResetDeviceLevelUserValue
	// Flags: [Final|Native|Public]
	// Offset: 0xf6ccfe0
	// Params: [ Num(1) Size(0x4) ]
	void ResetDeviceLevelUserValue(int32_t InDeviceLevel);

	// Object: Function DFMGameSDK.DFMCrashSight.ReportLuaException
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13557bd8
	// Params: [ Num(2) Size(0x11) ]
	static void ReportLuaException(struct FString StackTrace, uint8_t bAttachLog);

	// Object: Function DFMGameSDK.DFMCrashSight.ReportHeavyTaskInGameException
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13557af8
	// Params: [ Num(2) Size(0x20) ]
	static void ReportHeavyTaskInGameException(struct FString InErrorMsg, struct FString InStackTrace);

	// Object: Function DFMGameSDK.DFMCrashSight.ReportFrameGen
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x13557ae4
	// Params: [ Num(0) Size(0x0) ]
	static void ReportFrameGen();

	// Object: Function DFMGameSDK.DFMCrashSight.ReportException
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135577d8
	// Params: [ Num(6) Size(0x49) ]
	static void ReportException(int32_t Type, struct FString Name, struct FString Reason, struct FString StackTrace, struct FString extras, uint8_t quit);

	// Object: Function DFMGameSDK.DFMCrashSight.PrintLog
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135576f0
	// Params: [ Num(1) Size(0x10) ]
	static void PrintLog(struct FString logContext);

	// Object: Function DFMGameSDK.DFMCrashSight.PrintExtraData
	// Flags: [Final|Native|Public]
	// Offset: 0x135576dc
	// Params: [ Num(0) Size(0x0) ]
	void PrintExtraData();

	// Object: Function DFMGameSDK.DFMCrashSight.PrintAsyncLoadingContext
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135576c8
	// Params: [ Num(0) Size(0x0) ]
	static void PrintAsyncLoadingContext();

	// Object: Function DFMGameSDK.DFMCrashSight.OnHandleSystemError
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135576b4
	// Params: [ Num(0) Size(0x0) ]
	static void OnHandleSystemError();

	// Object: Function DFMGameSDK.DFMCrashSight.OnHandleSystemEnsure
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135576a0
	// Params: [ Num(0) Size(0x0) ]
	static void OnHandleSystemEnsure();

	// Object: Function DFMGameSDK.DFMCrashSight.OnHandleShutdownAfterError
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355768c
	// Params: [ Num(0) Size(0x0) ]
	static void OnHandleShutdownAfterError();

	// Object: Function DFMGameSDK.DFMCrashSight.OnHandleRenderThreadHung
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13557568
	// Params: [ Num(3) Size(0x30) ]
	static void OnHandleRenderThreadHung(struct FString ErrorMessage, struct FString GpuCallstack, struct FString GpuDumpPath);

	// Object: Function DFMGameSDK.DFMCrashSight.OnHandleGpuCrash
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13557444
	// Params: [ Num(3) Size(0x30) ]
	static void OnHandleGpuCrash(struct FString ErrorMessage, struct FString GpuCallstack, struct FString GpuDumpPath);

	// Object: Function DFMGameSDK.DFMCrashSight.OnGameFlowEnter
	// Flags: [Final|Native|Public]
	// Offset: 0x135573a0
	// Params: [ Num(1) Size(0x1) ]
	void OnGameFlowEnter(EGameFlowStageType GameFlowStage);

	// Object: Function DFMGameSDK.DFMCrashSight.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135572fc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMCrashSight* Get(struct UGameInstance* GameInstanceContext);
};

// Object: Class DFMGameSDK.DFMExpansionPackCoordinator
// Size: 0x30 (Inherited: 0x30)
struct UDFMExpansionPackCoordinator : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMExpansionPackCoordinator, "DFMExpansionPackCoordinator")

	// Object: Function DFMGameSDK.DFMExpansionPackCoordinator.IsSupportLitePackage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13559aa0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSupportLitePackage();

	// Object: Function DFMGameSDK.DFMExpansionPackCoordinator.IsDownloadedByModuleName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135599e8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsDownloadedByModuleName(struct FString ModuleName);
};

// Object: Class DFMGameSDK.DFMGameAnnounce
// Size: 0xD8 (Inherited: 0x30)
struct UDFMGameAnnounce : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameAnnounce, "DFMGameAnnounce")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnLoadNoticeDataDelegate; // 0x38(0x10)
	uint8_t Pad_0x48[0x90]; // 0x48(0x90)

	// Object: Function DFMGameSDK.DFMGameAnnounce.LoadNoticeData
	// Flags: [Final|Native|Public]
	// Offset: 0x10a7e940
	// Params: [ Num(7) Size(0x68) ]
	struct FString LoadNoticeData(struct FString NoticeGroup, struct FString Language, struct FString Region, struct FString Partition, struct FString extraJson, float CacheClearInterval);

	// Object: Function DFMGameSDK.DFMGameAnnounce.ClearAnnounceDataCache
	// Flags: [Final|Native|Public]
	// Offset: 0x13559af8
	// Params: [ Num(0) Size(0x0) ]
	void ClearAnnounceDataCache();
};

// Object: Class DFMGameSDK.DFMGameBeacon
// Size: 0x30 (Inherited: 0x30)
struct UDFMGameBeacon : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameBeacon, "DFMGameBeacon")
};

// Object: Class DFMGameSDK.DFMGameBrowser
// Size: 0x38 (Inherited: 0x30)
struct UDFMGameBrowser : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameBrowser, "DFMGameBrowser")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)

	// Object: Function DFMGameSDK.DFMGameBrowser.SimpleOpenUrl
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1355a580
	// Params: [ Num(1) Size(0x10) ]
	static void SimpleOpenUrl(struct FString& URL);

	// Object: Function DFMGameSDK.DFMGameBrowser.OpenUrl
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1355a368
	// Params: [ Num(6) Size(0x29) ]
	static void OpenUrl(struct FString& URL, int32_t screenType, uint8_t isFullScreen, uint8_t isUseURLEncode, struct FString& extraJson, uint8_t isBrowser);

	// Object: Function DFMGameSDK.DFMGameBrowser.OpenAmsCenter
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1355a028
	// Params: [ Num(8) Size(0x78) ]
	static void OpenAmsCenter(struct FString& gameName, struct FString& CampaignId, struct FString& AreaID, struct FString& PlatformId, struct FString& partitionId, struct FString& roleId, int32_t screenType, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameBrowser.LaunchURL
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13559e30
	// Params: [ Num(3) Size(0x30) ]
	static void LaunchURL(struct FString URL, struct FString Parms_, struct FString Error);

	// Object: Function DFMGameSDK.DFMGameBrowser.GetMD5Hash
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13559d04
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetMD5Hash(struct FString InputString);

	// Object: Function DFMGameSDK.DFMGameBrowser.GetEncodeUrl
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x13559c14
	// Params: [ Num(2) Size(0x20) ]
	static struct FString GetEncodeUrl(struct FString& URL);

	// Object: Function DFMGameSDK.DFMGameBrowser.CallJS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13559b2c
	// Params: [ Num(1) Size(0x10) ]
	static void CallJS(struct FString JsonJsParam);
};

// Object: Class DFMGameSDK.DFMGameCentauri
// Size: 0xF8 (Inherited: 0x30)
struct UDFMGameCentauri : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameCentauri, "DFMGameCentauri")

	uint8_t EnableLog : 1; // 0x29(0x1), Mask(0x1)
	uint8_t EnableSaveLog : 1; // 0x2A(0x1), Mask(0x1)
	struct FString BusinessId; // 0x30(0x10)
	struct FString OfferId; // 0x40(0x10)
	struct FString OpenId; // 0x50(0x10)
	struct FString IDCInfo; // 0x60(0x10)
	struct FString RegionCode; // 0x70(0x10)
	struct FString CurrencyCode; // 0x80(0x10)
	uint8_t bSandbox : 1; // 0x90(0x1), Mask(0x1)
	uint8_t BitPad_0x90_3 : 5; // 0x90(0x1)
	uint8_t Pad_0x91[0x7]; // 0x91(0x7)
	struct FString PayInfo; // 0x98(0x10)
	struct FString ServerId; // 0xA8(0x10)
	int32_t PaymentMethod; // 0xB8(0x4)
	uint8_t Pad_0xBC[0x4]; // 0xBC(0x4)
	struct FString URL; // 0xC0(0x10)
	struct FString PayChannel; // 0xD0(0x10)
	struct TArray<struct FString> SkuLists; // 0xE0(0x10)
	uint8_t Pad_0xF0[0x8]; // 0xF0(0x8)

	// Object: Function DFMGameSDK.DFMGameCentauri.ReapplyReceipt
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a740
	// Params: [ Num(0) Size(0x0) ]
	void ReapplyReceipt();

	// Object: Function DFMGameSDK.DFMGameCentauri.Pay
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a72c
	// Params: [ Num(0) Size(0x0) ]
	void Pay();

	// Object: Function DFMGameSDK.DFMGameCentauri.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a718
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DFMGameSDK.DFMGameCentauri.GetStoreCountryCode
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a680
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetStoreCountryCode();

	// Object: Function DFMGameSDK.DFMGameCentauri.GetPromotionInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a66c
	// Params: [ Num(0) Size(0x0) ]
	void GetPromotionInfo();

	// Object: Function DFMGameSDK.DFMGameCentauri.GetProductInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a658
	// Params: [ Num(0) Size(0x0) ]
	void GetProductInfo();

	// Object: Function DFMGameSDK.DFMGameCentauri.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf081790
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameCentauri* Get(struct UGameInstance* GameInstance);
};

// Object: Class DFMGameSDK.DFMGameConnect
// Size: 0x350 (Inherited: 0x30)
struct UDFMGameConnect : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameConnect, "DFMGameConnect")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FMulticastInlineDelegate OnPackRecvDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnConnectBeginDelegate; // 0x50(0x10)
	struct FMulticastInlineDelegate OnConnectedDelegate; // 0x60(0x10)
	struct FMulticastInlineDelegate OnStateChangedDelegate; // 0x70(0x10)
	struct FMulticastInlineDelegate OnRelayConnectedDelegate; // 0x80(0x10)
	struct FMulticastInlineDelegate OnDisconnectDelegate; // 0x90(0x10)
	struct FMulticastInlineDelegate OnSendHeartbeatProtoDelegate; // 0xA0(0x10)
	struct FMulticastInlineDelegate OnACEConnectBeginDelegate; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnACEConnectedDelegate; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnACEDisconnectDelegate; // 0xD0(0x10)
	struct FMulticastInlineDelegate OnRestartReconnectedDelegate; // 0xE0(0x10)
	struct UCommonTipView* ConnectQueueTipView; // 0xF0(0x8)
	uint8_t Pad_0xF8[0xF8]; // 0xF8(0xF8)
	uint32_t GapTime; // 0x1F0(0x4)
	uint8_t bUseNewProtoSystem : 1; // 0x1F4(0x1), Mask(0x1)
	uint8_t BitPad_0x1F4_1 : 7; // 0x1F4(0x1)
	uint8_t Pad_0x1F5[0x15B]; // 0x1F5(0x15B)

	// Object: Function DFMGameSDK.DFMGameConnect.TestChar
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ac48
	// Params: [ Num(1) Size(0x50) ]
	void TestChar(struct TMap<struct FString, struct FString> ntf);

	// Object: Function DFMGameSDK.DFMGameConnect.Shutdown
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ac34
	// Params: [ Num(0) Size(0x0) ]
	void Shutdown();

	// Object: Function DFMGameSDK.DFMGameConnect.SetRunningHeartbeat
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ab8c
	// Params: [ Num(1) Size(0x1) ]
	void SetRunningHeartbeat(uint8_t bFlag);

	// Object: Function DFMGameSDK.DFMGameConnect.SetHeartbeatGapTime
	// Flags: [Final|Native|Public]
	// Offset: 0x1355aaec
	// Params: [ Num(1) Size(0x4) ]
	void SetHeartbeatGapTime(uint32_t _gapTime);

	// Object: Function DFMGameSDK.DFMGameConnect.RelayConnectServer
	// Flags: [Final|Native|Public]
	// Offset: 0x1355aad8
	// Params: [ Num(0) Size(0x0) ]
	void RelayConnectServer();

	// Object: Function DFMGameSDK.DFMGameConnect.InitOnConnected
	// Flags: [Final|Native|Public]
	// Offset: 0x1355aac4
	// Params: [ Num(0) Size(0x0) ]
	void InitOnConnected();

	// Object: Function DFMGameSDK.DFMGameConnect.InitHeartBeatThread
	// Flags: [Final|Native|Public]
	// Offset: 0x1355aab0
	// Params: [ Num(0) Size(0x0) ]
	void InitHeartBeatThread();

	// Object: Function DFMGameSDK.DFMGameConnect.InitConnector
	// Flags: [Final|Native|Public]
	// Offset: 0x1355aa9c
	// Params: [ Num(0) Size(0x0) ]
	void InitConnector();

	// Object: Function DFMGameSDK.DFMGameConnect.GetRTT
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1355aa80
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetRTT();

	// Object: Function DFMGameSDK.DFMGameConnect.GetLastConnectedInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a9dc
	// Params: [ Num(1) Size(0x90) ]
	struct FConnectServerInfo GetLastConnectedInfo();

	// Object: Function DFMGameSDK.DFMGameConnect.GetIsDisconnected
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1355a9c0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsDisconnected();

	// Object: Function DFMGameSDK.DFMGameConnect.GetHeartbeatSeqId
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a9a4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetHeartbeatSeqId();

	// Object: Function DFMGameSDK.DFMGameConnect.GetHeartbeatGapTime
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a988
	// Params: [ Num(1) Size(0x4) ]
	uint32_t GetHeartbeatGapTime();

	// Object: Function DFMGameSDK.DFMGameConnect.GetEnableHeartbeatThread
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a96c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetEnableHeartbeatThread();

	// Object: Function DFMGameSDK.DFMGameConnect.GetConnectInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x107e6b40
	// Params: [ Num(1) Size(0x50) ]
	struct FConnectorResultInfo GetConnectInfo();

	// Object: Function DFMGameSDK.DFMGameConnect.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf6b6884
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameConnect* Get(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.DFMGameConnect.EnableHeartbeatThread
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a954
	// Params: [ Num(0) Size(0x0) ]
	void EnableHeartbeatThread();

	// Object: Function DFMGameSDK.DFMGameConnect.DisConnectServer
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a940
	// Params: [ Num(0) Size(0x0) ]
	void DisConnectServer();

	// Object: Function DFMGameSDK.DFMGameConnect.DeinitConnector
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a92c
	// Params: [ Num(0) Size(0x0) ]
	void DeinitConnector();

	// Object: Function DFMGameSDK.DFMGameConnect.ConnectServerWithLastConnectedInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a8f8
	// Params: [ Num(1) Size(0x2) ]
	struct FOnlineConnectResult ConnectServerWithLastConnectedInfo();

	// Object: Function DFMGameSDK.DFMGameConnect.ConnectServer
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x10b2d014
	// Params: [ Num(2) Size(0x92) ]
	struct FOnlineConnectResult ConnectServer(const struct FConnectServerInfo& Info);

	// Object: Function DFMGameSDK.DFMGameConnect.CancelStayInQueue
	// Flags: [Final|Native|Public]
	// Offset: 0x1355a8e4
	// Params: [ Num(0) Size(0x0) ]
	void CancelStayInQueue();

	// Object: Function DFMGameSDK.DFMGameConnect.BroadcastRestartReconnected
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1355a830
	// Params: [ Num(1) Size(0x1) ]
	void BroadcastRestartReconnected(uint8_t bIsSuccess);

	// Object: Function DFMGameSDK.DFMGameConnect.BindLuaFunctions
	// Flags: [Final|Native|Public]
	// Offset: 0x10b2cbec
	// Params: [ Num(1) Size(0x1) ]
	uint8_t BindLuaFunctions();
};

// Object: Class DFMGameSDK.DFMGameFriend
// Size: 0x68 (Inherited: 0x30)
struct UDFMGameFriend : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameFriend, "DFMGameFriend")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnBaseResultNotifyEvent; // 0x38(0x10)
	struct FMulticastInlineDelegate OnDiscordBaseResultNotifyEvent; // 0x48(0x10)
	struct FMulticastInlineDelegate OnDiscordQueryFriendNotifyEvent; // 0x58(0x10)

	// Object: Function DFMGameSDK.DFMGameFriend.ShareLua
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355c708
	// Params: [ Num(10) Size(0x98) ]
	static void ShareLua(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString mediaPath, struct FString extraJson, struct FString ImagePath);

	// Object: Function DFMGameSDK.DFMGameFriend.ShareImageMessage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355c558
	// Params: [ Num(3) Size(0x28) ]
	static void ShareImageMessage(struct FString Channel, int32_t Type, struct FString ImagePath);

	// Object: Function DFMGameSDK.DFMGameFriend.Share
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1355c3b8
	// Params: [ Num(2) Size(0x98) ]
	static void Share(struct FDfmFriendReqInfo& reqInfo, struct FString Channel);

	// Object: Function DFMGameSDK.DFMGameFriend.SetDiscordOnline
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355c3a4
	// Params: [ Num(0) Size(0x0) ]
	static void SetDiscordOnline();

	// Object: Function DFMGameSDK.DFMGameFriend.SendMessageLua
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355beb8
	// Params: [ Num(9) Size(0x88) ]
	static void SendMessageLua(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString mediaPath, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameFriend.SendMessage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355ba58
	// Params: [ Num(8) Size(0x78) ]
	static void SendMessage(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameFriend.SendImageMessage
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355b56c
	// Params: [ Num(9) Size(0x88) ]
	static void SendImageMessage(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString extraJson, struct FString ImagePath);

	// Object: Function DFMGameSDK.DFMGameFriend.ReadFromBuffer
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355b3c0
	// Params: [ Num(5) Size(0x48) ]
	static struct FString ReadFromBuffer(struct FString Buffer, struct FString TextNamespace, struct FString PackageNamespace, uint8_t bRequiresQuotes);

	// Object: Function DFMGameSDK.DFMGameFriend.QueryFriends
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355b0f8
	// Params: [ Num(6) Size(0x40) ]
	static void QueryFriends(int32_t page, int32_t Count, uint8_t IsInGame, struct FString Channel, struct FString subChannel, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameFriend.InitGameFriend
	// Flags: [Final|Native|Public]
	// Offset: 0x1355b0e4
	// Params: [ Num(0) Size(0x0) ]
	void InitGameFriend();

	// Object: Function DFMGameSDK.DFMGameFriend.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf082a58
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameFriend* Get(struct UWorld* WorldContextObject);

	// Object: Function DFMGameSDK.DFMGameFriend.DiscordQueryFriends
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355b018
	// Params: [ Num(2) Size(0x8) ]
	static void DiscordQueryFriends(int32_t page, int32_t Count);

	// Object: Function DFMGameSDK.DFMGameFriend.DiscordAuthorize
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355b004
	// Params: [ Num(0) Size(0x0) ]
	static void DiscordAuthorize();

	// Object: Function DFMGameSDK.DFMGameFriend.AddFriend
	// Flags: [Final|Native|Static|Public|HasOutParms]
	// Offset: 0x1355ae64
	// Params: [ Num(2) Size(0x98) ]
	static void AddFriend(struct FDfmFriendReqInfo& reqInfo, struct FString Channel);
};

// Object: Class DFMGameSDK.DFMGameGarena
// Size: 0x138 (Inherited: 0x30)
struct UDFMGameGarena : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameGarena, "DFMGameGarena")

	uint8_t EnableLog : 1; // 0x29(0x1), Mask(0x1)
	uint8_t EnableSaveLog : 1; // 0x2A(0x1), Mask(0x1)
	struct FString OfferId; // 0x30(0x10)
	struct FString OpenId; // 0x40(0x10)
	struct FString ZoneId; // 0x50(0x10)
	struct FString pf; // 0x60(0x10)
	struct FString Env; // 0x70(0x10)
	struct FString IDC; // 0x80(0x10)
	struct FString IDCInfo; // 0x90(0x10)
	struct FString CurContry; // 0xA0(0x10)
	struct FString CurCurrency; // 0xB0(0x10)
	uint8_t bSandbox : 1; // 0xC0(0x1), Mask(0x1)
	uint8_t BitPad_0xC0_3 : 5; // 0xC0(0x1)
	uint8_t Pad_0xC1[0x7]; // 0xC1(0x7)
	struct FString roleId; // 0xC8(0x10)
	struct FString ServerId; // 0xD8(0x10)
	struct FString ProductID; // 0xE8(0x10)
	struct FString PayChannel; // 0xF8(0x10)
	struct FString Local; // 0x108(0x10)
	struct FString ChannelExtras; // 0x118(0x10)
	struct TArray<struct FString> ProductLists; // 0x128(0x10)

	// Object: Function DFMGameSDK.DFMGameGarena.PayGoods
	// Flags: [Final|Native|Public]
	// Offset: 0x1355eaa0
	// Params: [ Num(0) Size(0x0) ]
	void PayGoods();

	// Object: Function DFMGameSDK.DFMGameGarena.Pay
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ea8c
	// Params: [ Num(0) Size(0x0) ]
	void Pay();

	// Object: Function DFMGameSDK.DFMGameGarena.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ea78
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DFMGameSDK.DFMGameGarena.GetProductInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ea64
	// Params: [ Num(0) Size(0x0) ]
	void GetProductInfo();

	// Object: Function DFMGameSDK.DFMGameGarena.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x107373ec
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameGarena* Get(struct UGameInstance* GameInstance);
};

// Object: Class DFMGameSDK.DFMGameGPM
// Size: 0x58 (Inherited: 0x30)
struct UDFMGameGPM : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameGPM, "DFMGameGPM")

	uint8_t Pad_0x30[0x28]; // 0x30(0x28)

	// Object: Function DFMGameSDK.DFMGameGPM.UpdateStoryStateGameInfo
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x135600bc
	// Params: [ Num(1) Size(0x4) ]
	static void UpdateStoryStateGameInfo(int32_t State);

	// Object: Function DFMGameSDK.DFMGameGPM.UpdateGameSceneByInt
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355ff78
	// Params: [ Num(4) Size(0x10) ]
	static void UpdateGameSceneByInt(int32_t Key, int32_t value1, int32_t value2, int32_t Value3);

	// Object: Function DFMGameSDK.DFMGameGPM.UpdateGameScene
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x106d9080
	// Params: [ Num(2) Size(0x18) ]
	static void UpdateGameScene(int32_t Key, struct FString SceneID);

	// Object: Function DFMGameSDK.DFMGameGPM.SetRoomId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355fee4
	// Params: [ Num(1) Size(0x8) ]
	static void SetRoomId(uint64_t InRoomId);

	// Object: Function DFMGameSDK.DFMGameGPM.SetOpenId
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4c3758
	// Params: [ Num(3) Size(0x30) ]
	static void SetOpenId(struct FString OpenId, struct FString channelID, struct FString APPID);

	// Object: Function DFMGameSDK.DFMGameGPM.ReportTwoParams
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355fcc0
	// Params: [ Num(5) Size(0x2C) ]
	static void ReportTwoParams(struct FString Category, struct FString Key, float valueA, float valueB, uint32_t FrameIndex);

	// Object: Function DFMGameSDK.DFMGameGPM.ReportStringParam
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355fa8c
	// Params: [ Num(4) Size(0x34) ]
	static void ReportStringParam(struct FString Category, struct FString Key, struct FString Value, uint32_t FrameIndex);

	// Object: Function DFMGameSDK.DFMGameGPM.ReportOneParamI
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355f8a8
	// Params: [ Num(4) Size(0x28) ]
	static void ReportOneParamI(struct FString Category, struct FString Key, int32_t valueA, uint32_t FrameIndex);

	// Object: Function DFMGameSDK.DFMGameGPM.ReportOneParam
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355f6c0
	// Params: [ Num(4) Size(0x28) ]
	static void ReportOneParam(struct FString Category, struct FString Key, float valueA, uint32_t FrameIndex);

	// Object: Function DFMGameSDK.DFMGameGPM.ReportEventIS
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355f590
	// Params: [ Num(2) Size(0x18) ]
	static void ReportEventIS(int32_t Key, struct FString Info);

	// Object: Function DFMGameSDK.DFMGameGPM.ReportEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355f398
	// Params: [ Num(3) Size(0x30) ]
	static void ReportEvent(struct FString EventName, struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.DFMGameGPM.PostStepEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355f04c
	// Params: [ Num(8) Size(0x42) ]
	static void PostStepEvent(struct FString eventCategory, int32_t StepId, int32_t Status, int32_t Code, struct FString Msg, struct FString extraKey, uint8_t authorize, uint8_t Finish);

	// Object: Function DFMGameSDK.DFMGameGPM.PostFrame
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355ef7c
	// Params: [ Num(2) Size(0x8) ]
	static void PostFrame(float DeltaTime, uint32_t FrameIndex);

	// Object: Function DFMGameSDK.DFMGameGPM.MarkLevelLoadCompleted
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355ef68
	// Params: [ Num(0) Size(0x0) ]
	static void MarkLevelLoadCompleted();

	// Object: Function DFMGameSDK.DFMGameGPM.MarkLevelLoad
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355ee80
	// Params: [ Num(1) Size(0x10) ]
	static void MarkLevelLoad(struct FString SceneName);

	// Object: Function DFMGameSDK.DFMGameGPM.MarkLevelFin
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355ee6c
	// Params: [ Num(0) Size(0x0) ]
	static void MarkLevelFin();

	// Object: Function DFMGameSDK.DFMGameGPM.InitGPM
	// Flags: [Final|Native|Public]
	// Offset: 0x1355ee58
	// Params: [ Num(0) Size(0x0) ]
	void InitGPM();

	// Object: Function DFMGameSDK.DFMGameGPM.GetXID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4b9e00
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetXID();

	// Object: Function DFMGameSDK.DFMGameGPM.GetOAID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4b9a94
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetOAID();

	// Object: Function DFMGameSDK.DFMGameGPM.GetDeviceLevelByQcc
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4be0a4
	// Params: [ Num(2) Size(0x14) ]
	static int32_t GetDeviceLevelByQcc(struct FString ConfigName);

	// Object: Function DFMGameSDK.DFMGameGPM.GetCAID
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf4b98a8
	// Params: [ Num(1) Size(0x10) ]
	static struct FString GetCAID();

	// Object: Function DFMGameSDK.DFMGameGPM.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf0851ac
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameGPM* Get(struct UWorld* WorldContextObject);

	// Object: Function DFMGameSDK.DFMGameGPM.EndTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355ee44
	// Params: [ Num(0) Size(0x0) ]
	static void EndTag();

	// Object: Function DFMGameSDK.DFMGameGPM.EndExtTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf98a6f8
	// Params: [ Num(1) Size(0x10) ]
	static void EndExtTag(struct FString TagName);

	// Object: Function DFMGameSDK.DFMGameGPM.EndExclude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf903850
	// Params: [ Num(0) Size(0x0) ]
	static void EndExclude();

	// Object: Function DFMGameSDK.DFMGameGPM.CheckDeviceGameScene
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1355ed48
	// Params: [ Num(2) Size(0x11) ]
	static uint8_t CheckDeviceGameScene(struct FString GameScene);

	// Object: Function DFMGameSDK.DFMGameGPM.BeginTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1355ec60
	// Params: [ Num(1) Size(0x10) ]
	static void BeginTag(struct FString TagName);

	// Object: Function DFMGameSDK.DFMGameGPM.BeginExtTag
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf9b3c44
	// Params: [ Num(1) Size(0x10) ]
	static void BeginExtTag(struct FString TagName);

	// Object: Function DFMGameSDK.DFMGameGPM.BeginExclude
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf986248
	// Params: [ Num(0) Size(0x0) ]
	static void BeginExclude();
};

// Object: Class DFMGameSDK.DFMGameIdcSelector
// Size: 0x188 (Inherited: 0x30)
struct UDFMGameIdcSelector : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameIdcSelector, "DFMGameIdcSelector")

	uint8_t Pad_0x30[0x90]; // 0x30(0x90)
	struct UDFMGameUdpMgr* udpMgrIns; // 0xC0(0x8)
	uint8_t Pad_0xC8[0x10]; // 0xC8(0x10)
	struct TArray<struct FString> IdcIPArray; // 0xD8(0x10)
	struct TArray<int32_t> IdcPortArray; // 0xE8(0x10)
	struct TArray<int32_t> udpSequenceIdArray; // 0xF8(0x10)
	float timeoutTimeConfig; // 0x108(0x4)
	float tickTimeConfig; // 0x10C(0x4)
	uint8_t Pad_0x110[0x78]; // 0x110(0x78)

	// Object: Function DFMGameSDK.DFMGameIdcSelector.SetUdpPlayerId
	// Flags: [Final|Native|Public]
	// Offset: 0xfb194dc
	// Params: [ Num(1) Size(0x10) ]
	void SetUdpPlayerId(struct FString _playerId);

	// Object: Function DFMGameSDK.DFMGameIdcSelector.SetUdpConfig
	// Flags: [Final|Native|Public]
	// Offset: 0xfe10274
	// Params: [ Num(4) Size(0x10) ]
	void SetUdpConfig(float TickTime, float TimeOutTime, uint8_t bUseUdpPing, int32_t pingTimes);

	// Object: Function DFMGameSDK.DFMGameIdcSelector.SetEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfe3e62c
	// Params: [ Num(1) Size(0x1) ]
	void SetEnable(uint8_t bEnable);

	// Object: Function DFMGameSDK.DFMGameIdcSelector.SetCacheInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13560584
	// Params: [ Num(3) Size(0xC) ]
	void SetCacheInfo(float Time, int32_t SeqId, int32_t totalReceive);

	// Object: Function DFMGameSDK.DFMGameIdcSelector.RecordIdcTimeMap
	// Flags: [Final|Native|Public]
	// Offset: 0x13560450
	// Params: [ Num(2) Size(0x14) ]
	void RecordIdcTimeMap(struct FString IdcName, float Time);

	// Object: Function DFMGameSDK.DFMGameIdcSelector.GetUdpPlayerId
	// Flags: [Final|Native|Public]
	// Offset: 0x1356041c
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetUdpPlayerId();

	// Object: Function DFMGameSDK.DFMGameIdcSelector.GetLocalIPAddr
	// Flags: [Final|Native|Public]
	// Offset: 0x10089200
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLocalIPAddr();

	// Object: Function DFMGameSDK.DFMGameIdcSelector.GetIdcTimeByIdcName
	// Flags: [Final|Native|Public]
	// Offset: 0x1356031c
	// Params: [ Num(2) Size(0x14) ]
	float GetIdcTimeByIdcName(struct FString IdcName);

	// Object: Function DFMGameSDK.DFMGameIdcSelector.GetIdcNameTimeMap
	// Flags: [Final|Native|Public]
	// Offset: 0x13560274
	// Params: [ Num(1) Size(0x50) ]
	struct TMap<struct FString, float> GetIdcNameTimeMap();

	// Object: Function DFMGameSDK.DFMGameIdcSelector.GetCurrentTime
	// Flags: [Final|Native|Public]
	// Offset: 0x13560240
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetCurrentTime();

	// Object: Function DFMGameSDK.DFMGameIdcSelector.CleanCacheInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356022c
	// Params: [ Num(0) Size(0x0) ]
	void CleanCacheInfo();

	// Object: Function DFMGameSDK.DFMGameIdcSelector.AddUdpIpAddr
	// Flags: [Final|Native|Public]
	// Offset: 0xf7a4214
	// Params: [ Num(3) Size(0x18) ]
	void AddUdpIpAddr(struct FString TheIP, int32_t ThePort, uint32_t SeqId);
};

// Object: Class DFMGameSDK.DFMGameLBS
// Size: 0x78 (Inherited: 0x30)
struct UDFMGameLBS : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameLBS, "DFMGameLBS")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnLBSLocationDelegate; // 0x38(0x10)
	struct FMulticastInlineDelegate OnLBSRelationDelegate; // 0x48(0x10)
	struct FMulticastInlineDelegate OnLBSIPInfoDelegate; // 0x58(0x10)
	struct FMulticastInlineDelegate OnLBSBaseDelegate; // 0x68(0x10)

	// Object: Function DFMGameSDK.DFMGameLBS.GetNearby
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x1356079c
	// Params: [ Num(0) Size(0x0) ]
	static void GetNearby();

	// Object: Function DFMGameSDK.DFMGameLBS.GetLocation
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x13560788
	// Params: [ Num(0) Size(0x0) ]
	static void GetLocation();

	// Object: Function DFMGameSDK.DFMGameLBS.GetIPInfo
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x13560774
	// Params: [ Num(0) Size(0x0) ]
	static void GetIPInfo();

	// Object: Function DFMGameSDK.DFMGameLBS.Get
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x135606d0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameLBS* Get(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.DFMGameLBS.ClearLocation
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x135606bc
	// Params: [ Num(0) Size(0x0) ]
	static void ClearLocation();
};

// Object: Class DFMGameSDK.DFMGamelet
// Size: 0x30 (Inherited: 0x30)
struct UDFMGamelet : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGamelet, "DFMGamelet")

	// Object: Function DFMGameSDK.DFMGamelet.Tick
	// Flags: [Final|Native|Public]
	// Offset: 0xe7a5864
	// Params: [ Num(1) Size(0x4) ]
	void Tick(float fDeltaTime);

	// Object: Function DFMGameSDK.DFMGamelet.SetScriptExternalLoadDir
	// Flags: [Final|Native|Public]
	// Offset: 0x13560c04
	// Params: [ Num(1) Size(0x10) ]
	void SetScriptExternalLoadDir(struct FString ExternalLoadDir);

	// Object: Function DFMGameSDK.DFMGamelet.SetPixUIMaxLayerId
	// Flags: [Final|Native|Public]
	// Offset: 0x1094b1d0
	// Params: [ Num(1) Size(0x4) ]
	void SetPixUIMaxLayerId(int32_t nMaxLayerId);

	// Object: Function DFMGameSDK.DFMGamelet.SetGameWidgetLoadDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13560bf0
	// Params: [ Num(0) Size(0x0) ]
	void SetGameWidgetLoadDelegate();

	// Object: Function DFMGameSDK.DFMGamelet.SetFont
	// Flags: [Final|Native|Public]
	// Offset: 0x1012e30c
	// Params: [ Num(2) Size(0x20) ]
	void SetFont(struct FString FontName, struct FString FontPath);

	// Object: Function DFMGameSDK.DFMGamelet.SendMessageToApp
	// Flags: [Final|Native|Public]
	// Offset: 0x13560b00
	// Params: [ Num(2) Size(0x20) ]
	void SendMessageToApp(struct FString APPID, struct FString json_msg);

	// Object: Function DFMGameSDK.DFMGamelet.RefreshUserdata
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13560a18
	// Params: [ Num(1) Size(0x50) ]
	void RefreshUserdata(const struct TMap<struct FString, struct FString>& UserData);

	// Object: Function DFMGameSDK.DFMGamelet.OpenSDK
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x109159a8
	// Params: [ Num(2) Size(0x54) ]
	void OpenSDK(const struct TMap<struct FString, struct FString>& UserData, int32_t Env);

	// Object: Function DFMGameSDK.DFMGamelet.OpenApp
	// Flags: [Final|Native|Public]
	// Offset: 0x13560928
	// Params: [ Num(2) Size(0x20) ]
	void OpenApp(struct FString APPID, struct FString OpenArgs);

	// Object: Function DFMGameSDK.DFMGamelet.InitSDK
	// Flags: [Final|Native|Public]
	// Offset: 0x10992f90
	// Params: [ Num(1) Size(0x4) ]
	int32_t InitSDK();

	// Object: Function DFMGameSDK.DFMGamelet.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xe7a6128
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGamelet* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DFMGamelet.CloseSDK
	// Flags: [Final|Native|Public]
	// Offset: 0x13560914
	// Params: [ Num(0) Size(0x0) ]
	void CloseSDK();

	// Object: Function DFMGameSDK.DFMGamelet.CloseApp
	// Flags: [Final|Native|Public]
	// Offset: 0x13560868
	// Params: [ Num(1) Size(0x10) ]
	void CloseApp(struct FString APPID);
};

// Object: Class DFMGameSDK.DFMGameLogin
// Size: 0x130 (Inherited: 0x30)
struct UDFMGameLogin : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameLogin, "DFMGameLogin")

	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoginRetDelegate; // 0x40(0x10)
	struct FMulticastInlineDelegate OnLoginQueryUserInfoRetDelegate; // 0x50(0x10)
	struct FMulticastInlineDelegate OnQrCodeRetDelegate; // 0x60(0x10)
	struct FMulticastInlineDelegate OnBaseRetDelegate; // 0x70(0x10)
	struct FMulticastInlineDelegate OnExtendRetDelegate; // 0x80(0x10)
	struct FMulticastInlineDelegate DfVoiceControlRetDelegate; // 0x90(0x10)
	struct FMulticastInlineDelegate INTLComplianceResultDelegate; // 0xA0(0x10)
	struct FMulticastInlineDelegate OnBindAccountRetDelegate; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnGameGetFocusFromLIP; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnWebLoginDelegate; // 0xD0(0x10)
	struct FTimerHandle CheckWebLoginRetTimer; // 0xE0(0x8)
	uint8_t Pad_0xE8[0x4]; // 0xE8(0x4)
	uint8_t bNeedShowTips : 1; // 0xEC(0x1), Mask(0x1)
	uint8_t BitPad_0xEC_1 : 7; // 0xEC(0x1)
	uint8_t Pad_0xED[0x43]; // 0xED(0x43)

	// Object: Function DFMGameSDK.DFMGameLogin.SwitchUser
	// Flags: [Final|Native|Public]
	// Offset: 0x13562444
	// Params: [ Num(1) Size(0x1) ]
	void SwitchUser(uint8_t State);

	// Object: Function DFMGameSDK.DFMGameLogin.SetSensitiveInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1356234c
	// Params: [ Num(1) Size(0x10) ]
	void SetSensitiveInfo(struct FString Json);

	// Object: Function DFMGameSDK.DFMGameLogin.SetRewardExtraJson
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13562254
	// Params: [ Num(1) Size(0x10) ]
	void SetRewardExtraJson(struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameLogin.SetLIUIRoot
	// Flags: [Final|Native|Public]
	// Offset: 0x135621b0
	// Params: [ Num(1) Size(0x8) ]
	void SetLIUIRoot(struct UCanvasPanel* uiRoot);

	// Object: Function DFMGameSDK.DFMGameLogin.SetInstallChannel
	// Flags: [Final|Native|Public]
	// Offset: 0x135620b8
	// Params: [ Num(1) Size(0x10) ]
	void SetInstallChannel(struct FString channelID);

	// Object: Function DFMGameSDK.DFMGameLogin.SetHandleGameCenter
	// Flags: [Final|Native|Public]
	// Offset: 0x109bca60
	// Params: [ Num(1) Size(0x1) ]
	void SetHandleGameCenter(uint8_t NeedHandleGameCenter);

	// Object: Function DFMGameSDK.DFMGameLogin.SetDiffAccountFlag
	// Flags: [Final|Native|Public]
	// Offset: 0x1356200c
	// Params: [ Num(1) Size(0x1) ]
	void SetDiffAccountFlag(uint8_t bNeedHandleDiffAccount);

	// Object: Function DFMGameSDK.DFMGameLogin.SendBindReward
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13561e8c
	// Params: [ Num(2) Size(0x20) ]
	void SendBindReward(struct FString EventId, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameLogin.ResetGuest
	// Flags: [Final|Native|Public]
	// Offset: 0x13561e78
	// Params: [ Num(0) Size(0x0) ]
	void ResetGuest();

	// Object: Function DFMGameSDK.DFMGameLogin.RegisterWeGameCallBacks
	// Flags: [Final|Native|Public]
	// Offset: 0x13561e64
	// Params: [ Num(0) Size(0x0) ]
	void RegisterWeGameCallBacks();

	// Object: Function DFMGameSDK.DFMGameLogin.QueryUserInfo
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13561e50
	// Params: [ Num(0) Size(0x0) ]
	void QueryUserInfo();

	// Object: Function DFMGameSDK.DFMGameLogin.QRCodeLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x13561d6c
	// Params: [ Num(2) Size(0x5) ]
	void QRCodeLogin(int32_t Channel, uint8_t bServerSide);

	// Object: Function DFMGameSDK.DFMGameLogin.OpenLILoginPanel
	// Flags: [Final|Native|Public]
	// Offset: 0x13561d58
	// Params: [ Num(0) Size(0x0) ]
	void OpenLILoginPanel();

	// Object: Function DFMGameSDK.DFMGameLogin.OpenLIAccountCenter
	// Flags: [Final|Native|Public]
	// Offset: 0x13561d44
	// Params: [ Num(0) Size(0x0) ]
	void OpenLIAccountCenter();

	// Object: Function DFMGameSDK.DFMGameLogin.OnCultureChanged
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xfbde470
	// Params: [ Num(0) Size(0x0) ]
	void OnCultureChanged();

	// Object: Function DFMGameSDK.DFMGameLogin.Logout
	// Flags: [Final|Native|Public]
	// Offset: 0x13561d30
	// Params: [ Num(0) Size(0x0) ]
	void Logout();

	// Object: Function DFMGameSDK.DFMGameLogin.LoginWithConfirmCode
	// Flags: [Final|Native|Public]
	// Offset: 0x13561d1c
	// Params: [ Num(0) Size(0x0) ]
	void LoginWithConfirmCode();

	// Object: Function DFMGameSDK.DFMGameLogin.LoginWithCode
	// Flags: [Final|Native|Public]
	// Offset: 0x13561b5c
	// Params: [ Num(3) Size(0x28) ]
	void LoginWithCode(int32_t channelID, struct FString Code, struct FString redirectUri);

	// Object: Function DFMGameSDK.DFMGameLogin.LoginChannelWithLIPass
	// Flags: [Final|Native|Public]
	// Offset: 0x13561ab8
	// Params: [ Num(1) Size(0x1) ]
	void LoginChannelWithLIPass(uint8_t Channel);

	// Object: Function DFMGameSDK.DFMGameLogin.Login
	// Flags: [Final|Native|Public]
	// Offset: 0x135619d4
	// Params: [ Num(2) Size(0x5) ]
	void Login(int32_t Channel, uint8_t bServerSide);

	// Object: Function DFMGameSDK.DFMGameLogin.IsWechatInstalled
	// Flags: [Final|Native|Public]
	// Offset: 0x1356199c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWechatInstalled();

	// Object: Function DFMGameSDK.DFMGameLogin.IsQQInstalled
	// Flags: [Final|Native|Public]
	// Offset: 0x13561964
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsQQInstalled();

	// Object: Function DFMGameSDK.DFMGameLogin.IsGooglePlayInstalled
	// Flags: [Final|Native|Public]
	// Offset: 0x10714bbc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsGooglePlayInstalled();

	// Object: Function DFMGameSDK.DFMGameLogin.IsFaceBookInstalled
	// Flags: [Final|Native|Public]
	// Offset: 0x1356192c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsFaceBookInstalled();

	// Object: Function DFMGameSDK.DFMGameLogin.INTLWeChatLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x13561768
	// Params: [ Num(3) Size(0x21) ]
	void INTLWeChatLogin(struct FString QRCodeBackName, struct FString QRCodeLabel, uint8_t bShowQRCode);

	// Object: Function DFMGameSDK.DFMGameLogin.InitGameLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x13561754
	// Params: [ Num(0) Size(0x0) ]
	void InitGameLogin();

	// Object: Function DFMGameSDK.DFMGameLogin.HandleGameCenter
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x109b8598
	// Params: [ Num(0) Size(0x0) ]
	void HandleGameCenter();

	// Object: Function DFMGameSDK.DFMGameLogin.HandleDiffWegameLoginErrNotify
	// Flags: [Final|Native|Public]
	// Offset: 0x13561740
	// Params: [ Num(0) Size(0x0) ]
	void HandleDiffWegameLoginErrNotify();

	// Object: Function DFMGameSDK.DFMGameLogin.HandleDiffAccount
	// Flags: [Final|Native|Public]
	// Offset: 0x1356172c
	// Params: [ Num(0) Size(0x0) ]
	void HandleDiffAccount();

	// Object: Function DFMGameSDK.DFMGameLogin.GetStoreChannel
	// Flags: [Final|Native|Public]
	// Offset: 0x135616f8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetStoreChannel();

	// Object: Function DFMGameSDK.DFMGameLogin.GetOnQrCodeRetDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13561674
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnQrCodeRetDelegate();

	// Object: Function DFMGameSDK.DFMGameLogin.GetOnLoginRetDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x135615f0
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnLoginRetDelegate();

	// Object: Function DFMGameSDK.DFMGameLogin.GetOnExtendRetDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x1356156c
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnExtendRetDelegate();

	// Object: Function DFMGameSDK.DFMGameLogin.GetOnBindAccountRetDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x135614e8
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnBindAccountRetDelegate();

	// Object: Function DFMGameSDK.DFMGameLogin.GetOnBaseRetDelegate
	// Flags: [Final|Native|Public]
	// Offset: 0x13561464
	// Params: [ Num(1) Size(0x10) ]
	struct FMulticastInlineDelegate GetOnBaseRetDelegate();

	// Object: Function DFMGameSDK.DFMGameLogin.GetIsFirstEnterLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x13561448
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsFirstEnterLogin();

	// Object: Function DFMGameSDK.DFMGameLogin.GetHandleGameCenter
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1080e54c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetHandleGameCenter();

	// Object: Function DFMGameSDK.DFMGameLogin.GetDiffAccountFlag
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x10a3f590
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetDiffAccountFlag();

	// Object: Function DFMGameSDK.DFMGameLogin.GetConfigChannelID
	// Flags: [Final|Native|Public]
	// Offset: 0xfae3b7c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetConfigChannelID();

	// Object: Function DFMGameSDK.DFMGameLogin.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf6f5e5c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameLogin* Get(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.DFMGameLogin.ExtendInvoke
	// Flags: [Final|Native|Public]
	// Offset: 0x13561244
	// Params: [ Num(4) Size(0x38) ]
	struct FString ExtendInvoke(int32_t channelID, struct FString ExtendMethodName, struct FString ParamsJson);

	// Object: Function DFMGameSDK.DFMGameLogin.DeleteLuaMoLi
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1356115c
	// Params: [ Num(1) Size(0x10) ]
	static void DeleteLuaMoLi(struct FString DirName);

	// Object: Function DFMGameSDK.DFMGameLogin.DeleteLuaaMoLiFile
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13561074
	// Params: [ Num(1) Size(0x10) ]
	static void DeleteLuaaMoLiFile(struct FString Filename);

	// Object: Function DFMGameSDK.DFMGameLogin.DebugLogin
	// Flags: [Final|Exec|Native|Public]
	// Offset: 0x13561060
	// Params: [ Num(0) Size(0x0) ]
	void DebugLogin();

	// Object: Function DFMGameSDK.DFMGameLogin.ComplianceQueryUserInfo
	// Flags: [Final|Native|Public]
	// Offset: 0xfbde384
	// Params: [ Num(0) Size(0x0) ]
	void ComplianceQueryUserInfo();

	// Object: Function DFMGameSDK.DFMGameLogin.CheckUniversalLink
	// Flags: [Final|Native|Public]
	// Offset: 0x13560f68
	// Params: [ Num(1) Size(0x10) ]
	void CheckUniversalLink(struct FString Channel);

	// Object: Function DFMGameSDK.DFMGameLogin.BindChannelWithLIPassQueryInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x13560f54
	// Params: [ Num(0) Size(0x0) ]
	void BindChannelWithLIPassQueryInfo();

	// Object: Function DFMGameSDK.DFMGameLogin.Bind
	// Flags: [Final|Native|Public]
	// Offset: 0x13560d80
	// Params: [ Num(4) Size(0x29) ]
	uint8_t Bind(int32_t channelID, struct FString Permissions, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameLogin.AutoLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x10757c24
	// Params: [ Num(1) Size(0x4) ]
	void AutoLogin(int32_t channelID);

	// Object: Function DFMGameSDK.DFMGameLogin.AlreadyEnteredLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x13560d68
	// Params: [ Num(0) Size(0x0) ]
	void AlreadyEnteredLogin();
};

// Object: Class DFMGameSDK.DFMGameMaple
// Size: 0x170 (Inherited: 0x30)
struct UDFMGameMaple : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameMaple, "DFMGameMaple")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FMulticastInlineDelegate OnGetQueryTreeData; // 0x38(0x10)
	struct FMulticastInlineDelegate OnGetDataFailed; // 0x48(0x10)
	struct FString ServerUrl; // 0x58(0x10)
	uint8_t Pad_0x68[0xF8]; // 0x68(0xF8)
	struct UCDNInfoManager* CDNInfoManager; // 0x160(0x8)
	uint8_t bHasRequestCloseOnNextFrame : 1; // 0x168(0x1), Mask(0x1)
	uint8_t BitPad_0x168_1 : 7; // 0x168(0x1)
	uint8_t Pad_0x169[0x7]; // 0x169(0x7)

	// Object: Function DFMGameSDK.DFMGameMaple.RequestQueryLeafInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13563628
	// Params: [ Num(2) Size(0x8) ]
	void RequestQueryLeafInfo(int32_t TreeId, int32_t LeafId);

	// Object: Function DFMGameSDK.DFMGameMaple.RequestMapleData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13563584
	// Params: [ Num(1) Size(0x4) ]
	void RequestMapleData(float OutTimeSec);

	// Object: Function DFMGameSDK.DFMGameMaple.IsMapleInited
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13563564
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMapleInited();

	// Object: Function DFMGameSDK.DFMGameMaple.InitMaple
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13563550
	// Params: [ Num(0) Size(0x0) ]
	void InitMaple();

	// Object: Function DFMGameSDK.DFMGameMaple.GetServerNums
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfbdaad4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetServerNums();

	// Object: Function DFMGameSDK.DFMGameMaple.GetServerInfoByMaple
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135633e8
	// Params: [ Num(2) Size(0x98) ]
	struct FMapleData GetServerInfoByMaple(int32_t Index);

	// Object: Function DFMGameSDK.DFMGameMaple.GetMapleIns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfa7fccc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameMaple* GetMapleIns(struct UObject* Context);

	// Object: Function DFMGameSDK.DFMGameMaple.GetIsVersionUsable
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x135633cc
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsVersionUsable();

	// Object: Function DFMGameSDK.DFMGameMaple.GetIsReview
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x135633b0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetIsReview();

	// Object: Function DFMGameSDK.DFMGameMaple.GetDeleteVersionResFlag
	// Flags: [Final|Native|Public|BlueprintCallable|BlueprintPure|Const]
	// Offset: 0x1099d8a0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetDeleteVersionResFlag();

	// Object: Function DFMGameSDK.DFMGameMaple.GetCustomData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x109dc14c
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetCustomData(struct FString InKey);

	// Object: Function DFMGameSDK.DFMGameMaple.EnableMaple
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13563378
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableMaple();

	// Object: Function DFMGameSDK.DFMGameMaple.Close
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13563364
	// Params: [ Num(0) Size(0x0) ]
	void Close();
};

// Object: Class DFMGameSDK.DFMGameMidas
// Size: 0x1C0 (Inherited: 0x30)
struct UDFMGameMidas : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameMidas, "DFMGameMidas")

	uint8_t EnableLog : 1; // 0x29(0x1), Mask(0x1)
	struct FString ProcessName; // 0x30(0x10)
	struct FString IDC; // 0x40(0x10)
	struct FString IDCInfo; // 0x50(0x10)
	struct FString Env; // 0x60(0x10)
	struct FString BusinessId; // 0x70(0x10)
	struct FString OfferId; // 0x80(0x10)
	struct FString OpenId; // 0x90(0x10)
	struct FString OpenKey; // 0xA0(0x10)
	struct FString SessionId; // 0xB0(0x10)
	struct FString SessionType; // 0xC0(0x10)
	struct FString ZoneId; // 0xD0(0x10)
	struct FString GoodsZoneId; // 0xE0(0x10)
	struct FString pf; // 0xF0(0x10)
	struct FString pfKey; // 0x100(0x10)
	struct FString AppExtends; // 0x110(0x10)
	struct FString SaveValue; // 0x120(0x10)
	struct FString AcctType; // 0x130(0x10)
	struct FString extras; // 0x140(0x10)
	struct FString ProductID; // 0x150(0x10)
	struct FString ChannelExtras; // 0x160(0x10)
	struct FString PayChannel; // 0x170(0x10)
	struct FString GoodsTokenUrl; // 0x180(0x10)
	int32_t TokenType; // 0x190(0x4)
	uint8_t AutoPay : 1; // 0x194(0x1), Mask(0x1)
	uint8_t BitPad_0x194_2 : 6; // 0x194(0x1)
	uint8_t Pad_0x195[0x3]; // 0x195(0x3)
	struct FString ServiceCode; // 0x198(0x10)
	struct FString ServiceName; // 0x1A8(0x10)
	int32_t ServiceType; // 0x1B8(0x4)
	uint8_t Pad_0x1BC[0x4]; // 0x1BC(0x4)

	// Object: Function DFMGameSDK.DFMGameMidas.Reprovide
	// Flags: [Final|Native|Public]
	// Offset: 0x1356375c
	// Params: [ Num(0) Size(0x0) ]
	void Reprovide();

	// Object: Function DFMGameSDK.DFMGameMidas.Pay
	// Flags: [Final|Native|Public]
	// Offset: 0x13563748
	// Params: [ Num(0) Size(0x0) ]
	void Pay();

	// Object: Function DFMGameSDK.DFMGameMidas.Init
	// Flags: [Final|Native|Public]
	// Offset: 0x10b91824
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DFMGameSDK.DFMGameMidas.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x109e2040
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameMidas* Get(struct UGameInstance* GameInstance);
};

// Object: Class DFMGameSDK.DFMGameNetBar
// Size: 0x38 (Inherited: 0x30)
struct UDFMGameNetBar : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameNetBar, "DFMGameNetBar")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)

	// Object: Function DFMGameSDK.DFMGameNetBar.ReqNetBarLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x135638e4
	// Params: [ Num(5) Size(0x29) ]
	void ReqNetBarLevel(struct FString opneId, int32_t GameId, int32_t ZoneId, struct FString tickctBuffer, uint8_t isOversea);

	// Object: Function DFMGameSDK.DFMGameNetBar.Get
	// Flags: [Final|Native|Static|Private]
	// Offset: 0x13563840
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameNetBar* Get(struct UGameInstance* GameInstanceContext);
};

// Object: Class DFMGameSDK.DFMGameNotch
// Size: 0x60 (Inherited: 0x30)
struct UDFMGameNotch : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameNotch, "DFMGameNotch")

	uint8_t Pad_0x30[0x20]; // 0x30(0x20)
	struct FMulticastInlineDelegate OnFoldStatusChanged; // 0x50(0x10)

	// Object: Function DFMGameSDK.DFMGameNotch.UpdateApplicationSafeZone
	// Flags: [Final|Native|Public]
	// Offset: 0x135641cc
	// Params: [ Num(0) Size(0x0) ]
	void UpdateApplicationSafeZone();

	// Object: Function DFMGameSDK.DFMGameNotch.SetUserCustomApplicationSafeZoneX
	// Flags: [Final|Native|Public]
	// Offset: 0x13564128
	// Params: [ Num(1) Size(0x4) ]
	void SetUserCustomApplicationSafeZoneX(int32_t safeZoneX);

	// Object: Function DFMGameSDK.DFMGameNotch.SetMultiWindowModeStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1356408c
	// Params: [ Num(1) Size(0x1) ]
	static void SetMultiWindowModeStatus(uint8_t InMultiWindowModeStatus);

	// Object: Function DFMGameSDK.DFMGameNotch.SetFoldStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13563ff8
	// Params: [ Num(1) Size(0x4) ]
	static void SetFoldStatus(int32_t InFoldStatus);

	// Object: Function DFMGameSDK.DFMGameNotch.SetExpandScreenCounts
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13563f64
	// Params: [ Num(1) Size(0x4) ]
	static void SetExpandScreenCounts(int32_t InExpandScreenCounts);

	// Object: Function DFMGameSDK.DFMGameNotch.OnFoldStatusChangedGameNotch
	// Flags: [Final|Native|Public]
	// Offset: 0x13563e88
	// Params: [ Num(2) Size(0x8) ]
	void OnFoldStatusChangedGameNotch(int32_t InFoldStatus, int32_t InExpandScreenCounts);

	// Object: Function DFMGameSDK.DFMGameNotch.NotifyEngineSafeZoneValueChange
	// Flags: [Final|Native|Public]
	// Offset: 0x13563e74
	// Params: [ Num(0) Size(0x0) ]
	void NotifyEngineSafeZoneValueChange();

	// Object: Function DFMGameSDK.DFMGameNotch.IsFoldDevice
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfae68b4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsFoldDevice();

	// Object: Function DFMGameSDK.DFMGameNotch.InitGameLaunchSafeZonePadding
	// Flags: [Final|Native|Public]
	// Offset: 0x13563e60
	// Params: [ Num(0) Size(0x0) ]
	void InitGameLaunchSafeZonePadding();

	// Object: Function DFMGameSDK.DFMGameNotch.GetNotchSize
	// Flags: [Final|Native|Public]
	// Offset: 0x13563d68
	// Params: [ Num(1) Size(0x10) ]
	void GetNotchSize(struct FString fMethodName);

	// Object: Function DFMGameSDK.DFMGameNotch.GetMultiWindowModeStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13563d30
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetMultiWindowModeStatus();

	// Object: Function DFMGameSDK.DFMGameNotch.GetFoldStatus
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13563cfc
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetFoldStatus();

	// Object: Function DFMGameSDK.DFMGameNotch.GetExpandScreenCounts
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13563cc8
	// Params: [ Num(1) Size(0x4) ]
	static int32_t GetExpandScreenCounts();

	// Object: Function DFMGameSDK.DFMGameNotch.GetApplicationSafeZoneX
	// Flags: [Final|Native|Public]
	// Offset: 0x10a34d4c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetApplicationSafeZoneX();

	// Object: Function DFMGameSDK.DFMGameNotch.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf6a7004
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameNotch* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DFMGameNotch.AndroidGetGlobalFoldStatus
	// Flags: [Final|Native|Public]
	// Offset: 0x13563c94
	// Params: [ Num(1) Size(0x4) ]
	int32_t AndroidGetGlobalFoldStatus();

	// Object: Function DFMGameSDK.DFMGameNotch.AdditionUserCustomSafeZoneX
	// Flags: [Final|Native|Public]
	// Offset: 0x13563bf0
	// Params: [ Num(1) Size(0x4) ]
	void AdditionUserCustomSafeZoneX(int32_t additionZoneX);
};

// Object: Class DFMGameSDK.DFMGameOneSDK
// Size: 0x50 (Inherited: 0x30)
struct UDFMGameOneSDK : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameOneSDK, "DFMGameOneSDK")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	uint64_t OpenId; // 0x38(0x8)
	uint8_t bEnableHttpDns : 1; // 0x40(0x1), Mask(0x1)
	uint8_t BitPad_0x40_1 : 7; // 0x40(0x1)
	uint8_t Pad_0x41[0xF]; // 0x41(0xF)

	// Object: Function DFMGameSDK.DFMGameOneSDK.SetOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0x10b1a130
	// Params: [ Num(1) Size(0x10) ]
	void SetOpenId(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameOneSDK.SetEnableHttpDns
	// Flags: [Final|Native|Public]
	// Offset: 0x109540dc
	// Params: [ Num(1) Size(0x1) ]
	void SetEnableHttpDns(uint8_t EnableHttpDns);

	// Object: Function DFMGameSDK.DFMGameOneSDK.InitOneSDK
	// Flags: [Final|Native|Public]
	// Offset: 0x13564438
	// Params: [ Num(0) Size(0x0) ]
	void InitOneSDK();

	// Object: Function DFMGameSDK.DFMGameOneSDK.GetOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0x13564404
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetOpenId();

	// Object: Function DFMGameSDK.DFMGameOneSDK.GetAddressByName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135642d0
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetAddressByName(struct FString Domain);

	// Object: Function DFMGameSDK.DFMGameOneSDK.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xff876e8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameOneSDK* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DFMGameOneSDK.DeinitOneSDK
	// Flags: [Final|Native|Public]
	// Offset: 0x135642bc
	// Params: [ Num(0) Size(0x0) ]
	void DeinitOneSDK();
};

// Object: Class DFMGameSDK.DFMGamePlayerInfo
// Size: 0x1F0 (Inherited: 0x30)
struct UDFMGamePlayerInfo : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGamePlayerInfo, "DFMGamePlayerInfo")

	uint8_t Pad_0x30[0x1C0]; // 0x30(0x1C0)

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetZoneId
	// Flags: [Final|Native|Public]
	// Offset: 0x10946d84
	// Params: [ Num(1) Size(0x4) ]
	void SetZoneId(int32_t ZoneId);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetUsername
	// Flags: [Final|Native|Public]
	// Offset: 0x101c5690
	// Params: [ Num(1) Size(0x10) ]
	void SetUsername(struct FString userName);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetTokenExpire
	// Flags: [Final|Native|Public]
	// Offset: 0x13564bc0
	// Params: [ Num(1) Size(0x10) ]
	void SetTokenExpire(struct FString tokenExpire);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetToken
	// Flags: [Final|Native|Public]
	// Offset: 0x101c54a4
	// Params: [ Num(1) Size(0x10) ]
	void SetToken(struct FString Token);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetTestAutoMatchId
	// Flags: [Final|Native|Public]
	// Offset: 0x13564b1c
	// Params: [ Num(1) Size(0x4) ]
	void SetTestAutoMatchId(int32_t TestAutoMatchId);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetTestAutoMatch
	// Flags: [Final|Native|Public]
	// Offset: 0x13564a70
	// Params: [ Num(1) Size(0x1) ]
	void SetTestAutoMatch(uint8_t bTestAutoMatch);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetRegisterState
	// Flags: [Final|Native|Public]
	// Offset: 0x1067cd6c
	// Params: [ Num(1) Size(0x1) ]
	void SetRegisterState(uint8_t bRegisterState);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetRefreshToken
	// Flags: [Final|Native|Public]
	// Offset: 0x109045c0
	// Params: [ Num(1) Size(0x10) ]
	void SetRefreshToken(struct FString RefreshToken);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetPlayerAbilityScore
	// Flags: [Final|Native|Public]
	// Offset: 0x135649cc
	// Params: [ Num(1) Size(0x4) ]
	void SetPlayerAbilityScore(int32_t PlayerAbilityScore);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetPicUrl
	// Flags: [Final|Native|Public]
	// Offset: 0x109043d4
	// Params: [ Num(1) Size(0x10) ]
	void SetPicUrl(struct FString PicUrl);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetPictureUrl
	// Flags: [Final|Native|Public]
	// Offset: 0x109041e8
	// Params: [ Num(1) Size(0x10) ]
	void SetPictureUrl(struct FString pictureUrl);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetPfKey
	// Flags: [Final|Native|Public]
	// Offset: 0x10903ffc
	// Params: [ Num(1) Size(0x10) ]
	void SetPfKey(struct FString pfKey);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetPf
	// Flags: [Final|Native|Public]
	// Offset: 0x10903e10
	// Params: [ Num(1) Size(0x10) ]
	void SetPf(struct FString pf);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetPayToken
	// Flags: [Final|Native|Public]
	// Offset: 0x10903c24
	// Params: [ Num(1) Size(0x10) ]
	void SetPayToken(struct FString PayToken);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetOpenIdStr
	// Flags: [Final|Native|Public]
	// Offset: 0x10144d98
	// Params: [ Num(1) Size(0x10) ]
	void SetOpenIdStr(struct FString OpenIdStr);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0x105e63b0
	// Params: [ Num(1) Size(0x8) ]
	void SetOpenId(uint64_t OpenId);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetMatchGameMode
	// Flags: [Final|Native|Public]
	// Offset: 0x13564928
	// Params: [ Num(1) Size(0x4) ]
	void SetMatchGameMode(int32_t MatchGameMode);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetLaunchFrom
	// Flags: [Final|Native|Public]
	// Offset: 0x10946bf0
	// Params: [ Num(1) Size(0x4) ]
	void SetLaunchFrom(int32_t launchFrom);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetCoreUserId
	// Flags: [Final|Native|Public]
	// Offset: 0x101c52b8
	// Params: [ Num(1) Size(0x10) ]
	void SetCoreUserId(struct FString coreUserId);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetConnectedUrl
	// Flags: [Final|Native|Public]
	// Offset: 0x10903a38
	// Params: [ Num(1) Size(0x10) ]
	void SetConnectedUrl(struct FString ConnectedUrl);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetConnectedRealIp
	// Flags: [Final|Native|Public]
	// Offset: 0x1090384c
	// Params: [ Num(1) Size(0x10) ]
	void SetConnectedRealIp(struct FString ConnectedRealIp);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetChannelID
	// Flags: [Final|Native|Public]
	// Offset: 0x10946a5c
	// Params: [ Num(1) Size(0x4) ]
	void SetChannelID(int32_t channelID);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetAreaId
	// Flags: [Final|Native|Public]
	// Offset: 0x13564884
	// Params: [ Num(1) Size(0x4) ]
	void SetAreaId(int32_t AreaID);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.SetAccessToken
	// Flags: [Final|Native|Public]
	// Offset: 0x10903660
	// Params: [ Num(1) Size(0x10) ]
	void SetAccessToken(struct FString AccessToken);

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.IsTestAutoMatch
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1356484c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTestAutoMatch();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.IsRegisterState
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x10714c70
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsRegisterState();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetZoneId
	// Flags: [Final|Native|Public]
	// Offset: 0xf771e9c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetZoneId();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetUsername
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf225338
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUsername();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetTokenExpire
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x135647b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetTokenExpire();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetToken
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf225b28
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetToken();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetTestAutoMatchId
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13564780
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetTestAutoMatchId();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetRefreshToken
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x135646e8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRefreshToken();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetPlayerAbilityScore
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x135646b4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlayerAbilityScore();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetPicUrl
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1356461c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPicUrl();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetPictureUrl
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x10960cf0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPictureUrl();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetPfKey
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf225470
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPfKey();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetPf
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf2259f0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPf();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetPayToken
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf2255a8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPayToken();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetOpenIdStr
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf2256e0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOpenIdStr();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetOpenId
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf1aaa1c
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetOpenId();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetNetWorkDetailInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x101d96f0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNetWorkDetailInfo();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetMatchGameMode
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x135645e8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMatchGameMode();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetLaunchFrom
	// Flags: [Final|Native|Public]
	// Offset: 0x107f0948
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetLaunchFrom();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetCoreUserId
	// Flags: [Final|Native|Public]
	// Offset: 0x10960b48
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCoreUserId();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetConnectedUrl
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x109609a0
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetConnectedUrl();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetConnectedRealIp
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13564550
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetConnectedRealIp();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetChannelID
	// Flags: [Final|Native|Public|Const]
	// Offset: 0xf771de0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetChannelID();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetAreaId
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x1356451c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAreaId();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.GetAccessToken
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x109607f8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAccessToken();

	// Object: Function DFMGameSDK.DFMGamePlayerInfo.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xee8001c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGamePlayerInfo* Get(struct UGameInstance* GameInstanceContext);
};

// Object: Class DFMGameSDK.DFMGameProtocol
// Size: 0x428 (Inherited: 0x30)
struct UDFMGameProtocol : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameProtocol, "DFMGameProtocol")

	uint8_t Pad_0x30[0x3CC]; // 0x30(0x3CC)
	uint8_t bIsReConnecting : 1; // 0x3FC(0x1), Mask(0x1)
	uint8_t BitPad_0x3FC_1 : 7; // 0x3FC(0x1)
	uint8_t Pad_0x3FD[0x11]; // 0x3FD(0x11)
	uint8_t bRequestProto : 1; // 0x40E(0x1), Mask(0x1)
	uint8_t BitPad_0x40E_1 : 7; // 0x40E(0x1)
	uint8_t bUseReconnectTimer : 1; // 0x40F(0x1), Mask(0x1)
	uint8_t BitPad_0x40F_1 : 7; // 0x40F(0x1)
	uint8_t Pad_0x410[0x18]; // 0x410(0x18)

	// Object: Function DFMGameSDK.DFMGameProtocol.OnStateChanged
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x135664fc
	// Params: [ Num(1) Size(0x50) ]
	void OnStateChanged(const struct FConnectorResultInfo& ConnectorResultInfo);

	// Object: Function DFMGameSDK.DFMGameProtocol.OnRelayConnected
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13566414
	// Params: [ Num(1) Size(0x50) ]
	void OnRelayConnected(const struct FConnectorResultInfo& ConnectorResultInfo);

	// Object: Function DFMGameSDK.DFMGameProtocol.OnDisconnect
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x1356632c
	// Params: [ Num(1) Size(0x50) ]
	void OnDisconnect(const struct FConnectorResultInfo& ConnectorResultInfo);

	// Object: Function DFMGameSDK.DFMGameProtocol.OnConnected
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x10a7a9b0
	// Params: [ Num(1) Size(0x50) ]
	void OnConnected(const struct FConnectorResultInfo& ConnectorResultInfo);

	// Object: Function DFMGameSDK.DFMGameProtocol.OnConnectBegin
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x109b0518
	// Params: [ Num(1) Size(0x90) ]
	void OnConnectBegin(const struct FConnectServerInfo& ConnectServerInfo);

	// Object: Function DFMGameSDK.DFMGameProtocol.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13566288
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameProtocol* Get(struct UGameInstance* GameInstanceContext);
};

// Object: Class DFMGameSDK.DFMGamePush
// Size: 0x230 (Inherited: 0x30)
struct UDFMGamePush : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGamePush, "DFMGamePush")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct FString Channel; // 0x38(0x10)
	struct FDFMLocalNotification_Android LocalNotification_Android; // 0x48(0x108)
	struct FDFMLocalNotification_OpenHarmony LocalNotification_OpenHarmony; // 0x150(0x48)
	struct FDFMLocalNotification_IOS LocalNotification_IOS; // 0x198(0x88)
	struct FMulticastInlineDelegate OnGamePushOptNotify; // 0x220(0x10)

	// Object: Function DFMGameSDK.DFMGamePush.UnregisterPush
	// Flags: [Final|Native|Public]
	// Offset: 0x135666fc
	// Params: [ Num(0) Size(0x0) ]
	void UnregisterPush();

	// Object: Function DFMGameSDK.DFMGamePush.Reset
	// Flags: [Final|Native|Public]
	// Offset: 0x135666e8
	// Params: [ Num(0) Size(0x0) ]
	void Reset();

	// Object: Function DFMGameSDK.DFMGamePush.RegisterPush
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x109c357c
	// Params: [ Num(1) Size(0x10) ]
	void RegisterPush(struct FString Account);

	// Object: Function DFMGameSDK.DFMGamePush.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x109e224c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGamePush* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DFMGamePush.ClearLocalNotifications
	// Flags: [Final|Native|Public]
	// Offset: 0x135666d4
	// Params: [ Num(0) Size(0x0) ]
	void ClearLocalNotifications();

	// Object: Function DFMGameSDK.DFMGamePush.AddLocalNotification
	// Flags: [Final|Native|Public]
	// Offset: 0x135666c0
	// Params: [ Num(0) Size(0x0) ]
	void AddLocalNotification();
};

// Object: Class DFMGameSDK.DFMGameReport
// Size: 0x30 (Inherited: 0x30)
struct UDFMGameReport : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameReport, "DFMGameReport")

	// Object: Function DFMGameSDK.DFMGameReport.SetDeviceLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x135670b0
	// Params: [ Num(1) Size(0x4) ]
	void SetDeviceLevel(int32_t Level);

	// Object: Function DFMGameSDK.DFMGameReport.SetCrashSightAppVersion
	// Flags: [Final|Native|Public]
	// Offset: 0x13567004
	// Params: [ Num(1) Size(0x10) ]
	void SetCrashSightAppVersion(struct FString CrashSightAppVersion);

	// Object: Function DFMGameSDK.DFMGameReport.ReportRevenue
	// Flags: [Final|Native|Public]
	// Offset: 0x13566c38
	// Params: [ Num(6) Size(0xA0) ]
	void ReportRevenue(struct FString EventName, struct FString Currency, struct FString RevenueValue, struct TMap<struct FString, struct FString> ParamsMap, struct FString SpecificChannel, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameReport.ReportEvent
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf692378
	// Params: [ Num(5) Size(0x88) ]
	static void ReportEvent(struct FString EventName, struct TMap<struct FString, struct FString> Params, struct FString SpecificChannel, uint8_t IsRealTime, struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameReport.ReportBinary
	// Flags: [Final|Native|Public]
	// Offset: 0x135669f0
	// Params: [ Num(4) Size(0x38) ]
	void ReportBinary(struct FString EventName, struct FString Data, int64_t Length, struct FString SpecificChannel);

	// Object: Function DFMGameSDK.DFMGameReport.InitGameReport
	// Flags: [Final|Native|Public]
	// Offset: 0x135669dc
	// Params: [ Num(0) Size(0x0) ]
	void InitGameReport();

	// Object: Function DFMGameSDK.DFMGameReport.GetDeviceInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x135668a8
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetDeviceInfo(struct FString extraJson);

	// Object: Function DFMGameSDK.DFMGameReport.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13566804
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameReport* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DFMGameReport.FlushINTLEvents
	// Flags: [Final|Native|Public]
	// Offset: 0x135667f0
	// Params: [ Num(0) Size(0x0) ]
	void FlushINTLEvents();

	// Object: Function DFMGameSDK.DFMGameReport.CollectionStop
	// Flags: [Final|Native|Public]
	// Offset: 0x135667dc
	// Params: [ Num(0) Size(0x0) ]
	void CollectionStop();

	// Object: Function DFMGameSDK.DFMGameReport.CollectionResume
	// Flags: [Final|Native|Public]
	// Offset: 0x135667c8
	// Params: [ Num(0) Size(0x0) ]
	void CollectionResume();
};

// Object: Class DFMGameSDK.DFMGameTDM
// Size: 0xC0 (Inherited: 0x30)
struct UDFMGameTDM : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameTDM, "DFMGameTDM")

	uint8_t Pad_0x30[0x90]; // 0x30(0x90)

	// Object: Function DFMGameSDK.DFMGameTDM.TDMReportFile
	// Flags: [Final|Native|Public]
	// Offset: 0x13567c24
	// Params: [ Num(1) Size(0x10) ]
	void TDMReportFile(struct FString fFilePath);

	// Object: Function DFMGameSDK.DFMGameTDM.TDMReportBinary
	// Flags: [Final|Native|Public]
	// Offset: 0x13567b2c
	// Params: [ Num(1) Size(0x10) ]
	void TDMReportBinary(struct FString fBinary);

	// Object: Function DFMGameSDK.DFMGameTDM.TDMPluginReportStrStrEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x13567980
	// Params: [ Num(2) Size(0x60) ]
	void TDMPluginReportStrStrEvent(struct FString EventName, struct TMap<struct FString, struct FString> Data);

	// Object: Function DFMGameSDK.DFMGameTDM.TDMPluginReportStrIntEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x135677d4
	// Params: [ Num(2) Size(0x60) ]
	void TDMPluginReportStrIntEvent(struct FString EventName, struct TMap<int32_t, int32_t> Data);

	// Object: Function DFMGameSDK.DFMGameTDM.LuaCallInitTDM
	// Flags: [Final|Native|Public]
	// Offset: 0x135676a0
	// Params: [ Num(3) Size(0x8) ]
	void LuaCallInitTDM(uint8_t bEnableReport, uint8_t bEnableDeviceInfo, int32_t NewLogLevel);

	// Object: Function DFMGameSDK.DFMGameTDM.GetUserAgent
	// Flags: [Final|Native|Public]
	// Offset: 0x13567608
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetUserAgent();

	// Object: Function DFMGameSDK.DFMGameTDM.GetOAID
	// Flags: [Final|Native|Public]
	// Offset: 0x13567570
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOAID();

	// Object: Function DFMGameSDK.DFMGameTDM.GetIEMI
	// Flags: [Final|Native|Public]
	// Offset: 0x10a39f90
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIEMI();

	// Object: Function DFMGameSDK.DFMGameTDM.GetIDFV
	// Flags: [Final|Native|Public]
	// Offset: 0x135674d8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIDFV();

	// Object: Function DFMGameSDK.DFMGameTDM.GetIDFA
	// Flags: [Final|Native|Public]
	// Offset: 0x13567440
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetIDFA();

	// Object: Function DFMGameSDK.DFMGameTDM.GetDeiceInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x109d0248
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetDeiceInfo(struct FString DeviceInfoName);

	// Object: Function DFMGameSDK.DFMGameTDM.GetCAID
	// Flags: [Final|Native|Public]
	// Offset: 0x135673a8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCAID();

	// Object: Function DFMGameSDK.DFMGameTDM.GetAppleASA
	// Flags: [Final|Native|Public]
	// Offset: 0x13567310
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAppleASA();

	// Object: Function DFMGameSDK.DFMGameTDM.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x106cb394
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameTDM* Get(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.DFMGameTDM.AsyncGetAppleASA
	// Flags: [Final|Native|Public]
	// Offset: 0x13567218
	// Params: [ Num(1) Size(0x10) ]
	void AsyncGetAppleASA(struct FString AdsUrl);
};

// Object: Class DFMGameSDK.DFMGameTss
// Size: 0x58 (Inherited: 0x30)
struct UDFMGameTss : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameTss, "DFMGameTss")

	uint8_t Pad_0x30[0x28]; // 0x30(0x28)

	// Object: Function DFMGameSDK.DFMGameTss.SetUserInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1093d6c0
	// Params: [ Num(2) Size(0x18) ]
	void SetUserInfo(int32_t entry_id, struct FString open_id);

	// Object: Function DFMGameSDK.DFMGameTss.SetUserAgreedPS
	// Flags: [Final|Native|Public]
	// Offset: 0x1092eba0
	// Params: [ Num(0) Size(0x0) ]
	void SetUserAgreedPS();

	// Object: Function DFMGameSDK.DFMGameTss.SetSDKIp
	// Flags: [Final|Native|Public]
	// Offset: 0x13568090
	// Params: [ Num(0) Size(0x0) ]
	void SetSDKIp();

	// Object: Function DFMGameSDK.DFMGameTss.SetSDKCs
	// Flags: [Final|Native|Public]
	// Offset: 0x1356807c
	// Params: [ Num(0) Size(0x0) ]
	void SetSDKCs();

	// Object: Function DFMGameSDK.DFMGameTss.SetSDKCdn
	// Flags: [Final|Native|Public]
	// Offset: 0x13568068
	// Params: [ Num(0) Size(0x0) ]
	void SetSDKCdn();

	// Object: Function DFMGameSDK.DFMGameTss.OnWindowDeactived
	// Flags: [Final|Native|Public]
	// Offset: 0x13568054
	// Params: [ Num(0) Size(0x0) ]
	void OnWindowDeactived();

	// Object: Function DFMGameSDK.DFMGameTss.OnWindowActived
	// Flags: [Final|Native|Public]
	// Offset: 0x13568040
	// Params: [ Num(0) Size(0x0) ]
	void OnWindowActived();

	// Object: Function DFMGameSDK.DFMGameTss.OnResume
	// Flags: [Final|Native|Public]
	// Offset: 0x1356802c
	// Params: [ Num(0) Size(0x0) ]
	void OnResume();

	// Object: Function DFMGameSDK.DFMGameTss.OnRecvTssData_FString
	// Flags: [Final|Native|Public]
	// Offset: 0x13567f34
	// Params: [ Num(1) Size(0x10) ]
	void OnRecvTssData_FString(struct FString Data);

	// Object: Function DFMGameSDK.DFMGameTss.OnPause
	// Flags: [Final|Native|Public]
	// Offset: 0x13567f20
	// Params: [ Num(0) Size(0x0) ]
	void OnPause();

	// Object: Function DFMGameSDK.DFMGameTss.Logout
	// Flags: [Final|Native|Public]
	// Offset: 0x13567f0c
	// Params: [ Num(0) Size(0x0) ]
	void Logout();

	// Object: Function DFMGameSDK.DFMGameTss.InitTss
	// Flags: [Final|Native|Public]
	// Offset: 0x13567ef8
	// Params: [ Num(0) Size(0x0) ]
	void InitTss();

	// Object: Function DFMGameSDK.DFMGameTss.GetSdkCoreData
	// Flags: [Final|Native|Public]
	// Offset: 0xfd644a8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetSdkCoreData();

	// Object: Function DFMGameSDK.DFMGameTss.GetReportData
	// Flags: [Final|Native|Public]
	// Offset: 0x13567ee4
	// Params: [ Num(0) Size(0x0) ]
	void GetReportData();

	// Object: Function DFMGameSDK.DFMGameTss.GetLightFeatureHeartBeatData
	// Flags: [Final|Native|Public]
	// Offset: 0x13567ed0
	// Params: [ Num(0) Size(0x0) ]
	void GetLightFeatureHeartBeatData();

	// Object: Function DFMGameSDK.DFMGameTss.GetLightFeatureData
	// Flags: [Final|Native|Public]
	// Offset: 0x13567e38
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetLightFeatureData();

	// Object: Function DFMGameSDK.DFMGameTss.GetEmulatorName
	// Flags: [Final|Native|Public]
	// Offset: 0x10a4ea4c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetEmulatorName();

	// Object: Function DFMGameSDK.DFMGameTss.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf8d5548
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameTss* Get(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.DFMGameTss.EnableTPConnector
	// Flags: [Final|Native|Public]
	// Offset: 0x13567e00
	// Params: [ Num(1) Size(0x1) ]
	uint8_t EnableTPConnector();

	// Object: Function DFMGameSDK.DFMGameTss.DeinitTss
	// Flags: [Final|Native|Public]
	// Offset: 0x13567dec
	// Params: [ Num(0) Size(0x0) ]
	void DeinitTss();
};

// Object: Class DFMGameSDK.DFMGameUdpMgr
// Size: 0x78 (Inherited: 0x28)
struct UDFMGameUdpMgr : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameUdpMgr, "DFMGameUdpMgr")

	struct FMulticastInlineDelegate OnRecvUdpInfoDelegate; // 0x28(0x10)
	uint8_t UdpFlag : 1; // 0x38(0x1), Mask(0x1)
	uint8_t BitPad_0x38_1 : 7; // 0x38(0x1)
	uint8_t Pad_0x39[0x3F]; // 0x39(0x3F)
};

// Object: Class DFMGameSDK.DFMGameUrlGenerator
// Size: 0x78 (Inherited: 0x30)
struct UDFMGameUrlGenerator : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameUrlGenerator, "DFMGameUrlGenerator")

	uint8_t Pad_0x30[0x48]; // 0x30(0x48)

	// Object: Function DFMGameSDK.DFMGameUrlGenerator.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xff04b1c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameUrlGenerator* Get(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.DFMGameUrlGenerator.GenerateQueryRes
	// Flags: [Final|Native|Public]
	// Offset: 0x13568484
	// Params: [ Num(2) Size(0x50) ]
	struct FQueryUIDRes GenerateQueryRes(struct FString ResBody);

	// Object: Function DFMGameSDK.DFMGameUrlGenerator.GenerateQueryPS5PlatformBlockListRes
	// Flags: [Final|Native|Public]
	// Offset: 0x13568380
	// Params: [ Num(2) Size(0x38) ]
	struct FQueryPS5PlatformBlockListInfoRes GenerateQueryPS5PlatformBlockListRes(struct FString ResBody);

	// Object: Function DFMGameSDK.DFMGameUrlGenerator.CreateQueryUIDInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x1356827c
	// Params: [ Num(2) Size(0x90) ]
	struct FQueryUIDInfo CreateQueryUIDInfo(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameUrlGenerator.CreateQueryPS5BlockListInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x13568180
	// Params: [ Num(2) Size(0x80) ]
	struct FQueryPS5PlatformBlockListInfo CreateQueryPS5BlockListInfo(struct FString OpenId);
};

// Object: Class DFMGameSDK.DFMGameVoice
// Size: 0x3F0 (Inherited: 0x30)
struct UDFMGameVoice : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDFMGameVoice, "DFMGameVoice")

	uint8_t Pad_0x30[0x250]; // 0x30(0x250)
	uint8_t bUseTicker : 1; // 0x280(0x1), Mask(0x1)
	uint8_t BitPad_0x280_1 : 7; // 0x280(0x1)
	uint8_t Pad_0x281[0x7]; // 0x281(0x7)
	struct FMulticastInlineDelegate OnGVoiceRoomStateChangeDelegate; // 0x288(0x10)
	struct FMulticastInlineDelegate OnGVoiceSpeakStateChangeDelegate; // 0x298(0x10)
	struct FMulticastInlineDelegate OnGVoiceMicAndSpeakerStateChangeDelegate; // 0x2A8(0x10)
	struct FMulticastInlineDelegate OnGVoiceRoomMemberRoomStateChangeDelegate; // 0x2B8(0x10)
	struct FMulticastInlineDelegate OnGVoiceRoomMemberSpeakStateChangeDelegate; // 0x2C8(0x10)
	struct FMulticastInlineDelegate OnGVoiceRoomMemberForbidStateChangeDelegate; // 0x2D8(0x10)
	struct FMulticastInlineDelegate OnGVoiceEventDelegate; // 0x2E8(0x10)
	struct FMulticastInlineDelegate OnGVoiceSpeechToTextDelegate; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnGVoiceStreamSpeechToTextDelegate; // 0x308(0x10)
	struct FMulticastInlineDelegate OnGVoiceUploadVoiceFileDelegate; // 0x318(0x10)
	struct FMulticastInlineDelegate OnGVoiceDownloadVoiceFileDelegate; // 0x328(0x10)
	struct FMulticastInlineDelegate OnPlayRecordedFileDelegate; // 0x338(0x10)
	struct FMulticastInlineDelegate OnGVoiceReportPlayerDelegate; // 0x348(0x10)
	struct FMulticastInlineDelegate OnGVoiceDeviceDelegate; // 0x358(0x10)
	struct FMulticastInlineDelegate OnGVoiceGetDeviceCountDelegate; // 0x368(0x10)
	uint8_t Pad_0x378[0x10]; // 0x378(0x10)
	struct FMulticastInlineDelegate OnGVoiceRSTSSpeechToTextDelegate; // 0x388(0x10)
	struct FMulticastInlineDelegate OnGVoiceTextTranslateDelegate; // 0x398(0x10)
	struct FMulticastInlineDelegate OnGVoiceApplicationActiveDelegate; // 0x3A8(0x10)
	struct URuntimeFilesDownloaderProxy* DownloaderProxy; // 0x3B8(0x8)
	uint8_t Pad_0x3C0[0x10]; // 0x3C0(0x10)
	struct FMulticastInlineDelegate OnGVoiceDownloaderResultDelegate; // 0x3D0(0x10)
	struct FMulticastInlineDelegate OnGVoiceDownloaderProgressDelegate; // 0x3E0(0x10)

	// Object: Function DFMGameSDK.DFMGameVoice.UploadRecordedFile
	// Flags: [Final|Native|Public]
	// Offset: 0x1356b6c8
	// Params: [ Num(0) Size(0x0) ]
	void UploadRecordedFile();

	// Object: Function DFMGameSDK.DFMGameVoice.TextTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356b56c
	// Params: [ Num(4) Size(0x1C) ]
	void TextTranslate(struct FString Text, int32_t SrcLang, int32_t TargetLang, int32_t TimeoutMS);

	// Object: Function DFMGameSDK.DFMGameVoice.StopRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356b558
	// Params: [ Num(0) Size(0x0) ]
	void StopRecording();

	// Object: Function DFMGameSDK.DFMGameVoice.StopPlayRecordFile
	// Flags: [Final|Native|Public]
	// Offset: 0x1356b544
	// Params: [ Num(0) Size(0x0) ]
	void StopPlayRecordFile();

	// Object: Function DFMGameSDK.DFMGameVoice.StartRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356b530
	// Params: [ Num(0) Size(0x0) ]
	void StartRecording();

	// Object: Function DFMGameSDK.DFMGameVoice.SpeechTranslate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356b39c
	// Params: [ Num(5) Size(0x20) ]
	void SpeechTranslate(struct FString FileId, int32_t SrcLang, int32_t TargetLang, int32_t TransType, int32_t TimeoutMS);

	// Object: Function DFMGameSDK.DFMGameVoice.SpeechToText
	// Flags: [Final|Native|Public]
	// Offset: 0x1356b2a4
	// Params: [ Num(1) Size(0x10) ]
	void SpeechToText(struct FString FileId);

	// Object: Function DFMGameSDK.DFMGameVoice.SetVoiceLog
	// Flags: [Final|Native|Public]
	// Offset: 0x10808520
	// Params: [ Num(3) Size(0x3) ]
	void SetVoiceLog(uint8_t bEnableSdkLog, uint8_t bEnableDebugLog, uint8_t bEnableInfoLog);

	// Object: Function DFMGameSDK.DFMGameVoice.SetTimeOut
	// Flags: [Final|Native|Public]
	// Offset: 0x1356b200
	// Params: [ Num(1) Size(0x4) ]
	void SetTimeOut(int32_t TimeoutNum);

	// Object: Function DFMGameSDK.DFMGameVoice.SetSpeakerVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x109412d0
	// Params: [ Num(1) Size(0x4) ]
	void SetSpeakerVolume(int32_t Volume);

	// Object: Function DFMGameSDK.DFMGameVoice.SetSpeakerMaxVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x1356b15c
	// Params: [ Num(1) Size(0x4) ]
	void SetSpeakerMaxVolume(int32_t Volume);

	// Object: Function DFMGameSDK.DFMGameVoice.SetSpeakerButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356b0b8
	// Params: [ Num(1) Size(0x4) ]
	void SetSpeakerButtonType(int32_t ButtonType);

	// Object: Function DFMGameSDK.DFMGameVoice.SetRoomMemberVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x1356af84
	// Params: [ Num(2) Size(0x14) ]
	void SetRoomMemberVolume(struct FString OpenId, int32_t Volume);

	// Object: Function DFMGameSDK.DFMGameVoice.SetPlayerMuteState
	// Flags: [Final|Native|Public]
	// Offset: 0x1356ae48
	// Params: [ Num(2) Size(0x11) ]
	void SetPlayerMuteState(struct FString OpenId, uint8_t bMute);

	// Object: Function DFMGameSDK.DFMGameVoice.SetMossAILocalEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x1356ad9c
	// Params: [ Num(1) Size(0x1) ]
	void SetMossAILocalEnable(uint8_t bEnable);

	// Object: Function DFMGameSDK.DFMGameVoice.SetMicrophoneVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x10941140
	// Params: [ Num(1) Size(0x4) ]
	void SetMicrophoneVolume(int32_t Volume);

	// Object: Function DFMGameSDK.DFMGameVoice.SetMicrophoneMaxVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x1356acf8
	// Params: [ Num(1) Size(0x4) ]
	void SetMicrophoneMaxVolume(int32_t Volume);

	// Object: Function DFMGameSDK.DFMGameVoice.SetMicrophoneButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356ac54
	// Params: [ Num(1) Size(0x4) ]
	void SetMicrophoneButtonType(int32_t ButtonType);

	// Object: Function DFMGameSDK.DFMGameVoice.SetMicrophoneButtonPress
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356aba8
	// Params: [ Num(1) Size(0x1) ]
	void SetMicrophoneButtonPress(uint8_t bPress);

	// Object: Function DFMGameSDK.DFMGameVoice.SetHeadSetState
	// Flags: [Final|Native|Public]
	// Offset: 0x1356aafc
	// Params: [ Num(1) Size(0x1) ]
	void SetHeadSetState(uint8_t bState);

	// Object: Function DFMGameSDK.DFMGameVoice.SetGVoiceURL
	// Flags: [Final|Native|Public]
	// Offset: 0x101d2c54
	// Params: [ Num(1) Size(0x10) ]
	void SetGVoiceURL(struct FString URL);

	// Object: Function DFMGameSDK.DFMGameVoice.SetDefaultMemberVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x1073e724
	// Params: [ Num(1) Size(0x4) ]
	void SetDefaultMemberVolume(int32_t Volume);

	// Object: Function DFMGameSDK.DFMGameVoice.SetBluetoothState
	// Flags: [Final|Native|Public]
	// Offset: 0x1356aa50
	// Params: [ Num(1) Size(0x1) ]
	void SetBluetoothState(uint8_t bState);

	// Object: Function DFMGameSDK.DFMGameVoice.SendMessageToMossAI
	// Flags: [Final|Native|Public]
	// Offset: 0x1356a8d0
	// Params: [ Num(2) Size(0x20) ]
	void SendMessageToMossAI(struct FString requestId, struct FString Context);

	// Object: Function DFMGameSDK.DFMGameVoice.SelectDevice
	// Flags: [Final|Native|Public]
	// Offset: 0x1356a798
	// Params: [ Num(2) Size(0x18) ]
	void SelectDevice(int32_t DeviceType, struct FString DeviceID);

	// Object: Function DFMGameSDK.DFMGameVoice.RSTSStopRecording
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356a784
	// Params: [ Num(0) Size(0x0) ]
	void RSTSStopRecording();

	// Object: Function DFMGameSDK.DFMGameVoice.RSTSSpeechToText
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1356a60c
	// Params: [ Num(4) Size(0x30) ]
	void RSTSSpeechToText(int32_t SrcLang, struct TArray<int32_t>& TargetLangs, int32_t TimeoutMS, struct FString RecordFilePath);

	// Object: Function DFMGameSDK.DFMGameVoice.RSTSSpeechToSpeech
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1356a3a0
	// Params: [ Num(8) Size(0x48) ]
	void RSTSSpeechToSpeech(int32_t SrcLang, struct TArray<int32_t>& TargetLangs, struct FString DirPath, int32_t VoiceType, float VoiceRate, float Volume, int32_t TimeoutMS, struct FString RecordFilePath);

	// Object: Function DFMGameSDK.DFMGameVoice.ResumeVoiceEngine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356a38c
	// Params: [ Num(0) Size(0x0) ]
	void ResumeVoiceEngine();

	// Object: Function DFMGameSDK.DFMGameVoice.ResetForbidAllState
	// Flags: [Final|Native|Public]
	// Offset: 0x1356a378
	// Params: [ Num(0) Size(0x0) ]
	void ResetForbidAllState();

	// Object: Function DFMGameSDK.DFMGameVoice.ResetButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356a364
	// Params: [ Num(0) Size(0x0) ]
	void ResetButtonType();

	// Object: Function DFMGameSDK.DFMGameVoice.ReportPlayer
	// Flags: [Final|Native|Public|HasOutParms|Const]
	// Offset: 0x1356a244
	// Params: [ Num(3) Size(0x24) ]
	int32_t ReportPlayer(struct TArray<struct FString>& PlayerList, struct FString& Info);

	// Object: Function DFMGameSDK.DFMGameVoice.QuitRoomByType
	// Flags: [Final|Native|Public]
	// Offset: 0xfe4c1e4
	// Params: [ Num(1) Size(0x4) ]
	void QuitRoomByType(int32_t RoomType);

	// Object: Function DFMGameSDK.DFMGameVoice.QuitRoom
	// Flags: [Final|Native|Public]
	// Offset: 0x1356a14c
	// Params: [ Num(1) Size(0x10) ]
	void QuitRoom(struct FString RoomName);

	// Object: Function DFMGameSDK.DFMGameVoice.QuitAllRoom
	// Flags: [Final|Native|Public]
	// Offset: 0x1356a138
	// Params: [ Num(0) Size(0x0) ]
	void QuitAllRoom();

	// Object: Function DFMGameSDK.DFMGameVoice.PlayRecordedFile
	// Flags: [Final|Native|Public]
	// Offset: 0x1356a040
	// Params: [ Num(1) Size(0x10) ]
	void PlayRecordedFile(struct FString FileId);

	// Object: Function DFMGameSDK.DFMGameVoice.PauseVoiceEngine
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356a02c
	// Params: [ Num(0) Size(0x0) ]
	void PauseVoiceEngine();

	// Object: Function DFMGameSDK.DFMGameVoice.OpenMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356a018
	// Params: [ Num(0) Size(0x0) ]
	void OpenMic();

	// Object: Function DFMGameSDK.DFMGameVoice.OnRep_PlayerSpeakerButtonTypes
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13569f30
	// Params: [ Num(1) Size(0x50) ]
	void OnRep_PlayerSpeakerButtonTypes(const struct TMap<struct FString, int32_t>& ButtonTypes);

	// Object: Function DFMGameSDK.DFMGameVoice.OnRep_PlayerMicrophoneButtonTypes
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13569e48
	// Params: [ Num(1) Size(0x50) ]
	void OnRep_PlayerMicrophoneButtonTypes(const struct TMap<struct FString, int32_t>& ButtonTypes);

	// Object: Function DFMGameSDK.DFMGameVoice.OnQuitGame
	// Flags: [Final|Native|Public]
	// Offset: 0xfdd4064
	// Params: [ Num(0) Size(0x0) ]
	void OnQuitGame();

	// Object: Function DFMGameSDK.DFMGameVoice.OnEnterGame
	// Flags: [Final|Native|Public]
	// Offset: 0x10182b64
	// Params: [ Num(0) Size(0x0) ]
	void OnEnterGame();

	// Object: Function DFMGameSDK.DFMGameVoice.OnDownloaderResult
	// Flags: [Final|Native|Public]
	// Offset: 0x13569d10
	// Params: [ Num(2) Size(0x18) ]
	void OnDownloaderResult(EDownloadResult Result, struct FString LastModified);

	// Object: Function DFMGameSDK.DFMGameVoice.OnDownloaderProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x13569bf8
	// Params: [ Num(3) Size(0x18) ]
	void OnDownloaderProgress(int64_t BytesSent, int64_t BytesReceived, int64_t ContentLength);

	// Object: Function DFMGameSDK.DFMGameVoice.JoinRoom
	// Flags: [Final|Native|Public]
	// Offset: 0xf9ef26c
	// Params: [ Num(3) Size(0x18) ]
	void JoinRoom(struct FString RoomName, int32_t RoomChannel, int32_t RoomType);

	// Object: Function DFMGameSDK.DFMGameVoice.IsSpeaking
	// Flags: [Final|Native|Public]
	// Offset: 0x13569bc0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSpeaking();

	// Object: Function DFMGameSDK.DFMGameVoice.IsSpeakerOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x13569b88
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSpeakerOpen();

	// Object: Function DFMGameSDK.DFMGameVoice.IsSdkEnable
	// Flags: [Final|Native|Public]
	// Offset: 0xfd53754
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSdkEnable();

	// Object: Function DFMGameSDK.DFMGameVoice.IsRoomMemberMicrophoneOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x13569a84
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsRoomMemberMicrophoneOpen(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameVoice.IsRoomMemberForbidden
	// Flags: [Final|Native|Public]
	// Offset: 0x13569980
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsRoomMemberForbidden(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameVoice.IsPressButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135698d0
	// Params: [ Num(2) Size(0x5) ]
	uint8_t IsPressButtonType(int32_t ButtonType);

	// Object: Function DFMGameSDK.DFMGameVoice.IsPlayerSpeaking
	// Flags: [Final|Native|Public]
	// Offset: 0x135697cc
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsPlayerSpeaking(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameVoice.IsMicrophoneOpen
	// Flags: [Final|Native|Public]
	// Offset: 0x13569794
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMicrophoneOpen();

	// Object: Function DFMGameSDK.DFMGameVoice.IsMicrophoneAvailable
	// Flags: [Final|Native|Public]
	// Offset: 0x1356975c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMicrophoneAvailable();

	// Object: Function DFMGameSDK.DFMGameVoice.IsInAnyRoom
	// Flags: [Final|Native|Public]
	// Offset: 0xf9f393c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsInAnyRoom();

	// Object: Function DFMGameSDK.DFMGameVoice.IsForbidAllRoomMembers
	// Flags: [Final|Native|Public]
	// Offset: 0x13569724
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsForbidAllRoomMembers();

	// Object: Function DFMGameSDK.DFMGameVoice.IsEnable
	// Flags: [Final|Native|Public]
	// Offset: 0x135696e4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnable();

	// Object: Function DFMGameSDK.DFMGameVoice.InvokeWithStr
	// Flags: [Final|Native|Public]
	// Offset: 0x13569528
	// Params: [ Num(4) Size(0x20) ]
	void InvokeWithStr(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2, struct FString str);

	// Object: Function DFMGameSDK.DFMGameVoice.Invoke
	// Flags: [Final|Native|Public]
	// Offset: 0x10894df0
	// Params: [ Num(3) Size(0xC) ]
	void Invoke(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2);

	// Object: Function DFMGameSDK.DFMGameVoice.InitVoiceEngine
	// Flags: [Final|Native|Public]
	// Offset: 0x106f1068
	// Params: [ Num(1) Size(0x10) ]
	void InitVoiceEngine(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameVoice.HandleReconnect
	// Flags: [Final|Native|Public]
	// Offset: 0x13569514
	// Params: [ Num(0) Size(0x0) ]
	void HandleReconnect();

	// Object: Function DFMGameSDK.DFMGameVoice.GetSpeakerButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356948c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetSpeakerButtonType();

	// Object: Function DFMGameSDK.DFMGameVoice.GetSelectDeviceIndex
	// Flags: [Final|Native|Public]
	// Offset: 0x135693e0
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetSelectDeviceIndex(int32_t DeviceType);

	// Object: Function DFMGameSDK.DFMGameVoice.GetRoomMemberVolume
	// Flags: [Final|Native|Public]
	// Offset: 0x135692e0
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetRoomMemberVolume(struct FString OpenId);

	// Object: Function DFMGameSDK.DFMGameVoice.GetRoomChannelFromButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13569234
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetRoomChannelFromButtonType(int32_t ButtonType);

	// Object: Function DFMGameSDK.DFMGameVoice.GetRoomByChannel
	// Flags: [Final|Native|Public]
	// Offset: 0x13569154
	// Params: [ Num(2) Size(0x18) ]
	struct FString GetRoomByChannel(int32_t RoomChannel);

	// Object: Function DFMGameSDK.DFMGameVoice.GetOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0x135690bc
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetOpenId();

	// Object: Function DFMGameSDK.DFMGameVoice.GetMossOpusFilePath
	// Flags: [Final|Native|Public]
	// Offset: 0x13569024
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetMossOpusFilePath();

	// Object: Function DFMGameSDK.DFMGameVoice.GetMicrophoneButtonType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13568f80
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetMicrophoneButtonType();

	// Object: Function DFMGameSDK.DFMGameVoice.GetDeviceCountAsync
	// Flags: [Final|Native|Public]
	// Offset: 0x101bdeb0
	// Params: [ Num(1) Size(0x4) ]
	void GetDeviceCountAsync(int32_t DeviceType);

	// Object: Function DFMGameSDK.DFMGameVoice.GetDeviceCount
	// Flags: [Final|Native|Public]
	// Offset: 0x13568ed4
	// Params: [ Num(2) Size(0x8) ]
	int32_t GetDeviceCount(int32_t DeviceType);

	// Object: Function DFMGameSDK.DFMGameVoice.GetAudioDeviceConnectionState
	// Flags: [Final|Native|Public]
	// Offset: 0xfe0c6b8
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetAudioDeviceConnectionState();

	// Object: Function DFMGameSDK.DFMGameVoice.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf085908
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameVoice* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DFMGameVoice.ForbidRoomMemberVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x13568d98
	// Params: [ Num(2) Size(0x11) ]
	void ForbidRoomMemberVoice(struct FString OpenId, uint8_t bForbid);

	// Object: Function DFMGameSDK.DFMGameVoice.ForbidAllRoomMembersVoice
	// Flags: [Final|Native|Public]
	// Offset: 0x13568cec
	// Params: [ Num(1) Size(0x1) ]
	void ForbidAllRoomMembersVoice(uint8_t bForbid);

	// Object: Function DFMGameSDK.DFMGameVoice.EnableMultiRoom
	// Flags: [Final|Native|Public]
	// Offset: 0x1097fbf4
	// Params: [ Num(1) Size(0x1) ]
	void EnableMultiRoom(uint8_t bEnable);

	// Object: Function DFMGameSDK.DFMGameVoice.EnableCivil
	// Flags: [Final|Native|Public]
	// Offset: 0x13568bfc
	// Params: [ Num(2) Size(0x2) ]
	void EnableCivil(uint8_t bEnableRealTime, uint8_t bEnableMessage);

	// Object: Function DFMGameSDK.DFMGameVoice.EnableBluetoothSCO
	// Flags: [Final|Native|Public]
	// Offset: 0x13568b50
	// Params: [ Num(1) Size(0x1) ]
	void EnableBluetoothSCO(uint8_t bEnable);

	// Object: Function DFMGameSDK.DFMGameVoice.DownloadRecordedFile
	// Flags: [Final|Native|Public]
	// Offset: 0x13568a58
	// Params: [ Num(1) Size(0x10) ]
	void DownloadRecordedFile(struct FString FileId);

	// Object: Function DFMGameSDK.DFMGameVoice.DownloadMossAIResource
	// Flags: [Final|Native|Public]
	// Offset: 0x13568850
	// Params: [ Num(3) Size(0x30) ]
	void DownloadMossAIResource(struct FString URL, struct FString Hash, struct FString SavePath);

	// Object: Function DFMGameSDK.DFMGameVoice.DescribleDevice
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x135686cc
	// Params: [ Num(4) Size(0x28) ]
	void DescribleDevice(int32_t DeviceType, int32_t Index, struct FString& DeviceID, struct FString& DeviceName);

	// Object: Function DFMGameSDK.DFMGameVoice.CloseMic
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x135686b8
	// Params: [ Num(0) Size(0x0) ]
	void CloseMic();

	// Object: Function DFMGameSDK.DFMGameVoice.ClearMossAIData
	// Flags: [Final|Native|Public]
	// Offset: 0x135686a4
	// Params: [ Num(0) Size(0x0) ]
	void ClearMossAIData();
};

// Object: Class DFMGameSDK.DFMLocalizationCrashsightManager
// Size: 0x30 (Inherited: 0x30)
struct UDFMLocalizationCrashsightManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UDFMLocalizationCrashsightManager, "DFMLocalizationCrashsightManager")

	// Object: Function DFMGameSDK.DFMLocalizationCrashsightManager.ToggleInvalidKeyReport
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1356ce5c
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t ToggleInvalidKeyReport();
};

// Object: Class DFMGameSDK.DolphinController
// Size: 0x218 (Inherited: 0x28)
struct UDolphinController : UObject
{
	DEFINE_UE_CLASS_HELPERS(UDolphinController, "DolphinController")

	uint8_t Pad_0x28[0x1E0]; // 0x28(0x1E0)
	struct FMulticastInlineDelegate OnDolphinUpdateProgressDelegate; // 0x208(0x10)
};

// Object: Class DFMGameSDK.DolphinManager
// Size: 0x100 (Inherited: 0x30)
struct UDolphinManager : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UDolphinManager, "DolphinManager")

	uint8_t Pad_0x30[0x18]; // 0x30(0x18)
	struct UDolphinController* DolphinController; // 0x48(0x8)
	uint8_t EnableDebugLog : 1; // 0x50(0x1), Mask(0x1)
	uint8_t BitPad_0x50_1 : 7; // 0x50(0x1)
	uint8_t EnableErrorLog : 1; // 0x51(0x1), Mask(0x1)
	uint8_t BitPad_0x51_1 : 7; // 0x51(0x1)
	uint8_t Pad_0x52[0x6]; // 0x52(0x6)
	struct FString AppUpdateSavePath; // 0x58(0x10)
	struct FString ResUpdateSavePath; // 0x68(0x10)
	int32_t RetryTimes; // 0x78(0x4)
	float RetryInterval; // 0x7C(0x4)
	float InstallInterval; // 0x80(0x4)
	uint8_t bIsGrayUpdate : 1; // 0x84(0x1), Mask(0x1)
	uint8_t BitPad_0x84_1 : 7; // 0x84(0x1)
	uint8_t Pad_0x85[0x3]; // 0x85(0x3)
	struct FString GrayWorldId; // 0x88(0x10)
	struct FString GrayUserId; // 0x98(0x10)
	struct FString GcloudURLDebug; // 0xA8(0x10)
	struct FString VersionURLDebug; // 0xB8(0x10)
	struct FString CDNURLDebug; // 0xC8(0x10)
	struct FString AppVersionDebug; // 0xD8(0x10)
	struct FString ResVersionDebug; // 0xE8(0x10)
	int32_t DolphinChannelIdDebug; // 0xF8(0x4)
	uint8_t Pad_0xFC[0x4]; // 0xFC(0x4)

	// Object: Function DFMGameSDK.DolphinManager.PrepareDolphinConfig_Debug
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d588
	// Params: [ Num(0) Size(0x0) ]
	void PrepareDolphinConfig_Debug();

	// Object: Function DFMGameSDK.DolphinManager.PrepareDolphinConfig
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10b509c4
	// Params: [ Num(0) Size(0x0) ]
	void PrepareDolphinConfig();

	// Object: Function DFMGameSDK.DolphinManager.OnUpdateFailWindowCallBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d4dc
	// Params: [ Num(1) Size(0x1) ]
	void OnUpdateFailWindowCallBack(uint8_t Result);

	// Object: Function DFMGameSDK.DolphinManager.OnUpdateConfirmWindowCallBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d430
	// Params: [ Num(1) Size(0x1) ]
	void OnUpdateConfirmWindowCallBack(uint8_t Result);

	// Object: Function DFMGameSDK.DolphinManager.OnAnnounceConfirmWindowCallBack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d384
	// Params: [ Num(1) Size(0x1) ]
	void OnAnnounceConfirmWindowCallBack(uint8_t Result);

	// Object: Function DFMGameSDK.DolphinManager.IsEnable
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d344
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsEnable();

	// Object: Function DFMGameSDK.DolphinManager.Init
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d330
	// Params: [ Num(0) Size(0x0) ]
	void Init();

	// Object: Function DFMGameSDK.DolphinManager.GetNetWorkDetailInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d298
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetNetWorkDetailInfo();

	// Object: Function DFMGameSDK.DolphinManager.GetErrorType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10998b98
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetErrorType();

	// Object: Function DFMGameSDK.DolphinManager.GetErrorCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10998a64
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetErrorCode();

	// Object: Function DFMGameSDK.DolphinManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x109e2458
	// Params: [ Num(2) Size(0x10) ]
	static struct UDolphinManager* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.DolphinManager.FinishUpdateStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a5e51c
	// Params: [ Num(0) Size(0x0) ]
	void FinishUpdateStep();

	// Object: Function DFMGameSDK.DolphinManager.Deinit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d284
	// Params: [ Num(0) Size(0x0) ]
	void Deinit();

	// Object: Function DFMGameSDK.DolphinManager.CreateDolphin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1092644c
	// Params: [ Num(0) Size(0x0) ]
	void CreateDolphin();

	// Object: Function DFMGameSDK.DolphinManager.ClearSkipStepList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10998930
	// Params: [ Num(0) Size(0x0) ]
	void ClearSkipStepList();

	// Object: Function DFMGameSDK.DolphinManager.ClearFiles
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d270
	// Params: [ Num(0) Size(0x0) ]
	void ClearFiles();

	// Object: Function DFMGameSDK.DolphinManager.BeginUpdateStep_Debug
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1356d1cc
	// Params: [ Num(1) Size(0x1) ]
	void BeginUpdateStep_Debug(EDolphinVersionUpdateStep Step);

	// Object: Function DFMGameSDK.DolphinManager.BeginUpdateStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a68690
	// Params: [ Num(0) Size(0x0) ]
	void BeginUpdateStep();

	// Object: Function DFMGameSDK.DolphinManager.AddSkipStep
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x10a2d6ec
	// Params: [ Num(1) Size(0x1) ]
	void AddSkipStep(EDolphinVersionUpdateStep Step);
};

// Object: Class DFMGameSDK.GameIdcSelectorInterface
// Size: 0x28 (Inherited: 0x28)
struct IGameIdcSelectorInterface : IInterface
{
	DEFINE_UE_CLASS_HELPERS(IGameIdcSelectorInterface, "GameIdcSelectorInterface")

	// Object: Function DFMGameSDK.GameIdcSelectorInterface.RoundTripDirRequest
	// Flags: [Native|Public]
	// Offset: 0x1356d6d8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t RoundTripDirRequest();
};

// Object: Class DFMGameSDK.GameSDKInitUtil
// Size: 0x28 (Inherited: 0x28)
struct UGameSDKInitUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGameSDKInitUtil, "GameSDKInitUtil")

	// Object: Function DFMGameSDK.GameSDKInitUtil.IsRuleEffective
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1356dba8
	// Params: [ Num(2) Size(0x39) ]
	static uint8_t IsRuleEffective(const struct FGameSDKInitRuleRow& ruleRow);

	// Object: Function DFMGameSDK.GameSDKInitUtil.IsRuleDisableInit
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1356dac0
	// Params: [ Num(2) Size(0x39) ]
	static uint8_t IsRuleDisableInit(const struct FGameSDKInitRuleRow& ruleRow);

	// Object: Function DFMGameSDK.GameSDKInitUtil.GetRuleInfo
	// Flags: [Final|Native|Static|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x1356d9a8
	// Params: [ Num(2) Size(0x48) ]
	static struct FString GetRuleInfo(const struct FGameSDKInitRuleRow& ruleRow);

	// Object: Function DFMGameSDK.GameSDKInitUtil.GetRule
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x1356d8e0
	// Params: [ Num(2) Size(0x40) ]
	static struct FGameSDKInitRuleRow GetRule(EGameSDKType TargetSDK);
};

// Object: Class DFMGameSDK.GameSDKManager
// Size: 0x118 (Inherited: 0x30)
struct UGameSDKManager : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UGameSDKManager, "GameSDKManager")

	struct TArray<struct UDFMSDKBase*> GameSDKComponentList; // 0x30(0x10)
	uint8_t Pad_0x40[0x20]; // 0x40(0x20)
	struct FMulticastInlineDelegate OnLaunchToLogin_OnHealthTipShowEnd; // 0x60(0x10)
	uint8_t Pad_0x70[0x60]; // 0x70(0x60)
	struct UCommonTipView* CommonTipViewCache; // 0xD0(0x8)
	struct UBaseBackground* BaseBackground; // 0xD8(0x8)
	struct UUserWidget* HealthTipView; // 0xE0(0x8)
	struct UUserWidget* WaitingView; // 0xE8(0x8)
	struct UUserWidget* ReconnectView; // 0xF0(0x8)
	struct UObject* CommonTipAsset; // 0xF8(0x8)
	struct UObject* LoadingViewClass; // 0x100(0x8)
	struct UObject* ReconnectViewClass; // 0x108(0x8)
	uint8_t Pad_0x110[0x8]; // 0x110(0x8)

	// Object: Function DFMGameSDK.GameSDKManager.UnloadWebBrowser
	// Flags: [Final|Native|Public]
	// Offset: 0x13571298
	// Params: [ Num(0) Size(0x0) ]
	void UnloadWebBrowser();

	// Object: Function DFMGameSDK.GameSDKManager.ShowWaitingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfa4a488
	// Params: [ Num(0) Size(0x0) ]
	void ShowWaitingView();

	// Object: Function DFMGameSDK.GameSDKManager.ShowReconnectView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571284
	// Params: [ Num(0) Size(0x0) ]
	void ShowReconnectView();

	// Object: Function DFMGameSDK.GameSDKManager.ShowDefaultBackground
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571270
	// Params: [ Num(0) Size(0x0) ]
	void ShowDefaultBackground();

	// Object: Function DFMGameSDK.GameSDKManager.ShowCommonTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf08025c
	// Params: [ Num(2) Size(0x10) ]
	struct UCommonTipView* ShowCommonTip(uint8_t bIgnoreCache);

	// Object: Function DFMGameSDK.GameSDKManager.SetupBlackList
	// Flags: [Final|Native|Public]
	// Offset: 0x13571178
	// Params: [ Num(1) Size(0x10) ]
	void SetupBlackList(struct FString BlackListStr);

	// Object: Function DFMGameSDK.GameSDKManager.SetOpenId
	// Flags: [Final|Native|Public]
	// Offset: 0xe9ef45c
	// Params: [ Num(1) Size(0x10) ]
	void SetOpenId(struct FString ID);

	// Object: Function DFMGameSDK.GameSDKManager.RemoveWaitingView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf9856dc
	// Params: [ Num(0) Size(0x0) ]
	void RemoveWaitingView();

	// Object: Function DFMGameSDK.GameSDKManager.RemoveReconnectView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571164
	// Params: [ Num(0) Size(0x0) ]
	void RemoveReconnectView();

	// Object: Function DFMGameSDK.GameSDKManager.RemoveLoginTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571150
	// Params: [ Num(0) Size(0x0) ]
	void RemoveLoginTip();

	// Object: Function DFMGameSDK.GameSDKManager.RemoveDefaultBackground
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1357110c
	// Params: [ Num(0) Size(0x0) ]
	void RemoveDefaultBackground();

	// Object: Function DFMGameSDK.GameSDKManager.QuitGame
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571068
	// Params: [ Num(1) Size(0x4) ]
	void QuitGame(int32_t Index);

	// Object: Function DFMGameSDK.GameSDKManager.PreLoadWaitView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf4c0a88
	// Params: [ Num(0) Size(0x0) ]
	void PreLoadWaitView();

	// Object: Function DFMGameSDK.GameSDKManager.PreLoadReconnectView
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571054
	// Params: [ Num(0) Size(0x0) ]
	void PreLoadReconnectView();

	// Object: Function DFMGameSDK.GameSDKManager.OpenLoginTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13571040
	// Params: [ Num(0) Size(0x0) ]
	void OpenLoginTip();

	// Object: Function DFMGameSDK.GameSDKManager.OnProcessPersistentRootFinished
	// Flags: [Final|Native|Private]
	// Offset: 0x106b08c4
	// Params: [ Num(1) Size(0x8) ]
	void OnProcessPersistentRootFinished(struct ULuaUIBaseView* PersistentRoot);

	// Object: Function DFMGameSDK.GameSDKManager.Log
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xef46cc4
	// Params: [ Num(1) Size(0x10) ]
	void Log(struct FString Info);

	// Object: Function DFMGameSDK.GameSDKManager.LoadWebBrowser
	// Flags: [Final|Native|Public]
	// Offset: 0x1357102c
	// Params: [ Num(0) Size(0x0) ]
	void LoadWebBrowser();

	// Object: Function DFMGameSDK.GameSDKManager.IsValidInstallPath
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13570ff4
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsValidInstallPath();

	// Object: Function DFMGameSDK.GameSDKManager.IsNetworkStateConnect
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13570fbc
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsNetworkStateConnect();

	// Object: Function DFMGameSDK.GameSDKManager.IsNetConnected
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13570f84
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsNetConnected();

	// Object: Function DFMGameSDK.GameSDKManager.InitSDKPlugins
	// Flags: [Final|Native|Public]
	// Offset: 0x13570f70
	// Params: [ Num(0) Size(0x0) ]
	void InitSDKPlugins();

	// Object: Function DFMGameSDK.GameSDKManager.InitGCloudLogLevel
	// Flags: [Final|Native|Public]
	// Offset: 0x13570f5c
	// Params: [ Num(0) Size(0x0) ]
	void InitGCloudLogLevel();

	// Object: Function DFMGameSDK.GameSDKManager.InitGCloud
	// Flags: [Final|Native|Public]
	// Offset: 0x13570f48
	// Params: [ Num(0) Size(0x0) ]
	void InitGCloud();

	// Object: Function DFMGameSDK.GameSDKManager.GetSDKComponent
	// Flags: [Final|Native|Public]
	// Offset: 0x13570e9c
	// Params: [ Num(2) Size(0x10) ]
	struct UDFMSDKBase* GetSDKComponent(struct UObject* componentCls);

	// Object: Function DFMGameSDK.GameSDKManager.GetSavedPath
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xf63a1bc
	// Params: [ Num(3) Size(0x28) ]
	struct FString GetSavedPath(uint8_t bInternal, struct FString AdditionPath);

	// Object: Function DFMGameSDK.GameSDKManager.GetOpenId
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13570e68
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetOpenId();

	// Object: Function DFMGameSDK.GameSDKManager.GetGameVoiceIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570dc4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameVoice* GetGameVoiceIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameUrlGenerator
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570d20
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameUrlGenerator* GetGameUrlGenerator(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameTssIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570c7c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameTss* GetGameTssIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameTDMIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570bd8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameTDM* GetGameTDMIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameReportIns
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x13570b34
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameReport* GetGameReportIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGamePush
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570a90
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGamePush* GetGamePush(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGamePufferManagerIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135709ec
	// Params: [ Num(2) Size(0x10) ]
	static struct UPufferManager* GetGamePufferManagerIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameProtocolIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf082e48
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameProtocol* GetGameProtocolIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGamePlayerInfoIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570948
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGamePlayerInfo* GetGamePlayerInfoIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameOneSDKIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135708a4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameOneSDK* GetGameOneSDKIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameNotchIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570800
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameNotch* GetGameNotchIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameNetbarIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1357075c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameNetBar* GetGameNetbarIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameMidas
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135706b8
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameMidas* GetGameMidas(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameLoginIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570614
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameLogin* GetGameLoginIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameletIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570570
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGamelet* GetGameletIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameLBSIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135704cc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameLBS* GetGameLBSIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameIdcSelectorIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf085398
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameIdcSelector* GetGameIdcSelectorIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameGPMIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570428
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameGPM* GetGameGPMIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameGarena
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570384
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameGarena* GetGameGarena(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameFriendIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135702e0
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameFriend* GetGameFriendIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameDolphinManagerIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x1357023c
	// Params: [ Num(2) Size(0x10) ]
	static struct UDolphinManager* GetGameDolphinManagerIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameConnectIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf085754
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameConnect* GetGameConnectIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameCentauri
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13570198
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameCentauri* GetGameCentauri(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameBrowser
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135700f4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameBrowser* GetGameBrowser(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetGameAnnounceIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf085fb4
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMGameAnnounce* GetGameAnnounceIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.GetFreeSpaceForLogin
	// Flags: [Final|Native|Public]
	// Offset: 0x135700c0
	// Params: [ Num(1) Size(0x4) ]
	float GetFreeSpaceForLogin();

	// Object: Function DFMGameSDK.GameSDKManager.GetDefaultBackground
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0xfc7bc88
	// Params: [ Num(1) Size(0x8) ]
	struct UBaseBackground* GetDefaultBackground();

	// Object: Function DFMGameSDK.GameSDKManager.GetCrashSightIns
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xf083afc
	// Params: [ Num(2) Size(0x10) ]
	static struct UDFMCrashSight* GetCrashSightIns(struct UGameInstance* GameInstanceContext);

	// Object: Function DFMGameSDK.GameSDKManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xf081c68
	// Params: [ Num(2) Size(0x10) ]
	static struct UGameSDKManager* Get(struct UObject* Context);

	// Object: Function DFMGameSDK.GameSDKManager.DeinitSDKPlugins
	// Flags: [Final|Native|Public]
	// Offset: 0x135700ac
	// Params: [ Num(0) Size(0x0) ]
	void DeinitSDKPlugins();

	// Object: Function DFMGameSDK.GameSDKManager.ClearCommonTipViewCache
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13570098
	// Params: [ Num(0) Size(0x0) ]
	void ClearCommonTipViewCache();

	// Object: Function DFMGameSDK.GameSDKManager.CheckSpaceLimitTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13570084
	// Params: [ Num(0) Size(0x0) ]
	void CheckSpaceLimitTip();

	// Object: Function DFMGameSDK.GameSDKManager.CheckNetLimitTip
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x13570070
	// Params: [ Num(0) Size(0x0) ]
	void CheckNetLimitTip();

	// Object: Function DFMGameSDK.GameSDKManager.CheckAppVersionChange
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x1357005c
	// Params: [ Num(0) Size(0x0) ]
	void CheckAppVersionChange();
};

// Object: Class DFMGameSDK.GameSDKStatics
// Size: 0x28 (Inherited: 0x28)
struct UGameSDKStatics : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UGameSDKStatics, "GameSDKStatics")

	// Object: Function DFMGameSDK.GameSDKStatics.RequestClientExit
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x135713d8
	// Params: [ Num(2) Size(0x9) ]
	static void RequestClientExit(struct UObject* WorldContextObject, uint8_t bForce);

	// Object: Function DFMGameSDK.GameSDKStatics.GetWeGameSDKEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0xfb3c0f8
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetWeGameSDKEnabled();

	// Object: Function DFMGameSDK.GameSDKStatics.GetUdpPingFunctionEnable
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x135713a0
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t GetUdpPingFunctionEnable();
};

// Object: Class DFMGameSDK.LitePackageWrapper
// Size: 0x188 (Inherited: 0x30)
struct ULitePackageWrapper : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(ULitePackageWrapper, "LitePackageWrapper")

	uint8_t Pad_0x30[0x8]; // 0x30(0x8)
	struct UPufferManager* PtrPufferMgr; // 0x38(0x8)
	struct TArray<uint64_t> CachDownloadedQuestIDs; // 0x40(0x10)
	struct TMap<struct FString, int32_t> CachDownloadModuleName; // 0x50(0x50)
	struct TArray<struct FString> CachCombinedPaks; // 0xA0(0x10)
	struct TArray<struct FString> CachPakMD5Checked; // 0xB0(0x10)
	struct TMap<struct FString, struct FString> ModuleNameToTips; // 0xC0(0x50)
	uint8_t Pad_0x110[0x18]; // 0x110(0x18)
	struct FMulticastInlineDelegate OnLiteDownloadProgress; // 0x128(0x10)
	struct FMulticastInlineDelegate OnLiteDownloadReturn; // 0x138(0x10)
	struct FMulticastInlineDelegate OnLiteModuleCheckResult; // 0x148(0x10)
	struct FMulticastInlineDelegate OnLiteDownloadInitReturn; // 0x158(0x10)
	struct FMulticastInlineDelegate OnEngineBeforeOpenLevel; // 0x168(0x10)
	struct FMulticastInlineDelegate OnPakCombineResult; // 0x178(0x10)

	// Object: Function DFMGameSDK.LitePackageWrapper.UnRegisterTgpaCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x13574c9c
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterTgpaCallBack();

	// Object: Function DFMGameSDK.LitePackageWrapper.UnRegisterEngineOpenLevelCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x13574c88
	// Params: [ Num(0) Size(0x0) ]
	void UnRegisterEngineOpenLevelCallBack();

	// Object: Function DFMGameSDK.LitePackageWrapper.StopDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x13574b90
	// Params: [ Num(1) Size(0x10) ]
	void StopDownload(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.StopAll
	// Flags: [Final|Native|Public]
	// Offset: 0xfbbf0b8
	// Params: [ Num(0) Size(0x0) ]
	void StopAll();

	// Object: Function DFMGameSDK.LitePackageWrapper.StartDownloadImmediately
	// Flags: [Final|Native|Public]
	// Offset: 0x13574a98
	// Params: [ Num(1) Size(0x10) ]
	void StartDownloadImmediately(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.StartDownloadForce
	// Flags: [Final|Native|Public]
	// Offset: 0x1077e37c
	// Params: [ Num(2) Size(0x11) ]
	void StartDownloadForce(struct FString ModuleName, uint8_t Force);

	// Object: Function DFMGameSDK.LitePackageWrapper.StartDownload
	// Flags: [Final|Native|Public]
	// Offset: 0xf4a40c4
	// Params: [ Num(1) Size(0x10) ]
	void StartDownload(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetSimulateVersion
	// Flags: [Final|Native|Public]
	// Offset: 0x135749a0
	// Params: [ Num(1) Size(0x10) ]
	void SetSimulateVersion(struct FString SimulateVersionNew);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetNotificationTitle
	// Flags: [Final|Native|Public]
	// Offset: 0x135748a8
	// Params: [ Num(1) Size(0x10) ]
	void SetNotificationTitle(struct FString NotificationTitle);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetModuleStateByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0xee3b864
	// Params: [ Num(2) Size(0x14) ]
	void SetModuleStateByModuleName(struct FString MouduleName, int32_t State);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetModuleDownloadedToTips
	// Flags: [Final|Native|Public]
	// Offset: 0x13574728
	// Params: [ Num(2) Size(0x20) ]
	void SetModuleDownloadedToTips(struct FString ModuleName, struct FString Tips);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetLoginCombineFlag
	// Flags: [Final|Native|Public]
	// Offset: 0x13574684
	// Params: [ Num(1) Size(0x4) ]
	void SetLoginCombineFlag(int32_t NewFlag);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetImmDLMaxTask
	// Flags: [Final|Native|Public]
	// Offset: 0x135745e0
	// Params: [ Num(1) Size(0x8) ]
	void SetImmDLMaxTask(uint64_t MaxTask);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetImmDLMaxDownloadsPerTask
	// Flags: [Final|Native|Public]
	// Offset: 0x1357453c
	// Params: [ Num(1) Size(0x8) ]
	void SetImmDLMaxDownloadsPerTask(uint64_t MaxDownloadsPerTask);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetDownloadMaxSpeed
	// Flags: [Final|Native|Public]
	// Offset: 0x13574498
	// Params: [ Num(1) Size(0x8) ]
	void SetDownloadMaxSpeed(uint64_t Speed);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetCurQuestTitle
	// Flags: [Final|Native|Public]
	// Offset: 0x135743a0
	// Params: [ Num(1) Size(0x10) ]
	void SetCurQuestTitle(struct FString Title);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetCombinePakNames
	// Flags: [Final|Native|Public]
	// Offset: 0x135742d0
	// Params: [ Num(1) Size(0x10) ]
	void SetCombinePakNames(struct TArray<struct FString> CombinedPakNames);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetCachFileStatusByFileName
	// Flags: [Final|Native|Public]
	// Offset: 0x13574150
	// Params: [ Num(2) Size(0x20) ]
	void SetCachFileStatusByFileName(struct FString Filename, struct FString MD5);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetBGDEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x10682230
	// Params: [ Num(1) Size(0x1) ]
	void SetBGDEnabled(uint8_t IsEnabled);

	// Object: Function DFMGameSDK.LitePackageWrapper.SetAsyncMergeTaskMaxNum
	// Flags: [Final|Native|Public]
	// Offset: 0x135740ac
	// Params: [ Num(1) Size(0x4) ]
	void SetAsyncMergeTaskMaxNum(int32_t InMaxNum);

	// Object: Function DFMGameSDK.LitePackageWrapper.ResetDownloadedQuestIDs
	// Flags: [Final|Native|Public]
	// Offset: 0xf98e2f8
	// Params: [ Num(1) Size(0x10) ]
	void ResetDownloadedQuestIDs(struct TArray<uint64_t> DownloadedQuestIDs);

	// Object: Function DFMGameSDK.LitePackageWrapper.ReportPreDownloadEventTGPA
	// Flags: [Final|Native|Public]
	// Offset: 0x13573c60
	// Params: [ Num(12) Size(0x78) ]
	void ReportPreDownloadEventTGPA(uint64_t EnablePredownload, uint64_t ErrCode, uint64_t ErrStage, uint64_t ExtractFilecount, uint64_t FindPatchfile, uint64_t OpenPatch, struct FString Patchfile, struct FString PatchfileMd5, uint64_t PredownloadType, uint64_t TotalFilecount, uint64_t PatchMatchMd5, struct FString Sdcard);

	// Object: Function DFMGameSDK.LitePackageWrapper.ReportPreDownloadEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x13573814
	// Params: [ Num(12) Size(0x78) ]
	void ReportPreDownloadEvent(uint64_t EnablePredownload, uint64_t ErrCode, uint64_t ErrStage, uint64_t ExtractFilecount, uint64_t FindPatchfile, uint64_t OpenPatch, struct FString Patchfile, struct FString PatchfileMd5, uint64_t PredownloadType, uint64_t TotalFilecount, uint64_t PatchMatchMd5, struct FString Sdcard);

	// Object: Function DFMGameSDK.LitePackageWrapper.ReportPakMergeEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x135733a4
	// Params: [ Num(9) Size(0x78) ]
	void ReportPakMergeEvent(uint64_t ReportStage, uint64_t NetState, uint64_t ErrorCode, struct FString TargetVersionPakName, struct FString MergedMd5, struct FString BeginTimeStamp, struct FString EndTimeStamp, struct FString DeviceFreeSpaceGB, struct FString WriteFailedReason);

	// Object: Function DFMGameSDK.LitePackageWrapper.ReportDownloadSelectEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x135731e8
	// Params: [ Num(4) Size(0x28) ]
	void ReportDownloadSelectEvent(uint64_t EventId, uint64_t SelectResult, uint64_t SelectStyle, struct FString SelectInfo);

	// Object: Function DFMGameSDK.LitePackageWrapper.ReportDLCUpdateEvent
	// Flags: [Final|Native|Public]
	// Offset: 0x13572d88
	// Params: [ Num(10) Size(0x78) ]
	void ReportDLCUpdateEvent(uint64_t TotalSize, uint64_t NowSize, uint64_t Progress, struct FString StartTime, struct FString EndTime, struct FString ReportStartTime, struct FString ReportEndTime, uint64_t Traffic, uint64_t Result, struct FString Reason);

	// Object: Function DFMGameSDK.LitePackageWrapper.ReloadLiteConfig2
	// Flags: [Final|Native|Public]
	// Offset: 0x13572d74
	// Params: [ Num(0) Size(0x0) ]
	void ReloadLiteConfig2();

	// Object: Function DFMGameSDK.LitePackageWrapper.ReloadLiteConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x101d6408
	// Params: [ Num(0) Size(0x0) ]
	void ReloadLiteConfig();

	// Object: Function DFMGameSDK.LitePackageWrapper.ReleasePufferDownloader
	// Flags: [Final|Native|Public]
	// Offset: 0x101d630c
	// Params: [ Num(0) Size(0x0) ]
	void ReleasePufferDownloader();

	// Object: Function DFMGameSDK.LitePackageWrapper.RegisterTgpaCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x13572d60
	// Params: [ Num(0) Size(0x0) ]
	void RegisterTgpaCallBack();

	// Object: Function DFMGameSDK.LitePackageWrapper.RegisterRuntimeMultiModuleByChildModule
	// Flags: [Final|Native|Public]
	// Offset: 0xf2c0334
	// Params: [ Num(3) Size(0x21) ]
	void RegisterRuntimeMultiModuleByChildModule(struct FString MultiModuleName, struct TArray<struct FString> ChildModules, uint8_t IsReset);

	// Object: Function DFMGameSDK.LitePackageWrapper.RegisterRuntimeMultiModule
	// Flags: [Final|Native|Public]
	// Offset: 0xf2c5210
	// Params: [ Num(3) Size(0x21) ]
	void RegisterRuntimeMultiModule(struct FString MultiModuleName, struct TArray<struct FString> Paks, uint8_t IsReset);

	// Object: Function DFMGameSDK.LitePackageWrapper.RegisterPufferMoviePathRoot
	// Flags: [Final|Native|Public]
	// Offset: 0x13572c68
	// Params: [ Num(1) Size(0x10) ]
	void RegisterPufferMoviePathRoot(struct FString MoviesPathRoot);

	// Object: Function DFMGameSDK.LitePackageWrapper.RegisterEngineOpenLevelCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x1094b368
	// Params: [ Num(0) Size(0x0) ]
	void RegisterEngineOpenLevelCallBack();

	// Object: Function DFMGameSDK.LitePackageWrapper.OnPreDownloadInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x13572b8c
	// Params: [ Num(2) Size(0x8) ]
	void OnPreDownloadInfo(int32_t Status, int32_t Progress);

	// Object: Function DFMGameSDK.LitePackageWrapper.OnEngineOpenLevelCallBack
	// Flags: [Final|Native|Public]
	// Offset: 0x13572ae0
	// Params: [ Num(1) Size(0x10) ]
	void OnEngineOpenLevelCallBack(struct FString OpenLevelName);

	// Object: Function DFMGameSDK.LitePackageWrapper.LiteUpdatePreloadData
	// Flags: [Final|Native|Public]
	// Offset: 0x13572960
	// Params: [ Num(2) Size(0x20) ]
	void LiteUpdatePreloadData(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.LitePackageWrapper.LiteUpdateGameInfoWithStringKey
	// Flags: [Final|Native|Public]
	// Offset: 0x135727e0
	// Params: [ Num(2) Size(0x20) ]
	void LiteUpdateGameInfoWithStringKey(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.LitePackageWrapper.LiteUpdateGameInfoWithIntKey
	// Flags: [Final|Native|Public]
	// Offset: 0x135726a8
	// Params: [ Num(2) Size(0x18) ]
	void LiteUpdateGameInfoWithIntKey(int32_t Key, struct FString Value);

	// Object: Function DFMGameSDK.LitePackageWrapper.LiteGetDataFromTGPA
	// Flags: [Final|Native|Public]
	// Offset: 0x135724ec
	// Params: [ Num(3) Size(0x30) ]
	struct FString LiteGetDataFromTGPA(struct FString Key, struct FString Value);

	// Object: Function DFMGameSDK.LitePackageWrapper.IsTickFromBGD
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x135724b4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTickFromBGD();

	// Object: Function DFMGameSDK.LitePackageWrapper.IsSupportLitePackage
	// Flags: [Final|Native|Public]
	// Offset: 0xeb68110
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSupportLitePackage();

	// Object: Function DFMGameSDK.LitePackageWrapper.IsPufferInitSucceed
	// Flags: [Final|Native|Public]
	// Offset: 0x109d8cd0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPufferInitSucceed();

	// Object: Function DFMGameSDK.LitePackageWrapper.IsMobileFullPackage
	// Flags: [Final|Native|Public]
	// Offset: 0x10a3a1d0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsMobileFullPackage();

	// Object: Function DFMGameSDK.LitePackageWrapper.InitPufferDownloader
	// Flags: [Final|Native|Public]
	// Offset: 0x1091c024
	// Params: [ Num(0) Size(0x0) ]
	void InitPufferDownloader();

	// Object: Function DFMGameSDK.LitePackageWrapper.InitPakMD5Checked
	// Flags: [Final|Native|Public]
	// Offset: 0x109a2d74
	// Params: [ Num(1) Size(0x10) ]
	void InitPakMD5Checked(struct FString FileNames);

	// Object: Function DFMGameSDK.LitePackageWrapper.InitPakCombined
	// Flags: [Final|Native|Public]
	// Offset: 0x10a35870
	// Params: [ Num(1) Size(0x10) ]
	void InitPakCombined(struct FString FileNames);

	// Object: Function DFMGameSDK.LitePackageWrapper.HasPakMD5Checked
	// Flags: [Final|Native|Public]
	// Offset: 0xf3a1ec4
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasPakMD5Checked(struct FString Filename);

	// Object: Function DFMGameSDK.LitePackageWrapper.HasPakInCombined
	// Flags: [Final|Native|Public]
	// Offset: 0xe7a5db8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t HasPakInCombined(struct FString Filename);

	// Object: Function DFMGameSDK.LitePackageWrapper.GMSwicthEditorLitePackage
	// Flags: [Final|Native|Public]
	// Offset: 0x10957a9c
	// Params: [ Num(1) Size(0x1) ]
	void GMSwicthEditorLitePackage(uint8_t IsOpen);

	// Object: Function DFMGameSDK.LitePackageWrapper.GMEnableEditorDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x109578f8
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableEditorDownload(uint8_t Enable);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetStringByLuaArrary
	// Flags: [Final|Native|Public]
	// Offset: 0x135723a8
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetStringByLuaArrary(struct TArray<struct FString> LuaArrayString);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPufferInitErrorCode
	// Flags: [Final|Native|Public]
	// Offset: 0x13572374
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetPufferInitErrorCode();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPreDownloadStateProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x13572340
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPreDownloadStateProgress();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPreDownloadState
	// Flags: [Final|Native|Public]
	// Offset: 0x1357230c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPreDownloadState();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPakNamesByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0xecffd30
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<struct FString> GetPakNamesByModuleName(struct FString ModuleName, uint8_t UseRuntime);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPakMD5CheckedString
	// Flags: [Final|Native|Public]
	// Offset: 0x1085e28c
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPakMD5CheckedString();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPakIsInCombined
	// Flags: [Final|Native|Public]
	// Offset: 0x13572208
	// Params: [ Num(2) Size(0x11) ]
	uint8_t GetPakIsInCombined(struct FString PakName);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetPakCombinedString
	// Flags: [Final|Native|Public]
	// Offset: 0x13572170
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPakCombinedString();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetNumWorkerThreads
	// Flags: [Final|Native|Public]
	// Offset: 0x135720b0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNumWorkerThreads();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetNetworkState
	// Flags: [Final|Native|Public]
	// Offset: 0xfdadc54
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNetworkState();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetModuleStateForceByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x1069a28c
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetModuleStateForceByModuleName(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetModuleStateByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0xe7ad7c0
	// Params: [ Num(2) Size(0x14) ]
	int32_t GetModuleStateByModuleName(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetInstance
	// Flags: [Final|Native|Static|Public]
	// Offset: 0xfc81868
	// Params: [ Num(2) Size(0x10) ]
	static struct ULitePackageWrapper* GetInstance(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetFileStateAndSize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xe7a7ee0
	// Params: [ Num(4) Size(0x21) ]
	uint8_t GetFileStateAndSize(struct FString PakName, uint64_t& NowSize, uint64_t& TotalSize);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetFileSize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0xed478f0
	// Params: [ Num(3) Size(0x20) ]
	uint64_t GetFileSize(struct FString PakName, uint64_t& TotalSize);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetFakeProgressWithPercent
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13572004
	// Params: [ Num(2) Size(0x8) ]
	float GetFakeProgressWithPercent(float Percent);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetFakeProgress
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13571fd0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFakeProgress();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetDownloadSpeed
	// Flags: [Final|Native|Public]
	// Offset: 0x13571f9c
	// Params: [ Num(1) Size(0x8) ]
	double GetDownloadSpeed();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetDownloadedQuestIDs
	// Flags: [Final|Native|Public]
	// Offset: 0xfe5a69c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<uint64_t> GetDownloadedQuestIDs();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetDeviceTotalSpace
	// Flags: [Final|Native|Public]
	// Offset: 0x10a56f44
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetDeviceTotalSpace();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetDeviceName
	// Flags: [Final|Native|Public]
	// Offset: 0xf6ea348
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDeviceName();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetDeviceFreeSpace
	// Flags: [Final|Native|Public]
	// Offset: 0xf64a188
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetDeviceFreeSpace();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetCombinePakNames
	// Flags: [Final|Native|Public]
	// Offset: 0x13571f2c
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetCombinePakNames();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetChildModuleNamesByMultiModule
	// Flags: [Final|Native|Public]
	// Offset: 0xeef31cc
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FString> GetChildModuleNamesByMultiModule(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetBGDEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x13571ef4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetBGDEnabled();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetArraryByLuaString
	// Flags: [Final|Native|Public]
	// Offset: 0x13571de0
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FString> GetArraryByLuaString(struct FString LuaString);

	// Object: Function DFMGameSDK.LitePackageWrapper.GetAllPakNames
	// Flags: [Final|Native|Public]
	// Offset: 0xf8f2ff8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllPakNames();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetAllPakCombined
	// Flags: [Final|Native|Public]
	// Offset: 0x109c3044
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllPakCombined();

	// Object: Function DFMGameSDK.LitePackageWrapper.GetAllChildModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x101bbff4
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllChildModuleName();

	// Object: Function DFMGameSDK.LitePackageWrapper.GenerateAllModulePaksForWholePackage
	// Flags: [Final|Native|Public]
	// Offset: 0x13571dcc
	// Params: [ Num(0) Size(0x0) ]
	void GenerateAllModulePaksForWholePackage();

	// Object: Function DFMGameSDK.LitePackageWrapper.DeleteFileByPakName
	// Flags: [Final|Native|Public]
	// Offset: 0x13571cc8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t DeleteFileByPakName(struct FString PakName);

	// Object: Function DFMGameSDK.LitePackageWrapper.DeleteFileByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x13571bc4
	// Params: [ Num(2) Size(0x11) ]
	uint8_t DeleteFileByModuleName(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.CreateMgrTimer
	// Flags: [Final|Native|Public]
	// Offset: 0x1091bf28
	// Params: [ Num(0) Size(0x0) ]
	void CreateMgrTimer();

	// Object: Function DFMGameSDK.LitePackageWrapper.ClearMgrTimer
	// Flags: [Final|Native|Public]
	// Offset: 0x101d6210
	// Params: [ Num(0) Size(0x0) ]
	void ClearMgrTimer();

	// Object: Function DFMGameSDK.LitePackageWrapper.CheckModuleState
	// Flags: [Final|Native|Public]
	// Offset: 0xebe5a10
	// Params: [ Num(1) Size(0x10) ]
	void CheckModuleState(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.CheckModuleListState
	// Flags: [Final|Native|Public]
	// Offset: 0x13571af4
	// Params: [ Num(1) Size(0x10) ]
	void CheckModuleListState(struct TArray<struct FString> ModuleNames);

	// Object: Function DFMGameSDK.LitePackageWrapper.CheckFileIsInPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x135719f0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckFileIsInPuffer(struct FString PakName);

	// Object: Function DFMGameSDK.LitePackageWrapper.CheckAndShowLocalNotification
	// Flags: [Final|Native|Public]
	// Offset: 0x135718f8
	// Params: [ Num(1) Size(0x10) ]
	void CheckAndShowLocalNotification(struct FString ModuleName);

	// Object: Function DFMGameSDK.LitePackageWrapper.CheckAndSetWholePackageStatesByFileNames
	// Flags: [Final|Native|Public]
	// Offset: 0x13571828
	// Params: [ Num(1) Size(0x10) ]
	void CheckAndSetWholePackageStatesByFileNames(struct TArray<struct FString> LocalFiles);

	// Object: Function DFMGameSDK.LitePackageWrapper.CheckAndSetWholePackageStates
	// Flags: [Final|Native|Public]
	// Offset: 0x135716f0
	// Params: [ Num(2) Size(0x20) ]
	void CheckAndSetWholePackageStates(struct TArray<struct FString> LocalFiles, struct TArray<struct FString> Md5s);

	// Object: Function DFMGameSDK.LitePackageWrapper.AddPakMD5Checked
	// Flags: [Final|Native|Public]
	// Offset: 0xfae5824
	// Params: [ Num(1) Size(0x10) ]
	void AddPakMD5Checked(struct FString Filename);

	// Object: Function DFMGameSDK.LitePackageWrapper.AddPakInCombined
	// Flags: [Final|Native|Public]
	// Offset: 0x135715f8
	// Params: [ Num(1) Size(0x10) ]
	void AddPakInCombined(struct FString Filename);

	// Object: Function DFMGameSDK.LitePackageWrapper.AddCombineInfoToQueue
	// Flags: [Final|Native|Public]
	// Offset: 0x13571500
	// Params: [ Num(1) Size(0x10) ]
	void AddCombineInfoToQueue(struct FString CombineInfo);
};

// Object: Class DFMGameSDK.LoginTipWidget
// Size: 0x2F8 (Inherited: 0x2F8)
struct ULoginTipWidget : UUserWidget
{
	DEFINE_UE_CLASS_HELPERS(ULoginTipWidget, "LoginTipWidget")

	// Object: Function DFMGameSDK.LoginTipWidget.SetSpaceLimit
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SetSpaceLimit();

	// Object: Function DFMGameSDK.LoginTipWidget.SetConnectLimit
	// Flags: [Event|Public|BlueprintEvent]
	// Offset: 0x101d2e88
	// Params: [ Num(0) Size(0x0) ]
	void SetConnectLimit();
};

// Object: Class DFMGameSDK.PufferInterface
// Size: 0x3D8 (Inherited: 0x30)
struct UPufferInterface : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UPufferInterface, "PufferInterface")

	uint8_t Pad_0x30[0x2C4]; // 0x30(0x2C4)
	float mUpdatePercentValue; // 0x2F4(0x4)
	struct FString mFGCloudUrl; // 0x2F8(0x10)
	struct FString mFGameKey; // 0x308(0x10)
	struct FString mFPufferProductID; // 0x318(0x10)
	struct FString mFDefaultPufferMaxDLSpeed; // 0x328(0x10)
	struct FString mFDefaultPufferMaxDLTask; // 0x338(0x10)
	struct FString mFDefaultPufferTaskId; // 0x348(0x10)
	struct FString mFDefaultPufferDownloadPriority; // 0x358(0x10)
	struct FString mUpdatePath; // 0x368(0x10)
	struct FString mFDefaultPufferGameId; // 0x378(0x10)
	struct FString mFDefaultPufferUpdateType; // 0x388(0x10)
	struct FString mFDefaultPufferDolphinProductId; // 0x398(0x10)
	struct FString mFDefaultDolphinAppVersion; // 0x3A8(0x10)
	struct FString mFDefaultDolphinResVersion; // 0x3B8(0x10)
	struct FString mShowFileList; // 0x3C8(0x10)

	// Object: Function DFMGameSDK.PufferInterface.UpdatePollCall
	// Flags: [Final|Native|Public]
	// Offset: 0x13576798
	// Params: [ Num(0) Size(0x0) ]
	void UpdatePollCall();

	// Object: Function DFMGameSDK.PufferInterface.UpdateConfInfo
	// Flags: [Final|Native|Public]
	// Offset: 0x13576784
	// Params: [ Num(0) Size(0x0) ]
	void UpdateConfInfo();

	// Object: Function DFMGameSDK.PufferInterface.UnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x13576770
	// Params: [ Num(0) Size(0x0) ]
	void UnInit();

	// Object: Function DFMGameSDK.PufferInterface.StartRestoreFiles
	// Flags: [Final|Native|Public]
	// Offset: 0x1357675c
	// Params: [ Num(0) Size(0x0) ]
	void StartRestoreFiles();

	// Object: Function DFMGameSDK.PufferInterface.SetTaskPriority
	// Flags: [Final|Native|Public]
	// Offset: 0x13576670
	// Params: [ Num(3) Size(0xD) ]
	uint8_t SetTaskPriority(uint64_t TaskID, uint32_t Priority);

	// Object: Function DFMGameSDK.PufferInterface.SetIosBgDownloadAttr
	// Flags: [Final|Native|Public]
	// Offset: 0x1357665c
	// Params: [ Num(0) Size(0x0) ]
	void SetIosBgDownloadAttr();

	// Object: Function DFMGameSDK.PufferInterface.SetDLMaxTask
	// Flags: [Final|Native|Public]
	// Offset: 0x135765b8
	// Params: [ Num(1) Size(0x4) ]
	void SetDLMaxTask(uint32_t ImmDLMaxTask);

	// Object: Function DFMGameSDK.PufferInterface.SetDLMaxSpeed
	// Flags: [Final|Native|Public]
	// Offset: 0x13576514
	// Params: [ Num(1) Size(0x8) ]
	void SetDLMaxSpeed(uint64_t ImmDLMaxSpeed);

	// Object: Function DFMGameSDK.PufferInterface.ResumeTask
	// Flags: [Final|Native|Public]
	// Offset: 0x13576464
	// Params: [ Num(2) Size(0x9) ]
	uint8_t ResumeTask(uint64_t TaskID);

	// Object: Function DFMGameSDK.PufferInterface.ReleaseCurrentPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x13576450
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseCurrentPuffer();

	// Object: Function DFMGameSDK.PufferInterface.PauseTask
	// Flags: [Final|Native|Public]
	// Offset: 0x135763a0
	// Params: [ Num(2) Size(0x9) ]
	uint8_t PauseTask(uint64_t TaskID);

	// Object: Function DFMGameSDK.PufferInterface.IsFileReady
	// Flags: [Final|Native|Public]
	// Offset: 0x1357629c
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsFileReady(struct FString Filename);

	// Object: Function DFMGameSDK.PufferInterface.IsDirReady
	// Flags: [Final|Native|Public]
	// Offset: 0x1357614c
	// Params: [ Num(3) Size(0x12) ]
	uint8_t IsDirReady(struct FString Dir, uint8_t bHasSubDir);

	// Object: Function DFMGameSDK.PufferInterface.InitPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x13576138
	// Params: [ Num(0) Size(0x0) ]
	void InitPuffer();

	// Object: Function DFMGameSDK.PufferInterface.InitGCloud
	// Flags: [Final|Native|Public]
	// Offset: 0x13576124
	// Params: [ Num(0) Size(0x0) ]
	void InitGCloud();

	// Object: Function DFMGameSDK.PufferInterface.GetFileMd5Puffer
	// Flags: [Final|Native|Public]
	// Offset: 0x13575f98
	// Params: [ Num(3) Size(0x21) ]
	uint8_t GetFileMd5Puffer(struct FString Filename, struct FString MD5);

	// Object: Function DFMGameSDK.PufferInterface.GetFileID
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13575e54
	// Params: [ Num(2) Size(0x14) ]
	void GetFileID(struct FString Filename, uint32_t& FileId);

	// Object: Function DFMGameSDK.PufferInterface.GetDirSize
	// Flags: [Final|Native|Public]
	// Offset: 0x13575d08
	// Params: [ Num(3) Size(0x20) ]
	uint64_t GetDirSize(struct FString Dir, uint8_t bHasSubDir);

	// Object: Function DFMGameSDK.PufferInterface.GetBatchDirFileCount
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13575b6c
	// Params: [ Num(4) Size(0x19) ]
	uint8_t GetBatchDirFileCount(struct FString Dir, uint8_t bHasSubDir, uint32_t& nTotal);

	// Object: Function DFMGameSDK.PufferInterface.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13575ac8
	// Params: [ Num(2) Size(0x10) ]
	static struct UPufferInterface* Get(struct UObject* GameContextObject);

	// Object: Function DFMGameSDK.PufferInterface.DownloadList
	// Flags: [Final|Native|Public]
	// Offset: 0x135759b0
	// Params: [ Num(2) Size(0x11) ]
	void DownloadList(struct TArray<struct FString> FileList, uint8_t bForceDownload);

	// Object: Function DFMGameSDK.PufferInterface.DownloadDir
	// Flags: [Final|Native|Public]
	// Offset: 0x13575828
	// Params: [ Num(3) Size(0x12) ]
	void DownloadDir(struct FString Dir, uint8_t bHasSubDir, uint8_t bForceDownload);

	// Object: Function DFMGameSDK.PufferInterface.DownFile
	// Flags: [Final|Native|Public]
	// Offset: 0x135756ec
	// Params: [ Num(2) Size(0x11) ]
	void DownFile(struct FString Filename, uint8_t bForceDownload);

	// Object: Function DFMGameSDK.PufferInterface.DeleteByName
	// Flags: [Final|Native|Public]
	// Offset: 0x135755f4
	// Params: [ Num(1) Size(0x10) ]
	void DeleteByName(struct FString Filename);

	// Object: Function DFMGameSDK.PufferInterface.ClearFiles
	// Flags: [Final|Native|Public]
	// Offset: 0x135755e0
	// Params: [ Num(0) Size(0x0) ]
	void ClearFiles();
};

// Object: Class DFMGameSDK.PufferManager
// Size: 0x1E0 (Inherited: 0x30)
struct UPufferManager : UDFMSDKBase
{
	DEFINE_UE_CLASS_HELPERS(UPufferManager, "PufferManager")

	uint8_t Pad_0x30[0x28]; // 0x30(0x28)
	struct ULitePackageWrapper* PtrLitePackageWrapper; // 0x58(0x8)
	struct UPufferQuest* PtrCurrentDownloadQuest; // 0x60(0x8)
	struct UPufferQuest* PtrCurrentCheckQuest; // 0x68(0x8)
	struct TArray<struct UPufferQuest*> DownloadQuestQueue; // 0x70(0x10)
	struct TArray<struct UPufferQuest*> CancelQuestQueue; // 0x80(0x10)
	struct TArray<struct UPufferQuest*> CheckQuestQueue; // 0x90(0x10)
	uint8_t Pad_0xA0[0x70]; // 0xA0(0x70)
	struct TMap<struct FString, struct FString> CachSetFileNameAndMD5; // 0x110(0x50)
	uint8_t Pad_0x160[0x20]; // 0x160(0x20)
	struct TArray<struct FString> CombineQueue; // 0x180(0x10)
	uint8_t Pad_0x190[0x50]; // 0x190(0x50)

	// Object: Function DFMGameSDK.PufferManager.StopDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x135790dc
	// Params: [ Num(1) Size(0x10) ]
	void StopDownload(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.StopAll
	// Flags: [Final|Native|Public]
	// Offset: 0x135790c8
	// Params: [ Num(0) Size(0x0) ]
	void StopAll();

	// Object: Function DFMGameSDK.PufferManager.StartDownloadImmediately
	// Flags: [Final|Native|Public]
	// Offset: 0x13578fd0
	// Params: [ Num(1) Size(0x10) ]
	void StartDownloadImmediately(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.StartDownloadForce
	// Flags: [Final|Native|Public]
	// Offset: 0x13578e94
	// Params: [ Num(2) Size(0x11) ]
	void StartDownloadForce(struct FString ModuleName, uint8_t Force);

	// Object: Function DFMGameSDK.PufferManager.StartDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x13578d9c
	// Params: [ Num(1) Size(0x10) ]
	void StartDownload(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.SetTickFromBGD
	// Flags: [Final|Native|Public]
	// Offset: 0x13578cf0
	// Params: [ Num(1) Size(0x1) ]
	void SetTickFromBGD(uint8_t IsTrue);

	// Object: Function DFMGameSDK.PufferManager.SetSimulateVersion
	// Flags: [Final|Native|Public]
	// Offset: 0x13578bf8
	// Params: [ Num(1) Size(0x10) ]
	void SetSimulateVersion(struct FString SimulateVersionNew);

	// Object: Function DFMGameSDK.PufferManager.SetLoginCombineFlag
	// Flags: [Final|Native|Public]
	// Offset: 0x13578b54
	// Params: [ Num(1) Size(0x4) ]
	void SetLoginCombineFlag(int32_t NewFlag);

	// Object: Function DFMGameSDK.PufferManager.SetImmDLMaxTask
	// Flags: [Final|Native|Public]
	// Offset: 0x13578ab0
	// Params: [ Num(1) Size(0x8) ]
	void SetImmDLMaxTask(uint64_t MaxTask);

	// Object: Function DFMGameSDK.PufferManager.SetImmDLMaxDownloadsPerTask
	// Flags: [Final|Native|Public]
	// Offset: 0x13578a0c
	// Params: [ Num(1) Size(0x8) ]
	void SetImmDLMaxDownloadsPerTask(uint64_t MaxDownloadsPerTask);

	// Object: Function DFMGameSDK.PufferManager.SetDownloadMaxSpeed
	// Flags: [Final|Native|Public]
	// Offset: 0x13578968
	// Params: [ Num(1) Size(0x8) ]
	void SetDownloadMaxSpeed(uint64_t Speed);

	// Object: Function DFMGameSDK.PufferManager.SetCurrentDownloadProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x1357888c
	// Params: [ Num(2) Size(0x10) ]
	void SetCurrentDownloadProgress(uint64_t NowSize, uint64_t TotalSize);

	// Object: Function DFMGameSDK.PufferManager.SetCurQuestTitle
	// Flags: [Final|Native|Public]
	// Offset: 0x13578794
	// Params: [ Num(1) Size(0x10) ]
	void SetCurQuestTitle(struct FString Title);

	// Object: Function DFMGameSDK.PufferManager.SetBGDEnabled
	// Flags: [Final|Native|Public]
	// Offset: 0x135786e8
	// Params: [ Num(1) Size(0x1) ]
	void SetBGDEnabled(uint8_t IsEnabled);

	// Object: Function DFMGameSDK.PufferManager.SetAsyncMergeTaskMaxNum
	// Flags: [Final|Native|Public]
	// Offset: 0x13578644
	// Params: [ Num(1) Size(0x4) ]
	void SetAsyncMergeTaskMaxNum(int32_t InMaxNum);

	// Object: Function DFMGameSDK.PufferManager.ReloadLiteConfig2
	// Flags: [Final|Native|Public]
	// Offset: 0x13578630
	// Params: [ Num(0) Size(0x0) ]
	void ReloadLiteConfig2();

	// Object: Function DFMGameSDK.PufferManager.ReloadLiteConfig
	// Flags: [Final|Native|Public]
	// Offset: 0x1357861c
	// Params: [ Num(0) Size(0x0) ]
	void ReloadLiteConfig();

	// Object: Function DFMGameSDK.PufferManager.ReleasePufferDownloader
	// Flags: [Final|Native|Public]
	// Offset: 0x13578608
	// Params: [ Num(0) Size(0x0) ]
	void ReleasePufferDownloader();

	// Object: Function DFMGameSDK.PufferManager.RegisterRuntimeMultiModuleByChildModule
	// Flags: [Final|Native|Public]
	// Offset: 0x13578460
	// Params: [ Num(3) Size(0x21) ]
	void RegisterRuntimeMultiModuleByChildModule(struct FString MultiModuleName, struct TArray<struct FString> ChildModules, uint8_t IsReset);

	// Object: Function DFMGameSDK.PufferManager.RegisterRuntimeMultiModule
	// Flags: [Final|Native|Public]
	// Offset: 0x135782b8
	// Params: [ Num(3) Size(0x21) ]
	void RegisterRuntimeMultiModule(struct FString MultiModuleName, struct TArray<struct FString> Paks, uint8_t IsReset);

	// Object: Function DFMGameSDK.PufferManager.PrecomputeCurve
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x135781c0
	// Params: [ Num(2) Size(0x14) ]
	void PrecomputeCurve(const struct TArray<struct FVector2D>& Points, int32_t Segments);

	// Object: Function DFMGameSDK.PufferManager.IsTickFromBGD
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x13578188
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsTickFromBGD();

	// Object: Function DFMGameSDK.PufferManager.IsSupportLitePackage
	// Flags: [Final|Native|Public]
	// Offset: 0x13578150
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSupportLitePackage();

	// Object: Function DFMGameSDK.PufferManager.IsPufferInitSucceed
	// Flags: [Final|Native|Public]
	// Offset: 0x13578118
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsPufferInitSucceed();

	// Object: Function DFMGameSDK.PufferManager.InitPufferDownloader
	// Flags: [Final|Native|Public]
	// Offset: 0x13578104
	// Params: [ Num(0) Size(0x0) ]
	void InitPufferDownloader();

	// Object: Function DFMGameSDK.PufferManager.HandleMergeComplete2
	// Flags: [Final|Native|Public]
	// Offset: 0x13577dac
	// Params: [ Num(6) Size(0x58) ]
	void HandleMergeComplete2(int32_t ErrCode, struct FString SrcPakPath, struct FString PatchPakPath, struct FString CachedPakPath, struct FString OutputPakPath, struct FString OutputPakFileMD5);

	// Object: Function DFMGameSDK.PufferManager.GMSwicthEditorLitePackage
	// Flags: [Final|Native|Public]
	// Offset: 0x13577d00
	// Params: [ Num(1) Size(0x1) ]
	void GMSwicthEditorLitePackage(uint8_t IsOpen);

	// Object: Function DFMGameSDK.PufferManager.GMEnableEditorDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x13577c54
	// Params: [ Num(1) Size(0x1) ]
	void GMEnableEditorDownload(uint8_t Enable);

	// Object: Function DFMGameSDK.PufferManager.GetPufferInitErrorCode
	// Flags: [Final|Native|Public]
	// Offset: 0x13577c20
	// Params: [ Num(1) Size(0x8) ]
	uint64_t GetPufferInitErrorCode();

	// Object: Function DFMGameSDK.PufferManager.GetPointFromLUT
	// Flags: [Final|Native|Public|HasDefaults]
	// Offset: 0x13577b74
	// Params: [ Num(2) Size(0xC) ]
	struct FVector2D GetPointFromLUT(float T);

	// Object: Function DFMGameSDK.PufferManager.GetPakNamesByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x13577a14
	// Params: [ Num(3) Size(0x28) ]
	struct TArray<struct FString> GetPakNamesByModuleName(struct FString ModuleNam, uint8_t IgnoreRuntime);

	// Object: Function DFMGameSDK.PufferManager.GetNetworkState
	// Flags: [Final|Native|Public]
	// Offset: 0x135779e0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetNetworkState();

	// Object: Function DFMGameSDK.PufferManager.GetMultiModuleByChildModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x135778cc
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FString> GetMultiModuleByChildModuleName(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.GetFileStateAndSize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x13577728
	// Params: [ Num(4) Size(0x21) ]
	uint8_t GetFileStateAndSize(struct FString PakName, uint64_t& NowSize, uint64_t& TotalSize);

	// Object: Function DFMGameSDK.PufferManager.GetFileSize
	// Flags: [Final|Native|Public|HasOutParms]
	// Offset: 0x135775d4
	// Params: [ Num(3) Size(0x20) ]
	uint64_t GetFileSize(struct FString PakName, uint64_t& TotalSize);

	// Object: Function DFMGameSDK.PufferManager.GetFakeProgressWithPercent
	// Flags: [Final|Native|Public]
	// Offset: 0x13577528
	// Params: [ Num(2) Size(0x8) ]
	float GetFakeProgressWithPercent(float Percent);

	// Object: Function DFMGameSDK.PufferManager.GetFakeProgress
	// Flags: [Final|Native|Public]
	// Offset: 0x135774f4
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetFakeProgress();

	// Object: Function DFMGameSDK.PufferManager.GetCurrentDownloadPercent
	// Flags: [Final|Native|Public]
	// Offset: 0x135774c0
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentDownloadPercent();

	// Object: Function DFMGameSDK.PufferManager.GetCurrentCombinedPercent
	// Flags: [Final|Native|Public]
	// Offset: 0x1357748c
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetCurrentCombinedPercent();

	// Object: Function DFMGameSDK.PufferManager.GetCurQuestTitle
	// Flags: [Final|Native|Public]
	// Offset: 0x135773f4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurQuestTitle();

	// Object: Function DFMGameSDK.PufferManager.GetChildModuleNamesByMultiModule
	// Flags: [Final|Native|Public]
	// Offset: 0x135772e0
	// Params: [ Num(2) Size(0x20) ]
	struct TArray<struct FString> GetChildModuleNamesByMultiModule(struct FString ModuleNam);

	// Object: Function DFMGameSDK.PufferManager.GetBGDEnabled
	// Flags: [Final|Native|Public|Const]
	// Offset: 0x135772a8
	// Params: [ Num(1) Size(0x1) ]
	uint8_t GetBGDEnabled();

	// Object: Function DFMGameSDK.PufferManager.GetAllPakNames
	// Flags: [Final|Native|Public]
	// Offset: 0x13577238
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllPakNames();

	// Object: Function DFMGameSDK.PufferManager.GetAllChildModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x135771c8
	// Params: [ Num(1) Size(0x10) ]
	struct TArray<struct FString> GetAllChildModuleName();

	// Object: Function DFMGameSDK.PufferManager.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13577124
	// Params: [ Num(2) Size(0x10) ]
	static struct UPufferManager* Get(struct UGameInstance* GameInstance);

	// Object: Function DFMGameSDK.PufferManager.GenerateAllModulePaksForWholePackage
	// Flags: [Final|Native|Public]
	// Offset: 0x13577110
	// Params: [ Num(0) Size(0x0) ]
	void GenerateAllModulePaksForWholePackage();

	// Object: Function DFMGameSDK.PufferManager.DownloadTest
	// Flags: [Final|Native|Public]
	// Offset: 0x13577018
	// Params: [ Num(1) Size(0x10) ]
	void DownloadTest(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.DeleteFileByPakName
	// Flags: [Final|Native|Public]
	// Offset: 0x13576f14
	// Params: [ Num(2) Size(0x11) ]
	uint8_t DeleteFileByPakName(struct FString PakName);

	// Object: Function DFMGameSDK.PufferManager.DeleteFileByModuleName
	// Flags: [Final|Native|Public]
	// Offset: 0x13576e10
	// Params: [ Num(2) Size(0x11) ]
	uint8_t DeleteFileByModuleName(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.CubicBezier
	// Flags: [Final|Native|Public|HasOutParms|HasDefaults]
	// Offset: 0x13576c34
	// Params: [ Num(6) Size(0x2C) ]
	struct FVector2D CubicBezier(const struct FVector2D& p0, const struct FVector2D& p1, const struct FVector2D& p2, const struct FVector2D& p3, float T);

	// Object: Function DFMGameSDK.PufferManager.CleanBeforeLoginCombine
	// Flags: [Final|Native|Public]
	// Offset: 0x13576c20
	// Params: [ Num(0) Size(0x0) ]
	void CleanBeforeLoginCombine();

	// Object: Function DFMGameSDK.PufferManager.CheckModuleState
	// Flags: [Final|Native|Public]
	// Offset: 0x13576b28
	// Params: [ Num(1) Size(0x10) ]
	void CheckModuleState(struct FString ModuleName);

	// Object: Function DFMGameSDK.PufferManager.CheckModuleListState
	// Flags: [Final|Native|Public]
	// Offset: 0x13576a58
	// Params: [ Num(1) Size(0x10) ]
	void CheckModuleListState(struct TArray<struct FString> ModuleNames);

	// Object: Function DFMGameSDK.PufferManager.CheckFileIsInPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x13576954
	// Params: [ Num(2) Size(0x11) ]
	uint8_t CheckFileIsInPuffer(struct FString PakName);

	// Object: Function DFMGameSDK.PufferManager.AddCombineInfoToQueue
	// Flags: [Final|Native|Public]
	// Offset: 0x1357685c
	// Params: [ Num(1) Size(0x10) ]
	void AddCombineInfoToQueue(struct FString CombineInfo);
};

// Object: Class DFMGameSDK.PufferModule
// Size: 0x328 (Inherited: 0x30)
struct UPufferModule : UGameInstanceSubsystem
{
	DEFINE_UE_CLASS_HELPERS(UPufferModule, "PufferModule")

	uint8_t Pad_0x30[0x2F8]; // 0x30(0x2F8)

	// Object: Function DFMGameSDK.PufferModule.UpdatePollCall
	// Flags: [Final|Native|Public]
	// Offset: 0x13579874
	// Params: [ Num(0) Size(0x0) ]
	void UpdatePollCall();

	// Object: Function DFMGameSDK.PufferModule.UnInit
	// Flags: [Final|Native|Public]
	// Offset: 0x13579860
	// Params: [ Num(0) Size(0x0) ]
	void UnInit();

	// Object: Function DFMGameSDK.PufferModule.StartRestoreFiles
	// Flags: [Final|Native|Public]
	// Offset: 0x1357984c
	// Params: [ Num(0) Size(0x0) ]
	void StartRestoreFiles();

	// Object: Function DFMGameSDK.PufferModule.SetTaskPriority
	// Flags: [Final|Native|Public]
	// Offset: 0x13579838
	// Params: [ Num(0) Size(0x0) ]
	void SetTaskPriority();

	// Object: Function DFMGameSDK.PufferModule.SetIosBgDownloadAttr
	// Flags: [Final|Native|Public]
	// Offset: 0x13579824
	// Params: [ Num(0) Size(0x0) ]
	void SetIosBgDownloadAttr();

	// Object: Function DFMGameSDK.PufferModule.SetDLMaxTask
	// Flags: [Final|Native|Public]
	// Offset: 0x13579810
	// Params: [ Num(0) Size(0x0) ]
	void SetDLMaxTask();

	// Object: Function DFMGameSDK.PufferModule.SetDLMaxSpeed
	// Flags: [Final|Native|Public]
	// Offset: 0x135797fc
	// Params: [ Num(0) Size(0x0) ]
	void SetDLMaxSpeed();

	// Object: Function DFMGameSDK.PufferModule.ResumeTask
	// Flags: [Final|Native|Public]
	// Offset: 0x135797e8
	// Params: [ Num(0) Size(0x0) ]
	void ResumeTask();

	// Object: Function DFMGameSDK.PufferModule.RemoveAfterDownload
	// Flags: [Final|Native|Public]
	// Offset: 0x135797d4
	// Params: [ Num(0) Size(0x0) ]
	void RemoveAfterDownload();

	// Object: Function DFMGameSDK.PufferModule.ReleaseCurrentPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x135797c0
	// Params: [ Num(0) Size(0x0) ]
	void ReleaseCurrentPuffer();

	// Object: Function DFMGameSDK.PufferModule.PauseTask
	// Flags: [Final|Native|Public]
	// Offset: 0x135797ac
	// Params: [ Num(0) Size(0x0) ]
	void PauseTask();

	// Object: Function DFMGameSDK.PufferModule.IsFileReady
	// Flags: [Final|Native|Public]
	// Offset: 0x13579798
	// Params: [ Num(0) Size(0x0) ]
	void IsFileReady();

	// Object: Function DFMGameSDK.PufferModule.IsDirReady
	// Flags: [Final|Native|Public]
	// Offset: 0x13579784
	// Params: [ Num(0) Size(0x0) ]
	void IsDirReady();

	// Object: Function DFMGameSDK.PufferModule.InitPuffer
	// Flags: [Final|Native|Public]
	// Offset: 0x13579770
	// Params: [ Num(0) Size(0x0) ]
	void InitPuffer();

	// Object: Function DFMGameSDK.PufferModule.InitGCloud
	// Flags: [Final|Native|Public]
	// Offset: 0x1357975c
	// Params: [ Num(0) Size(0x0) ]
	void InitGCloud();

	// Object: Function DFMGameSDK.PufferModule.GetFileMd5Puffer
	// Flags: [Final|Native|Public]
	// Offset: 0x13579748
	// Params: [ Num(0) Size(0x0) ]
	void GetFileMd5Puffer();

	// Object: Function DFMGameSDK.PufferModule.GetFileID
	// Flags: [Final|Native|Public]
	// Offset: 0x13579734
	// Params: [ Num(0) Size(0x0) ]
	void GetFileID();

	// Object: Function DFMGameSDK.PufferModule.GetDirSize
	// Flags: [Final|Native|Public]
	// Offset: 0x13579720
	// Params: [ Num(0) Size(0x0) ]
	void GetDirSize();

	// Object: Function DFMGameSDK.PufferModule.GetBatchDirFileCount
	// Flags: [Final|Native|Public]
	// Offset: 0x1357970c
	// Params: [ Num(0) Size(0x0) ]
	void GetBatchDirFileCount();

	// Object: Function DFMGameSDK.PufferModule.Get
	// Flags: [Final|Native|Static|Public]
	// Offset: 0x13579668
	// Params: [ Num(2) Size(0x10) ]
	static struct UPufferModule* Get(struct UObject* GameContextObject);

	// Object: Function DFMGameSDK.PufferModule.DownloadList
	// Flags: [Final|Native|Public]
	// Offset: 0x13579654
	// Params: [ Num(0) Size(0x0) ]
	void DownloadList();

	// Object: Function DFMGameSDK.PufferModule.DownloadDir
	// Flags: [Final|Native|Public]
	// Offset: 0x13579640
	// Params: [ Num(0) Size(0x0) ]
	void DownloadDir();

	// Object: Function DFMGameSDK.PufferModule.DownFile
	// Flags: [Final|Native|Public]
	// Offset: 0x1357962c
	// Params: [ Num(0) Size(0x0) ]
	void DownFile();

	// Object: Function DFMGameSDK.PufferModule.DeletePartly
	// Flags: [Final|Native|Public]
	// Offset: 0x13579618
	// Params: [ Num(0) Size(0x0) ]
	void DeletePartly();

	// Object: Function DFMGameSDK.PufferModule.DeleteByName
	// Flags: [Final|Native|Public]
	// Offset: 0x13579520
	// Params: [ Num(1) Size(0x10) ]
	void DeleteByName(struct FString Filename);

	// Object: Function DFMGameSDK.PufferModule.DeleteAll
	// Flags: [Final|Native|Public]
	// Offset: 0x1357950c
	// Params: [ Num(0) Size(0x0) ]
	void DeleteAll();

	// Object: Function DFMGameSDK.PufferModule.CopyFileNamesFromRes
	// Flags: [Final|Native|Public]
	// Offset: 0x135794f8
	// Params: [ Num(0) Size(0x0) ]
	void CopyFileNamesFromRes();

	// Object: Function DFMGameSDK.PufferModule.ClearFiles
	// Flags: [Final|Native|Public]
	// Offset: 0x135794e4
	// Params: [ Num(0) Size(0x0) ]
	void ClearFiles();

	// Object: Function DFMGameSDK.PufferModule.CheckMD5
	// Flags: [Final|Native|Public]
	// Offset: 0x135794d0
	// Params: [ Num(0) Size(0x0) ]
	void CheckMD5();

	// Object: Function DFMGameSDK.PufferModule.ChangeDir
	// Flags: [Final|Native|Public]
	// Offset: 0x13579438
	// Params: [ Num(1) Size(0x10) ]
	struct FString ChangeDir();
};

// Object: Class DFMGameSDK.PufferQuest
// Size: 0xA8 (Inherited: 0x28)
struct UPufferQuest : UObject
{
	DEFINE_UE_CLASS_HELPERS(UPufferQuest, "PufferQuest")

	uint8_t Pad_0x28[0x80]; // 0x28(0x80)
};

// Object: Class DFMGameSDK.QRCodeUtil
// Size: 0x28 (Inherited: 0x28)
struct UQRCodeUtil : UBlueprintFunctionLibrary
{
	DEFINE_UE_CLASS_HELPERS(UQRCodeUtil, "QRCodeUtil")

	// Object: Function DFMGameSDK.QRCodeUtil.GenerateQRCode
	// Flags: [Final|Native|Static|Private|HasDefaults|BlueprintCallable]
	// Offset: 0x13579c44
	// Params: [ Num(12) Size(0x68) ]
	static struct UTexture2D* GenerateQRCode(struct FString QRCodeName, struct FString str, int32_t Version, struct UObject* Outer, EQRencodeMode QrencodeMode, EQRecLevel QrecLevel, int32_t casesensitive, struct FLinearColor Color1, struct FLinearColor color2, uint8_t bSRGB, uint8_t bUseAlpha);

	// Object: Function DFMGameSDK.QRCodeUtil.GenerateDefaultQRCode
	// Flags: [Final|Native|Static|Public|HasDefaults|BlueprintCallable]
	// Offset: 0x13579ae4
	// Params: [ Num(5) Size(0x40) ]
	static struct UTexture2D* GenerateDefaultQRCode(struct FString str, struct UObject* Outer, struct FLinearColor Color1, struct FLinearColor color2);
};

} // namespace SDK
