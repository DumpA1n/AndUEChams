#include "UnLua.hpp"
#include "Engine.hpp"
#include "InputCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// IUnLuaInterface
struct FString IUnLuaInterface::GetModuleName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaInterface", "GetModuleName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUnLuaLatentAction
void UUnLuaLatentAction::SetTickableWhenPaused(bool bTickableWhenPaused)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaLatentAction", "SetTickableWhenPaused");
    struct
    {
        bool bTickableWhenPaused;
    } Parms{};
    Parms.bTickableWhenPaused = (bool)bTickableWhenPaused;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaLatentAction::OnLegacyCallback(int32_t InLinkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaLatentAction", "OnLegacyCallback");
    struct
    {
        int32_t InLinkage;
    } Parms{};
    Parms.InLinkage = (int32_t)InLinkage;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaLatentAction::OnCompleted(int32_t InLinkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaLatentAction", "OnCompleted");
    struct
    {
        int32_t InLinkage;
    } Parms{};
    Parms.InLinkage = (int32_t)InLinkage;
    this->ProcessEvent(Func, &Parms);
}

bool UUnLuaLatentAction::GetTickableWhenPaused()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaLatentAction", "GetTickableWhenPaused");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLatentActionInfo UUnLuaLatentAction::CreateInfoForLegacy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaLatentAction", "CreateInfoForLegacy");
    struct
    {
        struct FLatentActionInfo ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLatentActionInfo UUnLuaLatentAction::CreateInfo(int32_t Linkage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaLatentAction", "CreateInfo");
    struct
    {
        int32_t Linkage;
        struct FLatentActionInfo ReturnValue;
    } Parms{};
    Parms.Linkage = (int32_t)Linkage;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UUnLuaManager
void UUnLuaManager::TriggerAnimNotify()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "TriggerAnimNotify");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::OnLatentActionCompleted(int32_t LinkId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "OnLatentActionCompleted");
    struct
    {
        int32_t LinkId;
    } Parms{};
    Parms.LinkId = (int32_t)LinkId;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::OnActorDestroyed(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "OnActorDestroyed");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::InputVectorAxis(const struct FVector& AxisValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "InputVectorAxis");
    struct
    {
        struct FVector AxisValue;
    } Parms{};
    Parms.AxisValue = (struct FVector)AxisValue;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::InputTouch(uint8_t FingerIndex, const struct FVector& Location)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "InputTouch");
    struct
    {
        uint8_t FingerIndex;
        struct FVector Location;
    } Parms{};
    Parms.FingerIndex = (uint8_t)FingerIndex;
    Parms.Location = (struct FVector)Location;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::InputGesture(float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "InputGesture");
    struct
    {
        float Value;
    } Parms{};
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::InputAxis(float AxisValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "InputAxis");
    struct
    {
        float AxisValue;
    } Parms{};
    Parms.AxisValue = (float)AxisValue;
    this->ProcessEvent(Func, &Parms);
}

void UUnLuaManager::InputAction(struct FKey Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaManager", "InputAction");
    struct
    {
        struct FKey Key;
    } Parms{};
    Parms.Key = (struct FKey)Key;
    this->ProcessEvent(Func, &Parms);
}

bool UUnLuaManager::HasPostEngineInited()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("UnLuaManager", "HasPostEngineInited");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AUnLuaPerformanceTestProxy
void AUnLuaPerformanceTestProxy::UpdatePositions(const struct TArray<struct FVector>& NewPositions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "UpdatePositions");
    struct
    {
        struct TArray<struct FVector> NewPositions;
    } Parms{};
    Parms.NewPositions = (struct TArray<struct FVector>)NewPositions;
    this->ProcessEvent(Func, &Parms);
}

struct FString AUnLuaPerformanceTestProxy::UpdateMeshName(struct FString NewName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "UpdateMeshName");
    struct
    {
        struct FString NewName;
        struct FString ReturnValue;
    } Parms{};
    Parms.NewName = (struct FString)NewName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AUnLuaPerformanceTestProxy::UpdateMeshID(int32_t NewID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "UpdateMeshID");
    struct
    {
        int32_t NewID;
        int32_t ReturnValue;
    } Parms{};
    Parms.NewID = (int32_t)NewID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AUnLuaPerformanceTestProxy::UpdateIndices(const struct TArray<int32_t>& NewIndices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "UpdateIndices");
    struct
    {
        struct TArray<int32_t> NewIndices;
    } Parms{};
    Parms.NewIndices = (struct TArray<int32_t>)NewIndices;
    this->ProcessEvent(Func, &Parms);
}

void AUnLuaPerformanceTestProxy::Simulate(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "Simulate");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

bool AUnLuaPerformanceTestProxy::Raycast(const struct FVector& Origin, const struct FVector& Direction)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "Raycast");
    struct
    {
        struct FVector Origin;
        struct FVector Direction;
        bool ReturnValue;
    } Parms{};
    Parms.Origin = (struct FVector)Origin;
    Parms.Direction = (struct FVector)Direction;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AUnLuaPerformanceTestProxy::NOP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "NOP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct TArray<struct FVector> AUnLuaPerformanceTestProxy::GetPredictedPositions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetPredictedPositions");
    struct
    {
        struct TArray<struct FVector> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AUnLuaPerformanceTestProxy::GetPositions(struct TArray<struct FVector>& OutPositions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetPositions");
    struct
    {
        struct TArray<struct FVector> OutPositions;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutPositions = Parms.OutPositions;
}

struct FString AUnLuaPerformanceTestProxy::GetMeshName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetMeshName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AUnLuaPerformanceTestProxy::GetMeshInfo(int32_t& OutMeshID, struct FString& OutMeshName, struct FVector& OutCOM, struct TArray<int32_t>& OutIndices, struct TArray<struct FVector>& OutPositions, struct TArray<struct FVector>& OutPredictedPositions)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetMeshInfo");
    struct
    {
        int32_t OutMeshID;
        struct FString OutMeshName;
        struct FVector OutCOM;
        struct TArray<int32_t> OutIndices;
        struct TArray<struct FVector> OutPositions;
        struct TArray<struct FVector> OutPredictedPositions;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutMeshID = Parms.OutMeshID;
    OutMeshName = Parms.OutMeshName;
    OutCOM = Parms.OutCOM;
    OutIndices = Parms.OutIndices;
    OutPositions = Parms.OutPositions;
    OutPredictedPositions = Parms.OutPredictedPositions;
    return Parms.ReturnValue;
}

int32_t AUnLuaPerformanceTestProxy::GetMeshID()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetMeshID");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AUnLuaPerformanceTestProxy::GetIndices(struct TArray<int32_t>& OutIndices)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetIndices");
    struct
    {
        struct TArray<int32_t> OutIndices;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutIndices = Parms.OutIndices;
}

struct FVector AUnLuaPerformanceTestProxy::GetCOM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("UnLuaPerformanceTestProxy", "GetCOM");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
