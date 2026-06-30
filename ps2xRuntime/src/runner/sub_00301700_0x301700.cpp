#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00301700
// Address: 0x301700 - 0x301710
void sub_00301700_0x301700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301700_0x301700");
#endif

    ctx->pc = 0x301700u;

    // 0x301700: 0x8072aaa  j           func_1CAAA8
    ctx->pc = 0x301700u;
    ctx->pc = 0x301704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x301700u;
            // 0x301704: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x301708u;
    // 0x301708: 0x0  nop
    ctx->pc = 0x301708u;
    // NOP
    // 0x30170c: 0x0  nop
    ctx->pc = 0x30170cu;
    // NOP
}
