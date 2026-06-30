#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C930
// Address: 0x15c930 - 0x15c940
void sub_0015C930_0x15c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C930_0x15c930");
#endif

    ctx->pc = 0x15c930u;

    // 0x15c930: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15c930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c934: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15c934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15c938: 0x80573a0  j           func_15CE80
    ctx->pc = 0x15C938u;
    ctx->pc = 0x15C93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C938u;
            // 0x15c93c: 0x240401f8  addiu       $a0, $zero, 0x1F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015CE80_0x15ce80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15C940u;
}
