#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033BE80
// Address: 0x33be80 - 0x33be90
void sub_0033BE80_0x33be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BE80_0x33be80");
#endif

    ctx->pc = 0x33be80u;

    // 0x33be80: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x33be80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33be84: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x33be84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x33be88: 0x804cc04  j           func_133010
    ctx->pc = 0x33BE88u;
    ctx->pc = 0x33BE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33BE88u;
            // 0x33be8c: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133010_0x133010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x33BE90u;
}
