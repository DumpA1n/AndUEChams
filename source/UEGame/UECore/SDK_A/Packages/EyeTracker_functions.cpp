#include "EyeTracker.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UEyeTrackerFunctionLibrary
void UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(struct APlayerController* PlayerController)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "SetEyeTrackedPlayer");
    struct
    {
        struct APlayerController* PlayerController;
    } Parms{};
    Parms.PlayerController = (struct APlayerController*)PlayerController;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "IsStereoGazeDataAvailable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "IsEyeTrackerConnected");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");
    struct
    {
        struct FEyeTrackerStereoGazeData OutGazeData;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGazeData = Parms.OutGazeData;
    return Parms.ReturnValue;
}

uint8_t UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData& OutGazeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");
    struct
    {
        struct FEyeTrackerGazeData OutGazeData;
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGazeData = Parms.OutGazeData;
    return Parms.ReturnValue;
}

} // namespace SDK
