#include "DFMLocalization.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDFMLocalizationConfig
void UDFMLocalizationConfig::RefreshCustomCultureRedirects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationConfig", "RefreshCustomCultureRedirects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UDFMLocalizationManager
uint8_t UDFMLocalizationManager::UpdateDisplayString(struct FString& SourceString, struct FString& NewString, struct FString& Namespace, struct FString& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "UpdateDisplayString");
    struct
    {
        struct FString SourceString;
        struct FString NewString;
        struct FString Namespace;
        struct FString Key;
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    SourceString = Parms.SourceString;
    NewString = Parms.NewString;
    Namespace = Parms.Namespace;
    Key = Parms.Key;
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationManager::UpdateDbVersionByCulture(struct FString InCulture, struct FString InVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "UpdateDbVersionByCulture");
    struct
    {
        struct FString InCulture;
        struct FString InVersion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InCulture = (struct FString)InCulture;
    Parms.InVersion = (struct FString)InVersion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationManager::SetHotPatchVersion(int32_t InVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "SetHotPatchVersion");
    struct
    {
        int32_t InVersion;
    } Parms{};
    Parms.InVersion = (int32_t)InVersion;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMLocalizationManager::SetCurrentVoiceCulture(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "SetCurrentVoiceCulture");
    struct
    {
        struct FString Culture;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationManager::SetCurrentTextCulture(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "SetCurrentTextCulture");
    struct
    {
        struct FString Culture;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationManager::SetCurrentCulture(struct FString Culture, uint8_t IsInit)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "SetCurrentCulture");
    struct
    {
        struct FString Culture;
        uint8_t IsInit;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    Parms.IsInit = (uint8_t)IsInit;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationManager::LoadR13NLocalizationResource()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "LoadR13NLocalizationResource");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMLocalizationManager::IsLoadCultureRes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "IsLoadCultureRes");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationManager::IsChineseEnv()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "IsChineseEnv");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationManager::InitCurrentCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "InitCurrentCulture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationManager::HandleCultureChanged(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "HandleCultureChanged");
    struct
    {
        struct FString Culture;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
}

struct FString UDFMLocalizationManager::GetSuitableCulture(const struct TArray<struct FString>& AvalibleCultures, struct FString CultureToMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetSuitableCulture");
    struct
    {
        struct TArray<struct FString> AvalibleCultures;
        struct FString CultureToMatch;
        struct FString ReturnValue;
    } Parms{};
    Parms.AvalibleCultures = (struct TArray<struct FString>)AvalibleCultures;
    Parms.CultureToMatch = (struct FString)CultureToMatch;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMLocalizationManager::GetSecurityReportId()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetSecurityReportId");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetRegionName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetRegionName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetNativeCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetNativeCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UDFMLocalizationManager::GetLocalizedCultures()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetLocalizedCultures");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetDisplayString(struct FString& Namespace, struct FString& Key)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetDisplayString");
    struct
    {
        struct FString Namespace;
        struct FString Key;
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    Namespace = Parms.Namespace;
    Key = Parms.Key;
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetDBVersionByCulture(struct FString InCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetDBVersionByCulture");
    struct
    {
        struct FString InCulture;
        struct FString ReturnValue;
    } Parms{};
    Parms.InCulture = (struct FString)InCulture;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetCurrentVoiceCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetCurrentVoiceCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetCurrentCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetCurrentCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationManager::GetCurLanguageVoiceCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetCurLanguageVoiceCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMLocalizationManager::GetCurHotPatchVersion()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "GetCurHotPatchVersion");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMLocalizationManager* UDFMLocalizationManager::Get(struct UObject* GameInst)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMLocalizationManager", "Get");
    struct
    {
        struct UObject* GameInst;
        struct UDFMLocalizationManager* ReturnValue;
    } Parms{};
    Parms.GameInst = (struct UObject*)GameInst;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationManager::DumpTextLocalizationMemory()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "DumpTextLocalizationMemory");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationManager::ClearFixDFMLocData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "ClearFixDFMLocData");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationManager::ApplyServerHotPatch()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "ApplyServerHotPatch");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationManager::ApplyHotfix(struct FString Filename)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "ApplyHotfix");
    struct
    {
        struct FString Filename;
    } Parms{};
    Parms.Filename = (struct FString)Filename;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMLocalizationManager::AddServerHotPatchData(const struct TArray<struct FServerHotPatchData>& ServerHotPatchData, int32_t LastestVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "AddServerHotPatchData");
    struct
    {
        struct TArray<struct FServerHotPatchData> ServerHotPatchData;
        int32_t LastestVersion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ServerHotPatchData = (struct TArray<struct FServerHotPatchData>)ServerHotPatchData;
    Parms.LastestVersion = (int32_t)LastestVersion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationManager::AddPolyglotData(struct FString Namespace, struct FString Key, struct FString SourceString, const struct TMap<struct FString, struct FString>& LocalizedData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationManager", "AddPolyglotData");
    struct
    {
        struct FString Namespace;
        struct FString Key;
        struct FString SourceString;
        struct TMap<struct FString, struct FString> LocalizedData;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Namespace = (struct FString)Namespace;
    Parms.Key = (struct FString)Key;
    Parms.SourceString = (struct FString)SourceString;
    Parms.LocalizedData = (struct TMap<struct FString, struct FString>)LocalizedData;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMLocalizationSettings
uint8_t UDFMLocalizationSettings::UpdateDbVersionByCulture(struct FString InCulture, struct FString InVersion)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "UpdateDbVersionByCulture");
    struct
    {
        struct FString InCulture;
        struct FString InVersion;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InCulture = (struct FString)InCulture;
    Parms.InVersion = (struct FString)InVersion;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationSettings::UpdateConfig()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "UpdateConfig");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationSettings::SetCurrentVoiceCulture(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "SetCurrentVoiceCulture");
    struct
    {
        struct FString Culture;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationSettings::SetCurrentTextCulture(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "SetCurrentTextCulture");
    struct
    {
        struct FString Culture;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationSettings::SetCurrentCulture(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "SetCurrentCulture");
    struct
    {
        struct FString Culture;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMLocalizationSettings::IsCultureExist(struct FString Culture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "IsCultureExist");
    struct
    {
        struct FString Culture;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Culture = (struct FString)Culture;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationSettings::InitCultureList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "InitCultureList");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> UDFMLocalizationSettings::GetLocalizedCultures()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "GetLocalizedCultures");
    struct
    {
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationSettings::GetDBVersionByCulture(struct FString InCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "GetDBVersionByCulture");
    struct
    {
        struct FString InCulture;
        struct FString ReturnValue;
    } Parms{};
    Parms.InCulture = (struct FString)InCulture;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationSettings::GetCurrentVoiceCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "GetCurrentVoiceCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationSettings::GetCurrentTextCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "GetCurrentTextCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UDFMLocalizationSettings::GetCurrentCulture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "GetCurrentCulture");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFMLocalizationSettings::CheckPlatformUsable(const struct TArray<ECulturePlatformType>& InPlatformConfig)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationSettings", "CheckPlatformUsable");
    struct
    {
        struct TArray<ECulturePlatformType> InPlatformConfig;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InPlatformConfig = (struct TArray<ECulturePlatformType>)InPlatformConfig;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UBasePathConfig
struct FString UBasePathConfig::GetPufferLocPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetPufferLocPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBasePathConfig::GetPathBasedPuffer(struct FString InPath, uint8_t bIsContentDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetPathBasedPuffer");
    struct
    {
        struct FString InPath;
        uint8_t bIsContentDir;
        struct FString ReturnValue;
    } Parms{};
    Parms.InPath = (struct FString)InPath;
    Parms.bIsContentDir = (uint8_t)bIsContentDir;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBasePathConfig::GetDefaultServerHotPatchFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetDefaultServerHotPatchFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBasePathConfig::GetDefaultServerDataFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetDefaultServerDataFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBasePathConfig::GetDefaultIncrementalHotfixPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetDefaultIncrementalHotfixPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBasePathConfig::GetDefaultHotfixFilePath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetDefaultHotfixFilePath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBasePathConfig::GetBaseRootPath()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BasePathConfig", "GetBaseRootPath");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UDFMTextFormatData
void UDFMTextFormatData::SetFormatText(const struct FText& InText)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTextFormatData", "SetFormatText");
    struct
    {
        struct FText InText;
    } Parms{};
    Parms.InText = (struct FText)InText;
    this->ProcessEvent(Func, &Parms);
}

struct FText UDFMTextFormatData::DoFormatText()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTextFormatData", "DoFormatText");
    struct
    {
        struct FText ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMTextFormatData* UDFMTextFormatData::CreateNewFormatData()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMTextFormatData", "CreateNewFormatData");
    struct
    {
        struct UDFMTextFormatData* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMTextFormatData::AddArg_Text(struct FString InName, const struct FText& InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTextFormatData", "AddArg_Text");
    struct
    {
        struct FString InName;
        struct FText InData;
    } Parms{};
    Parms.InName = (struct FString)InName;
    Parms.InData = (struct FText)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMTextFormatData::AddArg_Int(struct FString InName, int32_t InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTextFormatData", "AddArg_Int");
    struct
    {
        struct FString InName;
        int32_t InData;
    } Parms{};
    Parms.InName = (struct FString)InName;
    Parms.InData = (int32_t)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMTextFormatData::AddArg_Float(struct FString InName, float InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTextFormatData", "AddArg_Float");
    struct
    {
        struct FString InName;
        float InData;
    } Parms{};
    Parms.InName = (struct FString)InName;
    Parms.InData = (float)InData;
    this->ProcessEvent(Func, &Parms);
}

void UDFMTextFormatData::AddArg_Double(struct FString InName, double InData)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMTextFormatData", "AddArg_Double");
    struct
    {
        struct FString InName;
        double InData;
    } Parms{};
    Parms.InName = (struct FString)InName;
    Parms.InData = (double)InData;
    this->ProcessEvent(Func, &Parms);
}

// UDFStringTableManager
void UDFStringTableManager::UnloadStringTable(struct FName InTableId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "UnloadStringTable");
    struct
    {
        struct FName InTableId;
    } Parms{};
    Parms.InTableId = (struct FName)InTableId;
    this->ProcessEvent(Func, &Parms);
}

void UDFStringTableManager::UnloadAllStringTableStructs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "UnloadAllStringTableStructs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStringTableManager::UnloadAllStringTables()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "UnloadAllStringTables");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFStringTableManager::OnStringTableLoaded()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "OnStringTableLoaded");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UDFStringTableManager* UDFStringTableManager::Get(struct UGameInstance* InGameInstance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFStringTableManager", "Get");
    struct
    {
        struct UGameInstance* InGameInstance;
        struct UDFStringTableManager* ReturnValue;
    } Parms{};
    Parms.InGameInstance = (struct UGameInstance*)InGameInstance;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFStringTableManager::EnableStringTableSqlite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "EnableStringTableSqlite");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFStringTableManager::EnableSqlite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "EnableSqlite");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFStringTableManager::EnableReleaseStringTable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "EnableReleaseStringTable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFStringTableManager::EnableLocalizationSqlite()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "EnableLocalizationSqlite");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UDFStringTableManager::EnableLoadStringTableFromBin()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFStringTableManager", "EnableLoadStringTableFromBin");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UKismetLocalizationLibrary
void UKismetLocalizationLibrary::Loc_SetBeforeLoginStage(uint8_t IsBeforeLoginStage)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_SetBeforeLoginStage");
    struct
    {
        uint8_t IsBeforeLoginStage;
    } Parms{};
    Parms.IsBeforeLoginStage = (uint8_t)IsBeforeLoginStage;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UKismetLocalizationLibrary::Loc_OnDownloadCurrentCultureDB()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_OnDownloadCurrentCultureDB");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString UKismetLocalizationLibrary::Loc_NormalizeNumber2Str_Int64(int64_t InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_NormalizeNumber2Str_Int64");
    struct
    {
        int64_t InNum;
        struct FString InTargetCulture;
        int32_t MaximumFractionalDigits;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNum = (int64_t)InNum;
    Parms.InTargetCulture = (struct FString)InTargetCulture;
    Parms.MaximumFractionalDigits = (int32_t)MaximumFractionalDigits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_NormalizeNumber2Str_Int(int32_t InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_NormalizeNumber2Str_Int");
    struct
    {
        int32_t InNum;
        struct FString InTargetCulture;
        int32_t MaximumFractionalDigits;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNum = (int32_t)InNum;
    Parms.InTargetCulture = (struct FString)InTargetCulture;
    Parms.MaximumFractionalDigits = (int32_t)MaximumFractionalDigits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_NormalizeNumber2Str_Float(float InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_NormalizeNumber2Str_Float");
    struct
    {
        float InNum;
        struct FString InTargetCulture;
        int32_t MaximumFractionalDigits;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNum = (float)InNum;
    Parms.InTargetCulture = (struct FString)InTargetCulture;
    Parms.MaximumFractionalDigits = (int32_t)MaximumFractionalDigits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_NormalizeNumber2Str_Double(double InNum, struct FString InTargetCulture, int32_t MaximumFractionalDigits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_NormalizeNumber2Str_Double");
    struct
    {
        double InNum;
        struct FString InTargetCulture;
        int32_t MaximumFractionalDigits;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNum = (double)InNum;
    Parms.InTargetCulture = (struct FString)InTargetCulture;
    Parms.MaximumFractionalDigits = (int32_t)MaximumFractionalDigits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_NormalizeNumber2Percentage(float InNum)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_NormalizeNumber2Percentage");
    struct
    {
        float InNum;
        struct FString ReturnValue;
    } Parms{};
    Parms.InNum = (float)InNum;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_GetTimeStrWithFormatName(const struct FDateTime& InDateTime, struct FString InRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetTimeStrWithFormatName");
    struct
    {
        struct FDateTime InDateTime;
        struct FString InRowName;
        struct FString ReturnValue;
    } Parms{};
    Parms.InDateTime = (struct FDateTime)InDateTime;
    Parms.InRowName = (struct FString)InRowName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_GetTimeFormatStr(struct FString InRowName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetTimeFormatStr");
    struct
    {
        struct FString InRowName;
        struct FString ReturnValue;
    } Parms{};
    Parms.InRowName = (struct FString)InRowName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UKismetLocalizationLibrary::Loc_GetTextFromLoc(struct FString InTableName, struct FString InKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetTextFromLoc");
    struct
    {
        struct FString InTableName;
        struct FString InKey;
        struct FText ReturnValue;
    } Parms{};
    Parms.InTableName = (struct FString)InTableName;
    Parms.InKey = (struct FString)InKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UKismetLocalizationLibrary::Loc_GetTextFromBuffer(struct FString InBuffer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetTextFromBuffer");
    struct
    {
        struct FString InBuffer;
        struct FText ReturnValue;
    } Parms{};
    Parms.InBuffer = (struct FString)InBuffer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UKismetLocalizationLibrary::Loc_GetTableIdByName(struct FString InTableName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetTableIdByName");
    struct
    {
        struct FString InTableName;
        struct FName ReturnValue;
    } Parms{};
    Parms.InTableName = (struct FString)InTableName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_GetStrMD5Hash(struct FString InStr)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetStrMD5Hash");
    struct
    {
        struct FString InStr;
        struct FString ReturnValue;
    } Parms{};
    Parms.InStr = (struct FString)InStr;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_GetNormalizedTimeWithFormat(const struct FDateTime& InDateTime, struct FString InFormat)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetNormalizedTimeWithFormat");
    struct
    {
        struct FDateTime InDateTime;
        struct FString InFormat;
        struct FString ReturnValue;
    } Parms{};
    Parms.InDateTime = (struct FDateTime)InDateTime;
    Parms.InFormat = (struct FString)InFormat;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_GetNormalizedTimeWithCulture(const struct FDateTime& InDateTime, struct FString InTargetCulture, const ETimeType& InDateTimeStyle)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetNormalizedTimeWithCulture");
    struct
    {
        struct FDateTime InDateTime;
        struct FString InTargetCulture;
        enum ETimeType InDateTimeStyle;
        struct FString ReturnValue;
    } Parms{};
    Parms.InDateTime = (struct FDateTime)InDateTime;
    Parms.InTargetCulture = (struct FString)InTargetCulture;
    Parms.InDateTimeStyle = (enum ETimeType)InDateTimeStyle;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UKismetLocalizationLibrary::Loc_GetNormalizedTime(const struct FDateTime& InDateTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetNormalizedTime");
    struct
    {
        struct FDateTime InDateTime;
        struct FString ReturnValue;
    } Parms{};
    Parms.InDateTime = (struct FDateTime)InDateTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UKismetLocalizationLibrary::Loc_GetCommonText(ECommonTextType TextType, struct FString InTextKey)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_GetCommonText");
    struct
    {
        enum ECommonTextType TextType;
        struct FString InTextKey;
        struct FText ReturnValue;
    } Parms{};
    Parms.TextType = (enum ECommonTextType)TextType;
    Parms.InTextKey = (struct FString)InTextKey;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UKismetLocalizationLibrary::Loc_DecompressCultureDB(struct FString InCultureName, uint8_t bIsForceDecompress)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_DecompressCultureDB");
    struct
    {
        struct FString InCultureName;
        uint8_t bIsForceDecompress;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InCultureName = (struct FString)InCultureName;
    Parms.bIsForceDecompress = (uint8_t)bIsForceDecompress;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UKismetLocalizationLibrary::Loc_BuildFTextWithNamespaceAndKey(struct FString InNamespace, struct FString InKey, struct FString InSourceString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("KismetLocalizationLibrary", "Loc_BuildFTextWithNamespaceAndKey");
    struct
    {
        struct FString InNamespace;
        struct FString InKey;
        struct FString InSourceString;
        struct FText ReturnValue;
    } Parms{};
    Parms.InNamespace = (struct FString)InNamespace;
    Parms.InKey = (struct FString)InKey;
    Parms.InSourceString = (struct FString)InSourceString;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ULocalizeNumberConfigManager
void ULocalizeNumberConfigManager::UpdateSeparatorStr(struct FString InCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LocalizeNumberConfigManager", "UpdateSeparatorStr");
    struct
    {
        struct FString InCulture;
    } Parms{};
    Parms.InCulture = (struct FString)InCulture;
    this->ProcessEvent(Func, &Parms);
}

struct FString ULocalizeNumberConfigManager::GetNumberSeparatorStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LocalizeNumberConfigManager", "GetNumberSeparatorStr");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULocalizeNumberConfigManager::GetDecimalSeparatorStr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("LocalizeNumberConfigManager", "GetDecimalSeparatorStr");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
