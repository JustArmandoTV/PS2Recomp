#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016C5D0
// Address: 0x16c5d0 - 0x16c668
void sub_0016C5D0_0x16c5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C5D0_0x16c5d0");
#endif

    switch (ctx->pc) {
        case 0x16c5e8u: goto label_16c5e8;
        case 0x16c628u: goto label_16c628;
        case 0x16c638u: goto label_16c638;
        case 0x16c640u: goto label_16c640;
        case 0x16c648u: goto label_16c648;
        case 0x16c650u: goto label_16c650;
        case 0x16c658u: goto label_16c658;
        default: break;
    }

    ctx->pc = 0x16c5d0u;

    // 0x16c5d0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16c5d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c5d8: 0x8c44aa20  lw          $a0, -0x55E0($v0)
    ctx->pc = 0x16c5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945312)));
    // 0x16c5dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16c5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c5e0: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x16C5E0u;
    SET_GPR_U32(ctx, 31, 0x16C5E8u);
    ctx->pc = 0x16C780u;
    if (runtime->hasFunction(0x16C780u)) {
        auto targetFn = runtime->lookupFunction(0x16C780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5E8u; }
        if (ctx->pc != 0x16C5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C780_0x16c780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5E8u; }
        if (ctx->pc != 0x16C5E8u) { return; }
    }
    ctx->pc = 0x16C5E8u;
label_16c5e8:
    // 0x16c5e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16c5e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c5ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c5f0: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16C5F0u;
    {
        const bool branch_taken_0x16c5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5F0u;
            // 0x16c5f4: 0x28640002  slti        $a0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5f0) {
            ctx->pc = 0x16C658u;
            goto label_16c658;
        }
    }
    ctx->pc = 0x16C5F8u;
    // 0x16c5f8: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16C5F8u;
    {
        const bool branch_taken_0x16c5f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16C5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C5F8u;
            // 0x16c5fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c5f8) {
            ctx->pc = 0x16C65Cu;
            goto label_16c65c;
        }
    }
    ctx->pc = 0x16C600u;
    // 0x16c600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c604: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16C604u;
    {
        const bool branch_taken_0x16c604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C604u;
            // 0x16c608: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c604) {
            ctx->pc = 0x16C620u;
            goto label_16c620;
        }
    }
    ctx->pc = 0x16C60Cu;
    // 0x16c60c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16C60Cu;
    {
        const bool branch_taken_0x16c60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C60Cu;
            // 0x16c610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c60c) {
            ctx->pc = 0x16C630u;
            goto label_16c630;
        }
    }
    ctx->pc = 0x16C614u;
    // 0x16c614: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16C614u;
    {
        const bool branch_taken_0x16c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c614) {
            ctx->pc = 0x16C660u;
            goto label_16c660;
        }
    }
    ctx->pc = 0x16C61Cu;
    // 0x16c61c: 0x0  nop
    ctx->pc = 0x16c61cu;
    // NOP
label_16c620:
    // 0x16c620: 0xc062210  jal         func_188840
    ctx->pc = 0x16C620u;
    SET_GPR_U32(ctx, 31, 0x16C628u);
    ctx->pc = 0x188840u;
    if (runtime->hasFunction(0x188840u)) {
        auto targetFn = runtime->lookupFunction(0x188840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C628u; }
        if (ctx->pc != 0x16C628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C628u; }
        if (ctx->pc != 0x16C628u) { return; }
    }
    ctx->pc = 0x16C628u;
label_16c628:
    // 0x16c628: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x16C628u;
    {
        const bool branch_taken_0x16c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C628u;
            // 0x16c62c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c628) {
            ctx->pc = 0x16C65Cu;
            goto label_16c65c;
        }
    }
    ctx->pc = 0x16C630u;
label_16c630:
    // 0x16c630: 0xc062210  jal         func_188840
    ctx->pc = 0x16C630u;
    SET_GPR_U32(ctx, 31, 0x16C638u);
    ctx->pc = 0x188840u;
    if (runtime->hasFunction(0x188840u)) {
        auto targetFn = runtime->lookupFunction(0x188840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C638u; }
        if (ctx->pc != 0x16C638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188840_0x188840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C638u; }
        if (ctx->pc != 0x16C638u) { return; }
    }
    ctx->pc = 0x16C638u;
label_16c638:
    // 0x16c638: 0xc062216  jal         func_188858
    ctx->pc = 0x16C638u;
    SET_GPR_U32(ctx, 31, 0x16C640u);
    ctx->pc = 0x188858u;
    if (runtime->hasFunction(0x188858u)) {
        auto targetFn = runtime->lookupFunction(0x188858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C640u; }
        if (ctx->pc != 0x16C640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188858_0x188858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C640u; }
        if (ctx->pc != 0x16C640u) { return; }
    }
    ctx->pc = 0x16C640u;
label_16c640:
    // 0x16c640: 0xc06221c  jal         func_188870
    ctx->pc = 0x16C640u;
    SET_GPR_U32(ctx, 31, 0x16C648u);
    ctx->pc = 0x188870u;
    if (runtime->hasFunction(0x188870u)) {
        auto targetFn = runtime->lookupFunction(0x188870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C648u; }
        if (ctx->pc != 0x16C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188870_0x188870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C648u; }
        if (ctx->pc != 0x16C648u) { return; }
    }
    ctx->pc = 0x16C648u;
label_16c648:
    // 0x16c648: 0xc062222  jal         func_188888
    ctx->pc = 0x16C648u;
    SET_GPR_U32(ctx, 31, 0x16C650u);
    ctx->pc = 0x188888u;
    if (runtime->hasFunction(0x188888u)) {
        auto targetFn = runtime->lookupFunction(0x188888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C650u; }
        if (ctx->pc != 0x16C650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00188888_0x188888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C650u; }
        if (ctx->pc != 0x16C650u) { return; }
    }
    ctx->pc = 0x16C650u;
label_16c650:
    // 0x16c650: 0xc06222e  jal         func_1888B8
    ctx->pc = 0x16C650u;
    SET_GPR_U32(ctx, 31, 0x16C658u);
    ctx->pc = 0x1888B8u;
    if (runtime->hasFunction(0x1888B8u)) {
        auto targetFn = runtime->lookupFunction(0x1888B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C658u; }
        if (ctx->pc != 0x16C658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001888B8_0x1888b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C658u; }
        if (ctx->pc != 0x16C658u) { return; }
    }
    ctx->pc = 0x16C658u;
label_16c658:
    // 0x16c658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16c658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c65c:
    // 0x16c65c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16c65cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16c660:
    // 0x16c660: 0x3e00008  jr          $ra
    ctx->pc = 0x16C660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16C660u;
            // 0x16c664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16C668u;
}
