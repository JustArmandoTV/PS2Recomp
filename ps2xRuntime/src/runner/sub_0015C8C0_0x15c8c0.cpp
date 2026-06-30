#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015C8C0
// Address: 0x15c8c0 - 0x15c8d0
void sub_0015C8C0_0x15c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C8C0_0x15c8c0");
#endif

    ctx->pc = 0x15c8c0u;

    // 0x15c8c0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15c8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15c8c8: 0x80573a0  j           func_15CE80
    ctx->pc = 0x15C8C8u;
    ctx->pc = 0x15C8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15C8C8u;
            // 0x15c8cc: 0x240401f4  addiu       $a0, $zero, 0x1F4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015CE80_0x15ce80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x15C8D0u;
}
