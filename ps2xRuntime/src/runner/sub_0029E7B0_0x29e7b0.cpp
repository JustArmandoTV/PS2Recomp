#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E7B0
// Address: 0x29e7b0 - 0x29e8d0
void sub_0029E7B0_0x29e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E7B0_0x29e7b0");
#endif

    switch (ctx->pc) {
        case 0x29e7b0u: goto label_29e7b0;
        case 0x29e7b4u: goto label_29e7b4;
        case 0x29e7b8u: goto label_29e7b8;
        case 0x29e7bcu: goto label_29e7bc;
        case 0x29e7c0u: goto label_29e7c0;
        case 0x29e7c4u: goto label_29e7c4;
        case 0x29e7c8u: goto label_29e7c8;
        case 0x29e7ccu: goto label_29e7cc;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7d4u: goto label_29e7d4;
        case 0x29e7d8u: goto label_29e7d8;
        case 0x29e7dcu: goto label_29e7dc;
        case 0x29e7e0u: goto label_29e7e0;
        case 0x29e7e4u: goto label_29e7e4;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e7ecu: goto label_29e7ec;
        case 0x29e7f0u: goto label_29e7f0;
        case 0x29e7f4u: goto label_29e7f4;
        case 0x29e7f8u: goto label_29e7f8;
        case 0x29e7fcu: goto label_29e7fc;
        case 0x29e800u: goto label_29e800;
        case 0x29e804u: goto label_29e804;
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        case 0x29e8c8u: goto label_29e8c8;
        case 0x29e8ccu: goto label_29e8cc;
        default: break;
    }

    ctx->pc = 0x29e7b0u;

label_29e7b0:
    // 0x29e7b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29e7b4:
    // 0x29e7b4: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x29e7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_29e7b8:
    // 0x29e7b8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x29e7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_29e7bc:
    // 0x29e7bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x29e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_29e7c0:
    // 0x29e7c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29e7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29e7c4:
    // 0x29e7c4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29e7c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e7c8:
    // 0x29e7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29e7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29e7cc:
    // 0x29e7cc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x29e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_29e7d0:
    // 0x29e7d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29e7d4:
    // 0x29e7d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x29e7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_29e7d8:
    // 0x29e7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29e7dc:
    // 0x29e7dc: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x29e7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_29e7e0:
    // 0x29e7e0: 0x8c9300ac  lw          $s3, 0xAC($a0)
    ctx->pc = 0x29e7e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_29e7e4:
    // 0x29e7e4: 0x8c720028  lw          $s2, 0x28($v1)
    ctx->pc = 0x29e7e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_29e7e8:
    // 0x29e7e8: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_29e7ec:
    if (ctx->pc == 0x29E7ECu) {
        ctx->pc = 0x29E7ECu;
            // 0x29e7ec: 0x24710024  addiu       $s1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->pc = 0x29E7F0u;
        goto label_29e7f0;
    }
    ctx->pc = 0x29E7E8u;
    {
        const bool branch_taken_0x29e7e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7E8u;
            // 0x29e7ec: 0x24710024  addiu       $s1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7e8) {
            ctx->pc = 0x29E7F8u;
            goto label_29e7f8;
        }
    }
    ctx->pc = 0x29E7F0u;
label_29e7f0:
    // 0x29e7f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_29e7f4:
    if (ctx->pc == 0x29E7F4u) {
        ctx->pc = 0x29E7F4u;
            // 0x29e7f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E7F8u;
        goto label_29e7f8;
    }
    ctx->pc = 0x29E7F0u;
    {
        const bool branch_taken_0x29e7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7F0u;
            // 0x29e7f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7f0) {
            ctx->pc = 0x29E80Cu;
            goto label_29e80c;
        }
    }
    ctx->pc = 0x29E7F8u;
label_29e7f8:
    // 0x29e7f8: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x29e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_29e7fc:
    // 0x29e7fc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_29e800:
    if (ctx->pc == 0x29E800u) {
        ctx->pc = 0x29E800u;
            // 0x29e800: 0x38043  sra         $s0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x29E804u;
        goto label_29e804;
    }
    ctx->pc = 0x29E7FCu;
    {
        const bool branch_taken_0x29e7fc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x29E800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7FCu;
            // 0x29e800: 0x38043  sra         $s0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7fc) {
            ctx->pc = 0x29E80Cu;
            goto label_29e80c;
        }
    }
    ctx->pc = 0x29E804u;
label_29e804:
    // 0x29e804: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29e804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29e808:
    // 0x29e808: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x29e808u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_29e80c:
    // 0x29e80c: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x29e80cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_29e810:
    // 0x29e810: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_29e814:
    if (ctx->pc == 0x29E814u) {
        ctx->pc = 0x29E818u;
        goto label_29e818;
    }
    ctx->pc = 0x29E810u;
    {
        const bool branch_taken_0x29e810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e810) {
            ctx->pc = 0x29E8A8u;
            goto label_29e8a8;
        }
    }
    ctx->pc = 0x29E818u;
label_29e818:
    // 0x29e818: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x29e818u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_29e81c:
    // 0x29e81c: 0x28c10005  slti        $at, $a2, 0x5
    ctx->pc = 0x29e81cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
label_29e820:
    // 0x29e820: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_29e824:
    if (ctx->pc == 0x29E824u) {
        ctx->pc = 0x29E828u;
        goto label_29e828;
    }
    ctx->pc = 0x29E820u;
    {
        const bool branch_taken_0x29e820 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e820) {
            ctx->pc = 0x29E82Cu;
            goto label_29e82c;
        }
    }
    ctx->pc = 0x29E828u;
label_29e828:
    // 0x29e828: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29e828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29e82c:
    // 0x29e82c: 0x18c00014  blez        $a2, . + 4 + (0x14 << 2)
label_29e830:
    if (ctx->pc == 0x29E830u) {
        ctx->pc = 0x29E830u;
            // 0x29e830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E834u;
        goto label_29e834;
    }
    ctx->pc = 0x29E82Cu;
    {
        const bool branch_taken_0x29e82c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29E830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E82Cu;
            // 0x29e830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e82c) {
            ctx->pc = 0x29E880u;
            goto label_29e880;
        }
    }
    ctx->pc = 0x29E834u;
label_29e834:
    // 0x29e834: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29e838:
    // 0x29e838: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29e838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29e83c:
    // 0x29e83c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_29e840:
    if (ctx->pc == 0x29E840u) {
        ctx->pc = 0x29E844u;
        goto label_29e844;
    }
    ctx->pc = 0x29E83Cu;
    {
        const bool branch_taken_0x29e83c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e83c) {
            ctx->pc = 0x29E860u;
            goto label_29e860;
        }
    }
    ctx->pc = 0x29E844u;
label_29e844:
    // 0x29e844: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x29e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_29e848:
    // 0x29e848: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29e848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_29e84c:
    // 0x29e84c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x29e84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_29e850:
    // 0x29e850: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x29e850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29e854:
    // 0x29e854: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29e858:
    // 0x29e858: 0x10000003  b           . + 4 + (0x3 << 2)
label_29e85c:
    if (ctx->pc == 0x29E85Cu) {
        ctx->pc = 0x29E85Cu;
            // 0x29e85c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29E860u;
        goto label_29e860;
    }
    ctx->pc = 0x29E858u;
    {
        const bool branch_taken_0x29e858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E858u;
            // 0x29e85c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e858) {
            ctx->pc = 0x29E868u;
            goto label_29e868;
        }
    }
    ctx->pc = 0x29E860u;
label_29e860:
    // 0x29e860: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29e860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e864:
    // 0x29e864: 0x0  nop
    ctx->pc = 0x29e864u;
    // NOP
label_29e868:
    // 0x29e868: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_29e86c:
    // 0x29e86c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x29e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_29e870:
    // 0x29e870: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x29e870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_29e874:
    // 0x29e874: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_29e878:
    if (ctx->pc == 0x29E878u) {
        ctx->pc = 0x29E878u;
            // 0x29e878: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x29E87Cu;
        goto label_29e87c;
    }
    ctx->pc = 0x29E874u;
    {
        const bool branch_taken_0x29e874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E874u;
            // 0x29e878: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e874) {
            ctx->pc = 0x29E838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e838;
        }
    }
    ctx->pc = 0x29E87Cu;
label_29e87c:
    // 0x29e87c: 0x0  nop
    ctx->pc = 0x29e87cu;
    // NOP
label_29e880:
    // 0x29e880: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x29e880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_29e884:
    // 0x29e884: 0x2469023  subu        $s2, $s2, $a2
    ctx->pc = 0x29e884u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_29e888:
    // 0x29e888: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x29e888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29e88c:
    // 0x29e88c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29e88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29e890:
    // 0x29e890: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x29e890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_29e894:
    // 0x29e894: 0x320f809  jalr        $t9
label_29e898:
    if (ctx->pc == 0x29E898u) {
        ctx->pc = 0x29E898u;
            // 0x29e898: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E89Cu;
        goto label_29e89c;
    }
    ctx->pc = 0x29E894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E89Cu);
        ctx->pc = 0x29E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E894u;
            // 0x29e898: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E89Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E89Cu; }
            if (ctx->pc != 0x29E89Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29E89Cu;
label_29e89c:
    // 0x29e89c: 0x212082a  slt         $at, $s0, $s2
    ctx->pc = 0x29e89cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_29e8a0:
    // 0x29e8a0: 0x5420ffde  bnel        $at, $zero, . + 4 + (-0x22 << 2)
label_29e8a4:
    if (ctx->pc == 0x29E8A4u) {
        ctx->pc = 0x29E8A4u;
            // 0x29e8a4: 0x2503023  subu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->pc = 0x29E8A8u;
        goto label_29e8a8;
    }
    ctx->pc = 0x29E8A0u;
    {
        const bool branch_taken_0x29e8a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e8a0) {
            ctx->pc = 0x29E8A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8A0u;
            // 0x29e8a4: 0x2503023  subu        $a2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29E81Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e81c;
        }
    }
    ctx->pc = 0x29E8A8u;
label_29e8a8:
    // 0x29e8a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x29e8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29e8ac:
    // 0x29e8ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x29e8acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29e8b0:
    // 0x29e8b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29e8b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29e8b4:
    // 0x29e8b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29e8b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29e8b8:
    // 0x29e8b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29e8bc:
    // 0x29e8bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29e8c0:
    // 0x29e8c0: 0x3e00008  jr          $ra
label_29e8c4:
    if (ctx->pc == 0x29E8C4u) {
        ctx->pc = 0x29E8C4u;
            // 0x29e8c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x29E8C8u;
        goto label_29e8c8;
    }
    ctx->pc = 0x29E8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8C0u;
            // 0x29e8c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E8C8u;
label_29e8c8:
    // 0x29e8c8: 0x0  nop
    ctx->pc = 0x29e8c8u;
    // NOP
label_29e8cc:
    // 0x29e8cc: 0x0  nop
    ctx->pc = 0x29e8ccu;
    // NOP
}
