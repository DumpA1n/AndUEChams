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
bool ALevelVariantSetsActor::SwitchOnVariantByName(struct FString VariantSetName, struct FString VariantName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByName");
    struct
    {
        struct FString VariantSetName;
        struct FString VariantName;
        bool ReturnValue;
    } Parms{};
    Parms.VariantSetName = (struct FString)VariantSetName;
    Parms.VariantName = (struct FString)VariantName;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool ALevelVariantSetsActor::SwitchOnVariantByIndex(int32_t VariantSetIndex, int32_t VariantIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "SwitchOnVariantByIndex");
    struct
    {
        int32_t VariantSetIndex;
        int32_t VariantIndex;
        bool ReturnValue;
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

struct ULevelVariantSets* ALevelVariantSetsActor::GetLevelVariantSets(bool bLoad)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LevelVariantSetsActor", "GetLevelVariantSets");
    struct
    {
        bool bLoad;
        struct ULevelVariantSets* ReturnValue;
    } Parms{};
    Parms.bLoad = (bool)bLoad;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UPropertyValue
bool UPropertyValue::HasRecordedData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PropertyValue", "HasRecordedData");
    struct
    {
        bool ReturnValue;
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

void UVariant::SetThumbnailFromTexture(struct UTexture2D* NewThumbnail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SetThumbnailFromTexture");
    struct
    {
        struct UTexture2D* NewThumbnail;
    } Parms{};
    Parms.NewThumbnail = (struct UTexture2D*)NewThumbnail;
    this->ProcessEvent(Func, &Parms);
}

void UVariant::SetThumbnailFromFile(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SetThumbnailFromFile");
    struct
    {
        struct FString FilePath;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
}

void UVariant::SetThumbnailFromEditorViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SetThumbnailFromEditorViewport");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UVariant::SetThumbnailFromCamera(struct UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SetThumbnailFromCamera");
    struct
    {
        struct UObject* WorldContextObject;
        struct FTransform CameraTransform;
        float FOVDegrees;
        float MinZ;
        float Gamma;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CameraTransform = (struct FTransform)CameraTransform;
    Parms.FOVDegrees = (float)FOVDegrees;
    Parms.MinZ = (float)MinZ;
    Parms.Gamma = (float)Gamma;
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

void UVariant::SetDependency(int32_t Index, struct FVariantDependency& Dependency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "SetDependency");
    struct
    {
        int32_t Index;
        struct FVariantDependency Dependency;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    Dependency = Parms.Dependency;
}

bool UVariant::IsActive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "IsActive");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture2D* UVariant::GetThumbnail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetThumbnail");
    struct
    {
        struct UTexture2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UVariantSet* UVariant::GetParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetParent");
    struct
    {
        struct UVariantSet* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UVariant::GetNumDependencies()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetNumDependencies");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
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

struct TArray<struct UVariant*> UVariant::GetDependents(struct ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetDependents");
    struct
    {
        struct ULevelVariantSets* LevelVariantSets;
        bool bOnlyEnabledDependencies;
        struct TArray<struct UVariant*> ReturnValue;
    } Parms{};
    Parms.LevelVariantSets = (struct ULevelVariantSets*)LevelVariantSets;
    Parms.bOnlyEnabledDependencies = (bool)bOnlyEnabledDependencies;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVariantDependency UVariant::GetDependency(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "GetDependency");
    struct
    {
        int32_t Index;
        struct FVariantDependency ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
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

void UVariant::DeleteDependency(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "DeleteDependency");
    struct
    {
        int32_t Index;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
}

int32_t UVariant::AddDependency(struct FVariantDependency& Dependency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Variant", "AddDependency");
    struct
    {
        struct FVariantDependency Dependency;
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Dependency = Parms.Dependency;
    return Parms.ReturnValue;
}

// UVariantSet
void UVariantSet::SetThumbnailFromTexture(struct UTexture2D* NewThumbnail)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "SetThumbnailFromTexture");
    struct
    {
        struct UTexture2D* NewThumbnail;
    } Parms{};
    Parms.NewThumbnail = (struct UTexture2D*)NewThumbnail;
    this->ProcessEvent(Func, &Parms);
}

void UVariantSet::SetThumbnailFromFile(struct FString FilePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "SetThumbnailFromFile");
    struct
    {
        struct FString FilePath;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    this->ProcessEvent(Func, &Parms);
}

void UVariantSet::SetThumbnailFromEditorViewport()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "SetThumbnailFromEditorViewport");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UVariantSet::SetThumbnailFromCamera(struct UObject* WorldContextObject, const struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "SetThumbnailFromCamera");
    struct
    {
        struct UObject* WorldContextObject;
        struct FTransform CameraTransform;
        float FOVDegrees;
        float MinZ;
        float Gamma;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.CameraTransform = (struct FTransform)CameraTransform;
    Parms.FOVDegrees = (float)FOVDegrees;
    Parms.MinZ = (float)MinZ;
    Parms.Gamma = (float)Gamma;
    this->ProcessEvent(Func, &Parms);
}

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

struct UTexture2D* UVariantSet::GetThumbnail()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "GetThumbnail");
    struct
    {
        struct UTexture2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct ULevelVariantSets* UVariantSet::GetParent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("VariantSet", "GetParent");
    struct
    {
        struct ULevelVariantSets* ReturnValue;
    } Parms{};
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
