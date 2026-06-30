#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045F750
// Address: 0x45f750 - 0x45f860
void sub_0045F750_0x45f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F750_0x45f750");
#endif

    switch (ctx->pc) {
        case 0x45f770u: goto label_45f770;
        case 0x45f780u: goto label_45f780;
        case 0x45f790u: goto label_45f790;
        case 0x45f844u: goto label_45f844;
        default: break;
    }

    ctx->pc = 0x45f750u;

    // 0x45f750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x45f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x45f754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x45f758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45f75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45f75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45f760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x45f760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f764: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45f764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x45f768: 0xc0c9a58  jal         func_326960
    ctx->pc = 0x45F768u;
    SET_GPR_U32(ctx, 31, 0x45F770u);
    ctx->pc = 0x45F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F768u;
            // 0x45f76c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F770u; }
        if (ctx->pc != 0x45F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F770u; }
        if (ctx->pc != 0x45F770u) { return; }
    }
    ctx->pc = 0x45F770u;
label_45f770:
    // 0x45f770: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45f770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x45f774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45f774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f778: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45F778u;
    SET_GPR_U32(ctx, 31, 0x45F780u);
    ctx->pc = 0x45F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F778u;
            // 0x45f77c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F780u; }
        if (ctx->pc != 0x45F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F780u; }
        if (ctx->pc != 0x45F780u) { return; }
    }
    ctx->pc = 0x45F780u;
label_45f780:
    // 0x45f780: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x45f780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x45f784: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45f788: 0xc123328  jal         func_48CCA0
    ctx->pc = 0x45F788u;
    SET_GPR_U32(ctx, 31, 0x45F790u);
    ctx->pc = 0x45F78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F788u;
            // 0x45f78c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F790u; }
        if (ctx->pc != 0x45F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F790u; }
        if (ctx->pc != 0x45F790u) { return; }
    }
    ctx->pc = 0x45F790u;
label_45f790:
    // 0x45f790: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x45f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x45f794: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x45F794u;
    {
        const bool branch_taken_0x45f794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F794u;
            // 0x45f798: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f794) {
            ctx->pc = 0x45F7ACu;
            goto label_45f7ac;
        }
    }
    ctx->pc = 0x45F79Cu;
    // 0x45f79c: 0x2e020009  sltiu       $v0, $s0, 0x9
    ctx->pc = 0x45f79cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x45f7a0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x45F7A0u;
    {
        const bool branch_taken_0x45f7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x45F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F7A0u;
            // 0x45f7a4: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f7a0) {
            ctx->pc = 0x45F7ACu;
            goto label_45f7ac;
        }
    }
    ctx->pc = 0x45F7A8u;
    // 0x45f7a8: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x45f7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_45f7ac:
    // 0x45f7ac: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x45F7ACu;
    {
        const bool branch_taken_0x45f7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x45F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F7ACu;
            // 0x45f7b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f7ac) {
            ctx->pc = 0x45F7E4u;
            goto label_45f7e4;
        }
    }
    ctx->pc = 0x45F7B4u;
    // 0x45f7b4: 0x2e010007  sltiu       $at, $s0, 0x7
    ctx->pc = 0x45f7b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x45f7b8: 0x5020001a  beql        $at, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x45F7B8u;
    {
        const bool branch_taken_0x45f7b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f7b8) {
            ctx->pc = 0x45F7BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45F7B8u;
            // 0x45f7bc: 0x3c023f79  lui         $v0, 0x3F79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45F824u;
            goto label_45f824;
        }
    }
    ctx->pc = 0x45F7C0u;
    // 0x45f7c0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x45f7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x45f7c4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45f7c8: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x45f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
    // 0x45f7cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45f7d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45f7d4: 0x400008  jr          $v0
    ctx->pc = 0x45F7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45F7DCu: goto label_45f7dc;
            case 0x45F820u: goto label_45f820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45F7DCu;
label_45f7dc:
    // 0x45f7dc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x45F7DCu;
    {
        const bool branch_taken_0x45f7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F7DCu;
            // 0x45f7e0: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f7dc) {
            ctx->pc = 0x45F820u;
            goto label_45f820;
        }
    }
    ctx->pc = 0x45F7E4u;
label_45f7e4:
    // 0x45f7e4: 0x2e010008  sltiu       $at, $s0, 0x8
    ctx->pc = 0x45f7e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x45f7e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x45F7E8u;
    {
        const bool branch_taken_0x45f7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45f7e8) {
            ctx->pc = 0x45F820u;
            goto label_45f820;
        }
    }
    ctx->pc = 0x45F7F0u;
    // 0x45f7f0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x45f7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x45f7f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x45f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x45f7f8: 0x2463e4a0  addiu       $v1, $v1, -0x1B60
    ctx->pc = 0x45f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960288));
    // 0x45f7fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45f800: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45f800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45f804: 0x400008  jr          $v0
    ctx->pc = 0x45F804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45F80Cu: goto label_45f80c;
            case 0x45F814u: goto label_45f814;
            case 0x45F81Cu: goto label_45f81c;
            case 0x45F820u: goto label_45f820;
            default: break;
        }
        return;
    }
    ctx->pc = 0x45F80Cu;
label_45f80c:
    // 0x45f80c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x45F80Cu;
    {
        const bool branch_taken_0x45f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F80Cu;
            // 0x45f810: 0x26060006  addiu       $a2, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f80c) {
            ctx->pc = 0x45F820u;
            goto label_45f820;
        }
    }
    ctx->pc = 0x45F814u;
label_45f814:
    // 0x45f814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45F814u;
    {
        const bool branch_taken_0x45f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F814u;
            // 0x45f818: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f814) {
            ctx->pc = 0x45F820u;
            goto label_45f820;
        }
    }
    ctx->pc = 0x45F81Cu;
label_45f81c:
    // 0x45f81c: 0x26060005  addiu       $a2, $s0, 0x5
    ctx->pc = 0x45f81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_45f820:
    // 0x45f820: 0x3c023f79  lui         $v0, 0x3F79
    ctx->pc = 0x45f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16249 << 16));
label_45f824:
    // 0x45f824: 0x8e240054  lw          $a0, 0x54($s1)
    ctx->pc = 0x45f824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x45f828: 0x34429999  ori         $v0, $v0, 0x9999
    ctx->pc = 0x45f828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39321);
    // 0x45f82c: 0x2408fc18  addiu       $t0, $zero, -0x3E8
    ctx->pc = 0x45f82cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966296));
    // 0x45f830: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45f830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45f834: 0x2407ff15  addiu       $a3, $zero, -0xEB
    ctx->pc = 0x45f834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967061));
    // 0x45f838: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45f838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x45f83c: 0xc0c8530  jal         func_3214C0
    ctx->pc = 0x45F83Cu;
    SET_GPR_U32(ctx, 31, 0x45F844u);
    ctx->pc = 0x45F840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45F83Cu;
            // 0x45f840: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3214C0u;
    if (runtime->hasFunction(0x3214C0u)) {
        auto targetFn = runtime->lookupFunction(0x3214C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F844u; }
        if (ctx->pc != 0x45F844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003214C0_0x3214c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45F844u; }
        if (ctx->pc != 0x45F844u) { return; }
    }
    ctx->pc = 0x45F844u;
label_45f844:
    // 0x45f844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45f844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45f848: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45f848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45f84c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45f84cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45f850: 0x3e00008  jr          $ra
    ctx->pc = 0x45F850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45F850u;
            // 0x45f854: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45F858u;
    // 0x45f858: 0x0  nop
    ctx->pc = 0x45f858u;
    // NOP
    // 0x45f85c: 0x0  nop
    ctx->pc = 0x45f85cu;
    // NOP
}
