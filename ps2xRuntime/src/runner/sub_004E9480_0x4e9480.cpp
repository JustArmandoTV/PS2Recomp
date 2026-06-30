#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E9480
// Address: 0x4e9480 - 0x4ea560
void sub_004E9480_0x4e9480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9480_0x4e9480");
#endif

    switch (ctx->pc) {
        case 0x4e9480u: goto label_4e9480;
        case 0x4e9484u: goto label_4e9484;
        case 0x4e9488u: goto label_4e9488;
        case 0x4e948cu: goto label_4e948c;
        case 0x4e9490u: goto label_4e9490;
        case 0x4e9494u: goto label_4e9494;
        case 0x4e9498u: goto label_4e9498;
        case 0x4e949cu: goto label_4e949c;
        case 0x4e94a0u: goto label_4e94a0;
        case 0x4e94a4u: goto label_4e94a4;
        case 0x4e94a8u: goto label_4e94a8;
        case 0x4e94acu: goto label_4e94ac;
        case 0x4e94b0u: goto label_4e94b0;
        case 0x4e94b4u: goto label_4e94b4;
        case 0x4e94b8u: goto label_4e94b8;
        case 0x4e94bcu: goto label_4e94bc;
        case 0x4e94c0u: goto label_4e94c0;
        case 0x4e94c4u: goto label_4e94c4;
        case 0x4e94c8u: goto label_4e94c8;
        case 0x4e94ccu: goto label_4e94cc;
        case 0x4e94d0u: goto label_4e94d0;
        case 0x4e94d4u: goto label_4e94d4;
        case 0x4e94d8u: goto label_4e94d8;
        case 0x4e94dcu: goto label_4e94dc;
        case 0x4e94e0u: goto label_4e94e0;
        case 0x4e94e4u: goto label_4e94e4;
        case 0x4e94e8u: goto label_4e94e8;
        case 0x4e94ecu: goto label_4e94ec;
        case 0x4e94f0u: goto label_4e94f0;
        case 0x4e94f4u: goto label_4e94f4;
        case 0x4e94f8u: goto label_4e94f8;
        case 0x4e94fcu: goto label_4e94fc;
        case 0x4e9500u: goto label_4e9500;
        case 0x4e9504u: goto label_4e9504;
        case 0x4e9508u: goto label_4e9508;
        case 0x4e950cu: goto label_4e950c;
        case 0x4e9510u: goto label_4e9510;
        case 0x4e9514u: goto label_4e9514;
        case 0x4e9518u: goto label_4e9518;
        case 0x4e951cu: goto label_4e951c;
        case 0x4e9520u: goto label_4e9520;
        case 0x4e9524u: goto label_4e9524;
        case 0x4e9528u: goto label_4e9528;
        case 0x4e952cu: goto label_4e952c;
        case 0x4e9530u: goto label_4e9530;
        case 0x4e9534u: goto label_4e9534;
        case 0x4e9538u: goto label_4e9538;
        case 0x4e953cu: goto label_4e953c;
        case 0x4e9540u: goto label_4e9540;
        case 0x4e9544u: goto label_4e9544;
        case 0x4e9548u: goto label_4e9548;
        case 0x4e954cu: goto label_4e954c;
        case 0x4e9550u: goto label_4e9550;
        case 0x4e9554u: goto label_4e9554;
        case 0x4e9558u: goto label_4e9558;
        case 0x4e955cu: goto label_4e955c;
        case 0x4e9560u: goto label_4e9560;
        case 0x4e9564u: goto label_4e9564;
        case 0x4e9568u: goto label_4e9568;
        case 0x4e956cu: goto label_4e956c;
        case 0x4e9570u: goto label_4e9570;
        case 0x4e9574u: goto label_4e9574;
        case 0x4e9578u: goto label_4e9578;
        case 0x4e957cu: goto label_4e957c;
        case 0x4e9580u: goto label_4e9580;
        case 0x4e9584u: goto label_4e9584;
        case 0x4e9588u: goto label_4e9588;
        case 0x4e958cu: goto label_4e958c;
        case 0x4e9590u: goto label_4e9590;
        case 0x4e9594u: goto label_4e9594;
        case 0x4e9598u: goto label_4e9598;
        case 0x4e959cu: goto label_4e959c;
        case 0x4e95a0u: goto label_4e95a0;
        case 0x4e95a4u: goto label_4e95a4;
        case 0x4e95a8u: goto label_4e95a8;
        case 0x4e95acu: goto label_4e95ac;
        case 0x4e95b0u: goto label_4e95b0;
        case 0x4e95b4u: goto label_4e95b4;
        case 0x4e95b8u: goto label_4e95b8;
        case 0x4e95bcu: goto label_4e95bc;
        case 0x4e95c0u: goto label_4e95c0;
        case 0x4e95c4u: goto label_4e95c4;
        case 0x4e95c8u: goto label_4e95c8;
        case 0x4e95ccu: goto label_4e95cc;
        case 0x4e95d0u: goto label_4e95d0;
        case 0x4e95d4u: goto label_4e95d4;
        case 0x4e95d8u: goto label_4e95d8;
        case 0x4e95dcu: goto label_4e95dc;
        case 0x4e95e0u: goto label_4e95e0;
        case 0x4e95e4u: goto label_4e95e4;
        case 0x4e95e8u: goto label_4e95e8;
        case 0x4e95ecu: goto label_4e95ec;
        case 0x4e95f0u: goto label_4e95f0;
        case 0x4e95f4u: goto label_4e95f4;
        case 0x4e95f8u: goto label_4e95f8;
        case 0x4e95fcu: goto label_4e95fc;
        case 0x4e9600u: goto label_4e9600;
        case 0x4e9604u: goto label_4e9604;
        case 0x4e9608u: goto label_4e9608;
        case 0x4e960cu: goto label_4e960c;
        case 0x4e9610u: goto label_4e9610;
        case 0x4e9614u: goto label_4e9614;
        case 0x4e9618u: goto label_4e9618;
        case 0x4e961cu: goto label_4e961c;
        case 0x4e9620u: goto label_4e9620;
        case 0x4e9624u: goto label_4e9624;
        case 0x4e9628u: goto label_4e9628;
        case 0x4e962cu: goto label_4e962c;
        case 0x4e9630u: goto label_4e9630;
        case 0x4e9634u: goto label_4e9634;
        case 0x4e9638u: goto label_4e9638;
        case 0x4e963cu: goto label_4e963c;
        case 0x4e9640u: goto label_4e9640;
        case 0x4e9644u: goto label_4e9644;
        case 0x4e9648u: goto label_4e9648;
        case 0x4e964cu: goto label_4e964c;
        case 0x4e9650u: goto label_4e9650;
        case 0x4e9654u: goto label_4e9654;
        case 0x4e9658u: goto label_4e9658;
        case 0x4e965cu: goto label_4e965c;
        case 0x4e9660u: goto label_4e9660;
        case 0x4e9664u: goto label_4e9664;
        case 0x4e9668u: goto label_4e9668;
        case 0x4e966cu: goto label_4e966c;
        case 0x4e9670u: goto label_4e9670;
        case 0x4e9674u: goto label_4e9674;
        case 0x4e9678u: goto label_4e9678;
        case 0x4e967cu: goto label_4e967c;
        case 0x4e9680u: goto label_4e9680;
        case 0x4e9684u: goto label_4e9684;
        case 0x4e9688u: goto label_4e9688;
        case 0x4e968cu: goto label_4e968c;
        case 0x4e9690u: goto label_4e9690;
        case 0x4e9694u: goto label_4e9694;
        case 0x4e9698u: goto label_4e9698;
        case 0x4e969cu: goto label_4e969c;
        case 0x4e96a0u: goto label_4e96a0;
        case 0x4e96a4u: goto label_4e96a4;
        case 0x4e96a8u: goto label_4e96a8;
        case 0x4e96acu: goto label_4e96ac;
        case 0x4e96b0u: goto label_4e96b0;
        case 0x4e96b4u: goto label_4e96b4;
        case 0x4e96b8u: goto label_4e96b8;
        case 0x4e96bcu: goto label_4e96bc;
        case 0x4e96c0u: goto label_4e96c0;
        case 0x4e96c4u: goto label_4e96c4;
        case 0x4e96c8u: goto label_4e96c8;
        case 0x4e96ccu: goto label_4e96cc;
        case 0x4e96d0u: goto label_4e96d0;
        case 0x4e96d4u: goto label_4e96d4;
        case 0x4e96d8u: goto label_4e96d8;
        case 0x4e96dcu: goto label_4e96dc;
        case 0x4e96e0u: goto label_4e96e0;
        case 0x4e96e4u: goto label_4e96e4;
        case 0x4e96e8u: goto label_4e96e8;
        case 0x4e96ecu: goto label_4e96ec;
        case 0x4e96f0u: goto label_4e96f0;
        case 0x4e96f4u: goto label_4e96f4;
        case 0x4e96f8u: goto label_4e96f8;
        case 0x4e96fcu: goto label_4e96fc;
        case 0x4e9700u: goto label_4e9700;
        case 0x4e9704u: goto label_4e9704;
        case 0x4e9708u: goto label_4e9708;
        case 0x4e970cu: goto label_4e970c;
        case 0x4e9710u: goto label_4e9710;
        case 0x4e9714u: goto label_4e9714;
        case 0x4e9718u: goto label_4e9718;
        case 0x4e971cu: goto label_4e971c;
        case 0x4e9720u: goto label_4e9720;
        case 0x4e9724u: goto label_4e9724;
        case 0x4e9728u: goto label_4e9728;
        case 0x4e972cu: goto label_4e972c;
        case 0x4e9730u: goto label_4e9730;
        case 0x4e9734u: goto label_4e9734;
        case 0x4e9738u: goto label_4e9738;
        case 0x4e973cu: goto label_4e973c;
        case 0x4e9740u: goto label_4e9740;
        case 0x4e9744u: goto label_4e9744;
        case 0x4e9748u: goto label_4e9748;
        case 0x4e974cu: goto label_4e974c;
        case 0x4e9750u: goto label_4e9750;
        case 0x4e9754u: goto label_4e9754;
        case 0x4e9758u: goto label_4e9758;
        case 0x4e975cu: goto label_4e975c;
        case 0x4e9760u: goto label_4e9760;
        case 0x4e9764u: goto label_4e9764;
        case 0x4e9768u: goto label_4e9768;
        case 0x4e976cu: goto label_4e976c;
        case 0x4e9770u: goto label_4e9770;
        case 0x4e9774u: goto label_4e9774;
        case 0x4e9778u: goto label_4e9778;
        case 0x4e977cu: goto label_4e977c;
        case 0x4e9780u: goto label_4e9780;
        case 0x4e9784u: goto label_4e9784;
        case 0x4e9788u: goto label_4e9788;
        case 0x4e978cu: goto label_4e978c;
        case 0x4e9790u: goto label_4e9790;
        case 0x4e9794u: goto label_4e9794;
        case 0x4e9798u: goto label_4e9798;
        case 0x4e979cu: goto label_4e979c;
        case 0x4e97a0u: goto label_4e97a0;
        case 0x4e97a4u: goto label_4e97a4;
        case 0x4e97a8u: goto label_4e97a8;
        case 0x4e97acu: goto label_4e97ac;
        case 0x4e97b0u: goto label_4e97b0;
        case 0x4e97b4u: goto label_4e97b4;
        case 0x4e97b8u: goto label_4e97b8;
        case 0x4e97bcu: goto label_4e97bc;
        case 0x4e97c0u: goto label_4e97c0;
        case 0x4e97c4u: goto label_4e97c4;
        case 0x4e97c8u: goto label_4e97c8;
        case 0x4e97ccu: goto label_4e97cc;
        case 0x4e97d0u: goto label_4e97d0;
        case 0x4e97d4u: goto label_4e97d4;
        case 0x4e97d8u: goto label_4e97d8;
        case 0x4e97dcu: goto label_4e97dc;
        case 0x4e97e0u: goto label_4e97e0;
        case 0x4e97e4u: goto label_4e97e4;
        case 0x4e97e8u: goto label_4e97e8;
        case 0x4e97ecu: goto label_4e97ec;
        case 0x4e97f0u: goto label_4e97f0;
        case 0x4e97f4u: goto label_4e97f4;
        case 0x4e97f8u: goto label_4e97f8;
        case 0x4e97fcu: goto label_4e97fc;
        case 0x4e9800u: goto label_4e9800;
        case 0x4e9804u: goto label_4e9804;
        case 0x4e9808u: goto label_4e9808;
        case 0x4e980cu: goto label_4e980c;
        case 0x4e9810u: goto label_4e9810;
        case 0x4e9814u: goto label_4e9814;
        case 0x4e9818u: goto label_4e9818;
        case 0x4e981cu: goto label_4e981c;
        case 0x4e9820u: goto label_4e9820;
        case 0x4e9824u: goto label_4e9824;
        case 0x4e9828u: goto label_4e9828;
        case 0x4e982cu: goto label_4e982c;
        case 0x4e9830u: goto label_4e9830;
        case 0x4e9834u: goto label_4e9834;
        case 0x4e9838u: goto label_4e9838;
        case 0x4e983cu: goto label_4e983c;
        case 0x4e9840u: goto label_4e9840;
        case 0x4e9844u: goto label_4e9844;
        case 0x4e9848u: goto label_4e9848;
        case 0x4e984cu: goto label_4e984c;
        case 0x4e9850u: goto label_4e9850;
        case 0x4e9854u: goto label_4e9854;
        case 0x4e9858u: goto label_4e9858;
        case 0x4e985cu: goto label_4e985c;
        case 0x4e9860u: goto label_4e9860;
        case 0x4e9864u: goto label_4e9864;
        case 0x4e9868u: goto label_4e9868;
        case 0x4e986cu: goto label_4e986c;
        case 0x4e9870u: goto label_4e9870;
        case 0x4e9874u: goto label_4e9874;
        case 0x4e9878u: goto label_4e9878;
        case 0x4e987cu: goto label_4e987c;
        case 0x4e9880u: goto label_4e9880;
        case 0x4e9884u: goto label_4e9884;
        case 0x4e9888u: goto label_4e9888;
        case 0x4e988cu: goto label_4e988c;
        case 0x4e9890u: goto label_4e9890;
        case 0x4e9894u: goto label_4e9894;
        case 0x4e9898u: goto label_4e9898;
        case 0x4e989cu: goto label_4e989c;
        case 0x4e98a0u: goto label_4e98a0;
        case 0x4e98a4u: goto label_4e98a4;
        case 0x4e98a8u: goto label_4e98a8;
        case 0x4e98acu: goto label_4e98ac;
        case 0x4e98b0u: goto label_4e98b0;
        case 0x4e98b4u: goto label_4e98b4;
        case 0x4e98b8u: goto label_4e98b8;
        case 0x4e98bcu: goto label_4e98bc;
        case 0x4e98c0u: goto label_4e98c0;
        case 0x4e98c4u: goto label_4e98c4;
        case 0x4e98c8u: goto label_4e98c8;
        case 0x4e98ccu: goto label_4e98cc;
        case 0x4e98d0u: goto label_4e98d0;
        case 0x4e98d4u: goto label_4e98d4;
        case 0x4e98d8u: goto label_4e98d8;
        case 0x4e98dcu: goto label_4e98dc;
        case 0x4e98e0u: goto label_4e98e0;
        case 0x4e98e4u: goto label_4e98e4;
        case 0x4e98e8u: goto label_4e98e8;
        case 0x4e98ecu: goto label_4e98ec;
        case 0x4e98f0u: goto label_4e98f0;
        case 0x4e98f4u: goto label_4e98f4;
        case 0x4e98f8u: goto label_4e98f8;
        case 0x4e98fcu: goto label_4e98fc;
        case 0x4e9900u: goto label_4e9900;
        case 0x4e9904u: goto label_4e9904;
        case 0x4e9908u: goto label_4e9908;
        case 0x4e990cu: goto label_4e990c;
        case 0x4e9910u: goto label_4e9910;
        case 0x4e9914u: goto label_4e9914;
        case 0x4e9918u: goto label_4e9918;
        case 0x4e991cu: goto label_4e991c;
        case 0x4e9920u: goto label_4e9920;
        case 0x4e9924u: goto label_4e9924;
        case 0x4e9928u: goto label_4e9928;
        case 0x4e992cu: goto label_4e992c;
        case 0x4e9930u: goto label_4e9930;
        case 0x4e9934u: goto label_4e9934;
        case 0x4e9938u: goto label_4e9938;
        case 0x4e993cu: goto label_4e993c;
        case 0x4e9940u: goto label_4e9940;
        case 0x4e9944u: goto label_4e9944;
        case 0x4e9948u: goto label_4e9948;
        case 0x4e994cu: goto label_4e994c;
        case 0x4e9950u: goto label_4e9950;
        case 0x4e9954u: goto label_4e9954;
        case 0x4e9958u: goto label_4e9958;
        case 0x4e995cu: goto label_4e995c;
        case 0x4e9960u: goto label_4e9960;
        case 0x4e9964u: goto label_4e9964;
        case 0x4e9968u: goto label_4e9968;
        case 0x4e996cu: goto label_4e996c;
        case 0x4e9970u: goto label_4e9970;
        case 0x4e9974u: goto label_4e9974;
        case 0x4e9978u: goto label_4e9978;
        case 0x4e997cu: goto label_4e997c;
        case 0x4e9980u: goto label_4e9980;
        case 0x4e9984u: goto label_4e9984;
        case 0x4e9988u: goto label_4e9988;
        case 0x4e998cu: goto label_4e998c;
        case 0x4e9990u: goto label_4e9990;
        case 0x4e9994u: goto label_4e9994;
        case 0x4e9998u: goto label_4e9998;
        case 0x4e999cu: goto label_4e999c;
        case 0x4e99a0u: goto label_4e99a0;
        case 0x4e99a4u: goto label_4e99a4;
        case 0x4e99a8u: goto label_4e99a8;
        case 0x4e99acu: goto label_4e99ac;
        case 0x4e99b0u: goto label_4e99b0;
        case 0x4e99b4u: goto label_4e99b4;
        case 0x4e99b8u: goto label_4e99b8;
        case 0x4e99bcu: goto label_4e99bc;
        case 0x4e99c0u: goto label_4e99c0;
        case 0x4e99c4u: goto label_4e99c4;
        case 0x4e99c8u: goto label_4e99c8;
        case 0x4e99ccu: goto label_4e99cc;
        case 0x4e99d0u: goto label_4e99d0;
        case 0x4e99d4u: goto label_4e99d4;
        case 0x4e99d8u: goto label_4e99d8;
        case 0x4e99dcu: goto label_4e99dc;
        case 0x4e99e0u: goto label_4e99e0;
        case 0x4e99e4u: goto label_4e99e4;
        case 0x4e99e8u: goto label_4e99e8;
        case 0x4e99ecu: goto label_4e99ec;
        case 0x4e99f0u: goto label_4e99f0;
        case 0x4e99f4u: goto label_4e99f4;
        case 0x4e99f8u: goto label_4e99f8;
        case 0x4e99fcu: goto label_4e99fc;
        case 0x4e9a00u: goto label_4e9a00;
        case 0x4e9a04u: goto label_4e9a04;
        case 0x4e9a08u: goto label_4e9a08;
        case 0x4e9a0cu: goto label_4e9a0c;
        case 0x4e9a10u: goto label_4e9a10;
        case 0x4e9a14u: goto label_4e9a14;
        case 0x4e9a18u: goto label_4e9a18;
        case 0x4e9a1cu: goto label_4e9a1c;
        case 0x4e9a20u: goto label_4e9a20;
        case 0x4e9a24u: goto label_4e9a24;
        case 0x4e9a28u: goto label_4e9a28;
        case 0x4e9a2cu: goto label_4e9a2c;
        case 0x4e9a30u: goto label_4e9a30;
        case 0x4e9a34u: goto label_4e9a34;
        case 0x4e9a38u: goto label_4e9a38;
        case 0x4e9a3cu: goto label_4e9a3c;
        case 0x4e9a40u: goto label_4e9a40;
        case 0x4e9a44u: goto label_4e9a44;
        case 0x4e9a48u: goto label_4e9a48;
        case 0x4e9a4cu: goto label_4e9a4c;
        case 0x4e9a50u: goto label_4e9a50;
        case 0x4e9a54u: goto label_4e9a54;
        case 0x4e9a58u: goto label_4e9a58;
        case 0x4e9a5cu: goto label_4e9a5c;
        case 0x4e9a60u: goto label_4e9a60;
        case 0x4e9a64u: goto label_4e9a64;
        case 0x4e9a68u: goto label_4e9a68;
        case 0x4e9a6cu: goto label_4e9a6c;
        case 0x4e9a70u: goto label_4e9a70;
        case 0x4e9a74u: goto label_4e9a74;
        case 0x4e9a78u: goto label_4e9a78;
        case 0x4e9a7cu: goto label_4e9a7c;
        case 0x4e9a80u: goto label_4e9a80;
        case 0x4e9a84u: goto label_4e9a84;
        case 0x4e9a88u: goto label_4e9a88;
        case 0x4e9a8cu: goto label_4e9a8c;
        case 0x4e9a90u: goto label_4e9a90;
        case 0x4e9a94u: goto label_4e9a94;
        case 0x4e9a98u: goto label_4e9a98;
        case 0x4e9a9cu: goto label_4e9a9c;
        case 0x4e9aa0u: goto label_4e9aa0;
        case 0x4e9aa4u: goto label_4e9aa4;
        case 0x4e9aa8u: goto label_4e9aa8;
        case 0x4e9aacu: goto label_4e9aac;
        case 0x4e9ab0u: goto label_4e9ab0;
        case 0x4e9ab4u: goto label_4e9ab4;
        case 0x4e9ab8u: goto label_4e9ab8;
        case 0x4e9abcu: goto label_4e9abc;
        case 0x4e9ac0u: goto label_4e9ac0;
        case 0x4e9ac4u: goto label_4e9ac4;
        case 0x4e9ac8u: goto label_4e9ac8;
        case 0x4e9accu: goto label_4e9acc;
        case 0x4e9ad0u: goto label_4e9ad0;
        case 0x4e9ad4u: goto label_4e9ad4;
        case 0x4e9ad8u: goto label_4e9ad8;
        case 0x4e9adcu: goto label_4e9adc;
        case 0x4e9ae0u: goto label_4e9ae0;
        case 0x4e9ae4u: goto label_4e9ae4;
        case 0x4e9ae8u: goto label_4e9ae8;
        case 0x4e9aecu: goto label_4e9aec;
        case 0x4e9af0u: goto label_4e9af0;
        case 0x4e9af4u: goto label_4e9af4;
        case 0x4e9af8u: goto label_4e9af8;
        case 0x4e9afcu: goto label_4e9afc;
        case 0x4e9b00u: goto label_4e9b00;
        case 0x4e9b04u: goto label_4e9b04;
        case 0x4e9b08u: goto label_4e9b08;
        case 0x4e9b0cu: goto label_4e9b0c;
        case 0x4e9b10u: goto label_4e9b10;
        case 0x4e9b14u: goto label_4e9b14;
        case 0x4e9b18u: goto label_4e9b18;
        case 0x4e9b1cu: goto label_4e9b1c;
        case 0x4e9b20u: goto label_4e9b20;
        case 0x4e9b24u: goto label_4e9b24;
        case 0x4e9b28u: goto label_4e9b28;
        case 0x4e9b2cu: goto label_4e9b2c;
        case 0x4e9b30u: goto label_4e9b30;
        case 0x4e9b34u: goto label_4e9b34;
        case 0x4e9b38u: goto label_4e9b38;
        case 0x4e9b3cu: goto label_4e9b3c;
        case 0x4e9b40u: goto label_4e9b40;
        case 0x4e9b44u: goto label_4e9b44;
        case 0x4e9b48u: goto label_4e9b48;
        case 0x4e9b4cu: goto label_4e9b4c;
        case 0x4e9b50u: goto label_4e9b50;
        case 0x4e9b54u: goto label_4e9b54;
        case 0x4e9b58u: goto label_4e9b58;
        case 0x4e9b5cu: goto label_4e9b5c;
        case 0x4e9b60u: goto label_4e9b60;
        case 0x4e9b64u: goto label_4e9b64;
        case 0x4e9b68u: goto label_4e9b68;
        case 0x4e9b6cu: goto label_4e9b6c;
        case 0x4e9b70u: goto label_4e9b70;
        case 0x4e9b74u: goto label_4e9b74;
        case 0x4e9b78u: goto label_4e9b78;
        case 0x4e9b7cu: goto label_4e9b7c;
        case 0x4e9b80u: goto label_4e9b80;
        case 0x4e9b84u: goto label_4e9b84;
        case 0x4e9b88u: goto label_4e9b88;
        case 0x4e9b8cu: goto label_4e9b8c;
        case 0x4e9b90u: goto label_4e9b90;
        case 0x4e9b94u: goto label_4e9b94;
        case 0x4e9b98u: goto label_4e9b98;
        case 0x4e9b9cu: goto label_4e9b9c;
        case 0x4e9ba0u: goto label_4e9ba0;
        case 0x4e9ba4u: goto label_4e9ba4;
        case 0x4e9ba8u: goto label_4e9ba8;
        case 0x4e9bacu: goto label_4e9bac;
        case 0x4e9bb0u: goto label_4e9bb0;
        case 0x4e9bb4u: goto label_4e9bb4;
        case 0x4e9bb8u: goto label_4e9bb8;
        case 0x4e9bbcu: goto label_4e9bbc;
        case 0x4e9bc0u: goto label_4e9bc0;
        case 0x4e9bc4u: goto label_4e9bc4;
        case 0x4e9bc8u: goto label_4e9bc8;
        case 0x4e9bccu: goto label_4e9bcc;
        case 0x4e9bd0u: goto label_4e9bd0;
        case 0x4e9bd4u: goto label_4e9bd4;
        case 0x4e9bd8u: goto label_4e9bd8;
        case 0x4e9bdcu: goto label_4e9bdc;
        case 0x4e9be0u: goto label_4e9be0;
        case 0x4e9be4u: goto label_4e9be4;
        case 0x4e9be8u: goto label_4e9be8;
        case 0x4e9becu: goto label_4e9bec;
        case 0x4e9bf0u: goto label_4e9bf0;
        case 0x4e9bf4u: goto label_4e9bf4;
        case 0x4e9bf8u: goto label_4e9bf8;
        case 0x4e9bfcu: goto label_4e9bfc;
        case 0x4e9c00u: goto label_4e9c00;
        case 0x4e9c04u: goto label_4e9c04;
        case 0x4e9c08u: goto label_4e9c08;
        case 0x4e9c0cu: goto label_4e9c0c;
        case 0x4e9c10u: goto label_4e9c10;
        case 0x4e9c14u: goto label_4e9c14;
        case 0x4e9c18u: goto label_4e9c18;
        case 0x4e9c1cu: goto label_4e9c1c;
        case 0x4e9c20u: goto label_4e9c20;
        case 0x4e9c24u: goto label_4e9c24;
        case 0x4e9c28u: goto label_4e9c28;
        case 0x4e9c2cu: goto label_4e9c2c;
        case 0x4e9c30u: goto label_4e9c30;
        case 0x4e9c34u: goto label_4e9c34;
        case 0x4e9c38u: goto label_4e9c38;
        case 0x4e9c3cu: goto label_4e9c3c;
        case 0x4e9c40u: goto label_4e9c40;
        case 0x4e9c44u: goto label_4e9c44;
        case 0x4e9c48u: goto label_4e9c48;
        case 0x4e9c4cu: goto label_4e9c4c;
        case 0x4e9c50u: goto label_4e9c50;
        case 0x4e9c54u: goto label_4e9c54;
        case 0x4e9c58u: goto label_4e9c58;
        case 0x4e9c5cu: goto label_4e9c5c;
        case 0x4e9c60u: goto label_4e9c60;
        case 0x4e9c64u: goto label_4e9c64;
        case 0x4e9c68u: goto label_4e9c68;
        case 0x4e9c6cu: goto label_4e9c6c;
        case 0x4e9c70u: goto label_4e9c70;
        case 0x4e9c74u: goto label_4e9c74;
        case 0x4e9c78u: goto label_4e9c78;
        case 0x4e9c7cu: goto label_4e9c7c;
        case 0x4e9c80u: goto label_4e9c80;
        case 0x4e9c84u: goto label_4e9c84;
        case 0x4e9c88u: goto label_4e9c88;
        case 0x4e9c8cu: goto label_4e9c8c;
        case 0x4e9c90u: goto label_4e9c90;
        case 0x4e9c94u: goto label_4e9c94;
        case 0x4e9c98u: goto label_4e9c98;
        case 0x4e9c9cu: goto label_4e9c9c;
        case 0x4e9ca0u: goto label_4e9ca0;
        case 0x4e9ca4u: goto label_4e9ca4;
        case 0x4e9ca8u: goto label_4e9ca8;
        case 0x4e9cacu: goto label_4e9cac;
        case 0x4e9cb0u: goto label_4e9cb0;
        case 0x4e9cb4u: goto label_4e9cb4;
        case 0x4e9cb8u: goto label_4e9cb8;
        case 0x4e9cbcu: goto label_4e9cbc;
        case 0x4e9cc0u: goto label_4e9cc0;
        case 0x4e9cc4u: goto label_4e9cc4;
        case 0x4e9cc8u: goto label_4e9cc8;
        case 0x4e9cccu: goto label_4e9ccc;
        case 0x4e9cd0u: goto label_4e9cd0;
        case 0x4e9cd4u: goto label_4e9cd4;
        case 0x4e9cd8u: goto label_4e9cd8;
        case 0x4e9cdcu: goto label_4e9cdc;
        case 0x4e9ce0u: goto label_4e9ce0;
        case 0x4e9ce4u: goto label_4e9ce4;
        case 0x4e9ce8u: goto label_4e9ce8;
        case 0x4e9cecu: goto label_4e9cec;
        case 0x4e9cf0u: goto label_4e9cf0;
        case 0x4e9cf4u: goto label_4e9cf4;
        case 0x4e9cf8u: goto label_4e9cf8;
        case 0x4e9cfcu: goto label_4e9cfc;
        case 0x4e9d00u: goto label_4e9d00;
        case 0x4e9d04u: goto label_4e9d04;
        case 0x4e9d08u: goto label_4e9d08;
        case 0x4e9d0cu: goto label_4e9d0c;
        case 0x4e9d10u: goto label_4e9d10;
        case 0x4e9d14u: goto label_4e9d14;
        case 0x4e9d18u: goto label_4e9d18;
        case 0x4e9d1cu: goto label_4e9d1c;
        case 0x4e9d20u: goto label_4e9d20;
        case 0x4e9d24u: goto label_4e9d24;
        case 0x4e9d28u: goto label_4e9d28;
        case 0x4e9d2cu: goto label_4e9d2c;
        case 0x4e9d30u: goto label_4e9d30;
        case 0x4e9d34u: goto label_4e9d34;
        case 0x4e9d38u: goto label_4e9d38;
        case 0x4e9d3cu: goto label_4e9d3c;
        case 0x4e9d40u: goto label_4e9d40;
        case 0x4e9d44u: goto label_4e9d44;
        case 0x4e9d48u: goto label_4e9d48;
        case 0x4e9d4cu: goto label_4e9d4c;
        case 0x4e9d50u: goto label_4e9d50;
        case 0x4e9d54u: goto label_4e9d54;
        case 0x4e9d58u: goto label_4e9d58;
        case 0x4e9d5cu: goto label_4e9d5c;
        case 0x4e9d60u: goto label_4e9d60;
        case 0x4e9d64u: goto label_4e9d64;
        case 0x4e9d68u: goto label_4e9d68;
        case 0x4e9d6cu: goto label_4e9d6c;
        case 0x4e9d70u: goto label_4e9d70;
        case 0x4e9d74u: goto label_4e9d74;
        case 0x4e9d78u: goto label_4e9d78;
        case 0x4e9d7cu: goto label_4e9d7c;
        case 0x4e9d80u: goto label_4e9d80;
        case 0x4e9d84u: goto label_4e9d84;
        case 0x4e9d88u: goto label_4e9d88;
        case 0x4e9d8cu: goto label_4e9d8c;
        case 0x4e9d90u: goto label_4e9d90;
        case 0x4e9d94u: goto label_4e9d94;
        case 0x4e9d98u: goto label_4e9d98;
        case 0x4e9d9cu: goto label_4e9d9c;
        case 0x4e9da0u: goto label_4e9da0;
        case 0x4e9da4u: goto label_4e9da4;
        case 0x4e9da8u: goto label_4e9da8;
        case 0x4e9dacu: goto label_4e9dac;
        case 0x4e9db0u: goto label_4e9db0;
        case 0x4e9db4u: goto label_4e9db4;
        case 0x4e9db8u: goto label_4e9db8;
        case 0x4e9dbcu: goto label_4e9dbc;
        case 0x4e9dc0u: goto label_4e9dc0;
        case 0x4e9dc4u: goto label_4e9dc4;
        case 0x4e9dc8u: goto label_4e9dc8;
        case 0x4e9dccu: goto label_4e9dcc;
        case 0x4e9dd0u: goto label_4e9dd0;
        case 0x4e9dd4u: goto label_4e9dd4;
        case 0x4e9dd8u: goto label_4e9dd8;
        case 0x4e9ddcu: goto label_4e9ddc;
        case 0x4e9de0u: goto label_4e9de0;
        case 0x4e9de4u: goto label_4e9de4;
        case 0x4e9de8u: goto label_4e9de8;
        case 0x4e9decu: goto label_4e9dec;
        case 0x4e9df0u: goto label_4e9df0;
        case 0x4e9df4u: goto label_4e9df4;
        case 0x4e9df8u: goto label_4e9df8;
        case 0x4e9dfcu: goto label_4e9dfc;
        case 0x4e9e00u: goto label_4e9e00;
        case 0x4e9e04u: goto label_4e9e04;
        case 0x4e9e08u: goto label_4e9e08;
        case 0x4e9e0cu: goto label_4e9e0c;
        case 0x4e9e10u: goto label_4e9e10;
        case 0x4e9e14u: goto label_4e9e14;
        case 0x4e9e18u: goto label_4e9e18;
        case 0x4e9e1cu: goto label_4e9e1c;
        case 0x4e9e20u: goto label_4e9e20;
        case 0x4e9e24u: goto label_4e9e24;
        case 0x4e9e28u: goto label_4e9e28;
        case 0x4e9e2cu: goto label_4e9e2c;
        case 0x4e9e30u: goto label_4e9e30;
        case 0x4e9e34u: goto label_4e9e34;
        case 0x4e9e38u: goto label_4e9e38;
        case 0x4e9e3cu: goto label_4e9e3c;
        case 0x4e9e40u: goto label_4e9e40;
        case 0x4e9e44u: goto label_4e9e44;
        case 0x4e9e48u: goto label_4e9e48;
        case 0x4e9e4cu: goto label_4e9e4c;
        case 0x4e9e50u: goto label_4e9e50;
        case 0x4e9e54u: goto label_4e9e54;
        case 0x4e9e58u: goto label_4e9e58;
        case 0x4e9e5cu: goto label_4e9e5c;
        case 0x4e9e60u: goto label_4e9e60;
        case 0x4e9e64u: goto label_4e9e64;
        case 0x4e9e68u: goto label_4e9e68;
        case 0x4e9e6cu: goto label_4e9e6c;
        case 0x4e9e70u: goto label_4e9e70;
        case 0x4e9e74u: goto label_4e9e74;
        case 0x4e9e78u: goto label_4e9e78;
        case 0x4e9e7cu: goto label_4e9e7c;
        case 0x4e9e80u: goto label_4e9e80;
        case 0x4e9e84u: goto label_4e9e84;
        case 0x4e9e88u: goto label_4e9e88;
        case 0x4e9e8cu: goto label_4e9e8c;
        case 0x4e9e90u: goto label_4e9e90;
        case 0x4e9e94u: goto label_4e9e94;
        case 0x4e9e98u: goto label_4e9e98;
        case 0x4e9e9cu: goto label_4e9e9c;
        case 0x4e9ea0u: goto label_4e9ea0;
        case 0x4e9ea4u: goto label_4e9ea4;
        case 0x4e9ea8u: goto label_4e9ea8;
        case 0x4e9eacu: goto label_4e9eac;
        case 0x4e9eb0u: goto label_4e9eb0;
        case 0x4e9eb4u: goto label_4e9eb4;
        case 0x4e9eb8u: goto label_4e9eb8;
        case 0x4e9ebcu: goto label_4e9ebc;
        case 0x4e9ec0u: goto label_4e9ec0;
        case 0x4e9ec4u: goto label_4e9ec4;
        case 0x4e9ec8u: goto label_4e9ec8;
        case 0x4e9eccu: goto label_4e9ecc;
        case 0x4e9ed0u: goto label_4e9ed0;
        case 0x4e9ed4u: goto label_4e9ed4;
        case 0x4e9ed8u: goto label_4e9ed8;
        case 0x4e9edcu: goto label_4e9edc;
        case 0x4e9ee0u: goto label_4e9ee0;
        case 0x4e9ee4u: goto label_4e9ee4;
        case 0x4e9ee8u: goto label_4e9ee8;
        case 0x4e9eecu: goto label_4e9eec;
        case 0x4e9ef0u: goto label_4e9ef0;
        case 0x4e9ef4u: goto label_4e9ef4;
        case 0x4e9ef8u: goto label_4e9ef8;
        case 0x4e9efcu: goto label_4e9efc;
        case 0x4e9f00u: goto label_4e9f00;
        case 0x4e9f04u: goto label_4e9f04;
        case 0x4e9f08u: goto label_4e9f08;
        case 0x4e9f0cu: goto label_4e9f0c;
        case 0x4e9f10u: goto label_4e9f10;
        case 0x4e9f14u: goto label_4e9f14;
        case 0x4e9f18u: goto label_4e9f18;
        case 0x4e9f1cu: goto label_4e9f1c;
        case 0x4e9f20u: goto label_4e9f20;
        case 0x4e9f24u: goto label_4e9f24;
        case 0x4e9f28u: goto label_4e9f28;
        case 0x4e9f2cu: goto label_4e9f2c;
        case 0x4e9f30u: goto label_4e9f30;
        case 0x4e9f34u: goto label_4e9f34;
        case 0x4e9f38u: goto label_4e9f38;
        case 0x4e9f3cu: goto label_4e9f3c;
        case 0x4e9f40u: goto label_4e9f40;
        case 0x4e9f44u: goto label_4e9f44;
        case 0x4e9f48u: goto label_4e9f48;
        case 0x4e9f4cu: goto label_4e9f4c;
        case 0x4e9f50u: goto label_4e9f50;
        case 0x4e9f54u: goto label_4e9f54;
        case 0x4e9f58u: goto label_4e9f58;
        case 0x4e9f5cu: goto label_4e9f5c;
        case 0x4e9f60u: goto label_4e9f60;
        case 0x4e9f64u: goto label_4e9f64;
        case 0x4e9f68u: goto label_4e9f68;
        case 0x4e9f6cu: goto label_4e9f6c;
        case 0x4e9f70u: goto label_4e9f70;
        case 0x4e9f74u: goto label_4e9f74;
        case 0x4e9f78u: goto label_4e9f78;
        case 0x4e9f7cu: goto label_4e9f7c;
        case 0x4e9f80u: goto label_4e9f80;
        case 0x4e9f84u: goto label_4e9f84;
        case 0x4e9f88u: goto label_4e9f88;
        case 0x4e9f8cu: goto label_4e9f8c;
        case 0x4e9f90u: goto label_4e9f90;
        case 0x4e9f94u: goto label_4e9f94;
        case 0x4e9f98u: goto label_4e9f98;
        case 0x4e9f9cu: goto label_4e9f9c;
        case 0x4e9fa0u: goto label_4e9fa0;
        case 0x4e9fa4u: goto label_4e9fa4;
        case 0x4e9fa8u: goto label_4e9fa8;
        case 0x4e9facu: goto label_4e9fac;
        case 0x4e9fb0u: goto label_4e9fb0;
        case 0x4e9fb4u: goto label_4e9fb4;
        case 0x4e9fb8u: goto label_4e9fb8;
        case 0x4e9fbcu: goto label_4e9fbc;
        case 0x4e9fc0u: goto label_4e9fc0;
        case 0x4e9fc4u: goto label_4e9fc4;
        case 0x4e9fc8u: goto label_4e9fc8;
        case 0x4e9fccu: goto label_4e9fcc;
        case 0x4e9fd0u: goto label_4e9fd0;
        case 0x4e9fd4u: goto label_4e9fd4;
        case 0x4e9fd8u: goto label_4e9fd8;
        case 0x4e9fdcu: goto label_4e9fdc;
        case 0x4e9fe0u: goto label_4e9fe0;
        case 0x4e9fe4u: goto label_4e9fe4;
        case 0x4e9fe8u: goto label_4e9fe8;
        case 0x4e9fecu: goto label_4e9fec;
        case 0x4e9ff0u: goto label_4e9ff0;
        case 0x4e9ff4u: goto label_4e9ff4;
        case 0x4e9ff8u: goto label_4e9ff8;
        case 0x4e9ffcu: goto label_4e9ffc;
        case 0x4ea000u: goto label_4ea000;
        case 0x4ea004u: goto label_4ea004;
        case 0x4ea008u: goto label_4ea008;
        case 0x4ea00cu: goto label_4ea00c;
        case 0x4ea010u: goto label_4ea010;
        case 0x4ea014u: goto label_4ea014;
        case 0x4ea018u: goto label_4ea018;
        case 0x4ea01cu: goto label_4ea01c;
        case 0x4ea020u: goto label_4ea020;
        case 0x4ea024u: goto label_4ea024;
        case 0x4ea028u: goto label_4ea028;
        case 0x4ea02cu: goto label_4ea02c;
        case 0x4ea030u: goto label_4ea030;
        case 0x4ea034u: goto label_4ea034;
        case 0x4ea038u: goto label_4ea038;
        case 0x4ea03cu: goto label_4ea03c;
        case 0x4ea040u: goto label_4ea040;
        case 0x4ea044u: goto label_4ea044;
        case 0x4ea048u: goto label_4ea048;
        case 0x4ea04cu: goto label_4ea04c;
        case 0x4ea050u: goto label_4ea050;
        case 0x4ea054u: goto label_4ea054;
        case 0x4ea058u: goto label_4ea058;
        case 0x4ea05cu: goto label_4ea05c;
        case 0x4ea060u: goto label_4ea060;
        case 0x4ea064u: goto label_4ea064;
        case 0x4ea068u: goto label_4ea068;
        case 0x4ea06cu: goto label_4ea06c;
        case 0x4ea070u: goto label_4ea070;
        case 0x4ea074u: goto label_4ea074;
        case 0x4ea078u: goto label_4ea078;
        case 0x4ea07cu: goto label_4ea07c;
        case 0x4ea080u: goto label_4ea080;
        case 0x4ea084u: goto label_4ea084;
        case 0x4ea088u: goto label_4ea088;
        case 0x4ea08cu: goto label_4ea08c;
        case 0x4ea090u: goto label_4ea090;
        case 0x4ea094u: goto label_4ea094;
        case 0x4ea098u: goto label_4ea098;
        case 0x4ea09cu: goto label_4ea09c;
        case 0x4ea0a0u: goto label_4ea0a0;
        case 0x4ea0a4u: goto label_4ea0a4;
        case 0x4ea0a8u: goto label_4ea0a8;
        case 0x4ea0acu: goto label_4ea0ac;
        case 0x4ea0b0u: goto label_4ea0b0;
        case 0x4ea0b4u: goto label_4ea0b4;
        case 0x4ea0b8u: goto label_4ea0b8;
        case 0x4ea0bcu: goto label_4ea0bc;
        case 0x4ea0c0u: goto label_4ea0c0;
        case 0x4ea0c4u: goto label_4ea0c4;
        case 0x4ea0c8u: goto label_4ea0c8;
        case 0x4ea0ccu: goto label_4ea0cc;
        case 0x4ea0d0u: goto label_4ea0d0;
        case 0x4ea0d4u: goto label_4ea0d4;
        case 0x4ea0d8u: goto label_4ea0d8;
        case 0x4ea0dcu: goto label_4ea0dc;
        case 0x4ea0e0u: goto label_4ea0e0;
        case 0x4ea0e4u: goto label_4ea0e4;
        case 0x4ea0e8u: goto label_4ea0e8;
        case 0x4ea0ecu: goto label_4ea0ec;
        case 0x4ea0f0u: goto label_4ea0f0;
        case 0x4ea0f4u: goto label_4ea0f4;
        case 0x4ea0f8u: goto label_4ea0f8;
        case 0x4ea0fcu: goto label_4ea0fc;
        case 0x4ea100u: goto label_4ea100;
        case 0x4ea104u: goto label_4ea104;
        case 0x4ea108u: goto label_4ea108;
        case 0x4ea10cu: goto label_4ea10c;
        case 0x4ea110u: goto label_4ea110;
        case 0x4ea114u: goto label_4ea114;
        case 0x4ea118u: goto label_4ea118;
        case 0x4ea11cu: goto label_4ea11c;
        case 0x4ea120u: goto label_4ea120;
        case 0x4ea124u: goto label_4ea124;
        case 0x4ea128u: goto label_4ea128;
        case 0x4ea12cu: goto label_4ea12c;
        case 0x4ea130u: goto label_4ea130;
        case 0x4ea134u: goto label_4ea134;
        case 0x4ea138u: goto label_4ea138;
        case 0x4ea13cu: goto label_4ea13c;
        case 0x4ea140u: goto label_4ea140;
        case 0x4ea144u: goto label_4ea144;
        case 0x4ea148u: goto label_4ea148;
        case 0x4ea14cu: goto label_4ea14c;
        case 0x4ea150u: goto label_4ea150;
        case 0x4ea154u: goto label_4ea154;
        case 0x4ea158u: goto label_4ea158;
        case 0x4ea15cu: goto label_4ea15c;
        case 0x4ea160u: goto label_4ea160;
        case 0x4ea164u: goto label_4ea164;
        case 0x4ea168u: goto label_4ea168;
        case 0x4ea16cu: goto label_4ea16c;
        case 0x4ea170u: goto label_4ea170;
        case 0x4ea174u: goto label_4ea174;
        case 0x4ea178u: goto label_4ea178;
        case 0x4ea17cu: goto label_4ea17c;
        case 0x4ea180u: goto label_4ea180;
        case 0x4ea184u: goto label_4ea184;
        case 0x4ea188u: goto label_4ea188;
        case 0x4ea18cu: goto label_4ea18c;
        case 0x4ea190u: goto label_4ea190;
        case 0x4ea194u: goto label_4ea194;
        case 0x4ea198u: goto label_4ea198;
        case 0x4ea19cu: goto label_4ea19c;
        case 0x4ea1a0u: goto label_4ea1a0;
        case 0x4ea1a4u: goto label_4ea1a4;
        case 0x4ea1a8u: goto label_4ea1a8;
        case 0x4ea1acu: goto label_4ea1ac;
        case 0x4ea1b0u: goto label_4ea1b0;
        case 0x4ea1b4u: goto label_4ea1b4;
        case 0x4ea1b8u: goto label_4ea1b8;
        case 0x4ea1bcu: goto label_4ea1bc;
        case 0x4ea1c0u: goto label_4ea1c0;
        case 0x4ea1c4u: goto label_4ea1c4;
        case 0x4ea1c8u: goto label_4ea1c8;
        case 0x4ea1ccu: goto label_4ea1cc;
        case 0x4ea1d0u: goto label_4ea1d0;
        case 0x4ea1d4u: goto label_4ea1d4;
        case 0x4ea1d8u: goto label_4ea1d8;
        case 0x4ea1dcu: goto label_4ea1dc;
        case 0x4ea1e0u: goto label_4ea1e0;
        case 0x4ea1e4u: goto label_4ea1e4;
        case 0x4ea1e8u: goto label_4ea1e8;
        case 0x4ea1ecu: goto label_4ea1ec;
        case 0x4ea1f0u: goto label_4ea1f0;
        case 0x4ea1f4u: goto label_4ea1f4;
        case 0x4ea1f8u: goto label_4ea1f8;
        case 0x4ea1fcu: goto label_4ea1fc;
        case 0x4ea200u: goto label_4ea200;
        case 0x4ea204u: goto label_4ea204;
        case 0x4ea208u: goto label_4ea208;
        case 0x4ea20cu: goto label_4ea20c;
        case 0x4ea210u: goto label_4ea210;
        case 0x4ea214u: goto label_4ea214;
        case 0x4ea218u: goto label_4ea218;
        case 0x4ea21cu: goto label_4ea21c;
        case 0x4ea220u: goto label_4ea220;
        case 0x4ea224u: goto label_4ea224;
        case 0x4ea228u: goto label_4ea228;
        case 0x4ea22cu: goto label_4ea22c;
        case 0x4ea230u: goto label_4ea230;
        case 0x4ea234u: goto label_4ea234;
        case 0x4ea238u: goto label_4ea238;
        case 0x4ea23cu: goto label_4ea23c;
        case 0x4ea240u: goto label_4ea240;
        case 0x4ea244u: goto label_4ea244;
        case 0x4ea248u: goto label_4ea248;
        case 0x4ea24cu: goto label_4ea24c;
        case 0x4ea250u: goto label_4ea250;
        case 0x4ea254u: goto label_4ea254;
        case 0x4ea258u: goto label_4ea258;
        case 0x4ea25cu: goto label_4ea25c;
        case 0x4ea260u: goto label_4ea260;
        case 0x4ea264u: goto label_4ea264;
        case 0x4ea268u: goto label_4ea268;
        case 0x4ea26cu: goto label_4ea26c;
        case 0x4ea270u: goto label_4ea270;
        case 0x4ea274u: goto label_4ea274;
        case 0x4ea278u: goto label_4ea278;
        case 0x4ea27cu: goto label_4ea27c;
        case 0x4ea280u: goto label_4ea280;
        case 0x4ea284u: goto label_4ea284;
        case 0x4ea288u: goto label_4ea288;
        case 0x4ea28cu: goto label_4ea28c;
        case 0x4ea290u: goto label_4ea290;
        case 0x4ea294u: goto label_4ea294;
        case 0x4ea298u: goto label_4ea298;
        case 0x4ea29cu: goto label_4ea29c;
        case 0x4ea2a0u: goto label_4ea2a0;
        case 0x4ea2a4u: goto label_4ea2a4;
        case 0x4ea2a8u: goto label_4ea2a8;
        case 0x4ea2acu: goto label_4ea2ac;
        case 0x4ea2b0u: goto label_4ea2b0;
        case 0x4ea2b4u: goto label_4ea2b4;
        case 0x4ea2b8u: goto label_4ea2b8;
        case 0x4ea2bcu: goto label_4ea2bc;
        case 0x4ea2c0u: goto label_4ea2c0;
        case 0x4ea2c4u: goto label_4ea2c4;
        case 0x4ea2c8u: goto label_4ea2c8;
        case 0x4ea2ccu: goto label_4ea2cc;
        case 0x4ea2d0u: goto label_4ea2d0;
        case 0x4ea2d4u: goto label_4ea2d4;
        case 0x4ea2d8u: goto label_4ea2d8;
        case 0x4ea2dcu: goto label_4ea2dc;
        case 0x4ea2e0u: goto label_4ea2e0;
        case 0x4ea2e4u: goto label_4ea2e4;
        case 0x4ea2e8u: goto label_4ea2e8;
        case 0x4ea2ecu: goto label_4ea2ec;
        case 0x4ea2f0u: goto label_4ea2f0;
        case 0x4ea2f4u: goto label_4ea2f4;
        case 0x4ea2f8u: goto label_4ea2f8;
        case 0x4ea2fcu: goto label_4ea2fc;
        case 0x4ea300u: goto label_4ea300;
        case 0x4ea304u: goto label_4ea304;
        case 0x4ea308u: goto label_4ea308;
        case 0x4ea30cu: goto label_4ea30c;
        case 0x4ea310u: goto label_4ea310;
        case 0x4ea314u: goto label_4ea314;
        case 0x4ea318u: goto label_4ea318;
        case 0x4ea31cu: goto label_4ea31c;
        case 0x4ea320u: goto label_4ea320;
        case 0x4ea324u: goto label_4ea324;
        case 0x4ea328u: goto label_4ea328;
        case 0x4ea32cu: goto label_4ea32c;
        case 0x4ea330u: goto label_4ea330;
        case 0x4ea334u: goto label_4ea334;
        case 0x4ea338u: goto label_4ea338;
        case 0x4ea33cu: goto label_4ea33c;
        case 0x4ea340u: goto label_4ea340;
        case 0x4ea344u: goto label_4ea344;
        case 0x4ea348u: goto label_4ea348;
        case 0x4ea34cu: goto label_4ea34c;
        case 0x4ea350u: goto label_4ea350;
        case 0x4ea354u: goto label_4ea354;
        case 0x4ea358u: goto label_4ea358;
        case 0x4ea35cu: goto label_4ea35c;
        case 0x4ea360u: goto label_4ea360;
        case 0x4ea364u: goto label_4ea364;
        case 0x4ea368u: goto label_4ea368;
        case 0x4ea36cu: goto label_4ea36c;
        case 0x4ea370u: goto label_4ea370;
        case 0x4ea374u: goto label_4ea374;
        case 0x4ea378u: goto label_4ea378;
        case 0x4ea37cu: goto label_4ea37c;
        case 0x4ea380u: goto label_4ea380;
        case 0x4ea384u: goto label_4ea384;
        case 0x4ea388u: goto label_4ea388;
        case 0x4ea38cu: goto label_4ea38c;
        case 0x4ea390u: goto label_4ea390;
        case 0x4ea394u: goto label_4ea394;
        case 0x4ea398u: goto label_4ea398;
        case 0x4ea39cu: goto label_4ea39c;
        case 0x4ea3a0u: goto label_4ea3a0;
        case 0x4ea3a4u: goto label_4ea3a4;
        case 0x4ea3a8u: goto label_4ea3a8;
        case 0x4ea3acu: goto label_4ea3ac;
        case 0x4ea3b0u: goto label_4ea3b0;
        case 0x4ea3b4u: goto label_4ea3b4;
        case 0x4ea3b8u: goto label_4ea3b8;
        case 0x4ea3bcu: goto label_4ea3bc;
        case 0x4ea3c0u: goto label_4ea3c0;
        case 0x4ea3c4u: goto label_4ea3c4;
        case 0x4ea3c8u: goto label_4ea3c8;
        case 0x4ea3ccu: goto label_4ea3cc;
        case 0x4ea3d0u: goto label_4ea3d0;
        case 0x4ea3d4u: goto label_4ea3d4;
        case 0x4ea3d8u: goto label_4ea3d8;
        case 0x4ea3dcu: goto label_4ea3dc;
        case 0x4ea3e0u: goto label_4ea3e0;
        case 0x4ea3e4u: goto label_4ea3e4;
        case 0x4ea3e8u: goto label_4ea3e8;
        case 0x4ea3ecu: goto label_4ea3ec;
        case 0x4ea3f0u: goto label_4ea3f0;
        case 0x4ea3f4u: goto label_4ea3f4;
        case 0x4ea3f8u: goto label_4ea3f8;
        case 0x4ea3fcu: goto label_4ea3fc;
        case 0x4ea400u: goto label_4ea400;
        case 0x4ea404u: goto label_4ea404;
        case 0x4ea408u: goto label_4ea408;
        case 0x4ea40cu: goto label_4ea40c;
        case 0x4ea410u: goto label_4ea410;
        case 0x4ea414u: goto label_4ea414;
        case 0x4ea418u: goto label_4ea418;
        case 0x4ea41cu: goto label_4ea41c;
        case 0x4ea420u: goto label_4ea420;
        case 0x4ea424u: goto label_4ea424;
        case 0x4ea428u: goto label_4ea428;
        case 0x4ea42cu: goto label_4ea42c;
        case 0x4ea430u: goto label_4ea430;
        case 0x4ea434u: goto label_4ea434;
        case 0x4ea438u: goto label_4ea438;
        case 0x4ea43cu: goto label_4ea43c;
        case 0x4ea440u: goto label_4ea440;
        case 0x4ea444u: goto label_4ea444;
        case 0x4ea448u: goto label_4ea448;
        case 0x4ea44cu: goto label_4ea44c;
        case 0x4ea450u: goto label_4ea450;
        case 0x4ea454u: goto label_4ea454;
        case 0x4ea458u: goto label_4ea458;
        case 0x4ea45cu: goto label_4ea45c;
        case 0x4ea460u: goto label_4ea460;
        case 0x4ea464u: goto label_4ea464;
        case 0x4ea468u: goto label_4ea468;
        case 0x4ea46cu: goto label_4ea46c;
        case 0x4ea470u: goto label_4ea470;
        case 0x4ea474u: goto label_4ea474;
        case 0x4ea478u: goto label_4ea478;
        case 0x4ea47cu: goto label_4ea47c;
        case 0x4ea480u: goto label_4ea480;
        case 0x4ea484u: goto label_4ea484;
        case 0x4ea488u: goto label_4ea488;
        case 0x4ea48cu: goto label_4ea48c;
        case 0x4ea490u: goto label_4ea490;
        case 0x4ea494u: goto label_4ea494;
        case 0x4ea498u: goto label_4ea498;
        case 0x4ea49cu: goto label_4ea49c;
        case 0x4ea4a0u: goto label_4ea4a0;
        case 0x4ea4a4u: goto label_4ea4a4;
        case 0x4ea4a8u: goto label_4ea4a8;
        case 0x4ea4acu: goto label_4ea4ac;
        case 0x4ea4b0u: goto label_4ea4b0;
        case 0x4ea4b4u: goto label_4ea4b4;
        case 0x4ea4b8u: goto label_4ea4b8;
        case 0x4ea4bcu: goto label_4ea4bc;
        case 0x4ea4c0u: goto label_4ea4c0;
        case 0x4ea4c4u: goto label_4ea4c4;
        case 0x4ea4c8u: goto label_4ea4c8;
        case 0x4ea4ccu: goto label_4ea4cc;
        case 0x4ea4d0u: goto label_4ea4d0;
        case 0x4ea4d4u: goto label_4ea4d4;
        case 0x4ea4d8u: goto label_4ea4d8;
        case 0x4ea4dcu: goto label_4ea4dc;
        case 0x4ea4e0u: goto label_4ea4e0;
        case 0x4ea4e4u: goto label_4ea4e4;
        case 0x4ea4e8u: goto label_4ea4e8;
        case 0x4ea4ecu: goto label_4ea4ec;
        case 0x4ea4f0u: goto label_4ea4f0;
        case 0x4ea4f4u: goto label_4ea4f4;
        case 0x4ea4f8u: goto label_4ea4f8;
        case 0x4ea4fcu: goto label_4ea4fc;
        case 0x4ea500u: goto label_4ea500;
        case 0x4ea504u: goto label_4ea504;
        case 0x4ea508u: goto label_4ea508;
        case 0x4ea50cu: goto label_4ea50c;
        case 0x4ea510u: goto label_4ea510;
        case 0x4ea514u: goto label_4ea514;
        case 0x4ea518u: goto label_4ea518;
        case 0x4ea51cu: goto label_4ea51c;
        case 0x4ea520u: goto label_4ea520;
        case 0x4ea524u: goto label_4ea524;
        case 0x4ea528u: goto label_4ea528;
        case 0x4ea52cu: goto label_4ea52c;
        case 0x4ea530u: goto label_4ea530;
        case 0x4ea534u: goto label_4ea534;
        case 0x4ea538u: goto label_4ea538;
        case 0x4ea53cu: goto label_4ea53c;
        case 0x4ea540u: goto label_4ea540;
        case 0x4ea544u: goto label_4ea544;
        case 0x4ea548u: goto label_4ea548;
        case 0x4ea54cu: goto label_4ea54c;
        case 0x4ea550u: goto label_4ea550;
        case 0x4ea554u: goto label_4ea554;
        case 0x4ea558u: goto label_4ea558;
        case 0x4ea55cu: goto label_4ea55c;
        default: break;
    }

    ctx->pc = 0x4e9480u;

label_4e9480:
    // 0x4e9480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e9484:
    // 0x4e9484: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4e9484u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4e9488:
    // 0x4e9488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e948c:
    // 0x4e948c: 0x24e7976c  addiu       $a3, $a3, -0x6894
    ctx->pc = 0x4e948cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940524));
label_4e9490:
    // 0x4e9490: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e9490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e9494:
    // 0x4e9494: 0x8c86012c  lw          $a2, 0x12C($a0)
    ctx->pc = 0x4e9494u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_4e9498:
    // 0x4e9498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e949c:
    // 0x4e949c: 0x8083019a  lb          $v1, 0x19A($a0)
    ctx->pc = 0x4e949cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 410)));
label_4e94a0:
    // 0x4e94a0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x4e94a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4e94a4:
    // 0x4e94a4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e94a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4e94a8:
    // 0x4e94a8: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x4e94a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
label_4e94ac:
    // 0x4e94ac: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4e94acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4e94b0:
    // 0x4e94b0: 0x34840030  ori         $a0, $a0, 0x30
    ctx->pc = 0x4e94b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)48);
label_4e94b4:
    // 0x4e94b4: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x4e94b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4e94b8:
    // 0x4e94b8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e94bc:
    // 0x4e94bc: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4e94bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4e94c0:
    // 0x4e94c0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4e94c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e94c4:
    // 0x4e94c4: 0x508000e4  beql        $a0, $zero, . + 4 + (0xE4 << 2)
label_4e94c8:
    if (ctx->pc == 0x4E94C8u) {
        ctx->pc = 0x4E94C8u;
            // 0x4e94c8: 0x3c040800  lui         $a0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
        ctx->pc = 0x4E94CCu;
        goto label_4e94cc;
    }
    ctx->pc = 0x4E94C4u;
    {
        const bool branch_taken_0x4e94c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e94c4) {
            ctx->pc = 0x4E94C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E94C4u;
            // 0x4e94c8: 0x3c040800  lui         $a0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9858u;
            goto label_4e9858;
        }
    }
    ctx->pc = 0x4E94CCu;
label_4e94cc:
    // 0x4e94cc: 0xa203019c  sb          $v1, 0x19C($s0)
    ctx->pc = 0x4e94ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 412), (uint8_t)GPR_U32(ctx, 3));
label_4e94d0:
    // 0x4e94d0: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x4e94d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
label_4e94d4:
    // 0x4e94d4: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x4e94d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_4e94d8:
    // 0x4e94d8: 0x34840020  ori         $a0, $a0, 0x20
    ctx->pc = 0x4e94d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
label_4e94dc:
    // 0x4e94dc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x4e94dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4e94e0:
    // 0x4e94e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e94e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4e94e4:
    // 0x4e94e4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4e94e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4e94e8:
    // 0x4e94e8: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x4e94e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_4e94ec:
    // 0x4e94ec: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4e94ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e94f0:
    // 0x4e94f0: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4e94f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4e94f4:
    // 0x4e94f4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4e94f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e94f8:
    // 0x4e94f8: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
label_4e94fc:
    if (ctx->pc == 0x4E94FCu) {
        ctx->pc = 0x4E94FCu;
            // 0x4e94fc: 0x8205019a  lb          $a1, 0x19A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
        ctx->pc = 0x4E9500u;
        goto label_4e9500;
    }
    ctx->pc = 0x4E94F8u;
    {
        const bool branch_taken_0x4e94f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e94f8) {
            ctx->pc = 0x4E94FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E94F8u;
            // 0x4e94fc: 0x8205019a  lb          $a1, 0x19A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9538u;
            goto label_4e9538;
        }
    }
    ctx->pc = 0x4E9500u;
label_4e9500:
    // 0x4e9500: 0x8205019a  lb          $a1, 0x19A($s0)
    ctx->pc = 0x4e9500u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9504:
    // 0x4e9504: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e9504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e9508:
    // 0x4e9508: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4e9508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4e950c:
    // 0x4e950c: 0xa205019a  sb          $a1, 0x19A($s0)
    ctx->pc = 0x4e950cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 5));
label_4e9510:
    // 0x4e9510: 0x8c84cab8  lw          $a0, -0x3548($a0)
    ctx->pc = 0x4e9510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953656)));
label_4e9514:
    // 0x4e9514: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x4e9514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_4e9518:
    // 0x4e9518: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4e9518u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4e951c:
    // 0x4e951c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x4e951cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4e9520:
    // 0x4e9520: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e9524:
    if (ctx->pc == 0x4E9524u) {
        ctx->pc = 0x4E9524u;
            // 0x4e9524: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->pc = 0x4E9528u;
        goto label_4e9528;
    }
    ctx->pc = 0x4E9520u;
    {
        const bool branch_taken_0x4e9520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9520u;
            // 0x4e9524: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9520) {
            ctx->pc = 0x4E9530u;
            goto label_4e9530;
        }
    }
    ctx->pc = 0x4E9528u;
label_4e9528:
    // 0x4e9528: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e9528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e952c:
    // 0x4e952c: 0x8c85cac0  lw          $a1, -0x3540($a0)
    ctx->pc = 0x4e952cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953664)));
label_4e9530:
    // 0x4e9530: 0x1000000d  b           . + 4 + (0xD << 2)
label_4e9534:
    if (ctx->pc == 0x4E9534u) {
        ctx->pc = 0x4E9534u;
            // 0x4e9534: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4E9538u;
        goto label_4e9538;
    }
    ctx->pc = 0x4E9530u;
    {
        const bool branch_taken_0x4e9530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9530u;
            // 0x4e9534: 0xa0c50000  sb          $a1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9530) {
            ctx->pc = 0x4E9568u;
            goto label_4e9568;
        }
    }
    ctx->pc = 0x4E9538u;
label_4e9538:
    // 0x4e9538: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e9538u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e953c:
    // 0x4e953c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x4e953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4e9540:
    // 0x4e9540: 0xa205019a  sb          $a1, 0x19A($s0)
    ctx->pc = 0x4e9540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 5));
label_4e9544:
    // 0x4e9544: 0x8c84cac8  lw          $a0, -0x3538($a0)
    ctx->pc = 0x4e9544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953672)));
label_4e9548:
    // 0x4e9548: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x4e9548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_4e954c:
    // 0x4e954c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4e954cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4e9550:
    // 0x4e9550: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x4e9550u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4e9554:
    // 0x4e9554: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e9558:
    if (ctx->pc == 0x4E9558u) {
        ctx->pc = 0x4E9558u;
            // 0x4e9558: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->pc = 0x4E955Cu;
        goto label_4e955c;
    }
    ctx->pc = 0x4E9554u;
    {
        const bool branch_taken_0x4e9554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9554u;
            // 0x4e9558: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9554) {
            ctx->pc = 0x4E9564u;
            goto label_4e9564;
        }
    }
    ctx->pc = 0x4E955Cu;
label_4e955c:
    // 0x4e955c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e955cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e9560:
    // 0x4e9560: 0x8c85cad0  lw          $a1, -0x3530($a0)
    ctx->pc = 0x4e9560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953680)));
label_4e9564:
    // 0x4e9564: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x4e9564u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_4e9568:
    // 0x4e9568: 0x8204019a  lb          $a0, 0x19A($s0)
    ctx->pc = 0x4e9568u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e956c:
    // 0x4e956c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4e956cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e9570:
    // 0x4e9570: 0x54870009  bnel        $a0, $a3, . + 4 + (0x9 << 2)
label_4e9574:
    if (ctx->pc == 0x4E9574u) {
        ctx->pc = 0x4E9574u;
            // 0x4e9574: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E9578u;
        goto label_4e9578;
    }
    ctx->pc = 0x4E9570u;
    {
        const bool branch_taken_0x4e9570 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e9570) {
            ctx->pc = 0x4E9574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9570u;
            // 0x4e9574: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9598u;
            goto label_4e9598;
        }
    }
    ctx->pc = 0x4E9578u;
label_4e9578:
    // 0x4e9578: 0x32e3c  dsll32      $a1, $v1, 24
    ctx->pc = 0x4e9578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 24));
label_4e957c:
    // 0x4e957c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e957cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9580:
    // 0x4e9580: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4e9580u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4e9584:
    // 0x4e9584: 0x50a40067  beql        $a1, $a0, . + 4 + (0x67 << 2)
label_4e9588:
    if (ctx->pc == 0x4E9588u) {
        ctx->pc = 0x4E9588u;
            // 0x4e9588: 0x8207019a  lb          $a3, 0x19A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
        ctx->pc = 0x4E958Cu;
        goto label_4e958c;
    }
    ctx->pc = 0x4E9584u;
    {
        const bool branch_taken_0x4e9584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4e9584) {
            ctx->pc = 0x4E9588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9584u;
            // 0x4e9588: 0x8207019a  lb          $a3, 0x19A($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9724u;
            goto label_4e9724;
        }
    }
    ctx->pc = 0x4E958Cu;
label_4e958c:
    // 0x4e958c: 0x8204019b  lb          $a0, 0x19B($s0)
    ctx->pc = 0x4e958cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
label_4e9590:
    // 0x4e9590: 0x10000063  b           . + 4 + (0x63 << 2)
label_4e9594:
    if (ctx->pc == 0x4E9594u) {
        ctx->pc = 0x4E9594u;
            // 0x4e9594: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E9598u;
        goto label_4e9598;
    }
    ctx->pc = 0x4E9590u;
    {
        const bool branch_taken_0x4e9590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9590u;
            // 0x4e9594: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9590) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9598u;
label_4e9598:
    // 0x4e9598: 0x54850014  bnel        $a0, $a1, . + 4 + (0x14 << 2)
label_4e959c:
    if (ctx->pc == 0x4E959Cu) {
        ctx->pc = 0x4E959Cu;
            // 0x4e959c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E95A0u;
        goto label_4e95a0;
    }
    ctx->pc = 0x4E9598u;
    {
        const bool branch_taken_0x4e9598 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e9598) {
            ctx->pc = 0x4E959Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9598u;
            // 0x4e959c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E95ECu;
            goto label_4e95ec;
        }
    }
    ctx->pc = 0x4E95A0u;
label_4e95a0:
    // 0x4e95a0: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e95a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e95a4:
    // 0x4e95a4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e95a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e95a8:
    // 0x4e95a8: 0x5487000a  bnel        $a0, $a3, . + 4 + (0xA << 2)
label_4e95ac:
    if (ctx->pc == 0x4E95ACu) {
        ctx->pc = 0x4E95ACu;
            // 0x4e95ac: 0x8205019b  lb          $a1, 0x19B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
        ctx->pc = 0x4E95B0u;
        goto label_4e95b0;
    }
    ctx->pc = 0x4E95A8u;
    {
        const bool branch_taken_0x4e95a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        if (branch_taken_0x4e95a8) {
            ctx->pc = 0x4E95ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E95A8u;
            // 0x4e95ac: 0x8205019b  lb          $a1, 0x19B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E95D4u;
            goto label_4e95d4;
        }
    }
    ctx->pc = 0x4E95B0u;
label_4e95b0:
    // 0x4e95b0: 0x82050199  lb          $a1, 0x199($s0)
    ctx->pc = 0x4e95b0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e95b4:
    // 0x4e95b4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4e95b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4e95b8:
    // 0x4e95b8: 0xa205019b  sb          $a1, 0x19B($s0)
    ctx->pc = 0x4e95b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 5));
label_4e95bc:
    // 0x4e95bc: 0x82050199  lb          $a1, 0x199($s0)
    ctx->pc = 0x4e95bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e95c0:
    // 0x4e95c0: 0x14a40057  bne         $a1, $a0, . + 4 + (0x57 << 2)
label_4e95c4:
    if (ctx->pc == 0x4E95C4u) {
        ctx->pc = 0x4E95C8u;
        goto label_4e95c8;
    }
    ctx->pc = 0x4E95C0u;
    {
        const bool branch_taken_0x4e95c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e95c0) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E95C8u;
label_4e95c8:
    // 0x4e95c8: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x4e95c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4e95cc:
    // 0x4e95cc: 0x10000054  b           . + 4 + (0x54 << 2)
label_4e95d0:
    if (ctx->pc == 0x4E95D0u) {
        ctx->pc = 0x4E95D0u;
            // 0x4e95d0: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E95D4u;
        goto label_4e95d4;
    }
    ctx->pc = 0x4E95CCu;
    {
        const bool branch_taken_0x4e95cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E95D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E95CCu;
            // 0x4e95d0: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e95cc) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E95D4u;
label_4e95d4:
    // 0x4e95d4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x4e95d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4e95d8:
    // 0x4e95d8: 0x14a40051  bne         $a1, $a0, . + 4 + (0x51 << 2)
label_4e95dc:
    if (ctx->pc == 0x4E95DCu) {
        ctx->pc = 0x4E95DCu;
            // 0x4e95dc: 0xa2050199  sb          $a1, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4E95E0u;
        goto label_4e95e0;
    }
    ctx->pc = 0x4E95D8u;
    {
        const bool branch_taken_0x4e95d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x4E95DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E95D8u;
            // 0x4e95dc: 0xa2050199  sb          $a1, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e95d8) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E95E0u;
label_4e95e0:
    // 0x4e95e0: 0x24a4ffff  addiu       $a0, $a1, -0x1
    ctx->pc = 0x4e95e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_4e95e4:
    // 0x4e95e4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_4e95e8:
    if (ctx->pc == 0x4E95E8u) {
        ctx->pc = 0x4E95E8u;
            // 0x4e95e8: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E95ECu;
        goto label_4e95ec;
    }
    ctx->pc = 0x4E95E4u;
    {
        const bool branch_taken_0x4e95e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E95E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E95E4u;
            // 0x4e95e8: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e95e4) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E95ECu;
label_4e95ec:
    // 0x4e95ec: 0x54860025  bnel        $a0, $a2, . + 4 + (0x25 << 2)
label_4e95f0:
    if (ctx->pc == 0x4E95F0u) {
        ctx->pc = 0x4E95F0u;
            // 0x4e95f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4E95F4u;
        goto label_4e95f4;
    }
    ctx->pc = 0x4E95ECu;
    {
        const bool branch_taken_0x4e95ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e95ec) {
            ctx->pc = 0x4E95F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E95ECu;
            // 0x4e95f0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9684u;
            goto label_4e9684;
        }
    }
    ctx->pc = 0x4E95F4u;
label_4e95f4:
    // 0x4e95f4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e95f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e95f8:
    // 0x4e95f8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e95f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e95fc:
    // 0x4e95fc: 0x54850017  bnel        $a0, $a1, . + 4 + (0x17 << 2)
label_4e9600:
    if (ctx->pc == 0x4E9600u) {
        ctx->pc = 0x4E9600u;
            // 0x4e9600: 0x8204019b  lb          $a0, 0x19B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
        ctx->pc = 0x4E9604u;
        goto label_4e9604;
    }
    ctx->pc = 0x4E95FCu;
    {
        const bool branch_taken_0x4e95fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e95fc) {
            ctx->pc = 0x4E9600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E95FCu;
            // 0x4e9600: 0x8204019b  lb          $a0, 0x19B($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E965Cu;
            goto label_4e965c;
        }
    }
    ctx->pc = 0x4E9604u;
label_4e9604:
    // 0x4e9604: 0x82050199  lb          $a1, 0x199($s0)
    ctx->pc = 0x4e9604u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9608:
    // 0x4e9608: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4e9608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4e960c:
    // 0x4e960c: 0x50a40003  beql        $a1, $a0, . + 4 + (0x3 << 2)
label_4e9610:
    if (ctx->pc == 0x4E9610u) {
        ctx->pc = 0x4E9610u;
            // 0x4e9610: 0x82050199  lb          $a1, 0x199($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
        ctx->pc = 0x4E9614u;
        goto label_4e9614;
    }
    ctx->pc = 0x4E960Cu;
    {
        const bool branch_taken_0x4e960c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4e960c) {
            ctx->pc = 0x4E9610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E960Cu;
            // 0x4e9610: 0x82050199  lb          $a1, 0x199($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E961Cu;
            goto label_4e961c;
        }
    }
    ctx->pc = 0x4E9614u;
label_4e9614:
    // 0x4e9614: 0xa205019b  sb          $a1, 0x19B($s0)
    ctx->pc = 0x4e9614u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 5));
label_4e9618:
    // 0x4e9618: 0x82050199  lb          $a1, 0x199($s0)
    ctx->pc = 0x4e9618u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e961c:
    // 0x4e961c: 0x28a10003  slti        $at, $a1, 0x3
    ctx->pc = 0x4e961cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_4e9620:
    // 0x4e9620: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4e9624:
    if (ctx->pc == 0x4E9624u) {
        ctx->pc = 0x4E9624u;
            // 0x4e9624: 0x28a40003  slti        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->pc = 0x4E9628u;
        goto label_4e9628;
    }
    ctx->pc = 0x4E9620u;
    {
        const bool branch_taken_0x4e9620 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9620) {
            ctx->pc = 0x4E9624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9620u;
            // 0x4e9624: 0x28a40003  slti        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9630u;
            goto label_4e9630;
        }
    }
    ctx->pc = 0x4E9628u;
label_4e9628:
    // 0x4e9628: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e962c:
    if (ctx->pc == 0x4E962Cu) {
        ctx->pc = 0x4E962Cu;
            // 0x4e962c: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E9630u;
        goto label_4e9630;
    }
    ctx->pc = 0x4E9628u;
    {
        const bool branch_taken_0x4e9628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9628u;
            // 0x4e962c: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9628) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9630u;
label_4e9630:
    // 0x4e9630: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
label_4e9634:
    if (ctx->pc == 0x4E9634u) {
        ctx->pc = 0x4E9634u;
            // 0x4e9634: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4E9638u;
        goto label_4e9638;
    }
    ctx->pc = 0x4E9630u;
    {
        const bool branch_taken_0x4e9630 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9630) {
            ctx->pc = 0x4E9634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9630u;
            // 0x4e9634: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9654u;
            goto label_4e9654;
        }
    }
    ctx->pc = 0x4E9638u;
label_4e9638:
    // 0x4e9638: 0x28a10008  slti        $at, $a1, 0x8
    ctx->pc = 0x4e9638u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
label_4e963c:
    // 0x4e963c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_4e9640:
    if (ctx->pc == 0x4E9640u) {
        ctx->pc = 0x4E9644u;
        goto label_4e9644;
    }
    ctx->pc = 0x4E963Cu;
    {
        const bool branch_taken_0x4e963c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e963c) {
            ctx->pc = 0x4E9650u;
            goto label_4e9650;
        }
    }
    ctx->pc = 0x4E9644u;
label_4e9644:
    // 0x4e9644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e9644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9648:
    // 0x4e9648: 0x10000035  b           . + 4 + (0x35 << 2)
label_4e964c:
    if (ctx->pc == 0x4E964Cu) {
        ctx->pc = 0x4E964Cu;
            // 0x4e964c: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E9650u;
        goto label_4e9650;
    }
    ctx->pc = 0x4E9648u;
    {
        const bool branch_taken_0x4e9648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E964Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9648u;
            // 0x4e964c: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9648) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9650u;
label_4e9650:
    // 0x4e9650: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4e9650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e9654:
    // 0x4e9654: 0x10000032  b           . + 4 + (0x32 << 2)
label_4e9658:
    if (ctx->pc == 0x4E9658u) {
        ctx->pc = 0x4E9658u;
            // 0x4e9658: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E965Cu;
        goto label_4e965c;
    }
    ctx->pc = 0x4E9654u;
    {
        const bool branch_taken_0x4e9654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9654u;
            // 0x4e9658: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9654) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E965Cu;
label_4e965c:
    // 0x4e965c: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x4e965cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_4e9660:
    // 0x4e9660: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4e9664:
    if (ctx->pc == 0x4E9664u) {
        ctx->pc = 0x4E9664u;
            // 0x4e9664: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->pc = 0x4E9668u;
        goto label_4e9668;
    }
    ctx->pc = 0x4E9660u;
    {
        const bool branch_taken_0x4e9660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9660) {
            ctx->pc = 0x4E9664u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9660u;
            // 0x4e9664: 0x28810008  slti        $at, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9670u;
            goto label_4e9670;
        }
    }
    ctx->pc = 0x4E9668u;
label_4e9668:
    // 0x4e9668: 0x1000002d  b           . + 4 + (0x2D << 2)
label_4e966c:
    if (ctx->pc == 0x4E966Cu) {
        ctx->pc = 0x4E966Cu;
            // 0x4e966c: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E9670u;
        goto label_4e9670;
    }
    ctx->pc = 0x4E9668u;
    {
        const bool branch_taken_0x4e9668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9668u;
            // 0x4e966c: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9668) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9670u;
label_4e9670:
    // 0x4e9670: 0x5020002b  beql        $at, $zero, . + 4 + (0x2B << 2)
label_4e9674:
    if (ctx->pc == 0x4E9674u) {
        ctx->pc = 0x4E9674u;
            // 0x4e9674: 0xa2070199  sb          $a3, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x4E9678u;
        goto label_4e9678;
    }
    ctx->pc = 0x4E9670u;
    {
        const bool branch_taken_0x4e9670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9670) {
            ctx->pc = 0x4E9674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9670u;
            // 0x4e9674: 0xa2070199  sb          $a3, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9678u;
label_4e9678:
    // 0x4e9678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4e9678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e967c:
    // 0x4e967c: 0x10000028  b           . + 4 + (0x28 << 2)
label_4e9680:
    if (ctx->pc == 0x4E9680u) {
        ctx->pc = 0x4E9680u;
            // 0x4e9680: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E9684u;
        goto label_4e9684;
    }
    ctx->pc = 0x4E967Cu;
    {
        const bool branch_taken_0x4e967c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E967Cu;
            // 0x4e9680: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e967c) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9684u;
label_4e9684:
    // 0x4e9684: 0x1485001e  bne         $a0, $a1, . + 4 + (0x1E << 2)
label_4e9688:
    if (ctx->pc == 0x4E9688u) {
        ctx->pc = 0x4E968Cu;
        goto label_4e968c;
    }
    ctx->pc = 0x4E9684u;
    {
        const bool branch_taken_0x4e9684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e9684) {
            ctx->pc = 0x4E9700u;
            goto label_4e9700;
        }
    }
    ctx->pc = 0x4E968Cu;
label_4e968c:
    // 0x4e968c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e968cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e9690:
    // 0x4e9690: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e9690u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e9694:
    // 0x4e9694: 0x5486000d  bnel        $a0, $a2, . + 4 + (0xD << 2)
label_4e9698:
    if (ctx->pc == 0x4E9698u) {
        ctx->pc = 0x4E9698u;
            // 0x4e9698: 0x82040199  lb          $a0, 0x199($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
        ctx->pc = 0x4E969Cu;
        goto label_4e969c;
    }
    ctx->pc = 0x4E9694u;
    {
        const bool branch_taken_0x4e9694 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        if (branch_taken_0x4e9694) {
            ctx->pc = 0x4E9698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9694u;
            // 0x4e9698: 0x82040199  lb          $a0, 0x199($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E96CCu;
            goto label_4e96cc;
        }
    }
    ctx->pc = 0x4E969Cu;
label_4e969c:
    // 0x4e969c: 0x8204019b  lb          $a0, 0x19B($s0)
    ctx->pc = 0x4e969cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
label_4e96a0:
    // 0x4e96a0: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x4e96a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_4e96a4:
    // 0x4e96a4: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4e96a8:
    if (ctx->pc == 0x4E96A8u) {
        ctx->pc = 0x4E96A8u;
            // 0x4e96a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E96ACu;
        goto label_4e96ac;
    }
    ctx->pc = 0x4E96A4u;
    {
        const bool branch_taken_0x4e96a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e96a4) {
            ctx->pc = 0x4E96A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E96A4u;
            // 0x4e96a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E96B4u;
            goto label_4e96b4;
        }
    }
    ctx->pc = 0x4E96ACu;
label_4e96ac:
    // 0x4e96ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_4e96b0:
    if (ctx->pc == 0x4E96B0u) {
        ctx->pc = 0x4E96B0u;
            // 0x4e96b0: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E96B4u;
        goto label_4e96b4;
    }
    ctx->pc = 0x4E96ACu;
    {
        const bool branch_taken_0x4e96ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E96B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E96ACu;
            // 0x4e96b0: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e96ac) {
            ctx->pc = 0x4E96B8u;
            goto label_4e96b8;
        }
    }
    ctx->pc = 0x4E96B4u;
label_4e96b4:
    // 0x4e96b4: 0xa2040199  sb          $a0, 0x199($s0)
    ctx->pc = 0x4e96b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
label_4e96b8:
    // 0x4e96b8: 0x92040196  lbu         $a0, 0x196($s0)
    ctx->pc = 0x4e96b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4e96bc:
    // 0x4e96bc: 0x14800018  bnez        $a0, . + 4 + (0x18 << 2)
label_4e96c0:
    if (ctx->pc == 0x4E96C0u) {
        ctx->pc = 0x4E96C4u;
        goto label_4e96c4;
    }
    ctx->pc = 0x4E96BCu;
    {
        const bool branch_taken_0x4e96bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e96bc) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E96C4u;
label_4e96c4:
    // 0x4e96c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_4e96c8:
    if (ctx->pc == 0x4E96C8u) {
        ctx->pc = 0x4E96C8u;
            // 0x4e96c8: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E96CCu;
        goto label_4e96cc;
    }
    ctx->pc = 0x4E96C4u;
    {
        const bool branch_taken_0x4e96c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E96C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E96C4u;
            // 0x4e96c8: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e96c4) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E96CCu;
label_4e96cc:
    // 0x4e96cc: 0xa204019b  sb          $a0, 0x19B($s0)
    ctx->pc = 0x4e96ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 4));
label_4e96d0:
    // 0x4e96d0: 0x82040199  lb          $a0, 0x199($s0)
    ctx->pc = 0x4e96d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e96d4:
    // 0x4e96d4: 0x28810005  slti        $at, $a0, 0x5
    ctx->pc = 0x4e96d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_4e96d8:
    // 0x4e96d8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4e96dc:
    if (ctx->pc == 0x4E96DCu) {
        ctx->pc = 0x4E96DCu;
            // 0x4e96dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E96E0u;
        goto label_4e96e0;
    }
    ctx->pc = 0x4E96D8u;
    {
        const bool branch_taken_0x4e96d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e96d8) {
            ctx->pc = 0x4E96DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E96D8u;
            // 0x4e96dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E96E8u;
            goto label_4e96e8;
        }
    }
    ctx->pc = 0x4E96E0u;
label_4e96e0:
    // 0x4e96e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4e96e4:
    if (ctx->pc == 0x4E96E4u) {
        ctx->pc = 0x4E96E4u;
            // 0x4e96e4: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E96E8u;
        goto label_4e96e8;
    }
    ctx->pc = 0x4E96E0u;
    {
        const bool branch_taken_0x4e96e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E96E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E96E0u;
            // 0x4e96e4: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e96e0) {
            ctx->pc = 0x4E96ECu;
            goto label_4e96ec;
        }
    }
    ctx->pc = 0x4E96E8u;
label_4e96e8:
    // 0x4e96e8: 0xa2040199  sb          $a0, 0x199($s0)
    ctx->pc = 0x4e96e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
label_4e96ec:
    // 0x4e96ec: 0x92040196  lbu         $a0, 0x196($s0)
    ctx->pc = 0x4e96ecu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4e96f0:
    // 0x4e96f0: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_4e96f4:
    if (ctx->pc == 0x4E96F4u) {
        ctx->pc = 0x4E96F8u;
        goto label_4e96f8;
    }
    ctx->pc = 0x4E96F0u;
    {
        const bool branch_taken_0x4e96f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e96f0) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E96F8u;
label_4e96f8:
    // 0x4e96f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4e96fc:
    if (ctx->pc == 0x4E96FCu) {
        ctx->pc = 0x4E96FCu;
            // 0x4e96fc: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E9700u;
        goto label_4e9700;
    }
    ctx->pc = 0x4E96F8u;
    {
        const bool branch_taken_0x4e96f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E96FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E96F8u;
            // 0x4e96fc: 0xa2000199  sb          $zero, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e96f8) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9700u;
label_4e9700:
    // 0x4e9700: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_4e9704:
    if (ctx->pc == 0x4E9704u) {
        ctx->pc = 0x4E9708u;
        goto label_4e9708;
    }
    ctx->pc = 0x4E9700u;
    {
        const bool branch_taken_0x4e9700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9700) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9708u;
label_4e9708:
    // 0x4e9708: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e9708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e970c:
    // 0x4e970c: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e970cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e9710:
    // 0x4e9710: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
label_4e9714:
    if (ctx->pc == 0x4E9714u) {
        ctx->pc = 0x4E9718u;
        goto label_4e9718;
    }
    ctx->pc = 0x4E9710u;
    {
        const bool branch_taken_0x4e9710 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x4e9710) {
            ctx->pc = 0x4E9720u;
            goto label_4e9720;
        }
    }
    ctx->pc = 0x4E9718u;
label_4e9718:
    // 0x4e9718: 0x8204019b  lb          $a0, 0x19B($s0)
    ctx->pc = 0x4e9718u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 411)));
label_4e971c:
    // 0x4e971c: 0xa2040199  sb          $a0, 0x199($s0)
    ctx->pc = 0x4e971cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
label_4e9720:
    // 0x4e9720: 0x8207019a  lb          $a3, 0x19A($s0)
    ctx->pc = 0x4e9720u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9724:
    // 0x4e9724: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4e9724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4e9728:
    // 0x4e9728: 0x24848580  addiu       $a0, $a0, -0x7A80
    ctx->pc = 0x4e9728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935936));
label_4e972c:
    // 0x4e972c: 0x82060199  lb          $a2, 0x199($s0)
    ctx->pc = 0x4e972cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9730:
    // 0x4e9730: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4e9730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4e9734:
    // 0x4e9734: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e9734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e9738:
    // 0x4e9738: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e9738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e973c:
    // 0x4e973c: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x4e973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_4e9740:
    // 0x4e9740: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e9740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e9744:
    // 0x4e9744: 0x80840168  lb          $a0, 0x168($a0)
    ctx->pc = 0x4e9744u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 360)));
label_4e9748:
    // 0x4e9748: 0x5480002e  bnel        $a0, $zero, . + 4 + (0x2E << 2)
label_4e974c:
    if (ctx->pc == 0x4E974Cu) {
        ctx->pc = 0x4E974Cu;
            // 0x4e974c: 0x3263c  dsll32      $a0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
        ctx->pc = 0x4E9750u;
        goto label_4e9750;
    }
    ctx->pc = 0x4E9748u;
    {
        const bool branch_taken_0x4e9748 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9748) {
            ctx->pc = 0x4E974Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9748u;
            // 0x4e974c: 0x3263c  dsll32      $a0, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9804u;
            goto label_4e9804;
        }
    }
    ctx->pc = 0x4E9750u;
label_4e9750:
    // 0x4e9750: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e9750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e9754:
    // 0x4e9754: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e9754u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e9758:
    // 0x4e9758: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x4e9758u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_4e975c:
    // 0x4e975c: 0x5020001d  beql        $at, $zero, . + 4 + (0x1D << 2)
label_4e9760:
    if (ctx->pc == 0x4E9760u) {
        ctx->pc = 0x4E9760u;
            // 0x4e9760: 0x24e4ffff  addiu       $a0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->pc = 0x4E9764u;
        goto label_4e9764;
    }
    ctx->pc = 0x4E975Cu;
    {
        const bool branch_taken_0x4e975c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e975c) {
            ctx->pc = 0x4E9760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E975Cu;
            // 0x4e9760: 0x24e4ffff  addiu       $a0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E97D4u;
            goto label_4e97d4;
        }
    }
    ctx->pc = 0x4E9764u;
label_4e9764:
    // 0x4e9764: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x4e9764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4e9768:
    // 0x4e9768: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x4e9768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
label_4e976c:
    // 0x4e976c: 0xa204019a  sb          $a0, 0x19A($s0)
    ctx->pc = 0x4e976cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 4));
label_4e9770:
    // 0x4e9770: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e9770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e9774:
    // 0x4e9774: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4e9774u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4e9778:
    // 0x4e9778: 0x8c84cad8  lw          $a0, -0x3528($a0)
    ctx->pc = 0x4e9778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953688)));
label_4e977c:
    // 0x4e977c: 0x85082a  slt         $at, $a0, $a1
    ctx->pc = 0x4e977cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_4e9780:
    // 0x4e9780: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e9784:
    if (ctx->pc == 0x4E9784u) {
        ctx->pc = 0x4E9784u;
            // 0x4e9784: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->pc = 0x4E9788u;
        goto label_4e9788;
    }
    ctx->pc = 0x4E9780u;
    {
        const bool branch_taken_0x4e9780 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9780u;
            // 0x4e9784: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9780) {
            ctx->pc = 0x4E9790u;
            goto label_4e9790;
        }
    }
    ctx->pc = 0x4E9788u;
label_4e9788:
    // 0x4e9788: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e9788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e978c:
    // 0x4e978c: 0x8c85cae0  lw          $a1, -0x3520($a0)
    ctx->pc = 0x4e978cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953696)));
label_4e9790:
    // 0x4e9790: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x4e9790u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_4e9794:
    // 0x4e9794: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4e9794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e9798:
    // 0x4e9798: 0x8205019a  lb          $a1, 0x19A($s0)
    ctx->pc = 0x4e9798u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e979c:
    // 0x4e979c: 0x54a40006  bnel        $a1, $a0, . + 4 + (0x6 << 2)
label_4e97a0:
    if (ctx->pc == 0x4E97A0u) {
        ctx->pc = 0x4E97A0u;
            // 0x4e97a0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E97A4u;
        goto label_4e97a4;
    }
    ctx->pc = 0x4E979Cu;
    {
        const bool branch_taken_0x4e979c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e979c) {
            ctx->pc = 0x4E97A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E979Cu;
            // 0x4e97a0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E97B8u;
            goto label_4e97b8;
        }
    }
    ctx->pc = 0x4E97A4u;
label_4e97a4:
    // 0x4e97a4: 0x82050199  lb          $a1, 0x199($s0)
    ctx->pc = 0x4e97a4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e97a8:
    // 0x4e97a8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4e97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4e97ac:
    // 0x4e97ac: 0xa205019b  sb          $a1, 0x19B($s0)
    ctx->pc = 0x4e97acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 5));
label_4e97b0:
    // 0x4e97b0: 0x10000013  b           . + 4 + (0x13 << 2)
label_4e97b4:
    if (ctx->pc == 0x4E97B4u) {
        ctx->pc = 0x4E97B4u;
            // 0x4e97b4: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E97B8u;
        goto label_4e97b8;
    }
    ctx->pc = 0x4E97B0u;
    {
        const bool branch_taken_0x4e97b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E97B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E97B0u;
            // 0x4e97b4: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e97b0) {
            ctx->pc = 0x4E9800u;
            goto label_4e9800;
        }
    }
    ctx->pc = 0x4E97B8u;
label_4e97b8:
    // 0x4e97b8: 0x14a40011  bne         $a1, $a0, . + 4 + (0x11 << 2)
label_4e97bc:
    if (ctx->pc == 0x4E97BCu) {
        ctx->pc = 0x4E97C0u;
        goto label_4e97c0;
    }
    ctx->pc = 0x4E97B8u;
    {
        const bool branch_taken_0x4e97b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e97b8) {
            ctx->pc = 0x4E9800u;
            goto label_4e9800;
        }
    }
    ctx->pc = 0x4E97C0u;
label_4e97c0:
    // 0x4e97c0: 0x82050199  lb          $a1, 0x199($s0)
    ctx->pc = 0x4e97c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e97c4:
    // 0x4e97c4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4e97c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e97c8:
    // 0x4e97c8: 0xa205019b  sb          $a1, 0x19B($s0)
    ctx->pc = 0x4e97c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 5));
label_4e97cc:
    // 0x4e97cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_4e97d0:
    if (ctx->pc == 0x4E97D0u) {
        ctx->pc = 0x4E97D0u;
            // 0x4e97d0: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E97D4u;
        goto label_4e97d4;
    }
    ctx->pc = 0x4E97CCu;
    {
        const bool branch_taken_0x4e97cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E97D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E97CCu;
            // 0x4e97d0: 0xa2040199  sb          $a0, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e97cc) {
            ctx->pc = 0x4E9800u;
            goto label_4e9800;
        }
    }
    ctx->pc = 0x4E97D4u;
label_4e97d4:
    // 0x4e97d4: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x4e97d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
label_4e97d8:
    // 0x4e97d8: 0xa204019a  sb          $a0, 0x19A($s0)
    ctx->pc = 0x4e97d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 4));
label_4e97dc:
    // 0x4e97dc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e97dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e97e0:
    // 0x4e97e0: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4e97e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4e97e4:
    // 0x4e97e4: 0x8c84cae8  lw          $a0, -0x3518($a0)
    ctx->pc = 0x4e97e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953704)));
label_4e97e8:
    // 0x4e97e8: 0xa4082a  slt         $at, $a1, $a0
    ctx->pc = 0x4e97e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4e97ec:
    // 0x4e97ec: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e97f0:
    if (ctx->pc == 0x4E97F0u) {
        ctx->pc = 0x4E97F0u;
            // 0x4e97f0: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->pc = 0x4E97F4u;
        goto label_4e97f4;
    }
    ctx->pc = 0x4E97ECu;
    {
        const bool branch_taken_0x4e97ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E97ECu;
            // 0x4e97f0: 0x2606019a  addiu       $a2, $s0, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e97ec) {
            ctx->pc = 0x4E97FCu;
            goto label_4e97fc;
        }
    }
    ctx->pc = 0x4E97F4u;
label_4e97f4:
    // 0x4e97f4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e97f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e97f8:
    // 0x4e97f8: 0x8c85caf0  lw          $a1, -0x3510($a0)
    ctx->pc = 0x4e97f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953712)));
label_4e97fc:
    // 0x4e97fc: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x4e97fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
label_4e9800:
    // 0x4e9800: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e9800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e9804:
    // 0x4e9804: 0x8203019a  lb          $v1, 0x19A($s0)
    ctx->pc = 0x4e9804u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9808:
    // 0x4e9808: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e9808u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e980c:
    // 0x4e980c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4e980cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4e9810:
    // 0x4e9810: 0x502000ea  beql        $at, $zero, . + 4 + (0xEA << 2)
label_4e9814:
    if (ctx->pc == 0x4E9814u) {
        ctx->pc = 0x4E9814u;
            // 0x4e9814: 0x8e06012c  lw          $a2, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->pc = 0x4E9818u;
        goto label_4e9818;
    }
    ctx->pc = 0x4E9810u;
    {
        const bool branch_taken_0x4e9810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9810) {
            ctx->pc = 0x4E9814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9810u;
            // 0x4e9814: 0x8e06012c  lw          $a2, 0x12C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BBCu;
            goto label_4e9bbc;
        }
    }
    ctx->pc = 0x4E9818u;
label_4e9818:
    // 0x4e9818: 0x8205019c  lb          $a1, 0x19C($s0)
    ctx->pc = 0x4e9818u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 412)));
label_4e981c:
    // 0x4e981c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4e981cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4e9820:
    // 0x4e9820: 0x82070199  lb          $a3, 0x199($s0)
    ctx->pc = 0x4e9820u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9824:
    // 0x4e9824: 0x24848580  addiu       $a0, $a0, -0x7A80
    ctx->pc = 0x4e9824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935936));
label_4e9828:
    // 0x4e9828: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e9828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e982c:
    // 0x4e982c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e982cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9830:
    // 0x4e9830: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e9830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e9834:
    // 0x4e9834: 0xf03021  addu        $a2, $a3, $s0
    ctx->pc = 0x4e9834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_4e9838:
    // 0x4e9838: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e9838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e983c:
    // 0x4e983c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4e983cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4e9840:
    // 0x4e9840: 0x80840168  lb          $a0, 0x168($a0)
    ctx->pc = 0x4e9840u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 360)));
label_4e9844:
    // 0x4e9844: 0x148300dc  bne         $a0, $v1, . + 4 + (0xDC << 2)
label_4e9848:
    if (ctx->pc == 0x4E9848u) {
        ctx->pc = 0x4E984Cu;
        goto label_4e984c;
    }
    ctx->pc = 0x4E9844u;
    {
        const bool branch_taken_0x4e9844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e9844) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E984Cu;
label_4e984c:
    // 0x4e984c: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x4e984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4e9850:
    // 0x4e9850: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_4e9854:
    if (ctx->pc == 0x4E9854u) {
        ctx->pc = 0x4E9854u;
            // 0x4e9854: 0xa2030199  sb          $v1, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E9858u;
        goto label_4e9858;
    }
    ctx->pc = 0x4E9850u;
    {
        const bool branch_taken_0x4e9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9850u;
            // 0x4e9854: 0xa2030199  sb          $v1, 0x199($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9850) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9858u;
label_4e9858:
    // 0x4e9858: 0x34840080  ori         $a0, $a0, 0x80
    ctx->pc = 0x4e9858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
label_4e985c:
    // 0x4e985c: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4e985cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4e9860:
    // 0x4e9860: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4e9860u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e9864:
    // 0x4e9864: 0x50800069  beql        $a0, $zero, . + 4 + (0x69 << 2)
label_4e9868:
    if (ctx->pc == 0x4E9868u) {
        ctx->pc = 0x4E9868u;
            // 0x4e9868: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->pc = 0x4E986Cu;
        goto label_4e986c;
    }
    ctx->pc = 0x4E9864u;
    {
        const bool branch_taken_0x4e9864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9864) {
            ctx->pc = 0x4E9868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9864u;
            // 0x4e9868: 0x3c040400  lui         $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9A0Cu;
            goto label_4e9a0c;
        }
    }
    ctx->pc = 0x4E986Cu;
label_4e986c:
    // 0x4e986c: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e986cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e9870:
    // 0x4e9870: 0x26050199  addiu       $a1, $s0, 0x199
    ctx->pc = 0x4e9870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 409));
label_4e9874:
    // 0x4e9874: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e9874u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e9878:
    // 0x4e9878: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e9878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e987c:
    // 0x4e987c: 0x24638560  addiu       $v1, $v1, -0x7AA0
    ctx->pc = 0x4e987cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935904));
label_4e9880:
    // 0x4e9880: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e9880u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4e9884:
    // 0x4e9884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4e9884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4e9888:
    // 0x4e9888: 0x82040199  lb          $a0, 0x199($s0)
    ctx->pc = 0x4e9888u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e988c:
    // 0x4e988c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4e988cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e9890:
    // 0x4e9890: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e9890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e9894:
    // 0x4e9894: 0xa2040199  sb          $a0, 0x199($s0)
    ctx->pc = 0x4e9894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
label_4e9898:
    // 0x4e9898: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e9898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e989c:
    // 0x4e989c: 0x8c63caf8  lw          $v1, -0x3508($v1)
    ctx->pc = 0x4e989cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953720)));
label_4e98a0:
    // 0x4e98a0: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4e98a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4e98a4:
    // 0x4e98a4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e98a4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e98a8:
    // 0x4e98a8: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4e98a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4e98ac:
    // 0x4e98ac: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e98b0:
    if (ctx->pc == 0x4E98B0u) {
        ctx->pc = 0x4E98B0u;
            // 0x4e98b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x4E98B4u;
        goto label_4e98b4;
    }
    ctx->pc = 0x4E98ACu;
    {
        const bool branch_taken_0x4e98ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E98B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E98ACu;
            // 0x4e98b0: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e98ac) {
            ctx->pc = 0x4E98B8u;
            goto label_4e98b8;
        }
    }
    ctx->pc = 0x4E98B4u;
label_4e98b4:
    // 0x4e98b4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4e98b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e98b8:
    // 0x4e98b8: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x4e98b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_4e98bc:
    // 0x4e98bc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4e98bcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4e98c0:
    // 0x4e98c0: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x4e98c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e98c4:
    // 0x4e98c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e98c8:
    if (ctx->pc == 0x4E98C8u) {
        ctx->pc = 0x4E98C8u;
            // 0x4e98c8: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E98CCu;
        goto label_4e98cc;
    }
    ctx->pc = 0x4E98C4u;
    {
        const bool branch_taken_0x4e98c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E98C4u;
            // 0x4e98c8: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e98c4) {
            ctx->pc = 0x4E98D4u;
            goto label_4e98d4;
        }
    }
    ctx->pc = 0x4E98CCu;
label_4e98cc:
    // 0x4e98cc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e98d0:
    // 0x4e98d0: 0x8c63caf8  lw          $v1, -0x3508($v1)
    ctx->pc = 0x4e98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953720)));
label_4e98d4:
    // 0x4e98d4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4e98d4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4e98d8:
    // 0x4e98d8: 0x820c019a  lb          $t4, 0x19A($s0)
    ctx->pc = 0x4e98d8u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e98dc:
    // 0x4e98dc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e98dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e98e0:
    // 0x4e98e0: 0x82090199  lb          $t1, 0x199($s0)
    ctx->pc = 0x4e98e0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e98e4:
    // 0x4e98e4: 0x24638580  addiu       $v1, $v1, -0x7A80
    ctx->pc = 0x4e98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935936));
label_4e98e8:
    // 0x4e98e8: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x4e98e8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_4e98ec:
    // 0x4e98ec: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x4e98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e98f0:
    // 0x4e98f0: 0x1302821  addu        $a1, $t1, $s0
    ctx->pc = 0x4e98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_4e98f4:
    // 0x4e98f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e98f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e98f8:
    // 0x4e98f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e98f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e98fc:
    // 0x4e98fc: 0x80840168  lb          $a0, 0x168($a0)
    ctx->pc = 0x4e98fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 360)));
label_4e9900:
    // 0x4e9900: 0x14800025  bnez        $a0, . + 4 + (0x25 << 2)
label_4e9904:
    if (ctx->pc == 0x4E9904u) {
        ctx->pc = 0x4E9908u;
        goto label_4e9908;
    }
    ctx->pc = 0x4E9900u;
    {
        const bool branch_taken_0x4e9900 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9900) {
            ctx->pc = 0x4E9998u;
            goto label_4e9998;
        }
    }
    ctx->pc = 0x4E9908u;
label_4e9908:
    // 0x4e9908: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x4e9908u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
label_4e990c:
    // 0x4e990c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e990cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e9910:
    // 0x4e9910: 0x254a8560  addiu       $t2, $t2, -0x7AA0
    ctx->pc = 0x4e9910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935904));
label_4e9914:
    // 0x4e9914: 0x26080199  addiu       $t0, $s0, 0x199
    ctx->pc = 0x4e9914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 409));
label_4e9918:
    // 0x4e9918: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4e9918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4e991c:
    // 0x4e991c: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x4e991cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4e9920:
    // 0x4e9920: 0x82060199  lb          $a2, 0x199($s0)
    ctx->pc = 0x4e9920u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9924:
    // 0x4e9924: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x4e9924u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e9928:
    // 0x4e9928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4e9928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4e992c:
    // 0x4e992c: 0x24e9ffff  addiu       $t1, $a3, -0x1
    ctx->pc = 0x4e992cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4e9930:
    // 0x4e9930: 0xa2060199  sb          $a2, 0x199($s0)
    ctx->pc = 0x4e9930u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 6));
label_4e9934:
    // 0x4e9934: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x4e9934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
label_4e9938:
    // 0x4e9938: 0x8ca6cb00  lw          $a2, -0x3500($a1)
    ctx->pc = 0x4e9938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953728)));
label_4e993c:
    // 0x4e993c: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x4e993cu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_4e9940:
    // 0x4e9940: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x4e9940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4e9944:
    // 0x4e9944: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e9948:
    if (ctx->pc == 0x4E9948u) {
        ctx->pc = 0x4E994Cu;
        goto label_4e994c;
    }
    ctx->pc = 0x4E9944u;
    {
        const bool branch_taken_0x4e9944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9944) {
            ctx->pc = 0x4E9950u;
            goto label_4e9950;
        }
    }
    ctx->pc = 0x4E994Cu;
label_4e994c:
    // 0x4e994c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4e994cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4e9950:
    // 0x4e9950: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x4e9950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
label_4e9954:
    // 0x4e9954: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x4e9954u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_4e9958:
    // 0x4e9958: 0x126082b  sltu        $at, $t1, $a2
    ctx->pc = 0x4e9958u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4e995c:
    // 0x4e995c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e9960:
    if (ctx->pc == 0x4E9960u) {
        ctx->pc = 0x4E9960u;
            // 0x4e9960: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x4E9964u;
        goto label_4e9964;
    }
    ctx->pc = 0x4E995Cu;
    {
        const bool branch_taken_0x4e995c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E995Cu;
            // 0x4e9960: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e995c) {
            ctx->pc = 0x4E9968u;
            goto label_4e9968;
        }
    }
    ctx->pc = 0x4E9964u;
label_4e9964:
    // 0x4e9964: 0x8c86cb00  lw          $a2, -0x3500($a0)
    ctx->pc = 0x4e9964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953728)));
label_4e9968:
    // 0x4e9968: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x4e9968u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
label_4e996c:
    // 0x4e996c: 0x820c019a  lb          $t4, 0x19A($s0)
    ctx->pc = 0x4e996cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9970:
    // 0x4e9970: 0x82090199  lb          $t1, 0x199($s0)
    ctx->pc = 0x4e9970u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9974:
    // 0x4e9974: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x4e9974u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_4e9978:
    // 0x4e9978: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x4e9978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e997c:
    // 0x4e997c: 0x2093821  addu        $a3, $s0, $t1
    ctx->pc = 0x4e997cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_4e9980:
    // 0x4e9980: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e9980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e9984:
    // 0x4e9984: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x4e9984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4e9988:
    // 0x4e9988: 0x80c60168  lb          $a2, 0x168($a2)
    ctx->pc = 0x4e9988u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 360)));
label_4e998c:
    // 0x4e998c: 0x50c0ffe4  beql        $a2, $zero, . + 4 + (-0x1C << 2)
label_4e9990:
    if (ctx->pc == 0x4E9990u) {
        ctx->pc = 0x4E9990u;
            // 0x4e9990: 0x14b3821  addu        $a3, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->pc = 0x4E9994u;
        goto label_4e9994;
    }
    ctx->pc = 0x4E998Cu;
    {
        const bool branch_taken_0x4e998c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e998c) {
            ctx->pc = 0x4E9990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E998Cu;
            // 0x4e9990: 0x14b3821  addu        $a3, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e9920;
        }
    }
    ctx->pc = 0x4E9994u;
label_4e9994:
    // 0x4e9994: 0x0  nop
    ctx->pc = 0x4e9994u;
    // NOP
label_4e9998:
    // 0x4e9998: 0x29810004  slti        $at, $t4, 0x4
    ctx->pc = 0x4e9998u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
label_4e999c:
    // 0x4e999c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4e99a0:
    if (ctx->pc == 0x4E99A0u) {
        ctx->pc = 0x4E99A0u;
            // 0x4e99a0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E99A4u;
        goto label_4e99a4;
    }
    ctx->pc = 0x4E999Cu;
    {
        const bool branch_taken_0x4e999c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e999c) {
            ctx->pc = 0x4E99A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E999Cu;
            // 0x4e99a0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E99ACu;
            goto label_4e99ac;
        }
    }
    ctx->pc = 0x4E99A4u;
label_4e99a4:
    // 0x4e99a4: 0x10000084  b           . + 4 + (0x84 << 2)
label_4e99a8:
    if (ctx->pc == 0x4E99A8u) {
        ctx->pc = 0x4E99A8u;
            // 0x4e99a8: 0xa209019b  sb          $t1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 9));
        ctx->pc = 0x4E99ACu;
        goto label_4e99ac;
    }
    ctx->pc = 0x4E99A4u;
    {
        const bool branch_taken_0x4e99a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E99A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99A4u;
            // 0x4e99a8: 0xa209019b  sb          $t1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e99a4) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E99ACu;
label_4e99ac:
    // 0x4e99ac: 0x5583000f  bnel        $t4, $v1, . + 4 + (0xF << 2)
label_4e99b0:
    if (ctx->pc == 0x4E99B0u) {
        ctx->pc = 0x4E99B0u;
            // 0x4e99b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E99B4u;
        goto label_4e99b4;
    }
    ctx->pc = 0x4E99ACu;
    {
        const bool branch_taken_0x4e99ac = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e99ac) {
            ctx->pc = 0x4E99B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99ACu;
            // 0x4e99b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E99ECu;
            goto label_4e99ec;
        }
    }
    ctx->pc = 0x4E99B4u;
label_4e99b4:
    // 0x4e99b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e99b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e99b8:
    // 0x4e99b8: 0x5123000a  beql        $t1, $v1, . + 4 + (0xA << 2)
label_4e99bc:
    if (ctx->pc == 0x4E99BCu) {
        ctx->pc = 0x4E99BCu;
            // 0x4e99bc: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x4E99C0u;
        goto label_4e99c0;
    }
    ctx->pc = 0x4E99B8u;
    {
        const bool branch_taken_0x4e99b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e99b8) {
            ctx->pc = 0x4E99BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99B8u;
            // 0x4e99bc: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E99E4u;
            goto label_4e99e4;
        }
    }
    ctx->pc = 0x4E99C0u;
label_4e99c0:
    // 0x4e99c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e99c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e99c4:
    // 0x4e99c4: 0x51230005  beql        $t1, $v1, . + 4 + (0x5 << 2)
label_4e99c8:
    if (ctx->pc == 0x4E99C8u) {
        ctx->pc = 0x4E99C8u;
            // 0x4e99c8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E99CCu;
        goto label_4e99cc;
    }
    ctx->pc = 0x4E99C4u;
    {
        const bool branch_taken_0x4e99c4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e99c4) {
            ctx->pc = 0x4E99C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99C4u;
            // 0x4e99c8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E99DCu;
            goto label_4e99dc;
        }
    }
    ctx->pc = 0x4E99CCu;
label_4e99cc:
    // 0x4e99cc: 0x5120007a  beql        $t1, $zero, . + 4 + (0x7A << 2)
label_4e99d0:
    if (ctx->pc == 0x4E99D0u) {
        ctx->pc = 0x4E99D0u;
            // 0x4e99d0: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E99D4u;
        goto label_4e99d4;
    }
    ctx->pc = 0x4E99CCu;
    {
        const bool branch_taken_0x4e99cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e99cc) {
            ctx->pc = 0x4E99D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99CCu;
            // 0x4e99d0: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E99D4u;
label_4e99d4:
    // 0x4e99d4: 0x10000078  b           . + 4 + (0x78 << 2)
label_4e99d8:
    if (ctx->pc == 0x4E99D8u) {
        ctx->pc = 0x4E99DCu;
        goto label_4e99dc;
    }
    ctx->pc = 0x4E99D4u;
    {
        const bool branch_taken_0x4e99d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e99d4) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E99DCu;
label_4e99dc:
    // 0x4e99dc: 0x10000076  b           . + 4 + (0x76 << 2)
label_4e99e0:
    if (ctx->pc == 0x4E99E0u) {
        ctx->pc = 0x4E99E0u;
            // 0x4e99e0: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E99E4u;
        goto label_4e99e4;
    }
    ctx->pc = 0x4E99DCu;
    {
        const bool branch_taken_0x4e99dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E99E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99DCu;
            // 0x4e99e0: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e99dc) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E99E4u;
label_4e99e4:
    // 0x4e99e4: 0x10000074  b           . + 4 + (0x74 << 2)
label_4e99e8:
    if (ctx->pc == 0x4E99E8u) {
        ctx->pc = 0x4E99E8u;
            // 0x4e99e8: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E99ECu;
        goto label_4e99ec;
    }
    ctx->pc = 0x4E99E4u;
    {
        const bool branch_taken_0x4e99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E99E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99E4u;
            // 0x4e99e8: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e99e4) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E99ECu;
label_4e99ec:
    // 0x4e99ec: 0x51230005  beql        $t1, $v1, . + 4 + (0x5 << 2)
label_4e99f0:
    if (ctx->pc == 0x4E99F0u) {
        ctx->pc = 0x4E99F0u;
            // 0x4e99f0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x4E99F4u;
        goto label_4e99f4;
    }
    ctx->pc = 0x4E99ECu;
    {
        const bool branch_taken_0x4e99ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e99ec) {
            ctx->pc = 0x4E99F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99ECu;
            // 0x4e99f0: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9A04u;
            goto label_4e9a04;
        }
    }
    ctx->pc = 0x4E99F4u;
label_4e99f4:
    // 0x4e99f4: 0x51200070  beql        $t1, $zero, . + 4 + (0x70 << 2)
label_4e99f8:
    if (ctx->pc == 0x4E99F8u) {
        ctx->pc = 0x4E99F8u;
            // 0x4e99f8: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E99FCu;
        goto label_4e99fc;
    }
    ctx->pc = 0x4E99F4u;
    {
        const bool branch_taken_0x4e99f4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e99f4) {
            ctx->pc = 0x4E99F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E99F4u;
            // 0x4e99f8: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E99FCu;
label_4e99fc:
    // 0x4e99fc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_4e9a00:
    if (ctx->pc == 0x4E9A00u) {
        ctx->pc = 0x4E9A04u;
        goto label_4e9a04;
    }
    ctx->pc = 0x4E99FCu;
    {
        const bool branch_taken_0x4e99fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e99fc) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9A04u;
label_4e9a04:
    // 0x4e9a04: 0x1000006c  b           . + 4 + (0x6C << 2)
label_4e9a08:
    if (ctx->pc == 0x4E9A08u) {
        ctx->pc = 0x4E9A08u;
            // 0x4e9a08: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E9A0Cu;
        goto label_4e9a0c;
    }
    ctx->pc = 0x4E9A04u;
    {
        const bool branch_taken_0x4e9a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9A04u;
            // 0x4e9a08: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9a04) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9A0Cu;
label_4e9a0c:
    // 0x4e9a0c: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x4e9a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
label_4e9a10:
    // 0x4e9a10: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4e9a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4e9a14:
    // 0x4e9a14: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x4e9a14u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e9a18:
    // 0x4e9a18: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
label_4e9a1c:
    if (ctx->pc == 0x4E9A1Cu) {
        ctx->pc = 0x4E9A20u;
        goto label_4e9a20;
    }
    ctx->pc = 0x4E9A18u;
    {
        const bool branch_taken_0x4e9a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9a18) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9A20u;
label_4e9a20:
    // 0x4e9a20: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x4e9a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_4e9a24:
    // 0x4e9a24: 0x26050199  addiu       $a1, $s0, 0x199
    ctx->pc = 0x4e9a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 409));
label_4e9a28:
    // 0x4e9a28: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e9a28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e9a2c:
    // 0x4e9a2c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e9a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e9a30:
    // 0x4e9a30: 0x24638560  addiu       $v1, $v1, -0x7AA0
    ctx->pc = 0x4e9a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935904));
label_4e9a34:
    // 0x4e9a34: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4e9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4e9a38:
    // 0x4e9a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4e9a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4e9a3c:
    // 0x4e9a3c: 0x82040199  lb          $a0, 0x199($s0)
    ctx->pc = 0x4e9a3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9a40:
    // 0x4e9a40: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x4e9a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e9a44:
    // 0x4e9a44: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4e9a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4e9a48:
    // 0x4e9a48: 0xa2040199  sb          $a0, 0x199($s0)
    ctx->pc = 0x4e9a48u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 4));
label_4e9a4c:
    // 0x4e9a4c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e9a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e9a50:
    // 0x4e9a50: 0x8c63cb08  lw          $v1, -0x34F8($v1)
    ctx->pc = 0x4e9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953736)));
label_4e9a54:
    // 0x4e9a54: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x4e9a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
label_4e9a58:
    // 0x4e9a58: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4e9a58u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4e9a5c:
    // 0x4e9a5c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x4e9a5cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4e9a60:
    // 0x4e9a60: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e9a64:
    if (ctx->pc == 0x4E9A64u) {
        ctx->pc = 0x4E9A64u;
            // 0x4e9a64: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->pc = 0x4E9A68u;
        goto label_4e9a68;
    }
    ctx->pc = 0x4E9A60u;
    {
        const bool branch_taken_0x4e9a60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9A60u;
            // 0x4e9a64: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9a60) {
            ctx->pc = 0x4E9A6Cu;
            goto label_4e9a6c;
        }
    }
    ctx->pc = 0x4E9A68u;
label_4e9a68:
    // 0x4e9a68: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4e9a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e9a6c:
    // 0x4e9a6c: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x4e9a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_4e9a70:
    // 0x4e9a70: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4e9a70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4e9a74:
    // 0x4e9a74: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x4e9a74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e9a78:
    // 0x4e9a78: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e9a7c:
    if (ctx->pc == 0x4E9A7Cu) {
        ctx->pc = 0x4E9A7Cu;
            // 0x4e9a7c: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4E9A80u;
        goto label_4e9a80;
    }
    ctx->pc = 0x4E9A78u;
    {
        const bool branch_taken_0x4e9a78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9A78u;
            // 0x4e9a7c: 0xa0a40000  sb          $a0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9a78) {
            ctx->pc = 0x4E9A88u;
            goto label_4e9a88;
        }
    }
    ctx->pc = 0x4E9A80u;
label_4e9a80:
    // 0x4e9a80: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4e9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4e9a84:
    // 0x4e9a84: 0x8c63cb08  lw          $v1, -0x34F8($v1)
    ctx->pc = 0x4e9a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953736)));
label_4e9a88:
    // 0x4e9a88: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4e9a88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_4e9a8c:
    // 0x4e9a8c: 0x820c019a  lb          $t4, 0x19A($s0)
    ctx->pc = 0x4e9a8cu;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9a90:
    // 0x4e9a90: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e9a94:
    // 0x4e9a94: 0x82090199  lb          $t1, 0x199($s0)
    ctx->pc = 0x4e9a94u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9a98:
    // 0x4e9a98: 0x24638580  addiu       $v1, $v1, -0x7A80
    ctx->pc = 0x4e9a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935936));
label_4e9a9c:
    // 0x4e9a9c: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x4e9a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_4e9aa0:
    // 0x4e9aa0: 0x6b2021  addu        $a0, $v1, $t3
    ctx->pc = 0x4e9aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e9aa4:
    // 0x4e9aa4: 0x1302821  addu        $a1, $t1, $s0
    ctx->pc = 0x4e9aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
label_4e9aa8:
    // 0x4e9aa8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e9aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e9aac:
    // 0x4e9aac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e9aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e9ab0:
    // 0x4e9ab0: 0x80840168  lb          $a0, 0x168($a0)
    ctx->pc = 0x4e9ab0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 360)));
label_4e9ab4:
    // 0x4e9ab4: 0x14800024  bnez        $a0, . + 4 + (0x24 << 2)
label_4e9ab8:
    if (ctx->pc == 0x4E9AB8u) {
        ctx->pc = 0x4E9ABCu;
        goto label_4e9abc;
    }
    ctx->pc = 0x4E9AB4u;
    {
        const bool branch_taken_0x4e9ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9ab4) {
            ctx->pc = 0x4E9B48u;
            goto label_4e9b48;
        }
    }
    ctx->pc = 0x4E9ABCu;
label_4e9abc:
    // 0x4e9abc: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x4e9abcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
label_4e9ac0:
    // 0x4e9ac0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x4e9ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_4e9ac4:
    // 0x4e9ac4: 0x254a8560  addiu       $t2, $t2, -0x7AA0
    ctx->pc = 0x4e9ac4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935904));
label_4e9ac8:
    // 0x4e9ac8: 0x26080199  addiu       $t0, $s0, 0x199
    ctx->pc = 0x4e9ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 409));
label_4e9acc:
    // 0x4e9acc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4e9accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4e9ad0:
    // 0x4e9ad0: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x4e9ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4e9ad4:
    // 0x4e9ad4: 0x82060199  lb          $a2, 0x199($s0)
    ctx->pc = 0x4e9ad4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9ad8:
    // 0x4e9ad8: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x4e9ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e9adc:
    // 0x4e9adc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4e9adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4e9ae0:
    // 0x4e9ae0: 0x24e9ffff  addiu       $t1, $a3, -0x1
    ctx->pc = 0x4e9ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_4e9ae4:
    // 0x4e9ae4: 0xa2060199  sb          $a2, 0x199($s0)
    ctx->pc = 0x4e9ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 6));
label_4e9ae8:
    // 0x4e9ae8: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x4e9ae8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
label_4e9aec:
    // 0x4e9aec: 0x8ca6cb10  lw          $a2, -0x34F0($a1)
    ctx->pc = 0x4e9aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953744)));
label_4e9af0:
    // 0x4e9af0: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x4e9af0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_4e9af4:
    // 0x4e9af4: 0xe6082a  slt         $at, $a3, $a2
    ctx->pc = 0x4e9af4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_4e9af8:
    // 0x4e9af8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e9afc:
    if (ctx->pc == 0x4E9AFCu) {
        ctx->pc = 0x4E9B00u;
        goto label_4e9b00;
    }
    ctx->pc = 0x4E9AF8u;
    {
        const bool branch_taken_0x4e9af8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9af8) {
            ctx->pc = 0x4E9B04u;
            goto label_4e9b04;
        }
    }
    ctx->pc = 0x4E9B00u;
label_4e9b00:
    // 0x4e9b00: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4e9b00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4e9b04:
    // 0x4e9b04: 0x7363c  dsll32      $a2, $a3, 24
    ctx->pc = 0x4e9b04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 24));
label_4e9b08:
    // 0x4e9b08: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x4e9b08u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_4e9b0c:
    // 0x4e9b0c: 0x126082b  sltu        $at, $t1, $a2
    ctx->pc = 0x4e9b0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4e9b10:
    // 0x4e9b10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4e9b14:
    if (ctx->pc == 0x4E9B14u) {
        ctx->pc = 0x4E9B14u;
            // 0x4e9b14: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x4E9B18u;
        goto label_4e9b18;
    }
    ctx->pc = 0x4E9B10u;
    {
        const bool branch_taken_0x4e9b10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B10u;
            // 0x4e9b14: 0xa1070000  sb          $a3, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b10) {
            ctx->pc = 0x4E9B1Cu;
            goto label_4e9b1c;
        }
    }
    ctx->pc = 0x4E9B18u;
label_4e9b18:
    // 0x4e9b18: 0x8c86cb10  lw          $a2, -0x34F0($a0)
    ctx->pc = 0x4e9b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953744)));
label_4e9b1c:
    // 0x4e9b1c: 0xa1060000  sb          $a2, 0x0($t0)
    ctx->pc = 0x4e9b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 6));
label_4e9b20:
    // 0x4e9b20: 0x820c019a  lb          $t4, 0x19A($s0)
    ctx->pc = 0x4e9b20u;
    SET_GPR_S32(ctx, 12, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9b24:
    // 0x4e9b24: 0x82090199  lb          $t1, 0x199($s0)
    ctx->pc = 0x4e9b24u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9b28:
    // 0x4e9b28: 0xc5880  sll         $t3, $t4, 2
    ctx->pc = 0x4e9b28u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_4e9b2c:
    // 0x4e9b2c: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x4e9b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4e9b30:
    // 0x4e9b30: 0x2093821  addu        $a3, $s0, $t1
    ctx->pc = 0x4e9b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
label_4e9b34:
    // 0x4e9b34: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4e9b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4e9b38:
    // 0x4e9b38: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x4e9b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4e9b3c:
    // 0x4e9b3c: 0x80c60168  lb          $a2, 0x168($a2)
    ctx->pc = 0x4e9b3cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 360)));
label_4e9b40:
    // 0x4e9b40: 0x50c0ffe4  beql        $a2, $zero, . + 4 + (-0x1C << 2)
label_4e9b44:
    if (ctx->pc == 0x4E9B44u) {
        ctx->pc = 0x4E9B44u;
            // 0x4e9b44: 0x14b3821  addu        $a3, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->pc = 0x4E9B48u;
        goto label_4e9b48;
    }
    ctx->pc = 0x4E9B40u;
    {
        const bool branch_taken_0x4e9b40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9b40) {
            ctx->pc = 0x4E9B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B40u;
            // 0x4e9b44: 0x14b3821  addu        $a3, $t2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e9ad4;
        }
    }
    ctx->pc = 0x4E9B48u;
label_4e9b48:
    // 0x4e9b48: 0x29810004  slti        $at, $t4, 0x4
    ctx->pc = 0x4e9b48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
label_4e9b4c:
    // 0x4e9b4c: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
label_4e9b50:
    if (ctx->pc == 0x4E9B50u) {
        ctx->pc = 0x4E9B50u;
            // 0x4e9b50: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4E9B54u;
        goto label_4e9b54;
    }
    ctx->pc = 0x4E9B4Cu;
    {
        const bool branch_taken_0x4e9b4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9b4c) {
            ctx->pc = 0x4E9B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B4Cu;
            // 0x4e9b50: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9B5Cu;
            goto label_4e9b5c;
        }
    }
    ctx->pc = 0x4E9B54u;
label_4e9b54:
    // 0x4e9b54: 0x10000018  b           . + 4 + (0x18 << 2)
label_4e9b58:
    if (ctx->pc == 0x4E9B58u) {
        ctx->pc = 0x4E9B58u;
            // 0x4e9b58: 0xa209019b  sb          $t1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 9));
        ctx->pc = 0x4E9B5Cu;
        goto label_4e9b5c;
    }
    ctx->pc = 0x4E9B54u;
    {
        const bool branch_taken_0x4e9b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B54u;
            // 0x4e9b58: 0xa209019b  sb          $t1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b54) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9B5Cu;
label_4e9b5c:
    // 0x4e9b5c: 0x5583000f  bnel        $t4, $v1, . + 4 + (0xF << 2)
label_4e9b60:
    if (ctx->pc == 0x4E9B60u) {
        ctx->pc = 0x4E9B60u;
            // 0x4e9b60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E9B64u;
        goto label_4e9b64;
    }
    ctx->pc = 0x4E9B5Cu;
    {
        const bool branch_taken_0x4e9b5c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e9b5c) {
            ctx->pc = 0x4E9B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B5Cu;
            // 0x4e9b60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9B9Cu;
            goto label_4e9b9c;
        }
    }
    ctx->pc = 0x4E9B64u;
label_4e9b64:
    // 0x4e9b64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e9b68:
    // 0x4e9b68: 0x5123000a  beql        $t1, $v1, . + 4 + (0xA << 2)
label_4e9b6c:
    if (ctx->pc == 0x4E9B6Cu) {
        ctx->pc = 0x4E9B6Cu;
            // 0x4e9b6c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x4E9B70u;
        goto label_4e9b70;
    }
    ctx->pc = 0x4E9B68u;
    {
        const bool branch_taken_0x4e9b68 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9b68) {
            ctx->pc = 0x4E9B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B68u;
            // 0x4e9b6c: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9B94u;
            goto label_4e9b94;
        }
    }
    ctx->pc = 0x4E9B70u;
label_4e9b70:
    // 0x4e9b70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9b74:
    // 0x4e9b74: 0x51230005  beql        $t1, $v1, . + 4 + (0x5 << 2)
label_4e9b78:
    if (ctx->pc == 0x4E9B78u) {
        ctx->pc = 0x4E9B78u;
            // 0x4e9b78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4E9B7Cu;
        goto label_4e9b7c;
    }
    ctx->pc = 0x4E9B74u;
    {
        const bool branch_taken_0x4e9b74 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9b74) {
            ctx->pc = 0x4E9B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B74u;
            // 0x4e9b78: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9B8Cu;
            goto label_4e9b8c;
        }
    }
    ctx->pc = 0x4E9B7Cu;
label_4e9b7c:
    // 0x4e9b7c: 0x5120000e  beql        $t1, $zero, . + 4 + (0xE << 2)
label_4e9b80:
    if (ctx->pc == 0x4E9B80u) {
        ctx->pc = 0x4E9B80u;
            // 0x4e9b80: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E9B84u;
        goto label_4e9b84;
    }
    ctx->pc = 0x4E9B7Cu;
    {
        const bool branch_taken_0x4e9b7c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9b7c) {
            ctx->pc = 0x4E9B80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B7Cu;
            // 0x4e9b80: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9B84u;
label_4e9b84:
    // 0x4e9b84: 0x1000000c  b           . + 4 + (0xC << 2)
label_4e9b88:
    if (ctx->pc == 0x4E9B88u) {
        ctx->pc = 0x4E9B8Cu;
        goto label_4e9b8c;
    }
    ctx->pc = 0x4E9B84u;
    {
        const bool branch_taken_0x4e9b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9b84) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9B8Cu;
label_4e9b8c:
    // 0x4e9b8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_4e9b90:
    if (ctx->pc == 0x4E9B90u) {
        ctx->pc = 0x4E9B90u;
            // 0x4e9b90: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E9B94u;
        goto label_4e9b94;
    }
    ctx->pc = 0x4E9B8Cu;
    {
        const bool branch_taken_0x4e9b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B8Cu;
            // 0x4e9b90: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b8c) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9B94u;
label_4e9b94:
    // 0x4e9b94: 0x10000008  b           . + 4 + (0x8 << 2)
label_4e9b98:
    if (ctx->pc == 0x4E9B98u) {
        ctx->pc = 0x4E9B98u;
            // 0x4e9b98: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E9B9Cu;
        goto label_4e9b9c;
    }
    ctx->pc = 0x4E9B94u;
    {
        const bool branch_taken_0x4e9b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B94u;
            // 0x4e9b98: 0xa203019b  sb          $v1, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b94) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9B9Cu;
label_4e9b9c:
    // 0x4e9b9c: 0x51230005  beql        $t1, $v1, . + 4 + (0x5 << 2)
label_4e9ba0:
    if (ctx->pc == 0x4E9BA0u) {
        ctx->pc = 0x4E9BA0u;
            // 0x4e9ba0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4E9BA4u;
        goto label_4e9ba4;
    }
    ctx->pc = 0x4E9B9Cu;
    {
        const bool branch_taken_0x4e9b9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9b9c) {
            ctx->pc = 0x4E9BA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9B9Cu;
            // 0x4e9ba0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BB4u;
            goto label_4e9bb4;
        }
    }
    ctx->pc = 0x4E9BA4u;
label_4e9ba4:
    // 0x4e9ba4: 0x51200004  beql        $t1, $zero, . + 4 + (0x4 << 2)
label_4e9ba8:
    if (ctx->pc == 0x4E9BA8u) {
        ctx->pc = 0x4E9BA8u;
            // 0x4e9ba8: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4E9BACu;
        goto label_4e9bac;
    }
    ctx->pc = 0x4E9BA4u;
    {
        const bool branch_taken_0x4e9ba4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9ba4) {
            ctx->pc = 0x4E9BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9BA4u;
            // 0x4e9ba8: 0xa200019b  sb          $zero, 0x19B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9BACu;
label_4e9bac:
    // 0x4e9bac: 0x10000002  b           . + 4 + (0x2 << 2)
label_4e9bb0:
    if (ctx->pc == 0x4E9BB0u) {
        ctx->pc = 0x4E9BB4u;
        goto label_4e9bb4;
    }
    ctx->pc = 0x4E9BACu;
    {
        const bool branch_taken_0x4e9bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9bac) {
            ctx->pc = 0x4E9BB8u;
            goto label_4e9bb8;
        }
    }
    ctx->pc = 0x4E9BB4u;
label_4e9bb4:
    // 0x4e9bb4: 0xa203019b  sb          $v1, 0x19B($s0)
    ctx->pc = 0x4e9bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 3));
label_4e9bb8:
    // 0x4e9bb8: 0x8e06012c  lw          $a2, 0x12C($s0)
    ctx->pc = 0x4e9bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_4e9bbc:
    // 0x4e9bbc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4e9bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4e9bc0:
    // 0x4e9bc0: 0x3c030f00  lui         $v1, 0xF00
    ctx->pc = 0x4e9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3840 << 16));
label_4e9bc4:
    // 0x4e9bc4: 0x2484976c  addiu       $a0, $a0, -0x6894
    ctx->pc = 0x4e9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940524));
label_4e9bc8:
    // 0x4e9bc8: 0x346300f0  ori         $v1, $v1, 0xF0
    ctx->pc = 0x4e9bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)240);
label_4e9bcc:
    // 0x4e9bcc: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x4e9bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_4e9bd0:
    // 0x4e9bd0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e9bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4e9bd4:
    // 0x4e9bd4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x4e9bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4e9bd8:
    // 0x4e9bd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e9bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e9bdc:
    // 0x4e9bdc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e9bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e9be0:
    // 0x4e9be0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4e9be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4e9be4:
    // 0x4e9be4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4e9be4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e9be8:
    // 0x4e9be8: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
label_4e9bec:
    if (ctx->pc == 0x4E9BECu) {
        ctx->pc = 0x4E9BECu;
            // 0x4e9bec: 0x3c033dcc  lui         $v1, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
        ctx->pc = 0x4E9BF0u;
        goto label_4e9bf0;
    }
    ctx->pc = 0x4E9BE8u;
    {
        const bool branch_taken_0x4e9be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9be8) {
            ctx->pc = 0x4E9BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9BE8u;
            // 0x4e9bec: 0x3c033dcc  lui         $v1, 0x3DCC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9C3Cu;
            goto label_4e9c3c;
        }
    }
    ctx->pc = 0x4E9BF0u;
label_4e9bf0:
    // 0x4e9bf0: 0x82030197  lb          $v1, 0x197($s0)
    ctx->pc = 0x4e9bf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
label_4e9bf4:
    // 0x4e9bf4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x4e9bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_4e9bf8:
    // 0x4e9bf8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e9bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4e9bfc:
    // 0x4e9bfc: 0x344400a9  ori         $a0, $v0, 0xA9
    ctx->pc = 0x4e9bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
label_4e9c00:
    // 0x4e9c00: 0x24a58580  addiu       $a1, $a1, -0x7A80
    ctx->pc = 0x4e9c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935936));
label_4e9c04:
    // 0x4e9c04: 0xa2030198  sb          $v1, 0x198($s0)
    ctx->pc = 0x4e9c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 3));
label_4e9c08:
    // 0x4e9c08: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x4e9c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_4e9c0c:
    // 0x4e9c0c: 0xa200019d  sb          $zero, 0x19D($s0)
    ctx->pc = 0x4e9c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 0));
label_4e9c10:
    // 0x4e9c10: 0xa200019e  sb          $zero, 0x19E($s0)
    ctx->pc = 0x4e9c10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 414), (uint8_t)GPR_U32(ctx, 0));
label_4e9c14:
    // 0x4e9c14: 0x8202019a  lb          $v0, 0x19A($s0)
    ctx->pc = 0x4e9c14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4e9c18:
    // 0x4e9c18: 0x82030199  lb          $v1, 0x199($s0)
    ctx->pc = 0x4e9c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4e9c1c:
    // 0x4e9c1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e9c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e9c20:
    // 0x4e9c20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4e9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4e9c24:
    // 0x4e9c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e9c28:
    // 0x4e9c28: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e9c2c:
    // 0x4e9c2c: 0xa2020197  sb          $v0, 0x197($s0)
    ctx->pc = 0x4e9c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 407), (uint8_t)GPR_U32(ctx, 2));
label_4e9c30:
    // 0x4e9c30: 0xc073234  jal         func_1CC8D0
label_4e9c34:
    if (ctx->pc == 0x4E9C34u) {
        ctx->pc = 0x4E9C34u;
            // 0x4e9c34: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->pc = 0x4E9C38u;
        goto label_4e9c38;
    }
    ctx->pc = 0x4E9C30u;
    SET_GPR_U32(ctx, 31, 0x4E9C38u);
    ctx->pc = 0x4E9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9C30u;
            // 0x4e9c34: 0xae000130  sw          $zero, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9C38u; }
        if (ctx->pc != 0x4E9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9C38u; }
        if (ctx->pc != 0x4E9C38u) { return; }
    }
    ctx->pc = 0x4E9C38u;
label_4e9c38:
    // 0x4e9c38: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x4e9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_4e9c3c:
    // 0x4e9c3c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x4e9c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4e9c40:
    // 0x4e9c40: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x4e9c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9c44:
    // 0x4e9c44: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x4e9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
label_4e9c48:
    // 0x4e9c48: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4e9c48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9c4c:
    // 0x4e9c4c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x4e9c4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_4e9c50:
    // 0x4e9c50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4e9c50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4e9c54:
    // 0x4e9c54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4e9c54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9c58:
    // 0x4e9c58: 0x0  nop
    ctx->pc = 0x4e9c58u;
    // NOP
label_4e9c5c:
    // 0x4e9c5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4e9c5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e9c60:
    // 0x4e9c60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4e9c64:
    if (ctx->pc == 0x4E9C64u) {
        ctx->pc = 0x4E9C64u;
            // 0x4e9c64: 0xe6010130  swc1        $f1, 0x130($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->pc = 0x4E9C68u;
        goto label_4e9c68;
    }
    ctx->pc = 0x4E9C60u;
    {
        const bool branch_taken_0x4e9c60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E9C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9C60u;
            // 0x4e9c64: 0xe6010130  swc1        $f1, 0x130($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9c60) {
            ctx->pc = 0x4E9C70u;
            goto label_4e9c70;
        }
    }
    ctx->pc = 0x4E9C68u;
label_4e9c68:
    // 0x4e9c68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4e9c68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4e9c6c:
    // 0x4e9c6c: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x4e9c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
label_4e9c70:
    // 0x4e9c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e9c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9c74:
    // 0x4e9c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e9c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9c78:
    // 0x4e9c78: 0x3e00008  jr          $ra
label_4e9c7c:
    if (ctx->pc == 0x4E9C7Cu) {
        ctx->pc = 0x4E9C7Cu;
            // 0x4e9c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E9C80u;
        goto label_4e9c80;
    }
    ctx->pc = 0x4E9C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9C78u;
            // 0x4e9c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E9C80u;
label_4e9c80:
    // 0x4e9c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e9c84:
    // 0x4e9c84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e9c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9c88:
    // 0x4e9c88: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e9c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e9c8c:
    // 0x4e9c8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e9c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e9c90:
    // 0x4e9c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e9c94:
    // 0x4e9c94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e9c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e9c98:
    // 0x4e9c98: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e9c98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e9c9c:
    // 0x4e9c9c: 0x10a30225  beq         $a1, $v1, . + 4 + (0x225 << 2)
label_4e9ca0:
    if (ctx->pc == 0x4E9CA0u) {
        ctx->pc = 0x4E9CA0u;
            // 0x4e9ca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9CA4u;
        goto label_4e9ca4;
    }
    ctx->pc = 0x4E9C9Cu;
    {
        const bool branch_taken_0x4e9c9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E9CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9C9Cu;
            // 0x4e9ca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9c9c) {
            ctx->pc = 0x4EA534u;
            goto label_4ea534;
        }
    }
    ctx->pc = 0x4E9CA4u;
label_4e9ca4:
    // 0x4e9ca4: 0x50a0021b  beql        $a1, $zero, . + 4 + (0x21B << 2)
label_4e9ca8:
    if (ctx->pc == 0x4E9CA8u) {
        ctx->pc = 0x4E9CA8u;
            // 0x4e9ca8: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4E9CACu;
        goto label_4e9cac;
    }
    ctx->pc = 0x4E9CA4u;
    {
        const bool branch_taken_0x4e9ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9ca4) {
            ctx->pc = 0x4E9CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9CA4u;
            // 0x4e9ca8: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA514u;
            goto label_4ea514;
        }
    }
    ctx->pc = 0x4E9CACu;
label_4e9cac:
    // 0x4e9cac: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e9cb0:
    // 0x4e9cb0: 0x10a30061  beq         $a1, $v1, . + 4 + (0x61 << 2)
label_4e9cb4:
    if (ctx->pc == 0x4E9CB4u) {
        ctx->pc = 0x4E9CB8u;
        goto label_4e9cb8;
    }
    ctx->pc = 0x4E9CB0u;
    {
        const bool branch_taken_0x4e9cb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9cb0) {
            ctx->pc = 0x4E9E38u;
            goto label_4e9e38;
        }
    }
    ctx->pc = 0x4E9CB8u;
label_4e9cb8:
    // 0x4e9cb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e9cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e9cbc:
    // 0x4e9cbc: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4e9cc0:
    if (ctx->pc == 0x4E9CC0u) {
        ctx->pc = 0x4E9CC0u;
            // 0x4e9cc0: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x4E9CC4u;
        goto label_4e9cc4;
    }
    ctx->pc = 0x4E9CBCu;
    {
        const bool branch_taken_0x4e9cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9cbc) {
            ctx->pc = 0x4E9CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9CBCu;
            // 0x4e9cc0: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9CCCu;
            goto label_4e9ccc;
        }
    }
    ctx->pc = 0x4E9CC4u;
label_4e9cc4:
    // 0x4e9cc4: 0x10000220  b           . + 4 + (0x220 << 2)
label_4e9cc8:
    if (ctx->pc == 0x4E9CC8u) {
        ctx->pc = 0x4E9CC8u;
            // 0x4e9cc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4E9CCCu;
        goto label_4e9ccc;
    }
    ctx->pc = 0x4E9CC4u;
    {
        const bool branch_taken_0x4e9cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9CC4u;
            // 0x4e9cc8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9cc4) {
            ctx->pc = 0x4EA548u;
            goto label_4ea548;
        }
    }
    ctx->pc = 0x4E9CCCu;
label_4e9ccc:
    // 0x4e9ccc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4e9cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e9cd0:
    // 0x4e9cd0: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_4e9cd4:
    if (ctx->pc == 0x4E9CD4u) {
        ctx->pc = 0x4E9CD4u;
            // 0x4e9cd4: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4E9CD8u;
        goto label_4e9cd8;
    }
    ctx->pc = 0x4E9CD0u;
    {
        const bool branch_taken_0x4e9cd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e9cd0) {
            ctx->pc = 0x4E9CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9CD0u;
            // 0x4e9cd4: 0x9203005c  lbu         $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9CF0u;
            goto label_4e9cf0;
        }
    }
    ctx->pc = 0x4E9CD8u;
label_4e9cd8:
    // 0x4e9cd8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9cdc:
    // 0x4e9cdc: 0xc0fcfe0  jal         func_3F3F80
label_4e9ce0:
    if (ctx->pc == 0x4E9CE0u) {
        ctx->pc = 0x4E9CE0u;
            // 0x4e9ce0: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->pc = 0x4E9CE4u;
        goto label_4e9ce4;
    }
    ctx->pc = 0x4E9CDCu;
    SET_GPR_U32(ctx, 31, 0x4E9CE4u);
    ctx->pc = 0x4E9CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9CDCu;
            // 0x4e9ce0: 0x8c440e68  lw          $a0, 0xE68($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F3F80u;
    if (runtime->hasFunction(0x3F3F80u)) {
        auto targetFn = runtime->lookupFunction(0x3F3F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9CE4u; }
        if (ctx->pc != 0x4E9CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F3F80_0x3f3f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9CE4u; }
        if (ctx->pc != 0x4E9CE4u) { return; }
    }
    ctx->pc = 0x4E9CE4u;
label_4e9ce4:
    // 0x4e9ce4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_4e9ce8:
    if (ctx->pc == 0x4E9CE8u) {
        ctx->pc = 0x4E9CE8u;
            // 0x4e9ce8: 0x9202005c  lbu         $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4E9CECu;
        goto label_4e9cec;
    }
    ctx->pc = 0x4E9CE4u;
    {
        const bool branch_taken_0x4e9ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9ce4) {
            ctx->pc = 0x4E9CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9CE4u;
            // 0x4e9ce8: 0x9202005c  lbu         $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9CFCu;
            goto label_4e9cfc;
        }
    }
    ctx->pc = 0x4E9CECu;
label_4e9cec:
    // 0x4e9cec: 0x9203005c  lbu         $v1, 0x5C($s0)
    ctx->pc = 0x4e9cecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_4e9cf0:
    // 0x4e9cf0: 0x14600214  bnez        $v1, . + 4 + (0x214 << 2)
label_4e9cf4:
    if (ctx->pc == 0x4E9CF4u) {
        ctx->pc = 0x4E9CF8u;
        goto label_4e9cf8;
    }
    ctx->pc = 0x4E9CF0u;
    {
        const bool branch_taken_0x4e9cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9cf0) {
            ctx->pc = 0x4EA544u;
            goto label_4ea544;
        }
    }
    ctx->pc = 0x4E9CF8u;
label_4e9cf8:
    // 0x4e9cf8: 0x9202005c  lbu         $v0, 0x5C($s0)
    ctx->pc = 0x4e9cf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 92)));
label_4e9cfc:
    // 0x4e9cfc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_4e9d00:
    if (ctx->pc == 0x4E9D00u) {
        ctx->pc = 0x4E9D04u;
        goto label_4e9d04;
    }
    ctx->pc = 0x4E9CFCu;
    {
        const bool branch_taken_0x4e9cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9cfc) {
            ctx->pc = 0x4E9D1Cu;
            goto label_4e9d1c;
        }
    }
    ctx->pc = 0x4E9D04u;
label_4e9d04:
    // 0x4e9d04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9d08:
    // 0x4e9d08: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x4e9d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_4e9d0c:
    // 0x4e9d0c: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x4e9d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_4e9d10:
    // 0x4e9d10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e9d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d14:
    // 0x4e9d14: 0xc0ab89c  jal         func_2AE270
label_4e9d18:
    if (ctx->pc == 0x4E9D18u) {
        ctx->pc = 0x4E9D18u;
            // 0x4e9d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9D1Cu;
        goto label_4e9d1c;
    }
    ctx->pc = 0x4E9D14u;
    SET_GPR_U32(ctx, 31, 0x4E9D1Cu);
    ctx->pc = 0x4E9D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9D14u;
            // 0x4e9d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9D1Cu; }
        if (ctx->pc != 0x4E9D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9D1Cu; }
        if (ctx->pc != 0x4E9D1Cu) { return; }
    }
    ctx->pc = 0x4E9D1Cu;
label_4e9d1c:
    // 0x4e9d1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9d20:
    // 0x4e9d20: 0x3c033fb3  lui         $v1, 0x3FB3
    ctx->pc = 0x4e9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16307 << 16));
label_4e9d24:
    // 0x4e9d24: 0x8c510e68  lw          $s1, 0xE68($v0)
    ctx->pc = 0x4e9d24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4e9d28:
    // 0x4e9d28: 0x346e3333  ori         $t6, $v1, 0x3333
    ctx->pc = 0x4e9d28u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_4e9d2c:
    // 0x4e9d2c: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x4e9d2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4e9d30:
    // 0x4e9d30: 0x3c0b4204  lui         $t3, 0x4204
    ctx->pc = 0x4e9d30u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)16900 << 16));
label_4e9d34:
    // 0x4e9d34: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x4e9d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_4e9d38:
    // 0x4e9d38: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4e9d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4e9d3c:
    // 0x4e9d3c: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x4e9d3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9d40:
    // 0x4e9d40: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9d44:
    // 0x4e9d44: 0x2605011c  addiu       $a1, $s0, 0x11C
    ctx->pc = 0x4e9d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
label_4e9d48:
    // 0x4e9d48: 0x26060148  addiu       $a2, $s0, 0x148
    ctx->pc = 0x4e9d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4e9d4c:
    // 0x4e9d4c: 0x26070110  addiu       $a3, $s0, 0x110
    ctx->pc = 0x4e9d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_4e9d50:
    // 0x4e9d50: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4e9d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e9d54:
    // 0x4e9d54: 0x8d2f0030  lw          $t7, 0x30($t1)
    ctx->pc = 0x4e9d54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 48)));
label_4e9d58:
    // 0x4e9d58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4e9d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d5c:
    // 0x4e9d5c: 0xc5e00004  lwc1        $f0, 0x4($t7)
    ctx->pc = 0x4e9d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e9d60:
    // 0x4e9d60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e9d60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d64:
    // 0x4e9d64: 0xe6000140  swc1        $f0, 0x140($s0)
    ctx->pc = 0x4e9d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 320), bits); }
label_4e9d68:
    // 0x4e9d68: 0x8ded000c  lw          $t5, 0xC($t7)
    ctx->pc = 0x4e9d68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
label_4e9d6c:
    // 0x4e9d6c: 0xae0d0144  sw          $t5, 0x144($s0)
    ctx->pc = 0x4e9d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 13));
label_4e9d70:
    // 0x4e9d70: 0x8e2d0008  lw          $t5, 0x8($s1)
    ctx->pc = 0x4e9d70u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9d74:
    // 0x4e9d74: 0x8dad0030  lw          $t5, 0x30($t5)
    ctx->pc = 0x4e9d74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 48)));
label_4e9d78:
    // 0x4e9d78: 0xadae0004  sw          $t6, 0x4($t5)
    ctx->pc = 0x4e9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 14));
label_4e9d7c:
    // 0x4e9d7c: 0xadec000c  sw          $t4, 0xC($t7)
    ctx->pc = 0x4e9d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 12), GPR_U32(ctx, 12));
label_4e9d80:
    // 0x4e9d80: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x4e9d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e9d84:
    // 0x4e9d84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e9d84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4e9d88:
    // 0x4e9d88: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x4e9d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4e9d8c:
    // 0x4e9d8c: 0xae0b0114  sw          $t3, 0x114($s0)
    ctx->pc = 0x4e9d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 11));
label_4e9d90:
    // 0x4e9d90: 0xae040118  sw          $a0, 0x118($s0)
    ctx->pc = 0x4e9d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 4));
label_4e9d94:
    // 0x4e9d94: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x4e9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e9d98:
    // 0x4e9d98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4e9d98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4e9d9c:
    // 0x4e9d9c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x4e9d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4e9da0:
    // 0x4e9da0: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x4e9da0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4e9da4:
    // 0x4e9da4: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x4e9da4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4e9da8:
    // 0x4e9da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e9da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9dac:
    // 0x4e9dac: 0xc0ee43c  jal         func_3B90F0
label_4e9db0:
    if (ctx->pc == 0x4E9DB0u) {
        ctx->pc = 0x4E9DB0u;
            // 0x4e9db0: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x4E9DB4u;
        goto label_4e9db4;
    }
    ctx->pc = 0x4E9DACu;
    SET_GPR_U32(ctx, 31, 0x4E9DB4u);
    ctx->pc = 0x4E9DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9DACu;
            // 0x4e9db0: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B90F0u;
    if (runtime->hasFunction(0x3B90F0u)) {
        auto targetFn = runtime->lookupFunction(0x3B90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9DB4u; }
        if (ctx->pc != 0x4E9DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B90F0_0x3b90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9DB4u; }
        if (ctx->pc != 0x4E9DB4u) { return; }
    }
    ctx->pc = 0x4E9DB4u;
label_4e9db4:
    // 0x4e9db4: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x4e9db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_4e9db8:
    // 0x4e9db8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4e9db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4e9dbc:
    // 0x4e9dbc: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x4e9dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e9dc0:
    // 0x4e9dc0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x4e9dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4e9dc4:
    // 0x4e9dc4: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x4e9dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9dc8:
    // 0x4e9dc8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x4e9dc8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_4e9dcc:
    // 0x4e9dcc: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x4e9dccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e9dd0:
    // 0x4e9dd0: 0xe6020110  swc1        $f2, 0x110($s0)
    ctx->pc = 0x4e9dd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4e9dd4:
    // 0x4e9dd4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4e9dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9dd8:
    // 0x4e9dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e9dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e9ddc:
    // 0x4e9ddc: 0x0  nop
    ctx->pc = 0x4e9ddcu;
    // NOP
label_4e9de0:
    // 0x4e9de0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4e9de0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4e9de4:
    // 0x4e9de4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4e9de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4e9de8:
    // 0x4e9de8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x4e9de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4e9dec:
    // 0x4e9dec: 0x0  nop
    ctx->pc = 0x4e9decu;
    // NOP
label_4e9df0:
    // 0x4e9df0: 0xae030138  sw          $v1, 0x138($s0)
    ctx->pc = 0x4e9df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
label_4e9df4:
    // 0x4e9df4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4e9df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e9df8:
    // 0x4e9df8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e9df8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e9dfc:
    // 0x4e9dfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4e9e00:
    if (ctx->pc == 0x4E9E00u) {
        ctx->pc = 0x4E9E00u;
            // 0x4e9e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E9E04u;
        goto label_4e9e04;
    }
    ctx->pc = 0x4E9DFCu;
    {
        const bool branch_taken_0x4e9dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E9E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9DFCu;
            // 0x4e9e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9dfc) {
            ctx->pc = 0x4E9E08u;
            goto label_4e9e08;
        }
    }
    ctx->pc = 0x4E9E04u;
label_4e9e04:
    // 0x4e9e04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4e9e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9e08:
    // 0x4e9e08: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x4e9e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4e9e0c:
    // 0x4e9e0c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x4e9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_4e9e10:
    // 0x4e9e10: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4e9e10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9e14:
    // 0x4e9e14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4e9e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4e9e18:
    // 0x4e9e18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e9e1c:
    // 0x4e9e1c: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x4e9e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_4e9e20:
    // 0x4e9e20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e9e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e9e24:
    // 0x4e9e24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4e9e24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4e9e28:
    // 0x4e9e28: 0x320f809  jalr        $t9
label_4e9e2c:
    if (ctx->pc == 0x4E9E2Cu) {
        ctx->pc = 0x4E9E2Cu;
            // 0x4e9e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9E30u;
        goto label_4e9e30;
    }
    ctx->pc = 0x4E9E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E9E30u);
        ctx->pc = 0x4E9E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9E28u;
            // 0x4e9e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E9E30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E9E30u; }
            if (ctx->pc != 0x4E9E30u) { return; }
        }
        }
    }
    ctx->pc = 0x4E9E30u;
label_4e9e30:
    // 0x4e9e30: 0x100001c4  b           . + 4 + (0x1C4 << 2)
label_4e9e34:
    if (ctx->pc == 0x4E9E34u) {
        ctx->pc = 0x4E9E38u;
        goto label_4e9e38;
    }
    ctx->pc = 0x4E9E30u;
    {
        const bool branch_taken_0x4e9e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9e30) {
            ctx->pc = 0x4EA544u;
            goto label_4ea544;
        }
    }
    ctx->pc = 0x4E9E38u;
label_4e9e38:
    // 0x4e9e38: 0xc13a520  jal         func_4E9480
label_4e9e3c:
    if (ctx->pc == 0x4E9E3Cu) {
        ctx->pc = 0x4E9E40u;
        goto label_4e9e40;
    }
    ctx->pc = 0x4E9E38u;
    SET_GPR_U32(ctx, 31, 0x4E9E40u);
    ctx->pc = 0x4E9480u;
    goto label_4e9480;
    ctx->pc = 0x4E9E40u;
label_4e9e40:
    // 0x4e9e40: 0x8e04012c  lw          $a0, 0x12C($s0)
    ctx->pc = 0x4e9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
label_4e9e44:
    // 0x4e9e44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e9e48:
    // 0x4e9e48: 0x24429764  addiu       $v0, $v0, -0x689C
    ctx->pc = 0x4e9e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940516));
label_4e9e4c:
    // 0x4e9e4c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x4e9e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4e9e50:
    // 0x4e9e50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4e9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4e9e54:
    // 0x4e9e54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4e9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4e9e58:
    // 0x4e9e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e9e5c:
    // 0x4e9e5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4e9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e9e60:
    // 0x4e9e60: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x4e9e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_4e9e64:
    // 0x4e9e64: 0x50400129  beql        $v0, $zero, . + 4 + (0x129 << 2)
label_4e9e68:
    if (ctx->pc == 0x4E9E68u) {
        ctx->pc = 0x4E9E68u;
            // 0x4e9e68: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4E9E6Cu;
        goto label_4e9e6c;
    }
    ctx->pc = 0x4E9E64u;
    {
        const bool branch_taken_0x4e9e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9e64) {
            ctx->pc = 0x4E9E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9E64u;
            // 0x4e9e68: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA30Cu;
            goto label_4ea30c;
        }
    }
    ctx->pc = 0x4E9E6Cu;
label_4e9e6c:
    // 0x4e9e6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4e9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4e9e70:
    // 0x4e9e70: 0x82040197  lb          $a0, 0x197($s0)
    ctx->pc = 0x4e9e70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
label_4e9e74:
    // 0x4e9e74: 0x8c420e68  lw          $v0, 0xE68($v0)
    ctx->pc = 0x4e9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4e9e78:
    // 0x4e9e78: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x4e9e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4e9e7c:
    // 0x4e9e7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x4e9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4e9e80:
    // 0x4e9e80: 0x108300db  beq         $a0, $v1, . + 4 + (0xDB << 2)
label_4e9e84:
    if (ctx->pc == 0x4E9E84u) {
        ctx->pc = 0x4E9E84u;
            // 0x4e9e84: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->pc = 0x4E9E88u;
        goto label_4e9e88;
    }
    ctx->pc = 0x4E9E80u;
    {
        const bool branch_taken_0x4e9e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E9E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9E80u;
            // 0x4e9e84: 0x8c420030  lw          $v0, 0x30($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9e80) {
            ctx->pc = 0x4EA1F0u;
            goto label_4ea1f0;
        }
    }
    ctx->pc = 0x4E9E88u;
label_4e9e88:
    // 0x4e9e88: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x4e9e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_4e9e8c:
    // 0x4e9e8c: 0x508300d0  beql        $a0, $v1, . + 4 + (0xD0 << 2)
label_4e9e90:
    if (ctx->pc == 0x4E9E90u) {
        ctx->pc = 0x4E9E90u;
            // 0x4e9e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E9E94u;
        goto label_4e9e94;
    }
    ctx->pc = 0x4E9E8Cu;
    {
        const bool branch_taken_0x4e9e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9e8c) {
            ctx->pc = 0x4E9E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9E8Cu;
            // 0x4e9e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA1D0u;
            goto label_4ea1d0;
        }
    }
    ctx->pc = 0x4E9E94u;
label_4e9e94:
    // 0x4e9e94: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x4e9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_4e9e98:
    // 0x4e9e98: 0x108300a2  beq         $a0, $v1, . + 4 + (0xA2 << 2)
label_4e9e9c:
    if (ctx->pc == 0x4E9E9Cu) {
        ctx->pc = 0x4E9EA0u;
        goto label_4e9ea0;
    }
    ctx->pc = 0x4E9E98u;
    {
        const bool branch_taken_0x4e9e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9e98) {
            ctx->pc = 0x4EA124u;
            goto label_4ea124;
        }
    }
    ctx->pc = 0x4E9EA0u;
label_4e9ea0:
    // 0x4e9ea0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x4e9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4e9ea4:
    // 0x4e9ea4: 0x50830094  beql        $a0, $v1, . + 4 + (0x94 << 2)
label_4e9ea8:
    if (ctx->pc == 0x4E9EA8u) {
        ctx->pc = 0x4E9EA8u;
            // 0x4e9ea8: 0x92020196  lbu         $v0, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->pc = 0x4E9EACu;
        goto label_4e9eac;
    }
    ctx->pc = 0x4E9EA4u;
    {
        const bool branch_taken_0x4e9ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9ea4) {
            ctx->pc = 0x4E9EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9EA4u;
            // 0x4e9ea8: 0x92020196  lbu         $v0, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA0F8u;
            goto label_4ea0f8;
        }
    }
    ctx->pc = 0x4E9EACu;
label_4e9eac:
    // 0x4e9eac: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x4e9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4e9eb0:
    // 0x4e9eb0: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_4e9eb4:
    if (ctx->pc == 0x4E9EB4u) {
        ctx->pc = 0x4E9EB8u;
        goto label_4e9eb8;
    }
    ctx->pc = 0x4E9EB0u;
    {
        const bool branch_taken_0x4e9eb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9eb0) {
            ctx->pc = 0x4E9FF0u;
            goto label_4e9ff0;
        }
    }
    ctx->pc = 0x4E9EB8u;
label_4e9eb8:
    // 0x4e9eb8: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x4e9eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_4e9ebc:
    // 0x4e9ebc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_4e9ec0:
    if (ctx->pc == 0x4E9EC0u) {
        ctx->pc = 0x4E9EC4u;
        goto label_4e9ec4;
    }
    ctx->pc = 0x4E9EBCu;
    {
        const bool branch_taken_0x4e9ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9ebc) {
            ctx->pc = 0x4E9EE8u;
            goto label_4e9ee8;
        }
    }
    ctx->pc = 0x4E9EC4u;
label_4e9ec4:
    // 0x4e9ec4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x4e9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_4e9ec8:
    // 0x4e9ec8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_4e9ecc:
    if (ctx->pc == 0x4E9ECCu) {
        ctx->pc = 0x4E9ECCu;
            // 0x4e9ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E9ED0u;
        goto label_4e9ed0;
    }
    ctx->pc = 0x4E9EC8u;
    {
        const bool branch_taken_0x4e9ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e9ec8) {
            ctx->pc = 0x4E9ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9EC8u;
            // 0x4e9ecc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9ED8u;
            goto label_4e9ed8;
        }
    }
    ctx->pc = 0x4E9ED0u;
label_4e9ed0:
    // 0x4e9ed0: 0x100000da  b           . + 4 + (0xDA << 2)
label_4e9ed4:
    if (ctx->pc == 0x4E9ED4u) {
        ctx->pc = 0x4E9ED4u;
            // 0x4e9ed4: 0x92030196  lbu         $v1, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->pc = 0x4E9ED8u;
        goto label_4e9ed8;
    }
    ctx->pc = 0x4E9ED0u;
    {
        const bool branch_taken_0x4e9ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9ED0u;
            // 0x4e9ed4: 0x92030196  lbu         $v1, 0x196($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9ed0) {
            ctx->pc = 0x4EA23Cu;
            goto label_4ea23c;
        }
    }
    ctx->pc = 0x4E9ED8u;
label_4e9ed8:
    // 0x4e9ed8: 0xc13a958  jal         func_4EA560
label_4e9edc:
    if (ctx->pc == 0x4E9EDCu) {
        ctx->pc = 0x4E9EE0u;
        goto label_4e9ee0;
    }
    ctx->pc = 0x4E9ED8u;
    SET_GPR_U32(ctx, 31, 0x4E9EE0u);
    ctx->pc = 0x4EA560u;
    if (runtime->hasFunction(0x4EA560u)) {
        auto targetFn = runtime->lookupFunction(0x4EA560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9EE0u; }
        if (ctx->pc != 0x4E9EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EA560_0x4ea560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E9EE0u; }
        if (ctx->pc != 0x4E9EE0u) { return; }
    }
    ctx->pc = 0x4E9EE0u;
label_4e9ee0:
    // 0x4e9ee0: 0x100000f6  b           . + 4 + (0xF6 << 2)
label_4e9ee4:
    if (ctx->pc == 0x4E9EE4u) {
        ctx->pc = 0x4E9EE4u;
            // 0x4e9ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E9EE8u;
        goto label_4e9ee8;
    }
    ctx->pc = 0x4E9EE0u;
    {
        const bool branch_taken_0x4e9ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9EE0u;
            // 0x4e9ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9ee0) {
            ctx->pc = 0x4EA2BCu;
            goto label_4ea2bc;
        }
    }
    ctx->pc = 0x4E9EE8u;
label_4e9ee8:
    // 0x4e9ee8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e9eec:
    // 0x4e9eec: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9eecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9ef0:
    // 0x4e9ef0: 0x8c42ca60  lw          $v0, -0x35A0($v0)
    ctx->pc = 0x4e9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953568)));
label_4e9ef4:
    // 0x4e9ef4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e9ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9ef8:
    // 0x4e9ef8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e9efc:
    if (ctx->pc == 0x4E9EFCu) {
        ctx->pc = 0x4E9F00u;
        goto label_4e9f00;
    }
    ctx->pc = 0x4E9EF8u;
    {
        const bool branch_taken_0x4e9ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9ef8) {
            ctx->pc = 0x4E9F1Cu;
            goto label_4e9f1c;
        }
    }
    ctx->pc = 0x4E9F00u;
label_4e9f00:
    // 0x4e9f00: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e9f04:
    // 0x4e9f04: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9f04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9f08:
    // 0x4e9f08: 0x8c42ca68  lw          $v0, -0x3598($v0)
    ctx->pc = 0x4e9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953576)));
label_4e9f0c:
    // 0x4e9f0c: 0x401027  not         $v0, $v0
    ctx->pc = 0x4e9f0cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4e9f10:
    // 0x4e9f10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4e9f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4e9f14:
    // 0x4e9f14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9f18:
    // 0x4e9f18: 0xa2020195  sb          $v0, 0x195($s0)
    ctx->pc = 0x4e9f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
label_4e9f1c:
    // 0x4e9f1c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e9f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e9f20:
    // 0x4e9f20: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9f20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9f24:
    // 0x4e9f24: 0x8c42ca70  lw          $v0, -0x3590($v0)
    ctx->pc = 0x4e9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953584)));
label_4e9f28:
    // 0x4e9f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e9f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9f2c:
    // 0x4e9f2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4e9f30:
    if (ctx->pc == 0x4E9F30u) {
        ctx->pc = 0x4E9F34u;
        goto label_4e9f34;
    }
    ctx->pc = 0x4E9F2Cu;
    {
        const bool branch_taken_0x4e9f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9f2c) {
            ctx->pc = 0x4E9F54u;
            goto label_4e9f54;
        }
    }
    ctx->pc = 0x4E9F34u;
label_4e9f34:
    // 0x4e9f34: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e9f38:
    // 0x4e9f38: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9f38u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9f3c:
    // 0x4e9f3c: 0x8c42ca78  lw          $v0, -0x3588($v0)
    ctx->pc = 0x4e9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953592)));
label_4e9f40:
    // 0x4e9f40: 0x401027  not         $v0, $v0
    ctx->pc = 0x4e9f40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4e9f44:
    // 0x4e9f44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4e9f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4e9f48:
    // 0x4e9f48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e9f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e9f4c:
    // 0x4e9f4c: 0x10000006  b           . + 4 + (0x6 << 2)
label_4e9f50:
    if (ctx->pc == 0x4E9F50u) {
        ctx->pc = 0x4E9F50u;
            // 0x4e9f50: 0xa2020195  sb          $v0, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4E9F54u;
        goto label_4e9f54;
    }
    ctx->pc = 0x4E9F4Cu;
    {
        const bool branch_taken_0x4e9f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9F4Cu;
            // 0x4e9f50: 0xa2020195  sb          $v0, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9f4c) {
            ctx->pc = 0x4E9F68u;
            goto label_4e9f68;
        }
    }
    ctx->pc = 0x4E9F54u;
label_4e9f54:
    // 0x4e9f54: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e9f58:
    // 0x4e9f58: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9f58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9f5c:
    // 0x4e9f5c: 0x9042ca80  lbu         $v0, -0x3580($v0)
    ctx->pc = 0x4e9f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294953600)));
label_4e9f60:
    // 0x4e9f60: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4e9f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4e9f64:
    // 0x4e9f64: 0xa2020195  sb          $v0, 0x195($s0)
    ctx->pc = 0x4e9f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
label_4e9f68:
    // 0x4e9f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e9f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9f6c:
    // 0x4e9f6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e9f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9f70:
    // 0x4e9f70: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x4e9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_4e9f74:
    // 0x4e9f74: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x4e9f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
label_4e9f78:
    // 0x4e9f78: 0x80420168  lb          $v0, 0x168($v0)
    ctx->pc = 0x4e9f78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
label_4e9f7c:
    // 0x4e9f7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4e9f80:
    if (ctx->pc == 0x4E9F80u) {
        ctx->pc = 0x4E9F84u;
        goto label_4e9f84;
    }
    ctx->pc = 0x4E9F7Cu;
    {
        const bool branch_taken_0x4e9f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9f7c) {
            ctx->pc = 0x4E9F88u;
            goto label_4e9f88;
        }
    }
    ctx->pc = 0x4E9F84u;
label_4e9f84:
    // 0x4e9f84: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4e9f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4e9f88:
    // 0x4e9f88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4e9f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4e9f8c:
    // 0x4e9f8c: 0x2ca20027  sltiu       $v0, $a1, 0x27
    ctx->pc = 0x4e9f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_4e9f90:
    // 0x4e9f90: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_4e9f94:
    if (ctx->pc == 0x4E9F94u) {
        ctx->pc = 0x4E9F94u;
            // 0x4e9f94: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x4E9F98u;
        goto label_4e9f98;
    }
    ctx->pc = 0x4E9F90u;
    {
        const bool branch_taken_0x4e9f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e9f90) {
            ctx->pc = 0x4E9F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9F90u;
            // 0x4e9f94: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E9F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e9f74;
        }
    }
    ctx->pc = 0x4E9F98u;
label_4e9f98:
    // 0x4e9f98: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4e9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4e9f9c:
    // 0x4e9f9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e9f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9fa0:
    // 0x4e9fa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e9fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e9fa4:
    // 0x4e9fa4: 0x248485a0  addiu       $a0, $a0, -0x7A60
    ctx->pc = 0x4e9fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935968));
label_4e9fa8:
    // 0x4e9fa8: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9fac:
    // 0x4e9fac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4e9facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4e9fb0:
    // 0x4e9fb0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4e9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9fb4:
    // 0x4e9fb4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4e9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4e9fb8:
    // 0x4e9fb8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4e9fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4e9fbc:
    // 0x4e9fbc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4e9fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4e9fc0:
    // 0x4e9fc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4e9fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4e9fc4:
    // 0x4e9fc4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4e9fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4e9fc8:
    // 0x4e9fc8: 0xa0600168  sb          $zero, 0x168($v1)
    ctx->pc = 0x4e9fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 360), (uint8_t)GPR_U32(ctx, 0));
label_4e9fcc:
    // 0x4e9fcc: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9fccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9fd0:
    // 0x4e9fd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4e9fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4e9fd4:
    // 0x4e9fd4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4e9fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4e9fd8:
    // 0x4e9fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e9fdc:
    // 0x4e9fdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4e9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e9fe0:
    // 0x4e9fe0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4e9fe4:
    if (ctx->pc == 0x4E9FE4u) {
        ctx->pc = 0x4E9FE4u;
            // 0x4e9fe4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x4E9FE8u;
        goto label_4e9fe8;
    }
    ctx->pc = 0x4E9FE0u;
    {
        const bool branch_taken_0x4e9fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E9FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E9FE0u;
            // 0x4e9fe4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9fe0) {
            ctx->pc = 0x4E9FA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e9fa8;
        }
    }
    ctx->pc = 0x4E9FE8u;
label_4e9fe8:
    // 0x4e9fe8: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_4e9fec:
    if (ctx->pc == 0x4E9FECu) {
        ctx->pc = 0x4E9FF0u;
        goto label_4e9ff0;
    }
    ctx->pc = 0x4E9FE8u;
    {
        const bool branch_taken_0x4e9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9fe8) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4E9FF0u;
label_4e9ff0:
    // 0x4e9ff0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4e9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4e9ff4:
    // 0x4e9ff4: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4e9ff4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4e9ff8:
    // 0x4e9ff8: 0x8c42ca88  lw          $v0, -0x3578($v0)
    ctx->pc = 0x4e9ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953608)));
label_4e9ffc:
    // 0x4e9ffc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4e9ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ea000:
    // 0x4ea000: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4ea004:
    if (ctx->pc == 0x4EA004u) {
        ctx->pc = 0x4EA008u;
        goto label_4ea008;
    }
    ctx->pc = 0x4EA000u;
    {
        const bool branch_taken_0x4ea000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea000) {
            ctx->pc = 0x4EA024u;
            goto label_4ea024;
        }
    }
    ctx->pc = 0x4EA008u;
label_4ea008:
    // 0x4ea008: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ea008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ea00c:
    // 0x4ea00c: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea00cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea010:
    // 0x4ea010: 0x8c42ca90  lw          $v0, -0x3570($v0)
    ctx->pc = 0x4ea010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953616)));
label_4ea014:
    // 0x4ea014: 0x401027  not         $v0, $v0
    ctx->pc = 0x4ea014u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4ea018:
    // 0x4ea018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ea018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ea01c:
    // 0x4ea01c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ea01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ea020:
    // 0x4ea020: 0xa2020195  sb          $v0, 0x195($s0)
    ctx->pc = 0x4ea020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
label_4ea024:
    // 0x4ea024: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ea024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ea028:
    // 0x4ea028: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea028u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea02c:
    // 0x4ea02c: 0x8c42ca98  lw          $v0, -0x3568($v0)
    ctx->pc = 0x4ea02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953624)));
label_4ea030:
    // 0x4ea030: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ea030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ea034:
    // 0x4ea034: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_4ea038:
    if (ctx->pc == 0x4EA038u) {
        ctx->pc = 0x4EA03Cu;
        goto label_4ea03c;
    }
    ctx->pc = 0x4EA034u;
    {
        const bool branch_taken_0x4ea034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea034) {
            ctx->pc = 0x4EA05Cu;
            goto label_4ea05c;
        }
    }
    ctx->pc = 0x4EA03Cu;
label_4ea03c:
    // 0x4ea03c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ea03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ea040:
    // 0x4ea040: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea044:
    // 0x4ea044: 0x8c42caa0  lw          $v0, -0x3560($v0)
    ctx->pc = 0x4ea044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953632)));
label_4ea048:
    // 0x4ea048: 0x401027  not         $v0, $v0
    ctx->pc = 0x4ea048u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_4ea04c:
    // 0x4ea04c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ea04cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ea050:
    // 0x4ea050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ea050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ea054:
    // 0x4ea054: 0x10000006  b           . + 4 + (0x6 << 2)
label_4ea058:
    if (ctx->pc == 0x4EA058u) {
        ctx->pc = 0x4EA058u;
            // 0x4ea058: 0xa2020195  sb          $v0, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4EA05Cu;
        goto label_4ea05c;
    }
    ctx->pc = 0x4EA054u;
    {
        const bool branch_taken_0x4ea054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA054u;
            // 0x4ea058: 0xa2020195  sb          $v0, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea054) {
            ctx->pc = 0x4EA070u;
            goto label_4ea070;
        }
    }
    ctx->pc = 0x4EA05Cu;
label_4ea05c:
    // 0x4ea05c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ea05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ea060:
    // 0x4ea060: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea060u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea064:
    // 0x4ea064: 0x9042caa8  lbu         $v0, -0x3558($v0)
    ctx->pc = 0x4ea064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294953640)));
label_4ea068:
    // 0x4ea068: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4ea068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ea06c:
    // 0x4ea06c: 0xa2020195  sb          $v0, 0x195($s0)
    ctx->pc = 0x4ea06cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
label_4ea070:
    // 0x4ea070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea074:
    // 0x4ea074: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ea074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ea078:
    // 0x4ea078: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x4ea078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_4ea07c:
    // 0x4ea07c: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x4ea07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
label_4ea080:
    // 0x4ea080: 0x80420168  lb          $v0, 0x168($v0)
    ctx->pc = 0x4ea080u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
label_4ea084:
    // 0x4ea084: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ea088:
    if (ctx->pc == 0x4EA088u) {
        ctx->pc = 0x4EA08Cu;
        goto label_4ea08c;
    }
    ctx->pc = 0x4EA084u;
    {
        const bool branch_taken_0x4ea084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea084) {
            ctx->pc = 0x4EA090u;
            goto label_4ea090;
        }
    }
    ctx->pc = 0x4EA08Cu;
label_4ea08c:
    // 0x4ea08c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4ea08cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4ea090:
    // 0x4ea090: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4ea090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4ea094:
    // 0x4ea094: 0x2ca20027  sltiu       $v0, $a1, 0x27
    ctx->pc = 0x4ea094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_4ea098:
    // 0x4ea098: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_4ea09c:
    if (ctx->pc == 0x4EA09Cu) {
        ctx->pc = 0x4EA09Cu;
            // 0x4ea09c: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x4EA0A0u;
        goto label_4ea0a0;
    }
    ctx->pc = 0x4EA098u;
    {
        const bool branch_taken_0x4ea098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea098) {
            ctx->pc = 0x4EA09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA098u;
            // 0x4ea09c: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA07Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea07c;
        }
    }
    ctx->pc = 0x4EA0A0u;
label_4ea0a0:
    // 0x4ea0a0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4ea0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4ea0a4:
    // 0x4ea0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea0a8:
    // 0x4ea0a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ea0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea0ac:
    // 0x4ea0ac: 0x248485a0  addiu       $a0, $a0, -0x7A60
    ctx->pc = 0x4ea0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935968));
label_4ea0b0:
    // 0x4ea0b0: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea0b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea0b4:
    // 0x4ea0b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4ea0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4ea0b8:
    // 0x4ea0b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4ea0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ea0bc:
    // 0x4ea0bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4ea0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4ea0c0:
    // 0x4ea0c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ea0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ea0c4:
    // 0x4ea0c4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4ea0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4ea0c8:
    // 0x4ea0c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ea0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ea0cc:
    // 0x4ea0cc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4ea0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4ea0d0:
    // 0x4ea0d0: 0xa0600168  sb          $zero, 0x168($v1)
    ctx->pc = 0x4ea0d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 360), (uint8_t)GPR_U32(ctx, 0));
label_4ea0d4:
    // 0x4ea0d4: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea0d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea0d8:
    // 0x4ea0d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4ea0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4ea0dc:
    // 0x4ea0dc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ea0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ea0e0:
    // 0x4ea0e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ea0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ea0e4:
    // 0x4ea0e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ea0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ea0e8:
    // 0x4ea0e8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4ea0ec:
    if (ctx->pc == 0x4EA0ECu) {
        ctx->pc = 0x4EA0ECu;
            // 0x4ea0ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x4EA0F0u;
        goto label_4ea0f0;
    }
    ctx->pc = 0x4EA0E8u;
    {
        const bool branch_taken_0x4ea0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA0E8u;
            // 0x4ea0ec: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea0e8) {
            ctx->pc = 0x4EA0B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea0b0;
        }
    }
    ctx->pc = 0x4EA0F0u;
label_4ea0f0:
    // 0x4ea0f0: 0x10000071  b           . + 4 + (0x71 << 2)
label_4ea0f4:
    if (ctx->pc == 0x4EA0F4u) {
        ctx->pc = 0x4EA0F8u;
        goto label_4ea0f8;
    }
    ctx->pc = 0x4EA0F0u;
    {
        const bool branch_taken_0x4ea0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea0f0) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA0F8u;
label_4ea0f8:
    // 0x4ea0f8: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x4ea0f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4ea0fc:
    // 0x4ea0fc: 0x1020006e  beqz        $at, . + 4 + (0x6E << 2)
label_4ea100:
    if (ctx->pc == 0x4EA100u) {
        ctx->pc = 0x4EA104u;
        goto label_4ea104;
    }
    ctx->pc = 0x4EA0FCu;
    {
        const bool branch_taken_0x4ea0fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea0fc) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA104u;
label_4ea104:
    // 0x4ea104: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4ea108:
    // 0x4ea108: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4ea108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4ea10c:
    // 0x4ea10c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ea10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ea110:
    // 0x4ea110: 0xa4430148  sh          $v1, 0x148($v0)
    ctx->pc = 0x4ea110u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 328), (uint16_t)GPR_U32(ctx, 3));
label_4ea114:
    // 0x4ea114: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x4ea114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea118:
    // 0x4ea118: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ea118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4ea11c:
    // 0x4ea11c: 0x10000066  b           . + 4 + (0x66 << 2)
label_4ea120:
    if (ctx->pc == 0x4EA120u) {
        ctx->pc = 0x4EA120u;
            // 0x4ea120: 0xa2020196  sb          $v0, 0x196($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 406), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4EA124u;
        goto label_4ea124;
    }
    ctx->pc = 0x4EA11Cu;
    {
        const bool branch_taken_0x4ea11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA11Cu;
            // 0x4ea120: 0xa2020196  sb          $v0, 0x196($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 406), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea11c) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA124u;
label_4ea124:
    // 0x4ea124: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4ea124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4ea128:
    // 0x4ea128: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea128u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea12c:
    // 0x4ea12c: 0x8c42cab0  lw          $v0, -0x3550($v0)
    ctx->pc = 0x4ea12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953648)));
label_4ea130:
    // 0x4ea130: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4ea130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4ea134:
    // 0x4ea134: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_4ea138:
    if (ctx->pc == 0x4EA138u) {
        ctx->pc = 0x4EA138u;
            // 0x4ea138: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4EA13Cu;
        goto label_4ea13c;
    }
    ctx->pc = 0x4EA134u;
    {
        const bool branch_taken_0x4ea134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea134) {
            ctx->pc = 0x4EA138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA134u;
            // 0x4ea138: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA144u;
            goto label_4ea144;
        }
    }
    ctx->pc = 0x4EA13Cu;
label_4ea13c:
    // 0x4ea13c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4ea140:
    if (ctx->pc == 0x4EA140u) {
        ctx->pc = 0x4EA140u;
            // 0x4ea140: 0xa2000195  sb          $zero, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4EA144u;
        goto label_4ea144;
    }
    ctx->pc = 0x4EA13Cu;
    {
        const bool branch_taken_0x4ea13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA13Cu;
            // 0x4ea140: 0xa2000195  sb          $zero, 0x195($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea13c) {
            ctx->pc = 0x4EA148u;
            goto label_4ea148;
        }
    }
    ctx->pc = 0x4EA144u;
label_4ea144:
    // 0x4ea144: 0xa2020195  sb          $v0, 0x195($s0)
    ctx->pc = 0x4ea144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 2));
label_4ea148:
    // 0x4ea148: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea14c:
    // 0x4ea14c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ea14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ea150:
    // 0x4ea150: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x4ea150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_4ea154:
    // 0x4ea154: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x4ea154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
label_4ea158:
    // 0x4ea158: 0x80420168  lb          $v0, 0x168($v0)
    ctx->pc = 0x4ea158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 360)));
label_4ea15c:
    // 0x4ea15c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4ea160:
    if (ctx->pc == 0x4EA160u) {
        ctx->pc = 0x4EA164u;
        goto label_4ea164;
    }
    ctx->pc = 0x4EA15Cu;
    {
        const bool branch_taken_0x4ea15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea15c) {
            ctx->pc = 0x4EA168u;
            goto label_4ea168;
        }
    }
    ctx->pc = 0x4EA164u;
label_4ea164:
    // 0x4ea164: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x4ea164u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_4ea168:
    // 0x4ea168: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4ea168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4ea16c:
    // 0x4ea16c: 0x2ca20027  sltiu       $v0, $a1, 0x27
    ctx->pc = 0x4ea16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)39) ? 1 : 0);
label_4ea170:
    // 0x4ea170: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_4ea174:
    if (ctx->pc == 0x4EA174u) {
        ctx->pc = 0x4EA174u;
            // 0x4ea174: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->pc = 0x4EA178u;
        goto label_4ea178;
    }
    ctx->pc = 0x4EA170u;
    {
        const bool branch_taken_0x4ea170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea170) {
            ctx->pc = 0x4EA174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA170u;
            // 0x4ea174: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea154;
        }
    }
    ctx->pc = 0x4EA178u;
label_4ea178:
    // 0x4ea178: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4ea178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4ea17c:
    // 0x4ea17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ea17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea180:
    // 0x4ea180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ea180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea184:
    // 0x4ea184: 0x248485a0  addiu       $a0, $a0, -0x7A60
    ctx->pc = 0x4ea184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935968));
label_4ea188:
    // 0x4ea188: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea188u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea18c:
    // 0x4ea18c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4ea18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4ea190:
    // 0x4ea190: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4ea190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ea194:
    // 0x4ea194: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4ea194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4ea198:
    // 0x4ea198: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ea198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ea19c:
    // 0x4ea19c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x4ea19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4ea1a0:
    // 0x4ea1a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4ea1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ea1a4:
    // 0x4ea1a4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x4ea1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4ea1a8:
    // 0x4ea1a8: 0xa0600168  sb          $zero, 0x168($v1)
    ctx->pc = 0x4ea1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 360), (uint8_t)GPR_U32(ctx, 0));
label_4ea1ac:
    // 0x4ea1ac: 0x92030195  lbu         $v1, 0x195($s0)
    ctx->pc = 0x4ea1acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea1b0:
    // 0x4ea1b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4ea1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4ea1b4:
    // 0x4ea1b4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4ea1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4ea1b8:
    // 0x4ea1b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ea1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ea1bc:
    // 0x4ea1bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ea1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ea1c0:
    // 0x4ea1c0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_4ea1c4:
    if (ctx->pc == 0x4EA1C4u) {
        ctx->pc = 0x4EA1C4u;
            // 0x4ea1c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x4EA1C8u;
        goto label_4ea1c8;
    }
    ctx->pc = 0x4EA1C0u;
    {
        const bool branch_taken_0x4ea1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA1C0u;
            // 0x4ea1c4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea1c0) {
            ctx->pc = 0x4EA188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ea188;
        }
    }
    ctx->pc = 0x4EA1C8u;
label_4ea1c8:
    // 0x4ea1c8: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4ea1cc:
    if (ctx->pc == 0x4EA1CCu) {
        ctx->pc = 0x4EA1D0u;
        goto label_4ea1d0;
    }
    ctx->pc = 0x4EA1C8u;
    {
        const bool branch_taken_0x4ea1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea1c8) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA1D0u;
label_4ea1d0:
    // 0x4ea1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ea1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea1d4:
    // 0x4ea1d4: 0xa202005d  sb          $v0, 0x5D($s0)
    ctx->pc = 0x4ea1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 2));
label_4ea1d8:
    // 0x4ea1d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ea1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea1dc:
    // 0x4ea1dc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ea1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ea1e0:
    // 0x4ea1e0: 0x320f809  jalr        $t9
label_4ea1e4:
    if (ctx->pc == 0x4EA1E4u) {
        ctx->pc = 0x4EA1E4u;
            // 0x4ea1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EA1E8u;
        goto label_4ea1e8;
    }
    ctx->pc = 0x4EA1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EA1E8u);
        ctx->pc = 0x4EA1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA1E0u;
            // 0x4ea1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EA1E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EA1E8u; }
            if (ctx->pc != 0x4EA1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4EA1E8u;
label_4ea1e8:
    // 0x4ea1e8: 0x10000033  b           . + 4 + (0x33 << 2)
label_4ea1ec:
    if (ctx->pc == 0x4EA1ECu) {
        ctx->pc = 0x4EA1F0u;
        goto label_4ea1f0;
    }
    ctx->pc = 0x4EA1E8u;
    {
        const bool branch_taken_0x4ea1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea1e8) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA1F0u;
label_4ea1f0:
    // 0x4ea1f0: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x4ea1f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea1f4:
    // 0x4ea1f4: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
label_4ea1f8:
    if (ctx->pc == 0x4EA1F8u) {
        ctx->pc = 0x4EA1FCu;
        goto label_4ea1fc;
    }
    ctx->pc = 0x4EA1F4u;
    {
        const bool branch_taken_0x4ea1f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4ea1f4) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA1FCu;
label_4ea1fc:
    // 0x4ea1fc: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x4ea1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_4ea200:
    // 0x4ea200: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4ea204:
    if (ctx->pc == 0x4EA204u) {
        ctx->pc = 0x4EA204u;
            // 0x4ea204: 0xa200005d  sb          $zero, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4EA208u;
        goto label_4ea208;
    }
    ctx->pc = 0x4EA200u;
    {
        const bool branch_taken_0x4ea200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea200) {
            ctx->pc = 0x4EA204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA200u;
            // 0x4ea204: 0xa200005d  sb          $zero, 0x5D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA220u;
            goto label_4ea220;
        }
    }
    ctx->pc = 0x4EA208u;
label_4ea208:
    // 0x4ea208: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4ea20c:
    // 0x4ea20c: 0x26050148  addiu       $a1, $s0, 0x148
    ctx->pc = 0x4ea20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4ea210:
    // 0x4ea210: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x4ea210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4ea214:
    // 0x4ea214: 0xc04a508  jal         func_129420
label_4ea218:
    if (ctx->pc == 0x4EA218u) {
        ctx->pc = 0x4EA218u;
            // 0x4ea218: 0x24440410  addiu       $a0, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->pc = 0x4EA21Cu;
        goto label_4ea21c;
    }
    ctx->pc = 0x4EA214u;
    SET_GPR_U32(ctx, 31, 0x4EA21Cu);
    ctx->pc = 0x4EA218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA214u;
            // 0x4ea218: 0x24440410  addiu       $a0, $v0, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA21Cu; }
        if (ctx->pc != 0x4EA21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA21Cu; }
        if (ctx->pc != 0x4EA21Cu) { return; }
    }
    ctx->pc = 0x4EA21Cu;
label_4ea21c:
    // 0x4ea21c: 0xa200005d  sb          $zero, 0x5D($s0)
    ctx->pc = 0x4ea21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 93), (uint8_t)GPR_U32(ctx, 0));
label_4ea220:
    // 0x4ea220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ea220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea224:
    // 0x4ea224: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4ea224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea228:
    // 0x4ea228: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ea228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ea22c:
    // 0x4ea22c: 0x320f809  jalr        $t9
label_4ea230:
    if (ctx->pc == 0x4EA230u) {
        ctx->pc = 0x4EA230u;
            // 0x4ea230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EA234u;
        goto label_4ea234;
    }
    ctx->pc = 0x4EA22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EA234u);
        ctx->pc = 0x4EA230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA22Cu;
            // 0x4ea230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EA234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EA234u; }
            if (ctx->pc != 0x4EA234u) { return; }
        }
        }
    }
    ctx->pc = 0x4EA234u;
label_4ea234:
    // 0x4ea234: 0x10000020  b           . + 4 + (0x20 << 2)
label_4ea238:
    if (ctx->pc == 0x4EA238u) {
        ctx->pc = 0x4EA23Cu;
        goto label_4ea23c;
    }
    ctx->pc = 0x4EA234u;
    {
        const bool branch_taken_0x4ea234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea234) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA23Cu;
label_4ea23c:
    // 0x4ea23c: 0x2c61000a  sltiu       $at, $v1, 0xA
    ctx->pc = 0x4ea23cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4ea240:
    // 0x4ea240: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
label_4ea244:
    if (ctx->pc == 0x4EA244u) {
        ctx->pc = 0x4EA248u;
        goto label_4ea248;
    }
    ctx->pc = 0x4EA240u;
    {
        const bool branch_taken_0x4ea240 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea240) {
            ctx->pc = 0x4EA2B8u;
            goto label_4ea2b8;
        }
    }
    ctx->pc = 0x4EA248u;
label_4ea248:
    // 0x4ea248: 0x92090195  lbu         $t1, 0x195($s0)
    ctx->pc = 0x4ea248u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 405)));
label_4ea24c:
    // 0x4ea24c: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x4ea24cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
label_4ea250:
    // 0x4ea250: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x4ea250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4ea254:
    // 0x4ea254: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ea254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4ea258:
    // 0x4ea258: 0x24e783a0  addiu       $a3, $a3, -0x7C60
    ctx->pc = 0x4ea258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935456));
label_4ea25c:
    // 0x4ea25c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x4ea25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_4ea260:
    // 0x4ea260: 0x94080  sll         $t0, $t1, 2
    ctx->pc = 0x4ea260u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_4ea264:
    // 0x4ea264: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x4ea264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_4ea268:
    // 0x4ea268: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4ea268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4ea26c:
    // 0x4ea26c: 0x27a6004e  addiu       $a2, $sp, 0x4E
    ctx->pc = 0x4ea26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 78));
label_4ea270:
    // 0x4ea270: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x4ea270u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_4ea274:
    // 0x4ea274: 0x1094023  subu        $t0, $t0, $t1
    ctx->pc = 0x4ea274u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4ea278:
    // 0x4ea278: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x4ea278u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4ea27c:
    // 0x4ea27c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4ea27cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_4ea280:
    // 0x4ea280: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x4ea280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4ea284:
    // 0x4ea284: 0x94a50000  lhu         $a1, 0x0($a1)
    ctx->pc = 0x4ea284u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4ea288:
    // 0x4ea288: 0xa4650148  sh          $a1, 0x148($v1)
    ctx->pc = 0x4ea288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 5));
label_4ea28c:
    // 0x4ea28c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ea28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ea290:
    // 0x4ea290: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x4ea290u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea294:
    // 0x4ea294: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x4ea294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4ea298:
    // 0x4ea298: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ea298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4ea29c:
    // 0x4ea29c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4ea29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4ea2a0:
    // 0x4ea2a0: 0x94420148  lhu         $v0, 0x148($v0)
    ctx->pc = 0x4ea2a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 328)));
label_4ea2a4:
    // 0x4ea2a4: 0xc0ee610  jal         func_3B9840
label_4ea2a8:
    if (ctx->pc == 0x4EA2A8u) {
        ctx->pc = 0x4EA2A8u;
            // 0x4ea2a8: 0xa7a2004e  sh          $v0, 0x4E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4EA2ACu;
        goto label_4ea2ac;
    }
    ctx->pc = 0x4EA2A4u;
    SET_GPR_U32(ctx, 31, 0x4EA2ACu);
    ctx->pc = 0x4EA2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA2A4u;
            // 0x4ea2a8: 0xa7a2004e  sh          $v0, 0x4E($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9840u;
    if (runtime->hasFunction(0x3B9840u)) {
        auto targetFn = runtime->lookupFunction(0x3B9840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA2ACu; }
        if (ctx->pc != 0x4EA2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9840_0x3b9840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA2ACu; }
        if (ctx->pc != 0x4EA2ACu) { return; }
    }
    ctx->pc = 0x4EA2ACu;
label_4ea2ac:
    // 0x4ea2ac: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x4ea2acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea2b0:
    // 0x4ea2b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ea2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4ea2b4:
    // 0x4ea2b4: 0xa2020196  sb          $v0, 0x196($s0)
    ctx->pc = 0x4ea2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 406), (uint8_t)GPR_U32(ctx, 2));
label_4ea2b8:
    // 0x4ea2b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ea2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ea2bc:
    // 0x4ea2bc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4ea2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4ea2c0:
    // 0x4ea2c0: 0xa202019d  sb          $v0, 0x19D($s0)
    ctx->pc = 0x4ea2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 2));
label_4ea2c4:
    // 0x4ea2c4: 0xa203019e  sb          $v1, 0x19E($s0)
    ctx->pc = 0x4ea2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 414), (uint8_t)GPR_U32(ctx, 3));
label_4ea2c8:
    // 0x4ea2c8: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x4ea2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_4ea2cc:
    // 0x4ea2cc: 0x82030197  lb          $v1, 0x197($s0)
    ctx->pc = 0x4ea2ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
label_4ea2d0:
    // 0x4ea2d0: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_4ea2d4:
    if (ctx->pc == 0x4EA2D4u) {
        ctx->pc = 0x4EA2D4u;
            // 0x4ea2d4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->pc = 0x4EA2D8u;
        goto label_4ea2d8;
    }
    ctx->pc = 0x4EA2D0u;
    {
        const bool branch_taken_0x4ea2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ea2d0) {
            ctx->pc = 0x4EA2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA2D0u;
            // 0x4ea2d4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA2FCu;
            goto label_4ea2fc;
        }
    }
    ctx->pc = 0x4EA2D8u;
label_4ea2d8:
    // 0x4ea2d8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x4ea2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_4ea2dc:
    // 0x4ea2dc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_4ea2e0:
    if (ctx->pc == 0x4EA2E0u) {
        ctx->pc = 0x4EA2E4u;
        goto label_4ea2e4;
    }
    ctx->pc = 0x4EA2DCu;
    {
        const bool branch_taken_0x4ea2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ea2dc) {
            ctx->pc = 0x4EA2F8u;
            goto label_4ea2f8;
        }
    }
    ctx->pc = 0x4EA2E4u;
label_4ea2e4:
    // 0x4ea2e4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x4ea2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
label_4ea2e8:
    // 0x4ea2e8: 0xc073234  jal         func_1CC8D0
label_4ea2ec:
    if (ctx->pc == 0x4EA2ECu) {
        ctx->pc = 0x4EA2ECu;
            // 0x4ea2ec: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4EA2F0u;
        goto label_4ea2f0;
    }
    ctx->pc = 0x4EA2E8u;
    SET_GPR_U32(ctx, 31, 0x4EA2F0u);
    ctx->pc = 0x4EA2ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA2E8u;
            // 0x4ea2ec: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA2F0u; }
        if (ctx->pc != 0x4EA2F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA2F0u; }
        if (ctx->pc != 0x4EA2F0u) { return; }
    }
    ctx->pc = 0x4EA2F0u;
label_4ea2f0:
    // 0x4ea2f0: 0x10000028  b           . + 4 + (0x28 << 2)
label_4ea2f4:
    if (ctx->pc == 0x4EA2F4u) {
        ctx->pc = 0x4EA2F4u;
            // 0x4ea2f4: 0x8202019e  lb          $v0, 0x19E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 414)));
        ctx->pc = 0x4EA2F8u;
        goto label_4ea2f8;
    }
    ctx->pc = 0x4EA2F0u;
    {
        const bool branch_taken_0x4ea2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA2F0u;
            // 0x4ea2f4: 0x8202019e  lb          $v0, 0x19E($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 414)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea2f0) {
            ctx->pc = 0x4EA394u;
            goto label_4ea394;
        }
    }
    ctx->pc = 0x4EA2F8u;
label_4ea2f8:
    // 0x4ea2f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4ea2fc:
    // 0x4ea2fc: 0xc073234  jal         func_1CC8D0
label_4ea300:
    if (ctx->pc == 0x4EA300u) {
        ctx->pc = 0x4EA300u;
            // 0x4ea300: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4EA304u;
        goto label_4ea304;
    }
    ctx->pc = 0x4EA2FCu;
    SET_GPR_U32(ctx, 31, 0x4EA304u);
    ctx->pc = 0x4EA300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA2FCu;
            // 0x4ea300: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA304u; }
        if (ctx->pc != 0x4EA304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA304u; }
        if (ctx->pc != 0x4EA304u) { return; }
    }
    ctx->pc = 0x4EA304u;
label_4ea304:
    // 0x4ea304: 0x10000022  b           . + 4 + (0x22 << 2)
label_4ea308:
    if (ctx->pc == 0x4EA308u) {
        ctx->pc = 0x4EA30Cu;
        goto label_4ea30c;
    }
    ctx->pc = 0x4EA304u;
    {
        const bool branch_taken_0x4ea304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea304) {
            ctx->pc = 0x4EA390u;
            goto label_4ea390;
        }
    }
    ctx->pc = 0x4EA30Cu;
label_4ea30c:
    // 0x4ea30c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4ea310:
    if (ctx->pc == 0x4EA310u) {
        ctx->pc = 0x4EA314u;
        goto label_4ea314;
    }
    ctx->pc = 0x4EA30Cu;
    {
        const bool branch_taken_0x4ea30c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea30c) {
            ctx->pc = 0x4EA390u;
            goto label_4ea390;
        }
    }
    ctx->pc = 0x4EA314u;
label_4ea314:
    // 0x4ea314: 0xc13a958  jal         func_4EA560
label_4ea318:
    if (ctx->pc == 0x4EA318u) {
        ctx->pc = 0x4EA318u;
            // 0x4ea318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4EA31Cu;
        goto label_4ea31c;
    }
    ctx->pc = 0x4EA314u;
    SET_GPR_U32(ctx, 31, 0x4EA31Cu);
    ctx->pc = 0x4EA318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA314u;
            // 0x4ea318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EA560u;
    if (runtime->hasFunction(0x4EA560u)) {
        auto targetFn = runtime->lookupFunction(0x4EA560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA31Cu; }
        if (ctx->pc != 0x4EA31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EA560_0x4ea560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA31Cu; }
        if (ctx->pc != 0x4EA31Cu) { return; }
    }
    ctx->pc = 0x4EA31Cu;
label_4ea31c:
    // 0x4ea31c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4ea31cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_4ea320:
    // 0x4ea320: 0xc073234  jal         func_1CC8D0
label_4ea324:
    if (ctx->pc == 0x4EA324u) {
        ctx->pc = 0x4EA324u;
            // 0x4ea324: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x4EA328u;
        goto label_4ea328;
    }
    ctx->pc = 0x4EA320u;
    SET_GPR_U32(ctx, 31, 0x4EA328u);
    ctx->pc = 0x4EA324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA320u;
            // 0x4ea324: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA328u; }
        if (ctx->pc != 0x4EA328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA328u; }
        if (ctx->pc != 0x4EA328u) { return; }
    }
    ctx->pc = 0x4EA328u;
label_4ea328:
    // 0x4ea328: 0x92020196  lbu         $v0, 0x196($s0)
    ctx->pc = 0x4ea328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 406)));
label_4ea32c:
    // 0x4ea32c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_4ea330:
    if (ctx->pc == 0x4EA330u) {
        ctx->pc = 0x4EA334u;
        goto label_4ea334;
    }
    ctx->pc = 0x4EA32Cu;
    {
        const bool branch_taken_0x4ea32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea32c) {
            ctx->pc = 0x4EA390u;
            goto label_4ea390;
        }
    }
    ctx->pc = 0x4EA334u;
label_4ea334:
    // 0x4ea334: 0x82030197  lb          $v1, 0x197($s0)
    ctx->pc = 0x4ea334u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
label_4ea338:
    // 0x4ea338: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x4ea338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4ea33c:
    // 0x4ea33c: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_4ea340:
    if (ctx->pc == 0x4EA340u) {
        ctx->pc = 0x4EA344u;
        goto label_4ea344;
    }
    ctx->pc = 0x4EA33Cu;
    {
        const bool branch_taken_0x4ea33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ea33c) {
            ctx->pc = 0x4EA390u;
            goto label_4ea390;
        }
    }
    ctx->pc = 0x4EA344u;
label_4ea344:
    // 0x4ea344: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4ea344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4ea348:
    // 0x4ea348: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4ea348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4ea34c:
    // 0x4ea34c: 0xa203019a  sb          $v1, 0x19A($s0)
    ctx->pc = 0x4ea34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 410), (uint8_t)GPR_U32(ctx, 3));
label_4ea350:
    // 0x4ea350: 0x24428580  addiu       $v0, $v0, -0x7A80
    ctx->pc = 0x4ea350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935936));
label_4ea354:
    // 0x4ea354: 0xa2000199  sb          $zero, 0x199($s0)
    ctx->pc = 0x4ea354u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 409), (uint8_t)GPR_U32(ctx, 0));
label_4ea358:
    // 0x4ea358: 0xa200019b  sb          $zero, 0x19B($s0)
    ctx->pc = 0x4ea358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 411), (uint8_t)GPR_U32(ctx, 0));
label_4ea35c:
    // 0x4ea35c: 0x82030197  lb          $v1, 0x197($s0)
    ctx->pc = 0x4ea35cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 407)));
label_4ea360:
    // 0x4ea360: 0xa2030198  sb          $v1, 0x198($s0)
    ctx->pc = 0x4ea360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 408), (uint8_t)GPR_U32(ctx, 3));
label_4ea364:
    // 0x4ea364: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x4ea364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
label_4ea368:
    // 0x4ea368: 0xa200019d  sb          $zero, 0x19D($s0)
    ctx->pc = 0x4ea368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 0));
label_4ea36c:
    // 0x4ea36c: 0xa200019e  sb          $zero, 0x19E($s0)
    ctx->pc = 0x4ea36cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 414), (uint8_t)GPR_U32(ctx, 0));
label_4ea370:
    // 0x4ea370: 0x8204019a  lb          $a0, 0x19A($s0)
    ctx->pc = 0x4ea370u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 410)));
label_4ea374:
    // 0x4ea374: 0x82030199  lb          $v1, 0x199($s0)
    ctx->pc = 0x4ea374u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 409)));
label_4ea378:
    // 0x4ea378: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4ea378u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4ea37c:
    // 0x4ea37c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4ea37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4ea380:
    // 0x4ea380: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4ea380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ea384:
    // 0x4ea384: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4ea384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4ea388:
    // 0x4ea388: 0xa2020197  sb          $v0, 0x197($s0)
    ctx->pc = 0x4ea388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 407), (uint8_t)GPR_U32(ctx, 2));
label_4ea38c:
    // 0x4ea38c: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x4ea38cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
label_4ea390:
    // 0x4ea390: 0x8202019e  lb          $v0, 0x19E($s0)
    ctx->pc = 0x4ea390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 414)));
label_4ea394:
    // 0x4ea394: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_4ea398:
    if (ctx->pc == 0x4EA398u) {
        ctx->pc = 0x4EA398u;
            // 0x4ea398: 0x920201a1  lbu         $v0, 0x1A1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 417)));
        ctx->pc = 0x4EA39Cu;
        goto label_4ea39c;
    }
    ctx->pc = 0x4EA394u;
    {
        const bool branch_taken_0x4ea394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea394) {
            ctx->pc = 0x4EA398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA394u;
            // 0x4ea398: 0x920201a1  lbu         $v0, 0x1A1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 417)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA3D8u;
            goto label_4ea3d8;
        }
    }
    ctx->pc = 0x4EA39Cu;
label_4ea39c:
    // 0x4ea39c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ea39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ea3a0:
    // 0x4ea3a0: 0xa202019e  sb          $v0, 0x19E($s0)
    ctx->pc = 0x4ea3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 414), (uint8_t)GPR_U32(ctx, 2));
label_4ea3a4:
    // 0x4ea3a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x4ea3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_4ea3a8:
    // 0x4ea3a8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4ea3a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4ea3ac:
    // 0x4ea3ac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_4ea3b0:
    if (ctx->pc == 0x4EA3B0u) {
        ctx->pc = 0x4EA3B4u;
        goto label_4ea3b4;
    }
    ctx->pc = 0x4EA3ACu;
    {
        const bool branch_taken_0x4ea3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ea3ac) {
            ctx->pc = 0x4EA3D4u;
            goto label_4ea3d4;
        }
    }
    ctx->pc = 0x4EA3B4u;
label_4ea3b4:
    // 0x4ea3b4: 0x8202019d  lb          $v0, 0x19D($s0)
    ctx->pc = 0x4ea3b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 413)));
label_4ea3b8:
    // 0x4ea3b8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4ea3b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4ea3bc:
    // 0x4ea3bc: 0x50200005  beql        $at, $zero, . + 4 + (0x5 << 2)
label_4ea3c0:
    if (ctx->pc == 0x4EA3C0u) {
        ctx->pc = 0x4EA3C0u;
            // 0x4ea3c0: 0xa200019d  sb          $zero, 0x19D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4EA3C4u;
        goto label_4ea3c4;
    }
    ctx->pc = 0x4EA3BCu;
    {
        const bool branch_taken_0x4ea3bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea3bc) {
            ctx->pc = 0x4EA3C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA3BCu;
            // 0x4ea3c0: 0xa200019d  sb          $zero, 0x19D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA3D4u;
            goto label_4ea3d4;
        }
    }
    ctx->pc = 0x4EA3C4u;
label_4ea3c4:
    // 0x4ea3c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4ea3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4ea3c8:
    // 0x4ea3c8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4ea3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4ea3cc:
    // 0x4ea3cc: 0xa203019d  sb          $v1, 0x19D($s0)
    ctx->pc = 0x4ea3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 413), (uint8_t)GPR_U32(ctx, 3));
label_4ea3d0:
    // 0x4ea3d0: 0xa202019e  sb          $v0, 0x19E($s0)
    ctx->pc = 0x4ea3d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 414), (uint8_t)GPR_U32(ctx, 2));
label_4ea3d4:
    // 0x4ea3d4: 0x920201a1  lbu         $v0, 0x1A1($s0)
    ctx->pc = 0x4ea3d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 417)));
label_4ea3d8:
    // 0x4ea3d8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4ea3dc:
    if (ctx->pc == 0x4EA3DCu) {
        ctx->pc = 0x4EA3DCu;
            // 0x4ea3dc: 0xc6010134  lwc1        $f1, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4EA3E0u;
        goto label_4ea3e0;
    }
    ctx->pc = 0x4EA3D8u;
    {
        const bool branch_taken_0x4ea3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea3d8) {
            ctx->pc = 0x4EA3DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA3D8u;
            // 0x4ea3dc: 0xc6010134  lwc1        $f1, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA414u;
            goto label_4ea414;
        }
    }
    ctx->pc = 0x4EA3E0u;
label_4ea3e0:
    // 0x4ea3e0: 0x820201a0  lb          $v0, 0x1A0($s0)
    ctx->pc = 0x4ea3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 416)));
label_4ea3e4:
    // 0x4ea3e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4ea3e8:
    if (ctx->pc == 0x4EA3E8u) {
        ctx->pc = 0x4EA3E8u;
            // 0x4ea3e8: 0x920401a2  lbu         $a0, 0x1A2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
        ctx->pc = 0x4EA3ECu;
        goto label_4ea3ec;
    }
    ctx->pc = 0x4EA3E4u;
    {
        const bool branch_taken_0x4ea3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea3e4) {
            ctx->pc = 0x4EA3E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA3E4u;
            // 0x4ea3e8: 0x920401a2  lbu         $a0, 0x1A2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA3F8u;
            goto label_4ea3f8;
        }
    }
    ctx->pc = 0x4EA3ECu;
label_4ea3ec:
    // 0x4ea3ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4ea3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4ea3f0:
    // 0x4ea3f0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ea3f4:
    if (ctx->pc == 0x4EA3F4u) {
        ctx->pc = 0x4EA3F4u;
            // 0x4ea3f4: 0xa20201a0  sb          $v0, 0x1A0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 416), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4EA3F8u;
        goto label_4ea3f8;
    }
    ctx->pc = 0x4EA3F0u;
    {
        const bool branch_taken_0x4ea3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA3F0u;
            // 0x4ea3f4: 0xa20201a0  sb          $v0, 0x1A0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 416), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea3f0) {
            ctx->pc = 0x4EA410u;
            goto label_4ea410;
        }
    }
    ctx->pc = 0x4EA3F8u;
label_4ea3f8:
    // 0x4ea3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4ea3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ea3fc:
    // 0x4ea3fc: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x4ea3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_4ea400:
    // 0x4ea400: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4ea400u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ea404:
    // 0x4ea404: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x4ea404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4ea408:
    // 0x4ea408: 0xa20301a2  sb          $v1, 0x1A2($s0)
    ctx->pc = 0x4ea408u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 418), (uint8_t)GPR_U32(ctx, 3));
label_4ea40c:
    // 0x4ea40c: 0xa20201a0  sb          $v0, 0x1A0($s0)
    ctx->pc = 0x4ea40cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 416), (uint8_t)GPR_U32(ctx, 2));
label_4ea410:
    // 0x4ea410: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x4ea410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ea414:
    // 0x4ea414: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4ea414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4ea418:
    // 0x4ea418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ea418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ea41c:
    // 0x4ea41c: 0x0  nop
    ctx->pc = 0x4ea41cu;
    // NOP
label_4ea420:
    // 0x4ea420: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ea420u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ea424:
    // 0x4ea424: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_4ea428:
    if (ctx->pc == 0x4EA428u) {
        ctx->pc = 0x4EA428u;
            // 0x4ea428: 0xc6010134  lwc1        $f1, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4EA42Cu;
        goto label_4ea42c;
    }
    ctx->pc = 0x4EA424u;
    {
        const bool branch_taken_0x4ea424 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ea424) {
            ctx->pc = 0x4EA428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA424u;
            // 0x4ea428: 0xc6010134  lwc1        $f1, 0x134($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA448u;
            goto label_4ea448;
        }
    }
    ctx->pc = 0x4EA42Cu;
label_4ea42c:
    // 0x4ea42c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4ea42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4ea430:
    // 0x4ea430: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4ea430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4ea434:
    // 0x4ea434: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ea434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ea438:
    // 0x4ea438: 0x0  nop
    ctx->pc = 0x4ea438u;
    // NOP
label_4ea43c:
    // 0x4ea43c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4ea43cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4ea440:
    // 0x4ea440: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x4ea440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_4ea444:
    // 0x4ea444: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x4ea444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ea448:
    // 0x4ea448: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x4ea448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_4ea44c:
    // 0x4ea44c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ea44cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ea450:
    // 0x4ea450: 0x0  nop
    ctx->pc = 0x4ea450u;
    // NOP
label_4ea454:
    // 0x4ea454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4ea454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ea458:
    // 0x4ea458: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_4ea45c:
    if (ctx->pc == 0x4EA45Cu) {
        ctx->pc = 0x4EA45Cu;
            // 0x4ea45c: 0xc600013c  lwc1        $f0, 0x13C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x4EA460u;
        goto label_4ea460;
    }
    ctx->pc = 0x4EA458u;
    {
        const bool branch_taken_0x4ea458 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4ea458) {
            ctx->pc = 0x4EA45Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA458u;
            // 0x4ea45c: 0xc600013c  lwc1        $f0, 0x13C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4EA468u;
            goto label_4ea468;
        }
    }
    ctx->pc = 0x4EA460u;
label_4ea460:
    // 0x4ea460: 0xe6000134  swc1        $f0, 0x134($s0)
    ctx->pc = 0x4ea460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
label_4ea464:
    // 0x4ea464: 0xc600013c  lwc1        $f0, 0x13C($s0)
    ctx->pc = 0x4ea464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ea468:
    // 0x4ea468: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ea468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ea46c:
    // 0x4ea46c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x4ea46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4ea470:
    // 0x4ea470: 0x2605011c  addiu       $a1, $s0, 0x11C
    ctx->pc = 0x4ea470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 284));
label_4ea474:
    // 0x4ea474: 0x26060148  addiu       $a2, $s0, 0x148
    ctx->pc = 0x4ea474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
label_4ea478:
    // 0x4ea478: 0x26070110  addiu       $a3, $s0, 0x110
    ctx->pc = 0x4ea478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_4ea47c:
    // 0x4ea47c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ea47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ea480:
    // 0x4ea480: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4ea480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ea484:
    // 0x4ea484: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ea484u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea488:
    // 0x4ea488: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ea488u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea48c:
    // 0x4ea48c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x4ea48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4ea490:
    // 0x4ea490: 0x8c520e68  lw          $s2, 0xE68($v0)
    ctx->pc = 0x4ea490u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3688)));
label_4ea494:
    // 0x4ea494: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x4ea494u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4ea498:
    // 0x4ea498: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ea498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea49c:
    // 0x4ea49c: 0xc0ee43c  jal         func_3B90F0
label_4ea4a0:
    if (ctx->pc == 0x4EA4A0u) {
        ctx->pc = 0x4EA4A0u;
            // 0x4ea4a0: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x4EA4A4u;
        goto label_4ea4a4;
    }
    ctx->pc = 0x4EA49Cu;
    SET_GPR_U32(ctx, 31, 0x4EA4A4u);
    ctx->pc = 0x4EA4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA49Cu;
            // 0x4ea4a0: 0xae430010  sw          $v1, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B90F0u;
    if (runtime->hasFunction(0x3B90F0u)) {
        auto targetFn = runtime->lookupFunction(0x3B90F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA4A4u; }
        if (ctx->pc != 0x4EA4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B90F0_0x3b90f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA4A4u; }
        if (ctx->pc != 0x4EA4A4u) { return; }
    }
    ctx->pc = 0x4EA4A4u;
label_4ea4a4:
    // 0x4ea4a4: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x4ea4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_4ea4a8:
    // 0x4ea4a8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4ea4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4ea4ac:
    // 0x4ea4ac: 0xc6020124  lwc1        $f2, 0x124($s0)
    ctx->pc = 0x4ea4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ea4b0:
    // 0x4ea4b0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4ea4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ea4b4:
    // 0x4ea4b4: 0xc6010110  lwc1        $f1, 0x110($s0)
    ctx->pc = 0x4ea4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ea4b8:
    // 0x4ea4b8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x4ea4b8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
label_4ea4bc:
    // 0x4ea4bc: 0x46020881  sub.s       $f2, $f1, $f2
    ctx->pc = 0x4ea4bcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4ea4c0:
    // 0x4ea4c0: 0xe6020110  swc1        $f2, 0x110($s0)
    ctx->pc = 0x4ea4c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
label_4ea4c4:
    // 0x4ea4c4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4ea4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ea4c8:
    // 0x4ea4c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ea4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ea4cc:
    // 0x4ea4cc: 0x0  nop
    ctx->pc = 0x4ea4ccu;
    // NOP
label_4ea4d0:
    // 0x4ea4d0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4ea4d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4ea4d4:
    // 0x4ea4d4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ea4d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_4ea4d8:
    // 0x4ea4d8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4ea4d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4ea4dc:
    // 0x4ea4dc: 0x0  nop
    ctx->pc = 0x4ea4dcu;
    // NOP
label_4ea4e0:
    // 0x4ea4e0: 0xae040138  sw          $a0, 0x138($s0)
    ctx->pc = 0x4ea4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 4));
label_4ea4e4:
    // 0x4ea4e4: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x4ea4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ea4e8:
    // 0x4ea4e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ea4e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ea4ec:
    // 0x4ea4ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4ea4f0:
    if (ctx->pc == 0x4EA4F0u) {
        ctx->pc = 0x4EA4F0u;
            // 0x4ea4f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4EA4F4u;
        goto label_4ea4f4;
    }
    ctx->pc = 0x4EA4ECu;
    {
        const bool branch_taken_0x4ea4ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EA4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA4ECu;
            // 0x4ea4f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea4ec) {
            ctx->pc = 0x4EA4F8u;
            goto label_4ea4f8;
        }
    }
    ctx->pc = 0x4EA4F4u;
label_4ea4f4:
    // 0x4ea4f4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4ea4f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ea4f8:
    // 0x4ea4f8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x4ea4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4ea4fc:
    // 0x4ea4fc: 0x8e030138  lw          $v1, 0x138($s0)
    ctx->pc = 0x4ea4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
label_4ea500:
    // 0x4ea500: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x4ea500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4ea504:
    // 0x4ea504: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4ea504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4ea508:
    // 0x4ea508: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ea508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4ea50c:
    // 0x4ea50c: 0x1000000d  b           . + 4 + (0xD << 2)
label_4ea510:
    if (ctx->pc == 0x4EA510u) {
        ctx->pc = 0x4EA510u;
            // 0x4ea510: 0xae030138  sw          $v1, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
        ctx->pc = 0x4EA514u;
        goto label_4ea514;
    }
    ctx->pc = 0x4EA50Cu;
    {
        const bool branch_taken_0x4ea50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA50Cu;
            // 0x4ea510: 0xae030138  sw          $v1, 0x138($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea50c) {
            ctx->pc = 0x4EA544u;
            goto label_4ea544;
        }
    }
    ctx->pc = 0x4EA514u;
label_4ea514:
    // 0x4ea514: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_4ea518:
    if (ctx->pc == 0x4EA518u) {
        ctx->pc = 0x4EA51Cu;
        goto label_4ea51c;
    }
    ctx->pc = 0x4EA514u;
    {
        const bool branch_taken_0x4ea514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea514) {
            ctx->pc = 0x4EA544u;
            goto label_4ea544;
        }
    }
    ctx->pc = 0x4EA51Cu;
label_4ea51c:
    // 0x4ea51c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ea51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ea520:
    // 0x4ea520: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ea520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ea524:
    // 0x4ea524: 0x320f809  jalr        $t9
label_4ea528:
    if (ctx->pc == 0x4EA528u) {
        ctx->pc = 0x4EA52Cu;
        goto label_4ea52c;
    }
    ctx->pc = 0x4EA524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4EA52Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4EA52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4EA52Cu; }
            if (ctx->pc != 0x4EA52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4EA52Cu;
label_4ea52c:
    // 0x4ea52c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4ea530:
    if (ctx->pc == 0x4EA530u) {
        ctx->pc = 0x4EA534u;
        goto label_4ea534;
    }
    ctx->pc = 0x4EA52Cu;
    {
        const bool branch_taken_0x4ea52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ea52c) {
            ctx->pc = 0x4EA544u;
            goto label_4ea544;
        }
    }
    ctx->pc = 0x4EA534u;
label_4ea534:
    // 0x4ea534: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4ea534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4ea538:
    // 0x4ea538: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4ea538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4ea53c:
    // 0x4ea53c: 0xc057b78  jal         func_15EDE0
label_4ea540:
    if (ctx->pc == 0x4EA540u) {
        ctx->pc = 0x4EA540u;
            // 0x4ea540: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4EA544u;
        goto label_4ea544;
    }
    ctx->pc = 0x4EA53Cu;
    SET_GPR_U32(ctx, 31, 0x4EA544u);
    ctx->pc = 0x4EA540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA53Cu;
            // 0x4ea540: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDE0u;
    if (runtime->hasFunction(0x15EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA544u; }
        if (ctx->pc != 0x4EA544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDE0_0x15ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4EA544u; }
        if (ctx->pc != 0x4EA544u) { return; }
    }
    ctx->pc = 0x4EA544u;
label_4ea544:
    // 0x4ea544: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4ea544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea548:
    // 0x4ea548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ea548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea54c:
    // 0x4ea54c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ea54cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea550:
    // 0x4ea550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ea550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea554:
    // 0x4ea554: 0x3e00008  jr          $ra
label_4ea558:
    if (ctx->pc == 0x4EA558u) {
        ctx->pc = 0x4EA558u;
            // 0x4ea558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4EA55Cu;
        goto label_4ea55c;
    }
    ctx->pc = 0x4EA554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EA554u;
            // 0x4ea558: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EA55Cu;
label_4ea55c:
    // 0x4ea55c: 0x0  nop
    ctx->pc = 0x4ea55cu;
    // NOP
}
