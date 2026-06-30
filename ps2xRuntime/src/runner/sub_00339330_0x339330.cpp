#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00339330
// Address: 0x339330 - 0x339c20
void sub_00339330_0x339330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339330_0x339330");
#endif

    switch (ctx->pc) {
        case 0x339330u: goto label_339330;
        case 0x339334u: goto label_339334;
        case 0x339338u: goto label_339338;
        case 0x33933cu: goto label_33933c;
        case 0x339340u: goto label_339340;
        case 0x339344u: goto label_339344;
        case 0x339348u: goto label_339348;
        case 0x33934cu: goto label_33934c;
        case 0x339350u: goto label_339350;
        case 0x339354u: goto label_339354;
        case 0x339358u: goto label_339358;
        case 0x33935cu: goto label_33935c;
        case 0x339360u: goto label_339360;
        case 0x339364u: goto label_339364;
        case 0x339368u: goto label_339368;
        case 0x33936cu: goto label_33936c;
        case 0x339370u: goto label_339370;
        case 0x339374u: goto label_339374;
        case 0x339378u: goto label_339378;
        case 0x33937cu: goto label_33937c;
        case 0x339380u: goto label_339380;
        case 0x339384u: goto label_339384;
        case 0x339388u: goto label_339388;
        case 0x33938cu: goto label_33938c;
        case 0x339390u: goto label_339390;
        case 0x339394u: goto label_339394;
        case 0x339398u: goto label_339398;
        case 0x33939cu: goto label_33939c;
        case 0x3393a0u: goto label_3393a0;
        case 0x3393a4u: goto label_3393a4;
        case 0x3393a8u: goto label_3393a8;
        case 0x3393acu: goto label_3393ac;
        case 0x3393b0u: goto label_3393b0;
        case 0x3393b4u: goto label_3393b4;
        case 0x3393b8u: goto label_3393b8;
        case 0x3393bcu: goto label_3393bc;
        case 0x3393c0u: goto label_3393c0;
        case 0x3393c4u: goto label_3393c4;
        case 0x3393c8u: goto label_3393c8;
        case 0x3393ccu: goto label_3393cc;
        case 0x3393d0u: goto label_3393d0;
        case 0x3393d4u: goto label_3393d4;
        case 0x3393d8u: goto label_3393d8;
        case 0x3393dcu: goto label_3393dc;
        case 0x3393e0u: goto label_3393e0;
        case 0x3393e4u: goto label_3393e4;
        case 0x3393e8u: goto label_3393e8;
        case 0x3393ecu: goto label_3393ec;
        case 0x3393f0u: goto label_3393f0;
        case 0x3393f4u: goto label_3393f4;
        case 0x3393f8u: goto label_3393f8;
        case 0x3393fcu: goto label_3393fc;
        case 0x339400u: goto label_339400;
        case 0x339404u: goto label_339404;
        case 0x339408u: goto label_339408;
        case 0x33940cu: goto label_33940c;
        case 0x339410u: goto label_339410;
        case 0x339414u: goto label_339414;
        case 0x339418u: goto label_339418;
        case 0x33941cu: goto label_33941c;
        case 0x339420u: goto label_339420;
        case 0x339424u: goto label_339424;
        case 0x339428u: goto label_339428;
        case 0x33942cu: goto label_33942c;
        case 0x339430u: goto label_339430;
        case 0x339434u: goto label_339434;
        case 0x339438u: goto label_339438;
        case 0x33943cu: goto label_33943c;
        case 0x339440u: goto label_339440;
        case 0x339444u: goto label_339444;
        case 0x339448u: goto label_339448;
        case 0x33944cu: goto label_33944c;
        case 0x339450u: goto label_339450;
        case 0x339454u: goto label_339454;
        case 0x339458u: goto label_339458;
        case 0x33945cu: goto label_33945c;
        case 0x339460u: goto label_339460;
        case 0x339464u: goto label_339464;
        case 0x339468u: goto label_339468;
        case 0x33946cu: goto label_33946c;
        case 0x339470u: goto label_339470;
        case 0x339474u: goto label_339474;
        case 0x339478u: goto label_339478;
        case 0x33947cu: goto label_33947c;
        case 0x339480u: goto label_339480;
        case 0x339484u: goto label_339484;
        case 0x339488u: goto label_339488;
        case 0x33948cu: goto label_33948c;
        case 0x339490u: goto label_339490;
        case 0x339494u: goto label_339494;
        case 0x339498u: goto label_339498;
        case 0x33949cu: goto label_33949c;
        case 0x3394a0u: goto label_3394a0;
        case 0x3394a4u: goto label_3394a4;
        case 0x3394a8u: goto label_3394a8;
        case 0x3394acu: goto label_3394ac;
        case 0x3394b0u: goto label_3394b0;
        case 0x3394b4u: goto label_3394b4;
        case 0x3394b8u: goto label_3394b8;
        case 0x3394bcu: goto label_3394bc;
        case 0x3394c0u: goto label_3394c0;
        case 0x3394c4u: goto label_3394c4;
        case 0x3394c8u: goto label_3394c8;
        case 0x3394ccu: goto label_3394cc;
        case 0x3394d0u: goto label_3394d0;
        case 0x3394d4u: goto label_3394d4;
        case 0x3394d8u: goto label_3394d8;
        case 0x3394dcu: goto label_3394dc;
        case 0x3394e0u: goto label_3394e0;
        case 0x3394e4u: goto label_3394e4;
        case 0x3394e8u: goto label_3394e8;
        case 0x3394ecu: goto label_3394ec;
        case 0x3394f0u: goto label_3394f0;
        case 0x3394f4u: goto label_3394f4;
        case 0x3394f8u: goto label_3394f8;
        case 0x3394fcu: goto label_3394fc;
        case 0x339500u: goto label_339500;
        case 0x339504u: goto label_339504;
        case 0x339508u: goto label_339508;
        case 0x33950cu: goto label_33950c;
        case 0x339510u: goto label_339510;
        case 0x339514u: goto label_339514;
        case 0x339518u: goto label_339518;
        case 0x33951cu: goto label_33951c;
        case 0x339520u: goto label_339520;
        case 0x339524u: goto label_339524;
        case 0x339528u: goto label_339528;
        case 0x33952cu: goto label_33952c;
        case 0x339530u: goto label_339530;
        case 0x339534u: goto label_339534;
        case 0x339538u: goto label_339538;
        case 0x33953cu: goto label_33953c;
        case 0x339540u: goto label_339540;
        case 0x339544u: goto label_339544;
        case 0x339548u: goto label_339548;
        case 0x33954cu: goto label_33954c;
        case 0x339550u: goto label_339550;
        case 0x339554u: goto label_339554;
        case 0x339558u: goto label_339558;
        case 0x33955cu: goto label_33955c;
        case 0x339560u: goto label_339560;
        case 0x339564u: goto label_339564;
        case 0x339568u: goto label_339568;
        case 0x33956cu: goto label_33956c;
        case 0x339570u: goto label_339570;
        case 0x339574u: goto label_339574;
        case 0x339578u: goto label_339578;
        case 0x33957cu: goto label_33957c;
        case 0x339580u: goto label_339580;
        case 0x339584u: goto label_339584;
        case 0x339588u: goto label_339588;
        case 0x33958cu: goto label_33958c;
        case 0x339590u: goto label_339590;
        case 0x339594u: goto label_339594;
        case 0x339598u: goto label_339598;
        case 0x33959cu: goto label_33959c;
        case 0x3395a0u: goto label_3395a0;
        case 0x3395a4u: goto label_3395a4;
        case 0x3395a8u: goto label_3395a8;
        case 0x3395acu: goto label_3395ac;
        case 0x3395b0u: goto label_3395b0;
        case 0x3395b4u: goto label_3395b4;
        case 0x3395b8u: goto label_3395b8;
        case 0x3395bcu: goto label_3395bc;
        case 0x3395c0u: goto label_3395c0;
        case 0x3395c4u: goto label_3395c4;
        case 0x3395c8u: goto label_3395c8;
        case 0x3395ccu: goto label_3395cc;
        case 0x3395d0u: goto label_3395d0;
        case 0x3395d4u: goto label_3395d4;
        case 0x3395d8u: goto label_3395d8;
        case 0x3395dcu: goto label_3395dc;
        case 0x3395e0u: goto label_3395e0;
        case 0x3395e4u: goto label_3395e4;
        case 0x3395e8u: goto label_3395e8;
        case 0x3395ecu: goto label_3395ec;
        case 0x3395f0u: goto label_3395f0;
        case 0x3395f4u: goto label_3395f4;
        case 0x3395f8u: goto label_3395f8;
        case 0x3395fcu: goto label_3395fc;
        case 0x339600u: goto label_339600;
        case 0x339604u: goto label_339604;
        case 0x339608u: goto label_339608;
        case 0x33960cu: goto label_33960c;
        case 0x339610u: goto label_339610;
        case 0x339614u: goto label_339614;
        case 0x339618u: goto label_339618;
        case 0x33961cu: goto label_33961c;
        case 0x339620u: goto label_339620;
        case 0x339624u: goto label_339624;
        case 0x339628u: goto label_339628;
        case 0x33962cu: goto label_33962c;
        case 0x339630u: goto label_339630;
        case 0x339634u: goto label_339634;
        case 0x339638u: goto label_339638;
        case 0x33963cu: goto label_33963c;
        case 0x339640u: goto label_339640;
        case 0x339644u: goto label_339644;
        case 0x339648u: goto label_339648;
        case 0x33964cu: goto label_33964c;
        case 0x339650u: goto label_339650;
        case 0x339654u: goto label_339654;
        case 0x339658u: goto label_339658;
        case 0x33965cu: goto label_33965c;
        case 0x339660u: goto label_339660;
        case 0x339664u: goto label_339664;
        case 0x339668u: goto label_339668;
        case 0x33966cu: goto label_33966c;
        case 0x339670u: goto label_339670;
        case 0x339674u: goto label_339674;
        case 0x339678u: goto label_339678;
        case 0x33967cu: goto label_33967c;
        case 0x339680u: goto label_339680;
        case 0x339684u: goto label_339684;
        case 0x339688u: goto label_339688;
        case 0x33968cu: goto label_33968c;
        case 0x339690u: goto label_339690;
        case 0x339694u: goto label_339694;
        case 0x339698u: goto label_339698;
        case 0x33969cu: goto label_33969c;
        case 0x3396a0u: goto label_3396a0;
        case 0x3396a4u: goto label_3396a4;
        case 0x3396a8u: goto label_3396a8;
        case 0x3396acu: goto label_3396ac;
        case 0x3396b0u: goto label_3396b0;
        case 0x3396b4u: goto label_3396b4;
        case 0x3396b8u: goto label_3396b8;
        case 0x3396bcu: goto label_3396bc;
        case 0x3396c0u: goto label_3396c0;
        case 0x3396c4u: goto label_3396c4;
        case 0x3396c8u: goto label_3396c8;
        case 0x3396ccu: goto label_3396cc;
        case 0x3396d0u: goto label_3396d0;
        case 0x3396d4u: goto label_3396d4;
        case 0x3396d8u: goto label_3396d8;
        case 0x3396dcu: goto label_3396dc;
        case 0x3396e0u: goto label_3396e0;
        case 0x3396e4u: goto label_3396e4;
        case 0x3396e8u: goto label_3396e8;
        case 0x3396ecu: goto label_3396ec;
        case 0x3396f0u: goto label_3396f0;
        case 0x3396f4u: goto label_3396f4;
        case 0x3396f8u: goto label_3396f8;
        case 0x3396fcu: goto label_3396fc;
        case 0x339700u: goto label_339700;
        case 0x339704u: goto label_339704;
        case 0x339708u: goto label_339708;
        case 0x33970cu: goto label_33970c;
        case 0x339710u: goto label_339710;
        case 0x339714u: goto label_339714;
        case 0x339718u: goto label_339718;
        case 0x33971cu: goto label_33971c;
        case 0x339720u: goto label_339720;
        case 0x339724u: goto label_339724;
        case 0x339728u: goto label_339728;
        case 0x33972cu: goto label_33972c;
        case 0x339730u: goto label_339730;
        case 0x339734u: goto label_339734;
        case 0x339738u: goto label_339738;
        case 0x33973cu: goto label_33973c;
        case 0x339740u: goto label_339740;
        case 0x339744u: goto label_339744;
        case 0x339748u: goto label_339748;
        case 0x33974cu: goto label_33974c;
        case 0x339750u: goto label_339750;
        case 0x339754u: goto label_339754;
        case 0x339758u: goto label_339758;
        case 0x33975cu: goto label_33975c;
        case 0x339760u: goto label_339760;
        case 0x339764u: goto label_339764;
        case 0x339768u: goto label_339768;
        case 0x33976cu: goto label_33976c;
        case 0x339770u: goto label_339770;
        case 0x339774u: goto label_339774;
        case 0x339778u: goto label_339778;
        case 0x33977cu: goto label_33977c;
        case 0x339780u: goto label_339780;
        case 0x339784u: goto label_339784;
        case 0x339788u: goto label_339788;
        case 0x33978cu: goto label_33978c;
        case 0x339790u: goto label_339790;
        case 0x339794u: goto label_339794;
        case 0x339798u: goto label_339798;
        case 0x33979cu: goto label_33979c;
        case 0x3397a0u: goto label_3397a0;
        case 0x3397a4u: goto label_3397a4;
        case 0x3397a8u: goto label_3397a8;
        case 0x3397acu: goto label_3397ac;
        case 0x3397b0u: goto label_3397b0;
        case 0x3397b4u: goto label_3397b4;
        case 0x3397b8u: goto label_3397b8;
        case 0x3397bcu: goto label_3397bc;
        case 0x3397c0u: goto label_3397c0;
        case 0x3397c4u: goto label_3397c4;
        case 0x3397c8u: goto label_3397c8;
        case 0x3397ccu: goto label_3397cc;
        case 0x3397d0u: goto label_3397d0;
        case 0x3397d4u: goto label_3397d4;
        case 0x3397d8u: goto label_3397d8;
        case 0x3397dcu: goto label_3397dc;
        case 0x3397e0u: goto label_3397e0;
        case 0x3397e4u: goto label_3397e4;
        case 0x3397e8u: goto label_3397e8;
        case 0x3397ecu: goto label_3397ec;
        case 0x3397f0u: goto label_3397f0;
        case 0x3397f4u: goto label_3397f4;
        case 0x3397f8u: goto label_3397f8;
        case 0x3397fcu: goto label_3397fc;
        case 0x339800u: goto label_339800;
        case 0x339804u: goto label_339804;
        case 0x339808u: goto label_339808;
        case 0x33980cu: goto label_33980c;
        case 0x339810u: goto label_339810;
        case 0x339814u: goto label_339814;
        case 0x339818u: goto label_339818;
        case 0x33981cu: goto label_33981c;
        case 0x339820u: goto label_339820;
        case 0x339824u: goto label_339824;
        case 0x339828u: goto label_339828;
        case 0x33982cu: goto label_33982c;
        case 0x339830u: goto label_339830;
        case 0x339834u: goto label_339834;
        case 0x339838u: goto label_339838;
        case 0x33983cu: goto label_33983c;
        case 0x339840u: goto label_339840;
        case 0x339844u: goto label_339844;
        case 0x339848u: goto label_339848;
        case 0x33984cu: goto label_33984c;
        case 0x339850u: goto label_339850;
        case 0x339854u: goto label_339854;
        case 0x339858u: goto label_339858;
        case 0x33985cu: goto label_33985c;
        case 0x339860u: goto label_339860;
        case 0x339864u: goto label_339864;
        case 0x339868u: goto label_339868;
        case 0x33986cu: goto label_33986c;
        case 0x339870u: goto label_339870;
        case 0x339874u: goto label_339874;
        case 0x339878u: goto label_339878;
        case 0x33987cu: goto label_33987c;
        case 0x339880u: goto label_339880;
        case 0x339884u: goto label_339884;
        case 0x339888u: goto label_339888;
        case 0x33988cu: goto label_33988c;
        case 0x339890u: goto label_339890;
        case 0x339894u: goto label_339894;
        case 0x339898u: goto label_339898;
        case 0x33989cu: goto label_33989c;
        case 0x3398a0u: goto label_3398a0;
        case 0x3398a4u: goto label_3398a4;
        case 0x3398a8u: goto label_3398a8;
        case 0x3398acu: goto label_3398ac;
        case 0x3398b0u: goto label_3398b0;
        case 0x3398b4u: goto label_3398b4;
        case 0x3398b8u: goto label_3398b8;
        case 0x3398bcu: goto label_3398bc;
        case 0x3398c0u: goto label_3398c0;
        case 0x3398c4u: goto label_3398c4;
        case 0x3398c8u: goto label_3398c8;
        case 0x3398ccu: goto label_3398cc;
        case 0x3398d0u: goto label_3398d0;
        case 0x3398d4u: goto label_3398d4;
        case 0x3398d8u: goto label_3398d8;
        case 0x3398dcu: goto label_3398dc;
        case 0x3398e0u: goto label_3398e0;
        case 0x3398e4u: goto label_3398e4;
        case 0x3398e8u: goto label_3398e8;
        case 0x3398ecu: goto label_3398ec;
        case 0x3398f0u: goto label_3398f0;
        case 0x3398f4u: goto label_3398f4;
        case 0x3398f8u: goto label_3398f8;
        case 0x3398fcu: goto label_3398fc;
        case 0x339900u: goto label_339900;
        case 0x339904u: goto label_339904;
        case 0x339908u: goto label_339908;
        case 0x33990cu: goto label_33990c;
        case 0x339910u: goto label_339910;
        case 0x339914u: goto label_339914;
        case 0x339918u: goto label_339918;
        case 0x33991cu: goto label_33991c;
        case 0x339920u: goto label_339920;
        case 0x339924u: goto label_339924;
        case 0x339928u: goto label_339928;
        case 0x33992cu: goto label_33992c;
        case 0x339930u: goto label_339930;
        case 0x339934u: goto label_339934;
        case 0x339938u: goto label_339938;
        case 0x33993cu: goto label_33993c;
        case 0x339940u: goto label_339940;
        case 0x339944u: goto label_339944;
        case 0x339948u: goto label_339948;
        case 0x33994cu: goto label_33994c;
        case 0x339950u: goto label_339950;
        case 0x339954u: goto label_339954;
        case 0x339958u: goto label_339958;
        case 0x33995cu: goto label_33995c;
        case 0x339960u: goto label_339960;
        case 0x339964u: goto label_339964;
        case 0x339968u: goto label_339968;
        case 0x33996cu: goto label_33996c;
        case 0x339970u: goto label_339970;
        case 0x339974u: goto label_339974;
        case 0x339978u: goto label_339978;
        case 0x33997cu: goto label_33997c;
        case 0x339980u: goto label_339980;
        case 0x339984u: goto label_339984;
        case 0x339988u: goto label_339988;
        case 0x33998cu: goto label_33998c;
        case 0x339990u: goto label_339990;
        case 0x339994u: goto label_339994;
        case 0x339998u: goto label_339998;
        case 0x33999cu: goto label_33999c;
        case 0x3399a0u: goto label_3399a0;
        case 0x3399a4u: goto label_3399a4;
        case 0x3399a8u: goto label_3399a8;
        case 0x3399acu: goto label_3399ac;
        case 0x3399b0u: goto label_3399b0;
        case 0x3399b4u: goto label_3399b4;
        case 0x3399b8u: goto label_3399b8;
        case 0x3399bcu: goto label_3399bc;
        case 0x3399c0u: goto label_3399c0;
        case 0x3399c4u: goto label_3399c4;
        case 0x3399c8u: goto label_3399c8;
        case 0x3399ccu: goto label_3399cc;
        case 0x3399d0u: goto label_3399d0;
        case 0x3399d4u: goto label_3399d4;
        case 0x3399d8u: goto label_3399d8;
        case 0x3399dcu: goto label_3399dc;
        case 0x3399e0u: goto label_3399e0;
        case 0x3399e4u: goto label_3399e4;
        case 0x3399e8u: goto label_3399e8;
        case 0x3399ecu: goto label_3399ec;
        case 0x3399f0u: goto label_3399f0;
        case 0x3399f4u: goto label_3399f4;
        case 0x3399f8u: goto label_3399f8;
        case 0x3399fcu: goto label_3399fc;
        case 0x339a00u: goto label_339a00;
        case 0x339a04u: goto label_339a04;
        case 0x339a08u: goto label_339a08;
        case 0x339a0cu: goto label_339a0c;
        case 0x339a10u: goto label_339a10;
        case 0x339a14u: goto label_339a14;
        case 0x339a18u: goto label_339a18;
        case 0x339a1cu: goto label_339a1c;
        case 0x339a20u: goto label_339a20;
        case 0x339a24u: goto label_339a24;
        case 0x339a28u: goto label_339a28;
        case 0x339a2cu: goto label_339a2c;
        case 0x339a30u: goto label_339a30;
        case 0x339a34u: goto label_339a34;
        case 0x339a38u: goto label_339a38;
        case 0x339a3cu: goto label_339a3c;
        case 0x339a40u: goto label_339a40;
        case 0x339a44u: goto label_339a44;
        case 0x339a48u: goto label_339a48;
        case 0x339a4cu: goto label_339a4c;
        case 0x339a50u: goto label_339a50;
        case 0x339a54u: goto label_339a54;
        case 0x339a58u: goto label_339a58;
        case 0x339a5cu: goto label_339a5c;
        case 0x339a60u: goto label_339a60;
        case 0x339a64u: goto label_339a64;
        case 0x339a68u: goto label_339a68;
        case 0x339a6cu: goto label_339a6c;
        case 0x339a70u: goto label_339a70;
        case 0x339a74u: goto label_339a74;
        case 0x339a78u: goto label_339a78;
        case 0x339a7cu: goto label_339a7c;
        case 0x339a80u: goto label_339a80;
        case 0x339a84u: goto label_339a84;
        case 0x339a88u: goto label_339a88;
        case 0x339a8cu: goto label_339a8c;
        case 0x339a90u: goto label_339a90;
        case 0x339a94u: goto label_339a94;
        case 0x339a98u: goto label_339a98;
        case 0x339a9cu: goto label_339a9c;
        case 0x339aa0u: goto label_339aa0;
        case 0x339aa4u: goto label_339aa4;
        case 0x339aa8u: goto label_339aa8;
        case 0x339aacu: goto label_339aac;
        case 0x339ab0u: goto label_339ab0;
        case 0x339ab4u: goto label_339ab4;
        case 0x339ab8u: goto label_339ab8;
        case 0x339abcu: goto label_339abc;
        case 0x339ac0u: goto label_339ac0;
        case 0x339ac4u: goto label_339ac4;
        case 0x339ac8u: goto label_339ac8;
        case 0x339accu: goto label_339acc;
        case 0x339ad0u: goto label_339ad0;
        case 0x339ad4u: goto label_339ad4;
        case 0x339ad8u: goto label_339ad8;
        case 0x339adcu: goto label_339adc;
        case 0x339ae0u: goto label_339ae0;
        case 0x339ae4u: goto label_339ae4;
        case 0x339ae8u: goto label_339ae8;
        case 0x339aecu: goto label_339aec;
        case 0x339af0u: goto label_339af0;
        case 0x339af4u: goto label_339af4;
        case 0x339af8u: goto label_339af8;
        case 0x339afcu: goto label_339afc;
        case 0x339b00u: goto label_339b00;
        case 0x339b04u: goto label_339b04;
        case 0x339b08u: goto label_339b08;
        case 0x339b0cu: goto label_339b0c;
        case 0x339b10u: goto label_339b10;
        case 0x339b14u: goto label_339b14;
        case 0x339b18u: goto label_339b18;
        case 0x339b1cu: goto label_339b1c;
        case 0x339b20u: goto label_339b20;
        case 0x339b24u: goto label_339b24;
        case 0x339b28u: goto label_339b28;
        case 0x339b2cu: goto label_339b2c;
        case 0x339b30u: goto label_339b30;
        case 0x339b34u: goto label_339b34;
        case 0x339b38u: goto label_339b38;
        case 0x339b3cu: goto label_339b3c;
        case 0x339b40u: goto label_339b40;
        case 0x339b44u: goto label_339b44;
        case 0x339b48u: goto label_339b48;
        case 0x339b4cu: goto label_339b4c;
        case 0x339b50u: goto label_339b50;
        case 0x339b54u: goto label_339b54;
        case 0x339b58u: goto label_339b58;
        case 0x339b5cu: goto label_339b5c;
        case 0x339b60u: goto label_339b60;
        case 0x339b64u: goto label_339b64;
        case 0x339b68u: goto label_339b68;
        case 0x339b6cu: goto label_339b6c;
        case 0x339b70u: goto label_339b70;
        case 0x339b74u: goto label_339b74;
        case 0x339b78u: goto label_339b78;
        case 0x339b7cu: goto label_339b7c;
        case 0x339b80u: goto label_339b80;
        case 0x339b84u: goto label_339b84;
        case 0x339b88u: goto label_339b88;
        case 0x339b8cu: goto label_339b8c;
        case 0x339b90u: goto label_339b90;
        case 0x339b94u: goto label_339b94;
        case 0x339b98u: goto label_339b98;
        case 0x339b9cu: goto label_339b9c;
        case 0x339ba0u: goto label_339ba0;
        case 0x339ba4u: goto label_339ba4;
        case 0x339ba8u: goto label_339ba8;
        case 0x339bacu: goto label_339bac;
        case 0x339bb0u: goto label_339bb0;
        case 0x339bb4u: goto label_339bb4;
        case 0x339bb8u: goto label_339bb8;
        case 0x339bbcu: goto label_339bbc;
        case 0x339bc0u: goto label_339bc0;
        case 0x339bc4u: goto label_339bc4;
        case 0x339bc8u: goto label_339bc8;
        case 0x339bccu: goto label_339bcc;
        case 0x339bd0u: goto label_339bd0;
        case 0x339bd4u: goto label_339bd4;
        case 0x339bd8u: goto label_339bd8;
        case 0x339bdcu: goto label_339bdc;
        case 0x339be0u: goto label_339be0;
        case 0x339be4u: goto label_339be4;
        case 0x339be8u: goto label_339be8;
        case 0x339becu: goto label_339bec;
        case 0x339bf0u: goto label_339bf0;
        case 0x339bf4u: goto label_339bf4;
        case 0x339bf8u: goto label_339bf8;
        case 0x339bfcu: goto label_339bfc;
        case 0x339c00u: goto label_339c00;
        case 0x339c04u: goto label_339c04;
        case 0x339c08u: goto label_339c08;
        case 0x339c0cu: goto label_339c0c;
        case 0x339c10u: goto label_339c10;
        case 0x339c14u: goto label_339c14;
        case 0x339c18u: goto label_339c18;
        case 0x339c1cu: goto label_339c1c;
        default: break;
    }

    ctx->pc = 0x339330u;

label_339330:
    // 0x339330: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x339330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_339334:
    // 0x339334: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x339334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
label_339338:
    // 0x339338: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x339338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_33933c:
    // 0x33933c: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x33933cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_339340:
    // 0x339340: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x339340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
label_339344:
    // 0x339344: 0xac830058  sw          $v1, 0x58($a0)
    ctx->pc = 0x339344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 3));
label_339348:
    // 0x339348: 0xc4a0005c  lwc1        $f0, 0x5C($a1)
    ctx->pc = 0x339348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_33934c:
    // 0x33934c: 0x3e00008  jr          $ra
label_339350:
    if (ctx->pc == 0x339350u) {
        ctx->pc = 0x339350u;
            // 0x339350: 0xe480005c  swc1        $f0, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->pc = 0x339354u;
        goto label_339354;
    }
    ctx->pc = 0x33934Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33934Cu;
            // 0x339350: 0xe480005c  swc1        $f0, 0x5C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339354u;
label_339354:
    // 0x339354: 0x0  nop
    ctx->pc = 0x339354u;
    // NOP
label_339358:
    // 0x339358: 0x0  nop
    ctx->pc = 0x339358u;
    // NOP
label_33935c:
    // 0x33935c: 0x0  nop
    ctx->pc = 0x33935cu;
    // NOP
label_339360:
    // 0x339360: 0xc481005c  lwc1        $f1, 0x5C($a0)
    ctx->pc = 0x339360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_339364:
    // 0x339364: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x339364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_339368:
    // 0x339368: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x339368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_33936c:
    // 0x33936c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x33936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_339370:
    // 0x339370: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x339370u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
label_339374:
    // 0x339374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x339374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_339378:
    // 0x339378: 0x0  nop
    ctx->pc = 0x339378u;
    // NOP
label_33937c:
    // 0x33937c: 0x0  nop
    ctx->pc = 0x33937cu;
    // NOP
label_339380:
    // 0x339380: 0x3e00008  jr          $ra
label_339384:
    if (ctx->pc == 0x339384u) {
        ctx->pc = 0x339384u;
            // 0x339384: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x339388u;
        goto label_339388;
    }
    ctx->pc = 0x339380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339380u;
            // 0x339384: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339388u;
label_339388:
    // 0x339388: 0x0  nop
    ctx->pc = 0x339388u;
    // NOP
label_33938c:
    // 0x33938c: 0x0  nop
    ctx->pc = 0x33938cu;
    // NOP
label_339390:
    // 0x339390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x339390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_339394:
    // 0x339394: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x339394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_339398:
    // 0x339398: 0xc44207d8  lwc1        $f2, 0x7D8($v0)
    ctx->pc = 0x339398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_33939c:
    // 0x33939c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x33939cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3393a0:
    // 0x3393a0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x3393a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3393a4:
    // 0x3393a4: 0xc46107dc  lwc1        $f1, 0x7DC($v1)
    ctx->pc = 0x3393a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3393a8:
    // 0x3393a8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3393a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3393ac:
    // 0x3393ac: 0xc44007e0  lwc1        $f0, 0x7E0($v0)
    ctx->pc = 0x3393acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3393b0:
    // 0x3393b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3393b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3393b4:
    // 0x3393b4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3393b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3393b8:
    // 0x3393b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3393b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3393bc:
    // 0x3393bc: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x3393bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_3393c0:
    // 0x3393c0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3393c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3393c4:
    // 0x3393c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3393c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3393c8:
    // 0x3393c8: 0x3e00008  jr          $ra
label_3393cc:
    if (ctx->pc == 0x3393CCu) {
        ctx->pc = 0x3393CCu;
            // 0x3393cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3393D0u;
        goto label_3393d0;
    }
    ctx->pc = 0x3393C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3393CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3393C8u;
            // 0x3393cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3393D0u;
label_3393d0:
    // 0x3393d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3393d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3393d4:
    // 0x3393d4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3393d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3393d8:
    // 0x3393d8: 0xc46207c8  lwc1        $f2, 0x7C8($v1)
    ctx->pc = 0x3393d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3393dc:
    // 0x3393dc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3393dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3393e0:
    // 0x3393e0: 0xc46107cc  lwc1        $f1, 0x7CC($v1)
    ctx->pc = 0x3393e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3393e4:
    // 0x3393e4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x3393e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3393e8:
    // 0x3393e8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3393e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3393ec:
    // 0x3393ec: 0xc46007d0  lwc1        $f0, 0x7D0($v1)
    ctx->pc = 0x3393ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3393f0:
    // 0x3393f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x3393f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3393f4:
    // 0x3393f4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3393f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3393f8:
    // 0x3393f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3393f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3393fc:
    // 0x3393fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3393fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_339400:
    // 0x339400: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x339400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_339404:
    // 0x339404: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_339408:
    // 0x339408: 0xac830054  sw          $v1, 0x54($a0)
    ctx->pc = 0x339408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 3));
label_33940c:
    // 0x33940c: 0x3e00008  jr          $ra
label_339410:
    if (ctx->pc == 0x339410u) {
        ctx->pc = 0x339410u;
            // 0x339410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x339414u;
        goto label_339414;
    }
    ctx->pc = 0x33940Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33940Cu;
            // 0x339410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339414u;
label_339414:
    // 0x339414: 0x0  nop
    ctx->pc = 0x339414u;
    // NOP
label_339418:
    // 0x339418: 0x0  nop
    ctx->pc = 0x339418u;
    // NOP
label_33941c:
    // 0x33941c: 0x0  nop
    ctx->pc = 0x33941cu;
    // NOP
label_339420:
    // 0x339420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x339420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_339424:
    // 0x339424: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x339424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_339428:
    // 0x339428: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x339428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33942c:
    // 0x33942c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_339430:
    // 0x339430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x339430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_339434:
    // 0x339434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_339438:
    // 0x339438: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x339438u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_33943c:
    // 0x33943c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33943cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_339440:
    // 0x339440: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x339440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339444:
    // 0x339444: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x339444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_339448:
    // 0x339448: 0x8cb000c8  lw          $s0, 0xC8($a1)
    ctx->pc = 0x339448u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_33944c:
    // 0x33944c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_339450:
    // 0x339450: 0x8c91077c  lw          $s1, 0x77C($a0)
    ctx->pc = 0x339450u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_339454:
    // 0x339454: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x339454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_339458:
    // 0x339458: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x339458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33945c:
    // 0x33945c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x33945cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_339460:
    // 0x339460: 0x1065004a  beq         $v1, $a1, . + 4 + (0x4A << 2)
label_339464:
    if (ctx->pc == 0x339464u) {
        ctx->pc = 0x339464u;
            // 0x339464: 0x26520e84  addiu       $s2, $s2, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
        ctx->pc = 0x339468u;
        goto label_339468;
    }
    ctx->pc = 0x339460u;
    {
        const bool branch_taken_0x339460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x339464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339460u;
            // 0x339464: 0x26520e84  addiu       $s2, $s2, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339460) {
            ctx->pc = 0x33958Cu;
            goto label_33958c;
        }
    }
    ctx->pc = 0x339468u;
label_339468:
    // 0x339468: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x339468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33946c:
    // 0x33946c: 0x10900042  beq         $a0, $s0, . + 4 + (0x42 << 2)
label_339470:
    if (ctx->pc == 0x339470u) {
        ctx->pc = 0x339474u;
        goto label_339474;
    }
    ctx->pc = 0x33946Cu;
    {
        const bool branch_taken_0x33946c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x33946c) {
            ctx->pc = 0x339578u;
            goto label_339578;
        }
    }
    ctx->pc = 0x339474u;
label_339474:
    // 0x339474: 0x8e050e34  lw          $a1, 0xE34($s0)
    ctx->pc = 0x339474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_339478:
    // 0x339478: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x339478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33947c:
    // 0x33947c: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
label_339480:
    if (ctx->pc == 0x339480u) {
        ctx->pc = 0x339484u;
        goto label_339484;
    }
    ctx->pc = 0x33947Cu;
    {
        const bool branch_taken_0x33947c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x33947c) {
            ctx->pc = 0x3394D0u;
            goto label_3394d0;
        }
    }
    ctx->pc = 0x339484u;
label_339484:
    // 0x339484: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x339484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_339488:
    // 0x339488: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x339488u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33948c:
    // 0x33948c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_339490:
    if (ctx->pc == 0x339490u) {
        ctx->pc = 0x339490u;
            // 0x339490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339494u;
        goto label_339494;
    }
    ctx->pc = 0x33948Cu;
    {
        const bool branch_taken_0x33948c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x339490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33948Cu;
            // 0x339490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33948c) {
            ctx->pc = 0x3394A8u;
            goto label_3394a8;
        }
    }
    ctx->pc = 0x339494u;
label_339494:
    // 0x339494: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x339494u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_339498:
    // 0x339498: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33949c:
    if (ctx->pc == 0x33949Cu) {
        ctx->pc = 0x3394A0u;
        goto label_3394a0;
    }
    ctx->pc = 0x339498u;
    {
        const bool branch_taken_0x339498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339498) {
            ctx->pc = 0x3394A8u;
            goto label_3394a8;
        }
    }
    ctx->pc = 0x3394A0u;
label_3394a0:
    // 0x3394a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3394a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3394a4:
    // 0x3394a4: 0x0  nop
    ctx->pc = 0x3394a4u;
    // NOP
label_3394a8:
    // 0x3394a8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3394ac:
    if (ctx->pc == 0x3394ACu) {
        ctx->pc = 0x3394B0u;
        goto label_3394b0;
    }
    ctx->pc = 0x3394A8u;
    {
        const bool branch_taken_0x3394a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3394a8) {
            ctx->pc = 0x3394C8u;
            goto label_3394c8;
        }
    }
    ctx->pc = 0x3394B0u;
label_3394b0:
    // 0x3394b0: 0xc075eb4  jal         func_1D7AD0
label_3394b4:
    if (ctx->pc == 0x3394B4u) {
        ctx->pc = 0x3394B8u;
        goto label_3394b8;
    }
    ctx->pc = 0x3394B0u;
    SET_GPR_U32(ctx, 31, 0x3394B8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3394B8u; }
        if (ctx->pc != 0x3394B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3394B8u; }
        if (ctx->pc != 0x3394B8u) { return; }
    }
    ctx->pc = 0x3394B8u;
label_3394b8:
    // 0x3394b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3394bc:
    if (ctx->pc == 0x3394BCu) {
        ctx->pc = 0x3394C0u;
        goto label_3394c0;
    }
    ctx->pc = 0x3394B8u;
    {
        const bool branch_taken_0x3394b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3394b8) {
            ctx->pc = 0x3394C8u;
            goto label_3394c8;
        }
    }
    ctx->pc = 0x3394C0u;
label_3394c0:
    // 0x3394c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3394c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3394c4:
    // 0x3394c4: 0x0  nop
    ctx->pc = 0x3394c4u;
    // NOP
label_3394c8:
    // 0x3394c8: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
label_3394cc:
    if (ctx->pc == 0x3394CCu) {
        ctx->pc = 0x3394D0u;
        goto label_3394d0;
    }
    ctx->pc = 0x3394C8u;
    {
        const bool branch_taken_0x3394c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3394c8) {
            ctx->pc = 0x339578u;
            goto label_339578;
        }
    }
    ctx->pc = 0x3394D0u;
label_3394d0:
    // 0x3394d0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3394d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3394d4:
    // 0x3394d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3394d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3394d8:
    // 0x3394d8: 0xc0780ac  jal         func_1E02B0
label_3394dc:
    if (ctx->pc == 0x3394DCu) {
        ctx->pc = 0x3394DCu;
            // 0x3394dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3394E0u;
        goto label_3394e0;
    }
    ctx->pc = 0x3394D8u;
    SET_GPR_U32(ctx, 31, 0x3394E0u);
    ctx->pc = 0x3394DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3394D8u;
            // 0x3394dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E02B0u;
    if (runtime->hasFunction(0x1E02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3394E0u; }
        if (ctx->pc != 0x3394E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E02B0_0x1e02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3394E0u; }
        if (ctx->pc != 0x3394E0u) { return; }
    }
    ctx->pc = 0x3394E0u;
label_3394e0:
    // 0x3394e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3394e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3394e4:
    // 0x3394e4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3394e4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3394e8:
    // 0x3394e8: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x3394e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_3394ec:
    // 0x3394ec: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_3394f0:
    if (ctx->pc == 0x3394F0u) {
        ctx->pc = 0x3394F0u;
            // 0x3394f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3394F4u;
        goto label_3394f4;
    }
    ctx->pc = 0x3394ECu;
    {
        const bool branch_taken_0x3394ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3394F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3394ECu;
            // 0x3394f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394ec) {
            ctx->pc = 0x339508u;
            goto label_339508;
        }
    }
    ctx->pc = 0x3394F4u;
label_3394f4:
    // 0x3394f4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3394f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3394f8:
    // 0x3394f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3394fc:
    if (ctx->pc == 0x3394FCu) {
        ctx->pc = 0x339500u;
        goto label_339500;
    }
    ctx->pc = 0x3394F8u;
    {
        const bool branch_taken_0x3394f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3394f8) {
            ctx->pc = 0x339508u;
            goto label_339508;
        }
    }
    ctx->pc = 0x339500u;
label_339500:
    // 0x339500: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339504:
    // 0x339504: 0x0  nop
    ctx->pc = 0x339504u;
    // NOP
label_339508:
    // 0x339508: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_33950c:
    if (ctx->pc == 0x33950Cu) {
        ctx->pc = 0x339510u;
        goto label_339510;
    }
    ctx->pc = 0x339508u;
    {
        const bool branch_taken_0x339508 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339508) {
            ctx->pc = 0x339528u;
            goto label_339528;
        }
    }
    ctx->pc = 0x339510u;
label_339510:
    // 0x339510: 0xc075eb4  jal         func_1D7AD0
label_339514:
    if (ctx->pc == 0x339514u) {
        ctx->pc = 0x339518u;
        goto label_339518;
    }
    ctx->pc = 0x339510u;
    SET_GPR_U32(ctx, 31, 0x339518u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339518u; }
        if (ctx->pc != 0x339518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339518u; }
        if (ctx->pc != 0x339518u) { return; }
    }
    ctx->pc = 0x339518u;
label_339518:
    // 0x339518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_33951c:
    if (ctx->pc == 0x33951Cu) {
        ctx->pc = 0x339520u;
        goto label_339520;
    }
    ctx->pc = 0x339518u;
    {
        const bool branch_taken_0x339518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339518) {
            ctx->pc = 0x339528u;
            goto label_339528;
        }
    }
    ctx->pc = 0x339520u;
label_339520:
    // 0x339520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x339520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339524:
    // 0x339524: 0x0  nop
    ctx->pc = 0x339524u;
    // NOP
label_339528:
    // 0x339528: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_33952c:
    if (ctx->pc == 0x33952Cu) {
        ctx->pc = 0x339530u;
        goto label_339530;
    }
    ctx->pc = 0x339528u;
    {
        const bool branch_taken_0x339528 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x339528) {
            ctx->pc = 0x339578u;
            goto label_339578;
        }
    }
    ctx->pc = 0x339530u;
label_339530:
    // 0x339530: 0xc040180  jal         func_100600
label_339534:
    if (ctx->pc == 0x339534u) {
        ctx->pc = 0x339534u;
            // 0x339534: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x339538u;
        goto label_339538;
    }
    ctx->pc = 0x339530u;
    SET_GPR_U32(ctx, 31, 0x339538u);
    ctx->pc = 0x339534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339530u;
            // 0x339534: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339538u; }
        if (ctx->pc != 0x339538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339538u; }
        if (ctx->pc != 0x339538u) { return; }
    }
    ctx->pc = 0x339538u;
label_339538:
    // 0x339538: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x339538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33953c:
    // 0x33953c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_339540:
    if (ctx->pc == 0x339540u) {
        ctx->pc = 0x339544u;
        goto label_339544;
    }
    ctx->pc = 0x33953Cu;
    {
        const bool branch_taken_0x33953c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33953c) {
            ctx->pc = 0x339578u;
            goto label_339578;
        }
    }
    ctx->pc = 0x339544u;
label_339544:
    // 0x339544: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x339544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339548:
    // 0x339548: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x339548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_33954c:
    // 0x33954c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33954cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339550:
    // 0x339550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339554:
    // 0x339554: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x339554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_339558:
    // 0x339558: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x339558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33955c:
    // 0x33955c: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x33955cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_339560:
    // 0x339560: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x339560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_339564:
    // 0x339564: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x339564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_339568:
    // 0x339568: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x339568u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_33956c:
    // 0x33956c: 0xc13fbe4  jal         func_4FEF90
label_339570:
    if (ctx->pc == 0x339570u) {
        ctx->pc = 0x339570u;
            // 0x339570: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->pc = 0x339574u;
        goto label_339574;
    }
    ctx->pc = 0x33956Cu;
    SET_GPR_U32(ctx, 31, 0x339574u);
    ctx->pc = 0x339570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33956Cu;
            // 0x339570: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339574u; }
        if (ctx->pc != 0x339574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339574u; }
        if (ctx->pc != 0x339574u) { return; }
    }
    ctx->pc = 0x339574u;
label_339574:
    // 0x339574: 0x0  nop
    ctx->pc = 0x339574u;
    // NOP
label_339578:
    // 0x339578: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x339578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_33957c:
    // 0x33957c: 0x1620ffba  bnez        $s1, . + 4 + (-0x46 << 2)
label_339580:
    if (ctx->pc == 0x339580u) {
        ctx->pc = 0x339580u;
            // 0x339580: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x339584u;
        goto label_339584;
    }
    ctx->pc = 0x33957Cu;
    {
        const bool branch_taken_0x33957c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x339580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33957Cu;
            // 0x339580: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33957c) {
            ctx->pc = 0x339468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339468;
        }
    }
    ctx->pc = 0x339584u;
label_339584:
    // 0x339584: 0x1000003c  b           . + 4 + (0x3C << 2)
label_339588:
    if (ctx->pc == 0x339588u) {
        ctx->pc = 0x33958Cu;
        goto label_33958c;
    }
    ctx->pc = 0x339584u;
    {
        const bool branch_taken_0x339584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339584) {
            ctx->pc = 0x339678u;
            goto label_339678;
        }
    }
    ctx->pc = 0x33958Cu;
label_33958c:
    // 0x33958c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33958cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_339590:
    // 0x339590: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x339590u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_339594:
    // 0x339594: 0x320f809  jalr        $t9
label_339598:
    if (ctx->pc == 0x339598u) {
        ctx->pc = 0x33959Cu;
        goto label_33959c;
    }
    ctx->pc = 0x339594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33959Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33959Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33959Cu; }
            if (ctx->pc != 0x33959Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33959Cu;
label_33959c:
    // 0x33959c: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x33959cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3395a0:
    // 0x3395a0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x3395a0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3395a4:
    // 0x3395a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3395a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3395a8:
    // 0x3395a8: 0x0  nop
    ctx->pc = 0x3395a8u;
    // NOP
label_3395ac:
    // 0x3395ac: 0x1812  mflo        $v1
    ctx->pc = 0x3395acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3395b0:
    // 0x3395b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3395b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3395b4:
    // 0x3395b4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3395b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3395b8:
    // 0x3395b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3395b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3395bc:
    // 0x3395bc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3395bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3395c0:
    // 0x3395c0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3395c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3395c4:
    // 0x3395c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3395c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3395c8:
    // 0x3395c8: 0xc0780ac  jal         func_1E02B0
label_3395cc:
    if (ctx->pc == 0x3395CCu) {
        ctx->pc = 0x3395CCu;
            // 0x3395cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3395D0u;
        goto label_3395d0;
    }
    ctx->pc = 0x3395C8u;
    SET_GPR_U32(ctx, 31, 0x3395D0u);
    ctx->pc = 0x3395CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3395C8u;
            // 0x3395cc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E02B0u;
    if (runtime->hasFunction(0x1E02B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E02B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3395D0u; }
        if (ctx->pc != 0x3395D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E02B0_0x1e02b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3395D0u; }
        if (ctx->pc != 0x3395D0u) { return; }
    }
    ctx->pc = 0x3395D0u;
label_3395d0:
    // 0x3395d0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3395d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3395d4:
    // 0x3395d4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3395d4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3395d8:
    // 0x3395d8: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x3395d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_3395dc:
    // 0x3395dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_3395e0:
    if (ctx->pc == 0x3395E0u) {
        ctx->pc = 0x3395E0u;
            // 0x3395e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3395E4u;
        goto label_3395e4;
    }
    ctx->pc = 0x3395DCu;
    {
        const bool branch_taken_0x3395dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3395E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3395DCu;
            // 0x3395e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3395dc) {
            ctx->pc = 0x3395F8u;
            goto label_3395f8;
        }
    }
    ctx->pc = 0x3395E4u;
label_3395e4:
    // 0x3395e4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3395e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3395e8:
    // 0x3395e8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3395ec:
    if (ctx->pc == 0x3395ECu) {
        ctx->pc = 0x3395F0u;
        goto label_3395f0;
    }
    ctx->pc = 0x3395E8u;
    {
        const bool branch_taken_0x3395e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3395e8) {
            ctx->pc = 0x3395F8u;
            goto label_3395f8;
        }
    }
    ctx->pc = 0x3395F0u;
label_3395f0:
    // 0x3395f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3395f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3395f4:
    // 0x3395f4: 0x0  nop
    ctx->pc = 0x3395f4u;
    // NOP
label_3395f8:
    // 0x3395f8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3395fc:
    if (ctx->pc == 0x3395FCu) {
        ctx->pc = 0x339600u;
        goto label_339600;
    }
    ctx->pc = 0x3395F8u;
    {
        const bool branch_taken_0x3395f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3395f8) {
            ctx->pc = 0x339618u;
            goto label_339618;
        }
    }
    ctx->pc = 0x339600u;
label_339600:
    // 0x339600: 0xc075eb4  jal         func_1D7AD0
label_339604:
    if (ctx->pc == 0x339604u) {
        ctx->pc = 0x339608u;
        goto label_339608;
    }
    ctx->pc = 0x339600u;
    SET_GPR_U32(ctx, 31, 0x339608u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339608u; }
        if (ctx->pc != 0x339608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339608u; }
        if (ctx->pc != 0x339608u) { return; }
    }
    ctx->pc = 0x339608u;
label_339608:
    // 0x339608: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_33960c:
    if (ctx->pc == 0x33960Cu) {
        ctx->pc = 0x339610u;
        goto label_339610;
    }
    ctx->pc = 0x339608u;
    {
        const bool branch_taken_0x339608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339608) {
            ctx->pc = 0x339618u;
            goto label_339618;
        }
    }
    ctx->pc = 0x339610u;
label_339610:
    // 0x339610: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x339610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339614:
    // 0x339614: 0x0  nop
    ctx->pc = 0x339614u;
    // NOP
label_339618:
    // 0x339618: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_33961c:
    if (ctx->pc == 0x33961Cu) {
        ctx->pc = 0x339620u;
        goto label_339620;
    }
    ctx->pc = 0x339618u;
    {
        const bool branch_taken_0x339618 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x339618) {
            ctx->pc = 0x339668u;
            goto label_339668;
        }
    }
    ctx->pc = 0x339620u;
label_339620:
    // 0x339620: 0xc040180  jal         func_100600
label_339624:
    if (ctx->pc == 0x339624u) {
        ctx->pc = 0x339624u;
            // 0x339624: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x339628u;
        goto label_339628;
    }
    ctx->pc = 0x339620u;
    SET_GPR_U32(ctx, 31, 0x339628u);
    ctx->pc = 0x339624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339620u;
            // 0x339624: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339628u; }
        if (ctx->pc != 0x339628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339628u; }
        if (ctx->pc != 0x339628u) { return; }
    }
    ctx->pc = 0x339628u;
label_339628:
    // 0x339628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x339628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33962c:
    // 0x33962c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_339630:
    if (ctx->pc == 0x339630u) {
        ctx->pc = 0x339634u;
        goto label_339634;
    }
    ctx->pc = 0x33962Cu;
    {
        const bool branch_taken_0x33962c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33962c) {
            ctx->pc = 0x339668u;
            goto label_339668;
        }
    }
    ctx->pc = 0x339634u;
label_339634:
    // 0x339634: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x339634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339638:
    // 0x339638: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x339638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_33963c:
    // 0x33963c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x33963cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339640:
    // 0x339640: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339644:
    // 0x339644: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x339644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_339648:
    // 0x339648: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x339648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_33964c:
    // 0x33964c: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x33964cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_339650:
    // 0x339650: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x339650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_339654:
    // 0x339654: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x339654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_339658:
    // 0x339658: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x339658u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_33965c:
    // 0x33965c: 0xc13fbe4  jal         func_4FEF90
label_339660:
    if (ctx->pc == 0x339660u) {
        ctx->pc = 0x339660u;
            // 0x339660: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->pc = 0x339664u;
        goto label_339664;
    }
    ctx->pc = 0x33965Cu;
    SET_GPR_U32(ctx, 31, 0x339664u);
    ctx->pc = 0x339660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33965Cu;
            // 0x339660: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339664u; }
        if (ctx->pc != 0x339664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339664u; }
        if (ctx->pc != 0x339664u) { return; }
    }
    ctx->pc = 0x339664u;
label_339664:
    // 0x339664: 0x0  nop
    ctx->pc = 0x339664u;
    // NOP
label_339668:
    // 0x339668: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x339668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_33966c:
    // 0x33966c: 0x1600ffd4  bnez        $s0, . + 4 + (-0x2C << 2)
label_339670:
    if (ctx->pc == 0x339670u) {
        ctx->pc = 0x339670u;
            // 0x339670: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x339674u;
        goto label_339674;
    }
    ctx->pc = 0x33966Cu;
    {
        const bool branch_taken_0x33966c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x339670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33966Cu;
            // 0x339670: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33966c) {
            ctx->pc = 0x3395C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3395c0;
        }
    }
    ctx->pc = 0x339674u;
label_339674:
    // 0x339674: 0x0  nop
    ctx->pc = 0x339674u;
    // NOP
label_339678:
    // 0x339678: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x339678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_33967c:
    // 0x33967c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33967cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_339680:
    // 0x339680: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x339680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339684:
    // 0x339684: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339688:
    // 0x339688: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33968c:
    // 0x33968c: 0x3e00008  jr          $ra
label_339690:
    if (ctx->pc == 0x339690u) {
        ctx->pc = 0x339690u;
            // 0x339690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x339694u;
        goto label_339694;
    }
    ctx->pc = 0x33968Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33968Cu;
            // 0x339690: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339694u;
label_339694:
    // 0x339694: 0x0  nop
    ctx->pc = 0x339694u;
    // NOP
label_339698:
    // 0x339698: 0x0  nop
    ctx->pc = 0x339698u;
    // NOP
label_33969c:
    // 0x33969c: 0x0  nop
    ctx->pc = 0x33969cu;
    // NOP
label_3396a0:
    // 0x3396a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3396a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3396a4:
    // 0x3396a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3396a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3396a8:
    // 0x3396a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3396a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3396ac:
    // 0x3396ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3396acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3396b0:
    // 0x3396b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3396b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3396b4:
    // 0x3396b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3396b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3396b8:
    // 0x3396b8: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x3396b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_3396bc:
    // 0x3396bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3396bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3396c0:
    // 0x3396c0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3396c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3396c4:
    // 0x3396c4: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x3396c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3396c8:
    // 0x3396c8: 0x8cb000c8  lw          $s0, 0xC8($a1)
    ctx->pc = 0x3396c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_3396cc:
    // 0x3396cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3396ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3396d0:
    // 0x3396d0: 0x8c91077c  lw          $s1, 0x77C($a0)
    ctx->pc = 0x3396d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_3396d4:
    // 0x3396d4: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x3396d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_3396d8:
    // 0x3396d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3396d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3396dc:
    // 0x3396dc: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x3396dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_3396e0:
    // 0x3396e0: 0x1065004a  beq         $v1, $a1, . + 4 + (0x4A << 2)
label_3396e4:
    if (ctx->pc == 0x3396E4u) {
        ctx->pc = 0x3396E4u;
            // 0x3396e4: 0x26520e84  addiu       $s2, $s2, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
        ctx->pc = 0x3396E8u;
        goto label_3396e8;
    }
    ctx->pc = 0x3396E0u;
    {
        const bool branch_taken_0x3396e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x3396E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3396E0u;
            // 0x3396e4: 0x26520e84  addiu       $s2, $s2, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3396e0) {
            ctx->pc = 0x33980Cu;
            goto label_33980c;
        }
    }
    ctx->pc = 0x3396E8u;
label_3396e8:
    // 0x3396e8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3396e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3396ec:
    // 0x3396ec: 0x10900042  beq         $a0, $s0, . + 4 + (0x42 << 2)
label_3396f0:
    if (ctx->pc == 0x3396F0u) {
        ctx->pc = 0x3396F4u;
        goto label_3396f4;
    }
    ctx->pc = 0x3396ECu;
    {
        const bool branch_taken_0x3396ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x3396ec) {
            ctx->pc = 0x3397F8u;
            goto label_3397f8;
        }
    }
    ctx->pc = 0x3396F4u;
label_3396f4:
    // 0x3396f4: 0x8e050e34  lw          $a1, 0xE34($s0)
    ctx->pc = 0x3396f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3396f8:
    // 0x3396f8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3396f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3396fc:
    // 0x3396fc: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
label_339700:
    if (ctx->pc == 0x339700u) {
        ctx->pc = 0x339704u;
        goto label_339704;
    }
    ctx->pc = 0x3396FCu;
    {
        const bool branch_taken_0x3396fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3396fc) {
            ctx->pc = 0x339750u;
            goto label_339750;
        }
    }
    ctx->pc = 0x339704u;
label_339704:
    // 0x339704: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x339704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_339708:
    // 0x339708: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x339708u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33970c:
    // 0x33970c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_339710:
    if (ctx->pc == 0x339710u) {
        ctx->pc = 0x339710u;
            // 0x339710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339714u;
        goto label_339714;
    }
    ctx->pc = 0x33970Cu;
    {
        const bool branch_taken_0x33970c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x339710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33970Cu;
            // 0x339710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33970c) {
            ctx->pc = 0x339728u;
            goto label_339728;
        }
    }
    ctx->pc = 0x339714u;
label_339714:
    // 0x339714: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x339714u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_339718:
    // 0x339718: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33971c:
    if (ctx->pc == 0x33971Cu) {
        ctx->pc = 0x339720u;
        goto label_339720;
    }
    ctx->pc = 0x339718u;
    {
        const bool branch_taken_0x339718 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339718) {
            ctx->pc = 0x339728u;
            goto label_339728;
        }
    }
    ctx->pc = 0x339720u;
label_339720:
    // 0x339720: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339724:
    // 0x339724: 0x0  nop
    ctx->pc = 0x339724u;
    // NOP
label_339728:
    // 0x339728: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_33972c:
    if (ctx->pc == 0x33972Cu) {
        ctx->pc = 0x339730u;
        goto label_339730;
    }
    ctx->pc = 0x339728u;
    {
        const bool branch_taken_0x339728 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339728) {
            ctx->pc = 0x339748u;
            goto label_339748;
        }
    }
    ctx->pc = 0x339730u;
label_339730:
    // 0x339730: 0xc075eb4  jal         func_1D7AD0
label_339734:
    if (ctx->pc == 0x339734u) {
        ctx->pc = 0x339738u;
        goto label_339738;
    }
    ctx->pc = 0x339730u;
    SET_GPR_U32(ctx, 31, 0x339738u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339738u; }
        if (ctx->pc != 0x339738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339738u; }
        if (ctx->pc != 0x339738u) { return; }
    }
    ctx->pc = 0x339738u;
label_339738:
    // 0x339738: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_33973c:
    if (ctx->pc == 0x33973Cu) {
        ctx->pc = 0x339740u;
        goto label_339740;
    }
    ctx->pc = 0x339738u;
    {
        const bool branch_taken_0x339738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339738) {
            ctx->pc = 0x339748u;
            goto label_339748;
        }
    }
    ctx->pc = 0x339740u;
label_339740:
    // 0x339740: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x339740u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339744:
    // 0x339744: 0x0  nop
    ctx->pc = 0x339744u;
    // NOP
label_339748:
    // 0x339748: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
label_33974c:
    if (ctx->pc == 0x33974Cu) {
        ctx->pc = 0x339750u;
        goto label_339750;
    }
    ctx->pc = 0x339748u;
    {
        const bool branch_taken_0x339748 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x339748) {
            ctx->pc = 0x3397F8u;
            goto label_3397f8;
        }
    }
    ctx->pc = 0x339750u;
label_339750:
    // 0x339750: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x339750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_339754:
    // 0x339754: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339758:
    // 0x339758: 0xc0780c8  jal         func_1E0320
label_33975c:
    if (ctx->pc == 0x33975Cu) {
        ctx->pc = 0x33975Cu;
            // 0x33975c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x339760u;
        goto label_339760;
    }
    ctx->pc = 0x339758u;
    SET_GPR_U32(ctx, 31, 0x339760u);
    ctx->pc = 0x33975Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339758u;
            // 0x33975c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0320u;
    if (runtime->hasFunction(0x1E0320u)) {
        auto targetFn = runtime->lookupFunction(0x1E0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339760u; }
        if (ctx->pc != 0x339760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0320_0x1e0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339760u; }
        if (ctx->pc != 0x339760u) { return; }
    }
    ctx->pc = 0x339760u;
label_339760:
    // 0x339760: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x339760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339764:
    // 0x339764: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x339764u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_339768:
    // 0x339768: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x339768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_33976c:
    // 0x33976c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_339770:
    if (ctx->pc == 0x339770u) {
        ctx->pc = 0x339770u;
            // 0x339770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339774u;
        goto label_339774;
    }
    ctx->pc = 0x33976Cu;
    {
        const bool branch_taken_0x33976c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x339770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33976Cu;
            // 0x339770: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33976c) {
            ctx->pc = 0x339788u;
            goto label_339788;
        }
    }
    ctx->pc = 0x339774u;
label_339774:
    // 0x339774: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x339774u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_339778:
    // 0x339778: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33977c:
    if (ctx->pc == 0x33977Cu) {
        ctx->pc = 0x339780u;
        goto label_339780;
    }
    ctx->pc = 0x339778u;
    {
        const bool branch_taken_0x339778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339778) {
            ctx->pc = 0x339788u;
            goto label_339788;
        }
    }
    ctx->pc = 0x339780u;
label_339780:
    // 0x339780: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339784:
    // 0x339784: 0x0  nop
    ctx->pc = 0x339784u;
    // NOP
label_339788:
    // 0x339788: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_33978c:
    if (ctx->pc == 0x33978Cu) {
        ctx->pc = 0x339790u;
        goto label_339790;
    }
    ctx->pc = 0x339788u;
    {
        const bool branch_taken_0x339788 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339788) {
            ctx->pc = 0x3397A8u;
            goto label_3397a8;
        }
    }
    ctx->pc = 0x339790u;
label_339790:
    // 0x339790: 0xc075eb4  jal         func_1D7AD0
label_339794:
    if (ctx->pc == 0x339794u) {
        ctx->pc = 0x339798u;
        goto label_339798;
    }
    ctx->pc = 0x339790u;
    SET_GPR_U32(ctx, 31, 0x339798u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339798u; }
        if (ctx->pc != 0x339798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339798u; }
        if (ctx->pc != 0x339798u) { return; }
    }
    ctx->pc = 0x339798u;
label_339798:
    // 0x339798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_33979c:
    if (ctx->pc == 0x33979Cu) {
        ctx->pc = 0x3397A0u;
        goto label_3397a0;
    }
    ctx->pc = 0x339798u;
    {
        const bool branch_taken_0x339798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339798) {
            ctx->pc = 0x3397A8u;
            goto label_3397a8;
        }
    }
    ctx->pc = 0x3397A0u;
label_3397a0:
    // 0x3397a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3397a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3397a4:
    // 0x3397a4: 0x0  nop
    ctx->pc = 0x3397a4u;
    // NOP
label_3397a8:
    // 0x3397a8: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_3397ac:
    if (ctx->pc == 0x3397ACu) {
        ctx->pc = 0x3397B0u;
        goto label_3397b0;
    }
    ctx->pc = 0x3397A8u;
    {
        const bool branch_taken_0x3397a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3397a8) {
            ctx->pc = 0x3397F8u;
            goto label_3397f8;
        }
    }
    ctx->pc = 0x3397B0u;
label_3397b0:
    // 0x3397b0: 0xc040180  jal         func_100600
label_3397b4:
    if (ctx->pc == 0x3397B4u) {
        ctx->pc = 0x3397B4u;
            // 0x3397b4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x3397B8u;
        goto label_3397b8;
    }
    ctx->pc = 0x3397B0u;
    SET_GPR_U32(ctx, 31, 0x3397B8u);
    ctx->pc = 0x3397B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3397B0u;
            // 0x3397b4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3397B8u; }
        if (ctx->pc != 0x3397B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3397B8u; }
        if (ctx->pc != 0x3397B8u) { return; }
    }
    ctx->pc = 0x3397B8u;
label_3397b8:
    // 0x3397b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3397b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3397bc:
    // 0x3397bc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_3397c0:
    if (ctx->pc == 0x3397C0u) {
        ctx->pc = 0x3397C4u;
        goto label_3397c4;
    }
    ctx->pc = 0x3397BCu;
    {
        const bool branch_taken_0x3397bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3397bc) {
            ctx->pc = 0x3397F8u;
            goto label_3397f8;
        }
    }
    ctx->pc = 0x3397C4u;
label_3397c4:
    // 0x3397c4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3397c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3397c8:
    // 0x3397c8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3397c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3397cc:
    // 0x3397cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3397ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3397d0:
    // 0x3397d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3397d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3397d4:
    // 0x3397d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3397d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3397d8:
    // 0x3397d8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3397d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3397dc:
    // 0x3397dc: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x3397dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_3397e0:
    // 0x3397e0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3397e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3397e4:
    // 0x3397e4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3397e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3397e8:
    // 0x3397e8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x3397e8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_3397ec:
    // 0x3397ec: 0xc13fbe4  jal         func_4FEF90
label_3397f0:
    if (ctx->pc == 0x3397F0u) {
        ctx->pc = 0x3397F0u;
            // 0x3397f0: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->pc = 0x3397F4u;
        goto label_3397f4;
    }
    ctx->pc = 0x3397ECu;
    SET_GPR_U32(ctx, 31, 0x3397F4u);
    ctx->pc = 0x3397F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3397ECu;
            // 0x3397f0: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3397F4u; }
        if (ctx->pc != 0x3397F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3397F4u; }
        if (ctx->pc != 0x3397F4u) { return; }
    }
    ctx->pc = 0x3397F4u;
label_3397f4:
    // 0x3397f4: 0x0  nop
    ctx->pc = 0x3397f4u;
    // NOP
label_3397f8:
    // 0x3397f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3397f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3397fc:
    // 0x3397fc: 0x1620ffba  bnez        $s1, . + 4 + (-0x46 << 2)
label_339800:
    if (ctx->pc == 0x339800u) {
        ctx->pc = 0x339800u;
            // 0x339800: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x339804u;
        goto label_339804;
    }
    ctx->pc = 0x3397FCu;
    {
        const bool branch_taken_0x3397fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x339800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3397FCu;
            // 0x339800: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3397fc) {
            ctx->pc = 0x3396E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3396e8;
        }
    }
    ctx->pc = 0x339804u;
label_339804:
    // 0x339804: 0x1000003c  b           . + 4 + (0x3C << 2)
label_339808:
    if (ctx->pc == 0x339808u) {
        ctx->pc = 0x33980Cu;
        goto label_33980c;
    }
    ctx->pc = 0x339804u;
    {
        const bool branch_taken_0x339804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339804) {
            ctx->pc = 0x3398F8u;
            goto label_3398f8;
        }
    }
    ctx->pc = 0x33980Cu;
label_33980c:
    // 0x33980c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x33980cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_339810:
    // 0x339810: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x339810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_339814:
    // 0x339814: 0x320f809  jalr        $t9
label_339818:
    if (ctx->pc == 0x339818u) {
        ctx->pc = 0x33981Cu;
        goto label_33981c;
    }
    ctx->pc = 0x339814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x33981Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x33981Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x33981Cu; }
            if (ctx->pc != 0x33981Cu) { return; }
        }
        }
    }
    ctx->pc = 0x33981Cu;
label_33981c:
    // 0x33981c: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x33981cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_339820:
    // 0x339820: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x339820u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_339824:
    // 0x339824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x339824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339828:
    // 0x339828: 0x0  nop
    ctx->pc = 0x339828u;
    // NOP
label_33982c:
    // 0x33982c: 0x1812  mflo        $v1
    ctx->pc = 0x33982cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_339830:
    // 0x339830: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x339830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_339834:
    // 0x339834: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x339834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_339838:
    // 0x339838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33983c:
    // 0x33983c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x33983cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_339840:
    // 0x339840: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x339840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_339844:
    // 0x339844: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339848:
    // 0x339848: 0xc0780c8  jal         func_1E0320
label_33984c:
    if (ctx->pc == 0x33984Cu) {
        ctx->pc = 0x33984Cu;
            // 0x33984c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x339850u;
        goto label_339850;
    }
    ctx->pc = 0x339848u;
    SET_GPR_U32(ctx, 31, 0x339850u);
    ctx->pc = 0x33984Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339848u;
            // 0x33984c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0320u;
    if (runtime->hasFunction(0x1E0320u)) {
        auto targetFn = runtime->lookupFunction(0x1E0320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339850u; }
        if (ctx->pc != 0x339850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0320_0x1e0320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339850u; }
        if (ctx->pc != 0x339850u) { return; }
    }
    ctx->pc = 0x339850u;
label_339850:
    // 0x339850: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x339850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339854:
    // 0x339854: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x339854u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_339858:
    // 0x339858: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x339858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_33985c:
    // 0x33985c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_339860:
    if (ctx->pc == 0x339860u) {
        ctx->pc = 0x339860u;
            // 0x339860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339864u;
        goto label_339864;
    }
    ctx->pc = 0x33985Cu;
    {
        const bool branch_taken_0x33985c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x339860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33985Cu;
            // 0x339860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33985c) {
            ctx->pc = 0x339878u;
            goto label_339878;
        }
    }
    ctx->pc = 0x339864u;
label_339864:
    // 0x339864: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x339864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_339868:
    // 0x339868: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33986c:
    if (ctx->pc == 0x33986Cu) {
        ctx->pc = 0x339870u;
        goto label_339870;
    }
    ctx->pc = 0x339868u;
    {
        const bool branch_taken_0x339868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339868) {
            ctx->pc = 0x339878u;
            goto label_339878;
        }
    }
    ctx->pc = 0x339870u;
label_339870:
    // 0x339870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339874:
    // 0x339874: 0x0  nop
    ctx->pc = 0x339874u;
    // NOP
label_339878:
    // 0x339878: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_33987c:
    if (ctx->pc == 0x33987Cu) {
        ctx->pc = 0x339880u;
        goto label_339880;
    }
    ctx->pc = 0x339878u;
    {
        const bool branch_taken_0x339878 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339878) {
            ctx->pc = 0x339898u;
            goto label_339898;
        }
    }
    ctx->pc = 0x339880u;
label_339880:
    // 0x339880: 0xc075eb4  jal         func_1D7AD0
label_339884:
    if (ctx->pc == 0x339884u) {
        ctx->pc = 0x339888u;
        goto label_339888;
    }
    ctx->pc = 0x339880u;
    SET_GPR_U32(ctx, 31, 0x339888u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339888u; }
        if (ctx->pc != 0x339888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339888u; }
        if (ctx->pc != 0x339888u) { return; }
    }
    ctx->pc = 0x339888u;
label_339888:
    // 0x339888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_33988c:
    if (ctx->pc == 0x33988Cu) {
        ctx->pc = 0x339890u;
        goto label_339890;
    }
    ctx->pc = 0x339888u;
    {
        const bool branch_taken_0x339888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339888) {
            ctx->pc = 0x339898u;
            goto label_339898;
        }
    }
    ctx->pc = 0x339890u;
label_339890:
    // 0x339890: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x339890u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339894:
    // 0x339894: 0x0  nop
    ctx->pc = 0x339894u;
    // NOP
label_339898:
    // 0x339898: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_33989c:
    if (ctx->pc == 0x33989Cu) {
        ctx->pc = 0x3398A0u;
        goto label_3398a0;
    }
    ctx->pc = 0x339898u;
    {
        const bool branch_taken_0x339898 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x339898) {
            ctx->pc = 0x3398E8u;
            goto label_3398e8;
        }
    }
    ctx->pc = 0x3398A0u;
label_3398a0:
    // 0x3398a0: 0xc040180  jal         func_100600
label_3398a4:
    if (ctx->pc == 0x3398A4u) {
        ctx->pc = 0x3398A4u;
            // 0x3398a4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x3398A8u;
        goto label_3398a8;
    }
    ctx->pc = 0x3398A0u;
    SET_GPR_U32(ctx, 31, 0x3398A8u);
    ctx->pc = 0x3398A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3398A0u;
            // 0x3398a4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3398A8u; }
        if (ctx->pc != 0x3398A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3398A8u; }
        if (ctx->pc != 0x3398A8u) { return; }
    }
    ctx->pc = 0x3398A8u;
label_3398a8:
    // 0x3398a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3398a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3398ac:
    // 0x3398ac: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_3398b0:
    if (ctx->pc == 0x3398B0u) {
        ctx->pc = 0x3398B4u;
        goto label_3398b4;
    }
    ctx->pc = 0x3398ACu;
    {
        const bool branch_taken_0x3398ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3398ac) {
            ctx->pc = 0x3398E8u;
            goto label_3398e8;
        }
    }
    ctx->pc = 0x3398B4u;
label_3398b4:
    // 0x3398b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3398b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3398b8:
    // 0x3398b8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x3398b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_3398bc:
    // 0x3398bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3398bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3398c0:
    // 0x3398c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3398c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3398c4:
    // 0x3398c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3398c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3398c8:
    // 0x3398c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3398c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3398cc:
    // 0x3398cc: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x3398ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_3398d0:
    // 0x3398d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x3398d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_3398d4:
    // 0x3398d4: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x3398d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_3398d8:
    // 0x3398d8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x3398d8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_3398dc:
    // 0x3398dc: 0xc13fbe4  jal         func_4FEF90
label_3398e0:
    if (ctx->pc == 0x3398E0u) {
        ctx->pc = 0x3398E0u;
            // 0x3398e0: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->pc = 0x3398E4u;
        goto label_3398e4;
    }
    ctx->pc = 0x3398DCu;
    SET_GPR_U32(ctx, 31, 0x3398E4u);
    ctx->pc = 0x3398E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3398DCu;
            // 0x3398e0: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3398E4u; }
        if (ctx->pc != 0x3398E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3398E4u; }
        if (ctx->pc != 0x3398E4u) { return; }
    }
    ctx->pc = 0x3398E4u;
label_3398e4:
    // 0x3398e4: 0x0  nop
    ctx->pc = 0x3398e4u;
    // NOP
label_3398e8:
    // 0x3398e8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3398e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3398ec:
    // 0x3398ec: 0x1600ffd4  bnez        $s0, . + 4 + (-0x2C << 2)
label_3398f0:
    if (ctx->pc == 0x3398F0u) {
        ctx->pc = 0x3398F0u;
            // 0x3398f0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x3398F4u;
        goto label_3398f4;
    }
    ctx->pc = 0x3398ECu;
    {
        const bool branch_taken_0x3398ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3398F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3398ECu;
            // 0x3398f0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398ec) {
            ctx->pc = 0x339840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339840;
        }
    }
    ctx->pc = 0x3398F4u;
label_3398f4:
    // 0x3398f4: 0x0  nop
    ctx->pc = 0x3398f4u;
    // NOP
label_3398f8:
    // 0x3398f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3398f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3398fc:
    // 0x3398fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3398fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_339900:
    // 0x339900: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x339900u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339904:
    // 0x339904: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339904u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339908:
    // 0x339908: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_33990c:
    // 0x33990c: 0x3e00008  jr          $ra
label_339910:
    if (ctx->pc == 0x339910u) {
        ctx->pc = 0x339910u;
            // 0x339910: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x339914u;
        goto label_339914;
    }
    ctx->pc = 0x33990Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33990Cu;
            // 0x339910: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339914u;
label_339914:
    // 0x339914: 0x0  nop
    ctx->pc = 0x339914u;
    // NOP
label_339918:
    // 0x339918: 0x0  nop
    ctx->pc = 0x339918u;
    // NOP
label_33991c:
    // 0x33991c: 0x0  nop
    ctx->pc = 0x33991cu;
    // NOP
label_339920:
    // 0x339920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x339920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_339924:
    // 0x339924: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x339924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_339928:
    // 0x339928: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x339928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_33992c:
    // 0x33992c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33992cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_339930:
    // 0x339930: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x339930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_339934:
    // 0x339934: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_339938:
    // 0x339938: 0x3c1200af  lui         $s2, 0xAF
    ctx->pc = 0x339938u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)175 << 16));
label_33993c:
    // 0x33993c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_339940:
    // 0x339940: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x339940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339944:
    // 0x339944: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x339944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_339948:
    // 0x339948: 0x8cb000c8  lw          $s0, 0xC8($a1)
    ctx->pc = 0x339948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_33994c:
    // 0x33994c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_339950:
    // 0x339950: 0x8c91077c  lw          $s1, 0x77C($a0)
    ctx->pc = 0x339950u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1916)));
label_339954:
    // 0x339954: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x339954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_339958:
    // 0x339958: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x339958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_33995c:
    // 0x33995c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x33995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_339960:
    // 0x339960: 0x1065004a  beq         $v1, $a1, . + 4 + (0x4A << 2)
label_339964:
    if (ctx->pc == 0x339964u) {
        ctx->pc = 0x339964u;
            // 0x339964: 0x26520e84  addiu       $s2, $s2, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
        ctx->pc = 0x339968u;
        goto label_339968;
    }
    ctx->pc = 0x339960u;
    {
        const bool branch_taken_0x339960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x339964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339960u;
            // 0x339964: 0x26520e84  addiu       $s2, $s2, 0xE84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3716));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339960) {
            ctx->pc = 0x339A8Cu;
            goto label_339a8c;
        }
    }
    ctx->pc = 0x339968u;
label_339968:
    // 0x339968: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x339968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_33996c:
    // 0x33996c: 0x10900042  beq         $a0, $s0, . + 4 + (0x42 << 2)
label_339970:
    if (ctx->pc == 0x339970u) {
        ctx->pc = 0x339974u;
        goto label_339974;
    }
    ctx->pc = 0x33996Cu;
    {
        const bool branch_taken_0x33996c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x33996c) {
            ctx->pc = 0x339A78u;
            goto label_339a78;
        }
    }
    ctx->pc = 0x339974u;
label_339974:
    // 0x339974: 0x8e050e34  lw          $a1, 0xE34($s0)
    ctx->pc = 0x339974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_339978:
    // 0x339978: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x339978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_33997c:
    // 0x33997c: 0x14a30014  bne         $a1, $v1, . + 4 + (0x14 << 2)
label_339980:
    if (ctx->pc == 0x339980u) {
        ctx->pc = 0x339984u;
        goto label_339984;
    }
    ctx->pc = 0x33997Cu;
    {
        const bool branch_taken_0x33997c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x33997c) {
            ctx->pc = 0x3399D0u;
            goto label_3399d0;
        }
    }
    ctx->pc = 0x339984u;
label_339984:
    // 0x339984: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x339984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_339988:
    // 0x339988: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x339988u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_33998c:
    // 0x33998c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_339990:
    if (ctx->pc == 0x339990u) {
        ctx->pc = 0x339990u;
            // 0x339990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339994u;
        goto label_339994;
    }
    ctx->pc = 0x33998Cu;
    {
        const bool branch_taken_0x33998c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x339990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33998Cu;
            // 0x339990: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33998c) {
            ctx->pc = 0x3399A8u;
            goto label_3399a8;
        }
    }
    ctx->pc = 0x339994u;
label_339994:
    // 0x339994: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x339994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_339998:
    // 0x339998: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33999c:
    if (ctx->pc == 0x33999Cu) {
        ctx->pc = 0x3399A0u;
        goto label_3399a0;
    }
    ctx->pc = 0x339998u;
    {
        const bool branch_taken_0x339998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339998) {
            ctx->pc = 0x3399A8u;
            goto label_3399a8;
        }
    }
    ctx->pc = 0x3399A0u;
label_3399a0:
    // 0x3399a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3399a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3399a4:
    // 0x3399a4: 0x0  nop
    ctx->pc = 0x3399a4u;
    // NOP
label_3399a8:
    // 0x3399a8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_3399ac:
    if (ctx->pc == 0x3399ACu) {
        ctx->pc = 0x3399B0u;
        goto label_3399b0;
    }
    ctx->pc = 0x3399A8u;
    {
        const bool branch_taken_0x3399a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3399a8) {
            ctx->pc = 0x3399C8u;
            goto label_3399c8;
        }
    }
    ctx->pc = 0x3399B0u;
label_3399b0:
    // 0x3399b0: 0xc075eb4  jal         func_1D7AD0
label_3399b4:
    if (ctx->pc == 0x3399B4u) {
        ctx->pc = 0x3399B8u;
        goto label_3399b8;
    }
    ctx->pc = 0x3399B0u;
    SET_GPR_U32(ctx, 31, 0x3399B8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3399B8u; }
        if (ctx->pc != 0x3399B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3399B8u; }
        if (ctx->pc != 0x3399B8u) { return; }
    }
    ctx->pc = 0x3399B8u;
label_3399b8:
    // 0x3399b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3399bc:
    if (ctx->pc == 0x3399BCu) {
        ctx->pc = 0x3399C0u;
        goto label_3399c0;
    }
    ctx->pc = 0x3399B8u;
    {
        const bool branch_taken_0x3399b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3399b8) {
            ctx->pc = 0x3399C8u;
            goto label_3399c8;
        }
    }
    ctx->pc = 0x3399C0u;
label_3399c0:
    // 0x3399c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3399c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3399c4:
    // 0x3399c4: 0x0  nop
    ctx->pc = 0x3399c4u;
    // NOP
label_3399c8:
    // 0x3399c8: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
label_3399cc:
    if (ctx->pc == 0x3399CCu) {
        ctx->pc = 0x3399D0u;
        goto label_3399d0;
    }
    ctx->pc = 0x3399C8u;
    {
        const bool branch_taken_0x3399c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3399c8) {
            ctx->pc = 0x339A78u;
            goto label_339a78;
        }
    }
    ctx->pc = 0x3399D0u;
label_3399d0:
    // 0x3399d0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x3399d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_3399d4:
    // 0x3399d4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3399d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3399d8:
    // 0x3399d8: 0xc078118  jal         func_1E0460
label_3399dc:
    if (ctx->pc == 0x3399DCu) {
        ctx->pc = 0x3399DCu;
            // 0x3399dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x3399E0u;
        goto label_3399e0;
    }
    ctx->pc = 0x3399D8u;
    SET_GPR_U32(ctx, 31, 0x3399E0u);
    ctx->pc = 0x3399DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3399D8u;
            // 0x3399dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0460u;
    if (runtime->hasFunction(0x1E0460u)) {
        auto targetFn = runtime->lookupFunction(0x1E0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3399E0u; }
        if (ctx->pc != 0x3399E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0460_0x1e0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3399E0u; }
        if (ctx->pc != 0x3399E0u) { return; }
    }
    ctx->pc = 0x3399E0u;
label_3399e0:
    // 0x3399e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3399e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3399e4:
    // 0x3399e4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x3399e4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3399e8:
    // 0x3399e8: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x3399e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_3399ec:
    // 0x3399ec: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_3399f0:
    if (ctx->pc == 0x3399F0u) {
        ctx->pc = 0x3399F0u;
            // 0x3399f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3399F4u;
        goto label_3399f4;
    }
    ctx->pc = 0x3399ECu;
    {
        const bool branch_taken_0x3399ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3399F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3399ECu;
            // 0x3399f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399ec) {
            ctx->pc = 0x339A08u;
            goto label_339a08;
        }
    }
    ctx->pc = 0x3399F4u;
label_3399f4:
    // 0x3399f4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3399f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3399f8:
    // 0x3399f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3399fc:
    if (ctx->pc == 0x3399FCu) {
        ctx->pc = 0x339A00u;
        goto label_339a00;
    }
    ctx->pc = 0x3399F8u;
    {
        const bool branch_taken_0x3399f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3399f8) {
            ctx->pc = 0x339A08u;
            goto label_339a08;
        }
    }
    ctx->pc = 0x339A00u;
label_339a00:
    // 0x339a00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x339a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_339a04:
    // 0x339a04: 0x0  nop
    ctx->pc = 0x339a04u;
    // NOP
label_339a08:
    // 0x339a08: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_339a0c:
    if (ctx->pc == 0x339A0Cu) {
        ctx->pc = 0x339A10u;
        goto label_339a10;
    }
    ctx->pc = 0x339A08u;
    {
        const bool branch_taken_0x339a08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339a08) {
            ctx->pc = 0x339A28u;
            goto label_339a28;
        }
    }
    ctx->pc = 0x339A10u;
label_339a10:
    // 0x339a10: 0xc075eb4  jal         func_1D7AD0
label_339a14:
    if (ctx->pc == 0x339A14u) {
        ctx->pc = 0x339A18u;
        goto label_339a18;
    }
    ctx->pc = 0x339A10u;
    SET_GPR_U32(ctx, 31, 0x339A18u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339A18u; }
        if (ctx->pc != 0x339A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339A18u; }
        if (ctx->pc != 0x339A18u) { return; }
    }
    ctx->pc = 0x339A18u;
label_339a18:
    // 0x339a18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_339a1c:
    if (ctx->pc == 0x339A1Cu) {
        ctx->pc = 0x339A20u;
        goto label_339a20;
    }
    ctx->pc = 0x339A18u;
    {
        const bool branch_taken_0x339a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339a18) {
            ctx->pc = 0x339A28u;
            goto label_339a28;
        }
    }
    ctx->pc = 0x339A20u;
label_339a20:
    // 0x339a20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x339a20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339a24:
    // 0x339a24: 0x0  nop
    ctx->pc = 0x339a24u;
    // NOP
label_339a28:
    // 0x339a28: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_339a2c:
    if (ctx->pc == 0x339A2Cu) {
        ctx->pc = 0x339A30u;
        goto label_339a30;
    }
    ctx->pc = 0x339A28u;
    {
        const bool branch_taken_0x339a28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a28) {
            ctx->pc = 0x339A78u;
            goto label_339a78;
        }
    }
    ctx->pc = 0x339A30u;
label_339a30:
    // 0x339a30: 0xc040180  jal         func_100600
label_339a34:
    if (ctx->pc == 0x339A34u) {
        ctx->pc = 0x339A34u;
            // 0x339a34: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x339A38u;
        goto label_339a38;
    }
    ctx->pc = 0x339A30u;
    SET_GPR_U32(ctx, 31, 0x339A38u);
    ctx->pc = 0x339A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339A30u;
            // 0x339a34: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339A38u; }
        if (ctx->pc != 0x339A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339A38u; }
        if (ctx->pc != 0x339A38u) { return; }
    }
    ctx->pc = 0x339A38u;
label_339a38:
    // 0x339a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x339a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339a3c:
    // 0x339a3c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_339a40:
    if (ctx->pc == 0x339A40u) {
        ctx->pc = 0x339A44u;
        goto label_339a44;
    }
    ctx->pc = 0x339A3Cu;
    {
        const bool branch_taken_0x339a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a3c) {
            ctx->pc = 0x339A78u;
            goto label_339a78;
        }
    }
    ctx->pc = 0x339A44u;
label_339a44:
    // 0x339a44: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x339a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339a48:
    // 0x339a48: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x339a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_339a4c:
    // 0x339a4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339a50:
    // 0x339a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339a54:
    // 0x339a54: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x339a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_339a58:
    // 0x339a58: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x339a58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_339a5c:
    // 0x339a5c: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x339a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_339a60:
    // 0x339a60: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x339a60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_339a64:
    // 0x339a64: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x339a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_339a68:
    // 0x339a68: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x339a68u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_339a6c:
    // 0x339a6c: 0xc13fbe4  jal         func_4FEF90
label_339a70:
    if (ctx->pc == 0x339A70u) {
        ctx->pc = 0x339A70u;
            // 0x339a70: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->pc = 0x339A74u;
        goto label_339a74;
    }
    ctx->pc = 0x339A6Cu;
    SET_GPR_U32(ctx, 31, 0x339A74u);
    ctx->pc = 0x339A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339A6Cu;
            // 0x339a70: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339A74u; }
        if (ctx->pc != 0x339A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339A74u; }
        if (ctx->pc != 0x339A74u) { return; }
    }
    ctx->pc = 0x339A74u;
label_339a74:
    // 0x339a74: 0x0  nop
    ctx->pc = 0x339a74u;
    // NOP
label_339a78:
    // 0x339a78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x339a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_339a7c:
    // 0x339a7c: 0x1620ffba  bnez        $s1, . + 4 + (-0x46 << 2)
label_339a80:
    if (ctx->pc == 0x339A80u) {
        ctx->pc = 0x339A80u;
            // 0x339a80: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x339A84u;
        goto label_339a84;
    }
    ctx->pc = 0x339A7Cu;
    {
        const bool branch_taken_0x339a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x339A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339A7Cu;
            // 0x339a80: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a7c) {
            ctx->pc = 0x339968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339968;
        }
    }
    ctx->pc = 0x339A84u;
label_339a84:
    // 0x339a84: 0x1000003c  b           . + 4 + (0x3C << 2)
label_339a88:
    if (ctx->pc == 0x339A88u) {
        ctx->pc = 0x339A8Cu;
        goto label_339a8c;
    }
    ctx->pc = 0x339A84u;
    {
        const bool branch_taken_0x339a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a84) {
            ctx->pc = 0x339B78u;
            goto label_339b78;
        }
    }
    ctx->pc = 0x339A8Cu;
label_339a8c:
    // 0x339a8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x339a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_339a90:
    // 0x339a90: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_339a94:
    // 0x339a94: 0x320f809  jalr        $t9
label_339a98:
    if (ctx->pc == 0x339A98u) {
        ctx->pc = 0x339A9Cu;
        goto label_339a9c;
    }
    ctx->pc = 0x339A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x339A9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x339A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x339A9Cu; }
            if (ctx->pc != 0x339A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x339A9Cu;
label_339a9c:
    // 0x339a9c: 0x8e030d98  lw          $v1, 0xD98($s0)
    ctx->pc = 0x339a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_339aa0:
    // 0x339aa0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x339aa0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_339aa4:
    // 0x339aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x339aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339aa8:
    // 0x339aa8: 0x0  nop
    ctx->pc = 0x339aa8u;
    // NOP
label_339aac:
    // 0x339aac: 0x1812  mflo        $v1
    ctx->pc = 0x339aacu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_339ab0:
    // 0x339ab0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x339ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_339ab4:
    // 0x339ab4: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x339ab4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_339ab8:
    // 0x339ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_339abc:
    // 0x339abc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x339abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_339ac0:
    // 0x339ac0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x339ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_339ac4:
    // 0x339ac4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339ac8:
    // 0x339ac8: 0xc078118  jal         func_1E0460
label_339acc:
    if (ctx->pc == 0x339ACCu) {
        ctx->pc = 0x339ACCu;
            // 0x339acc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x339AD0u;
        goto label_339ad0;
    }
    ctx->pc = 0x339AC8u;
    SET_GPR_U32(ctx, 31, 0x339AD0u);
    ctx->pc = 0x339ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339AC8u;
            // 0x339acc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0460u;
    if (runtime->hasFunction(0x1E0460u)) {
        auto targetFn = runtime->lookupFunction(0x1E0460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339AD0u; }
        if (ctx->pc != 0x339AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0460_0x1e0460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339AD0u; }
        if (ctx->pc != 0x339AD0u) { return; }
    }
    ctx->pc = 0x339AD0u;
label_339ad0:
    // 0x339ad0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x339ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339ad4:
    // 0x339ad4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x339ad4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_339ad8:
    // 0x339ad8: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x339ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
label_339adc:
    // 0x339adc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_339ae0:
    if (ctx->pc == 0x339AE0u) {
        ctx->pc = 0x339AE0u;
            // 0x339ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x339AE4u;
        goto label_339ae4;
    }
    ctx->pc = 0x339ADCu;
    {
        const bool branch_taken_0x339adc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x339AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339ADCu;
            // 0x339ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339adc) {
            ctx->pc = 0x339AF8u;
            goto label_339af8;
        }
    }
    ctx->pc = 0x339AE4u;
label_339ae4:
    // 0x339ae4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x339ae4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_339ae8:
    // 0x339ae8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_339aec:
    if (ctx->pc == 0x339AECu) {
        ctx->pc = 0x339AF0u;
        goto label_339af0;
    }
    ctx->pc = 0x339AE8u;
    {
        const bool branch_taken_0x339ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x339ae8) {
            ctx->pc = 0x339AF8u;
            goto label_339af8;
        }
    }
    ctx->pc = 0x339AF0u;
label_339af0:
    // 0x339af0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x339af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_339af4:
    // 0x339af4: 0x0  nop
    ctx->pc = 0x339af4u;
    // NOP
label_339af8:
    // 0x339af8: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_339afc:
    if (ctx->pc == 0x339AFCu) {
        ctx->pc = 0x339B00u;
        goto label_339b00;
    }
    ctx->pc = 0x339AF8u;
    {
        const bool branch_taken_0x339af8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x339af8) {
            ctx->pc = 0x339B18u;
            goto label_339b18;
        }
    }
    ctx->pc = 0x339B00u;
label_339b00:
    // 0x339b00: 0xc075eb4  jal         func_1D7AD0
label_339b04:
    if (ctx->pc == 0x339B04u) {
        ctx->pc = 0x339B08u;
        goto label_339b08;
    }
    ctx->pc = 0x339B00u;
    SET_GPR_U32(ctx, 31, 0x339B08u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339B08u; }
        if (ctx->pc != 0x339B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339B08u; }
        if (ctx->pc != 0x339B08u) { return; }
    }
    ctx->pc = 0x339B08u;
label_339b08:
    // 0x339b08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_339b0c:
    if (ctx->pc == 0x339B0Cu) {
        ctx->pc = 0x339B10u;
        goto label_339b10;
    }
    ctx->pc = 0x339B08u;
    {
        const bool branch_taken_0x339b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x339b08) {
            ctx->pc = 0x339B18u;
            goto label_339b18;
        }
    }
    ctx->pc = 0x339B10u;
label_339b10:
    // 0x339b10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x339b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339b14:
    // 0x339b14: 0x0  nop
    ctx->pc = 0x339b14u;
    // NOP
label_339b18:
    // 0x339b18: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_339b1c:
    if (ctx->pc == 0x339B1Cu) {
        ctx->pc = 0x339B20u;
        goto label_339b20;
    }
    ctx->pc = 0x339B18u;
    {
        const bool branch_taken_0x339b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b18) {
            ctx->pc = 0x339B68u;
            goto label_339b68;
        }
    }
    ctx->pc = 0x339B20u;
label_339b20:
    // 0x339b20: 0xc040180  jal         func_100600
label_339b24:
    if (ctx->pc == 0x339B24u) {
        ctx->pc = 0x339B24u;
            // 0x339b24: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x339B28u;
        goto label_339b28;
    }
    ctx->pc = 0x339B20u;
    SET_GPR_U32(ctx, 31, 0x339B28u);
    ctx->pc = 0x339B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339B20u;
            // 0x339b24: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339B28u; }
        if (ctx->pc != 0x339B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339B28u; }
        if (ctx->pc != 0x339B28u) { return; }
    }
    ctx->pc = 0x339B28u;
label_339b28:
    // 0x339b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x339b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_339b2c:
    // 0x339b2c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_339b30:
    if (ctx->pc == 0x339B30u) {
        ctx->pc = 0x339B34u;
        goto label_339b34;
    }
    ctx->pc = 0x339B2Cu;
    {
        const bool branch_taken_0x339b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b2c) {
            ctx->pc = 0x339B68u;
            goto label_339b68;
        }
    }
    ctx->pc = 0x339B34u;
label_339b34:
    // 0x339b34: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x339b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_339b38:
    // 0x339b38: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x339b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_339b3c:
    // 0x339b3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x339b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_339b40:
    // 0x339b40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x339b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339b44:
    // 0x339b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x339b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_339b48:
    // 0x339b48: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x339b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_339b4c:
    // 0x339b4c: 0x8c650d98  lw          $a1, 0xD98($v1)
    ctx->pc = 0x339b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3480)));
label_339b50:
    // 0x339b50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x339b50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_339b54:
    // 0x339b54: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x339b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
label_339b58:
    // 0x339b58: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x339b58u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_339b5c:
    // 0x339b5c: 0xc13fbe4  jal         func_4FEF90
label_339b60:
    if (ctx->pc == 0x339B60u) {
        ctx->pc = 0x339B60u;
            // 0x339b60: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->pc = 0x339B64u;
        goto label_339b64;
    }
    ctx->pc = 0x339B5Cu;
    SET_GPR_U32(ctx, 31, 0x339B64u);
    ctx->pc = 0x339B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339B5Cu;
            // 0x339b60: 0x3447a0ff  ori         $a3, $v0, 0xA0FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41215);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FEF90u;
    if (runtime->hasFunction(0x4FEF90u)) {
        auto targetFn = runtime->lookupFunction(0x4FEF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339B64u; }
        if (ctx->pc != 0x339B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FEF90_0x4fef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339B64u; }
        if (ctx->pc != 0x339B64u) { return; }
    }
    ctx->pc = 0x339B64u;
label_339b64:
    // 0x339b64: 0x0  nop
    ctx->pc = 0x339b64u;
    // NOP
label_339b68:
    // 0x339b68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x339b68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_339b6c:
    // 0x339b6c: 0x1600ffd4  bnez        $s0, . + 4 + (-0x2C << 2)
label_339b70:
    if (ctx->pc == 0x339B70u) {
        ctx->pc = 0x339B70u;
            // 0x339b70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x339B74u;
        goto label_339b74;
    }
    ctx->pc = 0x339B6Cu;
    {
        const bool branch_taken_0x339b6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x339B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339B6Cu;
            // 0x339b70: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b6c) {
            ctx->pc = 0x339AC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_339ac0;
        }
    }
    ctx->pc = 0x339B74u;
label_339b74:
    // 0x339b74: 0x0  nop
    ctx->pc = 0x339b74u;
    // NOP
label_339b78:
    // 0x339b78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x339b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_339b7c:
    // 0x339b7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x339b7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_339b80:
    // 0x339b80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x339b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339b84:
    // 0x339b84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339b84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339b88:
    // 0x339b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_339b8c:
    // 0x339b8c: 0x3e00008  jr          $ra
label_339b90:
    if (ctx->pc == 0x339B90u) {
        ctx->pc = 0x339B90u;
            // 0x339b90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x339B94u;
        goto label_339b94;
    }
    ctx->pc = 0x339B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339B8Cu;
            // 0x339b90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x339B94u;
label_339b94:
    // 0x339b94: 0x0  nop
    ctx->pc = 0x339b94u;
    // NOP
label_339b98:
    // 0x339b98: 0x0  nop
    ctx->pc = 0x339b98u;
    // NOP
label_339b9c:
    // 0x339b9c: 0x0  nop
    ctx->pc = 0x339b9cu;
    // NOP
label_339ba0:
    // 0x339ba0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x339ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339ba4:
    // 0x339ba4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x339ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_339ba8:
    // 0x339ba8: 0x8c441d90  lw          $a0, 0x1D90($v0)
    ctx->pc = 0x339ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7568)));
label_339bac:
    // 0x339bac: 0x8c6500c8  lw          $a1, 0xC8($v1)
    ctx->pc = 0x339bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_339bb0:
    // 0x339bb0: 0x814f8f0  j           func_53E3C0
label_339bb4:
    if (ctx->pc == 0x339BB4u) {
        ctx->pc = 0x339BB4u;
            // 0x339bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x339BB8u;
        goto label_339bb8;
    }
    ctx->pc = 0x339BB0u;
    ctx->pc = 0x339BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339BB0u;
            // 0x339bb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x53E3C0u;
    if (runtime->hasFunction(0x53E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x53E3C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0053E3C0_0x53e3c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x339BB8u;
label_339bb8:
    // 0x339bb8: 0x0  nop
    ctx->pc = 0x339bb8u;
    // NOP
label_339bbc:
    // 0x339bbc: 0x0  nop
    ctx->pc = 0x339bbcu;
    // NOP
label_339bc0:
    // 0x339bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_339bc4:
    // 0x339bc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x339bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_339bc8:
    // 0x339bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_339bcc:
    // 0x339bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x339bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_339bd0:
    // 0x339bd0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x339bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_339bd4:
    // 0x339bd4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x339bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_339bd8:
    // 0x339bd8: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x339bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_339bdc:
    // 0x339bdc: 0x24500a50  addiu       $s0, $v0, 0xA50
    ctx->pc = 0x339bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_339be0:
    // 0x339be0: 0xc0754b4  jal         func_1D52D0
label_339be4:
    if (ctx->pc == 0x339BE4u) {
        ctx->pc = 0x339BE4u;
            // 0x339be4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->pc = 0x339BE8u;
        goto label_339be8;
    }
    ctx->pc = 0x339BE0u;
    SET_GPR_U32(ctx, 31, 0x339BE8u);
    ctx->pc = 0x339BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339BE0u;
            // 0x339be4: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339BE8u; }
        if (ctx->pc != 0x339BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339BE8u; }
        if (ctx->pc != 0x339BE8u) { return; }
    }
    ctx->pc = 0x339BE8u;
label_339be8:
    // 0x339be8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x339be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_339bec:
    // 0x339bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x339becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_339bf0:
    // 0x339bf0: 0xc0eea24  jal         func_3BA890
label_339bf4:
    if (ctx->pc == 0x339BF4u) {
        ctx->pc = 0x339BF4u;
            // 0x339bf4: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->pc = 0x339BF8u;
        goto label_339bf8;
    }
    ctx->pc = 0x339BF0u;
    SET_GPR_U32(ctx, 31, 0x339BF8u);
    ctx->pc = 0x339BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x339BF0u;
            // 0x339bf4: 0xe600002c  swc1        $f0, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BA890u;
    if (runtime->hasFunction(0x3BA890u)) {
        auto targetFn = runtime->lookupFunction(0x3BA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339BF8u; }
        if (ctx->pc != 0x339BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BA890_0x3ba890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x339BF8u; }
        if (ctx->pc != 0x339BF8u) { return; }
    }
    ctx->pc = 0x339BF8u;
label_339bf8:
    // 0x339bf8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x339bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_339bfc:
    // 0x339bfc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x339bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_339c00:
    // 0x339c00: 0x90830070  lbu         $v1, 0x70($a0)
    ctx->pc = 0x339c00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
label_339c04:
    // 0x339c04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_339c08:
    // 0x339c08: 0xa0830070  sb          $v1, 0x70($a0)
    ctx->pc = 0x339c08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 3));
label_339c0c:
    // 0x339c0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x339c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_339c10:
    // 0x339c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339c14:
    // 0x339c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x339c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_339c18:
    // 0x339c18: 0x3e00008  jr          $ra
label_339c1c:
    if (ctx->pc == 0x339C1Cu) {
        ctx->pc = 0x339C1Cu;
            // 0x339c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x339C20u;
        goto label_fallthrough_0x339c18;
    }
    ctx->pc = 0x339C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x339C18u;
            // 0x339c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x339c18:
    ctx->pc = 0x339C20u;
}
