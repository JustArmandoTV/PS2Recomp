#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002396B0
// Address: 0x2396b0 - 0x2397c0
void sub_002396B0_0x2396b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002396B0_0x2396b0");
#endif

    switch (ctx->pc) {
        case 0x2396b0u: goto label_2396b0;
        case 0x2396b4u: goto label_2396b4;
        case 0x2396b8u: goto label_2396b8;
        case 0x2396bcu: goto label_2396bc;
        case 0x2396c0u: goto label_2396c0;
        case 0x2396c4u: goto label_2396c4;
        case 0x2396c8u: goto label_2396c8;
        case 0x2396ccu: goto label_2396cc;
        case 0x2396d0u: goto label_2396d0;
        case 0x2396d4u: goto label_2396d4;
        case 0x2396d8u: goto label_2396d8;
        case 0x2396dcu: goto label_2396dc;
        case 0x2396e0u: goto label_2396e0;
        case 0x2396e4u: goto label_2396e4;
        case 0x2396e8u: goto label_2396e8;
        case 0x2396ecu: goto label_2396ec;
        case 0x2396f0u: goto label_2396f0;
        case 0x2396f4u: goto label_2396f4;
        case 0x2396f8u: goto label_2396f8;
        case 0x2396fcu: goto label_2396fc;
        case 0x239700u: goto label_239700;
        case 0x239704u: goto label_239704;
        case 0x239708u: goto label_239708;
        case 0x23970cu: goto label_23970c;
        case 0x239710u: goto label_239710;
        case 0x239714u: goto label_239714;
        case 0x239718u: goto label_239718;
        case 0x23971cu: goto label_23971c;
        case 0x239720u: goto label_239720;
        case 0x239724u: goto label_239724;
        case 0x239728u: goto label_239728;
        case 0x23972cu: goto label_23972c;
        case 0x239730u: goto label_239730;
        case 0x239734u: goto label_239734;
        case 0x239738u: goto label_239738;
        case 0x23973cu: goto label_23973c;
        case 0x239740u: goto label_239740;
        case 0x239744u: goto label_239744;
        case 0x239748u: goto label_239748;
        case 0x23974cu: goto label_23974c;
        case 0x239750u: goto label_239750;
        case 0x239754u: goto label_239754;
        case 0x239758u: goto label_239758;
        case 0x23975cu: goto label_23975c;
        case 0x239760u: goto label_239760;
        case 0x239764u: goto label_239764;
        case 0x239768u: goto label_239768;
        case 0x23976cu: goto label_23976c;
        case 0x239770u: goto label_239770;
        case 0x239774u: goto label_239774;
        case 0x239778u: goto label_239778;
        case 0x23977cu: goto label_23977c;
        case 0x239780u: goto label_239780;
        case 0x239784u: goto label_239784;
        case 0x239788u: goto label_239788;
        case 0x23978cu: goto label_23978c;
        case 0x239790u: goto label_239790;
        case 0x239794u: goto label_239794;
        case 0x239798u: goto label_239798;
        case 0x23979cu: goto label_23979c;
        case 0x2397a0u: goto label_2397a0;
        case 0x2397a4u: goto label_2397a4;
        case 0x2397a8u: goto label_2397a8;
        case 0x2397acu: goto label_2397ac;
        case 0x2397b0u: goto label_2397b0;
        case 0x2397b4u: goto label_2397b4;
        case 0x2397b8u: goto label_2397b8;
        case 0x2397bcu: goto label_2397bc;
        default: break;
    }

    ctx->pc = 0x2396b0u;

label_2396b0:
    // 0x2396b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2396b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2396b4:
    // 0x2396b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2396b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2396b8:
    // 0x2396b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2396b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2396bc:
    // 0x2396bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2396bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2396c0:
    // 0x2396c0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2396c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2396c4:
    // 0x2396c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2396c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2396c8:
    // 0x2396c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2396c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2396cc:
    // 0x2396cc: 0x8c830120  lw          $v1, 0x120($a0)
    ctx->pc = 0x2396ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_2396d0:
    // 0x2396d0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2396d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2396d4:
    // 0x2396d4: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_2396d8:
    if (ctx->pc == 0x2396D8u) {
        ctx->pc = 0x2396D8u;
            // 0x2396d8: 0x2490011c  addiu       $s0, $a0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
        ctx->pc = 0x2396DCu;
        goto label_2396dc;
    }
    ctx->pc = 0x2396D4u;
    {
        const bool branch_taken_0x2396d4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2396D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396D4u;
            // 0x2396d8: 0x2490011c  addiu       $s0, $a0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396d4) {
            ctx->pc = 0x239718u;
            goto label_239718;
        }
    }
    ctx->pc = 0x2396DCu;
label_2396dc:
    // 0x2396dc: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2396e0:
    // 0x2396e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2396e4:
    // 0x2396e4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2396e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2396e8:
    // 0x2396e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2396ec:
    // 0x2396ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2396f0:
    if (ctx->pc == 0x2396F0u) {
        ctx->pc = 0x2396F4u;
        goto label_2396f4;
    }
    ctx->pc = 0x2396ECu;
    {
        const bool branch_taken_0x2396ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2396ec) {
            ctx->pc = 0x239708u;
            goto label_239708;
        }
    }
    ctx->pc = 0x2396F4u;
label_2396f4:
    // 0x2396f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2396f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2396f8:
    // 0x2396f8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2396f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2396fc:
    // 0x2396fc: 0x320f809  jalr        $t9
label_239700:
    if (ctx->pc == 0x239700u) {
        ctx->pc = 0x239700u;
            // 0x239700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239704u;
        goto label_239704;
    }
    ctx->pc = 0x2396FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239704u);
        ctx->pc = 0x239700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396FCu;
            // 0x239700: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239704u; }
            if (ctx->pc != 0x239704u) { return; }
        }
        }
    }
    ctx->pc = 0x239704u;
label_239704:
    // 0x239704: 0x0  nop
    ctx->pc = 0x239704u;
    // NOP
label_239708:
    // 0x239708: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23970c:
    // 0x23970c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_239710:
    if (ctx->pc == 0x239710u) {
        ctx->pc = 0x239710u;
            // 0x239710: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239714u;
        goto label_239714;
    }
    ctx->pc = 0x23970Cu;
    {
        const bool branch_taken_0x23970c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23970Cu;
            // 0x239710: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23970c) {
            ctx->pc = 0x2396E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2396e0;
        }
    }
    ctx->pc = 0x239714u;
label_239714:
    // 0x239714: 0x0  nop
    ctx->pc = 0x239714u;
    // NOP
label_239718:
    // 0x239718: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23971c:
    // 0x23971c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23971cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239720:
    // 0x239720: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239724:
    if (ctx->pc == 0x239724u) {
        ctx->pc = 0x239728u;
        goto label_239728;
    }
    ctx->pc = 0x239720u;
    {
        const bool branch_taken_0x239720 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239720) {
            ctx->pc = 0x239798u;
            goto label_239798;
        }
    }
    ctx->pc = 0x239728u;
label_239728:
    // 0x239728: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239728u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23972c:
    // 0x23972c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239730:
    // 0x239730: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239734:
    // 0x239734: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239738:
    // 0x239738: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23973c:
    if (ctx->pc == 0x23973Cu) {
        ctx->pc = 0x239740u;
        goto label_239740;
    }
    ctx->pc = 0x239738u;
    {
        const bool branch_taken_0x239738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239738) {
            ctx->pc = 0x239788u;
            goto label_239788;
        }
    }
    ctx->pc = 0x239740u;
label_239740:
    // 0x239740: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239744:
    // 0x239744: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239748:
    // 0x239748: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23974c:
    // 0x23974c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23974cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239750:
    // 0x239750: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239754:
    if (ctx->pc == 0x239754u) {
        ctx->pc = 0x239754u;
            // 0x239754: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239758u;
        goto label_239758;
    }
    ctx->pc = 0x239750u;
    {
        const bool branch_taken_0x239750 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239750u;
            // 0x239754: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239750) {
            ctx->pc = 0x239788u;
            goto label_239788;
        }
    }
    ctx->pc = 0x239758u;
label_239758:
    // 0x239758: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23975c:
    // 0x23975c: 0x0  nop
    ctx->pc = 0x23975cu;
    // NOP
label_239760:
    // 0x239760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239764:
    // 0x239764: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239768:
    // 0x239768: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23976c:
    // 0x23976c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23976cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239770:
    // 0x239770: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239774:
    // 0x239774: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239778:
    // 0x239778: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239778u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23977c:
    // 0x23977c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239780:
    if (ctx->pc == 0x239780u) {
        ctx->pc = 0x239780u;
            // 0x239780: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239784u;
        goto label_239784;
    }
    ctx->pc = 0x23977Cu;
    {
        const bool branch_taken_0x23977c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23977Cu;
            // 0x239780: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23977c) {
            ctx->pc = 0x239760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239760;
        }
    }
    ctx->pc = 0x239784u;
label_239784:
    // 0x239784: 0x0  nop
    ctx->pc = 0x239784u;
    // NOP
label_239788:
    // 0x239788: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23978c:
    // 0x23978c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239790:
    if (ctx->pc == 0x239790u) {
        ctx->pc = 0x239790u;
            // 0x239790: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239794u;
        goto label_239794;
    }
    ctx->pc = 0x23978Cu;
    {
        const bool branch_taken_0x23978c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23978Cu;
            // 0x239790: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23978c) {
            ctx->pc = 0x23972Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23972c;
        }
    }
    ctx->pc = 0x239794u;
label_239794:
    // 0x239794: 0x0  nop
    ctx->pc = 0x239794u;
    // NOP
label_239798:
    // 0x239798: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23979c:
    // 0x23979c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23979cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2397a0:
    // 0x2397a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2397a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2397a4:
    // 0x2397a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2397a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2397a8:
    // 0x2397a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2397a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2397ac:
    // 0x2397ac: 0x3e00008  jr          $ra
label_2397b0:
    if (ctx->pc == 0x2397B0u) {
        ctx->pc = 0x2397B0u;
            // 0x2397b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2397B4u;
        goto label_2397b4;
    }
    ctx->pc = 0x2397ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2397B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397ACu;
            // 0x2397b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2397B4u;
label_2397b4:
    // 0x2397b4: 0x0  nop
    ctx->pc = 0x2397b4u;
    // NOP
label_2397b8:
    // 0x2397b8: 0x0  nop
    ctx->pc = 0x2397b8u;
    // NOP
label_2397bc:
    // 0x2397bc: 0x0  nop
    ctx->pc = 0x2397bcu;
    // NOP
}
