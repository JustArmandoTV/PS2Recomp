#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D22F0
// Address: 0x2d22f0 - 0x2d2300
void sub_002D22F0_0x2d22f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D22F0_0x2d22f0");
#endif

    ctx->pc = 0x2d22f0u;

    // 0x2d22f0: 0x80400a8  j           func_1002A0
    ctx->pc = 0x2D22F0u;
    ctx->pc = 0x2D22F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D22F0u;
            // 0x2d22f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001002A0_0x1002a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2D22F8u;
    // 0x2d22f8: 0x0  nop
    ctx->pc = 0x2d22f8u;
    // NOP
    // 0x2d22fc: 0x0  nop
    ctx->pc = 0x2d22fcu;
    // NOP
}
