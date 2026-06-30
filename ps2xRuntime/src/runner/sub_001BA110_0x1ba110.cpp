#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA110
// Address: 0x1ba110 - 0x1ba128
void sub_001BA110_0x1ba110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA110_0x1ba110");
#endif

    ctx->pc = 0x1ba110u;

    // 0x1ba110: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1ba110u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1ba114: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1ba114u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1ba118: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ba118u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ba11c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA11Cu;
            // 0x1ba120: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA124u;
    // 0x1ba124: 0x0  nop
    ctx->pc = 0x1ba124u;
    // NOP
}
