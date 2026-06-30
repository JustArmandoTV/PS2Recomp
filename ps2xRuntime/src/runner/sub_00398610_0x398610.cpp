#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398610
// Address: 0x398610 - 0x3989d0
void sub_00398610_0x398610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398610_0x398610");
#endif

    switch (ctx->pc) {
        case 0x398610u: goto label_398610;
        case 0x398614u: goto label_398614;
        case 0x398618u: goto label_398618;
        case 0x39861cu: goto label_39861c;
        case 0x398620u: goto label_398620;
        case 0x398624u: goto label_398624;
        case 0x398628u: goto label_398628;
        case 0x39862cu: goto label_39862c;
        case 0x398630u: goto label_398630;
        case 0x398634u: goto label_398634;
        case 0x398638u: goto label_398638;
        case 0x39863cu: goto label_39863c;
        case 0x398640u: goto label_398640;
        case 0x398644u: goto label_398644;
        case 0x398648u: goto label_398648;
        case 0x39864cu: goto label_39864c;
        case 0x398650u: goto label_398650;
        case 0x398654u: goto label_398654;
        case 0x398658u: goto label_398658;
        case 0x39865cu: goto label_39865c;
        case 0x398660u: goto label_398660;
        case 0x398664u: goto label_398664;
        case 0x398668u: goto label_398668;
        case 0x39866cu: goto label_39866c;
        case 0x398670u: goto label_398670;
        case 0x398674u: goto label_398674;
        case 0x398678u: goto label_398678;
        case 0x39867cu: goto label_39867c;
        case 0x398680u: goto label_398680;
        case 0x398684u: goto label_398684;
        case 0x398688u: goto label_398688;
        case 0x39868cu: goto label_39868c;
        case 0x398690u: goto label_398690;
        case 0x398694u: goto label_398694;
        case 0x398698u: goto label_398698;
        case 0x39869cu: goto label_39869c;
        case 0x3986a0u: goto label_3986a0;
        case 0x3986a4u: goto label_3986a4;
        case 0x3986a8u: goto label_3986a8;
        case 0x3986acu: goto label_3986ac;
        case 0x3986b0u: goto label_3986b0;
        case 0x3986b4u: goto label_3986b4;
        case 0x3986b8u: goto label_3986b8;
        case 0x3986bcu: goto label_3986bc;
        case 0x3986c0u: goto label_3986c0;
        case 0x3986c4u: goto label_3986c4;
        case 0x3986c8u: goto label_3986c8;
        case 0x3986ccu: goto label_3986cc;
        case 0x3986d0u: goto label_3986d0;
        case 0x3986d4u: goto label_3986d4;
        case 0x3986d8u: goto label_3986d8;
        case 0x3986dcu: goto label_3986dc;
        case 0x3986e0u: goto label_3986e0;
        case 0x3986e4u: goto label_3986e4;
        case 0x3986e8u: goto label_3986e8;
        case 0x3986ecu: goto label_3986ec;
        case 0x3986f0u: goto label_3986f0;
        case 0x3986f4u: goto label_3986f4;
        case 0x3986f8u: goto label_3986f8;
        case 0x3986fcu: goto label_3986fc;
        case 0x398700u: goto label_398700;
        case 0x398704u: goto label_398704;
        case 0x398708u: goto label_398708;
        case 0x39870cu: goto label_39870c;
        case 0x398710u: goto label_398710;
        case 0x398714u: goto label_398714;
        case 0x398718u: goto label_398718;
        case 0x39871cu: goto label_39871c;
        case 0x398720u: goto label_398720;
        case 0x398724u: goto label_398724;
        case 0x398728u: goto label_398728;
        case 0x39872cu: goto label_39872c;
        case 0x398730u: goto label_398730;
        case 0x398734u: goto label_398734;
        case 0x398738u: goto label_398738;
        case 0x39873cu: goto label_39873c;
        case 0x398740u: goto label_398740;
        case 0x398744u: goto label_398744;
        case 0x398748u: goto label_398748;
        case 0x39874cu: goto label_39874c;
        case 0x398750u: goto label_398750;
        case 0x398754u: goto label_398754;
        case 0x398758u: goto label_398758;
        case 0x39875cu: goto label_39875c;
        case 0x398760u: goto label_398760;
        case 0x398764u: goto label_398764;
        case 0x398768u: goto label_398768;
        case 0x39876cu: goto label_39876c;
        case 0x398770u: goto label_398770;
        case 0x398774u: goto label_398774;
        case 0x398778u: goto label_398778;
        case 0x39877cu: goto label_39877c;
        case 0x398780u: goto label_398780;
        case 0x398784u: goto label_398784;
        case 0x398788u: goto label_398788;
        case 0x39878cu: goto label_39878c;
        case 0x398790u: goto label_398790;
        case 0x398794u: goto label_398794;
        case 0x398798u: goto label_398798;
        case 0x39879cu: goto label_39879c;
        case 0x3987a0u: goto label_3987a0;
        case 0x3987a4u: goto label_3987a4;
        case 0x3987a8u: goto label_3987a8;
        case 0x3987acu: goto label_3987ac;
        case 0x3987b0u: goto label_3987b0;
        case 0x3987b4u: goto label_3987b4;
        case 0x3987b8u: goto label_3987b8;
        case 0x3987bcu: goto label_3987bc;
        case 0x3987c0u: goto label_3987c0;
        case 0x3987c4u: goto label_3987c4;
        case 0x3987c8u: goto label_3987c8;
        case 0x3987ccu: goto label_3987cc;
        case 0x3987d0u: goto label_3987d0;
        case 0x3987d4u: goto label_3987d4;
        case 0x3987d8u: goto label_3987d8;
        case 0x3987dcu: goto label_3987dc;
        case 0x3987e0u: goto label_3987e0;
        case 0x3987e4u: goto label_3987e4;
        case 0x3987e8u: goto label_3987e8;
        case 0x3987ecu: goto label_3987ec;
        case 0x3987f0u: goto label_3987f0;
        case 0x3987f4u: goto label_3987f4;
        case 0x3987f8u: goto label_3987f8;
        case 0x3987fcu: goto label_3987fc;
        case 0x398800u: goto label_398800;
        case 0x398804u: goto label_398804;
        case 0x398808u: goto label_398808;
        case 0x39880cu: goto label_39880c;
        case 0x398810u: goto label_398810;
        case 0x398814u: goto label_398814;
        case 0x398818u: goto label_398818;
        case 0x39881cu: goto label_39881c;
        case 0x398820u: goto label_398820;
        case 0x398824u: goto label_398824;
        case 0x398828u: goto label_398828;
        case 0x39882cu: goto label_39882c;
        case 0x398830u: goto label_398830;
        case 0x398834u: goto label_398834;
        case 0x398838u: goto label_398838;
        case 0x39883cu: goto label_39883c;
        case 0x398840u: goto label_398840;
        case 0x398844u: goto label_398844;
        case 0x398848u: goto label_398848;
        case 0x39884cu: goto label_39884c;
        case 0x398850u: goto label_398850;
        case 0x398854u: goto label_398854;
        case 0x398858u: goto label_398858;
        case 0x39885cu: goto label_39885c;
        case 0x398860u: goto label_398860;
        case 0x398864u: goto label_398864;
        case 0x398868u: goto label_398868;
        case 0x39886cu: goto label_39886c;
        case 0x398870u: goto label_398870;
        case 0x398874u: goto label_398874;
        case 0x398878u: goto label_398878;
        case 0x39887cu: goto label_39887c;
        case 0x398880u: goto label_398880;
        case 0x398884u: goto label_398884;
        case 0x398888u: goto label_398888;
        case 0x39888cu: goto label_39888c;
        case 0x398890u: goto label_398890;
        case 0x398894u: goto label_398894;
        case 0x398898u: goto label_398898;
        case 0x39889cu: goto label_39889c;
        case 0x3988a0u: goto label_3988a0;
        case 0x3988a4u: goto label_3988a4;
        case 0x3988a8u: goto label_3988a8;
        case 0x3988acu: goto label_3988ac;
        case 0x3988b0u: goto label_3988b0;
        case 0x3988b4u: goto label_3988b4;
        case 0x3988b8u: goto label_3988b8;
        case 0x3988bcu: goto label_3988bc;
        case 0x3988c0u: goto label_3988c0;
        case 0x3988c4u: goto label_3988c4;
        case 0x3988c8u: goto label_3988c8;
        case 0x3988ccu: goto label_3988cc;
        case 0x3988d0u: goto label_3988d0;
        case 0x3988d4u: goto label_3988d4;
        case 0x3988d8u: goto label_3988d8;
        case 0x3988dcu: goto label_3988dc;
        case 0x3988e0u: goto label_3988e0;
        case 0x3988e4u: goto label_3988e4;
        case 0x3988e8u: goto label_3988e8;
        case 0x3988ecu: goto label_3988ec;
        case 0x3988f0u: goto label_3988f0;
        case 0x3988f4u: goto label_3988f4;
        case 0x3988f8u: goto label_3988f8;
        case 0x3988fcu: goto label_3988fc;
        case 0x398900u: goto label_398900;
        case 0x398904u: goto label_398904;
        case 0x398908u: goto label_398908;
        case 0x39890cu: goto label_39890c;
        case 0x398910u: goto label_398910;
        case 0x398914u: goto label_398914;
        case 0x398918u: goto label_398918;
        case 0x39891cu: goto label_39891c;
        case 0x398920u: goto label_398920;
        case 0x398924u: goto label_398924;
        case 0x398928u: goto label_398928;
        case 0x39892cu: goto label_39892c;
        case 0x398930u: goto label_398930;
        case 0x398934u: goto label_398934;
        case 0x398938u: goto label_398938;
        case 0x39893cu: goto label_39893c;
        case 0x398940u: goto label_398940;
        case 0x398944u: goto label_398944;
        case 0x398948u: goto label_398948;
        case 0x39894cu: goto label_39894c;
        case 0x398950u: goto label_398950;
        case 0x398954u: goto label_398954;
        case 0x398958u: goto label_398958;
        case 0x39895cu: goto label_39895c;
        case 0x398960u: goto label_398960;
        case 0x398964u: goto label_398964;
        case 0x398968u: goto label_398968;
        case 0x39896cu: goto label_39896c;
        case 0x398970u: goto label_398970;
        case 0x398974u: goto label_398974;
        case 0x398978u: goto label_398978;
        case 0x39897cu: goto label_39897c;
        case 0x398980u: goto label_398980;
        case 0x398984u: goto label_398984;
        case 0x398988u: goto label_398988;
        case 0x39898cu: goto label_39898c;
        case 0x398990u: goto label_398990;
        case 0x398994u: goto label_398994;
        case 0x398998u: goto label_398998;
        case 0x39899cu: goto label_39899c;
        case 0x3989a0u: goto label_3989a0;
        case 0x3989a4u: goto label_3989a4;
        case 0x3989a8u: goto label_3989a8;
        case 0x3989acu: goto label_3989ac;
        case 0x3989b0u: goto label_3989b0;
        case 0x3989b4u: goto label_3989b4;
        case 0x3989b8u: goto label_3989b8;
        case 0x3989bcu: goto label_3989bc;
        case 0x3989c0u: goto label_3989c0;
        case 0x3989c4u: goto label_3989c4;
        case 0x3989c8u: goto label_3989c8;
        case 0x3989ccu: goto label_3989cc;
        default: break;
    }

    ctx->pc = 0x398610u;

label_398610:
    // 0x398610: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x398610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_398614:
    // 0x398614: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x398614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_398618:
    // 0x398618: 0x24428168  addiu       $v0, $v0, -0x7E98
    ctx->pc = 0x398618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934888));
label_39861c:
    // 0x39861c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x39861cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_398620:
    // 0x398620: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x398620u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_398624:
    // 0x398624: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x398624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398628:
    // 0x398628: 0x3e00008  jr          $ra
label_39862c:
    if (ctx->pc == 0x39862Cu) {
        ctx->pc = 0x39862Cu;
            // 0x39862c: 0xac656488  sw          $a1, 0x6488($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25736), GPR_U32(ctx, 5));
        ctx->pc = 0x398630u;
        goto label_398630;
    }
    ctx->pc = 0x398628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398628u;
            // 0x39862c: 0xac656488  sw          $a1, 0x6488($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25736), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398630u;
label_398630:
    // 0x398630: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x398630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_398634:
    // 0x398634: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x398634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_398638:
    // 0x398638: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x398638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39863c:
    // 0x39863c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_398640:
    // 0x398640: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x398640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398644:
    // 0x398644: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_398648:
    // 0x398648: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39864c:
    // 0x39864c: 0x8cc40db0  lw          $a0, 0xDB0($a2)
    ctx->pc = 0x39864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_398650:
    // 0x398650: 0x8cd10d98  lw          $s1, 0xD98($a2)
    ctx->pc = 0x398650u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_398654:
    // 0x398654: 0x28830004  slti        $v1, $a0, 0x4
    ctx->pc = 0x398654u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_398658:
    // 0x398658: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_39865c:
    if (ctx->pc == 0x39865Cu) {
        ctx->pc = 0x39865Cu;
            // 0x39865c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398660u;
        goto label_398660;
    }
    ctx->pc = 0x398658u;
    {
        const bool branch_taken_0x398658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39865Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398658u;
            // 0x39865c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398658) {
            ctx->pc = 0x39866Cu;
            goto label_39866c;
        }
    }
    ctx->pc = 0x398660u;
label_398660:
    // 0x398660: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x398660u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_398664:
    // 0x398664: 0x54200009  bnel        $at, $zero, . + 4 + (0x9 << 2)
label_398668:
    if (ctx->pc == 0x398668u) {
        ctx->pc = 0x398668u;
            // 0x398668: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x39866Cu;
        goto label_39866c;
    }
    ctx->pc = 0x398664u;
    {
        const bool branch_taken_0x398664 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x398664) {
            ctx->pc = 0x398668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x398664u;
            // 0x398668: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x39868Cu;
            goto label_39868c;
        }
    }
    ctx->pc = 0x39866Cu;
label_39866c:
    // 0x39866c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_398670:
    if (ctx->pc == 0x398670u) {
        ctx->pc = 0x398674u;
        goto label_398674;
    }
    ctx->pc = 0x39866Cu;
    {
        const bool branch_taken_0x39866c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39866c) {
            ctx->pc = 0x398688u;
            goto label_398688;
        }
    }
    ctx->pc = 0x398674u;
label_398674:
    // 0x398674: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x398674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_398678:
    // 0x398678: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_39867c:
    if (ctx->pc == 0x39867Cu) {
        ctx->pc = 0x398680u;
        goto label_398680;
    }
    ctx->pc = 0x398678u;
    {
        const bool branch_taken_0x398678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x398678) {
            ctx->pc = 0x398688u;
            goto label_398688;
        }
    }
    ctx->pc = 0x398680u;
label_398680:
    // 0x398680: 0x10000002  b           . + 4 + (0x2 << 2)
label_398684:
    if (ctx->pc == 0x398684u) {
        ctx->pc = 0x398684u;
            // 0x398684: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398688u;
        goto label_398688;
    }
    ctx->pc = 0x398680u;
    {
        const bool branch_taken_0x398680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398680u;
            // 0x398684: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398680) {
            ctx->pc = 0x39868Cu;
            goto label_39868c;
        }
    }
    ctx->pc = 0x398688u;
label_398688:
    // 0x398688: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x398688u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_39868c:
    // 0x39868c: 0x5060005f  beql        $v1, $zero, . + 4 + (0x5F << 2)
label_398690:
    if (ctx->pc == 0x398690u) {
        ctx->pc = 0x398690u;
            // 0x398690: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x398694u;
        goto label_398694;
    }
    ctx->pc = 0x39868Cu;
    {
        const bool branch_taken_0x39868c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39868c) {
            ctx->pc = 0x398690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39868Cu;
            // 0x398690: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39880Cu;
            goto label_39880c;
        }
    }
    ctx->pc = 0x398694u;
label_398694:
    // 0x398694: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x398694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_398698:
    // 0x398698: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x398698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39869c:
    // 0x39869c: 0x2248004  sllv        $s0, $a0, $s1
    ctx->pc = 0x39869cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_3986a0:
    // 0x3986a0: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x3986a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_3986a4:
    // 0x3986a4: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
label_3986a8:
    if (ctx->pc == 0x3986A8u) {
        ctx->pc = 0x3986ACu;
        goto label_3986ac;
    }
    ctx->pc = 0x3986A4u;
    {
        const bool branch_taken_0x3986a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3986a4) {
            ctx->pc = 0x398808u;
            goto label_398808;
        }
    }
    ctx->pc = 0x3986ACu;
label_3986ac:
    // 0x3986ac: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x3986acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_3986b0:
    // 0x3986b0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3986b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3986b4:
    // 0x3986b4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_3986b8:
    if (ctx->pc == 0x3986B8u) {
        ctx->pc = 0x3986B8u;
            // 0x3986b8: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->pc = 0x3986BCu;
        goto label_3986bc;
    }
    ctx->pc = 0x3986B4u;
    {
        const bool branch_taken_0x3986b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3986b4) {
            ctx->pc = 0x3986B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3986B4u;
            // 0x3986b8: 0x8e430db0  lw          $v1, 0xDB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3986C8u;
            goto label_3986c8;
        }
    }
    ctx->pc = 0x3986BCu;
label_3986bc:
    // 0x3986bc: 0x10000052  b           . + 4 + (0x52 << 2)
label_3986c0:
    if (ctx->pc == 0x3986C0u) {
        ctx->pc = 0x3986C4u;
        goto label_3986c4;
    }
    ctx->pc = 0x3986BCu;
    {
        const bool branch_taken_0x3986bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3986bc) {
            ctx->pc = 0x398808u;
            goto label_398808;
        }
    }
    ctx->pc = 0x3986C4u;
label_3986c4:
    // 0x3986c4: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x3986c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_3986c8:
    // 0x3986c8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x3986c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3986cc:
    // 0x3986cc: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3986d0:
    if (ctx->pc == 0x3986D0u) {
        ctx->pc = 0x3986D0u;
            // 0x3986d0: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x3986D4u;
        goto label_3986d4;
    }
    ctx->pc = 0x3986CCu;
    {
        const bool branch_taken_0x3986cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3986cc) {
            ctx->pc = 0x3986D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3986CCu;
            // 0x3986d0: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3986E0u;
            goto label_3986e0;
        }
    }
    ctx->pc = 0x3986D4u;
label_3986d4:
    // 0x3986d4: 0xc0b6764  jal         func_2D9D90
label_3986d8:
    if (ctx->pc == 0x3986D8u) {
        ctx->pc = 0x3986D8u;
            // 0x3986d8: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x3986DCu;
        goto label_3986dc;
    }
    ctx->pc = 0x3986D4u;
    SET_GPR_U32(ctx, 31, 0x3986DCu);
    ctx->pc = 0x3986D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3986D4u;
            // 0x3986d8: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3986DCu; }
        if (ctx->pc != 0x3986DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3986DCu; }
        if (ctx->pc != 0x3986DCu) { return; }
    }
    ctx->pc = 0x3986DCu;
label_3986dc:
    // 0x3986dc: 0xae40118c  sw          $zero, 0x118C($s2)
    ctx->pc = 0x3986dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
label_3986e0:
    // 0x3986e0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3986e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3986e4:
    // 0x3986e4: 0x8e66006c  lw          $a2, 0x6C($s3)
    ctx->pc = 0x3986e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_3986e8:
    // 0x3986e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3986ec:
    // 0x3986ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3986ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3986f0:
    // 0x3986f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3986f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3986f4:
    // 0x3986f4: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x3986f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
label_3986f8:
    // 0x3986f8: 0xae66006c  sw          $a2, 0x6C($s3)
    ctx->pc = 0x3986f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 6));
label_3986fc:
    // 0x3986fc: 0xac430090  sw          $v1, 0x90($v0)
    ctx->pc = 0x3986fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 3));
label_398700:
    // 0x398700: 0x8e420d60  lw          $v0, 0xD60($s2)
    ctx->pc = 0x398700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_398704:
    // 0x398704: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x398704u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_398708:
    // 0x398708: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x398708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39870c:
    // 0x39870c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x39870cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_398710:
    // 0x398710: 0x320f809  jalr        $t9
label_398714:
    if (ctx->pc == 0x398714u) {
        ctx->pc = 0x398714u;
            // 0x398714: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x398718u;
        goto label_398718;
    }
    ctx->pc = 0x398710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x398718u);
        ctx->pc = 0x398714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398710u;
            // 0x398714: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x398718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x398718u; }
            if (ctx->pc != 0x398718u) { return; }
        }
        }
    }
    ctx->pc = 0x398718u;
label_398718:
    // 0x398718: 0x8e420d70  lw          $v0, 0xD70($s2)
    ctx->pc = 0x398718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_39871c:
    // 0x39871c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39871cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398720:
    // 0x398720: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x398720u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_398724:
    // 0x398724: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x398724u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_398728:
    // 0x398728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x398728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39872c:
    // 0x39872c: 0x24a56f30  addiu       $a1, $a1, 0x6F30
    ctx->pc = 0x39872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28464));
label_398730:
    // 0x398730: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x398730u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_398734:
    // 0x398734: 0xc0767f0  jal         func_1D9FC0
label_398738:
    if (ctx->pc == 0x398738u) {
        ctx->pc = 0x398738u;
            // 0x398738: 0xa04300dd  sb          $v1, 0xDD($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x39873Cu;
        goto label_39873c;
    }
    ctx->pc = 0x398734u;
    SET_GPR_U32(ctx, 31, 0x39873Cu);
    ctx->pc = 0x398738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398734u;
            // 0x398738: 0xa04300dd  sb          $v1, 0xDD($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 221), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39873Cu; }
        if (ctx->pc != 0x39873Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39873Cu; }
        if (ctx->pc != 0x39873Cu) { return; }
    }
    ctx->pc = 0x39873Cu;
label_39873c:
    // 0x39873c: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x39873cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_398740:
    // 0x398740: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x398740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_398744:
    // 0x398744: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x398744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_398748:
    // 0x398748: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x398748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39874c:
    // 0x39874c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x39874cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_398750:
    // 0x398750: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x398750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_398754:
    // 0x398754: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x398754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_398758:
    // 0x398758: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x398758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_39875c:
    // 0x39875c: 0xc0a545c  jal         func_295170
label_398760:
    if (ctx->pc == 0x398760u) {
        ctx->pc = 0x398760u;
            // 0x398760: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x398764u;
        goto label_398764;
    }
    ctx->pc = 0x39875Cu;
    SET_GPR_U32(ctx, 31, 0x398764u);
    ctx->pc = 0x398760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39875Cu;
            // 0x398760: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398764u; }
        if (ctx->pc != 0x398764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398764u; }
        if (ctx->pc != 0x398764u) { return; }
    }
    ctx->pc = 0x398764u;
label_398764:
    // 0x398764: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x398764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_398768:
    // 0x398768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x398768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39876c:
    // 0x39876c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x39876cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_398770:
    // 0x398770: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x398770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_398774:
    // 0x398774: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x398774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_398778:
    // 0x398778: 0xc08bf20  jal         func_22FC80
label_39877c:
    if (ctx->pc == 0x39877Cu) {
        ctx->pc = 0x39877Cu;
            // 0x39877c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398780u;
        goto label_398780;
    }
    ctx->pc = 0x398778u;
    SET_GPR_U32(ctx, 31, 0x398780u);
    ctx->pc = 0x39877Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398778u;
            // 0x39877c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398780u; }
        if (ctx->pc != 0x398780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398780u; }
        if (ctx->pc != 0x398780u) { return; }
    }
    ctx->pc = 0x398780u;
label_398780:
    // 0x398780: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x398780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_398784:
    // 0x398784: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x398784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_398788:
    // 0x398788: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x398788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_39878c:
    // 0x39878c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_398790:
    // 0x398790: 0xae420de4  sw          $v0, 0xDE4($s2)
    ctx->pc = 0x398790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
label_398794:
    // 0x398794: 0xc04cc90  jal         func_133240
label_398798:
    if (ctx->pc == 0x398798u) {
        ctx->pc = 0x398798u;
            // 0x398798: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x39879Cu;
        goto label_39879c;
    }
    ctx->pc = 0x398794u;
    SET_GPR_U32(ctx, 31, 0x39879Cu);
    ctx->pc = 0x398798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398794u;
            // 0x398798: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39879Cu; }
        if (ctx->pc != 0x39879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39879Cu; }
        if (ctx->pc != 0x39879Cu) { return; }
    }
    ctx->pc = 0x39879Cu;
label_39879c:
    // 0x39879c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39879cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3987a0:
    // 0x3987a0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x3987a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_3987a4:
    // 0x3987a4: 0xc04cc44  jal         func_133110
label_3987a8:
    if (ctx->pc == 0x3987A8u) {
        ctx->pc = 0x3987A8u;
            // 0x3987a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3987ACu;
        goto label_3987ac;
    }
    ctx->pc = 0x3987A4u;
    SET_GPR_U32(ctx, 31, 0x3987ACu);
    ctx->pc = 0x3987A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3987A4u;
            // 0x3987a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987ACu; }
        if (ctx->pc != 0x3987ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987ACu; }
        if (ctx->pc != 0x3987ACu) { return; }
    }
    ctx->pc = 0x3987ACu;
label_3987ac:
    // 0x3987ac: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x3987acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3987b0:
    // 0x3987b0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3987b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3987b4:
    // 0x3987b4: 0xc075378  jal         func_1D4DE0
label_3987b8:
    if (ctx->pc == 0x3987B8u) {
        ctx->pc = 0x3987B8u;
            // 0x3987b8: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->pc = 0x3987BCu;
        goto label_3987bc;
    }
    ctx->pc = 0x3987B4u;
    SET_GPR_U32(ctx, 31, 0x3987BCu);
    ctx->pc = 0x3987B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3987B4u;
            // 0x3987b8: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987BCu; }
        if (ctx->pc != 0x3987BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987BCu; }
        if (ctx->pc != 0x3987BCu) { return; }
    }
    ctx->pc = 0x3987BCu;
label_3987bc:
    // 0x3987bc: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x3987bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3987c0:
    // 0x3987c0: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x3987c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_3987c4:
    // 0x3987c4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3987c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3987c8:
    // 0x3987c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3987c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3987cc:
    // 0x3987cc: 0xc0c753c  jal         func_31D4F0
label_3987d0:
    if (ctx->pc == 0x3987D0u) {
        ctx->pc = 0x3987D0u;
            // 0x3987d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3987D4u;
        goto label_3987d4;
    }
    ctx->pc = 0x3987CCu;
    SET_GPR_U32(ctx, 31, 0x3987D4u);
    ctx->pc = 0x3987D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3987CCu;
            // 0x3987d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987D4u; }
        if (ctx->pc != 0x3987D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987D4u; }
        if (ctx->pc != 0x3987D4u) { return; }
    }
    ctx->pc = 0x3987D4u;
label_3987d4:
    // 0x3987d4: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x3987d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3987d8:
    // 0x3987d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3987d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3987dc:
    // 0x3987dc: 0xc64d0880  lwc1        $f13, 0x880($s2)
    ctx->pc = 0x3987dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3987e0:
    // 0x3987e0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3987e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3987e4:
    // 0x3987e4: 0xc0c753c  jal         func_31D4F0
label_3987e8:
    if (ctx->pc == 0x3987E8u) {
        ctx->pc = 0x3987E8u;
            // 0x3987e8: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->pc = 0x3987ECu;
        goto label_3987ec;
    }
    ctx->pc = 0x3987E4u;
    SET_GPR_U32(ctx, 31, 0x3987ECu);
    ctx->pc = 0x3987E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3987E4u;
            // 0x3987e8: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987ECu; }
        if (ctx->pc != 0x3987ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3987ECu; }
        if (ctx->pc != 0x3987ECu) { return; }
    }
    ctx->pc = 0x3987ECu;
label_3987ec:
    // 0x3987ec: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x3987ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_3987f0:
    // 0x3987f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3987f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3987f4:
    // 0x3987f4: 0x26460560  addiu       $a2, $s2, 0x560
    ctx->pc = 0x3987f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_3987f8:
    // 0x3987f8: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x3987f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_3987fc:
    // 0x3987fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3987fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_398800:
    // 0x398800: 0xc0c6250  jal         func_318940
label_398804:
    if (ctx->pc == 0x398804u) {
        ctx->pc = 0x398804u;
            // 0x398804: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->pc = 0x398808u;
        goto label_398808;
    }
    ctx->pc = 0x398800u;
    SET_GPR_U32(ctx, 31, 0x398808u);
    ctx->pc = 0x398804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398800u;
            // 0x398804: 0x24650080  addiu       $a1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398808u; }
        if (ctx->pc != 0x398808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398808u; }
        if (ctx->pc != 0x398808u) { return; }
    }
    ctx->pc = 0x398808u;
label_398808:
    // 0x398808: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x398808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39880c:
    // 0x39880c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39880cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_398810:
    // 0x398810: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x398810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398814:
    // 0x398814: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398818:
    // 0x398818: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39881c:
    // 0x39881c: 0x3e00008  jr          $ra
label_398820:
    if (ctx->pc == 0x398820u) {
        ctx->pc = 0x398820u;
            // 0x398820: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x398824u;
        goto label_398824;
    }
    ctx->pc = 0x39881Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39881Cu;
            // 0x398820: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398824u;
label_398824:
    // 0x398824: 0x0  nop
    ctx->pc = 0x398824u;
    // NOP
label_398828:
    // 0x398828: 0x0  nop
    ctx->pc = 0x398828u;
    // NOP
label_39882c:
    // 0x39882c: 0x0  nop
    ctx->pc = 0x39882cu;
    // NOP
label_398830:
    // 0x398830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x398830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_398834:
    // 0x398834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x398834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_398838:
    // 0x398838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39883c:
    // 0x39883c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39883cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_398840:
    // 0x398840: 0xc0e65a4  jal         func_399690
label_398844:
    if (ctx->pc == 0x398844u) {
        ctx->pc = 0x398844u;
            // 0x398844: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x398848u;
        goto label_398848;
    }
    ctx->pc = 0x398840u;
    SET_GPR_U32(ctx, 31, 0x398848u);
    ctx->pc = 0x398844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398840u;
            // 0x398844: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399690u;
    if (runtime->hasFunction(0x399690u)) {
        auto targetFn = runtime->lookupFunction(0x399690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398848u; }
        if (ctx->pc != 0x398848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399690_0x399690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398848u; }
        if (ctx->pc != 0x398848u) { return; }
    }
    ctx->pc = 0x398848u;
label_398848:
    // 0x398848: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x398848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_39884c:
    // 0x39884c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_398850:
    if (ctx->pc == 0x398850u) {
        ctx->pc = 0x398850u;
            // 0x398850: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x398854u;
        goto label_398854;
    }
    ctx->pc = 0x39884Cu;
    {
        const bool branch_taken_0x39884c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39884c) {
            ctx->pc = 0x398850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39884Cu;
            // 0x398850: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x398874u;
            goto label_398874;
        }
    }
    ctx->pc = 0x398854u;
label_398854:
    // 0x398854: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_398858:
    if (ctx->pc == 0x398858u) {
        ctx->pc = 0x398858u;
            // 0x398858: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x39885Cu;
        goto label_39885c;
    }
    ctx->pc = 0x398854u;
    {
        const bool branch_taken_0x398854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x398854) {
            ctx->pc = 0x398858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x398854u;
            // 0x398858: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x398870u;
            goto label_398870;
        }
    }
    ctx->pc = 0x39885Cu;
label_39885c:
    // 0x39885c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39885cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_398860:
    // 0x398860: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x398860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_398864:
    // 0x398864: 0x320f809  jalr        $t9
label_398868:
    if (ctx->pc == 0x398868u) {
        ctx->pc = 0x398868u;
            // 0x398868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39886Cu;
        goto label_39886c;
    }
    ctx->pc = 0x398864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39886Cu);
        ctx->pc = 0x398868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398864u;
            // 0x398868: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39886Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39886Cu; }
            if (ctx->pc != 0x39886Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39886Cu;
label_39886c:
    // 0x39886c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x39886cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_398870:
    // 0x398870: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_398874:
    // 0x398874: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_398878:
    // 0x398878: 0x3e00008  jr          $ra
label_39887c:
    if (ctx->pc == 0x39887Cu) {
        ctx->pc = 0x39887Cu;
            // 0x39887c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x398880u;
        goto label_398880;
    }
    ctx->pc = 0x398878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398878u;
            // 0x39887c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x398880u;
label_398880:
    // 0x398880: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x398880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_398884:
    // 0x398884: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x398884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_398888:
    // 0x398888: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x398888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_39888c:
    // 0x39888c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x39888cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_398890:
    // 0x398890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x398890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_398894:
    // 0x398894: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x398894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_398898:
    // 0x398898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39889c:
    // 0x39889c: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x39889cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
label_3988a0:
    // 0x3988a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3988a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3988a4:
    // 0x3988a4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3988a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3988a8:
    // 0x3988a8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3988a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3988ac:
    // 0x3988ac: 0x3443f000  ori         $v1, $v0, 0xF000
    ctx->pc = 0x3988acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3988b0:
    // 0x3988b0: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3988b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3988b4:
    // 0x3988b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3988b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3988b8:
    // 0x3988b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3988b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3988bc:
    // 0x3988bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3988bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3988c0:
    // 0x3988c0: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3988c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3988c4:
    // 0x3988c4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3988c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3988c8:
    // 0x3988c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3988c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3988cc:
    // 0x3988cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3988ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3988d0:
    // 0x3988d0: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x3988d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_3988d4:
    // 0x3988d4: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x3988d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3988d8:
    // 0x3988d8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3988d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3988dc:
    // 0x3988dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3988dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3988e0:
    // 0x3988e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3988e0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_3988e4:
    // 0x3988e4: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x3988e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_3988e8:
    // 0x3988e8: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x3988e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3988ec:
    // 0x3988ec: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x3988ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3988f0:
    // 0x3988f0: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x3988f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3988f4:
    // 0x3988f4: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x3988f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3988f8:
    // 0x3988f8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3988f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3988fc:
    // 0x3988fc: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3988fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_398900:
    // 0x398900: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x398900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_398904:
    // 0x398904: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x398904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_398908:
    // 0x398908: 0xc483002c  lwc1        $f3, 0x2C($a0)
    ctx->pc = 0x398908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_39890c:
    // 0x39890c: 0xc4820028  lwc1        $f2, 0x28($a0)
    ctx->pc = 0x39890cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_398910:
    // 0x398910: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x398910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_398914:
    // 0x398914: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x398914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_398918:
    // 0x398918: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x398918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_39891c:
    // 0x39891c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x39891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_398920:
    // 0x398920: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x398920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_398924:
    // 0x398924: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x398924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_398928:
    // 0x398928: 0xc0a3830  jal         func_28E0C0
label_39892c:
    if (ctx->pc == 0x39892Cu) {
        ctx->pc = 0x39892Cu;
            // 0x39892c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x398930u;
        goto label_398930;
    }
    ctx->pc = 0x398928u;
    SET_GPR_U32(ctx, 31, 0x398930u);
    ctx->pc = 0x39892Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398928u;
            // 0x39892c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398930u; }
        if (ctx->pc != 0x398930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398930u; }
        if (ctx->pc != 0x398930u) { return; }
    }
    ctx->pc = 0x398930u;
label_398930:
    // 0x398930: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x398930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_398934:
    // 0x398934: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x398934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_398938:
    // 0x398938: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x398938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_39893c:
    // 0x39893c: 0xc0a7a88  jal         func_29EA20
label_398940:
    if (ctx->pc == 0x398940u) {
        ctx->pc = 0x398940u;
            // 0x398940: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x398944u;
        goto label_398944;
    }
    ctx->pc = 0x39893Cu;
    SET_GPR_U32(ctx, 31, 0x398944u);
    ctx->pc = 0x398940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39893Cu;
            // 0x398940: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398944u; }
        if (ctx->pc != 0x398944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398944u; }
        if (ctx->pc != 0x398944u) { return; }
    }
    ctx->pc = 0x398944u;
label_398944:
    // 0x398944: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x398944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_398948:
    // 0x398948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x398948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39894c:
    // 0x39894c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_398950:
    if (ctx->pc == 0x398950u) {
        ctx->pc = 0x398950u;
            // 0x398950: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x398954u;
        goto label_398954;
    }
    ctx->pc = 0x39894Cu;
    {
        const bool branch_taken_0x39894c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x398950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39894Cu;
            // 0x398950: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39894c) {
            ctx->pc = 0x398988u;
            goto label_398988;
        }
    }
    ctx->pc = 0x398954u;
label_398954:
    // 0x398954: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x398954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_398958:
    // 0x398958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x398958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39895c:
    // 0x39895c: 0x8c436488  lw          $v1, 0x6488($v0)
    ctx->pc = 0x39895cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25736)));
label_398960:
    // 0x398960: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x398960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_398964:
    // 0x398964: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x398964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_398968:
    // 0x398968: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x398968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_39896c:
    // 0x39896c: 0xc08afe0  jal         func_22BF80
label_398970:
    if (ctx->pc == 0x398970u) {
        ctx->pc = 0x398970u;
            // 0x398970: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x398974u;
        goto label_398974;
    }
    ctx->pc = 0x39896Cu;
    SET_GPR_U32(ctx, 31, 0x398974u);
    ctx->pc = 0x398970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39896Cu;
            // 0x398970: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398974u; }
        if (ctx->pc != 0x398974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398974u; }
        if (ctx->pc != 0x398974u) { return; }
    }
    ctx->pc = 0x398974u;
label_398974:
    // 0x398974: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x398974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_398978:
    // 0x398978: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x398978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_39897c:
    // 0x39897c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39897cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_398980:
    // 0x398980: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x398980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_398984:
    // 0x398984: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x398984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_398988:
    // 0x398988: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x398988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39898c:
    // 0x39898c: 0xc08c798  jal         func_231E60
label_398990:
    if (ctx->pc == 0x398990u) {
        ctx->pc = 0x398990u;
            // 0x398990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398994u;
        goto label_398994;
    }
    ctx->pc = 0x39898Cu;
    SET_GPR_U32(ctx, 31, 0x398994u);
    ctx->pc = 0x398990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39898Cu;
            // 0x398990: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398994u; }
        if (ctx->pc != 0x398994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398994u; }
        if (ctx->pc != 0x398994u) { return; }
    }
    ctx->pc = 0x398994u;
label_398994:
    // 0x398994: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x398994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_398998:
    // 0x398998: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x398998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39899c:
    // 0x39899c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x39899cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3989a0:
    // 0x3989a0: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x3989a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_3989a4:
    // 0x3989a4: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x3989a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_3989a8:
    // 0x3989a8: 0xc0e65e0  jal         func_399780
label_3989ac:
    if (ctx->pc == 0x3989ACu) {
        ctx->pc = 0x3989ACu;
            // 0x3989ac: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3989B0u;
        goto label_3989b0;
    }
    ctx->pc = 0x3989A8u;
    SET_GPR_U32(ctx, 31, 0x3989B0u);
    ctx->pc = 0x3989ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3989A8u;
            // 0x3989ac: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x399780u;
    if (runtime->hasFunction(0x399780u)) {
        auto targetFn = runtime->lookupFunction(0x399780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3989B0u; }
        if (ctx->pc != 0x3989B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00399780_0x399780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3989B0u; }
        if (ctx->pc != 0x3989B0u) { return; }
    }
    ctx->pc = 0x3989B0u;
label_3989b0:
    // 0x3989b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3989b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3989b4:
    // 0x3989b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3989b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3989b8:
    // 0x3989b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3989b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3989bc:
    // 0x3989bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3989bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3989c0:
    // 0x3989c0: 0x3e00008  jr          $ra
label_3989c4:
    if (ctx->pc == 0x3989C4u) {
        ctx->pc = 0x3989C4u;
            // 0x3989c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3989C8u;
        goto label_3989c8;
    }
    ctx->pc = 0x3989C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3989C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3989C0u;
            // 0x3989c4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3989C8u;
label_3989c8:
    // 0x3989c8: 0x0  nop
    ctx->pc = 0x3989c8u;
    // NOP
label_3989cc:
    // 0x3989cc: 0x0  nop
    ctx->pc = 0x3989ccu;
    // NOP
}
