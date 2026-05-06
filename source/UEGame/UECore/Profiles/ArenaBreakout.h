#pragma once

#include <cstdint>
#include <string>
#include <vector>

#include "Logger.h"

#include "UEGame/UECore/IGameProfile.h"
#include "UEGame/UECore/UEMemory.h"

namespace SDK::Profiles
{

// Arena Breakout (CN, com.tencent.mf.uam) —— UE 4.25-27.
// FNamePool 走的是引擎内部 GetPlainANSIString，避开自定义 NamePool 编码。
class ArenaBreakoutProfile final : public IGameProfile
{
    // TUObjectArray —— GUObjectArray 引用 ADRP/ADD 锚点。
    static constexpr Asm::IdaPattern kTUObjectArrayPatterns[] = {
        {"91 E1 03 ? AA E0 03 08 AA E2 03 1F 2A", -7},
        {"B4 21 0C 40 B9 ? ? ? ? ? ? ? 91", 5},
        {"9F E5 00 ? 00 E3 FF ? 40 E3 ? ? A0 E1", -2},
        {"96 df 02 17 ? ? ? ? 54 ? ? ? ? ? ? ? 91 e1 03 13 aa", 9},
        {"f4 03 01 2a ? 00 00 34 ? ? ? ? ? ? ? ? ? ? 00 54 ? 00 00 14 ? ? ? ? ? ? ? 91", 0x18},
        {"69 3e 40 b9 1f 01 09 6b ? ? ? 54 e1 03 13 aa ? ? ? ? f4 4f ? a9 ? ? ? ? ? ? ? 91", 0x18},
    };

    // GetPlainANSIString —— JNI 桥接里通过 "<init>" 把 FName 转成 Java String 时调用的内部函数。
    // 寄存器分配（X19/X20）随构建变化，所以模板用通配符锚定固定指令字节：
    //   STR X0,[Xn,#8]       ? 06 00 F9   (Xn = X19/X20)
    //   LDR X8,[Xm]          ? 02 40 F9   (Xm = X19/X20)
    //   MOV X0,Xn            E0 03 ? AA   (Xn = X19/X20)
    //   MOV X1,X0            E1 03 00 AA
    //   LDR X8,[X8,#0x108]   08 85 40 F9
    //   MOV X3,X21           E3 03 15 AA
    //   BLR X8               00 01 3F D6
    static constexpr Asm::IdaPattern kGetPlainANSIStringPatterns[] = {
        // P1: BL target → ADD → BL → STR [Xn,#8] → LDR [Xm] → ADRP → MOV X1,X0 → ADD → LDR [X8,#0x108]
        {"? ? ? 94 ? ? ? 91 ? ? ? 94 ? 06 00 F9 ? 02 40 F9 ? ? ? ? E1 03 00 AA ? ? ? 91 08 85 40 F9", 0},
        // P2: BL(1st) → MOV X{19/20},X0 → <2 insns> → BL target → ADD → BL → STR [Xn,#8]
        {"? ? ? 94 ? 03 00 AA ? ? ? ? ? ? ? ? ? ? ? 94 ? ? ? 91 ? ? ? 94 ? 06 00 F9", 0x10},
        // P3: STR → LDR → ADRP → MOV X1,X0 → ADD → LDR [X8,#0x108] → MOV X0,Xn
        {"? 06 00 F9 ? 02 40 F9 ? ? ? ? E1 03 00 AA ? ? ? 91 08 85 40 F9 E0 03 ? AA", -0xC},
        // P4: MOV X1,X0 → ADD → LDR [X8,#0x108] → MOV X0,Xn → MOV X3,X21 → BLR X8
        {"E1 03 00 AA ? ? ? 91 08 85 40 F9 E0 03 ? AA E3 03 15 AA 00 01 3F D6", -0x18},
    };

    static uintptr_t FindGetPlainANSIString()
    {
        static uintptr_t cached = 0;
        if (cached) return cached;
        cached = Asm::ScanBL(kGetPlainANSIStringPatterns);
        if (cached)
            FLOGI("[Profile/UAM] GetPlainANSIString=+0x{:X}", cached - Elf.UE4().base());
        return cached;
    }

public:
    const char* AppName() const override { return "Arena Breakout"; }
    std::vector<const char*> AppIDs() const override
    {
        return { "com.tencent.mf.uam" };
    }

    uintptr_t FindTUObjectArray() const override
    {
        return Asm::ScanADRL(kTUObjectArrayPatterns);
    }

    // FUObjectArray.ObjObjects=0x10 + TUObjectArray.Objects=0x10
    uintptr_t ObjectsFieldOffset() const override { return 0x20; }

    std::string GetNameByID(int32_t id) const override
    {
        using GetPlainANSIString_t = void (*)(const int32_t*, char*);

        uintptr_t funcAddr = FindGetPlainANSIString();
        if (!funcAddr) return {};

        char buf[1024] = {0};
        reinterpret_cast<GetPlainANSIString_t>(funcAddr)(&id, buf);
        return std::string(buf);
    }

    int32_t NumElementsPerChunk() const override { return 0x10000; }
};

}  // namespace SDK::Profiles
