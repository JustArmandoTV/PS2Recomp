#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A520
// Address: 0x23a520 - 0x23a630
void sub_0023A520_0x23a520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A520_0x23a520");
#endif

    switch (ctx->pc) {
        case 0x23a520u: goto label_23a520;
        case 0x23a524u: goto label_23a524;
        case 0x23a528u: goto label_23a528;
        case 0x23a52cu: goto label_23a52c;
        case 0x23a530u: goto label_23a530;
        case 0x23a534u: goto label_23a534;
        case 0x23a538u: goto label_23a538;
        case 0x23a53cu: goto label_23a53c;
        case 0x23a540u: goto label_23a540;
        case 0x23a544u: goto label_23a544;
        case 0x23a548u: goto label_23a548;
        case 0x23a54cu: goto label_23a54c;
        case 0x23a550u: goto label_23a550;
        case 0x23a554u: goto label_23a554;
        case 0x23a558u: goto label_23a558;
        case 0x23a55cu: goto label_23a55c;
        case 0x23a560u: goto label_23a560;
        case 0x23a564u: goto label_23a564;
        case 0x23a568u: goto label_23a568;
        case 0x23a56cu: goto label_23a56c;
        case 0x23a570u: goto label_23a570;
        case 0x23a574u: goto label_23a574;
        case 0x23a578u: goto label_23a578;
        case 0x23a57cu: goto label_23a57c;
        case 0x23a580u: goto label_23a580;
        case 0x23a584u: goto label_23a584;
        case 0x23a588u: goto label_23a588;
        case 0x23a58cu: goto label_23a58c;
        case 0x23a590u: goto label_23a590;
        case 0x23a594u: goto label_23a594;
        case 0x23a598u: goto label_23a598;
        case 0x23a59cu: goto label_23a59c;
        case 0x23a5a0u: goto label_23a5a0;
        case 0x23a5a4u: goto label_23a5a4;
        case 0x23a5a8u: goto label_23a5a8;
        case 0x23a5acu: goto label_23a5ac;
        case 0x23a5b0u: goto label_23a5b0;
        case 0x23a5b4u: goto label_23a5b4;
        case 0x23a5b8u: goto label_23a5b8;
        case 0x23a5bcu: goto label_23a5bc;
        case 0x23a5c0u: goto label_23a5c0;
        case 0x23a5c4u: goto label_23a5c4;
        case 0x23a5c8u: goto label_23a5c8;
        case 0x23a5ccu: goto label_23a5cc;
        case 0x23a5d0u: goto label_23a5d0;
        case 0x23a5d4u: goto label_23a5d4;
        case 0x23a5d8u: goto label_23a5d8;
        case 0x23a5dcu: goto label_23a5dc;
        case 0x23a5e0u: goto label_23a5e0;
        case 0x23a5e4u: goto label_23a5e4;
        case 0x23a5e8u: goto label_23a5e8;
        case 0x23a5ecu: goto label_23a5ec;
        case 0x23a5f0u: goto label_23a5f0;
        case 0x23a5f4u: goto label_23a5f4;
        case 0x23a5f8u: goto label_23a5f8;
        case 0x23a5fcu: goto label_23a5fc;
        case 0x23a600u: goto label_23a600;
        case 0x23a604u: goto label_23a604;
        case 0x23a608u: goto label_23a608;
        case 0x23a60cu: goto label_23a60c;
        case 0x23a610u: goto label_23a610;
        case 0x23a614u: goto label_23a614;
        case 0x23a618u: goto label_23a618;
        case 0x23a61cu: goto label_23a61c;
        case 0x23a620u: goto label_23a620;
        case 0x23a624u: goto label_23a624;
        case 0x23a628u: goto label_23a628;
        case 0x23a62cu: goto label_23a62c;
        default: break;
    }

    ctx->pc = 0x23a520u;

label_23a520:
    // 0x23a520: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23a524:
    // 0x23a524: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23a528:
    // 0x23a528: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23a52c:
    // 0x23a52c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a530:
    // 0x23a530: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a534:
    // 0x23a534: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a538:
    // 0x23a538: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23a538u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a53c:
    // 0x23a53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a540:
    // 0x23a540: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a544:
    // 0x23a544: 0x8c83015c  lw          $v1, 0x15C($a0)
    ctx->pc = 0x23a544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_23a548:
    // 0x23a548: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x23a548u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a54c:
    // 0x23a54c: 0x6800010  bltz        $s4, . + 4 + (0x10 << 2)
label_23a550:
    if (ctx->pc == 0x23A550u) {
        ctx->pc = 0x23A550u;
            // 0x23a550: 0x26500158  addiu       $s0, $s2, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
        ctx->pc = 0x23A554u;
        goto label_23a554;
    }
    ctx->pc = 0x23A54Cu;
    {
        const bool branch_taken_0x23a54c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A54Cu;
            // 0x23a550: 0x26500158  addiu       $s0, $s2, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a54c) {
            ctx->pc = 0x23A590u;
            goto label_23a590;
        }
    }
    ctx->pc = 0x23A554u;
label_23a554:
    // 0x23a554: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x23a554u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23a558:
    // 0x23a558: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a55c:
    // 0x23a55c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23a560:
    // 0x23a560: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a564:
    // 0x23a564: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a568:
    if (ctx->pc == 0x23A568u) {
        ctx->pc = 0x23A56Cu;
        goto label_23a56c;
    }
    ctx->pc = 0x23A564u;
    {
        const bool branch_taken_0x23a564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a564) {
            ctx->pc = 0x23A580u;
            goto label_23a580;
        }
    }
    ctx->pc = 0x23A56Cu;
label_23a56c:
    // 0x23a56c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a56cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a570:
    // 0x23a570: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a574:
    // 0x23a574: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a578:
    // 0x23a578: 0x320f809  jalr        $t9
label_23a57c:
    if (ctx->pc == 0x23A57Cu) {
        ctx->pc = 0x23A57Cu;
            // 0x23a57c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A580u;
        goto label_23a580;
    }
    ctx->pc = 0x23A578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A580u);
        ctx->pc = 0x23A57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A578u;
            // 0x23a57c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A580u; }
            if (ctx->pc != 0x23A580u) { return; }
        }
        }
    }
    ctx->pc = 0x23A580u;
label_23a580:
    // 0x23a580: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x23a580u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_23a584:
    // 0x23a584: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_23a588:
    if (ctx->pc == 0x23A588u) {
        ctx->pc = 0x23A588u;
            // 0x23a588: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->pc = 0x23A58Cu;
        goto label_23a58c;
    }
    ctx->pc = 0x23A584u;
    {
        const bool branch_taken_0x23a584 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x23A588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A584u;
            // 0x23a588: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a584) {
            ctx->pc = 0x23A558u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a558;
        }
    }
    ctx->pc = 0x23A58Cu;
label_23a58c:
    // 0x23a58c: 0x0  nop
    ctx->pc = 0x23a58cu;
    // NOP
label_23a590:
    // 0x23a590: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a594:
    // 0x23a594: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a598:
    // 0x23a598: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a59c:
    if (ctx->pc == 0x23A59Cu) {
        ctx->pc = 0x23A5A0u;
        goto label_23a5a0;
    }
    ctx->pc = 0x23A598u;
    {
        const bool branch_taken_0x23a598 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a598) {
            ctx->pc = 0x23A610u;
            goto label_23a610;
        }
    }
    ctx->pc = 0x23A5A0u;
label_23a5a0:
    // 0x23a5a0: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a5a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a5a4:
    // 0x23a5a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a5a8:
    // 0x23a5a8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a5ac:
    // 0x23a5ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a5b0:
    // 0x23a5b0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a5b4:
    if (ctx->pc == 0x23A5B4u) {
        ctx->pc = 0x23A5B8u;
        goto label_23a5b8;
    }
    ctx->pc = 0x23A5B0u;
    {
        const bool branch_taken_0x23a5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a5b0) {
            ctx->pc = 0x23A600u;
            goto label_23a600;
        }
    }
    ctx->pc = 0x23A5B8u;
label_23a5b8:
    // 0x23a5b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a5bc:
    // 0x23a5bc: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a5bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a5c0:
    // 0x23a5c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a5c4:
    // 0x23a5c4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a5c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a5c8:
    // 0x23a5c8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a5cc:
    if (ctx->pc == 0x23A5CCu) {
        ctx->pc = 0x23A5CCu;
            // 0x23a5cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A5D0u;
        goto label_23a5d0;
    }
    ctx->pc = 0x23A5C8u;
    {
        const bool branch_taken_0x23a5c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5C8u;
            // 0x23a5cc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5c8) {
            ctx->pc = 0x23A600u;
            goto label_23a600;
        }
    }
    ctx->pc = 0x23A5D0u;
label_23a5d0:
    // 0x23a5d0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a5d4:
    // 0x23a5d4: 0x0  nop
    ctx->pc = 0x23a5d4u;
    // NOP
label_23a5d8:
    // 0x23a5d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a5dc:
    // 0x23a5dc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a5e0:
    // 0x23a5e0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a5e4:
    // 0x23a5e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a5e8:
    // 0x23a5e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a5ec:
    // 0x23a5ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a5f0:
    // 0x23a5f0: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a5f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a5f4:
    // 0x23a5f4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a5f8:
    if (ctx->pc == 0x23A5F8u) {
        ctx->pc = 0x23A5F8u;
            // 0x23a5f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A5FCu;
        goto label_23a5fc;
    }
    ctx->pc = 0x23A5F4u;
    {
        const bool branch_taken_0x23a5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A5F4u;
            // 0x23a5f8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a5f4) {
            ctx->pc = 0x23A5D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a5d8;
        }
    }
    ctx->pc = 0x23A5FCu;
label_23a5fc:
    // 0x23a5fc: 0x0  nop
    ctx->pc = 0x23a5fcu;
    // NOP
label_23a600:
    // 0x23a600: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a604:
    // 0x23a604: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a608:
    if (ctx->pc == 0x23A608u) {
        ctx->pc = 0x23A608u;
            // 0x23a608: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A60Cu;
        goto label_23a60c;
    }
    ctx->pc = 0x23A604u;
    {
        const bool branch_taken_0x23a604 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A604u;
            // 0x23a608: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a604) {
            ctx->pc = 0x23A5A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a5a4;
        }
    }
    ctx->pc = 0x23A60Cu;
label_23a60c:
    // 0x23a60c: 0x0  nop
    ctx->pc = 0x23a60cu;
    // NOP
label_23a610:
    // 0x23a610: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a614:
    // 0x23a614: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a618:
    // 0x23a618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a61c:
    // 0x23a61c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a61cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a620:
    // 0x23a620: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a624:
    // 0x23a624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a628:
    // 0x23a628: 0x3e00008  jr          $ra
label_23a62c:
    if (ctx->pc == 0x23A62Cu) {
        ctx->pc = 0x23A62Cu;
            // 0x23a62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23A630u;
        goto label_fallthrough_0x23a628;
    }
    ctx->pc = 0x23A628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A628u;
            // 0x23a62c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a628:
    ctx->pc = 0x23A630u;
}
