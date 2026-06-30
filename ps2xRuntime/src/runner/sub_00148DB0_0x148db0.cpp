#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00148DB0
// Address: 0x148db0 - 0x148df0
void sub_00148DB0_0x148db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148DB0_0x148db0");
#endif

    ctx->pc = 0x148db0u;

label_148db0:
    // 0x148db0: 0x48a86800  qmtc2.ni    $t0, $vf13
    ctx->pc = 0x148db0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x148db4: 0xd88a0000  lqc2        $vf10, 0x0($a0)
    ctx->pc = 0x148db4u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x148db8: 0xd8ac0000  lqc2        $vf12, 0x0($a1)
    ctx->pc = 0x148db8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x148dbc: 0x4bcd6318  vmulx.xyz   $vf12, $vf12, $vf13x
    ctx->pc = 0x148dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x148dc0: 0x4bcc52a8  vadd.xyz    $vf10, $vf10, $vf12
    ctx->pc = 0x148dc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x148dc4: 0xf88a0000  sqc2        $vf10, 0x0($a0)
    ctx->pc = 0x148dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x148dc8: 0x872020  add         $a0, $a0, $a3
    ctx->pc = 0x148dc8u;
    {     int32_t rs_val = GPR_S32(ctx, 4);     int32_t rt_val = GPR_S32(ctx, 7);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x148dcc: 0x20a50010  addi        $a1, $a1, 0x10
    ctx->pc = 0x148dccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 5), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x148dd0: 0x20c6ffff  addi        $a2, $a2, -0x1
    ctx->pc = 0x148dd0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 6), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x148dd4: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x148DD4u;
    {
        const bool branch_taken_0x148dd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x148dd4) {
            ctx->pc = 0x148DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_148db0;
        }
    }
    ctx->pc = 0x148DDCu;
    // 0x148ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x148DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x148DE4u;
    // 0x148de4: 0x0  nop
    ctx->pc = 0x148de4u;
    // NOP
    // 0x148de8: 0x0  nop
    ctx->pc = 0x148de8u;
    // NOP
    // 0x148dec: 0x0  nop
    ctx->pc = 0x148decu;
    // NOP
}
