#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A5380
// Address: 0x2a5380 - 0x2a5390
void sub_002A5380_0x2a5380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5380_0x2a5380");
#endif

    ctx->pc = 0x2a5380u;

    // 0x2a5380: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5380u;
            // 0x2a5384: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5388u;
    // 0x2a5388: 0x0  nop
    ctx->pc = 0x2a5388u;
    // NOP
    // 0x2a538c: 0x0  nop
    ctx->pc = 0x2a538cu;
    // NOP
}
