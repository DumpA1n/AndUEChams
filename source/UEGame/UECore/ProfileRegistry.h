#pragma once

#include <vector>

#include "IGameProfile.h"

// =============================================================================
//  ProfileRegistry
//
//  保存全部已知 IGameProfile 单例，并按 getprogname() 与各 Profile 的 AppIDs
//  做精确匹配，等价 external/AndUEProber/source/UEProber/DumperBridge.cpp
//  DetectAndPrepareGame() 中的 profile 命中逻辑。
// =============================================================================

namespace SDK::Profiles
{

// 当前进程名匹配到的 Profile，未匹配返回 nullptr。
IGameProfile* MatchCurrentProcess();

// 调试用：列出所有注册的 Profile。
const std::vector<IGameProfile*>& GetAll();

}  // namespace SDK::Profiles
