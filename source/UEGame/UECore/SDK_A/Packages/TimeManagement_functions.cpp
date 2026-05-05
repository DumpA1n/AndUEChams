#include "TimeManagement.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UTimeManagementBlueprintLibrary
struct FFrameTime UTimeManagementBlueprintLibrary::TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "TransformTime");
    struct
    {
        struct FFrameTime SourceTime;
        struct FFrameRate SourceRate;
        struct FFrameRate DestinationRate;
        struct FFrameTime ReturnValue;
    } Parms{};
    Parms.SourceTime = (struct FFrameTime)SourceTime;
    Parms.SourceRate = (struct FFrameRate)SourceRate;
    Parms.DestinationRate = (struct FFrameRate)DestinationRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberInteger(struct FFrameNumber A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Subtract_FrameNumberInteger");
    struct
    {
        struct FFrameNumber A;
        int32_t B;
        struct FFrameNumber ReturnValue;
    } Parms{};
    Parms.A = (struct FFrameNumber)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Subtract_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Subtract_FrameNumberFrameNumber");
    struct
    {
        struct FFrameNumber A;
        struct FFrameNumber B;
        struct FFrameNumber ReturnValue;
    } Parms{};
    Parms.A = (struct FFrameNumber)A;
    Parms.B = (struct FFrameNumber)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameTime UTimeManagementBlueprintLibrary::SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "SnapFrameTimeToRate");
    struct
    {
        struct FFrameTime SourceTime;
        struct FFrameRate SourceRate;
        struct FFrameRate SnapToRate;
        struct FFrameTime ReturnValue;
    } Parms{};
    Parms.SourceTime = (struct FFrameTime)SourceTime;
    Parms.SourceRate = (struct FFrameRate)SourceRate;
    Parms.SnapToRate = (struct FFrameRate)SnapToRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameTime UTimeManagementBlueprintLibrary::Multiply_SecondsFrameRate(float TimeInSeconds, const struct FFrameRate& FrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Multiply_SecondsFrameRate");
    struct
    {
        float TimeInSeconds;
        struct FFrameRate FrameRate;
        struct FFrameTime ReturnValue;
    } Parms{};
    Parms.TimeInSeconds = (float)TimeInSeconds;
    Parms.FrameRate = (struct FFrameRate)FrameRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Multiply_FrameNumberInteger(struct FFrameNumber A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Multiply_FrameNumberInteger");
    struct
    {
        struct FFrameNumber A;
        int32_t B;
        struct FFrameNumber ReturnValue;
    } Parms{};
    Parms.A = (struct FFrameNumber)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UTimeManagementBlueprintLibrary::IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "IsValid_MultipleOf");
    struct
    {
        struct FFrameRate InFrameRate;
        struct FFrameRate OtherFramerate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFrameRate = (struct FFrameRate)InFrameRate;
    Parms.OtherFramerate = (struct FFrameRate)OtherFramerate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UTimeManagementBlueprintLibrary::IsValid_Framerate(const struct FFrameRate& InFrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "IsValid_Framerate");
    struct
    {
        struct FFrameRate InFrameRate;
        uint8_t ReturnValue;
    } Parms{};
    Parms.InFrameRate = (struct FFrameRate)InFrameRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameRate UTimeManagementBlueprintLibrary::GetTimecodeFrameRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "GetTimecodeFrameRate");
    struct
    {
        struct FFrameRate ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FTimecode UTimeManagementBlueprintLibrary::GetTimecode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "GetTimecode");
    struct
    {
        struct FTimecode ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Divide_FrameNumberInteger(struct FFrameNumber A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Divide_FrameNumberInteger");
    struct
    {
        struct FFrameNumber A;
        int32_t B;
        struct FFrameNumber ReturnValue;
    } Parms{};
    Parms.A = (struct FFrameNumber)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UTimeManagementBlueprintLibrary::Conv_TimecodeToString(const struct FTimecode& InTimecode, uint8_t bForceSignDisplay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Conv_TimecodeToString");
    struct
    {
        struct FTimecode InTimecode;
        uint8_t bForceSignDisplay;
        struct FString ReturnValue;
    } Parms{};
    Parms.InTimecode = (struct FTimecode)InTimecode;
    Parms.bForceSignDisplay = (uint8_t)bForceSignDisplay;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTimeManagementBlueprintLibrary::Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Conv_QualifiedFrameTimeToSeconds");
    struct
    {
        struct FQualifiedFrameTime InFrameTime;
        float ReturnValue;
    } Parms{};
    Parms.InFrameTime = (struct FQualifiedFrameTime)InFrameTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UTimeManagementBlueprintLibrary::Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameRateToSeconds");
    struct
    {
        struct FFrameRate InFrameRate;
        float ReturnValue;
    } Parms{};
    Parms.InFrameRate = (struct FFrameRate)InFrameRate;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UTimeManagementBlueprintLibrary::Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Conv_FrameNumberToInteger");
    struct
    {
        struct FFrameNumber InFrameNumber;
        int32_t ReturnValue;
    } Parms{};
    Parms.InFrameNumber = (struct FFrameNumber)InFrameNumber;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberInteger(struct FFrameNumber A, int32_t B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Add_FrameNumberInteger");
    struct
    {
        struct FFrameNumber A;
        int32_t B;
        struct FFrameNumber ReturnValue;
    } Parms{};
    Parms.A = (struct FFrameNumber)A;
    Parms.B = (int32_t)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FFrameNumber UTimeManagementBlueprintLibrary::Add_FrameNumberFrameNumber(struct FFrameNumber A, struct FFrameNumber B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("TimeManagementBlueprintLibrary", "Add_FrameNumberFrameNumber");
    struct
    {
        struct FFrameNumber A;
        struct FFrameNumber B;
        struct FFrameNumber ReturnValue;
    } Parms{};
    Parms.A = (struct FFrameNumber)A;
    Parms.B = (struct FFrameNumber)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
