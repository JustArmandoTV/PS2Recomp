#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E8100
// Address: 0x3e8100 - 0x3e8780
void sub_003E8100_0x3e8100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8100_0x3e8100");
#endif

    switch (ctx->pc) {
        case 0x3e8100u: goto label_3e8100;
        case 0x3e8104u: goto label_3e8104;
        case 0x3e8108u: goto label_3e8108;
        case 0x3e810cu: goto label_3e810c;
        case 0x3e8110u: goto label_3e8110;
        case 0x3e8114u: goto label_3e8114;
        case 0x3e8118u: goto label_3e8118;
        case 0x3e811cu: goto label_3e811c;
        case 0x3e8120u: goto label_3e8120;
        case 0x3e8124u: goto label_3e8124;
        case 0x3e8128u: goto label_3e8128;
        case 0x3e812cu: goto label_3e812c;
        case 0x3e8130u: goto label_3e8130;
        case 0x3e8134u: goto label_3e8134;
        case 0x3e8138u: goto label_3e8138;
        case 0x3e813cu: goto label_3e813c;
        case 0x3e8140u: goto label_3e8140;
        case 0x3e8144u: goto label_3e8144;
        case 0x3e8148u: goto label_3e8148;
        case 0x3e814cu: goto label_3e814c;
        case 0x3e8150u: goto label_3e8150;
        case 0x3e8154u: goto label_3e8154;
        case 0x3e8158u: goto label_3e8158;
        case 0x3e815cu: goto label_3e815c;
        case 0x3e8160u: goto label_3e8160;
        case 0x3e8164u: goto label_3e8164;
        case 0x3e8168u: goto label_3e8168;
        case 0x3e816cu: goto label_3e816c;
        case 0x3e8170u: goto label_3e8170;
        case 0x3e8174u: goto label_3e8174;
        case 0x3e8178u: goto label_3e8178;
        case 0x3e817cu: goto label_3e817c;
        case 0x3e8180u: goto label_3e8180;
        case 0x3e8184u: goto label_3e8184;
        case 0x3e8188u: goto label_3e8188;
        case 0x3e818cu: goto label_3e818c;
        case 0x3e8190u: goto label_3e8190;
        case 0x3e8194u: goto label_3e8194;
        case 0x3e8198u: goto label_3e8198;
        case 0x3e819cu: goto label_3e819c;
        case 0x3e81a0u: goto label_3e81a0;
        case 0x3e81a4u: goto label_3e81a4;
        case 0x3e81a8u: goto label_3e81a8;
        case 0x3e81acu: goto label_3e81ac;
        case 0x3e81b0u: goto label_3e81b0;
        case 0x3e81b4u: goto label_3e81b4;
        case 0x3e81b8u: goto label_3e81b8;
        case 0x3e81bcu: goto label_3e81bc;
        case 0x3e81c0u: goto label_3e81c0;
        case 0x3e81c4u: goto label_3e81c4;
        case 0x3e81c8u: goto label_3e81c8;
        case 0x3e81ccu: goto label_3e81cc;
        case 0x3e81d0u: goto label_3e81d0;
        case 0x3e81d4u: goto label_3e81d4;
        case 0x3e81d8u: goto label_3e81d8;
        case 0x3e81dcu: goto label_3e81dc;
        case 0x3e81e0u: goto label_3e81e0;
        case 0x3e81e4u: goto label_3e81e4;
        case 0x3e81e8u: goto label_3e81e8;
        case 0x3e81ecu: goto label_3e81ec;
        case 0x3e81f0u: goto label_3e81f0;
        case 0x3e81f4u: goto label_3e81f4;
        case 0x3e81f8u: goto label_3e81f8;
        case 0x3e81fcu: goto label_3e81fc;
        case 0x3e8200u: goto label_3e8200;
        case 0x3e8204u: goto label_3e8204;
        case 0x3e8208u: goto label_3e8208;
        case 0x3e820cu: goto label_3e820c;
        case 0x3e8210u: goto label_3e8210;
        case 0x3e8214u: goto label_3e8214;
        case 0x3e8218u: goto label_3e8218;
        case 0x3e821cu: goto label_3e821c;
        case 0x3e8220u: goto label_3e8220;
        case 0x3e8224u: goto label_3e8224;
        case 0x3e8228u: goto label_3e8228;
        case 0x3e822cu: goto label_3e822c;
        case 0x3e8230u: goto label_3e8230;
        case 0x3e8234u: goto label_3e8234;
        case 0x3e8238u: goto label_3e8238;
        case 0x3e823cu: goto label_3e823c;
        case 0x3e8240u: goto label_3e8240;
        case 0x3e8244u: goto label_3e8244;
        case 0x3e8248u: goto label_3e8248;
        case 0x3e824cu: goto label_3e824c;
        case 0x3e8250u: goto label_3e8250;
        case 0x3e8254u: goto label_3e8254;
        case 0x3e8258u: goto label_3e8258;
        case 0x3e825cu: goto label_3e825c;
        case 0x3e8260u: goto label_3e8260;
        case 0x3e8264u: goto label_3e8264;
        case 0x3e8268u: goto label_3e8268;
        case 0x3e826cu: goto label_3e826c;
        case 0x3e8270u: goto label_3e8270;
        case 0x3e8274u: goto label_3e8274;
        case 0x3e8278u: goto label_3e8278;
        case 0x3e827cu: goto label_3e827c;
        case 0x3e8280u: goto label_3e8280;
        case 0x3e8284u: goto label_3e8284;
        case 0x3e8288u: goto label_3e8288;
        case 0x3e828cu: goto label_3e828c;
        case 0x3e8290u: goto label_3e8290;
        case 0x3e8294u: goto label_3e8294;
        case 0x3e8298u: goto label_3e8298;
        case 0x3e829cu: goto label_3e829c;
        case 0x3e82a0u: goto label_3e82a0;
        case 0x3e82a4u: goto label_3e82a4;
        case 0x3e82a8u: goto label_3e82a8;
        case 0x3e82acu: goto label_3e82ac;
        case 0x3e82b0u: goto label_3e82b0;
        case 0x3e82b4u: goto label_3e82b4;
        case 0x3e82b8u: goto label_3e82b8;
        case 0x3e82bcu: goto label_3e82bc;
        case 0x3e82c0u: goto label_3e82c0;
        case 0x3e82c4u: goto label_3e82c4;
        case 0x3e82c8u: goto label_3e82c8;
        case 0x3e82ccu: goto label_3e82cc;
        case 0x3e82d0u: goto label_3e82d0;
        case 0x3e82d4u: goto label_3e82d4;
        case 0x3e82d8u: goto label_3e82d8;
        case 0x3e82dcu: goto label_3e82dc;
        case 0x3e82e0u: goto label_3e82e0;
        case 0x3e82e4u: goto label_3e82e4;
        case 0x3e82e8u: goto label_3e82e8;
        case 0x3e82ecu: goto label_3e82ec;
        case 0x3e82f0u: goto label_3e82f0;
        case 0x3e82f4u: goto label_3e82f4;
        case 0x3e82f8u: goto label_3e82f8;
        case 0x3e82fcu: goto label_3e82fc;
        case 0x3e8300u: goto label_3e8300;
        case 0x3e8304u: goto label_3e8304;
        case 0x3e8308u: goto label_3e8308;
        case 0x3e830cu: goto label_3e830c;
        case 0x3e8310u: goto label_3e8310;
        case 0x3e8314u: goto label_3e8314;
        case 0x3e8318u: goto label_3e8318;
        case 0x3e831cu: goto label_3e831c;
        case 0x3e8320u: goto label_3e8320;
        case 0x3e8324u: goto label_3e8324;
        case 0x3e8328u: goto label_3e8328;
        case 0x3e832cu: goto label_3e832c;
        case 0x3e8330u: goto label_3e8330;
        case 0x3e8334u: goto label_3e8334;
        case 0x3e8338u: goto label_3e8338;
        case 0x3e833cu: goto label_3e833c;
        case 0x3e8340u: goto label_3e8340;
        case 0x3e8344u: goto label_3e8344;
        case 0x3e8348u: goto label_3e8348;
        case 0x3e834cu: goto label_3e834c;
        case 0x3e8350u: goto label_3e8350;
        case 0x3e8354u: goto label_3e8354;
        case 0x3e8358u: goto label_3e8358;
        case 0x3e835cu: goto label_3e835c;
        case 0x3e8360u: goto label_3e8360;
        case 0x3e8364u: goto label_3e8364;
        case 0x3e8368u: goto label_3e8368;
        case 0x3e836cu: goto label_3e836c;
        case 0x3e8370u: goto label_3e8370;
        case 0x3e8374u: goto label_3e8374;
        case 0x3e8378u: goto label_3e8378;
        case 0x3e837cu: goto label_3e837c;
        case 0x3e8380u: goto label_3e8380;
        case 0x3e8384u: goto label_3e8384;
        case 0x3e8388u: goto label_3e8388;
        case 0x3e838cu: goto label_3e838c;
        case 0x3e8390u: goto label_3e8390;
        case 0x3e8394u: goto label_3e8394;
        case 0x3e8398u: goto label_3e8398;
        case 0x3e839cu: goto label_3e839c;
        case 0x3e83a0u: goto label_3e83a0;
        case 0x3e83a4u: goto label_3e83a4;
        case 0x3e83a8u: goto label_3e83a8;
        case 0x3e83acu: goto label_3e83ac;
        case 0x3e83b0u: goto label_3e83b0;
        case 0x3e83b4u: goto label_3e83b4;
        case 0x3e83b8u: goto label_3e83b8;
        case 0x3e83bcu: goto label_3e83bc;
        case 0x3e83c0u: goto label_3e83c0;
        case 0x3e83c4u: goto label_3e83c4;
        case 0x3e83c8u: goto label_3e83c8;
        case 0x3e83ccu: goto label_3e83cc;
        case 0x3e83d0u: goto label_3e83d0;
        case 0x3e83d4u: goto label_3e83d4;
        case 0x3e83d8u: goto label_3e83d8;
        case 0x3e83dcu: goto label_3e83dc;
        case 0x3e83e0u: goto label_3e83e0;
        case 0x3e83e4u: goto label_3e83e4;
        case 0x3e83e8u: goto label_3e83e8;
        case 0x3e83ecu: goto label_3e83ec;
        case 0x3e83f0u: goto label_3e83f0;
        case 0x3e83f4u: goto label_3e83f4;
        case 0x3e83f8u: goto label_3e83f8;
        case 0x3e83fcu: goto label_3e83fc;
        case 0x3e8400u: goto label_3e8400;
        case 0x3e8404u: goto label_3e8404;
        case 0x3e8408u: goto label_3e8408;
        case 0x3e840cu: goto label_3e840c;
        case 0x3e8410u: goto label_3e8410;
        case 0x3e8414u: goto label_3e8414;
        case 0x3e8418u: goto label_3e8418;
        case 0x3e841cu: goto label_3e841c;
        case 0x3e8420u: goto label_3e8420;
        case 0x3e8424u: goto label_3e8424;
        case 0x3e8428u: goto label_3e8428;
        case 0x3e842cu: goto label_3e842c;
        case 0x3e8430u: goto label_3e8430;
        case 0x3e8434u: goto label_3e8434;
        case 0x3e8438u: goto label_3e8438;
        case 0x3e843cu: goto label_3e843c;
        case 0x3e8440u: goto label_3e8440;
        case 0x3e8444u: goto label_3e8444;
        case 0x3e8448u: goto label_3e8448;
        case 0x3e844cu: goto label_3e844c;
        case 0x3e8450u: goto label_3e8450;
        case 0x3e8454u: goto label_3e8454;
        case 0x3e8458u: goto label_3e8458;
        case 0x3e845cu: goto label_3e845c;
        case 0x3e8460u: goto label_3e8460;
        case 0x3e8464u: goto label_3e8464;
        case 0x3e8468u: goto label_3e8468;
        case 0x3e846cu: goto label_3e846c;
        case 0x3e8470u: goto label_3e8470;
        case 0x3e8474u: goto label_3e8474;
        case 0x3e8478u: goto label_3e8478;
        case 0x3e847cu: goto label_3e847c;
        case 0x3e8480u: goto label_3e8480;
        case 0x3e8484u: goto label_3e8484;
        case 0x3e8488u: goto label_3e8488;
        case 0x3e848cu: goto label_3e848c;
        case 0x3e8490u: goto label_3e8490;
        case 0x3e8494u: goto label_3e8494;
        case 0x3e8498u: goto label_3e8498;
        case 0x3e849cu: goto label_3e849c;
        case 0x3e84a0u: goto label_3e84a0;
        case 0x3e84a4u: goto label_3e84a4;
        case 0x3e84a8u: goto label_3e84a8;
        case 0x3e84acu: goto label_3e84ac;
        case 0x3e84b0u: goto label_3e84b0;
        case 0x3e84b4u: goto label_3e84b4;
        case 0x3e84b8u: goto label_3e84b8;
        case 0x3e84bcu: goto label_3e84bc;
        case 0x3e84c0u: goto label_3e84c0;
        case 0x3e84c4u: goto label_3e84c4;
        case 0x3e84c8u: goto label_3e84c8;
        case 0x3e84ccu: goto label_3e84cc;
        case 0x3e84d0u: goto label_3e84d0;
        case 0x3e84d4u: goto label_3e84d4;
        case 0x3e84d8u: goto label_3e84d8;
        case 0x3e84dcu: goto label_3e84dc;
        case 0x3e84e0u: goto label_3e84e0;
        case 0x3e84e4u: goto label_3e84e4;
        case 0x3e84e8u: goto label_3e84e8;
        case 0x3e84ecu: goto label_3e84ec;
        case 0x3e84f0u: goto label_3e84f0;
        case 0x3e84f4u: goto label_3e84f4;
        case 0x3e84f8u: goto label_3e84f8;
        case 0x3e84fcu: goto label_3e84fc;
        case 0x3e8500u: goto label_3e8500;
        case 0x3e8504u: goto label_3e8504;
        case 0x3e8508u: goto label_3e8508;
        case 0x3e850cu: goto label_3e850c;
        case 0x3e8510u: goto label_3e8510;
        case 0x3e8514u: goto label_3e8514;
        case 0x3e8518u: goto label_3e8518;
        case 0x3e851cu: goto label_3e851c;
        case 0x3e8520u: goto label_3e8520;
        case 0x3e8524u: goto label_3e8524;
        case 0x3e8528u: goto label_3e8528;
        case 0x3e852cu: goto label_3e852c;
        case 0x3e8530u: goto label_3e8530;
        case 0x3e8534u: goto label_3e8534;
        case 0x3e8538u: goto label_3e8538;
        case 0x3e853cu: goto label_3e853c;
        case 0x3e8540u: goto label_3e8540;
        case 0x3e8544u: goto label_3e8544;
        case 0x3e8548u: goto label_3e8548;
        case 0x3e854cu: goto label_3e854c;
        case 0x3e8550u: goto label_3e8550;
        case 0x3e8554u: goto label_3e8554;
        case 0x3e8558u: goto label_3e8558;
        case 0x3e855cu: goto label_3e855c;
        case 0x3e8560u: goto label_3e8560;
        case 0x3e8564u: goto label_3e8564;
        case 0x3e8568u: goto label_3e8568;
        case 0x3e856cu: goto label_3e856c;
        case 0x3e8570u: goto label_3e8570;
        case 0x3e8574u: goto label_3e8574;
        case 0x3e8578u: goto label_3e8578;
        case 0x3e857cu: goto label_3e857c;
        case 0x3e8580u: goto label_3e8580;
        case 0x3e8584u: goto label_3e8584;
        case 0x3e8588u: goto label_3e8588;
        case 0x3e858cu: goto label_3e858c;
        case 0x3e8590u: goto label_3e8590;
        case 0x3e8594u: goto label_3e8594;
        case 0x3e8598u: goto label_3e8598;
        case 0x3e859cu: goto label_3e859c;
        case 0x3e85a0u: goto label_3e85a0;
        case 0x3e85a4u: goto label_3e85a4;
        case 0x3e85a8u: goto label_3e85a8;
        case 0x3e85acu: goto label_3e85ac;
        case 0x3e85b0u: goto label_3e85b0;
        case 0x3e85b4u: goto label_3e85b4;
        case 0x3e85b8u: goto label_3e85b8;
        case 0x3e85bcu: goto label_3e85bc;
        case 0x3e85c0u: goto label_3e85c0;
        case 0x3e85c4u: goto label_3e85c4;
        case 0x3e85c8u: goto label_3e85c8;
        case 0x3e85ccu: goto label_3e85cc;
        case 0x3e85d0u: goto label_3e85d0;
        case 0x3e85d4u: goto label_3e85d4;
        case 0x3e85d8u: goto label_3e85d8;
        case 0x3e85dcu: goto label_3e85dc;
        case 0x3e85e0u: goto label_3e85e0;
        case 0x3e85e4u: goto label_3e85e4;
        case 0x3e85e8u: goto label_3e85e8;
        case 0x3e85ecu: goto label_3e85ec;
        case 0x3e85f0u: goto label_3e85f0;
        case 0x3e85f4u: goto label_3e85f4;
        case 0x3e85f8u: goto label_3e85f8;
        case 0x3e85fcu: goto label_3e85fc;
        case 0x3e8600u: goto label_3e8600;
        case 0x3e8604u: goto label_3e8604;
        case 0x3e8608u: goto label_3e8608;
        case 0x3e860cu: goto label_3e860c;
        case 0x3e8610u: goto label_3e8610;
        case 0x3e8614u: goto label_3e8614;
        case 0x3e8618u: goto label_3e8618;
        case 0x3e861cu: goto label_3e861c;
        case 0x3e8620u: goto label_3e8620;
        case 0x3e8624u: goto label_3e8624;
        case 0x3e8628u: goto label_3e8628;
        case 0x3e862cu: goto label_3e862c;
        case 0x3e8630u: goto label_3e8630;
        case 0x3e8634u: goto label_3e8634;
        case 0x3e8638u: goto label_3e8638;
        case 0x3e863cu: goto label_3e863c;
        case 0x3e8640u: goto label_3e8640;
        case 0x3e8644u: goto label_3e8644;
        case 0x3e8648u: goto label_3e8648;
        case 0x3e864cu: goto label_3e864c;
        case 0x3e8650u: goto label_3e8650;
        case 0x3e8654u: goto label_3e8654;
        case 0x3e8658u: goto label_3e8658;
        case 0x3e865cu: goto label_3e865c;
        case 0x3e8660u: goto label_3e8660;
        case 0x3e8664u: goto label_3e8664;
        case 0x3e8668u: goto label_3e8668;
        case 0x3e866cu: goto label_3e866c;
        case 0x3e8670u: goto label_3e8670;
        case 0x3e8674u: goto label_3e8674;
        case 0x3e8678u: goto label_3e8678;
        case 0x3e867cu: goto label_3e867c;
        case 0x3e8680u: goto label_3e8680;
        case 0x3e8684u: goto label_3e8684;
        case 0x3e8688u: goto label_3e8688;
        case 0x3e868cu: goto label_3e868c;
        case 0x3e8690u: goto label_3e8690;
        case 0x3e8694u: goto label_3e8694;
        case 0x3e8698u: goto label_3e8698;
        case 0x3e869cu: goto label_3e869c;
        case 0x3e86a0u: goto label_3e86a0;
        case 0x3e86a4u: goto label_3e86a4;
        case 0x3e86a8u: goto label_3e86a8;
        case 0x3e86acu: goto label_3e86ac;
        case 0x3e86b0u: goto label_3e86b0;
        case 0x3e86b4u: goto label_3e86b4;
        case 0x3e86b8u: goto label_3e86b8;
        case 0x3e86bcu: goto label_3e86bc;
        case 0x3e86c0u: goto label_3e86c0;
        case 0x3e86c4u: goto label_3e86c4;
        case 0x3e86c8u: goto label_3e86c8;
        case 0x3e86ccu: goto label_3e86cc;
        case 0x3e86d0u: goto label_3e86d0;
        case 0x3e86d4u: goto label_3e86d4;
        case 0x3e86d8u: goto label_3e86d8;
        case 0x3e86dcu: goto label_3e86dc;
        case 0x3e86e0u: goto label_3e86e0;
        case 0x3e86e4u: goto label_3e86e4;
        case 0x3e86e8u: goto label_3e86e8;
        case 0x3e86ecu: goto label_3e86ec;
        case 0x3e86f0u: goto label_3e86f0;
        case 0x3e86f4u: goto label_3e86f4;
        case 0x3e86f8u: goto label_3e86f8;
        case 0x3e86fcu: goto label_3e86fc;
        case 0x3e8700u: goto label_3e8700;
        case 0x3e8704u: goto label_3e8704;
        case 0x3e8708u: goto label_3e8708;
        case 0x3e870cu: goto label_3e870c;
        case 0x3e8710u: goto label_3e8710;
        case 0x3e8714u: goto label_3e8714;
        case 0x3e8718u: goto label_3e8718;
        case 0x3e871cu: goto label_3e871c;
        case 0x3e8720u: goto label_3e8720;
        case 0x3e8724u: goto label_3e8724;
        case 0x3e8728u: goto label_3e8728;
        case 0x3e872cu: goto label_3e872c;
        case 0x3e8730u: goto label_3e8730;
        case 0x3e8734u: goto label_3e8734;
        case 0x3e8738u: goto label_3e8738;
        case 0x3e873cu: goto label_3e873c;
        case 0x3e8740u: goto label_3e8740;
        case 0x3e8744u: goto label_3e8744;
        case 0x3e8748u: goto label_3e8748;
        case 0x3e874cu: goto label_3e874c;
        case 0x3e8750u: goto label_3e8750;
        case 0x3e8754u: goto label_3e8754;
        case 0x3e8758u: goto label_3e8758;
        case 0x3e875cu: goto label_3e875c;
        case 0x3e8760u: goto label_3e8760;
        case 0x3e8764u: goto label_3e8764;
        case 0x3e8768u: goto label_3e8768;
        case 0x3e876cu: goto label_3e876c;
        case 0x3e8770u: goto label_3e8770;
        case 0x3e8774u: goto label_3e8774;
        case 0x3e8778u: goto label_3e8778;
        case 0x3e877cu: goto label_3e877c;
        default: break;
    }

    ctx->pc = 0x3e8100u;

label_3e8100:
    // 0x3e8100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3e8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3e8104:
    // 0x3e8104: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3e8104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3e8108:
    // 0x3e8108: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3e8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3e810c:
    // 0x3e810c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3e810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3e8110:
    // 0x3e8110: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3e8110u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e8114:
    // 0x3e8114: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3e8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3e8118:
    // 0x3e8118: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3e8118u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3e811c:
    // 0x3e811c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e811cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e8120:
    // 0x3e8120: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e8120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e8124:
    // 0x3e8124: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x3e8124u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_3e8128:
    // 0x3e8128: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e8128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e812c:
    // 0x3e812c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e812cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8130:
    // 0x3e8130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e8130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e8134:
    // 0x3e8134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e8134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8138:
    // 0x3e8138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e8138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e813c:
    // 0x3e813c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3e813cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e8140:
    // 0x3e8140: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x3e8140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_3e8144:
    // 0x3e8144: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
label_3e8148:
    if (ctx->pc == 0x3E8148u) {
        ctx->pc = 0x3E8148u;
            // 0x3e8148: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E814Cu;
        goto label_3e814c;
    }
    ctx->pc = 0x3E8144u;
    {
        const bool branch_taken_0x3e8144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8144u;
            // 0x3e8148: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8144) {
            ctx->pc = 0x3E82F4u;
            goto label_3e82f4;
        }
    }
    ctx->pc = 0x3E814Cu;
label_3e814c:
    // 0x3e814c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e814cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8150:
    // 0x3e8150: 0xc04f278  jal         func_13C9E0
label_3e8154:
    if (ctx->pc == 0x3E8154u) {
        ctx->pc = 0x3E8154u;
            // 0x3e8154: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x3E8158u;
        goto label_3e8158;
    }
    ctx->pc = 0x3E8150u;
    SET_GPR_U32(ctx, 31, 0x3E8158u);
    ctx->pc = 0x3E8154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8150u;
            // 0x3e8154: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8158u; }
        if (ctx->pc != 0x3E8158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8158u; }
        if (ctx->pc != 0x3E8158u) { return; }
    }
    ctx->pc = 0x3E8158u;
label_3e8158:
    // 0x3e8158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e815c:
    // 0x3e815c: 0xc04ce80  jal         func_133A00
label_3e8160:
    if (ctx->pc == 0x3E8160u) {
        ctx->pc = 0x3E8160u;
            // 0x3e8160: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x3E8164u;
        goto label_3e8164;
    }
    ctx->pc = 0x3E815Cu;
    SET_GPR_U32(ctx, 31, 0x3E8164u);
    ctx->pc = 0x3E8160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E815Cu;
            // 0x3e8160: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8164u; }
        if (ctx->pc != 0x3E8164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8164u; }
        if (ctx->pc != 0x3E8164u) { return; }
    }
    ctx->pc = 0x3E8164u;
label_3e8164:
    // 0x3e8164: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3e8164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3e8168:
    // 0x3e8168: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x3e8168u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_3e816c:
    // 0x3e816c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x3e816cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3e8170:
    // 0x3e8170: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x3e8170u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e8174:
    // 0x3e8174: 0xc07698c  jal         func_1DA630
label_3e8178:
    if (ctx->pc == 0x3E8178u) {
        ctx->pc = 0x3E8178u;
            // 0x3e8178: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E817Cu;
        goto label_3e817c;
    }
    ctx->pc = 0x3E8174u;
    SET_GPR_U32(ctx, 31, 0x3E817Cu);
    ctx->pc = 0x3E8178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8174u;
            // 0x3e8178: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E817Cu; }
        if (ctx->pc != 0x3E817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E817Cu; }
        if (ctx->pc != 0x3E817Cu) { return; }
    }
    ctx->pc = 0x3E817Cu;
label_3e817c:
    // 0x3e817c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3e817cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3e8180:
    // 0x3e8180: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_3e8184:
    if (ctx->pc == 0x3E8184u) {
        ctx->pc = 0x3E8188u;
        goto label_3e8188;
    }
    ctx->pc = 0x3E8180u;
    {
        const bool branch_taken_0x3e8180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e8180) {
            ctx->pc = 0x3E8190u;
            goto label_3e8190;
        }
    }
    ctx->pc = 0x3E8188u;
label_3e8188:
    // 0x3e8188: 0x10000033  b           . + 4 + (0x33 << 2)
label_3e818c:
    if (ctx->pc == 0x3E818Cu) {
        ctx->pc = 0x3E818Cu;
            // 0x3e818c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3E8190u;
        goto label_3e8190;
    }
    ctx->pc = 0x3E8188u;
    {
        const bool branch_taken_0x3e8188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8188u;
            // 0x3e818c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8188) {
            ctx->pc = 0x3E8258u;
            goto label_3e8258;
        }
    }
    ctx->pc = 0x3E8190u;
label_3e8190:
    // 0x3e8190: 0xc0576f4  jal         func_15DBD0
label_3e8194:
    if (ctx->pc == 0x3E8194u) {
        ctx->pc = 0x3E8198u;
        goto label_3e8198;
    }
    ctx->pc = 0x3E8190u;
    SET_GPR_U32(ctx, 31, 0x3E8198u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8198u; }
        if (ctx->pc != 0x3E8198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8198u; }
        if (ctx->pc != 0x3E8198u) { return; }
    }
    ctx->pc = 0x3E8198u;
label_3e8198:
    // 0x3e8198: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e8198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e819c:
    // 0x3e819c: 0xc076984  jal         func_1DA610
label_3e81a0:
    if (ctx->pc == 0x3E81A0u) {
        ctx->pc = 0x3E81A0u;
            // 0x3e81a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E81A4u;
        goto label_3e81a4;
    }
    ctx->pc = 0x3E819Cu;
    SET_GPR_U32(ctx, 31, 0x3E81A4u);
    ctx->pc = 0x3E81A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E819Cu;
            // 0x3e81a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E81A4u; }
        if (ctx->pc != 0x3E81A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E81A4u; }
        if (ctx->pc != 0x3E81A4u) { return; }
    }
    ctx->pc = 0x3E81A4u;
label_3e81a4:
    // 0x3e81a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e81a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e81a8:
    // 0x3e81a8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3e81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3e81ac:
    // 0x3e81ac: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3e81acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3e81b0:
    // 0x3e81b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e81b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e81b4:
    // 0x3e81b4: 0xc442f880  lwc1        $f2, -0x780($v0)
    ctx->pc = 0x3e81b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3e81b8:
    // 0x3e81b8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e81b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e81bc:
    // 0x3e81bc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3e81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3e81c0:
    // 0x3e81c0: 0xc441f888  lwc1        $f1, -0x778($v0)
    ctx->pc = 0x3e81c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e81c4:
    // 0x3e81c4: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x3e81c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3e81c8:
    // 0x3e81c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3e81c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3e81cc:
    // 0x3e81cc: 0xc440f88c  lwc1        $f0, -0x774($v0)
    ctx->pc = 0x3e81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e81d0:
    // 0x3e81d0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x3e81d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3e81d4:
    // 0x3e81d4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3e81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3e81d8:
    // 0x3e81d8: 0x8c42f884  lw          $v0, -0x77C($v0)
    ctx->pc = 0x3e81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965380)));
label_3e81dc:
    // 0x3e81dc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x3e81dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_3e81e0:
    // 0x3e81e0: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x3e81e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_3e81e4:
    // 0x3e81e4: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x3e81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e81e8:
    // 0x3e81e8: 0xc04cca0  jal         func_133280
label_3e81ec:
    if (ctx->pc == 0x3E81ECu) {
        ctx->pc = 0x3E81ECu;
            // 0x3e81ec: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x3E81F0u;
        goto label_3e81f0;
    }
    ctx->pc = 0x3E81E8u;
    SET_GPR_U32(ctx, 31, 0x3E81F0u);
    ctx->pc = 0x3E81ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E81E8u;
            // 0x3e81ec: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E81F0u; }
        if (ctx->pc != 0x3E81F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E81F0u; }
        if (ctx->pc != 0x3E81F0u) { return; }
    }
    ctx->pc = 0x3E81F0u;
label_3e81f0:
    // 0x3e81f0: 0xc076980  jal         func_1DA600
label_3e81f4:
    if (ctx->pc == 0x3E81F4u) {
        ctx->pc = 0x3E81F4u;
            // 0x3e81f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E81F8u;
        goto label_3e81f8;
    }
    ctx->pc = 0x3E81F0u;
    SET_GPR_U32(ctx, 31, 0x3E81F8u);
    ctx->pc = 0x3E81F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E81F0u;
            // 0x3e81f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E81F8u; }
        if (ctx->pc != 0x3E81F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E81F8u; }
        if (ctx->pc != 0x3E81F8u) { return; }
    }
    ctx->pc = 0x3E81F8u;
label_3e81f8:
    // 0x3e81f8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3e81f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3e81fc:
    // 0x3e81fc: 0xc04cc34  jal         func_1330D0
label_3e8200:
    if (ctx->pc == 0x3E8200u) {
        ctx->pc = 0x3E8200u;
            // 0x3e8200: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8204u;
        goto label_3e8204;
    }
    ctx->pc = 0x3E81FCu;
    SET_GPR_U32(ctx, 31, 0x3E8204u);
    ctx->pc = 0x3E8200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E81FCu;
            // 0x3e8200: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8204u; }
        if (ctx->pc != 0x3E8204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8204u; }
        if (ctx->pc != 0x3E8204u) { return; }
    }
    ctx->pc = 0x3E8204u;
label_3e8204:
    // 0x3e8204: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3e8204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3e8208:
    // 0x3e8208: 0xc461a100  lwc1        $f1, -0x5F00($v1)
    ctx->pc = 0x3e8208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294942976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3e820c:
    // 0x3e820c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e820cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e8210:
    // 0x3e8210: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3e8214:
    if (ctx->pc == 0x3E8214u) {
        ctx->pc = 0x3E8214u;
            // 0x3e8214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8218u;
        goto label_3e8218;
    }
    ctx->pc = 0x3E8210u;
    {
        const bool branch_taken_0x3e8210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e8210) {
            ctx->pc = 0x3E8214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8210u;
            // 0x3e8214: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E8220u;
            goto label_3e8220;
        }
    }
    ctx->pc = 0x3E8218u;
label_3e8218:
    // 0x3e8218: 0x1000000f  b           . + 4 + (0xF << 2)
label_3e821c:
    if (ctx->pc == 0x3E821Cu) {
        ctx->pc = 0x3E821Cu;
            // 0x3e821c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3E8220u;
        goto label_3e8220;
    }
    ctx->pc = 0x3E8218u;
    {
        const bool branch_taken_0x3e8218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8218u;
            // 0x3e821c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8218) {
            ctx->pc = 0x3E8258u;
            goto label_3e8258;
        }
    }
    ctx->pc = 0x3E8220u;
label_3e8220:
    // 0x3e8220: 0xc07697c  jal         func_1DA5F0
label_3e8224:
    if (ctx->pc == 0x3E8224u) {
        ctx->pc = 0x3E8228u;
        goto label_3e8228;
    }
    ctx->pc = 0x3E8220u;
    SET_GPR_U32(ctx, 31, 0x3E8228u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8228u; }
        if (ctx->pc != 0x3E8228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8228u; }
        if (ctx->pc != 0x3E8228u) { return; }
    }
    ctx->pc = 0x3E8228u;
label_3e8228:
    // 0x3e8228: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e8228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e822c:
    // 0x3e822c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3e8230:
    // 0x3e8230: 0xc04cd60  jal         func_133580
label_3e8234:
    if (ctx->pc == 0x3E8234u) {
        ctx->pc = 0x3E8234u;
            // 0x3e8234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8238u;
        goto label_3e8238;
    }
    ctx->pc = 0x3E8230u;
    SET_GPR_U32(ctx, 31, 0x3E8238u);
    ctx->pc = 0x3E8234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8230u;
            // 0x3e8234: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8238u; }
        if (ctx->pc != 0x3E8238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8238u; }
        if (ctx->pc != 0x3E8238u) { return; }
    }
    ctx->pc = 0x3E8238u;
label_3e8238:
    // 0x3e8238: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3e8238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3e823c:
    // 0x3e823c: 0xc04c650  jal         func_131940
label_3e8240:
    if (ctx->pc == 0x3E8240u) {
        ctx->pc = 0x3E8240u;
            // 0x3e8240: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x3E8244u;
        goto label_3e8244;
    }
    ctx->pc = 0x3E823Cu;
    SET_GPR_U32(ctx, 31, 0x3E8244u);
    ctx->pc = 0x3E8240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E823Cu;
            // 0x3e8240: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8244u; }
        if (ctx->pc != 0x3E8244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8244u; }
        if (ctx->pc != 0x3E8244u) { return; }
    }
    ctx->pc = 0x3E8244u;
label_3e8244:
    // 0x3e8244: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x3e8244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_3e8248:
    // 0x3e8248: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x3e8248u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3e824c:
    // 0x3e824c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x3e824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_3e8250:
    // 0x3e8250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e8250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3e8254:
    // 0x3e8254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3e8254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e8258:
    // 0x3e8258: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3e8258u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3e825c:
    // 0x3e825c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_3e8260:
    if (ctx->pc == 0x3E8260u) {
        ctx->pc = 0x3E8260u;
            // 0x3e8260: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x3E8264u;
        goto label_3e8264;
    }
    ctx->pc = 0x3E825Cu;
    {
        const bool branch_taken_0x3e825c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E825Cu;
            // 0x3e8260: 0xae630044  sw          $v1, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e825c) {
            ctx->pc = 0x3E8270u;
            goto label_3e8270;
        }
    }
    ctx->pc = 0x3E8264u;
label_3e8264:
    // 0x3e8264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e8268:
    // 0x3e8268: 0x10000022  b           . + 4 + (0x22 << 2)
label_3e826c:
    if (ctx->pc == 0x3E826Cu) {
        ctx->pc = 0x3E826Cu;
            // 0x3e826c: 0xa26300fd  sb          $v1, 0xFD($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 253), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3E8270u;
        goto label_3e8270;
    }
    ctx->pc = 0x3E8268u;
    {
        const bool branch_taken_0x3e8268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E826Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8268u;
            // 0x3e826c: 0xa26300fd  sb          $v1, 0xFD($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 253), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8268) {
            ctx->pc = 0x3E82F4u;
            goto label_3e82f4;
        }
    }
    ctx->pc = 0x3E8270u;
label_3e8270:
    // 0x3e8270: 0xc66c0104  lwc1        $f12, 0x104($s3)
    ctx->pc = 0x3e8270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e8274:
    // 0x3e8274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8278:
    // 0x3e8278: 0xc66e0100  lwc1        $f14, 0x100($s3)
    ctx->pc = 0x3e8278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3e827c:
    // 0x3e827c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8280:
    // 0x3e8280: 0xc04ce50  jal         func_133940
label_3e8284:
    if (ctx->pc == 0x3E8284u) {
        ctx->pc = 0x3E8284u;
            // 0x3e8284: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3E8288u;
        goto label_3e8288;
    }
    ctx->pc = 0x3E8280u;
    SET_GPR_U32(ctx, 31, 0x3E8288u);
    ctx->pc = 0x3E8284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8280u;
            // 0x3e8284: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8288u; }
        if (ctx->pc != 0x3E8288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8288u; }
        if (ctx->pc != 0x3E8288u) { return; }
    }
    ctx->pc = 0x3E8288u;
label_3e8288:
    // 0x3e8288: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3e8288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3e828c:
    // 0x3e828c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8290:
    // 0x3e8290: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3e8290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_3e8294:
    // 0x3e8294: 0xc6600108  lwc1        $f0, 0x108($s3)
    ctx->pc = 0x3e8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e8298:
    // 0x3e8298: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e8298u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e829c:
    // 0x3e829c: 0x0  nop
    ctx->pc = 0x3e829cu;
    // NOP
label_3e82a0:
    // 0x3e82a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3e82a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3e82a4:
    // 0x3e82a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e82a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3e82a8:
    // 0x3e82a8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3e82a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3e82ac:
    // 0x3e82ac: 0xc04cdb0  jal         func_1336C0
label_3e82b0:
    if (ctx->pc == 0x3E82B0u) {
        ctx->pc = 0x3E82B0u;
            // 0x3e82b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E82B4u;
        goto label_3e82b4;
    }
    ctx->pc = 0x3E82ACu;
    SET_GPR_U32(ctx, 31, 0x3E82B4u);
    ctx->pc = 0x3E82B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E82ACu;
            // 0x3e82b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82B4u; }
        if (ctx->pc != 0x3E82B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82B4u; }
        if (ctx->pc != 0x3E82B4u) { return; }
    }
    ctx->pc = 0x3E82B4u;
label_3e82b4:
    // 0x3e82b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3e82b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3e82b8:
    // 0x3e82b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e82b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e82bc:
    // 0x3e82bc: 0xc04cd60  jal         func_133580
label_3e82c0:
    if (ctx->pc == 0x3E82C0u) {
        ctx->pc = 0x3E82C0u;
            // 0x3e82c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E82C4u;
        goto label_3e82c4;
    }
    ctx->pc = 0x3E82BCu;
    SET_GPR_U32(ctx, 31, 0x3E82C4u);
    ctx->pc = 0x3E82C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E82BCu;
            // 0x3e82c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82C4u; }
        if (ctx->pc != 0x3E82C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82C4u; }
        if (ctx->pc != 0x3E82C4u) { return; }
    }
    ctx->pc = 0x3E82C4u;
label_3e82c4:
    // 0x3e82c4: 0xc66c00ec  lwc1        $f12, 0xEC($s3)
    ctx->pc = 0x3e82c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3e82c8:
    // 0x3e82c8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3e82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3e82cc:
    // 0x3e82cc: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x3e82ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3e82d0:
    // 0x3e82d0: 0xc054bbc  jal         func_152EF0
label_3e82d4:
    if (ctx->pc == 0x3E82D4u) {
        ctx->pc = 0x3E82D4u;
            // 0x3e82d4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x3E82D8u;
        goto label_3e82d8;
    }
    ctx->pc = 0x3E82D0u;
    SET_GPR_U32(ctx, 31, 0x3E82D8u);
    ctx->pc = 0x3E82D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E82D0u;
            // 0x3e82d4: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82D8u; }
        if (ctx->pc != 0x3E82D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82D8u; }
        if (ctx->pc != 0x3E82D8u) { return; }
    }
    ctx->pc = 0x3E82D8u;
label_3e82d8:
    // 0x3e82d8: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3e82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3e82dc:
    // 0x3e82dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e82dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e82e0:
    // 0x3e82e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x3e82e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3e82e4:
    // 0x3e82e4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3e82e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3e82e8:
    // 0x3e82e8: 0xc054c2c  jal         func_1530B0
label_3e82ec:
    if (ctx->pc == 0x3E82ECu) {
        ctx->pc = 0x3E82ECu;
            // 0x3e82ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E82F0u;
        goto label_3e82f0;
    }
    ctx->pc = 0x3E82E8u;
    SET_GPR_U32(ctx, 31, 0x3E82F0u);
    ctx->pc = 0x3E82ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E82E8u;
            // 0x3e82ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82F0u; }
        if (ctx->pc != 0x3E82F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E82F0u; }
        if (ctx->pc != 0x3E82F0u) { return; }
    }
    ctx->pc = 0x3E82F0u;
label_3e82f0:
    // 0x3e82f0: 0xa26000fd  sb          $zero, 0xFD($s3)
    ctx->pc = 0x3e82f0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 253), (uint8_t)GPR_U32(ctx, 0));
label_3e82f4:
    // 0x3e82f4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x3e82f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3e82f8:
    // 0x3e82f8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3e82f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3e82fc:
    // 0x3e82fc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3e82fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e8300:
    // 0x3e8300: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3e8300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e8304:
    // 0x3e8304: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e8304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e8308:
    // 0x3e8308: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e8308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e830c:
    // 0x3e830c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e830cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8310:
    // 0x3e8310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e8310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8314:
    // 0x3e8314: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8318:
    // 0x3e8318: 0x3e00008  jr          $ra
label_3e831c:
    if (ctx->pc == 0x3E831Cu) {
        ctx->pc = 0x3E831Cu;
            // 0x3e831c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3E8320u;
        goto label_3e8320;
    }
    ctx->pc = 0x3E8318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E831Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8318u;
            // 0x3e831c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E8320u;
label_3e8320:
    // 0x3e8320: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3e8320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3e8324:
    // 0x3e8324: 0x3e00008  jr          $ra
label_3e8328:
    if (ctx->pc == 0x3E8328u) {
        ctx->pc = 0x3E8328u;
            // 0x3e8328: 0x2442a0f0  addiu       $v0, $v0, -0x5F10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942960));
        ctx->pc = 0x3E832Cu;
        goto label_3e832c;
    }
    ctx->pc = 0x3E8324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8324u;
            // 0x3e8328: 0x2442a0f0  addiu       $v0, $v0, -0x5F10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E832Cu;
label_3e832c:
    // 0x3e832c: 0x0  nop
    ctx->pc = 0x3e832cu;
    // NOP
label_3e8330:
    // 0x3e8330: 0x3e00008  jr          $ra
label_3e8334:
    if (ctx->pc == 0x3E8334u) {
        ctx->pc = 0x3E8334u;
            // 0x3e8334: 0x240236ba  addiu       $v0, $zero, 0x36BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14010));
        ctx->pc = 0x3E8338u;
        goto label_3e8338;
    }
    ctx->pc = 0x3E8330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8330u;
            // 0x3e8334: 0x240236ba  addiu       $v0, $zero, 0x36BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E8338u;
label_3e8338:
    // 0x3e8338: 0x0  nop
    ctx->pc = 0x3e8338u;
    // NOP
label_3e833c:
    // 0x3e833c: 0x0  nop
    ctx->pc = 0x3e833cu;
    // NOP
label_3e8340:
    // 0x3e8340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e8340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3e8344:
    // 0x3e8344: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3e8344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3e8348:
    // 0x3e8348: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3e8348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3e834c:
    // 0x3e834c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3e834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3e8350:
    // 0x3e8350: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3e8350u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8354:
    // 0x3e8354: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e8354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3e8358:
    // 0x3e8358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e8358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3e835c:
    // 0x3e835c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e8360:
    // 0x3e8360: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3e8360u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3e8364:
    // 0x3e8364: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3e8368:
    if (ctx->pc == 0x3E8368u) {
        ctx->pc = 0x3E8368u;
            // 0x3e8368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E836Cu;
        goto label_3e836c;
    }
    ctx->pc = 0x3E8364u;
    {
        const bool branch_taken_0x3e8364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8364u;
            // 0x3e8368: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8364) {
            ctx->pc = 0x3E83A8u;
            goto label_3e83a8;
        }
    }
    ctx->pc = 0x3E836Cu;
label_3e836c:
    // 0x3e836c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3e836cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8370:
    // 0x3e8370: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3e8370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8374:
    // 0x3e8374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3e8374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e8378:
    // 0x3e8378: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3e8378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3e837c:
    // 0x3e837c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e837cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3e8380:
    // 0x3e8380: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e8380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e8384:
    // 0x3e8384: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3e8384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e8388:
    // 0x3e8388: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3e8388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3e838c:
    // 0x3e838c: 0x320f809  jalr        $t9
label_3e8390:
    if (ctx->pc == 0x3E8390u) {
        ctx->pc = 0x3E8394u;
        goto label_3e8394;
    }
    ctx->pc = 0x3E838Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E8394u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E8394u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E8394u; }
            if (ctx->pc != 0x3E8394u) { return; }
        }
        }
    }
    ctx->pc = 0x3E8394u;
label_3e8394:
    // 0x3e8394: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3e8394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3e8398:
    // 0x3e8398: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3e8398u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3e839c:
    // 0x3e839c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3e839cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3e83a0:
    // 0x3e83a0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3e83a4:
    if (ctx->pc == 0x3E83A4u) {
        ctx->pc = 0x3E83A4u;
            // 0x3e83a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3E83A8u;
        goto label_3e83a8;
    }
    ctx->pc = 0x3E83A0u;
    {
        const bool branch_taken_0x3e83a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E83A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E83A0u;
            // 0x3e83a4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e83a0) {
            ctx->pc = 0x3E8378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3e8378;
        }
    }
    ctx->pc = 0x3E83A8u;
label_3e83a8:
    // 0x3e83a8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3e83a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3e83ac:
    // 0x3e83ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3e83acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3e83b0:
    // 0x3e83b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3e83b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e83b4:
    // 0x3e83b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3e83b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e83b8:
    // 0x3e83b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e83b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e83bc:
    // 0x3e83bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e83bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e83c0:
    // 0x3e83c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e83c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e83c4:
    // 0x3e83c4: 0x3e00008  jr          $ra
label_3e83c8:
    if (ctx->pc == 0x3E83C8u) {
        ctx->pc = 0x3E83C8u;
            // 0x3e83c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3E83CCu;
        goto label_3e83cc;
    }
    ctx->pc = 0x3E83C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E83C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E83C4u;
            // 0x3e83c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E83CCu;
label_3e83cc:
    // 0x3e83cc: 0x0  nop
    ctx->pc = 0x3e83ccu;
    // NOP
label_3e83d0:
    // 0x3e83d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e83d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3e83d4:
    // 0x3e83d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3e83d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e83d8:
    // 0x3e83d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e83d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e83dc:
    // 0x3e83dc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3e83dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3e83e0:
    // 0x3e83e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e83e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e83e4:
    // 0x3e83e4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3e83e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3e83e8:
    // 0x3e83e8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e83e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e83ec:
    // 0x3e83ec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3e83ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3e83f0:
    // 0x3e83f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e83f4:
    // 0x3e83f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3e83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e83f8:
    // 0x3e83f8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3e83f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3e83fc:
    // 0x3e83fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3e83fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3e8400:
    // 0x3e8400: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3e8400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3e8404:
    // 0x3e8404: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3e8404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8408:
    // 0x3e8408: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3e8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3e840c:
    // 0x3e840c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3e840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3e8410:
    // 0x3e8410: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3e8410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3e8414:
    // 0x3e8414: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e8414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3e8418:
    // 0x3e8418: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3e8418u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3e841c:
    // 0x3e841c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3e841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3e8420:
    // 0x3e8420: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3e8420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3e8424:
    // 0x3e8424: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3e8424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3e8428:
    // 0x3e8428: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3e8428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3e842c:
    // 0x3e842c: 0xc0a997c  jal         func_2A65F0
label_3e8430:
    if (ctx->pc == 0x3E8430u) {
        ctx->pc = 0x3E8430u;
            // 0x3e8430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x3E8434u;
        goto label_3e8434;
    }
    ctx->pc = 0x3E842Cu;
    SET_GPR_U32(ctx, 31, 0x3E8434u);
    ctx->pc = 0x3E8430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E842Cu;
            // 0x3e8430: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8434u; }
        if (ctx->pc != 0x3E8434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8434u; }
        if (ctx->pc != 0x3E8434u) { return; }
    }
    ctx->pc = 0x3E8434u;
label_3e8434:
    // 0x3e8434: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x3e8434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_3e8438:
    // 0x3e8438: 0xc0d879c  jal         func_361E70
label_3e843c:
    if (ctx->pc == 0x3E843Cu) {
        ctx->pc = 0x3E843Cu;
            // 0x3e843c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8440u;
        goto label_3e8440;
    }
    ctx->pc = 0x3E8438u;
    SET_GPR_U32(ctx, 31, 0x3E8440u);
    ctx->pc = 0x3E843Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8438u;
            // 0x3e843c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8440u; }
        if (ctx->pc != 0x3E8440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8440u; }
        if (ctx->pc != 0x3E8440u) { return; }
    }
    ctx->pc = 0x3E8440u;
label_3e8440:
    // 0x3e8440: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8444:
    // 0x3e8444: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8444u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8448:
    // 0x3e8448: 0x3e00008  jr          $ra
label_3e844c:
    if (ctx->pc == 0x3E844Cu) {
        ctx->pc = 0x3E844Cu;
            // 0x3e844c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3E8450u;
        goto label_3e8450;
    }
    ctx->pc = 0x3E8448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8448u;
            // 0x3e844c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E8450u;
label_3e8450:
    // 0x3e8450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e8454:
    // 0x3e8454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e8458:
    // 0x3e8458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e8458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e845c:
    // 0x3e845c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x3e845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3e8460:
    // 0x3e8460: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3e8464:
    if (ctx->pc == 0x3E8464u) {
        ctx->pc = 0x3E8464u;
            // 0x3e8464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8468u;
        goto label_3e8468;
    }
    ctx->pc = 0x3E8460u;
    {
        const bool branch_taken_0x3e8460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8460u;
            // 0x3e8464: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8460) {
            ctx->pc = 0x3E8580u;
            goto label_3e8580;
        }
    }
    ctx->pc = 0x3E8468u;
label_3e8468:
    // 0x3e8468: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3e8468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3e846c:
    // 0x3e846c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3e846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3e8470:
    // 0x3e8470: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3e8470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3e8474:
    // 0x3e8474: 0xc075128  jal         func_1D44A0
label_3e8478:
    if (ctx->pc == 0x3E8478u) {
        ctx->pc = 0x3E8478u;
            // 0x3e8478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3E847Cu;
        goto label_3e847c;
    }
    ctx->pc = 0x3E8474u;
    SET_GPR_U32(ctx, 31, 0x3E847Cu);
    ctx->pc = 0x3E8478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8474u;
            // 0x3e8478: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E847Cu; }
        if (ctx->pc != 0x3E847Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E847Cu; }
        if (ctx->pc != 0x3E847Cu) { return; }
    }
    ctx->pc = 0x3E847Cu;
label_3e847c:
    // 0x3e847c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3e847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3e8480:
    // 0x3e8480: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e8480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e8484:
    // 0x3e8484: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3e8484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3e8488:
    // 0x3e8488: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3e8488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3e848c:
    // 0x3e848c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e848cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e8490:
    // 0x3e8490: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3e8494:
    if (ctx->pc == 0x3E8494u) {
        ctx->pc = 0x3E8494u;
            // 0x3e8494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3E8498u;
        goto label_3e8498;
    }
    ctx->pc = 0x3E8490u;
    {
        const bool branch_taken_0x3e8490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8490u;
            // 0x3e8494: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8490) {
            ctx->pc = 0x3E84A0u;
            goto label_3e84a0;
        }
    }
    ctx->pc = 0x3E8498u;
label_3e8498:
    // 0x3e8498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e8498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e849c:
    // 0x3e849c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3e849cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3e84a0:
    // 0x3e84a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e84a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e84a4:
    // 0x3e84a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e84a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e84a8:
    // 0x3e84a8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3e84a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3e84ac:
    // 0x3e84ac: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3e84acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3e84b0:
    // 0x3e84b0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e84b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e84b4:
    // 0x3e84b4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e84b8:
    if (ctx->pc == 0x3E84B8u) {
        ctx->pc = 0x3E84B8u;
            // 0x3e84b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3E84BCu;
        goto label_3e84bc;
    }
    ctx->pc = 0x3E84B4u;
    {
        const bool branch_taken_0x3e84b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e84b4) {
            ctx->pc = 0x3E84B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E84B4u;
            // 0x3e84b8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E84C8u;
            goto label_3e84c8;
        }
    }
    ctx->pc = 0x3E84BCu;
label_3e84bc:
    // 0x3e84bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e84c0:
    // 0x3e84c0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x3e84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_3e84c4:
    // 0x3e84c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e84c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3e84c8:
    // 0x3e84c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e84cc:
    // 0x3e84cc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x3e84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_3e84d0:
    // 0x3e84d0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3e84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3e84d4:
    // 0x3e84d4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3e84d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3e84d8:
    // 0x3e84d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e84dc:
    if (ctx->pc == 0x3E84DCu) {
        ctx->pc = 0x3E84DCu;
            // 0x3e84dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3E84E0u;
        goto label_3e84e0;
    }
    ctx->pc = 0x3E84D8u;
    {
        const bool branch_taken_0x3e84d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e84d8) {
            ctx->pc = 0x3E84DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E84D8u;
            // 0x3e84dc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E84ECu;
            goto label_3e84ec;
        }
    }
    ctx->pc = 0x3E84E0u;
label_3e84e0:
    // 0x3e84e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3e84e4:
    // 0x3e84e4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x3e84e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_3e84e8:
    // 0x3e84e8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3e84e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e84ec:
    // 0x3e84ec: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x3e84ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_3e84f0:
    // 0x3e84f0: 0x320f809  jalr        $t9
label_3e84f4:
    if (ctx->pc == 0x3E84F4u) {
        ctx->pc = 0x3E84F4u;
            // 0x3e84f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E84F8u;
        goto label_3e84f8;
    }
    ctx->pc = 0x3E84F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3E84F8u);
        ctx->pc = 0x3E84F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E84F0u;
            // 0x3e84f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3E84F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3E84F8u; }
            if (ctx->pc != 0x3E84F8u) { return; }
        }
        }
    }
    ctx->pc = 0x3E84F8u;
label_3e84f8:
    // 0x3e84f8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3e84f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3e84fc:
    // 0x3e84fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e8500:
    // 0x3e8500: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3e8500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_3e8504:
    // 0x3e8504: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3e8504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3e8508:
    // 0x3e8508: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3e8508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e850c:
    // 0x3e850c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3e850cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3e8510:
    // 0x3e8510: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e8514:
    if (ctx->pc == 0x3E8514u) {
        ctx->pc = 0x3E8514u;
            // 0x3e8514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x3E8518u;
        goto label_3e8518;
    }
    ctx->pc = 0x3E8510u;
    {
        const bool branch_taken_0x3e8510 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8510) {
            ctx->pc = 0x3E8514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8510u;
            // 0x3e8514: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E8524u;
            goto label_3e8524;
        }
    }
    ctx->pc = 0x3E8518u;
label_3e8518:
    // 0x3e8518: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e8518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e851c:
    // 0x3e851c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3e851cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3e8520:
    // 0x3e8520: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3e8520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3e8524:
    // 0x3e8524: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e8524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e8528:
    // 0x3e8528: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3e8528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_3e852c:
    // 0x3e852c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3e852cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3e8530:
    // 0x3e8530: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x3e8530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e8534:
    // 0x3e8534: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3e8534u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_3e8538:
    // 0x3e8538: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3e853c:
    if (ctx->pc == 0x3E853Cu) {
        ctx->pc = 0x3E8540u;
        goto label_3e8540;
    }
    ctx->pc = 0x3E8538u;
    {
        const bool branch_taken_0x3e8538 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8538) {
            ctx->pc = 0x3E8548u;
            goto label_3e8548;
        }
    }
    ctx->pc = 0x3E8540u;
label_3e8540:
    // 0x3e8540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e8540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e8544:
    // 0x3e8544: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3e8544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3e8548:
    // 0x3e8548: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e8548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e854c:
    // 0x3e854c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x3e854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_3e8550:
    // 0x3e8550: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3e8550u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e8554:
    // 0x3e8554: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3e8558:
    if (ctx->pc == 0x3E8558u) {
        ctx->pc = 0x3E855Cu;
        goto label_3e855c;
    }
    ctx->pc = 0x3E8554u;
    {
        const bool branch_taken_0x3e8554 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8554) {
            ctx->pc = 0x3E8564u;
            goto label_3e8564;
        }
    }
    ctx->pc = 0x3E855Cu;
label_3e855c:
    // 0x3e855c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e855cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e8560:
    // 0x3e8560: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3e8560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3e8564:
    // 0x3e8564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e8564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e8568:
    // 0x3e8568: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3e8568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3e856c:
    // 0x3e856c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3e856cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3e8570:
    // 0x3e8570: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3e8574:
    if (ctx->pc == 0x3E8574u) {
        ctx->pc = 0x3E8574u;
            // 0x3e8574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3E8578u;
        goto label_3e8578;
    }
    ctx->pc = 0x3E8570u;
    {
        const bool branch_taken_0x3e8570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e8570) {
            ctx->pc = 0x3E8574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8570u;
            // 0x3e8574: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E8584u;
            goto label_3e8584;
        }
    }
    ctx->pc = 0x3E8578u;
label_3e8578:
    // 0x3e8578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e8578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3e857c:
    // 0x3e857c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3e857cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3e8580:
    // 0x3e8580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8584:
    // 0x3e8584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8588:
    // 0x3e8588: 0x3e00008  jr          $ra
label_3e858c:
    if (ctx->pc == 0x3E858Cu) {
        ctx->pc = 0x3E858Cu;
            // 0x3e858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E8590u;
        goto label_3e8590;
    }
    ctx->pc = 0x3E8588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E858Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8588u;
            // 0x3e858c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E8590u;
label_3e8590:
    // 0x3e8590: 0x80f9cb4  j           func_3E72D0
label_3e8594:
    if (ctx->pc == 0x3E8594u) {
        ctx->pc = 0x3E8594u;
            // 0x3e8594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3E8598u;
        goto label_3e8598;
    }
    ctx->pc = 0x3E8590u;
    ctx->pc = 0x3E8594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8590u;
            // 0x3e8594: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E72D0u;
    {
        auto targetFn = runtime->lookupFunction(0x3E72D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3E8598u;
label_3e8598:
    // 0x3e8598: 0x0  nop
    ctx->pc = 0x3e8598u;
    // NOP
label_3e859c:
    // 0x3e859c: 0x0  nop
    ctx->pc = 0x3e859cu;
    // NOP
label_3e85a0:
    // 0x3e85a0: 0x80f9b5c  j           func_3E6D70
label_3e85a4:
    if (ctx->pc == 0x3E85A4u) {
        ctx->pc = 0x3E85A4u;
            // 0x3e85a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3E85A8u;
        goto label_3e85a8;
    }
    ctx->pc = 0x3E85A0u;
    ctx->pc = 0x3E85A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E85A0u;
            // 0x3e85a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E6D70u;
    if (runtime->hasFunction(0x3E6D70u)) {
        auto targetFn = runtime->lookupFunction(0x3E6D70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003E6D70_0x3e6d70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3E85A8u;
label_3e85a8:
    // 0x3e85a8: 0x0  nop
    ctx->pc = 0x3e85a8u;
    // NOP
label_3e85ac:
    // 0x3e85ac: 0x0  nop
    ctx->pc = 0x3e85acu;
    // NOP
label_3e85b0:
    // 0x3e85b0: 0x80f9bb4  j           func_3E6ED0
label_3e85b4:
    if (ctx->pc == 0x3E85B4u) {
        ctx->pc = 0x3E85B4u;
            // 0x3e85b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3E85B8u;
        goto label_3e85b8;
    }
    ctx->pc = 0x3E85B0u;
    ctx->pc = 0x3E85B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E85B0u;
            // 0x3e85b4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E6ED0u;
    {
        auto targetFn = runtime->lookupFunction(0x3E6ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3E85B8u;
label_3e85b8:
    // 0x3e85b8: 0x0  nop
    ctx->pc = 0x3e85b8u;
    // NOP
label_3e85bc:
    // 0x3e85bc: 0x0  nop
    ctx->pc = 0x3e85bcu;
    // NOP
label_3e85c0:
    // 0x3e85c0: 0x80f9b38  j           func_3E6CE0
label_3e85c4:
    if (ctx->pc == 0x3E85C4u) {
        ctx->pc = 0x3E85C4u;
            // 0x3e85c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3E85C8u;
        goto label_3e85c8;
    }
    ctx->pc = 0x3E85C0u;
    ctx->pc = 0x3E85C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E85C0u;
            // 0x3e85c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E6CE0u;
    {
        auto targetFn = runtime->lookupFunction(0x3E6CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3E85C8u;
label_3e85c8:
    // 0x3e85c8: 0x0  nop
    ctx->pc = 0x3e85c8u;
    // NOP
label_3e85cc:
    // 0x3e85cc: 0x0  nop
    ctx->pc = 0x3e85ccu;
    // NOP
label_3e85d0:
    // 0x3e85d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e85d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e85d4:
    // 0x3e85d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e85d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3e85d8:
    // 0x3e85d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3e85d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3e85dc:
    // 0x3e85dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e85dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e85e0:
    // 0x3e85e0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
label_3e85e4:
    if (ctx->pc == 0x3E85E4u) {
        ctx->pc = 0x3E85E4u;
            // 0x3e85e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E85E8u;
        goto label_3e85e8;
    }
    ctx->pc = 0x3E85E0u;
    {
        const bool branch_taken_0x3e85e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e85e0) {
            ctx->pc = 0x3E85E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E85E0u;
            // 0x3e85e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E8630u;
            goto label_3e8630;
        }
    }
    ctx->pc = 0x3E85E8u;
label_3e85e8:
    // 0x3e85e8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e85e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e85ec:
    // 0x3e85ec: 0x24429de0  addiu       $v0, $v0, -0x6220
    ctx->pc = 0x3e85ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942176));
label_3e85f0:
    // 0x3e85f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_3e85f4:
    if (ctx->pc == 0x3E85F4u) {
        ctx->pc = 0x3E85F4u;
            // 0x3e85f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3E85F8u;
        goto label_3e85f8;
    }
    ctx->pc = 0x3E85F0u;
    {
        const bool branch_taken_0x3e85f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E85F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E85F0u;
            // 0x3e85f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e85f0) {
            ctx->pc = 0x3E8614u;
            goto label_3e8614;
        }
    }
    ctx->pc = 0x3E85F8u;
label_3e85f8:
    // 0x3e85f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3e85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3e85fc:
    // 0x3e85fc: 0x24429c10  addiu       $v0, $v0, -0x63F0
    ctx->pc = 0x3e85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941712));
label_3e8600:
    // 0x3e8600: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3e8604:
    if (ctx->pc == 0x3E8604u) {
        ctx->pc = 0x3E8604u;
            // 0x3e8604: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8608u;
        goto label_3e8608;
    }
    ctx->pc = 0x3E8600u;
    {
        const bool branch_taken_0x3e8600 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8600u;
            // 0x3e8604: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8600) {
            ctx->pc = 0x3E8614u;
            goto label_3e8614;
        }
    }
    ctx->pc = 0x3E8608u;
label_3e8608:
    // 0x3e8608: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3e8608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3e860c:
    // 0x3e860c: 0x2442fcd0  addiu       $v0, $v0, -0x330
    ctx->pc = 0x3e860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966480));
label_3e8610:
    // 0x3e8610: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3e8610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3e8614:
    // 0x3e8614: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x3e8614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_3e8618:
    // 0x3e8618: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3e8618u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3e861c:
    // 0x3e861c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_3e8620:
    if (ctx->pc == 0x3E8620u) {
        ctx->pc = 0x3E8624u;
        goto label_3e8624;
    }
    ctx->pc = 0x3E861Cu;
    {
        const bool branch_taken_0x3e861c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3e861c) {
            ctx->pc = 0x3E862Cu;
            goto label_3e862c;
        }
    }
    ctx->pc = 0x3E8624u;
label_3e8624:
    // 0x3e8624: 0xc0400a8  jal         func_1002A0
label_3e8628:
    if (ctx->pc == 0x3E8628u) {
        ctx->pc = 0x3E8628u;
            // 0x3e8628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E862Cu;
        goto label_3e862c;
    }
    ctx->pc = 0x3E8624u;
    SET_GPR_U32(ctx, 31, 0x3E862Cu);
    ctx->pc = 0x3E8628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8624u;
            // 0x3e8628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E862Cu; }
        if (ctx->pc != 0x3E862Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E862Cu; }
        if (ctx->pc != 0x3E862Cu) { return; }
    }
    ctx->pc = 0x3E862Cu;
label_3e862c:
    // 0x3e862c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3e862cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8630:
    // 0x3e8630: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8634:
    // 0x3e8634: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3e8634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8638:
    // 0x3e8638: 0x3e00008  jr          $ra
label_3e863c:
    if (ctx->pc == 0x3E863Cu) {
        ctx->pc = 0x3E863Cu;
            // 0x3e863c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3E8640u;
        goto label_3e8640;
    }
    ctx->pc = 0x3E8638u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E863Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8638u;
            // 0x3e863c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E8640u;
label_3e8640:
    // 0x3e8640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e8644:
    // 0x3e8644: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_3e8648:
    if (ctx->pc == 0x3E8648u) {
        ctx->pc = 0x3E8648u;
            // 0x3e8648: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3E864Cu;
        goto label_3e864c;
    }
    ctx->pc = 0x3E8644u;
    {
        const bool branch_taken_0x3e8644 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8644u;
            // 0x3e8648: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8644) {
            ctx->pc = 0x3E866Cu;
            goto label_3e866c;
        }
    }
    ctx->pc = 0x3E864Cu;
label_3e864c:
    // 0x3e864c: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x3e864cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_3e8650:
    // 0x3e8650: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3e8650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e8654:
    // 0x3e8654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8658:
    // 0x3e8658: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3e865c:
    // 0x3e865c: 0xc0fa9bc  jal         func_3EA6F0
label_3e8660:
    if (ctx->pc == 0x3E8660u) {
        ctx->pc = 0x3E8660u;
            // 0x3e8660: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8664u;
        goto label_3e8664;
    }
    ctx->pc = 0x3E865Cu;
    SET_GPR_U32(ctx, 31, 0x3E8664u);
    ctx->pc = 0x3E8660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E865Cu;
            // 0x3e8660: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EA6F0u;
    if (runtime->hasFunction(0x3EA6F0u)) {
        auto targetFn = runtime->lookupFunction(0x3EA6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8664u; }
        if (ctx->pc != 0x3E8664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EA6F0_0x3ea6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8664u; }
        if (ctx->pc != 0x3E8664u) { return; }
    }
    ctx->pc = 0x3E8664u;
label_3e8664:
    // 0x3e8664: 0x1000000e  b           . + 4 + (0xE << 2)
label_3e8668:
    if (ctx->pc == 0x3E8668u) {
        ctx->pc = 0x3E8668u;
            // 0x3e8668: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3E866Cu;
        goto label_3e866c;
    }
    ctx->pc = 0x3E8664u;
    {
        const bool branch_taken_0x3e8664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8664u;
            // 0x3e8668: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8664) {
            ctx->pc = 0x3E86A0u;
            goto label_3e86a0;
        }
    }
    ctx->pc = 0x3E866Cu;
label_3e866c:
    // 0x3e866c: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x3e866cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_3e8670:
    // 0x3e8670: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x3e8670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_3e8674:
    // 0x3e8674: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_3e8678:
    if (ctx->pc == 0x3E8678u) {
        ctx->pc = 0x3E8678u;
            // 0x3e8678: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x3E867Cu;
        goto label_3e867c;
    }
    ctx->pc = 0x3E8674u;
    {
        const bool branch_taken_0x3e8674 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3E8678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8674u;
            // 0x3e8678: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8674) {
            ctx->pc = 0x3E8684u;
            goto label_3e8684;
        }
    }
    ctx->pc = 0x3E867Cu;
label_3e867c:
    // 0x3e867c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x3e867cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3e8680:
    // 0x3e8680: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e8680u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_3e8684:
    // 0x3e8684: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x3e8684u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
label_3e8688:
    // 0x3e8688: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3e8688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e868c:
    // 0x3e868c: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x3e868cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_3e8690:
    // 0x3e8690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8694:
    // 0x3e8694: 0xc0fb0e4  jal         func_3EC390
label_3e8698:
    if (ctx->pc == 0x3E8698u) {
        ctx->pc = 0x3E8698u;
            // 0x3e8698: 0xaca20038  sw          $v0, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x3E869Cu;
        goto label_3e869c;
    }
    ctx->pc = 0x3E8694u;
    SET_GPR_U32(ctx, 31, 0x3E869Cu);
    ctx->pc = 0x3E8698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8694u;
            // 0x3e8698: 0xaca20038  sw          $v0, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EC390u;
    if (runtime->hasFunction(0x3EC390u)) {
        auto targetFn = runtime->lookupFunction(0x3EC390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E869Cu; }
        if (ctx->pc != 0x3E869Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EC390_0x3ec390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E869Cu; }
        if (ctx->pc != 0x3E869Cu) { return; }
    }
    ctx->pc = 0x3E869Cu;
label_3e869c:
    // 0x3e869c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e869cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e86a0:
    // 0x3e86a0: 0x3e00008  jr          $ra
label_3e86a4:
    if (ctx->pc == 0x3E86A4u) {
        ctx->pc = 0x3E86A4u;
            // 0x3e86a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3E86A8u;
        goto label_3e86a8;
    }
    ctx->pc = 0x3E86A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E86A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86A0u;
            // 0x3e86a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E86A8u;
label_3e86a8:
    // 0x3e86a8: 0x0  nop
    ctx->pc = 0x3e86a8u;
    // NOP
label_3e86ac:
    // 0x3e86ac: 0x0  nop
    ctx->pc = 0x3e86acu;
    // NOP
label_3e86b0:
    // 0x3e86b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e86b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e86b4:
    // 0x3e86b4: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_3e86b8:
    if (ctx->pc == 0x3E86B8u) {
        ctx->pc = 0x3E86B8u;
            // 0x3e86b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3E86BCu;
        goto label_3e86bc;
    }
    ctx->pc = 0x3E86B4u;
    {
        const bool branch_taken_0x3e86b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E86B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86B4u;
            // 0x3e86b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86b4) {
            ctx->pc = 0x3E86CCu;
            goto label_3e86cc;
        }
    }
    ctx->pc = 0x3E86BCu;
label_3e86bc:
    // 0x3e86bc: 0xc0fa734  jal         func_3E9CD0
label_3e86c0:
    if (ctx->pc == 0x3E86C0u) {
        ctx->pc = 0x3E86C0u;
            // 0x3e86c0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E86C4u;
        goto label_3e86c4;
    }
    ctx->pc = 0x3E86BCu;
    SET_GPR_U32(ctx, 31, 0x3E86C4u);
    ctx->pc = 0x3E86C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86BCu;
            // 0x3e86c0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9CD0u;
    if (runtime->hasFunction(0x3E9CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3E9CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E86C4u; }
        if (ctx->pc != 0x3E86C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9CD0_0x3e9cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E86C4u; }
        if (ctx->pc != 0x3E86C4u) { return; }
    }
    ctx->pc = 0x3E86C4u;
label_3e86c4:
    // 0x3e86c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3e86c8:
    if (ctx->pc == 0x3E86C8u) {
        ctx->pc = 0x3E86C8u;
            // 0x3e86c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3E86CCu;
        goto label_3e86cc;
    }
    ctx->pc = 0x3E86C4u;
    {
        const bool branch_taken_0x3e86c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E86C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86C4u;
            // 0x3e86c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86c4) {
            ctx->pc = 0x3E86E4u;
            goto label_3e86e4;
        }
    }
    ctx->pc = 0x3E86CCu;
label_3e86cc:
    // 0x3e86cc: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x3e86ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_3e86d0:
    // 0x3e86d0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3e86d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e86d4:
    // 0x3e86d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e86d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e86d8:
    // 0x3e86d8: 0xc0faf54  jal         func_3EBD50
label_3e86dc:
    if (ctx->pc == 0x3E86DCu) {
        ctx->pc = 0x3E86DCu;
            // 0x3e86dc: 0xaca20038  sw          $v0, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x3E86E0u;
        goto label_3e86e0;
    }
    ctx->pc = 0x3E86D8u;
    SET_GPR_U32(ctx, 31, 0x3E86E0u);
    ctx->pc = 0x3E86DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86D8u;
            // 0x3e86dc: 0xaca20038  sw          $v0, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EBD50u;
    if (runtime->hasFunction(0x3EBD50u)) {
        auto targetFn = runtime->lookupFunction(0x3EBD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E86E0u; }
        if (ctx->pc != 0x3E86E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EBD50_0x3ebd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E86E0u; }
        if (ctx->pc != 0x3E86E0u) { return; }
    }
    ctx->pc = 0x3E86E0u;
label_3e86e0:
    // 0x3e86e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e86e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e86e4:
    // 0x3e86e4: 0x3e00008  jr          $ra
label_3e86e8:
    if (ctx->pc == 0x3E86E8u) {
        ctx->pc = 0x3E86E8u;
            // 0x3e86e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3E86ECu;
        goto label_3e86ec;
    }
    ctx->pc = 0x3E86E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E86E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86E4u;
            // 0x3e86e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E86ECu;
label_3e86ec:
    // 0x3e86ec: 0x0  nop
    ctx->pc = 0x3e86ecu;
    // NOP
label_3e86f0:
    // 0x3e86f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e86f4:
    // 0x3e86f4: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
label_3e86f8:
    if (ctx->pc == 0x3E86F8u) {
        ctx->pc = 0x3E86F8u;
            // 0x3e86f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3E86FCu;
        goto label_3e86fc;
    }
    ctx->pc = 0x3E86F4u;
    {
        const bool branch_taken_0x3e86f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E86F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E86F4u;
            // 0x3e86f8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e86f4) {
            ctx->pc = 0x3E871Cu;
            goto label_3e871c;
        }
    }
    ctx->pc = 0x3E86FCu;
label_3e86fc:
    // 0x3e86fc: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x3e86fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_3e8700:
    // 0x3e8700: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3e8700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3e8704:
    // 0x3e8704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3e8704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3e8708:
    // 0x3e8708: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e8708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3e870c:
    // 0x3e870c: 0xc0fa4c0  jal         func_3E9300
label_3e8710:
    if (ctx->pc == 0x3E8710u) {
        ctx->pc = 0x3E8710u;
            // 0x3e8710: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x3E8714u;
        goto label_3e8714;
    }
    ctx->pc = 0x3E870Cu;
    SET_GPR_U32(ctx, 31, 0x3E8714u);
    ctx->pc = 0x3E8710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E870Cu;
            // 0x3e8710: 0xacc20038  sw          $v0, 0x38($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9300u;
    if (runtime->hasFunction(0x3E9300u)) {
        auto targetFn = runtime->lookupFunction(0x3E9300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8714u; }
        if (ctx->pc != 0x3E8714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9300_0x3e9300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8714u; }
        if (ctx->pc != 0x3E8714u) { return; }
    }
    ctx->pc = 0x3E8714u;
label_3e8714:
    // 0x3e8714: 0x1000000b  b           . + 4 + (0xB << 2)
label_3e8718:
    if (ctx->pc == 0x3E8718u) {
        ctx->pc = 0x3E8718u;
            // 0x3e8718: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3E871Cu;
        goto label_3e871c;
    }
    ctx->pc = 0x3E8714u;
    {
        const bool branch_taken_0x3e8714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8714u;
            // 0x3e8718: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8714) {
            ctx->pc = 0x3E8744u;
            goto label_3e8744;
        }
    }
    ctx->pc = 0x3E871Cu;
label_3e871c:
    // 0x3e871c: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x3e871cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_3e8720:
    // 0x3e8720: 0x24430007  addiu       $v1, $v0, 0x7
    ctx->pc = 0x3e8720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_3e8724:
    // 0x3e8724: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_3e8728:
    if (ctx->pc == 0x3E8728u) {
        ctx->pc = 0x3E8728u;
            // 0x3e8728: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->pc = 0x3E872Cu;
        goto label_3e872c;
    }
    ctx->pc = 0x3E8724u;
    {
        const bool branch_taken_0x3e8724 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3E8728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8724u;
            // 0x3e8728: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8724) {
            ctx->pc = 0x3E8734u;
            goto label_3e8734;
        }
    }
    ctx->pc = 0x3E872Cu;
label_3e872c:
    // 0x3e872c: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x3e872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_3e8730:
    // 0x3e8730: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3e8730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_3e8734:
    // 0x3e8734: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x3e8734u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
label_3e8738:
    // 0x3e8738: 0xc0fae08  jal         func_3EB820
label_3e873c:
    if (ctx->pc == 0x3E873Cu) {
        ctx->pc = 0x3E873Cu;
            // 0x3e873c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8740u;
        goto label_3e8740;
    }
    ctx->pc = 0x3E8738u;
    SET_GPR_U32(ctx, 31, 0x3E8740u);
    ctx->pc = 0x3E873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8738u;
            // 0x3e873c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB820u;
    if (runtime->hasFunction(0x3EB820u)) {
        auto targetFn = runtime->lookupFunction(0x3EB820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8740u; }
        if (ctx->pc != 0x3E8740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB820_0x3eb820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8740u; }
        if (ctx->pc != 0x3E8740u) { return; }
    }
    ctx->pc = 0x3E8740u;
label_3e8740:
    // 0x3e8740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8744:
    // 0x3e8744: 0x3e00008  jr          $ra
label_3e8748:
    if (ctx->pc == 0x3E8748u) {
        ctx->pc = 0x3E8748u;
            // 0x3e8748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3E874Cu;
        goto label_3e874c;
    }
    ctx->pc = 0x3E8744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8744u;
            // 0x3e8748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E874Cu;
label_3e874c:
    // 0x3e874c: 0x0  nop
    ctx->pc = 0x3e874cu;
    // NOP
label_3e8750:
    // 0x3e8750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3e8754:
    // 0x3e8754: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_3e8758:
    if (ctx->pc == 0x3E8758u) {
        ctx->pc = 0x3E8758u;
            // 0x3e8758: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x3E875Cu;
        goto label_3e875c;
    }
    ctx->pc = 0x3E8754u;
    {
        const bool branch_taken_0x3e8754 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8754u;
            // 0x3e8758: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8754) {
            ctx->pc = 0x3E876Cu;
            goto label_3e876c;
        }
    }
    ctx->pc = 0x3E875Cu;
label_3e875c:
    // 0x3e875c: 0xc0fa1e0  jal         func_3E8780
label_3e8760:
    if (ctx->pc == 0x3E8760u) {
        ctx->pc = 0x3E8760u;
            // 0x3e8760: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8764u;
        goto label_3e8764;
    }
    ctx->pc = 0x3E875Cu;
    SET_GPR_U32(ctx, 31, 0x3E8764u);
    ctx->pc = 0x3E8760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E875Cu;
            // 0x3e8760: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E8780u;
    if (runtime->hasFunction(0x3E8780u)) {
        auto targetFn = runtime->lookupFunction(0x3E8780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8764u; }
        if (ctx->pc != 0x3E8764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E8780_0x3e8780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8764u; }
        if (ctx->pc != 0x3E8764u) { return; }
    }
    ctx->pc = 0x3E8764u;
label_3e8764:
    // 0x3e8764: 0x10000004  b           . + 4 + (0x4 << 2)
label_3e8768:
    if (ctx->pc == 0x3E8768u) {
        ctx->pc = 0x3E8768u;
            // 0x3e8768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x3E876Cu;
        goto label_3e876c;
    }
    ctx->pc = 0x3E8764u;
    {
        const bool branch_taken_0x3e8764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8764u;
            // 0x3e8768: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8764) {
            ctx->pc = 0x3E8778u;
            goto label_3e8778;
        }
    }
    ctx->pc = 0x3E876Cu;
label_3e876c:
    // 0x3e876c: 0xc0fac38  jal         func_3EB0E0
label_3e8770:
    if (ctx->pc == 0x3E8770u) {
        ctx->pc = 0x3E8770u;
            // 0x3e8770: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3E8774u;
        goto label_3e8774;
    }
    ctx->pc = 0x3E876Cu;
    SET_GPR_U32(ctx, 31, 0x3E8774u);
    ctx->pc = 0x3E8770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E876Cu;
            // 0x3e8770: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB0E0u;
    if (runtime->hasFunction(0x3EB0E0u)) {
        auto targetFn = runtime->lookupFunction(0x3EB0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8774u; }
        if (ctx->pc != 0x3E8774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB0E0_0x3eb0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E8774u; }
        if (ctx->pc != 0x3E8774u) { return; }
    }
    ctx->pc = 0x3E8774u;
label_3e8774:
    // 0x3e8774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8778:
    // 0x3e8778: 0x3e00008  jr          $ra
label_3e877c:
    if (ctx->pc == 0x3E877Cu) {
        ctx->pc = 0x3E877Cu;
            // 0x3e877c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x3E8780u;
        goto label_fallthrough_0x3e8778;
    }
    ctx->pc = 0x3E8778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E877Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E8778u;
            // 0x3e877c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3e8778:
    ctx->pc = 0x3E8780u;
}
