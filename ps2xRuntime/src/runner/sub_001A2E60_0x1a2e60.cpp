#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2E60
// Address: 0x1a2e60 - 0x1a2e78
void sub_001A2E60_0x1a2e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2E60_0x1a2e60");
#endif

    ctx->pc = 0x1a2e60u;

    // 0x1a2e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2e6c: 0x805c2e2  j           func_170B88
    ctx->pc = 0x1A2E6Cu;
    ctx->pc = 0x1A2E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2E6Cu;
            // 0x1a2e70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170B88u;
    if (runtime->hasFunction(0x170B88u)) {
        auto targetFn = runtime->lookupFunction(0x170B88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00170B88_0x170b88(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A2E74u;
    // 0x1a2e74: 0x0  nop
    ctx->pc = 0x1a2e74u;
    // NOP
}
