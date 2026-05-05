#include "GPMassGamePlay.hpp"
#include "GPGameplay.hpp"
#include "MassEntity.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPMarkerMassSubsystem
void UGPMarkerMassSubsystem::ReloadArchetypeConfigs()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "ReloadArchetypeConfigs");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UGPMarkerMassSubsystem::RegisterTacticalMarkingEntityToMaps(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "RegisterTacticalMarkingEntityToMaps");
    struct
    {
        struct FMassEntityHandle Entity;
        struct FGPMarkerEntityCreateParams CreateParams;
    } Parms{};
    Parms.Entity = (struct FMassEntityHandle)Entity;
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
}

void UGPMarkerMassSubsystem::RegisterNoActorEntityToMaps(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "RegisterNoActorEntityToMaps");
    struct
    {
        struct FMassEntityHandle Entity;
        struct FGPMarkerEntityCreateParams CreateParams;
    } Parms{};
    Parms.Entity = (struct FMassEntityHandle)Entity;
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
}

void UGPMarkerMassSubsystem::RegisterActorEntityToMaps(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "RegisterActorEntityToMaps");
    struct
    {
        struct FMassEntityHandle Entity;
        struct FGPMarkerEntityCreateParams CreateParams;
    } Parms{};
    Parms.Entity = (struct FMassEntityHandle)Entity;
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
}

void UGPMarkerMassSubsystem::InitializeMarkerFragments(struct FMassEntityHandle Entity, const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "InitializeMarkerFragments");
    struct
    {
        struct FMassEntityHandle Entity;
        struct FGPMarkerEntityCreateParams CreateParams;
    } Parms{};
    Parms.Entity = (struct FMassEntityHandle)Entity;
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
}

int32_t UGPMarkerMassSubsystem::GetTotalMarkerCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "GetTotalMarkerCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UGPMarkerMassSubsystem::GetMarkerCountByType(EGPMarkerType MarkerType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "GetMarkerCountByType");
    struct
    {
        enum EGPMarkerType MarkerType;
        int32_t ReturnValue;
    } Parms{};
    Parms.MarkerType = (enum EGPMarkerType)MarkerType;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UGPMarkerMassSubsystem* UGPMarkerMassSubsystem::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPMarkerMassSubsystem", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UGPMarkerMassSubsystem* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMassEntityHandle UGPMarkerMassSubsystem::FindNoActorMarkerEntity(EGPMarkerType MarkerType, struct FString MarkerString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "FindNoActorMarkerEntity");
    struct
    {
        enum EGPMarkerType MarkerType;
        struct FString MarkerString;
        struct FMassEntityHandle ReturnValue;
    } Parms{};
    Parms.MarkerType = (enum EGPMarkerType)MarkerType;
    Parms.MarkerString = (struct FString)MarkerString;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMassEntityHandle UGPMarkerMassSubsystem::FindActorMarkerEntity(EGPMarkerType MarkerType, uint32_t ActorGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "FindActorMarkerEntity");
    struct
    {
        enum EGPMarkerType MarkerType;
        uint32_t ActorGUID;
        struct FMassEntityHandle ReturnValue;
    } Parms{};
    Parms.MarkerType = (enum EGPMarkerType)MarkerType;
    Parms.ActorGUID = (uint32_t)ActorGUID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UGPMarkerMassSubsystem::DestroyTacticalMarkingEntity(EGPMarkerType MarkerType, struct FMassEntityHandle Entity)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "DestroyTacticalMarkingEntity");
    struct
    {
        enum EGPMarkerType MarkerType;
        struct FMassEntityHandle Entity;
    } Parms{};
    Parms.MarkerType = (enum EGPMarkerType)MarkerType;
    Parms.Entity = (struct FMassEntityHandle)Entity;
    this->ProcessEvent(Func, &Parms);
}

void UGPMarkerMassSubsystem::DestroyNoActorMarkerEntity(EGPMarkerType MarkerType, struct FMassEntityHandle Entity, struct FString MarkerString)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "DestroyNoActorMarkerEntity");
    struct
    {
        enum EGPMarkerType MarkerType;
        struct FMassEntityHandle Entity;
        struct FString MarkerString;
    } Parms{};
    Parms.MarkerType = (enum EGPMarkerType)MarkerType;
    Parms.Entity = (struct FMassEntityHandle)Entity;
    Parms.MarkerString = (struct FString)MarkerString;
    this->ProcessEvent(Func, &Parms);
}

void UGPMarkerMassSubsystem::DestroyActorMarkerEntity(EGPMarkerType MarkerType, struct FMassEntityHandle Entity, uint32_t ActorGUID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "DestroyActorMarkerEntity");
    struct
    {
        enum EGPMarkerType MarkerType;
        struct FMassEntityHandle Entity;
        uint32_t ActorGUID;
    } Parms{};
    Parms.MarkerType = (enum EGPMarkerType)MarkerType;
    Parms.Entity = (struct FMassEntityHandle)Entity;
    Parms.ActorGUID = (uint32_t)ActorGUID;
    this->ProcessEvent(Func, &Parms);
}

struct FMassEntityHandle UGPMarkerMassSubsystem::CreateTacticalMarkingEntity(const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "CreateTacticalMarkingEntity");
    struct
    {
        struct FGPMarkerEntityCreateParams CreateParams;
        struct FMassEntityHandle ReturnValue;
    } Parms{};
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMassEntityHandle UGPMarkerMassSubsystem::CreateMarkerEntityWithLocation(const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "CreateMarkerEntityWithLocation");
    struct
    {
        struct FGPMarkerEntityCreateParams CreateParams;
        struct FMassEntityHandle ReturnValue;
    } Parms{};
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMassEntityHandle UGPMarkerMassSubsystem::CreateMarkerEntityWithActor(const struct FGPMarkerEntityCreateParams& CreateParams)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("GPMarkerMassSubsystem", "CreateMarkerEntityWithActor");
    struct
    {
        struct FGPMarkerEntityCreateParams CreateParams;
        struct FMassEntityHandle ReturnValue;
    } Parms{};
    Parms.CreateParams = (struct FGPMarkerEntityCreateParams)CreateParams;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
