#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00471060
// Address: 0x471060 - 0x471070
void sub_00471060_0x471060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471060_0x471060");
#endif

    ctx->pc = 0x471060u;

    // 0x471060: 0x80b90e0  j           func_2E4380
    ctx->pc = 0x471060u;
    ctx->pc = 0x471064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x471060u;
            // 0x471064: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4380u;
    if (runtime->hasFunction(0x2E4380u)) {
        auto targetFn = runtime->lookupFunction(0x2E4380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002E4380_0x2e4380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x471068u;
    // 0x471068: 0x0  nop
    ctx->pc = 0x471068u;
    // NOP
    // 0x47106c: 0x0  nop
    ctx->pc = 0x47106cu;
    // NOP
}
