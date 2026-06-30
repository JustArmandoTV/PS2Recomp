#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00522400
// Address: 0x522400 - 0x5228d0
void sub_00522400_0x522400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00522400_0x522400");
#endif

    switch (ctx->pc) {
        case 0x522400u: goto label_522400;
        case 0x522404u: goto label_522404;
        case 0x522408u: goto label_522408;
        case 0x52240cu: goto label_52240c;
        case 0x522410u: goto label_522410;
        case 0x522414u: goto label_522414;
        case 0x522418u: goto label_522418;
        case 0x52241cu: goto label_52241c;
        case 0x522420u: goto label_522420;
        case 0x522424u: goto label_522424;
        case 0x522428u: goto label_522428;
        case 0x52242cu: goto label_52242c;
        case 0x522430u: goto label_522430;
        case 0x522434u: goto label_522434;
        case 0x522438u: goto label_522438;
        case 0x52243cu: goto label_52243c;
        case 0x522440u: goto label_522440;
        case 0x522444u: goto label_522444;
        case 0x522448u: goto label_522448;
        case 0x52244cu: goto label_52244c;
        case 0x522450u: goto label_522450;
        case 0x522454u: goto label_522454;
        case 0x522458u: goto label_522458;
        case 0x52245cu: goto label_52245c;
        case 0x522460u: goto label_522460;
        case 0x522464u: goto label_522464;
        case 0x522468u: goto label_522468;
        case 0x52246cu: goto label_52246c;
        case 0x522470u: goto label_522470;
        case 0x522474u: goto label_522474;
        case 0x522478u: goto label_522478;
        case 0x52247cu: goto label_52247c;
        case 0x522480u: goto label_522480;
        case 0x522484u: goto label_522484;
        case 0x522488u: goto label_522488;
        case 0x52248cu: goto label_52248c;
        case 0x522490u: goto label_522490;
        case 0x522494u: goto label_522494;
        case 0x522498u: goto label_522498;
        case 0x52249cu: goto label_52249c;
        case 0x5224a0u: goto label_5224a0;
        case 0x5224a4u: goto label_5224a4;
        case 0x5224a8u: goto label_5224a8;
        case 0x5224acu: goto label_5224ac;
        case 0x5224b0u: goto label_5224b0;
        case 0x5224b4u: goto label_5224b4;
        case 0x5224b8u: goto label_5224b8;
        case 0x5224bcu: goto label_5224bc;
        case 0x5224c0u: goto label_5224c0;
        case 0x5224c4u: goto label_5224c4;
        case 0x5224c8u: goto label_5224c8;
        case 0x5224ccu: goto label_5224cc;
        case 0x5224d0u: goto label_5224d0;
        case 0x5224d4u: goto label_5224d4;
        case 0x5224d8u: goto label_5224d8;
        case 0x5224dcu: goto label_5224dc;
        case 0x5224e0u: goto label_5224e0;
        case 0x5224e4u: goto label_5224e4;
        case 0x5224e8u: goto label_5224e8;
        case 0x5224ecu: goto label_5224ec;
        case 0x5224f0u: goto label_5224f0;
        case 0x5224f4u: goto label_5224f4;
        case 0x5224f8u: goto label_5224f8;
        case 0x5224fcu: goto label_5224fc;
        case 0x522500u: goto label_522500;
        case 0x522504u: goto label_522504;
        case 0x522508u: goto label_522508;
        case 0x52250cu: goto label_52250c;
        case 0x522510u: goto label_522510;
        case 0x522514u: goto label_522514;
        case 0x522518u: goto label_522518;
        case 0x52251cu: goto label_52251c;
        case 0x522520u: goto label_522520;
        case 0x522524u: goto label_522524;
        case 0x522528u: goto label_522528;
        case 0x52252cu: goto label_52252c;
        case 0x522530u: goto label_522530;
        case 0x522534u: goto label_522534;
        case 0x522538u: goto label_522538;
        case 0x52253cu: goto label_52253c;
        case 0x522540u: goto label_522540;
        case 0x522544u: goto label_522544;
        case 0x522548u: goto label_522548;
        case 0x52254cu: goto label_52254c;
        case 0x522550u: goto label_522550;
        case 0x522554u: goto label_522554;
        case 0x522558u: goto label_522558;
        case 0x52255cu: goto label_52255c;
        case 0x522560u: goto label_522560;
        case 0x522564u: goto label_522564;
        case 0x522568u: goto label_522568;
        case 0x52256cu: goto label_52256c;
        case 0x522570u: goto label_522570;
        case 0x522574u: goto label_522574;
        case 0x522578u: goto label_522578;
        case 0x52257cu: goto label_52257c;
        case 0x522580u: goto label_522580;
        case 0x522584u: goto label_522584;
        case 0x522588u: goto label_522588;
        case 0x52258cu: goto label_52258c;
        case 0x522590u: goto label_522590;
        case 0x522594u: goto label_522594;
        case 0x522598u: goto label_522598;
        case 0x52259cu: goto label_52259c;
        case 0x5225a0u: goto label_5225a0;
        case 0x5225a4u: goto label_5225a4;
        case 0x5225a8u: goto label_5225a8;
        case 0x5225acu: goto label_5225ac;
        case 0x5225b0u: goto label_5225b0;
        case 0x5225b4u: goto label_5225b4;
        case 0x5225b8u: goto label_5225b8;
        case 0x5225bcu: goto label_5225bc;
        case 0x5225c0u: goto label_5225c0;
        case 0x5225c4u: goto label_5225c4;
        case 0x5225c8u: goto label_5225c8;
        case 0x5225ccu: goto label_5225cc;
        case 0x5225d0u: goto label_5225d0;
        case 0x5225d4u: goto label_5225d4;
        case 0x5225d8u: goto label_5225d8;
        case 0x5225dcu: goto label_5225dc;
        case 0x5225e0u: goto label_5225e0;
        case 0x5225e4u: goto label_5225e4;
        case 0x5225e8u: goto label_5225e8;
        case 0x5225ecu: goto label_5225ec;
        case 0x5225f0u: goto label_5225f0;
        case 0x5225f4u: goto label_5225f4;
        case 0x5225f8u: goto label_5225f8;
        case 0x5225fcu: goto label_5225fc;
        case 0x522600u: goto label_522600;
        case 0x522604u: goto label_522604;
        case 0x522608u: goto label_522608;
        case 0x52260cu: goto label_52260c;
        case 0x522610u: goto label_522610;
        case 0x522614u: goto label_522614;
        case 0x522618u: goto label_522618;
        case 0x52261cu: goto label_52261c;
        case 0x522620u: goto label_522620;
        case 0x522624u: goto label_522624;
        case 0x522628u: goto label_522628;
        case 0x52262cu: goto label_52262c;
        case 0x522630u: goto label_522630;
        case 0x522634u: goto label_522634;
        case 0x522638u: goto label_522638;
        case 0x52263cu: goto label_52263c;
        case 0x522640u: goto label_522640;
        case 0x522644u: goto label_522644;
        case 0x522648u: goto label_522648;
        case 0x52264cu: goto label_52264c;
        case 0x522650u: goto label_522650;
        case 0x522654u: goto label_522654;
        case 0x522658u: goto label_522658;
        case 0x52265cu: goto label_52265c;
        case 0x522660u: goto label_522660;
        case 0x522664u: goto label_522664;
        case 0x522668u: goto label_522668;
        case 0x52266cu: goto label_52266c;
        case 0x522670u: goto label_522670;
        case 0x522674u: goto label_522674;
        case 0x522678u: goto label_522678;
        case 0x52267cu: goto label_52267c;
        case 0x522680u: goto label_522680;
        case 0x522684u: goto label_522684;
        case 0x522688u: goto label_522688;
        case 0x52268cu: goto label_52268c;
        case 0x522690u: goto label_522690;
        case 0x522694u: goto label_522694;
        case 0x522698u: goto label_522698;
        case 0x52269cu: goto label_52269c;
        case 0x5226a0u: goto label_5226a0;
        case 0x5226a4u: goto label_5226a4;
        case 0x5226a8u: goto label_5226a8;
        case 0x5226acu: goto label_5226ac;
        case 0x5226b0u: goto label_5226b0;
        case 0x5226b4u: goto label_5226b4;
        case 0x5226b8u: goto label_5226b8;
        case 0x5226bcu: goto label_5226bc;
        case 0x5226c0u: goto label_5226c0;
        case 0x5226c4u: goto label_5226c4;
        case 0x5226c8u: goto label_5226c8;
        case 0x5226ccu: goto label_5226cc;
        case 0x5226d0u: goto label_5226d0;
        case 0x5226d4u: goto label_5226d4;
        case 0x5226d8u: goto label_5226d8;
        case 0x5226dcu: goto label_5226dc;
        case 0x5226e0u: goto label_5226e0;
        case 0x5226e4u: goto label_5226e4;
        case 0x5226e8u: goto label_5226e8;
        case 0x5226ecu: goto label_5226ec;
        case 0x5226f0u: goto label_5226f0;
        case 0x5226f4u: goto label_5226f4;
        case 0x5226f8u: goto label_5226f8;
        case 0x5226fcu: goto label_5226fc;
        case 0x522700u: goto label_522700;
        case 0x522704u: goto label_522704;
        case 0x522708u: goto label_522708;
        case 0x52270cu: goto label_52270c;
        case 0x522710u: goto label_522710;
        case 0x522714u: goto label_522714;
        case 0x522718u: goto label_522718;
        case 0x52271cu: goto label_52271c;
        case 0x522720u: goto label_522720;
        case 0x522724u: goto label_522724;
        case 0x522728u: goto label_522728;
        case 0x52272cu: goto label_52272c;
        case 0x522730u: goto label_522730;
        case 0x522734u: goto label_522734;
        case 0x522738u: goto label_522738;
        case 0x52273cu: goto label_52273c;
        case 0x522740u: goto label_522740;
        case 0x522744u: goto label_522744;
        case 0x522748u: goto label_522748;
        case 0x52274cu: goto label_52274c;
        case 0x522750u: goto label_522750;
        case 0x522754u: goto label_522754;
        case 0x522758u: goto label_522758;
        case 0x52275cu: goto label_52275c;
        case 0x522760u: goto label_522760;
        case 0x522764u: goto label_522764;
        case 0x522768u: goto label_522768;
        case 0x52276cu: goto label_52276c;
        case 0x522770u: goto label_522770;
        case 0x522774u: goto label_522774;
        case 0x522778u: goto label_522778;
        case 0x52277cu: goto label_52277c;
        case 0x522780u: goto label_522780;
        case 0x522784u: goto label_522784;
        case 0x522788u: goto label_522788;
        case 0x52278cu: goto label_52278c;
        case 0x522790u: goto label_522790;
        case 0x522794u: goto label_522794;
        case 0x522798u: goto label_522798;
        case 0x52279cu: goto label_52279c;
        case 0x5227a0u: goto label_5227a0;
        case 0x5227a4u: goto label_5227a4;
        case 0x5227a8u: goto label_5227a8;
        case 0x5227acu: goto label_5227ac;
        case 0x5227b0u: goto label_5227b0;
        case 0x5227b4u: goto label_5227b4;
        case 0x5227b8u: goto label_5227b8;
        case 0x5227bcu: goto label_5227bc;
        case 0x5227c0u: goto label_5227c0;
        case 0x5227c4u: goto label_5227c4;
        case 0x5227c8u: goto label_5227c8;
        case 0x5227ccu: goto label_5227cc;
        case 0x5227d0u: goto label_5227d0;
        case 0x5227d4u: goto label_5227d4;
        case 0x5227d8u: goto label_5227d8;
        case 0x5227dcu: goto label_5227dc;
        case 0x5227e0u: goto label_5227e0;
        case 0x5227e4u: goto label_5227e4;
        case 0x5227e8u: goto label_5227e8;
        case 0x5227ecu: goto label_5227ec;
        case 0x5227f0u: goto label_5227f0;
        case 0x5227f4u: goto label_5227f4;
        case 0x5227f8u: goto label_5227f8;
        case 0x5227fcu: goto label_5227fc;
        case 0x522800u: goto label_522800;
        case 0x522804u: goto label_522804;
        case 0x522808u: goto label_522808;
        case 0x52280cu: goto label_52280c;
        case 0x522810u: goto label_522810;
        case 0x522814u: goto label_522814;
        case 0x522818u: goto label_522818;
        case 0x52281cu: goto label_52281c;
        case 0x522820u: goto label_522820;
        case 0x522824u: goto label_522824;
        case 0x522828u: goto label_522828;
        case 0x52282cu: goto label_52282c;
        case 0x522830u: goto label_522830;
        case 0x522834u: goto label_522834;
        case 0x522838u: goto label_522838;
        case 0x52283cu: goto label_52283c;
        case 0x522840u: goto label_522840;
        case 0x522844u: goto label_522844;
        case 0x522848u: goto label_522848;
        case 0x52284cu: goto label_52284c;
        case 0x522850u: goto label_522850;
        case 0x522854u: goto label_522854;
        case 0x522858u: goto label_522858;
        case 0x52285cu: goto label_52285c;
        case 0x522860u: goto label_522860;
        case 0x522864u: goto label_522864;
        case 0x522868u: goto label_522868;
        case 0x52286cu: goto label_52286c;
        case 0x522870u: goto label_522870;
        case 0x522874u: goto label_522874;
        case 0x522878u: goto label_522878;
        case 0x52287cu: goto label_52287c;
        case 0x522880u: goto label_522880;
        case 0x522884u: goto label_522884;
        case 0x522888u: goto label_522888;
        case 0x52288cu: goto label_52288c;
        case 0x522890u: goto label_522890;
        case 0x522894u: goto label_522894;
        case 0x522898u: goto label_522898;
        case 0x52289cu: goto label_52289c;
        case 0x5228a0u: goto label_5228a0;
        case 0x5228a4u: goto label_5228a4;
        case 0x5228a8u: goto label_5228a8;
        case 0x5228acu: goto label_5228ac;
        case 0x5228b0u: goto label_5228b0;
        case 0x5228b4u: goto label_5228b4;
        case 0x5228b8u: goto label_5228b8;
        case 0x5228bcu: goto label_5228bc;
        case 0x5228c0u: goto label_5228c0;
        case 0x5228c4u: goto label_5228c4;
        case 0x5228c8u: goto label_5228c8;
        case 0x5228ccu: goto label_5228cc;
        default: break;
    }

    ctx->pc = 0x522400u;

label_522400:
    // 0x522400: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_522404:
    // 0x522404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_522408:
    // 0x522408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52240c:
    // 0x52240c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522410:
    // 0x522410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x522410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_522414:
    // 0x522414: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_522418:
    if (ctx->pc == 0x522418u) {
        ctx->pc = 0x522418u;
            // 0x522418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52241Cu;
        goto label_52241c;
    }
    ctx->pc = 0x522414u;
    {
        const bool branch_taken_0x522414 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x522418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522414u;
            // 0x522418: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522414) {
            ctx->pc = 0x522548u;
            goto label_522548;
        }
    }
    ctx->pc = 0x52241Cu;
label_52241c:
    // 0x52241c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52241cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_522420:
    // 0x522420: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_522424:
    // 0x522424: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x522424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
label_522428:
    // 0x522428: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x522428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_52242c:
    // 0x52242c: 0x24425ff8  addiu       $v0, $v0, 0x5FF8
    ctx->pc = 0x52242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24568));
label_522430:
    // 0x522430: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x522430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_522434:
    // 0x522434: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x522434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_522438:
    // 0x522438: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x522438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_52243c:
    // 0x52243c: 0xc0407c0  jal         func_101F00
label_522440:
    if (ctx->pc == 0x522440u) {
        ctx->pc = 0x522440u;
            // 0x522440: 0x24a52560  addiu       $a1, $a1, 0x2560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
        ctx->pc = 0x522444u;
        goto label_522444;
    }
    ctx->pc = 0x52243Cu;
    SET_GPR_U32(ctx, 31, 0x522444u);
    ctx->pc = 0x522440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52243Cu;
            // 0x522440: 0x24a52560  addiu       $a1, $a1, 0x2560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522444u; }
        if (ctx->pc != 0x522444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522444u; }
        if (ctx->pc != 0x522444u) { return; }
    }
    ctx->pc = 0x522444u;
label_522444:
    // 0x522444: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x522444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_522448:
    // 0x522448: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_52244c:
    if (ctx->pc == 0x52244Cu) {
        ctx->pc = 0x52244Cu;
            // 0x52244c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x522450u;
        goto label_522450;
    }
    ctx->pc = 0x522448u;
    {
        const bool branch_taken_0x522448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x522448) {
            ctx->pc = 0x52244Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522448u;
            // 0x52244c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52245Cu;
            goto label_52245c;
        }
    }
    ctx->pc = 0x522450u;
label_522450:
    // 0x522450: 0xc07507c  jal         func_1D41F0
label_522454:
    if (ctx->pc == 0x522454u) {
        ctx->pc = 0x522454u;
            // 0x522454: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x522458u;
        goto label_522458;
    }
    ctx->pc = 0x522450u;
    SET_GPR_U32(ctx, 31, 0x522458u);
    ctx->pc = 0x522454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522450u;
            // 0x522454: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522458u; }
        if (ctx->pc != 0x522458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522458u; }
        if (ctx->pc != 0x522458u) { return; }
    }
    ctx->pc = 0x522458u;
label_522458:
    // 0x522458: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x522458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_52245c:
    // 0x52245c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_522460:
    if (ctx->pc == 0x522460u) {
        ctx->pc = 0x522460u;
            // 0x522460: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x522464u;
        goto label_522464;
    }
    ctx->pc = 0x52245Cu;
    {
        const bool branch_taken_0x52245c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52245c) {
            ctx->pc = 0x522460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52245Cu;
            // 0x522460: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52248Cu;
            goto label_52248c;
        }
    }
    ctx->pc = 0x522464u;
label_522464:
    // 0x522464: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_522468:
    if (ctx->pc == 0x522468u) {
        ctx->pc = 0x52246Cu;
        goto label_52246c;
    }
    ctx->pc = 0x522464u;
    {
        const bool branch_taken_0x522464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x522464) {
            ctx->pc = 0x522488u;
            goto label_522488;
        }
    }
    ctx->pc = 0x52246Cu;
label_52246c:
    // 0x52246c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_522470:
    if (ctx->pc == 0x522470u) {
        ctx->pc = 0x522474u;
        goto label_522474;
    }
    ctx->pc = 0x52246Cu;
    {
        const bool branch_taken_0x52246c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52246c) {
            ctx->pc = 0x522488u;
            goto label_522488;
        }
    }
    ctx->pc = 0x522474u;
label_522474:
    // 0x522474: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x522474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_522478:
    // 0x522478: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_52247c:
    if (ctx->pc == 0x52247Cu) {
        ctx->pc = 0x522480u;
        goto label_522480;
    }
    ctx->pc = 0x522478u;
    {
        const bool branch_taken_0x522478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x522478) {
            ctx->pc = 0x522488u;
            goto label_522488;
        }
    }
    ctx->pc = 0x522480u;
label_522480:
    // 0x522480: 0xc0400a8  jal         func_1002A0
label_522484:
    if (ctx->pc == 0x522484u) {
        ctx->pc = 0x522488u;
        goto label_522488;
    }
    ctx->pc = 0x522480u;
    SET_GPR_U32(ctx, 31, 0x522488u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522488u; }
        if (ctx->pc != 0x522488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522488u; }
        if (ctx->pc != 0x522488u) { return; }
    }
    ctx->pc = 0x522488u;
label_522488:
    // 0x522488: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x522488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_52248c:
    // 0x52248c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_522490:
    if (ctx->pc == 0x522490u) {
        ctx->pc = 0x522490u;
            // 0x522490: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x522494u;
        goto label_522494;
    }
    ctx->pc = 0x52248Cu;
    {
        const bool branch_taken_0x52248c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52248c) {
            ctx->pc = 0x522490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52248Cu;
            // 0x522490: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5224BCu;
            goto label_5224bc;
        }
    }
    ctx->pc = 0x522494u;
label_522494:
    // 0x522494: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_522498:
    if (ctx->pc == 0x522498u) {
        ctx->pc = 0x52249Cu;
        goto label_52249c;
    }
    ctx->pc = 0x522494u;
    {
        const bool branch_taken_0x522494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x522494) {
            ctx->pc = 0x5224B8u;
            goto label_5224b8;
        }
    }
    ctx->pc = 0x52249Cu;
label_52249c:
    // 0x52249c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5224a0:
    if (ctx->pc == 0x5224A0u) {
        ctx->pc = 0x5224A4u;
        goto label_5224a4;
    }
    ctx->pc = 0x52249Cu;
    {
        const bool branch_taken_0x52249c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x52249c) {
            ctx->pc = 0x5224B8u;
            goto label_5224b8;
        }
    }
    ctx->pc = 0x5224A4u;
label_5224a4:
    // 0x5224a4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x5224a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_5224a8:
    // 0x5224a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_5224ac:
    if (ctx->pc == 0x5224ACu) {
        ctx->pc = 0x5224B0u;
        goto label_5224b0;
    }
    ctx->pc = 0x5224A8u;
    {
        const bool branch_taken_0x5224a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5224a8) {
            ctx->pc = 0x5224B8u;
            goto label_5224b8;
        }
    }
    ctx->pc = 0x5224B0u;
label_5224b0:
    // 0x5224b0: 0xc0400a8  jal         func_1002A0
label_5224b4:
    if (ctx->pc == 0x5224B4u) {
        ctx->pc = 0x5224B8u;
        goto label_5224b8;
    }
    ctx->pc = 0x5224B0u;
    SET_GPR_U32(ctx, 31, 0x5224B8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5224B8u; }
        if (ctx->pc != 0x5224B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5224B8u; }
        if (ctx->pc != 0x5224B8u) { return; }
    }
    ctx->pc = 0x5224B8u;
label_5224b8:
    // 0x5224b8: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x5224b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_5224bc:
    // 0x5224bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_5224c0:
    if (ctx->pc == 0x5224C0u) {
        ctx->pc = 0x5224C4u;
        goto label_5224c4;
    }
    ctx->pc = 0x5224BCu;
    {
        const bool branch_taken_0x5224bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5224bc) {
            ctx->pc = 0x5224D8u;
            goto label_5224d8;
        }
    }
    ctx->pc = 0x5224C4u;
label_5224c4:
    // 0x5224c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5224c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5224c8:
    // 0x5224c8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5224c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5224cc:
    // 0x5224cc: 0x24635fa8  addiu       $v1, $v1, 0x5FA8
    ctx->pc = 0x5224ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24488));
label_5224d0:
    // 0x5224d0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x5224d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_5224d4:
    // 0x5224d4: 0xac40ab50  sw          $zero, -0x54B0($v0)
    ctx->pc = 0x5224d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945616), GPR_U32(ctx, 0));
label_5224d8:
    // 0x5224d8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_5224dc:
    if (ctx->pc == 0x5224DCu) {
        ctx->pc = 0x5224DCu;
            // 0x5224dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x5224E0u;
        goto label_5224e0;
    }
    ctx->pc = 0x5224D8u;
    {
        const bool branch_taken_0x5224d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5224d8) {
            ctx->pc = 0x5224DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5224D8u;
            // 0x5224dc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522534u;
            goto label_522534;
        }
    }
    ctx->pc = 0x5224E0u;
label_5224e0:
    // 0x5224e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5224e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5224e4:
    // 0x5224e4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5224e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_5224e8:
    // 0x5224e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x5224e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_5224ec:
    // 0x5224ec: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x5224ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_5224f0:
    // 0x5224f0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_5224f4:
    if (ctx->pc == 0x5224F4u) {
        ctx->pc = 0x5224F4u;
            // 0x5224f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x5224F8u;
        goto label_5224f8;
    }
    ctx->pc = 0x5224F0u;
    {
        const bool branch_taken_0x5224f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5224f0) {
            ctx->pc = 0x5224F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5224F0u;
            // 0x5224f4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52250Cu;
            goto label_52250c;
        }
    }
    ctx->pc = 0x5224F8u;
label_5224f8:
    // 0x5224f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5224f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5224fc:
    // 0x5224fc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x5224fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_522500:
    // 0x522500: 0x320f809  jalr        $t9
label_522504:
    if (ctx->pc == 0x522504u) {
        ctx->pc = 0x522504u;
            // 0x522504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x522508u;
        goto label_522508;
    }
    ctx->pc = 0x522500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x522508u);
        ctx->pc = 0x522504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522500u;
            // 0x522504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x522508u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x522508u; }
            if (ctx->pc != 0x522508u) { return; }
        }
        }
    }
    ctx->pc = 0x522508u;
label_522508:
    // 0x522508: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x522508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_52250c:
    // 0x52250c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_522510:
    if (ctx->pc == 0x522510u) {
        ctx->pc = 0x522510u;
            // 0x522510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522514u;
        goto label_522514;
    }
    ctx->pc = 0x52250Cu;
    {
        const bool branch_taken_0x52250c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x52250c) {
            ctx->pc = 0x522510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x52250Cu;
            // 0x522510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522528u;
            goto label_522528;
        }
    }
    ctx->pc = 0x522514u;
label_522514:
    // 0x522514: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x522514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_522518:
    // 0x522518: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x522518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_52251c:
    // 0x52251c: 0x320f809  jalr        $t9
label_522520:
    if (ctx->pc == 0x522520u) {
        ctx->pc = 0x522520u;
            // 0x522520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x522524u;
        goto label_522524;
    }
    ctx->pc = 0x52251Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x522524u);
        ctx->pc = 0x522520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52251Cu;
            // 0x522520: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x522524u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x522524u; }
            if (ctx->pc != 0x522524u) { return; }
        }
        }
    }
    ctx->pc = 0x522524u;
label_522524:
    // 0x522524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x522524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_522528:
    // 0x522528: 0xc075bf8  jal         func_1D6FE0
label_52252c:
    if (ctx->pc == 0x52252Cu) {
        ctx->pc = 0x52252Cu;
            // 0x52252c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522530u;
        goto label_522530;
    }
    ctx->pc = 0x522528u;
    SET_GPR_U32(ctx, 31, 0x522530u);
    ctx->pc = 0x52252Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522528u;
            // 0x52252c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522530u; }
        if (ctx->pc != 0x522530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522530u; }
        if (ctx->pc != 0x522530u) { return; }
    }
    ctx->pc = 0x522530u;
label_522530:
    // 0x522530: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x522530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_522534:
    // 0x522534: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x522534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_522538:
    // 0x522538: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_52253c:
    if (ctx->pc == 0x52253Cu) {
        ctx->pc = 0x52253Cu;
            // 0x52253c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522540u;
        goto label_522540;
    }
    ctx->pc = 0x522538u;
    {
        const bool branch_taken_0x522538 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x522538) {
            ctx->pc = 0x52253Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522538u;
            // 0x52253c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x52254Cu;
            goto label_52254c;
        }
    }
    ctx->pc = 0x522540u;
label_522540:
    // 0x522540: 0xc0400a8  jal         func_1002A0
label_522544:
    if (ctx->pc == 0x522544u) {
        ctx->pc = 0x522544u;
            // 0x522544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522548u;
        goto label_522548;
    }
    ctx->pc = 0x522540u;
    SET_GPR_U32(ctx, 31, 0x522548u);
    ctx->pc = 0x522544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522540u;
            // 0x522544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522548u; }
        if (ctx->pc != 0x522548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522548u; }
        if (ctx->pc != 0x522548u) { return; }
    }
    ctx->pc = 0x522548u;
label_522548:
    // 0x522548: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x522548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_52254c:
    // 0x52254c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x52254cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_522550:
    // 0x522550: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_522554:
    // 0x522554: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522558:
    // 0x522558: 0x3e00008  jr          $ra
label_52255c:
    if (ctx->pc == 0x52255Cu) {
        ctx->pc = 0x52255Cu;
            // 0x52255c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x522560u;
        goto label_522560;
    }
    ctx->pc = 0x522558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52255Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522558u;
            // 0x52255c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522560u;
label_522560:
    // 0x522560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_522564:
    // 0x522564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_522568:
    // 0x522568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52256c:
    // 0x52256c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522570:
    // 0x522570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x522570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_522574:
    // 0x522574: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_522578:
    if (ctx->pc == 0x522578u) {
        ctx->pc = 0x522578u;
            // 0x522578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52257Cu;
        goto label_52257c;
    }
    ctx->pc = 0x522574u;
    {
        const bool branch_taken_0x522574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x522578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522574u;
            // 0x522578: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522574) {
            ctx->pc = 0x5225F8u;
            goto label_5225f8;
        }
    }
    ctx->pc = 0x52257Cu;
label_52257c:
    // 0x52257c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52257cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_522580:
    // 0x522580: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_522584:
    // 0x522584: 0x24636060  addiu       $v1, $v1, 0x6060
    ctx->pc = 0x522584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24672));
label_522588:
    // 0x522588: 0x244260a0  addiu       $v0, $v0, 0x60A0
    ctx->pc = 0x522588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24736));
label_52258c:
    // 0x52258c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52258cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_522590:
    // 0x522590: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x522590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_522594:
    // 0x522594: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x522594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_522598:
    // 0x522598: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x522598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_52259c:
    // 0x52259c: 0x320f809  jalr        $t9
label_5225a0:
    if (ctx->pc == 0x5225A0u) {
        ctx->pc = 0x5225A4u;
        goto label_5225a4;
    }
    ctx->pc = 0x52259Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5225A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5225A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5225A4u; }
            if (ctx->pc != 0x5225A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5225A4u;
label_5225a4:
    // 0x5225a4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_5225a8:
    if (ctx->pc == 0x5225A8u) {
        ctx->pc = 0x5225A8u;
            // 0x5225a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x5225ACu;
        goto label_5225ac;
    }
    ctx->pc = 0x5225A4u;
    {
        const bool branch_taken_0x5225a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5225a4) {
            ctx->pc = 0x5225A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5225A4u;
            // 0x5225a8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5225E4u;
            goto label_5225e4;
        }
    }
    ctx->pc = 0x5225ACu;
label_5225ac:
    // 0x5225ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5225acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5225b0:
    // 0x5225b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5225b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5225b4:
    // 0x5225b4: 0x24632510  addiu       $v1, $v1, 0x2510
    ctx->pc = 0x5225b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9488));
label_5225b8:
    // 0x5225b8: 0x24422550  addiu       $v0, $v0, 0x2550
    ctx->pc = 0x5225b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
label_5225bc:
    // 0x5225bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5225bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5225c0:
    // 0x5225c0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x5225c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_5225c4:
    // 0x5225c4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5225c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5225c8:
    // 0x5225c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5225c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_5225cc:
    // 0x5225cc: 0x320f809  jalr        $t9
label_5225d0:
    if (ctx->pc == 0x5225D0u) {
        ctx->pc = 0x5225D0u;
            // 0x5225d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5225D4u;
        goto label_5225d4;
    }
    ctx->pc = 0x5225CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5225D4u);
        ctx->pc = 0x5225D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5225CCu;
            // 0x5225d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5225D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5225D4u; }
            if (ctx->pc != 0x5225D4u) { return; }
        }
        }
    }
    ctx->pc = 0x5225D4u;
label_5225d4:
    // 0x5225d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5225d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5225d8:
    // 0x5225d8: 0xc12e684  jal         func_4B9A10
label_5225dc:
    if (ctx->pc == 0x5225DCu) {
        ctx->pc = 0x5225DCu;
            // 0x5225dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5225E0u;
        goto label_5225e0;
    }
    ctx->pc = 0x5225D8u;
    SET_GPR_U32(ctx, 31, 0x5225E0u);
    ctx->pc = 0x5225DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5225D8u;
            // 0x5225dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5225E0u; }
        if (ctx->pc != 0x5225E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5225E0u; }
        if (ctx->pc != 0x5225E0u) { return; }
    }
    ctx->pc = 0x5225E0u;
label_5225e0:
    // 0x5225e0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5225e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_5225e4:
    // 0x5225e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5225e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5225e8:
    // 0x5225e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5225ec:
    if (ctx->pc == 0x5225ECu) {
        ctx->pc = 0x5225ECu;
            // 0x5225ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5225F0u;
        goto label_5225f0;
    }
    ctx->pc = 0x5225E8u;
    {
        const bool branch_taken_0x5225e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5225e8) {
            ctx->pc = 0x5225ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5225E8u;
            // 0x5225ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5225FCu;
            goto label_5225fc;
        }
    }
    ctx->pc = 0x5225F0u;
label_5225f0:
    // 0x5225f0: 0xc0400a8  jal         func_1002A0
label_5225f4:
    if (ctx->pc == 0x5225F4u) {
        ctx->pc = 0x5225F4u;
            // 0x5225f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5225F8u;
        goto label_5225f8;
    }
    ctx->pc = 0x5225F0u;
    SET_GPR_U32(ctx, 31, 0x5225F8u);
    ctx->pc = 0x5225F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5225F0u;
            // 0x5225f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5225F8u; }
        if (ctx->pc != 0x5225F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5225F8u; }
        if (ctx->pc != 0x5225F8u) { return; }
    }
    ctx->pc = 0x5225F8u;
label_5225f8:
    // 0x5225f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5225f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5225fc:
    // 0x5225fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5225fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_522600:
    // 0x522600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_522604:
    // 0x522604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522608:
    // 0x522608: 0x3e00008  jr          $ra
label_52260c:
    if (ctx->pc == 0x52260Cu) {
        ctx->pc = 0x52260Cu;
            // 0x52260c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x522610u;
        goto label_522610;
    }
    ctx->pc = 0x522608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52260Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522608u;
            // 0x52260c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522610u;
label_522610:
    // 0x522610: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x522610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_522614:
    // 0x522614: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x522614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_522618:
    // 0x522618: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x522618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_52261c:
    // 0x52261c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x52261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_522620:
    // 0x522620: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x522620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_522624:
    // 0x522624: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x522624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_522628:
    // 0x522628: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x522628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_52262c:
    // 0x52262c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x52262cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_522630:
    // 0x522630: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522634:
    // 0x522634: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x522634u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_522638:
    // 0x522638: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_52263c:
    if (ctx->pc == 0x52263Cu) {
        ctx->pc = 0x52263Cu;
            // 0x52263c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522640u;
        goto label_522640;
    }
    ctx->pc = 0x522638u;
    {
        const bool branch_taken_0x522638 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x52263Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522638u;
            // 0x52263c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522638) {
            ctx->pc = 0x52269Cu;
            goto label_52269c;
        }
    }
    ctx->pc = 0x522640u;
label_522640:
    // 0x522640: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x522640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_522644:
    // 0x522644: 0x50a30010  beql        $a1, $v1, . + 4 + (0x10 << 2)
label_522648:
    if (ctx->pc == 0x522648u) {
        ctx->pc = 0x522648u;
            // 0x522648: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x52264Cu;
        goto label_52264c;
    }
    ctx->pc = 0x522644u;
    {
        const bool branch_taken_0x522644 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x522644) {
            ctx->pc = 0x522648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522644u;
            // 0x522648: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522688u;
            goto label_522688;
        }
    }
    ctx->pc = 0x52264Cu;
label_52264c:
    // 0x52264c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x52264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_522650:
    // 0x522650: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_522654:
    if (ctx->pc == 0x522654u) {
        ctx->pc = 0x522658u;
        goto label_522658;
    }
    ctx->pc = 0x522650u;
    {
        const bool branch_taken_0x522650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x522650) {
            ctx->pc = 0x522660u;
            goto label_522660;
        }
    }
    ctx->pc = 0x522658u;
label_522658:
    // 0x522658: 0x10000043  b           . + 4 + (0x43 << 2)
label_52265c:
    if (ctx->pc == 0x52265Cu) {
        ctx->pc = 0x52265Cu;
            // 0x52265c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x522660u;
        goto label_522660;
    }
    ctx->pc = 0x522658u;
    {
        const bool branch_taken_0x522658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52265Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522658u;
            // 0x52265c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522658) {
            ctx->pc = 0x522768u;
            goto label_522768;
        }
    }
    ctx->pc = 0x522660u;
label_522660:
    // 0x522660: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x522660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_522664:
    // 0x522664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x522664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_522668:
    // 0x522668: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x522668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_52266c:
    // 0x52266c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x52266cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_522670:
    // 0x522670: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x522670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_522674:
    // 0x522674: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x522674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_522678:
    // 0x522678: 0x320f809  jalr        $t9
label_52267c:
    if (ctx->pc == 0x52267Cu) {
        ctx->pc = 0x52267Cu;
            // 0x52267c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x522680u;
        goto label_522680;
    }
    ctx->pc = 0x522678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x522680u);
        ctx->pc = 0x52267Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522678u;
            // 0x52267c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x522680u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x522680u; }
            if (ctx->pc != 0x522680u) { return; }
        }
        }
    }
    ctx->pc = 0x522680u;
label_522680:
    // 0x522680: 0x10000038  b           . + 4 + (0x38 << 2)
label_522684:
    if (ctx->pc == 0x522684u) {
        ctx->pc = 0x522688u;
        goto label_522688;
    }
    ctx->pc = 0x522680u;
    {
        const bool branch_taken_0x522680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x522680) {
            ctx->pc = 0x522764u;
            goto label_522764;
        }
    }
    ctx->pc = 0x522688u;
label_522688:
    // 0x522688: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x522688u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_52268c:
    // 0x52268c: 0x320f809  jalr        $t9
label_522690:
    if (ctx->pc == 0x522690u) {
        ctx->pc = 0x522694u;
        goto label_522694;
    }
    ctx->pc = 0x52268Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x522694u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x522694u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x522694u; }
            if (ctx->pc != 0x522694u) { return; }
        }
        }
    }
    ctx->pc = 0x522694u;
label_522694:
    // 0x522694: 0x10000033  b           . + 4 + (0x33 << 2)
label_522698:
    if (ctx->pc == 0x522698u) {
        ctx->pc = 0x52269Cu;
        goto label_52269c;
    }
    ctx->pc = 0x522694u;
    {
        const bool branch_taken_0x522694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x522694) {
            ctx->pc = 0x522764u;
            goto label_522764;
        }
    }
    ctx->pc = 0x52269Cu;
label_52269c:
    // 0x52269c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x52269cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_5226a0:
    // 0x5226a0: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_5226a4:
    if (ctx->pc == 0x5226A4u) {
        ctx->pc = 0x5226A8u;
        goto label_5226a8;
    }
    ctx->pc = 0x5226A0u;
    {
        const bool branch_taken_0x5226a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5226a0) {
            ctx->pc = 0x522764u;
            goto label_522764;
        }
    }
    ctx->pc = 0x5226A8u;
label_5226a8:
    // 0x5226a8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5226a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5226ac:
    // 0x5226ac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5226acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5226b0:
    // 0x5226b0: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x5226b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_5226b4:
    // 0x5226b4: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x5226b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_5226b8:
    // 0x5226b8: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x5226b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_5226bc:
    // 0x5226bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5226bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5226c0:
    // 0x5226c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5226c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5226c4:
    // 0x5226c4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x5226c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_5226c8:
    // 0x5226c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5226c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5226cc:
    // 0x5226cc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x5226ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_5226d0:
    // 0x5226d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5226d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5226d4:
    // 0x5226d4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x5226d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5226d8:
    // 0x5226d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x5226d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_5226dc:
    // 0x5226dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x5226dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5226e0:
    // 0x5226e0: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x5226e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_5226e4:
    // 0x5226e4: 0x24940010  addiu       $s4, $a0, 0x10
    ctx->pc = 0x5226e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_5226e8:
    // 0x5226e8: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x5226e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_5226ec:
    // 0x5226ec: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x5226ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_5226f0:
    // 0x5226f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5226f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5226f4:
    // 0x5226f4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x5226f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5226f8:
    // 0x5226f8: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x5226f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
label_5226fc:
    // 0x5226fc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x5226fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_522700:
    // 0x522700: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x522700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_522704:
    // 0x522704: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x522704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_522708:
    // 0x522708: 0xc1353c8  jal         func_4D4F20
label_52270c:
    if (ctx->pc == 0x52270Cu) {
        ctx->pc = 0x52270Cu;
            // 0x52270c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x522710u;
        goto label_522710;
    }
    ctx->pc = 0x522708u;
    SET_GPR_U32(ctx, 31, 0x522710u);
    ctx->pc = 0x52270Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522708u;
            // 0x52270c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4F20u;
    if (runtime->hasFunction(0x4D4F20u)) {
        auto targetFn = runtime->lookupFunction(0x4D4F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522710u; }
        if (ctx->pc != 0x522710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4F20_0x4d4f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522710u; }
        if (ctx->pc != 0x522710u) { return; }
    }
    ctx->pc = 0x522710u;
label_522710:
    // 0x522710: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x522710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_522714:
    // 0x522714: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x522714u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_522718:
    // 0x522718: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_52271c:
    if (ctx->pc == 0x52271Cu) {
        ctx->pc = 0x52271Cu;
            // 0x52271c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x522720u;
        goto label_522720;
    }
    ctx->pc = 0x522718u;
    {
        const bool branch_taken_0x522718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x52271Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522718u;
            // 0x52271c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522718) {
            ctx->pc = 0x5226ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5226ec;
        }
    }
    ctx->pc = 0x522720u;
label_522720:
    // 0x522720: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x522720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_522724:
    // 0x522724: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x522724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_522728:
    // 0x522728: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_52272c:
    if (ctx->pc == 0x52272Cu) {
        ctx->pc = 0x522730u;
        goto label_522730;
    }
    ctx->pc = 0x522728u;
    {
        const bool branch_taken_0x522728 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x522728) {
            ctx->pc = 0x522764u;
            goto label_522764;
        }
    }
    ctx->pc = 0x522730u;
label_522730:
    // 0x522730: 0xc04e738  jal         func_139CE0
label_522734:
    if (ctx->pc == 0x522734u) {
        ctx->pc = 0x522734u;
            // 0x522734: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x522738u;
        goto label_522738;
    }
    ctx->pc = 0x522730u;
    SET_GPR_U32(ctx, 31, 0x522738u);
    ctx->pc = 0x522734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522730u;
            // 0x522734: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522738u; }
        if (ctx->pc != 0x522738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522738u; }
        if (ctx->pc != 0x522738u) { return; }
    }
    ctx->pc = 0x522738u;
label_522738:
    // 0x522738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x522738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52273c:
    // 0x52273c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x52273cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_522740:
    // 0x522740: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x522740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_522744:
    // 0x522744: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x522744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_522748:
    // 0x522748: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x522748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52274c:
    // 0x52274c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x52274cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_522750:
    // 0x522750: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x522750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_522754:
    // 0x522754: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x522754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_522758:
    // 0x522758: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x522758u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_52275c:
    // 0x52275c: 0xc055d28  jal         func_1574A0
label_522760:
    if (ctx->pc == 0x522760u) {
        ctx->pc = 0x522760u;
            // 0x522760: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522764u;
        goto label_522764;
    }
    ctx->pc = 0x52275Cu;
    SET_GPR_U32(ctx, 31, 0x522764u);
    ctx->pc = 0x522760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52275Cu;
            // 0x522760: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522764u; }
        if (ctx->pc != 0x522764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522764u; }
        if (ctx->pc != 0x522764u) { return; }
    }
    ctx->pc = 0x522764u;
label_522764:
    // 0x522764: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x522764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_522768:
    // 0x522768: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x522768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_52276c:
    // 0x52276c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x52276cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_522770:
    // 0x522770: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x522770u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_522774:
    // 0x522774: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x522774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_522778:
    // 0x522778: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522778u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52277c:
    // 0x52277c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52277cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522780:
    // 0x522780: 0x3e00008  jr          $ra
label_522784:
    if (ctx->pc == 0x522784u) {
        ctx->pc = 0x522784u;
            // 0x522784: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x522788u;
        goto label_522788;
    }
    ctx->pc = 0x522780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522780u;
            // 0x522784: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522788u;
label_522788:
    // 0x522788: 0x0  nop
    ctx->pc = 0x522788u;
    // NOP
label_52278c:
    // 0x52278c: 0x0  nop
    ctx->pc = 0x52278cu;
    // NOP
label_522790:
    // 0x522790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x522790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_522794:
    // 0x522794: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x522794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_522798:
    // 0x522798: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x522798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_52279c:
    // 0x52279c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5227a0:
    // 0x5227a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5227a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5227a4:
    // 0x5227a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5227a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5227a8:
    // 0x5227a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5227a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5227ac:
    // 0x5227ac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x5227acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5227b0:
    // 0x5227b0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_5227b4:
    if (ctx->pc == 0x5227B4u) {
        ctx->pc = 0x5227B4u;
            // 0x5227b4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5227B8u;
        goto label_5227b8;
    }
    ctx->pc = 0x5227B0u;
    {
        const bool branch_taken_0x5227b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5227B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5227B0u;
            // 0x5227b4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5227b0) {
            ctx->pc = 0x5227E4u;
            goto label_5227e4;
        }
    }
    ctx->pc = 0x5227B8u;
label_5227b8:
    // 0x5227b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5227b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5227bc:
    // 0x5227bc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_5227c0:
    if (ctx->pc == 0x5227C0u) {
        ctx->pc = 0x5227C0u;
            // 0x5227c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5227C4u;
        goto label_5227c4;
    }
    ctx->pc = 0x5227BCu;
    {
        const bool branch_taken_0x5227bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5227bc) {
            ctx->pc = 0x5227C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5227BCu;
            // 0x5227c0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5227D8u;
            goto label_5227d8;
        }
    }
    ctx->pc = 0x5227C4u;
label_5227c4:
    // 0x5227c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5227c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5227c8:
    // 0x5227c8: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_5227cc:
    if (ctx->pc == 0x5227CCu) {
        ctx->pc = 0x5227D0u;
        goto label_5227d0;
    }
    ctx->pc = 0x5227C8u;
    {
        const bool branch_taken_0x5227c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5227c8) {
            ctx->pc = 0x522828u;
            goto label_522828;
        }
    }
    ctx->pc = 0x5227D0u;
label_5227d0:
    // 0x5227d0: 0x10000015  b           . + 4 + (0x15 << 2)
label_5227d4:
    if (ctx->pc == 0x5227D4u) {
        ctx->pc = 0x5227D8u;
        goto label_5227d8;
    }
    ctx->pc = 0x5227D0u;
    {
        const bool branch_taken_0x5227d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5227d0) {
            ctx->pc = 0x522828u;
            goto label_522828;
        }
    }
    ctx->pc = 0x5227D8u;
label_5227d8:
    // 0x5227d8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5227d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5227dc:
    // 0x5227dc: 0x320f809  jalr        $t9
label_5227e0:
    if (ctx->pc == 0x5227E0u) {
        ctx->pc = 0x5227E4u;
        goto label_5227e4;
    }
    ctx->pc = 0x5227DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5227E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5227E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5227E4u; }
            if (ctx->pc != 0x5227E4u) { return; }
        }
        }
    }
    ctx->pc = 0x5227E4u;
label_5227e4:
    // 0x5227e4: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x5227e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_5227e8:
    // 0x5227e8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_5227ec:
    if (ctx->pc == 0x5227ECu) {
        ctx->pc = 0x5227F0u;
        goto label_5227f0;
    }
    ctx->pc = 0x5227E8u;
    {
        const bool branch_taken_0x5227e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x5227e8) {
            ctx->pc = 0x522828u;
            goto label_522828;
        }
    }
    ctx->pc = 0x5227F0u;
label_5227f0:
    // 0x5227f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x5227f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5227f4:
    // 0x5227f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x5227f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5227f8:
    // 0x5227f8: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x5227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_5227fc:
    // 0x5227fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x5227fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_522800:
    // 0x522800: 0xc0e3658  jal         func_38D960
label_522804:
    if (ctx->pc == 0x522804u) {
        ctx->pc = 0x522804u;
            // 0x522804: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x522808u;
        goto label_522808;
    }
    ctx->pc = 0x522800u;
    SET_GPR_U32(ctx, 31, 0x522808u);
    ctx->pc = 0x522804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522800u;
            // 0x522804: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522808u; }
        if (ctx->pc != 0x522808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522808u; }
        if (ctx->pc != 0x522808u) { return; }
    }
    ctx->pc = 0x522808u;
label_522808:
    // 0x522808: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x522808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_52280c:
    // 0x52280c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x52280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_522810:
    // 0x522810: 0xc1352a4  jal         func_4D4A90
label_522814:
    if (ctx->pc == 0x522814u) {
        ctx->pc = 0x522814u;
            // 0x522814: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x522818u;
        goto label_522818;
    }
    ctx->pc = 0x522810u;
    SET_GPR_U32(ctx, 31, 0x522818u);
    ctx->pc = 0x522814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522810u;
            // 0x522814: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4A90u;
    if (runtime->hasFunction(0x4D4A90u)) {
        auto targetFn = runtime->lookupFunction(0x4D4A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522818u; }
        if (ctx->pc != 0x522818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4A90_0x4d4a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522818u; }
        if (ctx->pc != 0x522818u) { return; }
    }
    ctx->pc = 0x522818u;
label_522818:
    // 0x522818: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x522818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52281c:
    // 0x52281c: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x52281cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_522820:
    // 0x522820: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_522824:
    if (ctx->pc == 0x522824u) {
        ctx->pc = 0x522824u;
            // 0x522824: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x522828u;
        goto label_522828;
    }
    ctx->pc = 0x522820u;
    {
        const bool branch_taken_0x522820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x522824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522820u;
            // 0x522824: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522820) {
            ctx->pc = 0x5227F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5227f8;
        }
    }
    ctx->pc = 0x522828u;
label_522828:
    // 0x522828: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x522828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_52282c:
    // 0x52282c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x52282cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_522830:
    // 0x522830: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x522830u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_522834:
    // 0x522834: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_522838:
    // 0x522838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52283c:
    // 0x52283c: 0x3e00008  jr          $ra
label_522840:
    if (ctx->pc == 0x522840u) {
        ctx->pc = 0x522840u;
            // 0x522840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x522844u;
        goto label_522844;
    }
    ctx->pc = 0x52283Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52283Cu;
            // 0x522840: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522844u;
label_522844:
    // 0x522844: 0x0  nop
    ctx->pc = 0x522844u;
    // NOP
label_522848:
    // 0x522848: 0x0  nop
    ctx->pc = 0x522848u;
    // NOP
label_52284c:
    // 0x52284c: 0x0  nop
    ctx->pc = 0x52284cu;
    // NOP
label_522850:
    // 0x522850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x522850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_522854:
    // 0x522854: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x522854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_522858:
    // 0x522858: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x522858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_52285c:
    // 0x52285c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x52285cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_522860:
    // 0x522860: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_522864:
    // 0x522864: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522868:
    // 0x522868: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x522868u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_52286c:
    // 0x52286c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_522870:
    if (ctx->pc == 0x522870u) {
        ctx->pc = 0x522870u;
            // 0x522870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522874u;
        goto label_522874;
    }
    ctx->pc = 0x52286Cu;
    {
        const bool branch_taken_0x52286c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x522870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52286Cu;
            // 0x522870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52286c) {
            ctx->pc = 0x5228A8u;
            goto label_5228a8;
        }
    }
    ctx->pc = 0x522874u;
label_522874:
    // 0x522874: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x522874u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_522878:
    // 0x522878: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x522878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_52287c:
    // 0x52287c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x52287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_522880:
    // 0x522880: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x522880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_522884:
    // 0x522884: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x522884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_522888:
    // 0x522888: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x522888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_52288c:
    // 0x52288c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x52288cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_522890:
    // 0x522890: 0x320f809  jalr        $t9
label_522894:
    if (ctx->pc == 0x522894u) {
        ctx->pc = 0x522898u;
        goto label_522898;
    }
    ctx->pc = 0x522890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x522898u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x522898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x522898u; }
            if (ctx->pc != 0x522898u) { return; }
        }
        }
    }
    ctx->pc = 0x522898u;
label_522898:
    // 0x522898: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x522898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_52289c:
    // 0x52289c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x52289cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_5228a0:
    // 0x5228a0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_5228a4:
    if (ctx->pc == 0x5228A4u) {
        ctx->pc = 0x5228A4u;
            // 0x5228a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x5228A8u;
        goto label_5228a8;
    }
    ctx->pc = 0x5228A0u;
    {
        const bool branch_taken_0x5228a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5228A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5228A0u;
            // 0x5228a4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5228a0) {
            ctx->pc = 0x52287Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_52287c;
        }
    }
    ctx->pc = 0x5228A8u;
label_5228a8:
    // 0x5228a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x5228a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_5228ac:
    // 0x5228ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5228acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5228b0:
    // 0x5228b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5228b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5228b4:
    // 0x5228b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5228b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5228b8:
    // 0x5228b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5228b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5228bc:
    // 0x5228bc: 0x3e00008  jr          $ra
label_5228c0:
    if (ctx->pc == 0x5228C0u) {
        ctx->pc = 0x5228C0u;
            // 0x5228c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5228C4u;
        goto label_5228c4;
    }
    ctx->pc = 0x5228BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5228C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5228BCu;
            // 0x5228c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5228C4u;
label_5228c4:
    // 0x5228c4: 0x0  nop
    ctx->pc = 0x5228c4u;
    // NOP
label_5228c8:
    // 0x5228c8: 0x0  nop
    ctx->pc = 0x5228c8u;
    // NOP
label_5228cc:
    // 0x5228cc: 0x0  nop
    ctx->pc = 0x5228ccu;
    // NOP
}
