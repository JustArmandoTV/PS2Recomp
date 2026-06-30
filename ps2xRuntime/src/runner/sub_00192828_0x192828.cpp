#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192828
// Address: 0x192828 - 0x192870
void sub_00192828_0x192828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192828_0x192828");
#endif

    switch (ctx->pc) {
        case 0x192848u: goto label_192848;
        case 0x192858u: goto label_192858;
        case 0x192860u: goto label_192860;
        default: break;
    }

    ctx->pc = 0x192828u;

    // 0x192828: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x192828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x19282c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x19282cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x192830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192834: 0x2463feb0  addiu       $v1, $v1, -0x150
    ctx->pc = 0x192834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966960));
    // 0x192838: 0x244282e8  addiu       $v0, $v0, -0x7D18
    ctx->pc = 0x192838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935272));
    // 0x19283c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192840: 0xc064a1c  jal         func_192870
    ctx->pc = 0x192840u;
    SET_GPR_U32(ctx, 31, 0x192848u);
    ctx->pc = 0x192844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x192840u;
            // 0x192844: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192870u;
    if (runtime->hasFunction(0x192870u)) {
        auto targetFn = runtime->lookupFunction(0x192870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192848u; }
        if (ctx->pc != 0x192848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192870_0x192870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192848u; }
        if (ctx->pc != 0x192848u) { return; }
    }
    ctx->pc = 0x192848u;
label_192848:
    // 0x192848: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x192848u;
    {
        const bool branch_taken_0x192848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192848u;
            // 0x19284c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192848) {
            ctx->pc = 0x192868u;
            goto label_192868;
        }
    }
    ctx->pc = 0x192850u;
    // 0x192850: 0xc0641ce  jal         func_190738
    ctx->pc = 0x192850u;
    SET_GPR_U32(ctx, 31, 0x192858u);
    ctx->pc = 0x190738u;
    if (runtime->hasFunction(0x190738u)) {
        auto targetFn = runtime->lookupFunction(0x190738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192858u; }
        if (ctx->pc != 0x192858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190738_0x190738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192858u; }
        if (ctx->pc != 0x192858u) { return; }
    }
    ctx->pc = 0x192858u;
label_192858:
    // 0x192858: 0xc064976  jal         func_1925D8
    ctx->pc = 0x192858u;
    SET_GPR_U32(ctx, 31, 0x192860u);
    ctx->pc = 0x1925D8u;
    if (runtime->hasFunction(0x1925D8u)) {
        auto targetFn = runtime->lookupFunction(0x1925D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192860u; }
        if (ctx->pc != 0x192860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001925D8_0x1925d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192860u; }
        if (ctx->pc != 0x192860u) { return; }
    }
    ctx->pc = 0x192860u;
label_192860:
    // 0x192860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x192860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192868:
    // 0x192868: 0x3e00008  jr          $ra
    ctx->pc = 0x192868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19286Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192868u;
            // 0x19286c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192870u;
}
