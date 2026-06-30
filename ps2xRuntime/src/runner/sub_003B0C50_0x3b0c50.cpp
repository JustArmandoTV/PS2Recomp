#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B0C50
// Address: 0x3b0c50 - 0x3b0c60
void sub_003B0C50_0x3b0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0C50_0x3b0c50");
#endif

    ctx->pc = 0x3b0c50u;

    // 0x3b0c50: 0x8073234  j           func_1CC8D0
    ctx->pc = 0x3B0C50u;
    ctx->pc = 0x3B0C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B0C50u;
            // 0x3b0c54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3B0C58u;
    // 0x3b0c58: 0x0  nop
    ctx->pc = 0x3b0c58u;
    // NOP
    // 0x3b0c5c: 0x0  nop
    ctx->pc = 0x3b0c5cu;
    // NOP
}
