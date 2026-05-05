#include "DFMGameSDK.hpp"
#include "Engine.hpp"
#include "GPGameFlow.hpp"
#include "GPUserInterfaceCore.hpp"
#include "PerfGear.hpp"
#include "RuntimeFilesDownloader.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UCommonTipView
void UCommonTipView::SetShowText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "SetShowText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::SetConfirmText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "SetConfirmText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::SetConfirmBtnVisibility(uint8_t bIsVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "SetConfirmBtnVisibility");
    struct
    {
        uint8_t bIsVisible;
    } Parms{};
    Parms.bIsVisible = (uint8_t)bIsVisible;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::SetCloseSelfAfterConfirm(uint8_t InClose)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "SetCloseSelfAfterConfirm");
    struct
    {
        uint8_t InClose;
    } Parms{};
    Parms.InClose = (uint8_t)InClose;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::SetCancelText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "SetCancelText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::SetCancelBtnVisibility(uint8_t bIsVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "SetCancelBtnVisibility");
    struct
    {
        uint8_t bIsVisible;
    } Parms{};
    Parms.bIsVisible = (uint8_t)bIsVisible;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::RemoveSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "RemoveSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::OnWidgetHide__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "OnWidgetHide__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::OnConfirmBtnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "OnConfirmBtnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::OnCloseCalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "OnCloseCalled");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::OnCancelBtnClick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "OnCancelBtnClick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::InitDataWithoutBtn(const struct FText& InShowText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "InitDataWithoutBtn");
    struct
    {
        struct FText InShowText;
    } Parms{};
    Parms.InShowText = (struct FText)InShowText;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::InitDataWithBtn(const struct FText& InShowText, const struct FText& InConfirmText, const struct FText& InCancelText, uint8_t bIsOnlyOneBtn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "InitDataWithBtn");
    struct
    {
        struct FText InShowText;
        struct FText InConfirmText;
        struct FText InCancelText;
        uint8_t bIsOnlyOneBtn;
    } Parms{};
    Parms.InShowText = (struct FText)InShowText;
    Parms.InConfirmText = (struct FText)InConfirmText;
    Parms.InCancelText = (struct FText)InCancelText;
    Parms.bIsOnlyOneBtn = (uint8_t)bIsOnlyOneBtn;
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::CallConfirmBtnClickEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "CallConfirmBtnClickEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCommonTipView::CallCancelBtnClickEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CommonTipView", "CallCancelBtnClickEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UBaseBackground
void UBaseBackground::UpdateLoadingTips(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "UpdateLoadingTips");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::UpdateLoadingPercentFloat(double InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "UpdateLoadingPercentFloat");
    struct
    {
        double InPercent;
    } Parms{};
    Parms.InPercent = (double)InPercent;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::UpdateLoadingPercent(int32_t InPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "UpdateLoadingPercent");
    struct
    {
        int32_t InPercent;
    } Parms{};
    Parms.InPercent = (int32_t)InPercent;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::UpdateLeftTimeText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "UpdateLeftTimeText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::SetLoadingPercentTextVisibility(uint8_t InIsVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "SetLoadingPercentTextVisibility");
    struct
    {
        uint8_t InIsVisible;
    } Parms{};
    Parms.InIsVisible = (uint8_t)InIsVisible;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::SetLoadingPanelVisibility(uint8_t bIsVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "SetLoadingPanelVisibility");
    struct
    {
        uint8_t bIsVisible;
    } Parms{};
    Parms.bIsVisible = (uint8_t)bIsVisible;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::SetLeftTimeVisibility(uint8_t bIsVisible)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "SetLeftTimeVisibility");
    struct
    {
        uint8_t bIsVisible;
    } Parms{};
    Parms.bIsVisible = (uint8_t)bIsVisible;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::ResumeMovie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "ResumeMovie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::RemoveSelf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "RemoveSelf");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::PlayMovieByName(struct FName InMovieName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "PlayMovieByName");
    struct
    {
        struct FName InMovieName;
    } Parms{};
    Parms.InMovieName = (struct FName)InMovieName;
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::PauseMovie()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "PauseMovie");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBaseBackground::OnMediaClosedUnexpected(struct FString PlayingUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BaseBackground", "OnMediaClosedUnexpected");
    struct
    {
        struct FString PlayingUrl;
    } Parms{};
    Parms.PlayingUrl = (struct FString)PlayingUrl;
    this->ProcessEvent(Func, &Parms);
}

// UCDNInfoManager
void UCDNInfoManager::ResetInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "ResetInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCDNInfoManager::RequestMetaFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "RequestMetaFile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCDNInfoManager::RequestDownload(struct FString URL, uint8_t bIsMeta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "RequestDownload");
    struct
    {
        struct FString URL;
        uint8_t bIsMeta;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.bIsMeta = (uint8_t)bIsMeta;
    this->ProcessEvent(Func, &Parms);
}

void UCDNInfoManager::LoadDynamicConfigFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "LoadDynamicConfigFile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCDNInfoManager::HasConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "HasConfig");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCDNInfoManager::HandleMetaData_Internal(const struct FMetaInfo& MetaInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "HandleMetaData_Internal");
    struct
    {
        struct FMetaInfo MetaInfo;
    } Parms{};
    Parms.MetaInfo = (struct FMetaInfo)MetaInfo;
    this->ProcessEvent(Func, &Parms);
}

void UCDNInfoManager::HandleMeta_Config(const struct FMetaInfo& MetaData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "HandleMeta_Config");
    struct
    {
        struct FMetaInfo MetaData;
    } Parms{};
    Parms.MetaData = (struct FMetaInfo)MetaData;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCDNInfoManager::GetInited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetInited");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNInfoManager::GetInfoByName_AsString(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetInfoByName_AsString");
    struct
    {
        struct FString InName;
        struct FString ReturnValue;
    } Parms{};
    Parms.InName = (struct FString)InName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UCDNInfoManager::GetInfoByName_AsInt(struct FString InName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetInfoByName_AsInt");
    struct
    {
        struct FString InName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FString)InName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNInfoManager::GetCustomData(struct FString InCustomKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetCustomData");
    struct
    {
        struct FString InCustomKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.InCustomKey = (struct FString)InCustomKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNInfoManager::GetCDNUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetCDNUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FCDNNoticeInfo UCDNInfoManager::GetCDNNoticeInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetCDNNoticeInfo");
    struct
    {
        struct FCDNNoticeInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCDNInfoManager* UCDNInfoManager::GetCDNInfoMgrIns(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CDNInfoManager", "GetCDNInfoMgrIns");
    struct
    {
        struct UObject* WorldContext;
        struct UCDNInfoManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNInfoManager::GetCdnHeader(struct FString InDomain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetCdnHeader");
    struct
    {
        struct FString InDomain;
        struct FString ReturnValue;
    } Parms{};
    Parms.InDomain = (struct FString)InDomain;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UCDNInfoManager::GetCDNFallbackUrls()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetCDNFallbackUrls");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UCDNInfoManager::GetCachedMetaVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetCachedMetaVersion");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FAPPUpdateInfo UCDNInfoManager::GetAppUpdateInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "GetAppUpdateInfo");
    struct
    {
        struct FAPPUpdateInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCDNInfoManager::EnableCDNInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNInfoManager", "EnableCDNInfo");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCDNPathConfig
void UCDNPathConfig::UpdateTimeStamp(const int64_t& InNewTimestamp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNPathConfig", "UpdateTimeStamp");
    struct
    {
        int64_t InNewTimestamp;
    } Parms{};
    Parms.InNewTimestamp = (int64_t)InNewTimestamp;
    this->ProcessEvent(Func, &Parms);
}

struct FString UCDNPathConfig::GetDefaultConfigFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNPathConfig", "GetDefaultConfigFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCDNPathConfig::GetBaseRootPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CDNPathConfig", "GetBaseRootPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFGameMatchReport
void UDFGameMatchReport::SetGameMode(int32_t GameMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFGameMatchReport", "SetGameMode");
    struct
    {
        int32_t GameMode;
    } Parms{};
    Parms.GameMode = (int32_t)GameMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFGameMatchReport::ReportMatchStep(int32_t StepId, int32_t Status, int32_t Code, struct FString Msg, uint8_t Finish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFGameMatchReport", "ReportMatchStep");
    struct
    {
        int32_t StepId;
        int32_t Status;
        int32_t Code;
        struct FString Msg;
        uint8_t Finish;
    } Parms{};
    Parms.StepId = (int32_t)StepId;
    Parms.Status = (int32_t)Status;
    Parms.Code = (int32_t)Code;
    Parms.Msg = (struct FString)Msg;
    Parms.Finish = (uint8_t)Finish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

int32_t UDFGameMatchReport::GetGameMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFGameMatchReport", "GetGameMode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMCrashSight
void UDFMCrashSight::SetUserValue(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetUserValue");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetUserId(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "SetUserId");
    struct
    {
        struct FString OpenId;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetPlayerPos(float X, float Y, float Z)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetPlayerPos");
    struct
    {
        float X;
        float Y;
        float Z;
    } Parms{};
    Parms.X = (float)X;
    Parms.Y = (float)Y;
    Parms.Z = (float)Z;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetPerfGearData(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetPerfGearData");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetLoadingFlowData(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetLoadingFlowData");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetHotfixData(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetHotfixData");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetGameInfoData(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetGameInfoData");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::SetBuildInfoData(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "SetBuildInfoData");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ResetQualityLevelUserValue(EPerfGearQualityLevel InQualityLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "ResetQualityLevelUserValue");
    struct
    {
        enum EPerfGearQualityLevel InQualityLevel;
    } Parms{};
    Parms.InQualityLevel = (enum EPerfGearQualityLevel)InQualityLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ResetPerfGearUserValue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "ResetPerfGearUserValue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ResetFPSLevelUserValue(EPerfGearQualityLevel InFpsLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "ResetFPSLevelUserValue");
    struct
    {
        enum EPerfGearQualityLevel InFpsLevel;
    } Parms{};
    Parms.InFpsLevel = (enum EPerfGearQualityLevel)InFpsLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ResetDeviceLevelUserValue(int32_t InDeviceLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "ResetDeviceLevelUserValue");
    struct
    {
        int32_t InDeviceLevel;
    } Parms{};
    Parms.InDeviceLevel = (int32_t)InDeviceLevel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ReportLuaException(struct FString StackTrace, uint8_t bAttachLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "ReportLuaException");
    struct
    {
        struct FString StackTrace;
        uint8_t bAttachLog;
    } Parms{};
    Parms.StackTrace = (struct FString)StackTrace;
    Parms.bAttachLog = (uint8_t)bAttachLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ReportHeavyTaskInGameException(struct FString InErrorMsg, struct FString InStackTrace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "ReportHeavyTaskInGameException");
    struct
    {
        struct FString InErrorMsg;
        struct FString InStackTrace;
    } Parms{};
    Parms.InErrorMsg = (struct FString)InErrorMsg;
    Parms.InStackTrace = (struct FString)InStackTrace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ReportFrameGen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "ReportFrameGen");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::ReportException(int32_t Type, struct FString Name, struct FString Reason, struct FString StackTrace, struct FString extras, uint8_t quit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "ReportException");
    struct
    {
        int32_t Type;
        struct FString Name;
        struct FString Reason;
        struct FString StackTrace;
        struct FString extras;
        uint8_t quit;
    } Parms{};
    Parms.Type = (int32_t)Type;
    Parms.Name = (struct FString)Name;
    Parms.Reason = (struct FString)Reason;
    Parms.StackTrace = (struct FString)StackTrace;
    Parms.extras = (struct FString)extras;
    Parms.quit = (uint8_t)quit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::PrintLog(struct FString logContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "PrintLog");
    struct
    {
        struct FString logContext;
    } Parms{};
    Parms.logContext = (struct FString)logContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::PrintExtraData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "PrintExtraData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::PrintAsyncLoadingContext()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "PrintAsyncLoadingContext");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::OnHandleSystemError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "OnHandleSystemError");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::OnHandleSystemEnsure()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "OnHandleSystemEnsure");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::OnHandleShutdownAfterError()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "OnHandleShutdownAfterError");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::OnHandleRenderThreadHung(struct FString ErrorMessage, struct FString GpuCallstack, struct FString GpuDumpPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "OnHandleRenderThreadHung");
    struct
    {
        struct FString ErrorMessage;
        struct FString GpuCallstack;
        struct FString GpuDumpPath;
    } Parms{};
    Parms.ErrorMessage = (struct FString)ErrorMessage;
    Parms.GpuCallstack = (struct FString)GpuCallstack;
    Parms.GpuDumpPath = (struct FString)GpuDumpPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::OnHandleGpuCrash(struct FString ErrorMessage, struct FString GpuCallstack, struct FString GpuDumpPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "OnHandleGpuCrash");
    struct
    {
        struct FString ErrorMessage;
        struct FString GpuCallstack;
        struct FString GpuDumpPath;
    } Parms{};
    Parms.ErrorMessage = (struct FString)ErrorMessage;
    Parms.GpuCallstack = (struct FString)GpuCallstack;
    Parms.GpuDumpPath = (struct FString)GpuDumpPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMCrashSight::OnGameFlowEnter(EGameFlowStageType GameFlowStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMCrashSight", "OnGameFlowEnter");
    struct
    {
        enum EGameFlowStageType GameFlowStage;
    } Parms{};
    Parms.GameFlowStage = (enum EGameFlowStageType)GameFlowStage;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMCrashSight* UDFMCrashSight::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMCrashSight", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMCrashSight* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMExpansionPackCoordinator
uint8_t UDFMExpansionPackCoordinator::IsSupportLitePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMExpansionPackCoordinator", "IsSupportLitePackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMExpansionPackCoordinator::IsDownloadedByModuleName(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMExpansionPackCoordinator", "IsDownloadedByModuleName");
    struct
    {
        struct FString ModuleName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameAnnounce
struct FString UDFMGameAnnounce::LoadNoticeData(struct FString NoticeGroup, struct FString Language, struct FString Region, struct FString Partition, struct FString extraJson, float CacheClearInterval)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameAnnounce", "LoadNoticeData");
    struct
    {
        struct FString NoticeGroup;
        struct FString Language;
        struct FString Region;
        struct FString Partition;
        struct FString extraJson;
        float CacheClearInterval;
        struct FString ReturnValue;
    } Parms{};
    Parms.NoticeGroup = (struct FString)NoticeGroup;
    Parms.Language = (struct FString)Language;
    Parms.Region = (struct FString)Region;
    Parms.Partition = (struct FString)Partition;
    Parms.extraJson = (struct FString)extraJson;
    Parms.CacheClearInterval = (float)CacheClearInterval;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameAnnounce::ClearAnnounceDataCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameAnnounce", "ClearAnnounceDataCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameBrowser
void UDFMGameBrowser::SimpleOpenUrl(struct FString& URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "SimpleOpenUrl");
    struct
    {
        struct FString URL;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    URL = Parms.URL;
}

void UDFMGameBrowser::OpenUrl(struct FString& URL, int32_t screenType, uint8_t isFullScreen, uint8_t isUseURLEncode, struct FString& extraJson, uint8_t isBrowser)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "OpenUrl");
    struct
    {
        struct FString URL;
        int32_t screenType;
        uint8_t isFullScreen;
        uint8_t isUseURLEncode;
        struct FString extraJson;
        uint8_t isBrowser;
    } Parms{};
    Parms.screenType = (int32_t)screenType;
    Parms.isFullScreen = (uint8_t)isFullScreen;
    Parms.isUseURLEncode = (uint8_t)isUseURLEncode;
    Parms.isBrowser = (uint8_t)isBrowser;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    URL = Parms.URL;
    extraJson = Parms.extraJson;
}

void UDFMGameBrowser::OpenAmsCenter(struct FString& gameName, struct FString& CampaignId, struct FString& AreaID, struct FString& PlatformId, struct FString& partitionId, struct FString& roleId, int32_t screenType, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "OpenAmsCenter");
    struct
    {
        struct FString gameName;
        struct FString CampaignId;
        struct FString AreaID;
        struct FString PlatformId;
        struct FString partitionId;
        struct FString roleId;
        int32_t screenType;
        struct FString extraJson;
    } Parms{};
    Parms.screenType = (int32_t)screenType;
    Parms.extraJson = (struct FString)extraJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    gameName = Parms.gameName;
    CampaignId = Parms.CampaignId;
    AreaID = Parms.AreaID;
    PlatformId = Parms.PlatformId;
    partitionId = Parms.partitionId;
    roleId = Parms.roleId;
}

void UDFMGameBrowser::LaunchURL(struct FString URL, struct FString Parms_, struct FString Error)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "LaunchURL");
    struct
    {
        struct FString URL;
        struct FString Parms_;
        struct FString Error;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Parms_ = (struct FString)Parms_;
    Parms.Error = (struct FString)Error;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameBrowser::GetMD5Hash(struct FString InputString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "GetMD5Hash");
    struct
    {
        struct FString InputString;
        struct FString ReturnValue;
    } Parms{};
    Parms.InputString = (struct FString)InputString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameBrowser::GetEncodeUrl(struct FString& URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "GetEncodeUrl");
    struct
    {
        struct FString URL;
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    URL = Parms.URL;
    return Parms.ReturnValue;
}

void UDFMGameBrowser::CallJS(struct FString JsonJsParam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameBrowser", "CallJS");
    struct
    {
        struct FString JsonJsParam;
    } Parms{};
    Parms.JsonJsParam = (struct FString)JsonJsParam;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UDFMGameCentauri
void UDFMGameCentauri::ReapplyReceipt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameCentauri", "ReapplyReceipt");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameCentauri::Pay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameCentauri", "Pay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameCentauri::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameCentauri", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameCentauri::GetStoreCountryCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameCentauri", "GetStoreCountryCode");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameCentauri::GetPromotionInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameCentauri", "GetPromotionInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameCentauri::GetProductInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameCentauri", "GetProductInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameCentauri* UDFMGameCentauri::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameCentauri", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameCentauri* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameConnect
void UDFMGameConnect::TestChar(struct TMap<struct FString, struct FString> ntf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "TestChar");
    struct
    {
        struct TMap<struct FString, struct FString> ntf;
    } Parms{};
    Parms.ntf = (struct TMap<struct FString, struct FString>)ntf;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "Shutdown");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::SetRunningHeartbeat(uint8_t bFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "SetRunningHeartbeat");
    struct
    {
        uint8_t bFlag;
    } Parms{};
    Parms.bFlag = (uint8_t)bFlag;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::SetHeartbeatGapTime(uint32_t _gapTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "SetHeartbeatGapTime");
    struct
    {
        uint32_t _gapTime;
    } Parms{};
    Parms._gapTime = (uint32_t)_gapTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::RelayConnectServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "RelayConnectServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::InitOnConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "InitOnConnected");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::InitHeartBeatThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "InitHeartBeatThread");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::InitConnector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "InitConnector");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint64_t UDFMGameConnect::GetRTT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetRTT");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FConnectServerInfo UDFMGameConnect::GetLastConnectedInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetLastConnectedInfo");
    struct
    {
        struct FConnectServerInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameConnect::GetIsDisconnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetIsDisconnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameConnect::GetHeartbeatSeqId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetHeartbeatSeqId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint32_t UDFMGameConnect::GetHeartbeatGapTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetHeartbeatGapTime");
    struct
    {
        uint32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameConnect::GetEnableHeartbeatThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetEnableHeartbeatThread");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FConnectorResultInfo UDFMGameConnect::GetConnectInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "GetConnectInfo");
    struct
    {
        struct FConnectorResultInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameConnect* UDFMGameConnect::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameConnect", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameConnect* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameConnect::EnableHeartbeatThread()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "EnableHeartbeatThread");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::DisConnectServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "DisConnectServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::DeinitConnector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "DeinitConnector");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FOnlineConnectResult UDFMGameConnect::ConnectServerWithLastConnectedInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "ConnectServerWithLastConnectedInfo");
    struct
    {
        struct FOnlineConnectResult ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FOnlineConnectResult UDFMGameConnect::ConnectServer(const struct FConnectServerInfo& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "ConnectServer");
    struct
    {
        struct FConnectServerInfo Info;
        struct FOnlineConnectResult ReturnValue;
    } Parms{};
    Parms.Info = (struct FConnectServerInfo)Info;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameConnect::CancelStayInQueue()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "CancelStayInQueue");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameConnect::BroadcastRestartReconnected(uint8_t bIsSuccess)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "BroadcastRestartReconnected");
    struct
    {
        uint8_t bIsSuccess;
    } Parms{};
    Parms.bIsSuccess = (uint8_t)bIsSuccess;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameConnect::BindLuaFunctions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameConnect", "BindLuaFunctions");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameFriend
void UDFMGameFriend::ShareLua(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString mediaPath, struct FString extraJson, struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "ShareLua");
    struct
    {
        struct FString Channel;
        int32_t Type;
        struct FString User;
        struct FString Title;
        struct FString Desc;
        struct FString link;
        struct FString thumbPath;
        struct FString mediaPath;
        struct FString extraJson;
        struct FString ImagePath;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Type = (int32_t)Type;
    Parms.User = (struct FString)User;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.link = (struct FString)link;
    Parms.thumbPath = (struct FString)thumbPath;
    Parms.mediaPath = (struct FString)mediaPath;
    Parms.extraJson = (struct FString)extraJson;
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::ShareImageMessage(struct FString Channel, int32_t Type, struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "ShareImageMessage");
    struct
    {
        struct FString Channel;
        int32_t Type;
        struct FString ImagePath;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Type = (int32_t)Type;
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::Share(struct FDfmFriendReqInfo& reqInfo, struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "Share");
    struct
    {
        struct FDfmFriendReqInfo reqInfo;
        struct FString Channel;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    reqInfo = Parms.reqInfo;
}

void UDFMGameFriend::SetDiscordOnline()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "SetDiscordOnline");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::SendMessageLua(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString mediaPath, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "SendMessageLua");
    struct
    {
        struct FString Channel;
        int32_t Type;
        struct FString User;
        struct FString Title;
        struct FString Desc;
        struct FString link;
        struct FString thumbPath;
        struct FString mediaPath;
        struct FString extraJson;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Type = (int32_t)Type;
    Parms.User = (struct FString)User;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.link = (struct FString)link;
    Parms.thumbPath = (struct FString)thumbPath;
    Parms.mediaPath = (struct FString)mediaPath;
    Parms.extraJson = (struct FString)extraJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::SendMessage(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "SendMessage");
    struct
    {
        struct FString Channel;
        int32_t Type;
        struct FString User;
        struct FString Title;
        struct FString Desc;
        struct FString link;
        struct FString thumbPath;
        struct FString extraJson;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Type = (int32_t)Type;
    Parms.User = (struct FString)User;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.link = (struct FString)link;
    Parms.thumbPath = (struct FString)thumbPath;
    Parms.extraJson = (struct FString)extraJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::SendImageMessage(struct FString Channel, int32_t Type, struct FString User, struct FString Title, struct FString Desc, struct FString link, struct FString thumbPath, struct FString extraJson, struct FString ImagePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "SendImageMessage");
    struct
    {
        struct FString Channel;
        int32_t Type;
        struct FString User;
        struct FString Title;
        struct FString Desc;
        struct FString link;
        struct FString thumbPath;
        struct FString extraJson;
        struct FString ImagePath;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    Parms.Type = (int32_t)Type;
    Parms.User = (struct FString)User;
    Parms.Title = (struct FString)Title;
    Parms.Desc = (struct FString)Desc;
    Parms.link = (struct FString)link;
    Parms.thumbPath = (struct FString)thumbPath;
    Parms.extraJson = (struct FString)extraJson;
    Parms.ImagePath = (struct FString)ImagePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameFriend::ReadFromBuffer(struct FString Buffer, struct FString TextNamespace, struct FString PackageNamespace, uint8_t bRequiresQuotes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "ReadFromBuffer");
    struct
    {
        struct FString Buffer;
        struct FString TextNamespace;
        struct FString PackageNamespace;
        uint8_t bRequiresQuotes;
        struct FString ReturnValue;
    } Parms{};
    Parms.Buffer = (struct FString)Buffer;
    Parms.TextNamespace = (struct FString)TextNamespace;
    Parms.PackageNamespace = (struct FString)PackageNamespace;
    Parms.bRequiresQuotes = (uint8_t)bRequiresQuotes;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameFriend::QueryFriends(int32_t page, int32_t Count, uint8_t IsInGame, struct FString Channel, struct FString subChannel, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "QueryFriends");
    struct
    {
        int32_t page;
        int32_t Count;
        uint8_t IsInGame;
        struct FString Channel;
        struct FString subChannel;
        struct FString extraJson;
    } Parms{};
    Parms.page = (int32_t)page;
    Parms.Count = (int32_t)Count;
    Parms.IsInGame = (uint8_t)IsInGame;
    Parms.Channel = (struct FString)Channel;
    Parms.subChannel = (struct FString)subChannel;
    Parms.extraJson = (struct FString)extraJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::InitGameFriend()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameFriend", "InitGameFriend");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameFriend* UDFMGameFriend::Get(struct UWorld* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "Get");
    struct
    {
        struct UWorld* WorldContextObject;
        struct UDFMGameFriend* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UWorld*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameFriend::DiscordQueryFriends(int32_t page, int32_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "DiscordQueryFriends");
    struct
    {
        int32_t page;
        int32_t Count;
    } Parms{};
    Parms.page = (int32_t)page;
    Parms.Count = (int32_t)Count;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::DiscordAuthorize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "DiscordAuthorize");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameFriend::AddFriend(struct FDfmFriendReqInfo& reqInfo, struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameFriend", "AddFriend");
    struct
    {
        struct FDfmFriendReqInfo reqInfo;
        struct FString Channel;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    reqInfo = Parms.reqInfo;
}

// UDFMGameGarena
void UDFMGameGarena::PayGoods()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGarena", "PayGoods");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGarena::Pay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGarena", "Pay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGarena::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGarena", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameGarena::GetProductInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGarena", "GetProductInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameGarena* UDFMGameGarena::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGarena", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameGarena* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameGPM
void UDFMGameGPM::UpdateStoryStateGameInfo(int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "UpdateStoryStateGameInfo");
    struct
    {
        int32_t State;
    } Parms{};
    Parms.State = (int32_t)State;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::UpdateGameSceneByInt(int32_t Key, int32_t value1, int32_t value2, int32_t Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "UpdateGameSceneByInt");
    struct
    {
        int32_t Key;
        int32_t value1;
        int32_t value2;
        int32_t Value3;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.value1 = (int32_t)value1;
    Parms.value2 = (int32_t)value2;
    Parms.Value3 = (int32_t)Value3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::UpdateGameScene(int32_t Key, struct FString SceneID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "UpdateGameScene");
    struct
    {
        int32_t Key;
        struct FString SceneID;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.SceneID = (struct FString)SceneID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::SetRoomId(uint64_t InRoomId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "SetRoomId");
    struct
    {
        uint64_t InRoomId;
    } Parms{};
    Parms.InRoomId = (uint64_t)InRoomId;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::SetOpenId(struct FString OpenId, struct FString channelID, struct FString APPID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "SetOpenId");
    struct
    {
        struct FString OpenId;
        struct FString channelID;
        struct FString APPID;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    Parms.channelID = (struct FString)channelID;
    Parms.APPID = (struct FString)APPID;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::ReportTwoParams(struct FString Category, struct FString Key, float valueA, float valueB, uint32_t FrameIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "ReportTwoParams");
    struct
    {
        struct FString Category;
        struct FString Key;
        float valueA;
        float valueB;
        uint32_t FrameIndex;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.valueA = (float)valueA;
    Parms.valueB = (float)valueB;
    Parms.FrameIndex = (uint32_t)FrameIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::ReportStringParam(struct FString Category, struct FString Key, struct FString Value, uint32_t FrameIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "ReportStringParam");
    struct
    {
        struct FString Category;
        struct FString Key;
        struct FString Value;
        uint32_t FrameIndex;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    Parms.FrameIndex = (uint32_t)FrameIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::ReportOneParamI(struct FString Category, struct FString Key, int32_t valueA, uint32_t FrameIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "ReportOneParamI");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t valueA;
        uint32_t FrameIndex;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.valueA = (int32_t)valueA;
    Parms.FrameIndex = (uint32_t)FrameIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::ReportOneParam(struct FString Category, struct FString Key, float valueA, uint32_t FrameIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "ReportOneParam");
    struct
    {
        struct FString Category;
        struct FString Key;
        float valueA;
        uint32_t FrameIndex;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.valueA = (float)valueA;
    Parms.FrameIndex = (uint32_t)FrameIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::ReportEventIS(int32_t Key, struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "ReportEventIS");
    struct
    {
        int32_t Key;
        struct FString Info;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.Info = (struct FString)Info;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::ReportEvent(struct FString EventName, struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "ReportEvent");
    struct
    {
        struct FString EventName;
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::PostStepEvent(struct FString eventCategory, int32_t StepId, int32_t Status, int32_t Code, struct FString Msg, struct FString extraKey, uint8_t authorize, uint8_t Finish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "PostStepEvent");
    struct
    {
        struct FString eventCategory;
        int32_t StepId;
        int32_t Status;
        int32_t Code;
        struct FString Msg;
        struct FString extraKey;
        uint8_t authorize;
        uint8_t Finish;
    } Parms{};
    Parms.eventCategory = (struct FString)eventCategory;
    Parms.StepId = (int32_t)StepId;
    Parms.Status = (int32_t)Status;
    Parms.Code = (int32_t)Code;
    Parms.Msg = (struct FString)Msg;
    Parms.extraKey = (struct FString)extraKey;
    Parms.authorize = (uint8_t)authorize;
    Parms.Finish = (uint8_t)Finish;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::PostFrame(float DeltaTime, uint32_t FrameIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "PostFrame");
    struct
    {
        float DeltaTime;
        uint32_t FrameIndex;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    Parms.FrameIndex = (uint32_t)FrameIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::MarkLevelLoadCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "MarkLevelLoadCompleted");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::MarkLevelLoad(struct FString SceneName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "MarkLevelLoad");
    struct
    {
        struct FString SceneName;
    } Parms{};
    Parms.SceneName = (struct FString)SceneName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::MarkLevelFin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "MarkLevelFin");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::InitGPM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameGPM", "InitGPM");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameGPM::GetXID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "GetXID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameGPM::GetOAID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "GetOAID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameGPM::GetDeviceLevelByQcc(struct FString ConfigName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "GetDeviceLevelByQcc");
    struct
    {
        struct FString ConfigName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ConfigName = (struct FString)ConfigName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameGPM::GetCAID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "GetCAID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameGPM* UDFMGameGPM::Get(struct UWorld* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "Get");
    struct
    {
        struct UWorld* WorldContextObject;
        struct UDFMGameGPM* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UWorld*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameGPM::EndTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "EndTag");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::EndExtTag(struct FString TagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "EndExtTag");
    struct
    {
        struct FString TagName;
    } Parms{};
    Parms.TagName = (struct FString)TagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::EndExclude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "EndExclude");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameGPM::CheckDeviceGameScene(struct FString GameScene)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "CheckDeviceGameScene");
    struct
    {
        struct FString GameScene;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GameScene = (struct FString)GameScene;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameGPM::BeginTag(struct FString TagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "BeginTag");
    struct
    {
        struct FString TagName;
    } Parms{};
    Parms.TagName = (struct FString)TagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::BeginExtTag(struct FString TagName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "BeginExtTag");
    struct
    {
        struct FString TagName;
    } Parms{};
    Parms.TagName = (struct FString)TagName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameGPM::BeginExclude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameGPM", "BeginExclude");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UDFMGameIdcSelector
void UDFMGameIdcSelector::SetUdpPlayerId(struct FString _playerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "SetUdpPlayerId");
    struct
    {
        struct FString _playerId;
    } Parms{};
    Parms._playerId = (struct FString)_playerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameIdcSelector::SetUdpConfig(float TickTime, float TimeOutTime, uint8_t bUseUdpPing, int32_t pingTimes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "SetUdpConfig");
    struct
    {
        float TickTime;
        float TimeOutTime;
        uint8_t bUseUdpPing;
        int32_t pingTimes;
    } Parms{};
    Parms.TickTime = (float)TickTime;
    Parms.TimeOutTime = (float)TimeOutTime;
    Parms.bUseUdpPing = (uint8_t)bUseUdpPing;
    Parms.pingTimes = (int32_t)pingTimes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameIdcSelector::SetEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "SetEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameIdcSelector::SetCacheInfo(float Time, int32_t SeqId, int32_t totalReceive)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "SetCacheInfo");
    struct
    {
        float Time;
        int32_t SeqId;
        int32_t totalReceive;
    } Parms{};
    Parms.Time = (float)Time;
    Parms.SeqId = (int32_t)SeqId;
    Parms.totalReceive = (int32_t)totalReceive;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameIdcSelector::RecordIdcTimeMap(struct FString IdcName, float Time)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "RecordIdcTimeMap");
    struct
    {
        struct FString IdcName;
        float Time;
    } Parms{};
    Parms.IdcName = (struct FString)IdcName;
    Parms.Time = (float)Time;
    this->ProcessEvent(Func, &Parms);
}

uint64_t UDFMGameIdcSelector::GetUdpPlayerId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "GetUdpPlayerId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameIdcSelector::GetLocalIPAddr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "GetLocalIPAddr");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UDFMGameIdcSelector::GetIdcTimeByIdcName(struct FString IdcName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "GetIdcTimeByIdcName");
    struct
    {
        struct FString IdcName;
        float ReturnValue;
    } Parms{};
    Parms.IdcName = (struct FString)IdcName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TMap<struct FString, float> UDFMGameIdcSelector::GetIdcNameTimeMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "GetIdcNameTimeMap");
    struct
    {
        struct TMap<struct FString, float> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UDFMGameIdcSelector::GetCurrentTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "GetCurrentTime");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameIdcSelector::CleanCacheInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "CleanCacheInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameIdcSelector::AddUdpIpAddr(struct FString TheIP, int32_t ThePort, uint32_t SeqId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameIdcSelector", "AddUdpIpAddr");
    struct
    {
        struct FString TheIP;
        int32_t ThePort;
        uint32_t SeqId;
    } Parms{};
    Parms.TheIP = (struct FString)TheIP;
    Parms.ThePort = (int32_t)ThePort;
    Parms.SeqId = (uint32_t)SeqId;
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameLBS
void UDFMGameLBS::GetNearby()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLBS", "GetNearby");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameLBS::GetLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLBS", "GetLocation");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameLBS::GetIPInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLBS", "GetIPInfo");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UDFMGameLBS* UDFMGameLBS::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLBS", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameLBS* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLBS::ClearLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLBS", "ClearLocation");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UDFMGamelet
void UDFMGamelet::Tick(float fDeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "Tick");
    struct
    {
        float fDeltaTime;
    } Parms{};
    Parms.fDeltaTime = (float)fDeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::SetScriptExternalLoadDir(struct FString ExternalLoadDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "SetScriptExternalLoadDir");
    struct
    {
        struct FString ExternalLoadDir;
    } Parms{};
    Parms.ExternalLoadDir = (struct FString)ExternalLoadDir;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::SetPixUIMaxLayerId(int32_t nMaxLayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "SetPixUIMaxLayerId");
    struct
    {
        int32_t nMaxLayerId;
    } Parms{};
    Parms.nMaxLayerId = (int32_t)nMaxLayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::SetGameWidgetLoadDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "SetGameWidgetLoadDelegate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::SetFont(struct FString FontName, struct FString FontPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "SetFont");
    struct
    {
        struct FString FontName;
        struct FString FontPath;
    } Parms{};
    Parms.FontName = (struct FString)FontName;
    Parms.FontPath = (struct FString)FontPath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::SendMessageToApp(struct FString APPID, struct FString json_msg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "SendMessageToApp");
    struct
    {
        struct FString APPID;
        struct FString json_msg;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.json_msg = (struct FString)json_msg;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::RefreshUserdata(const struct TMap<struct FString, struct FString>& UserData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "RefreshUserdata");
    struct
    {
        struct TMap<struct FString, struct FString> UserData;
    } Parms{};
    Parms.UserData = (struct TMap<struct FString, struct FString>)UserData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::OpenSDK(const struct TMap<struct FString, struct FString>& UserData, int32_t Env)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "OpenSDK");
    struct
    {
        struct TMap<struct FString, struct FString> UserData;
        int32_t Env;
    } Parms{};
    Parms.UserData = (struct TMap<struct FString, struct FString>)UserData;
    Parms.Env = (int32_t)Env;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::OpenApp(struct FString APPID, struct FString OpenArgs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "OpenApp");
    struct
    {
        struct FString APPID;
        struct FString OpenArgs;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    Parms.OpenArgs = (struct FString)OpenArgs;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMGamelet::InitSDK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "InitSDK");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGamelet* UDFMGamelet::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGamelet", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGamelet* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGamelet::CloseSDK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "CloseSDK");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamelet::CloseApp(struct FString APPID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamelet", "CloseApp");
    struct
    {
        struct FString APPID;
    } Parms{};
    Parms.APPID = (struct FString)APPID;
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameLogin
void UDFMGameLogin::SwitchUser(uint8_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SwitchUser");
    struct
    {
        uint8_t State;
    } Parms{};
    Parms.State = (uint8_t)State;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SetSensitiveInfo(struct FString Json)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SetSensitiveInfo");
    struct
    {
        struct FString Json;
    } Parms{};
    Parms.Json = (struct FString)Json;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SetRewardExtraJson(struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SetRewardExtraJson");
    struct
    {
        struct FString extraJson;
    } Parms{};
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SetLIUIRoot(struct UCanvasPanel* uiRoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SetLIUIRoot");
    struct
    {
        struct UCanvasPanel* uiRoot;
    } Parms{};
    Parms.uiRoot = (struct UCanvasPanel*)uiRoot;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SetInstallChannel(struct FString channelID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SetInstallChannel");
    struct
    {
        struct FString channelID;
    } Parms{};
    Parms.channelID = (struct FString)channelID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SetHandleGameCenter(uint8_t NeedHandleGameCenter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SetHandleGameCenter");
    struct
    {
        uint8_t NeedHandleGameCenter;
    } Parms{};
    Parms.NeedHandleGameCenter = (uint8_t)NeedHandleGameCenter;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SetDiffAccountFlag(uint8_t bNeedHandleDiffAccount)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SetDiffAccountFlag");
    struct
    {
        uint8_t bNeedHandleDiffAccount;
    } Parms{};
    Parms.bNeedHandleDiffAccount = (uint8_t)bNeedHandleDiffAccount;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::SendBindReward(struct FString EventId, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "SendBindReward");
    struct
    {
        struct FString EventId;
        struct FString extraJson;
    } Parms{};
    Parms.EventId = (struct FString)EventId;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::ResetGuest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "ResetGuest");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::RegisterWeGameCallBacks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "RegisterWeGameCallBacks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::QueryUserInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "QueryUserInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::QRCodeLogin(int32_t Channel, uint8_t bServerSide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "QRCodeLogin");
    struct
    {
        int32_t Channel;
        uint8_t bServerSide;
    } Parms{};
    Parms.Channel = (int32_t)Channel;
    Parms.bServerSide = (uint8_t)bServerSide;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::OpenLILoginPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "OpenLILoginPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::OpenLIAccountCenter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "OpenLIAccountCenter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::OnCultureChanged()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "OnCultureChanged");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::Logout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "Logout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::LoginWithConfirmCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "LoginWithConfirmCode");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::LoginWithCode(int32_t channelID, struct FString Code, struct FString redirectUri)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "LoginWithCode");
    struct
    {
        int32_t channelID;
        struct FString Code;
        struct FString redirectUri;
    } Parms{};
    Parms.channelID = (int32_t)channelID;
    Parms.Code = (struct FString)Code;
    Parms.redirectUri = (struct FString)redirectUri;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::LoginChannelWithLIPass(uint8_t Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "LoginChannelWithLIPass");
    struct
    {
        uint8_t Channel;
    } Parms{};
    Parms.Channel = (uint8_t)Channel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::Login(int32_t Channel, uint8_t bServerSide)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "Login");
    struct
    {
        int32_t Channel;
        uint8_t bServerSide;
    } Parms{};
    Parms.Channel = (int32_t)Channel;
    Parms.bServerSide = (uint8_t)bServerSide;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameLogin::IsWechatInstalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "IsWechatInstalled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLogin::IsQQInstalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "IsQQInstalled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLogin::IsGooglePlayInstalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "IsGooglePlayInstalled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLogin::IsFaceBookInstalled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "IsFaceBookInstalled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLogin::INTLWeChatLogin(struct FString QRCodeBackName, struct FString QRCodeLabel, uint8_t bShowQRCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "INTLWeChatLogin");
    struct
    {
        struct FString QRCodeBackName;
        struct FString QRCodeLabel;
        uint8_t bShowQRCode;
    } Parms{};
    Parms.QRCodeBackName = (struct FString)QRCodeBackName;
    Parms.QRCodeLabel = (struct FString)QRCodeLabel;
    Parms.bShowQRCode = (uint8_t)bShowQRCode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::InitGameLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "InitGameLogin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::HandleGameCenter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "HandleGameCenter");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::HandleDiffWegameLoginErrNotify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "HandleDiffWegameLoginErrNotify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::HandleDiffAccount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "HandleDiffAccount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMGameLogin::GetStoreChannel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetStoreChannel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UDFMGameLogin::GetOnQrCodeRetDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetOnQrCodeRetDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UDFMGameLogin::GetOnLoginRetDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetOnLoginRetDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UDFMGameLogin::GetOnExtendRetDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetOnExtendRetDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UDFMGameLogin::GetOnBindAccountRetDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetOnBindAccountRetDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMulticastInlineDelegate UDFMGameLogin::GetOnBaseRetDelegate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetOnBaseRetDelegate");
    struct
    {
        struct FMulticastInlineDelegate ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLogin::GetIsFirstEnterLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetIsFirstEnterLogin");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLogin::GetHandleGameCenter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetHandleGameCenter");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameLogin::GetDiffAccountFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetDiffAccountFlag");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameLogin::GetConfigChannelID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "GetConfigChannelID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameLogin* UDFMGameLogin::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLogin", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameLogin* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameLogin::ExtendInvoke(int32_t channelID, struct FString ExtendMethodName, struct FString ParamsJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "ExtendInvoke");
    struct
    {
        int32_t channelID;
        struct FString ExtendMethodName;
        struct FString ParamsJson;
        struct FString ReturnValue;
    } Parms{};
    Parms.channelID = (int32_t)channelID;
    Parms.ExtendMethodName = (struct FString)ExtendMethodName;
    Parms.ParamsJson = (struct FString)ParamsJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLogin::DeleteLuaMoLi(struct FString DirName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLogin", "DeleteLuaMoLi");
    struct
    {
        struct FString DirName;
    } Parms{};
    Parms.DirName = (struct FString)DirName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::DeleteLuaaMoLiFile(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameLogin", "DeleteLuaaMoLiFile");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::DebugLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "DebugLogin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::ComplianceQueryUserInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "ComplianceQueryUserInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::CheckUniversalLink(struct FString Channel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "CheckUniversalLink");
    struct
    {
        struct FString Channel;
    } Parms{};
    Parms.Channel = (struct FString)Channel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::BindChannelWithLIPassQueryInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "BindChannelWithLIPassQueryInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameLogin::Bind(int32_t channelID, struct FString Permissions, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "Bind");
    struct
    {
        int32_t channelID;
        struct FString Permissions;
        struct FString extraJson;
        uint8_t ReturnValue;
    } Parms{};
    Parms.channelID = (int32_t)channelID;
    Parms.Permissions = (struct FString)Permissions;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameLogin::AutoLogin(int32_t channelID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "AutoLogin");
    struct
    {
        int32_t channelID;
    } Parms{};
    Parms.channelID = (int32_t)channelID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameLogin::AlreadyEnteredLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameLogin", "AlreadyEnteredLogin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameMaple
void UDFMGameMaple::RequestQueryLeafInfo(int32_t TreeId, int32_t LeafId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "RequestQueryLeafInfo");
    struct
    {
        int32_t TreeId;
        int32_t LeafId;
    } Parms{};
    Parms.TreeId = (int32_t)TreeId;
    Parms.LeafId = (int32_t)LeafId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameMaple::RequestMapleData(float OutTimeSec)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "RequestMapleData");
    struct
    {
        float OutTimeSec;
    } Parms{};
    Parms.OutTimeSec = (float)OutTimeSec;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameMaple::IsMapleInited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "IsMapleInited");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameMaple::InitMaple()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "InitMaple");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMGameMaple::GetServerNums()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "GetServerNums");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMapleData UDFMGameMaple::GetServerInfoByMaple(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "GetServerInfoByMaple");
    struct
    {
        int32_t Index;
        struct FMapleData ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameMaple* UDFMGameMaple::GetMapleIns(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameMaple", "GetMapleIns");
    struct
    {
        struct UObject* Context;
        struct UDFMGameMaple* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameMaple::GetIsVersionUsable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "GetIsVersionUsable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameMaple::GetIsReview()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "GetIsReview");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameMaple::GetDeleteVersionResFlag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "GetDeleteVersionResFlag");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameMaple::GetCustomData(struct FString InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "GetCustomData");
    struct
    {
        struct FString InKey;
        struct FString ReturnValue;
    } Parms{};
    Parms.InKey = (struct FString)InKey;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameMaple::EnableMaple()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "EnableMaple");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameMaple::Close()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMaple", "Close");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameMidas
void UDFMGameMidas::Reprovide()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMidas", "Reprovide");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameMidas::Pay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMidas", "Pay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameMidas::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameMidas", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameMidas* UDFMGameMidas::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameMidas", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameMidas* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameNetBar
void UDFMGameNetBar::ReqNetBarLevel(struct FString opneId, int32_t GameId, int32_t ZoneId, struct FString tickctBuffer, uint8_t isOversea)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNetBar", "ReqNetBarLevel");
    struct
    {
        struct FString opneId;
        int32_t GameId;
        int32_t ZoneId;
        struct FString tickctBuffer;
        uint8_t isOversea;
    } Parms{};
    Parms.opneId = (struct FString)opneId;
    Parms.GameId = (int32_t)GameId;
    Parms.ZoneId = (int32_t)ZoneId;
    Parms.tickctBuffer = (struct FString)tickctBuffer;
    Parms.isOversea = (uint8_t)isOversea;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameNetBar* UDFMGameNetBar::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNetBar", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameNetBar* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameNotch
void UDFMGameNotch::UpdateApplicationSafeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "UpdateApplicationSafeZone");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::SetUserCustomApplicationSafeZoneX(int32_t safeZoneX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "SetUserCustomApplicationSafeZoneX");
    struct
    {
        int32_t safeZoneX;
    } Parms{};
    Parms.safeZoneX = (int32_t)safeZoneX;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::SetMultiWindowModeStatus(uint8_t InMultiWindowModeStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "SetMultiWindowModeStatus");
    struct
    {
        uint8_t InMultiWindowModeStatus;
    } Parms{};
    Parms.InMultiWindowModeStatus = (uint8_t)InMultiWindowModeStatus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::SetFoldStatus(int32_t InFoldStatus)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "SetFoldStatus");
    struct
    {
        int32_t InFoldStatus;
    } Parms{};
    Parms.InFoldStatus = (int32_t)InFoldStatus;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::SetExpandScreenCounts(int32_t InExpandScreenCounts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "SetExpandScreenCounts");
    struct
    {
        int32_t InExpandScreenCounts;
    } Parms{};
    Parms.InExpandScreenCounts = (int32_t)InExpandScreenCounts;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::OnFoldStatusChangedGameNotch(int32_t InFoldStatus, int32_t InExpandScreenCounts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "OnFoldStatusChangedGameNotch");
    struct
    {
        int32_t InFoldStatus;
        int32_t InExpandScreenCounts;
    } Parms{};
    Parms.InFoldStatus = (int32_t)InFoldStatus;
    Parms.InExpandScreenCounts = (int32_t)InExpandScreenCounts;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::NotifyEngineSafeZoneValueChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "NotifyEngineSafeZoneValueChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameNotch::IsFoldDevice()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "IsFoldDevice");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameNotch::InitGameLaunchSafeZonePadding()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "InitGameLaunchSafeZonePadding");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameNotch::GetNotchSize(struct FString fMethodName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "GetNotchSize");
    struct
    {
        struct FString fMethodName;
    } Parms{};
    Parms.fMethodName = (struct FString)fMethodName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameNotch::GetMultiWindowModeStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "GetMultiWindowModeStatus");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameNotch::GetFoldStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "GetFoldStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameNotch::GetExpandScreenCounts()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "GetExpandScreenCounts");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameNotch::GetApplicationSafeZoneX()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "GetApplicationSafeZoneX");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameNotch* UDFMGameNotch::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameNotch", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameNotch* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameNotch::AndroidGetGlobalFoldStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "AndroidGetGlobalFoldStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameNotch::AdditionUserCustomSafeZoneX(int32_t additionZoneX)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameNotch", "AdditionUserCustomSafeZoneX");
    struct
    {
        int32_t additionZoneX;
    } Parms{};
    Parms.additionZoneX = (int32_t)additionZoneX;
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameOneSDK
void UDFMGameOneSDK::SetOpenId(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameOneSDK", "SetOpenId");
    struct
    {
        struct FString OpenId;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameOneSDK::SetEnableHttpDns(uint8_t EnableHttpDns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameOneSDK", "SetEnableHttpDns");
    struct
    {
        uint8_t EnableHttpDns;
    } Parms{};
    Parms.EnableHttpDns = (uint8_t)EnableHttpDns;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameOneSDK::InitOneSDK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameOneSDK", "InitOneSDK");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint64_t UDFMGameOneSDK::GetOpenId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameOneSDK", "GetOpenId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameOneSDK::GetAddressByName(struct FString Domain)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameOneSDK", "GetAddressByName");
    struct
    {
        struct FString Domain;
        struct FString ReturnValue;
    } Parms{};
    Parms.Domain = (struct FString)Domain;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameOneSDK* UDFMGameOneSDK::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameOneSDK", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameOneSDK* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameOneSDK::DeinitOneSDK()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameOneSDK", "DeinitOneSDK");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGamePlayerInfo
void UDFMGamePlayerInfo::SetZoneId(int32_t ZoneId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetZoneId");
    struct
    {
        int32_t ZoneId;
    } Parms{};
    Parms.ZoneId = (int32_t)ZoneId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetUsername(struct FString userName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetUsername");
    struct
    {
        struct FString userName;
    } Parms{};
    Parms.userName = (struct FString)userName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetTokenExpire(struct FString tokenExpire)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetTokenExpire");
    struct
    {
        struct FString tokenExpire;
    } Parms{};
    Parms.tokenExpire = (struct FString)tokenExpire;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetToken(struct FString Token)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetToken");
    struct
    {
        struct FString Token;
    } Parms{};
    Parms.Token = (struct FString)Token;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetTestAutoMatchId(int32_t TestAutoMatchId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetTestAutoMatchId");
    struct
    {
        int32_t TestAutoMatchId;
    } Parms{};
    Parms.TestAutoMatchId = (int32_t)TestAutoMatchId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetTestAutoMatch(uint8_t bTestAutoMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetTestAutoMatch");
    struct
    {
        uint8_t bTestAutoMatch;
    } Parms{};
    Parms.bTestAutoMatch = (uint8_t)bTestAutoMatch;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetRegisterState(uint8_t bRegisterState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetRegisterState");
    struct
    {
        uint8_t bRegisterState;
    } Parms{};
    Parms.bRegisterState = (uint8_t)bRegisterState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetRefreshToken(struct FString RefreshToken)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetRefreshToken");
    struct
    {
        struct FString RefreshToken;
    } Parms{};
    Parms.RefreshToken = (struct FString)RefreshToken;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetPlayerAbilityScore(int32_t PlayerAbilityScore)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetPlayerAbilityScore");
    struct
    {
        int32_t PlayerAbilityScore;
    } Parms{};
    Parms.PlayerAbilityScore = (int32_t)PlayerAbilityScore;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetPicUrl(struct FString PicUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetPicUrl");
    struct
    {
        struct FString PicUrl;
    } Parms{};
    Parms.PicUrl = (struct FString)PicUrl;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetPictureUrl(struct FString pictureUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetPictureUrl");
    struct
    {
        struct FString pictureUrl;
    } Parms{};
    Parms.pictureUrl = (struct FString)pictureUrl;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetPfKey(struct FString pfKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetPfKey");
    struct
    {
        struct FString pfKey;
    } Parms{};
    Parms.pfKey = (struct FString)pfKey;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetPf(struct FString pf)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetPf");
    struct
    {
        struct FString pf;
    } Parms{};
    Parms.pf = (struct FString)pf;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetPayToken(struct FString PayToken)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetPayToken");
    struct
    {
        struct FString PayToken;
    } Parms{};
    Parms.PayToken = (struct FString)PayToken;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetOpenIdStr(struct FString OpenIdStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetOpenIdStr");
    struct
    {
        struct FString OpenIdStr;
    } Parms{};
    Parms.OpenIdStr = (struct FString)OpenIdStr;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetOpenId(uint64_t OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetOpenId");
    struct
    {
        uint64_t OpenId;
    } Parms{};
    Parms.OpenId = (uint64_t)OpenId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetMatchGameMode(int32_t MatchGameMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetMatchGameMode");
    struct
    {
        int32_t MatchGameMode;
    } Parms{};
    Parms.MatchGameMode = (int32_t)MatchGameMode;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetLaunchFrom(int32_t launchFrom)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetLaunchFrom");
    struct
    {
        int32_t launchFrom;
    } Parms{};
    Parms.launchFrom = (int32_t)launchFrom;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetCoreUserId(struct FString coreUserId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetCoreUserId");
    struct
    {
        struct FString coreUserId;
    } Parms{};
    Parms.coreUserId = (struct FString)coreUserId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetConnectedUrl(struct FString ConnectedUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetConnectedUrl");
    struct
    {
        struct FString ConnectedUrl;
    } Parms{};
    Parms.ConnectedUrl = (struct FString)ConnectedUrl;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetConnectedRealIp(struct FString ConnectedRealIp)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetConnectedRealIp");
    struct
    {
        struct FString ConnectedRealIp;
    } Parms{};
    Parms.ConnectedRealIp = (struct FString)ConnectedRealIp;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetChannelID(int32_t channelID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetChannelID");
    struct
    {
        int32_t channelID;
    } Parms{};
    Parms.channelID = (int32_t)channelID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetAreaId(int32_t AreaID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetAreaId");
    struct
    {
        int32_t AreaID;
    } Parms{};
    Parms.AreaID = (int32_t)AreaID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePlayerInfo::SetAccessToken(struct FString AccessToken)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "SetAccessToken");
    struct
    {
        struct FString AccessToken;
    } Parms{};
    Parms.AccessToken = (struct FString)AccessToken;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGamePlayerInfo::IsTestAutoMatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "IsTestAutoMatch");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGamePlayerInfo::IsRegisterState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "IsRegisterState");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetZoneId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetZoneId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetUsername()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetUsername");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetTokenExpire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetTokenExpire");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetToken");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetTestAutoMatchId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetTestAutoMatchId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetRefreshToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetRefreshToken");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetPlayerAbilityScore()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetPlayerAbilityScore");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetPicUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetPicUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetPictureUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetPictureUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetPfKey()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetPfKey");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetPf()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetPf");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetPayToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetPayToken");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetOpenIdStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetOpenIdStr");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UDFMGamePlayerInfo::GetOpenId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetOpenId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetNetWorkDetailInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetNetWorkDetailInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetMatchGameMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetMatchGameMode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetLaunchFrom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetLaunchFrom");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetCoreUserId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetCoreUserId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetConnectedUrl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetConnectedUrl");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetConnectedRealIp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetConnectedRealIp");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetChannelID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetChannelID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGamePlayerInfo::GetAreaId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetAreaId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGamePlayerInfo::GetAccessToken()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePlayerInfo", "GetAccessToken");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGamePlayerInfo* UDFMGamePlayerInfo::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGamePlayerInfo", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGamePlayerInfo* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameProtocol
void UDFMGameProtocol::OnStateChanged(const struct FConnectorResultInfo& ConnectorResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameProtocol", "OnStateChanged");
    struct
    {
        struct FConnectorResultInfo ConnectorResultInfo;
    } Parms{};
    Parms.ConnectorResultInfo = (struct FConnectorResultInfo)ConnectorResultInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameProtocol::OnRelayConnected(const struct FConnectorResultInfo& ConnectorResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameProtocol", "OnRelayConnected");
    struct
    {
        struct FConnectorResultInfo ConnectorResultInfo;
    } Parms{};
    Parms.ConnectorResultInfo = (struct FConnectorResultInfo)ConnectorResultInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameProtocol::OnDisconnect(const struct FConnectorResultInfo& ConnectorResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameProtocol", "OnDisconnect");
    struct
    {
        struct FConnectorResultInfo ConnectorResultInfo;
    } Parms{};
    Parms.ConnectorResultInfo = (struct FConnectorResultInfo)ConnectorResultInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameProtocol::OnConnected(const struct FConnectorResultInfo& ConnectorResultInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameProtocol", "OnConnected");
    struct
    {
        struct FConnectorResultInfo ConnectorResultInfo;
    } Parms{};
    Parms.ConnectorResultInfo = (struct FConnectorResultInfo)ConnectorResultInfo;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameProtocol::OnConnectBegin(const struct FConnectServerInfo& ConnectServerInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameProtocol", "OnConnectBegin");
    struct
    {
        struct FConnectServerInfo ConnectServerInfo;
    } Parms{};
    Parms.ConnectServerInfo = (struct FConnectServerInfo)ConnectServerInfo;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGameProtocol* UDFMGameProtocol::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameProtocol", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameProtocol* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGamePush
void UDFMGamePush::UnregisterPush()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePush", "UnregisterPush");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePush::Reset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePush", "Reset");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePush::RegisterPush(struct FString Account)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePush", "RegisterPush");
    struct
    {
        struct FString Account;
    } Parms{};
    Parms.Account = (struct FString)Account;
    this->ProcessEvent(Func, &Parms);
}

struct UDFMGamePush* UDFMGamePush::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGamePush", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGamePush* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGamePush::ClearLocalNotifications()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePush", "ClearLocalNotifications");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGamePush::AddLocalNotification()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGamePush", "AddLocalNotification");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameReport
void UDFMGameReport::SetDeviceLevel(int32_t Level)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "SetDeviceLevel");
    struct
    {
        int32_t Level;
    } Parms{};
    Parms.Level = (int32_t)Level;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::SetCrashSightAppVersion(struct FString CrashSightAppVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "SetCrashSightAppVersion");
    struct
    {
        struct FString CrashSightAppVersion;
    } Parms{};
    Parms.CrashSightAppVersion = (struct FString)CrashSightAppVersion;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::ReportRevenue(struct FString EventName, struct FString Currency, struct FString RevenueValue, struct TMap<struct FString, struct FString> ParamsMap, struct FString SpecificChannel, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "ReportRevenue");
    struct
    {
        struct FString EventName;
        struct FString Currency;
        struct FString RevenueValue;
        struct TMap<struct FString, struct FString> ParamsMap;
        struct FString SpecificChannel;
        struct FString extraJson;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Currency = (struct FString)Currency;
    Parms.RevenueValue = (struct FString)RevenueValue;
    Parms.ParamsMap = (struct TMap<struct FString, struct FString>)ParamsMap;
    Parms.SpecificChannel = (struct FString)SpecificChannel;
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::ReportEvent(struct FString EventName, struct TMap<struct FString, struct FString> Params, struct FString SpecificChannel, uint8_t IsRealTime, struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameReport", "ReportEvent");
    struct
    {
        struct FString EventName;
        struct TMap<struct FString, struct FString> Params;
        struct FString SpecificChannel;
        uint8_t IsRealTime;
        struct FString extraJson;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Params = (struct TMap<struct FString, struct FString>)Params;
    Parms.SpecificChannel = (struct FString)SpecificChannel;
    Parms.IsRealTime = (uint8_t)IsRealTime;
    Parms.extraJson = (struct FString)extraJson;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::ReportBinary(struct FString EventName, struct FString Data, int64_t Length, struct FString SpecificChannel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "ReportBinary");
    struct
    {
        struct FString EventName;
        struct FString Data;
        int64_t Length;
        struct FString SpecificChannel;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Data = (struct FString)Data;
    Parms.Length = (int64_t)Length;
    Parms.SpecificChannel = (struct FString)SpecificChannel;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::InitGameReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "InitGameReport");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameReport::GetDeviceInfo(struct FString extraJson)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "GetDeviceInfo");
    struct
    {
        struct FString extraJson;
        struct FString ReturnValue;
    } Parms{};
    Parms.extraJson = (struct FString)extraJson;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameReport* UDFMGameReport::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameReport", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameReport* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameReport::FlushINTLEvents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "FlushINTLEvents");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::CollectionStop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "CollectionStop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameReport::CollectionResume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameReport", "CollectionResume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameTDM
void UDFMGameTDM::TDMReportFile(struct FString fFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "TDMReportFile");
    struct
    {
        struct FString fFilePath;
    } Parms{};
    Parms.fFilePath = (struct FString)fFilePath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTDM::TDMReportBinary(struct FString fBinary)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "TDMReportBinary");
    struct
    {
        struct FString fBinary;
    } Parms{};
    Parms.fBinary = (struct FString)fBinary;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTDM::TDMPluginReportStrStrEvent(struct FString EventName, struct TMap<struct FString, struct FString> Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "TDMPluginReportStrStrEvent");
    struct
    {
        struct FString EventName;
        struct TMap<struct FString, struct FString> Data;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Data = (struct TMap<struct FString, struct FString>)Data;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTDM::TDMPluginReportStrIntEvent(struct FString EventName, struct TMap<int32_t, int32_t> Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "TDMPluginReportStrIntEvent");
    struct
    {
        struct FString EventName;
        struct TMap<int32_t, int32_t> Data;
    } Parms{};
    Parms.EventName = (struct FString)EventName;
    Parms.Data = (struct TMap<int32_t, int32_t>)Data;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTDM::LuaCallInitTDM(uint8_t bEnableReport, uint8_t bEnableDeviceInfo, int32_t NewLogLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "LuaCallInitTDM");
    struct
    {
        uint8_t bEnableReport;
        uint8_t bEnableDeviceInfo;
        int32_t NewLogLevel;
    } Parms{};
    Parms.bEnableReport = (uint8_t)bEnableReport;
    Parms.bEnableDeviceInfo = (uint8_t)bEnableDeviceInfo;
    Parms.NewLogLevel = (int32_t)NewLogLevel;
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameTDM::GetUserAgent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetUserAgent");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetOAID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetOAID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetIEMI()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetIEMI");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetIDFV()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetIDFV");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetIDFA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetIDFA");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetDeiceInfo(struct FString DeviceInfoName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetDeiceInfo");
    struct
    {
        struct FString DeviceInfoName;
        struct FString ReturnValue;
    } Parms{};
    Parms.DeviceInfoName = (struct FString)DeviceInfoName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetCAID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetCAID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTDM::GetAppleASA()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "GetAppleASA");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameTDM* UDFMGameTDM::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameTDM", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameTDM* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameTDM::AsyncGetAppleASA(struct FString AdsUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTDM", "AsyncGetAppleASA");
    struct
    {
        struct FString AdsUrl;
    } Parms{};
    Parms.AdsUrl = (struct FString)AdsUrl;
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameTss
void UDFMGameTss::SetUserInfo(int32_t entry_id, struct FString open_id)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "SetUserInfo");
    struct
    {
        int32_t entry_id;
        struct FString open_id;
    } Parms{};
    Parms.entry_id = (int32_t)entry_id;
    Parms.open_id = (struct FString)open_id;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::SetUserAgreedPS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "SetUserAgreedPS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::SetSDKIp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "SetSDKIp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::SetSDKCs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "SetSDKCs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::SetSDKCdn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "SetSDKCdn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::OnWindowDeactived()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "OnWindowDeactived");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::OnWindowActived()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "OnWindowActived");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::OnResume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "OnResume");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::OnRecvTssData_FString(struct FString Data)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "OnRecvTssData_FString");
    struct
    {
        struct FString Data;
    } Parms{};
    Parms.Data = (struct FString)Data;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::OnPause()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "OnPause");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::Logout()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "Logout");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::InitTss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "InitTss");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameTss::GetSdkCoreData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "GetSdkCoreData");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameTss::GetReportData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "GetReportData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameTss::GetLightFeatureHeartBeatData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "GetLightFeatureHeartBeatData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMGameTss::GetLightFeatureData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "GetLightFeatureData");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameTss::GetEmulatorName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "GetEmulatorName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameTss* UDFMGameTss::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameTss", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameTss* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameTss::EnableTPConnector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "EnableTPConnector");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameTss::DeinitTss()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameTss", "DeinitTss");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMGameUrlGenerator
struct UDFMGameUrlGenerator* UDFMGameUrlGenerator::Get(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameUrlGenerator", "Get");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameUrlGenerator* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQueryUIDRes UDFMGameUrlGenerator::GenerateQueryRes(struct FString ResBody)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameUrlGenerator", "GenerateQueryRes");
    struct
    {
        struct FString ResBody;
        struct FQueryUIDRes ReturnValue;
    } Parms{};
    Parms.ResBody = (struct FString)ResBody;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQueryPS5PlatformBlockListInfoRes UDFMGameUrlGenerator::GenerateQueryPS5PlatformBlockListRes(struct FString ResBody)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameUrlGenerator", "GenerateQueryPS5PlatformBlockListRes");
    struct
    {
        struct FString ResBody;
        struct FQueryPS5PlatformBlockListInfoRes ReturnValue;
    } Parms{};
    Parms.ResBody = (struct FString)ResBody;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQueryUIDInfo UDFMGameUrlGenerator::CreateQueryUIDInfo(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameUrlGenerator", "CreateQueryUIDInfo");
    struct
    {
        struct FString OpenId;
        struct FQueryUIDInfo ReturnValue;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQueryPS5PlatformBlockListInfo UDFMGameUrlGenerator::CreateQueryPS5BlockListInfo(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameUrlGenerator", "CreateQueryPS5BlockListInfo");
    struct
    {
        struct FString OpenId;
        struct FQueryPS5PlatformBlockListInfo ReturnValue;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMGameVoice
void UDFMGameVoice::UploadRecordedFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "UploadRecordedFile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::TextTranslate(struct FString Text, int32_t SrcLang, int32_t TargetLang, int32_t TimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "TextTranslate");
    struct
    {
        struct FString Text;
        int32_t SrcLang;
        int32_t TargetLang;
        int32_t TimeoutMS;
    } Parms{};
    Parms.Text = (struct FString)Text;
    Parms.SrcLang = (int32_t)SrcLang;
    Parms.TargetLang = (int32_t)TargetLang;
    Parms.TimeoutMS = (int32_t)TimeoutMS;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::StopRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "StopRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::StopPlayRecordFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "StopPlayRecordFile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::StartRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "StartRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SpeechTranslate(struct FString FileId, int32_t SrcLang, int32_t TargetLang, int32_t TransType, int32_t TimeoutMS)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SpeechTranslate");
    struct
    {
        struct FString FileId;
        int32_t SrcLang;
        int32_t TargetLang;
        int32_t TransType;
        int32_t TimeoutMS;
    } Parms{};
    Parms.FileId = (struct FString)FileId;
    Parms.SrcLang = (int32_t)SrcLang;
    Parms.TargetLang = (int32_t)TargetLang;
    Parms.TransType = (int32_t)TransType;
    Parms.TimeoutMS = (int32_t)TimeoutMS;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SpeechToText(struct FString FileId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SpeechToText");
    struct
    {
        struct FString FileId;
    } Parms{};
    Parms.FileId = (struct FString)FileId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetVoiceLog(uint8_t bEnableSdkLog, uint8_t bEnableDebugLog, uint8_t bEnableInfoLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetVoiceLog");
    struct
    {
        uint8_t bEnableSdkLog;
        uint8_t bEnableDebugLog;
        uint8_t bEnableInfoLog;
    } Parms{};
    Parms.bEnableSdkLog = (uint8_t)bEnableSdkLog;
    Parms.bEnableDebugLog = (uint8_t)bEnableDebugLog;
    Parms.bEnableInfoLog = (uint8_t)bEnableInfoLog;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetTimeOut(int32_t TimeoutNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetTimeOut");
    struct
    {
        int32_t TimeoutNum;
    } Parms{};
    Parms.TimeoutNum = (int32_t)TimeoutNum;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetSpeakerVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetSpeakerVolume");
    struct
    {
        int32_t Volume;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetSpeakerMaxVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetSpeakerMaxVolume");
    struct
    {
        int32_t Volume;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetSpeakerButtonType(int32_t ButtonType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetSpeakerButtonType");
    struct
    {
        int32_t ButtonType;
    } Parms{};
    Parms.ButtonType = (int32_t)ButtonType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetRoomMemberVolume(struct FString OpenId, int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetRoomMemberVolume");
    struct
    {
        struct FString OpenId;
        int32_t Volume;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetPlayerMuteState(struct FString OpenId, uint8_t bMute)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetPlayerMuteState");
    struct
    {
        struct FString OpenId;
        uint8_t bMute;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    Parms.bMute = (uint8_t)bMute;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetMossAILocalEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetMossAILocalEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetMicrophoneVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetMicrophoneVolume");
    struct
    {
        int32_t Volume;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetMicrophoneMaxVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetMicrophoneMaxVolume");
    struct
    {
        int32_t Volume;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetMicrophoneButtonType(int32_t ButtonType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetMicrophoneButtonType");
    struct
    {
        int32_t ButtonType;
    } Parms{};
    Parms.ButtonType = (int32_t)ButtonType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetMicrophoneButtonPress(uint8_t bPress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetMicrophoneButtonPress");
    struct
    {
        uint8_t bPress;
    } Parms{};
    Parms.bPress = (uint8_t)bPress;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetHeadSetState(uint8_t bState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetHeadSetState");
    struct
    {
        uint8_t bState;
    } Parms{};
    Parms.bState = (uint8_t)bState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetGVoiceURL(struct FString URL)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetGVoiceURL");
    struct
    {
        struct FString URL;
    } Parms{};
    Parms.URL = (struct FString)URL;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetDefaultMemberVolume(int32_t Volume)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetDefaultMemberVolume");
    struct
    {
        int32_t Volume;
    } Parms{};
    Parms.Volume = (int32_t)Volume;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SetBluetoothState(uint8_t bState)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SetBluetoothState");
    struct
    {
        uint8_t bState;
    } Parms{};
    Parms.bState = (uint8_t)bState;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SendMessageToMossAI(struct FString requestId, struct FString Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SendMessageToMossAI");
    struct
    {
        struct FString requestId;
        struct FString Context;
    } Parms{};
    Parms.requestId = (struct FString)requestId;
    Parms.Context = (struct FString)Context;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::SelectDevice(int32_t DeviceType, struct FString DeviceID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "SelectDevice");
    struct
    {
        int32_t DeviceType;
        struct FString DeviceID;
    } Parms{};
    Parms.DeviceType = (int32_t)DeviceType;
    Parms.DeviceID = (struct FString)DeviceID;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::RSTSStopRecording()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "RSTSStopRecording");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::RSTSSpeechToText(int32_t SrcLang, struct TArray<int32_t>& TargetLangs, int32_t TimeoutMS, struct FString RecordFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "RSTSSpeechToText");
    struct
    {
        int32_t SrcLang;
        struct TArray<int32_t> TargetLangs;
        int32_t TimeoutMS;
        struct FString RecordFilePath;
    } Parms{};
    Parms.SrcLang = (int32_t)SrcLang;
    Parms.TimeoutMS = (int32_t)TimeoutMS;
    Parms.RecordFilePath = (struct FString)RecordFilePath;
    this->ProcessEvent(Func, &Parms);
    TargetLangs = Parms.TargetLangs;
}

void UDFMGameVoice::RSTSSpeechToSpeech(int32_t SrcLang, struct TArray<int32_t>& TargetLangs, struct FString DirPath, int32_t VoiceType, float VoiceRate, float Volume, int32_t TimeoutMS, struct FString RecordFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "RSTSSpeechToSpeech");
    struct
    {
        int32_t SrcLang;
        struct TArray<int32_t> TargetLangs;
        struct FString DirPath;
        int32_t VoiceType;
        float VoiceRate;
        float Volume;
        int32_t TimeoutMS;
        struct FString RecordFilePath;
    } Parms{};
    Parms.SrcLang = (int32_t)SrcLang;
    Parms.DirPath = (struct FString)DirPath;
    Parms.VoiceType = (int32_t)VoiceType;
    Parms.VoiceRate = (float)VoiceRate;
    Parms.Volume = (float)Volume;
    Parms.TimeoutMS = (int32_t)TimeoutMS;
    Parms.RecordFilePath = (struct FString)RecordFilePath;
    this->ProcessEvent(Func, &Parms);
    TargetLangs = Parms.TargetLangs;
}

void UDFMGameVoice::ResumeVoiceEngine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ResumeVoiceEngine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::ResetForbidAllState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ResetForbidAllState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::ResetButtonType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ResetButtonType");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMGameVoice::ReportPlayer(struct TArray<struct FString>& PlayerList, struct FString& Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ReportPlayer");
    struct
    {
        struct TArray<struct FString> PlayerList;
        struct FString Info;
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    PlayerList = Parms.PlayerList;
    Info = Parms.Info;
    return Parms.ReturnValue;
}

void UDFMGameVoice::QuitRoomByType(int32_t RoomType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "QuitRoomByType");
    struct
    {
        int32_t RoomType;
    } Parms{};
    Parms.RoomType = (int32_t)RoomType;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::QuitRoom(struct FString RoomName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "QuitRoom");
    struct
    {
        struct FString RoomName;
    } Parms{};
    Parms.RoomName = (struct FString)RoomName;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::QuitAllRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "QuitAllRoom");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::PlayRecordedFile(struct FString FileId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "PlayRecordedFile");
    struct
    {
        struct FString FileId;
    } Parms{};
    Parms.FileId = (struct FString)FileId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::PauseVoiceEngine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "PauseVoiceEngine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OpenMic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OpenMic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OnRep_PlayerSpeakerButtonTypes(const struct TMap<struct FString, int32_t>& ButtonTypes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OnRep_PlayerSpeakerButtonTypes");
    struct
    {
        struct TMap<struct FString, int32_t> ButtonTypes;
    } Parms{};
    Parms.ButtonTypes = (struct TMap<struct FString, int32_t>)ButtonTypes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OnRep_PlayerMicrophoneButtonTypes(const struct TMap<struct FString, int32_t>& ButtonTypes)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OnRep_PlayerMicrophoneButtonTypes");
    struct
    {
        struct TMap<struct FString, int32_t> ButtonTypes;
    } Parms{};
    Parms.ButtonTypes = (struct TMap<struct FString, int32_t>)ButtonTypes;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OnQuitGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OnQuitGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OnEnterGame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OnEnterGame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OnDownloaderResult(EDownloadResult Result, struct FString LastModified)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OnDownloaderResult");
    struct
    {
        enum EDownloadResult Result;
        struct FString LastModified;
    } Parms{};
    Parms.Result = (enum EDownloadResult)Result;
    Parms.LastModified = (struct FString)LastModified;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::OnDownloaderProgress(int64_t BytesSent, int64_t BytesReceived, int64_t ContentLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "OnDownloaderProgress");
    struct
    {
        int64_t BytesSent;
        int64_t BytesReceived;
        int64_t ContentLength;
    } Parms{};
    Parms.BytesSent = (int64_t)BytesSent;
    Parms.BytesReceived = (int64_t)BytesReceived;
    Parms.ContentLength = (int64_t)ContentLength;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::JoinRoom(struct FString RoomName, int32_t RoomChannel, int32_t RoomType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "JoinRoom");
    struct
    {
        struct FString RoomName;
        int32_t RoomChannel;
        int32_t RoomType;
    } Parms{};
    Parms.RoomName = (struct FString)RoomName;
    Parms.RoomChannel = (int32_t)RoomChannel;
    Parms.RoomType = (int32_t)RoomType;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMGameVoice::IsSpeaking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsSpeaking");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsSpeakerOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsSpeakerOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsSdkEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsSdkEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsRoomMemberMicrophoneOpen(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsRoomMemberMicrophoneOpen");
    struct
    {
        struct FString OpenId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsRoomMemberForbidden(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsRoomMemberForbidden");
    struct
    {
        struct FString OpenId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsPressButtonType(int32_t ButtonType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsPressButtonType");
    struct
    {
        int32_t ButtonType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ButtonType = (int32_t)ButtonType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsPlayerSpeaking(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsPlayerSpeaking");
    struct
    {
        struct FString OpenId;
        uint8_t ReturnValue;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsMicrophoneOpen()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsMicrophoneOpen");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsMicrophoneAvailable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsMicrophoneAvailable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsInAnyRoom()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsInAnyRoom");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsForbidAllRoomMembers()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsForbidAllRoomMembers");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMGameVoice::IsEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "IsEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameVoice::InvokeWithStr(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2, struct FString str)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "InvokeWithStr");
    struct
    {
        uint32_t nCmd;
        uint32_t nParam1;
        uint32_t nParam2;
        struct FString str;
    } Parms{};
    Parms.nCmd = (uint32_t)nCmd;
    Parms.nParam1 = (uint32_t)nParam1;
    Parms.nParam2 = (uint32_t)nParam2;
    Parms.str = (struct FString)str;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::Invoke(uint32_t nCmd, uint32_t nParam1, uint32_t nParam2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "Invoke");
    struct
    {
        uint32_t nCmd;
        uint32_t nParam1;
        uint32_t nParam2;
    } Parms{};
    Parms.nCmd = (uint32_t)nCmd;
    Parms.nParam1 = (uint32_t)nParam1;
    Parms.nParam2 = (uint32_t)nParam2;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::InitVoiceEngine(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "InitVoiceEngine");
    struct
    {
        struct FString OpenId;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::HandleReconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "HandleReconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMGameVoice::GetSpeakerButtonType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetSpeakerButtonType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameVoice::GetSelectDeviceIndex(int32_t DeviceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetSelectDeviceIndex");
    struct
    {
        int32_t DeviceType;
        int32_t ReturnValue;
    } Parms{};
    Parms.DeviceType = (int32_t)DeviceType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameVoice::GetRoomMemberVolume(struct FString OpenId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetRoomMemberVolume");
    struct
    {
        struct FString OpenId;
        int32_t ReturnValue;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameVoice::GetRoomChannelFromButtonType(int32_t ButtonType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetRoomChannelFromButtonType");
    struct
    {
        int32_t ButtonType;
        int32_t ReturnValue;
    } Parms{};
    Parms.ButtonType = (int32_t)ButtonType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameVoice::GetRoomByChannel(int32_t RoomChannel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetRoomByChannel");
    struct
    {
        int32_t RoomChannel;
        struct FString ReturnValue;
    } Parms{};
    Parms.RoomChannel = (int32_t)RoomChannel;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameVoice::GetOpenId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetOpenId");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMGameVoice::GetMossOpusFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetMossOpusFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameVoice::GetMicrophoneButtonType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetMicrophoneButtonType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameVoice::GetDeviceCountAsync(int32_t DeviceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetDeviceCountAsync");
    struct
    {
        int32_t DeviceType;
    } Parms{};
    Parms.DeviceType = (int32_t)DeviceType;
    this->ProcessEvent(Func, &Parms);
}

int32_t UDFMGameVoice::GetDeviceCount(int32_t DeviceType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetDeviceCount");
    struct
    {
        int32_t DeviceType;
        int32_t ReturnValue;
    } Parms{};
    Parms.DeviceType = (int32_t)DeviceType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMGameVoice::GetAudioDeviceConnectionState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "GetAudioDeviceConnectionState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameVoice* UDFMGameVoice::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMGameVoice", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDFMGameVoice* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMGameVoice::ForbidRoomMemberVoice(struct FString OpenId, uint8_t bForbid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ForbidRoomMemberVoice");
    struct
    {
        struct FString OpenId;
        uint8_t bForbid;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    Parms.bForbid = (uint8_t)bForbid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::ForbidAllRoomMembersVoice(uint8_t bForbid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ForbidAllRoomMembersVoice");
    struct
    {
        uint8_t bForbid;
    } Parms{};
    Parms.bForbid = (uint8_t)bForbid;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::EnableMultiRoom(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "EnableMultiRoom");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::EnableCivil(uint8_t bEnableRealTime, uint8_t bEnableMessage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "EnableCivil");
    struct
    {
        uint8_t bEnableRealTime;
        uint8_t bEnableMessage;
    } Parms{};
    Parms.bEnableRealTime = (uint8_t)bEnableRealTime;
    Parms.bEnableMessage = (uint8_t)bEnableMessage;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::EnableBluetoothSCO(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "EnableBluetoothSCO");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::DownloadRecordedFile(struct FString FileId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "DownloadRecordedFile");
    struct
    {
        struct FString FileId;
    } Parms{};
    Parms.FileId = (struct FString)FileId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::DownloadMossAIResource(struct FString URL, struct FString Hash, struct FString SavePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "DownloadMossAIResource");
    struct
    {
        struct FString URL;
        struct FString Hash;
        struct FString SavePath;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Hash = (struct FString)Hash;
    Parms.SavePath = (struct FString)SavePath;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::DescribleDevice(int32_t DeviceType, int32_t Index, struct FString& DeviceID, struct FString& DeviceName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "DescribleDevice");
    struct
    {
        int32_t DeviceType;
        int32_t Index;
        struct FString DeviceID;
        struct FString DeviceName;
    } Parms{};
    Parms.DeviceType = (int32_t)DeviceType;
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    DeviceID = Parms.DeviceID;
    DeviceName = Parms.DeviceName;
}

void UDFMGameVoice::CloseMic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "CloseMic");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameVoice::ClearMossAIData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameVoice", "ClearMossAIData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMLocalizationCrashsightManager
uint8_t UDFMLocalizationCrashsightManager::ToggleInvalidKeyReport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMLocalizationCrashsightManager", "ToggleInvalidKeyReport");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDolphinManager
void UDolphinManager::PrepareDolphinConfig_Debug()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "PrepareDolphinConfig_Debug");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::PrepareDolphinConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "PrepareDolphinConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::OnUpdateFailWindowCallBack(uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "OnUpdateFailWindowCallBack");
    struct
    {
        uint8_t Result;
    } Parms{};
    Parms.Result = (uint8_t)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::OnUpdateConfirmWindowCallBack(uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "OnUpdateConfirmWindowCallBack");
    struct
    {
        uint8_t Result;
    } Parms{};
    Parms.Result = (uint8_t)Result;
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::OnAnnounceConfirmWindowCallBack(uint8_t Result)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "OnAnnounceConfirmWindowCallBack");
    struct
    {
        uint8_t Result;
    } Parms{};
    Parms.Result = (uint8_t)Result;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDolphinManager::IsEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "IsEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDolphinManager::Init()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "Init");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UDolphinManager::GetNetWorkDetailInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "GetNetWorkDetailInfo");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDolphinManager::GetErrorType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "GetErrorType");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDolphinManager::GetErrorCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "GetErrorCode");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDolphinManager* UDolphinManager::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DolphinManager", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UDolphinManager* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDolphinManager::FinishUpdateStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "FinishUpdateStep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::Deinit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "Deinit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::CreateDolphin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "CreateDolphin");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::ClearSkipStepList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "ClearSkipStepList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::ClearFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "ClearFiles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::BeginUpdateStep_Debug(EDolphinVersionUpdateStep Step)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "BeginUpdateStep_Debug");
    struct
    {
        enum EDolphinVersionUpdateStep Step;
    } Parms{};
    Parms.Step = (enum EDolphinVersionUpdateStep)Step;
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::BeginUpdateStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "BeginUpdateStep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDolphinManager::AddSkipStep(EDolphinVersionUpdateStep Step)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DolphinManager", "AddSkipStep");
    struct
    {
        enum EDolphinVersionUpdateStep Step;
    } Parms{};
    Parms.Step = (enum EDolphinVersionUpdateStep)Step;
    this->ProcessEvent(Func, &Parms);
}

// IGameIdcSelectorInterface
uint8_t IGameIdcSelectorInterface::RoundTripDirRequest()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameIdcSelectorInterface", "RoundTripDirRequest");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameSDKInitUtil
uint8_t UGameSDKInitUtil::IsRuleEffective(const struct FGameSDKInitRuleRow& ruleRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKInitUtil", "IsRuleEffective");
    struct
    {
        struct FGameSDKInitRuleRow ruleRow;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ruleRow = (struct FGameSDKInitRuleRow)ruleRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameSDKInitUtil::IsRuleDisableInit(const struct FGameSDKInitRuleRow& ruleRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKInitUtil", "IsRuleDisableInit");
    struct
    {
        struct FGameSDKInitRuleRow ruleRow;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ruleRow = (struct FGameSDKInitRuleRow)ruleRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameSDKInitUtil::GetRuleInfo(const struct FGameSDKInitRuleRow& ruleRow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKInitUtil", "GetRuleInfo");
    struct
    {
        struct FGameSDKInitRuleRow ruleRow;
        struct FString ReturnValue;
    } Parms{};
    Parms.ruleRow = (struct FGameSDKInitRuleRow)ruleRow;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameSDKInitRuleRow UGameSDKInitUtil::GetRule(EGameSDKType TargetSDK)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKInitUtil", "GetRule");
    struct
    {
        enum EGameSDKType TargetSDK;
        struct FGameSDKInitRuleRow ReturnValue;
    } Parms{};
    Parms.TargetSDK = (enum EGameSDKType)TargetSDK;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGameSDKManager
void UGameSDKManager::UnloadWebBrowser()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "UnloadWebBrowser");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::ShowWaitingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "ShowWaitingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::ShowReconnectView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "ShowReconnectView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::ShowDefaultBackground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "ShowDefaultBackground");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UCommonTipView* UGameSDKManager::ShowCommonTip(uint8_t bIgnoreCache)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "ShowCommonTip");
    struct
    {
        uint8_t bIgnoreCache;
        struct UCommonTipView* ReturnValue;
    } Parms{};
    Parms.bIgnoreCache = (uint8_t)bIgnoreCache;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameSDKManager::SetupBlackList(struct FString BlackListStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "SetupBlackList");
    struct
    {
        struct FString BlackListStr;
    } Parms{};
    Parms.BlackListStr = (struct FString)BlackListStr;
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::SetOpenId(struct FString ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "SetOpenId");
    struct
    {
        struct FString ID;
    } Parms{};
    Parms.ID = (struct FString)ID;
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::RemoveWaitingView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "RemoveWaitingView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::RemoveReconnectView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "RemoveReconnectView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::RemoveLoginTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "RemoveLoginTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::RemoveDefaultBackground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "RemoveDefaultBackground");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::QuitGame(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "QuitGame");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::PreLoadWaitView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "PreLoadWaitView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::PreLoadReconnectView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "PreLoadReconnectView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::OpenLoginTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "OpenLoginTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::OnProcessPersistentRootFinished(struct ULuaUIBaseView* PersistentRoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "OnProcessPersistentRootFinished");
    struct
    {
        struct ULuaUIBaseView* PersistentRoot;
    } Parms{};
    Parms.PersistentRoot = (struct ULuaUIBaseView*)PersistentRoot;
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::Log(struct FString Info)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "Log");
    struct
    {
        struct FString Info;
    } Parms{};
    Parms.Info = (struct FString)Info;
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::LoadWebBrowser()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "LoadWebBrowser");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UGameSDKManager::IsValidInstallPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "IsValidInstallPath");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameSDKManager::IsNetworkStateConnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "IsNetworkStateConnect");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameSDKManager::IsNetConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "IsNetConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameSDKManager::InitSDKPlugins()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "InitSDKPlugins");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::InitGCloudLogLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "InitGCloudLogLevel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::InitGCloud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "InitGCloud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFMSDKBase* UGameSDKManager::GetSDKComponent(struct UObject* componentCls)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "GetSDKComponent");
    struct
    {
        struct UObject* componentCls;
        struct UDFMSDKBase* ReturnValue;
    } Parms{};
    Parms.componentCls = (struct UObject*)componentCls;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGameSDKManager::GetSavedPath(uint8_t bInternal, struct FString AdditionPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "GetSavedPath");
    struct
    {
        uint8_t bInternal;
        struct FString AdditionPath;
        struct FString ReturnValue;
    } Parms{};
    Parms.bInternal = (uint8_t)bInternal;
    Parms.AdditionPath = (struct FString)AdditionPath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t UGameSDKManager::GetOpenId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "GetOpenId");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameVoice* UGameSDKManager::GetGameVoiceIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameVoiceIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameVoice* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameUrlGenerator* UGameSDKManager::GetGameUrlGenerator(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameUrlGenerator");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameUrlGenerator* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameTss* UGameSDKManager::GetGameTssIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameTssIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameTss* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameTDM* UGameSDKManager::GetGameTDMIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameTDMIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameTDM* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameReport* UGameSDKManager::GetGameReportIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameReportIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameReport* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGamePush* UGameSDKManager::GetGamePush(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGamePush");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGamePush* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPufferManager* UGameSDKManager::GetGamePufferManagerIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGamePufferManagerIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UPufferManager* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameProtocol* UGameSDKManager::GetGameProtocolIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameProtocolIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameProtocol* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGamePlayerInfo* UGameSDKManager::GetGamePlayerInfoIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGamePlayerInfoIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGamePlayerInfo* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameOneSDK* UGameSDKManager::GetGameOneSDKIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameOneSDKIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameOneSDK* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameNotch* UGameSDKManager::GetGameNotchIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameNotchIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameNotch* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameNetBar* UGameSDKManager::GetGameNetbarIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameNetbarIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameNetBar* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameMidas* UGameSDKManager::GetGameMidas(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameMidas");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameMidas* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameLogin* UGameSDKManager::GetGameLoginIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameLoginIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameLogin* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGamelet* UGameSDKManager::GetGameletIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameletIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGamelet* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameLBS* UGameSDKManager::GetGameLBSIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameLBSIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameLBS* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameIdcSelector* UGameSDKManager::GetGameIdcSelectorIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameIdcSelectorIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameIdcSelector* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameGPM* UGameSDKManager::GetGameGPMIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameGPMIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameGPM* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameGarena* UGameSDKManager::GetGameGarena(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameGarena");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameGarena* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameFriend* UGameSDKManager::GetGameFriendIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameFriendIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameFriend* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDolphinManager* UGameSDKManager::GetGameDolphinManagerIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameDolphinManagerIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDolphinManager* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameConnect* UGameSDKManager::GetGameConnectIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameConnectIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameConnect* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameCentauri* UGameSDKManager::GetGameCentauri(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameCentauri");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameCentauri* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameBrowser* UGameSDKManager::GetGameBrowser(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameBrowser");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameBrowser* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMGameAnnounce* UGameSDKManager::GetGameAnnounceIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetGameAnnounceIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMGameAnnounce* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UGameSDKManager::GetFreeSpaceForLogin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "GetFreeSpaceForLogin");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBaseBackground* UGameSDKManager::GetDefaultBackground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "GetDefaultBackground");
    struct
    {
        struct UBaseBackground* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMCrashSight* UGameSDKManager::GetCrashSightIns(struct UGameInstance* GameInstanceContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "GetCrashSightIns");
    struct
    {
        struct UGameInstance* GameInstanceContext;
        struct UDFMCrashSight* ReturnValue;
    } Parms{};
    Parms.GameInstanceContext = (struct UGameInstance*)GameInstanceContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGameSDKManager* UGameSDKManager::Get(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKManager", "Get");
    struct
    {
        struct UObject* Context;
        struct UGameSDKManager* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGameSDKManager::DeinitSDKPlugins()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "DeinitSDKPlugins");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::ClearCommonTipViewCache()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "ClearCommonTipViewCache");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::CheckSpaceLimitTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "CheckSpaceLimitTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::CheckNetLimitTip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "CheckNetLimitTip");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGameSDKManager::CheckAppVersionChange()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameSDKManager", "CheckAppVersionChange");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UGameSDKStatics
void UGameSDKStatics::RequestClientExit(struct UObject* WorldContextObject, uint8_t bForce)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKStatics", "RequestClientExit");
    struct
    {
        struct UObject* WorldContextObject;
        uint8_t bForce;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bForce = (uint8_t)bForce;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGameSDKStatics::GetWeGameSDKEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKStatics", "GetWeGameSDKEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGameSDKStatics::GetUdpPingFunctionEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GameSDKStatics", "GetUdpPingFunctionEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULitePackageWrapper
void ULitePackageWrapper::UnRegisterTgpaCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "UnRegisterTgpaCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::UnRegisterEngineOpenLevelCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "UnRegisterEngineOpenLevelCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::StopDownload(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "StopDownload");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::StopAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "StopAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::StartDownloadImmediately(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "StartDownloadImmediately");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::StartDownloadForce(struct FString ModuleName, uint8_t Force)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "StartDownloadForce");
    struct
    {
        struct FString ModuleName;
        uint8_t Force;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.Force = (uint8_t)Force;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::StartDownload(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "StartDownload");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetSimulateVersion(struct FString SimulateVersionNew)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetSimulateVersion");
    struct
    {
        struct FString SimulateVersionNew;
    } Parms{};
    Parms.SimulateVersionNew = (struct FString)SimulateVersionNew;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetNotificationTitle(struct FString NotificationTitle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetNotificationTitle");
    struct
    {
        struct FString NotificationTitle;
    } Parms{};
    Parms.NotificationTitle = (struct FString)NotificationTitle;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetModuleStateByModuleName(struct FString MouduleName, int32_t State)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetModuleStateByModuleName");
    struct
    {
        struct FString MouduleName;
        int32_t State;
    } Parms{};
    Parms.MouduleName = (struct FString)MouduleName;
    Parms.State = (int32_t)State;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetModuleDownloadedToTips(struct FString ModuleName, struct FString Tips)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetModuleDownloadedToTips");
    struct
    {
        struct FString ModuleName;
        struct FString Tips;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.Tips = (struct FString)Tips;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetLoginCombineFlag(int32_t NewFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetLoginCombineFlag");
    struct
    {
        int32_t NewFlag;
    } Parms{};
    Parms.NewFlag = (int32_t)NewFlag;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetImmDLMaxTask(uint64_t MaxTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetImmDLMaxTask");
    struct
    {
        uint64_t MaxTask;
    } Parms{};
    Parms.MaxTask = (uint64_t)MaxTask;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetImmDLMaxDownloadsPerTask(uint64_t MaxDownloadsPerTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetImmDLMaxDownloadsPerTask");
    struct
    {
        uint64_t MaxDownloadsPerTask;
    } Parms{};
    Parms.MaxDownloadsPerTask = (uint64_t)MaxDownloadsPerTask;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetDownloadMaxSpeed(uint64_t Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetDownloadMaxSpeed");
    struct
    {
        uint64_t Speed;
    } Parms{};
    Parms.Speed = (uint64_t)Speed;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetCurQuestTitle(struct FString Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetCurQuestTitle");
    struct
    {
        struct FString Title;
    } Parms{};
    Parms.Title = (struct FString)Title;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetCombinePakNames(struct TArray<struct FString> CombinedPakNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetCombinePakNames");
    struct
    {
        struct TArray<struct FString> CombinedPakNames;
    } Parms{};
    Parms.CombinedPakNames = (struct TArray<struct FString>)CombinedPakNames;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetCachFileStatusByFileName(struct FString Filename, struct FString MD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetCachFileStatusByFileName");
    struct
    {
        struct FString Filename;
        struct FString MD5;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    Parms.MD5 = (struct FString)MD5;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetBGDEnabled(uint8_t IsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetBGDEnabled");
    struct
    {
        uint8_t IsEnabled;
    } Parms{};
    Parms.IsEnabled = (uint8_t)IsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::SetAsyncMergeTaskMaxNum(int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "SetAsyncMergeTaskMaxNum");
    struct
    {
        int32_t InMaxNum;
    } Parms{};
    Parms.InMaxNum = (int32_t)InMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ResetDownloadedQuestIDs(struct TArray<uint64_t> DownloadedQuestIDs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ResetDownloadedQuestIDs");
    struct
    {
        struct TArray<uint64_t> DownloadedQuestIDs;
    } Parms{};
    Parms.DownloadedQuestIDs = (struct TArray<uint64_t>)DownloadedQuestIDs;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReportPreDownloadEventTGPA(uint64_t EnablePredownload, uint64_t ErrCode, uint64_t ErrStage, uint64_t ExtractFilecount, uint64_t FindPatchfile, uint64_t OpenPatch, struct FString Patchfile, struct FString PatchfileMd5, uint64_t PredownloadType, uint64_t TotalFilecount, uint64_t PatchMatchMd5, struct FString Sdcard)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReportPreDownloadEventTGPA");
    struct
    {
        uint64_t EnablePredownload;
        uint64_t ErrCode;
        uint64_t ErrStage;
        uint64_t ExtractFilecount;
        uint64_t FindPatchfile;
        uint64_t OpenPatch;
        struct FString Patchfile;
        struct FString PatchfileMd5;
        uint64_t PredownloadType;
        uint64_t TotalFilecount;
        uint64_t PatchMatchMd5;
        struct FString Sdcard;
    } Parms{};
    Parms.EnablePredownload = (uint64_t)EnablePredownload;
    Parms.ErrCode = (uint64_t)ErrCode;
    Parms.ErrStage = (uint64_t)ErrStage;
    Parms.ExtractFilecount = (uint64_t)ExtractFilecount;
    Parms.FindPatchfile = (uint64_t)FindPatchfile;
    Parms.OpenPatch = (uint64_t)OpenPatch;
    Parms.Patchfile = (struct FString)Patchfile;
    Parms.PatchfileMd5 = (struct FString)PatchfileMd5;
    Parms.PredownloadType = (uint64_t)PredownloadType;
    Parms.TotalFilecount = (uint64_t)TotalFilecount;
    Parms.PatchMatchMd5 = (uint64_t)PatchMatchMd5;
    Parms.Sdcard = (struct FString)Sdcard;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReportPreDownloadEvent(uint64_t EnablePredownload, uint64_t ErrCode, uint64_t ErrStage, uint64_t ExtractFilecount, uint64_t FindPatchfile, uint64_t OpenPatch, struct FString Patchfile, struct FString PatchfileMd5, uint64_t PredownloadType, uint64_t TotalFilecount, uint64_t PatchMatchMd5, struct FString Sdcard)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReportPreDownloadEvent");
    struct
    {
        uint64_t EnablePredownload;
        uint64_t ErrCode;
        uint64_t ErrStage;
        uint64_t ExtractFilecount;
        uint64_t FindPatchfile;
        uint64_t OpenPatch;
        struct FString Patchfile;
        struct FString PatchfileMd5;
        uint64_t PredownloadType;
        uint64_t TotalFilecount;
        uint64_t PatchMatchMd5;
        struct FString Sdcard;
    } Parms{};
    Parms.EnablePredownload = (uint64_t)EnablePredownload;
    Parms.ErrCode = (uint64_t)ErrCode;
    Parms.ErrStage = (uint64_t)ErrStage;
    Parms.ExtractFilecount = (uint64_t)ExtractFilecount;
    Parms.FindPatchfile = (uint64_t)FindPatchfile;
    Parms.OpenPatch = (uint64_t)OpenPatch;
    Parms.Patchfile = (struct FString)Patchfile;
    Parms.PatchfileMd5 = (struct FString)PatchfileMd5;
    Parms.PredownloadType = (uint64_t)PredownloadType;
    Parms.TotalFilecount = (uint64_t)TotalFilecount;
    Parms.PatchMatchMd5 = (uint64_t)PatchMatchMd5;
    Parms.Sdcard = (struct FString)Sdcard;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReportPakMergeEvent(uint64_t ReportStage, uint64_t NetState, uint64_t ErrorCode, struct FString TargetVersionPakName, struct FString MergedMd5, struct FString BeginTimeStamp, struct FString EndTimeStamp, struct FString DeviceFreeSpaceGB, struct FString WriteFailedReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReportPakMergeEvent");
    struct
    {
        uint64_t ReportStage;
        uint64_t NetState;
        uint64_t ErrorCode;
        struct FString TargetVersionPakName;
        struct FString MergedMd5;
        struct FString BeginTimeStamp;
        struct FString EndTimeStamp;
        struct FString DeviceFreeSpaceGB;
        struct FString WriteFailedReason;
    } Parms{};
    Parms.ReportStage = (uint64_t)ReportStage;
    Parms.NetState = (uint64_t)NetState;
    Parms.ErrorCode = (uint64_t)ErrorCode;
    Parms.TargetVersionPakName = (struct FString)TargetVersionPakName;
    Parms.MergedMd5 = (struct FString)MergedMd5;
    Parms.BeginTimeStamp = (struct FString)BeginTimeStamp;
    Parms.EndTimeStamp = (struct FString)EndTimeStamp;
    Parms.DeviceFreeSpaceGB = (struct FString)DeviceFreeSpaceGB;
    Parms.WriteFailedReason = (struct FString)WriteFailedReason;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReportDownloadSelectEvent(uint64_t EventId, uint64_t SelectResult, uint64_t SelectStyle, struct FString SelectInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReportDownloadSelectEvent");
    struct
    {
        uint64_t EventId;
        uint64_t SelectResult;
        uint64_t SelectStyle;
        struct FString SelectInfo;
    } Parms{};
    Parms.EventId = (uint64_t)EventId;
    Parms.SelectResult = (uint64_t)SelectResult;
    Parms.SelectStyle = (uint64_t)SelectStyle;
    Parms.SelectInfo = (struct FString)SelectInfo;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReportDLCUpdateEvent(uint64_t TotalSize, uint64_t NowSize, uint64_t Progress, struct FString StartTime, struct FString EndTime, struct FString ReportStartTime, struct FString ReportEndTime, uint64_t Traffic, uint64_t Result, struct FString Reason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReportDLCUpdateEvent");
    struct
    {
        uint64_t TotalSize;
        uint64_t NowSize;
        uint64_t Progress;
        struct FString StartTime;
        struct FString EndTime;
        struct FString ReportStartTime;
        struct FString ReportEndTime;
        uint64_t Traffic;
        uint64_t Result;
        struct FString Reason;
    } Parms{};
    Parms.TotalSize = (uint64_t)TotalSize;
    Parms.NowSize = (uint64_t)NowSize;
    Parms.Progress = (uint64_t)Progress;
    Parms.StartTime = (struct FString)StartTime;
    Parms.EndTime = (struct FString)EndTime;
    Parms.ReportStartTime = (struct FString)ReportStartTime;
    Parms.ReportEndTime = (struct FString)ReportEndTime;
    Parms.Traffic = (uint64_t)Traffic;
    Parms.Result = (uint64_t)Result;
    Parms.Reason = (struct FString)Reason;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReloadLiteConfig2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReloadLiteConfig2");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReloadLiteConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReloadLiteConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ReleasePufferDownloader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ReleasePufferDownloader");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::RegisterTgpaCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "RegisterTgpaCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::RegisterRuntimeMultiModuleByChildModule(struct FString MultiModuleName, struct TArray<struct FString> ChildModules, uint8_t IsReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "RegisterRuntimeMultiModuleByChildModule");
    struct
    {
        struct FString MultiModuleName;
        struct TArray<struct FString> ChildModules;
        uint8_t IsReset;
    } Parms{};
    Parms.MultiModuleName = (struct FString)MultiModuleName;
    Parms.ChildModules = (struct TArray<struct FString>)ChildModules;
    Parms.IsReset = (uint8_t)IsReset;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::RegisterRuntimeMultiModule(struct FString MultiModuleName, struct TArray<struct FString> Paks, uint8_t IsReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "RegisterRuntimeMultiModule");
    struct
    {
        struct FString MultiModuleName;
        struct TArray<struct FString> Paks;
        uint8_t IsReset;
    } Parms{};
    Parms.MultiModuleName = (struct FString)MultiModuleName;
    Parms.Paks = (struct TArray<struct FString>)Paks;
    Parms.IsReset = (uint8_t)IsReset;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::RegisterPufferMoviePathRoot(struct FString MoviesPathRoot)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "RegisterPufferMoviePathRoot");
    struct
    {
        struct FString MoviesPathRoot;
    } Parms{};
    Parms.MoviesPathRoot = (struct FString)MoviesPathRoot;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::RegisterEngineOpenLevelCallBack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "RegisterEngineOpenLevelCallBack");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::OnPreDownloadInfo(int32_t Status, int32_t Progress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "OnPreDownloadInfo");
    struct
    {
        int32_t Status;
        int32_t Progress;
    } Parms{};
    Parms.Status = (int32_t)Status;
    Parms.Progress = (int32_t)Progress;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::OnEngineOpenLevelCallBack(struct FString OpenLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "OnEngineOpenLevelCallBack");
    struct
    {
        struct FString OpenLevelName;
    } Parms{};
    Parms.OpenLevelName = (struct FString)OpenLevelName;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::LiteUpdatePreloadData(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "LiteUpdatePreloadData");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::LiteUpdateGameInfoWithStringKey(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "LiteUpdateGameInfoWithStringKey");
    struct
    {
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::LiteUpdateGameInfoWithIntKey(int32_t Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "LiteUpdateGameInfoWithIntKey");
    struct
    {
        int32_t Key;
        struct FString Value;
    } Parms{};
    Parms.Key = (int32_t)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
}

struct FString ULitePackageWrapper::LiteGetDataFromTGPA(struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "LiteGetDataFromTGPA");
    struct
    {
        struct FString Key;
        struct FString Value;
        struct FString ReturnValue;
    } Parms{};
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::IsTickFromBGD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "IsTickFromBGD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::IsSupportLitePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "IsSupportLitePackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::IsPufferInitSucceed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "IsPufferInitSucceed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::IsMobileFullPackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "IsMobileFullPackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULitePackageWrapper::InitPufferDownloader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "InitPufferDownloader");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::InitPakMD5Checked(struct FString FileNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "InitPakMD5Checked");
    struct
    {
        struct FString FileNames;
    } Parms{};
    Parms.FileNames = (struct FString)FileNames;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::InitPakCombined(struct FString FileNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "InitPakCombined");
    struct
    {
        struct FString FileNames;
    } Parms{};
    Parms.FileNames = (struct FString)FileNames;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULitePackageWrapper::HasPakMD5Checked(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "HasPakMD5Checked");
    struct
    {
        struct FString Filename;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::HasPakInCombined(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "HasPakInCombined");
    struct
    {
        struct FString Filename;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULitePackageWrapper::GMSwicthEditorLitePackage(uint8_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GMSwicthEditorLitePackage");
    struct
    {
        uint8_t IsOpen;
    } Parms{};
    Parms.IsOpen = (uint8_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::GMEnableEditorDownload(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GMEnableEditorDownload");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

struct FString ULitePackageWrapper::GetStringByLuaArrary(struct TArray<struct FString> LuaArrayString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetStringByLuaArrary");
    struct
    {
        struct TArray<struct FString> LuaArrayString;
        struct FString ReturnValue;
    } Parms{};
    Parms.LuaArrayString = (struct TArray<struct FString>)LuaArrayString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t ULitePackageWrapper::GetPufferInitErrorCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPufferInitErrorCode");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetPreDownloadStateProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPreDownloadStateProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetPreDownloadState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPreDownloadState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetPakNamesByModuleName(struct FString ModuleName, uint8_t UseRuntime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPakNamesByModuleName");
    struct
    {
        struct FString ModuleName;
        uint8_t UseRuntime;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.UseRuntime = (uint8_t)UseRuntime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULitePackageWrapper::GetPakMD5CheckedString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPakMD5CheckedString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::GetPakIsInCombined(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPakIsInCombined");
    struct
    {
        struct FString PakName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULitePackageWrapper::GetPakCombinedString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetPakCombinedString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetNumWorkerThreads()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetNumWorkerThreads");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetNetworkState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetNetworkState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetModuleStateForceByModuleName(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetModuleStateForceByModuleName");
    struct
    {
        struct FString ModuleName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetModuleStateByModuleName(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetModuleStateByModuleName");
    struct
    {
        struct FString ModuleName;
        int32_t ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULitePackageWrapper* ULitePackageWrapper::GetInstance(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LitePackageWrapper", "GetInstance");
    struct
    {
        struct UGameInstance* GameInstance;
        struct ULitePackageWrapper* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::GetFileStateAndSize(struct FString PakName, uint64_t& NowSize, uint64_t& TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetFileStateAndSize");
    struct
    {
        struct FString PakName;
        uint64_t NowSize;
        uint64_t TotalSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    NowSize = Parms.NowSize;
    TotalSize = Parms.TotalSize;
    return Parms.ReturnValue;
}

uint64_t ULitePackageWrapper::GetFileSize(struct FString PakName, uint64_t& TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetFileSize");
    struct
    {
        struct FString PakName;
        uint64_t TotalSize;
        uint64_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    TotalSize = Parms.TotalSize;
    return Parms.ReturnValue;
}

float ULitePackageWrapper::GetFakeProgressWithPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetFakeProgressWithPercent");
    struct
    {
        float Percent;
        float ReturnValue;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULitePackageWrapper::GetFakeProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetFakeProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

double ULitePackageWrapper::GetDownloadSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetDownloadSpeed");
    struct
    {
        double ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<uint64_t> ULitePackageWrapper::GetDownloadedQuestIDs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetDownloadedQuestIDs");
    struct
    {
        struct TArray<uint64_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t ULitePackageWrapper::GetDeviceTotalSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetDeviceTotalSpace");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULitePackageWrapper::GetDeviceName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetDeviceName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint64_t ULitePackageWrapper::GetDeviceFreeSpace()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetDeviceFreeSpace");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetCombinePakNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetCombinePakNames");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetChildModuleNamesByMultiModule(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetChildModuleNamesByMultiModule");
    struct
    {
        struct FString ModuleName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::GetBGDEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetBGDEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetArraryByLuaString(struct FString LuaString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetArraryByLuaString");
    struct
    {
        struct FString LuaString;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.LuaString = (struct FString)LuaString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetAllPakNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetAllPakNames");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetAllPakCombined()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetAllPakCombined");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> ULitePackageWrapper::GetAllChildModuleName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GetAllChildModuleName");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULitePackageWrapper::GenerateAllModulePaksForWholePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "GenerateAllModulePaksForWholePackage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULitePackageWrapper::DeleteFileByPakName(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "DeleteFileByPakName");
    struct
    {
        struct FString PakName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULitePackageWrapper::DeleteFileByModuleName(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "DeleteFileByModuleName");
    struct
    {
        struct FString ModuleName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULitePackageWrapper::CreateMgrTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CreateMgrTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::ClearMgrTimer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "ClearMgrTimer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::CheckModuleState(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CheckModuleState");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::CheckModuleListState(struct TArray<struct FString> ModuleNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CheckModuleListState");
    struct
    {
        struct TArray<struct FString> ModuleNames;
    } Parms{};
    Parms.ModuleNames = (struct TArray<struct FString>)ModuleNames;
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULitePackageWrapper::CheckFileIsInPuffer(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CheckFileIsInPuffer");
    struct
    {
        struct FString PakName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULitePackageWrapper::CheckAndShowLocalNotification(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CheckAndShowLocalNotification");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::CheckAndSetWholePackageStatesByFileNames(struct TArray<struct FString> LocalFiles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CheckAndSetWholePackageStatesByFileNames");
    struct
    {
        struct TArray<struct FString> LocalFiles;
    } Parms{};
    Parms.LocalFiles = (struct TArray<struct FString>)LocalFiles;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::CheckAndSetWholePackageStates(struct TArray<struct FString> LocalFiles, struct TArray<struct FString> Md5s)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "CheckAndSetWholePackageStates");
    struct
    {
        struct TArray<struct FString> LocalFiles;
        struct TArray<struct FString> Md5s;
    } Parms{};
    Parms.LocalFiles = (struct TArray<struct FString>)LocalFiles;
    Parms.Md5s = (struct TArray<struct FString>)Md5s;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::AddPakMD5Checked(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "AddPakMD5Checked");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::AddPakInCombined(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "AddPakInCombined");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void ULitePackageWrapper::AddCombineInfoToQueue(struct FString CombineInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LitePackageWrapper", "AddCombineInfoToQueue");
    struct
    {
        struct FString CombineInfo;
    } Parms{};
    Parms.CombineInfo = (struct FString)CombineInfo;
    this->ProcessEvent(Func, &Parms);
}

// ULoginTipWidget
void ULoginTipWidget::SetSpaceLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoginTipWidget", "SetSpaceLimit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULoginTipWidget::SetConnectLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LoginTipWidget", "SetConnectLimit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPufferInterface
void UPufferInterface::UpdatePollCall()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "UpdatePollCall");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::UpdateConfInfo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "UpdateConfInfo");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::UnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "UnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::StartRestoreFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "StartRestoreFiles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferInterface::SetTaskPriority(uint64_t TaskID, uint32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "SetTaskPriority");
    struct
    {
        uint64_t TaskID;
        uint32_t Priority;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TaskID = (uint64_t)TaskID;
    Parms.Priority = (uint32_t)Priority;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferInterface::SetIosBgDownloadAttr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "SetIosBgDownloadAttr");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::SetDLMaxTask(uint32_t ImmDLMaxTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "SetDLMaxTask");
    struct
    {
        uint32_t ImmDLMaxTask;
    } Parms{};
    Parms.ImmDLMaxTask = (uint32_t)ImmDLMaxTask;
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::SetDLMaxSpeed(uint64_t ImmDLMaxSpeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "SetDLMaxSpeed");
    struct
    {
        uint64_t ImmDLMaxSpeed;
    } Parms{};
    Parms.ImmDLMaxSpeed = (uint64_t)ImmDLMaxSpeed;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferInterface::ResumeTask(uint64_t TaskID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "ResumeTask");
    struct
    {
        uint64_t TaskID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TaskID = (uint64_t)TaskID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferInterface::ReleaseCurrentPuffer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "ReleaseCurrentPuffer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferInterface::PauseTask(uint64_t TaskID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "PauseTask");
    struct
    {
        uint64_t TaskID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TaskID = (uint64_t)TaskID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferInterface::IsFileReady(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "IsFileReady");
    struct
    {
        struct FString Filename;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferInterface::IsDirReady(struct FString Dir, uint8_t bHasSubDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "IsDirReady");
    struct
    {
        struct FString Dir;
        uint8_t bHasSubDir;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.bHasSubDir = (uint8_t)bHasSubDir;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferInterface::InitPuffer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "InitPuffer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::InitGCloud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "InitGCloud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferInterface::GetFileMd5Puffer(struct FString Filename, struct FString MD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "GetFileMd5Puffer");
    struct
    {
        struct FString Filename;
        struct FString MD5;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    Parms.MD5 = (struct FString)MD5;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferInterface::GetFileID(struct FString Filename, uint32_t& FileId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "GetFileID");
    struct
    {
        struct FString Filename;
        uint32_t FileId;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
    FileId = Parms.FileId;
}

uint64_t UPufferInterface::GetDirSize(struct FString Dir, uint8_t bHasSubDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "GetDirSize");
    struct
    {
        struct FString Dir;
        uint8_t bHasSubDir;
        uint64_t ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.bHasSubDir = (uint8_t)bHasSubDir;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferInterface::GetBatchDirFileCount(struct FString Dir, uint8_t bHasSubDir, uint32_t& nTotal)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "GetBatchDirFileCount");
    struct
    {
        struct FString Dir;
        uint8_t bHasSubDir;
        uint32_t nTotal;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.bHasSubDir = (uint8_t)bHasSubDir;
    this->ProcessEvent(Func, &Parms);
    nTotal = Parms.nTotal;
    return Parms.ReturnValue;
}

struct UPufferInterface* UPufferInterface::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PufferInterface", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct UPufferInterface* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferInterface::DownloadList(struct TArray<struct FString> FileList, uint8_t bForceDownload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "DownloadList");
    struct
    {
        struct TArray<struct FString> FileList;
        uint8_t bForceDownload;
    } Parms{};
    Parms.FileList = (struct TArray<struct FString>)FileList;
    Parms.bForceDownload = (uint8_t)bForceDownload;
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::DownloadDir(struct FString Dir, uint8_t bHasSubDir, uint8_t bForceDownload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "DownloadDir");
    struct
    {
        struct FString Dir;
        uint8_t bHasSubDir;
        uint8_t bForceDownload;
    } Parms{};
    Parms.Dir = (struct FString)Dir;
    Parms.bHasSubDir = (uint8_t)bHasSubDir;
    Parms.bForceDownload = (uint8_t)bForceDownload;
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::DownFile(struct FString Filename, uint8_t bForceDownload)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "DownFile");
    struct
    {
        struct FString Filename;
        uint8_t bForceDownload;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    Parms.bForceDownload = (uint8_t)bForceDownload;
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::DeleteByName(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "DeleteByName");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void UPufferInterface::ClearFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferInterface", "ClearFiles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UPufferManager
void UPufferManager::StopDownload(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "StopDownload");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::StopAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "StopAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::StartDownloadImmediately(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "StartDownloadImmediately");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::StartDownloadForce(struct FString ModuleName, uint8_t Force)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "StartDownloadForce");
    struct
    {
        struct FString ModuleName;
        uint8_t Force;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    Parms.Force = (uint8_t)Force;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::StartDownload(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "StartDownload");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetTickFromBGD(uint8_t IsTrue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetTickFromBGD");
    struct
    {
        uint8_t IsTrue;
    } Parms{};
    Parms.IsTrue = (uint8_t)IsTrue;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetSimulateVersion(struct FString SimulateVersionNew)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetSimulateVersion");
    struct
    {
        struct FString SimulateVersionNew;
    } Parms{};
    Parms.SimulateVersionNew = (struct FString)SimulateVersionNew;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetLoginCombineFlag(int32_t NewFlag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetLoginCombineFlag");
    struct
    {
        int32_t NewFlag;
    } Parms{};
    Parms.NewFlag = (int32_t)NewFlag;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetImmDLMaxTask(uint64_t MaxTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetImmDLMaxTask");
    struct
    {
        uint64_t MaxTask;
    } Parms{};
    Parms.MaxTask = (uint64_t)MaxTask;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetImmDLMaxDownloadsPerTask(uint64_t MaxDownloadsPerTask)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetImmDLMaxDownloadsPerTask");
    struct
    {
        uint64_t MaxDownloadsPerTask;
    } Parms{};
    Parms.MaxDownloadsPerTask = (uint64_t)MaxDownloadsPerTask;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetDownloadMaxSpeed(uint64_t Speed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetDownloadMaxSpeed");
    struct
    {
        uint64_t Speed;
    } Parms{};
    Parms.Speed = (uint64_t)Speed;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetCurrentDownloadProgress(uint64_t NowSize, uint64_t TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetCurrentDownloadProgress");
    struct
    {
        uint64_t NowSize;
        uint64_t TotalSize;
    } Parms{};
    Parms.NowSize = (uint64_t)NowSize;
    Parms.TotalSize = (uint64_t)TotalSize;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetCurQuestTitle(struct FString Title)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetCurQuestTitle");
    struct
    {
        struct FString Title;
    } Parms{};
    Parms.Title = (struct FString)Title;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetBGDEnabled(uint8_t IsEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetBGDEnabled");
    struct
    {
        uint8_t IsEnabled;
    } Parms{};
    Parms.IsEnabled = (uint8_t)IsEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::SetAsyncMergeTaskMaxNum(int32_t InMaxNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "SetAsyncMergeTaskMaxNum");
    struct
    {
        int32_t InMaxNum;
    } Parms{};
    Parms.InMaxNum = (int32_t)InMaxNum;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::ReloadLiteConfig2()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "ReloadLiteConfig2");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::ReloadLiteConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "ReloadLiteConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::ReleasePufferDownloader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "ReleasePufferDownloader");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::RegisterRuntimeMultiModuleByChildModule(struct FString MultiModuleName, struct TArray<struct FString> ChildModules, uint8_t IsReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "RegisterRuntimeMultiModuleByChildModule");
    struct
    {
        struct FString MultiModuleName;
        struct TArray<struct FString> ChildModules;
        uint8_t IsReset;
    } Parms{};
    Parms.MultiModuleName = (struct FString)MultiModuleName;
    Parms.ChildModules = (struct TArray<struct FString>)ChildModules;
    Parms.IsReset = (uint8_t)IsReset;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::RegisterRuntimeMultiModule(struct FString MultiModuleName, struct TArray<struct FString> Paks, uint8_t IsReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "RegisterRuntimeMultiModule");
    struct
    {
        struct FString MultiModuleName;
        struct TArray<struct FString> Paks;
        uint8_t IsReset;
    } Parms{};
    Parms.MultiModuleName = (struct FString)MultiModuleName;
    Parms.Paks = (struct TArray<struct FString>)Paks;
    Parms.IsReset = (uint8_t)IsReset;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::PrecomputeCurve(const struct TArray<struct FVector2D>& Points, int32_t Segments)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "PrecomputeCurve");
    struct
    {
        struct TArray<struct FVector2D> Points;
        int32_t Segments;
    } Parms{};
    Parms.Points = (struct TArray<struct FVector2D>)Points;
    Parms.Segments = (int32_t)Segments;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferManager::IsTickFromBGD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "IsTickFromBGD");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferManager::IsSupportLitePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "IsSupportLitePackage");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferManager::IsPufferInitSucceed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "IsPufferInitSucceed");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferManager::InitPufferDownloader()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "InitPufferDownloader");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::HandleMergeComplete2(int32_t ErrCode, struct FString SrcPakPath, struct FString PatchPakPath, struct FString CachedPakPath, struct FString OutputPakPath, struct FString OutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "HandleMergeComplete2");
    struct
    {
        int32_t ErrCode;
        struct FString SrcPakPath;
        struct FString PatchPakPath;
        struct FString CachedPakPath;
        struct FString OutputPakPath;
        struct FString OutputPakFileMD5;
    } Parms{};
    Parms.ErrCode = (int32_t)ErrCode;
    Parms.SrcPakPath = (struct FString)SrcPakPath;
    Parms.PatchPakPath = (struct FString)PatchPakPath;
    Parms.CachedPakPath = (struct FString)CachedPakPath;
    Parms.OutputPakPath = (struct FString)OutputPakPath;
    Parms.OutputPakFileMD5 = (struct FString)OutputPakFileMD5;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::GMSwicthEditorLitePackage(uint8_t IsOpen)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GMSwicthEditorLitePackage");
    struct
    {
        uint8_t IsOpen;
    } Parms{};
    Parms.IsOpen = (uint8_t)IsOpen;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::GMEnableEditorDownload(uint8_t Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GMEnableEditorDownload");
    struct
    {
        uint8_t Enable;
    } Parms{};
    Parms.Enable = (uint8_t)Enable;
    this->ProcessEvent(Func, &Parms);
}

uint64_t UPufferManager::GetPufferInitErrorCode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetPufferInitErrorCode");
    struct
    {
        uint64_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UPufferManager::GetPointFromLUT(float T)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetPointFromLUT");
    struct
    {
        float T;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.T = (float)T;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UPufferManager::GetPakNamesByModuleName(struct FString ModuleNam, uint8_t IgnoreRuntime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetPakNamesByModuleName");
    struct
    {
        struct FString ModuleNam;
        uint8_t IgnoreRuntime;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.ModuleNam = (struct FString)ModuleNam;
    Parms.IgnoreRuntime = (uint8_t)IgnoreRuntime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPufferManager::GetNetworkState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetNetworkState");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UPufferManager::GetMultiModuleByChildModuleName(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetMultiModuleByChildModuleName");
    struct
    {
        struct FString ModuleName;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferManager::GetFileStateAndSize(struct FString PakName, uint64_t& NowSize, uint64_t& TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetFileStateAndSize");
    struct
    {
        struct FString PakName;
        uint64_t NowSize;
        uint64_t TotalSize;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    NowSize = Parms.NowSize;
    TotalSize = Parms.TotalSize;
    return Parms.ReturnValue;
}

uint64_t UPufferManager::GetFileSize(struct FString PakName, uint64_t& TotalSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetFileSize");
    struct
    {
        struct FString PakName;
        uint64_t TotalSize;
        uint64_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    TotalSize = Parms.TotalSize;
    return Parms.ReturnValue;
}

float UPufferManager::GetFakeProgressWithPercent(float Percent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetFakeProgressWithPercent");
    struct
    {
        float Percent;
        float ReturnValue;
    } Parms{};
    Parms.Percent = (float)Percent;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPufferManager::GetFakeProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetFakeProgress");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPufferManager::GetCurrentDownloadPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetCurrentDownloadPercent");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPufferManager::GetCurrentCombinedPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetCurrentCombinedPercent");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPufferManager::GetCurQuestTitle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetCurQuestTitle");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UPufferManager::GetChildModuleNamesByMultiModule(struct FString ModuleNam)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetChildModuleNamesByMultiModule");
    struct
    {
        struct FString ModuleNam;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.ModuleNam = (struct FString)ModuleNam;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferManager::GetBGDEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetBGDEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UPufferManager::GetAllPakNames()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetAllPakNames");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UPufferManager::GetAllChildModuleName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GetAllChildModuleName");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPufferManager* UPufferManager::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PufferManager", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct UPufferManager* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferManager::GenerateAllModulePaksForWholePackage()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "GenerateAllModulePaksForWholePackage");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::DownloadTest(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "DownloadTest");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferManager::DeleteFileByPakName(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "DeleteFileByPakName");
    struct
    {
        struct FString PakName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPufferManager::DeleteFileByModuleName(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "DeleteFileByModuleName");
    struct
    {
        struct FString ModuleName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UPufferManager::CubicBezier(const struct FVector2D& p0, const struct FVector2D& p1, const struct FVector2D& p2, const struct FVector2D& p3, float T)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "CubicBezier");
    struct
    {
        struct FVector2D p0;
        struct FVector2D p1;
        struct FVector2D p2;
        struct FVector2D p3;
        float T;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.p0 = (struct FVector2D)p0;
    Parms.p1 = (struct FVector2D)p1;
    Parms.p2 = (struct FVector2D)p2;
    Parms.p3 = (struct FVector2D)p3;
    Parms.T = (float)T;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferManager::CleanBeforeLoginCombine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "CleanBeforeLoginCombine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::CheckModuleState(struct FString ModuleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "CheckModuleState");
    struct
    {
        struct FString ModuleName;
    } Parms{};
    Parms.ModuleName = (struct FString)ModuleName;
    this->ProcessEvent(Func, &Parms);
}

void UPufferManager::CheckModuleListState(struct TArray<struct FString> ModuleNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "CheckModuleListState");
    struct
    {
        struct TArray<struct FString> ModuleNames;
    } Parms{};
    Parms.ModuleNames = (struct TArray<struct FString>)ModuleNames;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UPufferManager::CheckFileIsInPuffer(struct FString PakName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "CheckFileIsInPuffer");
    struct
    {
        struct FString PakName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakName = (struct FString)PakName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferManager::AddCombineInfoToQueue(struct FString CombineInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferManager", "AddCombineInfoToQueue");
    struct
    {
        struct FString CombineInfo;
    } Parms{};
    Parms.CombineInfo = (struct FString)CombineInfo;
    this->ProcessEvent(Func, &Parms);
}

// UPufferModule
void UPufferModule::UpdatePollCall()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "UpdatePollCall");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::UnInit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "UnInit");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::StartRestoreFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "StartRestoreFiles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::SetTaskPriority()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "SetTaskPriority");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::SetIosBgDownloadAttr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "SetIosBgDownloadAttr");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::SetDLMaxTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "SetDLMaxTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::SetDLMaxSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "SetDLMaxSpeed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::ResumeTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "ResumeTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::RemoveAfterDownload()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "RemoveAfterDownload");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::ReleaseCurrentPuffer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "ReleaseCurrentPuffer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::PauseTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "PauseTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::IsFileReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "IsFileReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::IsDirReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "IsDirReady");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::InitPuffer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "InitPuffer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::InitGCloud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "InitGCloud");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::GetFileMd5Puffer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "GetFileMd5Puffer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::GetFileID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "GetFileID");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::GetDirSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "GetDirSize");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::GetBatchDirFileCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "GetBatchDirFileCount");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UPufferModule* UPufferModule::Get(struct UObject* GameContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PufferModule", "Get");
    struct
    {
        struct UObject* GameContextObject;
        struct UPufferModule* ReturnValue;
    } Parms{};
    Parms.GameContextObject = (struct UObject*)GameContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPufferModule::DownloadList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "DownloadList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::DownloadDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "DownloadDir");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::DownFile()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "DownFile");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::DeletePartly()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "DeletePartly");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::DeleteByName(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "DeleteByName");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::DeleteAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "DeleteAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::CopyFileNamesFromRes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "CopyFileNamesFromRes");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::ClearFiles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "ClearFiles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UPufferModule::CheckMD5()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "CheckMD5");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct FString UPufferModule::ChangeDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PufferModule", "ChangeDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UQRCodeUtil
struct UTexture2D* UQRCodeUtil::GenerateQRCode(struct FString QRCodeName, struct FString str, int32_t Version, struct UObject* Outer, EQRencodeMode QrencodeMode, EQRecLevel QrecLevel, int32_t casesensitive, struct FLinearColor Color1, struct FLinearColor color2, uint8_t bSRGB, uint8_t bUseAlpha)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QRCodeUtil", "GenerateQRCode");
    struct
    {
        struct FString QRCodeName;
        struct FString str;
        int32_t Version;
        struct UObject* Outer;
        enum EQRencodeMode QrencodeMode;
        enum EQRecLevel QrecLevel;
        int32_t casesensitive;
        struct FLinearColor Color1;
        struct FLinearColor color2;
        uint8_t bSRGB;
        uint8_t bUseAlpha;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.QRCodeName = (struct FString)QRCodeName;
    Parms.str = (struct FString)str;
    Parms.Version = (int32_t)Version;
    Parms.Outer = (struct UObject*)Outer;
    Parms.QrencodeMode = (enum EQRencodeMode)QrencodeMode;
    Parms.QrecLevel = (enum EQRecLevel)QrecLevel;
    Parms.casesensitive = (int32_t)casesensitive;
    Parms.Color1 = (struct FLinearColor)Color1;
    Parms.color2 = (struct FLinearColor)color2;
    Parms.bSRGB = (uint8_t)bSRGB;
    Parms.bUseAlpha = (uint8_t)bUseAlpha;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UQRCodeUtil::GenerateDefaultQRCode(struct FString str, struct UObject* Outer, struct FLinearColor Color1, struct FLinearColor color2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("QRCodeUtil", "GenerateDefaultQRCode");
    struct
    {
        struct FString str;
        struct UObject* Outer;
        struct FLinearColor Color1;
        struct FLinearColor color2;
        struct UTexture2D* ReturnValue;
    } Parms{};
    Parms.str = (struct FString)str;
    Parms.Outer = (struct UObject*)Outer;
    Parms.Color1 = (struct FLinearColor)Color1;
    Parms.color2 = (struct FLinearColor)color2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
