#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003483F0
// Address: 0x3483f0 - 0x348730
void sub_003483F0_0x3483f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003483F0_0x3483f0");
#endif

    switch (ctx->pc) {
        case 0x3483f0u: goto label_3483f0;
        case 0x3483f4u: goto label_3483f4;
        case 0x3483f8u: goto label_3483f8;
        case 0x3483fcu: goto label_3483fc;
        case 0x348400u: goto label_348400;
        case 0x348404u: goto label_348404;
        case 0x348408u: goto label_348408;
        case 0x34840cu: goto label_34840c;
        case 0x348410u: goto label_348410;
        case 0x348414u: goto label_348414;
        case 0x348418u: goto label_348418;
        case 0x34841cu: goto label_34841c;
        case 0x348420u: goto label_348420;
        case 0x348424u: goto label_348424;
        case 0x348428u: goto label_348428;
        case 0x34842cu: goto label_34842c;
        case 0x348430u: goto label_348430;
        case 0x348434u: goto label_348434;
        case 0x348438u: goto label_348438;
        case 0x34843cu: goto label_34843c;
        case 0x348440u: goto label_348440;
        case 0x348444u: goto label_348444;
        case 0x348448u: goto label_348448;
        case 0x34844cu: goto label_34844c;
        case 0x348450u: goto label_348450;
        case 0x348454u: goto label_348454;
        case 0x348458u: goto label_348458;
        case 0x34845cu: goto label_34845c;
        case 0x348460u: goto label_348460;
        case 0x348464u: goto label_348464;
        case 0x348468u: goto label_348468;
        case 0x34846cu: goto label_34846c;
        case 0x348470u: goto label_348470;
        case 0x348474u: goto label_348474;
        case 0x348478u: goto label_348478;
        case 0x34847cu: goto label_34847c;
        case 0x348480u: goto label_348480;
        case 0x348484u: goto label_348484;
        case 0x348488u: goto label_348488;
        case 0x34848cu: goto label_34848c;
        case 0x348490u: goto label_348490;
        case 0x348494u: goto label_348494;
        case 0x348498u: goto label_348498;
        case 0x34849cu: goto label_34849c;
        case 0x3484a0u: goto label_3484a0;
        case 0x3484a4u: goto label_3484a4;
        case 0x3484a8u: goto label_3484a8;
        case 0x3484acu: goto label_3484ac;
        case 0x3484b0u: goto label_3484b0;
        case 0x3484b4u: goto label_3484b4;
        case 0x3484b8u: goto label_3484b8;
        case 0x3484bcu: goto label_3484bc;
        case 0x3484c0u: goto label_3484c0;
        case 0x3484c4u: goto label_3484c4;
        case 0x3484c8u: goto label_3484c8;
        case 0x3484ccu: goto label_3484cc;
        case 0x3484d0u: goto label_3484d0;
        case 0x3484d4u: goto label_3484d4;
        case 0x3484d8u: goto label_3484d8;
        case 0x3484dcu: goto label_3484dc;
        case 0x3484e0u: goto label_3484e0;
        case 0x3484e4u: goto label_3484e4;
        case 0x3484e8u: goto label_3484e8;
        case 0x3484ecu: goto label_3484ec;
        case 0x3484f0u: goto label_3484f0;
        case 0x3484f4u: goto label_3484f4;
        case 0x3484f8u: goto label_3484f8;
        case 0x3484fcu: goto label_3484fc;
        case 0x348500u: goto label_348500;
        case 0x348504u: goto label_348504;
        case 0x348508u: goto label_348508;
        case 0x34850cu: goto label_34850c;
        case 0x348510u: goto label_348510;
        case 0x348514u: goto label_348514;
        case 0x348518u: goto label_348518;
        case 0x34851cu: goto label_34851c;
        case 0x348520u: goto label_348520;
        case 0x348524u: goto label_348524;
        case 0x348528u: goto label_348528;
        case 0x34852cu: goto label_34852c;
        case 0x348530u: goto label_348530;
        case 0x348534u: goto label_348534;
        case 0x348538u: goto label_348538;
        case 0x34853cu: goto label_34853c;
        case 0x348540u: goto label_348540;
        case 0x348544u: goto label_348544;
        case 0x348548u: goto label_348548;
        case 0x34854cu: goto label_34854c;
        case 0x348550u: goto label_348550;
        case 0x348554u: goto label_348554;
        case 0x348558u: goto label_348558;
        case 0x34855cu: goto label_34855c;
        case 0x348560u: goto label_348560;
        case 0x348564u: goto label_348564;
        case 0x348568u: goto label_348568;
        case 0x34856cu: goto label_34856c;
        case 0x348570u: goto label_348570;
        case 0x348574u: goto label_348574;
        case 0x348578u: goto label_348578;
        case 0x34857cu: goto label_34857c;
        case 0x348580u: goto label_348580;
        case 0x348584u: goto label_348584;
        case 0x348588u: goto label_348588;
        case 0x34858cu: goto label_34858c;
        case 0x348590u: goto label_348590;
        case 0x348594u: goto label_348594;
        case 0x348598u: goto label_348598;
        case 0x34859cu: goto label_34859c;
        case 0x3485a0u: goto label_3485a0;
        case 0x3485a4u: goto label_3485a4;
        case 0x3485a8u: goto label_3485a8;
        case 0x3485acu: goto label_3485ac;
        case 0x3485b0u: goto label_3485b0;
        case 0x3485b4u: goto label_3485b4;
        case 0x3485b8u: goto label_3485b8;
        case 0x3485bcu: goto label_3485bc;
        case 0x3485c0u: goto label_3485c0;
        case 0x3485c4u: goto label_3485c4;
        case 0x3485c8u: goto label_3485c8;
        case 0x3485ccu: goto label_3485cc;
        case 0x3485d0u: goto label_3485d0;
        case 0x3485d4u: goto label_3485d4;
        case 0x3485d8u: goto label_3485d8;
        case 0x3485dcu: goto label_3485dc;
        case 0x3485e0u: goto label_3485e0;
        case 0x3485e4u: goto label_3485e4;
        case 0x3485e8u: goto label_3485e8;
        case 0x3485ecu: goto label_3485ec;
        case 0x3485f0u: goto label_3485f0;
        case 0x3485f4u: goto label_3485f4;
        case 0x3485f8u: goto label_3485f8;
        case 0x3485fcu: goto label_3485fc;
        case 0x348600u: goto label_348600;
        case 0x348604u: goto label_348604;
        case 0x348608u: goto label_348608;
        case 0x34860cu: goto label_34860c;
        case 0x348610u: goto label_348610;
        case 0x348614u: goto label_348614;
        case 0x348618u: goto label_348618;
        case 0x34861cu: goto label_34861c;
        case 0x348620u: goto label_348620;
        case 0x348624u: goto label_348624;
        case 0x348628u: goto label_348628;
        case 0x34862cu: goto label_34862c;
        case 0x348630u: goto label_348630;
        case 0x348634u: goto label_348634;
        case 0x348638u: goto label_348638;
        case 0x34863cu: goto label_34863c;
        case 0x348640u: goto label_348640;
        case 0x348644u: goto label_348644;
        case 0x348648u: goto label_348648;
        case 0x34864cu: goto label_34864c;
        case 0x348650u: goto label_348650;
        case 0x348654u: goto label_348654;
        case 0x348658u: goto label_348658;
        case 0x34865cu: goto label_34865c;
        case 0x348660u: goto label_348660;
        case 0x348664u: goto label_348664;
        case 0x348668u: goto label_348668;
        case 0x34866cu: goto label_34866c;
        case 0x348670u: goto label_348670;
        case 0x348674u: goto label_348674;
        case 0x348678u: goto label_348678;
        case 0x34867cu: goto label_34867c;
        case 0x348680u: goto label_348680;
        case 0x348684u: goto label_348684;
        case 0x348688u: goto label_348688;
        case 0x34868cu: goto label_34868c;
        case 0x348690u: goto label_348690;
        case 0x348694u: goto label_348694;
        case 0x348698u: goto label_348698;
        case 0x34869cu: goto label_34869c;
        case 0x3486a0u: goto label_3486a0;
        case 0x3486a4u: goto label_3486a4;
        case 0x3486a8u: goto label_3486a8;
        case 0x3486acu: goto label_3486ac;
        case 0x3486b0u: goto label_3486b0;
        case 0x3486b4u: goto label_3486b4;
        case 0x3486b8u: goto label_3486b8;
        case 0x3486bcu: goto label_3486bc;
        case 0x3486c0u: goto label_3486c0;
        case 0x3486c4u: goto label_3486c4;
        case 0x3486c8u: goto label_3486c8;
        case 0x3486ccu: goto label_3486cc;
        case 0x3486d0u: goto label_3486d0;
        case 0x3486d4u: goto label_3486d4;
        case 0x3486d8u: goto label_3486d8;
        case 0x3486dcu: goto label_3486dc;
        case 0x3486e0u: goto label_3486e0;
        case 0x3486e4u: goto label_3486e4;
        case 0x3486e8u: goto label_3486e8;
        case 0x3486ecu: goto label_3486ec;
        case 0x3486f0u: goto label_3486f0;
        case 0x3486f4u: goto label_3486f4;
        case 0x3486f8u: goto label_3486f8;
        case 0x3486fcu: goto label_3486fc;
        case 0x348700u: goto label_348700;
        case 0x348704u: goto label_348704;
        case 0x348708u: goto label_348708;
        case 0x34870cu: goto label_34870c;
        case 0x348710u: goto label_348710;
        case 0x348714u: goto label_348714;
        case 0x348718u: goto label_348718;
        case 0x34871cu: goto label_34871c;
        case 0x348720u: goto label_348720;
        case 0x348724u: goto label_348724;
        case 0x348728u: goto label_348728;
        case 0x34872cu: goto label_34872c;
        default: break;
    }

    ctx->pc = 0x3483f0u;

label_3483f0:
    // 0x3483f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3483f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3483f4:
    // 0x3483f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3483f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3483f8:
    // 0x3483f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3483f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3483fc:
    // 0x3483fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3483fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_348400:
    // 0x348400: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x348400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348404:
    // 0x348404: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_348408:
    // 0x348408: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x348408u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34840c:
    // 0x34840c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34840cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348410:
    // 0x348410: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x348410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348414:
    // 0x348414: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x348414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_348418:
    // 0x348418: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x348418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_34841c:
    // 0x34841c: 0x266301f0  addiu       $v1, $s3, 0x1F0
    ctx->pc = 0x34841cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 496));
label_348420:
    // 0x348420: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x348420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_348424:
    // 0x348424: 0xac920080  sw          $s2, 0x80($a0)
    ctx->pc = 0x348424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 18));
label_348428:
    // 0x348428: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x348428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
label_34842c:
    // 0x34842c: 0xac830088  sw          $v1, 0x88($a0)
    ctx->pc = 0x34842cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 3));
label_348430:
    // 0x348430: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x348430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_348434:
    // 0x348434: 0xac820090  sw          $v0, 0x90($a0)
    ctx->pc = 0x348434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 2));
label_348438:
    // 0x348438: 0x8e030230  lw          $v1, 0x230($s0)
    ctx->pc = 0x348438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_34843c:
    // 0x34843c: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x34843cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_348440:
    // 0x348440: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x348440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_348444:
    // 0x348444: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x348444u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_348448:
    // 0x348448: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x348448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
label_34844c:
    // 0x34844c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34844cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348450:
    // 0x348450: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x348450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_348454:
    // 0x348454: 0x320f809  jalr        $t9
label_348458:
    if (ctx->pc == 0x348458u) {
        ctx->pc = 0x34845Cu;
        goto label_34845c;
    }
    ctx->pc = 0x348454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34845Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x34845Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34845Cu; }
            if (ctx->pc != 0x34845Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34845Cu;
label_34845c:
    // 0x34845c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x34845cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_348460:
    // 0x348460: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x348460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_348464:
    // 0x348464: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_348468:
    if (ctx->pc == 0x348468u) {
        ctx->pc = 0x348468u;
            // 0x348468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x34846Cu;
        goto label_34846c;
    }
    ctx->pc = 0x348464u;
    {
        const bool branch_taken_0x348464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x348468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348464u;
            // 0x348468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348464) {
            ctx->pc = 0x348418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_348418;
        }
    }
    ctx->pc = 0x34846Cu;
label_34846c:
    // 0x34846c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34846cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_348470:
    // 0x348470: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x348470u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_348474:
    // 0x348474: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348474u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_348478:
    // 0x348478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34847c:
    // 0x34847c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34847cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348480:
    // 0x348480: 0x3e00008  jr          $ra
label_348484:
    if (ctx->pc == 0x348484u) {
        ctx->pc = 0x348484u;
            // 0x348484: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x348488u;
        goto label_348488;
    }
    ctx->pc = 0x348480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348480u;
            // 0x348484: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348488u;
label_348488:
    // 0x348488: 0x0  nop
    ctx->pc = 0x348488u;
    // NOP
label_34848c:
    // 0x34848c: 0x0  nop
    ctx->pc = 0x34848cu;
    // NOP
label_348490:
    // 0x348490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x348490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_348494:
    // 0x348494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x348494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_348498:
    // 0x348498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34849c:
    // 0x34849c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3484a0:
    // 0x3484a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3484a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3484a4:
    // 0x3484a4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_3484a8:
    if (ctx->pc == 0x3484A8u) {
        ctx->pc = 0x3484A8u;
            // 0x3484a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3484ACu;
        goto label_3484ac;
    }
    ctx->pc = 0x3484A4u;
    {
        const bool branch_taken_0x3484a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3484A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3484A4u;
            // 0x3484a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484a4) {
            ctx->pc = 0x348508u;
            goto label_348508;
        }
    }
    ctx->pc = 0x3484ACu;
label_3484ac:
    // 0x3484ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3484acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3484b0:
    // 0x3484b0: 0x24425980  addiu       $v0, $v0, 0x5980
    ctx->pc = 0x3484b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22912));
label_3484b4:
    // 0x3484b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3484b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3484b8:
    // 0x3484b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3484b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3484bc:
    // 0x3484bc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3484bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3484c0:
    // 0x3484c0: 0x320f809  jalr        $t9
label_3484c4:
    if (ctx->pc == 0x3484C4u) {
        ctx->pc = 0x3484C8u;
        goto label_3484c8;
    }
    ctx->pc = 0x3484C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3484C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3484C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3484C8u; }
            if (ctx->pc != 0x3484C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3484C8u;
label_3484c8:
    // 0x3484c8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_3484cc:
    if (ctx->pc == 0x3484CCu) {
        ctx->pc = 0x3484CCu;
            // 0x3484cc: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x3484D0u;
        goto label_3484d0;
    }
    ctx->pc = 0x3484C8u;
    {
        const bool branch_taken_0x3484c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484c8) {
            ctx->pc = 0x3484CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3484C8u;
            // 0x3484cc: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3484F4u;
            goto label_3484f4;
        }
    }
    ctx->pc = 0x3484D0u;
label_3484d0:
    // 0x3484d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3484d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3484d4:
    // 0x3484d4: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x3484d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3484d8:
    // 0x3484d8: 0x24632e00  addiu       $v1, $v1, 0x2E00
    ctx->pc = 0x3484d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11776));
label_3484dc:
    // 0x3484dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3484e0:
    if (ctx->pc == 0x3484E0u) {
        ctx->pc = 0x3484E0u;
            // 0x3484e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3484E4u;
        goto label_3484e4;
    }
    ctx->pc = 0x3484DCu;
    {
        const bool branch_taken_0x3484dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3484E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3484DCu;
            // 0x3484e0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3484dc) {
            ctx->pc = 0x3484F0u;
            goto label_3484f0;
        }
    }
    ctx->pc = 0x3484E4u;
label_3484e4:
    // 0x3484e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3484e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3484e8:
    // 0x3484e8: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x3484e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_3484ec:
    // 0x3484ec: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x3484ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_3484f0:
    // 0x3484f0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3484f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3484f4:
    // 0x3484f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3484f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3484f8:
    // 0x3484f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3484fc:
    if (ctx->pc == 0x3484FCu) {
        ctx->pc = 0x3484FCu;
            // 0x3484fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348500u;
        goto label_348500;
    }
    ctx->pc = 0x3484F8u;
    {
        const bool branch_taken_0x3484f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3484f8) {
            ctx->pc = 0x3484FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3484F8u;
            // 0x3484fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34850Cu;
            goto label_34850c;
        }
    }
    ctx->pc = 0x348500u;
label_348500:
    // 0x348500: 0xc0400a8  jal         func_1002A0
label_348504:
    if (ctx->pc == 0x348504u) {
        ctx->pc = 0x348504u;
            // 0x348504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348508u;
        goto label_348508;
    }
    ctx->pc = 0x348500u;
    SET_GPR_U32(ctx, 31, 0x348508u);
    ctx->pc = 0x348504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348500u;
            // 0x348504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348508u; }
        if (ctx->pc != 0x348508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348508u; }
        if (ctx->pc != 0x348508u) { return; }
    }
    ctx->pc = 0x348508u;
label_348508:
    // 0x348508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x348508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_34850c:
    // 0x34850c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34850cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_348510:
    // 0x348510: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_348514:
    // 0x348514: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348518:
    // 0x348518: 0x3e00008  jr          $ra
label_34851c:
    if (ctx->pc == 0x34851Cu) {
        ctx->pc = 0x34851Cu;
            // 0x34851c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x348520u;
        goto label_348520;
    }
    ctx->pc = 0x348518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34851Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348518u;
            // 0x34851c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348520u;
label_348520:
    // 0x348520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348524:
    // 0x348524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_348528:
    // 0x348528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34852c:
    // 0x34852c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34852cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348530:
    // 0x348530: 0x8c840238  lw          $a0, 0x238($a0)
    ctx->pc = 0x348530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 568)));
label_348534:
    // 0x348534: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_348538:
    if (ctx->pc == 0x348538u) {
        ctx->pc = 0x348538u;
            // 0x348538: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
        ctx->pc = 0x34853Cu;
        goto label_34853c;
    }
    ctx->pc = 0x348534u;
    {
        const bool branch_taken_0x348534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348534) {
            ctx->pc = 0x348538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348534u;
            // 0x348538: 0xae000238  sw          $zero, 0x238($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348550u;
            goto label_348550;
        }
    }
    ctx->pc = 0x34853Cu;
label_34853c:
    // 0x34853c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34853cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348540:
    // 0x348540: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x348540u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_348544:
    // 0x348544: 0x320f809  jalr        $t9
label_348548:
    if (ctx->pc == 0x348548u) {
        ctx->pc = 0x348548u;
            // 0x348548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x34854Cu;
        goto label_34854c;
    }
    ctx->pc = 0x348544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34854Cu);
        ctx->pc = 0x348548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348544u;
            // 0x348548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34854Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34854Cu; }
            if (ctx->pc != 0x34854Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34854Cu;
label_34854c:
    // 0x34854c: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x34854cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
label_348550:
    // 0x348550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x348550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_348554:
    // 0x348554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348558:
    // 0x348558: 0x3e00008  jr          $ra
label_34855c:
    if (ctx->pc == 0x34855Cu) {
        ctx->pc = 0x34855Cu;
            // 0x34855c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x348560u;
        goto label_348560;
    }
    ctx->pc = 0x348558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348558u;
            // 0x34855c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348560u;
label_348560:
    // 0x348560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x348560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_348564:
    // 0x348564: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x348564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_348568:
    // 0x348568: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x348568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_34856c:
    // 0x34856c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x34856cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
label_348570:
    // 0x348570: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x348570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_348574:
    // 0x348574: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x348574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_348578:
    // 0x348578: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x348578u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34857c:
    // 0x34857c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34857cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_348580:
    // 0x348580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x348580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_348584:
    // 0x348584: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_348588:
    // 0x348588: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_34858c:
    // 0x34858c: 0x26900030  addiu       $s0, $s4, 0x30
    ctx->pc = 0x34858cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_348590:
    // 0x348590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x348590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_348594:
    // 0x348594: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x348594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_348598:
    // 0x348598: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x348598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_34859c:
    // 0x34859c: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x34859cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
label_3485a0:
    // 0x3485a0: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x3485a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_3485a4:
    // 0x3485a4: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x3485a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
label_3485a8:
    // 0x3485a8: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x3485a8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
label_3485ac:
    // 0x3485ac: 0xc04c968  jal         func_1325A0
label_3485b0:
    if (ctx->pc == 0x3485B0u) {
        ctx->pc = 0x3485B0u;
            // 0x3485b0: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x3485B4u;
        goto label_3485b4;
    }
    ctx->pc = 0x3485ACu;
    SET_GPR_U32(ctx, 31, 0x3485B4u);
    ctx->pc = 0x3485B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3485ACu;
            // 0x3485b0: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485B4u; }
        if (ctx->pc != 0x3485B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485B4u; }
        if (ctx->pc != 0x3485B4u) { return; }
    }
    ctx->pc = 0x3485B4u;
label_3485b4:
    // 0x3485b4: 0xc04c968  jal         func_1325A0
label_3485b8:
    if (ctx->pc == 0x3485B8u) {
        ctx->pc = 0x3485B8u;
            // 0x3485b8: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x3485BCu;
        goto label_3485bc;
    }
    ctx->pc = 0x3485B4u;
    SET_GPR_U32(ctx, 31, 0x3485BCu);
    ctx->pc = 0x3485B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3485B4u;
            // 0x3485b8: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485BCu; }
        if (ctx->pc != 0x3485BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485BCu; }
        if (ctx->pc != 0x3485BCu) { return; }
    }
    ctx->pc = 0x3485BCu;
label_3485bc:
    // 0x3485bc: 0xc04c968  jal         func_1325A0
label_3485c0:
    if (ctx->pc == 0x3485C0u) {
        ctx->pc = 0x3485C0u;
            // 0x3485c0: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x3485C4u;
        goto label_3485c4;
    }
    ctx->pc = 0x3485BCu;
    SET_GPR_U32(ctx, 31, 0x3485C4u);
    ctx->pc = 0x3485C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3485BCu;
            // 0x3485c0: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485C4u; }
        if (ctx->pc != 0x3485C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485C4u; }
        if (ctx->pc != 0x3485C4u) { return; }
    }
    ctx->pc = 0x3485C4u;
label_3485c4:
    // 0x3485c4: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x3485c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_3485c8:
    // 0x3485c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3485c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3485cc:
    // 0x3485cc: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x3485ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_3485d0:
    // 0x3485d0: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x3485d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_3485d4:
    // 0x3485d4: 0xc04f26c  jal         func_13C9B0
label_3485d8:
    if (ctx->pc == 0x3485D8u) {
        ctx->pc = 0x3485D8u;
            // 0x3485d8: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x3485DCu;
        goto label_3485dc;
    }
    ctx->pc = 0x3485D4u;
    SET_GPR_U32(ctx, 31, 0x3485DCu);
    ctx->pc = 0x3485D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3485D4u;
            // 0x3485d8: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485DCu; }
        if (ctx->pc != 0x3485DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485DCu; }
        if (ctx->pc != 0x3485DCu) { return; }
    }
    ctx->pc = 0x3485DCu;
label_3485dc:
    // 0x3485dc: 0xc04c968  jal         func_1325A0
label_3485e0:
    if (ctx->pc == 0x3485E0u) {
        ctx->pc = 0x3485E0u;
            // 0x3485e0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x3485E4u;
        goto label_3485e4;
    }
    ctx->pc = 0x3485DCu;
    SET_GPR_U32(ctx, 31, 0x3485E4u);
    ctx->pc = 0x3485E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3485DCu;
            // 0x3485e0: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485E4u; }
        if (ctx->pc != 0x3485E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485E4u; }
        if (ctx->pc != 0x3485E4u) { return; }
    }
    ctx->pc = 0x3485E4u;
label_3485e4:
    // 0x3485e4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3485e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3485e8:
    // 0x3485e8: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3485e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3485ec:
    // 0x3485ec: 0xc04cc04  jal         func_133010
label_3485f0:
    if (ctx->pc == 0x3485F0u) {
        ctx->pc = 0x3485F0u;
            // 0x3485f0: 0x24a52fc0  addiu       $a1, $a1, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12224));
        ctx->pc = 0x3485F4u;
        goto label_3485f4;
    }
    ctx->pc = 0x3485ECu;
    SET_GPR_U32(ctx, 31, 0x3485F4u);
    ctx->pc = 0x3485F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3485ECu;
            // 0x3485f0: 0x24a52fc0  addiu       $a1, $a1, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485F4u; }
        if (ctx->pc != 0x3485F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3485F4u; }
        if (ctx->pc != 0x3485F4u) { return; }
    }
    ctx->pc = 0x3485F4u;
label_3485f4:
    // 0x3485f4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x3485f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
label_3485f8:
    // 0x3485f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3485f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3485fc:
    // 0x3485fc: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x3485fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
label_348600:
    // 0x348600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x348600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_348604:
    // 0x348604: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x348604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
label_348608:
    // 0x348608: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x348608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_34860c:
    // 0x34860c: 0xa6000110  sh          $zero, 0x110($s0)
    ctx->pc = 0x34860cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 0));
label_348610:
    // 0x348610: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x348610u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_348614:
    // 0x348614: 0xa6000112  sh          $zero, 0x112($s0)
    ctx->pc = 0x348614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 274), (uint16_t)GPR_U32(ctx, 0));
label_348618:
    // 0x348618: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x348618u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_34861c:
    // 0x34861c: 0xa6020114  sh          $v0, 0x114($s0)
    ctx->pc = 0x34861cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 2));
label_348620:
    // 0x348620: 0xc04cbd8  jal         func_132F60
label_348624:
    if (ctx->pc == 0x348624u) {
        ctx->pc = 0x348624u;
            // 0x348624: 0xa6000116  sh          $zero, 0x116($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x348628u;
        goto label_348628;
    }
    ctx->pc = 0x348620u;
    SET_GPR_U32(ctx, 31, 0x348628u);
    ctx->pc = 0x348624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348620u;
            // 0x348624: 0xa6000116  sh          $zero, 0x116($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348628u; }
        if (ctx->pc != 0x348628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348628u; }
        if (ctx->pc != 0x348628u) { return; }
    }
    ctx->pc = 0x348628u;
label_348628:
    // 0x348628: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x348628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_34862c:
    // 0x34862c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x34862cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_348630:
    // 0x348630: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x348630u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_348634:
    // 0x348634: 0xc04cbd8  jal         func_132F60
label_348638:
    if (ctx->pc == 0x348638u) {
        ctx->pc = 0x348638u;
            // 0x348638: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x34863Cu;
        goto label_34863c;
    }
    ctx->pc = 0x348634u;
    SET_GPR_U32(ctx, 31, 0x34863Cu);
    ctx->pc = 0x348638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348634u;
            // 0x348638: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34863Cu; }
        if (ctx->pc != 0x34863Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34863Cu; }
        if (ctx->pc != 0x34863Cu) { return; }
    }
    ctx->pc = 0x34863Cu;
label_34863c:
    // 0x34863c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x34863cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348640:
    // 0x348640: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x348640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_348644:
    // 0x348644: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x348644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_348648:
    // 0x348648: 0xc04cbd8  jal         func_132F60
label_34864c:
    if (ctx->pc == 0x34864Cu) {
        ctx->pc = 0x34864Cu;
            // 0x34864c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x348650u;
        goto label_348650;
    }
    ctx->pc = 0x348648u;
    SET_GPR_U32(ctx, 31, 0x348650u);
    ctx->pc = 0x34864Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348648u;
            // 0x34864c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348650u; }
        if (ctx->pc != 0x348650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348650u; }
        if (ctx->pc != 0x348650u) { return; }
    }
    ctx->pc = 0x348650u;
label_348650:
    // 0x348650: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x348650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_348654:
    // 0x348654: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x348654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_348658:
    // 0x348658: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x348658u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_34865c:
    // 0x34865c: 0xc04cbd8  jal         func_132F60
label_348660:
    if (ctx->pc == 0x348660u) {
        ctx->pc = 0x348660u;
            // 0x348660: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x348664u;
        goto label_348664;
    }
    ctx->pc = 0x34865Cu;
    SET_GPR_U32(ctx, 31, 0x348664u);
    ctx->pc = 0x348660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34865Cu;
            // 0x348660: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348664u; }
        if (ctx->pc != 0x348664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348664u; }
        if (ctx->pc != 0x348664u) { return; }
    }
    ctx->pc = 0x348664u;
label_348664:
    // 0x348664: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x348664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_348668:
    // 0x348668: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x348668u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_34866c:
    // 0x34866c: 0x24425980  addiu       $v0, $v0, 0x5980
    ctx->pc = 0x34866cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22912));
label_348670:
    // 0x348670: 0x268401f0  addiu       $a0, $s4, 0x1F0
    ctx->pc = 0x348670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 496));
label_348674:
    // 0x348674: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x348674u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_348678:
    // 0x348678: 0x24a52f80  addiu       $a1, $a1, 0x2F80
    ctx->pc = 0x348678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12160));
label_34867c:
    // 0x34867c: 0xc04cce8  jal         func_1333A0
label_348680:
    if (ctx->pc == 0x348680u) {
        ctx->pc = 0x348680u;
            // 0x348680: 0xae800238  sw          $zero, 0x238($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 568), GPR_U32(ctx, 0));
        ctx->pc = 0x348684u;
        goto label_348684;
    }
    ctx->pc = 0x34867Cu;
    SET_GPR_U32(ctx, 31, 0x348684u);
    ctx->pc = 0x348680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34867Cu;
            // 0x348680: 0xae800238  sw          $zero, 0x238($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348684u; }
        if (ctx->pc != 0x348684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348684u; }
        if (ctx->pc != 0x348684u) { return; }
    }
    ctx->pc = 0x348684u;
label_348684:
    // 0x348684: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x348684u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
label_348688:
    // 0x348688: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x348688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_34868c:
    // 0x34868c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34868cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348690:
    // 0x348690: 0x26521380  addiu       $s2, $s2, 0x1380
    ctx->pc = 0x348690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4992));
label_348694:
    // 0x348694: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x348694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_348698:
    // 0x348698: 0x26101400  addiu       $s0, $s0, 0x1400
    ctx->pc = 0x348698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5120));
label_34869c:
    // 0x34869c: 0xc040180  jal         func_100600
label_3486a0:
    if (ctx->pc == 0x3486A0u) {
        ctx->pc = 0x3486A0u;
            // 0x3486a0: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x3486A4u;
        goto label_3486a4;
    }
    ctx->pc = 0x34869Cu;
    SET_GPR_U32(ctx, 31, 0x3486A4u);
    ctx->pc = 0x3486A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34869Cu;
            // 0x3486a0: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3486A4u; }
        if (ctx->pc != 0x3486A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3486A4u; }
        if (ctx->pc != 0x3486A4u) { return; }
    }
    ctx->pc = 0x3486A4u;
label_3486a4:
    // 0x3486a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3486a8:
    if (ctx->pc == 0x3486A8u) {
        ctx->pc = 0x3486ACu;
        goto label_3486ac;
    }
    ctx->pc = 0x3486A4u;
    {
        const bool branch_taken_0x3486a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3486a4) {
            ctx->pc = 0x3486C0u;
            goto label_3486c0;
        }
    }
    ctx->pc = 0x3486ACu;
label_3486ac:
    // 0x3486ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3486acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3486b0:
    // 0x3486b0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3486b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3486b4:
    // 0x3486b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3486b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3486b8:
    // 0x3486b8: 0xc0c3f60  jal         func_30FD80
label_3486bc:
    if (ctx->pc == 0x3486BCu) {
        ctx->pc = 0x3486BCu;
            // 0x3486bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3486C0u;
        goto label_3486c0;
    }
    ctx->pc = 0x3486B8u;
    SET_GPR_U32(ctx, 31, 0x3486C0u);
    ctx->pc = 0x3486BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3486B8u;
            // 0x3486bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3486C0u; }
        if (ctx->pc != 0x3486C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3486C0u; }
        if (ctx->pc != 0x3486C0u) { return; }
    }
    ctx->pc = 0x3486C0u;
label_3486c0:
    // 0x3486c0: 0x2911821  addu        $v1, $s4, $s1
    ctx->pc = 0x3486c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_3486c4:
    // 0x3486c4: 0xac620230  sw          $v0, 0x230($v1)
    ctx->pc = 0x3486c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 560), GPR_U32(ctx, 2));
label_3486c8:
    // 0x3486c8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3486c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3486cc:
    // 0x3486cc: 0xac5000d4  sw          $s0, 0xD4($v0)
    ctx->pc = 0x3486ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 16));
label_3486d0:
    // 0x3486d0: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x3486d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3486d4:
    // 0x3486d4: 0x8c640230  lw          $a0, 0x230($v1)
    ctx->pc = 0x3486d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 560)));
label_3486d8:
    // 0x3486d8: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x3486d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
label_3486dc:
    // 0x3486dc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3486dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3486e0:
    // 0x3486e0: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x3486e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3486e4:
    // 0x3486e4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x3486e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3486e8:
    // 0x3486e8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3486e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_3486ec:
    // 0x3486ec: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3486f0:
    if (ctx->pc == 0x3486F0u) {
        ctx->pc = 0x3486F0u;
            // 0x3486f0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3486F4u;
        goto label_3486f4;
    }
    ctx->pc = 0x3486ECu;
    {
        const bool branch_taken_0x3486ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3486F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3486ECu;
            // 0x3486f0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3486ec) {
            ctx->pc = 0x34869Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34869c;
        }
    }
    ctx->pc = 0x3486F4u;
label_3486f4:
    // 0x3486f4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3486f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3486f8:
    // 0x3486f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3486f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3486fc:
    // 0x3486fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3486fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_348700:
    // 0x348700: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x348700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_348704:
    // 0x348704: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_348708:
    // 0x348708: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34870c:
    // 0x34870c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34870cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_348710:
    // 0x348710: 0x3e00008  jr          $ra
label_348714:
    if (ctx->pc == 0x348714u) {
        ctx->pc = 0x348714u;
            // 0x348714: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x348718u;
        goto label_348718;
    }
    ctx->pc = 0x348710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348710u;
            // 0x348714: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348718u;
label_348718:
    // 0x348718: 0x0  nop
    ctx->pc = 0x348718u;
    // NOP
label_34871c:
    // 0x34871c: 0x0  nop
    ctx->pc = 0x34871cu;
    // NOP
label_348720:
    // 0x348720: 0x3e00008  jr          $ra
label_348724:
    if (ctx->pc == 0x348724u) {
        ctx->pc = 0x348724u;
            // 0x348724: 0x24022b48  addiu       $v0, $zero, 0x2B48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11080));
        ctx->pc = 0x348728u;
        goto label_348728;
    }
    ctx->pc = 0x348720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348720u;
            // 0x348724: 0x24022b48  addiu       $v0, $zero, 0x2B48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348728u;
label_348728:
    // 0x348728: 0x0  nop
    ctx->pc = 0x348728u;
    // NOP
label_34872c:
    // 0x34872c: 0x0  nop
    ctx->pc = 0x34872cu;
    // NOP
}
