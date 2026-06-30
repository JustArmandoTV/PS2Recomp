#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D9270
// Address: 0x1d9270 - 0x1d97f0
void sub_001D9270_0x1d9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9270_0x1d9270");
#endif

    switch (ctx->pc) {
        case 0x1d9270u: goto label_1d9270;
        case 0x1d9274u: goto label_1d9274;
        case 0x1d9278u: goto label_1d9278;
        case 0x1d927cu: goto label_1d927c;
        case 0x1d9280u: goto label_1d9280;
        case 0x1d9284u: goto label_1d9284;
        case 0x1d9288u: goto label_1d9288;
        case 0x1d928cu: goto label_1d928c;
        case 0x1d9290u: goto label_1d9290;
        case 0x1d9294u: goto label_1d9294;
        case 0x1d9298u: goto label_1d9298;
        case 0x1d929cu: goto label_1d929c;
        case 0x1d92a0u: goto label_1d92a0;
        case 0x1d92a4u: goto label_1d92a4;
        case 0x1d92a8u: goto label_1d92a8;
        case 0x1d92acu: goto label_1d92ac;
        case 0x1d92b0u: goto label_1d92b0;
        case 0x1d92b4u: goto label_1d92b4;
        case 0x1d92b8u: goto label_1d92b8;
        case 0x1d92bcu: goto label_1d92bc;
        case 0x1d92c0u: goto label_1d92c0;
        case 0x1d92c4u: goto label_1d92c4;
        case 0x1d92c8u: goto label_1d92c8;
        case 0x1d92ccu: goto label_1d92cc;
        case 0x1d92d0u: goto label_1d92d0;
        case 0x1d92d4u: goto label_1d92d4;
        case 0x1d92d8u: goto label_1d92d8;
        case 0x1d92dcu: goto label_1d92dc;
        case 0x1d92e0u: goto label_1d92e0;
        case 0x1d92e4u: goto label_1d92e4;
        case 0x1d92e8u: goto label_1d92e8;
        case 0x1d92ecu: goto label_1d92ec;
        case 0x1d92f0u: goto label_1d92f0;
        case 0x1d92f4u: goto label_1d92f4;
        case 0x1d92f8u: goto label_1d92f8;
        case 0x1d92fcu: goto label_1d92fc;
        case 0x1d9300u: goto label_1d9300;
        case 0x1d9304u: goto label_1d9304;
        case 0x1d9308u: goto label_1d9308;
        case 0x1d930cu: goto label_1d930c;
        case 0x1d9310u: goto label_1d9310;
        case 0x1d9314u: goto label_1d9314;
        case 0x1d9318u: goto label_1d9318;
        case 0x1d931cu: goto label_1d931c;
        case 0x1d9320u: goto label_1d9320;
        case 0x1d9324u: goto label_1d9324;
        case 0x1d9328u: goto label_1d9328;
        case 0x1d932cu: goto label_1d932c;
        case 0x1d9330u: goto label_1d9330;
        case 0x1d9334u: goto label_1d9334;
        case 0x1d9338u: goto label_1d9338;
        case 0x1d933cu: goto label_1d933c;
        case 0x1d9340u: goto label_1d9340;
        case 0x1d9344u: goto label_1d9344;
        case 0x1d9348u: goto label_1d9348;
        case 0x1d934cu: goto label_1d934c;
        case 0x1d9350u: goto label_1d9350;
        case 0x1d9354u: goto label_1d9354;
        case 0x1d9358u: goto label_1d9358;
        case 0x1d935cu: goto label_1d935c;
        case 0x1d9360u: goto label_1d9360;
        case 0x1d9364u: goto label_1d9364;
        case 0x1d9368u: goto label_1d9368;
        case 0x1d936cu: goto label_1d936c;
        case 0x1d9370u: goto label_1d9370;
        case 0x1d9374u: goto label_1d9374;
        case 0x1d9378u: goto label_1d9378;
        case 0x1d937cu: goto label_1d937c;
        case 0x1d9380u: goto label_1d9380;
        case 0x1d9384u: goto label_1d9384;
        case 0x1d9388u: goto label_1d9388;
        case 0x1d938cu: goto label_1d938c;
        case 0x1d9390u: goto label_1d9390;
        case 0x1d9394u: goto label_1d9394;
        case 0x1d9398u: goto label_1d9398;
        case 0x1d939cu: goto label_1d939c;
        case 0x1d93a0u: goto label_1d93a0;
        case 0x1d93a4u: goto label_1d93a4;
        case 0x1d93a8u: goto label_1d93a8;
        case 0x1d93acu: goto label_1d93ac;
        case 0x1d93b0u: goto label_1d93b0;
        case 0x1d93b4u: goto label_1d93b4;
        case 0x1d93b8u: goto label_1d93b8;
        case 0x1d93bcu: goto label_1d93bc;
        case 0x1d93c0u: goto label_1d93c0;
        case 0x1d93c4u: goto label_1d93c4;
        case 0x1d93c8u: goto label_1d93c8;
        case 0x1d93ccu: goto label_1d93cc;
        case 0x1d93d0u: goto label_1d93d0;
        case 0x1d93d4u: goto label_1d93d4;
        case 0x1d93d8u: goto label_1d93d8;
        case 0x1d93dcu: goto label_1d93dc;
        case 0x1d93e0u: goto label_1d93e0;
        case 0x1d93e4u: goto label_1d93e4;
        case 0x1d93e8u: goto label_1d93e8;
        case 0x1d93ecu: goto label_1d93ec;
        case 0x1d93f0u: goto label_1d93f0;
        case 0x1d93f4u: goto label_1d93f4;
        case 0x1d93f8u: goto label_1d93f8;
        case 0x1d93fcu: goto label_1d93fc;
        case 0x1d9400u: goto label_1d9400;
        case 0x1d9404u: goto label_1d9404;
        case 0x1d9408u: goto label_1d9408;
        case 0x1d940cu: goto label_1d940c;
        case 0x1d9410u: goto label_1d9410;
        case 0x1d9414u: goto label_1d9414;
        case 0x1d9418u: goto label_1d9418;
        case 0x1d941cu: goto label_1d941c;
        case 0x1d9420u: goto label_1d9420;
        case 0x1d9424u: goto label_1d9424;
        case 0x1d9428u: goto label_1d9428;
        case 0x1d942cu: goto label_1d942c;
        case 0x1d9430u: goto label_1d9430;
        case 0x1d9434u: goto label_1d9434;
        case 0x1d9438u: goto label_1d9438;
        case 0x1d943cu: goto label_1d943c;
        case 0x1d9440u: goto label_1d9440;
        case 0x1d9444u: goto label_1d9444;
        case 0x1d9448u: goto label_1d9448;
        case 0x1d944cu: goto label_1d944c;
        case 0x1d9450u: goto label_1d9450;
        case 0x1d9454u: goto label_1d9454;
        case 0x1d9458u: goto label_1d9458;
        case 0x1d945cu: goto label_1d945c;
        case 0x1d9460u: goto label_1d9460;
        case 0x1d9464u: goto label_1d9464;
        case 0x1d9468u: goto label_1d9468;
        case 0x1d946cu: goto label_1d946c;
        case 0x1d9470u: goto label_1d9470;
        case 0x1d9474u: goto label_1d9474;
        case 0x1d9478u: goto label_1d9478;
        case 0x1d947cu: goto label_1d947c;
        case 0x1d9480u: goto label_1d9480;
        case 0x1d9484u: goto label_1d9484;
        case 0x1d9488u: goto label_1d9488;
        case 0x1d948cu: goto label_1d948c;
        case 0x1d9490u: goto label_1d9490;
        case 0x1d9494u: goto label_1d9494;
        case 0x1d9498u: goto label_1d9498;
        case 0x1d949cu: goto label_1d949c;
        case 0x1d94a0u: goto label_1d94a0;
        case 0x1d94a4u: goto label_1d94a4;
        case 0x1d94a8u: goto label_1d94a8;
        case 0x1d94acu: goto label_1d94ac;
        case 0x1d94b0u: goto label_1d94b0;
        case 0x1d94b4u: goto label_1d94b4;
        case 0x1d94b8u: goto label_1d94b8;
        case 0x1d94bcu: goto label_1d94bc;
        case 0x1d94c0u: goto label_1d94c0;
        case 0x1d94c4u: goto label_1d94c4;
        case 0x1d94c8u: goto label_1d94c8;
        case 0x1d94ccu: goto label_1d94cc;
        case 0x1d94d0u: goto label_1d94d0;
        case 0x1d94d4u: goto label_1d94d4;
        case 0x1d94d8u: goto label_1d94d8;
        case 0x1d94dcu: goto label_1d94dc;
        case 0x1d94e0u: goto label_1d94e0;
        case 0x1d94e4u: goto label_1d94e4;
        case 0x1d94e8u: goto label_1d94e8;
        case 0x1d94ecu: goto label_1d94ec;
        case 0x1d94f0u: goto label_1d94f0;
        case 0x1d94f4u: goto label_1d94f4;
        case 0x1d94f8u: goto label_1d94f8;
        case 0x1d94fcu: goto label_1d94fc;
        case 0x1d9500u: goto label_1d9500;
        case 0x1d9504u: goto label_1d9504;
        case 0x1d9508u: goto label_1d9508;
        case 0x1d950cu: goto label_1d950c;
        case 0x1d9510u: goto label_1d9510;
        case 0x1d9514u: goto label_1d9514;
        case 0x1d9518u: goto label_1d9518;
        case 0x1d951cu: goto label_1d951c;
        case 0x1d9520u: goto label_1d9520;
        case 0x1d9524u: goto label_1d9524;
        case 0x1d9528u: goto label_1d9528;
        case 0x1d952cu: goto label_1d952c;
        case 0x1d9530u: goto label_1d9530;
        case 0x1d9534u: goto label_1d9534;
        case 0x1d9538u: goto label_1d9538;
        case 0x1d953cu: goto label_1d953c;
        case 0x1d9540u: goto label_1d9540;
        case 0x1d9544u: goto label_1d9544;
        case 0x1d9548u: goto label_1d9548;
        case 0x1d954cu: goto label_1d954c;
        case 0x1d9550u: goto label_1d9550;
        case 0x1d9554u: goto label_1d9554;
        case 0x1d9558u: goto label_1d9558;
        case 0x1d955cu: goto label_1d955c;
        case 0x1d9560u: goto label_1d9560;
        case 0x1d9564u: goto label_1d9564;
        case 0x1d9568u: goto label_1d9568;
        case 0x1d956cu: goto label_1d956c;
        case 0x1d9570u: goto label_1d9570;
        case 0x1d9574u: goto label_1d9574;
        case 0x1d9578u: goto label_1d9578;
        case 0x1d957cu: goto label_1d957c;
        case 0x1d9580u: goto label_1d9580;
        case 0x1d9584u: goto label_1d9584;
        case 0x1d9588u: goto label_1d9588;
        case 0x1d958cu: goto label_1d958c;
        case 0x1d9590u: goto label_1d9590;
        case 0x1d9594u: goto label_1d9594;
        case 0x1d9598u: goto label_1d9598;
        case 0x1d959cu: goto label_1d959c;
        case 0x1d95a0u: goto label_1d95a0;
        case 0x1d95a4u: goto label_1d95a4;
        case 0x1d95a8u: goto label_1d95a8;
        case 0x1d95acu: goto label_1d95ac;
        case 0x1d95b0u: goto label_1d95b0;
        case 0x1d95b4u: goto label_1d95b4;
        case 0x1d95b8u: goto label_1d95b8;
        case 0x1d95bcu: goto label_1d95bc;
        case 0x1d95c0u: goto label_1d95c0;
        case 0x1d95c4u: goto label_1d95c4;
        case 0x1d95c8u: goto label_1d95c8;
        case 0x1d95ccu: goto label_1d95cc;
        case 0x1d95d0u: goto label_1d95d0;
        case 0x1d95d4u: goto label_1d95d4;
        case 0x1d95d8u: goto label_1d95d8;
        case 0x1d95dcu: goto label_1d95dc;
        case 0x1d95e0u: goto label_1d95e0;
        case 0x1d95e4u: goto label_1d95e4;
        case 0x1d95e8u: goto label_1d95e8;
        case 0x1d95ecu: goto label_1d95ec;
        case 0x1d95f0u: goto label_1d95f0;
        case 0x1d95f4u: goto label_1d95f4;
        case 0x1d95f8u: goto label_1d95f8;
        case 0x1d95fcu: goto label_1d95fc;
        case 0x1d9600u: goto label_1d9600;
        case 0x1d9604u: goto label_1d9604;
        case 0x1d9608u: goto label_1d9608;
        case 0x1d960cu: goto label_1d960c;
        case 0x1d9610u: goto label_1d9610;
        case 0x1d9614u: goto label_1d9614;
        case 0x1d9618u: goto label_1d9618;
        case 0x1d961cu: goto label_1d961c;
        case 0x1d9620u: goto label_1d9620;
        case 0x1d9624u: goto label_1d9624;
        case 0x1d9628u: goto label_1d9628;
        case 0x1d962cu: goto label_1d962c;
        case 0x1d9630u: goto label_1d9630;
        case 0x1d9634u: goto label_1d9634;
        case 0x1d9638u: goto label_1d9638;
        case 0x1d963cu: goto label_1d963c;
        case 0x1d9640u: goto label_1d9640;
        case 0x1d9644u: goto label_1d9644;
        case 0x1d9648u: goto label_1d9648;
        case 0x1d964cu: goto label_1d964c;
        case 0x1d9650u: goto label_1d9650;
        case 0x1d9654u: goto label_1d9654;
        case 0x1d9658u: goto label_1d9658;
        case 0x1d965cu: goto label_1d965c;
        case 0x1d9660u: goto label_1d9660;
        case 0x1d9664u: goto label_1d9664;
        case 0x1d9668u: goto label_1d9668;
        case 0x1d966cu: goto label_1d966c;
        case 0x1d9670u: goto label_1d9670;
        case 0x1d9674u: goto label_1d9674;
        case 0x1d9678u: goto label_1d9678;
        case 0x1d967cu: goto label_1d967c;
        case 0x1d9680u: goto label_1d9680;
        case 0x1d9684u: goto label_1d9684;
        case 0x1d9688u: goto label_1d9688;
        case 0x1d968cu: goto label_1d968c;
        case 0x1d9690u: goto label_1d9690;
        case 0x1d9694u: goto label_1d9694;
        case 0x1d9698u: goto label_1d9698;
        case 0x1d969cu: goto label_1d969c;
        case 0x1d96a0u: goto label_1d96a0;
        case 0x1d96a4u: goto label_1d96a4;
        case 0x1d96a8u: goto label_1d96a8;
        case 0x1d96acu: goto label_1d96ac;
        case 0x1d96b0u: goto label_1d96b0;
        case 0x1d96b4u: goto label_1d96b4;
        case 0x1d96b8u: goto label_1d96b8;
        case 0x1d96bcu: goto label_1d96bc;
        case 0x1d96c0u: goto label_1d96c0;
        case 0x1d96c4u: goto label_1d96c4;
        case 0x1d96c8u: goto label_1d96c8;
        case 0x1d96ccu: goto label_1d96cc;
        case 0x1d96d0u: goto label_1d96d0;
        case 0x1d96d4u: goto label_1d96d4;
        case 0x1d96d8u: goto label_1d96d8;
        case 0x1d96dcu: goto label_1d96dc;
        case 0x1d96e0u: goto label_1d96e0;
        case 0x1d96e4u: goto label_1d96e4;
        case 0x1d96e8u: goto label_1d96e8;
        case 0x1d96ecu: goto label_1d96ec;
        case 0x1d96f0u: goto label_1d96f0;
        case 0x1d96f4u: goto label_1d96f4;
        case 0x1d96f8u: goto label_1d96f8;
        case 0x1d96fcu: goto label_1d96fc;
        case 0x1d9700u: goto label_1d9700;
        case 0x1d9704u: goto label_1d9704;
        case 0x1d9708u: goto label_1d9708;
        case 0x1d970cu: goto label_1d970c;
        case 0x1d9710u: goto label_1d9710;
        case 0x1d9714u: goto label_1d9714;
        case 0x1d9718u: goto label_1d9718;
        case 0x1d971cu: goto label_1d971c;
        case 0x1d9720u: goto label_1d9720;
        case 0x1d9724u: goto label_1d9724;
        case 0x1d9728u: goto label_1d9728;
        case 0x1d972cu: goto label_1d972c;
        case 0x1d9730u: goto label_1d9730;
        case 0x1d9734u: goto label_1d9734;
        case 0x1d9738u: goto label_1d9738;
        case 0x1d973cu: goto label_1d973c;
        case 0x1d9740u: goto label_1d9740;
        case 0x1d9744u: goto label_1d9744;
        case 0x1d9748u: goto label_1d9748;
        case 0x1d974cu: goto label_1d974c;
        case 0x1d9750u: goto label_1d9750;
        case 0x1d9754u: goto label_1d9754;
        case 0x1d9758u: goto label_1d9758;
        case 0x1d975cu: goto label_1d975c;
        case 0x1d9760u: goto label_1d9760;
        case 0x1d9764u: goto label_1d9764;
        case 0x1d9768u: goto label_1d9768;
        case 0x1d976cu: goto label_1d976c;
        case 0x1d9770u: goto label_1d9770;
        case 0x1d9774u: goto label_1d9774;
        case 0x1d9778u: goto label_1d9778;
        case 0x1d977cu: goto label_1d977c;
        case 0x1d9780u: goto label_1d9780;
        case 0x1d9784u: goto label_1d9784;
        case 0x1d9788u: goto label_1d9788;
        case 0x1d978cu: goto label_1d978c;
        case 0x1d9790u: goto label_1d9790;
        case 0x1d9794u: goto label_1d9794;
        case 0x1d9798u: goto label_1d9798;
        case 0x1d979cu: goto label_1d979c;
        case 0x1d97a0u: goto label_1d97a0;
        case 0x1d97a4u: goto label_1d97a4;
        case 0x1d97a8u: goto label_1d97a8;
        case 0x1d97acu: goto label_1d97ac;
        case 0x1d97b0u: goto label_1d97b0;
        case 0x1d97b4u: goto label_1d97b4;
        case 0x1d97b8u: goto label_1d97b8;
        case 0x1d97bcu: goto label_1d97bc;
        case 0x1d97c0u: goto label_1d97c0;
        case 0x1d97c4u: goto label_1d97c4;
        case 0x1d97c8u: goto label_1d97c8;
        case 0x1d97ccu: goto label_1d97cc;
        case 0x1d97d0u: goto label_1d97d0;
        case 0x1d97d4u: goto label_1d97d4;
        case 0x1d97d8u: goto label_1d97d8;
        case 0x1d97dcu: goto label_1d97dc;
        case 0x1d97e0u: goto label_1d97e0;
        case 0x1d97e4u: goto label_1d97e4;
        case 0x1d97e8u: goto label_1d97e8;
        case 0x1d97ecu: goto label_1d97ec;
        default: break;
    }

    ctx->pc = 0x1d9270u;

label_1d9270:
    // 0x1d9270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d9274:
    // 0x1d9274: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d9274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1d9278:
    // 0x1d9278: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d9278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d927c:
    // 0x1d927c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d9280:
    // 0x1d9280: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d9280u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d9284:
    // 0x1d9284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d9284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d9288:
    // 0x1d9288: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d9288u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d928c:
    // 0x1d928c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d9290:
    // 0x1d9290: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x1d9290u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d9294:
    // 0x1d9294: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x1d9294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_1d9298:
    // 0x1d9298: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1d929c:
    if (ctx->pc == 0x1D929Cu) {
        ctx->pc = 0x1D929Cu;
            // 0x1d929c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D92A0u;
        goto label_1d92a0;
    }
    ctx->pc = 0x1D9298u;
    {
        const bool branch_taken_0x1d9298 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9298u;
            // 0x1d929c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9298) {
            ctx->pc = 0x1D92B0u;
            goto label_1d92b0;
        }
    }
    ctx->pc = 0x1D92A0u;
label_1d92a0:
    // 0x1d92a0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d92a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d92a4:
    // 0x1d92a4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d92a8:
    if (ctx->pc == 0x1D92A8u) {
        ctx->pc = 0x1D92ACu;
        goto label_1d92ac;
    }
    ctx->pc = 0x1D92A4u;
    {
        const bool branch_taken_0x1d92a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92a4) {
            ctx->pc = 0x1D92B0u;
            goto label_1d92b0;
        }
    }
    ctx->pc = 0x1D92ACu;
label_1d92ac:
    // 0x1d92ac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1d92acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d92b0:
    // 0x1d92b0: 0x1480000f  bnez        $a0, . + 4 + (0xF << 2)
label_1d92b4:
    if (ctx->pc == 0x1D92B4u) {
        ctx->pc = 0x1D92B8u;
        goto label_1d92b8;
    }
    ctx->pc = 0x1D92B0u;
    {
        const bool branch_taken_0x1d92b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d92b0) {
            ctx->pc = 0x1D92F0u;
            goto label_1d92f0;
        }
    }
    ctx->pc = 0x1D92B8u;
label_1d92b8:
    // 0x1d92b8: 0x826311aa  lb          $v1, 0x11AA($s3)
    ctx->pc = 0x1d92b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_1d92bc:
    // 0x1d92bc: 0x60182a  slt         $v1, $v1, $zero
    ctx->pc = 0x1d92bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1d92c0:
    // 0x1d92c0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d92c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_1d92c4:
    // 0x1d92c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1d92c8:
    if (ctx->pc == 0x1D92C8u) {
        ctx->pc = 0x1D92CCu;
        goto label_1d92cc;
    }
    ctx->pc = 0x1D92C4u;
    {
        const bool branch_taken_0x1d92c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92c4) {
            ctx->pc = 0x1D92E4u;
            goto label_1d92e4;
        }
    }
    ctx->pc = 0x1D92CCu;
label_1d92cc:
    // 0x1d92cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1d92ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_1d92d0:
    // 0x1d92d0: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x1d92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_1d92d4:
    // 0x1d92d4: 0x8063008d  lb          $v1, 0x8D($v1)
    ctx->pc = 0x1d92d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 141)));
label_1d92d8:
    // 0x1d92d8: 0x601827  not         $v1, $v1
    ctx->pc = 0x1d92d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_1d92dc:
    // 0x1d92dc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d92dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d92e0:
    // 0x1d92e0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1d92e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1d92e4:
    // 0x1d92e4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1d92e8:
    if (ctx->pc == 0x1D92E8u) {
        ctx->pc = 0x1D92ECu;
        goto label_1d92ec;
    }
    ctx->pc = 0x1D92E4u;
    {
        const bool branch_taken_0x1d92e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d92e4) {
            ctx->pc = 0x1D92F0u;
            goto label_1d92f0;
        }
    }
    ctx->pc = 0x1D92ECu;
label_1d92ec:
    // 0x1d92ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d92ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d92f0:
    // 0x1d92f0: 0x50a00139  beql        $a1, $zero, . + 4 + (0x139 << 2)
label_1d92f4:
    if (ctx->pc == 0x1D92F4u) {
        ctx->pc = 0x1D92F4u;
            // 0x1d92f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1D92F8u;
        goto label_1d92f8;
    }
    ctx->pc = 0x1D92F0u;
    {
        const bool branch_taken_0x1d92f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d92f0) {
            ctx->pc = 0x1D92F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D92F0u;
            // 0x1d92f4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D97D8u;
            goto label_1d97d8;
        }
    }
    ctx->pc = 0x1D92F8u;
label_1d92f8:
    // 0x1d92f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1d92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1d92fc:
    // 0x1d92fc: 0x826311aa  lb          $v1, 0x11AA($s3)
    ctx->pc = 0x1d92fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_1d9300:
    // 0x1d9300: 0x8c50d120  lw          $s0, -0x2EE0($v0)
    ctx->pc = 0x1d9300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_1d9304:
    // 0x1d9304: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9304u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d9308:
    // 0x1d9308: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1d9308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d930c:
    // 0x1d930c: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1d930cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1d9310:
    // 0x1d9310: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d9310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1d9314:
    // 0x1d9314: 0x12420118  beq         $s2, $v0, . + 4 + (0x118 << 2)
label_1d9318:
    if (ctx->pc == 0x1D9318u) {
        ctx->pc = 0x1D9318u;
            // 0x1d9318: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1D931Cu;
        goto label_1d931c;
    }
    ctx->pc = 0x1D9314u;
    {
        const bool branch_taken_0x1d9314 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D9318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9314u;
            // 0x1d9318: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9314) {
            ctx->pc = 0x1D9778u;
            goto label_1d9778;
        }
    }
    ctx->pc = 0x1D931Cu;
label_1d931c:
    // 0x1d931c: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x1d931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1d9320:
    // 0x1d9320: 0x52420109  beql        $s2, $v0, . + 4 + (0x109 << 2)
label_1d9324:
    if (ctx->pc == 0x1D9324u) {
        ctx->pc = 0x1D9324u;
            // 0x1d9324: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9328u;
        goto label_1d9328;
    }
    ctx->pc = 0x1D9320u;
    {
        const bool branch_taken_0x1d9320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9320) {
            ctx->pc = 0x1D9324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9320u;
            // 0x1d9324: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9748u;
            goto label_1d9748;
        }
    }
    ctx->pc = 0x1D9328u;
label_1d9328:
    // 0x1d9328: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1d9328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1d932c:
    // 0x1d932c: 0x524200fa  beql        $s2, $v0, . + 4 + (0xFA << 2)
label_1d9330:
    if (ctx->pc == 0x1D9330u) {
        ctx->pc = 0x1D9330u;
            // 0x1d9330: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9334u;
        goto label_1d9334;
    }
    ctx->pc = 0x1D932Cu;
    {
        const bool branch_taken_0x1d932c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d932c) {
            ctx->pc = 0x1D9330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D932Cu;
            // 0x1d9330: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9718u;
            goto label_1d9718;
        }
    }
    ctx->pc = 0x1D9334u;
label_1d9334:
    // 0x1d9334: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d9338:
    // 0x1d9338: 0x524200be  beql        $s2, $v0, . + 4 + (0xBE << 2)
label_1d933c:
    if (ctx->pc == 0x1D933Cu) {
        ctx->pc = 0x1D933Cu;
            // 0x1d933c: 0x8e620e38  lw          $v0, 0xE38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
        ctx->pc = 0x1D9340u;
        goto label_1d9340;
    }
    ctx->pc = 0x1D9338u;
    {
        const bool branch_taken_0x1d9338 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9338) {
            ctx->pc = 0x1D933Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9338u;
            // 0x1d933c: 0x8e620e38  lw          $v0, 0xE38($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9634u;
            goto label_1d9634;
        }
    }
    ctx->pc = 0x1D9340u;
label_1d9340:
    // 0x1d9340: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d9344:
    // 0x1d9344: 0x524200af  beql        $s2, $v0, . + 4 + (0xAF << 2)
label_1d9348:
    if (ctx->pc == 0x1D9348u) {
        ctx->pc = 0x1D9348u;
            // 0x1d9348: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D934Cu;
        goto label_1d934c;
    }
    ctx->pc = 0x1D9344u;
    {
        const bool branch_taken_0x1d9344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9344) {
            ctx->pc = 0x1D9348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9344u;
            // 0x1d9348: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9604u;
            goto label_1d9604;
        }
    }
    ctx->pc = 0x1D934Cu;
label_1d934c:
    // 0x1d934c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1d934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1d9350:
    // 0x1d9350: 0x524200a0  beql        $s2, $v0, . + 4 + (0xA0 << 2)
label_1d9354:
    if (ctx->pc == 0x1D9354u) {
        ctx->pc = 0x1D9354u;
            // 0x1d9354: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9358u;
        goto label_1d9358;
    }
    ctx->pc = 0x1D9350u;
    {
        const bool branch_taken_0x1d9350 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9350) {
            ctx->pc = 0x1D9354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9350u;
            // 0x1d9354: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D95D4u;
            goto label_1d95d4;
        }
    }
    ctx->pc = 0x1D9358u;
label_1d9358:
    // 0x1d9358: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d935c:
    // 0x1d935c: 0x52420091  beql        $s2, $v0, . + 4 + (0x91 << 2)
label_1d9360:
    if (ctx->pc == 0x1D9360u) {
        ctx->pc = 0x1D9360u;
            // 0x1d9360: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9364u;
        goto label_1d9364;
    }
    ctx->pc = 0x1D935Cu;
    {
        const bool branch_taken_0x1d935c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d935c) {
            ctx->pc = 0x1D9360u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D935Cu;
            // 0x1d9360: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D95A4u;
            goto label_1d95a4;
        }
    }
    ctx->pc = 0x1D9364u;
label_1d9364:
    // 0x1d9364: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x1d9364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1d9368:
    // 0x1d9368: 0x52420082  beql        $s2, $v0, . + 4 + (0x82 << 2)
label_1d936c:
    if (ctx->pc == 0x1D936Cu) {
        ctx->pc = 0x1D936Cu;
            // 0x1d936c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9370u;
        goto label_1d9370;
    }
    ctx->pc = 0x1D9368u;
    {
        const bool branch_taken_0x1d9368 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9368) {
            ctx->pc = 0x1D936Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9368u;
            // 0x1d936c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9574u;
            goto label_1d9574;
        }
    }
    ctx->pc = 0x1D9370u;
label_1d9370:
    // 0x1d9370: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1d9370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1d9374:
    // 0x1d9374: 0x52420073  beql        $s2, $v0, . + 4 + (0x73 << 2)
label_1d9378:
    if (ctx->pc == 0x1D9378u) {
        ctx->pc = 0x1D9378u;
            // 0x1d9378: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D937Cu;
        goto label_1d937c;
    }
    ctx->pc = 0x1D9374u;
    {
        const bool branch_taken_0x1d9374 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9374) {
            ctx->pc = 0x1D9378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9374u;
            // 0x1d9378: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9544u;
            goto label_1d9544;
        }
    }
    ctx->pc = 0x1D937Cu;
label_1d937c:
    // 0x1d937c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1d937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d9380:
    // 0x1d9380: 0x52420064  beql        $s2, $v0, . + 4 + (0x64 << 2)
label_1d9384:
    if (ctx->pc == 0x1D9384u) {
        ctx->pc = 0x1D9384u;
            // 0x1d9384: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9388u;
        goto label_1d9388;
    }
    ctx->pc = 0x1D9380u;
    {
        const bool branch_taken_0x1d9380 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9380) {
            ctx->pc = 0x1D9384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9380u;
            // 0x1d9384: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9514u;
            goto label_1d9514;
        }
    }
    ctx->pc = 0x1D9388u;
label_1d9388:
    // 0x1d9388: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1d9388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d938c:
    // 0x1d938c: 0x52420055  beql        $s2, $v0, . + 4 + (0x55 << 2)
label_1d9390:
    if (ctx->pc == 0x1D9390u) {
        ctx->pc = 0x1D9390u;
            // 0x1d9390: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9394u;
        goto label_1d9394;
    }
    ctx->pc = 0x1D938Cu;
    {
        const bool branch_taken_0x1d938c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d938c) {
            ctx->pc = 0x1D9390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D938Cu;
            // 0x1d9390: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D94E4u;
            goto label_1d94e4;
        }
    }
    ctx->pc = 0x1D9394u;
label_1d9394:
    // 0x1d9394: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d9394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d9398:
    // 0x1d9398: 0x52420030  beql        $s2, $v0, . + 4 + (0x30 << 2)
label_1d939c:
    if (ctx->pc == 0x1D939Cu) {
        ctx->pc = 0x1D939Cu;
            // 0x1d939c: 0x8e630d6c  lw          $v1, 0xD6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
        ctx->pc = 0x1D93A0u;
        goto label_1d93a0;
    }
    ctx->pc = 0x1D9398u;
    {
        const bool branch_taken_0x1d9398 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9398) {
            ctx->pc = 0x1D939Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9398u;
            // 0x1d939c: 0x8e630d6c  lw          $v1, 0xD6C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D945Cu;
            goto label_1d945c;
        }
    }
    ctx->pc = 0x1D93A0u;
label_1d93a0:
    // 0x1d93a0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d93a4:
    // 0x1d93a4: 0x52420021  beql        $s2, $v0, . + 4 + (0x21 << 2)
label_1d93a8:
    if (ctx->pc == 0x1D93A8u) {
        ctx->pc = 0x1D93A8u;
            // 0x1d93a8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D93ACu;
        goto label_1d93ac;
    }
    ctx->pc = 0x1D93A4u;
    {
        const bool branch_taken_0x1d93a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d93a4) {
            ctx->pc = 0x1D93A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93A4u;
            // 0x1d93a8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D942Cu;
            goto label_1d942c;
        }
    }
    ctx->pc = 0x1D93ACu;
label_1d93ac:
    // 0x1d93ac: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1d93b0:
    // 0x1d93b0: 0x52420012  beql        $s2, $v0, . + 4 + (0x12 << 2)
label_1d93b4:
    if (ctx->pc == 0x1D93B4u) {
        ctx->pc = 0x1D93B4u;
            // 0x1d93b4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D93B8u;
        goto label_1d93b8;
    }
    ctx->pc = 0x1D93B0u;
    {
        const bool branch_taken_0x1d93b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d93b0) {
            ctx->pc = 0x1D93B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93B0u;
            // 0x1d93b4: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D93FCu;
            goto label_1d93fc;
        }
    }
    ctx->pc = 0x1D93B8u;
label_1d93b8:
    // 0x1d93b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d93bc:
    // 0x1d93bc: 0x52420003  beql        $s2, $v0, . + 4 + (0x3 << 2)
label_1d93c0:
    if (ctx->pc == 0x1D93C0u) {
        ctx->pc = 0x1D93C0u;
            // 0x1d93c0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D93C4u;
        goto label_1d93c4;
    }
    ctx->pc = 0x1D93BCu;
    {
        const bool branch_taken_0x1d93bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d93bc) {
            ctx->pc = 0x1D93C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93BCu;
            // 0x1d93c0: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D93CCu;
            goto label_1d93cc;
        }
    }
    ctx->pc = 0x1D93C4u;
label_1d93c4:
    // 0x1d93c4: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_1d93c8:
    if (ctx->pc == 0x1D93C8u) {
        ctx->pc = 0x1D93C8u;
            // 0x1d93c8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D93CCu;
        goto label_1d93cc;
    }
    ctx->pc = 0x1D93C4u;
    {
        const bool branch_taken_0x1d93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93C4u;
            // 0x1d93c8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93c4) {
            ctx->pc = 0x1D97ACu;
            goto label_1d97ac;
        }
    }
    ctx->pc = 0x1D93CCu;
label_1d93cc:
    // 0x1d93cc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d93d0:
    // 0x1d93d0: 0x320f809  jalr        $t9
label_1d93d4:
    if (ctx->pc == 0x1D93D4u) {
        ctx->pc = 0x1D93D4u;
            // 0x1d93d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D93D8u;
        goto label_1d93d8;
    }
    ctx->pc = 0x1D93D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D93D8u);
        ctx->pc = 0x1D93D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93D0u;
            // 0x1d93d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D93D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D93D8u; }
            if (ctx->pc != 0x1D93D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D93D8u;
label_1d93d8:
    // 0x1d93d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d93d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d93dc:
    // 0x1d93dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d93dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d93e0:
    // 0x1d93e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d93e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d93e4:
    // 0x1d93e4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1d93e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d93e8:
    // 0x1d93e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d93e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d93ec:
    // 0x1d93ec: 0x320f809  jalr        $t9
label_1d93f0:
    if (ctx->pc == 0x1D93F0u) {
        ctx->pc = 0x1D93F0u;
            // 0x1d93f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D93F4u;
        goto label_1d93f4;
    }
    ctx->pc = 0x1D93ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D93F4u);
        ctx->pc = 0x1D93F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D93ECu;
            // 0x1d93f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D93F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D93F4u; }
            if (ctx->pc != 0x1D93F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D93F4u;
label_1d93f4:
    // 0x1d93f4: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_1d93f8:
    if (ctx->pc == 0x1D93F8u) {
        ctx->pc = 0x1D93FCu;
        goto label_1d93fc;
    }
    ctx->pc = 0x1D93F4u;
    {
        const bool branch_taken_0x1d93f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d93f4) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D93FCu;
label_1d93fc:
    // 0x1d93fc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d93fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9400:
    // 0x1d9400: 0x320f809  jalr        $t9
label_1d9404:
    if (ctx->pc == 0x1D9404u) {
        ctx->pc = 0x1D9404u;
            // 0x1d9404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9408u;
        goto label_1d9408;
    }
    ctx->pc = 0x1D9400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9408u);
        ctx->pc = 0x1D9404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9400u;
            // 0x1d9404: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9408u; }
            if (ctx->pc != 0x1D9408u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9408u;
label_1d9408:
    // 0x1d9408: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d940c:
    // 0x1d940c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9410:
    // 0x1d9410: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x1d9410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1d9414:
    // 0x1d9414: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9418:
    // 0x1d9418: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d941c:
    // 0x1d941c: 0x320f809  jalr        $t9
label_1d9420:
    if (ctx->pc == 0x1D9420u) {
        ctx->pc = 0x1D9420u;
            // 0x1d9420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9424u;
        goto label_1d9424;
    }
    ctx->pc = 0x1D941Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9424u);
        ctx->pc = 0x1D9420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D941Cu;
            // 0x1d9420: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9424u; }
            if (ctx->pc != 0x1D9424u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9424u;
label_1d9424:
    // 0x1d9424: 0x100000eb  b           . + 4 + (0xEB << 2)
label_1d9428:
    if (ctx->pc == 0x1D9428u) {
        ctx->pc = 0x1D942Cu;
        goto label_1d942c;
    }
    ctx->pc = 0x1D9424u;
    {
        const bool branch_taken_0x1d9424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9424) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D942Cu;
label_1d942c:
    // 0x1d942c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9430:
    // 0x1d9430: 0x320f809  jalr        $t9
label_1d9434:
    if (ctx->pc == 0x1D9434u) {
        ctx->pc = 0x1D9434u;
            // 0x1d9434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9438u;
        goto label_1d9438;
    }
    ctx->pc = 0x1D9430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9438u);
        ctx->pc = 0x1D9434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9430u;
            // 0x1d9434: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9438u; }
            if (ctx->pc != 0x1D9438u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9438u;
label_1d9438:
    // 0x1d9438: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d943c:
    // 0x1d943c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9440:
    // 0x1d9440: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d9440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d9444:
    // 0x1d9444: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d9444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9448:
    // 0x1d9448: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d944c:
    // 0x1d944c: 0x320f809  jalr        $t9
label_1d9450:
    if (ctx->pc == 0x1D9450u) {
        ctx->pc = 0x1D9450u;
            // 0x1d9450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9454u;
        goto label_1d9454;
    }
    ctx->pc = 0x1D944Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9454u);
        ctx->pc = 0x1D9450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D944Cu;
            // 0x1d9450: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9454u; }
            if (ctx->pc != 0x1D9454u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9454u;
label_1d9454:
    // 0x1d9454: 0x100000df  b           . + 4 + (0xDF << 2)
label_1d9458:
    if (ctx->pc == 0x1D9458u) {
        ctx->pc = 0x1D945Cu;
        goto label_1d945c;
    }
    ctx->pc = 0x1D9454u;
    {
        const bool branch_taken_0x1d9454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9454) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D945Cu;
label_1d945c:
    // 0x1d945c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1d945cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d9460:
    // 0x1d9460: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x1d9460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_1d9464:
    // 0x1d9464: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_1d9468:
    if (ctx->pc == 0x1D9468u) {
        ctx->pc = 0x1D9468u;
            // 0x1d9468: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D946Cu;
        goto label_1d946c;
    }
    ctx->pc = 0x1D9464u;
    {
        const bool branch_taken_0x1d9464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9464) {
            ctx->pc = 0x1D9468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9464u;
            // 0x1d9468: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D9484u;
            goto label_1d9484;
        }
    }
    ctx->pc = 0x1D946Cu;
label_1d946c:
    // 0x1d946c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d9470:
    // 0x1d9470: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1d9474:
    if (ctx->pc == 0x1D9474u) {
        ctx->pc = 0x1D9478u;
        goto label_1d9478;
    }
    ctx->pc = 0x1D9470u;
    {
        const bool branch_taken_0x1d9470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d9470) {
            ctx->pc = 0x1D9480u;
            goto label_1d9480;
        }
    }
    ctx->pc = 0x1D9478u;
label_1d9478:
    // 0x1d9478: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d947c:
    if (ctx->pc == 0x1D947Cu) {
        ctx->pc = 0x1D947Cu;
            // 0x1d947c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1D9480u;
        goto label_1d9480;
    }
    ctx->pc = 0x1D9478u;
    {
        const bool branch_taken_0x1d9478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9478u;
            // 0x1d947c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9478) {
            ctx->pc = 0x1D94B4u;
            goto label_1d94b4;
        }
    }
    ctx->pc = 0x1D9480u;
label_1d9480:
    // 0x1d9480: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9484:
    // 0x1d9484: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9484u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9488:
    // 0x1d9488: 0x320f809  jalr        $t9
label_1d948c:
    if (ctx->pc == 0x1D948Cu) {
        ctx->pc = 0x1D948Cu;
            // 0x1d948c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9490u;
        goto label_1d9490;
    }
    ctx->pc = 0x1D9488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9490u);
        ctx->pc = 0x1D948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9488u;
            // 0x1d948c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9490u; }
            if (ctx->pc != 0x1D9490u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9490u;
label_1d9490:
    // 0x1d9490: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9494:
    // 0x1d9494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9498:
    // 0x1d9498: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x1d9498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1d949c:
    // 0x1d949c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d949cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d94a0:
    // 0x1d94a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d94a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d94a4:
    // 0x1d94a4: 0x320f809  jalr        $t9
label_1d94a8:
    if (ctx->pc == 0x1D94A8u) {
        ctx->pc = 0x1D94A8u;
            // 0x1d94a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D94ACu;
        goto label_1d94ac;
    }
    ctx->pc = 0x1D94A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D94ACu);
        ctx->pc = 0x1D94A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94A4u;
            // 0x1d94a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D94ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D94ACu; }
            if (ctx->pc != 0x1D94ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1D94ACu;
label_1d94ac:
    // 0x1d94ac: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_1d94b0:
    if (ctx->pc == 0x1D94B0u) {
        ctx->pc = 0x1D94B4u;
        goto label_1d94b4;
    }
    ctx->pc = 0x1D94ACu;
    {
        const bool branch_taken_0x1d94ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94ac) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D94B4u;
label_1d94b4:
    // 0x1d94b4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d94b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d94b8:
    // 0x1d94b8: 0x320f809  jalr        $t9
label_1d94bc:
    if (ctx->pc == 0x1D94BCu) {
        ctx->pc = 0x1D94BCu;
            // 0x1d94bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D94C0u;
        goto label_1d94c0;
    }
    ctx->pc = 0x1D94B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D94C0u);
        ctx->pc = 0x1D94BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94B8u;
            // 0x1d94bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D94C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D94C0u; }
            if (ctx->pc != 0x1D94C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D94C0u;
label_1d94c0:
    // 0x1d94c0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d94c4:
    // 0x1d94c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d94c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d94c8:
    // 0x1d94c8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1d94c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d94cc:
    // 0x1d94cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d94ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d94d0:
    // 0x1d94d0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d94d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d94d4:
    // 0x1d94d4: 0x320f809  jalr        $t9
label_1d94d8:
    if (ctx->pc == 0x1D94D8u) {
        ctx->pc = 0x1D94D8u;
            // 0x1d94d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D94DCu;
        goto label_1d94dc;
    }
    ctx->pc = 0x1D94D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D94DCu);
        ctx->pc = 0x1D94D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94D4u;
            // 0x1d94d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D94DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D94DCu; }
            if (ctx->pc != 0x1D94DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D94DCu;
label_1d94dc:
    // 0x1d94dc: 0x100000bd  b           . + 4 + (0xBD << 2)
label_1d94e0:
    if (ctx->pc == 0x1D94E0u) {
        ctx->pc = 0x1D94E4u;
        goto label_1d94e4;
    }
    ctx->pc = 0x1D94DCu;
    {
        const bool branch_taken_0x1d94dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d94dc) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D94E4u;
label_1d94e4:
    // 0x1d94e4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d94e8:
    // 0x1d94e8: 0x320f809  jalr        $t9
label_1d94ec:
    if (ctx->pc == 0x1D94ECu) {
        ctx->pc = 0x1D94ECu;
            // 0x1d94ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D94F0u;
        goto label_1d94f0;
    }
    ctx->pc = 0x1D94E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D94F0u);
        ctx->pc = 0x1D94ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D94E8u;
            // 0x1d94ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D94F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D94F0u; }
            if (ctx->pc != 0x1D94F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D94F0u;
label_1d94f0:
    // 0x1d94f0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d94f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d94f4:
    // 0x1d94f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d94f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d94f8:
    // 0x1d94f8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1d94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d94fc:
    // 0x1d94fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d94fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9500:
    // 0x1d9500: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9504:
    // 0x1d9504: 0x320f809  jalr        $t9
label_1d9508:
    if (ctx->pc == 0x1D9508u) {
        ctx->pc = 0x1D9508u;
            // 0x1d9508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D950Cu;
        goto label_1d950c;
    }
    ctx->pc = 0x1D9504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D950Cu);
        ctx->pc = 0x1D9508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9504u;
            // 0x1d9508: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D950Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D950Cu; }
            if (ctx->pc != 0x1D950Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D950Cu;
label_1d950c:
    // 0x1d950c: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_1d9510:
    if (ctx->pc == 0x1D9510u) {
        ctx->pc = 0x1D9514u;
        goto label_1d9514;
    }
    ctx->pc = 0x1D950Cu;
    {
        const bool branch_taken_0x1d950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d950c) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9514u;
label_1d9514:
    // 0x1d9514: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9518:
    // 0x1d9518: 0x320f809  jalr        $t9
label_1d951c:
    if (ctx->pc == 0x1D951Cu) {
        ctx->pc = 0x1D951Cu;
            // 0x1d951c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9520u;
        goto label_1d9520;
    }
    ctx->pc = 0x1D9518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9520u);
        ctx->pc = 0x1D951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9518u;
            // 0x1d951c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9520u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9520u; }
            if (ctx->pc != 0x1D9520u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9520u;
label_1d9520:
    // 0x1d9520: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9524:
    // 0x1d9524: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9528:
    // 0x1d9528: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d952c:
    // 0x1d952c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9530:
    // 0x1d9530: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9530u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9534:
    // 0x1d9534: 0x320f809  jalr        $t9
label_1d9538:
    if (ctx->pc == 0x1D9538u) {
        ctx->pc = 0x1D9538u;
            // 0x1d9538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D953Cu;
        goto label_1d953c;
    }
    ctx->pc = 0x1D9534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D953Cu);
        ctx->pc = 0x1D9538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9534u;
            // 0x1d9538: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D953Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D953Cu; }
            if (ctx->pc != 0x1D953Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D953Cu;
label_1d953c:
    // 0x1d953c: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_1d9540:
    if (ctx->pc == 0x1D9540u) {
        ctx->pc = 0x1D9544u;
        goto label_1d9544;
    }
    ctx->pc = 0x1D953Cu;
    {
        const bool branch_taken_0x1d953c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d953c) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9544u;
label_1d9544:
    // 0x1d9544: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9548:
    // 0x1d9548: 0x320f809  jalr        $t9
label_1d954c:
    if (ctx->pc == 0x1D954Cu) {
        ctx->pc = 0x1D954Cu;
            // 0x1d954c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9550u;
        goto label_1d9550;
    }
    ctx->pc = 0x1D9548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9550u);
        ctx->pc = 0x1D954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9548u;
            // 0x1d954c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9550u; }
            if (ctx->pc != 0x1D9550u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9550u;
label_1d9550:
    // 0x1d9550: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9554:
    // 0x1d9554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9558:
    // 0x1d9558: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1d9558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1d955c:
    // 0x1d955c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d955cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9560:
    // 0x1d9560: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9564:
    // 0x1d9564: 0x320f809  jalr        $t9
label_1d9568:
    if (ctx->pc == 0x1D9568u) {
        ctx->pc = 0x1D9568u;
            // 0x1d9568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D956Cu;
        goto label_1d956c;
    }
    ctx->pc = 0x1D9564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D956Cu);
        ctx->pc = 0x1D9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9564u;
            // 0x1d9568: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D956Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D956Cu; }
            if (ctx->pc != 0x1D956Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D956Cu;
label_1d956c:
    // 0x1d956c: 0x10000099  b           . + 4 + (0x99 << 2)
label_1d9570:
    if (ctx->pc == 0x1D9570u) {
        ctx->pc = 0x1D9574u;
        goto label_1d9574;
    }
    ctx->pc = 0x1D956Cu;
    {
        const bool branch_taken_0x1d956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d956c) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9574u;
label_1d9574:
    // 0x1d9574: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9578:
    // 0x1d9578: 0x320f809  jalr        $t9
label_1d957c:
    if (ctx->pc == 0x1D957Cu) {
        ctx->pc = 0x1D957Cu;
            // 0x1d957c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9580u;
        goto label_1d9580;
    }
    ctx->pc = 0x1D9578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9580u);
        ctx->pc = 0x1D957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9578u;
            // 0x1d957c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9580u; }
            if (ctx->pc != 0x1D9580u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9580u;
label_1d9580:
    // 0x1d9580: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9584:
    // 0x1d9584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9588:
    // 0x1d9588: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x1d9588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1d958c:
    // 0x1d958c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d958cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9590:
    // 0x1d9590: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9594:
    // 0x1d9594: 0x320f809  jalr        $t9
label_1d9598:
    if (ctx->pc == 0x1D9598u) {
        ctx->pc = 0x1D9598u;
            // 0x1d9598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D959Cu;
        goto label_1d959c;
    }
    ctx->pc = 0x1D9594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D959Cu);
        ctx->pc = 0x1D9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9594u;
            // 0x1d9598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D959Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D959Cu; }
            if (ctx->pc != 0x1D959Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D959Cu;
label_1d959c:
    // 0x1d959c: 0x1000008d  b           . + 4 + (0x8D << 2)
label_1d95a0:
    if (ctx->pc == 0x1D95A0u) {
        ctx->pc = 0x1D95A4u;
        goto label_1d95a4;
    }
    ctx->pc = 0x1D959Cu;
    {
        const bool branch_taken_0x1d959c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d959c) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D95A4u;
label_1d95a4:
    // 0x1d95a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d95a8:
    // 0x1d95a8: 0x320f809  jalr        $t9
label_1d95ac:
    if (ctx->pc == 0x1D95ACu) {
        ctx->pc = 0x1D95ACu;
            // 0x1d95ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D95B0u;
        goto label_1d95b0;
    }
    ctx->pc = 0x1D95A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D95B0u);
        ctx->pc = 0x1D95ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95A8u;
            // 0x1d95ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D95B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D95B0u; }
            if (ctx->pc != 0x1D95B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D95B0u;
label_1d95b0:
    // 0x1d95b0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d95b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d95b4:
    // 0x1d95b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d95b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d95b8:
    // 0x1d95b8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d95b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1d95bc:
    // 0x1d95bc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d95bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d95c0:
    // 0x1d95c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d95c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d95c4:
    // 0x1d95c4: 0x320f809  jalr        $t9
label_1d95c8:
    if (ctx->pc == 0x1D95C8u) {
        ctx->pc = 0x1D95C8u;
            // 0x1d95c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D95CCu;
        goto label_1d95cc;
    }
    ctx->pc = 0x1D95C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D95CCu);
        ctx->pc = 0x1D95C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95C4u;
            // 0x1d95c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D95CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D95CCu; }
            if (ctx->pc != 0x1D95CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D95CCu;
label_1d95cc:
    // 0x1d95cc: 0x10000081  b           . + 4 + (0x81 << 2)
label_1d95d0:
    if (ctx->pc == 0x1D95D0u) {
        ctx->pc = 0x1D95D4u;
        goto label_1d95d4;
    }
    ctx->pc = 0x1D95CCu;
    {
        const bool branch_taken_0x1d95cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d95cc) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D95D4u;
label_1d95d4:
    // 0x1d95d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d95d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d95d8:
    // 0x1d95d8: 0x320f809  jalr        $t9
label_1d95dc:
    if (ctx->pc == 0x1D95DCu) {
        ctx->pc = 0x1D95DCu;
            // 0x1d95dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D95E0u;
        goto label_1d95e0;
    }
    ctx->pc = 0x1D95D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D95E0u);
        ctx->pc = 0x1D95DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95D8u;
            // 0x1d95dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D95E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D95E0u; }
            if (ctx->pc != 0x1D95E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D95E0u;
label_1d95e0:
    // 0x1d95e0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d95e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d95e4:
    // 0x1d95e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d95e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d95e8:
    // 0x1d95e8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1d95e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1d95ec:
    // 0x1d95ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d95ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d95f0:
    // 0x1d95f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d95f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d95f4:
    // 0x1d95f4: 0x320f809  jalr        $t9
label_1d95f8:
    if (ctx->pc == 0x1D95F8u) {
        ctx->pc = 0x1D95F8u;
            // 0x1d95f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D95FCu;
        goto label_1d95fc;
    }
    ctx->pc = 0x1D95F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D95FCu);
        ctx->pc = 0x1D95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D95F4u;
            // 0x1d95f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D95FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D95FCu; }
            if (ctx->pc != 0x1D95FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D95FCu;
label_1d95fc:
    // 0x1d95fc: 0x10000075  b           . + 4 + (0x75 << 2)
label_1d9600:
    if (ctx->pc == 0x1D9600u) {
        ctx->pc = 0x1D9604u;
        goto label_1d9604;
    }
    ctx->pc = 0x1D95FCu;
    {
        const bool branch_taken_0x1d95fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d95fc) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9604u;
label_1d9604:
    // 0x1d9604: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9604u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9608:
    // 0x1d9608: 0x320f809  jalr        $t9
label_1d960c:
    if (ctx->pc == 0x1D960Cu) {
        ctx->pc = 0x1D960Cu;
            // 0x1d960c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9610u;
        goto label_1d9610;
    }
    ctx->pc = 0x1D9608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9610u);
        ctx->pc = 0x1D960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9608u;
            // 0x1d960c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9610u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9610u; }
            if (ctx->pc != 0x1D9610u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9610u;
label_1d9610:
    // 0x1d9610: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9614:
    // 0x1d9614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9618:
    // 0x1d9618: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x1d9618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_1d961c:
    // 0x1d961c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d961cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9620:
    // 0x1d9620: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9624:
    // 0x1d9624: 0x320f809  jalr        $t9
label_1d9628:
    if (ctx->pc == 0x1D9628u) {
        ctx->pc = 0x1D9628u;
            // 0x1d9628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D962Cu;
        goto label_1d962c;
    }
    ctx->pc = 0x1D9624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D962Cu);
        ctx->pc = 0x1D9628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9624u;
            // 0x1d9628: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D962Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D962Cu; }
            if (ctx->pc != 0x1D962Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D962Cu;
label_1d962c:
    // 0x1d962c: 0x10000069  b           . + 4 + (0x69 << 2)
label_1d9630:
    if (ctx->pc == 0x1D9630u) {
        ctx->pc = 0x1D9634u;
        goto label_1d9634;
    }
    ctx->pc = 0x1D962Cu;
    {
        const bool branch_taken_0x1d962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d962c) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9634u;
label_1d9634:
    // 0x1d9634: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d9638:
    // 0x1d9638: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d9638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d963c:
    // 0x1d963c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d963cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9640:
    // 0x1d9640: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d9644:
    // 0x1d9644: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9648:
    // 0x1d9648: 0x320f809  jalr        $t9
label_1d964c:
    if (ctx->pc == 0x1D964Cu) {
        ctx->pc = 0x1D9650u;
        goto label_1d9650;
    }
    ctx->pc = 0x1D9648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9650u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9650u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9650u; }
            if (ctx->pc != 0x1D9650u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9650u;
label_1d9650:
    // 0x1d9650: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1d9650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_1d9654:
    // 0x1d9654: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1d9654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_1d9658:
    // 0x1d9658: 0xa0400566  sb          $zero, 0x566($v0)
    ctx->pc = 0x1d9658u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1382), (uint8_t)GPR_U32(ctx, 0));
label_1d965c:
    // 0x1d965c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d965cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d9660:
    // 0x1d9660: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9664:
    // 0x1d9664: 0x320f809  jalr        $t9
label_1d9668:
    if (ctx->pc == 0x1D9668u) {
        ctx->pc = 0x1D9668u;
            // 0x1d9668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D966Cu;
        goto label_1d966c;
    }
    ctx->pc = 0x1D9664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D966Cu);
        ctx->pc = 0x1D9668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9664u;
            // 0x1d9668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D966Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D966Cu; }
            if (ctx->pc != 0x1D966Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D966Cu;
label_1d966c:
    // 0x1d966c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d966cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9670:
    // 0x1d9670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9674:
    // 0x1d9674: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x1d9674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1d9678:
    // 0x1d9678: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d967c:
    // 0x1d967c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d967cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9680:
    // 0x1d9680: 0x320f809  jalr        $t9
label_1d9684:
    if (ctx->pc == 0x1D9684u) {
        ctx->pc = 0x1D9684u;
            // 0x1d9684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9688u;
        goto label_1d9688;
    }
    ctx->pc = 0x1D9680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9688u);
        ctx->pc = 0x1D9684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9680u;
            // 0x1d9684: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9688u; }
            if (ctx->pc != 0x1D9688u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9688u;
label_1d9688:
    // 0x1d9688: 0x8e640e38  lw          $a0, 0xE38($s3)
    ctx->pc = 0x1d9688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3640)));
label_1d968c:
    // 0x1d968c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1d968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d9690:
    // 0x1d9690: 0x5083000c  beql        $a0, $v1, . + 4 + (0xC << 2)
label_1d9694:
    if (ctx->pc == 0x1D9694u) {
        ctx->pc = 0x1D9694u;
            // 0x1d9694: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x1D9698u;
        goto label_1d9698;
    }
    ctx->pc = 0x1D9690u;
    {
        const bool branch_taken_0x1d9690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d9690) {
            ctx->pc = 0x1D9694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9690u;
            // 0x1d9694: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D96C4u;
            goto label_1d96c4;
        }
    }
    ctx->pc = 0x1D9698u;
label_1d9698:
    // 0x1d9698: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d9698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d969c:
    // 0x1d969c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_1d96a0:
    if (ctx->pc == 0x1D96A0u) {
        ctx->pc = 0x1D96A4u;
        goto label_1d96a4;
    }
    ctx->pc = 0x1D969Cu;
    {
        const bool branch_taken_0x1d969c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d969c) {
            ctx->pc = 0x1D96C0u;
            goto label_1d96c0;
        }
    }
    ctx->pc = 0x1D96A4u;
label_1d96a4:
    // 0x1d96a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d96a8:
    // 0x1d96a8: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1d96ac:
    if (ctx->pc == 0x1D96ACu) {
        ctx->pc = 0x1D96B0u;
        goto label_1d96b0;
    }
    ctx->pc = 0x1D96A8u;
    {
        const bool branch_taken_0x1d96a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d96a8) {
            ctx->pc = 0x1D96C0u;
            goto label_1d96c0;
        }
    }
    ctx->pc = 0x1D96B0u;
label_1d96b0:
    // 0x1d96b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1d96b4:
    if (ctx->pc == 0x1D96B4u) {
        ctx->pc = 0x1D96B8u;
        goto label_1d96b8;
    }
    ctx->pc = 0x1D96B0u;
    {
        const bool branch_taken_0x1d96b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d96b0) {
            ctx->pc = 0x1D96C0u;
            goto label_1d96c0;
        }
    }
    ctx->pc = 0x1D96B8u;
label_1d96b8:
    // 0x1d96b8: 0x10000046  b           . + 4 + (0x46 << 2)
label_1d96bc:
    if (ctx->pc == 0x1D96BCu) {
        ctx->pc = 0x1D96C0u;
        goto label_1d96c0;
    }
    ctx->pc = 0x1D96B8u;
    {
        const bool branch_taken_0x1d96b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d96b8) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D96C0u;
label_1d96c0:
    // 0x1d96c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d96c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1d96c4:
    // 0x1d96c4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d96c8:
    // 0x1d96c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d96c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d96cc:
    // 0x1d96cc: 0xc0a950c  jal         func_2A5430
label_1d96d0:
    if (ctx->pc == 0x1D96D0u) {
        ctx->pc = 0x1D96D0u;
            // 0x1d96d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1D96D4u;
        goto label_1d96d4;
    }
    ctx->pc = 0x1D96CCu;
    SET_GPR_U32(ctx, 31, 0x1D96D4u);
    ctx->pc = 0x1D96D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96CCu;
            // 0x1d96d0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5430u;
    if (runtime->hasFunction(0x2A5430u)) {
        auto targetFn = runtime->lookupFunction(0x2A5430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96D4u; }
        if (ctx->pc != 0x1D96D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A5430_0x2a5430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D96D4u; }
        if (ctx->pc != 0x1D96D4u) { return; }
    }
    ctx->pc = 0x1D96D4u;
label_1d96d4:
    // 0x1d96d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1d96d8:
    // 0x1d96d8: 0x8e630d98  lw          $v1, 0xD98($s3)
    ctx->pc = 0x1d96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_1d96dc:
    // 0x1d96dc: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x1d96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_1d96e0:
    // 0x1d96e0: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1d96e4:
    // 0x1d96e4: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x1d96e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d96e8:
    // 0x1d96e8: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
label_1d96ec:
    if (ctx->pc == 0x1D96ECu) {
        ctx->pc = 0x1D96ECu;
            // 0x1d96ec: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x1D96F0u;
        goto label_1d96f0;
    }
    ctx->pc = 0x1D96E8u;
    {
        const bool branch_taken_0x1d96e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d96e8) {
            ctx->pc = 0x1D96ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96E8u;
            // 0x1d96ec: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D96F8u;
            goto label_1d96f8;
        }
    }
    ctx->pc = 0x1D96F0u;
label_1d96f0:
    // 0x1d96f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d96f4:
    if (ctx->pc == 0x1D96F4u) {
        ctx->pc = 0x1D96F4u;
            // 0x1d96f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D96F8u;
        goto label_1d96f8;
    }
    ctx->pc = 0x1D96F0u;
    {
        const bool branch_taken_0x1d96f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D96F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D96F0u;
            // 0x1d96f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96f0) {
            ctx->pc = 0x1D9704u;
            goto label_1d9704;
        }
    }
    ctx->pc = 0x1D96F8u;
label_1d96f8:
    // 0x1d96f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d96fc:
    // 0x1d96fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d9700:
    // 0x1d9700: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d9700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9704:
    // 0x1d9704: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d9704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d9708:
    // 0x1d9708: 0xc0b79b8  jal         func_2DE6E0
label_1d970c:
    if (ctx->pc == 0x1D970Cu) {
        ctx->pc = 0x1D970Cu;
            // 0x1d970c: 0xac820590  sw          $v0, 0x590($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1424), GPR_U32(ctx, 2));
        ctx->pc = 0x1D9710u;
        goto label_1d9710;
    }
    ctx->pc = 0x1D9708u;
    SET_GPR_U32(ctx, 31, 0x1D9710u);
    ctx->pc = 0x1D970Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9708u;
            // 0x1d970c: 0xac820590  sw          $v0, 0x590($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1424), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE6E0u;
    if (runtime->hasFunction(0x2DE6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9710u; }
        if (ctx->pc != 0x1D9710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE6E0_0x2de6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D9710u; }
        if (ctx->pc != 0x1D9710u) { return; }
    }
    ctx->pc = 0x1D9710u;
label_1d9710:
    // 0x1d9710: 0x10000030  b           . + 4 + (0x30 << 2)
label_1d9714:
    if (ctx->pc == 0x1D9714u) {
        ctx->pc = 0x1D9718u;
        goto label_1d9718;
    }
    ctx->pc = 0x1D9710u;
    {
        const bool branch_taken_0x1d9710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9710) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9718u;
label_1d9718:
    // 0x1d9718: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9718u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d971c:
    // 0x1d971c: 0x320f809  jalr        $t9
label_1d9720:
    if (ctx->pc == 0x1D9720u) {
        ctx->pc = 0x1D9720u;
            // 0x1d9720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9724u;
        goto label_1d9724;
    }
    ctx->pc = 0x1D971Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9724u);
        ctx->pc = 0x1D9720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D971Cu;
            // 0x1d9720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9724u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9724u; }
            if (ctx->pc != 0x1D9724u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9724u;
label_1d9724:
    // 0x1d9724: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9728:
    // 0x1d9728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d972c:
    // 0x1d972c: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1d972cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_1d9730:
    // 0x1d9730: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9734:
    // 0x1d9734: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9738:
    // 0x1d9738: 0x320f809  jalr        $t9
label_1d973c:
    if (ctx->pc == 0x1D973Cu) {
        ctx->pc = 0x1D973Cu;
            // 0x1d973c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9740u;
        goto label_1d9740;
    }
    ctx->pc = 0x1D9738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9740u);
        ctx->pc = 0x1D973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9738u;
            // 0x1d973c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9740u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9740u; }
            if (ctx->pc != 0x1D9740u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9740u;
label_1d9740:
    // 0x1d9740: 0x10000024  b           . + 4 + (0x24 << 2)
label_1d9744:
    if (ctx->pc == 0x1D9744u) {
        ctx->pc = 0x1D9748u;
        goto label_1d9748;
    }
    ctx->pc = 0x1D9740u;
    {
        const bool branch_taken_0x1d9740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9740) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9748u;
label_1d9748:
    // 0x1d9748: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d974c:
    // 0x1d974c: 0x320f809  jalr        $t9
label_1d9750:
    if (ctx->pc == 0x1D9750u) {
        ctx->pc = 0x1D9750u;
            // 0x1d9750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9754u;
        goto label_1d9754;
    }
    ctx->pc = 0x1D974Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9754u);
        ctx->pc = 0x1D9750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D974Cu;
            // 0x1d9750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9754u; }
            if (ctx->pc != 0x1D9754u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9754u;
label_1d9754:
    // 0x1d9754: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d9758:
    // 0x1d9758: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d9758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d975c:
    // 0x1d975c: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x1d975cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1d9760:
    // 0x1d9760: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9764:
    // 0x1d9764: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9764u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9768:
    // 0x1d9768: 0x320f809  jalr        $t9
label_1d976c:
    if (ctx->pc == 0x1D976Cu) {
        ctx->pc = 0x1D976Cu;
            // 0x1d976c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9770u;
        goto label_1d9770;
    }
    ctx->pc = 0x1D9768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9770u);
        ctx->pc = 0x1D976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9768u;
            // 0x1d976c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9770u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9770u; }
            if (ctx->pc != 0x1D9770u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9770u;
label_1d9770:
    // 0x1d9770: 0x10000018  b           . + 4 + (0x18 << 2)
label_1d9774:
    if (ctx->pc == 0x1D9774u) {
        ctx->pc = 0x1D9778u;
        goto label_1d9778;
    }
    ctx->pc = 0x1D9770u;
    {
        const bool branch_taken_0x1d9770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9770) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D9778u;
label_1d9778:
    // 0x1d9778: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1d9778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d977c:
    // 0x1d977c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d9780:
    // 0x1d9780: 0x320f809  jalr        $t9
label_1d9784:
    if (ctx->pc == 0x1D9784u) {
        ctx->pc = 0x1D9784u;
            // 0x1d9784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D9788u;
        goto label_1d9788;
    }
    ctx->pc = 0x1D9780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D9788u);
        ctx->pc = 0x1D9784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D9780u;
            // 0x1d9784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D9788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D9788u; }
            if (ctx->pc != 0x1D9788u) { return; }
        }
        }
    }
    ctx->pc = 0x1D9788u;
label_1d9788:
    // 0x1d9788: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d9788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d978c:
    // 0x1d978c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d9790:
    // 0x1d9790: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1d9790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1d9794:
    // 0x1d9794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d9798:
    // 0x1d9798: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d9798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d979c:
    // 0x1d979c: 0x320f809  jalr        $t9
label_1d97a0:
    if (ctx->pc == 0x1D97A0u) {
        ctx->pc = 0x1D97A0u;
            // 0x1d97a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D97A4u;
        goto label_1d97a4;
    }
    ctx->pc = 0x1D979Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D97A4u);
        ctx->pc = 0x1D97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D979Cu;
            // 0x1d97a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D97A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D97A4u; }
            if (ctx->pc != 0x1D97A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D97A4u;
label_1d97a4:
    // 0x1d97a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d97a8:
    if (ctx->pc == 0x1D97A8u) {
        ctx->pc = 0x1D97ACu;
        goto label_1d97ac;
    }
    ctx->pc = 0x1D97A4u;
    {
        const bool branch_taken_0x1d97a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97a4) {
            ctx->pc = 0x1D97D4u;
            goto label_1d97d4;
        }
    }
    ctx->pc = 0x1D97ACu;
label_1d97ac:
    // 0x1d97ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d97acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d97b0:
    // 0x1d97b0: 0x320f809  jalr        $t9
label_1d97b4:
    if (ctx->pc == 0x1D97B4u) {
        ctx->pc = 0x1D97B4u;
            // 0x1d97b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D97B8u;
        goto label_1d97b8;
    }
    ctx->pc = 0x1D97B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D97B8u);
        ctx->pc = 0x1D97B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97B0u;
            // 0x1d97b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D97B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D97B8u; }
            if (ctx->pc != 0x1D97B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1D97B8u;
label_1d97b8:
    // 0x1d97b8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1d97b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d97bc:
    // 0x1d97bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d97bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d97c0:
    // 0x1d97c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d97c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d97c4:
    // 0x1d97c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d97c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d97c8:
    // 0x1d97c8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1d97cc:
    // 0x1d97cc: 0x320f809  jalr        $t9
label_1d97d0:
    if (ctx->pc == 0x1D97D0u) {
        ctx->pc = 0x1D97D0u;
            // 0x1d97d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D97D4u;
        goto label_1d97d4;
    }
    ctx->pc = 0x1D97CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D97D4u);
        ctx->pc = 0x1D97D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97CCu;
            // 0x1d97d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D97D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D97D4u; }
            if (ctx->pc != 0x1D97D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D97D4u;
label_1d97d4:
    // 0x1d97d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d97d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d97d8:
    // 0x1d97d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d97d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d97dc:
    // 0x1d97dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d97dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d97e0:
    // 0x1d97e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d97e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d97e4:
    // 0x1d97e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d97e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d97e8:
    // 0x1d97e8: 0x3e00008  jr          $ra
label_1d97ec:
    if (ctx->pc == 0x1D97ECu) {
        ctx->pc = 0x1D97ECu;
            // 0x1d97ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D97F0u;
        goto label_fallthrough_0x1d97e8;
    }
    ctx->pc = 0x1D97E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D97ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D97E8u;
            // 0x1d97ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d97e8:
    ctx->pc = 0x1D97F0u;
}
