#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1140
// Address: 0x2a1140 - 0x2a1160
void sub_002A1140_0x2a1140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1140_0x2a1140");
#endif

    switch (ctx->pc) {
        case 0x2a1150u: goto label_2a1150;
        default: break;
    }

    ctx->pc = 0x2a1140u;

    // 0x2a1140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1148: 0xc04a534  jal         func_1294D0
    ctx->pc = 0x2A1148u;
    SET_GPR_U32(ctx, 31, 0x2A1150u);
    ctx->pc = 0x1294D0u;
    if (runtime->hasFunction(0x1294D0u)) {
        auto targetFn = runtime->lookupFunction(0x1294D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1150u; }
        if (ctx->pc != 0x2A1150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001294D0_0x1294d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1150u; }
        if (ctx->pc != 0x2A1150u) { return; }
    }
    ctx->pc = 0x2A1150u;
label_2a1150:
    // 0x2a1150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1154: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1154u;
            // 0x2a1158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A115Cu;
    // 0x2a115c: 0x0  nop
    ctx->pc = 0x2a115cu;
    // NOP
}
