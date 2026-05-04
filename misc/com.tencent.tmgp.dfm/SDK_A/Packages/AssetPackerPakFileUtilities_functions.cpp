#include "AssetPackerPakFileUtilities.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UPakWorker::* ----
uint8_t UPakWorker::ScanPakFiles(struct FString DirectoryPath, struct TMap<struct FString, struct FString>& PakChunkMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PakWorker", "ScanPakFiles");
    struct
    {
        struct FString DirectoryPath;
        struct TMap<struct FString, struct FString> PakChunkMap;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DirectoryPath = (struct FString)DirectoryPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    PakChunkMap = Parms.PakChunkMap;
    return Parms.ReturnValue;
}

void UPakWorker::PreprocessPaksAsync(struct FString InSrcPaksDir, struct FString InOutputPaksDir, struct FString InConfigFilePath, int32_t InFilterMask, int32_t InMaxConcurrency)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "PreprocessPaksAsync");
    struct
    {
        struct FString InSrcPaksDir;
        struct FString InOutputPaksDir;
        struct FString InConfigFilePath;
        int32_t InFilterMask;
        int32_t InMaxConcurrency;
    } Parms{};
    Parms.InSrcPaksDir = (struct FString)InSrcPaksDir;
    Parms.InOutputPaksDir = (struct FString)InOutputPaksDir;
    Parms.InConfigFilePath = (struct FString)InConfigFilePath;
    Parms.InFilterMask = (int32_t)InFilterMask;
    Parms.InMaxConcurrency = (int32_t)InMaxConcurrency;
    this->ProcessEvent(Func, &Parms);
}

void UPakWorker::MergePaksChecked2(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InCachedPatchFileName, struct FString InExpectedCachedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "MergePaksChecked2");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InExpectedSrcPakFileMD5;
        struct FString InPatchPakFileName;
        struct FString InExpectedPatchPakFileMD5;
        struct FString InCachedPatchFileName;
        struct FString InExpectedCachedPatchPakFileMD5;
        struct FString InOutputPakFileName;
        struct FString InExpectedOutputPakFileMD5;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InExpectedSrcPakFileMD5 = (struct FString)InExpectedSrcPakFileMD5;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InExpectedPatchPakFileMD5 = (struct FString)InExpectedPatchPakFileMD5;
    Parms.InCachedPatchFileName = (struct FString)InCachedPatchFileName;
    Parms.InExpectedCachedPatchPakFileMD5 = (struct FString)InExpectedCachedPatchPakFileMD5;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.InExpectedOutputPakFileMD5 = (struct FString)InExpectedOutputPakFileMD5;
    this->ProcessEvent(Func, &Parms);
}

void UPakWorker::MergePaksAsyncChecked2(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InCachedPatchFileName, struct FString InExpectedCachedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "MergePaksAsyncChecked2");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InExpectedSrcPakFileMD5;
        struct FString InPatchPakFileName;
        struct FString InExpectedPatchPakFileMD5;
        struct FString InCachedPatchFileName;
        struct FString InExpectedCachedPatchPakFileMD5;
        struct FString InOutputPakFileName;
        struct FString InExpectedOutputPakFileMD5;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InExpectedSrcPakFileMD5 = (struct FString)InExpectedSrcPakFileMD5;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InExpectedPatchPakFileMD5 = (struct FString)InExpectedPatchPakFileMD5;
    Parms.InCachedPatchFileName = (struct FString)InCachedPatchFileName;
    Parms.InExpectedCachedPatchPakFileMD5 = (struct FString)InExpectedCachedPatchPakFileMD5;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.InExpectedOutputPakFileMD5 = (struct FString)InExpectedOutputPakFileMD5;
    this->ProcessEvent(Func, &Parms);
}

void UPakWorker::MergePaksAsyncChecked(struct FString InSrcPakFileName, struct FString InExpectedSrcPakFileMD5, struct FString InPatchPakFileName, struct FString InExpectedPatchPakFileMD5, struct FString InOutputPakFileName, struct FString InExpectedOutputPakFileMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "MergePaksAsyncChecked");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InExpectedSrcPakFileMD5;
        struct FString InPatchPakFileName;
        struct FString InExpectedPatchPakFileMD5;
        struct FString InOutputPakFileName;
        struct FString InExpectedOutputPakFileMD5;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InExpectedSrcPakFileMD5 = (struct FString)InExpectedSrcPakFileMD5;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InExpectedPatchPakFileMD5 = (struct FString)InExpectedPatchPakFileMD5;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.InExpectedOutputPakFileMD5 = (struct FString)InExpectedOutputPakFileMD5;
    this->ProcessEvent(Func, &Parms);
}

void UPakWorker::MergePaksAsync(struct FString InSrcPakFileName, struct FString InPatchPakFileName, struct FString InOutputPakFileName, uint8_t bCalculateMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "MergePaksAsync");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InPatchPakFileName;
        struct FString InOutputPakFileName;
        uint8_t bCalculateMD5;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.bCalculateMD5 = (uint8_t)bCalculateMD5;
    this->ProcessEvent(Func, &Parms);
}

int32_t UPakWorker::MergePaks(struct FString InSrcPakFileName, struct FString InPatchPakFileName, struct FString InOutputPakFileName, uint8_t bCalculateMD5)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "MergePaks");
    struct
    {
        struct FString InSrcPakFileName;
        struct FString InPatchPakFileName;
        struct FString InOutputPakFileName;
        uint8_t bCalculateMD5;
        int32_t ReturnValue;
    } Parms{};
    Parms.InSrcPakFileName = (struct FString)InSrcPakFileName;
    Parms.InPatchPakFileName = (struct FString)InPatchPakFileName;
    Parms.InOutputPakFileName = (struct FString)InOutputPakFileName;
    Parms.bCalculateMD5 = (uint8_t)bCalculateMD5;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UPakWorker::ExtractPakChunkFromFileName(struct FString PakFileName, struct FString& OutPakChunk)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("PakWorker", "ExtractPakChunkFromFileName");
    struct
    {
        struct FString PakFileName;
        struct FString OutPakChunk;
        uint8_t ReturnValue;
    } Parms{};
    Parms.PakFileName = (struct FString)PakFileName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPakChunk = Parms.OutPakChunk;
    return Parms.ReturnValue;
}

void UPakWorker::CancelAsyncTask()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("PakWorker", "CancelAsyncTask");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
