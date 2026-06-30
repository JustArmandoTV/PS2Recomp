#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225570
// Address: 0x225570 - 0x225680
void sub_00225570_0x225570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225570_0x225570");
#endif

    switch (ctx->pc) {
        case 0x225570u: goto label_225570;
        case 0x225574u: goto label_225574;
        case 0x225578u: goto label_225578;
        case 0x22557cu: goto label_22557c;
        case 0x225580u: goto label_225580;
        case 0x225584u: goto label_225584;
        case 0x225588u: goto label_225588;
        case 0x22558cu: goto label_22558c;
        case 0x225590u: goto label_225590;
        case 0x225594u: goto label_225594;
        case 0x225598u: goto label_225598;
        case 0x22559cu: goto label_22559c;
        case 0x2255a0u: goto label_2255a0;
        case 0x2255a4u: goto label_2255a4;
        case 0x2255a8u: goto label_2255a8;
        case 0x2255acu: goto label_2255ac;
        case 0x2255b0u: goto label_2255b0;
        case 0x2255b4u: goto label_2255b4;
        case 0x2255b8u: goto label_2255b8;
        case 0x2255bcu: goto label_2255bc;
        case 0x2255c0u: goto label_2255c0;
        case 0x2255c4u: goto label_2255c4;
        case 0x2255c8u: goto label_2255c8;
        case 0x2255ccu: goto label_2255cc;
        case 0x2255d0u: goto label_2255d0;
        case 0x2255d4u: goto label_2255d4;
        case 0x2255d8u: goto label_2255d8;
        case 0x2255dcu: goto label_2255dc;
        case 0x2255e0u: goto label_2255e0;
        case 0x2255e4u: goto label_2255e4;
        case 0x2255e8u: goto label_2255e8;
        case 0x2255ecu: goto label_2255ec;
        case 0x2255f0u: goto label_2255f0;
        case 0x2255f4u: goto label_2255f4;
        case 0x2255f8u: goto label_2255f8;
        case 0x2255fcu: goto label_2255fc;
        case 0x225600u: goto label_225600;
        case 0x225604u: goto label_225604;
        case 0x225608u: goto label_225608;
        case 0x22560cu: goto label_22560c;
        case 0x225610u: goto label_225610;
        case 0x225614u: goto label_225614;
        case 0x225618u: goto label_225618;
        case 0x22561cu: goto label_22561c;
        case 0x225620u: goto label_225620;
        case 0x225624u: goto label_225624;
        case 0x225628u: goto label_225628;
        case 0x22562cu: goto label_22562c;
        case 0x225630u: goto label_225630;
        case 0x225634u: goto label_225634;
        case 0x225638u: goto label_225638;
        case 0x22563cu: goto label_22563c;
        case 0x225640u: goto label_225640;
        case 0x225644u: goto label_225644;
        case 0x225648u: goto label_225648;
        case 0x22564cu: goto label_22564c;
        case 0x225650u: goto label_225650;
        case 0x225654u: goto label_225654;
        case 0x225658u: goto label_225658;
        case 0x22565cu: goto label_22565c;
        case 0x225660u: goto label_225660;
        case 0x225664u: goto label_225664;
        case 0x225668u: goto label_225668;
        case 0x22566cu: goto label_22566c;
        case 0x225670u: goto label_225670;
        case 0x225674u: goto label_225674;
        case 0x225678u: goto label_225678;
        case 0x22567cu: goto label_22567c;
        default: break;
    }

    ctx->pc = 0x225570u;

label_225570:
    // 0x225570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225574:
    // 0x225574: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x225574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_225578:
    // 0x225578: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x225578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_22557c:
    // 0x22557c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22557cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_225580:
    // 0x225580: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x225580u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_225584:
    // 0x225584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x225584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_225588:
    // 0x225588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22558c:
    // 0x22558c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x22558cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_225590:
    // 0x225590: 0x948301d4  lhu         $v1, 0x1D4($a0)
    ctx->pc = 0x225590u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 468)));
label_225594:
    // 0x225594: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x225594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225598:
    // 0x225598: 0x640000f  bltz        $s2, . + 4 + (0xF << 2)
label_22559c:
    if (ctx->pc == 0x22559Cu) {
        ctx->pc = 0x22559Cu;
            // 0x22559c: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->pc = 0x2255A0u;
        goto label_2255a0;
    }
    ctx->pc = 0x225598u;
    {
        const bool branch_taken_0x225598 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x22559Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225598u;
            // 0x22559c: 0x249001d0  addiu       $s0, $a0, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225598) {
            ctx->pc = 0x2255D8u;
            goto label_2255d8;
        }
    }
    ctx->pc = 0x2255A0u;
label_2255a0:
    // 0x2255a0: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2255a0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2255a4:
    // 0x2255a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2255a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2255a8:
    // 0x2255a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2255a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2255ac:
    // 0x2255ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2255acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2255b0:
    // 0x2255b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2255b4:
    if (ctx->pc == 0x2255B4u) {
        ctx->pc = 0x2255B8u;
        goto label_2255b8;
    }
    ctx->pc = 0x2255B0u;
    {
        const bool branch_taken_0x2255b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2255b0) {
            ctx->pc = 0x2255C8u;
            goto label_2255c8;
        }
    }
    ctx->pc = 0x2255B8u;
label_2255b8:
    // 0x2255b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2255b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2255bc:
    // 0x2255bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2255bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2255c0:
    // 0x2255c0: 0x320f809  jalr        $t9
label_2255c4:
    if (ctx->pc == 0x2255C4u) {
        ctx->pc = 0x2255C4u;
            // 0x2255c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2255C8u;
        goto label_2255c8;
    }
    ctx->pc = 0x2255C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2255C8u);
        ctx->pc = 0x2255C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2255C0u;
            // 0x2255c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2255C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2255C8u; }
            if (ctx->pc != 0x2255C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2255C8u;
label_2255c8:
    // 0x2255c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2255c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2255cc:
    // 0x2255cc: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_2255d0:
    if (ctx->pc == 0x2255D0u) {
        ctx->pc = 0x2255D0u;
            // 0x2255d0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2255D4u;
        goto label_2255d4;
    }
    ctx->pc = 0x2255CCu;
    {
        const bool branch_taken_0x2255cc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2255D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2255CCu;
            // 0x2255d0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2255cc) {
            ctx->pc = 0x2255A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2255a4;
        }
    }
    ctx->pc = 0x2255D4u;
label_2255d4:
    // 0x2255d4: 0x0  nop
    ctx->pc = 0x2255d4u;
    // NOP
label_2255d8:
    // 0x2255d8: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x2255d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2255dc:
    // 0x2255dc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2255dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2255e0:
    // 0x2255e0: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_2255e4:
    if (ctx->pc == 0x2255E4u) {
        ctx->pc = 0x2255E8u;
        goto label_2255e8;
    }
    ctx->pc = 0x2255E0u;
    {
        const bool branch_taken_0x2255e0 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x2255e0) {
            ctx->pc = 0x225658u;
            goto label_225658;
        }
    }
    ctx->pc = 0x2255E8u;
label_2255e8:
    // 0x2255e8: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2255e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2255ec:
    // 0x2255ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2255ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2255f0:
    // 0x2255f0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2255f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2255f4:
    // 0x2255f4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2255f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2255f8:
    // 0x2255f8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_2255fc:
    if (ctx->pc == 0x2255FCu) {
        ctx->pc = 0x225600u;
        goto label_225600;
    }
    ctx->pc = 0x2255F8u;
    {
        const bool branch_taken_0x2255f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2255f8) {
            ctx->pc = 0x225648u;
            goto label_225648;
        }
    }
    ctx->pc = 0x225600u;
label_225600:
    // 0x225600: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x225600u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225604:
    // 0x225604: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x225604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225608:
    // 0x225608: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x225608u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_22560c:
    // 0x22560c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x22560cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225610:
    // 0x225610: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x225610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_225614:
    // 0x225614: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_225618:
    if (ctx->pc == 0x225618u) {
        ctx->pc = 0x225618u;
            // 0x225618: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22561Cu;
        goto label_22561c;
    }
    ctx->pc = 0x225614u;
    {
        const bool branch_taken_0x225614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x225618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225614u;
            // 0x225618: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225614) {
            ctx->pc = 0x225648u;
            goto label_225648;
        }
    }
    ctx->pc = 0x22561Cu;
label_22561c:
    // 0x22561c: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x22561cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_225620:
    // 0x225620: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x225620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225624:
    // 0x225624: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x225624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_225628:
    // 0x225628: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x225628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_22562c:
    // 0x22562c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x22562cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_225630:
    // 0x225630: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x225630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_225634:
    // 0x225634: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x225634u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_225638:
    // 0x225638: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x225638u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_22563c:
    // 0x22563c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_225640:
    if (ctx->pc == 0x225640u) {
        ctx->pc = 0x225640u;
            // 0x225640: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x225644u;
        goto label_225644;
    }
    ctx->pc = 0x22563Cu;
    {
        const bool branch_taken_0x22563c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22563Cu;
            // 0x225640: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22563c) {
            ctx->pc = 0x225620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_225620;
        }
    }
    ctx->pc = 0x225644u;
label_225644:
    // 0x225644: 0x0  nop
    ctx->pc = 0x225644u;
    // NOP
label_225648:
    // 0x225648: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x225648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_22564c:
    // 0x22564c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_225650:
    if (ctx->pc == 0x225650u) {
        ctx->pc = 0x225650u;
            // 0x225650: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x225654u;
        goto label_225654;
    }
    ctx->pc = 0x22564Cu;
    {
        const bool branch_taken_0x22564c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x225650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22564Cu;
            // 0x225650: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22564c) {
            ctx->pc = 0x2255ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2255ec;
        }
    }
    ctx->pc = 0x225654u;
label_225654:
    // 0x225654: 0x0  nop
    ctx->pc = 0x225654u;
    // NOP
label_225658:
    // 0x225658: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x225658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22565c:
    // 0x22565c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22565cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_225660:
    // 0x225660: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225660u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_225664:
    // 0x225664: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x225664u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_225668:
    // 0x225668: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22566c:
    // 0x22566c: 0x3e00008  jr          $ra
label_225670:
    if (ctx->pc == 0x225670u) {
        ctx->pc = 0x225670u;
            // 0x225670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x225674u;
        goto label_225674;
    }
    ctx->pc = 0x22566Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22566Cu;
            // 0x225670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225674u;
label_225674:
    // 0x225674: 0x0  nop
    ctx->pc = 0x225674u;
    // NOP
label_225678:
    // 0x225678: 0x0  nop
    ctx->pc = 0x225678u;
    // NOP
label_22567c:
    // 0x22567c: 0x0  nop
    ctx->pc = 0x22567cu;
    // NOP
}
