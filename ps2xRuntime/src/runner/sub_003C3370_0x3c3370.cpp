#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3370
// Address: 0x3c3370 - 0x3c33a0
void sub_003C3370_0x3c3370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3370_0x3c3370");
#endif

    ctx->pc = 0x3c3370u;

    // 0x3c3370: 0xc4810120  lwc1        $f1, 0x120($a0)
    ctx->pc = 0x3c3370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c3374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3c3374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3c3378: 0x0  nop
    ctx->pc = 0x3c3378u;
    // NOP
    // 0x3c337c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3c337cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c3380: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C3380u;
    {
        const bool branch_taken_0x3c3380 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C3384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3380u;
            // 0x3c3384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c3380) {
            ctx->pc = 0x3C338Cu;
            goto label_3c338c;
        }
    }
    ctx->pc = 0x3C3388u;
    // 0x3c3388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c3388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c338c:
    // 0x3c338c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C338Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3394u;
    // 0x3c3394: 0x0  nop
    ctx->pc = 0x3c3394u;
    // NOP
    // 0x3c3398: 0x0  nop
    ctx->pc = 0x3c3398u;
    // NOP
    // 0x3c339c: 0x0  nop
    ctx->pc = 0x3c339cu;
    // NOP
}
