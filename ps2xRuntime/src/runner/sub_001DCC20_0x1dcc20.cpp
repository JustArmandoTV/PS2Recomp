#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCC20
// Address: 0x1dcc20 - 0x1dcc30
void sub_001DCC20_0x1dcc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC20_0x1dcc20");
#endif

    ctx->pc = 0x1dcc20u;

    // 0x1dcc20: 0x814ca20  j           func_532880
    ctx->pc = 0x1DCC20u;
    ctx->pc = 0x1DCC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCC20u;
            // 0x1dcc24: 0x8c840148  lw          $a0, 0x148($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x532880u;
    if (runtime->hasFunction(0x532880u)) {
        auto targetFn = runtime->lookupFunction(0x532880u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00532880_0x532880(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DCC28u;
    // 0x1dcc28: 0x0  nop
    ctx->pc = 0x1dcc28u;
    // NOP
    // 0x1dcc2c: 0x0  nop
    ctx->pc = 0x1dcc2cu;
    // NOP
}
