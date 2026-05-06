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

bool UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "IsStereoGazeDataAvailable");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UEyeTrackerFunctionLibrary::IsEyeTrackerConnected()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "IsEyeTrackerConnected");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UEyeTrackerFunctionLibrary::GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "GetStereoGazeData");
    struct
    {
        struct FEyeTrackerStereoGazeData OutGazeData;
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGazeData = Parms.OutGazeData;
    return Parms.ReturnValue;
}

bool UEyeTrackerFunctionLibrary::GetGazeData(struct FEyeTrackerGazeData& OutGazeData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("EyeTrackerFunctionLibrary", "GetGazeData");
    struct
    {
        struct FEyeTrackerGazeData OutGazeData;
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGazeData = Parms.OutGazeData;
    return Parms.ReturnValue;
}

} // namespace SDK
