#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DC840
// Address: 0x1dc840 - 0x1dc870
void sub_001DC840_0x1dc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC840_0x1dc840");
#endif

    ctx->pc = 0x1dc840u;

    // 0x1dc840: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1dc840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1dc844: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1dc844u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc848: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1dc848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc84c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dc850: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1dc850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dc858: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x1dc858u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dc85c: 0x80517b0  j           func_145EC0
    ctx->pc = 0x1DC85Cu;
    ctx->pc = 0x1DC860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DC85Cu;
            // 0x1dc860: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EC0u;
    if (runtime->hasFunction(0x145EC0u)) {
        auto targetFn = runtime->lookupFunction(0x145EC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00145EC0_0x145ec0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1DC864u;
    // 0x1dc864: 0x0  nop
    ctx->pc = 0x1dc864u;
    // NOP
    // 0x1dc868: 0x0  nop
    ctx->pc = 0x1dc868u;
    // NOP
    // 0x1dc86c: 0x0  nop
    ctx->pc = 0x1dc86cu;
    // NOP
}
