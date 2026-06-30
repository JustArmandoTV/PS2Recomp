#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5A30
// Address: 0x4a5a30 - 0x4a5a40
void sub_004A5A30_0x4a5a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5A30_0x4a5a30");
#endif

    ctx->pc = 0x4a5a30u;

    // 0x4a5a30: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a5a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5a34: 0x804cc70  j           func_1331C0
    ctx->pc = 0x4A5A34u;
    ctx->pc = 0x4A5A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5A34u;
            // 0x4a5a38: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001331C0_0x1331c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A5A3Cu;
    // 0x4a5a3c: 0x0  nop
    ctx->pc = 0x4a5a3cu;
    // NOP
}
