#include "MFEnvironment.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFEnvBurnComponent
void UMFEnvBurnComponent::OnRep_BurnedBlocks()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEnvBurnComponent", "OnRep_BurnedBlocks");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFEnvBurnFireBlockComponent
void UMFEnvBurnFireBlockComponent::OnRep_TurnOffEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEnvBurnFireBlockComponent", "OnRep_TurnOffEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFEnvBurnFireBlockComponent::OnRep_RemovePlants()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEnvBurnFireBlockComponent", "OnRep_RemovePlants");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFEnvBurnFireBlockComponent::OnRep_BurnRep()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEnvBurnFireBlockComponent", "OnRep_BurnRep");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFEnvStatics
bool UMFEnvStatics::UpdateWindGlobalParams(struct UWorld* InWorld, float InNormalizedWindLevel, struct FVector2D InWindDirection)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFEnvStatics", "UpdateWindGlobalParams");
    struct
    {
        struct UWorld* InWorld;
        float InNormalizedWindLevel;
        struct FVector2D InWindDirection;
        bool ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    Parms.InNormalizedWindLevel = (float)InNormalizedWindLevel;
    Parms.InWindDirection = (struct FVector2D)InWindDirection;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFEnvSystem* UMFEnvStatics::GetFirstEnvSystem(struct UWorld* InWorld)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFEnvStatics", "GetFirstEnvSystem");
    struct
    {
        struct UWorld* InWorld;
        struct AMFEnvSystem* ReturnValue;
    } Parms{};
    Parms.InWorld = (struct UWorld*)InWorld;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFEnvStatics::ClearRenderTarget(struct UTextureRenderTarget2D* InRT)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFEnvStatics", "ClearRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* InRT;
    } Parms{};
    Parms.InRT = (struct UTextureRenderTarget2D*)InRT;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFEnvStatics::CharacterIsProne(struct ACharacter* Character)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFEnvStatics", "CharacterIsProne");
    struct
    {
        struct ACharacter* Character;
        bool ReturnValue;
    } Parms{};
    Parms.Character = (struct ACharacter*)Character;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFEnvSystem* UMFEnvStatics::BPGetFirstEnvSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFEnvStatics", "BPGetFirstEnvSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct AMFEnvSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AMFEnvSystem
void AMFEnvSystem::BPTestSetFire()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEnvSystem", "BPTestSetFire");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFEnvSystem::BPTestBlowAir(struct FVector InForceOrigin, struct FVector InForceDir, float InMomentum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFEnvSystem", "BPTestBlowAir");
    struct
    {
        struct FVector InForceOrigin;
        struct FVector InForceDir;
        float InMomentum;
    } Parms{};
    Parms.InForceOrigin = (struct FVector)InForceOrigin;
    Parms.InForceDir = (struct FVector)InForceDir;
    Parms.InMomentum = (float)InMomentum;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
