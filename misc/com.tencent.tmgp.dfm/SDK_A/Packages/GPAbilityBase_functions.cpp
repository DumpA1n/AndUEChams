#include "GPAbilityBase.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UGPAbilityManager::* ----
void UGPAbilityManager::UnRegisterSkillComponent(struct UGPSkillComponentBase* SkillComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "UnRegisterSkillComponent");
    struct
    {
        struct UGPSkillComponentBase* SkillComponent;
    } Parms{};
    Parms.SkillComponent = (struct UGPSkillComponentBase*)SkillComponent;
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityManager::UnRegisterAbilityActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "UnRegisterAbilityActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityManager::ResetAllAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "ResetAllAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityManager::RegisterSkillComponent(struct UGPSkillComponentBase* SkillComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "RegisterSkillComponent");
    struct
    {
        struct UGPSkillComponentBase* SkillComponent;
    } Parms{};
    Parms.SkillComponent = (struct UGPSkillComponentBase*)SkillComponent;
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityManager::RegisterAbilityActor(struct AActor* Actor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "RegisterAbilityActor");
    struct
    {
        struct AActor* Actor;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGPAbilityManager::GetRegisteredSkillComponentCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "GetRegisteredSkillComponentCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPAbilityManager::GetRegisteredAbilityActorCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "GetRegisteredAbilityActorCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPAbilityManager* UGPAbilityManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPAbilityManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UGPAbilityManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPAbilityManager::ClearAllSkills()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "ClearAllSkills");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityManager::ClearAllAbilityActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "ClearAllAbilityActors");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPAbilityManager::ClearAllAbility()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPAbilityManager", "ClearAllAbility");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UGPSkillComponentBase::* ----
void UGPSkillComponentBase::ReAddRelativeSkill()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSkillComponentBase", "ReAddRelativeSkill");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPSkillComponentBase::EndAllSkills()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPSkillComponentBase", "EndAllSkills");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
