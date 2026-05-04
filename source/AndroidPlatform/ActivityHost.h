#pragma once

#include <jni.h>

// ---------------------------------------------------------------------------
// ActivityHost —— host 进程 Activity 句柄
//
// 通过反射 ActivityThread.mActivities 在进程内查找一个 android.app.Activity
// （任何子类都接受：NativeActivity / UnityPlayerActivity / GodotActivity / FlutterActivity / 普通 Activity）。
// 一旦找到，NewGlobalRef 缓存到进程结束。
// ---------------------------------------------------------------------------
namespace AndroidPlatform
{

// 返回 host 进程中一个 Activity 的 GlobalRef。
// - 缓存命中时直接返回（O(1)）
// - 未缓存时尝试反射；找不到返回 nullptr（调用方可在轮询循环里重试）
// - 线程未 attach 时内部短暂 attach 再 detach；返回值跨线程可用
jobject GetActivity();

}
