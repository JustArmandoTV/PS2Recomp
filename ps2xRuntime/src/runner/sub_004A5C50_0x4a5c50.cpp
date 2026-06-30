#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5C50
// Address: 0x4a5c50 - 0x4a5c60
void sub_004A5C50_0x4a5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5C50_0x4a5c50");
#endif

    ctx->pc = 0x4a5c50u;

    // 0x4a5c50: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a5c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5c54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a5c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5c58: 0x804cc90  j           func_133240
    ctx->pc = 0x4A5C58u;
    ctx->pc = 0x4A5C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C58u;
            // 0x4a5c5c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133240_0x133240(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A5C60u;
}
