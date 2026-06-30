#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9D58
// Address: 0x1b9d58 - 0x1b9d80
void sub_001B9D58_0x1b9d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9D58_0x1b9d58");
#endif

    ctx->pc = 0x1b9d58u;

    // 0x1b9d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9d5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b9d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b9d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b9d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b9d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9d74: 0x806e760  j           func_1B9D80
    ctx->pc = 0x1B9D74u;
    ctx->pc = 0x1B9D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9D74u;
            // 0x1b9d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B9D80_0x1b9d80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9D7Cu;
    // 0x1b9d7c: 0x0  nop
    ctx->pc = 0x1b9d7cu;
    // NOP
}
