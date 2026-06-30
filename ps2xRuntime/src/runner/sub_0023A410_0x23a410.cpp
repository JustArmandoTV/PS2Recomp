#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A410
// Address: 0x23a410 - 0x23a520
void sub_0023A410_0x23a410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A410_0x23a410");
#endif

    switch (ctx->pc) {
        case 0x23a410u: goto label_23a410;
        case 0x23a414u: goto label_23a414;
        case 0x23a418u: goto label_23a418;
        case 0x23a41cu: goto label_23a41c;
        case 0x23a420u: goto label_23a420;
        case 0x23a424u: goto label_23a424;
        case 0x23a428u: goto label_23a428;
        case 0x23a42cu: goto label_23a42c;
        case 0x23a430u: goto label_23a430;
        case 0x23a434u: goto label_23a434;
        case 0x23a438u: goto label_23a438;
        case 0x23a43cu: goto label_23a43c;
        case 0x23a440u: goto label_23a440;
        case 0x23a444u: goto label_23a444;
        case 0x23a448u: goto label_23a448;
        case 0x23a44cu: goto label_23a44c;
        case 0x23a450u: goto label_23a450;
        case 0x23a454u: goto label_23a454;
        case 0x23a458u: goto label_23a458;
        case 0x23a45cu: goto label_23a45c;
        case 0x23a460u: goto label_23a460;
        case 0x23a464u: goto label_23a464;
        case 0x23a468u: goto label_23a468;
        case 0x23a46cu: goto label_23a46c;
        case 0x23a470u: goto label_23a470;
        case 0x23a474u: goto label_23a474;
        case 0x23a478u: goto label_23a478;
        case 0x23a47cu: goto label_23a47c;
        case 0x23a480u: goto label_23a480;
        case 0x23a484u: goto label_23a484;
        case 0x23a488u: goto label_23a488;
        case 0x23a48cu: goto label_23a48c;
        case 0x23a490u: goto label_23a490;
        case 0x23a494u: goto label_23a494;
        case 0x23a498u: goto label_23a498;
        case 0x23a49cu: goto label_23a49c;
        case 0x23a4a0u: goto label_23a4a0;
        case 0x23a4a4u: goto label_23a4a4;
        case 0x23a4a8u: goto label_23a4a8;
        case 0x23a4acu: goto label_23a4ac;
        case 0x23a4b0u: goto label_23a4b0;
        case 0x23a4b4u: goto label_23a4b4;
        case 0x23a4b8u: goto label_23a4b8;
        case 0x23a4bcu: goto label_23a4bc;
        case 0x23a4c0u: goto label_23a4c0;
        case 0x23a4c4u: goto label_23a4c4;
        case 0x23a4c8u: goto label_23a4c8;
        case 0x23a4ccu: goto label_23a4cc;
        case 0x23a4d0u: goto label_23a4d0;
        case 0x23a4d4u: goto label_23a4d4;
        case 0x23a4d8u: goto label_23a4d8;
        case 0x23a4dcu: goto label_23a4dc;
        case 0x23a4e0u: goto label_23a4e0;
        case 0x23a4e4u: goto label_23a4e4;
        case 0x23a4e8u: goto label_23a4e8;
        case 0x23a4ecu: goto label_23a4ec;
        case 0x23a4f0u: goto label_23a4f0;
        case 0x23a4f4u: goto label_23a4f4;
        case 0x23a4f8u: goto label_23a4f8;
        case 0x23a4fcu: goto label_23a4fc;
        case 0x23a500u: goto label_23a500;
        case 0x23a504u: goto label_23a504;
        case 0x23a508u: goto label_23a508;
        case 0x23a50cu: goto label_23a50c;
        case 0x23a510u: goto label_23a510;
        case 0x23a514u: goto label_23a514;
        case 0x23a518u: goto label_23a518;
        case 0x23a51cu: goto label_23a51c;
        default: break;
    }

    ctx->pc = 0x23a410u;

label_23a410:
    // 0x23a410: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23a410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23a414:
    // 0x23a414: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23a414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23a418:
    // 0x23a418: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23a41c:
    // 0x23a41c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a420:
    // 0x23a420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a424:
    // 0x23a424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a428:
    // 0x23a428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23a428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a42c:
    // 0x23a42c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a430:
    // 0x23a430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x23a430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a434:
    // 0x23a434: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x23a434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_23a438:
    // 0x23a438: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x23a438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a43c:
    // 0x23a43c: 0x6800010  bltz        $s4, . + 4 + (0x10 << 2)
label_23a440:
    if (ctx->pc == 0x23A440u) {
        ctx->pc = 0x23A440u;
            // 0x23a440: 0x2650014c  addiu       $s0, $s2, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
        ctx->pc = 0x23A444u;
        goto label_23a444;
    }
    ctx->pc = 0x23A43Cu;
    {
        const bool branch_taken_0x23a43c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x23A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A43Cu;
            // 0x23a440: 0x2650014c  addiu       $s0, $s2, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a43c) {
            ctx->pc = 0x23A480u;
            goto label_23a480;
        }
    }
    ctx->pc = 0x23A444u;
label_23a444:
    // 0x23a444: 0x149880  sll         $s3, $s4, 2
    ctx->pc = 0x23a444u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23a448:
    // 0x23a448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a44c:
    // 0x23a44c: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23a450:
    // 0x23a450: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a454:
    // 0x23a454: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_23a458:
    if (ctx->pc == 0x23A458u) {
        ctx->pc = 0x23A45Cu;
        goto label_23a45c;
    }
    ctx->pc = 0x23A454u;
    {
        const bool branch_taken_0x23a454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a454) {
            ctx->pc = 0x23A470u;
            goto label_23a470;
        }
    }
    ctx->pc = 0x23A45Cu;
label_23a45c:
    // 0x23a45c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a45cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a460:
    // 0x23a460: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23a460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23a464:
    // 0x23a464: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a468:
    // 0x23a468: 0x320f809  jalr        $t9
label_23a46c:
    if (ctx->pc == 0x23A46Cu) {
        ctx->pc = 0x23A46Cu;
            // 0x23a46c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A470u;
        goto label_23a470;
    }
    ctx->pc = 0x23A468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A470u);
        ctx->pc = 0x23A46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A468u;
            // 0x23a46c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A470u; }
            if (ctx->pc != 0x23A470u) { return; }
        }
        }
    }
    ctx->pc = 0x23A470u;
label_23a470:
    // 0x23a470: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x23a470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_23a474:
    // 0x23a474: 0x681fff4  bgez        $s4, . + 4 + (-0xC << 2)
label_23a478:
    if (ctx->pc == 0x23A478u) {
        ctx->pc = 0x23A478u;
            // 0x23a478: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->pc = 0x23A47Cu;
        goto label_23a47c;
    }
    ctx->pc = 0x23A474u;
    {
        const bool branch_taken_0x23a474 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x23A478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A474u;
            // 0x23a478: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a474) {
            ctx->pc = 0x23A448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a448;
        }
    }
    ctx->pc = 0x23A47Cu;
label_23a47c:
    // 0x23a47c: 0x0  nop
    ctx->pc = 0x23a47cu;
    // NOP
label_23a480:
    // 0x23a480: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a484:
    // 0x23a484: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a488:
    // 0x23a488: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a48c:
    if (ctx->pc == 0x23A48Cu) {
        ctx->pc = 0x23A490u;
        goto label_23a490;
    }
    ctx->pc = 0x23A488u;
    {
        const bool branch_taken_0x23a488 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a488) {
            ctx->pc = 0x23A500u;
            goto label_23a500;
        }
    }
    ctx->pc = 0x23A490u;
label_23a490:
    // 0x23a490: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a494:
    // 0x23a494: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a498:
    // 0x23a498: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a49c:
    // 0x23a49c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a4a0:
    // 0x23a4a0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a4a4:
    if (ctx->pc == 0x23A4A4u) {
        ctx->pc = 0x23A4A8u;
        goto label_23a4a8;
    }
    ctx->pc = 0x23A4A0u;
    {
        const bool branch_taken_0x23a4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a4a0) {
            ctx->pc = 0x23A4F0u;
            goto label_23a4f0;
        }
    }
    ctx->pc = 0x23A4A8u;
label_23a4a8:
    // 0x23a4a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a4ac:
    // 0x23a4ac: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a4b0:
    // 0x23a4b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a4b4:
    // 0x23a4b4: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a4b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a4b8:
    // 0x23a4b8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a4bc:
    if (ctx->pc == 0x23A4BCu) {
        ctx->pc = 0x23A4BCu;
            // 0x23a4bc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A4C0u;
        goto label_23a4c0;
    }
    ctx->pc = 0x23A4B8u;
    {
        const bool branch_taken_0x23a4b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A4B8u;
            // 0x23a4bc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4b8) {
            ctx->pc = 0x23A4F0u;
            goto label_23a4f0;
        }
    }
    ctx->pc = 0x23A4C0u;
label_23a4c0:
    // 0x23a4c0: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a4c4:
    // 0x23a4c4: 0x0  nop
    ctx->pc = 0x23a4c4u;
    // NOP
label_23a4c8:
    // 0x23a4c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23a4cc:
    // 0x23a4cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a4d0:
    // 0x23a4d0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a4d4:
    // 0x23a4d4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a4d8:
    // 0x23a4d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a4dc:
    // 0x23a4dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x23a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23a4e0:
    // 0x23a4e0: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a4e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a4e4:
    // 0x23a4e4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a4e8:
    if (ctx->pc == 0x23A4E8u) {
        ctx->pc = 0x23A4E8u;
            // 0x23a4e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A4ECu;
        goto label_23a4ec;
    }
    ctx->pc = 0x23A4E4u;
    {
        const bool branch_taken_0x23a4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A4E4u;
            // 0x23a4e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4e4) {
            ctx->pc = 0x23A4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a4c8;
        }
    }
    ctx->pc = 0x23A4ECu;
label_23a4ec:
    // 0x23a4ec: 0x0  nop
    ctx->pc = 0x23a4ecu;
    // NOP
label_23a4f0:
    // 0x23a4f0: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a4f4:
    // 0x23a4f4: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a4f8:
    if (ctx->pc == 0x23A4F8u) {
        ctx->pc = 0x23A4F8u;
            // 0x23a4f8: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A4FCu;
        goto label_23a4fc;
    }
    ctx->pc = 0x23A4F4u;
    {
        const bool branch_taken_0x23a4f4 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A4F4u;
            // 0x23a4f8: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a4f4) {
            ctx->pc = 0x23A494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a494;
        }
    }
    ctx->pc = 0x23A4FCu;
label_23a4fc:
    // 0x23a4fc: 0x0  nop
    ctx->pc = 0x23a4fcu;
    // NOP
label_23a500:
    // 0x23a500: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23a500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23a504:
    // 0x23a504: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a508:
    // 0x23a508: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a50c:
    // 0x23a50c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a510:
    // 0x23a510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a514:
    // 0x23a514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a518:
    // 0x23a518: 0x3e00008  jr          $ra
label_23a51c:
    if (ctx->pc == 0x23A51Cu) {
        ctx->pc = 0x23A51Cu;
            // 0x23a51c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23A520u;
        goto label_fallthrough_0x23a518;
    }
    ctx->pc = 0x23A518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A518u;
            // 0x23a51c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a518:
    ctx->pc = 0x23A520u;
}
