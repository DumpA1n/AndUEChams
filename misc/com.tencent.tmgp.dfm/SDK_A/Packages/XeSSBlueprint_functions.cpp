#include "XeSSBlueprint.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UXeSSBlueprintLibrary::* ----
void UXeSSBlueprintLibrary::SetXeSSQualityMode(EXeSSQualityMode QualityMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "SetXeSSQualityMode");
    struct
    {
        enum EXeSSQualityMode QualityMode;
    } Parms{};
    Parms.QualityMode = (enum EXeSSQualityMode)QualityMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UXeSSBlueprintLibrary::IsXeSSSupported()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "IsXeSSSupported");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UXeSSBlueprintLibrary::IsXeSSOptimalDriver()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "IsXeSSOptimalDriver");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UXeSSBlueprintLibrary::GetXeSSQualityModeInformation(EXeSSQualityMode QualityMode, float& ScreenPercentage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "GetXeSSQualityModeInformation");
    struct
    {
        enum EXeSSQualityMode QualityMode;
        float ScreenPercentage;
        uint8_t ReturnValue;
    } Parms{};
    Parms.QualityMode = (enum EXeSSQualityMode)QualityMode;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ScreenPercentage = Parms.ScreenPercentage;
    return Parms.ReturnValue;
}

EXeSSQualityMode UXeSSBlueprintLibrary::GetXeSSQualityMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "GetXeSSQualityMode");
    struct
    {
        enum EXeSSQualityMode ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<EXeSSQualityMode> UXeSSBlueprintLibrary::GetSupportedXeSSQualityModes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "GetSupportedXeSSQualityModes");
    struct
    {
        struct TArray<EXeSSQualityMode> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EXeSSQualityMode UXeSSBlueprintLibrary::GetDefaultXeSSQualityMode(struct FIntPoint ScreenResolution)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("XeSSBlueprintLibrary", "GetDefaultXeSSQualityMode");
    struct
    {
        struct FIntPoint ScreenResolution;
        enum EXeSSQualityMode ReturnValue;
    } Parms{};
    Parms.ScreenResolution = (struct FIntPoint)ScreenResolution;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
