#include "GPEncryption.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// UGPEncryptionLibrary
void UGPEncryptionLibrary::SetEnableEncryptionBits(int64_t Bits)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("GPEncryptionLibrary", "SetEnableEncryptionBits");
    struct
    {
        int64_t Bits;
    } Parms{};
    Parms.Bits = (int64_t)Bits;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
