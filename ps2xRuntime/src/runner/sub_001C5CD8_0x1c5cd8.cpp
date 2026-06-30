#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C5CD8
// Address: 0x1c5cd8 - 0x1c5cf0
void sub_001C5CD8_0x1c5cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5CD8_0x1c5cd8");
#endif

    ctx->pc = 0x1c5cd8u;

    // 0x1c5cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5ce4: 0x807238c  j           func_1C8E30
    ctx->pc = 0x1C5CE4u;
    ctx->pc = 0x1C5CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5CE4u;
            // 0x1c5ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8E30u;
    {
        auto targetFn = runtime->lookupFunction(0x1C8E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C5CECu;
    // 0x1c5cec: 0x0  nop
    ctx->pc = 0x1c5cecu;
    // NOP
}
