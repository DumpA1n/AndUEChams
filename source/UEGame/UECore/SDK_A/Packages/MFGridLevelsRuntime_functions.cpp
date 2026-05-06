#include "MFGridLevelsRuntime.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ALODViewDistanceVolume
void ALODViewDistanceVolume::ActorEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LODViewDistanceVolume", "ActorEndOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void ALODViewDistanceVolume::ActorBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LODViewDistanceVolume", "ActorBeginOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        bool bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (bool)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

// IMFModifyLoadDistActorInterface
bool IMFModifyLoadDistActorInterface::IsVisibleToBox(const struct FBox& Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFModifyLoadDistActorInterface", "IsVisibleToBox");
    struct
    {
        struct FBox Box;
        bool ReturnValue;
    } Parms{};
    Parms.Box = (struct FBox)Box;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMFModifyLoadDistActorType IMFModifyLoadDistActorInterface::GetModifyLoadDistActorType_NotViewTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFModifyLoadDistActorInterface", "GetModifyLoadDistActorType_NotViewTarget");
    struct
    {
        enum EMFModifyLoadDistActorType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EMFModifyLoadDistActorType IMFModifyLoadDistActorInterface::GetModifyLoadDistActorType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFModifyLoadDistActorInterface", "GetModifyLoadDistActorType");
    struct
    {
        enum EMFModifyLoadDistActorType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFWaterComponent
void UMFWaterComponent::GenerateMesh()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWaterComponent", "GenerateMesh");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWaterComponent::ApplyLOD()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWaterComponent", "ApplyLOD");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFWorldComposition
void UMFWorldComposition::UpdateTileCacheMap()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "UpdateTileCacheMap");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::UnLoadLevel(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "UnLoadLevel");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::SetOverrideStreamingDistance(bool bOverride, float StreamingDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "SetOverrideStreamingDistance");
    struct
    {
        bool bOverride;
        float StreamingDistance;
    } Parms{};
    Parms.bOverride = (bool)bOverride;
    Parms.StreamingDistance = (float)StreamingDistance;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::SetbEnableStreamVolume(bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "SetbEnableStreamVolume");
    struct
    {
        bool bEnable;
    } Parms{};
    Parms.bEnable = (bool)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::RestoreLevel(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "RestoreLevel");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::RemovePreloadLevel(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "RemovePreloadLevel");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::RemoveExcludeLevel(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "RemoveExcludeLevel");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::RegisterLevelLoadActor(struct AWorldCompositionLevelLoadActor* CurrLevelLoadActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "RegisterLevelLoadActor");
    struct
    {
        struct AWorldCompositionLevelLoadActor* CurrLevelLoadActor;
    } Parms{};
    Parms.CurrLevelLoadActor = (struct AWorldCompositionLevelLoadActor*)CurrLevelLoadActor;
    this->ProcessEvent(Func, &Parms);
}

bool UMFWorldComposition::IsDisableTickInDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "IsDisableTickInDS");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFWorldComposition::IncrementAddExcludeLevel(struct TArray<struct FString> UnloadLevelArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "IncrementAddExcludeLevel");
    struct
    {
        struct TArray<struct FString> UnloadLevelArray;
    } Parms{};
    Parms.UnloadLevelArray = (struct TArray<struct FString>)UnloadLevelArray;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::DisableTickInDS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "DisableTickInDS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::AddtionLabelFilterTiles(struct TArray<struct FString> AdditionLabelFilterLevels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "AddtionLabelFilterTiles");
    struct
    {
        struct TArray<struct FString> AdditionLabelFilterLevels;
    } Parms{};
    Parms.AdditionLabelFilterLevels = (struct TArray<struct FString>)AdditionLabelFilterLevels;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::AddtionIgnoreTiles(struct TArray<struct FString> AdditionIgnoreLevels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "AddtionIgnoreTiles");
    struct
    {
        struct TArray<struct FString> AdditionIgnoreLevels;
    } Parms{};
    Parms.AdditionIgnoreLevels = (struct TArray<struct FString>)AdditionIgnoreLevels;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::AddPreloadLevel(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "AddPreloadLevel");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

void UMFWorldComposition::AddExcludeLevel(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWorldComposition", "AddExcludeLevel");
    struct
    {
        struct FString LevelName;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    this->ProcessEvent(Func, &Parms);
}

// UMFWorldCompositionStatics
void UMFWorldCompositionStatics::UnLoadLevel(struct UObject* WorldContextObject, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "UnLoadLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::UnLimitLevelLoad(struct UObject* WorldContextObject, bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "UnLimitLevelLoad");
    struct
    {
        struct UObject* WorldContextObject;
        bool bEnabled;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bEnabled = (bool)bEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::SetOverrideStreamingDistance(struct UObject* WorldContextObject, bool bOverride, float StreamingDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "SetOverrideStreamingDistance");
    struct
    {
        struct UObject* WorldContextObject;
        bool bOverride;
        float StreamingDistance;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bOverride = (bool)bOverride;
    Parms.StreamingDistance = (float)StreamingDistance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::SetLoadLevelState(struct UObject* WorldContextObject, EMFLoadLevelState InLoadLevelState, struct AActor* ViewTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "SetLoadLevelState");
    struct
    {
        struct UObject* WorldContextObject;
        enum EMFLoadLevelState InLoadLevelState;
        struct AActor* ViewTarget;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InLoadLevelState = (enum EMFLoadLevelState)InLoadLevelState;
    Parms.ViewTarget = (struct AActor*)ViewTarget;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::SetLimitLoadLevelEnable(struct UObject* WorldContextObject, bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "SetLimitLoadLevelEnable");
    struct
    {
        struct UObject* WorldContextObject;
        bool bEnable;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::SetbEnableStreamVolume(struct UObject* WorldContextObject, bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "SetbEnableStreamVolume");
    struct
    {
        struct UObject* WorldContextObject;
        bool bEnabled;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bEnabled = (bool)bEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::RestoreLevel(struct UObject* WorldContextObject, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "RestoreLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::RemovePreloadLevel(struct UObject* WorldContextObject, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "RemovePreloadLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::RemoveExcludeLevel(struct UObject* WorldContextObject, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "RemoveExcludeLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::ReloadLimitLoadLevel(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "ReloadLimitLoadLevel");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFWorldCompositionStatics::IsWaitingForUnloading(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "IsWaitingForUnloading");
    struct
    {
        struct UObject* WorldContextObject;
        bool ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFWorldCompositionStatics::IncrementAddExcludeLevel(struct UObject* WorldContextObject, struct TArray<struct FString> UnloadLevelArray)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "IncrementAddExcludeLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FString> UnloadLevelArray;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.UnloadLevelArray = (struct TArray<struct FString>)UnloadLevelArray;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::FlushWorldCompositionLevelLoadData(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "FlushWorldCompositionLevelLoadData");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::DisableWorldCompositionTickInDS(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "DisableWorldCompositionTickInDS");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::AddtionLabelFilterTiles(struct UObject* WorldContextObject, struct TArray<struct FString> LabelTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "AddtionLabelFilterTiles");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<struct FString> LabelTags;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LabelTags = (struct TArray<struct FString>)LabelTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::AddPreloadLevel(struct UObject* WorldContextObject, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "AddPreloadLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWorldCompositionStatics::AddExcludeLevel(struct UObject* WorldContextObject, struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWorldCompositionStatics", "AddExcludeLevel");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LevelName;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
