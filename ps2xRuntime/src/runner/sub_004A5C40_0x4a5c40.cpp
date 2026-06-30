#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5C40
// Address: 0x4a5c40 - 0x4a5c50
void sub_004A5C40_0x4a5c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5C40_0x4a5c40");
#endif

    ctx->pc = 0x4a5c40u;

    // 0x4a5c40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4a5c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5c44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4a5c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5c48: 0x804cbe0  j           func_132F80
    ctx->pc = 0x4A5C48u;
    ctx->pc = 0x4A5C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C48u;
            // 0x4a5c4c: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00132F80_0x132f80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A5C50u;
}
