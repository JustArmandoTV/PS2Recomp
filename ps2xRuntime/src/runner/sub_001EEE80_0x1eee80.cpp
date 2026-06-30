#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EEE80
// Address: 0x1eee80 - 0x1eeec0
void sub_001EEE80_0x1eee80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EEE80_0x1eee80");
#endif

    ctx->pc = 0x1eee80u;

    // 0x1eee80: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1eee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eee84: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1eee84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eee88: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1EEE88u;
    {
        const bool branch_taken_0x1eee88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eee88) {
            ctx->pc = 0x1EEE8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE88u;
            // 0x1eee8c: 0x3c03bf80  lui         $v1, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EEE98u;
            goto label_1eee98;
        }
    }
    ctx->pc = 0x1EEE90u;
    // 0x1eee90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1EEE90u;
    {
        const bool branch_taken_0x1eee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EEE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEE90u;
            // 0x1eee94: 0xe48d0018  swc1        $f13, 0x18($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eee90) {
            ctx->pc = 0x1EEEACu;
            goto label_1eeeac;
        }
    }
    ctx->pc = 0x1EEE98u;
label_1eee98:
    // 0x1eee98: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1eee98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1eee9c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1eee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1eeea0: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1eeea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1eeea4: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1eeea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1eeea8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1eeea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
label_1eeeac:
    // 0x1eeeac: 0x3e00008  jr          $ra
    ctx->pc = 0x1EEEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EEEB4u;
    // 0x1eeeb4: 0x0  nop
    ctx->pc = 0x1eeeb4u;
    // NOP
    // 0x1eeeb8: 0x0  nop
    ctx->pc = 0x1eeeb8u;
    // NOP
    // 0x1eeebc: 0x0  nop
    ctx->pc = 0x1eeebcu;
    // NOP
}
