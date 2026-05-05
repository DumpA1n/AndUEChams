#include "OpenWorldPrecomputedVisibility.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// IOpenWorldPrecomputedForm
EOpenWorldPrecomputedFormType IOpenWorldPrecomputedForm::GetFormType()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldPrecomputedForm", "GetFormType");
    struct
    {
        enum EOpenWorldPrecomputedFormType ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t IOpenWorldPrecomputedForm::GetFormIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldPrecomputedForm", "GetFormIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IOpenWorldPrecomputedForm::GetBoundsScaleIncrement()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldPrecomputedForm", "GetBoundsScaleIncrement");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector IOpenWorldPrecomputedForm::GetBoundsOriginOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldPrecomputedForm", "GetBoundsOriginOffset");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UOpenWorldPrecomputedFormStatics
void UOpenWorldPrecomputedFormStatics::SetFormVisibilityIds(struct UObject* MutableForm, const struct TArray<int32_t>& VisibilityIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "SetFormVisibilityIds");
    struct
    {
        struct UObject* MutableForm;
        struct TArray<int32_t> VisibilityIds;
    } Parms{};
    Parms.MutableForm = (struct UObject*)MutableForm;
    Parms.VisibilityIds = (struct TArray<int32_t>)VisibilityIds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UOpenWorldPrecomputedFormStatics::PreChangeForm(struct UObject* MutableForm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "PreChangeForm");
    struct
    {
        struct UObject* MutableForm;
    } Parms{};
    Parms.MutableForm = (struct UObject*)MutableForm;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UOpenWorldPrecomputedFormStatics::PostChangeForm(struct UObject* MutableForm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "PostChangeForm");
    struct
    {
        struct UObject* MutableForm;
    } Parms{};
    Parms.MutableForm = (struct UObject*)MutableForm;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldPrecomputedFormStatics::IsPrecomputedFormLevel(struct FString LevelPackageName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "IsPrecomputedFormLevel");
    struct
    {
        struct FString LevelPackageName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LevelPackageName = (struct FString)LevelPackageName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldPrecomputedFormStatics::IsPrecomputedForm(struct UObject* Objcet)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "IsPrecomputedForm");
    struct
    {
        struct UObject* Objcet;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Objcet = (struct UObject*)Objcet;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UOpenWorldPrecomputedFormStatics::GetFormVisibilityIds(struct UObject* MutableForm)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "GetFormVisibilityIds");
    struct
    {
        struct UObject* MutableForm;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.MutableForm = (struct UObject*)MutableForm;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UPrimitiveComponent*> UOpenWorldPrecomputedFormStatics::GetFormComponents(struct UObject* Form)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldPrecomputedFormStatics", "GetFormComponents");
    struct
    {
        struct UObject* Form;
        struct TArray<struct UPrimitiveComponent*> ReturnValue;
    } Parms{};
    Parms.Form = (struct UObject*)Form;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMutableFormMeshComponent
void UMutableFormMeshComponent::NextForm()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MutableFormMeshComponent", "NextForm");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ALevelPrecomputedVisibilityAssetsStreamer
void ALevelPrecomputedVisibilityAssetsStreamer::OnLevelLoadingPercentage(int32_t Percentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelPrecomputedVisibilityAssetsStreamer", "OnLevelLoadingPercentage");
    struct
    {
        int32_t Percentage;
    } Parms{};
    Parms.Percentage = (int32_t)Percentage;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
