#include "GeneBatchBlueprintGlue.hpp"
#include "Engine.hpp"
#include "GeneBatch.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBatchHelper
struct TArray<struct UStaticMeshComponent*> UBatchHelper::FilterByVolume(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, float VolumeLimit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByVolume");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        float VolumeLimit;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    Parms.VolumeLimit = (float)VolumeLimit;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UStaticMeshComponent*> UBatchHelper::FilterByVirtualTextureDeco(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByVirtualTextureDeco");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UStaticMeshComponent*> UBatchHelper::FilterByValidMesh(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByValidMesh");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UStaticMeshComponent*> UBatchHelper::FilterByReplicated(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, uint8_t Replicated)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByReplicated");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        uint8_t Replicated;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    Parms.Replicated = (uint8_t)Replicated;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UStaticMeshComponent*> UBatchHelper::FilterByMobility(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, EComponentMobility Mobility)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByMobility");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        enum EComponentMobility Mobility;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    Parms.Mobility = (enum EComponentMobility)Mobility;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UStaticMeshComponent*> UBatchHelper::FilterByMeshAssetsTags(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, const struct TArray<struct FName>& InBlockTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByMeshAssetsTags");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        struct TArray<struct FName> InBlockTags;
        struct TArray<struct UStaticMeshComponent*> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    Parms.InBlockTags = (struct TArray<struct FName>)InBlockTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FMaterialFilterInfo> UBatchHelper::FilterByMaterial(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByMaterial");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        struct TArray<struct FMaterialFilterInfo> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FLocalLightGroupBakeFilterInfo> UBatchHelper::FilterByLocalLightGroupBake(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "FilterByLocalLightGroupBake");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        struct TArray<struct FLocalLightGroupBakeFilterInfo> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBatchHelper::DrawTextureToScreen(struct UTexture2D* Texture2D)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "DrawTextureToScreen");
    struct
    {
        struct UTexture2D* Texture2D;
    } Parms{};
    Parms.Texture2D = (struct UTexture2D*)Texture2D;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UBatchHelper::ClearBatchData(struct FString BatchDataPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "ClearBatchData");
    struct
    {
        struct FString BatchDataPath;
    } Parms{};
    Parms.BatchDataPath = (struct FString)BatchDataPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct TArray<struct FStaticMeshMergeInfo> UBatchHelper::BatchWorld(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComps, const struct FBatchConfig& BatchSetting)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BatchHelper", "BatchWorld");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComps;
        struct FBatchConfig BatchSetting;
        struct TArray<struct FStaticMeshMergeInfo> ReturnValue;
    } Parms{};
    Parms.InStaticMeshComps = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComps;
    Parms.BatchSetting = (struct FBatchConfig)BatchSetting;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGeneBatchBlueprintGlue
uint8_t UGeneBatchBlueprintGlue::TryCreateGeneBatchRuntime(struct UWorld* World, struct UGeneBatchSettingsObject* InSettingObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "TryCreateGeneBatchRuntime");
    struct
    {
        struct UWorld* World;
        struct UGeneBatchSettingsObject* InSettingObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InSettingObject = (struct UGeneBatchSettingsObject*)InSettingObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::SwapVertexColorChannelForStaticMeshComponent(struct UStaticMeshComponent* InStaticMeshComponent, struct UMaterialInterface* MaterialInterface, EVertexColorChannel VertexColorChannel1, EVertexColorChannel VertexColorChannel2, uint8_t bApplyToStaticMesh, uint8_t bApplyToComponent, struct UDataTable* SwapVertexColorObjectDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "SwapVertexColorChannelForStaticMeshComponent");
    struct
    {
        struct UStaticMeshComponent* InStaticMeshComponent;
        struct UMaterialInterface* MaterialInterface;
        enum EVertexColorChannel VertexColorChannel1;
        enum EVertexColorChannel VertexColorChannel2;
        uint8_t bApplyToStaticMesh;
        uint8_t bApplyToComponent;
        struct UDataTable* SwapVertexColorObjectDataTable;
    } Parms{};
    Parms.InStaticMeshComponent = (struct UStaticMeshComponent*)InStaticMeshComponent;
    Parms.MaterialInterface = (struct UMaterialInterface*)MaterialInterface;
    Parms.VertexColorChannel1 = (enum EVertexColorChannel)VertexColorChannel1;
    Parms.VertexColorChannel2 = (enum EVertexColorChannel)VertexColorChannel2;
    Parms.bApplyToStaticMesh = (uint8_t)bApplyToStaticMesh;
    Parms.bApplyToComponent = (uint8_t)bApplyToComponent;
    Parms.SwapVertexColorObjectDataTable = (struct UDataTable*)SwapVertexColorObjectDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::SwapVertexColorChannelForStaticMesh(struct UStaticMesh* StaticMesh, struct UMaterialInterface* MaterialInterface, EVertexColorChannel VertexColorChannel1, EVertexColorChannel VertexColorChannel2, struct UDataTable* SwapVertexColorObjectDataTable, uint8_t bUseUE4Method)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "SwapVertexColorChannelForStaticMesh");
    struct
    {
        struct UStaticMesh* StaticMesh;
        struct UMaterialInterface* MaterialInterface;
        enum EVertexColorChannel VertexColorChannel1;
        enum EVertexColorChannel VertexColorChannel2;
        struct UDataTable* SwapVertexColorObjectDataTable;
        uint8_t bUseUE4Method;
    } Parms{};
    Parms.StaticMesh = (struct UStaticMesh*)StaticMesh;
    Parms.MaterialInterface = (struct UMaterialInterface*)MaterialInterface;
    Parms.VertexColorChannel1 = (enum EVertexColorChannel)VertexColorChannel1;
    Parms.VertexColorChannel2 = (enum EVertexColorChannel)VertexColorChannel2;
    Parms.SwapVertexColorObjectDataTable = (struct UDataTable*)SwapVertexColorObjectDataTable;
    Parms.bUseUE4Method = (uint8_t)bUseUE4Method;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::SendMessageToCompanyChat(struct FString URL, struct FString Content)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "SendMessageToCompanyChat");
    struct
    {
        struct FString URL;
        struct FString Content;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.Content = (struct FString)Content;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::SendImageToCompanyChat(struct FString URL, struct FString PNGFilename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "SendImageToCompanyChat");
    struct
    {
        struct FString URL;
        struct FString PNGFilename;
    } Parms{};
    Parms.URL = (struct FString)URL;
    Parms.PNGFilename = (struct FString)PNGFilename;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGeneBatchBlueprintGlue::PrepareBuildGridComponents(const struct TArray<struct UStaticMeshComponent*>& InComponents, const struct TArray<struct UGeneBatchSettingsObject*>& InGeneBatchSettingsObjects, float GridLength, struct TMap<struct FIntPoint, struct FGeneBatchStaticMeshComponentArray>& OutGridComponents)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "PrepareBuildGridComponents");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InComponents;
        struct TArray<struct UGeneBatchSettingsObject*> InGeneBatchSettingsObjects;
        float GridLength;
        struct TMap<struct FIntPoint, struct FGeneBatchStaticMeshComponentArray> OutGridComponents;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InComponents = (struct TArray<struct UStaticMeshComponent*>)InComponents;
    Parms.InGeneBatchSettingsObjects = (struct TArray<struct UGeneBatchSettingsObject*>)InGeneBatchSettingsObjects;
    Parms.GridLength = (float)GridLength;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutGridComponents = Parms.OutGridComponents;
    return Parms.ReturnValue;
}

struct FIntPoint UGeneBatchBlueprintGlue::PositionToGridKeyDelegate__DelegateSignature(struct FVector Position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchBlueprintGlue", "PositionToGridKeyDelegate__DelegateSignature");
    struct
    {
        struct FVector Position;
        struct FIntPoint ReturnValue;
    } Parms{};
    Parms.Position = (struct FVector)Position;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGeneBatchBlueprintGlue::POISettingsContainPOIs(struct UGeneBatchPOISettingsObject* POISettings, const struct TArray<struct FName>& POINames)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "POISettingsContainPOIs");
    struct
    {
        struct UGeneBatchPOISettingsObject* POISettings;
        struct TArray<struct FName> POINames;
        uint8_t ReturnValue;
    } Parms{};
    Parms.POISettings = (struct UGeneBatchPOISettingsObject*)POISettings;
    Parms.POINames = (struct TArray<struct FName>)POINames;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UGeneBatchBlueprintGlue::GetPOIsInGameplayArea(struct FString LevelName, struct FName GameplayArea)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetPOIsInGameplayArea");
    struct
    {
        struct FString LevelName;
        struct FName GameplayArea;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    Parms.GameplayArea = (struct FName)GameplayArea;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<int32_t> UGeneBatchBlueprintGlue::GetMaterialUsedTextureCoordinates(struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetMaterialUsedTextureCoordinates");
    struct
    {
        struct UMaterialInterface* Material;
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    Parms.Material = (struct UMaterialInterface*)Material;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FName> UGeneBatchBlueprintGlue::GetGameplayAreas(struct FString LevelName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetGameplayAreas");
    struct
    {
        struct FString LevelName;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGeneBatchBlueprintGlue::GetAtlasMapCountInPOI(struct FString LevelName, struct FName POIName, struct FGeneBatchAtlasCountDetails& AtlasCountDetails)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetAtlasMapCountInPOI");
    struct
    {
        struct FString LevelName;
        struct FName POIName;
        struct FGeneBatchAtlasCountDetails AtlasCountDetails;
        int32_t ReturnValue;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    Parms.POIName = (struct FName)POIName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AtlasCountDetails = Parms.AtlasCountDetails;
    return Parms.ReturnValue;
}

int32_t UGeneBatchBlueprintGlue::GetAtlasMapCountInGameplayArea(struct FString LevelName, struct FName GameplayAreaName, struct FGeneBatchAtlasCountDetails& AtlasCountDetails)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetAtlasMapCountInGameplayArea");
    struct
    {
        struct FString LevelName;
        struct FName GameplayAreaName;
        struct FGeneBatchAtlasCountDetails AtlasCountDetails;
        int32_t ReturnValue;
    } Parms{};
    Parms.LevelName = (struct FString)LevelName;
    Parms.GameplayAreaName = (struct FName)GameplayAreaName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AtlasCountDetails = Parms.AtlasCountDetails;
    return Parms.ReturnValue;
}

int32_t UGeneBatchBlueprintGlue::GetAtlasMapCount(struct UGeneBatchSettingsObject* SettingsObject, struct FGeneBatchAtlasCountDetails& AtlasCountDetails)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetAtlasMapCount");
    struct
    {
        struct UGeneBatchSettingsObject* SettingsObject;
        struct FGeneBatchAtlasCountDetails AtlasCountDetails;
        int32_t ReturnValue;
    } Parms{};
    Parms.SettingsObject = (struct UGeneBatchSettingsObject*)SettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    AtlasCountDetails = Parms.AtlasCountDetails;
    return Parms.ReturnValue;
}

struct FString UGeneBatchBlueprintGlue::GetAnalyzeBasePathOfWorld(struct UWorld* World, struct FString InSubspace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetAnalyzeBasePathOfWorld");
    struct
    {
        struct UWorld* World;
        struct FString InSubspace;
        struct FString ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.InSubspace = (struct FString)InSubspace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGeneBatchBlueprintGlue::GetAnalyzeBasePathOfTheme(struct UWorld* World, const struct FGeneBatchTheme& Theme, struct FString InSubspace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetAnalyzeBasePathOfTheme");
    struct
    {
        struct UWorld* World;
        struct FGeneBatchTheme Theme;
        struct FString InSubspace;
        struct FString ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Theme = (struct FGeneBatchTheme)Theme;
    Parms.InSubspace = (struct FString)InSubspace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UGeneBatchBlueprintGlue::GetAnalyzeBasePathOfPOI(struct UWorld* World, const struct FGeneBatchPOI& POI, struct FString InSubspace)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GetAnalyzeBasePathOfPOI");
    struct
    {
        struct UWorld* World;
        struct FGeneBatchPOI POI;
        struct FString InSubspace;
        struct FString ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.POI = (struct FGeneBatchPOI)POI;
    Parms.InSubspace = (struct FString)InSubspace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::GeneUnionBatchAnalyzeRaw(int32_t GenerationNum, int32_t IndividualNum, struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* MeshResultDataTable, struct UDataTable* TextureResultDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* CanNotMergeDrawSectionTable, struct UDataTable* CanMergeDrawSectionTable, struct UDataTable* PrimitiveInstanceDataDataTable, struct UDataTable* HLODResultDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneUnionBatchAnalyzeRaw");
    struct
    {
        int32_t GenerationNum;
        int32_t IndividualNum;
        struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings;
        uint8_t bEnableStatsObjective;
        uint8_t bEnableStatsIndividual;
        uint8_t bEnableMultithread;
        struct UDataTable* DrawSectionResultDataTable;
        struct UDataTable* MeshResultDataTable;
        struct UDataTable* TextureResultDataTable;
        struct UDataTable* AtlasResultDataTable;
        struct UDataTable* CanNotMergeDrawSectionTable;
        struct UDataTable* CanMergeDrawSectionTable;
        struct UDataTable* PrimitiveInstanceDataDataTable;
        struct UDataTable* HLODResultDataTable;
    } Parms{};
    Parms.GenerationNum = (int32_t)GenerationNum;
    Parms.IndividualNum = (int32_t)IndividualNum;
    Parms.GeneBatchAnalyzeSettings = (struct FGeneBatchAnalyzeHLODSettings)GeneBatchAnalyzeSettings;
    Parms.bEnableStatsObjective = (uint8_t)bEnableStatsObjective;
    Parms.bEnableStatsIndividual = (uint8_t)bEnableStatsIndividual;
    Parms.bEnableMultithread = (uint8_t)bEnableMultithread;
    Parms.DrawSectionResultDataTable = (struct UDataTable*)DrawSectionResultDataTable;
    Parms.MeshResultDataTable = (struct UDataTable*)MeshResultDataTable;
    Parms.TextureResultDataTable = (struct UDataTable*)TextureResultDataTable;
    Parms.AtlasResultDataTable = (struct UDataTable*)AtlasResultDataTable;
    Parms.CanNotMergeDrawSectionTable = (struct UDataTable*)CanNotMergeDrawSectionTable;
    Parms.CanMergeDrawSectionTable = (struct UDataTable*)CanMergeDrawSectionTable;
    Parms.PrimitiveInstanceDataDataTable = (struct UDataTable*)PrimitiveInstanceDataDataTable;
    Parms.HLODResultDataTable = (struct UDataTable*)HLODResultDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneSplitBatchAnalyzeRaw(struct UGeneBatchSettingsObject* GeneBatchSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneSplitBatchAnalyzeRaw");
    struct
    {
        struct UGeneBatchSettingsObject* GeneBatchSettingsObject;
    } Parms{};
    Parms.GeneBatchSettingsObject = (struct UGeneBatchSettingsObject*)GeneBatchSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneSplitBatchAnalyze(struct UGeneBatchSettingsObject* InSettingsObject, uint8_t bSaveResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneSplitBatchAnalyze");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        uint8_t bSaveResult;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.bSaveResult = (uint8_t)bSaveResult;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UDataTable* UGeneBatchBlueprintGlue::GenerateGeneBatchRuntimeDataTable(struct UDataTable* InOutAtlasResultDataTable, struct UDataTable* InResultHLODDataTable, struct UDataTable* InDrawSectionFinalResultDataTable, struct UDataTable* InOutGeneBatchTextureAtlasDataTable, struct UDataTable* InOutGeneBatchStaticMeshDataTable, struct UDataTable* InOutGeneBatchMeshComponentDataTable, struct UDataTable* InOutGeneBatchStaticMeshProxyInputDataTable, int32_t InQuality)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GenerateGeneBatchRuntimeDataTable");
    struct
    {
        struct UDataTable* InOutAtlasResultDataTable;
        struct UDataTable* InResultHLODDataTable;
        struct UDataTable* InDrawSectionFinalResultDataTable;
        struct UDataTable* InOutGeneBatchTextureAtlasDataTable;
        struct UDataTable* InOutGeneBatchStaticMeshDataTable;
        struct UDataTable* InOutGeneBatchMeshComponentDataTable;
        struct UDataTable* InOutGeneBatchStaticMeshProxyInputDataTable;
        int32_t InQuality;
        struct UDataTable* ReturnValue;
    } Parms{};
    Parms.InOutAtlasResultDataTable = (struct UDataTable*)InOutAtlasResultDataTable;
    Parms.InResultHLODDataTable = (struct UDataTable*)InResultHLODDataTable;
    Parms.InDrawSectionFinalResultDataTable = (struct UDataTable*)InDrawSectionFinalResultDataTable;
    Parms.InOutGeneBatchTextureAtlasDataTable = (struct UDataTable*)InOutGeneBatchTextureAtlasDataTable;
    Parms.InOutGeneBatchStaticMeshDataTable = (struct UDataTable*)InOutGeneBatchStaticMeshDataTable;
    Parms.InOutGeneBatchMeshComponentDataTable = (struct UDataTable*)InOutGeneBatchMeshComponentDataTable;
    Parms.InOutGeneBatchStaticMeshProxyInputDataTable = (struct UDataTable*)InOutGeneBatchStaticMeshProxyInputDataTable;
    Parms.InQuality = (int32_t)InQuality;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::GeneJointBatchParameterOptimizationWithConfig(struct UGeneBatchSettingsObject* InSettingsObject, struct FGeneBatchParameterOptimizationConfig ParameterOptimizationConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneJointBatchParameterOptimizationWithConfig");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        struct FGeneBatchParameterOptimizationConfig ParameterOptimizationConfig;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.ParameterOptimizationConfig = (struct FGeneBatchParameterOptimizationConfig)ParameterOptimizationConfig;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneJointBatchParameterOptimizationRaw(int32_t GenerationNum, int32_t IndividualNum, struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings, struct UGeneBatchSettingsObject* GeneBatchSettingsObject, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct FGeneBatchParameterOptimizationConfig ParameterOptimizationConfigs, struct UDataTable* ParameterOptimizationDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneJointBatchParameterOptimizationRaw");
    struct
    {
        int32_t GenerationNum;
        int32_t IndividualNum;
        struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings;
        struct UGeneBatchSettingsObject* GeneBatchSettingsObject;
        uint8_t bEnableStatsObjective;
        uint8_t bEnableStatsIndividual;
        uint8_t bEnableMultithread;
        struct FGeneBatchParameterOptimizationConfig ParameterOptimizationConfigs;
        struct UDataTable* ParameterOptimizationDataTable;
    } Parms{};
    Parms.GenerationNum = (int32_t)GenerationNum;
    Parms.IndividualNum = (int32_t)IndividualNum;
    Parms.GeneBatchAnalyzeSettings = (struct FGeneBatchAnalyzeHLODSettings)GeneBatchAnalyzeSettings;
    Parms.GeneBatchSettingsObject = (struct UGeneBatchSettingsObject*)GeneBatchSettingsObject;
    Parms.bEnableStatsObjective = (uint8_t)bEnableStatsObjective;
    Parms.bEnableStatsIndividual = (uint8_t)bEnableStatsIndividual;
    Parms.bEnableMultithread = (uint8_t)bEnableMultithread;
    Parms.ParameterOptimizationConfigs = (struct FGeneBatchParameterOptimizationConfig)ParameterOptimizationConfigs;
    Parms.ParameterOptimizationDataTable = (struct UDataTable*)ParameterOptimizationDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneJointBatchParameterOptimization(struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneJointBatchParameterOptimization");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneJointBatchAnalyzeRaw(int32_t GenerationNum, int32_t IndividualNum, struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings, struct UGeneBatchSettingsObject* GeneBatchSettingsObject, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* MeshResultDataTable, struct UDataTable* TextureResultDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* CanNotMergeDrawSectionTable, struct UDataTable* CanMergeDrawSectionTable, struct UDataTable* PrimitiveInstanceDataDataTable, struct UDataTable* HLODResultDataTable, struct UDataTable* MergeFailureDataTable, struct UDataTable* InWhyNotBatchStatsDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneJointBatchAnalyzeRaw");
    struct
    {
        int32_t GenerationNum;
        int32_t IndividualNum;
        struct FGeneBatchAnalyzeHLODSettings GeneBatchAnalyzeSettings;
        struct UGeneBatchSettingsObject* GeneBatchSettingsObject;
        uint8_t bEnableStatsObjective;
        uint8_t bEnableStatsIndividual;
        uint8_t bEnableMultithread;
        struct UDataTable* DrawSectionResultDataTable;
        struct UDataTable* MeshResultDataTable;
        struct UDataTable* TextureResultDataTable;
        struct UDataTable* AtlasResultDataTable;
        struct UDataTable* CanNotMergeDrawSectionTable;
        struct UDataTable* CanMergeDrawSectionTable;
        struct UDataTable* PrimitiveInstanceDataDataTable;
        struct UDataTable* HLODResultDataTable;
        struct UDataTable* MergeFailureDataTable;
        struct UDataTable* InWhyNotBatchStatsDataTable;
    } Parms{};
    Parms.GenerationNum = (int32_t)GenerationNum;
    Parms.IndividualNum = (int32_t)IndividualNum;
    Parms.GeneBatchAnalyzeSettings = (struct FGeneBatchAnalyzeHLODSettings)GeneBatchAnalyzeSettings;
    Parms.GeneBatchSettingsObject = (struct UGeneBatchSettingsObject*)GeneBatchSettingsObject;
    Parms.bEnableStatsObjective = (uint8_t)bEnableStatsObjective;
    Parms.bEnableStatsIndividual = (uint8_t)bEnableStatsIndividual;
    Parms.bEnableMultithread = (uint8_t)bEnableMultithread;
    Parms.DrawSectionResultDataTable = (struct UDataTable*)DrawSectionResultDataTable;
    Parms.MeshResultDataTable = (struct UDataTable*)MeshResultDataTable;
    Parms.TextureResultDataTable = (struct UDataTable*)TextureResultDataTable;
    Parms.AtlasResultDataTable = (struct UDataTable*)AtlasResultDataTable;
    Parms.CanNotMergeDrawSectionTable = (struct UDataTable*)CanNotMergeDrawSectionTable;
    Parms.CanMergeDrawSectionTable = (struct UDataTable*)CanMergeDrawSectionTable;
    Parms.PrimitiveInstanceDataDataTable = (struct UDataTable*)PrimitiveInstanceDataDataTable;
    Parms.HLODResultDataTable = (struct UDataTable*)HLODResultDataTable;
    Parms.MergeFailureDataTable = (struct UDataTable*)MergeFailureDataTable;
    Parms.InWhyNotBatchStatsDataTable = (struct UDataTable*)InWhyNotBatchStatsDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneJointBatchAnalyze(struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneJointBatchAnalyze");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchUpdatePrimitiveHLODParentMap(const struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>& ConvertedPrimitivesMap, struct UDataTable* InOutGeneBatchPrimitiveHLODParentDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchUpdatePrimitiveHLODParentMap");
    struct
    {
        struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>> ConvertedPrimitivesMap;
        struct UDataTable* InOutGeneBatchPrimitiveHLODParentDataTable;
    } Parms{};
    Parms.ConvertedPrimitivesMap = (struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>)ConvertedPrimitivesMap;
    Parms.InOutGeneBatchPrimitiveHLODParentDataTable = (struct UDataTable*)InOutGeneBatchPrimitiveHLODParentDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchSplitPOIAnalyzeData(struct UGeneBatchPOISettingsObject* InPOISettings, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, const struct TArray<struct FName>& BuildGameplayAreas, struct TArray<struct FGeneBatchPOIInputData>& OutPOIInputData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchSplitPOIAnalyzeData");
    struct
    {
        struct UGeneBatchPOISettingsObject* InPOISettings;
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        struct TArray<struct FName> BuildGameplayAreas;
        struct TArray<struct FGeneBatchPOIInputData> OutPOIInputData;
    } Parms{};
    Parms.InPOISettings = (struct UGeneBatchPOISettingsObject*)InPOISettings;
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.BuildGameplayAreas = (struct TArray<struct FName>)BuildGameplayAreas;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutPOIInputData = Parms.OutPOIInputData;
}

void UGeneBatchBlueprintGlue::GeneBatchSetLazyLODParentComponent(const struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>& ConvertedPrimitivesMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchSetLazyLODParentComponent");
    struct
    {
        struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>> ConvertedPrimitivesMap;
    } Parms{};
    Parms.ConvertedPrimitivesMap = (struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>)ConvertedPrimitivesMap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchSaveConvertedPrimitives(const struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>& GenerationMapReversed, struct UGeneBatchSettingsObject* GeneBatchSettings)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchSaveConvertedPrimitives");
    struct
    {
        struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>> GenerationMapReversed;
        struct UGeneBatchSettingsObject* GeneBatchSettings;
    } Parms{};
    Parms.GenerationMapReversed = (struct TMap<struct TSoftObjectPtr<UPrimitiveComponent>, struct TSoftObjectPtr<UPrimitiveComponent>>)GenerationMapReversed;
    Parms.GeneBatchSettings = (struct UGeneBatchSettingsObject*)GeneBatchSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchReBakeMeshes(struct UGeneBatchSettingsObject* InSettingsObject, const struct TArray<struct FGeneBatchTableRowResultHLODData>& InHLODData, const struct TArray<struct FGeneBatchTableRowResultMesh>& InMeshData, struct TArray<struct FGeneBatchTableRowResultMergeDrawSection> InMergeDrawSections, uint8_t bReplace, struct TArray<struct UPackage*>& OutDirtyPackages)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchReBakeMeshes");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        struct TArray<struct FGeneBatchTableRowResultHLODData> InHLODData;
        struct TArray<struct FGeneBatchTableRowResultMesh> InMeshData;
        struct TArray<struct FGeneBatchTableRowResultMergeDrawSection> InMergeDrawSections;
        uint8_t bReplace;
        struct TArray<struct UPackage*> OutDirtyPackages;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.InHLODData = (struct TArray<struct FGeneBatchTableRowResultHLODData>)InHLODData;
    Parms.InMeshData = (struct TArray<struct FGeneBatchTableRowResultMesh>)InMeshData;
    Parms.InMergeDrawSections = (struct TArray<struct FGeneBatchTableRowResultMergeDrawSection>)InMergeDrawSections;
    Parms.bReplace = (uint8_t)bReplace;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDirtyPackages = Parms.OutDirtyPackages;
}

void UGeneBatchBlueprintGlue::GeneBatchPreAnalyze()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchPreAnalyze");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchGenerateAnalyzeDataForPendingLevels(struct UGeneBatchSettingsObject* InSettingsObject, struct TArray<struct FString>& OutDirtyLevelPaths, uint8_t bSaveResult, uint8_t bRebuild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchGenerateAnalyzeDataForPendingLevels");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        struct TArray<struct FString> OutDirtyLevelPaths;
        uint8_t bSaveResult;
        uint8_t bRebuild;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.bSaveResult = (uint8_t)bSaveResult;
    Parms.bRebuild = (uint8_t)bRebuild;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutDirtyLevelPaths = Parms.OutDirtyLevelPaths;
}

void UGeneBatchBlueprintGlue::GeneBatchCreateRuntimeBakedMeshComponentsDeprecated(struct FString LevelKey, struct TArray<struct UStaticMeshComponent*> StaticMeshComponents, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCreateRuntimeBakedMeshComponentsDeprecated");
    struct
    {
        struct FString LevelKey;
        struct TArray<struct UStaticMeshComponent*> StaticMeshComponents;
        struct UGeneBatchSettingsObject* InSettings;
        struct TArray<struct FGeneBatchStaticMeshMergeInfo> BakedMeshInfo;
    } Parms{};
    Parms.LevelKey = (struct FString)LevelKey;
    Parms.StaticMeshComponents = (struct TArray<struct UStaticMeshComponent*>)StaticMeshComponents;
    Parms.InSettings = (struct UGeneBatchSettingsObject*)InSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BakedMeshInfo = Parms.BakedMeshInfo;
}

void UGeneBatchBlueprintGlue::GeneBatchCreateRuntimeBakedMeshComponents(struct FString LevelKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCreateRuntimeBakedMeshComponents");
    struct
    {
        struct FString LevelKey;
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        struct UGeneBatchSettingsObject* InSettings;
        struct TArray<struct FGeneBatchStaticMeshMergeInfo> BakedMeshInfo;
    } Parms{};
    Parms.LevelKey = (struct FString)LevelKey;
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.InSettings = (struct UGeneBatchSettingsObject*)InSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BakedMeshInfo = Parms.BakedMeshInfo;
}

void UGeneBatchBlueprintGlue::GeneBatchCreateBakedMeshComponentDeprecated(struct FString LevelKey, struct TArray<struct UStaticMeshComponent*> StaticMeshComponents, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCreateBakedMeshComponentDeprecated");
    struct
    {
        struct FString LevelKey;
        struct TArray<struct UStaticMeshComponent*> StaticMeshComponents;
        struct UGeneBatchSettingsObject* InSettings;
        struct TArray<struct FGeneBatchStaticMeshMergeInfo> BakedMeshInfo;
    } Parms{};
    Parms.LevelKey = (struct FString)LevelKey;
    Parms.StaticMeshComponents = (struct TArray<struct UStaticMeshComponent*>)StaticMeshComponents;
    Parms.InSettings = (struct UGeneBatchSettingsObject*)InSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BakedMeshInfo = Parms.BakedMeshInfo;
}

void UGeneBatchBlueprintGlue::GeneBatchCreateBakedMeshComponent(struct FString LevelKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& BakedMeshInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCreateBakedMeshComponent");
    struct
    {
        struct FString LevelKey;
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        struct UGeneBatchSettingsObject* InSettings;
        struct TArray<struct FGeneBatchStaticMeshMergeInfo> BakedMeshInfo;
    } Parms{};
    Parms.LevelKey = (struct FString)LevelKey;
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.InSettings = (struct UGeneBatchSettingsObject*)InSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    BakedMeshInfo = Parms.BakedMeshInfo;
}

void UGeneBatchBlueprintGlue::GeneBatchCreateAllBakedMeshComponents(struct FString InLevelKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettings, struct TArray<struct FGeneBatchStaticMeshMergeInfo>& OutBakedMeshInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCreateAllBakedMeshComponents");
    struct
    {
        struct FString InLevelKey;
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        struct UGeneBatchSettingsObject* InSettings;
        struct TArray<struct FGeneBatchStaticMeshMergeInfo> OutBakedMeshInfo;
    } Parms{};
    Parms.InLevelKey = (struct FString)InLevelKey;
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.InSettings = (struct UGeneBatchSettingsObject*)InSettings;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutBakedMeshInfo = Parms.OutBakedMeshInfo;
}

void UGeneBatchBlueprintGlue::GeneBatchCollectShouldLoadAndBuildPOIsAndThemes(struct UGeneBatchPOISettingsObject* InPOISettings, const struct TArray<struct FName>& BuildGameplayAreas, struct TArray<struct FName>& ShouldBuildThemes, struct TArray<struct FName>& ShouldBuildPOIs, struct TArray<struct FName>& ShouldLoadPOIs, struct TArray<struct FName>& ShouldLoadGameplayAreas, uint8_t bKeepValid, uint8_t bPrintLog)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCollectShouldLoadAndBuildPOIsAndThemes");
    struct
    {
        struct UGeneBatchPOISettingsObject* InPOISettings;
        struct TArray<struct FName> BuildGameplayAreas;
        struct TArray<struct FName> ShouldBuildThemes;
        struct TArray<struct FName> ShouldBuildPOIs;
        struct TArray<struct FName> ShouldLoadPOIs;
        struct TArray<struct FName> ShouldLoadGameplayAreas;
        uint8_t bKeepValid;
        uint8_t bPrintLog;
    } Parms{};
    Parms.InPOISettings = (struct UGeneBatchPOISettingsObject*)InPOISettings;
    Parms.BuildGameplayAreas = (struct TArray<struct FName>)BuildGameplayAreas;
    Parms.bKeepValid = (uint8_t)bKeepValid;
    Parms.bPrintLog = (uint8_t)bPrintLog;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ShouldBuildThemes = Parms.ShouldBuildThemes;
    ShouldBuildPOIs = Parms.ShouldBuildPOIs;
    ShouldLoadPOIs = Parms.ShouldLoadPOIs;
    ShouldLoadGameplayAreas = Parms.ShouldLoadGameplayAreas;
}

void UGeneBatchBlueprintGlue::GeneBatchClearUsedStaticMeshComponents()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchClearUsedStaticMeshComponents");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UGeneBatchBlueprintGlue::GeneBatchCheckBoxIntersectsPOI(struct UGeneBatchPOISettingsObject* InPOISettings, const struct TArray<struct FName>& BuildGameplayAreas, const struct FBox& Box)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchCheckBoxIntersectsPOI");
    struct
    {
        struct UGeneBatchPOISettingsObject* InPOISettings;
        struct TArray<struct FName> BuildGameplayAreas;
        struct FBox Box;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPOISettings = (struct UGeneBatchPOISettingsObject*)InPOISettings;
    Parms.BuildGameplayAreas = (struct TArray<struct FName>)BuildGameplayAreas;
    Parms.Box = (struct FBox)Box;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::GeneBatchBakeMIDs(struct UGeneBatchSettingsObject* InSettingsObject, struct FString InBakedMaterialPath, struct FString InBakedMeshesPath, struct UDataTable* InAllowAnalyzeDataTable, struct UDataTable* InPrimitiveInstanceDataDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* DrawSectionFinalResultDataTable, struct UDataTable* ResultHLODDataTable, struct UDataTable* InResultMeshDataTable, struct UDataTable* InResultMaterialDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchBakeMIDs");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        struct FString InBakedMaterialPath;
        struct FString InBakedMeshesPath;
        struct UDataTable* InAllowAnalyzeDataTable;
        struct UDataTable* InPrimitiveInstanceDataDataTable;
        struct UDataTable* AtlasResultDataTable;
        struct UDataTable* DrawSectionResultDataTable;
        struct UDataTable* DrawSectionFinalResultDataTable;
        struct UDataTable* ResultHLODDataTable;
        struct UDataTable* InResultMeshDataTable;
        struct UDataTable* InResultMaterialDataTable;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.InBakedMaterialPath = (struct FString)InBakedMaterialPath;
    Parms.InBakedMeshesPath = (struct FString)InBakedMeshesPath;
    Parms.InAllowAnalyzeDataTable = (struct UDataTable*)InAllowAnalyzeDataTable;
    Parms.InPrimitiveInstanceDataDataTable = (struct UDataTable*)InPrimitiveInstanceDataDataTable;
    Parms.AtlasResultDataTable = (struct UDataTable*)AtlasResultDataTable;
    Parms.DrawSectionResultDataTable = (struct UDataTable*)DrawSectionResultDataTable;
    Parms.DrawSectionFinalResultDataTable = (struct UDataTable*)DrawSectionFinalResultDataTable;
    Parms.ResultHLODDataTable = (struct UDataTable*)ResultHLODDataTable;
    Parms.InResultMeshDataTable = (struct UDataTable*)InResultMeshDataTable;
    Parms.InResultMaterialDataTable = (struct UDataTable*)InResultMaterialDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchBakeMeshesMultiProcess(struct FString BakedMeshesPath, struct UDataTable* InAllowAnalyzeDataTable, struct UDataTable* InPrimitiveInstanceDataDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* DrawSectionFinalResultDataTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchBakeMeshesMultiProcess");
    struct
    {
        struct FString BakedMeshesPath;
        struct UDataTable* InAllowAnalyzeDataTable;
        struct UDataTable* InPrimitiveInstanceDataDataTable;
        struct UDataTable* AtlasResultDataTable;
        struct UDataTable* DrawSectionResultDataTable;
        struct UDataTable* DrawSectionFinalResultDataTable;
    } Parms{};
    Parms.BakedMeshesPath = (struct FString)BakedMeshesPath;
    Parms.InAllowAnalyzeDataTable = (struct UDataTable*)InAllowAnalyzeDataTable;
    Parms.InPrimitiveInstanceDataDataTable = (struct UDataTable*)InPrimitiveInstanceDataDataTable;
    Parms.AtlasResultDataTable = (struct UDataTable*)AtlasResultDataTable;
    Parms.DrawSectionResultDataTable = (struct UDataTable*)DrawSectionResultDataTable;
    Parms.DrawSectionFinalResultDataTable = (struct UDataTable*)DrawSectionFinalResultDataTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchBakeMeshes(struct UGeneBatchSettingsObject* InSettingsObject, uint8_t bRebuild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchBakeMeshes");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        uint8_t bRebuild;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.bRebuild = (uint8_t)bRebuild;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchBakeAtlas(struct UGeneBatchSettingsObject* InSettingsObject, uint8_t bRebuild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchBakeAtlas");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        uint8_t bRebuild;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    Parms.bRebuild = (uint8_t)bRebuild;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchAnalyzeRaw(int32_t GenerationNum, int32_t IndividualNum, uint8_t bEnableStatsObjective, uint8_t bEnableStatsIndividual, uint8_t bEnableMultithread, struct UDataTable* DrawSectionResultDataTable, struct UDataTable* MeshResultDataTable, struct UDataTable* TextureResultDataTable, struct UDataTable* AtlasResultDataTable, struct UDataTable* CanNotMergeDrawSectionTable, struct UDataTable* CanMergeDrawSectionTable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchAnalyzeRaw");
    struct
    {
        int32_t GenerationNum;
        int32_t IndividualNum;
        uint8_t bEnableStatsObjective;
        uint8_t bEnableStatsIndividual;
        uint8_t bEnableMultithread;
        struct UDataTable* DrawSectionResultDataTable;
        struct UDataTable* MeshResultDataTable;
        struct UDataTable* TextureResultDataTable;
        struct UDataTable* AtlasResultDataTable;
        struct UDataTable* CanNotMergeDrawSectionTable;
        struct UDataTable* CanMergeDrawSectionTable;
    } Parms{};
    Parms.GenerationNum = (int32_t)GenerationNum;
    Parms.IndividualNum = (int32_t)IndividualNum;
    Parms.bEnableStatsObjective = (uint8_t)bEnableStatsObjective;
    Parms.bEnableStatsIndividual = (uint8_t)bEnableStatsIndividual;
    Parms.bEnableMultithread = (uint8_t)bEnableMultithread;
    Parms.DrawSectionResultDataTable = (struct UDataTable*)DrawSectionResultDataTable;
    Parms.MeshResultDataTable = (struct UDataTable*)MeshResultDataTable;
    Parms.TextureResultDataTable = (struct UDataTable*)TextureResultDataTable;
    Parms.AtlasResultDataTable = (struct UDataTable*)AtlasResultDataTable;
    Parms.CanNotMergeDrawSectionTable = (struct UDataTable*)CanNotMergeDrawSectionTable;
    Parms.CanMergeDrawSectionTable = (struct UDataTable*)CanMergeDrawSectionTable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchAnalyze(struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchAnalyze");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchAddAnalyzeDataWithMergeableMaterials(struct FString GridKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, const struct TArray<struct FGeneBatchMaterialInputData>& InMaterialInputData, struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchAddAnalyzeDataWithMergeableMaterials");
    struct
    {
        struct FString GridKey;
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        struct TArray<struct FGeneBatchMaterialInputData> InMaterialInputData;
        struct UGeneBatchSettingsObject* InSettingsObject;
    } Parms{};
    Parms.GridKey = (struct FString)GridKey;
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.InMaterialInputData = (struct TArray<struct FGeneBatchMaterialInputData>)InMaterialInputData;
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchAddAnalyzeDataDeprecated(struct FString InLevelName, const struct TArray<struct UStaticMeshComponent*>& InSMC, struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchAddAnalyzeDataDeprecated");
    struct
    {
        struct FString InLevelName;
        struct TArray<struct UStaticMeshComponent*> InSMC;
        struct UGeneBatchSettingsObject* InSettingsObject;
    } Parms{};
    Parms.InLevelName = (struct FString)InLevelName;
    Parms.InSMC = (struct TArray<struct UStaticMeshComponent*>)InSMC;
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::GeneBatchAddAnalyzeData(struct FString GridKey, const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "GeneBatchAddAnalyzeData");
    struct
    {
        struct FString GridKey;
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        struct UGeneBatchSettingsObject* InSettingsObject;
    } Parms{};
    Parms.GridKey = (struct FString)GridKey;
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct UGeneBatchPOISettingsObject* UGeneBatchBlueprintGlue::FindPOISettingsGloballyByPOINames(const struct TArray<struct FName>& POIName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "FindPOISettingsGloballyByPOINames");
    struct
    {
        struct TArray<struct FName> POIName;
        struct UGeneBatchPOISettingsObject* ReturnValue;
    } Parms{};
    Parms.POIName = (struct TArray<struct FName>)POIName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGeneBatchPOISettingsObject* UGeneBatchBlueprintGlue::FindPOISettingObject(struct FString InAnalyzeBasePath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "FindPOISettingObject");
    struct
    {
        struct FString InAnalyzeBasePath;
        struct UGeneBatchPOISettingsObject* ReturnValue;
    } Parms{};
    Parms.InAnalyzeBasePath = (struct FString)InAnalyzeBasePath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UPrimitiveComponent*> UGeneBatchBlueprintGlue::FindLeafHLODChildrenCurrent(struct UWorld* World, struct UPrimitiveComponent* PrimitiveComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "FindLeafHLODChildrenCurrent");
    struct
    {
        struct UWorld* World;
        struct UPrimitiveComponent* PrimitiveComponent;
        struct TArray<struct UPrimitiveComponent*> ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.PrimitiveComponent = (struct UPrimitiveComponent*)PrimitiveComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::FindAndLoadAllRuntimeComponent(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "FindAndLoadAllRuntimeComponent");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UGeneBatchBlueprintGlue::DirectMergeMultipleMeshes(const struct TArray<struct FGeneBatchMergeInputInfo>& InMergeInputInfos, struct FString InSavePath, int32_t DesiredAtlasResolution, EPixelFormat DesiredPixelFormat, struct TArray<struct FGeneBatchMergeResultComponentInfo>& OutMergeResultComponentInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "DirectMergeMultipleMeshes");
    struct
    {
        struct TArray<struct FGeneBatchMergeInputInfo> InMergeInputInfos;
        struct FString InSavePath;
        int32_t DesiredAtlasResolution;
        enum EPixelFormat DesiredPixelFormat;
        struct TArray<struct FGeneBatchMergeResultComponentInfo> OutMergeResultComponentInfos;
    } Parms{};
    Parms.InMergeInputInfos = (struct TArray<struct FGeneBatchMergeInputInfo>)InMergeInputInfos;
    Parms.InSavePath = (struct FString)InSavePath;
    Parms.DesiredAtlasResolution = (int32_t)DesiredAtlasResolution;
    Parms.DesiredPixelFormat = (enum EPixelFormat)DesiredPixelFormat;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMergeResultComponentInfos = Parms.OutMergeResultComponentInfos;
}

void UGeneBatchBlueprintGlue::DirectMergeMeshes(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComponents, struct FString InSavePath, int32_t DesiredAtlasResolution, struct TArray<struct FGeneBatchMergeResultInfo>& OutMergeResultInfos)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "DirectMergeMeshes");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComponents;
        struct FString InSavePath;
        int32_t DesiredAtlasResolution;
        struct TArray<struct FGeneBatchMergeResultInfo> OutMergeResultInfos;
    } Parms{};
    Parms.InStaticMeshComponents = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComponents;
    Parms.InSavePath = (struct FString)InSavePath;
    Parms.DesiredAtlasResolution = (int32_t)DesiredAtlasResolution;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMergeResultInfos = Parms.OutMergeResultInfos;
}

void UGeneBatchBlueprintGlue::DirectMerge(const struct TArray<struct UStaticMeshComponent*>& InStaticMeshComponents, struct FString InSavePath, int32_t DesiredAtlasResolution, struct TArray<struct FGeneBatchMergeResultInfo>& OutMergeResultInfos, int32_t AtlasGroupKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "DirectMerge");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComponents;
        struct FString InSavePath;
        int32_t DesiredAtlasResolution;
        struct TArray<struct FGeneBatchMergeResultInfo> OutMergeResultInfos;
        int32_t AtlasGroupKey;
    } Parms{};
    Parms.InStaticMeshComponents = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComponents;
    Parms.InSavePath = (struct FString)InSavePath;
    Parms.DesiredAtlasResolution = (int32_t)DesiredAtlasResolution;
    Parms.AtlasGroupKey = (int32_t)AtlasGroupKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMergeResultInfos = Parms.OutMergeResultInfos;
}

uint8_t UGeneBatchBlueprintGlue::CustomLevelFilter(struct FString LevelPath, struct FBox Box, struct UWorld* World, const struct TArray<struct FName>& BuildGameplayAreas, uint8_t bRebuild, uint8_t bAnalyzeOnly, struct FGeneBatchCustomLevelFilterContext& Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CustomLevelFilter");
    struct
    {
        struct FString LevelPath;
        struct FBox Box;
        struct UWorld* World;
        struct TArray<struct FName> BuildGameplayAreas;
        uint8_t bRebuild;
        uint8_t bAnalyzeOnly;
        struct FGeneBatchCustomLevelFilterContext Context;
        uint8_t ReturnValue;
    } Parms{};
    Parms.LevelPath = (struct FString)LevelPath;
    Parms.Box = (struct FBox)Box;
    Parms.World = (struct UWorld*)World;
    Parms.BuildGameplayAreas = (struct TArray<struct FName>)BuildGameplayAreas;
    Parms.bRebuild = (uint8_t)bRebuild;
    Parms.bAnalyzeOnly = (uint8_t)bAnalyzeOnly;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Context = Parms.Context;
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::CreateHLODISM(const struct FGeneBatchTableRowResultHLODData& HLOD, struct FGeneBatchStaticMeshMergeInfo& NewStaticMeshMergeInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CreateHLODISM");
    struct
    {
        struct FGeneBatchTableRowResultHLODData HLOD;
        struct FGeneBatchStaticMeshMergeInfo NewStaticMeshMergeInfo;
    } Parms{};
    Parms.HLOD = (struct FGeneBatchTableRowResultHLODData)HLOD;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    NewStaticMeshMergeInfo = Parms.NewStaticMeshMergeInfo;
}

struct FGeneBatchParameterOptimizationConfig UGeneBatchBlueprintGlue::CreateGeneBatchParameterOptimizationConfig(struct UGeneBatchSettingsObject* InSettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CreateGeneBatchParameterOptimizationConfig");
    struct
    {
        struct UGeneBatchSettingsObject* InSettingsObject;
        struct FGeneBatchParameterOptimizationConfig ReturnValue;
    } Parms{};
    Parms.InSettingsObject = (struct UGeneBatchSettingsObject*)InSettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGeneBatchSettingsObject* UGeneBatchBlueprintGlue::CreateAnalyzeSettingObject(struct FString InAnalyzeBasePath, int32_t InQuality, struct UGeneBatchPOISettingsObject* POISettings, int32_t InPOIIndex, int32_t InThemeIndex, uint8_t bInAutoLoadTable, int32_t InStartHLODLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CreateAnalyzeSettingObject");
    struct
    {
        struct FString InAnalyzeBasePath;
        int32_t InQuality;
        struct UGeneBatchPOISettingsObject* POISettings;
        int32_t InPOIIndex;
        int32_t InThemeIndex;
        uint8_t bInAutoLoadTable;
        int32_t InStartHLODLevel;
        struct UGeneBatchSettingsObject* ReturnValue;
    } Parms{};
    Parms.InAnalyzeBasePath = (struct FString)InAnalyzeBasePath;
    Parms.InQuality = (int32_t)InQuality;
    Parms.POISettings = (struct UGeneBatchPOISettingsObject*)POISettings;
    Parms.InPOIIndex = (int32_t)InPOIIndex;
    Parms.InThemeIndex = (int32_t)InThemeIndex;
    Parms.bInAutoLoadTable = (uint8_t)bInAutoLoadTable;
    Parms.InStartHLODLevel = (int32_t)InStartHLODLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct UGeneBatchSettingsObject*> UGeneBatchBlueprintGlue::CollectReferencedSettingsObjects(struct UGeneBatchSettingsObject* SettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CollectReferencedSettingsObjects");
    struct
    {
        struct UGeneBatchSettingsObject* SettingsObject;
        struct TArray<struct UGeneBatchSettingsObject*> ReturnValue;
    } Parms{};
    Parms.SettingsObject = (struct UGeneBatchSettingsObject*)SettingsObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FGeneBatchMaterialInputData> UGeneBatchBlueprintGlue::CollectMergeableMaterialsInTheme(struct UGeneBatchPOISettingsObject* POISettingsObject, const struct FGeneBatchTheme& Theme, const struct TArray<struct FGeneBatchSMCInputData>& InSMCs, struct TArray<struct FGeneBatchSMCInputData>& OutMergeableSMCs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CollectMergeableMaterialsInTheme");
    struct
    {
        struct UGeneBatchPOISettingsObject* POISettingsObject;
        struct FGeneBatchTheme Theme;
        struct TArray<struct FGeneBatchSMCInputData> InSMCs;
        struct TArray<struct FGeneBatchSMCInputData> OutMergeableSMCs;
        struct TArray<struct FGeneBatchMaterialInputData> ReturnValue;
    } Parms{};
    Parms.POISettingsObject = (struct UGeneBatchPOISettingsObject*)POISettingsObject;
    Parms.Theme = (struct FGeneBatchTheme)Theme;
    Parms.InSMCs = (struct TArray<struct FGeneBatchSMCInputData>)InSMCs;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutMergeableSMCs = Parms.OutMergeableSMCs;
    return Parms.ReturnValue;
}

struct UGeneBatchSettingsObject* UGeneBatchBlueprintGlue::ClusterISMs(const struct TArray<struct FGeneBatchSMCInputData>& InSMCInputData, int32_t MinISMNum, float ExpectedBoundSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "ClusterISMs");
    struct
    {
        struct TArray<struct FGeneBatchSMCInputData> InSMCInputData;
        int32_t MinISMNum;
        float ExpectedBoundSize;
        struct UGeneBatchSettingsObject* ReturnValue;
    } Parms{};
    Parms.InSMCInputData = (struct TArray<struct FGeneBatchSMCInputData>)InSMCInputData;
    Parms.MinISMNum = (int32_t)MinISMNum;
    Parms.ExpectedBoundSize = (float)ExpectedBoundSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UGeneBatchBlueprintGlue::CheckMaterialMergeableInSettings(struct UGeneBatchSettingsObject* SettingsObject, struct UMaterialInterface* Material)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CheckMaterialMergeableInSettings");
    struct
    {
        struct UGeneBatchSettingsObject* SettingsObject;
        struct UMaterialInterface* Material;
        uint8_t ReturnValue;
    } Parms{};
    Parms.SettingsObject = (struct UGeneBatchSettingsObject*)SettingsObject;
    Parms.Material = (struct UMaterialInterface*)Material;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::CastToSMC(const struct TArray<struct UActorComponent*>& InComps, struct TArray<struct UStaticMeshComponent*>& OutSMCs)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CastToSMC");
    struct
    {
        struct TArray<struct UActorComponent*> InComps;
        struct TArray<struct UStaticMeshComponent*> OutSMCs;
    } Parms{};
    Parms.InComps = (struct TArray<struct UActorComponent*>)InComps;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutSMCs = Parms.OutSMCs;
}

struct TArray<struct FName> UGeneBatchBlueprintGlue::CalculateCombinedSMTags(const struct TArray<struct UStaticMesh*>& InSMs, const struct TArray<struct FName>& InSortedMergableTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "CalculateCombinedSMTags");
    struct
    {
        struct TArray<struct UStaticMesh*> InSMs;
        struct TArray<struct FName> InSortedMergableTags;
        struct TArray<struct FName> ReturnValue;
    } Parms{};
    Parms.InSMs = (struct TArray<struct UStaticMesh*>)InSMs;
    Parms.InSortedMergableTags = (struct TArray<struct FName>)InSortedMergableTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::CalculateCombinedSMCTags(const struct TArray<struct UStaticMeshComponent*>& InSMCs, const struct TArray<struct FName>& InSortedMergableTags, struct UStaticMesh* OutSM)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchBlueprintGlue", "CalculateCombinedSMCTags");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InSMCs;
        struct TArray<struct FName> InSortedMergableTags;
        struct UStaticMesh* OutSM;
    } Parms{};
    Parms.InSMCs = (struct TArray<struct UStaticMeshComponent*>)InSMCs;
    Parms.InSortedMergableTags = (struct TArray<struct FName>)InSortedMergableTags;
    Parms.OutSM = (struct UStaticMesh*)OutSM;
    this->ProcessEvent(Func, &Parms);
}

struct AActor* UGeneBatchBlueprintGlue::BatchStaticMeshActors(struct TArray<struct UStaticMeshComponent*> InStaticMeshComponents, struct AActor* InOutParentActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "BatchStaticMeshActors");
    struct
    {
        struct TArray<struct UStaticMeshComponent*> InStaticMeshComponents;
        struct AActor* InOutParentActor;
        struct AActor* ReturnValue;
    } Parms{};
    Parms.InStaticMeshComponents = (struct TArray<struct UStaticMeshComponent*>)InStaticMeshComponents;
    Parms.InOutParentActor = (struct AActor*)InOutParentActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGeneBatchBlueprintGlue::AppendInputLevels(const struct TArray<struct ULevel*>& GridLevels)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchBlueprintGlue", "AppendInputLevels");
    struct
    {
        struct TArray<struct ULevel*> GridLevels;
    } Parms{};
    Parms.GridLevels = (struct TArray<struct ULevel*>)GridLevels;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
