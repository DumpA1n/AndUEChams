#include "MFClimateRuntime.hpp"
#include "Engine.hpp"
#include "LevelSequence.hpp"
#include "PhysicsCore.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UMFClimateBakeModeComponent
void UMFClimateBakeModeComponent::ToggleBakeMode(bool bBakeModeOn)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeModeComponent", "ToggleBakeMode");
    struct
    {
        bool bBakeModeOn;
    } Parms{};
    Parms.bBakeModeOn = (bool)bBakeModeOn;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBakeModeComponent::RunBakeProcedure(struct UMFClimateBaseBakeProcedure* BakeProcedure)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeModeComponent", "RunBakeProcedure");
    struct
    {
        struct UMFClimateBaseBakeProcedure* BakeProcedure;
    } Parms{};
    Parms.BakeProcedure = (struct UMFClimateBaseBakeProcedure*)BakeProcedure;
    this->ProcessEvent(Func, &Parms);
}

bool UMFClimateBakeModeComponent::IsBakeMode()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeModeComponent", "IsBakeMode");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateBakeModeComponent::BakeUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeModeComponent", "BakeUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBakeModeComponent::AbortBakeProcedure()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeModeComponent", "AbortBakeProcedure");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateBaseBakeProcedure
void UMFClimateBaseBakeProcedure::TickBaking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "TickBaking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBaseBakeProcedure::OnFinalizeBaking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "OnFinalizeBaking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBaseBakeProcedure::OnBeginBake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "OnBeginBake");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBaseBakeProcedure::OnAbortBaking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "OnAbortBaking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool UMFClimateBaseBakeProcedure::IsBakingDone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "IsBakingDone");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateBaseBakeProcedure::FinishBaking()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "FinishBaking");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBaseBakeProcedure::BakeUpdate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseBakeProcedure", "BakeUpdate");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateBakeProcedure
void UMFClimateBakeProcedure::SetupBake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeProcedure", "SetupBake");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateBakeProcedure::DoBake()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBakeProcedure", "DoBake");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateBaseLightningEventProducer
void UMFClimateBaseLightningEventProducer::Tick(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseLightningEventProducer", "Tick");
    struct
    {
        float DeltaTime;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateCelestialOrbit
struct FRotator UMFClimateCelestialOrbit::GetCelestialToEarthEcliptic()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialOrbit", "GetCelestialToEarthEcliptic");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMFClimateCelestialOrbit::GetCelestialRotationInScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialOrbit", "GetCelestialRotationInScene");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMFClimateCelestialOrbit::GetCelestialPositionInScene()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialOrbit", "GetCelestialPositionInScene");
    struct
    {
        struct FRotator ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateCelestialOrbit::GetCelestialFacingSceneDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialOrbit", "GetCelestialFacingSceneDirection");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AMFClimateCelestialBody
void AMFClimateCelestialBody::SystemTexturesRefreshed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "SystemTexturesRefreshed");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateCelestialBody::SetIntensity(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "SetIntensity");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateCelestialBody::SetColor(struct FColor NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "SetColor");
    struct
    {
        struct FColor NewValue;
    } Parms{};
    Parms.NewValue = (struct FColor)NewValue;
    this->ProcessEvent(Func, &Parms);
}

struct UMFClimateCelestialOrbit* AMFClimateCelestialBody::GetOrbitComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "GetOrbitComponent");
    struct
    {
        struct UMFClimateCelestialOrbit* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor AMFClimateCelestialBody::GetIrradiance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "GetIrradiance");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AMFClimateCelestialBody::GetIntensity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "GetIntensity");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FColor AMFClimateCelestialBody::GetColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "GetColor");
    struct
    {
        struct FColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AMFClimateCelestialBody::GetCenterDir()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCelestialBody", "GetCenterDir");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFClimateCirrusCloud
void UMFClimateCirrusCloud::UpdateCloudExtraEmissive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "UpdateCloudExtraEmissive");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateCirrusCloud::StartExtraCloudEmissiveEvent(struct FMFClimateCirrusCloudEmissiveEvent Event, float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "StartExtraCloudEmissiveEvent");
    struct
    {
        struct FMFClimateCirrusCloudEmissiveEvent Event;
        float DelayTime;
    } Parms{};
    Parms.Event = (struct FMFClimateCirrusCloudEmissiveEvent)Event;
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateCirrusCloud::RefreshCloudEmissiveEvent(float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "RefreshCloudEmissiveEvent");
    struct
    {
        float DelayTime;
    } Parms{};
    Parms.DelayTime = (float)DelayTime;
    this->ProcessEvent(Func, &Parms);
}

struct UTexture2D* UMFClimateCirrusCloud::GetExtraEmissiveTexture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "GetExtraEmissiveTexture");
    struct
    {
        struct UTexture2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UMFClimateCirrusCloud::GetExtraEmissiveColor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "GetExtraEmissiveColor");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateCirrusCloud::GetCurrentExtraEmissive()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "GetCurrentExtraEmissive");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateCirrusCloud::GetCloudExtrFakeLightIntensity()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "GetCloudExtrFakeLightIntensity");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateCirrusCloud::DebugStopCloudEmissiveEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "DebugStopCloudEmissiveEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateCirrusCloud::DebugStartCloudEmissiveEvent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCirrusCloud", "DebugStartCloudEmissiveEvent");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateCloudNoiseGroup
void UMFClimateCloudNoiseGroup::CreateAssets()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCloudNoiseGroup", "CreateAssets");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateCloudNoiseGroupPlatformSwitcher
void UMFClimateCloudNoiseGroupPlatformSwitcher::UpdateAllNoise()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateCloudNoiseGroupPlatformSwitcher", "UpdateAllNoise");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateGlobalWindComponent
void UMFClimateGlobalWindComponent::SetWindLevel(float WindLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "SetWindLevel");
    struct
    {
        float WindLevel;
    } Parms{};
    Parms.WindLevel = (float)WindLevel;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateGlobalWindComponent::SetWindDirection(struct FVector2D WindDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "SetWindDirection");
    struct
    {
        struct FVector2D WindDir;
    } Parms{};
    Parms.WindDir = (struct FVector2D)WindDir;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateGlobalWindComponent::SetLevel(float WindLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "SetLevel");
    struct
    {
        float WindLevel;
    } Parms{};
    Parms.WindLevel = (float)WindLevel;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateGlobalWindComponent::SetDirection(struct FVector2D WindDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "SetDirection");
    struct
    {
        struct FVector2D WindDir;
    } Parms{};
    Parms.WindDir = (struct FVector2D)WindDir;
    this->ProcessEvent(Func, &Parms);
}

struct FVector2D UMFClimateGlobalWindComponent::GetWindVelocityInMeter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "GetWindVelocityInMeter");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateGlobalWindComponent::GetWindTravel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "GetWindTravel");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateGlobalWindComponent::GetWindLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "GetWindLevel");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateGlobalWindComponent::GetWindDirection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateGlobalWindComponent", "GetWindDirection");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFClimateSceneLightInterfaceComponent
bool UMFClimateSceneLightInterfaceComponent::GetMainLight(struct UDirectionalLightComponent*& OutLightComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateSceneLightInterfaceComponent", "GetMainLight");
    struct
    {
        struct UDirectionalLightComponent* OutLightComponent;
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutLightComponent = Parms.OutLightComponent;
    return Parms.ReturnValue;
}

bool UMFClimateSceneLightInterfaceComponent::GetLightInfoForLightingCloud(struct FVector& OutDir, float BottomHeight, struct FLinearColor& OutColorBottom, float TopHeight, struct FLinearColor& OutColorTop)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateSceneLightInterfaceComponent", "GetLightInfoForLightingCloud");
    struct
    {
        struct FVector OutDir;
        float BottomHeight;
        struct FLinearColor OutColorBottom;
        float TopHeight;
        struct FLinearColor OutColorTop;
        bool ReturnValue;
    } Parms{};
    Parms.BottomHeight = (float)BottomHeight;
    Parms.TopHeight = (float)TopHeight;
    this->ProcessEvent(Func, &Parms);
    OutDir = Parms.OutDir;
    OutColorBottom = Parms.OutColorBottom;
    OutColorTop = Parms.OutColorTop;
    return Parms.ReturnValue;
}

struct FLinearColor UMFClimateSceneLightInterfaceComponent::GetGroundLevelIrradiance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateSceneLightInterfaceComponent", "GetGroundLevelIrradiance");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFClimateSceneLightInterfaceComponent::GetCloudLightingAtHeight(float Height, struct FVector& LightDir, struct FLinearColor& Color)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateSceneLightInterfaceComponent", "GetCloudLightingAtHeight");
    struct
    {
        float Height;
        struct FVector LightDir;
        struct FLinearColor Color;
        bool ReturnValue;
    } Parms{};
    Parms.Height = (float)Height;
    this->ProcessEvent(Func, &Parms);
    LightDir = Parms.LightDir;
    Color = Parms.Color;
    return Parms.ReturnValue;
}

bool UMFClimateSceneLightInterfaceComponent::GetAtmosphereLight(struct FVector& OutDir, struct FLinearColor& OutColoredBrightness, int32_t LightIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateSceneLightInterfaceComponent", "GetAtmosphereLight");
    struct
    {
        struct FVector OutDir;
        struct FLinearColor OutColoredBrightness;
        int32_t LightIndex;
        bool ReturnValue;
    } Parms{};
    Parms.LightIndex = (int32_t)LightIndex;
    this->ProcessEvent(Func, &Parms);
    OutDir = Parms.OutDir;
    OutColoredBrightness = Parms.OutColoredBrightness;
    return Parms.ReturnValue;
}

// AMFClimateIrcCamera
struct FString AMFClimateIrcCamera::GetCameraTag()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateIrcCamera", "GetCameraTag");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AMFClimateLightningChannelActor
void AMFClimateLightningChannelActor::RefreshChannel(struct FVector InStart, struct FVector InEnd, int32_t InRandomSeed, float NormalizedEnergy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningChannelActor", "RefreshChannel");
    struct
    {
        struct FVector InStart;
        struct FVector InEnd;
        int32_t InRandomSeed;
        float NormalizedEnergy;
    } Parms{};
    Parms.InStart = (struct FVector)InStart;
    Parms.InEnd = (struct FVector)InEnd;
    Parms.InRandomSeed = (int32_t)InRandomSeed;
    Parms.NormalizedEnergy = (float)NormalizedEnergy;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateLightningChannelActor::ReceiveOnReturnStrike(float NormalizedEnergy, struct FVector StartInKM, struct FVector EndInKM, int32_t InRandomSeed, struct FVector MockActorLocation, struct FVector MockActorScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningChannelActor", "ReceiveOnReturnStrike");
    struct
    {
        float NormalizedEnergy;
        struct FVector StartInKM;
        struct FVector EndInKM;
        int32_t InRandomSeed;
        struct FVector MockActorLocation;
        struct FVector MockActorScale;
    } Parms{};
    Parms.NormalizedEnergy = (float)NormalizedEnergy;
    Parms.StartInKM = (struct FVector)StartInKM;
    Parms.EndInKM = (struct FVector)EndInKM;
    Parms.InRandomSeed = (int32_t)InRandomSeed;
    Parms.MockActorLocation = (struct FVector)MockActorLocation;
    Parms.MockActorScale = (struct FVector)MockActorScale;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateLightningChannelActor::ReceiveOnRefreshChannel(float NormalizedEnergy, struct FVector StartInKM, struct FVector EndInKM, int32_t InRandomSeed, struct FVector MockActorLocation, struct FVector MockActorScale)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningChannelActor", "ReceiveOnRefreshChannel");
    struct
    {
        float NormalizedEnergy;
        struct FVector StartInKM;
        struct FVector EndInKM;
        int32_t InRandomSeed;
        struct FVector MockActorLocation;
        struct FVector MockActorScale;
    } Parms{};
    Parms.NormalizedEnergy = (float)NormalizedEnergy;
    Parms.StartInKM = (struct FVector)StartInKM;
    Parms.EndInKM = (struct FVector)EndInKM;
    Parms.InRandomSeed = (int32_t)InRandomSeed;
    Parms.MockActorLocation = (struct FVector)MockActorLocation;
    Parms.MockActorScale = (struct FVector)MockActorScale;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateLightningChannelActor::ReceiveOnLightningHidden()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningChannelActor", "ReceiveOnLightningHidden");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateLightningChannelActor::GenerateFractalTree()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningChannelActor", "GenerateFractalTree");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateLightningDirectorComponent
void UMFClimateLightningDirectorComponent::SetReStrikeRandomSeed(int32_t Seed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "SetReStrikeRandomSeed");
    struct
    {
        int32_t Seed;
    } Parms{};
    Parms.Seed = (int32_t)Seed;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateLightningDirectorComponent::SetLightningFrequency(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "SetLightningFrequency");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

struct FMFClimateLightningEvent UMFClimateLightningDirectorComponent::SampleLightningEvent(int32_t Seed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "SampleLightningEvent");
    struct
    {
        int32_t Seed;
        struct FMFClimateLightningEvent ReturnValue;
    } Parms{};
    Parms.Seed = (int32_t)Seed;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateLightningDirectorComponent::RegisterLightningEventDetermined(const struct FMFClimateLightningEvent& Evt, int32_t RandomSeed)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "RegisterLightningEventDetermined");
    struct
    {
        struct FMFClimateLightningEvent Evt;
        int32_t RandomSeed;
    } Parms{};
    Parms.Evt = (struct FMFClimateLightningEvent)Evt;
    Parms.RandomSeed = (int32_t)RandomSeed;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateLightningDirectorComponent::RegisterLightningEvent(const struct FMFClimateLightningEvent& Evt)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "RegisterLightningEvent");
    struct
    {
        struct FMFClimateLightningEvent Evt;
    } Parms{};
    Parms.Evt = (struct FMFClimateLightningEvent)Evt;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateLightningDirectorComponent::LightningStrikeEventDelegate__DelegateSignature(const struct FMFClimateLightningEvent& Event, float NormStrikeEnergy)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "LightningStrikeEventDelegate__DelegateSignature");
    struct
    {
        struct FMFClimateLightningEvent Event;
        float NormStrikeEnergy;
    } Parms{};
    Parms.Event = (struct FMFClimateLightningEvent)Event;
    Parms.NormStrikeEnergy = (float)NormStrikeEnergy;
    this->ProcessEvent(Func, &Parms);
}

bool UMFClimateLightningDirectorComponent::LightningEventGoingOn()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "LightningEventGoingOn");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateLightningDirectorComponent::LightningEventDelegate__DelegateSignature(const struct FMFClimateLightningEvent& Event)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "LightningEventDelegate__DelegateSignature");
    struct
    {
        struct FMFClimateLightningEvent Event;
    } Parms{};
    Parms.Event = (struct FMFClimateLightningEvent)Event;
    this->ProcessEvent(Func, &Parms);
}

float UMFClimateLightningDirectorComponent::GetSceneLightIntensityScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetSceneLightIntensityScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetSceneLightEVScale()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetSceneLightEVScale");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetReStrikeCountStdDev()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetReStrikeCountStdDev");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetReStrikeCountMean()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetReStrikeCountMean");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetMinDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetMinDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetMaxGroundOffset()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetMaxGroundOffset");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetMaxDistance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetMaxDistance");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFClimateLightningDirectorComponent::GetLocalToCamera()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetLocalToCamera");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FLinearColor UMFClimateLightningDirectorComponent::GetLightningTint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetLightningTint");
    struct
    {
        struct FLinearColor ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateLightningDirectorComponent::GetLightningFrequency()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetLightningFrequency");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFClimateLightningChannelActor* UMFClimateLightningDirectorComponent::GetLightningChannelActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetLightningChannelActor");
    struct
    {
        struct AMFClimateLightningChannelActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateLightningDirectorComponent::GetEnergyNormalDistribution()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "GetEnergyNormalDistribution");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateLightningDirectorComponent::DevelopmentModeCallLightning()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateLightningDirectorComponent", "DevelopmentModeCallLightning");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateMovableRainWetnessComponent
void UMFClimateMovableRainWetnessComponent::UpdateWetnessParameter(float GlobalRainAmount, float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "UpdateWetnessParameter");
    struct
    {
        float GlobalRainAmount;
        float DeltaTime;
    } Parms{};
    Parms.GlobalRainAmount = (float)GlobalRainAmount;
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateMovableRainWetnessComponent::UpdateVisualEffects(bool bForceUpdate)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "UpdateVisualEffects");
    struct
    {
        bool bForceUpdate;
    } Parms{};
    Parms.bForceUpdate = (bool)bForceUpdate;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateMovableRainWetnessComponent::UpdateOcclusionRateByLineTrace(bool bForceSync)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "UpdateOcclusionRateByLineTrace");
    struct
    {
        bool bForceSync;
    } Parms{};
    Parms.bForceSync = (bool)bForceSync;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateMovableRainWetnessComponent::RefreshPrimitiveMaterialCollection()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "RefreshPrimitiveMaterialCollection");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateMovableRainWetnessComponent::RefreshPrimitiveAndUpdateVisualEffectsNextFrame()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "RefreshPrimitiveAndUpdateVisualEffectsNextFrame");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateMovableRainWetnessComponent::RefreshPrimitiveAndUpdateVisualEffects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "RefreshPrimitiveAndUpdateVisualEffects");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

float UMFClimateMovableRainWetnessComponent::GetOcclusionRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "GetOcclusionRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateMovableRainWetnessComponent::GetOcclusionDetectionPosition()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "GetOcclusionDetectionPosition");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPhysicalMaterial* UMFClimateMovableRainWetnessComponent::GetLastOccludeMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "GetLastOccludeMaterial");
    struct
    {
        struct UPhysicalMaterial* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateMovableRainWetnessComponent::AddExtraPrimitive(struct AActor* Actor, bool bAddChild)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateMovableRainWetnessComponent", "AddExtraPrimitive");
    struct
    {
        struct AActor* Actor;
        bool bAddChild;
    } Parms{};
    Parms.Actor = (struct AActor*)Actor;
    Parms.bAddChild = (bool)bAddChild;
    this->ProcessEvent(Func, &Parms);
}

// AMFClimateRain
void AMFClimateRain::SetRainAutoUpdateAccumulation(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetRainAutoUpdateAccumulation");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetIsSnow(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetIsSnow");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetIsSand(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetIsSand");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetIsMistFog(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetIsMistFog");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetHeavySnowPercentage(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetHeavySnowPercentage");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetAmountOfSnowStorm(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetAmountOfSnowStorm");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetAmountOfRain(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetAmountOfRain");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::SetAccumulation(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "SetAccumulation");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateRain::OnParameterUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "OnParameterUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool AMFClimateRain::LineTraceRainOcclusion(struct FVector position, const struct TArray<struct AActor*>& ActorsToIgnore, struct FHitResult& OutHitResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "LineTraceRainOcclusion");
    struct
    {
        struct FVector position;
        struct TArray<struct AActor*> ActorsToIgnore;
        struct FHitResult OutHitResult;
        bool ReturnValue;
    } Parms{};
    Parms.position = (struct FVector)position;
    Parms.ActorsToIgnore = (struct TArray<struct AActor*>)ActorsToIgnore;
    this->ProcessEvent(Func, &Parms);
    OutHitResult = Parms.OutHitResult;
    return Parms.ReturnValue;
}

float AMFClimateRain::GetRainOcclusionRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetRainOcclusionRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector AMFClimateRain::GetRainDownVector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetRainDownVector");
    struct
    {
        struct FVector ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFClimateRain::GetRainAutoUpdateAccumulation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetRainAutoUpdateAccumulation");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UPhysicalMaterial* AMFClimateRain::GetLastOcclusionMaterial()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetLastOcclusionMaterial");
    struct
    {
        struct UPhysicalMaterial* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFClimateRain::GetIsSnow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetIsSnow");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFClimateRain::GetIsSand()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetIsSand");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFClimateRain::GetIsRain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetIsRain");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFClimateRain::GetIsMistFog()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetIsMistFog");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AMFClimateRain::GetAmountOfRain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetAmountOfRain");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AMFClimateRain::GetAccumulation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateRain", "GetAccumulation");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AMFClimateParticleRain
void AMFClimateParticleRain::UpdateIndoorState()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "UpdateIndoorState");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

bool AMFClimateParticleRain::ShouldBlockParticleEffects()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "ShouldBlockParticleEffects");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AMFClimateParticleRain::SetForceUpdateShadowCapture(bool NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "SetForceUpdateShadowCapture");
    struct
    {
        bool NewValue;
    } Parms{};
    Parms.NewValue = (bool)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateParticleRain::SetESMConstant(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "SetESMConstant");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateParticleRain::OnWideShadowCaptureUpdated(struct FMatrix Matrix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "OnWideShadowCaptureUpdated");
    struct
    {
        struct FMatrix Matrix;
    } Parms{};
    Parms.Matrix = (struct FMatrix)Matrix;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateParticleRain::OnRainShadowCaptureUpdated(struct FMatrix Matrix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "OnRainShadowCaptureUpdated");
    struct
    {
        struct FMatrix Matrix;
    } Parms{};
    Parms.Matrix = (struct FMatrix)Matrix;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateParticleRain::OnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "OnEndOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateParticleRain::OnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "OnBeginOverlap");
    struct
    {
        struct UPrimitiveComponent* OverlappedComponent;
        struct AActor* OtherActor;
        struct UPrimitiveComponent* OtherComp;
        int32_t OtherBodyIndex;
        bool bFromSweep;
        struct FHitResult SweepResult;
    } Parms{};
    Parms.OverlappedComponent = (struct UPrimitiveComponent*)OverlappedComponent;
    Parms.OtherActor = (struct AActor*)OtherActor;
    Parms.OtherComp = (struct UPrimitiveComponent*)OtherComp;
    Parms.OtherBodyIndex = (int32_t)OtherBodyIndex;
    Parms.bFromSweep = (bool)bFromSweep;
    Parms.SweepResult = (struct FHitResult)SweepResult;
    this->ProcessEvent(Func, &Parms);
}

bool AMFClimateParticleRain::IsOverlapWithIndoorVolume()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "IsOverlapWithIndoorVolume");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool AMFClimateParticleRain::IsMFCliamteIndoorVolume(struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateParticleRain", "IsMFCliamteIndoorVolume");
    struct
    {
        struct AActor* InActor;
        bool ReturnValue;
    } Parms{};
    Parms.InActor = (struct AActor*)InActor;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AMFClimateBaseSkyMesh
void AMFClimateBaseSkyMesh::OnSystemTexturesUpdated()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateBaseSkyMesh", "OnSystemTexturesUpdated");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateSnowTrailManager
void UMFClimateSnowTrailManager::AddTrail(struct FVector Location, struct FRotator Rotation, float HitDistance, float Radius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateSnowTrailManager", "AddTrail");
    struct
    {
        struct FVector Location;
        struct FRotator Rotation;
        float HitDistance;
        float Radius;
    } Parms{};
    Parms.Location = (struct FVector)Location;
    Parms.Rotation = (struct FRotator)Rotation;
    Parms.HitDistance = (float)HitDistance;
    Parms.Radius = (float)Radius;
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateStatics
void UMFClimateStatics::StepTimeOfDay(struct UObject* WorldContextObject, float StepInHours)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "StepTimeOfDay");
    struct
    {
        struct UObject* WorldContextObject;
        float StepInHours;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.StepInHours = (float)StepInHours;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::StartExtraCloudEmissiveEvent(struct UObject* WorldContextObject, struct FMFClimateCirrusCloudEmissiveEvent Event, float DelayTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "StartExtraCloudEmissiveEvent");
    struct
    {
        struct UObject* WorldContextObject;
        struct FMFClimateCirrusCloudEmissiveEvent Event;
        float DelayTime;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Event = (struct FMFClimateCirrusCloudEmissiveEvent)Event;
    Parms.DelayTime = (float)DelayTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetWindLevel(struct UObject* WorldContextObject, float WindLevel)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetWindLevel");
    struct
    {
        struct UObject* WorldContextObject;
        float WindLevel;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WindLevel = (float)WindLevel;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetWindDirection(struct UObject* WorldContextObject, struct FVector2D WindDir)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetWindDirection");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D WindDir;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WindDir = (struct FVector2D)WindDir;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetWeatherPresetWeights(struct UObject* WorldContextObject, const struct TArray<float>& Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetWeatherPresetWeights");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<float> Params;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Params = (struct TArray<float>)Params;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetWeatherLayerWeight(struct UObject* WorldContextObject, int32_t LayerIndex, float Weight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetWeatherLayerWeight");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t LayerIndex;
        float Weight;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LayerIndex = (int32_t)LayerIndex;
    Parms.Weight = (float)Weight;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetTimeOfDay(struct UObject* WorldContextObject, float InTODTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetTimeOfDay");
    struct
    {
        struct UObject* WorldContextObject;
        float InTODTime;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InTODTime = (float)InTODTime;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetSystemTextures(struct UObject* WorldContextObject, struct UMaterialInstanceDynamic* Mid)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetSystemTextures");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMaterialInstanceDynamic* Mid;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.Mid = (struct UMaterialInstanceDynamic*)Mid;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetNorthVector(struct UObject* WorldContextObject, struct FVector NorthVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetNorthVector");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector NorthVector;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.NorthVector = (struct FVector)NorthVector;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetMatrixRowAsMPCVectorParameter(struct UObject* WorldContextObject, struct UMaterialParameterCollection* MPC, const struct FMatrix& InMatrix, struct FVector Translation, struct FName RowName0, struct FName RowName1, struct FName RowName2, struct FName RowName3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetMatrixRowAsMPCVectorParameter");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMaterialParameterCollection* MPC;
        struct FMatrix InMatrix;
        struct FVector Translation;
        struct FName RowName0;
        struct FName RowName1;
        struct FName RowName2;
        struct FName RowName3;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.MPC = (struct UMaterialParameterCollection*)MPC;
    Parms.InMatrix = (struct FMatrix)InMatrix;
    Parms.Translation = (struct FVector)Translation;
    Parms.RowName0 = (struct FName)RowName0;
    Parms.RowName1 = (struct FName)RowName1;
    Parms.RowName2 = (struct FName)RowName2;
    Parms.RowName3 = (struct FName)RowName3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetMatrixRowAsMIDVectorParameter(struct UMaterialInstanceDynamic* Mid, const struct FMatrix& InMatrix, struct FVector Translation, struct FName RowName0, struct FName RowName1, struct FName RowName2, struct FName RowName3)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetMatrixRowAsMIDVectorParameter");
    struct
    {
        struct UMaterialInstanceDynamic* Mid;
        struct FMatrix InMatrix;
        struct FVector Translation;
        struct FName RowName0;
        struct FName RowName1;
        struct FName RowName2;
        struct FName RowName3;
    } Parms{};
    Parms.Mid = (struct UMaterialInstanceDynamic*)Mid;
    Parms.InMatrix = (struct FMatrix)InMatrix;
    Parms.Translation = (struct FVector)Translation;
    Parms.RowName0 = (struct FName)RowName0;
    Parms.RowName1 = (struct FName)RowName1;
    Parms.RowName2 = (struct FName)RowName2;
    Parms.RowName3 = (struct FName)RowName3;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetEditorViewportRotation(struct FRotator Rotation)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetEditorViewportRotation");
    struct
    {
        struct FRotator Rotation;
    } Parms{};
    Parms.Rotation = (struct FRotator)Rotation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

void UMFClimateStatics::SetEditorViewportLocation(struct FVector position)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "SetEditorViewportLocation");
    struct
    {
        struct FVector position;
    } Parms{};
    Parms.position = (struct FVector)position;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

float UMFClimateStatics::ProjectPointOnCircleLayer(float PointExtent, float CircleRadius)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "ProjectPointOnCircleLayer");
    struct
    {
        float PointExtent;
        float CircleRadius;
        float ReturnValue;
    } Parms{};
    Parms.PointExtent = (float)PointExtent;
    Parms.CircleRadius = (float)CircleRadius;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::ModuloWarpNegative(float Value, float Mod)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "ModuloWarpNegative");
    struct
    {
        float Value;
        float Mod;
        float ReturnValue;
    } Parms{};
    Parms.Value = (float)Value;
    Parms.Mod = (float)Mod;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateStatics::GetWindVelocity(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWindVelocity");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::GetWindLevel(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWindLevel");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateStatics::GetWindDirection(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWindDirection");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector2D ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateStatics::GetWeatherPresetWeights(struct UObject* WorldContextObject, struct TArray<float>& Params)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWeatherPresetWeights");
    struct
    {
        struct UObject* WorldContextObject;
        struct TArray<float> Params;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Params = Parms.Params;
}

int32_t UMFClimateStatics::GetWeatherLayerIndexByIntTag(struct UObject* WorldContextObject, int32_t IntTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWeatherLayerIndexByIntTag");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t IntTag;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.IntTag = (int32_t)IntTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateStatics::GetWeatherLayerIndex(struct UObject* WorldContextObject, struct FString LayerName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWeatherLayerIndex");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString LayerName;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.LayerName = (struct FString)LayerName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateWeatherComponent* UMFClimateStatics::GetWeatherComponent(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetWeatherComponent");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFClimateWeatherComponent* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::GetTimeOfDay(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetTimeOfDay");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateWorldSubSystem* UMFClimateStatics::GetSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFClimateWorldSubSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateStatics::GetQualityLevel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetQualityLevel");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFClimateStatics::GetPresetName(struct UObject* WorldContextObject, int32_t InPresetIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetPresetName");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t InPresetIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InPresetIndex = (int32_t)InPresetIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateStatics::GetPresetIndexByName(struct UObject* WorldContextObject, struct FString InPresetName)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetPresetIndexByName");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString InPresetName;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.InPresetName = (struct FString)InPresetName;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateStatics::GetPresetIndexByIntTag(struct UObject* WorldContextObject, int32_t IntTag)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetPresetIndexByIntTag");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t IntTag;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.IntTag = (int32_t)IntTag;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMFClimateStatics::GetPlayerRotation(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetPlayerRotation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateStatics::GetPlayerLocation(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetPlayerLocation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateStatics::GetNumWeatherPresets(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetNumWeatherPresets");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateStatics::GetNorthVector(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetNorthVector");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::GetNorthAngleOffset(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetNorthAngleOffset");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFClimateStatics::GetMaxWeightPresetName(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetMaxWeightPresetName");
    struct
    {
        struct UObject* WorldContextObject;
        struct FString ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateStatics::GetMaxWeightPresetIndex(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetMaxWeightPresetIndex");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector4 UMFClimateStatics::GetMatrixRow(const struct FMatrix& Matrix, int32_t Row)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetMatrixRow");
    struct
    {
        struct FMatrix Matrix;
        int32_t Row;
        struct FVector4 ReturnValue;
    } Parms{};
    Parms.Matrix = (struct FMatrix)Matrix;
    Parms.Row = (int32_t)Row;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateWorldSubSystem* UMFClimateStatics::GetFirstSystem(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetFirstSystem");
    struct
    {
        struct UObject* WorldContextObject;
        struct UMFClimateWorldSubSystem* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UMFClimateStatics::GetFeature(struct UObject* WorldContextObject, struct UObject* FeatureType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetFeature");
    struct
    {
        struct UObject* WorldContextObject;
        struct UObject* FeatureType;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.FeatureType = (struct UObject*)FeatureType;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateStatics::GetEastVector(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetEastVector");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::GetEastAngleOffset(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetEastAngleOffset");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FRotator UMFClimateStatics::GetCameraRotation(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetCameraRotation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FRotator ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateStatics::GetCameraLocation(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetCameraLocation");
    struct
    {
        struct UObject* WorldContextObject;
        struct FVector ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::GetCameraAspect(struct UObject* WorldContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GetCameraAspect");
    struct
    {
        struct UObject* WorldContextObject;
        float ReturnValue;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateStatics::GaussianSampleFromStream(struct FRandomStream& Stream, float Mean, float StdDev)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GaussianSampleFromStream");
    struct
    {
        struct FRandomStream Stream;
        float Mean;
        float StdDev;
        float ReturnValue;
    } Parms{};
    Parms.Mean = (float)Mean;
    Parms.StdDev = (float)StdDev;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    Stream = Parms.Stream;
    return Parms.ReturnValue;
}

float UMFClimateStatics::GaussianSample(float Mean, float StdDev)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "GaussianSample");
    struct
    {
        float Mean;
        float StdDev;
        float ReturnValue;
    } Parms{};
    Parms.Mean = (float)Mean;
    Parms.StdDev = (float)StdDev;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateStatics::ComputeCubemapBrightness(struct UTextureCube* InCubemap)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "ComputeCubemapBrightness");
    struct
    {
        struct UTextureCube* InCubemap;
        struct FVector ReturnValue;
    } Parms{};
    Parms.InCubemap = (struct UTextureCube*)InCubemap;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateStatics::ChangeToWeatherPreset(struct UObject* WorldContextObject, int32_t WeatherIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("MFClimateStatics", "ChangeToWeatherPreset");
    struct
    {
        struct UObject* WorldContextObject;
        int32_t WeatherIndex;
    } Parms{};
    Parms.WorldContextObject = (struct UObject*)WorldContextObject;
    Parms.WeatherIndex = (int32_t)WeatherIndex;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

// UMFClimateTimeGeographyComponent
struct FVector UMFClimateTimeGeographyComponent::TransformSceneVectorToEcliptic(struct FVector Vector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "TransformSceneVectorToEcliptic");
    struct
    {
        struct FVector Vector;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Vector = (struct FVector)Vector;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector UMFClimateTimeGeographyComponent::TransformEclipticVectorToScene(struct FVector Vector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "TransformEclipticVectorToScene");
    struct
    {
        struct FVector Vector;
        struct FVector ReturnValue;
    } Parms{};
    Parms.Vector = (struct FVector)Vector;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateTimeGeographyComponent::StepTimeOfDay(float DeltaHour)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "StepTimeOfDay");
    struct
    {
        float DeltaHour;
    } Parms{};
    Parms.DeltaHour = (float)DeltaHour;
    this->ProcessEvent(Func, &Parms);
}

float UMFClimateTimeGeographyComponent::SetYearPercentFromMonthAndDay(int32_t InMonth, int32_t InDay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetYearPercentFromMonthAndDay");
    struct
    {
        int32_t InMonth;
        int32_t InDay;
        float ReturnValue;
    } Parms{};
    Parms.InMonth = (int32_t)InMonth;
    Parms.InDay = (int32_t)InDay;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateTimeGeographyComponent::SetYearPercent(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetYearPercent");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetTimeZone(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetTimeZone");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetTimeOfDay(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetTimeOfDay");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetNorthVector(struct FVector2D NewNorthVector)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetNorthVector");
    struct
    {
        struct FVector2D NewNorthVector;
    } Parms{};
    Parms.NewNorthVector = (struct FVector2D)NewNorthVector;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetLongitude(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetLongitude");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetLatitude(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetLatitude");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetEarthRadiusKM(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetEarthRadiusKM");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetEarthAxialTilt(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetEarthAxialTilt");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetAutoStepTimeRate(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetAutoStepTimeRate");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetAutoStepTimeEditorRate(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetAutoStepTimeEditorRate");
    struct
    {
        float InValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetAutoStepTimeEditor(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetAutoStepTimeEditor");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateTimeGeographyComponent::SetAutoStepTime(bool InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "SetAutoStepTime");
    struct
    {
        bool InValue;
    } Parms{};
    Parms.InValue = (bool)InValue;
    this->ProcessEvent(Func, &Parms);
}

float UMFClimateTimeGeographyComponent::GetYearPercent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetYearPercent");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetTimeZone()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetTimeZone");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetTimeOfDay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetTimeOfDay");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetSunRotationProgressPingPong()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetSunRotationProgressPingPong");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetSunRotationProgress()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetSunRotationProgress");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetSunHorizonAngle()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetSunHorizonAngle");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMatrix UMFClimateTimeGeographyComponent::GetSceneToEclipticMatrix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetSceneToEclipticMatrix");
    struct
    {
        struct FMatrix ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateTimeGeographyComponent::GetNorthVector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetNorthVector");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateTimeGeographyComponent::GetMonthAndDay(int32_t& OutMonth, int32_t& OutDay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetMonthAndDay");
    struct
    {
        int32_t OutMonth;
        int32_t OutDay;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    OutMonth = Parms.OutMonth;
    OutDay = Parms.OutDay;
}

float UMFClimateTimeGeographyComponent::GetLongitude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetLongitude");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetLatitude()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetLatitude");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FMatrix UMFClimateTimeGeographyComponent::GetEclipticToSceneMatrix()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetEclipticToSceneMatrix");
    struct
    {
        struct FMatrix ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FVector2D UMFClimateTimeGeographyComponent::GetEastVector()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetEastVector");
    struct
    {
        struct FVector2D ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetEarthRadiusKM()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetEarthRadiusKM");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetEarthAxialTilt()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetEarthAxialTilt");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetAutoStepTimeRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetAutoStepTimeRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateTimeGeographyComponent::GetAutoStepTimeEditorRate()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetAutoStepTimeEditorRate");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFClimateTimeGeographyComponent::GetAutoStepTimeEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetAutoStepTimeEditor");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

bool UMFClimateTimeGeographyComponent::GetAutoStepTime()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "GetAutoStepTime");
    struct
    {
        bool ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateTimeGeographyComponent::CalculateEclipticToSceneMatrixAtTimeOfDay(float InTimeOfDay, float InYearPercent, struct FRotator& OutEarthToEclipticRotator, struct FMatrix& OutSceneToEarthMatrix, struct FMatrix& OutSceneToEclipticMatrix, struct FMatrix& OutEclipticToSceneMatrix)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTimeGeographyComponent", "CalculateEclipticToSceneMatrixAtTimeOfDay");
    struct
    {
        float InTimeOfDay;
        float InYearPercent;
        struct FRotator OutEarthToEclipticRotator;
        struct FMatrix OutSceneToEarthMatrix;
        struct FMatrix OutSceneToEclipticMatrix;
        struct FMatrix OutEclipticToSceneMatrix;
    } Parms{};
    Parms.InTimeOfDay = (float)InTimeOfDay;
    Parms.InYearPercent = (float)InYearPercent;
    this->ProcessEvent(Func, &Parms);
    OutEarthToEclipticRotator = Parms.OutEarthToEclipticRotator;
    OutSceneToEarthMatrix = Parms.OutSceneToEarthMatrix;
    OutSceneToEclipticMatrix = Parms.OutSceneToEclipticMatrix;
    OutEclipticToSceneMatrix = Parms.OutEclipticToSceneMatrix;
}

// UMFClimateTodIrcBase
struct FString UMFClimateTodIrcBase::GetOutputFileName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateTodIrcBase", "GetOutputFileName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFClimateUIBase
void UMFClimateUIBase::SetWeatherConditionWeight(int32_t Index, float Weight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "SetWeatherConditionWeight");
    struct
    {
        int32_t Index;
        float Weight;
    } Parms{};
    Parms.Index = (int32_t)Index;
    Parms.Weight = (float)Weight;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateUIBase::SetTimeOfDay(float TimeOfDay)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "SetTimeOfDay");
    struct
    {
        float TimeOfDay;
    } Parms{};
    Parms.TimeOfDay = (float)TimeOfDay;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateUIBase::OnTODChanged(const struct FText& NewTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "OnTODChanged");
    struct
    {
        struct FText NewTime;
    } Parms{};
    Parms.NewTime = (struct FText)NewTime;
    this->ProcessEvent(Func, &Parms);
}

float UMFClimateUIBase::GetWeatherConditionWeight(int32_t Index)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "GetWeatherConditionWeight");
    struct
    {
        int32_t Index;
        float ReturnValue;
    } Parms{};
    Parms.Index = (int32_t)Index;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFClimateUIBase::GetWeatherConditionName(int32_t SequenceIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "GetWeatherConditionName");
    struct
    {
        int32_t SequenceIndex;
        struct FString ReturnValue;
    } Parms{};
    Parms.SequenceIndex = (int32_t)SequenceIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FText UMFClimateUIBase::GetTODText(float InValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "GetTODText");
    struct
    {
        float InValue;
        struct FText ReturnValue;
    } Parms{};
    Parms.InValue = (float)InValue;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateUIBase::GetTimeOfDay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "GetTimeOfDay");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateWorldSubSystem* UMFClimateUIBase::GetMFClimateSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateUIBase", "GetMFClimateSystem");
    struct
    {
        struct UMFClimateWorldSubSystem* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFClimateVolumeCloudComponent
struct UTexture* UMFClimateVolumeCloudComponent::GetSDFCloudRaymarchResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateVolumeCloudComponent", "GetSDFCloudRaymarchResult");
    struct
    {
        struct UTexture* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTexture* UMFClimateVolumeCloudComponent::GetRaymarchResult()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateVolumeCloudComponent", "GetRaymarchResult");
    struct
    {
        struct UTexture* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UMFClimateWeatherComponent
void UMFClimateWeatherComponent::SetSequenceWeight(struct ULevelSequence* Sequence, float NewWeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherComponent", "SetSequenceWeight");
    struct
    {
        struct ULevelSequence* Sequence;
        float NewWeight;
    } Parms{};
    Parms.Sequence = (struct ULevelSequence*)Sequence;
    Parms.NewWeight = (float)NewWeight;
    this->ProcessEvent(Func, &Parms);
}

float UMFClimateWeatherComponent::GetSequenceCurrentWeight(struct ULevelSequence* Sequence)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherComponent", "GetSequenceCurrentWeight");
    struct
    {
        struct ULevelSequence* Sequence;
        float ReturnValue;
    } Parms{};
    Parms.Sequence = (struct ULevelSequence*)Sequence;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateWeatherComponent::EvaluateAndUpdateValuesImmediately()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherComponent", "EvaluateAndUpdateValuesImmediately");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateWeatherComponent::BlendInSequencesAndFadeOthers(struct TArray<struct ULevelSequence*> ToBlendIn, float MaxDelta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherComponent", "BlendInSequencesAndFadeOthers");
    struct
    {
        struct TArray<struct ULevelSequence*> ToBlendIn;
        float MaxDelta;
    } Parms{};
    Parms.ToBlendIn = (struct TArray<struct ULevelSequence*>)ToBlendIn;
    Parms.MaxDelta = (float)MaxDelta;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateWeatherComponent::AddSequenceWeight(struct ULevelSequence* Sequence, float Delta)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherComponent", "AddSequenceWeight");
    struct
    {
        struct ULevelSequence* Sequence;
        float Delta;
    } Parms{};
    Parms.Sequence = (struct ULevelSequence*)Sequence;
    Parms.Delta = (float)Delta;
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateWeatherLayerPresetsComponent
void UMFClimateWeatherLayerPresetsComponent::UpdateLayerWeights(bool bEvaluateImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "UpdateLayerWeights");
    struct
    {
        bool bEvaluateImmediately;
    } Parms{};
    Parms.bEvaluateImmediately = (bool)bEvaluateImmediately;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateWeatherLayerPresetsComponent::SetPresetWeights(const struct TArray<float>& weights, bool bEvaluateImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "SetPresetWeights");
    struct
    {
        struct TArray<float> weights;
        bool bEvaluateImmediately;
    } Parms{};
    Parms.weights = (struct TArray<float>)weights;
    Parms.bEvaluateImmediately = (bool)bEvaluateImmediately;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateWeatherLayerPresetsComponent::SetPresetWeightByName(struct FString PresetName, float NewWeight, bool bEvaluateImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "SetPresetWeightByName");
    struct
    {
        struct FString PresetName;
        float NewWeight;
        bool bEvaluateImmediately;
    } Parms{};
    Parms.PresetName = (struct FString)PresetName;
    Parms.NewWeight = (float)NewWeight;
    Parms.bEvaluateImmediately = (bool)bEvaluateImmediately;
    this->ProcessEvent(Func, &Parms);
}

void UMFClimateWeatherLayerPresetsComponent::SetPresetWeight(int32_t PresetID, float NewWeight, bool bEvaluateImmediately)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "SetPresetWeight");
    struct
    {
        int32_t PresetID;
        float NewWeight;
        bool bEvaluateImmediately;
    } Parms{};
    Parms.PresetID = (int32_t)PresetID;
    Parms.NewWeight = (float)NewWeight;
    Parms.bEvaluateImmediately = (bool)bEvaluateImmediately;
    this->ProcessEvent(Func, &Parms);
}

int32_t UMFClimateWeatherLayerPresetsComponent::SaveCurrentLayersAsPreset(int32_t PresetID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "SaveCurrentLayersAsPreset");
    struct
    {
        int32_t PresetID;
        int32_t ReturnValue;
    } Parms{};
    Parms.PresetID = (int32_t)PresetID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float UMFClimateWeatherLayerPresetsComponent::GetPresetWeight(int32_t PresetID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "GetPresetWeight");
    struct
    {
        int32_t PresetID;
        float ReturnValue;
    } Parms{};
    Parms.PresetID = (int32_t)PresetID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFClimateWeatherLayerPresetsComponent::GetPresetName(int32_t PresetID)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "GetPresetName");
    struct
    {
        int32_t PresetID;
        struct FString ReturnValue;
    } Parms{};
    Parms.PresetID = (int32_t)PresetID;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateWeatherLayerPresetsComponent::GetPresetIntTag(int32_t iPreset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "GetPresetIntTag");
    struct
    {
        int32_t iPreset;
        int32_t ReturnValue;
    } Parms{};
    Parms.iPreset = (int32_t)iPreset;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateWeatherLayerPresetsComponent::GetPresetCount()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "GetPresetCount");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct FString UMFClimateWeatherLayerPresetsComponent::GetMaxWeightPresetName()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "GetMaxWeightPresetName");
    struct
    {
        struct FString ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t UMFClimateWeatherLayerPresetsComponent::GetMaxWeightPresetIndex()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "GetMaxWeightPresetIndex");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UMFClimateWeatherLayerPresetsComponent::AddPresetWeight(int32_t PresetID, float DeltaWeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherLayerPresetsComponent", "AddPresetWeight");
    struct
    {
        int32_t PresetID;
        float DeltaWeight;
    } Parms{};
    Parms.PresetID = (int32_t)PresetID;
    Parms.DeltaWeight = (float)DeltaWeight;
    this->ProcessEvent(Func, &Parms);
}

// AMFClimateWeatherMapGenerator
void AMFClimateWeatherMapGenerator::SetGlobalCoverage(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherMapGenerator", "SetGlobalCoverage");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

void AMFClimateWeatherMapGenerator::SetGlobalCloudType(float NewValue)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWeatherMapGenerator", "SetGlobalCloudType");
    struct
    {
        float NewValue;
    } Parms{};
    Parms.NewValue = (float)NewValue;
    this->ProcessEvent(Func, &Parms);
}

// UMFClimateWorldSubSystem
struct UMFClimateGlobalWindComponent* UMFClimateWorldSubSystem::GetWindComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetWindComponent");
    struct
    {
        struct UMFClimateGlobalWindComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateWeatherLayerPresetsComponent* UMFClimateWorldSubSystem::GetWeatherLayerPresetComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetWeatherLayerPresetComponent");
    struct
    {
        struct UMFClimateWeatherLayerPresetsComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateWeatherComponent* UMFClimateWorldSubSystem::GetWeatherComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetWeatherComponent");
    struct
    {
        struct UMFClimateWeatherComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateVolumeCloudComponent* UMFClimateWorldSubSystem::GetVolumeCloud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetVolumeCloud");
    struct
    {
        struct UMFClimateVolumeCloudComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateTimeGeographyComponent* UMFClimateWorldSubSystem::GetTimeAndGeographyComponent()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetTimeAndGeographyComponent");
    struct
    {
        struct UMFClimateTimeGeographyComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateSceneLightInterfaceComponent* UMFClimateWorldSubSystem::GetSceneLightInterface()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetSceneLightInterface");
    struct
    {
        struct UMFClimateSceneLightInterfaceComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AMFClimateRain* UMFClimateWorldSubSystem::GetRain()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetRain");
    struct
    {
        struct AMFClimateRain* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UObject* UMFClimateWorldSubSystem::GetFeature(struct UObject* FeatureType, EMFClimateGetFeatureErrorMode ErrorMode)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetFeature");
    struct
    {
        struct UObject* FeatureType;
        enum EMFClimateGetFeatureErrorMode ErrorMode;
        struct UObject* ReturnValue;
    } Parms{};
    Parms.FeatureType = (struct UObject*)FeatureType;
    Parms.ErrorMode = (enum EMFClimateGetFeatureErrorMode)ErrorMode;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateSkyAtmosphereComponent* UMFClimateWorldSubSystem::GetClimateSkyAtmosphere()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetClimateSkyAtmosphere");
    struct
    {
        struct UMFClimateSkyAtmosphereComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UMFClimateCirrusCloud* UMFClimateWorldSubSystem::GetCirrusCloud()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("MFClimateWorldSubSystem", "GetCirrusCloud");
    struct
    {
        struct UMFClimateCirrusCloud* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
