#include "DFLQATool.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULQABaseView
void ULQABaseView::ScreenShot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQABaseView", "ScreenShot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULQABaseView::DumpView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQABaseView", "DumpView");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULQAManager
void ULQAManager::LQAEnableAutoDump(uint8_t NeedWholeData, int32_t Frames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "LQAEnableAutoDump");
    struct
    {
        uint8_t NeedWholeData;
        int32_t Frames;
    } Parms{};
    Parms.NeedWholeData = (uint8_t)NeedWholeData;
    Parms.Frames = (int32_t)Frames;
    this->ProcessEvent(Func, &Parms);
}

void ULQAManager::LQADumpViewAndSnapshot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "LQADumpViewAndSnapshot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULQAManager::LQADumpViewAdvanced(uint8_t bContainsTextures, uint8_t bNeedObjectData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "LQADumpViewAdvanced");
    struct
    {
        uint8_t bContainsTextures;
        uint8_t bNeedObjectData;
    } Parms{};
    Parms.bContainsTextures = (uint8_t)bContainsTextures;
    Parms.bNeedObjectData = (uint8_t)bNeedObjectData;
    this->ProcessEvent(Func, &Parms);
}

void ULQAManager::LQADumpView(uint8_t bContainsTextures, uint8_t bNeedObjectData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "LQADumpView");
    struct
    {
        uint8_t bContainsTextures;
        uint8_t bNeedObjectData;
    } Parms{};
    Parms.bContainsTextures = (uint8_t)bContainsTextures;
    Parms.bNeedObjectData = (uint8_t)bNeedObjectData;
    this->ProcessEvent(Func, &Parms);
}

void ULQAManager::LQADisableAutoDump()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "LQADisableAutoDump");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULQAManager::IsLQAReady()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "IsLQAReady");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULQAManager::InitAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "InitAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct ULQASettings* ULQAManager::GetLQASettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "GetLQASettings");
    struct
    {
        struct ULQASettings* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULQAManager* ULQAManager::GetLQAManager(struct UObject* GameIns)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LQAManager", "GetLQAManager");
    struct
    {
        struct UObject* GameIns;
        struct ULQAManager* ReturnValue;
    } Parms{};
    Parms.GameIns = (struct UObject*)GameIns;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULQAManager::DeInitAll()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQAManager", "DeInitAll");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ULQARemoteToolManager
void ULQARemoteToolManager::SendSnapshotData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARemoteToolManager", "SendSnapshotData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULQARemoteToolManager::OnFileZipFinished(uint8_t bSuccess, int64_t Count)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARemoteToolManager", "OnFileZipFinished");
    struct
    {
        uint8_t bSuccess;
        int64_t Count;
    } Parms{};
    Parms.bSuccess = (uint8_t)bSuccess;
    Parms.Count = (int64_t)Count;
    this->ProcessEvent(Func, &Parms);
}

void ULQARemoteToolManager::LocalSnapshot()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARemoteToolManager", "LocalSnapshot");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t ULQARemoteToolManager::IsLQAConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARemoteToolManager", "IsLQAConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULQARemoteToolManager::InitLQARemoteTool(struct FString InServerUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARemoteToolManager", "InitLQARemoteTool");
    struct
    {
        struct FString InServerUrl;
    } Parms{};
    Parms.InServerUrl = (struct FString)InServerUrl;
    this->ProcessEvent(Func, &Parms);
}

struct FString ULQARemoteToolManager::GetServerID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARemoteToolManager", "GetServerID");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULQARemoteToolManager* ULQARemoteToolManager::Get(struct UGameInstance* GameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LQARemoteToolManager", "Get");
    struct
    {
        struct UGameInstance* GameInstance;
        struct ULQARemoteToolManager* ReturnValue;
    } Parms{};
    Parms.GameInstance = (struct UGameInstance*)GameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULQARestoreManager
uint8_t ULQARestoreManager::MakeRestoredWindow(struct FString DumpFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARestoreManager", "MakeRestoredWindow");
    struct
    {
        struct FString DumpFilePath;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DumpFilePath = (struct FString)DumpFilePath;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULQARestoreManager::GetFilePaths(struct FString DumpFilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARestoreManager", "GetFilePaths");
    struct
    {
        struct FString DumpFilePath;
    } Parms{};
    Parms.DumpFilePath = (struct FString)DumpFilePath;
    this->ProcessEvent(Func, &Parms);
}

void ULQARestoreManager::DelayedLoopStep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARestoreManager", "DelayedLoopStep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULQARestoreManager::DelayedLoop()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARestoreManager", "DelayedLoop");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ULQARestoreManager::ClearRestoreWindow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LQARestoreManager", "ClearRestoreWindow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// URestoreWindowProxy
void URestoreWindowProxy::AddChildrenToPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RestoreWindowProxy", "AddChildrenToPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
