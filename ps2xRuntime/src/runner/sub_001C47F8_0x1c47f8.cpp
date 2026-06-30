#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C47F8
// Address: 0x1c47f8 - 0x1c48d8
void sub_001C47F8_0x1c47f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C47F8_0x1c47f8");
#endif

    switch (ctx->pc) {
        case 0x1c47f8u: goto label_1c47f8;
        case 0x1c47fcu: goto label_1c47fc;
        case 0x1c4800u: goto label_1c4800;
        case 0x1c4804u: goto label_1c4804;
        case 0x1c4808u: goto label_1c4808;
        case 0x1c480cu: goto label_1c480c;
        case 0x1c4810u: goto label_1c4810;
        case 0x1c4814u: goto label_1c4814;
        case 0x1c4818u: goto label_1c4818;
        case 0x1c481cu: goto label_1c481c;
        case 0x1c4820u: goto label_1c4820;
        case 0x1c4824u: goto label_1c4824;
        case 0x1c4828u: goto label_1c4828;
        case 0x1c482cu: goto label_1c482c;
        case 0x1c4830u: goto label_1c4830;
        case 0x1c4834u: goto label_1c4834;
        case 0x1c4838u: goto label_1c4838;
        case 0x1c483cu: goto label_1c483c;
        case 0x1c4840u: goto label_1c4840;
        case 0x1c4844u: goto label_1c4844;
        case 0x1c4848u: goto label_1c4848;
        case 0x1c484cu: goto label_1c484c;
        case 0x1c4850u: goto label_1c4850;
        case 0x1c4854u: goto label_1c4854;
        case 0x1c4858u: goto label_1c4858;
        case 0x1c485cu: goto label_1c485c;
        case 0x1c4860u: goto label_1c4860;
        case 0x1c4864u: goto label_1c4864;
        case 0x1c4868u: goto label_1c4868;
        case 0x1c486cu: goto label_1c486c;
        case 0x1c4870u: goto label_1c4870;
        case 0x1c4874u: goto label_1c4874;
        case 0x1c4878u: goto label_1c4878;
        case 0x1c487cu: goto label_1c487c;
        case 0x1c4880u: goto label_1c4880;
        case 0x1c4884u: goto label_1c4884;
        case 0x1c4888u: goto label_1c4888;
        case 0x1c488cu: goto label_1c488c;
        case 0x1c4890u: goto label_1c4890;
        case 0x1c4894u: goto label_1c4894;
        case 0x1c4898u: goto label_1c4898;
        case 0x1c489cu: goto label_1c489c;
        case 0x1c48a0u: goto label_1c48a0;
        case 0x1c48a4u: goto label_1c48a4;
        case 0x1c48a8u: goto label_1c48a8;
        case 0x1c48acu: goto label_1c48ac;
        case 0x1c48b0u: goto label_1c48b0;
        case 0x1c48b4u: goto label_1c48b4;
        case 0x1c48b8u: goto label_1c48b8;
        case 0x1c48bcu: goto label_1c48bc;
        case 0x1c48c0u: goto label_1c48c0;
        case 0x1c48c4u: goto label_1c48c4;
        case 0x1c48c8u: goto label_1c48c8;
        case 0x1c48ccu: goto label_1c48cc;
        case 0x1c48d0u: goto label_1c48d0;
        case 0x1c48d4u: goto label_1c48d4;
        default: break;
    }

    ctx->pc = 0x1c47f8u;

label_1c47f8:
    // 0x1c47f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c47f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c47fc:
    // 0x1c47fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c47fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1c4800:
    // 0x1c4800: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1c4800u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_1c4804:
    // 0x1c4804: 0x8e42a4d8  lw          $v0, -0x5B28($s2)
    ctx->pc = 0x1c4804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c4808:
    // 0x1c4808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c480c:
    // 0x1c480c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1c480cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c4810:
    // 0x1c4810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c4814:
    // 0x1c4814: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c4814u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c4818:
    // 0x1c4818: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c481c:
    if (ctx->pc == 0x1C481Cu) {
        ctx->pc = 0x1C481Cu;
            // 0x1c481c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1C4820u;
        goto label_1c4820;
    }
    ctx->pc = 0x1C4818u;
    {
        const bool branch_taken_0x1c4818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4818u;
            // 0x1c481c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4818) {
            ctx->pc = 0x1C4830u;
            goto label_1c4830;
        }
    }
    ctx->pc = 0x1C4820u;
label_1c4820:
    // 0x1c4820: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c4820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1c4824:
    // 0x1c4824: 0x2410ff35  addiu       $s0, $zero, -0xCB
    ctx->pc = 0x1c4824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
label_1c4828:
    // 0x1c4828: 0x10000023  b           . + 4 + (0x23 << 2)
label_1c482c:
    if (ctx->pc == 0x1C482Cu) {
        ctx->pc = 0x1C482Cu;
            // 0x1c482c: 0x2402ff35  addiu       $v0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C4830u;
        goto label_1c4830;
    }
    ctx->pc = 0x1C4828u;
    {
        const bool branch_taken_0x1c4828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C482Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4828u;
            // 0x1c482c: 0x2402ff35  addiu       $v0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4828) {
            ctx->pc = 0x1C48B8u;
            goto label_1c48b8;
        }
    }
    ctx->pc = 0x1C4830u;
label_1c4830:
    // 0x1c4830: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1c4830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_1c4834:
    // 0x1c4834: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_1c4838:
    if (ctx->pc == 0x1C4838u) {
        ctx->pc = 0x1C4838u;
            // 0x1c4838: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->pc = 0x1C483Cu;
        goto label_1c483c;
    }
    ctx->pc = 0x1C4834u;
    {
        const bool branch_taken_0x1c4834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4834u;
            // 0x1c4838: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4834) {
            ctx->pc = 0x1C48B4u;
            goto label_1c48b4;
        }
    }
    ctx->pc = 0x1C483Cu;
label_1c483c:
    // 0x1c483c: 0x1100000c  beqz        $t0, . + 4 + (0xC << 2)
label_1c4840:
    if (ctx->pc == 0x1C4840u) {
        ctx->pc = 0x1C4840u;
            // 0x1c4840: 0x55400  sll         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x1C4844u;
        goto label_1c4844;
    }
    ctx->pc = 0x1C483Cu;
    {
        const bool branch_taken_0x1c483c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C483Cu;
            // 0x1c4840: 0x55400  sll         $t2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c483c) {
            ctx->pc = 0x1C4870u;
            goto label_1c4870;
        }
    }
    ctx->pc = 0x1C4844u;
label_1c4844:
    // 0x1c4844: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c4844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1c4848:
    // 0x1c4848: 0x3c11006e  lui         $s1, 0x6E
    ctx->pc = 0x1c4848u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)110 << 16));
label_1c484c:
    // 0x1c484c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1c484cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c4850:
    // 0x1c4850: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c4850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4854:
    // 0x1c4854: 0x26241ef8  addiu       $a0, $s1, 0x1EF8
    ctx->pc = 0x1c4854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7928));
label_1c4858:
    // 0x1c4858: 0x24a5bdf8  addiu       $a1, $a1, -0x4208
    ctx->pc = 0x1c4858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950392));
label_1c485c:
    // 0x1c485c: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x1c485cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
label_1c4860:
    // 0x1c4860: 0xc04ae62  jal         func_12B988
label_1c4864:
    if (ctx->pc == 0x1C4864u) {
        ctx->pc = 0x1C4864u;
            // 0x1c4864: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C4868u;
        goto label_1c4868;
    }
    ctx->pc = 0x1C4860u;
    SET_GPR_U32(ctx, 31, 0x1C4868u);
    ctx->pc = 0x1C4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4860u;
            // 0x1c4864: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4868u; }
        if (ctx->pc != 0x1C4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4868u; }
        if (ctx->pc != 0x1C4868u) { return; }
    }
    ctx->pc = 0x1C4868u;
label_1c4868:
    // 0x1c4868: 0x1000000c  b           . + 4 + (0xC << 2)
label_1c486c:
    if (ctx->pc == 0x1C486Cu) {
        ctx->pc = 0x1C486Cu;
            // 0x1c486c: 0x8e43a4d8  lw          $v1, -0x5B28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
        ctx->pc = 0x1C4870u;
        goto label_1c4870;
    }
    ctx->pc = 0x1C4868u;
    {
        const bool branch_taken_0x1c4868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C486Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4868u;
            // 0x1c486c: 0x8e43a4d8  lw          $v1, -0x5B28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4868) {
            ctx->pc = 0x1C489Cu;
            goto label_1c489c;
        }
    }
    ctx->pc = 0x1C4870u;
label_1c4870:
    // 0x1c4870: 0x54c00  sll         $t1, $a1, 16
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_1c4874:
    // 0x1c4874: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c4874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1c4878:
    // 0x1c4878: 0x3c11006e  lui         $s1, 0x6E
    ctx->pc = 0x1c4878u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)110 << 16));
label_1c487c:
    // 0x1c487c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1c487cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c4880:
    // 0x1c4880: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c4880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c4884:
    // 0x1c4884: 0x26241ef8  addiu       $a0, $s1, 0x1EF8
    ctx->pc = 0x1c4884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7928));
label_1c4888:
    // 0x1c4888: 0x24a5be10  addiu       $a1, $a1, -0x41F0
    ctx->pc = 0x1c4888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950416));
label_1c488c:
    // 0x1c488c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x1c488cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
label_1c4890:
    // 0x1c4890: 0xc04ae62  jal         func_12B988
label_1c4894:
    if (ctx->pc == 0x1C4894u) {
        ctx->pc = 0x1C4894u;
            // 0x1c4894: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C4898u;
        goto label_1c4898;
    }
    ctx->pc = 0x1C4890u;
    SET_GPR_U32(ctx, 31, 0x1C4898u);
    ctx->pc = 0x1C4894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4890u;
            // 0x1c4894: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4898u; }
        if (ctx->pc != 0x1C4898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4898u; }
        if (ctx->pc != 0x1C4898u) { return; }
    }
    ctx->pc = 0x1C4898u;
label_1c4898:
    // 0x1c4898: 0x8e43a4d8  lw          $v1, -0x5B28($s2)
    ctx->pc = 0x1c4898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
label_1c489c:
    // 0x1c489c: 0x26251ef8  addiu       $a1, $s1, 0x1EF8
    ctx->pc = 0x1c489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7928));
label_1c48a0:
    // 0x1c48a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c48a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c48a4:
    // 0x1c48a4: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1c48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1c48a8:
    // 0x1c48a8: 0x40f809  jalr        $v0
label_1c48ac:
    if (ctx->pc == 0x1C48ACu) {
        ctx->pc = 0x1C48ACu;
            // 0x1c48ac: 0x8c640044  lw          $a0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->pc = 0x1C48B0u;
        goto label_1c48b0;
    }
    ctx->pc = 0x1C48A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C48B0u);
        ctx->pc = 0x1C48ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48A8u;
            // 0x1c48ac: 0x8c640044  lw          $a0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C48B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C48B0u; }
            if (ctx->pc != 0x1C48B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1C48B0u;
label_1c48b0:
    // 0x1c48b0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1c48b4:
    // 0x1c48b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c48b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c48b8:
    // 0x1c48b8: 0xac70a4dc  sw          $s0, -0x5B24($v1)
    ctx->pc = 0x1c48b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943964), GPR_U32(ctx, 16));
label_1c48bc:
    // 0x1c48bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c48bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c48c0:
    // 0x1c48c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c48c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c48c4:
    // 0x1c48c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c48c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c48c8:
    // 0x1c48c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c48c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c48cc:
    // 0x1c48cc: 0x3e00008  jr          $ra
label_1c48d0:
    if (ctx->pc == 0x1C48D0u) {
        ctx->pc = 0x1C48D0u;
            // 0x1c48d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C48D4u;
        goto label_1c48d4;
    }
    ctx->pc = 0x1C48CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C48CCu;
            // 0x1c48d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C48D4u;
label_1c48d4:
    // 0x1c48d4: 0x0  nop
    ctx->pc = 0x1c48d4u;
    // NOP
}
