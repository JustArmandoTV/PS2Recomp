#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004ED2D0
// Address: 0x4ed2d0 - 0x4ed2e0
void sub_004ED2D0_0x4ed2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2D0_0x4ed2d0");
#endif

    ctx->pc = 0x4ed2d0u;

    // 0x4ed2d0: 0x813b5a4  j           func_4ED690
    ctx->pc = 0x4ED2D0u;
    ctx->pc = 0x4ED2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4ED2D0u;
            // 0x4ed2d4: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4ED690u;
    if (runtime->hasFunction(0x4ED690u)) {
        auto targetFn = runtime->lookupFunction(0x4ED690u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004ED690_0x4ed690(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4ED2D8u;
    // 0x4ed2d8: 0x0  nop
    ctx->pc = 0x4ed2d8u;
    // NOP
    // 0x4ed2dc: 0x0  nop
    ctx->pc = 0x4ed2dcu;
    // NOP
}
