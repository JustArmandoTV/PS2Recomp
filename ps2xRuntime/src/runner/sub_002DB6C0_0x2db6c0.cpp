#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DB6C0
// Address: 0x2db6c0 - 0x2db6d0
void sub_002DB6C0_0x2db6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB6C0_0x2db6c0");
#endif

    ctx->pc = 0x2db6c0u;

    // 0x2db6c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2db6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db6c4: 0x244402f0  addiu       $a0, $v0, 0x2F0
    ctx->pc = 0x2db6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 752));
    // 0x2db6c8: 0x804cc04  j           func_133010
    ctx->pc = 0x2DB6C8u;
    ctx->pc = 0x2DB6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB6C8u;
            // 0x2db6cc: 0x244502e0  addiu       $a1, $v0, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00133010_0x133010(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2DB6D0u;
}
