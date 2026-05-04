#include "Login.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- ALogin_C::* ----
void ALogin_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Login_C", "ReceiveEndPlay");
    struct
    {
        enum EEndPlayReason EndPlayReason;
    } Parms{};
    Parms.EndPlayReason = (enum EEndPlayReason)EndPlayReason;
    this->ProcessEvent(Func, &Parms);
}

void ALogin_C::ReceiveBeginPlay()
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Login_C", "ReceiveBeginPlay");
    struct
    {
    } Parms{};
    this->ProcessEvent(Func, &Parms);
}

void ALogin_C::ExecuteUbergraph_Login(int32_t EntryPoint)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = ClassPrivate->GetFunction("Login_C", "ExecuteUbergraph_Login");
    struct
    {
        int32_t EntryPoint;
    } Parms{};
    Parms.EntryPoint = (int32_t)EntryPoint;
    this->ProcessEvent(Func, &Parms);
}

} // namespace SDK
