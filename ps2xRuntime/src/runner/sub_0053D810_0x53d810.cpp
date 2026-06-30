#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053D810
// Address: 0x53d810 - 0x53d910
void sub_0053D810_0x53d810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053D810_0x53d810");
#endif

    switch (ctx->pc) {
        case 0x53d810u: goto label_53d810;
        case 0x53d814u: goto label_53d814;
        case 0x53d818u: goto label_53d818;
        case 0x53d81cu: goto label_53d81c;
        case 0x53d820u: goto label_53d820;
        case 0x53d824u: goto label_53d824;
        case 0x53d828u: goto label_53d828;
        case 0x53d82cu: goto label_53d82c;
        case 0x53d830u: goto label_53d830;
        case 0x53d834u: goto label_53d834;
        case 0x53d838u: goto label_53d838;
        case 0x53d83cu: goto label_53d83c;
        case 0x53d840u: goto label_53d840;
        case 0x53d844u: goto label_53d844;
        case 0x53d848u: goto label_53d848;
        case 0x53d84cu: goto label_53d84c;
        case 0x53d850u: goto label_53d850;
        case 0x53d854u: goto label_53d854;
        case 0x53d858u: goto label_53d858;
        case 0x53d85cu: goto label_53d85c;
        case 0x53d860u: goto label_53d860;
        case 0x53d864u: goto label_53d864;
        case 0x53d868u: goto label_53d868;
        case 0x53d86cu: goto label_53d86c;
        case 0x53d870u: goto label_53d870;
        case 0x53d874u: goto label_53d874;
        case 0x53d878u: goto label_53d878;
        case 0x53d87cu: goto label_53d87c;
        case 0x53d880u: goto label_53d880;
        case 0x53d884u: goto label_53d884;
        case 0x53d888u: goto label_53d888;
        case 0x53d88cu: goto label_53d88c;
        case 0x53d890u: goto label_53d890;
        case 0x53d894u: goto label_53d894;
        case 0x53d898u: goto label_53d898;
        case 0x53d89cu: goto label_53d89c;
        case 0x53d8a0u: goto label_53d8a0;
        case 0x53d8a4u: goto label_53d8a4;
        case 0x53d8a8u: goto label_53d8a8;
        case 0x53d8acu: goto label_53d8ac;
        case 0x53d8b0u: goto label_53d8b0;
        case 0x53d8b4u: goto label_53d8b4;
        case 0x53d8b8u: goto label_53d8b8;
        case 0x53d8bcu: goto label_53d8bc;
        case 0x53d8c0u: goto label_53d8c0;
        case 0x53d8c4u: goto label_53d8c4;
        case 0x53d8c8u: goto label_53d8c8;
        case 0x53d8ccu: goto label_53d8cc;
        case 0x53d8d0u: goto label_53d8d0;
        case 0x53d8d4u: goto label_53d8d4;
        case 0x53d8d8u: goto label_53d8d8;
        case 0x53d8dcu: goto label_53d8dc;
        case 0x53d8e0u: goto label_53d8e0;
        case 0x53d8e4u: goto label_53d8e4;
        case 0x53d8e8u: goto label_53d8e8;
        case 0x53d8ecu: goto label_53d8ec;
        case 0x53d8f0u: goto label_53d8f0;
        case 0x53d8f4u: goto label_53d8f4;
        case 0x53d8f8u: goto label_53d8f8;
        case 0x53d8fcu: goto label_53d8fc;
        case 0x53d900u: goto label_53d900;
        case 0x53d904u: goto label_53d904;
        case 0x53d908u: goto label_53d908;
        case 0x53d90cu: goto label_53d90c;
        default: break;
    }

    ctx->pc = 0x53d810u;

label_53d810:
    // 0x53d810: 0x8159658  j           func_565960
label_53d814:
    if (ctx->pc == 0x53D814u) {
        ctx->pc = 0x53D814u;
            // 0x53d814: 0x8c840080  lw          $a0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->pc = 0x53D818u;
        goto label_53d818;
    }
    ctx->pc = 0x53D810u;
    ctx->pc = 0x53D814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53D810u;
            // 0x53d814: 0x8c840080  lw          $a0, 0x80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x565960u;
    if (runtime->hasFunction(0x565960u)) {
        auto targetFn = runtime->lookupFunction(0x565960u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00565960_0x565960(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x53D818u;
label_53d818:
    // 0x53d818: 0x0  nop
    ctx->pc = 0x53d818u;
    // NOP
label_53d81c:
    // 0x53d81c: 0x0  nop
    ctx->pc = 0x53d81cu;
    // NOP
label_53d820:
    // 0x53d820: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53d820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53d824:
    // 0x53d824: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53d824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53d828:
    // 0x53d828: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53d828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53d82c:
    // 0x53d82c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d830:
    // 0x53d830: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53d830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53d834:
    // 0x53d834: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d838:
    // 0x53d838: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x53d838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_53d83c:
    // 0x53d83c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x53d83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53d840:
    // 0x53d840: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x53d840u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_53d844:
    // 0x53d844: 0x320f809  jalr        $t9
label_53d848:
    if (ctx->pc == 0x53D848u) {
        ctx->pc = 0x53D848u;
            // 0x53d848: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D84Cu;
        goto label_53d84c;
    }
    ctx->pc = 0x53D844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D84Cu);
        ctx->pc = 0x53D848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D844u;
            // 0x53d848: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D84Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D84Cu; }
            if (ctx->pc != 0x53D84Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53D84Cu;
label_53d84c:
    // 0x53d84c: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_53d850:
    if (ctx->pc == 0x53D850u) {
        ctx->pc = 0x53D850u;
            // 0x53d850: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53D854u;
        goto label_53d854;
    }
    ctx->pc = 0x53D84Cu;
    {
        const bool branch_taken_0x53d84c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x53d84c) {
            ctx->pc = 0x53D850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53D84Cu;
            // 0x53d850: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53D86Cu;
            goto label_53d86c;
        }
    }
    ctx->pc = 0x53D854u;
label_53d854:
    // 0x53d854: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53d854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53d858:
    // 0x53d858: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53d858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53d85c:
    // 0x53d85c: 0x320f809  jalr        $t9
label_53d860:
    if (ctx->pc == 0x53D860u) {
        ctx->pc = 0x53D860u;
            // 0x53d860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D864u;
        goto label_53d864;
    }
    ctx->pc = 0x53D85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D864u);
        ctx->pc = 0x53D860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D85Cu;
            // 0x53d860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D864u; }
            if (ctx->pc != 0x53D864u) { return; }
        }
        }
    }
    ctx->pc = 0x53D864u;
label_53d864:
    // 0x53d864: 0x10000009  b           . + 4 + (0x9 << 2)
label_53d868:
    if (ctx->pc == 0x53D868u) {
        ctx->pc = 0x53D868u;
            // 0x53d868: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x53D86Cu;
        goto label_53d86c;
    }
    ctx->pc = 0x53D864u;
    {
        const bool branch_taken_0x53d864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53D868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D864u;
            // 0x53d868: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d864) {
            ctx->pc = 0x53D88Cu;
            goto label_53d88c;
        }
    }
    ctx->pc = 0x53D86Cu;
label_53d86c:
    // 0x53d86c: 0x16030006  bne         $s0, $v1, . + 4 + (0x6 << 2)
label_53d870:
    if (ctx->pc == 0x53D870u) {
        ctx->pc = 0x53D874u;
        goto label_53d874;
    }
    ctx->pc = 0x53D86Cu;
    {
        const bool branch_taken_0x53d86c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x53d86c) {
            ctx->pc = 0x53D888u;
            goto label_53d888;
        }
    }
    ctx->pc = 0x53D874u;
label_53d874:
    // 0x53d874: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53d874u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53d878:
    // 0x53d878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53d878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53d87c:
    // 0x53d87c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53d87cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53d880:
    // 0x53d880: 0x320f809  jalr        $t9
label_53d884:
    if (ctx->pc == 0x53D884u) {
        ctx->pc = 0x53D884u;
            // 0x53d884: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->pc = 0x53D888u;
        goto label_53d888;
    }
    ctx->pc = 0x53D880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D888u);
        ctx->pc = 0x53D884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D880u;
            // 0x53d884: 0x240500fa  addiu       $a1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D888u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D888u; }
            if (ctx->pc != 0x53D888u) { return; }
        }
        }
    }
    ctx->pc = 0x53D888u;
label_53d888:
    // 0x53d888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53d888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53d88c:
    // 0x53d88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53d88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53d890:
    // 0x53d890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d894:
    // 0x53d894: 0x3e00008  jr          $ra
label_53d898:
    if (ctx->pc == 0x53D898u) {
        ctx->pc = 0x53D898u;
            // 0x53d898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53D89Cu;
        goto label_53d89c;
    }
    ctx->pc = 0x53D894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D894u;
            // 0x53d898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D89Cu;
label_53d89c:
    // 0x53d89c: 0x0  nop
    ctx->pc = 0x53d89cu;
    // NOP
label_53d8a0:
    // 0x53d8a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53d8a4:
    // 0x53d8a4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x53d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_53d8a8:
    // 0x53d8a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53d8ac:
    // 0x53d8ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53d8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53d8b0:
    // 0x53d8b0: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x53d8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53d8b4:
    // 0x53d8b4: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_53d8b8:
    if (ctx->pc == 0x53D8B8u) {
        ctx->pc = 0x53D8B8u;
            // 0x53d8b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53D8BCu;
        goto label_53d8bc;
    }
    ctx->pc = 0x53D8B4u;
    {
        const bool branch_taken_0x53d8b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53D8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D8B4u;
            // 0x53d8b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53d8b4) {
            ctx->pc = 0x53D8F8u;
            goto label_53d8f8;
        }
    }
    ctx->pc = 0x53D8BCu;
label_53d8bc:
    // 0x53d8bc: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x53d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_53d8c0:
    // 0x53d8c0: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x53d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_53d8c4:
    // 0x53d8c4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x53d8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_53d8c8:
    // 0x53d8c8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x53d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_53d8cc:
    // 0x53d8cc: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x53d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_53d8d0:
    // 0x53d8d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53d8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53d8d4:
    // 0x53d8d4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x53d8d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_53d8d8:
    // 0x53d8d8: 0x320f809  jalr        $t9
label_53d8dc:
    if (ctx->pc == 0x53D8DCu) {
        ctx->pc = 0x53D8DCu;
            // 0x53d8dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x53D8E0u;
        goto label_53d8e0;
    }
    ctx->pc = 0x53D8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D8E0u);
        ctx->pc = 0x53D8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D8D8u;
            // 0x53d8dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D8E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D8E0u; }
            if (ctx->pc != 0x53D8E0u) { return; }
        }
        }
    }
    ctx->pc = 0x53D8E0u;
label_53d8e0:
    // 0x53d8e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x53d8e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_53d8e4:
    // 0x53d8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x53d8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_53d8e8:
    // 0x53d8e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x53d8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53d8ec:
    // 0x53d8ec: 0x8f3900bc  lw          $t9, 0xBC($t9)
    ctx->pc = 0x53d8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 188)));
label_53d8f0:
    // 0x53d8f0: 0x320f809  jalr        $t9
label_53d8f4:
    if (ctx->pc == 0x53D8F4u) {
        ctx->pc = 0x53D8F4u;
            // 0x53d8f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x53D8F8u;
        goto label_53d8f8;
    }
    ctx->pc = 0x53D8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53D8F8u);
        ctx->pc = 0x53D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D8F0u;
            // 0x53d8f4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53D8F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53D8F8u; }
            if (ctx->pc != 0x53D8F8u) { return; }
        }
        }
    }
    ctx->pc = 0x53D8F8u;
label_53d8f8:
    // 0x53d8f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53d8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53d8fc:
    // 0x53d8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53d8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53d900:
    // 0x53d900: 0x3e00008  jr          $ra
label_53d904:
    if (ctx->pc == 0x53D904u) {
        ctx->pc = 0x53D904u;
            // 0x53d904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53D908u;
        goto label_53d908;
    }
    ctx->pc = 0x53D900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53D900u;
            // 0x53d904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53D908u;
label_53d908:
    // 0x53d908: 0x0  nop
    ctx->pc = 0x53d908u;
    // NOP
label_53d90c:
    // 0x53d90c: 0x0  nop
    ctx->pc = 0x53d90cu;
    // NOP
}
