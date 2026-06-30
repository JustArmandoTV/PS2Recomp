#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AB888
// Address: 0x1ab888 - 0x1ab8a8
void sub_001AB888_0x1ab888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB888_0x1ab888");
#endif

    ctx->pc = 0x1ab888u;

    // 0x1ab888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab88c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1ab88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab894: 0x8c85203c  lw          $a1, 0x203C($a0)
    ctx->pc = 0x1ab894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8252)));
    // 0x1ab898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab89c: 0x8069956  j           func_1A6558
    ctx->pc = 0x1AB89Cu;
    ctx->pc = 0x1AB8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB89Cu;
            // 0x1ab8a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6558u;
    if (runtime->hasFunction(0x1A6558u)) {
        auto targetFn = runtime->lookupFunction(0x1A6558u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A6558_0x1a6558(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1AB8A4u;
    // 0x1ab8a4: 0x0  nop
    ctx->pc = 0x1ab8a4u;
    // NOP
}
