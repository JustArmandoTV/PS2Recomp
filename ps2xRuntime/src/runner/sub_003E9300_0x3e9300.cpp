#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E9300
// Address: 0x3e9300 - 0x3e9c80
void sub_003E9300_0x3e9300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9300_0x3e9300");
#endif

    switch (ctx->pc) {
        case 0x3e9300u: goto label_3e9300;
        case 0x3e9304u: goto label_3e9304;
        case 0x3e9308u: goto label_3e9308;
        case 0x3e930cu: goto label_3e930c;
        case 0x3e9310u: goto label_3e9310;
        case 0x3e9314u: goto label_3e9314;
        case 0x3e9318u: goto label_3e9318;
        case 0x3e931cu: goto label_3e931c;
        case 0x3e9320u: goto label_3e9320;
        case 0x3e9324u: goto label_3e9324;
        case 0x3e9328u: goto label_3e9328;
        case 0x3e932cu: goto label_3e932c;
        case 0x3e9330u: goto label_3e9330;
        case 0x3e9334u: goto label_3e9334;
        case 0x3e9338u: goto label_3e9338;
        case 0x3e933cu: goto label_3e933c;
        case 0x3e9340u: goto label_3e9340;
        case 0x3e9344u: goto label_3e9344;
        case 0x3e9348u: goto label_3e9348;
        case 0x3e934cu: goto label_3e934c;
        case 0x3e9350u: goto label_3e9350;
        case 0x3e9354u: goto label_3e9354;
        case 0x3e9358u: goto label_3e9358;
        case 0x3e935cu: goto label_3e935c;
        case 0x3e9360u: goto label_3e9360;
        case 0x3e9364u: goto label_3e9364;
        case 0x3e9368u: goto label_3e9368;
        case 0x3e936cu: goto label_3e936c;
        case 0x3e9370u: goto label_3e9370;
        case 0x3e9374u: goto label_3e9374;
        case 0x3e9378u: goto label_3e9378;
        case 0x3e937cu: goto label_3e937c;
        case 0x3e9380u: goto label_3e9380;
        case 0x3e9384u: goto label_3e9384;
        case 0x3e9388u: goto label_3e9388;
        case 0x3e938cu: goto label_3e938c;
        case 0x3e9390u: goto label_3e9390;
        case 0x3e9394u: goto label_3e9394;
        case 0x3e9398u: goto label_3e9398;
        case 0x3e939cu: goto label_3e939c;
        case 0x3e93a0u: goto label_3e93a0;
        case 0x3e93a4u: goto label_3e93a4;
        case 0x3e93a8u: goto label_3e93a8;
        case 0x3e93acu: goto label_3e93ac;
        case 0x3e93b0u: goto label_3e93b0;
        case 0x3e93b4u: goto label_3e93b4;
        case 0x3e93b8u: goto label_3e93b8;
        case 0x3e93bcu: goto label_3e93bc;
        case 0x3e93c0u: goto label_3e93c0;
        case 0x3e93c4u: goto label_3e93c4;
        case 0x3e93c8u: goto label_3e93c8;
        case 0x3e93ccu: goto label_3e93cc;
        case 0x3e93d0u: goto label_3e93d0;
        case 0x3e93d4u: goto label_3e93d4;
        case 0x3e93d8u: goto label_3e93d8;
        case 0x3e93dcu: goto label_3e93dc;
        case 0x3e93e0u: goto label_3e93e0;
        case 0x3e93e4u: goto label_3e93e4;
        case 0x3e93e8u: goto label_3e93e8;
        case 0x3e93ecu: goto label_3e93ec;
        case 0x3e93f0u: goto label_3e93f0;
        case 0x3e93f4u: goto label_3e93f4;
        case 0x3e93f8u: goto label_3e93f8;
        case 0x3e93fcu: goto label_3e93fc;
        case 0x3e9400u: goto label_3e9400;
        case 0x3e9404u: goto label_3e9404;
        case 0x3e9408u: goto label_3e9408;
        case 0x3e940cu: goto label_3e940c;
        case 0x3e9410u: goto label_3e9410;
        case 0x3e9414u: goto label_3e9414;
        case 0x3e9418u: goto label_3e9418;
        case 0x3e941cu: goto label_3e941c;
        case 0x3e9420u: goto label_3e9420;
        case 0x3e9424u: goto label_3e9424;
        case 0x3e9428u: goto label_3e9428;
        case 0x3e942cu: goto label_3e942c;
        case 0x3e9430u: goto label_3e9430;
        case 0x3e9434u: goto label_3e9434;
        case 0x3e9438u: goto label_3e9438;
        case 0x3e943cu: goto label_3e943c;
        case 0x3e9440u: goto label_3e9440;
        case 0x3e9444u: goto label_3e9444;
        case 0x3e9448u: goto label_3e9448;
        case 0x3e944cu: goto label_3e944c;
        case 0x3e9450u: goto label_3e9450;
        case 0x3e9454u: goto label_3e9454;
        case 0x3e9458u: goto label_3e9458;
        case 0x3e945cu: goto label_3e945c;
        case 0x3e9460u: goto label_3e9460;
        case 0x3e9464u: goto label_3e9464;
        case 0x3e9468u: goto label_3e9468;
        case 0x3e946cu: goto label_3e946c;
        case 0x3e9470u: goto label_3e9470;
        case 0x3e9474u: goto label_3e9474;
        case 0x3e9478u: goto label_3e9478;
        case 0x3e947cu: goto label_3e947c;
        case 0x3e9480u: goto label_3e9480;
        case 0x3e9484u: goto label_3e9484;
        case 0x3e9488u: goto label_3e9488;
        case 0x3e948cu: goto label_3e948c;
        case 0x3e9490u: goto label_3e9490;
        case 0x3e9494u: goto label_3e9494;
        case 0x3e9498u: goto label_3e9498;
        case 0x3e949cu: goto label_3e949c;
        case 0x3e94a0u: goto label_3e94a0;
        case 0x3e94a4u: goto label_3e94a4;
        case 0x3e94a8u: goto label_3e94a8;
        case 0x3e94acu: goto label_3e94ac;
        case 0x3e94b0u: goto label_3e94b0;
        case 0x3e94b4u: goto label_3e94b4;
        case 0x3e94b8u: goto label_3e94b8;
        case 0x3e94bcu: goto label_3e94bc;
        case 0x3e94c0u: goto label_3e94c0;
        case 0x3e94c4u: goto label_3e94c4;
        case 0x3e94c8u: goto label_3e94c8;
        case 0x3e94ccu: goto label_3e94cc;
        case 0x3e94d0u: goto label_3e94d0;
        case 0x3e94d4u: goto label_3e94d4;
        case 0x3e94d8u: goto label_3e94d8;
        case 0x3e94dcu: goto label_3e94dc;
        case 0x3e94e0u: goto label_3e94e0;
        case 0x3e94e4u: goto label_3e94e4;
        case 0x3e94e8u: goto label_3e94e8;
        case 0x3e94ecu: goto label_3e94ec;
        case 0x3e94f0u: goto label_3e94f0;
        case 0x3e94f4u: goto label_3e94f4;
        case 0x3e94f8u: goto label_3e94f8;
        case 0x3e94fcu: goto label_3e94fc;
        case 0x3e9500u: goto label_3e9500;
        case 0x3e9504u: goto label_3e9504;
        case 0x3e9508u: goto label_3e9508;
        case 0x3e950cu: goto label_3e950c;
        case 0x3e9510u: goto label_3e9510;
        case 0x3e9514u: goto label_3e9514;
        case 0x3e9518u: goto label_3e9518;
        case 0x3e951cu: goto label_3e951c;
        case 0x3e9520u: goto label_3e9520;
        case 0x3e9524u: goto label_3e9524;
        case 0x3e9528u: goto label_3e9528;
        case 0x3e952cu: goto label_3e952c;
        case 0x3e9530u: goto label_3e9530;
        case 0x3e9534u: goto label_3e9534;
        case 0x3e9538u: goto label_3e9538;
        case 0x3e953cu: goto label_3e953c;
        case 0x3e9540u: goto label_3e9540;
        case 0x3e9544u: goto label_3e9544;
        case 0x3e9548u: goto label_3e9548;
        case 0x3e954cu: goto label_3e954c;
        case 0x3e9550u: goto label_3e9550;
        case 0x3e9554u: goto label_3e9554;
        case 0x3e9558u: goto label_3e9558;
        case 0x3e955cu: goto label_3e955c;
        case 0x3e9560u: goto label_3e9560;
        case 0x3e9564u: goto label_3e9564;
        case 0x3e9568u: goto label_3e9568;
        case 0x3e956cu: goto label_3e956c;
        case 0x3e9570u: goto label_3e9570;
        case 0x3e9574u: goto label_3e9574;
        case 0x3e9578u: goto label_3e9578;
        case 0x3e957cu: goto label_3e957c;
        case 0x3e9580u: goto label_3e9580;
        case 0x3e9584u: goto label_3e9584;
        case 0x3e9588u: goto label_3e9588;
        case 0x3e958cu: goto label_3e958c;
        case 0x3e9590u: goto label_3e9590;
        case 0x3e9594u: goto label_3e9594;
        case 0x3e9598u: goto label_3e9598;
        case 0x3e959cu: goto label_3e959c;
        case 0x3e95a0u: goto label_3e95a0;
        case 0x3e95a4u: goto label_3e95a4;
        case 0x3e95a8u: goto label_3e95a8;
        case 0x3e95acu: goto label_3e95ac;
        case 0x3e95b0u: goto label_3e95b0;
        case 0x3e95b4u: goto label_3e95b4;
        case 0x3e95b8u: goto label_3e95b8;
        case 0x3e95bcu: goto label_3e95bc;
        case 0x3e95c0u: goto label_3e95c0;
        case 0x3e95c4u: goto label_3e95c4;
        case 0x3e95c8u: goto label_3e95c8;
        case 0x3e95ccu: goto label_3e95cc;
        case 0x3e95d0u: goto label_3e95d0;
        case 0x3e95d4u: goto label_3e95d4;
        case 0x3e95d8u: goto label_3e95d8;
        case 0x3e95dcu: goto label_3e95dc;
        case 0x3e95e0u: goto label_3e95e0;
        case 0x3e95e4u: goto label_3e95e4;
        case 0x3e95e8u: goto label_3e95e8;
        case 0x3e95ecu: goto label_3e95ec;
        case 0x3e95f0u: goto label_3e95f0;
        case 0x3e95f4u: goto label_3e95f4;
        case 0x3e95f8u: goto label_3e95f8;
        case 0x3e95fcu: goto label_3e95fc;
        case 0x3e9600u: goto label_3e9600;
        case 0x3e9604u: goto label_3e9604;
        case 0x3e9608u: goto label_3e9608;
        case 0x3e960cu: goto label_3e960c;
        case 0x3e9610u: goto label_3e9610;
        case 0x3e9614u: goto label_3e9614;
        case 0x3e9618u: goto label_3e9618;
        case 0x3e961cu: goto label_3e961c;
        case 0x3e9620u: goto label_3e9620;
        case 0x3e9624u: goto label_3e9624;
        case 0x3e9628u: goto label_3e9628;
        case 0x3e962cu: goto label_3e962c;
        case 0x3e9630u: goto label_3e9630;
        case 0x3e9634u: goto label_3e9634;
        case 0x3e9638u: goto label_3e9638;
        case 0x3e963cu: goto label_3e963c;
        case 0x3e9640u: goto label_3e9640;
        case 0x3e9644u: goto label_3e9644;
        case 0x3e9648u: goto label_3e9648;
        case 0x3e964cu: goto label_3e964c;
        case 0x3e9650u: goto label_3e9650;
        case 0x3e9654u: goto label_3e9654;
        case 0x3e9658u: goto label_3e9658;
        case 0x3e965cu: goto label_3e965c;
        case 0x3e9660u: goto label_3e9660;
        case 0x3e9664u: goto label_3e9664;
        case 0x3e9668u: goto label_3e9668;
        case 0x3e966cu: goto label_3e966c;
        case 0x3e9670u: goto label_3e9670;
        case 0x3e9674u: goto label_3e9674;
        case 0x3e9678u: goto label_3e9678;
        case 0x3e967cu: goto label_3e967c;
        case 0x3e9680u: goto label_3e9680;
        case 0x3e9684u: goto label_3e9684;
        case 0x3e9688u: goto label_3e9688;
        case 0x3e968cu: goto label_3e968c;
        case 0x3e9690u: goto label_3e9690;
        case 0x3e9694u: goto label_3e9694;
        case 0x3e9698u: goto label_3e9698;
        case 0x3e969cu: goto label_3e969c;
        case 0x3e96a0u: goto label_3e96a0;
        case 0x3e96a4u: goto label_3e96a4;
        case 0x3e96a8u: goto label_3e96a8;
        case 0x3e96acu: goto label_3e96ac;
        case 0x3e96b0u: goto label_3e96b0;
        case 0x3e96b4u: goto label_3e96b4;
        case 0x3e96b8u: goto label_3e96b8;
        case 0x3e96bcu: goto label_3e96bc;
        case 0x3e96c0u: goto label_3e96c0;
        case 0x3e96c4u: goto label_3e96c4;
        case 0x3e96c8u: goto label_3e96c8;
        case 0x3e96ccu: goto label_3e96cc;
        case 0x3e96d0u: goto label_3e96d0;
        case 0x3e96d4u: goto label_3e96d4;
        case 0x3e96d8u: goto label_3e96d8;
        case 0x3e96dcu: goto label_3e96dc;
        case 0x3e96e0u: goto label_3e96e0;
        case 0x3e96e4u: goto label_3e96e4;
        case 0x3e96e8u: goto label_3e96e8;
        case 0x3e96ecu: goto label_3e96ec;
        case 0x3e96f0u: goto label_3e96f0;
        case 0x3e96f4u: goto label_3e96f4;
        case 0x3e96f8u: goto label_3e96f8;
        case 0x3e96fcu: goto label_3e96fc;
        case 0x3e9700u: goto label_3e9700;
        case 0x3e9704u: goto label_3e9704;
        case 0x3e9708u: goto label_3e9708;
        case 0x3e970cu: goto label_3e970c;
        case 0x3e9710u: goto label_3e9710;
        case 0x3e9714u: goto label_3e9714;
        case 0x3e9718u: goto label_3e9718;
        case 0x3e971cu: goto label_3e971c;
        case 0x3e9720u: goto label_3e9720;
        case 0x3e9724u: goto label_3e9724;
        case 0x3e9728u: goto label_3e9728;
        case 0x3e972cu: goto label_3e972c;
        case 0x3e9730u: goto label_3e9730;
        case 0x3e9734u: goto label_3e9734;
        case 0x3e9738u: goto label_3e9738;
        case 0x3e973cu: goto label_3e973c;
        case 0x3e9740u: goto label_3e9740;
        case 0x3e9744u: goto label_3e9744;
        case 0x3e9748u: goto label_3e9748;
        case 0x3e974cu: goto label_3e974c;
        case 0x3e9750u: goto label_3e9750;
        case 0x3e9754u: goto label_3e9754;
        case 0x3e9758u: goto label_3e9758;
        case 0x3e975cu: goto label_3e975c;
        case 0x3e9760u: goto label_3e9760;
        case 0x3e9764u: goto label_3e9764;
        case 0x3e9768u: goto label_3e9768;
        case 0x3e976cu: goto label_3e976c;
        case 0x3e9770u: goto label_3e9770;
        case 0x3e9774u: goto label_3e9774;
        case 0x3e9778u: goto label_3e9778;
        case 0x3e977cu: goto label_3e977c;
        case 0x3e9780u: goto label_3e9780;
        case 0x3e9784u: goto label_3e9784;
        case 0x3e9788u: goto label_3e9788;
        case 0x3e978cu: goto label_3e978c;
        case 0x3e9790u: goto label_3e9790;
        case 0x3e9794u: goto label_3e9794;
        case 0x3e9798u: goto label_3e9798;
        case 0x3e979cu: goto label_3e979c;
        case 0x3e97a0u: goto label_3e97a0;
        case 0x3e97a4u: goto label_3e97a4;
        case 0x3e97a8u: goto label_3e97a8;
        case 0x3e97acu: goto label_3e97ac;
        case 0x3e97b0u: goto label_3e97b0;
        case 0x3e97b4u: goto label_3e97b4;
        case 0x3e97b8u: goto label_3e97b8;
        case 0x3e97bcu: goto label_3e97bc;
        case 0x3e97c0u: goto label_3e97c0;
        case 0x3e97c4u: goto label_3e97c4;
        case 0x3e97c8u: goto label_3e97c8;
        case 0x3e97ccu: goto label_3e97cc;
        case 0x3e97d0u: goto label_3e97d0;
        case 0x3e97d4u: goto label_3e97d4;
        case 0x3e97d8u: goto label_3e97d8;
        case 0x3e97dcu: goto label_3e97dc;
        case 0x3e97e0u: goto label_3e97e0;
        case 0x3e97e4u: goto label_3e97e4;
        case 0x3e97e8u: goto label_3e97e8;
        case 0x3e97ecu: goto label_3e97ec;
        case 0x3e97f0u: goto label_3e97f0;
        case 0x3e97f4u: goto label_3e97f4;
        case 0x3e97f8u: goto label_3e97f8;
        case 0x3e97fcu: goto label_3e97fc;
        case 0x3e9800u: goto label_3e9800;
        case 0x3e9804u: goto label_3e9804;
        case 0x3e9808u: goto label_3e9808;
        case 0x3e980cu: goto label_3e980c;
        case 0x3e9810u: goto label_3e9810;
        case 0x3e9814u: goto label_3e9814;
        case 0x3e9818u: goto label_3e9818;
        case 0x3e981cu: goto label_3e981c;
        case 0x3e9820u: goto label_3e9820;
        case 0x3e9824u: goto label_3e9824;
        case 0x3e9828u: goto label_3e9828;
        case 0x3e982cu: goto label_3e982c;
        case 0x3e9830u: goto label_3e9830;
        case 0x3e9834u: goto label_3e9834;
        case 0x3e9838u: goto label_3e9838;
        case 0x3e983cu: goto label_3e983c;
        case 0x3e9840u: goto label_3e9840;
        case 0x3e9844u: goto label_3e9844;
        case 0x3e9848u: goto label_3e9848;
        case 0x3e984cu: goto label_3e984c;
        case 0x3e9850u: goto label_3e9850;
        case 0x3e9854u: goto label_3e9854;
        case 0x3e9858u: goto label_3e9858;
        case 0x3e985cu: goto label_3e985c;
        case 0x3e9860u: goto label_3e9860;
        case 0x3e9864u: goto label_3e9864;
        case 0x3e9868u: goto label_3e9868;
        case 0x3e986cu: goto label_3e986c;
        case 0x3e9870u: goto label_3e9870;
        case 0x3e9874u: goto label_3e9874;
        case 0x3e9878u: goto label_3e9878;
        case 0x3e987cu: goto label_3e987c;
        case 0x3e9880u: goto label_3e9880;
        case 0x3e9884u: goto label_3e9884;
        case 0x3e9888u: goto label_3e9888;
        case 0x3e988cu: goto label_3e988c;
        case 0x3e9890u: goto label_3e9890;
        case 0x3e9894u: goto label_3e9894;
        case 0x3e9898u: goto label_3e9898;
        case 0x3e989cu: goto label_3e989c;
        case 0x3e98a0u: goto label_3e98a0;
        case 0x3e98a4u: goto label_3e98a4;
        case 0x3e98a8u: goto label_3e98a8;
        case 0x3e98acu: goto label_3e98ac;
        case 0x3e98b0u: goto label_3e98b0;
        case 0x3e98b4u: goto label_3e98b4;
        case 0x3e98b8u: goto label_3e98b8;
        case 0x3e98bcu: goto label_3e98bc;
        case 0x3e98c0u: goto label_3e98c0;
        case 0x3e98c4u: goto label_3e98c4;
        case 0x3e98c8u: goto label_3e98c8;
        case 0x3e98ccu: goto label_3e98cc;
        case 0x3e98d0u: goto label_3e98d0;
        case 0x3e98d4u: goto label_3e98d4;
        case 0x3e98d8u: goto label_3e98d8;
        case 0x3e98dcu: goto label_3e98dc;
        case 0x3e98e0u: goto label_3e98e0;
        case 0x3e98e4u: goto label_3e98e4;
        case 0x3e98e8u: goto label_3e98e8;
        case 0x3e98ecu: goto label_3e98ec;
        case 0x3e98f0u: goto label_3e98f0;
        case 0x3e98f4u: goto label_3e98f4;
        case 0x3e98f8u: goto label_3e98f8;
        case 0x3e98fcu: goto label_3e98fc;
        case 0x3e9900u: goto label_3e9900;
        case 0x3e9904u: goto label_3e9904;
        case 0x3e9908u: goto label_3e9908;
        case 0x3e990cu: goto label_3e990c;
        case 0x3e9910u: goto label_3e9910;
        case 0x3e9914u: goto label_3e9914;
        case 0x3e9918u: goto label_3e9918;
        case 0x3e991cu: goto label_3e991c;
        case 0x3e9920u: goto label_3e9920;
        case 0x3e9924u: goto label_3e9924;
        case 0x3e9928u: goto label_3e9928;
        case 0x3e992cu: goto label_3e992c;
        case 0x3e9930u: goto label_3e9930;
        case 0x3e9934u: goto label_3e9934;
        case 0x3e9938u: goto label_3e9938;
        case 0x3e993cu: goto label_3e993c;
        case 0x3e9940u: goto label_3e9940;
        case 0x3e9944u: goto label_3e9944;
        case 0x3e9948u: goto label_3e9948;
        case 0x3e994cu: goto label_3e994c;
        case 0x3e9950u: goto label_3e9950;
        case 0x3e9954u: goto label_3e9954;
        case 0x3e9958u: goto label_3e9958;
        case 0x3e995cu: goto label_3e995c;
        case 0x3e9960u: goto label_3e9960;
        case 0x3e9964u: goto label_3e9964;
        case 0x3e9968u: goto label_3e9968;
        case 0x3e996cu: goto label_3e996c;
        case 0x3e9970u: goto label_3e9970;
        case 0x3e9974u: goto label_3e9974;
        case 0x3e9978u: goto label_3e9978;
        case 0x3e997cu: goto label_3e997c;
        case 0x3e9980u: goto label_3e9980;
        case 0x3e9984u: goto label_3e9984;
        case 0x3e9988u: goto label_3e9988;
        case 0x3e998cu: goto label_3e998c;
        case 0x3e9990u: goto label_3e9990;
        case 0x3e9994u: goto label_3e9994;
        case 0x3e9998u: goto label_3e9998;
        case 0x3e999cu: goto label_3e999c;
        case 0x3e99a0u: goto label_3e99a0;
        case 0x3e99a4u: goto label_3e99a4;
        case 0x3e99a8u: goto label_3e99a8;
        case 0x3e99acu: goto label_3e99ac;
        case 0x3e99b0u: goto label_3e99b0;
        case 0x3e99b4u: goto label_3e99b4;
        case 0x3e99b8u: goto label_3e99b8;
        case 0x3e99bcu: goto label_3e99bc;
        case 0x3e99c0u: goto label_3e99c0;
        case 0x3e99c4u: goto label_3e99c4;
        case 0x3e99c8u: goto label_3e99c8;
        case 0x3e99ccu: goto label_3e99cc;
        case 0x3e99d0u: goto label_3e99d0;
        case 0x3e99d4u: goto label_3e99d4;
        case 0x3e99d8u: goto label_3e99d8;
        case 0x3e99dcu: goto label_3e99dc;
        case 0x3e99e0u: goto label_3e99e0;
        case 0x3e99e4u: goto label_3e99e4;
        case 0x3e99e8u: goto label_3e99e8;
        case 0x3e99ecu: goto label_3e99ec;
        case 0x3e99f0u: goto label_3e99f0;
        case 0x3e99f4u: goto label_3e99f4;
        case 0x3e99f8u: goto label_3e99f8;
        case 0x3e99fcu: goto label_3e99fc;
        case 0x3e9a00u: goto label_3e9a00;
        case 0x3e9a04u: goto label_3e9a04;
        case 0x3e9a08u: goto label_3e9a08;
        case 0x3e9a0cu: goto label_3e9a0c;
        case 0x3e9a10u: goto label_3e9a10;
        case 0x3e9a14u: goto label_3e9a14;
        case 0x3e9a18u: goto label_3e9a18;
        case 0x3e9a1cu: goto label_3e9a1c;
        case 0x3e9a20u: goto label_3e9a20;
        case 0x3e9a24u: goto label_3e9a24;
        case 0x3e9a28u: goto label_3e9a28;
        case 0x3e9a2cu: goto label_3e9a2c;
        case 0x3e9a30u: goto label_3e9a30;
        case 0x3e9a34u: goto label_3e9a34;
        case 0x3e9a38u: goto label_3e9a38;
        case 0x3e9a3cu: goto label_3e9a3c;
        case 0x3e9a40u: goto label_3e9a40;
        case 0x3e9a44u: goto label_3e9a44;
        case 0x3e9a48u: goto label_3e9a48;
        case 0x3e9a4cu: goto label_3e9a4c;
        case 0x3e9a50u: goto label_3e9a50;
        case 0x3e9a54u: goto label_3e9a54;
        case 0x3e9a58u: goto label_3e9a58;
        case 0x3e9a5cu: goto label_3e9a5c;
        case 0x3e9a60u: goto label_3e9a60;
        case 0x3e9a64u: goto label_3e9a64;
        case 0x3e9a68u: goto label_3e9a68;
        case 0x3e9a6cu: goto label_3e9a6c;
        case 0x3e9a70u: goto label_3e9a70;
        case 0x3e9a74u: goto label_3e9a74;
        case 0x3e9a78u: goto label_3e9a78;
        case 0x3e9a7cu: goto label_3e9a7c;
        case 0x3e9a80u: goto label_3e9a80;
        case 0x3e9a84u: goto label_3e9a84;
        case 0x3e9a88u: goto label_3e9a88;
        case 0x3e9a8cu: goto label_3e9a8c;
        case 0x3e9a90u: goto label_3e9a90;
        case 0x3e9a94u: goto label_3e9a94;
        case 0x3e9a98u: goto label_3e9a98;
        case 0x3e9a9cu: goto label_3e9a9c;
        case 0x3e9aa0u: goto label_3e9aa0;
        case 0x3e9aa4u: goto label_3e9aa4;
        case 0x3e9aa8u: goto label_3e9aa8;
        case 0x3e9aacu: goto label_3e9aac;
        case 0x3e9ab0u: goto label_3e9ab0;
        case 0x3e9ab4u: goto label_3e9ab4;
        case 0x3e9ab8u: goto label_3e9ab8;
        case 0x3e9abcu: goto label_3e9abc;
        case 0x3e9ac0u: goto label_3e9ac0;
        case 0x3e9ac4u: goto label_3e9ac4;
        case 0x3e9ac8u: goto label_3e9ac8;
        case 0x3e9accu: goto label_3e9acc;
        case 0x3e9ad0u: goto label_3e9ad0;
        case 0x3e9ad4u: goto label_3e9ad4;
        case 0x3e9ad8u: goto label_3e9ad8;
        case 0x3e9adcu: goto label_3e9adc;
        case 0x3e9ae0u: goto label_3e9ae0;
        case 0x3e9ae4u: goto label_3e9ae4;
        case 0x3e9ae8u: goto label_3e9ae8;
        case 0x3e9aecu: goto label_3e9aec;
        case 0x3e9af0u: goto label_3e9af0;
        case 0x3e9af4u: goto label_3e9af4;
        case 0x3e9af8u: goto label_3e9af8;
        case 0x3e9afcu: goto label_3e9afc;
        case 0x3e9b00u: goto label_3e9b00;
        case 0x3e9b04u: goto label_3e9b04;
        case 0x3e9b08u: goto label_3e9b08;
        case 0x3e9b0cu: goto label_3e9b0c;
        case 0x3e9b10u: goto label_3e9b10;
        case 0x3e9b14u: goto label_3e9b14;
        case 0x3e9b18u: goto label_3e9b18;
        case 0x3e9b1cu: goto label_3e9b1c;
        case 0x3e9b20u: goto label_3e9b20;
        case 0x3e9b24u: goto label_3e9b24;
        case 0x3e9b28u: goto label_3e9b28;
        case 0x3e9b2cu: goto label_3e9b2c;
        case 0x3e9b30u: goto label_3e9b30;
        case 0x3e9b34u: goto label_3e9b34;
        case 0x3e9b38u: goto label_3e9b38;
        case 0x3e9b3cu: goto label_3e9b3c;
        case 0x3e9b40u: goto label_3e9b40;
        case 0x3e9b44u: goto label_3e9b44;
        case 0x3e9b48u: goto label_3e9b48;
        case 0x3e9b4cu: goto label_3e9b4c;
        case 0x3e9b50u: goto label_3e9b50;
        case 0x3e9b54u: goto label_3e9b54;
        case 0x3e9b58u: goto label_3e9b58;
        case 0x3e9b5cu: goto label_3e9b5c;
        case 0x3e9b60u: goto label_3e9b60;
        case 0x3e9b64u: goto label_3e9b64;
        case 0x3e9b68u: goto label_3e9b68;
        case 0x3e9b6cu: goto label_3e9b6c;
        case 0x3e9b70u: goto label_3e9b70;
        case 0x3e9b74u: goto label_3e9b74;
        case 0x3e9b78u: goto label_3e9b78;
        case 0x3e9b7cu: goto label_3e9b7c;
        case 0x3e9b80u: goto label_3e9b80;
        case 0x3e9b84u: goto label_3e9b84;
        case 0x3e9b88u: goto label_3e9b88;
        case 0x3e9b8cu: goto label_3e9b8c;
        case 0x3e9b90u: goto label_3e9b90;
        case 0x3e9b94u: goto label_3e9b94;
        case 0x3e9b98u: goto label_3e9b98;
        case 0x3e9b9cu: goto label_3e9b9c;
        case 0x3e9ba0u: goto label_3e9ba0;
        case 0x3e9ba4u: goto label_3e9ba4;
        case 0x3e9ba8u: goto label_3e9ba8;
        case 0x3e9bacu: goto label_3e9bac;
        case 0x3e9bb0u: goto label_3e9bb0;
        case 0x3e9bb4u: goto label_3e9bb4;
        case 0x3e9bb8u: goto label_3e9bb8;
        case 0x3e9bbcu: goto label_3e9bbc;
        case 0x3e9bc0u: goto label_3e9bc0;
        case 0x3e9bc4u: goto label_3e9bc4;
        case 0x3e9bc8u: goto label_3e9bc8;
        case 0x3e9bccu: goto label_3e9bcc;
        case 0x3e9bd0u: goto label_3e9bd0;
        case 0x3e9bd4u: goto label_3e9bd4;
        case 0x3e9bd8u: goto label_3e9bd8;
        case 0x3e9bdcu: goto label_3e9bdc;
        case 0x3e9be0u: goto label_3e9be0;
        case 0x3e9be4u: goto label_3e9be4;
        case 0x3e9be8u: goto label_3e9be8;
        case 0x3e9becu: goto label_3e9bec;
        case 0x3e9bf0u: goto label_3e9bf0;
        case 0x3e9bf4u: goto label_3e9bf4;
        case 0x3e9bf8u: goto label_3e9bf8;
        case 0x3e9bfcu: goto label_3e9bfc;
        case 0x3e9c00u: goto label_3e9c00;
        case 0x3e9c04u: goto label_3e9c04;
        case 0x3e9c08u: goto label_3e9c08;
        case 0x3e9c0cu: goto label_3e9c0c;
        case 0x3e9c10u: goto label_3e9c10;
        case 0x3e9c14u: goto label_3e9c14;
        case 0x3e9c18u: goto label_3e9c18;
        case 0x3e9c1cu: goto label_3e9c1c;
        case 0x3e9c20u: goto label_3e9c20;
        case 0x3e9c24u: goto label_3e9c24;
        case 0x3e9c28u: goto label_3e9c28;
        case 0x3e9c2cu: goto label_3e9c2c;
        case 0x3e9c30u: goto label_3e9c30;
        case 0x3e9c34u: goto label_3e9c34;
        case 0x3e9c38u: goto label_3e9c38;
        case 0x3e9c3cu: goto label_3e9c3c;
        case 0x3e9c40u: goto label_3e9c40;
        case 0x3e9c44u: goto label_3e9c44;
        case 0x3e9c48u: goto label_3e9c48;
        case 0x3e9c4cu: goto label_3e9c4c;
        case 0x3e9c50u: goto label_3e9c50;
        case 0x3e9c54u: goto label_3e9c54;
        case 0x3e9c58u: goto label_3e9c58;
        case 0x3e9c5cu: goto label_3e9c5c;
        case 0x3e9c60u: goto label_3e9c60;
        case 0x3e9c64u: goto label_3e9c64;
        case 0x3e9c68u: goto label_3e9c68;
        case 0x3e9c6cu: goto label_3e9c6c;
        case 0x3e9c70u: goto label_3e9c70;
        case 0x3e9c74u: goto label_3e9c74;
        case 0x3e9c78u: goto label_3e9c78;
        case 0x3e9c7cu: goto label_3e9c7c;
        default: break;
    }

    ctx->pc = 0x3e9300u;

label_3e9300:
    // 0x3e9300: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3e9300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3e9304:
    // 0x3e9304: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e9304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e9308:
    // 0x3e9308: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3e9308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3e930c:
    // 0x3e930c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3e930cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3e9310:
    // 0x3e9310: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e9310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e9314:
    // 0x3e9314: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e9314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e9318:
    // 0x3e9318: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e9318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e931c:
    // 0x3e931c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e9320:
    // 0x3e9320: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e9320u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9324:
    // 0x3e9324: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e9324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e9328:
    // 0x3e9328: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3e9328u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e932c:
    // 0x3e932c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e932cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e9330:
    // 0x3e9330: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e9330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e9334:
    // 0x3e9334: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e9334u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9338:
    // 0x3e9338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e9338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e933c:
    // 0x3e933c: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x3e933cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9340:
    // 0x3e9340: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e9340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e9344:
    // 0x3e9344: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x3e9344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
label_3e9348:
    // 0x3e9348: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x3e9348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
label_3e934c:
    // 0x3e934c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x3e934cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_3e9350:
    // 0x3e9350: 0xa0800054  sb          $zero, 0x54($a0)
    ctx->pc = 0x3e9350u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e9354:
    // 0x3e9354: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3e9354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3e9358:
    // 0x3e9358: 0x1000021d  b           . + 4 + (0x21D << 2)
label_3e935c:
    if (ctx->pc == 0x3E935Cu) {
        ctx->pc = 0x3E935Cu;
            // 0x3e935c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9360u;
        goto label_3e9360;
    }
    ctx->pc = 0x3E9358u;
    {
        const bool branch_taken_0x3e9358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E935Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9358u;
            // 0x3e935c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9358) {
            ctx->pc = 0x3E9BD0u;
            goto label_3e9bd0;
        }
    }
    ctx->pc = 0x3E9360u;
label_3e9360:
    // 0x3e9360: 0x92a20006  lbu         $v0, 0x6($s5)
    ctx->pc = 0x3e9360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3e9364:
    // 0x3e9364: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x3e9364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_3e9368:
    // 0x3e9368: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x3e9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3e936c:
    // 0x3e936c: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x3e936cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_3e9370:
    // 0x3e9370: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3e9374:
    // 0x3e9374: 0xc0aabb0  jal         func_2AAEC0
label_3e9378:
    if (ctx->pc == 0x3E9378u) {
        ctx->pc = 0x3E9378u;
            // 0x3e9378: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x3E937Cu;
        goto label_3e937c;
    }
    ctx->pc = 0x3E9374u;
    SET_GPR_U32(ctx, 31, 0x3E937Cu);
    ctx->pc = 0x3E9378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9374u;
            // 0x3e9378: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAEC0u;
    if (runtime->hasFunction(0x2AAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2AAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E937Cu; }
        if (ctx->pc != 0x3E937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAEC0_0x2aaec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E937Cu; }
        if (ctx->pc != 0x3E937Cu) { return; }
    }
    ctx->pc = 0x3E937Cu;
label_3e937c:
    // 0x3e937c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3e937cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e9380:
    // 0x3e9380: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3e9380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9384:
    // 0x3e9384: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_3e9388:
    if (ctx->pc == 0x3E9388u) {
        ctx->pc = 0x3E938Cu;
        goto label_3e938c;
    }
    ctx->pc = 0x3E9384u;
    {
        const bool branch_taken_0x3e9384 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3e9384) {
            ctx->pc = 0x3E93A0u;
            goto label_3e93a0;
        }
    }
    ctx->pc = 0x3E938Cu;
label_3e938c:
    // 0x3e938c: 0xc0fa724  jal         func_3E9C90
label_3e9390:
    if (ctx->pc == 0x3E9390u) {
        ctx->pc = 0x3E9390u;
            // 0x3e9390: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->pc = 0x3E9394u;
        goto label_3e9394;
    }
    ctx->pc = 0x3E938Cu;
    SET_GPR_U32(ctx, 31, 0x3E9394u);
    ctx->pc = 0x3E9390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E938Cu;
            // 0x3e9390: 0x8fa400d4  lw          $a0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C90u;
    if (runtime->hasFunction(0x3E9C90u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9394u; }
        if (ctx->pc != 0x3E9394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C90_0x3e9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9394u; }
        if (ctx->pc != 0x3E9394u) { return; }
    }
    ctx->pc = 0x3E9394u;
label_3e9394:
    // 0x3e9394: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3e9398:
    if (ctx->pc == 0x3E9398u) {
        ctx->pc = 0x3E939Cu;
        goto label_3e939c;
    }
    ctx->pc = 0x3E9394u;
    {
        const bool branch_taken_0x3e9394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9394) {
            ctx->pc = 0x3E93A8u;
            goto label_3e93a8;
        }
    }
    ctx->pc = 0x3E939Cu;
label_3e939c:
    // 0x3e939c: 0x0  nop
    ctx->pc = 0x3e939cu;
    // NOP
label_3e93a0:
    // 0x3e93a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e93a4:
    if (ctx->pc == 0x3E93A4u) {
        ctx->pc = 0x3E93A8u;
        goto label_3e93a8;
    }
    ctx->pc = 0x3E93A0u;
    {
        const bool branch_taken_0x3e93a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e93a0) {
            ctx->pc = 0x3E93D8u;
            goto label_3e93d8;
        }
    }
    ctx->pc = 0x3E93A8u;
label_3e93a8:
    // 0x3e93a8: 0xc0fa720  jal         func_3E9C80
label_3e93ac:
    if (ctx->pc == 0x3E93ACu) {
        ctx->pc = 0x3E93ACu;
            // 0x3e93ac: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3E93B0u;
        goto label_3e93b0;
    }
    ctx->pc = 0x3E93A8u;
    SET_GPR_U32(ctx, 31, 0x3E93B0u);
    ctx->pc = 0x3E93ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E93A8u;
            // 0x3e93ac: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C80u;
    if (runtime->hasFunction(0x3E9C80u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E93B0u; }
        if (ctx->pc != 0x3E93B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C80_0x3e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E93B0u; }
        if (ctx->pc != 0x3E93B0u) { return; }
    }
    ctx->pc = 0x3E93B0u;
label_3e93b0:
    // 0x3e93b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3e93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3e93b4:
    // 0x3e93b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e93b8:
    // 0x3e93b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e93b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e93bc:
    // 0x3e93bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e93bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e93c0:
    // 0x3e93c0: 0x5440ffe8  bnel        $v0, $zero, . + 4 + (-0x18 << 2)
label_3e93c4:
    if (ctx->pc == 0x3E93C4u) {
        ctx->pc = 0x3E93C4u;
            // 0x3e93c4: 0x92a20006  lbu         $v0, 0x6($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
        ctx->pc = 0x3E93C8u;
        goto label_3e93c8;
    }
    ctx->pc = 0x3E93C0u;
    {
        const bool branch_taken_0x3e93c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e93c0) {
            ctx->pc = 0x3E93C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E93C0u;
            // 0x3e93c4: 0x92a20006  lbu         $v0, 0x6($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E9364u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9364;
        }
    }
    ctx->pc = 0x3E93C8u;
label_3e93c8:
    // 0x3e93c8: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3e93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3e93cc:
    // 0x3e93cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3e93ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e93d0:
    // 0x3e93d0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3e93d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3e93d4:
    // 0x3e93d4: 0x0  nop
    ctx->pc = 0x3e93d4u;
    // NOP
label_3e93d8:
    // 0x3e93d8: 0x52c0021d  beql        $s6, $zero, . + 4 + (0x21D << 2)
label_3e93dc:
    if (ctx->pc == 0x3E93DCu) {
        ctx->pc = 0x3E93DCu;
            // 0x3e93dc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3E93E0u;
        goto label_3e93e0;
    }
    ctx->pc = 0x3E93D8u;
    {
        const bool branch_taken_0x3e93d8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e93d8) {
            ctx->pc = 0x3E93DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E93D8u;
            // 0x3e93dc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E9C50u;
            goto label_3e9c50;
        }
    }
    ctx->pc = 0x3E93E0u;
label_3e93e0:
    // 0x3e93e0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3e93e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3e93e4:
    // 0x3e93e4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e93e8:
    // 0x3e93e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3e93ec:
    if (ctx->pc == 0x3E93ECu) {
        ctx->pc = 0x3E93F0u;
        goto label_3e93f0;
    }
    ctx->pc = 0x3E93E8u;
    {
        const bool branch_taken_0x3e93e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e93e8) {
            ctx->pc = 0x3E9410u;
            goto label_3e9410;
        }
    }
    ctx->pc = 0x3E93F0u;
label_3e93f0:
    // 0x3e93f0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3e93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3e93f4:
    // 0x3e93f4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e93f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e93f8:
    // 0x3e93f8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e93fc:
    // 0x3e93fc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e93fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e9400:
    // 0x3e9400: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e9404:
    if (ctx->pc == 0x3E9404u) {
        ctx->pc = 0x3E9408u;
        goto label_3e9408;
    }
    ctx->pc = 0x3E9400u;
    {
        const bool branch_taken_0x3e9400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9400) {
            ctx->pc = 0x3E9410u;
            goto label_3e9410;
        }
    }
    ctx->pc = 0x3E9408u;
label_3e9408:
    // 0x3e9408: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e940c:
    if (ctx->pc == 0x3E940Cu) {
        ctx->pc = 0x3E940Cu;
            // 0x3e940c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E9410u;
        goto label_3e9410;
    }
    ctx->pc = 0x3E9408u;
    {
        const bool branch_taken_0x3e9408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9408u;
            // 0x3e940c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9408) {
            ctx->pc = 0x3E9418u;
            goto label_3e9418;
        }
    }
    ctx->pc = 0x3E9410u;
label_3e9410:
    // 0x3e9410: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9410u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9414:
    // 0x3e9414: 0x0  nop
    ctx->pc = 0x3e9414u;
    // NOP
label_3e9418:
    // 0x3e9418: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e9418u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e941c:
    // 0x3e941c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3e941cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_3e9420:
    // 0x3e9420: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3e9424:
    // 0x3e9424: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3e9428:
    if (ctx->pc == 0x3E9428u) {
        ctx->pc = 0x3E942Cu;
        goto label_3e942c;
    }
    ctx->pc = 0x3E9424u;
    {
        const bool branch_taken_0x3e9424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9424) {
            ctx->pc = 0x3E9450u;
            goto label_3e9450;
        }
    }
    ctx->pc = 0x3E942Cu;
label_3e942c:
    // 0x3e942c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3e942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3e9430:
    // 0x3e9430: 0x2c2b023  subu        $s6, $s6, $v0
    ctx->pc = 0x3e9430u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3e9434:
    // 0x3e9434: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3e9434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9438:
    // 0x3e9438: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x3e9438u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3e943c:
    // 0x3e943c: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3e943cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_3e9440:
    // 0x3e9440: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x3e9440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3e9444:
    // 0x3e9444: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3e9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9448:
    // 0x3e9448: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x3e9448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_3e944c:
    // 0x3e944c: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x3e944cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_3e9450:
    // 0x3e9450: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
label_3e9454:
    if (ctx->pc == 0x3E9454u) {
        ctx->pc = 0x3E9458u;
        goto label_3e9458;
    }
    ctx->pc = 0x3E9450u;
    {
        const bool branch_taken_0x3e9450 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9450) {
            ctx->pc = 0x3E94B8u;
            goto label_3e94b8;
        }
    }
    ctx->pc = 0x3E9458u;
label_3e9458:
    // 0x3e9458: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3e9458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3e945c:
    // 0x3e945c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e945cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e9460:
    // 0x3e9460: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3e9460u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3e9464:
    // 0x3e9464: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x3e9464u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9468:
    // 0x3e9468: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x3e9468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3e946c:
    // 0x3e946c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e9470:
    // 0x3e9470: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e9474:
    if (ctx->pc == 0x3E9474u) {
        ctx->pc = 0x3E9478u;
        goto label_3e9478;
    }
    ctx->pc = 0x3E9470u;
    {
        const bool branch_taken_0x3e9470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9470) {
            ctx->pc = 0x3E9480u;
            goto label_3e9480;
        }
    }
    ctx->pc = 0x3E9478u;
label_3e9478:
    // 0x3e9478: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e947c:
    if (ctx->pc == 0x3E947Cu) {
        ctx->pc = 0x3E9480u;
        goto label_3e9480;
    }
    ctx->pc = 0x3E9478u;
    {
        const bool branch_taken_0x3e9478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9478) {
            ctx->pc = 0x3E94B0u;
            goto label_3e94b0;
        }
    }
    ctx->pc = 0x3E9480u;
label_3e9480:
    // 0x3e9480: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e9480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e9484:
    // 0x3e9484: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3e9484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3e9488:
    // 0x3e9488: 0x40f809  jalr        $v0
label_3e948c:
    if (ctx->pc == 0x3E948Cu) {
        ctx->pc = 0x3E948Cu;
            // 0x3e948c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3E9490u;
        goto label_3e9490;
    }
    ctx->pc = 0x3E9488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9490u);
        ctx->pc = 0x3E948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9488u;
            // 0x3e948c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E9490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E9490u; }
            if (ctx->pc != 0x3E9490u) { return; }
        }
        }
    }
    ctx->pc = 0x3E9490u;
label_3e9490:
    // 0x3e9490: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x3e9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_3e9494:
    // 0x3e9494: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3e9494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9498:
    // 0x3e9498: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
label_3e949c:
    if (ctx->pc == 0x3E949Cu) {
        ctx->pc = 0x3E94A0u;
        goto label_3e94a0;
    }
    ctx->pc = 0x3E9498u;
    {
        const bool branch_taken_0x3e9498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9498) {
            ctx->pc = 0x3E9458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9458;
        }
    }
    ctx->pc = 0x3E94A0u;
label_3e94a0:
    // 0x3e94a0: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3e94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3e94a4:
    // 0x3e94a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e94a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e94a8:
    // 0x3e94a8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3e94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3e94ac:
    // 0x3e94ac: 0x0  nop
    ctx->pc = 0x3e94acu;
    // NOP
label_3e94b0:
    // 0x3e94b0: 0x126001e6  beqz        $s3, . + 4 + (0x1E6 << 2)
label_3e94b4:
    if (ctx->pc == 0x3E94B4u) {
        ctx->pc = 0x3E94B8u;
        goto label_3e94b8;
    }
    ctx->pc = 0x3E94B0u;
    {
        const bool branch_taken_0x3e94b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e94b0) {
            ctx->pc = 0x3E9C4Cu;
            goto label_3e9c4c;
        }
    }
    ctx->pc = 0x3E94B8u;
label_3e94b8:
    // 0x3e94b8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3e94b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e94bc:
    // 0x3e94bc: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3e94c0:
    if (ctx->pc == 0x3E94C0u) {
        ctx->pc = 0x3E94C4u;
        goto label_3e94c4;
    }
    ctx->pc = 0x3E94BCu;
    {
        const bool branch_taken_0x3e94bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e94bc) {
            ctx->pc = 0x3E9760u;
            goto label_3e9760;
        }
    }
    ctx->pc = 0x3E94C4u;
label_3e94c4:
    // 0x3e94c4: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3e94c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3e94c8:
    // 0x3e94c8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e94cc:
    if (ctx->pc == 0x3E94CCu) {
        ctx->pc = 0x3E94D0u;
        goto label_3e94d0;
    }
    ctx->pc = 0x3E94C8u;
    {
        const bool branch_taken_0x3e94c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e94c8) {
            ctx->pc = 0x3E9550u;
            goto label_3e9550;
        }
    }
    ctx->pc = 0x3E94D0u;
label_3e94d0:
    // 0x3e94d0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e94d4:
    if (ctx->pc == 0x3E94D4u) {
        ctx->pc = 0x3E94D8u;
        goto label_3e94d8;
    }
    ctx->pc = 0x3E94D0u;
    {
        const bool branch_taken_0x3e94d0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e94d0) {
            ctx->pc = 0x3E94E0u;
            goto label_3e94e0;
        }
    }
    ctx->pc = 0x3E94D8u;
label_3e94d8:
    // 0x3e94d8: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3e94dc:
    if (ctx->pc == 0x3E94DCu) {
        ctx->pc = 0x3E94DCu;
            // 0x3e94dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E94E0u;
        goto label_3e94e0;
    }
    ctx->pc = 0x3E94D8u;
    {
        const bool branch_taken_0x3e94d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E94DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E94D8u;
            // 0x3e94dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e94d8) {
            ctx->pc = 0x3E9768u;
            goto label_3e9768;
        }
    }
    ctx->pc = 0x3E94E0u;
label_3e94e0:
    // 0x3e94e0: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3e94e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e94e4:
    // 0x3e94e4: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3e94e8:
    if (ctx->pc == 0x3E94E8u) {
        ctx->pc = 0x3E94ECu;
        goto label_3e94ec;
    }
    ctx->pc = 0x3E94E4u;
    {
        const bool branch_taken_0x3e94e4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e94e4) {
            ctx->pc = 0x3E9518u;
            goto label_3e9518;
        }
    }
    ctx->pc = 0x3E94ECu;
label_3e94ec:
    // 0x3e94ec: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e94f0:
    // 0x3e94f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e94f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e94f4:
    // 0x3e94f4: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e94f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e94f8:
    // 0x3e94f8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e94f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e94fc:
    // 0x3e94fc: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9500:
    // 0x3e9500: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e9500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e9504:
    // 0x3e9504: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9504u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3e9508:
    // 0x3e9508: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e950c:
    // 0x3e950c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9510:
    // 0x3e9510: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e9514:
    if (ctx->pc == 0x3E9514u) {
        ctx->pc = 0x3E9514u;
            // 0x3e9514: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9518u;
        goto label_3e9518;
    }
    ctx->pc = 0x3E9510u;
    {
        const bool branch_taken_0x3e9510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9510u;
            // 0x3e9514: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9510) {
            ctx->pc = 0x3E9548u;
            goto label_3e9548;
        }
    }
    ctx->pc = 0x3E9518u;
label_3e9518:
    // 0x3e9518: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e9518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e951c:
    // 0x3e951c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e951cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e9520:
    // 0x3e9520: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e9520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9524:
    // 0x3e9524: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e9524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e9528:
    // 0x3e9528: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e9528u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e952c:
    // 0x3e952c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e952cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e9530:
    // 0x3e9530: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e9530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e9534:
    // 0x3e9534: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9534u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9538:
    // 0x3e9538: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e953c:
    // 0x3e953c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e953cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9540:
    // 0x3e9540: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3e9540u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3e9544:
    // 0x3e9544: 0x0  nop
    ctx->pc = 0x3e9544u;
    // NOP
label_3e9548:
    // 0x3e9548: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3e9548u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e954c:
    // 0x3e954c: 0x0  nop
    ctx->pc = 0x3e954cu;
    // NOP
label_3e9550:
    // 0x3e9550: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9554:
    // 0x3e9554: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3e9558:
    if (ctx->pc == 0x3E9558u) {
        ctx->pc = 0x3E955Cu;
        goto label_3e955c;
    }
    ctx->pc = 0x3E9554u;
    {
        const bool branch_taken_0x3e9554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9554) {
            ctx->pc = 0x3E9760u;
            goto label_3e9760;
        }
    }
    ctx->pc = 0x3E955Cu;
label_3e955c:
    // 0x3e955c: 0x0  nop
    ctx->pc = 0x3e955cu;
    // NOP
label_3e9560:
    // 0x3e9560: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e9564:
    if (ctx->pc == 0x3E9564u) {
        ctx->pc = 0x3E9568u;
        goto label_3e9568;
    }
    ctx->pc = 0x3E9560u;
    {
        const bool branch_taken_0x3e9560 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e9560) {
            ctx->pc = 0x3E9570u;
            goto label_3e9570;
        }
    }
    ctx->pc = 0x3E9568u;
label_3e9568:
    // 0x3e9568: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3e956c:
    if (ctx->pc == 0x3E956Cu) {
        ctx->pc = 0x3E956Cu;
            // 0x3e956c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9570u;
        goto label_3e9570;
    }
    ctx->pc = 0x3E9568u;
    {
        const bool branch_taken_0x3e9568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E956Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9568u;
            // 0x3e956c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9568) {
            ctx->pc = 0x3E9768u;
            goto label_3e9768;
        }
    }
    ctx->pc = 0x3E9570u;
label_3e9570:
    // 0x3e9570: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3e9570u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e9574:
    // 0x3e9574: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3e9578:
    if (ctx->pc == 0x3E9578u) {
        ctx->pc = 0x3E957Cu;
        goto label_3e957c;
    }
    ctx->pc = 0x3E9574u;
    {
        const bool branch_taken_0x3e9574 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9574) {
            ctx->pc = 0x3E9630u;
            goto label_3e9630;
        }
    }
    ctx->pc = 0x3E957Cu;
label_3e957c:
    // 0x3e957c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9580:
    // 0x3e9580: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3e9584:
    if (ctx->pc == 0x3E9584u) {
        ctx->pc = 0x3E9588u;
        goto label_3e9588;
    }
    ctx->pc = 0x3E9580u;
    {
        const bool branch_taken_0x3e9580 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9580) {
            ctx->pc = 0x3E95B0u;
            goto label_3e95b0;
        }
    }
    ctx->pc = 0x3E9588u;
label_3e9588:
    // 0x3e9588: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e958c:
    // 0x3e958c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e958cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e9590:
    // 0x3e9590: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e9590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9594:
    // 0x3e9594: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e9594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e9598:
    // 0x3e9598: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e9598u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e959c:
    // 0x3e959c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e959cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e95a0:
    // 0x3e95a0: 0xc0aad30  jal         func_2AB4C0
label_3e95a4:
    if (ctx->pc == 0x3E95A4u) {
        ctx->pc = 0x3E95A4u;
            // 0x3e95a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E95A8u;
        goto label_3e95a8;
    }
    ctx->pc = 0x3E95A0u;
    SET_GPR_U32(ctx, 31, 0x3E95A8u);
    ctx->pc = 0x3E95A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E95A0u;
            // 0x3e95a4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E95A8u; }
        if (ctx->pc != 0x3E95A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E95A8u; }
        if (ctx->pc != 0x3E95A8u) { return; }
    }
    ctx->pc = 0x3E95A8u;
label_3e95a8:
    // 0x3e95a8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e95ac:
    if (ctx->pc == 0x3E95ACu) {
        ctx->pc = 0x3E95B0u;
        goto label_3e95b0;
    }
    ctx->pc = 0x3E95A8u;
    {
        const bool branch_taken_0x3e95a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e95a8) {
            ctx->pc = 0x3E9610u;
            goto label_3e9610;
        }
    }
    ctx->pc = 0x3E95B0u;
label_3e95b0:
    // 0x3e95b0: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3e95b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e95b4:
    // 0x3e95b4: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3e95b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e95b8:
    // 0x3e95b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e95b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e95bc:
    // 0x3e95bc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e95bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e95c0:
    // 0x3e95c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e95c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e95c4:
    // 0x3e95c4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3e95c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e95c8:
    // 0x3e95c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e95c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e95cc:
    // 0x3e95cc: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e95ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e95d0:
    // 0x3e95d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e95d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e95d4:
    // 0x3e95d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e95d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e95d8:
    // 0x3e95d8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e95d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e95dc:
    // 0x3e95dc: 0xc0aad30  jal         func_2AB4C0
label_3e95e0:
    if (ctx->pc == 0x3E95E0u) {
        ctx->pc = 0x3E95E0u;
            // 0x3e95e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E95E4u;
        goto label_3e95e4;
    }
    ctx->pc = 0x3E95DCu;
    SET_GPR_U32(ctx, 31, 0x3E95E4u);
    ctx->pc = 0x3E95E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E95DCu;
            // 0x3e95e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E95E4u; }
        if (ctx->pc != 0x3E95E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E95E4u; }
        if (ctx->pc != 0x3E95E4u) { return; }
    }
    ctx->pc = 0x3E95E4u;
label_3e95e4:
    // 0x3e95e4: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3e95e8:
    if (ctx->pc == 0x3E95E8u) {
        ctx->pc = 0x3E95ECu;
        goto label_3e95ec;
    }
    ctx->pc = 0x3E95E4u;
    {
        const bool branch_taken_0x3e95e4 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e95e4) {
            ctx->pc = 0x3E9600u;
            goto label_3e9600;
        }
    }
    ctx->pc = 0x3E95ECu;
label_3e95ec:
    // 0x3e95ec: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e95ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e95f0:
    // 0x3e95f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e95f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e95f4:
    // 0x3e95f4: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e95f8:
    // 0x3e95f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e95fc:
    if (ctx->pc == 0x3E95FCu) {
        ctx->pc = 0x3E95FCu;
            // 0x3e95fc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E9600u;
        goto label_3e9600;
    }
    ctx->pc = 0x3E95F8u;
    {
        const bool branch_taken_0x3e95f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E95FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E95F8u;
            // 0x3e95fc: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e95f8) {
            ctx->pc = 0x3E9610u;
            goto label_3e9610;
        }
    }
    ctx->pc = 0x3E9600u;
label_3e9600:
    // 0x3e9600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9604:
    // 0x3e9604: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e9604u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e9608:
    // 0x3e9608: 0x10000057  b           . + 4 + (0x57 << 2)
label_3e960c:
    if (ctx->pc == 0x3E960Cu) {
        ctx->pc = 0x3E960Cu;
            // 0x3e960c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9610u;
        goto label_3e9610;
    }
    ctx->pc = 0x3E9608u;
    {
        const bool branch_taken_0x3e9608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9608u;
            // 0x3e960c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9608) {
            ctx->pc = 0x3E9768u;
            goto label_3e9768;
        }
    }
    ctx->pc = 0x3E9610u;
label_3e9610:
    // 0x3e9610: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9614:
    // 0x3e9614: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9618:
    // 0x3e9618: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3e9618u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3e961c:
    // 0x3e961c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9620:
    // 0x3e9620: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e9620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e9624:
    // 0x3e9624: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3e9628:
    if (ctx->pc == 0x3E9628u) {
        ctx->pc = 0x3E9628u;
            // 0x3e9628: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3E962Cu;
        goto label_3e962c;
    }
    ctx->pc = 0x3E9624u;
    {
        const bool branch_taken_0x3e9624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9624u;
            // 0x3e9628: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9624) {
            ctx->pc = 0x3E9750u;
            goto label_3e9750;
        }
    }
    ctx->pc = 0x3E962Cu;
label_3e962c:
    // 0x3e962c: 0x0  nop
    ctx->pc = 0x3e962cu;
    // NOP
label_3e9630:
    // 0x3e9630: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3e9630u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3e9634:
    // 0x3e9634: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3e9638:
    if (ctx->pc == 0x3E9638u) {
        ctx->pc = 0x3E963Cu;
        goto label_3e963c;
    }
    ctx->pc = 0x3E9634u;
    {
        const bool branch_taken_0x3e9634 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9634) {
            ctx->pc = 0x3E96C0u;
            goto label_3e96c0;
        }
    }
    ctx->pc = 0x3E963Cu;
label_3e963c:
    // 0x3e963c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e963cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9640:
    // 0x3e9640: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3e9644:
    if (ctx->pc == 0x3E9644u) {
        ctx->pc = 0x3E9648u;
        goto label_3e9648;
    }
    ctx->pc = 0x3E9640u;
    {
        const bool branch_taken_0x3e9640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9640) {
            ctx->pc = 0x3E9668u;
            goto label_3e9668;
        }
    }
    ctx->pc = 0x3E9648u;
label_3e9648:
    // 0x3e9648: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e9648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e964c:
    // 0x3e964c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3e964cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e9650:
    // 0x3e9650: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3e9650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e9654:
    // 0x3e9654: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e9654u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e9658:
    // 0x3e9658: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3e9658u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e965c:
    // 0x3e965c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3e965cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3e9660:
    // 0x3e9660: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e9664:
    if (ctx->pc == 0x3E9664u) {
        ctx->pc = 0x3E9664u;
            // 0x3e9664: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E9668u;
        goto label_3e9668;
    }
    ctx->pc = 0x3E9660u;
    {
        const bool branch_taken_0x3e9660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9660u;
            // 0x3e9664: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9660) {
            ctx->pc = 0x3E9690u;
            goto label_3e9690;
        }
    }
    ctx->pc = 0x3E9668u;
label_3e9668:
    // 0x3e9668: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3e9668u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e966c:
    // 0x3e966c: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3e966cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e9670:
    // 0x3e9670: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e9670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9674:
    // 0x3e9674: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3e9674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9678:
    // 0x3e9678: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3e9678u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e967c:
    // 0x3e967c: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3e967cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3e9680:
    // 0x3e9680: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3e9680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e9684:
    // 0x3e9684: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e9684u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e9688:
    // 0x3e9688: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e9688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e968c:
    // 0x3e968c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e968cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9690:
    // 0x3e9690: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9694:
    // 0x3e9694: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3e9694u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3e9698:
    // 0x3e9698: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3e969c:
    if (ctx->pc == 0x3E969Cu) {
        ctx->pc = 0x3E96A0u;
        goto label_3e96a0;
    }
    ctx->pc = 0x3E9698u;
    {
        const bool branch_taken_0x3e9698 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3e9698) {
            ctx->pc = 0x3E9748u;
            goto label_3e9748;
        }
    }
    ctx->pc = 0x3E96A0u;
label_3e96a0:
    // 0x3e96a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e96a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e96a4:
    // 0x3e96a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e96a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e96a8:
    // 0x3e96a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e96a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e96ac:
    // 0x3e96ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e96acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e96b0:
    // 0x3e96b0: 0xc0aad30  jal         func_2AB4C0
label_3e96b4:
    if (ctx->pc == 0x3E96B4u) {
        ctx->pc = 0x3E96B4u;
            // 0x3e96b4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E96B8u;
        goto label_3e96b8;
    }
    ctx->pc = 0x3E96B0u;
    SET_GPR_U32(ctx, 31, 0x3E96B8u);
    ctx->pc = 0x3E96B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E96B0u;
            // 0x3e96b4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E96B8u; }
        if (ctx->pc != 0x3E96B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E96B8u; }
        if (ctx->pc != 0x3E96B8u) { return; }
    }
    ctx->pc = 0x3E96B8u;
label_3e96b8:
    // 0x3e96b8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3e96bc:
    if (ctx->pc == 0x3E96BCu) {
        ctx->pc = 0x3E96C0u;
        goto label_3e96c0;
    }
    ctx->pc = 0x3E96B8u;
    {
        const bool branch_taken_0x3e96b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e96b8) {
            ctx->pc = 0x3E9748u;
            goto label_3e9748;
        }
    }
    ctx->pc = 0x3E96C0u;
label_3e96c0:
    // 0x3e96c0: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e96c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e96c4:
    // 0x3e96c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e96c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e96c8:
    // 0x3e96c8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e96c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e96cc:
    // 0x3e96cc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e96ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e96d0:
    // 0x3e96d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e96d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e96d4:
    // 0x3e96d4: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e96d4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e96d8:
    // 0x3e96d8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e96d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e96dc:
    // 0x3e96dc: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e96dcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e96e0:
    // 0x3e96e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e96e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e96e4:
    // 0x3e96e4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e96e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e96e8:
    // 0x3e96e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e96e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e96ec:
    // 0x3e96ec: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e96ecu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e96f0:
    // 0x3e96f0: 0xc0aad30  jal         func_2AB4C0
label_3e96f4:
    if (ctx->pc == 0x3E96F4u) {
        ctx->pc = 0x3E96F4u;
            // 0x3e96f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E96F8u;
        goto label_3e96f8;
    }
    ctx->pc = 0x3E96F0u;
    SET_GPR_U32(ctx, 31, 0x3E96F8u);
    ctx->pc = 0x3E96F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E96F0u;
            // 0x3e96f4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E96F8u; }
        if (ctx->pc != 0x3E96F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E96F8u; }
        if (ctx->pc != 0x3E96F8u) { return; }
    }
    ctx->pc = 0x3E96F8u;
label_3e96f8:
    // 0x3e96f8: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3e96fc:
    if (ctx->pc == 0x3E96FCu) {
        ctx->pc = 0x3E9700u;
        goto label_3e9700;
    }
    ctx->pc = 0x3E96F8u;
    {
        const bool branch_taken_0x3e96f8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e96f8) {
            ctx->pc = 0x3E9738u;
            goto label_3e9738;
        }
    }
    ctx->pc = 0x3E9700u;
label_3e9700:
    // 0x3e9700: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9704:
    // 0x3e9704: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e9704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9708:
    // 0x3e9708: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e970c:
    // 0x3e970c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e9710:
    // 0x3e9710: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3e9710u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e9714:
    // 0x3e9714: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e9714u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9718:
    // 0x3e9718: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3e9718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3e971c:
    // 0x3e971c: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3e971cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3e9720:
    // 0x3e9720: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e9720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e9724:
    // 0x3e9724: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9724u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9728:
    // 0x3e9728: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e972c:
    // 0x3e972c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e972cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9730:
    // 0x3e9730: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e9734:
    if (ctx->pc == 0x3E9734u) {
        ctx->pc = 0x3E9734u;
            // 0x3e9734: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3E9738u;
        goto label_3e9738;
    }
    ctx->pc = 0x3E9730u;
    {
        const bool branch_taken_0x3e9730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9730u;
            // 0x3e9734: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9730) {
            ctx->pc = 0x3E9748u;
            goto label_3e9748;
        }
    }
    ctx->pc = 0x3E9738u;
label_3e9738:
    // 0x3e9738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e973c:
    // 0x3e973c: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e973cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e9740:
    // 0x3e9740: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e9744:
    if (ctx->pc == 0x3E9744u) {
        ctx->pc = 0x3E9744u;
            // 0x3e9744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9748u;
        goto label_3e9748;
    }
    ctx->pc = 0x3E9740u;
    {
        const bool branch_taken_0x3e9740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9740u;
            // 0x3e9744: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9740) {
            ctx->pc = 0x3E9768u;
            goto label_3e9768;
        }
    }
    ctx->pc = 0x3E9748u;
label_3e9748:
    // 0x3e9748: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3e9748u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3e974c:
    // 0x3e974c: 0x0  nop
    ctx->pc = 0x3e974cu;
    // NOP
label_3e9750:
    // 0x3e9750: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9754:
    // 0x3e9754: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3e9758:
    if (ctx->pc == 0x3E9758u) {
        ctx->pc = 0x3E975Cu;
        goto label_3e975c;
    }
    ctx->pc = 0x3E9754u;
    {
        const bool branch_taken_0x3e9754 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9754) {
            ctx->pc = 0x3E9560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9560;
        }
    }
    ctx->pc = 0x3E975Cu;
label_3e975c:
    // 0x3e975c: 0x0  nop
    ctx->pc = 0x3e975cu;
    // NOP
label_3e9760:
    // 0x3e9760: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3e9760u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e9764:
    // 0x3e9764: 0x0  nop
    ctx->pc = 0x3e9764u;
    // NOP
label_3e9768:
    // 0x3e9768: 0x1040ff39  beqz        $v0, . + 4 + (-0xC7 << 2)
label_3e976c:
    if (ctx->pc == 0x3E976Cu) {
        ctx->pc = 0x3E9770u;
        goto label_3e9770;
    }
    ctx->pc = 0x3E9768u;
    {
        const bool branch_taken_0x3e9768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9768) {
            ctx->pc = 0x3E9450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9450;
        }
    }
    ctx->pc = 0x3E9770u;
label_3e9770:
    // 0x3e9770: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3e9770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9774:
    // 0x3e9774: 0x18400116  blez        $v0, . + 4 + (0x116 << 2)
label_3e9778:
    if (ctx->pc == 0x3E9778u) {
        ctx->pc = 0x3E977Cu;
        goto label_3e977c;
    }
    ctx->pc = 0x3E9774u;
    {
        const bool branch_taken_0x3e9774 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e9774) {
            ctx->pc = 0x3E9BD0u;
            goto label_3e9bd0;
        }
    }
    ctx->pc = 0x3E977Cu;
label_3e977c:
    // 0x3e977c: 0x0  nop
    ctx->pc = 0x3e977cu;
    // NOP
label_3e9780:
    // 0x3e9780: 0x92a50006  lbu         $a1, 0x6($s5)
    ctx->pc = 0x3e9780u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_3e9784:
    // 0x3e9784: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x3e9784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3e9788:
    // 0x3e9788: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x3e9788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3e978c:
    // 0x3e978c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x3e978cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3e9790:
    // 0x3e9790: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3e9794:
    if (ctx->pc == 0x3E9794u) {
        ctx->pc = 0x3E9794u;
            // 0x3e9794: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9798u;
        goto label_3e9798;
    }
    ctx->pc = 0x3E9790u;
    {
        const bool branch_taken_0x3e9790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9790u;
            // 0x3e9794: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9790) {
            ctx->pc = 0x3E97A0u;
            goto label_3e97a0;
        }
    }
    ctx->pc = 0x3E9798u;
label_3e9798:
    // 0x3e9798: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e979c:
    if (ctx->pc == 0x3E979Cu) {
        ctx->pc = 0x3E979Cu;
            // 0x3e979c: 0x2c51823  subu        $v1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->pc = 0x3E97A0u;
        goto label_3e97a0;
    }
    ctx->pc = 0x3E9798u;
    {
        const bool branch_taken_0x3e9798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E979Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9798u;
            // 0x3e979c: 0x2c51823  subu        $v1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9798) {
            ctx->pc = 0x3E97A8u;
            goto label_3e97a8;
        }
    }
    ctx->pc = 0x3E97A0u;
label_3e97a0:
    // 0x3e97a0: 0x2c41823  subu        $v1, $s6, $a0
    ctx->pc = 0x3e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_3e97a4:
    // 0x3e97a4: 0x0  nop
    ctx->pc = 0x3e97a4u;
    // NOP
label_3e97a8:
    // 0x3e97a8: 0x76082b  sltu        $at, $v1, $s6
    ctx->pc = 0x3e97a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3e97ac:
    // 0x3e97ac: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
label_3e97b0:
    if (ctx->pc == 0x3E97B0u) {
        ctx->pc = 0x3E97B4u;
        goto label_3e97b4;
    }
    ctx->pc = 0x3E97ACu;
    {
        const bool branch_taken_0x3e97ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e97ac) {
            ctx->pc = 0x3E9878u;
            goto label_3e9878;
        }
    }
    ctx->pc = 0x3E97B4u;
label_3e97b4:
    // 0x3e97b4: 0x92c80000  lbu         $t0, 0x0($s6)
    ctx->pc = 0x3e97b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3e97b8:
    // 0x3e97b8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3e97b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3e97bc:
    // 0x3e97bc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3e97bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3e97c0:
    // 0x3e97c0: 0x14880029  bne         $a0, $t0, . + 4 + (0x29 << 2)
label_3e97c4:
    if (ctx->pc == 0x3E97C4u) {
        ctx->pc = 0x3E97C4u;
            // 0x3e97c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E97C8u;
        goto label_3e97c8;
    }
    ctx->pc = 0x3E97C0u;
    {
        const bool branch_taken_0x3e97c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x3E97C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E97C0u;
            // 0x3e97c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97c0) {
            ctx->pc = 0x3E9868u;
            goto label_3e9868;
        }
    }
    ctx->pc = 0x3E97C8u;
label_3e97c8:
    // 0x3e97c8: 0x92a70008  lbu         $a3, 0x8($s5)
    ctx->pc = 0x3e97c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 8)));
label_3e97cc:
    // 0x3e97cc: 0x2c32823  subu        $a1, $s6, $v1
    ctx->pc = 0x3e97ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_3e97d0:
    // 0x3e97d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3e97d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3e97d4:
    // 0x3e97d4: 0x207202b  sltu        $a0, $s0, $a3
    ctx->pc = 0x3e97d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3e97d8:
    // 0x3e97d8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
label_3e97dc:
    if (ctx->pc == 0x3E97DCu) {
        ctx->pc = 0x3E97E0u;
        goto label_3e97e0;
    }
    ctx->pc = 0x3E97D8u;
    {
        const bool branch_taken_0x3e97d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e97d8) {
            ctx->pc = 0x3E9830u;
            goto label_3e9830;
        }
    }
    ctx->pc = 0x3E97E0u;
label_3e97e0:
    // 0x3e97e0: 0x2f0082b  sltu        $at, $s7, $s0
    ctx->pc = 0x3e97e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e97e4:
    // 0x3e97e4: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_3e97e8:
    if (ctx->pc == 0x3E97E8u) {
        ctx->pc = 0x3E97ECu;
        goto label_3e97ec;
    }
    ctx->pc = 0x3E97E4u;
    {
        const bool branch_taken_0x3e97e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e97e4) {
            ctx->pc = 0x3E9830u;
            goto label_3e9830;
        }
    }
    ctx->pc = 0x3E97ECu;
label_3e97ec:
    // 0x3e97ec: 0x92a40007  lbu         $a0, 0x7($s5)
    ctx->pc = 0x3e97ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
label_3e97f0:
    // 0x3e97f0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3e97f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e97f4:
    // 0x3e97f4: 0x204202b  sltu        $a0, $s0, $a0
    ctx->pc = 0x3e97f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3e97f8:
    // 0x3e97f8: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_3e97fc:
    if (ctx->pc == 0x3E97FCu) {
        ctx->pc = 0x3E97FCu;
            // 0x3e97fc: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9800u;
        goto label_3e9800;
    }
    ctx->pc = 0x3E97F8u;
    {
        const bool branch_taken_0x3e97f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E97FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E97F8u;
            // 0x3e97fc: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e97f8) {
            ctx->pc = 0x3E9830u;
            goto label_3e9830;
        }
    }
    ctx->pc = 0x3E9800u;
label_3e9800:
    // 0x3e9800: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e9800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e9804:
    // 0x3e9804: 0xc0fa458  jal         func_3E9160
label_3e9808:
    if (ctx->pc == 0x3E9808u) {
        ctx->pc = 0x3E9808u;
            // 0x3e9808: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E980Cu;
        goto label_3e980c;
    }
    ctx->pc = 0x3E9804u;
    SET_GPR_U32(ctx, 31, 0x3E980Cu);
    ctx->pc = 0x3E9808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9804u;
            // 0x3e9808: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E980Cu; }
        if (ctx->pc != 0x3E980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E980Cu; }
        if (ctx->pc != 0x3E980Cu) { return; }
    }
    ctx->pc = 0x3E980Cu;
label_3e980c:
    // 0x3e980c: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3e980cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9810:
    // 0x3e9810: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x3e9810u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3e9814:
    // 0x3e9814: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3e9814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3e9818:
    // 0x3e9818: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x3e9818u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e981c:
    // 0x3e981c: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x3e981cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3e9820:
    // 0x3e9820: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3e9820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3e9824:
    // 0x3e9824: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3e9824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3e9828:
    // 0x3e9828: 0x1000002d  b           . + 4 + (0x2D << 2)
label_3e982c:
    if (ctx->pc == 0x3E982Cu) {
        ctx->pc = 0x3E982Cu;
            // 0x3e982c: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9830u;
        goto label_3e9830;
    }
    ctx->pc = 0x3E9828u;
    {
        const bool branch_taken_0x3e9828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9828u;
            // 0x3e982c: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9828) {
            ctx->pc = 0x3E98E0u;
            goto label_3e98e0;
        }
    }
    ctx->pc = 0x3E9830u;
label_3e9830:
    // 0x3e9830: 0x2d03021  addu        $a2, $s6, $s0
    ctx->pc = 0x3e9830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_3e9834:
    // 0x3e9834: 0xc2202b  sltu        $a0, $a2, $v0
    ctx->pc = 0x3e9834u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9838:
    // 0x3e9838: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_3e983c:
    if (ctx->pc == 0x3E983Cu) {
        ctx->pc = 0x3E983Cu;
            // 0x3e983c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x3E9840u;
        goto label_3e9840;
    }
    ctx->pc = 0x3E9838u;
    {
        const bool branch_taken_0x3e9838 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E983Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9838u;
            // 0x3e983c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9838) {
            ctx->pc = 0x3E9858u;
            goto label_3e9858;
        }
    }
    ctx->pc = 0x3E9840u;
label_3e9840:
    // 0x3e9840: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x3e9840u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3e9844:
    // 0x3e9844: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_3e9848:
    if (ctx->pc == 0x3E9848u) {
        ctx->pc = 0x3E984Cu;
        goto label_3e984c;
    }
    ctx->pc = 0x3E9844u;
    {
        const bool branch_taken_0x3e9844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9844) {
            ctx->pc = 0x3E9878u;
            goto label_3e9878;
        }
    }
    ctx->pc = 0x3E984Cu;
label_3e984c:
    // 0x3e984c: 0x10000024  b           . + 4 + (0x24 << 2)
label_3e9850:
    if (ctx->pc == 0x3E9850u) {
        ctx->pc = 0x3E9850u;
            // 0x3e9850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9854u;
        goto label_3e9854;
    }
    ctx->pc = 0x3E984Cu;
    {
        const bool branch_taken_0x3e984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E984Cu;
            // 0x3e9850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e984c) {
            ctx->pc = 0x3E98E0u;
            goto label_3e98e0;
        }
    }
    ctx->pc = 0x3E9854u;
label_3e9854:
    // 0x3e9854: 0x0  nop
    ctx->pc = 0x3e9854u;
    // NOP
label_3e9858:
    // 0x3e9858: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x3e9858u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e985c:
    // 0x3e985c: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x3e985cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_3e9860:
    // 0x3e9860: 0x10c4ffdb  beq         $a2, $a0, . + 4 + (-0x25 << 2)
label_3e9864:
    if (ctx->pc == 0x3E9864u) {
        ctx->pc = 0x3E9868u;
        goto label_3e9868;
    }
    ctx->pc = 0x3E9860u;
    {
        const bool branch_taken_0x3e9860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x3e9860) {
            ctx->pc = 0x3E97D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e97d0;
        }
    }
    ctx->pc = 0x3E9868u;
label_3e9868:
    // 0x3e9868: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3e9868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3e986c:
    // 0x3e986c: 0x76202b  sltu        $a0, $v1, $s6
    ctx->pc = 0x3e986cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_3e9870:
    // 0x3e9870: 0x1480ffd1  bnez        $a0, . + 4 + (-0x2F << 2)
label_3e9874:
    if (ctx->pc == 0x3E9874u) {
        ctx->pc = 0x3E9878u;
        goto label_3e9878;
    }
    ctx->pc = 0x3E9870u;
    {
        const bool branch_taken_0x3e9870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9870) {
            ctx->pc = 0x3E97B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e97b8;
        }
    }
    ctx->pc = 0x3E9878u;
label_3e9878:
    // 0x3e9878: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
label_3e987c:
    if (ctx->pc == 0x3E987Cu) {
        ctx->pc = 0x3E9880u;
        goto label_3e9880;
    }
    ctx->pc = 0x3E9878u;
    {
        const bool branch_taken_0x3e9878 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9878) {
            ctx->pc = 0x3E98B0u;
            goto label_3e98b0;
        }
    }
    ctx->pc = 0x3E9880u;
label_3e9880:
    // 0x3e9880: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e9880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e9884:
    // 0x3e9884: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3e9884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3e9888:
    // 0x3e9888: 0xc0fa458  jal         func_3E9160
label_3e988c:
    if (ctx->pc == 0x3E988Cu) {
        ctx->pc = 0x3E988Cu;
            // 0x3e988c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9890u;
        goto label_3e9890;
    }
    ctx->pc = 0x3E9888u;
    SET_GPR_U32(ctx, 31, 0x3E9890u);
    ctx->pc = 0x3E988Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9888u;
            // 0x3e988c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9160u;
    if (runtime->hasFunction(0x3E9160u)) {
        auto targetFn = runtime->lookupFunction(0x3E9160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9890u; }
        if (ctx->pc != 0x3E9890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9160_0x3e9160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9890u; }
        if (ctx->pc != 0x3E9890u) { return; }
    }
    ctx->pc = 0x3E9890u;
label_3e9890:
    // 0x3e9890: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3e9890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9894:
    // 0x3e9894: 0x2d7b021  addu        $s6, $s6, $s7
    ctx->pc = 0x3e9894u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
label_3e9898:
    // 0x3e9898: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3e9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3e989c:
    // 0x3e989c: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x3e989cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_3e98a0:
    // 0x3e98a0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3e98a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3e98a4:
    // 0x3e98a4: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3e98a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3e98a8:
    // 0x3e98a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e98ac:
    if (ctx->pc == 0x3E98ACu) {
        ctx->pc = 0x3E98ACu;
            // 0x3e98ac: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->pc = 0x3E98B0u;
        goto label_3e98b0;
    }
    ctx->pc = 0x3E98A8u;
    {
        const bool branch_taken_0x3e98a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E98ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E98A8u;
            // 0x3e98ac: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e98a8) {
            ctx->pc = 0x3E98D8u;
            goto label_3e98d8;
        }
    }
    ctx->pc = 0x3E98B0u;
label_3e98b0:
    // 0x3e98b0: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x3e98b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_3e98b4:
    // 0x3e98b4: 0xc0fa44c  jal         func_3E9130
label_3e98b8:
    if (ctx->pc == 0x3E98B8u) {
        ctx->pc = 0x3E98B8u;
            // 0x3e98b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E98BCu;
        goto label_3e98bc;
    }
    ctx->pc = 0x3E98B4u;
    SET_GPR_U32(ctx, 31, 0x3E98BCu);
    ctx->pc = 0x3E98B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E98B4u;
            // 0x3e98b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9130u;
    if (runtime->hasFunction(0x3E9130u)) {
        auto targetFn = runtime->lookupFunction(0x3E9130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E98BCu; }
        if (ctx->pc != 0x3E98BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9130_0x3e9130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E98BCu; }
        if (ctx->pc != 0x3E98BCu) { return; }
    }
    ctx->pc = 0x3E98BCu;
label_3e98bc:
    // 0x3e98bc: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x3e98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e98c0:
    // 0x3e98c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3e98c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3e98c4:
    // 0x3e98c4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x3e98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
label_3e98c8:
    // 0x3e98c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e98c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3e98cc:
    // 0x3e98cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e98d0:
    // 0x3e98d0: 0xafa300dc  sw          $v1, 0xDC($sp)
    ctx->pc = 0x3e98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
label_3e98d4:
    // 0x3e98d4: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x3e98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_3e98d8:
    // 0x3e98d8: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x3e98d8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e98dc:
    // 0x3e98dc: 0x0  nop
    ctx->pc = 0x3e98dcu;
    // NOP
label_3e98e0:
    // 0x3e98e0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_3e98e4:
    if (ctx->pc == 0x3E98E4u) {
        ctx->pc = 0x3E98E8u;
        goto label_3e98e8;
    }
    ctx->pc = 0x3E98E0u;
    {
        const bool branch_taken_0x3e98e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e98e0) {
            ctx->pc = 0x3E98F8u;
            goto label_3e98f8;
        }
    }
    ctx->pc = 0x3E98E8u;
label_3e98e8:
    // 0x3e98e8: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3e98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e98ec:
    // 0x3e98ec: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3e98ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3e98f0:
    // 0x3e98f0: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3e98f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3e98f4:
    // 0x3e98f4: 0x0  nop
    ctx->pc = 0x3e98f4u;
    // NOP
label_3e98f8:
    // 0x3e98f8: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x3e98f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e98fc:
    // 0x3e98fc: 0x106000a8  beqz        $v1, . + 4 + (0xA8 << 2)
label_3e9900:
    if (ctx->pc == 0x3E9900u) {
        ctx->pc = 0x3E9904u;
        goto label_3e9904;
    }
    ctx->pc = 0x3E98FCu;
    {
        const bool branch_taken_0x3e98fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e98fc) {
            ctx->pc = 0x3E9BA0u;
            goto label_3e9ba0;
        }
    }
    ctx->pc = 0x3E9904u;
label_3e9904:
    // 0x3e9904: 0x92a20054  lbu         $v0, 0x54($s5)
    ctx->pc = 0x3e9904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 84)));
label_3e9908:
    // 0x3e9908: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_3e990c:
    if (ctx->pc == 0x3E990Cu) {
        ctx->pc = 0x3E9910u;
        goto label_3e9910;
    }
    ctx->pc = 0x3E9908u;
    {
        const bool branch_taken_0x3e9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9908) {
            ctx->pc = 0x3E9990u;
            goto label_3e9990;
        }
    }
    ctx->pc = 0x3E9910u;
label_3e9910:
    // 0x3e9910: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e9914:
    if (ctx->pc == 0x3E9914u) {
        ctx->pc = 0x3E9918u;
        goto label_3e9918;
    }
    ctx->pc = 0x3E9910u;
    {
        const bool branch_taken_0x3e9910 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e9910) {
            ctx->pc = 0x3E9920u;
            goto label_3e9920;
        }
    }
    ctx->pc = 0x3E9918u;
label_3e9918:
    // 0x3e9918: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_3e991c:
    if (ctx->pc == 0x3E991Cu) {
        ctx->pc = 0x3E991Cu;
            // 0x3e991c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9920u;
        goto label_3e9920;
    }
    ctx->pc = 0x3E9918u;
    {
        const bool branch_taken_0x3e9918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E991Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9918u;
            // 0x3e991c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9918) {
            ctx->pc = 0x3E9BA8u;
            goto label_3e9ba8;
        }
    }
    ctx->pc = 0x3E9920u;
label_3e9920:
    // 0x3e9920: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x3e9920u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e9924:
    // 0x3e9924: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_3e9928:
    if (ctx->pc == 0x3E9928u) {
        ctx->pc = 0x3E992Cu;
        goto label_3e992c;
    }
    ctx->pc = 0x3E9924u;
    {
        const bool branch_taken_0x3e9924 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9924) {
            ctx->pc = 0x3E9958u;
            goto label_3e9958;
        }
    }
    ctx->pc = 0x3E992Cu;
label_3e992c:
    // 0x3e992c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9930:
    // 0x3e9930: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e9930u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9934:
    // 0x3e9934: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e9934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e9938:
    // 0x3e9938: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9938u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e993c:
    // 0x3e993c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9940:
    // 0x3e9940: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e9940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e9944:
    // 0x3e9944: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9944u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_3e9948:
    // 0x3e9948: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e994c:
    // 0x3e994c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9950:
    // 0x3e9950: 0x1000000d  b           . + 4 + (0xD << 2)
label_3e9954:
    if (ctx->pc == 0x3E9954u) {
        ctx->pc = 0x3E9954u;
            // 0x3e9954: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9958u;
        goto label_3e9958;
    }
    ctx->pc = 0x3E9950u;
    {
        const bool branch_taken_0x3e9950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9950u;
            // 0x3e9954: 0xaea20050  sw          $v0, 0x50($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9950) {
            ctx->pc = 0x3E9988u;
            goto label_3e9988;
        }
    }
    ctx->pc = 0x3E9958u;
label_3e9958:
    // 0x3e9958: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e9958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e995c:
    // 0x3e995c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e995cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e9960:
    // 0x3e9960: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e9960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9964:
    // 0x3e9964: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e9964u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e9968:
    // 0x3e9968: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e9968u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e996c:
    // 0x3e996c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e996cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e9970:
    // 0x3e9970: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e9970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e9974:
    // 0x3e9974: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9974u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9978:
    // 0x3e9978: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e997c:
    // 0x3e997c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e997cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9980:
    // 0x3e9980: 0x30510007  andi        $s1, $v0, 0x7
    ctx->pc = 0x3e9980u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3e9984:
    // 0x3e9984: 0x0  nop
    ctx->pc = 0x3e9984u;
    // NOP
label_3e9988:
    // 0x3e9988: 0xa2a00054  sb          $zero, 0x54($s5)
    ctx->pc = 0x3e9988u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 0));
label_3e998c:
    // 0x3e998c: 0x0  nop
    ctx->pc = 0x3e998cu;
    // NOP
label_3e9990:
    // 0x3e9990: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9994:
    // 0x3e9994: 0x10a00082  beqz        $a1, . + 4 + (0x82 << 2)
label_3e9998:
    if (ctx->pc == 0x3E9998u) {
        ctx->pc = 0x3E999Cu;
        goto label_3e999c;
    }
    ctx->pc = 0x3E9994u;
    {
        const bool branch_taken_0x3e9994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9994) {
            ctx->pc = 0x3E9BA0u;
            goto label_3e9ba0;
        }
    }
    ctx->pc = 0x3E999Cu;
label_3e999c:
    // 0x3e999c: 0x0  nop
    ctx->pc = 0x3e999cu;
    // NOP
label_3e99a0:
    // 0x3e99a0: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
label_3e99a4:
    if (ctx->pc == 0x3E99A4u) {
        ctx->pc = 0x3E99A8u;
        goto label_3e99a8;
    }
    ctx->pc = 0x3E99A0u;
    {
        const bool branch_taken_0x3e99a0 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e99a0) {
            ctx->pc = 0x3E99B0u;
            goto label_3e99b0;
        }
    }
    ctx->pc = 0x3E99A8u;
label_3e99a8:
    // 0x3e99a8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3e99ac:
    if (ctx->pc == 0x3E99ACu) {
        ctx->pc = 0x3E99ACu;
            // 0x3e99ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E99B0u;
        goto label_3e99b0;
    }
    ctx->pc = 0x3E99A8u;
    {
        const bool branch_taken_0x3e99a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E99ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E99A8u;
            // 0x3e99ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e99a8) {
            ctx->pc = 0x3E9BA8u;
            goto label_3e9ba8;
        }
    }
    ctx->pc = 0x3E99B0u;
label_3e99b0:
    // 0x3e99b0: 0x2ca10009  sltiu       $at, $a1, 0x9
    ctx->pc = 0x3e99b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_3e99b4:
    // 0x3e99b4: 0x1420002e  bnez        $at, . + 4 + (0x2E << 2)
label_3e99b8:
    if (ctx->pc == 0x3E99B8u) {
        ctx->pc = 0x3E99BCu;
        goto label_3e99bc;
    }
    ctx->pc = 0x3E99B4u;
    {
        const bool branch_taken_0x3e99b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e99b4) {
            ctx->pc = 0x3E9A70u;
            goto label_3e9a70;
        }
    }
    ctx->pc = 0x3E99BCu;
label_3e99bc:
    // 0x3e99bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e99bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e99c0:
    // 0x3e99c0: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_3e99c4:
    if (ctx->pc == 0x3E99C4u) {
        ctx->pc = 0x3E99C8u;
        goto label_3e99c8;
    }
    ctx->pc = 0x3E99C0u;
    {
        const bool branch_taken_0x3e99c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e99c0) {
            ctx->pc = 0x3E99F0u;
            goto label_3e99f0;
        }
    }
    ctx->pc = 0x3E99C8u;
label_3e99c8:
    // 0x3e99c8: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e99c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e99cc:
    // 0x3e99cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e99ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e99d0:
    // 0x3e99d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e99d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e99d4:
    // 0x3e99d4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e99d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e99d8:
    // 0x3e99d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e99d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e99dc:
    // 0x3e99dc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e99dcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e99e0:
    // 0x3e99e0: 0xc0aad30  jal         func_2AB4C0
label_3e99e4:
    if (ctx->pc == 0x3E99E4u) {
        ctx->pc = 0x3E99E4u;
            // 0x3e99e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E99E8u;
        goto label_3e99e8;
    }
    ctx->pc = 0x3E99E0u;
    SET_GPR_U32(ctx, 31, 0x3E99E8u);
    ctx->pc = 0x3E99E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E99E0u;
            // 0x3e99e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E99E8u; }
        if (ctx->pc != 0x3E99E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E99E8u; }
        if (ctx->pc != 0x3E99E8u) { return; }
    }
    ctx->pc = 0x3E99E8u;
label_3e99e8:
    // 0x3e99e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3e99ec:
    if (ctx->pc == 0x3E99ECu) {
        ctx->pc = 0x3E99F0u;
        goto label_3e99f0;
    }
    ctx->pc = 0x3E99E8u;
    {
        const bool branch_taken_0x3e99e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e99e8) {
            ctx->pc = 0x3E9A50u;
            goto label_3e9a50;
        }
    }
    ctx->pc = 0x3E99F0u;
label_3e99f0:
    // 0x3e99f0: 0x8ea60050  lw          $a2, 0x50($s5)
    ctx->pc = 0x3e99f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e99f4:
    // 0x3e99f4: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x3e99f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e99f8:
    // 0x3e99f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e99f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e99fc:
    // 0x3e99fc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e99fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9a00:
    // 0x3e9a00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e9a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9a04:
    // 0x3e9a04: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x3e9a04u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_3e9a08:
    // 0x3e9a08: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e9a08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e9a0c:
    // 0x3e9a0c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e9a0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e9a10:
    // 0x3e9a10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e9a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e9a14:
    // 0x3e9a14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e9a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e9a18:
    // 0x3e9a18: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9a18u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9a1c:
    // 0x3e9a1c: 0xc0aad30  jal         func_2AB4C0
label_3e9a20:
    if (ctx->pc == 0x3E9A20u) {
        ctx->pc = 0x3E9A20u;
            // 0x3e9a20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E9A24u;
        goto label_3e9a24;
    }
    ctx->pc = 0x3E9A1Cu;
    SET_GPR_U32(ctx, 31, 0x3E9A24u);
    ctx->pc = 0x3E9A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9A1Cu;
            // 0x3e9a20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9A24u; }
        if (ctx->pc != 0x3E9A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9A24u; }
        if (ctx->pc != 0x3E9A24u) { return; }
    }
    ctx->pc = 0x3E9A24u;
label_3e9a24:
    // 0x3e9a24: 0x1a400006  blez        $s2, . + 4 + (0x6 << 2)
label_3e9a28:
    if (ctx->pc == 0x3E9A28u) {
        ctx->pc = 0x3E9A2Cu;
        goto label_3e9a2c;
    }
    ctx->pc = 0x3E9A24u;
    {
        const bool branch_taken_0x3e9a24 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e9a24) {
            ctx->pc = 0x3E9A40u;
            goto label_3e9a40;
        }
    }
    ctx->pc = 0x3E9A2Cu;
label_3e9a2c:
    // 0x3e9a2c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9a30:
    // 0x3e9a30: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x3e9a30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9a34:
    // 0x3e9a34: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x3e9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
label_3e9a38:
    // 0x3e9a38: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e9a3c:
    if (ctx->pc == 0x3E9A3Cu) {
        ctx->pc = 0x3E9A3Cu;
            // 0x3e9a3c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E9A40u;
        goto label_3e9a40;
    }
    ctx->pc = 0x3E9A38u;
    {
        const bool branch_taken_0x3e9a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9A38u;
            // 0x3e9a3c: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a38) {
            ctx->pc = 0x3E9A50u;
            goto label_3e9a50;
        }
    }
    ctx->pc = 0x3E9A40u;
label_3e9a40:
    // 0x3e9a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9a44:
    // 0x3e9a44: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e9a44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e9a48:
    // 0x3e9a48: 0x10000057  b           . + 4 + (0x57 << 2)
label_3e9a4c:
    if (ctx->pc == 0x3E9A4Cu) {
        ctx->pc = 0x3E9A4Cu;
            // 0x3e9a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A50u;
        goto label_3e9a50;
    }
    ctx->pc = 0x3E9A48u;
    {
        const bool branch_taken_0x3e9a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9A48u;
            // 0x3e9a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a48) {
            ctx->pc = 0x3E9BA8u;
            goto label_3e9ba8;
        }
    }
    ctx->pc = 0x3E9A50u;
label_3e9a50:
    // 0x3e9a50: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9a54:
    // 0x3e9a54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9a58:
    // 0x3e9a58: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x3e9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_3e9a5c:
    // 0x3e9a5c: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9a60:
    // 0x3e9a60: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3e9a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_3e9a64:
    // 0x3e9a64: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3e9a68:
    if (ctx->pc == 0x3E9A68u) {
        ctx->pc = 0x3E9A68u;
            // 0x3e9a68: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3E9A6Cu;
        goto label_3e9a6c;
    }
    ctx->pc = 0x3E9A64u;
    {
        const bool branch_taken_0x3e9a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9A64u;
            // 0x3e9a68: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9a64) {
            ctx->pc = 0x3E9B90u;
            goto label_3e9b90;
        }
    }
    ctx->pc = 0x3E9A6Cu;
label_3e9a6c:
    // 0x3e9a6c: 0x0  nop
    ctx->pc = 0x3e9a6cu;
    // NOP
label_3e9a70:
    // 0x3e9a70: 0x225082b  sltu        $at, $s1, $a1
    ctx->pc = 0x3e9a70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3e9a74:
    // 0x3e9a74: 0x14200022  bnez        $at, . + 4 + (0x22 << 2)
label_3e9a78:
    if (ctx->pc == 0x3E9A78u) {
        ctx->pc = 0x3E9A7Cu;
        goto label_3e9a7c;
    }
    ctx->pc = 0x3E9A74u;
    {
        const bool branch_taken_0x3e9a74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9a74) {
            ctx->pc = 0x3E9B00u;
            goto label_3e9b00;
        }
    }
    ctx->pc = 0x3E9A7Cu;
label_3e9a7c:
    // 0x3e9a7c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3e9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9a80:
    // 0x3e9a80: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_3e9a84:
    if (ctx->pc == 0x3E9A84u) {
        ctx->pc = 0x3E9A88u;
        goto label_3e9a88;
    }
    ctx->pc = 0x3E9A80u;
    {
        const bool branch_taken_0x3e9a80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e9a80) {
            ctx->pc = 0x3E9AA8u;
            goto label_3e9aa8;
        }
    }
    ctx->pc = 0x3E9A88u;
label_3e9a88:
    // 0x3e9a88: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e9a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9a8c:
    // 0x3e9a8c: 0x451823  subu        $v1, $v0, $a1
    ctx->pc = 0x3e9a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e9a90:
    // 0x3e9a90: 0x2251023  subu        $v0, $s1, $a1
    ctx->pc = 0x3e9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e9a94:
    // 0x3e9a94: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3e9a94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e9a98:
    // 0x3e9a98: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x3e9a98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e9a9c:
    // 0x3e9a9c: 0x431004  sllv        $v0, $v1, $v0
    ctx->pc = 0x3e9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3e9aa0:
    // 0x3e9aa0: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e9aa4:
    if (ctx->pc == 0x3E9AA4u) {
        ctx->pc = 0x3E9AA4u;
            // 0x3e9aa4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3E9AA8u;
        goto label_3e9aa8;
    }
    ctx->pc = 0x3E9AA0u;
    {
        const bool branch_taken_0x3e9aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9AA0u;
            // 0x3e9aa4: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9aa0) {
            ctx->pc = 0x3E9AD0u;
            goto label_3e9ad0;
        }
    }
    ctx->pc = 0x3E9AA8u;
label_3e9aa8:
    // 0x3e9aa8: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x3e9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3e9aac:
    // 0x3e9aac: 0x2251823  subu        $v1, $s1, $a1
    ctx->pc = 0x3e9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_3e9ab0:
    // 0x3e9ab0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e9ab0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9ab4:
    // 0x3e9ab4: 0x8ea50050  lw          $a1, 0x50($s5)
    ctx->pc = 0x3e9ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9ab8:
    // 0x3e9ab8: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3e9ab8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3e9abc:
    // 0x3e9abc: 0x852007  srav        $a0, $a1, $a0
    ctx->pc = 0x3e9abcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 4) & 0x1F));
label_3e9ac0:
    // 0x3e9ac0: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x3e9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_3e9ac4:
    // 0x3e9ac4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e9ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e9ac8:
    // 0x3e9ac8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e9ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e9acc:
    // 0x3e9acc: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9accu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9ad0:
    // 0x3e9ad0: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9ad4:
    // 0x3e9ad4: 0x2228823  subu        $s1, $s1, $v0
    ctx->pc = 0x3e9ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3e9ad8:
    // 0x3e9ad8: 0x1e20002b  bgtz        $s1, . + 4 + (0x2B << 2)
label_3e9adc:
    if (ctx->pc == 0x3E9ADCu) {
        ctx->pc = 0x3E9AE0u;
        goto label_3e9ae0;
    }
    ctx->pc = 0x3E9AD8u;
    {
        const bool branch_taken_0x3e9ad8 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3e9ad8) {
            ctx->pc = 0x3E9B88u;
            goto label_3e9b88;
        }
    }
    ctx->pc = 0x3E9AE0u;
label_3e9ae0:
    // 0x3e9ae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e9ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ae4:
    // 0x3e9ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e9ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9ae8:
    // 0x3e9ae8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3e9ae8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3e9aec:
    // 0x3e9aec: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e9aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e9af0:
    // 0x3e9af0: 0xc0aad30  jal         func_2AB4C0
label_3e9af4:
    if (ctx->pc == 0x3E9AF4u) {
        ctx->pc = 0x3E9AF4u;
            // 0x3e9af4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3E9AF8u;
        goto label_3e9af8;
    }
    ctx->pc = 0x3E9AF0u;
    SET_GPR_U32(ctx, 31, 0x3E9AF8u);
    ctx->pc = 0x3E9AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9AF0u;
            // 0x3e9af4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9AF8u; }
        if (ctx->pc != 0x3E9AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9AF8u; }
        if (ctx->pc != 0x3E9AF8u) { return; }
    }
    ctx->pc = 0x3E9AF8u;
label_3e9af8:
    // 0x3e9af8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3e9afc:
    if (ctx->pc == 0x3E9AFCu) {
        ctx->pc = 0x3E9B00u;
        goto label_3e9b00;
    }
    ctx->pc = 0x3E9AF8u;
    {
        const bool branch_taken_0x3e9af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9af8) {
            ctx->pc = 0x3E9B88u;
            goto label_3e9b88;
        }
    }
    ctx->pc = 0x3E9B00u;
label_3e9b00:
    // 0x3e9b00: 0x8ea40050  lw          $a0, 0x50($s5)
    ctx->pc = 0x3e9b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9b04:
    // 0x3e9b04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3e9b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9b08:
    // 0x3e9b08: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x3e9b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_3e9b0c:
    // 0x3e9b0c: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x3e9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_3e9b10:
    // 0x3e9b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e9b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9b14:
    // 0x3e9b14: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x3e9b14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3e9b18:
    // 0x3e9b18: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3e9b18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3e9b1c:
    // 0x3e9b1c: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x3e9b1cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
label_3e9b20:
    // 0x3e9b20: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e9b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e9b24:
    // 0x3e9b24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3e9b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3e9b28:
    // 0x3e9b28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3e9b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3e9b2c:
    // 0x3e9b2c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9b30:
    // 0x3e9b30: 0xc0aad30  jal         func_2AB4C0
label_3e9b34:
    if (ctx->pc == 0x3E9B34u) {
        ctx->pc = 0x3E9B34u;
            // 0x3e9b34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3E9B38u;
        goto label_3e9b38;
    }
    ctx->pc = 0x3E9B30u;
    SET_GPR_U32(ctx, 31, 0x3E9B38u);
    ctx->pc = 0x3E9B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9B30u;
            // 0x3e9b34: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB4C0u;
    if (runtime->hasFunction(0x2AB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9B38u; }
        if (ctx->pc != 0x3E9B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AB4C0_0x2ab4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E9B38u; }
        if (ctx->pc != 0x3E9B38u) { return; }
    }
    ctx->pc = 0x3E9B38u;
label_3e9b38:
    // 0x3e9b38: 0x1a40000f  blez        $s2, . + 4 + (0xF << 2)
label_3e9b3c:
    if (ctx->pc == 0x3E9B3Cu) {
        ctx->pc = 0x3E9B40u;
        goto label_3e9b40;
    }
    ctx->pc = 0x3E9B38u;
    {
        const bool branch_taken_0x3e9b38 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3e9b38) {
            ctx->pc = 0x3E9B78u;
            goto label_3e9b78;
        }
    }
    ctx->pc = 0x3E9B40u;
label_3e9b40:
    // 0x3e9b40: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9b44:
    // 0x3e9b44: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3e9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3e9b48:
    // 0x3e9b48: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x3e9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_3e9b4c:
    // 0x3e9b4c: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x3e9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3e9b50:
    // 0x3e9b50: 0x852823  subu        $a1, $a0, $a1
    ctx->pc = 0x3e9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3e9b54:
    // 0x3e9b54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3e9b54u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9b58:
    // 0x3e9b58: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x3e9b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_3e9b5c:
    // 0x3e9b5c: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3e9b5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_3e9b60:
    // 0x3e9b60: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x3e9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
label_3e9b64:
    // 0x3e9b64: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3e9b64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3e9b68:
    // 0x3e9b68: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x3e9b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9b6c:
    // 0x3e9b6c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x3e9b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3e9b70:
    // 0x3e9b70: 0x10000005  b           . + 4 + (0x5 << 2)
label_3e9b74:
    if (ctx->pc == 0x3E9B74u) {
        ctx->pc = 0x3E9B74u;
            // 0x3e9b74: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x3E9B78u;
        goto label_3e9b78;
    }
    ctx->pc = 0x3E9B70u;
    {
        const bool branch_taken_0x3e9b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9B70u;
            // 0x3e9b74: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b70) {
            ctx->pc = 0x3E9B88u;
            goto label_3e9b88;
        }
    }
    ctx->pc = 0x3E9B78u;
label_3e9b78:
    // 0x3e9b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9b7c:
    // 0x3e9b7c: 0xa2a20054  sb          $v0, 0x54($s5)
    ctx->pc = 0x3e9b7cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 84), (uint8_t)GPR_U32(ctx, 2));
label_3e9b80:
    // 0x3e9b80: 0x10000009  b           . + 4 + (0x9 << 2)
label_3e9b84:
    if (ctx->pc == 0x3E9B84u) {
        ctx->pc = 0x3E9B84u;
            // 0x3e9b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B88u;
        goto label_3e9b88;
    }
    ctx->pc = 0x3E9B80u;
    {
        const bool branch_taken_0x3e9b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9B80u;
            // 0x3e9b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9b80) {
            ctx->pc = 0x3E9BA8u;
            goto label_3e9ba8;
        }
    }
    ctx->pc = 0x3E9B88u;
label_3e9b88:
    // 0x3e9b88: 0xaea0004c  sw          $zero, 0x4C($s5)
    ctx->pc = 0x3e9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 0));
label_3e9b8c:
    // 0x3e9b8c: 0x0  nop
    ctx->pc = 0x3e9b8cu;
    // NOP
label_3e9b90:
    // 0x3e9b90: 0x8ea5004c  lw          $a1, 0x4C($s5)
    ctx->pc = 0x3e9b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_3e9b94:
    // 0x3e9b94: 0x14a0ff82  bnez        $a1, . + 4 + (-0x7E << 2)
label_3e9b98:
    if (ctx->pc == 0x3E9B98u) {
        ctx->pc = 0x3E9B9Cu;
        goto label_3e9b9c;
    }
    ctx->pc = 0x3E9B94u;
    {
        const bool branch_taken_0x3e9b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9b94) {
            ctx->pc = 0x3E99A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e99a0;
        }
    }
    ctx->pc = 0x3E9B9Cu;
label_3e9b9c:
    // 0x3e9b9c: 0x0  nop
    ctx->pc = 0x3e9b9cu;
    // NOP
label_3e9ba0:
    // 0x3e9ba0: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3e9ba0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3e9ba4:
    // 0x3e9ba4: 0x0  nop
    ctx->pc = 0x3e9ba4u;
    // NOP
label_3e9ba8:
    // 0x3e9ba8: 0x1040fe29  beqz        $v0, . + 4 + (-0x1D7 << 2)
label_3e9bac:
    if (ctx->pc == 0x3E9BACu) {
        ctx->pc = 0x3E9BB0u;
        goto label_3e9bb0;
    }
    ctx->pc = 0x3E9BA8u;
    {
        const bool branch_taken_0x3e9ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ba8) {
            ctx->pc = 0x3E9450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9450;
        }
    }
    ctx->pc = 0x3E9BB0u;
label_3e9bb0:
    // 0x3e9bb0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x3e9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_3e9bb4:
    // 0x3e9bb4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_3e9bb8:
    if (ctx->pc == 0x3E9BB8u) {
        ctx->pc = 0x3E9BBCu;
        goto label_3e9bbc;
    }
    ctx->pc = 0x3E9BB4u;
    {
        const bool branch_taken_0x3e9bb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e9bb4) {
            ctx->pc = 0x3E9BD0u;
            goto label_3e9bd0;
        }
    }
    ctx->pc = 0x3E9BBCu;
label_3e9bbc:
    // 0x3e9bbc: 0x1e40fef0  bgtz        $s2, . + 4 + (-0x110 << 2)
label_3e9bc0:
    if (ctx->pc == 0x3E9BC0u) {
        ctx->pc = 0x3E9BC4u;
        goto label_3e9bc4;
    }
    ctx->pc = 0x3E9BBCu;
    {
        const bool branch_taken_0x3e9bbc = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3e9bbc) {
            ctx->pc = 0x3E9780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9780;
        }
    }
    ctx->pc = 0x3E9BC4u;
label_3e9bc4:
    // 0x3e9bc4: 0x1000fe22  b           . + 4 + (-0x1DE << 2)
label_3e9bc8:
    if (ctx->pc == 0x3E9BC8u) {
        ctx->pc = 0x3E9BCCu;
        goto label_3e9bcc;
    }
    ctx->pc = 0x3E9BC4u;
    {
        const bool branch_taken_0x3e9bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9bc4) {
            ctx->pc = 0x3E9450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9450;
        }
    }
    ctx->pc = 0x3E9BCCu;
label_3e9bcc:
    // 0x3e9bcc: 0x0  nop
    ctx->pc = 0x3e9bccu;
    // NOP
label_3e9bd0:
    // 0x3e9bd0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3e9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3e9bd4:
    // 0x3e9bd4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x3e9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3e9bd8:
    // 0x3e9bd8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e9bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e9bdc:
    // 0x3e9bdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e9bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3e9be0:
    // 0x3e9be0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3e9be4:
    if (ctx->pc == 0x3E9BE4u) {
        ctx->pc = 0x3E9BE8u;
        goto label_3e9be8;
    }
    ctx->pc = 0x3E9BE0u;
    {
        const bool branch_taken_0x3e9be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9be0) {
            ctx->pc = 0x3E9C08u;
            goto label_3e9c08;
        }
    }
    ctx->pc = 0x3E9BE8u;
label_3e9be8:
    // 0x3e9be8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x3e9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_3e9bec:
    // 0x3e9bec: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x3e9becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3e9bf0:
    // 0x3e9bf0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x3e9bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_3e9bf4:
    // 0x3e9bf4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3e9bf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3e9bf8:
    // 0x3e9bf8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3e9bfc:
    if (ctx->pc == 0x3E9BFCu) {
        ctx->pc = 0x3E9C00u;
        goto label_3e9c00;
    }
    ctx->pc = 0x3E9BF8u;
    {
        const bool branch_taken_0x3e9bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9bf8) {
            ctx->pc = 0x3E9C08u;
            goto label_3e9c08;
        }
    }
    ctx->pc = 0x3E9C00u;
label_3e9c00:
    // 0x3e9c00: 0x10000003  b           . + 4 + (0x3 << 2)
label_3e9c04:
    if (ctx->pc == 0x3E9C04u) {
        ctx->pc = 0x3E9C04u;
            // 0x3e9c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E9C08u;
        goto label_3e9c08;
    }
    ctx->pc = 0x3E9C00u;
    {
        const bool branch_taken_0x3e9c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9C00u;
            // 0x3e9c04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c00) {
            ctx->pc = 0x3E9C10u;
            goto label_3e9c10;
        }
    }
    ctx->pc = 0x3E9C08u;
label_3e9c08:
    // 0x3e9c08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e9c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9c0c:
    // 0x3e9c0c: 0x0  nop
    ctx->pc = 0x3e9c0cu;
    // NOP
label_3e9c10:
    // 0x3e9c10: 0x1040fdd3  beqz        $v0, . + 4 + (-0x22D << 2)
label_3e9c14:
    if (ctx->pc == 0x3E9C14u) {
        ctx->pc = 0x3E9C18u;
        goto label_3e9c18;
    }
    ctx->pc = 0x3E9C10u;
    {
        const bool branch_taken_0x3e9c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9c10) {
            ctx->pc = 0x3E9360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e9360;
        }
    }
    ctx->pc = 0x3E9C18u;
label_3e9c18:
    // 0x3e9c18: 0x2a210008  slti        $at, $s1, 0x8
    ctx->pc = 0x3e9c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_3e9c1c:
    // 0x3e9c1c: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3e9c20:
    if (ctx->pc == 0x3E9C20u) {
        ctx->pc = 0x3E9C20u;
            // 0x3e9c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3E9C24u;
        goto label_3e9c24;
    }
    ctx->pc = 0x3E9C1Cu;
    {
        const bool branch_taken_0x3e9c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9c1c) {
            ctx->pc = 0x3E9C20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9C1Cu;
            // 0x3e9c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E9C40u;
            goto label_3e9c40;
        }
    }
    ctx->pc = 0x3E9C24u;
label_3e9c24:
    // 0x3e9c24: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3e9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3e9c28:
    // 0x3e9c28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9c2c:
    // 0x3e9c2c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3e9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3e9c30:
    // 0x3e9c30: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e9c34:
    // 0x3e9c34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e9c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e9c38:
    // 0x3e9c38: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3e9c38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3e9c3c:
    // 0x3e9c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e9c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e9c40:
    // 0x3e9c40: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3e9c40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3e9c44:
    // 0x3e9c44: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3e9c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3e9c48:
    // 0x3e9c48: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3e9c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3e9c4c:
    // 0x3e9c4c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3e9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3e9c50:
    // 0x3e9c50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3e9c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3e9c54:
    // 0x3e9c54: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3e9c54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3e9c58:
    // 0x3e9c58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e9c58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e9c5c:
    // 0x3e9c5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e9c5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e9c60:
    // 0x3e9c60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e9c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e9c64:
    // 0x3e9c64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e9c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e9c68:
    // 0x3e9c68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e9c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e9c6c:
    // 0x3e9c6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e9c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e9c70:
    // 0x3e9c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e9c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9c74:
    // 0x3e9c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e9c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9c78:
    // 0x3e9c78: 0x3e00008  jr          $ra
label_3e9c7c:
    if (ctx->pc == 0x3E9C7Cu) {
        ctx->pc = 0x3E9C7Cu;
            // 0x3e9c7c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3E9C80u;
        goto label_fallthrough_0x3e9c78;
    }
    ctx->pc = 0x3E9C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E9C78u;
            // 0x3e9c7c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3e9c78:
    ctx->pc = 0x3E9C80u;
}
