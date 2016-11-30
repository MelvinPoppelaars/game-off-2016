#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EventManager
struct EventManager_t1907836883;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_EventManager_States3739906014.h"

// System.Void EventManager::.ctor()
extern "C"  void EventManager__ctor_m3403204648 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::.cctor()
extern "C"  void EventManager__cctor_m1938032773 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Awake()
extern "C"  void EventManager_Awake_m3640809867 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Start()
extern "C"  void EventManager_Start_m2350342440 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::Update()
extern "C"  void EventManager_Update_m4146991077 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::addOnTimer(System.Single)
extern "C"  void EventManager_addOnTimer_m3690139658 (EventManager_t1907836883 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::SwitchState()
extern "C"  void EventManager_SwitchState_m2669029379 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EventManager::BgColorSwap()
extern "C"  Il2CppObject * EventManager_BgColorSwap_m2467587791 (EventManager_t1907836883 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventManager::ChangeState(EventManager/States)
extern "C"  void EventManager_ChangeState_m2959805293 (EventManager_t1907836883 * __this, int32_t ___newState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
