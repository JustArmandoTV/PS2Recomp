#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF610
// Address: 0x1bf610 - 0x1bf658
void sub_001BF610_0x1bf610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF610_0x1bf610");
#endif

    switch (ctx->pc) {
        case 0x1bf640u: goto label_1bf640;
        default: break;
    }

    ctx->pc = 0x1bf610u;

    // 0x1bf610: 0x460c6836  c.le.s      $f13, $f12
    ctx->pc = 0x1bf610u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf618: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1BF618u;
    {
        const bool branch_taken_0x1bf618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF618u;
            // 0x1bf61c: 0x460c6841  sub.s       $f1, $f13, $f12 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf618) {
            ctx->pc = 0x1BF624u;
            goto label_1bf624;
        }
    }
    ctx->pc = 0x1BF620u;
    // 0x1bf620: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf620u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf624:
    // 0x1bf624: 0x3c01c160  lui         $at, 0xC160
    ctx->pc = 0x1bf624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49504 << 16));
    // 0x1bf628: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bf62c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf62cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf630: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BF630u;
    {
        const bool branch_taken_0x1bf630 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf630) {
            ctx->pc = 0x1BF634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF630u;
            // 0x1bf634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF638u;
            goto label_1bf638;
        }
    }
    ctx->pc = 0x1BF638u;
label_1bf638:
    // 0x1bf638: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF640u;
label_1bf640:
    // 0x1bf640: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x1bf640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf644: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1bf644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1bf648: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x1bf648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bf64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF64Cu;
            // 0x1bf650: 0xe4c10000  swc1        $f1, 0x0($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF654u;
    // 0x1bf654: 0x0  nop
    ctx->pc = 0x1bf654u;
    // NOP
}
