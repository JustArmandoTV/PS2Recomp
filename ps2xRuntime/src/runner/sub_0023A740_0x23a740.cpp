#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A740
// Address: 0x23a740 - 0x23a850
void sub_0023A740_0x23a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A740_0x23a740");
#endif

    switch (ctx->pc) {
        case 0x23a740u: goto label_23a740;
        case 0x23a744u: goto label_23a744;
        case 0x23a748u: goto label_23a748;
        case 0x23a74cu: goto label_23a74c;
        case 0x23a750u: goto label_23a750;
        case 0x23a754u: goto label_23a754;
        case 0x23a758u: goto label_23a758;
        case 0x23a75cu: goto label_23a75c;
        case 0x23a760u: goto label_23a760;
        case 0x23a764u: goto label_23a764;
        case 0x23a768u: goto label_23a768;
        case 0x23a76cu: goto label_23a76c;
        case 0x23a770u: goto label_23a770;
        case 0x23a774u: goto label_23a774;
        case 0x23a778u: goto label_23a778;
        case 0x23a77cu: goto label_23a77c;
        case 0x23a780u: goto label_23a780;
        case 0x23a784u: goto label_23a784;
        case 0x23a788u: goto label_23a788;
        case 0x23a78cu: goto label_23a78c;
        case 0x23a790u: goto label_23a790;
        case 0x23a794u: goto label_23a794;
        case 0x23a798u: goto label_23a798;
        case 0x23a79cu: goto label_23a79c;
        case 0x23a7a0u: goto label_23a7a0;
        case 0x23a7a4u: goto label_23a7a4;
        case 0x23a7a8u: goto label_23a7a8;
        case 0x23a7acu: goto label_23a7ac;
        case 0x23a7b0u: goto label_23a7b0;
        case 0x23a7b4u: goto label_23a7b4;
        case 0x23a7b8u: goto label_23a7b8;
        case 0x23a7bcu: goto label_23a7bc;
        case 0x23a7c0u: goto label_23a7c0;
        case 0x23a7c4u: goto label_23a7c4;
        case 0x23a7c8u: goto label_23a7c8;
        case 0x23a7ccu: goto label_23a7cc;
        case 0x23a7d0u: goto label_23a7d0;
        case 0x23a7d4u: goto label_23a7d4;
        case 0x23a7d8u: goto label_23a7d8;
        case 0x23a7dcu: goto label_23a7dc;
        case 0x23a7e0u: goto label_23a7e0;
        case 0x23a7e4u: goto label_23a7e4;
        case 0x23a7e8u: goto label_23a7e8;
        case 0x23a7ecu: goto label_23a7ec;
        case 0x23a7f0u: goto label_23a7f0;
        case 0x23a7f4u: goto label_23a7f4;
        case 0x23a7f8u: goto label_23a7f8;
        case 0x23a7fcu: goto label_23a7fc;
        case 0x23a800u: goto label_23a800;
        case 0x23a804u: goto label_23a804;
        case 0x23a808u: goto label_23a808;
        case 0x23a80cu: goto label_23a80c;
        case 0x23a810u: goto label_23a810;
        case 0x23a814u: goto label_23a814;
        case 0x23a818u: goto label_23a818;
        case 0x23a81cu: goto label_23a81c;
        case 0x23a820u: goto label_23a820;
        case 0x23a824u: goto label_23a824;
        case 0x23a828u: goto label_23a828;
        case 0x23a82cu: goto label_23a82c;
        case 0x23a830u: goto label_23a830;
        case 0x23a834u: goto label_23a834;
        case 0x23a838u: goto label_23a838;
        case 0x23a83cu: goto label_23a83c;
        case 0x23a840u: goto label_23a840;
        case 0x23a844u: goto label_23a844;
        case 0x23a848u: goto label_23a848;
        case 0x23a84cu: goto label_23a84c;
        default: break;
    }

    ctx->pc = 0x23a740u;

label_23a740:
    // 0x23a740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23a744:
    // 0x23a744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23a748:
    // 0x23a748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23a74c:
    // 0x23a74c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a750:
    // 0x23a750: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a754:
    // 0x23a754: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a758:
    // 0x23a758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23a758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a75c:
    // 0x23a75c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a760:
    // 0x23a760: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23a760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23a764:
    // 0x23a764: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x23a764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
label_23a768:
    // 0x23a768: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x23a768u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a76c:
    // 0x23a76c: 0x6800010  bltz        $s4, . + 4 + (0x10 << 2)
label_23a770:
    if (ctx->pc == 0x23A770u) {
        ctx->pc = 0x23A770u;
            // 0x23a770: 0x24900170  addiu       $s0, $a0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
        ctx->pc = 0x23A774u;
        goto label_23a774;
    }
    ctx->pc = 0x23A76Cu;
    {
        const bool branch_taken_0x23a76c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23A770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A76Cu;
            // 0x23a770: 0x24900170  addiu       $s0, $a0, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a76c) {
            ctx->pc = 0x23A7B0u;
            goto label_23a7b0;
        }
    }
    ctx->pc = 0x23A774u;
label_23a774:
    // 0x23a774: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x23a774u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23a778:
    // 0x23a778: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a77c:
    // 0x23a77c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23a780:
    // 0x23a780: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a784:
    // 0x23a784: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a788:
    if (ctx->pc == 0x23A788u) {
        ctx->pc = 0x23A78Cu;
        goto label_23a78c;
    }
    ctx->pc = 0x23A784u;
    {
        const bool branch_taken_0x23a784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a784) {
            ctx->pc = 0x23A7A0u;
            goto label_23a7a0;
        }
    }
    ctx->pc = 0x23A78Cu;
label_23a78c:
    // 0x23a78c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a78cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a790:
    // 0x23a790: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a794:
    // 0x23a794: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a798:
    // 0x23a798: 0x320f809  jalr        $t9
label_23a79c:
    if (ctx->pc == 0x23A79Cu) {
        ctx->pc = 0x23A79Cu;
            // 0x23a79c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A7A0u;
        goto label_23a7a0;
    }
    ctx->pc = 0x23A798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A7A0u);
        ctx->pc = 0x23A79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A798u;
            // 0x23a79c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A7A0u; }
            if (ctx->pc != 0x23A7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x23A7A0u;
label_23a7a0:
    // 0x23a7a0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x23a7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_23a7a4:
    // 0x23a7a4: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_23a7a8:
    if (ctx->pc == 0x23A7A8u) {
        ctx->pc = 0x23A7A8u;
            // 0x23a7a8: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->pc = 0x23A7ACu;
        goto label_23a7ac;
    }
    ctx->pc = 0x23A7A4u;
    {
        const bool branch_taken_0x23a7a4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x23A7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7A4u;
            // 0x23a7a8: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7a4) {
            ctx->pc = 0x23A778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a778;
        }
    }
    ctx->pc = 0x23A7ACu;
label_23a7ac:
    // 0x23a7ac: 0x0  nop
    ctx->pc = 0x23a7acu;
    // NOP
label_23a7b0:
    // 0x23a7b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a7b4:
    // 0x23a7b4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a7b8:
    // 0x23a7b8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a7bc:
    if (ctx->pc == 0x23A7BCu) {
        ctx->pc = 0x23A7C0u;
        goto label_23a7c0;
    }
    ctx->pc = 0x23A7B8u;
    {
        const bool branch_taken_0x23a7b8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a7b8) {
            ctx->pc = 0x23A830u;
            goto label_23a830;
        }
    }
    ctx->pc = 0x23A7C0u;
label_23a7c0:
    // 0x23a7c0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a7c4:
    // 0x23a7c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a7c8:
    // 0x23a7c8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a7cc:
    // 0x23a7cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a7d0:
    // 0x23a7d0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a7d4:
    if (ctx->pc == 0x23A7D4u) {
        ctx->pc = 0x23A7D8u;
        goto label_23a7d8;
    }
    ctx->pc = 0x23A7D0u;
    {
        const bool branch_taken_0x23a7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a7d0) {
            ctx->pc = 0x23A820u;
            goto label_23a820;
        }
    }
    ctx->pc = 0x23A7D8u;
label_23a7d8:
    // 0x23a7d8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a7dc:
    // 0x23a7dc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a7e0:
    // 0x23a7e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a7e4:
    // 0x23a7e4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a7e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a7e8:
    // 0x23a7e8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a7ec:
    if (ctx->pc == 0x23A7ECu) {
        ctx->pc = 0x23A7ECu;
            // 0x23a7ec: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A7F0u;
        goto label_23a7f0;
    }
    ctx->pc = 0x23A7E8u;
    {
        const bool branch_taken_0x23a7e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A7E8u;
            // 0x23a7ec: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a7e8) {
            ctx->pc = 0x23A820u;
            goto label_23a820;
        }
    }
    ctx->pc = 0x23A7F0u;
label_23a7f0:
    // 0x23a7f0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a7f4:
    // 0x23a7f4: 0x0  nop
    ctx->pc = 0x23a7f4u;
    // NOP
label_23a7f8:
    // 0x23a7f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a7fc:
    // 0x23a7fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a800:
    // 0x23a800: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a804:
    // 0x23a804: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a808:
    // 0x23a808: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a80c:
    // 0x23a80c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a810:
    // 0x23a810: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a814:
    // 0x23a814: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a818:
    if (ctx->pc == 0x23A818u) {
        ctx->pc = 0x23A818u;
            // 0x23a818: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A81Cu;
        goto label_23a81c;
    }
    ctx->pc = 0x23A814u;
    {
        const bool branch_taken_0x23a814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A814u;
            // 0x23a818: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a814) {
            ctx->pc = 0x23A7F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a7f8;
        }
    }
    ctx->pc = 0x23A81Cu;
label_23a81c:
    // 0x23a81c: 0x0  nop
    ctx->pc = 0x23a81cu;
    // NOP
label_23a820:
    // 0x23a820: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a824:
    // 0x23a824: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a828:
    if (ctx->pc == 0x23A828u) {
        ctx->pc = 0x23A828u;
            // 0x23a828: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A82Cu;
        goto label_23a82c;
    }
    ctx->pc = 0x23A824u;
    {
        const bool branch_taken_0x23a824 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A824u;
            // 0x23a828: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a824) {
            ctx->pc = 0x23A7C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a7c4;
        }
    }
    ctx->pc = 0x23A82Cu;
label_23a82c:
    // 0x23a82c: 0x0  nop
    ctx->pc = 0x23a82cu;
    // NOP
label_23a830:
    // 0x23a830: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a834:
    // 0x23a834: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a834u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a838:
    // 0x23a838: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a838u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a83c:
    // 0x23a83c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a83cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a840:
    // 0x23a840: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a844:
    // 0x23a844: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a848:
    // 0x23a848: 0x3e00008  jr          $ra
label_23a84c:
    if (ctx->pc == 0x23A84Cu) {
        ctx->pc = 0x23A84Cu;
            // 0x23a84c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23A850u;
        goto label_fallthrough_0x23a848;
    }
    ctx->pc = 0x23A848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A848u;
            // 0x23a84c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a848:
    ctx->pc = 0x23A850u;
}
