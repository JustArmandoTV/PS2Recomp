#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B0B0
// Address: 0x51b0b0 - 0x51b0c0
void sub_0051B0B0_0x51b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B0B0_0x51b0b0");
#endif

    ctx->pc = 0x51b0b0u;

    // 0x51b0b0: 0x805cc84  j           func_173210
    ctx->pc = 0x51B0B0u;
    ctx->pc = 0x51B0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B0B0u;
            // 0x51b0b4: 0x8c840194  lw          $a0, 0x194($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173210u;
    if (runtime->hasFunction(0x173210u)) {
        auto targetFn = runtime->lookupFunction(0x173210u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00173210_0x173210(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51B0B8u;
    // 0x51b0b8: 0x0  nop
    ctx->pc = 0x51b0b8u;
    // NOP
    // 0x51b0bc: 0x0  nop
    ctx->pc = 0x51b0bcu;
    // NOP
}
