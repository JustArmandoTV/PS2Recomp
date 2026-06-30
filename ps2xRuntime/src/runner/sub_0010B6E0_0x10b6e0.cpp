#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B6E0
// Address: 0x10b6e0 - 0x10b6f0
void sub_0010B6E0_0x10b6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B6E0_0x10b6e0");
#endif

    ctx->pc = 0x10b6e0u;

    // 0x10b6e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x10b6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x10b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x10b6e8: 0x8043c12  j           func_10F048
    ctx->pc = 0x10B6E8u;
    ctx->pc = 0x10B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B6E8u;
            // 0x10b6ec: 0x2484ebc0  addiu       $a0, $a0, -0x1440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010F048_0x10f048(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10B6F0u;
}
