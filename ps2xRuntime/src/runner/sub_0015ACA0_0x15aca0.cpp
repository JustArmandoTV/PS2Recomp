#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ACA0
// Address: 0x15aca0 - 0x15acb0
void sub_0015ACA0_0x15aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ACA0_0x15aca0");
#endif

    ctx->pc = 0x15aca0u;

    // 0x15aca0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15aca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15aca4: 0x8056e74  j           func_15B9D0
    ctx->pc = 0x15ACA4u;
    ctx->pc = 0x15ACA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ACA4u;
            // 0x15aca8: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B9D0u;
    {
        auto targetFn = runtime->lookupFunction(0x15B9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15ACACu;
    // 0x15acac: 0x0  nop
    ctx->pc = 0x15acacu;
    // NOP
}
