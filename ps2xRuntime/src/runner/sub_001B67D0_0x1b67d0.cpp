#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B67D0
// Address: 0x1b67d0 - 0x1b67f8
void sub_001B67D0_0x1b67d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B67D0_0x1b67d0");
#endif

    ctx->pc = 0x1b67d0u;

    // 0x1b67d0: 0xa480001e  sh          $zero, 0x1E($a0)
    ctx->pc = 0x1b67d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x1b67d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1b67d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1b67d8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1b67d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1b67dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1b67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1b67e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1b67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1b67e4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1b67e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1b67e8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1b67e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1b67ec: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1b67ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1b67f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B67F0u;
            // 0x1b67f4: 0xa480001c  sh          $zero, 0x1C($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 28), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B67F8u;
}
