#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020F3F8
// Address: 0x20f3f8 - 0x20f468
void sub_0020F3F8_0x20f3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F3F8_0x20f3f8");
#endif

    ctx->pc = 0x20f3f8u;

    // 0x20f3f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20f3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20f3fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20f3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f400: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x20f400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x20f404: 0x8c8a0048  lw          $t2, 0x48($a0)
    ctx->pc = 0x20f404u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20f408: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x20f408u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x20f40c: 0x8c880050  lw          $t0, 0x50($a0)
    ctx->pc = 0x20f40cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x20f410: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x20f410u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x20f414: 0xa4480004  sh          $t0, 0x4($v0)
    ctx->pc = 0x20f414u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x20f418: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x20f418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x20f41c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x20f41cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x20f420: 0xac4a000c  sw          $t2, 0xC($v0)
    ctx->pc = 0x20f420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 10));
    // 0x20f424: 0xa0470001  sb          $a3, 0x1($v0)
    ctx->pc = 0x20f424u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x20f428: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x20f428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x20f42c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x20f42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x20f430: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x20f430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x20f434: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x20f434u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x20f438: 0xd8530040  lqc2        $vf19, 0x40($v0)
    ctx->pc = 0x20f438u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20f43c: 0xd8500050  lqc2        $vf16, 0x50($v0)
    ctx->pc = 0x20f43cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20f440: 0xd8510060  lqc2        $vf17, 0x60($v0)
    ctx->pc = 0x20f440u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20f444: 0xd8520070  lqc2        $vf18, 0x70($v0)
    ctx->pc = 0x20f444u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x20f448: 0xd8790030  lqc2        $vf25, 0x30($v1)
    ctx->pc = 0x20f448u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x20f44c: 0xd8780040  lqc2        $vf24, 0x40($v1)
    ctx->pc = 0x20f44cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x20f450: 0xd8750050  lqc2        $vf21, 0x50($v1)
    ctx->pc = 0x20f450u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20f454: 0xd8760060  lqc2        $vf22, 0x60($v1)
    ctx->pc = 0x20f454u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x20f458: 0xd8770070  lqc2        $vf23, 0x70($v1)
    ctx->pc = 0x20f458u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x20f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20F464u;
    // 0x20f464: 0x0  nop
    ctx->pc = 0x20f464u;
    // NOP
}
