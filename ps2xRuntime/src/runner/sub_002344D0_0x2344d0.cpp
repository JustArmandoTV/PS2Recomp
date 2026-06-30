#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002344D0
// Address: 0x2344d0 - 0x2346b0
void sub_002344D0_0x2344d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002344D0_0x2344d0");
#endif

    switch (ctx->pc) {
        case 0x2344d0u: goto label_2344d0;
        case 0x2344d4u: goto label_2344d4;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344dcu: goto label_2344dc;
        case 0x2344e0u: goto label_2344e0;
        case 0x2344e4u: goto label_2344e4;
        case 0x2344e8u: goto label_2344e8;
        case 0x2344ecu: goto label_2344ec;
        case 0x2344f0u: goto label_2344f0;
        case 0x2344f4u: goto label_2344f4;
        case 0x2344f8u: goto label_2344f8;
        case 0x2344fcu: goto label_2344fc;
        case 0x234500u: goto label_234500;
        case 0x234504u: goto label_234504;
        case 0x234508u: goto label_234508;
        case 0x23450cu: goto label_23450c;
        case 0x234510u: goto label_234510;
        case 0x234514u: goto label_234514;
        case 0x234518u: goto label_234518;
        case 0x23451cu: goto label_23451c;
        case 0x234520u: goto label_234520;
        case 0x234524u: goto label_234524;
        case 0x234528u: goto label_234528;
        case 0x23452cu: goto label_23452c;
        case 0x234530u: goto label_234530;
        case 0x234534u: goto label_234534;
        case 0x234538u: goto label_234538;
        case 0x23453cu: goto label_23453c;
        case 0x234540u: goto label_234540;
        case 0x234544u: goto label_234544;
        case 0x234548u: goto label_234548;
        case 0x23454cu: goto label_23454c;
        case 0x234550u: goto label_234550;
        case 0x234554u: goto label_234554;
        case 0x234558u: goto label_234558;
        case 0x23455cu: goto label_23455c;
        case 0x234560u: goto label_234560;
        case 0x234564u: goto label_234564;
        case 0x234568u: goto label_234568;
        case 0x23456cu: goto label_23456c;
        case 0x234570u: goto label_234570;
        case 0x234574u: goto label_234574;
        case 0x234578u: goto label_234578;
        case 0x23457cu: goto label_23457c;
        case 0x234580u: goto label_234580;
        case 0x234584u: goto label_234584;
        case 0x234588u: goto label_234588;
        case 0x23458cu: goto label_23458c;
        case 0x234590u: goto label_234590;
        case 0x234594u: goto label_234594;
        case 0x234598u: goto label_234598;
        case 0x23459cu: goto label_23459c;
        case 0x2345a0u: goto label_2345a0;
        case 0x2345a4u: goto label_2345a4;
        case 0x2345a8u: goto label_2345a8;
        case 0x2345acu: goto label_2345ac;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345b4u: goto label_2345b4;
        case 0x2345b8u: goto label_2345b8;
        case 0x2345bcu: goto label_2345bc;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345c4u: goto label_2345c4;
        case 0x2345c8u: goto label_2345c8;
        case 0x2345ccu: goto label_2345cc;
        case 0x2345d0u: goto label_2345d0;
        case 0x2345d4u: goto label_2345d4;
        case 0x2345d8u: goto label_2345d8;
        case 0x2345dcu: goto label_2345dc;
        case 0x2345e0u: goto label_2345e0;
        case 0x2345e4u: goto label_2345e4;
        case 0x2345e8u: goto label_2345e8;
        case 0x2345ecu: goto label_2345ec;
        case 0x2345f0u: goto label_2345f0;
        case 0x2345f4u: goto label_2345f4;
        case 0x2345f8u: goto label_2345f8;
        case 0x2345fcu: goto label_2345fc;
        case 0x234600u: goto label_234600;
        case 0x234604u: goto label_234604;
        case 0x234608u: goto label_234608;
        case 0x23460cu: goto label_23460c;
        case 0x234610u: goto label_234610;
        case 0x234614u: goto label_234614;
        case 0x234618u: goto label_234618;
        case 0x23461cu: goto label_23461c;
        case 0x234620u: goto label_234620;
        case 0x234624u: goto label_234624;
        case 0x234628u: goto label_234628;
        case 0x23462cu: goto label_23462c;
        case 0x234630u: goto label_234630;
        case 0x234634u: goto label_234634;
        case 0x234638u: goto label_234638;
        case 0x23463cu: goto label_23463c;
        case 0x234640u: goto label_234640;
        case 0x234644u: goto label_234644;
        case 0x234648u: goto label_234648;
        case 0x23464cu: goto label_23464c;
        case 0x234650u: goto label_234650;
        case 0x234654u: goto label_234654;
        case 0x234658u: goto label_234658;
        case 0x23465cu: goto label_23465c;
        case 0x234660u: goto label_234660;
        case 0x234664u: goto label_234664;
        case 0x234668u: goto label_234668;
        case 0x23466cu: goto label_23466c;
        case 0x234670u: goto label_234670;
        case 0x234674u: goto label_234674;
        case 0x234678u: goto label_234678;
        case 0x23467cu: goto label_23467c;
        case 0x234680u: goto label_234680;
        case 0x234684u: goto label_234684;
        case 0x234688u: goto label_234688;
        case 0x23468cu: goto label_23468c;
        case 0x234690u: goto label_234690;
        case 0x234694u: goto label_234694;
        case 0x234698u: goto label_234698;
        case 0x23469cu: goto label_23469c;
        case 0x2346a0u: goto label_2346a0;
        case 0x2346a4u: goto label_2346a4;
        case 0x2346a8u: goto label_2346a8;
        case 0x2346acu: goto label_2346ac;
        default: break;
    }

    ctx->pc = 0x2344d0u;

label_2344d0:
    // 0x2344d0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2344d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2344d4:
    // 0x2344d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2344d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2344d8:
    // 0x2344d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2344d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2344dc:
    // 0x2344dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2344dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2344e0:
    // 0x2344e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2344e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2344e4:
    // 0x2344e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2344e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2344e8:
    // 0x2344e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2344e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2344ec:
    // 0x2344ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2344ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2344f0:
    // 0x2344f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2344f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2344f4:
    // 0x2344f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2344f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2344f8:
    // 0x2344f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2344f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2344fc:
    // 0x2344fc: 0x16400040  bnez        $s2, . + 4 + (0x40 << 2)
label_234500:
    if (ctx->pc == 0x234500u) {
        ctx->pc = 0x234500u;
            // 0x234500: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234504u;
        goto label_234504;
    }
    ctx->pc = 0x2344FCu;
    {
        const bool branch_taken_0x2344fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x234500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2344FCu;
            // 0x234500: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344fc) {
            ctx->pc = 0x234600u;
            goto label_234600;
        }
    }
    ctx->pc = 0x234504u;
label_234504:
    // 0x234504: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x234504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_234508:
    // 0x234508: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x234508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23450c:
    // 0x23450c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23450cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_234510:
    // 0x234510: 0xc0a7a88  jal         func_29EA20
label_234514:
    if (ctx->pc == 0x234514u) {
        ctx->pc = 0x234514u;
            // 0x234514: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x234518u;
        goto label_234518;
    }
    ctx->pc = 0x234510u;
    SET_GPR_U32(ctx, 31, 0x234518u);
    ctx->pc = 0x234514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234510u;
            // 0x234514: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234518u; }
        if (ctx->pc != 0x234518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234518u; }
        if (ctx->pc != 0x234518u) { return; }
    }
    ctx->pc = 0x234518u;
label_234518:
    // 0x234518: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x234518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_23451c:
    // 0x23451c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23451cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234520:
    // 0x234520: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
label_234524:
    if (ctx->pc == 0x234524u) {
        ctx->pc = 0x234524u;
            // 0x234524: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x234528u;
        goto label_234528;
    }
    ctx->pc = 0x234520u;
    {
        const bool branch_taken_0x234520 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x234524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234520u;
            // 0x234524: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234520) {
            ctx->pc = 0x234618u;
            goto label_234618;
        }
    }
    ctx->pc = 0x234528u;
label_234528:
    // 0x234528: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x234528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_23452c:
    // 0x23452c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x23452cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_234530:
    // 0x234530: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x234530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_234534:
    // 0x234534: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x234534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_234538:
    // 0x234538: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x234538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_23453c:
    // 0x23453c: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x23453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_234540:
    // 0x234540: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x234540u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_234544:
    // 0x234544: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x234544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234548:
    // 0x234548: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_23454c:
    // 0x23454c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x23454cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_234550:
    // 0x234550: 0x2463d410  addiu       $v1, $v1, -0x2BF0
    ctx->pc = 0x234550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956048));
label_234554:
    // 0x234554: 0xa6460006  sh          $a2, 0x6($s2)
    ctx->pc = 0x234554u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 6));
label_234558:
    // 0x234558: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x234558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_23455c:
    // 0x23455c: 0x2484d400  addiu       $a0, $a0, -0x2C00
    ctx->pc = 0x23455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956032));
label_234560:
    // 0x234560: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x234560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_234564:
    // 0x234564: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x234564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
label_234568:
    // 0x234568: 0x2463d3f0  addiu       $v1, $v1, -0x2C10
    ctx->pc = 0x234568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956016));
label_23456c:
    // 0x23456c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x23456cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_234570:
    // 0x234570: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x234570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
label_234574:
    // 0x234574: 0x2484d3e0  addiu       $a0, $a0, -0x2C20
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956000));
label_234578:
    // 0x234578: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x234578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_23457c:
    // 0x23457c: 0xae440014  sw          $a0, 0x14($s2)
    ctx->pc = 0x23457cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 4));
label_234580:
    // 0x234580: 0x2463d380  addiu       $v1, $v1, -0x2C80
    ctx->pc = 0x234580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955904));
label_234584:
    // 0x234584: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x234584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_234588:
    // 0x234588: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x234588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_23458c:
    // 0x23458c: 0x2484d390  addiu       $a0, $a0, -0x2C70
    ctx->pc = 0x23458cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955920));
label_234590:
    // 0x234590: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x234590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_234594:
    // 0x234594: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x234594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
label_234598:
    // 0x234598: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x234598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
label_23459c:
    // 0x23459c: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2345a0:
    // 0x2345a0: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x2345a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_2345a4:
    // 0x2345a4: 0x2484d3b0  addiu       $a0, $a0, -0x2C50
    ctx->pc = 0x2345a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955952));
label_2345a8:
    // 0x2345a8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2345a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2345ac:
    // 0x2345ac: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x2345acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_2345b0:
    // 0x2345b0: 0x2463d3c0  addiu       $v1, $v1, -0x2C40
    ctx->pc = 0x2345b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955968));
label_2345b4:
    // 0x2345b4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2345b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2345b8:
    // 0x2345b8: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2345b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2345bc:
    // 0x2345bc: 0x2484e090  addiu       $a0, $a0, -0x1F70
    ctx->pc = 0x2345bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959248));
label_2345c0:
    // 0x2345c0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2345c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2345c4:
    // 0x2345c4: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x2345c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_2345c8:
    // 0x2345c8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x2345c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_2345cc:
    // 0x2345cc: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x2345ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
label_2345d0:
    // 0x2345d0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2345d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_2345d4:
    // 0x2345d4: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x2345d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_2345d8:
    // 0x2345d8: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x2345d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
label_2345dc:
    // 0x2345dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2345e0:
    // 0x2345e0: 0x2484e0c0  addiu       $a0, $a0, -0x1F40
    ctx->pc = 0x2345e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959296));
label_2345e4:
    // 0x2345e4: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x2345e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_2345e8:
    // 0x2345e8: 0x2463e0d0  addiu       $v1, $v1, -0x1F30
    ctx->pc = 0x2345e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959312));
label_2345ec:
    // 0x2345ec: 0xae440010  sw          $a0, 0x10($s2)
    ctx->pc = 0x2345ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 4));
label_2345f0:
    // 0x2345f0: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x2345f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_2345f4:
    // 0x2345f4: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x2345f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
label_2345f8:
    // 0x2345f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2345fc:
    if (ctx->pc == 0x2345FCu) {
        ctx->pc = 0x2345FCu;
            // 0x2345fc: 0x8e640070  lw          $a0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x234600u;
        goto label_234600;
    }
    ctx->pc = 0x2345F8u;
    {
        const bool branch_taken_0x2345f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2345F8u;
            // 0x2345fc: 0x8e640070  lw          $a0, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345f8) {
            ctx->pc = 0x23461Cu;
            goto label_23461c;
        }
    }
    ctx->pc = 0x234600u;
label_234600:
    // 0x234600: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x234600u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_234604:
    // 0x234604: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_234608:
    if (ctx->pc == 0x234608u) {
        ctx->pc = 0x23460Cu;
        goto label_23460c;
    }
    ctx->pc = 0x234604u;
    {
        const bool branch_taken_0x234604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234604) {
            ctx->pc = 0x234618u;
            goto label_234618;
        }
    }
    ctx->pc = 0x23460Cu;
label_23460c:
    // 0x23460c: 0x86430006  lh          $v1, 0x6($s2)
    ctx->pc = 0x23460cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_234610:
    // 0x234610: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x234610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_234614:
    // 0x234614: 0xa6430006  sh          $v1, 0x6($s2)
    ctx->pc = 0x234614u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
label_234618:
    // 0x234618: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x234618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_23461c:
    // 0x23461c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x23461cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_234620:
    // 0x234620: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_234624:
    if (ctx->pc == 0x234624u) {
        ctx->pc = 0x234624u;
            // 0x234624: 0xae720070  sw          $s2, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
        ctx->pc = 0x234628u;
        goto label_234628;
    }
    ctx->pc = 0x234620u;
    {
        const bool branch_taken_0x234620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234620) {
            ctx->pc = 0x234624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234620u;
            // 0x234624: 0xae720070  sw          $s2, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234660u;
            goto label_234660;
        }
    }
    ctx->pc = 0x234628u;
label_234628:
    // 0x234628: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x234628u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_23462c:
    // 0x23462c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23462cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_234630:
    // 0x234630: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x234630u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_234634:
    // 0x234634: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x234634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_234638:
    // 0x234638: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x234638u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_23463c:
    // 0x23463c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_234640:
    if (ctx->pc == 0x234640u) {
        ctx->pc = 0x234644u;
        goto label_234644;
    }
    ctx->pc = 0x23463Cu;
    {
        const bool branch_taken_0x23463c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23463c) {
            ctx->pc = 0x23465Cu;
            goto label_23465c;
        }
    }
    ctx->pc = 0x234644u;
label_234644:
    // 0x234644: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_234648:
    if (ctx->pc == 0x234648u) {
        ctx->pc = 0x23464Cu;
        goto label_23464c;
    }
    ctx->pc = 0x234644u;
    {
        const bool branch_taken_0x234644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234644) {
            ctx->pc = 0x23465Cu;
            goto label_23465c;
        }
    }
    ctx->pc = 0x23464Cu;
label_23464c:
    // 0x23464c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23464cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_234650:
    // 0x234650: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x234650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_234654:
    // 0x234654: 0x320f809  jalr        $t9
label_234658:
    if (ctx->pc == 0x234658u) {
        ctx->pc = 0x234658u;
            // 0x234658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23465Cu;
        goto label_23465c;
    }
    ctx->pc = 0x234654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23465Cu);
        ctx->pc = 0x234658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234654u;
            // 0x234658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23465Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23465Cu; }
            if (ctx->pc != 0x23465Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23465Cu;
label_23465c:
    // 0x23465c: 0xae720070  sw          $s2, 0x70($s3)
    ctx->pc = 0x23465cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 18));
label_234660:
    // 0x234660: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_234664:
    if (ctx->pc == 0x234664u) {
        ctx->pc = 0x234664u;
            // 0x234664: 0x8e64006c  lw          $a0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->pc = 0x234668u;
        goto label_234668;
    }
    ctx->pc = 0x234660u;
    {
        const bool branch_taken_0x234660 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x234660) {
            ctx->pc = 0x234664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234660u;
            // 0x234664: 0x8e64006c  lw          $a0, 0x6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234670u;
            goto label_234670;
        }
    }
    ctx->pc = 0x234668u;
label_234668:
    // 0x234668: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x234668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_23466c:
    // 0x23466c: 0x8e64006c  lw          $a0, 0x6C($s3)
    ctx->pc = 0x23466cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_234670:
    // 0x234670: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x234670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
label_234674:
    // 0x234674: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x234674u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_234678:
    // 0x234678: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23467c:
    if (ctx->pc == 0x23467Cu) {
        ctx->pc = 0x23467Cu;
            // 0x23467c: 0xac920008  sw          $s2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
        ctx->pc = 0x234680u;
        goto label_234680;
    }
    ctx->pc = 0x234678u;
    {
        const bool branch_taken_0x234678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234678u;
            // 0x23467c: 0xac920008  sw          $s2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234678) {
            ctx->pc = 0x234690u;
            goto label_234690;
        }
    }
    ctx->pc = 0x234680u;
label_234680:
    // 0x234680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x234680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_234684:
    // 0x234684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x234684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_234688:
    // 0x234688: 0xc08bd68  jal         func_22F5A0
label_23468c:
    if (ctx->pc == 0x23468Cu) {
        ctx->pc = 0x23468Cu;
            // 0x23468c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234690u;
        goto label_234690;
    }
    ctx->pc = 0x234688u;
    SET_GPR_U32(ctx, 31, 0x234690u);
    ctx->pc = 0x23468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x234688u;
            // 0x23468c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F5A0u;
    if (runtime->hasFunction(0x22F5A0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234690u; }
        if (ctx->pc != 0x234690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022F5A0_0x22f5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234690u; }
        if (ctx->pc != 0x234690u) { return; }
    }
    ctx->pc = 0x234690u;
label_234690:
    // 0x234690: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x234690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_234694:
    // 0x234694: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x234694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_234698:
    // 0x234698: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x234698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23469c:
    // 0x23469c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23469cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2346a0:
    // 0x2346a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2346a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2346a4:
    // 0x2346a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2346a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2346a8:
    // 0x2346a8: 0x3e00008  jr          $ra
label_2346ac:
    if (ctx->pc == 0x2346ACu) {
        ctx->pc = 0x2346ACu;
            // 0x2346ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2346B0u;
        goto label_fallthrough_0x2346a8;
    }
    ctx->pc = 0x2346A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2346ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2346A8u;
            // 0x2346ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2346a8:
    ctx->pc = 0x2346B0u;
}
