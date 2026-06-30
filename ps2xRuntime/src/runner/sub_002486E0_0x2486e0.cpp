#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002486E0
// Address: 0x2486e0 - 0x248800
void sub_002486E0_0x2486e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002486E0_0x2486e0");
#endif

    switch (ctx->pc) {
        case 0x2486e0u: goto label_2486e0;
        case 0x2486e4u: goto label_2486e4;
        case 0x2486e8u: goto label_2486e8;
        case 0x2486ecu: goto label_2486ec;
        case 0x2486f0u: goto label_2486f0;
        case 0x2486f4u: goto label_2486f4;
        case 0x2486f8u: goto label_2486f8;
        case 0x2486fcu: goto label_2486fc;
        case 0x248700u: goto label_248700;
        case 0x248704u: goto label_248704;
        case 0x248708u: goto label_248708;
        case 0x24870cu: goto label_24870c;
        case 0x248710u: goto label_248710;
        case 0x248714u: goto label_248714;
        case 0x248718u: goto label_248718;
        case 0x24871cu: goto label_24871c;
        case 0x248720u: goto label_248720;
        case 0x248724u: goto label_248724;
        case 0x248728u: goto label_248728;
        case 0x24872cu: goto label_24872c;
        case 0x248730u: goto label_248730;
        case 0x248734u: goto label_248734;
        case 0x248738u: goto label_248738;
        case 0x24873cu: goto label_24873c;
        case 0x248740u: goto label_248740;
        case 0x248744u: goto label_248744;
        case 0x248748u: goto label_248748;
        case 0x24874cu: goto label_24874c;
        case 0x248750u: goto label_248750;
        case 0x248754u: goto label_248754;
        case 0x248758u: goto label_248758;
        case 0x24875cu: goto label_24875c;
        case 0x248760u: goto label_248760;
        case 0x248764u: goto label_248764;
        case 0x248768u: goto label_248768;
        case 0x24876cu: goto label_24876c;
        case 0x248770u: goto label_248770;
        case 0x248774u: goto label_248774;
        case 0x248778u: goto label_248778;
        case 0x24877cu: goto label_24877c;
        case 0x248780u: goto label_248780;
        case 0x248784u: goto label_248784;
        case 0x248788u: goto label_248788;
        case 0x24878cu: goto label_24878c;
        case 0x248790u: goto label_248790;
        case 0x248794u: goto label_248794;
        case 0x248798u: goto label_248798;
        case 0x24879cu: goto label_24879c;
        case 0x2487a0u: goto label_2487a0;
        case 0x2487a4u: goto label_2487a4;
        case 0x2487a8u: goto label_2487a8;
        case 0x2487acu: goto label_2487ac;
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b4u: goto label_2487b4;
        case 0x2487b8u: goto label_2487b8;
        case 0x2487bcu: goto label_2487bc;
        case 0x2487c0u: goto label_2487c0;
        case 0x2487c4u: goto label_2487c4;
        case 0x2487c8u: goto label_2487c8;
        case 0x2487ccu: goto label_2487cc;
        case 0x2487d0u: goto label_2487d0;
        case 0x2487d4u: goto label_2487d4;
        case 0x2487d8u: goto label_2487d8;
        case 0x2487dcu: goto label_2487dc;
        case 0x2487e0u: goto label_2487e0;
        case 0x2487e4u: goto label_2487e4;
        case 0x2487e8u: goto label_2487e8;
        case 0x2487ecu: goto label_2487ec;
        case 0x2487f0u: goto label_2487f0;
        case 0x2487f4u: goto label_2487f4;
        case 0x2487f8u: goto label_2487f8;
        case 0x2487fcu: goto label_2487fc;
        default: break;
    }

    ctx->pc = 0x2486e0u;

label_2486e0:
    // 0x2486e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2486e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2486e4:
    // 0x2486e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2486e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2486e8:
    // 0x2486e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2486e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2486ec:
    // 0x2486ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2486ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2486f0:
    // 0x2486f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2486f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2486f4:
    // 0x2486f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2486f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2486f8:
    // 0x2486f8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2486f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2486fc:
    // 0x2486fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2486fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_248700:
    // 0x248700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x248700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_248704:
    // 0x248704: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_248708:
    // 0x248708: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x248708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_24870c:
    // 0x24870c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x24870cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_248710:
    // 0x248710: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_248714:
    if (ctx->pc == 0x248714u) {
        ctx->pc = 0x248714u;
            // 0x248714: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248718u;
        goto label_248718;
    }
    ctx->pc = 0x248710u;
    {
        const bool branch_taken_0x248710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x248714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248710u;
            // 0x248714: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248710) {
            ctx->pc = 0x2487D0u;
            goto label_2487d0;
        }
    }
    ctx->pc = 0x248718u;
label_248718:
    // 0x248718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x248718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24871c:
    // 0x24871c: 0x0  nop
    ctx->pc = 0x24871cu;
    // NOP
label_248720:
    // 0x248720: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x248720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_248724:
    // 0x248724: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x248724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_248728:
    // 0x248728: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x248728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_24872c:
    // 0x24872c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_248730:
    // 0x248730: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248734:
    // 0x248734: 0x16630004  bne         $s3, $v1, . + 4 + (0x4 << 2)
label_248738:
    if (ctx->pc == 0x248738u) {
        ctx->pc = 0x248738u;
            // 0x248738: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x24873Cu;
        goto label_24873c;
    }
    ctx->pc = 0x248734u;
    {
        const bool branch_taken_0x248734 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x248738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248734u;
            // 0x248738: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248734) {
            ctx->pc = 0x248748u;
            goto label_248748;
        }
    }
    ctx->pc = 0x24873Cu;
label_24873c:
    // 0x24873c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x24873cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_248740:
    // 0x248740: 0x10000002  b           . + 4 + (0x2 << 2)
label_248744:
    if (ctx->pc == 0x248744u) {
        ctx->pc = 0x248744u;
            // 0x248744: 0x2438821  addu        $s1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x248748u;
        goto label_248748;
    }
    ctx->pc = 0x248740u;
    {
        const bool branch_taken_0x248740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248740u;
            // 0x248744: 0x2438821  addu        $s1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248740) {
            ctx->pc = 0x24874Cu;
            goto label_24874c;
        }
    }
    ctx->pc = 0x248748u;
label_248748:
    // 0x248748: 0x26510200  addiu       $s1, $s2, 0x200
    ctx->pc = 0x248748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_24874c:
    // 0x24874c: 0x251082b  sltu        $at, $s2, $s1
    ctx->pc = 0x24874cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_248750:
    // 0x248750: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_248754:
    if (ctx->pc == 0x248754u) {
        ctx->pc = 0x248758u;
        goto label_248758;
    }
    ctx->pc = 0x248750u;
    {
        const bool branch_taken_0x248750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x248750) {
            ctx->pc = 0x2487C0u;
            goto label_2487c0;
        }
    }
    ctx->pc = 0x248758u;
label_248758:
    // 0x248758: 0x92440000  lbu         $a0, 0x0($s2)
    ctx->pc = 0x248758u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_24875c:
    // 0x24875c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_248760:
    if (ctx->pc == 0x248760u) {
        ctx->pc = 0x248760u;
            // 0x248760: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x248764u;
        goto label_248764;
    }
    ctx->pc = 0x24875Cu;
    {
        const bool branch_taken_0x24875c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x248760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24875Cu;
            // 0x248760: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24875c) {
            ctx->pc = 0x2487A8u;
            goto label_2487a8;
        }
    }
    ctx->pc = 0x248764u;
label_248764:
    // 0x248764: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_248768:
    if (ctx->pc == 0x248768u) {
        ctx->pc = 0x24876Cu;
        goto label_24876c;
    }
    ctx->pc = 0x248764u;
    {
        const bool branch_taken_0x248764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x248764) {
            ctx->pc = 0x248788u;
            goto label_248788;
        }
    }
    ctx->pc = 0x24876Cu;
label_24876c:
    // 0x24876c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x24876cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248770:
    // 0x248770: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_248774:
    if (ctx->pc == 0x248774u) {
        ctx->pc = 0x248774u;
            // 0x248774: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x248778u;
        goto label_248778;
    }
    ctx->pc = 0x248770u;
    {
        const bool branch_taken_0x248770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x248774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248770u;
            // 0x248774: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248770) {
            ctx->pc = 0x248788u;
            goto label_248788;
        }
    }
    ctx->pc = 0x248778u;
label_248778:
    // 0x248778: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_24877c:
    if (ctx->pc == 0x24877Cu) {
        ctx->pc = 0x248780u;
        goto label_248780;
    }
    ctx->pc = 0x248778u;
    {
        const bool branch_taken_0x248778 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x248778) {
            ctx->pc = 0x248788u;
            goto label_248788;
        }
    }
    ctx->pc = 0x248780u;
label_248780:
    // 0x248780: 0x10000009  b           . + 4 + (0x9 << 2)
label_248784:
    if (ctx->pc == 0x248784u) {
        ctx->pc = 0x248788u;
        goto label_248788;
    }
    ctx->pc = 0x248780u;
    {
        const bool branch_taken_0x248780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248780) {
            ctx->pc = 0x2487A8u;
            goto label_2487a8;
        }
    }
    ctx->pc = 0x248788u;
label_248788:
    // 0x248788: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x248788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24878c:
    // 0x24878c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x24878cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_248790:
    // 0x248790: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x248790u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_248794:
    // 0x248794: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x248794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_248798:
    // 0x248798: 0x24a5cf40  addiu       $a1, $a1, -0x30C0
    ctx->pc = 0x248798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954816));
label_24879c:
    // 0x24879c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x24879cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2487a0:
    // 0x2487a0: 0x320f809  jalr        $t9
label_2487a4:
    if (ctx->pc == 0x2487A4u) {
        ctx->pc = 0x2487A4u;
            // 0x2487a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2487A8u;
        goto label_2487a8;
    }
    ctx->pc = 0x2487A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2487A8u);
        ctx->pc = 0x2487A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487A0u;
            // 0x2487a4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2487A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2487A8u; }
            if (ctx->pc != 0x2487A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2487A8u;
label_2487a8:
    // 0x2487a8: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x2487a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_2487ac:
    // 0x2487ac: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_2487b0:
    // 0x2487b0: 0x251182b  sltu        $v1, $s2, $s1
    ctx->pc = 0x2487b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2487b4:
    // 0x2487b4: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_2487b8:
    if (ctx->pc == 0x2487B8u) {
        ctx->pc = 0x2487BCu;
        goto label_2487bc;
    }
    ctx->pc = 0x2487B4u;
    {
        const bool branch_taken_0x2487b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2487b4) {
            ctx->pc = 0x248758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248758;
        }
    }
    ctx->pc = 0x2487BCu;
label_2487bc:
    // 0x2487bc: 0x0  nop
    ctx->pc = 0x2487bcu;
    // NOP
label_2487c0:
    // 0x2487c0: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2487c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2487c4:
    // 0x2487c4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x2487c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2487c8:
    // 0x2487c8: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
label_2487cc:
    if (ctx->pc == 0x2487CCu) {
        ctx->pc = 0x2487D0u;
        goto label_2487d0;
    }
    ctx->pc = 0x2487C8u;
    {
        const bool branch_taken_0x2487c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2487c8) {
            ctx->pc = 0x248720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_248720;
        }
    }
    ctx->pc = 0x2487D0u;
label_2487d0:
    // 0x2487d0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2487d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2487d4:
    // 0x2487d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2487d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2487d8:
    // 0x2487d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2487d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2487dc:
    // 0x2487dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2487dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2487e0:
    // 0x2487e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2487e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2487e4:
    // 0x2487e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2487e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2487e8:
    // 0x2487e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2487e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2487ec:
    // 0x2487ec: 0x3e00008  jr          $ra
label_2487f0:
    if (ctx->pc == 0x2487F0u) {
        ctx->pc = 0x2487F0u;
            // 0x2487f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2487F4u;
        goto label_2487f4;
    }
    ctx->pc = 0x2487ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2487F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2487ECu;
            // 0x2487f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2487F4u;
label_2487f4:
    // 0x2487f4: 0x0  nop
    ctx->pc = 0x2487f4u;
    // NOP
label_2487f8:
    // 0x2487f8: 0x0  nop
    ctx->pc = 0x2487f8u;
    // NOP
label_2487fc:
    // 0x2487fc: 0x0  nop
    ctx->pc = 0x2487fcu;
    // NOP
}
