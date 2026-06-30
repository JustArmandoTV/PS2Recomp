#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB6D0
// Address: 0x2db6d0 - 0x2db6e0
void sub_002DB6D0_0x2db6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB6D0_0x2db6d0");
#endif

    ctx->pc = 0x2db6d0u;

    // 0x2db6d0: 0x804cc04  j           func_133010
    ctx->pc = 0x2DB6D0u;
    ctx->pc = 0x2DB6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6D0u;
            // 0x2db6d4: 0x248402d0  addiu       $a0, $a0, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133010_0x133010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2DB6D8u;
    // 0x2db6d8: 0x0  nop
    ctx->pc = 0x2db6d8u;
    // NOP
    // 0x2db6dc: 0x0  nop
    ctx->pc = 0x2db6dcu;
    // NOP
}
