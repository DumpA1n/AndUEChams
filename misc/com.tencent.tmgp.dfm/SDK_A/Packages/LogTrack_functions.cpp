#include "LogTrack.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ULogTrackBlueprint::* ----
void ULogTrackBlueprint::SetOutputDir(struct FString Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "SetOutputDir");
    struct
    {
        struct FString Value;
    } Parms{};
    Parms.Value = (struct FString)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogTrackBlueprint::SetEnable(uint8_t bValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "SetEnable");
    struct
    {
        uint8_t bValue;
    } Parms{};
    Parms.bValue = (uint8_t)bValue;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

struct FString ULogTrackBlueprint::GetStatsString()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "GetStatsString");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString ULogTrackBlueprint::GetOutputDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "GetOutputDir");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t ULogTrackBlueprint::GetEnable()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "GetEnable");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t ULogTrackBlueprint::GetBufferSize()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "GetBufferSize");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ULogTrackBlueprint::EnterFrame(int32_t FrameIndex, int32_t RndSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "EnterFrame");
    struct
    {
        int32_t FrameIndex;
        int32_t RndSeed;
    } Parms{};
    Parms.FrameIndex = (int32_t)FrameIndex;
    Parms.RndSeed = (int32_t)RndSeed;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogTrackBlueprint::EndTrack()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "EndTrack");
    struct
    {
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void ULogTrackBlueprint::BeginTrack(int32_t BufferSize)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("LogTrackBlueprint", "BeginTrack");
    struct
    {
        int32_t BufferSize;
    } Parms{};
    Parms.BufferSize = (int32_t)BufferSize;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
