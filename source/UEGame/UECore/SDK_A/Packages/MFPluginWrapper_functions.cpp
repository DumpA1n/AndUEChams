#include "MFPluginWrapper.hpp"
#include "Engine.hpp"
#include "SlateCore.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UHashChecker
struct FString UHashChecker::XXHashString(struct FString inStr, int32_t InDisplayAsHex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HashChecker", "XXHashString");
    struct
    {
        struct FString inStr;
        int32_t InDisplayAsHex;
        struct FString ReturnValue;
    } Parms{};
    Parms.inStr = (struct FString)inStr;
    Parms.InDisplayAsHex = (int32_t)InDisplayAsHex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint8_t> UHashChecker::XorData(const struct TArray<uint8_t>& InData, int32_t InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HashChecker", "XorData");
    struct
    {
        struct TArray<uint8_t> InData;
        int32_t InKey;
        struct TArray<uint8_t> ReturnValue;
    } Parms{};
    Parms.InData = (struct TArray<uint8_t>)InData;
    Parms.InKey = (int32_t)InKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHashChecker::SetHashDisplayMode(int32_t InHexMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HashChecker", "SetHashDisplayMode");
    struct
    {
        int32_t InHexMode;
        int32_t ReturnValue;
    } Parms{};
    Parms.InHexMode = (int32_t)InHexMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UHashChecker::LoadXorFileToString(struct FString InFile, int32_t InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HashChecker", "LoadXorFileToString");
    struct
    {
        struct FString InFile;
        int32_t InKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    Parms.InKey = (int32_t)InKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UHashChecker::AsyncXXHashFileList(const struct TArray<struct FString>& InFileList, struct FString InCustomParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HashChecker", "AsyncXXHashFileList");
    struct
    {
        struct TArray<struct FString> InFileList;
        struct FString InCustomParam;
        int32_t ReturnValue;
    } Parms{};
    Parms.InFileList = (struct TArray<struct FString>)InFileList;
    Parms.InCustomParam = (struct FString)InCustomParam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// IHotFixTestInterface
void IHotFixTestInterface::TestFunc()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("HotFixTestInterface", "TestFunc");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFAICreateSDKService
void UMFAICreateSDKService::ShareVideo(struct FString Platform, struct FString videopath, struct FString CoverPath, struct FString Title, struct FString Desc, struct FString ContentId, struct FString ShareInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAICreateSDKService", "ShareVideo");
    struct
    {
        struct FString Platform;
        struct FString videopath;
        struct FString CoverPath;
        struct FString Title;
        struct FString Desc;
        struct FString ContentId;
        struct FString ShareInfo;
    } Parms{};
    Parms.Platform = (struct FString)Platform;
    Parms.videopath = (struct FString)videopath;
    Parms.CoverPath = (struct FString)CoverPath;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.ContentId = (struct FString)ContentId;
    Parms.ShareInfo = (struct FString)ShareInfo;
    this->ProcessEvent(Func, &Parms);
}

void UMFAICreateSDKService::PublishVideo(struct FString Platform, struct FString videopath, struct FString CoverPath, struct FString Title, struct FString Desc, struct FString AccountId, struct FString ContentId, struct FString ShareInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAICreateSDKService", "PublishVideo");
    struct
    {
        struct FString Platform;
        struct FString videopath;
        struct FString CoverPath;
        struct FString Title;
        struct FString Desc;
        struct FString AccountId;
        struct FString ContentId;
        struct FString ShareInfo;
    } Parms{};
    Parms.Platform = (struct FString)Platform;
    Parms.videopath = (struct FString)videopath;
    Parms.CoverPath = (struct FString)CoverPath;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.AccountId = (struct FString)AccountId;
    Parms.ContentId = (struct FString)ContentId;
    Parms.ShareInfo = (struct FString)ShareInfo;
    this->ProcessEvent(Func, &Parms);
}

void UMFAICreateSDKService::InitSDK(struct FString AppID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAICreateSDKService", "InitSDK");
    struct
    {
        struct FString AppID;
    } Parms{};
    Parms.AppID = (struct FString)AppID;
    this->ProcessEvent(Func, &Parms);
}

void UMFAICreateSDKService::AuthorizeUnbind(struct FString Platform, struct FString AccountId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAICreateSDKService", "AuthorizeUnbind");
    struct
    {
        struct FString Platform;
        struct FString AccountId;
    } Parms{};
    Parms.Platform = (struct FString)Platform;
    Parms.AccountId = (struct FString)AccountId;
    this->ProcessEvent(Func, &Parms);
}

void UMFAICreateSDKService::AuthorizeQuery(struct FString Platform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAICreateSDKService", "AuthorizeQuery");
    struct
    {
        struct FString Platform;
    } Parms{};
    Parms.Platform = (struct FString)Platform;
    this->ProcessEvent(Func, &Parms);
}

void UMFAICreateSDKService::AuthorizeBind(struct FString Platform)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFAICreateSDKService", "AuthorizeBind");
    struct
    {
        struct FString Platform;
    } Parms{};
    Parms.Platform = (struct FString)Platform;
    this->ProcessEvent(Func, &Parms);
}

// UMFBoxService
bool UMFBoxService::OpenCommunity(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBoxService", "OpenCommunity");
    struct
    {
        struct FString URL;
        bool ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFBoxService::OnBoxCallbackUnreal(int32_t ClientType, struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBoxService", "OnBoxCallbackUnreal");
    struct
    {
        int32_t ClientType;
        struct FString Msg;
    } Parms{};
    Parms.ClientType = (int32_t)ClientType;
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
}

bool UMFBoxService::IsRunning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBoxService", "IsRunning");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFBoxService::InitCommunity(struct FString JsonString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFBoxService", "InitCommunity");
    struct
    {
        struct FString JsonString;
    } Parms{};
    Parms.JsonString = (struct FString)JsonString;
    this->ProcessEvent(Func, &Parms);
}

// UMFComplianceService
bool UMFComplianceService::ComplianceSetUserProfile(struct FString GameId, struct FString Openid, struct FString Token, int32_t channelID, struct FString region)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceSetUserProfile");
    struct
    {
        struct FString GameId;
        struct FString Openid;
        struct FString Token;
        int32_t channelID;
        struct FString region;
        bool ReturnValue;
    } Parms{};
    Parms.GameId = (struct FString)GameId;
    Parms.Openid = (struct FString)Openid;
    Parms.Token = (struct FString)Token;
    Parms.channelID = (int32_t)channelID;
    Parms.region = (struct FString)region;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFComplianceService::ComplianceSetParentCertificateStatus(int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceSetParentCertificateStatus");
    struct
    {
        int32_t Status;
    } Parms{};
    Parms.Status = (int32_t)Status;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFComplianceService::ComplianceSetEUAgreeStatus(int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceSetEUAgreeStatus");
    struct
    {
        int32_t Status;
    } Parms{};
    Parms.Status = (int32_t)Status;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFComplianceService::ComplianceSetAdulthood(int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceSetAdulthood");
    struct
    {
        int32_t Status;
    } Parms{};
    Parms.Status = (int32_t)Status;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFComplianceService::ComplianceSendEmail(struct FString email, struct FString userName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceSendEmail");
    struct
    {
        struct FString email;
        struct FString userName;
    } Parms{};
    Parms.email = (struct FString)email;
    Parms.userName = (struct FString)userName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFComplianceService::ComplianceQueryUserStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceQueryUserStatus");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFComplianceService::ComplianceQueryIsEEA(struct FString region)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceQueryIsEEA");
    struct
    {
        struct FString region;
    } Parms{};
    Parms.region = (struct FString)region;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFComplianceService::ComplianceCommitBirthday(int32_t BirthdayYear, int32_t BirthdayMonth, int32_t BirthdayDay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFComplianceService", "ComplianceCommitBirthday");
    struct
    {
        int32_t BirthdayYear;
        int32_t BirthdayMonth;
        int32_t BirthdayDay;
    } Parms{};
    Parms.BirthdayYear = (int32_t)BirthdayYear;
    Parms.BirthdayMonth = (int32_t)BirthdayMonth;
    Parms.BirthdayDay = (int32_t)BirthdayDay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFCustomerService
void UMFCustomerService::LaunchCustomerUI(struct FString langType, struct FString sign, struct FString Openid, struct FString gameLevel, struct FString NickName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFCustomerService", "LaunchCustomerUI");
    struct
    {
        struct FString langType;
        struct FString sign;
        struct FString Openid;
        struct FString gameLevel;
        struct FString NickName;
    } Parms{};
    Parms.langType = (struct FString)langType;
    Parms.sign = (struct FString)sign;
    Parms.Openid = (struct FString)Openid;
    Parms.gameLevel = (struct FString)gameLevel;
    Parms.NickName = (struct FString)NickName;
    this->ProcessEvent(Func, &Parms);
}

// UMFEsCapturerService
void UMFEsCapturerService::UpdateStartParams(struct FString UserInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "UpdateStartParams");
    struct
    {
        struct FString UserInfo;
    } Parms{};
    Parms.UserInfo = (struct FString)UserInfo;
    this->ProcessEvent(Func, &Parms);
}

void UMFEsCapturerService::SetCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "SetCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFEsCapturerService::ReAuthDouyin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "ReAuthDouyin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFEsCapturerService::InitSDK(struct FString UserInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "InitSDK");
    struct
    {
        struct FString UserInfo;
    } Parms{};
    Parms.UserInfo = (struct FString)UserInfo;
    this->ProcessEvent(Func, &Parms);
}

void UMFEsCapturerService::GetDouyinToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "GetDouyinToken");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFEsCapturerService::Fire(struct FString RecordParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "Fire");
    struct
    {
        struct FString RecordParams;
    } Parms{};
    Parms.RecordParams = (struct FString)RecordParams;
    this->ProcessEvent(Func, &Parms);
}

bool UMFEsCapturerService::Finish(struct FString Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "Finish");
    struct
    {
        struct FString Params;
        bool ReturnValue;
    } Parms{};
    Parms.Params = (struct FString)Params;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFEsCapturerService::Available()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEsCapturerService", "Available");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudCommonStatics
struct FString UMFGCloudCommonStatics::GetNetworkConnectionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudCommonStatics", "GetNetworkConnectionType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudCommonStatics::GetCarrier()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudCommonStatics", "GetCarrier");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudCrashObserver
void UMFGCloudCrashObserver::TrySetVkCrashNum(int32_t LaunchID, int32_t CrashNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudCrashObserver", "TrySetVkCrashNum");
    struct
    {
        int32_t LaunchID;
        int32_t CrashNum;
    } Parms{};
    Parms.LaunchID = (int32_t)LaunchID;
    Parms.CrashNum = (int32_t)CrashNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFGCloudCrashService
void UMFGCloudCrashService::UACrastTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "UACrastTest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::SetWaterMarkInfo(struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "SetWaterMarkInfo");
    struct
    {
        struct FString Info;
    } Parms{};
    Parms.Info = (struct FString)Info;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::SetUserValue(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "SetUserValue");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::SetUserId(struct FString UserId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "SetUserId");
    struct
    {
        struct FString UserId;
    } Parms{};
    Parms.UserId = (struct FString)UserId;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::SetDownloadState(int32_t nState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "SetDownloadState");
    struct
    {
        int32_t nState;
    } Parms{};
    Parms.nState = (int32_t)nState;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::ReportWithLogLua(struct UObject* WorldContextObject, struct FString Name, struct FString buf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudCrashService", "ReportWithLogLua");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString Name;
        struct FString buf;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Name = (struct FString)Name;
    Parms.buf = (struct FString)buf;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::ReportMetalTrace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "ReportMetalTrace");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::reportLastOutOfMemory(int32_t Step)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "reportLastOutOfMemory");
    struct
    {
        int32_t Step;
    } Parms{};
    Parms.Step = (int32_t)Step;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::ReportException(int32_t Type, struct FString exceptionName, struct FString exceptionMsg, struct FString exceptionStack, struct TMap<struct FString, struct FString>& extInfo, int32_t repFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "ReportException");
    struct
    {
        int32_t Type;
        struct FString exceptionName;
        struct FString exceptionMsg;
        struct FString exceptionStack;
        struct TMap<struct FString, struct FString> extInfo;
        int32_t repFlag;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.exceptionName = (struct FString)exceptionName;
    Parms.exceptionMsg = (struct FString)exceptionMsg;
    Parms.exceptionStack = (struct FString)exceptionStack;
    Parms.repFlag = (int32_t)repFlag;
    this->ProcessEvent(Func, &Parms);
    extInfo = Parms.extInfo;
}

void UMFGCloudCrashService::recordGameNeed(bool bRead, int32_t Index, int32_t Value, int32_t delVal, struct FString& reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "recordGameNeed");
    struct
    {
        bool bRead;
        int32_t Index;
        int32_t Value;
        int32_t delVal;
        struct FString reason;
    } Parms{};
    Parms.bRead = (bool)bRead;
    Parms.Index = (int32_t)Index;
    Parms.Value = (int32_t)Value;
    Parms.delVal = (int32_t)delVal;
    this->ProcessEvent(Func, &Parms);
    reason = Parms.reason;
}

void UMFGCloudCrashService::OnStepToGameCall()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnStepToGameCall");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelperDumplastRecord(int32_t Param)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelperDumplastRecord");
    struct
    {
        int32_t Param;
    } Parms{};
    Parms.Param = (int32_t)Param;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelperCmd(struct FString Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelperCmd");
    struct
    {
        struct FString Cmd;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_stopTrackCPU()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_stopTrackCPU");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_stopDisplayLink()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_stopDisplayLink");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_stopBlockMonitor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_stopBlockMonitor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_startTrackCPU()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_startTrackCPU");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_startDisplayLink(struct FString strSense)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_startDisplayLink");
    struct
    {
        struct FString strSense;
    } Parms{};
    Parms.strSense = (struct FString)strSense;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_startBlockMonitor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_startBlockMonitor");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_setShouldSuspendAllThreads(bool shouldSuspendAllThreads)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_setShouldSuspendAllThreads");
    struct
    {
        bool shouldSuspendAllThreads;
    } Parms{};
    Parms.shouldSuspendAllThreads = (bool)shouldSuspendAllThreads;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_setRunloopThreshold(int32_t Seconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_setRunloopThreshold");
    struct
    {
        int32_t Seconds;
    } Parms{};
    Parms.Seconds = (int32_t)Seconds;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_setCustomInfo(int32_t Index, int32_t Value, int32_t Delete)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_setCustomInfo");
    struct
    {
        int32_t Index;
        int32_t Value;
        int32_t Delete;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Value = (int32_t)Value;
    Parms.Delete = (int32_t)Delete;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_recoverRunloopThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_recoverRunloopThreshold");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_recoverCPUUsage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_recoverCPUUsage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_lowerRunloopThreshold()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_lowerRunloopThreshold");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_lowerCPUUsage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_lowerCPUUsage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_isBackgroundCPUTooSmall()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_isBackgroundCPUTooSmall");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnMatrixiOSHelper_generateLiveReportWithDumpType(int32_t dumpType1, struct FString reason, bool bSelfDefined)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnMatrixiOSHelper_generateLiveReportWithDumpType");
    struct
    {
        int32_t dumpType1;
        struct FString reason;
        bool bSelfDefined;
    } Parms{};
    Parms.dumpType1 = (int32_t)dumpType1;
    Parms.reason = (struct FString)reason;
    Parms.bSelfDefined = (bool)bSelfDefined;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnGPMAgentReport(struct FString ReportName, int32_t Enable, int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnGPMAgentReport");
    struct
    {
        struct FString ReportName;
        int32_t Enable;
        int32_t Level;
    } Parms{};
    Parms.ReportName = (struct FString)ReportName;
    Parms.Enable = (int32_t)Enable;
    Parms.Level = (int32_t)Level;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::OnConsoleDumphitches(int32_t From, bool bStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "OnConsoleDumphitches");
    struct
    {
        int32_t From;
        bool bStart;
    } Parms{};
    Parms.From = (int32_t)From;
    Parms.bStart = (bool)bStart;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::LogMonitorInfo(struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "LogMonitorInfo");
    struct
    {
        struct FString Info;
    } Parms{};
    Parms.Info = (struct FString)Info;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudCrashService::LogInfo(int32_t Level, struct FString Tag, struct FString Log)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "LogInfo");
    struct
    {
        int32_t Level;
        struct FString Tag;
        struct FString Log;
    } Parms{};
    Parms.Level = (int32_t)Level;
    Parms.Tag = (struct FString)Tag;
    Parms.Log = (struct FString)Log;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudCrashService::is_RUNNING_WITH_ASAN()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "is_RUNNING_WITH_ASAN");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudCrashService::GetWaterMarkInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "GetWaterMarkInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudCrashService::ConsoleDumphitches(bool bStart)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudCrashService", "ConsoleDumphitches");
    struct
    {
        bool bStart;
    } Parms{};
    Parms.bStart = (bool)bStart;
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudDolphinService
void UMFGCloudDolphinService::UpdateAndroidDownloadNotify(int32_t InProgress, struct FString InContentText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudDolphinService", "UpdateAndroidDownloadNotify");
    struct
    {
        int32_t InProgress;
        struct FString InContentText;
    } Parms{};
    Parms.InProgress = (int32_t)InProgress;
    Parms.InContentText = (struct FString)InContentText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::ShowAndroidDownloadNotify(struct FString InTitle, int32_t InFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudDolphinService", "ShowAndroidDownloadNotify");
    struct
    {
        struct FString InTitle;
        int32_t InFlag;
    } Parms{};
    Parms.InTitle = (struct FString)InTitle;
    Parms.InFlag = (int32_t)InFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::SetUseThreadPoll(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudDolphinService", "SetUseThreadPoll");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::SetPreDownloadDir(struct FString InDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "SetPreDownloadDir");
    struct
    {
        struct FString InDir;
    } Parms{};
    Parms.InDir = (struct FString)InDir;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::SetGrayInfo(struct FString InUserID, struct FString InWorldID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "SetGrayInfo");
    struct
    {
        struct FString InUserID;
        struct FString InWorldID;
    } Parms{};
    Parms.InUserID = (struct FString)InUserID;
    Parms.InWorldID = (struct FString)InWorldID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnNoticeInstallApk(struct FString InApkPath, bool InResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnNoticeInstallApk");
    struct
    {
        struct FString InApkPath;
        bool InResult;
    } Parms{};
    Parms.InApkPath = (struct FString)InApkPath;
    Parms.InResult = (bool)InResult;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnDolphinVersionInfoImplement(bool isAppUpdating, bool isNeedUpdating, bool isForcedUpdating, struct FString InGameVersion, int64_t needDownloadSize, struct FString userDefineStr, bool isAuditVersion, bool isGrayVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnDolphinVersionInfoImplement");
    struct
    {
        bool isAppUpdating;
        bool isNeedUpdating;
        bool isForcedUpdating;
        struct FString InGameVersion;
        int64_t needDownloadSize;
        struct FString userDefineStr;
        bool isAuditVersion;
        bool isGrayVersion;
    } Parms{};
    Parms.isAppUpdating = (bool)isAppUpdating;
    Parms.isNeedUpdating = (bool)isNeedUpdating;
    Parms.isForcedUpdating = (bool)isForcedUpdating;
    Parms.InGameVersion = (struct FString)InGameVersion;
    Parms.needDownloadSize = (int64_t)needDownloadSize;
    Parms.userDefineStr = (struct FString)userDefineStr;
    Parms.isAuditVersion = (bool)isAuditVersion;
    Parms.isGrayVersion = (bool)isGrayVersion;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnDolphinStageChanged(int32_t InNewStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnDolphinStageChanged");
    struct
    {
        int32_t InNewStage;
    } Parms{};
    Parms.InNewStage = (int32_t)InNewStage;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnDolphinRestart()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnDolphinRestart");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnDolphinProgress(int32_t curVersionStage, int64_t TotalSize, int64_t currentSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnDolphinProgress");
    struct
    {
        int32_t curVersionStage;
        int64_t TotalSize;
        int64_t currentSize;
    } Parms{};
    Parms.curVersionStage = (int32_t)curVersionStage;
    Parms.TotalSize = (int64_t)TotalSize;
    Parms.currentSize = (int64_t)currentSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnDolphinCallBackSuccess()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnDolphinCallBackSuccess");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnDolphinCallBackError(int32_t VersionStage, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnDolphinCallBackError");
    struct
    {
        int32_t VersionStage;
        int32_t ErrorCode;
    } Parms{};
    Parms.VersionStage = (int32_t)VersionStage;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnContinueDolphin(bool bContinue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnContinueDolphin");
    struct
    {
        bool bContinue;
    } Parms{};
    Parms.bContinue = (bool)bContinue;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::OnCancelDolphin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "OnCancelDolphin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFGCloudDolphinService::GetPreDownloadDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "GetPreDownloadDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudDolphinService::GetCacheDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "GetCacheDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudDolphinService::DynamicAdjustDolphinSystemParameter(int32_t InParamKey, struct FString InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "DynamicAdjustDolphinSystemParameter");
    struct
    {
        int32_t InParamKey;
        struct FString InValue;
    } Parms{};
    Parms.InParamKey = (int32_t)InParamKey;
    Parms.InValue = (struct FString)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::CloseAndroidDownloadNotify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudDolphinService", "CloseAndroidDownloadNotify");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGCloudDolphinService::CheckUpdate(int32_t InUpdateType, int32_t InChannelId, struct FString InAppVersion, struct FString InAssetVersion, struct FString InRemoteURL, struct FString InUpdateDir, bool InFixupMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudDolphinService", "CheckUpdate");
    struct
    {
        int32_t InUpdateType;
        int32_t InChannelId;
        struct FString InAppVersion;
        struct FString InAssetVersion;
        struct FString InRemoteURL;
        struct FString InUpdateDir;
        bool InFixupMode;
    } Parms{};
    Parms.InUpdateType = (int32_t)InUpdateType;
    Parms.InChannelId = (int32_t)InChannelId;
    Parms.InAppVersion = (struct FString)InAppVersion;
    Parms.InAssetVersion = (struct FString)InAssetVersion;
    Parms.InRemoteURL = (struct FString)InRemoteURL;
    Parms.InUpdateDir = (struct FString)InUpdateDir;
    Parms.InFixupMode = (bool)InFixupMode;
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudFriendService
bool UMFGCloudFriendService::UploadFile(struct FString InFilePath, struct FString InCosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "UploadFile");
    struct
    {
        struct FString InFilePath;
        struct FString InCosPath;
        bool ReturnValue;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    Parms.InCosPath = (struct FString)InCosPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudFriendService::UpdateProgress(int32_t Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "UpdateProgress");
    struct
    {
        int32_t Progress;
    } Parms{};
    Parms.Progress = (int32_t)Progress;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::ShareVideo(struct FString MediaPath, struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareVideo");
    struct
    {
        struct FString MediaPath;
        struct FString Channel;
    } Parms{};
    Parms.MediaPath = (struct FString)MediaPath;
    Parms.Channel = (struct FString)Channel;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::ShareQQZone(struct FString ThumbPath, struct FString Link)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareQQZone");
    struct
    {
        struct FString ThumbPath;
        struct FString Link;
    } Parms{};
    Parms.ThumbPath = (struct FString)ThumbPath;
    Parms.Link = (struct FString)Link;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudFriendService::ShareOverseaEx(struct FString Channel, int32_t ShareType, struct FString Title, struct FString Desc, struct FString ImgPath, struct FString ThumbPath, struct FString MediaPath, struct FString Link)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareOverseaEx");
    struct
    {
        struct FString Channel;
        int32_t ShareType;
        struct FString Title;
        struct FString Desc;
        struct FString ImgPath;
        struct FString ThumbPath;
        struct FString MediaPath;
        struct FString Link;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.ShareType = (int32_t)ShareType;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.ImgPath = (struct FString)ImgPath;
    Parms.ThumbPath = (struct FString)ThumbPath;
    Parms.MediaPath = (struct FString)MediaPath;
    Parms.Link = (struct FString)Link;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudFriendService::ShareOversea(struct FString Channel, int32_t ShareType, struct FString Link, struct FString img, struct FString Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareOversea");
    struct
    {
        struct FString Channel;
        int32_t ShareType;
        struct FString Link;
        struct FString img;
        struct FString Desc;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.ShareType = (int32_t)ShareType;
    Parms.Link = (struct FString)Link;
    Parms.img = (struct FString)img;
    Parms.Desc = (struct FString)Desc;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudFriendService::ShareMiniApp(struct FString ExtralJson, struct FString ThumbPath, struct FString Link, struct FString Title, struct FString Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareMiniApp");
    struct
    {
        struct FString ExtralJson;
        struct FString ThumbPath;
        struct FString Link;
        struct FString Title;
        struct FString Desc;
    } Parms{};
    Parms.ExtralJson = (struct FString)ExtralJson;
    Parms.ThumbPath = (struct FString)ThumbPath;
    Parms.Link = (struct FString)Link;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::ShareLink(struct FString Channel, struct FString Link, struct FString Thumb, struct FString Title, struct FString Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareLink");
    struct
    {
        struct FString Channel;
        struct FString Link;
        struct FString Thumb;
        struct FString Title;
        struct FString Desc;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Link = (struct FString)Link;
    Parms.Thumb = (struct FString)Thumb;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::ShareImgWeChat(struct FString ImgPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareImgWeChat");
    struct
    {
        struct FString ImgPath;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::ShareImgQQ(struct FString ImgPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ShareImgQQ");
    struct
    {
        struct FString ImgPath;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendVLog(struct FString MediaPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendVLog");
    struct
    {
        struct FString MediaPath;
    } Parms{};
    Parms.MediaPath = (struct FString)MediaPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendText(struct FString Channel, struct FString User, struct FString Desc, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendText");
    struct
    {
        struct FString Channel;
        struct FString User;
        struct FString Desc;
        struct FString extraJson;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.User = (struct FString)User;
    Parms.Desc = (struct FString)Desc;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendResultImg(int32_t Window, struct FString ThumbPath, struct FString img)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendResultImg");
    struct
    {
        int32_t Window;
        struct FString ThumbPath;
        struct FString img;
    } Parms{};
    Parms.Window = (int32_t)Window;
    Parms.ThumbPath = (struct FString)ThumbPath;
    Parms.img = (struct FString)img;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendMiniApp(struct FString extraJson, struct FString Channel, struct FString Thumb, struct FString Link, struct FString Title, struct FString Desc, struct FString MediaPath, struct FString User)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendMiniApp");
    struct
    {
        struct FString extraJson;
        struct FString Channel;
        struct FString Thumb;
        struct FString Link;
        struct FString Title;
        struct FString Desc;
        struct FString MediaPath;
        struct FString User;
    } Parms{};
    Parms.extraJson = (struct FString)extraJson;
    Parms.Channel = (struct FString)Channel;
    Parms.Thumb = (struct FString)Thumb;
    Parms.Link = (struct FString)Link;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.MediaPath = (struct FString)MediaPath;
    Parms.User = (struct FString)User;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendLink(struct FString Channel, struct FString User, struct FString Link, struct FString Thumb, struct FString Openid, struct FString Title, struct FString Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendLink");
    struct
    {
        struct FString Channel;
        struct FString User;
        struct FString Link;
        struct FString Thumb;
        struct FString Openid;
        struct FString Title;
        struct FString Desc;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.User = (struct FString)User;
    Parms.Link = (struct FString)Link;
    Parms.Thumb = (struct FString)Thumb;
    Parms.Openid = (struct FString)Openid;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendInviteSilent(struct FString ImgPath, struct FString User)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendInviteSilent");
    struct
    {
        struct FString ImgPath;
        struct FString User;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    Parms.User = (struct FString)User;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendInvite(struct FString ImgPath, int32_t Type, struct FString extraJson, struct FString Link, struct FString Channel, struct FString Desc, struct FString User, struct FString Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendInvite");
    struct
    {
        struct FString ImgPath;
        int32_t Type;
        struct FString extraJson;
        struct FString Link;
        struct FString Channel;
        struct FString Desc;
        struct FString User;
        struct FString Title;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    Parms.Type = (int32_t)Type;
    Parms.extraJson = (struct FString)extraJson;
    Parms.Link = (struct FString)Link;
    Parms.Channel = (struct FString)Channel;
    Parms.Desc = (struct FString)Desc;
    Parms.User = (struct FString)User;
    Parms.Title = (struct FString)Title;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendImgWeChat(struct FString ImgPath, struct FString User, struct FString ThumbPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendImgWeChat");
    struct
    {
        struct FString ImgPath;
        struct FString User;
        struct FString ThumbPath;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    Parms.User = (struct FString)User;
    Parms.ThumbPath = (struct FString)ThumbPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SendImgQQ(struct FString ImgPath, struct FString User, struct FString ThumbPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SendImgQQ");
    struct
    {
        struct FString ImgPath;
        struct FString User;
        struct FString ThumbPath;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    Parms.User = (struct FString)User;
    Parms.ThumbPath = (struct FString)ThumbPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::ScreenShotEvent(bool IsWindow, bool SavePhoto, struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "ScreenShotEvent");
    struct
    {
        bool IsWindow;
        bool SavePhoto;
        struct FString Name;
    } Parms{};
    Parms.IsWindow = (bool)IsWindow;
    Parms.SavePhoto = (bool)SavePhoto;
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::SaveResultImg(int32_t X, int32_t Y, int32_t Width, int32_t Height, int32_t Window)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "SaveResultImg");
    struct
    {
        int32_t X;
        int32_t Y;
        int32_t Width;
        int32_t Height;
        int32_t Window;
    } Parms{};
    Parms.X = (int32_t)X;
    Parms.Y = (int32_t)Y;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    Parms.Window = (int32_t)Window;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::RobotOpen(bool IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "RobotOpen");
    struct
    {
        bool IsOpen;
    } Parms{};
    Parms.IsOpen = (bool)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::RequestStorageWritePermissions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "RequestStorageWritePermissions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::RequestStorageReadPermissions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "RequestStorageReadPermissions");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::PullUpMiniApp(struct FString MediaPath, struct FString ExtralJson, struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "PullUpMiniApp");
    struct
    {
        struct FString MediaPath;
        struct FString ExtralJson;
        struct FString Channel;
    } Parms{};
    Parms.MediaPath = (struct FString)MediaPath;
    Parms.ExtralJson = (struct FString)ExtralJson;
    Parms.Channel = (struct FString)Channel;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::PostCosUploadImage(struct FString InRetVal, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "PostCosUploadImage");
    struct
    {
        struct FString InRetVal;
        struct FString Path;
    } Parms{};
    Parms.InRetVal = (struct FString)InRetVal;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::PostCosDownload(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "PostCosDownload");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnShare()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnShare");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnScreenShotPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnScreenShotPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnScreenShotPandora(struct FString ImgPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnScreenShotPandora");
    struct
    {
        struct FString ImgPath;
    } Parms{};
    Parms.ImgPath = (struct FString)ImgPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnLoadUrlFinish(struct FString miniPath, struct FString bgPath, int32_t bErWeiMa, float Scale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnLoadUrlFinish");
    struct
    {
        struct FString miniPath;
        struct FString bgPath;
        int32_t bErWeiMa;
        float Scale;
    } Parms{};
    Parms.miniPath = (struct FString)miniPath;
    Parms.bgPath = (struct FString)bgPath;
    Parms.bErWeiMa = (int32_t)bErWeiMa;
    Parms.Scale = (float)Scale;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnIOSPhotoPermissionsRequestReturn(bool Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnIOSPhotoPermissionsRequestReturn");
    struct
    {
        bool Status;
    } Parms{};
    Parms.Status = (bool)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnIOSPhotoPermissionsCallback(bool Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnIOSPhotoPermissionsCallback");
    struct
    {
        bool Status;
    } Parms{};
    Parms.Status = (bool)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnImageFinish(struct UObject* Image1)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnImageFinish");
    struct
    {
        struct UObject* Image1;
    } Parms{};
    Parms.Image1 = (struct UObject*)Image1;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnHarmonyPhotoPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<int32_t>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnHarmonyPhotoPermissionRequestReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<int32_t> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<int32_t>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnAndroidRequestStorageWritePermissionsReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnAndroidRequestStorageWritePermissionsReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<bool> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<bool>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::OnAndroidRequestStorageReadPermissionsReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "OnAndroidRequestStorageReadPermissionsReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<bool> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<bool>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudFriendService::MFCheckAndroidVersion(int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "MFCheckAndroidVersion");
    struct
    {
        int32_t Level;
        bool ReturnValue;
    } Parms{};
    Parms.Level = (int32_t)Level;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudFriendService::LoadLogoFinish(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "LoadLogoFinish");
    struct
    {
        struct FString Path;
        bool ReturnValue;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudFriendService::LoadImageFromScreenShot(struct UImage* img, int32_t Type, bool specifyRect, int32_t minX, int32_t minY, int32_t maxX, int32_t maxY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "LoadImageFromScreenShot");
    struct
    {
        struct UImage* img;
        int32_t Type;
        bool specifyRect;
        int32_t minX;
        int32_t minY;
        int32_t maxX;
        int32_t maxY;
    } Parms{};
    Parms.img = (struct UImage*)img;
    Parms.Type = (int32_t)Type;
    Parms.specifyRect = (bool)specifyRect;
    Parms.minX = (int32_t)minX;
    Parms.minY = (int32_t)minY;
    Parms.maxX = (int32_t)maxX;
    Parms.maxY = (int32_t)maxY;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFGCloudFriendService::GetScreenShotImgPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "GetScreenShotImgPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudFriendService::GenerateLogoImg()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "GenerateLogoImg");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudFriendService::DownloadFile(struct FString FilePath, struct FString InCosPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "DownloadFile");
    struct
    {
        struct FString FilePath;
        struct FString InCosPath;
        bool ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    Parms.InCosPath = (struct FString)InCosPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudFriendService::DestroyDynamicImage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "DestroyDynamicImage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFGCloudFriendService::CheckStorageWritePermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "CheckStorageWritePermission");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudFriendService::CheckStorageReadPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "CheckStorageReadPermission");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudFriendService::CancelAllDownloads()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "CancelAllDownloads");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudFriendService::BindResult(int32_t RetCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "BindResult");
    struct
    {
        int32_t RetCode;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudFriendService::Bind(int32_t channelType, struct FString subChannel, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudFriendService", "Bind");
    struct
    {
        int32_t channelType;
        struct FString subChannel;
        struct FString extraJson;
        bool ReturnValue;
    } Parms{};
    Parms.channelType = (int32_t)channelType;
    Parms.subChannel = (struct FString)subChannel;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudGroupService
void UMFGCloudGroupService::UnbindGroup(struct FString Channel, struct FString unionID, struct FString unionName, struct FString zoneid, struct FString roleID, struct FString AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "UnbindGroup");
    struct
    {
        struct FString Channel;
        struct FString unionID;
        struct FString unionName;
        struct FString zoneid;
        struct FString roleID;
        struct FString AreaID;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.unionID = (struct FString)unionID;
    Parms.unionName = (struct FString)unionName;
    Parms.zoneid = (struct FString)zoneid;
    Parms.roleID = (struct FString)roleID;
    Parms.AreaID = (struct FString)AreaID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::SendGroupMessage(struct FString Channel, struct FString unionID, struct FString Link, struct FString extraJson, struct FString AreaID, struct FString Title, struct FString Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "SendGroupMessage");
    struct
    {
        struct FString Channel;
        struct FString unionID;
        struct FString Link;
        struct FString extraJson;
        struct FString AreaID;
        struct FString Title;
        struct FString Desc;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.unionID = (struct FString)unionID;
    Parms.Link = (struct FString)Link;
    Parms.extraJson = (struct FString)extraJson;
    Parms.AreaID = (struct FString)AreaID;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::RemindToBindGroup(struct FString unionID, struct FString zoneid, struct FString roleID, struct FString RoleName, struct FString leaderOpenID, struct FString leaderRoleID, struct FString AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "RemindToBindGroup");
    struct
    {
        struct FString unionID;
        struct FString zoneid;
        struct FString roleID;
        struct FString RoleName;
        struct FString leaderOpenID;
        struct FString leaderRoleID;
        struct FString AreaID;
    } Parms{};
    Parms.unionID = (struct FString)unionID;
    Parms.zoneid = (struct FString)zoneid;
    Parms.roleID = (struct FString)roleID;
    Parms.RoleName = (struct FString)RoleName;
    Parms.leaderOpenID = (struct FString)leaderOpenID;
    Parms.leaderRoleID = (struct FString)leaderRoleID;
    Parms.AreaID = (struct FString)AreaID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::OnUnBindGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "OnUnBindGroup");
    struct
    {
        int32_t Status;
        int32_t ThirdCode;
        struct FString ThirdMsg;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::OnRemindToBindGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "OnRemindToBindGroup");
    struct
    {
        int32_t Status;
        int32_t ThirdCode;
        struct FString ThirdMsg;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::OnJoinGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "OnJoinGroup");
    struct
    {
        int32_t Status;
        int32_t ThirdCode;
        struct FString ThirdMsg;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::OnGetGroupState(int32_t Status, struct FString GroupID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "OnGetGroupState");
    struct
    {
        int32_t Status;
        struct FString GroupID;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.GroupID = (struct FString)GroupID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::OnGetGroupRelation(int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "OnGetGroupRelation");
    struct
    {
        int32_t Status;
    } Parms{};
    Parms.Status = (int32_t)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::OnCreateGroup(int32_t Status, int32_t ThirdCode, struct FString ThirdMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "OnCreateGroup");
    struct
    {
        int32_t Status;
        int32_t ThirdCode;
        struct FString ThirdMsg;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::JoinGroup(struct FString Channel, struct FString unionID, struct FString zoneid, struct FString roleID, struct FString GroupID, struct FString AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "JoinGroup");
    struct
    {
        struct FString Channel;
        struct FString unionID;
        struct FString zoneid;
        struct FString roleID;
        struct FString GroupID;
        struct FString AreaID;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.unionID = (struct FString)unionID;
    Parms.zoneid = (struct FString)zoneid;
    Parms.roleID = (struct FString)roleID;
    Parms.GroupID = (struct FString)GroupID;
    Parms.AreaID = (struct FString)AreaID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::GetGroupState(struct FString Channel, struct FString unionID, struct FString zoneid, struct FString AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "GetGroupState");
    struct
    {
        struct FString Channel;
        struct FString unionID;
        struct FString zoneid;
        struct FString AreaID;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.unionID = (struct FString)unionID;
    Parms.zoneid = (struct FString)zoneid;
    Parms.AreaID = (struct FString)AreaID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::GetGroupRelation(struct FString Channel, struct FString groupIDOrUnionID, struct FString AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "GetGroupRelation");
    struct
    {
        struct FString Channel;
        struct FString groupIDOrUnionID;
        struct FString AreaID;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.groupIDOrUnionID = (struct FString)groupIDOrUnionID;
    Parms.AreaID = (struct FString)AreaID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudGroupService::CreateGroup(struct FString Channel, struct FString unionID, struct FString unionName, struct FString RoleName, struct FString zoneid, struct FString roleID, struct FString AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudGroupService", "CreateGroup");
    struct
    {
        struct FString Channel;
        struct FString unionID;
        struct FString unionName;
        struct FString RoleName;
        struct FString zoneid;
        struct FString roleID;
        struct FString AreaID;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.unionID = (struct FString)unionID;
    Parms.unionName = (struct FString)unionName;
    Parms.RoleName = (struct FString)RoleName;
    Parms.zoneid = (struct FString)zoneid;
    Parms.roleID = (struct FString)roleID;
    Parms.AreaID = (struct FString)AreaID;
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudLoginService
bool UMFGCloudLoginService::UnBind(int32_t channelType, struct FString subChannel, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "UnBind");
    struct
    {
        int32_t channelType;
        struct FString subChannel;
        struct FString extraJson;
        bool ReturnValue;
    } Parms{};
    Parms.channelType = (int32_t)channelType;
    Parms.subChannel = (struct FString)subChannel;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::ThirdChannelAutoBindLIP(struct FString Channel, int32_t opsType, struct FString friendName, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "ThirdChannelAutoBindLIP");
    struct
    {
        struct FString Channel;
        int32_t opsType;
        struct FString friendName;
        struct FString extraJson;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.opsType = (int32_t)opsType;
    Parms.friendName = (struct FString)friendName;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudLoginService::SwitchUser(bool bSwitch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "SwitchUser");
    struct
    {
        bool bSwitch;
    } Parms{};
    Parms.bSwitch = (bool)bSwitch;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudLoginService::SetLoginServiceSubClass(struct UMFGCloudLoginService* InSubClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudLoginService", "SetLoginServiceSubClass");
    struct
    {
        struct UMFGCloudLoginService* InSubClass;
        bool ReturnValue;
    } Parms{};
    Parms.InSubClass = (struct UMFGCloudLoginService*)InSubClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::QueryBindInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "QueryBindInfo");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudLoginService::OnWakeUpProc(int32_t RetCode, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnWakeUpProc");
    struct
    {
        int32_t RetCode;
        struct FString extraJson;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnQueryBindInfo(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString BindList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnQueryBindInfo");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString RetMsg;
        struct FString BindList;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.RetMsg = (struct FString)RetMsg;
    Parms.BindList = (struct FString)BindList;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnLIEventCallback(int32_t Event, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnLIEventCallback");
    struct
    {
        int32_t Event;
        struct FString extraJson;
    } Parms{};
    Parms.Event = (int32_t)Event;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnINTLAccountResult(int32_t RetCode, int32_t ThirdCode, int32_t methodId, struct FString userName, struct FString uid, int32_t isRegister, int32_t isReceiveEmail, int32_t isSetPassword)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnINTLAccountResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        int32_t methodId;
        struct FString userName;
        struct FString uid;
        int32_t isRegister;
        int32_t isReceiveEmail;
        int32_t isSetPassword;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.methodId = (int32_t)methodId;
    Parms.userName = (struct FString)userName;
    Parms.uid = (struct FString)uid;
    Parms.isRegister = (int32_t)isRegister;
    Parms.isReceiveEmail = (int32_t)isReceiveEmail;
    Parms.isSetPassword = (int32_t)isSetPassword;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnDiscordSetRichPresence(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString ThirdMsg, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnDiscordSetRichPresence");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString RetMsg;
        struct FString ThirdMsg;
        struct FString extraJson;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.RetMsg = (struct FString)RetMsg;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnDiscordSendMessage(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString ThirdMsg, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnDiscordSendMessage");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString RetMsg;
        struct FString ThirdMsg;
        struct FString extraJson;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.RetMsg = (struct FString)RetMsg;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnDiscordMessageUpdatedResult(int32_t RetCode, int32_t ThirdCode, int32_t Type, struct FString gid, struct FString uid, struct FString receiverGid, struct FString receiverUid, struct FString Content, struct FString messageId, int32_t editedTimestamp, int32_t sentTimestamp, bool isSentFromGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnDiscordMessageUpdatedResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        int32_t Type;
        struct FString gid;
        struct FString uid;
        struct FString receiverGid;
        struct FString receiverUid;
        struct FString Content;
        struct FString messageId;
        int32_t editedTimestamp;
        int32_t sentTimestamp;
        bool isSentFromGame;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.Type = (int32_t)Type;
    Parms.gid = (struct FString)gid;
    Parms.uid = (struct FString)uid;
    Parms.receiverGid = (struct FString)receiverGid;
    Parms.receiverUid = (struct FString)receiverUid;
    Parms.Content = (struct FString)Content;
    Parms.messageId = (struct FString)messageId;
    Parms.editedTimestamp = (int32_t)editedTimestamp;
    Parms.sentTimestamp = (int32_t)sentTimestamp;
    Parms.isSentFromGame = (bool)isSentFromGame;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnDiscordGetFriendResult(int32_t RetCode, int32_t ThirdCode, struct FString extraJson, struct FString gid, struct FString uid, struct FString avatarUrl, struct FString userName, struct FString DisplayName, int32_t Status, int32_t relationshipType, int32_t isInGame, int32_t Index, int32_t Num)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnDiscordGetFriendResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString extraJson;
        struct FString gid;
        struct FString uid;
        struct FString avatarUrl;
        struct FString userName;
        struct FString DisplayName;
        int32_t Status;
        int32_t relationshipType;
        int32_t isInGame;
        int32_t Index;
        int32_t Num;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.extraJson = (struct FString)extraJson;
    Parms.gid = (struct FString)gid;
    Parms.uid = (struct FString)uid;
    Parms.avatarUrl = (struct FString)avatarUrl;
    Parms.userName = (struct FString)userName;
    Parms.DisplayName = (struct FString)DisplayName;
    Parms.Status = (int32_t)Status;
    Parms.relationshipType = (int32_t)relationshipType;
    Parms.isInGame = (int32_t)isInGame;
    Parms.Index = (int32_t)Index;
    Parms.Num = (int32_t)Num;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnDiscordGetConnectedUserResult(int32_t RetCode, int32_t ThirdCode, struct FString gid, struct FString uid, struct FString avatarUrl, struct FString userName, struct FString DisplayName, int32_t Status, int32_t relationshipType, int32_t isInGame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnDiscordGetConnectedUserResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString gid;
        struct FString uid;
        struct FString avatarUrl;
        struct FString userName;
        struct FString DisplayName;
        int32_t Status;
        int32_t relationshipType;
        int32_t isInGame;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.gid = (struct FString)gid;
    Parms.uid = (struct FString)uid;
    Parms.avatarUrl = (struct FString)avatarUrl;
    Parms.userName = (struct FString)userName;
    Parms.DisplayName = (struct FString)DisplayName;
    Parms.Status = (int32_t)Status;
    Parms.relationshipType = (int32_t)relationshipType;
    Parms.isInGame = (int32_t)isInGame;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnDiscordAuthorize(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString ThirdMsg, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnDiscordAuthorize");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString RetMsg;
        struct FString ThirdMsg;
        struct FString extraJson;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.RetMsg = (struct FString)RetMsg;
    Parms.ThirdMsg = (struct FString)ThirdMsg;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnBindResult(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnBindResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString RetMsg;
        struct FString extraJson;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.RetMsg = (struct FString)RetMsg;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnAuthResult(int32_t RetCode, int32_t ThirdCode, struct FString RetMsg, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnAuthResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
        struct FString RetMsg;
        struct FString extraJson;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.RetMsg = (struct FString)RetMsg;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::OnAccountLoginProc(int32_t Result, int32_t ThirdCode, struct FString reason, int32_t channelType, struct FString strOpenID, struct FString strUserID, struct FString strTokenAccess, struct FString strTokenRefresh, struct FString strTokenPay, struct FString strPF, struct FString strPFKey, struct FString strSTKey, struct FString regChannel, int32_t FirstLogin, struct FString ChannelInfo, struct FString extraJson, struct FString strPicUrl, int32_t DeleteAccountStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "OnAccountLoginProc");
    struct
    {
        int32_t Result;
        int32_t ThirdCode;
        struct FString reason;
        int32_t channelType;
        struct FString strOpenID;
        struct FString strUserID;
        struct FString strTokenAccess;
        struct FString strTokenRefresh;
        struct FString strTokenPay;
        struct FString strPF;
        struct FString strPFKey;
        struct FString strSTKey;
        struct FString regChannel;
        int32_t FirstLogin;
        struct FString ChannelInfo;
        struct FString extraJson;
        struct FString strPicUrl;
        int32_t DeleteAccountStatus;
    } Parms{};
    Parms.Result = (int32_t)Result;
    Parms.ThirdCode = (int32_t)ThirdCode;
    Parms.reason = (struct FString)reason;
    Parms.channelType = (int32_t)channelType;
    Parms.strOpenID = (struct FString)strOpenID;
    Parms.strUserID = (struct FString)strUserID;
    Parms.strTokenAccess = (struct FString)strTokenAccess;
    Parms.strTokenRefresh = (struct FString)strTokenRefresh;
    Parms.strTokenPay = (struct FString)strTokenPay;
    Parms.strPF = (struct FString)strPF;
    Parms.strPFKey = (struct FString)strPFKey;
    Parms.strSTKey = (struct FString)strSTKey;
    Parms.regChannel = (struct FString)regChannel;
    Parms.FirstLogin = (int32_t)FirstLogin;
    Parms.ChannelInfo = (struct FString)ChannelInfo;
    Parms.extraJson = (struct FString)extraJson;
    Parms.strPicUrl = (struct FString)strPicUrl;
    Parms.DeleteAccountStatus = (int32_t)DeleteAccountStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::Logout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "Logout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudLoginService::Login(int32_t channelType, struct FString fakeOpenID, struct FString subChannel, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "Login");
    struct
    {
        int32_t channelType;
        struct FString fakeOpenID;
        struct FString subChannel;
        struct FString extraJson;
        bool ReturnValue;
    } Parms{};
    Parms.channelType = (int32_t)channelType;
    Parms.fakeOpenID = (struct FString)fakeOpenID;
    Parms.subChannel = (struct FString)subChannel;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudLoginService::LIAuthResult(int32_t RetCode, int32_t ThirdCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "LIAuthResult");
    struct
    {
        int32_t RetCode;
        int32_t ThirdCode;
    } Parms{};
    Parms.RetCode = (int32_t)RetCode;
    Parms.ThirdCode = (int32_t)ThirdCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::HttpPostRequest(struct FString URL, struct FString StrContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "HttpPostRequest");
    struct
    {
        struct FString URL;
        struct FString StrContent;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.StrContent = (struct FString)StrContent;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::HttpPostDelegate__DelegateSignature(struct FString RspContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "HttpPostDelegate__DelegateSignature");
    struct
    {
        struct FString RspContent;
    } Parms{};
    Parms.RspContent = (struct FString)RspContent;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudLoginService::GetLoginRet()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "GetLoginRet");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFGCloudLoginService::GetCachedToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "GetCachedToken");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudLoginService::GetCachedSigKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "GetCachedSigKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudLoginService::GetCachedOpenID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "GetCachedOpenID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudLoginService::GetCachedLoginChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "GetCachedLoginChannel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudLoginService::GetCachedHeadURL()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "GetCachedHeadURL");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::DiscordSetRichPresence(struct FString gameName, struct FString State, struct FString details, struct FString largeText, struct FString largeImage, struct FString SmallText, struct FString smallImage, int32_t startTime, int32_t endTime, int32_t partyMaxSize, int32_t supportedPlatforms, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "DiscordSetRichPresence");
    struct
    {
        struct FString gameName;
        struct FString State;
        struct FString details;
        struct FString largeText;
        struct FString largeImage;
        struct FString SmallText;
        struct FString smallImage;
        int32_t startTime;
        int32_t endTime;
        int32_t partyMaxSize;
        int32_t supportedPlatforms;
        struct FString extraJson;
        bool ReturnValue;
    } Parms{};
    Parms.gameName = (struct FString)gameName;
    Parms.State = (struct FString)State;
    Parms.details = (struct FString)details;
    Parms.largeText = (struct FString)largeText;
    Parms.largeImage = (struct FString)largeImage;
    Parms.SmallText = (struct FString)SmallText;
    Parms.smallImage = (struct FString)smallImage;
    Parms.startTime = (int32_t)startTime;
    Parms.endTime = (int32_t)endTime;
    Parms.partyMaxSize = (int32_t)partyMaxSize;
    Parms.supportedPlatforms = (int32_t)supportedPlatforms;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::DiscordSendMessage(struct FString recipientId, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "DiscordSendMessage");
    struct
    {
        struct FString recipientId;
        struct FString Content;
        bool ReturnValue;
    } Parms{};
    Parms.recipientId = (struct FString)recipientId;
    Parms.Content = (struct FString)Content;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::DiscordQueryFriends(int32_t page, int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "DiscordQueryFriends");
    struct
    {
        int32_t page;
        int32_t Count;
        bool ReturnValue;
    } Parms{};
    Parms.page = (int32_t)page;
    Parms.Count = (int32_t)Count;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::DiscordOverseaSDKRegist()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "DiscordOverseaSDKRegist");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::DiscordGetConnectedUser()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "DiscordGetConnectedUser");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::DiscordAuthorize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "DiscordAuthorize");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudLoginService::Bind(int32_t channelType, struct FString subChannel, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "Bind");
    struct
    {
        int32_t channelType;
        struct FString subChannel;
        struct FString extraJson;
        bool ReturnValue;
    } Parms{};
    Parms.channelType = (int32_t)channelType;
    Parms.subChannel = (struct FString)subChannel;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudLoginService::AutoLogin(struct FString fakeOpenID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudLoginService", "AutoLogin");
    struct
    {
        struct FString fakeOpenID;
    } Parms{};
    Parms.fakeOpenID = (struct FString)fakeOpenID;
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudMessageHandler
void UMFGCloudMessageHandler::UnInitialize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "UnInitialize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::Tick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "Tick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::SetSendPkgHeaderZoneID(struct FString ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "SetSendPkgHeaderZoneID");
    struct
    {
        struct FString ID;
    } Parms{};
    Parms.ID = (struct FString)ID;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::SetDevUrl(struct FString ip, struct FString Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "SetDevUrl");
    struct
    {
        struct FString ip;
        struct FString Port;
    } Parms{};
    Parms.ip = (struct FString)ip;
    Parms.Port = (struct FString)Port;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::SetClientType(int32_t ClientType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "SetClientType");
    struct
    {
        int32_t ClientType;
    } Parms{};
    Parms.ClientType = (int32_t)ClientType;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::RequestLogin(struct FString inPlayerName, bool isReconnected, float overTimeSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "RequestLogin");
    struct
    {
        struct FString inPlayerName;
        bool isReconnected;
        float overTimeSeconds;
    } Parms{};
    Parms.inPlayerName = (struct FString)inPlayerName;
    Parms.isReconnected = (bool)isReconnected;
    Parms.overTimeSeconds = (float)overTimeSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::RelayConnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "RelayConnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnWaitingReliableNumChanged(int32_t NewWaitingReliableNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnWaitingReliableNumChanged");
    struct
    {
        int32_t NewWaitingReliableNum;
    } Parms{};
    Parms.NewWaitingReliableNum = (int32_t)NewWaitingReliableNum;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnStateChangedProc(int32_t connectorState, int32_t ErrorCode, int32_t extend1, int32_t extend2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnStateChangedProc");
    struct
    {
        int32_t connectorState;
        int32_t ErrorCode;
        int32_t extend1;
        int32_t extend2;
    } Parms{};
    Parms.connectorState = (int32_t)connectorState;
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.extend1 = (int32_t)extend1;
    Parms.extend2 = (int32_t)extend2;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnRelayConnectedProc(int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnRelayConnectedProc");
    struct
    {
        int32_t ErrorCode;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnOverTime(int32_t MsgID, int32_t SerialId, int32_t overtimes, bool isShowError)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnOverTime");
    struct
    {
        int32_t MsgID;
        int32_t SerialId;
        int32_t overtimes;
        bool isShowError;
    } Parms{};
    Parms.MsgID = (int32_t)MsgID;
    Parms.SerialId = (int32_t)SerialId;
    Parms.overtimes = (int32_t)overtimes;
    Parms.isShowError = (bool)isShowError;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnDisconnectProc(int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnDisconnectProc");
    struct
    {
        int32_t ErrorCode;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnDataRecvedProc(int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnDataRecvedProc");
    struct
    {
        int32_t ErrorCode;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnConnectorInvalid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnConnectorInvalid");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnConnected(int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnConnected");
    struct
    {
        int32_t ErrorCode;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageHandler::OnAcquiredWeGameToken(struct FString PlayerId, struct FString PlayerName, struct FString Token)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "OnAcquiredWeGameToken");
    struct
    {
        struct FString PlayerId;
        struct FString PlayerName;
        struct FString Token;
    } Parms{};
    Parms.PlayerId = (struct FString)PlayerId;
    Parms.PlayerName = (struct FString)PlayerName;
    Parms.Token = (struct FString)Token;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudMessageHandler::IsConnectedTest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "IsConnectedTest");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudMessageHandler::IsConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "IsConnected");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudMessageHandler::HasAcquiredWeGameToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "HasAcquiredWeGameToken");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudService* UMFGCloudMessageHandler::GetService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "GetService");
    struct
    {
        struct UMFGCloudService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudMessageHandler::GetServerID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "GetServerID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudMessageHandler::GetIP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "GetIP");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudMessageHandler::GetConnectInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "GetConnectInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudMessageHandler::Disconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "Disconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudMessageHandler::DevConnect(int32_t Channel, struct FString uin, struct FString pwd, const struct TArray<struct FString>& urlList, bool Clear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "DevConnect");
    struct
    {
        int32_t Channel;
        struct FString uin;
        struct FString pwd;
        struct TArray<struct FString> urlList;
        bool Clear;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (int32_t)Channel;
    Parms.uin = (struct FString)uin;
    Parms.pwd = (struct FString)pwd;
    Parms.urlList = (struct TArray<struct FString>)urlList;
    Parms.Clear = (bool)Clear;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudMessageHandler::Connect(int32_t Channel, const struct TArray<struct FString>& urlList, bool Clear, struct FString Openid, struct FString openKey, struct FString extInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageHandler", "Connect");
    struct
    {
        int32_t Channel;
        struct TArray<struct FString> urlList;
        bool Clear;
        struct FString Openid;
        struct FString openKey;
        struct FString extInfo;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (int32_t)Channel;
    Parms.urlList = (struct TArray<struct FString>)urlList;
    Parms.Clear = (bool)Clear;
    Parms.Openid = (struct FString)Openid;
    Parms.openKey = (struct FString)openKey;
    Parms.extInfo = (struct FString)extInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudMessageService
bool UMFGCloudMessageService::UnRegisterMessageHandlerByClass(struct UMFGCloudMessageHandler* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "UnRegisterMessageHandlerByClass");
    struct
    {
        struct UMFGCloudMessageHandler* InClass;
        bool ReturnValue;
    } Parms{};
    Parms.InClass = (struct UMFGCloudMessageHandler*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudMessageService::UnRegisterAllMessageHandler()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "UnRegisterAllMessageHandler");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::SetTickType(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "SetTickType");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::SetRecvMessage(bool recvMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "SetRecvMessage");
    struct
    {
        bool recvMsg;
    } Parms{};
    Parms.recvMsg = (bool)recvMsg;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::SetOvertime(int32_t Cmd, bool OverTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "SetOvertime");
    struct
    {
        int32_t Cmd;
        bool OverTime;
    } Parms{};
    Parms.Cmd = (int32_t)Cmd;
    Parms.OverTime = (bool)OverTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::SetKickOffState(bool IsKickOff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "SetKickOffState");
    struct
    {
        bool IsKickOff;
    } Parms{};
    Parms.IsKickOff = (bool)IsKickOff;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::SetClientType(int32_t ClientType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "SetClientType");
    struct
    {
        int32_t ClientType;
    } Parms{};
    Parms.ClientType = (int32_t)ClientType;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::RelayConnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "RelayConnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMFGCloudMessageHandler* UMFGCloudMessageService::RegisterMessageHandlerByClass(struct UMFGCloudMessageHandler* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "RegisterMessageHandlerByClass");
    struct
    {
        struct UMFGCloudMessageHandler* InClass;
        struct UMFGCloudMessageHandler* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UMFGCloudMessageHandler*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudMessageService::ManualReconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "ManualReconnect");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudMessageService::GetServerID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "GetServerID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudMessageHandler* UMFGCloudMessageService::GetMsgHandlerByType(struct UMFGCloudMessageHandler* classType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "GetMsgHandlerByType");
    struct
    {
        struct UMFGCloudMessageHandler* classType;
        struct UMFGCloudMessageHandler* ReturnValue;
    } Parms{};
    Parms.classType = (struct UMFGCloudMessageHandler*)classType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudMessageService::GetIP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "GetIP");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudMessageService::GetConnectInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "GetConnectInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudMessageService::Disconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "Disconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudMessageService::DevConnect(int32_t Channel, struct FString uin, struct FString pwd, const struct TArray<struct FString>& urlList, bool Clear)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "DevConnect");
    struct
    {
        int32_t Channel;
        struct FString uin;
        struct FString pwd;
        struct TArray<struct FString> urlList;
        bool Clear;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (int32_t)Channel;
    Parms.uin = (struct FString)uin;
    Parms.pwd = (struct FString)pwd;
    Parms.urlList = (struct TArray<struct FString>)urlList;
    Parms.Clear = (bool)Clear;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudMessageService::Connect(int32_t Channel, const struct TArray<struct FString>& urlList, bool Clear, struct FString Openid, struct FString openKey, struct FString extInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "Connect");
    struct
    {
        int32_t Channel;
        struct TArray<struct FString> urlList;
        bool Clear;
        struct FString Openid;
        struct FString openKey;
        struct FString extInfo;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (int32_t)Channel;
    Parms.urlList = (struct TArray<struct FString>)urlList;
    Parms.Clear = (bool)Clear;
    Parms.Openid = (struct FString)Openid;
    Parms.openKey = (struct FString)openKey;
    Parms.extInfo = (struct FString)extInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudMessageService::ClipPendingResponseArr(bool IsReconnect)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "ClipPendingResponseArr");
    struct
    {
        bool IsReconnect;
    } Parms{};
    Parms.IsReconnect = (bool)IsReconnect;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudMessageService::ClearAckID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudMessageService", "ClearAckID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudNetWorkStateService
void UMFGCloudNetWorkStateService::OnNetworkStateChanged(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudNetWorkStateService", "OnNetworkStateChanged");
    struct
    {
        int32_t State;
    } Parms{};
    Parms.State = (int32_t)State;
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudNotice
void UMFGCloudNotice::OnNotificationPermissionsGrantedDynamic(bool Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudNotice", "OnNotificationPermissionsGrantedDynamic");
    struct
    {
        bool Status;
    } Parms{};
    Parms.Status = (bool)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudNotice::OnLoadNoticeCompleted__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudNotice", "OnLoadNoticeCompleted__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFGCloudNotice::LoadNotice(struct FString InGroup, struct FString InLanguage, struct FString InRegion, struct FString InPartition, struct FString InExtra)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudNotice", "LoadNotice");
    struct
    {
        struct FString InGroup;
        struct FString InLanguage;
        struct FString InRegion;
        struct FString InPartition;
        struct FString InExtra;
        struct FString ReturnValue;
    } Parms{};
    Parms.InGroup = (struct FString)InGroup;
    Parms.InLanguage = (struct FString)InLanguage;
    Parms.InRegion = (struct FString)InRegion;
    Parms.InPartition = (struct FString)InPartition;
    Parms.InExtra = (struct FString)InExtra;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudPlugin
void UMFGCloudPlugin::SetLogLevel(int32_t GcloudLogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "SetLogLevel");
    struct
    {
        int32_t GcloudLogLevel;
    } Parms{};
    Parms.GcloudLogLevel = (int32_t)GcloudLogLevel;
    this->ProcessEvent(Func, &Parms);
}

struct UMFTPioneerService* UMFGCloudPlugin::GetUMFTPioneerService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetUMFTPioneerService");
    struct
    {
        struct UMFTPioneerService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFEsCapturerService* UMFGCloudPlugin::GetUMFEsCapturerService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetUMFEsCapturerService");
    struct
    {
        struct UMFEsCapturerService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFAICreateSDKService* UMFGCloudPlugin::GetUMFAICreateSDKService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetUMFAICreateSDKService");
    struct
    {
        struct UMFAICreateSDKService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMountPakService* UMFGCloudPlugin::GetMountPakService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetMountPakService");
    struct
    {
        struct UMFMountPakService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFLBSService* UMFGCloudPlugin::GetLBSService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetLBSService");
    struct
    {
        struct UMFLBSService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudXGService* UMFGCloudPlugin::GetGCloudXGService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudXGService");
    struct
    {
        struct UMFGCloudXGService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudToolsService* UMFGCloudPlugin::GetGCloudToolsService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudToolsService");
    struct
    {
        struct UMFGCloudToolsService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudPufferService* UMFGCloudPlugin::GetGCloudPufferService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudPufferService");
    struct
    {
        struct UMFGCloudPufferService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudPlugin* UMFGCloudPlugin::GetGCloudPlugin(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPlugin", "GetGCloudPlugin");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFGCloudPlugin* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudNotice* UMFGCloudPlugin::GetGCloudNoticeService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudNoticeService");
    struct
    {
        struct UMFGCloudNotice* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudMessageService* UMFGCloudPlugin::GetGCloudMessageService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudMessageService");
    struct
    {
        struct UMFGCloudMessageService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudLoginService* UMFGCloudPlugin::GetGCloudLoginService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudLoginService");
    struct
    {
        struct UMFGCloudLoginService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFHttpDNSService* UMFGCloudPlugin::GetGCloudHttpDNSService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudHttpDNSService");
    struct
    {
        struct UMFHttpDNSService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudGroupService* UMFGCloudPlugin::GetGCloudGroupService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudGroupService");
    struct
    {
        struct UMFGCloudGroupService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudFriendService* UMFGCloudPlugin::GetGCloudFriendService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudFriendService");
    struct
    {
        struct UMFGCloudFriendService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudDolphinService* UMFGCloudPlugin::GetGCloudDolphinService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudDolphinService");
    struct
    {
        struct UMFGCloudDolphinService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudCrashService* UMFGCloudPlugin::GetGCloudCrashService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetGCloudCrashService");
    struct
    {
        struct UMFGCloudCrashService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFCustomerService* UMFGCloudPlugin::GetCustomerService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "GetCustomerService");
    struct
    {
        struct UMFCustomerService* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFGCloudService* UMFGCloudPlugin::AddServiceByClass(struct UMFGCloudService* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPlugin", "AddServiceByClass");
    struct
    {
        struct UMFGCloudService* InClass;
        struct UMFGCloudService* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UMFGCloudService*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudPredownload
bool UMFGCloudPredownload::SetImmDLMaxSpeed(int32_t InMaxSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "SetImmDLMaxSpeed");
    struct
    {
        int32_t InMaxSpeed;
        bool ReturnValue;
    } Parms{};
    Parms.InMaxSpeed = (int32_t)InMaxSpeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudPredownload::SaveProgress(int64_t InNowSize, int64_t InTotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "SaveProgress");
    struct
    {
        int64_t InNowSize;
        int64_t InTotalSize;
    } Parms{};
    Parms.InNowSize = (int64_t)InNowSize;
    Parms.InTotalSize = (int64_t)InTotalSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFGCloudPredownload::Resume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "Resume");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPredownload::Remove(int64_t TaskId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "Remove");
    struct
    {
        int64_t TaskId;
        bool ReturnValue;
    } Parms{};
    Parms.TaskId = (int64_t)TaskId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPredownload::Pause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "Pause");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPredownload::IsFileReady(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "IsFileReady");
    struct
    {
        struct FString Filename;
        bool ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPredownload::Initialize(const struct FPufferInitConfigData& InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "Initialize");
    struct
    {
        struct FPufferInitConfigData InParam;
        bool ReturnValue;
    } Parms{};
    Parms.InParam = (struct FPufferInitConfigData)InParam;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPredownload::GetTotalSizeFromCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetTotalSizeFromCache");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPredownload::GetTotalSizeByAppVersionFromCache(struct FString AppVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetTotalSizeByAppVersionFromCache");
    struct
    {
        struct FString AppVersion;
        int64_t ReturnValue;
    } Parms{};
    Parms.AppVersion = (struct FString)AppVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPredownload::GetFileSizeComressed(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetFileSizeComressed");
    struct
    {
        struct FString Filename;
        int64_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudPredownload::GetFileHash(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetFileHash");
    struct
    {
        struct FString Filename;
        struct FString ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFGCloudPredownload::GetDownloadingSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetDownloadingSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPredownload::GetDownloadedSizeFromCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetDownloadedSizeFromCache");
    struct
    {
        int64_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPredownload::GetDownloadedSizeByAppVersionFromCache(struct FString AppVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "GetDownloadedSizeByAppVersionFromCache");
    struct
    {
        struct FString AppVersion;
        int64_t ReturnValue;
    } Parms{};
    Parms.AppVersion = (struct FString)AppVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPredownload::Download(struct FString BatchList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "Download");
    struct
    {
        struct FString BatchList;
        int64_t ReturnValue;
    } Parms{};
    Parms.BatchList = (struct FString)BatchList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudPredownload::AsyncMoveFiles(struct FString InDstDir, struct FString InSrcDir, struct TArray<struct FString> FileList, const struct TArray<struct FString>& InPakHashList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPredownload", "AsyncMoveFiles");
    struct
    {
        struct FString InDstDir;
        struct FString InSrcDir;
        struct TArray<struct FString> FileList;
        struct TArray<struct FString> InPakHashList;
    } Parms{};
    Parms.InDstDir = (struct FString)InDstDir;
    Parms.InSrcDir = (struct FString)InSrcDir;
    Parms.FileList = (struct TArray<struct FString>)FileList;
    Parms.InPakHashList = (struct TArray<struct FString>)InPakHashList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFGCloudPufferService
int32_t UMFGCloudPufferService::UnmountPakList(const struct TArray<struct FString>& InPakList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "UnmountPakList");
    struct
    {
        struct TArray<struct FString> InPakList;
        int32_t ReturnValue;
    } Parms{};
    Parms.InPakList = (struct TArray<struct FString>)InPakList;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::StartRestoreFiles(int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "StartRestoreFiles");
    struct
    {
        int32_t Priority;
        int64_t ReturnValue;
    } Parms{};
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudPufferService::SetUseThreadPoll(int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudPufferService", "SetUseThreadPoll");
    struct
    {
        int32_t InValue;
    } Parms{};
    Parms.InValue = (int32_t)InValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFGCloudPufferService::SetTaskPriority(int64_t TaskId, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "SetTaskPriority");
    struct
    {
        int64_t TaskId;
        int32_t Priority;
        bool ReturnValue;
    } Parms{};
    Parms.TaskId = (int64_t)TaskId;
    Parms.Priority = (int32_t)Priority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::SetImmDLMaxTask(int32_t InTaskNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "SetImmDLMaxTask");
    struct
    {
        int32_t InTaskNum;
        bool ReturnValue;
    } Parms{};
    Parms.InTaskNum = (int32_t)InTaskNum;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::SetImmDLMaxSpeed(int32_t InMaxSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "SetImmDLMaxSpeed");
    struct
    {
        int32_t InMaxSpeed;
        bool ReturnValue;
    } Parms{};
    Parms.InMaxSpeed = (int32_t)InMaxSpeed;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudPufferService::SaveTaskProgress(struct FString InTaskName, int64_t InNowSize, int64_t InTotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "SaveTaskProgress");
    struct
    {
        struct FString InTaskName;
        int64_t InNowSize;
        int64_t InTotalSize;
    } Parms{};
    Parms.InTaskName = (struct FString)InTaskName;
    Parms.InNowSize = (int64_t)InNowSize;
    Parms.InTotalSize = (int64_t)InTotalSize;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudPufferService::ResumeTask(int64_t TaskId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "ResumeTask");
    struct
    {
        int64_t TaskId;
        bool ReturnValue;
    } Parms{};
    Parms.TaskId = (int64_t)TaskId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::ResumeAllTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "ResumeAllTask");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::RestartPuffer(int32_t InRestoreFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "RestartPuffer");
    struct
    {
        int32_t InRestoreFlag;
        bool ReturnValue;
    } Parms{};
    Parms.InRestoreFlag = (int32_t)InRestoreFlag;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::RemoveTask(int64_t InTaskID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "RemoveTask");
    struct
    {
        int64_t InTaskID;
        bool ReturnValue;
    } Parms{};
    Parms.InTaskID = (int64_t)InTaskID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::RemoveAllTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "RemoveAllTask");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudPufferService::ReceiveTick(float InDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "ReceiveTick");
    struct
    {
        float InDeltaTime;
    } Parms{};
    Parms.InDeltaTime = (float)InDeltaTime;
    this->ProcessEvent(Func, &Parms);
}

int64_t UMFGCloudPufferService::ReadCachedTotalSizeByName(struct FString InTaskName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "ReadCachedTotalSizeByName");
    struct
    {
        struct FString InTaskName;
        int64_t ReturnValue;
    } Parms{};
    Parms.InTaskName = (struct FString)InTaskName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::ReadCachedCurrentSizeByName(struct FString InTaskName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "ReadCachedCurrentSizeByName");
    struct
    {
        struct FString InTaskName;
        int64_t ReturnValue;
    } Parms{};
    Parms.InTaskName = (struct FString)InTaskName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::PauseTask(int64_t TaskId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "PauseTask");
    struct
    {
        int64_t TaskId;
        bool ReturnValue;
    } Parms{};
    Parms.TaskId = (int64_t)TaskId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::PauseAllTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "PauseAllTask");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudPufferService::OnRestoreReturn(bool IsSuccess, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnRestoreReturn");
    struct
    {
        bool IsSuccess;
        int32_t ErrorCode;
    } Parms{};
    Parms.IsSuccess = (bool)IsSuccess;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnRestoreProgress(int32_t stage, int64_t NowSize, int64_t TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnRestoreProgress");
    struct
    {
        int32_t stage;
        int64_t NowSize;
        int64_t TotalSize;
    } Parms{};
    Parms.stage = (int32_t)stage;
    Parms.NowSize = (int64_t)NowSize;
    Parms.TotalSize = (int64_t)TotalSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnPufferFileListItem(struct FString InFilename, int32_t InState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnPufferFileListItem");
    struct
    {
        struct FString InFilename;
        int32_t InState;
    } Parms{};
    Parms.InFilename = (struct FString)InFilename;
    Parms.InState = (int32_t)InState;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnPakSigFailed(struct FString InPakName, int32_t InChunkIndex, struct FString InExpectedHash, struct FString InReceivedHash, int64_t DataOffset, int64_t DataSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnPakSigFailed");
    struct
    {
        struct FString InPakName;
        int32_t InChunkIndex;
        struct FString InExpectedHash;
        struct FString InReceivedHash;
        int64_t DataOffset;
        int64_t DataSize;
    } Parms{};
    Parms.InPakName = (struct FString)InPakName;
    Parms.InChunkIndex = (int32_t)InChunkIndex;
    Parms.InExpectedHash = (struct FString)InExpectedHash;
    Parms.InReceivedHash = (struct FString)InReceivedHash;
    Parms.DataOffset = (int64_t)DataOffset;
    Parms.DataSize = (int64_t)DataSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnInitReturn(bool IsSuccess, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnInitReturn");
    struct
    {
        bool IsSuccess;
        int32_t ErrorCode;
    } Parms{};
    Parms.IsSuccess = (bool)IsSuccess;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnInitProgress(int32_t stage, int64_t NowSize, int64_t TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnInitProgress");
    struct
    {
        int32_t stage;
        int64_t NowSize;
        int64_t TotalSize;
    } Parms{};
    Parms.stage = (int32_t)stage;
    Parms.NowSize = (int64_t)NowSize;
    Parms.TotalSize = (int64_t)TotalSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnDownloadReturn(int64_t TaskId, int32_t fileID, bool IsSuccess, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnDownloadReturn");
    struct
    {
        int64_t TaskId;
        int32_t fileID;
        bool IsSuccess;
        int32_t ErrorCode;
    } Parms{};
    Parms.TaskId = (int64_t)TaskId;
    Parms.fileID = (int32_t)fileID;
    Parms.IsSuccess = (bool)IsSuccess;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnDownloadProgress(int64_t TaskId, int64_t NowSize, int64_t TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnDownloadProgress");
    struct
    {
        int64_t TaskId;
        int64_t NowSize;
        int64_t TotalSize;
    } Parms{};
    Parms.TaskId = (int64_t)TaskId;
    Parms.NowSize = (int64_t)NowSize;
    Parms.TotalSize = (int64_t)TotalSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnDownloadIOSBackgroundDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnDownloadIOSBackgroundDone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnDownloadBatchReturn(int64_t batchTaskId, int32_t fileID, bool IsSuccess, int32_t ErrorCode, int32_t batchType, struct FString strRet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnDownloadBatchReturn");
    struct
    {
        int64_t batchTaskId;
        int32_t fileID;
        bool IsSuccess;
        int32_t ErrorCode;
        int32_t batchType;
        struct FString strRet;
    } Parms{};
    Parms.batchTaskId = (int64_t)batchTaskId;
    Parms.fileID = (int32_t)fileID;
    Parms.IsSuccess = (bool)IsSuccess;
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.batchType = (int32_t)batchType;
    Parms.strRet = (struct FString)strRet;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnDownloadBatchProgress(int64_t batchTaskId, int64_t NowSize, int64_t TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnDownloadBatchProgress");
    struct
    {
        int64_t batchTaskId;
        int64_t NowSize;
        int64_t TotalSize;
    } Parms{};
    Parms.batchTaskId = (int64_t)batchTaskId;
    Parms.NowSize = (int64_t)NowSize;
    Parms.TotalSize = (int64_t)TotalSize;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudPufferService::OnAsyncMountPakDone(struct FString InTaskName, const struct TArray<struct FString>& InPakList, const struct TArray<int32_t>& InResultList, struct FString InCustomParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "OnAsyncMountPakDone");
    struct
    {
        struct FString InTaskName;
        struct TArray<struct FString> InPakList;
        struct TArray<int32_t> InResultList;
        struct FString InCustomParam;
    } Parms{};
    Parms.InTaskName = (struct FString)InTaskName;
    Parms.InPakList = (struct TArray<struct FString>)InPakList;
    Parms.InResultList = (struct TArray<int32_t>)InResultList;
    Parms.InCustomParam = (struct FString)InCustomParam;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFGCloudPufferService::MountPakList(const struct TArray<struct FString>& InPakList, struct TArray<int32_t> InMountOrders)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "MountPakList");
    struct
    {
        struct TArray<struct FString> InPakList;
        struct TArray<int32_t> InMountOrders;
        int32_t ReturnValue;
    } Parms{};
    Parms.InPakList = (struct TArray<struct FString>)InPakList;
    Parms.InMountOrders = (struct TArray<int32_t>)InMountOrders;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::IsInitDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "IsInitDone");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::IsFileReadyByName(struct FString InFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "IsFileReadyByName");
    struct
    {
        struct FString InFile;
        bool ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::IsFileReady(int64_t InFileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "IsFileReady");
    struct
    {
        int64_t InFileID;
        bool ReturnValue;
    } Parms{};
    Parms.InFileID = (int64_t)InFileID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::IsBatchDirReady(struct FString Dir, bool blSubDir, int32_t& nTotal, int32_t& nReady, int32_t& nNotReady)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "IsBatchDirReady");
    struct
    {
        struct FString Dir;
        bool blSubDir;
        int32_t nTotal;
        int32_t nReady;
        int32_t nNotReady;
        bool ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.blSubDir = (bool)blSubDir;
    this->ProcessEvent(Func, &Parms);
    nTotal = Parms.nTotal;
    nReady = Parms.nReady;
    nNotReady = Parms.nNotReady;
    return Parms.ReturnValue;
}

bool UMFGCloudPufferService::InitPufferConfig(const struct FPufferInitConfigData& InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "InitPufferConfig");
    struct
    {
        struct FPufferInitConfigData InParam;
        bool ReturnValue;
    } Parms{};
    Parms.InParam = (struct FPufferInitConfigData)InParam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EPufferTaskState UMFGCloudPufferService::GetTaskState(int32_t InTaskID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetTaskState");
    struct
    {
        int32_t InTaskID;
        enum EPufferTaskState ReturnValue;
    } Parms{};
    Parms.InTaskID = (int32_t)InTaskID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPufferTaskInfo UMFGCloudPufferService::GetTaskInfoByTaskName(struct FString InTaskName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetTaskInfoByTaskName");
    struct
    {
        struct FString InTaskName;
        struct FPufferTaskInfo ReturnValue;
    } Parms{};
    Parms.InTaskName = (struct FString)InTaskName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FPufferTaskInfo UMFGCloudPufferService::GetTaskInfoByTaskID(int32_t InTaskID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetTaskInfoByTaskID");
    struct
    {
        int32_t InTaskID;
        struct FPufferTaskInfo ReturnValue;
    } Parms{};
    Parms.InTaskID = (int32_t)InTaskID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudPufferService::GetRestoreTaskName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetRestoreTaskName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::GetRestoreTaskID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetRestoreTaskID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::GetFileSizeCompressed(int64_t fileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetFileSizeCompressed");
    struct
    {
        int64_t fileID;
        int64_t ReturnValue;
    } Parms{};
    Parms.fileID = (int64_t)fileID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudPufferService::GetFileMd5(int32_t fileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetFileMd5");
    struct
    {
        int32_t fileID;
        struct FString ReturnValue;
    } Parms{};
    Parms.fileID = (int32_t)fileID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::GetFileId(struct FString InFile)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetFileId");
    struct
    {
        struct FString InFile;
        int64_t ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FPufferTaskInfo> UMFGCloudPufferService::GetDownloadingTaskInfoList(bool bIncludePaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetDownloadingTaskInfoList");
    struct
    {
        bool bIncludePaused;
        struct TArray<struct FPufferTaskInfo> ReturnValue;
    } Parms{};
    Parms.bIncludePaused = (bool)bIncludePaused;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFGCloudPufferService::GetCurrentSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetCurrentSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::GetCurrentDownloadingTaskNum(bool bIncludePaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetCurrentDownloadingTaskNum");
    struct
    {
        bool bIncludePaused;
        int32_t ReturnValue;
    } Parms{};
    Parms.bIncludePaused = (bool)bIncludePaused;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::GetBatchDirSizeCompressed(struct FString Dir, bool blSubDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetBatchDirSizeCompressed");
    struct
    {
        struct FString Dir;
        bool blSubDir;
        int64_t ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.blSubDir = (bool)blSubDir;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::GetBatchDirFileCount(struct FString Dir, bool blSubDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "GetBatchDirFileCount");
    struct
    {
        struct FString Dir;
        bool blSubDir;
        int32_t ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.blSubDir = (bool)blSubDir;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::DownloadFile(struct FString InFile, bool InForceSync, int32_t InPriority, struct FString InTaskName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "DownloadFile");
    struct
    {
        struct FString InFile;
        bool InForceSync;
        int32_t InPriority;
        struct FString InTaskName;
        int64_t ReturnValue;
    } Parms{};
    Parms.InFile = (struct FString)InFile;
    Parms.InForceSync = (bool)InForceSync;
    Parms.InPriority = (int32_t)InPriority;
    Parms.InTaskName = (struct FString)InTaskName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::DownloadBatchList(struct FString InFileList, bool forceSync, int32_t Priority, struct FString InTaskName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "DownloadBatchList");
    struct
    {
        struct FString InFileList;
        bool forceSync;
        int32_t Priority;
        struct FString InTaskName;
        int64_t ReturnValue;
    } Parms{};
    Parms.InFileList = (struct FString)InFileList;
    Parms.forceSync = (bool)forceSync;
    Parms.Priority = (int32_t)Priority;
    Parms.InTaskName = (struct FString)InTaskName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int64_t UMFGCloudPufferService::DownloadBatchDir(struct FString Dir, bool blSubDir, bool forceSync, int32_t Priority, struct FString InTaskName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "DownloadBatchDir");
    struct
    {
        struct FString Dir;
        bool blSubDir;
        bool forceSync;
        int32_t Priority;
        struct FString InTaskName;
        int64_t ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.blSubDir = (bool)blSubDir;
    Parms.forceSync = (bool)forceSync;
    Parms.Priority = (int32_t)Priority;
    Parms.InTaskName = (struct FString)InTaskName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudPufferService::AsyncMountPakList(struct FString InTaskName, const struct TArray<struct FString>& InPakList, struct TArray<int32_t> InMountOrders, struct FString InCustomParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudPufferService", "AsyncMountPakList");
    struct
    {
        struct FString InTaskName;
        struct TArray<struct FString> InPakList;
        struct TArray<int32_t> InMountOrders;
        struct FString InCustomParam;
        int32_t ReturnValue;
    } Parms{};
    Parms.InTaskName = (struct FString)InTaskName;
    Parms.InPakList = (struct TArray<struct FString>)InPakList;
    Parms.InMountOrders = (struct TArray<int32_t>)InMountOrders;
    Parms.InCustomParam = (struct FString)InCustomParam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudRobotService
bool UMFGCloudRobotService::ShowRobot(struct UObject* InWorldContext, struct FString roleID, struct FString Question, struct FString Scene, struct FString ext, int32_t isLandscape, int32_t newActivity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "ShowRobot");
    struct
    {
        struct UObject* InWorldContext;
        struct FString roleID;
        struct FString Question;
        struct FString Scene;
        struct FString ext;
        int32_t isLandscape;
        int32_t newActivity;
        bool ReturnValue;
    } Parms{};
    Parms.InWorldContext = (struct UObject*)InWorldContext;
    Parms.roleID = (struct FString)roleID;
    Parms.Question = (struct FString)Question;
    Parms.Scene = (struct FString)Scene;
    Parms.ext = (struct FString)ext;
    Parms.isLandscape = (int32_t)isLandscape;
    Parms.newActivity = (int32_t)newActivity;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudRobotService::OnURLCallback(struct FString InParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "OnURLCallback");
    struct
    {
        struct FString InParam;
    } Parms{};
    Parms.InParam = (struct FString)InParam;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudRobotService::OnStopRecord(int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "OnStopRecord");
    struct
    {
        int32_t ErrorCode;
    } Parms{};
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudRobotService::OnStartRecord()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "OnStartRecord");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudRobotService::OnSpeechToText2GRobot(struct FString Text, int32_t ErrorCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "OnSpeechToText2GRobot");
    struct
    {
        struct FString Text;
        int32_t ErrorCode;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.ErrorCode = (int32_t)ErrorCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudRobotService::OnShowCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "OnShowCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudRobotService::OnCloseCallback()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "OnCloseCallback");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UMFGCloudRobotService* UMFGCloudRobotService::GetDefault()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudRobotService", "GetDefault");
    struct
    {
        struct UMFGCloudRobotService* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudRobotService::CloseRobot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudRobotService", "CloseRobot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudSetting
struct FString UMFGCloudSetting::GetWeiXinAppID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudSetting", "GetWeiXinAppID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGCloudSetting::GetTssSDKID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudSetting", "GetTssSDKID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudSetting::GetQQAppID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudSetting", "GetQQAppID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudSetting::GetMSDKSDKKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudSetting", "GetMSDKSDKKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudSetting::GetMSDKGameID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudSetting", "GetMSDKGameID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudSetting::GetGameId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGCloudSetting", "GetGameId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudTGPAService
void UMFGCloudTGPAService::OnNotifySystemInfo(struct FString& Json)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudTGPAService", "OnNotifySystemInfo");
    struct
    {
        struct FString Json;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Json = Parms.Json;
}

// UMFGCloudToolsService
void UMFGCloudToolsService::OpenPrajnaWebView(struct FString jsonStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudToolsService", "OpenPrajnaWebView");
    struct
    {
        struct FString jsonStr;
    } Parms{};
    Parms.jsonStr = (struct FString)jsonStr;
    this->ProcessEvent(Func, &Parms);
}

bool UMFGCloudToolsService::IsAppInstall(struct FString Channel, struct FString Extra)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudToolsService", "IsAppInstall");
    struct
    {
        struct FString Channel;
        struct FString Extra;
        bool ReturnValue;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Extra = (struct FString)Extra;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGCloudToolsService::GetConfigChannelID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudToolsService", "GetConfigChannelID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFGCloudWebViewService
void UMFGCloudWebViewService::OnWebViewPreClose()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudWebViewService", "OnWebViewPreClose");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudWebViewService::OnWebViewBackCall(int32_t methodId, int32_t MsgType, struct FString MsgJsonData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudWebViewService", "OnWebViewBackCall");
    struct
    {
        int32_t methodId;
        int32_t MsgType;
        struct FString MsgJsonData;
    } Parms{};
    Parms.methodId = (int32_t)methodId;
    Parms.MsgType = (int32_t)MsgType;
    Parms.MsgJsonData = (struct FString)MsgJsonData;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudWebViewService::OnCustomerServiceBackCall(int32_t MsgType, struct FString MsgJsonData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudWebViewService", "OnCustomerServiceBackCall");
    struct
    {
        int32_t MsgType;
        struct FString MsgJsonData;
    } Parms{};
    Parms.MsgType = (int32_t)MsgType;
    Parms.MsgJsonData = (struct FString)MsgJsonData;
    this->ProcessEvent(Func, &Parms);
}

// UMFGCloudXGService
void UMFGCloudXGService::UnregisterPush(struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "UnregisterPush");
    struct
    {
        struct FString Channel;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::SetTag(struct FString Channel, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "SetTag");
    struct
    {
        struct FString Channel;
        struct FString Tag;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::SetAccount(struct FString Channel, struct FString account)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "SetAccount");
    struct
    {
        struct FString Channel;
        struct FString account;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.account = (struct FString)account;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::RequestCalendarPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "RequestCalendarPermission");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::RegisterPush(struct FString Channel, struct FString account)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "RegisterPush");
    struct
    {
        struct FString Channel;
        struct FString account;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.account = (struct FString)account;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::OnIOSCalendarPermissionRequestReturn(bool Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "OnIOSCalendarPermissionRequestReturn");
    struct
    {
        bool Status;
    } Parms{};
    Parms.Status = (bool)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::OnAndroidCalendarPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "OnAndroidCalendarPermissionRequestReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<bool> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<bool>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::DeleteTag(struct FString Channel, struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "DeleteTag");
    struct
    {
        struct FString Channel;
        struct FString Tag;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::DeleteEventFromeCalendar(struct FString Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "DeleteEventFromeCalendar");
    struct
    {
        struct FString Title;
    } Parms{};
    Parms.Title = (struct FString)Title;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::DeleteAccount(struct FString Channel, struct FString account)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "DeleteAccount");
    struct
    {
        struct FString Channel;
        struct FString account;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.account = (struct FString)account;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFGCloudXGService::CheckCalendarPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "CheckCalendarPermission");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGCloudXGService::AddLocalNotification(int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Min, struct FString Title, struct FString Content, struct FString content_ios)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "AddLocalNotification");
    struct
    {
        int32_t Year;
        int32_t Month;
        int32_t Day;
        int32_t Hour;
        int32_t Min;
        struct FString Title;
        struct FString Content;
        struct FString content_ios;
    } Parms{};
    Parms.Year = (int32_t)Year;
    Parms.Month = (int32_t)Month;
    Parms.Day = (int32_t)Day;
    Parms.Hour = (int32_t)Hour;
    Parms.Min = (int32_t)Min;
    Parms.Title = (struct FString)Title;
    Parms.Content = (struct FString)Content;
    Parms.content_ios = (struct FString)content_ios;
    this->ProcessEvent(Func, &Parms);
}

void UMFGCloudXGService::AddEvent2Calendar(int32_t InStartTime, struct FString zoneTime, struct FString Title, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFGCloudXGService", "AddEvent2Calendar");
    struct
    {
        int32_t InStartTime;
        struct FString zoneTime;
        struct FString Title;
        struct FString Content;
    } Parms{};
    Parms.InStartTime = (int32_t)InStartTime;
    Parms.zoneTime = (struct FString)zoneTime;
    Parms.Title = (struct FString)Title;
    Parms.Content = (struct FString)Content;
    this->ProcessEvent(Func, &Parms);
}

// UMFGPMAgent
void UMFGPMAgent::WriteSuperResolutionState(int32_t InSuperResolutionState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteSuperResolutionState");
    struct
    {
        int32_t InSuperResolutionState;
    } Parms{};
    Parms.InSuperResolutionState = (int32_t)InSuperResolutionState;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteResolutionType(uint8_t InResolution)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteResolutionType");
    struct
    {
        uint8_t InResolution;
    } Parms{};
    Parms.InResolution = (uint8_t)InResolution;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WritePreferenceIndex(uint8_t InPreferenceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WritePreferenceIndex");
    struct
    {
        uint8_t InPreferenceIndex;
    } Parms{};
    Parms.InPreferenceIndex = (uint8_t)InPreferenceIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WritePerfSubsystemFlag(uint8_t InPerfSubsystemFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WritePerfSubsystemFlag");
    struct
    {
        uint8_t InPerfSubsystemFlag;
    } Parms{};
    Parms.InPerfSubsystemFlag = (uint8_t)InPerfSubsystemFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteMpeFrameInterpolation(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteMpeFrameInterpolation");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteGraphicStyleQualityLevel(uint8_t InGraphicStyleQualityLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteGraphicStyleQualityLevel");
    struct
    {
        uint8_t InGraphicStyleQualityLevel;
    } Parms{};
    Parms.InGraphicStyleQualityLevel = (uint8_t)InGraphicStyleQualityLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteGraphicsQualityLevel(uint8_t GraphicsQualityLevel, uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteGraphicsQualityLevel");
    struct
    {
        uint8_t GraphicsQualityLevel;
        uint8_t pageIndex;
    } Parms{};
    Parms.GraphicsQualityLevel = (uint8_t)GraphicsQualityLevel;
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteFramerateModeSetting(uint8_t InFramerateModeEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteFramerateModeSetting");
    struct
    {
        uint8_t InFramerateModeEnabled;
    } Parms{};
    Parms.InFramerateModeEnabled = (uint8_t)InFramerateModeEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteFrameRateLevel(uint8_t InFrameRateLevel, uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteFrameRateLevel");
    struct
    {
        uint8_t InFrameRateLevel;
        uint8_t pageIndex;
    } Parms{};
    Parms.InFrameRateLevel = (uint8_t)InFrameRateLevel;
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteEnergyModeFlag(uint8_t InEnergyModeFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteEnergyModeFlag");
    struct
    {
        uint8_t InEnergyModeFlag;
    } Parms{};
    Parms.InEnergyModeFlag = (uint8_t)InEnergyModeFlag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteDeviceWorkloadLevel(int32_t InWorkloadLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteDeviceWorkloadLevel");
    struct
    {
        int32_t InWorkloadLevel;
    } Parms{};
    Parms.InWorkloadLevel = (int32_t)InWorkloadLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteDetailMode(int32_t InDetailMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteDetailMode");
    struct
    {
        int32_t InDetailMode;
    } Parms{};
    Parms.InDetailMode = (int32_t)InDetailMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::WriteAntiAliasingState(uint8_t pageIndex, bool bOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "WriteAntiAliasingState");
    struct
    {
        uint8_t pageIndex;
        bool bOpen;
    } Parms{};
    Parms.pageIndex = (uint8_t)pageIndex;
    Parms.bOpen = (bool)bOpen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::UpdateRayQueryRenderState(int32_t InRayQueryEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "UpdateRayQueryRenderState");
    struct
    {
        int32_t InRayQueryEnable;
    } Parms{};
    Parms.InRayQueryEnable = (int32_t)InRayQueryEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::UamSetFrameRateStrategy(EUamDeviceRank InDeviceRank, EUAFrameRateLevel InTargetFrameRateLevel, bool bIsDisableGearTwoMpe)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "UamSetFrameRateStrategy");
    struct
    {
        enum EUamDeviceRank InDeviceRank;
        enum EUAFrameRateLevel InTargetFrameRateLevel;
        bool bIsDisableGearTwoMpe;
    } Parms{};
    Parms.InDeviceRank = (enum EUamDeviceRank)InDeviceRank;
    Parms.InTargetFrameRateLevel = (enum EUAFrameRateLevel)InTargetFrameRateLevel;
    Parms.bIsDisableGearTwoMpe = (bool)bIsDisableGearTwoMpe;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetMpeFrameInterpolation(uint8_t bEnable, uint8_t bIsRenderFrameShortcut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetMpeFrameInterpolation");
    struct
    {
        uint8_t bEnable;
        uint8_t bIsRenderFrameShortcut;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    Parms.bIsRenderFrameShortcut = (uint8_t)bIsRenderFrameShortcut;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetIsInLobby_FromLua(bool bIsInLobby)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetIsInLobby_FromLua");
    struct
    {
        bool bIsInLobby;
    } Parms{};
    Parms.bIsInLobby = (bool)bIsInLobby;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetGraphicStyleQualityLevel(uint8_t GraphicStyleQualityLevel, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetGraphicStyleQualityLevel");
    struct
    {
        uint8_t GraphicStyleQualityLevel;
        struct UWorld* World;
    } Parms{};
    Parms.GraphicStyleQualityLevel = (uint8_t)GraphicStyleQualityLevel;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetGraphicsQualityLevel(uint8_t InQuality, uint8_t InResolution, struct UWorld* World, bool bSkipFlushAsyncLoading, uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetGraphicsQualityLevel");
    struct
    {
        uint8_t InQuality;
        uint8_t InResolution;
        struct UWorld* World;
        bool bSkipFlushAsyncLoading;
        uint8_t pageIndex;
    } Parms{};
    Parms.InQuality = (uint8_t)InQuality;
    Parms.InResolution = (uint8_t)InResolution;
    Parms.World = (struct UWorld*)World;
    Parms.bSkipFlushAsyncLoading = (bool)bSkipFlushAsyncLoading;
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetFramerateModeEnabled(uint8_t bEnabled, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetFramerateModeEnabled");
    struct
    {
        uint8_t bEnabled;
        struct UWorld* World;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetFrameRateLevel(uint8_t InFrameRateLevel, struct UWorld* World, uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetFrameRateLevel");
    struct
    {
        uint8_t InFrameRateLevel;
        struct UWorld* World;
        uint8_t pageIndex;
    } Parms{};
    Parms.InFrameRateLevel = (uint8_t)InFrameRateLevel;
    Parms.World = (struct UWorld*)World;
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetForceBlockFXAA(bool bBlock, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetForceBlockFXAA");
    struct
    {
        bool bBlock;
        struct UWorld* World;
    } Parms{};
    Parms.bBlock = (bool)bBlock;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetCurrentHapticPlayerType(int32_t PlayerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetCurrentHapticPlayerType");
    struct
    {
        int32_t PlayerType;
    } Parms{};
    Parms.PlayerType = (int32_t)PlayerType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetCurrentFrameRateLevel_FromLua(int32_t InCurrentFrameRateLevel, uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetCurrentFrameRateLevel_FromLua");
    struct
    {
        int32_t InCurrentFrameRateLevel;
        uint8_t pageIndex;
    } Parms{};
    Parms.InCurrentFrameRateLevel = (int32_t)InCurrentFrameRateLevel;
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetApmQuality(uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetApmQuality");
    struct
    {
        uint8_t pageIndex;
    } Parms{};
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::SetAntiAliasingState(bool bOpen, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "SetAntiAliasingState");
    struct
    {
        bool bOpen;
        struct UWorld* World;
    } Parms{};
    Parms.bOpen = (bool)bOpen;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::ReportNetworkReconnectTimes(int32_t ReconnectTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReportNetworkReconnectTimes");
    struct
    {
        int32_t ReconnectTimes;
    } Parms{};
    Parms.ReconnectTimes = (int32_t)ReconnectTimes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::ReportMemInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReportMemInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFGPMAgent::ReportGraphics2APM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReportGraphics2APM");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::ReadSuperResolutionState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadSuperResolutionState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadResolutionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadResolutionType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::ReadPreferenceIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadPreferenceIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadPerfSubsystemFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadPerfSubsystemFlag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadMpeFrameInterpolation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadMpeFrameInterpolation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadGraphicStyleQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadGraphicStyleQualityLevel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadGraphicsQualityLevel(uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadGraphicsQualityLevel");
    struct
    {
        uint8_t pageIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadFramerateModeSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadFramerateModeSetting");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadFrameRateLevel(uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadFrameRateLevel");
    struct
    {
        uint8_t pageIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::ReadEnergyModeFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadEnergyModeFlag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::ReadDeviceWorkloadLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadDeviceWorkloadLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::ReadDetailMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadDetailMode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMAgent::ReadAntiAliasingState(uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ReadAntiAliasingState");
    struct
    {
        uint8_t pageIndex;
        bool ReturnValue;
    } Parms{};
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMAgent::InitContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "InitContext");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::HapticStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "HapticStop");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::HapticPlayWithFile(struct FString heJson, int32_t Loop, int32_t Interval, int32_t Amplitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "HapticPlayWithFile");
    struct
    {
        struct FString heJson;
        int32_t Loop;
        int32_t Interval;
        int32_t Amplitude;
    } Parms{};
    Parms.heJson = (struct FString)heJson;
    Parms.Loop = (int32_t)Loop;
    Parms.Interval = (int32_t)Interval;
    Parms.Amplitude = (int32_t)Amplitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::HapticPlay(struct FString heJson, int32_t Loop, int32_t Interval, int32_t Amplitude)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "HapticPlay");
    struct
    {
        struct FString heJson;
        int32_t Loop;
        int32_t Interval;
        int32_t Amplitude;
    } Parms{};
    Parms.heJson = (struct FString)heJson;
    Parms.Loop = (int32_t)Loop;
    Parms.Interval = (int32_t)Interval;
    Parms.Amplitude = (int32_t)Amplitude;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::GPUMorphTargetsBlackListHit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GPUMorphTargetsBlackListHit");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMFGPMAgent::GetResolutionType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetResolutionType");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::GetMpeConfigValue(int32_t InDeviceRank, int32_t InTargetFrameRateLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetMpeConfigValue");
    struct
    {
        int32_t InDeviceRank;
        int32_t InTargetFrameRateLevel;
        int32_t ReturnValue;
    } Parms{};
    Parms.InDeviceRank = (int32_t)InDeviceRank;
    Parms.InTargetFrameRateLevel = (int32_t)InTargetFrameRateLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetMinGraphicsQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetMinGraphicsQualityLevel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetMaxGraphicsQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetMaxGraphicsQualityLevel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMAgent::GetLowestLevelSuperResolutionInLobby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetLowestLevelSuperResolutionInLobby");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetLowestLevelResolutionTypeInLobby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetLowestLevelResolutionTypeInLobby");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMAgent::GetIsInLobby_FromLua()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetIsInLobby_FromLua");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMAgent::GetIs60FPSMpeEnabledOnLevel2Device()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetIs60FPSMpeEnabledOnLevel2Device");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetGraphicStyleQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetGraphicStyleQualityLevel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetGraphicsQualityLevel(int32_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetGraphicsQualityLevel");
    struct
    {
        int32_t pageIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pageIndex = (int32_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetFrameRateLevelFromFrameRate(int32_t InFrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetFrameRateLevelFromFrameRate");
    struct
    {
        int32_t InFrameRate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFrameRate = (int32_t)InFrameRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetFrameRateLevel(uint8_t pageIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetFrameRateLevel");
    struct
    {
        uint8_t pageIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.pageIndex = (uint8_t)pageIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::GetFrameRateFromFrameRateLevel(uint8_t InFrameRateLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetFrameRateFromFrameRateLevel");
    struct
    {
        uint8_t InFrameRateLevel;
        int32_t ReturnValue;
    } Parms{};
    Parms.InFrameRateLevel = (uint8_t)InFrameRateLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMAgent::GetForceBlockFXAA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetForceBlockFXAA");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::GetDeviceLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetDeviceLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetDefaultGraphicsQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetDefaultGraphicsQualityLevel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetDefaultFrameRateLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetDefaultFrameRateLevel");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UMFGPMAgent::GetCurrentMpeFrameInterpolation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetCurrentMpeFrameInterpolation");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::GetCanSkipNetTickConfigValue(int32_t InDeviceRank, int32_t InTargetFrameRateLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetCanSkipNetTickConfigValue");
    struct
    {
        int32_t InDeviceRank;
        int32_t InTargetFrameRateLevel;
        int32_t ReturnValue;
    } Parms{};
    Parms.InDeviceRank = (int32_t)InDeviceRank;
    Parms.InTargetFrameRateLevel = (int32_t)InTargetFrameRateLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMAgent::GetAntiAliasingState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetAntiAliasingState");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGPMAgent::GetAndroidGPUFamily()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GetAndroidGPUFamily");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMAgent::GameSwitchConfig(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "GameSwitchConfig");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::FPS90BlackListHit(int32_t TargetFrameLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "FPS90BlackListHit");
    struct
    {
        int32_t TargetFrameLevel;
    } Parms{};
    Parms.TargetFrameLevel = (int32_t)TargetFrameLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::FPS120BlackListHit(int32_t TargetFrameLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "FPS120BlackListHit");
    struct
    {
        int32_t TargetFrameLevel;
    } Parms{};
    Parms.TargetFrameLevel = (int32_t)TargetFrameLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::ExecResolutionConfigConsoleVars()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ExecResolutionConfigConsoleVars");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::ExecConfigConsoleVars()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ExecConfigConsoleVars");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UMFGPMAgent::DeviceLevelToGraphicsQualityLevel(int32_t DeviceLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "DeviceLevelToGraphicsQualityLevel");
    struct
    {
        int32_t DeviceLevel;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeviceLevel = (int32_t)DeviceLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::CheckHapticPlayerSupport(int32_t HapticPlayerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "CheckHapticPlayerSupport");
    struct
    {
        int32_t HapticPlayerType;
        int32_t ReturnValue;
    } Parms{};
    Parms.HapticPlayerType = (int32_t)HapticPlayerType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMAgent::CheckHapticAmplitudeSupport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "CheckHapticAmplitudeSupport");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMAgent::CallSetFramePaceCommand_FromLua(int32_t TheFramePace_Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "CallSetFramePaceCommand_FromLua");
    struct
    {
        int32_t TheFramePace_Value;
    } Parms{};
    Parms.TheFramePace_Value = (int32_t)TheFramePace_Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::BlackListHitReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "BlackListHitReport");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMAgent::ApplyFramerateModeSetting(uint8_t bEnabled, struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMAgent", "ApplyFramerateModeSetting");
    struct
    {
        uint8_t bEnabled;
        struct UWorld* World;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFGPMHelperFunctionLibrary
void UMFGPMHelperFunctionLibrary::TGPAUpdateGameInfoStringMap(struct FString Key, struct TMap<struct FString, struct FString> mapData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "TGPAUpdateGameInfoStringMap");
    struct
    {
        struct FString Key;
        struct TMap<struct FString, struct FString> mapData;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.mapData = (struct TMap<struct FString, struct FString>)mapData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::TGPAUpdateGameInfoIntString(int32_t Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "TGPAUpdateGameInfoIntString");
    struct
    {
        int32_t Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::TGPAUpdateGameInfo2String(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "TGPAUpdateGameInfo2String");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::TGPAUpdateGameInfo2Int(int32_t Key, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "TGPAUpdateGameInfo2Int");
    struct
    {
        int32_t Key;
        int32_t Value;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::SetVersionIden(struct FString versionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetVersionIden");
    struct
    {
        struct FString versionName;
    } Parms{};
    Parms.versionName = (struct FString)versionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::SetSwitcher(int32_t switcher, int32_t places)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetSwitcher");
    struct
    {
        int32_t switcher;
        int32_t places;
    } Parms{};
    Parms.switcher = (int32_t)switcher;
    Parms.places = (int32_t)places;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::SetServerInfo(struct FString zoneid, struct FString roomIp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetServerInfo");
    struct
    {
        struct FString zoneid;
        struct FString roomIp;
    } Parms{};
    Parms.zoneid = (struct FString)zoneid;
    Parms.roomIp = (struct FString)roomIp;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::SetQuality(int32_t Quality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetQuality");
    struct
    {
        int32_t Quality;
    } Parms{};
    Parms.Quality = (int32_t)Quality;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::SetOpenId(struct FString InOpenID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetOpenId");
    struct
    {
        struct FString InOpenID;
    } Parms{};
    Parms.InOpenID = (struct FString)InOpenID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFGPMHelperFunctionLibrary::SetNextBootFile(int32_t Os, int32_t Step, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetNextBootFile");
    struct
    {
        int32_t Os;
        int32_t Step;
        struct FString Path;
        bool ReturnValue;
    } Parms{};
    Parms.Os = (int32_t)Os;
    Parms.Step = (int32_t)Step;
    Parms.Path = (struct FString)Path;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMHelperFunctionLibrary::SetMatchId(struct FString MatchID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetMatchId");
    struct
    {
        struct FString MatchID;
    } Parms{};
    Parms.MatchID = (struct FString)MatchID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::SetDeviceLevel(int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "SetDeviceLevel");
    struct
    {
        int32_t Level;
    } Parms{};
    Parms.Level = (int32_t)Level;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::ReportPayStep(int32_t Step, bool Result, int32_t ErrorCode, struct FString StepName, struct FString Key, struct FString Value, bool authorize, bool Finish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "ReportPayStep");
    struct
    {
        int32_t Step;
        bool Result;
        int32_t ErrorCode;
        struct FString StepName;
        struct FString Key;
        struct FString Value;
        bool authorize;
        bool Finish;
    } Parms{};
    Parms.Step = (int32_t)Step;
    Parms.Result = (bool)Result;
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.StepName = (struct FString)StepName;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    Parms.authorize = (bool)authorize;
    Parms.Finish = (bool)Finish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::ReportLoginStep(struct TMap<struct FString, struct FString> paramsMap, int32_t Step, int32_t Result, int32_t ErrorCode, struct FString StepName, struct FString StepComment, struct FString Key, struct FString Value, bool authorize, bool Finish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "ReportLoginStep");
    struct
    {
        struct TMap<struct FString, struct FString> paramsMap;
        int32_t Step;
        int32_t Result;
        int32_t ErrorCode;
        struct FString StepName;
        struct FString StepComment;
        struct FString Key;
        struct FString Value;
        bool authorize;
        bool Finish;
    } Parms{};
    Parms.paramsMap = (struct TMap<struct FString, struct FString>)paramsMap;
    Parms.Step = (int32_t)Step;
    Parms.Result = (int32_t)Result;
    Parms.ErrorCode = (int32_t)ErrorCode;
    Parms.StepName = (struct FString)StepName;
    Parms.StepComment = (struct FString)StepComment;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    Parms.authorize = (bool)authorize;
    Parms.Finish = (bool)Finish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::ReportEvent(struct FString EventName, struct FString SpecialChannel, struct TMap<struct FString, struct FString> paramsMap, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "ReportEvent");
    struct
    {
        struct FString EventName;
        struct FString SpecialChannel;
        struct TMap<struct FString, struct FString> paramsMap;
        struct FString extraJson;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.SpecialChannel = (struct FString)SpecialChannel;
    Parms.paramsMap = (struct TMap<struct FString, struct FString>)paramsMap;
    Parms.extraJson = (struct FString)extraJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::ReleaseStepEventContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "ReleaseStepEventContext");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValueS(struct FString Category, struct FString Key, struct FString InVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValueS");
    struct
    {
        struct FString Category;
        struct FString Key;
        struct FString InVal;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.InVal = (struct FString)InVal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValueI(struct FString Category, struct FString Key, int32_t A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValueI");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t A;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (int32_t)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValueF(struct FString Category, struct FString Key, float A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValueF");
    struct
    {
        struct FString Category;
        struct FString Key;
        float A;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (float)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValue3I(struct FString Category, struct FString Key, int32_t A, int32_t B, int32_t C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValue3I");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t A;
        int32_t B;
        int32_t C;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (int32_t)A;
    Parms.B = (int32_t)B;
    Parms.C = (int32_t)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValue3F(struct FString Category, struct FString Key, float A, float B, float C)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValue3F");
    struct
    {
        struct FString Category;
        struct FString Key;
        float A;
        float B;
        float C;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (float)A;
    Parms.B = (float)B;
    Parms.C = (float)C;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValue2I(struct FString Category, struct FString Key, int32_t A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValue2I");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t A;
        int32_t B;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (int32_t)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostValue2F(struct FString Category, struct FString Key, float A, float B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostValue2F");
    struct
    {
        struct FString Category;
        struct FString Key;
        float A;
        float B;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (float)A;
    Parms.B = (float)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostStepEvent(struct FString eventCategory, int32_t stepId, int32_t Status, int32_t Code, struct FString Msg, struct FString extraKey, struct TMap<struct FString, struct FString> paramsMap, bool authorize, bool Finish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostStepEvent");
    struct
    {
        struct FString eventCategory;
        int32_t stepId;
        int32_t Status;
        int32_t Code;
        struct FString Msg;
        struct FString extraKey;
        struct TMap<struct FString, struct FString> paramsMap;
        bool authorize;
        bool Finish;
    } Parms{};
    Parms.eventCategory = (struct FString)eventCategory;
    Parms.stepId = (int32_t)stepId;
    Parms.Status = (int32_t)Status;
    Parms.Code = (int32_t)Code;
    Parms.Msg = (struct FString)Msg;
    Parms.extraKey = (struct FString)extraKey;
    Parms.paramsMap = (struct TMap<struct FString, struct FString>)paramsMap;
    Parms.authorize = (bool)authorize;
    Parms.Finish = (bool)Finish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostNTL(int32_t latency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostNTL");
    struct
    {
        int32_t latency;
    } Parms{};
    Parms.latency = (int32_t)latency;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFGPMHelperFunctionLibrary::PostFrame(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostFrame");
    struct
    {
        float DeltaTime;
        bool ReturnValue;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMHelperFunctionLibrary::PostEventSS(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostEventSS");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::PostEventIS(int32_t Key, struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "PostEventIS");
    struct
    {
        int32_t Key;
        struct FString Info;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.Info = (struct FString)Info;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::MarkStartUpFinish()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "MarkStartUpFinish");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::MarkLevelLoadCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "MarkLevelLoadCompleted");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::MarkLevelLoad(struct FString SceneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "MarkLevelLoad");
    struct
    {
        struct FString SceneName;
    } Parms{};
    Parms.SceneName = (struct FString)SceneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::MarkLevelFin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "MarkLevelFin");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFGPMHelperFunctionLibrary::IsUseGPM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "IsUseGPM");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFGPMHelperFunctionLibrary::IsGLDriverUpdated(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "IsGLDriverUpdated");
    struct
    {
        struct FString Filename;
        bool ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMHelperFunctionLibrary::INTLReportFunnelCustomEventWithCustomField(struct FString l1_event_name, struct FString l2_event_name, int32_t error_code, struct TMap<struct FString, struct FString> paramsMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "INTLReportFunnelCustomEventWithCustomField");
    struct
    {
        struct FString l1_event_name;
        struct FString l2_event_name;
        int32_t error_code;
        struct TMap<struct FString, struct FString> paramsMap;
    } Parms{};
    Parms.l1_event_name = (struct FString)l1_event_name;
    Parms.l2_event_name = (struct FString)l2_event_name;
    Parms.error_code = (int32_t)error_code;
    Parms.paramsMap = (struct TMap<struct FString, struct FString>)paramsMap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::INTLReportFunnelCustomEvent(struct FString l1_event_name, struct FString l2_event_name, int32_t error_code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "INTLReportFunnelCustomEvent");
    struct
    {
        struct FString l1_event_name;
        struct FString l2_event_name;
        int32_t error_code;
    } Parms{};
    Parms.l1_event_name = (struct FString)l1_event_name;
    Parms.l2_event_name = (struct FString)l2_event_name;
    Parms.error_code = (int32_t)error_code;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::INTLReportFunnel(struct FString StepComment, int32_t error_code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "INTLReportFunnel");
    struct
    {
        struct FString StepComment;
        int32_t error_code;
    } Parms{};
    Parms.StepComment = (struct FString)StepComment;
    Parms.error_code = (int32_t)error_code;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::InitStepEventContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "InitStepEventContext");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UMFGPMHelperFunctionLibrary::InitContext(struct FString AppID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "InitContext");
    struct
    {
        struct FString AppID;
        int32_t ReturnValue;
    } Parms{};
    Parms.AppID = (struct FString)AppID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGPMHelperFunctionLibrary::GetSDKVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "GetSDKVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMHelperFunctionLibrary::GetReportType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "GetReportType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMHelperFunctionLibrary::GetDeviceLevel(struct FString ConfigName, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "GetDeviceLevel");
    struct
    {
        struct FString ConfigName;
        struct FString FilePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.ConfigName = (struct FString)ConfigName;
    Parms.FilePath = (struct FString)FilePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFGPMHelperFunctionLibrary::GetDataFromTGPA(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "GetDataFromTGPA");
    struct
    {
        struct FString Key;
        struct FString Value;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFGPMHelperFunctionLibrary::GetAPMQuality()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "GetAPMQuality");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFGPMHelperFunctionLibrary::FlushPerfSightData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "FlushPerfSightData");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::EndTupleWrap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "EndTupleWrap");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::EndTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "EndTag");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::EndExclude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "EndExclude");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::detectInTimeout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "detectInTimeout");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::BeginTupleWrap(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "BeginTupleWrap");
    struct
    {
        struct FString Key;
    } Parms{};
    Parms.Key = (struct FString)Key;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::BeginTag(struct FString TagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "BeginTag");
    struct
    {
        struct FString TagName;
    } Parms{};
    Parms.TagName = (struct FString)TagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::BeginExclude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "BeginExclude");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFGPMHelperFunctionLibrary::AddReportLoginStepParams(struct FString eventCategory, struct TMap<struct FString, struct FString> paramsMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFGPMHelperFunctionLibrary", "AddReportLoginStepParams");
    struct
    {
        struct FString eventCategory;
        struct TMap<struct FString, struct FString> paramsMap;
    } Parms{};
    Parms.eventCategory = (struct FString)eventCategory;
    Parms.paramsMap = (struct TMap<struct FString, struct FString>)paramsMap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFHttpDNSService
void UMFHttpDNSService::QueryIpByHostAsync(struct FString Host)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFHttpDNSService", "QueryIpByHostAsync");
    struct
    {
        struct FString Host;
    } Parms{};
    Parms.Host = (struct FString)Host;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFHttpDNSService::QueryIpByHost(struct FString Host)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFHttpDNSService", "QueryIpByHost");
    struct
    {
        struct FString Host;
        struct FString ReturnValue;
    } Parms{};
    Parms.Host = (struct FString)Host;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFIOSBackgroundDownload
void UMFIOSBackgroundDownload::Stop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSBackgroundDownload", "Stop");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFIOSBackgroundDownload::Start()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSBackgroundDownload", "Start");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFIOSBackgroundDownload::Setup(struct FString AudioPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSBackgroundDownload", "Setup");
    struct
    {
        struct FString AudioPath;
        bool ReturnValue;
    } Parms{};
    Parms.AudioPath = (struct FString)AudioPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFIOSBackgroundDownload::EnableBackgroundAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSBackgroundDownload", "EnableBackgroundAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFIOSBackgroundDownload::DisableBackgroundAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSBackgroundDownload", "DisableBackgroundAudio");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFIOSBackgroundDownload::CanPlayBackgroundAudio()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSBackgroundDownload", "CanPlayBackgroundAudio");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFIOSRuntimeHelper
void UMFIOSRuntimeHelper::RequestUserAgent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "RequestUserAgent");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFIOSRuntimeHelper::RequestASAAttribution()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "RequestASAAttribution");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UMFIOSRuntimeHelper::GetUserAgentError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "GetUserAgentError");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFIOSRuntimeHelper::GetUserAgent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "GetUserAgent");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFIOSRuntimeHelper::GetUniversalLinkActivityID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "GetUniversalLinkActivityID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFIOSRuntimeHelper::GetUniversalLink()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "GetUniversalLink");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFIOSRuntimeHelper::GetASAInfoError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "GetASAInfoError");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFIOSRuntimeHelper::GetASAInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "GetASAInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFIOSRuntimeHelper::ClearUniversalLinkActivityID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "ClearUniversalLinkActivityID");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFIOSRuntimeHelper::ClearUniversalLink()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFIOSRuntimeHelper", "ClearUniversalLink");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFLBSService
void UMFLBSService::RequestIPInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFLBSService", "RequestIPInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFLBSService::QueryLocationPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFLBSService", "QueryLocationPermission");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFLBSService::QueryLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFLBSService", "QueryLocation");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFLBSService::OnOHLocationPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<int32_t>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFLBSService", "OnOHLocationPermissionRequestReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<int32_t> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<int32_t>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

void UMFLBSService::OnIOSLocationPermissionRequestReturn(int32_t AuthorizationStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFLBSService", "OnIOSLocationPermissionRequestReturn");
    struct
    {
        int32_t AuthorizationStatus;
    } Parms{};
    Parms.AuthorizationStatus = (int32_t)AuthorizationStatus;
    this->ProcessEvent(Func, &Parms);
}

void UMFLBSService::OnAndroidLocationPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFLBSService", "OnAndroidLocationPermissionRequestReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<bool> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<bool>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

bool UMFLBSService::CheckLocationServices()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFLBSService", "CheckLocationServices");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFLBSService::CheckLocationPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFLBSService", "CheckLocationPermission");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMidasService
void UMFMidasService::PayUrl(struct FString PayInfo, struct FString PayChannel, struct FString CallBackData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "PayUrl");
    struct
    {
        struct FString PayInfo;
        struct FString PayChannel;
        struct FString CallBackData;
    } Parms{};
    Parms.PayInfo = (struct FString)PayInfo;
    Parms.PayChannel = (struct FString)PayChannel;
    Parms.CallBackData = (struct FString)CallBackData;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::PayMonthCard(struct FString ProductId, int32_t price, int32_t Time, struct FString CallBackData, struct FString ServiceName, struct FString ServiceCode, struct FString BasePlanId, struct FString GWOfferId, bool bAutoPay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "PayMonthCard");
    struct
    {
        struct FString ProductId;
        int32_t price;
        int32_t Time;
        struct FString CallBackData;
        struct FString ServiceName;
        struct FString ServiceCode;
        struct FString BasePlanId;
        struct FString GWOfferId;
        bool bAutoPay;
    } Parms{};
    Parms.ProductId = (struct FString)ProductId;
    Parms.price = (int32_t)price;
    Parms.Time = (int32_t)Time;
    Parms.CallBackData = (struct FString)CallBackData;
    Parms.ServiceName = (struct FString)ServiceName;
    Parms.ServiceCode = (struct FString)ServiceCode;
    Parms.BasePlanId = (struct FString)BasePlanId;
    Parms.GWOfferId = (struct FString)GWOfferId;
    Parms.bAutoPay = (bool)bAutoPay;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::PayH5(struct FString charac_id, struct FString charac_name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "PayH5");
    struct
    {
        struct FString charac_id;
        struct FString charac_name;
    } Parms{};
    Parms.charac_id = (struct FString)charac_id;
    Parms.charac_name = (struct FString)charac_name;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::PayGoods(struct FString GoodsTokenUrl, int32_t GoodsPrice, int32_t GoodsNum, struct FString CallBackData, int32_t zoneid, struct FString OfferId, struct FString pf, struct FString PfExt, struct FString ChannelExtras)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "PayGoods");
    struct
    {
        struct FString GoodsTokenUrl;
        int32_t GoodsPrice;
        int32_t GoodsNum;
        struct FString CallBackData;
        int32_t zoneid;
        struct FString OfferId;
        struct FString pf;
        struct FString PfExt;
        struct FString ChannelExtras;
    } Parms{};
    Parms.GoodsTokenUrl = (struct FString)GoodsTokenUrl;
    Parms.GoodsPrice = (int32_t)GoodsPrice;
    Parms.GoodsNum = (int32_t)GoodsNum;
    Parms.CallBackData = (struct FString)CallBackData;
    Parms.zoneid = (int32_t)zoneid;
    Parms.OfferId = (struct FString)OfferId;
    Parms.pf = (struct FString)pf;
    Parms.PfExt = (struct FString)PfExt;
    Parms.ChannelExtras = (struct FString)ChannelExtras;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::PayCoin(struct FString ProductId, int32_t GoodsNum, struct FString CallBackData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "PayCoin");
    struct
    {
        struct FString ProductId;
        int32_t GoodsNum;
        struct FString CallBackData;
    } Parms{};
    Parms.ProductId = (struct FString)ProductId;
    Parms.GoodsNum = (int32_t)GoodsNum;
    Parms.CallBackData = (struct FString)CallBackData;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasReprovideFinished(struct FString resultJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasReprovideFinished");
    struct
    {
        struct FString resultJson;
    } Parms{};
    Parms.resultJson = (struct FString)resultJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasPayFinished(int32_t ResultCode, struct FString resultInerCode, struct FString realSaveNum, struct FString resultMsg, struct FString CallBackData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasPayFinished");
    struct
    {
        int32_t ResultCode;
        struct FString resultInerCode;
        struct FString realSaveNum;
        struct FString resultMsg;
        struct FString CallBackData;
    } Parms{};
    Parms.ResultCode = (int32_t)ResultCode;
    Parms.resultInerCode = (struct FString)resultInerCode;
    Parms.realSaveNum = (struct FString)realSaveNum;
    Parms.resultMsg = (struct FString)resultMsg;
    Parms.CallBackData = (struct FString)CallBackData;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasOvertime(bool overtimeState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasOvertime");
    struct
    {
        bool overtimeState;
    } Parms{};
    Parms.overtimeState = (bool)overtimeState;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasLoginExpired()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasLoginExpired");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasInitFinished(struct FString resultJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasInitFinished");
    struct
    {
        struct FString resultJson;
    } Parms{};
    Parms.resultJson = (struct FString)resultJson;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasGetLocalPrice(struct FString Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasGetLocalPrice");
    struct
    {
        struct FString Result;
    } Parms{};
    Parms.Result = (struct FString)Result;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasGetIntroPrice(struct FString Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasGetIntroPrice");
    struct
    {
        struct FString Result;
    } Parms{};
    Parms.Result = (struct FString)Result;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::OnMidasGetInfoFinished(struct FString Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "OnMidasGetInfoFinished");
    struct
    {
        struct FString Result;
    } Parms{};
    Parms.Result = (struct FString)Result;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::MidasPay(struct FString PayInfo, struct FString CallBackData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "MidasPay");
    struct
    {
        struct FString PayInfo;
        struct FString CallBackData;
    } Parms{};
    Parms.PayInfo = (struct FString)PayInfo;
    Parms.CallBackData = (struct FString)CallBackData;
    this->ProcessEvent(Func, &Parms);
}

bool UMFMidasService::Init(bool IsSandBox, bool EnableLog, int32_t GoodsZoneId, struct FString InPayChannel, struct FString InOfferId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "Init");
    struct
    {
        bool IsSandBox;
        bool EnableLog;
        int32_t GoodsZoneId;
        struct FString InPayChannel;
        struct FString InOfferId;
        bool ReturnValue;
    } Parms{};
    Parms.IsSandBox = (bool)IsSandBox;
    Parms.EnableLog = (bool)EnableLog;
    Parms.GoodsZoneId = (int32_t)GoodsZoneId;
    Parms.InPayChannel = (struct FString)InPayChannel;
    Parms.InOfferId = (struct FString)InOfferId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMidasService::GetLocalPriceInfo(const struct TArray<struct FString>& ProductIds, struct FString ProductType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "GetLocalPriceInfo");
    struct
    {
        struct TArray<struct FString> ProductIds;
        struct FString ProductType;
    } Parms{};
    Parms.ProductIds = (struct TArray<struct FString>)ProductIds;
    Parms.ProductType = (struct FString)ProductType;
    this->ProcessEvent(Func, &Parms);
}

void UMFMidasService::GetIntroPriceInfo(const struct TArray<struct FString>& ProductIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "GetIntroPriceInfo");
    struct
    {
        struct TArray<struct FString> ProductIds;
    } Parms{};
    Parms.ProductIds = (struct TArray<struct FString>)ProductIds;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFMidasService::GetCountryCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "GetCountryCode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMidasService::GetChargeInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMidasService", "GetChargeInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFMNAService
void UMFMNAService::TransportInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "TransportInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::StartSpeedEnterMapLoading()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "StartSpeedEnterMapLoading");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::StartSpeed(struct FString VipIP, int32_t VipPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "StartSpeed");
    struct
    {
        struct FString VipIP;
        int32_t VipPort;
    } Parms{};
    Parms.VipIP = (struct FString)VipIP;
    Parms.VipPort = (int32_t)VipPort;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::SetZoneId(int32_t zoneid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "SetZoneId");
    struct
    {
        int32_t zoneid;
    } Parms{};
    Parms.zoneid = (int32_t)zoneid;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::SetUserName(int32_t channelType, struct FString Openid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "SetUserName");
    struct
    {
        int32_t channelType;
        struct FString Openid;
    } Parms{};
    Parms.channelType = (int32_t)channelType;
    Parms.Openid = (struct FString)Openid;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::SetPvpSpeedIp(struct FString VipIP, int32_t VipPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "SetPvpSpeedIp");
    struct
    {
        struct FString VipIP;
        int32_t VipPort;
    } Parms{};
    Parms.VipIP = (struct FString)VipIP;
    Parms.VipPort = (int32_t)VipPort;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::SetObserver(struct FString Tag, struct UMFMNAService* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "SetObserver");
    struct
    {
        struct FString Tag;
        struct UMFMNAService* InClass;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    Parms.InClass = (struct UMFMNAService*)InClass;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::SetDualTunnelBindNetType(int32_t bindNetType, bool useSaveFlow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "SetDualTunnelBindNetType");
    struct
    {
        int32_t bindNetType;
        bool useSaveFlow;
    } Parms{};
    Parms.bindNetType = (int32_t)bindNetType;
    Parms.useSaveFlow = (bool)useSaveFlow;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::SetControlDomain(struct FString ControlDomain, int64_t ControlPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "SetControlDomain");
    struct
    {
        struct FString ControlDomain;
        int64_t ControlPort;
    } Parms{};
    Parms.ControlDomain = (struct FString)ControlDomain;
    Parms.ControlPort = (int64_t)ControlPort;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::QueryPreciseKartin(int64_t curServTime, int64_t pvpDurationTime, struct FString triggerDelay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "QueryPreciseKartin");
    struct
    {
        int64_t curServTime;
        int64_t pvpDurationTime;
        struct FString triggerDelay;
    } Parms{};
    Parms.curServTime = (int64_t)curServTime;
    Parms.pvpDurationTime = (int64_t)pvpDurationTime;
    Parms.triggerDelay = (struct FString)triggerDelay;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::QueryKartin(struct FString Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "QueryKartin");
    struct
    {
        struct FString Tag;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::OnWebViewBackCall(int32_t methodId, int32_t MsgType, struct FString MsgJsonData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "OnWebViewBackCall");
    struct
    {
        int32_t methodId;
        int32_t MsgType;
        struct FString MsgJsonData;
    } Parms{};
    Parms.methodId = (int32_t)methodId;
    Parms.MsgType = (int32_t)MsgType;
    Parms.MsgJsonData = (struct FString)MsgJsonData;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::OnUdppingWorkTestCall(int32_t flag, int32_t jump_network, int32_t jump_signal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "OnUdppingWorkTestCall");
    struct
    {
        int32_t flag;
        int32_t jump_network;
        int32_t jump_signal;
    } Parms{};
    Parms.flag = (int32_t)flag;
    Parms.jump_network = (int32_t)jump_network;
    Parms.jump_signal = (int32_t)jump_signal;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::OnStartSpeedCall(int32_t Type, int32_t flag, struct FString Desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "OnStartSpeedCall");
    struct
    {
        int32_t Type;
        int32_t flag;
        struct FString Desc;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.flag = (int32_t)flag;
    Parms.Desc = (struct FString)Desc;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::OnNetWorkUDPPingCall(struct FString bisTimeOut, struct FString UdpPing)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "OnNetWorkUDPPingCall");
    struct
    {
        struct FString bisTimeOut;
        struct FString UdpPing;
    } Parms{};
    Parms.bisTimeOut = (struct FString)bisTimeOut;
    Parms.UdpPing = (struct FString)UdpPing;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::OnNetWorkTestCall(int32_t flag, int32_t jump_network, int32_t jump_signal, int32_t jump_direct, int32_t direct_status, struct FString direct_desc, int32_t jump_export, int32_t export_status, struct FString export_desc, int32_t jump_terminal, int32_t terminal_status, struct FString terminal_desc, int32_t jump_router, int32_t router_status, struct FString router_desc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "OnNetWorkTestCall");
    struct
    {
        int32_t flag;
        int32_t jump_network;
        int32_t jump_signal;
        int32_t jump_direct;
        int32_t direct_status;
        struct FString direct_desc;
        int32_t jump_export;
        int32_t export_status;
        struct FString export_desc;
        int32_t jump_terminal;
        int32_t terminal_status;
        struct FString terminal_desc;
        int32_t jump_router;
        int32_t router_status;
        struct FString router_desc;
    } Parms{};
    Parms.flag = (int32_t)flag;
    Parms.jump_network = (int32_t)jump_network;
    Parms.jump_signal = (int32_t)jump_signal;
    Parms.jump_direct = (int32_t)jump_direct;
    Parms.direct_status = (int32_t)direct_status;
    Parms.direct_desc = (struct FString)direct_desc;
    Parms.jump_export = (int32_t)jump_export;
    Parms.export_status = (int32_t)export_status;
    Parms.export_desc = (struct FString)export_desc;
    Parms.jump_terminal = (int32_t)jump_terminal;
    Parms.terminal_status = (int32_t)terminal_status;
    Parms.terminal_desc = (struct FString)terminal_desc;
    Parms.jump_router = (int32_t)jump_router;
    Parms.router_status = (int32_t)router_status;
    Parms.router_desc = (struct FString)router_desc;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::IsQOSWork()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "IsQOSWork");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFMNAService::IsAnyVPNOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "IsAnyVPNOpen");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMNAService::Init(struct FString QQAppID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "Init");
    struct
    {
        struct FString QQAppID;
    } Parms{};
    Parms.QQAppID = (struct FString)QQAppID;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::GoFront()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "GoFront");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::GoBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "GoBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFMNAService::GetTelephonyType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "GetTelephonyType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFMNAService* UMFMNAService::GetStaticMNAService()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFMNAService", "GetStaticMNAService");
    struct
    {
        struct UMFMNAService* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFMNAService::GetNetworkType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "GetNetworkType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFMNAService::GetIpGroupDelaysUseTCPUnlimited(struct FString Tag, struct FString ipPortGroup, int32_t intervalMills, int32_t Count, int32_t pkgTimeoutMills)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "GetIpGroupDelaysUseTCPUnlimited");
    struct
    {
        struct FString Tag;
        struct FString ipPortGroup;
        int32_t intervalMills;
        int32_t Count;
        int32_t pkgTimeoutMills;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    Parms.ipPortGroup = (struct FString)ipPortGroup;
    Parms.intervalMills = (int32_t)intervalMills;
    Parms.Count = (int32_t)Count;
    Parms.pkgTimeoutMills = (int32_t)pkgTimeoutMills;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::GetIpGroupDelaysUseTCP(struct FString Tag, struct FString ipPortGroup, int32_t intervalMills, int32_t Count, int32_t pkgTimeoutMills)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "GetIpGroupDelaysUseTCP");
    struct
    {
        struct FString Tag;
        struct FString ipPortGroup;
        int32_t intervalMills;
        int32_t Count;
        int32_t pkgTimeoutMills;
    } Parms{};
    Parms.Tag = (struct FString)Tag;
    Parms.ipPortGroup = (struct FString)ipPortGroup;
    Parms.intervalMills = (int32_t)intervalMills;
    Parms.Count = (int32_t)Count;
    Parms.pkgTimeoutMills = (int32_t)pkgTimeoutMills;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::EndSpeedAndReportInformation(struct FString vip, int32_t Port, struct FString InformationGroup)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "EndSpeedAndReportInformation");
    struct
    {
        struct FString vip;
        int32_t Port;
        struct FString InformationGroup;
    } Parms{};
    Parms.vip = (struct FString)vip;
    Parms.Port = (int32_t)Port;
    Parms.InformationGroup = (struct FString)InformationGroup;
    this->ProcessEvent(Func, &Parms);
}

void UMFMNAService::ChangeMenuWidget(struct UUserWidget* NewWidgetClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "ChangeMenuWidget");
    struct
    {
        struct UUserWidget* NewWidgetClass;
    } Parms{};
    Parms.NewWidgetClass = (struct UUserWidget*)NewWidgetClass;
    this->ProcessEvent(Func, &Parms);
}

struct UMFMNAService* UMFMNAService::AddServiceByClass(struct UMFMNAService* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMNAService", "AddServiceByClass");
    struct
    {
        struct UMFMNAService* InClass;
        struct UMFMNAService* ReturnValue;
    } Parms{};
    Parms.InClass = (struct UMFMNAService*)InClass;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFMountPakService
void UMFMountPakService::UnmountMapWithLock(struct FString ExcludedMapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "UnmountMapWithLock");
    struct
    {
        struct FString ExcludedMapName;
    } Parms{};
    Parms.ExcludedMapName = (struct FString)ExcludedMapName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMountPakService::UnmountMap(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "UnmountMap");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMountPakService::OnPrePreLoadMap(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "OnPrePreLoadMap");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMountPakService::OnPostLoadMap(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "OnPostLoadMap");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMountPakService::OnPakFileMissing(struct FString MissingFile, int32_t PakNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "OnPakFileMissing");
    struct
    {
        struct FString MissingFile;
        int32_t PakNum;
    } Parms{};
    Parms.MissingFile = (struct FString)MissingFile;
    Parms.PakNum = (int32_t)PakNum;
    this->ProcessEvent(Func, &Parms);
}

void UMFMountPakService::MountMapWithLock(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "MountMapWithLock");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

void UMFMountPakService::MountMap(struct FString MapName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFMountPakService", "MountMap");
    struct
    {
        struct FString MapName;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    this->ProcessEvent(Func, &Parms);
}

// UMFPandoraService
void UMFPandoraService::TdmReporterDelegate(int32_t srcID, struct FString EventName, struct TMap<struct FString, struct FString>& eventData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "TdmReporterDelegate");
    struct
    {
        int32_t srcID;
        struct FString EventName;
        struct TMap<struct FString, struct FString> eventData;
    } Parms{};
    Parms.srcID = (int32_t)srcID;
    Parms.EventName = (struct FString)EventName;
    this->ProcessEvent(Func, &Parms);
    eventData = Parms.eventData;
}

void UMFPandoraService::ShowItemTips(struct UCanvasPanel* anchor, struct FString itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "ShowItemTips");
    struct
    {
        struct UCanvasPanel* anchor;
        struct FString itemID;
    } Parms{};
    Parms.anchor = (struct UCanvasPanel*)anchor;
    Parms.itemID = (struct FString)itemID;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::ShowItemIcon(struct UImage* Image, struct FString itemID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "ShowItemIcon");
    struct
    {
        struct UImage* Image;
        struct FString itemID;
    } Parms{};
    Parms.Image = (struct UImage*)Image;
    Parms.itemID = (struct FString)itemID;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::ShowItemEx(struct UCanvasPanel* anchor, struct FString itemID, int32_t itemCnt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "ShowItemEx");
    struct
    {
        struct UCanvasPanel* anchor;
        struct FString itemID;
        int32_t itemCnt;
    } Parms{};
    Parms.anchor = (struct UCanvasPanel*)anchor;
    Parms.itemID = (struct FString)itemID;
    Parms.itemCnt = (int32_t)itemCnt;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::SetUserData(const struct TMap<struct FString, struct FString>& userdata)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "SetUserData");
    struct
    {
        struct TMap<struct FString, struct FString> userdata;
    } Parms{};
    Parms.userdata = (struct TMap<struct FString, struct FString>)userdata;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::SetSDKVersion(int32_t InVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "SetSDKVersion");
    struct
    {
        int32_t InVersion;
    } Parms{};
    Parms.InVersion = (int32_t)InVersion;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::SetSDKCoreDataPath(struct FString InFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "SetSDKCoreDataPath");
    struct
    {
        struct FString InFilePath;
    } Parms{};
    Parms.InFilePath = (struct FString)InFilePath;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::SetRegistDate(struct FString Date)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "SetRegistDate");
    struct
    {
        struct FString Date;
    } Parms{};
    Parms.Date = (struct FString)Date;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::SetFont(struct FString FontName, struct FString FontPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "SetFont");
    struct
    {
        struct FString FontName;
        struct FString FontPath;
    } Parms{};
    Parms.FontName = (struct FString)FontName;
    Parms.FontPath = (struct FString)FontPath;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::RemoveUserWidgetFromGame(struct UUserWidget* Widget, struct FString panelName, struct FString anchorID, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "RemoveUserWidgetFromGame");
    struct
    {
        struct UUserWidget* Widget;
        struct FString panelName;
        struct FString anchorID;
        int32_t Type;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.panelName = (struct FString)panelName;
    Parms.anchorID = (struct FString)anchorID;
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::PlaySound(struct FString ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "PlaySound");
    struct
    {
        struct FString ID;
    } Parms{};
    Parms.ID = (struct FString)ID;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::PdrPanic(struct FString InErrorMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "PdrPanic");
    struct
    {
        struct FString InErrorMsg;
    } Parms{};
    Parms.InErrorMsg = (struct FString)InErrorMsg;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::PandoraLoadBrush(struct UObject* Obj, struct FSlateBrush& Brush, struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "PandoraLoadBrush");
    struct
    {
        struct UObject* Obj;
        struct FSlateBrush Brush;
        struct FString InPath;
    } Parms{};
    Parms.Obj = (struct UObject*)Obj;
    Parms.InPath = (struct FString)InPath;
    this->ProcessEvent(Func, &Parms);
    Brush = Parms.Brush;
}

struct UWidget* UMFPandoraService::PandoraCreateUWidget(struct FString InPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "PandoraCreateUWidget");
    struct
    {
        struct FString InPath;
        struct UWidget* ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPandoraService::OnPLuaTimerTickStart__DelegateSignature(int32_t timerID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "OnPLuaTimerTickStart__DelegateSignature");
    struct
    {
        int32_t timerID;
    } Parms{};
    Parms.timerID = (int32_t)timerID;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::OnPLuaTimerTickEnd__DelegateSignature(int32_t timerID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "OnPLuaTimerTickEnd__DelegateSignature");
    struct
    {
        int32_t timerID;
    } Parms{};
    Parms.timerID = (int32_t)timerID;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::Jump(struct FString Type, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "Jump");
    struct
    {
        struct FString Type;
        struct FString Content;
    } Parms{};
    Parms.Type = (struct FString)Type;
    Parms.Content = (struct FString)Content;
    this->ProcessEvent(Func, &Parms);
}

bool UMFPandoraService::IsExpClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "IsExpClient");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPandoraService::Init(struct UGameInstance* InGI, int32_t Env)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "Init");
    struct
    {
        struct UGameInstance* InGI;
        int32_t Env;
        bool ReturnValue;
    } Parms{};
    Parms.InGI = (struct UGameInstance*)InGI;
    Parms.Env = (int32_t)Env;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFPandoraService::GetPdrLuaCallHistiry()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPandoraService", "GetPdrLuaCallHistiry");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPandoraService::GetCurrency(struct TMap<struct FString, struct FString>& results)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "GetCurrency");
    struct
    {
        struct TMap<struct FString, struct FString> results;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    results = Parms.results;
}

void UMFPandoraService::GetAccountToken(struct TMap<struct FString, struct FString>& results)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "GetAccountToken");
    struct
    {
        struct TMap<struct FString, struct FString> results;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    results = Parms.results;
}

void UMFPandoraService::EnableTimerDelegate(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "EnableTimerDelegate");
    struct
    {
        bool Enable;
    } Parms{};
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::DoCmdWithParams(const struct TMap<struct FString, struct FString>& Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "DoCmdWithParams");
    struct
    {
        struct TMap<struct FString, struct FString> Cmd;
    } Parms{};
    Parms.Cmd = (struct TMap<struct FString, struct FString>)Cmd;
    this->ProcessEvent(Func, &Parms);
}

void UMFPandoraService::DoCmd(struct FString Cmd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "DoCmd");
    struct
    {
        struct FString Cmd;
    } Parms{};
    Parms.Cmd = (struct FString)Cmd;
    this->ProcessEvent(Func, &Parms);
}

bool UMFPandoraService::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "Close");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFPandoraService::CallGameCmd(struct FString InCmd, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "CallGameCmd");
    struct
    {
        struct FString InCmd;
        int32_t Type;
        int32_t ReturnValue;
    } Parms{};
    Parms.InCmd = (struct FString)InCmd;
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPandoraService::AddUserWidgetToGame(struct UUserWidget* Widget, struct FString panelName, struct FString anchorID, int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPandoraService", "AddUserWidgetToGame");
    struct
    {
        struct UUserWidget* Widget;
        struct FString panelName;
        struct FString anchorID;
        int32_t Type;
    } Parms{};
    Parms.Widget = (struct UUserWidget*)Widget;
    Parms.panelName = (struct FString)panelName;
    Parms.anchorID = (struct FString)anchorID;
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

// UMFPlayerSystemSetting
void UMFPlayerSystemSetting::UpdatePlayerSystemSettingConfigFromLua(struct FString CVarName, struct FString CVarValue, uint8_t CVarEnv, uint8_t LowestGraphicsNeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "UpdatePlayerSystemSettingConfigFromLua");
    struct
    {
        struct FString CVarName;
        struct FString CVarValue;
        uint8_t CVarEnv;
        uint8_t LowestGraphicsNeed;
    } Parms{};
    Parms.CVarName = (struct FString)CVarName;
    Parms.CVarValue = (struct FString)CVarValue;
    Parms.CVarEnv = (uint8_t)CVarEnv;
    Parms.LowestGraphicsNeed = (uint8_t)LowestGraphicsNeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::UpdateDefaultConsoleVarsInner(uint8_t SceneEnv)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "UpdateDefaultConsoleVarsInner");
    struct
    {
        uint8_t SceneEnv;
    } Parms{};
    Parms.SceneEnv = (uint8_t)SceneEnv;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::UpdateDefaultConsoleVarsBeforePlayerSetting()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "UpdateDefaultConsoleVarsBeforePlayerSetting");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::InitPlayerSystemSettingConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "InitPlayerSystemSettingConfig");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::ExecThisConsoleVar(const struct FSettingValueInfo& SettingValueInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "ExecThisConsoleVar");
    struct
    {
        struct FSettingValueInfo SettingValueInfo;
    } Parms{};
    Parms.SettingValueInfo = (struct FSettingValueInfo)SettingValueInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::ExecConsoleVarsInLobby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "ExecConsoleVarsInLobby");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::ExecConsoleVarsInBattle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "ExecConsoleVarsInBattle");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::ExecConsoleVarsCommon()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "ExecConsoleVarsCommon");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPlayerSystemSetting::ExecConsoleVars(uint8_t SceneEnv)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "ExecConsoleVars");
    struct
    {
        uint8_t SceneEnv;
    } Parms{};
    Parms.SceneEnv = (uint8_t)SceneEnv;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFPlayerSystemSetting::CanExecuateInCurrentQualitySetting(const struct FSettingValueInfo& SettingValueInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPlayerSystemSetting", "CanExecuateInCurrentQualitySetting");
    struct
    {
        struct FSettingValueInfo SettingValueInfo;
        bool ReturnValue;
    } Parms{};
    Parms.SettingValueInfo = (struct FSettingValueInfo)SettingValueInfo;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFPWPluginManager
struct FText UMFPWPluginManager::TextFormatInterfaceIF(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, float Parm4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceIF");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        int32_t Parm2;
        struct FString Parm3;
        float Parm4;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (int32_t)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (float)Parm4;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceI3(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, int32_t Parm4, struct FString Parm5, int32_t Parm6)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceI3");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        int32_t Parm2;
        struct FString Parm3;
        int32_t Parm4;
        struct FString Parm5;
        int32_t Parm6;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (int32_t)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (int32_t)Parm4;
    Parms.Parm5 = (struct FString)Parm5;
    Parms.Parm6 = (int32_t)Parm6;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceI2f(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, int32_t Parm4, struct FString Parm5, float Parm6)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceI2f");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        int32_t Parm2;
        struct FString Parm3;
        int32_t Parm4;
        struct FString Parm5;
        float Parm6;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (int32_t)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (int32_t)Parm4;
    Parms.Parm5 = (struct FString)Parm5;
    Parms.Parm6 = (float)Parm6;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceI2(struct FString FormatString, struct FString Parm1, int32_t Parm2, struct FString Parm3, int32_t Parm4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceI2");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        int32_t Parm2;
        struct FString Parm3;
        int32_t Parm4;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (int32_t)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (int32_t)Parm4;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceI(struct FString FormatString, struct FString Parm1, int32_t Parm2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceI");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        int32_t Parm2;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (int32_t)Parm2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceFI(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, int32_t Parm4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceFI");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        float Parm2;
        struct FString Parm3;
        int32_t Parm4;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (float)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (int32_t)Parm4;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceF3(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, float Parm4, struct FString Parm5, float Parm6)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceF3");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        float Parm2;
        struct FString Parm3;
        float Parm4;
        struct FString Parm5;
        float Parm6;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (float)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (float)Parm4;
    Parms.Parm5 = (struct FString)Parm5;
    Parms.Parm6 = (float)Parm6;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceF2I(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, float Parm4, struct FString Parm5, int32_t Parm6)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceF2I");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        float Parm2;
        struct FString Parm3;
        float Parm4;
        struct FString Parm5;
        int32_t Parm6;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (float)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (float)Parm4;
    Parms.Parm5 = (struct FString)Parm5;
    Parms.Parm6 = (int32_t)Parm6;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceF2(struct FString FormatString, struct FString Parm1, float Parm2, struct FString Parm3, float Parm4)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceF2");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        float Parm2;
        struct FString Parm3;
        float Parm4;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (float)Parm2;
    Parms.Parm3 = (struct FString)Parm3;
    Parms.Parm4 = (float)Parm4;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::TextFormatInterfaceF(struct FString FormatString, struct FString Parm1, float Parm2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "TextFormatInterfaceF");
    struct
    {
        struct FString FormatString;
        struct FString Parm1;
        float Parm2;
        struct FText ReturnValue;
    } Parms{};
    Parms.FormatString = (struct FString)FormatString;
    Parms.Parm1 = (struct FString)Parm1;
    Parms.Parm2 = (float)Parm2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPWPluginManager::OpenWebViewWithoutEncode(struct FString URL, bool isFullScreen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewWithoutEncode");
    struct
    {
        struct FString URL;
        bool isFullScreen;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.isFullScreen = (bool)isFullScreen;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewWithJson(struct FString URL, int32_t InOrientation, bool bEncodeUrl, struct FString ExJson, bool bFullScreen, bool bSystemBrowserEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewWithJson");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
        bool bEncodeUrl;
        struct FString ExJson;
        bool bFullScreen;
        bool bSystemBrowserEnable;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    Parms.bEncodeUrl = (bool)bEncodeUrl;
    Parms.ExJson = (struct FString)ExJson;
    Parms.bFullScreen = (bool)bFullScreen;
    Parms.bSystemBrowserEnable = (bool)bSystemBrowserEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewWithEncodeDebug(struct FString URL, int32_t InOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewWithEncodeDebug");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewWithEncode(struct FString URL, int32_t InOrientation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewWithEncode");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewOSBrowser(struct FString URL, int32_t InOrientation, bool FullScreen, bool EncryptEnable, bool SystemBrowser)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewOSBrowser");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
        bool FullScreen;
        bool EncryptEnable;
        bool SystemBrowser;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    Parms.FullScreen = (bool)FullScreen;
    Parms.EncryptEnable = (bool)EncryptEnable;
    Parms.SystemBrowser = (bool)SystemBrowser;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewInterfaceRimless(struct FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView, bool bEnableToolBar, bool bPortraitToolBarHiddenEnable, bool bLandscapeToolBarHiddenEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewInterfaceRimless");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
        bool IsEncode;
        bool ShowDebugUrl;
        bool IsEmbedWebView;
        bool bEnableToolBar;
        bool bPortraitToolBarHiddenEnable;
        bool bLandscapeToolBarHiddenEnable;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    Parms.IsEncode = (bool)IsEncode;
    Parms.ShowDebugUrl = (bool)ShowDebugUrl;
    Parms.IsEmbedWebView = (bool)IsEmbedWebView;
    Parms.bEnableToolBar = (bool)bEnableToolBar;
    Parms.bPortraitToolBarHiddenEnable = (bool)bPortraitToolBarHiddenEnable;
    Parms.bLandscapeToolBarHiddenEnable = (bool)bLandscapeToolBarHiddenEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewInterfaceAllParams(struct FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView, bool bEnableToolBar, bool bPortraitToolBarHiddenEnable, bool bLandscapeToolBarHiddenEnable, bool EncryptEnable, bool isFullScreen, bool bExternal, struct FString OverseaExtra)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewInterfaceAllParams");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
        bool IsEncode;
        bool ShowDebugUrl;
        bool IsEmbedWebView;
        bool bEnableToolBar;
        bool bPortraitToolBarHiddenEnable;
        bool bLandscapeToolBarHiddenEnable;
        bool EncryptEnable;
        bool isFullScreen;
        bool bExternal;
        struct FString OverseaExtra;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    Parms.IsEncode = (bool)IsEncode;
    Parms.ShowDebugUrl = (bool)ShowDebugUrl;
    Parms.IsEmbedWebView = (bool)IsEmbedWebView;
    Parms.bEnableToolBar = (bool)bEnableToolBar;
    Parms.bPortraitToolBarHiddenEnable = (bool)bPortraitToolBarHiddenEnable;
    Parms.bLandscapeToolBarHiddenEnable = (bool)bLandscapeToolBarHiddenEnable;
    Parms.EncryptEnable = (bool)EncryptEnable;
    Parms.isFullScreen = (bool)isFullScreen;
    Parms.bExternal = (bool)bExternal;
    Parms.OverseaExtra = (struct FString)OverseaExtra;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewInterface(struct FString URL, int32_t InOrientation, bool IsEncode, bool ShowDebugUrl, bool IsEmbedWebView)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewInterface");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
        bool IsEncode;
        bool ShowDebugUrl;
        bool IsEmbedWebView;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    Parms.IsEncode = (bool)IsEncode;
    Parms.ShowDebugUrl = (bool)ShowDebugUrl;
    Parms.IsEmbedWebView = (bool)IsEmbedWebView;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewEx(struct FString URL, int32_t InOrientation, bool bEncodeUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewEx");
    struct
    {
        struct FString URL;
        int32_t InOrientation;
        bool bEncodeUrl;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.InOrientation = (int32_t)InOrientation;
    Parms.bEncodeUrl = (bool)bEncodeUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebViewCustomerService(struct FString ScenceId, struct FString GameZone, struct FString ZoneName, struct FString RoleName, struct FString roleID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebViewCustomerService");
    struct
    {
        struct FString ScenceId;
        struct FString GameZone;
        struct FString ZoneName;
        struct FString RoleName;
        struct FString roleID;
    } Parms{};
    Parms.ScenceId = (struct FString)ScenceId;
    Parms.GameZone = (struct FString)GameZone;
    Parms.ZoneName = (struct FString)ZoneName;
    Parms.RoleName = (struct FString)RoleName;
    Parms.roleID = (struct FString)roleID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenWebView(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenWebView");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::OpenRateWindow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenRateWindow");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UMFPWPluginManager::OpenGetIntelSDKVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OpenGetIntelSDKVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPWPluginManager::OnTssServerLogin(struct FString feature_name, int32_t feature_name_len, struct FString Data, int32_t data_len, int32_t data_crc)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "OnTssServerLogin");
    struct
    {
        struct FString feature_name;
        int32_t feature_name_len;
        struct FString Data;
        int32_t data_len;
        int32_t data_crc;
    } Parms{};
    Parms.feature_name = (struct FString)feature_name;
    Parms.feature_name_len = (int32_t)feature_name_len;
    Parms.Data = (struct FString)Data;
    Parms.data_len = (int32_t)data_len;
    Parms.data_crc = (int32_t)data_crc;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::ObjLeakCheck(int32_t nParam, struct FString strParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPWPluginManager", "ObjLeakCheck");
    struct
    {
        int32_t nParam;
        struct FString strParam;
    } Parms{};
    Parms.nParam = (int32_t)nParam;
    Parms.strParam = (struct FString)strParam;
    this->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::NicoTest2(int32_t nParam, struct FString strParam, int32_t nParam2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPWPluginManager", "NicoTest2");
    struct
    {
        int32_t nParam;
        struct FString strParam;
        int32_t nParam2;
    } Parms{};
    Parms.nParam = (int32_t)nParam;
    Parms.strParam = (struct FString)strParam;
    Parms.nParam2 = (int32_t)nParam2;
    this->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::NicoTest(int32_t nParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPWPluginManager", "NicoTest");
    struct
    {
        int32_t nParam;
    } Parms{};
    Parms.nParam = (int32_t)nParam;
    this->ProcessEvent(Func, &Parms);
}

struct FText UMFPWPluginManager::L10NAsTimespan(struct FString Type, int32_t Hour, int32_t Minute, int32_t Second)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsTimespan");
    struct
    {
        struct FString Type;
        int32_t Hour;
        int32_t Minute;
        int32_t Second;
        struct FText ReturnValue;
    } Parms{};
    Parms.Type = (struct FString)Type;
    Parms.Hour = (int32_t)Hour;
    Parms.Minute = (int32_t)Minute;
    Parms.Second = (int32_t)Second;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::L10NAsTime(struct FString TimeZone, struct FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsTime");
    struct
    {
        struct FString TimeZone;
        struct FString Type;
        int32_t Year;
        int32_t Month;
        int32_t Day;
        int32_t Hour;
        int32_t Minute;
        int32_t Second;
        int32_t Millisecond;
        struct FText ReturnValue;
    } Parms{};
    Parms.TimeZone = (struct FString)TimeZone;
    Parms.Type = (struct FString)Type;
    Parms.Year = (int32_t)Year;
    Parms.Month = (int32_t)Month;
    Parms.Day = (int32_t)Day;
    Parms.Hour = (int32_t)Hour;
    Parms.Minute = (int32_t)Minute;
    Parms.Second = (int32_t)Second;
    Parms.Millisecond = (int32_t)Millisecond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::L10NAsNumberInt(int64_t InputNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsNumberInt");
    struct
    {
        int64_t InputNumber;
        struct FText ReturnValue;
    } Parms{};
    Parms.InputNumber = (int64_t)InputNumber;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::L10NAsNumberFloatWithFractionalDigits(double InputNumber, int32_t MinFractionalDigits, int32_t MaxFractionalDigits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsNumberFloatWithFractionalDigits");
    struct
    {
        double InputNumber;
        int32_t MinFractionalDigits;
        int32_t MaxFractionalDigits;
        struct FText ReturnValue;
    } Parms{};
    Parms.InputNumber = (double)InputNumber;
    Parms.MinFractionalDigits = (int32_t)MinFractionalDigits;
    Parms.MaxFractionalDigits = (int32_t)MaxFractionalDigits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::L10NAsNumberFloat(double InputNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsNumberFloat");
    struct
    {
        double InputNumber;
        struct FText ReturnValue;
    } Parms{};
    Parms.InputNumber = (double)InputNumber;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::L10NAsDateTime(struct FString TimeZone, struct FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsDateTime");
    struct
    {
        struct FString TimeZone;
        struct FString Type;
        int32_t Year;
        int32_t Month;
        int32_t Day;
        int32_t Hour;
        int32_t Minute;
        int32_t Second;
        int32_t Millisecond;
        struct FText ReturnValue;
    } Parms{};
    Parms.TimeZone = (struct FString)TimeZone;
    Parms.Type = (struct FString)Type;
    Parms.Year = (int32_t)Year;
    Parms.Month = (int32_t)Month;
    Parms.Day = (int32_t)Day;
    Parms.Hour = (int32_t)Hour;
    Parms.Minute = (int32_t)Minute;
    Parms.Second = (int32_t)Second;
    Parms.Millisecond = (int32_t)Millisecond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFPWPluginManager::L10NAsDate(struct FString TimeZone, struct FString Type, int32_t Year, int32_t Month, int32_t Day, int32_t Hour, int32_t Minute, int32_t Second, int32_t Millisecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "L10NAsDate");
    struct
    {
        struct FString TimeZone;
        struct FString Type;
        int32_t Year;
        int32_t Month;
        int32_t Day;
        int32_t Hour;
        int32_t Minute;
        int32_t Second;
        int32_t Millisecond;
        struct FText ReturnValue;
    } Parms{};
    Parms.TimeZone = (struct FString)TimeZone;
    Parms.Type = (struct FString)Type;
    Parms.Year = (int32_t)Year;
    Parms.Month = (int32_t)Month;
    Parms.Day = (int32_t)Day;
    Parms.Hour = (int32_t)Hour;
    Parms.Minute = (int32_t)Minute;
    Parms.Second = (int32_t)Second;
    Parms.Millisecond = (int32_t)Millisecond;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPWPluginManager::IsEmulator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "IsEmulator");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFPWPluginManager::GetXWID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GetXWID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFPWPluginManager::GetMSDKEncodeUrl(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GetMSDKEncodeUrl");
    struct
    {
        struct FString URL;
        struct FString ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFPWPlugin* UMFPWPluginManager::GetMFPWPluginByClass(struct UObject* WorldContextObject, struct UMFPWPlugin* InClass)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GetMFPWPluginByClass");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFPWPlugin* InClass;
        struct UMFPWPlugin* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InClass = (struct UMFPWPlugin*)InClass;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFPWPluginManager::GetIsCloudEmulator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GetIsCloudEmulator");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFPWPluginManager::GetEmulatorName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GetEmulatorName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPWPluginManager::GetDeviceId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPWPluginManager", "GetDeviceId");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFPWPluginManager::GetAdultType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GetAdultType");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFPWPluginManager::GenerateGuid()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "GenerateGuid");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFPWPluginManager::CustomPostValueS(struct FString Category, struct FString Key, struct FString InVal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "CustomPostValueS");
    struct
    {
        struct FString Category;
        struct FString Key;
        struct FString InVal;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.InVal = (struct FString)InVal;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::CustomPostValueI(struct FString Category, struct FString Key, int32_t A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "CustomPostValueI");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t A;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (int32_t)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::CustomPostValueF(struct FString Category, struct FString Key, float A)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "CustomPostValueF");
    struct
    {
        struct FString Category;
        struct FString Key;
        float A;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.A = (float)A;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::CustomEndTupleWrap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "CustomEndTupleWrap");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::CustomBeginTupleWrap(struct FString Category)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "CustomBeginTupleWrap");
    struct
    {
        struct FString Category;
    } Parms{};
    Parms.Category = (struct FString)Category;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::CppVMTest(int32_t nParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFPWPluginManager", "CppVMTest");
    struct
    {
        int32_t nParam;
    } Parms{};
    Parms.nParam = (int32_t)nParam;
    this->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::CloseWebView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "CloseWebView");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::ChangeWebView(struct FString Json)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "ChangeWebView");
    struct
    {
        struct FString Json;
    } Parms{};
    Parms.Json = (struct FString)Json;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFPWPluginManager::AddFriend(struct FString Openid, struct UObject* WorldContextObject, struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFPWPluginManager", "AddFriend");
    struct
    {
        struct FString Openid;
        struct UObject* WorldContextObject;
        struct FString Channel;
    } Parms{};
    Parms.Openid = (struct FString)Openid;
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Channel = (struct FString)Channel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFTGPAPredownload
void UMFTGPAPredownload::AsyncUnzipFiles(struct FString InDstDir, struct FString InSrcDir, struct TArray<struct FString> InFileList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFTGPAPredownload", "AsyncUnzipFiles");
    struct
    {
        struct FString InDstDir;
        struct FString InSrcDir;
        struct TArray<struct FString> InFileList;
    } Parms{};
    Parms.InDstDir = (struct FString)InDstDir;
    Parms.InSrcDir = (struct FString)InSrcDir;
    Parms.InFileList = (struct TArray<struct FString>)InFileList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFTGPAPredownload::AsyncMoveFiles(struct FString InDstDir, struct FString InSrcDir, struct TArray<struct FString> FileList)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFTGPAPredownload", "AsyncMoveFiles");
    struct
    {
        struct FString InDstDir;
        struct FString InSrcDir;
        struct TArray<struct FString> FileList;
    } Parms{};
    Parms.InDstDir = (struct FString)InDstDir;
    Parms.InSrcDir = (struct FString)InSrcDir;
    Parms.FileList = (struct TArray<struct FString>)FileList;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFTPioneerService
void UMFTPioneerService::StartSDK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "StartSDK");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFTPioneerService::StartMidasPay(struct FString InJsonStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "StartMidasPay");
    struct
    {
        struct FString InJsonStr;
        bool ReturnValue;
    } Parms{};
    Parms.InJsonStr = (struct FString)InJsonStr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFTPioneerService::SendGameEvent(struct FString Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "SendGameEvent");
    struct
    {
        struct FString Data;
    } Parms{};
    Parms.Data = (struct FString)Data;
    this->ProcessEvent(Func, &Parms);
}

void UMFTPioneerService::LoginWith(struct FString Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "LoginWith");
    struct
    {
        struct FString Type;
    } Parms{};
    Parms.Type = (struct FString)Type;
    this->ProcessEvent(Func, &Parms);
}

bool UMFTPioneerService::IsCloudGameEnv()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "IsCloudGameEnv");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFTPioneerService::GetVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "GetVersion");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFTPioneerService::GetProp(struct FString Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "GetProp");
    struct
    {
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFTPioneerService::GetDeviceInfoAsync()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFTPioneerService", "GetDeviceInfoAsync");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFVoiceService
int32_t UMFVoiceService::UploadRecordedFile(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "UploadRecordedFile");
    struct
    {
        struct FString FilePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::UpdateCoordinate(struct FString roomName, int64_t X, int64_t Y, int64_t Z, int64_t R)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "UpdateCoordinate");
    struct
    {
        struct FString roomName;
        int64_t X;
        int64_t Y;
        int64_t Z;
        int64_t R;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    Parms.X = (int64_t)X;
    Parms.Y = (int64_t)Y;
    Parms.Z = (int64_t)Z;
    Parms.R = (int64_t)R;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TextTranslate(struct FString Text, int32_t srcLang, int32_t targetLang, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TextTranslate");
    struct
    {
        struct FString Text;
        int32_t srcLang;
        int32_t targetLang;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.srcLang = (int32_t)srcLang;
    Parms.targetLang = (int32_t)targetLang;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TextToStreamSpeechStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TextToStreamSpeechStop");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TextToStreamSpeechStart(struct FString Text, struct FString VoiceType, int32_t nTimeoutMS, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TextToStreamSpeechStart");
    struct
    {
        struct FString Text;
        struct FString VoiceType;
        int32_t nTimeoutMS;
        struct FString FilePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.VoiceType = (struct FString)VoiceType;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TextToSpeechFile(struct FString Text, int32_t lang, struct FString FilePath, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TextToSpeechFile");
    struct
    {
        struct FString Text;
        int32_t lang;
        struct FString FilePath;
        int32_t VoiceType;
        float voiceRate;
        float Volume;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.lang = (int32_t)lang;
    Parms.FilePath = (struct FString)FilePath;
    Parms.VoiceType = (int32_t)VoiceType;
    Parms.voiceRate = (float)voiceRate;
    Parms.Volume = (float)Volume;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TextToSpeech(struct FString Text, int32_t lang, int32_t VoiceType, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TextToSpeech");
    struct
    {
        struct FString Text;
        int32_t lang;
        int32_t VoiceType;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.lang = (int32_t)lang;
    Parms.VoiceType = (int32_t)VoiceType;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TestMic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TestMic");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::TestHotfix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "TestHotfix");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::StopRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "StopRecording");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::StopPlayFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "StopPlayFile");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::StartRecording(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "StartRecording");
    struct
    {
        struct FString FilePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SpeechTranslate(struct FString fileID, int32_t srcLang, int32_t targetLang, int32_t transType, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SpeechTranslate");
    struct
    {
        struct FString fileID;
        int32_t srcLang;
        int32_t targetLang;
        int32_t transType;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.fileID = (struct FString)fileID;
    Parms.srcLang = (int32_t)srcLang;
    Parms.targetLang = (int32_t)targetLang;
    Parms.transType = (int32_t)transType;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SpeechToText(struct FString fileID, EMFVoiceLanguage Language)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SpeechToText");
    struct
    {
        struct FString fileID;
        enum EMFVoiceLanguage Language;
        int32_t ReturnValue;
    } Parms{};
    Parms.fileID = (struct FString)fileID;
    Parms.Language = (enum EMFVoiceLanguage)Language;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SpeechFileTranslate(struct FString FilePath, int32_t srcLang, int32_t targetLang, int32_t VoiceType, float voiceRate, float Volume, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SpeechFileTranslate");
    struct
    {
        struct FString FilePath;
        int32_t srcLang;
        int32_t targetLang;
        int32_t VoiceType;
        float voiceRate;
        float Volume;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    Parms.srcLang = (int32_t)srcLang;
    Parms.targetLang = (int32_t)targetLang;
    Parms.VoiceType = (int32_t)VoiceType;
    Parms.voiceRate = (float)voiceRate;
    Parms.Volume = (float)Volume;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SpeechFileToText(struct FString FilePath, int32_t srcLang, int32_t targetLang, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SpeechFileToText");
    struct
    {
        struct FString FilePath;
        int32_t srcLang;
        int32_t targetLang;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    Parms.srcLang = (int32_t)srcLang;
    Parms.targetLang = (int32_t)targetLang;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetVoiceMode(int32_t VoiceMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetVoiceMode");
    struct
    {
        int32_t VoiceMode;
        int32_t ReturnValue;
    } Parms{};
    Parms.VoiceMode = (int32_t)VoiceMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFVoiceService::SetTransSecInfo(struct FString secInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetTransSecInfo");
    struct
    {
        struct FString secInfo;
    } Parms{};
    Parms.secInfo = (struct FString)secInfo;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFVoiceService::SetSpeakerVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetSpeakerVolume");
    struct
    {
        int32_t Volume;
        int32_t ReturnValue;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetServerInfo(struct FString URL, struct FString defaultipsvr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetServerInfo");
    struct
    {
        struct FString URL;
        struct FString defaultipsvr;
        int32_t ReturnValue;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.defaultipsvr = (struct FString)defaultipsvr;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetRSTTServerInfo(struct FString RSTTUrl, struct FString httpDnsIPs, struct FString wxAppID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetRSTTServerInfo");
    struct
    {
        struct FString RSTTUrl;
        struct FString httpDnsIPs;
        struct FString wxAppID;
        int32_t ReturnValue;
    } Parms{};
    Parms.RSTTUrl = (struct FString)RSTTUrl;
    Parms.httpDnsIPs = (struct FString)httpDnsIPs;
    Parms.wxAppID = (struct FString)wxAppID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetReportedPlayerInfo(struct TArray<struct FString> cszOpenID, struct TArray<int32_t> nMemberID, int32_t nCount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetReportedPlayerInfo");
    struct
    {
        struct TArray<struct FString> cszOpenID;
        struct TArray<int32_t> nMemberID;
        int32_t nCount;
        int32_t ReturnValue;
    } Parms{};
    Parms.cszOpenID = (struct TArray<struct FString>)cszOpenID;
    Parms.nMemberID = (struct TArray<int32_t>)nMemberID;
    Parms.nCount = (int32_t)nCount;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFVoiceService::SetReportBufferTime(int32_t nTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetReportBufferTime");
    struct
    {
        int32_t nTimeSec;
    } Parms{};
    Parms.nTimeSec = (int32_t)nTimeSec;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFVoiceService::SetPlayerVolume(struct FString PlayerId, int32_t vol)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetPlayerVolume");
    struct
    {
        struct FString PlayerId;
        int32_t vol;
        int32_t ReturnValue;
    } Parms{};
    Parms.PlayerId = (struct FString)PlayerId;
    Parms.vol = (int32_t)vol;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetMicVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetMicVolume");
    struct
    {
        int32_t Volume;
        int32_t ReturnValue;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetCivilBinPath(struct FString pPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetCivilBinPath");
    struct
    {
        struct FString pPath;
        int32_t ReturnValue;
    } Parms{};
    Parms.pPath = (struct FString)pPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetBitRate(int32_t bitrate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetBitRate");
    struct
    {
        int32_t bitrate;
        int32_t ReturnValue;
    } Parms{};
    Parms.bitrate = (int32_t)bitrate;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetAudience(struct TArray<int32_t> members, int32_t Count, struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetAudience");
    struct
    {
        struct TArray<int32_t> members;
        int32_t Count;
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.members = (struct TArray<int32_t>)members;
    Parms.Count = (int32_t)Count;
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::SetAppInfo(struct FString AppID, struct FString AppKey, struct FString Openid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "SetAppInfo");
    struct
    {
        struct FString AppID;
        struct FString AppKey;
        struct FString Openid;
        int32_t ReturnValue;
    } Parms{};
    Parms.AppID = (struct FString)AppID;
    Parms.AppKey = (struct FString)AppKey;
    Parms.Openid = (struct FString)Openid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::Set3DUpward(float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Set3DUpward");
    struct
    {
        float X;
        float Y;
        float Z;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::Set3DPosition(float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Set3DPosition");
    struct
    {
        float X;
        float Y;
        float Z;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::Set3DForward(float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Set3DForward");
    struct
    {
        float X;
        float Y;
        float Z;
        int32_t ReturnValue;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::Set3DDistProperties(int32_t attenuationModel, float MinDis, float MaxDis, float rollOff)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Set3DDistProperties");
    struct
    {
        int32_t attenuationModel;
        float MinDis;
        float MaxDis;
        float rollOff;
        int32_t ReturnValue;
    } Parms{};
    Parms.attenuationModel = (int32_t)attenuationModel;
    Parms.MinDis = (float)MinDis;
    Parms.MaxDis = (float)MaxDis;
    Parms.rollOff = (float)rollOff;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::RSTSSpeechToText(int32_t srcLang, struct TArray<int32_t> pTargetLangs, int32_t nTargetLangCnt, int32_t nTimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "RSTSSpeechToText");
    struct
    {
        int32_t srcLang;
        struct TArray<int32_t> pTargetLangs;
        int32_t nTargetLangCnt;
        int32_t nTimeoutMS;
        int32_t ReturnValue;
    } Parms{};
    Parms.srcLang = (int32_t)srcLang;
    Parms.pTargetLangs = (struct TArray<int32_t>)pTargetLangs;
    Parms.nTargetLangCnt = (int32_t)nTargetLangCnt;
    Parms.nTimeoutMS = (int32_t)nTimeoutMS;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::ReportPlayer(struct TArray<struct FString> cszOpenID, int32_t nCount, struct FString cszInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ReportPlayer");
    struct
    {
        struct TArray<struct FString> cszOpenID;
        int32_t nCount;
        struct FString cszInfo;
        int32_t ReturnValue;
    } Parms{};
    Parms.cszOpenID = (struct TArray<struct FString>)cszOpenID;
    Parms.nCount = (int32_t)nCount;
    Parms.cszInfo = (struct FString)cszInfo;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::QuitRoom(struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "QuitRoom");
    struct
    {
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::QueryPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "QueryPermission");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::PlayRecordedFile(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "PlayRecordedFile");
    struct
    {
        struct FString FilePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::OpenSpeaker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OpenSpeaker");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::OpenMic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OpenMic");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFVoiceService::OnVoiceRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnVoiceRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnUploadedFile(int32_t Code, struct FString FilePath, struct FString fileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnUploadedFile");
    struct
    {
        int32_t Code;
        struct FString FilePath;
        struct FString fileID;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.FilePath = (struct FString)FilePath;
    Parms.fileID = (struct FString)fileID;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnTextTranslate(int32_t Code, int32_t srcLang, struct FString srcText, int32_t targetLang, struct FString targetText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnTextTranslate");
    struct
    {
        int32_t Code;
        int32_t srcLang;
        struct FString srcText;
        int32_t targetLang;
        struct FString targetText;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.srcLang = (int32_t)srcLang;
    Parms.srcText = (struct FString)srcText;
    Parms.targetLang = (int32_t)targetLang;
    Parms.targetText = (struct FString)targetText;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnStreamSpeechToTextDone(int32_t Code, int32_t Error, struct FString Result, struct FString VoicePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnStreamSpeechToTextDone");
    struct
    {
        int32_t Code;
        int32_t Error;
        struct FString Result;
        struct FString VoicePath;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.Error = (int32_t)Error;
    Parms.Result = (struct FString)Result;
    Parms.VoicePath = (struct FString)VoicePath;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnStatusUpdate(int32_t Status, struct FString roomName, int32_t memberID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnStatusUpdate");
    struct
    {
        int32_t Status;
        struct FString roomName;
        int32_t memberID;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.roomName = (struct FString)roomName;
    Parms.memberID = (int32_t)memberID;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnSpeechTranslate(int32_t Code, struct FString srcText, struct FString targetText, struct FString targetFileID, int32_t srcFileDuration)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnSpeechTranslate");
    struct
    {
        int32_t Code;
        struct FString srcText;
        struct FString targetText;
        struct FString targetFileID;
        int32_t srcFileDuration;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.srcText = (struct FString)srcText;
    Parms.targetText = (struct FString)targetText;
    Parms.targetFileID = (struct FString)targetFileID;
    Parms.srcFileDuration = (int32_t)srcFileDuration;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnSpeechToTextDone(int32_t Code, struct FString fileID, struct FString Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnSpeechToTextDone");
    struct
    {
        int32_t Code;
        struct FString fileID;
        struct FString Result;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.fileID = (struct FString)fileID;
    Parms.Result = (struct FString)Result;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnRoomMemberInfo(int32_t Code, struct FString roomName, int32_t memid, struct FString Openid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnRoomMemberInfo");
    struct
    {
        int32_t Code;
        struct FString roomName;
        int32_t memid;
        struct FString Openid;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.roomName = (struct FString)roomName;
    Parms.memid = (int32_t)memid;
    Parms.Openid = (struct FString)Openid;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnReportPlayer(int32_t Code, struct FString cszInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnReportPlayer");
    struct
    {
        int32_t Code;
        struct FString cszInfo;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.cszInfo = (struct FString)cszInfo;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnQuitedRoom(int32_t Code, struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnQuitedRoom");
    struct
    {
        int32_t Code;
        struct FString roomName;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnPlayedRecordedFile(int32_t Code, struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnPlayedRecordedFile");
    struct
    {
        int32_t Code;
        struct FString FilePath;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnMultiRoomMemberVoice(struct FString roomName, int32_t memid, int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnMultiRoomMemberVoice");
    struct
    {
        struct FString roomName;
        int32_t memid;
        int32_t Status;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    Parms.memid = (int32_t)memid;
    Parms.Status = (int32_t)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnMemberVoice(int32_t memid, int32_t Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnMemberVoice");
    struct
    {
        int32_t memid;
        int32_t Status;
    } Parms{};
    Parms.memid = (int32_t)memid;
    Parms.Status = (int32_t)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnJoinedRoom(int32_t Code, struct FString roomName, int32_t memberID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnJoinedRoom");
    struct
    {
        int32_t Code;
        struct FString roomName;
        int32_t memberID;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.roomName = (struct FString)roomName;
    Parms.memberID = (int32_t)memberID;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnIOSPermissionRequestReturn(bool Status)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnIOSPermissionRequestReturn");
    struct
    {
        bool Status;
    } Parms{};
    Parms.Status = (bool)Status;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnHarmonyPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<int32_t>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnHarmonyPermissionRequestReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<int32_t> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<int32_t>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnEvent(int32_t Event, struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnEvent");
    struct
    {
        int32_t Event;
        struct FString Info;
    } Parms{};
    Parms.Event = (int32_t)Event;
    Parms.Info = (struct FString)Info;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnDownloadedFile(int32_t Code, struct FString FilePath, struct FString fileID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnDownloadedFile");
    struct
    {
        int32_t Code;
        struct FString FilePath;
        struct FString fileID;
    } Parms{};
    Parms.Code = (int32_t)Code;
    Parms.FilePath = (struct FString)FilePath;
    Parms.fileID = (struct FString)fileID;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnAppliedMessageKey(int32_t Code)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnAppliedMessageKey");
    struct
    {
        int32_t Code;
    } Parms{};
    Parms.Code = (int32_t)Code;
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::OnAndroidPermissionRequestReturn(const struct TArray<struct FString>& Permissions, const struct TArray<bool>& GrantResults)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "OnAndroidPermissionRequestReturn");
    struct
    {
        struct TArray<struct FString> Permissions;
        struct TArray<bool> GrantResults;
    } Parms{};
    Parms.Permissions = (struct TArray<struct FString>)Permissions;
    Parms.GrantResults = (struct TArray<bool>)GrantResults;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFVoiceService::JoinTeamRoom(struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "JoinTeamRoom");
    struct
    {
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::JoinRangeRoom(struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "JoinRangeRoom");
    struct
    {
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::JoinNationalRoom(struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "JoinNationalRoom");
    struct
    {
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFVoiceService::IsSpeaking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "IsSpeaking");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFVoiceService::Invoke(int32_t Cmd, int32_t Param1, int32_t Param2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Invoke");
    struct
    {
        int32_t Cmd;
        int32_t Param1;
        int32_t Param2;
    } Parms{};
    Parms.Cmd = (int32_t)Cmd;
    Parms.Param1 = (int32_t)Param1;
    Parms.Param2 = (int32_t)Param2;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFVoiceService::InitMFVoiceEngine(struct FString AppID, struct FString AppKey, struct FString Openid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "InitMFVoiceEngine");
    struct
    {
        struct FString AppID;
        struct FString AppKey;
        struct FString Openid;
        int32_t ReturnValue;
    } Parms{};
    Parms.AppID = (struct FString)AppID;
    Parms.AppKey = (struct FString)AppKey;
    Parms.Openid = (struct FString)Openid;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GetSpeakerState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetSpeakerState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GetSpeakerLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetSpeakerLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GetRoomMembers(struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetRoomMembers");
    struct
    {
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GetPlayerVolume(struct FString PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetPlayerVolume");
    struct
    {
        struct FString PlayerId;
        int32_t ReturnValue;
    } Parms{};
    Parms.PlayerId = (struct FString)PlayerId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFPWObject* UMFVoiceService::GetObserver()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetObserver");
    struct
    {
        struct UMFPWObject* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GetMicState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetMicState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GetMicLevel(bool FadeOut)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetMicLevel");
    struct
    {
        bool FadeOut;
        int32_t ReturnValue;
    } Parms{};
    Parms.FadeOut = (bool)FadeOut;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFVoiceService::GetFileTime(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GetFileTime");
    struct
    {
        struct FString FilePath;
        float ReturnValue;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GameResume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GameResume");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::GamePause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "GamePause");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::ForbidMemberVoice(int32_t member, bool Enable, struct FString roomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ForbidMemberVoice");
    struct
    {
        int32_t member;
        bool Enable;
        struct FString roomName;
        int32_t ReturnValue;
    } Parms{};
    Parms.member = (int32_t)member;
    Parms.Enable = (bool)Enable;
    Parms.roomName = (struct FString)roomName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableTranslate(struct FString roomName, bool bEnable, int32_t myLang, int32_t transType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableTranslate");
    struct
    {
        struct FString roomName;
        bool bEnable;
        int32_t myLang;
        int32_t transType;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    Parms.bEnable = (bool)bEnable;
    Parms.myLang = (int32_t)myLang;
    Parms.transType = (int32_t)transType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableSpeakerOn(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableSpeakerOn");
    struct
    {
        bool Enable;
        int32_t ReturnValue;
    } Parms{};
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableRoomSpeaker(struct FString roomName, bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableRoomSpeaker");
    struct
    {
        struct FString roomName;
        bool Enable;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableRoomMicrophone(struct FString roomName, bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableRoomMicrophone");
    struct
    {
        struct FString roomName;
        bool Enable;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableReportALLAbroad(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableReportALLAbroad");
    struct
    {
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableReportALL(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableReportALL");
    struct
    {
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableMultiRoom(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableMultiRoom");
    struct
    {
        bool Enable;
        int32_t ReturnValue;
    } Parms{};
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableLogCallBack(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableLogCallBack");
    struct
    {
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFVoiceService::EnableLog(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableLog");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFVoiceService::EnableCivilVoice(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableCivilVoice");
    struct
    {
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableCivilFile(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableCivilFile");
    struct
    {
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::EnableBluetoothSCO(bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "EnableBluetoothSCO");
    struct
    {
        bool Enable;
        int32_t ReturnValue;
    } Parms{};
    Parms.Enable = (bool)Enable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::Enable3DVoiceRoom(struct FString roomName, bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Enable3DVoiceRoom");
    struct
    {
        struct FString roomName;
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.roomName = (struct FString)roomName;
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::Enable3DVoice(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "Enable3DVoice");
    struct
    {
        bool bEnable;
        int32_t ReturnValue;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::DownloadRecordedFile(struct FString fileID, struct FString DownloadFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "DownloadRecordedFile");
    struct
    {
        struct FString fileID;
        struct FString DownloadFilePath;
        int32_t ReturnValue;
    } Parms{};
    Parms.fileID = (struct FString)fileID;
    Parms.DownloadFilePath = (struct FString)DownloadFilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::CloseSpeaker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "CloseSpeaker");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::CloseMic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "CloseMic");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::CheckPermission()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "CheckPermission");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFVoiceService::ApplyMessageKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ApplyMessageKey");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFVoiceService::ApplicationWillEnterBackground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ApplicationWillEnterBackground");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::ApplicationWillDeactivate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ApplicationWillDeactivate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::ApplicationHasReactivated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ApplicationHasReactivated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFVoiceService::ApplicationHasEnteredForeground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFVoiceService", "ApplicationHasEnteredForeground");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFWXGameLiveService
bool UMFWXGameLiveService::WXGameLiveInit(struct FString gameName, struct FString AppID, struct FString LinkId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "WXGameLiveInit");
    struct
    {
        struct FString gameName;
        struct FString AppID;
        struct FString LinkId;
        bool ReturnValue;
    } Parms{};
    Parms.gameName = (struct FString)gameName;
    Parms.AppID = (struct FString)AppID;
    Parms.LinkId = (struct FString)LinkId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFWXGameLiveService::WXGameLiveGvoiceCmd(int32_t Cmd, int32_t P1, int32_t p2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "WXGameLiveGvoiceCmd");
    struct
    {
        int32_t Cmd;
        int32_t P1;
        int32_t p2;
    } Parms{};
    Parms.Cmd = (int32_t)Cmd;
    Parms.P1 = (int32_t)P1;
    Parms.p2 = (int32_t)p2;
    this->ProcessEvent(Func, &Parms);
}

void UMFWXGameLiveService::StopLive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "StopLive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWXGameLiveService::StartLive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "StartLive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWXGameLiveService::PostGameMessage(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "PostGameMessage");
    struct
    {
        struct FString Msg;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
}

void UMFWXGameLiveService::OnMessageFromWeChat(struct FString Msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "OnMessageFromWeChat");
    struct
    {
        struct FString Msg;
    } Parms{};
    Parms.Msg = (struct FString)Msg;
    this->ProcessEvent(Func, &Parms);
}

void UMFWXGameLiveService::OnLiveButtonClicked()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "OnLiveButtonClicked");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFWXGameLiveService::IsSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "IsSupported");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFWXGameLiveService::GetPrimaryGPUBrand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWXGameLiveService", "GetPrimaryGPUBrand");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFWXGameLiveService::CheckSupportAndPrepare(struct FString UserInfo, bool TestEnv)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWXGameLiveService", "CheckSupportAndPrepare");
    struct
    {
        struct FString UserInfo;
        bool TestEnv;
    } Parms{};
    Parms.UserInfo = (struct FString)UserInfo;
    Parms.TestEnv = (bool)TestEnv;
    this->ProcessEvent(Func, &Parms);
}

// UMFXunyouService
void UMFXunyouService::SetWiFiAccelSwitch(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "SetWiFiAccelSwitch");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::SetUserToken(struct FString UserId, struct FString Token, struct FString AppID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "SetUserToken");
    struct
    {
        struct FString UserId;
        struct FString Token;
        struct FString AppID;
    } Parms{};
    Parms.UserId = (struct FString)UserId;
    Parms.Token = (struct FString)Token;
    Parms.AppID = (struct FString)AppID;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::SetUdpEchoPort(int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "SetUdpEchoPort");
    struct
    {
        int32_t Port;
    } Parms{};
    Parms.Port = (int32_t)Port;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::SetUdpEchoAddress(struct FString ip, int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "SetUdpEchoAddress");
    struct
    {
        struct FString ip;
        int32_t Port;
    } Parms{};
    Parms.ip = (struct FString)ip;
    Parms.Port = (int32_t)Port;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::setUamAreaCode(int32_t areaCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "setUamAreaCode");
    struct
    {
        int32_t areaCode;
    } Parms{};
    Parms.areaCode = (int32_t)areaCode;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::PrepareGameAsync(struct UObject* WorldContext, struct FString EchoIp, int32_t Echoport, struct FString AccProtocal, struct FString AccIp, int32_t AccPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "PrepareGameAsync");
    struct
    {
        struct UObject* WorldContext;
        struct FString EchoIp;
        int32_t Echoport;
        struct FString AccProtocal;
        struct FString AccIp;
        int32_t AccPort;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.EchoIp = (struct FString)EchoIp;
    Parms.Echoport = (int32_t)Echoport;
    Parms.AccProtocal = (struct FString)AccProtocal;
    Parms.AccIp = (struct FString)AccIp;
    Parms.AccPort = (int32_t)AccPort;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::OnPostTryNextIP(struct FString IPAddress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "OnPostTryNextIP");
    struct
    {
        struct FString IPAddress;
    } Parms{};
    Parms.IPAddress = (struct FString)IPAddress;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::OnNetDelayQuality4(float pingAvg, float sd)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "OnNetDelayQuality4");
    struct
    {
        float pingAvg;
        float sd;
    } Parms{};
    Parms.pingAvg = (float)pingAvg;
    Parms.sd = (float)sd;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::OnNetDelayJni(int32_t milis)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "OnNetDelayJni");
    struct
    {
        int32_t milis;
    } Parms{};
    Parms.milis = (int32_t)milis;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::OnAccelRecommendationWindowPop(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "OnAccelRecommendationWindowPop");
    struct
    {
        int32_t Type;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::OnAccelRecommendationResult(int32_t Type, bool isConfirm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "OnAccelRecommendationResult");
    struct
    {
        int32_t Type;
        bool isConfirm;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.isConfirm = (bool)isConfirm;
    this->ProcessEvent(Func, &Parms);
}

bool UMFXunyouService::IsAccelOpened()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "IsAccelOpened");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFXunyouService::Init(struct FString Guid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "Init");
    struct
    {
        struct FString Guid;
    } Parms{};
    Parms.Guid = (struct FString)Guid;
    this->ProcessEvent(Func, &Parms);
}

struct FString UMFXunyouService::GetWebUIUrl(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "GetWebUIUrl");
    struct
    {
        int32_t Type;
        struct FString ReturnValue;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFXunyouService::GetVIPValidTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "GetVIPValidTime");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFXunyouService::GetIP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "GetIP");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFXunyouService::GetAccelRecommendation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "GetAccelRecommendation");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFXunyouService::GetAccelerationStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "GetAccelerationStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFXunyouService::ClearAccelAddresses()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "ClearAccelAddresses");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::BeginRound(struct FString Openid, struct FString pvpid, bool bBegin)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "BeginRound");
    struct
    {
        struct FString Openid;
        struct FString pvpid;
        bool bBegin;
    } Parms{};
    Parms.Openid = (struct FString)Openid;
    Parms.pvpid = (struct FString)pvpid;
    Parms.bBegin = (bool)bBegin;
    this->ProcessEvent(Func, &Parms);
}

void UMFXunyouService::AddAccelAddress(struct FString protocal, struct FString ip, int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFXunyouService", "AddAccelAddress");
    struct
    {
        struct FString protocal;
        struct FString ip;
        int32_t Port;
    } Parms{};
    Parms.protocal = (struct FString)protocal;
    Parms.ip = (struct FString)ip;
    Parms.Port = (int32_t)Port;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
