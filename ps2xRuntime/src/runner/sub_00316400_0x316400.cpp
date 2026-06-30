#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316400
// Address: 0x316400 - 0x316990
void sub_00316400_0x316400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316400_0x316400");
#endif

    switch (ctx->pc) {
        case 0x316400u: goto label_316400;
        case 0x316404u: goto label_316404;
        case 0x316408u: goto label_316408;
        case 0x31640cu: goto label_31640c;
        case 0x316410u: goto label_316410;
        case 0x316414u: goto label_316414;
        case 0x316418u: goto label_316418;
        case 0x31641cu: goto label_31641c;
        case 0x316420u: goto label_316420;
        case 0x316424u: goto label_316424;
        case 0x316428u: goto label_316428;
        case 0x31642cu: goto label_31642c;
        case 0x316430u: goto label_316430;
        case 0x316434u: goto label_316434;
        case 0x316438u: goto label_316438;
        case 0x31643cu: goto label_31643c;
        case 0x316440u: goto label_316440;
        case 0x316444u: goto label_316444;
        case 0x316448u: goto label_316448;
        case 0x31644cu: goto label_31644c;
        case 0x316450u: goto label_316450;
        case 0x316454u: goto label_316454;
        case 0x316458u: goto label_316458;
        case 0x31645cu: goto label_31645c;
        case 0x316460u: goto label_316460;
        case 0x316464u: goto label_316464;
        case 0x316468u: goto label_316468;
        case 0x31646cu: goto label_31646c;
        case 0x316470u: goto label_316470;
        case 0x316474u: goto label_316474;
        case 0x316478u: goto label_316478;
        case 0x31647cu: goto label_31647c;
        case 0x316480u: goto label_316480;
        case 0x316484u: goto label_316484;
        case 0x316488u: goto label_316488;
        case 0x31648cu: goto label_31648c;
        case 0x316490u: goto label_316490;
        case 0x316494u: goto label_316494;
        case 0x316498u: goto label_316498;
        case 0x31649cu: goto label_31649c;
        case 0x3164a0u: goto label_3164a0;
        case 0x3164a4u: goto label_3164a4;
        case 0x3164a8u: goto label_3164a8;
        case 0x3164acu: goto label_3164ac;
        case 0x3164b0u: goto label_3164b0;
        case 0x3164b4u: goto label_3164b4;
        case 0x3164b8u: goto label_3164b8;
        case 0x3164bcu: goto label_3164bc;
        case 0x3164c0u: goto label_3164c0;
        case 0x3164c4u: goto label_3164c4;
        case 0x3164c8u: goto label_3164c8;
        case 0x3164ccu: goto label_3164cc;
        case 0x3164d0u: goto label_3164d0;
        case 0x3164d4u: goto label_3164d4;
        case 0x3164d8u: goto label_3164d8;
        case 0x3164dcu: goto label_3164dc;
        case 0x3164e0u: goto label_3164e0;
        case 0x3164e4u: goto label_3164e4;
        case 0x3164e8u: goto label_3164e8;
        case 0x3164ecu: goto label_3164ec;
        case 0x3164f0u: goto label_3164f0;
        case 0x3164f4u: goto label_3164f4;
        case 0x3164f8u: goto label_3164f8;
        case 0x3164fcu: goto label_3164fc;
        case 0x316500u: goto label_316500;
        case 0x316504u: goto label_316504;
        case 0x316508u: goto label_316508;
        case 0x31650cu: goto label_31650c;
        case 0x316510u: goto label_316510;
        case 0x316514u: goto label_316514;
        case 0x316518u: goto label_316518;
        case 0x31651cu: goto label_31651c;
        case 0x316520u: goto label_316520;
        case 0x316524u: goto label_316524;
        case 0x316528u: goto label_316528;
        case 0x31652cu: goto label_31652c;
        case 0x316530u: goto label_316530;
        case 0x316534u: goto label_316534;
        case 0x316538u: goto label_316538;
        case 0x31653cu: goto label_31653c;
        case 0x316540u: goto label_316540;
        case 0x316544u: goto label_316544;
        case 0x316548u: goto label_316548;
        case 0x31654cu: goto label_31654c;
        case 0x316550u: goto label_316550;
        case 0x316554u: goto label_316554;
        case 0x316558u: goto label_316558;
        case 0x31655cu: goto label_31655c;
        case 0x316560u: goto label_316560;
        case 0x316564u: goto label_316564;
        case 0x316568u: goto label_316568;
        case 0x31656cu: goto label_31656c;
        case 0x316570u: goto label_316570;
        case 0x316574u: goto label_316574;
        case 0x316578u: goto label_316578;
        case 0x31657cu: goto label_31657c;
        case 0x316580u: goto label_316580;
        case 0x316584u: goto label_316584;
        case 0x316588u: goto label_316588;
        case 0x31658cu: goto label_31658c;
        case 0x316590u: goto label_316590;
        case 0x316594u: goto label_316594;
        case 0x316598u: goto label_316598;
        case 0x31659cu: goto label_31659c;
        case 0x3165a0u: goto label_3165a0;
        case 0x3165a4u: goto label_3165a4;
        case 0x3165a8u: goto label_3165a8;
        case 0x3165acu: goto label_3165ac;
        case 0x3165b0u: goto label_3165b0;
        case 0x3165b4u: goto label_3165b4;
        case 0x3165b8u: goto label_3165b8;
        case 0x3165bcu: goto label_3165bc;
        case 0x3165c0u: goto label_3165c0;
        case 0x3165c4u: goto label_3165c4;
        case 0x3165c8u: goto label_3165c8;
        case 0x3165ccu: goto label_3165cc;
        case 0x3165d0u: goto label_3165d0;
        case 0x3165d4u: goto label_3165d4;
        case 0x3165d8u: goto label_3165d8;
        case 0x3165dcu: goto label_3165dc;
        case 0x3165e0u: goto label_3165e0;
        case 0x3165e4u: goto label_3165e4;
        case 0x3165e8u: goto label_3165e8;
        case 0x3165ecu: goto label_3165ec;
        case 0x3165f0u: goto label_3165f0;
        case 0x3165f4u: goto label_3165f4;
        case 0x3165f8u: goto label_3165f8;
        case 0x3165fcu: goto label_3165fc;
        case 0x316600u: goto label_316600;
        case 0x316604u: goto label_316604;
        case 0x316608u: goto label_316608;
        case 0x31660cu: goto label_31660c;
        case 0x316610u: goto label_316610;
        case 0x316614u: goto label_316614;
        case 0x316618u: goto label_316618;
        case 0x31661cu: goto label_31661c;
        case 0x316620u: goto label_316620;
        case 0x316624u: goto label_316624;
        case 0x316628u: goto label_316628;
        case 0x31662cu: goto label_31662c;
        case 0x316630u: goto label_316630;
        case 0x316634u: goto label_316634;
        case 0x316638u: goto label_316638;
        case 0x31663cu: goto label_31663c;
        case 0x316640u: goto label_316640;
        case 0x316644u: goto label_316644;
        case 0x316648u: goto label_316648;
        case 0x31664cu: goto label_31664c;
        case 0x316650u: goto label_316650;
        case 0x316654u: goto label_316654;
        case 0x316658u: goto label_316658;
        case 0x31665cu: goto label_31665c;
        case 0x316660u: goto label_316660;
        case 0x316664u: goto label_316664;
        case 0x316668u: goto label_316668;
        case 0x31666cu: goto label_31666c;
        case 0x316670u: goto label_316670;
        case 0x316674u: goto label_316674;
        case 0x316678u: goto label_316678;
        case 0x31667cu: goto label_31667c;
        case 0x316680u: goto label_316680;
        case 0x316684u: goto label_316684;
        case 0x316688u: goto label_316688;
        case 0x31668cu: goto label_31668c;
        case 0x316690u: goto label_316690;
        case 0x316694u: goto label_316694;
        case 0x316698u: goto label_316698;
        case 0x31669cu: goto label_31669c;
        case 0x3166a0u: goto label_3166a0;
        case 0x3166a4u: goto label_3166a4;
        case 0x3166a8u: goto label_3166a8;
        case 0x3166acu: goto label_3166ac;
        case 0x3166b0u: goto label_3166b0;
        case 0x3166b4u: goto label_3166b4;
        case 0x3166b8u: goto label_3166b8;
        case 0x3166bcu: goto label_3166bc;
        case 0x3166c0u: goto label_3166c0;
        case 0x3166c4u: goto label_3166c4;
        case 0x3166c8u: goto label_3166c8;
        case 0x3166ccu: goto label_3166cc;
        case 0x3166d0u: goto label_3166d0;
        case 0x3166d4u: goto label_3166d4;
        case 0x3166d8u: goto label_3166d8;
        case 0x3166dcu: goto label_3166dc;
        case 0x3166e0u: goto label_3166e0;
        case 0x3166e4u: goto label_3166e4;
        case 0x3166e8u: goto label_3166e8;
        case 0x3166ecu: goto label_3166ec;
        case 0x3166f0u: goto label_3166f0;
        case 0x3166f4u: goto label_3166f4;
        case 0x3166f8u: goto label_3166f8;
        case 0x3166fcu: goto label_3166fc;
        case 0x316700u: goto label_316700;
        case 0x316704u: goto label_316704;
        case 0x316708u: goto label_316708;
        case 0x31670cu: goto label_31670c;
        case 0x316710u: goto label_316710;
        case 0x316714u: goto label_316714;
        case 0x316718u: goto label_316718;
        case 0x31671cu: goto label_31671c;
        case 0x316720u: goto label_316720;
        case 0x316724u: goto label_316724;
        case 0x316728u: goto label_316728;
        case 0x31672cu: goto label_31672c;
        case 0x316730u: goto label_316730;
        case 0x316734u: goto label_316734;
        case 0x316738u: goto label_316738;
        case 0x31673cu: goto label_31673c;
        case 0x316740u: goto label_316740;
        case 0x316744u: goto label_316744;
        case 0x316748u: goto label_316748;
        case 0x31674cu: goto label_31674c;
        case 0x316750u: goto label_316750;
        case 0x316754u: goto label_316754;
        case 0x316758u: goto label_316758;
        case 0x31675cu: goto label_31675c;
        case 0x316760u: goto label_316760;
        case 0x316764u: goto label_316764;
        case 0x316768u: goto label_316768;
        case 0x31676cu: goto label_31676c;
        case 0x316770u: goto label_316770;
        case 0x316774u: goto label_316774;
        case 0x316778u: goto label_316778;
        case 0x31677cu: goto label_31677c;
        case 0x316780u: goto label_316780;
        case 0x316784u: goto label_316784;
        case 0x316788u: goto label_316788;
        case 0x31678cu: goto label_31678c;
        case 0x316790u: goto label_316790;
        case 0x316794u: goto label_316794;
        case 0x316798u: goto label_316798;
        case 0x31679cu: goto label_31679c;
        case 0x3167a0u: goto label_3167a0;
        case 0x3167a4u: goto label_3167a4;
        case 0x3167a8u: goto label_3167a8;
        case 0x3167acu: goto label_3167ac;
        case 0x3167b0u: goto label_3167b0;
        case 0x3167b4u: goto label_3167b4;
        case 0x3167b8u: goto label_3167b8;
        case 0x3167bcu: goto label_3167bc;
        case 0x3167c0u: goto label_3167c0;
        case 0x3167c4u: goto label_3167c4;
        case 0x3167c8u: goto label_3167c8;
        case 0x3167ccu: goto label_3167cc;
        case 0x3167d0u: goto label_3167d0;
        case 0x3167d4u: goto label_3167d4;
        case 0x3167d8u: goto label_3167d8;
        case 0x3167dcu: goto label_3167dc;
        case 0x3167e0u: goto label_3167e0;
        case 0x3167e4u: goto label_3167e4;
        case 0x3167e8u: goto label_3167e8;
        case 0x3167ecu: goto label_3167ec;
        case 0x3167f0u: goto label_3167f0;
        case 0x3167f4u: goto label_3167f4;
        case 0x3167f8u: goto label_3167f8;
        case 0x3167fcu: goto label_3167fc;
        case 0x316800u: goto label_316800;
        case 0x316804u: goto label_316804;
        case 0x316808u: goto label_316808;
        case 0x31680cu: goto label_31680c;
        case 0x316810u: goto label_316810;
        case 0x316814u: goto label_316814;
        case 0x316818u: goto label_316818;
        case 0x31681cu: goto label_31681c;
        case 0x316820u: goto label_316820;
        case 0x316824u: goto label_316824;
        case 0x316828u: goto label_316828;
        case 0x31682cu: goto label_31682c;
        case 0x316830u: goto label_316830;
        case 0x316834u: goto label_316834;
        case 0x316838u: goto label_316838;
        case 0x31683cu: goto label_31683c;
        case 0x316840u: goto label_316840;
        case 0x316844u: goto label_316844;
        case 0x316848u: goto label_316848;
        case 0x31684cu: goto label_31684c;
        case 0x316850u: goto label_316850;
        case 0x316854u: goto label_316854;
        case 0x316858u: goto label_316858;
        case 0x31685cu: goto label_31685c;
        case 0x316860u: goto label_316860;
        case 0x316864u: goto label_316864;
        case 0x316868u: goto label_316868;
        case 0x31686cu: goto label_31686c;
        case 0x316870u: goto label_316870;
        case 0x316874u: goto label_316874;
        case 0x316878u: goto label_316878;
        case 0x31687cu: goto label_31687c;
        case 0x316880u: goto label_316880;
        case 0x316884u: goto label_316884;
        case 0x316888u: goto label_316888;
        case 0x31688cu: goto label_31688c;
        case 0x316890u: goto label_316890;
        case 0x316894u: goto label_316894;
        case 0x316898u: goto label_316898;
        case 0x31689cu: goto label_31689c;
        case 0x3168a0u: goto label_3168a0;
        case 0x3168a4u: goto label_3168a4;
        case 0x3168a8u: goto label_3168a8;
        case 0x3168acu: goto label_3168ac;
        case 0x3168b0u: goto label_3168b0;
        case 0x3168b4u: goto label_3168b4;
        case 0x3168b8u: goto label_3168b8;
        case 0x3168bcu: goto label_3168bc;
        case 0x3168c0u: goto label_3168c0;
        case 0x3168c4u: goto label_3168c4;
        case 0x3168c8u: goto label_3168c8;
        case 0x3168ccu: goto label_3168cc;
        case 0x3168d0u: goto label_3168d0;
        case 0x3168d4u: goto label_3168d4;
        case 0x3168d8u: goto label_3168d8;
        case 0x3168dcu: goto label_3168dc;
        case 0x3168e0u: goto label_3168e0;
        case 0x3168e4u: goto label_3168e4;
        case 0x3168e8u: goto label_3168e8;
        case 0x3168ecu: goto label_3168ec;
        case 0x3168f0u: goto label_3168f0;
        case 0x3168f4u: goto label_3168f4;
        case 0x3168f8u: goto label_3168f8;
        case 0x3168fcu: goto label_3168fc;
        case 0x316900u: goto label_316900;
        case 0x316904u: goto label_316904;
        case 0x316908u: goto label_316908;
        case 0x31690cu: goto label_31690c;
        case 0x316910u: goto label_316910;
        case 0x316914u: goto label_316914;
        case 0x316918u: goto label_316918;
        case 0x31691cu: goto label_31691c;
        case 0x316920u: goto label_316920;
        case 0x316924u: goto label_316924;
        case 0x316928u: goto label_316928;
        case 0x31692cu: goto label_31692c;
        case 0x316930u: goto label_316930;
        case 0x316934u: goto label_316934;
        case 0x316938u: goto label_316938;
        case 0x31693cu: goto label_31693c;
        case 0x316940u: goto label_316940;
        case 0x316944u: goto label_316944;
        case 0x316948u: goto label_316948;
        case 0x31694cu: goto label_31694c;
        case 0x316950u: goto label_316950;
        case 0x316954u: goto label_316954;
        case 0x316958u: goto label_316958;
        case 0x31695cu: goto label_31695c;
        case 0x316960u: goto label_316960;
        case 0x316964u: goto label_316964;
        case 0x316968u: goto label_316968;
        case 0x31696cu: goto label_31696c;
        case 0x316970u: goto label_316970;
        case 0x316974u: goto label_316974;
        case 0x316978u: goto label_316978;
        case 0x31697cu: goto label_31697c;
        case 0x316980u: goto label_316980;
        case 0x316984u: goto label_316984;
        case 0x316988u: goto label_316988;
        case 0x31698cu: goto label_31698c;
        default: break;
    }

    ctx->pc = 0x316400u;

label_316400:
    // 0x316400: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x316400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_316404:
    // 0x316404: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x316404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_316408:
    // 0x316408: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x316408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_31640c:
    // 0x31640c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x31640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_316410:
    // 0x316410: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x316410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_316414:
    // 0x316414: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x316414u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316418:
    // 0x316418: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x316418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_31641c:
    // 0x31641c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x31641cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_316420:
    // 0x316420: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x316420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_316424:
    // 0x316424: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x316424u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_316428:
    // 0x316428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31642c:
    // 0x31642c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31642cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_316430:
    // 0x316430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316434:
    // 0x316434: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x316434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_316438:
    // 0x316438: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x316438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_31643c:
    // 0x31643c: 0x3445d570  ori         $a1, $v0, 0xD570
    ctx->pc = 0x31643cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
label_316440:
    // 0x316440: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x316440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_316444:
    // 0x316444: 0xc10ca68  jal         func_4329A0
label_316448:
    if (ctx->pc == 0x316448u) {
        ctx->pc = 0x316448u;
            // 0x316448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31644Cu;
        goto label_31644c;
    }
    ctx->pc = 0x316444u;
    SET_GPR_U32(ctx, 31, 0x31644Cu);
    ctx->pc = 0x316448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316444u;
            // 0x316448: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31644Cu; }
        if (ctx->pc != 0x31644Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31644Cu; }
        if (ctx->pc != 0x31644Cu) { return; }
    }
    ctx->pc = 0x31644Cu;
label_31644c:
    // 0x31644c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x31644cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316450:
    // 0x316450: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x316450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_316454:
    // 0x316454: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x316454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_316458:
    // 0x316458: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x316458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_31645c:
    // 0x31645c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x31645cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_316460:
    // 0x316460: 0x24634be0  addiu       $v1, $v1, 0x4BE0
    ctx->pc = 0x316460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19424));
label_316464:
    // 0x316464: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x316464u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_316468:
    // 0x316468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x316468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31646c:
    // 0x31646c: 0xaeb30054  sw          $s3, 0x54($s5)
    ctx->pc = 0x31646cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 19));
label_316470:
    // 0x316470: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x316470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_316474:
    // 0x316474: 0xa2b40058  sb          $s4, 0x58($s5)
    ctx->pc = 0x316474u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 88), (uint8_t)GPR_U32(ctx, 20));
label_316478:
    // 0x316478: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x316478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_31647c:
    // 0x31647c: 0xa2a20059  sb          $v0, 0x59($s5)
    ctx->pc = 0x31647cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 89), (uint8_t)GPR_U32(ctx, 2));
label_316480:
    // 0x316480: 0x24844410  addiu       $a0, $a0, 0x4410
    ctx->pc = 0x316480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17424));
label_316484:
    // 0x316484: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x316484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_316488:
    // 0x316488: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x316488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31648c:
    // 0x31648c: 0x90630081  lbu         $v1, 0x81($v1)
    ctx->pc = 0x31648cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 129)));
label_316490:
    // 0x316490: 0xa2a3005a  sb          $v1, 0x5A($s5)
    ctx->pc = 0x316490u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 90), (uint8_t)GPR_U32(ctx, 3));
label_316494:
    // 0x316494: 0xa2a0005b  sb          $zero, 0x5B($s5)
    ctx->pc = 0x316494u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 91), (uint8_t)GPR_U32(ctx, 0));
label_316498:
    // 0x316498: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x316498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_31649c:
    // 0x31649c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x31649cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_3164a0:
    // 0x3164a0: 0xaea0005c  sw          $zero, 0x5C($s5)
    ctx->pc = 0x3164a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 0));
label_3164a4:
    // 0x3164a4: 0xaea00060  sw          $zero, 0x60($s5)
    ctx->pc = 0x3164a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 0));
label_3164a8:
    // 0x3164a8: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x3164a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_3164ac:
    // 0x3164ac: 0xaeb00064  sw          $s0, 0x64($s5)
    ctx->pc = 0x3164acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 16));
label_3164b0:
    // 0x3164b0: 0xaeb10068  sw          $s1, 0x68($s5)
    ctx->pc = 0x3164b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 17));
label_3164b4:
    // 0x3164b4: 0xaea0006c  sw          $zero, 0x6C($s5)
    ctx->pc = 0x3164b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 0));
label_3164b8:
    // 0x3164b8: 0xaea00070  sw          $zero, 0x70($s5)
    ctx->pc = 0x3164b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 0));
label_3164bc:
    // 0x3164bc: 0xaeb20074  sw          $s2, 0x74($s5)
    ctx->pc = 0x3164bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 18));
label_3164c0:
    // 0x3164c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3164c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3164c4:
    // 0x3164c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3164c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3164c8:
    // 0x3164c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3164c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3164cc:
    // 0x3164cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3164ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3164d0:
    // 0x3164d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3164d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3164d4:
    // 0x3164d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3164d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3164d8:
    // 0x3164d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3164d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3164dc:
    // 0x3164dc: 0x3e00008  jr          $ra
label_3164e0:
    if (ctx->pc == 0x3164E0u) {
        ctx->pc = 0x3164E0u;
            // 0x3164e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3164E4u;
        goto label_3164e4;
    }
    ctx->pc = 0x3164DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3164E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3164DCu;
            // 0x3164e0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3164E4u;
label_3164e4:
    // 0x3164e4: 0x0  nop
    ctx->pc = 0x3164e4u;
    // NOP
label_3164e8:
    // 0x3164e8: 0x0  nop
    ctx->pc = 0x3164e8u;
    // NOP
label_3164ec:
    // 0x3164ec: 0x0  nop
    ctx->pc = 0x3164ecu;
    // NOP
label_3164f0:
    // 0x3164f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3164f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3164f4:
    // 0x3164f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3164f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3164f8:
    // 0x3164f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3164f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3164fc:
    // 0x3164fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3164fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_316500:
    // 0x316500: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x316500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316504:
    // 0x316504: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316508:
    // 0x316508: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
label_31650c:
    if (ctx->pc == 0x31650Cu) {
        ctx->pc = 0x31650Cu;
            // 0x31650c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316510u;
        goto label_316510;
    }
    ctx->pc = 0x316508u;
    {
        const bool branch_taken_0x316508 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x31650Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316508u;
            // 0x31650c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316508) {
            ctx->pc = 0x3165A0u;
            goto label_3165a0;
        }
    }
    ctx->pc = 0x316510u;
label_316510:
    // 0x316510: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316514:
    // 0x316514: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x316514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_316518:
    // 0x316518: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x316518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_31651c:
    // 0x31651c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x31651cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_316520:
    // 0x316520: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x316520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_316524:
    // 0x316524: 0x8c7089e8  lw          $s0, -0x7618($v1)
    ctx->pc = 0x316524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_316528:
    // 0x316528: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x316528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_31652c:
    // 0x31652c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x31652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_316530:
    // 0x316530: 0xa0400082  sb          $zero, 0x82($v0)
    ctx->pc = 0x316530u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 130), (uint8_t)GPR_U32(ctx, 0));
label_316534:
    // 0x316534: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x316534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_316538:
    // 0x316538: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x316538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31653c:
    // 0x31653c: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_316540:
    if (ctx->pc == 0x316540u) {
        ctx->pc = 0x316544u;
        goto label_316544;
    }
    ctx->pc = 0x31653Cu;
    {
        const bool branch_taken_0x31653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31653c) {
            ctx->pc = 0x316568u;
            goto label_316568;
        }
    }
    ctx->pc = 0x316544u;
label_316544:
    // 0x316544: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x316544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_316548:
    // 0x316548: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31654c:
    if (ctx->pc == 0x31654Cu) {
        ctx->pc = 0x316550u;
        goto label_316550;
    }
    ctx->pc = 0x316548u;
    {
        const bool branch_taken_0x316548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316548) {
            ctx->pc = 0x316568u;
            goto label_316568;
        }
    }
    ctx->pc = 0x316550u;
label_316550:
    // 0x316550: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x316550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_316554:
    // 0x316554: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x316554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_316558:
    // 0x316558: 0x320f809  jalr        $t9
label_31655c:
    if (ctx->pc == 0x31655Cu) {
        ctx->pc = 0x31655Cu;
            // 0x31655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316560u;
        goto label_316560;
    }
    ctx->pc = 0x316558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316560u);
        ctx->pc = 0x31655Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316558u;
            // 0x31655c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316560u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316560u; }
            if (ctx->pc != 0x316560u) { return; }
        }
        }
    }
    ctx->pc = 0x316560u;
label_316560:
    // 0x316560: 0xc074708  jal         func_1D1C20
label_316564:
    if (ctx->pc == 0x316564u) {
        ctx->pc = 0x316564u;
            // 0x316564: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x316568u;
        goto label_316568;
    }
    ctx->pc = 0x316560u;
    SET_GPR_U32(ctx, 31, 0x316568u);
    ctx->pc = 0x316564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316560u;
            // 0x316564: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316568u; }
        if (ctx->pc != 0x316568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316568u; }
        if (ctx->pc != 0x316568u) { return; }
    }
    ctx->pc = 0x316568u;
label_316568:
    // 0x316568: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
label_31656c:
    if (ctx->pc == 0x31656Cu) {
        ctx->pc = 0x31656Cu;
            // 0x31656c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x316570u;
        goto label_316570;
    }
    ctx->pc = 0x316568u;
    {
        const bool branch_taken_0x316568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x316568) {
            ctx->pc = 0x31656Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316568u;
            // 0x31656c: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31658Cu;
            goto label_31658c;
        }
    }
    ctx->pc = 0x316570u;
label_316570:
    // 0x316570: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x316570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_316574:
    // 0x316574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x316574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316578:
    // 0x316578: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x316578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_31657c:
    // 0x31657c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31657cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316580:
    // 0x316580: 0xc057a68  jal         func_15E9A0
label_316584:
    if (ctx->pc == 0x316584u) {
        ctx->pc = 0x316584u;
            // 0x316584: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x316588u;
        goto label_316588;
    }
    ctx->pc = 0x316580u;
    SET_GPR_U32(ctx, 31, 0x316588u);
    ctx->pc = 0x316584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316580u;
            // 0x316584: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316588u; }
        if (ctx->pc != 0x316588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316588u; }
        if (ctx->pc != 0x316588u) { return; }
    }
    ctx->pc = 0x316588u;
label_316588:
    // 0x316588: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x316588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_31658c:
    // 0x31658c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31658cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_316590:
    // 0x316590: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_316594:
    if (ctx->pc == 0x316594u) {
        ctx->pc = 0x316594u;
            // 0x316594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316598u;
        goto label_316598;
    }
    ctx->pc = 0x316590u;
    {
        const bool branch_taken_0x316590 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x316590) {
            ctx->pc = 0x316594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316590u;
            // 0x316594: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3165A4u;
            goto label_3165a4;
        }
    }
    ctx->pc = 0x316598u;
label_316598:
    // 0x316598: 0xc0400a8  jal         func_1002A0
label_31659c:
    if (ctx->pc == 0x31659Cu) {
        ctx->pc = 0x31659Cu;
            // 0x31659c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3165A0u;
        goto label_3165a0;
    }
    ctx->pc = 0x316598u;
    SET_GPR_U32(ctx, 31, 0x3165A0u);
    ctx->pc = 0x31659Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316598u;
            // 0x31659c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3165A0u; }
        if (ctx->pc != 0x3165A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3165A0u; }
        if (ctx->pc != 0x3165A0u) { return; }
    }
    ctx->pc = 0x3165A0u;
label_3165a0:
    // 0x3165a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3165a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3165a4:
    // 0x3165a4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3165a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3165a8:
    // 0x3165a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3165a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3165ac:
    // 0x3165ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3165acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3165b0:
    // 0x3165b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3165b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3165b4:
    // 0x3165b4: 0x3e00008  jr          $ra
label_3165b8:
    if (ctx->pc == 0x3165B8u) {
        ctx->pc = 0x3165B8u;
            // 0x3165b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3165BCu;
        goto label_3165bc;
    }
    ctx->pc = 0x3165B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3165B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3165B4u;
            // 0x3165b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3165BCu;
label_3165bc:
    // 0x3165bc: 0x0  nop
    ctx->pc = 0x3165bcu;
    // NOP
label_3165c0:
    // 0x3165c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3165c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3165c4:
    // 0x3165c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3165c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3165c8:
    // 0x3165c8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3165c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3165cc:
    // 0x3165cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3165ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3165d0:
    // 0x3165d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3165d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3165d4:
    // 0x3165d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3165d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3165d8:
    // 0x3165d8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3165d8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3165dc:
    // 0x3165dc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3165e0:
    if (ctx->pc == 0x3165E0u) {
        ctx->pc = 0x3165E4u;
        goto label_3165e4;
    }
    ctx->pc = 0x3165DCu;
    {
        const bool branch_taken_0x3165dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3165dc) {
            ctx->pc = 0x3165ECu;
            goto label_3165ec;
        }
    }
    ctx->pc = 0x3165E4u;
label_3165e4:
    // 0x3165e4: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3165e8:
    if (ctx->pc == 0x3165E8u) {
        ctx->pc = 0x3165E8u;
            // 0x3165e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3165ECu;
        goto label_3165ec;
    }
    ctx->pc = 0x3165E4u;
    {
        const bool branch_taken_0x3165e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3165E4u;
            // 0x3165e8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165e4) {
            ctx->pc = 0x316654u;
            goto label_316654;
        }
    }
    ctx->pc = 0x3165ECu;
label_3165ec:
    // 0x3165ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3165ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3165f0:
    // 0x3165f0: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x3165f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3165f4:
    // 0x3165f4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3165f8:
    if (ctx->pc == 0x3165F8u) {
        ctx->pc = 0x3165F8u;
            // 0x3165f8: 0x8c5189e8  lw          $s1, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->pc = 0x3165FCu;
        goto label_3165fc;
    }
    ctx->pc = 0x3165F4u;
    {
        const bool branch_taken_0x3165f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3165F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3165F4u;
            // 0x3165f8: 0x8c5189e8  lw          $s1, -0x7618($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165f4) {
            ctx->pc = 0x31661Cu;
            goto label_31661c;
        }
    }
    ctx->pc = 0x3165FCu;
label_3165fc:
    // 0x3165fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3165fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_316600:
    // 0x316600: 0x8f390064  lw          $t9, 0x64($t9)
    ctx->pc = 0x316600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 100)));
label_316604:
    // 0x316604: 0x320f809  jalr        $t9
label_316608:
    if (ctx->pc == 0x316608u) {
        ctx->pc = 0x316608u;
            // 0x316608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31660Cu;
        goto label_31660c;
    }
    ctx->pc = 0x316604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x31660Cu);
        ctx->pc = 0x316608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316604u;
            // 0x316608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x31660Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x31660Cu; }
            if (ctx->pc != 0x31660Cu) { return; }
        }
        }
    }
    ctx->pc = 0x31660Cu;
label_31660c:
    // 0x31660c: 0xc0746e4  jal         func_1D1B90
label_316610:
    if (ctx->pc == 0x316610u) {
        ctx->pc = 0x316610u;
            // 0x316610: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x316614u;
        goto label_316614;
    }
    ctx->pc = 0x31660Cu;
    SET_GPR_U32(ctx, 31, 0x316614u);
    ctx->pc = 0x316610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31660Cu;
            // 0x316610: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1B90u;
    if (runtime->hasFunction(0x1D1B90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316614u; }
        if (ctx->pc != 0x316614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1B90_0x1d1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316614u; }
        if (ctx->pc != 0x316614u) { return; }
    }
    ctx->pc = 0x316614u;
label_316614:
    // 0x316614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x316614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316618:
    // 0x316618: 0xa202005b  sb          $v0, 0x5B($s0)
    ctx->pc = 0x316618u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 91), (uint8_t)GPR_U32(ctx, 2));
label_31661c:
    // 0x31661c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x31661cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_316620:
    // 0x316620: 0xc073234  jal         func_1CC8D0
label_316624:
    if (ctx->pc == 0x316624u) {
        ctx->pc = 0x316624u;
            // 0x316624: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x316628u;
        goto label_316628;
    }
    ctx->pc = 0x316620u;
    SET_GPR_U32(ctx, 31, 0x316628u);
    ctx->pc = 0x316624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316620u;
            // 0x316624: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316628u; }
        if (ctx->pc != 0x316628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316628u; }
        if (ctx->pc != 0x316628u) { return; }
    }
    ctx->pc = 0x316628u;
label_316628:
    // 0x316628: 0x82030059  lb          $v1, 0x59($s0)
    ctx->pc = 0x316628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 89)));
label_31662c:
    // 0x31662c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x31662cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_316630:
    // 0x316630: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x316630u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_316634:
    // 0x316634: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x316634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_316638:
    // 0x316638: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x316638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_31663c:
    // 0x31663c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x31663cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_316640:
    // 0x316640: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x316640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_316644:
    // 0x316644: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x316644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_316648:
    // 0x316648: 0x320f809  jalr        $t9
label_31664c:
    if (ctx->pc == 0x31664Cu) {
        ctx->pc = 0x31664Cu;
            // 0x31664c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316650u;
        goto label_316650;
    }
    ctx->pc = 0x316648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316650u);
        ctx->pc = 0x31664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316648u;
            // 0x31664c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316650u; }
            if (ctx->pc != 0x316650u) { return; }
        }
        }
    }
    ctx->pc = 0x316650u;
label_316650:
    // 0x316650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x316650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_316654:
    // 0x316654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x316654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316658:
    // 0x316658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_31665c:
    // 0x31665c: 0x3e00008  jr          $ra
label_316660:
    if (ctx->pc == 0x316660u) {
        ctx->pc = 0x316660u;
            // 0x316660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x316664u;
        goto label_316664;
    }
    ctx->pc = 0x31665Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31665Cu;
            // 0x316660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316664u;
label_316664:
    // 0x316664: 0x0  nop
    ctx->pc = 0x316664u;
    // NOP
label_316668:
    // 0x316668: 0x0  nop
    ctx->pc = 0x316668u;
    // NOP
label_31666c:
    // 0x31666c: 0x0  nop
    ctx->pc = 0x31666cu;
    // NOP
label_316670:
    // 0x316670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_316674:
    // 0x316674: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x316674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_316678:
    // 0x316678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x316678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31667c:
    // 0x31667c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31667cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_316680:
    // 0x316680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x316680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316684:
    // 0x316684: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x316684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_316688:
    // 0x316688: 0x8c42095c  lw          $v0, 0x95C($v0)
    ctx->pc = 0x316688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
label_31668c:
    // 0x31668c: 0x14460014  bne         $v0, $a2, . + 4 + (0x14 << 2)
label_316690:
    if (ctx->pc == 0x316690u) {
        ctx->pc = 0x316690u;
            // 0x316690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316694u;
        goto label_316694;
    }
    ctx->pc = 0x31668Cu;
    {
        const bool branch_taken_0x31668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x316690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31668Cu;
            // 0x316690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31668c) {
            ctx->pc = 0x3166E0u;
            goto label_3166e0;
        }
    }
    ctx->pc = 0x316694u;
label_316694:
    // 0x316694: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x316694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_316698:
    // 0x316698: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x316698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31669c:
    // 0x31669c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31669cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3166a0:
    // 0x3166a0: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_3166a4:
    if (ctx->pc == 0x3166A4u) {
        ctx->pc = 0x3166A4u;
            // 0x3166a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3166A8u;
        goto label_3166a8;
    }
    ctx->pc = 0x3166A0u;
    {
        const bool branch_taken_0x3166a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3166a0) {
            ctx->pc = 0x3166A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3166A0u;
            // 0x3166a4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3166C8u;
            goto label_3166c8;
        }
    }
    ctx->pc = 0x3166A8u;
label_3166a8:
    // 0x3166a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3166a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3166ac:
    // 0x3166ac: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_3166b0:
    if (ctx->pc == 0x3166B0u) {
        ctx->pc = 0x3166B0u;
            // 0x3166b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3166B4u;
        goto label_3166b4;
    }
    ctx->pc = 0x3166ACu;
    {
        const bool branch_taken_0x3166ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3166ac) {
            ctx->pc = 0x3166B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3166ACu;
            // 0x3166b0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3166C8u;
            goto label_3166c8;
        }
    }
    ctx->pc = 0x3166B4u;
label_3166b4:
    // 0x3166b4: 0x10860003  beq         $a0, $a2, . + 4 + (0x3 << 2)
label_3166b8:
    if (ctx->pc == 0x3166B8u) {
        ctx->pc = 0x3166BCu;
        goto label_3166bc;
    }
    ctx->pc = 0x3166B4u;
    {
        const bool branch_taken_0x3166b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x3166b4) {
            ctx->pc = 0x3166C4u;
            goto label_3166c4;
        }
    }
    ctx->pc = 0x3166BCu;
label_3166bc:
    // 0x3166bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3166c0:
    if (ctx->pc == 0x3166C0u) {
        ctx->pc = 0x3166C4u;
        goto label_3166c4;
    }
    ctx->pc = 0x3166BCu;
    {
        const bool branch_taken_0x3166bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3166bc) {
            ctx->pc = 0x3166C8u;
            goto label_3166c8;
        }
    }
    ctx->pc = 0x3166C4u;
label_3166c4:
    // 0x3166c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3166c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3166c8:
    // 0x3166c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3166c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3166cc:
    // 0x3166cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3166ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3166d0:
    // 0x3166d0: 0xc0bc8b4  jal         func_2F22D0
label_3166d4:
    if (ctx->pc == 0x3166D4u) {
        ctx->pc = 0x3166D4u;
            // 0x3166d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3166D8u;
        goto label_3166d8;
    }
    ctx->pc = 0x3166D0u;
    SET_GPR_U32(ctx, 31, 0x3166D8u);
    ctx->pc = 0x3166D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3166D0u;
            // 0x3166d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3166D8u; }
        if (ctx->pc != 0x3166D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3166D8u; }
        if (ctx->pc != 0x3166D8u) { return; }
    }
    ctx->pc = 0x3166D8u;
label_3166d8:
    // 0x3166d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3166dc:
    if (ctx->pc == 0x3166DCu) {
        ctx->pc = 0x3166DCu;
            // 0x3166dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3166E0u;
        goto label_3166e0;
    }
    ctx->pc = 0x3166D8u;
    {
        const bool branch_taken_0x3166d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3166DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3166D8u;
            // 0x3166dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3166d8) {
            ctx->pc = 0x3166F8u;
            goto label_3166f8;
        }
    }
    ctx->pc = 0x3166E0u;
label_3166e0:
    // 0x3166e0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3166e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3166e4:
    // 0x3166e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3166e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3166e8:
    // 0x3166e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3166e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3166ec:
    // 0x3166ec: 0xc0bc8b4  jal         func_2F22D0
label_3166f0:
    if (ctx->pc == 0x3166F0u) {
        ctx->pc = 0x3166F0u;
            // 0x3166f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3166F4u;
        goto label_3166f4;
    }
    ctx->pc = 0x3166ECu;
    SET_GPR_U32(ctx, 31, 0x3166F4u);
    ctx->pc = 0x3166F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3166ECu;
            // 0x3166f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F22D0u;
    if (runtime->hasFunction(0x2F22D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F22D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3166F4u; }
        if (ctx->pc != 0x3166F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F22D0_0x2f22d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3166F4u; }
        if (ctx->pc != 0x3166F4u) { return; }
    }
    ctx->pc = 0x3166F4u;
label_3166f4:
    // 0x3166f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3166f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3166f8:
    // 0x3166f8: 0xc0cd670  jal         func_3359C0
label_3166fc:
    if (ctx->pc == 0x3166FCu) {
        ctx->pc = 0x316700u;
        goto label_316700;
    }
    ctx->pc = 0x3166F8u;
    SET_GPR_U32(ctx, 31, 0x316700u);
    ctx->pc = 0x3359C0u;
    if (runtime->hasFunction(0x3359C0u)) {
        auto targetFn = runtime->lookupFunction(0x3359C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316700u; }
        if (ctx->pc != 0x316700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003359C0_0x3359c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316700u; }
        if (ctx->pc != 0x316700u) { return; }
    }
    ctx->pc = 0x316700u;
label_316700:
    // 0x316700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x316700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_316704:
    // 0x316704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_316708:
    // 0x316708: 0x3e00008  jr          $ra
label_31670c:
    if (ctx->pc == 0x31670Cu) {
        ctx->pc = 0x31670Cu;
            // 0x31670c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x316710u;
        goto label_316710;
    }
    ctx->pc = 0x316708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31670Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316708u;
            // 0x31670c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x316710u;
label_316710:
    // 0x316710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x316710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_316714:
    // 0x316714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x316714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_316718:
    // 0x316718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x316718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_31671c:
    // 0x31671c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31671cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_316720:
    // 0x316720: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x316720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316724:
    // 0x316724: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x316724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_316728:
    // 0x316728: 0x320f809  jalr        $t9
label_31672c:
    if (ctx->pc == 0x31672Cu) {
        ctx->pc = 0x31672Cu;
            // 0x31672c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316730u;
        goto label_316730;
    }
    ctx->pc = 0x316728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316730u);
        ctx->pc = 0x31672Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316728u;
            // 0x31672c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316730u; }
            if (ctx->pc != 0x316730u) { return; }
        }
        }
    }
    ctx->pc = 0x316730u;
label_316730:
    // 0x316730: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x316730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_316734:
    // 0x316734: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x316734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_316738:
    // 0x316738: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x316738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_31673c:
    // 0x31673c: 0x92030058  lbu         $v1, 0x58($s0)
    ctx->pc = 0x31673cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_316740:
    // 0x316740: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x316740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
label_316744:
    // 0x316744: 0x2508976c  addiu       $t0, $t0, -0x6894
    ctx->pc = 0x316744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940524));
label_316748:
    // 0x316748: 0x34450020  ori         $a1, $v0, 0x20
    ctx->pc = 0x316748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_31674c:
    // 0x31674c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x31674cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_316750:
    // 0x316750: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x316750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_316754:
    // 0x316754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_316758:
    // 0x316758: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x316758u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31675c:
    // 0x31675c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31675cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316760:
    // 0x316760: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x316760u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_316764:
    // 0x316764: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x316764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_316768:
    // 0x316768: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x316768u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_31676c:
    // 0x31676c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x31676cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_316770:
    // 0x316770: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x316770u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_316774:
    // 0x316774: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x316774u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_316778:
    // 0x316778: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x316778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_31677c:
    // 0x31677c: 0x92060058  lbu         $a2, 0x58($s0)
    ctx->pc = 0x31677cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
label_316780:
    // 0x316780: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x316780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_316784:
    // 0x316784: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x316784u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_316788:
    // 0x316788: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x316788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_31678c:
    // 0x31678c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x31678cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_316790:
    // 0x316790: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316794:
    // 0x316794: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x316794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_316798:
    // 0x316798: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x316798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31679c:
    // 0x31679c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x31679cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_3167a0:
    // 0x3167a0: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x3167a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3167a4:
    // 0x3167a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3167a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3167a8:
    // 0x3167a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3167a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3167ac:
    // 0x3167ac: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3167acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3167b0:
    // 0x3167b0: 0x8c42095c  lw          $v0, 0x95C($v0)
    ctx->pc = 0x3167b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2396)));
label_3167b4:
    // 0x3167b4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3167b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3167b8:
    // 0x3167b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3167b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3167bc:
    // 0x3167bc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_3167c0:
    if (ctx->pc == 0x3167C0u) {
        ctx->pc = 0x3167C0u;
            // 0x3167c0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3167C4u;
        goto label_3167c4;
    }
    ctx->pc = 0x3167BCu;
    {
        const bool branch_taken_0x3167bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3167bc) {
            ctx->pc = 0x3167C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3167BCu;
            // 0x3167c0: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x316810u;
            goto label_316810;
        }
    }
    ctx->pc = 0x3167C4u;
label_3167c4:
    // 0x3167c4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3167c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3167c8:
    // 0x3167c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3167c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3167cc:
    // 0x3167cc: 0x8c42f750  lw          $v0, -0x8B0($v0)
    ctx->pc = 0x3167ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965072)));
label_3167d0:
    // 0x3167d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3167d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3167d4:
    // 0x3167d4: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3167d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3167d8:
    // 0x3167d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3167dc:
    if (ctx->pc == 0x3167DCu) {
        ctx->pc = 0x3167E0u;
        goto label_3167e0;
    }
    ctx->pc = 0x3167D8u;
    {
        const bool branch_taken_0x3167d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3167d8) {
            ctx->pc = 0x3167E8u;
            goto label_3167e8;
        }
    }
    ctx->pc = 0x3167E0u;
label_3167e0:
    // 0x3167e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3167e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3167e4:
    // 0x3167e4: 0x8c43f758  lw          $v1, -0x8A8($v0)
    ctx->pc = 0x3167e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965080)));
label_3167e8:
    // 0x3167e8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3167e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3167ec:
    // 0x3167ec: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3167ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3167f0:
    // 0x3167f0: 0x8c42f758  lw          $v0, -0x8A8($v0)
    ctx->pc = 0x3167f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965080)));
label_3167f4:
    // 0x3167f4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3167f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3167f8:
    // 0x3167f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3167fc:
    if (ctx->pc == 0x3167FCu) {
        ctx->pc = 0x316800u;
        goto label_316800;
    }
    ctx->pc = 0x3167F8u;
    {
        const bool branch_taken_0x3167f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3167f8) {
            ctx->pc = 0x316808u;
            goto label_316808;
        }
    }
    ctx->pc = 0x316800u;
label_316800:
    // 0x316800: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x316800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_316804:
    // 0x316804: 0x8c43f750  lw          $v1, -0x8B0($v0)
    ctx->pc = 0x316804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965072)));
label_316808:
    // 0x316808: 0x10000010  b           . + 4 + (0x10 << 2)
label_31680c:
    if (ctx->pc == 0x31680Cu) {
        ctx->pc = 0x31680Cu;
            // 0x31680c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x316810u;
        goto label_316810;
    }
    ctx->pc = 0x316808u;
    {
        const bool branch_taken_0x316808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316808u;
            // 0x31680c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316808) {
            ctx->pc = 0x31684Cu;
            goto label_31684c;
        }
    }
    ctx->pc = 0x316810u;
label_316810:
    // 0x316810: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x316810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_316814:
    // 0x316814: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x316814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_316818:
    // 0x316818: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x316818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31681c:
    // 0x31681c: 0x8c42f760  lw          $v0, -0x8A0($v0)
    ctx->pc = 0x31681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965088)));
label_316820:
    // 0x316820: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x316820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316824:
    // 0x316824: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x316824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_316828:
    // 0x316828: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_31682c:
    if (ctx->pc == 0x31682Cu) {
        ctx->pc = 0x316830u;
        goto label_316830;
    }
    ctx->pc = 0x316828u;
    {
        const bool branch_taken_0x316828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x316828) {
            ctx->pc = 0x316834u;
            goto label_316834;
        }
    }
    ctx->pc = 0x316830u;
label_316830:
    // 0x316830: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x316830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_316834:
    // 0x316834: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x316834u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_316838:
    // 0x316838: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_31683c:
    if (ctx->pc == 0x31683Cu) {
        ctx->pc = 0x31683Cu;
            // 0x31683c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x316840u;
        goto label_316840;
    }
    ctx->pc = 0x316838u;
    {
        const bool branch_taken_0x316838 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316838u;
            // 0x31683c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316838) {
            ctx->pc = 0x316848u;
            goto label_316848;
        }
    }
    ctx->pc = 0x316840u;
label_316840:
    // 0x316840: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x316840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_316844:
    // 0x316844: 0x8c43f760  lw          $v1, -0x8A0($v0)
    ctx->pc = 0x316844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965088)));
label_316848:
    // 0x316848: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x316848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_31684c:
    // 0x31684c: 0xc0cd7f0  jal         func_335FC0
label_316850:
    if (ctx->pc == 0x316850u) {
        ctx->pc = 0x316850u;
            // 0x316850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316854u;
        goto label_316854;
    }
    ctx->pc = 0x31684Cu;
    SET_GPR_U32(ctx, 31, 0x316854u);
    ctx->pc = 0x316850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31684Cu;
            // 0x316850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335FC0u;
    if (runtime->hasFunction(0x335FC0u)) {
        auto targetFn = runtime->lookupFunction(0x335FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316854u; }
        if (ctx->pc != 0x316854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335FC0_0x335fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316854u; }
        if (ctx->pc != 0x316854u) { return; }
    }
    ctx->pc = 0x316854u;
label_316854:
    // 0x316854: 0xc0cd7e4  jal         func_335F90
label_316858:
    if (ctx->pc == 0x316858u) {
        ctx->pc = 0x316858u;
            // 0x316858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31685Cu;
        goto label_31685c;
    }
    ctx->pc = 0x316854u;
    SET_GPR_U32(ctx, 31, 0x31685Cu);
    ctx->pc = 0x316858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316854u;
            // 0x316858: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335F90u;
    if (runtime->hasFunction(0x335F90u)) {
        auto targetFn = runtime->lookupFunction(0x335F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31685Cu; }
        if (ctx->pc != 0x31685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335F90_0x335f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31685Cu; }
        if (ctx->pc != 0x31685Cu) { return; }
    }
    ctx->pc = 0x31685Cu;
label_31685c:
    // 0x31685c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x31685cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_316860:
    // 0x316860: 0xc0cd7c4  jal         func_335F10
label_316864:
    if (ctx->pc == 0x316864u) {
        ctx->pc = 0x316864u;
            // 0x316864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316868u;
        goto label_316868;
    }
    ctx->pc = 0x316860u;
    SET_GPR_U32(ctx, 31, 0x316868u);
    ctx->pc = 0x316864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316860u;
            // 0x316864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335F10u;
    if (runtime->hasFunction(0x335F10u)) {
        auto targetFn = runtime->lookupFunction(0x335F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316868u; }
        if (ctx->pc != 0x316868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335F10_0x335f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316868u; }
        if (ctx->pc != 0x316868u) { return; }
    }
    ctx->pc = 0x316868u;
label_316868:
    // 0x316868: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x316868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_31686c:
    // 0x31686c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x31686cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_316870:
    // 0x316870: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x316870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_316874:
    // 0x316874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316878:
    // 0x316878: 0xc0cd674  jal         func_3359D0
label_31687c:
    if (ctx->pc == 0x31687Cu) {
        ctx->pc = 0x31687Cu;
            // 0x31687c: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x316880u;
        goto label_316880;
    }
    ctx->pc = 0x316878u;
    SET_GPR_U32(ctx, 31, 0x316880u);
    ctx->pc = 0x31687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316878u;
            // 0x31687c: 0x2882b  sltu        $s1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3359D0u;
    if (runtime->hasFunction(0x3359D0u)) {
        auto targetFn = runtime->lookupFunction(0x3359D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316880u; }
        if (ctx->pc != 0x316880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003359D0_0x3359d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316880u; }
        if (ctx->pc != 0x316880u) { return; }
    }
    ctx->pc = 0x316880u;
label_316880:
    // 0x316880: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_316884:
    if (ctx->pc == 0x316884u) {
        ctx->pc = 0x316888u;
        goto label_316888;
    }
    ctx->pc = 0x316880u;
    {
        const bool branch_taken_0x316880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316880) {
            ctx->pc = 0x31688Cu;
            goto label_31688c;
        }
    }
    ctx->pc = 0x316888u;
label_316888:
    // 0x316888: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x316888u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31688c:
    // 0x31688c: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_316890:
    if (ctx->pc == 0x316890u) {
        ctx->pc = 0x316890u;
            // 0x316890: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x316894u;
        goto label_316894;
    }
    ctx->pc = 0x31688Cu;
    {
        const bool branch_taken_0x31688c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31688c) {
            ctx->pc = 0x316890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31688Cu;
            // 0x316890: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3168A0u;
            goto label_3168a0;
        }
    }
    ctx->pc = 0x316894u;
label_316894:
    // 0x316894: 0xc0cd7a0  jal         func_335E80
label_316898:
    if (ctx->pc == 0x316898u) {
        ctx->pc = 0x316898u;
            // 0x316898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31689Cu;
        goto label_31689c;
    }
    ctx->pc = 0x316894u;
    SET_GPR_U32(ctx, 31, 0x31689Cu);
    ctx->pc = 0x316898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316894u;
            // 0x316898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x335E80u;
    if (runtime->hasFunction(0x335E80u)) {
        auto targetFn = runtime->lookupFunction(0x335E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31689Cu; }
        if (ctx->pc != 0x31689Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00335E80_0x335e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31689Cu; }
        if (ctx->pc != 0x31689Cu) { return; }
    }
    ctx->pc = 0x31689Cu;
label_31689c:
    // 0x31689c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31689cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3168a0:
    // 0x3168a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3168a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3168a4:
    // 0x3168a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3168a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3168a8:
    // 0x3168a8: 0x3e00008  jr          $ra
label_3168ac:
    if (ctx->pc == 0x3168ACu) {
        ctx->pc = 0x3168ACu;
            // 0x3168ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3168B0u;
        goto label_3168b0;
    }
    ctx->pc = 0x3168A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3168ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3168A8u;
            // 0x3168ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3168B0u;
label_3168b0:
    // 0x3168b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3168b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3168b4:
    // 0x3168b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3168b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3168b8:
    // 0x3168b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3168b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3168bc:
    // 0x3168bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3168bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3168c0:
    // 0x3168c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3168c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3168c4:
    // 0x3168c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3168c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3168c8:
    // 0x3168c8: 0x12400029  beqz        $s2, . + 4 + (0x29 << 2)
label_3168cc:
    if (ctx->pc == 0x3168CCu) {
        ctx->pc = 0x3168CCu;
            // 0x3168cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3168D0u;
        goto label_3168d0;
    }
    ctx->pc = 0x3168C8u;
    {
        const bool branch_taken_0x3168c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3168C8u;
            // 0x3168cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168c8) {
            ctx->pc = 0x316970u;
            goto label_316970;
        }
    }
    ctx->pc = 0x3168D0u;
label_3168d0:
    // 0x3168d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3168d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3168d4:
    // 0x3168d4: 0x24424450  addiu       $v0, $v0, 0x4450
    ctx->pc = 0x3168d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17488));
label_3168d8:
    // 0x3168d8: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
label_3168dc:
    if (ctx->pc == 0x3168DCu) {
        ctx->pc = 0x3168DCu;
            // 0x3168dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3168E0u;
        goto label_3168e0;
    }
    ctx->pc = 0x3168D8u;
    {
        const bool branch_taken_0x3168d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3168DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3168D8u;
            // 0x3168dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3168d8) {
            ctx->pc = 0x316958u;
            goto label_316958;
        }
    }
    ctx->pc = 0x3168E0u;
label_3168e0:
    // 0x3168e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3168e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3168e4:
    // 0x3168e4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3168e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3168e8:
    // 0x3168e8: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x3168e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_3168ec:
    // 0x3168ec: 0x2484bdc0  addiu       $a0, $a0, -0x4240
    ctx->pc = 0x3168ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950336));
label_3168f0:
    // 0x3168f0: 0xc0ad6c4  jal         func_2B5B10
label_3168f4:
    if (ctx->pc == 0x3168F4u) {
        ctx->pc = 0x3168F4u;
            // 0x3168f4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3168F8u;
        goto label_3168f8;
    }
    ctx->pc = 0x3168F0u;
    SET_GPR_U32(ctx, 31, 0x3168F8u);
    ctx->pc = 0x3168F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3168F0u;
            // 0x3168f4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168F8u; }
        if (ctx->pc != 0x3168F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3168F8u; }
        if (ctx->pc != 0x3168F8u) { return; }
    }
    ctx->pc = 0x3168F8u;
label_3168f8:
    // 0x3168f8: 0xc0c05c4  jal         func_301710
label_3168fc:
    if (ctx->pc == 0x3168FCu) {
        ctx->pc = 0x316900u;
        goto label_316900;
    }
    ctx->pc = 0x3168F8u;
    SET_GPR_U32(ctx, 31, 0x316900u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316900u; }
        if (ctx->pc != 0x316900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316900u; }
        if (ctx->pc != 0x316900u) { return; }
    }
    ctx->pc = 0x316900u;
label_316900:
    // 0x316900: 0xc077318  jal         func_1DCC60
label_316904:
    if (ctx->pc == 0x316904u) {
        ctx->pc = 0x316904u;
            // 0x316904: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316908u;
        goto label_316908;
    }
    ctx->pc = 0x316900u;
    SET_GPR_U32(ctx, 31, 0x316908u);
    ctx->pc = 0x316904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316900u;
            // 0x316904: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316908u; }
        if (ctx->pc != 0x316908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316908u; }
        if (ctx->pc != 0x316908u) { return; }
    }
    ctx->pc = 0x316908u;
label_316908:
    // 0x316908: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x316908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_31690c:
    // 0x31690c: 0xc0c58f4  jal         func_3163D0
label_316910:
    if (ctx->pc == 0x316910u) {
        ctx->pc = 0x316910u;
            // 0x316910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316914u;
        goto label_316914;
    }
    ctx->pc = 0x31690Cu;
    SET_GPR_U32(ctx, 31, 0x316914u);
    ctx->pc = 0x316910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31690Cu;
            // 0x316910: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3163D0u;
    if (runtime->hasFunction(0x3163D0u)) {
        auto targetFn = runtime->lookupFunction(0x3163D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316914u; }
        if (ctx->pc != 0x316914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003163D0_0x3163d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316914u; }
        if (ctx->pc != 0x316914u) { return; }
    }
    ctx->pc = 0x316914u;
label_316914:
    // 0x316914: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x316914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_316918:
    // 0x316918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x316918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31691c:
    // 0x31691c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x31691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_316920:
    // 0x316920: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_316924:
    if (ctx->pc == 0x316924u) {
        ctx->pc = 0x316924u;
            // 0x316924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316928u;
        goto label_316928;
    }
    ctx->pc = 0x316920u;
    {
        const bool branch_taken_0x316920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x316920) {
            ctx->pc = 0x316924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316920u;
            // 0x316924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316950u;
            goto label_316950;
        }
    }
    ctx->pc = 0x316928u;
label_316928:
    // 0x316928: 0x9242005b  lbu         $v0, 0x5B($s2)
    ctx->pc = 0x316928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 91)));
label_31692c:
    // 0x31692c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_316930:
    if (ctx->pc == 0x316930u) {
        ctx->pc = 0x316934u;
        goto label_316934;
    }
    ctx->pc = 0x31692Cu;
    {
        const bool branch_taken_0x31692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31692c) {
            ctx->pc = 0x31694Cu;
            goto label_31694c;
        }
    }
    ctx->pc = 0x316934u;
label_316934:
    // 0x316934: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x316934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_316938:
    // 0x316938: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x316938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_31693c:
    // 0x31693c: 0x320f809  jalr        $t9
label_316940:
    if (ctx->pc == 0x316940u) {
        ctx->pc = 0x316940u;
            // 0x316940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316944u;
        goto label_316944;
    }
    ctx->pc = 0x31693Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x316944u);
        ctx->pc = 0x316940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31693Cu;
            // 0x316940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x316944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x316944u; }
            if (ctx->pc != 0x316944u) { return; }
        }
        }
    }
    ctx->pc = 0x316944u;
label_316944:
    // 0x316944: 0xc074708  jal         func_1D1C20
label_316948:
    if (ctx->pc == 0x316948u) {
        ctx->pc = 0x316948u;
            // 0x316948: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x31694Cu;
        goto label_31694c;
    }
    ctx->pc = 0x316944u;
    SET_GPR_U32(ctx, 31, 0x31694Cu);
    ctx->pc = 0x316948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316944u;
            // 0x316948: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C20u;
    if (runtime->hasFunction(0x1D1C20u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31694Cu; }
        if (ctx->pc != 0x31694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C20_0x1d1c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31694Cu; }
        if (ctx->pc != 0x31694Cu) { return; }
    }
    ctx->pc = 0x31694Cu;
label_31694c:
    // 0x31694c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316950:
    // 0x316950: 0xc075bf8  jal         func_1D6FE0
label_316954:
    if (ctx->pc == 0x316954u) {
        ctx->pc = 0x316954u;
            // 0x316954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316958u;
        goto label_316958;
    }
    ctx->pc = 0x316950u;
    SET_GPR_U32(ctx, 31, 0x316958u);
    ctx->pc = 0x316954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316950u;
            // 0x316954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316958u; }
        if (ctx->pc != 0x316958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316958u; }
        if (ctx->pc != 0x316958u) { return; }
    }
    ctx->pc = 0x316958u;
label_316958:
    // 0x316958: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x316958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_31695c:
    // 0x31695c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31695cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_316960:
    // 0x316960: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_316964:
    if (ctx->pc == 0x316964u) {
        ctx->pc = 0x316964u;
            // 0x316964: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316968u;
        goto label_316968;
    }
    ctx->pc = 0x316960u;
    {
        const bool branch_taken_0x316960 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x316960) {
            ctx->pc = 0x316964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x316960u;
            // 0x316964: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x316974u;
            goto label_316974;
        }
    }
    ctx->pc = 0x316968u;
label_316968:
    // 0x316968: 0xc0400a8  jal         func_1002A0
label_31696c:
    if (ctx->pc == 0x31696Cu) {
        ctx->pc = 0x31696Cu;
            // 0x31696c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316970u;
        goto label_316970;
    }
    ctx->pc = 0x316968u;
    SET_GPR_U32(ctx, 31, 0x316970u);
    ctx->pc = 0x31696Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316968u;
            // 0x31696c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316970u; }
        if (ctx->pc != 0x316970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316970u; }
        if (ctx->pc != 0x316970u) { return; }
    }
    ctx->pc = 0x316970u;
label_316970:
    // 0x316970: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x316970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316974:
    // 0x316974: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x316974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_316978:
    // 0x316978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x316978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31697c:
    // 0x31697c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31697cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316980:
    // 0x316980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x316980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_316984:
    // 0x316984: 0x3e00008  jr          $ra
label_316988:
    if (ctx->pc == 0x316988u) {
        ctx->pc = 0x316988u;
            // 0x316988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x31698Cu;
        goto label_31698c;
    }
    ctx->pc = 0x316984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316984u;
            // 0x316988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31698Cu;
label_31698c:
    // 0x31698c: 0x0  nop
    ctx->pc = 0x31698cu;
    // NOP
}
