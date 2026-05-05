#include "WBP_LoadingView.hpp"
#include "UMG.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UWBP_LoadingView_C
void UWBP_LoadingView_C::IsPC()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "IsPC");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

ESlateVisibility UWBP_LoadingView_C::GetVisibility_1()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "GetVisibility_1");
    struct
    {
        enum ESlateVisibility ReturnValue;
    } Parms{};
    this->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

void UWBP_LoadingView_C::OnLoaded_5DE1524C41D54E4D21FC39BF55283609(struct UObject* Loaded)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "OnLoaded_5DE1524C41D54E4D21FC39BF55283609");
    struct
    {
        struct UObject* Loaded;
    } Parms{};
    Parms.Loaded = (struct UObject*)Loaded;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::PreConstruct(uint8_t IsDesignTime)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "PreConstruct");
    struct
    {
        uint8_t IsDesignTime;
    } Parms{};
    Parms.IsDesignTime = (uint8_t)IsDesignTime;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::Construct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "Construct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::OnPercentageAnimUpdated(float NewPercent)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "OnPercentageAnimUpdated");
    struct
    {
        float NewPercent;
    } Parms{};
    Parms.NewPercent = (float)NewPercent;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::BP_UpdateCampImage(int32_t InCampType)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "BP_UpdateCampImage");
    struct
    {
        int32_t InCampType;
    } Parms{};
    Parms.InCampType = (int32_t)InCampType;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::Destruct()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "Destruct");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::__e_I_0(struct FString NewCulture)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "ê~e¤I_0");
    struct
    {
        struct FString NewCulture;
    } Parms{};
    Parms.NewCulture = (struct FString)NewCulture;
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::BP_UpdateMapAnimation()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "BP_UpdateMapAnimation");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::BP_OnLoadingViewPrepared_Impl()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "BP_OnLoadingViewPrepared_Impl");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void UWBP_LoadingView_C::ExecuteUbergraph_WBP_LoadingView(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("WBP_LoadingView_C", "ExecuteUbergraph_WBP_LoadingView");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
