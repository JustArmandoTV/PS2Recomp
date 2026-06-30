#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B9010
// Address: 0x4b9010 - 0x4b9820
void sub_004B9010_0x4b9010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9010_0x4b9010");
#endif

    switch (ctx->pc) {
        case 0x4b9010u: goto label_4b9010;
        case 0x4b9014u: goto label_4b9014;
        case 0x4b9018u: goto label_4b9018;
        case 0x4b901cu: goto label_4b901c;
        case 0x4b9020u: goto label_4b9020;
        case 0x4b9024u: goto label_4b9024;
        case 0x4b9028u: goto label_4b9028;
        case 0x4b902cu: goto label_4b902c;
        case 0x4b9030u: goto label_4b9030;
        case 0x4b9034u: goto label_4b9034;
        case 0x4b9038u: goto label_4b9038;
        case 0x4b903cu: goto label_4b903c;
        case 0x4b9040u: goto label_4b9040;
        case 0x4b9044u: goto label_4b9044;
        case 0x4b9048u: goto label_4b9048;
        case 0x4b904cu: goto label_4b904c;
        case 0x4b9050u: goto label_4b9050;
        case 0x4b9054u: goto label_4b9054;
        case 0x4b9058u: goto label_4b9058;
        case 0x4b905cu: goto label_4b905c;
        case 0x4b9060u: goto label_4b9060;
        case 0x4b9064u: goto label_4b9064;
        case 0x4b9068u: goto label_4b9068;
        case 0x4b906cu: goto label_4b906c;
        case 0x4b9070u: goto label_4b9070;
        case 0x4b9074u: goto label_4b9074;
        case 0x4b9078u: goto label_4b9078;
        case 0x4b907cu: goto label_4b907c;
        case 0x4b9080u: goto label_4b9080;
        case 0x4b9084u: goto label_4b9084;
        case 0x4b9088u: goto label_4b9088;
        case 0x4b908cu: goto label_4b908c;
        case 0x4b9090u: goto label_4b9090;
        case 0x4b9094u: goto label_4b9094;
        case 0x4b9098u: goto label_4b9098;
        case 0x4b909cu: goto label_4b909c;
        case 0x4b90a0u: goto label_4b90a0;
        case 0x4b90a4u: goto label_4b90a4;
        case 0x4b90a8u: goto label_4b90a8;
        case 0x4b90acu: goto label_4b90ac;
        case 0x4b90b0u: goto label_4b90b0;
        case 0x4b90b4u: goto label_4b90b4;
        case 0x4b90b8u: goto label_4b90b8;
        case 0x4b90bcu: goto label_4b90bc;
        case 0x4b90c0u: goto label_4b90c0;
        case 0x4b90c4u: goto label_4b90c4;
        case 0x4b90c8u: goto label_4b90c8;
        case 0x4b90ccu: goto label_4b90cc;
        case 0x4b90d0u: goto label_4b90d0;
        case 0x4b90d4u: goto label_4b90d4;
        case 0x4b90d8u: goto label_4b90d8;
        case 0x4b90dcu: goto label_4b90dc;
        case 0x4b90e0u: goto label_4b90e0;
        case 0x4b90e4u: goto label_4b90e4;
        case 0x4b90e8u: goto label_4b90e8;
        case 0x4b90ecu: goto label_4b90ec;
        case 0x4b90f0u: goto label_4b90f0;
        case 0x4b90f4u: goto label_4b90f4;
        case 0x4b90f8u: goto label_4b90f8;
        case 0x4b90fcu: goto label_4b90fc;
        case 0x4b9100u: goto label_4b9100;
        case 0x4b9104u: goto label_4b9104;
        case 0x4b9108u: goto label_4b9108;
        case 0x4b910cu: goto label_4b910c;
        case 0x4b9110u: goto label_4b9110;
        case 0x4b9114u: goto label_4b9114;
        case 0x4b9118u: goto label_4b9118;
        case 0x4b911cu: goto label_4b911c;
        case 0x4b9120u: goto label_4b9120;
        case 0x4b9124u: goto label_4b9124;
        case 0x4b9128u: goto label_4b9128;
        case 0x4b912cu: goto label_4b912c;
        case 0x4b9130u: goto label_4b9130;
        case 0x4b9134u: goto label_4b9134;
        case 0x4b9138u: goto label_4b9138;
        case 0x4b913cu: goto label_4b913c;
        case 0x4b9140u: goto label_4b9140;
        case 0x4b9144u: goto label_4b9144;
        case 0x4b9148u: goto label_4b9148;
        case 0x4b914cu: goto label_4b914c;
        case 0x4b9150u: goto label_4b9150;
        case 0x4b9154u: goto label_4b9154;
        case 0x4b9158u: goto label_4b9158;
        case 0x4b915cu: goto label_4b915c;
        case 0x4b9160u: goto label_4b9160;
        case 0x4b9164u: goto label_4b9164;
        case 0x4b9168u: goto label_4b9168;
        case 0x4b916cu: goto label_4b916c;
        case 0x4b9170u: goto label_4b9170;
        case 0x4b9174u: goto label_4b9174;
        case 0x4b9178u: goto label_4b9178;
        case 0x4b917cu: goto label_4b917c;
        case 0x4b9180u: goto label_4b9180;
        case 0x4b9184u: goto label_4b9184;
        case 0x4b9188u: goto label_4b9188;
        case 0x4b918cu: goto label_4b918c;
        case 0x4b9190u: goto label_4b9190;
        case 0x4b9194u: goto label_4b9194;
        case 0x4b9198u: goto label_4b9198;
        case 0x4b919cu: goto label_4b919c;
        case 0x4b91a0u: goto label_4b91a0;
        case 0x4b91a4u: goto label_4b91a4;
        case 0x4b91a8u: goto label_4b91a8;
        case 0x4b91acu: goto label_4b91ac;
        case 0x4b91b0u: goto label_4b91b0;
        case 0x4b91b4u: goto label_4b91b4;
        case 0x4b91b8u: goto label_4b91b8;
        case 0x4b91bcu: goto label_4b91bc;
        case 0x4b91c0u: goto label_4b91c0;
        case 0x4b91c4u: goto label_4b91c4;
        case 0x4b91c8u: goto label_4b91c8;
        case 0x4b91ccu: goto label_4b91cc;
        case 0x4b91d0u: goto label_4b91d0;
        case 0x4b91d4u: goto label_4b91d4;
        case 0x4b91d8u: goto label_4b91d8;
        case 0x4b91dcu: goto label_4b91dc;
        case 0x4b91e0u: goto label_4b91e0;
        case 0x4b91e4u: goto label_4b91e4;
        case 0x4b91e8u: goto label_4b91e8;
        case 0x4b91ecu: goto label_4b91ec;
        case 0x4b91f0u: goto label_4b91f0;
        case 0x4b91f4u: goto label_4b91f4;
        case 0x4b91f8u: goto label_4b91f8;
        case 0x4b91fcu: goto label_4b91fc;
        case 0x4b9200u: goto label_4b9200;
        case 0x4b9204u: goto label_4b9204;
        case 0x4b9208u: goto label_4b9208;
        case 0x4b920cu: goto label_4b920c;
        case 0x4b9210u: goto label_4b9210;
        case 0x4b9214u: goto label_4b9214;
        case 0x4b9218u: goto label_4b9218;
        case 0x4b921cu: goto label_4b921c;
        case 0x4b9220u: goto label_4b9220;
        case 0x4b9224u: goto label_4b9224;
        case 0x4b9228u: goto label_4b9228;
        case 0x4b922cu: goto label_4b922c;
        case 0x4b9230u: goto label_4b9230;
        case 0x4b9234u: goto label_4b9234;
        case 0x4b9238u: goto label_4b9238;
        case 0x4b923cu: goto label_4b923c;
        case 0x4b9240u: goto label_4b9240;
        case 0x4b9244u: goto label_4b9244;
        case 0x4b9248u: goto label_4b9248;
        case 0x4b924cu: goto label_4b924c;
        case 0x4b9250u: goto label_4b9250;
        case 0x4b9254u: goto label_4b9254;
        case 0x4b9258u: goto label_4b9258;
        case 0x4b925cu: goto label_4b925c;
        case 0x4b9260u: goto label_4b9260;
        case 0x4b9264u: goto label_4b9264;
        case 0x4b9268u: goto label_4b9268;
        case 0x4b926cu: goto label_4b926c;
        case 0x4b9270u: goto label_4b9270;
        case 0x4b9274u: goto label_4b9274;
        case 0x4b9278u: goto label_4b9278;
        case 0x4b927cu: goto label_4b927c;
        case 0x4b9280u: goto label_4b9280;
        case 0x4b9284u: goto label_4b9284;
        case 0x4b9288u: goto label_4b9288;
        case 0x4b928cu: goto label_4b928c;
        case 0x4b9290u: goto label_4b9290;
        case 0x4b9294u: goto label_4b9294;
        case 0x4b9298u: goto label_4b9298;
        case 0x4b929cu: goto label_4b929c;
        case 0x4b92a0u: goto label_4b92a0;
        case 0x4b92a4u: goto label_4b92a4;
        case 0x4b92a8u: goto label_4b92a8;
        case 0x4b92acu: goto label_4b92ac;
        case 0x4b92b0u: goto label_4b92b0;
        case 0x4b92b4u: goto label_4b92b4;
        case 0x4b92b8u: goto label_4b92b8;
        case 0x4b92bcu: goto label_4b92bc;
        case 0x4b92c0u: goto label_4b92c0;
        case 0x4b92c4u: goto label_4b92c4;
        case 0x4b92c8u: goto label_4b92c8;
        case 0x4b92ccu: goto label_4b92cc;
        case 0x4b92d0u: goto label_4b92d0;
        case 0x4b92d4u: goto label_4b92d4;
        case 0x4b92d8u: goto label_4b92d8;
        case 0x4b92dcu: goto label_4b92dc;
        case 0x4b92e0u: goto label_4b92e0;
        case 0x4b92e4u: goto label_4b92e4;
        case 0x4b92e8u: goto label_4b92e8;
        case 0x4b92ecu: goto label_4b92ec;
        case 0x4b92f0u: goto label_4b92f0;
        case 0x4b92f4u: goto label_4b92f4;
        case 0x4b92f8u: goto label_4b92f8;
        case 0x4b92fcu: goto label_4b92fc;
        case 0x4b9300u: goto label_4b9300;
        case 0x4b9304u: goto label_4b9304;
        case 0x4b9308u: goto label_4b9308;
        case 0x4b930cu: goto label_4b930c;
        case 0x4b9310u: goto label_4b9310;
        case 0x4b9314u: goto label_4b9314;
        case 0x4b9318u: goto label_4b9318;
        case 0x4b931cu: goto label_4b931c;
        case 0x4b9320u: goto label_4b9320;
        case 0x4b9324u: goto label_4b9324;
        case 0x4b9328u: goto label_4b9328;
        case 0x4b932cu: goto label_4b932c;
        case 0x4b9330u: goto label_4b9330;
        case 0x4b9334u: goto label_4b9334;
        case 0x4b9338u: goto label_4b9338;
        case 0x4b933cu: goto label_4b933c;
        case 0x4b9340u: goto label_4b9340;
        case 0x4b9344u: goto label_4b9344;
        case 0x4b9348u: goto label_4b9348;
        case 0x4b934cu: goto label_4b934c;
        case 0x4b9350u: goto label_4b9350;
        case 0x4b9354u: goto label_4b9354;
        case 0x4b9358u: goto label_4b9358;
        case 0x4b935cu: goto label_4b935c;
        case 0x4b9360u: goto label_4b9360;
        case 0x4b9364u: goto label_4b9364;
        case 0x4b9368u: goto label_4b9368;
        case 0x4b936cu: goto label_4b936c;
        case 0x4b9370u: goto label_4b9370;
        case 0x4b9374u: goto label_4b9374;
        case 0x4b9378u: goto label_4b9378;
        case 0x4b937cu: goto label_4b937c;
        case 0x4b9380u: goto label_4b9380;
        case 0x4b9384u: goto label_4b9384;
        case 0x4b9388u: goto label_4b9388;
        case 0x4b938cu: goto label_4b938c;
        case 0x4b9390u: goto label_4b9390;
        case 0x4b9394u: goto label_4b9394;
        case 0x4b9398u: goto label_4b9398;
        case 0x4b939cu: goto label_4b939c;
        case 0x4b93a0u: goto label_4b93a0;
        case 0x4b93a4u: goto label_4b93a4;
        case 0x4b93a8u: goto label_4b93a8;
        case 0x4b93acu: goto label_4b93ac;
        case 0x4b93b0u: goto label_4b93b0;
        case 0x4b93b4u: goto label_4b93b4;
        case 0x4b93b8u: goto label_4b93b8;
        case 0x4b93bcu: goto label_4b93bc;
        case 0x4b93c0u: goto label_4b93c0;
        case 0x4b93c4u: goto label_4b93c4;
        case 0x4b93c8u: goto label_4b93c8;
        case 0x4b93ccu: goto label_4b93cc;
        case 0x4b93d0u: goto label_4b93d0;
        case 0x4b93d4u: goto label_4b93d4;
        case 0x4b93d8u: goto label_4b93d8;
        case 0x4b93dcu: goto label_4b93dc;
        case 0x4b93e0u: goto label_4b93e0;
        case 0x4b93e4u: goto label_4b93e4;
        case 0x4b93e8u: goto label_4b93e8;
        case 0x4b93ecu: goto label_4b93ec;
        case 0x4b93f0u: goto label_4b93f0;
        case 0x4b93f4u: goto label_4b93f4;
        case 0x4b93f8u: goto label_4b93f8;
        case 0x4b93fcu: goto label_4b93fc;
        case 0x4b9400u: goto label_4b9400;
        case 0x4b9404u: goto label_4b9404;
        case 0x4b9408u: goto label_4b9408;
        case 0x4b940cu: goto label_4b940c;
        case 0x4b9410u: goto label_4b9410;
        case 0x4b9414u: goto label_4b9414;
        case 0x4b9418u: goto label_4b9418;
        case 0x4b941cu: goto label_4b941c;
        case 0x4b9420u: goto label_4b9420;
        case 0x4b9424u: goto label_4b9424;
        case 0x4b9428u: goto label_4b9428;
        case 0x4b942cu: goto label_4b942c;
        case 0x4b9430u: goto label_4b9430;
        case 0x4b9434u: goto label_4b9434;
        case 0x4b9438u: goto label_4b9438;
        case 0x4b943cu: goto label_4b943c;
        case 0x4b9440u: goto label_4b9440;
        case 0x4b9444u: goto label_4b9444;
        case 0x4b9448u: goto label_4b9448;
        case 0x4b944cu: goto label_4b944c;
        case 0x4b9450u: goto label_4b9450;
        case 0x4b9454u: goto label_4b9454;
        case 0x4b9458u: goto label_4b9458;
        case 0x4b945cu: goto label_4b945c;
        case 0x4b9460u: goto label_4b9460;
        case 0x4b9464u: goto label_4b9464;
        case 0x4b9468u: goto label_4b9468;
        case 0x4b946cu: goto label_4b946c;
        case 0x4b9470u: goto label_4b9470;
        case 0x4b9474u: goto label_4b9474;
        case 0x4b9478u: goto label_4b9478;
        case 0x4b947cu: goto label_4b947c;
        case 0x4b9480u: goto label_4b9480;
        case 0x4b9484u: goto label_4b9484;
        case 0x4b9488u: goto label_4b9488;
        case 0x4b948cu: goto label_4b948c;
        case 0x4b9490u: goto label_4b9490;
        case 0x4b9494u: goto label_4b9494;
        case 0x4b9498u: goto label_4b9498;
        case 0x4b949cu: goto label_4b949c;
        case 0x4b94a0u: goto label_4b94a0;
        case 0x4b94a4u: goto label_4b94a4;
        case 0x4b94a8u: goto label_4b94a8;
        case 0x4b94acu: goto label_4b94ac;
        case 0x4b94b0u: goto label_4b94b0;
        case 0x4b94b4u: goto label_4b94b4;
        case 0x4b94b8u: goto label_4b94b8;
        case 0x4b94bcu: goto label_4b94bc;
        case 0x4b94c0u: goto label_4b94c0;
        case 0x4b94c4u: goto label_4b94c4;
        case 0x4b94c8u: goto label_4b94c8;
        case 0x4b94ccu: goto label_4b94cc;
        case 0x4b94d0u: goto label_4b94d0;
        case 0x4b94d4u: goto label_4b94d4;
        case 0x4b94d8u: goto label_4b94d8;
        case 0x4b94dcu: goto label_4b94dc;
        case 0x4b94e0u: goto label_4b94e0;
        case 0x4b94e4u: goto label_4b94e4;
        case 0x4b94e8u: goto label_4b94e8;
        case 0x4b94ecu: goto label_4b94ec;
        case 0x4b94f0u: goto label_4b94f0;
        case 0x4b94f4u: goto label_4b94f4;
        case 0x4b94f8u: goto label_4b94f8;
        case 0x4b94fcu: goto label_4b94fc;
        case 0x4b9500u: goto label_4b9500;
        case 0x4b9504u: goto label_4b9504;
        case 0x4b9508u: goto label_4b9508;
        case 0x4b950cu: goto label_4b950c;
        case 0x4b9510u: goto label_4b9510;
        case 0x4b9514u: goto label_4b9514;
        case 0x4b9518u: goto label_4b9518;
        case 0x4b951cu: goto label_4b951c;
        case 0x4b9520u: goto label_4b9520;
        case 0x4b9524u: goto label_4b9524;
        case 0x4b9528u: goto label_4b9528;
        case 0x4b952cu: goto label_4b952c;
        case 0x4b9530u: goto label_4b9530;
        case 0x4b9534u: goto label_4b9534;
        case 0x4b9538u: goto label_4b9538;
        case 0x4b953cu: goto label_4b953c;
        case 0x4b9540u: goto label_4b9540;
        case 0x4b9544u: goto label_4b9544;
        case 0x4b9548u: goto label_4b9548;
        case 0x4b954cu: goto label_4b954c;
        case 0x4b9550u: goto label_4b9550;
        case 0x4b9554u: goto label_4b9554;
        case 0x4b9558u: goto label_4b9558;
        case 0x4b955cu: goto label_4b955c;
        case 0x4b9560u: goto label_4b9560;
        case 0x4b9564u: goto label_4b9564;
        case 0x4b9568u: goto label_4b9568;
        case 0x4b956cu: goto label_4b956c;
        case 0x4b9570u: goto label_4b9570;
        case 0x4b9574u: goto label_4b9574;
        case 0x4b9578u: goto label_4b9578;
        case 0x4b957cu: goto label_4b957c;
        case 0x4b9580u: goto label_4b9580;
        case 0x4b9584u: goto label_4b9584;
        case 0x4b9588u: goto label_4b9588;
        case 0x4b958cu: goto label_4b958c;
        case 0x4b9590u: goto label_4b9590;
        case 0x4b9594u: goto label_4b9594;
        case 0x4b9598u: goto label_4b9598;
        case 0x4b959cu: goto label_4b959c;
        case 0x4b95a0u: goto label_4b95a0;
        case 0x4b95a4u: goto label_4b95a4;
        case 0x4b95a8u: goto label_4b95a8;
        case 0x4b95acu: goto label_4b95ac;
        case 0x4b95b0u: goto label_4b95b0;
        case 0x4b95b4u: goto label_4b95b4;
        case 0x4b95b8u: goto label_4b95b8;
        case 0x4b95bcu: goto label_4b95bc;
        case 0x4b95c0u: goto label_4b95c0;
        case 0x4b95c4u: goto label_4b95c4;
        case 0x4b95c8u: goto label_4b95c8;
        case 0x4b95ccu: goto label_4b95cc;
        case 0x4b95d0u: goto label_4b95d0;
        case 0x4b95d4u: goto label_4b95d4;
        case 0x4b95d8u: goto label_4b95d8;
        case 0x4b95dcu: goto label_4b95dc;
        case 0x4b95e0u: goto label_4b95e0;
        case 0x4b95e4u: goto label_4b95e4;
        case 0x4b95e8u: goto label_4b95e8;
        case 0x4b95ecu: goto label_4b95ec;
        case 0x4b95f0u: goto label_4b95f0;
        case 0x4b95f4u: goto label_4b95f4;
        case 0x4b95f8u: goto label_4b95f8;
        case 0x4b95fcu: goto label_4b95fc;
        case 0x4b9600u: goto label_4b9600;
        case 0x4b9604u: goto label_4b9604;
        case 0x4b9608u: goto label_4b9608;
        case 0x4b960cu: goto label_4b960c;
        case 0x4b9610u: goto label_4b9610;
        case 0x4b9614u: goto label_4b9614;
        case 0x4b9618u: goto label_4b9618;
        case 0x4b961cu: goto label_4b961c;
        case 0x4b9620u: goto label_4b9620;
        case 0x4b9624u: goto label_4b9624;
        case 0x4b9628u: goto label_4b9628;
        case 0x4b962cu: goto label_4b962c;
        case 0x4b9630u: goto label_4b9630;
        case 0x4b9634u: goto label_4b9634;
        case 0x4b9638u: goto label_4b9638;
        case 0x4b963cu: goto label_4b963c;
        case 0x4b9640u: goto label_4b9640;
        case 0x4b9644u: goto label_4b9644;
        case 0x4b9648u: goto label_4b9648;
        case 0x4b964cu: goto label_4b964c;
        case 0x4b9650u: goto label_4b9650;
        case 0x4b9654u: goto label_4b9654;
        case 0x4b9658u: goto label_4b9658;
        case 0x4b965cu: goto label_4b965c;
        case 0x4b9660u: goto label_4b9660;
        case 0x4b9664u: goto label_4b9664;
        case 0x4b9668u: goto label_4b9668;
        case 0x4b966cu: goto label_4b966c;
        case 0x4b9670u: goto label_4b9670;
        case 0x4b9674u: goto label_4b9674;
        case 0x4b9678u: goto label_4b9678;
        case 0x4b967cu: goto label_4b967c;
        case 0x4b9680u: goto label_4b9680;
        case 0x4b9684u: goto label_4b9684;
        case 0x4b9688u: goto label_4b9688;
        case 0x4b968cu: goto label_4b968c;
        case 0x4b9690u: goto label_4b9690;
        case 0x4b9694u: goto label_4b9694;
        case 0x4b9698u: goto label_4b9698;
        case 0x4b969cu: goto label_4b969c;
        case 0x4b96a0u: goto label_4b96a0;
        case 0x4b96a4u: goto label_4b96a4;
        case 0x4b96a8u: goto label_4b96a8;
        case 0x4b96acu: goto label_4b96ac;
        case 0x4b96b0u: goto label_4b96b0;
        case 0x4b96b4u: goto label_4b96b4;
        case 0x4b96b8u: goto label_4b96b8;
        case 0x4b96bcu: goto label_4b96bc;
        case 0x4b96c0u: goto label_4b96c0;
        case 0x4b96c4u: goto label_4b96c4;
        case 0x4b96c8u: goto label_4b96c8;
        case 0x4b96ccu: goto label_4b96cc;
        case 0x4b96d0u: goto label_4b96d0;
        case 0x4b96d4u: goto label_4b96d4;
        case 0x4b96d8u: goto label_4b96d8;
        case 0x4b96dcu: goto label_4b96dc;
        case 0x4b96e0u: goto label_4b96e0;
        case 0x4b96e4u: goto label_4b96e4;
        case 0x4b96e8u: goto label_4b96e8;
        case 0x4b96ecu: goto label_4b96ec;
        case 0x4b96f0u: goto label_4b96f0;
        case 0x4b96f4u: goto label_4b96f4;
        case 0x4b96f8u: goto label_4b96f8;
        case 0x4b96fcu: goto label_4b96fc;
        case 0x4b9700u: goto label_4b9700;
        case 0x4b9704u: goto label_4b9704;
        case 0x4b9708u: goto label_4b9708;
        case 0x4b970cu: goto label_4b970c;
        case 0x4b9710u: goto label_4b9710;
        case 0x4b9714u: goto label_4b9714;
        case 0x4b9718u: goto label_4b9718;
        case 0x4b971cu: goto label_4b971c;
        case 0x4b9720u: goto label_4b9720;
        case 0x4b9724u: goto label_4b9724;
        case 0x4b9728u: goto label_4b9728;
        case 0x4b972cu: goto label_4b972c;
        case 0x4b9730u: goto label_4b9730;
        case 0x4b9734u: goto label_4b9734;
        case 0x4b9738u: goto label_4b9738;
        case 0x4b973cu: goto label_4b973c;
        case 0x4b9740u: goto label_4b9740;
        case 0x4b9744u: goto label_4b9744;
        case 0x4b9748u: goto label_4b9748;
        case 0x4b974cu: goto label_4b974c;
        case 0x4b9750u: goto label_4b9750;
        case 0x4b9754u: goto label_4b9754;
        case 0x4b9758u: goto label_4b9758;
        case 0x4b975cu: goto label_4b975c;
        case 0x4b9760u: goto label_4b9760;
        case 0x4b9764u: goto label_4b9764;
        case 0x4b9768u: goto label_4b9768;
        case 0x4b976cu: goto label_4b976c;
        case 0x4b9770u: goto label_4b9770;
        case 0x4b9774u: goto label_4b9774;
        case 0x4b9778u: goto label_4b9778;
        case 0x4b977cu: goto label_4b977c;
        case 0x4b9780u: goto label_4b9780;
        case 0x4b9784u: goto label_4b9784;
        case 0x4b9788u: goto label_4b9788;
        case 0x4b978cu: goto label_4b978c;
        case 0x4b9790u: goto label_4b9790;
        case 0x4b9794u: goto label_4b9794;
        case 0x4b9798u: goto label_4b9798;
        case 0x4b979cu: goto label_4b979c;
        case 0x4b97a0u: goto label_4b97a0;
        case 0x4b97a4u: goto label_4b97a4;
        case 0x4b97a8u: goto label_4b97a8;
        case 0x4b97acu: goto label_4b97ac;
        case 0x4b97b0u: goto label_4b97b0;
        case 0x4b97b4u: goto label_4b97b4;
        case 0x4b97b8u: goto label_4b97b8;
        case 0x4b97bcu: goto label_4b97bc;
        case 0x4b97c0u: goto label_4b97c0;
        case 0x4b97c4u: goto label_4b97c4;
        case 0x4b97c8u: goto label_4b97c8;
        case 0x4b97ccu: goto label_4b97cc;
        case 0x4b97d0u: goto label_4b97d0;
        case 0x4b97d4u: goto label_4b97d4;
        case 0x4b97d8u: goto label_4b97d8;
        case 0x4b97dcu: goto label_4b97dc;
        case 0x4b97e0u: goto label_4b97e0;
        case 0x4b97e4u: goto label_4b97e4;
        case 0x4b97e8u: goto label_4b97e8;
        case 0x4b97ecu: goto label_4b97ec;
        case 0x4b97f0u: goto label_4b97f0;
        case 0x4b97f4u: goto label_4b97f4;
        case 0x4b97f8u: goto label_4b97f8;
        case 0x4b97fcu: goto label_4b97fc;
        case 0x4b9800u: goto label_4b9800;
        case 0x4b9804u: goto label_4b9804;
        case 0x4b9808u: goto label_4b9808;
        case 0x4b980cu: goto label_4b980c;
        case 0x4b9810u: goto label_4b9810;
        case 0x4b9814u: goto label_4b9814;
        case 0x4b9818u: goto label_4b9818;
        case 0x4b981cu: goto label_4b981c;
        default: break;
    }

    ctx->pc = 0x4b9010u;

label_4b9010:
    // 0x4b9010: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b9010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b9014:
    // 0x4b9014: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b9014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b9018:
    // 0x4b9018: 0x2442f9c0  addiu       $v0, $v0, -0x640
    ctx->pc = 0x4b9018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965696));
label_4b901c:
    // 0x4b901c: 0x3c05c040  lui         $a1, 0xC040
    ctx->pc = 0x4b901cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49216 << 16));
label_4b9020:
    // 0x4b9020: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4b9020u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4b9024:
    // 0x4b9024: 0x2463f970  addiu       $v1, $v1, -0x690
    ctx->pc = 0x4b9024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965616));
label_4b9028:
    // 0x4b9028: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x4b9028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_4b902c:
    // 0x4b902c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4b902cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9030:
    // 0x4b9030: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x4b9030u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_4b9034:
    // 0x4b9034: 0xa080000c  sb          $zero, 0xC($a0)
    ctx->pc = 0x4b9034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 0));
label_4b9038:
    // 0x4b9038: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x4b9038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
label_4b903c:
    // 0x4b903c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b903cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4b9040:
    // 0x4b9040: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x4b9040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
label_4b9044:
    // 0x4b9044: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x4b9044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_4b9048:
    // 0x4b9048: 0x3e00008  jr          $ra
label_4b904c:
    if (ctx->pc == 0x4B904Cu) {
        ctx->pc = 0x4B904Cu;
            // 0x4b904c: 0xa080001c  sb          $zero, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4B9050u;
        goto label_4b9050;
    }
    ctx->pc = 0x4B9048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B904Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9048u;
            // 0x4b904c: 0xa080001c  sb          $zero, 0x1C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9050u;
label_4b9050:
    // 0x4b9050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b9050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b9054:
    // 0x4b9054: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x4b9054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_4b9058:
    // 0x4b9058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b905c:
    // 0x4b905c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x4b905cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b9060:
    // 0x4b9060: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4b9060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b9064:
    // 0x4b9064: 0xc040140  jal         func_100500
label_4b9068:
    if (ctx->pc == 0x4B9068u) {
        ctx->pc = 0x4B9068u;
            // 0x4b9068: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B906Cu;
        goto label_4b906c;
    }
    ctx->pc = 0x4B9064u;
    SET_GPR_U32(ctx, 31, 0x4B906Cu);
    ctx->pc = 0x4B9068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9064u;
            // 0x4b9068: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B906Cu; }
        if (ctx->pc != 0x4B906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B906Cu; }
        if (ctx->pc != 0x4B906Cu) { return; }
    }
    ctx->pc = 0x4B906Cu;
label_4b906c:
    // 0x4b906c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_4b9070:
    if (ctx->pc == 0x4B9070u) {
        ctx->pc = 0x4B9070u;
            // 0x4b9070: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4B9074u;
        goto label_4b9074;
    }
    ctx->pc = 0x4B906Cu;
    {
        const bool branch_taken_0x4b906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b906c) {
            ctx->pc = 0x4B9070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B906Cu;
            // 0x4b9070: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B90D8u;
            goto label_4b90d8;
        }
    }
    ctx->pc = 0x4B9074u;
label_4b9074:
    // 0x4b9074: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b9074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b9078:
    // 0x4b9078: 0x3c04c040  lui         $a0, 0xC040
    ctx->pc = 0x4b9078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49216 << 16));
label_4b907c:
    // 0x4b907c: 0x2463f9c0  addiu       $v1, $v1, -0x640
    ctx->pc = 0x4b907cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965696));
label_4b9080:
    // 0x4b9080: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b9080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b9084:
    // 0x4b9084: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x4b9084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_4b9088:
    // 0x4b9088: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b9088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b908c:
    // 0x4b908c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x4b908cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_4b9090:
    // 0x4b9090: 0x2463fa20  addiu       $v1, $v1, -0x5E0
    ctx->pc = 0x4b9090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965792));
label_4b9094:
    // 0x4b9094: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x4b9094u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
label_4b9098:
    // 0x4b9098: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x4b9098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_4b909c:
    // 0x4b909c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4b909cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_4b90a0:
    // 0x4b90a0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x4b90a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_4b90a4:
    // 0x4b90a4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x4b90a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_4b90a8:
    // 0x4b90a8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x4b90a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_4b90ac:
    // 0x4b90ac: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x4b90acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_4b90b0:
    // 0x4b90b0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x4b90b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_4b90b4:
    // 0x4b90b4: 0xa0400039  sb          $zero, 0x39($v0)
    ctx->pc = 0x4b90b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 57), (uint8_t)GPR_U32(ctx, 0));
label_4b90b8:
    // 0x4b90b8: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x4b90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_4b90bc:
    // 0x4b90bc: 0xa4400020  sh          $zero, 0x20($v0)
    ctx->pc = 0x4b90bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 32), (uint16_t)GPR_U32(ctx, 0));
label_4b90c0:
    // 0x4b90c0: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x4b90c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
label_4b90c4:
    // 0x4b90c4: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x4b90c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
label_4b90c8:
    // 0x4b90c8: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x4b90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_4b90cc:
    // 0x4b90cc: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x4b90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_4b90d0:
    // 0x4b90d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x4b90d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_4b90d4:
    // 0x4b90d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b90d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b90d8:
    // 0x4b90d8: 0x3e00008  jr          $ra
label_4b90dc:
    if (ctx->pc == 0x4B90DCu) {
        ctx->pc = 0x4B90DCu;
            // 0x4b90dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4B90E0u;
        goto label_4b90e0;
    }
    ctx->pc = 0x4B90D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B90DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B90D8u;
            // 0x4b90dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B90E0u;
label_4b90e0:
    // 0x4b90e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b90e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b90e4:
    // 0x4b90e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b90e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b90e8:
    // 0x4b90e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b90e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b90ec:
    // 0x4b90ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b90ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b90f0:
    // 0x4b90f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b90f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b90f4:
    // 0x4b90f4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
label_4b90f8:
    if (ctx->pc == 0x4B90F8u) {
        ctx->pc = 0x4B90F8u;
            // 0x4b90f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B90FCu;
        goto label_4b90fc;
    }
    ctx->pc = 0x4B90F4u;
    {
        const bool branch_taken_0x4b90f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B90F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B90F4u;
            // 0x4b90f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b90f4) {
            ctx->pc = 0x4B914Cu;
            goto label_4b914c;
        }
    }
    ctx->pc = 0x4B90FCu;
label_4b90fc:
    // 0x4b90fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b90fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b9100:
    // 0x4b9100: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x4b9100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4b9104:
    // 0x4b9104: 0x24630c68  addiu       $v1, $v1, 0xC68
    ctx->pc = 0x4b9104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3176));
label_4b9108:
    // 0x4b9108: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_4b910c:
    if (ctx->pc == 0x4B910Cu) {
        ctx->pc = 0x4B910Cu;
            // 0x4b910c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x4B9110u;
        goto label_4b9110;
    }
    ctx->pc = 0x4B9108u;
    {
        const bool branch_taken_0x4b9108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B910Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9108u;
            // 0x4b910c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9108) {
            ctx->pc = 0x4B9134u;
            goto label_4b9134;
        }
    }
    ctx->pc = 0x4B9110u;
label_4b9110:
    // 0x4b9110: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4b9114:
    if (ctx->pc == 0x4B9114u) {
        ctx->pc = 0x4B9114u;
            // 0x4b9114: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4B9118u;
        goto label_4b9118;
    }
    ctx->pc = 0x4B9110u;
    {
        const bool branch_taken_0x4b9110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9110) {
            ctx->pc = 0x4B9114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9110u;
            // 0x4b9114: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B9138u;
            goto label_4b9138;
        }
    }
    ctx->pc = 0x4B9118u;
label_4b9118:
    // 0x4b9118: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b911c:
    if (ctx->pc == 0x4B911Cu) {
        ctx->pc = 0x4B9120u;
        goto label_4b9120;
    }
    ctx->pc = 0x4B9118u;
    {
        const bool branch_taken_0x4b9118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9118) {
            ctx->pc = 0x4B9134u;
            goto label_4b9134;
        }
    }
    ctx->pc = 0x4B9120u;
label_4b9120:
    // 0x4b9120: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x4b9120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4b9124:
    // 0x4b9124: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b9128:
    if (ctx->pc == 0x4B9128u) {
        ctx->pc = 0x4B912Cu;
        goto label_4b912c;
    }
    ctx->pc = 0x4B9124u;
    {
        const bool branch_taken_0x4b9124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9124) {
            ctx->pc = 0x4B9134u;
            goto label_4b9134;
        }
    }
    ctx->pc = 0x4B912Cu;
label_4b912c:
    // 0x4b912c: 0xc0400a8  jal         func_1002A0
label_4b9130:
    if (ctx->pc == 0x4B9130u) {
        ctx->pc = 0x4B9134u;
        goto label_4b9134;
    }
    ctx->pc = 0x4B912Cu;
    SET_GPR_U32(ctx, 31, 0x4B9134u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9134u; }
        if (ctx->pc != 0x4B9134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9134u; }
        if (ctx->pc != 0x4B9134u) { return; }
    }
    ctx->pc = 0x4B9134u;
label_4b9134:
    // 0x4b9134: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b9134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b9138:
    // 0x4b9138: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b9138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b913c:
    // 0x4b913c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b9140:
    if (ctx->pc == 0x4B9140u) {
        ctx->pc = 0x4B9140u;
            // 0x4b9140: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9144u;
        goto label_4b9144;
    }
    ctx->pc = 0x4B913Cu;
    {
        const bool branch_taken_0x4b913c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b913c) {
            ctx->pc = 0x4B9140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B913Cu;
            // 0x4b9140: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B9150u;
            goto label_4b9150;
        }
    }
    ctx->pc = 0x4B9144u;
label_4b9144:
    // 0x4b9144: 0xc0400a8  jal         func_1002A0
label_4b9148:
    if (ctx->pc == 0x4B9148u) {
        ctx->pc = 0x4B9148u;
            // 0x4b9148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B914Cu;
        goto label_4b914c;
    }
    ctx->pc = 0x4B9144u;
    SET_GPR_U32(ctx, 31, 0x4B914Cu);
    ctx->pc = 0x4B9148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9144u;
            // 0x4b9148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B914Cu; }
        if (ctx->pc != 0x4B914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B914Cu; }
        if (ctx->pc != 0x4B914Cu) { return; }
    }
    ctx->pc = 0x4B914Cu;
label_4b914c:
    // 0x4b914c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b914cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b9150:
    // 0x4b9150: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b9150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9154:
    // 0x4b9154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b9154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b9158:
    // 0x4b9158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b9158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b915c:
    // 0x4b915c: 0x3e00008  jr          $ra
label_4b9160:
    if (ctx->pc == 0x4B9160u) {
        ctx->pc = 0x4B9160u;
            // 0x4b9160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B9164u;
        goto label_4b9164;
    }
    ctx->pc = 0x4B915Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B915Cu;
            // 0x4b9160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9164u;
label_4b9164:
    // 0x4b9164: 0x0  nop
    ctx->pc = 0x4b9164u;
    // NOP
label_4b9168:
    // 0x4b9168: 0x0  nop
    ctx->pc = 0x4b9168u;
    // NOP
label_4b916c:
    // 0x4b916c: 0x0  nop
    ctx->pc = 0x4b916cu;
    // NOP
label_4b9170:
    // 0x4b9170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b9170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b9174:
    // 0x4b9174: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b9174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b9178:
    // 0x4b9178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b9178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b917c:
    // 0x4b917c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b9180:
    // 0x4b9180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b9180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9184:
    // 0x4b9184: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4b9188:
    if (ctx->pc == 0x4B9188u) {
        ctx->pc = 0x4B9188u;
            // 0x4b9188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B918Cu;
        goto label_4b918c;
    }
    ctx->pc = 0x4B9184u;
    {
        const bool branch_taken_0x4b9184 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9184u;
            // 0x4b9188: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9184) {
            ctx->pc = 0x4B91B8u;
            goto label_4b91b8;
        }
    }
    ctx->pc = 0x4B918Cu;
label_4b918c:
    // 0x4b918c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b918cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b9190:
    // 0x4b9190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b9190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9194:
    // 0x4b9194: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x4b9194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
label_4b9198:
    // 0x4b9198: 0xc123f54  jal         func_48FD50
label_4b919c:
    if (ctx->pc == 0x4B919Cu) {
        ctx->pc = 0x4B919Cu;
            // 0x4b919c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B91A0u;
        goto label_4b91a0;
    }
    ctx->pc = 0x4B9198u;
    SET_GPR_U32(ctx, 31, 0x4B91A0u);
    ctx->pc = 0x4B919Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9198u;
            // 0x4b919c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48FD50u;
    if (runtime->hasFunction(0x48FD50u)) {
        auto targetFn = runtime->lookupFunction(0x48FD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B91A0u; }
        if (ctx->pc != 0x4B91A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048FD50_0x48fd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B91A0u; }
        if (ctx->pc != 0x4B91A0u) { return; }
    }
    ctx->pc = 0x4B91A0u;
label_4b91a0:
    // 0x4b91a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b91a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b91a4:
    // 0x4b91a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b91a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b91a8:
    // 0x4b91a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b91ac:
    if (ctx->pc == 0x4B91ACu) {
        ctx->pc = 0x4B91ACu;
            // 0x4b91ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B91B0u;
        goto label_4b91b0;
    }
    ctx->pc = 0x4B91A8u;
    {
        const bool branch_taken_0x4b91a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b91a8) {
            ctx->pc = 0x4B91ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B91A8u;
            // 0x4b91ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B91BCu;
            goto label_4b91bc;
        }
    }
    ctx->pc = 0x4B91B0u;
label_4b91b0:
    // 0x4b91b0: 0xc0400a8  jal         func_1002A0
label_4b91b4:
    if (ctx->pc == 0x4B91B4u) {
        ctx->pc = 0x4B91B4u;
            // 0x4b91b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B91B8u;
        goto label_4b91b8;
    }
    ctx->pc = 0x4B91B0u;
    SET_GPR_U32(ctx, 31, 0x4B91B8u);
    ctx->pc = 0x4B91B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B91B0u;
            // 0x4b91b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B91B8u; }
        if (ctx->pc != 0x4B91B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B91B8u; }
        if (ctx->pc != 0x4B91B8u) { return; }
    }
    ctx->pc = 0x4B91B8u;
label_4b91b8:
    // 0x4b91b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b91b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b91bc:
    // 0x4b91bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b91bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b91c0:
    // 0x4b91c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b91c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b91c4:
    // 0x4b91c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b91c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b91c8:
    // 0x4b91c8: 0x3e00008  jr          $ra
label_4b91cc:
    if (ctx->pc == 0x4B91CCu) {
        ctx->pc = 0x4B91CCu;
            // 0x4b91cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B91D0u;
        goto label_4b91d0;
    }
    ctx->pc = 0x4B91C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B91CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B91C8u;
            // 0x4b91cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B91D0u;
label_4b91d0:
    // 0x4b91d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b91d4:
    // 0x4b91d4: 0x248a0020  addiu       $t2, $a0, 0x20
    ctx->pc = 0x4b91d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_4b91d8:
    // 0x4b91d8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4b91d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b91dc:
    // 0x4b91dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4b91dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b91e0:
    // 0x4b91e0: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4b91e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4b91e4:
    // 0x4b91e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b91e8:
    if (ctx->pc == 0x4B91E8u) {
        ctx->pc = 0x4B91E8u;
            // 0x4b91e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B91ECu;
        goto label_4b91ec;
    }
    ctx->pc = 0x4B91E4u;
    {
        const bool branch_taken_0x4b91e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B91E4u;
            // 0x4b91e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b91e4) {
            ctx->pc = 0x4B91FCu;
            goto label_4b91fc;
        }
    }
    ctx->pc = 0x4B91ECu;
label_4b91ec:
    // 0x4b91ec: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x4b91ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_4b91f0:
    // 0x4b91f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b91f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b91f4:
    // 0x4b91f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b91f8:
    if (ctx->pc == 0x4B91F8u) {
        ctx->pc = 0x4B91F8u;
            // 0x4b91f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B91FCu;
        goto label_4b91fc;
    }
    ctx->pc = 0x4B91F4u;
    {
        const bool branch_taken_0x4b91f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B91F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B91F4u;
            // 0x4b91f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b91f4) {
            ctx->pc = 0x4B9208u;
            goto label_4b9208;
        }
    }
    ctx->pc = 0x4B91FCu;
label_4b91fc:
    // 0x4b91fc: 0x3c02c180  lui         $v0, 0xC180
    ctx->pc = 0x4b91fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49536 << 16));
label_4b9200:
    // 0x4b9200: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b9200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b9204:
    // 0x4b9204: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b9204u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9208:
    // 0x4b9208: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4b9208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b920c:
    // 0x4b920c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4b920cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4b9210:
    // 0x4b9210: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x4b9210u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_4b9214:
    // 0x4b9214: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x4b9214u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_4b9218:
    // 0x4b9218: 0x8d6b0000  lw          $t3, 0x0($t3)
    ctx->pc = 0x4b9218u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4b921c:
    // 0x4b921c: 0x11630036  beq         $t3, $v1, . + 4 + (0x36 << 2)
label_4b9220:
    if (ctx->pc == 0x4B9220u) {
        ctx->pc = 0x4B9224u;
        goto label_4b9224;
    }
    ctx->pc = 0x4B921Cu;
    {
        const bool branch_taken_0x4b921c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b921c) {
            ctx->pc = 0x4B92F8u;
            goto label_4b92f8;
        }
    }
    ctx->pc = 0x4B9224u;
label_4b9224:
    // 0x4b9224: 0x11620004  beq         $t3, $v0, . + 4 + (0x4 << 2)
label_4b9228:
    if (ctx->pc == 0x4B9228u) {
        ctx->pc = 0x4B922Cu;
        goto label_4b922c;
    }
    ctx->pc = 0x4B9224u;
    {
        const bool branch_taken_0x4b9224 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        if (branch_taken_0x4b9224) {
            ctx->pc = 0x4B9238u;
            goto label_4b9238;
        }
    }
    ctx->pc = 0x4B922Cu;
label_4b922c:
    // 0x4b922c: 0x10000062  b           . + 4 + (0x62 << 2)
label_4b9230:
    if (ctx->pc == 0x4B9230u) {
        ctx->pc = 0x4B9234u;
        goto label_4b9234;
    }
    ctx->pc = 0x4B922Cu;
    {
        const bool branch_taken_0x4b922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b922c) {
            ctx->pc = 0x4B93B8u;
            goto label_4b93b8;
        }
    }
    ctx->pc = 0x4B9234u;
label_4b9234:
    // 0x4b9234: 0x0  nop
    ctx->pc = 0x4b9234u;
    // NOP
label_4b9238:
    // 0x4b9238: 0x914b0002  lbu         $t3, 0x2($t2)
    ctx->pc = 0x4b9238u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_4b923c:
    // 0x4b923c: 0x11600016  beqz        $t3, . + 4 + (0x16 << 2)
label_4b9240:
    if (ctx->pc == 0x4B9240u) {
        ctx->pc = 0x4B9244u;
        goto label_4b9244;
    }
    ctx->pc = 0x4B923Cu;
    {
        const bool branch_taken_0x4b923c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b923c) {
            ctx->pc = 0x4B9298u;
            goto label_4b9298;
        }
    }
    ctx->pc = 0x4B9244u;
label_4b9244:
    // 0x4b9244: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x4b9244u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4b9248:
    // 0x4b9248: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4b9248u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b924c:
    // 0x4b924c: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x4b924cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_4b9250:
    // 0x4b9250: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4b9250u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9254:
    // 0x4b9254: 0xb6080  sll         $t4, $t3, 2
    ctx->pc = 0x4b9254u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4b9258:
    // 0x4b9258: 0x8d4b000c  lw          $t3, 0xC($t2)
    ctx->pc = 0x4b9258u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_4b925c:
    // 0x4b925c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x4b925cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_4b9260:
    // 0x4b9260: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x4b9260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_4b9264:
    // 0x4b9264: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x4b9264u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
label_4b9268:
    // 0x4b9268: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x4b9268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b926c:
    // 0x4b926c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b926cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b9270:
    // 0x4b9270: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x4b9270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_4b9274:
    // 0x4b9274: 0x8d4e0004  lw          $t6, 0x4($t2)
    ctx->pc = 0x4b9274u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_4b9278:
    // 0x4b9278: 0xee5821  addu        $t3, $a3, $t6
    ctx->pc = 0x4b9278u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_4b927c:
    // 0x4b927c: 0x8d6b0004  lw          $t3, 0x4($t3)
    ctx->pc = 0x4b927cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4b9280:
    // 0x4b9280: 0x1eb582b  sltu        $t3, $t7, $t3
    ctx->pc = 0x4b9280u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_4b9284:
    // 0x4b9284: 0x1560fff4  bnez        $t3, . + 4 + (-0xC << 2)
label_4b9288:
    if (ctx->pc == 0x4B9288u) {
        ctx->pc = 0x4B9288u;
            // 0x4b9288: 0x25ad0014  addiu       $t5, $t5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
        ctx->pc = 0x4B928Cu;
        goto label_4b928c;
    }
    ctx->pc = 0x4B9284u;
    {
        const bool branch_taken_0x4b9284 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9284u;
            // 0x4b9288: 0x25ad0014  addiu       $t5, $t5, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9284) {
            ctx->pc = 0x4B9258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b9258;
        }
    }
    ctx->pc = 0x4B928Cu;
label_4b928c:
    // 0x4b928c: 0x10000016  b           . + 4 + (0x16 << 2)
label_4b9290:
    if (ctx->pc == 0x4B9290u) {
        ctx->pc = 0x4B9294u;
        goto label_4b9294;
    }
    ctx->pc = 0x4B928Cu;
    {
        const bool branch_taken_0x4b928c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b928c) {
            ctx->pc = 0x4B92E8u;
            goto label_4b92e8;
        }
    }
    ctx->pc = 0x4B9294u;
label_4b9294:
    // 0x4b9294: 0x0  nop
    ctx->pc = 0x4b9294u;
    // NOP
label_4b9298:
    // 0x4b9298: 0x85840  sll         $t3, $t0, 1
    ctx->pc = 0x4b9298u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4b929c:
    // 0x4b929c: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x4b929cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_4b92a0:
    // 0x4b92a0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4b92a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b92a4:
    // 0x4b92a4: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4b92a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b92a8:
    // 0x4b92a8: 0xb6080  sll         $t4, $t3, 2
    ctx->pc = 0x4b92a8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4b92ac:
    // 0x4b92ac: 0x0  nop
    ctx->pc = 0x4b92acu;
    // NOP
label_4b92b0:
    // 0x4b92b0: 0x8d4b0008  lw          $t3, 0x8($t2)
    ctx->pc = 0x4b92b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_4b92b4:
    // 0x4b92b4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4b92b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_4b92b8:
    // 0x4b92b8: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x4b92b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_4b92bc:
    // 0x4b92bc: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x4b92bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
label_4b92c0:
    // 0x4b92c0: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x4b92c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b92c4:
    // 0x4b92c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b92c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b92c8:
    // 0x4b92c8: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x4b92c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_4b92cc:
    // 0x4b92cc: 0x8d4e0004  lw          $t6, 0x4($t2)
    ctx->pc = 0x4b92ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_4b92d0:
    // 0x4b92d0: 0xee5821  addu        $t3, $a3, $t6
    ctx->pc = 0x4b92d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_4b92d4:
    // 0x4b92d4: 0x8d6b0004  lw          $t3, 0x4($t3)
    ctx->pc = 0x4b92d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4b92d8:
    // 0x4b92d8: 0x1ab582b  sltu        $t3, $t5, $t3
    ctx->pc = 0x4b92d8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_4b92dc:
    // 0x4b92dc: 0x1560fff4  bnez        $t3, . + 4 + (-0xC << 2)
label_4b92e0:
    if (ctx->pc == 0x4B92E0u) {
        ctx->pc = 0x4B92E0u;
            // 0x4b92e0: 0x25ef000c  addiu       $t7, $t7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
        ctx->pc = 0x4B92E4u;
        goto label_4b92e4;
    }
    ctx->pc = 0x4B92DCu;
    {
        const bool branch_taken_0x4b92dc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B92E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B92DCu;
            // 0x4b92e0: 0x25ef000c  addiu       $t7, $t7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b92dc) {
            ctx->pc = 0x4B92B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b92b0;
        }
    }
    ctx->pc = 0x4B92E4u;
label_4b92e4:
    // 0x4b92e4: 0x0  nop
    ctx->pc = 0x4b92e4u;
    // NOP
label_4b92e8:
    // 0x4b92e8: 0x1c75821  addu        $t3, $t6, $a3
    ctx->pc = 0x4b92e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_4b92ec:
    // 0x4b92ec: 0x8d6b0004  lw          $t3, 0x4($t3)
    ctx->pc = 0x4b92ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4b92f0:
    // 0x4b92f0: 0x10000031  b           . + 4 + (0x31 << 2)
label_4b92f4:
    if (ctx->pc == 0x4B92F4u) {
        ctx->pc = 0x4B92F4u;
            // 0x4b92f4: 0x10b4021  addu        $t0, $t0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
        ctx->pc = 0x4B92F8u;
        goto label_4b92f8;
    }
    ctx->pc = 0x4B92F0u;
    {
        const bool branch_taken_0x4b92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B92F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B92F0u;
            // 0x4b92f4: 0x10b4021  addu        $t0, $t0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b92f0) {
            ctx->pc = 0x4B93B8u;
            goto label_4b93b8;
        }
    }
    ctx->pc = 0x4B92F8u;
label_4b92f8:
    // 0x4b92f8: 0x914b0002  lbu         $t3, 0x2($t2)
    ctx->pc = 0x4b92f8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
label_4b92fc:
    // 0x4b92fc: 0x11600016  beqz        $t3, . + 4 + (0x16 << 2)
label_4b9300:
    if (ctx->pc == 0x4B9300u) {
        ctx->pc = 0x4B9304u;
        goto label_4b9304;
    }
    ctx->pc = 0x4B92FCu;
    {
        const bool branch_taken_0x4b92fc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b92fc) {
            ctx->pc = 0x4B9358u;
            goto label_4b9358;
        }
    }
    ctx->pc = 0x4B9304u;
label_4b9304:
    // 0x4b9304: 0x85880  sll         $t3, $t0, 2
    ctx->pc = 0x4b9304u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4b9308:
    // 0x4b9308: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4b9308u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b930c:
    // 0x4b930c: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x4b930cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_4b9310:
    // 0x4b9310: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4b9310u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9314:
    // 0x4b9314: 0xb6080  sll         $t4, $t3, 2
    ctx->pc = 0x4b9314u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4b9318:
    // 0x4b9318: 0x8d4b000c  lw          $t3, 0xC($t2)
    ctx->pc = 0x4b9318u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_4b931c:
    // 0x4b931c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4b931cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_4b9320:
    // 0x4b9320: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x4b9320u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_4b9324:
    // 0x4b9324: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x4b9324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
label_4b9328:
    // 0x4b9328: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x4b9328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b932c:
    // 0x4b932c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b932cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b9330:
    // 0x4b9330: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x4b9330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_4b9334:
    // 0x4b9334: 0x8d4e0004  lw          $t6, 0x4($t2)
    ctx->pc = 0x4b9334u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_4b9338:
    // 0x4b9338: 0xee5821  addu        $t3, $a3, $t6
    ctx->pc = 0x4b9338u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_4b933c:
    // 0x4b933c: 0x8d6b0004  lw          $t3, 0x4($t3)
    ctx->pc = 0x4b933cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4b9340:
    // 0x4b9340: 0x1ab582b  sltu        $t3, $t5, $t3
    ctx->pc = 0x4b9340u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_4b9344:
    // 0x4b9344: 0x1560fff4  bnez        $t3, . + 4 + (-0xC << 2)
label_4b9348:
    if (ctx->pc == 0x4B9348u) {
        ctx->pc = 0x4B9348u;
            // 0x4b9348: 0x25ef0014  addiu       $t7, $t7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
        ctx->pc = 0x4B934Cu;
        goto label_4b934c;
    }
    ctx->pc = 0x4B9344u;
    {
        const bool branch_taken_0x4b9344 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9344u;
            // 0x4b9348: 0x25ef0014  addiu       $t7, $t7, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9344) {
            ctx->pc = 0x4B9318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b9318;
        }
    }
    ctx->pc = 0x4B934Cu;
label_4b934c:
    // 0x4b934c: 0x10000016  b           . + 4 + (0x16 << 2)
label_4b9350:
    if (ctx->pc == 0x4B9350u) {
        ctx->pc = 0x4B9354u;
        goto label_4b9354;
    }
    ctx->pc = 0x4B934Cu;
    {
        const bool branch_taken_0x4b934c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b934c) {
            ctx->pc = 0x4B93A8u;
            goto label_4b93a8;
        }
    }
    ctx->pc = 0x4B9354u;
label_4b9354:
    // 0x4b9354: 0x0  nop
    ctx->pc = 0x4b9354u;
    // NOP
label_4b9358:
    // 0x4b9358: 0x85840  sll         $t3, $t0, 1
    ctx->pc = 0x4b9358u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_4b935c:
    // 0x4b935c: 0x1685821  addu        $t3, $t3, $t0
    ctx->pc = 0x4b935cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_4b9360:
    // 0x4b9360: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x4b9360u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9364:
    // 0x4b9364: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x4b9364u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9368:
    // 0x4b9368: 0xb6080  sll         $t4, $t3, 2
    ctx->pc = 0x4b9368u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4b936c:
    // 0x4b936c: 0x0  nop
    ctx->pc = 0x4b936cu;
    // NOP
label_4b9370:
    // 0x4b9370: 0x8d4b0008  lw          $t3, 0x8($t2)
    ctx->pc = 0x4b9370u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_4b9374:
    // 0x4b9374: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4b9374u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_4b9378:
    // 0x4b9378: 0x18b5821  addu        $t3, $t4, $t3
    ctx->pc = 0x4b9378u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
label_4b937c:
    // 0x4b937c: 0x16f5821  addu        $t3, $t3, $t7
    ctx->pc = 0x4b937cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
label_4b9380:
    // 0x4b9380: 0xc5600004  lwc1        $f0, 0x4($t3)
    ctx->pc = 0x4b9380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b9384:
    // 0x4b9384: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b9384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b9388:
    // 0x4b9388: 0xe5600004  swc1        $f0, 0x4($t3)
    ctx->pc = 0x4b9388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_4b938c:
    // 0x4b938c: 0x8d4e0004  lw          $t6, 0x4($t2)
    ctx->pc = 0x4b938cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_4b9390:
    // 0x4b9390: 0xee5821  addu        $t3, $a3, $t6
    ctx->pc = 0x4b9390u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
label_4b9394:
    // 0x4b9394: 0x8d6b0004  lw          $t3, 0x4($t3)
    ctx->pc = 0x4b9394u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4b9398:
    // 0x4b9398: 0x1ab582b  sltu        $t3, $t5, $t3
    ctx->pc = 0x4b9398u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_4b939c:
    // 0x4b939c: 0x1560fff4  bnez        $t3, . + 4 + (-0xC << 2)
label_4b93a0:
    if (ctx->pc == 0x4B93A0u) {
        ctx->pc = 0x4B93A0u;
            // 0x4b93a0: 0x25ef000c  addiu       $t7, $t7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
        ctx->pc = 0x4B93A4u;
        goto label_4b93a4;
    }
    ctx->pc = 0x4B939Cu;
    {
        const bool branch_taken_0x4b939c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B93A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B939Cu;
            // 0x4b93a0: 0x25ef000c  addiu       $t7, $t7, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b939c) {
            ctx->pc = 0x4B9370u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b9370;
        }
    }
    ctx->pc = 0x4B93A4u;
label_4b93a4:
    // 0x4b93a4: 0x0  nop
    ctx->pc = 0x4b93a4u;
    // NOP
label_4b93a8:
    // 0x4b93a8: 0x1c75821  addu        $t3, $t6, $a3
    ctx->pc = 0x4b93a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
label_4b93ac:
    // 0x4b93ac: 0x8d6b0004  lw          $t3, 0x4($t3)
    ctx->pc = 0x4b93acu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
label_4b93b0:
    // 0x4b93b0: 0x10b4021  addu        $t0, $t0, $t3
    ctx->pc = 0x4b93b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_4b93b4:
    // 0x4b93b4: 0x0  nop
    ctx->pc = 0x4b93b4u;
    // NOP
label_4b93b8:
    // 0x4b93b8: 0x954b0000  lhu         $t3, 0x0($t2)
    ctx->pc = 0x4b93b8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4b93bc:
    // 0x4b93bc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4b93bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4b93c0:
    // 0x4b93c0: 0x12b582b  sltu        $t3, $t1, $t3
    ctx->pc = 0x4b93c0u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_4b93c4:
    // 0x4b93c4: 0x1560ff92  bnez        $t3, . + 4 + (-0x6E << 2)
label_4b93c8:
    if (ctx->pc == 0x4B93C8u) {
        ctx->pc = 0x4B93C8u;
            // 0x4b93c8: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x4B93CCu;
        goto label_4b93cc;
    }
    ctx->pc = 0x4B93C4u;
    {
        const bool branch_taken_0x4b93c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B93C4u;
            // 0x4b93c8: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b93c4) {
            ctx->pc = 0x4B9210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b9210;
        }
    }
    ctx->pc = 0x4B93CCu;
label_4b93cc:
    // 0x4b93cc: 0x8123d50  j           func_48F540
label_4b93d0:
    if (ctx->pc == 0x4B93D0u) {
        ctx->pc = 0x4B93D4u;
        goto label_4b93d4;
    }
    ctx->pc = 0x4B93CCu;
    ctx->pc = 0x48F540u;
    {
        auto targetFn = runtime->lookupFunction(0x48F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B93D4u;
label_4b93d4:
    // 0x4b93d4: 0x0  nop
    ctx->pc = 0x4b93d4u;
    // NOP
label_4b93d8:
    // 0x4b93d8: 0x0  nop
    ctx->pc = 0x4b93d8u;
    // NOP
label_4b93dc:
    // 0x4b93dc: 0x0  nop
    ctx->pc = 0x4b93dcu;
    // NOP
label_4b93e0:
    // 0x4b93e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b93e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b93e4:
    // 0x4b93e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b93e8:
    // 0x4b93e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b93e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b93ec:
    // 0x4b93ec: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4b93ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b93f0:
    // 0x4b93f0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4b93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4b93f4:
    // 0x4b93f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b93f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b93f8:
    // 0x4b93f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b93fc:
    if (ctx->pc == 0x4B93FCu) {
        ctx->pc = 0x4B9400u;
        goto label_4b9400;
    }
    ctx->pc = 0x4B93F8u;
    {
        const bool branch_taken_0x4b93f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b93f8) {
            ctx->pc = 0x4B9414u;
            goto label_4b9414;
        }
    }
    ctx->pc = 0x4B9400u;
label_4b9400:
    // 0x4b9400: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b9400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b9404:
    // 0x4b9404: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4b9404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_4b9408:
    // 0x4b9408: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b9408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b940c:
    // 0x4b940c: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b9410:
    if (ctx->pc == 0x4B9410u) {
        ctx->pc = 0x4B9410u;
            // 0x4b9410: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x4B9414u;
        goto label_4b9414;
    }
    ctx->pc = 0x4B940Cu;
    {
        const bool branch_taken_0x4b940c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B940Cu;
            // 0x4b9410: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b940c) {
            ctx->pc = 0x4B9424u;
            goto label_4b9424;
        }
    }
    ctx->pc = 0x4B9414u;
label_4b9414:
    // 0x4b9414: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b9414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b9418:
    // 0x4b9418: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4b9418u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_4b941c:
    // 0x4b941c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b9420:
    // 0x4b9420: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4b9420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4b9424:
    // 0x4b9424: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4b9424u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_4b9428:
    // 0x4b9428: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x4b9428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_4b942c:
    // 0x4b942c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x4b942cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_4b9430:
    // 0x4b9430: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x4b9430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_4b9434:
    // 0x4b9434: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x4b9434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_4b9438:
    // 0x4b9438: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4b9438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_4b943c:
    // 0x4b943c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b943cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b9440:
    // 0x4b9440: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4b9440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4b9444:
    // 0x4b9444: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4b9444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_4b9448:
    // 0x4b9448: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x4b9448u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_4b944c:
    // 0x4b944c: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x4b944cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_4b9450:
    // 0x4b9450: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x4b9450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_4b9454:
    // 0x4b9454: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x4b9454u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_4b9458:
    // 0x4b9458: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b9458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b945c:
    // 0x4b945c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9460:
    // 0x4b9460: 0xc0574d8  jal         func_15D360
label_4b9464:
    if (ctx->pc == 0x4B9464u) {
        ctx->pc = 0x4B9464u;
            // 0x4b9464: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x4B9468u;
        goto label_4b9468;
    }
    ctx->pc = 0x4B9460u;
    SET_GPR_U32(ctx, 31, 0x4B9468u);
    ctx->pc = 0x4B9464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9460u;
            // 0x4b9464: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9468u; }
        if (ctx->pc != 0x4B9468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9468u; }
        if (ctx->pc != 0x4B9468u) { return; }
    }
    ctx->pc = 0x4B9468u;
label_4b9468:
    // 0x4b9468: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b9468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b946c:
    // 0x4b946c: 0xc0518ac  jal         func_1462B0
label_4b9470:
    if (ctx->pc == 0x4B9470u) {
        ctx->pc = 0x4B9470u;
            // 0x4b9470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9474u;
        goto label_4b9474;
    }
    ctx->pc = 0x4B946Cu;
    SET_GPR_U32(ctx, 31, 0x4B9474u);
    ctx->pc = 0x4B9470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B946Cu;
            // 0x4b9470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1462B0u;
    if (runtime->hasFunction(0x1462B0u)) {
        auto targetFn = runtime->lookupFunction(0x1462B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9474u; }
        if (ctx->pc != 0x4B9474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001462B0_0x1462b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9474u; }
        if (ctx->pc != 0x4B9474u) { return; }
    }
    ctx->pc = 0x4B9474u;
label_4b9474:
    // 0x4b9474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9478:
    // 0x4b9478: 0x3e00008  jr          $ra
label_4b947c:
    if (ctx->pc == 0x4B947Cu) {
        ctx->pc = 0x4B947Cu;
            // 0x4b947c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4B9480u;
        goto label_4b9480;
    }
    ctx->pc = 0x4B9478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9478u;
            // 0x4b947c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9480u;
label_4b9480:
    // 0x4b9480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b9480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b9484:
    // 0x4b9484: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b9484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b9488:
    // 0x4b9488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b9488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b948c:
    // 0x4b948c: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4b948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b9490:
    // 0x4b9490: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4b9490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4b9494:
    // 0x4b9494: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b9498:
    // 0x4b9498: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b949c:
    if (ctx->pc == 0x4B949Cu) {
        ctx->pc = 0x4B94A0u;
        goto label_4b94a0;
    }
    ctx->pc = 0x4B9498u;
    {
        const bool branch_taken_0x4b9498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9498) {
            ctx->pc = 0x4B94B4u;
            goto label_4b94b4;
        }
    }
    ctx->pc = 0x4B94A0u;
label_4b94a0:
    // 0x4b94a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b94a4:
    // 0x4b94a4: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4b94a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_4b94a8:
    // 0x4b94a8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b94a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b94ac:
    // 0x4b94ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b94b0:
    if (ctx->pc == 0x4B94B0u) {
        ctx->pc = 0x4B94B0u;
            // 0x4b94b0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x4B94B4u;
        goto label_4b94b4;
    }
    ctx->pc = 0x4B94ACu;
    {
        const bool branch_taken_0x4b94ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B94B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B94ACu;
            // 0x4b94b0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b94ac) {
            ctx->pc = 0x4B94C4u;
            goto label_4b94c4;
        }
    }
    ctx->pc = 0x4B94B4u;
label_4b94b4:
    // 0x4b94b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b94b8:
    // 0x4b94b8: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4b94b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_4b94bc:
    // 0x4b94bc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b94bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b94c0:
    // 0x4b94c0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4b94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4b94c4:
    // 0x4b94c4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4b94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_4b94c8:
    // 0x4b94c8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x4b94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_4b94cc:
    // 0x4b94cc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x4b94ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
label_4b94d0:
    // 0x4b94d0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x4b94d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_4b94d4:
    // 0x4b94d4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x4b94d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_4b94d8:
    // 0x4b94d8: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_4b94dc:
    // 0x4b94dc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b94e0:
    // 0x4b94e0: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x4b94e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_4b94e4:
    // 0x4b94e4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4b94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_4b94e8:
    // 0x4b94e8: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x4b94e8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
label_4b94ec:
    // 0x4b94ec: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x4b94ecu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
label_4b94f0:
    // 0x4b94f0: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x4b94f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
label_4b94f4:
    // 0x4b94f4: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x4b94f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
label_4b94f8:
    // 0x4b94f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b94fc:
    // 0x4b94fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b94fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9500:
    // 0x4b9500: 0xc0574d8  jal         func_15D360
label_4b9504:
    if (ctx->pc == 0x4B9504u) {
        ctx->pc = 0x4B9504u;
            // 0x4b9504: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->pc = 0x4B9508u;
        goto label_4b9508;
    }
    ctx->pc = 0x4B9500u;
    SET_GPR_U32(ctx, 31, 0x4B9508u);
    ctx->pc = 0x4B9504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9500u;
            // 0x4b9504: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9508u; }
        if (ctx->pc != 0x4B9508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9508u; }
        if (ctx->pc != 0x4B9508u) { return; }
    }
    ctx->pc = 0x4B9508u;
label_4b9508:
    // 0x4b9508: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b9508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b950c:
    // 0x4b950c: 0xc0518ac  jal         func_1462B0
label_4b9510:
    if (ctx->pc == 0x4B9510u) {
        ctx->pc = 0x4B9510u;
            // 0x4b9510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9514u;
        goto label_4b9514;
    }
    ctx->pc = 0x4B950Cu;
    SET_GPR_U32(ctx, 31, 0x4B9514u);
    ctx->pc = 0x4B9510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B950Cu;
            // 0x4b9510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1462B0u;
    if (runtime->hasFunction(0x1462B0u)) {
        auto targetFn = runtime->lookupFunction(0x1462B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9514u; }
        if (ctx->pc != 0x4B9514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001462B0_0x1462b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9514u; }
        if (ctx->pc != 0x4B9514u) { return; }
    }
    ctx->pc = 0x4B9514u;
label_4b9514:
    // 0x4b9514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9518:
    // 0x4b9518: 0x3e00008  jr          $ra
label_4b951c:
    if (ctx->pc == 0x4B951Cu) {
        ctx->pc = 0x4B951Cu;
            // 0x4b951c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4B9520u;
        goto label_4b9520;
    }
    ctx->pc = 0x4B9518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9518u;
            // 0x4b951c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9520u;
label_4b9520:
    // 0x4b9520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4b9520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4b9524:
    // 0x4b9524: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b9524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b9528:
    // 0x4b9528: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b9528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b952c:
    // 0x4b952c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b952cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b9530:
    // 0x4b9530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b9530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b9534:
    // 0x4b9534: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b9534u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b9538:
    // 0x4b9538: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4b9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b953c:
    // 0x4b953c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4b953cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4b9540:
    // 0x4b9540: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x4b9540u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_4b9544:
    // 0x4b9544: 0x8c700060  lw          $s0, 0x60($v1)
    ctx->pc = 0x4b9544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_4b9548:
    // 0x4b9548: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b954c:
    if (ctx->pc == 0x4B954Cu) {
        ctx->pc = 0x4B954Cu;
            // 0x4b954c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9550u;
        goto label_4b9550;
    }
    ctx->pc = 0x4B9548u;
    {
        const bool branch_taken_0x4b9548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9548u;
            // 0x4b954c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9548) {
            ctx->pc = 0x4B9560u;
            goto label_4b9560;
        }
    }
    ctx->pc = 0x4B9550u;
label_4b9550:
    // 0x4b9550: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x4b9550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
label_4b9554:
    // 0x4b9554: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x4b9554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4b9558:
    // 0x4b9558: 0x10000004  b           . + 4 + (0x4 << 2)
label_4b955c:
    if (ctx->pc == 0x4B955Cu) {
        ctx->pc = 0x4B955Cu;
            // 0x4b955c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B9560u;
        goto label_4b9560;
    }
    ctx->pc = 0x4B9558u;
    {
        const bool branch_taken_0x4b9558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9558u;
            // 0x4b955c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9558) {
            ctx->pc = 0x4B956Cu;
            goto label_4b956c;
        }
    }
    ctx->pc = 0x4B9560u;
label_4b9560:
    // 0x4b9560: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x4b9560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
label_4b9564:
    // 0x4b9564: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x4b9564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_4b9568:
    // 0x4b9568: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4b9568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b956c:
    // 0x4b956c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4b956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b9570:
    // 0x4b9570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b9570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9574:
    // 0x4b9574: 0xc051868  jal         func_1461A0
label_4b9578:
    if (ctx->pc == 0x4B9578u) {
        ctx->pc = 0x4B9578u;
            // 0x4b9578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B957Cu;
        goto label_4b957c;
    }
    ctx->pc = 0x4B9574u;
    SET_GPR_U32(ctx, 31, 0x4B957Cu);
    ctx->pc = 0x4B9578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9574u;
            // 0x4b9578: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461A0u;
    if (runtime->hasFunction(0x1461A0u)) {
        auto targetFn = runtime->lookupFunction(0x1461A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B957Cu; }
        if (ctx->pc != 0x4B957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001461A0_0x1461a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B957Cu; }
        if (ctx->pc != 0x4B957Cu) { return; }
    }
    ctx->pc = 0x4B957Cu;
label_4b957c:
    // 0x4b957c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b957cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9580:
    // 0x4b9580: 0xc0518ac  jal         func_1462B0
label_4b9584:
    if (ctx->pc == 0x4B9584u) {
        ctx->pc = 0x4B9584u;
            // 0x4b9584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9588u;
        goto label_4b9588;
    }
    ctx->pc = 0x4B9580u;
    SET_GPR_U32(ctx, 31, 0x4B9588u);
    ctx->pc = 0x4B9584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9580u;
            // 0x4b9584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1462B0u;
    if (runtime->hasFunction(0x1462B0u)) {
        auto targetFn = runtime->lookupFunction(0x1462B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9588u; }
        if (ctx->pc != 0x4B9588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001462B0_0x1462b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9588u; }
        if (ctx->pc != 0x4B9588u) { return; }
    }
    ctx->pc = 0x4B9588u;
label_4b9588:
    // 0x4b9588: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b9588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b958c:
    // 0x4b958c: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4b958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b9590:
    // 0x4b9590: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4b9590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4b9594:
    // 0x4b9594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b9594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b9598:
    // 0x4b9598: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b959c:
    if (ctx->pc == 0x4B959Cu) {
        ctx->pc = 0x4B95A0u;
        goto label_4b95a0;
    }
    ctx->pc = 0x4B9598u;
    {
        const bool branch_taken_0x4b9598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9598) {
            ctx->pc = 0x4B95B4u;
            goto label_4b95b4;
        }
    }
    ctx->pc = 0x4B95A0u;
label_4b95a0:
    // 0x4b95a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b95a4:
    // 0x4b95a4: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4b95a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_4b95a8:
    // 0x4b95a8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b95a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b95ac:
    // 0x4b95ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b95b0:
    if (ctx->pc == 0x4B95B0u) {
        ctx->pc = 0x4B95B0u;
            // 0x4b95b0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x4B95B4u;
        goto label_4b95b4;
    }
    ctx->pc = 0x4B95ACu;
    {
        const bool branch_taken_0x4b95ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B95B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B95ACu;
            // 0x4b95b0: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b95ac) {
            ctx->pc = 0x4B95C4u;
            goto label_4b95c4;
        }
    }
    ctx->pc = 0x4B95B4u;
label_4b95b4:
    // 0x4b95b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b95b8:
    // 0x4b95b8: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4b95b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_4b95bc:
    // 0x4b95bc: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b95bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b95c0:
    // 0x4b95c0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4b95c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4b95c4:
    // 0x4b95c4: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4b95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_4b95c8:
    // 0x4b95c8: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x4b95c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_4b95cc:
    // 0x4b95cc: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4b95ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_4b95d0:
    // 0x4b95d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b95d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4b95d4:
    // 0x4b95d4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b95d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_4b95d8:
    // 0x4b95d8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4b95d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_4b95dc:
    // 0x4b95dc: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4b95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_4b95e0:
    // 0x4b95e0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4b95e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4b95e4:
    // 0x4b95e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4b95e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4b95e8:
    // 0x4b95e8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b95e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b95ec:
    // 0x4b95ec: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x4b95ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_4b95f0:
    // 0x4b95f0: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x4b95f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
label_4b95f4:
    // 0x4b95f4: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x4b95f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
label_4b95f8:
    // 0x4b95f8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b95f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b95fc:
    // 0x4b95fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b95fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9600:
    // 0x4b9600: 0xc0574d8  jal         func_15D360
label_4b9604:
    if (ctx->pc == 0x4B9604u) {
        ctx->pc = 0x4B9604u;
            // 0x4b9604: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->pc = 0x4B9608u;
        goto label_4b9608;
    }
    ctx->pc = 0x4B9600u;
    SET_GPR_U32(ctx, 31, 0x4B9608u);
    ctx->pc = 0x4B9604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9600u;
            // 0x4b9604: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9608u; }
        if (ctx->pc != 0x4B9608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9608u; }
        if (ctx->pc != 0x4B9608u) { return; }
    }
    ctx->pc = 0x4B9608u;
label_4b9608:
    // 0x4b9608: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4b9608u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b960c:
    // 0x4b960c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b960cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b9610:
    // 0x4b9610: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4b9610u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_4b9614:
    // 0x4b9614: 0x320f809  jalr        $t9
label_4b9618:
    if (ctx->pc == 0x4B9618u) {
        ctx->pc = 0x4B9618u;
            // 0x4b9618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B961Cu;
        goto label_4b961c;
    }
    ctx->pc = 0x4B9614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B961Cu);
        ctx->pc = 0x4B9618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9614u;
            // 0x4b9618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B961Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B961Cu; }
            if (ctx->pc != 0x4B961Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B961Cu;
label_4b961c:
    // 0x4b961c: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4b961cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b9620:
    // 0x4b9620: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x4b9620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_4b9624:
    // 0x4b9624: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4b9624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b9628:
    // 0x4b9628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b962c:
    // 0x4b962c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4b962cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b9630:
    // 0x4b9630: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b9634:
    // 0x4b9634: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4b9634u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4b9638:
    // 0x4b9638: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4b9638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4b963c:
    // 0x4b963c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4b963cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4b9640:
    // 0x4b9640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b9640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b9644:
    // 0x4b9644: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x4b9644u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_4b9648:
    // 0x4b9648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b9648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b964c:
    // 0x4b964c: 0x320f809  jalr        $t9
label_4b9650:
    if (ctx->pc == 0x4B9650u) {
        ctx->pc = 0x4B9650u;
            // 0x4b9650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9654u;
        goto label_4b9654;
    }
    ctx->pc = 0x4B964Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B9654u);
        ctx->pc = 0x4B9650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B964Cu;
            // 0x4b9650: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B9654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B9654u; }
            if (ctx->pc != 0x4B9654u) { return; }
        }
        }
    }
    ctx->pc = 0x4B9654u;
label_4b9654:
    // 0x4b9654: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x4b9654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_4b9658:
    // 0x4b9658: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4b9658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b965c:
    // 0x4b965c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4b965cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4b9660:
    // 0x4b9660: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b9660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b9664:
    // 0x4b9664: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x4b9664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
label_4b9668:
    // 0x4b9668: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b9668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b966c:
    // 0x4b966c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x4b966cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b9670:
    // 0x4b9670: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4b9670u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4b9674:
    // 0x4b9674: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b9674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b9678:
    // 0x4b9678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b9678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b967c:
    // 0x4b967c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x4b967cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_4b9680:
    // 0x4b9680: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x4b9680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4b9684:
    // 0x4b9684: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4b9684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4b9688:
    // 0x4b9688: 0x320f809  jalr        $t9
label_4b968c:
    if (ctx->pc == 0x4B968Cu) {
        ctx->pc = 0x4B968Cu;
            // 0x4b968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9690u;
        goto label_4b9690;
    }
    ctx->pc = 0x4B9688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B9690u);
        ctx->pc = 0x4B968Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9688u;
            // 0x4b968c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B9690u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B9690u; }
            if (ctx->pc != 0x4B9690u) { return; }
        }
        }
    }
    ctx->pc = 0x4B9690u;
label_4b9690:
    // 0x4b9690: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x4b9690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b9694:
    // 0x4b9694: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b9694u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b9698:
    // 0x4b9698: 0x320f809  jalr        $t9
label_4b969c:
    if (ctx->pc == 0x4B969Cu) {
        ctx->pc = 0x4B969Cu;
            // 0x4b969c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B96A0u;
        goto label_4b96a0;
    }
    ctx->pc = 0x4B9698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B96A0u);
        ctx->pc = 0x4B969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9698u;
            // 0x4b969c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B96A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B96A0u; }
            if (ctx->pc != 0x4B96A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B96A0u;
label_4b96a0:
    // 0x4b96a0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4b96a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4b96a4:
    // 0x4b96a4: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x4b96a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_4b96a8:
    // 0x4b96a8: 0x320f809  jalr        $t9
label_4b96ac:
    if (ctx->pc == 0x4B96ACu) {
        ctx->pc = 0x4B96ACu;
            // 0x4b96ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B96B0u;
        goto label_4b96b0;
    }
    ctx->pc = 0x4B96A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B96B0u);
        ctx->pc = 0x4B96ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B96A8u;
            // 0x4b96ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B96B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B96B0u; }
            if (ctx->pc != 0x4B96B0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B96B0u;
label_4b96b0:
    // 0x4b96b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b96b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b96b4:
    // 0x4b96b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b96b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b96b8:
    // 0x4b96b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b96b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b96bc:
    // 0x4b96bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b96bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b96c0:
    // 0x4b96c0: 0x3e00008  jr          $ra
label_4b96c4:
    if (ctx->pc == 0x4B96C4u) {
        ctx->pc = 0x4B96C4u;
            // 0x4b96c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4B96C8u;
        goto label_4b96c8;
    }
    ctx->pc = 0x4B96C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B96C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B96C0u;
            // 0x4b96c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B96C8u;
label_4b96c8:
    // 0x4b96c8: 0x0  nop
    ctx->pc = 0x4b96c8u;
    // NOP
label_4b96cc:
    // 0x4b96cc: 0x0  nop
    ctx->pc = 0x4b96ccu;
    // NOP
label_4b96d0:
    // 0x4b96d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4b96d4:
    // 0x4b96d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b96d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b96d8:
    // 0x4b96d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b96d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4b96dc:
    // 0x4b96dc: 0xc0518ac  jal         func_1462B0
label_4b96e0:
    if (ctx->pc == 0x4B96E0u) {
        ctx->pc = 0x4B96E0u;
            // 0x4b96e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B96E4u;
        goto label_4b96e4;
    }
    ctx->pc = 0x4B96DCu;
    SET_GPR_U32(ctx, 31, 0x4B96E4u);
    ctx->pc = 0x4B96E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B96DCu;
            // 0x4b96e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1462B0u;
    if (runtime->hasFunction(0x1462B0u)) {
        auto targetFn = runtime->lookupFunction(0x1462B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B96E4u; }
        if (ctx->pc != 0x4B96E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001462B0_0x1462b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B96E4u; }
        if (ctx->pc != 0x4B96E4u) { return; }
    }
    ctx->pc = 0x4B96E4u;
label_4b96e4:
    // 0x4b96e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b96e8:
    // 0x4b96e8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x4b96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_4b96ec:
    // 0x4b96ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4b96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4b96f0:
    // 0x4b96f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b96f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b96f4:
    // 0x4b96f4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4b96f8:
    if (ctx->pc == 0x4B96F8u) {
        ctx->pc = 0x4B96FCu;
        goto label_4b96fc;
    }
    ctx->pc = 0x4B96F4u;
    {
        const bool branch_taken_0x4b96f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b96f4) {
            ctx->pc = 0x4B9710u;
            goto label_4b9710;
        }
    }
    ctx->pc = 0x4B96FCu;
label_4b96fc:
    // 0x4b96fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b96fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b9700:
    // 0x4b9700: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x4b9700u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_4b9704:
    // 0x4b9704: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b9704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b9708:
    // 0x4b9708: 0x10000005  b           . + 4 + (0x5 << 2)
label_4b970c:
    if (ctx->pc == 0x4B970Cu) {
        ctx->pc = 0x4B970Cu;
            // 0x4b970c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x4B9710u;
        goto label_4b9710;
    }
    ctx->pc = 0x4B9708u;
    {
        const bool branch_taken_0x4b9708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9708u;
            // 0x4b970c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9708) {
            ctx->pc = 0x4B9720u;
            goto label_4b9720;
        }
    }
    ctx->pc = 0x4B9710u;
label_4b9710:
    // 0x4b9710: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b9710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b9714:
    // 0x4b9714: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x4b9714u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_4b9718:
    // 0x4b9718: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4b9718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_4b971c:
    // 0x4b971c: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x4b971cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_4b9720:
    // 0x4b9720: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x4b9720u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_4b9724:
    // 0x4b9724: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x4b9724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_4b9728:
    // 0x4b9728: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x4b9728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
label_4b972c:
    // 0x4b972c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4b9730:
    // 0x4b9730: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x4b9730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_4b9734:
    // 0x4b9734: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4b9734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_4b9738:
    // 0x4b9738: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x4b9738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
label_4b973c:
    // 0x4b973c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4b973cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4b9740:
    // 0x4b9740: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4b9740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4b9744:
    // 0x4b9744: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b9744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b9748:
    // 0x4b9748: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x4b9748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_4b974c:
    // 0x4b974c: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x4b974cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
label_4b9750:
    // 0x4b9750: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x4b9750u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
label_4b9754:
    // 0x4b9754: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b9754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b9758:
    // 0x4b9758: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4b9758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b975c:
    // 0x4b975c: 0xc0574d8  jal         func_15D360
label_4b9760:
    if (ctx->pc == 0x4B9760u) {
        ctx->pc = 0x4B9760u;
            // 0x4b9760: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->pc = 0x4B9764u;
        goto label_4b9764;
    }
    ctx->pc = 0x4B975Cu;
    SET_GPR_U32(ctx, 31, 0x4B9764u);
    ctx->pc = 0x4B9760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B975Cu;
            // 0x4b9760: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9764u; }
        if (ctx->pc != 0x4B9764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9764u; }
        if (ctx->pc != 0x4B9764u) { return; }
    }
    ctx->pc = 0x4B9764u;
label_4b9764:
    // 0x4b9764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b9764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9768:
    // 0x4b9768: 0x3e00008  jr          $ra
label_4b976c:
    if (ctx->pc == 0x4B976Cu) {
        ctx->pc = 0x4B976Cu;
            // 0x4b976c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4B9770u;
        goto label_4b9770;
    }
    ctx->pc = 0x4B9768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9768u;
            // 0x4b976c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9770u;
label_4b9770:
    // 0x4b9770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b9770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b9774:
    // 0x4b9774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b9774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b9778:
    // 0x4b9778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b977c:
    // 0x4b977c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b9780:
    // 0x4b9780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b9780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9784:
    // 0x4b9784: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4b9788:
    if (ctx->pc == 0x4B9788u) {
        ctx->pc = 0x4B9788u;
            // 0x4b9788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B978Cu;
        goto label_4b978c;
    }
    ctx->pc = 0x4B9784u;
    {
        const bool branch_taken_0x4b9784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9784u;
            // 0x4b9788: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9784) {
            ctx->pc = 0x4B97B8u;
            goto label_4b97b8;
        }
    }
    ctx->pc = 0x4B978Cu;
label_4b978c:
    // 0x4b978c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b9790:
    // 0x4b9790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b9790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9794:
    // 0x4b9794: 0x24420cd0  addiu       $v0, $v0, 0xCD0
    ctx->pc = 0x4b9794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3280));
label_4b9798:
    // 0x4b9798: 0xc125270  jal         func_4949C0
label_4b979c:
    if (ctx->pc == 0x4B979Cu) {
        ctx->pc = 0x4B979Cu;
            // 0x4b979c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B97A0u;
        goto label_4b97a0;
    }
    ctx->pc = 0x4B9798u;
    SET_GPR_U32(ctx, 31, 0x4B97A0u);
    ctx->pc = 0x4B979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9798u;
            // 0x4b979c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4949C0u;
    if (runtime->hasFunction(0x4949C0u)) {
        auto targetFn = runtime->lookupFunction(0x4949C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B97A0u; }
        if (ctx->pc != 0x4B97A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004949C0_0x4949c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B97A0u; }
        if (ctx->pc != 0x4B97A0u) { return; }
    }
    ctx->pc = 0x4B97A0u;
label_4b97a0:
    // 0x4b97a0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b97a4:
    // 0x4b97a4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b97a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b97a8:
    // 0x4b97a8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b97ac:
    if (ctx->pc == 0x4B97ACu) {
        ctx->pc = 0x4B97ACu;
            // 0x4b97ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B97B0u;
        goto label_4b97b0;
    }
    ctx->pc = 0x4B97A8u;
    {
        const bool branch_taken_0x4b97a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b97a8) {
            ctx->pc = 0x4B97ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B97A8u;
            // 0x4b97ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B97BCu;
            goto label_4b97bc;
        }
    }
    ctx->pc = 0x4B97B0u;
label_4b97b0:
    // 0x4b97b0: 0xc0400a8  jal         func_1002A0
label_4b97b4:
    if (ctx->pc == 0x4B97B4u) {
        ctx->pc = 0x4B97B4u;
            // 0x4b97b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B97B8u;
        goto label_4b97b8;
    }
    ctx->pc = 0x4B97B0u;
    SET_GPR_U32(ctx, 31, 0x4B97B8u);
    ctx->pc = 0x4B97B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B97B0u;
            // 0x4b97b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B97B8u; }
        if (ctx->pc != 0x4B97B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B97B8u; }
        if (ctx->pc != 0x4B97B8u) { return; }
    }
    ctx->pc = 0x4B97B8u;
label_4b97b8:
    // 0x4b97b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b97b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b97bc:
    // 0x4b97bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b97bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b97c0:
    // 0x4b97c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b97c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b97c4:
    // 0x4b97c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b97c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b97c8:
    // 0x4b97c8: 0x3e00008  jr          $ra
label_4b97cc:
    if (ctx->pc == 0x4B97CCu) {
        ctx->pc = 0x4B97CCu;
            // 0x4b97cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B97D0u;
        goto label_4b97d0;
    }
    ctx->pc = 0x4B97C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B97CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B97C8u;
            // 0x4b97cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B97D0u;
label_4b97d0:
    // 0x4b97d0: 0x805068c  j           func_141A30
label_4b97d4:
    if (ctx->pc == 0x4B97D4u) {
        ctx->pc = 0x4B97D4u;
            // 0x4b97d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B97D8u;
        goto label_4b97d8;
    }
    ctx->pc = 0x4B97D0u;
    ctx->pc = 0x4B97D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B97D0u;
            // 0x4b97d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00141A30_0x141a30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B97D8u;
label_4b97d8:
    // 0x4b97d8: 0x0  nop
    ctx->pc = 0x4b97d8u;
    // NOP
label_4b97dc:
    // 0x4b97dc: 0x0  nop
    ctx->pc = 0x4b97dcu;
    // NOP
label_4b97e0:
    // 0x4b97e0: 0x805068c  j           func_141A30
label_4b97e4:
    if (ctx->pc == 0x4B97E4u) {
        ctx->pc = 0x4B97E4u;
            // 0x4b97e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B97E8u;
        goto label_4b97e8;
    }
    ctx->pc = 0x4B97E0u;
    ctx->pc = 0x4B97E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B97E0u;
            // 0x4b97e4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00141A30_0x141a30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B97E8u;
label_4b97e8:
    // 0x4b97e8: 0x0  nop
    ctx->pc = 0x4b97e8u;
    // NOP
label_4b97ec:
    // 0x4b97ec: 0x0  nop
    ctx->pc = 0x4b97ecu;
    // NOP
label_4b97f0:
    // 0x4b97f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b97f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b97f4:
    // 0x4b97f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b97f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b97f8:
    // 0x4b97f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b97f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b97fc:
    // 0x4b97fc: 0xc0e3580  jal         func_38D600
label_4b9800:
    if (ctx->pc == 0x4B9800u) {
        ctx->pc = 0x4B9800u;
            // 0x4b9800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9804u;
        goto label_4b9804;
    }
    ctx->pc = 0x4B97FCu;
    SET_GPR_U32(ctx, 31, 0x4B9804u);
    ctx->pc = 0x4B9800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B97FCu;
            // 0x4b9800: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9804u; }
        if (ctx->pc != 0x4B9804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9804u; }
        if (ctx->pc != 0x4B9804u) { return; }
    }
    ctx->pc = 0x4B9804u;
label_4b9804:
    // 0x4b9804: 0x24030071  addiu       $v1, $zero, 0x71
    ctx->pc = 0x4b9804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 113));
label_4b9808:
    // 0x4b9808: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x4b9808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_4b980c:
    // 0x4b980c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b980cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b9810:
    // 0x4b9810: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b9810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9814:
    // 0x4b9814: 0x3e00008  jr          $ra
label_4b9818:
    if (ctx->pc == 0x4B9818u) {
        ctx->pc = 0x4B9818u;
            // 0x4b9818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B981Cu;
        goto label_4b981c;
    }
    ctx->pc = 0x4B9814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9814u;
            // 0x4b9818: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B981Cu;
label_4b981c:
    // 0x4b981c: 0x0  nop
    ctx->pc = 0x4b981cu;
    // NOP
}
