#include "BlueprintNodeTemplate.hpp"
#include "AIModule.hpp"
#include "Engine.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UBlueprintAITaskTemplate::* ----
void UBlueprintAITaskTemplate::StartTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "StartTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate::ResumeTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "ResumeTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate::PauseTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "PauseTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate::On_StartTask_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "On_StartTask_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate::On_ResumeTask_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "On_ResumeTask_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate::On_PauseTask_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "On_PauseTask_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate::On_EndTask_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "On_EndTask_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct APawn* UBlueprintAITaskTemplate::GetPawn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "GetPawn");
    struct
    {
        struct APawn* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AAIController* UBlueprintAITaskTemplate::GetAIController_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "GetAIController_BP");
    struct
    {
        struct AAIController* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UBlueprintAITaskTemplate* UBlueprintAITaskTemplate::ExtendConstructAiTask(struct AAIController* Controller, struct UBlueprintAITaskTemplate* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintAITaskTemplate", "ExtendConstructAiTask");
    struct
    {
        struct AAIController* Controller;
        struct UBlueprintAITaskTemplate* Class;
        struct UBlueprintAITaskTemplate* ReturnValue;
    } Parms{};
    Parms.Controller = (struct AAIController*)Controller;
    Parms.Class = (struct UBlueprintAITaskTemplate*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBlueprintAITaskTemplate::EndTask_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate", "EndTask_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UBlueprintAITaskTemplate_Tickable::* ----
void UBlueprintAITaskTemplate_Tickable::UnRegTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate_Tickable", "UnRegTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate_Tickable::UnPauseTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate_Tickable", "UnPauseTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate_Tickable::SetTickEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate_Tickable", "SetTickEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate_Tickable::RegTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate_Tickable", "RegTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate_Tickable::ReceiveTick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate_Tickable", "ReceiveTick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintAITaskTemplate_Tickable::PauseTick()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintAITaskTemplate_Tickable", "PauseTick");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UBlueprintTaskTemplate::* ----
struct UBlueprintTaskTemplate* UBlueprintTaskTemplate::BlueprintTaskTemplate(struct UObject* Outer, struct UBlueprintTaskTemplate* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintTaskTemplate", "BlueprintTaskTemplate");
    struct
    {
        struct UObject* Outer;
        struct UBlueprintTaskTemplate* Class;
        struct UBlueprintTaskTemplate* ReturnValue;
    } Parms{};
    Parms.Outer = (struct UObject*)Outer;
    Parms.Class = (struct UBlueprintTaskTemplate*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBlueprintTaskTemplate::Activate_BP()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintTaskTemplate", "Activate_BP");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintTaskTemplate::Activate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintTaskTemplate", "Activate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UBlueprintTaskTemplateTickable::* ----
void UBlueprintTaskTemplateTickable::SetTickEnable(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintTaskTemplateTickable", "SetTickEnable");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

void UBlueprintTaskTemplateTickable::ReceiveTick(float DeltaSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BlueprintTaskTemplateTickable", "ReceiveTick");
    struct
    {
        float DeltaSeconds;
    } Parms{};
    Parms.DeltaSeconds = (float)DeltaSeconds;
    this->ProcessEvent(Func, &Parms);
}

// ---- UExtendConstructObject_FnLib::* ----
struct AActor* UExtendConstructObject_FnLib::ExtendSpawnActor(struct UObject* WorldContextObject, struct AActor* Class, struct FTransform SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandling)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ExtendConstructObject_FnLib", "ExtendSpawnActor");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* Class;
        struct FTransform SpawnTransform;
        enum ESpawnActorCollisionHandlingMethod CollisionHandling;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct AActor*)Class;
    Parms.SpawnTransform = (struct FTransform)SpawnTransform;
    Parms.CollisionHandling = (enum ESpawnActorCollisionHandlingMethod)CollisionHandling;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UUserWidget* UExtendConstructObject_FnLib::ExtendConstructWidget(struct UObject* WorldContextObject, struct UUserWidget* Class, struct APlayerController* OwningPlayer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ExtendConstructObject_FnLib", "ExtendConstructWidget");
    struct
    {
        struct UObject* WorldContextObject;
        struct UUserWidget* Class;
        struct APlayerController* OwningPlayer;
        struct UUserWidget* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Class = (struct UUserWidget*)Class;
    Parms.OwningPlayer = (struct APlayerController*)OwningPlayer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UExtendConstructObject_FnLib::ExtendConstructObject(struct UObject* Outer, struct UObject* Class)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ExtendConstructObject_FnLib", "ExtendConstructObject");
    struct
    {
        struct UObject* Outer;
        struct UObject* Class;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.Outer = (struct UObject*)Outer;
    Parms.Class = (struct UObject*)Class;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
