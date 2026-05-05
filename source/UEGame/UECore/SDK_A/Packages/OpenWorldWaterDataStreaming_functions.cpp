#include "OpenWorldWaterDataStreaming.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// AOpenWorldWaterActor
void AOpenWorldWaterActor::UpdateWaterEffect_NetMulticast()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "UpdateWaterEffect_NetMulticast");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AOpenWorldWaterActor::UpdateWaterEffect_EditorClientToServer()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "UpdateWaterEffect_EditorClientToServer");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void AOpenWorldWaterActor::UpdateWaterEffect_EditorClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "UpdateWaterEffect_EditorClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t AOpenWorldWaterActor::UpdateWaterEffect(float DeltaTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "UpdateWaterEffect");
    struct
    {
        float DeltaTime;
        uint8_t ReturnValue;
    } Parms{};
    Parms.DeltaTime = (float)DeltaTime;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AOpenWorldWaterActor::PreviewUnderWaterEffect()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "PreviewUnderWaterEffect");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AOpenWorldWaterWaveGenerator* AOpenWorldWaterActor::GetWaterWaveGenerator()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "GetWaterWaveGenerator");
    struct
    {
        struct AOpenWorldWaterWaveGenerator* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UWorld* AOpenWorldWaterActor::GetPlayableWorld()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "GetPlayableWorld");
    struct
    {
        struct UWorld* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AExponentialHeightFog* AOpenWorldWaterActor::GetFogActor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "GetFogActor");
    struct
    {
        struct AExponentialHeightFog* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AActor* AOpenWorldWaterActor::GetBiomeManager()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "GetBiomeManager");
    struct
    {
        struct AActor* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void AOpenWorldWaterActor::GenerateBPExp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterActor", "GenerateBPExp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// AOpenWorldWaterBody
struct TArray<struct AOpenWorldWaterBodyExclusionVolume*> AOpenWorldWaterBody::GetExclusionVolumes()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterBody", "GetExclusionVolumes");
    struct
    {
        struct TArray<struct AOpenWorldWaterBodyExclusionVolume*> ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AOpenWorldWaterInteractiveWaterManager
float AOpenWorldWaterInteractiveWaterManager::GetSimulationTravelSpeed()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetSimulationTravelSpeed");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AOpenWorldWaterInteractiveWaterManager::GetSimulationRenderTargetWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetSimulationRenderTargetWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* AOpenWorldWaterInteractiveWaterManager::GetSimulationPreviousRenderTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetSimulationPreviousRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* AOpenWorldWaterInteractiveWaterManager::GetSimulationPrePreviousRenderTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetSimulationPrePreviousRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AOpenWorldWaterInteractiveWaterManager::GetSimulationDampening()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetSimulationDampening");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* AOpenWorldWaterInteractiveWaterManager::GetSimulationCurrentRenderTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetSimulationCurrentRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AOpenWorldWaterInteractiveWaterManager::GetNormalRenderTargetWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetNormalRenderTargetWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AOpenWorldWaterInteractiveWaterManager::GetInteractiveRenderTargetWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetInteractiveRenderTargetWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* AOpenWorldWaterInteractiveWaterManager::GetInteractiveRenderTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetInteractiveRenderTarget");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AOpenWorldWaterInteractiveWaterManager::GetCaptureRangeWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetCaptureRangeWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float AOpenWorldWaterInteractiveWaterManager::GetCaptureRangeFactor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetCaptureRangeFactor");
    struct
    {
        float ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

int32_t AOpenWorldWaterInteractiveWaterManager::GetCaptureRangeBaseWidth()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterInteractiveWaterManager", "GetCaptureRangeBaseWidth");
    struct
    {
        int32_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// UOpenWorldWaterSubsystem
uint8_t UOpenWorldWaterSubsystem::SampleWaterData(struct UObject* ContextObject, const struct FVector& WorldLocation, struct FOpenWorldSampledWaterData& SampledData, const struct FOpenWorldSampledWaterParameter& Parameter)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "SampleWaterData");
    struct
    {
        struct UObject* ContextObject;
        struct FVector WorldLocation;
        struct FOpenWorldSampledWaterData SampledData;
        struct FOpenWorldSampledWaterParameter Parameter;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    Parms.WorldLocation = (struct FVector)WorldLocation;
    Parms.Parameter = (struct FOpenWorldSampledWaterParameter)Parameter;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SampledData = Parms.SampledData;
    return Parms.ReturnValue;
}

void UOpenWorldWaterSubsystem::OpenWorldWaterInteractiveRenderTargetChanged__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterSubsystem", "OpenWorldWaterInteractiveRenderTargetChanged__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UOpenWorldWaterSubsystem::OpenWorldWaterInteractiveEnableChanged__DelegateSignature()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterSubsystem", "OpenWorldWaterInteractiveEnableChanged__DelegateSignature");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldWaterSubsystem::IsEnableWaterDataHeight()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterSubsystem", "IsEnableWaterDataHeight");
    struct
    {
        uint8_t ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AOpenWorldWaterInteractiveWaterManager* UOpenWorldWaterSubsystem::GetInteractiveWaterManager(struct UObject* ContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "GetInteractiveWaterManager");
    struct
    {
        struct UObject* ContextObject;
        struct AOpenWorldWaterInteractiveWaterManager* ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldWaterSubsystem::GetInteractiveWaterEnabled(struct UObject* ContextObject)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "GetInteractiveWaterEnabled");
    struct
    {
        struct UObject* ContextObject;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldWaterSubsystem::GetInteractiveSimulationParam(struct UObject* ContextObject, float& SimulationTravelSpeed, float& SimulationDampening)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "GetInteractiveSimulationParam");
    struct
    {
        struct UObject* ContextObject;
        float SimulationTravelSpeed;
        float SimulationDampening;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    SimulationTravelSpeed = Parms.SimulationTravelSpeed;
    SimulationDampening = Parms.SimulationDampening;
    return Parms.ReturnValue;
}

uint8_t UOpenWorldWaterSubsystem::GetInteractiveRTWidth(struct UObject* ContextObject, int32_t& InteractiveRTWidth, int32_t& SimulationRTWidth, int32_t& NormalRTWidth)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "GetInteractiveRTWidth");
    struct
    {
        struct UObject* ContextObject;
        int32_t InteractiveRTWidth;
        int32_t SimulationRTWidth;
        int32_t NormalRTWidth;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    InteractiveRTWidth = Parms.InteractiveRTWidth;
    SimulationRTWidth = Parms.SimulationRTWidth;
    NormalRTWidth = Parms.NormalRTWidth;
    return Parms.ReturnValue;
}

struct UOpenWorldWaterSubsystem* UOpenWorldWaterSubsystem::GetCurrentWaterSubsystem(struct UWorld* World)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "GetCurrentWaterSubsystem");
    struct
    {
        struct UWorld* World;
        struct UOpenWorldWaterSubsystem* ReturnValue;
    } Parms{};
    Parms.World = (struct UWorld*)World;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t UOpenWorldWaterSubsystem::GetClosestDistanceToWater(struct UObject* ContextObject, const struct FVector& WorldLocation, float& ClosestDistance)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "GetClosestDistanceToWater");
    struct
    {
        struct UObject* ContextObject;
        struct FVector WorldLocation;
        float ClosestDistance;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    Parms.WorldLocation = (struct FVector)WorldLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ClosestDistance = Parms.ClosestDistance;
    return Parms.ReturnValue;
}

void UOpenWorldWaterSubsystem::FreeInteractiveWaterComponent(struct UObject* ContextObject, struct UOpenWorldWaterInteractiveWaterComponent* InInteractiveWaterComponent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "FreeInteractiveWaterComponent");
    struct
    {
        struct UObject* ContextObject;
        struct UOpenWorldWaterInteractiveWaterComponent* InInteractiveWaterComponent;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    Parms.InInteractiveWaterComponent = (struct UOpenWorldWaterInteractiveWaterComponent*)InInteractiveWaterComponent;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

uint8_t UOpenWorldWaterSubsystem::FindClosestPointOfWater(struct UObject* ContextObject, const struct FVector& WorldLocation, struct FVector& ClosestPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "FindClosestPointOfWater");
    struct
    {
        struct UObject* ContextObject;
        struct FVector WorldLocation;
        struct FVector ClosestPoint;
        uint8_t ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    Parms.WorldLocation = (struct FVector)WorldLocation;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    ClosestPoint = Parms.ClosestPoint;
    return Parms.ReturnValue;
}

void UOpenWorldWaterSubsystem::EnableWaterDataHeight(uint8_t bEnable)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterSubsystem", "EnableWaterDataHeight");
    struct
    {
        uint8_t bEnable;
    } Parms{};
    Parms.bEnable = (uint8_t)bEnable;
    this->ProcessEvent(Func, &Parms);
}

struct UOpenWorldWaterInteractiveWaterComponent* UOpenWorldWaterSubsystem::AllocateInteractiveWaterComponent(struct UObject* ContextObject, struct AActor* InActor)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("OpenWorldWaterSubsystem", "AllocateInteractiveWaterComponent");
    struct
    {
        struct UObject* ContextObject;
        struct AActor* InActor;
        struct UOpenWorldWaterInteractiveWaterComponent* ReturnValue;
    } Parms{};
    Parms.ContextObject = (struct UObject*)ContextObject;
    Parms.InActor = (struct AActor*)InActor;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// AOpenWorldWaterVolume
void AOpenWorldWaterVolume::SetDynamicWaterHeightOffset(float NewDynamicWaterHeightOffset)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterVolume", "SetDynamicWaterHeightOffset");
    struct
    {
        float NewDynamicWaterHeightOffset;
    } Parms{};
    Parms.NewDynamicWaterHeightOffset = (float)NewDynamicWaterHeightOffset;
    this->ProcessEvent(Func, &Parms);
}

void AOpenWorldWaterVolume::SetDynamicWaterHeight(float NewHeight)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterVolume", "SetDynamicWaterHeight");
    struct
    {
        float NewHeight;
    } Parms{};
    Parms.NewHeight = (float)NewHeight;
    this->ProcessEvent(Func, &Parms);
}

// AOpenWorldWaterWaveGenerator
void AOpenWorldWaterWaveGenerator::ForBlueprintDebugging()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("OpenWorldWaterWaveGenerator", "ForBlueprintDebugging");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
