#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004224D0
// Address: 0x4224d0 - 0x422a10
void sub_004224D0_0x4224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004224D0_0x4224d0");
#endif

    switch (ctx->pc) {
        case 0x4224d0u: goto label_4224d0;
        case 0x4224d4u: goto label_4224d4;
        case 0x4224d8u: goto label_4224d8;
        case 0x4224dcu: goto label_4224dc;
        case 0x4224e0u: goto label_4224e0;
        case 0x4224e4u: goto label_4224e4;
        case 0x4224e8u: goto label_4224e8;
        case 0x4224ecu: goto label_4224ec;
        case 0x4224f0u: goto label_4224f0;
        case 0x4224f4u: goto label_4224f4;
        case 0x4224f8u: goto label_4224f8;
        case 0x4224fcu: goto label_4224fc;
        case 0x422500u: goto label_422500;
        case 0x422504u: goto label_422504;
        case 0x422508u: goto label_422508;
        case 0x42250cu: goto label_42250c;
        case 0x422510u: goto label_422510;
        case 0x422514u: goto label_422514;
        case 0x422518u: goto label_422518;
        case 0x42251cu: goto label_42251c;
        case 0x422520u: goto label_422520;
        case 0x422524u: goto label_422524;
        case 0x422528u: goto label_422528;
        case 0x42252cu: goto label_42252c;
        case 0x422530u: goto label_422530;
        case 0x422534u: goto label_422534;
        case 0x422538u: goto label_422538;
        case 0x42253cu: goto label_42253c;
        case 0x422540u: goto label_422540;
        case 0x422544u: goto label_422544;
        case 0x422548u: goto label_422548;
        case 0x42254cu: goto label_42254c;
        case 0x422550u: goto label_422550;
        case 0x422554u: goto label_422554;
        case 0x422558u: goto label_422558;
        case 0x42255cu: goto label_42255c;
        case 0x422560u: goto label_422560;
        case 0x422564u: goto label_422564;
        case 0x422568u: goto label_422568;
        case 0x42256cu: goto label_42256c;
        case 0x422570u: goto label_422570;
        case 0x422574u: goto label_422574;
        case 0x422578u: goto label_422578;
        case 0x42257cu: goto label_42257c;
        case 0x422580u: goto label_422580;
        case 0x422584u: goto label_422584;
        case 0x422588u: goto label_422588;
        case 0x42258cu: goto label_42258c;
        case 0x422590u: goto label_422590;
        case 0x422594u: goto label_422594;
        case 0x422598u: goto label_422598;
        case 0x42259cu: goto label_42259c;
        case 0x4225a0u: goto label_4225a0;
        case 0x4225a4u: goto label_4225a4;
        case 0x4225a8u: goto label_4225a8;
        case 0x4225acu: goto label_4225ac;
        case 0x4225b0u: goto label_4225b0;
        case 0x4225b4u: goto label_4225b4;
        case 0x4225b8u: goto label_4225b8;
        case 0x4225bcu: goto label_4225bc;
        case 0x4225c0u: goto label_4225c0;
        case 0x4225c4u: goto label_4225c4;
        case 0x4225c8u: goto label_4225c8;
        case 0x4225ccu: goto label_4225cc;
        case 0x4225d0u: goto label_4225d0;
        case 0x4225d4u: goto label_4225d4;
        case 0x4225d8u: goto label_4225d8;
        case 0x4225dcu: goto label_4225dc;
        case 0x4225e0u: goto label_4225e0;
        case 0x4225e4u: goto label_4225e4;
        case 0x4225e8u: goto label_4225e8;
        case 0x4225ecu: goto label_4225ec;
        case 0x4225f0u: goto label_4225f0;
        case 0x4225f4u: goto label_4225f4;
        case 0x4225f8u: goto label_4225f8;
        case 0x4225fcu: goto label_4225fc;
        case 0x422600u: goto label_422600;
        case 0x422604u: goto label_422604;
        case 0x422608u: goto label_422608;
        case 0x42260cu: goto label_42260c;
        case 0x422610u: goto label_422610;
        case 0x422614u: goto label_422614;
        case 0x422618u: goto label_422618;
        case 0x42261cu: goto label_42261c;
        case 0x422620u: goto label_422620;
        case 0x422624u: goto label_422624;
        case 0x422628u: goto label_422628;
        case 0x42262cu: goto label_42262c;
        case 0x422630u: goto label_422630;
        case 0x422634u: goto label_422634;
        case 0x422638u: goto label_422638;
        case 0x42263cu: goto label_42263c;
        case 0x422640u: goto label_422640;
        case 0x422644u: goto label_422644;
        case 0x422648u: goto label_422648;
        case 0x42264cu: goto label_42264c;
        case 0x422650u: goto label_422650;
        case 0x422654u: goto label_422654;
        case 0x422658u: goto label_422658;
        case 0x42265cu: goto label_42265c;
        case 0x422660u: goto label_422660;
        case 0x422664u: goto label_422664;
        case 0x422668u: goto label_422668;
        case 0x42266cu: goto label_42266c;
        case 0x422670u: goto label_422670;
        case 0x422674u: goto label_422674;
        case 0x422678u: goto label_422678;
        case 0x42267cu: goto label_42267c;
        case 0x422680u: goto label_422680;
        case 0x422684u: goto label_422684;
        case 0x422688u: goto label_422688;
        case 0x42268cu: goto label_42268c;
        case 0x422690u: goto label_422690;
        case 0x422694u: goto label_422694;
        case 0x422698u: goto label_422698;
        case 0x42269cu: goto label_42269c;
        case 0x4226a0u: goto label_4226a0;
        case 0x4226a4u: goto label_4226a4;
        case 0x4226a8u: goto label_4226a8;
        case 0x4226acu: goto label_4226ac;
        case 0x4226b0u: goto label_4226b0;
        case 0x4226b4u: goto label_4226b4;
        case 0x4226b8u: goto label_4226b8;
        case 0x4226bcu: goto label_4226bc;
        case 0x4226c0u: goto label_4226c0;
        case 0x4226c4u: goto label_4226c4;
        case 0x4226c8u: goto label_4226c8;
        case 0x4226ccu: goto label_4226cc;
        case 0x4226d0u: goto label_4226d0;
        case 0x4226d4u: goto label_4226d4;
        case 0x4226d8u: goto label_4226d8;
        case 0x4226dcu: goto label_4226dc;
        case 0x4226e0u: goto label_4226e0;
        case 0x4226e4u: goto label_4226e4;
        case 0x4226e8u: goto label_4226e8;
        case 0x4226ecu: goto label_4226ec;
        case 0x4226f0u: goto label_4226f0;
        case 0x4226f4u: goto label_4226f4;
        case 0x4226f8u: goto label_4226f8;
        case 0x4226fcu: goto label_4226fc;
        case 0x422700u: goto label_422700;
        case 0x422704u: goto label_422704;
        case 0x422708u: goto label_422708;
        case 0x42270cu: goto label_42270c;
        case 0x422710u: goto label_422710;
        case 0x422714u: goto label_422714;
        case 0x422718u: goto label_422718;
        case 0x42271cu: goto label_42271c;
        case 0x422720u: goto label_422720;
        case 0x422724u: goto label_422724;
        case 0x422728u: goto label_422728;
        case 0x42272cu: goto label_42272c;
        case 0x422730u: goto label_422730;
        case 0x422734u: goto label_422734;
        case 0x422738u: goto label_422738;
        case 0x42273cu: goto label_42273c;
        case 0x422740u: goto label_422740;
        case 0x422744u: goto label_422744;
        case 0x422748u: goto label_422748;
        case 0x42274cu: goto label_42274c;
        case 0x422750u: goto label_422750;
        case 0x422754u: goto label_422754;
        case 0x422758u: goto label_422758;
        case 0x42275cu: goto label_42275c;
        case 0x422760u: goto label_422760;
        case 0x422764u: goto label_422764;
        case 0x422768u: goto label_422768;
        case 0x42276cu: goto label_42276c;
        case 0x422770u: goto label_422770;
        case 0x422774u: goto label_422774;
        case 0x422778u: goto label_422778;
        case 0x42277cu: goto label_42277c;
        case 0x422780u: goto label_422780;
        case 0x422784u: goto label_422784;
        case 0x422788u: goto label_422788;
        case 0x42278cu: goto label_42278c;
        case 0x422790u: goto label_422790;
        case 0x422794u: goto label_422794;
        case 0x422798u: goto label_422798;
        case 0x42279cu: goto label_42279c;
        case 0x4227a0u: goto label_4227a0;
        case 0x4227a4u: goto label_4227a4;
        case 0x4227a8u: goto label_4227a8;
        case 0x4227acu: goto label_4227ac;
        case 0x4227b0u: goto label_4227b0;
        case 0x4227b4u: goto label_4227b4;
        case 0x4227b8u: goto label_4227b8;
        case 0x4227bcu: goto label_4227bc;
        case 0x4227c0u: goto label_4227c0;
        case 0x4227c4u: goto label_4227c4;
        case 0x4227c8u: goto label_4227c8;
        case 0x4227ccu: goto label_4227cc;
        case 0x4227d0u: goto label_4227d0;
        case 0x4227d4u: goto label_4227d4;
        case 0x4227d8u: goto label_4227d8;
        case 0x4227dcu: goto label_4227dc;
        case 0x4227e0u: goto label_4227e0;
        case 0x4227e4u: goto label_4227e4;
        case 0x4227e8u: goto label_4227e8;
        case 0x4227ecu: goto label_4227ec;
        case 0x4227f0u: goto label_4227f0;
        case 0x4227f4u: goto label_4227f4;
        case 0x4227f8u: goto label_4227f8;
        case 0x4227fcu: goto label_4227fc;
        case 0x422800u: goto label_422800;
        case 0x422804u: goto label_422804;
        case 0x422808u: goto label_422808;
        case 0x42280cu: goto label_42280c;
        case 0x422810u: goto label_422810;
        case 0x422814u: goto label_422814;
        case 0x422818u: goto label_422818;
        case 0x42281cu: goto label_42281c;
        case 0x422820u: goto label_422820;
        case 0x422824u: goto label_422824;
        case 0x422828u: goto label_422828;
        case 0x42282cu: goto label_42282c;
        case 0x422830u: goto label_422830;
        case 0x422834u: goto label_422834;
        case 0x422838u: goto label_422838;
        case 0x42283cu: goto label_42283c;
        case 0x422840u: goto label_422840;
        case 0x422844u: goto label_422844;
        case 0x422848u: goto label_422848;
        case 0x42284cu: goto label_42284c;
        case 0x422850u: goto label_422850;
        case 0x422854u: goto label_422854;
        case 0x422858u: goto label_422858;
        case 0x42285cu: goto label_42285c;
        case 0x422860u: goto label_422860;
        case 0x422864u: goto label_422864;
        case 0x422868u: goto label_422868;
        case 0x42286cu: goto label_42286c;
        case 0x422870u: goto label_422870;
        case 0x422874u: goto label_422874;
        case 0x422878u: goto label_422878;
        case 0x42287cu: goto label_42287c;
        case 0x422880u: goto label_422880;
        case 0x422884u: goto label_422884;
        case 0x422888u: goto label_422888;
        case 0x42288cu: goto label_42288c;
        case 0x422890u: goto label_422890;
        case 0x422894u: goto label_422894;
        case 0x422898u: goto label_422898;
        case 0x42289cu: goto label_42289c;
        case 0x4228a0u: goto label_4228a0;
        case 0x4228a4u: goto label_4228a4;
        case 0x4228a8u: goto label_4228a8;
        case 0x4228acu: goto label_4228ac;
        case 0x4228b0u: goto label_4228b0;
        case 0x4228b4u: goto label_4228b4;
        case 0x4228b8u: goto label_4228b8;
        case 0x4228bcu: goto label_4228bc;
        case 0x4228c0u: goto label_4228c0;
        case 0x4228c4u: goto label_4228c4;
        case 0x4228c8u: goto label_4228c8;
        case 0x4228ccu: goto label_4228cc;
        case 0x4228d0u: goto label_4228d0;
        case 0x4228d4u: goto label_4228d4;
        case 0x4228d8u: goto label_4228d8;
        case 0x4228dcu: goto label_4228dc;
        case 0x4228e0u: goto label_4228e0;
        case 0x4228e4u: goto label_4228e4;
        case 0x4228e8u: goto label_4228e8;
        case 0x4228ecu: goto label_4228ec;
        case 0x4228f0u: goto label_4228f0;
        case 0x4228f4u: goto label_4228f4;
        case 0x4228f8u: goto label_4228f8;
        case 0x4228fcu: goto label_4228fc;
        case 0x422900u: goto label_422900;
        case 0x422904u: goto label_422904;
        case 0x422908u: goto label_422908;
        case 0x42290cu: goto label_42290c;
        case 0x422910u: goto label_422910;
        case 0x422914u: goto label_422914;
        case 0x422918u: goto label_422918;
        case 0x42291cu: goto label_42291c;
        case 0x422920u: goto label_422920;
        case 0x422924u: goto label_422924;
        case 0x422928u: goto label_422928;
        case 0x42292cu: goto label_42292c;
        case 0x422930u: goto label_422930;
        case 0x422934u: goto label_422934;
        case 0x422938u: goto label_422938;
        case 0x42293cu: goto label_42293c;
        case 0x422940u: goto label_422940;
        case 0x422944u: goto label_422944;
        case 0x422948u: goto label_422948;
        case 0x42294cu: goto label_42294c;
        case 0x422950u: goto label_422950;
        case 0x422954u: goto label_422954;
        case 0x422958u: goto label_422958;
        case 0x42295cu: goto label_42295c;
        case 0x422960u: goto label_422960;
        case 0x422964u: goto label_422964;
        case 0x422968u: goto label_422968;
        case 0x42296cu: goto label_42296c;
        case 0x422970u: goto label_422970;
        case 0x422974u: goto label_422974;
        case 0x422978u: goto label_422978;
        case 0x42297cu: goto label_42297c;
        case 0x422980u: goto label_422980;
        case 0x422984u: goto label_422984;
        case 0x422988u: goto label_422988;
        case 0x42298cu: goto label_42298c;
        case 0x422990u: goto label_422990;
        case 0x422994u: goto label_422994;
        case 0x422998u: goto label_422998;
        case 0x42299cu: goto label_42299c;
        case 0x4229a0u: goto label_4229a0;
        case 0x4229a4u: goto label_4229a4;
        case 0x4229a8u: goto label_4229a8;
        case 0x4229acu: goto label_4229ac;
        case 0x4229b0u: goto label_4229b0;
        case 0x4229b4u: goto label_4229b4;
        case 0x4229b8u: goto label_4229b8;
        case 0x4229bcu: goto label_4229bc;
        case 0x4229c0u: goto label_4229c0;
        case 0x4229c4u: goto label_4229c4;
        case 0x4229c8u: goto label_4229c8;
        case 0x4229ccu: goto label_4229cc;
        case 0x4229d0u: goto label_4229d0;
        case 0x4229d4u: goto label_4229d4;
        case 0x4229d8u: goto label_4229d8;
        case 0x4229dcu: goto label_4229dc;
        case 0x4229e0u: goto label_4229e0;
        case 0x4229e4u: goto label_4229e4;
        case 0x4229e8u: goto label_4229e8;
        case 0x4229ecu: goto label_4229ec;
        case 0x4229f0u: goto label_4229f0;
        case 0x4229f4u: goto label_4229f4;
        case 0x4229f8u: goto label_4229f8;
        case 0x4229fcu: goto label_4229fc;
        case 0x422a00u: goto label_422a00;
        case 0x422a04u: goto label_422a04;
        case 0x422a08u: goto label_422a08;
        case 0x422a0cu: goto label_422a0c;
        default: break;
    }

    ctx->pc = 0x4224d0u;

label_4224d0:
    // 0x4224d0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x4224d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_4224d4:
    // 0x4224d4: 0x3c0a00af  lui         $t2, 0xAF
    ctx->pc = 0x4224d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)175 << 16));
label_4224d8:
    // 0x4224d8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x4224d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_4224dc:
    // 0x4224dc: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x4224dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
label_4224e0:
    // 0x4224e0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x4224e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_4224e4:
    // 0x4224e4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4224e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4224e8:
    // 0x4224e8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x4224e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_4224ec:
    // 0x4224ec: 0x254a0e84  addiu       $t2, $t2, 0xE84
    ctx->pc = 0x4224ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3716));
label_4224f0:
    // 0x4224f0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x4224f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_4224f4:
    // 0x4224f4: 0x2529fec0  addiu       $t1, $t1, -0x140
    ctx->pc = 0x4224f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
label_4224f8:
    // 0x4224f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x4224f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_4224fc:
    // 0x4224fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4224fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_422500:
    // 0x422500: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x422500u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_422504:
    // 0x422504: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x422504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_422508:
    // 0x422508: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x422508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42250c:
    // 0x42250c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x42250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_422510:
    // 0x422510: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x422510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_422514:
    // 0x422514: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x422514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_422518:
    // 0x422518: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x422518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_42251c:
    // 0x42251c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x42251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_422520:
    // 0x422520: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x422520u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_422524:
    // 0x422524: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x422524u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_422528:
    // 0x422528: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x422528u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_42252c:
    // 0x42252c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x42252cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_422530:
    // 0x422530: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x422530u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_422534:
    // 0x422534: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x422534u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_422538:
    // 0x422538: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x422538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_42253c:
    // 0x42253c: 0x8c67d130  lw          $a3, -0x2ED0($v1)
    ctx->pc = 0x42253cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_422540:
    // 0x422540: 0x8c9ee370  lw          $fp, -0x1C90($a0)
    ctx->pc = 0x422540u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959984)));
label_422544:
    // 0x422544: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x422544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_422548:
    // 0x422548: 0x8cec0130  lw          $t4, 0x130($a3)
    ctx->pc = 0x422548u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_42254c:
    // 0x42254c: 0x8c68d120  lw          $t0, -0x2EE0($v1)
    ctx->pc = 0x42254cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_422550:
    // 0x422550: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x422550u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_422554:
    // 0x422554: 0x8cc70e80  lw          $a3, 0xE80($a2)
    ctx->pc = 0x422554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3712)));
label_422558:
    // 0x422558: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x422558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_42255c:
    // 0x42255c: 0x14b2021  addu        $a0, $t2, $t3
    ctx->pc = 0x42255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_422560:
    // 0x422560: 0x8c73e378  lw          $s3, -0x1C88($v1)
    ctx->pc = 0x422560u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_422564:
    // 0x422564: 0x8cea0780  lw          $t2, 0x780($a3)
    ctx->pc = 0x422564u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1920)));
label_422568:
    // 0x422568: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x422568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_42256c:
    // 0x42256c: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x42256cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_422570:
    // 0x422570: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x422570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_422574:
    // 0x422574: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x422574u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_422578:
    // 0x422578: 0x8ce70cb4  lw          $a3, 0xCB4($a3)
    ctx->pc = 0x422578u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3252)));
label_42257c:
    // 0x42257c: 0x10b2021  addu        $a0, $t0, $t3
    ctx->pc = 0x42257cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_422580:
    // 0x422580: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x422580u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_422584:
    // 0x422584: 0x8d0b0010  lw          $t3, 0x10($t0)
    ctx->pc = 0x422584u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_422588:
    // 0x422588: 0xc2040  sll         $a0, $t4, 1
    ctx->pc = 0x422588u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
label_42258c:
    // 0x42258c: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x42258cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_422590:
    // 0x422590: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x422590u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_422594:
    // 0x422594: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x422594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_422598:
    // 0x422598: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x422598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_42259c:
    // 0x42259c: 0x25640110  addiu       $a0, $t3, 0x110
    ctx->pc = 0x42259cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 272));
label_4225a0:
    // 0x4225a0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x4225a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_4225a4:
    // 0x4225a4: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x4225a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_4225a8:
    // 0x4225a8: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x4225a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_4225ac:
    // 0x4225ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4225acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4225b0:
    // 0x4225b0: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x4225b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_4225b4:
    // 0x4225b4: 0x88b021  addu        $s6, $a0, $t0
    ctx->pc = 0x4225b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_4225b8:
    // 0x4225b8: 0x14e600ff  bne         $a3, $a2, . + 4 + (0xFF << 2)
label_4225bc:
    if (ctx->pc == 0x4225BCu) {
        ctx->pc = 0x4225BCu;
            // 0x4225bc: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x4225C0u;
        goto label_4225c0;
    }
    ctx->pc = 0x4225B8u;
    {
        const bool branch_taken_0x4225b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x4225BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4225B8u;
            // 0x4225bc: 0x24900030  addiu       $s0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4225b8) {
            ctx->pc = 0x4229B8u;
            goto label_4229b8;
        }
    }
    ctx->pc = 0x4225C0u;
label_4225c0:
    // 0x4225c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4225c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4225c4:
    // 0x4225c4: 0x246402c0  addiu       $a0, $v1, 0x2C0
    ctx->pc = 0x4225c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
label_4225c8:
    // 0x4225c8: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x4225c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4225cc:
    // 0x4225cc: 0xc4b7000c  lwc1        $f23, 0xC($a1)
    ctx->pc = 0x4225ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4225d0:
    // 0x4225d0: 0xc4b6001c  lwc1        $f22, 0x1C($a1)
    ctx->pc = 0x4225d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4225d4:
    // 0x4225d4: 0x8cb70010  lw          $s7, 0x10($a1)
    ctx->pc = 0x4225d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4225d8:
    // 0x4225d8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x4225d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_4225dc:
    // 0x4225dc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4225dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_4225e0:
    // 0x4225e0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4225e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4225e4:
    // 0x4225e4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x4225e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_4225e8:
    // 0x4225e8: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x4225e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4225ec:
    // 0x4225ec: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x4225ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_4225f0:
    // 0x4225f0: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x4225f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4225f4:
    // 0x4225f4: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x4225f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_4225f8:
    // 0x4225f8: 0xc04cc1c  jal         func_133070
label_4225fc:
    if (ctx->pc == 0x4225FCu) {
        ctx->pc = 0x4225FCu;
            // 0x4225fc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x422600u;
        goto label_422600;
    }
    ctx->pc = 0x4225F8u;
    SET_GPR_U32(ctx, 31, 0x422600u);
    ctx->pc = 0x4225FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4225F8u;
            // 0x4225fc: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422600u; }
        if (ctx->pc != 0x422600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422600u; }
        if (ctx->pc != 0x422600u) { return; }
    }
    ctx->pc = 0x422600u;
label_422600:
    // 0x422600: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x422600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_422604:
    // 0x422604: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x422604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_422608:
    // 0x422608: 0x0  nop
    ctx->pc = 0x422608u;
    // NOP
label_42260c:
    // 0x42260c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x42260cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422610:
    // 0x422610: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_422614:
    if (ctx->pc == 0x422614u) {
        ctx->pc = 0x422614u;
            // 0x422614: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->pc = 0x422618u;
        goto label_422618;
    }
    ctx->pc = 0x422610u;
    {
        const bool branch_taken_0x422610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x422610) {
            ctx->pc = 0x422614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422610u;
            // 0x422614: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422630u;
            goto label_422630;
        }
    }
    ctx->pc = 0x422618u;
label_422618:
    // 0x422618: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x422618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_42261c:
    // 0x42261c: 0xc696001c  lwc1        $f22, 0x1C($s4)
    ctx->pc = 0x42261cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_422620:
    // 0x422620: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x422620u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_422624:
    // 0x422624: 0x8e970010  lw          $s7, 0x10($s4)
    ctx->pc = 0x422624u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_422628:
    // 0x422628: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x422628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_42262c:
    // 0x42262c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x42262cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_422630:
    // 0x422630: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x422630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_422634:
    // 0x422634: 0x0  nop
    ctx->pc = 0x422634u;
    // NOP
label_422638:
    // 0x422638: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x422638u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42263c:
    // 0x42263c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_422640:
    if (ctx->pc == 0x422640u) {
        ctx->pc = 0x422644u;
        goto label_422644;
    }
    ctx->pc = 0x42263Cu;
    {
        const bool branch_taken_0x42263c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42263c) {
            ctx->pc = 0x422654u;
            goto label_422654;
        }
    }
    ctx->pc = 0x422644u;
label_422644:
    // 0x422644: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x422644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_422648:
    // 0x422648: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x422648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_42264c:
    // 0x42264c: 0x10000014  b           . + 4 + (0x14 << 2)
label_422650:
    if (ctx->pc == 0x422650u) {
        ctx->pc = 0x422650u;
            // 0x422650: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x422654u;
        goto label_422654;
    }
    ctx->pc = 0x42264Cu;
    {
        const bool branch_taken_0x42264c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x422650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42264Cu;
            // 0x422650: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42264c) {
            ctx->pc = 0x4226A0u;
            goto label_4226a0;
        }
    }
    ctx->pc = 0x422654u;
label_422654:
    // 0x422654: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x422654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422658:
    // 0x422658: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_42265c:
    if (ctx->pc == 0x42265Cu) {
        ctx->pc = 0x422660u;
        goto label_422660;
    }
    ctx->pc = 0x422658u;
    {
        const bool branch_taken_0x422658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x422658) {
            ctx->pc = 0x42269Cu;
            goto label_42269c;
        }
    }
    ctx->pc = 0x422660u;
label_422660:
    // 0x422660: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x422660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
label_422664:
    // 0x422664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x422664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_422668:
    // 0x422668: 0x0  nop
    ctx->pc = 0x422668u;
    // NOP
label_42266c:
    // 0x42266c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x42266cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422670:
    // 0x422670: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_422674:
    if (ctx->pc == 0x422674u) {
        ctx->pc = 0x422678u;
        goto label_422678;
    }
    ctx->pc = 0x422670u;
    {
        const bool branch_taken_0x422670 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x422670) {
            ctx->pc = 0x42269Cu;
            goto label_42269c;
        }
    }
    ctx->pc = 0x422678u;
label_422678:
    // 0x422678: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x422678u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_42267c:
    // 0x42267c: 0x3c023b0c  lui         $v0, 0x3B0C
    ctx->pc = 0x42267cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15116 << 16));
label_422680:
    // 0x422680: 0x34436f2e  ori         $v1, $v0, 0x6F2E
    ctx->pc = 0x422680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28462);
label_422684:
    // 0x422684: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x422684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_422688:
    // 0x422688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x422688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42268c:
    // 0x42268c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x42268cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_422690:
    // 0x422690: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x422690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_422694:
    // 0x422694: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x422694u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_422698:
    // 0x422698: 0x46021d5d  msub.s      $f21, $f3, $f2
    ctx->pc = 0x422698u;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_42269c:
    // 0x42269c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x42269cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4226a0:
    // 0x4226a0: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x4226a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_4226a4:
    // 0x4226a4: 0xc04cc90  jal         func_133240
label_4226a8:
    if (ctx->pc == 0x4226A8u) {
        ctx->pc = 0x4226A8u;
            // 0x4226a8: 0x26260200  addiu       $a2, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->pc = 0x4226ACu;
        goto label_4226ac;
    }
    ctx->pc = 0x4226A4u;
    SET_GPR_U32(ctx, 31, 0x4226ACu);
    ctx->pc = 0x4226A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4226A4u;
            // 0x4226a8: 0x26260200  addiu       $a2, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226ACu; }
        if (ctx->pc != 0x4226ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226ACu; }
        if (ctx->pc != 0x4226ACu) { return; }
    }
    ctx->pc = 0x4226ACu;
label_4226ac:
    // 0x4226ac: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4226acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4226b0:
    // 0x4226b0: 0xc04cc44  jal         func_133110
label_4226b4:
    if (ctx->pc == 0x4226B4u) {
        ctx->pc = 0x4226B4u;
            // 0x4226b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4226B8u;
        goto label_4226b8;
    }
    ctx->pc = 0x4226B0u;
    SET_GPR_U32(ctx, 31, 0x4226B8u);
    ctx->pc = 0x4226B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4226B0u;
            // 0x4226b4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226B8u; }
        if (ctx->pc != 0x4226B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226B8u; }
        if (ctx->pc != 0x4226B8u) { return; }
    }
    ctx->pc = 0x4226B8u;
label_4226b8:
    // 0x4226b8: 0x263401f0  addiu       $s4, $s1, 0x1F0
    ctx->pc = 0x4226b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
label_4226bc:
    // 0x4226bc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4226bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4226c0:
    // 0x4226c0: 0xc04cc08  jal         func_133020
label_4226c4:
    if (ctx->pc == 0x4226C4u) {
        ctx->pc = 0x4226C4u;
            // 0x4226c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4226C8u;
        goto label_4226c8;
    }
    ctx->pc = 0x4226C0u;
    SET_GPR_U32(ctx, 31, 0x4226C8u);
    ctx->pc = 0x4226C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4226C0u;
            // 0x4226c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226C8u; }
        if (ctx->pc != 0x4226C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226C8u; }
        if (ctx->pc != 0x4226C8u) { return; }
    }
    ctx->pc = 0x4226C8u;
label_4226c8:
    // 0x4226c8: 0x46000606  mov.s       $f24, $f0
    ctx->pc = 0x4226c8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
label_4226cc:
    // 0x4226cc: 0xc04cc14  jal         func_133050
label_4226d0:
    if (ctx->pc == 0x4226D0u) {
        ctx->pc = 0x4226D0u;
            // 0x4226d0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x4226D4u;
        goto label_4226d4;
    }
    ctx->pc = 0x4226CCu;
    SET_GPR_U32(ctx, 31, 0x4226D4u);
    ctx->pc = 0x4226D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4226CCu;
            // 0x4226d0: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226D4u; }
        if (ctx->pc != 0x4226D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226D4u; }
        if (ctx->pc != 0x4226D4u) { return; }
    }
    ctx->pc = 0x4226D4u;
label_4226d4:
    // 0x4226d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4226d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4226d8:
    // 0x4226d8: 0xc04cc14  jal         func_133050
label_4226dc:
    if (ctx->pc == 0x4226DCu) {
        ctx->pc = 0x4226DCu;
            // 0x4226dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4226E0u;
        goto label_4226e0;
    }
    ctx->pc = 0x4226D8u;
    SET_GPR_U32(ctx, 31, 0x4226E0u);
    ctx->pc = 0x4226DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4226D8u;
            // 0x4226dc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226E0u; }
        if (ctx->pc != 0x4226E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4226E0u; }
        if (ctx->pc != 0x4226E0u) { return; }
    }
    ctx->pc = 0x4226E0u;
label_4226e0:
    // 0x4226e0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4226e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4226e4:
    // 0x4226e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4226e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4226e8:
    // 0x4226e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4226e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4226ec:
    // 0x4226ec: 0x4600c043  div.s       $f1, $f24, $f0
    ctx->pc = 0x4226ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[24] * 0.0f); } else ctx->f[1] = ctx->f[24] / ctx->f[0];
label_4226f0:
    // 0x4226f0: 0x0  nop
    ctx->pc = 0x4226f0u;
    // NOP
label_4226f4:
    // 0x4226f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4226f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4226f8:
    // 0x4226f8: 0x0  nop
    ctx->pc = 0x4226f8u;
    // NOP
label_4226fc:
    // 0x4226fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4226fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422700:
    // 0x422700: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_422704:
    if (ctx->pc == 0x422704u) {
        ctx->pc = 0x422704u;
            // 0x422704: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x422708u;
        goto label_422708;
    }
    ctx->pc = 0x422700u;
    {
        const bool branch_taken_0x422700 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x422700) {
            ctx->pc = 0x422704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x422700u;
            // 0x422704: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x422710u;
            goto label_422710;
        }
    }
    ctx->pc = 0x422708u;
label_422708:
    // 0x422708: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x422708u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42270c:
    // 0x42270c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x42270cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_422710:
    // 0x422710: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x422710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_422714:
    // 0x422714: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x422714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_422718:
    // 0x422718: 0x0  nop
    ctx->pc = 0x422718u;
    // NOP
label_42271c:
    // 0x42271c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x42271cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_422720:
    // 0x422720: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_422724:
    if (ctx->pc == 0x422724u) {
        ctx->pc = 0x422724u;
            // 0x422724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x422728u;
        goto label_422728;
    }
    ctx->pc = 0x422720u;
    {
        const bool branch_taken_0x422720 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x422724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422720u;
            // 0x422724: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x422720) {
            ctx->pc = 0x42272Cu;
            goto label_42272c;
        }
    }
    ctx->pc = 0x422728u;
label_422728:
    // 0x422728: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x422728u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42272c:
    // 0x42272c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x42272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_422730:
    // 0x422730: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x422730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_422734:
    // 0x422734: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x422734u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_422738:
    // 0x422738: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x422738u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42273c:
    // 0x42273c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_422740:
    // 0x422740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x422740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_422744:
    // 0x422744: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x422744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_422748:
    // 0x422748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x422748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42274c:
    // 0x42274c: 0x0  nop
    ctx->pc = 0x42274cu;
    // NOP
label_422750:
    // 0x422750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x422750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_422754:
    // 0x422754: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x422754u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_422758:
    // 0x422758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x422758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_42275c:
    // 0x42275c: 0x0  nop
    ctx->pc = 0x42275cu;
    // NOP
label_422760:
    // 0x422760: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x422760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_422764:
    // 0x422764: 0xc0477fe  jal         func_11DFF8
label_422768:
    if (ctx->pc == 0x422768u) {
        ctx->pc = 0x422768u;
            // 0x422768: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x42276Cu;
        goto label_42276c;
    }
    ctx->pc = 0x422764u;
    SET_GPR_U32(ctx, 31, 0x42276Cu);
    ctx->pc = 0x422768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422764u;
            // 0x422768: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42276Cu; }
        if (ctx->pc != 0x42276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42276Cu; }
        if (ctx->pc != 0x42276Cu) { return; }
    }
    ctx->pc = 0x42276Cu;
label_42276c:
    // 0x42276c: 0x263101d0  addiu       $s1, $s1, 0x1D0
    ctx->pc = 0x42276cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_422770:
    // 0x422770: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x422770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_422774:
    // 0x422774: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x422774u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_422778:
    // 0x422778: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x422778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42277c:
    // 0x42277c: 0xc04cc08  jal         func_133020
label_422780:
    if (ctx->pc == 0x422780u) {
        ctx->pc = 0x422780u;
            // 0x422780: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x422784u;
        goto label_422784;
    }
    ctx->pc = 0x42277Cu;
    SET_GPR_U32(ctx, 31, 0x422784u);
    ctx->pc = 0x422780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42277Cu;
            // 0x422780: 0x46000606  mov.s       $f24, $f0 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422784u; }
        if (ctx->pc != 0x422784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422784u; }
        if (ctx->pc != 0x422784u) { return; }
    }
    ctx->pc = 0x422784u;
label_422784:
    // 0x422784: 0x46000686  mov.s       $f26, $f0
    ctx->pc = 0x422784u;
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
label_422788:
    // 0x422788: 0xc04cc14  jal         func_133050
label_42278c:
    if (ctx->pc == 0x42278Cu) {
        ctx->pc = 0x42278Cu;
            // 0x42278c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x422790u;
        goto label_422790;
    }
    ctx->pc = 0x422788u;
    SET_GPR_U32(ctx, 31, 0x422790u);
    ctx->pc = 0x42278Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422788u;
            // 0x42278c: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422790u; }
        if (ctx->pc != 0x422790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422790u; }
        if (ctx->pc != 0x422790u) { return; }
    }
    ctx->pc = 0x422790u;
label_422790:
    // 0x422790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x422790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_422794:
    // 0x422794: 0xc04cc14  jal         func_133050
label_422798:
    if (ctx->pc == 0x422798u) {
        ctx->pc = 0x422798u;
            // 0x422798: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x42279Cu;
        goto label_42279c;
    }
    ctx->pc = 0x422794u;
    SET_GPR_U32(ctx, 31, 0x42279Cu);
    ctx->pc = 0x422798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422794u;
            // 0x422798: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42279Cu; }
        if (ctx->pc != 0x42279Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42279Cu; }
        if (ctx->pc != 0x42279Cu) { return; }
    }
    ctx->pc = 0x42279Cu;
label_42279c:
    // 0x42279c: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x42279cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
label_4227a0:
    // 0x4227a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4227a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4227a4:
    // 0x4227a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4227a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4227a8:
    // 0x4227a8: 0x4600d043  div.s       $f1, $f26, $f0
    ctx->pc = 0x4227a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[26] * 0.0f); } else ctx->f[1] = ctx->f[26] / ctx->f[0];
label_4227ac:
    // 0x4227ac: 0x0  nop
    ctx->pc = 0x4227acu;
    // NOP
label_4227b0:
    // 0x4227b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4227b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4227b4:
    // 0x4227b4: 0x0  nop
    ctx->pc = 0x4227b4u;
    // NOP
label_4227b8:
    // 0x4227b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4227b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4227bc:
    // 0x4227bc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4227c0:
    if (ctx->pc == 0x4227C0u) {
        ctx->pc = 0x4227C0u;
            // 0x4227c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4227C4u;
        goto label_4227c4;
    }
    ctx->pc = 0x4227BCu;
    {
        const bool branch_taken_0x4227bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4227bc) {
            ctx->pc = 0x4227C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4227BCu;
            // 0x4227c0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4227CCu;
            goto label_4227cc;
        }
    }
    ctx->pc = 0x4227C4u;
label_4227c4:
    // 0x4227c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4227c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4227c8:
    // 0x4227c8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4227c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4227cc:
    // 0x4227cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4227ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4227d0:
    // 0x4227d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4227d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4227d4:
    // 0x4227d4: 0x0  nop
    ctx->pc = 0x4227d4u;
    // NOP
label_4227d8:
    // 0x4227d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4227d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4227dc:
    // 0x4227dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4227e0:
    if (ctx->pc == 0x4227E0u) {
        ctx->pc = 0x4227E0u;
            // 0x4227e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4227E4u;
        goto label_4227e4;
    }
    ctx->pc = 0x4227DCu;
    {
        const bool branch_taken_0x4227dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4227E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4227DCu;
            // 0x4227e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4227dc) {
            ctx->pc = 0x4227E8u;
            goto label_4227e8;
        }
    }
    ctx->pc = 0x4227E4u;
label_4227e4:
    // 0x4227e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4227e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4227e8:
    // 0x4227e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4227e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4227ec:
    // 0x4227ec: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x4227ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4227f0:
    // 0x4227f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4227f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4227f4:
    // 0x4227f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4227f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4227f8:
    // 0x4227f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4227f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4227fc:
    // 0x4227fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4227fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_422800:
    // 0x422800: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x422800u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_422804:
    // 0x422804: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x422804u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_422808:
    // 0x422808: 0x0  nop
    ctx->pc = 0x422808u;
    // NOP
label_42280c:
    // 0x42280c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42280cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_422810:
    // 0x422810: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x422810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_422814:
    // 0x422814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x422814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_422818:
    // 0x422818: 0x0  nop
    ctx->pc = 0x422818u;
    // NOP
label_42281c:
    // 0x42281c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x42281cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_422820:
    // 0x422820: 0xc0477fe  jal         func_11DFF8
label_422824:
    if (ctx->pc == 0x422824u) {
        ctx->pc = 0x422824u;
            // 0x422824: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x422828u;
        goto label_422828;
    }
    ctx->pc = 0x422820u;
    SET_GPR_U32(ctx, 31, 0x422828u);
    ctx->pc = 0x422824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422820u;
            // 0x422824: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422828u; }
        if (ctx->pc != 0x422828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422828u; }
        if (ctx->pc != 0x422828u) { return; }
    }
    ctx->pc = 0x422828u;
label_422828:
    // 0x422828: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x422828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_42282c:
    // 0x42282c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x42282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_422830:
    // 0x422830: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x422830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_422834:
    // 0x422834: 0x0  nop
    ctx->pc = 0x422834u;
    // NOP
label_422838:
    // 0x422838: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x422838u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42283c:
    // 0x42283c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_422840:
    if (ctx->pc == 0x422840u) {
        ctx->pc = 0x422840u;
            // 0x422840: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x422844u;
        goto label_422844;
    }
    ctx->pc = 0x42283Cu;
    {
        const bool branch_taken_0x42283c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42283c) {
            ctx->pc = 0x422840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42283Cu;
            // 0x422840: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42285Cu;
            goto label_42285c;
        }
    }
    ctx->pc = 0x422844u;
label_422844:
    // 0x422844: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x422844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_422848:
    // 0x422848: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x422848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_42284c:
    // 0x42284c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x42284cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_422850:
    // 0x422850: 0x0  nop
    ctx->pc = 0x422850u;
    // NOP
label_422854:
    // 0x422854: 0x46140601  sub.s       $f24, $f0, $f20
    ctx->pc = 0x422854u;
    ctx->f[24] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_422858:
    // 0x422858: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x422858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_42285c:
    // 0x42285c: 0xc04f674  jal         func_13D9D0
label_422860:
    if (ctx->pc == 0x422860u) {
        ctx->pc = 0x422860u;
            // 0x422860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x422864u;
        goto label_422864;
    }
    ctx->pc = 0x42285Cu;
    SET_GPR_U32(ctx, 31, 0x422864u);
    ctx->pc = 0x422860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42285Cu;
            // 0x422860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422864u; }
        if (ctx->pc != 0x422864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422864u; }
        if (ctx->pc != 0x422864u) { return; }
    }
    ctx->pc = 0x422864u;
label_422864:
    // 0x422864: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x422864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_422868:
    // 0x422868: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x422868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42286c:
    // 0x42286c: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x42286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_422870:
    // 0x422870: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x422870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_422874:
    // 0x422874: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x422874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_422878:
    // 0x422878: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x422878u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_42287c:
    // 0x42287c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x42287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_422880:
    // 0x422880: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x422880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_422884:
    // 0x422884: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x422884u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_422888:
    // 0x422888: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x422888u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_42288c:
    // 0x42288c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x42288cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_422890:
    // 0x422890: 0xc0a95e0  jal         func_2A5780
label_422894:
    if (ctx->pc == 0x422894u) {
        ctx->pc = 0x422894u;
            // 0x422894: 0x27a60168  addiu       $a2, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->pc = 0x422898u;
        goto label_422898;
    }
    ctx->pc = 0x422890u;
    SET_GPR_U32(ctx, 31, 0x422898u);
    ctx->pc = 0x422894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422890u;
            // 0x422894: 0x27a60168  addiu       $a2, $sp, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5780u;
    if (runtime->hasFunction(0x2A5780u)) {
        auto targetFn = runtime->lookupFunction(0x2A5780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422898u; }
        if (ctx->pc != 0x422898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5780_0x2a5780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422898u; }
        if (ctx->pc != 0x422898u) { return; }
    }
    ctx->pc = 0x422898u;
label_422898:
    // 0x422898: 0xc7a1016c  lwc1        $f1, 0x16C($sp)
    ctx->pc = 0x422898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42289c:
    // 0x42289c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x42289cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4228a0:
    // 0x4228a0: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x4228a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4228a4:
    // 0x4228a4: 0xc6ce0008  lwc1        $f14, 0x8($s6)
    ctx->pc = 0x4228a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4228a8:
    // 0x4228a8: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x4228a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4228ac:
    // 0x4228ac: 0xc04f3fc  jal         func_13CFF0
label_4228b0:
    if (ctx->pc == 0x4228B0u) {
        ctx->pc = 0x4228B0u;
            // 0x4228b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4228B4u;
        goto label_4228b4;
    }
    ctx->pc = 0x4228ACu;
    SET_GPR_U32(ctx, 31, 0x4228B4u);
    ctx->pc = 0x4228B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4228ACu;
            // 0x4228b0: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4228B4u; }
        if (ctx->pc != 0x4228B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4228B4u; }
        if (ctx->pc != 0x4228B4u) { return; }
    }
    ctx->pc = 0x4228B4u;
label_4228b4:
    // 0x4228b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x4228b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_4228b8:
    // 0x4228b8: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x4228b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_4228bc:
    // 0x4228bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4228bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4228c0:
    // 0x4228c0: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x4228c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_4228c4:
    // 0x4228c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4228c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4228c8:
    // 0x4228c8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4228c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4228cc:
    // 0x4228cc: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x4228ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
label_4228d0:
    // 0x4228d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4228d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4228d4:
    // 0x4228d4: 0x0  nop
    ctx->pc = 0x4228d4u;
    // NOP
label_4228d8:
    // 0x4228d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4228d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4228dc:
    // 0x4228dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4228dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4228e0:
    // 0x4228e0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4228e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4228e4:
    // 0x4228e4: 0xc04cdd0  jal         func_133740
label_4228e8:
    if (ctx->pc == 0x4228E8u) {
        ctx->pc = 0x4228E8u;
            // 0x4228e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4228ECu;
        goto label_4228ec;
    }
    ctx->pc = 0x4228E4u;
    SET_GPR_U32(ctx, 31, 0x4228ECu);
    ctx->pc = 0x4228E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4228E4u;
            // 0x4228e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4228ECu; }
        if (ctx->pc != 0x4228ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4228ECu; }
        if (ctx->pc != 0x4228ECu) { return; }
    }
    ctx->pc = 0x4228ECu;
label_4228ec:
    // 0x4228ec: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4228ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4228f0:
    // 0x4228f0: 0x2406f1c8  addiu       $a2, $zero, -0xE38
    ctx->pc = 0x4228f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963656));
label_4228f4:
    // 0x4228f4: 0xc04cdb0  jal         func_1336C0
label_4228f8:
    if (ctx->pc == 0x4228F8u) {
        ctx->pc = 0x4228F8u;
            // 0x4228f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4228FCu;
        goto label_4228fc;
    }
    ctx->pc = 0x4228F4u;
    SET_GPR_U32(ctx, 31, 0x4228FCu);
    ctx->pc = 0x4228F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4228F4u;
            // 0x4228f8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4228FCu; }
        if (ctx->pc != 0x4228FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4228FCu; }
        if (ctx->pc != 0x4228FCu) { return; }
    }
    ctx->pc = 0x4228FCu;
label_4228fc:
    // 0x4228fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4228fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_422900:
    // 0x422900: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x422900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_422904:
    // 0x422904: 0xc04cdf0  jal         func_1337C0
label_422908:
    if (ctx->pc == 0x422908u) {
        ctx->pc = 0x422908u;
            // 0x422908: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42290Cu;
        goto label_42290c;
    }
    ctx->pc = 0x422904u;
    SET_GPR_U32(ctx, 31, 0x42290Cu);
    ctx->pc = 0x422908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422904u;
            // 0x422908: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42290Cu; }
        if (ctx->pc != 0x42290Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42290Cu; }
        if (ctx->pc != 0x42290Cu) { return; }
    }
    ctx->pc = 0x42290Cu;
label_42290c:
    // 0x42290c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x42290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_422910:
    // 0x422910: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x422910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_422914:
    // 0x422914: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x422914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_422918:
    // 0x422918: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x422918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42291c:
    // 0x42291c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x42291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_422920:
    // 0x422920: 0x46151302  mul.s       $f12, $f2, $f21
    ctx->pc = 0x422920u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_422924:
    // 0x422924: 0x46150b42  mul.s       $f13, $f1, $f21
    ctx->pc = 0x422924u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
label_422928:
    // 0x422928: 0xc04ce50  jal         func_133940
label_42292c:
    if (ctx->pc == 0x42292Cu) {
        ctx->pc = 0x42292Cu;
            // 0x42292c: 0x46150382  mul.s       $f14, $f0, $f21 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->pc = 0x422930u;
        goto label_422930;
    }
    ctx->pc = 0x422928u;
    SET_GPR_U32(ctx, 31, 0x422930u);
    ctx->pc = 0x42292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422928u;
            // 0x42292c: 0x46150382  mul.s       $f14, $f0, $f21 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422930u; }
        if (ctx->pc != 0x422930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422930u; }
        if (ctx->pc != 0x422930u) { return; }
    }
    ctx->pc = 0x422930u;
label_422930:
    // 0x422930: 0xc04e738  jal         func_139CE0
label_422934:
    if (ctx->pc == 0x422934u) {
        ctx->pc = 0x422934u;
            // 0x422934: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x422938u;
        goto label_422938;
    }
    ctx->pc = 0x422930u;
    SET_GPR_U32(ctx, 31, 0x422938u);
    ctx->pc = 0x422934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422930u;
            // 0x422934: 0x8fa40100  lw          $a0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422938u; }
        if (ctx->pc != 0x422938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422938u; }
        if (ctx->pc != 0x422938u) { return; }
    }
    ctx->pc = 0x422938u;
label_422938:
    // 0x422938: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x422938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_42293c:
    // 0x42293c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_422940:
    // 0x422940: 0xc04e4a4  jal         func_139290
label_422944:
    if (ctx->pc == 0x422944u) {
        ctx->pc = 0x422944u;
            // 0x422944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422948u;
        goto label_422948;
    }
    ctx->pc = 0x422940u;
    SET_GPR_U32(ctx, 31, 0x422948u);
    ctx->pc = 0x422944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422940u;
            // 0x422944: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422948u; }
        if (ctx->pc != 0x422948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422948u; }
        if (ctx->pc != 0x422948u) { return; }
    }
    ctx->pc = 0x422948u;
label_422948:
    // 0x422948: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x422948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_42294c:
    // 0x42294c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x42294cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_422950:
    // 0x422950: 0x320f809  jalr        $t9
label_422954:
    if (ctx->pc == 0x422954u) {
        ctx->pc = 0x422954u;
            // 0x422954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422958u;
        goto label_422958;
    }
    ctx->pc = 0x422950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x422958u);
        ctx->pc = 0x422954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x422950u;
            // 0x422954: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x422958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x422958u; }
            if (ctx->pc != 0x422958u) { return; }
        }
        }
    }
    ctx->pc = 0x422958u;
label_422958:
    // 0x422958: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x422958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_42295c:
    // 0x42295c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x42295cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_422960:
    // 0x422960: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x422960u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_422964:
    // 0x422964: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x422964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_422968:
    // 0x422968: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x422968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42296c:
    // 0x42296c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42296cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_422970:
    // 0x422970: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x422970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_422974:
    // 0x422974: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x422974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_422978:
    // 0x422978: 0xc04cff4  jal         func_133FD0
label_42297c:
    if (ctx->pc == 0x42297Cu) {
        ctx->pc = 0x42297Cu;
            // 0x42297c: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x422980u;
        goto label_422980;
    }
    ctx->pc = 0x422978u;
    SET_GPR_U32(ctx, 31, 0x422980u);
    ctx->pc = 0x42297Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x422978u;
            // 0x42297c: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422980u; }
        if (ctx->pc != 0x422980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422980u; }
        if (ctx->pc != 0x422980u) { return; }
    }
    ctx->pc = 0x422980u;
label_422980:
    // 0x422980: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x422980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_422984:
    // 0x422984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x422984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_422988:
    // 0x422988: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x422988u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_42298c:
    // 0x42298c: 0xc054bbc  jal         func_152EF0
label_422990:
    if (ctx->pc == 0x422990u) {
        ctx->pc = 0x422990u;
            // 0x422990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x422994u;
        goto label_422994;
    }
    ctx->pc = 0x42298Cu;
    SET_GPR_U32(ctx, 31, 0x422994u);
    ctx->pc = 0x422990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42298Cu;
            // 0x422990: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422994u; }
        if (ctx->pc != 0x422994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x422994u; }
        if (ctx->pc != 0x422994u) { return; }
    }
    ctx->pc = 0x422994u;
label_422994:
    // 0x422994: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x422994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_422998:
    // 0x422998: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x422998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_42299c:
    // 0x42299c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x42299cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4229a0:
    // 0x4229a0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4229a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4229a4:
    // 0x4229a4: 0xc054c2c  jal         func_1530B0
label_4229a8:
    if (ctx->pc == 0x4229A8u) {
        ctx->pc = 0x4229A8u;
            // 0x4229a8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4229ACu;
        goto label_4229ac;
    }
    ctx->pc = 0x4229A4u;
    SET_GPR_U32(ctx, 31, 0x4229ACu);
    ctx->pc = 0x4229A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4229A4u;
            // 0x4229a8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4229ACu; }
        if (ctx->pc != 0x4229ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4229ACu; }
        if (ctx->pc != 0x4229ACu) { return; }
    }
    ctx->pc = 0x4229ACu;
label_4229ac:
    // 0x4229ac: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x4229acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_4229b0:
    // 0x4229b0: 0xc04f674  jal         func_13D9D0
label_4229b4:
    if (ctx->pc == 0x4229B4u) {
        ctx->pc = 0x4229B4u;
            // 0x4229b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4229B8u;
        goto label_4229b8;
    }
    ctx->pc = 0x4229B0u;
    SET_GPR_U32(ctx, 31, 0x4229B8u);
    ctx->pc = 0x4229B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4229B0u;
            // 0x4229b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D9D0u;
    if (runtime->hasFunction(0x13D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x13D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4229B8u; }
        if (ctx->pc != 0x4229B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D9D0_0x13d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4229B8u; }
        if (ctx->pc != 0x4229B8u) { return; }
    }
    ctx->pc = 0x4229B8u;
label_4229b8:
    // 0x4229b8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x4229b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_4229bc:
    // 0x4229bc: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x4229bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_4229c0:
    // 0x4229c0: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x4229c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4229c4:
    // 0x4229c4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x4229c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_4229c8:
    // 0x4229c8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x4229c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4229cc:
    // 0x4229cc: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x4229ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_4229d0:
    // 0x4229d0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4229d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4229d4:
    // 0x4229d4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4229d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4229d8:
    // 0x4229d8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x4229d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4229dc:
    // 0x4229dc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4229dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4229e0:
    // 0x4229e0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4229e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4229e4:
    // 0x4229e4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4229e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4229e8:
    // 0x4229e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4229e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4229ec:
    // 0x4229ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4229ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4229f0:
    // 0x4229f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4229f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4229f4:
    // 0x4229f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4229f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4229f8:
    // 0x4229f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4229f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4229fc:
    // 0x4229fc: 0x3e00008  jr          $ra
label_422a00:
    if (ctx->pc == 0x422A00u) {
        ctx->pc = 0x422A00u;
            // 0x422a00: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x422A04u;
        goto label_422a04;
    }
    ctx->pc = 0x4229FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x422A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4229FCu;
            // 0x422a00: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x422A04u;
label_422a04:
    // 0x422a04: 0x0  nop
    ctx->pc = 0x422a04u;
    // NOP
label_422a08:
    // 0x422a08: 0x0  nop
    ctx->pc = 0x422a08u;
    // NOP
label_422a0c:
    // 0x422a0c: 0x0  nop
    ctx->pc = 0x422a0cu;
    // NOP
}
