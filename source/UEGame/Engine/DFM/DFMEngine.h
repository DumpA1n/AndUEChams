#pragma once

#include "UEGame/Engine/Base/BaseEngine.h"
#include "DFMStructs.h"

struct UGPTeamComponent;

struct ACHARACTER : APawn
{
    DEFINE_UE_CLASS_HELPERS(ACHARACTER, "CHARACTER")

    UGPTeamComponent* GetTeamComp();
};

struct ADFMCharacter : ACHARACTER
{
    DEFINE_UE_CLASS_HELPERS(ADFMCharacter, "DFMCharacter")
};

struct ADFMPlayerCharacter : ADFMCharacter
{
    DEFINE_UE_CLASS_HELPERS(ADFMPlayerCharacter, "DFMPlayerCharacter")
};

struct ABreakthroughCharacter : ADFMPlayerCharacter
{
    DEFINE_UE_CLASS_HELPERS(ABreakthroughCharacter, "BreakthroughCharacter")
};

struct AGPInteractorBase : AActor {};
struct AInteractorBase : AGPInteractorBase {};
struct APickupBase : AInteractorBase {};

struct AInventoryPickup : APickupBase
{
    DEFINE_UE_CLASS_HELPERS(AInventoryPickup, "InventoryPickup")
};

struct UGPTeamComponent : UActorComponent
{
    DEFINE_UE_CLASS_HELPERS(UGPTeamComponent, "GPTeamComponent")

    int32_t GetCamp();
    int32_t GetTeamID();
};
