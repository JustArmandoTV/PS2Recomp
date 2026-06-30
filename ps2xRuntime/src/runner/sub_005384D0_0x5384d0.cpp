#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005384D0
// Address: 0x5384d0 - 0x538680
void sub_005384D0_0x5384d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005384D0_0x5384d0");
#endif

    switch (ctx->pc) {
        case 0x5384d0u: goto label_5384d0;
        case 0x5384d4u: goto label_5384d4;
        case 0x5384d8u: goto label_5384d8;
        case 0x5384dcu: goto label_5384dc;
        case 0x5384e0u: goto label_5384e0;
        case 0x5384e4u: goto label_5384e4;
        case 0x5384e8u: goto label_5384e8;
        case 0x5384ecu: goto label_5384ec;
        case 0x5384f0u: goto label_5384f0;
        case 0x5384f4u: goto label_5384f4;
        case 0x5384f8u: goto label_5384f8;
        case 0x5384fcu: goto label_5384fc;
        case 0x538500u: goto label_538500;
        case 0x538504u: goto label_538504;
        case 0x538508u: goto label_538508;
        case 0x53850cu: goto label_53850c;
        case 0x538510u: goto label_538510;
        case 0x538514u: goto label_538514;
        case 0x538518u: goto label_538518;
        case 0x53851cu: goto label_53851c;
        case 0x538520u: goto label_538520;
        case 0x538524u: goto label_538524;
        case 0x538528u: goto label_538528;
        case 0x53852cu: goto label_53852c;
        case 0x538530u: goto label_538530;
        case 0x538534u: goto label_538534;
        case 0x538538u: goto label_538538;
        case 0x53853cu: goto label_53853c;
        case 0x538540u: goto label_538540;
        case 0x538544u: goto label_538544;
        case 0x538548u: goto label_538548;
        case 0x53854cu: goto label_53854c;
        case 0x538550u: goto label_538550;
        case 0x538554u: goto label_538554;
        case 0x538558u: goto label_538558;
        case 0x53855cu: goto label_53855c;
        case 0x538560u: goto label_538560;
        case 0x538564u: goto label_538564;
        case 0x538568u: goto label_538568;
        case 0x53856cu: goto label_53856c;
        case 0x538570u: goto label_538570;
        case 0x538574u: goto label_538574;
        case 0x538578u: goto label_538578;
        case 0x53857cu: goto label_53857c;
        case 0x538580u: goto label_538580;
        case 0x538584u: goto label_538584;
        case 0x538588u: goto label_538588;
        case 0x53858cu: goto label_53858c;
        case 0x538590u: goto label_538590;
        case 0x538594u: goto label_538594;
        case 0x538598u: goto label_538598;
        case 0x53859cu: goto label_53859c;
        case 0x5385a0u: goto label_5385a0;
        case 0x5385a4u: goto label_5385a4;
        case 0x5385a8u: goto label_5385a8;
        case 0x5385acu: goto label_5385ac;
        case 0x5385b0u: goto label_5385b0;
        case 0x5385b4u: goto label_5385b4;
        case 0x5385b8u: goto label_5385b8;
        case 0x5385bcu: goto label_5385bc;
        case 0x5385c0u: goto label_5385c0;
        case 0x5385c4u: goto label_5385c4;
        case 0x5385c8u: goto label_5385c8;
        case 0x5385ccu: goto label_5385cc;
        case 0x5385d0u: goto label_5385d0;
        case 0x5385d4u: goto label_5385d4;
        case 0x5385d8u: goto label_5385d8;
        case 0x5385dcu: goto label_5385dc;
        case 0x5385e0u: goto label_5385e0;
        case 0x5385e4u: goto label_5385e4;
        case 0x5385e8u: goto label_5385e8;
        case 0x5385ecu: goto label_5385ec;
        case 0x5385f0u: goto label_5385f0;
        case 0x5385f4u: goto label_5385f4;
        case 0x5385f8u: goto label_5385f8;
        case 0x5385fcu: goto label_5385fc;
        case 0x538600u: goto label_538600;
        case 0x538604u: goto label_538604;
        case 0x538608u: goto label_538608;
        case 0x53860cu: goto label_53860c;
        case 0x538610u: goto label_538610;
        case 0x538614u: goto label_538614;
        case 0x538618u: goto label_538618;
        case 0x53861cu: goto label_53861c;
        case 0x538620u: goto label_538620;
        case 0x538624u: goto label_538624;
        case 0x538628u: goto label_538628;
        case 0x53862cu: goto label_53862c;
        case 0x538630u: goto label_538630;
        case 0x538634u: goto label_538634;
        case 0x538638u: goto label_538638;
        case 0x53863cu: goto label_53863c;
        case 0x538640u: goto label_538640;
        case 0x538644u: goto label_538644;
        case 0x538648u: goto label_538648;
        case 0x53864cu: goto label_53864c;
        case 0x538650u: goto label_538650;
        case 0x538654u: goto label_538654;
        case 0x538658u: goto label_538658;
        case 0x53865cu: goto label_53865c;
        case 0x538660u: goto label_538660;
        case 0x538664u: goto label_538664;
        case 0x538668u: goto label_538668;
        case 0x53866cu: goto label_53866c;
        case 0x538670u: goto label_538670;
        case 0x538674u: goto label_538674;
        case 0x538678u: goto label_538678;
        case 0x53867cu: goto label_53867c;
        default: break;
    }

    ctx->pc = 0x5384d0u;

label_5384d0:
    // 0x5384d0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5384d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5384d4:
    // 0x5384d4: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x5384d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_5384d8:
    // 0x5384d8: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x5384d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
label_5384dc:
    // 0x5384dc: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x5384dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_5384e0:
    // 0x5384e0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x5384e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_5384e4:
    // 0x5384e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x5384e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5384e8:
    // 0x5384e8: 0x3e00008  jr          $ra
label_5384ec:
    if (ctx->pc == 0x5384ECu) {
        ctx->pc = 0x5384ECu;
            // 0x5384ec: 0xac65b6a8  sw          $a1, -0x4958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948520), GPR_U32(ctx, 5));
        ctx->pc = 0x5384F0u;
        goto label_5384f0;
    }
    ctx->pc = 0x5384E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5384ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5384E8u;
            // 0x5384ec: 0xac65b6a8  sw          $a1, -0x4958($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948520), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5384F0u;
label_5384f0:
    // 0x5384f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5384f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5384f4:
    // 0x5384f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5384f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5384f8:
    // 0x5384f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5384f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5384fc:
    // 0x5384fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5384fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_538500:
    // 0x538500: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x538500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_538504:
    // 0x538504: 0x8c840490  lw          $a0, 0x490($a0)
    ctx->pc = 0x538504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1168)));
label_538508:
    // 0x538508: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53850c:
    if (ctx->pc == 0x53850Cu) {
        ctx->pc = 0x53850Cu;
            // 0x53850c: 0xae000490  sw          $zero, 0x490($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 0));
        ctx->pc = 0x538510u;
        goto label_538510;
    }
    ctx->pc = 0x538508u;
    {
        const bool branch_taken_0x538508 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x538508) {
            ctx->pc = 0x53850Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x538508u;
            // 0x53850c: 0xae000490  sw          $zero, 0x490($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x538524u;
            goto label_538524;
        }
    }
    ctx->pc = 0x538510u;
label_538510:
    // 0x538510: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x538510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_538514:
    // 0x538514: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x538514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_538518:
    // 0x538518: 0x320f809  jalr        $t9
label_53851c:
    if (ctx->pc == 0x53851Cu) {
        ctx->pc = 0x53851Cu;
            // 0x53851c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x538520u;
        goto label_538520;
    }
    ctx->pc = 0x538518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x538520u);
        ctx->pc = 0x53851Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538518u;
            // 0x53851c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x538520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x538520u; }
            if (ctx->pc != 0x538520u) { return; }
        }
        }
    }
    ctx->pc = 0x538520u;
label_538520:
    // 0x538520: 0xae000490  sw          $zero, 0x490($s0)
    ctx->pc = 0x538520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 0));
label_538524:
    // 0x538524: 0x26110050  addiu       $s1, $s0, 0x50
    ctx->pc = 0x538524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_538528:
    // 0x538528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x538528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53852c:
    // 0x53852c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x53852cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_538530:
    // 0x538530: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x538530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_538534:
    // 0x538534: 0x320f809  jalr        $t9
label_538538:
    if (ctx->pc == 0x538538u) {
        ctx->pc = 0x538538u;
            // 0x538538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53853Cu;
        goto label_53853c;
    }
    ctx->pc = 0x538534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53853Cu);
        ctx->pc = 0x538538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538534u;
            // 0x538538: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53853Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53853Cu; }
            if (ctx->pc != 0x53853Cu) { return; }
        }
        }
    }
    ctx->pc = 0x53853Cu;
label_53853c:
    // 0x53853c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x53853cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_538540:
    // 0x538540: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x538540u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_538544:
    // 0x538544: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_538548:
    if (ctx->pc == 0x538548u) {
        ctx->pc = 0x538548u;
            // 0x538548: 0x26310160  addiu       $s1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->pc = 0x53854Cu;
        goto label_53854c;
    }
    ctx->pc = 0x538544u;
    {
        const bool branch_taken_0x538544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x538548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538544u;
            // 0x538548: 0x26310160  addiu       $s1, $s1, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x538544) {
            ctx->pc = 0x53852Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53852c;
        }
    }
    ctx->pc = 0x53854Cu;
label_53854c:
    // 0x53854c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_538550:
    // 0x538550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x538550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538554:
    // 0x538554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538558:
    // 0x538558: 0x3e00008  jr          $ra
label_53855c:
    if (ctx->pc == 0x53855Cu) {
        ctx->pc = 0x53855Cu;
            // 0x53855c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x538560u;
        goto label_538560;
    }
    ctx->pc = 0x538558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538558u;
            // 0x53855c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538560u;
label_538560:
    // 0x538560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x538560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_538564:
    // 0x538564: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x538564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_538568:
    // 0x538568: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x538568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53856c:
    // 0x53856c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_538570:
    // 0x538570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x538570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_538574:
    // 0x538574: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x538574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_538578:
    // 0x538578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x538578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53857c:
    // 0x53857c: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x53857cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_538580:
    // 0x538580: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x538580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_538584:
    // 0x538584: 0xc0d879c  jal         func_361E70
label_538588:
    if (ctx->pc == 0x538588u) {
        ctx->pc = 0x538588u;
            // 0x538588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53858Cu;
        goto label_53858c;
    }
    ctx->pc = 0x538584u;
    SET_GPR_U32(ctx, 31, 0x53858Cu);
    ctx->pc = 0x538588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538584u;
            // 0x538588: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53858Cu; }
        if (ctx->pc != 0x53858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53858Cu; }
        if (ctx->pc != 0x53858Cu) { return; }
    }
    ctx->pc = 0x53858Cu;
label_53858c:
    // 0x53858c: 0xae5000e0  sw          $s0, 0xE0($s2)
    ctx->pc = 0x53858cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 16));
label_538590:
    // 0x538590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x538590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_538594:
    // 0x538594: 0xc14e57c  jal         func_5395F0
label_538598:
    if (ctx->pc == 0x538598u) {
        ctx->pc = 0x538598u;
            // 0x538598: 0xae5100f8  sw          $s1, 0xF8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 17));
        ctx->pc = 0x53859Cu;
        goto label_53859c;
    }
    ctx->pc = 0x538594u;
    SET_GPR_U32(ctx, 31, 0x53859Cu);
    ctx->pc = 0x538598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x538594u;
            // 0x538598: 0xae5100f8  sw          $s1, 0xF8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5395F0u;
    if (runtime->hasFunction(0x5395F0u)) {
        auto targetFn = runtime->lookupFunction(0x5395F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53859Cu; }
        if (ctx->pc != 0x53859Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005395F0_0x5395f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53859Cu; }
        if (ctx->pc != 0x53859Cu) { return; }
    }
    ctx->pc = 0x53859Cu;
label_53859c:
    // 0x53859c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x53859cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_5385a0:
    // 0x5385a0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x5385a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_5385a4:
    // 0x5385a4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_5385a8:
    if (ctx->pc == 0x5385A8u) {
        ctx->pc = 0x5385A8u;
            // 0x5385a8: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->pc = 0x5385ACu;
        goto label_5385ac;
    }
    ctx->pc = 0x5385A4u;
    {
        const bool branch_taken_0x5385a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5385A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5385A4u;
            // 0x5385a8: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5385a4) {
            ctx->pc = 0x538580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_538580;
        }
    }
    ctx->pc = 0x5385ACu;
label_5385ac:
    // 0x5385ac: 0xc040180  jal         func_100600
label_5385b0:
    if (ctx->pc == 0x5385B0u) {
        ctx->pc = 0x5385B0u;
            // 0x5385b0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x5385B4u;
        goto label_5385b4;
    }
    ctx->pc = 0x5385ACu;
    SET_GPR_U32(ctx, 31, 0x5385B4u);
    ctx->pc = 0x5385B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5385ACu;
            // 0x5385b0: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5385B4u; }
        if (ctx->pc != 0x5385B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5385B4u; }
        if (ctx->pc != 0x5385B4u) { return; }
    }
    ctx->pc = 0x5385B4u;
label_5385b4:
    // 0x5385b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5385b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5385b8:
    // 0x5385b8: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_5385bc:
    if (ctx->pc == 0x5385BCu) {
        ctx->pc = 0x5385BCu;
            // 0x5385bc: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x5385C0u;
        goto label_5385c0;
    }
    ctx->pc = 0x5385B8u;
    {
        const bool branch_taken_0x5385b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5385b8) {
            ctx->pc = 0x5385BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5385B8u;
            // 0x5385bc: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5385F8u;
            goto label_5385f8;
        }
    }
    ctx->pc = 0x5385C0u;
label_5385c0:
    // 0x5385c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5385c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5385c4:
    // 0x5385c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5385c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5385c8:
    // 0x5385c8: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x5385c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_5385cc:
    // 0x5385cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x5385ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_5385d0:
    // 0x5385d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x5385d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_5385d4:
    // 0x5385d4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x5385d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_5385d8:
    // 0x5385d8: 0xc040138  jal         func_1004E0
label_5385dc:
    if (ctx->pc == 0x5385DCu) {
        ctx->pc = 0x5385DCu;
            // 0x5385dc: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5385E0u;
        goto label_5385e0;
    }
    ctx->pc = 0x5385D8u;
    SET_GPR_U32(ctx, 31, 0x5385E0u);
    ctx->pc = 0x5385DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5385D8u;
            // 0x5385dc: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5385E0u; }
        if (ctx->pc != 0x5385E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5385E0u; }
        if (ctx->pc != 0x5385E0u) { return; }
    }
    ctx->pc = 0x5385E0u;
label_5385e0:
    // 0x5385e0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x5385e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_5385e4:
    // 0x5385e4: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x5385e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_5385e8:
    // 0x5385e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5385e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5385ec:
    // 0x5385ec: 0xc04a576  jal         func_1295D8
label_5385f0:
    if (ctx->pc == 0x5385F0u) {
        ctx->pc = 0x5385F0u;
            // 0x5385f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5385F4u;
        goto label_5385f4;
    }
    ctx->pc = 0x5385ECu;
    SET_GPR_U32(ctx, 31, 0x5385F4u);
    ctx->pc = 0x5385F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5385ECu;
            // 0x5385f0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5385F4u; }
        if (ctx->pc != 0x5385F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5385F4u; }
        if (ctx->pc != 0x5385F4u) { return; }
    }
    ctx->pc = 0x5385F4u;
label_5385f4:
    // 0x5385f4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x5385f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_5385f8:
    // 0x5385f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5385f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5385fc:
    // 0x5385fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x5385fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_538600:
    // 0x538600: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x538600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_538604:
    // 0x538604: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x538604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_538608:
    // 0x538608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x538608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53860c:
    // 0x53860c: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x53860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_538610:
    // 0x538610: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x538610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_538614:
    // 0x538614: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x538614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_538618:
    // 0x538618: 0x344617ae  ori         $a2, $v0, 0x17AE
    ctx->pc = 0x538618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6062);
label_53861c:
    // 0x53861c: 0xc122cd8  jal         func_48B360
label_538620:
    if (ctx->pc == 0x538620u) {
        ctx->pc = 0x538620u;
            // 0x538620: 0xae110490  sw          $s1, 0x490($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 17));
        ctx->pc = 0x538624u;
        goto label_538624;
    }
    ctx->pc = 0x53861Cu;
    SET_GPR_U32(ctx, 31, 0x538624u);
    ctx->pc = 0x538620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53861Cu;
            // 0x538620: 0xae110490  sw          $s1, 0x490($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1168), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538624u; }
        if (ctx->pc != 0x538624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x538624u; }
        if (ctx->pc != 0x538624u) { return; }
    }
    ctx->pc = 0x538624u;
label_538624:
    // 0x538624: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x538624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_538628:
    // 0x538628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x538628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53862c:
    // 0x53862c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53862cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_538630:
    // 0x538630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x538630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_538634:
    // 0x538634: 0x3e00008  jr          $ra
label_538638:
    if (ctx->pc == 0x538638u) {
        ctx->pc = 0x538638u;
            // 0x538638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x53863Cu;
        goto label_53863c;
    }
    ctx->pc = 0x538634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538634u;
            // 0x538638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53863Cu;
label_53863c:
    // 0x53863c: 0x0  nop
    ctx->pc = 0x53863cu;
    // NOP
label_538640:
    // 0x538640: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x538640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_538644:
    // 0x538644: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x538644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_538648:
    // 0x538648: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x538648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_53864c:
    // 0x53864c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x53864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_538650:
    // 0x538650: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x538650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_538654:
    // 0x538654: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x538654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_538658:
    // 0x538658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x538658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_53865c:
    // 0x53865c: 0x0  nop
    ctx->pc = 0x53865cu;
    // NOP
label_538660:
    // 0x538660: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x538660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_538664:
    // 0x538664: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x538664u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_538668:
    // 0x538668: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x538668u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_53866c:
    // 0x53866c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x53866cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_538670:
    // 0x538670: 0x3e00008  jr          $ra
label_538674:
    if (ctx->pc == 0x538674u) {
        ctx->pc = 0x538674u;
            // 0x538674: 0xac830494  sw          $v1, 0x494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
        ctx->pc = 0x538678u;
        goto label_538678;
    }
    ctx->pc = 0x538670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x538674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x538670u;
            // 0x538674: 0xac830494  sw          $v1, 0x494($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x538678u;
label_538678:
    // 0x538678: 0x0  nop
    ctx->pc = 0x538678u;
    // NOP
label_53867c:
    // 0x53867c: 0x0  nop
    ctx->pc = 0x53867cu;
    // NOP
}
