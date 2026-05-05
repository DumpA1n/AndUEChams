#include "OpenWorldStreaming.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UOpenWorldComposition
void UOpenWorldComposition::ResetViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "ResetViewTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UOpenWorldComposition::RecoverViewTarget(uint8_t bFlush)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "RecoverViewTarget");
    struct
    {
        uint8_t bFlush;
    } Parms{};
    Parms.bFlush = (uint8_t)bFlush;
    this->ProcessEvent(Func, &Parms);
}

void UOpenWorldComposition::ForceSetViewTargetTransform(const struct FVector& Position, const struct FRotator& Rotator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "ForceSetViewTargetTransform");
    struct
    {
        struct FVector Position;
        struct FRotator Rotator;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    Parms.Rotator = (struct FRotator)Rotator;
    this->ProcessEvent(Func, &Parms);
}

void UOpenWorldComposition::FlushViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "FlushViewTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UOpenWorldComposition::FlushStreaming(EOpenWorldStreamingFlushFlags Flags, EOpenWorldStreamingImportance Importance, const struct TArray<struct FVector>& AbsolutePositions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "FlushStreaming");
    struct
    {
        enum EOpenWorldStreamingFlushFlags Flags;
        enum EOpenWorldStreamingImportance Importance;
        struct TArray<struct FVector> AbsolutePositions;
    } Parms{};
    Parms.Flags = (enum EOpenWorldStreamingFlushFlags)Flags;
    Parms.Importance = (enum EOpenWorldStreamingImportance)Importance;
    Parms.AbsolutePositions = (struct TArray<struct FVector>)AbsolutePositions;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldComposition::ExitStage(struct FName StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "ExitStage");
    struct
    {
        struct FName StageName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StageName = (struct FName)StageName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldComposition::EnterStage(struct FName StageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "EnterStage");
    struct
    {
        struct FName StageName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.StageName = (struct FName)StageName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldComposition::ClearStages()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "ClearStages");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UOpenWorldComposition::ChangeViewTarget(struct AActor* ViewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldComposition", "ChangeViewTarget");
    struct
    {
        struct AActor* ViewTarget;
    } Parms{};
    Parms.ViewTarget = (struct AActor*)ViewTarget;
    this->ProcessEvent(Func, &Parms);
}

// UCustomWorldComposition
uint8_t UCustomWorldComposition::UseStreamingSettings(struct FName MapName, const struct TArray<struct FName>& InExtraScanningMaps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "UseStreamingSettings");
    struct
    {
        struct FName MapName;
        struct TArray<struct FName> InExtraScanningMaps;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MapName = (struct FName)MapName;
    Parms.InExtraScanningMaps = (struct TArray<struct FName>)InExtraScanningMaps;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCustomWorldComposition::UnloadLevels(const struct TArray<struct FString>& InLevelPackageNames, const struct FDelegate& callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "UnloadLevels");
    struct
    {
        struct TArray<struct FString> InLevelPackageNames;
        struct FDelegate callback;
    } Parms{};
    Parms.InLevelPackageNames = (struct TArray<struct FString>)InLevelPackageNames;
    Parms.callback = (struct FDelegate)callback;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::UnloadLevel(struct FString InLevelPackageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "UnloadLevel");
    struct
    {
        struct FString InLevelPackageName;
    } Parms{};
    Parms.InLevelPackageName = (struct FString)InLevelPackageName;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::StatsEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "StatsEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::SetWorldCompositionStreamingEnable(uint8_t bInEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "SetWorldCompositionStreamingEnable");
    struct
    {
        uint8_t bInEnable;
    } Parms{};
    Parms.bInEnable = (uint8_t)bInEnable;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::SetIgnoreStreamgintLayers(struct FString InLayersMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "SetIgnoreStreamgintLayers");
    struct
    {
        struct FString InLayersMsg;
    } Parms{};
    Parms.InLayersMsg = (struct FString)InLayersMsg;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::SetDisableBeginPlay(uint8_t bDisable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "SetDisableBeginPlay");
    struct
    {
        uint8_t bDisable;
    } Parms{};
    Parms.bDisable = (uint8_t)bDisable;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::RestoreLayerParameter(struct FString LayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "RestoreLayerParameter");
    struct
    {
        struct FString LayerName;
    } Parms{};
    Parms.LayerName = (struct FString)LayerName;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::RequestLevelStreaming(struct FString InLevelPackageName, uint8_t bShouldBeLoaded, uint8_t bShouldBeVisible, uint8_t bShouldBlock, uint8_t bImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "RequestLevelStreaming");
    struct
    {
        struct FString InLevelPackageName;
        uint8_t bShouldBeLoaded;
        uint8_t bShouldBeVisible;
        uint8_t bShouldBlock;
        uint8_t bImmediately;
    } Parms{};
    Parms.InLevelPackageName = (struct FString)InLevelPackageName;
    Parms.bShouldBeLoaded = (uint8_t)bShouldBeLoaded;
    Parms.bShouldBeVisible = (uint8_t)bShouldBeVisible;
    Parms.bShouldBlock = (uint8_t)bShouldBlock;
    Parms.bImmediately = (uint8_t)bImmediately;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::RemoveStreamingScene(const struct TArray<struct FName>& InExtraScanningMaps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "RemoveStreamingScene");
    struct
    {
        struct TArray<struct FName> InExtraScanningMaps;
    } Parms{};
    Parms.InExtraScanningMaps = (struct TArray<struct FName>)InExtraScanningMaps;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::ReleasePlayerLocation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "ReleasePlayerLocation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::PlayerZoomingOn(float InFOV, float InDelayTime, float InZoomRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "PlayerZoomingOn");
    struct
    {
        float InFOV;
        float InDelayTime;
        float InZoomRate;
    } Parms{};
    Parms.InFOV = (float)InFOV;
    Parms.InDelayTime = (float)InDelayTime;
    Parms.InZoomRate = (float)InZoomRate;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::PlayerZoomingOff(float InDelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "PlayerZoomingOff");
    struct
    {
        float InDelayTime;
    } Parms{};
    Parms.InDelayTime = (float)InDelayTime;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::OverrideLayerParameter(struct FString LayerName, struct FString Parameter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "OverrideLayerParameter");
    struct
    {
        struct FString LayerName;
        struct FString Parameter;
    } Parms{};
    Parms.LayerName = (struct FString)LayerName;
    Parms.Parameter = (struct FString)Parameter;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::LoadLevels(const struct TArray<struct FString>& InLevelPackageNames, const struct FDelegate& callback)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "LoadLevels");
    struct
    {
        struct TArray<struct FString> InLevelPackageNames;
        struct FDelegate callback;
    } Parms{};
    Parms.InLevelPackageNames = (struct TArray<struct FString>)InLevelPackageNames;
    Parms.callback = (struct FDelegate)callback;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::LoadLevel(struct FString InLevelPackageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "LoadLevel");
    struct
    {
        struct FString InLevelPackageName;
    } Parms{};
    Parms.InLevelPackageName = (struct FString)InLevelPackageName;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UCustomWorldComposition::IsWorldCompositionStreamingEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "IsWorldCompositionStreamingEnabled");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCustomWorldComposition::IsPhysicsLoadingCompleted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "IsPhysicsLoadingCompleted");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCustomWorldComposition::IsLoadingCompleted(EOpenWorldStreamingImportance Importance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "IsLoadingCompleted");
    struct
    {
        enum EOpenWorldStreamingImportance Importance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Importance = (enum EOpenWorldStreamingImportance)Importance;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UCustomWorldComposition::IsLevelExist(struct FString InLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "IsLevelExist");
    struct
    {
        struct FString InLevelName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InLevelName = (struct FString)InLevelName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCustomWorldComposition::GetUnloadLevelMsgs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "GetUnloadLevelMsgs");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UCustomWorldComposition::GetLoadedLevelNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "GetLoadedLevelNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCustomWorldComposition::GetIngnoreLayerMsgs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "GetIngnoreLayerMsgs");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UCustomWorldComposition::GetAllRuntimeLevels()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "GetAllRuntimeLevels");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UCustomWorldComposition::GetAllLayerNames(uint8_t bInNeedCheckClient, uint8_t bInNeedCheckServer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "GetAllLayerNames");
    struct
    {
        uint8_t bInNeedCheckClient;
        uint8_t bInNeedCheckServer;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.bInNeedCheckClient = (uint8_t)bInNeedCheckClient;
    Parms.bInNeedCheckServer = (uint8_t)bInNeedCheckServer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCustomWorldComposition::FreezeStreamingLayers(const struct TArray<struct FString>& InLayerWildcards, uint8_t bFreeze)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "FreezeStreamingLayers");
    struct
    {
        struct TArray<struct FString> InLayerWildcards;
        uint8_t bFreeze;
    } Parms{};
    Parms.InLayerWildcards = (struct TArray<struct FString>)InLayerWildcards;
    Parms.bFreeze = (uint8_t)bFreeze;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::ForceReloadLevel(struct FString InLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "ForceReloadLevel");
    struct
    {
        struct FString InLevelName;
    } Parms{};
    Parms.InLevelName = (struct FString)InLevelName;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::ForceRefresh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "ForceRefresh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::FocusPlayerLocations(const struct TArray<struct FVector>& InAbsoluteLocations)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "FocusPlayerLocations");
    struct
    {
        struct TArray<struct FVector> InAbsoluteLocations;
    } Parms{};
    Parms.InAbsoluteLocations = (struct TArray<struct FVector>)InAbsoluteLocations;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::FocusPlayerLocation(const struct FVector& InAbsoluteLocation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "FocusPlayerLocation");
    struct
    {
        struct FVector InAbsoluteLocation;
    } Parms{};
    Parms.InAbsoluteLocation = (struct FVector)InAbsoluteLocation;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::FlushLevelStreaming()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "FlushLevelStreaming");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::FindLevels(struct FString InLevelKeyword, struct TArray<struct FString>& OutFoundLevelPackageNames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "FindLevels");
    struct
    {
        struct FString InLevelKeyword;
        struct TArray<struct FString> OutFoundLevelPackageNames;
    } Parms{};
    Parms.InLevelKeyword = (struct FString)InLevelKeyword;
    this->ProcessEvent(Func, &Parms);
    OutFoundLevelPackageNames = Parms.OutFoundLevelPackageNames;
}

struct FString UCustomWorldComposition::FindLandscapeTransitionWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "FindLandscapeTransitionWorld");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UCustomWorldComposition::DisableWorldCompositionStreamingAfterComplete(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "DisableWorldCompositionStreamingAfterComplete");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::ClearStreamingScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "ClearStreamingScene");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UCustomWorldComposition::AddStreamingScene(const struct TArray<struct FName>& InExtraScanningMaps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CustomWorldComposition", "AddStreamingScene");
    struct
    {
        struct TArray<struct FName> InExtraScanningMaps;
    } Parms{};
    Parms.InExtraScanningMaps = (struct TArray<struct FName>)InExtraScanningMaps;
    this->ProcessEvent(Func, &Parms);
}

// AFreezeRebasingVolume
void AFreezeRebasingVolume::EndOverlap(struct AActor* ThisActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FreezeRebasingVolume", "EndOverlap");
    struct
    {
        struct AActor* ThisActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.ThisActor = (struct AActor*)ThisActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void AFreezeRebasingVolume::BeginOverlap(struct AActor* ThisActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("FreezeRebasingVolume", "BeginOverlap");
    struct
    {
        struct AActor* ThisActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.ThisActor = (struct AActor*)ThisActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// AGamePlayValidAreaActor
void AGamePlayValidAreaActor::SaveAllToConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GamePlayValidAreaActor", "SaveAllToConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AGeneralLevelVolume
void AGeneralLevelVolume::ReCreateDebugLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneralLevelVolume", "ReCreateDebugLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGeneralLevelVolume::LinkConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneralLevelVolume", "LinkConnection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGeneralLevelVolume::ClearDebugLine()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneralLevelVolume", "ClearDebugLine");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AGeneralLevelVolume::BreakConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneralLevelVolume", "BreakConnection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AOpenWorldImGuiPanel
void AOpenWorldImGuiPanel::ReloadConfiguration()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldImGuiPanel", "ReloadConfiguration");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UOpenWorldStreamingBlueprintTools
void UOpenWorldStreamingBlueprintTools::UploadMemReportFull(struct FString InGameVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "UploadMemReportFull");
    struct
    {
        struct FString InGameVersion;
    } Parms{};
    Parms.InGameVersion = (struct FString)InGameVersion;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UOpenWorldStreamingBlueprintTools::SetActorVisiableStatus(struct TArray<struct AActor*>& InActors, uint8_t bInVisbale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "SetActorVisiableStatus");
    struct
    {
        struct TArray<struct AActor*> InActors;
        uint8_t bInVisbale;
    } Parms{};
    Parms.bInVisbale = (uint8_t)bInVisbale;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InActors = Parms.InActors;
}

uint8_t UOpenWorldStreamingBlueprintTools::RegexPattern(struct FString InFilterMsg, struct FString InRegexPatternMsg)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "RegexPattern");
    struct
    {
        struct FString InFilterMsg;
        struct FString InRegexPatternMsg;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFilterMsg = (struct FString)InFilterMsg;
    Parms.InRegexPatternMsg = (struct FString)InRegexPatternMsg;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldStreamingBlueprintTools::OpenLevel(struct UObject* WorldContextObject, struct FName LevelName, uint8_t bAbsolute, struct FString Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "OpenLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName LevelName;
        uint8_t bAbsolute;
        struct FString Options;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FName)LevelName;
    Parms.bAbsolute = (uint8_t)bAbsolute;
    Parms.Options = (struct FString)Options;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldStreamingBlueprintTools::MarkPackageDirty(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "MarkPackageDirty");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldStreamingBlueprintTools::IsTypeOf(struct AActor* InActor, struct UObject* InType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "IsTypeOf");
    struct
    {
        struct AActor* InActor;
        struct UObject* InType;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    Parms.InType = (struct UObject*)InType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldStreamingBlueprintTools::IsSelected(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "IsSelected");
    struct
    {
        struct AActor* Actor;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorldComposition* UOpenWorldStreamingBlueprintTools::GetWorldComposition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetWorldComposition");
    struct
    {
        struct UWorldComposition* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldStreamingBlueprintTools::GetStaticMeshComponentsWithChilds(struct TArray<struct AActor*> InActors, struct TArray<struct UStaticMeshComponent*>& OutMeshComps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetStaticMeshComponentsWithChilds");
    struct
    {
        struct TArray<struct AActor*> InActors;
        struct TArray<struct UStaticMeshComponent*> OutMeshComps;
    } Parms{};
    Parms.InActors = (struct TArray<struct AActor*>)InActors;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMeshComps = Parms.OutMeshComps;
}

void UOpenWorldStreamingBlueprintTools::GetStaticMeshComponentsWithChild(struct AActor* InActor, struct TArray<struct UStaticMeshComponent*>& OutMeshComps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetStaticMeshComponentsWithChild");
    struct
    {
        struct AActor* InActor;
        struct TArray<struct UStaticMeshComponent*> OutMeshComps;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMeshComps = Parms.OutMeshComps;
}

struct FString UOpenWorldStreamingBlueprintTools::GetObjectLevelRef(struct UObject* InTargetObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetObjectLevelRef");
    struct
    {
        struct UObject* InTargetObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.InTargetObject = (struct UObject*)InTargetObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCustomWorldComposition* UOpenWorldStreamingBlueprintTools::GetCustomWorldComposition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetCustomWorldComposition");
    struct
    {
        struct UCustomWorldComposition* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UOpenWorldStreamingBlueprintTools::GetBuildMapRootPath(struct UWorld* InPersistentLevelWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetBuildMapRootPath");
    struct
    {
        struct UWorld* InPersistentLevelWorld;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPersistentLevelWorld = (struct UWorld*)InPersistentLevelWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldStreamingBlueprintTools::GetAllChildActor(struct AActor* InActor, struct TArray<struct AActor*>& OutChildActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetAllChildActor");
    struct
    {
        struct AActor* InActor;
        struct TArray<struct AActor*> OutChildActors;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutChildActors = Parms.OutChildActors;
}

struct FString UOpenWorldStreamingBlueprintTools::GetActorLableName(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetActorLableName");
    struct
    {
        struct AActor* InActor;
        struct FString ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UOpenWorldStreamingBlueprintTools::GetActorInLevel(struct ULevel* InLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "GetActorInLevel");
    struct
    {
        struct ULevel* InLevel;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.InLevel = (struct ULevel*)InLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UOpenWorldStreamingBlueprintTools::FindAllActosByTag(struct UObject* WorldContextObject, struct FName InTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "FindAllActosByTag");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName InTag;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InTag = (struct FName)InTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> UOpenWorldStreamingBlueprintTools::FindAllActorsByTagInLevel(struct UObject* WorldContextObject, struct FName InTag, struct FName InLevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "FindAllActorsByTagInLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FName InTag;
        struct FName InLevelName;
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InTag = (struct FName)InTag;
    Parms.InLevelName = (struct FName)InLevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UOpenWorldStreamingBlueprintTools::EndRecordTime(struct FString InRecordFunctionName, uint8_t bInPrintLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "EndRecordTime");
    struct
    {
        struct FString InRecordFunctionName;
        uint8_t bInPrintLog;
        float ReturnValue;
    } Parms{};
    Parms.InRecordFunctionName = (struct FString)InRecordFunctionName;
    Parms.bInPrintLog = (uint8_t)bInPrintLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UOpenWorldStreamingBlueprintTools::BeginRecordTime(struct FString InRecordFunctionName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldStreamingBlueprintTools", "BeginRecordTime");
    struct
    {
        struct FString InRecordFunctionName;
    } Parms{};
    Parms.InRecordFunctionName = (struct FString)InRecordFunctionName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ULandscapeMeshFuncLib
void ULandscapeMeshFuncLib::LandscapeVTFlush()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LandscapeMeshFuncLib", "LandscapeVTFlush");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// ARoomVolume
void ARoomVolume::EndOverlap(struct AActor* ThisActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoomVolume", "EndOverlap");
    struct
    {
        struct AActor* ThisActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.ThisActor = (struct AActor*)ThisActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

void ARoomVolume::BeginOverlap(struct AActor* ThisActor, struct AActor* OtherActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("RoomVolume", "BeginOverlap");
    struct
    {
        struct AActor* ThisActor;
        struct AActor* OtherActor;
    } Parms{};
    Parms.ThisActor = (struct AActor*)ThisActor;
    Parms.OtherActor = (struct AActor*)OtherActor;
    this->ProcessEvent(Func, &Parms);
}

// USimpleProfilerBlueprintTools
void USimpleProfilerBlueprintTools::EndSimpleProfiler(struct UObject* WorldContext, struct FString MapName, uint8_t bReport, uint8_t bSave)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SimpleProfilerBlueprintTools", "EndSimpleProfiler");
    struct
    {
        struct UObject* WorldContext;
        struct FString MapName;
        uint8_t bReport;
        uint8_t bSave;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    Parms.MapName = (struct FString)MapName;
    Parms.bReport = (uint8_t)bReport;
    Parms.bSave = (uint8_t)bSave;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void USimpleProfilerBlueprintTools::BeginSimpleProfiler(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("SimpleProfilerBlueprintTools", "BeginSimpleProfiler");
    struct
    {
        struct UObject* WorldContext;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UOpenWorldPIESettings
void UOpenWorldPIESettings::Save()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPIESettings", "Save");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UOpenWorldPIESettings* UOpenWorldPIESettings::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPIESettings", "Get");
    struct
    {
        struct UOpenWorldPIESettings* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
