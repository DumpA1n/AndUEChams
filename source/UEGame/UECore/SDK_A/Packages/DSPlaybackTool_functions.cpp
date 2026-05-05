#include "DSPlaybackTool.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UDSPlaybackManager
struct UDSPlaybackManager* UDSPlaybackManager::Get(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("DSPlaybackManager", "Get");
    struct
    {
        struct UObject* WorldContextObject;
        struct UDSPlaybackManager* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UDSPlaybackManager::AddPoints(EPlaybackDataType Type, const struct TArray<struct FVector>& Loc, float size, struct FColor Color, float During)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DSPlaybackManager", "AddPoints");
    struct
    {
        enum EPlaybackDataType Type;
        struct TArray<struct FVector> Loc;
        float size;
        struct FColor Color;
        float During;
    } Parms{};
    Parms.Type = (enum EPlaybackDataType)Type;
    Parms.Loc = (struct TArray<struct FVector>)Loc;
    Parms.size = (float)size;
    Parms.Color = (struct FColor)Color;
    Parms.During = (float)During;
    this->ProcessEvent(Func, &Parms);
}

void UDSPlaybackManager::AddPath(EPlaybackDataType Type, const struct TArray<struct FVector>& pathPoint, float Width, struct FColor Color, float During)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DSPlaybackManager", "AddPath");
    struct
    {
        enum EPlaybackDataType Type;
        struct TArray<struct FVector> pathPoint;
        float Width;
        struct FColor Color;
        float During;
    } Parms{};
    Parms.Type = (enum EPlaybackDataType)Type;
    Parms.pathPoint = (struct TArray<struct FVector>)pathPoint;
    Parms.Width = (float)Width;
    Parms.Color = (struct FColor)Color;
    Parms.During = (float)During;
    this->ProcessEvent(Func, &Parms);
}

void UDSPlaybackManager::AddLine(EPlaybackDataType Type, struct FVector StartLoc, struct FVector EndLoc, float Width, struct FColor Color, float During)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DSPlaybackManager", "AddLine");
    struct
    {
        enum EPlaybackDataType Type;
        struct FVector StartLoc;
        struct FVector EndLoc;
        float Width;
        struct FColor Color;
        float During;
    } Parms{};
    Parms.Type = (enum EPlaybackDataType)Type;
    Parms.StartLoc = (struct FVector)StartLoc;
    Parms.EndLoc = (struct FVector)EndLoc;
    Parms.Width = (float)Width;
    Parms.Color = (struct FColor)Color;
    Parms.During = (float)During;
    this->ProcessEvent(Func, &Parms);
}

void UDSPlaybackManager::AddClickPoint(EPlaybackDataType Type, struct FVector Loc, float size, struct FColor Color, struct FString DebugInfo, float During)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DSPlaybackManager", "AddClickPoint");
    struct
    {
        enum EPlaybackDataType Type;
        struct FVector Loc;
        float size;
        struct FColor Color;
        struct FString DebugInfo;
        float During;
    } Parms{};
    Parms.Type = (enum EPlaybackDataType)Type;
    Parms.Loc = (struct FVector)Loc;
    Parms.size = (float)size;
    Parms.Color = (struct FColor)Color;
    Parms.DebugInfo = (struct FString)DebugInfo;
    Parms.During = (float)During;
    this->ProcessEvent(Func, &Parms);
}

void UDSPlaybackManager::AddBoxLine(EPlaybackDataType Type, struct FTransform Transform, float Width, struct FColor Color, float During)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DSPlaybackManager", "AddBoxLine");
    struct
    {
        enum EPlaybackDataType Type;
        struct FTransform Transform;
        float Width;
        struct FColor Color;
        float During;
    } Parms{};
    Parms.Type = (enum EPlaybackDataType)Type;
    Parms.Transform = (struct FTransform)Transform;
    Parms.Width = (float)Width;
    Parms.Color = (struct FColor)Color;
    Parms.During = (float)During;
    this->ProcessEvent(Func, &Parms);
}

void UDSPlaybackManager::AddBoxFill(EPlaybackDataType Type, struct FTransform Transform, struct FColor Color, float During)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DSPlaybackManager", "AddBoxFill");
    struct
    {
        enum EPlaybackDataType Type;
        struct FTransform Transform;
        struct FColor Color;
        float During;
    } Parms{};
    Parms.Type = (enum EPlaybackDataType)Type;
    Parms.Transform = (struct FTransform)Transform;
    Parms.Color = (struct FColor)Color;
    Parms.During = (float)During;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
