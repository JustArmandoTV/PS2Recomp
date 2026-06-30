#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DDB8
// Address: 0x16ddb8 - 0x16ddd0
void sub_0016DDB8_0x16ddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DDB8_0x16ddb8");
#endif

    ctx->pc = 0x16ddb8u;

    // 0x16ddb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ddbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ddc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ddc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ddc4: 0x805b724  j           func_16DC90
    ctx->pc = 0x16DDC4u;
    ctx->pc = 0x16DDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDC4u;
            // 0x16ddc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16DC90u;
    {
        auto targetFn = runtime->lookupFunction(0x16DC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16DDCCu;
    // 0x16ddcc: 0x0  nop
    ctx->pc = 0x16ddccu;
    // NOP
}
