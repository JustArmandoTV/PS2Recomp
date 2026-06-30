#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002397C0
// Address: 0x2397c0 - 0x2398d0
void sub_002397C0_0x2397c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002397C0_0x2397c0");
#endif

    switch (ctx->pc) {
        case 0x2397c0u: goto label_2397c0;
        case 0x2397c4u: goto label_2397c4;
        case 0x2397c8u: goto label_2397c8;
        case 0x2397ccu: goto label_2397cc;
        case 0x2397d0u: goto label_2397d0;
        case 0x2397d4u: goto label_2397d4;
        case 0x2397d8u: goto label_2397d8;
        case 0x2397dcu: goto label_2397dc;
        case 0x2397e0u: goto label_2397e0;
        case 0x2397e4u: goto label_2397e4;
        case 0x2397e8u: goto label_2397e8;
        case 0x2397ecu: goto label_2397ec;
        case 0x2397f0u: goto label_2397f0;
        case 0x2397f4u: goto label_2397f4;
        case 0x2397f8u: goto label_2397f8;
        case 0x2397fcu: goto label_2397fc;
        case 0x239800u: goto label_239800;
        case 0x239804u: goto label_239804;
        case 0x239808u: goto label_239808;
        case 0x23980cu: goto label_23980c;
        case 0x239810u: goto label_239810;
        case 0x239814u: goto label_239814;
        case 0x239818u: goto label_239818;
        case 0x23981cu: goto label_23981c;
        case 0x239820u: goto label_239820;
        case 0x239824u: goto label_239824;
        case 0x239828u: goto label_239828;
        case 0x23982cu: goto label_23982c;
        case 0x239830u: goto label_239830;
        case 0x239834u: goto label_239834;
        case 0x239838u: goto label_239838;
        case 0x23983cu: goto label_23983c;
        case 0x239840u: goto label_239840;
        case 0x239844u: goto label_239844;
        case 0x239848u: goto label_239848;
        case 0x23984cu: goto label_23984c;
        case 0x239850u: goto label_239850;
        case 0x239854u: goto label_239854;
        case 0x239858u: goto label_239858;
        case 0x23985cu: goto label_23985c;
        case 0x239860u: goto label_239860;
        case 0x239864u: goto label_239864;
        case 0x239868u: goto label_239868;
        case 0x23986cu: goto label_23986c;
        case 0x239870u: goto label_239870;
        case 0x239874u: goto label_239874;
        case 0x239878u: goto label_239878;
        case 0x23987cu: goto label_23987c;
        case 0x239880u: goto label_239880;
        case 0x239884u: goto label_239884;
        case 0x239888u: goto label_239888;
        case 0x23988cu: goto label_23988c;
        case 0x239890u: goto label_239890;
        case 0x239894u: goto label_239894;
        case 0x239898u: goto label_239898;
        case 0x23989cu: goto label_23989c;
        case 0x2398a0u: goto label_2398a0;
        case 0x2398a4u: goto label_2398a4;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398acu: goto label_2398ac;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b4u: goto label_2398b4;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398bcu: goto label_2398bc;
        case 0x2398c0u: goto label_2398c0;
        case 0x2398c4u: goto label_2398c4;
        case 0x2398c8u: goto label_2398c8;
        case 0x2398ccu: goto label_2398cc;
        default: break;
    }

    ctx->pc = 0x2397c0u;

label_2397c0:
    // 0x2397c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2397c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2397c4:
    // 0x2397c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2397c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2397c8:
    // 0x2397c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2397c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2397cc:
    // 0x2397cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2397ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2397d0:
    // 0x2397d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2397d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2397d4:
    // 0x2397d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2397d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2397d8:
    // 0x2397d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2397d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2397dc:
    // 0x2397dc: 0x8c830120  lw          $v1, 0x120($a0)
    ctx->pc = 0x2397dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_2397e0:
    // 0x2397e0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2397e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2397e4:
    // 0x2397e4: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_2397e8:
    if (ctx->pc == 0x2397E8u) {
        ctx->pc = 0x2397E8u;
            // 0x2397e8: 0x2490011c  addiu       $s0, $a0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
        ctx->pc = 0x2397ECu;
        goto label_2397ec;
    }
    ctx->pc = 0x2397E4u;
    {
        const bool branch_taken_0x2397e4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2397E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397E4u;
            // 0x2397e8: 0x2490011c  addiu       $s0, $a0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397e4) {
            ctx->pc = 0x239828u;
            goto label_239828;
        }
    }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2397ecu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2397f0:
    // 0x2397f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2397f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2397f4:
    // 0x2397f4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2397f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2397f8:
    // 0x2397f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2397f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2397fc:
    // 0x2397fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_239800:
    if (ctx->pc == 0x239800u) {
        ctx->pc = 0x239804u;
        goto label_239804;
    }
    ctx->pc = 0x2397FCu;
    {
        const bool branch_taken_0x2397fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2397fc) {
            ctx->pc = 0x239818u;
            goto label_239818;
        }
    }
    ctx->pc = 0x239804u;
label_239804:
    // 0x239804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x239804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_239808:
    // 0x239808: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x239808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23980c:
    // 0x23980c: 0x320f809  jalr        $t9
label_239810:
    if (ctx->pc == 0x239810u) {
        ctx->pc = 0x239810u;
            // 0x239810: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239814u;
        goto label_239814;
    }
    ctx->pc = 0x23980Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239814u);
        ctx->pc = 0x239810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23980Cu;
            // 0x239810: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239814u; }
            if (ctx->pc != 0x239814u) { return; }
        }
        }
    }
    ctx->pc = 0x239814u;
label_239814:
    // 0x239814: 0x0  nop
    ctx->pc = 0x239814u;
    // NOP
label_239818:
    // 0x239818: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x239818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23981c:
    // 0x23981c: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_239820:
    if (ctx->pc == 0x239820u) {
        ctx->pc = 0x239820u;
            // 0x239820: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239824u;
        goto label_239824;
    }
    ctx->pc = 0x23981Cu;
    {
        const bool branch_taken_0x23981c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23981Cu;
            // 0x239820: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23981c) {
            ctx->pc = 0x2397F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2397f0;
        }
    }
    ctx->pc = 0x239824u;
label_239824:
    // 0x239824: 0x0  nop
    ctx->pc = 0x239824u;
    // NOP
label_239828:
    // 0x239828: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23982c:
    // 0x23982c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23982cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239830:
    // 0x239830: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239834:
    if (ctx->pc == 0x239834u) {
        ctx->pc = 0x239838u;
        goto label_239838;
    }
    ctx->pc = 0x239830u;
    {
        const bool branch_taken_0x239830 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239830) {
            ctx->pc = 0x2398A8u;
            goto label_2398a8;
        }
    }
    ctx->pc = 0x239838u;
label_239838:
    // 0x239838: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23983c:
    // 0x23983c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23983cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239840:
    // 0x239840: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239844:
    // 0x239844: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239848:
    // 0x239848: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23984c:
    if (ctx->pc == 0x23984Cu) {
        ctx->pc = 0x239850u;
        goto label_239850;
    }
    ctx->pc = 0x239848u;
    {
        const bool branch_taken_0x239848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239848) {
            ctx->pc = 0x239898u;
            goto label_239898;
        }
    }
    ctx->pc = 0x239850u;
label_239850:
    // 0x239850: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239854:
    // 0x239854: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239858:
    // 0x239858: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23985c:
    // 0x23985c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23985cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239860:
    // 0x239860: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239864:
    if (ctx->pc == 0x239864u) {
        ctx->pc = 0x239864u;
            // 0x239864: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239868u;
        goto label_239868;
    }
    ctx->pc = 0x239860u;
    {
        const bool branch_taken_0x239860 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239860u;
            // 0x239864: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239860) {
            ctx->pc = 0x239898u;
            goto label_239898;
        }
    }
    ctx->pc = 0x239868u;
label_239868:
    // 0x239868: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239868u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23986c:
    // 0x23986c: 0x0  nop
    ctx->pc = 0x23986cu;
    // NOP
label_239870:
    // 0x239870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239874:
    // 0x239874: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239878:
    // 0x239878: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23987c:
    // 0x23987c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23987cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239880:
    // 0x239880: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239884:
    // 0x239884: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239888:
    // 0x239888: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239888u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23988c:
    // 0x23988c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239890:
    if (ctx->pc == 0x239890u) {
        ctx->pc = 0x239890u;
            // 0x239890: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239894u;
        goto label_239894;
    }
    ctx->pc = 0x23988Cu;
    {
        const bool branch_taken_0x23988c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23988Cu;
            // 0x239890: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23988c) {
            ctx->pc = 0x239870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239870;
        }
    }
    ctx->pc = 0x239894u;
label_239894:
    // 0x239894: 0x0  nop
    ctx->pc = 0x239894u;
    // NOP
label_239898:
    // 0x239898: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23989c:
    // 0x23989c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_2398a0:
    if (ctx->pc == 0x2398A0u) {
        ctx->pc = 0x2398A0u;
            // 0x2398a0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x2398A4u;
        goto label_2398a4;
    }
    ctx->pc = 0x23989Cu;
    {
        const bool branch_taken_0x23989c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2398A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23989Cu;
            // 0x2398a0: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23989c) {
            ctx->pc = 0x23983Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23983c;
        }
    }
    ctx->pc = 0x2398A4u;
label_2398a4:
    // 0x2398a4: 0x0  nop
    ctx->pc = 0x2398a4u;
    // NOP
label_2398a8:
    // 0x2398a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2398a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2398ac:
    // 0x2398ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2398acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2398b0:
    // 0x2398b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2398b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2398b4:
    // 0x2398b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2398b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2398b8:
    // 0x2398b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2398b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2398bc:
    // 0x2398bc: 0x3e00008  jr          $ra
label_2398c0:
    if (ctx->pc == 0x2398C0u) {
        ctx->pc = 0x2398C0u;
            // 0x2398c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2398C4u;
        goto label_2398c4;
    }
    ctx->pc = 0x2398BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2398C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398BCu;
            // 0x2398c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2398C4u;
label_2398c4:
    // 0x2398c4: 0x0  nop
    ctx->pc = 0x2398c4u;
    // NOP
label_2398c8:
    // 0x2398c8: 0x0  nop
    ctx->pc = 0x2398c8u;
    // NOP
label_2398cc:
    // 0x2398cc: 0x0  nop
    ctx->pc = 0x2398ccu;
    // NOP
}
