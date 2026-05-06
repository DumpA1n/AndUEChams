#include "AnimationBudgetAllocator.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAnimationBudgetBlueprintLibrary
void UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(struct UObject* WorldContextObject, const struct FAnimationBudgetAllocatorParameters& InParameters)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimationBudgetBlueprintLibrary", "SetAnimationBudgetParameters");
    struct
    {
        struct UObject* WorldContextObject;
        struct FAnimationBudgetAllocatorParameters InParameters;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InParameters = (struct FAnimationBudgetAllocatorParameters)InParameters;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(struct UObject* WorldContextObject, bool bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimationBudgetBlueprintLibrary", "EnableAnimationBudget");
    struct
    {
        struct UObject* WorldContextObject;
        bool bEnabled;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bEnabled = (bool)bEnabled;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// USkeletalMeshComponentBudgeted
void USkeletalMeshComponentBudgeted::SetAutoRegisterWithBudgetAllocator(bool bInAutoRegisterWithBudgetAllocator)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SkeletalMeshComponentBudgeted", "SetAutoRegisterWithBudgetAllocator");
    struct
    {
        bool bInAutoRegisterWithBudgetAllocator;
    } Parms{};
    Parms.bInAutoRegisterWithBudgetAllocator = (bool)bInAutoRegisterWithBudgetAllocator;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
