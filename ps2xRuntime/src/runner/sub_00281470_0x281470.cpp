#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281470
// Address: 0x281470 - 0x281590
void sub_00281470_0x281470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281470_0x281470");
#endif

    switch (ctx->pc) {
        case 0x281470u: goto label_281470;
        case 0x281474u: goto label_281474;
        case 0x281478u: goto label_281478;
        case 0x28147cu: goto label_28147c;
        case 0x281480u: goto label_281480;
        case 0x281484u: goto label_281484;
        case 0x281488u: goto label_281488;
        case 0x28148cu: goto label_28148c;
        case 0x281490u: goto label_281490;
        case 0x281494u: goto label_281494;
        case 0x281498u: goto label_281498;
        case 0x28149cu: goto label_28149c;
        case 0x2814a0u: goto label_2814a0;
        case 0x2814a4u: goto label_2814a4;
        case 0x2814a8u: goto label_2814a8;
        case 0x2814acu: goto label_2814ac;
        case 0x2814b0u: goto label_2814b0;
        case 0x2814b4u: goto label_2814b4;
        case 0x2814b8u: goto label_2814b8;
        case 0x2814bcu: goto label_2814bc;
        case 0x2814c0u: goto label_2814c0;
        case 0x2814c4u: goto label_2814c4;
        case 0x2814c8u: goto label_2814c8;
        case 0x2814ccu: goto label_2814cc;
        case 0x2814d0u: goto label_2814d0;
        case 0x2814d4u: goto label_2814d4;
        case 0x2814d8u: goto label_2814d8;
        case 0x2814dcu: goto label_2814dc;
        case 0x2814e0u: goto label_2814e0;
        case 0x2814e4u: goto label_2814e4;
        case 0x2814e8u: goto label_2814e8;
        case 0x2814ecu: goto label_2814ec;
        case 0x2814f0u: goto label_2814f0;
        case 0x2814f4u: goto label_2814f4;
        case 0x2814f8u: goto label_2814f8;
        case 0x2814fcu: goto label_2814fc;
        case 0x281500u: goto label_281500;
        case 0x281504u: goto label_281504;
        case 0x281508u: goto label_281508;
        case 0x28150cu: goto label_28150c;
        case 0x281510u: goto label_281510;
        case 0x281514u: goto label_281514;
        case 0x281518u: goto label_281518;
        case 0x28151cu: goto label_28151c;
        case 0x281520u: goto label_281520;
        case 0x281524u: goto label_281524;
        case 0x281528u: goto label_281528;
        case 0x28152cu: goto label_28152c;
        case 0x281530u: goto label_281530;
        case 0x281534u: goto label_281534;
        case 0x281538u: goto label_281538;
        case 0x28153cu: goto label_28153c;
        case 0x281540u: goto label_281540;
        case 0x281544u: goto label_281544;
        case 0x281548u: goto label_281548;
        case 0x28154cu: goto label_28154c;
        case 0x281550u: goto label_281550;
        case 0x281554u: goto label_281554;
        case 0x281558u: goto label_281558;
        case 0x28155cu: goto label_28155c;
        case 0x281560u: goto label_281560;
        case 0x281564u: goto label_281564;
        case 0x281568u: goto label_281568;
        case 0x28156cu: goto label_28156c;
        case 0x281570u: goto label_281570;
        case 0x281574u: goto label_281574;
        case 0x281578u: goto label_281578;
        case 0x28157cu: goto label_28157c;
        case 0x281580u: goto label_281580;
        case 0x281584u: goto label_281584;
        case 0x281588u: goto label_281588;
        case 0x28158cu: goto label_28158c;
        default: break;
    }

    ctx->pc = 0x281470u;

label_281470:
    // 0x281470: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x281470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_281474:
    // 0x281474: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x281474u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_281478:
    // 0x281478: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x281478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_28147c:
    // 0x28147c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_281480:
    // 0x281480: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x281480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_281484:
    // 0x281484: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x281484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_281488:
    // 0x281488: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x281488u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28148c:
    // 0x28148c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_281490:
    // 0x281490: 0x6b043  sra         $s6, $a2, 1
    ctx->pc = 0x281490u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 6), 1));
label_281494:
    // 0x281494: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x281494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_281498:
    // 0x281498: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x281498u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28149c:
    // 0x28149c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2814a0:
    // 0x2814a0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2814a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2814a4:
    // 0x2814a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2814a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2814a8:
    // 0x2814a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2814a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2814ac:
    // 0x2814ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2814acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2814b0:
    // 0x2814b0: 0x8c72fffc  lw          $s2, -0x4($v1)
    ctx->pc = 0x2814b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_2814b4:
    // 0x2814b4: 0x6e10003  bgez        $s7, . + 4 + (0x3 << 2)
label_2814b8:
    if (ctx->pc == 0x2814B8u) {
        ctx->pc = 0x2814B8u;
            // 0x2814b8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2814BCu;
        goto label_2814bc;
    }
    ctx->pc = 0x2814B4u;
    {
        const bool branch_taken_0x2814b4 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x2814B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814B4u;
            // 0x2814b8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814b4) {
            ctx->pc = 0x2814C4u;
            goto label_2814c4;
        }
    }
    ctx->pc = 0x2814BCu;
label_2814bc:
    // 0x2814bc: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x2814bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2814c0:
    // 0x2814c0: 0x3b043  sra         $s6, $v1, 1
    ctx->pc = 0x2814c0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 3), 1));
label_2814c4:
    // 0x2814c4: 0x2d4082a  slt         $at, $s6, $s4
    ctx->pc = 0x2814c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2814c8:
    // 0x2814c8: 0x14200021  bnez        $at, . + 4 + (0x21 << 2)
label_2814cc:
    if (ctx->pc == 0x2814CCu) {
        ctx->pc = 0x2814D0u;
        goto label_2814d0;
    }
    ctx->pc = 0x2814C8u;
    {
        const bool branch_taken_0x2814c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2814c8) {
            ctx->pc = 0x281550u;
            goto label_281550;
        }
    }
    ctx->pc = 0x2814D0u;
label_2814d0:
    // 0x2814d0: 0x148840  sll         $s1, $s4, 1
    ctx->pc = 0x2814d0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
label_2814d4:
    // 0x2814d4: 0x237082a  slt         $at, $s1, $s7
    ctx->pc = 0x2814d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_2814d8:
    // 0x2814d8: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_2814dc:
    if (ctx->pc == 0x2814DCu) {
        ctx->pc = 0x2814DCu;
            // 0x2814dc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x2814E0u;
        goto label_2814e0;
    }
    ctx->pc = 0x2814D8u;
    {
        const bool branch_taken_0x2814d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2814DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814D8u;
            // 0x2814dc: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2814d8) {
            ctx->pc = 0x281508u;
            goto label_281508;
        }
    }
    ctx->pc = 0x2814E0u;
label_2814e0:
    // 0x2814e0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2814e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_2814e4:
    // 0x2814e4: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x2814e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_2814e8:
    // 0x2814e8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2814e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2814ec:
    // 0x2814ec: 0x260f809  jalr        $s3
label_2814f0:
    if (ctx->pc == 0x2814F0u) {
        ctx->pc = 0x2814F0u;
            // 0x2814f0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->pc = 0x2814F4u;
        goto label_2814f4;
    }
    ctx->pc = 0x2814ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x2814F4u);
        ctx->pc = 0x2814F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2814ECu;
            // 0x2814f0: 0x27a4009c  addiu       $a0, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2814F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2814F4u; }
            if (ctx->pc != 0x2814F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2814F4u;
label_2814f4:
    // 0x2814f4: 0x27a2009c  addiu       $v0, $sp, 0x9C
    ctx->pc = 0x2814f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2814f8:
    // 0x2814f8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2814f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2814fc:
    // 0x2814fc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_281500:
    if (ctx->pc == 0x281500u) {
        ctx->pc = 0x281504u;
        goto label_281504;
    }
    ctx->pc = 0x2814FCu;
    {
        const bool branch_taken_0x2814fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2814fc) {
            ctx->pc = 0x281508u;
            goto label_281508;
        }
    }
    ctx->pc = 0x281504u;
label_281504:
    // 0x281504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x281504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_281508:
    // 0x281508: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x281508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_28150c:
    // 0x28150c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x28150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_281510:
    // 0x281510: 0x27a40098  addiu       $a0, $sp, 0x98
    ctx->pc = 0x281510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_281514:
    // 0x281514: 0x8c46fffc  lw          $a2, -0x4($v0)
    ctx->pc = 0x281514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_281518:
    // 0x281518: 0x2450fffc  addiu       $s0, $v0, -0x4
    ctx->pc = 0x281518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_28151c:
    // 0x28151c: 0x260f809  jalr        $s3
label_281520:
    if (ctx->pc == 0x281520u) {
        ctx->pc = 0x281520u;
            // 0x281520: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281524u;
        goto label_281524;
    }
    ctx->pc = 0x28151Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x281524u);
        ctx->pc = 0x281520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28151Cu;
            // 0x281520: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x281524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x281524u; }
            if (ctx->pc != 0x281524u) { return; }
        }
        }
    }
    ctx->pc = 0x281524u;
label_281524:
    // 0x281524: 0x27a30098  addiu       $v1, $sp, 0x98
    ctx->pc = 0x281524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_281528:
    // 0x281528: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x281528u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_28152c:
    // 0x28152c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_281530:
    if (ctx->pc == 0x281530u) {
        ctx->pc = 0x281534u;
        goto label_281534;
    }
    ctx->pc = 0x28152Cu;
    {
        const bool branch_taken_0x28152c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28152c) {
            ctx->pc = 0x281550u;
            goto label_281550;
        }
    }
    ctx->pc = 0x281534u;
label_281534:
    // 0x281534: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x281534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_281538:
    // 0x281538: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x281538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_28153c:
    // 0x28153c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x28153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_281540:
    // 0x281540: 0x2d1082a  slt         $at, $s6, $s1
    ctx->pc = 0x281540u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_281544:
    // 0x281544: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x281544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281548:
    // 0x281548: 0x1020ffe1  beqz        $at, . + 4 + (-0x1F << 2)
label_28154c:
    if (ctx->pc == 0x28154Cu) {
        ctx->pc = 0x28154Cu;
            // 0x28154c: 0xac64fffc  sw          $a0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        ctx->pc = 0x281550u;
        goto label_281550;
    }
    ctx->pc = 0x281548u;
    {
        const bool branch_taken_0x281548 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281548u;
            // 0x28154c: 0xac64fffc  sw          $a0, -0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281548) {
            ctx->pc = 0x2814D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2814d0;
        }
    }
    ctx->pc = 0x281550u;
label_281550:
    // 0x281550: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x281550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_281554:
    // 0x281554: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x281554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_281558:
    // 0x281558: 0xac72fffc  sw          $s2, -0x4($v1)
    ctx->pc = 0x281558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), GPR_U32(ctx, 18));
label_28155c:
    // 0x28155c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x28155cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_281560:
    // 0x281560: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x281560u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_281564:
    // 0x281564: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x281564u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_281568:
    // 0x281568: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28156c:
    // 0x28156c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28156cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_281570:
    // 0x281570: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_281574:
    // 0x281574: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_281578:
    // 0x281578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28157c:
    // 0x28157c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28157cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281580:
    // 0x281580: 0x3e00008  jr          $ra
label_281584:
    if (ctx->pc == 0x281584u) {
        ctx->pc = 0x281584u;
            // 0x281584: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x281588u;
        goto label_281588;
    }
    ctx->pc = 0x281580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281580u;
            // 0x281584: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281588u;
label_281588:
    // 0x281588: 0x0  nop
    ctx->pc = 0x281588u;
    // NOP
label_28158c:
    // 0x28158c: 0x0  nop
    ctx->pc = 0x28158cu;
    // NOP
}
