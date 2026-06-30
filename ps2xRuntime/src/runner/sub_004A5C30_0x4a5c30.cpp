#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5C30
// Address: 0x4a5c30 - 0x4a5c40
void sub_004A5C30_0x4a5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5C30_0x4a5c30");
#endif

    ctx->pc = 0x4a5c30u;

    // 0x4a5c30: 0x804cc44  j           func_133110
    ctx->pc = 0x4A5C30u;
    ctx->pc = 0x4A5C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5C30u;
            // 0x4a5c34: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133110_0x133110(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4A5C38u;
    // 0x4a5c38: 0x0  nop
    ctx->pc = 0x4a5c38u;
    // NOP
    // 0x4a5c3c: 0x0  nop
    ctx->pc = 0x4a5c3cu;
    // NOP
}
