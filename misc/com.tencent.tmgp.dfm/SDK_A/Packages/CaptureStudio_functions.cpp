#include "CaptureStudio.hpp"
#include "Engine.hpp"
#include "Hall.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ACaptureEnv::* ----
void ACaptureEnv::WeaponLoadComplete()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "WeaponLoadComplete");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACaptureEnv::UpdateCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "UpdateCapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACaptureEnv::StopCapture()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "StopCapture");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct AHallCharacter* ACaptureEnv::SpawnCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "SpawnCharacter");
    struct
    {
        struct AHallCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ACaptureEnv::ShowSkylight(uint8_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "ShowSkylight");
    struct
    {
        uint8_t bShow;
    } Parms{};
    Parms.bShow = (uint8_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void ACaptureEnv::SetCharartorRefreshLighParam(int32_t DataIndex, float Value)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "SetCharartorRefreshLighParam");
    struct
    {
        int32_t DataIndex;
        float Value;
    } Parms{};
    Parms.DataIndex = (int32_t)DataIndex;
    Parms.Value = (float)Value;
    this->ProcessEvent(Func, &Parms);
}

void ACaptureEnv::ResizeTarget(int32_t SizeX, int32_t SizeY)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "ResizeTarget");
    struct
    {
        int32_t SizeX;
        int32_t SizeY;
    } Parms{};
    Parms.SizeX = (int32_t)SizeX;
    Parms.SizeY = (int32_t)SizeY;
    this->ProcessEvent(Func, &Parms);
}

struct USceneComponent* ACaptureEnv::GetRootPoint()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "GetRootPoint");
    struct
    {
        struct USceneComponent* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ACaptureEnv::GetCharartorRefreshLighParam(int32_t DataIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "GetCharartorRefreshLighParam");
    struct
    {
        int32_t DataIndex;
        float ReturnValue;
    } Parms{};
    Parms.DataIndex = (int32_t)DataIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

float ACaptureEnv::GetCharacterMaterialParameter(int32_t DataIndex)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "GetCharacterMaterialParameter");
    struct
    {
        int32_t DataIndex;
        float ReturnValue;
    } Parms{};
    Parms.DataIndex = (int32_t)DataIndex;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct AHallCharacter* ACaptureEnv::GetCharacter()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "GetCharacter");
    struct
    {
        struct AHallCharacter* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* ACaptureEnv::GetCaptureRT()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "GetCaptureRT");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void ACaptureEnv::Clear()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "Clear");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACaptureEnv::CheckShouldResizeTarget()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "CheckShouldResizeTarget");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ACaptureEnv::CharacterSetup()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "CharacterSetup");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

struct UTextureRenderTarget2D* ACaptureEnv::CaptureInEditor()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "CaptureInEditor");
    struct
    {
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UTextureRenderTarget2D* ACaptureEnv::Capture(uint8_t bCaptureEveryFrame)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureEnv", "Capture");
    struct
    {
        uint8_t bCaptureEveryFrame;
        struct UTextureRenderTarget2D* ReturnValue;
    } Parms{};
    Parms.bCaptureEveryFrame = (uint8_t)bCaptureEveryFrame;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

// ---- UCaptureStudioManager::* ----
void UCaptureStudioManager::LoadCaptureEnv(struct FString CaptureEnvPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureStudioManager", "LoadCaptureEnv");
    struct
    {
        struct FString CaptureEnvPath;
    } Parms{};
    Parms.CaptureEnvPath = (struct FString)CaptureEnvPath;
    this->ProcessEvent(Func, &Parms);
}

struct ACaptureEnv* UCaptureStudioManager::GetCaptureEnv()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("CaptureStudioManager", "GetCaptureEnv");
    struct
    {
        struct ACaptureEnv* ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct UCaptureStudioManager* UCaptureStudioManager::Get(struct UObject* WorldContext)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("CaptureStudioManager", "Get");
    struct
    {
        struct UObject* WorldContext;
        struct UCaptureStudioManager* ReturnValue;
    } Parms{};
    Parms.WorldContext = (struct UObject*)WorldContext;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
