#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3330
// Address: 0x3c3330 - 0x3c3340
void sub_003C3330_0x3c3330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3330_0x3c3330");
#endif

    ctx->pc = 0x3c3330u;

    // 0x3c3330: 0x8075378  j           func_1D4DE0
    ctx->pc = 0x3C3330u;
    ctx->pc = 0x3C3334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3330u;
            // 0x3c3334: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3C3338u;
    // 0x3c3338: 0x0  nop
    ctx->pc = 0x3c3338u;
    // NOP
    // 0x3c333c: 0x0  nop
    ctx->pc = 0x3c333cu;
    // NOP
}
