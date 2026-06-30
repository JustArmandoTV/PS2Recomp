#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379050
// Address: 0x379050 - 0x379810
void sub_00379050_0x379050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379050_0x379050");
#endif

    switch (ctx->pc) {
        case 0x379050u: goto label_379050;
        case 0x379054u: goto label_379054;
        case 0x379058u: goto label_379058;
        case 0x37905cu: goto label_37905c;
        case 0x379060u: goto label_379060;
        case 0x379064u: goto label_379064;
        case 0x379068u: goto label_379068;
        case 0x37906cu: goto label_37906c;
        case 0x379070u: goto label_379070;
        case 0x379074u: goto label_379074;
        case 0x379078u: goto label_379078;
        case 0x37907cu: goto label_37907c;
        case 0x379080u: goto label_379080;
        case 0x379084u: goto label_379084;
        case 0x379088u: goto label_379088;
        case 0x37908cu: goto label_37908c;
        case 0x379090u: goto label_379090;
        case 0x379094u: goto label_379094;
        case 0x379098u: goto label_379098;
        case 0x37909cu: goto label_37909c;
        case 0x3790a0u: goto label_3790a0;
        case 0x3790a4u: goto label_3790a4;
        case 0x3790a8u: goto label_3790a8;
        case 0x3790acu: goto label_3790ac;
        case 0x3790b0u: goto label_3790b0;
        case 0x3790b4u: goto label_3790b4;
        case 0x3790b8u: goto label_3790b8;
        case 0x3790bcu: goto label_3790bc;
        case 0x3790c0u: goto label_3790c0;
        case 0x3790c4u: goto label_3790c4;
        case 0x3790c8u: goto label_3790c8;
        case 0x3790ccu: goto label_3790cc;
        case 0x3790d0u: goto label_3790d0;
        case 0x3790d4u: goto label_3790d4;
        case 0x3790d8u: goto label_3790d8;
        case 0x3790dcu: goto label_3790dc;
        case 0x3790e0u: goto label_3790e0;
        case 0x3790e4u: goto label_3790e4;
        case 0x3790e8u: goto label_3790e8;
        case 0x3790ecu: goto label_3790ec;
        case 0x3790f0u: goto label_3790f0;
        case 0x3790f4u: goto label_3790f4;
        case 0x3790f8u: goto label_3790f8;
        case 0x3790fcu: goto label_3790fc;
        case 0x379100u: goto label_379100;
        case 0x379104u: goto label_379104;
        case 0x379108u: goto label_379108;
        case 0x37910cu: goto label_37910c;
        case 0x379110u: goto label_379110;
        case 0x379114u: goto label_379114;
        case 0x379118u: goto label_379118;
        case 0x37911cu: goto label_37911c;
        case 0x379120u: goto label_379120;
        case 0x379124u: goto label_379124;
        case 0x379128u: goto label_379128;
        case 0x37912cu: goto label_37912c;
        case 0x379130u: goto label_379130;
        case 0x379134u: goto label_379134;
        case 0x379138u: goto label_379138;
        case 0x37913cu: goto label_37913c;
        case 0x379140u: goto label_379140;
        case 0x379144u: goto label_379144;
        case 0x379148u: goto label_379148;
        case 0x37914cu: goto label_37914c;
        case 0x379150u: goto label_379150;
        case 0x379154u: goto label_379154;
        case 0x379158u: goto label_379158;
        case 0x37915cu: goto label_37915c;
        case 0x379160u: goto label_379160;
        case 0x379164u: goto label_379164;
        case 0x379168u: goto label_379168;
        case 0x37916cu: goto label_37916c;
        case 0x379170u: goto label_379170;
        case 0x379174u: goto label_379174;
        case 0x379178u: goto label_379178;
        case 0x37917cu: goto label_37917c;
        case 0x379180u: goto label_379180;
        case 0x379184u: goto label_379184;
        case 0x379188u: goto label_379188;
        case 0x37918cu: goto label_37918c;
        case 0x379190u: goto label_379190;
        case 0x379194u: goto label_379194;
        case 0x379198u: goto label_379198;
        case 0x37919cu: goto label_37919c;
        case 0x3791a0u: goto label_3791a0;
        case 0x3791a4u: goto label_3791a4;
        case 0x3791a8u: goto label_3791a8;
        case 0x3791acu: goto label_3791ac;
        case 0x3791b0u: goto label_3791b0;
        case 0x3791b4u: goto label_3791b4;
        case 0x3791b8u: goto label_3791b8;
        case 0x3791bcu: goto label_3791bc;
        case 0x3791c0u: goto label_3791c0;
        case 0x3791c4u: goto label_3791c4;
        case 0x3791c8u: goto label_3791c8;
        case 0x3791ccu: goto label_3791cc;
        case 0x3791d0u: goto label_3791d0;
        case 0x3791d4u: goto label_3791d4;
        case 0x3791d8u: goto label_3791d8;
        case 0x3791dcu: goto label_3791dc;
        case 0x3791e0u: goto label_3791e0;
        case 0x3791e4u: goto label_3791e4;
        case 0x3791e8u: goto label_3791e8;
        case 0x3791ecu: goto label_3791ec;
        case 0x3791f0u: goto label_3791f0;
        case 0x3791f4u: goto label_3791f4;
        case 0x3791f8u: goto label_3791f8;
        case 0x3791fcu: goto label_3791fc;
        case 0x379200u: goto label_379200;
        case 0x379204u: goto label_379204;
        case 0x379208u: goto label_379208;
        case 0x37920cu: goto label_37920c;
        case 0x379210u: goto label_379210;
        case 0x379214u: goto label_379214;
        case 0x379218u: goto label_379218;
        case 0x37921cu: goto label_37921c;
        case 0x379220u: goto label_379220;
        case 0x379224u: goto label_379224;
        case 0x379228u: goto label_379228;
        case 0x37922cu: goto label_37922c;
        case 0x379230u: goto label_379230;
        case 0x379234u: goto label_379234;
        case 0x379238u: goto label_379238;
        case 0x37923cu: goto label_37923c;
        case 0x379240u: goto label_379240;
        case 0x379244u: goto label_379244;
        case 0x379248u: goto label_379248;
        case 0x37924cu: goto label_37924c;
        case 0x379250u: goto label_379250;
        case 0x379254u: goto label_379254;
        case 0x379258u: goto label_379258;
        case 0x37925cu: goto label_37925c;
        case 0x379260u: goto label_379260;
        case 0x379264u: goto label_379264;
        case 0x379268u: goto label_379268;
        case 0x37926cu: goto label_37926c;
        case 0x379270u: goto label_379270;
        case 0x379274u: goto label_379274;
        case 0x379278u: goto label_379278;
        case 0x37927cu: goto label_37927c;
        case 0x379280u: goto label_379280;
        case 0x379284u: goto label_379284;
        case 0x379288u: goto label_379288;
        case 0x37928cu: goto label_37928c;
        case 0x379290u: goto label_379290;
        case 0x379294u: goto label_379294;
        case 0x379298u: goto label_379298;
        case 0x37929cu: goto label_37929c;
        case 0x3792a0u: goto label_3792a0;
        case 0x3792a4u: goto label_3792a4;
        case 0x3792a8u: goto label_3792a8;
        case 0x3792acu: goto label_3792ac;
        case 0x3792b0u: goto label_3792b0;
        case 0x3792b4u: goto label_3792b4;
        case 0x3792b8u: goto label_3792b8;
        case 0x3792bcu: goto label_3792bc;
        case 0x3792c0u: goto label_3792c0;
        case 0x3792c4u: goto label_3792c4;
        case 0x3792c8u: goto label_3792c8;
        case 0x3792ccu: goto label_3792cc;
        case 0x3792d0u: goto label_3792d0;
        case 0x3792d4u: goto label_3792d4;
        case 0x3792d8u: goto label_3792d8;
        case 0x3792dcu: goto label_3792dc;
        case 0x3792e0u: goto label_3792e0;
        case 0x3792e4u: goto label_3792e4;
        case 0x3792e8u: goto label_3792e8;
        case 0x3792ecu: goto label_3792ec;
        case 0x3792f0u: goto label_3792f0;
        case 0x3792f4u: goto label_3792f4;
        case 0x3792f8u: goto label_3792f8;
        case 0x3792fcu: goto label_3792fc;
        case 0x379300u: goto label_379300;
        case 0x379304u: goto label_379304;
        case 0x379308u: goto label_379308;
        case 0x37930cu: goto label_37930c;
        case 0x379310u: goto label_379310;
        case 0x379314u: goto label_379314;
        case 0x379318u: goto label_379318;
        case 0x37931cu: goto label_37931c;
        case 0x379320u: goto label_379320;
        case 0x379324u: goto label_379324;
        case 0x379328u: goto label_379328;
        case 0x37932cu: goto label_37932c;
        case 0x379330u: goto label_379330;
        case 0x379334u: goto label_379334;
        case 0x379338u: goto label_379338;
        case 0x37933cu: goto label_37933c;
        case 0x379340u: goto label_379340;
        case 0x379344u: goto label_379344;
        case 0x379348u: goto label_379348;
        case 0x37934cu: goto label_37934c;
        case 0x379350u: goto label_379350;
        case 0x379354u: goto label_379354;
        case 0x379358u: goto label_379358;
        case 0x37935cu: goto label_37935c;
        case 0x379360u: goto label_379360;
        case 0x379364u: goto label_379364;
        case 0x379368u: goto label_379368;
        case 0x37936cu: goto label_37936c;
        case 0x379370u: goto label_379370;
        case 0x379374u: goto label_379374;
        case 0x379378u: goto label_379378;
        case 0x37937cu: goto label_37937c;
        case 0x379380u: goto label_379380;
        case 0x379384u: goto label_379384;
        case 0x379388u: goto label_379388;
        case 0x37938cu: goto label_37938c;
        case 0x379390u: goto label_379390;
        case 0x379394u: goto label_379394;
        case 0x379398u: goto label_379398;
        case 0x37939cu: goto label_37939c;
        case 0x3793a0u: goto label_3793a0;
        case 0x3793a4u: goto label_3793a4;
        case 0x3793a8u: goto label_3793a8;
        case 0x3793acu: goto label_3793ac;
        case 0x3793b0u: goto label_3793b0;
        case 0x3793b4u: goto label_3793b4;
        case 0x3793b8u: goto label_3793b8;
        case 0x3793bcu: goto label_3793bc;
        case 0x3793c0u: goto label_3793c0;
        case 0x3793c4u: goto label_3793c4;
        case 0x3793c8u: goto label_3793c8;
        case 0x3793ccu: goto label_3793cc;
        case 0x3793d0u: goto label_3793d0;
        case 0x3793d4u: goto label_3793d4;
        case 0x3793d8u: goto label_3793d8;
        case 0x3793dcu: goto label_3793dc;
        case 0x3793e0u: goto label_3793e0;
        case 0x3793e4u: goto label_3793e4;
        case 0x3793e8u: goto label_3793e8;
        case 0x3793ecu: goto label_3793ec;
        case 0x3793f0u: goto label_3793f0;
        case 0x3793f4u: goto label_3793f4;
        case 0x3793f8u: goto label_3793f8;
        case 0x3793fcu: goto label_3793fc;
        case 0x379400u: goto label_379400;
        case 0x379404u: goto label_379404;
        case 0x379408u: goto label_379408;
        case 0x37940cu: goto label_37940c;
        case 0x379410u: goto label_379410;
        case 0x379414u: goto label_379414;
        case 0x379418u: goto label_379418;
        case 0x37941cu: goto label_37941c;
        case 0x379420u: goto label_379420;
        case 0x379424u: goto label_379424;
        case 0x379428u: goto label_379428;
        case 0x37942cu: goto label_37942c;
        case 0x379430u: goto label_379430;
        case 0x379434u: goto label_379434;
        case 0x379438u: goto label_379438;
        case 0x37943cu: goto label_37943c;
        case 0x379440u: goto label_379440;
        case 0x379444u: goto label_379444;
        case 0x379448u: goto label_379448;
        case 0x37944cu: goto label_37944c;
        case 0x379450u: goto label_379450;
        case 0x379454u: goto label_379454;
        case 0x379458u: goto label_379458;
        case 0x37945cu: goto label_37945c;
        case 0x379460u: goto label_379460;
        case 0x379464u: goto label_379464;
        case 0x379468u: goto label_379468;
        case 0x37946cu: goto label_37946c;
        case 0x379470u: goto label_379470;
        case 0x379474u: goto label_379474;
        case 0x379478u: goto label_379478;
        case 0x37947cu: goto label_37947c;
        case 0x379480u: goto label_379480;
        case 0x379484u: goto label_379484;
        case 0x379488u: goto label_379488;
        case 0x37948cu: goto label_37948c;
        case 0x379490u: goto label_379490;
        case 0x379494u: goto label_379494;
        case 0x379498u: goto label_379498;
        case 0x37949cu: goto label_37949c;
        case 0x3794a0u: goto label_3794a0;
        case 0x3794a4u: goto label_3794a4;
        case 0x3794a8u: goto label_3794a8;
        case 0x3794acu: goto label_3794ac;
        case 0x3794b0u: goto label_3794b0;
        case 0x3794b4u: goto label_3794b4;
        case 0x3794b8u: goto label_3794b8;
        case 0x3794bcu: goto label_3794bc;
        case 0x3794c0u: goto label_3794c0;
        case 0x3794c4u: goto label_3794c4;
        case 0x3794c8u: goto label_3794c8;
        case 0x3794ccu: goto label_3794cc;
        case 0x3794d0u: goto label_3794d0;
        case 0x3794d4u: goto label_3794d4;
        case 0x3794d8u: goto label_3794d8;
        case 0x3794dcu: goto label_3794dc;
        case 0x3794e0u: goto label_3794e0;
        case 0x3794e4u: goto label_3794e4;
        case 0x3794e8u: goto label_3794e8;
        case 0x3794ecu: goto label_3794ec;
        case 0x3794f0u: goto label_3794f0;
        case 0x3794f4u: goto label_3794f4;
        case 0x3794f8u: goto label_3794f8;
        case 0x3794fcu: goto label_3794fc;
        case 0x379500u: goto label_379500;
        case 0x379504u: goto label_379504;
        case 0x379508u: goto label_379508;
        case 0x37950cu: goto label_37950c;
        case 0x379510u: goto label_379510;
        case 0x379514u: goto label_379514;
        case 0x379518u: goto label_379518;
        case 0x37951cu: goto label_37951c;
        case 0x379520u: goto label_379520;
        case 0x379524u: goto label_379524;
        case 0x379528u: goto label_379528;
        case 0x37952cu: goto label_37952c;
        case 0x379530u: goto label_379530;
        case 0x379534u: goto label_379534;
        case 0x379538u: goto label_379538;
        case 0x37953cu: goto label_37953c;
        case 0x379540u: goto label_379540;
        case 0x379544u: goto label_379544;
        case 0x379548u: goto label_379548;
        case 0x37954cu: goto label_37954c;
        case 0x379550u: goto label_379550;
        case 0x379554u: goto label_379554;
        case 0x379558u: goto label_379558;
        case 0x37955cu: goto label_37955c;
        case 0x379560u: goto label_379560;
        case 0x379564u: goto label_379564;
        case 0x379568u: goto label_379568;
        case 0x37956cu: goto label_37956c;
        case 0x379570u: goto label_379570;
        case 0x379574u: goto label_379574;
        case 0x379578u: goto label_379578;
        case 0x37957cu: goto label_37957c;
        case 0x379580u: goto label_379580;
        case 0x379584u: goto label_379584;
        case 0x379588u: goto label_379588;
        case 0x37958cu: goto label_37958c;
        case 0x379590u: goto label_379590;
        case 0x379594u: goto label_379594;
        case 0x379598u: goto label_379598;
        case 0x37959cu: goto label_37959c;
        case 0x3795a0u: goto label_3795a0;
        case 0x3795a4u: goto label_3795a4;
        case 0x3795a8u: goto label_3795a8;
        case 0x3795acu: goto label_3795ac;
        case 0x3795b0u: goto label_3795b0;
        case 0x3795b4u: goto label_3795b4;
        case 0x3795b8u: goto label_3795b8;
        case 0x3795bcu: goto label_3795bc;
        case 0x3795c0u: goto label_3795c0;
        case 0x3795c4u: goto label_3795c4;
        case 0x3795c8u: goto label_3795c8;
        case 0x3795ccu: goto label_3795cc;
        case 0x3795d0u: goto label_3795d0;
        case 0x3795d4u: goto label_3795d4;
        case 0x3795d8u: goto label_3795d8;
        case 0x3795dcu: goto label_3795dc;
        case 0x3795e0u: goto label_3795e0;
        case 0x3795e4u: goto label_3795e4;
        case 0x3795e8u: goto label_3795e8;
        case 0x3795ecu: goto label_3795ec;
        case 0x3795f0u: goto label_3795f0;
        case 0x3795f4u: goto label_3795f4;
        case 0x3795f8u: goto label_3795f8;
        case 0x3795fcu: goto label_3795fc;
        case 0x379600u: goto label_379600;
        case 0x379604u: goto label_379604;
        case 0x379608u: goto label_379608;
        case 0x37960cu: goto label_37960c;
        case 0x379610u: goto label_379610;
        case 0x379614u: goto label_379614;
        case 0x379618u: goto label_379618;
        case 0x37961cu: goto label_37961c;
        case 0x379620u: goto label_379620;
        case 0x379624u: goto label_379624;
        case 0x379628u: goto label_379628;
        case 0x37962cu: goto label_37962c;
        case 0x379630u: goto label_379630;
        case 0x379634u: goto label_379634;
        case 0x379638u: goto label_379638;
        case 0x37963cu: goto label_37963c;
        case 0x379640u: goto label_379640;
        case 0x379644u: goto label_379644;
        case 0x379648u: goto label_379648;
        case 0x37964cu: goto label_37964c;
        case 0x379650u: goto label_379650;
        case 0x379654u: goto label_379654;
        case 0x379658u: goto label_379658;
        case 0x37965cu: goto label_37965c;
        case 0x379660u: goto label_379660;
        case 0x379664u: goto label_379664;
        case 0x379668u: goto label_379668;
        case 0x37966cu: goto label_37966c;
        case 0x379670u: goto label_379670;
        case 0x379674u: goto label_379674;
        case 0x379678u: goto label_379678;
        case 0x37967cu: goto label_37967c;
        case 0x379680u: goto label_379680;
        case 0x379684u: goto label_379684;
        case 0x379688u: goto label_379688;
        case 0x37968cu: goto label_37968c;
        case 0x379690u: goto label_379690;
        case 0x379694u: goto label_379694;
        case 0x379698u: goto label_379698;
        case 0x37969cu: goto label_37969c;
        case 0x3796a0u: goto label_3796a0;
        case 0x3796a4u: goto label_3796a4;
        case 0x3796a8u: goto label_3796a8;
        case 0x3796acu: goto label_3796ac;
        case 0x3796b0u: goto label_3796b0;
        case 0x3796b4u: goto label_3796b4;
        case 0x3796b8u: goto label_3796b8;
        case 0x3796bcu: goto label_3796bc;
        case 0x3796c0u: goto label_3796c0;
        case 0x3796c4u: goto label_3796c4;
        case 0x3796c8u: goto label_3796c8;
        case 0x3796ccu: goto label_3796cc;
        case 0x3796d0u: goto label_3796d0;
        case 0x3796d4u: goto label_3796d4;
        case 0x3796d8u: goto label_3796d8;
        case 0x3796dcu: goto label_3796dc;
        case 0x3796e0u: goto label_3796e0;
        case 0x3796e4u: goto label_3796e4;
        case 0x3796e8u: goto label_3796e8;
        case 0x3796ecu: goto label_3796ec;
        case 0x3796f0u: goto label_3796f0;
        case 0x3796f4u: goto label_3796f4;
        case 0x3796f8u: goto label_3796f8;
        case 0x3796fcu: goto label_3796fc;
        case 0x379700u: goto label_379700;
        case 0x379704u: goto label_379704;
        case 0x379708u: goto label_379708;
        case 0x37970cu: goto label_37970c;
        case 0x379710u: goto label_379710;
        case 0x379714u: goto label_379714;
        case 0x379718u: goto label_379718;
        case 0x37971cu: goto label_37971c;
        case 0x379720u: goto label_379720;
        case 0x379724u: goto label_379724;
        case 0x379728u: goto label_379728;
        case 0x37972cu: goto label_37972c;
        case 0x379730u: goto label_379730;
        case 0x379734u: goto label_379734;
        case 0x379738u: goto label_379738;
        case 0x37973cu: goto label_37973c;
        case 0x379740u: goto label_379740;
        case 0x379744u: goto label_379744;
        case 0x379748u: goto label_379748;
        case 0x37974cu: goto label_37974c;
        case 0x379750u: goto label_379750;
        case 0x379754u: goto label_379754;
        case 0x379758u: goto label_379758;
        case 0x37975cu: goto label_37975c;
        case 0x379760u: goto label_379760;
        case 0x379764u: goto label_379764;
        case 0x379768u: goto label_379768;
        case 0x37976cu: goto label_37976c;
        case 0x379770u: goto label_379770;
        case 0x379774u: goto label_379774;
        case 0x379778u: goto label_379778;
        case 0x37977cu: goto label_37977c;
        case 0x379780u: goto label_379780;
        case 0x379784u: goto label_379784;
        case 0x379788u: goto label_379788;
        case 0x37978cu: goto label_37978c;
        case 0x379790u: goto label_379790;
        case 0x379794u: goto label_379794;
        case 0x379798u: goto label_379798;
        case 0x37979cu: goto label_37979c;
        case 0x3797a0u: goto label_3797a0;
        case 0x3797a4u: goto label_3797a4;
        case 0x3797a8u: goto label_3797a8;
        case 0x3797acu: goto label_3797ac;
        case 0x3797b0u: goto label_3797b0;
        case 0x3797b4u: goto label_3797b4;
        case 0x3797b8u: goto label_3797b8;
        case 0x3797bcu: goto label_3797bc;
        case 0x3797c0u: goto label_3797c0;
        case 0x3797c4u: goto label_3797c4;
        case 0x3797c8u: goto label_3797c8;
        case 0x3797ccu: goto label_3797cc;
        case 0x3797d0u: goto label_3797d0;
        case 0x3797d4u: goto label_3797d4;
        case 0x3797d8u: goto label_3797d8;
        case 0x3797dcu: goto label_3797dc;
        case 0x3797e0u: goto label_3797e0;
        case 0x3797e4u: goto label_3797e4;
        case 0x3797e8u: goto label_3797e8;
        case 0x3797ecu: goto label_3797ec;
        case 0x3797f0u: goto label_3797f0;
        case 0x3797f4u: goto label_3797f4;
        case 0x3797f8u: goto label_3797f8;
        case 0x3797fcu: goto label_3797fc;
        case 0x379800u: goto label_379800;
        case 0x379804u: goto label_379804;
        case 0x379808u: goto label_379808;
        case 0x37980cu: goto label_37980c;
        default: break;
    }

    ctx->pc = 0x379050u;

label_379050:
    // 0x379050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_379054:
    // 0x379054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x379054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_379058:
    // 0x379058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37905c:
    // 0x37905c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37905cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_379060:
    // 0x379060: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x379060u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_379064:
    // 0x379064: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_379068:
    if (ctx->pc == 0x379068u) {
        ctx->pc = 0x379068u;
            // 0x379068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37906Cu;
        goto label_37906c;
    }
    ctx->pc = 0x379064u;
    {
        const bool branch_taken_0x379064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x379068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379064u;
            // 0x379068: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379064) {
            ctx->pc = 0x379198u;
            goto label_379198;
        }
    }
    ctx->pc = 0x37906Cu;
label_37906c:
    // 0x37906c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37906cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_379070:
    // 0x379070: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379074:
    // 0x379074: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x379074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
label_379078:
    // 0x379078: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_37907c:
    // 0x37907c: 0x24427288  addiu       $v0, $v0, 0x7288
    ctx->pc = 0x37907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29320));
label_379080:
    // 0x379080: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x379080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_379084:
    // 0x379084: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x379084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_379088:
    // 0x379088: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x379088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_37908c:
    // 0x37908c: 0xc0407c0  jal         func_101F00
label_379090:
    if (ctx->pc == 0x379090u) {
        ctx->pc = 0x379090u;
            // 0x379090: 0x24a591b0  addiu       $a1, $a1, -0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939056));
        ctx->pc = 0x379094u;
        goto label_379094;
    }
    ctx->pc = 0x37908Cu;
    SET_GPR_U32(ctx, 31, 0x379094u);
    ctx->pc = 0x379090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37908Cu;
            // 0x379090: 0x24a591b0  addiu       $a1, $a1, -0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379094u; }
        if (ctx->pc != 0x379094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379094u; }
        if (ctx->pc != 0x379094u) { return; }
    }
    ctx->pc = 0x379094u;
label_379094:
    // 0x379094: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x379094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_379098:
    // 0x379098: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_37909c:
    if (ctx->pc == 0x37909Cu) {
        ctx->pc = 0x37909Cu;
            // 0x37909c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x3790A0u;
        goto label_3790a0;
    }
    ctx->pc = 0x379098u;
    {
        const bool branch_taken_0x379098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379098) {
            ctx->pc = 0x37909Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379098u;
            // 0x37909c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3790ACu;
            goto label_3790ac;
        }
    }
    ctx->pc = 0x3790A0u;
label_3790a0:
    // 0x3790a0: 0xc07507c  jal         func_1D41F0
label_3790a4:
    if (ctx->pc == 0x3790A4u) {
        ctx->pc = 0x3790A4u;
            // 0x3790a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x3790A8u;
        goto label_3790a8;
    }
    ctx->pc = 0x3790A0u;
    SET_GPR_U32(ctx, 31, 0x3790A8u);
    ctx->pc = 0x3790A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3790A0u;
            // 0x3790a4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3790A8u; }
        if (ctx->pc != 0x3790A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3790A8u; }
        if (ctx->pc != 0x3790A8u) { return; }
    }
    ctx->pc = 0x3790A8u;
label_3790a8:
    // 0x3790a8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x3790a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_3790ac:
    // 0x3790ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3790b0:
    if (ctx->pc == 0x3790B0u) {
        ctx->pc = 0x3790B0u;
            // 0x3790b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x3790B4u;
        goto label_3790b4;
    }
    ctx->pc = 0x3790ACu;
    {
        const bool branch_taken_0x3790ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790ac) {
            ctx->pc = 0x3790B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3790ACu;
            // 0x3790b0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3790DCu;
            goto label_3790dc;
        }
    }
    ctx->pc = 0x3790B4u;
label_3790b4:
    // 0x3790b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3790b8:
    if (ctx->pc == 0x3790B8u) {
        ctx->pc = 0x3790BCu;
        goto label_3790bc;
    }
    ctx->pc = 0x3790B4u;
    {
        const bool branch_taken_0x3790b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790b4) {
            ctx->pc = 0x3790D8u;
            goto label_3790d8;
        }
    }
    ctx->pc = 0x3790BCu;
label_3790bc:
    // 0x3790bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3790c0:
    if (ctx->pc == 0x3790C0u) {
        ctx->pc = 0x3790C4u;
        goto label_3790c4;
    }
    ctx->pc = 0x3790BCu;
    {
        const bool branch_taken_0x3790bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790bc) {
            ctx->pc = 0x3790D8u;
            goto label_3790d8;
        }
    }
    ctx->pc = 0x3790C4u;
label_3790c4:
    // 0x3790c4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x3790c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_3790c8:
    // 0x3790c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3790cc:
    if (ctx->pc == 0x3790CCu) {
        ctx->pc = 0x3790D0u;
        goto label_3790d0;
    }
    ctx->pc = 0x3790C8u;
    {
        const bool branch_taken_0x3790c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790c8) {
            ctx->pc = 0x3790D8u;
            goto label_3790d8;
        }
    }
    ctx->pc = 0x3790D0u;
label_3790d0:
    // 0x3790d0: 0xc0400a8  jal         func_1002A0
label_3790d4:
    if (ctx->pc == 0x3790D4u) {
        ctx->pc = 0x3790D8u;
        goto label_3790d8;
    }
    ctx->pc = 0x3790D0u;
    SET_GPR_U32(ctx, 31, 0x3790D8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3790D8u; }
        if (ctx->pc != 0x3790D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3790D8u; }
        if (ctx->pc != 0x3790D8u) { return; }
    }
    ctx->pc = 0x3790D8u;
label_3790d8:
    // 0x3790d8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x3790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_3790dc:
    // 0x3790dc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_3790e0:
    if (ctx->pc == 0x3790E0u) {
        ctx->pc = 0x3790E0u;
            // 0x3790e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x3790E4u;
        goto label_3790e4;
    }
    ctx->pc = 0x3790DCu;
    {
        const bool branch_taken_0x3790dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790dc) {
            ctx->pc = 0x3790E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3790DCu;
            // 0x3790e0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37910Cu;
            goto label_37910c;
        }
    }
    ctx->pc = 0x3790E4u;
label_3790e4:
    // 0x3790e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3790e8:
    if (ctx->pc == 0x3790E8u) {
        ctx->pc = 0x3790ECu;
        goto label_3790ec;
    }
    ctx->pc = 0x3790E4u;
    {
        const bool branch_taken_0x3790e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790e4) {
            ctx->pc = 0x379108u;
            goto label_379108;
        }
    }
    ctx->pc = 0x3790ECu;
label_3790ec:
    // 0x3790ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3790f0:
    if (ctx->pc == 0x3790F0u) {
        ctx->pc = 0x3790F4u;
        goto label_3790f4;
    }
    ctx->pc = 0x3790ECu;
    {
        const bool branch_taken_0x3790ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790ec) {
            ctx->pc = 0x379108u;
            goto label_379108;
        }
    }
    ctx->pc = 0x3790F4u;
label_3790f4:
    // 0x3790f4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x3790f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_3790f8:
    // 0x3790f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3790fc:
    if (ctx->pc == 0x3790FCu) {
        ctx->pc = 0x379100u;
        goto label_379100;
    }
    ctx->pc = 0x3790F8u;
    {
        const bool branch_taken_0x3790f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3790f8) {
            ctx->pc = 0x379108u;
            goto label_379108;
        }
    }
    ctx->pc = 0x379100u;
label_379100:
    // 0x379100: 0xc0400a8  jal         func_1002A0
label_379104:
    if (ctx->pc == 0x379104u) {
        ctx->pc = 0x379108u;
        goto label_379108;
    }
    ctx->pc = 0x379100u;
    SET_GPR_U32(ctx, 31, 0x379108u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379108u; }
        if (ctx->pc != 0x379108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379108u; }
        if (ctx->pc != 0x379108u) { return; }
    }
    ctx->pc = 0x379108u;
label_379108:
    // 0x379108: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x379108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_37910c:
    // 0x37910c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_379110:
    if (ctx->pc == 0x379110u) {
        ctx->pc = 0x379114u;
        goto label_379114;
    }
    ctx->pc = 0x37910Cu;
    {
        const bool branch_taken_0x37910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37910c) {
            ctx->pc = 0x379128u;
            goto label_379128;
        }
    }
    ctx->pc = 0x379114u;
label_379114:
    // 0x379114: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_379118:
    // 0x379118: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x379118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37911c:
    // 0x37911c: 0x24637240  addiu       $v1, $v1, 0x7240
    ctx->pc = 0x37911cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29248));
label_379120:
    // 0x379120: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x379120u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_379124:
    // 0x379124: 0xac406090  sw          $zero, 0x6090($v0)
    ctx->pc = 0x379124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24720), GPR_U32(ctx, 0));
label_379128:
    // 0x379128: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_37912c:
    if (ctx->pc == 0x37912Cu) {
        ctx->pc = 0x37912Cu;
            // 0x37912c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x379130u;
        goto label_379130;
    }
    ctx->pc = 0x379128u;
    {
        const bool branch_taken_0x379128 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x379128) {
            ctx->pc = 0x37912Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379128u;
            // 0x37912c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379184u;
            goto label_379184;
        }
    }
    ctx->pc = 0x379130u;
label_379130:
    // 0x379130: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379134:
    // 0x379134: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x379134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_379138:
    // 0x379138: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x379138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_37913c:
    // 0x37913c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x37913cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_379140:
    // 0x379140: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_379144:
    if (ctx->pc == 0x379144u) {
        ctx->pc = 0x379144u;
            // 0x379144: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x379148u;
        goto label_379148;
    }
    ctx->pc = 0x379140u;
    {
        const bool branch_taken_0x379140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x379140) {
            ctx->pc = 0x379144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379140u;
            // 0x379144: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37915Cu;
            goto label_37915c;
        }
    }
    ctx->pc = 0x379148u;
label_379148:
    // 0x379148: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x379148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37914c:
    // 0x37914c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x37914cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_379150:
    // 0x379150: 0x320f809  jalr        $t9
label_379154:
    if (ctx->pc == 0x379154u) {
        ctx->pc = 0x379154u;
            // 0x379154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x379158u;
        goto label_379158;
    }
    ctx->pc = 0x379150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x379158u);
        ctx->pc = 0x379154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379150u;
            // 0x379154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x379158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x379158u; }
            if (ctx->pc != 0x379158u) { return; }
        }
        }
    }
    ctx->pc = 0x379158u;
label_379158:
    // 0x379158: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x379158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_37915c:
    // 0x37915c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_379160:
    if (ctx->pc == 0x379160u) {
        ctx->pc = 0x379160u;
            // 0x379160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379164u;
        goto label_379164;
    }
    ctx->pc = 0x37915Cu;
    {
        const bool branch_taken_0x37915c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37915c) {
            ctx->pc = 0x379160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37915Cu;
            // 0x379160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379178u;
            goto label_379178;
        }
    }
    ctx->pc = 0x379164u;
label_379164:
    // 0x379164: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x379164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_379168:
    // 0x379168: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x379168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37916c:
    // 0x37916c: 0x320f809  jalr        $t9
label_379170:
    if (ctx->pc == 0x379170u) {
        ctx->pc = 0x379170u;
            // 0x379170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x379174u;
        goto label_379174;
    }
    ctx->pc = 0x37916Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x379174u);
        ctx->pc = 0x379170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37916Cu;
            // 0x379170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x379174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x379174u; }
            if (ctx->pc != 0x379174u) { return; }
        }
        }
    }
    ctx->pc = 0x379174u;
label_379174:
    // 0x379174: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379178:
    // 0x379178: 0xc075bf8  jal         func_1D6FE0
label_37917c:
    if (ctx->pc == 0x37917Cu) {
        ctx->pc = 0x37917Cu;
            // 0x37917c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379180u;
        goto label_379180;
    }
    ctx->pc = 0x379178u;
    SET_GPR_U32(ctx, 31, 0x379180u);
    ctx->pc = 0x37917Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379178u;
            // 0x37917c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379180u; }
        if (ctx->pc != 0x379180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379180u; }
        if (ctx->pc != 0x379180u) { return; }
    }
    ctx->pc = 0x379180u;
label_379180:
    // 0x379180: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x379180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_379184:
    // 0x379184: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x379184u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_379188:
    // 0x379188: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_37918c:
    if (ctx->pc == 0x37918Cu) {
        ctx->pc = 0x37918Cu;
            // 0x37918c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379190u;
        goto label_379190;
    }
    ctx->pc = 0x379188u;
    {
        const bool branch_taken_0x379188 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x379188) {
            ctx->pc = 0x37918Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379188u;
            // 0x37918c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37919Cu;
            goto label_37919c;
        }
    }
    ctx->pc = 0x379190u;
label_379190:
    // 0x379190: 0xc0400a8  jal         func_1002A0
label_379194:
    if (ctx->pc == 0x379194u) {
        ctx->pc = 0x379194u;
            // 0x379194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379198u;
        goto label_379198;
    }
    ctx->pc = 0x379190u;
    SET_GPR_U32(ctx, 31, 0x379198u);
    ctx->pc = 0x379194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379190u;
            // 0x379194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379198u; }
        if (ctx->pc != 0x379198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379198u; }
        if (ctx->pc != 0x379198u) { return; }
    }
    ctx->pc = 0x379198u;
label_379198:
    // 0x379198: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x379198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37919c:
    // 0x37919c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3791a0:
    // 0x3791a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3791a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3791a4:
    // 0x3791a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3791a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3791a8:
    // 0x3791a8: 0x3e00008  jr          $ra
label_3791ac:
    if (ctx->pc == 0x3791ACu) {
        ctx->pc = 0x3791ACu;
            // 0x3791ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3791B0u;
        goto label_3791b0;
    }
    ctx->pc = 0x3791A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3791ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3791A8u;
            // 0x3791ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3791B0u;
label_3791b0:
    // 0x3791b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3791b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3791b4:
    // 0x3791b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3791b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3791b8:
    // 0x3791b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3791b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3791bc:
    // 0x3791bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3791bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3791c0:
    // 0x3791c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3791c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3791c4:
    // 0x3791c4: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3791c8:
    if (ctx->pc == 0x3791C8u) {
        ctx->pc = 0x3791C8u;
            // 0x3791c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3791CCu;
        goto label_3791cc;
    }
    ctx->pc = 0x3791C4u;
    {
        const bool branch_taken_0x3791c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3791C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3791C4u;
            // 0x3791c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791c4) {
            ctx->pc = 0x379224u;
            goto label_379224;
        }
    }
    ctx->pc = 0x3791CCu;
label_3791cc:
    // 0x3791cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3791ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3791d0:
    // 0x3791d0: 0x244272f0  addiu       $v0, $v0, 0x72F0
    ctx->pc = 0x3791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
label_3791d4:
    // 0x3791d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3791d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3791d8:
    // 0x3791d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3791d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3791dc:
    // 0x3791dc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3791dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3791e0:
    // 0x3791e0: 0x320f809  jalr        $t9
label_3791e4:
    if (ctx->pc == 0x3791E4u) {
        ctx->pc = 0x3791E8u;
        goto label_3791e8;
    }
    ctx->pc = 0x3791E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3791E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3791E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3791E8u; }
            if (ctx->pc != 0x3791E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3791E8u;
label_3791e8:
    // 0x3791e8: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3791ec:
    if (ctx->pc == 0x3791ECu) {
        ctx->pc = 0x3791ECu;
            // 0x3791ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3791F0u;
        goto label_3791f0;
    }
    ctx->pc = 0x3791E8u;
    {
        const bool branch_taken_0x3791e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3791e8) {
            ctx->pc = 0x3791ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3791E8u;
            // 0x3791ec: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379210u;
            goto label_379210;
        }
    }
    ctx->pc = 0x3791F0u;
label_3791f0:
    // 0x3791f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3791f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3791f4:
    // 0x3791f4: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3791f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3791f8:
    // 0x3791f8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3791fc:
    if (ctx->pc == 0x3791FCu) {
        ctx->pc = 0x3791FCu;
            // 0x3791fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x379200u;
        goto label_379200;
    }
    ctx->pc = 0x3791F8u;
    {
        const bool branch_taken_0x3791f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3791FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3791F8u;
            // 0x3791fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791f8) {
            ctx->pc = 0x37920Cu;
            goto label_37920c;
        }
    }
    ctx->pc = 0x379200u;
label_379200:
    // 0x379200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379204:
    // 0x379204: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x379204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_379208:
    // 0x379208: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x379208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_37920c:
    // 0x37920c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_379210:
    // 0x379210: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x379210u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_379214:
    // 0x379214: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_379218:
    if (ctx->pc == 0x379218u) {
        ctx->pc = 0x379218u;
            // 0x379218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37921Cu;
        goto label_37921c;
    }
    ctx->pc = 0x379214u;
    {
        const bool branch_taken_0x379214 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x379214) {
            ctx->pc = 0x379218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379214u;
            // 0x379218: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379228u;
            goto label_379228;
        }
    }
    ctx->pc = 0x37921Cu;
label_37921c:
    // 0x37921c: 0xc0400a8  jal         func_1002A0
label_379220:
    if (ctx->pc == 0x379220u) {
        ctx->pc = 0x379220u;
            // 0x379220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379224u;
        goto label_379224;
    }
    ctx->pc = 0x37921Cu;
    SET_GPR_U32(ctx, 31, 0x379224u);
    ctx->pc = 0x379220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37921Cu;
            // 0x379220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379224u; }
        if (ctx->pc != 0x379224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379224u; }
        if (ctx->pc != 0x379224u) { return; }
    }
    ctx->pc = 0x379224u;
label_379224:
    // 0x379224: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x379224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379228:
    // 0x379228: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x379228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37922c:
    // 0x37922c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37922cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379230:
    // 0x379230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_379234:
    // 0x379234: 0x3e00008  jr          $ra
label_379238:
    if (ctx->pc == 0x379238u) {
        ctx->pc = 0x379238u;
            // 0x379238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37923Cu;
        goto label_37923c;
    }
    ctx->pc = 0x379234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379234u;
            // 0x379238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37923Cu;
label_37923c:
    // 0x37923c: 0x0  nop
    ctx->pc = 0x37923cu;
    // NOP
label_379240:
    // 0x379240: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x379240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_379244:
    // 0x379244: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x379244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_379248:
    // 0x379248: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x379248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_37924c:
    // 0x37924c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x37924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_379250:
    // 0x379250: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x379250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_379254:
    // 0x379254: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x379254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_379258:
    // 0x379258: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x379258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_37925c:
    // 0x37925c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37925cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_379260:
    // 0x379260: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x379260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_379264:
    // 0x379264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x379264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_379268:
    // 0x379268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37926c:
    // 0x37926c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_379270:
    // 0x379270: 0x8c716090  lw          $s1, 0x6090($v1)
    ctx->pc = 0x379270u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24720)));
label_379274:
    // 0x379274: 0x92240010  lbu         $a0, 0x10($s1)
    ctx->pc = 0x379274u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_379278:
    // 0x379278: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x379278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37927c:
    // 0x37927c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
label_379280:
    if (ctx->pc == 0x379280u) {
        ctx->pc = 0x379280u;
            // 0x379280: 0x8e300070  lw          $s0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x379284u;
        goto label_379284;
    }
    ctx->pc = 0x37927Cu;
    {
        const bool branch_taken_0x37927c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x37927c) {
            ctx->pc = 0x379280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37927Cu;
            // 0x379280: 0x8e300070  lw          $s0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3792A4u;
            goto label_3792a4;
        }
    }
    ctx->pc = 0x379284u;
label_379284:
    // 0x379284: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_379288:
    // 0x379288: 0x5083003d  beql        $a0, $v1, . + 4 + (0x3D << 2)
label_37928c:
    if (ctx->pc == 0x37928Cu) {
        ctx->pc = 0x37928Cu;
            // 0x37928c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x379290u;
        goto label_379290;
    }
    ctx->pc = 0x379288u;
    {
        const bool branch_taken_0x379288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379288) {
            ctx->pc = 0x37928Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379288u;
            // 0x37928c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379380u;
            goto label_379380;
        }
    }
    ctx->pc = 0x379290u;
label_379290:
    // 0x379290: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379294:
    // 0x379294: 0x10830039  beq         $a0, $v1, . + 4 + (0x39 << 2)
label_379298:
    if (ctx->pc == 0x379298u) {
        ctx->pc = 0x37929Cu;
        goto label_37929c;
    }
    ctx->pc = 0x379294u;
    {
        const bool branch_taken_0x379294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379294) {
            ctx->pc = 0x37937Cu;
            goto label_37937c;
        }
    }
    ctx->pc = 0x37929Cu;
label_37929c:
    // 0x37929c: 0x10000037  b           . + 4 + (0x37 << 2)
label_3792a0:
    if (ctx->pc == 0x3792A0u) {
        ctx->pc = 0x3792A4u;
        goto label_3792a4;
    }
    ctx->pc = 0x37929Cu;
    {
        const bool branch_taken_0x37929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37929c) {
            ctx->pc = 0x37937Cu;
            goto label_37937c;
        }
    }
    ctx->pc = 0x3792A4u;
label_3792a4:
    // 0x3792a4: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_3792a8:
    if (ctx->pc == 0x3792A8u) {
        ctx->pc = 0x3792ACu;
        goto label_3792ac;
    }
    ctx->pc = 0x3792A4u;
    {
        const bool branch_taken_0x3792a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3792a4) {
            ctx->pc = 0x37937Cu;
            goto label_37937c;
        }
    }
    ctx->pc = 0x3792ACu;
label_3792ac:
    // 0x3792ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3792acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3792b0:
    // 0x3792b0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3792b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3792b4:
    // 0x3792b4: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x3792b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3792b8:
    // 0x3792b8: 0x26340084  addiu       $s4, $s1, 0x84
    ctx->pc = 0x3792b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_3792bc:
    // 0x3792bc: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3792bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3792c0:
    // 0x3792c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3792c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3792c4:
    // 0x3792c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3792c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3792c8:
    // 0x3792c8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3792c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3792cc:
    // 0x3792cc: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x3792ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3792d0:
    // 0x3792d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3792d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3792d4:
    // 0x3792d4: 0x8cb50130  lw          $s5, 0x130($a1)
    ctx->pc = 0x3792d4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3792d8:
    // 0x3792d8: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x3792d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3792dc:
    // 0x3792dc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3792dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3792e0:
    // 0x3792e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3792e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3792e4:
    // 0x3792e4: 0x152880  sll         $a1, $s5, 2
    ctx->pc = 0x3792e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_3792e8:
    // 0x3792e8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3792e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3792ec:
    // 0x3792ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3792ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3792f0:
    // 0x3792f0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3792f4:
    // 0x3792f4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3792f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3792f8:
    // 0x3792f8: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x3792f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3792fc:
    // 0x3792fc: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3792fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_379300:
    // 0x379300: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x379300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_379304:
    // 0x379304: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x379304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_379308:
    // 0x379308: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x379308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_37930c:
    // 0x37930c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x37930cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_379310:
    // 0x379310: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x379310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_379314:
    // 0x379314: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x379314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_379318:
    // 0x379318: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x379318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_37931c:
    // 0x37931c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x37931cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_379320:
    // 0x379320: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379324:
    // 0x379324: 0xc0de83c  jal         func_37A0F0
label_379328:
    if (ctx->pc == 0x379328u) {
        ctx->pc = 0x379328u;
            // 0x379328: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37932Cu;
        goto label_37932c;
    }
    ctx->pc = 0x379324u;
    SET_GPR_U32(ctx, 31, 0x37932Cu);
    ctx->pc = 0x379328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379324u;
            // 0x379328: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37A0F0u;
    if (runtime->hasFunction(0x37A0F0u)) {
        auto targetFn = runtime->lookupFunction(0x37A0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37932Cu; }
        if (ctx->pc != 0x37932Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037A0F0_0x37a0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37932Cu; }
        if (ctx->pc != 0x37932Cu) { return; }
    }
    ctx->pc = 0x37932Cu;
label_37932c:
    // 0x37932c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37932cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_379330:
    // 0x379330: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x379330u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_379334:
    // 0x379334: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_379338:
    if (ctx->pc == 0x379338u) {
        ctx->pc = 0x379338u;
            // 0x379338: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x37933Cu;
        goto label_37933c;
    }
    ctx->pc = 0x379334u;
    {
        const bool branch_taken_0x379334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x379338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379334u;
            // 0x379338: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379334) {
            ctx->pc = 0x379300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_379300;
        }
    }
    ctx->pc = 0x37933Cu;
label_37933c:
    // 0x37933c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_379340:
    // 0x379340: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x379340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_379344:
    // 0x379344: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_379348:
    if (ctx->pc == 0x379348u) {
        ctx->pc = 0x37934Cu;
        goto label_37934c;
    }
    ctx->pc = 0x379344u;
    {
        const bool branch_taken_0x379344 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x379344) {
            ctx->pc = 0x37937Cu;
            goto label_37937c;
        }
    }
    ctx->pc = 0x37934Cu;
label_37934c:
    // 0x37934c: 0xc04e738  jal         func_139CE0
label_379350:
    if (ctx->pc == 0x379350u) {
        ctx->pc = 0x379350u;
            // 0x379350: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x379354u;
        goto label_379354;
    }
    ctx->pc = 0x37934Cu;
    SET_GPR_U32(ctx, 31, 0x379354u);
    ctx->pc = 0x379350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37934Cu;
            // 0x379350: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379354u; }
        if (ctx->pc != 0x379354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379354u; }
        if (ctx->pc != 0x379354u) { return; }
    }
    ctx->pc = 0x379354u;
label_379354:
    // 0x379354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x379354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379358:
    // 0x379358: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x379358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_37935c:
    // 0x37935c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x37935cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_379360:
    // 0x379360: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x379360u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_379364:
    // 0x379364: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x379364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379368:
    // 0x379368: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x379368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_37936c:
    // 0x37936c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379370:
    // 0x379370: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x379370u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_379374:
    // 0x379374: 0xc055754  jal         func_155D50
label_379378:
    if (ctx->pc == 0x379378u) {
        ctx->pc = 0x379378u;
            // 0x379378: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x37937Cu;
        goto label_37937c;
    }
    ctx->pc = 0x379374u;
    SET_GPR_U32(ctx, 31, 0x37937Cu);
    ctx->pc = 0x379378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379374u;
            // 0x379378: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37937Cu; }
        if (ctx->pc != 0x37937Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37937Cu; }
        if (ctx->pc != 0x37937Cu) { return; }
    }
    ctx->pc = 0x37937Cu;
label_37937c:
    // 0x37937c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x37937cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_379380:
    // 0x379380: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x379380u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_379384:
    // 0x379384: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x379384u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_379388:
    // 0x379388: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x379388u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37938c:
    // 0x37938c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37938cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_379390:
    // 0x379390: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x379390u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_379394:
    // 0x379394: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379394u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_379398:
    // 0x379398: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37939c:
    // 0x37939c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37939cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3793a0:
    // 0x3793a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3793a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3793a4:
    // 0x3793a4: 0x3e00008  jr          $ra
label_3793a8:
    if (ctx->pc == 0x3793A8u) {
        ctx->pc = 0x3793A8u;
            // 0x3793a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3793ACu;
        goto label_3793ac;
    }
    ctx->pc = 0x3793A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3793A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3793A4u;
            // 0x3793a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3793ACu;
label_3793ac:
    // 0x3793ac: 0x0  nop
    ctx->pc = 0x3793acu;
    // NOP
label_3793b0:
    // 0x3793b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3793b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3793b4:
    // 0x3793b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3793b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3793b8:
    // 0x3793b8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3793b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3793bc:
    // 0x3793bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3793bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3793c0:
    // 0x3793c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3793c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3793c4:
    // 0x3793c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3793c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3793c8:
    // 0x3793c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3793c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3793cc:
    // 0x3793cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3793ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3793d0:
    // 0x3793d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3793d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3793d4:
    // 0x3793d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3793d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3793d8:
    // 0x3793d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3793d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3793dc:
    // 0x3793dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3793dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3793e0:
    // 0x3793e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3793e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3793e4:
    // 0x3793e4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3793e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3793e8:
    // 0x3793e8: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_3793ec:
    if (ctx->pc == 0x3793ECu) {
        ctx->pc = 0x3793ECu;
            // 0x3793ec: 0x8eb00070  lw          $s0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->pc = 0x3793F0u;
        goto label_3793f0;
    }
    ctx->pc = 0x3793E8u;
    {
        const bool branch_taken_0x3793e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3793e8) {
            ctx->pc = 0x3793ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3793E8u;
            // 0x3793ec: 0x8eb00070  lw          $s0, 0x70($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379454u;
            goto label_379454;
        }
    }
    ctx->pc = 0x3793F0u;
label_3793f0:
    // 0x3793f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3793f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3793f4:
    // 0x3793f4: 0x5083004e  beql        $a0, $v1, . + 4 + (0x4E << 2)
label_3793f8:
    if (ctx->pc == 0x3793F8u) {
        ctx->pc = 0x3793F8u;
            // 0x3793f8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3793FCu;
        goto label_3793fc;
    }
    ctx->pc = 0x3793F4u;
    {
        const bool branch_taken_0x3793f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3793f4) {
            ctx->pc = 0x3793F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3793F4u;
            // 0x3793f8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379530u;
            goto label_379530;
        }
    }
    ctx->pc = 0x3793FCu;
label_3793fc:
    // 0x3793fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3793fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379400:
    // 0x379400: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_379404:
    if (ctx->pc == 0x379404u) {
        ctx->pc = 0x379408u;
        goto label_379408;
    }
    ctx->pc = 0x379400u;
    {
        const bool branch_taken_0x379400 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379400) {
            ctx->pc = 0x379410u;
            goto label_379410;
        }
    }
    ctx->pc = 0x379408u;
label_379408:
    // 0x379408: 0x10000048  b           . + 4 + (0x48 << 2)
label_37940c:
    if (ctx->pc == 0x37940Cu) {
        ctx->pc = 0x379410u;
        goto label_379410;
    }
    ctx->pc = 0x379408u;
    {
        const bool branch_taken_0x379408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379408) {
            ctx->pc = 0x37952Cu;
            goto label_37952c;
        }
    }
    ctx->pc = 0x379410u;
label_379410:
    // 0x379410: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x379410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_379414:
    // 0x379414: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x379414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_379418:
    // 0x379418: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x379418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_37941c:
    // 0x37941c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x37941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_379420:
    // 0x379420: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x379420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_379424:
    // 0x379424: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_379428:
    if (ctx->pc == 0x379428u) {
        ctx->pc = 0x379428u;
            // 0x379428: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x37942Cu;
        goto label_37942c;
    }
    ctx->pc = 0x379424u;
    {
        const bool branch_taken_0x379424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379424) {
            ctx->pc = 0x379428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379424u;
            // 0x379428: 0x8eb90000  lw          $t9, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37943Cu;
            goto label_37943c;
        }
    }
    ctx->pc = 0x37942Cu;
label_37942c:
    // 0x37942c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37942cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_379430:
    // 0x379430: 0x8c426098  lw          $v0, 0x6098($v0)
    ctx->pc = 0x379430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24728)));
label_379434:
    // 0x379434: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x379434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_379438:
    // 0x379438: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x379438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_37943c:
    // 0x37943c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x37943cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_379440:
    // 0x379440: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x379440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_379444:
    // 0x379444: 0x320f809  jalr        $t9
label_379448:
    if (ctx->pc == 0x379448u) {
        ctx->pc = 0x379448u;
            // 0x379448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37944Cu;
        goto label_37944c;
    }
    ctx->pc = 0x379444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37944Cu);
        ctx->pc = 0x379448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379444u;
            // 0x379448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37944Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37944Cu; }
            if (ctx->pc != 0x37944Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37944Cu;
label_37944c:
    // 0x37944c: 0x10000037  b           . + 4 + (0x37 << 2)
label_379450:
    if (ctx->pc == 0x379450u) {
        ctx->pc = 0x379454u;
        goto label_379454;
    }
    ctx->pc = 0x37944Cu;
    {
        const bool branch_taken_0x37944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37944c) {
            ctx->pc = 0x37952Cu;
            goto label_37952c;
        }
    }
    ctx->pc = 0x379454u;
label_379454:
    // 0x379454: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_379458:
    if (ctx->pc == 0x379458u) {
        ctx->pc = 0x37945Cu;
        goto label_37945c;
    }
    ctx->pc = 0x379454u;
    {
        const bool branch_taken_0x379454 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x379454) {
            ctx->pc = 0x37952Cu;
            goto label_37952c;
        }
    }
    ctx->pc = 0x37945Cu;
label_37945c:
    // 0x37945c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37945cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_379460:
    // 0x379460: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x379460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_379464:
    // 0x379464: 0x8c76e378  lw          $s6, -0x1C88($v1)
    ctx->pc = 0x379464u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_379468:
    // 0x379468: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x379468u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_37946c:
    // 0x37946c: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x37946cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_379470:
    // 0x379470: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x379470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379474:
    // 0x379474: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379474u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379478:
    // 0x379478: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x379478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_37947c:
    // 0x37947c: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x37947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_379480:
    // 0x379480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x379480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379484:
    // 0x379484: 0x8cb40130  lw          $s4, 0x130($a1)
    ctx->pc = 0x379484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_379488:
    // 0x379488: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x379488u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_37948c:
    // 0x37948c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x37948cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_379490:
    // 0x379490: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x379490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_379494:
    // 0x379494: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x379494u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_379498:
    // 0x379498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x379498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37949c:
    // 0x37949c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x37949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3794a0:
    // 0x3794a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3794a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3794a4:
    // 0x3794a4: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x3794a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_3794a8:
    // 0x3794a8: 0x24970010  addiu       $s7, $a0, 0x10
    ctx->pc = 0x3794a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3794ac:
    // 0x3794ac: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x3794acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_3794b0:
    // 0x3794b0: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3794b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3794b4:
    // 0x3794b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3794b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3794b8:
    // 0x3794b8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x3794b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3794bc:
    // 0x3794bc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x3794bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3794c0:
    // 0x3794c0: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x3794c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3794c4:
    // 0x3794c4: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x3794c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3794c8:
    // 0x3794c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3794c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3794cc:
    // 0x3794cc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x3794ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3794d0:
    // 0x3794d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3794d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3794d4:
    // 0x3794d4: 0xc0de83c  jal         func_37A0F0
label_3794d8:
    if (ctx->pc == 0x3794D8u) {
        ctx->pc = 0x3794D8u;
            // 0x3794d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3794DCu;
        goto label_3794dc;
    }
    ctx->pc = 0x3794D4u;
    SET_GPR_U32(ctx, 31, 0x3794DCu);
    ctx->pc = 0x3794D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3794D4u;
            // 0x3794d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37A0F0u;
    if (runtime->hasFunction(0x37A0F0u)) {
        auto targetFn = runtime->lookupFunction(0x37A0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3794DCu; }
        if (ctx->pc != 0x3794DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037A0F0_0x37a0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3794DCu; }
        if (ctx->pc != 0x3794DCu) { return; }
    }
    ctx->pc = 0x3794DCu;
label_3794dc:
    // 0x3794dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3794dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3794e0:
    // 0x3794e0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3794e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3794e4:
    // 0x3794e4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_3794e8:
    if (ctx->pc == 0x3794E8u) {
        ctx->pc = 0x3794E8u;
            // 0x3794e8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3794ECu;
        goto label_3794ec;
    }
    ctx->pc = 0x3794E4u;
    {
        const bool branch_taken_0x3794e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3794E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3794E4u;
            // 0x3794e8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3794e4) {
            ctx->pc = 0x3794B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3794b0;
        }
    }
    ctx->pc = 0x3794ECu;
label_3794ec:
    // 0x3794ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3794ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3794f0:
    // 0x3794f0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x3794f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3794f4:
    // 0x3794f4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_3794f8:
    if (ctx->pc == 0x3794F8u) {
        ctx->pc = 0x3794FCu;
        goto label_3794fc;
    }
    ctx->pc = 0x3794F4u;
    {
        const bool branch_taken_0x3794f4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3794f4) {
            ctx->pc = 0x37952Cu;
            goto label_37952c;
        }
    }
    ctx->pc = 0x3794FCu;
label_3794fc:
    // 0x3794fc: 0xc04e738  jal         func_139CE0
label_379500:
    if (ctx->pc == 0x379500u) {
        ctx->pc = 0x379500u;
            // 0x379500: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x379504u;
        goto label_379504;
    }
    ctx->pc = 0x3794FCu;
    SET_GPR_U32(ctx, 31, 0x379504u);
    ctx->pc = 0x379500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3794FCu;
            // 0x379500: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379504u; }
        if (ctx->pc != 0x379504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379504u; }
        if (ctx->pc != 0x379504u) { return; }
    }
    ctx->pc = 0x379504u;
label_379504:
    // 0x379504: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x379504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379508:
    // 0x379508: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x379508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_37950c:
    // 0x37950c: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x37950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_379510:
    // 0x379510: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x379510u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_379514:
    // 0x379514: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x379514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379518:
    // 0x379518: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x379518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_37951c:
    // 0x37951c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37951cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_379520:
    // 0x379520: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x379520u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_379524:
    // 0x379524: 0xc055754  jal         func_155D50
label_379528:
    if (ctx->pc == 0x379528u) {
        ctx->pc = 0x379528u;
            // 0x379528: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x37952Cu;
        goto label_37952c;
    }
    ctx->pc = 0x379524u;
    SET_GPR_U32(ctx, 31, 0x37952Cu);
    ctx->pc = 0x379528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379524u;
            // 0x379528: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37952Cu; }
        if (ctx->pc != 0x37952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37952Cu; }
        if (ctx->pc != 0x37952Cu) { return; }
    }
    ctx->pc = 0x37952Cu;
label_37952c:
    // 0x37952c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x37952cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_379530:
    // 0x379530: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x379530u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_379534:
    // 0x379534: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x379534u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_379538:
    // 0x379538: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x379538u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37953c:
    // 0x37953c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37953cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_379540:
    // 0x379540: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x379540u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_379544:
    // 0x379544: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x379544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_379548:
    // 0x379548: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x379548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37954c:
    // 0x37954c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37954cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379550:
    // 0x379550: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_379554:
    // 0x379554: 0x3e00008  jr          $ra
label_379558:
    if (ctx->pc == 0x379558u) {
        ctx->pc = 0x379558u;
            // 0x379558: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x37955Cu;
        goto label_37955c;
    }
    ctx->pc = 0x379554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379554u;
            // 0x379558: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37955Cu;
label_37955c:
    // 0x37955c: 0x0  nop
    ctx->pc = 0x37955cu;
    // NOP
label_379560:
    // 0x379560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_379564:
    // 0x379564: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x379564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_379568:
    // 0x379568: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x379568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_37956c:
    // 0x37956c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37956cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_379570:
    // 0x379570: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_379574:
    // 0x379574: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x379574u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_379578:
    // 0x379578: 0x10a30034  beq         $a1, $v1, . + 4 + (0x34 << 2)
label_37957c:
    if (ctx->pc == 0x37957Cu) {
        ctx->pc = 0x37957Cu;
            // 0x37957c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379580u;
        goto label_379580;
    }
    ctx->pc = 0x379578u;
    {
        const bool branch_taken_0x379578 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37957Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379578u;
            // 0x37957c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379578) {
            ctx->pc = 0x37964Cu;
            goto label_37964c;
        }
    }
    ctx->pc = 0x379580u;
label_379580:
    // 0x379580: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x379580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_379584:
    // 0x379584: 0x50a3002e  beql        $a1, $v1, . + 4 + (0x2E << 2)
label_379588:
    if (ctx->pc == 0x379588u) {
        ctx->pc = 0x379588u;
            // 0x379588: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37958Cu;
        goto label_37958c;
    }
    ctx->pc = 0x379584u;
    {
        const bool branch_taken_0x379584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x379584) {
            ctx->pc = 0x379588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379584u;
            // 0x379588: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379640u;
            goto label_379640;
        }
    }
    ctx->pc = 0x37958Cu;
label_37958c:
    // 0x37958c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37958cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379590:
    // 0x379590: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_379594:
    if (ctx->pc == 0x379594u) {
        ctx->pc = 0x379598u;
        goto label_379598;
    }
    ctx->pc = 0x379590u;
    {
        const bool branch_taken_0x379590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x379590) {
            ctx->pc = 0x3795A0u;
            goto label_3795a0;
        }
    }
    ctx->pc = 0x379598u;
label_379598:
    // 0x379598: 0x10000097  b           . + 4 + (0x97 << 2)
label_37959c:
    if (ctx->pc == 0x37959Cu) {
        ctx->pc = 0x37959Cu;
            // 0x37959c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3795A0u;
        goto label_3795a0;
    }
    ctx->pc = 0x379598u;
    {
        const bool branch_taken_0x379598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37959Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379598u;
            // 0x37959c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379598) {
            ctx->pc = 0x3797F8u;
            goto label_3797f8;
        }
    }
    ctx->pc = 0x3795A0u;
label_3795a0:
    // 0x3795a0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3795a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3795a4:
    // 0x3795a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3795a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3795a8:
    // 0x3795a8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3795a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3795ac:
    // 0x3795ac: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3795acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3795b0:
    // 0x3795b0: 0x10650090  beq         $v1, $a1, . + 4 + (0x90 << 2)
label_3795b4:
    if (ctx->pc == 0x3795B4u) {
        ctx->pc = 0x3795B8u;
        goto label_3795b8;
    }
    ctx->pc = 0x3795B0u;
    {
        const bool branch_taken_0x3795b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3795b0) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3795B8u;
label_3795b8:
    // 0x3795b8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3795b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3795bc:
    // 0x3795bc: 0x8c636098  lw          $v1, 0x6098($v1)
    ctx->pc = 0x3795bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24728)));
label_3795c0:
    // 0x3795c0: 0x1060008c  beqz        $v1, . + 4 + (0x8C << 2)
label_3795c4:
    if (ctx->pc == 0x3795C4u) {
        ctx->pc = 0x3795C8u;
        goto label_3795c8;
    }
    ctx->pc = 0x3795C0u;
    {
        const bool branch_taken_0x3795c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3795c0) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3795C8u;
label_3795c8:
    // 0x3795c8: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x3795c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3795cc:
    // 0x3795cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3795ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_3795d0:
    // 0x3795d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3795d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3795d4:
    // 0x3795d4: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3795d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3795d8:
    // 0x3795d8: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3795d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3795dc:
    // 0x3795dc: 0x24a50056  addiu       $a1, $a1, 0x56
    ctx->pc = 0x3795dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 86));
label_3795e0:
    // 0x3795e0: 0xae05009c  sw          $a1, 0x9C($s0)
    ctx->pc = 0x3795e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 5));
label_3795e4:
    // 0x3795e4: 0x8c631ac0  lw          $v1, 0x1AC0($v1)
    ctx->pc = 0x3795e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6848)));
label_3795e8:
    // 0x3795e8: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x3795e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3795ec:
    // 0x3795ec: 0x602827  not         $a1, $v1
    ctx->pc = 0x3795ecu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_3795f0:
    // 0x3795f0: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x3795f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3795f4:
    // 0x3795f4: 0x8c660014  lw          $a2, 0x14($v1)
    ctx->pc = 0x3795f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3795f8:
    // 0x3795f8: 0x8cc30050  lw          $v1, 0x50($a2)
    ctx->pc = 0x3795f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_3795fc:
    // 0x3795fc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3795fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_379600:
    // 0x379600: 0xacc30050  sw          $v1, 0x50($a2)
    ctx->pc = 0x379600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 3));
label_379604:
    // 0x379604: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x379604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_379608:
    // 0x379608: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x379608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_37960c:
    // 0x37960c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x37960cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_379610:
    // 0x379610: 0x24630058  addiu       $v1, $v1, 0x58
    ctx->pc = 0x379610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
label_379614:
    // 0x379614: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x379614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_379618:
    // 0x379618: 0x8c426098  lw          $v0, 0x6098($v0)
    ctx->pc = 0x379618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24728)));
label_37961c:
    // 0x37961c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x37961cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_379620:
    // 0x379620: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x379620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_379624:
    // 0x379624: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x379624u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
label_379628:
    // 0x379628: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x379628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37962c:
    // 0x37962c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x37962cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_379630:
    // 0x379630: 0x320f809  jalr        $t9
label_379634:
    if (ctx->pc == 0x379634u) {
        ctx->pc = 0x379638u;
        goto label_379638;
    }
    ctx->pc = 0x379630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x379638u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x379638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x379638u; }
            if (ctx->pc != 0x379638u) { return; }
        }
        }
    }
    ctx->pc = 0x379638u;
label_379638:
    // 0x379638: 0x1000006e  b           . + 4 + (0x6E << 2)
label_37963c:
    if (ctx->pc == 0x37963Cu) {
        ctx->pc = 0x379640u;
        goto label_379640;
    }
    ctx->pc = 0x379638u;
    {
        const bool branch_taken_0x379638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379638) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x379640u;
label_379640:
    // 0x379640: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x379640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_379644:
    // 0x379644: 0x320f809  jalr        $t9
label_379648:
    if (ctx->pc == 0x379648u) {
        ctx->pc = 0x37964Cu;
        goto label_37964c;
    }
    ctx->pc = 0x379644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37964Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37964Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37964Cu; }
            if (ctx->pc != 0x37964Cu) { return; }
        }
        }
    }
    ctx->pc = 0x37964Cu;
label_37964c:
    // 0x37964c: 0xc0de698  jal         func_379A60
label_379650:
    if (ctx->pc == 0x379650u) {
        ctx->pc = 0x379654u;
        goto label_379654;
    }
    ctx->pc = 0x37964Cu;
    SET_GPR_U32(ctx, 31, 0x379654u);
    ctx->pc = 0x379A60u;
    if (runtime->hasFunction(0x379A60u)) {
        auto targetFn = runtime->lookupFunction(0x379A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379654u; }
        if (ctx->pc != 0x379654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379A60_0x379a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379654u; }
        if (ctx->pc != 0x379654u) { return; }
    }
    ctx->pc = 0x379654u;
label_379654:
    // 0x379654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x379654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_379658:
    // 0x379658: 0xc0de694  jal         func_379A50
label_37965c:
    if (ctx->pc == 0x37965Cu) {
        ctx->pc = 0x37965Cu;
            // 0x37965c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379660u;
        goto label_379660;
    }
    ctx->pc = 0x379658u;
    SET_GPR_U32(ctx, 31, 0x379660u);
    ctx->pc = 0x37965Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379658u;
            // 0x37965c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379A50u;
    if (runtime->hasFunction(0x379A50u)) {
        auto targetFn = runtime->lookupFunction(0x379A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379660u; }
        if (ctx->pc != 0x379660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379A50_0x379a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379660u; }
        if (ctx->pc != 0x379660u) { return; }
    }
    ctx->pc = 0x379660u;
label_379660:
    // 0x379660: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x379660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_379664:
    // 0x379664: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x379664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379668:
    // 0x379668: 0x5083005c  beql        $a0, $v1, . + 4 + (0x5C << 2)
label_37966c:
    if (ctx->pc == 0x37966Cu) {
        ctx->pc = 0x37966Cu;
            // 0x37966c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379670u;
        goto label_379670;
    }
    ctx->pc = 0x379668u;
    {
        const bool branch_taken_0x379668 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379668) {
            ctx->pc = 0x37966Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379668u;
            // 0x37966c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3797DCu;
            goto label_3797dc;
        }
    }
    ctx->pc = 0x379670u;
label_379670:
    // 0x379670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379674:
    // 0x379674: 0x10830053  beq         $a0, $v1, . + 4 + (0x53 << 2)
label_379678:
    if (ctx->pc == 0x379678u) {
        ctx->pc = 0x37967Cu;
        goto label_37967c;
    }
    ctx->pc = 0x379674u;
    {
        const bool branch_taken_0x379674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x379674) {
            ctx->pc = 0x3797C4u;
            goto label_3797c4;
        }
    }
    ctx->pc = 0x37967Cu;
label_37967c:
    // 0x37967c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_379680:
    if (ctx->pc == 0x379680u) {
        ctx->pc = 0x379684u;
        goto label_379684;
    }
    ctx->pc = 0x37967Cu;
    {
        const bool branch_taken_0x37967c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37967c) {
            ctx->pc = 0x37968Cu;
            goto label_37968c;
        }
    }
    ctx->pc = 0x379684u;
label_379684:
    // 0x379684: 0x1000005b  b           . + 4 + (0x5B << 2)
label_379688:
    if (ctx->pc == 0x379688u) {
        ctx->pc = 0x37968Cu;
        goto label_37968c;
    }
    ctx->pc = 0x379684u;
    {
        const bool branch_taken_0x379684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x379684) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x37968Cu;
label_37968c:
    // 0x37968c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_379690:
    if (ctx->pc == 0x379690u) {
        ctx->pc = 0x379690u;
            // 0x379690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379694u;
        goto label_379694;
    }
    ctx->pc = 0x37968Cu;
    {
        const bool branch_taken_0x37968c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37968c) {
            ctx->pc = 0x379690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37968Cu;
            // 0x379690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3796A4u;
            goto label_3796a4;
        }
    }
    ctx->pc = 0x379694u;
label_379694:
    // 0x379694: 0xc0de65c  jal         func_379970
label_379698:
    if (ctx->pc == 0x379698u) {
        ctx->pc = 0x379698u;
            // 0x379698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37969Cu;
        goto label_37969c;
    }
    ctx->pc = 0x379694u;
    SET_GPR_U32(ctx, 31, 0x37969Cu);
    ctx->pc = 0x379698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379694u;
            // 0x379698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379970u;
    if (runtime->hasFunction(0x379970u)) {
        auto targetFn = runtime->lookupFunction(0x379970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37969Cu; }
        if (ctx->pc != 0x37969Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379970_0x379970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37969Cu; }
        if (ctx->pc != 0x37969Cu) { return; }
    }
    ctx->pc = 0x37969Cu;
label_37969c:
    // 0x37969c: 0x10000055  b           . + 4 + (0x55 << 2)
label_3796a0:
    if (ctx->pc == 0x3796A0u) {
        ctx->pc = 0x3796A4u;
        goto label_3796a4;
    }
    ctx->pc = 0x37969Cu;
    {
        const bool branch_taken_0x37969c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37969c) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3796A4u;
label_3796a4:
    // 0x3796a4: 0xc0de654  jal         func_379950
label_3796a8:
    if (ctx->pc == 0x3796A8u) {
        ctx->pc = 0x3796A8u;
            // 0x3796a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3796ACu;
        goto label_3796ac;
    }
    ctx->pc = 0x3796A4u;
    SET_GPR_U32(ctx, 31, 0x3796ACu);
    ctx->pc = 0x3796A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3796A4u;
            // 0x3796a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379950u;
    if (runtime->hasFunction(0x379950u)) {
        auto targetFn = runtime->lookupFunction(0x379950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796ACu; }
        if (ctx->pc != 0x3796ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379950_0x379950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796ACu; }
        if (ctx->pc != 0x3796ACu) { return; }
    }
    ctx->pc = 0x3796ACu;
label_3796ac:
    // 0x3796ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3796acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3796b0:
    // 0x3796b0: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_3796b4:
    if (ctx->pc == 0x3796B4u) {
        ctx->pc = 0x3796B4u;
            // 0x3796b4: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->pc = 0x3796B8u;
        goto label_3796b8;
    }
    ctx->pc = 0x3796B0u;
    {
        const bool branch_taken_0x3796b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3796b0) {
            ctx->pc = 0x3796B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3796B0u;
            // 0x3796b4: 0x8e0400a8  lw          $a0, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3796DCu;
            goto label_3796dc;
        }
    }
    ctx->pc = 0x3796B8u;
label_3796b8:
    // 0x3796b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3796b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3796bc:
    // 0x3796bc: 0xc0775b8  jal         func_1DD6E0
label_3796c0:
    if (ctx->pc == 0x3796C0u) {
        ctx->pc = 0x3796C0u;
            // 0x3796c0: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->pc = 0x3796C4u;
        goto label_3796c4;
    }
    ctx->pc = 0x3796BCu;
    SET_GPR_U32(ctx, 31, 0x3796C4u);
    ctx->pc = 0x3796C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3796BCu;
            // 0x3796c0: 0xae020090  sw          $v0, 0x90($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796C4u; }
        if (ctx->pc != 0x3796C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796C4u; }
        if (ctx->pc != 0x3796C4u) { return; }
    }
    ctx->pc = 0x3796C4u;
label_3796c4:
    // 0x3796c4: 0xc0775b4  jal         func_1DD6D0
label_3796c8:
    if (ctx->pc == 0x3796C8u) {
        ctx->pc = 0x3796C8u;
            // 0x3796c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3796CCu;
        goto label_3796cc;
    }
    ctx->pc = 0x3796C4u;
    SET_GPR_U32(ctx, 31, 0x3796CCu);
    ctx->pc = 0x3796C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3796C4u;
            // 0x3796c8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796CCu; }
        if (ctx->pc != 0x3796CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796CCu; }
        if (ctx->pc != 0x3796CCu) { return; }
    }
    ctx->pc = 0x3796CCu;
label_3796cc:
    // 0x3796cc: 0xc6010098  lwc1        $f1, 0x98($s0)
    ctx->pc = 0x3796ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3796d0:
    // 0x3796d0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3796d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3796d4:
    // 0x3796d4: 0x10000047  b           . + 4 + (0x47 << 2)
label_3796d8:
    if (ctx->pc == 0x3796D8u) {
        ctx->pc = 0x3796D8u;
            // 0x3796d8: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->pc = 0x3796DCu;
        goto label_3796dc;
    }
    ctx->pc = 0x3796D4u;
    {
        const bool branch_taken_0x3796d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3796D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3796D4u;
            // 0x3796d8: 0xe6000098  swc1        $f0, 0x98($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3796d4) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3796DCu;
label_3796dc:
    // 0x3796dc: 0xc0de650  jal         func_379940
label_3796e0:
    if (ctx->pc == 0x3796E0u) {
        ctx->pc = 0x3796E4u;
        goto label_3796e4;
    }
    ctx->pc = 0x3796DCu;
    SET_GPR_U32(ctx, 31, 0x3796E4u);
    ctx->pc = 0x379940u;
    if (runtime->hasFunction(0x379940u)) {
        auto targetFn = runtime->lookupFunction(0x379940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796E4u; }
        if (ctx->pc != 0x3796E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379940_0x379940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3796E4u; }
        if (ctx->pc != 0x3796E4u) { return; }
    }
    ctx->pc = 0x3796E4u;
label_3796e4:
    // 0x3796e4: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x3796e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3796e8:
    // 0x3796e8: 0x14200042  bnez        $at, . + 4 + (0x42 << 2)
label_3796ec:
    if (ctx->pc == 0x3796ECu) {
        ctx->pc = 0x3796F0u;
        goto label_3796f0;
    }
    ctx->pc = 0x3796E8u;
    {
        const bool branch_taken_0x3796e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3796e8) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3796F0u;
label_3796f0:
    // 0x3796f0: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x3796f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_3796f4:
    // 0x3796f4: 0x26110098  addiu       $s1, $s0, 0x98
    ctx->pc = 0x3796f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
label_3796f8:
    // 0x3796f8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3796f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_3796fc:
    // 0x3796fc: 0xc0775b8  jal         func_1DD6E0
label_379700:
    if (ctx->pc == 0x379700u) {
        ctx->pc = 0x379700u;
            // 0x379700: 0xa60200a0  sh          $v0, 0xA0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x379704u;
        goto label_379704;
    }
    ctx->pc = 0x3796FCu;
    SET_GPR_U32(ctx, 31, 0x379704u);
    ctx->pc = 0x379700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3796FCu;
            // 0x379700: 0xa60200a0  sh          $v0, 0xA0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 160), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379704u; }
        if (ctx->pc != 0x379704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379704u; }
        if (ctx->pc != 0x379704u) { return; }
    }
    ctx->pc = 0x379704u;
label_379704:
    // 0x379704: 0xc0775b4  jal         func_1DD6D0
label_379708:
    if (ctx->pc == 0x379708u) {
        ctx->pc = 0x379708u;
            // 0x379708: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x37970Cu;
        goto label_37970c;
    }
    ctx->pc = 0x379704u;
    SET_GPR_U32(ctx, 31, 0x37970Cu);
    ctx->pc = 0x379708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379704u;
            // 0x379708: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37970Cu; }
        if (ctx->pc != 0x37970Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37970Cu; }
        if (ctx->pc != 0x37970Cu) { return; }
    }
    ctx->pc = 0x37970Cu;
label_37970c:
    // 0x37970c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x37970cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_379710:
    // 0x379710: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x379710u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_379714:
    // 0x379714: 0x0  nop
    ctx->pc = 0x379714u;
    // NOP
label_379718:
    // 0x379718: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x379718u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_37971c:
    // 0x37971c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x37971cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_379720:
    // 0x379720: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_379724:
    if (ctx->pc == 0x379724u) {
        ctx->pc = 0x379724u;
            // 0x379724: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x379728u;
        goto label_379728;
    }
    ctx->pc = 0x379720u;
    {
        const bool branch_taken_0x379720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x379724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379720u;
            // 0x379724: 0xe6200000  swc1        $f0, 0x0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x379720) {
            ctx->pc = 0x379748u;
            goto label_379748;
        }
    }
    ctx->pc = 0x379728u;
label_379728:
    // 0x379728: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x379728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_37972c:
    // 0x37972c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37972cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379730:
    // 0x379730: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x379730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_379734:
    // 0x379734: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x379734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_379738:
    // 0x379738: 0xae030094  sw          $v1, 0x94($s0)
    ctx->pc = 0x379738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 3));
label_37973c:
    // 0x37973c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x37973cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_379740:
    // 0x379740: 0xc0de634  jal         func_3798D0
label_379744:
    if (ctx->pc == 0x379744u) {
        ctx->pc = 0x379744u;
            // 0x379744: 0xae050094  sw          $a1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 5));
        ctx->pc = 0x379748u;
        goto label_379748;
    }
    ctx->pc = 0x379740u;
    SET_GPR_U32(ctx, 31, 0x379748u);
    ctx->pc = 0x379744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379740u;
            // 0x379744: 0xae050094  sw          $a1, 0x94($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798D0u;
    if (runtime->hasFunction(0x3798D0u)) {
        auto targetFn = runtime->lookupFunction(0x3798D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379748u; }
        if (ctx->pc != 0x379748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798D0_0x3798d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379748u; }
        if (ctx->pc != 0x379748u) { return; }
    }
    ctx->pc = 0x379748u;
label_379748:
    // 0x379748: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x379748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_37974c:
    // 0x37974c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37974cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_379750:
    // 0x379750: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x379750u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_379754:
    // 0x379754: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_379758:
    if (ctx->pc == 0x379758u) {
        ctx->pc = 0x37975Cu;
        goto label_37975c;
    }
    ctx->pc = 0x379754u;
    {
        const bool branch_taken_0x379754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x379754) {
            ctx->pc = 0x379784u;
            goto label_379784;
        }
    }
    ctx->pc = 0x37975Cu;
label_37975c:
    // 0x37975c: 0x960300a0  lhu         $v1, 0xA0($s0)
    ctx->pc = 0x37975cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
label_379760:
    // 0x379760: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_379764:
    if (ctx->pc == 0x379764u) {
        ctx->pc = 0x379768u;
        goto label_379768;
    }
    ctx->pc = 0x379760u;
    {
        const bool branch_taken_0x379760 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x379760) {
            ctx->pc = 0x379784u;
            goto label_379784;
        }
    }
    ctx->pc = 0x379768u;
label_379768:
    // 0x379768: 0xc0c05c4  jal         func_301710
label_37976c:
    if (ctx->pc == 0x37976Cu) {
        ctx->pc = 0x379770u;
        goto label_379770;
    }
    ctx->pc = 0x379768u;
    SET_GPR_U32(ctx, 31, 0x379770u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379770u; }
        if (ctx->pc != 0x379770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379770u; }
        if (ctx->pc != 0x379770u) { return; }
    }
    ctx->pc = 0x379770u;
label_379770:
    // 0x379770: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x379770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_379774:
    // 0x379774: 0xc0de630  jal         func_3798C0
label_379778:
    if (ctx->pc == 0x379778u) {
        ctx->pc = 0x379778u;
            // 0x379778: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x37977Cu;
        goto label_37977c;
    }
    ctx->pc = 0x379774u;
    SET_GPR_U32(ctx, 31, 0x37977Cu);
    ctx->pc = 0x379778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379774u;
            // 0x379778: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798C0u;
    if (runtime->hasFunction(0x3798C0u)) {
        auto targetFn = runtime->lookupFunction(0x3798C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37977Cu; }
        if (ctx->pc != 0x37977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798C0_0x3798c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37977Cu; }
        if (ctx->pc != 0x37977Cu) { return; }
    }
    ctx->pc = 0x37977Cu;
label_37977c:
    // 0x37977c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_379780:
    if (ctx->pc == 0x379780u) {
        ctx->pc = 0x379784u;
        goto label_379784;
    }
    ctx->pc = 0x37977Cu;
    {
        const bool branch_taken_0x37977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37977c) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x379784u;
label_379784:
    // 0x379784: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
label_379788:
    if (ctx->pc == 0x379788u) {
        ctx->pc = 0x37978Cu;
        goto label_37978c;
    }
    ctx->pc = 0x379784u;
    {
        const bool branch_taken_0x379784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x379784) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x37978Cu;
label_37978c:
    // 0x37978c: 0xc0c05c4  jal         func_301710
label_379790:
    if (ctx->pc == 0x379790u) {
        ctx->pc = 0x379794u;
        goto label_379794;
    }
    ctx->pc = 0x37978Cu;
    SET_GPR_U32(ctx, 31, 0x379794u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379794u; }
        if (ctx->pc != 0x379794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379794u; }
        if (ctx->pc != 0x379794u) { return; }
    }
    ctx->pc = 0x379794u;
label_379794:
    // 0x379794: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x379794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_379798:
    // 0x379798: 0xc0de62c  jal         func_3798B0
label_37979c:
    if (ctx->pc == 0x37979Cu) {
        ctx->pc = 0x37979Cu;
            // 0x37979c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3797A0u;
        goto label_3797a0;
    }
    ctx->pc = 0x379798u;
    SET_GPR_U32(ctx, 31, 0x3797A0u);
    ctx->pc = 0x37979Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379798u;
            // 0x37979c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3798B0u;
    if (runtime->hasFunction(0x3798B0u)) {
        auto targetFn = runtime->lookupFunction(0x3798B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797A0u; }
        if (ctx->pc != 0x3797A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003798B0_0x3798b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797A0u; }
        if (ctx->pc != 0x3797A0u) { return; }
    }
    ctx->pc = 0x3797A0u;
label_3797a0:
    // 0x3797a0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3797a4:
    if (ctx->pc == 0x3797A4u) {
        ctx->pc = 0x3797A8u;
        goto label_3797a8;
    }
    ctx->pc = 0x3797A0u;
    {
        const bool branch_taken_0x3797a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3797a0) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3797A8u;
label_3797a8:
    // 0x3797a8: 0xc0c05c4  jal         func_301710
label_3797ac:
    if (ctx->pc == 0x3797ACu) {
        ctx->pc = 0x3797B0u;
        goto label_3797b0;
    }
    ctx->pc = 0x3797A8u;
    SET_GPR_U32(ctx, 31, 0x3797B0u);
    ctx->pc = 0x301710u;
    if (runtime->hasFunction(0x301710u)) {
        auto targetFn = runtime->lookupFunction(0x301710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797B0u; }
        if (ctx->pc != 0x3797B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301710_0x301710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797B0u; }
        if (ctx->pc != 0x3797B0u) { return; }
    }
    ctx->pc = 0x3797B0u;
label_3797b0:
    // 0x3797b0: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x3797b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_3797b4:
    // 0x3797b4: 0xc0c05c0  jal         func_301700
label_3797b8:
    if (ctx->pc == 0x3797B8u) {
        ctx->pc = 0x3797B8u;
            // 0x3797b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3797BCu;
        goto label_3797bc;
    }
    ctx->pc = 0x3797B4u;
    SET_GPR_U32(ctx, 31, 0x3797BCu);
    ctx->pc = 0x3797B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3797B4u;
            // 0x3797b8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301700u;
    if (runtime->hasFunction(0x301700u)) {
        auto targetFn = runtime->lookupFunction(0x301700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797BCu; }
        if (ctx->pc != 0x3797BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301700_0x301700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797BCu; }
        if (ctx->pc != 0x3797BCu) { return; }
    }
    ctx->pc = 0x3797BCu;
label_3797bc:
    // 0x3797bc: 0x1000000d  b           . + 4 + (0xD << 2)
label_3797c0:
    if (ctx->pc == 0x3797C0u) {
        ctx->pc = 0x3797C4u;
        goto label_3797c4;
    }
    ctx->pc = 0x3797BCu;
    {
        const bool branch_taken_0x3797bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3797bc) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3797C4u;
label_3797c4:
    // 0x3797c4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_3797c8:
    if (ctx->pc == 0x3797C8u) {
        ctx->pc = 0x3797CCu;
        goto label_3797cc;
    }
    ctx->pc = 0x3797C4u;
    {
        const bool branch_taken_0x3797c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3797c4) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3797CCu;
label_3797cc:
    // 0x3797cc: 0xc0de604  jal         func_379810
label_3797d0:
    if (ctx->pc == 0x3797D0u) {
        ctx->pc = 0x3797D0u;
            // 0x3797d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3797D4u;
        goto label_3797d4;
    }
    ctx->pc = 0x3797CCu;
    SET_GPR_U32(ctx, 31, 0x3797D4u);
    ctx->pc = 0x3797D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3797CCu;
            // 0x3797d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379810u;
    if (runtime->hasFunction(0x379810u)) {
        auto targetFn = runtime->lookupFunction(0x379810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797D4u; }
        if (ctx->pc != 0x3797D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379810_0x379810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797D4u; }
        if (ctx->pc != 0x3797D4u) { return; }
    }
    ctx->pc = 0x3797D4u;
label_3797d4:
    // 0x3797d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3797d8:
    if (ctx->pc == 0x3797D8u) {
        ctx->pc = 0x3797DCu;
        goto label_3797dc;
    }
    ctx->pc = 0x3797D4u;
    {
        const bool branch_taken_0x3797d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3797d4) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3797DCu;
label_3797dc:
    // 0x3797dc: 0xc0de654  jal         func_379950
label_3797e0:
    if (ctx->pc == 0x3797E0u) {
        ctx->pc = 0x3797E0u;
            // 0x3797e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3797E4u;
        goto label_3797e4;
    }
    ctx->pc = 0x3797DCu;
    SET_GPR_U32(ctx, 31, 0x3797E4u);
    ctx->pc = 0x3797E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3797DCu;
            // 0x3797e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379950u;
    if (runtime->hasFunction(0x379950u)) {
        auto targetFn = runtime->lookupFunction(0x379950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797E4u; }
        if (ctx->pc != 0x3797E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379950_0x379950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3797E4u; }
        if (ctx->pc != 0x3797E4u) { return; }
    }
    ctx->pc = 0x3797E4u;
label_3797e4:
    // 0x3797e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3797e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3797e8:
    // 0x3797e8: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_3797ec:
    if (ctx->pc == 0x3797ECu) {
        ctx->pc = 0x3797F0u;
        goto label_3797f0;
    }
    ctx->pc = 0x3797E8u;
    {
        const bool branch_taken_0x3797e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3797e8) {
            ctx->pc = 0x3797F4u;
            goto label_3797f4;
        }
    }
    ctx->pc = 0x3797F0u;
label_3797f0:
    // 0x3797f0: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x3797f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_3797f4:
    // 0x3797f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3797f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3797f8:
    // 0x3797f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3797f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3797fc:
    // 0x3797fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3797fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_379800:
    // 0x379800: 0x3e00008  jr          $ra
label_379804:
    if (ctx->pc == 0x379804u) {
        ctx->pc = 0x379804u;
            // 0x379804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x379808u;
        goto label_379808;
    }
    ctx->pc = 0x379800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379800u;
            // 0x379804: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379808u;
label_379808:
    // 0x379808: 0x0  nop
    ctx->pc = 0x379808u;
    // NOP
label_37980c:
    // 0x37980c: 0x0  nop
    ctx->pc = 0x37980cu;
    // NOP
}
