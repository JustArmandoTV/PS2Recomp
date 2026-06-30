#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239490
// Address: 0x239490 - 0x2395a0
void sub_00239490_0x239490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239490_0x239490");
#endif

    switch (ctx->pc) {
        case 0x239490u: goto label_239490;
        case 0x239494u: goto label_239494;
        case 0x239498u: goto label_239498;
        case 0x23949cu: goto label_23949c;
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394a8u: goto label_2394a8;
        case 0x2394acu: goto label_2394ac;
        case 0x2394b0u: goto label_2394b0;
        case 0x2394b4u: goto label_2394b4;
        case 0x2394b8u: goto label_2394b8;
        case 0x2394bcu: goto label_2394bc;
        case 0x2394c0u: goto label_2394c0;
        case 0x2394c4u: goto label_2394c4;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394d0u: goto label_2394d0;
        case 0x2394d4u: goto label_2394d4;
        case 0x2394d8u: goto label_2394d8;
        case 0x2394dcu: goto label_2394dc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394e4u: goto label_2394e4;
        case 0x2394e8u: goto label_2394e8;
        case 0x2394ecu: goto label_2394ec;
        case 0x2394f0u: goto label_2394f0;
        case 0x2394f4u: goto label_2394f4;
        case 0x2394f8u: goto label_2394f8;
        case 0x2394fcu: goto label_2394fc;
        case 0x239500u: goto label_239500;
        case 0x239504u: goto label_239504;
        case 0x239508u: goto label_239508;
        case 0x23950cu: goto label_23950c;
        case 0x239510u: goto label_239510;
        case 0x239514u: goto label_239514;
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        case 0x239558u: goto label_239558;
        case 0x23955cu: goto label_23955c;
        case 0x239560u: goto label_239560;
        case 0x239564u: goto label_239564;
        case 0x239568u: goto label_239568;
        case 0x23956cu: goto label_23956c;
        case 0x239570u: goto label_239570;
        case 0x239574u: goto label_239574;
        case 0x239578u: goto label_239578;
        case 0x23957cu: goto label_23957c;
        case 0x239580u: goto label_239580;
        case 0x239584u: goto label_239584;
        case 0x239588u: goto label_239588;
        case 0x23958cu: goto label_23958c;
        case 0x239590u: goto label_239590;
        case 0x239594u: goto label_239594;
        case 0x239598u: goto label_239598;
        case 0x23959cu: goto label_23959c;
        default: break;
    }

    ctx->pc = 0x239490u;

label_239490:
    // 0x239490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x239490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_239494:
    // 0x239494: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_239498:
    // 0x239498: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23949c:
    // 0x23949c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2394a0:
    // 0x2394a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2394a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2394a4:
    // 0x2394a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2394a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2394a8:
    // 0x2394a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2394a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2394ac:
    // 0x2394ac: 0x8c830114  lw          $v1, 0x114($a0)
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_2394b0:
    // 0x2394b0: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2394b4:
    // 0x2394b4: 0x6400010  bltz        $s2, . + 4 + (0x10 << 2)
label_2394b8:
    if (ctx->pc == 0x2394B8u) {
        ctx->pc = 0x2394B8u;
            // 0x2394b8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->pc = 0x2394BCu;
        goto label_2394bc;
    }
    ctx->pc = 0x2394B4u;
    {
        const bool branch_taken_0x2394b4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394B4u;
            // 0x2394b8: 0x24900110  addiu       $s0, $a0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394b4) {
            ctx->pc = 0x2394F8u;
            goto label_2394f8;
        }
    }
    ctx->pc = 0x2394BCu;
label_2394bc:
    // 0x2394bc: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2394c0:
    // 0x2394c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2394c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2394c4:
    // 0x2394c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2394c8:
    // 0x2394c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2394c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2394cc:
    // 0x2394cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2394d0:
    if (ctx->pc == 0x2394D0u) {
        ctx->pc = 0x2394D4u;
        goto label_2394d4;
    }
    ctx->pc = 0x2394CCu;
    {
        const bool branch_taken_0x2394cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2394cc) {
            ctx->pc = 0x2394E8u;
            goto label_2394e8;
        }
    }
    ctx->pc = 0x2394D4u;
label_2394d4:
    // 0x2394d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2394d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2394d8:
    // 0x2394d8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2394d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2394dc:
    // 0x2394dc: 0x320f809  jalr        $t9
label_2394e0:
    if (ctx->pc == 0x2394E0u) {
        ctx->pc = 0x2394E0u;
            // 0x2394e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2394E4u;
        goto label_2394e4;
    }
    ctx->pc = 0x2394DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2394E4u);
        ctx->pc = 0x2394E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394DCu;
            // 0x2394e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2394E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2394E4u; }
            if (ctx->pc != 0x2394E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2394E4u;
label_2394e4:
    // 0x2394e4: 0x0  nop
    ctx->pc = 0x2394e4u;
    // NOP
label_2394e8:
    // 0x2394e8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2394e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2394ec:
    // 0x2394ec: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
label_2394f0:
    if (ctx->pc == 0x2394F0u) {
        ctx->pc = 0x2394F0u;
            // 0x2394f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x2394F4u;
        goto label_2394f4;
    }
    ctx->pc = 0x2394ECu;
    {
        const bool branch_taken_0x2394ec = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2394F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394ECu;
            // 0x2394f0: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394ec) {
            ctx->pc = 0x2394C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2394c0;
        }
    }
    ctx->pc = 0x2394F4u;
label_2394f4:
    // 0x2394f4: 0x0  nop
    ctx->pc = 0x2394f4u;
    // NOP
label_2394f8:
    // 0x2394f8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2394fc:
    // 0x2394fc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_239500:
    // 0x239500: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_239504:
    if (ctx->pc == 0x239504u) {
        ctx->pc = 0x239508u;
        goto label_239508;
    }
    ctx->pc = 0x239500u;
    {
        const bool branch_taken_0x239500 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x239500) {
            ctx->pc = 0x239578u;
            goto label_239578;
        }
    }
    ctx->pc = 0x239508u;
label_239508:
    // 0x239508: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x239508u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23950c:
    // 0x23950c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239510:
    // 0x239510: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x239510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_239514:
    // 0x239514: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_239518:
    // 0x239518: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23951c:
    if (ctx->pc == 0x23951Cu) {
        ctx->pc = 0x239520u;
        goto label_239520;
    }
    ctx->pc = 0x239518u;
    {
        const bool branch_taken_0x239518 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239518) {
            ctx->pc = 0x239568u;
            goto label_239568;
        }
    }
    ctx->pc = 0x239520u;
label_239520:
    // 0x239520: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239524:
    // 0x239524: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x239524u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239528:
    // 0x239528: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x239528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23952c:
    // 0x23952c: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23952cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239530:
    // 0x239530: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_239534:
    if (ctx->pc == 0x239534u) {
        ctx->pc = 0x239534u;
            // 0x239534: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x239538u;
        goto label_239538;
    }
    ctx->pc = 0x239530u;
    {
        const bool branch_taken_0x239530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239530u;
            // 0x239534: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239530) {
            ctx->pc = 0x239568u;
            goto label_239568;
        }
    }
    ctx->pc = 0x239538u;
label_239538:
    // 0x239538: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x239538u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23953c:
    // 0x23953c: 0x0  nop
    ctx->pc = 0x23953cu;
    // NOP
label_239540:
    // 0x239540: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_239544:
    // 0x239544: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239548:
    // 0x239548: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x239548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23954c:
    // 0x23954c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_239550:
    // 0x239550: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x239550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_239554:
    // 0x239554: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x239554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239558:
    // 0x239558: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x239558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23955c:
    // 0x23955c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_239560:
    if (ctx->pc == 0x239560u) {
        ctx->pc = 0x239560u;
            // 0x239560: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x239564u;
        goto label_239564;
    }
    ctx->pc = 0x23955Cu;
    {
        const bool branch_taken_0x23955c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23955Cu;
            // 0x239560: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23955c) {
            ctx->pc = 0x239540u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239540;
        }
    }
    ctx->pc = 0x239564u;
label_239564:
    // 0x239564: 0x0  nop
    ctx->pc = 0x239564u;
    // NOP
label_239568:
    // 0x239568: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x239568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23956c:
    // 0x23956c: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_239570:
    if (ctx->pc == 0x239570u) {
        ctx->pc = 0x239570u;
            // 0x239570: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x239574u;
        goto label_239574;
    }
    ctx->pc = 0x23956Cu;
    {
        const bool branch_taken_0x23956c = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x239570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23956Cu;
            // 0x239570: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23956c) {
            ctx->pc = 0x23950Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23950c;
        }
    }
    ctx->pc = 0x239574u;
label_239574:
    // 0x239574: 0x0  nop
    ctx->pc = 0x239574u;
    // NOP
label_239578:
    // 0x239578: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x239578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23957c:
    // 0x23957c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23957cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_239580:
    // 0x239580: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x239580u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_239584:
    // 0x239584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x239584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_239588:
    // 0x239588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23958c:
    // 0x23958c: 0x3e00008  jr          $ra
label_239590:
    if (ctx->pc == 0x239590u) {
        ctx->pc = 0x239590u;
            // 0x239590: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x239594u;
        goto label_239594;
    }
    ctx->pc = 0x23958Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23958Cu;
            // 0x239590: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239594u;
label_239594:
    // 0x239594: 0x0  nop
    ctx->pc = 0x239594u;
    // NOP
label_239598:
    // 0x239598: 0x0  nop
    ctx->pc = 0x239598u;
    // NOP
label_23959c:
    // 0x23959c: 0x0  nop
    ctx->pc = 0x23959cu;
    // NOP
}
