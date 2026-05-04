#include "ImageWriteQueue.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UImageWriteBlueprintLibrary::* ----
void UImageWriteBlueprintLibrary::ExportToDisk(struct UTexture* Texture, struct FString Filename, const struct FImageWriteOptions& Options)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("ImageWriteBlueprintLibrary", "ExportToDisk");
    struct
    {
        struct UTexture* Texture;
        struct FString Filename;
        struct FImageWriteOptions Options;
    } Parms{};
    Parms.Texture = (struct UTexture*)Texture;
    Parms.Filename = (struct FString)Filename;
    Parms.Options = (struct FImageWriteOptions)Options;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
