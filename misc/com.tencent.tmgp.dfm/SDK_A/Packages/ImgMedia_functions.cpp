#include "ImgMedia.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UImgMediaSource::* ----
void UImgMediaSource::SetSequencePath(struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImgMediaSource", "SetSequencePath");
    struct
    {
        struct FString Path;
    } Parms{};
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
}

struct FString UImgMediaSource::GetSequencePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImgMediaSource", "GetSequencePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UImgMediaSource::GetProxies(struct TArray<struct FString>& OutProxies)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("ImgMediaSource", "GetProxies");
    struct
    {
        struct TArray<struct FString> OutProxies;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutProxies = Parms.OutProxies;
}

} // namespace SDK
