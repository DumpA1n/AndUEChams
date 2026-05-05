#include "AssetPackerRuntime.hpp"
#include "AssetPackerPakFileUtilities.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAssetPackerBlueprintFunctionLibrary
uint8_t UAssetPackerBlueprintFunctionLibrary::ReleaseOldPakReaders(float MaxAgeSeconds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "ReleaseOldPakReaders");
    struct
    {
        float MaxAgeSeconds;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MaxAgeSeconds = (float)MaxAgeSeconds;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPakWorker* UAssetPackerBlueprintFunctionLibrary::PreprocessPaksAsync(struct FString InSrcPaksDir, struct FString InOutputPaksDir, struct FString InConfigFilePath, int32_t InFilterMask, int32_t InMaxConcurrency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "PreprocessPaksAsync");
    struct
    {
        struct FString InSrcPaksDir;
        struct FString InOutputPaksDir;
        struct FString InConfigFilePath;
        int32_t InFilterMask;
        int32_t InMaxConcurrency;
        struct UPakWorker* ReturnValue;
    } Parms{};
    Parms.InSrcPaksDir = (struct FString)InSrcPaksDir;
    Parms.InOutputPaksDir = (struct FString)InOutputPaksDir;
    Parms.InConfigFilePath = (struct FString)InConfigFilePath;
    Parms.InFilterMask = (int32_t)InFilterMask;
    Parms.InMaxConcurrency = (int32_t)InMaxConcurrency;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPakWorker* UAssetPackerBlueprintFunctionLibrary::MergePaksAsyncChecked2(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InCachedPakFileName, struct FString InExpectedCachedPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "MergePaksAsyncChecked2");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InExpectedSrcPakFileMD5;
        struct FString InPatchPakFileName;
        struct FString InExpectedPatchPakFileMD5;
        struct FString InCachedPakFileName;
        struct FString InExpectedCachedPakFileMD5;
        struct FString InOutputPakFileName;
        struct FString InExpectedOutputPakFileMD5;
        struct UPakWorker* ReturnValue;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InExpectedSrcPakFileMD5 = (struct FString)InExpectedSrcPakFileMD5;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InExpectedPatchPakFileMD5 = (struct FString)InExpectedPatchPakFileMD5;
    Parms.InCachedPakFileName = (struct FString)InCachedPakFileName;
    Parms.InExpectedCachedPakFileMD5 = (struct FString)InExpectedCachedPakFileMD5;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.InExpectedOutputPakFileMD5 = (struct FString)InExpectedOutputPakFileMD5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPakWorker* UAssetPackerBlueprintFunctionLibrary::MergePaksAsyncChecked(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "MergePaksAsyncChecked");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InExpectedSrcPakFileMD5;
        struct FString InPatchPakFileName;
        struct FString InExpectedPatchPakFileMD5;
        struct FString InOutputPakFileName;
        struct FString InExpectedOutputPakFileMD5;
        struct UPakWorker* ReturnValue;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InExpectedSrcPakFileMD5 = (struct FString)InExpectedSrcPakFileMD5;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InExpectedPatchPakFileMD5 = (struct FString)InExpectedPatchPakFileMD5;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.InExpectedOutputPakFileMD5 = (struct FString)InExpectedOutputPakFileMD5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPakWorker* UAssetPackerBlueprintFunctionLibrary::MergePaksAsync(struct FString SrcPakFileName, struct FString PatchPakFileName, struct FString OutputPath, uint8_t bCalculateMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "MergePaksAsync");
    struct
    {
        struct FString SrcPakFileName;
        struct FString PatchPakFileName;
        struct FString OutputPath;
        uint8_t bCalculateMD5;
        struct UPakWorker* ReturnValue;
    } Parms{};
    Parms.SrcPakFileName = (struct FString)SrcPakFileName;
    Parms.PatchPakFileName = (struct FString)PatchPakFileName;
    Parms.OutputPath = (struct FString)OutputPath;
    Parms.bCalculateMD5 = (uint8_t)bCalculateMD5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAssetPackerBlueprintFunctionLibrary::MergePaks(struct FString SrcPakFileName, struct FString PatchPakFileName, struct FString OutputPath, uint8_t bCalculateMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "MergePaks");
    struct
    {
        struct FString SrcPakFileName;
        struct FString PatchPakFileName;
        struct FString OutputPath;
        uint8_t bCalculateMD5;
        int32_t ReturnValue;
    } Parms{};
    Parms.SrcPakFileName = (struct FString)SrcPakFileName;
    Parms.PatchPakFileName = (struct FString)PatchPakFileName;
    Parms.OutputPath = (struct FString)OutputPath;
    Parms.bCalculateMD5 = (uint8_t)bCalculateMD5;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAssetPackerBlueprintFunctionLibrary::GetResourceLimit()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "GetResourceLimit");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UAssetPackerBlueprintFunctionLibrary::GetFileDescriptorCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "GetFileDescriptorCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPakWorker* UAssetPackerBlueprintFunctionLibrary::CreatePakWorker()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AssetPackerBlueprintFunctionLibrary", "CreatePakWorker");
    struct
    {
        struct UPakWorker* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UHashCalculator
void UHashCalculator::AsyncCalculateFileMD5(struct FString FilePath, const struct FDelegate& OnHashCompleted)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("HashCalculator", "AsyncCalculateFileMD5");
    struct
    {
        struct FString FilePath;
        struct FDelegate OnHashCompleted;
    } Parms{};
    Parms.FilePath = (struct FString)FilePath;
    Parms.OnHashCompleted = (struct FDelegate)OnHashCompleted;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UPakWorkerListener
void UPakWorkerListener::OnMergePaksComplete(int32_t ErrCode, struct FString SrcPakPath, struct FString PatchPakPath, struct FString OutputPakPath, struct FString OutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorkerListener", "OnMergePaksComplete");
    struct
    {
        int32_t ErrCode;
        struct FString SrcPakPath;
        struct FString PatchPakPath;
        struct FString OutputPakPath;
        struct FString OutputPakFileMD5;
    } Parms{};
    Parms.ErrCode = (int32_t)ErrCode;
    Parms.SrcPakPath = (struct FString)SrcPakPath;
    Parms.PatchPakPath = (struct FString)PatchPakPath;
    Parms.OutputPakPath = (struct FString)OutputPakPath;
    Parms.OutputPakFileMD5 = (struct FString)OutputPakFileMD5;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
