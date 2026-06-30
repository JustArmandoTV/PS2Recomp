#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A630
// Address: 0x23a630 - 0x23a740
void sub_0023A630_0x23a630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A630_0x23a630");
#endif

    switch (ctx->pc) {
        case 0x23a630u: goto label_23a630;
        case 0x23a634u: goto label_23a634;
        case 0x23a638u: goto label_23a638;
        case 0x23a63cu: goto label_23a63c;
        case 0x23a640u: goto label_23a640;
        case 0x23a644u: goto label_23a644;
        case 0x23a648u: goto label_23a648;
        case 0x23a64cu: goto label_23a64c;
        case 0x23a650u: goto label_23a650;
        case 0x23a654u: goto label_23a654;
        case 0x23a658u: goto label_23a658;
        case 0x23a65cu: goto label_23a65c;
        case 0x23a660u: goto label_23a660;
        case 0x23a664u: goto label_23a664;
        case 0x23a668u: goto label_23a668;
        case 0x23a66cu: goto label_23a66c;
        case 0x23a670u: goto label_23a670;
        case 0x23a674u: goto label_23a674;
        case 0x23a678u: goto label_23a678;
        case 0x23a67cu: goto label_23a67c;
        case 0x23a680u: goto label_23a680;
        case 0x23a684u: goto label_23a684;
        case 0x23a688u: goto label_23a688;
        case 0x23a68cu: goto label_23a68c;
        case 0x23a690u: goto label_23a690;
        case 0x23a694u: goto label_23a694;
        case 0x23a698u: goto label_23a698;
        case 0x23a69cu: goto label_23a69c;
        case 0x23a6a0u: goto label_23a6a0;
        case 0x23a6a4u: goto label_23a6a4;
        case 0x23a6a8u: goto label_23a6a8;
        case 0x23a6acu: goto label_23a6ac;
        case 0x23a6b0u: goto label_23a6b0;
        case 0x23a6b4u: goto label_23a6b4;
        case 0x23a6b8u: goto label_23a6b8;
        case 0x23a6bcu: goto label_23a6bc;
        case 0x23a6c0u: goto label_23a6c0;
        case 0x23a6c4u: goto label_23a6c4;
        case 0x23a6c8u: goto label_23a6c8;
        case 0x23a6ccu: goto label_23a6cc;
        case 0x23a6d0u: goto label_23a6d0;
        case 0x23a6d4u: goto label_23a6d4;
        case 0x23a6d8u: goto label_23a6d8;
        case 0x23a6dcu: goto label_23a6dc;
        case 0x23a6e0u: goto label_23a6e0;
        case 0x23a6e4u: goto label_23a6e4;
        case 0x23a6e8u: goto label_23a6e8;
        case 0x23a6ecu: goto label_23a6ec;
        case 0x23a6f0u: goto label_23a6f0;
        case 0x23a6f4u: goto label_23a6f4;
        case 0x23a6f8u: goto label_23a6f8;
        case 0x23a6fcu: goto label_23a6fc;
        case 0x23a700u: goto label_23a700;
        case 0x23a704u: goto label_23a704;
        case 0x23a708u: goto label_23a708;
        case 0x23a70cu: goto label_23a70c;
        case 0x23a710u: goto label_23a710;
        case 0x23a714u: goto label_23a714;
        case 0x23a718u: goto label_23a718;
        case 0x23a71cu: goto label_23a71c;
        case 0x23a720u: goto label_23a720;
        case 0x23a724u: goto label_23a724;
        case 0x23a728u: goto label_23a728;
        case 0x23a72cu: goto label_23a72c;
        case 0x23a730u: goto label_23a730;
        case 0x23a734u: goto label_23a734;
        case 0x23a738u: goto label_23a738;
        case 0x23a73cu: goto label_23a73c;
        default: break;
    }

    ctx->pc = 0x23a630u;

label_23a630:
    // 0x23a630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23a630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23a634:
    // 0x23a634: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23a638:
    // 0x23a638: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23a63c:
    // 0x23a63c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a640:
    // 0x23a640: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a644:
    // 0x23a644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a648:
    // 0x23a648: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23a648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a64c:
    // 0x23a64c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a650:
    // 0x23a650: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x23a650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23a654:
    // 0x23a654: 0x8c830168  lw          $v1, 0x168($a0)
    ctx->pc = 0x23a654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
label_23a658:
    // 0x23a658: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x23a658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a65c:
    // 0x23a65c: 0x6800010  bltz        $s4, . + 4 + (0x10 << 2)
label_23a660:
    if (ctx->pc == 0x23A660u) {
        ctx->pc = 0x23A660u;
            // 0x23a660: 0x24900164  addiu       $s0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->pc = 0x23A664u;
        goto label_23a664;
    }
    ctx->pc = 0x23A65Cu;
    {
        const bool branch_taken_0x23a65c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23A660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A65Cu;
            // 0x23a660: 0x24900164  addiu       $s0, $a0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a65c) {
            ctx->pc = 0x23A6A0u;
            goto label_23a6a0;
        }
    }
    ctx->pc = 0x23A664u;
label_23a664:
    // 0x23a664: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x23a664u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23a668:
    // 0x23a668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a66c:
    // 0x23a66c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23a670:
    // 0x23a670: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a674:
    // 0x23a674: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a678:
    if (ctx->pc == 0x23A678u) {
        ctx->pc = 0x23A67Cu;
        goto label_23a67c;
    }
    ctx->pc = 0x23A674u;
    {
        const bool branch_taken_0x23a674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a674) {
            ctx->pc = 0x23A690u;
            goto label_23a690;
        }
    }
    ctx->pc = 0x23A67Cu;
label_23a67c:
    // 0x23a67c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a680:
    // 0x23a680: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a684:
    // 0x23a684: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a684u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a688:
    // 0x23a688: 0x320f809  jalr        $t9
label_23a68c:
    if (ctx->pc == 0x23A68Cu) {
        ctx->pc = 0x23A68Cu;
            // 0x23a68c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A690u;
        goto label_23a690;
    }
    ctx->pc = 0x23A688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A690u);
        ctx->pc = 0x23A68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A688u;
            // 0x23a68c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A690u; }
            if (ctx->pc != 0x23A690u) { return; }
        }
        }
    }
    ctx->pc = 0x23A690u;
label_23a690:
    // 0x23a690: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x23a690u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_23a694:
    // 0x23a694: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_23a698:
    if (ctx->pc == 0x23A698u) {
        ctx->pc = 0x23A698u;
            // 0x23a698: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->pc = 0x23A69Cu;
        goto label_23a69c;
    }
    ctx->pc = 0x23A694u;
    {
        const bool branch_taken_0x23a694 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x23A698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A694u;
            // 0x23a698: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a694) {
            ctx->pc = 0x23A668u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a668;
        }
    }
    ctx->pc = 0x23A69Cu;
label_23a69c:
    // 0x23a69c: 0x0  nop
    ctx->pc = 0x23a69cu;
    // NOP
label_23a6a0:
    // 0x23a6a0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a6a4:
    // 0x23a6a4: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a6a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a6a8:
    // 0x23a6a8: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a6ac:
    if (ctx->pc == 0x23A6ACu) {
        ctx->pc = 0x23A6B0u;
        goto label_23a6b0;
    }
    ctx->pc = 0x23A6A8u;
    {
        const bool branch_taken_0x23a6a8 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a6a8) {
            ctx->pc = 0x23A720u;
            goto label_23a720;
        }
    }
    ctx->pc = 0x23A6B0u;
label_23a6b0:
    // 0x23a6b0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a6b4:
    // 0x23a6b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a6b8:
    // 0x23a6b8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a6bc:
    // 0x23a6bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a6c0:
    // 0x23a6c0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a6c4:
    if (ctx->pc == 0x23A6C4u) {
        ctx->pc = 0x23A6C8u;
        goto label_23a6c8;
    }
    ctx->pc = 0x23A6C0u;
    {
        const bool branch_taken_0x23a6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a6c0) {
            ctx->pc = 0x23A710u;
            goto label_23a710;
        }
    }
    ctx->pc = 0x23A6C8u;
label_23a6c8:
    // 0x23a6c8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a6cc:
    // 0x23a6cc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a6d0:
    // 0x23a6d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a6d4:
    // 0x23a6d4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a6d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a6d8:
    // 0x23a6d8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a6dc:
    if (ctx->pc == 0x23A6DCu) {
        ctx->pc = 0x23A6DCu;
            // 0x23a6dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A6E0u;
        goto label_23a6e0;
    }
    ctx->pc = 0x23A6D8u;
    {
        const bool branch_taken_0x23a6d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A6D8u;
            // 0x23a6dc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a6d8) {
            ctx->pc = 0x23A710u;
            goto label_23a710;
        }
    }
    ctx->pc = 0x23A6E0u;
label_23a6e0:
    // 0x23a6e0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a6e4:
    // 0x23a6e4: 0x0  nop
    ctx->pc = 0x23a6e4u;
    // NOP
label_23a6e8:
    // 0x23a6e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a6ec:
    // 0x23a6ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a6f0:
    // 0x23a6f0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a6f4:
    // 0x23a6f4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a6f8:
    // 0x23a6f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a6fc:
    // 0x23a6fc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a700:
    // 0x23a700: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a704:
    // 0x23a704: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a708:
    if (ctx->pc == 0x23A708u) {
        ctx->pc = 0x23A708u;
            // 0x23a708: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A70Cu;
        goto label_23a70c;
    }
    ctx->pc = 0x23A704u;
    {
        const bool branch_taken_0x23a704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A704u;
            // 0x23a708: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a704) {
            ctx->pc = 0x23A6E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a6e8;
        }
    }
    ctx->pc = 0x23A70Cu;
label_23a70c:
    // 0x23a70c: 0x0  nop
    ctx->pc = 0x23a70cu;
    // NOP
label_23a710:
    // 0x23a710: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a710u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a714:
    // 0x23a714: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a718:
    if (ctx->pc == 0x23A718u) {
        ctx->pc = 0x23A718u;
            // 0x23a718: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A71Cu;
        goto label_23a71c;
    }
    ctx->pc = 0x23A714u;
    {
        const bool branch_taken_0x23a714 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A714u;
            // 0x23a718: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a714) {
            ctx->pc = 0x23A6B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a6b4;
        }
    }
    ctx->pc = 0x23A71Cu;
label_23a71c:
    // 0x23a71c: 0x0  nop
    ctx->pc = 0x23a71cu;
    // NOP
label_23a720:
    // 0x23a720: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a724:
    // 0x23a724: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a724u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a728:
    // 0x23a728: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a72c:
    // 0x23a72c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a72cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a730:
    // 0x23a730: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a734:
    // 0x23a734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a738:
    // 0x23a738: 0x3e00008  jr          $ra
label_23a73c:
    if (ctx->pc == 0x23A73Cu) {
        ctx->pc = 0x23A73Cu;
            // 0x23a73c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23A740u;
        goto label_fallthrough_0x23a738;
    }
    ctx->pc = 0x23A738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A738u;
            // 0x23a73c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a738:
    ctx->pc = 0x23A740u;
}
