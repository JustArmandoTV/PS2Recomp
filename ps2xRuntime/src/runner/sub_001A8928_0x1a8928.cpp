#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8928
// Address: 0x1a8928 - 0x1a8948
void sub_001A8928_0x1a8928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8928_0x1a8928");
#endif

    switch (ctx->pc) {
        case 0x1a8938u: goto label_1a8938;
        default: break;
    }

    ctx->pc = 0x1a8928u;

    // 0x1a8928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a892c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a892cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8930: 0xc06c91e  jal         func_1B2478
    ctx->pc = 0x1A8930u;
    SET_GPR_U32(ctx, 31, 0x1A8938u);
    ctx->pc = 0x1B2478u;
    if (runtime->hasFunction(0x1B2478u)) {
        auto targetFn = runtime->lookupFunction(0x1B2478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8938u; }
        if (ctx->pc != 0x1A8938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2478_0x1b2478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8938u; }
        if (ctx->pc != 0x1A8938u) { return; }
    }
    ctx->pc = 0x1A8938u;
label_1a8938:
    // 0x1a8938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a893c: 0x8069e66  j           func_1A7998
    ctx->pc = 0x1A893Cu;
    ctx->pc = 0x1A8940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A893Cu;
            // 0x1a8940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7998u;
    {
        auto targetFn = runtime->lookupFunction(0x1A7998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A8944u;
    // 0x1a8944: 0x0  nop
    ctx->pc = 0x1a8944u;
    // NOP
}
