#include "DFXunYou.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UIXunYou
int32_t UIXunYou::XunyouInstall(int32_t ID, struct FString Path)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "XunyouInstall");
    struct
    {
        int32_t ID;
        struct FString Path;
        int32_t ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    Parms.Path = (struct FString)Path;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UIXunYou::StartXunYou(int32_t ID, int32_t GameId, int32_t areId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "StartXunYou");
    struct
    {
        int32_t ID;
        int32_t GameId;
        int32_t areId;
        int32_t ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    Parms.GameId = (int32_t)GameId;
    Parms.areId = (int32_t)areId;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIXunYou::SetUserToken(struct FString UserId, struct FString Token, struct FString APPID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "SetUserToken");
    struct
    {
        struct FString UserId;
        struct FString Token;
        struct FString APPID;
    } Parms{};
    Parms.UserId = (struct FString)UserId;
    Parms.Token = (struct FString)Token;
    Parms.APPID = (struct FString)APPID;
    this->ProcessEvent(Func, &Parms);
}

void UIXunYou::SetUdpEchoAddress(struct FString Ip, int32_t Port)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "SetUdpEchoAddress");
    struct
    {
        struct FString Ip;
        int32_t Port;
    } Parms{};
    Parms.Ip = (struct FString)Ip;
    Parms.Port = (int32_t)Port;
    this->ProcessEvent(Func, &Parms);
}

uint8_t UIXunYou::IsXunyouInstalled(int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "IsXunyouInstalled");
    struct
    {
        int32_t ID;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UIXunYou::IsUDPProxy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "IsUDPProxy");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UIXunYou::IsAccelOpened()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "IsAccelOpened");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UIXunYou::Initialize(int32_t HookType, struct FString Guid, struct FString NetLibName, int32_t EchoPort)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "Initialize");
    struct
    {
        int32_t HookType;
        struct FString Guid;
        struct FString NetLibName;
        int32_t EchoPort;
        int32_t ReturnValue;
    } Parms{};
    Parms.HookType = (int32_t)HookType;
    Parms.Guid = (struct FString)Guid;
    Parms.NetLibName = (struct FString)NetLibName;
    Parms.EchoPort = (int32_t)EchoPort;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UIXunYou* UIXunYou::GetXunYou()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("IXunYou", "GetXunYou");
    struct
    {
        struct UIXunYou* ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UIXunYou::GetWebUIUrl(int32_t Type)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "GetWebUIUrl");
    struct
    {
        int32_t Type;
        struct FString ReturnValue;
    } Parms{};
    Parms.Type = (int32_t)Type;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UIXunYou::GetVipValidTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "GetVipValidTime");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UIXunYou::GetAccelState(int32_t ID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "GetAccelState");
    struct
    {
        int32_t ID;
        int32_t ReturnValue;
    } Parms{};
    Parms.ID = (int32_t)ID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UIXunYou::GetAccelerationStatus()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "GetAccelerationStatus");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UIXunYou::GameForeground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "GameForeground");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIXunYou::GameBackground()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "GameBackground");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIXunYou::ClearAccelerationAddresses()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "ClearAccelerationAddresses");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UIXunYou::BeginRound(struct FString OpenId, struct FString PvpId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "BeginRound");
    struct
    {
        struct FString OpenId;
        struct FString PvpId;
    } Parms{};
    Parms.OpenId = (struct FString)OpenId;
    Parms.PvpId = (struct FString)PvpId;
    this->ProcessEvent(Func, &Parms);
}

void UIXunYou::AddAccelAddress(struct FString Ip, int32_t Port, struct FString Protocol)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("IXunYou", "AddAccelAddress");
    struct
    {
        struct FString Ip;
        int32_t Port;
        struct FString Protocol;
    } Parms{};
    Parms.Ip = (struct FString)Ip;
    Parms.Port = (int32_t)Port;
    Parms.Protocol = (struct FString)Protocol;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
