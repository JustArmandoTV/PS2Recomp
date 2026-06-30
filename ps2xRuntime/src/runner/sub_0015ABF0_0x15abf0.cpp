#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015ABF0
// Address: 0x15abf0 - 0x15ac00
void sub_0015ABF0_0x15abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ABF0_0x15abf0");
#endif

    ctx->pc = 0x15abf0u;

    // 0x15abf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15abf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15abf4: 0x8056ce0  j           func_15B380
    ctx->pc = 0x15ABF4u;
    ctx->pc = 0x15ABF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15ABF4u;
            // 0x15abf8: 0x8f848418  lw          $a0, -0x7BE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B380u;
    if (runtime->hasFunction(0x15B380u)) {
        auto targetFn = runtime->lookupFunction(0x15B380u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B380_0x15b380(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15ABFCu;
    // 0x15abfc: 0x0  nop
    ctx->pc = 0x15abfcu;
    // NOP
}
