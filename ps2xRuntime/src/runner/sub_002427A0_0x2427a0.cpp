#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002427A0
// Address: 0x2427a0 - 0x2428c0
void sub_002427A0_0x2427a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002427A0_0x2427a0");
#endif

    switch (ctx->pc) {
        case 0x2427a0u: goto label_2427a0;
        case 0x2427a4u: goto label_2427a4;
        case 0x2427a8u: goto label_2427a8;
        case 0x2427acu: goto label_2427ac;
        case 0x2427b0u: goto label_2427b0;
        case 0x2427b4u: goto label_2427b4;
        case 0x2427b8u: goto label_2427b8;
        case 0x2427bcu: goto label_2427bc;
        case 0x2427c0u: goto label_2427c0;
        case 0x2427c4u: goto label_2427c4;
        case 0x2427c8u: goto label_2427c8;
        case 0x2427ccu: goto label_2427cc;
        case 0x2427d0u: goto label_2427d0;
        case 0x2427d4u: goto label_2427d4;
        case 0x2427d8u: goto label_2427d8;
        case 0x2427dcu: goto label_2427dc;
        case 0x2427e0u: goto label_2427e0;
        case 0x2427e4u: goto label_2427e4;
        case 0x2427e8u: goto label_2427e8;
        case 0x2427ecu: goto label_2427ec;
        case 0x2427f0u: goto label_2427f0;
        case 0x2427f4u: goto label_2427f4;
        case 0x2427f8u: goto label_2427f8;
        case 0x2427fcu: goto label_2427fc;
        case 0x242800u: goto label_242800;
        case 0x242804u: goto label_242804;
        case 0x242808u: goto label_242808;
        case 0x24280cu: goto label_24280c;
        case 0x242810u: goto label_242810;
        case 0x242814u: goto label_242814;
        case 0x242818u: goto label_242818;
        case 0x24281cu: goto label_24281c;
        case 0x242820u: goto label_242820;
        case 0x242824u: goto label_242824;
        case 0x242828u: goto label_242828;
        case 0x24282cu: goto label_24282c;
        case 0x242830u: goto label_242830;
        case 0x242834u: goto label_242834;
        case 0x242838u: goto label_242838;
        case 0x24283cu: goto label_24283c;
        case 0x242840u: goto label_242840;
        case 0x242844u: goto label_242844;
        case 0x242848u: goto label_242848;
        case 0x24284cu: goto label_24284c;
        case 0x242850u: goto label_242850;
        case 0x242854u: goto label_242854;
        case 0x242858u: goto label_242858;
        case 0x24285cu: goto label_24285c;
        case 0x242860u: goto label_242860;
        case 0x242864u: goto label_242864;
        case 0x242868u: goto label_242868;
        case 0x24286cu: goto label_24286c;
        case 0x242870u: goto label_242870;
        case 0x242874u: goto label_242874;
        case 0x242878u: goto label_242878;
        case 0x24287cu: goto label_24287c;
        case 0x242880u: goto label_242880;
        case 0x242884u: goto label_242884;
        case 0x242888u: goto label_242888;
        case 0x24288cu: goto label_24288c;
        case 0x242890u: goto label_242890;
        case 0x242894u: goto label_242894;
        case 0x242898u: goto label_242898;
        case 0x24289cu: goto label_24289c;
        case 0x2428a0u: goto label_2428a0;
        case 0x2428a4u: goto label_2428a4;
        case 0x2428a8u: goto label_2428a8;
        case 0x2428acu: goto label_2428ac;
        case 0x2428b0u: goto label_2428b0;
        case 0x2428b4u: goto label_2428b4;
        case 0x2428b8u: goto label_2428b8;
        case 0x2428bcu: goto label_2428bc;
        default: break;
    }

    ctx->pc = 0x2427a0u;

label_2427a0:
    // 0x2427a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2427a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2427a4:
    // 0x2427a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2427a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2427a8:
    // 0x2427a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2427a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2427ac:
    // 0x2427ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2427acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2427b0:
    // 0x2427b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2427b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2427b4:
    // 0x2427b4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2427b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2427b8:
    // 0x2427b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2427b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2427bc:
    // 0x2427bc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2427bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2427c0:
    // 0x2427c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2427c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2427c4:
    // 0x2427c4: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x2427c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_2427c8:
    // 0x2427c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2427c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2427cc:
    // 0x2427cc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2427ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2427d0:
    // 0x2427d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2427d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2427d4:
    // 0x2427d4: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x2427d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2427d8:
    // 0x2427d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2427d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2427dc:
    // 0x2427dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2427dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2427e0:
    // 0x2427e0: 0x8c72fffc  lw          $s2, -0x4($v1)
    ctx->pc = 0x2427e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_2427e4:
    // 0x2427e4: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
label_2427e8:
    if (ctx->pc == 0x2427E8u) {
        ctx->pc = 0x2427E8u;
            // 0x2427e8: 0x14b843  sra         $s7, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 20), 1));
        ctx->pc = 0x2427ECu;
        goto label_2427ec;
    }
    ctx->pc = 0x2427E4u;
    {
        const bool branch_taken_0x2427e4 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2427E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2427E4u;
            // 0x2427e8: 0x14b843  sra         $s7, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427e4) {
            ctx->pc = 0x2427F4u;
            goto label_2427f4;
        }
    }
    ctx->pc = 0x2427ECu;
label_2427ec:
    // 0x2427ec: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x2427ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2427f0:
    // 0x2427f0: 0x3b843  sra         $s7, $v1, 1
    ctx->pc = 0x2427f0u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 3), 1));
label_2427f4:
    // 0x2427f4: 0x2f5082a  slt         $at, $s7, $s5
    ctx->pc = 0x2427f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_2427f8:
    // 0x2427f8: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_2427fc:
    if (ctx->pc == 0x2427FCu) {
        ctx->pc = 0x242800u;
        goto label_242800;
    }
    ctx->pc = 0x2427F8u;
    {
        const bool branch_taken_0x2427f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2427f8) {
            ctx->pc = 0x242888u;
            goto label_242888;
        }
    }
    ctx->pc = 0x242800u;
label_242800:
    // 0x242800: 0x158840  sll         $s1, $s5, 1
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_242804:
    // 0x242804: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x242804u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_242808:
    // 0x242808: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_24280c:
    if (ctx->pc == 0x24280Cu) {
        ctx->pc = 0x242810u;
        goto label_242810;
    }
    ctx->pc = 0x242808u;
    {
        const bool branch_taken_0x242808 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x242808) {
            ctx->pc = 0x242840u;
            goto label_242840;
        }
    }
    ctx->pc = 0x242810u;
label_242810:
    // 0x242810: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x242810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_242814:
    // 0x242814: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x242814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_242818:
    // 0x242818: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x242818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_24281c:
    // 0x24281c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x24281cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_242820:
    // 0x242820: 0x260f809  jalr        $s3
label_242824:
    if (ctx->pc == 0x242824u) {
        ctx->pc = 0x242824u;
            // 0x242824: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x242828u;
        goto label_242828;
    }
    ctx->pc = 0x242820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x242828u);
        ctx->pc = 0x242824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242820u;
            // 0x242824: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242828u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242828u; }
            if (ctx->pc != 0x242828u) { return; }
        }
        }
    }
    ctx->pc = 0x242828u;
label_242828:
    // 0x242828: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_24282c:
    // 0x24282c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_242830:
    // 0x242830: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_242834:
    if (ctx->pc == 0x242834u) {
        ctx->pc = 0x242838u;
        goto label_242838;
    }
    ctx->pc = 0x242830u;
    {
        const bool branch_taken_0x242830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242830) {
            ctx->pc = 0x242840u;
            goto label_242840;
        }
    }
    ctx->pc = 0x242838u;
label_242838:
    // 0x242838: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x242838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24283c:
    // 0x24283c: 0x0  nop
    ctx->pc = 0x24283cu;
    // NOP
label_242840:
    // 0x242840: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x242840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_242844:
    // 0x242844: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x242844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_242848:
    // 0x242848: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_24284c:
    // 0x24284c: 0x8c46fffc  lw          $a2, -0x4($v0)
    ctx->pc = 0x24284cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_242850:
    // 0x242850: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x242850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_242854:
    // 0x242854: 0x260f809  jalr        $s3
label_242858:
    if (ctx->pc == 0x242858u) {
        ctx->pc = 0x242858u;
            // 0x242858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24285Cu;
        goto label_24285c;
    }
    ctx->pc = 0x242854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x24285Cu);
        ctx->pc = 0x242858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242854u;
            // 0x242858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24285Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24285Cu; }
            if (ctx->pc != 0x24285Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24285Cu;
label_24285c:
    // 0x24285c: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x24285cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_242860:
    // 0x242860: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_242864:
    // 0x242864: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_242868:
    if (ctx->pc == 0x242868u) {
        ctx->pc = 0x24286Cu;
        goto label_24286c;
    }
    ctx->pc = 0x242864u;
    {
        const bool branch_taken_0x242864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x242864) {
            ctx->pc = 0x242888u;
            goto label_242888;
        }
    }
    ctx->pc = 0x24286Cu;
label_24286c:
    // 0x24286c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x24286cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242870:
    // 0x242870: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_242874:
    // 0x242874: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x242874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_242878:
    // 0x242878: 0x2f1082a  slt         $at, $s7, $s1
    ctx->pc = 0x242878u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_24287c:
    // 0x24287c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x24287cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242880:
    // 0x242880: 0x1020ffdf  beqz        $at, . + 4 + (-0x21 << 2)
label_242884:
    if (ctx->pc == 0x242884u) {
        ctx->pc = 0x242884u;
            // 0x242884: 0xac64fffc  sw          $a0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        ctx->pc = 0x242888u;
        goto label_242888;
    }
    ctx->pc = 0x242880u;
    {
        const bool branch_taken_0x242880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x242884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242880u;
            // 0x242884: 0xac64fffc  sw          $a0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242880) {
            ctx->pc = 0x242800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242800;
        }
    }
    ctx->pc = 0x242888u;
label_242888:
    // 0x242888: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x242888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_24288c:
    // 0x24288c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x24288cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_242890:
    // 0x242890: 0xac72fffc  sw          $s2, -0x4($v1)
    ctx->pc = 0x242890u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 18));
label_242894:
    // 0x242894: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x242894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_242898:
    // 0x242898: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x242898u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24289c:
    // 0x24289c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24289cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2428a0:
    // 0x2428a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2428a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2428a4:
    // 0x2428a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2428a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2428a8:
    // 0x2428a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2428a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2428ac:
    // 0x2428ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2428acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2428b0:
    // 0x2428b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2428b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2428b4:
    // 0x2428b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2428b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2428b8:
    // 0x2428b8: 0x3e00008  jr          $ra
label_2428bc:
    if (ctx->pc == 0x2428BCu) {
        ctx->pc = 0x2428BCu;
            // 0x2428bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2428C0u;
        goto label_fallthrough_0x2428b8;
    }
    ctx->pc = 0x2428B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2428BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2428B8u;
            // 0x2428bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2428b8:
    ctx->pc = 0x2428C0u;
}
