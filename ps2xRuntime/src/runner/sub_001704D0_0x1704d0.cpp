#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001704D0
// Address: 0x1704d0 - 0x1705d8
void sub_001704D0_0x1704d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001704D0_0x1704d0");
#endif

    switch (ctx->pc) {
        case 0x1704d0u: goto label_1704d0;
        case 0x1704d4u: goto label_1704d4;
        case 0x1704d8u: goto label_1704d8;
        case 0x1704dcu: goto label_1704dc;
        case 0x1704e0u: goto label_1704e0;
        case 0x1704e4u: goto label_1704e4;
        case 0x1704e8u: goto label_1704e8;
        case 0x1704ecu: goto label_1704ec;
        case 0x1704f0u: goto label_1704f0;
        case 0x1704f4u: goto label_1704f4;
        case 0x1704f8u: goto label_1704f8;
        case 0x1704fcu: goto label_1704fc;
        case 0x170500u: goto label_170500;
        case 0x170504u: goto label_170504;
        case 0x170508u: goto label_170508;
        case 0x17050cu: goto label_17050c;
        case 0x170510u: goto label_170510;
        case 0x170514u: goto label_170514;
        case 0x170518u: goto label_170518;
        case 0x17051cu: goto label_17051c;
        case 0x170520u: goto label_170520;
        case 0x170524u: goto label_170524;
        case 0x170528u: goto label_170528;
        case 0x17052cu: goto label_17052c;
        case 0x170530u: goto label_170530;
        case 0x170534u: goto label_170534;
        case 0x170538u: goto label_170538;
        case 0x17053cu: goto label_17053c;
        case 0x170540u: goto label_170540;
        case 0x170544u: goto label_170544;
        case 0x170548u: goto label_170548;
        case 0x17054cu: goto label_17054c;
        case 0x170550u: goto label_170550;
        case 0x170554u: goto label_170554;
        case 0x170558u: goto label_170558;
        case 0x17055cu: goto label_17055c;
        case 0x170560u: goto label_170560;
        case 0x170564u: goto label_170564;
        case 0x170568u: goto label_170568;
        case 0x17056cu: goto label_17056c;
        case 0x170570u: goto label_170570;
        case 0x170574u: goto label_170574;
        case 0x170578u: goto label_170578;
        case 0x17057cu: goto label_17057c;
        case 0x170580u: goto label_170580;
        case 0x170584u: goto label_170584;
        case 0x170588u: goto label_170588;
        case 0x17058cu: goto label_17058c;
        case 0x170590u: goto label_170590;
        case 0x170594u: goto label_170594;
        case 0x170598u: goto label_170598;
        case 0x17059cu: goto label_17059c;
        case 0x1705a0u: goto label_1705a0;
        case 0x1705a4u: goto label_1705a4;
        case 0x1705a8u: goto label_1705a8;
        case 0x1705acu: goto label_1705ac;
        case 0x1705b0u: goto label_1705b0;
        case 0x1705b4u: goto label_1705b4;
        case 0x1705b8u: goto label_1705b8;
        case 0x1705bcu: goto label_1705bc;
        case 0x1705c0u: goto label_1705c0;
        case 0x1705c4u: goto label_1705c4;
        case 0x1705c8u: goto label_1705c8;
        case 0x1705ccu: goto label_1705cc;
        case 0x1705d0u: goto label_1705d0;
        case 0x1705d4u: goto label_1705d4;
        default: break;
    }

    ctx->pc = 0x1704d0u;

label_1704d0:
    // 0x1704d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1704d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1704d4:
    // 0x1704d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1704d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1704d8:
    // 0x1704d8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1704d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1704dc:
    // 0x1704dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1704dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1704e0:
    // 0x1704e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1704e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1704e4:
    // 0x1704e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1704e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1704e8:
    // 0x1704e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1704e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1704ec:
    // 0x1704ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1704ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1704f0:
    // 0x1704f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1704f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1704f4:
    // 0x1704f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1704f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1704f8:
    // 0x1704f8: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1704f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1704fc:
    // 0x1704fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1704fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_170500:
    // 0x170500: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x170500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_170504:
    // 0x170504: 0xc05c834  jal         func_1720D0
label_170508:
    if (ctx->pc == 0x170508u) {
        ctx->pc = 0x170508u;
            // 0x170508: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17050Cu;
        goto label_17050c;
    }
    ctx->pc = 0x170504u;
    SET_GPR_U32(ctx, 31, 0x17050Cu);
    ctx->pc = 0x170508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170504u;
            // 0x170508: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720D0u;
    if (runtime->hasFunction(0x1720D0u)) {
        auto targetFn = runtime->lookupFunction(0x1720D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17050Cu; }
        if (ctx->pc != 0x17050Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001720D0_0x1720d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17050Cu; }
        if (ctx->pc != 0x17050Cu) { return; }
    }
    ctx->pc = 0x17050Cu;
label_17050c:
    // 0x17050c: 0x260707ff  addiu       $a3, $s0, 0x7FF
    ctx->pc = 0x17050cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2047));
label_170510:
    // 0x170510: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x170510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_170514:
    // 0x170514: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x170514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170518:
    // 0x170518: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x170518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_17051c:
    // 0x17051c: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x17051cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_170520:
    // 0x170520: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x170520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_170524:
    // 0x170524: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x170524u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
label_170528:
    // 0x170528: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x170528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_17052c:
    // 0x17052c: 0x312c0  sll         $v0, $v1, 11
    ctx->pc = 0x17052cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_170530:
    // 0x170530: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x170530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_170534:
    // 0x170534: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x170534u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_170538:
    // 0x170538: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17053c:
    // 0x17053c: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x17053cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_170540:
    // 0x170540: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x170540u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_170544:
    // 0x170544: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_170548:
    // 0x170548: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x170548u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_17054c:
    // 0x17054c: 0xae670030  sw          $a3, 0x30($s3)
    ctx->pc = 0x17054cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 7));
label_170550:
    // 0x170550: 0xae660060  sw          $a2, 0x60($s3)
    ctx->pc = 0x170550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 6));
label_170554:
    // 0x170554: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x170554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_170558:
    // 0x170558: 0xa2750001  sb          $s5, 0x1($s3)
    ctx->pc = 0x170558u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 21));
label_17055c:
    // 0x17055c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x17055cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_170560:
    // 0x170560: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x170560u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_170564:
    // 0x170564: 0xfe700010  sd          $s0, 0x10($s3)
    ctx->pc = 0x170564u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 16));
label_170568:
    // 0x170568: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x170568u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_17056c:
    // 0x17056c: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_170570:
    if (ctx->pc == 0x170570u) {
        ctx->pc = 0x170570u;
            // 0x170570: 0xae60005c  sw          $zero, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x170574u;
        goto label_170574;
    }
    ctx->pc = 0x17056Cu;
    {
        const bool branch_taken_0x17056c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x170570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17056Cu;
            // 0x170570: 0xae60005c  sw          $zero, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17056c) {
            ctx->pc = 0x1705ACu;
            goto label_1705ac;
        }
    }
    ctx->pc = 0x170574u;
label_170574:
    // 0x170574: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x170574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_170578:
    // 0x170578: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x170578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17057c:
    // 0x17057c: 0x40f809  jalr        $v0
label_170580:
    if (ctx->pc == 0x170580u) {
        ctx->pc = 0x170584u;
        goto label_170584;
    }
    ctx->pc = 0x17057Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x170584u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x170584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x170584u; }
            if (ctx->pc != 0x170584u) { return; }
        }
        }
    }
    ctx->pc = 0x170584u;
label_170584:
    // 0x170584: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x170584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_170588:
    // 0x170588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x170588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17058c:
    // 0x17058c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17058cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_170590:
    // 0x170590: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x170590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_170594:
    // 0x170594: 0x40f809  jalr        $v0
label_170598:
    if (ctx->pc == 0x170598u) {
        ctx->pc = 0x170598u;
            // 0x170598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17059Cu;
        goto label_17059c;
    }
    ctx->pc = 0x170594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17059Cu);
        ctx->pc = 0x170598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170594u;
            // 0x170598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17059Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17059Cu; }
            if (ctx->pc != 0x17059Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17059Cu;
label_17059c:
    // 0x17059c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x17059cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1705a0:
    // 0x1705a0: 0xae700020  sw          $s0, 0x20($s3)
    ctx->pc = 0x1705a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 16));
label_1705a4:
    // 0x1705a4: 0xae700044  sw          $s0, 0x44($s3)
    ctx->pc = 0x1705a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 16));
label_1705a8:
    // 0x1705a8: 0xae70001c  sw          $s0, 0x1C($s3)
    ctx->pc = 0x1705a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 16));
label_1705ac:
    // 0x1705ac: 0xa2750000  sb          $s5, 0x0($s3)
    ctx->pc = 0x1705acu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 21));
label_1705b0:
    // 0x1705b0: 0xa2600048  sb          $zero, 0x48($s3)
    ctx->pc = 0x1705b0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 72), (uint8_t)GPR_U32(ctx, 0));
label_1705b4:
    // 0x1705b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1705b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1705b8:
    // 0x1705b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1705b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1705bc:
    // 0x1705bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1705bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1705c0:
    // 0x1705c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1705c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1705c4:
    // 0x1705c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1705c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1705c8:
    // 0x1705c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1705c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1705cc:
    // 0x1705cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1705ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1705d0:
    // 0x1705d0: 0x805c83a  j           func_1720E8
label_1705d4:
    if (ctx->pc == 0x1705D4u) {
        ctx->pc = 0x1705D4u;
            // 0x1705d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1705D8u;
        goto label_fallthrough_0x1705d0;
    }
    ctx->pc = 0x1705D0u;
    ctx->pc = 0x1705D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1705D0u;
            // 0x1705d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1720E8u;
    if (runtime->hasFunction(0x1720E8u)) {
        auto targetFn = runtime->lookupFunction(0x1720E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001720E8_0x1720e8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1705d0:
    ctx->pc = 0x1705D8u;
}
