#include "RegexInBP.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- URegexBPLibrary::* ----
struct TArray<struct FRegexExtendedResult> URegexBPLibrary::MatchExtended(struct FString Pattern, struct FString Input)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RegexBPLibrary", "MatchExtended");
    struct
    {
        struct FString Pattern;
        struct FString Input;
        struct TArray<struct FRegexExtendedResult> ReturnValue;
    } Parms{};
    Parms.Pattern = (struct FString)Pattern;
    Parms.Input = (struct FString)Input;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

struct TArray<struct FString> URegexBPLibrary::Match(struct FString Pattern, struct FString Input)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RegexBPLibrary", "Match");
    struct
    {
        struct FString Pattern;
        struct FString Input;
        struct TArray<struct FString> ReturnValue;
    } Parms{};
    Parms.Pattern = (struct FString)Pattern;
    Parms.Input = (struct FString)Input;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

uint8_t URegexBPLibrary::CanMatch(struct FString Pattern, struct FString Input)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("RegexBPLibrary", "CanMatch");
    struct
    {
        struct FString Pattern;
        struct FString Input;
        uint8_t ReturnValue;
    } Parms{};
    Parms.Pattern = (struct FString)Pattern;
    Parms.Input = (struct FString)Input;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
    return Parms.ReturnValue;
}

} // namespace SDK
