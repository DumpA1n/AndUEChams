#include "AndroidFileServer.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAndroidFileServerBPLibrary
bool UAndroidFileServerBPLibrary::StopFileServer(bool bUSB, bool bNetwork)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidFileServerBPLibrary", "StopFileServer");
    struct
    {
        bool bUSB;
        bool bNetwork;
        bool ReturnValue;
    } Parms{};
    Parms.bUSB = (bool)bUSB;
    Parms.bNetwork = (bool)bNetwork;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UAndroidFileServerBPLibrary::StartFileServer(bool bUSB, bool bNetwork, int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidFileServerBPLibrary", "StartFileServer");
    struct
    {
        bool bUSB;
        bool bNetwork;
        int32_t Port;
        bool ReturnValue;
    } Parms{};
    Parms.bUSB = (bool)bUSB;
    Parms.bNetwork = (bool)bNetwork;
    Parms.Port = (int32_t)Port;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UAndroidFileServerBPLibrary::IsFileServerRunning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AndroidFileServerBPLibrary", "IsFileServerRunning");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
