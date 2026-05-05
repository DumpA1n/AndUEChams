#include "BP_MainGameFlow.hpp"
#include "BP_GFStage_PostLaunch.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UBP_MainGameFlow_C
void UBP_MainGameFlow_C::ReturnLoginOrExitClient()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "ReturnLoginOrExitClient");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::GetPostLaunchStatic(struct UBP_GFStage_PostLaunch_C*& FirstLaunchSettingStatic)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "GetPostLaunchStatic");
    struct
    {
        struct UBP_GFStage_PostLaunch_C* FirstLaunchSettingStatic;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    FirstLaunchSettingStatic = Parms.FirstLaunchSettingStatic;
}

void UBP_MainGameFlow_C::DelayRestartSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "DelayRestartSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::DelayCallLuaStartUp()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "DelayCallLuaStartUp");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_A3DB635342BA86FCB016AABB27FD96A5(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_A3DB635342BA86FCB016AABB27FD96A5");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_922505DC4BE8EA0529A1F9B196D3B620(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_922505DC4BE8EA0529A1F9B196D3B620");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_44A1E04E4BAC3A9971016CAB99C4BA25(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_44A1E04E4BAC3A9971016CAB99C4BA25");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_A4A7B5A946B81C36894DF78B8F4DE29A(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_A4A7B5A946B81C36894DF78B8F4DE29A");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_5E0C206143B7C756E07EEE8E16C2B70B(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_5E0C206143B7C756E07EEE8E16C2B70B");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_2313D290474D25AE6EE9E5A4489D3367(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_2313D290474D25AE6EE9E5A4489D3367");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_AA4082F249CB11D532B4F18FDB02FB35(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_AA4082F249CB11D532B4F18FDB02FB35");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_9DB0EB9F4693537E7CA876A47E085C82(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_9DB0EB9F4693537E7CA876A47E085C82");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_752274E44D547CFF2CAA57A3EEA74ADD(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_752274E44D547CFF2CAA57A3EEA74ADD");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_5BCEF6244212BA53A66B50B28F2DEC6C(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_5BCEF6244212BA53A66B50B28F2DEC6C");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_5E1CC66545A3E971F4DF518E5F2354B3(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_5E1CC66545A3E971F4DF518E5F2354B3");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_5C0A57314D3A94E1347F1EB6B02A4EFD(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_5C0A57314D3A94E1347F1EB6B02A4EFD");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_DBFD083E43F3AB81D913BF8B5C980F22(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_DBFD083E43F3AB81D913BF8B5C980F22");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_43AD9AA14675912FA0B0D191FC5383CE(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_43AD9AA14675912FA0B0D191FC5383CE");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_582D077541EF0AD58D03C8AC8EE293D2(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_582D077541EF0AD58D03C8AC8EE293D2");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_2D5363CC47BA739327985BA37949CB90(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_2D5363CC47BA739327985BA37949CB90");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_D74C3AFC4E81D93B6197F495E9E806B6(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_D74C3AFC4E81D93B6197F495E9E806B6");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_ACC292E24F21F1FA48E68B97DFC6CF6C(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_ACC292E24F21F1FA48E68B97DFC6CF6C");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_83ED24B846F31D2BB8CE13B5D31DE5C3(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_83ED24B846F31D2BB8CE13B5D31DE5C3");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_5BF6B44942819C1BE56E438B335652DA(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_5BF6B44942819C1BE56E438B335652DA");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_393F850C4CEB9B3C4FAF24807032FAA8(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_393F850C4CEB9B3C4FAF24807032FAA8");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_3ABBEF074672F4C7A7FEBCABE5163146(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_3ABBEF074672F4C7A7FEBCABE5163146");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_2DFDDCEF48CC9A05E5D5EBB327A03FFF(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_2DFDDCEF48CC9A05E5D5EBB327A03FFF");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_744EEDFF4311102B67C87AA2EF555A1D(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_744EEDFF4311102B67C87AA2EF555A1D");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_D818FFFB4F877D8F3314C78F8FEF590A(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_D818FFFB4F877D8F3314C78F8FEF590A");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_6970672342CCF6D4943CEEA3DE35D905(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_6970672342CCF6D4943CEEA3DE35D905");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_E4877C954A65F50111CA7D8FCC803D87(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_E4877C954A65F50111CA7D8FCC803D87");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_D576133E49464978D5D14AA187972545(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_D576133E49464978D5D14AA187972545");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_E0D07E2D429F278EA98FA585728EAE4E(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_E0D07E2D429F278EA98FA585728EAE4E");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_8DABFE5F42547280797C38B7A65702C7(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_8DABFE5F42547280797C38B7A65702C7");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_6EBF91794979BA94893BB0B33262D2FD(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_6EBF91794979BA94893BB0B33262D2FD");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnFlowBranch_2097C1A9427B4D7DE2DC8392D5E5D709(struct FString FlowBranch)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnFlowBranch_2097C1A9427B4D7DE2DC8392D5E5D709");
    struct
    {
        struct FString FlowBranch;
    } Parms{};
    Parms.FlowBranch = (struct FString)FlowBranch;
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::RestartSystem()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "RestartSystem");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnLoadingFailed2Login()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnLoadingFailed2Login");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::OnBeginFlow()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "OnBeginFlow");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UBP_MainGameFlow_C::ExecuteUbergraph_BP_MainGameFlow(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("BP_MainGameFlow_C", "ExecuteUbergraph_BP_MainGameFlow");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
