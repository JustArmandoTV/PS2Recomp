#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005346D0
// Address: 0x5346d0 - 0x5348d0
void sub_005346D0_0x5346d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005346D0_0x5346d0");
#endif

    switch (ctx->pc) {
        case 0x5346d0u: goto label_5346d0;
        case 0x5346d4u: goto label_5346d4;
        case 0x5346d8u: goto label_5346d8;
        case 0x5346dcu: goto label_5346dc;
        case 0x5346e0u: goto label_5346e0;
        case 0x5346e4u: goto label_5346e4;
        case 0x5346e8u: goto label_5346e8;
        case 0x5346ecu: goto label_5346ec;
        case 0x5346f0u: goto label_5346f0;
        case 0x5346f4u: goto label_5346f4;
        case 0x5346f8u: goto label_5346f8;
        case 0x5346fcu: goto label_5346fc;
        case 0x534700u: goto label_534700;
        case 0x534704u: goto label_534704;
        case 0x534708u: goto label_534708;
        case 0x53470cu: goto label_53470c;
        case 0x534710u: goto label_534710;
        case 0x534714u: goto label_534714;
        case 0x534718u: goto label_534718;
        case 0x53471cu: goto label_53471c;
        case 0x534720u: goto label_534720;
        case 0x534724u: goto label_534724;
        case 0x534728u: goto label_534728;
        case 0x53472cu: goto label_53472c;
        case 0x534730u: goto label_534730;
        case 0x534734u: goto label_534734;
        case 0x534738u: goto label_534738;
        case 0x53473cu: goto label_53473c;
        case 0x534740u: goto label_534740;
        case 0x534744u: goto label_534744;
        case 0x534748u: goto label_534748;
        case 0x53474cu: goto label_53474c;
        case 0x534750u: goto label_534750;
        case 0x534754u: goto label_534754;
        case 0x534758u: goto label_534758;
        case 0x53475cu: goto label_53475c;
        case 0x534760u: goto label_534760;
        case 0x534764u: goto label_534764;
        case 0x534768u: goto label_534768;
        case 0x53476cu: goto label_53476c;
        case 0x534770u: goto label_534770;
        case 0x534774u: goto label_534774;
        case 0x534778u: goto label_534778;
        case 0x53477cu: goto label_53477c;
        case 0x534780u: goto label_534780;
        case 0x534784u: goto label_534784;
        case 0x534788u: goto label_534788;
        case 0x53478cu: goto label_53478c;
        case 0x534790u: goto label_534790;
        case 0x534794u: goto label_534794;
        case 0x534798u: goto label_534798;
        case 0x53479cu: goto label_53479c;
        case 0x5347a0u: goto label_5347a0;
        case 0x5347a4u: goto label_5347a4;
        case 0x5347a8u: goto label_5347a8;
        case 0x5347acu: goto label_5347ac;
        case 0x5347b0u: goto label_5347b0;
        case 0x5347b4u: goto label_5347b4;
        case 0x5347b8u: goto label_5347b8;
        case 0x5347bcu: goto label_5347bc;
        case 0x5347c0u: goto label_5347c0;
        case 0x5347c4u: goto label_5347c4;
        case 0x5347c8u: goto label_5347c8;
        case 0x5347ccu: goto label_5347cc;
        case 0x5347d0u: goto label_5347d0;
        case 0x5347d4u: goto label_5347d4;
        case 0x5347d8u: goto label_5347d8;
        case 0x5347dcu: goto label_5347dc;
        case 0x5347e0u: goto label_5347e0;
        case 0x5347e4u: goto label_5347e4;
        case 0x5347e8u: goto label_5347e8;
        case 0x5347ecu: goto label_5347ec;
        case 0x5347f0u: goto label_5347f0;
        case 0x5347f4u: goto label_5347f4;
        case 0x5347f8u: goto label_5347f8;
        case 0x5347fcu: goto label_5347fc;
        case 0x534800u: goto label_534800;
        case 0x534804u: goto label_534804;
        case 0x534808u: goto label_534808;
        case 0x53480cu: goto label_53480c;
        case 0x534810u: goto label_534810;
        case 0x534814u: goto label_534814;
        case 0x534818u: goto label_534818;
        case 0x53481cu: goto label_53481c;
        case 0x534820u: goto label_534820;
        case 0x534824u: goto label_534824;
        case 0x534828u: goto label_534828;
        case 0x53482cu: goto label_53482c;
        case 0x534830u: goto label_534830;
        case 0x534834u: goto label_534834;
        case 0x534838u: goto label_534838;
        case 0x53483cu: goto label_53483c;
        case 0x534840u: goto label_534840;
        case 0x534844u: goto label_534844;
        case 0x534848u: goto label_534848;
        case 0x53484cu: goto label_53484c;
        case 0x534850u: goto label_534850;
        case 0x534854u: goto label_534854;
        case 0x534858u: goto label_534858;
        case 0x53485cu: goto label_53485c;
        case 0x534860u: goto label_534860;
        case 0x534864u: goto label_534864;
        case 0x534868u: goto label_534868;
        case 0x53486cu: goto label_53486c;
        case 0x534870u: goto label_534870;
        case 0x534874u: goto label_534874;
        case 0x534878u: goto label_534878;
        case 0x53487cu: goto label_53487c;
        case 0x534880u: goto label_534880;
        case 0x534884u: goto label_534884;
        case 0x534888u: goto label_534888;
        case 0x53488cu: goto label_53488c;
        case 0x534890u: goto label_534890;
        case 0x534894u: goto label_534894;
        case 0x534898u: goto label_534898;
        case 0x53489cu: goto label_53489c;
        case 0x5348a0u: goto label_5348a0;
        case 0x5348a4u: goto label_5348a4;
        case 0x5348a8u: goto label_5348a8;
        case 0x5348acu: goto label_5348ac;
        case 0x5348b0u: goto label_5348b0;
        case 0x5348b4u: goto label_5348b4;
        case 0x5348b8u: goto label_5348b8;
        case 0x5348bcu: goto label_5348bc;
        case 0x5348c0u: goto label_5348c0;
        case 0x5348c4u: goto label_5348c4;
        case 0x5348c8u: goto label_5348c8;
        case 0x5348ccu: goto label_5348cc;
        default: break;
    }

    ctx->pc = 0x5346d0u;

label_5346d0:
    // 0x5346d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5346d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_5346d4:
    // 0x5346d4: 0x3c0800be  lui         $t0, 0xBE
    ctx->pc = 0x5346d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)190 << 16));
label_5346d8:
    // 0x5346d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5346d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5346dc:
    // 0x5346dc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5346dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5346e0:
    // 0x5346e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5346e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5346e4:
    // 0x5346e4: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x5346e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
label_5346e8:
    // 0x5346e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5346e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5346ec:
    // 0x5346ec: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5346ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5346f0:
    // 0x5346f0: 0x8c49cf98  lw          $t1, -0x3068($v0)
    ctx->pc = 0x5346f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5346f4:
    // 0x5346f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x5346f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5346f8:
    // 0x5346f8: 0x2508b610  addiu       $t0, $t0, -0x49F0
    ctx->pc = 0x5346f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948368));
label_5346fc:
    // 0x5346fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x5346fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_534700:
    // 0x534700: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x534700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_534704:
    // 0x534704: 0xace9cf98  sw          $t1, -0x3068($a3)
    ctx->pc = 0x534704u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954904), GPR_U32(ctx, 9));
label_534708:
    // 0x534708: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x534708u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_53470c:
    // 0x53470c: 0x8c66cf98  lw          $a2, -0x3068($v1)
    ctx->pc = 0x53470cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_534710:
    // 0x534710: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x534710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_534714:
    // 0x534714: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x534714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_534718:
    // 0x534718: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x534718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_53471c:
    // 0x53471c: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
label_534720:
    if (ctx->pc == 0x534720u) {
        ctx->pc = 0x534720u;
            // 0x534720: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x534724u;
        goto label_534724;
    }
    ctx->pc = 0x53471Cu;
    {
        const bool branch_taken_0x53471c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x534720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53471Cu;
            // 0x534720: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53471c) {
            ctx->pc = 0x5347D4u;
            goto label_5347d4;
        }
    }
    ctx->pc = 0x534724u;
label_534724:
    // 0x534724: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_534728:
    if (ctx->pc == 0x534728u) {
        ctx->pc = 0x53472Cu;
        goto label_53472c;
    }
    ctx->pc = 0x534724u;
    {
        const bool branch_taken_0x534724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x534724) {
            ctx->pc = 0x534734u;
            goto label_534734;
        }
    }
    ctx->pc = 0x53472Cu;
label_53472c:
    // 0x53472c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_534730:
    if (ctx->pc == 0x534730u) {
        ctx->pc = 0x534734u;
        goto label_534734;
    }
    ctx->pc = 0x53472Cu;
    {
        const bool branch_taken_0x53472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53472c) {
            ctx->pc = 0x5347E4u;
            goto label_5347e4;
        }
    }
    ctx->pc = 0x534734u;
label_534734:
    // 0x534734: 0xc14d178  jal         func_5345E0
label_534738:
    if (ctx->pc == 0x534738u) {
        ctx->pc = 0x53473Cu;
        goto label_53473c;
    }
    ctx->pc = 0x534734u;
    SET_GPR_U32(ctx, 31, 0x53473Cu);
    ctx->pc = 0x5345E0u;
    if (runtime->hasFunction(0x5345E0u)) {
        auto targetFn = runtime->lookupFunction(0x5345E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53473Cu; }
        if (ctx->pc != 0x53473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005345E0_0x5345e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53473Cu; }
        if (ctx->pc != 0x53473Cu) { return; }
    }
    ctx->pc = 0x53473Cu;
label_53473c:
    // 0x53473c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_534740:
    if (ctx->pc == 0x534740u) {
        ctx->pc = 0x534740u;
            // 0x534740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x534744u;
        goto label_534744;
    }
    ctx->pc = 0x53473Cu;
    {
        const bool branch_taken_0x53473c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x534740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53473Cu;
            // 0x534740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53473c) {
            ctx->pc = 0x534760u;
            goto label_534760;
        }
    }
    ctx->pc = 0x534744u;
label_534744:
    // 0x534744: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x534744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534748:
    // 0x534748: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53474c:
    // 0x53474c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x53474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534750:
    // 0x534750: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x534750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_534754:
    // 0x534754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x534754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_534758:
    // 0x534758: 0x10000028  b           . + 4 + (0x28 << 2)
label_53475c:
    if (ctx->pc == 0x53475Cu) {
        ctx->pc = 0x53475Cu;
            // 0x53475c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x534760u;
        goto label_534760;
    }
    ctx->pc = 0x534758u;
    {
        const bool branch_taken_0x534758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53475Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534758u;
            // 0x53475c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x534758) {
            ctx->pc = 0x5347FCu;
            goto label_5347fc;
        }
    }
    ctx->pc = 0x534760u;
label_534760:
    // 0x534760: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x534760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_534764:
    // 0x534764: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x534764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_534768:
    // 0x534768: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x534768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_53476c:
    // 0x53476c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x53476cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_534770:
    // 0x534770: 0x320f809  jalr        $t9
label_534774:
    if (ctx->pc == 0x534774u) {
        ctx->pc = 0x534774u;
            // 0x534774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x534778u;
        goto label_534778;
    }
    ctx->pc = 0x534770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x534778u);
        ctx->pc = 0x534774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534770u;
            // 0x534774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x534778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x534778u; }
            if (ctx->pc != 0x534778u) { return; }
        }
        }
    }
    ctx->pc = 0x534778u;
label_534778:
    // 0x534778: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x534778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_53477c:
    // 0x53477c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x53477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_534780:
    // 0x534780: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_534784:
    if (ctx->pc == 0x534784u) {
        ctx->pc = 0x534784u;
            // 0x534784: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x534788u;
        goto label_534788;
    }
    ctx->pc = 0x534780u;
    {
        const bool branch_taken_0x534780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x534780) {
            ctx->pc = 0x534784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534780u;
            // 0x534784: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5347ACu;
            goto label_5347ac;
        }
    }
    ctx->pc = 0x534788u;
label_534788:
    // 0x534788: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x534788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_53478c:
    // 0x53478c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53478cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_534790:
    // 0x534790: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x534790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_534794:
    // 0x534794: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x534794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_534798:
    // 0x534798: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_53479c:
    // 0x53479c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x53479cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5347a0:
    // 0x5347a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5347a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5347a4:
    // 0x5347a4: 0x10000015  b           . + 4 + (0x15 << 2)
label_5347a8:
    if (ctx->pc == 0x5347A8u) {
        ctx->pc = 0x5347A8u;
            // 0x5347a8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5347ACu;
        goto label_5347ac;
    }
    ctx->pc = 0x5347A4u;
    {
        const bool branch_taken_0x5347a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5347A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5347A4u;
            // 0x5347a8: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5347a4) {
            ctx->pc = 0x5347FCu;
            goto label_5347fc;
        }
    }
    ctx->pc = 0x5347ACu;
label_5347ac:
    // 0x5347ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5347acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5347b0:
    // 0x5347b0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x5347b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_5347b4:
    // 0x5347b4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5347b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5347b8:
    // 0x5347b8: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x5347b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5347bc:
    // 0x5347bc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5347bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5347c0:
    // 0x5347c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5347c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5347c4:
    // 0x5347c4: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x5347c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_5347c8:
    // 0x5347c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5347cc:
    // 0x5347cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_5347d0:
    if (ctx->pc == 0x5347D0u) {
        ctx->pc = 0x5347D0u;
            // 0x5347d0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x5347D4u;
        goto label_5347d4;
    }
    ctx->pc = 0x5347CCu;
    {
        const bool branch_taken_0x5347cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5347D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5347CCu;
            // 0x5347d0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5347cc) {
            ctx->pc = 0x5347E4u;
            goto label_5347e4;
        }
    }
    ctx->pc = 0x5347D4u;
label_5347d4:
    // 0x5347d4: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x5347d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_5347d8:
    // 0x5347d8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5347d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5347dc:
    // 0x5347dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_5347e0:
    if (ctx->pc == 0x5347E0u) {
        ctx->pc = 0x5347E0u;
            // 0x5347e0: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x5347E4u;
        goto label_5347e4;
    }
    ctx->pc = 0x5347DCu;
    {
        const bool branch_taken_0x5347dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5347E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5347DCu;
            // 0x5347e0: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5347dc) {
            ctx->pc = 0x5347FCu;
            goto label_5347fc;
        }
    }
    ctx->pc = 0x5347E4u;
label_5347e4:
    // 0x5347e4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5347e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5347e8:
    // 0x5347e8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5347e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5347ec:
    // 0x5347ec: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x5347ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5347f0:
    // 0x5347f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5347f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5347f4:
    // 0x5347f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5347f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5347f8:
    // 0x5347f8: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x5347f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_5347fc:
    // 0x5347fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5347fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_534800:
    // 0x534800: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x534800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_534804:
    // 0x534804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x534804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_534808:
    // 0x534808: 0x3e00008  jr          $ra
label_53480c:
    if (ctx->pc == 0x53480Cu) {
        ctx->pc = 0x53480Cu;
            // 0x53480c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x534810u;
        goto label_534810;
    }
    ctx->pc = 0x534808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x534808u;
            // 0x53480c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x534810u;
label_534810:
    // 0x534810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x534810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_534814:
    // 0x534814: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x534814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_534818:
    // 0x534818: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x534818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53481c:
    // 0x53481c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x53481cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_534820:
    // 0x534820: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x534820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_534824:
    // 0x534824: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x534824u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_534828:
    // 0x534828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x534828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53482c:
    // 0x53482c: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x53482cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_534830:
    // 0x534830: 0xc04861a  jal         func_121868
label_534834:
    if (ctx->pc == 0x534834u) {
        ctx->pc = 0x534834u;
            // 0x534834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x534838u;
        goto label_534838;
    }
    ctx->pc = 0x534830u;
    SET_GPR_U32(ctx, 31, 0x534838u);
    ctx->pc = 0x534834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x534830u;
            // 0x534834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121868u;
    if (runtime->hasFunction(0x121868u)) {
        auto targetFn = runtime->lookupFunction(0x121868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534838u; }
        if (ctx->pc != 0x534838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121868_0x121868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x534838u; }
        if (ctx->pc != 0x534838u) { return; }
    }
    ctx->pc = 0x534838u;
label_534838:
    // 0x534838: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x534838u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_53483c:
    // 0x53483c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53483cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534840:
    // 0x534840: 0x8c66cf98  lw          $a2, -0x3068($v1)
    ctx->pc = 0x534840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_534844:
    // 0x534844: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x534844u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_534848:
    // 0x534848: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x534848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
label_53484c:
    // 0x53484c: 0x2404ff2e  addiu       $a0, $zero, -0xD2
    ctx->pc = 0x53484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_534850:
    // 0x534850: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x534850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_534854:
    // 0x534854: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x534854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_534858:
    // 0x534858: 0xac66cf98  sw          $a2, -0x3068($v1)
    ctx->pc = 0x534858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 6));
label_53485c:
    // 0x53485c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x53485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_534860:
    // 0x534860: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x534860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_534864:
    // 0x534864: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x534864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_534868:
    // 0x534868: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x534868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_53486c:
    // 0x53486c: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
label_534870:
    if (ctx->pc == 0x534870u) {
        ctx->pc = 0x534870u;
            // 0x534870: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x534874u;
        goto label_534874;
    }
    ctx->pc = 0x53486Cu;
    {
        const bool branch_taken_0x53486c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x53486c) {
            ctx->pc = 0x534870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53486Cu;
            // 0x534870: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5348A4u;
            goto label_5348a4;
        }
    }
    ctx->pc = 0x534874u;
label_534874:
    // 0x534874: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x534874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_534878:
    // 0x534878: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_53487c:
    if (ctx->pc == 0x53487Cu) {
        ctx->pc = 0x534880u;
        goto label_534880;
    }
    ctx->pc = 0x534878u;
    {
        const bool branch_taken_0x534878 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534878) {
            ctx->pc = 0x5348A0u;
            goto label_5348a0;
        }
    }
    ctx->pc = 0x534880u;
label_534880:
    // 0x534880: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x534880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_534884:
    // 0x534884: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_534888:
    if (ctx->pc == 0x534888u) {
        ctx->pc = 0x53488Cu;
        goto label_53488c;
    }
    ctx->pc = 0x534884u;
    {
        const bool branch_taken_0x534884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534884) {
            ctx->pc = 0x5348A0u;
            goto label_5348a0;
        }
    }
    ctx->pc = 0x53488Cu;
label_53488c:
    // 0x53488c: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x53488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_534890:
    // 0x534890: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_534894:
    if (ctx->pc == 0x534894u) {
        ctx->pc = 0x534898u;
        goto label_534898;
    }
    ctx->pc = 0x534890u;
    {
        const bool branch_taken_0x534890 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x534890) {
            ctx->pc = 0x5348A0u;
            goto label_5348a0;
        }
    }
    ctx->pc = 0x534898u;
label_534898:
    // 0x534898: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
label_53489c:
    if (ctx->pc == 0x53489Cu) {
        ctx->pc = 0x53489Cu;
            // 0x53489c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x5348A0u;
        goto label_5348a0;
    }
    ctx->pc = 0x534898u;
    {
        const bool branch_taken_0x534898 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x534898) {
            ctx->pc = 0x53489Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x534898u;
            // 0x53489c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5348A4u;
            goto label_5348a4;
        }
    }
    ctx->pc = 0x5348A0u;
label_5348a0:
    // 0x5348a0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5348a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5348a4:
    // 0x5348a4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5348a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_5348a8:
    // 0x5348a8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5348a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5348ac:
    // 0x5348ac: 0x8c64cf98  lw          $a0, -0x3068($v1)
    ctx->pc = 0x5348acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_5348b0:
    // 0x5348b0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5348b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5348b4:
    // 0x5348b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5348b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5348b8:
    // 0x5348b8: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x5348b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_5348bc:
    // 0x5348bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5348bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5348c0:
    // 0x5348c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5348c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5348c4:
    // 0x5348c4: 0x3e00008  jr          $ra
label_5348c8:
    if (ctx->pc == 0x5348C8u) {
        ctx->pc = 0x5348C8u;
            // 0x5348c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5348CCu;
        goto label_5348cc;
    }
    ctx->pc = 0x5348C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5348C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5348C4u;
            // 0x5348c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5348CCu;
label_5348cc:
    // 0x5348cc: 0x0  nop
    ctx->pc = 0x5348ccu;
    // NOP
}
