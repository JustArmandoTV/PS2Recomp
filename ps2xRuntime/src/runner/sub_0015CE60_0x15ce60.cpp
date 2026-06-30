#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CE60
// Address: 0x15ce60 - 0x15ce80
void sub_0015CE60_0x15ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CE60_0x15ce60");
#endif

    ctx->pc = 0x15ce60u;

    // 0x15ce60: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ce64: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x15ce64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x15ce68: 0x240503fc  addiu       $a1, $zero, 0x3FC
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x15ce6c: 0x24c6ccb0  addiu       $a2, $a2, -0x3350
    ctx->pc = 0x15ce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954160));
    // 0x15ce70: 0x8056dd0  j           func_15B740
    ctx->pc = 0x15CE70u;
    ctx->pc = 0x15CE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE70u;
            // 0x15ce74: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B740u;
    if (runtime->hasFunction(0x15B740u)) {
        auto targetFn = runtime->lookupFunction(0x15B740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015B740_0x15b740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15CE78u;
    // 0x15ce78: 0x0  nop
    ctx->pc = 0x15ce78u;
    // NOP
    // 0x15ce7c: 0x0  nop
    ctx->pc = 0x15ce7cu;
    // NOP
}
