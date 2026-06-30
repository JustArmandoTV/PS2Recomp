#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F8160
// Address: 0x3f8160 - 0x3f8a40
void sub_003F8160_0x3f8160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F8160_0x3f8160");
#endif

    switch (ctx->pc) {
        case 0x3f8160u: goto label_3f8160;
        case 0x3f8164u: goto label_3f8164;
        case 0x3f8168u: goto label_3f8168;
        case 0x3f816cu: goto label_3f816c;
        case 0x3f8170u: goto label_3f8170;
        case 0x3f8174u: goto label_3f8174;
        case 0x3f8178u: goto label_3f8178;
        case 0x3f817cu: goto label_3f817c;
        case 0x3f8180u: goto label_3f8180;
        case 0x3f8184u: goto label_3f8184;
        case 0x3f8188u: goto label_3f8188;
        case 0x3f818cu: goto label_3f818c;
        case 0x3f8190u: goto label_3f8190;
        case 0x3f8194u: goto label_3f8194;
        case 0x3f8198u: goto label_3f8198;
        case 0x3f819cu: goto label_3f819c;
        case 0x3f81a0u: goto label_3f81a0;
        case 0x3f81a4u: goto label_3f81a4;
        case 0x3f81a8u: goto label_3f81a8;
        case 0x3f81acu: goto label_3f81ac;
        case 0x3f81b0u: goto label_3f81b0;
        case 0x3f81b4u: goto label_3f81b4;
        case 0x3f81b8u: goto label_3f81b8;
        case 0x3f81bcu: goto label_3f81bc;
        case 0x3f81c0u: goto label_3f81c0;
        case 0x3f81c4u: goto label_3f81c4;
        case 0x3f81c8u: goto label_3f81c8;
        case 0x3f81ccu: goto label_3f81cc;
        case 0x3f81d0u: goto label_3f81d0;
        case 0x3f81d4u: goto label_3f81d4;
        case 0x3f81d8u: goto label_3f81d8;
        case 0x3f81dcu: goto label_3f81dc;
        case 0x3f81e0u: goto label_3f81e0;
        case 0x3f81e4u: goto label_3f81e4;
        case 0x3f81e8u: goto label_3f81e8;
        case 0x3f81ecu: goto label_3f81ec;
        case 0x3f81f0u: goto label_3f81f0;
        case 0x3f81f4u: goto label_3f81f4;
        case 0x3f81f8u: goto label_3f81f8;
        case 0x3f81fcu: goto label_3f81fc;
        case 0x3f8200u: goto label_3f8200;
        case 0x3f8204u: goto label_3f8204;
        case 0x3f8208u: goto label_3f8208;
        case 0x3f820cu: goto label_3f820c;
        case 0x3f8210u: goto label_3f8210;
        case 0x3f8214u: goto label_3f8214;
        case 0x3f8218u: goto label_3f8218;
        case 0x3f821cu: goto label_3f821c;
        case 0x3f8220u: goto label_3f8220;
        case 0x3f8224u: goto label_3f8224;
        case 0x3f8228u: goto label_3f8228;
        case 0x3f822cu: goto label_3f822c;
        case 0x3f8230u: goto label_3f8230;
        case 0x3f8234u: goto label_3f8234;
        case 0x3f8238u: goto label_3f8238;
        case 0x3f823cu: goto label_3f823c;
        case 0x3f8240u: goto label_3f8240;
        case 0x3f8244u: goto label_3f8244;
        case 0x3f8248u: goto label_3f8248;
        case 0x3f824cu: goto label_3f824c;
        case 0x3f8250u: goto label_3f8250;
        case 0x3f8254u: goto label_3f8254;
        case 0x3f8258u: goto label_3f8258;
        case 0x3f825cu: goto label_3f825c;
        case 0x3f8260u: goto label_3f8260;
        case 0x3f8264u: goto label_3f8264;
        case 0x3f8268u: goto label_3f8268;
        case 0x3f826cu: goto label_3f826c;
        case 0x3f8270u: goto label_3f8270;
        case 0x3f8274u: goto label_3f8274;
        case 0x3f8278u: goto label_3f8278;
        case 0x3f827cu: goto label_3f827c;
        case 0x3f8280u: goto label_3f8280;
        case 0x3f8284u: goto label_3f8284;
        case 0x3f8288u: goto label_3f8288;
        case 0x3f828cu: goto label_3f828c;
        case 0x3f8290u: goto label_3f8290;
        case 0x3f8294u: goto label_3f8294;
        case 0x3f8298u: goto label_3f8298;
        case 0x3f829cu: goto label_3f829c;
        case 0x3f82a0u: goto label_3f82a0;
        case 0x3f82a4u: goto label_3f82a4;
        case 0x3f82a8u: goto label_3f82a8;
        case 0x3f82acu: goto label_3f82ac;
        case 0x3f82b0u: goto label_3f82b0;
        case 0x3f82b4u: goto label_3f82b4;
        case 0x3f82b8u: goto label_3f82b8;
        case 0x3f82bcu: goto label_3f82bc;
        case 0x3f82c0u: goto label_3f82c0;
        case 0x3f82c4u: goto label_3f82c4;
        case 0x3f82c8u: goto label_3f82c8;
        case 0x3f82ccu: goto label_3f82cc;
        case 0x3f82d0u: goto label_3f82d0;
        case 0x3f82d4u: goto label_3f82d4;
        case 0x3f82d8u: goto label_3f82d8;
        case 0x3f82dcu: goto label_3f82dc;
        case 0x3f82e0u: goto label_3f82e0;
        case 0x3f82e4u: goto label_3f82e4;
        case 0x3f82e8u: goto label_3f82e8;
        case 0x3f82ecu: goto label_3f82ec;
        case 0x3f82f0u: goto label_3f82f0;
        case 0x3f82f4u: goto label_3f82f4;
        case 0x3f82f8u: goto label_3f82f8;
        case 0x3f82fcu: goto label_3f82fc;
        case 0x3f8300u: goto label_3f8300;
        case 0x3f8304u: goto label_3f8304;
        case 0x3f8308u: goto label_3f8308;
        case 0x3f830cu: goto label_3f830c;
        case 0x3f8310u: goto label_3f8310;
        case 0x3f8314u: goto label_3f8314;
        case 0x3f8318u: goto label_3f8318;
        case 0x3f831cu: goto label_3f831c;
        case 0x3f8320u: goto label_3f8320;
        case 0x3f8324u: goto label_3f8324;
        case 0x3f8328u: goto label_3f8328;
        case 0x3f832cu: goto label_3f832c;
        case 0x3f8330u: goto label_3f8330;
        case 0x3f8334u: goto label_3f8334;
        case 0x3f8338u: goto label_3f8338;
        case 0x3f833cu: goto label_3f833c;
        case 0x3f8340u: goto label_3f8340;
        case 0x3f8344u: goto label_3f8344;
        case 0x3f8348u: goto label_3f8348;
        case 0x3f834cu: goto label_3f834c;
        case 0x3f8350u: goto label_3f8350;
        case 0x3f8354u: goto label_3f8354;
        case 0x3f8358u: goto label_3f8358;
        case 0x3f835cu: goto label_3f835c;
        case 0x3f8360u: goto label_3f8360;
        case 0x3f8364u: goto label_3f8364;
        case 0x3f8368u: goto label_3f8368;
        case 0x3f836cu: goto label_3f836c;
        case 0x3f8370u: goto label_3f8370;
        case 0x3f8374u: goto label_3f8374;
        case 0x3f8378u: goto label_3f8378;
        case 0x3f837cu: goto label_3f837c;
        case 0x3f8380u: goto label_3f8380;
        case 0x3f8384u: goto label_3f8384;
        case 0x3f8388u: goto label_3f8388;
        case 0x3f838cu: goto label_3f838c;
        case 0x3f8390u: goto label_3f8390;
        case 0x3f8394u: goto label_3f8394;
        case 0x3f8398u: goto label_3f8398;
        case 0x3f839cu: goto label_3f839c;
        case 0x3f83a0u: goto label_3f83a0;
        case 0x3f83a4u: goto label_3f83a4;
        case 0x3f83a8u: goto label_3f83a8;
        case 0x3f83acu: goto label_3f83ac;
        case 0x3f83b0u: goto label_3f83b0;
        case 0x3f83b4u: goto label_3f83b4;
        case 0x3f83b8u: goto label_3f83b8;
        case 0x3f83bcu: goto label_3f83bc;
        case 0x3f83c0u: goto label_3f83c0;
        case 0x3f83c4u: goto label_3f83c4;
        case 0x3f83c8u: goto label_3f83c8;
        case 0x3f83ccu: goto label_3f83cc;
        case 0x3f83d0u: goto label_3f83d0;
        case 0x3f83d4u: goto label_3f83d4;
        case 0x3f83d8u: goto label_3f83d8;
        case 0x3f83dcu: goto label_3f83dc;
        case 0x3f83e0u: goto label_3f83e0;
        case 0x3f83e4u: goto label_3f83e4;
        case 0x3f83e8u: goto label_3f83e8;
        case 0x3f83ecu: goto label_3f83ec;
        case 0x3f83f0u: goto label_3f83f0;
        case 0x3f83f4u: goto label_3f83f4;
        case 0x3f83f8u: goto label_3f83f8;
        case 0x3f83fcu: goto label_3f83fc;
        case 0x3f8400u: goto label_3f8400;
        case 0x3f8404u: goto label_3f8404;
        case 0x3f8408u: goto label_3f8408;
        case 0x3f840cu: goto label_3f840c;
        case 0x3f8410u: goto label_3f8410;
        case 0x3f8414u: goto label_3f8414;
        case 0x3f8418u: goto label_3f8418;
        case 0x3f841cu: goto label_3f841c;
        case 0x3f8420u: goto label_3f8420;
        case 0x3f8424u: goto label_3f8424;
        case 0x3f8428u: goto label_3f8428;
        case 0x3f842cu: goto label_3f842c;
        case 0x3f8430u: goto label_3f8430;
        case 0x3f8434u: goto label_3f8434;
        case 0x3f8438u: goto label_3f8438;
        case 0x3f843cu: goto label_3f843c;
        case 0x3f8440u: goto label_3f8440;
        case 0x3f8444u: goto label_3f8444;
        case 0x3f8448u: goto label_3f8448;
        case 0x3f844cu: goto label_3f844c;
        case 0x3f8450u: goto label_3f8450;
        case 0x3f8454u: goto label_3f8454;
        case 0x3f8458u: goto label_3f8458;
        case 0x3f845cu: goto label_3f845c;
        case 0x3f8460u: goto label_3f8460;
        case 0x3f8464u: goto label_3f8464;
        case 0x3f8468u: goto label_3f8468;
        case 0x3f846cu: goto label_3f846c;
        case 0x3f8470u: goto label_3f8470;
        case 0x3f8474u: goto label_3f8474;
        case 0x3f8478u: goto label_3f8478;
        case 0x3f847cu: goto label_3f847c;
        case 0x3f8480u: goto label_3f8480;
        case 0x3f8484u: goto label_3f8484;
        case 0x3f8488u: goto label_3f8488;
        case 0x3f848cu: goto label_3f848c;
        case 0x3f8490u: goto label_3f8490;
        case 0x3f8494u: goto label_3f8494;
        case 0x3f8498u: goto label_3f8498;
        case 0x3f849cu: goto label_3f849c;
        case 0x3f84a0u: goto label_3f84a0;
        case 0x3f84a4u: goto label_3f84a4;
        case 0x3f84a8u: goto label_3f84a8;
        case 0x3f84acu: goto label_3f84ac;
        case 0x3f84b0u: goto label_3f84b0;
        case 0x3f84b4u: goto label_3f84b4;
        case 0x3f84b8u: goto label_3f84b8;
        case 0x3f84bcu: goto label_3f84bc;
        case 0x3f84c0u: goto label_3f84c0;
        case 0x3f84c4u: goto label_3f84c4;
        case 0x3f84c8u: goto label_3f84c8;
        case 0x3f84ccu: goto label_3f84cc;
        case 0x3f84d0u: goto label_3f84d0;
        case 0x3f84d4u: goto label_3f84d4;
        case 0x3f84d8u: goto label_3f84d8;
        case 0x3f84dcu: goto label_3f84dc;
        case 0x3f84e0u: goto label_3f84e0;
        case 0x3f84e4u: goto label_3f84e4;
        case 0x3f84e8u: goto label_3f84e8;
        case 0x3f84ecu: goto label_3f84ec;
        case 0x3f84f0u: goto label_3f84f0;
        case 0x3f84f4u: goto label_3f84f4;
        case 0x3f84f8u: goto label_3f84f8;
        case 0x3f84fcu: goto label_3f84fc;
        case 0x3f8500u: goto label_3f8500;
        case 0x3f8504u: goto label_3f8504;
        case 0x3f8508u: goto label_3f8508;
        case 0x3f850cu: goto label_3f850c;
        case 0x3f8510u: goto label_3f8510;
        case 0x3f8514u: goto label_3f8514;
        case 0x3f8518u: goto label_3f8518;
        case 0x3f851cu: goto label_3f851c;
        case 0x3f8520u: goto label_3f8520;
        case 0x3f8524u: goto label_3f8524;
        case 0x3f8528u: goto label_3f8528;
        case 0x3f852cu: goto label_3f852c;
        case 0x3f8530u: goto label_3f8530;
        case 0x3f8534u: goto label_3f8534;
        case 0x3f8538u: goto label_3f8538;
        case 0x3f853cu: goto label_3f853c;
        case 0x3f8540u: goto label_3f8540;
        case 0x3f8544u: goto label_3f8544;
        case 0x3f8548u: goto label_3f8548;
        case 0x3f854cu: goto label_3f854c;
        case 0x3f8550u: goto label_3f8550;
        case 0x3f8554u: goto label_3f8554;
        case 0x3f8558u: goto label_3f8558;
        case 0x3f855cu: goto label_3f855c;
        case 0x3f8560u: goto label_3f8560;
        case 0x3f8564u: goto label_3f8564;
        case 0x3f8568u: goto label_3f8568;
        case 0x3f856cu: goto label_3f856c;
        case 0x3f8570u: goto label_3f8570;
        case 0x3f8574u: goto label_3f8574;
        case 0x3f8578u: goto label_3f8578;
        case 0x3f857cu: goto label_3f857c;
        case 0x3f8580u: goto label_3f8580;
        case 0x3f8584u: goto label_3f8584;
        case 0x3f8588u: goto label_3f8588;
        case 0x3f858cu: goto label_3f858c;
        case 0x3f8590u: goto label_3f8590;
        case 0x3f8594u: goto label_3f8594;
        case 0x3f8598u: goto label_3f8598;
        case 0x3f859cu: goto label_3f859c;
        case 0x3f85a0u: goto label_3f85a0;
        case 0x3f85a4u: goto label_3f85a4;
        case 0x3f85a8u: goto label_3f85a8;
        case 0x3f85acu: goto label_3f85ac;
        case 0x3f85b0u: goto label_3f85b0;
        case 0x3f85b4u: goto label_3f85b4;
        case 0x3f85b8u: goto label_3f85b8;
        case 0x3f85bcu: goto label_3f85bc;
        case 0x3f85c0u: goto label_3f85c0;
        case 0x3f85c4u: goto label_3f85c4;
        case 0x3f85c8u: goto label_3f85c8;
        case 0x3f85ccu: goto label_3f85cc;
        case 0x3f85d0u: goto label_3f85d0;
        case 0x3f85d4u: goto label_3f85d4;
        case 0x3f85d8u: goto label_3f85d8;
        case 0x3f85dcu: goto label_3f85dc;
        case 0x3f85e0u: goto label_3f85e0;
        case 0x3f85e4u: goto label_3f85e4;
        case 0x3f85e8u: goto label_3f85e8;
        case 0x3f85ecu: goto label_3f85ec;
        case 0x3f85f0u: goto label_3f85f0;
        case 0x3f85f4u: goto label_3f85f4;
        case 0x3f85f8u: goto label_3f85f8;
        case 0x3f85fcu: goto label_3f85fc;
        case 0x3f8600u: goto label_3f8600;
        case 0x3f8604u: goto label_3f8604;
        case 0x3f8608u: goto label_3f8608;
        case 0x3f860cu: goto label_3f860c;
        case 0x3f8610u: goto label_3f8610;
        case 0x3f8614u: goto label_3f8614;
        case 0x3f8618u: goto label_3f8618;
        case 0x3f861cu: goto label_3f861c;
        case 0x3f8620u: goto label_3f8620;
        case 0x3f8624u: goto label_3f8624;
        case 0x3f8628u: goto label_3f8628;
        case 0x3f862cu: goto label_3f862c;
        case 0x3f8630u: goto label_3f8630;
        case 0x3f8634u: goto label_3f8634;
        case 0x3f8638u: goto label_3f8638;
        case 0x3f863cu: goto label_3f863c;
        case 0x3f8640u: goto label_3f8640;
        case 0x3f8644u: goto label_3f8644;
        case 0x3f8648u: goto label_3f8648;
        case 0x3f864cu: goto label_3f864c;
        case 0x3f8650u: goto label_3f8650;
        case 0x3f8654u: goto label_3f8654;
        case 0x3f8658u: goto label_3f8658;
        case 0x3f865cu: goto label_3f865c;
        case 0x3f8660u: goto label_3f8660;
        case 0x3f8664u: goto label_3f8664;
        case 0x3f8668u: goto label_3f8668;
        case 0x3f866cu: goto label_3f866c;
        case 0x3f8670u: goto label_3f8670;
        case 0x3f8674u: goto label_3f8674;
        case 0x3f8678u: goto label_3f8678;
        case 0x3f867cu: goto label_3f867c;
        case 0x3f8680u: goto label_3f8680;
        case 0x3f8684u: goto label_3f8684;
        case 0x3f8688u: goto label_3f8688;
        case 0x3f868cu: goto label_3f868c;
        case 0x3f8690u: goto label_3f8690;
        case 0x3f8694u: goto label_3f8694;
        case 0x3f8698u: goto label_3f8698;
        case 0x3f869cu: goto label_3f869c;
        case 0x3f86a0u: goto label_3f86a0;
        case 0x3f86a4u: goto label_3f86a4;
        case 0x3f86a8u: goto label_3f86a8;
        case 0x3f86acu: goto label_3f86ac;
        case 0x3f86b0u: goto label_3f86b0;
        case 0x3f86b4u: goto label_3f86b4;
        case 0x3f86b8u: goto label_3f86b8;
        case 0x3f86bcu: goto label_3f86bc;
        case 0x3f86c0u: goto label_3f86c0;
        case 0x3f86c4u: goto label_3f86c4;
        case 0x3f86c8u: goto label_3f86c8;
        case 0x3f86ccu: goto label_3f86cc;
        case 0x3f86d0u: goto label_3f86d0;
        case 0x3f86d4u: goto label_3f86d4;
        case 0x3f86d8u: goto label_3f86d8;
        case 0x3f86dcu: goto label_3f86dc;
        case 0x3f86e0u: goto label_3f86e0;
        case 0x3f86e4u: goto label_3f86e4;
        case 0x3f86e8u: goto label_3f86e8;
        case 0x3f86ecu: goto label_3f86ec;
        case 0x3f86f0u: goto label_3f86f0;
        case 0x3f86f4u: goto label_3f86f4;
        case 0x3f86f8u: goto label_3f86f8;
        case 0x3f86fcu: goto label_3f86fc;
        case 0x3f8700u: goto label_3f8700;
        case 0x3f8704u: goto label_3f8704;
        case 0x3f8708u: goto label_3f8708;
        case 0x3f870cu: goto label_3f870c;
        case 0x3f8710u: goto label_3f8710;
        case 0x3f8714u: goto label_3f8714;
        case 0x3f8718u: goto label_3f8718;
        case 0x3f871cu: goto label_3f871c;
        case 0x3f8720u: goto label_3f8720;
        case 0x3f8724u: goto label_3f8724;
        case 0x3f8728u: goto label_3f8728;
        case 0x3f872cu: goto label_3f872c;
        case 0x3f8730u: goto label_3f8730;
        case 0x3f8734u: goto label_3f8734;
        case 0x3f8738u: goto label_3f8738;
        case 0x3f873cu: goto label_3f873c;
        case 0x3f8740u: goto label_3f8740;
        case 0x3f8744u: goto label_3f8744;
        case 0x3f8748u: goto label_3f8748;
        case 0x3f874cu: goto label_3f874c;
        case 0x3f8750u: goto label_3f8750;
        case 0x3f8754u: goto label_3f8754;
        case 0x3f8758u: goto label_3f8758;
        case 0x3f875cu: goto label_3f875c;
        case 0x3f8760u: goto label_3f8760;
        case 0x3f8764u: goto label_3f8764;
        case 0x3f8768u: goto label_3f8768;
        case 0x3f876cu: goto label_3f876c;
        case 0x3f8770u: goto label_3f8770;
        case 0x3f8774u: goto label_3f8774;
        case 0x3f8778u: goto label_3f8778;
        case 0x3f877cu: goto label_3f877c;
        case 0x3f8780u: goto label_3f8780;
        case 0x3f8784u: goto label_3f8784;
        case 0x3f8788u: goto label_3f8788;
        case 0x3f878cu: goto label_3f878c;
        case 0x3f8790u: goto label_3f8790;
        case 0x3f8794u: goto label_3f8794;
        case 0x3f8798u: goto label_3f8798;
        case 0x3f879cu: goto label_3f879c;
        case 0x3f87a0u: goto label_3f87a0;
        case 0x3f87a4u: goto label_3f87a4;
        case 0x3f87a8u: goto label_3f87a8;
        case 0x3f87acu: goto label_3f87ac;
        case 0x3f87b0u: goto label_3f87b0;
        case 0x3f87b4u: goto label_3f87b4;
        case 0x3f87b8u: goto label_3f87b8;
        case 0x3f87bcu: goto label_3f87bc;
        case 0x3f87c0u: goto label_3f87c0;
        case 0x3f87c4u: goto label_3f87c4;
        case 0x3f87c8u: goto label_3f87c8;
        case 0x3f87ccu: goto label_3f87cc;
        case 0x3f87d0u: goto label_3f87d0;
        case 0x3f87d4u: goto label_3f87d4;
        case 0x3f87d8u: goto label_3f87d8;
        case 0x3f87dcu: goto label_3f87dc;
        case 0x3f87e0u: goto label_3f87e0;
        case 0x3f87e4u: goto label_3f87e4;
        case 0x3f87e8u: goto label_3f87e8;
        case 0x3f87ecu: goto label_3f87ec;
        case 0x3f87f0u: goto label_3f87f0;
        case 0x3f87f4u: goto label_3f87f4;
        case 0x3f87f8u: goto label_3f87f8;
        case 0x3f87fcu: goto label_3f87fc;
        case 0x3f8800u: goto label_3f8800;
        case 0x3f8804u: goto label_3f8804;
        case 0x3f8808u: goto label_3f8808;
        case 0x3f880cu: goto label_3f880c;
        case 0x3f8810u: goto label_3f8810;
        case 0x3f8814u: goto label_3f8814;
        case 0x3f8818u: goto label_3f8818;
        case 0x3f881cu: goto label_3f881c;
        case 0x3f8820u: goto label_3f8820;
        case 0x3f8824u: goto label_3f8824;
        case 0x3f8828u: goto label_3f8828;
        case 0x3f882cu: goto label_3f882c;
        case 0x3f8830u: goto label_3f8830;
        case 0x3f8834u: goto label_3f8834;
        case 0x3f8838u: goto label_3f8838;
        case 0x3f883cu: goto label_3f883c;
        case 0x3f8840u: goto label_3f8840;
        case 0x3f8844u: goto label_3f8844;
        case 0x3f8848u: goto label_3f8848;
        case 0x3f884cu: goto label_3f884c;
        case 0x3f8850u: goto label_3f8850;
        case 0x3f8854u: goto label_3f8854;
        case 0x3f8858u: goto label_3f8858;
        case 0x3f885cu: goto label_3f885c;
        case 0x3f8860u: goto label_3f8860;
        case 0x3f8864u: goto label_3f8864;
        case 0x3f8868u: goto label_3f8868;
        case 0x3f886cu: goto label_3f886c;
        case 0x3f8870u: goto label_3f8870;
        case 0x3f8874u: goto label_3f8874;
        case 0x3f8878u: goto label_3f8878;
        case 0x3f887cu: goto label_3f887c;
        case 0x3f8880u: goto label_3f8880;
        case 0x3f8884u: goto label_3f8884;
        case 0x3f8888u: goto label_3f8888;
        case 0x3f888cu: goto label_3f888c;
        case 0x3f8890u: goto label_3f8890;
        case 0x3f8894u: goto label_3f8894;
        case 0x3f8898u: goto label_3f8898;
        case 0x3f889cu: goto label_3f889c;
        case 0x3f88a0u: goto label_3f88a0;
        case 0x3f88a4u: goto label_3f88a4;
        case 0x3f88a8u: goto label_3f88a8;
        case 0x3f88acu: goto label_3f88ac;
        case 0x3f88b0u: goto label_3f88b0;
        case 0x3f88b4u: goto label_3f88b4;
        case 0x3f88b8u: goto label_3f88b8;
        case 0x3f88bcu: goto label_3f88bc;
        case 0x3f88c0u: goto label_3f88c0;
        case 0x3f88c4u: goto label_3f88c4;
        case 0x3f88c8u: goto label_3f88c8;
        case 0x3f88ccu: goto label_3f88cc;
        case 0x3f88d0u: goto label_3f88d0;
        case 0x3f88d4u: goto label_3f88d4;
        case 0x3f88d8u: goto label_3f88d8;
        case 0x3f88dcu: goto label_3f88dc;
        case 0x3f88e0u: goto label_3f88e0;
        case 0x3f88e4u: goto label_3f88e4;
        case 0x3f88e8u: goto label_3f88e8;
        case 0x3f88ecu: goto label_3f88ec;
        case 0x3f88f0u: goto label_3f88f0;
        case 0x3f88f4u: goto label_3f88f4;
        case 0x3f88f8u: goto label_3f88f8;
        case 0x3f88fcu: goto label_3f88fc;
        case 0x3f8900u: goto label_3f8900;
        case 0x3f8904u: goto label_3f8904;
        case 0x3f8908u: goto label_3f8908;
        case 0x3f890cu: goto label_3f890c;
        case 0x3f8910u: goto label_3f8910;
        case 0x3f8914u: goto label_3f8914;
        case 0x3f8918u: goto label_3f8918;
        case 0x3f891cu: goto label_3f891c;
        case 0x3f8920u: goto label_3f8920;
        case 0x3f8924u: goto label_3f8924;
        case 0x3f8928u: goto label_3f8928;
        case 0x3f892cu: goto label_3f892c;
        case 0x3f8930u: goto label_3f8930;
        case 0x3f8934u: goto label_3f8934;
        case 0x3f8938u: goto label_3f8938;
        case 0x3f893cu: goto label_3f893c;
        case 0x3f8940u: goto label_3f8940;
        case 0x3f8944u: goto label_3f8944;
        case 0x3f8948u: goto label_3f8948;
        case 0x3f894cu: goto label_3f894c;
        case 0x3f8950u: goto label_3f8950;
        case 0x3f8954u: goto label_3f8954;
        case 0x3f8958u: goto label_3f8958;
        case 0x3f895cu: goto label_3f895c;
        case 0x3f8960u: goto label_3f8960;
        case 0x3f8964u: goto label_3f8964;
        case 0x3f8968u: goto label_3f8968;
        case 0x3f896cu: goto label_3f896c;
        case 0x3f8970u: goto label_3f8970;
        case 0x3f8974u: goto label_3f8974;
        case 0x3f8978u: goto label_3f8978;
        case 0x3f897cu: goto label_3f897c;
        case 0x3f8980u: goto label_3f8980;
        case 0x3f8984u: goto label_3f8984;
        case 0x3f8988u: goto label_3f8988;
        case 0x3f898cu: goto label_3f898c;
        case 0x3f8990u: goto label_3f8990;
        case 0x3f8994u: goto label_3f8994;
        case 0x3f8998u: goto label_3f8998;
        case 0x3f899cu: goto label_3f899c;
        case 0x3f89a0u: goto label_3f89a0;
        case 0x3f89a4u: goto label_3f89a4;
        case 0x3f89a8u: goto label_3f89a8;
        case 0x3f89acu: goto label_3f89ac;
        case 0x3f89b0u: goto label_3f89b0;
        case 0x3f89b4u: goto label_3f89b4;
        case 0x3f89b8u: goto label_3f89b8;
        case 0x3f89bcu: goto label_3f89bc;
        case 0x3f89c0u: goto label_3f89c0;
        case 0x3f89c4u: goto label_3f89c4;
        case 0x3f89c8u: goto label_3f89c8;
        case 0x3f89ccu: goto label_3f89cc;
        case 0x3f89d0u: goto label_3f89d0;
        case 0x3f89d4u: goto label_3f89d4;
        case 0x3f89d8u: goto label_3f89d8;
        case 0x3f89dcu: goto label_3f89dc;
        case 0x3f89e0u: goto label_3f89e0;
        case 0x3f89e4u: goto label_3f89e4;
        case 0x3f89e8u: goto label_3f89e8;
        case 0x3f89ecu: goto label_3f89ec;
        case 0x3f89f0u: goto label_3f89f0;
        case 0x3f89f4u: goto label_3f89f4;
        case 0x3f89f8u: goto label_3f89f8;
        case 0x3f89fcu: goto label_3f89fc;
        case 0x3f8a00u: goto label_3f8a00;
        case 0x3f8a04u: goto label_3f8a04;
        case 0x3f8a08u: goto label_3f8a08;
        case 0x3f8a0cu: goto label_3f8a0c;
        case 0x3f8a10u: goto label_3f8a10;
        case 0x3f8a14u: goto label_3f8a14;
        case 0x3f8a18u: goto label_3f8a18;
        case 0x3f8a1cu: goto label_3f8a1c;
        case 0x3f8a20u: goto label_3f8a20;
        case 0x3f8a24u: goto label_3f8a24;
        case 0x3f8a28u: goto label_3f8a28;
        case 0x3f8a2cu: goto label_3f8a2c;
        case 0x3f8a30u: goto label_3f8a30;
        case 0x3f8a34u: goto label_3f8a34;
        case 0x3f8a38u: goto label_3f8a38;
        case 0x3f8a3cu: goto label_3f8a3c;
        default: break;
    }

    ctx->pc = 0x3f8160u;

label_3f8160:
    // 0x3f8160: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3f8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3f8164:
    // 0x3f8164: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x3f8164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_3f8168:
    // 0x3f8168: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3f8168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3f816c:
    // 0x3f816c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3f816cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_3f8170:
    // 0x3f8170: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3f8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3f8174:
    // 0x3f8174: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3f8174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f8178:
    // 0x3f8178: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f8178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3f817c:
    // 0x3f817c: 0x3c07447a  lui         $a3, 0x447A
    ctx->pc = 0x3f817cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17530 << 16));
label_3f8180:
    // 0x3f8180: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f8180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f8184:
    // 0x3f8184: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f8184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f8188:
    // 0x3f8188: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f8188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f818c:
    // 0x3f818c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f818cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f8190:
    // 0x3f8190: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3f8190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_3f8194:
    // 0x3f8194: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f8194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f8198:
    // 0x3f8198: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3f8198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3f819c:
    // 0x3f819c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3f819cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f81a0:
    // 0x3f81a0: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x3f81a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3f81a4:
    // 0x3f81a4: 0xc4820de4  lwc1        $f2, 0xDE4($a0)
    ctx->pc = 0x3f81a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f81a8:
    // 0x3f81a8: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x3f81a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
label_3f81ac:
    // 0x3f81ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3f81acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3f81b0:
    // 0x3f81b0: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3f81b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3f81b4:
    // 0x3f81b4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3f81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_3f81b8:
    // 0x3f81b8: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x3f81b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f81bc:
    // 0x3f81bc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3f81bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_3f81c0:
    // 0x3f81c0: 0x0  nop
    ctx->pc = 0x3f81c0u;
    // NOP
label_3f81c4:
    // 0x3f81c4: 0x0  nop
    ctx->pc = 0x3f81c4u;
    // NOP
label_3f81c8:
    // 0x3f81c8: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x3f81c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_3f81cc:
    // 0x3f81cc: 0x50200215  beql        $at, $zero, . + 4 + (0x215 << 2)
label_3f81d0:
    if (ctx->pc == 0x3F81D0u) {
        ctx->pc = 0x3F81D0u;
            // 0x3f81d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x3F81D4u;
        goto label_3f81d4;
    }
    ctx->pc = 0x3F81CCu;
    {
        const bool branch_taken_0x3f81cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f81cc) {
            ctx->pc = 0x3F81D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F81CCu;
            // 0x3f81d0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8A24u;
            goto label_3f8a24;
        }
    }
    ctx->pc = 0x3F81D4u;
label_3f81d4:
    // 0x3f81d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3f81d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3f81d8:
    // 0x3f81d8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f81d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3f81dc:
    // 0x3f81dc: 0x24a5b630  addiu       $a1, $a1, -0x49D0
    ctx->pc = 0x3f81dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948400));
label_3f81e0:
    // 0x3f81e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3f81e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3f81e4:
    // 0x3f81e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3f81e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3f81e8:
    // 0x3f81e8: 0x600008  jr          $v1
label_3f81ec:
    if (ctx->pc == 0x3F81ECu) {
        ctx->pc = 0x3F81F0u;
        goto label_3f81f0;
    }
    ctx->pc = 0x3F81E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3F81F0u: goto label_3f81f0;
            case 0x3F828Cu: goto label_3f828c;
            case 0x3F82B0u: goto label_3f82b0;
            case 0x3F83E4u: goto label_3f83e4;
            case 0x3F8510u: goto label_3f8510;
            case 0x3F852Cu: goto label_3f852c;
            case 0x3F8638u: goto label_3f8638;
            case 0x3F8644u: goto label_3f8644;
            case 0x3F8650u: goto label_3f8650;
            case 0x3F8828u: goto label_3f8828;
            case 0x3F8A04u: goto label_3f8a04;
            case 0x3F8A14u: goto label_3f8a14;
            case 0x3F8A20u: goto label_3f8a20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3F81F0u;
label_3f81f0:
    // 0x3f81f0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3f81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3f81f4:
    // 0x3f81f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_3f81f8:
    if (ctx->pc == 0x3F81F8u) {
        ctx->pc = 0x3F81F8u;
            // 0x3f81f8: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->pc = 0x3F81FCu;
        goto label_3f81fc;
    }
    ctx->pc = 0x3F81F4u;
    {
        const bool branch_taken_0x3f81f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f81f4) {
            ctx->pc = 0x3F81F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F81F4u;
            // 0x3f81f8: 0x92240001  lbu         $a0, 0x1($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8208u;
            goto label_3f8208;
        }
    }
    ctx->pc = 0x3F81FCu;
label_3f81fc:
    // 0x3f81fc: 0xc10c9b4  jal         func_4326D0
label_3f8200:
    if (ctx->pc == 0x3F8200u) {
        ctx->pc = 0x3F8204u;
        goto label_3f8204;
    }
    ctx->pc = 0x3F81FCu;
    SET_GPR_U32(ctx, 31, 0x3F8204u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8204u; }
        if (ctx->pc != 0x3F8204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8204u; }
        if (ctx->pc != 0x3F8204u) { return; }
    }
    ctx->pc = 0x3F8204u;
label_3f8204:
    // 0x3f8204: 0x92240001  lbu         $a0, 0x1($s1)
    ctx->pc = 0x3f8204u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_3f8208:
    // 0x3f8208: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3f8208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f820c:
    // 0x3f820c: 0x14830204  bne         $a0, $v1, . + 4 + (0x204 << 2)
label_3f8210:
    if (ctx->pc == 0x3F8210u) {
        ctx->pc = 0x3F8214u;
        goto label_3f8214;
    }
    ctx->pc = 0x3F820Cu;
    {
        const bool branch_taken_0x3f820c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f820c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8214u;
label_3f8214:
    // 0x3f8214: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3f8214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8218:
    // 0x3f8218: 0x8ca30a68  lw          $v1, 0xA68($a1)
    ctx->pc = 0x3f8218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2664)));
label_3f821c:
    // 0x3f821c: 0x14600200  bnez        $v1, . + 4 + (0x200 << 2)
label_3f8220:
    if (ctx->pc == 0x3F8220u) {
        ctx->pc = 0x3F8224u;
        goto label_3f8224;
    }
    ctx->pc = 0x3F821Cu;
    {
        const bool branch_taken_0x3f821c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f821c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8224u;
label_3f8224:
    // 0x3f8224: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x3f8224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_3f8228:
    // 0x3f8228: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3f8228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3f822c:
    // 0x3f822c: 0x148301fc  bne         $a0, $v1, . + 4 + (0x1FC << 2)
label_3f8230:
    if (ctx->pc == 0x3F8230u) {
        ctx->pc = 0x3F8234u;
        goto label_3f8234;
    }
    ctx->pc = 0x3F822Cu;
    {
        const bool branch_taken_0x3f822c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f822c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8234u;
label_3f8234:
    // 0x3f8234: 0x8ca30da0  lw          $v1, 0xDA0($a1)
    ctx->pc = 0x3f8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_3f8238:
    // 0x3f8238: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3f8238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_3f823c:
    // 0x3f823c: 0xaca30da0  sw          $v1, 0xDA0($a1)
    ctx->pc = 0x3f823cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 3488), GPR_U32(ctx, 3));
label_3f8240:
    // 0x3f8240: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f8240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8244:
    // 0x3f8244: 0x8c630da4  lw          $v1, 0xDA4($v1)
    ctx->pc = 0x3f8244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3492)));
label_3f8248:
    // 0x3f8248: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x3f8248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
label_3f824c:
    // 0x3f824c: 0x146001f4  bnez        $v1, . + 4 + (0x1F4 << 2)
label_3f8250:
    if (ctx->pc == 0x3F8250u) {
        ctx->pc = 0x3F8254u;
        goto label_3f8254;
    }
    ctx->pc = 0x3F824Cu;
    {
        const bool branch_taken_0x3f824c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f824c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8254u;
label_3f8254:
    // 0x3f8254: 0x240407f0  addiu       $a0, $zero, 0x7F0
    ctx->pc = 0x3f8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
label_3f8258:
    // 0x3f8258: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3f8258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3f825c:
    // 0x3f825c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f825cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f8260:
    // 0x3f8260: 0xc040140  jal         func_100500
label_3f8264:
    if (ctx->pc == 0x3F8264u) {
        ctx->pc = 0x3F8264u;
            // 0x3f8264: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8268u;
        goto label_3f8268;
    }
    ctx->pc = 0x3F8260u;
    SET_GPR_U32(ctx, 31, 0x3F8268u);
    ctx->pc = 0x3F8264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8260u;
            // 0x3f8264: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8268u; }
        if (ctx->pc != 0x3F8268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8268u; }
        if (ctx->pc != 0x3F8268u) { return; }
    }
    ctx->pc = 0x3F8268u;
label_3f8268:
    // 0x3f8268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f826c:
    // 0x3f826c: 0x108001ec  beqz        $a0, . + 4 + (0x1EC << 2)
label_3f8270:
    if (ctx->pc == 0x3F8270u) {
        ctx->pc = 0x3F8274u;
        goto label_3f8274;
    }
    ctx->pc = 0x3F826Cu;
    {
        const bool branch_taken_0x3f826c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f826c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8274u;
label_3f8274:
    // 0x3f8274: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f8274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8278:
    // 0x3f8278: 0x90450d98  lbu         $a1, 0xD98($v0)
    ctx->pc = 0x3f8278u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3480)));
label_3f827c:
    // 0x3f827c: 0xc0f465c  jal         func_3D1970
label_3f8280:
    if (ctx->pc == 0x3F8280u) {
        ctx->pc = 0x3F8280u;
            // 0x3f8280: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x3F8284u;
        goto label_3f8284;
    }
    ctx->pc = 0x3F827Cu;
    SET_GPR_U32(ctx, 31, 0x3F8284u);
    ctx->pc = 0x3F8280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F827Cu;
            // 0x3f8280: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D1970u;
    if (runtime->hasFunction(0x3D1970u)) {
        auto targetFn = runtime->lookupFunction(0x3D1970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8284u; }
        if (ctx->pc != 0x3F8284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D1970_0x3d1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8284u; }
        if (ctx->pc != 0x3F8284u) { return; }
    }
    ctx->pc = 0x3F8284u;
label_3f8284:
    // 0x3f8284: 0x100001e6  b           . + 4 + (0x1E6 << 2)
label_3f8288:
    if (ctx->pc == 0x3F8288u) {
        ctx->pc = 0x3F828Cu;
        goto label_3f828c;
    }
    ctx->pc = 0x3F8284u;
    {
        const bool branch_taken_0x3f8284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8284) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F828Cu;
label_3f828c:
    // 0x3f828c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3f828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f8290:
    // 0x3f8290: 0x10c30003  beq         $a2, $v1, . + 4 + (0x3 << 2)
label_3f8294:
    if (ctx->pc == 0x3F8294u) {
        ctx->pc = 0x3F8298u;
        goto label_3f8298;
    }
    ctx->pc = 0x3F8290u;
    {
        const bool branch_taken_0x3f8290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8290) {
            ctx->pc = 0x3F82A0u;
            goto label_3f82a0;
        }
    }
    ctx->pc = 0x3F8298u;
label_3f8298:
    // 0x3f8298: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_3f829c:
    if (ctx->pc == 0x3F829Cu) {
        ctx->pc = 0x3F82A0u;
        goto label_3f82a0;
    }
    ctx->pc = 0x3F8298u;
    {
        const bool branch_taken_0x3f8298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8298) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F82A0u;
label_3f82a0:
    // 0x3f82a0: 0xc0ba650  jal         func_2E9940
label_3f82a4:
    if (ctx->pc == 0x3F82A4u) {
        ctx->pc = 0x3F82A8u;
        goto label_3f82a8;
    }
    ctx->pc = 0x3F82A0u;
    SET_GPR_U32(ctx, 31, 0x3F82A8u);
    ctx->pc = 0x2E9940u;
    if (runtime->hasFunction(0x2E9940u)) {
        auto targetFn = runtime->lookupFunction(0x2E9940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F82A8u; }
        if (ctx->pc != 0x3F82A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9940_0x2e9940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F82A8u; }
        if (ctx->pc != 0x3F82A8u) { return; }
    }
    ctx->pc = 0x3F82A8u;
label_3f82a8:
    // 0x3f82a8: 0x100001dd  b           . + 4 + (0x1DD << 2)
label_3f82ac:
    if (ctx->pc == 0x3F82ACu) {
        ctx->pc = 0x3F82B0u;
        goto label_3f82b0;
    }
    ctx->pc = 0x3F82A8u;
    {
        const bool branch_taken_0x3f82a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f82a8) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F82B0u;
label_3f82b0:
    // 0x3f82b0: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f82b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f82b4:
    // 0x3f82b4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f82b4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f82b8:
    // 0x3f82b8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f82bc:
    if (ctx->pc == 0x3F82BCu) {
        ctx->pc = 0x3F82BCu;
            // 0x3f82bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F82C0u;
        goto label_3f82c0;
    }
    ctx->pc = 0x3F82B8u;
    {
        const bool branch_taken_0x3f82b8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F82B8u;
            // 0x3f82bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f82b8) {
            ctx->pc = 0x3F82D0u;
            goto label_3f82d0;
        }
    }
    ctx->pc = 0x3F82C0u;
label_3f82c0:
    // 0x3f82c0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f82c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f82c4:
    // 0x3f82c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f82c8:
    if (ctx->pc == 0x3F82C8u) {
        ctx->pc = 0x3F82CCu;
        goto label_3f82cc;
    }
    ctx->pc = 0x3F82C4u;
    {
        const bool branch_taken_0x3f82c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f82c4) {
            ctx->pc = 0x3F82D0u;
            goto label_3f82d0;
        }
    }
    ctx->pc = 0x3F82CCu;
label_3f82cc:
    // 0x3f82cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f82ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f82d0:
    // 0x3f82d0: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f82d4:
    if (ctx->pc == 0x3F82D4u) {
        ctx->pc = 0x3F82D8u;
        goto label_3f82d8;
    }
    ctx->pc = 0x3F82D0u;
    {
        const bool branch_taken_0x3f82d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f82d0) {
            ctx->pc = 0x3F82ECu;
            goto label_3f82ec;
        }
    }
    ctx->pc = 0x3F82D8u;
label_3f82d8:
    // 0x3f82d8: 0xc075eb4  jal         func_1D7AD0
label_3f82dc:
    if (ctx->pc == 0x3F82DCu) {
        ctx->pc = 0x3F82E0u;
        goto label_3f82e0;
    }
    ctx->pc = 0x3F82D8u;
    SET_GPR_U32(ctx, 31, 0x3F82E0u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F82E0u; }
        if (ctx->pc != 0x3F82E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F82E0u; }
        if (ctx->pc != 0x3F82E0u) { return; }
    }
    ctx->pc = 0x3F82E0u;
label_3f82e0:
    // 0x3f82e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f82e4:
    if (ctx->pc == 0x3F82E4u) {
        ctx->pc = 0x3F82E8u;
        goto label_3f82e8;
    }
    ctx->pc = 0x3F82E0u;
    {
        const bool branch_taken_0x3f82e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f82e0) {
            ctx->pc = 0x3F82ECu;
            goto label_3f82ec;
        }
    }
    ctx->pc = 0x3F82E8u;
label_3f82e8:
    // 0x3f82e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f82e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f82ec:
    // 0x3f82ec: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_3f82f0:
    if (ctx->pc == 0x3F82F0u) {
        ctx->pc = 0x3F82F0u;
            // 0x3f82f0: 0x3c03c000  lui         $v1, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
        ctx->pc = 0x3F82F4u;
        goto label_3f82f4;
    }
    ctx->pc = 0x3F82ECu;
    {
        const bool branch_taken_0x3f82ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f82ec) {
            ctx->pc = 0x3F82F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F82ECu;
            // 0x3f82f0: 0x3c03c000  lui         $v1, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F830Cu;
            goto label_3f830c;
        }
    }
    ctx->pc = 0x3F82F4u;
label_3f82f4:
    // 0x3f82f4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f82f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f82f8:
    // 0x3f82f8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f82fc:
    // 0x3f82fc: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f8300:
    // 0x3f8300: 0x148301c7  bne         $a0, $v1, . + 4 + (0x1C7 << 2)
label_3f8304:
    if (ctx->pc == 0x3F8304u) {
        ctx->pc = 0x3F8308u;
        goto label_3f8308;
    }
    ctx->pc = 0x3F8300u;
    {
        const bool branch_taken_0x3f8300 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8300) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8308u;
label_3f8308:
    // 0x3f8308: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x3f8308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
label_3f830c:
    // 0x3f830c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f830cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f8310:
    // 0x3f8310: 0x0  nop
    ctx->pc = 0x3f8310u;
    // NOP
label_3f8314:
    // 0x3f8314: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3f8314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8318:
    // 0x3f8318: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_3f831c:
    if (ctx->pc == 0x3F831Cu) {
        ctx->pc = 0x3F8320u;
        goto label_3f8320;
    }
    ctx->pc = 0x3F8318u;
    {
        const bool branch_taken_0x3f8318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f8318) {
            ctx->pc = 0x3F8338u;
            goto label_3f8338;
        }
    }
    ctx->pc = 0x3F8320u;
label_3f8320:
    // 0x3f8320: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3f8320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3f8324:
    // 0x3f8324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f8324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f8328:
    // 0x3f8328: 0x0  nop
    ctx->pc = 0x3f8328u;
    // NOP
label_3f832c:
    // 0x3f832c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f832cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8330:
    // 0x3f8330: 0x450101bb  bc1t        . + 4 + (0x1BB << 2)
label_3f8334:
    if (ctx->pc == 0x3F8334u) {
        ctx->pc = 0x3F8338u;
        goto label_3f8338;
    }
    ctx->pc = 0x3F8330u;
    {
        const bool branch_taken_0x3f8330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f8330) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8338u;
label_3f8338:
    // 0x3f8338: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f8338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f833c:
    // 0x3f833c: 0x3c044040  lui         $a0, 0x4040
    ctx->pc = 0x3f833cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16448 << 16));
label_3f8340:
    // 0x3f8340: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f8340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f8344:
    // 0x3f8344: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8348:
    // 0x3f8348: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f8348u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f834c:
    // 0x3f834c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3f834cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f8350:
    // 0x3f8350: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f8350u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f8354:
    // 0x3f8354: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f8354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8358:
    // 0x3f8358: 0x450101b1  bc1t        . + 4 + (0x1B1 << 2)
label_3f835c:
    if (ctx->pc == 0x3F835Cu) {
        ctx->pc = 0x3F835Cu;
            // 0x3f835c: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->pc = 0x3F8360u;
        goto label_3f8360;
    }
    ctx->pc = 0x3F8358u;
    {
        const bool branch_taken_0x3f8358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8358u;
            // 0x3f835c: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8358) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8360u;
label_3f8360:
    // 0x3f8360: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f8360u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f8364:
    // 0x3f8364: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f8364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f8368:
    // 0x3f8368: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f8368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f836c:
    // 0x3f836c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3f836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3f8370:
    // 0x3f8370: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f8370u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f8374:
    // 0x3f8374: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f8374u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8378:
    // 0x3f8378: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3f8378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f837c:
    // 0x3f837c: 0x906411aa  lbu         $a0, 0x11AA($v1)
    ctx->pc = 0x3f837cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_3f8380:
    // 0x3f8380: 0x24660890  addiu       $a2, $v1, 0x890
    ctx->pc = 0x3f8380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_3f8384:
    // 0x3f8384: 0xc0bb404  jal         func_2ED010
label_3f8388:
    if (ctx->pc == 0x3F8388u) {
        ctx->pc = 0x3F8388u;
            // 0x3f8388: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->pc = 0x3F838Cu;
        goto label_3f838c;
    }
    ctx->pc = 0x3F8384u;
    SET_GPR_U32(ctx, 31, 0x3F838Cu);
    ctx->pc = 0x3F8388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8384u;
            // 0x3f8388: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F838Cu; }
        if (ctx->pc != 0x3F838Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F838Cu; }
        if (ctx->pc != 0x3F838Cu) { return; }
    }
    ctx->pc = 0x3F838Cu;
label_3f838c:
    // 0x3f838c: 0xc04ab66  jal         func_12AD98
label_3f8390:
    if (ctx->pc == 0x3F8390u) {
        ctx->pc = 0x3F8394u;
        goto label_3f8394;
    }
    ctx->pc = 0x3F838Cu;
    SET_GPR_U32(ctx, 31, 0x3F8394u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8394u; }
        if (ctx->pc != 0x3F8394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8394u; }
        if (ctx->pc != 0x3F8394u) { return; }
    }
    ctx->pc = 0x3F8394u;
label_3f8394:
    // 0x3f8394: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f8394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3f8398:
    // 0x3f8398: 0xc04ab66  jal         func_12AD98
label_3f839c:
    if (ctx->pc == 0x3F839Cu) {
        ctx->pc = 0x3F839Cu;
            // 0x3f839c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3F83A0u;
        goto label_3f83a0;
    }
    ctx->pc = 0x3F8398u;
    SET_GPR_U32(ctx, 31, 0x3F83A0u);
    ctx->pc = 0x3F839Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8398u;
            // 0x3f839c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F83A0u; }
        if (ctx->pc != 0x3F83A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F83A0u; }
        if (ctx->pc != 0x3F83A0u) { return; }
    }
    ctx->pc = 0x3F83A0u;
label_3f83a0:
    // 0x3f83a0: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x3f83a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_3f83a4:
    // 0x3f83a4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3f83a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3f83a8:
    // 0x3f83a8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x3f83a8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_3f83ac:
    // 0x3f83ac: 0x1810  mfhi        $v1
    ctx->pc = 0x3f83acu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3f83b0:
    // 0x3f83b0: 0x1460019b  bnez        $v1, . + 4 + (0x19B << 2)
label_3f83b4:
    if (ctx->pc == 0x3F83B4u) {
        ctx->pc = 0x3F83B8u;
        goto label_3f83b8;
    }
    ctx->pc = 0x3F83B0u;
    {
        const bool branch_taken_0x3f83b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f83b0) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F83B8u;
label_3f83b8:
    // 0x3f83b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f83bc:
    // 0x3f83bc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3f83c0:
    // 0x3f83c0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3f83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3f83c4:
    // 0x3f83c4: 0x2463b628  addiu       $v1, $v1, -0x49D8
    ctx->pc = 0x3f83c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948392));
label_3f83c8:
    // 0x3f83c8: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x3f83c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_3f83cc:
    // 0x3f83cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f83d0:
    // 0x3f83d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3f83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3f83d4:
    // 0x3f83d4: 0xc073234  jal         func_1CC8D0
label_3f83d8:
    if (ctx->pc == 0x3F83D8u) {
        ctx->pc = 0x3F83D8u;
            // 0x3f83d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3F83DCu;
        goto label_3f83dc;
    }
    ctx->pc = 0x3F83D4u;
    SET_GPR_U32(ctx, 31, 0x3F83DCu);
    ctx->pc = 0x3F83D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F83D4u;
            // 0x3f83d8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F83DCu; }
        if (ctx->pc != 0x3F83DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F83DCu; }
        if (ctx->pc != 0x3F83DCu) { return; }
    }
    ctx->pc = 0x3F83DCu;
label_3f83dc:
    // 0x3f83dc: 0x10000190  b           . + 4 + (0x190 << 2)
label_3f83e0:
    if (ctx->pc == 0x3F83E0u) {
        ctx->pc = 0x3F83E4u;
        goto label_3f83e4;
    }
    ctx->pc = 0x3F83DCu;
    {
        const bool branch_taken_0x3f83dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f83dc) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F83E4u;
label_3f83e4:
    // 0x3f83e4: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f83e8:
    // 0x3f83e8: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3f83e8u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f83ec:
    // 0x3f83ec: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f83f0:
    if (ctx->pc == 0x3F83F0u) {
        ctx->pc = 0x3F83F0u;
            // 0x3f83f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F83F4u;
        goto label_3f83f4;
    }
    ctx->pc = 0x3F83ECu;
    {
        const bool branch_taken_0x3f83ec = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F83F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F83ECu;
            // 0x3f83f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f83ec) {
            ctx->pc = 0x3F8404u;
            goto label_3f8404;
        }
    }
    ctx->pc = 0x3F83F4u;
label_3f83f4:
    // 0x3f83f4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f83f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f83f8:
    // 0x3f83f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f83fc:
    if (ctx->pc == 0x3F83FCu) {
        ctx->pc = 0x3F8400u;
        goto label_3f8400;
    }
    ctx->pc = 0x3F83F8u;
    {
        const bool branch_taken_0x3f83f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f83f8) {
            ctx->pc = 0x3F8404u;
            goto label_3f8404;
        }
    }
    ctx->pc = 0x3F8400u;
label_3f8400:
    // 0x3f8400: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f8400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f8404:
    // 0x3f8404: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f8408:
    if (ctx->pc == 0x3F8408u) {
        ctx->pc = 0x3F840Cu;
        goto label_3f840c;
    }
    ctx->pc = 0x3F8404u;
    {
        const bool branch_taken_0x3f8404 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8404) {
            ctx->pc = 0x3F8420u;
            goto label_3f8420;
        }
    }
    ctx->pc = 0x3F840Cu;
label_3f840c:
    // 0x3f840c: 0xc075eb4  jal         func_1D7AD0
label_3f8410:
    if (ctx->pc == 0x3F8410u) {
        ctx->pc = 0x3F8414u;
        goto label_3f8414;
    }
    ctx->pc = 0x3F840Cu;
    SET_GPR_U32(ctx, 31, 0x3F8414u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8414u; }
        if (ctx->pc != 0x3F8414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8414u; }
        if (ctx->pc != 0x3F8414u) { return; }
    }
    ctx->pc = 0x3F8414u;
label_3f8414:
    // 0x3f8414: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f8418:
    if (ctx->pc == 0x3F8418u) {
        ctx->pc = 0x3F841Cu;
        goto label_3f841c;
    }
    ctx->pc = 0x3F8414u;
    {
        const bool branch_taken_0x3f8414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8414) {
            ctx->pc = 0x3F8420u;
            goto label_3f8420;
        }
    }
    ctx->pc = 0x3F841Cu;
label_3f841c:
    // 0x3f841c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f841cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8420:
    // 0x3f8420: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_3f8424:
    if (ctx->pc == 0x3F8424u) {
        ctx->pc = 0x3F8424u;
            // 0x3f8424: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F8428u;
        goto label_3f8428;
    }
    ctx->pc = 0x3F8420u;
    {
        const bool branch_taken_0x3f8420 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8420) {
            ctx->pc = 0x3F8424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8420u;
            // 0x3f8424: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8440u;
            goto label_3f8440;
        }
    }
    ctx->pc = 0x3F8428u;
label_3f8428:
    // 0x3f8428: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f8428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f842c:
    // 0x3f842c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f8430:
    // 0x3f8430: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f8430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f8434:
    // 0x3f8434: 0x1483017a  bne         $a0, $v1, . + 4 + (0x17A << 2)
label_3f8438:
    if (ctx->pc == 0x3F8438u) {
        ctx->pc = 0x3F843Cu;
        goto label_3f843c;
    }
    ctx->pc = 0x3F8434u;
    {
        const bool branch_taken_0x3f8434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8434) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F843Cu;
label_3f843c:
    // 0x3f843c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f843cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8440:
    // 0x3f8440: 0x8c630da0  lw          $v1, 0xDA0($v1)
    ctx->pc = 0x3f8440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3f8444:
    // 0x3f8444: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3f8444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3f8448:
    // 0x3f8448: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_3f844c:
    if (ctx->pc == 0x3F844Cu) {
        ctx->pc = 0x3F844Cu;
            // 0x3f844c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x3F8450u;
        goto label_3f8450;
    }
    ctx->pc = 0x3F8448u;
    {
        const bool branch_taken_0x3f8448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8448) {
            ctx->pc = 0x3F844Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8448u;
            // 0x3f844c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F84F8u;
            goto label_3f84f8;
        }
    }
    ctx->pc = 0x3F8450u;
label_3f8450:
    // 0x3f8450: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f8450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f8454:
    // 0x3f8454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f8454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f8458:
    // 0x3f8458: 0x0  nop
    ctx->pc = 0x3f8458u;
    // NOP
label_3f845c:
    // 0x3f845c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f845cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8460:
    // 0x3f8460: 0x4501016f  bc1t        . + 4 + (0x16F << 2)
label_3f8464:
    if (ctx->pc == 0x3F8464u) {
        ctx->pc = 0x3F8468u;
        goto label_3f8468;
    }
    ctx->pc = 0x3F8460u;
    {
        const bool branch_taken_0x3f8460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f8460) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8468u;
label_3f8468:
    // 0x3f8468: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f8468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f846c:
    // 0x3f846c: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x3f846cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
label_3f8470:
    // 0x3f8470: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f8470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f8474:
    // 0x3f8474: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f8474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8478:
    // 0x3f8478: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f8478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f847c:
    // 0x3f847c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3f847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f8480:
    // 0x3f8480: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f8480u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f8484:
    // 0x3f8484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f8484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8488:
    // 0x3f8488: 0x45010165  bc1t        . + 4 + (0x165 << 2)
label_3f848c:
    if (ctx->pc == 0x3F848Cu) {
        ctx->pc = 0x3F848Cu;
            // 0x3f848c: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->pc = 0x3F8490u;
        goto label_3f8490;
    }
    ctx->pc = 0x3F8488u;
    {
        const bool branch_taken_0x3f8488 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8488u;
            // 0x3f848c: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8488) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8490u;
label_3f8490:
    // 0x3f8490: 0x3c0342a4  lui         $v1, 0x42A4
    ctx->pc = 0x3f8490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17060 << 16));
label_3f8494:
    // 0x3f8494: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f8494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f8498:
    // 0x3f8498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f8498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f849c:
    // 0x3f849c: 0x0  nop
    ctx->pc = 0x3f849cu;
    // NOP
label_3f84a0:
    // 0x3f84a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x3f84a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f84a4:
    // 0x3f84a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f84a8:
    if (ctx->pc == 0x3F84A8u) {
        ctx->pc = 0x3F84A8u;
            // 0x3f84a8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x3F84ACu;
        goto label_3f84ac;
    }
    ctx->pc = 0x3F84A4u;
    {
        const bool branch_taken_0x3f84a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F84A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F84A4u;
            // 0x3f84a8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f84a4) {
            ctx->pc = 0x3F84B0u;
            goto label_3f84b0;
        }
    }
    ctx->pc = 0x3F84ACu;
label_3f84ac:
    // 0x3f84ac: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x3f84acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_3f84b0:
    // 0x3f84b0: 0x5600000b  bnel        $s0, $zero, . + 4 + (0xB << 2)
label_3f84b4:
    if (ctx->pc == 0x3F84B4u) {
        ctx->pc = 0x3F84B4u;
            // 0x3f84b4: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x3F84B8u;
        goto label_3f84b8;
    }
    ctx->pc = 0x3F84B0u;
    {
        const bool branch_taken_0x3f84b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f84b0) {
            ctx->pc = 0x3F84B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F84B0u;
            // 0x3f84b4: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F84E0u;
            goto label_3f84e0;
        }
    }
    ctx->pc = 0x3F84B8u;
label_3f84b8:
    // 0x3f84b8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f84b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f84bc:
    // 0x3f84bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f84c0:
    // 0x3f84c0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f84c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f84c4:
    // 0x3f84c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f84c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f84c8:
    // 0x3f84c8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3f84c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f84cc:
    // 0x3f84cc: 0x906411aa  lbu         $a0, 0x11AA($v1)
    ctx->pc = 0x3f84ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_3f84d0:
    // 0x3f84d0: 0x24660890  addiu       $a2, $v1, 0x890
    ctx->pc = 0x3f84d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_3f84d4:
    // 0x3f84d4: 0xc0bb404  jal         func_2ED010
label_3f84d8:
    if (ctx->pc == 0x3F84D8u) {
        ctx->pc = 0x3F84D8u;
            // 0x3f84d8: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->pc = 0x3F84DCu;
        goto label_3f84dc;
    }
    ctx->pc = 0x3F84D4u;
    SET_GPR_U32(ctx, 31, 0x3F84DCu);
    ctx->pc = 0x3F84D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F84D4u;
            // 0x3f84d8: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F84DCu; }
        if (ctx->pc != 0x3F84DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F84DCu; }
        if (ctx->pc != 0x3F84DCu) { return; }
    }
    ctx->pc = 0x3F84DCu;
label_3f84dc:
    // 0x3f84dc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3f84dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3f84e0:
    // 0x3f84e0: 0x1080014f  beqz        $a0, . + 4 + (0x14F << 2)
label_3f84e4:
    if (ctx->pc == 0x3F84E4u) {
        ctx->pc = 0x3F84E8u;
        goto label_3f84e8;
    }
    ctx->pc = 0x3F84E0u;
    {
        const bool branch_taken_0x3f84e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f84e0) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F84E8u;
label_3f84e8:
    // 0x3f84e8: 0xc10c9d8  jal         func_432760
label_3f84ec:
    if (ctx->pc == 0x3F84ECu) {
        ctx->pc = 0x3F84F0u;
        goto label_3f84f0;
    }
    ctx->pc = 0x3F84E8u;
    SET_GPR_U32(ctx, 31, 0x3F84F0u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F84F0u; }
        if (ctx->pc != 0x3F84F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F84F0u; }
        if (ctx->pc != 0x3F84F0u) { return; }
    }
    ctx->pc = 0x3F84F0u;
label_3f84f0:
    // 0x3f84f0: 0x1000014b  b           . + 4 + (0x14B << 2)
label_3f84f4:
    if (ctx->pc == 0x3F84F4u) {
        ctx->pc = 0x3F84F8u;
        goto label_3f84f8;
    }
    ctx->pc = 0x3F84F0u;
    {
        const bool branch_taken_0x3f84f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f84f0) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F84F8u;
label_3f84f8:
    // 0x3f84f8: 0x10800149  beqz        $a0, . + 4 + (0x149 << 2)
label_3f84fc:
    if (ctx->pc == 0x3F84FCu) {
        ctx->pc = 0x3F8500u;
        goto label_3f8500;
    }
    ctx->pc = 0x3F84F8u;
    {
        const bool branch_taken_0x3f84f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f84f8) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8500u;
label_3f8500:
    // 0x3f8500: 0xc10c9b4  jal         func_4326D0
label_3f8504:
    if (ctx->pc == 0x3F8504u) {
        ctx->pc = 0x3F8508u;
        goto label_3f8508;
    }
    ctx->pc = 0x3F8500u;
    SET_GPR_U32(ctx, 31, 0x3F8508u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8508u; }
        if (ctx->pc != 0x3F8508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8508u; }
        if (ctx->pc != 0x3F8508u) { return; }
    }
    ctx->pc = 0x3F8508u;
label_3f8508:
    // 0x3f8508: 0x10000145  b           . + 4 + (0x145 << 2)
label_3f850c:
    if (ctx->pc == 0x3F850Cu) {
        ctx->pc = 0x3F8510u;
        goto label_3f8510;
    }
    ctx->pc = 0x3F8508u;
    {
        const bool branch_taken_0x3f8508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8508) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8510u;
label_3f8510:
    // 0x3f8510: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f8510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f8514:
    // 0x3f8514: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f8514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3f8518:
    // 0x3f8518: 0x24070038  addiu       $a3, $zero, 0x38
    ctx->pc = 0x3f8518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_3f851c:
    // 0x3f851c: 0xc0762b4  jal         func_1D8AD0
label_3f8520:
    if (ctx->pc == 0x3F8520u) {
        ctx->pc = 0x3F8520u;
            // 0x3f8520: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8524u;
        goto label_3f8524;
    }
    ctx->pc = 0x3F851Cu;
    SET_GPR_U32(ctx, 31, 0x3F8524u);
    ctx->pc = 0x3F8520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F851Cu;
            // 0x3f8520: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8AD0u;
    if (runtime->hasFunction(0x1D8AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8524u; }
        if (ctx->pc != 0x3F8524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8AD0_0x1d8ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8524u; }
        if (ctx->pc != 0x3F8524u) { return; }
    }
    ctx->pc = 0x3F8524u;
label_3f8524:
    // 0x3f8524: 0x1000013e  b           . + 4 + (0x13E << 2)
label_3f8528:
    if (ctx->pc == 0x3F8528u) {
        ctx->pc = 0x3F852Cu;
        goto label_3f852c;
    }
    ctx->pc = 0x3F8524u;
    {
        const bool branch_taken_0x3f8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8524) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F852Cu;
label_3f852c:
    // 0x3f852c: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f8530:
    // 0x3f8530: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f8530u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f8534:
    // 0x3f8534: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f8538:
    if (ctx->pc == 0x3F8538u) {
        ctx->pc = 0x3F8538u;
            // 0x3f8538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F853Cu;
        goto label_3f853c;
    }
    ctx->pc = 0x3F8534u;
    {
        const bool branch_taken_0x3f8534 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F8538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8534u;
            // 0x3f8538: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8534) {
            ctx->pc = 0x3F854Cu;
            goto label_3f854c;
        }
    }
    ctx->pc = 0x3F853Cu;
label_3f853c:
    // 0x3f853c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f853cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f8540:
    // 0x3f8540: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f8544:
    if (ctx->pc == 0x3F8544u) {
        ctx->pc = 0x3F8548u;
        goto label_3f8548;
    }
    ctx->pc = 0x3F8540u;
    {
        const bool branch_taken_0x3f8540 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8540) {
            ctx->pc = 0x3F854Cu;
            goto label_3f854c;
        }
    }
    ctx->pc = 0x3F8548u;
label_3f8548:
    // 0x3f8548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f8548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f854c:
    // 0x3f854c: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f8550:
    if (ctx->pc == 0x3F8550u) {
        ctx->pc = 0x3F8554u;
        goto label_3f8554;
    }
    ctx->pc = 0x3F854Cu;
    {
        const bool branch_taken_0x3f854c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f854c) {
            ctx->pc = 0x3F8568u;
            goto label_3f8568;
        }
    }
    ctx->pc = 0x3F8554u;
label_3f8554:
    // 0x3f8554: 0xc075eb4  jal         func_1D7AD0
label_3f8558:
    if (ctx->pc == 0x3F8558u) {
        ctx->pc = 0x3F855Cu;
        goto label_3f855c;
    }
    ctx->pc = 0x3F8554u;
    SET_GPR_U32(ctx, 31, 0x3F855Cu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F855Cu; }
        if (ctx->pc != 0x3F855Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F855Cu; }
        if (ctx->pc != 0x3F855Cu) { return; }
    }
    ctx->pc = 0x3F855Cu;
label_3f855c:
    // 0x3f855c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f8560:
    if (ctx->pc == 0x3F8560u) {
        ctx->pc = 0x3F8564u;
        goto label_3f8564;
    }
    ctx->pc = 0x3F855Cu;
    {
        const bool branch_taken_0x3f855c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f855c) {
            ctx->pc = 0x3F8568u;
            goto label_3f8568;
        }
    }
    ctx->pc = 0x3F8564u;
label_3f8564:
    // 0x3f8564: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f8564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8568:
    // 0x3f8568: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_3f856c:
    if (ctx->pc == 0x3F856Cu) {
        ctx->pc = 0x3F856Cu;
            // 0x3f856c: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F8570u;
        goto label_3f8570;
    }
    ctx->pc = 0x3F8568u;
    {
        const bool branch_taken_0x3f8568 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8568) {
            ctx->pc = 0x3F856Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8568u;
            // 0x3f856c: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8588u;
            goto label_3f8588;
        }
    }
    ctx->pc = 0x3F8570u;
label_3f8570:
    // 0x3f8570: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f8570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8574:
    // 0x3f8574: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f8574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f8578:
    // 0x3f8578: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f8578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f857c:
    // 0x3f857c: 0x14830128  bne         $a0, $v1, . + 4 + (0x128 << 2)
label_3f8580:
    if (ctx->pc == 0x3F8580u) {
        ctx->pc = 0x3F8584u;
        goto label_3f8584;
    }
    ctx->pc = 0x3F857Cu;
    {
        const bool branch_taken_0x3f857c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f857c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8584u;
label_3f8584:
    // 0x3f8584: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f8584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8588:
    // 0x3f8588: 0x8c630da0  lw          $v1, 0xDA0($v1)
    ctx->pc = 0x3f8588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3f858c:
    // 0x3f858c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3f858cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3f8590:
    // 0x3f8590: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
label_3f8594:
    if (ctx->pc == 0x3F8594u) {
        ctx->pc = 0x3F8594u;
            // 0x3f8594: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x3F8598u;
        goto label_3f8598;
    }
    ctx->pc = 0x3F8590u;
    {
        const bool branch_taken_0x3f8590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8590) {
            ctx->pc = 0x3F8594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8590u;
            // 0x3f8594: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8620u;
            goto label_3f8620;
        }
    }
    ctx->pc = 0x3F8598u;
label_3f8598:
    // 0x3f8598: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f8598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f859c:
    // 0x3f859c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f859cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f85a0:
    // 0x3f85a0: 0x0  nop
    ctx->pc = 0x3f85a0u;
    // NOP
label_3f85a4:
    // 0x3f85a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3f85a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f85a8:
    // 0x3f85a8: 0x4501011d  bc1t        . + 4 + (0x11D << 2)
label_3f85ac:
    if (ctx->pc == 0x3F85ACu) {
        ctx->pc = 0x3F85B0u;
        goto label_3f85b0;
    }
    ctx->pc = 0x3F85A8u;
    {
        const bool branch_taken_0x3f85a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f85a8) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F85B0u;
label_3f85b0:
    // 0x3f85b0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f85b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f85b4:
    // 0x3f85b4: 0x3c0440c0  lui         $a0, 0x40C0
    ctx->pc = 0x3f85b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16576 << 16));
label_3f85b8:
    // 0x3f85b8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f85bc:
    // 0x3f85bc: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f85bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f85c0:
    // 0x3f85c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f85c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f85c4:
    // 0x3f85c4: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3f85c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f85c8:
    // 0x3f85c8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f85c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f85cc:
    // 0x3f85cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f85ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f85d0:
    // 0x3f85d0: 0x45010113  bc1t        . + 4 + (0x113 << 2)
label_3f85d4:
    if (ctx->pc == 0x3F85D4u) {
        ctx->pc = 0x3F85D4u;
            // 0x3f85d4: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->pc = 0x3F85D8u;
        goto label_3f85d8;
    }
    ctx->pc = 0x3F85D0u;
    {
        const bool branch_taken_0x3f85d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F85D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F85D0u;
            // 0x3f85d4: 0xe6410018  swc1        $f1, 0x18($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f85d0) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F85D8u;
label_3f85d8:
    // 0x3f85d8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f85d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f85dc:
    // 0x3f85dc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f85dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f85e0:
    // 0x3f85e0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f85e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f85e4:
    // 0x3f85e4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x3f85e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_3f85e8:
    // 0x3f85e8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f85e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f85ec:
    // 0x3f85ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f85ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f85f0:
    // 0x3f85f0: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3f85f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f85f4:
    // 0x3f85f4: 0x906411aa  lbu         $a0, 0x11AA($v1)
    ctx->pc = 0x3f85f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_3f85f8:
    // 0x3f85f8: 0x24660890  addiu       $a2, $v1, 0x890
    ctx->pc = 0x3f85f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_3f85fc:
    // 0x3f85fc: 0xc0bb404  jal         func_2ED010
label_3f8600:
    if (ctx->pc == 0x3F8600u) {
        ctx->pc = 0x3F8600u;
            // 0x3f8600: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->pc = 0x3F8604u;
        goto label_3f8604;
    }
    ctx->pc = 0x3F85FCu;
    SET_GPR_U32(ctx, 31, 0x3F8604u);
    ctx->pc = 0x3F8600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F85FCu;
            // 0x3f8600: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8604u; }
        if (ctx->pc != 0x3F8604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8604u; }
        if (ctx->pc != 0x3F8604u) { return; }
    }
    ctx->pc = 0x3F8604u;
label_3f8604:
    // 0x3f8604: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3f8604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3f8608:
    // 0x3f8608: 0x10800105  beqz        $a0, . + 4 + (0x105 << 2)
label_3f860c:
    if (ctx->pc == 0x3F860Cu) {
        ctx->pc = 0x3F8610u;
        goto label_3f8610;
    }
    ctx->pc = 0x3F8608u;
    {
        const bool branch_taken_0x3f8608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8608) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8610u;
label_3f8610:
    // 0x3f8610: 0xc10c9d8  jal         func_432760
label_3f8614:
    if (ctx->pc == 0x3F8614u) {
        ctx->pc = 0x3F8618u;
        goto label_3f8618;
    }
    ctx->pc = 0x3F8610u;
    SET_GPR_U32(ctx, 31, 0x3F8618u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8618u; }
        if (ctx->pc != 0x3F8618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8618u; }
        if (ctx->pc != 0x3F8618u) { return; }
    }
    ctx->pc = 0x3F8618u;
label_3f8618:
    // 0x3f8618: 0x10000101  b           . + 4 + (0x101 << 2)
label_3f861c:
    if (ctx->pc == 0x3F861Cu) {
        ctx->pc = 0x3F8620u;
        goto label_3f8620;
    }
    ctx->pc = 0x3F8618u;
    {
        const bool branch_taken_0x3f8618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8618) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8620u;
label_3f8620:
    // 0x3f8620: 0x108000ff  beqz        $a0, . + 4 + (0xFF << 2)
label_3f8624:
    if (ctx->pc == 0x3F8624u) {
        ctx->pc = 0x3F8628u;
        goto label_3f8628;
    }
    ctx->pc = 0x3F8620u;
    {
        const bool branch_taken_0x3f8620 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8620) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8628u;
label_3f8628:
    // 0x3f8628: 0xc10c9b4  jal         func_4326D0
label_3f862c:
    if (ctx->pc == 0x3F862Cu) {
        ctx->pc = 0x3F8630u;
        goto label_3f8630;
    }
    ctx->pc = 0x3F8628u;
    SET_GPR_U32(ctx, 31, 0x3F8630u);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8630u; }
        if (ctx->pc != 0x3F8630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8630u; }
        if (ctx->pc != 0x3F8630u) { return; }
    }
    ctx->pc = 0x3F8630u;
label_3f8630:
    // 0x3f8630: 0x100000fb  b           . + 4 + (0xFB << 2)
label_3f8634:
    if (ctx->pc == 0x3F8634u) {
        ctx->pc = 0x3F8638u;
        goto label_3f8638;
    }
    ctx->pc = 0x3F8630u;
    {
        const bool branch_taken_0x3f8630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8630) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8638u;
label_3f8638:
    // 0x3f8638: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f8638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f863c:
    // 0x3f863c: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f8640:
    if (ctx->pc == 0x3F8640u) {
        ctx->pc = 0x3F8640u;
            // 0x3f8640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8644u;
        goto label_3f8644;
    }
    ctx->pc = 0x3F863Cu;
    {
        const bool branch_taken_0x3f863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F863Cu;
            // 0x3f8640: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f863c) {
            ctx->pc = 0x3F8658u;
            goto label_3f8658;
        }
    }
    ctx->pc = 0x3F8644u;
label_3f8644:
    // 0x3f8644: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3f8644u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f8648:
    // 0x3f8648: 0x10000003  b           . + 4 + (0x3 << 2)
label_3f864c:
    if (ctx->pc == 0x3F864Cu) {
        ctx->pc = 0x3F864Cu;
            // 0x3f864c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8650u;
        goto label_3f8650;
    }
    ctx->pc = 0x3F8648u;
    {
        const bool branch_taken_0x3f8648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F864Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8648u;
            // 0x3f864c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8648) {
            ctx->pc = 0x3F8658u;
            goto label_3f8658;
        }
    }
    ctx->pc = 0x3F8650u;
label_3f8650:
    // 0x3f8650: 0x64110002  daddiu      $s1, $zero, 0x2
    ctx->pc = 0x3f8650u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_3f8654:
    // 0x3f8654: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f8654u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f8658:
    // 0x3f8658: 0x50c00003  beql        $a2, $zero, . + 4 + (0x3 << 2)
label_3f865c:
    if (ctx->pc == 0x3F865Cu) {
        ctx->pc = 0x3F865Cu;
            // 0x3f865c: 0x8c830a68  lw          $v1, 0xA68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
        ctx->pc = 0x3F8660u;
        goto label_3f8660;
    }
    ctx->pc = 0x3F8658u;
    {
        const bool branch_taken_0x3f8658 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8658) {
            ctx->pc = 0x3F865Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8658u;
            // 0x3f865c: 0x8c830a68  lw          $v1, 0xA68($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8668u;
            goto label_3f8668;
        }
    }
    ctx->pc = 0x3F8660u;
label_3f8660:
    // 0x3f8660: 0x100000ef  b           . + 4 + (0xEF << 2)
label_3f8664:
    if (ctx->pc == 0x3F8664u) {
        ctx->pc = 0x3F8668u;
        goto label_3f8668;
    }
    ctx->pc = 0x3F8660u;
    {
        const bool branch_taken_0x3f8660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8660) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8668u;
label_3f8668:
    // 0x3f8668: 0x146000ed  bnez        $v1, . + 4 + (0xED << 2)
label_3f866c:
    if (ctx->pc == 0x3F866Cu) {
        ctx->pc = 0x3F8670u;
        goto label_3f8670;
    }
    ctx->pc = 0x3F8668u;
    {
        const bool branch_taken_0x3f8668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8668) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8670u;
label_3f8670:
    // 0x3f8670: 0x8c850da0  lw          $a1, 0xDA0($a0)
    ctx->pc = 0x3f8670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3f8674:
    // 0x3f8674: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3f8674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3f8678:
    // 0x3f8678: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x3f8678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_3f867c:
    // 0x3f867c: 0xac850da0  sw          $a1, 0xDA0($a0)
    ctx->pc = 0x3f867cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 5));
label_3f8680:
    // 0x3f8680: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f8680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8684:
    // 0x3f8684: 0x8c850db0  lw          $a1, 0xDB0($a0)
    ctx->pc = 0x3f8684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3f8688:
    // 0x3f8688: 0x50a30005  beql        $a1, $v1, . + 4 + (0x5 << 2)
label_3f868c:
    if (ctx->pc == 0x3F868Cu) {
        ctx->pc = 0x3F868Cu;
            // 0x3f868c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F8690u;
        goto label_3f8690;
    }
    ctx->pc = 0x3F8688u;
    {
        const bool branch_taken_0x3f8688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f8688) {
            ctx->pc = 0x3F868Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8688u;
            // 0x3f868c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F86A0u;
            goto label_3f86a0;
        }
    }
    ctx->pc = 0x3F8690u;
label_3f8690:
    // 0x3f8690: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3f8690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f8694:
    // 0x3f8694: 0x14a300e2  bne         $a1, $v1, . + 4 + (0xE2 << 2)
label_3f8698:
    if (ctx->pc == 0x3F8698u) {
        ctx->pc = 0x3F869Cu;
        goto label_3f869c;
    }
    ctx->pc = 0x3F8694u;
    {
        const bool branch_taken_0x3f8694 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8694) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F869Cu;
label_3f869c:
    // 0x3f869c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f869cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f86a0:
    // 0x3f86a0: 0xc076218  jal         func_1D8860
label_3f86a4:
    if (ctx->pc == 0x3F86A4u) {
        ctx->pc = 0x3F86A8u;
        goto label_3f86a8;
    }
    ctx->pc = 0x3F86A0u;
    SET_GPR_U32(ctx, 31, 0x3F86A8u);
    ctx->pc = 0x1D8860u;
    if (runtime->hasFunction(0x1D8860u)) {
        auto targetFn = runtime->lookupFunction(0x1D8860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86A8u; }
        if (ctx->pc != 0x3F86A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8860_0x1d8860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86A8u; }
        if (ctx->pc != 0x3F86A8u) { return; }
    }
    ctx->pc = 0x3F86A8u;
label_3f86a8:
    // 0x3f86a8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_3f86ac:
    if (ctx->pc == 0x3F86ACu) {
        ctx->pc = 0x3F86ACu;
            // 0x3f86ac: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F86B0u;
        goto label_3f86b0;
    }
    ctx->pc = 0x3F86A8u;
    {
        const bool branch_taken_0x3f86a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f86a8) {
            ctx->pc = 0x3F86ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F86A8u;
            // 0x3f86ac: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8714u;
            goto label_3f8714;
        }
    }
    ctx->pc = 0x3F86B0u;
label_3f86b0:
    // 0x3f86b0: 0xc040180  jal         func_100600
label_3f86b4:
    if (ctx->pc == 0x3F86B4u) {
        ctx->pc = 0x3F86B4u;
            // 0x3f86b4: 0x24040d00  addiu       $a0, $zero, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
        ctx->pc = 0x3F86B8u;
        goto label_3f86b8;
    }
    ctx->pc = 0x3F86B0u;
    SET_GPR_U32(ctx, 31, 0x3F86B8u);
    ctx->pc = 0x3F86B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F86B0u;
            // 0x3f86b4: 0x24040d00  addiu       $a0, $zero, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86B8u; }
        if (ctx->pc != 0x3F86B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86B8u; }
        if (ctx->pc != 0x3F86B8u) { return; }
    }
    ctx->pc = 0x3F86B8u;
label_3f86b8:
    // 0x3f86b8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3f86bc:
    if (ctx->pc == 0x3F86BCu) {
        ctx->pc = 0x3F86BCu;
            // 0x3f86bc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F86C0u;
        goto label_3f86c0;
    }
    ctx->pc = 0x3F86B8u;
    {
        const bool branch_taken_0x3f86b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f86b8) {
            ctx->pc = 0x3F86BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F86B8u;
            // 0x3f86bc: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F86E0u;
            goto label_3f86e0;
        }
    }
    ctx->pc = 0x3F86C0u;
label_3f86c0:
    // 0x3f86c0: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f86c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f86c4:
    // 0x3f86c4: 0x322700ff  andi        $a3, $s1, 0xFF
    ctx->pc = 0x3f86c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3f86c8:
    // 0x3f86c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x3f86c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f86cc:
    // 0x3f86cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f86ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f86d0:
    // 0x3f86d0: 0x90650d98  lbu         $a1, 0xD98($v1)
    ctx->pc = 0x3f86d0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3480)));
label_3f86d4:
    // 0x3f86d4: 0xc0ed8f8  jal         func_3B63E0
label_3f86d8:
    if (ctx->pc == 0x3F86D8u) {
        ctx->pc = 0x3F86D8u;
            // 0x3f86d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F86DCu;
        goto label_3f86dc;
    }
    ctx->pc = 0x3F86D4u;
    SET_GPR_U32(ctx, 31, 0x3F86DCu);
    ctx->pc = 0x3F86D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F86D4u;
            // 0x3f86d8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (runtime->hasFunction(0x3B63E0u)) {
        auto targetFn = runtime->lookupFunction(0x3B63E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86DCu; }
        if (ctx->pc != 0x3F86DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B63E0_0x3b63e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86DCu; }
        if (ctx->pc != 0x3F86DCu) { return; }
    }
    ctx->pc = 0x3F86DCu;
label_3f86dc:
    // 0x3f86dc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f86e0:
    // 0x3f86e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f86e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f86e4:
    // 0x3f86e4: 0xc076234  jal         func_1D88D0
label_3f86e8:
    if (ctx->pc == 0x3F86E8u) {
        ctx->pc = 0x3F86E8u;
            // 0x3f86e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F86ECu;
        goto label_3f86ec;
    }
    ctx->pc = 0x3F86E4u;
    SET_GPR_U32(ctx, 31, 0x3F86ECu);
    ctx->pc = 0x3F86E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F86E4u;
            // 0x3f86e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D88D0u;
    if (runtime->hasFunction(0x1D88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86ECu; }
        if (ctx->pc != 0x3F86ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D88D0_0x1d88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86ECu; }
        if (ctx->pc != 0x3F86ECu) { return; }
    }
    ctx->pc = 0x3F86ECu;
label_3f86ec:
    // 0x3f86ec: 0xc040180  jal         func_100600
label_3f86f0:
    if (ctx->pc == 0x3F86F0u) {
        ctx->pc = 0x3F86F0u;
            // 0x3f86f0: 0x240407f0  addiu       $a0, $zero, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
        ctx->pc = 0x3F86F4u;
        goto label_3f86f4;
    }
    ctx->pc = 0x3F86ECu;
    SET_GPR_U32(ctx, 31, 0x3F86F4u);
    ctx->pc = 0x3F86F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F86ECu;
            // 0x3f86f0: 0x240407f0  addiu       $a0, $zero, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86F4u; }
        if (ctx->pc != 0x3F86F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F86F4u; }
        if (ctx->pc != 0x3F86F4u) { return; }
    }
    ctx->pc = 0x3F86F4u;
label_3f86f4:
    // 0x3f86f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f86f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f86f8:
    // 0x3f86f8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3f86fc:
    if (ctx->pc == 0x3F86FCu) {
        ctx->pc = 0x3F8700u;
        goto label_3f8700;
    }
    ctx->pc = 0x3F86F8u;
    {
        const bool branch_taken_0x3f86f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f86f8) {
            ctx->pc = 0x3F8710u;
            goto label_3f8710;
        }
    }
    ctx->pc = 0x3F8700u;
label_3f8700:
    // 0x3f8700: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f8700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8704:
    // 0x3f8704: 0x90450d98  lbu         $a1, 0xD98($v0)
    ctx->pc = 0x3f8704u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3480)));
label_3f8708:
    // 0x3f8708: 0xc0f465c  jal         func_3D1970
label_3f870c:
    if (ctx->pc == 0x3F870Cu) {
        ctx->pc = 0x3F870Cu;
            // 0x3f870c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8710u;
        goto label_3f8710;
    }
    ctx->pc = 0x3F8708u;
    SET_GPR_U32(ctx, 31, 0x3F8710u);
    ctx->pc = 0x3F870Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8708u;
            // 0x3f870c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D1970u;
    if (runtime->hasFunction(0x3D1970u)) {
        auto targetFn = runtime->lookupFunction(0x3D1970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8710u; }
        if (ctx->pc != 0x3F8710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D1970_0x3d1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8710u; }
        if (ctx->pc != 0x3F8710u) { return; }
    }
    ctx->pc = 0x3F8710u;
label_3f8710:
    // 0x3f8710: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f8710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8714:
    // 0x3f8714: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f8714u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f8718:
    // 0x3f8718: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f8718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f871c:
    // 0x3f871c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f8720:
    if (ctx->pc == 0x3F8720u) {
        ctx->pc = 0x3F8720u;
            // 0x3f8720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8724u;
        goto label_3f8724;
    }
    ctx->pc = 0x3F871Cu;
    {
        const bool branch_taken_0x3f871c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F8720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F871Cu;
            // 0x3f8720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f871c) {
            ctx->pc = 0x3F8734u;
            goto label_3f8734;
        }
    }
    ctx->pc = 0x3F8724u;
label_3f8724:
    // 0x3f8724: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f8724u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f8728:
    // 0x3f8728: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f872c:
    if (ctx->pc == 0x3F872Cu) {
        ctx->pc = 0x3F8730u;
        goto label_3f8730;
    }
    ctx->pc = 0x3F8728u;
    {
        const bool branch_taken_0x3f8728 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8728) {
            ctx->pc = 0x3F8734u;
            goto label_3f8734;
        }
    }
    ctx->pc = 0x3F8730u;
label_3f8730:
    // 0x3f8730: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f8730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f8734:
    // 0x3f8734: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f8738:
    if (ctx->pc == 0x3F8738u) {
        ctx->pc = 0x3F873Cu;
        goto label_3f873c;
    }
    ctx->pc = 0x3F8734u;
    {
        const bool branch_taken_0x3f8734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8734) {
            ctx->pc = 0x3F8750u;
            goto label_3f8750;
        }
    }
    ctx->pc = 0x3F873Cu;
label_3f873c:
    // 0x3f873c: 0xc075eb4  jal         func_1D7AD0
label_3f8740:
    if (ctx->pc == 0x3F8740u) {
        ctx->pc = 0x3F8744u;
        goto label_3f8744;
    }
    ctx->pc = 0x3F873Cu;
    SET_GPR_U32(ctx, 31, 0x3F8744u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8744u; }
        if (ctx->pc != 0x3F8744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8744u; }
        if (ctx->pc != 0x3F8744u) { return; }
    }
    ctx->pc = 0x3F8744u;
label_3f8744:
    // 0x3f8744: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f8748:
    if (ctx->pc == 0x3F8748u) {
        ctx->pc = 0x3F874Cu;
        goto label_3f874c;
    }
    ctx->pc = 0x3F8744u;
    {
        const bool branch_taken_0x3f8744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8744) {
            ctx->pc = 0x3F8750u;
            goto label_3f8750;
        }
    }
    ctx->pc = 0x3F874Cu;
label_3f874c:
    // 0x3f874c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f874cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8750:
    // 0x3f8750: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_3f8754:
    if (ctx->pc == 0x3F8754u) {
        ctx->pc = 0x3F8758u;
        goto label_3f8758;
    }
    ctx->pc = 0x3F8750u;
    {
        const bool branch_taken_0x3f8750 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8750) {
            ctx->pc = 0x3F876Cu;
            goto label_3f876c;
        }
    }
    ctx->pc = 0x3F8758u;
label_3f8758:
    // 0x3f8758: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f8758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f875c:
    // 0x3f875c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f875cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f8760:
    // 0x3f8760: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f8760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f8764:
    // 0x3f8764: 0x148300ae  bne         $a0, $v1, . + 4 + (0xAE << 2)
label_3f8768:
    if (ctx->pc == 0x3F8768u) {
        ctx->pc = 0x3F876Cu;
        goto label_3f876c;
    }
    ctx->pc = 0x3F8764u;
    {
        const bool branch_taken_0x3f8764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8764) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F876Cu;
label_3f876c:
    // 0x3f876c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f876cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f8770:
    // 0x3f8770: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f8770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f8774:
    // 0x3f8774: 0x8c858a08  lw          $a1, -0x75F8($a0)
    ctx->pc = 0x3f8774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_3f8778:
    // 0x3f8778: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f8778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f877c:
    // 0x3f877c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x3f877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f8780:
    // 0x3f8780: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3f8780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_3f8784:
    // 0x3f8784: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f8784u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f8788:
    // 0x3f8788: 0x0  nop
    ctx->pc = 0x3f8788u;
    // NOP
label_3f878c:
    // 0x3f878c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f878cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f8790:
    // 0x3f8790: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x3f8790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_3f8794:
    // 0x3f8794: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f8794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f8798:
    // 0x3f8798: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3f8798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f879c:
    // 0x3f879c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3f879cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f87a0:
    // 0x3f87a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f87a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f87a4:
    // 0x3f87a4: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x3f87a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3f87a8:
    // 0x3f87a8: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f87a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f87ac:
    // 0x3f87ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f87acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f87b0:
    // 0x3f87b0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3f87b4:
    if (ctx->pc == 0x3F87B4u) {
        ctx->pc = 0x3F87B4u;
            // 0x3f87b4: 0xc640001c  lwc1        $f0, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3F87B8u;
        goto label_3f87b8;
    }
    ctx->pc = 0x3F87B0u;
    {
        const bool branch_taken_0x3f87b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f87b0) {
            ctx->pc = 0x3F87B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F87B0u;
            // 0x3f87b4: 0xc640001c  lwc1        $f0, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F87C8u;
            goto label_3f87c8;
        }
    }
    ctx->pc = 0x3F87B8u;
label_3f87b8:
    // 0x3f87b8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f87b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f87bc:
    // 0x3f87bc: 0xc0ba61c  jal         func_2E9870
label_3f87c0:
    if (ctx->pc == 0x3F87C0u) {
        ctx->pc = 0x3F87C0u;
            // 0x3f87c0: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F87C4u;
        goto label_3f87c4;
    }
    ctx->pc = 0x3F87BCu;
    SET_GPR_U32(ctx, 31, 0x3F87C4u);
    ctx->pc = 0x3F87C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F87BCu;
            // 0x3f87c0: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9870u;
    if (runtime->hasFunction(0x2E9870u)) {
        auto targetFn = runtime->lookupFunction(0x2E9870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F87C4u; }
        if (ctx->pc != 0x3F87C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9870_0x2e9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F87C4u; }
        if (ctx->pc != 0x3F87C4u) { return; }
    }
    ctx->pc = 0x3F87C4u;
label_3f87c4:
    // 0x3f87c4: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3f87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f87c8:
    // 0x3f87c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f87c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f87cc:
    // 0x3f87cc: 0x0  nop
    ctx->pc = 0x3f87ccu;
    // NOP
label_3f87d0:
    // 0x3f87d0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3f87d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f87d4:
    // 0x3f87d4: 0x45010092  bc1t        . + 4 + (0x92 << 2)
label_3f87d8:
    if (ctx->pc == 0x3F87D8u) {
        ctx->pc = 0x3F87DCu;
        goto label_3f87dc;
    }
    ctx->pc = 0x3F87D4u;
    {
        const bool branch_taken_0x3f87d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f87d4) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F87DCu;
label_3f87dc:
    // 0x3f87dc: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f87dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f87e0:
    // 0x3f87e0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f87e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f87e4:
    // 0x3f87e4: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f87e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f87e8:
    // 0x3f87e8: 0x1083008d  beq         $a0, $v1, . + 4 + (0x8D << 2)
label_3f87ec:
    if (ctx->pc == 0x3F87ECu) {
        ctx->pc = 0x3F87F0u;
        goto label_3f87f0;
    }
    ctx->pc = 0x3F87E8u;
    {
        const bool branch_taken_0x3f87e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f87e8) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F87F0u;
label_3f87f0:
    // 0x3f87f0: 0xe64c001c  swc1        $f12, 0x1C($s2)
    ctx->pc = 0x3f87f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3f87f4:
    // 0x3f87f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f87f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f87f8:
    // 0x3f87f8: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x3f87f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3f87fc:
    // 0x3f87fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f87fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8800:
    // 0x3f8800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3f8800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8804:
    // 0x3f8804: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x3f8804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_3f8808:
    // 0x3f8808: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f8808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f880c:
    // 0x3f880c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f880cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f8810:
    // 0x3f8810: 0x804511aa  lb          $a1, 0x11AA($v0)
    ctx->pc = 0x3f8810u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_3f8814:
    // 0x3f8814: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3f8814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3f8818:
    // 0x3f8818: 0x320f809  jalr        $t9
label_3f881c:
    if (ctx->pc == 0x3F881Cu) {
        ctx->pc = 0x3F881Cu;
            // 0x3f881c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F8820u;
        goto label_3f8820;
    }
    ctx->pc = 0x3F8818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F8820u);
        ctx->pc = 0x3F881Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8818u;
            // 0x3f881c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F8820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F8820u; }
            if (ctx->pc != 0x3F8820u) { return; }
        }
        }
    }
    ctx->pc = 0x3F8820u;
label_3f8820:
    // 0x3f8820: 0x1000007f  b           . + 4 + (0x7F << 2)
label_3f8824:
    if (ctx->pc == 0x3F8824u) {
        ctx->pc = 0x3F8828u;
        goto label_3f8828;
    }
    ctx->pc = 0x3F8820u;
    {
        const bool branch_taken_0x3f8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f8820) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8828u;
label_3f8828:
    // 0x3f8828: 0x8c830a68  lw          $v1, 0xA68($a0)
    ctx->pc = 0x3f8828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2664)));
label_3f882c:
    // 0x3f882c: 0x1460007c  bnez        $v1, . + 4 + (0x7C << 2)
label_3f8830:
    if (ctx->pc == 0x3F8830u) {
        ctx->pc = 0x3F8834u;
        goto label_3f8834;
    }
    ctx->pc = 0x3F882Cu;
    {
        const bool branch_taken_0x3f882c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f882c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8834u;
label_3f8834:
    // 0x3f8834: 0x8c850da0  lw          $a1, 0xDA0($a0)
    ctx->pc = 0x3f8834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3f8838:
    // 0x3f8838: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3f8838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3f883c:
    // 0x3f883c: 0x34a50020  ori         $a1, $a1, 0x20
    ctx->pc = 0x3f883cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
label_3f8840:
    // 0x3f8840: 0xac850da0  sw          $a1, 0xDA0($a0)
    ctx->pc = 0x3f8840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 5));
label_3f8844:
    // 0x3f8844: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f8844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8848:
    // 0x3f8848: 0x8c850db0  lw          $a1, 0xDB0($a0)
    ctx->pc = 0x3f8848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3504)));
label_3f884c:
    // 0x3f884c: 0x50a30005  beql        $a1, $v1, . + 4 + (0x5 << 2)
label_3f8850:
    if (ctx->pc == 0x3F8850u) {
        ctx->pc = 0x3F8850u;
            // 0x3f8850: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F8854u;
        goto label_3f8854;
    }
    ctx->pc = 0x3F884Cu;
    {
        const bool branch_taken_0x3f884c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f884c) {
            ctx->pc = 0x3F8850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F884Cu;
            // 0x3f8850: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F8864u;
            goto label_3f8864;
        }
    }
    ctx->pc = 0x3F8854u;
label_3f8854:
    // 0x3f8854: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x3f8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3f8858:
    // 0x3f8858: 0x54a30064  bnel        $a1, $v1, . + 4 + (0x64 << 2)
label_3f885c:
    if (ctx->pc == 0x3F885Cu) {
        ctx->pc = 0x3F885Cu;
            // 0x3f885c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x3F8860u;
        goto label_3f8860;
    }
    ctx->pc = 0x3F8858u;
    {
        const bool branch_taken_0x3f8858 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8858) {
            ctx->pc = 0x3F885Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8858u;
            // 0x3f885c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F89ECu;
            goto label_3f89ec;
        }
    }
    ctx->pc = 0x3F8860u;
label_3f8860:
    // 0x3f8860: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3f8860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f8864:
    // 0x3f8864: 0xc076218  jal         func_1D8860
label_3f8868:
    if (ctx->pc == 0x3F8868u) {
        ctx->pc = 0x3F886Cu;
        goto label_3f886c;
    }
    ctx->pc = 0x3F8864u;
    SET_GPR_U32(ctx, 31, 0x3F886Cu);
    ctx->pc = 0x1D8860u;
    if (runtime->hasFunction(0x1D8860u)) {
        auto targetFn = runtime->lookupFunction(0x1D8860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F886Cu; }
        if (ctx->pc != 0x3F886Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8860_0x1d8860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F886Cu; }
        if (ctx->pc != 0x3F886Cu) { return; }
    }
    ctx->pc = 0x3F886Cu;
label_3f886c:
    // 0x3f886c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_3f8870:
    if (ctx->pc == 0x3F8870u) {
        ctx->pc = 0x3F8870u;
            // 0x3f8870: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F8874u;
        goto label_3f8874;
    }
    ctx->pc = 0x3F886Cu;
    {
        const bool branch_taken_0x3f886c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f886c) {
            ctx->pc = 0x3F8870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F886Cu;
            // 0x3f8870: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F88D8u;
            goto label_3f88d8;
        }
    }
    ctx->pc = 0x3F8874u;
label_3f8874:
    // 0x3f8874: 0xc040180  jal         func_100600
label_3f8878:
    if (ctx->pc == 0x3F8878u) {
        ctx->pc = 0x3F8878u;
            // 0x3f8878: 0x24040d00  addiu       $a0, $zero, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
        ctx->pc = 0x3F887Cu;
        goto label_3f887c;
    }
    ctx->pc = 0x3F8874u;
    SET_GPR_U32(ctx, 31, 0x3F887Cu);
    ctx->pc = 0x3F8878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8874u;
            // 0x3f8878: 0x24040d00  addiu       $a0, $zero, 0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F887Cu; }
        if (ctx->pc != 0x3F887Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F887Cu; }
        if (ctx->pc != 0x3F887Cu) { return; }
    }
    ctx->pc = 0x3F887Cu;
label_3f887c:
    // 0x3f887c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3f8880:
    if (ctx->pc == 0x3F8880u) {
        ctx->pc = 0x3F8880u;
            // 0x3f8880: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F8884u;
        goto label_3f8884;
    }
    ctx->pc = 0x3F887Cu;
    {
        const bool branch_taken_0x3f887c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f887c) {
            ctx->pc = 0x3F8880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F887Cu;
            // 0x3f8880: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F88A4u;
            goto label_3f88a4;
        }
    }
    ctx->pc = 0x3F8884u;
label_3f8884:
    // 0x3f8884: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x3f8884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8888:
    // 0x3f8888: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3f8888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f888c:
    // 0x3f888c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f888cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f8890:
    // 0x3f8890: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3f8890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3f8894:
    // 0x3f8894: 0x90650d98  lbu         $a1, 0xD98($v1)
    ctx->pc = 0x3f8894u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3480)));
label_3f8898:
    // 0x3f8898: 0xc0ed8f8  jal         func_3B63E0
label_3f889c:
    if (ctx->pc == 0x3F889Cu) {
        ctx->pc = 0x3F889Cu;
            // 0x3f889c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F88A0u;
        goto label_3f88a0;
    }
    ctx->pc = 0x3F8898u;
    SET_GPR_U32(ctx, 31, 0x3F88A0u);
    ctx->pc = 0x3F889Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8898u;
            // 0x3f889c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B63E0u;
    if (runtime->hasFunction(0x3B63E0u)) {
        auto targetFn = runtime->lookupFunction(0x3B63E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88A0u; }
        if (ctx->pc != 0x3F88A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B63E0_0x3b63e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88A0u; }
        if (ctx->pc != 0x3F88A0u) { return; }
    }
    ctx->pc = 0x3F88A0u;
label_3f88a0:
    // 0x3f88a0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f88a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f88a4:
    // 0x3f88a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3f88a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f88a8:
    // 0x3f88a8: 0xc076234  jal         func_1D88D0
label_3f88ac:
    if (ctx->pc == 0x3F88ACu) {
        ctx->pc = 0x3F88ACu;
            // 0x3f88ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F88B0u;
        goto label_3f88b0;
    }
    ctx->pc = 0x3F88A8u;
    SET_GPR_U32(ctx, 31, 0x3F88B0u);
    ctx->pc = 0x3F88ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F88A8u;
            // 0x3f88ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D88D0u;
    if (runtime->hasFunction(0x1D88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88B0u; }
        if (ctx->pc != 0x3F88B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D88D0_0x1d88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88B0u; }
        if (ctx->pc != 0x3F88B0u) { return; }
    }
    ctx->pc = 0x3F88B0u;
label_3f88b0:
    // 0x3f88b0: 0xc040180  jal         func_100600
label_3f88b4:
    if (ctx->pc == 0x3F88B4u) {
        ctx->pc = 0x3F88B4u;
            // 0x3f88b4: 0x240407f0  addiu       $a0, $zero, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
        ctx->pc = 0x3F88B8u;
        goto label_3f88b8;
    }
    ctx->pc = 0x3F88B0u;
    SET_GPR_U32(ctx, 31, 0x3F88B8u);
    ctx->pc = 0x3F88B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F88B0u;
            // 0x3f88b4: 0x240407f0  addiu       $a0, $zero, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88B8u; }
        if (ctx->pc != 0x3F88B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88B8u; }
        if (ctx->pc != 0x3F88B8u) { return; }
    }
    ctx->pc = 0x3F88B8u;
label_3f88b8:
    // 0x3f88b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f88b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f88bc:
    // 0x3f88bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3f88c0:
    if (ctx->pc == 0x3F88C0u) {
        ctx->pc = 0x3F88C4u;
        goto label_3f88c4;
    }
    ctx->pc = 0x3F88BCu;
    {
        const bool branch_taken_0x3f88bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f88bc) {
            ctx->pc = 0x3F88D4u;
            goto label_3f88d4;
        }
    }
    ctx->pc = 0x3F88C4u;
label_3f88c4:
    // 0x3f88c4: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f88c8:
    // 0x3f88c8: 0x90450d98  lbu         $a1, 0xD98($v0)
    ctx->pc = 0x3f88c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3480)));
label_3f88cc:
    // 0x3f88cc: 0xc0f465c  jal         func_3D1970
label_3f88d0:
    if (ctx->pc == 0x3F88D0u) {
        ctx->pc = 0x3F88D0u;
            // 0x3f88d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F88D4u;
        goto label_3f88d4;
    }
    ctx->pc = 0x3F88CCu;
    SET_GPR_U32(ctx, 31, 0x3F88D4u);
    ctx->pc = 0x3F88D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F88CCu;
            // 0x3f88d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D1970u;
    if (runtime->hasFunction(0x3D1970u)) {
        auto targetFn = runtime->lookupFunction(0x3D1970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88D4u; }
        if (ctx->pc != 0x3F88D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D1970_0x3d1970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F88D4u; }
        if (ctx->pc != 0x3F88D4u) { return; }
    }
    ctx->pc = 0x3F88D4u;
label_3f88d4:
    // 0x3f88d4: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f88d8:
    // 0x3f88d8: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f88d8u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f88dc:
    // 0x3f88dc: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x3f88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f88e0:
    // 0x3f88e0: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3f88e4:
    if (ctx->pc == 0x3F88E4u) {
        ctx->pc = 0x3F88E4u;
            // 0x3f88e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F88E8u;
        goto label_3f88e8;
    }
    ctx->pc = 0x3F88E0u;
    {
        const bool branch_taken_0x3f88e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3F88E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F88E0u;
            // 0x3f88e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f88e0) {
            ctx->pc = 0x3F88F8u;
            goto label_3f88f8;
        }
    }
    ctx->pc = 0x3F88E8u;
label_3f88e8:
    // 0x3f88e8: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3f88e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f88ec:
    // 0x3f88ec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f88f0:
    if (ctx->pc == 0x3F88F0u) {
        ctx->pc = 0x3F88F4u;
        goto label_3f88f4;
    }
    ctx->pc = 0x3F88ECu;
    {
        const bool branch_taken_0x3f88ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f88ec) {
            ctx->pc = 0x3F88F8u;
            goto label_3f88f8;
        }
    }
    ctx->pc = 0x3F88F4u;
label_3f88f4:
    // 0x3f88f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f88f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f88f8:
    // 0x3f88f8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f88fc:
    if (ctx->pc == 0x3F88FCu) {
        ctx->pc = 0x3F8900u;
        goto label_3f8900;
    }
    ctx->pc = 0x3F88F8u;
    {
        const bool branch_taken_0x3f88f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f88f8) {
            ctx->pc = 0x3F8914u;
            goto label_3f8914;
        }
    }
    ctx->pc = 0x3F8900u;
label_3f8900:
    // 0x3f8900: 0xc075eb4  jal         func_1D7AD0
label_3f8904:
    if (ctx->pc == 0x3F8904u) {
        ctx->pc = 0x3F8908u;
        goto label_3f8908;
    }
    ctx->pc = 0x3F8900u;
    SET_GPR_U32(ctx, 31, 0x3F8908u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8908u; }
        if (ctx->pc != 0x3F8908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8908u; }
        if (ctx->pc != 0x3F8908u) { return; }
    }
    ctx->pc = 0x3F8908u;
label_3f8908:
    // 0x3f8908: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f890c:
    if (ctx->pc == 0x3F890Cu) {
        ctx->pc = 0x3F8910u;
        goto label_3f8910;
    }
    ctx->pc = 0x3F8908u;
    {
        const bool branch_taken_0x3f8908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8908) {
            ctx->pc = 0x3F8914u;
            goto label_3f8914;
        }
    }
    ctx->pc = 0x3F8910u;
label_3f8910:
    // 0x3f8910: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f8910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f8914:
    // 0x3f8914: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_3f8918:
    if (ctx->pc == 0x3F8918u) {
        ctx->pc = 0x3F891Cu;
        goto label_3f891c;
    }
    ctx->pc = 0x3F8914u;
    {
        const bool branch_taken_0x3f8914 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f8914) {
            ctx->pc = 0x3F8930u;
            goto label_3f8930;
        }
    }
    ctx->pc = 0x3F891Cu;
label_3f891c:
    // 0x3f891c: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3f891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f8920:
    // 0x3f8920: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3f8920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3f8924:
    // 0x3f8924: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x3f8924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_3f8928:
    // 0x3f8928: 0x1483003d  bne         $a0, $v1, . + 4 + (0x3D << 2)
label_3f892c:
    if (ctx->pc == 0x3F892Cu) {
        ctx->pc = 0x3F8930u;
        goto label_3f8930;
    }
    ctx->pc = 0x3F8928u;
    {
        const bool branch_taken_0x3f8928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f8928) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8930u;
label_3f8930:
    // 0x3f8930: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3f8930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3f8934:
    // 0x3f8934: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3f8934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3f8938:
    // 0x3f8938: 0x8c858a08  lw          $a1, -0x75F8($a0)
    ctx->pc = 0x3f8938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_3f893c:
    // 0x3f893c: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8940:
    // 0x3f8940: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x3f8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f8944:
    // 0x3f8944: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x3f8944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
label_3f8948:
    // 0x3f8948: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3f8948u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f894c:
    // 0x3f894c: 0x0  nop
    ctx->pc = 0x3f894cu;
    // NOP
label_3f8950:
    // 0x3f8950: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f8950u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f8954:
    // 0x3f8954: 0xe6410018  swc1        $f1, 0x18($s2)
    ctx->pc = 0x3f8954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_3f8958:
    // 0x3f8958: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3f8958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3f895c:
    // 0x3f895c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x3f895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8960:
    // 0x3f8960: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x3f8960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f8964:
    // 0x3f8964: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f8964u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f8968:
    // 0x3f8968: 0xe641001c  swc1        $f1, 0x1C($s2)
    ctx->pc = 0x3f8968u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3f896c:
    // 0x3f896c: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x3f896cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f8970:
    // 0x3f8970: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f8970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8974:
    // 0x3f8974: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3f8978:
    if (ctx->pc == 0x3F8978u) {
        ctx->pc = 0x3F8978u;
            // 0x3f8978: 0xc640001c  lwc1        $f0, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x3F897Cu;
        goto label_3f897c;
    }
    ctx->pc = 0x3F8974u;
    {
        const bool branch_taken_0x3f8974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f8974) {
            ctx->pc = 0x3F8978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8974u;
            // 0x3f8978: 0xc640001c  lwc1        $f0, 0x1C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F898Cu;
            goto label_3f898c;
        }
    }
    ctx->pc = 0x3F897Cu;
label_3f897c:
    // 0x3f897c: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x3f897cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_3f8980:
    // 0x3f8980: 0xc0ba61c  jal         func_2E9870
label_3f8984:
    if (ctx->pc == 0x3F8984u) {
        ctx->pc = 0x3F8984u;
            // 0x3f8984: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3F8988u;
        goto label_3f8988;
    }
    ctx->pc = 0x3F8980u;
    SET_GPR_U32(ctx, 31, 0x3F8988u);
    ctx->pc = 0x3F8984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8980u;
            // 0x3f8984: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E9870u;
    if (runtime->hasFunction(0x2E9870u)) {
        auto targetFn = runtime->lookupFunction(0x2E9870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8988u; }
        if (ctx->pc != 0x3F8988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E9870_0x2e9870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F8988u; }
        if (ctx->pc != 0x3F8988u) { return; }
    }
    ctx->pc = 0x3F8988u;
label_3f8988:
    // 0x3f8988: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x3f8988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f898c:
    // 0x3f898c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3f898cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f8990:
    // 0x3f8990: 0x0  nop
    ctx->pc = 0x3f8990u;
    // NOP
label_3f8994:
    // 0x3f8994: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x3f8994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f8998:
    // 0x3f8998: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_3f899c:
    if (ctx->pc == 0x3F899Cu) {
        ctx->pc = 0x3F899Cu;
            // 0x3f899c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x3F89A0u;
        goto label_3f89a0;
    }
    ctx->pc = 0x3F8998u;
    {
        const bool branch_taken_0x3f8998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f8998) {
            ctx->pc = 0x3F899Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8998u;
            // 0x3f899c: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F89D4u;
            goto label_3f89d4;
        }
    }
    ctx->pc = 0x3F89A0u;
label_3f89a0:
    // 0x3f89a0: 0xe64c001c  swc1        $f12, 0x1C($s2)
    ctx->pc = 0x3f89a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_3f89a4:
    // 0x3f89a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f89a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f89a8:
    // 0x3f89a8: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x3f89a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3f89ac:
    // 0x3f89ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3f89acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f89b0:
    // 0x3f89b0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3f89b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f89b4:
    // 0x3f89b4: 0x8c640144  lw          $a0, 0x144($v1)
    ctx->pc = 0x3f89b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_3f89b8:
    // 0x3f89b8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3f89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3f89bc:
    // 0x3f89bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f89bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f89c0:
    // 0x3f89c0: 0x804511aa  lb          $a1, 0x11AA($v0)
    ctx->pc = 0x3f89c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_3f89c4:
    // 0x3f89c4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3f89c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3f89c8:
    // 0x3f89c8: 0x320f809  jalr        $t9
label_3f89cc:
    if (ctx->pc == 0x3F89CCu) {
        ctx->pc = 0x3F89CCu;
            // 0x3f89cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F89D0u;
        goto label_3f89d0;
    }
    ctx->pc = 0x3F89C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F89D0u);
        ctx->pc = 0x3F89CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F89C8u;
            // 0x3f89cc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F89D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F89D0u; }
            if (ctx->pc != 0x3F89D0u) { return; }
        }
        }
    }
    ctx->pc = 0x3F89D0u;
label_3f89d0:
    // 0x3f89d0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x3f89d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3f89d4:
    // 0x3f89d4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_3f89d8:
    if (ctx->pc == 0x3F89D8u) {
        ctx->pc = 0x3F89DCu;
        goto label_3f89dc;
    }
    ctx->pc = 0x3F89D4u;
    {
        const bool branch_taken_0x3f89d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f89d4) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F89DCu;
label_3f89dc:
    // 0x3f89dc: 0xc10c9d8  jal         func_432760
label_3f89e0:
    if (ctx->pc == 0x3F89E0u) {
        ctx->pc = 0x3F89E4u;
        goto label_3f89e4;
    }
    ctx->pc = 0x3F89DCu;
    SET_GPR_U32(ctx, 31, 0x3F89E4u);
    ctx->pc = 0x432760u;
    if (runtime->hasFunction(0x432760u)) {
        auto targetFn = runtime->lookupFunction(0x432760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F89E4u; }
        if (ctx->pc != 0x3F89E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432760_0x432760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F89E4u; }
        if (ctx->pc != 0x3F89E4u) { return; }
    }
    ctx->pc = 0x3F89E4u;
label_3f89e4:
    // 0x3f89e4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3f89e8:
    if (ctx->pc == 0x3F89E8u) {
        ctx->pc = 0x3F89ECu;
        goto label_3f89ec;
    }
    ctx->pc = 0x3F89E4u;
    {
        const bool branch_taken_0x3f89e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f89e4) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F89ECu;
label_3f89ec:
    // 0x3f89ec: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_3f89f0:
    if (ctx->pc == 0x3F89F0u) {
        ctx->pc = 0x3F89F4u;
        goto label_3f89f4;
    }
    ctx->pc = 0x3F89ECu;
    {
        const bool branch_taken_0x3f89ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f89ec) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F89F4u;
label_3f89f4:
    // 0x3f89f4: 0xc10c9b4  jal         func_4326D0
label_3f89f8:
    if (ctx->pc == 0x3F89F8u) {
        ctx->pc = 0x3F89FCu;
        goto label_3f89fc;
    }
    ctx->pc = 0x3F89F4u;
    SET_GPR_U32(ctx, 31, 0x3F89FCu);
    ctx->pc = 0x4326D0u;
    if (runtime->hasFunction(0x4326D0u)) {
        auto targetFn = runtime->lookupFunction(0x4326D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F89FCu; }
        if (ctx->pc != 0x3F89FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004326D0_0x4326d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F89FCu; }
        if (ctx->pc != 0x3F89FCu) { return; }
    }
    ctx->pc = 0x3F89FCu;
label_3f89fc:
    // 0x3f89fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3f8a00:
    if (ctx->pc == 0x3F8A00u) {
        ctx->pc = 0x3F8A04u;
        goto label_3f8a04;
    }
    ctx->pc = 0x3F89FCu;
    {
        const bool branch_taken_0x3f89fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f89fc) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8A04u;
label_3f8a04:
    // 0x3f8a04: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3f8a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3f8a08:
    // 0x3f8a08: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x3f8a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_3f8a0c:
    // 0x3f8a0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3f8a10:
    if (ctx->pc == 0x3F8A10u) {
        ctx->pc = 0x3F8A10u;
            // 0x3f8a10: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->pc = 0x3F8A14u;
        goto label_3f8a14;
    }
    ctx->pc = 0x3F8A0Cu;
    {
        const bool branch_taken_0x3f8a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F8A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8A0Cu;
            // 0x3f8a10: 0xac830da0  sw          $v1, 0xDA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f8a0c) {
            ctx->pc = 0x3F8A20u;
            goto label_3f8a20;
        }
    }
    ctx->pc = 0x3F8A14u;
label_3f8a14:
    // 0x3f8a14: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3f8a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3f8a18:
    // 0x3f8a18: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x3f8a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
label_3f8a1c:
    // 0x3f8a1c: 0xac830da0  sw          $v1, 0xDA0($a0)
    ctx->pc = 0x3f8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3488), GPR_U32(ctx, 3));
label_3f8a20:
    // 0x3f8a20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3f8a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3f8a24:
    // 0x3f8a24: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f8a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f8a28:
    // 0x3f8a28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3f8a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f8a2c:
    // 0x3f8a2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f8a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f8a30:
    // 0x3f8a30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f8a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f8a34:
    // 0x3f8a34: 0x3e00008  jr          $ra
label_3f8a38:
    if (ctx->pc == 0x3F8A38u) {
        ctx->pc = 0x3F8A38u;
            // 0x3f8a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x3F8A3Cu;
        goto label_3f8a3c;
    }
    ctx->pc = 0x3F8A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F8A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F8A34u;
            // 0x3f8a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F8A3Cu;
label_3f8a3c:
    // 0x3f8a3c: 0x0  nop
    ctx->pc = 0x3f8a3cu;
    // NOP
}
