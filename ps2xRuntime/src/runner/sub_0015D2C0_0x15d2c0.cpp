#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D2C0
// Address: 0x15d2c0 - 0x15d2e0
void sub_0015D2C0_0x15d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D2C0_0x15d2c0");
#endif

    ctx->pc = 0x15d2c0u;

    // 0x15d2c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x15d2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2c4: 0x240502dd  addiu       $a1, $zero, 0x2DD
    ctx->pc = 0x15d2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 733));
    // 0x15d2c8: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15d2cc: 0x8056dd0  j           func_15B740
    ctx->pc = 0x15D2CCu;
    ctx->pc = 0x15D2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2CCu;
            // 0x15d2d0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B740_0x15b740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15D2D4u;
    // 0x15d2d4: 0x0  nop
    ctx->pc = 0x15d2d4u;
    // NOP
    // 0x15d2d8: 0x0  nop
    ctx->pc = 0x15d2d8u;
    // NOP
    // 0x15d2dc: 0x0  nop
    ctx->pc = 0x15d2dcu;
    // NOP
}
