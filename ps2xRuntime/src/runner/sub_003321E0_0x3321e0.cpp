#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003321E0
// Address: 0x3321e0 - 0x3321f0
void sub_003321E0_0x3321e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003321E0_0x3321e0");
#endif

    ctx->pc = 0x3321e0u;

    // 0x3321e0: 0x80bc754  j           func_2F1D50
    ctx->pc = 0x3321E0u;
    ctx->pc = 0x3321E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3321E0u;
            // 0x3321e4: 0x24840838  addiu       $a0, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1D50u;
    if (runtime->hasFunction(0x2F1D50u)) {
        auto targetFn = runtime->lookupFunction(0x2F1D50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_002F1D50_0x2f1d50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3321E8u;
    // 0x3321e8: 0x0  nop
    ctx->pc = 0x3321e8u;
    // NOP
    // 0x3321ec: 0x0  nop
    ctx->pc = 0x3321ecu;
    // NOP
}
