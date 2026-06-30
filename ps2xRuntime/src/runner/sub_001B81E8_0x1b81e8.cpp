#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B81E8
// Address: 0x1b81e8 - 0x1b81f0
void sub_001B81E8_0x1b81e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B81E8_0x1b81e8");
#endif

    ctx->pc = 0x1b81e8u;

    // 0x1b81e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B81E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B81ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B81E8u;
            // 0x1b81ec: 0xac851034  sw          $a1, 0x1034($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B81F0u;
}
