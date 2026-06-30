#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B9AE0
// Address: 0x3b9ae0 - 0x3b9af0
void sub_003B9AE0_0x3b9ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B9AE0_0x3b9ae0");
#endif

    ctx->pc = 0x3b9ae0u;

    // 0x3b9ae0: 0x80400a8  j           func_1002A0
    ctx->pc = 0x3B9AE0u;
    ctx->pc = 0x3B9AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B9AE0u;
            // 0x3b9ae4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001002A0_0x1002a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3B9AE8u;
    // 0x3b9ae8: 0x0  nop
    ctx->pc = 0x3b9ae8u;
    // NOP
    // 0x3b9aec: 0x0  nop
    ctx->pc = 0x3b9aecu;
    // NOP
}
