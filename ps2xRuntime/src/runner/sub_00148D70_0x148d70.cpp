#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00148D70
// Address: 0x148d70 - 0x148db0
void sub_00148D70_0x148d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148D70_0x148d70");
#endif

    ctx->pc = 0x148d70u;

label_148d70:
    // 0x148d70: 0x48a96800  qmtc2.ni    $t1, $vf13
    ctx->pc = 0x148d70u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x148d74: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x148d74u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148d78: 0xd8ab0000  lqc2        $vf11, 0x0($a1)
    ctx->pc = 0x148d78u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148d7c: 0xd8cc0000  lqc2        $vf12, 0x0($a2)
    ctx->pc = 0x148d7cu;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148d80: 0x4bcb632c  vsub.xyz    $vf12, $vf12, $vf11
    ctx->pc = 0x148d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[12], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148d84: 0x4bcd6318  vmulx.xyz   $vf12, $vf12, $vf13x
    ctx->pc = 0x148d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148d88: 0x4bcc52a8  vadd.xyz    $vf10, $vf10, $vf12
    ctx->pc = 0x148d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148d8c: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x148d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x148d90: 0x882020  add         $a0, $a0, $t0
    ctx->pc = 0x148d90u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x148d94: 0xa82820  add         $a1, $a1, $t0
    ctx->pc = 0x148d94u;
    {     int32_t rs_val = GPR_S32(ctx, 5);     int32_t rt_val = GPR_S32(ctx, 8);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x148d98: 0x20c60010  addi        $a2, $a2, 0x10
    ctx->pc = 0x148d98u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x148d9c: 0x20e7ffff  addi        $a3, $a3, -0x1
    ctx->pc = 0x148d9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 7), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x148da0: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x148DA0u;
    {
        const bool branch_taken_0x148da0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x148da0) {
            ctx->pc = 0x148D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148d70;
        }
    }
    ctx->pc = 0x148DA8u;
    // 0x148da8: 0x3e00008  jr          $ra
    ctx->pc = 0x148DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148DB0u;
}
