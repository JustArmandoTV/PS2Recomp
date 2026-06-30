#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00248800
// Address: 0x248800 - 0x2488c0
void sub_00248800_0x248800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248800_0x248800");
#endif

    switch (ctx->pc) {
        case 0x24885cu: goto label_24885c;
        case 0x248880u: goto label_248880;
        default: break;
    }

    ctx->pc = 0x248800u;

    // 0x248800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x248804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x248808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24880c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x248810: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x248810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248814: 0x2ca10200  sltiu       $at, $a1, 0x200
    ctx->pc = 0x248814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x248818: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x248818u;
    {
        const bool branch_taken_0x248818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x24881Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248818u;
            // 0x24881c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248818) {
            ctx->pc = 0x248848u;
            goto label_248848;
        }
    }
    ctx->pc = 0x248820u;
    // 0x248820: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x248820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x248824: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x248824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x248828: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x248828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24882c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x248830: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x248830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x248834: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x248838: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24883c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x24883cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x248840: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x248840u;
    {
        const bool branch_taken_0x248840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248840u;
            // 0x248844: 0x658021  addu        $s0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248840) {
            ctx->pc = 0x2488A8u;
            goto label_2488a8;
        }
    }
    ctx->pc = 0x248848u;
label_248848:
    // 0x248848: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x248848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x24884c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x24884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x248850: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x248850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x248854: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x248854u;
    SET_GPR_U32(ctx, 31, 0x24885Cu);
    ctx->pc = 0x248858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248854u;
            // 0x248858: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24885Cu; }
        if (ctx->pc != 0x24885Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24885Cu; }
        if (ctx->pc != 0x24885Cu) { return; }
    }
    ctx->pc = 0x24885Cu;
label_24885c:
    // 0x24885c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24885cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248860: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x248860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x248864: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x248864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x248868: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x248868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x24886c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x24886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x248870: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x248870u;
    {
        const bool branch_taken_0x248870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x248874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248870u;
            // 0x248874: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248870) {
            ctx->pc = 0x248880u;
            goto label_248880;
        }
    }
    ctx->pc = 0x248878u;
    // 0x248878: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x248878u;
    SET_GPR_U32(ctx, 31, 0x248880u);
    ctx->pc = 0x24887Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248878u;
            // 0x24887c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248880u; }
        if (ctx->pc != 0x248880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248880u; }
        if (ctx->pc != 0x248880u) { return; }
    }
    ctx->pc = 0x248880u;
label_248880:
    // 0x248880: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x248880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x248884: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x248884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x248888: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x248888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24888c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x24888cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x248890: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x248890u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x248894: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x248894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x248898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x248898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24889c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x24889cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2488a0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2488a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2488a4: 0x0  nop
    ctx->pc = 0x2488a4u;
    // NOP
label_2488a8:
    // 0x2488a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2488a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2488ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2488acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2488b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2488b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2488b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2488b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2488b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2488B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2488BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2488B8u;
            // 0x2488bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2488C0u;
}
