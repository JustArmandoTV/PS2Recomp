#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E8140
// Address: 0x2e8140 - 0x2e87a0
void sub_002E8140_0x2e8140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E8140_0x2e8140");
#endif

    switch (ctx->pc) {
        case 0x2e8140u: goto label_2e8140;
        case 0x2e8144u: goto label_2e8144;
        case 0x2e8148u: goto label_2e8148;
        case 0x2e814cu: goto label_2e814c;
        case 0x2e8150u: goto label_2e8150;
        case 0x2e8154u: goto label_2e8154;
        case 0x2e8158u: goto label_2e8158;
        case 0x2e815cu: goto label_2e815c;
        case 0x2e8160u: goto label_2e8160;
        case 0x2e8164u: goto label_2e8164;
        case 0x2e8168u: goto label_2e8168;
        case 0x2e816cu: goto label_2e816c;
        case 0x2e8170u: goto label_2e8170;
        case 0x2e8174u: goto label_2e8174;
        case 0x2e8178u: goto label_2e8178;
        case 0x2e817cu: goto label_2e817c;
        case 0x2e8180u: goto label_2e8180;
        case 0x2e8184u: goto label_2e8184;
        case 0x2e8188u: goto label_2e8188;
        case 0x2e818cu: goto label_2e818c;
        case 0x2e8190u: goto label_2e8190;
        case 0x2e8194u: goto label_2e8194;
        case 0x2e8198u: goto label_2e8198;
        case 0x2e819cu: goto label_2e819c;
        case 0x2e81a0u: goto label_2e81a0;
        case 0x2e81a4u: goto label_2e81a4;
        case 0x2e81a8u: goto label_2e81a8;
        case 0x2e81acu: goto label_2e81ac;
        case 0x2e81b0u: goto label_2e81b0;
        case 0x2e81b4u: goto label_2e81b4;
        case 0x2e81b8u: goto label_2e81b8;
        case 0x2e81bcu: goto label_2e81bc;
        case 0x2e81c0u: goto label_2e81c0;
        case 0x2e81c4u: goto label_2e81c4;
        case 0x2e81c8u: goto label_2e81c8;
        case 0x2e81ccu: goto label_2e81cc;
        case 0x2e81d0u: goto label_2e81d0;
        case 0x2e81d4u: goto label_2e81d4;
        case 0x2e81d8u: goto label_2e81d8;
        case 0x2e81dcu: goto label_2e81dc;
        case 0x2e81e0u: goto label_2e81e0;
        case 0x2e81e4u: goto label_2e81e4;
        case 0x2e81e8u: goto label_2e81e8;
        case 0x2e81ecu: goto label_2e81ec;
        case 0x2e81f0u: goto label_2e81f0;
        case 0x2e81f4u: goto label_2e81f4;
        case 0x2e81f8u: goto label_2e81f8;
        case 0x2e81fcu: goto label_2e81fc;
        case 0x2e8200u: goto label_2e8200;
        case 0x2e8204u: goto label_2e8204;
        case 0x2e8208u: goto label_2e8208;
        case 0x2e820cu: goto label_2e820c;
        case 0x2e8210u: goto label_2e8210;
        case 0x2e8214u: goto label_2e8214;
        case 0x2e8218u: goto label_2e8218;
        case 0x2e821cu: goto label_2e821c;
        case 0x2e8220u: goto label_2e8220;
        case 0x2e8224u: goto label_2e8224;
        case 0x2e8228u: goto label_2e8228;
        case 0x2e822cu: goto label_2e822c;
        case 0x2e8230u: goto label_2e8230;
        case 0x2e8234u: goto label_2e8234;
        case 0x2e8238u: goto label_2e8238;
        case 0x2e823cu: goto label_2e823c;
        case 0x2e8240u: goto label_2e8240;
        case 0x2e8244u: goto label_2e8244;
        case 0x2e8248u: goto label_2e8248;
        case 0x2e824cu: goto label_2e824c;
        case 0x2e8250u: goto label_2e8250;
        case 0x2e8254u: goto label_2e8254;
        case 0x2e8258u: goto label_2e8258;
        case 0x2e825cu: goto label_2e825c;
        case 0x2e8260u: goto label_2e8260;
        case 0x2e8264u: goto label_2e8264;
        case 0x2e8268u: goto label_2e8268;
        case 0x2e826cu: goto label_2e826c;
        case 0x2e8270u: goto label_2e8270;
        case 0x2e8274u: goto label_2e8274;
        case 0x2e8278u: goto label_2e8278;
        case 0x2e827cu: goto label_2e827c;
        case 0x2e8280u: goto label_2e8280;
        case 0x2e8284u: goto label_2e8284;
        case 0x2e8288u: goto label_2e8288;
        case 0x2e828cu: goto label_2e828c;
        case 0x2e8290u: goto label_2e8290;
        case 0x2e8294u: goto label_2e8294;
        case 0x2e8298u: goto label_2e8298;
        case 0x2e829cu: goto label_2e829c;
        case 0x2e82a0u: goto label_2e82a0;
        case 0x2e82a4u: goto label_2e82a4;
        case 0x2e82a8u: goto label_2e82a8;
        case 0x2e82acu: goto label_2e82ac;
        case 0x2e82b0u: goto label_2e82b0;
        case 0x2e82b4u: goto label_2e82b4;
        case 0x2e82b8u: goto label_2e82b8;
        case 0x2e82bcu: goto label_2e82bc;
        case 0x2e82c0u: goto label_2e82c0;
        case 0x2e82c4u: goto label_2e82c4;
        case 0x2e82c8u: goto label_2e82c8;
        case 0x2e82ccu: goto label_2e82cc;
        case 0x2e82d0u: goto label_2e82d0;
        case 0x2e82d4u: goto label_2e82d4;
        case 0x2e82d8u: goto label_2e82d8;
        case 0x2e82dcu: goto label_2e82dc;
        case 0x2e82e0u: goto label_2e82e0;
        case 0x2e82e4u: goto label_2e82e4;
        case 0x2e82e8u: goto label_2e82e8;
        case 0x2e82ecu: goto label_2e82ec;
        case 0x2e82f0u: goto label_2e82f0;
        case 0x2e82f4u: goto label_2e82f4;
        case 0x2e82f8u: goto label_2e82f8;
        case 0x2e82fcu: goto label_2e82fc;
        case 0x2e8300u: goto label_2e8300;
        case 0x2e8304u: goto label_2e8304;
        case 0x2e8308u: goto label_2e8308;
        case 0x2e830cu: goto label_2e830c;
        case 0x2e8310u: goto label_2e8310;
        case 0x2e8314u: goto label_2e8314;
        case 0x2e8318u: goto label_2e8318;
        case 0x2e831cu: goto label_2e831c;
        case 0x2e8320u: goto label_2e8320;
        case 0x2e8324u: goto label_2e8324;
        case 0x2e8328u: goto label_2e8328;
        case 0x2e832cu: goto label_2e832c;
        case 0x2e8330u: goto label_2e8330;
        case 0x2e8334u: goto label_2e8334;
        case 0x2e8338u: goto label_2e8338;
        case 0x2e833cu: goto label_2e833c;
        case 0x2e8340u: goto label_2e8340;
        case 0x2e8344u: goto label_2e8344;
        case 0x2e8348u: goto label_2e8348;
        case 0x2e834cu: goto label_2e834c;
        case 0x2e8350u: goto label_2e8350;
        case 0x2e8354u: goto label_2e8354;
        case 0x2e8358u: goto label_2e8358;
        case 0x2e835cu: goto label_2e835c;
        case 0x2e8360u: goto label_2e8360;
        case 0x2e8364u: goto label_2e8364;
        case 0x2e8368u: goto label_2e8368;
        case 0x2e836cu: goto label_2e836c;
        case 0x2e8370u: goto label_2e8370;
        case 0x2e8374u: goto label_2e8374;
        case 0x2e8378u: goto label_2e8378;
        case 0x2e837cu: goto label_2e837c;
        case 0x2e8380u: goto label_2e8380;
        case 0x2e8384u: goto label_2e8384;
        case 0x2e8388u: goto label_2e8388;
        case 0x2e838cu: goto label_2e838c;
        case 0x2e8390u: goto label_2e8390;
        case 0x2e8394u: goto label_2e8394;
        case 0x2e8398u: goto label_2e8398;
        case 0x2e839cu: goto label_2e839c;
        case 0x2e83a0u: goto label_2e83a0;
        case 0x2e83a4u: goto label_2e83a4;
        case 0x2e83a8u: goto label_2e83a8;
        case 0x2e83acu: goto label_2e83ac;
        case 0x2e83b0u: goto label_2e83b0;
        case 0x2e83b4u: goto label_2e83b4;
        case 0x2e83b8u: goto label_2e83b8;
        case 0x2e83bcu: goto label_2e83bc;
        case 0x2e83c0u: goto label_2e83c0;
        case 0x2e83c4u: goto label_2e83c4;
        case 0x2e83c8u: goto label_2e83c8;
        case 0x2e83ccu: goto label_2e83cc;
        case 0x2e83d0u: goto label_2e83d0;
        case 0x2e83d4u: goto label_2e83d4;
        case 0x2e83d8u: goto label_2e83d8;
        case 0x2e83dcu: goto label_2e83dc;
        case 0x2e83e0u: goto label_2e83e0;
        case 0x2e83e4u: goto label_2e83e4;
        case 0x2e83e8u: goto label_2e83e8;
        case 0x2e83ecu: goto label_2e83ec;
        case 0x2e83f0u: goto label_2e83f0;
        case 0x2e83f4u: goto label_2e83f4;
        case 0x2e83f8u: goto label_2e83f8;
        case 0x2e83fcu: goto label_2e83fc;
        case 0x2e8400u: goto label_2e8400;
        case 0x2e8404u: goto label_2e8404;
        case 0x2e8408u: goto label_2e8408;
        case 0x2e840cu: goto label_2e840c;
        case 0x2e8410u: goto label_2e8410;
        case 0x2e8414u: goto label_2e8414;
        case 0x2e8418u: goto label_2e8418;
        case 0x2e841cu: goto label_2e841c;
        case 0x2e8420u: goto label_2e8420;
        case 0x2e8424u: goto label_2e8424;
        case 0x2e8428u: goto label_2e8428;
        case 0x2e842cu: goto label_2e842c;
        case 0x2e8430u: goto label_2e8430;
        case 0x2e8434u: goto label_2e8434;
        case 0x2e8438u: goto label_2e8438;
        case 0x2e843cu: goto label_2e843c;
        case 0x2e8440u: goto label_2e8440;
        case 0x2e8444u: goto label_2e8444;
        case 0x2e8448u: goto label_2e8448;
        case 0x2e844cu: goto label_2e844c;
        case 0x2e8450u: goto label_2e8450;
        case 0x2e8454u: goto label_2e8454;
        case 0x2e8458u: goto label_2e8458;
        case 0x2e845cu: goto label_2e845c;
        case 0x2e8460u: goto label_2e8460;
        case 0x2e8464u: goto label_2e8464;
        case 0x2e8468u: goto label_2e8468;
        case 0x2e846cu: goto label_2e846c;
        case 0x2e8470u: goto label_2e8470;
        case 0x2e8474u: goto label_2e8474;
        case 0x2e8478u: goto label_2e8478;
        case 0x2e847cu: goto label_2e847c;
        case 0x2e8480u: goto label_2e8480;
        case 0x2e8484u: goto label_2e8484;
        case 0x2e8488u: goto label_2e8488;
        case 0x2e848cu: goto label_2e848c;
        case 0x2e8490u: goto label_2e8490;
        case 0x2e8494u: goto label_2e8494;
        case 0x2e8498u: goto label_2e8498;
        case 0x2e849cu: goto label_2e849c;
        case 0x2e84a0u: goto label_2e84a0;
        case 0x2e84a4u: goto label_2e84a4;
        case 0x2e84a8u: goto label_2e84a8;
        case 0x2e84acu: goto label_2e84ac;
        case 0x2e84b0u: goto label_2e84b0;
        case 0x2e84b4u: goto label_2e84b4;
        case 0x2e84b8u: goto label_2e84b8;
        case 0x2e84bcu: goto label_2e84bc;
        case 0x2e84c0u: goto label_2e84c0;
        case 0x2e84c4u: goto label_2e84c4;
        case 0x2e84c8u: goto label_2e84c8;
        case 0x2e84ccu: goto label_2e84cc;
        case 0x2e84d0u: goto label_2e84d0;
        case 0x2e84d4u: goto label_2e84d4;
        case 0x2e84d8u: goto label_2e84d8;
        case 0x2e84dcu: goto label_2e84dc;
        case 0x2e84e0u: goto label_2e84e0;
        case 0x2e84e4u: goto label_2e84e4;
        case 0x2e84e8u: goto label_2e84e8;
        case 0x2e84ecu: goto label_2e84ec;
        case 0x2e84f0u: goto label_2e84f0;
        case 0x2e84f4u: goto label_2e84f4;
        case 0x2e84f8u: goto label_2e84f8;
        case 0x2e84fcu: goto label_2e84fc;
        case 0x2e8500u: goto label_2e8500;
        case 0x2e8504u: goto label_2e8504;
        case 0x2e8508u: goto label_2e8508;
        case 0x2e850cu: goto label_2e850c;
        case 0x2e8510u: goto label_2e8510;
        case 0x2e8514u: goto label_2e8514;
        case 0x2e8518u: goto label_2e8518;
        case 0x2e851cu: goto label_2e851c;
        case 0x2e8520u: goto label_2e8520;
        case 0x2e8524u: goto label_2e8524;
        case 0x2e8528u: goto label_2e8528;
        case 0x2e852cu: goto label_2e852c;
        case 0x2e8530u: goto label_2e8530;
        case 0x2e8534u: goto label_2e8534;
        case 0x2e8538u: goto label_2e8538;
        case 0x2e853cu: goto label_2e853c;
        case 0x2e8540u: goto label_2e8540;
        case 0x2e8544u: goto label_2e8544;
        case 0x2e8548u: goto label_2e8548;
        case 0x2e854cu: goto label_2e854c;
        case 0x2e8550u: goto label_2e8550;
        case 0x2e8554u: goto label_2e8554;
        case 0x2e8558u: goto label_2e8558;
        case 0x2e855cu: goto label_2e855c;
        case 0x2e8560u: goto label_2e8560;
        case 0x2e8564u: goto label_2e8564;
        case 0x2e8568u: goto label_2e8568;
        case 0x2e856cu: goto label_2e856c;
        case 0x2e8570u: goto label_2e8570;
        case 0x2e8574u: goto label_2e8574;
        case 0x2e8578u: goto label_2e8578;
        case 0x2e857cu: goto label_2e857c;
        case 0x2e8580u: goto label_2e8580;
        case 0x2e8584u: goto label_2e8584;
        case 0x2e8588u: goto label_2e8588;
        case 0x2e858cu: goto label_2e858c;
        case 0x2e8590u: goto label_2e8590;
        case 0x2e8594u: goto label_2e8594;
        case 0x2e8598u: goto label_2e8598;
        case 0x2e859cu: goto label_2e859c;
        case 0x2e85a0u: goto label_2e85a0;
        case 0x2e85a4u: goto label_2e85a4;
        case 0x2e85a8u: goto label_2e85a8;
        case 0x2e85acu: goto label_2e85ac;
        case 0x2e85b0u: goto label_2e85b0;
        case 0x2e85b4u: goto label_2e85b4;
        case 0x2e85b8u: goto label_2e85b8;
        case 0x2e85bcu: goto label_2e85bc;
        case 0x2e85c0u: goto label_2e85c0;
        case 0x2e85c4u: goto label_2e85c4;
        case 0x2e85c8u: goto label_2e85c8;
        case 0x2e85ccu: goto label_2e85cc;
        case 0x2e85d0u: goto label_2e85d0;
        case 0x2e85d4u: goto label_2e85d4;
        case 0x2e85d8u: goto label_2e85d8;
        case 0x2e85dcu: goto label_2e85dc;
        case 0x2e85e0u: goto label_2e85e0;
        case 0x2e85e4u: goto label_2e85e4;
        case 0x2e85e8u: goto label_2e85e8;
        case 0x2e85ecu: goto label_2e85ec;
        case 0x2e85f0u: goto label_2e85f0;
        case 0x2e85f4u: goto label_2e85f4;
        case 0x2e85f8u: goto label_2e85f8;
        case 0x2e85fcu: goto label_2e85fc;
        case 0x2e8600u: goto label_2e8600;
        case 0x2e8604u: goto label_2e8604;
        case 0x2e8608u: goto label_2e8608;
        case 0x2e860cu: goto label_2e860c;
        case 0x2e8610u: goto label_2e8610;
        case 0x2e8614u: goto label_2e8614;
        case 0x2e8618u: goto label_2e8618;
        case 0x2e861cu: goto label_2e861c;
        case 0x2e8620u: goto label_2e8620;
        case 0x2e8624u: goto label_2e8624;
        case 0x2e8628u: goto label_2e8628;
        case 0x2e862cu: goto label_2e862c;
        case 0x2e8630u: goto label_2e8630;
        case 0x2e8634u: goto label_2e8634;
        case 0x2e8638u: goto label_2e8638;
        case 0x2e863cu: goto label_2e863c;
        case 0x2e8640u: goto label_2e8640;
        case 0x2e8644u: goto label_2e8644;
        case 0x2e8648u: goto label_2e8648;
        case 0x2e864cu: goto label_2e864c;
        case 0x2e8650u: goto label_2e8650;
        case 0x2e8654u: goto label_2e8654;
        case 0x2e8658u: goto label_2e8658;
        case 0x2e865cu: goto label_2e865c;
        case 0x2e8660u: goto label_2e8660;
        case 0x2e8664u: goto label_2e8664;
        case 0x2e8668u: goto label_2e8668;
        case 0x2e866cu: goto label_2e866c;
        case 0x2e8670u: goto label_2e8670;
        case 0x2e8674u: goto label_2e8674;
        case 0x2e8678u: goto label_2e8678;
        case 0x2e867cu: goto label_2e867c;
        case 0x2e8680u: goto label_2e8680;
        case 0x2e8684u: goto label_2e8684;
        case 0x2e8688u: goto label_2e8688;
        case 0x2e868cu: goto label_2e868c;
        case 0x2e8690u: goto label_2e8690;
        case 0x2e8694u: goto label_2e8694;
        case 0x2e8698u: goto label_2e8698;
        case 0x2e869cu: goto label_2e869c;
        case 0x2e86a0u: goto label_2e86a0;
        case 0x2e86a4u: goto label_2e86a4;
        case 0x2e86a8u: goto label_2e86a8;
        case 0x2e86acu: goto label_2e86ac;
        case 0x2e86b0u: goto label_2e86b0;
        case 0x2e86b4u: goto label_2e86b4;
        case 0x2e86b8u: goto label_2e86b8;
        case 0x2e86bcu: goto label_2e86bc;
        case 0x2e86c0u: goto label_2e86c0;
        case 0x2e86c4u: goto label_2e86c4;
        case 0x2e86c8u: goto label_2e86c8;
        case 0x2e86ccu: goto label_2e86cc;
        case 0x2e86d0u: goto label_2e86d0;
        case 0x2e86d4u: goto label_2e86d4;
        case 0x2e86d8u: goto label_2e86d8;
        case 0x2e86dcu: goto label_2e86dc;
        case 0x2e86e0u: goto label_2e86e0;
        case 0x2e86e4u: goto label_2e86e4;
        case 0x2e86e8u: goto label_2e86e8;
        case 0x2e86ecu: goto label_2e86ec;
        case 0x2e86f0u: goto label_2e86f0;
        case 0x2e86f4u: goto label_2e86f4;
        case 0x2e86f8u: goto label_2e86f8;
        case 0x2e86fcu: goto label_2e86fc;
        case 0x2e8700u: goto label_2e8700;
        case 0x2e8704u: goto label_2e8704;
        case 0x2e8708u: goto label_2e8708;
        case 0x2e870cu: goto label_2e870c;
        case 0x2e8710u: goto label_2e8710;
        case 0x2e8714u: goto label_2e8714;
        case 0x2e8718u: goto label_2e8718;
        case 0x2e871cu: goto label_2e871c;
        case 0x2e8720u: goto label_2e8720;
        case 0x2e8724u: goto label_2e8724;
        case 0x2e8728u: goto label_2e8728;
        case 0x2e872cu: goto label_2e872c;
        case 0x2e8730u: goto label_2e8730;
        case 0x2e8734u: goto label_2e8734;
        case 0x2e8738u: goto label_2e8738;
        case 0x2e873cu: goto label_2e873c;
        case 0x2e8740u: goto label_2e8740;
        case 0x2e8744u: goto label_2e8744;
        case 0x2e8748u: goto label_2e8748;
        case 0x2e874cu: goto label_2e874c;
        case 0x2e8750u: goto label_2e8750;
        case 0x2e8754u: goto label_2e8754;
        case 0x2e8758u: goto label_2e8758;
        case 0x2e875cu: goto label_2e875c;
        case 0x2e8760u: goto label_2e8760;
        case 0x2e8764u: goto label_2e8764;
        case 0x2e8768u: goto label_2e8768;
        case 0x2e876cu: goto label_2e876c;
        case 0x2e8770u: goto label_2e8770;
        case 0x2e8774u: goto label_2e8774;
        case 0x2e8778u: goto label_2e8778;
        case 0x2e877cu: goto label_2e877c;
        case 0x2e8780u: goto label_2e8780;
        case 0x2e8784u: goto label_2e8784;
        case 0x2e8788u: goto label_2e8788;
        case 0x2e878cu: goto label_2e878c;
        case 0x2e8790u: goto label_2e8790;
        case 0x2e8794u: goto label_2e8794;
        case 0x2e8798u: goto label_2e8798;
        case 0x2e879cu: goto label_2e879c;
        default: break;
    }

    ctx->pc = 0x2e8140u;

label_2e8140:
    // 0x2e8140: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e8144:
    // 0x2e8144: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2e8144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2e8148:
    // 0x2e8148: 0xa4600f10  sh          $zero, 0xF10($v1)
    ctx->pc = 0x2e8148u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3856), (uint16_t)GPR_U32(ctx, 0));
label_2e814c:
    // 0x2e814c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e814cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8150:
    // 0x2e8150: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e8154:
    // 0x2e8154: 0x24840f20  addiu       $a0, $a0, 0xF20
    ctx->pc = 0x2e8154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3872));
label_2e8158:
    // 0x2e8158: 0xa4600f00  sh          $zero, 0xF00($v1)
    ctx->pc = 0x2e8158u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3840), (uint16_t)GPR_U32(ctx, 0));
label_2e815c:
    // 0x2e815c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e8160:
    // 0x2e8160: 0xa4600ef8  sh          $zero, 0xEF8($v1)
    ctx->pc = 0x2e8160u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3832), (uint16_t)GPR_U32(ctx, 0));
label_2e8164:
    // 0x2e8164: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e8168:
    // 0x2e8168: 0xa4600f08  sh          $zero, 0xF08($v1)
    ctx->pc = 0x2e8168u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 3848), (uint16_t)GPR_U32(ctx, 0));
label_2e816c:
    // 0x2e816c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2e8170:
    // 0x2e8170: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2e8170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_2e8174:
    // 0x2e8174: 0x28a30064  slti        $v1, $a1, 0x64
    ctx->pc = 0x2e8174u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)100) ? 1 : 0);
label_2e8178:
    // 0x2e8178: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2e817c:
    // 0x2e817c: 0x0  nop
    ctx->pc = 0x2e817cu;
    // NOP
label_2e8180:
    // 0x2e8180: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e8184:
    if (ctx->pc == 0x2E8184u) {
        ctx->pc = 0x2E8188u;
        goto label_2e8188;
    }
    ctx->pc = 0x2E8180u;
    {
        const bool branch_taken_0x2e8180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8180) {
            ctx->pc = 0x2E816Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e816c;
        }
    }
    ctx->pc = 0x2E8188u;
label_2e8188:
    // 0x2e8188: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2e8188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_2e818c:
    // 0x2e818c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8190:
    // 0x2e8190: 0x24a510b0  addiu       $a1, $a1, 0x10B0
    ctx->pc = 0x2e8190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
label_2e8194:
    // 0x2e8194: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e8194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e8198:
    // 0x2e8198: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e8198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e819c:
    // 0x2e819c: 0x28830064  slti        $v1, $a0, 0x64
    ctx->pc = 0x2e819cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_2e81a0:
    // 0x2e81a0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2e81a4:
    // 0x2e81a4: 0x0  nop
    ctx->pc = 0x2e81a4u;
    // NOP
label_2e81a8:
    // 0x2e81a8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e81ac:
    if (ctx->pc == 0x2E81ACu) {
        ctx->pc = 0x2E81B0u;
        goto label_2e81b0;
    }
    ctx->pc = 0x2E81A8u;
    {
        const bool branch_taken_0x2e81a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e81a8) {
            ctx->pc = 0x2E8194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8194;
        }
    }
    ctx->pc = 0x2E81B0u;
label_2e81b0:
    // 0x2e81b0: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2e81b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_2e81b4:
    // 0x2e81b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e81b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e81b8:
    // 0x2e81b8: 0x24a51240  addiu       $a1, $a1, 0x1240
    ctx->pc = 0x2e81b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4672));
label_2e81bc:
    // 0x2e81bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e81bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e81c0:
    // 0x2e81c0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e81c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e81c4:
    // 0x2e81c4: 0x28830032  slti        $v1, $a0, 0x32
    ctx->pc = 0x2e81c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)50) ? 1 : 0);
label_2e81c8:
    // 0x2e81c8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e81c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2e81cc:
    // 0x2e81cc: 0x0  nop
    ctx->pc = 0x2e81ccu;
    // NOP
label_2e81d0:
    // 0x2e81d0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e81d4:
    if (ctx->pc == 0x2E81D4u) {
        ctx->pc = 0x2E81D8u;
        goto label_2e81d8;
    }
    ctx->pc = 0x2E81D0u;
    {
        const bool branch_taken_0x2e81d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e81d0) {
            ctx->pc = 0x2E81BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e81bc;
        }
    }
    ctx->pc = 0x2E81D8u;
label_2e81d8:
    // 0x2e81d8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x2e81d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_2e81dc:
    // 0x2e81dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e81dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e81e0:
    // 0x2e81e0: 0x24a51310  addiu       $a1, $a1, 0x1310
    ctx->pc = 0x2e81e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4880));
label_2e81e4:
    // 0x2e81e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e81e8:
    // 0x2e81e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2e81e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2e81ec:
    // 0x2e81ec: 0x28830064  slti        $v1, $a0, 0x64
    ctx->pc = 0x2e81ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)100) ? 1 : 0);
label_2e81f0:
    // 0x2e81f0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2e81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2e81f4:
    // 0x2e81f4: 0x0  nop
    ctx->pc = 0x2e81f4u;
    // NOP
label_2e81f8:
    // 0x2e81f8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e81fc:
    if (ctx->pc == 0x2E81FCu) {
        ctx->pc = 0x2E8200u;
        goto label_2e8200;
    }
    ctx->pc = 0x2E81F8u;
    {
        const bool branch_taken_0x2e81f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e81f8) {
            ctx->pc = 0x2E81E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e81e4;
        }
    }
    ctx->pc = 0x2E8200u;
label_2e8200:
    // 0x2e8200: 0x3e00008  jr          $ra
label_2e8204:
    if (ctx->pc == 0x2E8204u) {
        ctx->pc = 0x2E8208u;
        goto label_2e8208;
    }
    ctx->pc = 0x2E8200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8208u;
label_2e8208:
    // 0x2e8208: 0x0  nop
    ctx->pc = 0x2e8208u;
    // NOP
label_2e820c:
    // 0x2e820c: 0x0  nop
    ctx->pc = 0x2e820cu;
    // NOP
label_2e8210:
    // 0x2e8210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e8210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e8214:
    // 0x2e8214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e8214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e8218:
    // 0x2e8218: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e821c:
    // 0x2e821c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e821cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e8220:
    // 0x2e8220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e8220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e8224:
    // 0x2e8224: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
label_2e8228:
    if (ctx->pc == 0x2E8228u) {
        ctx->pc = 0x2E8228u;
            // 0x2e8228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E822Cu;
        goto label_2e822c;
    }
    ctx->pc = 0x2E8224u;
    {
        const bool branch_taken_0x2e8224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8224u;
            // 0x2e8228: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8224) {
            ctx->pc = 0x2E8294u;
            goto label_2e8294;
        }
    }
    ctx->pc = 0x2E822Cu;
label_2e822c:
    // 0x2e822c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e822cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e8230:
    // 0x2e8230: 0x244230a0  addiu       $v0, $v0, 0x30A0
    ctx->pc = 0x2e8230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12448));
label_2e8234:
    // 0x2e8234: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2e8234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2e8238:
    // 0x2e8238: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x2e8238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_2e823c:
    // 0x2e823c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2e8240:
    if (ctx->pc == 0x2E8240u) {
        ctx->pc = 0x2E8244u;
        goto label_2e8244;
    }
    ctx->pc = 0x2E823Cu;
    {
        const bool branch_taken_0x2e823c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e823c) {
            ctx->pc = 0x2E825Cu;
            goto label_2e825c;
        }
    }
    ctx->pc = 0x2E8244u;
label_2e8244:
    // 0x2e8244: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2e8248:
    if (ctx->pc == 0x2E8248u) {
        ctx->pc = 0x2E824Cu;
        goto label_2e824c;
    }
    ctx->pc = 0x2E8244u;
    {
        const bool branch_taken_0x2e8244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8244) {
            ctx->pc = 0x2E825Cu;
            goto label_2e825c;
        }
    }
    ctx->pc = 0x2E824Cu;
label_2e824c:
    // 0x2e824c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e824cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8250:
    // 0x2e8250: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2e8250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2e8254:
    // 0x2e8254: 0x320f809  jalr        $t9
label_2e8258:
    if (ctx->pc == 0x2E8258u) {
        ctx->pc = 0x2E8258u;
            // 0x2e8258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E825Cu;
        goto label_2e825c;
    }
    ctx->pc = 0x2E8254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E825Cu);
        ctx->pc = 0x2E8258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8254u;
            // 0x2e8258: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E825Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E825Cu; }
            if (ctx->pc != 0x2E825Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E825Cu;
label_2e825c:
    // 0x2e825c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_2e8260:
    if (ctx->pc == 0x2E8260u) {
        ctx->pc = 0x2E8260u;
            // 0x2e8260: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2E8264u;
        goto label_2e8264;
    }
    ctx->pc = 0x2E825Cu;
    {
        const bool branch_taken_0x2e825c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e825c) {
            ctx->pc = 0x2E8260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E825Cu;
            // 0x2e8260: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8280u;
            goto label_2e8280;
        }
    }
    ctx->pc = 0x2E8264u;
label_2e8264:
    // 0x2e8264: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e8264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e8268:
    // 0x2e8268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e826c:
    // 0x2e826c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2e826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2e8270:
    // 0x2e8270: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8274:
    // 0x2e8274: 0xc057a68  jal         func_15E9A0
label_2e8278:
    if (ctx->pc == 0x2E8278u) {
        ctx->pc = 0x2E8278u;
            // 0x2e8278: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E827Cu;
        goto label_2e827c;
    }
    ctx->pc = 0x2E8274u;
    SET_GPR_U32(ctx, 31, 0x2E827Cu);
    ctx->pc = 0x2E8278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8274u;
            // 0x2e8278: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E827Cu; }
        if (ctx->pc != 0x2E827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E827Cu; }
        if (ctx->pc != 0x2E827Cu) { return; }
    }
    ctx->pc = 0x2E827Cu;
label_2e827c:
    // 0x2e827c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e827cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2e8280:
    // 0x2e8280: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e8280u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2e8284:
    // 0x2e8284: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2e8288:
    if (ctx->pc == 0x2E8288u) {
        ctx->pc = 0x2E8288u;
            // 0x2e8288: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E828Cu;
        goto label_2e828c;
    }
    ctx->pc = 0x2E8284u;
    {
        const bool branch_taken_0x2e8284 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e8284) {
            ctx->pc = 0x2E8288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8284u;
            // 0x2e8288: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8298u;
            goto label_2e8298;
        }
    }
    ctx->pc = 0x2E828Cu;
label_2e828c:
    // 0x2e828c: 0xc0400a8  jal         func_1002A0
label_2e8290:
    if (ctx->pc == 0x2E8290u) {
        ctx->pc = 0x2E8290u;
            // 0x2e8290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E8294u;
        goto label_2e8294;
    }
    ctx->pc = 0x2E828Cu;
    SET_GPR_U32(ctx, 31, 0x2E8294u);
    ctx->pc = 0x2E8290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E828Cu;
            // 0x2e8290: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8294u; }
        if (ctx->pc != 0x2E8294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8294u; }
        if (ctx->pc != 0x2E8294u) { return; }
    }
    ctx->pc = 0x2E8294u;
label_2e8294:
    // 0x2e8294: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e8294u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e8298:
    // 0x2e8298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e829c:
    // 0x2e829c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e829cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e82a0:
    // 0x2e82a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e82a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e82a4:
    // 0x2e82a4: 0x3e00008  jr          $ra
label_2e82a8:
    if (ctx->pc == 0x2E82A8u) {
        ctx->pc = 0x2E82A8u;
            // 0x2e82a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E82ACu;
        goto label_2e82ac;
    }
    ctx->pc = 0x2E82A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E82A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82A4u;
            // 0x2e82a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E82ACu;
label_2e82ac:
    // 0x2e82ac: 0x0  nop
    ctx->pc = 0x2e82acu;
    // NOP
label_2e82b0:
    // 0x2e82b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e82b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e82b4:
    // 0x2e82b4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2e82b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_2e82b8:
    // 0x2e82b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e82b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e82bc:
    // 0x2e82bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e82bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e82c0:
    // 0x2e82c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e82c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2e82c4:
    // 0x2e82c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e82c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2e82c8:
    // 0x2e82c8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e82c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2e82cc:
    // 0x2e82cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e82ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e82d0:
    // 0x2e82d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e82d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e82d4:
    // 0x2e82d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e82d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e82d8:
    // 0x2e82d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e82d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e82dc:
    // 0x2e82dc: 0x8c73d130  lw          $s3, -0x2ED0($v1)
    ctx->pc = 0x2e82dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_2e82e0:
    // 0x2e82e0: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x2e82e0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2e82e4:
    // 0x2e82e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e82e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e82e8:
    // 0x2e82e8: 0x8c720e80  lw          $s2, 0xE80($v1)
    ctx->pc = 0x2e82e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2e82ec:
    // 0x2e82ec: 0x10c50111  beq         $a2, $a1, . + 4 + (0x111 << 2)
label_2e82f0:
    if (ctx->pc == 0x2E82F0u) {
        ctx->pc = 0x2E82F0u;
            // 0x2e82f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E82F4u;
        goto label_2e82f4;
    }
    ctx->pc = 0x2E82ECu;
    {
        const bool branch_taken_0x2e82ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E82F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82ECu;
            // 0x2e82f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e82ec) {
            ctx->pc = 0x2E8734u;
            goto label_2e8734;
        }
    }
    ctx->pc = 0x2E82F4u;
label_2e82f4:
    // 0x2e82f4: 0x50c000ff  beql        $a2, $zero, . + 4 + (0xFF << 2)
label_2e82f8:
    if (ctx->pc == 0x2E82F8u) {
        ctx->pc = 0x2E82F8u;
            // 0x2e82f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2E82FCu;
        goto label_2e82fc;
    }
    ctx->pc = 0x2E82F4u;
    {
        const bool branch_taken_0x2e82f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e82f4) {
            ctx->pc = 0x2E82F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E82F4u;
            // 0x2e82f8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E86F4u;
            goto label_2e86f4;
        }
    }
    ctx->pc = 0x2E82FCu;
label_2e82fc:
    // 0x2e82fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e82fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e8300:
    // 0x2e8300: 0x10c3004d  beq         $a2, $v1, . + 4 + (0x4D << 2)
label_2e8304:
    if (ctx->pc == 0x2E8304u) {
        ctx->pc = 0x2E8308u;
        goto label_2e8308;
    }
    ctx->pc = 0x2E8300u;
    {
        const bool branch_taken_0x2e8300 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8300) {
            ctx->pc = 0x2E8438u;
            goto label_2e8438;
        }
    }
    ctx->pc = 0x2E8308u;
label_2e8308:
    // 0x2e8308: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e8308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e830c:
    // 0x2e830c: 0x50c50003  beql        $a2, $a1, . + 4 + (0x3 << 2)
label_2e8310:
    if (ctx->pc == 0x2E8310u) {
        ctx->pc = 0x2E8310u;
            // 0x2e8310: 0x3c0342f0  lui         $v1, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
        ctx->pc = 0x2E8314u;
        goto label_2e8314;
    }
    ctx->pc = 0x2E830Cu;
    {
        const bool branch_taken_0x2e830c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x2e830c) {
            ctx->pc = 0x2E8310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E830Cu;
            // 0x2e8310: 0x3c0342f0  lui         $v1, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E831Cu;
            goto label_2e831c;
        }
    }
    ctx->pc = 0x2E8314u;
label_2e8314:
    // 0x2e8314: 0x10000117  b           . + 4 + (0x117 << 2)
label_2e8318:
    if (ctx->pc == 0x2E8318u) {
        ctx->pc = 0x2E8318u;
            // 0x2e8318: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2E831Cu;
        goto label_2e831c;
    }
    ctx->pc = 0x2E8314u;
    {
        const bool branch_taken_0x2e8314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8314u;
            // 0x2e8318: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8314) {
            ctx->pc = 0x2E8774u;
            goto label_2e8774;
        }
    }
    ctx->pc = 0x2E831Cu;
label_2e831c:
    // 0x2e831c: 0xae2300e0  sw          $v1, 0xE0($s1)
    ctx->pc = 0x2e831cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
label_2e8320:
    // 0x2e8320: 0x92230079  lbu         $v1, 0x79($s1)
    ctx->pc = 0x2e8320u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
label_2e8324:
    // 0x2e8324: 0x54650007  bnel        $v1, $a1, . + 4 + (0x7 << 2)
label_2e8328:
    if (ctx->pc == 0x2E8328u) {
        ctx->pc = 0x2E8328u;
            // 0x2e8328: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2E832Cu;
        goto label_2e832c;
    }
    ctx->pc = 0x2E8324u;
    {
        const bool branch_taken_0x2e8324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e8324) {
            ctx->pc = 0x2E8328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8324u;
            // 0x2e8328: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8344u;
            goto label_2e8344;
        }
    }
    ctx->pc = 0x2E832Cu;
label_2e832c:
    // 0x2e832c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e832cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8330:
    // 0x2e8330: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e8330u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e8334:
    // 0x2e8334: 0x320f809  jalr        $t9
label_2e8338:
    if (ctx->pc == 0x2E8338u) {
        ctx->pc = 0x2E833Cu;
        goto label_2e833c;
    }
    ctx->pc = 0x2E8334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E833Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E833Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E833Cu; }
            if (ctx->pc != 0x2E833Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E833Cu;
label_2e833c:
    // 0x2e833c: 0x1000010c  b           . + 4 + (0x10C << 2)
label_2e8340:
    if (ctx->pc == 0x2E8340u) {
        ctx->pc = 0x2E8344u;
        goto label_2e8344;
    }
    ctx->pc = 0x2E833Cu;
    {
        const bool branch_taken_0x2e833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e833c) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E8344u;
label_2e8344:
    // 0x2e8344: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e8344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e8348:
    // 0x2e8348: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_2e834c:
    if (ctx->pc == 0x2E834Cu) {
        ctx->pc = 0x2E834Cu;
            // 0x2e834c: 0x8e430cb4  lw          $v1, 0xCB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
        ctx->pc = 0x2E8350u;
        goto label_2e8350;
    }
    ctx->pc = 0x2E8348u;
    {
        const bool branch_taken_0x2e8348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8348) {
            ctx->pc = 0x2E834Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8348u;
            // 0x2e834c: 0x8e430cb4  lw          $v1, 0xCB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8360u;
            goto label_2e8360;
        }
    }
    ctx->pc = 0x2E8350u;
label_2e8350:
    // 0x2e8350: 0x8e430cb4  lw          $v1, 0xCB4($s2)
    ctx->pc = 0x2e8350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
label_2e8354:
    // 0x2e8354: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2e8354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2e8358:
    // 0x2e8358: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e835c:
    if (ctx->pc == 0x2E835Cu) {
        ctx->pc = 0x2E835Cu;
            // 0x2e835c: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x2E8360u;
        goto label_2e8360;
    }
    ctx->pc = 0x2E8358u;
    {
        const bool branch_taken_0x2e8358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E835Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8358u;
            // 0x2e835c: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8358) {
            ctx->pc = 0x2E8368u;
            goto label_2e8368;
        }
    }
    ctx->pc = 0x2E8360u;
label_2e8360:
    // 0x2e8360: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2e8360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e8364:
    // 0x2e8364: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2e8364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2e8368:
    // 0x2e8368: 0x10600101  beqz        $v1, . + 4 + (0x101 << 2)
label_2e836c:
    if (ctx->pc == 0x2E836Cu) {
        ctx->pc = 0x2E8370u;
        goto label_2e8370;
    }
    ctx->pc = 0x2E8368u;
    {
        const bool branch_taken_0x2e8368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8368) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E8370u;
label_2e8370:
    // 0x2e8370: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e8370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e8374:
    // 0x2e8374: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e8374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e8378:
    // 0x2e8378: 0x320f809  jalr        $t9
label_2e837c:
    if (ctx->pc == 0x2E837Cu) {
        ctx->pc = 0x2E837Cu;
            // 0x2e837c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E8380u;
        goto label_2e8380;
    }
    ctx->pc = 0x2E8378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E8380u);
        ctx->pc = 0x2E837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8378u;
            // 0x2e837c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E8380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E8380u; }
            if (ctx->pc != 0x2E8380u) { return; }
        }
        }
    }
    ctx->pc = 0x2E8380u;
label_2e8380:
    // 0x2e8380: 0x3c0445ea  lui         $a0, 0x45EA
    ctx->pc = 0x2e8380u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17898 << 16));
label_2e8384:
    // 0x2e8384: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e8388:
    // 0x2e8388: 0x34856000  ori         $a1, $a0, 0x6000
    ctx->pc = 0x2e8388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24576);
label_2e838c:
    // 0x2e838c: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x2e838cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2e8390:
    // 0x2e8390: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e8390u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8394:
    // 0x2e8394: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x2e8394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_2e8398:
    // 0x2e8398: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e8398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e839c:
    // 0x2e839c: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_2e83a0:
    if (ctx->pc == 0x2E83A0u) {
        ctx->pc = 0x2E83A0u;
            // 0x2e83a0: 0x3c03456a  lui         $v1, 0x456A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17770 << 16));
        ctx->pc = 0x2E83A4u;
        goto label_2e83a4;
    }
    ctx->pc = 0x2E839Cu;
    {
        const bool branch_taken_0x2e839c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e839c) {
            ctx->pc = 0x2E83A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E839Cu;
            // 0x2e83a0: 0x3c03456a  lui         $v1, 0x456A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17770 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E83ACu;
            goto label_2e83ac;
        }
    }
    ctx->pc = 0x2E83A4u;
label_2e83a4:
    // 0x2e83a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e83a8:
    if (ctx->pc == 0x2E83A8u) {
        ctx->pc = 0x2E83A8u;
            // 0x2e83a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E83ACu;
        goto label_2e83ac;
    }
    ctx->pc = 0x2E83A4u;
    {
        const bool branch_taken_0x2e83a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83A4u;
            // 0x2e83a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83a4) {
            ctx->pc = 0x2E83B8u;
            goto label_2e83b8;
        }
    }
    ctx->pc = 0x2E83ACu;
label_2e83ac:
    // 0x2e83ac: 0x34636000  ori         $v1, $v1, 0x6000
    ctx->pc = 0x2e83acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24576);
label_2e83b0:
    // 0x2e83b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e83b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e83b4:
    // 0x2e83b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e83b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e83b8:
    // 0x2e83b8: 0x30e600ff  andi        $a2, $a3, 0xFF
    ctx->pc = 0x2e83b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2e83bc:
    // 0x2e83bc: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x2e83bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e83c0:
    // 0x2e83c0: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x2e83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_2e83c4:
    // 0x2e83c4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x2e83c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2e83c8:
    // 0x2e83c8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e83c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2e83cc:
    // 0x2e83cc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2e83ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2e83d0:
    // 0x2e83d0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x2e83d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_2e83d4:
    // 0x2e83d4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2e83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2e83d8:
    // 0x2e83d8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2e83d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2e83dc:
    // 0x2e83dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2e83e0:
    if (ctx->pc == 0x2E83E0u) {
        ctx->pc = 0x2E83E0u;
            // 0x2e83e0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x2E83E4u;
        goto label_2e83e4;
    }
    ctx->pc = 0x2E83DCu;
    {
        const bool branch_taken_0x2e83dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E83E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E83DCu;
            // 0x2e83e0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e83dc) {
            ctx->pc = 0x2E83F8u;
            goto label_2e83f8;
        }
    }
    ctx->pc = 0x2E83E4u;
label_2e83e4:
    // 0x2e83e4: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2e83e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2e83e8:
    // 0x2e83e8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2e83e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_2e83ec:
    // 0x2e83ec: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2e83ecu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_2e83f0:
    // 0x2e83f0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2e83f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_2e83f4:
    // 0x2e83f4: 0x0  nop
    ctx->pc = 0x2e83f4u;
    // NOP
label_2e83f8:
    // 0x2e83f8: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x2e83f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e83fc:
    // 0x2e83fc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x2e83fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_2e8400:
    // 0x2e8400: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2e8404:
    if (ctx->pc == 0x2E8404u) {
        ctx->pc = 0x2E8408u;
        goto label_2e8408;
    }
    ctx->pc = 0x2E8400u;
    {
        const bool branch_taken_0x2e8400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8400) {
            ctx->pc = 0x2E8418u;
            goto label_2e8418;
        }
    }
    ctx->pc = 0x2E8408u;
label_2e8408:
    // 0x2e8408: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x2e8408u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2e840c:
    // 0x2e840c: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x2e840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
label_2e8410:
    // 0x2e8410: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x2e8410u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_2e8414:
    // 0x2e8414: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x2e8414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_2e8418:
    // 0x2e8418: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x2e8418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2e841c:
    // 0x2e841c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x2e841cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e8420:
    // 0x2e8420: 0x92230055  lbu         $v1, 0x55($s1)
    ctx->pc = 0x2e8420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2e8424:
    // 0x2e8424: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x2e8424u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e8428:
    // 0x2e8428: 0x5460ffe4  bnel        $v1, $zero, . + 4 + (-0x1C << 2)
label_2e842c:
    if (ctx->pc == 0x2E842Cu) {
        ctx->pc = 0x2E842Cu;
            // 0x2e842c: 0x30e600ff  andi        $a2, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E8430u;
        goto label_2e8430;
    }
    ctx->pc = 0x2E8428u;
    {
        const bool branch_taken_0x2e8428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8428) {
            ctx->pc = 0x2E842Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8428u;
            // 0x2e842c: 0x30e600ff  andi        $a2, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E83BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e83bc;
        }
    }
    ctx->pc = 0x2E8430u;
label_2e8430:
    // 0x2e8430: 0x100000cf  b           . + 4 + (0xCF << 2)
label_2e8434:
    if (ctx->pc == 0x2E8434u) {
        ctx->pc = 0x2E8438u;
        goto label_2e8438;
    }
    ctx->pc = 0x2E8430u;
    {
        const bool branch_taken_0x2e8430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8430) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E8438u;
label_2e8438:
    // 0x2e8438: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e843c:
    // 0x2e843c: 0x946414a0  lhu         $a0, 0x14A0($v1)
    ctx->pc = 0x2e843cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 5280)));
label_2e8440:
    // 0x2e8440: 0x9623007c  lhu         $v1, 0x7C($s1)
    ctx->pc = 0x2e8440u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 124)));
label_2e8444:
    // 0x2e8444: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_2e8448:
    if (ctx->pc == 0x2E8448u) {
        ctx->pc = 0x2E8448u;
            // 0x2e8448: 0x30b400ff  andi        $s4, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E844Cu;
        goto label_2e844c;
    }
    ctx->pc = 0x2E8444u;
    {
        const bool branch_taken_0x2e8444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E8448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8444u;
            // 0x2e8448: 0x30b400ff  andi        $s4, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8444) {
            ctx->pc = 0x2E8458u;
            goto label_2e8458;
        }
    }
    ctx->pc = 0x2E844Cu;
label_2e844c:
    // 0x2e844c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e844cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2e8450:
    // 0x2e8450: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_2e8454:
    if (ctx->pc == 0x2E8454u) {
        ctx->pc = 0x2E8454u;
            // 0x2e8454: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E8458u;
        goto label_2e8458;
    }
    ctx->pc = 0x2E8450u;
    {
        const bool branch_taken_0x2e8450 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e8450) {
            ctx->pc = 0x2E8454u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8450u;
            // 0x2e8454: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8470u;
            goto label_2e8470;
        }
    }
    ctx->pc = 0x2E8458u;
label_2e8458:
    // 0x2e8458: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2e8458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e845c:
    // 0x2e845c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e845cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e8460:
    // 0x2e8460: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e8460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e8464:
    // 0x2e8464: 0x320f809  jalr        $t9
label_2e8468:
    if (ctx->pc == 0x2E8468u) {
        ctx->pc = 0x2E8468u;
            // 0x2e8468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2E846Cu;
        goto label_2e846c;
    }
    ctx->pc = 0x2E8464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E846Cu);
        ctx->pc = 0x2E8468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8464u;
            // 0x2e8468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E846Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E846Cu; }
            if (ctx->pc != 0x2E846Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E846Cu;
label_2e846c:
    // 0x2e846c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x2e846cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2e8470:
    // 0x2e8470: 0x146000bf  bnez        $v1, . + 4 + (0xBF << 2)
label_2e8474:
    if (ctx->pc == 0x2E8474u) {
        ctx->pc = 0x2E8478u;
        goto label_2e8478;
    }
    ctx->pc = 0x2E8470u;
    {
        const bool branch_taken_0x2e8470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8470) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E8478u;
label_2e8478:
    // 0x2e8478: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x2e8478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2e847c:
    // 0x2e847c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2e847cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e8480:
    // 0x2e8480: 0x50830030  beql        $a0, $v1, . + 4 + (0x30 << 2)
label_2e8484:
    if (ctx->pc == 0x2E8484u) {
        ctx->pc = 0x2E8484u;
            // 0x2e8484: 0x92230084  lbu         $v1, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->pc = 0x2E8488u;
        goto label_2e8488;
    }
    ctx->pc = 0x2E8480u;
    {
        const bool branch_taken_0x2e8480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e8480) {
            ctx->pc = 0x2E8484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8480u;
            // 0x2e8484: 0x92230084  lbu         $v1, 0x84($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8544u;
            goto label_2e8544;
        }
    }
    ctx->pc = 0x2E8488u;
label_2e8488:
    // 0x2e8488: 0x92240084  lbu         $a0, 0x84($s1)
    ctx->pc = 0x2e8488u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
label_2e848c:
    // 0x2e848c: 0x30830040  andi        $v1, $a0, 0x40
    ctx->pc = 0x2e848cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_2e8490:
    // 0x2e8490: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_2e8494:
    if (ctx->pc == 0x2E8494u) {
        ctx->pc = 0x2E8494u;
            // 0x2e8494: 0x8e430cb4  lw          $v1, 0xCB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
        ctx->pc = 0x2E8498u;
        goto label_2e8498;
    }
    ctx->pc = 0x2E8490u;
    {
        const bool branch_taken_0x2e8490 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8490) {
            ctx->pc = 0x2E8494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8490u;
            // 0x2e8494: 0x8e430cb4  lw          $v1, 0xCB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E84B8u;
            goto label_2e84b8;
        }
    }
    ctx->pc = 0x2E8498u;
label_2e8498:
    // 0x2e8498: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e8498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e849c:
    // 0x2e849c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2e849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2e84a0:
    // 0x2e84a0: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x2e84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_2e84a4:
    // 0x2e84a4: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2e84a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e84a8:
    // 0x2e84a8: 0x5020000b  beql        $at, $zero, . + 4 + (0xB << 2)
label_2e84ac:
    if (ctx->pc == 0x2E84ACu) {
        ctx->pc = 0x2E84ACu;
            // 0x2e84ac: 0x8e270088  lw          $a3, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x2E84B0u;
        goto label_2e84b0;
    }
    ctx->pc = 0x2E84A8u;
    {
        const bool branch_taken_0x2e84a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e84a8) {
            ctx->pc = 0x2E84ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84A8u;
            // 0x2e84ac: 0x8e270088  lw          $a3, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E84D8u;
            goto label_2e84d8;
        }
    }
    ctx->pc = 0x2E84B0u;
label_2e84b0:
    // 0x2e84b0: 0x100000af  b           . + 4 + (0xAF << 2)
label_2e84b4:
    if (ctx->pc == 0x2E84B4u) {
        ctx->pc = 0x2E84B4u;
            // 0x2e84b4: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x2E84B8u;
        goto label_2e84b8;
    }
    ctx->pc = 0x2E84B0u;
    {
        const bool branch_taken_0x2e84b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E84B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84B0u;
            // 0x2e84b4: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84b0) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E84B8u;
label_2e84b8:
    // 0x2e84b8: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2e84b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2e84bc:
    // 0x2e84bc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2e84bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2e84c0:
    // 0x2e84c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e84c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e84c4:
    // 0x2e84c4: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2e84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2e84c8:
    // 0x2e84c8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e84c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2e84cc:
    // 0x2e84cc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x2e84ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2e84d0:
    // 0x2e84d0: 0xa2230084  sb          $v1, 0x84($s1)
    ctx->pc = 0x2e84d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 3));
label_2e84d4:
    // 0x2e84d4: 0x8e270088  lw          $a3, 0x88($s1)
    ctx->pc = 0x2e84d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2e84d8:
    // 0x2e84d8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x2e84d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_2e84dc:
    // 0x2e84dc: 0x10e30016  beq         $a3, $v1, . + 4 + (0x16 << 2)
label_2e84e0:
    if (ctx->pc == 0x2E84E0u) {
        ctx->pc = 0x2E84E0u;
            // 0x2e84e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E84E4u;
        goto label_2e84e4;
    }
    ctx->pc = 0x2E84DCu;
    {
        const bool branch_taken_0x2e84dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E84E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E84DCu;
            // 0x2e84e0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e84dc) {
            ctx->pc = 0x2E8538u;
            goto label_2e8538;
        }
    }
    ctx->pc = 0x2E84E4u;
label_2e84e4:
    // 0x2e84e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e84e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e84e8:
    // 0x2e84e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e84e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e84ec:
    // 0x2e84ec: 0x8c660ea4  lw          $a2, 0xEA4($v1)
    ctx->pc = 0x2e84ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_2e84f0:
    // 0x2e84f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2e84f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2e84f4:
    // 0x2e84f4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2e84f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2e84f8:
    // 0x2e84f8: 0x2465007a  addiu       $a1, $v1, 0x7A
    ctx->pc = 0x2e84f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 122));
label_2e84fc:
    // 0x2e84fc: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x2e84fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2e8500:
    // 0x2e8500: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e8500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e8504:
    // 0x2e8504: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e8504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2e8508:
    // 0x2e8508: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x2e8508u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_2e850c:
    // 0x2e850c: 0x54e30003  bnel        $a3, $v1, . + 4 + (0x3 << 2)
label_2e8510:
    if (ctx->pc == 0x2E8510u) {
        ctx->pc = 0x2E8510u;
            // 0x2e8510: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2E8514u;
        goto label_2e8514;
    }
    ctx->pc = 0x2E850Cu;
    {
        const bool branch_taken_0x2e850c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e850c) {
            ctx->pc = 0x2E8510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E850Cu;
            // 0x2e8510: 0x80a30000  lb          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E851Cu;
            goto label_2e851c;
        }
    }
    ctx->pc = 0x2E8514u;
label_2e8514:
    // 0x2e8514: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e8518:
    if (ctx->pc == 0x2E8518u) {
        ctx->pc = 0x2E8518u;
            // 0x2e8518: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2E851Cu;
        goto label_2e851c;
    }
    ctx->pc = 0x2E8514u;
    {
        const bool branch_taken_0x2e8514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8514u;
            // 0x2e8518: 0x64080001  daddiu      $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8514) {
            ctx->pc = 0x2E853Cu;
            goto label_2e853c;
        }
    }
    ctx->pc = 0x2E851Cu;
label_2e851c:
    // 0x2e851c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2e851cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2e8520:
    // 0x2e8520: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2e8520u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_2e8524:
    // 0x2e8524: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2e8524u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2e8528:
    // 0x2e8528: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
label_2e852c:
    if (ctx->pc == 0x2E852Cu) {
        ctx->pc = 0x2E852Cu;
            // 0x2e852c: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2E8530u;
        goto label_2e8530;
    }
    ctx->pc = 0x2E8528u;
    {
        const bool branch_taken_0x2e8528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e8528) {
            ctx->pc = 0x2E852Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8528u;
            // 0x2e852c: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8500;
        }
    }
    ctx->pc = 0x2E8530u;
label_2e8530:
    // 0x2e8530: 0x10000003  b           . + 4 + (0x3 << 2)
label_2e8534:
    if (ctx->pc == 0x2E8534u) {
        ctx->pc = 0x2E8534u;
            // 0x2e8534: 0x311400ff  andi        $s4, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x2E8538u;
        goto label_2e8538;
    }
    ctx->pc = 0x2E8530u;
    {
        const bool branch_taken_0x2e8530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8530u;
            // 0x2e8534: 0x311400ff  andi        $s4, $t0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8530) {
            ctx->pc = 0x2E8540u;
            goto label_2e8540;
        }
    }
    ctx->pc = 0x2E8538u;
label_2e8538:
    // 0x2e8538: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x2e8538u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2e853c:
    // 0x2e853c: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x2e853cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2e8540:
    // 0x2e8540: 0x92230084  lbu         $v1, 0x84($s1)
    ctx->pc = 0x2e8540u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
label_2e8544:
    // 0x2e8544: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2e8544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2e8548:
    // 0x2e8548: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2e854c:
    if (ctx->pc == 0x2E854Cu) {
        ctx->pc = 0x2E8550u;
        goto label_2e8550;
    }
    ctx->pc = 0x2E8548u;
    {
        const bool branch_taken_0x2e8548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8548) {
            ctx->pc = 0x2E8554u;
            goto label_2e8554;
        }
    }
    ctx->pc = 0x2E8550u;
label_2e8550:
    // 0x2e8550: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2e8550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e8554:
    // 0x2e8554: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2e8554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2e8558:
    // 0x2e8558: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e8558u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e855c:
    // 0x2e855c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2e855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2e8560:
    // 0x2e8560: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x2e8560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e8564:
    // 0x2e8564: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2e8564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8568:
    // 0x2e8568: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e8568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e856c:
    // 0x2e856c: 0xe6200080  swc1        $f0, 0x80($s1)
    ctx->pc = 0x2e856cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 128), bits); }
label_2e8570:
    // 0x2e8570: 0x32b3ffff  andi        $s3, $s5, 0xFFFF
    ctx->pc = 0x2e8570u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
label_2e8574:
    // 0x2e8574: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x2e8574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2e8578:
    // 0x2e8578: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2e8578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2e857c:
    // 0x2e857c: 0x94660064  lhu         $a2, 0x64($v1)
    ctx->pc = 0x2e857cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_2e8580:
    // 0x2e8580: 0x2472006c  addiu       $s2, $v1, 0x6C
    ctx->pc = 0x2e8580u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
label_2e8584:
    // 0x2e8584: 0xc6210080  lwc1        $f1, 0x80($s1)
    ctx->pc = 0x2e8584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8588:
    // 0x2e8588: 0x9463006c  lhu         $v1, 0x6C($v1)
    ctx->pc = 0x2e8588u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 108)));
label_2e858c:
    // 0x2e858c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2e858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2e8590:
    // 0x2e8590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e8590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8594:
    // 0x2e8594: 0x0  nop
    ctx->pc = 0x2e8594u;
    // NOP
label_2e8598:
    // 0x2e8598: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e8598u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e859c:
    // 0x2e859c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e859cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e85a0:
    // 0x2e85a0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_2e85a4:
    if (ctx->pc == 0x2E85A4u) {
        ctx->pc = 0x2E85A8u;
        goto label_2e85a8;
    }
    ctx->pc = 0x2E85A0u;
    {
        const bool branch_taken_0x2e85a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e85a0) {
            ctx->pc = 0x2E85B8u;
            goto label_2e85b8;
        }
    }
    ctx->pc = 0x2E85A8u;
label_2e85a8:
    // 0x2e85a8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2e85a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e85ac:
    // 0x2e85ac: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2e85b0:
    if (ctx->pc == 0x2E85B0u) {
        ctx->pc = 0x2E85B0u;
            // 0x2e85b0: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2E85B4u;
        goto label_2e85b4;
    }
    ctx->pc = 0x2E85ACu;
    {
        const bool branch_taken_0x2e85ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85ACu;
            // 0x2e85b0: 0x3070ffff  andi        $s0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85ac) {
            ctx->pc = 0x2E8698u;
            goto label_2e8698;
        }
    }
    ctx->pc = 0x2E85B4u;
label_2e85b4:
    // 0x2e85b4: 0x0  nop
    ctx->pc = 0x2e85b4u;
    // NOP
label_2e85b8:
    // 0x2e85b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e85b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e85bc:
    // 0x2e85bc: 0x2632804  sllv        $a1, $v1, $s3
    ctx->pc = 0x2e85bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_2e85c0:
    // 0x2e85c0: 0x92230084  lbu         $v1, 0x84($s1)
    ctx->pc = 0x2e85c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
label_2e85c4:
    // 0x2e85c4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x2e85c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_2e85c8:
    // 0x2e85c8: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
label_2e85cc:
    if (ctx->pc == 0x2E85CCu) {
        ctx->pc = 0x2E85D0u;
        goto label_2e85d0;
    }
    ctx->pc = 0x2E85C8u;
    {
        const bool branch_taken_0x2e85c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e85c8) {
            ctx->pc = 0x2E8698u;
            goto label_2e8698;
        }
    }
    ctx->pc = 0x2E85D0u;
label_2e85d0:
    // 0x2e85d0: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_2e85d4:
    if (ctx->pc == 0x2E85D4u) {
        ctx->pc = 0x2E85D4u;
            // 0x2e85d4: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x2E85D8u;
        goto label_2e85d8;
    }
    ctx->pc = 0x2E85D0u;
    {
        const bool branch_taken_0x2e85d0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x2e85d0) {
            ctx->pc = 0x2E85D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85D0u;
            // 0x2e85d4: 0x62042  srl         $a0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E85E4u;
            goto label_2e85e4;
        }
    }
    ctx->pc = 0x2E85D8u;
label_2e85d8:
    // 0x2e85d8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2e85d8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e85dc:
    // 0x2e85dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e85e0:
    if (ctx->pc == 0x2E85E0u) {
        ctx->pc = 0x2E85E0u;
            // 0x2e85e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E85E4u;
        goto label_2e85e4;
    }
    ctx->pc = 0x2E85DCu;
    {
        const bool branch_taken_0x2e85dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E85E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E85DCu;
            // 0x2e85e0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e85dc) {
            ctx->pc = 0x2E85FCu;
            goto label_2e85fc;
        }
    }
    ctx->pc = 0x2E85E4u;
label_2e85e4:
    // 0x2e85e4: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x2e85e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_2e85e8:
    // 0x2e85e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e85e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2e85ec:
    // 0x2e85ec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e85ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e85f0:
    // 0x2e85f0: 0x0  nop
    ctx->pc = 0x2e85f0u;
    // NOP
label_2e85f4:
    // 0x2e85f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e85f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e85f8:
    // 0x2e85f8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e85f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e85fc:
    // 0x2e85fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e85fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8600:
    // 0x2e8600: 0x45010025  bc1t        . + 4 + (0x25 << 2)
label_2e8604:
    if (ctx->pc == 0x2E8604u) {
        ctx->pc = 0x2E8608u;
        goto label_2e8608;
    }
    ctx->pc = 0x2E8600u;
    {
        const bool branch_taken_0x2e8600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e8600) {
            ctx->pc = 0x2E8698u;
            goto label_2e8698;
        }
    }
    ctx->pc = 0x2E8608u;
label_2e8608:
    // 0x2e8608: 0x92230084  lbu         $v1, 0x84($s1)
    ctx->pc = 0x2e8608u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 132)));
label_2e860c:
    // 0x2e860c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2e860cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2e8610:
    // 0x2e8610: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e8610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e8614:
    // 0x2e8614: 0x12800020  beqz        $s4, . + 4 + (0x20 << 2)
label_2e8618:
    if (ctx->pc == 0x2E8618u) {
        ctx->pc = 0x2E8618u;
            // 0x2e8618: 0xa2230084  sb          $v1, 0x84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2E861Cu;
        goto label_2e861c;
    }
    ctx->pc = 0x2E8614u;
    {
        const bool branch_taken_0x2e8614 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8614u;
            // 0x2e8618: 0xa2230084  sb          $v1, 0x84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8614) {
            ctx->pc = 0x2E8698u;
            goto label_2e8698;
        }
    }
    ctx->pc = 0x2E861Cu;
label_2e861c:
    // 0x2e861c: 0x92220054  lbu         $v0, 0x54($s1)
    ctx->pc = 0x2e861cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8620:
    // 0x2e8620: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2e8620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2e8624:
    // 0x2e8624: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2e8628:
    if (ctx->pc == 0x2E8628u) {
        ctx->pc = 0x2E862Cu;
        goto label_2e862c;
    }
    ctx->pc = 0x2E8624u;
    {
        const bool branch_taken_0x2e8624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8624) {
            ctx->pc = 0x2E8648u;
            goto label_2e8648;
        }
    }
    ctx->pc = 0x2E862Cu;
label_2e862c:
    // 0x2e862c: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_2e8630:
    if (ctx->pc == 0x2E8630u) {
        ctx->pc = 0x2E8634u;
        goto label_2e8634;
    }
    ctx->pc = 0x2E862Cu;
    {
        const bool branch_taken_0x2e862c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e862c) {
            ctx->pc = 0x2E8648u;
            goto label_2e8648;
        }
    }
    ctx->pc = 0x2E8634u;
label_2e8634:
    // 0x2e8634: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x2e8634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_2e8638:
    // 0x2e8638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e863c:
    // 0x2e863c: 0xc122d2c  jal         func_48B4B0
label_2e8640:
    if (ctx->pc == 0x2E8640u) {
        ctx->pc = 0x2E8640u;
            // 0x2e8640: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->pc = 0x2E8644u;
        goto label_2e8644;
    }
    ctx->pc = 0x2E863Cu;
    SET_GPR_U32(ctx, 31, 0x2E8644u);
    ctx->pc = 0x2E8640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E863Cu;
            // 0x2e8640: 0x262600d0  addiu       $a2, $s1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8644u; }
        if (ctx->pc != 0x2E8644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8644u; }
        if (ctx->pc != 0x2E8644u) { return; }
    }
    ctx->pc = 0x2E8644u;
label_2e8644:
    // 0x2e8644: 0x0  nop
    ctx->pc = 0x2e8644u;
    // NOP
label_2e8648:
    // 0x2e8648: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2e8648u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2e864c:
    // 0x2e864c: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x2e864cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_2e8650:
    // 0x2e8650: 0x2625007c  addiu       $a1, $s1, 0x7C
    ctx->pc = 0x2e8650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_2e8654:
    // 0x2e8654: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e8654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2e8658:
    // 0x2e8658: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x2e8658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_2e865c:
    // 0x2e865c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e865cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2e8660:
    // 0x2e8660: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2e8660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2e8664:
    // 0x2e8664: 0x92260054  lbu         $a2, 0x54($s1)
    ctx->pc = 0x2e8664u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8668:
    // 0x2e8668: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2e8668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2e866c:
    // 0x2e866c: 0x92240078  lbu         $a0, 0x78($s1)
    ctx->pc = 0x2e866cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 120)));
label_2e8670:
    // 0x2e8670: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x2e8670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_2e8674:
    // 0x2e8674: 0x30c60002  andi        $a2, $a2, 0x2
    ctx->pc = 0x2e8674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_2e8678:
    // 0x2e8678: 0x8e2800f4  lw          $t0, 0xF4($s1)
    ctx->pc = 0x2e8678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_2e867c:
    // 0x2e867c: 0x8e2900ec  lw          $t1, 0xEC($s1)
    ctx->pc = 0x2e867cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_2e8680:
    // 0x2e8680: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x2e8680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_2e8684:
    // 0x2e8684: 0x8e2a00f8  lw          $t2, 0xF8($s1)
    ctx->pc = 0x2e8684u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_2e8688:
    // 0x2e8688: 0x922b0079  lbu         $t3, 0x79($s1)
    ctx->pc = 0x2e8688u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 121)));
label_2e868c:
    // 0x2e868c: 0xc0bb514  jal         func_2ED450
label_2e8690:
    if (ctx->pc == 0x2E8690u) {
        ctx->pc = 0x2E8690u;
            // 0x2e8690: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2E8694u;
        goto label_2e8694;
    }
    ctx->pc = 0x2E868Cu;
    SET_GPR_U32(ctx, 31, 0x2E8694u);
    ctx->pc = 0x2E8690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E868Cu;
            // 0x2e8690: 0x433821  addu        $a3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED450u;
    if (runtime->hasFunction(0x2ED450u)) {
        auto targetFn = runtime->lookupFunction(0x2ED450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8694u; }
        if (ctx->pc != 0x2E8694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED450_0x2ed450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8694u; }
        if (ctx->pc != 0x2E8694u) { return; }
    }
    ctx->pc = 0x2E8694u;
label_2e8694:
    // 0x2e8694: 0x0  nop
    ctx->pc = 0x2e8694u;
    // NOP
label_2e8698:
    // 0x2e8698: 0x92240055  lbu         $a0, 0x55($s1)
    ctx->pc = 0x2e8698u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 85)));
label_2e869c:
    // 0x2e869c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x2e869cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2e86a0:
    // 0x2e86a0: 0x3075ffff  andi        $s5, $v1, 0xFFFF
    ctx->pc = 0x2e86a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e86a4:
    // 0x2e86a4: 0x2a4182a  slt         $v1, $s5, $a0
    ctx->pc = 0x2e86a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2e86a8:
    // 0x2e86a8: 0x5460ffb2  bnel        $v1, $zero, . + 4 + (-0x4E << 2)
label_2e86ac:
    if (ctx->pc == 0x2E86ACu) {
        ctx->pc = 0x2E86ACu;
            // 0x2e86ac: 0x32b3ffff  andi        $s3, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x2E86B0u;
        goto label_2e86b0;
    }
    ctx->pc = 0x2E86A8u;
    {
        const bool branch_taken_0x2e86a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e86a8) {
            ctx->pc = 0x2E86ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86A8u;
            // 0x2e86ac: 0x32b3ffff  andi        $s3, $s5, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8574u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e8574;
        }
    }
    ctx->pc = 0x2E86B0u;
label_2e86b0:
    // 0x2e86b0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2e86b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_2e86b4:
    // 0x2e86b4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2e86b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2e86b8:
    // 0x2e86b8: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
label_2e86bc:
    if (ctx->pc == 0x2E86BCu) {
        ctx->pc = 0x2E86C0u;
        goto label_2e86c0;
    }
    ctx->pc = 0x2E86B8u;
    {
        const bool branch_taken_0x2e86b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e86b8) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E86C0u;
label_2e86c0:
    // 0x2e86c0: 0x92230054  lbu         $v1, 0x54($s1)
    ctx->pc = 0x2e86c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e86c4:
    // 0x2e86c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2e86c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2e86c8:
    // 0x2e86c8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2e86cc:
    if (ctx->pc == 0x2E86CCu) {
        ctx->pc = 0x2E86CCu;
            // 0x2e86cc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x2E86D0u;
        goto label_2e86d0;
    }
    ctx->pc = 0x2E86C8u;
    {
        const bool branch_taken_0x2e86c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86c8) {
            ctx->pc = 0x2E86CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86C8u;
            // 0x2e86cc: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E86DCu;
            goto label_2e86dc;
        }
    }
    ctx->pc = 0x2E86D0u;
label_2e86d0:
    // 0x2e86d0: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2e86d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_2e86d4:
    // 0x2e86d4: 0x10000026  b           . + 4 + (0x26 << 2)
label_2e86d8:
    if (ctx->pc == 0x2E86D8u) {
        ctx->pc = 0x2E86D8u;
            // 0x2e86d8: 0xa2200084  sb          $zero, 0x84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2E86DCu;
        goto label_2e86dc;
    }
    ctx->pc = 0x2E86D4u;
    {
        const bool branch_taken_0x2e86d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E86D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86D4u;
            // 0x2e86d8: 0xa2200084  sb          $zero, 0x84($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e86d4) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E86DCu;
label_2e86dc:
    // 0x2e86dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e86dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e86e0:
    // 0x2e86e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e86e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e86e4:
    // 0x2e86e4: 0x320f809  jalr        $t9
label_2e86e8:
    if (ctx->pc == 0x2E86E8u) {
        ctx->pc = 0x2E86E8u;
            // 0x2e86e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E86ECu;
        goto label_2e86ec;
    }
    ctx->pc = 0x2E86E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E86ECu);
        ctx->pc = 0x2E86E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E86E4u;
            // 0x2e86e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E86ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E86ECu; }
            if (ctx->pc != 0x2E86ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2E86ECu;
label_2e86ec:
    // 0x2e86ec: 0x10000020  b           . + 4 + (0x20 << 2)
label_2e86f0:
    if (ctx->pc == 0x2E86F0u) {
        ctx->pc = 0x2E86F4u;
        goto label_2e86f4;
    }
    ctx->pc = 0x2E86ECu;
    {
        const bool branch_taken_0x2e86ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e86ec) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E86F4u;
label_2e86f4:
    // 0x2e86f4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2e86f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2e86f8:
    // 0x2e86f8: 0xa625007c  sh          $a1, 0x7C($s1)
    ctx->pc = 0x2e86f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 5));
label_2e86fc:
    // 0x2e86fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e86fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e8700:
    // 0x2e8700: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2e8700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2e8704:
    // 0x2e8704: 0xc62100e0  lwc1        $f1, 0xE0($s1)
    ctx->pc = 0x2e8704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e8708:
    // 0x2e8708: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x2e8708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e870c:
    // 0x2e870c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2e870cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2e8710:
    // 0x2e8710: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e8710u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e8714:
    // 0x2e8714: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_2e8718:
    if (ctx->pc == 0x2E8718u) {
        ctx->pc = 0x2E8718u;
            // 0x2e8718: 0xe62100e0  swc1        $f1, 0xE0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        ctx->pc = 0x2E871Cu;
        goto label_2e871c;
    }
    ctx->pc = 0x2E8714u;
    {
        const bool branch_taken_0x2e8714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E8718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8714u;
            // 0x2e8718: 0xe62100e0  swc1        $f1, 0xE0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8714) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E871Cu;
label_2e871c:
    // 0x2e871c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e871cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8720:
    // 0x2e8720: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e8720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e8724:
    // 0x2e8724: 0x320f809  jalr        $t9
label_2e8728:
    if (ctx->pc == 0x2E8728u) {
        ctx->pc = 0x2E872Cu;
        goto label_2e872c;
    }
    ctx->pc = 0x2E8724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E872Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E872Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E872Cu; }
            if (ctx->pc != 0x2E872Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E872Cu;
label_2e872c:
    // 0x2e872c: 0x10000010  b           . + 4 + (0x10 << 2)
label_2e8730:
    if (ctx->pc == 0x2E8730u) {
        ctx->pc = 0x2E8734u;
        goto label_2e8734;
    }
    ctx->pc = 0x2E872Cu;
    {
        const bool branch_taken_0x2e872c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e872c) {
            ctx->pc = 0x2E8770u;
            goto label_2e8770;
        }
    }
    ctx->pc = 0x2E8734u;
label_2e8734:
    // 0x2e8734: 0x92220054  lbu         $v0, 0x54($s1)
    ctx->pc = 0x2e8734u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 84)));
label_2e8738:
    // 0x2e8738: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2e8738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2e873c:
    // 0x2e873c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2e8740:
    if (ctx->pc == 0x2E8740u) {
        ctx->pc = 0x2E8740u;
            // 0x2e8740: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x2E8744u;
        goto label_2e8744;
    }
    ctx->pc = 0x2E873Cu;
    {
        const bool branch_taken_0x2e873c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e873c) {
            ctx->pc = 0x2E8740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E873Cu;
            // 0x2e8740: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8768u;
            goto label_2e8768;
        }
    }
    ctx->pc = 0x2E8744u;
label_2e8744:
    // 0x2e8744: 0x8e2400e4  lw          $a0, 0xE4($s1)
    ctx->pc = 0x2e8744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_2e8748:
    // 0x2e8748: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2e874c:
    if (ctx->pc == 0x2E874Cu) {
        ctx->pc = 0x2E874Cu;
            // 0x2e874c: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x2E8750u;
        goto label_2e8750;
    }
    ctx->pc = 0x2E8748u;
    {
        const bool branch_taken_0x2e8748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e8748) {
            ctx->pc = 0x2E874Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8748u;
            // 0x2e874c: 0xae2000e4  sw          $zero, 0xE4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E8764u;
            goto label_2e8764;
        }
    }
    ctx->pc = 0x2E8750u;
label_2e8750:
    // 0x2e8750: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e8750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e8754:
    // 0x2e8754: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2e8754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2e8758:
    // 0x2e8758: 0x320f809  jalr        $t9
label_2e875c:
    if (ctx->pc == 0x2E875Cu) {
        ctx->pc = 0x2E8760u;
        goto label_2e8760;
    }
    ctx->pc = 0x2E8758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E8760u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E8760u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E8760u; }
            if (ctx->pc != 0x2E8760u) { return; }
        }
        }
    }
    ctx->pc = 0x2E8760u;
label_2e8760:
    // 0x2e8760: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x2e8760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
label_2e8764:
    // 0x2e8764: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x2e8764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2e8768:
    // 0x2e8768: 0xc057b7c  jal         func_15EDF0
label_2e876c:
    if (ctx->pc == 0x2E876Cu) {
        ctx->pc = 0x2E876Cu;
            // 0x2e876c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E8770u;
        goto label_2e8770;
    }
    ctx->pc = 0x2E8768u;
    SET_GPR_U32(ctx, 31, 0x2E8770u);
    ctx->pc = 0x2E876Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8768u;
            // 0x2e876c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8770u; }
        if (ctx->pc != 0x2E8770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8770u; }
        if (ctx->pc != 0x2E8770u) { return; }
    }
    ctx->pc = 0x2E8770u;
label_2e8770:
    // 0x2e8770: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e8770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e8774:
    // 0x2e8774: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e8774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e8778:
    // 0x2e8778: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e8778u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e877c:
    // 0x2e877c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e877cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e8780:
    // 0x2e8780: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e8780u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e8784:
    // 0x2e8784: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e8788:
    // 0x2e8788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e878c:
    // 0x2e878c: 0x3e00008  jr          $ra
label_2e8790:
    if (ctx->pc == 0x2E8790u) {
        ctx->pc = 0x2E8790u;
            // 0x2e8790: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E8794u;
        goto label_2e8794;
    }
    ctx->pc = 0x2E878Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E878Cu;
            // 0x2e8790: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8794u;
label_2e8794:
    // 0x2e8794: 0x0  nop
    ctx->pc = 0x2e8794u;
    // NOP
label_2e8798:
    // 0x2e8798: 0x0  nop
    ctx->pc = 0x2e8798u;
    // NOP
label_2e879c:
    // 0x2e879c: 0x0  nop
    ctx->pc = 0x2e879cu;
    // NOP
}
