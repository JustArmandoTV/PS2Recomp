#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B6D10
// Address: 0x1b6d10 - 0x1b6d20
void sub_001B6D10_0x1b6d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6D10_0x1b6d10");
#endif

    ctx->pc = 0x1b6d10u;

    // 0x1b6d10: 0xac860148  sw          $a2, 0x148($a0)
    ctx->pc = 0x1b6d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 328), GPR_U32(ctx, 6));
    // 0x1b6d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6D14u;
            // 0x1b6d18: 0xac850144  sw          $a1, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B6D1Cu;
    // 0x1b6d1c: 0x0  nop
    ctx->pc = 0x1b6d1cu;
    // NOP
}
