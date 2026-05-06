#include "AICreateSDK.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UAICreateSDKBlueprint
void UAICreateSDKBlueprint::ShareVideo(struct FString Platform, const struct FShareVideoContent& VideoContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AICreateSDKBlueprint", "ShareVideo");
    struct
    {
        struct FString Platform;
        struct FShareVideoContent VideoContent;
    } Parms{};
    Parms.Platform = (struct FString)Platform;
    Parms.VideoContent = (struct FShareVideoContent)VideoContent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAICreateSDKBlueprint::SetupWithAppID(struct FString AppID, const struct TScriptInterface<IAICreateAppInterface>& AppService)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AICreateSDKBlueprint", "SetupWithAppID");
    struct
    {
        struct FString AppID;
        struct TScriptInterface<IAICreateAppInterface> AppService;
    } Parms{};
    Parms.AppID = (struct FString)AppID;
    Parms.AppService = (struct TScriptInterface<IAICreateAppInterface>)AppService;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAICreateSDKBlueprint::PublishVideo(const struct TArray<struct FSharePlatformAccount>& PlatformAccounts, const struct FShareVideoContent& VideoContent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AICreateSDKBlueprint", "PublishVideo");
    struct
    {
        struct TArray<struct FSharePlatformAccount> PlatformAccounts;
        struct FShareVideoContent VideoContent;
    } Parms{};
    Parms.PlatformAccounts = (struct TArray<struct FSharePlatformAccount>)PlatformAccounts;
    Parms.VideoContent = (struct FShareVideoContent)VideoContent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAICreateSDKBlueprint::AuthorizePlatform(EAuthorizeRequest Request, struct FString Platform, const struct TMap<struct FString, struct FString>& ExtraParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AICreateSDKBlueprint", "AuthorizePlatform");
    struct
    {
        enum EAuthorizeRequest Request;
        struct FString Platform;
        struct TMap<struct FString, struct FString> ExtraParams;
    } Parms{};
    Parms.Request = (enum EAuthorizeRequest)Request;
    Parms.Platform = (struct FString)Platform;
    Parms.ExtraParams = (struct TMap<struct FString, struct FString>)ExtraParams;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UAICreateSDKBlueprint::Alert(struct FString Title, struct FString Message)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AICreateSDKBlueprint", "Alert");
    struct
    {
        struct FString Title;
        struct FString Message;
    } Parms{};
    Parms.Title = (struct FString)Title;
    Parms.Message = (struct FString)Message;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
