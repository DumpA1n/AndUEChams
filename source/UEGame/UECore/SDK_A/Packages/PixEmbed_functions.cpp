#include "PixEmbed.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UPixEmbedBPLibrary
bool UPixEmbedBPLibrary::PixEmbed_Startup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixEmbedBPLibrary", "PixEmbed_Startup");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPixEmbedBPLibrary::PixEmbed_Shutdown()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixEmbedBPLibrary", "PixEmbed_Shutdown");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPixEmbedBPLibrary::PixEmbed_OpenNativeView(int32_t Left, int32_t Top, int32_t Width, int32_t Height, bool IsNativeRender, bool IsCoreAsync, struct FString strUrl)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixEmbedBPLibrary", "PixEmbed_OpenNativeView");
    struct
    {
        int32_t Left;
        int32_t Top;
        int32_t Width;
        int32_t Height;
        bool IsNativeRender;
        bool IsCoreAsync;
        struct FString strUrl;
        bool ReturnValue;
    } Parms{};
    Parms.Left = (int32_t)Left;
    Parms.Top = (int32_t)Top;
    Parms.Width = (int32_t)Width;
    Parms.Height = (int32_t)Height;
    Parms.IsNativeRender = (bool)IsNativeRender;
    Parms.IsCoreAsync = (bool)IsCoreAsync;
    Parms.strUrl = (struct FString)strUrl;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UPixEmbedBPLibrary::PixEmbed_CloseNativeView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PixEmbedBPLibrary", "PixEmbed_CloseNativeView");
    struct
    {
        bool ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
