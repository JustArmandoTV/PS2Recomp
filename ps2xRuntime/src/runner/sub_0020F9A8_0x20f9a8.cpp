#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F9A8
// Address: 0x20f9a8 - 0x20f9e0
void sub_0020F9A8_0x20f9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F9A8_0x20f9a8");
#endif

    ctx->pc = 0x20f9a8u;

    // 0x20f9a8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x20f9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x20f9ac: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x20f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20f9b0: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x20f9b0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20f9b4: 0xd8530040  lqc2        $vf19, 0x40($v0)
    ctx->pc = 0x20f9b4u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20f9b8: 0xd8500050  lqc2        $vf16, 0x50($v0)
    ctx->pc = 0x20f9b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f9bc: 0xd8510060  lqc2        $vf17, 0x60($v0)
    ctx->pc = 0x20f9bcu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20f9c0: 0xd8520070  lqc2        $vf18, 0x70($v0)
    ctx->pc = 0x20f9c0u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x20f9c4: 0xd8790030  lqc2        $vf25, 0x30($v1)
    ctx->pc = 0x20f9c4u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20f9c8: 0xd8780040  lqc2        $vf24, 0x40($v1)
    ctx->pc = 0x20f9c8u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x20f9cc: 0xd8750050  lqc2        $vf21, 0x50($v1)
    ctx->pc = 0x20f9ccu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20f9d0: 0xd8760060  lqc2        $vf22, 0x60($v1)
    ctx->pc = 0x20f9d0u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x20f9d4: 0xd8770070  lqc2        $vf23, 0x70($v1)
    ctx->pc = 0x20f9d4u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x20f9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x20F9D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F9E0u;
}
