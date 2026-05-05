#include "VariantManagerContent.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ULevelVariantSets
struct UVariantSet* ULevelVariantSets::GetVariantSetByName(struct FString VariantSetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSets", "GetVariantSetByName");
    struct
    {
        struct FString VariantSetName;
        struct UVariantSet* ReturnValue;
    } Parms{};
    Parms.VariantSetName = (struct FString)VariantSetName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UVariantSet* ULevelVariantSets::GetVariantSet(int32_t VariantSetIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSets", "GetVariantSet");
    struct
    {
        int32_t VariantSetIndex;
        struct UVariantSet* ReturnValue;
    } Parms{};
    Parms.VariantSetIndex = (int32_t)VariantSetIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULevelVariantSets::GetNumVariantSets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSets", "GetNumVariantSets");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ALevelVariantSetsActor
uint8_t ALevelVariantSetsActor::SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByName");
    struct
    {
        struct FString VariantSetName;
        struct FString VariantName;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VariantSetName = (struct FString)VariantSetName;
    Parms.VariantName = (struct FString)VariantName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByIndex");
    struct
    {
        int32_t VariantSetIndex;
        int32_t VariantIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.VariantSetIndex = (int32_t)VariantSetIndex;
    Parms.VariantIndex = (int32_t)VariantIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ALevelVariantSetsActor::SetLevelVariantSets(struct ULevelVariantSets* InVariantSets)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "SetLevelVariantSets");
    struct
    {
        struct ULevelVariantSets* InVariantSets;
    } Parms{};
    Parms.InVariantSets = (struct ULevelVariantSets*)InVariantSets;
    this->ProcessEvent(Func, &Parms);
}

struct ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(uint8_t bLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "GetLevelVariantSets");
    struct
    {
        uint8_t bLoad;
        struct ULevelVariantSets* ReturnValue;
    } Parms{};
    Parms.bLoad = (uint8_t)bLoad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPropertyValue
uint8_t UPropertyValue::HasRecordedData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyValue", "HasRecordedData");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UPropertyValue::GetPropertyTooltip()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyValue", "GetPropertyTooltip");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UPropertyValue::GetFullDisplayString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyValue", "GetFullDisplayString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ASwitchActor
void ASwitchActor::SelectOption(int32_t OptionIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwitchActor", "SelectOption");
    struct
    {
        int32_t OptionIndex;
    } Parms{};
    Parms.OptionIndex = (int32_t)OptionIndex;
    this->ProcessEvent(Func, &Parms);
}

int32_t ASwitchActor::GetSelectedOption()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwitchActor", "GetSelectedOption");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct AActor*> ASwitchActor::GetOptions()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SwitchActor", "GetOptions");
    struct
    {
        struct TArray<struct AActor*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVariant
void UVariant::SwitchOn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SwitchOn");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UVariant::SetDisplayText(const struct FText& NewDisplayText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SetDisplayText");
    struct
    {
        struct FText NewDisplayText;
    } Parms{};
    Parms.NewDisplayText = (struct FText)NewDisplayText;
    this->ProcessEvent(Func, &Parms);
}

int32_t UVariant::GetNumActors()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetNumActors");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UVariant::GetDisplayText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetDisplayText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* UVariant::GetActor(int32_t ActorIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetActor");
    struct
    {
        int32_t ActorIndex;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.ActorIndex = (int32_t)ActorIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UVariantSet
void UVariantSet::SetDisplayText(const struct FText& NewDisplayText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "SetDisplayText");
    struct
    {
        struct FText NewDisplayText;
    } Parms{};
    Parms.NewDisplayText = (struct FText)NewDisplayText;
    this->ProcessEvent(Func, &Parms);
}

struct UVariant* UVariantSet::GetVariantByName(struct FString VariantName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "GetVariantByName");
    struct
    {
        struct FString VariantName;
        struct UVariant* ReturnValue;
    } Parms{};
    Parms.VariantName = (struct FString)VariantName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UVariant* UVariantSet::GetVariant(int32_t VariantIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "GetVariant");
    struct
    {
        int32_t VariantIndex;
        struct UVariant* ReturnValue;
    } Parms{};
    Parms.VariantIndex = (int32_t)VariantIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVariantSet::GetNumVariants()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "GetNumVariants");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UVariantSet::GetDisplayText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "GetDisplayText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
