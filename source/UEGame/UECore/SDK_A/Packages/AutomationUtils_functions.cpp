#include "AutomationUtils.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAutomationUtilsBlueprintLibrary
void UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot(struct FString ScreenshotName, float MaxGlobalError, float MaxLocalError, struct FString MapNameOverride)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AutomationUtilsBlueprintLibrary", "TakeGameplayAutomationScreenshot");
    struct
    {
        struct FString ScreenshotName;
        float MaxGlobalError;
        float MaxLocalError;
        struct FString MapNameOverride;
    } Parms{};
    Parms.ScreenshotName = (struct FString)ScreenshotName;
    Parms.MaxGlobalError = (float)MaxGlobalError;
    Parms.MaxLocalError = (float)MaxLocalError;
    Parms.MapNameOverride = (struct FString)MapNameOverride;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
