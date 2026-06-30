#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F1D50
// Address: 0x2f1d50 - 0x2f1d80
void sub_002F1D50_0x2f1d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D50_0x2f1d50");
#endif

    ctx->pc = 0x2f1d50u;

    // 0x2f1d50: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x2f1d50u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f1d54: 0xac85001c  sw          $a1, 0x1C($a0)
    ctx->pc = 0x2f1d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x2f1d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f1d5c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2f1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2f1d60: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2f1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2f1d64: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f1d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f1d68: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x2f1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x2f1d6c: 0xac8a0014  sw          $t2, 0x14($a0)
    ctx->pc = 0x2f1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 10));
    // 0x2f1d70: 0xac8b0018  sw          $t3, 0x18($a0)
    ctx->pc = 0x2f1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 11));
    // 0x2f1d74: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x2f1d74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f1d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F1D78u;
            // 0x2f1d7c: 0xa0800020  sb          $zero, 0x20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F1D80u;
}
