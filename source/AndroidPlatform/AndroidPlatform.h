#pragma once

// ---------------------------------------------------------------------------
// AndroidPlatform —— host 进程平台访问汇总头
//
//   - JniRuntime.h          : GetJavaVM / GetJavaEnv
//   - ActivityHost.h        : GetActivity （Java Activity GlobalRef）
//   - NativeWindowProvider.h: GetNativeWindow （ANativeWindow*）
//   - DisplayInfo.h         : GetDisplaySize （物理屏幕尺寸）
// ---------------------------------------------------------------------------

#include "JniRuntime.h"
#include "ActivityHost.h"
#include "NativeWindowProvider.h"
#include "DisplayInfo.h"
