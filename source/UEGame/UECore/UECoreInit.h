#pragma once

// =============================================================================
//  UECoreInit
//
//  入口很薄：在 Elf.UE4() 已扫描完毕、任何 SDK 访问 GObjects/FName 的代码
//  运行之前，调用一次 Init()。
//
//  内部按 ProfileRegistry::MatchCurrentProcess() 命中一个 IGameProfile
//  （DeltaForce / NiZhan / RocoKingdom / PUBG / …），由该 Profile 负责：
//      - FindGObjects()         → 解析 FUObjectArray.Objects 字段地址
//      - GetNameByID(id)        → FName 解析（DFM 走 NamePool + DecryptFName，
//                                  其余调引擎里的 GetPlainANSIString wrapper）
//      - InitTUObjectArray(...) → 用解析地址灌入 SDK::TUObjectArray
//
//  这与 external/AndUEProber/source/UEProber 的 DetectAndPrepareGame +
//  UEProber::DetectGame 两步流水等价；profile-per-game 的扩展方式照搬
//  AndUEProber/AndUEDumper 的 GameProfiles/*.hpp 体系。
//
//  多次调用幂等；返回 false 表示未匹配到 Profile 或解析失败。
// =============================================================================

namespace SDK::UECoreInit
{
    bool Init();
}
