#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00463F70
// Address: 0x463f70 - 0x463f80
void sub_00463F70_0x463f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00463F70_0x463f70");
#endif

    ctx->pc = 0x463f70u;

    // 0x463f70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x463f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x463f74: 0x804cc34  j           func_1330D0
    ctx->pc = 0x463F74u;
    ctx->pc = 0x463F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x463F74u;
            // 0x463f78: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001330D0_0x1330d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x463F7Cu;
    // 0x463f7c: 0x0  nop
    ctx->pc = 0x463f7cu;
    // NOP
}
