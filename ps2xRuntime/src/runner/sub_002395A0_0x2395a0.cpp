#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002395A0
// Address: 0x2395a0 - 0x2396b0
void sub_002395A0_0x2395a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002395A0_0x2395a0");
#endif

    switch (ctx->pc) {
        case 0x2395a0u: goto label_2395a0;
        case 0x2395a4u: goto label_2395a4;
        case 0x2395a8u: goto label_2395a8;
        case 0x2395acu: goto label_2395ac;
        case 0x2395b0u: goto label_2395b0;
        case 0x2395b4u: goto label_2395b4;
        case 0x2395b8u: goto label_2395b8;
        case 0x2395bcu: goto label_2395bc;
        case 0x2395c0u: goto label_2395c0;
        case 0x2395c4u: goto label_2395c4;
        case 0x2395c8u: goto label_2395c8;
        case 0x2395ccu: goto label_2395cc;
        case 0x2395d0u: goto label_2395d0;
        case 0x2395d4u: goto label_2395d4;
        case 0x2395d8u: goto label_2395d8;
        case 0x2395dcu: goto label_2395dc;
        case 0x2395e0u: goto label_2395e0;
        case 0x2395e4u: goto label_2395e4;
        case 0x2395e8u: goto label_2395e8;
        case 0x2395ecu: goto label_2395ec;
        case 0x2395f0u: goto label_2395f0;
        case 0x2395f4u: goto label_2395f4;
        case 0x2395f8u: goto label_2395f8;
        case 0x2395fcu: goto label_2395fc;
        case 0x239600u: goto label_239600;
        case 0x239604u: goto label_239604;
        case 0x239608u: goto label_239608;
        case 0x23960cu: goto label_23960c;
        case 0x239610u: goto label_239610;
        case 0x239614u: goto label_239614;
        case 0x239618u: goto label_239618;
        case 0x23961cu: goto label_23961c;
        case 0x239620u: goto label_239620;
        case 0x239624u: goto label_239624;
        case 0x239628u: goto label_239628;
        case 0x23962cu: goto label_23962c;
        case 0x239630u: goto label_239630;
        case 0x239634u: goto label_239634;
        case 0x239638u: goto label_239638;
        case 0x23963cu: goto label_23963c;
        case 0x239640u: goto label_239640;
        case 0x239644u: goto label_239644;
        case 0x239648u: goto label_239648;
        case 0x23964cu: goto label_23964c;
        case 0x239650u: goto label_239650;
        case 0x239654u: goto label_239654;
        case 0x239658u: goto label_239658;
        case 0x23965cu: goto label_23965c;
        case 0x239660u: goto label_239660;
        case 0x239664u: goto label_239664;
        case 0x239668u: goto label_239668;
        case 0x23966cu: goto label_23966c;
        case 0x239670u: goto label_239670;
        case 0x239674u: goto label_239674;
        case 0x239678u: goto label_239678;
        case 0x23967cu: goto label_23967c;
        case 0x239680u: goto label_239680;
        case 0x239684u: goto label_239684;
        case 0x239688u: goto label_239688;
        case 0x23968cu: goto label_23968c;
        case 0x239690u: goto label_239690;
        case 0x239694u: goto label_239694;
        case 0x239698u: goto label_239698;
        case 0x23969cu: goto label_23969c;
        case 0x2396a0u: goto label_2396a0;
        case 0x2396a4u: goto label_2396a4;
        case 0x2396a8u: goto label_2396a8;
        case 0x2396acu: goto label_2396ac;
        default: break;
    }

    ctx->pc = 0x2395a0u;

label_2395a0:
    // 0x2395a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2395a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2395a4:
    // 0x2395a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2395a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2395a8:
    // 0x2395a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2395a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2395ac:
    // 0x2395ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2395acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2395b0:
    // 0x2395b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2395b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2395b4:
    // 0x2395b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2395b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2395b8:
    // 0x2395b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2395b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2395bc:
    // 0x2395bc: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_2395c0:
    // 0x2395c0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2395c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2395c4:
    // 0x2395c4: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_2395c8:
    if (ctx->pc == 0x2395C8u) {
        ctx->pc = 0x2395C8u;
            // 0x2395c8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->pc = 0x2395CCu;
        goto label_2395cc;
    }
    ctx->pc = 0x2395C4u;
    {
        const bool branch_taken_0x2395c4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2395C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2395C4u;
            // 0x2395c8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395c4) {
            ctx->pc = 0x239608u;
            goto label_239608;
        }
    }
    ctx->pc = 0x2395CCu;
label_2395cc:
    // 0x2395cc: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2395ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2395d0:
    // 0x2395d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2395d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2395d4:
    // 0x2395d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2395d8:
    // 0x2395d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2395d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2395dc:
    // 0x2395dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2395e0:
    if (ctx->pc == 0x2395E0u) {
        ctx->pc = 0x2395E4u;
        goto label_2395e4;
    }
    ctx->pc = 0x2395DCu;
    {
        const bool branch_taken_0x2395dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2395dc) {
            ctx->pc = 0x2395F8u;
            goto label_2395f8;
        }
    }
    ctx->pc = 0x2395E4u;
label_2395e4:
    // 0x2395e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2395e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2395e8:
    // 0x2395e8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2395e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2395ec:
    // 0x2395ec: 0x320f809  jalr        $t9
label_2395f0:
    if (ctx->pc == 0x2395F0u) {
        ctx->pc = 0x2395F0u;
            // 0x2395f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2395F4u;
        goto label_2395f4;
    }
    ctx->pc = 0x2395ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2395F4u);
        ctx->pc = 0x2395F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2395ECu;
            // 0x2395f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2395F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2395F4u; }
            if (ctx->pc != 0x2395F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2395F4u;
label_2395f4:
    // 0x2395f4: 0x0  nop
    ctx->pc = 0x2395f4u;
    // NOP
label_2395f8:
    // 0x2395f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2395f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2395fc:
    // 0x2395fc: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_239600:
    if (ctx->pc == 0x239600u) {
        ctx->pc = 0x239600u;
            // 0x239600: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x239604u;
        goto label_239604;
    }
    ctx->pc = 0x2395FCu;
    {
        const bool branch_taken_0x2395fc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x239600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2395FCu;
            // 0x239600: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395fc) {
            ctx->pc = 0x2395D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2395d0;
        }
    }
    ctx->pc = 0x239604u;
label_239604:
    // 0x239604: 0x0  nop
    ctx->pc = 0x239604u;
    // NOP
label_239608:
    // 0x239608: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23960c:
    // 0x23960c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239610:
    // 0x239610: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239614:
    if (ctx->pc == 0x239614u) {
        ctx->pc = 0x239618u;
        goto label_239618;
    }
    ctx->pc = 0x239610u;
    {
        const bool branch_taken_0x239610 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239610) {
            ctx->pc = 0x239688u;
            goto label_239688;
        }
    }
    ctx->pc = 0x239618u;
label_239618:
    // 0x239618: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239618u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23961c:
    // 0x23961c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23961cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239620:
    // 0x239620: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239624:
    // 0x239624: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239628:
    // 0x239628: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23962c:
    if (ctx->pc == 0x23962Cu) {
        ctx->pc = 0x239630u;
        goto label_239630;
    }
    ctx->pc = 0x239628u;
    {
        const bool branch_taken_0x239628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239628) {
            ctx->pc = 0x239678u;
            goto label_239678;
        }
    }
    ctx->pc = 0x239630u;
label_239630:
    // 0x239630: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239634:
    // 0x239634: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239638:
    // 0x239638: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23963c:
    // 0x23963c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23963cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239640:
    // 0x239640: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239644:
    if (ctx->pc == 0x239644u) {
        ctx->pc = 0x239644u;
            // 0x239644: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239648u;
        goto label_239648;
    }
    ctx->pc = 0x239640u;
    {
        const bool branch_taken_0x239640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239640u;
            // 0x239644: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239640) {
            ctx->pc = 0x239678u;
            goto label_239678;
        }
    }
    ctx->pc = 0x239648u;
label_239648:
    // 0x239648: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23964c:
    // 0x23964c: 0x0  nop
    ctx->pc = 0x23964cu;
    // NOP
label_239650:
    // 0x239650: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239654:
    // 0x239654: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239658:
    // 0x239658: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23965c:
    // 0x23965c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23965cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239660:
    // 0x239660: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239664:
    // 0x239664: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239668:
    // 0x239668: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23966c:
    // 0x23966c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239670:
    if (ctx->pc == 0x239670u) {
        ctx->pc = 0x239670u;
            // 0x239670: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239674u;
        goto label_239674;
    }
    ctx->pc = 0x23966Cu;
    {
        const bool branch_taken_0x23966c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23966Cu;
            // 0x239670: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23966c) {
            ctx->pc = 0x239650u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239650;
        }
    }
    ctx->pc = 0x239674u;
label_239674:
    // 0x239674: 0x0  nop
    ctx->pc = 0x239674u;
    // NOP
label_239678:
    // 0x239678: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23967c:
    // 0x23967c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239680:
    if (ctx->pc == 0x239680u) {
        ctx->pc = 0x239680u;
            // 0x239680: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239684u;
        goto label_239684;
    }
    ctx->pc = 0x23967Cu;
    {
        const bool branch_taken_0x23967c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23967Cu;
            // 0x239680: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23967c) {
            ctx->pc = 0x23961Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23961c;
        }
    }
    ctx->pc = 0x239684u;
label_239684:
    // 0x239684: 0x0  nop
    ctx->pc = 0x239684u;
    // NOP
label_239688:
    // 0x239688: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23968c:
    // 0x23968c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23968cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239690:
    // 0x239690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239694:
    // 0x239694: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239698:
    // 0x239698: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239698u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23969c:
    // 0x23969c: 0x3e00008  jr          $ra
label_2396a0:
    if (ctx->pc == 0x2396A0u) {
        ctx->pc = 0x2396A0u;
            // 0x2396a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2396A4u;
        goto label_2396a4;
    }
    ctx->pc = 0x23969Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2396A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23969Cu;
            // 0x2396a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2396A4u;
label_2396a4:
    // 0x2396a4: 0x0  nop
    ctx->pc = 0x2396a4u;
    // NOP
label_2396a8:
    // 0x2396a8: 0x0  nop
    ctx->pc = 0x2396a8u;
    // NOP
label_2396ac:
    // 0x2396ac: 0x0  nop
    ctx->pc = 0x2396acu;
    // NOP
}
