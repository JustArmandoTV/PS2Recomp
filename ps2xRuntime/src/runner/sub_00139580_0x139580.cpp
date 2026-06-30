#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139580
// Address: 0x139580 - 0x139590
void sub_00139580_0x139580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139580_0x139580");
#endif

    ctx->pc = 0x139580u;

    // 0x139580: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x139580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139584: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x139584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139588: 0x80573e0  j           func_15CF80
    ctx->pc = 0x139588u;
    ctx->pc = 0x13958Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139588u;
            // 0x13958c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0015CF80_0x15cf80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x139590u;
}
