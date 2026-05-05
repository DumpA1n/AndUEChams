#include "GameplayTags.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBlueprintGameplayTagLibrary
uint8_t UBlueprintGameplayTagLibrary::RemoveGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "RemoveGameplayTag");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FGameplayTag Tag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tag = (struct FGameplayTag)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TagContainer = Parms.TagContainer;
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::NotEqual_TagTag(struct FGameplayTag A, struct FString B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagTag");
    struct
    {
        struct FGameplayTag A;
        struct FString B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FGameplayTag)A;
    Parms.B = (struct FString)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::NotEqual_TagContainerTagContainer(struct FGameplayTagContainer A, struct FString B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_TagContainerTagContainer");
    struct
    {
        struct FGameplayTagContainer A;
        struct FString B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FGameplayTagContainer)A;
    Parms.B = (struct FString)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::NotEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTagContainer");
    struct
    {
        struct FGameplayTagContainer A;
        struct FGameplayTagContainer B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FGameplayTagContainer)A;
    Parms.B = (struct FGameplayTagContainer)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::NotEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "NotEqual_GameplayTag");
    struct
    {
        struct FGameplayTag A;
        struct FGameplayTag B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FGameplayTag)A;
    Parms.B = (struct FGameplayTag)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::MatchesTag(struct FGameplayTag TagOne, struct FGameplayTag TagTwo, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MatchesTag");
    struct
    {
        struct FGameplayTag TagOne;
        struct FGameplayTag TagTwo;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagOne = (struct FGameplayTag)TagOne;
    Parms.TagTwo = (struct FGameplayTag)TagTwo;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::MatchesAnyTags(struct FGameplayTag TagOne, const struct FGameplayTagContainer& OtherContainer, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MatchesAnyTags");
    struct
    {
        struct FGameplayTag TagOne;
        struct FGameplayTagContainer OtherContainer;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagOne = (struct FGameplayTag)TagOne;
    Parms.OtherContainer = (struct FGameplayTagContainer)OtherContainer;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeLiteralGameplayTagContainer(struct FGameplayTagContainer Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTagContainer");
    struct
    {
        struct FGameplayTagContainer Value;
        struct FGameplayTagContainer ReturnValue;
    } Parms{};
    Parms.Value = (struct FGameplayTagContainer)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTag UBlueprintGameplayTagLibrary::MakeLiteralGameplayTag(struct FGameplayTag Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MakeLiteralGameplayTag");
    struct
    {
        struct FGameplayTag Value;
        struct FGameplayTag ReturnValue;
    } Parms{};
    Parms.Value = (struct FGameplayTag)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagQuery UBlueprintGameplayTagLibrary::MakeGameplayTagQuery(struct FGameplayTagQuery TagQuery)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagQuery");
    struct
    {
        struct FGameplayTagQuery TagQuery;
        struct FGameplayTagQuery ReturnValue;
    } Parms{};
    Parms.TagQuery = (struct FGameplayTagQuery)TagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromTag(struct FGameplayTag SingleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromTag");
    struct
    {
        struct FGameplayTag SingleTag;
        struct FGameplayTagContainer ReturnValue;
    } Parms{};
    Parms.SingleTag = (struct FGameplayTag)SingleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FGameplayTagContainer UBlueprintGameplayTagLibrary::MakeGameplayTagContainerFromArray(const struct TArray<struct FGameplayTag>& GameplayTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "MakeGameplayTagContainerFromArray");
    struct
    {
        struct TArray<struct FGameplayTag> GameplayTags;
        struct FGameplayTagContainer ReturnValue;
    } Parms{};
    Parms.GameplayTags = (struct TArray<struct FGameplayTag>)GameplayTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::IsTagQueryEmpty(const struct FGameplayTagQuery& TagQuery)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "IsTagQueryEmpty");
    struct
    {
        struct FGameplayTagQuery TagQuery;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagQuery = (struct FGameplayTagQuery)TagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::IsGameplayTagValid(struct FGameplayTag GameplayTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "IsGameplayTagValid");
    struct
    {
        struct FGameplayTag GameplayTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.GameplayTag = (struct FGameplayTag)GameplayTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::HasTag(const struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "HasTag");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FGameplayTag Tag;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    Parms.Tag = (struct FGameplayTag)Tag;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::HasAnyTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "HasAnyTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FGameplayTagContainer OtherContainer;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    Parms.OtherContainer = (struct FGameplayTagContainer)OtherContainer;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::HasAllTags(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagContainer& OtherContainer, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "HasAllTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FGameplayTagContainer OtherContainer;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    Parms.OtherContainer = (struct FGameplayTagContainer)OtherContainer;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::HasAllMatchingGameplayTags(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, const struct FGameplayTagContainer& OtherContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "HasAllMatchingGameplayTags");
    struct
    {
        struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
        struct FGameplayTagContainer OtherContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainerInterface = (struct TScriptInterface<IGameplayTagAssetInterface>)TagContainerInterface;
    Parms.OtherContainer = (struct FGameplayTagContainer)OtherContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UBlueprintGameplayTagLibrary::GetTagName(const struct FGameplayTag& GameplayTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "GetTagName");
    struct
    {
        struct FGameplayTag GameplayTag;
        struct FName ReturnValue;
    } Parms{};
    Parms.GameplayTag = (struct FGameplayTag)GameplayTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBlueprintGameplayTagLibrary::GetNumGameplayTagsInContainer(const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "GetNumGameplayTagsInContainer");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        int32_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTagContainer(const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTagContainer");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FString ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBlueprintGameplayTagLibrary::GetDebugStringFromGameplayTag(struct FGameplayTag GameplayTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "GetDebugStringFromGameplayTag");
    struct
    {
        struct FGameplayTag GameplayTag;
        struct FString ReturnValue;
    } Parms{};
    Parms.GameplayTag = (struct FGameplayTag)GameplayTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBlueprintGameplayTagLibrary::GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, const struct FGameplayTagQuery& GameplayTagQuery, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "GetAllActorsOfClassMatchingTagQuery");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FGameplayTagQuery GameplayTagQuery;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.GameplayTagQuery = (struct FGameplayTagQuery)GameplayTagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

uint8_t UBlueprintGameplayTagLibrary::EqualEqual_GameplayTagContainer(const struct FGameplayTagContainer& A, const struct FGameplayTagContainer& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTagContainer");
    struct
    {
        struct FGameplayTagContainer A;
        struct FGameplayTagContainer B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FGameplayTagContainer)A;
    Parms.B = (struct FGameplayTagContainer)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::EqualEqual_GameplayTag(struct FGameplayTag A, struct FGameplayTag B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "EqualEqual_GameplayTag");
    struct
    {
        struct FGameplayTag A;
        struct FGameplayTag B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FGameplayTag)A;
    Parms.B = (struct FGameplayTag)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface, struct FGameplayTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "DoesTagAssetInterfaceHaveTag");
    struct
    {
        struct TScriptInterface<IGameplayTagAssetInterface> TagContainerInterface;
        struct FGameplayTag Tag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainerInterface = (struct TScriptInterface<IGameplayTagAssetInterface>)TagContainerInterface;
    Parms.Tag = (struct FGameplayTag)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintGameplayTagLibrary::DoesContainerMatchTagQuery(const struct FGameplayTagContainer& TagContainer, const struct FGameplayTagQuery& TagQuery)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "DoesContainerMatchTagQuery");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FGameplayTagQuery TagQuery;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    Parms.TagQuery = (struct FGameplayTagQuery)TagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBlueprintGameplayTagLibrary::BreakGameplayTagContainer(const struct FGameplayTagContainer& GameplayTagContainer, struct TArray<struct FGameplayTag>& GameplayTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "BreakGameplayTagContainer");
    struct
    {
        struct FGameplayTagContainer GameplayTagContainer;
        struct TArray<struct FGameplayTag> GameplayTags;
    } Parms{};
    Parms.GameplayTagContainer = (struct FGameplayTagContainer)GameplayTagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    GameplayTags = Parms.GameplayTags;
}

void UBlueprintGameplayTagLibrary::AppendGameplayTagContainers(struct FGameplayTagContainer& InOutTagContainer, const struct FGameplayTagContainer& InTagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "AppendGameplayTagContainers");
    struct
    {
        struct FGameplayTagContainer InOutTagContainer;
        struct FGameplayTagContainer InTagContainer;
    } Parms{};
    Parms.InTagContainer = (struct FGameplayTagContainer)InTagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutTagContainer = Parms.InOutTagContainer;
}

void UBlueprintGameplayTagLibrary::AddGameplayTag(struct FGameplayTagContainer& TagContainer, struct FGameplayTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintGameplayTagLibrary", "AddGameplayTag");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        struct FGameplayTag Tag;
    } Parms{};
    Parms.Tag = (struct FGameplayTag)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TagContainer = Parms.TagContainer;
}

// IGameplayTagAssetInterface
uint8_t IGameplayTagAssetInterface::HasMatchingGameplayTag(struct FGameplayTag TagToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagAssetInterface", "HasMatchingGameplayTag");
    struct
    {
        struct FGameplayTag TagToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagToCheck = (struct FGameplayTag)TagToCheck;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGameplayTagAssetInterface::HasAnyMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagAssetInterface", "HasAnyMatchingGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IGameplayTagAssetInterface::HasAllMatchingGameplayTags(const struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagAssetInterface", "HasAllMatchingGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FGameplayTagContainer)TagContainer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IGameplayTagAssetInterface::GetOwnedGameplayTags(struct FGameplayTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GameplayTagAssetInterface", "GetOwnedGameplayTags");
    struct
    {
        struct FGameplayTagContainer TagContainer;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TagContainer = Parms.TagContainer;
}

} // namespace SDK
