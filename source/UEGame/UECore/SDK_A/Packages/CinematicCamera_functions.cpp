#include "CinematicCamera.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ACineCameraActor
struct UCineCameraComponent* ACineCameraActor::GetCineCameraComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraActor", "GetCineCameraComponent");
    struct
    {
        struct UCineCameraComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UCineCameraComponent
void UCineCameraComponent::SetLensPresetByName(struct FString InPresetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "SetLensPresetByName");
    struct
    {
        struct FString InPresetName;
    } Parms{};
    Parms.InPresetName = (struct FString)InPresetName;
    this->ProcessEvent(Func, &Parms);
}

void UCineCameraComponent::SetFilmbackPresetByName(struct FString InPresetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "SetFilmbackPresetByName");
    struct
    {
        struct FString InPresetName;
    } Parms{};
    Parms.InPresetName = (struct FString)InPresetName;
    this->ProcessEvent(Func, &Parms);
}

void UCineCameraComponent::SetCurrentFocalLength(const float& InFocalLength)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "SetCurrentFocalLength");
    struct
    {
        float InFocalLength;
    } Parms{};
    Parms.InFocalLength = (float)InFocalLength;
    this->ProcessEvent(Func, &Parms);
}

float UCineCameraComponent::GetVerticalFieldOfView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "GetVerticalFieldOfView");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FNamedLensPreset> UCineCameraComponent::GetLensPresetsCopy()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CineCameraComponent", "GetLensPresetsCopy");
    struct
    {
        struct TArray<struct FNamedLensPreset> ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCineCameraComponent::GetLensPresetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "GetLensPresetName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UCineCameraComponent::GetHorizontalFieldOfView()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "GetHorizontalFieldOfView");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCineCameraComponent::GetFilmbackPresetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "GetFilmbackPresetName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UCineCameraComponent::GetDefaultFilmbackPresetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CineCameraComponent", "GetDefaultFilmbackPresetName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ACameraRig_Rail
struct USplineComponent* ACameraRig_Rail::GetRailSplineComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CameraRig_Rail", "GetRailSplineComponent");
    struct
    {
        struct USplineComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
