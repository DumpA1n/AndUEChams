#include "ImageStyleRuntime.hpp"
#include "ImageStyleCustom.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UImageStyleBlueprintFuncLib
void UImageStyleBlueprintFuncLib::SetImageStyle(struct UImage* InImage, struct FName InStyleName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageStyleBlueprintFuncLib", "SetImageStyle");
    struct
    {
        struct UImage* InImage;
        struct FName InStyleName;
    } Parms{};
    Parms.InImage = (struct UImage*)InImage;
    Parms.InStyleName = (struct FName)InStyleName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UImageStyleRuntimeManager
uint8_t UImageStyleRuntimeManager::GetImageStyleCfgData(const struct FName& InName, struct FImageStyle& OutCustomImageStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImageStyleRuntimeManager", "GetImageStyleCfgData");
    struct
    {
        struct FName InName;
        struct FImageStyle OutCustomImageStyle;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InName = (struct FName)InName;
    this->ProcessEvent(Func, &Parms);
    OutCustomImageStyle = Parms.OutCustomImageStyle;
    return Parms.ReturnValue;
}

struct UImageStyleRuntimeManager* UImageStyleRuntimeManager::Get()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageStyleRuntimeManager", "Get");
    struct
    {
        struct UImageStyleRuntimeManager* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
