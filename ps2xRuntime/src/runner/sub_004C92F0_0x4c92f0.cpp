#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C92F0
// Address: 0x4c92f0 - 0x4c9aa0
void sub_004C92F0_0x4c92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C92F0_0x4c92f0");
#endif

    switch (ctx->pc) {
        case 0x4c92f0u: goto label_4c92f0;
        case 0x4c92f4u: goto label_4c92f4;
        case 0x4c92f8u: goto label_4c92f8;
        case 0x4c92fcu: goto label_4c92fc;
        case 0x4c9300u: goto label_4c9300;
        case 0x4c9304u: goto label_4c9304;
        case 0x4c9308u: goto label_4c9308;
        case 0x4c930cu: goto label_4c930c;
        case 0x4c9310u: goto label_4c9310;
        case 0x4c9314u: goto label_4c9314;
        case 0x4c9318u: goto label_4c9318;
        case 0x4c931cu: goto label_4c931c;
        case 0x4c9320u: goto label_4c9320;
        case 0x4c9324u: goto label_4c9324;
        case 0x4c9328u: goto label_4c9328;
        case 0x4c932cu: goto label_4c932c;
        case 0x4c9330u: goto label_4c9330;
        case 0x4c9334u: goto label_4c9334;
        case 0x4c9338u: goto label_4c9338;
        case 0x4c933cu: goto label_4c933c;
        case 0x4c9340u: goto label_4c9340;
        case 0x4c9344u: goto label_4c9344;
        case 0x4c9348u: goto label_4c9348;
        case 0x4c934cu: goto label_4c934c;
        case 0x4c9350u: goto label_4c9350;
        case 0x4c9354u: goto label_4c9354;
        case 0x4c9358u: goto label_4c9358;
        case 0x4c935cu: goto label_4c935c;
        case 0x4c9360u: goto label_4c9360;
        case 0x4c9364u: goto label_4c9364;
        case 0x4c9368u: goto label_4c9368;
        case 0x4c936cu: goto label_4c936c;
        case 0x4c9370u: goto label_4c9370;
        case 0x4c9374u: goto label_4c9374;
        case 0x4c9378u: goto label_4c9378;
        case 0x4c937cu: goto label_4c937c;
        case 0x4c9380u: goto label_4c9380;
        case 0x4c9384u: goto label_4c9384;
        case 0x4c9388u: goto label_4c9388;
        case 0x4c938cu: goto label_4c938c;
        case 0x4c9390u: goto label_4c9390;
        case 0x4c9394u: goto label_4c9394;
        case 0x4c9398u: goto label_4c9398;
        case 0x4c939cu: goto label_4c939c;
        case 0x4c93a0u: goto label_4c93a0;
        case 0x4c93a4u: goto label_4c93a4;
        case 0x4c93a8u: goto label_4c93a8;
        case 0x4c93acu: goto label_4c93ac;
        case 0x4c93b0u: goto label_4c93b0;
        case 0x4c93b4u: goto label_4c93b4;
        case 0x4c93b8u: goto label_4c93b8;
        case 0x4c93bcu: goto label_4c93bc;
        case 0x4c93c0u: goto label_4c93c0;
        case 0x4c93c4u: goto label_4c93c4;
        case 0x4c93c8u: goto label_4c93c8;
        case 0x4c93ccu: goto label_4c93cc;
        case 0x4c93d0u: goto label_4c93d0;
        case 0x4c93d4u: goto label_4c93d4;
        case 0x4c93d8u: goto label_4c93d8;
        case 0x4c93dcu: goto label_4c93dc;
        case 0x4c93e0u: goto label_4c93e0;
        case 0x4c93e4u: goto label_4c93e4;
        case 0x4c93e8u: goto label_4c93e8;
        case 0x4c93ecu: goto label_4c93ec;
        case 0x4c93f0u: goto label_4c93f0;
        case 0x4c93f4u: goto label_4c93f4;
        case 0x4c93f8u: goto label_4c93f8;
        case 0x4c93fcu: goto label_4c93fc;
        case 0x4c9400u: goto label_4c9400;
        case 0x4c9404u: goto label_4c9404;
        case 0x4c9408u: goto label_4c9408;
        case 0x4c940cu: goto label_4c940c;
        case 0x4c9410u: goto label_4c9410;
        case 0x4c9414u: goto label_4c9414;
        case 0x4c9418u: goto label_4c9418;
        case 0x4c941cu: goto label_4c941c;
        case 0x4c9420u: goto label_4c9420;
        case 0x4c9424u: goto label_4c9424;
        case 0x4c9428u: goto label_4c9428;
        case 0x4c942cu: goto label_4c942c;
        case 0x4c9430u: goto label_4c9430;
        case 0x4c9434u: goto label_4c9434;
        case 0x4c9438u: goto label_4c9438;
        case 0x4c943cu: goto label_4c943c;
        case 0x4c9440u: goto label_4c9440;
        case 0x4c9444u: goto label_4c9444;
        case 0x4c9448u: goto label_4c9448;
        case 0x4c944cu: goto label_4c944c;
        case 0x4c9450u: goto label_4c9450;
        case 0x4c9454u: goto label_4c9454;
        case 0x4c9458u: goto label_4c9458;
        case 0x4c945cu: goto label_4c945c;
        case 0x4c9460u: goto label_4c9460;
        case 0x4c9464u: goto label_4c9464;
        case 0x4c9468u: goto label_4c9468;
        case 0x4c946cu: goto label_4c946c;
        case 0x4c9470u: goto label_4c9470;
        case 0x4c9474u: goto label_4c9474;
        case 0x4c9478u: goto label_4c9478;
        case 0x4c947cu: goto label_4c947c;
        case 0x4c9480u: goto label_4c9480;
        case 0x4c9484u: goto label_4c9484;
        case 0x4c9488u: goto label_4c9488;
        case 0x4c948cu: goto label_4c948c;
        case 0x4c9490u: goto label_4c9490;
        case 0x4c9494u: goto label_4c9494;
        case 0x4c9498u: goto label_4c9498;
        case 0x4c949cu: goto label_4c949c;
        case 0x4c94a0u: goto label_4c94a0;
        case 0x4c94a4u: goto label_4c94a4;
        case 0x4c94a8u: goto label_4c94a8;
        case 0x4c94acu: goto label_4c94ac;
        case 0x4c94b0u: goto label_4c94b0;
        case 0x4c94b4u: goto label_4c94b4;
        case 0x4c94b8u: goto label_4c94b8;
        case 0x4c94bcu: goto label_4c94bc;
        case 0x4c94c0u: goto label_4c94c0;
        case 0x4c94c4u: goto label_4c94c4;
        case 0x4c94c8u: goto label_4c94c8;
        case 0x4c94ccu: goto label_4c94cc;
        case 0x4c94d0u: goto label_4c94d0;
        case 0x4c94d4u: goto label_4c94d4;
        case 0x4c94d8u: goto label_4c94d8;
        case 0x4c94dcu: goto label_4c94dc;
        case 0x4c94e0u: goto label_4c94e0;
        case 0x4c94e4u: goto label_4c94e4;
        case 0x4c94e8u: goto label_4c94e8;
        case 0x4c94ecu: goto label_4c94ec;
        case 0x4c94f0u: goto label_4c94f0;
        case 0x4c94f4u: goto label_4c94f4;
        case 0x4c94f8u: goto label_4c94f8;
        case 0x4c94fcu: goto label_4c94fc;
        case 0x4c9500u: goto label_4c9500;
        case 0x4c9504u: goto label_4c9504;
        case 0x4c9508u: goto label_4c9508;
        case 0x4c950cu: goto label_4c950c;
        case 0x4c9510u: goto label_4c9510;
        case 0x4c9514u: goto label_4c9514;
        case 0x4c9518u: goto label_4c9518;
        case 0x4c951cu: goto label_4c951c;
        case 0x4c9520u: goto label_4c9520;
        case 0x4c9524u: goto label_4c9524;
        case 0x4c9528u: goto label_4c9528;
        case 0x4c952cu: goto label_4c952c;
        case 0x4c9530u: goto label_4c9530;
        case 0x4c9534u: goto label_4c9534;
        case 0x4c9538u: goto label_4c9538;
        case 0x4c953cu: goto label_4c953c;
        case 0x4c9540u: goto label_4c9540;
        case 0x4c9544u: goto label_4c9544;
        case 0x4c9548u: goto label_4c9548;
        case 0x4c954cu: goto label_4c954c;
        case 0x4c9550u: goto label_4c9550;
        case 0x4c9554u: goto label_4c9554;
        case 0x4c9558u: goto label_4c9558;
        case 0x4c955cu: goto label_4c955c;
        case 0x4c9560u: goto label_4c9560;
        case 0x4c9564u: goto label_4c9564;
        case 0x4c9568u: goto label_4c9568;
        case 0x4c956cu: goto label_4c956c;
        case 0x4c9570u: goto label_4c9570;
        case 0x4c9574u: goto label_4c9574;
        case 0x4c9578u: goto label_4c9578;
        case 0x4c957cu: goto label_4c957c;
        case 0x4c9580u: goto label_4c9580;
        case 0x4c9584u: goto label_4c9584;
        case 0x4c9588u: goto label_4c9588;
        case 0x4c958cu: goto label_4c958c;
        case 0x4c9590u: goto label_4c9590;
        case 0x4c9594u: goto label_4c9594;
        case 0x4c9598u: goto label_4c9598;
        case 0x4c959cu: goto label_4c959c;
        case 0x4c95a0u: goto label_4c95a0;
        case 0x4c95a4u: goto label_4c95a4;
        case 0x4c95a8u: goto label_4c95a8;
        case 0x4c95acu: goto label_4c95ac;
        case 0x4c95b0u: goto label_4c95b0;
        case 0x4c95b4u: goto label_4c95b4;
        case 0x4c95b8u: goto label_4c95b8;
        case 0x4c95bcu: goto label_4c95bc;
        case 0x4c95c0u: goto label_4c95c0;
        case 0x4c95c4u: goto label_4c95c4;
        case 0x4c95c8u: goto label_4c95c8;
        case 0x4c95ccu: goto label_4c95cc;
        case 0x4c95d0u: goto label_4c95d0;
        case 0x4c95d4u: goto label_4c95d4;
        case 0x4c95d8u: goto label_4c95d8;
        case 0x4c95dcu: goto label_4c95dc;
        case 0x4c95e0u: goto label_4c95e0;
        case 0x4c95e4u: goto label_4c95e4;
        case 0x4c95e8u: goto label_4c95e8;
        case 0x4c95ecu: goto label_4c95ec;
        case 0x4c95f0u: goto label_4c95f0;
        case 0x4c95f4u: goto label_4c95f4;
        case 0x4c95f8u: goto label_4c95f8;
        case 0x4c95fcu: goto label_4c95fc;
        case 0x4c9600u: goto label_4c9600;
        case 0x4c9604u: goto label_4c9604;
        case 0x4c9608u: goto label_4c9608;
        case 0x4c960cu: goto label_4c960c;
        case 0x4c9610u: goto label_4c9610;
        case 0x4c9614u: goto label_4c9614;
        case 0x4c9618u: goto label_4c9618;
        case 0x4c961cu: goto label_4c961c;
        case 0x4c9620u: goto label_4c9620;
        case 0x4c9624u: goto label_4c9624;
        case 0x4c9628u: goto label_4c9628;
        case 0x4c962cu: goto label_4c962c;
        case 0x4c9630u: goto label_4c9630;
        case 0x4c9634u: goto label_4c9634;
        case 0x4c9638u: goto label_4c9638;
        case 0x4c963cu: goto label_4c963c;
        case 0x4c9640u: goto label_4c9640;
        case 0x4c9644u: goto label_4c9644;
        case 0x4c9648u: goto label_4c9648;
        case 0x4c964cu: goto label_4c964c;
        case 0x4c9650u: goto label_4c9650;
        case 0x4c9654u: goto label_4c9654;
        case 0x4c9658u: goto label_4c9658;
        case 0x4c965cu: goto label_4c965c;
        case 0x4c9660u: goto label_4c9660;
        case 0x4c9664u: goto label_4c9664;
        case 0x4c9668u: goto label_4c9668;
        case 0x4c966cu: goto label_4c966c;
        case 0x4c9670u: goto label_4c9670;
        case 0x4c9674u: goto label_4c9674;
        case 0x4c9678u: goto label_4c9678;
        case 0x4c967cu: goto label_4c967c;
        case 0x4c9680u: goto label_4c9680;
        case 0x4c9684u: goto label_4c9684;
        case 0x4c9688u: goto label_4c9688;
        case 0x4c968cu: goto label_4c968c;
        case 0x4c9690u: goto label_4c9690;
        case 0x4c9694u: goto label_4c9694;
        case 0x4c9698u: goto label_4c9698;
        case 0x4c969cu: goto label_4c969c;
        case 0x4c96a0u: goto label_4c96a0;
        case 0x4c96a4u: goto label_4c96a4;
        case 0x4c96a8u: goto label_4c96a8;
        case 0x4c96acu: goto label_4c96ac;
        case 0x4c96b0u: goto label_4c96b0;
        case 0x4c96b4u: goto label_4c96b4;
        case 0x4c96b8u: goto label_4c96b8;
        case 0x4c96bcu: goto label_4c96bc;
        case 0x4c96c0u: goto label_4c96c0;
        case 0x4c96c4u: goto label_4c96c4;
        case 0x4c96c8u: goto label_4c96c8;
        case 0x4c96ccu: goto label_4c96cc;
        case 0x4c96d0u: goto label_4c96d0;
        case 0x4c96d4u: goto label_4c96d4;
        case 0x4c96d8u: goto label_4c96d8;
        case 0x4c96dcu: goto label_4c96dc;
        case 0x4c96e0u: goto label_4c96e0;
        case 0x4c96e4u: goto label_4c96e4;
        case 0x4c96e8u: goto label_4c96e8;
        case 0x4c96ecu: goto label_4c96ec;
        case 0x4c96f0u: goto label_4c96f0;
        case 0x4c96f4u: goto label_4c96f4;
        case 0x4c96f8u: goto label_4c96f8;
        case 0x4c96fcu: goto label_4c96fc;
        case 0x4c9700u: goto label_4c9700;
        case 0x4c9704u: goto label_4c9704;
        case 0x4c9708u: goto label_4c9708;
        case 0x4c970cu: goto label_4c970c;
        case 0x4c9710u: goto label_4c9710;
        case 0x4c9714u: goto label_4c9714;
        case 0x4c9718u: goto label_4c9718;
        case 0x4c971cu: goto label_4c971c;
        case 0x4c9720u: goto label_4c9720;
        case 0x4c9724u: goto label_4c9724;
        case 0x4c9728u: goto label_4c9728;
        case 0x4c972cu: goto label_4c972c;
        case 0x4c9730u: goto label_4c9730;
        case 0x4c9734u: goto label_4c9734;
        case 0x4c9738u: goto label_4c9738;
        case 0x4c973cu: goto label_4c973c;
        case 0x4c9740u: goto label_4c9740;
        case 0x4c9744u: goto label_4c9744;
        case 0x4c9748u: goto label_4c9748;
        case 0x4c974cu: goto label_4c974c;
        case 0x4c9750u: goto label_4c9750;
        case 0x4c9754u: goto label_4c9754;
        case 0x4c9758u: goto label_4c9758;
        case 0x4c975cu: goto label_4c975c;
        case 0x4c9760u: goto label_4c9760;
        case 0x4c9764u: goto label_4c9764;
        case 0x4c9768u: goto label_4c9768;
        case 0x4c976cu: goto label_4c976c;
        case 0x4c9770u: goto label_4c9770;
        case 0x4c9774u: goto label_4c9774;
        case 0x4c9778u: goto label_4c9778;
        case 0x4c977cu: goto label_4c977c;
        case 0x4c9780u: goto label_4c9780;
        case 0x4c9784u: goto label_4c9784;
        case 0x4c9788u: goto label_4c9788;
        case 0x4c978cu: goto label_4c978c;
        case 0x4c9790u: goto label_4c9790;
        case 0x4c9794u: goto label_4c9794;
        case 0x4c9798u: goto label_4c9798;
        case 0x4c979cu: goto label_4c979c;
        case 0x4c97a0u: goto label_4c97a0;
        case 0x4c97a4u: goto label_4c97a4;
        case 0x4c97a8u: goto label_4c97a8;
        case 0x4c97acu: goto label_4c97ac;
        case 0x4c97b0u: goto label_4c97b0;
        case 0x4c97b4u: goto label_4c97b4;
        case 0x4c97b8u: goto label_4c97b8;
        case 0x4c97bcu: goto label_4c97bc;
        case 0x4c97c0u: goto label_4c97c0;
        case 0x4c97c4u: goto label_4c97c4;
        case 0x4c97c8u: goto label_4c97c8;
        case 0x4c97ccu: goto label_4c97cc;
        case 0x4c97d0u: goto label_4c97d0;
        case 0x4c97d4u: goto label_4c97d4;
        case 0x4c97d8u: goto label_4c97d8;
        case 0x4c97dcu: goto label_4c97dc;
        case 0x4c97e0u: goto label_4c97e0;
        case 0x4c97e4u: goto label_4c97e4;
        case 0x4c97e8u: goto label_4c97e8;
        case 0x4c97ecu: goto label_4c97ec;
        case 0x4c97f0u: goto label_4c97f0;
        case 0x4c97f4u: goto label_4c97f4;
        case 0x4c97f8u: goto label_4c97f8;
        case 0x4c97fcu: goto label_4c97fc;
        case 0x4c9800u: goto label_4c9800;
        case 0x4c9804u: goto label_4c9804;
        case 0x4c9808u: goto label_4c9808;
        case 0x4c980cu: goto label_4c980c;
        case 0x4c9810u: goto label_4c9810;
        case 0x4c9814u: goto label_4c9814;
        case 0x4c9818u: goto label_4c9818;
        case 0x4c981cu: goto label_4c981c;
        case 0x4c9820u: goto label_4c9820;
        case 0x4c9824u: goto label_4c9824;
        case 0x4c9828u: goto label_4c9828;
        case 0x4c982cu: goto label_4c982c;
        case 0x4c9830u: goto label_4c9830;
        case 0x4c9834u: goto label_4c9834;
        case 0x4c9838u: goto label_4c9838;
        case 0x4c983cu: goto label_4c983c;
        case 0x4c9840u: goto label_4c9840;
        case 0x4c9844u: goto label_4c9844;
        case 0x4c9848u: goto label_4c9848;
        case 0x4c984cu: goto label_4c984c;
        case 0x4c9850u: goto label_4c9850;
        case 0x4c9854u: goto label_4c9854;
        case 0x4c9858u: goto label_4c9858;
        case 0x4c985cu: goto label_4c985c;
        case 0x4c9860u: goto label_4c9860;
        case 0x4c9864u: goto label_4c9864;
        case 0x4c9868u: goto label_4c9868;
        case 0x4c986cu: goto label_4c986c;
        case 0x4c9870u: goto label_4c9870;
        case 0x4c9874u: goto label_4c9874;
        case 0x4c9878u: goto label_4c9878;
        case 0x4c987cu: goto label_4c987c;
        case 0x4c9880u: goto label_4c9880;
        case 0x4c9884u: goto label_4c9884;
        case 0x4c9888u: goto label_4c9888;
        case 0x4c988cu: goto label_4c988c;
        case 0x4c9890u: goto label_4c9890;
        case 0x4c9894u: goto label_4c9894;
        case 0x4c9898u: goto label_4c9898;
        case 0x4c989cu: goto label_4c989c;
        case 0x4c98a0u: goto label_4c98a0;
        case 0x4c98a4u: goto label_4c98a4;
        case 0x4c98a8u: goto label_4c98a8;
        case 0x4c98acu: goto label_4c98ac;
        case 0x4c98b0u: goto label_4c98b0;
        case 0x4c98b4u: goto label_4c98b4;
        case 0x4c98b8u: goto label_4c98b8;
        case 0x4c98bcu: goto label_4c98bc;
        case 0x4c98c0u: goto label_4c98c0;
        case 0x4c98c4u: goto label_4c98c4;
        case 0x4c98c8u: goto label_4c98c8;
        case 0x4c98ccu: goto label_4c98cc;
        case 0x4c98d0u: goto label_4c98d0;
        case 0x4c98d4u: goto label_4c98d4;
        case 0x4c98d8u: goto label_4c98d8;
        case 0x4c98dcu: goto label_4c98dc;
        case 0x4c98e0u: goto label_4c98e0;
        case 0x4c98e4u: goto label_4c98e4;
        case 0x4c98e8u: goto label_4c98e8;
        case 0x4c98ecu: goto label_4c98ec;
        case 0x4c98f0u: goto label_4c98f0;
        case 0x4c98f4u: goto label_4c98f4;
        case 0x4c98f8u: goto label_4c98f8;
        case 0x4c98fcu: goto label_4c98fc;
        case 0x4c9900u: goto label_4c9900;
        case 0x4c9904u: goto label_4c9904;
        case 0x4c9908u: goto label_4c9908;
        case 0x4c990cu: goto label_4c990c;
        case 0x4c9910u: goto label_4c9910;
        case 0x4c9914u: goto label_4c9914;
        case 0x4c9918u: goto label_4c9918;
        case 0x4c991cu: goto label_4c991c;
        case 0x4c9920u: goto label_4c9920;
        case 0x4c9924u: goto label_4c9924;
        case 0x4c9928u: goto label_4c9928;
        case 0x4c992cu: goto label_4c992c;
        case 0x4c9930u: goto label_4c9930;
        case 0x4c9934u: goto label_4c9934;
        case 0x4c9938u: goto label_4c9938;
        case 0x4c993cu: goto label_4c993c;
        case 0x4c9940u: goto label_4c9940;
        case 0x4c9944u: goto label_4c9944;
        case 0x4c9948u: goto label_4c9948;
        case 0x4c994cu: goto label_4c994c;
        case 0x4c9950u: goto label_4c9950;
        case 0x4c9954u: goto label_4c9954;
        case 0x4c9958u: goto label_4c9958;
        case 0x4c995cu: goto label_4c995c;
        case 0x4c9960u: goto label_4c9960;
        case 0x4c9964u: goto label_4c9964;
        case 0x4c9968u: goto label_4c9968;
        case 0x4c996cu: goto label_4c996c;
        case 0x4c9970u: goto label_4c9970;
        case 0x4c9974u: goto label_4c9974;
        case 0x4c9978u: goto label_4c9978;
        case 0x4c997cu: goto label_4c997c;
        case 0x4c9980u: goto label_4c9980;
        case 0x4c9984u: goto label_4c9984;
        case 0x4c9988u: goto label_4c9988;
        case 0x4c998cu: goto label_4c998c;
        case 0x4c9990u: goto label_4c9990;
        case 0x4c9994u: goto label_4c9994;
        case 0x4c9998u: goto label_4c9998;
        case 0x4c999cu: goto label_4c999c;
        case 0x4c99a0u: goto label_4c99a0;
        case 0x4c99a4u: goto label_4c99a4;
        case 0x4c99a8u: goto label_4c99a8;
        case 0x4c99acu: goto label_4c99ac;
        case 0x4c99b0u: goto label_4c99b0;
        case 0x4c99b4u: goto label_4c99b4;
        case 0x4c99b8u: goto label_4c99b8;
        case 0x4c99bcu: goto label_4c99bc;
        case 0x4c99c0u: goto label_4c99c0;
        case 0x4c99c4u: goto label_4c99c4;
        case 0x4c99c8u: goto label_4c99c8;
        case 0x4c99ccu: goto label_4c99cc;
        case 0x4c99d0u: goto label_4c99d0;
        case 0x4c99d4u: goto label_4c99d4;
        case 0x4c99d8u: goto label_4c99d8;
        case 0x4c99dcu: goto label_4c99dc;
        case 0x4c99e0u: goto label_4c99e0;
        case 0x4c99e4u: goto label_4c99e4;
        case 0x4c99e8u: goto label_4c99e8;
        case 0x4c99ecu: goto label_4c99ec;
        case 0x4c99f0u: goto label_4c99f0;
        case 0x4c99f4u: goto label_4c99f4;
        case 0x4c99f8u: goto label_4c99f8;
        case 0x4c99fcu: goto label_4c99fc;
        case 0x4c9a00u: goto label_4c9a00;
        case 0x4c9a04u: goto label_4c9a04;
        case 0x4c9a08u: goto label_4c9a08;
        case 0x4c9a0cu: goto label_4c9a0c;
        case 0x4c9a10u: goto label_4c9a10;
        case 0x4c9a14u: goto label_4c9a14;
        case 0x4c9a18u: goto label_4c9a18;
        case 0x4c9a1cu: goto label_4c9a1c;
        case 0x4c9a20u: goto label_4c9a20;
        case 0x4c9a24u: goto label_4c9a24;
        case 0x4c9a28u: goto label_4c9a28;
        case 0x4c9a2cu: goto label_4c9a2c;
        case 0x4c9a30u: goto label_4c9a30;
        case 0x4c9a34u: goto label_4c9a34;
        case 0x4c9a38u: goto label_4c9a38;
        case 0x4c9a3cu: goto label_4c9a3c;
        case 0x4c9a40u: goto label_4c9a40;
        case 0x4c9a44u: goto label_4c9a44;
        case 0x4c9a48u: goto label_4c9a48;
        case 0x4c9a4cu: goto label_4c9a4c;
        case 0x4c9a50u: goto label_4c9a50;
        case 0x4c9a54u: goto label_4c9a54;
        case 0x4c9a58u: goto label_4c9a58;
        case 0x4c9a5cu: goto label_4c9a5c;
        case 0x4c9a60u: goto label_4c9a60;
        case 0x4c9a64u: goto label_4c9a64;
        case 0x4c9a68u: goto label_4c9a68;
        case 0x4c9a6cu: goto label_4c9a6c;
        case 0x4c9a70u: goto label_4c9a70;
        case 0x4c9a74u: goto label_4c9a74;
        case 0x4c9a78u: goto label_4c9a78;
        case 0x4c9a7cu: goto label_4c9a7c;
        case 0x4c9a80u: goto label_4c9a80;
        case 0x4c9a84u: goto label_4c9a84;
        case 0x4c9a88u: goto label_4c9a88;
        case 0x4c9a8cu: goto label_4c9a8c;
        case 0x4c9a90u: goto label_4c9a90;
        case 0x4c9a94u: goto label_4c9a94;
        case 0x4c9a98u: goto label_4c9a98;
        case 0x4c9a9cu: goto label_4c9a9c;
        default: break;
    }

    ctx->pc = 0x4c92f0u;

label_4c92f0:
    // 0x4c92f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4c92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4c92f4:
    // 0x4c92f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4c92f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4c92f8:
    // 0x4c92f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4c92f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4c92fc:
    // 0x4c92fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c92fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c9300:
    // 0x4c9300: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c9300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c9304:
    // 0x4c9304: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x4c9304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4c9308:
    // 0x4c9308: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c9308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c930c:
    // 0x4c930c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4c930cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4c9310:
    // 0x4c9310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c9310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c9314:
    // 0x4c9314: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4c9314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4c9318:
    // 0x4c9318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c931c:
    // 0x4c931c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4c931cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9320:
    // 0x4c9320: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4c9320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4c9324:
    // 0x4c9324: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_4c9328:
    if (ctx->pc == 0x4C9328u) {
        ctx->pc = 0x4C9328u;
            // 0x4c9328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C932Cu;
        goto label_4c932c;
    }
    ctx->pc = 0x4C9324u;
    {
        const bool branch_taken_0x4c9324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9324u;
            // 0x4c9328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9324) {
            ctx->pc = 0x4C9524u;
            goto label_4c9524;
        }
    }
    ctx->pc = 0x4C932Cu;
label_4c932c:
    // 0x4c932c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c9330:
    // 0x4c9330: 0xc04f278  jal         func_13C9E0
label_4c9334:
    if (ctx->pc == 0x4C9334u) {
        ctx->pc = 0x4C9334u;
            // 0x4c9334: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4C9338u;
        goto label_4c9338;
    }
    ctx->pc = 0x4C9330u;
    SET_GPR_U32(ctx, 31, 0x4C9338u);
    ctx->pc = 0x4C9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9330u;
            // 0x4c9334: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9338u; }
        if (ctx->pc != 0x4C9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9338u; }
        if (ctx->pc != 0x4C9338u) { return; }
    }
    ctx->pc = 0x4C9338u;
label_4c9338:
    // 0x4c9338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c933c:
    // 0x4c933c: 0xc04ce80  jal         func_133A00
label_4c9340:
    if (ctx->pc == 0x4C9340u) {
        ctx->pc = 0x4C9340u;
            // 0x4c9340: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4C9344u;
        goto label_4c9344;
    }
    ctx->pc = 0x4C933Cu;
    SET_GPR_U32(ctx, 31, 0x4C9344u);
    ctx->pc = 0x4C9340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C933Cu;
            // 0x4c9340: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9344u; }
        if (ctx->pc != 0x4C9344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9344u; }
        if (ctx->pc != 0x4C9344u) { return; }
    }
    ctx->pc = 0x4C9344u;
label_4c9344:
    // 0x4c9344: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x4c9344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4c9348:
    // 0x4c9348: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c9348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c934c:
    // 0x4c934c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c934cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c9350:
    // 0x4c9350: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4c9350u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4c9354:
    // 0x4c9354: 0xc04ce50  jal         func_133940
label_4c9358:
    if (ctx->pc == 0x4C9358u) {
        ctx->pc = 0x4C9358u;
            // 0x4c9358: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4C935Cu;
        goto label_4c935c;
    }
    ctx->pc = 0x4C9354u;
    SET_GPR_U32(ctx, 31, 0x4C935Cu);
    ctx->pc = 0x4C9358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9354u;
            // 0x4c9358: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C935Cu; }
        if (ctx->pc != 0x4C935Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C935Cu; }
        if (ctx->pc != 0x4C935Cu) { return; }
    }
    ctx->pc = 0x4C935Cu;
label_4c935c:
    // 0x4c935c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c935cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c9360:
    // 0x4c9360: 0x9226004c  lbu         $a2, 0x4C($s1)
    ctx->pc = 0x4c9360u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 76)));
label_4c9364:
    // 0x4c9364: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4c9364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4c9368:
    // 0x4c9368: 0xc07698c  jal         func_1DA630
label_4c936c:
    if (ctx->pc == 0x4C936Cu) {
        ctx->pc = 0x4C936Cu;
            // 0x4c936c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9370u;
        goto label_4c9370;
    }
    ctx->pc = 0x4C9368u;
    SET_GPR_U32(ctx, 31, 0x4C9370u);
    ctx->pc = 0x4C936Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9368u;
            // 0x4c936c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9370u; }
        if (ctx->pc != 0x4C9370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9370u; }
        if (ctx->pc != 0x4C9370u) { return; }
    }
    ctx->pc = 0x4C9370u;
label_4c9370:
    // 0x4c9370: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c9370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c9374:
    // 0x4c9374: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4c9378:
    if (ctx->pc == 0x4C9378u) {
        ctx->pc = 0x4C937Cu;
        goto label_4c937c;
    }
    ctx->pc = 0x4C9374u;
    {
        const bool branch_taken_0x4c9374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c9374) {
            ctx->pc = 0x4C9384u;
            goto label_4c9384;
        }
    }
    ctx->pc = 0x4C937Cu;
label_4c937c:
    // 0x4c937c: 0x10000033  b           . + 4 + (0x33 << 2)
label_4c9380:
    if (ctx->pc == 0x4C9380u) {
        ctx->pc = 0x4C9380u;
            // 0x4c9380: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4C9384u;
        goto label_4c9384;
    }
    ctx->pc = 0x4C937Cu;
    {
        const bool branch_taken_0x4c937c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C937Cu;
            // 0x4c9380: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c937c) {
            ctx->pc = 0x4C944Cu;
            goto label_4c944c;
        }
    }
    ctx->pc = 0x4C9384u;
label_4c9384:
    // 0x4c9384: 0xc0576f4  jal         func_15DBD0
label_4c9388:
    if (ctx->pc == 0x4C9388u) {
        ctx->pc = 0x4C938Cu;
        goto label_4c938c;
    }
    ctx->pc = 0x4C9384u;
    SET_GPR_U32(ctx, 31, 0x4C938Cu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C938Cu; }
        if (ctx->pc != 0x4C938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C938Cu; }
        if (ctx->pc != 0x4C938Cu) { return; }
    }
    ctx->pc = 0x4C938Cu;
label_4c938c:
    // 0x4c938c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4c938cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c9390:
    // 0x4c9390: 0xc076984  jal         func_1DA610
label_4c9394:
    if (ctx->pc == 0x4C9394u) {
        ctx->pc = 0x4C9394u;
            // 0x4c9394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9398u;
        goto label_4c9398;
    }
    ctx->pc = 0x4C9390u;
    SET_GPR_U32(ctx, 31, 0x4C9398u);
    ctx->pc = 0x4C9394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9390u;
            // 0x4c9394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9398u; }
        if (ctx->pc != 0x4C9398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9398u; }
        if (ctx->pc != 0x4C9398u) { return; }
    }
    ctx->pc = 0x4C9398u;
label_4c9398:
    // 0x4c9398: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4c9398u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c939c:
    // 0x4c939c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4c939cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4c93a0:
    // 0x4c93a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c93a4:
    // 0x4c93a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4c93a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c93a8:
    // 0x4c93a8: 0xc442c830  lwc1        $f2, -0x37D0($v0)
    ctx->pc = 0x4c93a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c93ac:
    // 0x4c93ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4c93acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c93b0:
    // 0x4c93b0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c93b4:
    // 0x4c93b4: 0xc441c838  lwc1        $f1, -0x37C8($v0)
    ctx->pc = 0x4c93b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c93b8:
    // 0x4c93b8: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4c93b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4c93bc:
    // 0x4c93bc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c93c0:
    // 0x4c93c0: 0xc440c83c  lwc1        $f0, -0x37C4($v0)
    ctx->pc = 0x4c93c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953020)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c93c4:
    // 0x4c93c4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4c93c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4c93c8:
    // 0x4c93c8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4c93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4c93cc:
    // 0x4c93cc: 0x8c42c834  lw          $v0, -0x37CC($v0)
    ctx->pc = 0x4c93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953012)));
label_4c93d0:
    // 0x4c93d0: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4c93d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4c93d4:
    // 0x4c93d4: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4c93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4c93d8:
    // 0x4c93d8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x4c93d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c93dc:
    // 0x4c93dc: 0xc04cca0  jal         func_133280
label_4c93e0:
    if (ctx->pc == 0x4C93E0u) {
        ctx->pc = 0x4C93E0u;
            // 0x4c93e0: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4C93E4u;
        goto label_4c93e4;
    }
    ctx->pc = 0x4C93DCu;
    SET_GPR_U32(ctx, 31, 0x4C93E4u);
    ctx->pc = 0x4C93E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C93DCu;
            // 0x4c93e0: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C93E4u; }
        if (ctx->pc != 0x4C93E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C93E4u; }
        if (ctx->pc != 0x4C93E4u) { return; }
    }
    ctx->pc = 0x4C93E4u;
label_4c93e4:
    // 0x4c93e4: 0xc076980  jal         func_1DA600
label_4c93e8:
    if (ctx->pc == 0x4C93E8u) {
        ctx->pc = 0x4C93E8u;
            // 0x4c93e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C93ECu;
        goto label_4c93ec;
    }
    ctx->pc = 0x4C93E4u;
    SET_GPR_U32(ctx, 31, 0x4C93ECu);
    ctx->pc = 0x4C93E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C93E4u;
            // 0x4c93e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C93ECu; }
        if (ctx->pc != 0x4C93ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C93ECu; }
        if (ctx->pc != 0x4C93ECu) { return; }
    }
    ctx->pc = 0x4C93ECu;
label_4c93ec:
    // 0x4c93ec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4c93ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4c93f0:
    // 0x4c93f0: 0xc04cc34  jal         func_1330D0
label_4c93f4:
    if (ctx->pc == 0x4C93F4u) {
        ctx->pc = 0x4C93F4u;
            // 0x4c93f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C93F8u;
        goto label_4c93f8;
    }
    ctx->pc = 0x4C93F0u;
    SET_GPR_U32(ctx, 31, 0x4C93F8u);
    ctx->pc = 0x4C93F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C93F0u;
            // 0x4c93f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C93F8u; }
        if (ctx->pc != 0x4C93F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C93F8u; }
        if (ctx->pc != 0x4C93F8u) { return; }
    }
    ctx->pc = 0x4C93F8u;
label_4c93f8:
    // 0x4c93f8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4c93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4c93fc:
    // 0x4c93fc: 0xc4617430  lwc1        $f1, 0x7430($v1)
    ctx->pc = 0x4c93fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 29744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c9400:
    // 0x4c9400: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4c9400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c9404:
    // 0x4c9404: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4c9408:
    if (ctx->pc == 0x4C9408u) {
        ctx->pc = 0x4C9408u;
            // 0x4c9408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C940Cu;
        goto label_4c940c;
    }
    ctx->pc = 0x4C9404u;
    {
        const bool branch_taken_0x4c9404 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c9404) {
            ctx->pc = 0x4C9408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9404u;
            // 0x4c9408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9414u;
            goto label_4c9414;
        }
    }
    ctx->pc = 0x4C940Cu;
label_4c940c:
    // 0x4c940c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4c9410:
    if (ctx->pc == 0x4C9410u) {
        ctx->pc = 0x4C9410u;
            // 0x4c9410: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4C9414u;
        goto label_4c9414;
    }
    ctx->pc = 0x4C940Cu;
    {
        const bool branch_taken_0x4c940c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C940Cu;
            // 0x4c9410: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c940c) {
            ctx->pc = 0x4C944Cu;
            goto label_4c944c;
        }
    }
    ctx->pc = 0x4C9414u;
label_4c9414:
    // 0x4c9414: 0xc07697c  jal         func_1DA5F0
label_4c9418:
    if (ctx->pc == 0x4C9418u) {
        ctx->pc = 0x4C941Cu;
        goto label_4c941c;
    }
    ctx->pc = 0x4C9414u;
    SET_GPR_U32(ctx, 31, 0x4C941Cu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C941Cu; }
        if (ctx->pc != 0x4C941Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C941Cu; }
        if (ctx->pc != 0x4C941Cu) { return; }
    }
    ctx->pc = 0x4C941Cu;
label_4c941c:
    // 0x4c941c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4c941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4c9420:
    // 0x4c9420: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4c9420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4c9424:
    // 0x4c9424: 0xc04cd60  jal         func_133580
label_4c9428:
    if (ctx->pc == 0x4C9428u) {
        ctx->pc = 0x4C9428u;
            // 0x4c9428: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C942Cu;
        goto label_4c942c;
    }
    ctx->pc = 0x4C9424u;
    SET_GPR_U32(ctx, 31, 0x4C942Cu);
    ctx->pc = 0x4C9428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9424u;
            // 0x4c9428: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C942Cu; }
        if (ctx->pc != 0x4C942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C942Cu; }
        if (ctx->pc != 0x4C942Cu) { return; }
    }
    ctx->pc = 0x4C942Cu;
label_4c942c:
    // 0x4c942c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c9430:
    // 0x4c9430: 0xc04c650  jal         func_131940
label_4c9434:
    if (ctx->pc == 0x4C9434u) {
        ctx->pc = 0x4C9434u;
            // 0x4c9434: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4C9438u;
        goto label_4c9438;
    }
    ctx->pc = 0x4C9430u;
    SET_GPR_U32(ctx, 31, 0x4C9438u);
    ctx->pc = 0x4C9434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9430u;
            // 0x4c9434: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9438u; }
        if (ctx->pc != 0x4C9438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9438u; }
        if (ctx->pc != 0x4C9438u) { return; }
    }
    ctx->pc = 0x4C9438u;
label_4c9438:
    // 0x4c9438: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4c9438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4c943c:
    // 0x4c943c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4c943cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4c9440:
    // 0x4c9440: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4c9440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4c9444:
    // 0x4c9444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4c9444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4c9448:
    // 0x4c9448: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4c9448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4c944c:
    // 0x4c944c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4c944cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4c9450:
    // 0x4c9450: 0x10200034  beqz        $at, . + 4 + (0x34 << 2)
label_4c9454:
    if (ctx->pc == 0x4C9454u) {
        ctx->pc = 0x4C9454u;
            // 0x4c9454: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4C9458u;
        goto label_4c9458;
    }
    ctx->pc = 0x4C9450u;
    {
        const bool branch_taken_0x4c9450 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9450u;
            // 0x4c9454: 0xae230044  sw          $v1, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9450) {
            ctx->pc = 0x4C9524u;
            goto label_4c9524;
        }
    }
    ctx->pc = 0x4C9458u;
label_4c9458:
    // 0x4c9458: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c9458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c945c:
    // 0x4c945c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c945cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9460:
    // 0x4c9460: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x4c9460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c9464:
    // 0x4c9464: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4c9464u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4c9468:
    // 0x4c9468: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x4c9468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_4c946c:
    // 0x4c946c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c946cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c9470:
    // 0x4c9470: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x4c9470u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4c9474:
    // 0x4c9474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9478:
    // 0x4c9478: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4c9478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4c947c:
    // 0x4c947c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4c947cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4c9480:
    // 0x4c9480: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x4c9480u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_4c9484:
    // 0x4c9484: 0x86a821  addu        $s5, $a0, $a2
    ctx->pc = 0x4c9484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4c9488:
    // 0x4c9488: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c9488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c948c:
    // 0x4c948c: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x4c948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_4c9490:
    // 0x4c9490: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9494:
    // 0x4c9494: 0xacb50000  sw          $s5, 0x0($a1)
    ctx->pc = 0x4c9494u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 21));
label_4c9498:
    // 0x4c9498: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4c9498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4c949c:
    // 0x4c949c: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4c949cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4c94a0:
    // 0x4c94a0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4c94a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4c94a4:
    // 0x4c94a4: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x4c94a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4c94a8:
    // 0x4c94a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4c94a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c94ac:
    // 0x4c94ac: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x4c94acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_4c94b0:
    // 0x4c94b0: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x4c94b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4c94b4:
    // 0x4c94b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c94b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c94b8:
    // 0x4c94b8: 0x1099021  addu        $s2, $t0, $t1
    ctx->pc = 0x4c94b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4c94bc:
    // 0x4c94bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c94bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c94c0:
    // 0x4c94c0: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x4c94c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_4c94c4:
    // 0x4c94c4: 0xad120000  sw          $s2, 0x0($t0)
    ctx->pc = 0x4c94c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 18));
label_4c94c8:
    // 0x4c94c8: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4c94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4c94cc:
    // 0x4c94cc: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x4c94ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4c94d0:
    // 0x4c94d0: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x4c94d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4c94d4:
    // 0x4c94d4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4c94d8:
    // 0x4c94d8: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x4c94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_4c94dc:
    // 0x4c94dc: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x4c94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4c94e0:
    // 0x4c94e0: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x4c94e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_4c94e4:
    // 0x4c94e4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x4c94e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_4c94e8:
    // 0x4c94e8: 0xc04e4a4  jal         func_139290
label_4c94ec:
    if (ctx->pc == 0x4C94ECu) {
        ctx->pc = 0x4C94ECu;
            // 0x4c94ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C94F0u;
        goto label_4c94f0;
    }
    ctx->pc = 0x4C94E8u;
    SET_GPR_U32(ctx, 31, 0x4C94F0u);
    ctx->pc = 0x4C94ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C94E8u;
            // 0x4c94ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C94F0u; }
        if (ctx->pc != 0x4C94F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C94F0u; }
        if (ctx->pc != 0x4C94F0u) { return; }
    }
    ctx->pc = 0x4C94F0u;
label_4c94f0:
    // 0x4c94f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4c94f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4c94f4:
    // 0x4c94f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4c94f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c94f8:
    // 0x4c94f8: 0xc04cd60  jal         func_133580
label_4c94fc:
    if (ctx->pc == 0x4C94FCu) {
        ctx->pc = 0x4C94FCu;
            // 0x4c94fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9500u;
        goto label_4c9500;
    }
    ctx->pc = 0x4C94F8u;
    SET_GPR_U32(ctx, 31, 0x4C9500u);
    ctx->pc = 0x4C94FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C94F8u;
            // 0x4c94fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9500u; }
        if (ctx->pc != 0x4C9500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9500u; }
        if (ctx->pc != 0x4C9500u) { return; }
    }
    ctx->pc = 0x4C9500u;
label_4c9500:
    // 0x4c9500: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4c9500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4c9504:
    // 0x4c9504: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4c9504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4c9508:
    // 0x4c9508: 0x320f809  jalr        $t9
label_4c950c:
    if (ctx->pc == 0x4C950Cu) {
        ctx->pc = 0x4C950Cu;
            // 0x4c950c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9510u;
        goto label_4c9510;
    }
    ctx->pc = 0x4C9508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9510u);
        ctx->pc = 0x4C950Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9508u;
            // 0x4c950c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9510u; }
            if (ctx->pc != 0x4C9510u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9510u;
label_4c9510:
    // 0x4c9510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c9510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c9514:
    // 0x4c9514: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4c9514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c9518:
    // 0x4c9518: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4c9518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c951c:
    // 0x4c951c: 0xc054fd4  jal         func_153F50
label_4c9520:
    if (ctx->pc == 0x4C9520u) {
        ctx->pc = 0x4C9520u;
            // 0x4c9520: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9524u;
        goto label_4c9524;
    }
    ctx->pc = 0x4C951Cu;
    SET_GPR_U32(ctx, 31, 0x4C9524u);
    ctx->pc = 0x4C9520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C951Cu;
            // 0x4c9520: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9524u; }
        if (ctx->pc != 0x4C9524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9524u; }
        if (ctx->pc != 0x4C9524u) { return; }
    }
    ctx->pc = 0x4C9524u;
label_4c9524:
    // 0x4c9524: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4c9524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4c9528:
    // 0x4c9528: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4c9528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c952c:
    // 0x4c952c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c952cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c9530:
    // 0x4c9530: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c9530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c9534:
    // 0x4c9534: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c9534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c9538:
    // 0x4c9538: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c9538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c953c:
    // 0x4c953c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c953cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9540:
    // 0x4c9540: 0x3e00008  jr          $ra
label_4c9544:
    if (ctx->pc == 0x4C9544u) {
        ctx->pc = 0x4C9544u;
            // 0x4c9544: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4C9548u;
        goto label_4c9548;
    }
    ctx->pc = 0x4C9540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9540u;
            // 0x4c9544: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9548u;
label_4c9548:
    // 0x4c9548: 0x0  nop
    ctx->pc = 0x4c9548u;
    // NOP
label_4c954c:
    // 0x4c954c: 0x0  nop
    ctx->pc = 0x4c954cu;
    // NOP
label_4c9550:
    // 0x4c9550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c9550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c9554:
    // 0x4c9554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c9554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c9558:
    // 0x4c9558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c955c:
    // 0x4c955c: 0x90830104  lbu         $v1, 0x104($a0)
    ctx->pc = 0x4c955cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 260)));
label_4c9560:
    // 0x4c9560: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_4c9564:
    if (ctx->pc == 0x4C9564u) {
        ctx->pc = 0x4C9564u;
            // 0x4c9564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9568u;
        goto label_4c9568;
    }
    ctx->pc = 0x4C9560u;
    {
        const bool branch_taken_0x4c9560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C9564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9560u;
            // 0x4c9564: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9560) {
            ctx->pc = 0x4C9580u;
            goto label_4c9580;
        }
    }
    ctx->pc = 0x4C9568u;
label_4c9568:
    // 0x4c9568: 0x8e0400dc  lw          $a0, 0xDC($s0)
    ctx->pc = 0x4c9568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_4c956c:
    // 0x4c956c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4c956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c9570:
    // 0x4c9570: 0xc122d2c  jal         func_48B4B0
label_4c9574:
    if (ctx->pc == 0x4C9574u) {
        ctx->pc = 0x4C9574u;
            // 0x4c9574: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4C9578u;
        goto label_4c9578;
    }
    ctx->pc = 0x4C9570u;
    SET_GPR_U32(ctx, 31, 0x4C9578u);
    ctx->pc = 0x4C9574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9570u;
            // 0x4c9574: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9578u; }
        if (ctx->pc != 0x4C9578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9578u; }
        if (ctx->pc != 0x4C9578u) { return; }
    }
    ctx->pc = 0x4C9578u;
label_4c9578:
    // 0x4c9578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4c9578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c957c:
    // 0x4c957c: 0xa2030104  sb          $v1, 0x104($s0)
    ctx->pc = 0x4c957cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 260), (uint8_t)GPR_U32(ctx, 3));
label_4c9580:
    // 0x4c9580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c9580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9584:
    // 0x4c9584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9588:
    // 0x4c9588: 0x3e00008  jr          $ra
label_4c958c:
    if (ctx->pc == 0x4C958Cu) {
        ctx->pc = 0x4C958Cu;
            // 0x4c958c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C9590u;
        goto label_4c9590;
    }
    ctx->pc = 0x4C9588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9588u;
            // 0x4c958c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9590u;
label_4c9590:
    // 0x4c9590: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x4c9590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_4c9594:
    // 0x4c9594: 0x8122c5c  j           func_48B170
label_4c9598:
    if (ctx->pc == 0x4C9598u) {
        ctx->pc = 0x4C9598u;
            // 0x4c9598: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4C959Cu;
        goto label_4c959c;
    }
    ctx->pc = 0x4C9594u;
    ctx->pc = 0x4C9598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9594u;
            // 0x4c9598: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0048B170_0x48b170(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C959Cu;
label_4c959c:
    // 0x4c959c: 0x0  nop
    ctx->pc = 0x4c959cu;
    // NOP
label_4c95a0:
    // 0x4c95a0: 0x3e00008  jr          $ra
label_4c95a4:
    if (ctx->pc == 0x4C95A4u) {
        ctx->pc = 0x4C95A4u;
            // 0x4c95a4: 0x24025dca  addiu       $v0, $zero, 0x5DCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24010));
        ctx->pc = 0x4C95A8u;
        goto label_4c95a8;
    }
    ctx->pc = 0x4C95A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C95A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C95A0u;
            // 0x4c95a4: 0x24025dca  addiu       $v0, $zero, 0x5DCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C95A8u;
label_4c95a8:
    // 0x4c95a8: 0x0  nop
    ctx->pc = 0x4c95a8u;
    // NOP
label_4c95ac:
    // 0x4c95ac: 0x0  nop
    ctx->pc = 0x4c95acu;
    // NOP
label_4c95b0:
    // 0x4c95b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c95b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c95b4:
    // 0x4c95b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c95b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c95b8:
    // 0x4c95b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c95b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c95bc:
    // 0x4c95bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c95bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c95c0:
    // 0x4c95c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c95c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c95c4:
    // 0x4c95c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c95c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c95c8:
    // 0x4c95c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c95c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c95cc:
    // 0x4c95cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c95ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c95d0:
    // 0x4c95d0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4c95d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c95d4:
    // 0x4c95d4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4c95d8:
    if (ctx->pc == 0x4C95D8u) {
        ctx->pc = 0x4C95D8u;
            // 0x4c95d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C95DCu;
        goto label_4c95dc;
    }
    ctx->pc = 0x4C95D4u;
    {
        const bool branch_taken_0x4c95d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C95D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C95D4u;
            // 0x4c95d8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c95d4) {
            ctx->pc = 0x4C9618u;
            goto label_4c9618;
        }
    }
    ctx->pc = 0x4C95DCu;
label_4c95dc:
    // 0x4c95dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c95dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c95e0:
    // 0x4c95e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c95e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c95e4:
    // 0x4c95e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c95e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c95e8:
    // 0x4c95e8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4c95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4c95ec:
    // 0x4c95ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c95f0:
    // 0x4c95f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c95f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c95f4:
    // 0x4c95f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c95f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c95f8:
    // 0x4c95f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c95f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c95fc:
    // 0x4c95fc: 0x320f809  jalr        $t9
label_4c9600:
    if (ctx->pc == 0x4C9600u) {
        ctx->pc = 0x4C9604u;
        goto label_4c9604;
    }
    ctx->pc = 0x4C95FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9604u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9604u; }
            if (ctx->pc != 0x4C9604u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9604u;
label_4c9604:
    // 0x4c9604: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4c9604u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4c9608:
    // 0x4c9608: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c9608u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c960c:
    // 0x4c960c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4c960cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c9610:
    // 0x4c9610: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c9614:
    if (ctx->pc == 0x4C9614u) {
        ctx->pc = 0x4C9614u;
            // 0x4c9614: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C9618u;
        goto label_4c9618;
    }
    ctx->pc = 0x4C9610u;
    {
        const bool branch_taken_0x4c9610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C9614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9610u;
            // 0x4c9614: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9610) {
            ctx->pc = 0x4C95E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c95e8;
        }
    }
    ctx->pc = 0x4C9618u;
label_4c9618:
    // 0x4c9618: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c9618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c961c:
    // 0x4c961c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c961cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c9620:
    // 0x4c9620: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c9620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c9624:
    // 0x4c9624: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c9624u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c9628:
    // 0x4c9628: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c9628u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c962c:
    // 0x4c962c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c962cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9630:
    // 0x4c9630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9634:
    // 0x4c9634: 0x3e00008  jr          $ra
label_4c9638:
    if (ctx->pc == 0x4C9638u) {
        ctx->pc = 0x4C9638u;
            // 0x4c9638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C963Cu;
        goto label_4c963c;
    }
    ctx->pc = 0x4C9634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9634u;
            // 0x4c9638: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C963Cu;
label_4c963c:
    // 0x4c963c: 0x0  nop
    ctx->pc = 0x4c963cu;
    // NOP
label_4c9640:
    // 0x4c9640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c9640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c9644:
    // 0x4c9644: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4c9644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4c9648:
    // 0x4c9648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c9648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c964c:
    // 0x4c964c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4c964cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4c9650:
    // 0x4c9650: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c9650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c9654:
    // 0x4c9654: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4c9654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c9658:
    // 0x4c9658: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c9658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c965c:
    // 0x4c965c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4c965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4c9660:
    // 0x4c9660: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c9660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c9664:
    // 0x4c9664: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4c9664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c9668:
    // 0x4c9668: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4c9668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4c966c:
    // 0x4c966c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4c966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c9670:
    // 0x4c9670: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4c9670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4c9674:
    // 0x4c9674: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4c9674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4c9678:
    // 0x4c9678: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4c9678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4c967c:
    // 0x4c967c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4c967cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4c9680:
    // 0x4c9680: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4c9680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4c9684:
    // 0x4c9684: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4c9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4c9688:
    // 0x4c9688: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4c9688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4c968c:
    // 0x4c968c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4c968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c9690:
    // 0x4c9690: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4c9690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4c9694:
    // 0x4c9694: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4c9694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4c9698:
    // 0x4c9698: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4c9698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4c969c:
    // 0x4c969c: 0xc0a997c  jal         func_2A65F0
label_4c96a0:
    if (ctx->pc == 0x4C96A0u) {
        ctx->pc = 0x4C96A0u;
            // 0x4c96a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4C96A4u;
        goto label_4c96a4;
    }
    ctx->pc = 0x4C969Cu;
    SET_GPR_U32(ctx, 31, 0x4C96A4u);
    ctx->pc = 0x4C96A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C969Cu;
            // 0x4c96a0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C96A4u; }
        if (ctx->pc != 0x4C96A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C96A4u; }
        if (ctx->pc != 0x4C96A4u) { return; }
    }
    ctx->pc = 0x4C96A4u;
label_4c96a4:
    // 0x4c96a4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4c96a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4c96a8:
    // 0x4c96a8: 0xc0d879c  jal         func_361E70
label_4c96ac:
    if (ctx->pc == 0x4C96ACu) {
        ctx->pc = 0x4C96ACu;
            // 0x4c96ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C96B0u;
        goto label_4c96b0;
    }
    ctx->pc = 0x4C96A8u;
    SET_GPR_U32(ctx, 31, 0x4C96B0u);
    ctx->pc = 0x4C96ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C96A8u;
            // 0x4c96ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C96B0u; }
        if (ctx->pc != 0x4C96B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C96B0u; }
        if (ctx->pc != 0x4C96B0u) { return; }
    }
    ctx->pc = 0x4C96B0u;
label_4c96b0:
    // 0x4c96b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c96b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c96b4:
    // 0x4c96b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c96b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c96b8:
    // 0x4c96b8: 0x3e00008  jr          $ra
label_4c96bc:
    if (ctx->pc == 0x4C96BCu) {
        ctx->pc = 0x4C96BCu;
            // 0x4c96bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C96C0u;
        goto label_4c96c0;
    }
    ctx->pc = 0x4C96B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C96BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C96B8u;
            // 0x4c96bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C96C0u;
label_4c96c0:
    // 0x4c96c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4c96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4c96c4:
    // 0x4c96c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4c96c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4c96c8:
    // 0x4c96c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c96cc:
    // 0x4c96cc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4c96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4c96d0:
    // 0x4c96d0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4c96d4:
    if (ctx->pc == 0x4C96D4u) {
        ctx->pc = 0x4C96D4u;
            // 0x4c96d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C96D8u;
        goto label_4c96d8;
    }
    ctx->pc = 0x4C96D0u;
    {
        const bool branch_taken_0x4c96d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C96D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C96D0u;
            // 0x4c96d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c96d0) {
            ctx->pc = 0x4C97F0u;
            goto label_4c97f0;
        }
    }
    ctx->pc = 0x4C96D8u;
label_4c96d8:
    // 0x4c96d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4c96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4c96dc:
    // 0x4c96dc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4c96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4c96e0:
    // 0x4c96e0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4c96e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4c96e4:
    // 0x4c96e4: 0xc075128  jal         func_1D44A0
label_4c96e8:
    if (ctx->pc == 0x4C96E8u) {
        ctx->pc = 0x4C96E8u;
            // 0x4c96e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4C96ECu;
        goto label_4c96ec;
    }
    ctx->pc = 0x4C96E4u;
    SET_GPR_U32(ctx, 31, 0x4C96ECu);
    ctx->pc = 0x4C96E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C96E4u;
            // 0x4c96e8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C96ECu; }
        if (ctx->pc != 0x4C96ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C96ECu; }
        if (ctx->pc != 0x4C96ECu) { return; }
    }
    ctx->pc = 0x4C96ECu;
label_4c96ec:
    // 0x4c96ec: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4c96ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c96f0:
    // 0x4c96f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c96f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c96f4:
    // 0x4c96f4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4c96f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4c96f8:
    // 0x4c96f8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4c96f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4c96fc:
    // 0x4c96fc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c96fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c9700:
    // 0x4c9700: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c9704:
    if (ctx->pc == 0x4C9704u) {
        ctx->pc = 0x4C9704u;
            // 0x4c9704: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4C9708u;
        goto label_4c9708;
    }
    ctx->pc = 0x4C9700u;
    {
        const bool branch_taken_0x4c9700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9700u;
            // 0x4c9704: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9700) {
            ctx->pc = 0x4C9710u;
            goto label_4c9710;
        }
    }
    ctx->pc = 0x4C9708u;
label_4c9708:
    // 0x4c9708: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c970c:
    // 0x4c970c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4c970cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4c9710:
    // 0x4c9710: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c9710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c9714:
    // 0x4c9714: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9718:
    // 0x4c9718: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4c9718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4c971c:
    // 0x4c971c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c971cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c9720:
    // 0x4c9720: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c9720u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c9724:
    // 0x4c9724: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c9728:
    if (ctx->pc == 0x4C9728u) {
        ctx->pc = 0x4C9728u;
            // 0x4c9728: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4C972Cu;
        goto label_4c972c;
    }
    ctx->pc = 0x4C9724u;
    {
        const bool branch_taken_0x4c9724 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9724) {
            ctx->pc = 0x4C9728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9724u;
            // 0x4c9728: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9738u;
            goto label_4c9738;
        }
    }
    ctx->pc = 0x4C972Cu;
label_4c972c:
    // 0x4c972c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c972cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9730:
    // 0x4c9730: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4c9730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4c9734:
    // 0x4c9734: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c9734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c9738:
    // 0x4c9738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c973c:
    // 0x4c973c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4c973cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4c9740:
    // 0x4c9740: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4c9740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4c9744:
    // 0x4c9744: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4c9744u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4c9748:
    // 0x4c9748: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c974c:
    if (ctx->pc == 0x4C974Cu) {
        ctx->pc = 0x4C974Cu;
            // 0x4c974c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4C9750u;
        goto label_4c9750;
    }
    ctx->pc = 0x4C9748u;
    {
        const bool branch_taken_0x4c9748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9748) {
            ctx->pc = 0x4C974Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9748u;
            // 0x4c974c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C975Cu;
            goto label_4c975c;
        }
    }
    ctx->pc = 0x4C9750u;
label_4c9750:
    // 0x4c9750: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4c9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4c9754:
    // 0x4c9754: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4c9754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4c9758:
    // 0x4c9758: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4c9758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4c975c:
    // 0x4c975c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4c975cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4c9760:
    // 0x4c9760: 0x320f809  jalr        $t9
label_4c9764:
    if (ctx->pc == 0x4C9764u) {
        ctx->pc = 0x4C9764u;
            // 0x4c9764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9768u;
        goto label_4c9768;
    }
    ctx->pc = 0x4C9760u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9768u);
        ctx->pc = 0x4C9764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9760u;
            // 0x4c9764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9768u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9768u; }
            if (ctx->pc != 0x4C9768u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9768u;
label_4c9768:
    // 0x4c9768: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c9768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c976c:
    // 0x4c976c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c976cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c9770:
    // 0x4c9770: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4c9770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4c9774:
    // 0x4c9774: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c9774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c9778:
    // 0x4c9778: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c9778u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c977c:
    // 0x4c977c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c977cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c9780:
    // 0x4c9780: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c9784:
    if (ctx->pc == 0x4C9784u) {
        ctx->pc = 0x4C9784u;
            // 0x4c9784: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4C9788u;
        goto label_4c9788;
    }
    ctx->pc = 0x4C9780u;
    {
        const bool branch_taken_0x4c9780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9780) {
            ctx->pc = 0x4C9784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9780u;
            // 0x4c9784: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9794u;
            goto label_4c9794;
        }
    }
    ctx->pc = 0x4C9788u;
label_4c9788:
    // 0x4c9788: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c9788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c978c:
    // 0x4c978c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4c978cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4c9790:
    // 0x4c9790: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4c9790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4c9794:
    // 0x4c9794: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c9794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c9798:
    // 0x4c9798: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4c9798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4c979c:
    // 0x4c979c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4c979cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4c97a0:
    // 0x4c97a0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4c97a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4c97a4:
    // 0x4c97a4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4c97a4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4c97a8:
    // 0x4c97a8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c97ac:
    if (ctx->pc == 0x4C97ACu) {
        ctx->pc = 0x4C97B0u;
        goto label_4c97b0;
    }
    ctx->pc = 0x4C97A8u;
    {
        const bool branch_taken_0x4c97a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c97a8) {
            ctx->pc = 0x4C97B8u;
            goto label_4c97b8;
        }
    }
    ctx->pc = 0x4C97B0u;
label_4c97b0:
    // 0x4c97b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c97b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c97b4:
    // 0x4c97b4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4c97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4c97b8:
    // 0x4c97b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c97bc:
    // 0x4c97bc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4c97bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4c97c0:
    // 0x4c97c0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c97c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c97c4:
    // 0x4c97c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4c97c8:
    if (ctx->pc == 0x4C97C8u) {
        ctx->pc = 0x4C97CCu;
        goto label_4c97cc;
    }
    ctx->pc = 0x4C97C4u;
    {
        const bool branch_taken_0x4c97c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c97c4) {
            ctx->pc = 0x4C97D4u;
            goto label_4c97d4;
        }
    }
    ctx->pc = 0x4C97CCu;
label_4c97cc:
    // 0x4c97cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c97d0:
    // 0x4c97d0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4c97d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4c97d4:
    // 0x4c97d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c97d8:
    // 0x4c97d8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4c97d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4c97dc:
    // 0x4c97dc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4c97dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4c97e0:
    // 0x4c97e0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4c97e4:
    if (ctx->pc == 0x4C97E4u) {
        ctx->pc = 0x4C97E4u;
            // 0x4c97e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4C97E8u;
        goto label_4c97e8;
    }
    ctx->pc = 0x4C97E0u;
    {
        const bool branch_taken_0x4c97e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c97e0) {
            ctx->pc = 0x4C97E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C97E0u;
            // 0x4c97e4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C97F4u;
            goto label_4c97f4;
        }
    }
    ctx->pc = 0x4C97E8u;
label_4c97e8:
    // 0x4c97e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4c97e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4c97ec:
    // 0x4c97ec: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4c97ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4c97f0:
    // 0x4c97f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4c97f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4c97f4:
    // 0x4c97f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c97f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c97f8:
    // 0x4c97f8: 0x3e00008  jr          $ra
label_4c97fc:
    if (ctx->pc == 0x4C97FCu) {
        ctx->pc = 0x4C97FCu;
            // 0x4c97fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4C9800u;
        goto label_4c9800;
    }
    ctx->pc = 0x4C97F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C97FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C97F8u;
            // 0x4c97fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9800u;
label_4c9800:
    // 0x4c9800: 0x81320c0  j           func_4C8300
label_4c9804:
    if (ctx->pc == 0x4C9804u) {
        ctx->pc = 0x4C9804u;
            // 0x4c9804: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C9808u;
        goto label_4c9808;
    }
    ctx->pc = 0x4C9800u;
    ctx->pc = 0x4C9804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9800u;
            // 0x4c9804: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C8300u;
    {
        auto targetFn = runtime->lookupFunction(0x4C8300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9808u;
label_4c9808:
    // 0x4c9808: 0x0  nop
    ctx->pc = 0x4c9808u;
    // NOP
label_4c980c:
    // 0x4c980c: 0x0  nop
    ctx->pc = 0x4c980cu;
    // NOP
label_4c9810:
    // 0x4c9810: 0x8131e8c  j           func_4C7A30
label_4c9814:
    if (ctx->pc == 0x4C9814u) {
        ctx->pc = 0x4C9814u;
            // 0x4c9814: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4C9818u;
        goto label_4c9818;
    }
    ctx->pc = 0x4C9810u;
    ctx->pc = 0x4C9814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9810u;
            // 0x4c9814: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7A30u;
    if (runtime->hasFunction(0x4C7A30u)) {
        auto targetFn = runtime->lookupFunction(0x4C7A30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004C7A30_0x4c7a30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4C9818u;
label_4c9818:
    // 0x4c9818: 0x0  nop
    ctx->pc = 0x4c9818u;
    // NOP
label_4c981c:
    // 0x4c981c: 0x0  nop
    ctx->pc = 0x4c981cu;
    // NOP
label_4c9820:
    // 0x4c9820: 0x8131ee4  j           func_4C7B90
label_4c9824:
    if (ctx->pc == 0x4C9824u) {
        ctx->pc = 0x4C9824u;
            // 0x4c9824: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4C9828u;
        goto label_4c9828;
    }
    ctx->pc = 0x4C9820u;
    ctx->pc = 0x4C9824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9820u;
            // 0x4c9824: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7B90u;
    {
        auto targetFn = runtime->lookupFunction(0x4C7B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9828u;
label_4c9828:
    // 0x4c9828: 0x0  nop
    ctx->pc = 0x4c9828u;
    // NOP
label_4c982c:
    // 0x4c982c: 0x0  nop
    ctx->pc = 0x4c982cu;
    // NOP
label_4c9830:
    // 0x4c9830: 0x8132074  j           func_4C81D0
label_4c9834:
    if (ctx->pc == 0x4C9834u) {
        ctx->pc = 0x4C9834u;
            // 0x4c9834: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x4C9838u;
        goto label_4c9838;
    }
    ctx->pc = 0x4C9830u;
    ctx->pc = 0x4C9834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9830u;
            // 0x4c9834: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C81D0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C81D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9838u;
label_4c9838:
    // 0x4c9838: 0x0  nop
    ctx->pc = 0x4c9838u;
    // NOP
label_4c983c:
    // 0x4c983c: 0x0  nop
    ctx->pc = 0x4c983cu;
    // NOP
label_4c9840:
    // 0x4c9840: 0x8131f24  j           func_4C7C90
label_4c9844:
    if (ctx->pc == 0x4C9844u) {
        ctx->pc = 0x4C9844u;
            // 0x4c9844: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x4C9848u;
        goto label_4c9848;
    }
    ctx->pc = 0x4C9840u;
    ctx->pc = 0x4C9844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9840u;
            // 0x4c9844: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7C90u;
    {
        auto targetFn = runtime->lookupFunction(0x4C7C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9848u;
label_4c9848:
    // 0x4c9848: 0x0  nop
    ctx->pc = 0x4c9848u;
    // NOP
label_4c984c:
    // 0x4c984c: 0x0  nop
    ctx->pc = 0x4c984cu;
    // NOP
label_4c9850:
    // 0x4c9850: 0x8131f88  j           func_4C7E20
label_4c9854:
    if (ctx->pc == 0x4C9854u) {
        ctx->pc = 0x4C9854u;
            // 0x4c9854: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x4C9858u;
        goto label_4c9858;
    }
    ctx->pc = 0x4C9850u;
    ctx->pc = 0x4C9854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9850u;
            // 0x4c9854: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C7E20u;
    {
        auto targetFn = runtime->lookupFunction(0x4C7E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9858u;
label_4c9858:
    // 0x4c9858: 0x0  nop
    ctx->pc = 0x4c9858u;
    // NOP
label_4c985c:
    // 0x4c985c: 0x0  nop
    ctx->pc = 0x4c985cu;
    // NOP
label_4c9860:
    // 0x4c9860: 0x8131e3c  j           func_4C78F0
label_4c9864:
    if (ctx->pc == 0x4C9864u) {
        ctx->pc = 0x4C9864u;
            // 0x4c9864: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->pc = 0x4C9868u;
        goto label_4c9868;
    }
    ctx->pc = 0x4C9860u;
    ctx->pc = 0x4C9864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9860u;
            // 0x4c9864: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C78F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C78F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9868u;
label_4c9868:
    // 0x4c9868: 0x0  nop
    ctx->pc = 0x4c9868u;
    // NOP
label_4c986c:
    // 0x4c986c: 0x0  nop
    ctx->pc = 0x4c986cu;
    // NOP
label_4c9870:
    // 0x4c9870: 0x8131e3c  j           func_4C78F0
label_4c9874:
    if (ctx->pc == 0x4C9874u) {
        ctx->pc = 0x4C9874u;
            // 0x4c9874: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->pc = 0x4C9878u;
        goto label_4c9878;
    }
    ctx->pc = 0x4C9870u;
    ctx->pc = 0x4C9874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9870u;
            // 0x4c9874: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C78F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4C78F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4C9878u;
label_4c9878:
    // 0x4c9878: 0x0  nop
    ctx->pc = 0x4c9878u;
    // NOP
label_4c987c:
    // 0x4c987c: 0x0  nop
    ctx->pc = 0x4c987cu;
    // NOP
label_4c9880:
    // 0x4c9880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c9880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c9884:
    // 0x4c9884: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4c9884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4c9888:
    // 0x4c9888: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4c9888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4c988c:
    // 0x4c988c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c9890:
    // 0x4c9890: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4c9890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9894:
    // 0x4c9894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c9894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c9898:
    // 0x4c9898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c9898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c989c:
    // 0x4c989c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c989cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c98a0:
    // 0x4c98a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4c98a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4c98a4:
    // 0x4c98a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4c98a8:
    if (ctx->pc == 0x4C98A8u) {
        ctx->pc = 0x4C98A8u;
            // 0x4c98a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C98ACu;
        goto label_4c98ac;
    }
    ctx->pc = 0x4C98A4u;
    {
        const bool branch_taken_0x4c98a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C98A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C98A4u;
            // 0x4c98a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c98a4) {
            ctx->pc = 0x4C98E8u;
            goto label_4c98e8;
        }
    }
    ctx->pc = 0x4C98ACu;
label_4c98ac:
    // 0x4c98ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4c98acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c98b0:
    // 0x4c98b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4c98b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c98b4:
    // 0x4c98b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c98b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c98b8:
    // 0x4c98b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4c98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4c98bc:
    // 0x4c98bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4c98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4c98c0:
    // 0x4c98c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4c98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4c98c4:
    // 0x4c98c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c98c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c98c8:
    // 0x4c98c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c98c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c98cc:
    // 0x4c98cc: 0x320f809  jalr        $t9
label_4c98d0:
    if (ctx->pc == 0x4C98D0u) {
        ctx->pc = 0x4C98D4u;
        goto label_4c98d4;
    }
    ctx->pc = 0x4C98CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C98D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C98D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C98D4u; }
            if (ctx->pc != 0x4C98D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4C98D4u;
label_4c98d4:
    // 0x4c98d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4c98d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4c98d8:
    // 0x4c98d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4c98d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4c98dc:
    // 0x4c98dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4c98dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4c98e0:
    // 0x4c98e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4c98e4:
    if (ctx->pc == 0x4C98E4u) {
        ctx->pc = 0x4C98E4u;
            // 0x4c98e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4C98E8u;
        goto label_4c98e8;
    }
    ctx->pc = 0x4C98E0u;
    {
        const bool branch_taken_0x4c98e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C98E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C98E0u;
            // 0x4c98e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c98e0) {
            ctx->pc = 0x4C98B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c98b8;
        }
    }
    ctx->pc = 0x4C98E8u;
label_4c98e8:
    // 0x4c98e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c98e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c98ec:
    // 0x4c98ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4c98ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4c98f0:
    // 0x4c98f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4c98f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c98f4:
    // 0x4c98f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c98f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c98f8:
    // 0x4c98f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c98f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c98fc:
    // 0x4c98fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c98fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9900:
    // 0x4c9900: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9900u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9904:
    // 0x4c9904: 0x3e00008  jr          $ra
label_4c9908:
    if (ctx->pc == 0x4C9908u) {
        ctx->pc = 0x4C9908u;
            // 0x4c9908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C990Cu;
        goto label_4c990c;
    }
    ctx->pc = 0x4C9904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9904u;
            // 0x4c9908: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C990Cu;
label_4c990c:
    // 0x4c990c: 0x0  nop
    ctx->pc = 0x4c990cu;
    // NOP
label_4c9910:
    // 0x4c9910: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4c9910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4c9914:
    // 0x4c9914: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4c9914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4c9918:
    // 0x4c9918: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4c9918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4c991c:
    // 0x4c991c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4c991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4c9920:
    // 0x4c9920: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4c9920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c9924:
    // 0x4c9924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c9924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c9928:
    // 0x4c9928: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4c9928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c992c:
    // 0x4c992c: 0x12600051  beqz        $s3, . + 4 + (0x51 << 2)
label_4c9930:
    if (ctx->pc == 0x4C9930u) {
        ctx->pc = 0x4C9930u;
            // 0x4c9930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4C9934u;
        goto label_4c9934;
    }
    ctx->pc = 0x4C992Cu;
    {
        const bool branch_taken_0x4c992c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C992Cu;
            // 0x4c9930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c992c) {
            ctx->pc = 0x4C9A74u;
            goto label_4c9a74;
        }
    }
    ctx->pc = 0x4C9934u;
label_4c9934:
    // 0x4c9934: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c9934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c9938:
    // 0x4c9938: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c9938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c993c:
    // 0x4c993c: 0x246319e0  addiu       $v1, $v1, 0x19E0
    ctx->pc = 0x4c993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6624));
label_4c9940:
    // 0x4c9940: 0x244219e8  addiu       $v0, $v0, 0x19E8
    ctx->pc = 0x4c9940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6632));
label_4c9944:
    // 0x4c9944: 0xae6300bc  sw          $v1, 0xBC($s3)
    ctx->pc = 0x4c9944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 3));
label_4c9948:
    // 0x4c9948: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c9948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c994c:
    // 0x4c994c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x4c994cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_4c9950:
    // 0x4c9950: 0x24631a20  addiu       $v1, $v1, 0x1A20
    ctx->pc = 0x4c9950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6688));
label_4c9954:
    // 0x4c9954: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x4c9954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_4c9958:
    // 0x4c9958: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4c995c:
    if (ctx->pc == 0x4C995Cu) {
        ctx->pc = 0x4C995Cu;
            // 0x4c995c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->pc = 0x4C9960u;
        goto label_4c9960;
    }
    ctx->pc = 0x4C9958u;
    {
        const bool branch_taken_0x4c9958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9958u;
            // 0x4c995c: 0xae630070  sw          $v1, 0x70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9958) {
            ctx->pc = 0x4C99C4u;
            goto label_4c99c4;
        }
    }
    ctx->pc = 0x4C9960u;
label_4c9960:
    // 0x4c9960: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4c9960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4c9964:
    // 0x4c9964: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4c9964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4c9968:
    // 0x4c9968: 0x24631b00  addiu       $v1, $v1, 0x1B00
    ctx->pc = 0x4c9968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6912));
label_4c996c:
    // 0x4c996c: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4c996cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4c9970:
    // 0x4c9970: 0x24421b38  addiu       $v0, $v0, 0x1B38
    ctx->pc = 0x4c9970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6968));
label_4c9974:
    // 0x4c9974: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x4c9974u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_4c9978:
    // 0x4c9978: 0xae620070  sw          $v0, 0x70($s3)
    ctx->pc = 0x4c9978u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 2));
label_4c997c:
    // 0x4c997c: 0x8e640074  lw          $a0, 0x74($s3)
    ctx->pc = 0x4c997cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_4c9980:
    // 0x4c9980: 0xc0407c0  jal         func_101F00
label_4c9984:
    if (ctx->pc == 0x4C9984u) {
        ctx->pc = 0x4C9984u;
            // 0x4c9984: 0x24a59bd0  addiu       $a1, $a1, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941648));
        ctx->pc = 0x4C9988u;
        goto label_4c9988;
    }
    ctx->pc = 0x4C9980u;
    SET_GPR_U32(ctx, 31, 0x4C9988u);
    ctx->pc = 0x4C9984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9980u;
            // 0x4c9984: 0x24a59bd0  addiu       $a1, $a1, -0x6430 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9988u; }
        if (ctx->pc != 0x4C9988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9988u; }
        if (ctx->pc != 0x4C9988u) { return; }
    }
    ctx->pc = 0x4C9988u;
label_4c9988:
    // 0x4c9988: 0x26640090  addiu       $a0, $s3, 0x90
    ctx->pc = 0x4c9988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_4c998c:
    // 0x4c998c: 0xc1326dc  jal         func_4C9B70
label_4c9990:
    if (ctx->pc == 0x4C9990u) {
        ctx->pc = 0x4C9990u;
            // 0x4c9990: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4C9994u;
        goto label_4c9994;
    }
    ctx->pc = 0x4C998Cu;
    SET_GPR_U32(ctx, 31, 0x4C9994u);
    ctx->pc = 0x4C9990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C998Cu;
            // 0x4c9990: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9B70u;
    if (runtime->hasFunction(0x4C9B70u)) {
        auto targetFn = runtime->lookupFunction(0x4C9B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9994u; }
        if (ctx->pc != 0x4C9994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C9B70_0x4c9b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9994u; }
        if (ctx->pc != 0x4C9994u) { return; }
    }
    ctx->pc = 0x4C9994u;
label_4c9994:
    // 0x4c9994: 0x26640084  addiu       $a0, $s3, 0x84
    ctx->pc = 0x4c9994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_4c9998:
    // 0x4c9998: 0xc1326c0  jal         func_4C9B00
label_4c999c:
    if (ctx->pc == 0x4C999Cu) {
        ctx->pc = 0x4C999Cu;
            // 0x4c999c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4C99A0u;
        goto label_4c99a0;
    }
    ctx->pc = 0x4C9998u;
    SET_GPR_U32(ctx, 31, 0x4C99A0u);
    ctx->pc = 0x4C999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9998u;
            // 0x4c999c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9B00u;
    if (runtime->hasFunction(0x4C9B00u)) {
        auto targetFn = runtime->lookupFunction(0x4C9B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99A0u; }
        if (ctx->pc != 0x4C99A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C9B00_0x4c9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99A0u; }
        if (ctx->pc != 0x4C99A0u) { return; }
    }
    ctx->pc = 0x4C99A0u;
label_4c99a0:
    // 0x4c99a0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4c99a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4c99a4:
    // 0x4c99a4: 0xc1326c0  jal         func_4C9B00
label_4c99a8:
    if (ctx->pc == 0x4C99A8u) {
        ctx->pc = 0x4C99A8u;
            // 0x4c99a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4C99ACu;
        goto label_4c99ac;
    }
    ctx->pc = 0x4C99A4u;
    SET_GPR_U32(ctx, 31, 0x4C99ACu);
    ctx->pc = 0x4C99A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C99A4u;
            // 0x4c99a8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9B00u;
    if (runtime->hasFunction(0x4C9B00u)) {
        auto targetFn = runtime->lookupFunction(0x4C9B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99ACu; }
        if (ctx->pc != 0x4C99ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C9B00_0x4c9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99ACu; }
        if (ctx->pc != 0x4C99ACu) { return; }
    }
    ctx->pc = 0x4C99ACu;
label_4c99ac:
    // 0x4c99ac: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x4c99acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_4c99b0:
    // 0x4c99b0: 0xc1326a8  jal         func_4C9AA0
label_4c99b4:
    if (ctx->pc == 0x4C99B4u) {
        ctx->pc = 0x4C99B4u;
            // 0x4c99b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C99B8u;
        goto label_4c99b8;
    }
    ctx->pc = 0x4C99B0u;
    SET_GPR_U32(ctx, 31, 0x4C99B8u);
    ctx->pc = 0x4C99B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C99B0u;
            // 0x4c99b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C9AA0u;
    if (runtime->hasFunction(0x4C9AA0u)) {
        auto targetFn = runtime->lookupFunction(0x4C9AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99B8u; }
        if (ctx->pc != 0x4C99B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C9AA0_0x4c9aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99B8u; }
        if (ctx->pc != 0x4C99B8u) { return; }
    }
    ctx->pc = 0x4C99B8u;
label_4c99b8:
    // 0x4c99b8: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x4c99b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_4c99bc:
    // 0x4c99bc: 0xc0ae1c0  jal         func_2B8700
label_4c99c0:
    if (ctx->pc == 0x4C99C0u) {
        ctx->pc = 0x4C99C0u;
            // 0x4c99c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C99C4u;
        goto label_4c99c4;
    }
    ctx->pc = 0x4C99BCu;
    SET_GPR_U32(ctx, 31, 0x4C99C4u);
    ctx->pc = 0x4C99C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C99BCu;
            // 0x4c99c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99C4u; }
        if (ctx->pc != 0x4C99C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C99C4u; }
        if (ctx->pc != 0x4C99C4u) { return; }
    }
    ctx->pc = 0x4C99C4u;
label_4c99c4:
    // 0x4c99c4: 0x52600026  beql        $s3, $zero, . + 4 + (0x26 << 2)
label_4c99c8:
    if (ctx->pc == 0x4C99C8u) {
        ctx->pc = 0x4C99C8u;
            // 0x4c99c8: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->pc = 0x4C99CCu;
        goto label_4c99cc;
    }
    ctx->pc = 0x4C99C4u;
    {
        const bool branch_taken_0x4c99c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c99c4) {
            ctx->pc = 0x4C99C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C99C4u;
            // 0x4c99c8: 0x12143c  dsll32      $v0, $s2, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9A60u;
            goto label_4c9a60;
        }
    }
    ctx->pc = 0x4C99CCu;
label_4c99cc:
    // 0x4c99cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4c99ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4c99d0:
    // 0x4c99d0: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x4c99d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4c99d4:
    // 0x4c99d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4c99d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4c99d8:
    // 0x4c99d8: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x4c99d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4c99dc:
    // 0x4c99dc: 0x2301026  xor         $v0, $s1, $s0
    ctx->pc = 0x4c99dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 16));
label_4c99e0:
    // 0x4c99e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c99e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c99e4:
    // 0x4c99e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c99e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c99e8:
    // 0x4c99e8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_4c99ec:
    if (ctx->pc == 0x4C99ECu) {
        ctx->pc = 0x4C99F0u;
        goto label_4c99f0;
    }
    ctx->pc = 0x4C99E8u;
    {
        const bool branch_taken_0x4c99e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c99e8) {
            ctx->pc = 0x4C9A40u;
            goto label_4c9a40;
        }
    }
    ctx->pc = 0x4C99F0u;
label_4c99f0:
    // 0x4c99f0: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4c99f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_4c99f4:
    // 0x4c99f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c99f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4c99f8:
    // 0x4c99f8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4c99f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4c99fc:
    // 0x4c99fc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4c9a00:
    if (ctx->pc == 0x4C9A00u) {
        ctx->pc = 0x4C9A04u;
        goto label_4c9a04;
    }
    ctx->pc = 0x4C99FCu;
    {
        const bool branch_taken_0x4c99fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c99fc) {
            ctx->pc = 0x4C9A18u;
            goto label_4c9a18;
        }
    }
    ctx->pc = 0x4C9A04u;
label_4c9a04:
    // 0x4c9a04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c9a04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c9a08:
    // 0x4c9a08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4c9a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4c9a0c:
    // 0x4c9a0c: 0x320f809  jalr        $t9
label_4c9a10:
    if (ctx->pc == 0x4C9A10u) {
        ctx->pc = 0x4C9A10u;
            // 0x4c9a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4C9A14u;
        goto label_4c9a14;
    }
    ctx->pc = 0x4C9A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C9A14u);
        ctx->pc = 0x4C9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9A0Cu;
            // 0x4c9a10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C9A14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C9A14u; }
            if (ctx->pc != 0x4C9A14u) { return; }
        }
        }
    }
    ctx->pc = 0x4C9A14u;
label_4c9a14:
    // 0x4c9a14: 0x0  nop
    ctx->pc = 0x4c9a14u;
    // NOP
label_4c9a18:
    // 0x4c9a18: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4c9a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
label_4c9a1c:
    // 0x4c9a1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c9a1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4c9a20:
    // 0x4c9a20: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x4c9a20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4c9a24:
    // 0x4c9a24: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x4c9a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_4c9a28:
    // 0x4c9a28: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4c9a28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_4c9a2c:
    // 0x4c9a2c: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x4c9a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
label_4c9a30:
    // 0x4c9a30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4c9a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4c9a34:
    // 0x4c9a34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4c9a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4c9a38:
    // 0x4c9a38: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_4c9a3c:
    if (ctx->pc == 0x4C9A3Cu) {
        ctx->pc = 0x4C9A3Cu;
            // 0x4c9a3c: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x4C9A40u;
        goto label_4c9a40;
    }
    ctx->pc = 0x4C9A38u;
    {
        const bool branch_taken_0x4c9a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c9a38) {
            ctx->pc = 0x4C9A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9A38u;
            // 0x4c9a3c: 0x11103c  dsll32      $v0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C99F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c99f4;
        }
    }
    ctx->pc = 0x4C9A40u;
label_4c9a40:
    // 0x4c9a40: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_4c9a44:
    if (ctx->pc == 0x4C9A44u) {
        ctx->pc = 0x4C9A48u;
        goto label_4c9a48;
    }
    ctx->pc = 0x4C9A40u;
    {
        const bool branch_taken_0x4c9a40 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9a40) {
            ctx->pc = 0x4C9A5Cu;
            goto label_4c9a5c;
        }
    }
    ctx->pc = 0x4C9A48u;
label_4c9a48:
    // 0x4c9a48: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_4c9a4c:
    if (ctx->pc == 0x4C9A4Cu) {
        ctx->pc = 0x4C9A50u;
        goto label_4c9a50;
    }
    ctx->pc = 0x4C9A48u;
    {
        const bool branch_taken_0x4c9a48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c9a48) {
            ctx->pc = 0x4C9A5Cu;
            goto label_4c9a5c;
        }
    }
    ctx->pc = 0x4C9A50u;
label_4c9a50:
    // 0x4c9a50: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c9a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c9a54:
    // 0x4c9a54: 0xc0b4b74  jal         func_2D2DD0
label_4c9a58:
    if (ctx->pc == 0x4C9A58u) {
        ctx->pc = 0x4C9A58u;
            // 0x4c9a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9A5Cu;
        goto label_4c9a5c;
    }
    ctx->pc = 0x4C9A54u;
    SET_GPR_U32(ctx, 31, 0x4C9A5Cu);
    ctx->pc = 0x4C9A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9A54u;
            // 0x4c9a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DD0u;
    if (runtime->hasFunction(0x2D2DD0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9A5Cu; }
        if (ctx->pc != 0x4C9A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DD0_0x2d2dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9A5Cu; }
        if (ctx->pc != 0x4C9A5Cu) { return; }
    }
    ctx->pc = 0x4C9A5Cu;
label_4c9a5c:
    // 0x4c9a5c: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x4c9a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
label_4c9a60:
    // 0x4c9a60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4c9a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4c9a64:
    // 0x4c9a64: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4c9a68:
    if (ctx->pc == 0x4C9A68u) {
        ctx->pc = 0x4C9A68u;
            // 0x4c9a68: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9A6Cu;
        goto label_4c9a6c;
    }
    ctx->pc = 0x4C9A64u;
    {
        const bool branch_taken_0x4c9a64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4c9a64) {
            ctx->pc = 0x4C9A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9A64u;
            // 0x4c9a68: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C9A78u;
            goto label_4c9a78;
        }
    }
    ctx->pc = 0x4C9A6Cu;
label_4c9a6c:
    // 0x4c9a6c: 0xc0400a8  jal         func_1002A0
label_4c9a70:
    if (ctx->pc == 0x4C9A70u) {
        ctx->pc = 0x4C9A70u;
            // 0x4c9a70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C9A74u;
        goto label_4c9a74;
    }
    ctx->pc = 0x4C9A6Cu;
    SET_GPR_U32(ctx, 31, 0x4C9A74u);
    ctx->pc = 0x4C9A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9A6Cu;
            // 0x4c9a70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9A74u; }
        if (ctx->pc != 0x4C9A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C9A74u; }
        if (ctx->pc != 0x4C9A74u) { return; }
    }
    ctx->pc = 0x4C9A74u;
label_4c9a74:
    // 0x4c9a74: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4c9a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4c9a78:
    // 0x4c9a78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c9a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4c9a7c:
    // 0x4c9a7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4c9a7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c9a80:
    // 0x4c9a80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4c9a80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c9a84:
    // 0x4c9a84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c9a84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c9a88:
    // 0x4c9a88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c9a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c9a8c:
    // 0x4c9a8c: 0x3e00008  jr          $ra
label_4c9a90:
    if (ctx->pc == 0x4C9A90u) {
        ctx->pc = 0x4C9A90u;
            // 0x4c9a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4C9A94u;
        goto label_4c9a94;
    }
    ctx->pc = 0x4C9A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C9A8Cu;
            // 0x4c9a90: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C9A94u;
label_4c9a94:
    // 0x4c9a94: 0x0  nop
    ctx->pc = 0x4c9a94u;
    // NOP
label_4c9a98:
    // 0x4c9a98: 0x0  nop
    ctx->pc = 0x4c9a98u;
    // NOP
label_4c9a9c:
    // 0x4c9a9c: 0x0  nop
    ctx->pc = 0x4c9a9cu;
    // NOP
}
