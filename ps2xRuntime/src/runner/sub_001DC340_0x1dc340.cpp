#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC340
// Address: 0x1dc340 - 0x1dc350
void sub_001DC340_0x1dc340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC340_0x1dc340");
#endif

    ctx->pc = 0x1dc340u;

    // 0x1dc340: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC340u;
            // 0x1dc344: 0x94820012  lhu         $v0, 0x12($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DC348u;
    // 0x1dc348: 0x0  nop
    ctx->pc = 0x1dc348u;
    // NOP
    // 0x1dc34c: 0x0  nop
    ctx->pc = 0x1dc34cu;
    // NOP
}
