#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161828
// Address: 0x161828 - 0x1618c8
void sub_00161828_0x161828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161828_0x161828");
#endif

    switch (ctx->pc) {
        case 0x161858u: goto label_161858;
        case 0x1618b8u: goto label_1618b8;
        default: break;
    }

    ctx->pc = 0x161828u;

    // 0x161828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16182c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16182Cu;
    {
        const bool branch_taken_0x16182c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16182Cu;
            // 0x161830: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16182c) {
            ctx->pc = 0x161848u;
            goto label_161848;
        }
    }
    ctx->pc = 0x161834u;
    // 0x161834: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x161834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x161838: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16183c: 0x24842708  addiu       $a0, $a0, 0x2708
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9992));
    // 0x161840: 0x805856c  j           func_1615B0
    ctx->pc = 0x161840u;
    ctx->pc = 0x161844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161840u;
            // 0x161844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x161848u;
label_161848:
    // 0x161848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16184c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x16184cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x161850: 0x3e00008  jr          $ra
    ctx->pc = 0x161850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161850u;
            // 0x161854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161858u;
label_161858:
    // 0x161858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16185c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16185Cu;
    {
        const bool branch_taken_0x16185c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x161860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16185Cu;
            // 0x161860: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16185c) {
            ctx->pc = 0x161878u;
            goto label_161878;
        }
    }
    ctx->pc = 0x161864u;
    // 0x161864: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x161864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x161868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16186c: 0x24842730  addiu       $a0, $a0, 0x2730
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x161870: 0x805856c  j           func_1615B0
    ctx->pc = 0x161870u;
    ctx->pc = 0x161874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161870u;
            // 0x161874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x161878u;
label_161878:
    // 0x161878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16187c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16187cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161880: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x161880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x161884: 0x3e00008  jr          $ra
    ctx->pc = 0x161884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161884u;
            // 0x161888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16188Cu;
    // 0x16188c: 0x0  nop
    ctx->pc = 0x16188cu;
    // NOP
    // 0x161890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161894: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x161894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x161898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16189c: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x16189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x1618a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1618a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1618a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1618a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1618a8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1618A8u;
    {
        const bool branch_taken_0x1618a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1618a8) {
            ctx->pc = 0x1618ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1618A8u;
            // 0x1618ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1618BCu;
            goto label_1618bc;
        }
    }
    ctx->pc = 0x1618B0u;
    // 0x1618b0: 0xc058632  jal         func_1618C8
    ctx->pc = 0x1618B0u;
    SET_GPR_U32(ctx, 31, 0x1618B8u);
    ctx->pc = 0x1618C8u;
    if (runtime->hasFunction(0x1618C8u)) {
        auto targetFn = runtime->lookupFunction(0x1618C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618B8u; }
        if (ctx->pc != 0x1618B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001618C8_0x1618c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618B8u; }
        if (ctx->pc != 0x1618B8u) { return; }
    }
    ctx->pc = 0x1618B8u;
label_1618b8:
    // 0x1618b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1618b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1618bc:
    // 0x1618bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1618BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1618C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618BCu;
            // 0x1618c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1618C4u;
    // 0x1618c4: 0x0  nop
    ctx->pc = 0x1618c4u;
    // NOP
}
