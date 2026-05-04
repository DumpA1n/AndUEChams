#include "DFMEngine.h"

UGPTeamComponent* ACHARACTER::GetTeamComp() {
    static auto fn = Class->GetFunction("GPCharacterBase", "GetTeamComp");
    struct {
        UGPTeamComponent* ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

int32_t UGPTeamComponent::GetCamp() {
    static auto fn = Class->GetFunction("GPTeamComponent", "GetCamp");
    struct {
        int32_t ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}

int32_t UGPTeamComponent::GetTeamID() {
    static auto fn = Class->GetFunction("GPTeamComponent", "GetTeamID");
    struct {
        int32_t ReturnValue;
    } parms;
    parms = {};
    ProcessEvent(fn, &parms);
    return parms.ReturnValue;
}
