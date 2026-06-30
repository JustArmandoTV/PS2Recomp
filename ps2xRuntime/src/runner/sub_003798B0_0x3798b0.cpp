#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003798B0
// Address: 0x3798b0 - 0x3798c0
void sub_003798B0_0x3798b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003798B0_0x3798b0");
#endif

    ctx->pc = 0x3798b0u;

    // 0x3798b0: 0x8072b78  j           func_1CADE0
    ctx->pc = 0x3798B0u;
    ctx->pc = 0x3798B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3798B0u;
            // 0x3798b4: 0x30a400ff  andi        $a0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CADE0_0x1cade0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3798B8u;
    // 0x3798b8: 0x0  nop
    ctx->pc = 0x3798b8u;
    // NOP
    // 0x3798bc: 0x0  nop
    ctx->pc = 0x3798bcu;
    // NOP
}
