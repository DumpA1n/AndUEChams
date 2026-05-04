#include "AnimationDataTableImportTool.hpp"
#include "Engine.hpp"
#include <cstring> // memcpy for ArrayDim>1 param marshalling

namespace SDK
{

// ---- UAnimationImport::* ----
void UAnimationImport::ImportDataTable(struct UDataTable* Source, struct UDataTable* Destination, struct FString Prefix, struct FDirectoryPath ProjectPath, struct FDirectoryPath ChangeLogPath)
{
    static struct UFunction* Func = nullptr;
    if (!Func) Func = StaticClass()->GetFunction("AnimationImport", "ImportDataTable");
    struct
    {
        struct UDataTable* Source;
        struct UDataTable* Destination;
        struct FString Prefix;
        struct FDirectoryPath ProjectPath;
        struct FDirectoryPath ChangeLogPath;
    } Parms{};
    Parms.Source = (struct UDataTable*)Source;
    Parms.Destination = (struct UDataTable*)Destination;
    Parms.Prefix = (struct FString)Prefix;
    Parms.ProjectPath = (struct FDirectoryPath)ProjectPath;
    Parms.ChangeLogPath = (struct FDirectoryPath)ChangeLogPath;
    GetDefaultObj()->ProcessEvent(Func, &Parms);
}

} // namespace SDK
