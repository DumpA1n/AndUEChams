#include "UECoreInit.h"

#include "Basic.h"
#include "CoreUObject_classes.h"
#include "IGameProfile.h"
#include "ProfileRegistry.h"

#include "ElfScanner/ElfScannerManager.h"
#include "Logger.h"
#include "Utils/KittyEx.h"

// =============================================================================
//  UECoreInit
//
//  入口很薄：在 Elf.UE4() 已扫描完毕、任何 SDK 访问 GObjects/FName 的代码
//  运行之前，调用一次 Init()。
//
//  内部按 ProfileRegistry::MatchCurrentProcess() 命中一个 IGameProfile，
//  由该 Profile 提供：
//      - FindGObjects()          → 解析 FUObjectArray.Objects 字段地址
//      - GetNameByID(id)         → FName 解析
//      - NumElementsPerChunk()   → chunk 大小（0 = flat）
//
//  TUObjectArray 的灌装（MaxElements / NumElements / *Chunks）集中在这里
//  用 DFM 实测的安全上限填，与 AndUEProber DumperBridge.cpp 中
//  DetectGame() 末段的逻辑一致。
// =============================================================================

namespace SDK::UECoreInit
{

bool Init()
{
    static bool s_done = false;
    if (s_done) return true;

    auto& elf = Elf.UE4();
    if (!elf.isValid())
    {
        FLOGE("[UECoreInit] libUE4 not yet scanned");
        return false;
    }

    SDK::InSDKUtils::s_ImageBase = elf.base();

    auto* profile = SDK::Profiles::MatchCurrentProcess();
    if (!profile)
    {
        FLOGE("[UECoreInit] no IGameProfile matched the current process");
        return false;
    }

    uintptr_t arrayAddr = profile->FindTUObjectArray();
    if (!arrayAddr)
    {
        FLOGE("[UECoreInit] {}: FindTUObjectArray() returned 0", profile->AppName());
        return false;
    }

    SDK::FName::s_NameResolver = [profile](int32_t id) {
        return profile->GetNameByID(id);
    };

    const int32_t   chunk       = profile->NumElementsPerChunk();
    const uintptr_t objectsAddr = arrayAddr + profile->ObjectsFieldOffset();
    auto* arr = new SDK::TUObjectArray();
    arr->Objects = nullptr;
    if (!KT::Read(objectsAddr, &arr->Objects, sizeof(void*)) || !arr->Objects)
    {
        FLOGE("[UECoreInit] {}: failed to read Objects ptr at 0x{:X}",
              profile->AppName(), objectsAddr);
        delete arr;
        return false;
    }
    arr->NumElementsPerChunk = chunk;
    arr->MaxElements = 327680;
    arr->NumElements = 327680;
    arr->MaxChunks   = chunk > 0 ? 5 : 0;
    arr->NumChunks   = chunk > 0 ? 5 : 0;
    SDK::UObject::GObjects.InitManually(arr);

    FLOGI("[UECoreInit] {}: TUObjectArray=+0x{:X} chunkSize={}",
          profile->AppName(), arrayAddr - elf.base(), chunk);

    s_done = true;
    return true;
}

}  // namespace SDK::UECoreInit
