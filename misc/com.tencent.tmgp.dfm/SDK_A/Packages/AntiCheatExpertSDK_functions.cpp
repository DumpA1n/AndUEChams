#include "AntiCheatExpertSDK.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAntiCheatExpertSDKManager::* ----
void UAntiCheatExpertSDKManager::OnGetConnectResult(uint8_t isSuccess, struct FString ID, int32_t Channel, uint8_t forceAddWaterMark)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AntiCheatExpertSDKManager", "OnGetConnectResult");
    struct
    {
        uint8_t isSuccess;
        struct FString ID;
        int32_t Channel;
        uint8_t forceAddWaterMark;
    } Parms{};
    Parms.isSuccess = (uint8_t)isSuccess;
    Parms.ID = (struct FString)ID;
    Parms.Channel = (int32_t)Channel;
    Parms.forceAddWaterMark = (uint8_t)forceAddWaterMark;
    this->ProcessEvent(Func, &Parms);
}

void UAntiCheatExpertSDKManager::OnDisconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("AntiCheatExpertSDKManager", "OnDisconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UAntiCheatExpertSDKManager* UAntiCheatExpertSDKManager::Get(struct UObject* Context)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AntiCheatExpertSDKManager", "Get");
    struct
    {
        struct UObject* Context;
        struct UAntiCheatExpertSDKManager* ReturnValue;
    } Parms{};
    Parms.Context = (struct UObject*)Context;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
