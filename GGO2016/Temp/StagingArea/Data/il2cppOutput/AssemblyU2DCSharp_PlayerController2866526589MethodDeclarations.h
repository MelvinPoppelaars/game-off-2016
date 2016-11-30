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

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::.cctor()
extern "C"  void PlayerController__cctor_m327629231 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MoveLeft(System.Single,System.Single)
extern "C"  void PlayerController_MoveLeft_m3123590098 (PlayerController_t2866526589 * __this, float ___Min0, float ___Plus1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::MoveRight(System.Single)
extern "C"  void PlayerController_MoveRight_m1262022052 (PlayerController_t2866526589 * __this, float ___Plus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Jump(System.Single)
extern "C"  void PlayerController_Jump_m4076374455 (PlayerController_t2866526589 * __this, float ___jumpForce0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::die()
extern "C"  void PlayerController_die_m1688550972 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Footsteps(UnityEngine.AudioClip)
extern "C"  void PlayerController_Footsteps_m1849111086 (PlayerController_t2866526589 * __this, AudioClip_t794140988 * ___Clip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m632467240 (PlayerController_t2866526589 * __this, Collision2D_t2859305914 * ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::DamagePlayer(System.Single)
extern "C"  void PlayerController_DamagePlayer_m1612139381 (PlayerController_t2866526589 * __this, float ___damage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::CurrentHealth(System.Single)
extern "C"  void PlayerController_CurrentHealth_m1865901434 (PlayerController_t2866526589 * __this, float ___currentHealth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::ResetVelocity()
extern "C"  void PlayerController_ResetVelocity_m2337308712 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SwitchDirection()
extern "C"  void PlayerController_SwitchDirection_m3546686727 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
