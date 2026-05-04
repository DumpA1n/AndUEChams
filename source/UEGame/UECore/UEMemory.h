#pragma once

#include <cstddef>
#include <cstdint>
#include <cstring>
#include <vector>

#include "ElfScanner/ElfScannerManager.h"
#include "Utils/KittyEx.h"

// =============================================================================
//  UEMemory.h
//
//  共享的 ARM64 解码 / IDA 模板扫描原语。等价
//  external/AndUEProber/external/AndUEDumper/AndUEDumper/src/UE/UEMemory.{hpp,cpp}
//  里的 UEMemory::Arm64 与 findIdaPattern。Profile 文件包含此头文件后即可
//  调用，自身不再重复 DecodeBL / DecodeADRL / 段扫描代码。
// =============================================================================

namespace SDK::Asm
{

struct IdaPattern { const char* pattern; int step; };

// BL: 100101 imm26
inline bool IsBL(uint32_t insn)            { return (insn & 0xFC000000) == 0x94000000; }
// ADD X0, SP, #imm12
inline bool IsAddX0Sp(uint32_t insn)       { return (insn & 0xFF0003FF) == 0x910003E0; }
// MOV W1, Wn  (= ORR W1, WZR, Wn)
inline bool IsMovW1FromReg(uint32_t insn)  { return (insn & 0xFFE0FFFF) == 0x2A0003E1; }

// 解码 BL #imm26 → 目标函数地址。非 BL 返回 0。
inline uintptr_t DecodeBL(uintptr_t bl_address)
{
    if (!bl_address) return 0;
    uint32_t insn = 0;
    if (!KT::Read(bl_address, &insn, sizeof(insn))) return 0;
    if (!IsBL(insn)) return 0;
    int32_t imm26 = insn & 0x03FFFFFF;
    if (imm26 & 0x02000000) imm26 |= (int32_t)0xFC000000;
    return bl_address + (int64_t)imm26 * 4;
}

// 解码 ADRP/ADR + 后续 8 条内同寄存器的 ADD/LDR 立即数 → 绝对地址。
inline uintptr_t DecodeADRL(uintptr_t adrp_address)
{
    if (!adrp_address) return 0;
    uint32_t adrp_insn = 0;
    if (!KT::Read(adrp_address, &adrp_insn, sizeof(adrp_insn))) return 0;
    if (adrp_insn == 0) return 0;

    KittyInsnArm64 adrp = KittyArm64::decodeInsn(adrp_insn, adrp_address);
    if (adrp.type != EKittyInsnTypeArm64::ADR &&
        adrp.type != EKittyInsnTypeArm64::ADRP)
        return 0;

    for (int i = 1; i < 8; ++i)
    {
        uint32_t imm_insn = 0;
        if (!KT::Read(adrp_address + i * 4, &imm_insn, sizeof(imm_insn))) return 0;
        KittyInsnArm64 imm = KittyArm64::decodeInsn(imm_insn);
        if (imm.isValid() && imm.immediate != 0 && adrp.rd == imm.rn)
        {
            return adrp.target + imm.immediate;
        }
    }
    return 0;
}

// 在 libUE4 R-X 段内按 IDA 模板扫首匹配并加上 step 偏移。
inline uintptr_t FindIdaInExecSegments(const char* pattern, int step)
{
    auto& elf = Elf.UE4();
    if (!elf.isValid()) return 0;
    for (const auto& seg : elf.segments())
    {
        if (!seg.readable || !seg.executable) continue;
        uintptr_t hit = KT::FindIdaPatternFirstFast(seg.startAddress, seg.endAddress, pattern);
        if (hit) return hit + step;
    }
    return 0;
}

// 走完一组模板，返回首条命中的 ADRL 解码结果。
template<size_t N>
inline uintptr_t ScanADRL(const IdaPattern (&pats)[N])
{
    for (const auto& p : pats)
    {
        uintptr_t adrl = DecodeADRL(FindIdaInExecSegments(p.pattern, p.step));
        if (adrl != 0 && KT::IsValid(adrl)) return adrl;
    }
    return 0;
}

// 走完一组模板，返回首条命中的 BL 解码结果。
template<size_t N>
inline uintptr_t ScanBL(const IdaPattern (&pats)[N])
{
    for (const auto& p : pats)
    {
        uintptr_t target = DecodeBL(FindIdaInExecSegments(p.pattern, p.step));
        if (target != 0 && KT::IsValid(target)) return target;
    }
    return 0;
}

// ── ARM64 指令位模板（更细粒度的 explicit 探针） ──────────────────────────────
//
// 用于不依赖 IDA 字节模板的"字符串锚 → 代码引用 → 函数序言回溯"流程。
// 配合 FindWideString / FindAdrpAddCodeRefs / BackwalkToPrologue 使用。

constexpr uint32_t kPacibsp = 0xD503237Fu;

inline bool IsAdrp(uint32_t i)         { return (i & 0x9F000000u) == 0x90000000u; }
inline bool IsAddImm12_64(uint32_t i)  { return (i & 0xFFC00000u) == 0x91000000u; }
inline bool IsStpFpLrSP(uint32_t i)    { return (i & 0xFFC07FFFu) == 0xA9007BFDu; } // STP X29,X30,[SP,#imm]
inline bool IsStpFpLrSP_Pre(uint32_t i){ return (i & 0xFFC07FFFu) == 0xA9807BFDu; } // STP X29,X30,[SP,#-N]!
inline bool IsSubSp_imm(uint32_t i)    { return (i & 0xFFC003FFu) == 0xD10003FFu; } // SUB SP,SP,#imm

// 当前 4 字节窗口看起来是否像 ARM64 函数 prologue 起始：
//   - PACIBSP
//   - STP X29, X30, [SP, #-N]!（pre-indexed write-back）
//   - SUB SP, SP, #imm 紧接 STP X29, X30, [SP, #imm]
inline bool IsPrologueAt(uint32_t cur, uint32_t next)
{
    if (cur == kPacibsp) return true;
    if (IsStpFpLrSP_Pre(cur)) return true;
    if (IsSubSp_imm(cur) && IsStpFpLrSP(next)) return true;
    return false;
}

// 解码相邻 ADRP + ADD imm12（64-bit）加载的目标地址。
// 与 DecodeADRL 不同，这里要求两条指令严格相邻且 Rd 链一致，便于在 .text 上线性扫描。
inline uintptr_t DecodeAdrpAddPair(uintptr_t pc, uint32_t i1, uint32_t i2)
{
    if (!IsAdrp(i1) || !IsAddImm12_64(i2)) return 0;
    const int rd1 = i1 & 0x1F;
    const int rn  = (i2 >> 5) & 0x1F;
    const int rd2 = i2 & 0x1F;
    if (rd1 != rn || rd1 != rd2) return 0;
    int64_t immlo = (i1 >> 29) & 0x3;
    int64_t immhi = (i1 >> 5) & 0x7FFFF;
    int64_t imm21 = (immhi << 2) | immlo;
    if (imm21 & (1LL << 20)) imm21 |= ~((1LL << 21) - 1);   // sign-extend 21-bit
    const uintptr_t page  = (pc & ~uintptr_t(0xFFF)) + uintptr_t(imm21 << 12);
    const uint32_t  imm12 = (i2 >> 10) & 0xFFF;
    return page + imm12;
}

// ── ELF 段扫描原语 ─────────────────────────────────────────────────────────

// 在所有 readable 段中查找 UTF-16 LE 字符串字面值的地址。
// Android 上 .rodata 常与 .text 合并在 r-x PT_LOAD 中，故不过滤 executable。
inline uintptr_t FindWideString(const ElfScanner& elf, const char16_t* lit)
{
    std::vector<uint8_t> needle;
    for (const char16_t* p = lit; *p; ++p) {
        needle.push_back(static_cast<uint8_t>( *p        & 0xFF));
        needle.push_back(static_cast<uint8_t>((*p >> 8)  & 0xFF));
    }
    needle.push_back(0); needle.push_back(0); // UTF-16 LE 终止符
    for (const auto& seg : elf.segments()) {
        if (!seg.readable) continue;
        if (uintptr_t hit = KT::FindDataFirstFast(
                seg.startAddress, seg.endAddress, needle.data(), needle.size())) {
            return hit;
        }
    }
    return 0;
}

struct AdrpRef { uintptr_t pc; uintptr_t segStart; };

// 扫所有 r-x 段，返回每个 ADRP+ADD 加载 target 的 PC（指向 ADRP）。
// 顺带产出该 PC 所在段的起始，便于后续在段内回溯。
inline std::vector<AdrpRef> FindAdrpAddCodeRefs(const ElfScanner& elf, uintptr_t target)
{
    std::vector<AdrpRef> refs;
    for (const auto& seg : elf.segments()) {
        if (!seg.readable || !seg.executable) continue;
        const uintptr_t s = seg.startAddress, e = seg.endAddress;
        if (e < s + 8) continue;
        for (uintptr_t pc = s; pc + 8 <= e; pc += 4) {
            uint32_t i1, i2;
            std::memcpy(&i1, reinterpret_cast<const void*>(pc),     sizeof(i1));
            std::memcpy(&i2, reinterpret_cast<const void*>(pc + 4), sizeof(i2));
            if (DecodeAdrpAddPair(pc, i1, i2) == target) {
                refs.push_back({pc, s});
            }
        }
    }
    return refs;
}

// 由 pc 向上找最近的 ARM64 函数 prologue 起始；只用 maxBack 限距。
// 不以 RET 作为停止条件 —— 函数体内常有早返回，多个 RET 是正常情形。
// 错配会被调用方的语义验证（如交叉字符串、vtable 槽位反查）滤除。
inline uintptr_t BackwalkToPrologue(uintptr_t pc, uintptr_t segStart, size_t maxBack)
{
    const uintptr_t lo = (pc > maxBack && pc - maxBack > segStart) ? (pc - maxBack) : segStart;
    uintptr_t cur = pc & ~uintptr_t(0x3);
    while (cur >= lo + 4) {
        cur -= 4;
        uint32_t insn = 0, next = 0;
        std::memcpy(&insn, reinterpret_cast<const void*>(cur),     sizeof(insn));
        std::memcpy(&next, reinterpret_cast<const void*>(cur + 4), sizeof(next));
        if (IsPrologueAt(insn, next)) return cur;
    }
    return 0;
}

// 扫所有 readable + !executable 段，返回每个"8 字节指针等于 target"的地址（vtable 槽位等）。
inline std::vector<uintptr_t> FindAllSlotsPointingTo(const ElfScanner& elf, uintptr_t target)
{
    std::vector<uintptr_t> slots;
    for (const auto& seg : elf.segments()) {
        if (!seg.readable || seg.executable) continue;
        uintptr_t cur = seg.startAddress;
        while (cur + sizeof(uintptr_t) <= seg.endAddress) {
            uintptr_t hit = KT::FindDataFirstFast(
                cur, seg.endAddress, &target, sizeof(target));
            if (!hit) break;
            slots.push_back(hit);
            cur = hit + sizeof(uintptr_t);
        }
    }
    return slots;
}

}  // namespace SDK::Asm

namespace SDK::NamePool
{

struct Layout
{
    uint32_t BlocksOff;        // chunk 指针数组距 NamePoolData 的字节偏移
    uint32_t BlocksBit;        // (id >> BlocksBit) = chunk index；剩余位 = within chunk
    uint32_t Stride;           // chunk 内每槽位的字节数（uint16_t header → 2，wide → 4）
    bool     CasePreserving;   // true: header >> 1 = length；false: header >> 6 = length
};

struct EntryView { const uint8_t* bytes; uint32_t length; };

inline EntryView ResolveEntry(uintptr_t namePool, int32_t id, const Layout& l)
{
    if (namePool == 0 || id < 0) return {nullptr, 0};

    const uintptr_t chunkMask  = (uintptr_t(1) << l.BlocksBit) - 1;
    const uintptr_t blockOff   = (uintptr_t(id) >> l.BlocksBit) * sizeof(void*);
    const uintptr_t withinOff  = (uintptr_t(id) & chunkMask) * l.Stride;

    uint64_t chunk = *reinterpret_cast<uint64_t*>(namePool + l.BlocksOff + blockOff);
    if (!chunk) return {nullptr, 0};

    auto* entry = reinterpret_cast<uint8_t*>(chunk + withinOff);
    uint16_t header = *reinterpret_cast<uint16_t*>(entry);
    uint32_t length = l.CasePreserving ? (header >> 1) : (header >> 6);
    if (length == 0) return {nullptr, 0};
    return { entry + sizeof(uint16_t), length };
}

}  // namespace SDK::NamePool
