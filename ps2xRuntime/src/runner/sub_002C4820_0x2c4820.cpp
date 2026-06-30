#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C4820
// Address: 0x2c4820 - 0x2c4940
void sub_002C4820_0x2c4820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4820_0x2c4820");
#endif

    switch (ctx->pc) {
        case 0x2c4820u: goto label_2c4820;
        case 0x2c4824u: goto label_2c4824;
        case 0x2c4828u: goto label_2c4828;
        case 0x2c482cu: goto label_2c482c;
        case 0x2c4830u: goto label_2c4830;
        case 0x2c4834u: goto label_2c4834;
        case 0x2c4838u: goto label_2c4838;
        case 0x2c483cu: goto label_2c483c;
        case 0x2c4840u: goto label_2c4840;
        case 0x2c4844u: goto label_2c4844;
        case 0x2c4848u: goto label_2c4848;
        case 0x2c484cu: goto label_2c484c;
        case 0x2c4850u: goto label_2c4850;
        case 0x2c4854u: goto label_2c4854;
        case 0x2c4858u: goto label_2c4858;
        case 0x2c485cu: goto label_2c485c;
        case 0x2c4860u: goto label_2c4860;
        case 0x2c4864u: goto label_2c4864;
        case 0x2c4868u: goto label_2c4868;
        case 0x2c486cu: goto label_2c486c;
        case 0x2c4870u: goto label_2c4870;
        case 0x2c4874u: goto label_2c4874;
        case 0x2c4878u: goto label_2c4878;
        case 0x2c487cu: goto label_2c487c;
        case 0x2c4880u: goto label_2c4880;
        case 0x2c4884u: goto label_2c4884;
        case 0x2c4888u: goto label_2c4888;
        case 0x2c488cu: goto label_2c488c;
        case 0x2c4890u: goto label_2c4890;
        case 0x2c4894u: goto label_2c4894;
        case 0x2c4898u: goto label_2c4898;
        case 0x2c489cu: goto label_2c489c;
        case 0x2c48a0u: goto label_2c48a0;
        case 0x2c48a4u: goto label_2c48a4;
        case 0x2c48a8u: goto label_2c48a8;
        case 0x2c48acu: goto label_2c48ac;
        case 0x2c48b0u: goto label_2c48b0;
        case 0x2c48b4u: goto label_2c48b4;
        case 0x2c48b8u: goto label_2c48b8;
        case 0x2c48bcu: goto label_2c48bc;
        case 0x2c48c0u: goto label_2c48c0;
        case 0x2c48c4u: goto label_2c48c4;
        case 0x2c48c8u: goto label_2c48c8;
        case 0x2c48ccu: goto label_2c48cc;
        case 0x2c48d0u: goto label_2c48d0;
        case 0x2c48d4u: goto label_2c48d4;
        case 0x2c48d8u: goto label_2c48d8;
        case 0x2c48dcu: goto label_2c48dc;
        case 0x2c48e0u: goto label_2c48e0;
        case 0x2c48e4u: goto label_2c48e4;
        case 0x2c48e8u: goto label_2c48e8;
        case 0x2c48ecu: goto label_2c48ec;
        case 0x2c48f0u: goto label_2c48f0;
        case 0x2c48f4u: goto label_2c48f4;
        case 0x2c48f8u: goto label_2c48f8;
        case 0x2c48fcu: goto label_2c48fc;
        case 0x2c4900u: goto label_2c4900;
        case 0x2c4904u: goto label_2c4904;
        case 0x2c4908u: goto label_2c4908;
        case 0x2c490cu: goto label_2c490c;
        case 0x2c4910u: goto label_2c4910;
        case 0x2c4914u: goto label_2c4914;
        case 0x2c4918u: goto label_2c4918;
        case 0x2c491cu: goto label_2c491c;
        case 0x2c4920u: goto label_2c4920;
        case 0x2c4924u: goto label_2c4924;
        case 0x2c4928u: goto label_2c4928;
        case 0x2c492cu: goto label_2c492c;
        case 0x2c4930u: goto label_2c4930;
        case 0x2c4934u: goto label_2c4934;
        case 0x2c4938u: goto label_2c4938;
        case 0x2c493cu: goto label_2c493c;
        default: break;
    }

    ctx->pc = 0x2c4820u;

label_2c4820:
    // 0x2c4820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4824:
    // 0x2c4824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4828:
    // 0x2c4828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c482c:
    // 0x2c482c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c4830:
    // 0x2c4830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c4830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c4834:
    // 0x2c4834: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_2c4838:
    if (ctx->pc == 0x2C4838u) {
        ctx->pc = 0x2C4838u;
            // 0x2c4838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C483Cu;
        goto label_2c483c;
    }
    ctx->pc = 0x2C4834u;
    {
        const bool branch_taken_0x2c4834 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4834u;
            // 0x2c4838: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4834) {
            ctx->pc = 0x2C486Cu;
            goto label_2c486c;
        }
    }
    ctx->pc = 0x2C483Cu;
label_2c483c:
    // 0x2c483c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c4840:
    // 0x2c4840: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2c4844:
    if (ctx->pc == 0x2C4844u) {
        ctx->pc = 0x2C4844u;
            // 0x2c4844: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2C4848u;
        goto label_2c4848;
    }
    ctx->pc = 0x2C4840u;
    {
        const bool branch_taken_0x2c4840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4840) {
            ctx->pc = 0x2C4844u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4840u;
            // 0x2c4844: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4858u;
            goto label_2c4858;
        }
    }
    ctx->pc = 0x2C4848u;
label_2c4848:
    // 0x2c4848: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2c4848u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2c484c:
    // 0x2c484c: 0xc0407c0  jal         func_101F00
label_2c4850:
    if (ctx->pc == 0x2C4850u) {
        ctx->pc = 0x2C4850u;
            // 0x2c4850: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->pc = 0x2C4854u;
        goto label_2c4854;
    }
    ctx->pc = 0x2C484Cu;
    SET_GPR_U32(ctx, 31, 0x2C4854u);
    ctx->pc = 0x2C4850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C484Cu;
            // 0x2c4850: 0x24a533e0  addiu       $a1, $a1, 0x33E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4854u; }
        if (ctx->pc != 0x2C4854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4854u; }
        if (ctx->pc != 0x2C4854u) { return; }
    }
    ctx->pc = 0x2C4854u;
label_2c4854:
    // 0x2c4854: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c4854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c4858:
    // 0x2c4858: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4858u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c485c:
    // 0x2c485c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2c4860:
    if (ctx->pc == 0x2C4860u) {
        ctx->pc = 0x2C4860u;
            // 0x2c4860: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x2C4864u;
        goto label_2c4864;
    }
    ctx->pc = 0x2C485Cu;
    {
        const bool branch_taken_0x2c485c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C4860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C485Cu;
            // 0x2c4860: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c485c) {
            ctx->pc = 0x2C486Cu;
            goto label_2c486c;
        }
    }
    ctx->pc = 0x2C4864u;
label_2c4864:
    // 0x2c4864: 0xc0400a8  jal         func_1002A0
label_2c4868:
    if (ctx->pc == 0x2C4868u) {
        ctx->pc = 0x2C4868u;
            // 0x2c4868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C486Cu;
        goto label_2c486c;
    }
    ctx->pc = 0x2C4864u;
    SET_GPR_U32(ctx, 31, 0x2C486Cu);
    ctx->pc = 0x2C4868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4864u;
            // 0x2c4868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C486Cu; }
        if (ctx->pc != 0x2C486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C486Cu; }
        if (ctx->pc != 0x2C486Cu) { return; }
    }
    ctx->pc = 0x2C486Cu;
label_2c486c:
    // 0x2c486c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c486cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c4870:
    // 0x2c4870: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4874:
    // 0x2c4874: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4874u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4878:
    // 0x2c4878: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4878u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c487c:
    // 0x2c487c: 0x3e00008  jr          $ra
label_2c4880:
    if (ctx->pc == 0x2C4880u) {
        ctx->pc = 0x2C4880u;
            // 0x2c4880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C4884u;
        goto label_2c4884;
    }
    ctx->pc = 0x2C487Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C487Cu;
            // 0x2c4880: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C4884u;
label_2c4884:
    // 0x2c4884: 0x0  nop
    ctx->pc = 0x2c4884u;
    // NOP
label_2c4888:
    // 0x2c4888: 0x0  nop
    ctx->pc = 0x2c4888u;
    // NOP
label_2c488c:
    // 0x2c488c: 0x0  nop
    ctx->pc = 0x2c488cu;
    // NOP
label_2c4890:
    // 0x2c4890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4894:
    // 0x2c4894: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4898:
    // 0x2c4898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c4898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2c489c:
    // 0x2c489c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c489cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2c48a0:
    // 0x2c48a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c48a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c48a4:
    // 0x2c48a4: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_2c48a8:
    if (ctx->pc == 0x2C48A8u) {
        ctx->pc = 0x2C48A8u;
            // 0x2c48a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C48ACu;
        goto label_2c48ac;
    }
    ctx->pc = 0x2C48A4u;
    {
        const bool branch_taken_0x2c48a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C48A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48A4u;
            // 0x2c48a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48a4) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C48ACu;
label_2c48ac:
    // 0x2c48ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c48acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c48b0:
    // 0x2c48b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c48b4:
    // 0x2c48b4: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x2c48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
label_2c48b8:
    // 0x2c48b8: 0x24421050  addiu       $v0, $v0, 0x1050
    ctx->pc = 0x2c48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4176));
label_2c48bc:
    // 0x2c48bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c48bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c48c0:
    // 0x2c48c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c48c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c48c4:
    // 0x2c48c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2c48c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c48c8:
    // 0x2c48c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c48c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c48cc:
    // 0x2c48cc: 0x320f809  jalr        $t9
label_2c48d0:
    if (ctx->pc == 0x2C48D0u) {
        ctx->pc = 0x2C48D4u;
        goto label_2c48d4;
    }
    ctx->pc = 0x2C48CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C48D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C48D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C48D4u; }
            if (ctx->pc != 0x2C48D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C48D4u;
label_2c48d4:
    // 0x2c48d4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_2c48d8:
    if (ctx->pc == 0x2C48D8u) {
        ctx->pc = 0x2C48D8u;
            // 0x2c48d8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2C48DCu;
        goto label_2c48dc;
    }
    ctx->pc = 0x2C48D4u;
    {
        const bool branch_taken_0x2c48d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c48d4) {
            ctx->pc = 0x2C48D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48D4u;
            // 0x2c48d8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C4914u;
            goto label_2c4914;
        }
    }
    ctx->pc = 0x2C48DCu;
label_2c48dc:
    // 0x2c48dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c48dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2c48e0:
    // 0x2c48e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c48e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2c48e4:
    // 0x2c48e4: 0x2463e860  addiu       $v1, $v1, -0x17A0
    ctx->pc = 0x2c48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961248));
label_2c48e8:
    // 0x2c48e8: 0x2442e8a0  addiu       $v0, $v0, -0x1760
    ctx->pc = 0x2c48e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961312));
label_2c48ec:
    // 0x2c48ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c48ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2c48f0:
    // 0x2c48f0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2c48f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2c48f4:
    // 0x2c48f4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2c48f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c48f8:
    // 0x2c48f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2c48f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2c48fc:
    // 0x2c48fc: 0x320f809  jalr        $t9
label_2c4900:
    if (ctx->pc == 0x2C4900u) {
        ctx->pc = 0x2C4900u;
            // 0x2c4900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4904u;
        goto label_2c4904;
    }
    ctx->pc = 0x2C48FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2C4904u);
        ctx->pc = 0x2C4900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C48FCu;
            // 0x2c4900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C4904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C4904u; }
            if (ctx->pc != 0x2C4904u) { return; }
        }
        }
    }
    ctx->pc = 0x2C4904u;
label_2c4904:
    // 0x2c4904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c4904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c4908:
    // 0x2c4908: 0xc0aee40  jal         func_2BB900
label_2c490c:
    if (ctx->pc == 0x2C490Cu) {
        ctx->pc = 0x2C490Cu;
            // 0x2c490c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4910u;
        goto label_2c4910;
    }
    ctx->pc = 0x2C4908u;
    SET_GPR_U32(ctx, 31, 0x2C4910u);
    ctx->pc = 0x2C490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4908u;
            // 0x2c490c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB900u;
    if (runtime->hasFunction(0x2BB900u)) {
        auto targetFn = runtime->lookupFunction(0x2BB900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4910u; }
        if (ctx->pc != 0x2C4910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB900_0x2bb900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4910u; }
        if (ctx->pc != 0x2C4910u) { return; }
    }
    ctx->pc = 0x2C4910u;
label_2c4910:
    // 0x2c4910: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2c4910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2c4914:
    // 0x2c4914: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c4914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2c4918:
    // 0x2c4918: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2c491c:
    if (ctx->pc == 0x2C491Cu) {
        ctx->pc = 0x2C491Cu;
            // 0x2c491c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4920u;
        goto label_2c4920;
    }
    ctx->pc = 0x2C4918u;
    {
        const bool branch_taken_0x2c4918 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c4918) {
            ctx->pc = 0x2C491Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4918u;
            // 0x2c491c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C492Cu;
            goto label_2c492c;
        }
    }
    ctx->pc = 0x2C4920u;
label_2c4920:
    // 0x2c4920: 0xc0400a8  jal         func_1002A0
label_2c4924:
    if (ctx->pc == 0x2C4924u) {
        ctx->pc = 0x2C4924u;
            // 0x2c4924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C4928u;
        goto label_2c4928;
    }
    ctx->pc = 0x2C4920u;
    SET_GPR_U32(ctx, 31, 0x2C4928u);
    ctx->pc = 0x2C4924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4920u;
            // 0x2c4924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4928u; }
        if (ctx->pc != 0x2C4928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4928u; }
        if (ctx->pc != 0x2C4928u) { return; }
    }
    ctx->pc = 0x2C4928u;
label_2c4928:
    // 0x2c4928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c4928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c492c:
    // 0x2c492c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4930:
    // 0x2c4930: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c4930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c4934:
    // 0x2c4934: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c4934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2c4938:
    // 0x2c4938: 0x3e00008  jr          $ra
label_2c493c:
    if (ctx->pc == 0x2C493Cu) {
        ctx->pc = 0x2C493Cu;
            // 0x2c493c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C4940u;
        goto label_fallthrough_0x2c4938;
    }
    ctx->pc = 0x2C4938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C4938u;
            // 0x2c493c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c4938:
    ctx->pc = 0x2C4940u;
}
