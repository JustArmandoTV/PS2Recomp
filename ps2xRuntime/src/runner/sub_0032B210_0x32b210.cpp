#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032B210
// Address: 0x32b210 - 0x32b250
void sub_0032B210_0x32b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032B210_0x32b210");
#endif

    ctx->pc = 0x32b210u;

    // 0x32b210: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x32b210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x32b214: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x32b214u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x32b218: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x32b218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x32b21c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x32b21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x32b220: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x32b220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x32b224: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x32b224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x32b228: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x32b228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x32b22c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x32b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x32b230: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x32b230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x32b234: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x32b234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x32b238: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x32b238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x32b23c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x32B23Cu;
            // 0x32b240: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x32B244u;
    // 0x32b244: 0x0  nop
    ctx->pc = 0x32b244u;
    // NOP
    // 0x32b248: 0x0  nop
    ctx->pc = 0x32b248u;
    // NOP
    // 0x32b24c: 0x0  nop
    ctx->pc = 0x32b24cu;
    // NOP
}
