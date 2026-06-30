#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BF658
// Address: 0x1bf658 - 0x1bf698
void sub_001BF658_0x1bf658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF658_0x1bf658");
#endif

    switch (ctx->pc) {
        case 0x1bf688u: goto label_1bf688;
        default: break;
    }

    ctx->pc = 0x1bf658u;

    // 0x1bf658: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1bf658u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bf65c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bf65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf660: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x1bf660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bf664: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1bf664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf668: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF668u;
    {
        const bool branch_taken_0x1bf668 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF668u;
            // 0x1bf66c: 0xc4810040  lwc1        $f1, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf668) {
            ctx->pc = 0x1BF67Cu;
            goto label_1bf67c;
        }
    }
    ctx->pc = 0x1BF670u;
    // 0x1bf670: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x1bf670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bf674: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BF674u;
    {
        const bool branch_taken_0x1bf674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf674) {
            ctx->pc = 0x1BF678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF674u;
            // 0x1bf678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BF67Cu;
            goto label_1bf67c;
        }
    }
    ctx->pc = 0x1BF67Cu;
label_1bf67c:
    // 0x1bf67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF67Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF684u;
    // 0x1bf684: 0x0  nop
    ctx->pc = 0x1bf684u;
    // NOP
label_1bf688:
    // 0x1bf688: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bf688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1bf68c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF68Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BF68Cu;
            // 0x1bf690: 0xac44a244  sw          $a0, -0x5DBC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943300), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BF694u;
    // 0x1bf694: 0x0  nop
    ctx->pc = 0x1bf694u;
    // NOP
}
