#include "MFWeakNetwork.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFWeakNetworkNetConnection
void UMFWeakNetworkNetConnection::UseNewSocketReconnect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWeakNetworkNetConnection", "UseNewSocketReconnect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWeakNetworkNetConnection::TimerForCloseConnection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWeakNetworkNetConnection", "TimerForCloseConnection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFWeakNetworkNetConnection::PostLoadMap(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFWeakNetworkNetConnection", "PostLoadMap");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    this->ProcessEvent(Func, &Parms);
}

// UMFWeakNetworkStatics
void UMFWeakNetworkStatics::UseNewSocketReconnect(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "UseNewSocketReconnect");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWeakNetworkStatics::SetNotSendCloseBunchEnable(struct UObject* WorldContextObject, bool Enable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "SetNotSendCloseBunchEnable");
    struct
    {
        struct UObject* WorldContextObject;
        bool Enable;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Enable = (bool)Enable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWeakNetworkStatics::SetAsyncLoad(struct UObject* WorldContextObject, bool bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "SetAsyncLoad");
    struct
    {
        struct UObject* WorldContextObject;
        bool bEnable;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.bEnable = (bool)bEnable;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

bool UMFWeakNetworkStatics::IsPlayerReconnecting(struct APlayerController* PC)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "IsPlayerReconnecting");
    struct
    {
        struct APlayerController* PC;
        bool ReturnValue;
    } Parms{};
    Parms.PC = (struct APlayerController*)PC;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFWeakNetworkStatics::HaveTickingChannel(struct UWorld* World, int32_t Priority)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "HaveTickingChannel");
    struct
    {
        struct UWorld* World;
        int32_t Priority;
        bool ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    Parms.Priority = (int32_t)Priority;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFWeakNetworkStatics::GetSingleReconnectTime(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "GetSingleReconnectTime");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFWeakNetworkStatics::GetSingleMaxReconnectCount(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "GetSingleMaxReconnectCount");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFWeakNetworkStatics::GetNetActorStatisDataTwo(struct UWorld* World, float& SpawnAverageTime, int32_t& DirectSpawnNum, float& AsyncAverageTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "GetNetActorStatisDataTwo");
    struct
    {
        struct UWorld* World;
        float SpawnAverageTime;
        int32_t DirectSpawnNum;
        float AsyncAverageTime;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnAverageTime = Parms.SpawnAverageTime;
    DirectSpawnNum = Parms.DirectSpawnNum;
    AsyncAverageTime = Parms.AsyncAverageTime;
}

void UMFWeakNetworkStatics::GetNetActorStatisData(struct UWorld* World, int32_t& SpawnNum, int32_t& MaxDelayTime, int32_t& MaxAsyncTime, int32_t& MaxNetActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "GetNetActorStatisData");
    struct
    {
        struct UWorld* World;
        int32_t SpawnNum;
        int32_t MaxDelayTime;
        int32_t MaxAsyncTime;
        int32_t MaxNetActor;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SpawnNum = Parms.SpawnNum;
    MaxDelayTime = Parms.MaxDelayTime;
    MaxAsyncTime = Parms.MaxAsyncTime;
    MaxNetActor = Parms.MaxNetActor;
}

int32_t UMFWeakNetworkStatics::GetMaxReconnectCount(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "GetMaxReconnectCount");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFWeakNetworkStatics::GetLoadingReportData(struct UWorld* World, int32_t& TickingChannelNum, int32_t& LoadSeconds, int32_t& LoadedTickNum, float& SpawnAverageTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "GetLoadingReportData");
    struct
    {
        struct UWorld* World;
        int32_t TickingChannelNum;
        int32_t LoadSeconds;
        int32_t LoadedTickNum;
        float SpawnAverageTime;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TickingChannelNum = Parms.TickingChannelNum;
    LoadSeconds = Parms.LoadSeconds;
    LoadedTickNum = Parms.LoadedTickNum;
    SpawnAverageTime = Parms.SpawnAverageTime;
}

void UMFWeakNetworkStatics::CloseConnection(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "CloseConnection");
    struct
    {
        struct UWorld* World;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFWeakNetworkStatics::BeginPackageMapTimeStatis(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFWeakNetworkStatics", "BeginPackageMapTimeStatis");
    struct
    {
        struct UObject* WorldContextObject;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
