#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015AC80
// Address: 0x15ac80 - 0x15aca0
void sub_0015AC80_0x15ac80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AC80_0x15ac80");
#endif

    ctx->pc = 0x15ac80u;

    // 0x15ac80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x15ac80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac84: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x15ac84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac88: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ac88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac8c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x15ac8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac90: 0x8f848418  lw          $a0, -0x7BE8($gp)
    ctx->pc = 0x15ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x15ac94: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x15ac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ac98: 0x8056e40  j           func_15B900
    ctx->pc = 0x15AC98u;
    ctx->pc = 0x15AC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC98u;
            // 0x15ac9c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B900u;
    {
        auto targetFn = runtime->lookupFunction(0x15B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x15ACA0u;
}
