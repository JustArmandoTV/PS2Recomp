#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1120
// Address: 0x2a1120 - 0x2a1140
void sub_002A1120_0x2a1120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1120_0x2a1120");
#endif

    switch (ctx->pc) {
        case 0x2a1130u: goto label_2a1130;
        default: break;
    }

    ctx->pc = 0x2a1120u;

    // 0x2a1120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1128: 0xc04a508  jal         func_129420
    ctx->pc = 0x2A1128u;
    SET_GPR_U32(ctx, 31, 0x2A1130u);
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1130u; }
        if (ctx->pc != 0x2A1130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1130u; }
        if (ctx->pc != 0x2A1130u) { return; }
    }
    ctx->pc = 0x2A1130u;
label_2a1130:
    // 0x2a1130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1134: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1134u;
            // 0x2a1138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A113Cu;
    // 0x2a113c: 0x0  nop
    ctx->pc = 0x2a113cu;
    // NOP
}
