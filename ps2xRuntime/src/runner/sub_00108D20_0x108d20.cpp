#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108D20
// Address: 0x108d20 - 0x108d28
void sub_00108D20_0x108d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108D20_0x108d20");
#endif

    ctx->pc = 0x108d20u;

    // 0x108d20: 0x80422f0  j           func_108BC0
    ctx->pc = 0x108D20u;
    ctx->pc = 0x108D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D20u;
            // 0x108d24: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00108BC0_0x108bc0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x108D28u;
}
