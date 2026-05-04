#include "DFM.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UDFMGameInstance::* ----
void UDFMGameInstance::StartLocalDS(struct FString MapName, struct FString PlayerIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "StartLocalDS");
    struct
    {
        struct FString MapName;
        struct FString PlayerIds;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    Parms.PlayerIds = (struct FString)PlayerIds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::ShowLocalHostAddr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "ShowLocalHostAddr");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::ShowLocalDSPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "ShowLocalDSPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::ShowLocalDSAddr()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "ShowLocalDSAddr");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::SetCurrentAudioCulture(struct FString AudioCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "SetCurrentAudioCulture");
    struct
    {
        struct FString AudioCulture;
    } Parms{};
    Parms.AudioCulture = (struct FString)AudioCulture;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::RTS()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "RTS");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::ReciveFirstWorldBegunPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "ReciveFirstWorldBegunPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::OnStartGameInstance()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "OnStartGameInstance");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::OnExecStartLocalDS(struct FString MapName, const struct TArray<struct FString>& PlayerIds)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "OnExecStartLocalDS");
    struct
    {
        struct FString MapName;
        struct TArray<struct FString> PlayerIds;
    } Parms{};
    Parms.MapName = (struct FString)MapName;
    Parms.PlayerIds = (struct TArray<struct FString>)PlayerIds;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::OnExecShowLocalDSPanel()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "OnExecShowLocalDSPanel");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::OnExecJoinLocalDS(struct FString DSAddr, struct FString PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "OnExecJoinLocalDS");
    struct
    {
        struct FString DSAddr;
        struct FString PlayerId;
    } Parms{};
    Parms.DSAddr = (struct FString)DSAddr;
    Parms.PlayerId = (struct FString)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::LuaRuntimeDebug(int32_t bShow)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "LuaRuntimeDebug");
    struct
    {
        int32_t bShow;
    } Parms{};
    Parms.bShow = (int32_t)bShow;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::JoinLocalDS(struct FString DSAddr, struct FString PlayerId)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "JoinLocalDS");
    struct
    {
        struct FString DSAddr;
        struct FString PlayerId;
    } Parms{};
    Parms.DSAddr = (struct FString)DSAddr;
    Parms.PlayerId = (struct FString)PlayerId;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::EnableLuaPerformanceMode(uint8_t bEnabled)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "EnableLuaPerformanceMode");
    struct
    {
        uint8_t bEnabled;
    } Parms{};
    Parms.bEnabled = (uint8_t)bEnabled;
    this->ProcessEvent(Func, &Parms);
}

void UDFMGameInstance::CollectPGO()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("DFMGameInstance", "CollectPGO");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

// ---- UPOIHUDView::* ----
void UPOIHUDView::SetHudAndAutoHide(struct FString TextFirst, struct FString TextSecond)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("POIHUDView", "SetHudAndAutoHide");
    struct
    {
        struct FString TextFirst;
        struct FString TextSecond;
    } Parms{};
    Parms.TextFirst = (struct FString)TextFirst;
    Parms.TextSecond = (struct FString)TextSecond;
    this->ProcessEvent(Func, &Parms);
}

// ---- USlatePreDepthMeshComponent::* ----
uint8_t USlatePreDepthMeshComponent::SetMeshTriangles(const struct TArray<struct FSlatePreDepthMeshTriangle>& Triangles)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SlatePreDepthMeshComponent", "SetMeshTriangles");
    struct
    {
        struct TArray<struct FSlatePreDepthMeshTriangle> Triangles;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Triangles = (struct TArray<struct FSlatePreDepthMeshTriangle>)Triangles;
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void USlatePreDepthMeshComponent::ClearMeshTriangles()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("SlatePreDepthMeshComponent", "ClearMeshTriangles");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
