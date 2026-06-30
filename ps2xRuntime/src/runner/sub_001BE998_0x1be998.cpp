#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BE998
// Address: 0x1be998 - 0x1be9d0
void sub_001BE998_0x1be998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE998_0x1be998");
#endif

    switch (ctx->pc) {
        case 0x1be9b8u: goto label_1be9b8;
        default: break;
    }

    ctx->pc = 0x1be998u;

    // 0x1be998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be9a0: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1be9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1be9a4: 0x8ca5004c  lw          $a1, 0x4C($a1)
    ctx->pc = 0x1be9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x1be9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9ac: 0x806fbe6  j           func_1BEF98
    ctx->pc = 0x1BE9ACu;
    ctx->pc = 0x1BE9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9ACu;
            // 0x1be9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEF98u;
    if (runtime->hasFunction(0x1BEF98u)) {
        auto targetFn = runtime->lookupFunction(0x1BEF98u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BEF98_0x1bef98(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BE9B4u;
    // 0x1be9b4: 0x0  nop
    ctx->pc = 0x1be9b4u;
    // NOP
label_1be9b8:
    // 0x1be9b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1be9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1be9bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be9c0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x1be9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1be9c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be9c8: 0x806f55e  j           func_1BD578
    ctx->pc = 0x1BE9C8u;
    ctx->pc = 0x1BE9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE9C8u;
            // 0x1be9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD578u;
    {
        auto targetFn = runtime->lookupFunction(0x1BD578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BE9D0u;
}
