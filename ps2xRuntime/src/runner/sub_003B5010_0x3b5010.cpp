#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B5010
// Address: 0x3b5010 - 0x3b5020
void sub_003B5010_0x3b5010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B5010_0x3b5010");
#endif

    ctx->pc = 0x3b5010u;

    // 0x3b5010: 0x804cc04  j           func_133010
    ctx->pc = 0x3B5010u;
    ctx->pc = 0x3B5014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5010u;
            // 0x3b5014: 0x24840c20  addiu       $a0, $a0, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133010_0x133010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3B5018u;
    // 0x3b5018: 0x0  nop
    ctx->pc = 0x3b5018u;
    // NOP
    // 0x3b501c: 0x0  nop
    ctx->pc = 0x3b501cu;
    // NOP
}
