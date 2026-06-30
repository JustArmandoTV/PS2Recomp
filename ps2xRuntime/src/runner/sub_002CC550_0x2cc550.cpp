#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC550
// Address: 0x2cc550 - 0x2cc6c0
void sub_002CC550_0x2cc550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC550_0x2cc550");
#endif

    switch (ctx->pc) {
        case 0x2cc550u: goto label_2cc550;
        case 0x2cc554u: goto label_2cc554;
        case 0x2cc558u: goto label_2cc558;
        case 0x2cc55cu: goto label_2cc55c;
        case 0x2cc560u: goto label_2cc560;
        case 0x2cc564u: goto label_2cc564;
        case 0x2cc568u: goto label_2cc568;
        case 0x2cc56cu: goto label_2cc56c;
        case 0x2cc570u: goto label_2cc570;
        case 0x2cc574u: goto label_2cc574;
        case 0x2cc578u: goto label_2cc578;
        case 0x2cc57cu: goto label_2cc57c;
        case 0x2cc580u: goto label_2cc580;
        case 0x2cc584u: goto label_2cc584;
        case 0x2cc588u: goto label_2cc588;
        case 0x2cc58cu: goto label_2cc58c;
        case 0x2cc590u: goto label_2cc590;
        case 0x2cc594u: goto label_2cc594;
        case 0x2cc598u: goto label_2cc598;
        case 0x2cc59cu: goto label_2cc59c;
        case 0x2cc5a0u: goto label_2cc5a0;
        case 0x2cc5a4u: goto label_2cc5a4;
        case 0x2cc5a8u: goto label_2cc5a8;
        case 0x2cc5acu: goto label_2cc5ac;
        case 0x2cc5b0u: goto label_2cc5b0;
        case 0x2cc5b4u: goto label_2cc5b4;
        case 0x2cc5b8u: goto label_2cc5b8;
        case 0x2cc5bcu: goto label_2cc5bc;
        case 0x2cc5c0u: goto label_2cc5c0;
        case 0x2cc5c4u: goto label_2cc5c4;
        case 0x2cc5c8u: goto label_2cc5c8;
        case 0x2cc5ccu: goto label_2cc5cc;
        case 0x2cc5d0u: goto label_2cc5d0;
        case 0x2cc5d4u: goto label_2cc5d4;
        case 0x2cc5d8u: goto label_2cc5d8;
        case 0x2cc5dcu: goto label_2cc5dc;
        case 0x2cc5e0u: goto label_2cc5e0;
        case 0x2cc5e4u: goto label_2cc5e4;
        case 0x2cc5e8u: goto label_2cc5e8;
        case 0x2cc5ecu: goto label_2cc5ec;
        case 0x2cc5f0u: goto label_2cc5f0;
        case 0x2cc5f4u: goto label_2cc5f4;
        case 0x2cc5f8u: goto label_2cc5f8;
        case 0x2cc5fcu: goto label_2cc5fc;
        case 0x2cc600u: goto label_2cc600;
        case 0x2cc604u: goto label_2cc604;
        case 0x2cc608u: goto label_2cc608;
        case 0x2cc60cu: goto label_2cc60c;
        case 0x2cc610u: goto label_2cc610;
        case 0x2cc614u: goto label_2cc614;
        case 0x2cc618u: goto label_2cc618;
        case 0x2cc61cu: goto label_2cc61c;
        case 0x2cc620u: goto label_2cc620;
        case 0x2cc624u: goto label_2cc624;
        case 0x2cc628u: goto label_2cc628;
        case 0x2cc62cu: goto label_2cc62c;
        case 0x2cc630u: goto label_2cc630;
        case 0x2cc634u: goto label_2cc634;
        case 0x2cc638u: goto label_2cc638;
        case 0x2cc63cu: goto label_2cc63c;
        case 0x2cc640u: goto label_2cc640;
        case 0x2cc644u: goto label_2cc644;
        case 0x2cc648u: goto label_2cc648;
        case 0x2cc64cu: goto label_2cc64c;
        case 0x2cc650u: goto label_2cc650;
        case 0x2cc654u: goto label_2cc654;
        case 0x2cc658u: goto label_2cc658;
        case 0x2cc65cu: goto label_2cc65c;
        case 0x2cc660u: goto label_2cc660;
        case 0x2cc664u: goto label_2cc664;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc66cu: goto label_2cc66c;
        case 0x2cc670u: goto label_2cc670;
        case 0x2cc674u: goto label_2cc674;
        case 0x2cc678u: goto label_2cc678;
        case 0x2cc67cu: goto label_2cc67c;
        case 0x2cc680u: goto label_2cc680;
        case 0x2cc684u: goto label_2cc684;
        case 0x2cc688u: goto label_2cc688;
        case 0x2cc68cu: goto label_2cc68c;
        case 0x2cc690u: goto label_2cc690;
        case 0x2cc694u: goto label_2cc694;
        case 0x2cc698u: goto label_2cc698;
        case 0x2cc69cu: goto label_2cc69c;
        case 0x2cc6a0u: goto label_2cc6a0;
        case 0x2cc6a4u: goto label_2cc6a4;
        case 0x2cc6a8u: goto label_2cc6a8;
        case 0x2cc6acu: goto label_2cc6ac;
        case 0x2cc6b0u: goto label_2cc6b0;
        case 0x2cc6b4u: goto label_2cc6b4;
        case 0x2cc6b8u: goto label_2cc6b8;
        case 0x2cc6bcu: goto label_2cc6bc;
        default: break;
    }

    ctx->pc = 0x2cc550u;

label_2cc550:
    // 0x2cc550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cc554:
    // 0x2cc554: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cc558:
    // 0x2cc558: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cc55c:
    // 0x2cc55c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cc560:
    // 0x2cc560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc564:
    // 0x2cc564: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2cc568:
    if (ctx->pc == 0x2CC568u) {
        ctx->pc = 0x2CC568u;
            // 0x2cc568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC56Cu;
        goto label_2cc56c;
    }
    ctx->pc = 0x2CC564u;
    {
        const bool branch_taken_0x2cc564 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC564u;
            // 0x2cc568: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc564) {
            ctx->pc = 0x2CC5A8u;
            goto label_2cc5a8;
        }
    }
    ctx->pc = 0x2CC56Cu;
label_2cc56c:
    // 0x2cc56c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2cc570:
    if (ctx->pc == 0x2CC570u) {
        ctx->pc = 0x2CC570u;
            // 0x2cc570: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CC574u;
        goto label_2cc574;
    }
    ctx->pc = 0x2CC56Cu;
    {
        const bool branch_taken_0x2cc56c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc56c) {
            ctx->pc = 0x2CC570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC56Cu;
            // 0x2cc570: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC594u;
            goto label_2cc594;
        }
    }
    ctx->pc = 0x2CC574u;
label_2cc574:
    // 0x2cc574: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2cc578:
    if (ctx->pc == 0x2CC578u) {
        ctx->pc = 0x2CC57Cu;
        goto label_2cc57c;
    }
    ctx->pc = 0x2CC574u;
    {
        const bool branch_taken_0x2cc574 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc574) {
            ctx->pc = 0x2CC590u;
            goto label_2cc590;
        }
    }
    ctx->pc = 0x2CC57Cu;
label_2cc57c:
    // 0x2cc57c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2cc57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2cc580:
    // 0x2cc580: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2cc584:
    if (ctx->pc == 0x2CC584u) {
        ctx->pc = 0x2CC588u;
        goto label_2cc588;
    }
    ctx->pc = 0x2CC580u;
    {
        const bool branch_taken_0x2cc580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc580) {
            ctx->pc = 0x2CC590u;
            goto label_2cc590;
        }
    }
    ctx->pc = 0x2CC588u;
label_2cc588:
    // 0x2cc588: 0xc0400a8  jal         func_1002A0
label_2cc58c:
    if (ctx->pc == 0x2CC58Cu) {
        ctx->pc = 0x2CC590u;
        goto label_2cc590;
    }
    ctx->pc = 0x2CC588u;
    SET_GPR_U32(ctx, 31, 0x2CC590u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC590u; }
        if (ctx->pc != 0x2CC590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC590u; }
        if (ctx->pc != 0x2CC590u) { return; }
    }
    ctx->pc = 0x2CC590u;
label_2cc590:
    // 0x2cc590: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cc590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cc594:
    // 0x2cc594: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc594u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cc598:
    // 0x2cc598: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cc59c:
    if (ctx->pc == 0x2CC59Cu) {
        ctx->pc = 0x2CC59Cu;
            // 0x2cc59c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5A0u;
        goto label_2cc5a0;
    }
    ctx->pc = 0x2CC598u;
    {
        const bool branch_taken_0x2cc598 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc598) {
            ctx->pc = 0x2CC59Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC598u;
            // 0x2cc59c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC5ACu;
            goto label_2cc5ac;
        }
    }
    ctx->pc = 0x2CC5A0u;
label_2cc5a0:
    // 0x2cc5a0: 0xc0400a8  jal         func_1002A0
label_2cc5a4:
    if (ctx->pc == 0x2CC5A4u) {
        ctx->pc = 0x2CC5A4u;
            // 0x2cc5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5A8u;
        goto label_2cc5a8;
    }
    ctx->pc = 0x2CC5A0u;
    SET_GPR_U32(ctx, 31, 0x2CC5A8u);
    ctx->pc = 0x2CC5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5A0u;
            // 0x2cc5a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC5A8u; }
        if (ctx->pc != 0x2CC5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC5A8u; }
        if (ctx->pc != 0x2CC5A8u) { return; }
    }
    ctx->pc = 0x2CC5A8u;
label_2cc5a8:
    // 0x2cc5a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cc5a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc5ac:
    // 0x2cc5ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc5b0:
    // 0x2cc5b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc5b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc5b4:
    // 0x2cc5b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc5b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc5b8:
    // 0x2cc5b8: 0x3e00008  jr          $ra
label_2cc5bc:
    if (ctx->pc == 0x2CC5BCu) {
        ctx->pc = 0x2CC5BCu;
            // 0x2cc5bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CC5C0u;
        goto label_2cc5c0;
    }
    ctx->pc = 0x2CC5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5B8u;
            // 0x2cc5bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC5C0u;
label_2cc5c0:
    // 0x2cc5c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2cc5c4:
    // 0x2cc5c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2cc5c8:
    // 0x2cc5c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cc5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2cc5cc:
    // 0x2cc5cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2cc5d0:
    // 0x2cc5d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc5d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cc5d4:
    // 0x2cc5d4: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2cc5d8:
    if (ctx->pc == 0x2CC5D8u) {
        ctx->pc = 0x2CC5D8u;
            // 0x2cc5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5DCu;
        goto label_2cc5dc;
    }
    ctx->pc = 0x2CC5D4u;
    {
        const bool branch_taken_0x2cc5d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC5D4u;
            // 0x2cc5d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc5d4) {
            ctx->pc = 0x2CC69Cu;
            goto label_2cc69c;
        }
    }
    ctx->pc = 0x2CC5DCu;
label_2cc5dc:
    // 0x2cc5dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cc5e0:
    // 0x2cc5e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc5e4:
    // 0x2cc5e4: 0x24635c70  addiu       $v1, $v1, 0x5C70
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23664));
label_2cc5e8:
    // 0x2cc5e8: 0x24425cb0  addiu       $v0, $v0, 0x5CB0
    ctx->pc = 0x2cc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23728));
label_2cc5ec:
    // 0x2cc5ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2cc5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2cc5f0:
    // 0x2cc5f0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2cc5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2cc5f4:
    // 0x2cc5f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc5f8:
    // 0x2cc5f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2cc5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2cc5fc:
    // 0x2cc5fc: 0x320f809  jalr        $t9
label_2cc600:
    if (ctx->pc == 0x2CC600u) {
        ctx->pc = 0x2CC604u;
        goto label_2cc604;
    }
    ctx->pc = 0x2CC5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC604u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC604u; }
            if (ctx->pc != 0x2CC604u) { return; }
        }
        }
    }
    ctx->pc = 0x2CC604u;
label_2cc604:
    // 0x2cc604: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2cc608:
    if (ctx->pc == 0x2CC608u) {
        ctx->pc = 0x2CC608u;
            // 0x2cc608: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2CC60Cu;
        goto label_2cc60c;
    }
    ctx->pc = 0x2CC604u;
    {
        const bool branch_taken_0x2cc604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc604) {
            ctx->pc = 0x2CC608u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC604u;
            // 0x2cc608: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC688u;
            goto label_2cc688;
        }
    }
    ctx->pc = 0x2CC60Cu;
label_2cc60c:
    // 0x2cc60c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc610:
    // 0x2cc610: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2cc610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2cc614:
    // 0x2cc614: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2cc614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2cc618:
    // 0x2cc618: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2cc618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2cc61c:
    // 0x2cc61c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cc620:
    // 0x2cc620: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2cc620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2cc624:
    // 0x2cc624: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2cc628:
    if (ctx->pc == 0x2CC628u) {
        ctx->pc = 0x2CC628u;
            // 0x2cc628: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2CC62Cu;
        goto label_2cc62c;
    }
    ctx->pc = 0x2CC624u;
    {
        const bool branch_taken_0x2cc624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC624u;
            // 0x2cc628: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc624) {
            ctx->pc = 0x2CC660u;
            goto label_2cc660;
        }
    }
    ctx->pc = 0x2CC62Cu;
label_2cc62c:
    // 0x2cc62c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc630:
    // 0x2cc630: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2cc630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2cc634:
    // 0x2cc634: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2cc634u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2cc638:
    // 0x2cc638: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2cc63c:
    // 0x2cc63c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2cc640:
    if (ctx->pc == 0x2CC640u) {
        ctx->pc = 0x2CC644u;
        goto label_2cc644;
    }
    ctx->pc = 0x2CC63Cu;
    {
        const bool branch_taken_0x2cc63c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc63c) {
            ctx->pc = 0x2CC660u;
            goto label_2cc660;
        }
    }
    ctx->pc = 0x2CC644u;
label_2cc644:
    // 0x2cc644: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2cc648:
    if (ctx->pc == 0x2CC648u) {
        ctx->pc = 0x2CC648u;
            // 0x2cc648: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2CC64Cu;
        goto label_2cc64c;
    }
    ctx->pc = 0x2CC644u;
    {
        const bool branch_taken_0x2cc644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc644) {
            ctx->pc = 0x2CC648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC644u;
            // 0x2cc648: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC660u;
            goto label_2cc660;
        }
    }
    ctx->pc = 0x2CC64Cu;
label_2cc64c:
    // 0x2cc64c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2cc650:
    // 0x2cc650: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2cc654:
    // 0x2cc654: 0x320f809  jalr        $t9
label_2cc658:
    if (ctx->pc == 0x2CC658u) {
        ctx->pc = 0x2CC658u;
            // 0x2cc658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2CC65Cu;
        goto label_2cc65c;
    }
    ctx->pc = 0x2CC654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CC65Cu);
        ctx->pc = 0x2CC658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC654u;
            // 0x2cc658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CC65Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CC65Cu; }
            if (ctx->pc != 0x2CC65Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2CC65Cu;
label_2cc65c:
    // 0x2cc65c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2cc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2cc660:
    // 0x2cc660: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2cc664:
    if (ctx->pc == 0x2CC664u) {
        ctx->pc = 0x2CC668u;
        goto label_2cc668;
    }
    ctx->pc = 0x2CC660u;
    {
        const bool branch_taken_0x2cc660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc660) {
            ctx->pc = 0x2CC684u;
            goto label_2cc684;
        }
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc66c:
    // 0x2cc66c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2cc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2cc670:
    // 0x2cc670: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2cc674:
    if (ctx->pc == 0x2CC674u) {
        ctx->pc = 0x2CC674u;
            // 0x2cc674: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2CC678u;
        goto label_2cc678;
    }
    ctx->pc = 0x2CC670u;
    {
        const bool branch_taken_0x2cc670 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC670u;
            // 0x2cc674: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc670) {
            ctx->pc = 0x2CC684u;
            goto label_2cc684;
        }
    }
    ctx->pc = 0x2CC678u;
label_2cc678:
    // 0x2cc678: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2cc67c:
    // 0x2cc67c: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2cc67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2cc680:
    // 0x2cc680: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2cc680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2cc684:
    // 0x2cc684: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2cc684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2cc688:
    // 0x2cc688: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cc688u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2cc68c:
    // 0x2cc68c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2cc690:
    if (ctx->pc == 0x2CC690u) {
        ctx->pc = 0x2CC690u;
            // 0x2cc690: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC694u;
        goto label_2cc694;
    }
    ctx->pc = 0x2CC68Cu;
    {
        const bool branch_taken_0x2cc68c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cc68c) {
            ctx->pc = 0x2CC690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC68Cu;
            // 0x2cc690: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC6A0u;
            goto label_2cc6a0;
        }
    }
    ctx->pc = 0x2CC694u;
label_2cc694:
    // 0x2cc694: 0xc0400a8  jal         func_1002A0
label_2cc698:
    if (ctx->pc == 0x2CC698u) {
        ctx->pc = 0x2CC698u;
            // 0x2cc698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CC69Cu;
        goto label_2cc69c;
    }
    ctx->pc = 0x2CC694u;
    SET_GPR_U32(ctx, 31, 0x2CC69Cu);
    ctx->pc = 0x2CC698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC694u;
            // 0x2cc698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC69Cu; }
        if (ctx->pc != 0x2CC69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC69Cu; }
        if (ctx->pc != 0x2CC69Cu) { return; }
    }
    ctx->pc = 0x2CC69Cu;
label_2cc69c:
    // 0x2cc69c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2cc69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cc6a0:
    // 0x2cc6a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cc6a4:
    // 0x2cc6a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cc6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cc6a8:
    // 0x2cc6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2cc6ac:
    // 0x2cc6ac: 0x3e00008  jr          $ra
label_2cc6b0:
    if (ctx->pc == 0x2CC6B0u) {
        ctx->pc = 0x2CC6B0u;
            // 0x2cc6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2CC6B4u;
        goto label_2cc6b4;
    }
    ctx->pc = 0x2CC6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC6ACu;
            // 0x2cc6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC6B4u;
label_2cc6b4:
    // 0x2cc6b4: 0x0  nop
    ctx->pc = 0x2cc6b4u;
    // NOP
label_2cc6b8:
    // 0x2cc6b8: 0x0  nop
    ctx->pc = 0x2cc6b8u;
    // NOP
label_2cc6bc:
    // 0x2cc6bc: 0x0  nop
    ctx->pc = 0x2cc6bcu;
    // NOP
}
