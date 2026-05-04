#include "DFMLocalizationFont.hpp"
#include "SlateCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMLocalizationFontManager::* ----
void UDFMLocalizationFontManager::OnServerFontResponse(const struct TArray<uint8_t>& RawPixels, int32_t size, int32_t SizeY, int32_t CharCode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "OnServerFontResponse");
    struct
    {
        struct TArray<uint8_t> RawPixels;
        int32_t size;
        int32_t SizeY;
        int32_t CharCode;
    } Parms{};
    Parms.RawPixels = (struct TArray<uint8_t>)RawPixels;
    Parms.size = (int32_t)size;
    Parms.SizeY = (int32_t)SizeY;
    Parms.CharCode = (int32_t)CharCode;
    this->ProcessEvent(Func, &Parms);
}

struct TArray<int32_t> UDFMLocalizationFontManager::GetCharList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "GetCharList");
    struct
    {
        struct TArray<int32_t> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UDFMLocalizationFontManager::GetCharactNum()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "GetCharactNum");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UDFMLocalizationFontManager* UDFMLocalizationFontManager::Get(struct UObject* GameInst)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DFMLocalizationFontManager", "Get");
    struct
    {
        struct UObject* GameInst;
        struct UDFMLocalizationFontManager* ReturnValue;
    } Parms{};
    Parms.GameInst = (struct UObject*)GameInst;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationFontManager::ClearList()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "ClearList");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMLocalizationFontManager::CheckCharNeedRender()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "CheckCharNeedRender");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UDFMLocalizationFontManager::CharacterIsExistInFont(const struct FName& InStyleName, struct FString CheckChar)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "CharacterIsExistInFont");
    struct
    {
        struct FName InStyleName;
        struct FString CheckChar;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InStyleName = (struct FName)InStyleName;
    Parms.CheckChar = (struct FString)CheckChar;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDFMLocalizationFontManager::AddMissChar(int32_t CharCode, const struct FSlateFontInfo& InFontInfo)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMLocalizationFontManager", "AddMissChar");
    struct
    {
        int32_t CharCode;
        struct FSlateFontInfo InFontInfo;
    } Parms{};
    Parms.CharCode = (int32_t)CharCode;
    Parms.InFontInfo = (struct FSlateFontInfo)InFontInfo;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
