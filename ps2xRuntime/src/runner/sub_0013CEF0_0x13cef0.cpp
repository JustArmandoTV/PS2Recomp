#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013CEF0
// Address: 0x13cef0 - 0x13cfd0
void sub_0013CEF0_0x13cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CEF0_0x13cef0");
#endif

    switch (ctx->pc) {
        case 0x13cf44u: goto label_13cf44;
        default: break;
    }

    ctx->pc = 0x13cef0u;

    // 0x13cef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13cef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13cefc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cefcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf00: 0x440a6000  mfc1        $t2, $f12
    ctx->pc = 0x13cf00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
    // 0x13cf04: 0x440b6800  mfc1        $t3, $f13
    ctx->pc = 0x13cf04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[13], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x13cf08: 0x440c7000  mfc1        $t4, $f14
    ctx->pc = 0x13cf08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[14], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x13cf0c: 0x48aa1000  qmtc2.ni    $t2, $vf2
    ctx->pc = 0x13cf0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x13cf10: 0x716a5488  pextlw      $t2, $t3, $t2
    ctx->pc = 0x13cf10u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x13cf14: 0x48ab1800  qmtc2.ni    $t3, $vf3
    ctx->pc = 0x13cf14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x13cf18: 0x718a5389  pcpyld      $t2, $t4, $t2
    ctx->pc = 0x13cf18u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 12), GPR_VEC(ctx, 10)));
    // 0x13cf1c: 0x48ac2000  qmtc2.ni    $t4, $vf4
    ctx->pc = 0x13cf1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 12));
    // 0x13cf20: 0x48aa0800  qmtc2.ni    $t2, $vf1
    ctx->pc = 0x13cf20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x13cf24: 0x4b0212be  vmula.x     $ACC, $vf2, $vf2
    ctx->pc = 0x13cf24u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]);
    // 0x13cf28: 0x4b031abd  vmadda.x    $ACC, $vf3, $vf3
    ctx->pc = 0x13cf28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x13cf2c: 0x4b0420a9  vmadd.x     $vf2, $vf4, $vf4
    ctx->pc = 0x13cf2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cf30: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x13cf30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13cf34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13cf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cf38: 0x27a5002c  addiu       $a1, $sp, 0x2C
    ctx->pc = 0x13cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x13cf3c: 0xc04ceb0  jal         func_133AC0
    ctx->pc = 0x13CF3Cu;
    SET_GPR_U32(ctx, 31, 0x13CF44u);
    ctx->pc = 0x13CF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13CF3Cu;
            // 0x13cf40: 0x27a60028  addiu       $a2, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AC0u;
    if (runtime->hasFunction(0x133AC0u)) {
        auto targetFn = runtime->lookupFunction(0x133AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF44u; }
        if (ctx->pc != 0x13CF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133AC0_0x133ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13CF44u; }
        if (ctx->pc != 0x13CF44u) { return; }
    }
    ctx->pc = 0x13CF44u;
label_13cf44:
    // 0x13cf44: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x13cf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x13cf48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x13cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13cf4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x13cf4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13cf50: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x13cf50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13cf54: 0x70645488  pextlw      $t2, $v1, $a0
    ctx->pc = 0x13cf54u;
    SET_GPR_VEC(ctx, 10, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x13cf58: 0x48aa1800  qmtc2.ni    $t2, $vf3
    ctx->pc = 0x13cf58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x13cf5c: 0x4a2300c5  vsuby.w     $vf3, $vf0, $vf3y
    ctx->pc = 0x13cf5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13cf60: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x13cf60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cf64: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x13cf64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cf68: 0x4be0022c  vsub.xyzw   $vf8, $vf0, $vf0
    ctx->pc = 0x13cf68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cf6c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x13cf6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13cf70: 0x4bc3095b  vmulw.xyz   $vf5, $vf1, $vf3w
    ctx->pc = 0x13cf70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13cf74: 0x4b030181  vaddy.x     $vf6, $vf0, $vf3y
    ctx->pc = 0x13cf74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cf78: 0x4a840182  vaddz.y     $vf6, $vf0, $vf4z
    ctx->pc = 0x13cf78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cf7c: 0x4a440185  vsuby.z     $vf6, $vf0, $vf4y
    ctx->pc = 0x13cf7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13cf80: 0x4b0401c6  vsubz.x     $vf7, $vf0, $vf4z
    ctx->pc = 0x13cf80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cf84: 0x4a8301c1  vaddy.y     $vf7, $vf0, $vf3y
    ctx->pc = 0x13cf84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cf88: 0x4a4401c0  vaddx.z     $vf7, $vf0, $vf4x
    ctx->pc = 0x13cf88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13cf8c: 0x4b040201  vaddy.x     $vf8, $vf0, $vf4y
    ctx->pc = 0x13cf8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cf90: 0x4a840204  vsubx.y     $vf8, $vf0, $vf4x
    ctx->pc = 0x13cf90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cf94: 0x4a430201  vaddy.z     $vf8, $vf0, $vf3y
    ctx->pc = 0x13cf94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13cf98: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x13cf98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x13cf9c: 0x4bc0318b  vmaddw.xyz  $vf6, $vf6, $vf0w
    ctx->pc = 0x13cf9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cfa0: 0x4bc129bd  vmulay.xyz  $ACC, $vf5, $vf1y
    ctx->pc = 0x13cfa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x13cfa4: 0x4bc039cb  vmaddw.xyz  $vf7, $vf7, $vf0w
    ctx->pc = 0x13cfa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cfa8: 0x4bc129be  vmulaz.xyz  $ACC, $vf5, $vf1z
    ctx->pc = 0x13cfa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = res; }
    // 0x13cfac: 0x4bc0420b  vmaddw.xyz  $vf8, $vf8, $vf0w
    ctx->pc = 0x13cfacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x13cfb0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x13cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13cfb4: 0xfa060000  sqc2        $vf6, 0x0($s0)
    ctx->pc = 0x13cfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13cfb8: 0xfa070010  sqc2        $vf7, 0x10($s0)
    ctx->pc = 0x13cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13cfbc: 0xfa080020  sqc2        $vf8, 0x20($s0)
    ctx->pc = 0x13cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x13cfc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13cfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cfc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13cfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x13CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13CFC8u;
            // 0x13cfcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13CFD0u;
}
