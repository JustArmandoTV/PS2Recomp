#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1BE0
// Address: 0x1f1be0 - 0x1f1c00
void sub_001F1BE0_0x1f1be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1BE0_0x1f1be0");
#endif

    switch (ctx->pc) {
        case 0x1f1bf0u: goto label_1f1bf0;
        default: break;
    }

    ctx->pc = 0x1f1be0u;

    // 0x1f1be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1be8: 0xc07b99c  jal         func_1EE670
    ctx->pc = 0x1F1BE8u;
    SET_GPR_U32(ctx, 31, 0x1F1BF0u);
    ctx->pc = 0x1EE670u;
    if (runtime->hasFunction(0x1EE670u)) {
        auto targetFn = runtime->lookupFunction(0x1EE670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BF0u; }
        if (ctx->pc != 0x1F1BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EE670_0x1ee670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1BF0u; }
        if (ctx->pc != 0x1F1BF0u) { return; }
    }
    ctx->pc = 0x1F1BF0u;
label_1f1bf0:
    // 0x1f1bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1BF4u;
            // 0x1f1bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F1BFCu;
    // 0x1f1bfc: 0x0  nop
    ctx->pc = 0x1f1bfcu;
    // NOP
}
