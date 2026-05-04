#pragma once

#include <jni.h>

// ---------------------------------------------------------------------------
// JniRuntime —— JavaVM / JNIEnv 访问层
//
// 通过 ELF 扫描 libart.so 的 JNI_GetCreatedJavaVMs 获得 VM，避免依赖
// JNI_OnLoad 时被传入的 JavaVM*（注入早期不一定能拿到）。
// GetJavaEnv 不主动 attach 当前线程；需要跨线程 JNI 操作的调用方应自行
// AttachCurrentThread/DetachCurrentThread。
// ---------------------------------------------------------------------------
namespace AndroidPlatform
{

JavaVM* GetJavaVM();

// 当前线程的 JNIEnv*；线程未 attach 时返回 nullptr。
JNIEnv* GetJavaEnv();

}
