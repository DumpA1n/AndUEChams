#include "GeneBatch.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGeneBatchLibrary
uint8_t UGeneBatchLibrary::RegexSearchCapture(struct FString inString, struct FString InRegexPattern, const struct TArray<int32_t>& InCaptureIndex, struct TArray<struct FString>& OutCaptureGroup, int32_t BeginIndex, int32_t EndIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchLibrary", "RegexSearchCapture");
    struct
    {
        struct FString inString;
        struct FString InRegexPattern;
        struct TArray<int32_t> InCaptureIndex;
        struct TArray<struct FString> OutCaptureGroup;
        int32_t BeginIndex;
        int32_t EndIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.inString = (struct FString)inString;
    Parms.InRegexPattern = (struct FString)InRegexPattern;
    Parms.InCaptureIndex = (struct TArray<int32_t>)InCaptureIndex;
    Parms.BeginIndex = (int32_t)BeginIndex;
    Parms.EndIndex = (int32_t)EndIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutCaptureGroup = Parms.OutCaptureGroup;
    return Parms.ReturnValue;
}

uint8_t UGeneBatchLibrary::RegexSearch(struct FString inString, struct FString InRegexPattern, int32_t BeginIndex, int32_t EndIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchLibrary", "RegexSearch");
    struct
    {
        struct FString inString;
        struct FString InRegexPattern;
        int32_t BeginIndex;
        int32_t EndIndex;
        uint8_t ReturnValue;
    } Parms{};
    Parms.inString = (struct FString)inString;
    Parms.InRegexPattern = (struct FString)InRegexPattern;
    Parms.BeginIndex = (int32_t)BeginIndex;
    Parms.EndIndex = (int32_t)EndIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AGeneBatchPOIVolume
void AGeneBatchPOIVolume::UpdatePOISettingsObject(struct UGeneBatchPOISettingsObject* NewPOISettingsObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchPOIVolume", "UpdatePOISettingsObject");
    struct
    {
        struct UGeneBatchPOISettingsObject* NewPOISettingsObject;
    } Parms{};
    Parms.NewPOISettingsObject = (struct UGeneBatchPOISettingsObject*)NewPOISettingsObject;
    this->ProcessEvent(Func, &Parms);
}

void AGeneBatchPOIVolume::UpdateLevelGeneBatchPOIVolumeActors(struct AActor* BlueprintActor, struct UGeneBatchPOISettingsObject* InPOISettingsObject, uint8_t bForceRecreate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GeneBatchPOIVolume", "UpdateLevelGeneBatchPOIVolumeActors");
    struct
    {
        struct AActor* BlueprintActor;
        struct UGeneBatchPOISettingsObject* InPOISettingsObject;
        uint8_t bForceRecreate;
    } Parms{};
    Parms.BlueprintActor = (struct AActor*)BlueprintActor;
    Parms.InPOISettingsObject = (struct UGeneBatchPOISettingsObject*)InPOISettingsObject;
    Parms.bForceRecreate = (uint8_t)bForceRecreate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UGeneBatchPOISettingsObject
struct TArray<struct UGeneBatchSettingsObject*> UGeneBatchPOISettingsObject::GetPOIGeneBatchSettings()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchPOISettingsObject", "GetPOIGeneBatchSettings");
    struct
    {
        struct TArray<struct UGeneBatchSettingsObject*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UGeneBatchSettingsFunctionalConfiguration
EGeneBatchBakeMethod UGeneBatchSettingsFunctionalConfiguration::MeshBakeMethod(const struct FGeneBatchTableRowResultHLODData& HLODData, int32_t TotalNumVertices, const struct TArray<int32_t>& MeshInstanceCounts)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchSettingsFunctionalConfiguration", "MeshBakeMethod");
    struct
    {
        struct FGeneBatchTableRowResultHLODData HLODData;
        int32_t TotalNumVertices;
        struct TArray<int32_t> MeshInstanceCounts;
        enum EGeneBatchBakeMethod ReturnValue;
    } Parms{};
    Parms.HLODData = (struct FGeneBatchTableRowResultHLODData)HLODData;
    Parms.TotalNumVertices = (int32_t)TotalNumVertices;
    Parms.MeshInstanceCounts = (struct TArray<int32_t>)MeshInstanceCounts;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGeneBatchSettingsFunctionalConfiguration::GetTotalResolution(const struct FGeneAtlasResultMap& AtlasMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchSettingsFunctionalConfiguration", "GetTotalResolution");
    struct
    {
        struct FGeneAtlasResultMap AtlasMap;
        int32_t ReturnValue;
    } Parms{};
    Parms.AtlasMap = (struct FGeneAtlasResultMap)AtlasMap;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGeneBatchSettingsFunctionalConfiguration::GetOccupiedResolution(const struct FGeneAtlasResultMap& AtlasMap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchSettingsFunctionalConfiguration", "GetOccupiedResolution");
    struct
    {
        struct FGeneAtlasResultMap AtlasMap;
        int32_t ReturnValue;
    } Parms{};
    Parms.AtlasMap = (struct FGeneAtlasResultMap)AtlasMap;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

EGeneBatchBakeMethod UGeneBatchSettingsFunctionalConfiguration::AtlasBakeMethod(const struct FGeneAtlasResultMap& AtlasMap, const struct FGeneAtlasResultAtlas& Atlas)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GeneBatchSettingsFunctionalConfiguration", "AtlasBakeMethod");
    struct
    {
        struct FGeneAtlasResultMap AtlasMap;
        struct FGeneAtlasResultAtlas Atlas;
        enum EGeneBatchBakeMethod ReturnValue;
    } Parms{};
    Parms.AtlasMap = (struct FGeneAtlasResultMap)AtlasMap;
    Parms.Atlas = (struct FGeneAtlasResultAtlas)Atlas;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
