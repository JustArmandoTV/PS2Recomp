#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E38D0
// Address: 0x3e38d0 - 0x3e38e0
void sub_003E38D0_0x3e38d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E38D0_0x3e38d0");
#endif

    ctx->pc = 0x3e38d0u;

    // 0x3e38d0: 0x804cc04  j           func_133010
    ctx->pc = 0x3E38D0u;
    ctx->pc = 0x3E38D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E38D0u;
            // 0x3e38d4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133010_0x133010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E38D8u;
    // 0x3e38d8: 0x0  nop
    ctx->pc = 0x3e38d8u;
    // NOP
    // 0x3e38dc: 0x0  nop
    ctx->pc = 0x3e38dcu;
    // NOP
}
