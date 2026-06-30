#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F9530
// Address: 0x3f9530 - 0x3f96a0
void sub_003F9530_0x3f9530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9530_0x3f9530");
#endif

    switch (ctx->pc) {
        case 0x3f9530u: goto label_3f9530;
        case 0x3f9534u: goto label_3f9534;
        case 0x3f9538u: goto label_3f9538;
        case 0x3f953cu: goto label_3f953c;
        case 0x3f9540u: goto label_3f9540;
        case 0x3f9544u: goto label_3f9544;
        case 0x3f9548u: goto label_3f9548;
        case 0x3f954cu: goto label_3f954c;
        case 0x3f9550u: goto label_3f9550;
        case 0x3f9554u: goto label_3f9554;
        case 0x3f9558u: goto label_3f9558;
        case 0x3f955cu: goto label_3f955c;
        case 0x3f9560u: goto label_3f9560;
        case 0x3f9564u: goto label_3f9564;
        case 0x3f9568u: goto label_3f9568;
        case 0x3f956cu: goto label_3f956c;
        case 0x3f9570u: goto label_3f9570;
        case 0x3f9574u: goto label_3f9574;
        case 0x3f9578u: goto label_3f9578;
        case 0x3f957cu: goto label_3f957c;
        case 0x3f9580u: goto label_3f9580;
        case 0x3f9584u: goto label_3f9584;
        case 0x3f9588u: goto label_3f9588;
        case 0x3f958cu: goto label_3f958c;
        case 0x3f9590u: goto label_3f9590;
        case 0x3f9594u: goto label_3f9594;
        case 0x3f9598u: goto label_3f9598;
        case 0x3f959cu: goto label_3f959c;
        case 0x3f95a0u: goto label_3f95a0;
        case 0x3f95a4u: goto label_3f95a4;
        case 0x3f95a8u: goto label_3f95a8;
        case 0x3f95acu: goto label_3f95ac;
        case 0x3f95b0u: goto label_3f95b0;
        case 0x3f95b4u: goto label_3f95b4;
        case 0x3f95b8u: goto label_3f95b8;
        case 0x3f95bcu: goto label_3f95bc;
        case 0x3f95c0u: goto label_3f95c0;
        case 0x3f95c4u: goto label_3f95c4;
        case 0x3f95c8u: goto label_3f95c8;
        case 0x3f95ccu: goto label_3f95cc;
        case 0x3f95d0u: goto label_3f95d0;
        case 0x3f95d4u: goto label_3f95d4;
        case 0x3f95d8u: goto label_3f95d8;
        case 0x3f95dcu: goto label_3f95dc;
        case 0x3f95e0u: goto label_3f95e0;
        case 0x3f95e4u: goto label_3f95e4;
        case 0x3f95e8u: goto label_3f95e8;
        case 0x3f95ecu: goto label_3f95ec;
        case 0x3f95f0u: goto label_3f95f0;
        case 0x3f95f4u: goto label_3f95f4;
        case 0x3f95f8u: goto label_3f95f8;
        case 0x3f95fcu: goto label_3f95fc;
        case 0x3f9600u: goto label_3f9600;
        case 0x3f9604u: goto label_3f9604;
        case 0x3f9608u: goto label_3f9608;
        case 0x3f960cu: goto label_3f960c;
        case 0x3f9610u: goto label_3f9610;
        case 0x3f9614u: goto label_3f9614;
        case 0x3f9618u: goto label_3f9618;
        case 0x3f961cu: goto label_3f961c;
        case 0x3f9620u: goto label_3f9620;
        case 0x3f9624u: goto label_3f9624;
        case 0x3f9628u: goto label_3f9628;
        case 0x3f962cu: goto label_3f962c;
        case 0x3f9630u: goto label_3f9630;
        case 0x3f9634u: goto label_3f9634;
        case 0x3f9638u: goto label_3f9638;
        case 0x3f963cu: goto label_3f963c;
        case 0x3f9640u: goto label_3f9640;
        case 0x3f9644u: goto label_3f9644;
        case 0x3f9648u: goto label_3f9648;
        case 0x3f964cu: goto label_3f964c;
        case 0x3f9650u: goto label_3f9650;
        case 0x3f9654u: goto label_3f9654;
        case 0x3f9658u: goto label_3f9658;
        case 0x3f965cu: goto label_3f965c;
        case 0x3f9660u: goto label_3f9660;
        case 0x3f9664u: goto label_3f9664;
        case 0x3f9668u: goto label_3f9668;
        case 0x3f966cu: goto label_3f966c;
        case 0x3f9670u: goto label_3f9670;
        case 0x3f9674u: goto label_3f9674;
        case 0x3f9678u: goto label_3f9678;
        case 0x3f967cu: goto label_3f967c;
        case 0x3f9680u: goto label_3f9680;
        case 0x3f9684u: goto label_3f9684;
        case 0x3f9688u: goto label_3f9688;
        case 0x3f968cu: goto label_3f968c;
        case 0x3f9690u: goto label_3f9690;
        case 0x3f9694u: goto label_3f9694;
        case 0x3f9698u: goto label_3f9698;
        case 0x3f969cu: goto label_3f969c;
        default: break;
    }

    ctx->pc = 0x3f9530u;

label_3f9530:
    // 0x3f9530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f9530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f9534:
    // 0x3f9534: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f9534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f9538:
    // 0x3f9538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f9538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f953c:
    // 0x3f953c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f9540:
    // 0x3f9540: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3f9540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f9544:
    // 0x3f9544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f9544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f9548:
    // 0x3f9548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3f9548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f954c:
    // 0x3f954c: 0x8e390020  lw          $t9, 0x20($s1)
    ctx->pc = 0x3f954cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3f9550:
    // 0x3f9550: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x3f9550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_3f9554:
    // 0x3f9554: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f9554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3f9558:
    // 0x3f9558: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3f9558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3f955c:
    // 0x3f955c: 0x320f809  jalr        $t9
label_3f9560:
    if (ctx->pc == 0x3F9560u) {
        ctx->pc = 0x3F9560u;
            // 0x3f9560: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->pc = 0x3F9564u;
        goto label_3f9564;
    }
    ctx->pc = 0x3F955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9564u);
        ctx->pc = 0x3F9560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F955Cu;
            // 0x3f9560: 0xafa4004c  sw          $a0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9564u; }
            if (ctx->pc != 0x3F9564u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9564u;
label_3f9564:
    // 0x3f9564: 0x2642000f  addiu       $v0, $s2, 0xF
    ctx->pc = 0x3f9564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 15));
label_3f9568:
    // 0x3f9568: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x3f9568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_3f956c:
    // 0x3f956c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3f956cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3f9570:
    // 0x3f9570: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3f9570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3f9574:
    // 0x3f9574: 0x244a0010  addiu       $t2, $v0, 0x10
    ctx->pc = 0x3f9574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3f9578:
    // 0x3f9578: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x3f9578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_3f957c:
    // 0x3f957c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3f957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3f9580:
    // 0x3f9580: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x3f9580u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f9584:
    // 0x3f9584: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f9584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f9588:
    // 0x3f9588: 0x10490039  beq         $v0, $t1, . + 4 + (0x39 << 2)
label_3f958c:
    if (ctx->pc == 0x3F958Cu) {
        ctx->pc = 0x3F958Cu;
            // 0x3f958c: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->pc = 0x3F9590u;
        goto label_3f9590;
    }
    ctx->pc = 0x3F9588u;
    {
        const bool branch_taken_0x3f9588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x3F958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9588u;
            // 0x3f958c: 0x852024  and         $a0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9588) {
            ctx->pc = 0x3F9670u;
            goto label_3f9670;
        }
    }
    ctx->pc = 0x3F9590u;
label_3f9590:
    // 0x3f9590: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x3f9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3f9594:
    // 0x3f9594: 0x604027  not         $t0, $v1
    ctx->pc = 0x3f9594u;
    SET_GPR_U64(ctx, 8, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3f9598:
    // 0x3f9598: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3f9598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f959c:
    // 0x3f959c: 0xea082b  sltu        $at, $a3, $t2
    ctx->pc = 0x3f959cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_3f95a0:
    // 0x3f95a0: 0x54200031  bnel        $at, $zero, . + 4 + (0x31 << 2)
label_3f95a4:
    if (ctx->pc == 0x3F95A4u) {
        ctx->pc = 0x3F95A4u;
            // 0x3f95a4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3F95A8u;
        goto label_3f95a8;
    }
    ctx->pc = 0x3F95A0u;
    {
        const bool branch_taken_0x3f95a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f95a0) {
            ctx->pc = 0x3F95A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F95A0u;
            // 0x3f95a4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F9668u;
            goto label_3f9668;
        }
    }
    ctx->pc = 0x3F95A8u;
label_3f95a8:
    // 0x3f95a8: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x3f95a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3f95ac:
    // 0x3f95ac: 0xca1823  subu        $v1, $a2, $t2
    ctx->pc = 0x3f95acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
label_3f95b0:
    // 0x3f95b0: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x3f95b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3f95b4:
    // 0x3f95b4: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x3f95b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
label_3f95b8:
    // 0x3f95b8: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3f95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3f95bc:
    // 0x3f95bc: 0x1432821  addu        $a1, $t2, $v1
    ctx->pc = 0x3f95bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_3f95c0:
    // 0x3f95c0: 0xa7082b  sltu        $at, $a1, $a3
    ctx->pc = 0x3f95c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3f95c4:
    // 0x3f95c4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_3f95c8:
    if (ctx->pc == 0x3F95C8u) {
        ctx->pc = 0x3F95CCu;
        goto label_3f95cc;
    }
    ctx->pc = 0x3F95C4u;
    {
        const bool branch_taken_0x3f95c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f95c4) {
            ctx->pc = 0x3F95F8u;
            goto label_3f95f8;
        }
    }
    ctx->pc = 0x3F95CCu;
label_3f95cc:
    // 0x3f95cc: 0xc52023  subu        $a0, $a2, $a1
    ctx->pc = 0x3f95ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_3f95d0:
    // 0x3f95d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3f95d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3f95d4:
    // 0x3f95d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3f95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f95d8:
    // 0x3f95d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3f95d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_3f95dc:
    // 0x3f95dc: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x3f95dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_3f95e0:
    // 0x3f95e0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x3f95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_3f95e4:
    // 0x3f95e4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x3f95e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_3f95e8:
    // 0x3f95e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f95ec:
    // 0x3f95ec: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3f95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f95f0:
    // 0x3f95f0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3f95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_3f95f4:
    // 0x3f95f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3f95f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f95f8:
    // 0x3f95f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f95f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f95fc:
    // 0x3f95fc: 0x65082b  sltu        $at, $v1, $a1
    ctx->pc = 0x3f95fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3f9600:
    // 0x3f9600: 0x14200018  bnez        $at, . + 4 + (0x18 << 2)
label_3f9604:
    if (ctx->pc == 0x3F9604u) {
        ctx->pc = 0x3F9608u;
        goto label_3f9608;
    }
    ctx->pc = 0x3F9600u;
    {
        const bool branch_taken_0x3f9600 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9600) {
            ctx->pc = 0x3F9664u;
            goto label_3f9664;
        }
    }
    ctx->pc = 0x3F9608u;
label_3f9608:
    // 0x3f9608: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f9608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f960c:
    // 0x3f960c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x3f960cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3f9610:
    // 0x3f9610: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3f9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3f9614:
    // 0x3f9614: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3f9614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3f9618:
    // 0x3f9618: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3f9618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_3f961c:
    // 0x3f961c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x3f961cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3f9620:
    // 0x3f9620: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3f9620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3f9624:
    // 0x3f9624: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3f9624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_3f9628:
    // 0x3f9628: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3f9628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3f962c:
    // 0x3f962c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x3f962cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f9630:
    // 0x3f9630: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3f9630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3f9634:
    // 0x3f9634: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3f9634u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f9638:
    // 0x3f9638: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x3f9638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_3f963c:
    // 0x3f963c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3f963cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3f9640:
    // 0x3f9640: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x3f9640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_3f9644:
    // 0x3f9644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3f9644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3f9648:
    // 0x3f9648: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x3f9648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_3f964c:
    // 0x3f964c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f964cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9650:
    // 0x3f9650: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f9650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f9654:
    // 0x3f9654: 0x320f809  jalr        $t9
label_3f9658:
    if (ctx->pc == 0x3F9658u) {
        ctx->pc = 0x3F965Cu;
        goto label_3f965c;
    }
    ctx->pc = 0x3F9654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F965Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F965Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F965Cu; }
            if (ctx->pc != 0x3F965Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F965Cu;
label_3f965c:
    // 0x3f965c: 0x1000000a  b           . + 4 + (0xA << 2)
label_3f9660:
    if (ctx->pc == 0x3F9660u) {
        ctx->pc = 0x3F9660u;
            // 0x3f9660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F9664u;
        goto label_3f9664;
    }
    ctx->pc = 0x3F965Cu;
    {
        const bool branch_taken_0x3f965c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F965Cu;
            // 0x3f9660: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f965c) {
            ctx->pc = 0x3F9688u;
            goto label_3f9688;
        }
    }
    ctx->pc = 0x3F9664u;
label_3f9664:
    // 0x3f9664: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3f9664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3f9668:
    // 0x3f9668: 0x5449ffcc  bnel        $v0, $t1, . + 4 + (-0x34 << 2)
label_3f966c:
    if (ctx->pc == 0x3F966Cu) {
        ctx->pc = 0x3F966Cu;
            // 0x3f966c: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x3F9670u;
        goto label_3f9670;
    }
    ctx->pc = 0x3F9668u;
    {
        const bool branch_taken_0x3f9668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3f9668) {
            ctx->pc = 0x3F966Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9668u;
            // 0x3f966c: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F959Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f959c;
        }
    }
    ctx->pc = 0x3F9670u;
label_3f9670:
    // 0x3f9670: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x3f9670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3f9674:
    // 0x3f9674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f9674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f9678:
    // 0x3f9678: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f9678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f967c:
    // 0x3f967c: 0x320f809  jalr        $t9
label_3f9680:
    if (ctx->pc == 0x3F9680u) {
        ctx->pc = 0x3F9684u;
        goto label_3f9684;
    }
    ctx->pc = 0x3F967Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F9684u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F9684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F9684u; }
            if (ctx->pc != 0x3F9684u) { return; }
        }
        }
    }
    ctx->pc = 0x3F9684u;
label_3f9684:
    // 0x3f9684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f9684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f9688:
    // 0x3f9688: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f9688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f968c:
    // 0x3f968c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f968cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f9690:
    // 0x3f9690: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f9690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f9694:
    // 0x3f9694: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f9694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f9698:
    // 0x3f9698: 0x3e00008  jr          $ra
label_3f969c:
    if (ctx->pc == 0x3F969Cu) {
        ctx->pc = 0x3F969Cu;
            // 0x3f969c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F96A0u;
        goto label_fallthrough_0x3f9698;
    }
    ctx->pc = 0x3F9698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F9698u;
            // 0x3f969c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f9698:
    ctx->pc = 0x3F96A0u;
}
