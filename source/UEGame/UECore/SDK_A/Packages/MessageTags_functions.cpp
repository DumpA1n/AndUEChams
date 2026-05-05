#include "MessageTags.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBlueprintMessageTagLibrary
uint8_t UBlueprintMessageTagLibrary::RemoveMessageTag(struct FMessageTagContainer& TagContainer, struct FMessageTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "RemoveMessageTag");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FMessageTag Tag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Tag = (struct FMessageTag)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TagContainer = Parms.TagContainer;
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::NotEqual_TagTag(struct FMessageTag A, struct FString B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "NotEqual_TagTag");
    struct
    {
        struct FMessageTag A;
        struct FString B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FMessageTag)A;
    Parms.B = (struct FString)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::NotEqual_TagContainerTagContainer(struct FMessageTagContainer A, struct FString B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "NotEqual_TagContainerTagContainer");
    struct
    {
        struct FMessageTagContainer A;
        struct FString B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FMessageTagContainer)A;
    Parms.B = (struct FString)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::NotEqual_MessageTagContainer(const struct FMessageTagContainer& A, const struct FMessageTagContainer& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "NotEqual_MessageTagContainer");
    struct
    {
        struct FMessageTagContainer A;
        struct FMessageTagContainer B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FMessageTagContainer)A;
    Parms.B = (struct FMessageTagContainer)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::NotEqual_MessageTag(struct FMessageTag A, struct FMessageTag B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "NotEqual_MessageTag");
    struct
    {
        struct FMessageTag A;
        struct FMessageTag B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FMessageTag)A;
    Parms.B = (struct FMessageTag)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::MatchesTag(struct FMessageTag TagOne, struct FMessageTag TagTwo, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MatchesTag");
    struct
    {
        struct FMessageTag TagOne;
        struct FMessageTag TagTwo;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagOne = (struct FMessageTag)TagOne;
    Parms.TagTwo = (struct FMessageTag)TagTwo;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::MatchesAnyTags(struct FMessageTag TagOne, const struct FMessageTagContainer& OtherContainer, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MatchesAnyTags");
    struct
    {
        struct FMessageTag TagOne;
        struct FMessageTagContainer OtherContainer;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagOne = (struct FMessageTag)TagOne;
    Parms.OtherContainer = (struct FMessageTagContainer)OtherContainer;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageTagQuery UBlueprintMessageTagLibrary::MakeMessageTagQuery(struct FMessageTagQuery TagQuery)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MakeMessageTagQuery");
    struct
    {
        struct FMessageTagQuery TagQuery;
        struct FMessageTagQuery ReturnValue;
    } Parms{};
    Parms.TagQuery = (struct FMessageTagQuery)TagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageTagContainer UBlueprintMessageTagLibrary::MakeMessageTagContainerFromTag(struct FMessageTag SingleTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MakeMessageTagContainerFromTag");
    struct
    {
        struct FMessageTag SingleTag;
        struct FMessageTagContainer ReturnValue;
    } Parms{};
    Parms.SingleTag = (struct FMessageTag)SingleTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageTagContainer UBlueprintMessageTagLibrary::MakeMessageTagContainerFromArray(const struct TArray<struct FMessageTag>& MessageTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MakeMessageTagContainerFromArray");
    struct
    {
        struct TArray<struct FMessageTag> MessageTags;
        struct FMessageTagContainer ReturnValue;
    } Parms{};
    Parms.MessageTags = (struct TArray<struct FMessageTag>)MessageTags;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageTagContainer UBlueprintMessageTagLibrary::MakeLiteralMessageTagContainer(struct FMessageTagContainer Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MakeLiteralMessageTagContainer");
    struct
    {
        struct FMessageTagContainer Value;
        struct FMessageTagContainer ReturnValue;
    } Parms{};
    Parms.Value = (struct FMessageTagContainer)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMessageTag UBlueprintMessageTagLibrary::MakeLiteralMessageTag(struct FMessageTag Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "MakeLiteralMessageTag");
    struct
    {
        struct FMessageTag Value;
        struct FMessageTag ReturnValue;
    } Parms{};
    Parms.Value = (struct FMessageTag)Value;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::IsTagQueryEmpty(const struct FMessageTagQuery& TagQuery)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "IsTagQueryEmpty");
    struct
    {
        struct FMessageTagQuery TagQuery;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagQuery = (struct FMessageTagQuery)TagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::IsMessageTagValid(struct FMessageTag MessageTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "IsMessageTagValid");
    struct
    {
        struct FMessageTag MessageTag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.MessageTag = (struct FMessageTag)MessageTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::HasTag(const struct FMessageTagContainer& TagContainer, struct FMessageTag Tag, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "HasTag");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FMessageTag Tag;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    Parms.Tag = (struct FMessageTag)Tag;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::HasAnyTags(const struct FMessageTagContainer& TagContainer, const struct FMessageTagContainer& OtherContainer, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "HasAnyTags");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FMessageTagContainer OtherContainer;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    Parms.OtherContainer = (struct FMessageTagContainer)OtherContainer;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::HasAllTags(const struct FMessageTagContainer& TagContainer, const struct FMessageTagContainer& OtherContainer, uint8_t bExactMatch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "HasAllTags");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FMessageTagContainer OtherContainer;
        uint8_t bExactMatch;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    Parms.OtherContainer = (struct FMessageTagContainer)OtherContainer;
    Parms.bExactMatch = (uint8_t)bExactMatch;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::HasAllMatchingMessageTags(struct TScriptInterface<IMessageTagAssetInterface> TagContainerInterface, const struct FMessageTagContainer& OtherContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "HasAllMatchingMessageTags");
    struct
    {
        struct TScriptInterface<IMessageTagAssetInterface> TagContainerInterface;
        struct FMessageTagContainer OtherContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainerInterface = (struct TScriptInterface<IMessageTagAssetInterface>)TagContainerInterface;
    Parms.OtherContainer = (struct FMessageTagContainer)OtherContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FName UBlueprintMessageTagLibrary::GetTagName(const struct FMessageTag& MessageTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "GetTagName");
    struct
    {
        struct FMessageTag MessageTag;
        struct FName ReturnValue;
    } Parms{};
    Parms.MessageTag = (struct FMessageTag)MessageTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UBlueprintMessageTagLibrary::GetNumMessageTagsInContainer(const struct FMessageTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "GetNumMessageTagsInContainer");
    struct
    {
        struct FMessageTagContainer TagContainer;
        int32_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBlueprintMessageTagLibrary::GetDebugStringFromMessageTagContainer(const struct FMessageTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "GetDebugStringFromMessageTagContainer");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FString ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UBlueprintMessageTagLibrary::GetDebugStringFromMessageTag(struct FMessageTag MessageTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "GetDebugStringFromMessageTag");
    struct
    {
        struct FMessageTag MessageTag;
        struct FString ReturnValue;
    } Parms{};
    Parms.MessageTag = (struct FMessageTag)MessageTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBlueprintMessageTagLibrary::GetAllActorsOfClassMatchingTagQuery(struct UObject* WorldContextObject, struct AActor* ActorClass, const struct FMessageTagQuery& MessageTagQuery, struct TArray<struct AActor*>& OutActors)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "GetAllActorsOfClassMatchingTagQuery");
    struct
    {
        struct UObject* WorldContextObject;
        struct AActor* ActorClass;
        struct FMessageTagQuery MessageTagQuery;
        struct TArray<struct AActor*> OutActors;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.ActorClass = (struct AActor*)ActorClass;
    Parms.MessageTagQuery = (struct FMessageTagQuery)MessageTagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    OutActors = Parms.OutActors;
}

uint8_t UBlueprintMessageTagLibrary::EqualEqual_MessageTagContainer(const struct FMessageTagContainer& A, const struct FMessageTagContainer& B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "EqualEqual_MessageTagContainer");
    struct
    {
        struct FMessageTagContainer A;
        struct FMessageTagContainer B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FMessageTagContainer)A;
    Parms.B = (struct FMessageTagContainer)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::EqualEqual_MessageTag(struct FMessageTag A, struct FMessageTag B)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "EqualEqual_MessageTag");
    struct
    {
        struct FMessageTag A;
        struct FMessageTag B;
        uint8_t ReturnValue;
    } Parms{};
    Parms.A = (struct FMessageTag)A;
    Parms.B = (struct FMessageTag)B;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::DoesTagAssetInterfaceHaveTag(struct TScriptInterface<IMessageTagAssetInterface> TagContainerInterface, struct FMessageTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "DoesTagAssetInterfaceHaveTag");
    struct
    {
        struct TScriptInterface<IMessageTagAssetInterface> TagContainerInterface;
        struct FMessageTag Tag;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainerInterface = (struct TScriptInterface<IMessageTagAssetInterface>)TagContainerInterface;
    Parms.Tag = (struct FMessageTag)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UBlueprintMessageTagLibrary::DoesContainerMatchTagQuery(const struct FMessageTagContainer& TagContainer, const struct FMessageTagQuery& TagQuery)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "DoesContainerMatchTagQuery");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FMessageTagQuery TagQuery;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    Parms.TagQuery = (struct FMessageTagQuery)TagQuery;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UBlueprintMessageTagLibrary::BreakMessageTagContainer(const struct FMessageTagContainer& MessageTagContainer, struct TArray<struct FMessageTag>& MessageTags)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "BreakMessageTagContainer");
    struct
    {
        struct FMessageTagContainer MessageTagContainer;
        struct TArray<struct FMessageTag> MessageTags;
    } Parms{};
    Parms.MessageTagContainer = (struct FMessageTagContainer)MessageTagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    MessageTags = Parms.MessageTags;
}

void UBlueprintMessageTagLibrary::AppendMessageTagContainers(struct FMessageTagContainer& InOutTagContainer, const struct FMessageTagContainer& InTagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "AppendMessageTagContainers");
    struct
    {
        struct FMessageTagContainer InOutTagContainer;
        struct FMessageTagContainer InTagContainer;
    } Parms{};
    Parms.InTagContainer = (struct FMessageTagContainer)InTagContainer;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InOutTagContainer = Parms.InOutTagContainer;
}

void UBlueprintMessageTagLibrary::AddMessageTag(struct FMessageTagContainer& TagContainer, struct FMessageTag Tag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("BlueprintMessageTagLibrary", "AddMessageTag");
    struct
    {
        struct FMessageTagContainer TagContainer;
        struct FMessageTag Tag;
    } Parms{};
    Parms.Tag = (struct FMessageTag)Tag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    TagContainer = Parms.TagContainer;
}

// IMessageTagAssetInterface
uint8_t IMessageTagAssetInterface::HasMatchingMessageTag(struct FMessageTag TagToCheck)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MessageTagAssetInterface", "HasMatchingMessageTag");
    struct
    {
        struct FMessageTag TagToCheck;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagToCheck = (struct FMessageTag)TagToCheck;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IMessageTagAssetInterface::HasAnyMatchingMessageTags(const struct FMessageTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MessageTagAssetInterface", "HasAnyMatchingMessageTags");
    struct
    {
        struct FMessageTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t IMessageTagAssetInterface::HasAllMatchingMessageTags(const struct FMessageTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MessageTagAssetInterface", "HasAllMatchingMessageTags");
    struct
    {
        struct FMessageTagContainer TagContainer;
        uint8_t ReturnValue;
    } Parms{};
    Parms.TagContainer = (struct FMessageTagContainer)TagContainer;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void IMessageTagAssetInterface::GetOwnedMessageTags(struct FMessageTagContainer& TagContainer)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MessageTagAssetInterface", "GetOwnedMessageTags");
    struct
    {
        struct FMessageTagContainer TagContainer;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    TagContainer = Parms.TagContainer;
}

} // namespace SDK
