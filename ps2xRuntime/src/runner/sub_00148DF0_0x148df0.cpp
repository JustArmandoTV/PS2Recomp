#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00148DF0
// Address: 0x148df0 - 0x148e60
void sub_00148DF0_0x148df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148DF0_0x148df0");
#endif

    switch (ctx->pc) {
        case 0x148df8u: goto label_148df8;
        default: break;
    }

    ctx->pc = 0x148df0u;

    // 0x148df0: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x148df0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148df4: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x148df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_148df8:
    // 0x148df8: 0x48a36800  qmtc2.ni    $v1, $vf13
    ctx->pc = 0x148df8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x148dfc: 0xd94e0000  lqc2        $vf14, 0x0($t2)
    ctx->pc = 0x148dfcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x148e00: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x148e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148e04: 0x70084e88  pextlb      $t1, $zero, $t0
    ctx->pc = 0x148e04u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLB(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x148e08: 0x70094d88  pextlh      $t1, $zero, $t1
    ctx->pc = 0x148e08u;
    SET_GPR_VEC(ctx, 9, PS2_PEXTLH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x148e0c: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x148e0cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148e10: 0xd8ab0000  lqc2        $vf11, 0x0($a1)
    ctx->pc = 0x148e10u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148e14: 0x48a96000  qmtc2.ni    $t1, $vf12
    ctx->pc = 0x148e14u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x148e18: 0x4bea513c  vitof0.xyzw $vf10, $vf10
    ctx->pc = 0x148e18u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[10]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148e1c: 0x4beb593c  vitof0.xyzw $vf11, $vf11
    ctx->pc = 0x148e1cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[11]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x148e20: 0x4bec613c  vitof0.xyzw $vf12, $vf12
    ctx->pc = 0x148e20u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[12]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(1.0f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148e24: 0x4beb632c  vsub.xyzw   $vf12, $vf12, $vf11
    ctx->pc = 0x148e24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148e28: 0x4bed6318  vmulx.xyzw  $vf12, $vf12, $vf13x
    ctx->pc = 0x148e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148e2c: 0x4bec52a8  vadd.xyzw   $vf10, $vf10, $vf12
    ctx->pc = 0x148e2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148e30: 0x4be05290  vmaxx.xyzw  $vf10, $vf10, $vf0x
    ctx->pc = 0x148e30u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148e34: 0x4bea72af  vmini.xyzw  $vf10, $vf14, $vf10
    ctx->pc = 0x148e34u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[14], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148e38: 0x4bea517c  vftoi0.xyzw $vf10, $vf10
    ctx->pc = 0x148e38u;
    { __m128 src = ctx->vu0_vf[10]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148e3c: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x148e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x148e40: 0x8b2020  add         $a0, $a0, $t3
    ctx->pc = 0x148e40u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x148e44: 0xab2820  add         $a1, $a1, $t3
    ctx->pc = 0x148e44u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 11);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x148e48: 0x20c60004  addi        $a2, $a2, 0x4
    ctx->pc = 0x148e48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x148e4c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x148e4cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x148e50: 0x14e0ffe9  bnez        $a3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x148E50u;
    {
        const bool branch_taken_0x148e50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x148e50) {
            ctx->pc = 0x148DF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148df8;
        }
    }
    ctx->pc = 0x148E58u;
    // 0x148e58: 0x3e00008  jr          $ra
    ctx->pc = 0x148E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148E60u;
}
