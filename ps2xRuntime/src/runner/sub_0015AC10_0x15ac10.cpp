#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AC10
// Address: 0x15ac10 - 0x15ac30
void sub_0015AC10_0x15ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC10_0x15ac10");
#endif

    ctx->pc = 0x15ac10u;

    // 0x15ac10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x15ac10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x15ac14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac18: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ac1c: 0x8056e0c  j           func_15B830
    ctx->pc = 0x15AC1Cu;
    ctx->pc = 0x15AC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC1Cu;
            // 0x15ac20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B830u;
    if (runtime->hasFunction(0x15B830u)) {
        auto targetFn = runtime->lookupFunction(0x15B830u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B830_0x15b830(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15AC24u;
    // 0x15ac24: 0x0  nop
    ctx->pc = 0x15ac24u;
    // NOP
    // 0x15ac28: 0x0  nop
    ctx->pc = 0x15ac28u;
    // NOP
    // 0x15ac2c: 0x0  nop
    ctx->pc = 0x15ac2cu;
    // NOP
}
