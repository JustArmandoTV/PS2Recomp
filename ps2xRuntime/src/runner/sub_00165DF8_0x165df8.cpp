#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00165DF8
// Address: 0x165df8 - 0x165e20
void sub_00165DF8_0x165df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165DF8_0x165df8");
#endif

    switch (ctx->pc) {
        case 0x165e10u: goto label_165e10;
        default: break;
    }

    ctx->pc = 0x165df8u;

    // 0x165df8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x165df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x165dfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165e00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x165e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x165e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165e08: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x165E08u;
    SET_GPR_U32(ctx, 31, 0x165E10u);
    ctx->pc = 0x165E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x165E08u;
            // 0x165e0c: 0x24a532b8  addiu       $a1, $a1, 0x32B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E10u; }
        if (ctx->pc != 0x165E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x165E10u; }
        if (ctx->pc != 0x165E10u) { return; }
    }
    ctx->pc = 0x165E10u;
label_165e10:
    // 0x165e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165e14: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x165e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x165e18: 0x3e00008  jr          $ra
    ctx->pc = 0x165E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165E18u;
            // 0x165e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165E20u;
}
