#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051EA10
// Address: 0x51ea10 - 0x51ea20
void sub_0051EA10_0x51ea10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051EA10_0x51ea10");
#endif

    ctx->pc = 0x51ea10u;

    // 0x51ea10: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x51ea10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ea14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x51ea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51ea18: 0x804cce4  j           func_133390
    ctx->pc = 0x51EA18u;
    ctx->pc = 0x51EA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51EA18u;
            // 0x51ea1c: 0x244501d0  addiu       $a1, $v0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133390_0x133390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x51EA20u;
}
