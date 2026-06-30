#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B0A0
// Address: 0x51b0a0 - 0x51b0b0
void sub_0051B0A0_0x51b0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B0A0_0x51b0a0");
#endif

    ctx->pc = 0x51b0a0u;

    // 0x51b0a0: 0x805cc84  j           func_173210
    ctx->pc = 0x51B0A0u;
    ctx->pc = 0x51B0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B0A0u;
            // 0x51b0a4: 0x8c840198  lw          $a0, 0x198($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173210_0x173210(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51B0A8u;
    // 0x51b0a8: 0x0  nop
    ctx->pc = 0x51b0a8u;
    // NOP
    // 0x51b0ac: 0x0  nop
    ctx->pc = 0x51b0acu;
    // NOP
}
