#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002934F0
// Address: 0x2934f0 - 0x293970
void sub_002934F0_0x2934f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002934F0_0x2934f0");
#endif

    switch (ctx->pc) {
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f4u: goto label_2934f4;
        case 0x2934f8u: goto label_2934f8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293500u: goto label_293500;
        case 0x293504u: goto label_293504;
        case 0x293508u: goto label_293508;
        case 0x29350cu: goto label_29350c;
        case 0x293510u: goto label_293510;
        case 0x293514u: goto label_293514;
        case 0x293518u: goto label_293518;
        case 0x29351cu: goto label_29351c;
        case 0x293520u: goto label_293520;
        case 0x293524u: goto label_293524;
        case 0x293528u: goto label_293528;
        case 0x29352cu: goto label_29352c;
        case 0x293530u: goto label_293530;
        case 0x293534u: goto label_293534;
        case 0x293538u: goto label_293538;
        case 0x29353cu: goto label_29353c;
        case 0x293540u: goto label_293540;
        case 0x293544u: goto label_293544;
        case 0x293548u: goto label_293548;
        case 0x29354cu: goto label_29354c;
        case 0x293550u: goto label_293550;
        case 0x293554u: goto label_293554;
        case 0x293558u: goto label_293558;
        case 0x29355cu: goto label_29355c;
        case 0x293560u: goto label_293560;
        case 0x293564u: goto label_293564;
        case 0x293568u: goto label_293568;
        case 0x29356cu: goto label_29356c;
        case 0x293570u: goto label_293570;
        case 0x293574u: goto label_293574;
        case 0x293578u: goto label_293578;
        case 0x29357cu: goto label_29357c;
        case 0x293580u: goto label_293580;
        case 0x293584u: goto label_293584;
        case 0x293588u: goto label_293588;
        case 0x29358cu: goto label_29358c;
        case 0x293590u: goto label_293590;
        case 0x293594u: goto label_293594;
        case 0x293598u: goto label_293598;
        case 0x29359cu: goto label_29359c;
        case 0x2935a0u: goto label_2935a0;
        case 0x2935a4u: goto label_2935a4;
        case 0x2935a8u: goto label_2935a8;
        case 0x2935acu: goto label_2935ac;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935b4u: goto label_2935b4;
        case 0x2935b8u: goto label_2935b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c0u: goto label_2935c0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935c8u: goto label_2935c8;
        case 0x2935ccu: goto label_2935cc;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935d4u: goto label_2935d4;
        case 0x2935d8u: goto label_2935d8;
        case 0x2935dcu: goto label_2935dc;
        case 0x2935e0u: goto label_2935e0;
        case 0x2935e4u: goto label_2935e4;
        case 0x2935e8u: goto label_2935e8;
        case 0x2935ecu: goto label_2935ec;
        case 0x2935f0u: goto label_2935f0;
        case 0x2935f4u: goto label_2935f4;
        case 0x2935f8u: goto label_2935f8;
        case 0x2935fcu: goto label_2935fc;
        case 0x293600u: goto label_293600;
        case 0x293604u: goto label_293604;
        case 0x293608u: goto label_293608;
        case 0x29360cu: goto label_29360c;
        case 0x293610u: goto label_293610;
        case 0x293614u: goto label_293614;
        case 0x293618u: goto label_293618;
        case 0x29361cu: goto label_29361c;
        case 0x293620u: goto label_293620;
        case 0x293624u: goto label_293624;
        case 0x293628u: goto label_293628;
        case 0x29362cu: goto label_29362c;
        case 0x293630u: goto label_293630;
        case 0x293634u: goto label_293634;
        case 0x293638u: goto label_293638;
        case 0x29363cu: goto label_29363c;
        case 0x293640u: goto label_293640;
        case 0x293644u: goto label_293644;
        case 0x293648u: goto label_293648;
        case 0x29364cu: goto label_29364c;
        case 0x293650u: goto label_293650;
        case 0x293654u: goto label_293654;
        case 0x293658u: goto label_293658;
        case 0x29365cu: goto label_29365c;
        case 0x293660u: goto label_293660;
        case 0x293664u: goto label_293664;
        case 0x293668u: goto label_293668;
        case 0x29366cu: goto label_29366c;
        case 0x293670u: goto label_293670;
        case 0x293674u: goto label_293674;
        case 0x293678u: goto label_293678;
        case 0x29367cu: goto label_29367c;
        case 0x293680u: goto label_293680;
        case 0x293684u: goto label_293684;
        case 0x293688u: goto label_293688;
        case 0x29368cu: goto label_29368c;
        case 0x293690u: goto label_293690;
        case 0x293694u: goto label_293694;
        case 0x293698u: goto label_293698;
        case 0x29369cu: goto label_29369c;
        case 0x2936a0u: goto label_2936a0;
        case 0x2936a4u: goto label_2936a4;
        case 0x2936a8u: goto label_2936a8;
        case 0x2936acu: goto label_2936ac;
        case 0x2936b0u: goto label_2936b0;
        case 0x2936b4u: goto label_2936b4;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936bcu: goto label_2936bc;
        case 0x2936c0u: goto label_2936c0;
        case 0x2936c4u: goto label_2936c4;
        case 0x2936c8u: goto label_2936c8;
        case 0x2936ccu: goto label_2936cc;
        case 0x2936d0u: goto label_2936d0;
        case 0x2936d4u: goto label_2936d4;
        case 0x2936d8u: goto label_2936d8;
        case 0x2936dcu: goto label_2936dc;
        case 0x2936e0u: goto label_2936e0;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936e8u: goto label_2936e8;
        case 0x2936ecu: goto label_2936ec;
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        case 0x293840u: goto label_293840;
        case 0x293844u: goto label_293844;
        case 0x293848u: goto label_293848;
        case 0x29384cu: goto label_29384c;
        case 0x293850u: goto label_293850;
        case 0x293854u: goto label_293854;
        case 0x293858u: goto label_293858;
        case 0x29385cu: goto label_29385c;
        case 0x293860u: goto label_293860;
        case 0x293864u: goto label_293864;
        case 0x293868u: goto label_293868;
        case 0x29386cu: goto label_29386c;
        case 0x293870u: goto label_293870;
        case 0x293874u: goto label_293874;
        case 0x293878u: goto label_293878;
        case 0x29387cu: goto label_29387c;
        case 0x293880u: goto label_293880;
        case 0x293884u: goto label_293884;
        case 0x293888u: goto label_293888;
        case 0x29388cu: goto label_29388c;
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        case 0x2938a0u: goto label_2938a0;
        case 0x2938a4u: goto label_2938a4;
        case 0x2938a8u: goto label_2938a8;
        case 0x2938acu: goto label_2938ac;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        case 0x2938c0u: goto label_2938c0;
        case 0x2938c4u: goto label_2938c4;
        case 0x2938c8u: goto label_2938c8;
        case 0x2938ccu: goto label_2938cc;
        case 0x2938d0u: goto label_2938d0;
        case 0x2938d4u: goto label_2938d4;
        case 0x2938d8u: goto label_2938d8;
        case 0x2938dcu: goto label_2938dc;
        case 0x2938e0u: goto label_2938e0;
        case 0x2938e4u: goto label_2938e4;
        case 0x2938e8u: goto label_2938e8;
        case 0x2938ecu: goto label_2938ec;
        case 0x2938f0u: goto label_2938f0;
        case 0x2938f4u: goto label_2938f4;
        case 0x2938f8u: goto label_2938f8;
        case 0x2938fcu: goto label_2938fc;
        case 0x293900u: goto label_293900;
        case 0x293904u: goto label_293904;
        case 0x293908u: goto label_293908;
        case 0x29390cu: goto label_29390c;
        case 0x293910u: goto label_293910;
        case 0x293914u: goto label_293914;
        case 0x293918u: goto label_293918;
        case 0x29391cu: goto label_29391c;
        case 0x293920u: goto label_293920;
        case 0x293924u: goto label_293924;
        case 0x293928u: goto label_293928;
        case 0x29392cu: goto label_29392c;
        case 0x293930u: goto label_293930;
        case 0x293934u: goto label_293934;
        case 0x293938u: goto label_293938;
        case 0x29393cu: goto label_29393c;
        case 0x293940u: goto label_293940;
        case 0x293944u: goto label_293944;
        case 0x293948u: goto label_293948;
        case 0x29394cu: goto label_29394c;
        case 0x293950u: goto label_293950;
        case 0x293954u: goto label_293954;
        case 0x293958u: goto label_293958;
        case 0x29395cu: goto label_29395c;
        case 0x293960u: goto label_293960;
        case 0x293964u: goto label_293964;
        case 0x293968u: goto label_293968;
        case 0x29396cu: goto label_29396c;
        default: break;
    }

    ctx->pc = 0x2934f0u;

label_2934f0:
    // 0x2934f0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2934f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_2934f4:
    // 0x2934f4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x2934f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_2934f8:
    // 0x2934f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2934f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2934fc:
    // 0x2934fc: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x2934fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_293500:
    // 0x293500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_293504:
    // 0x293504: 0x27a301d4  addiu       $v1, $sp, 0x1D4
    ctx->pc = 0x293504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
label_293508:
    // 0x293508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29350c:
    // 0x29350c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29350cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293510:
    // 0x293510: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x293510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
label_293514:
    // 0x293514: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x293514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_293518:
    // 0x293518: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x293518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_29351c:
    // 0x29351c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_293520:
    // 0x293520: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x293520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_293524:
    // 0x293524: 0x8c47006c  lw          $a3, 0x6C($v0)
    ctx->pc = 0x293524u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_293528:
    // 0x293528: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x293528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_29352c:
    // 0x29352c: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x29352cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_293530:
    // 0x293530: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x293530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293534:
    // 0x293534: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x293534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_293538:
    // 0x293538: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x293538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_29353c:
    // 0x29353c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x29353cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_293540:
    // 0x293540: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x293540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_293544:
    // 0x293544: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x293544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_293548:
    // 0x293548: 0x80e20010  lb          $v0, 0x10($a3)
    ctx->pc = 0x293548u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_29354c:
    // 0x29354c: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x29354cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_293550:
    // 0x293550: 0xc4820058  lwc1        $f2, 0x58($a0)
    ctx->pc = 0x293550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293554:
    // 0x293554: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x293554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293558:
    // 0x293558: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x293558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29355c:
    // 0x29355c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x29355cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_293560:
    // 0x293560: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x293560u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_293564:
    // 0x293564: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x293564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_293568:
    // 0x293568: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x293568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_29356c:
    // 0x29356c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29356cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_293570:
    // 0x293570: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x293570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_293574:
    // 0x293574: 0x320f809  jalr        $t9
label_293578:
    if (ctx->pc == 0x293578u) {
        ctx->pc = 0x293578u;
            // 0x293578: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x29357Cu;
        goto label_29357c;
    }
    ctx->pc = 0x293574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29357Cu);
        ctx->pc = 0x293578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293574u;
            // 0x293578: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29357Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29357Cu; }
            if (ctx->pc != 0x29357Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29357Cu;
label_29357c:
    // 0x29357c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29357cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293580:
    // 0x293580: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x293580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_293584:
    // 0x293584: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x293584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_293588:
    // 0x293588: 0x3467ffee  ori         $a3, $v1, 0xFFEE
    ctx->pc = 0x293588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_29358c:
    // 0x29358c: 0x2442dfc0  addiu       $v0, $v0, -0x2040
    ctx->pc = 0x29358cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959040));
label_293590:
    // 0x293590: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x293590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_293594:
    // 0x293594: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x293594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_293598:
    // 0x293598: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x293598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_29359c:
    // 0x29359c: 0xafa70034  sw          $a3, 0x34($sp)
    ctx->pc = 0x29359cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
label_2935a0:
    // 0x2935a0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2935a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2935a4:
    // 0x2935a4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2935a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2935a8:
    // 0x2935a8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x2935a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_2935ac:
    // 0x2935ac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2935acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2935b0:
    // 0x2935b0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2935b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2935b4:
    // 0x2935b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2935b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2935b8:
    // 0x2935b8: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2935b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_2935bc:
    // 0x2935bc: 0xacc70004  sw          $a3, 0x4($a2)
    ctx->pc = 0x2935bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 7));
label_2935c0:
    // 0x2935c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2935c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2935c4:
    // 0x2935c4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x2935c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_2935c8:
    // 0x2935c8: 0x320f809  jalr        $t9
label_2935cc:
    if (ctx->pc == 0x2935CCu) {
        ctx->pc = 0x2935CCu;
            // 0x2935cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2935D0u;
        goto label_2935d0;
    }
    ctx->pc = 0x2935C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2935D0u);
        ctx->pc = 0x2935CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2935C8u;
            // 0x2935cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2935D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2935D0u; }
            if (ctx->pc != 0x2935D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2935D0u;
label_2935d0:
    // 0x2935d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2935d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2935d4:
    // 0x2935d4: 0x2463dfc0  addiu       $v1, $v1, -0x2040
    ctx->pc = 0x2935d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
label_2935d8:
    // 0x2935d8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_2935dc:
    if (ctx->pc == 0x2935DCu) {
        ctx->pc = 0x2935DCu;
            // 0x2935dc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x2935E0u;
        goto label_2935e0;
    }
    ctx->pc = 0x2935D8u;
    {
        const bool branch_taken_0x2935d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2935DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2935D8u;
            // 0x2935dc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2935d8) {
            ctx->pc = 0x293628u;
            goto label_293628;
        }
    }
    ctx->pc = 0x2935E0u;
label_2935e0:
    // 0x2935e0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2935e4:
    if (ctx->pc == 0x2935E4u) {
        ctx->pc = 0x2935E8u;
        goto label_2935e8;
    }
    ctx->pc = 0x2935E0u;
    {
        const bool branch_taken_0x2935e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2935e0) {
            ctx->pc = 0x293628u;
            goto label_293628;
        }
    }
    ctx->pc = 0x2935E8u;
label_2935e8:
    // 0x2935e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2935e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2935ec:
    // 0x2935ec: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2935ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_2935f0:
    // 0x2935f0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2935f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2935f4:
    // 0x2935f4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_2935f8:
    if (ctx->pc == 0x2935F8u) {
        ctx->pc = 0x2935FCu;
        goto label_2935fc;
    }
    ctx->pc = 0x2935F4u;
    {
        const bool branch_taken_0x2935f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2935f4) {
            ctx->pc = 0x293628u;
            goto label_293628;
        }
    }
    ctx->pc = 0x2935FCu;
label_2935fc:
    // 0x2935fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_293600:
    // 0x293600: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x293600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_293604:
    // 0x293604: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x293604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_293608:
    // 0x293608: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x293608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_29360c:
    // 0x29360c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x29360cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_293610:
    // 0x293610: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x293610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_293614:
    // 0x293614: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x293614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_293618:
    // 0x293618: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x293618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_29361c:
    // 0x29361c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29361cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293620:
    // 0x293620: 0xc0a7ab4  jal         func_29EAD0
label_293624:
    if (ctx->pc == 0x293624u) {
        ctx->pc = 0x293624u;
            // 0x293624: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x293628u;
        goto label_293628;
    }
    ctx->pc = 0x293620u;
    SET_GPR_U32(ctx, 31, 0x293628u);
    ctx->pc = 0x293624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293620u;
            // 0x293624: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293628u; }
        if (ctx->pc != 0x293628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293628u; }
        if (ctx->pc != 0x293628u) { return; }
    }
    ctx->pc = 0x293628u;
label_293628:
    // 0x293628: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x293628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29362c:
    // 0x29362c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x29362cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_293630:
    // 0x293630: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x293630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_293634:
    // 0x293634: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x293634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_293638:
    // 0x293638: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293638u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29363c:
    // 0x29363c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29363cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_293640:
    // 0x293640: 0x3e00008  jr          $ra
label_293644:
    if (ctx->pc == 0x293644u) {
        ctx->pc = 0x293644u;
            // 0x293644: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x293648u;
        goto label_293648;
    }
    ctx->pc = 0x293640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293640u;
            // 0x293644: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293648u;
label_293648:
    // 0x293648: 0x0  nop
    ctx->pc = 0x293648u;
    // NOP
label_29364c:
    // 0x29364c: 0x0  nop
    ctx->pc = 0x29364cu;
    // NOP
label_293650:
    // 0x293650: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x293650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293654:
    // 0x293654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x293654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293658:
    // 0x293658: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x293658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_29365c:
    // 0x29365c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x29365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293660:
    // 0x293660: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x293660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_293664:
    // 0x293664: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x293664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293668:
    // 0x293668: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x293668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_29366c:
    // 0x29366c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x29366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293670:
    // 0x293670: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x293670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_293674:
    // 0x293674: 0xc4810058  lwc1        $f1, 0x58($a0)
    ctx->pc = 0x293674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293678:
    // 0x293678: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x293678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29367c:
    // 0x29367c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29367cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_293680:
    // 0x293680: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x293680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_293684:
    // 0x293684: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x293684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293688:
    // 0x293688: 0xe4c00020  swc1        $f0, 0x20($a2)
    ctx->pc = 0x293688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
label_29368c:
    // 0x29368c: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x29368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293690:
    // 0x293690: 0xe4c0002c  swc1        $f0, 0x2C($a2)
    ctx->pc = 0x293690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_293694:
    // 0x293694: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x293694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293698:
    // 0x293698: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x293698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
label_29369c:
    // 0x29369c: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x29369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2936a0:
    // 0x2936a0: 0xe4c00028  swc1        $f0, 0x28($a2)
    ctx->pc = 0x2936a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 40), bits); }
label_2936a4:
    // 0x2936a4: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x2936a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_2936a8:
    // 0x2936a8: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x2936a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_2936ac:
    // 0x2936ac: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x2936acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_2936b0:
    // 0x2936b0: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x2936b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_2936b4:
    // 0x2936b4: 0xacc00030  sw          $zero, 0x30($a2)
    ctx->pc = 0x2936b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 0));
label_2936b8:
    // 0x2936b8: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x2936b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_2936bc:
    // 0x2936bc: 0x81070018  lb          $a3, 0x18($t0)
    ctx->pc = 0x2936bcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
label_2936c0:
    // 0x2936c0: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_2936c4:
    if (ctx->pc == 0x2936C4u) {
        ctx->pc = 0x2936C4u;
            // 0x2936c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2936C8u;
        goto label_2936c8;
    }
    ctx->pc = 0x2936C0u;
    {
        const bool branch_taken_0x2936c0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2936C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936C0u;
            // 0x2936c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936c0) {
            ctx->pc = 0x2936D0u;
            goto label_2936d0;
        }
    }
    ctx->pc = 0x2936C8u;
label_2936c8:
    // 0x2936c8: 0x81030010  lb          $v1, 0x10($t0)
    ctx->pc = 0x2936c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 16)));
label_2936cc:
    // 0x2936cc: 0x1034821  addu        $t1, $t0, $v1
    ctx->pc = 0x2936ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2936d0:
    // 0x2936d0: 0x11200083  beqz        $t1, . + 4 + (0x83 << 2)
label_2936d4:
    if (ctx->pc == 0x2936D4u) {
        ctx->pc = 0x2936D8u;
        goto label_2936d8;
    }
    ctx->pc = 0x2936D0u;
    {
        const bool branch_taken_0x2936d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2936d0) {
            ctx->pc = 0x2938E0u;
            goto label_2938e0;
        }
    }
    ctx->pc = 0x2936D8u;
label_2936d8:
    // 0x2936d8: 0x912700a8  lbu         $a3, 0xA8($t1)
    ctx->pc = 0x2936d8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 168)));
label_2936dc:
    // 0x2936dc: 0x38e30007  xori        $v1, $a3, 0x7
    ctx->pc = 0x2936dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)7);
label_2936e0:
    // 0x2936e0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2936e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2936e4:
    // 0x2936e4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_2936e8:
    if (ctx->pc == 0x2936E8u) {
        ctx->pc = 0x2936E8u;
            // 0x2936e8: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2936ECu;
        goto label_2936ec;
    }
    ctx->pc = 0x2936E4u;
    {
        const bool branch_taken_0x2936e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2936E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2936E4u;
            // 0x2936e8: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936e4) {
            ctx->pc = 0x293700u;
            goto label_293700;
        }
    }
    ctx->pc = 0x2936ECu;
label_2936ec:
    // 0x2936ec: 0x38e30006  xori        $v1, $a3, 0x6
    ctx->pc = 0x2936ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)6);
label_2936f0:
    // 0x2936f0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2936f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2936f4:
    // 0x2936f4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2936f8:
    if (ctx->pc == 0x2936F8u) {
        ctx->pc = 0x2936FCu;
        goto label_2936fc;
    }
    ctx->pc = 0x2936F4u;
    {
        const bool branch_taken_0x2936f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2936f4) {
            ctx->pc = 0x293700u;
            goto label_293700;
        }
    }
    ctx->pc = 0x2936FCu;
label_2936fc:
    // 0x2936fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2936fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293700:
    // 0x293700: 0x81e3c  dsll32      $v1, $t0, 24
    ctx->pc = 0x293700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 24));
label_293704:
    // 0x293704: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x293704u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_293708:
    // 0x293708: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_29370c:
    if (ctx->pc == 0x29370Cu) {
        ctx->pc = 0x293710u;
        goto label_293710;
    }
    ctx->pc = 0x293708u;
    {
        const bool branch_taken_0x293708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293708) {
            ctx->pc = 0x2937B0u;
            goto label_2937b0;
        }
    }
    ctx->pc = 0x293710u;
label_293710:
    // 0x293710: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x293710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_293714:
    // 0x293714: 0xc5240100  lwc1        $f4, 0x100($t1)
    ctx->pc = 0x293714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_293718:
    // 0x293718: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x293718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29371c:
    // 0x29371c: 0xc5200108  lwc1        $f0, 0x108($t1)
    ctx->pc = 0x29371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293720:
    // 0x293720: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x293720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_293724:
    // 0x293724: 0xc5220104  lwc1        $f2, 0x104($t1)
    ctx->pc = 0x293724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293728:
    // 0x293728: 0xc5260190  lwc1        $f6, 0x190($t1)
    ctx->pc = 0x293728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_29372c:
    // 0x29372c: 0x460429c1  sub.s       $f7, $f5, $f4
    ctx->pc = 0x29372cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_293730:
    // 0x293730: 0xc5240194  lwc1        $f4, 0x194($t1)
    ctx->pc = 0x293730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_293734:
    // 0x293734: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293734u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_293738:
    // 0x293738: 0xc5250198  lwc1        $f5, 0x198($t1)
    ctx->pc = 0x293738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_29373c:
    // 0x29373c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x29373cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_293740:
    // 0x293740: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x293740u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_293744:
    // 0x293744: 0x4602281d  msub.s      $f0, $f5, $f2
    ctx->pc = 0x293744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[2]));
label_293748:
    // 0x293748: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x293748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_29374c:
    // 0x29374c: 0x4607281a  mula.s      $f5, $f7
    ctx->pc = 0x29374cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[7]);
label_293750:
    // 0x293750: 0x4601301d  msub.s      $f0, $f6, $f1
    ctx->pc = 0x293750u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[1]));
label_293754:
    // 0x293754: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x293754u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_293758:
    // 0x293758: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x293758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_29375c:
    // 0x29375c: 0x4607201d  msub.s      $f0, $f4, $f7
    ctx->pc = 0x29375cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[7]));
label_293760:
    // 0x293760: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x293760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_293764:
    // 0x293764: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x293764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_293768:
    // 0x293768: 0xc5210180  lwc1        $f1, 0x180($t1)
    ctx->pc = 0x293768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29376c:
    // 0x29376c: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x29376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293770:
    // 0x293770: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_293774:
    // 0x293774: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x293774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_293778:
    // 0x293778: 0xc5210184  lwc1        $f1, 0x184($t1)
    ctx->pc = 0x293778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29377c:
    // 0x29377c: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x29377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293780:
    // 0x293780: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293780u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_293784:
    // 0x293784: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x293784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_293788:
    // 0x293788: 0xc5210188  lwc1        $f1, 0x188($t1)
    ctx->pc = 0x293788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29378c:
    // 0x29378c: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x29378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293790:
    // 0x293790: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293790u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_293794:
    // 0x293794: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x293794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_293798:
    // 0x293798: 0xc521018c  lwc1        $f1, 0x18C($t1)
    ctx->pc = 0x293798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29379c:
    // 0x29379c: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x29379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2937a0:
    // 0x2937a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2937a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2937a4:
    // 0x2937a4: 0x10000034  b           . + 4 + (0x34 << 2)
label_2937a8:
    if (ctx->pc == 0x2937A8u) {
        ctx->pc = 0x2937A8u;
            // 0x2937a8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->pc = 0x2937ACu;
        goto label_2937ac;
    }
    ctx->pc = 0x2937A4u;
    {
        const bool branch_taken_0x2937a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2937A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2937A4u;
            // 0x2937a8: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2937a4) {
            ctx->pc = 0x293878u;
            goto label_293878;
        }
    }
    ctx->pc = 0x2937ACu;
label_2937ac:
    // 0x2937ac: 0x0  nop
    ctx->pc = 0x2937acu;
    // NOP
label_2937b0:
    // 0x2937b0: 0xc52b0100  lwc1        $f11, 0x100($t1)
    ctx->pc = 0x2937b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2937b4:
    // 0x2937b4: 0xc52100f0  lwc1        $f1, 0xF0($t1)
    ctx->pc = 0x2937b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2937b8:
    // 0x2937b8: 0xc5290108  lwc1        $f9, 0x108($t1)
    ctx->pc = 0x2937b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2937bc:
    // 0x2937bc: 0xc52800f8  lwc1        $f8, 0xF8($t1)
    ctx->pc = 0x2937bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2937c0:
    // 0x2937c0: 0xc52a0104  lwc1        $f10, 0x104($t1)
    ctx->pc = 0x2937c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2937c4:
    // 0x2937c4: 0xc52000f4  lwc1        $f0, 0xF4($t1)
    ctx->pc = 0x2937c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2937c8:
    // 0x2937c8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x2937c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2937cc:
    // 0x2937cc: 0x46015bc1  sub.s       $f15, $f11, $f1
    ctx->pc = 0x2937ccu;
    ctx->f[15] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
label_2937d0:
    // 0x2937d0: 0x46084b41  sub.s       $f13, $f9, $f8
    ctx->pc = 0x2937d0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_2937d4:
    // 0x2937d4: 0xc527010c  lwc1        $f7, 0x10C($t1)
    ctx->pc = 0x2937d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2937d8:
    // 0x2937d8: 0x46005381  sub.s       $f14, $f10, $f0
    ctx->pc = 0x2937d8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_2937dc:
    // 0x2937dc: 0xc5240144  lwc1        $f4, 0x144($t1)
    ctx->pc = 0x2937dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2937e0:
    // 0x2937e0: 0xc5230148  lwc1        $f3, 0x148($t1)
    ctx->pc = 0x2937e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2937e4:
    // 0x2937e4: 0xc5250140  lwc1        $f5, 0x140($t1)
    ctx->pc = 0x2937e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2937e8:
    // 0x2937e8: 0xc52600fc  lwc1        $f6, 0xFC($t1)
    ctx->pc = 0x2937e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2937ec:
    // 0x2937ec: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2937ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2937f0:
    // 0x2937f0: 0x460b1201  sub.s       $f8, $f2, $f11
    ctx->pc = 0x2937f0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
label_2937f4:
    // 0x2937f4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2937f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2937f8:
    // 0x2937f8: 0x460a0881  sub.s       $f2, $f1, $f10
    ctx->pc = 0x2937f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[10]);
label_2937fc:
    // 0x2937fc: 0x46043902  mul.s       $f4, $f7, $f4
    ctx->pc = 0x2937fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_293800:
    // 0x293800: 0x46090041  sub.s       $f1, $f0, $f9
    ctx->pc = 0x293800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_293804:
    // 0x293804: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x293804u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_293808:
    // 0x293808: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x293808u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_29380c:
    // 0x29380c: 0x4602181d  msub.s      $f0, $f3, $f2
    ctx->pc = 0x29380cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_293810:
    // 0x293810: 0x46053942  mul.s       $f5, $f7, $f5
    ctx->pc = 0x293810u;
    ctx->f[5] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_293814:
    // 0x293814: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x293814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_293818:
    // 0x293818: 0x4608181a  mula.s      $f3, $f8
    ctx->pc = 0x293818u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
label_29381c:
    // 0x29381c: 0x4601281d  msub.s      $f0, $f5, $f1
    ctx->pc = 0x29381cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_293820:
    // 0x293820: 0x4602281a  mula.s      $f5, $f2
    ctx->pc = 0x293820u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_293824:
    // 0x293824: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x293824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_293828:
    // 0x293828: 0x4608201d  msub.s      $f0, $f4, $f8
    ctx->pc = 0x293828u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[8]));
label_29382c:
    // 0x29382c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x29382cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_293830:
    // 0x293830: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x293830u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_293834:
    // 0x293834: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x293834u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_293838:
    // 0x293838: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x293838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29383c:
    // 0x29383c: 0x46077bc2  mul.s       $f15, $f15, $f7
    ctx->pc = 0x29383cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[7]);
label_293840:
    // 0x293840: 0x460f0000  add.s       $f0, $f0, $f15
    ctx->pc = 0x293840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
label_293844:
    // 0x293844: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x293844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_293848:
    // 0x293848: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x293848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29384c:
    // 0x29384c: 0x46077382  mul.s       $f14, $f14, $f7
    ctx->pc = 0x29384cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[7]);
label_293850:
    // 0x293850: 0x460e0000  add.s       $f0, $f0, $f14
    ctx->pc = 0x293850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[14]);
label_293854:
    // 0x293854: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x293854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_293858:
    // 0x293858: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x293858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29385c:
    // 0x29385c: 0x46076b42  mul.s       $f13, $f13, $f7
    ctx->pc = 0x29385cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[7]);
label_293860:
    // 0x293860: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x293860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_293864:
    // 0x293864: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x293864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_293868:
    // 0x293868: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x293868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29386c:
    // 0x29386c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x29386cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_293870:
    // 0x293870: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x293870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_293874:
    // 0x293874: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x293874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_293878:
    // 0x293878: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x293878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_29387c:
    // 0x29387c: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x29387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_293880:
    // 0x293880: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x293880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_293884:
    // 0x293884: 0xc4c40014  lwc1        $f4, 0x14($a2)
    ctx->pc = 0x293884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_293888:
    // 0x293888: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x293888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29388c:
    // 0x29388c: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x29388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293890:
    // 0x293890: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x293890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293894:
    // 0x293894: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x293894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293898:
    // 0x293898: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x293898u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_29389c:
    // 0x29389c: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x29389cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2938a0:
    // 0x2938a0: 0x46032818  adda.s      $f5, $f3
    ctx->pc = 0x2938a0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_2938a4:
    // 0x2938a4: 0x4601105c  madd.s      $f1, $f2, $f1
    ctx->pc = 0x2938a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_2938a8:
    // 0x2938a8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x2938a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_2938ac:
    // 0x2938ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2938acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2938b0:
    // 0x2938b0: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2938b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2938b4:
    // 0x2938b4: 0x912700a8  lbu         $a3, 0xA8($t1)
    ctx->pc = 0x2938b4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 168)));
label_2938b8:
    // 0x2938b8: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_2938bc:
    if (ctx->pc == 0x2938BCu) {
        ctx->pc = 0x2938BCu;
            // 0x2938bc: 0x252800a8  addiu       $t0, $t1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 168));
        ctx->pc = 0x2938C0u;
        goto label_2938c0;
    }
    ctx->pc = 0x2938B8u;
    {
        const bool branch_taken_0x2938b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2938BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2938B8u;
            // 0x2938bc: 0x252800a8  addiu       $t0, $t1, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938b8) {
            ctx->pc = 0x2938C8u;
            goto label_2938c8;
        }
    }
    ctx->pc = 0x2938C0u;
label_2938c0:
    // 0x2938c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2938c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2938c4:
    // 0x2938c4: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x2938c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
label_2938c8:
    // 0x2938c8: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x2938c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_2938cc:
    // 0x2938cc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2938ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2938d0:
    // 0x2938d0: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
label_2938d4:
    if (ctx->pc == 0x2938D4u) {
        ctx->pc = 0x2938D4u;
            // 0x2938d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2938D8u;
        goto label_2938d8;
    }
    ctx->pc = 0x2938D0u;
    {
        const bool branch_taken_0x2938d0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2938D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2938D0u;
            // 0x2938d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2938d0) {
            ctx->pc = 0x2938E0u;
            goto label_2938e0;
        }
    }
    ctx->pc = 0x2938D8u;
label_2938d8:
    // 0x2938d8: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x2938d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
label_2938dc:
    // 0x2938dc: 0x0  nop
    ctx->pc = 0x2938dcu;
    // NOP
label_2938e0:
    // 0x2938e0: 0x3c03b400  lui         $v1, 0xB400
    ctx->pc = 0x2938e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46080 << 16));
label_2938e4:
    // 0x2938e4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x2938e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2938e8:
    // 0x2938e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2938e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2938ec:
    // 0x2938ec: 0x0  nop
    ctx->pc = 0x2938ecu;
    // NOP
label_2938f0:
    // 0x2938f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2938f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2938f4:
    // 0x2938f4: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_2938f8:
    if (ctx->pc == 0x2938F8u) {
        ctx->pc = 0x2938FCu;
        goto label_2938fc;
    }
    ctx->pc = 0x2938F4u;
    {
        const bool branch_taken_0x2938f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2938f4) {
            ctx->pc = 0x293960u;
            goto label_293960;
        }
    }
    ctx->pc = 0x2938FCu;
label_2938fc:
    // 0x2938fc: 0xc48200a8  lwc1        $f2, 0xA8($a0)
    ctx->pc = 0x2938fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293900:
    // 0x293900: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x293900u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
label_293904:
    // 0x293904: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x293904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293908:
    // 0x293908: 0xc4c00010  lwc1        $f0, 0x10($a2)
    ctx->pc = 0x293908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29390c:
    // 0x29390c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x29390cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_293910:
    // 0x293910: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x293910u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_293914:
    // 0x293914: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_293918:
    // 0x293918: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x293918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_29391c:
    // 0x29391c: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x29391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293920:
    // 0x293920: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x293920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293924:
    // 0x293924: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x293924u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_293928:
    // 0x293928: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293928u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29392c:
    // 0x29392c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x29392cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_293930:
    // 0x293930: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x293930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293934:
    // 0x293934: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x293934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293938:
    // 0x293938: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x293938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_29393c:
    // 0x29393c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29393cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_293940:
    // 0x293940: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x293940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_293944:
    // 0x293944: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x293944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293948:
    // 0x293948: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x293948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29394c:
    // 0x29394c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29394cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_293950:
    // 0x293950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x293950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_293954:
    // 0x293954: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x293954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_293958:
    // 0x293958: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x293958u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_29395c:
    // 0x29395c: 0x0  nop
    ctx->pc = 0x29395cu;
    // NOP
label_293960:
    // 0x293960: 0x3e00008  jr          $ra
label_293964:
    if (ctx->pc == 0x293964u) {
        ctx->pc = 0x293968u;
        goto label_293968;
    }
    ctx->pc = 0x293960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293968u;
label_293968:
    // 0x293968: 0x0  nop
    ctx->pc = 0x293968u;
    // NOP
label_29396c:
    // 0x29396c: 0x0  nop
    ctx->pc = 0x29396cu;
    // NOP
}
