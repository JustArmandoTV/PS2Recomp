#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BBA0
// Address: 0x36bba0 - 0x36bbb0
void sub_0036BBA0_0x36bba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BBA0_0x36bba0");
#endif

    ctx->pc = 0x36bba0u;

    // 0x36bba0: 0x80c753c  j           func_31D4F0
    ctx->pc = 0x36BBA0u;
    ctx->pc = 0x36BBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36BBA0u;
            // 0x36bba4: 0x2484009c  addiu       $a0, $a0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36BBA8u;
    // 0x36bba8: 0x0  nop
    ctx->pc = 0x36bba8u;
    // NOP
    // 0x36bbac: 0x0  nop
    ctx->pc = 0x36bbacu;
    // NOP
}
