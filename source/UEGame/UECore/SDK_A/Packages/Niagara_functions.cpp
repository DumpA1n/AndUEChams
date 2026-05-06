#include "Niagara.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ANiagaraActor
void ANiagaraActor::SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraActor", "SetDestroyOnSystemFinish");
    struct
    {
        bool bShouldDestroyOnSystemFinish;
    } Parms{};
    Parms.bShouldDestroyOnSystemFinish = (bool)bShouldDestroyOnSystemFinish;
    this->ProcessEvent(Func, &Parms);
}

void ANiagaraActor::OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraActor", "OnNiagaraSystemFinished");
    struct
    {
        struct UNiagaraComponent* FinishedComponent;
    } Parms{};
    Parms.FinishedComponent = (struct UNiagaraComponent*)FinishedComponent;
    this->ProcessEvent(Func, &Parms);
}

// UNiagaraComponent
void UNiagaraComponent::SetVariableVec4(struct FName InVariableName, const struct FVector4& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableVec4");
    struct
    {
        struct FName InVariableName;
        struct FVector4 InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (struct FVector4)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableVec3(struct FName InVariableName, struct FVector InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableVec3");
    struct
    {
        struct FName InVariableName;
        struct FVector InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (struct FVector)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableVec2(struct FName InVariableName, struct FVector2D InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableVec2");
    struct
    {
        struct FName InVariableName;
        struct FVector2D InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (struct FVector2D)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableTextureRenderTarget");
    struct
    {
        struct FName InVariableName;
        struct UTextureRenderTarget* TextureRenderTarget;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.TextureRenderTarget = (struct UTextureRenderTarget*)TextureRenderTarget;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableQuat(struct FName InVariableName, const struct FQuat& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableQuat");
    struct
    {
        struct FName InVariableName;
        struct FQuat InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (struct FQuat)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableObject(struct FName InVariableName, struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableObject");
    struct
    {
        struct FName InVariableName;
        struct UObject* Object;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.Object = (struct UObject*)Object;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableMaterial");
    struct
    {
        struct FName InVariableName;
        struct UMaterialInterface* Object;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.Object = (struct UMaterialInterface*)Object;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableLinearColor(struct FName InVariableName, const struct FLinearColor& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableLinearColor");
    struct
    {
        struct FName InVariableName;
        struct FLinearColor InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableInt(struct FName InVariableName, int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableInt");
    struct
    {
        struct FName InVariableName;
        int32_t InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (int32_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableFloat(struct FName InVariableName, float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableFloat");
    struct
    {
        struct FName InVariableName;
        float InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableBool(struct FName InVariableName, bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableBool");
    struct
    {
        struct FName InVariableName;
        bool InValue;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetVariableActor(struct FName InVariableName, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetVariableActor");
    struct
    {
        struct FName InVariableName;
        struct AActor* Actor;
    } Parms{};
    Parms.InVariableName = (struct FName)InVariableName;
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetTickBehavior(ENiagaraTickBehavior NewTickBehavior)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetTickBehavior");
    struct
    {
        enum ENiagaraTickBehavior NewTickBehavior;
    } Parms{};
    Parms.NewTickBehavior = (enum ENiagaraTickBehavior)NewTickBehavior;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetSeekDelta(float InSeekDelta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetSeekDelta");
    struct
    {
        float InSeekDelta;
    } Parms{};
    Parms.InSeekDelta = (float)InSeekDelta;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetRenderingEnabled(bool bInRenderingEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetRenderingEnabled");
    struct
    {
        bool bInRenderingEnabled;
    } Parms{};
    Parms.bInRenderingEnabled = (bool)bInRenderingEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetPreviewLODDistance");
    struct
    {
        bool bEnablePreviewLODDistance;
        float PreviewLODDistance;
    } Parms{};
    Parms.bEnablePreviewLODDistance = (bool)bEnablePreviewLODDistance;
    Parms.PreviewLODDistance = (float)PreviewLODDistance;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetPaused(bool bInPaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetPaused");
    struct
    {
        bool bInPaused;
    } Parms{};
    Parms.bInPaused = (bool)bInPaused;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableVec4(struct FString InVariableName, const struct FVector4& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableVec4");
    struct
    {
        struct FString InVariableName;
        struct FVector4 InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FVector4)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableVec3");
    struct
    {
        struct FString InVariableName;
        struct FVector InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FVector)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableVec2");
    struct
    {
        struct FString InVariableName;
        struct FVector2D InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FVector2D)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableQuat(struct FString InVariableName, const struct FQuat& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableQuat");
    struct
    {
        struct FString InVariableName;
        struct FQuat InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FQuat)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableObject");
    struct
    {
        struct FString InVariableName;
        struct UObject* Object;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.Object = (struct UObject*)Object;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableLinearColor(struct FString InVariableName, const struct FLinearColor& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableLinearColor");
    struct
    {
        struct FString InVariableName;
        struct FLinearColor InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableInt");
    struct
    {
        struct FString InVariableName;
        int32_t InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (int32_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableFloat(struct FString InVariableName, float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableFloat");
    struct
    {
        struct FString InVariableName;
        float InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableBool(struct FString InVariableName, bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableBool");
    struct
    {
        struct FString InVariableName;
        bool InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetNiagaraVariableActor");
    struct
    {
        struct FString InVariableName;
        struct AActor* Actor;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetMaxSimTime(float InMaxTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetMaxSimTime");
    struct
    {
        float InMaxTime;
    } Parms{};
    Parms.InMaxTime = (float)InMaxTime;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetGpuComputeDebug(bool bEnableDebug)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetGpuComputeDebug");
    struct
    {
        bool bEnableDebug;
    } Parms{};
    Parms.bEnableDebug = (bool)bEnableDebug;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetForceSolo(bool bInForceSolo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetForceSolo");
    struct
    {
        bool bInForceSolo;
    } Parms{};
    Parms.bInForceSolo = (bool)bInForceSolo;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetDesiredAge(float InDesiredAge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetDesiredAge");
    struct
    {
        float InDesiredAge;
    } Parms{};
    Parms.InDesiredAge = (float)InDesiredAge;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetCanRenderWhileSeeking");
    struct
    {
        bool bInCanRenderWhileSeeking;
    } Parms{};
    Parms.bInCanRenderWhileSeeking = (bool)bInCanRenderWhileSeeking;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetAutoDestroy(bool bInAutoDestroy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetAutoDestroy");
    struct
    {
        bool bInAutoDestroy;
    } Parms{};
    Parms.bInAutoDestroy = (bool)bInAutoDestroy;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetAsset(struct UNiagaraSystem* InAsset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetAsset");
    struct
    {
        struct UNiagaraSystem* InAsset;
    } Parms{};
    Parms.InAsset = (struct UNiagaraSystem*)InAsset;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetAllowScalability(bool bAllow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetAllowScalability");
    struct
    {
        bool bAllow;
    } Parms{};
    Parms.bAllow = (bool)bAllow;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SetAgeUpdateMode");
    struct
    {
        enum ENiagaraAgeUpdateMode InAgeUpdateMode;
    } Parms{};
    Parms.InAgeUpdateMode = (enum ENiagaraAgeUpdateMode)InAgeUpdateMode;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::SeekToDesiredAge(float InDesiredAge)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "SeekToDesiredAge");
    struct
    {
        float InDesiredAge;
    } Parms{};
    Parms.InDesiredAge = (float)InDesiredAge;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::ResetSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "ResetSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::ReinitializeSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "ReinitializeSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UNiagaraComponent::IsPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "IsPaused");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENiagaraTickBehavior UNiagaraComponent::GetTickBehavior()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetTickBehavior");
    struct
    {
        enum ENiagaraTickBehavior ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNiagaraComponent::GetSeekDelta()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetSeekDelta");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNiagaraComponent::GetPreviewLODDistanceEnabled()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetPreviewLODDistanceEnabled");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNiagaraComponent::GetPreviewLODDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetPreviewLODDistance");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UNiagaraComponent::GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetNiagaraParticleValueVec3_DebugOnly");
    struct
    {
        struct FString InEmitterName;
        struct FString InValueName;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.InEmitterName = (struct FString)InEmitterName;
    Parms.InValueName = (struct FString)InValueName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UNiagaraComponent::GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetNiagaraParticleValues_DebugOnly");
    struct
    {
        struct FString InEmitterName;
        struct FString InValueName;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.InEmitterName = (struct FString)InEmitterName;
    Parms.InValueName = (struct FString)InValueName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UNiagaraComponent::GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetNiagaraParticlePositions_DebugOnly");
    struct
    {
        struct FString InEmitterName;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.InEmitterName = (struct FString)InEmitterName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNiagaraComponent::GetMaxSimTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetMaxSimTime");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNiagaraComponent::GetForceSolo()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetForceSolo");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNiagaraComponent::GetDesiredAge()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetDesiredAge");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNiagaraDataInterface* UNiagaraComponent::GetDataInterface(struct FString Name)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetDataInterface");
    struct
    {
        struct FString Name;
        struct UNiagaraDataInterface* ReturnValue;
    } Parms{};
    Parms.Name = (struct FString)Name;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNiagaraSystem* UNiagaraComponent::GetAsset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetAsset");
    struct
    {
        struct UNiagaraSystem* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

ENiagaraAgeUpdateMode UNiagaraComponent::GetAgeUpdateMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "GetAgeUpdateMode");
    struct
    {
        enum ENiagaraAgeUpdateMode ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNiagaraComponent::AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "AdvanceSimulationByTime");
    struct
    {
        float SimulateTime;
        float TickDeltaSeconds;
    } Parms{};
    Parms.SimulateTime = (float)SimulateTime;
    Parms.TickDeltaSeconds = (float)TickDeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraComponent::AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraComponent", "AdvanceSimulation");
    struct
    {
        int32_t TickCount;
        float TickDeltaSeconds;
    } Parms{};
    Parms.TickCount = (int32_t)TickCount;
    Parms.TickDeltaSeconds = (float)TickDeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

// UNiagaraDataInterfaceArrayFunctionLibrary
void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FVector4>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector4");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FVector4> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<struct FVector4>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FVector2D>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector2D");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FVector2D> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<struct FVector2D>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FVector>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayVector");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FVector> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<struct FVector>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FQuat>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayQuat");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FQuat> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<struct FQuat>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<int32_t>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayInt32");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<int32_t> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<int32_t>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<float>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayFloat");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<float> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<float>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<struct FLinearColor>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayColor");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FLinearColor> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<struct FLinearColor>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, const struct TArray<bool>& ArrayData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "SetNiagaraArrayBool");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<bool> ArrayData;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    Parms.ArrayData = (struct TArray<bool>)ArrayData;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector4> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector4");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FVector4> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector2D> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector2D");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FVector2D> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FVector> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayVector");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FQuat> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayQuat");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FQuat> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayInt32");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<float> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayFloat");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<float> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FLinearColor> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayColor");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<struct FLinearColor> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<bool> UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraDataInterfaceArrayFunctionLibrary", "GetNiagaraArrayBool");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FName OverrideName;
        struct TArray<bool> ReturnValue;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FName)OverrideName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// INiagaraParticleCallbackHandler
void INiagaraParticleCallbackHandler::ReceiveParticleData(const struct TArray<struct FBasicParticleData>& Data, struct UNiagaraSystem* NiagaraSystem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParticleCallbackHandler", "ReceiveParticleData");
    struct
    {
        struct TArray<struct FBasicParticleData> Data;
        struct UNiagaraSystem* NiagaraSystem;
    } Parms{};
    Parms.Data = (struct TArray<struct FBasicParticleData>)Data;
    Parms.NiagaraSystem = (struct UNiagaraSystem*)NiagaraSystem;
    this->ProcessEvent(Func, &Parms);
}

// UNiagaraDataInterfaceGrid2DCollection
void UNiagaraDataInterfaceGrid2DCollection::GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetTextureSize");
    struct
    {
        struct UNiagaraComponent* Component;
        int32_t SizeX;
        int32_t SizeY;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    this->ProcessEvent(Func, &Parms);
    SizeX = Parms.SizeX;
    SizeY = Parms.SizeY;
}

void UNiagaraDataInterfaceGrid2DCollection::GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid2DCollection", "GetRawTextureSize");
    struct
    {
        struct UNiagaraComponent* Component;
        int32_t SizeX;
        int32_t SizeY;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    this->ProcessEvent(Func, &Parms);
    SizeX = Parms.SizeX;
    SizeY = Parms.SizeY;
}

bool UNiagaraDataInterfaceGrid2DCollection::FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillTexture2D");
    struct
    {
        struct UNiagaraComponent* Component;
        struct UTextureRenderTarget2D* Dest;
        int32_t AttributeIndex;
        bool ReturnValue;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    Parms.Dest = (struct UTextureRenderTarget2D*)Dest;
    Parms.AttributeIndex = (int32_t)AttributeIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNiagaraDataInterfaceGrid2DCollection::FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid2DCollection", "FillRawTexture2D");
    struct
    {
        struct UNiagaraComponent* Component;
        struct UTextureRenderTarget2D* Dest;
        int32_t TilesX;
        int32_t TilesY;
        bool ReturnValue;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    Parms.Dest = (struct UTextureRenderTarget2D*)Dest;
    this->ProcessEvent(Func, &Parms);
    TilesX = Parms.TilesX;
    TilesY = Parms.TilesY;
    return Parms.ReturnValue;
}

// UNiagaraDataInterfaceGrid3DCollection
void UNiagaraDataInterfaceGrid3DCollection::GetTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetTextureSize");
    struct
    {
        struct UNiagaraComponent* Component;
        int32_t SizeX;
        int32_t SizeY;
        int32_t SizeZ;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    this->ProcessEvent(Func, &Parms);
    SizeX = Parms.SizeX;
    SizeY = Parms.SizeY;
    SizeZ = Parms.SizeZ;
}

void UNiagaraDataInterfaceGrid3DCollection::GetRawTextureSize(struct UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid3DCollection", "GetRawTextureSize");
    struct
    {
        struct UNiagaraComponent* Component;
        int32_t SizeX;
        int32_t SizeY;
        int32_t SizeZ;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    this->ProcessEvent(Func, &Parms);
    SizeX = Parms.SizeX;
    SizeY = Parms.SizeY;
    SizeZ = Parms.SizeZ;
}

bool UNiagaraDataInterfaceGrid3DCollection::FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillVolumeTexture");
    struct
    {
        struct UNiagaraComponent* Component;
        struct UVolumeTexture* Dest;
        int32_t AttributeIndex;
        bool ReturnValue;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    Parms.Dest = (struct UVolumeTexture*)Dest;
    Parms.AttributeIndex = (int32_t)AttributeIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNiagaraDataInterfaceGrid3DCollection::FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraDataInterfaceGrid3DCollection", "FillRawVolumeTexture");
    struct
    {
        struct UNiagaraComponent* Component;
        struct UVolumeTexture* Dest;
        int32_t TilesX;
        int32_t TilesY;
        int32_t TileZ;
        bool ReturnValue;
    } Parms{};
    Parms.Component = (struct UNiagaraComponent*)Component;
    Parms.Dest = (struct UVolumeTexture*)Dest;
    this->ProcessEvent(Func, &Parms);
    TilesX = Parms.TilesX;
    TilesY = Parms.TilesY;
    TileZ = Parms.TileZ;
    return Parms.ReturnValue;
}

// UNiagaraFunctionLibrary
struct UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, uint8_t LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAttached");
    struct
    {
        struct UNiagaraSystem* SystemTemplate;
        struct USceneComponent* AttachToComponent;
        struct FName AttachPointName;
        struct FVector Location;
        struct FRotator Rotation;
        uint8_t LocationType;
        bool bAutoDestroy;
        bool bAutoActivate;
        enum ENCPoolMethod PoolingMethod;
        bool bPreCullCheck;
        struct UNiagaraComponent* ReturnValue;
    } Parms{};
    Parms.SystemTemplate = (struct UNiagaraSystem*)SystemTemplate;
    Parms.AttachToComponent = (struct USceneComponent*)AttachToComponent;
    Parms.AttachPointName = (struct FName)AttachPointName;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.LocationType = (uint8_t)LocationType;
    Parms.bAutoDestroy = (bool)bAutoDestroy;
    Parms.bAutoActivate = (bool)bAutoActivate;
    Parms.PoolingMethod = (enum ENCPoolMethod)PoolingMethod;
    Parms.bPreCullCheck = (bool)bPreCullCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UNiagaraComponent* UNiagaraFunctionLibrary::SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SpawnSystemAtLocation");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNiagaraSystem* SystemTemplate;
        struct FVector Location;
        struct FRotator Rotation;
        struct FVector Scale;
        bool bAutoDestroy;
        bool bAutoActivate;
        enum ENCPoolMethod PoolingMethod;
        bool bPreCullCheck;
        struct UNiagaraComponent* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.SystemTemplate = (struct UNiagaraSystem*)SystemTemplate;
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.Scale = (struct FVector)Scale;
    Parms.bAutoDestroy = (bool)bAutoDestroy;
    Parms.bAutoActivate = (bool)bAutoActivate;
    Parms.PoolingMethod = (enum ENCPoolMethod)PoolingMethod;
    Parms.bPreCullCheck = (bool)bPreCullCheck;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNiagaraFunctionLibrary::SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetVolumeTextureObject");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FString OverrideName;
        struct UVolumeTexture* Texture;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FString)OverrideName;
    Parms.Texture = (struct UVolumeTexture*)Texture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraFunctionLibrary::SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetTextureObject");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FString OverrideName;
        struct UTexture* Texture;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FString)OverrideName;
    Parms.Texture = (struct UTexture*)Texture;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraFunctionLibrary::SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, const struct TArray<struct FName>& SamplingRegions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "SetSkeletalMeshDataInterfaceSamplingRegions");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FString OverrideName;
        struct TArray<struct FName> SamplingRegions;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FString)OverrideName;
    Parms.SamplingRegions = (struct TArray<struct FName>)SamplingRegions;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMeshComponent");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FString OverrideName;
        struct UStaticMeshComponent* StaticMeshComponent;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FString)OverrideName;
    Parms.StaticMeshComponent = (struct UStaticMeshComponent*)StaticMeshComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableStaticMesh");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FString OverrideName;
        struct UStaticMesh* StaticMesh;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FString)OverrideName;
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UNiagaraFunctionLibrary::OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "OverrideSystemUserVariableSkeletalMeshComponent");
    struct
    {
        struct UNiagaraComponent* NiagaraSystem;
        struct FString OverrideName;
        struct USkeletalMeshComponent* SkeletalMeshComponent;
    } Parms{};
    Parms.NiagaraSystem = (struct UNiagaraComponent*)NiagaraSystem;
    Parms.OverrideName = (struct FString)OverrideName;
    Parms.SkeletalMeshComponent = (struct USkeletalMeshComponent*)SkeletalMeshComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UNiagaraParameterCollectionInstance* UNiagaraFunctionLibrary::GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("NiagaraFunctionLibrary", "GetNiagaraParameterCollection");
    struct
    {
        struct UObject* WorldContextObject;
        struct UNiagaraParameterCollection* Collection;
        struct UNiagaraParameterCollectionInstance* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Collection = (struct UNiagaraParameterCollection*)Collection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UNiagaraParameterCollectionInstance
void UNiagaraParameterCollectionInstance::SetVectorParameter(struct FString InVariableName, struct FVector InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetVectorParameter");
    struct
    {
        struct FString InVariableName;
        struct FVector InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FVector)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetVector4Parameter(struct FString InVariableName, const struct FVector4& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetVector4Parameter");
    struct
    {
        struct FString InVariableName;
        struct FVector4 InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FVector4)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetVector2DParameter");
    struct
    {
        struct FString InVariableName;
        struct FVector2D InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FVector2D)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetQuatParameter(struct FString InVariableName, const struct FQuat& InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetQuatParameter");
    struct
    {
        struct FString InVariableName;
        struct FQuat InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FQuat)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetIntParameter(struct FString InVariableName, int32_t InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetIntParameter");
    struct
    {
        struct FString InVariableName;
        int32_t InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (int32_t)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetFloatParameter(struct FString InVariableName, float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetFloatParameter");
    struct
    {
        struct FString InVariableName;
        float InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetColorParameter(struct FString InVariableName, struct FLinearColor InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetColorParameter");
    struct
    {
        struct FString InVariableName;
        struct FLinearColor InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (struct FLinearColor)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UNiagaraParameterCollectionInstance::SetBoolParameter(struct FString InVariableName, bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "SetBoolParameter");
    struct
    {
        struct FString InVariableName;
        bool InValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

struct FVector UNiagaraParameterCollectionInstance::GetVectorParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetVectorParameter");
    struct
    {
        struct FString InVariableName;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 UNiagaraParameterCollectionInstance::GetVector4Parameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetVector4Parameter");
    struct
    {
        struct FString InVariableName;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UNiagaraParameterCollectionInstance::GetVector2DParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetVector2DParameter");
    struct
    {
        struct FString InVariableName;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FQuat UNiagaraParameterCollectionInstance::GetQuatParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetQuatParameter");
    struct
    {
        struct FString InVariableName;
        struct FQuat ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UNiagaraParameterCollectionInstance::GetIntParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetIntParameter");
    struct
    {
        struct FString InVariableName;
        int32_t ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UNiagaraParameterCollectionInstance::GetFloatParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetFloatParameter");
    struct
    {
        struct FString InVariableName;
        float ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UNiagaraParameterCollectionInstance::GetColorParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetColorParameter");
    struct
    {
        struct FString InVariableName;
        struct FLinearColor ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UNiagaraParameterCollectionInstance::GetBoolParameter(struct FString InVariableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraParameterCollectionInstance", "GetBoolParameter");
    struct
    {
        struct FString InVariableName;
        bool ReturnValue;
    } Parms{};
    Parms.InVariableName = (struct FString)InVariableName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ANiagaraPreviewBase
void ANiagaraPreviewBase::SetSystem(struct UNiagaraSystem* InSystem)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewBase", "SetSystem");
    struct
    {
        struct UNiagaraSystem* InSystem;
    } Parms{};
    Parms.InSystem = (struct UNiagaraSystem*)InSystem;
    this->ProcessEvent(Func, &Parms);
}

void ANiagaraPreviewBase::SetLabelText(const struct FText& InXAxisText, const struct FText& InYAxisText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewBase", "SetLabelText");
    struct
    {
        struct FText InXAxisText;
        struct FText InYAxisText;
    } Parms{};
    Parms.InXAxisText = (struct FText)InXAxisText;
    Parms.InYAxisText = (struct FText)InYAxisText;
    this->ProcessEvent(Func, &Parms);
}

// UNiagaraPreviewAxis
int32_t UNiagaraPreviewAxis::Num()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewAxis", "Num");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UNiagaraPreviewAxis::ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString& OutLabelText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewAxis", "ApplyToPreview");
    struct
    {
        struct UNiagaraComponent* PreviewComponent;
        int32_t PreviewIndex;
        bool bIsXAxis;
        struct FString OutLabelText;
    } Parms{};
    Parms.PreviewComponent = (struct UNiagaraComponent*)PreviewComponent;
    Parms.PreviewIndex = (int32_t)PreviewIndex;
    Parms.bIsXAxis = (bool)bIsXAxis;
    this->ProcessEvent(Func, &Parms);
    OutLabelText = Parms.OutLabelText;
}

// ANiagaraPreviewGrid
void ANiagaraPreviewGrid::SetPaused(bool bPaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewGrid", "SetPaused");
    struct
    {
        bool bPaused;
    } Parms{};
    Parms.bPaused = (bool)bPaused;
    this->ProcessEvent(Func, &Parms);
}

void ANiagaraPreviewGrid::GetPreviews(struct TArray<struct UNiagaraComponent*>& OutPreviews)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewGrid", "GetPreviews");
    struct
    {
        struct TArray<struct UNiagaraComponent*> OutPreviews;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutPreviews = Parms.OutPreviews;
}

void ANiagaraPreviewGrid::DeactivatePreviews()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewGrid", "DeactivatePreviews");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ANiagaraPreviewGrid::ActivatePreviews(bool bReset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraPreviewGrid", "ActivatePreviews");
    struct
    {
        bool bReset;
    } Parms{};
    Parms.bReset = (bool)bReset;
    this->ProcessEvent(Func, &Parms);
}

// UNiagaraScript
void UNiagaraScript::RaiseOnGPUCompilationComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("NiagaraScript", "RaiseOnGPUCompilationComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
