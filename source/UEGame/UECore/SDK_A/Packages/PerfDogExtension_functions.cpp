#include "PerfDogExtension.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPerfDogExtensionBlueprintLibrary
void UPerfDogExtensionBlueprintLibrary::SetLabel(struct FString LabelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "SetLabel");
    struct
    {
        struct FString LabelName;
    } Parms{};
    Parms.LabelName = (struct FString)LabelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostStringValue(struct FString Category, struct FString Key, struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostStringValue");
    struct
    {
        struct FString Category;
        struct FString Key;
        struct FString Value;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostIntValue3(struct FString Category, struct FString Key, int32_t Value1, int32_t Value2, int32_t Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostIntValue3");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t Value1;
        int32_t Value2;
        int32_t Value3;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value1 = (int32_t)Value1;
    Parms.Value2 = (int32_t)Value2;
    Parms.Value3 = (int32_t)Value3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostIntValue2(struct FString Category, struct FString Key, int32_t Value1, int32_t Value2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostIntValue2");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t Value1;
        int32_t Value2;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value1 = (int32_t)Value1;
    Parms.Value2 = (int32_t)Value2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostIntValue(struct FString Category, struct FString Key, int32_t Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostIntValue");
    struct
    {
        struct FString Category;
        struct FString Key;
        int32_t Value;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value = (int32_t)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostFloatValue3(struct FString Category, struct FString Key, float Value1, float Value2, float Value3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostFloatValue3");
    struct
    {
        struct FString Category;
        struct FString Key;
        float Value1;
        float Value2;
        float Value3;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value1 = (float)Value1;
    Parms.Value2 = (float)Value2;
    Parms.Value3 = (float)Value3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostFloatValue2(struct FString Category, struct FString Key, float Value1, float Value2)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostFloatValue2");
    struct
    {
        struct FString Category;
        struct FString Key;
        float Value1;
        float Value2;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value1 = (float)Value1;
    Parms.Value2 = (float)Value2;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UPerfDogExtensionBlueprintLibrary::PostFloatValue(struct FString Category, struct FString Key, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "PostFloatValue");
    struct
    {
        struct FString Category;
        struct FString Key;
        float Value;
    } Parms{};
    Parms.Category = (struct FString)Category;
    Parms.Key = (struct FString)Key;
    Parms.Value = (float)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UPerfDogExtensionBlueprintLibrary::IsTestStarted()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "IsTestStarted");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UPerfDogExtensionBlueprintLibrary::EnablePerfDogExtension()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "EnablePerfDogExtension");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UPerfDogExtensionBlueprintLibrary::AddNote(struct FString NoteText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PerfDogExtensionBlueprintLibrary", "AddNote");
    struct
    {
        struct FString NoteText;
    } Parms{};
    Parms.NoteText = (struct FString)NoteText;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
