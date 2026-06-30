#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162000
// Address: 0x162000 - 0x162030
void sub_00162000_0x162000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162000_0x162000");
#endif

    switch (ctx->pc) {
        case 0x162018u: goto label_162018;
        default: break;
    }

    ctx->pc = 0x162000u;

    // 0x162000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162004: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162004u;
    {
        const bool branch_taken_0x162004 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162004u;
            // 0x162008: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162004) {
            ctx->pc = 0x162020u;
            goto label_162020;
        }
    }
    ctx->pc = 0x16200Cu;
    // 0x16200c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16200cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x162010: 0xc05856c  jal         func_1615B0
    ctx->pc = 0x162010u;
    SET_GPR_U32(ctx, 31, 0x162018u);
    ctx->pc = 0x162014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162010u;
            // 0x162014: 0x248428b0  addiu       $a0, $a0, 0x28B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162018u; }
        if (ctx->pc != 0x162018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001615B0_0x1615b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162018u; }
        if (ctx->pc != 0x162018u) { return; }
    }
    ctx->pc = 0x162018u;
label_162018:
    // 0x162018: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x162018u;
    {
        const bool branch_taken_0x162018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162018u;
            // 0x16201c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162018) {
            ctx->pc = 0x162024u;
            goto label_162024;
        }
    }
    ctx->pc = 0x162020u;
label_162020:
    // 0x162020: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x162020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_162024:
    // 0x162024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162028: 0x3e00008  jr          $ra
    ctx->pc = 0x162028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16202Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162028u;
            // 0x16202c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162030u;
}
