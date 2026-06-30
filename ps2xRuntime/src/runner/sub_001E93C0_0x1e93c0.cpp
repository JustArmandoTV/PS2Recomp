#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E93C0
// Address: 0x1e93c0 - 0x1e9ca0
void sub_001E93C0_0x1e93c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E93C0_0x1e93c0");
#endif

    switch (ctx->pc) {
        case 0x1e93c0u: goto label_1e93c0;
        case 0x1e93c4u: goto label_1e93c4;
        case 0x1e93c8u: goto label_1e93c8;
        case 0x1e93ccu: goto label_1e93cc;
        case 0x1e93d0u: goto label_1e93d0;
        case 0x1e93d4u: goto label_1e93d4;
        case 0x1e93d8u: goto label_1e93d8;
        case 0x1e93dcu: goto label_1e93dc;
        case 0x1e93e0u: goto label_1e93e0;
        case 0x1e93e4u: goto label_1e93e4;
        case 0x1e93e8u: goto label_1e93e8;
        case 0x1e93ecu: goto label_1e93ec;
        case 0x1e93f0u: goto label_1e93f0;
        case 0x1e93f4u: goto label_1e93f4;
        case 0x1e93f8u: goto label_1e93f8;
        case 0x1e93fcu: goto label_1e93fc;
        case 0x1e9400u: goto label_1e9400;
        case 0x1e9404u: goto label_1e9404;
        case 0x1e9408u: goto label_1e9408;
        case 0x1e940cu: goto label_1e940c;
        case 0x1e9410u: goto label_1e9410;
        case 0x1e9414u: goto label_1e9414;
        case 0x1e9418u: goto label_1e9418;
        case 0x1e941cu: goto label_1e941c;
        case 0x1e9420u: goto label_1e9420;
        case 0x1e9424u: goto label_1e9424;
        case 0x1e9428u: goto label_1e9428;
        case 0x1e942cu: goto label_1e942c;
        case 0x1e9430u: goto label_1e9430;
        case 0x1e9434u: goto label_1e9434;
        case 0x1e9438u: goto label_1e9438;
        case 0x1e943cu: goto label_1e943c;
        case 0x1e9440u: goto label_1e9440;
        case 0x1e9444u: goto label_1e9444;
        case 0x1e9448u: goto label_1e9448;
        case 0x1e944cu: goto label_1e944c;
        case 0x1e9450u: goto label_1e9450;
        case 0x1e9454u: goto label_1e9454;
        case 0x1e9458u: goto label_1e9458;
        case 0x1e945cu: goto label_1e945c;
        case 0x1e9460u: goto label_1e9460;
        case 0x1e9464u: goto label_1e9464;
        case 0x1e9468u: goto label_1e9468;
        case 0x1e946cu: goto label_1e946c;
        case 0x1e9470u: goto label_1e9470;
        case 0x1e9474u: goto label_1e9474;
        case 0x1e9478u: goto label_1e9478;
        case 0x1e947cu: goto label_1e947c;
        case 0x1e9480u: goto label_1e9480;
        case 0x1e9484u: goto label_1e9484;
        case 0x1e9488u: goto label_1e9488;
        case 0x1e948cu: goto label_1e948c;
        case 0x1e9490u: goto label_1e9490;
        case 0x1e9494u: goto label_1e9494;
        case 0x1e9498u: goto label_1e9498;
        case 0x1e949cu: goto label_1e949c;
        case 0x1e94a0u: goto label_1e94a0;
        case 0x1e94a4u: goto label_1e94a4;
        case 0x1e94a8u: goto label_1e94a8;
        case 0x1e94acu: goto label_1e94ac;
        case 0x1e94b0u: goto label_1e94b0;
        case 0x1e94b4u: goto label_1e94b4;
        case 0x1e94b8u: goto label_1e94b8;
        case 0x1e94bcu: goto label_1e94bc;
        case 0x1e94c0u: goto label_1e94c0;
        case 0x1e94c4u: goto label_1e94c4;
        case 0x1e94c8u: goto label_1e94c8;
        case 0x1e94ccu: goto label_1e94cc;
        case 0x1e94d0u: goto label_1e94d0;
        case 0x1e94d4u: goto label_1e94d4;
        case 0x1e94d8u: goto label_1e94d8;
        case 0x1e94dcu: goto label_1e94dc;
        case 0x1e94e0u: goto label_1e94e0;
        case 0x1e94e4u: goto label_1e94e4;
        case 0x1e94e8u: goto label_1e94e8;
        case 0x1e94ecu: goto label_1e94ec;
        case 0x1e94f0u: goto label_1e94f0;
        case 0x1e94f4u: goto label_1e94f4;
        case 0x1e94f8u: goto label_1e94f8;
        case 0x1e94fcu: goto label_1e94fc;
        case 0x1e9500u: goto label_1e9500;
        case 0x1e9504u: goto label_1e9504;
        case 0x1e9508u: goto label_1e9508;
        case 0x1e950cu: goto label_1e950c;
        case 0x1e9510u: goto label_1e9510;
        case 0x1e9514u: goto label_1e9514;
        case 0x1e9518u: goto label_1e9518;
        case 0x1e951cu: goto label_1e951c;
        case 0x1e9520u: goto label_1e9520;
        case 0x1e9524u: goto label_1e9524;
        case 0x1e9528u: goto label_1e9528;
        case 0x1e952cu: goto label_1e952c;
        case 0x1e9530u: goto label_1e9530;
        case 0x1e9534u: goto label_1e9534;
        case 0x1e9538u: goto label_1e9538;
        case 0x1e953cu: goto label_1e953c;
        case 0x1e9540u: goto label_1e9540;
        case 0x1e9544u: goto label_1e9544;
        case 0x1e9548u: goto label_1e9548;
        case 0x1e954cu: goto label_1e954c;
        case 0x1e9550u: goto label_1e9550;
        case 0x1e9554u: goto label_1e9554;
        case 0x1e9558u: goto label_1e9558;
        case 0x1e955cu: goto label_1e955c;
        case 0x1e9560u: goto label_1e9560;
        case 0x1e9564u: goto label_1e9564;
        case 0x1e9568u: goto label_1e9568;
        case 0x1e956cu: goto label_1e956c;
        case 0x1e9570u: goto label_1e9570;
        case 0x1e9574u: goto label_1e9574;
        case 0x1e9578u: goto label_1e9578;
        case 0x1e957cu: goto label_1e957c;
        case 0x1e9580u: goto label_1e9580;
        case 0x1e9584u: goto label_1e9584;
        case 0x1e9588u: goto label_1e9588;
        case 0x1e958cu: goto label_1e958c;
        case 0x1e9590u: goto label_1e9590;
        case 0x1e9594u: goto label_1e9594;
        case 0x1e9598u: goto label_1e9598;
        case 0x1e959cu: goto label_1e959c;
        case 0x1e95a0u: goto label_1e95a0;
        case 0x1e95a4u: goto label_1e95a4;
        case 0x1e95a8u: goto label_1e95a8;
        case 0x1e95acu: goto label_1e95ac;
        case 0x1e95b0u: goto label_1e95b0;
        case 0x1e95b4u: goto label_1e95b4;
        case 0x1e95b8u: goto label_1e95b8;
        case 0x1e95bcu: goto label_1e95bc;
        case 0x1e95c0u: goto label_1e95c0;
        case 0x1e95c4u: goto label_1e95c4;
        case 0x1e95c8u: goto label_1e95c8;
        case 0x1e95ccu: goto label_1e95cc;
        case 0x1e95d0u: goto label_1e95d0;
        case 0x1e95d4u: goto label_1e95d4;
        case 0x1e95d8u: goto label_1e95d8;
        case 0x1e95dcu: goto label_1e95dc;
        case 0x1e95e0u: goto label_1e95e0;
        case 0x1e95e4u: goto label_1e95e4;
        case 0x1e95e8u: goto label_1e95e8;
        case 0x1e95ecu: goto label_1e95ec;
        case 0x1e95f0u: goto label_1e95f0;
        case 0x1e95f4u: goto label_1e95f4;
        case 0x1e95f8u: goto label_1e95f8;
        case 0x1e95fcu: goto label_1e95fc;
        case 0x1e9600u: goto label_1e9600;
        case 0x1e9604u: goto label_1e9604;
        case 0x1e9608u: goto label_1e9608;
        case 0x1e960cu: goto label_1e960c;
        case 0x1e9610u: goto label_1e9610;
        case 0x1e9614u: goto label_1e9614;
        case 0x1e9618u: goto label_1e9618;
        case 0x1e961cu: goto label_1e961c;
        case 0x1e9620u: goto label_1e9620;
        case 0x1e9624u: goto label_1e9624;
        case 0x1e9628u: goto label_1e9628;
        case 0x1e962cu: goto label_1e962c;
        case 0x1e9630u: goto label_1e9630;
        case 0x1e9634u: goto label_1e9634;
        case 0x1e9638u: goto label_1e9638;
        case 0x1e963cu: goto label_1e963c;
        case 0x1e9640u: goto label_1e9640;
        case 0x1e9644u: goto label_1e9644;
        case 0x1e9648u: goto label_1e9648;
        case 0x1e964cu: goto label_1e964c;
        case 0x1e9650u: goto label_1e9650;
        case 0x1e9654u: goto label_1e9654;
        case 0x1e9658u: goto label_1e9658;
        case 0x1e965cu: goto label_1e965c;
        case 0x1e9660u: goto label_1e9660;
        case 0x1e9664u: goto label_1e9664;
        case 0x1e9668u: goto label_1e9668;
        case 0x1e966cu: goto label_1e966c;
        case 0x1e9670u: goto label_1e9670;
        case 0x1e9674u: goto label_1e9674;
        case 0x1e9678u: goto label_1e9678;
        case 0x1e967cu: goto label_1e967c;
        case 0x1e9680u: goto label_1e9680;
        case 0x1e9684u: goto label_1e9684;
        case 0x1e9688u: goto label_1e9688;
        case 0x1e968cu: goto label_1e968c;
        case 0x1e9690u: goto label_1e9690;
        case 0x1e9694u: goto label_1e9694;
        case 0x1e9698u: goto label_1e9698;
        case 0x1e969cu: goto label_1e969c;
        case 0x1e96a0u: goto label_1e96a0;
        case 0x1e96a4u: goto label_1e96a4;
        case 0x1e96a8u: goto label_1e96a8;
        case 0x1e96acu: goto label_1e96ac;
        case 0x1e96b0u: goto label_1e96b0;
        case 0x1e96b4u: goto label_1e96b4;
        case 0x1e96b8u: goto label_1e96b8;
        case 0x1e96bcu: goto label_1e96bc;
        case 0x1e96c0u: goto label_1e96c0;
        case 0x1e96c4u: goto label_1e96c4;
        case 0x1e96c8u: goto label_1e96c8;
        case 0x1e96ccu: goto label_1e96cc;
        case 0x1e96d0u: goto label_1e96d0;
        case 0x1e96d4u: goto label_1e96d4;
        case 0x1e96d8u: goto label_1e96d8;
        case 0x1e96dcu: goto label_1e96dc;
        case 0x1e96e0u: goto label_1e96e0;
        case 0x1e96e4u: goto label_1e96e4;
        case 0x1e96e8u: goto label_1e96e8;
        case 0x1e96ecu: goto label_1e96ec;
        case 0x1e96f0u: goto label_1e96f0;
        case 0x1e96f4u: goto label_1e96f4;
        case 0x1e96f8u: goto label_1e96f8;
        case 0x1e96fcu: goto label_1e96fc;
        case 0x1e9700u: goto label_1e9700;
        case 0x1e9704u: goto label_1e9704;
        case 0x1e9708u: goto label_1e9708;
        case 0x1e970cu: goto label_1e970c;
        case 0x1e9710u: goto label_1e9710;
        case 0x1e9714u: goto label_1e9714;
        case 0x1e9718u: goto label_1e9718;
        case 0x1e971cu: goto label_1e971c;
        case 0x1e9720u: goto label_1e9720;
        case 0x1e9724u: goto label_1e9724;
        case 0x1e9728u: goto label_1e9728;
        case 0x1e972cu: goto label_1e972c;
        case 0x1e9730u: goto label_1e9730;
        case 0x1e9734u: goto label_1e9734;
        case 0x1e9738u: goto label_1e9738;
        case 0x1e973cu: goto label_1e973c;
        case 0x1e9740u: goto label_1e9740;
        case 0x1e9744u: goto label_1e9744;
        case 0x1e9748u: goto label_1e9748;
        case 0x1e974cu: goto label_1e974c;
        case 0x1e9750u: goto label_1e9750;
        case 0x1e9754u: goto label_1e9754;
        case 0x1e9758u: goto label_1e9758;
        case 0x1e975cu: goto label_1e975c;
        case 0x1e9760u: goto label_1e9760;
        case 0x1e9764u: goto label_1e9764;
        case 0x1e9768u: goto label_1e9768;
        case 0x1e976cu: goto label_1e976c;
        case 0x1e9770u: goto label_1e9770;
        case 0x1e9774u: goto label_1e9774;
        case 0x1e9778u: goto label_1e9778;
        case 0x1e977cu: goto label_1e977c;
        case 0x1e9780u: goto label_1e9780;
        case 0x1e9784u: goto label_1e9784;
        case 0x1e9788u: goto label_1e9788;
        case 0x1e978cu: goto label_1e978c;
        case 0x1e9790u: goto label_1e9790;
        case 0x1e9794u: goto label_1e9794;
        case 0x1e9798u: goto label_1e9798;
        case 0x1e979cu: goto label_1e979c;
        case 0x1e97a0u: goto label_1e97a0;
        case 0x1e97a4u: goto label_1e97a4;
        case 0x1e97a8u: goto label_1e97a8;
        case 0x1e97acu: goto label_1e97ac;
        case 0x1e97b0u: goto label_1e97b0;
        case 0x1e97b4u: goto label_1e97b4;
        case 0x1e97b8u: goto label_1e97b8;
        case 0x1e97bcu: goto label_1e97bc;
        case 0x1e97c0u: goto label_1e97c0;
        case 0x1e97c4u: goto label_1e97c4;
        case 0x1e97c8u: goto label_1e97c8;
        case 0x1e97ccu: goto label_1e97cc;
        case 0x1e97d0u: goto label_1e97d0;
        case 0x1e97d4u: goto label_1e97d4;
        case 0x1e97d8u: goto label_1e97d8;
        case 0x1e97dcu: goto label_1e97dc;
        case 0x1e97e0u: goto label_1e97e0;
        case 0x1e97e4u: goto label_1e97e4;
        case 0x1e97e8u: goto label_1e97e8;
        case 0x1e97ecu: goto label_1e97ec;
        case 0x1e97f0u: goto label_1e97f0;
        case 0x1e97f4u: goto label_1e97f4;
        case 0x1e97f8u: goto label_1e97f8;
        case 0x1e97fcu: goto label_1e97fc;
        case 0x1e9800u: goto label_1e9800;
        case 0x1e9804u: goto label_1e9804;
        case 0x1e9808u: goto label_1e9808;
        case 0x1e980cu: goto label_1e980c;
        case 0x1e9810u: goto label_1e9810;
        case 0x1e9814u: goto label_1e9814;
        case 0x1e9818u: goto label_1e9818;
        case 0x1e981cu: goto label_1e981c;
        case 0x1e9820u: goto label_1e9820;
        case 0x1e9824u: goto label_1e9824;
        case 0x1e9828u: goto label_1e9828;
        case 0x1e982cu: goto label_1e982c;
        case 0x1e9830u: goto label_1e9830;
        case 0x1e9834u: goto label_1e9834;
        case 0x1e9838u: goto label_1e9838;
        case 0x1e983cu: goto label_1e983c;
        case 0x1e9840u: goto label_1e9840;
        case 0x1e9844u: goto label_1e9844;
        case 0x1e9848u: goto label_1e9848;
        case 0x1e984cu: goto label_1e984c;
        case 0x1e9850u: goto label_1e9850;
        case 0x1e9854u: goto label_1e9854;
        case 0x1e9858u: goto label_1e9858;
        case 0x1e985cu: goto label_1e985c;
        case 0x1e9860u: goto label_1e9860;
        case 0x1e9864u: goto label_1e9864;
        case 0x1e9868u: goto label_1e9868;
        case 0x1e986cu: goto label_1e986c;
        case 0x1e9870u: goto label_1e9870;
        case 0x1e9874u: goto label_1e9874;
        case 0x1e9878u: goto label_1e9878;
        case 0x1e987cu: goto label_1e987c;
        case 0x1e9880u: goto label_1e9880;
        case 0x1e9884u: goto label_1e9884;
        case 0x1e9888u: goto label_1e9888;
        case 0x1e988cu: goto label_1e988c;
        case 0x1e9890u: goto label_1e9890;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e9898u: goto label_1e9898;
        case 0x1e989cu: goto label_1e989c;
        case 0x1e98a0u: goto label_1e98a0;
        case 0x1e98a4u: goto label_1e98a4;
        case 0x1e98a8u: goto label_1e98a8;
        case 0x1e98acu: goto label_1e98ac;
        case 0x1e98b0u: goto label_1e98b0;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98b8u: goto label_1e98b8;
        case 0x1e98bcu: goto label_1e98bc;
        case 0x1e98c0u: goto label_1e98c0;
        case 0x1e98c4u: goto label_1e98c4;
        case 0x1e98c8u: goto label_1e98c8;
        case 0x1e98ccu: goto label_1e98cc;
        case 0x1e98d0u: goto label_1e98d0;
        case 0x1e98d4u: goto label_1e98d4;
        case 0x1e98d8u: goto label_1e98d8;
        case 0x1e98dcu: goto label_1e98dc;
        case 0x1e98e0u: goto label_1e98e0;
        case 0x1e98e4u: goto label_1e98e4;
        case 0x1e98e8u: goto label_1e98e8;
        case 0x1e98ecu: goto label_1e98ec;
        case 0x1e98f0u: goto label_1e98f0;
        case 0x1e98f4u: goto label_1e98f4;
        case 0x1e98f8u: goto label_1e98f8;
        case 0x1e98fcu: goto label_1e98fc;
        case 0x1e9900u: goto label_1e9900;
        case 0x1e9904u: goto label_1e9904;
        case 0x1e9908u: goto label_1e9908;
        case 0x1e990cu: goto label_1e990c;
        case 0x1e9910u: goto label_1e9910;
        case 0x1e9914u: goto label_1e9914;
        case 0x1e9918u: goto label_1e9918;
        case 0x1e991cu: goto label_1e991c;
        case 0x1e9920u: goto label_1e9920;
        case 0x1e9924u: goto label_1e9924;
        case 0x1e9928u: goto label_1e9928;
        case 0x1e992cu: goto label_1e992c;
        case 0x1e9930u: goto label_1e9930;
        case 0x1e9934u: goto label_1e9934;
        case 0x1e9938u: goto label_1e9938;
        case 0x1e993cu: goto label_1e993c;
        case 0x1e9940u: goto label_1e9940;
        case 0x1e9944u: goto label_1e9944;
        case 0x1e9948u: goto label_1e9948;
        case 0x1e994cu: goto label_1e994c;
        case 0x1e9950u: goto label_1e9950;
        case 0x1e9954u: goto label_1e9954;
        case 0x1e9958u: goto label_1e9958;
        case 0x1e995cu: goto label_1e995c;
        case 0x1e9960u: goto label_1e9960;
        case 0x1e9964u: goto label_1e9964;
        case 0x1e9968u: goto label_1e9968;
        case 0x1e996cu: goto label_1e996c;
        case 0x1e9970u: goto label_1e9970;
        case 0x1e9974u: goto label_1e9974;
        case 0x1e9978u: goto label_1e9978;
        case 0x1e997cu: goto label_1e997c;
        case 0x1e9980u: goto label_1e9980;
        case 0x1e9984u: goto label_1e9984;
        case 0x1e9988u: goto label_1e9988;
        case 0x1e998cu: goto label_1e998c;
        case 0x1e9990u: goto label_1e9990;
        case 0x1e9994u: goto label_1e9994;
        case 0x1e9998u: goto label_1e9998;
        case 0x1e999cu: goto label_1e999c;
        case 0x1e99a0u: goto label_1e99a0;
        case 0x1e99a4u: goto label_1e99a4;
        case 0x1e99a8u: goto label_1e99a8;
        case 0x1e99acu: goto label_1e99ac;
        case 0x1e99b0u: goto label_1e99b0;
        case 0x1e99b4u: goto label_1e99b4;
        case 0x1e99b8u: goto label_1e99b8;
        case 0x1e99bcu: goto label_1e99bc;
        case 0x1e99c0u: goto label_1e99c0;
        case 0x1e99c4u: goto label_1e99c4;
        case 0x1e99c8u: goto label_1e99c8;
        case 0x1e99ccu: goto label_1e99cc;
        case 0x1e99d0u: goto label_1e99d0;
        case 0x1e99d4u: goto label_1e99d4;
        case 0x1e99d8u: goto label_1e99d8;
        case 0x1e99dcu: goto label_1e99dc;
        case 0x1e99e0u: goto label_1e99e0;
        case 0x1e99e4u: goto label_1e99e4;
        case 0x1e99e8u: goto label_1e99e8;
        case 0x1e99ecu: goto label_1e99ec;
        case 0x1e99f0u: goto label_1e99f0;
        case 0x1e99f4u: goto label_1e99f4;
        case 0x1e99f8u: goto label_1e99f8;
        case 0x1e99fcu: goto label_1e99fc;
        case 0x1e9a00u: goto label_1e9a00;
        case 0x1e9a04u: goto label_1e9a04;
        case 0x1e9a08u: goto label_1e9a08;
        case 0x1e9a0cu: goto label_1e9a0c;
        case 0x1e9a10u: goto label_1e9a10;
        case 0x1e9a14u: goto label_1e9a14;
        case 0x1e9a18u: goto label_1e9a18;
        case 0x1e9a1cu: goto label_1e9a1c;
        case 0x1e9a20u: goto label_1e9a20;
        case 0x1e9a24u: goto label_1e9a24;
        case 0x1e9a28u: goto label_1e9a28;
        case 0x1e9a2cu: goto label_1e9a2c;
        case 0x1e9a30u: goto label_1e9a30;
        case 0x1e9a34u: goto label_1e9a34;
        case 0x1e9a38u: goto label_1e9a38;
        case 0x1e9a3cu: goto label_1e9a3c;
        case 0x1e9a40u: goto label_1e9a40;
        case 0x1e9a44u: goto label_1e9a44;
        case 0x1e9a48u: goto label_1e9a48;
        case 0x1e9a4cu: goto label_1e9a4c;
        case 0x1e9a50u: goto label_1e9a50;
        case 0x1e9a54u: goto label_1e9a54;
        case 0x1e9a58u: goto label_1e9a58;
        case 0x1e9a5cu: goto label_1e9a5c;
        case 0x1e9a60u: goto label_1e9a60;
        case 0x1e9a64u: goto label_1e9a64;
        case 0x1e9a68u: goto label_1e9a68;
        case 0x1e9a6cu: goto label_1e9a6c;
        case 0x1e9a70u: goto label_1e9a70;
        case 0x1e9a74u: goto label_1e9a74;
        case 0x1e9a78u: goto label_1e9a78;
        case 0x1e9a7cu: goto label_1e9a7c;
        case 0x1e9a80u: goto label_1e9a80;
        case 0x1e9a84u: goto label_1e9a84;
        case 0x1e9a88u: goto label_1e9a88;
        case 0x1e9a8cu: goto label_1e9a8c;
        case 0x1e9a90u: goto label_1e9a90;
        case 0x1e9a94u: goto label_1e9a94;
        case 0x1e9a98u: goto label_1e9a98;
        case 0x1e9a9cu: goto label_1e9a9c;
        case 0x1e9aa0u: goto label_1e9aa0;
        case 0x1e9aa4u: goto label_1e9aa4;
        case 0x1e9aa8u: goto label_1e9aa8;
        case 0x1e9aacu: goto label_1e9aac;
        case 0x1e9ab0u: goto label_1e9ab0;
        case 0x1e9ab4u: goto label_1e9ab4;
        case 0x1e9ab8u: goto label_1e9ab8;
        case 0x1e9abcu: goto label_1e9abc;
        case 0x1e9ac0u: goto label_1e9ac0;
        case 0x1e9ac4u: goto label_1e9ac4;
        case 0x1e9ac8u: goto label_1e9ac8;
        case 0x1e9accu: goto label_1e9acc;
        case 0x1e9ad0u: goto label_1e9ad0;
        case 0x1e9ad4u: goto label_1e9ad4;
        case 0x1e9ad8u: goto label_1e9ad8;
        case 0x1e9adcu: goto label_1e9adc;
        case 0x1e9ae0u: goto label_1e9ae0;
        case 0x1e9ae4u: goto label_1e9ae4;
        case 0x1e9ae8u: goto label_1e9ae8;
        case 0x1e9aecu: goto label_1e9aec;
        case 0x1e9af0u: goto label_1e9af0;
        case 0x1e9af4u: goto label_1e9af4;
        case 0x1e9af8u: goto label_1e9af8;
        case 0x1e9afcu: goto label_1e9afc;
        case 0x1e9b00u: goto label_1e9b00;
        case 0x1e9b04u: goto label_1e9b04;
        case 0x1e9b08u: goto label_1e9b08;
        case 0x1e9b0cu: goto label_1e9b0c;
        case 0x1e9b10u: goto label_1e9b10;
        case 0x1e9b14u: goto label_1e9b14;
        case 0x1e9b18u: goto label_1e9b18;
        case 0x1e9b1cu: goto label_1e9b1c;
        case 0x1e9b20u: goto label_1e9b20;
        case 0x1e9b24u: goto label_1e9b24;
        case 0x1e9b28u: goto label_1e9b28;
        case 0x1e9b2cu: goto label_1e9b2c;
        case 0x1e9b30u: goto label_1e9b30;
        case 0x1e9b34u: goto label_1e9b34;
        case 0x1e9b38u: goto label_1e9b38;
        case 0x1e9b3cu: goto label_1e9b3c;
        case 0x1e9b40u: goto label_1e9b40;
        case 0x1e9b44u: goto label_1e9b44;
        case 0x1e9b48u: goto label_1e9b48;
        case 0x1e9b4cu: goto label_1e9b4c;
        case 0x1e9b50u: goto label_1e9b50;
        case 0x1e9b54u: goto label_1e9b54;
        case 0x1e9b58u: goto label_1e9b58;
        case 0x1e9b5cu: goto label_1e9b5c;
        case 0x1e9b60u: goto label_1e9b60;
        case 0x1e9b64u: goto label_1e9b64;
        case 0x1e9b68u: goto label_1e9b68;
        case 0x1e9b6cu: goto label_1e9b6c;
        case 0x1e9b70u: goto label_1e9b70;
        case 0x1e9b74u: goto label_1e9b74;
        case 0x1e9b78u: goto label_1e9b78;
        case 0x1e9b7cu: goto label_1e9b7c;
        case 0x1e9b80u: goto label_1e9b80;
        case 0x1e9b84u: goto label_1e9b84;
        case 0x1e9b88u: goto label_1e9b88;
        case 0x1e9b8cu: goto label_1e9b8c;
        case 0x1e9b90u: goto label_1e9b90;
        case 0x1e9b94u: goto label_1e9b94;
        case 0x1e9b98u: goto label_1e9b98;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9ba0u: goto label_1e9ba0;
        case 0x1e9ba4u: goto label_1e9ba4;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bacu: goto label_1e9bac;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bb4u: goto label_1e9bb4;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9bbcu: goto label_1e9bbc;
        case 0x1e9bc0u: goto label_1e9bc0;
        case 0x1e9bc4u: goto label_1e9bc4;
        case 0x1e9bc8u: goto label_1e9bc8;
        case 0x1e9bccu: goto label_1e9bcc;
        case 0x1e9bd0u: goto label_1e9bd0;
        case 0x1e9bd4u: goto label_1e9bd4;
        case 0x1e9bd8u: goto label_1e9bd8;
        case 0x1e9bdcu: goto label_1e9bdc;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9be4u: goto label_1e9be4;
        case 0x1e9be8u: goto label_1e9be8;
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bf0u: goto label_1e9bf0;
        case 0x1e9bf4u: goto label_1e9bf4;
        case 0x1e9bf8u: goto label_1e9bf8;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c00u: goto label_1e9c00;
        case 0x1e9c04u: goto label_1e9c04;
        case 0x1e9c08u: goto label_1e9c08;
        case 0x1e9c0cu: goto label_1e9c0c;
        case 0x1e9c10u: goto label_1e9c10;
        case 0x1e9c14u: goto label_1e9c14;
        case 0x1e9c18u: goto label_1e9c18;
        case 0x1e9c1cu: goto label_1e9c1c;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c24u: goto label_1e9c24;
        case 0x1e9c28u: goto label_1e9c28;
        case 0x1e9c2cu: goto label_1e9c2c;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c34u: goto label_1e9c34;
        case 0x1e9c38u: goto label_1e9c38;
        case 0x1e9c3cu: goto label_1e9c3c;
        case 0x1e9c40u: goto label_1e9c40;
        case 0x1e9c44u: goto label_1e9c44;
        case 0x1e9c48u: goto label_1e9c48;
        case 0x1e9c4cu: goto label_1e9c4c;
        case 0x1e9c50u: goto label_1e9c50;
        case 0x1e9c54u: goto label_1e9c54;
        case 0x1e9c58u: goto label_1e9c58;
        case 0x1e9c5cu: goto label_1e9c5c;
        case 0x1e9c60u: goto label_1e9c60;
        case 0x1e9c64u: goto label_1e9c64;
        case 0x1e9c68u: goto label_1e9c68;
        case 0x1e9c6cu: goto label_1e9c6c;
        case 0x1e9c70u: goto label_1e9c70;
        case 0x1e9c74u: goto label_1e9c74;
        case 0x1e9c78u: goto label_1e9c78;
        case 0x1e9c7cu: goto label_1e9c7c;
        case 0x1e9c80u: goto label_1e9c80;
        case 0x1e9c84u: goto label_1e9c84;
        case 0x1e9c88u: goto label_1e9c88;
        case 0x1e9c8cu: goto label_1e9c8c;
        case 0x1e9c90u: goto label_1e9c90;
        case 0x1e9c94u: goto label_1e9c94;
        case 0x1e9c98u: goto label_1e9c98;
        case 0x1e9c9cu: goto label_1e9c9c;
        default: break;
    }

    ctx->pc = 0x1e93c0u;

label_1e93c0:
    // 0x1e93c0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1e93c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_1e93c4:
    // 0x1e93c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e93c8:
    // 0x1e93c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1e93c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1e93cc:
    // 0x1e93cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e93ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1e93d0:
    // 0x1e93d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e93d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e93d4:
    // 0x1e93d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e93d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e93d8:
    // 0x1e93d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e93d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e93dc:
    // 0x1e93dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e93e0:
    // 0x1e93e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e93e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e93e4:
    // 0x1e93e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e93e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e93e8:
    // 0x1e93e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e93e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e93ec:
    // 0x1e93ec: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e93ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e93f0:
    // 0x1e93f0: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e93f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e93f4:
    // 0x1e93f4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e93f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e93f8:
    // 0x1e93f8: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1e93f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e93fc:
    // 0x1e93fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e93fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e9400:
    // 0x1e9400: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e9400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e9404:
    // 0x1e9404: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e9404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e9408:
    // 0x1e9408: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e940c:
    if (ctx->pc == 0x1E940Cu) {
        ctx->pc = 0x1E940Cu;
            // 0x1e940c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E9410u;
        goto label_1e9410;
    }
    ctx->pc = 0x1E9408u;
    {
        const bool branch_taken_0x1e9408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9408u;
            // 0x1e940c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9408) {
            ctx->pc = 0x1E9438u;
            goto label_1e9438;
        }
    }
    ctx->pc = 0x1E9410u;
label_1e9410:
    // 0x1e9410: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e9410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e9414:
    // 0x1e9414: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e9414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e9418:
    // 0x1e9418: 0x2442aa98  addiu       $v0, $v0, -0x5568
    ctx->pc = 0x1e9418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945432));
label_1e941c:
    // 0x1e941c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e941cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e9420:
    // 0x1e9420: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e9420u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e9424:
    // 0x1e9424: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e9424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e9428:
    // 0x1e9428: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e9428u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e942c:
    // 0x1e942c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e9430:
    // 0x1e9430: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e9430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e9434:
    // 0x1e9434: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e9434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e9438:
    // 0x1e9438: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e9438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e943c:
    // 0x1e943c: 0x8e860008  lw          $a2, 0x8($s4)
    ctx->pc = 0x1e943cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e9440:
    // 0x1e9440: 0xc0a45a0  jal         func_291680
label_1e9444:
    if (ctx->pc == 0x1E9444u) {
        ctx->pc = 0x1E9444u;
            // 0x1e9444: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1E9448u;
        goto label_1e9448;
    }
    ctx->pc = 0x1E9440u;
    SET_GPR_U32(ctx, 31, 0x1E9448u);
    ctx->pc = 0x1E9444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9440u;
            // 0x1e9444: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9448u; }
        if (ctx->pc != 0x1E9448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9448u; }
        if (ctx->pc != 0x1E9448u) { return; }
    }
    ctx->pc = 0x1E9448u;
label_1e9448:
    // 0x1e9448: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1e9448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1e944c:
    // 0x1e944c: 0xc64c0004  lwc1        $f12, 0x4($s2)
    ctx->pc = 0x1e944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e9450:
    // 0x1e9450: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1e9450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1e9454:
    // 0x1e9454: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e9454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e9458:
    // 0x1e9458: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1e9458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1e945c:
    // 0x1e945c: 0x320f809  jalr        $t9
label_1e9460:
    if (ctx->pc == 0x1E9460u) {
        ctx->pc = 0x1E9460u;
            // 0x1e9460: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x1E9464u;
        goto label_1e9464;
    }
    ctx->pc = 0x1E945Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E9464u);
        ctx->pc = 0x1E9460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E945Cu;
            // 0x1e9460: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E9464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E9464u; }
            if (ctx->pc != 0x1E9464u) { return; }
        }
        }
    }
    ctx->pc = 0x1E9464u;
label_1e9464:
    // 0x1e9464: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e9464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e9468:
    // 0x1e9468: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1e9468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1e946c:
    // 0x1e946c: 0xc0a4644  jal         func_291910
label_1e9470:
    if (ctx->pc == 0x1E9470u) {
        ctx->pc = 0x1E9470u;
            // 0x1e9470: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x1E9474u;
        goto label_1e9474;
    }
    ctx->pc = 0x1E946Cu;
    SET_GPR_U32(ctx, 31, 0x1E9474u);
    ctx->pc = 0x1E9470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E946Cu;
            // 0x1e9470: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291910u;
    if (runtime->hasFunction(0x291910u)) {
        auto targetFn = runtime->lookupFunction(0x291910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9474u; }
        if (ctx->pc != 0x1E9474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291910_0x291910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9474u; }
        if (ctx->pc != 0x1E9474u) { return; }
    }
    ctx->pc = 0x1E9474u;
label_1e9474:
    // 0x1e9474: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x1e9474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9478:
    // 0x1e9478: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e9478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1e947c:
    // 0x1e947c: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x1e947cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9480:
    // 0x1e9480: 0xafb400d4  sw          $s4, 0xD4($sp)
    ctx->pc = 0x1e9480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 20));
label_1e9484:
    // 0x1e9484: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e9484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1e9488:
    // 0x1e9488: 0xafb300d8  sw          $s3, 0xD8($sp)
    ctx->pc = 0x1e9488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 19));
label_1e948c:
    // 0x1e948c: 0x4600601a  mula.s      $f12, $f0
    ctx->pc = 0x1e948cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1e9490:
    // 0x1e9490: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e9490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9494:
    // 0x1e9494: 0x460262dc  madd.s      $f11, $f12, $f2
    ctx->pc = 0x1e9494u;
    ctx->f[11] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[2]));
label_1e9498:
    // 0x1e9498: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1e9498u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e949c:
    // 0x1e949c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1e949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e94a0:
    // 0x1e94a0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e94a4:
    // 0x1e94a4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e94a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1e94a8:
    // 0x1e94a8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1e94a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1e94ac:
    // 0x1e94ac: 0x46015840  add.s       $f1, $f11, $f1
    ctx->pc = 0x1e94acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
label_1e94b0:
    // 0x1e94b0: 0xc7aa0144  lwc1        $f10, 0x144($sp)
    ctx->pc = 0x1e94b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e94b4:
    // 0x1e94b4: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x1e94b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e94b8:
    // 0x1e94b8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x1e94b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1e94bc:
    // 0x1e94bc: 0xc7a300e4  lwc1        $f3, 0xE4($sp)
    ctx->pc = 0x1e94bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e94c0:
    // 0x1e94c0: 0x46045041  sub.s       $f1, $f10, $f4
    ctx->pc = 0x1e94c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[4]);
label_1e94c4:
    // 0x1e94c4: 0x460a601a  mula.s      $f12, $f10
    ctx->pc = 0x1e94c4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[10]);
label_1e94c8:
    // 0x1e94c8: 0x4604611c  madd.s      $f4, $f12, $f4
    ctx->pc = 0x1e94c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[4]));
label_1e94cc:
    // 0x1e94cc: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x1e94ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_1e94d0:
    // 0x1e94d0: 0xc7a90148  lwc1        $f9, 0x148($sp)
    ctx->pc = 0x1e94d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e94d4:
    // 0x1e94d4: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x1e94d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e94d8:
    // 0x1e94d8: 0xc7a80138  lwc1        $f8, 0x138($sp)
    ctx->pc = 0x1e94d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e94dc:
    // 0x1e94dc: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x1e94dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e94e0:
    // 0x1e94e0: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1e94e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1e94e4:
    // 0x1e94e4: 0x4609601a  mula.s      $f12, $f9
    ctx->pc = 0x1e94e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[9]);
label_1e94e8:
    // 0x1e94e8: 0x460860dc  madd.s      $f3, $f12, $f8
    ctx->pc = 0x1e94e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[8]));
label_1e94ec:
    // 0x1e94ec: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x1e94ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1e94f0:
    // 0x1e94f0: 0xc7a7014c  lwc1        $f7, 0x14C($sp)
    ctx->pc = 0x1e94f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e94f4:
    // 0x1e94f4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e94f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e94f8:
    // 0x1e94f8: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x1e94f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_1e94fc:
    // 0x1e94fc: 0xc7a6013c  lwc1        $f6, 0x13C($sp)
    ctx->pc = 0x1e94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e9500:
    // 0x1e9500: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1e9500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1e9504:
    // 0x1e9504: 0x460c0902  mul.s       $f4, $f1, $f12
    ctx->pc = 0x1e9504u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1e9508:
    // 0x1e9508: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x1e9508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e950c:
    // 0x1e950c: 0x46063881  sub.s       $f2, $f7, $f6
    ctx->pc = 0x1e950cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_1e9510:
    // 0x1e9510: 0x46084841  sub.s       $f1, $f9, $f8
    ctx->pc = 0x1e9510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
label_1e9514:
    // 0x1e9514: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x1e9514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1e9518:
    // 0x1e9518: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e9518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e951c:
    // 0x1e951c: 0x4607601a  mula.s      $f12, $f7
    ctx->pc = 0x1e951cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[7]);
label_1e9520:
    // 0x1e9520: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1e9520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
label_1e9524:
    // 0x1e9524: 0x4606619c  madd.s      $f6, $f12, $f6
    ctx->pc = 0x1e9524u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[6]));
label_1e9528:
    // 0x1e9528: 0x460c10c2  mul.s       $f3, $f2, $f12
    ctx->pc = 0x1e9528u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_1e952c:
    // 0x1e952c: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x1e952cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e9530:
    // 0x1e9530: 0xc7a500ec  lwc1        $f5, 0xEC($sp)
    ctx->pc = 0x1e9530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e9534:
    // 0x1e9534: 0xe7ab00a0  swc1        $f11, 0xA0($sp)
    ctx->pc = 0x1e9534u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e9538:
    // 0x1e9538: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e9538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e953c:
    // 0x1e953c: 0x46053080  add.s       $f2, $f6, $f5
    ctx->pc = 0x1e953cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_1e9540:
    // 0x1e9540: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x1e9540u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e9544:
    // 0x1e9544: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e9544u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e9548:
    // 0x1e9548: 0xe7a600ac  swc1        $f6, 0xAC($sp)
    ctx->pc = 0x1e9548u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_1e954c:
    // 0x1e954c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x1e954cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e9550:
    // 0x1e9550: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x1e9550u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1e9554:
    // 0x1e9554: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1e9554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e9558:
    // 0x1e9558: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e9558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1e955c:
    // 0x1e955c: 0xafb200d0  sw          $s2, 0xD0($sp)
    ctx->pc = 0x1e955cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 18));
label_1e9560:
    // 0x1e9560: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e9560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e9564:
    // 0x1e9564: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x1e9564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_1e9568:
    // 0x1e9568: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e9568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e956c:
    // 0x1e956c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1e956cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1e9570:
    // 0x1e9570: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x1e9570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_1e9574:
    // 0x1e9574: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1e9574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e9578:
    // 0x1e9578: 0xc09dad0  jal         func_276B40
label_1e957c:
    if (ctx->pc == 0x1E957Cu) {
        ctx->pc = 0x1E957Cu;
            // 0x1e957c: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x1E9580u;
        goto label_1e9580;
    }
    ctx->pc = 0x1E9578u;
    SET_GPR_U32(ctx, 31, 0x1E9580u);
    ctx->pc = 0x1E957Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9578u;
            // 0x1e957c: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B40u;
    if (runtime->hasFunction(0x276B40u)) {
        auto targetFn = runtime->lookupFunction(0x276B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9580u; }
        if (ctx->pc != 0x1E9580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B40_0x276b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9580u; }
        if (ctx->pc != 0x1E9580u) { return; }
    }
    ctx->pc = 0x1E9580u;
label_1e9580:
    // 0x1e9580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e9580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e9584:
    // 0x1e9584: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e9584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e9588:
    // 0x1e9588: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e9588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e958c:
    // 0x1e958c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e9590:
    // 0x1e9590: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e9590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e9594:
    // 0x1e9594: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e9594u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e9598:
    // 0x1e9598: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e959c:
    if (ctx->pc == 0x1E959Cu) {
        ctx->pc = 0x1E959Cu;
            // 0x1e959c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E95A0u;
        goto label_1e95a0;
    }
    ctx->pc = 0x1E9598u;
    {
        const bool branch_taken_0x1e9598 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9598u;
            // 0x1e959c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9598) {
            ctx->pc = 0x1E95C8u;
            goto label_1e95c8;
        }
    }
    ctx->pc = 0x1E95A0u;
label_1e95a0:
    // 0x1e95a0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e95a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e95a4:
    // 0x1e95a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e95a8:
    // 0x1e95a8: 0x2463aaa0  addiu       $v1, $v1, -0x5560
    ctx->pc = 0x1e95a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945440));
label_1e95ac:
    // 0x1e95ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e95acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e95b0:
    // 0x1e95b0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e95b4:
    // 0x1e95b4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e95b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e95b8:
    // 0x1e95b8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e95b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e95bc:
    // 0x1e95bc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e95c0:
    // 0x1e95c0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e95c4:
    // 0x1e95c4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e95c8:
    // 0x1e95c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1e95c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1e95cc:
    // 0x1e95cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e95ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e95d0:
    // 0x1e95d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e95d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e95d4:
    // 0x1e95d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e95d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e95d8:
    // 0x1e95d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e95d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e95dc:
    // 0x1e95dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e95dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e95e0:
    // 0x1e95e0: 0x3e00008  jr          $ra
label_1e95e4:
    if (ctx->pc == 0x1E95E4u) {
        ctx->pc = 0x1E95E4u;
            // 0x1e95e4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x1E95E8u;
        goto label_1e95e8;
    }
    ctx->pc = 0x1E95E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E95E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E95E0u;
            // 0x1e95e4: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E95E8u;
label_1e95e8:
    // 0x1e95e8: 0x0  nop
    ctx->pc = 0x1e95e8u;
    // NOP
label_1e95ec:
    // 0x1e95ec: 0x0  nop
    ctx->pc = 0x1e95ecu;
    // NOP
label_1e95f0:
    // 0x1e95f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e95f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e95f4:
    // 0x1e95f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e95f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e95f8:
    // 0x1e95f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e95f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e95fc:
    // 0x1e95fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e95fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9600:
    // 0x1e9600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9604:
    // 0x1e9604: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_1e9608:
    if (ctx->pc == 0x1E9608u) {
        ctx->pc = 0x1E9608u;
            // 0x1e9608: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E960Cu;
        goto label_1e960c;
    }
    ctx->pc = 0x1E9604u;
    {
        const bool branch_taken_0x1e9604 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9604u;
            // 0x1e9608: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9604) {
            ctx->pc = 0x1E96ECu;
            goto label_1e96ec;
        }
    }
    ctx->pc = 0x1E960Cu;
label_1e960c:
    // 0x1e960c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e960cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9610:
    // 0x1e9610: 0x2442d600  addiu       $v0, $v0, -0x2A00
    ctx->pc = 0x1e9610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956544));
label_1e9614:
    // 0x1e9614: 0x1220002b  beqz        $s1, . + 4 + (0x2B << 2)
label_1e9618:
    if (ctx->pc == 0x1E9618u) {
        ctx->pc = 0x1E9618u;
            // 0x1e9618: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E961Cu;
        goto label_1e961c;
    }
    ctx->pc = 0x1E9614u;
    {
        const bool branch_taken_0x1e9614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9614u;
            // 0x1e9618: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9614) {
            ctx->pc = 0x1E96C4u;
            goto label_1e96c4;
        }
    }
    ctx->pc = 0x1E961Cu;
label_1e961c:
    // 0x1e961c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e961cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9620:
    // 0x1e9620: 0x2442d640  addiu       $v0, $v0, -0x29C0
    ctx->pc = 0x1e9620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956608));
label_1e9624:
    // 0x1e9624: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_1e9628:
    if (ctx->pc == 0x1E9628u) {
        ctx->pc = 0x1E9628u;
            // 0x1e9628: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E962Cu;
        goto label_1e962c;
    }
    ctx->pc = 0x1E9624u;
    {
        const bool branch_taken_0x1e9624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9624u;
            // 0x1e9628: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9624) {
            ctx->pc = 0x1E96C4u;
            goto label_1e96c4;
        }
    }
    ctx->pc = 0x1E962Cu;
label_1e962c:
    // 0x1e962c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e962cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9630:
    // 0x1e9630: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x1e9630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_1e9634:
    // 0x1e9634: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_1e9638:
    if (ctx->pc == 0x1E9638u) {
        ctx->pc = 0x1E9638u;
            // 0x1e9638: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E963Cu;
        goto label_1e963c;
    }
    ctx->pc = 0x1E9634u;
    {
        const bool branch_taken_0x1e9634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9634u;
            // 0x1e9638: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9634) {
            ctx->pc = 0x1E96C4u;
            goto label_1e96c4;
        }
    }
    ctx->pc = 0x1E963Cu;
label_1e963c:
    // 0x1e963c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e963cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9640:
    // 0x1e9640: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x1e9640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_1e9644:
    // 0x1e9644: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x1e9644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
label_1e9648:
    // 0x1e9648: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1e964c:
    if (ctx->pc == 0x1E964Cu) {
        ctx->pc = 0x1E964Cu;
            // 0x1e964c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1E9650u;
        goto label_1e9650;
    }
    ctx->pc = 0x1E9648u;
    {
        const bool branch_taken_0x1e9648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9648u;
            // 0x1e964c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9648) {
            ctx->pc = 0x1E9690u;
            goto label_1e9690;
        }
    }
    ctx->pc = 0x1E9650u;
label_1e9650:
    // 0x1e9650: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e9654:
    // 0x1e9654: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1e9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1e9658:
    // 0x1e9658: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e9658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1e965c:
    // 0x1e965c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e9660:
    if (ctx->pc == 0x1E9660u) {
        ctx->pc = 0x1E9664u;
        goto label_1e9664;
    }
    ctx->pc = 0x1E965Cu;
    {
        const bool branch_taken_0x1e965c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e965c) {
            ctx->pc = 0x1E9690u;
            goto label_1e9690;
        }
    }
    ctx->pc = 0x1E9664u;
label_1e9664:
    // 0x1e9664: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1e9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1e9668:
    // 0x1e9668: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e9668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e966c:
    // 0x1e966c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e9670:
    // 0x1e9670: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x1e9670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1e9674:
    // 0x1e9674: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1e9674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1e9678:
    // 0x1e9678: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1e9678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1e967c:
    // 0x1e967c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1e967cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_1e9680:
    // 0x1e9680: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e9680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e9684:
    // 0x1e9684: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9688:
    // 0x1e9688: 0xc0a7ab4  jal         func_29EAD0
label_1e968c:
    if (ctx->pc == 0x1E968Cu) {
        ctx->pc = 0x1E968Cu;
            // 0x1e968c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x1E9690u;
        goto label_1e9690;
    }
    ctx->pc = 0x1E9688u;
    SET_GPR_U32(ctx, 31, 0x1E9690u);
    ctx->pc = 0x1E968Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9688u;
            // 0x1e968c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9690u; }
        if (ctx->pc != 0x1E9690u) { return; }
    }
    ctx->pc = 0x1E9690u;
label_1e9690:
    // 0x1e9690: 0x5220000d  beql        $s1, $zero, . + 4 + (0xD << 2)
label_1e9694:
    if (ctx->pc == 0x1E9694u) {
        ctx->pc = 0x1E9694u;
            // 0x1e9694: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x1E9698u;
        goto label_1e9698;
    }
    ctx->pc = 0x1E9690u;
    {
        const bool branch_taken_0x1e9690 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9690) {
            ctx->pc = 0x1E9694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9690u;
            // 0x1e9694: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E96C8u;
            goto label_1e96c8;
        }
    }
    ctx->pc = 0x1E9698u;
label_1e9698:
    // 0x1e9698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e969c:
    // 0x1e969c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e969cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e96a0:
    // 0x1e96a0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_1e96a4:
    if (ctx->pc == 0x1E96A4u) {
        ctx->pc = 0x1E96A4u;
            // 0x1e96a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E96A8u;
        goto label_1e96a8;
    }
    ctx->pc = 0x1E96A0u;
    {
        const bool branch_taken_0x1e96a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96A0u;
            // 0x1e96a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96a0) {
            ctx->pc = 0x1E96C4u;
            goto label_1e96c4;
        }
    }
    ctx->pc = 0x1E96A8u;
label_1e96a8:
    // 0x1e96a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e96a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e96ac:
    // 0x1e96ac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e96acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e96b0:
    // 0x1e96b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e96b4:
    if (ctx->pc == 0x1E96B4u) {
        ctx->pc = 0x1E96B4u;
            // 0x1e96b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E96B8u;
        goto label_1e96b8;
    }
    ctx->pc = 0x1E96B0u;
    {
        const bool branch_taken_0x1e96b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E96B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96B0u;
            // 0x1e96b4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e96b0) {
            ctx->pc = 0x1E96C4u;
            goto label_1e96c4;
        }
    }
    ctx->pc = 0x1E96B8u;
label_1e96b8:
    // 0x1e96b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e96b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e96bc:
    // 0x1e96bc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e96c0:
    // 0x1e96c0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1e96c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1e96c4:
    // 0x1e96c4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1e96c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_1e96c8:
    // 0x1e96c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e96c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e96cc:
    // 0x1e96cc: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_1e96d0:
    if (ctx->pc == 0x1E96D0u) {
        ctx->pc = 0x1E96D0u;
            // 0x1e96d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E96D4u;
        goto label_1e96d4;
    }
    ctx->pc = 0x1E96CCu;
    {
        const bool branch_taken_0x1e96cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e96cc) {
            ctx->pc = 0x1E96D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96CCu;
            // 0x1e96d0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E96F0u;
            goto label_1e96f0;
        }
    }
    ctx->pc = 0x1E96D4u;
label_1e96d4:
    // 0x1e96d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e96d8:
    // 0x1e96d8: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x1e96d8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_1e96dc:
    // 0x1e96dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e96dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e96e0:
    // 0x1e96e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e96e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e96e4:
    // 0x1e96e4: 0xc0a7ab4  jal         func_29EAD0
label_1e96e8:
    if (ctx->pc == 0x1E96E8u) {
        ctx->pc = 0x1E96E8u;
            // 0x1e96e8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E96ECu;
        goto label_1e96ec;
    }
    ctx->pc = 0x1E96E4u;
    SET_GPR_U32(ctx, 31, 0x1E96ECu);
    ctx->pc = 0x1E96E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96E4u;
            // 0x1e96e8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96ECu; }
        if (ctx->pc != 0x1E96ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E96ECu; }
        if (ctx->pc != 0x1E96ECu) { return; }
    }
    ctx->pc = 0x1E96ECu;
label_1e96ec:
    // 0x1e96ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e96ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e96f0:
    // 0x1e96f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e96f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e96f4:
    // 0x1e96f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e96f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e96f8:
    // 0x1e96f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e96f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e96fc:
    // 0x1e96fc: 0x3e00008  jr          $ra
label_1e9700:
    if (ctx->pc == 0x1E9700u) {
        ctx->pc = 0x1E9700u;
            // 0x1e9700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E9704u;
        goto label_1e9704;
    }
    ctx->pc = 0x1E96FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E96FCu;
            // 0x1e9700: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9704u;
label_1e9704:
    // 0x1e9704: 0x0  nop
    ctx->pc = 0x1e9704u;
    // NOP
label_1e9708:
    // 0x1e9708: 0x0  nop
    ctx->pc = 0x1e9708u;
    // NOP
label_1e970c:
    // 0x1e970c: 0x0  nop
    ctx->pc = 0x1e970cu;
    // NOP
label_1e9710:
    // 0x1e9710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e9714:
    // 0x1e9714: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e9714u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9718:
    // 0x1e9718: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1e971c:
    // 0x1e971c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e971cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9720:
    // 0x1e9720: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e9720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1e9724:
    // 0x1e9724: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e9724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9728:
    // 0x1e9728: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e9728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e972c:
    // 0x1e972c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e972cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e9730:
    // 0x1e9730: 0x8d110000  lw          $s1, 0x0($t0)
    ctx->pc = 0x1e9730u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1e9734:
    // 0x1e9734: 0xc5143030  lwc1        $f20, 0x3030($t0)
    ctx->pc = 0x1e9734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e9738:
    // 0x1e9738: 0xc079aac  jal         func_1E6AB0
label_1e973c:
    if (ctx->pc == 0x1E973Cu) {
        ctx->pc = 0x1E973Cu;
            // 0x1e973c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9740u;
        goto label_1e9740;
    }
    ctx->pc = 0x1E9738u;
    SET_GPR_U32(ctx, 31, 0x1E9740u);
    ctx->pc = 0x1E973Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9738u;
            // 0x1e973c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6AB0u;
    if (runtime->hasFunction(0x1E6AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1E6AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9740u; }
        if (ctx->pc != 0x1E9740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6AB0_0x1e6ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9740u; }
        if (ctx->pc != 0x1E9740u) { return; }
    }
    ctx->pc = 0x1E9740u;
label_1e9740:
    // 0x1e9740: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e9740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e9744:
    // 0x1e9744: 0x223082b  sltu        $at, $s1, $v1
    ctx->pc = 0x1e9744u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e9748:
    // 0x1e9748: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_1e974c:
    if (ctx->pc == 0x1E974Cu) {
        ctx->pc = 0x1E9750u;
        goto label_1e9750;
    }
    ctx->pc = 0x1E9748u;
    {
        const bool branch_taken_0x1e9748 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9748) {
            ctx->pc = 0x1E97E8u;
            goto label_1e97e8;
        }
    }
    ctx->pc = 0x1E9750u;
label_1e9750:
    // 0x1e9750: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1e9750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1e9754:
    // 0x1e9754: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1e9754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9758:
    // 0x1e9758: 0xc623001c  lwc1        $f3, 0x1C($s1)
    ctx->pc = 0x1e9758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e975c:
    // 0x1e975c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x1e975cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9760:
    // 0x1e9760: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e9760u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e9764:
    // 0x1e9764: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e9764u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e9768:
    // 0x1e9768: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1e9768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1e976c:
    // 0x1e976c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9770:
    // 0x1e9770: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1e9770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9774:
    // 0x1e9774: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e9774u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e9778:
    // 0x1e9778: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e9778u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e977c:
    // 0x1e977c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1e977cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1e9780:
    // 0x1e9780: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1e9780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9784:
    // 0x1e9784: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1e9784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9788:
    // 0x1e9788: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e9788u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e978c:
    // 0x1e978c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e978cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e9790:
    // 0x1e9790: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1e9790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1e9794:
    // 0x1e9794: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1e9794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9798:
    // 0x1e9798: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1e9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e979c:
    // 0x1e979c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1e979cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1e97a0:
    // 0x1e97a0: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1e97a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_1e97a4:
    // 0x1e97a4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x1e97a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_1e97a8:
    // 0x1e97a8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1e97a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97ac:
    // 0x1e97ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e97acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e97b0:
    // 0x1e97b0: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x1e97b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1e97b4:
    // 0x1e97b4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1e97b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97b8:
    // 0x1e97b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e97b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e97bc:
    // 0x1e97bc: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x1e97bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1e97c0:
    // 0x1e97c0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1e97c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97c4:
    // 0x1e97c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e97c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e97c8:
    // 0x1e97c8: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x1e97c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1e97cc:
    // 0x1e97cc: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x1e97ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97d0:
    // 0x1e97d0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x1e97d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_1e97d4:
    // 0x1e97d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e97d8:
    // 0x1e97d8: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1e97d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1e97dc:
    // 0x1e97dc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x1e97dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e97e0:
    // 0x1e97e0: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
label_1e97e4:
    if (ctx->pc == 0x1E97E4u) {
        ctx->pc = 0x1E97E4u;
            // 0x1e97e4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1E97E8u;
        goto label_1e97e8;
    }
    ctx->pc = 0x1E97E0u;
    {
        const bool branch_taken_0x1e97e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e97e0) {
            ctx->pc = 0x1E97E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97E0u;
            // 0x1e97e4: 0xc6200000  lwc1        $f0, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9758u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e9758;
        }
    }
    ctx->pc = 0x1E97E8u;
label_1e97e8:
    // 0x1e97e8: 0xc6003030  lwc1        $f0, 0x3030($s0)
    ctx->pc = 0x1e97e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97ec:
    // 0x1e97ec: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1e97ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e97f0:
    // 0x1e97f0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1e97f4:
    if (ctx->pc == 0x1E97F4u) {
        ctx->pc = 0x1E97F4u;
            // 0x1e97f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1E97F8u;
        goto label_1e97f8;
    }
    ctx->pc = 0x1E97F0u;
    {
        const bool branch_taken_0x1e97f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e97f0) {
            ctx->pc = 0x1E97F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E97F0u;
            // 0x1e97f4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E9898u;
            goto label_1e9898;
        }
    }
    ctx->pc = 0x1E97F8u;
label_1e97f8:
    // 0x1e97f8: 0xc6003020  lwc1        $f0, 0x3020($s0)
    ctx->pc = 0x1e97f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e97fc:
    // 0x1e97fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e97fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1e9800:
    // 0x1e9800: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e9800u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e9804:
    // 0x1e9804: 0xe6003020  swc1        $f0, 0x3020($s0)
    ctx->pc = 0x1e9804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12320), bits); }
label_1e9808:
    // 0x1e9808: 0xc6003024  lwc1        $f0, 0x3024($s0)
    ctx->pc = 0x1e9808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e980c:
    // 0x1e980c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e980cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e9810:
    // 0x1e9810: 0xe6003024  swc1        $f0, 0x3024($s0)
    ctx->pc = 0x1e9810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12324), bits); }
label_1e9814:
    // 0x1e9814: 0xc6003028  lwc1        $f0, 0x3028($s0)
    ctx->pc = 0x1e9814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9818:
    // 0x1e9818: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1e9818u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1e981c:
    // 0x1e981c: 0xe6003028  swc1        $f0, 0x3028($s0)
    ctx->pc = 0x1e981cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12328), bits); }
label_1e9820:
    // 0x1e9820: 0xc600302c  lwc1        $f0, 0x302C($s0)
    ctx->pc = 0x1e9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e9824:
    // 0x1e9824: 0xe600302c  swc1        $f0, 0x302C($s0)
    ctx->pc = 0x1e9824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12332), bits); }
label_1e9828:
    // 0x1e9828: 0x92053042  lbu         $a1, 0x3042($s0)
    ctx->pc = 0x1e9828u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12354)));
label_1e982c:
    // 0x1e982c: 0x92043043  lbu         $a0, 0x3043($s0)
    ctx->pc = 0x1e982cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12355)));
label_1e9830:
    // 0x1e9830: 0xa2043042  sb          $a0, 0x3042($s0)
    ctx->pc = 0x1e9830u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12354), (uint8_t)GPR_U32(ctx, 4));
label_1e9834:
    // 0x1e9834: 0xa2053043  sb          $a1, 0x3043($s0)
    ctx->pc = 0x1e9834u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12355), (uint8_t)GPR_U32(ctx, 5));
label_1e9838:
    // 0x1e9838: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1e9838u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1e983c:
    // 0x1e983c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1e983cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1e9840:
    // 0x1e9840: 0xa2043040  sb          $a0, 0x3040($s0)
    ctx->pc = 0x1e9840u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12352), (uint8_t)GPR_U32(ctx, 4));
label_1e9844:
    // 0x1e9844: 0xa2053041  sb          $a1, 0x3041($s0)
    ctx->pc = 0x1e9844u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12353), (uint8_t)GPR_U32(ctx, 5));
label_1e9848:
    // 0x1e9848: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1e9848u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1e984c:
    // 0x1e984c: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1e984cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1e9850:
    // 0x1e9850: 0x96063038  lhu         $a2, 0x3038($s0)
    ctx->pc = 0x1e9850u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12344)));
label_1e9854:
    // 0x1e9854: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1e9854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1e9858:
    // 0x1e9858: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1e9858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1e985c:
    // 0x1e985c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1e985cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1e9860:
    // 0x1e9860: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x1e9860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_1e9864:
    // 0x1e9864: 0x94a43038  lhu         $a0, 0x3038($a1)
    ctx->pc = 0x1e9864u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12344)));
label_1e9868:
    // 0x1e9868: 0xa6043038  sh          $a0, 0x3038($s0)
    ctx->pc = 0x1e9868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12344), (uint16_t)GPR_U32(ctx, 4));
label_1e986c:
    // 0x1e986c: 0xa4a63038  sh          $a2, 0x3038($a1)
    ctx->pc = 0x1e986cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12344), (uint16_t)GPR_U32(ctx, 6));
label_1e9870:
    // 0x1e9870: 0x92053040  lbu         $a1, 0x3040($s0)
    ctx->pc = 0x1e9870u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12352)));
label_1e9874:
    // 0x1e9874: 0x92043041  lbu         $a0, 0x3041($s0)
    ctx->pc = 0x1e9874u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12353)));
label_1e9878:
    // 0x1e9878: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x1e9878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_1e987c:
    // 0x1e987c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_1e9880:
    if (ctx->pc == 0x1E9880u) {
        ctx->pc = 0x1E9884u;
        goto label_1e9884;
    }
    ctx->pc = 0x1E987Cu;
    {
        const bool branch_taken_0x1e987c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e987c) {
            ctx->pc = 0x1E9894u;
            goto label_1e9894;
        }
    }
    ctx->pc = 0x1E9884u;
label_1e9884:
    // 0x1e9884: 0x9604303a  lhu         $a0, 0x303A($s0)
    ctx->pc = 0x1e9884u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12346)));
label_1e9888:
    // 0x1e9888: 0x9603303c  lhu         $v1, 0x303C($s0)
    ctx->pc = 0x1e9888u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12348)));
label_1e988c:
    // 0x1e988c: 0xa603303a  sh          $v1, 0x303A($s0)
    ctx->pc = 0x1e988cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12346), (uint16_t)GPR_U32(ctx, 3));
label_1e9890:
    // 0x1e9890: 0xa604303c  sh          $a0, 0x303C($s0)
    ctx->pc = 0x1e9890u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12348), (uint16_t)GPR_U32(ctx, 4));
label_1e9894:
    // 0x1e9894: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e9894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1e9898:
    // 0x1e9898: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e9898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e989c:
    // 0x1e989c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e989cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e98a0:
    // 0x1e98a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e98a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e98a4:
    // 0x1e98a4: 0x3e00008  jr          $ra
label_1e98a8:
    if (ctx->pc == 0x1E98A8u) {
        ctx->pc = 0x1E98A8u;
            // 0x1e98a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E98ACu;
        goto label_1e98ac;
    }
    ctx->pc = 0x1E98A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98A4u;
            // 0x1e98a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E98ACu;
label_1e98ac:
    // 0x1e98ac: 0x0  nop
    ctx->pc = 0x1e98acu;
    // NOP
label_1e98b0:
    // 0x1e98b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e98b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e98b4:
    // 0x1e98b4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1e98b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e98b8:
    // 0x1e98b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e98b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e98bc:
    // 0x1e98bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e98bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e98c0:
    // 0x1e98c0: 0xc079a20  jal         func_1E6880
label_1e98c4:
    if (ctx->pc == 0x1E98C4u) {
        ctx->pc = 0x1E98C4u;
            // 0x1e98c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E98C8u;
        goto label_1e98c8;
    }
    ctx->pc = 0x1E98C0u;
    SET_GPR_U32(ctx, 31, 0x1E98C8u);
    ctx->pc = 0x1E98C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98C0u;
            // 0x1e98c4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6880u;
    if (runtime->hasFunction(0x1E6880u)) {
        auto targetFn = runtime->lookupFunction(0x1E6880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98C8u; }
        if (ctx->pc != 0x1E98C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6880_0x1e6880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E98C8u; }
        if (ctx->pc != 0x1E98C8u) { return; }
    }
    ctx->pc = 0x1E98C8u;
label_1e98c8:
    // 0x1e98c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e98c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e98cc:
    // 0x1e98cc: 0x3e00008  jr          $ra
label_1e98d0:
    if (ctx->pc == 0x1E98D0u) {
        ctx->pc = 0x1E98D0u;
            // 0x1e98d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E98D4u;
        goto label_1e98d4;
    }
    ctx->pc = 0x1E98CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E98D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E98CCu;
            // 0x1e98d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E98D4u;
label_1e98d4:
    // 0x1e98d4: 0x0  nop
    ctx->pc = 0x1e98d4u;
    // NOP
label_1e98d8:
    // 0x1e98d8: 0x0  nop
    ctx->pc = 0x1e98d8u;
    // NOP
label_1e98dc:
    // 0x1e98dc: 0x0  nop
    ctx->pc = 0x1e98dcu;
    // NOP
label_1e98e0:
    // 0x1e98e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e98e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e98e4:
    // 0x1e98e4: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e98e8:
    // 0x1e98e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e98e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e98ec:
    // 0x1e98ec: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1e98ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e98f0:
    // 0x1e98f0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x1e98f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1e98f4:
    // 0x1e98f4: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e98f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e98f8:
    // 0x1e98f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e98fc:
    // 0x1e98fc: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1e98fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1e9900:
    // 0x1e9900: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x1e9900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_1e9904:
    // 0x1e9904: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9904u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9908:
    // 0x1e9908: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1e9908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e990c:
    // 0x1e990c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1e990cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e9910:
    // 0x1e9910: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1e9910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1e9914:
    // 0x1e9914: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1e9914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1e9918:
    // 0x1e9918: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x1e9918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1e991c:
    // 0x1e991c: 0xafa4007c  sw          $a0, 0x7C($sp)
    ctx->pc = 0x1e991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 4));
label_1e9920:
    // 0x1e9920: 0x80c40010  lb          $a0, 0x10($a2)
    ctx->pc = 0x1e9920u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_1e9924:
    // 0x1e9924: 0xa3a40080  sb          $a0, 0x80($sp)
    ctx->pc = 0x1e9924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 4));
label_1e9928:
    // 0x1e9928: 0xc4c90020  lwc1        $f9, 0x20($a2)
    ctx->pc = 0x1e9928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e992c:
    // 0x1e992c: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1e992cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e9930:
    // 0x1e9930: 0xc4c80024  lwc1        $f8, 0x24($a2)
    ctx->pc = 0x1e9930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e9934:
    // 0x1e9934: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1e9934u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1e9938:
    // 0x1e9938: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1e9938u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e993c:
    // 0x1e993c: 0xc4c70028  lwc1        $f7, 0x28($a2)
    ctx->pc = 0x1e993cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e9940:
    // 0x1e9940: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1e9940u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1e9944:
    // 0x1e9944: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1e9944u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e9948:
    // 0x1e9948: 0xc4c6002c  lwc1        $f6, 0x2C($a2)
    ctx->pc = 0x1e9948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e994c:
    // 0x1e994c: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1e994cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1e9950:
    // 0x1e9950: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1e9950u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e9954:
    // 0x1e9954: 0xc4c50030  lwc1        $f5, 0x30($a2)
    ctx->pc = 0x1e9954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e9958:
    // 0x1e9958: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1e9958u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1e995c:
    // 0x1e995c: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1e995cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e9960:
    // 0x1e9960: 0xc4c50034  lwc1        $f5, 0x34($a2)
    ctx->pc = 0x1e9960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e9964:
    // 0x1e9964: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1e9964u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e9968:
    // 0x1e9968: 0x8cc40038  lw          $a0, 0x38($a2)
    ctx->pc = 0x1e9968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1e996c:
    // 0x1e996c: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x1e996cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_1e9970:
    // 0x1e9970: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1e9970u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e9974:
    // 0x1e9974: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1e9974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e9978:
    // 0x1e9978: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1e997c:
    // 0x1e997c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1e997cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e9980:
    // 0x1e9980: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x1e9980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_1e9984:
    // 0x1e9984: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e9984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e9988:
    // 0x1e9988: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e998c:
    // 0x1e998c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1e998cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e9990:
    // 0x1e9990: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1e9990u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e9994:
    // 0x1e9994: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1e9994u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e9998:
    // 0x1e9998: 0x11000012  beqz        $t0, . + 4 + (0x12 << 2)
label_1e999c:
    if (ctx->pc == 0x1E999Cu) {
        ctx->pc = 0x1E999Cu;
            // 0x1e999c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1E99A0u;
        goto label_1e99a0;
    }
    ctx->pc = 0x1E9998u;
    {
        const bool branch_taken_0x1e9998 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9998u;
            // 0x1e999c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9998) {
            ctx->pc = 0x1E99E4u;
            goto label_1e99e4;
        }
    }
    ctx->pc = 0x1E99A0u;
label_1e99a0:
    // 0x1e99a0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e99a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e99a4:
    // 0x1e99a4: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x1e99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
label_1e99a8:
    // 0x1e99a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e99a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e99ac:
    // 0x1e99ac: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e99acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e99b0:
    // 0x1e99b0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e99b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e99b4:
    // 0x1e99b4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e99b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e99b8:
    // 0x1e99b8: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1e99b8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e99bc:
    // 0x1e99bc: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e99bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e99c0:
    // 0x1e99c0: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1e99c0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e99c4:
    // 0x1e99c4: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1e99c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e99c8:
    // 0x1e99c8: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e99c8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e99cc:
    // 0x1e99cc: 0xc07a4f0  jal         func_1E93C0
label_1e99d0:
    if (ctx->pc == 0x1E99D0u) {
        ctx->pc = 0x1E99D0u;
            // 0x1e99d0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1E99D4u;
        goto label_1e99d4;
    }
    ctx->pc = 0x1E99CCu;
    SET_GPR_U32(ctx, 31, 0x1E99D4u);
    ctx->pc = 0x1E99D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99CCu;
            // 0x1e99d0: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    goto label_1e93c0;
    ctx->pc = 0x1E99D4u;
label_1e99d4:
    // 0x1e99d4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e99d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e99d8:
    // 0x1e99d8: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e99dc:
    // 0x1e99dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e99e0:
    if (ctx->pc == 0x1E99E0u) {
        ctx->pc = 0x1E99E0u;
            // 0x1e99e0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1E99E4u;
        goto label_1e99e4;
    }
    ctx->pc = 0x1E99DCu;
    {
        const bool branch_taken_0x1e99dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E99E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99DCu;
            // 0x1e99e0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e99dc) {
            ctx->pc = 0x1E99FCu;
            goto label_1e99fc;
        }
    }
    ctx->pc = 0x1E99E4u;
label_1e99e4:
    // 0x1e99e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e99e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e99e8:
    // 0x1e99e8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1e99e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e99ec:
    // 0x1e99ec: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1e99ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1e99f0:
    // 0x1e99f0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1e99f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e99f4:
    // 0x1e99f4: 0xc07a4f0  jal         func_1E93C0
label_1e99f8:
    if (ctx->pc == 0x1E99F8u) {
        ctx->pc = 0x1E99F8u;
            // 0x1e99f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E99FCu;
        goto label_1e99fc;
    }
    ctx->pc = 0x1E99F4u;
    SET_GPR_U32(ctx, 31, 0x1E99FCu);
    ctx->pc = 0x1E99F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E99F4u;
            // 0x1e99f8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E93C0u;
    goto label_1e93c0;
    ctx->pc = 0x1E99FCu;
label_1e99fc:
    // 0x1e99fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9a00:
    // 0x1e9a00: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e9a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e9a04:
    // 0x1e9a04: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1e9a08:
    // 0x1e9a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9a0c:
    // 0x1e9a0c: 0x3e00008  jr          $ra
label_1e9a10:
    if (ctx->pc == 0x1E9A10u) {
        ctx->pc = 0x1E9A10u;
            // 0x1e9a10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E9A14u;
        goto label_1e9a14;
    }
    ctx->pc = 0x1E9A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A0Cu;
            // 0x1e9a10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9A14u;
label_1e9a14:
    // 0x1e9a14: 0x0  nop
    ctx->pc = 0x1e9a14u;
    // NOP
label_1e9a18:
    // 0x1e9a18: 0x0  nop
    ctx->pc = 0x1e9a18u;
    // NOP
label_1e9a1c:
    // 0x1e9a1c: 0x0  nop
    ctx->pc = 0x1e9a1cu;
    // NOP
label_1e9a20:
    // 0x1e9a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9a24:
    // 0x1e9a24: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e9a28:
    // 0x1e9a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9a2c:
    // 0x1e9a2c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e9a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e9a30:
    // 0x1e9a30: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e9a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1e9a34:
    // 0x1e9a34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9a38:
    // 0x1e9a38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1e9a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a3c:
    // 0x1e9a3c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1e9a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1e9a40:
    // 0x1e9a40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e9a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a44:
    // 0x1e9a44: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e9a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1e9a48:
    // 0x1e9a48: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1e9a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a4c:
    // 0x1e9a4c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e9a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e9a50:
    // 0x1e9a50: 0xc07a18c  jal         func_1E8630
label_1e9a54:
    if (ctx->pc == 0x1E9A54u) {
        ctx->pc = 0x1E9A54u;
            // 0x1e9a54: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E9A58u;
        goto label_1e9a58;
    }
    ctx->pc = 0x1E9A50u;
    SET_GPR_U32(ctx, 31, 0x1E9A58u);
    ctx->pc = 0x1E9A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A50u;
            // 0x1e9a54: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8630u;
    if (runtime->hasFunction(0x1E8630u)) {
        auto targetFn = runtime->lookupFunction(0x1E8630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A58u; }
        if (ctx->pc != 0x1E9A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8630_0x1e8630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9A58u; }
        if (ctx->pc != 0x1E9A58u) { return; }
    }
    ctx->pc = 0x1E9A58u;
label_1e9a58:
    // 0x1e9a58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9a5c:
    // 0x1e9a5c: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e9a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e9a60:
    // 0x1e9a60: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e9a64:
    // 0x1e9a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9a68:
    // 0x1e9a68: 0x3e00008  jr          $ra
label_1e9a6c:
    if (ctx->pc == 0x1E9A6Cu) {
        ctx->pc = 0x1E9A6Cu;
            // 0x1e9a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E9A70u;
        goto label_1e9a70;
    }
    ctx->pc = 0x1E9A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9A68u;
            // 0x1e9a6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9A70u;
label_1e9a70:
    // 0x1e9a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9a74:
    // 0x1e9a74: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e9a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e9a78:
    // 0x1e9a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9a7c:
    // 0x1e9a7c: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e9a7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e9a80:
    // 0x1e9a80: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1e9a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1e9a84:
    // 0x1e9a84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9a88:
    // 0x1e9a88: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1e9a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a8c:
    // 0x1e9a8c: 0x2442deb0  addiu       $v0, $v0, -0x2150
    ctx->pc = 0x1e9a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958768));
label_1e9a90:
    // 0x1e9a90: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e9a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a94:
    // 0x1e9a94: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1e9a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_1e9a98:
    // 0x1e9a98: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1e9a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e9a9c:
    // 0x1e9a9c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e9aa0:
    // 0x1e9aa0: 0xc07a180  jal         func_1E8600
label_1e9aa4:
    if (ctx->pc == 0x1E9AA4u) {
        ctx->pc = 0x1E9AA4u;
            // 0x1e9aa4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E9AA8u;
        goto label_1e9aa8;
    }
    ctx->pc = 0x1E9AA0u;
    SET_GPR_U32(ctx, 31, 0x1E9AA8u);
    ctx->pc = 0x1E9AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AA0u;
            // 0x1e9aa4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8600u;
    if (runtime->hasFunction(0x1E8600u)) {
        auto targetFn = runtime->lookupFunction(0x1E8600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AA8u; }
        if (ctx->pc != 0x1E9AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8600_0x1e8600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AA8u; }
        if (ctx->pc != 0x1E9AA8u) { return; }
    }
    ctx->pc = 0x1E9AA8u;
label_1e9aa8:
    // 0x1e9aa8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9aac:
    // 0x1e9aac: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e9aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e9ab0:
    // 0x1e9ab0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e9ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e9ab4:
    // 0x1e9ab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9ab8:
    // 0x1e9ab8: 0x3e00008  jr          $ra
label_1e9abc:
    if (ctx->pc == 0x1E9ABCu) {
        ctx->pc = 0x1E9ABCu;
            // 0x1e9abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E9AC0u;
        goto label_1e9ac0;
    }
    ctx->pc = 0x1E9AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AB8u;
            // 0x1e9abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9AC0u;
label_1e9ac0:
    // 0x1e9ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9ac4:
    // 0x1e9ac4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e9ac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ac8:
    // 0x1e9ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9acc:
    // 0x1e9acc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9ad0:
    // 0x1e9ad0: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
label_1e9ad4:
    // 0x1e9ad4: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1e9ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1e9ad8:
    // 0x1e9ad8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e9ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9adc:
    // 0x1e9adc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e9adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e9ae0:
    // 0x1e9ae0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1e9ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e9ae4:
    // 0x1e9ae4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1e9ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e9ae8:
    // 0x1e9ae8: 0xc07a24c  jal         func_1E8930
label_1e9aec:
    if (ctx->pc == 0x1E9AECu) {
        ctx->pc = 0x1E9AECu;
            // 0x1e9aec: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E9AF0u;
        goto label_1e9af0;
    }
    ctx->pc = 0x1E9AE8u;
    SET_GPR_U32(ctx, 31, 0x1E9AF0u);
    ctx->pc = 0x1E9AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9AE8u;
            // 0x1e9aec: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8930u;
    if (runtime->hasFunction(0x1E8930u)) {
        auto targetFn = runtime->lookupFunction(0x1E8930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AF0u; }
        if (ctx->pc != 0x1E9AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8930_0x1e8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9AF0u; }
        if (ctx->pc != 0x1E9AF0u) { return; }
    }
    ctx->pc = 0x1E9AF0u;
label_1e9af0:
    // 0x1e9af0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9af4:
    // 0x1e9af4: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e9af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e9af8:
    // 0x1e9af8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e9afc:
    // 0x1e9afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b00:
    // 0x1e9b00: 0x3e00008  jr          $ra
label_1e9b04:
    if (ctx->pc == 0x1E9B04u) {
        ctx->pc = 0x1E9B04u;
            // 0x1e9b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E9B08u;
        goto label_1e9b08;
    }
    ctx->pc = 0x1E9B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B00u;
            // 0x1e9b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9B08u;
label_1e9b08:
    // 0x1e9b08: 0x0  nop
    ctx->pc = 0x1e9b08u;
    // NOP
label_1e9b0c:
    // 0x1e9b0c: 0x0  nop
    ctx->pc = 0x1e9b0cu;
    // NOP
label_1e9b10:
    // 0x1e9b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e9b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e9b14:
    // 0x1e9b14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1e9b14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b18:
    // 0x1e9b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9b1c:
    // 0x1e9b1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9b20:
    // 0x1e9b20: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x1e9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_1e9b24:
    // 0x1e9b24: 0x2442de90  addiu       $v0, $v0, -0x2170
    ctx->pc = 0x1e9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
label_1e9b28:
    // 0x1e9b28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e9b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b2c:
    // 0x1e9b2c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e9b30:
    // 0x1e9b30: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1e9b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b34:
    // 0x1e9b34: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x1e9b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e9b38:
    // 0x1e9b38: 0xc07a240  jal         func_1E8900
label_1e9b3c:
    if (ctx->pc == 0x1E9B3Cu) {
        ctx->pc = 0x1E9B3Cu;
            // 0x1e9b3c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E9B40u;
        goto label_1e9b40;
    }
    ctx->pc = 0x1E9B38u;
    SET_GPR_U32(ctx, 31, 0x1E9B40u);
    ctx->pc = 0x1E9B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B38u;
            // 0x1e9b3c: 0xa3a00014  sb          $zero, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8900u;
    if (runtime->hasFunction(0x1E8900u)) {
        auto targetFn = runtime->lookupFunction(0x1E8900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B40u; }
        if (ctx->pc != 0x1E9B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8900_0x1e8900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9B40u; }
        if (ctx->pc != 0x1E9B40u) { return; }
    }
    ctx->pc = 0x1E9B40u;
label_1e9b40:
    // 0x1e9b40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9b44:
    // 0x1e9b44: 0x2463d4f0  addiu       $v1, $v1, -0x2B10
    ctx->pc = 0x1e9b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956272));
label_1e9b48:
    // 0x1e9b48: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1e9b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1e9b4c:
    // 0x1e9b4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9b50:
    // 0x1e9b50: 0x3e00008  jr          $ra
label_1e9b54:
    if (ctx->pc == 0x1E9B54u) {
        ctx->pc = 0x1E9B54u;
            // 0x1e9b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E9B58u;
        goto label_1e9b58;
    }
    ctx->pc = 0x1E9B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9B50u;
            // 0x1e9b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9B58u;
label_1e9b58:
    // 0x1e9b58: 0x0  nop
    ctx->pc = 0x1e9b58u;
    // NOP
label_1e9b5c:
    // 0x1e9b5c: 0x0  nop
    ctx->pc = 0x1e9b5cu;
    // NOP
label_1e9b60:
    // 0x1e9b60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1e9b64:
    // 0x1e9b64: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x1e9b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_1e9b68:
    // 0x1e9b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e9b6c:
    // 0x1e9b6c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1e9b6cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e9b70:
    // 0x1e9b70: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1e9b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1e9b74:
    // 0x1e9b74: 0x3443ffee  ori         $v1, $v0, 0xFFEE
    ctx->pc = 0x1e9b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_1e9b78:
    // 0x1e9b78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e9b7c:
    // 0x1e9b7c: 0x2442dea0  addiu       $v0, $v0, -0x2160
    ctx->pc = 0x1e9b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958752));
label_1e9b80:
    // 0x1e9b80: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1e9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_1e9b84:
    // 0x1e9b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e9b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e9b88:
    // 0x1e9b88: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1e9b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e9b8c:
    // 0x1e9b8c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1e9b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_1e9b90:
    // 0x1e9b90: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1e9b94:
    // 0x1e9b94: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x1e9b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
label_1e9b98:
    // 0x1e9b98: 0x8ce5000c  lw          $a1, 0xC($a3)
    ctx->pc = 0x1e9b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1e9b9c:
    // 0x1e9b9c: 0xafa5007c  sw          $a1, 0x7C($sp)
    ctx->pc = 0x1e9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 5));
label_1e9ba0:
    // 0x1e9ba0: 0x80e50010  lb          $a1, 0x10($a3)
    ctx->pc = 0x1e9ba0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 16)));
label_1e9ba4:
    // 0x1e9ba4: 0xa3a50080  sb          $a1, 0x80($sp)
    ctx->pc = 0x1e9ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 5));
label_1e9ba8:
    // 0x1e9ba8: 0xc4e90020  lwc1        $f9, 0x20($a3)
    ctx->pc = 0x1e9ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e9bac:
    // 0x1e9bac: 0xe7a90090  swc1        $f9, 0x90($sp)
    ctx->pc = 0x1e9bacu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e9bb0:
    // 0x1e9bb0: 0xc4e80024  lwc1        $f8, 0x24($a3)
    ctx->pc = 0x1e9bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1e9bb4:
    // 0x1e9bb4: 0x46004907  neg.s       $f4, $f9
    ctx->pc = 0x1e9bb4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[9]);
label_1e9bb8:
    // 0x1e9bb8: 0xe7a80094  swc1        $f8, 0x94($sp)
    ctx->pc = 0x1e9bb8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e9bbc:
    // 0x1e9bbc: 0xc4e70028  lwc1        $f7, 0x28($a3)
    ctx->pc = 0x1e9bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1e9bc0:
    // 0x1e9bc0: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x1e9bc0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
label_1e9bc4:
    // 0x1e9bc4: 0xe7a70098  swc1        $f7, 0x98($sp)
    ctx->pc = 0x1e9bc4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e9bc8:
    // 0x1e9bc8: 0xc4e6002c  lwc1        $f6, 0x2C($a3)
    ctx->pc = 0x1e9bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1e9bcc:
    // 0x1e9bcc: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x1e9bccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
label_1e9bd0:
    // 0x1e9bd0: 0xe7a6009c  swc1        $f6, 0x9C($sp)
    ctx->pc = 0x1e9bd0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e9bd4:
    // 0x1e9bd4: 0xc4e50030  lwc1        $f5, 0x30($a3)
    ctx->pc = 0x1e9bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e9bd8:
    // 0x1e9bd8: 0x46003047  neg.s       $f1, $f6
    ctx->pc = 0x1e9bd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[6]);
label_1e9bdc:
    // 0x1e9bdc: 0xe7a500a0  swc1        $f5, 0xA0($sp)
    ctx->pc = 0x1e9bdcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1e9be0:
    // 0x1e9be0: 0xc4e50034  lwc1        $f5, 0x34($a3)
    ctx->pc = 0x1e9be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e9be4:
    // 0x1e9be4: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x1e9be4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1e9be8:
    // 0x1e9be8: 0x8ce50038  lw          $a1, 0x38($a3)
    ctx->pc = 0x1e9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_1e9bec:
    // 0x1e9bec: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x1e9becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_1e9bf0:
    // 0x1e9bf0: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x1e9bf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1e9bf4:
    // 0x1e9bf4: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x1e9bf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1e9bf8:
    // 0x1e9bf8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1e9bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1e9bfc:
    // 0x1e9bfc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1e9bfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_1e9c00:
    // 0x1e9c00: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x1e9c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
label_1e9c04:
    // 0x1e9c04: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x1e9c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_1e9c08:
    // 0x1e9c08: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e9c0c:
    // 0x1e9c0c: 0xe7a90050  swc1        $f9, 0x50($sp)
    ctx->pc = 0x1e9c0cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1e9c10:
    // 0x1e9c10: 0xe7a80054  swc1        $f8, 0x54($sp)
    ctx->pc = 0x1e9c10u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1e9c14:
    // 0x1e9c14: 0xe7a70058  swc1        $f7, 0x58($sp)
    ctx->pc = 0x1e9c14u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1e9c18:
    // 0x1e9c18: 0x11200012  beqz        $t1, . + 4 + (0x12 << 2)
label_1e9c1c:
    if (ctx->pc == 0x1E9C1Cu) {
        ctx->pc = 0x1E9C1Cu;
            // 0x1e9c1c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x1E9C20u;
        goto label_1e9c20;
    }
    ctx->pc = 0x1E9C18u;
    {
        const bool branch_taken_0x1e9c18 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C18u;
            // 0x1e9c1c: 0xe7a6005c  swc1        $f6, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c18) {
            ctx->pc = 0x1E9C64u;
            goto label_1e9c64;
        }
    }
    ctx->pc = 0x1E9C20u;
label_1e9c20:
    // 0x1e9c20: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e9c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c24:
    // 0x1e9c24: 0xafa90030  sw          $t1, 0x30($sp)
    ctx->pc = 0x1e9c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 9));
label_1e9c28:
    // 0x1e9c28: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1e9c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e9c2c:
    // 0x1e9c2c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1e9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1e9c30:
    // 0x1e9c30: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1e9c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c34:
    // 0x1e9c34: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1e9c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e9c38:
    // 0x1e9c38: 0xe7a90020  swc1        $f9, 0x20($sp)
    ctx->pc = 0x1e9c38u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e9c3c:
    // 0x1e9c3c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1e9c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9c40:
    // 0x1e9c40: 0xe7a80024  swc1        $f8, 0x24($sp)
    ctx->pc = 0x1e9c40u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e9c44:
    // 0x1e9c44: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1e9c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e9c48:
    // 0x1e9c48: 0xe7a70028  swc1        $f7, 0x28($sp)
    ctx->pc = 0x1e9c48u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e9c4c:
    // 0x1e9c4c: 0xc07a070  jal         func_1E81C0
label_1e9c50:
    if (ctx->pc == 0x1E9C50u) {
        ctx->pc = 0x1E9C50u;
            // 0x1e9c50: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->pc = 0x1E9C54u;
        goto label_1e9c54;
    }
    ctx->pc = 0x1E9C4Cu;
    SET_GPR_U32(ctx, 31, 0x1E9C54u);
    ctx->pc = 0x1E9C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C4Cu;
            // 0x1e9c50: 0xe7a6002c  swc1        $f6, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E81C0u;
    if (runtime->hasFunction(0x1E81C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E81C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C54u; }
        if (ctx->pc != 0x1E9C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81C0_0x1e81c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C54u; }
        if (ctx->pc != 0x1E9C54u) { return; }
    }
    ctx->pc = 0x1E9C54u;
label_1e9c54:
    // 0x1e9c54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9c54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9c58:
    // 0x1e9c58: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e9c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e9c5c:
    // 0x1e9c5c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e9c60:
    if (ctx->pc == 0x1E9C60u) {
        ctx->pc = 0x1E9C60u;
            // 0x1e9c60: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1E9C64u;
        goto label_1e9c64;
    }
    ctx->pc = 0x1E9C5Cu;
    {
        const bool branch_taken_0x1e9c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C5Cu;
            // 0x1e9c60: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c5c) {
            ctx->pc = 0x1E9C7Cu;
            goto label_1e9c7c;
        }
    }
    ctx->pc = 0x1E9C64u;
label_1e9c64:
    // 0x1e9c64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e9c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c68:
    // 0x1e9c68: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1e9c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1e9c6c:
    // 0x1e9c6c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x1e9c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1e9c70:
    // 0x1e9c70: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x1e9c70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1e9c74:
    // 0x1e9c74: 0xc07a070  jal         func_1E81C0
label_1e9c78:
    if (ctx->pc == 0x1E9C78u) {
        ctx->pc = 0x1E9C78u;
            // 0x1e9c78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C7Cu;
        goto label_1e9c7c;
    }
    ctx->pc = 0x1E9C74u;
    SET_GPR_U32(ctx, 31, 0x1E9C7Cu);
    ctx->pc = 0x1E9C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C74u;
            // 0x1e9c78: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E81C0u;
    if (runtime->hasFunction(0x1E81C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E81C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C7Cu; }
        if (ctx->pc != 0x1E9C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E81C0_0x1e81c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9C7Cu; }
        if (ctx->pc != 0x1E9C7Cu) { return; }
    }
    ctx->pc = 0x1E9C7Cu;
label_1e9c7c:
    // 0x1e9c7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e9c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e9c80:
    // 0x1e9c80: 0x2463d4e0  addiu       $v1, $v1, -0x2B20
    ctx->pc = 0x1e9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956256));
label_1e9c84:
    // 0x1e9c84: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x1e9c84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_1e9c88:
    // 0x1e9c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9c8c:
    // 0x1e9c8c: 0x3e00008  jr          $ra
label_1e9c90:
    if (ctx->pc == 0x1E9C90u) {
        ctx->pc = 0x1E9C90u;
            // 0x1e9c90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1E9C94u;
        goto label_1e9c94;
    }
    ctx->pc = 0x1E9C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E9C8Cu;
            // 0x1e9c90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E9C94u;
label_1e9c94:
    // 0x1e9c94: 0x0  nop
    ctx->pc = 0x1e9c94u;
    // NOP
label_1e9c98:
    // 0x1e9c98: 0x0  nop
    ctx->pc = 0x1e9c98u;
    // NOP
label_1e9c9c:
    // 0x1e9c9c: 0x0  nop
    ctx->pc = 0x1e9c9cu;
    // NOP
}
