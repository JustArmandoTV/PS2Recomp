#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00212998
// Address: 0x212998 - 0x2129e0
void sub_00212998_0x212998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212998_0x212998");
#endif

    ctx->pc = 0x212998u;

    // 0x212998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x212998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21299c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21299cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2129a0: 0x0  nop
    ctx->pc = 0x2129a0u;
    // NOP
    // 0x2129a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2129a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2129a8: 0xd8bb0000  lqc2        $vf27, 0x0($a1)
    ctx->pc = 0x2129a8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2129ac: 0xd89d0000  lqc2        $vf29, 0x0($a0)
    ctx->pc = 0x2129acu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2129b0: 0x48a2e000  qmtc2.ni    $v0, $vf28
    ctx->pc = 0x2129b0u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2129b4: 0x4a004078  vcallms     0x808
    ctx->pc = 0x2129b4u;
    {     ctx->vu0_tpc = 0x808;     runtime->executeVU0Microprogram(rdram, ctx, 0x808); }
    // 0x2129b8: 0xcca00040  pref        0x00, 0x40($a1)
    ctx->pc = 0x2129b8u;
    // PREF instruction (ignored)
    // 0x2129bc: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2129bcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2129c0: 0xf8fd0000  sqc2        $vf29, 0x0($a3)
    ctx->pc = 0x2129c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2129c4: 0xf8fe0010  sqc2        $vf30, 0x10($a3)
    ctx->pc = 0x2129c4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2129c8: 0xf8ff0020  sqc2        $vf31, 0x20($a3)
    ctx->pc = 0x2129c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x2129cc: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x2129ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2129d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2129D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2129D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129D0u;
            // 0x2129d4: 0xe5000000  swc1        $f0, 0x0($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2129D8u;
    // 0x2129d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2129D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2129DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2129D8u;
            // 0x2129dc: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2129E0u;
}
