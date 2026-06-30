#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281590
// Address: 0x281590 - 0x2817a0
void sub_00281590_0x281590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281590_0x281590");
#endif

    switch (ctx->pc) {
        case 0x281590u: goto label_281590;
        case 0x281594u: goto label_281594;
        case 0x281598u: goto label_281598;
        case 0x28159cu: goto label_28159c;
        case 0x2815a0u: goto label_2815a0;
        case 0x2815a4u: goto label_2815a4;
        case 0x2815a8u: goto label_2815a8;
        case 0x2815acu: goto label_2815ac;
        case 0x2815b0u: goto label_2815b0;
        case 0x2815b4u: goto label_2815b4;
        case 0x2815b8u: goto label_2815b8;
        case 0x2815bcu: goto label_2815bc;
        case 0x2815c0u: goto label_2815c0;
        case 0x2815c4u: goto label_2815c4;
        case 0x2815c8u: goto label_2815c8;
        case 0x2815ccu: goto label_2815cc;
        case 0x2815d0u: goto label_2815d0;
        case 0x2815d4u: goto label_2815d4;
        case 0x2815d8u: goto label_2815d8;
        case 0x2815dcu: goto label_2815dc;
        case 0x2815e0u: goto label_2815e0;
        case 0x2815e4u: goto label_2815e4;
        case 0x2815e8u: goto label_2815e8;
        case 0x2815ecu: goto label_2815ec;
        case 0x2815f0u: goto label_2815f0;
        case 0x2815f4u: goto label_2815f4;
        case 0x2815f8u: goto label_2815f8;
        case 0x2815fcu: goto label_2815fc;
        case 0x281600u: goto label_281600;
        case 0x281604u: goto label_281604;
        case 0x281608u: goto label_281608;
        case 0x28160cu: goto label_28160c;
        case 0x281610u: goto label_281610;
        case 0x281614u: goto label_281614;
        case 0x281618u: goto label_281618;
        case 0x28161cu: goto label_28161c;
        case 0x281620u: goto label_281620;
        case 0x281624u: goto label_281624;
        case 0x281628u: goto label_281628;
        case 0x28162cu: goto label_28162c;
        case 0x281630u: goto label_281630;
        case 0x281634u: goto label_281634;
        case 0x281638u: goto label_281638;
        case 0x28163cu: goto label_28163c;
        case 0x281640u: goto label_281640;
        case 0x281644u: goto label_281644;
        case 0x281648u: goto label_281648;
        case 0x28164cu: goto label_28164c;
        case 0x281650u: goto label_281650;
        case 0x281654u: goto label_281654;
        case 0x281658u: goto label_281658;
        case 0x28165cu: goto label_28165c;
        case 0x281660u: goto label_281660;
        case 0x281664u: goto label_281664;
        case 0x281668u: goto label_281668;
        case 0x28166cu: goto label_28166c;
        case 0x281670u: goto label_281670;
        case 0x281674u: goto label_281674;
        case 0x281678u: goto label_281678;
        case 0x28167cu: goto label_28167c;
        case 0x281680u: goto label_281680;
        case 0x281684u: goto label_281684;
        case 0x281688u: goto label_281688;
        case 0x28168cu: goto label_28168c;
        case 0x281690u: goto label_281690;
        case 0x281694u: goto label_281694;
        case 0x281698u: goto label_281698;
        case 0x28169cu: goto label_28169c;
        case 0x2816a0u: goto label_2816a0;
        case 0x2816a4u: goto label_2816a4;
        case 0x2816a8u: goto label_2816a8;
        case 0x2816acu: goto label_2816ac;
        case 0x2816b0u: goto label_2816b0;
        case 0x2816b4u: goto label_2816b4;
        case 0x2816b8u: goto label_2816b8;
        case 0x2816bcu: goto label_2816bc;
        case 0x2816c0u: goto label_2816c0;
        case 0x2816c4u: goto label_2816c4;
        case 0x2816c8u: goto label_2816c8;
        case 0x2816ccu: goto label_2816cc;
        case 0x2816d0u: goto label_2816d0;
        case 0x2816d4u: goto label_2816d4;
        case 0x2816d8u: goto label_2816d8;
        case 0x2816dcu: goto label_2816dc;
        case 0x2816e0u: goto label_2816e0;
        case 0x2816e4u: goto label_2816e4;
        case 0x2816e8u: goto label_2816e8;
        case 0x2816ecu: goto label_2816ec;
        case 0x2816f0u: goto label_2816f0;
        case 0x2816f4u: goto label_2816f4;
        case 0x2816f8u: goto label_2816f8;
        case 0x2816fcu: goto label_2816fc;
        case 0x281700u: goto label_281700;
        case 0x281704u: goto label_281704;
        case 0x281708u: goto label_281708;
        case 0x28170cu: goto label_28170c;
        case 0x281710u: goto label_281710;
        case 0x281714u: goto label_281714;
        case 0x281718u: goto label_281718;
        case 0x28171cu: goto label_28171c;
        case 0x281720u: goto label_281720;
        case 0x281724u: goto label_281724;
        case 0x281728u: goto label_281728;
        case 0x28172cu: goto label_28172c;
        case 0x281730u: goto label_281730;
        case 0x281734u: goto label_281734;
        case 0x281738u: goto label_281738;
        case 0x28173cu: goto label_28173c;
        case 0x281740u: goto label_281740;
        case 0x281744u: goto label_281744;
        case 0x281748u: goto label_281748;
        case 0x28174cu: goto label_28174c;
        case 0x281750u: goto label_281750;
        case 0x281754u: goto label_281754;
        case 0x281758u: goto label_281758;
        case 0x28175cu: goto label_28175c;
        case 0x281760u: goto label_281760;
        case 0x281764u: goto label_281764;
        case 0x281768u: goto label_281768;
        case 0x28176cu: goto label_28176c;
        case 0x281770u: goto label_281770;
        case 0x281774u: goto label_281774;
        case 0x281778u: goto label_281778;
        case 0x28177cu: goto label_28177c;
        case 0x281780u: goto label_281780;
        case 0x281784u: goto label_281784;
        case 0x281788u: goto label_281788;
        case 0x28178cu: goto label_28178c;
        case 0x281790u: goto label_281790;
        case 0x281794u: goto label_281794;
        case 0x281798u: goto label_281798;
        case 0x28179cu: goto label_28179c;
        default: break;
    }

    ctx->pc = 0x281590u;

label_281590:
    // 0x281590: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x281590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_281594:
    // 0x281594: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x281594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_281598:
    // 0x281598: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x281598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_28159c:
    // 0x28159c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x28159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2815a0:
    // 0x2815a0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2815a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2815a4:
    // 0x2815a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2815a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2815a8:
    // 0x2815a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2815a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2815ac:
    // 0x2815ac: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x2815acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_2815b0:
    // 0x2815b0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2815b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2815b4:
    // 0x2815b4: 0x2442f440  addiu       $v0, $v0, -0xBC0
    ctx->pc = 0x2815b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964288));
label_2815b8:
    // 0x2815b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2815b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2815bc:
    // 0x2815bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2815bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2815c0:
    // 0x2815c0: 0x2442f4b0  addiu       $v0, $v0, -0xB50
    ctx->pc = 0x2815c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
label_2815c4:
    // 0x2815c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2815c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2815c8:
    // 0x2815c8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2815c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2815cc:
    // 0x2815cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2815ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_2815d0:
    // 0x2815d0: 0x3e00008  jr          $ra
label_2815d4:
    if (ctx->pc == 0x2815D4u) {
        ctx->pc = 0x2815D4u;
            // 0x2815d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2815D8u;
        goto label_2815d8;
    }
    ctx->pc = 0x2815D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2815D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2815D0u;
            // 0x2815d4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2815D8u;
label_2815d8:
    // 0x2815d8: 0x0  nop
    ctx->pc = 0x2815d8u;
    // NOP
label_2815dc:
    // 0x2815dc: 0x0  nop
    ctx->pc = 0x2815dcu;
    // NOP
label_2815e0:
    // 0x2815e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2815e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2815e4:
    // 0x2815e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2815e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2815e8:
    // 0x2815e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2815e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2815ec:
    // 0x2815ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2815ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2815f0:
    // 0x2815f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2815f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2815f4:
    // 0x2815f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2815f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2815f8:
    // 0x2815f8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2815f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2815fc:
    // 0x2815fc: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2815fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_281600:
    // 0x281600: 0xc0a05e8  jal         func_2817A0
label_281604:
    if (ctx->pc == 0x281604u) {
        ctx->pc = 0x281604u;
            // 0x281604: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281608u;
        goto label_281608;
    }
    ctx->pc = 0x281600u;
    SET_GPR_U32(ctx, 31, 0x281608u);
    ctx->pc = 0x281604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281600u;
            // 0x281604: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817A0u;
    if (runtime->hasFunction(0x2817A0u)) {
        auto targetFn = runtime->lookupFunction(0x2817A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281608u; }
        if (ctx->pc != 0x281608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002817A0_0x2817a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281608u; }
        if (ctx->pc != 0x281608u) { return; }
    }
    ctx->pc = 0x281608u;
label_281608:
    // 0x281608: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x281608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_28160c:
    // 0x28160c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x28160cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_281610:
    // 0x281610: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_281614:
    if (ctx->pc == 0x281614u) {
        ctx->pc = 0x281618u;
        goto label_281618;
    }
    ctx->pc = 0x281610u;
    {
        const bool branch_taken_0x281610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281610) {
            ctx->pc = 0x2816A0u;
            goto label_2816a0;
        }
    }
    ctx->pc = 0x281618u;
label_281618:
    // 0x281618: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x281618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_28161c:
    // 0x28161c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x28161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_281620:
    // 0x281620: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x281620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_281624:
    // 0x281624: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x281624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_281628:
    // 0x281628: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_28162c:
    // 0x28162c: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x28162cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_281630:
    // 0x281630: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x281630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_281634:
    // 0x281634: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x281634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_281638:
    // 0x281638: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x281638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_28163c:
    // 0x28163c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x28163cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_281640:
    // 0x281640: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x281640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_281644:
    // 0x281644: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x281644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_281648:
    // 0x281648: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_28164c:
    if (ctx->pc == 0x28164Cu) {
        ctx->pc = 0x281650u;
        goto label_281650;
    }
    ctx->pc = 0x281648u;
    {
        const bool branch_taken_0x281648 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x281648) {
            ctx->pc = 0x281658u;
            goto label_281658;
        }
    }
    ctx->pc = 0x281650u;
label_281650:
    // 0x281650: 0x10000005  b           . + 4 + (0x5 << 2)
label_281654:
    if (ctx->pc == 0x281654u) {
        ctx->pc = 0x281654u;
            // 0x281654: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x281658u;
        goto label_281658;
    }
    ctx->pc = 0x281650u;
    {
        const bool branch_taken_0x281650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281650u;
            // 0x281654: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281650) {
            ctx->pc = 0x281668u;
            goto label_281668;
        }
    }
    ctx->pc = 0x281658u;
label_281658:
    // 0x281658: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x281658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28165c:
    // 0x28165c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x28165cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_281660:
    // 0x281660: 0x320f809  jalr        $t9
label_281664:
    if (ctx->pc == 0x281664u) {
        ctx->pc = 0x281668u;
        goto label_281668;
    }
    ctx->pc = 0x281660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x281668u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x281668u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x281668u; }
            if (ctx->pc != 0x281668u) { return; }
        }
        }
    }
    ctx->pc = 0x281668u;
label_281668:
    // 0x281668: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x281668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_28166c:
    // 0x28166c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x28166cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_281670:
    // 0x281670: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x281670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_281674:
    // 0x281674: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x281674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_281678:
    // 0x281678: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x281678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_28167c:
    // 0x28167c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x28167cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_281680:
    // 0x281680: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x281680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_281684:
    // 0x281684: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x281684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_281688:
    // 0x281688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28168c:
    // 0x28168c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x28168cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
label_281690:
    // 0x281690: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x281690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
label_281694:
    // 0x281694: 0x10000004  b           . + 4 + (0x4 << 2)
label_281698:
    if (ctx->pc == 0x281698u) {
        ctx->pc = 0x281698u;
            // 0x281698: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x28169Cu;
        goto label_28169c;
    }
    ctx->pc = 0x281694u;
    {
        const bool branch_taken_0x281694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281694u;
            // 0x281698: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281694) {
            ctx->pc = 0x2816A8u;
            goto label_2816a8;
        }
    }
    ctx->pc = 0x28169Cu;
label_28169c:
    // 0x28169c: 0x0  nop
    ctx->pc = 0x28169cu;
    // NOP
label_2816a0:
    // 0x2816a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2816a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2816a4:
    // 0x2816a4: 0x0  nop
    ctx->pc = 0x2816a4u;
    // NOP
label_2816a8:
    // 0x2816a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2816a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2816ac:
    // 0x2816ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2816acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2816b0:
    // 0x2816b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2816b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2816b4:
    // 0x2816b4: 0x3e00008  jr          $ra
label_2816b8:
    if (ctx->pc == 0x2816B8u) {
        ctx->pc = 0x2816B8u;
            // 0x2816b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2816BCu;
        goto label_2816bc;
    }
    ctx->pc = 0x2816B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2816B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2816B4u;
            // 0x2816b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2816BCu;
label_2816bc:
    // 0x2816bc: 0x0  nop
    ctx->pc = 0x2816bcu;
    // NOP
label_2816c0:
    // 0x2816c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2816c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2816c4:
    // 0x2816c4: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2816c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2816c8:
    // 0x2816c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2816c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2816cc:
    // 0x2816cc: 0x8ce50018  lw          $a1, 0x18($a3)
    ctx->pc = 0x2816ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_2816d0:
    // 0x2816d0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2816d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2816d4:
    // 0x2816d4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2816d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2816d8:
    // 0x2816d8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2816d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2816dc:
    // 0x2816dc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_2816e0:
    if (ctx->pc == 0x2816E0u) {
        ctx->pc = 0x2816E4u;
        goto label_2816e4;
    }
    ctx->pc = 0x2816DCu;
    {
        const bool branch_taken_0x2816dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2816dc) {
            ctx->pc = 0x2816F8u;
            goto label_2816f8;
        }
    }
    ctx->pc = 0x2816E4u;
label_2816e4:
    // 0x2816e4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2816e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2816e8:
    // 0x2816e8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2816e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2816ec:
    // 0x2816ec: 0x320f809  jalr        $t9
label_2816f0:
    if (ctx->pc == 0x2816F0u) {
        ctx->pc = 0x2816F4u;
        goto label_2816f4;
    }
    ctx->pc = 0x2816ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2816F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2816F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2816F4u; }
            if (ctx->pc != 0x2816F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2816F4u;
label_2816f4:
    // 0x2816f4: 0x0  nop
    ctx->pc = 0x2816f4u;
    // NOP
label_2816f8:
    // 0x2816f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2816f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2816fc:
    // 0x2816fc: 0x3e00008  jr          $ra
label_281700:
    if (ctx->pc == 0x281700u) {
        ctx->pc = 0x281700u;
            // 0x281700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x281704u;
        goto label_281704;
    }
    ctx->pc = 0x2816FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2816FCu;
            // 0x281700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281704u;
label_281704:
    // 0x281704: 0x0  nop
    ctx->pc = 0x281704u;
    // NOP
label_281708:
    // 0x281708: 0x0  nop
    ctx->pc = 0x281708u;
    // NOP
label_28170c:
    // 0x28170c: 0x0  nop
    ctx->pc = 0x28170cu;
    // NOP
label_281710:
    // 0x281710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_281714:
    // 0x281714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_281718:
    // 0x281718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28171c:
    // 0x28171c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28171cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281720:
    // 0x281720: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_281724:
    if (ctx->pc == 0x281724u) {
        ctx->pc = 0x281724u;
            // 0x281724: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->pc = 0x281728u;
        goto label_281728;
    }
    ctx->pc = 0x281720u;
    {
        const bool branch_taken_0x281720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281720u;
            // 0x281724: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281720) {
            ctx->pc = 0x281788u;
            goto label_281788;
        }
    }
    ctx->pc = 0x281728u;
label_281728:
    // 0x281728: 0x2442f4b0  addiu       $v0, $v0, -0xB50
    ctx->pc = 0x281728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
label_28172c:
    // 0x28172c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_281730:
    if (ctx->pc == 0x281730u) {
        ctx->pc = 0x281730u;
            // 0x281730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x281734u;
        goto label_281734;
    }
    ctx->pc = 0x28172Cu;
    {
        const bool branch_taken_0x28172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28172Cu;
            // 0x281730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28172c) {
            ctx->pc = 0x281760u;
            goto label_281760;
        }
    }
    ctx->pc = 0x281734u;
label_281734:
    // 0x281734: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x281734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_281738:
    // 0x281738: 0x2442f440  addiu       $v0, $v0, -0xBC0
    ctx->pc = 0x281738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964288));
label_28173c:
    // 0x28173c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_281740:
    if (ctx->pc == 0x281740u) {
        ctx->pc = 0x281740u;
            // 0x281740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x281744u;
        goto label_281744;
    }
    ctx->pc = 0x28173Cu;
    {
        const bool branch_taken_0x28173c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28173Cu;
            // 0x281740: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28173c) {
            ctx->pc = 0x281760u;
            goto label_281760;
        }
    }
    ctx->pc = 0x281744u;
label_281744:
    // 0x281744: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x281744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_281748:
    // 0x281748: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x281748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_28174c:
    // 0x28174c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_281750:
    if (ctx->pc == 0x281750u) {
        ctx->pc = 0x281750u;
            // 0x281750: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x281754u;
        goto label_281754;
    }
    ctx->pc = 0x28174Cu;
    {
        const bool branch_taken_0x28174c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x281750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28174Cu;
            // 0x281750: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28174c) {
            ctx->pc = 0x281760u;
            goto label_281760;
        }
    }
    ctx->pc = 0x281754u;
label_281754:
    // 0x281754: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x281754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_281758:
    // 0x281758: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x281758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_28175c:
    // 0x28175c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x28175cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_281760:
    // 0x281760: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x281760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_281764:
    // 0x281764: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x281764u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_281768:
    // 0x281768: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_28176c:
    if (ctx->pc == 0x28176Cu) {
        ctx->pc = 0x28176Cu;
            // 0x28176c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x281770u;
        goto label_281770;
    }
    ctx->pc = 0x281768u;
    {
        const bool branch_taken_0x281768 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28176Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281768u;
            // 0x28176c: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281768) {
            ctx->pc = 0x281788u;
            goto label_281788;
        }
    }
    ctx->pc = 0x281770u;
label_281770:
    // 0x281770: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x281770u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_281774:
    // 0x281774: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x281774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_281778:
    // 0x281778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x281778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28177c:
    // 0x28177c: 0xc0a7ab4  jal         func_29EAD0
label_281780:
    if (ctx->pc == 0x281780u) {
        ctx->pc = 0x281780u;
            // 0x281780: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x281784u;
        goto label_281784;
    }
    ctx->pc = 0x28177Cu;
    SET_GPR_U32(ctx, 31, 0x281784u);
    ctx->pc = 0x281780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28177Cu;
            // 0x281780: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281784u; }
        if (ctx->pc != 0x281784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281784u; }
        if (ctx->pc != 0x281784u) { return; }
    }
    ctx->pc = 0x281784u;
label_281784:
    // 0x281784: 0x0  nop
    ctx->pc = 0x281784u;
    // NOP
label_281788:
    // 0x281788: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28178c:
    // 0x28178c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_281790:
    // 0x281790: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_281794:
    // 0x281794: 0x3e00008  jr          $ra
label_281798:
    if (ctx->pc == 0x281798u) {
        ctx->pc = 0x281798u;
            // 0x281798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x28179Cu;
        goto label_28179c;
    }
    ctx->pc = 0x281794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281794u;
            // 0x281798: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28179Cu;
label_28179c:
    // 0x28179c: 0x0  nop
    ctx->pc = 0x28179cu;
    // NOP
}
