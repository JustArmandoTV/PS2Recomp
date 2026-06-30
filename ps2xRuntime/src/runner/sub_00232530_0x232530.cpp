#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232530
// Address: 0x232530 - 0x2328d0
void sub_00232530_0x232530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232530_0x232530");
#endif

    switch (ctx->pc) {
        case 0x232530u: goto label_232530;
        case 0x232534u: goto label_232534;
        case 0x232538u: goto label_232538;
        case 0x23253cu: goto label_23253c;
        case 0x232540u: goto label_232540;
        case 0x232544u: goto label_232544;
        case 0x232548u: goto label_232548;
        case 0x23254cu: goto label_23254c;
        case 0x232550u: goto label_232550;
        case 0x232554u: goto label_232554;
        case 0x232558u: goto label_232558;
        case 0x23255cu: goto label_23255c;
        case 0x232560u: goto label_232560;
        case 0x232564u: goto label_232564;
        case 0x232568u: goto label_232568;
        case 0x23256cu: goto label_23256c;
        case 0x232570u: goto label_232570;
        case 0x232574u: goto label_232574;
        case 0x232578u: goto label_232578;
        case 0x23257cu: goto label_23257c;
        case 0x232580u: goto label_232580;
        case 0x232584u: goto label_232584;
        case 0x232588u: goto label_232588;
        case 0x23258cu: goto label_23258c;
        case 0x232590u: goto label_232590;
        case 0x232594u: goto label_232594;
        case 0x232598u: goto label_232598;
        case 0x23259cu: goto label_23259c;
        case 0x2325a0u: goto label_2325a0;
        case 0x2325a4u: goto label_2325a4;
        case 0x2325a8u: goto label_2325a8;
        case 0x2325acu: goto label_2325ac;
        case 0x2325b0u: goto label_2325b0;
        case 0x2325b4u: goto label_2325b4;
        case 0x2325b8u: goto label_2325b8;
        case 0x2325bcu: goto label_2325bc;
        case 0x2325c0u: goto label_2325c0;
        case 0x2325c4u: goto label_2325c4;
        case 0x2325c8u: goto label_2325c8;
        case 0x2325ccu: goto label_2325cc;
        case 0x2325d0u: goto label_2325d0;
        case 0x2325d4u: goto label_2325d4;
        case 0x2325d8u: goto label_2325d8;
        case 0x2325dcu: goto label_2325dc;
        case 0x2325e0u: goto label_2325e0;
        case 0x2325e4u: goto label_2325e4;
        case 0x2325e8u: goto label_2325e8;
        case 0x2325ecu: goto label_2325ec;
        case 0x2325f0u: goto label_2325f0;
        case 0x2325f4u: goto label_2325f4;
        case 0x2325f8u: goto label_2325f8;
        case 0x2325fcu: goto label_2325fc;
        case 0x232600u: goto label_232600;
        case 0x232604u: goto label_232604;
        case 0x232608u: goto label_232608;
        case 0x23260cu: goto label_23260c;
        case 0x232610u: goto label_232610;
        case 0x232614u: goto label_232614;
        case 0x232618u: goto label_232618;
        case 0x23261cu: goto label_23261c;
        case 0x232620u: goto label_232620;
        case 0x232624u: goto label_232624;
        case 0x232628u: goto label_232628;
        case 0x23262cu: goto label_23262c;
        case 0x232630u: goto label_232630;
        case 0x232634u: goto label_232634;
        case 0x232638u: goto label_232638;
        case 0x23263cu: goto label_23263c;
        case 0x232640u: goto label_232640;
        case 0x232644u: goto label_232644;
        case 0x232648u: goto label_232648;
        case 0x23264cu: goto label_23264c;
        case 0x232650u: goto label_232650;
        case 0x232654u: goto label_232654;
        case 0x232658u: goto label_232658;
        case 0x23265cu: goto label_23265c;
        case 0x232660u: goto label_232660;
        case 0x232664u: goto label_232664;
        case 0x232668u: goto label_232668;
        case 0x23266cu: goto label_23266c;
        case 0x232670u: goto label_232670;
        case 0x232674u: goto label_232674;
        case 0x232678u: goto label_232678;
        case 0x23267cu: goto label_23267c;
        case 0x232680u: goto label_232680;
        case 0x232684u: goto label_232684;
        case 0x232688u: goto label_232688;
        case 0x23268cu: goto label_23268c;
        case 0x232690u: goto label_232690;
        case 0x232694u: goto label_232694;
        case 0x232698u: goto label_232698;
        case 0x23269cu: goto label_23269c;
        case 0x2326a0u: goto label_2326a0;
        case 0x2326a4u: goto label_2326a4;
        case 0x2326a8u: goto label_2326a8;
        case 0x2326acu: goto label_2326ac;
        case 0x2326b0u: goto label_2326b0;
        case 0x2326b4u: goto label_2326b4;
        case 0x2326b8u: goto label_2326b8;
        case 0x2326bcu: goto label_2326bc;
        case 0x2326c0u: goto label_2326c0;
        case 0x2326c4u: goto label_2326c4;
        case 0x2326c8u: goto label_2326c8;
        case 0x2326ccu: goto label_2326cc;
        case 0x2326d0u: goto label_2326d0;
        case 0x2326d4u: goto label_2326d4;
        case 0x2326d8u: goto label_2326d8;
        case 0x2326dcu: goto label_2326dc;
        case 0x2326e0u: goto label_2326e0;
        case 0x2326e4u: goto label_2326e4;
        case 0x2326e8u: goto label_2326e8;
        case 0x2326ecu: goto label_2326ec;
        case 0x2326f0u: goto label_2326f0;
        case 0x2326f4u: goto label_2326f4;
        case 0x2326f8u: goto label_2326f8;
        case 0x2326fcu: goto label_2326fc;
        case 0x232700u: goto label_232700;
        case 0x232704u: goto label_232704;
        case 0x232708u: goto label_232708;
        case 0x23270cu: goto label_23270c;
        case 0x232710u: goto label_232710;
        case 0x232714u: goto label_232714;
        case 0x232718u: goto label_232718;
        case 0x23271cu: goto label_23271c;
        case 0x232720u: goto label_232720;
        case 0x232724u: goto label_232724;
        case 0x232728u: goto label_232728;
        case 0x23272cu: goto label_23272c;
        case 0x232730u: goto label_232730;
        case 0x232734u: goto label_232734;
        case 0x232738u: goto label_232738;
        case 0x23273cu: goto label_23273c;
        case 0x232740u: goto label_232740;
        case 0x232744u: goto label_232744;
        case 0x232748u: goto label_232748;
        case 0x23274cu: goto label_23274c;
        case 0x232750u: goto label_232750;
        case 0x232754u: goto label_232754;
        case 0x232758u: goto label_232758;
        case 0x23275cu: goto label_23275c;
        case 0x232760u: goto label_232760;
        case 0x232764u: goto label_232764;
        case 0x232768u: goto label_232768;
        case 0x23276cu: goto label_23276c;
        case 0x232770u: goto label_232770;
        case 0x232774u: goto label_232774;
        case 0x232778u: goto label_232778;
        case 0x23277cu: goto label_23277c;
        case 0x232780u: goto label_232780;
        case 0x232784u: goto label_232784;
        case 0x232788u: goto label_232788;
        case 0x23278cu: goto label_23278c;
        case 0x232790u: goto label_232790;
        case 0x232794u: goto label_232794;
        case 0x232798u: goto label_232798;
        case 0x23279cu: goto label_23279c;
        case 0x2327a0u: goto label_2327a0;
        case 0x2327a4u: goto label_2327a4;
        case 0x2327a8u: goto label_2327a8;
        case 0x2327acu: goto label_2327ac;
        case 0x2327b0u: goto label_2327b0;
        case 0x2327b4u: goto label_2327b4;
        case 0x2327b8u: goto label_2327b8;
        case 0x2327bcu: goto label_2327bc;
        case 0x2327c0u: goto label_2327c0;
        case 0x2327c4u: goto label_2327c4;
        case 0x2327c8u: goto label_2327c8;
        case 0x2327ccu: goto label_2327cc;
        case 0x2327d0u: goto label_2327d0;
        case 0x2327d4u: goto label_2327d4;
        case 0x2327d8u: goto label_2327d8;
        case 0x2327dcu: goto label_2327dc;
        case 0x2327e0u: goto label_2327e0;
        case 0x2327e4u: goto label_2327e4;
        case 0x2327e8u: goto label_2327e8;
        case 0x2327ecu: goto label_2327ec;
        case 0x2327f0u: goto label_2327f0;
        case 0x2327f4u: goto label_2327f4;
        case 0x2327f8u: goto label_2327f8;
        case 0x2327fcu: goto label_2327fc;
        case 0x232800u: goto label_232800;
        case 0x232804u: goto label_232804;
        case 0x232808u: goto label_232808;
        case 0x23280cu: goto label_23280c;
        case 0x232810u: goto label_232810;
        case 0x232814u: goto label_232814;
        case 0x232818u: goto label_232818;
        case 0x23281cu: goto label_23281c;
        case 0x232820u: goto label_232820;
        case 0x232824u: goto label_232824;
        case 0x232828u: goto label_232828;
        case 0x23282cu: goto label_23282c;
        case 0x232830u: goto label_232830;
        case 0x232834u: goto label_232834;
        case 0x232838u: goto label_232838;
        case 0x23283cu: goto label_23283c;
        case 0x232840u: goto label_232840;
        case 0x232844u: goto label_232844;
        case 0x232848u: goto label_232848;
        case 0x23284cu: goto label_23284c;
        case 0x232850u: goto label_232850;
        case 0x232854u: goto label_232854;
        case 0x232858u: goto label_232858;
        case 0x23285cu: goto label_23285c;
        case 0x232860u: goto label_232860;
        case 0x232864u: goto label_232864;
        case 0x232868u: goto label_232868;
        case 0x23286cu: goto label_23286c;
        case 0x232870u: goto label_232870;
        case 0x232874u: goto label_232874;
        case 0x232878u: goto label_232878;
        case 0x23287cu: goto label_23287c;
        case 0x232880u: goto label_232880;
        case 0x232884u: goto label_232884;
        case 0x232888u: goto label_232888;
        case 0x23288cu: goto label_23288c;
        case 0x232890u: goto label_232890;
        case 0x232894u: goto label_232894;
        case 0x232898u: goto label_232898;
        case 0x23289cu: goto label_23289c;
        case 0x2328a0u: goto label_2328a0;
        case 0x2328a4u: goto label_2328a4;
        case 0x2328a8u: goto label_2328a8;
        case 0x2328acu: goto label_2328ac;
        case 0x2328b0u: goto label_2328b0;
        case 0x2328b4u: goto label_2328b4;
        case 0x2328b8u: goto label_2328b8;
        case 0x2328bcu: goto label_2328bc;
        case 0x2328c0u: goto label_2328c0;
        case 0x2328c4u: goto label_2328c4;
        case 0x2328c8u: goto label_2328c8;
        case 0x2328ccu: goto label_2328cc;
        default: break;
    }

    ctx->pc = 0x232530u;

label_232530:
    // 0x232530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x232530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_232534:
    // 0x232534: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x232534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_232538:
    // 0x232538: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x232538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23253c:
    // 0x23253c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23253cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_232540:
    // 0x232540: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_232544:
    // 0x232544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_232548:
    // 0x232548: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x232548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23254c:
    // 0x23254c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232550:
    // 0x232550: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_232554:
    // 0x232554: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232558:
    // 0x232558: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x232558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_23255c:
    // 0x23255c: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_232560:
    // 0x232560: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x232560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_232564:
    // 0x232564: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_232568:
    if (ctx->pc == 0x232568u) {
        ctx->pc = 0x232568u;
            // 0x232568: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23256Cu;
        goto label_23256c;
    }
    ctx->pc = 0x232564u;
    {
        const bool branch_taken_0x232564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232564u;
            // 0x232568: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232564) {
            ctx->pc = 0x23258Cu;
            goto label_23258c;
        }
    }
    ctx->pc = 0x23256Cu;
label_23256c:
    // 0x23256c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x23256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_232570:
    // 0x232570: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_232574:
    // 0x232574: 0xa3a20090  sb          $v0, 0x90($sp)
    ctx->pc = 0x232574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 2));
label_232578:
    // 0x232578: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x232578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
label_23257c:
    // 0x23257c: 0xc08d1cc  jal         func_234730
label_232580:
    if (ctx->pc == 0x232580u) {
        ctx->pc = 0x232580u;
            // 0x232580: 0xa7b10098  sh          $s1, 0x98($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x232584u;
        goto label_232584;
    }
    ctx->pc = 0x23257Cu;
    SET_GPR_U32(ctx, 31, 0x232584u);
    ctx->pc = 0x232580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23257Cu;
            // 0x232580: 0xa7b10098  sh          $s1, 0x98($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 152), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232584u; }
        if (ctx->pc != 0x232584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232584u; }
        if (ctx->pc != 0x232584u) { return; }
    }
    ctx->pc = 0x232584u;
label_232584:
    // 0x232584: 0x100000ca  b           . + 4 + (0xCA << 2)
label_232588:
    if (ctx->pc == 0x232588u) {
        ctx->pc = 0x232588u;
            // 0x232588: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x23258Cu;
        goto label_23258c;
    }
    ctx->pc = 0x232584u;
    {
        const bool branch_taken_0x232584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232584u;
            // 0x232588: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232584) {
            ctx->pc = 0x2328B0u;
            goto label_2328b0;
        }
    }
    ctx->pc = 0x23258Cu;
label_23258c:
    // 0x23258c: 0x8e650084  lw          $a1, 0x84($s3)
    ctx->pc = 0x23258cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_232590:
    // 0x232590: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x232590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_232594:
    // 0x232594: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x232594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_232598:
    // 0x232598: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x232598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23259c:
    // 0x23259c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2325a0:
    // 0x2325a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x2325a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_2325a4:
    // 0x2325a4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x2325a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2325a8:
    // 0x2325a8: 0xae670084  sw          $a3, 0x84($s3)
    ctx->pc = 0x2325a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 7));
label_2325ac:
    // 0x2325ac: 0x832824  and         $a1, $a0, $v1
    ctx->pc = 0x2325acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2325b0:
    // 0x2325b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2325b4:
    // 0x2325b4: 0xafa60088  sw          $a2, 0x88($sp)
    ctx->pc = 0x2325b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 6));
label_2325b8:
    // 0x2325b8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2325b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_2325bc:
    // 0x2325bc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x2325bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_2325c0:
    // 0x2325c0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2325c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2325c4:
    // 0x2325c4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2325c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2325c8:
    // 0x2325c8: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x2325c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2325cc:
    // 0x2325cc: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x2325ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2325d0:
    // 0x2325d0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2325d4:
    if (ctx->pc == 0x2325D4u) {
        ctx->pc = 0x2325D4u;
            // 0x2325d4: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2325D8u;
        goto label_2325d8;
    }
    ctx->pc = 0x2325D0u;
    {
        const bool branch_taken_0x2325d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2325D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2325D0u;
            // 0x2325d4: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325d0) {
            ctx->pc = 0x2325E0u;
            goto label_2325e0;
        }
    }
    ctx->pc = 0x2325D8u;
label_2325d8:
    // 0x2325d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2325dc:
    if (ctx->pc == 0x2325DCu) {
        ctx->pc = 0x2325DCu;
            // 0x2325dc: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2325E0u;
        goto label_2325e0;
    }
    ctx->pc = 0x2325D8u;
    {
        const bool branch_taken_0x2325d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2325DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2325D8u;
            // 0x2325dc: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325d8) {
            ctx->pc = 0x2325F0u;
            goto label_2325f0;
        }
    }
    ctx->pc = 0x2325E0u;
label_2325e0:
    // 0x2325e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2325e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2325e4:
    // 0x2325e4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2325e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2325e8:
    // 0x2325e8: 0x320f809  jalr        $t9
label_2325ec:
    if (ctx->pc == 0x2325ECu) {
        ctx->pc = 0x2325F0u;
        goto label_2325f0;
    }
    ctx->pc = 0x2325E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2325F0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2325F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2325F0u; }
            if (ctx->pc != 0x2325F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2325F0u;
label_2325f0:
    // 0x2325f0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2325f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2325f4:
    // 0x2325f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2325f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2325f8:
    // 0x2325f8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2325f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2325fc:
    // 0x2325fc: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x2325fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_232600:
    // 0x232600: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x232600u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_232604:
    // 0x232604: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x232604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_232608:
    // 0x232608: 0x1a200015  blez        $s1, . + 4 + (0x15 << 2)
label_23260c:
    if (ctx->pc == 0x23260Cu) {
        ctx->pc = 0x23260Cu;
            // 0x23260c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x232610u;
        goto label_232610;
    }
    ctx->pc = 0x232608u;
    {
        const bool branch_taken_0x232608 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x23260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232608u;
            // 0x23260c: 0xae82000c  sw          $v0, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232608) {
            ctx->pc = 0x232660u;
            goto label_232660;
        }
    }
    ctx->pc = 0x232610u;
label_232610:
    // 0x232610: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x232610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_232614:
    // 0x232614: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x232614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_232618:
    // 0x232618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x232618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23261c:
    // 0x23261c: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x23261cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_232620:
    // 0x232620: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x232620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_232624:
    // 0x232624: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x232624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_232628:
    // 0x232628: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232628u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23262c:
    // 0x23262c: 0x26a70024  addiu       $a3, $s5, 0x24
    ctx->pc = 0x23262cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
label_232630:
    // 0x232630: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x232630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_232634:
    // 0x232634: 0xafa60084  sw          $a2, 0x84($sp)
    ctx->pc = 0x232634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 6));
label_232638:
    // 0x232638: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x232638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23263c:
    // 0x23263c: 0xc08e524  jal         func_239490
label_232640:
    if (ctx->pc == 0x232640u) {
        ctx->pc = 0x232640u;
            // 0x232640: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x232644u;
        goto label_232644;
    }
    ctx->pc = 0x23263Cu;
    SET_GPR_U32(ctx, 31, 0x232644u);
    ctx->pc = 0x232640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23263Cu;
            // 0x232640: 0xac470000  sw          $a3, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239490u;
    if (runtime->hasFunction(0x239490u)) {
        auto targetFn = runtime->lookupFunction(0x239490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232644u; }
        if (ctx->pc != 0x232644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00239490_0x239490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232644u; }
        if (ctx->pc != 0x232644u) { return; }
    }
    ctx->pc = 0x232644u;
label_232644:
    // 0x232644: 0xc08ab10  jal         func_22AC40
label_232648:
    if (ctx->pc == 0x232648u) {
        ctx->pc = 0x232648u;
            // 0x232648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23264Cu;
        goto label_23264c;
    }
    ctx->pc = 0x232644u;
    SET_GPR_U32(ctx, 31, 0x23264Cu);
    ctx->pc = 0x232648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232644u;
            // 0x232648: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AC40u;
    if (runtime->hasFunction(0x22AC40u)) {
        auto targetFn = runtime->lookupFunction(0x22AC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23264Cu; }
        if (ctx->pc != 0x23264Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022AC40_0x22ac40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23264Cu; }
        if (ctx->pc != 0x23264Cu) { return; }
    }
    ctx->pc = 0x23264Cu;
label_23264c:
    // 0x23264c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23264cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_232650:
    // 0x232650: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x232650u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_232654:
    // 0x232654: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_232658:
    if (ctx->pc == 0x232658u) {
        ctx->pc = 0x232658u;
            // 0x232658: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x23265Cu;
        goto label_23265c;
    }
    ctx->pc = 0x232654u;
    {
        const bool branch_taken_0x232654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232654u;
            // 0x232658: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232654) {
            ctx->pc = 0x232614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232614;
        }
    }
    ctx->pc = 0x23265Cu;
label_23265c:
    // 0x23265c: 0x0  nop
    ctx->pc = 0x23265cu;
    // NOP
label_232660:
    // 0x232660: 0x8e700318  lw          $s0, 0x318($s3)
    ctx->pc = 0x232660u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_232664:
    // 0x232664: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x232664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_232668:
    // 0x232668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23266c:
    // 0x23266c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23266cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_232670:
    // 0x232670: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x232670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_232674:
    // 0x232674: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x232674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_232678:
    // 0x232678: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x232678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23267c:
    // 0x23267c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x23267cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_232680:
    // 0x232680: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x232680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_232684:
    // 0x232684: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x232684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_232688:
    // 0x232688: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x232688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23268c:
    // 0x23268c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_232690:
    // 0x232690: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x232690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_232694:
    // 0x232694: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x232694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_232698:
    // 0x232698: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x232698u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23269c:
    // 0x23269c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2326a0:
    if (ctx->pc == 0x2326A0u) {
        ctx->pc = 0x2326A0u;
            // 0x2326a0: 0x27b40070  addiu       $s4, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2326A4u;
        goto label_2326a4;
    }
    ctx->pc = 0x23269Cu;
    {
        const bool branch_taken_0x23269c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2326A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23269Cu;
            // 0x2326a0: 0x27b40070  addiu       $s4, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23269c) {
            ctx->pc = 0x2326ACu;
            goto label_2326ac;
        }
    }
    ctx->pc = 0x2326A4u;
label_2326a4:
    // 0x2326a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_2326a8:
    if (ctx->pc == 0x2326A8u) {
        ctx->pc = 0x2326A8u;
            // 0x2326a8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x2326ACu;
        goto label_2326ac;
    }
    ctx->pc = 0x2326A4u;
    {
        const bool branch_taken_0x2326a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2326A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2326A4u;
            // 0x2326a8: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2326a4) {
            ctx->pc = 0x2326BCu;
            goto label_2326bc;
        }
    }
    ctx->pc = 0x2326ACu;
label_2326ac:
    // 0x2326ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2326acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2326b0:
    // 0x2326b0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2326b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2326b4:
    // 0x2326b4: 0x320f809  jalr        $t9
label_2326b8:
    if (ctx->pc == 0x2326B8u) {
        ctx->pc = 0x2326BCu;
        goto label_2326bc;
    }
    ctx->pc = 0x2326B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2326BCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2326BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2326BCu; }
            if (ctx->pc != 0x2326BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2326BCu;
label_2326bc:
    // 0x2326bc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2326bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_2326c0:
    // 0x2326c0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2326c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2326c4:
    // 0x2326c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2326c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2326c8:
    // 0x2326c8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x2326c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2326cc:
    // 0x2326cc: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x2326ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_2326d0:
    // 0x2326d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2326d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2326d4:
    // 0x2326d4: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x2326d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_2326d8:
    // 0x2326d8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x2326d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_2326dc:
    // 0x2326dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2326dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2326e0:
    // 0x2326e0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2326e4:
    // 0x2326e4: 0x320f809  jalr        $t9
label_2326e8:
    if (ctx->pc == 0x2326E8u) {
        ctx->pc = 0x2326E8u;
            // 0x2326e8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2326ECu;
        goto label_2326ec;
    }
    ctx->pc = 0x2326E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2326ECu);
        ctx->pc = 0x2326E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2326E4u;
            // 0x2326e8: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2326ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2326ECu; }
            if (ctx->pc != 0x2326ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2326ECu;
label_2326ec:
    // 0x2326ec: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2326ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2326f0:
    // 0x2326f0: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x2326f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2326f4:
    // 0x2326f4: 0xc07fb6c  jal         func_1FEDB0
label_2326f8:
    if (ctx->pc == 0x2326F8u) {
        ctx->pc = 0x2326F8u;
            // 0x2326f8: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x2326FCu;
        goto label_2326fc;
    }
    ctx->pc = 0x2326F4u;
    SET_GPR_U32(ctx, 31, 0x2326FCu);
    ctx->pc = 0x2326F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2326F4u;
            // 0x2326f8: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEDB0u;
    if (runtime->hasFunction(0x1FEDB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEDB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2326FCu; }
        if (ctx->pc != 0x2326FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEDB0_0x1fedb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2326FCu; }
        if (ctx->pc != 0x2326FCu) { return; }
    }
    ctx->pc = 0x2326FCu;
label_2326fc:
    // 0x2326fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2326fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_232700:
    // 0x232700: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x232700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_232704:
    // 0x232704: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x232704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_232708:
    // 0x232708: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x232708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23270c:
    // 0x23270c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_232710:
    // 0x232710: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_232714:
    if (ctx->pc == 0x232714u) {
        ctx->pc = 0x232714u;
            // 0x232714: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x232718u;
        goto label_232718;
    }
    ctx->pc = 0x232710u;
    {
        const bool branch_taken_0x232710 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x232710) {
            ctx->pc = 0x232714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232710u;
            // 0x232714: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23272Cu;
            goto label_23272c;
        }
    }
    ctx->pc = 0x232718u;
label_232718:
    // 0x232718: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23271c:
    // 0x23271c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23271cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_232720:
    // 0x232720: 0x320f809  jalr        $t9
label_232724:
    if (ctx->pc == 0x232724u) {
        ctx->pc = 0x232728u;
        goto label_232728;
    }
    ctx->pc = 0x232720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232728u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x232728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232728u; }
            if (ctx->pc != 0x232728u) { return; }
        }
        }
    }
    ctx->pc = 0x232728u;
label_232728:
    // 0x232728: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x232728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_23272c:
    // 0x23272c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23272cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_232730:
    // 0x232730: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x232730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_232734:
    // 0x232734: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_232738:
    if (ctx->pc == 0x232738u) {
        ctx->pc = 0x232738u;
            // 0x232738: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23273Cu;
        goto label_23273c;
    }
    ctx->pc = 0x232734u;
    {
        const bool branch_taken_0x232734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232734) {
            ctx->pc = 0x232738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232734u;
            // 0x232738: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232764u;
            goto label_232764;
        }
    }
    ctx->pc = 0x23273Cu;
label_23273c:
    // 0x23273c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23273cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_232740:
    // 0x232740: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x232740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_232744:
    // 0x232744: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x232744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_232748:
    // 0x232748: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x232748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23274c:
    // 0x23274c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23274cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_232750:
    // 0x232750: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x232750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_232754:
    // 0x232754: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x232754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_232758:
    // 0x232758: 0xc0a7ab4  jal         func_29EAD0
label_23275c:
    if (ctx->pc == 0x23275Cu) {
        ctx->pc = 0x23275Cu;
            // 0x23275c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x232760u;
        goto label_232760;
    }
    ctx->pc = 0x232758u;
    SET_GPR_U32(ctx, 31, 0x232760u);
    ctx->pc = 0x23275Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232758u;
            // 0x23275c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232760u; }
        if (ctx->pc != 0x232760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232760u; }
        if (ctx->pc != 0x232760u) { return; }
    }
    ctx->pc = 0x232760u;
label_232760:
    // 0x232760: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x232760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232764:
    // 0x232764: 0x1a20002c  blez        $s1, . + 4 + (0x2C << 2)
label_232768:
    if (ctx->pc == 0x232768u) {
        ctx->pc = 0x23276Cu;
        goto label_23276c;
    }
    ctx->pc = 0x232764u;
    {
        const bool branch_taken_0x232764 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x232764) {
            ctx->pc = 0x232818u;
            goto label_232818;
        }
    }
    ctx->pc = 0x23276Cu;
label_23276c:
    // 0x23276c: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x23276cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_232770:
    // 0x232770: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x232770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_232774:
    // 0x232774: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x232774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_232778:
    // 0x232778: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_23277c:
    if (ctx->pc == 0x23277Cu) {
        ctx->pc = 0x23277Cu;
            // 0x23277c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232780u;
        goto label_232780;
    }
    ctx->pc = 0x232778u;
    {
        const bool branch_taken_0x232778 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23277Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232778u;
            // 0x23277c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232778) {
            ctx->pc = 0x2327B0u;
            goto label_2327b0;
        }
    }
    ctx->pc = 0x232780u;
label_232780:
    // 0x232780: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x232780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_232784:
    // 0x232784: 0x0  nop
    ctx->pc = 0x232784u;
    // NOP
label_232788:
    // 0x232788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x232788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23278c:
    // 0x23278c: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
label_232790:
    if (ctx->pc == 0x232790u) {
        ctx->pc = 0x232794u;
        goto label_232794;
    }
    ctx->pc = 0x23278Cu;
    {
        const bool branch_taken_0x23278c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x23278c) {
            ctx->pc = 0x2327A0u;
            goto label_2327a0;
        }
    }
    ctx->pc = 0x232794u;
label_232794:
    // 0x232794: 0x10000008  b           . + 4 + (0x8 << 2)
label_232798:
    if (ctx->pc == 0x232798u) {
        ctx->pc = 0x23279Cu;
        goto label_23279c;
    }
    ctx->pc = 0x232794u;
    {
        const bool branch_taken_0x232794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x232794) {
            ctx->pc = 0x2327B8u;
            goto label_2327b8;
        }
    }
    ctx->pc = 0x23279Cu;
label_23279c:
    // 0x23279c: 0x0  nop
    ctx->pc = 0x23279cu;
    // NOP
label_2327a0:
    // 0x2327a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2327a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2327a4:
    // 0x2327a4: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2327a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2327a8:
    // 0x2327a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2327ac:
    if (ctx->pc == 0x2327ACu) {
        ctx->pc = 0x2327ACu;
            // 0x2327ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2327B0u;
        goto label_2327b0;
    }
    ctx->pc = 0x2327A8u;
    {
        const bool branch_taken_0x2327a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2327ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327A8u;
            // 0x2327ac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2327a8) {
            ctx->pc = 0x232788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232788;
        }
    }
    ctx->pc = 0x2327B0u;
label_2327b0:
    // 0x2327b0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2327b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2327b4:
    // 0x2327b4: 0x0  nop
    ctx->pc = 0x2327b4u;
    // NOP
label_2327b8:
    // 0x2327b8: 0x8e6300f0  lw          $v1, 0xF0($s3)
    ctx->pc = 0x2327b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_2327bc:
    // 0x2327bc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2327bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2327c0:
    // 0x2327c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2327c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2327c4:
    // 0x2327c4: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x2327c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
label_2327c8:
    // 0x2327c8: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x2327c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_2327cc:
    // 0x2327cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2327ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2327d0:
    // 0x2327d0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2327d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2327d4:
    // 0x2327d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2327d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2327d8:
    // 0x2327d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2327d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2327dc:
    // 0x2327dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2327dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2327e0:
    // 0x2327e0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2327e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2327e4:
    // 0x2327e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2327e8:
    if (ctx->pc == 0x2327E8u) {
        ctx->pc = 0x2327ECu;
        goto label_2327ec;
    }
    ctx->pc = 0x2327E4u;
    {
        const bool branch_taken_0x2327e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2327e4) {
            ctx->pc = 0x232800u;
            goto label_232800;
        }
    }
    ctx->pc = 0x2327ECu;
label_2327ec:
    // 0x2327ec: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2327ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2327f0:
    // 0x2327f0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x2327f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_2327f4:
    // 0x2327f4: 0x320f809  jalr        $t9
label_2327f8:
    if (ctx->pc == 0x2327F8u) {
        ctx->pc = 0x2327F8u;
            // 0x2327f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2327FCu;
        goto label_2327fc;
    }
    ctx->pc = 0x2327F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2327FCu);
        ctx->pc = 0x2327F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2327F4u;
            // 0x2327f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2327FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2327FCu; }
            if (ctx->pc != 0x2327FCu) { return; }
        }
        }
    }
    ctx->pc = 0x2327FCu;
label_2327fc:
    // 0x2327fc: 0x0  nop
    ctx->pc = 0x2327fcu;
    // NOP
label_232800:
    // 0x232800: 0xc08d414  jal         func_235050
label_232804:
    if (ctx->pc == 0x232804u) {
        ctx->pc = 0x232804u;
            // 0x232804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232808u;
        goto label_232808;
    }
    ctx->pc = 0x232800u;
    SET_GPR_U32(ctx, 31, 0x232808u);
    ctx->pc = 0x232804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232800u;
            // 0x232804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232808u; }
        if (ctx->pc != 0x232808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232808u; }
        if (ctx->pc != 0x232808u) { return; }
    }
    ctx->pc = 0x232808u;
label_232808:
    // 0x232808: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x232808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_23280c:
    // 0x23280c: 0x291182a  slt         $v1, $s4, $s1
    ctx->pc = 0x23280cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_232810:
    // 0x232810: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
label_232814:
    if (ctx->pc == 0x232814u) {
        ctx->pc = 0x232814u;
            // 0x232814: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x232818u;
        goto label_232818;
    }
    ctx->pc = 0x232810u;
    {
        const bool branch_taken_0x232810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232810u;
            // 0x232814: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232810) {
            ctx->pc = 0x23276Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23276c;
        }
    }
    ctx->pc = 0x232818u;
label_232818:
    // 0x232818: 0x8e630084  lw          $v1, 0x84($s3)
    ctx->pc = 0x232818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_23281c:
    // 0x23281c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_232820:
    // 0x232820: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_232824:
    if (ctx->pc == 0x232824u) {
        ctx->pc = 0x232824u;
            // 0x232824: 0xae630084  sw          $v1, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x232828u;
        goto label_232828;
    }
    ctx->pc = 0x232820u;
    {
        const bool branch_taken_0x232820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x232824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232820u;
            // 0x232824: 0xae630084  sw          $v1, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232820) {
            ctx->pc = 0x232848u;
            goto label_232848;
        }
    }
    ctx->pc = 0x232828u;
label_232828:
    // 0x232828: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x232828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_23282c:
    // 0x23282c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_232830:
    if (ctx->pc == 0x232830u) {
        ctx->pc = 0x232834u;
        goto label_232834;
    }
    ctx->pc = 0x23282Cu;
    {
        const bool branch_taken_0x23282c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23282c) {
            ctx->pc = 0x232848u;
            goto label_232848;
        }
    }
    ctx->pc = 0x232834u;
label_232834:
    // 0x232834: 0x8263008c  lb          $v1, 0x8C($s3)
    ctx->pc = 0x232834u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 140)));
label_232838:
    // 0x232838: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_23283c:
    if (ctx->pc == 0x23283Cu) {
        ctx->pc = 0x232840u;
        goto label_232840;
    }
    ctx->pc = 0x232838u;
    {
        const bool branch_taken_0x232838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232838) {
            ctx->pc = 0x232848u;
            goto label_232848;
        }
    }
    ctx->pc = 0x232840u;
label_232840:
    // 0x232840: 0xc08d1c4  jal         func_234710
label_232844:
    if (ctx->pc == 0x232844u) {
        ctx->pc = 0x232844u;
            // 0x232844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232848u;
        goto label_232848;
    }
    ctx->pc = 0x232840u;
    SET_GPR_U32(ctx, 31, 0x232848u);
    ctx->pc = 0x232844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232840u;
            // 0x232844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232848u; }
        if (ctx->pc != 0x232848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232848u; }
        if (ctx->pc != 0x232848u) { return; }
    }
    ctx->pc = 0x232848u;
label_232848:
    // 0x232848: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x232848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23284c:
    // 0x23284c: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x23284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_232850:
    // 0x232850: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x232850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_232854:
    // 0x232854: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x232854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_232858:
    // 0x232858: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x232858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23285c:
    // 0x23285c: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_232860:
    if (ctx->pc == 0x232860u) {
        ctx->pc = 0x232860u;
            // 0x232860: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->pc = 0x232864u;
        goto label_232864;
    }
    ctx->pc = 0x23285Cu;
    {
        const bool branch_taken_0x23285c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23285c) {
            ctx->pc = 0x232860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23285Cu;
            // 0x232860: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232878u;
            goto label_232878;
        }
    }
    ctx->pc = 0x232864u;
label_232864:
    // 0x232864: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x232864u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_232868:
    // 0x232868: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x232868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23286c:
    // 0x23286c: 0x320f809  jalr        $t9
label_232870:
    if (ctx->pc == 0x232870u) {
        ctx->pc = 0x232874u;
        goto label_232874;
    }
    ctx->pc = 0x23286Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232874u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x232874u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232874u; }
            if (ctx->pc != 0x232874u) { return; }
        }
        }
    }
    ctx->pc = 0x232874u;
label_232874:
    // 0x232874: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x232874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_232878:
    // 0x232878: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x232878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23287c:
    // 0x23287c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_232880:
    // 0x232880: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_232884:
    if (ctx->pc == 0x232884u) {
        ctx->pc = 0x232888u;
        goto label_232888;
    }
    ctx->pc = 0x232880u;
    {
        const bool branch_taken_0x232880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232880) {
            ctx->pc = 0x2328ACu;
            goto label_2328ac;
        }
    }
    ctx->pc = 0x232888u;
label_232888:
    // 0x232888: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x232888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23288c:
    // 0x23288c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x23288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_232890:
    // 0x232890: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x232890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_232894:
    // 0x232894: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x232894u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_232898:
    // 0x232898: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x232898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23289c:
    // 0x23289c: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_2328a0:
    // 0x2328a0: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2328a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_2328a4:
    // 0x2328a4: 0xc0a7ab4  jal         func_29EAD0
label_2328a8:
    if (ctx->pc == 0x2328A8u) {
        ctx->pc = 0x2328A8u;
            // 0x2328a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x2328ACu;
        goto label_2328ac;
    }
    ctx->pc = 0x2328A4u;
    SET_GPR_U32(ctx, 31, 0x2328ACu);
    ctx->pc = 0x2328A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2328A4u;
            // 0x2328a8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2328ACu; }
        if (ctx->pc != 0x2328ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2328ACu; }
        if (ctx->pc != 0x2328ACu) { return; }
    }
    ctx->pc = 0x2328ACu;
label_2328ac:
    // 0x2328ac: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2328acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2328b0:
    // 0x2328b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2328b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2328b4:
    // 0x2328b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2328b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2328b8:
    // 0x2328b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2328b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2328bc:
    // 0x2328bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2328bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2328c0:
    // 0x2328c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2328c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2328c4:
    // 0x2328c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2328c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2328c8:
    // 0x2328c8: 0x3e00008  jr          $ra
label_2328cc:
    if (ctx->pc == 0x2328CCu) {
        ctx->pc = 0x2328CCu;
            // 0x2328cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2328D0u;
        goto label_fallthrough_0x2328c8;
    }
    ctx->pc = 0x2328C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2328CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2328C8u;
            // 0x2328cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2328c8:
    ctx->pc = 0x2328D0u;
}
