#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D9460
// Address: 0x3d9460 - 0x3d99f0
void sub_003D9460_0x3d9460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9460_0x3d9460");
#endif

    switch (ctx->pc) {
        case 0x3d9460u: goto label_3d9460;
        case 0x3d9464u: goto label_3d9464;
        case 0x3d9468u: goto label_3d9468;
        case 0x3d946cu: goto label_3d946c;
        case 0x3d9470u: goto label_3d9470;
        case 0x3d9474u: goto label_3d9474;
        case 0x3d9478u: goto label_3d9478;
        case 0x3d947cu: goto label_3d947c;
        case 0x3d9480u: goto label_3d9480;
        case 0x3d9484u: goto label_3d9484;
        case 0x3d9488u: goto label_3d9488;
        case 0x3d948cu: goto label_3d948c;
        case 0x3d9490u: goto label_3d9490;
        case 0x3d9494u: goto label_3d9494;
        case 0x3d9498u: goto label_3d9498;
        case 0x3d949cu: goto label_3d949c;
        case 0x3d94a0u: goto label_3d94a0;
        case 0x3d94a4u: goto label_3d94a4;
        case 0x3d94a8u: goto label_3d94a8;
        case 0x3d94acu: goto label_3d94ac;
        case 0x3d94b0u: goto label_3d94b0;
        case 0x3d94b4u: goto label_3d94b4;
        case 0x3d94b8u: goto label_3d94b8;
        case 0x3d94bcu: goto label_3d94bc;
        case 0x3d94c0u: goto label_3d94c0;
        case 0x3d94c4u: goto label_3d94c4;
        case 0x3d94c8u: goto label_3d94c8;
        case 0x3d94ccu: goto label_3d94cc;
        case 0x3d94d0u: goto label_3d94d0;
        case 0x3d94d4u: goto label_3d94d4;
        case 0x3d94d8u: goto label_3d94d8;
        case 0x3d94dcu: goto label_3d94dc;
        case 0x3d94e0u: goto label_3d94e0;
        case 0x3d94e4u: goto label_3d94e4;
        case 0x3d94e8u: goto label_3d94e8;
        case 0x3d94ecu: goto label_3d94ec;
        case 0x3d94f0u: goto label_3d94f0;
        case 0x3d94f4u: goto label_3d94f4;
        case 0x3d94f8u: goto label_3d94f8;
        case 0x3d94fcu: goto label_3d94fc;
        case 0x3d9500u: goto label_3d9500;
        case 0x3d9504u: goto label_3d9504;
        case 0x3d9508u: goto label_3d9508;
        case 0x3d950cu: goto label_3d950c;
        case 0x3d9510u: goto label_3d9510;
        case 0x3d9514u: goto label_3d9514;
        case 0x3d9518u: goto label_3d9518;
        case 0x3d951cu: goto label_3d951c;
        case 0x3d9520u: goto label_3d9520;
        case 0x3d9524u: goto label_3d9524;
        case 0x3d9528u: goto label_3d9528;
        case 0x3d952cu: goto label_3d952c;
        case 0x3d9530u: goto label_3d9530;
        case 0x3d9534u: goto label_3d9534;
        case 0x3d9538u: goto label_3d9538;
        case 0x3d953cu: goto label_3d953c;
        case 0x3d9540u: goto label_3d9540;
        case 0x3d9544u: goto label_3d9544;
        case 0x3d9548u: goto label_3d9548;
        case 0x3d954cu: goto label_3d954c;
        case 0x3d9550u: goto label_3d9550;
        case 0x3d9554u: goto label_3d9554;
        case 0x3d9558u: goto label_3d9558;
        case 0x3d955cu: goto label_3d955c;
        case 0x3d9560u: goto label_3d9560;
        case 0x3d9564u: goto label_3d9564;
        case 0x3d9568u: goto label_3d9568;
        case 0x3d956cu: goto label_3d956c;
        case 0x3d9570u: goto label_3d9570;
        case 0x3d9574u: goto label_3d9574;
        case 0x3d9578u: goto label_3d9578;
        case 0x3d957cu: goto label_3d957c;
        case 0x3d9580u: goto label_3d9580;
        case 0x3d9584u: goto label_3d9584;
        case 0x3d9588u: goto label_3d9588;
        case 0x3d958cu: goto label_3d958c;
        case 0x3d9590u: goto label_3d9590;
        case 0x3d9594u: goto label_3d9594;
        case 0x3d9598u: goto label_3d9598;
        case 0x3d959cu: goto label_3d959c;
        case 0x3d95a0u: goto label_3d95a0;
        case 0x3d95a4u: goto label_3d95a4;
        case 0x3d95a8u: goto label_3d95a8;
        case 0x3d95acu: goto label_3d95ac;
        case 0x3d95b0u: goto label_3d95b0;
        case 0x3d95b4u: goto label_3d95b4;
        case 0x3d95b8u: goto label_3d95b8;
        case 0x3d95bcu: goto label_3d95bc;
        case 0x3d95c0u: goto label_3d95c0;
        case 0x3d95c4u: goto label_3d95c4;
        case 0x3d95c8u: goto label_3d95c8;
        case 0x3d95ccu: goto label_3d95cc;
        case 0x3d95d0u: goto label_3d95d0;
        case 0x3d95d4u: goto label_3d95d4;
        case 0x3d95d8u: goto label_3d95d8;
        case 0x3d95dcu: goto label_3d95dc;
        case 0x3d95e0u: goto label_3d95e0;
        case 0x3d95e4u: goto label_3d95e4;
        case 0x3d95e8u: goto label_3d95e8;
        case 0x3d95ecu: goto label_3d95ec;
        case 0x3d95f0u: goto label_3d95f0;
        case 0x3d95f4u: goto label_3d95f4;
        case 0x3d95f8u: goto label_3d95f8;
        case 0x3d95fcu: goto label_3d95fc;
        case 0x3d9600u: goto label_3d9600;
        case 0x3d9604u: goto label_3d9604;
        case 0x3d9608u: goto label_3d9608;
        case 0x3d960cu: goto label_3d960c;
        case 0x3d9610u: goto label_3d9610;
        case 0x3d9614u: goto label_3d9614;
        case 0x3d9618u: goto label_3d9618;
        case 0x3d961cu: goto label_3d961c;
        case 0x3d9620u: goto label_3d9620;
        case 0x3d9624u: goto label_3d9624;
        case 0x3d9628u: goto label_3d9628;
        case 0x3d962cu: goto label_3d962c;
        case 0x3d9630u: goto label_3d9630;
        case 0x3d9634u: goto label_3d9634;
        case 0x3d9638u: goto label_3d9638;
        case 0x3d963cu: goto label_3d963c;
        case 0x3d9640u: goto label_3d9640;
        case 0x3d9644u: goto label_3d9644;
        case 0x3d9648u: goto label_3d9648;
        case 0x3d964cu: goto label_3d964c;
        case 0x3d9650u: goto label_3d9650;
        case 0x3d9654u: goto label_3d9654;
        case 0x3d9658u: goto label_3d9658;
        case 0x3d965cu: goto label_3d965c;
        case 0x3d9660u: goto label_3d9660;
        case 0x3d9664u: goto label_3d9664;
        case 0x3d9668u: goto label_3d9668;
        case 0x3d966cu: goto label_3d966c;
        case 0x3d9670u: goto label_3d9670;
        case 0x3d9674u: goto label_3d9674;
        case 0x3d9678u: goto label_3d9678;
        case 0x3d967cu: goto label_3d967c;
        case 0x3d9680u: goto label_3d9680;
        case 0x3d9684u: goto label_3d9684;
        case 0x3d9688u: goto label_3d9688;
        case 0x3d968cu: goto label_3d968c;
        case 0x3d9690u: goto label_3d9690;
        case 0x3d9694u: goto label_3d9694;
        case 0x3d9698u: goto label_3d9698;
        case 0x3d969cu: goto label_3d969c;
        case 0x3d96a0u: goto label_3d96a0;
        case 0x3d96a4u: goto label_3d96a4;
        case 0x3d96a8u: goto label_3d96a8;
        case 0x3d96acu: goto label_3d96ac;
        case 0x3d96b0u: goto label_3d96b0;
        case 0x3d96b4u: goto label_3d96b4;
        case 0x3d96b8u: goto label_3d96b8;
        case 0x3d96bcu: goto label_3d96bc;
        case 0x3d96c0u: goto label_3d96c0;
        case 0x3d96c4u: goto label_3d96c4;
        case 0x3d96c8u: goto label_3d96c8;
        case 0x3d96ccu: goto label_3d96cc;
        case 0x3d96d0u: goto label_3d96d0;
        case 0x3d96d4u: goto label_3d96d4;
        case 0x3d96d8u: goto label_3d96d8;
        case 0x3d96dcu: goto label_3d96dc;
        case 0x3d96e0u: goto label_3d96e0;
        case 0x3d96e4u: goto label_3d96e4;
        case 0x3d96e8u: goto label_3d96e8;
        case 0x3d96ecu: goto label_3d96ec;
        case 0x3d96f0u: goto label_3d96f0;
        case 0x3d96f4u: goto label_3d96f4;
        case 0x3d96f8u: goto label_3d96f8;
        case 0x3d96fcu: goto label_3d96fc;
        case 0x3d9700u: goto label_3d9700;
        case 0x3d9704u: goto label_3d9704;
        case 0x3d9708u: goto label_3d9708;
        case 0x3d970cu: goto label_3d970c;
        case 0x3d9710u: goto label_3d9710;
        case 0x3d9714u: goto label_3d9714;
        case 0x3d9718u: goto label_3d9718;
        case 0x3d971cu: goto label_3d971c;
        case 0x3d9720u: goto label_3d9720;
        case 0x3d9724u: goto label_3d9724;
        case 0x3d9728u: goto label_3d9728;
        case 0x3d972cu: goto label_3d972c;
        case 0x3d9730u: goto label_3d9730;
        case 0x3d9734u: goto label_3d9734;
        case 0x3d9738u: goto label_3d9738;
        case 0x3d973cu: goto label_3d973c;
        case 0x3d9740u: goto label_3d9740;
        case 0x3d9744u: goto label_3d9744;
        case 0x3d9748u: goto label_3d9748;
        case 0x3d974cu: goto label_3d974c;
        case 0x3d9750u: goto label_3d9750;
        case 0x3d9754u: goto label_3d9754;
        case 0x3d9758u: goto label_3d9758;
        case 0x3d975cu: goto label_3d975c;
        case 0x3d9760u: goto label_3d9760;
        case 0x3d9764u: goto label_3d9764;
        case 0x3d9768u: goto label_3d9768;
        case 0x3d976cu: goto label_3d976c;
        case 0x3d9770u: goto label_3d9770;
        case 0x3d9774u: goto label_3d9774;
        case 0x3d9778u: goto label_3d9778;
        case 0x3d977cu: goto label_3d977c;
        case 0x3d9780u: goto label_3d9780;
        case 0x3d9784u: goto label_3d9784;
        case 0x3d9788u: goto label_3d9788;
        case 0x3d978cu: goto label_3d978c;
        case 0x3d9790u: goto label_3d9790;
        case 0x3d9794u: goto label_3d9794;
        case 0x3d9798u: goto label_3d9798;
        case 0x3d979cu: goto label_3d979c;
        case 0x3d97a0u: goto label_3d97a0;
        case 0x3d97a4u: goto label_3d97a4;
        case 0x3d97a8u: goto label_3d97a8;
        case 0x3d97acu: goto label_3d97ac;
        case 0x3d97b0u: goto label_3d97b0;
        case 0x3d97b4u: goto label_3d97b4;
        case 0x3d97b8u: goto label_3d97b8;
        case 0x3d97bcu: goto label_3d97bc;
        case 0x3d97c0u: goto label_3d97c0;
        case 0x3d97c4u: goto label_3d97c4;
        case 0x3d97c8u: goto label_3d97c8;
        case 0x3d97ccu: goto label_3d97cc;
        case 0x3d97d0u: goto label_3d97d0;
        case 0x3d97d4u: goto label_3d97d4;
        case 0x3d97d8u: goto label_3d97d8;
        case 0x3d97dcu: goto label_3d97dc;
        case 0x3d97e0u: goto label_3d97e0;
        case 0x3d97e4u: goto label_3d97e4;
        case 0x3d97e8u: goto label_3d97e8;
        case 0x3d97ecu: goto label_3d97ec;
        case 0x3d97f0u: goto label_3d97f0;
        case 0x3d97f4u: goto label_3d97f4;
        case 0x3d97f8u: goto label_3d97f8;
        case 0x3d97fcu: goto label_3d97fc;
        case 0x3d9800u: goto label_3d9800;
        case 0x3d9804u: goto label_3d9804;
        case 0x3d9808u: goto label_3d9808;
        case 0x3d980cu: goto label_3d980c;
        case 0x3d9810u: goto label_3d9810;
        case 0x3d9814u: goto label_3d9814;
        case 0x3d9818u: goto label_3d9818;
        case 0x3d981cu: goto label_3d981c;
        case 0x3d9820u: goto label_3d9820;
        case 0x3d9824u: goto label_3d9824;
        case 0x3d9828u: goto label_3d9828;
        case 0x3d982cu: goto label_3d982c;
        case 0x3d9830u: goto label_3d9830;
        case 0x3d9834u: goto label_3d9834;
        case 0x3d9838u: goto label_3d9838;
        case 0x3d983cu: goto label_3d983c;
        case 0x3d9840u: goto label_3d9840;
        case 0x3d9844u: goto label_3d9844;
        case 0x3d9848u: goto label_3d9848;
        case 0x3d984cu: goto label_3d984c;
        case 0x3d9850u: goto label_3d9850;
        case 0x3d9854u: goto label_3d9854;
        case 0x3d9858u: goto label_3d9858;
        case 0x3d985cu: goto label_3d985c;
        case 0x3d9860u: goto label_3d9860;
        case 0x3d9864u: goto label_3d9864;
        case 0x3d9868u: goto label_3d9868;
        case 0x3d986cu: goto label_3d986c;
        case 0x3d9870u: goto label_3d9870;
        case 0x3d9874u: goto label_3d9874;
        case 0x3d9878u: goto label_3d9878;
        case 0x3d987cu: goto label_3d987c;
        case 0x3d9880u: goto label_3d9880;
        case 0x3d9884u: goto label_3d9884;
        case 0x3d9888u: goto label_3d9888;
        case 0x3d988cu: goto label_3d988c;
        case 0x3d9890u: goto label_3d9890;
        case 0x3d9894u: goto label_3d9894;
        case 0x3d9898u: goto label_3d9898;
        case 0x3d989cu: goto label_3d989c;
        case 0x3d98a0u: goto label_3d98a0;
        case 0x3d98a4u: goto label_3d98a4;
        case 0x3d98a8u: goto label_3d98a8;
        case 0x3d98acu: goto label_3d98ac;
        case 0x3d98b0u: goto label_3d98b0;
        case 0x3d98b4u: goto label_3d98b4;
        case 0x3d98b8u: goto label_3d98b8;
        case 0x3d98bcu: goto label_3d98bc;
        case 0x3d98c0u: goto label_3d98c0;
        case 0x3d98c4u: goto label_3d98c4;
        case 0x3d98c8u: goto label_3d98c8;
        case 0x3d98ccu: goto label_3d98cc;
        case 0x3d98d0u: goto label_3d98d0;
        case 0x3d98d4u: goto label_3d98d4;
        case 0x3d98d8u: goto label_3d98d8;
        case 0x3d98dcu: goto label_3d98dc;
        case 0x3d98e0u: goto label_3d98e0;
        case 0x3d98e4u: goto label_3d98e4;
        case 0x3d98e8u: goto label_3d98e8;
        case 0x3d98ecu: goto label_3d98ec;
        case 0x3d98f0u: goto label_3d98f0;
        case 0x3d98f4u: goto label_3d98f4;
        case 0x3d98f8u: goto label_3d98f8;
        case 0x3d98fcu: goto label_3d98fc;
        case 0x3d9900u: goto label_3d9900;
        case 0x3d9904u: goto label_3d9904;
        case 0x3d9908u: goto label_3d9908;
        case 0x3d990cu: goto label_3d990c;
        case 0x3d9910u: goto label_3d9910;
        case 0x3d9914u: goto label_3d9914;
        case 0x3d9918u: goto label_3d9918;
        case 0x3d991cu: goto label_3d991c;
        case 0x3d9920u: goto label_3d9920;
        case 0x3d9924u: goto label_3d9924;
        case 0x3d9928u: goto label_3d9928;
        case 0x3d992cu: goto label_3d992c;
        case 0x3d9930u: goto label_3d9930;
        case 0x3d9934u: goto label_3d9934;
        case 0x3d9938u: goto label_3d9938;
        case 0x3d993cu: goto label_3d993c;
        case 0x3d9940u: goto label_3d9940;
        case 0x3d9944u: goto label_3d9944;
        case 0x3d9948u: goto label_3d9948;
        case 0x3d994cu: goto label_3d994c;
        case 0x3d9950u: goto label_3d9950;
        case 0x3d9954u: goto label_3d9954;
        case 0x3d9958u: goto label_3d9958;
        case 0x3d995cu: goto label_3d995c;
        case 0x3d9960u: goto label_3d9960;
        case 0x3d9964u: goto label_3d9964;
        case 0x3d9968u: goto label_3d9968;
        case 0x3d996cu: goto label_3d996c;
        case 0x3d9970u: goto label_3d9970;
        case 0x3d9974u: goto label_3d9974;
        case 0x3d9978u: goto label_3d9978;
        case 0x3d997cu: goto label_3d997c;
        case 0x3d9980u: goto label_3d9980;
        case 0x3d9984u: goto label_3d9984;
        case 0x3d9988u: goto label_3d9988;
        case 0x3d998cu: goto label_3d998c;
        case 0x3d9990u: goto label_3d9990;
        case 0x3d9994u: goto label_3d9994;
        case 0x3d9998u: goto label_3d9998;
        case 0x3d999cu: goto label_3d999c;
        case 0x3d99a0u: goto label_3d99a0;
        case 0x3d99a4u: goto label_3d99a4;
        case 0x3d99a8u: goto label_3d99a8;
        case 0x3d99acu: goto label_3d99ac;
        case 0x3d99b0u: goto label_3d99b0;
        case 0x3d99b4u: goto label_3d99b4;
        case 0x3d99b8u: goto label_3d99b8;
        case 0x3d99bcu: goto label_3d99bc;
        case 0x3d99c0u: goto label_3d99c0;
        case 0x3d99c4u: goto label_3d99c4;
        case 0x3d99c8u: goto label_3d99c8;
        case 0x3d99ccu: goto label_3d99cc;
        case 0x3d99d0u: goto label_3d99d0;
        case 0x3d99d4u: goto label_3d99d4;
        case 0x3d99d8u: goto label_3d99d8;
        case 0x3d99dcu: goto label_3d99dc;
        case 0x3d99e0u: goto label_3d99e0;
        case 0x3d99e4u: goto label_3d99e4;
        case 0x3d99e8u: goto label_3d99e8;
        case 0x3d99ecu: goto label_3d99ec;
        default: break;
    }

    ctx->pc = 0x3d9460u;

label_3d9460:
    // 0x3d9460: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x3d9460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_3d9464:
    // 0x3d9464: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3d9464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3d9468:
    // 0x3d9468: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d9468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d946c:
    // 0x3d946c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d946cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d9470:
    // 0x3d9470: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d9470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3d9474:
    // 0x3d9474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9478:
    // 0x3d9478: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d9478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3d947c:
    // 0x3d947c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x3d947cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3d9480:
    // 0x3d9480: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d9480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d9484:
    // 0x3d9484: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d9484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d9488:
    // 0x3d9488: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d9488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d948c:
    // 0x3d948c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3d948cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d9490:
    // 0x3d9490: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d9490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d9494:
    // 0x3d9494: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d9494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d9498:
    // 0x3d9498: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d9498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d949c:
    // 0x3d949c: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x3d949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d94a0:
    // 0x3d94a0: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x3d94a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_3d94a4:
    // 0x3d94a4: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x3d94a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
label_3d94a8:
    // 0x3d94a8: 0xafa00218  sw          $zero, 0x218($sp)
    ctx->pc = 0x3d94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
label_3d94ac:
    // 0x3d94ac: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x3d94acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
label_3d94b0:
    // 0x3d94b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3d94b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d94b4:
    // 0x3d94b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d94b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d94b8:
    // 0x3d94b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d94b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d94bc:
    // 0x3d94bc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3d94bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d94c0:
    // 0x3d94c0: 0xafa00200  sw          $zero, 0x200($sp)
    ctx->pc = 0x3d94c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 0));
label_3d94c4:
    // 0x3d94c4: 0xafa00208  sw          $zero, 0x208($sp)
    ctx->pc = 0x3d94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 0));
label_3d94c8:
    // 0x3d94c8: 0xafa0020c  sw          $zero, 0x20C($sp)
    ctx->pc = 0x3d94c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 0));
label_3d94cc:
    // 0x3d94cc: 0xc0a7a88  jal         func_29EA20
label_3d94d0:
    if (ctx->pc == 0x3D94D0u) {
        ctx->pc = 0x3D94D0u;
            // 0x3d94d0: 0xe7a00204  swc1        $f0, 0x204($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
        ctx->pc = 0x3D94D4u;
        goto label_3d94d4;
    }
    ctx->pc = 0x3D94CCu;
    SET_GPR_U32(ctx, 31, 0x3D94D4u);
    ctx->pc = 0x3D94D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D94CCu;
            // 0x3d94d0: 0xe7a00204  swc1        $f0, 0x204($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D94D4u; }
        if (ctx->pc != 0x3D94D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D94D4u; }
        if (ctx->pc != 0x3D94D4u) { return; }
    }
    ctx->pc = 0x3D94D4u;
label_3d94d4:
    // 0x3d94d4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3d94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3d94d8:
    // 0x3d94d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d94d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d94dc:
    // 0x3d94dc: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3d94e0:
    if (ctx->pc == 0x3D94E0u) {
        ctx->pc = 0x3D94E0u;
            // 0x3d94e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D94E4u;
        goto label_3d94e4;
    }
    ctx->pc = 0x3D94DCu;
    {
        const bool branch_taken_0x3d94dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D94E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D94DCu;
            // 0x3d94e0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d94dc) {
            ctx->pc = 0x3D9500u;
            goto label_3d9500;
        }
    }
    ctx->pc = 0x3D94E4u;
label_3d94e4:
    // 0x3d94e4: 0x3c023cf5  lui         $v0, 0x3CF5
    ctx->pc = 0x3d94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15605 << 16));
label_3d94e8:
    // 0x3d94e8: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3d94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3d94ec:
    // 0x3d94ec: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3d94ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_3d94f0:
    // 0x3d94f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d94f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d94f4:
    // 0x3d94f4: 0xc0807e0  jal         func_201F80
label_3d94f8:
    if (ctx->pc == 0x3D94F8u) {
        ctx->pc = 0x3D94F8u;
            // 0x3d94f8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x3D94FCu;
        goto label_3d94fc;
    }
    ctx->pc = 0x3D94F4u;
    SET_GPR_U32(ctx, 31, 0x3D94FCu);
    ctx->pc = 0x3D94F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D94F4u;
            // 0x3d94f8: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D94FCu; }
        if (ctx->pc != 0x3D94FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201F80_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D94FCu; }
        if (ctx->pc != 0x3D94FCu) { return; }
    }
    ctx->pc = 0x3D94FCu;
label_3d94fc:
    // 0x3d94fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d94fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9500:
    // 0x3d9500: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x3d9500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d9504:
    // 0x3d9504: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3d9504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3d9508:
    // 0x3d9508: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3d9508u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d950c:
    // 0x3d950c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x3d950cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3d9510:
    // 0x3d9510: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d9510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d9514:
    // 0x3d9514: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3d9514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d9518:
    // 0x3d9518: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3d9518u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3d951c:
    // 0x3d951c: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x3d951cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_3d9520:
    // 0x3d9520: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3d9520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d9524:
    // 0x3d9524: 0xc04f278  jal         func_13C9E0
label_3d9528:
    if (ctx->pc == 0x3D9528u) {
        ctx->pc = 0x3D9528u;
            // 0x3d9528: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3D952Cu;
        goto label_3d952c;
    }
    ctx->pc = 0x3D9524u;
    SET_GPR_U32(ctx, 31, 0x3D952Cu);
    ctx->pc = 0x3D9528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9524u;
            // 0x3d9528: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D952Cu; }
        if (ctx->pc != 0x3D952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D952Cu; }
        if (ctx->pc != 0x3D952Cu) { return; }
    }
    ctx->pc = 0x3D952Cu;
label_3d952c:
    // 0x3d952c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d952cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d9530:
    // 0x3d9530: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d9530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d9534:
    // 0x3d9534: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3d9534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3d9538:
    // 0x3d9538: 0xc04cca0  jal         func_133280
label_3d953c:
    if (ctx->pc == 0x3D953Cu) {
        ctx->pc = 0x3D953Cu;
            // 0x3d953c: 0x24c69bd0  addiu       $a2, $a2, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941648));
        ctx->pc = 0x3D9540u;
        goto label_3d9540;
    }
    ctx->pc = 0x3D9538u;
    SET_GPR_U32(ctx, 31, 0x3D9540u);
    ctx->pc = 0x3D953Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9538u;
            // 0x3d953c: 0x24c69bd0  addiu       $a2, $a2, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9540u; }
        if (ctx->pc != 0x3D9540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9540u; }
        if (ctx->pc != 0x3D9540u) { return; }
    }
    ctx->pc = 0x3D9540u;
label_3d9540:
    // 0x3d9540: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3d9540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3d9544:
    // 0x3d9544: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3d9544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3d9548:
    // 0x3d9548: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d9548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d954c:
    // 0x3d954c: 0xc04cc70  jal         func_1331C0
label_3d9550:
    if (ctx->pc == 0x3D9550u) {
        ctx->pc = 0x3D9550u;
            // 0x3d9550: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D9554u;
        goto label_3d9554;
    }
    ctx->pc = 0x3D954Cu;
    SET_GPR_U32(ctx, 31, 0x3D9554u);
    ctx->pc = 0x3D9550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D954Cu;
            // 0x3d9550: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9554u; }
        if (ctx->pc != 0x3D9554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9554u; }
        if (ctx->pc != 0x3D9554u) { return; }
    }
    ctx->pc = 0x3D9554u;
label_3d9554:
    // 0x3d9554: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d9554u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d9558:
    // 0x3d9558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d9558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d955c:
    // 0x3d955c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d955cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d9560:
    // 0x3d9560: 0xc04cc7c  jal         func_1331F0
label_3d9564:
    if (ctx->pc == 0x3D9564u) {
        ctx->pc = 0x3D9564u;
            // 0x3d9564: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D9568u;
        goto label_3d9568;
    }
    ctx->pc = 0x3D9560u;
    SET_GPR_U32(ctx, 31, 0x3D9568u);
    ctx->pc = 0x3D9564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9560u;
            // 0x3d9564: 0x27a600d0  addiu       $a2, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9568u; }
        if (ctx->pc != 0x3D9568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9568u; }
        if (ctx->pc != 0x3D9568u) { return; }
    }
    ctx->pc = 0x3D9568u;
label_3d9568:
    // 0x3d9568: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x3d9568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_3d956c:
    // 0x3d956c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3d956cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d9570:
    // 0x3d9570: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3d9570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3d9574:
    // 0x3d9574: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3d9574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3d9578:
    // 0x3d9578: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3d957c:
    if (ctx->pc == 0x3D957Cu) {
        ctx->pc = 0x3D957Cu;
            // 0x3d957c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->pc = 0x3D9580u;
        goto label_3d9580;
    }
    ctx->pc = 0x3D9578u;
    {
        const bool branch_taken_0x3d9578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d9578) {
            ctx->pc = 0x3D957Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9578u;
            // 0x3d957c: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9590u;
            goto label_3d9590;
        }
    }
    ctx->pc = 0x3D9580u;
label_3d9580:
    // 0x3d9580: 0x2644002c  addiu       $a0, $s2, 0x2C
    ctx->pc = 0x3d9580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_3d9584:
    // 0x3d9584: 0xc0a728c  jal         func_29CA30
label_3d9588:
    if (ctx->pc == 0x3D9588u) {
        ctx->pc = 0x3D9588u;
            // 0x3d9588: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3D958Cu;
        goto label_3d958c;
    }
    ctx->pc = 0x3D9584u;
    SET_GPR_U32(ctx, 31, 0x3D958Cu);
    ctx->pc = 0x3D9588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9584u;
            // 0x3d9588: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D958Cu; }
        if (ctx->pc != 0x3D958Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D958Cu; }
        if (ctx->pc != 0x3D958Cu) { return; }
    }
    ctx->pc = 0x3D958Cu;
label_3d958c:
    // 0x3d958c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x3d958cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3d9590:
    // 0x3d9590: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3d9590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3d9594:
    // 0x3d9594: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3d9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d9598:
    // 0x3d9598: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x3d9598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_3d959c:
    // 0x3d959c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d95a0:
    // 0x3d95a0: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3d95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3d95a4:
    // 0x3d95a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d95a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d95a8:
    // 0x3d95a8: 0xc0892d0  jal         func_224B40
label_3d95ac:
    if (ctx->pc == 0x3D95ACu) {
        ctx->pc = 0x3D95ACu;
            // 0x3d95ac: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->pc = 0x3D95B0u;
        goto label_3d95b0;
    }
    ctx->pc = 0x3D95A8u;
    SET_GPR_U32(ctx, 31, 0x3D95B0u);
    ctx->pc = 0x3D95ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D95A8u;
            // 0x3d95ac: 0xac540000  sw          $s4, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D95B0u; }
        if (ctx->pc != 0x3D95B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D95B0u; }
        if (ctx->pc != 0x3D95B0u) { return; }
    }
    ctx->pc = 0x3D95B0u;
label_3d95b0:
    // 0x3d95b0: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3d95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d95b4:
    // 0x3d95b4: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x3d95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_3d95b8:
    // 0x3d95b8: 0x3447999a  ori         $a3, $v0, 0x999A
    ctx->pc = 0x3d95b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_3d95bc:
    // 0x3d95bc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x3d95bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3d95c0:
    // 0x3d95c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3d95c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d95c4:
    // 0x3d95c4: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x3d95c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3d95c8:
    // 0x3d95c8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x3d95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d95cc:
    // 0x3d95cc: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x3d95ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3d95d0:
    // 0x3d95d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3d95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d95d4:
    // 0x3d95d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3d95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3d95d8:
    // 0x3d95d8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3d95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3d95dc:
    // 0x3d95dc: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x3d95dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d95e0:
    // 0x3d95e0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3d95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3d95e4:
    // 0x3d95e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3d95e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d95e8:
    // 0x3d95e8: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x3d95e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_3d95ec:
    // 0x3d95ec: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x3d95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_3d95f0:
    // 0x3d95f0: 0xafb40144  sw          $s4, 0x144($sp)
    ctx->pc = 0x3d95f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 20));
label_3d95f4:
    // 0x3d95f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d95f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d95f8:
    // 0x3d95f8: 0xafa701d8  sw          $a3, 0x1D8($sp)
    ctx->pc = 0x3d95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 7));
label_3d95fc:
    // 0x3d95fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d95fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d9600:
    // 0x3d9600: 0xa3a601f0  sb          $a2, 0x1F0($sp)
    ctx->pc = 0x3d9600u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 496), (uint8_t)GPR_U32(ctx, 6));
label_3d9604:
    // 0x3d9604: 0xafa001d4  sw          $zero, 0x1D4($sp)
    ctx->pc = 0x3d9604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 0));
label_3d9608:
    // 0x3d9608: 0xafa001dc  sw          $zero, 0x1DC($sp)
    ctx->pc = 0x3d9608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 0));
label_3d960c:
    // 0x3d960c: 0xafa00140  sw          $zero, 0x140($sp)
    ctx->pc = 0x3d960cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
label_3d9610:
    // 0x3d9610: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x3d9610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d9614:
    // 0x3d9614: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x3d9614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d9618:
    // 0x3d9618: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x3d9618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d961c:
    // 0x3d961c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x3d961cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3d9620:
    // 0x3d9620: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x3d9620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_3d9624:
    // 0x3d9624: 0xe7a30154  swc1        $f3, 0x154($sp)
    ctx->pc = 0x3d9624u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_3d9628:
    // 0x3d9628: 0xe7a40158  swc1        $f4, 0x158($sp)
    ctx->pc = 0x3d9628u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_3d962c:
    // 0x3d962c: 0xc645001c  lwc1        $f5, 0x1C($s2)
    ctx->pc = 0x3d962cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3d9630:
    // 0x3d9630: 0xc6440018  lwc1        $f4, 0x18($s2)
    ctx->pc = 0x3d9630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3d9634:
    // 0x3d9634: 0xc6430014  lwc1        $f3, 0x14($s2)
    ctx->pc = 0x3d9634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d9638:
    // 0x3d9638: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x3d9638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d963c:
    // 0x3d963c: 0xe7a10160  swc1        $f1, 0x160($sp)
    ctx->pc = 0x3d963cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_3d9640:
    // 0x3d9640: 0xe7a30164  swc1        $f3, 0x164($sp)
    ctx->pc = 0x3d9640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_3d9644:
    // 0x3d9644: 0xe7a40168  swc1        $f4, 0x168($sp)
    ctx->pc = 0x3d9644u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3d9648:
    // 0x3d9648: 0xe7a5016c  swc1        $f5, 0x16C($sp)
    ctx->pc = 0x3d9648u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_3d964c:
    // 0x3d964c: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x3d964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d9650:
    // 0x3d9650: 0xa3a301f3  sb          $v1, 0x1F3($sp)
    ctx->pc = 0x3d9650u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 499), (uint8_t)GPR_U32(ctx, 3));
label_3d9654:
    // 0x3d9654: 0xe7ac01d0  swc1        $f12, 0x1D0($sp)
    ctx->pc = 0x3d9654u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3d9658:
    // 0x3d9658: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x3d9658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d965c:
    // 0x3d965c: 0xe7a101c4  swc1        $f1, 0x1C4($sp)
    ctx->pc = 0x3d965cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_3d9660:
    // 0x3d9660: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x3d9660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_3d9664:
    // 0x3d9664: 0xafa001c8  sw          $zero, 0x1C8($sp)
    ctx->pc = 0x3d9664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 0));
label_3d9668:
    // 0x3d9668: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x3d9668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_3d966c:
    // 0x3d966c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x3d966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d9670:
    // 0x3d9670: 0xe7a101d8  swc1        $f1, 0x1D8($sp)
    ctx->pc = 0x3d9670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_3d9674:
    // 0x3d9674: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3d9674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d9678:
    // 0x3d9678: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3d9678u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3d967c:
    // 0x3d967c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d967cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d9680:
    // 0x3d9680: 0xc0a6278  jal         func_2989E0
label_3d9684:
    if (ctx->pc == 0x3D9684u) {
        ctx->pc = 0x3D9684u;
            // 0x3d9684: 0xe7a001e8  swc1        $f0, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->pc = 0x3D9688u;
        goto label_3d9688;
    }
    ctx->pc = 0x3D9680u;
    SET_GPR_U32(ctx, 31, 0x3D9688u);
    ctx->pc = 0x3D9684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9680u;
            // 0x3d9684: 0xe7a001e8  swc1        $f0, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2989E0u;
    if (runtime->hasFunction(0x2989E0u)) {
        auto targetFn = runtime->lookupFunction(0x2989E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9688u; }
        if (ctx->pc != 0x3D9688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002989E0_0x2989e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9688u; }
        if (ctx->pc != 0x3D9688u) { return; }
    }
    ctx->pc = 0x3D9688u;
label_3d9688:
    // 0x3d9688: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d968c:
    // 0x3d968c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3d968cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d9690:
    // 0x3d9690: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d9690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d9694:
    // 0x3d9694: 0xc0a7a88  jal         func_29EA20
label_3d9698:
    if (ctx->pc == 0x3D9698u) {
        ctx->pc = 0x3D9698u;
            // 0x3d9698: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->pc = 0x3D969Cu;
        goto label_3d969c;
    }
    ctx->pc = 0x3D9694u;
    SET_GPR_U32(ctx, 31, 0x3D969Cu);
    ctx->pc = 0x3D9698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9694u;
            // 0x3d9698: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D969Cu; }
        if (ctx->pc != 0x3D969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D969Cu; }
        if (ctx->pc != 0x3D969Cu) { return; }
    }
    ctx->pc = 0x3D969Cu;
label_3d969c:
    // 0x3d969c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3d969cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3d96a0:
    // 0x3d96a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d96a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d96a4:
    // 0x3d96a4: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
label_3d96a8:
    if (ctx->pc == 0x3D96A8u) {
        ctx->pc = 0x3D96A8u;
            // 0x3d96a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D96ACu;
        goto label_3d96ac;
    }
    ctx->pc = 0x3D96A4u;
    {
        const bool branch_taken_0x3d96a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D96A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D96A4u;
            // 0x3d96a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d96a4) {
            ctx->pc = 0x3D96F4u;
            goto label_3d96f4;
        }
    }
    ctx->pc = 0x3D96ACu;
label_3d96ac:
    // 0x3d96ac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d96acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d96b0:
    // 0x3d96b0: 0xc088ef4  jal         func_223BD0
label_3d96b4:
    if (ctx->pc == 0x3D96B4u) {
        ctx->pc = 0x3D96B4u;
            // 0x3d96b4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x3D96B8u;
        goto label_3d96b8;
    }
    ctx->pc = 0x3D96B0u;
    SET_GPR_U32(ctx, 31, 0x3D96B8u);
    ctx->pc = 0x3D96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D96B0u;
            // 0x3d96b4: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D96B8u; }
        if (ctx->pc != 0x3D96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D96B8u; }
        if (ctx->pc != 0x3D96B8u) { return; }
    }
    ctx->pc = 0x3D96B8u;
label_3d96b8:
    // 0x3d96b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3d96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3d96bc:
    // 0x3d96bc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3d96bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3d96c0:
    // 0x3d96c0: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3d96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3d96c4:
    // 0x3d96c4: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3d96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3d96c8:
    // 0x3d96c8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3d96c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3d96cc:
    // 0x3d96cc: 0xae800200  sw          $zero, 0x200($s4)
    ctx->pc = 0x3d96ccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 512), GPR_U32(ctx, 0));
label_3d96d0:
    // 0x3d96d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d96d4:
    // 0x3d96d4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3d96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3d96d8:
    // 0x3d96d8: 0xae800210  sw          $zero, 0x210($s4)
    ctx->pc = 0x3d96d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 0));
label_3d96dc:
    // 0x3d96dc: 0xae800214  sw          $zero, 0x214($s4)
    ctx->pc = 0x3d96dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 0));
label_3d96e0:
    // 0x3d96e0: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x3d96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_3d96e4:
    // 0x3d96e4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d96e8:
    // 0x3d96e8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3d96e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3d96ec:
    // 0x3d96ec: 0xc088b38  jal         func_222CE0
label_3d96f0:
    if (ctx->pc == 0x3D96F0u) {
        ctx->pc = 0x3D96F0u;
            // 0x3d96f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D96F4u;
        goto label_3d96f4;
    }
    ctx->pc = 0x3D96ECu;
    SET_GPR_U32(ctx, 31, 0x3D96F4u);
    ctx->pc = 0x3D96F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D96ECu;
            // 0x3d96f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D96F4u; }
        if (ctx->pc != 0x3D96F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D96F4u; }
        if (ctx->pc != 0x3D96F4u) { return; }
    }
    ctx->pc = 0x3D96F4u;
label_3d96f4:
    // 0x3d96f4: 0xae800200  sw          $zero, 0x200($s4)
    ctx->pc = 0x3d96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 512), GPR_U32(ctx, 0));
label_3d96f8:
    // 0x3d96f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d96f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d96fc:
    // 0x3d96fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d9700:
    // 0x3d9700: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d9700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d9704:
    // 0x3d9704: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d9708:
    // 0x3d9708: 0xc08c164  jal         func_230590
label_3d970c:
    if (ctx->pc == 0x3D970Cu) {
        ctx->pc = 0x3D970Cu;
            // 0x3d970c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9710u;
        goto label_3d9710;
    }
    ctx->pc = 0x3D9708u;
    SET_GPR_U32(ctx, 31, 0x3D9710u);
    ctx->pc = 0x3D970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9708u;
            // 0x3d970c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9710u; }
        if (ctx->pc != 0x3D9710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9710u; }
        if (ctx->pc != 0x3D9710u) { return; }
    }
    ctx->pc = 0x3D9710u;
label_3d9710:
    // 0x3d9710: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x3d9710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3d9714:
    // 0x3d9714: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3d9714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d9718:
    // 0x3d9718: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3d9718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3d971c:
    // 0x3d971c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3d971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3d9720:
    // 0x3d9720: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3d9724:
    if (ctx->pc == 0x3D9724u) {
        ctx->pc = 0x3D9724u;
            // 0x3d9724: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x3D9728u;
        goto label_3d9728;
    }
    ctx->pc = 0x3D9720u;
    {
        const bool branch_taken_0x3d9720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d9720) {
            ctx->pc = 0x3D9724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9720u;
            // 0x3d9724: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9738u;
            goto label_3d9738;
        }
    }
    ctx->pc = 0x3D9728u;
label_3d9728:
    // 0x3d9728: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x3d9728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3d972c:
    // 0x3d972c: 0xc0a728c  jal         func_29CA30
label_3d9730:
    if (ctx->pc == 0x3D9730u) {
        ctx->pc = 0x3D9730u;
            // 0x3d9730: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3D9734u;
        goto label_3d9734;
    }
    ctx->pc = 0x3D972Cu;
    SET_GPR_U32(ctx, 31, 0x3D9734u);
    ctx->pc = 0x3D9730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D972Cu;
            // 0x3d9730: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9734u; }
        if (ctx->pc != 0x3D9734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9734u; }
        if (ctx->pc != 0x3D9734u) { return; }
    }
    ctx->pc = 0x3D9734u;
label_3d9734:
    // 0x3d9734: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x3d9734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3d9738:
    // 0x3d9738: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3d9738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3d973c:
    // 0x3d973c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3d973cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d9740:
    // 0x3d9740: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x3d9740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_3d9744:
    // 0x3d9744: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d9744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d9748:
    // 0x3d9748: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x3d9748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_3d974c:
    // 0x3d974c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d9750:
    // 0x3d9750: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x3d9750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_3d9754:
    // 0x3d9754: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x3d9754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_3d9758:
    // 0x3d9758: 0xc087580  jal         func_21D600
label_3d975c:
    if (ctx->pc == 0x3D975Cu) {
        ctx->pc = 0x3D975Cu;
            // 0x3d975c: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x3D9760u;
        goto label_3d9760;
    }
    ctx->pc = 0x3D9758u;
    SET_GPR_U32(ctx, 31, 0x3D9760u);
    ctx->pc = 0x3D975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9758u;
            // 0x3d975c: 0x27a60200  addiu       $a2, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D600u;
    if (runtime->hasFunction(0x21D600u)) {
        auto targetFn = runtime->lookupFunction(0x21D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9760u; }
        if (ctx->pc != 0x3D9760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D600_0x21d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9760u; }
        if (ctx->pc != 0x3D9760u) { return; }
    }
    ctx->pc = 0x3D9760u;
label_3d9760:
    // 0x3d9760: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d9760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d9764:
    // 0x3d9764: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3d9764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d9768:
    // 0x3d9768: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d9768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d976c:
    // 0x3d976c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d976cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d9770:
    // 0x3d9770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d9774:
    // 0x3d9774: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d9774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d9778:
    // 0x3d9778: 0xc087884  jal         func_21E210
label_3d977c:
    if (ctx->pc == 0x3D977Cu) {
        ctx->pc = 0x3D977Cu;
            // 0x3d977c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->pc = 0x3D9780u;
        goto label_3d9780;
    }
    ctx->pc = 0x3D9778u;
    SET_GPR_U32(ctx, 31, 0x3D9780u);
    ctx->pc = 0x3D977Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9778u;
            // 0x3d977c: 0x8e440038  lw          $a0, 0x38($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E210u;
    if (runtime->hasFunction(0x21E210u)) {
        auto targetFn = runtime->lookupFunction(0x21E210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9780u; }
        if (ctx->pc != 0x3D9780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021E210_0x21e210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9780u; }
        if (ctx->pc != 0x3D9780u) { return; }
    }
    ctx->pc = 0x3D9780u;
label_3d9780:
    // 0x3d9780: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9784:
    // 0x3d9784: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x3d9784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_3d9788:
    // 0x3d9788: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d9788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d978c:
    // 0x3d978c: 0xc0a7a88  jal         func_29EA20
label_3d9790:
    if (ctx->pc == 0x3D9790u) {
        ctx->pc = 0x3D9790u;
            // 0x3d9790: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x3D9794u;
        goto label_3d9794;
    }
    ctx->pc = 0x3D978Cu;
    SET_GPR_U32(ctx, 31, 0x3D9794u);
    ctx->pc = 0x3D9790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D978Cu;
            // 0x3d9790: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9794u; }
        if (ctx->pc != 0x3D9794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9794u; }
        if (ctx->pc != 0x3D9794u) { return; }
    }
    ctx->pc = 0x3D9794u;
label_3d9794:
    // 0x3d9794: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x3d9794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_3d9798:
    // 0x3d9798: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d9798u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d979c:
    // 0x3d979c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_3d97a0:
    if (ctx->pc == 0x3D97A0u) {
        ctx->pc = 0x3D97A0u;
            // 0x3d97a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D97A4u;
        goto label_3d97a4;
    }
    ctx->pc = 0x3D979Cu;
    {
        const bool branch_taken_0x3d979c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D979Cu;
            // 0x3d97a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d979c) {
            ctx->pc = 0x3D97B0u;
            goto label_3d97b0;
        }
    }
    ctx->pc = 0x3D97A4u;
label_3d97a4:
    // 0x3d97a4: 0xc0876f0  jal         func_21DBC0
label_3d97a8:
    if (ctx->pc == 0x3D97A8u) {
        ctx->pc = 0x3D97A8u;
            // 0x3d97a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D97ACu;
        goto label_3d97ac;
    }
    ctx->pc = 0x3D97A4u;
    SET_GPR_U32(ctx, 31, 0x3D97ACu);
    ctx->pc = 0x3D97A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D97A4u;
            // 0x3d97a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBC0u;
    if (runtime->hasFunction(0x21DBC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D97ACu; }
        if (ctx->pc != 0x3D97ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DBC0_0x21dbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D97ACu; }
        if (ctx->pc != 0x3D97ACu) { return; }
    }
    ctx->pc = 0x3D97ACu;
label_3d97ac:
    // 0x3d97ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d97acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d97b0:
    // 0x3d97b0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d97b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d97b4:
    // 0x3d97b4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x3d97b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_3d97b8:
    // 0x3d97b8: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3d97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d97bc:
    // 0x3d97bc: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x3d97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3d97c0:
    // 0x3d97c0: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x3d97c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_3d97c4:
    // 0x3d97c4: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x3d97c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_3d97c8:
    // 0x3d97c8: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x3d97c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_3d97cc:
    // 0x3d97cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3d97ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d97d0:
    // 0x3d97d0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3d97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3d97d4:
    // 0x3d97d4: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x3d97d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
label_3d97d8:
    // 0x3d97d8: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x3d97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
label_3d97dc:
    // 0x3d97dc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3d97dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3d97e0:
    // 0x3d97e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3d97e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3d97e4:
    // 0x3d97e4: 0xafa0013c  sw          $zero, 0x13C($sp)
    ctx->pc = 0x3d97e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 0));
label_3d97e8:
    // 0x3d97e8: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x3d97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_3d97ec:
    // 0x3d97ec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x3d97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_3d97f0:
    // 0x3d97f0: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x3d97f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_3d97f4:
    // 0x3d97f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d97f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d97f8:
    // 0x3d97f8: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x3d97f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_3d97fc:
    // 0x3d97fc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x3d97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_3d9800:
    // 0x3d9800: 0xc4630018  lwc1        $f3, 0x18($v1)
    ctx->pc = 0x3d9800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d9804:
    // 0x3d9804: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x3d9804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_3d9808:
    // 0x3d9808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3d9808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d980c:
    // 0x3d980c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d980cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d9810:
    // 0x3d9810: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x3d9810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3d9814:
    // 0x3d9814: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3d9814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3d9818:
    // 0x3d9818: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3d9818u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_3d981c:
    // 0x3d981c: 0xe6a0008c  swc1        $f0, 0x8C($s5)
    ctx->pc = 0x3d981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
label_3d9820:
    // 0x3d9820: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3d9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d9824:
    // 0x3d9824: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d9824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d9828:
    // 0x3d9828: 0xe6a00088  swc1        $f0, 0x88($s5)
    ctx->pc = 0x3d9828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
label_3d982c:
    // 0x3d982c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3d982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d9830:
    // 0x3d9830: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3d9830u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3d9834:
    // 0x3d9834: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3d9834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3d9838:
    // 0x3d9838: 0xc087730  jal         func_21DCC0
label_3d983c:
    if (ctx->pc == 0x3D983Cu) {
        ctx->pc = 0x3D983Cu;
            // 0x3d983c: 0xe6a00084  swc1        $f0, 0x84($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
        ctx->pc = 0x3D9840u;
        goto label_3d9840;
    }
    ctx->pc = 0x3D9838u;
    SET_GPR_U32(ctx, 31, 0x3D9840u);
    ctx->pc = 0x3D983Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9838u;
            // 0x3d983c: 0xe6a00084  swc1        $f0, 0x84($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 132), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DCC0u;
    if (runtime->hasFunction(0x21DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9840u; }
        if (ctx->pc != 0x3D9840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021DCC0_0x21dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9840u; }
        if (ctx->pc != 0x3D9840u) { return; }
    }
    ctx->pc = 0x3D9840u;
label_3d9840:
    // 0x3d9840: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d9840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d9844:
    // 0x3d9844: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x3d9844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3d9848:
    // 0x3d9848: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3d9848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3d984c:
    // 0x3d984c: 0xc0a7a88  jal         func_29EA20
label_3d9850:
    if (ctx->pc == 0x3D9850u) {
        ctx->pc = 0x3D9850u;
            // 0x3d9850: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x3D9854u;
        goto label_3d9854;
    }
    ctx->pc = 0x3D984Cu;
    SET_GPR_U32(ctx, 31, 0x3D9854u);
    ctx->pc = 0x3D9850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D984Cu;
            // 0x3d9850: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9854u; }
        if (ctx->pc != 0x3D9854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9854u; }
        if (ctx->pc != 0x3D9854u) { return; }
    }
    ctx->pc = 0x3D9854u;
label_3d9854:
    // 0x3d9854: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x3d9854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3d9858:
    // 0x3d9858: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d9858u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d985c:
    // 0x3d985c: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_3d9860:
    if (ctx->pc == 0x3D9860u) {
        ctx->pc = 0x3D9860u;
            // 0x3d9860: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3D9864u;
        goto label_3d9864;
    }
    ctx->pc = 0x3D985Cu;
    {
        const bool branch_taken_0x3d985c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D9860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D985Cu;
            // 0x3d9860: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d985c) {
            ctx->pc = 0x3D9894u;
            goto label_3d9894;
        }
    }
    ctx->pc = 0x3D9864u;
label_3d9864:
    // 0x3d9864: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3d9864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3d9868:
    // 0x3d9868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d9868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d986c:
    // 0x3d986c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3d986cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d9870:
    // 0x3d9870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d9870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d9874:
    // 0x3d9874: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x3d9874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d9878:
    // 0x3d9878: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3d9878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3d987c:
    // 0x3d987c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3d987cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3d9880:
    // 0x3d9880: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d9884:
    // 0x3d9884: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3d9884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d9888:
    // 0x3d9888: 0xc087e24  jal         func_21F890
label_3d988c:
    if (ctx->pc == 0x3D988Cu) {
        ctx->pc = 0x3D988Cu;
            // 0x3d988c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9890u;
        goto label_3d9890;
    }
    ctx->pc = 0x3D9888u;
    SET_GPR_U32(ctx, 31, 0x3D9890u);
    ctx->pc = 0x3D988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9888u;
            // 0x3d988c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F890u;
    if (runtime->hasFunction(0x21F890u)) {
        auto targetFn = runtime->lookupFunction(0x21F890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9890u; }
        if (ctx->pc != 0x3D9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021F890_0x21f890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9890u; }
        if (ctx->pc != 0x3D9890u) { return; }
    }
    ctx->pc = 0x3D9890u;
label_3d9890:
    // 0x3d9890: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d9890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d9894:
    // 0x3d9894: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x3d9894u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_3d9898:
    // 0x3d9898: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3d989c:
    if (ctx->pc == 0x3D989Cu) {
        ctx->pc = 0x3D98A0u;
        goto label_3d98a0;
    }
    ctx->pc = 0x3D9898u;
    {
        const bool branch_taken_0x3d9898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9898) {
            ctx->pc = 0x3D98D8u;
            goto label_3d98d8;
        }
    }
    ctx->pc = 0x3D98A0u;
label_3d98a0:
    // 0x3d98a0: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x3d98a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
label_3d98a4:
    // 0x3d98a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d98a8:
    // 0x3d98a8: 0xa6a20006  sh          $v0, 0x6($s5)
    ctx->pc = 0x3d98a8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 6), (uint16_t)GPR_U32(ctx, 2));
label_3d98ac:
    // 0x3d98ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3d98acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3d98b0:
    // 0x3d98b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d98b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d98b4:
    // 0x3d98b4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3d98b8:
    if (ctx->pc == 0x3D98B8u) {
        ctx->pc = 0x3D98BCu;
        goto label_3d98bc;
    }
    ctx->pc = 0x3D98B4u;
    {
        const bool branch_taken_0x3d98b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d98b4) {
            ctx->pc = 0x3D98D8u;
            goto label_3d98d8;
        }
    }
    ctx->pc = 0x3D98BCu;
label_3d98bc:
    // 0x3d98bc: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_3d98c0:
    if (ctx->pc == 0x3D98C0u) {
        ctx->pc = 0x3D98C4u;
        goto label_3d98c4;
    }
    ctx->pc = 0x3D98BCu;
    {
        const bool branch_taken_0x3d98bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d98bc) {
            ctx->pc = 0x3D98D8u;
            goto label_3d98d8;
        }
    }
    ctx->pc = 0x3D98C4u;
label_3d98c4:
    // 0x3d98c4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3d98c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3d98c8:
    // 0x3d98c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d98c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3d98cc:
    // 0x3d98cc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d98ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d98d0:
    // 0x3d98d0: 0x320f809  jalr        $t9
label_3d98d4:
    if (ctx->pc == 0x3D98D4u) {
        ctx->pc = 0x3D98D4u;
            // 0x3d98d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D98D8u;
        goto label_3d98d8;
    }
    ctx->pc = 0x3D98D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D98D8u);
        ctx->pc = 0x3D98D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D98D0u;
            // 0x3d98d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D98D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D98D8u; }
            if (ctx->pc != 0x3D98D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D98D8u;
label_3d98d8:
    // 0x3d98d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3d98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3d98dc:
    // 0x3d98dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3d98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3d98e0:
    // 0x3d98e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3d98e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3d98e4:
    // 0x3d98e4: 0xc08c5bc  jal         func_2316F0
label_3d98e8:
    if (ctx->pc == 0x3D98E8u) {
        ctx->pc = 0x3D98E8u;
            // 0x3d98e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D98ECu;
        goto label_3d98ec;
    }
    ctx->pc = 0x3D98E4u;
    SET_GPR_U32(ctx, 31, 0x3D98ECu);
    ctx->pc = 0x3D98E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D98E4u;
            // 0x3d98e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2316F0u;
    if (runtime->hasFunction(0x2316F0u)) {
        auto targetFn = runtime->lookupFunction(0x2316F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D98ECu; }
        if (ctx->pc != 0x3D98ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002316F0_0x2316f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D98ECu; }
        if (ctx->pc != 0x3D98ECu) { return; }
    }
    ctx->pc = 0x3D98ECu;
label_3d98ec:
    // 0x3d98ec: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x3d98ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_3d98f0:
    // 0x3d98f0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_3d98f4:
    if (ctx->pc == 0x3D98F4u) {
        ctx->pc = 0x3D98F4u;
            // 0x3d98f4: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3D98F8u;
        goto label_3d98f8;
    }
    ctx->pc = 0x3D98F0u;
    {
        const bool branch_taken_0x3d98f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d98f0) {
            ctx->pc = 0x3D98F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D98F0u;
            // 0x3d98f4: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9934u;
            goto label_3d9934;
        }
    }
    ctx->pc = 0x3D98F8u;
label_3d98f8:
    // 0x3d98f8: 0x86820006  lh          $v0, 0x6($s4)
    ctx->pc = 0x3d98f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_3d98fc:
    // 0x3d98fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d98fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3d9900:
    // 0x3d9900: 0xa6820006  sh          $v0, 0x6($s4)
    ctx->pc = 0x3d9900u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 2));
label_3d9904:
    // 0x3d9904: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3d9904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3d9908:
    // 0x3d9908: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3d9908u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3d990c:
    // 0x3d990c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3d9910:
    if (ctx->pc == 0x3D9910u) {
        ctx->pc = 0x3D9914u;
        goto label_3d9914;
    }
    ctx->pc = 0x3D990Cu;
    {
        const bool branch_taken_0x3d990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d990c) {
            ctx->pc = 0x3D9930u;
            goto label_3d9930;
        }
    }
    ctx->pc = 0x3D9914u;
label_3d9914:
    // 0x3d9914: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_3d9918:
    if (ctx->pc == 0x3D9918u) {
        ctx->pc = 0x3D991Cu;
        goto label_3d991c;
    }
    ctx->pc = 0x3D9914u;
    {
        const bool branch_taken_0x3d9914 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d9914) {
            ctx->pc = 0x3D9930u;
            goto label_3d9930;
        }
    }
    ctx->pc = 0x3D991Cu;
label_3d991c:
    // 0x3d991c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3d991cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3d9920:
    // 0x3d9920: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d9920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d9924:
    // 0x3d9924: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3d9924u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3d9928:
    // 0x3d9928: 0x320f809  jalr        $t9
label_3d992c:
    if (ctx->pc == 0x3D992Cu) {
        ctx->pc = 0x3D992Cu;
            // 0x3d992c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D9930u;
        goto label_3d9930;
    }
    ctx->pc = 0x3D9928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D9930u);
        ctx->pc = 0x3D992Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9928u;
            // 0x3d992c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D9930u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D9930u; }
            if (ctx->pc != 0x3D9930u) { return; }
        }
        }
    }
    ctx->pc = 0x3D9930u;
label_3d9930:
    // 0x3d9930: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x3d9930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3d9934:
    // 0x3d9934: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x3d9934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3d9938:
    // 0x3d9938: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x3d9938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_3d993c:
    // 0x3d993c: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x3d993cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_3d9940:
    // 0x3d9940: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3d9944:
    if (ctx->pc == 0x3D9944u) {
        ctx->pc = 0x3D9944u;
            // 0x3d9944: 0x8e430044  lw          $v1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->pc = 0x3D9948u;
        goto label_3d9948;
    }
    ctx->pc = 0x3D9940u;
    {
        const bool branch_taken_0x3d9940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d9940) {
            ctx->pc = 0x3D9944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9940u;
            // 0x3d9944: 0x8e430044  lw          $v1, 0x44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D9958u;
            goto label_3d9958;
        }
    }
    ctx->pc = 0x3D9948u;
label_3d9948:
    // 0x3d9948: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x3d9948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_3d994c:
    // 0x3d994c: 0xc0a728c  jal         func_29CA30
label_3d9950:
    if (ctx->pc == 0x3D9950u) {
        ctx->pc = 0x3D9950u;
            // 0x3d9950: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3D9954u;
        goto label_3d9954;
    }
    ctx->pc = 0x3D994Cu;
    SET_GPR_U32(ctx, 31, 0x3D9954u);
    ctx->pc = 0x3D9950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D994Cu;
            // 0x3d9950: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9954u; }
        if (ctx->pc != 0x3D9954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9954u; }
        if (ctx->pc != 0x3D9954u) { return; }
    }
    ctx->pc = 0x3D9954u;
label_3d9954:
    // 0x3d9954: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x3d9954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_3d9958:
    // 0x3d9958: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3d9958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d995c:
    // 0x3d995c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3d995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3d9960:
    // 0x3d9960: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x3d9960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
label_3d9964:
    // 0x3d9964: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d9964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d9968:
    // 0x3d9968: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x3d9968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
label_3d996c:
    // 0x3d996c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d9970:
    // 0x3d9970: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x3d9970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_3d9974:
    // 0x3d9974: 0xac540004  sw          $s4, 0x4($v0)
    ctx->pc = 0x3d9974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
label_3d9978:
    // 0x3d9978: 0xc6340000  lwc1        $f20, 0x0($s1)
    ctx->pc = 0x3d9978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d997c:
    // 0x3d997c: 0xc04f278  jal         func_13C9E0
label_3d9980:
    if (ctx->pc == 0x3D9980u) {
        ctx->pc = 0x3D9980u;
            // 0x3d9980: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x3D9984u;
        goto label_3d9984;
    }
    ctx->pc = 0x3D997Cu;
    SET_GPR_U32(ctx, 31, 0x3D9984u);
    ctx->pc = 0x3D9980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D997Cu;
            // 0x3d9980: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9984u; }
        if (ctx->pc != 0x3D9984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9984u; }
        if (ctx->pc != 0x3D9984u) { return; }
    }
    ctx->pc = 0x3D9984u;
label_3d9984:
    // 0x3d9984: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3d9984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3d9988:
    // 0x3d9988: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d9988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d998c:
    // 0x3d998c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3d998cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3d9990:
    // 0x3d9990: 0xc04cca0  jal         func_133280
label_3d9994:
    if (ctx->pc == 0x3D9994u) {
        ctx->pc = 0x3D9994u;
            // 0x3d9994: 0x24c69bd0  addiu       $a2, $a2, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941648));
        ctx->pc = 0x3D9998u;
        goto label_3d9998;
    }
    ctx->pc = 0x3D9990u;
    SET_GPR_U32(ctx, 31, 0x3D9998u);
    ctx->pc = 0x3D9994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D9990u;
            // 0x3d9994: 0x24c69bd0  addiu       $a2, $a2, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9998u; }
        if (ctx->pc != 0x3D9998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D9998u; }
        if (ctx->pc != 0x3D9998u) { return; }
    }
    ctx->pc = 0x3D9998u;
label_3d9998:
    // 0x3d9998: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3d9998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3d999c:
    // 0x3d999c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d999cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d99a0:
    // 0x3d99a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3d99a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3d99a4:
    // 0x3d99a4: 0xc04cc70  jal         func_1331C0
label_3d99a8:
    if (ctx->pc == 0x3D99A8u) {
        ctx->pc = 0x3D99A8u;
            // 0x3d99a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D99ACu;
        goto label_3d99ac;
    }
    ctx->pc = 0x3D99A4u;
    SET_GPR_U32(ctx, 31, 0x3D99ACu);
    ctx->pc = 0x3D99A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D99A4u;
            // 0x3d99a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D99ACu; }
        if (ctx->pc != 0x3D99ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D99ACu; }
        if (ctx->pc != 0x3D99ACu) { return; }
    }
    ctx->pc = 0x3D99ACu;
label_3d99ac:
    // 0x3d99ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3d99acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3d99b0:
    // 0x3d99b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d99b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d99b4:
    // 0x3d99b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d99b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d99b8:
    // 0x3d99b8: 0xc04cc7c  jal         func_1331F0
label_3d99bc:
    if (ctx->pc == 0x3D99BCu) {
        ctx->pc = 0x3D99BCu;
            // 0x3d99bc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D99C0u;
        goto label_3d99c0;
    }
    ctx->pc = 0x3D99B8u;
    SET_GPR_U32(ctx, 31, 0x3D99C0u);
    ctx->pc = 0x3D99BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D99B8u;
            // 0x3d99bc: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D99C0u; }
        if (ctx->pc != 0x3D99C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D99C0u; }
        if (ctx->pc != 0x3D99C0u) { return; }
    }
    ctx->pc = 0x3D99C0u;
label_3d99c0:
    // 0x3d99c0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d99c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d99c4:
    // 0x3d99c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d99c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d99c8:
    // 0x3d99c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d99c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d99cc:
    // 0x3d99cc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d99ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d99d0:
    // 0x3d99d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d99d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d99d4:
    // 0x3d99d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d99d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d99d8:
    // 0x3d99d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d99d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d99dc:
    // 0x3d99dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d99dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d99e0:
    // 0x3d99e0: 0x3e00008  jr          $ra
label_3d99e4:
    if (ctx->pc == 0x3D99E4u) {
        ctx->pc = 0x3D99E4u;
            // 0x3d99e4: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x3D99E8u;
        goto label_3d99e8;
    }
    ctx->pc = 0x3D99E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D99E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D99E0u;
            // 0x3d99e4: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D99E8u;
label_3d99e8:
    // 0x3d99e8: 0x0  nop
    ctx->pc = 0x3d99e8u;
    // NOP
label_3d99ec:
    // 0x3d99ec: 0x0  nop
    ctx->pc = 0x3d99ecu;
    // NOP
}
