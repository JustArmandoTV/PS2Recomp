#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C8D0
// Address: 0x15c8d0 - 0x15c8e0
void sub_0015C8D0_0x15c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C8D0_0x15c8d0");
#endif

    ctx->pc = 0x15c8d0u;

    // 0x15c8d0: 0x8056e08  j           func_15B820
    ctx->pc = 0x15C8D0u;
    ctx->pc = 0x15C8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8D0u;
            // 0x15c8d4: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B820u;
    {
        auto targetFn = runtime->lookupFunction(0x15B820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15C8D8u;
    // 0x15c8d8: 0x0  nop
    ctx->pc = 0x15c8d8u;
    // NOP
    // 0x15c8dc: 0x0  nop
    ctx->pc = 0x15c8dcu;
    // NOP
}
