#pragma once

#include <cstring>
#include <string>

#include "Logger.h"

#include "UEGame/UECore/IGameProfile.h"
#include "UEGame/UECore/UEMemory.h"

namespace SDK::Profiles
{

class DeltaForceProfile final : public IGameProfile
{
    static constexpr NamePool::Layout kNamePoolLayout = {
        /*BlocksOff=*/0x38,
        /*BlocksBit=*/18,
        /*Stride=*/2,
        /*CasePreserving=*/false,
    };

    // TUObjectArray
    static constexpr Asm::IdaPattern kTUObjectArrayPatterns[] = {
        {"? 00 A0 52 ? 00 A0 52 ? ? ? 1A ? ? ? 1B ? ? ? ? ? ? ? 91", 0x10},
        {"68 22 40 39 ? ? ? 34 ? ? ? ? ? ? ? 91 E1 03 13 AA 7F 22 00 39", 0x8},
        {"91 E1 03 ? AA E0 03 08 AA E2 03 1F 2A", -7},
        {"B4 21 0C 40 B9 ? ? ? ? ? ? ? 91", 5},
        {"96 df 02 17 ? ? ? ? 54 ? ? ? ? ? ? ? 91 e1 03 13 aa", 9},
        {"f4 03 01 2a ? 00 00 34 ? ? ? ? ? ? ? ? ? ? 00 54 ? 00 00 14 ? ? ? ? ? ? ? 91", 0x18},
        {"69 3e 40 b9 1f 01 09 6b ? ? ? 54 e1 03 13 aa ? ? ? ? f4 4f ? a9 ? ? ? ? ? ? ? 91", 0x18},
    };

    // FNamePool 基址（NamePoolData）—— 模板直接匹配内联走法本身，
    static constexpr Asm::IdaPattern kNamePoolDataPatterns[] = {
        {"C8 ? ? D0 08 ? ? 91 ? ? ? 39 ? ? ? 36 C9 7E 52 D3 E0 E3 03 91 03 80 80 52 FB E3 03 91 08 0D 09 8B C9 46 7F D3 08 1D 40 F9", 0},
        {"C9 7E 52 D3 E0 E3 03 91 03 80 80 52 FB E3 03 91 08 0D 09 8B C9 46 7F D3 08 1D 40 F9 01 01 09 8B 28 24 40 78 16 FD 46 D3 E2 03 16 AA", -0x10},
        {"03 80 80 52 FB E3 03 91 08 0D 09 8B C9 46 7F D3 08 1D 40 F9 01 01 09 8B 28 24 40 78 16 FD 46 D3 E2 03 16 AA", -0x18},
    };

    // DecryptFName(char*, uint32_t) 入口 —— 模板锚定内联走法尾部那条
    static constexpr Asm::IdaPattern kDecryptFNamePatterns[] = {
        {"? FD 46 D3 E2 03 ? AA ? ? ? ? E0 E3 03 91 E1 03 ? 2A ? ? ? ?", 0x14},
        {"E2 03 ? AA ? ? ? ? E0 E3 03 91 E1 03 ? 2A ? ? ? ?", 0x10},
        {"? ? ? ? E0 E3 03 91 E1 03 ? 2A ? ? ? ? E0 E3 03 91 ? ? ? 38", 0xC},
        {"E0 E3 03 91 E1 03 ? 2A ? ? ? ? E0 E3 03 91 ? ? ? 38 ? ? ? ? ? 06 00 F9 E1 03 00 AA", 0x8},
    };

    static uintptr_t FindNamePoolData()
    {
        static uintptr_t cached = 0;
        if (cached) return cached;
        cached = Asm::ScanADRL(kNamePoolDataPatterns);
        if (cached)
            FLOGI("[Profile/DFM] NamePool=+0x{:X}", cached - Elf.UE4().base());
        return cached;
    }

    static uintptr_t FindDecryptFName()
    {
        static uintptr_t cached = 0;
        if (cached) return cached;
        cached = Asm::ScanBL(kDecryptFNamePatterns);
        if (cached)
            FLOGI("[Profile/DFM] DecryptFName=+0x{:X}", cached - Elf.UE4().base());
        return cached;
    }

public:
    const char* AppName() const override { return "Delta Force"; }
    std::vector<const char*> AppIDs() const override
    {
        return { "com.proxima.dfm", "com.garena.game.df", "com.tencent.tmgp.dfm" };
    }

    uintptr_t FindTUObjectArray() const override
    {
        return Asm::ScanADRL(kTUObjectArrayPatterns);
    }

    // FUObjectArray.ObjObjects=0x10 + TUObjectArray.Objects=0x10
    uintptr_t ObjectsFieldOffset() const override { return 0x20; }

    std::string GetNameByID(int32_t id) const override
    {
        auto entry = NamePool::ResolveEntry(FindNamePoolData(), id, kNamePoolLayout);
        if (!entry.bytes || entry.length == 0) return {};

        char buf[1024] = {0};
        uint32_t len = entry.length > sizeof(buf) ? sizeof(buf) : entry.length;
        std::memcpy(buf, entry.bytes, len);

        if (uintptr_t decryptFn = FindDecryptFName())
            reinterpret_cast<void(*)(char*, uint32_t)>(decryptFn)(buf, len);
        return std::string(buf, len);
    }

    int32_t NumElementsPerChunk() const override { return 0x10000; }
};

}  // namespace SDK::Profiles
