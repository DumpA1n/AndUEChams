#pragma once

#include "../CoreUObject_classes.hpp"
#include "Engine.hpp"

namespace SDK
{

// Package: WeGameSDK
// Enums: 7
// Structs: 9
// Classes: 2

struct FWeGameDLCUniversalResult;
struct FWeGamePackUniversalResult;
struct FWeGameLoginRet;
struct FWeGameDLCInfo;
struct FWeGameAcccountInfo;
struct FWeGameAbroadLoginAccountInfo;
struct FWeGameExpansionPackList;
struct FWeGameExpansionPackInfo;
struct FWeGameConnectSvrInfo;
struct UWeGameSDKDelegates;
struct UWeGameSDKManager;

// Object: Enum WeGameSDK.EWeGameLoginState
enum class EWeGameLoginState : uint8_t
{
	InValidState = 0,
	QQ = 1,
	WeChat = 2,
	email = 3,
	EWeGameLoginState_MAX = 4
};

// Object: Enum WeGameSDK.EWeGameDLCContentType
enum class EWeGameDLCContentType : uint8_t
{
	kDlcContentTypeFile = 1,
	kDlcContentTypeBuiltIn = 2,
	EWeGameDLCContentType_MAX = 3
};

// Object: Enum WeGameSDK.EWeGamePlatformType
enum class EWeGamePlatformType : uint8_t
{
	PlatformTypeUnknow = 0,
	PlatformTypeLauncher = 1,
	PlatformTypeSteam = 2,
	PlatformTypeEpic = 3,
	EWeGamePlatformType_MAX = 4
};

// Object: Enum WeGameSDK.EWeGamePackResultType
enum class EWeGamePackResultType : uint8_t
{
	PackBegin = 0,
	PackQueryExpansionPackListResult = 1,
	PackInstallExpansionPackStart = 2,
	PackInstallExpansionPackProgress = 3,
	PackPauseInstallExpansionPack = 4,
	PackResumeInstallExpansionPack = 5,
	PackInstallExpansionPackResult = 6,
	PackUninstallExpansionPackResult = 7,
	EWeGamePackResultType_MAX = 8
};

// Object: Enum WeGameSDK.EWeGamePackInstallState
enum class EWeGamePackInstallState : uint8_t
{
	PackInstallStateNotInstalled = 0,
	PackInstallStateWaitForInstallation = 1,
	PackInstallStateInstalling = 2,
	PackInstallStatePauseInstallation = 3,
	PackInstallStateInstalled = 4,
	PackInstallStateInstallationFailed = 5,
	PackInstallStateUninstalling = 6,
	EWeGamePackInstallState_MAX = 7
};

// Object: Enum WeGameSDK.EWeGameDLCResultType
enum class EWeGameDLCResultType : uint8_t
{
	DlcBegin = 0,
	DlcCheckAllDlcsStateReadyResult = 1,
	DlcInstallStart = 2,
	DlcInstallProgress = 3,
	DlcInstallFinished = 4,
	DlcUninstallProgress = 5,
	DlcUninstallFinished = 6,
	DlcPauseInstall = 7,
	DlcResumeInstall = 8,
	DlcNeedUpdate = 9,
	DlcShowDlcManageWindowResult = 10,
	DlcVerifyDlcIntegrityResult = 11,
	EWeGameDLCResultType_MAX = 12
};

// Object: Enum WeGameSDK.EWeGameLoginErrType
enum class EWeGameLoginErrType : uint8_t
{
	PlatformExit = 0,
	SDKInitErr = 1,
	InValidLoginChannel = 2,
	MSDKErr = 3,
	EWeGameLoginErrType_MAX = 4
};

// Object: ScriptStruct WeGameSDK.WeGameDLCUniversalResult
// Size: 0x78 (Inherited: 0x0)
struct FWeGameDLCUniversalResult
{
	int32_t ErrorCode; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString DLCID; // 0x8(0x10)
	struct FString NewVersion; // 0x18(0x10)
	uint8_t IsActive : 1; // 0x28(0x1), Mask(0x1)
	uint8_t BitPad_0x28_1 : 7; // 0x28(0x1)
	uint8_t isShow : 1; // 0x29(0x1), Mask(0x1)
	uint8_t BitPad_0x29_1 : 7; // 0x29(0x1)
	uint8_t Pad_0x2A[0x2]; // 0x2A(0x2)
	int32_t Progress; // 0x2C(0x4)
	struct FString FinishedBytes; // 0x30(0x10)
	struct FString TotalBytes; // 0x40(0x10)
	int32_t Speed; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString FinishedFiles; // 0x58(0x10)
	struct FString TotalFiles; // 0x68(0x10)
};

// Object: ScriptStruct WeGameSDK.WeGamePackUniversalResult
// Size: 0x58 (Inherited: 0x0)
struct FWeGamePackUniversalResult
{
	int32_t ErrorCode; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString ErrorMsg; // 0x8(0x10)
	struct FString PackID; // 0x18(0x10)
	int32_t Progress; // 0x28(0x4)
	uint8_t Pad_0x2C[0x4]; // 0x2C(0x4)
	struct FString FinishedBytes; // 0x30(0x10)
	struct FString TotalBytes; // 0x40(0x10)
	int32_t Speed; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
};

// Object: ScriptStruct WeGameSDK.WeGameLoginRet
// Size: 0xB0 (Inherited: 0x0)
struct FWeGameLoginRet
{
	int32_t error_code; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString error_msg; // 0x8(0x10)
	struct FString OpenId; // 0x18(0x10)
	struct FString Token; // 0x28(0x10)
	int32_t token_expire_time; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString Channel; // 0x40(0x10)
	int32_t channel_id; // 0x50(0x4)
	uint8_t Pad_0x54[0x4]; // 0x54(0x4)
	struct FString pf; // 0x58(0x10)
	struct FString user_name; // 0x68(0x10)
	uint8_t real_name_auth : 1; // 0x78(0x1), Mask(0x1)
	uint8_t BitPad_0x78_1 : 7; // 0x78(0x1)
	uint8_t Pad_0x79[0x7]; // 0x79(0x7)
	struct FString pf_key; // 0x80(0x10)
	struct FString picture_url; // 0x90(0x10)
	struct FString wg_login_info; // 0xA0(0x10)
};

// Object: ScriptStruct WeGameSDK.WeGameDLCInfo
// Size: 0x68 (Inherited: 0x0)
struct FWeGameDLCInfo
{
	struct FString DLCID; // 0x0(0x10)
	struct FString GameId; // 0x10(0x10)
	struct FString Version; // 0x20(0x10)
	struct FString Name; // 0x30(0x10)
	struct FString Description; // 0x40(0x10)
	double OriginalPrice; // 0x50(0x8)
	double DiscountPrice; // 0x58(0x8)
	int32_t ContentType; // 0x60(0x4)
	uint8_t IsNeedUpdate : 1; // 0x64(0x1), Mask(0x1)
	uint8_t BitPad_0x64_1 : 7; // 0x64(0x1)
	uint8_t Pad_0x65[0x3]; // 0x65(0x3)
};

// Object: ScriptStruct WeGameSDK.WeGameAcccountInfo
// Size: 0xA8 (Inherited: 0x0)
struct FWeGameAcccountInfo
{
	int32_t ErrorCode; // 0x0(0x4)
	uint8_t Pad_0x4[0x4]; // 0x4(0x4)
	struct FString ErrorMsg; // 0x8(0x10)
	struct FString OpenId; // 0x18(0x10)
	struct FString Token; // 0x28(0x10)
	int32_t TokenExpireTime; // 0x38(0x4)
	uint8_t Pad_0x3C[0x4]; // 0x3C(0x4)
	struct FString Channel; // 0x40(0x10)
	struct FString pf; // 0x50(0x10)
	struct FString userName; // 0x60(0x10)
	uint8_t realNameAuth : 1; // 0x70(0x1), Mask(0x1)
	uint8_t BitPad_0x70_1 : 7; // 0x70(0x1)
	uint8_t Pad_0x71[0x7]; // 0x71(0x7)
	struct FString pfKey; // 0x78(0x10)
	struct FString pictureUrl; // 0x88(0x10)
	struct FString ExtStr; // 0x98(0x10)
};

// Object: ScriptStruct WeGameSDK.WeGameAbroadLoginAccountInfo
// Size: 0x28 (Inherited: 0x0)
struct FWeGameAbroadLoginAccountInfo
{
	struct FString OpenId; // 0x0(0x10)
	struct FString Token; // 0x10(0x10)
	uint32_t channelID; // 0x20(0x4)
	uint32_t ZoneId; // 0x24(0x4)
};

// Object: ScriptStruct WeGameSDK.WeGameExpansionPackList
// Size: 0x10 (Inherited: 0x0)
struct FWeGameExpansionPackList
{
	struct TArray<struct FWeGameExpansionPackInfo> ExpansionPackList; // 0x0(0x10)
};

// Object: ScriptStruct WeGameSDK.WeGameExpansionPackInfo
// Size: 0x68 (Inherited: 0x0)
struct FWeGameExpansionPackInfo
{
	struct FString PackID; // 0x0(0x10)
	struct FString PackName; // 0x10(0x10)
	struct FString PackDes; // 0x20(0x10)
	struct FString PackInstallSize; // 0x30(0x10)
	struct FString DownloadSize; // 0x40(0x10)
	struct FString DownloadedSize; // 0x50(0x10)
	EWeGamePackInstallState InstallState; // 0x60(0x1)
	uint8_t Pad_0x61[0x3]; // 0x61(0x3)
	int32_t Index; // 0x64(0x4)
};

// Object: ScriptStruct WeGameSDK.WeGameConnectSvrInfo
// Size: 0x58 (Inherited: 0x0)
struct FWeGameConnectSvrInfo
{
	int64_t ZoneId; // 0x0(0x8)
	struct FString ZoneName_en; // 0x8(0x10)
	struct FString ZoneName_zh; // 0x18(0x10)
	struct FString Address; // 0x28(0x10)
	struct FString Description; // 0x38(0x10)
	struct FString MetaData; // 0x48(0x10)
};

// Object: Class WeGameSDK.WeGameSDKDelegates
// Size: 0x40 (Inherited: 0x30)
struct UWeGameSDKDelegates : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)


	// Object: Function WeGameSDK.WeGameSDKDelegates.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x178c3004
	// Params: [ Num(2) Size(0x10) ]
	static struct UWeGameSDKDelegates* Get(struct UObject* GameContextObject);
	DEFINE_UE_CLASS_HELPERS(UWeGameSDKDelegates, "WeGameSDKDelegates")

};

// Object: Class WeGameSDK.WeGameSDKManager
// Size: 0x80 (Inherited: 0x30)
struct UWeGameSDKManager : UGameInstanceSubsystem
{
	uint8_t Pad_0x30[0x10]; // 0x30(0x10)
	struct FMulticastInlineDelegate OnWeGameDLCUniversalResult; // 0x40(0x10)
	struct FMulticastInlineDelegate OnWeGamePackUniversalResult; // 0x50(0x10)
	uint8_t Pad_0x60[0x20]; // 0x60(0x20)


	// Object: Function WeGameSDK.WeGameSDKManager.TryAutoLogin
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c5170
	// Params: [ Num(0) Size(0x0) ]
	void TryAutoLogin();

	// Object: Function WeGameSDK.WeGameSDKManager.SetPlatformLanguageCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c50b8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t SetPlatformLanguageCode(struct FString Code);

	// Object: Function WeGameSDK.WeGameSDKManager.SetLitePackageFeature
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c500c
	// Params: [ Num(1) Size(0x1) ]
	void SetLitePackageFeature(uint8_t IsEnabled);

	// Object: Function WeGameSDK.WeGameSDKManager.ReportToWeGame
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c4ea0
	// Params: [ Num(3) Size(0x30) ]
	void ReportToWeGame(struct FString& Action, struct FString& Status, struct FString& ext);

	// Object: Function WeGameSDK.WeGameSDKManager.ReportGameContentDamaged
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4dfc
	// Params: [ Num(1) Size(0x4) ]
	void ReportGameContentDamaged(int32_t Flag);

	// Object: Function WeGameSDK.WeGameSDKManager.ReportDistributeIDToPerfSight
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x178c4de8
	// Params: [ Num(0) Size(0x0) ]
	static void ReportDistributeIDToPerfSight();

	// Object: Function WeGameSDK.WeGameSDKManager.RepairDamagedGameFiles
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c4d20
	// Params: [ Num(2) Size(0x11) ]
	uint8_t RepairDamagedGameFiles(const struct TArray<struct FString>& Files);

	// Object: Function WeGameSDK.WeGameSDKManager.NotifyLauncherExit
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4d0c
	// Params: [ Num(0) Size(0x0) ]
	void NotifyLauncherExit();

	// Object: Function WeGameSDK.WeGameSDKManager.IsWeGameAutoLoginEnabled
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4cd4
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsWeGameAutoLoginEnabled();

	// Object: Function WeGameSDK.WeGameSDKManager.IsSupportLitePackage
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4c9c
	// Params: [ Num(1) Size(0x1) ]
	uint8_t IsSupportLitePackage();

	// Object: Function WeGameSDK.WeGameSDKManager.IsEnabled
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x178c4c64
	// Params: [ Num(1) Size(0x1) ]
	static uint8_t IsEnabled();

	// Object: Function WeGameSDK.WeGameSDKManager.IsDLCOwned
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4bac
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsDLCOwned(struct FString DLCID);

	// Object: Function WeGameSDK.WeGameSDKManager.IsDlcNeedUpdate
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4af4
	// Params: [ Num(2) Size(0x11) ]
	uint8_t IsDlcNeedUpdate(struct FString DLCID);

	// Object: Function WeGameSDK.WeGameSDKManager.IsDLCInstalled
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c49e8
	// Params: [ Num(3) Size(0x21) ]
	uint8_t IsDLCInstalled(struct FString DLCID, struct FString& InstalledPath);

	// Object: Function WeGameSDK.WeGameSDKManager.GetServerInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c494c
	// Params: [ Num(1) Size(0x58) ]
	struct FWeGameConnectSvrInfo GetServerInfo();

	// Object: Function WeGameSDK.WeGameSDKManager.GetRegionCode
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c48b4
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetRegionCode();

	// Object: Function WeGameSDK.WeGameSDKManager.GetPlayerAdultState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4880
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetPlayerAdultState();

	// Object: Function WeGameSDK.WeGameSDKManager.GetPlatformType
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c484c
	// Params: [ Num(1) Size(0x1) ]
	EWeGamePlatformType GetPlatformType();

	// Object: Function WeGameSDK.WeGameSDKManager.GetPlatformLanguageCode
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c4784
	// Params: [ Num(2) Size(0x11) ]
	uint8_t GetPlatformLanguageCode(struct FString& Code);

	// Object: Function WeGameSDK.WeGameSDKManager.GetPfKey
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c46ec
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPfKey();

	// Object: Function WeGameSDK.WeGameSDKManager.GetPf
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4654
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetPf();

	// Object: Function WeGameSDK.WeGameSDKManager.GetPackInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4560
	// Params: [ Num(2) Size(0x78) ]
	struct FWeGameExpansionPackInfo GetPackInfo(struct FString PackID);

	// Object: Function WeGameSDK.WeGameSDKManager.GetInstance
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x178c452c
	// Params: [ Num(1) Size(0x8) ]
	static struct UWeGameSDKManager* GetInstance();

	// Object: Function WeGameSDK.WeGameSDKManager.GetExpansionPackList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c44bc
	// Params: [ Num(1) Size(0x10) ]
	struct FWeGameExpansionPackList GetExpansionPackList();

	// Object: Function WeGameSDK.WeGameSDKManager.GetExpansionPackInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c4374
	// Params: [ Num(3) Size(0x71) ]
	uint8_t GetExpansionPackInfo(int32_t Index, struct FWeGameExpansionPackInfo& PackInfo);

	// Object: Function WeGameSDK.WeGameSDKManager.GetExpansionPackCount
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4340
	// Params: [ Num(1) Size(0x4) ]
	int32_t GetExpansionPackCount();

	// Object: Function WeGameSDK.WeGameSDKManager.GetDLCInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c4200
	// Params: [ Num(3) Size(0x79) ]
	uint8_t GetDLCInfo(struct FString DLCID, struct FWeGameDLCInfo& DLCInfo);

	// Object: Function WeGameSDK.WeGameSDKManager.GetDistributeID
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4168
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetDistributeID();

	// Object: Function WeGameSDK.WeGameSDKManager.GetDiskFreeSpaceStr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c4080
	// Params: [ Num(2) Size(0x20) ]
	struct FString GetDiskFreeSpaceStr(struct FString DirectoryPath);

	// Object: Function WeGameSDK.WeGameSDKManager.GetCurrentBranchName
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3fe8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetCurrentBranchName();

	// Object: Function WeGameSDK.WeGameSDKManager.GetChannelInfo
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3f50
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetChannelInfo();

	// Object: Function WeGameSDK.WeGameSDKManager.GetAuthEncryptData
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3eb8
	// Params: [ Num(1) Size(0x10) ]
	struct FString GetAuthEncryptData();

	// Object: Function WeGameSDK.WeGameSDKManager.GetAppVersion
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c3df0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t GetAppVersion(struct FString& AppVersion);

	// Object: Function WeGameSDK.WeGameSDKManager.GetAccountInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c3cbc
	// Params: [ Num(2) Size(0xA9) ]
	uint8_t GetAccountInfo(struct FWeGameAcccountInfo& Info);

	// Object: Function WeGameSDK.WeGameSDKManager.GetAbroadLoginAccountInfo
	// Flags: [Final|Native|Public|HasOutParms|BlueprintCallable]
	// Offset: 0x178c3bdc
	// Params: [ Num(2) Size(0x29) ]
	uint8_t GetAbroadLoginAccountInfo(struct FWeGameAbroadLoginAccountInfo& Info);

	// Object: Function WeGameSDK.WeGameSDKManager.Get
	// Flags: [Final|Native|Static|Public|BlueprintCallable]
	// Offset: 0x178c3b38
	// Params: [ Num(2) Size(0x10) ]
	static struct UWeGameSDKManager* Get(struct UObject* Context);

	// Object: Function WeGameSDK.WeGameSDKManager.BroadcastLoginErr
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3a58
	// Params: [ Num(2) Size(0x8) ]
	void BroadcastLoginErr(EWeGameLoginErrType ErrType, int32_t ErrorCode);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncUninstalDLC
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c39a0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncUninstalDLC(struct FString DLCID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncShowDLCManageWindow
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3968
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AsyncShowDLCManageWindow();

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncResumeInstallExpansionPack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c38b0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncResumeInstallExpansionPack(struct FString PackID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncResumeInstallDLC
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c37f8
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncResumeInstallDLC(struct FString DLCID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncRemoveExpansionPack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3740
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncRemoveExpansionPack(struct FString PackID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncQueryExpansionPackList
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3708
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AsyncQueryExpansionPackList();

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncPauseInstallExpansionPack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3650
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncPauseInstallExpansionPack(struct FString PackID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncPauseInstallDLC
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3598
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncPauseInstallDLC(struct FString DLCID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncInstallExpansionPack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c34e0
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncInstallExpansionPack(struct FString PackID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncInstallDLC
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3428
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncInstallDLC(struct FString DLCID);

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncCheckAllDlcsState
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c33f0
	// Params: [ Num(1) Size(0x1) ]
	uint8_t AsyncCheckAllDlcsState();

	// Object: Function WeGameSDK.WeGameSDKManager.AsyncCancelInstallExpansionPack
	// Flags: [Final|Native|Public|BlueprintCallable]
	// Offset: 0x178c3338
	// Params: [ Num(2) Size(0x11) ]
	uint8_t AsyncCancelInstallExpansionPack(struct FString PackID);
	DEFINE_UE_CLASS_HELPERS(UWeGameSDKManager, "WeGameSDKManager")

};

} // namespace SDK
