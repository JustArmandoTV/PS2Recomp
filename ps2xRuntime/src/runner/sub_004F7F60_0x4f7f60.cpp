#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004F7F60
// Address: 0x4f7f60 - 0x4fad80
void sub_004F7F60_0x4f7f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F7F60_0x4f7f60");
#endif

    switch (ctx->pc) {
        case 0x4f7f60u: goto label_4f7f60;
        case 0x4f7f64u: goto label_4f7f64;
        case 0x4f7f68u: goto label_4f7f68;
        case 0x4f7f6cu: goto label_4f7f6c;
        case 0x4f7f70u: goto label_4f7f70;
        case 0x4f7f74u: goto label_4f7f74;
        case 0x4f7f78u: goto label_4f7f78;
        case 0x4f7f7cu: goto label_4f7f7c;
        case 0x4f7f80u: goto label_4f7f80;
        case 0x4f7f84u: goto label_4f7f84;
        case 0x4f7f88u: goto label_4f7f88;
        case 0x4f7f8cu: goto label_4f7f8c;
        case 0x4f7f90u: goto label_4f7f90;
        case 0x4f7f94u: goto label_4f7f94;
        case 0x4f7f98u: goto label_4f7f98;
        case 0x4f7f9cu: goto label_4f7f9c;
        case 0x4f7fa0u: goto label_4f7fa0;
        case 0x4f7fa4u: goto label_4f7fa4;
        case 0x4f7fa8u: goto label_4f7fa8;
        case 0x4f7facu: goto label_4f7fac;
        case 0x4f7fb0u: goto label_4f7fb0;
        case 0x4f7fb4u: goto label_4f7fb4;
        case 0x4f7fb8u: goto label_4f7fb8;
        case 0x4f7fbcu: goto label_4f7fbc;
        case 0x4f7fc0u: goto label_4f7fc0;
        case 0x4f7fc4u: goto label_4f7fc4;
        case 0x4f7fc8u: goto label_4f7fc8;
        case 0x4f7fccu: goto label_4f7fcc;
        case 0x4f7fd0u: goto label_4f7fd0;
        case 0x4f7fd4u: goto label_4f7fd4;
        case 0x4f7fd8u: goto label_4f7fd8;
        case 0x4f7fdcu: goto label_4f7fdc;
        case 0x4f7fe0u: goto label_4f7fe0;
        case 0x4f7fe4u: goto label_4f7fe4;
        case 0x4f7fe8u: goto label_4f7fe8;
        case 0x4f7fecu: goto label_4f7fec;
        case 0x4f7ff0u: goto label_4f7ff0;
        case 0x4f7ff4u: goto label_4f7ff4;
        case 0x4f7ff8u: goto label_4f7ff8;
        case 0x4f7ffcu: goto label_4f7ffc;
        case 0x4f8000u: goto label_4f8000;
        case 0x4f8004u: goto label_4f8004;
        case 0x4f8008u: goto label_4f8008;
        case 0x4f800cu: goto label_4f800c;
        case 0x4f8010u: goto label_4f8010;
        case 0x4f8014u: goto label_4f8014;
        case 0x4f8018u: goto label_4f8018;
        case 0x4f801cu: goto label_4f801c;
        case 0x4f8020u: goto label_4f8020;
        case 0x4f8024u: goto label_4f8024;
        case 0x4f8028u: goto label_4f8028;
        case 0x4f802cu: goto label_4f802c;
        case 0x4f8030u: goto label_4f8030;
        case 0x4f8034u: goto label_4f8034;
        case 0x4f8038u: goto label_4f8038;
        case 0x4f803cu: goto label_4f803c;
        case 0x4f8040u: goto label_4f8040;
        case 0x4f8044u: goto label_4f8044;
        case 0x4f8048u: goto label_4f8048;
        case 0x4f804cu: goto label_4f804c;
        case 0x4f8050u: goto label_4f8050;
        case 0x4f8054u: goto label_4f8054;
        case 0x4f8058u: goto label_4f8058;
        case 0x4f805cu: goto label_4f805c;
        case 0x4f8060u: goto label_4f8060;
        case 0x4f8064u: goto label_4f8064;
        case 0x4f8068u: goto label_4f8068;
        case 0x4f806cu: goto label_4f806c;
        case 0x4f8070u: goto label_4f8070;
        case 0x4f8074u: goto label_4f8074;
        case 0x4f8078u: goto label_4f8078;
        case 0x4f807cu: goto label_4f807c;
        case 0x4f8080u: goto label_4f8080;
        case 0x4f8084u: goto label_4f8084;
        case 0x4f8088u: goto label_4f8088;
        case 0x4f808cu: goto label_4f808c;
        case 0x4f8090u: goto label_4f8090;
        case 0x4f8094u: goto label_4f8094;
        case 0x4f8098u: goto label_4f8098;
        case 0x4f809cu: goto label_4f809c;
        case 0x4f80a0u: goto label_4f80a0;
        case 0x4f80a4u: goto label_4f80a4;
        case 0x4f80a8u: goto label_4f80a8;
        case 0x4f80acu: goto label_4f80ac;
        case 0x4f80b0u: goto label_4f80b0;
        case 0x4f80b4u: goto label_4f80b4;
        case 0x4f80b8u: goto label_4f80b8;
        case 0x4f80bcu: goto label_4f80bc;
        case 0x4f80c0u: goto label_4f80c0;
        case 0x4f80c4u: goto label_4f80c4;
        case 0x4f80c8u: goto label_4f80c8;
        case 0x4f80ccu: goto label_4f80cc;
        case 0x4f80d0u: goto label_4f80d0;
        case 0x4f80d4u: goto label_4f80d4;
        case 0x4f80d8u: goto label_4f80d8;
        case 0x4f80dcu: goto label_4f80dc;
        case 0x4f80e0u: goto label_4f80e0;
        case 0x4f80e4u: goto label_4f80e4;
        case 0x4f80e8u: goto label_4f80e8;
        case 0x4f80ecu: goto label_4f80ec;
        case 0x4f80f0u: goto label_4f80f0;
        case 0x4f80f4u: goto label_4f80f4;
        case 0x4f80f8u: goto label_4f80f8;
        case 0x4f80fcu: goto label_4f80fc;
        case 0x4f8100u: goto label_4f8100;
        case 0x4f8104u: goto label_4f8104;
        case 0x4f8108u: goto label_4f8108;
        case 0x4f810cu: goto label_4f810c;
        case 0x4f8110u: goto label_4f8110;
        case 0x4f8114u: goto label_4f8114;
        case 0x4f8118u: goto label_4f8118;
        case 0x4f811cu: goto label_4f811c;
        case 0x4f8120u: goto label_4f8120;
        case 0x4f8124u: goto label_4f8124;
        case 0x4f8128u: goto label_4f8128;
        case 0x4f812cu: goto label_4f812c;
        case 0x4f8130u: goto label_4f8130;
        case 0x4f8134u: goto label_4f8134;
        case 0x4f8138u: goto label_4f8138;
        case 0x4f813cu: goto label_4f813c;
        case 0x4f8140u: goto label_4f8140;
        case 0x4f8144u: goto label_4f8144;
        case 0x4f8148u: goto label_4f8148;
        case 0x4f814cu: goto label_4f814c;
        case 0x4f8150u: goto label_4f8150;
        case 0x4f8154u: goto label_4f8154;
        case 0x4f8158u: goto label_4f8158;
        case 0x4f815cu: goto label_4f815c;
        case 0x4f8160u: goto label_4f8160;
        case 0x4f8164u: goto label_4f8164;
        case 0x4f8168u: goto label_4f8168;
        case 0x4f816cu: goto label_4f816c;
        case 0x4f8170u: goto label_4f8170;
        case 0x4f8174u: goto label_4f8174;
        case 0x4f8178u: goto label_4f8178;
        case 0x4f817cu: goto label_4f817c;
        case 0x4f8180u: goto label_4f8180;
        case 0x4f8184u: goto label_4f8184;
        case 0x4f8188u: goto label_4f8188;
        case 0x4f818cu: goto label_4f818c;
        case 0x4f8190u: goto label_4f8190;
        case 0x4f8194u: goto label_4f8194;
        case 0x4f8198u: goto label_4f8198;
        case 0x4f819cu: goto label_4f819c;
        case 0x4f81a0u: goto label_4f81a0;
        case 0x4f81a4u: goto label_4f81a4;
        case 0x4f81a8u: goto label_4f81a8;
        case 0x4f81acu: goto label_4f81ac;
        case 0x4f81b0u: goto label_4f81b0;
        case 0x4f81b4u: goto label_4f81b4;
        case 0x4f81b8u: goto label_4f81b8;
        case 0x4f81bcu: goto label_4f81bc;
        case 0x4f81c0u: goto label_4f81c0;
        case 0x4f81c4u: goto label_4f81c4;
        case 0x4f81c8u: goto label_4f81c8;
        case 0x4f81ccu: goto label_4f81cc;
        case 0x4f81d0u: goto label_4f81d0;
        case 0x4f81d4u: goto label_4f81d4;
        case 0x4f81d8u: goto label_4f81d8;
        case 0x4f81dcu: goto label_4f81dc;
        case 0x4f81e0u: goto label_4f81e0;
        case 0x4f81e4u: goto label_4f81e4;
        case 0x4f81e8u: goto label_4f81e8;
        case 0x4f81ecu: goto label_4f81ec;
        case 0x4f81f0u: goto label_4f81f0;
        case 0x4f81f4u: goto label_4f81f4;
        case 0x4f81f8u: goto label_4f81f8;
        case 0x4f81fcu: goto label_4f81fc;
        case 0x4f8200u: goto label_4f8200;
        case 0x4f8204u: goto label_4f8204;
        case 0x4f8208u: goto label_4f8208;
        case 0x4f820cu: goto label_4f820c;
        case 0x4f8210u: goto label_4f8210;
        case 0x4f8214u: goto label_4f8214;
        case 0x4f8218u: goto label_4f8218;
        case 0x4f821cu: goto label_4f821c;
        case 0x4f8220u: goto label_4f8220;
        case 0x4f8224u: goto label_4f8224;
        case 0x4f8228u: goto label_4f8228;
        case 0x4f822cu: goto label_4f822c;
        case 0x4f8230u: goto label_4f8230;
        case 0x4f8234u: goto label_4f8234;
        case 0x4f8238u: goto label_4f8238;
        case 0x4f823cu: goto label_4f823c;
        case 0x4f8240u: goto label_4f8240;
        case 0x4f8244u: goto label_4f8244;
        case 0x4f8248u: goto label_4f8248;
        case 0x4f824cu: goto label_4f824c;
        case 0x4f8250u: goto label_4f8250;
        case 0x4f8254u: goto label_4f8254;
        case 0x4f8258u: goto label_4f8258;
        case 0x4f825cu: goto label_4f825c;
        case 0x4f8260u: goto label_4f8260;
        case 0x4f8264u: goto label_4f8264;
        case 0x4f8268u: goto label_4f8268;
        case 0x4f826cu: goto label_4f826c;
        case 0x4f8270u: goto label_4f8270;
        case 0x4f8274u: goto label_4f8274;
        case 0x4f8278u: goto label_4f8278;
        case 0x4f827cu: goto label_4f827c;
        case 0x4f8280u: goto label_4f8280;
        case 0x4f8284u: goto label_4f8284;
        case 0x4f8288u: goto label_4f8288;
        case 0x4f828cu: goto label_4f828c;
        case 0x4f8290u: goto label_4f8290;
        case 0x4f8294u: goto label_4f8294;
        case 0x4f8298u: goto label_4f8298;
        case 0x4f829cu: goto label_4f829c;
        case 0x4f82a0u: goto label_4f82a0;
        case 0x4f82a4u: goto label_4f82a4;
        case 0x4f82a8u: goto label_4f82a8;
        case 0x4f82acu: goto label_4f82ac;
        case 0x4f82b0u: goto label_4f82b0;
        case 0x4f82b4u: goto label_4f82b4;
        case 0x4f82b8u: goto label_4f82b8;
        case 0x4f82bcu: goto label_4f82bc;
        case 0x4f82c0u: goto label_4f82c0;
        case 0x4f82c4u: goto label_4f82c4;
        case 0x4f82c8u: goto label_4f82c8;
        case 0x4f82ccu: goto label_4f82cc;
        case 0x4f82d0u: goto label_4f82d0;
        case 0x4f82d4u: goto label_4f82d4;
        case 0x4f82d8u: goto label_4f82d8;
        case 0x4f82dcu: goto label_4f82dc;
        case 0x4f82e0u: goto label_4f82e0;
        case 0x4f82e4u: goto label_4f82e4;
        case 0x4f82e8u: goto label_4f82e8;
        case 0x4f82ecu: goto label_4f82ec;
        case 0x4f82f0u: goto label_4f82f0;
        case 0x4f82f4u: goto label_4f82f4;
        case 0x4f82f8u: goto label_4f82f8;
        case 0x4f82fcu: goto label_4f82fc;
        case 0x4f8300u: goto label_4f8300;
        case 0x4f8304u: goto label_4f8304;
        case 0x4f8308u: goto label_4f8308;
        case 0x4f830cu: goto label_4f830c;
        case 0x4f8310u: goto label_4f8310;
        case 0x4f8314u: goto label_4f8314;
        case 0x4f8318u: goto label_4f8318;
        case 0x4f831cu: goto label_4f831c;
        case 0x4f8320u: goto label_4f8320;
        case 0x4f8324u: goto label_4f8324;
        case 0x4f8328u: goto label_4f8328;
        case 0x4f832cu: goto label_4f832c;
        case 0x4f8330u: goto label_4f8330;
        case 0x4f8334u: goto label_4f8334;
        case 0x4f8338u: goto label_4f8338;
        case 0x4f833cu: goto label_4f833c;
        case 0x4f8340u: goto label_4f8340;
        case 0x4f8344u: goto label_4f8344;
        case 0x4f8348u: goto label_4f8348;
        case 0x4f834cu: goto label_4f834c;
        case 0x4f8350u: goto label_4f8350;
        case 0x4f8354u: goto label_4f8354;
        case 0x4f8358u: goto label_4f8358;
        case 0x4f835cu: goto label_4f835c;
        case 0x4f8360u: goto label_4f8360;
        case 0x4f8364u: goto label_4f8364;
        case 0x4f8368u: goto label_4f8368;
        case 0x4f836cu: goto label_4f836c;
        case 0x4f8370u: goto label_4f8370;
        case 0x4f8374u: goto label_4f8374;
        case 0x4f8378u: goto label_4f8378;
        case 0x4f837cu: goto label_4f837c;
        case 0x4f8380u: goto label_4f8380;
        case 0x4f8384u: goto label_4f8384;
        case 0x4f8388u: goto label_4f8388;
        case 0x4f838cu: goto label_4f838c;
        case 0x4f8390u: goto label_4f8390;
        case 0x4f8394u: goto label_4f8394;
        case 0x4f8398u: goto label_4f8398;
        case 0x4f839cu: goto label_4f839c;
        case 0x4f83a0u: goto label_4f83a0;
        case 0x4f83a4u: goto label_4f83a4;
        case 0x4f83a8u: goto label_4f83a8;
        case 0x4f83acu: goto label_4f83ac;
        case 0x4f83b0u: goto label_4f83b0;
        case 0x4f83b4u: goto label_4f83b4;
        case 0x4f83b8u: goto label_4f83b8;
        case 0x4f83bcu: goto label_4f83bc;
        case 0x4f83c0u: goto label_4f83c0;
        case 0x4f83c4u: goto label_4f83c4;
        case 0x4f83c8u: goto label_4f83c8;
        case 0x4f83ccu: goto label_4f83cc;
        case 0x4f83d0u: goto label_4f83d0;
        case 0x4f83d4u: goto label_4f83d4;
        case 0x4f83d8u: goto label_4f83d8;
        case 0x4f83dcu: goto label_4f83dc;
        case 0x4f83e0u: goto label_4f83e0;
        case 0x4f83e4u: goto label_4f83e4;
        case 0x4f83e8u: goto label_4f83e8;
        case 0x4f83ecu: goto label_4f83ec;
        case 0x4f83f0u: goto label_4f83f0;
        case 0x4f83f4u: goto label_4f83f4;
        case 0x4f83f8u: goto label_4f83f8;
        case 0x4f83fcu: goto label_4f83fc;
        case 0x4f8400u: goto label_4f8400;
        case 0x4f8404u: goto label_4f8404;
        case 0x4f8408u: goto label_4f8408;
        case 0x4f840cu: goto label_4f840c;
        case 0x4f8410u: goto label_4f8410;
        case 0x4f8414u: goto label_4f8414;
        case 0x4f8418u: goto label_4f8418;
        case 0x4f841cu: goto label_4f841c;
        case 0x4f8420u: goto label_4f8420;
        case 0x4f8424u: goto label_4f8424;
        case 0x4f8428u: goto label_4f8428;
        case 0x4f842cu: goto label_4f842c;
        case 0x4f8430u: goto label_4f8430;
        case 0x4f8434u: goto label_4f8434;
        case 0x4f8438u: goto label_4f8438;
        case 0x4f843cu: goto label_4f843c;
        case 0x4f8440u: goto label_4f8440;
        case 0x4f8444u: goto label_4f8444;
        case 0x4f8448u: goto label_4f8448;
        case 0x4f844cu: goto label_4f844c;
        case 0x4f8450u: goto label_4f8450;
        case 0x4f8454u: goto label_4f8454;
        case 0x4f8458u: goto label_4f8458;
        case 0x4f845cu: goto label_4f845c;
        case 0x4f8460u: goto label_4f8460;
        case 0x4f8464u: goto label_4f8464;
        case 0x4f8468u: goto label_4f8468;
        case 0x4f846cu: goto label_4f846c;
        case 0x4f8470u: goto label_4f8470;
        case 0x4f8474u: goto label_4f8474;
        case 0x4f8478u: goto label_4f8478;
        case 0x4f847cu: goto label_4f847c;
        case 0x4f8480u: goto label_4f8480;
        case 0x4f8484u: goto label_4f8484;
        case 0x4f8488u: goto label_4f8488;
        case 0x4f848cu: goto label_4f848c;
        case 0x4f8490u: goto label_4f8490;
        case 0x4f8494u: goto label_4f8494;
        case 0x4f8498u: goto label_4f8498;
        case 0x4f849cu: goto label_4f849c;
        case 0x4f84a0u: goto label_4f84a0;
        case 0x4f84a4u: goto label_4f84a4;
        case 0x4f84a8u: goto label_4f84a8;
        case 0x4f84acu: goto label_4f84ac;
        case 0x4f84b0u: goto label_4f84b0;
        case 0x4f84b4u: goto label_4f84b4;
        case 0x4f84b8u: goto label_4f84b8;
        case 0x4f84bcu: goto label_4f84bc;
        case 0x4f84c0u: goto label_4f84c0;
        case 0x4f84c4u: goto label_4f84c4;
        case 0x4f84c8u: goto label_4f84c8;
        case 0x4f84ccu: goto label_4f84cc;
        case 0x4f84d0u: goto label_4f84d0;
        case 0x4f84d4u: goto label_4f84d4;
        case 0x4f84d8u: goto label_4f84d8;
        case 0x4f84dcu: goto label_4f84dc;
        case 0x4f84e0u: goto label_4f84e0;
        case 0x4f84e4u: goto label_4f84e4;
        case 0x4f84e8u: goto label_4f84e8;
        case 0x4f84ecu: goto label_4f84ec;
        case 0x4f84f0u: goto label_4f84f0;
        case 0x4f84f4u: goto label_4f84f4;
        case 0x4f84f8u: goto label_4f84f8;
        case 0x4f84fcu: goto label_4f84fc;
        case 0x4f8500u: goto label_4f8500;
        case 0x4f8504u: goto label_4f8504;
        case 0x4f8508u: goto label_4f8508;
        case 0x4f850cu: goto label_4f850c;
        case 0x4f8510u: goto label_4f8510;
        case 0x4f8514u: goto label_4f8514;
        case 0x4f8518u: goto label_4f8518;
        case 0x4f851cu: goto label_4f851c;
        case 0x4f8520u: goto label_4f8520;
        case 0x4f8524u: goto label_4f8524;
        case 0x4f8528u: goto label_4f8528;
        case 0x4f852cu: goto label_4f852c;
        case 0x4f8530u: goto label_4f8530;
        case 0x4f8534u: goto label_4f8534;
        case 0x4f8538u: goto label_4f8538;
        case 0x4f853cu: goto label_4f853c;
        case 0x4f8540u: goto label_4f8540;
        case 0x4f8544u: goto label_4f8544;
        case 0x4f8548u: goto label_4f8548;
        case 0x4f854cu: goto label_4f854c;
        case 0x4f8550u: goto label_4f8550;
        case 0x4f8554u: goto label_4f8554;
        case 0x4f8558u: goto label_4f8558;
        case 0x4f855cu: goto label_4f855c;
        case 0x4f8560u: goto label_4f8560;
        case 0x4f8564u: goto label_4f8564;
        case 0x4f8568u: goto label_4f8568;
        case 0x4f856cu: goto label_4f856c;
        case 0x4f8570u: goto label_4f8570;
        case 0x4f8574u: goto label_4f8574;
        case 0x4f8578u: goto label_4f8578;
        case 0x4f857cu: goto label_4f857c;
        case 0x4f8580u: goto label_4f8580;
        case 0x4f8584u: goto label_4f8584;
        case 0x4f8588u: goto label_4f8588;
        case 0x4f858cu: goto label_4f858c;
        case 0x4f8590u: goto label_4f8590;
        case 0x4f8594u: goto label_4f8594;
        case 0x4f8598u: goto label_4f8598;
        case 0x4f859cu: goto label_4f859c;
        case 0x4f85a0u: goto label_4f85a0;
        case 0x4f85a4u: goto label_4f85a4;
        case 0x4f85a8u: goto label_4f85a8;
        case 0x4f85acu: goto label_4f85ac;
        case 0x4f85b0u: goto label_4f85b0;
        case 0x4f85b4u: goto label_4f85b4;
        case 0x4f85b8u: goto label_4f85b8;
        case 0x4f85bcu: goto label_4f85bc;
        case 0x4f85c0u: goto label_4f85c0;
        case 0x4f85c4u: goto label_4f85c4;
        case 0x4f85c8u: goto label_4f85c8;
        case 0x4f85ccu: goto label_4f85cc;
        case 0x4f85d0u: goto label_4f85d0;
        case 0x4f85d4u: goto label_4f85d4;
        case 0x4f85d8u: goto label_4f85d8;
        case 0x4f85dcu: goto label_4f85dc;
        case 0x4f85e0u: goto label_4f85e0;
        case 0x4f85e4u: goto label_4f85e4;
        case 0x4f85e8u: goto label_4f85e8;
        case 0x4f85ecu: goto label_4f85ec;
        case 0x4f85f0u: goto label_4f85f0;
        case 0x4f85f4u: goto label_4f85f4;
        case 0x4f85f8u: goto label_4f85f8;
        case 0x4f85fcu: goto label_4f85fc;
        case 0x4f8600u: goto label_4f8600;
        case 0x4f8604u: goto label_4f8604;
        case 0x4f8608u: goto label_4f8608;
        case 0x4f860cu: goto label_4f860c;
        case 0x4f8610u: goto label_4f8610;
        case 0x4f8614u: goto label_4f8614;
        case 0x4f8618u: goto label_4f8618;
        case 0x4f861cu: goto label_4f861c;
        case 0x4f8620u: goto label_4f8620;
        case 0x4f8624u: goto label_4f8624;
        case 0x4f8628u: goto label_4f8628;
        case 0x4f862cu: goto label_4f862c;
        case 0x4f8630u: goto label_4f8630;
        case 0x4f8634u: goto label_4f8634;
        case 0x4f8638u: goto label_4f8638;
        case 0x4f863cu: goto label_4f863c;
        case 0x4f8640u: goto label_4f8640;
        case 0x4f8644u: goto label_4f8644;
        case 0x4f8648u: goto label_4f8648;
        case 0x4f864cu: goto label_4f864c;
        case 0x4f8650u: goto label_4f8650;
        case 0x4f8654u: goto label_4f8654;
        case 0x4f8658u: goto label_4f8658;
        case 0x4f865cu: goto label_4f865c;
        case 0x4f8660u: goto label_4f8660;
        case 0x4f8664u: goto label_4f8664;
        case 0x4f8668u: goto label_4f8668;
        case 0x4f866cu: goto label_4f866c;
        case 0x4f8670u: goto label_4f8670;
        case 0x4f8674u: goto label_4f8674;
        case 0x4f8678u: goto label_4f8678;
        case 0x4f867cu: goto label_4f867c;
        case 0x4f8680u: goto label_4f8680;
        case 0x4f8684u: goto label_4f8684;
        case 0x4f8688u: goto label_4f8688;
        case 0x4f868cu: goto label_4f868c;
        case 0x4f8690u: goto label_4f8690;
        case 0x4f8694u: goto label_4f8694;
        case 0x4f8698u: goto label_4f8698;
        case 0x4f869cu: goto label_4f869c;
        case 0x4f86a0u: goto label_4f86a0;
        case 0x4f86a4u: goto label_4f86a4;
        case 0x4f86a8u: goto label_4f86a8;
        case 0x4f86acu: goto label_4f86ac;
        case 0x4f86b0u: goto label_4f86b0;
        case 0x4f86b4u: goto label_4f86b4;
        case 0x4f86b8u: goto label_4f86b8;
        case 0x4f86bcu: goto label_4f86bc;
        case 0x4f86c0u: goto label_4f86c0;
        case 0x4f86c4u: goto label_4f86c4;
        case 0x4f86c8u: goto label_4f86c8;
        case 0x4f86ccu: goto label_4f86cc;
        case 0x4f86d0u: goto label_4f86d0;
        case 0x4f86d4u: goto label_4f86d4;
        case 0x4f86d8u: goto label_4f86d8;
        case 0x4f86dcu: goto label_4f86dc;
        case 0x4f86e0u: goto label_4f86e0;
        case 0x4f86e4u: goto label_4f86e4;
        case 0x4f86e8u: goto label_4f86e8;
        case 0x4f86ecu: goto label_4f86ec;
        case 0x4f86f0u: goto label_4f86f0;
        case 0x4f86f4u: goto label_4f86f4;
        case 0x4f86f8u: goto label_4f86f8;
        case 0x4f86fcu: goto label_4f86fc;
        case 0x4f8700u: goto label_4f8700;
        case 0x4f8704u: goto label_4f8704;
        case 0x4f8708u: goto label_4f8708;
        case 0x4f870cu: goto label_4f870c;
        case 0x4f8710u: goto label_4f8710;
        case 0x4f8714u: goto label_4f8714;
        case 0x4f8718u: goto label_4f8718;
        case 0x4f871cu: goto label_4f871c;
        case 0x4f8720u: goto label_4f8720;
        case 0x4f8724u: goto label_4f8724;
        case 0x4f8728u: goto label_4f8728;
        case 0x4f872cu: goto label_4f872c;
        case 0x4f8730u: goto label_4f8730;
        case 0x4f8734u: goto label_4f8734;
        case 0x4f8738u: goto label_4f8738;
        case 0x4f873cu: goto label_4f873c;
        case 0x4f8740u: goto label_4f8740;
        case 0x4f8744u: goto label_4f8744;
        case 0x4f8748u: goto label_4f8748;
        case 0x4f874cu: goto label_4f874c;
        case 0x4f8750u: goto label_4f8750;
        case 0x4f8754u: goto label_4f8754;
        case 0x4f8758u: goto label_4f8758;
        case 0x4f875cu: goto label_4f875c;
        case 0x4f8760u: goto label_4f8760;
        case 0x4f8764u: goto label_4f8764;
        case 0x4f8768u: goto label_4f8768;
        case 0x4f876cu: goto label_4f876c;
        case 0x4f8770u: goto label_4f8770;
        case 0x4f8774u: goto label_4f8774;
        case 0x4f8778u: goto label_4f8778;
        case 0x4f877cu: goto label_4f877c;
        case 0x4f8780u: goto label_4f8780;
        case 0x4f8784u: goto label_4f8784;
        case 0x4f8788u: goto label_4f8788;
        case 0x4f878cu: goto label_4f878c;
        case 0x4f8790u: goto label_4f8790;
        case 0x4f8794u: goto label_4f8794;
        case 0x4f8798u: goto label_4f8798;
        case 0x4f879cu: goto label_4f879c;
        case 0x4f87a0u: goto label_4f87a0;
        case 0x4f87a4u: goto label_4f87a4;
        case 0x4f87a8u: goto label_4f87a8;
        case 0x4f87acu: goto label_4f87ac;
        case 0x4f87b0u: goto label_4f87b0;
        case 0x4f87b4u: goto label_4f87b4;
        case 0x4f87b8u: goto label_4f87b8;
        case 0x4f87bcu: goto label_4f87bc;
        case 0x4f87c0u: goto label_4f87c0;
        case 0x4f87c4u: goto label_4f87c4;
        case 0x4f87c8u: goto label_4f87c8;
        case 0x4f87ccu: goto label_4f87cc;
        case 0x4f87d0u: goto label_4f87d0;
        case 0x4f87d4u: goto label_4f87d4;
        case 0x4f87d8u: goto label_4f87d8;
        case 0x4f87dcu: goto label_4f87dc;
        case 0x4f87e0u: goto label_4f87e0;
        case 0x4f87e4u: goto label_4f87e4;
        case 0x4f87e8u: goto label_4f87e8;
        case 0x4f87ecu: goto label_4f87ec;
        case 0x4f87f0u: goto label_4f87f0;
        case 0x4f87f4u: goto label_4f87f4;
        case 0x4f87f8u: goto label_4f87f8;
        case 0x4f87fcu: goto label_4f87fc;
        case 0x4f8800u: goto label_4f8800;
        case 0x4f8804u: goto label_4f8804;
        case 0x4f8808u: goto label_4f8808;
        case 0x4f880cu: goto label_4f880c;
        case 0x4f8810u: goto label_4f8810;
        case 0x4f8814u: goto label_4f8814;
        case 0x4f8818u: goto label_4f8818;
        case 0x4f881cu: goto label_4f881c;
        case 0x4f8820u: goto label_4f8820;
        case 0x4f8824u: goto label_4f8824;
        case 0x4f8828u: goto label_4f8828;
        case 0x4f882cu: goto label_4f882c;
        case 0x4f8830u: goto label_4f8830;
        case 0x4f8834u: goto label_4f8834;
        case 0x4f8838u: goto label_4f8838;
        case 0x4f883cu: goto label_4f883c;
        case 0x4f8840u: goto label_4f8840;
        case 0x4f8844u: goto label_4f8844;
        case 0x4f8848u: goto label_4f8848;
        case 0x4f884cu: goto label_4f884c;
        case 0x4f8850u: goto label_4f8850;
        case 0x4f8854u: goto label_4f8854;
        case 0x4f8858u: goto label_4f8858;
        case 0x4f885cu: goto label_4f885c;
        case 0x4f8860u: goto label_4f8860;
        case 0x4f8864u: goto label_4f8864;
        case 0x4f8868u: goto label_4f8868;
        case 0x4f886cu: goto label_4f886c;
        case 0x4f8870u: goto label_4f8870;
        case 0x4f8874u: goto label_4f8874;
        case 0x4f8878u: goto label_4f8878;
        case 0x4f887cu: goto label_4f887c;
        case 0x4f8880u: goto label_4f8880;
        case 0x4f8884u: goto label_4f8884;
        case 0x4f8888u: goto label_4f8888;
        case 0x4f888cu: goto label_4f888c;
        case 0x4f8890u: goto label_4f8890;
        case 0x4f8894u: goto label_4f8894;
        case 0x4f8898u: goto label_4f8898;
        case 0x4f889cu: goto label_4f889c;
        case 0x4f88a0u: goto label_4f88a0;
        case 0x4f88a4u: goto label_4f88a4;
        case 0x4f88a8u: goto label_4f88a8;
        case 0x4f88acu: goto label_4f88ac;
        case 0x4f88b0u: goto label_4f88b0;
        case 0x4f88b4u: goto label_4f88b4;
        case 0x4f88b8u: goto label_4f88b8;
        case 0x4f88bcu: goto label_4f88bc;
        case 0x4f88c0u: goto label_4f88c0;
        case 0x4f88c4u: goto label_4f88c4;
        case 0x4f88c8u: goto label_4f88c8;
        case 0x4f88ccu: goto label_4f88cc;
        case 0x4f88d0u: goto label_4f88d0;
        case 0x4f88d4u: goto label_4f88d4;
        case 0x4f88d8u: goto label_4f88d8;
        case 0x4f88dcu: goto label_4f88dc;
        case 0x4f88e0u: goto label_4f88e0;
        case 0x4f88e4u: goto label_4f88e4;
        case 0x4f88e8u: goto label_4f88e8;
        case 0x4f88ecu: goto label_4f88ec;
        case 0x4f88f0u: goto label_4f88f0;
        case 0x4f88f4u: goto label_4f88f4;
        case 0x4f88f8u: goto label_4f88f8;
        case 0x4f88fcu: goto label_4f88fc;
        case 0x4f8900u: goto label_4f8900;
        case 0x4f8904u: goto label_4f8904;
        case 0x4f8908u: goto label_4f8908;
        case 0x4f890cu: goto label_4f890c;
        case 0x4f8910u: goto label_4f8910;
        case 0x4f8914u: goto label_4f8914;
        case 0x4f8918u: goto label_4f8918;
        case 0x4f891cu: goto label_4f891c;
        case 0x4f8920u: goto label_4f8920;
        case 0x4f8924u: goto label_4f8924;
        case 0x4f8928u: goto label_4f8928;
        case 0x4f892cu: goto label_4f892c;
        case 0x4f8930u: goto label_4f8930;
        case 0x4f8934u: goto label_4f8934;
        case 0x4f8938u: goto label_4f8938;
        case 0x4f893cu: goto label_4f893c;
        case 0x4f8940u: goto label_4f8940;
        case 0x4f8944u: goto label_4f8944;
        case 0x4f8948u: goto label_4f8948;
        case 0x4f894cu: goto label_4f894c;
        case 0x4f8950u: goto label_4f8950;
        case 0x4f8954u: goto label_4f8954;
        case 0x4f8958u: goto label_4f8958;
        case 0x4f895cu: goto label_4f895c;
        case 0x4f8960u: goto label_4f8960;
        case 0x4f8964u: goto label_4f8964;
        case 0x4f8968u: goto label_4f8968;
        case 0x4f896cu: goto label_4f896c;
        case 0x4f8970u: goto label_4f8970;
        case 0x4f8974u: goto label_4f8974;
        case 0x4f8978u: goto label_4f8978;
        case 0x4f897cu: goto label_4f897c;
        case 0x4f8980u: goto label_4f8980;
        case 0x4f8984u: goto label_4f8984;
        case 0x4f8988u: goto label_4f8988;
        case 0x4f898cu: goto label_4f898c;
        case 0x4f8990u: goto label_4f8990;
        case 0x4f8994u: goto label_4f8994;
        case 0x4f8998u: goto label_4f8998;
        case 0x4f899cu: goto label_4f899c;
        case 0x4f89a0u: goto label_4f89a0;
        case 0x4f89a4u: goto label_4f89a4;
        case 0x4f89a8u: goto label_4f89a8;
        case 0x4f89acu: goto label_4f89ac;
        case 0x4f89b0u: goto label_4f89b0;
        case 0x4f89b4u: goto label_4f89b4;
        case 0x4f89b8u: goto label_4f89b8;
        case 0x4f89bcu: goto label_4f89bc;
        case 0x4f89c0u: goto label_4f89c0;
        case 0x4f89c4u: goto label_4f89c4;
        case 0x4f89c8u: goto label_4f89c8;
        case 0x4f89ccu: goto label_4f89cc;
        case 0x4f89d0u: goto label_4f89d0;
        case 0x4f89d4u: goto label_4f89d4;
        case 0x4f89d8u: goto label_4f89d8;
        case 0x4f89dcu: goto label_4f89dc;
        case 0x4f89e0u: goto label_4f89e0;
        case 0x4f89e4u: goto label_4f89e4;
        case 0x4f89e8u: goto label_4f89e8;
        case 0x4f89ecu: goto label_4f89ec;
        case 0x4f89f0u: goto label_4f89f0;
        case 0x4f89f4u: goto label_4f89f4;
        case 0x4f89f8u: goto label_4f89f8;
        case 0x4f89fcu: goto label_4f89fc;
        case 0x4f8a00u: goto label_4f8a00;
        case 0x4f8a04u: goto label_4f8a04;
        case 0x4f8a08u: goto label_4f8a08;
        case 0x4f8a0cu: goto label_4f8a0c;
        case 0x4f8a10u: goto label_4f8a10;
        case 0x4f8a14u: goto label_4f8a14;
        case 0x4f8a18u: goto label_4f8a18;
        case 0x4f8a1cu: goto label_4f8a1c;
        case 0x4f8a20u: goto label_4f8a20;
        case 0x4f8a24u: goto label_4f8a24;
        case 0x4f8a28u: goto label_4f8a28;
        case 0x4f8a2cu: goto label_4f8a2c;
        case 0x4f8a30u: goto label_4f8a30;
        case 0x4f8a34u: goto label_4f8a34;
        case 0x4f8a38u: goto label_4f8a38;
        case 0x4f8a3cu: goto label_4f8a3c;
        case 0x4f8a40u: goto label_4f8a40;
        case 0x4f8a44u: goto label_4f8a44;
        case 0x4f8a48u: goto label_4f8a48;
        case 0x4f8a4cu: goto label_4f8a4c;
        case 0x4f8a50u: goto label_4f8a50;
        case 0x4f8a54u: goto label_4f8a54;
        case 0x4f8a58u: goto label_4f8a58;
        case 0x4f8a5cu: goto label_4f8a5c;
        case 0x4f8a60u: goto label_4f8a60;
        case 0x4f8a64u: goto label_4f8a64;
        case 0x4f8a68u: goto label_4f8a68;
        case 0x4f8a6cu: goto label_4f8a6c;
        case 0x4f8a70u: goto label_4f8a70;
        case 0x4f8a74u: goto label_4f8a74;
        case 0x4f8a78u: goto label_4f8a78;
        case 0x4f8a7cu: goto label_4f8a7c;
        case 0x4f8a80u: goto label_4f8a80;
        case 0x4f8a84u: goto label_4f8a84;
        case 0x4f8a88u: goto label_4f8a88;
        case 0x4f8a8cu: goto label_4f8a8c;
        case 0x4f8a90u: goto label_4f8a90;
        case 0x4f8a94u: goto label_4f8a94;
        case 0x4f8a98u: goto label_4f8a98;
        case 0x4f8a9cu: goto label_4f8a9c;
        case 0x4f8aa0u: goto label_4f8aa0;
        case 0x4f8aa4u: goto label_4f8aa4;
        case 0x4f8aa8u: goto label_4f8aa8;
        case 0x4f8aacu: goto label_4f8aac;
        case 0x4f8ab0u: goto label_4f8ab0;
        case 0x4f8ab4u: goto label_4f8ab4;
        case 0x4f8ab8u: goto label_4f8ab8;
        case 0x4f8abcu: goto label_4f8abc;
        case 0x4f8ac0u: goto label_4f8ac0;
        case 0x4f8ac4u: goto label_4f8ac4;
        case 0x4f8ac8u: goto label_4f8ac8;
        case 0x4f8accu: goto label_4f8acc;
        case 0x4f8ad0u: goto label_4f8ad0;
        case 0x4f8ad4u: goto label_4f8ad4;
        case 0x4f8ad8u: goto label_4f8ad8;
        case 0x4f8adcu: goto label_4f8adc;
        case 0x4f8ae0u: goto label_4f8ae0;
        case 0x4f8ae4u: goto label_4f8ae4;
        case 0x4f8ae8u: goto label_4f8ae8;
        case 0x4f8aecu: goto label_4f8aec;
        case 0x4f8af0u: goto label_4f8af0;
        case 0x4f8af4u: goto label_4f8af4;
        case 0x4f8af8u: goto label_4f8af8;
        case 0x4f8afcu: goto label_4f8afc;
        case 0x4f8b00u: goto label_4f8b00;
        case 0x4f8b04u: goto label_4f8b04;
        case 0x4f8b08u: goto label_4f8b08;
        case 0x4f8b0cu: goto label_4f8b0c;
        case 0x4f8b10u: goto label_4f8b10;
        case 0x4f8b14u: goto label_4f8b14;
        case 0x4f8b18u: goto label_4f8b18;
        case 0x4f8b1cu: goto label_4f8b1c;
        case 0x4f8b20u: goto label_4f8b20;
        case 0x4f8b24u: goto label_4f8b24;
        case 0x4f8b28u: goto label_4f8b28;
        case 0x4f8b2cu: goto label_4f8b2c;
        case 0x4f8b30u: goto label_4f8b30;
        case 0x4f8b34u: goto label_4f8b34;
        case 0x4f8b38u: goto label_4f8b38;
        case 0x4f8b3cu: goto label_4f8b3c;
        case 0x4f8b40u: goto label_4f8b40;
        case 0x4f8b44u: goto label_4f8b44;
        case 0x4f8b48u: goto label_4f8b48;
        case 0x4f8b4cu: goto label_4f8b4c;
        case 0x4f8b50u: goto label_4f8b50;
        case 0x4f8b54u: goto label_4f8b54;
        case 0x4f8b58u: goto label_4f8b58;
        case 0x4f8b5cu: goto label_4f8b5c;
        case 0x4f8b60u: goto label_4f8b60;
        case 0x4f8b64u: goto label_4f8b64;
        case 0x4f8b68u: goto label_4f8b68;
        case 0x4f8b6cu: goto label_4f8b6c;
        case 0x4f8b70u: goto label_4f8b70;
        case 0x4f8b74u: goto label_4f8b74;
        case 0x4f8b78u: goto label_4f8b78;
        case 0x4f8b7cu: goto label_4f8b7c;
        case 0x4f8b80u: goto label_4f8b80;
        case 0x4f8b84u: goto label_4f8b84;
        case 0x4f8b88u: goto label_4f8b88;
        case 0x4f8b8cu: goto label_4f8b8c;
        case 0x4f8b90u: goto label_4f8b90;
        case 0x4f8b94u: goto label_4f8b94;
        case 0x4f8b98u: goto label_4f8b98;
        case 0x4f8b9cu: goto label_4f8b9c;
        case 0x4f8ba0u: goto label_4f8ba0;
        case 0x4f8ba4u: goto label_4f8ba4;
        case 0x4f8ba8u: goto label_4f8ba8;
        case 0x4f8bacu: goto label_4f8bac;
        case 0x4f8bb0u: goto label_4f8bb0;
        case 0x4f8bb4u: goto label_4f8bb4;
        case 0x4f8bb8u: goto label_4f8bb8;
        case 0x4f8bbcu: goto label_4f8bbc;
        case 0x4f8bc0u: goto label_4f8bc0;
        case 0x4f8bc4u: goto label_4f8bc4;
        case 0x4f8bc8u: goto label_4f8bc8;
        case 0x4f8bccu: goto label_4f8bcc;
        case 0x4f8bd0u: goto label_4f8bd0;
        case 0x4f8bd4u: goto label_4f8bd4;
        case 0x4f8bd8u: goto label_4f8bd8;
        case 0x4f8bdcu: goto label_4f8bdc;
        case 0x4f8be0u: goto label_4f8be0;
        case 0x4f8be4u: goto label_4f8be4;
        case 0x4f8be8u: goto label_4f8be8;
        case 0x4f8becu: goto label_4f8bec;
        case 0x4f8bf0u: goto label_4f8bf0;
        case 0x4f8bf4u: goto label_4f8bf4;
        case 0x4f8bf8u: goto label_4f8bf8;
        case 0x4f8bfcu: goto label_4f8bfc;
        case 0x4f8c00u: goto label_4f8c00;
        case 0x4f8c04u: goto label_4f8c04;
        case 0x4f8c08u: goto label_4f8c08;
        case 0x4f8c0cu: goto label_4f8c0c;
        case 0x4f8c10u: goto label_4f8c10;
        case 0x4f8c14u: goto label_4f8c14;
        case 0x4f8c18u: goto label_4f8c18;
        case 0x4f8c1cu: goto label_4f8c1c;
        case 0x4f8c20u: goto label_4f8c20;
        case 0x4f8c24u: goto label_4f8c24;
        case 0x4f8c28u: goto label_4f8c28;
        case 0x4f8c2cu: goto label_4f8c2c;
        case 0x4f8c30u: goto label_4f8c30;
        case 0x4f8c34u: goto label_4f8c34;
        case 0x4f8c38u: goto label_4f8c38;
        case 0x4f8c3cu: goto label_4f8c3c;
        case 0x4f8c40u: goto label_4f8c40;
        case 0x4f8c44u: goto label_4f8c44;
        case 0x4f8c48u: goto label_4f8c48;
        case 0x4f8c4cu: goto label_4f8c4c;
        case 0x4f8c50u: goto label_4f8c50;
        case 0x4f8c54u: goto label_4f8c54;
        case 0x4f8c58u: goto label_4f8c58;
        case 0x4f8c5cu: goto label_4f8c5c;
        case 0x4f8c60u: goto label_4f8c60;
        case 0x4f8c64u: goto label_4f8c64;
        case 0x4f8c68u: goto label_4f8c68;
        case 0x4f8c6cu: goto label_4f8c6c;
        case 0x4f8c70u: goto label_4f8c70;
        case 0x4f8c74u: goto label_4f8c74;
        case 0x4f8c78u: goto label_4f8c78;
        case 0x4f8c7cu: goto label_4f8c7c;
        case 0x4f8c80u: goto label_4f8c80;
        case 0x4f8c84u: goto label_4f8c84;
        case 0x4f8c88u: goto label_4f8c88;
        case 0x4f8c8cu: goto label_4f8c8c;
        case 0x4f8c90u: goto label_4f8c90;
        case 0x4f8c94u: goto label_4f8c94;
        case 0x4f8c98u: goto label_4f8c98;
        case 0x4f8c9cu: goto label_4f8c9c;
        case 0x4f8ca0u: goto label_4f8ca0;
        case 0x4f8ca4u: goto label_4f8ca4;
        case 0x4f8ca8u: goto label_4f8ca8;
        case 0x4f8cacu: goto label_4f8cac;
        case 0x4f8cb0u: goto label_4f8cb0;
        case 0x4f8cb4u: goto label_4f8cb4;
        case 0x4f8cb8u: goto label_4f8cb8;
        case 0x4f8cbcu: goto label_4f8cbc;
        case 0x4f8cc0u: goto label_4f8cc0;
        case 0x4f8cc4u: goto label_4f8cc4;
        case 0x4f8cc8u: goto label_4f8cc8;
        case 0x4f8cccu: goto label_4f8ccc;
        case 0x4f8cd0u: goto label_4f8cd0;
        case 0x4f8cd4u: goto label_4f8cd4;
        case 0x4f8cd8u: goto label_4f8cd8;
        case 0x4f8cdcu: goto label_4f8cdc;
        case 0x4f8ce0u: goto label_4f8ce0;
        case 0x4f8ce4u: goto label_4f8ce4;
        case 0x4f8ce8u: goto label_4f8ce8;
        case 0x4f8cecu: goto label_4f8cec;
        case 0x4f8cf0u: goto label_4f8cf0;
        case 0x4f8cf4u: goto label_4f8cf4;
        case 0x4f8cf8u: goto label_4f8cf8;
        case 0x4f8cfcu: goto label_4f8cfc;
        case 0x4f8d00u: goto label_4f8d00;
        case 0x4f8d04u: goto label_4f8d04;
        case 0x4f8d08u: goto label_4f8d08;
        case 0x4f8d0cu: goto label_4f8d0c;
        case 0x4f8d10u: goto label_4f8d10;
        case 0x4f8d14u: goto label_4f8d14;
        case 0x4f8d18u: goto label_4f8d18;
        case 0x4f8d1cu: goto label_4f8d1c;
        case 0x4f8d20u: goto label_4f8d20;
        case 0x4f8d24u: goto label_4f8d24;
        case 0x4f8d28u: goto label_4f8d28;
        case 0x4f8d2cu: goto label_4f8d2c;
        case 0x4f8d30u: goto label_4f8d30;
        case 0x4f8d34u: goto label_4f8d34;
        case 0x4f8d38u: goto label_4f8d38;
        case 0x4f8d3cu: goto label_4f8d3c;
        case 0x4f8d40u: goto label_4f8d40;
        case 0x4f8d44u: goto label_4f8d44;
        case 0x4f8d48u: goto label_4f8d48;
        case 0x4f8d4cu: goto label_4f8d4c;
        case 0x4f8d50u: goto label_4f8d50;
        case 0x4f8d54u: goto label_4f8d54;
        case 0x4f8d58u: goto label_4f8d58;
        case 0x4f8d5cu: goto label_4f8d5c;
        case 0x4f8d60u: goto label_4f8d60;
        case 0x4f8d64u: goto label_4f8d64;
        case 0x4f8d68u: goto label_4f8d68;
        case 0x4f8d6cu: goto label_4f8d6c;
        case 0x4f8d70u: goto label_4f8d70;
        case 0x4f8d74u: goto label_4f8d74;
        case 0x4f8d78u: goto label_4f8d78;
        case 0x4f8d7cu: goto label_4f8d7c;
        case 0x4f8d80u: goto label_4f8d80;
        case 0x4f8d84u: goto label_4f8d84;
        case 0x4f8d88u: goto label_4f8d88;
        case 0x4f8d8cu: goto label_4f8d8c;
        case 0x4f8d90u: goto label_4f8d90;
        case 0x4f8d94u: goto label_4f8d94;
        case 0x4f8d98u: goto label_4f8d98;
        case 0x4f8d9cu: goto label_4f8d9c;
        case 0x4f8da0u: goto label_4f8da0;
        case 0x4f8da4u: goto label_4f8da4;
        case 0x4f8da8u: goto label_4f8da8;
        case 0x4f8dacu: goto label_4f8dac;
        case 0x4f8db0u: goto label_4f8db0;
        case 0x4f8db4u: goto label_4f8db4;
        case 0x4f8db8u: goto label_4f8db8;
        case 0x4f8dbcu: goto label_4f8dbc;
        case 0x4f8dc0u: goto label_4f8dc0;
        case 0x4f8dc4u: goto label_4f8dc4;
        case 0x4f8dc8u: goto label_4f8dc8;
        case 0x4f8dccu: goto label_4f8dcc;
        case 0x4f8dd0u: goto label_4f8dd0;
        case 0x4f8dd4u: goto label_4f8dd4;
        case 0x4f8dd8u: goto label_4f8dd8;
        case 0x4f8ddcu: goto label_4f8ddc;
        case 0x4f8de0u: goto label_4f8de0;
        case 0x4f8de4u: goto label_4f8de4;
        case 0x4f8de8u: goto label_4f8de8;
        case 0x4f8decu: goto label_4f8dec;
        case 0x4f8df0u: goto label_4f8df0;
        case 0x4f8df4u: goto label_4f8df4;
        case 0x4f8df8u: goto label_4f8df8;
        case 0x4f8dfcu: goto label_4f8dfc;
        case 0x4f8e00u: goto label_4f8e00;
        case 0x4f8e04u: goto label_4f8e04;
        case 0x4f8e08u: goto label_4f8e08;
        case 0x4f8e0cu: goto label_4f8e0c;
        case 0x4f8e10u: goto label_4f8e10;
        case 0x4f8e14u: goto label_4f8e14;
        case 0x4f8e18u: goto label_4f8e18;
        case 0x4f8e1cu: goto label_4f8e1c;
        case 0x4f8e20u: goto label_4f8e20;
        case 0x4f8e24u: goto label_4f8e24;
        case 0x4f8e28u: goto label_4f8e28;
        case 0x4f8e2cu: goto label_4f8e2c;
        case 0x4f8e30u: goto label_4f8e30;
        case 0x4f8e34u: goto label_4f8e34;
        case 0x4f8e38u: goto label_4f8e38;
        case 0x4f8e3cu: goto label_4f8e3c;
        case 0x4f8e40u: goto label_4f8e40;
        case 0x4f8e44u: goto label_4f8e44;
        case 0x4f8e48u: goto label_4f8e48;
        case 0x4f8e4cu: goto label_4f8e4c;
        case 0x4f8e50u: goto label_4f8e50;
        case 0x4f8e54u: goto label_4f8e54;
        case 0x4f8e58u: goto label_4f8e58;
        case 0x4f8e5cu: goto label_4f8e5c;
        case 0x4f8e60u: goto label_4f8e60;
        case 0x4f8e64u: goto label_4f8e64;
        case 0x4f8e68u: goto label_4f8e68;
        case 0x4f8e6cu: goto label_4f8e6c;
        case 0x4f8e70u: goto label_4f8e70;
        case 0x4f8e74u: goto label_4f8e74;
        case 0x4f8e78u: goto label_4f8e78;
        case 0x4f8e7cu: goto label_4f8e7c;
        case 0x4f8e80u: goto label_4f8e80;
        case 0x4f8e84u: goto label_4f8e84;
        case 0x4f8e88u: goto label_4f8e88;
        case 0x4f8e8cu: goto label_4f8e8c;
        case 0x4f8e90u: goto label_4f8e90;
        case 0x4f8e94u: goto label_4f8e94;
        case 0x4f8e98u: goto label_4f8e98;
        case 0x4f8e9cu: goto label_4f8e9c;
        case 0x4f8ea0u: goto label_4f8ea0;
        case 0x4f8ea4u: goto label_4f8ea4;
        case 0x4f8ea8u: goto label_4f8ea8;
        case 0x4f8eacu: goto label_4f8eac;
        case 0x4f8eb0u: goto label_4f8eb0;
        case 0x4f8eb4u: goto label_4f8eb4;
        case 0x4f8eb8u: goto label_4f8eb8;
        case 0x4f8ebcu: goto label_4f8ebc;
        case 0x4f8ec0u: goto label_4f8ec0;
        case 0x4f8ec4u: goto label_4f8ec4;
        case 0x4f8ec8u: goto label_4f8ec8;
        case 0x4f8eccu: goto label_4f8ecc;
        case 0x4f8ed0u: goto label_4f8ed0;
        case 0x4f8ed4u: goto label_4f8ed4;
        case 0x4f8ed8u: goto label_4f8ed8;
        case 0x4f8edcu: goto label_4f8edc;
        case 0x4f8ee0u: goto label_4f8ee0;
        case 0x4f8ee4u: goto label_4f8ee4;
        case 0x4f8ee8u: goto label_4f8ee8;
        case 0x4f8eecu: goto label_4f8eec;
        case 0x4f8ef0u: goto label_4f8ef0;
        case 0x4f8ef4u: goto label_4f8ef4;
        case 0x4f8ef8u: goto label_4f8ef8;
        case 0x4f8efcu: goto label_4f8efc;
        case 0x4f8f00u: goto label_4f8f00;
        case 0x4f8f04u: goto label_4f8f04;
        case 0x4f8f08u: goto label_4f8f08;
        case 0x4f8f0cu: goto label_4f8f0c;
        case 0x4f8f10u: goto label_4f8f10;
        case 0x4f8f14u: goto label_4f8f14;
        case 0x4f8f18u: goto label_4f8f18;
        case 0x4f8f1cu: goto label_4f8f1c;
        case 0x4f8f20u: goto label_4f8f20;
        case 0x4f8f24u: goto label_4f8f24;
        case 0x4f8f28u: goto label_4f8f28;
        case 0x4f8f2cu: goto label_4f8f2c;
        case 0x4f8f30u: goto label_4f8f30;
        case 0x4f8f34u: goto label_4f8f34;
        case 0x4f8f38u: goto label_4f8f38;
        case 0x4f8f3cu: goto label_4f8f3c;
        case 0x4f8f40u: goto label_4f8f40;
        case 0x4f8f44u: goto label_4f8f44;
        case 0x4f8f48u: goto label_4f8f48;
        case 0x4f8f4cu: goto label_4f8f4c;
        case 0x4f8f50u: goto label_4f8f50;
        case 0x4f8f54u: goto label_4f8f54;
        case 0x4f8f58u: goto label_4f8f58;
        case 0x4f8f5cu: goto label_4f8f5c;
        case 0x4f8f60u: goto label_4f8f60;
        case 0x4f8f64u: goto label_4f8f64;
        case 0x4f8f68u: goto label_4f8f68;
        case 0x4f8f6cu: goto label_4f8f6c;
        case 0x4f8f70u: goto label_4f8f70;
        case 0x4f8f74u: goto label_4f8f74;
        case 0x4f8f78u: goto label_4f8f78;
        case 0x4f8f7cu: goto label_4f8f7c;
        case 0x4f8f80u: goto label_4f8f80;
        case 0x4f8f84u: goto label_4f8f84;
        case 0x4f8f88u: goto label_4f8f88;
        case 0x4f8f8cu: goto label_4f8f8c;
        case 0x4f8f90u: goto label_4f8f90;
        case 0x4f8f94u: goto label_4f8f94;
        case 0x4f8f98u: goto label_4f8f98;
        case 0x4f8f9cu: goto label_4f8f9c;
        case 0x4f8fa0u: goto label_4f8fa0;
        case 0x4f8fa4u: goto label_4f8fa4;
        case 0x4f8fa8u: goto label_4f8fa8;
        case 0x4f8facu: goto label_4f8fac;
        case 0x4f8fb0u: goto label_4f8fb0;
        case 0x4f8fb4u: goto label_4f8fb4;
        case 0x4f8fb8u: goto label_4f8fb8;
        case 0x4f8fbcu: goto label_4f8fbc;
        case 0x4f8fc0u: goto label_4f8fc0;
        case 0x4f8fc4u: goto label_4f8fc4;
        case 0x4f8fc8u: goto label_4f8fc8;
        case 0x4f8fccu: goto label_4f8fcc;
        case 0x4f8fd0u: goto label_4f8fd0;
        case 0x4f8fd4u: goto label_4f8fd4;
        case 0x4f8fd8u: goto label_4f8fd8;
        case 0x4f8fdcu: goto label_4f8fdc;
        case 0x4f8fe0u: goto label_4f8fe0;
        case 0x4f8fe4u: goto label_4f8fe4;
        case 0x4f8fe8u: goto label_4f8fe8;
        case 0x4f8fecu: goto label_4f8fec;
        case 0x4f8ff0u: goto label_4f8ff0;
        case 0x4f8ff4u: goto label_4f8ff4;
        case 0x4f8ff8u: goto label_4f8ff8;
        case 0x4f8ffcu: goto label_4f8ffc;
        case 0x4f9000u: goto label_4f9000;
        case 0x4f9004u: goto label_4f9004;
        case 0x4f9008u: goto label_4f9008;
        case 0x4f900cu: goto label_4f900c;
        case 0x4f9010u: goto label_4f9010;
        case 0x4f9014u: goto label_4f9014;
        case 0x4f9018u: goto label_4f9018;
        case 0x4f901cu: goto label_4f901c;
        case 0x4f9020u: goto label_4f9020;
        case 0x4f9024u: goto label_4f9024;
        case 0x4f9028u: goto label_4f9028;
        case 0x4f902cu: goto label_4f902c;
        case 0x4f9030u: goto label_4f9030;
        case 0x4f9034u: goto label_4f9034;
        case 0x4f9038u: goto label_4f9038;
        case 0x4f903cu: goto label_4f903c;
        case 0x4f9040u: goto label_4f9040;
        case 0x4f9044u: goto label_4f9044;
        case 0x4f9048u: goto label_4f9048;
        case 0x4f904cu: goto label_4f904c;
        case 0x4f9050u: goto label_4f9050;
        case 0x4f9054u: goto label_4f9054;
        case 0x4f9058u: goto label_4f9058;
        case 0x4f905cu: goto label_4f905c;
        case 0x4f9060u: goto label_4f9060;
        case 0x4f9064u: goto label_4f9064;
        case 0x4f9068u: goto label_4f9068;
        case 0x4f906cu: goto label_4f906c;
        case 0x4f9070u: goto label_4f9070;
        case 0x4f9074u: goto label_4f9074;
        case 0x4f9078u: goto label_4f9078;
        case 0x4f907cu: goto label_4f907c;
        case 0x4f9080u: goto label_4f9080;
        case 0x4f9084u: goto label_4f9084;
        case 0x4f9088u: goto label_4f9088;
        case 0x4f908cu: goto label_4f908c;
        case 0x4f9090u: goto label_4f9090;
        case 0x4f9094u: goto label_4f9094;
        case 0x4f9098u: goto label_4f9098;
        case 0x4f909cu: goto label_4f909c;
        case 0x4f90a0u: goto label_4f90a0;
        case 0x4f90a4u: goto label_4f90a4;
        case 0x4f90a8u: goto label_4f90a8;
        case 0x4f90acu: goto label_4f90ac;
        case 0x4f90b0u: goto label_4f90b0;
        case 0x4f90b4u: goto label_4f90b4;
        case 0x4f90b8u: goto label_4f90b8;
        case 0x4f90bcu: goto label_4f90bc;
        case 0x4f90c0u: goto label_4f90c0;
        case 0x4f90c4u: goto label_4f90c4;
        case 0x4f90c8u: goto label_4f90c8;
        case 0x4f90ccu: goto label_4f90cc;
        case 0x4f90d0u: goto label_4f90d0;
        case 0x4f90d4u: goto label_4f90d4;
        case 0x4f90d8u: goto label_4f90d8;
        case 0x4f90dcu: goto label_4f90dc;
        case 0x4f90e0u: goto label_4f90e0;
        case 0x4f90e4u: goto label_4f90e4;
        case 0x4f90e8u: goto label_4f90e8;
        case 0x4f90ecu: goto label_4f90ec;
        case 0x4f90f0u: goto label_4f90f0;
        case 0x4f90f4u: goto label_4f90f4;
        case 0x4f90f8u: goto label_4f90f8;
        case 0x4f90fcu: goto label_4f90fc;
        case 0x4f9100u: goto label_4f9100;
        case 0x4f9104u: goto label_4f9104;
        case 0x4f9108u: goto label_4f9108;
        case 0x4f910cu: goto label_4f910c;
        case 0x4f9110u: goto label_4f9110;
        case 0x4f9114u: goto label_4f9114;
        case 0x4f9118u: goto label_4f9118;
        case 0x4f911cu: goto label_4f911c;
        case 0x4f9120u: goto label_4f9120;
        case 0x4f9124u: goto label_4f9124;
        case 0x4f9128u: goto label_4f9128;
        case 0x4f912cu: goto label_4f912c;
        case 0x4f9130u: goto label_4f9130;
        case 0x4f9134u: goto label_4f9134;
        case 0x4f9138u: goto label_4f9138;
        case 0x4f913cu: goto label_4f913c;
        case 0x4f9140u: goto label_4f9140;
        case 0x4f9144u: goto label_4f9144;
        case 0x4f9148u: goto label_4f9148;
        case 0x4f914cu: goto label_4f914c;
        case 0x4f9150u: goto label_4f9150;
        case 0x4f9154u: goto label_4f9154;
        case 0x4f9158u: goto label_4f9158;
        case 0x4f915cu: goto label_4f915c;
        case 0x4f9160u: goto label_4f9160;
        case 0x4f9164u: goto label_4f9164;
        case 0x4f9168u: goto label_4f9168;
        case 0x4f916cu: goto label_4f916c;
        case 0x4f9170u: goto label_4f9170;
        case 0x4f9174u: goto label_4f9174;
        case 0x4f9178u: goto label_4f9178;
        case 0x4f917cu: goto label_4f917c;
        case 0x4f9180u: goto label_4f9180;
        case 0x4f9184u: goto label_4f9184;
        case 0x4f9188u: goto label_4f9188;
        case 0x4f918cu: goto label_4f918c;
        case 0x4f9190u: goto label_4f9190;
        case 0x4f9194u: goto label_4f9194;
        case 0x4f9198u: goto label_4f9198;
        case 0x4f919cu: goto label_4f919c;
        case 0x4f91a0u: goto label_4f91a0;
        case 0x4f91a4u: goto label_4f91a4;
        case 0x4f91a8u: goto label_4f91a8;
        case 0x4f91acu: goto label_4f91ac;
        case 0x4f91b0u: goto label_4f91b0;
        case 0x4f91b4u: goto label_4f91b4;
        case 0x4f91b8u: goto label_4f91b8;
        case 0x4f91bcu: goto label_4f91bc;
        case 0x4f91c0u: goto label_4f91c0;
        case 0x4f91c4u: goto label_4f91c4;
        case 0x4f91c8u: goto label_4f91c8;
        case 0x4f91ccu: goto label_4f91cc;
        case 0x4f91d0u: goto label_4f91d0;
        case 0x4f91d4u: goto label_4f91d4;
        case 0x4f91d8u: goto label_4f91d8;
        case 0x4f91dcu: goto label_4f91dc;
        case 0x4f91e0u: goto label_4f91e0;
        case 0x4f91e4u: goto label_4f91e4;
        case 0x4f91e8u: goto label_4f91e8;
        case 0x4f91ecu: goto label_4f91ec;
        case 0x4f91f0u: goto label_4f91f0;
        case 0x4f91f4u: goto label_4f91f4;
        case 0x4f91f8u: goto label_4f91f8;
        case 0x4f91fcu: goto label_4f91fc;
        case 0x4f9200u: goto label_4f9200;
        case 0x4f9204u: goto label_4f9204;
        case 0x4f9208u: goto label_4f9208;
        case 0x4f920cu: goto label_4f920c;
        case 0x4f9210u: goto label_4f9210;
        case 0x4f9214u: goto label_4f9214;
        case 0x4f9218u: goto label_4f9218;
        case 0x4f921cu: goto label_4f921c;
        case 0x4f9220u: goto label_4f9220;
        case 0x4f9224u: goto label_4f9224;
        case 0x4f9228u: goto label_4f9228;
        case 0x4f922cu: goto label_4f922c;
        case 0x4f9230u: goto label_4f9230;
        case 0x4f9234u: goto label_4f9234;
        case 0x4f9238u: goto label_4f9238;
        case 0x4f923cu: goto label_4f923c;
        case 0x4f9240u: goto label_4f9240;
        case 0x4f9244u: goto label_4f9244;
        case 0x4f9248u: goto label_4f9248;
        case 0x4f924cu: goto label_4f924c;
        case 0x4f9250u: goto label_4f9250;
        case 0x4f9254u: goto label_4f9254;
        case 0x4f9258u: goto label_4f9258;
        case 0x4f925cu: goto label_4f925c;
        case 0x4f9260u: goto label_4f9260;
        case 0x4f9264u: goto label_4f9264;
        case 0x4f9268u: goto label_4f9268;
        case 0x4f926cu: goto label_4f926c;
        case 0x4f9270u: goto label_4f9270;
        case 0x4f9274u: goto label_4f9274;
        case 0x4f9278u: goto label_4f9278;
        case 0x4f927cu: goto label_4f927c;
        case 0x4f9280u: goto label_4f9280;
        case 0x4f9284u: goto label_4f9284;
        case 0x4f9288u: goto label_4f9288;
        case 0x4f928cu: goto label_4f928c;
        case 0x4f9290u: goto label_4f9290;
        case 0x4f9294u: goto label_4f9294;
        case 0x4f9298u: goto label_4f9298;
        case 0x4f929cu: goto label_4f929c;
        case 0x4f92a0u: goto label_4f92a0;
        case 0x4f92a4u: goto label_4f92a4;
        case 0x4f92a8u: goto label_4f92a8;
        case 0x4f92acu: goto label_4f92ac;
        case 0x4f92b0u: goto label_4f92b0;
        case 0x4f92b4u: goto label_4f92b4;
        case 0x4f92b8u: goto label_4f92b8;
        case 0x4f92bcu: goto label_4f92bc;
        case 0x4f92c0u: goto label_4f92c0;
        case 0x4f92c4u: goto label_4f92c4;
        case 0x4f92c8u: goto label_4f92c8;
        case 0x4f92ccu: goto label_4f92cc;
        case 0x4f92d0u: goto label_4f92d0;
        case 0x4f92d4u: goto label_4f92d4;
        case 0x4f92d8u: goto label_4f92d8;
        case 0x4f92dcu: goto label_4f92dc;
        case 0x4f92e0u: goto label_4f92e0;
        case 0x4f92e4u: goto label_4f92e4;
        case 0x4f92e8u: goto label_4f92e8;
        case 0x4f92ecu: goto label_4f92ec;
        case 0x4f92f0u: goto label_4f92f0;
        case 0x4f92f4u: goto label_4f92f4;
        case 0x4f92f8u: goto label_4f92f8;
        case 0x4f92fcu: goto label_4f92fc;
        case 0x4f9300u: goto label_4f9300;
        case 0x4f9304u: goto label_4f9304;
        case 0x4f9308u: goto label_4f9308;
        case 0x4f930cu: goto label_4f930c;
        case 0x4f9310u: goto label_4f9310;
        case 0x4f9314u: goto label_4f9314;
        case 0x4f9318u: goto label_4f9318;
        case 0x4f931cu: goto label_4f931c;
        case 0x4f9320u: goto label_4f9320;
        case 0x4f9324u: goto label_4f9324;
        case 0x4f9328u: goto label_4f9328;
        case 0x4f932cu: goto label_4f932c;
        case 0x4f9330u: goto label_4f9330;
        case 0x4f9334u: goto label_4f9334;
        case 0x4f9338u: goto label_4f9338;
        case 0x4f933cu: goto label_4f933c;
        case 0x4f9340u: goto label_4f9340;
        case 0x4f9344u: goto label_4f9344;
        case 0x4f9348u: goto label_4f9348;
        case 0x4f934cu: goto label_4f934c;
        case 0x4f9350u: goto label_4f9350;
        case 0x4f9354u: goto label_4f9354;
        case 0x4f9358u: goto label_4f9358;
        case 0x4f935cu: goto label_4f935c;
        case 0x4f9360u: goto label_4f9360;
        case 0x4f9364u: goto label_4f9364;
        case 0x4f9368u: goto label_4f9368;
        case 0x4f936cu: goto label_4f936c;
        case 0x4f9370u: goto label_4f9370;
        case 0x4f9374u: goto label_4f9374;
        case 0x4f9378u: goto label_4f9378;
        case 0x4f937cu: goto label_4f937c;
        case 0x4f9380u: goto label_4f9380;
        case 0x4f9384u: goto label_4f9384;
        case 0x4f9388u: goto label_4f9388;
        case 0x4f938cu: goto label_4f938c;
        case 0x4f9390u: goto label_4f9390;
        case 0x4f9394u: goto label_4f9394;
        case 0x4f9398u: goto label_4f9398;
        case 0x4f939cu: goto label_4f939c;
        case 0x4f93a0u: goto label_4f93a0;
        case 0x4f93a4u: goto label_4f93a4;
        case 0x4f93a8u: goto label_4f93a8;
        case 0x4f93acu: goto label_4f93ac;
        case 0x4f93b0u: goto label_4f93b0;
        case 0x4f93b4u: goto label_4f93b4;
        case 0x4f93b8u: goto label_4f93b8;
        case 0x4f93bcu: goto label_4f93bc;
        case 0x4f93c0u: goto label_4f93c0;
        case 0x4f93c4u: goto label_4f93c4;
        case 0x4f93c8u: goto label_4f93c8;
        case 0x4f93ccu: goto label_4f93cc;
        case 0x4f93d0u: goto label_4f93d0;
        case 0x4f93d4u: goto label_4f93d4;
        case 0x4f93d8u: goto label_4f93d8;
        case 0x4f93dcu: goto label_4f93dc;
        case 0x4f93e0u: goto label_4f93e0;
        case 0x4f93e4u: goto label_4f93e4;
        case 0x4f93e8u: goto label_4f93e8;
        case 0x4f93ecu: goto label_4f93ec;
        case 0x4f93f0u: goto label_4f93f0;
        case 0x4f93f4u: goto label_4f93f4;
        case 0x4f93f8u: goto label_4f93f8;
        case 0x4f93fcu: goto label_4f93fc;
        case 0x4f9400u: goto label_4f9400;
        case 0x4f9404u: goto label_4f9404;
        case 0x4f9408u: goto label_4f9408;
        case 0x4f940cu: goto label_4f940c;
        case 0x4f9410u: goto label_4f9410;
        case 0x4f9414u: goto label_4f9414;
        case 0x4f9418u: goto label_4f9418;
        case 0x4f941cu: goto label_4f941c;
        case 0x4f9420u: goto label_4f9420;
        case 0x4f9424u: goto label_4f9424;
        case 0x4f9428u: goto label_4f9428;
        case 0x4f942cu: goto label_4f942c;
        case 0x4f9430u: goto label_4f9430;
        case 0x4f9434u: goto label_4f9434;
        case 0x4f9438u: goto label_4f9438;
        case 0x4f943cu: goto label_4f943c;
        case 0x4f9440u: goto label_4f9440;
        case 0x4f9444u: goto label_4f9444;
        case 0x4f9448u: goto label_4f9448;
        case 0x4f944cu: goto label_4f944c;
        case 0x4f9450u: goto label_4f9450;
        case 0x4f9454u: goto label_4f9454;
        case 0x4f9458u: goto label_4f9458;
        case 0x4f945cu: goto label_4f945c;
        case 0x4f9460u: goto label_4f9460;
        case 0x4f9464u: goto label_4f9464;
        case 0x4f9468u: goto label_4f9468;
        case 0x4f946cu: goto label_4f946c;
        case 0x4f9470u: goto label_4f9470;
        case 0x4f9474u: goto label_4f9474;
        case 0x4f9478u: goto label_4f9478;
        case 0x4f947cu: goto label_4f947c;
        case 0x4f9480u: goto label_4f9480;
        case 0x4f9484u: goto label_4f9484;
        case 0x4f9488u: goto label_4f9488;
        case 0x4f948cu: goto label_4f948c;
        case 0x4f9490u: goto label_4f9490;
        case 0x4f9494u: goto label_4f9494;
        case 0x4f9498u: goto label_4f9498;
        case 0x4f949cu: goto label_4f949c;
        case 0x4f94a0u: goto label_4f94a0;
        case 0x4f94a4u: goto label_4f94a4;
        case 0x4f94a8u: goto label_4f94a8;
        case 0x4f94acu: goto label_4f94ac;
        case 0x4f94b0u: goto label_4f94b0;
        case 0x4f94b4u: goto label_4f94b4;
        case 0x4f94b8u: goto label_4f94b8;
        case 0x4f94bcu: goto label_4f94bc;
        case 0x4f94c0u: goto label_4f94c0;
        case 0x4f94c4u: goto label_4f94c4;
        case 0x4f94c8u: goto label_4f94c8;
        case 0x4f94ccu: goto label_4f94cc;
        case 0x4f94d0u: goto label_4f94d0;
        case 0x4f94d4u: goto label_4f94d4;
        case 0x4f94d8u: goto label_4f94d8;
        case 0x4f94dcu: goto label_4f94dc;
        case 0x4f94e0u: goto label_4f94e0;
        case 0x4f94e4u: goto label_4f94e4;
        case 0x4f94e8u: goto label_4f94e8;
        case 0x4f94ecu: goto label_4f94ec;
        case 0x4f94f0u: goto label_4f94f0;
        case 0x4f94f4u: goto label_4f94f4;
        case 0x4f94f8u: goto label_4f94f8;
        case 0x4f94fcu: goto label_4f94fc;
        case 0x4f9500u: goto label_4f9500;
        case 0x4f9504u: goto label_4f9504;
        case 0x4f9508u: goto label_4f9508;
        case 0x4f950cu: goto label_4f950c;
        case 0x4f9510u: goto label_4f9510;
        case 0x4f9514u: goto label_4f9514;
        case 0x4f9518u: goto label_4f9518;
        case 0x4f951cu: goto label_4f951c;
        case 0x4f9520u: goto label_4f9520;
        case 0x4f9524u: goto label_4f9524;
        case 0x4f9528u: goto label_4f9528;
        case 0x4f952cu: goto label_4f952c;
        case 0x4f9530u: goto label_4f9530;
        case 0x4f9534u: goto label_4f9534;
        case 0x4f9538u: goto label_4f9538;
        case 0x4f953cu: goto label_4f953c;
        case 0x4f9540u: goto label_4f9540;
        case 0x4f9544u: goto label_4f9544;
        case 0x4f9548u: goto label_4f9548;
        case 0x4f954cu: goto label_4f954c;
        case 0x4f9550u: goto label_4f9550;
        case 0x4f9554u: goto label_4f9554;
        case 0x4f9558u: goto label_4f9558;
        case 0x4f955cu: goto label_4f955c;
        case 0x4f9560u: goto label_4f9560;
        case 0x4f9564u: goto label_4f9564;
        case 0x4f9568u: goto label_4f9568;
        case 0x4f956cu: goto label_4f956c;
        case 0x4f9570u: goto label_4f9570;
        case 0x4f9574u: goto label_4f9574;
        case 0x4f9578u: goto label_4f9578;
        case 0x4f957cu: goto label_4f957c;
        case 0x4f9580u: goto label_4f9580;
        case 0x4f9584u: goto label_4f9584;
        case 0x4f9588u: goto label_4f9588;
        case 0x4f958cu: goto label_4f958c;
        case 0x4f9590u: goto label_4f9590;
        case 0x4f9594u: goto label_4f9594;
        case 0x4f9598u: goto label_4f9598;
        case 0x4f959cu: goto label_4f959c;
        case 0x4f95a0u: goto label_4f95a0;
        case 0x4f95a4u: goto label_4f95a4;
        case 0x4f95a8u: goto label_4f95a8;
        case 0x4f95acu: goto label_4f95ac;
        case 0x4f95b0u: goto label_4f95b0;
        case 0x4f95b4u: goto label_4f95b4;
        case 0x4f95b8u: goto label_4f95b8;
        case 0x4f95bcu: goto label_4f95bc;
        case 0x4f95c0u: goto label_4f95c0;
        case 0x4f95c4u: goto label_4f95c4;
        case 0x4f95c8u: goto label_4f95c8;
        case 0x4f95ccu: goto label_4f95cc;
        case 0x4f95d0u: goto label_4f95d0;
        case 0x4f95d4u: goto label_4f95d4;
        case 0x4f95d8u: goto label_4f95d8;
        case 0x4f95dcu: goto label_4f95dc;
        case 0x4f95e0u: goto label_4f95e0;
        case 0x4f95e4u: goto label_4f95e4;
        case 0x4f95e8u: goto label_4f95e8;
        case 0x4f95ecu: goto label_4f95ec;
        case 0x4f95f0u: goto label_4f95f0;
        case 0x4f95f4u: goto label_4f95f4;
        case 0x4f95f8u: goto label_4f95f8;
        case 0x4f95fcu: goto label_4f95fc;
        case 0x4f9600u: goto label_4f9600;
        case 0x4f9604u: goto label_4f9604;
        case 0x4f9608u: goto label_4f9608;
        case 0x4f960cu: goto label_4f960c;
        case 0x4f9610u: goto label_4f9610;
        case 0x4f9614u: goto label_4f9614;
        case 0x4f9618u: goto label_4f9618;
        case 0x4f961cu: goto label_4f961c;
        case 0x4f9620u: goto label_4f9620;
        case 0x4f9624u: goto label_4f9624;
        case 0x4f9628u: goto label_4f9628;
        case 0x4f962cu: goto label_4f962c;
        case 0x4f9630u: goto label_4f9630;
        case 0x4f9634u: goto label_4f9634;
        case 0x4f9638u: goto label_4f9638;
        case 0x4f963cu: goto label_4f963c;
        case 0x4f9640u: goto label_4f9640;
        case 0x4f9644u: goto label_4f9644;
        case 0x4f9648u: goto label_4f9648;
        case 0x4f964cu: goto label_4f964c;
        case 0x4f9650u: goto label_4f9650;
        case 0x4f9654u: goto label_4f9654;
        case 0x4f9658u: goto label_4f9658;
        case 0x4f965cu: goto label_4f965c;
        case 0x4f9660u: goto label_4f9660;
        case 0x4f9664u: goto label_4f9664;
        case 0x4f9668u: goto label_4f9668;
        case 0x4f966cu: goto label_4f966c;
        case 0x4f9670u: goto label_4f9670;
        case 0x4f9674u: goto label_4f9674;
        case 0x4f9678u: goto label_4f9678;
        case 0x4f967cu: goto label_4f967c;
        case 0x4f9680u: goto label_4f9680;
        case 0x4f9684u: goto label_4f9684;
        case 0x4f9688u: goto label_4f9688;
        case 0x4f968cu: goto label_4f968c;
        case 0x4f9690u: goto label_4f9690;
        case 0x4f9694u: goto label_4f9694;
        case 0x4f9698u: goto label_4f9698;
        case 0x4f969cu: goto label_4f969c;
        case 0x4f96a0u: goto label_4f96a0;
        case 0x4f96a4u: goto label_4f96a4;
        case 0x4f96a8u: goto label_4f96a8;
        case 0x4f96acu: goto label_4f96ac;
        case 0x4f96b0u: goto label_4f96b0;
        case 0x4f96b4u: goto label_4f96b4;
        case 0x4f96b8u: goto label_4f96b8;
        case 0x4f96bcu: goto label_4f96bc;
        case 0x4f96c0u: goto label_4f96c0;
        case 0x4f96c4u: goto label_4f96c4;
        case 0x4f96c8u: goto label_4f96c8;
        case 0x4f96ccu: goto label_4f96cc;
        case 0x4f96d0u: goto label_4f96d0;
        case 0x4f96d4u: goto label_4f96d4;
        case 0x4f96d8u: goto label_4f96d8;
        case 0x4f96dcu: goto label_4f96dc;
        case 0x4f96e0u: goto label_4f96e0;
        case 0x4f96e4u: goto label_4f96e4;
        case 0x4f96e8u: goto label_4f96e8;
        case 0x4f96ecu: goto label_4f96ec;
        case 0x4f96f0u: goto label_4f96f0;
        case 0x4f96f4u: goto label_4f96f4;
        case 0x4f96f8u: goto label_4f96f8;
        case 0x4f96fcu: goto label_4f96fc;
        case 0x4f9700u: goto label_4f9700;
        case 0x4f9704u: goto label_4f9704;
        case 0x4f9708u: goto label_4f9708;
        case 0x4f970cu: goto label_4f970c;
        case 0x4f9710u: goto label_4f9710;
        case 0x4f9714u: goto label_4f9714;
        case 0x4f9718u: goto label_4f9718;
        case 0x4f971cu: goto label_4f971c;
        case 0x4f9720u: goto label_4f9720;
        case 0x4f9724u: goto label_4f9724;
        case 0x4f9728u: goto label_4f9728;
        case 0x4f972cu: goto label_4f972c;
        case 0x4f9730u: goto label_4f9730;
        case 0x4f9734u: goto label_4f9734;
        case 0x4f9738u: goto label_4f9738;
        case 0x4f973cu: goto label_4f973c;
        case 0x4f9740u: goto label_4f9740;
        case 0x4f9744u: goto label_4f9744;
        case 0x4f9748u: goto label_4f9748;
        case 0x4f974cu: goto label_4f974c;
        case 0x4f9750u: goto label_4f9750;
        case 0x4f9754u: goto label_4f9754;
        case 0x4f9758u: goto label_4f9758;
        case 0x4f975cu: goto label_4f975c;
        case 0x4f9760u: goto label_4f9760;
        case 0x4f9764u: goto label_4f9764;
        case 0x4f9768u: goto label_4f9768;
        case 0x4f976cu: goto label_4f976c;
        case 0x4f9770u: goto label_4f9770;
        case 0x4f9774u: goto label_4f9774;
        case 0x4f9778u: goto label_4f9778;
        case 0x4f977cu: goto label_4f977c;
        case 0x4f9780u: goto label_4f9780;
        case 0x4f9784u: goto label_4f9784;
        case 0x4f9788u: goto label_4f9788;
        case 0x4f978cu: goto label_4f978c;
        case 0x4f9790u: goto label_4f9790;
        case 0x4f9794u: goto label_4f9794;
        case 0x4f9798u: goto label_4f9798;
        case 0x4f979cu: goto label_4f979c;
        case 0x4f97a0u: goto label_4f97a0;
        case 0x4f97a4u: goto label_4f97a4;
        case 0x4f97a8u: goto label_4f97a8;
        case 0x4f97acu: goto label_4f97ac;
        case 0x4f97b0u: goto label_4f97b0;
        case 0x4f97b4u: goto label_4f97b4;
        case 0x4f97b8u: goto label_4f97b8;
        case 0x4f97bcu: goto label_4f97bc;
        case 0x4f97c0u: goto label_4f97c0;
        case 0x4f97c4u: goto label_4f97c4;
        case 0x4f97c8u: goto label_4f97c8;
        case 0x4f97ccu: goto label_4f97cc;
        case 0x4f97d0u: goto label_4f97d0;
        case 0x4f97d4u: goto label_4f97d4;
        case 0x4f97d8u: goto label_4f97d8;
        case 0x4f97dcu: goto label_4f97dc;
        case 0x4f97e0u: goto label_4f97e0;
        case 0x4f97e4u: goto label_4f97e4;
        case 0x4f97e8u: goto label_4f97e8;
        case 0x4f97ecu: goto label_4f97ec;
        case 0x4f97f0u: goto label_4f97f0;
        case 0x4f97f4u: goto label_4f97f4;
        case 0x4f97f8u: goto label_4f97f8;
        case 0x4f97fcu: goto label_4f97fc;
        case 0x4f9800u: goto label_4f9800;
        case 0x4f9804u: goto label_4f9804;
        case 0x4f9808u: goto label_4f9808;
        case 0x4f980cu: goto label_4f980c;
        case 0x4f9810u: goto label_4f9810;
        case 0x4f9814u: goto label_4f9814;
        case 0x4f9818u: goto label_4f9818;
        case 0x4f981cu: goto label_4f981c;
        case 0x4f9820u: goto label_4f9820;
        case 0x4f9824u: goto label_4f9824;
        case 0x4f9828u: goto label_4f9828;
        case 0x4f982cu: goto label_4f982c;
        case 0x4f9830u: goto label_4f9830;
        case 0x4f9834u: goto label_4f9834;
        case 0x4f9838u: goto label_4f9838;
        case 0x4f983cu: goto label_4f983c;
        case 0x4f9840u: goto label_4f9840;
        case 0x4f9844u: goto label_4f9844;
        case 0x4f9848u: goto label_4f9848;
        case 0x4f984cu: goto label_4f984c;
        case 0x4f9850u: goto label_4f9850;
        case 0x4f9854u: goto label_4f9854;
        case 0x4f9858u: goto label_4f9858;
        case 0x4f985cu: goto label_4f985c;
        case 0x4f9860u: goto label_4f9860;
        case 0x4f9864u: goto label_4f9864;
        case 0x4f9868u: goto label_4f9868;
        case 0x4f986cu: goto label_4f986c;
        case 0x4f9870u: goto label_4f9870;
        case 0x4f9874u: goto label_4f9874;
        case 0x4f9878u: goto label_4f9878;
        case 0x4f987cu: goto label_4f987c;
        case 0x4f9880u: goto label_4f9880;
        case 0x4f9884u: goto label_4f9884;
        case 0x4f9888u: goto label_4f9888;
        case 0x4f988cu: goto label_4f988c;
        case 0x4f9890u: goto label_4f9890;
        case 0x4f9894u: goto label_4f9894;
        case 0x4f9898u: goto label_4f9898;
        case 0x4f989cu: goto label_4f989c;
        case 0x4f98a0u: goto label_4f98a0;
        case 0x4f98a4u: goto label_4f98a4;
        case 0x4f98a8u: goto label_4f98a8;
        case 0x4f98acu: goto label_4f98ac;
        case 0x4f98b0u: goto label_4f98b0;
        case 0x4f98b4u: goto label_4f98b4;
        case 0x4f98b8u: goto label_4f98b8;
        case 0x4f98bcu: goto label_4f98bc;
        case 0x4f98c0u: goto label_4f98c0;
        case 0x4f98c4u: goto label_4f98c4;
        case 0x4f98c8u: goto label_4f98c8;
        case 0x4f98ccu: goto label_4f98cc;
        case 0x4f98d0u: goto label_4f98d0;
        case 0x4f98d4u: goto label_4f98d4;
        case 0x4f98d8u: goto label_4f98d8;
        case 0x4f98dcu: goto label_4f98dc;
        case 0x4f98e0u: goto label_4f98e0;
        case 0x4f98e4u: goto label_4f98e4;
        case 0x4f98e8u: goto label_4f98e8;
        case 0x4f98ecu: goto label_4f98ec;
        case 0x4f98f0u: goto label_4f98f0;
        case 0x4f98f4u: goto label_4f98f4;
        case 0x4f98f8u: goto label_4f98f8;
        case 0x4f98fcu: goto label_4f98fc;
        case 0x4f9900u: goto label_4f9900;
        case 0x4f9904u: goto label_4f9904;
        case 0x4f9908u: goto label_4f9908;
        case 0x4f990cu: goto label_4f990c;
        case 0x4f9910u: goto label_4f9910;
        case 0x4f9914u: goto label_4f9914;
        case 0x4f9918u: goto label_4f9918;
        case 0x4f991cu: goto label_4f991c;
        case 0x4f9920u: goto label_4f9920;
        case 0x4f9924u: goto label_4f9924;
        case 0x4f9928u: goto label_4f9928;
        case 0x4f992cu: goto label_4f992c;
        case 0x4f9930u: goto label_4f9930;
        case 0x4f9934u: goto label_4f9934;
        case 0x4f9938u: goto label_4f9938;
        case 0x4f993cu: goto label_4f993c;
        case 0x4f9940u: goto label_4f9940;
        case 0x4f9944u: goto label_4f9944;
        case 0x4f9948u: goto label_4f9948;
        case 0x4f994cu: goto label_4f994c;
        case 0x4f9950u: goto label_4f9950;
        case 0x4f9954u: goto label_4f9954;
        case 0x4f9958u: goto label_4f9958;
        case 0x4f995cu: goto label_4f995c;
        case 0x4f9960u: goto label_4f9960;
        case 0x4f9964u: goto label_4f9964;
        case 0x4f9968u: goto label_4f9968;
        case 0x4f996cu: goto label_4f996c;
        case 0x4f9970u: goto label_4f9970;
        case 0x4f9974u: goto label_4f9974;
        case 0x4f9978u: goto label_4f9978;
        case 0x4f997cu: goto label_4f997c;
        case 0x4f9980u: goto label_4f9980;
        case 0x4f9984u: goto label_4f9984;
        case 0x4f9988u: goto label_4f9988;
        case 0x4f998cu: goto label_4f998c;
        case 0x4f9990u: goto label_4f9990;
        case 0x4f9994u: goto label_4f9994;
        case 0x4f9998u: goto label_4f9998;
        case 0x4f999cu: goto label_4f999c;
        case 0x4f99a0u: goto label_4f99a0;
        case 0x4f99a4u: goto label_4f99a4;
        case 0x4f99a8u: goto label_4f99a8;
        case 0x4f99acu: goto label_4f99ac;
        case 0x4f99b0u: goto label_4f99b0;
        case 0x4f99b4u: goto label_4f99b4;
        case 0x4f99b8u: goto label_4f99b8;
        case 0x4f99bcu: goto label_4f99bc;
        case 0x4f99c0u: goto label_4f99c0;
        case 0x4f99c4u: goto label_4f99c4;
        case 0x4f99c8u: goto label_4f99c8;
        case 0x4f99ccu: goto label_4f99cc;
        case 0x4f99d0u: goto label_4f99d0;
        case 0x4f99d4u: goto label_4f99d4;
        case 0x4f99d8u: goto label_4f99d8;
        case 0x4f99dcu: goto label_4f99dc;
        case 0x4f99e0u: goto label_4f99e0;
        case 0x4f99e4u: goto label_4f99e4;
        case 0x4f99e8u: goto label_4f99e8;
        case 0x4f99ecu: goto label_4f99ec;
        case 0x4f99f0u: goto label_4f99f0;
        case 0x4f99f4u: goto label_4f99f4;
        case 0x4f99f8u: goto label_4f99f8;
        case 0x4f99fcu: goto label_4f99fc;
        case 0x4f9a00u: goto label_4f9a00;
        case 0x4f9a04u: goto label_4f9a04;
        case 0x4f9a08u: goto label_4f9a08;
        case 0x4f9a0cu: goto label_4f9a0c;
        case 0x4f9a10u: goto label_4f9a10;
        case 0x4f9a14u: goto label_4f9a14;
        case 0x4f9a18u: goto label_4f9a18;
        case 0x4f9a1cu: goto label_4f9a1c;
        case 0x4f9a20u: goto label_4f9a20;
        case 0x4f9a24u: goto label_4f9a24;
        case 0x4f9a28u: goto label_4f9a28;
        case 0x4f9a2cu: goto label_4f9a2c;
        case 0x4f9a30u: goto label_4f9a30;
        case 0x4f9a34u: goto label_4f9a34;
        case 0x4f9a38u: goto label_4f9a38;
        case 0x4f9a3cu: goto label_4f9a3c;
        case 0x4f9a40u: goto label_4f9a40;
        case 0x4f9a44u: goto label_4f9a44;
        case 0x4f9a48u: goto label_4f9a48;
        case 0x4f9a4cu: goto label_4f9a4c;
        case 0x4f9a50u: goto label_4f9a50;
        case 0x4f9a54u: goto label_4f9a54;
        case 0x4f9a58u: goto label_4f9a58;
        case 0x4f9a5cu: goto label_4f9a5c;
        case 0x4f9a60u: goto label_4f9a60;
        case 0x4f9a64u: goto label_4f9a64;
        case 0x4f9a68u: goto label_4f9a68;
        case 0x4f9a6cu: goto label_4f9a6c;
        case 0x4f9a70u: goto label_4f9a70;
        case 0x4f9a74u: goto label_4f9a74;
        case 0x4f9a78u: goto label_4f9a78;
        case 0x4f9a7cu: goto label_4f9a7c;
        case 0x4f9a80u: goto label_4f9a80;
        case 0x4f9a84u: goto label_4f9a84;
        case 0x4f9a88u: goto label_4f9a88;
        case 0x4f9a8cu: goto label_4f9a8c;
        case 0x4f9a90u: goto label_4f9a90;
        case 0x4f9a94u: goto label_4f9a94;
        case 0x4f9a98u: goto label_4f9a98;
        case 0x4f9a9cu: goto label_4f9a9c;
        case 0x4f9aa0u: goto label_4f9aa0;
        case 0x4f9aa4u: goto label_4f9aa4;
        case 0x4f9aa8u: goto label_4f9aa8;
        case 0x4f9aacu: goto label_4f9aac;
        case 0x4f9ab0u: goto label_4f9ab0;
        case 0x4f9ab4u: goto label_4f9ab4;
        case 0x4f9ab8u: goto label_4f9ab8;
        case 0x4f9abcu: goto label_4f9abc;
        case 0x4f9ac0u: goto label_4f9ac0;
        case 0x4f9ac4u: goto label_4f9ac4;
        case 0x4f9ac8u: goto label_4f9ac8;
        case 0x4f9accu: goto label_4f9acc;
        case 0x4f9ad0u: goto label_4f9ad0;
        case 0x4f9ad4u: goto label_4f9ad4;
        case 0x4f9ad8u: goto label_4f9ad8;
        case 0x4f9adcu: goto label_4f9adc;
        case 0x4f9ae0u: goto label_4f9ae0;
        case 0x4f9ae4u: goto label_4f9ae4;
        case 0x4f9ae8u: goto label_4f9ae8;
        case 0x4f9aecu: goto label_4f9aec;
        case 0x4f9af0u: goto label_4f9af0;
        case 0x4f9af4u: goto label_4f9af4;
        case 0x4f9af8u: goto label_4f9af8;
        case 0x4f9afcu: goto label_4f9afc;
        case 0x4f9b00u: goto label_4f9b00;
        case 0x4f9b04u: goto label_4f9b04;
        case 0x4f9b08u: goto label_4f9b08;
        case 0x4f9b0cu: goto label_4f9b0c;
        case 0x4f9b10u: goto label_4f9b10;
        case 0x4f9b14u: goto label_4f9b14;
        case 0x4f9b18u: goto label_4f9b18;
        case 0x4f9b1cu: goto label_4f9b1c;
        case 0x4f9b20u: goto label_4f9b20;
        case 0x4f9b24u: goto label_4f9b24;
        case 0x4f9b28u: goto label_4f9b28;
        case 0x4f9b2cu: goto label_4f9b2c;
        case 0x4f9b30u: goto label_4f9b30;
        case 0x4f9b34u: goto label_4f9b34;
        case 0x4f9b38u: goto label_4f9b38;
        case 0x4f9b3cu: goto label_4f9b3c;
        case 0x4f9b40u: goto label_4f9b40;
        case 0x4f9b44u: goto label_4f9b44;
        case 0x4f9b48u: goto label_4f9b48;
        case 0x4f9b4cu: goto label_4f9b4c;
        case 0x4f9b50u: goto label_4f9b50;
        case 0x4f9b54u: goto label_4f9b54;
        case 0x4f9b58u: goto label_4f9b58;
        case 0x4f9b5cu: goto label_4f9b5c;
        case 0x4f9b60u: goto label_4f9b60;
        case 0x4f9b64u: goto label_4f9b64;
        case 0x4f9b68u: goto label_4f9b68;
        case 0x4f9b6cu: goto label_4f9b6c;
        case 0x4f9b70u: goto label_4f9b70;
        case 0x4f9b74u: goto label_4f9b74;
        case 0x4f9b78u: goto label_4f9b78;
        case 0x4f9b7cu: goto label_4f9b7c;
        case 0x4f9b80u: goto label_4f9b80;
        case 0x4f9b84u: goto label_4f9b84;
        case 0x4f9b88u: goto label_4f9b88;
        case 0x4f9b8cu: goto label_4f9b8c;
        case 0x4f9b90u: goto label_4f9b90;
        case 0x4f9b94u: goto label_4f9b94;
        case 0x4f9b98u: goto label_4f9b98;
        case 0x4f9b9cu: goto label_4f9b9c;
        case 0x4f9ba0u: goto label_4f9ba0;
        case 0x4f9ba4u: goto label_4f9ba4;
        case 0x4f9ba8u: goto label_4f9ba8;
        case 0x4f9bacu: goto label_4f9bac;
        case 0x4f9bb0u: goto label_4f9bb0;
        case 0x4f9bb4u: goto label_4f9bb4;
        case 0x4f9bb8u: goto label_4f9bb8;
        case 0x4f9bbcu: goto label_4f9bbc;
        case 0x4f9bc0u: goto label_4f9bc0;
        case 0x4f9bc4u: goto label_4f9bc4;
        case 0x4f9bc8u: goto label_4f9bc8;
        case 0x4f9bccu: goto label_4f9bcc;
        case 0x4f9bd0u: goto label_4f9bd0;
        case 0x4f9bd4u: goto label_4f9bd4;
        case 0x4f9bd8u: goto label_4f9bd8;
        case 0x4f9bdcu: goto label_4f9bdc;
        case 0x4f9be0u: goto label_4f9be0;
        case 0x4f9be4u: goto label_4f9be4;
        case 0x4f9be8u: goto label_4f9be8;
        case 0x4f9becu: goto label_4f9bec;
        case 0x4f9bf0u: goto label_4f9bf0;
        case 0x4f9bf4u: goto label_4f9bf4;
        case 0x4f9bf8u: goto label_4f9bf8;
        case 0x4f9bfcu: goto label_4f9bfc;
        case 0x4f9c00u: goto label_4f9c00;
        case 0x4f9c04u: goto label_4f9c04;
        case 0x4f9c08u: goto label_4f9c08;
        case 0x4f9c0cu: goto label_4f9c0c;
        case 0x4f9c10u: goto label_4f9c10;
        case 0x4f9c14u: goto label_4f9c14;
        case 0x4f9c18u: goto label_4f9c18;
        case 0x4f9c1cu: goto label_4f9c1c;
        case 0x4f9c20u: goto label_4f9c20;
        case 0x4f9c24u: goto label_4f9c24;
        case 0x4f9c28u: goto label_4f9c28;
        case 0x4f9c2cu: goto label_4f9c2c;
        case 0x4f9c30u: goto label_4f9c30;
        case 0x4f9c34u: goto label_4f9c34;
        case 0x4f9c38u: goto label_4f9c38;
        case 0x4f9c3cu: goto label_4f9c3c;
        case 0x4f9c40u: goto label_4f9c40;
        case 0x4f9c44u: goto label_4f9c44;
        case 0x4f9c48u: goto label_4f9c48;
        case 0x4f9c4cu: goto label_4f9c4c;
        case 0x4f9c50u: goto label_4f9c50;
        case 0x4f9c54u: goto label_4f9c54;
        case 0x4f9c58u: goto label_4f9c58;
        case 0x4f9c5cu: goto label_4f9c5c;
        case 0x4f9c60u: goto label_4f9c60;
        case 0x4f9c64u: goto label_4f9c64;
        case 0x4f9c68u: goto label_4f9c68;
        case 0x4f9c6cu: goto label_4f9c6c;
        case 0x4f9c70u: goto label_4f9c70;
        case 0x4f9c74u: goto label_4f9c74;
        case 0x4f9c78u: goto label_4f9c78;
        case 0x4f9c7cu: goto label_4f9c7c;
        case 0x4f9c80u: goto label_4f9c80;
        case 0x4f9c84u: goto label_4f9c84;
        case 0x4f9c88u: goto label_4f9c88;
        case 0x4f9c8cu: goto label_4f9c8c;
        case 0x4f9c90u: goto label_4f9c90;
        case 0x4f9c94u: goto label_4f9c94;
        case 0x4f9c98u: goto label_4f9c98;
        case 0x4f9c9cu: goto label_4f9c9c;
        case 0x4f9ca0u: goto label_4f9ca0;
        case 0x4f9ca4u: goto label_4f9ca4;
        case 0x4f9ca8u: goto label_4f9ca8;
        case 0x4f9cacu: goto label_4f9cac;
        case 0x4f9cb0u: goto label_4f9cb0;
        case 0x4f9cb4u: goto label_4f9cb4;
        case 0x4f9cb8u: goto label_4f9cb8;
        case 0x4f9cbcu: goto label_4f9cbc;
        case 0x4f9cc0u: goto label_4f9cc0;
        case 0x4f9cc4u: goto label_4f9cc4;
        case 0x4f9cc8u: goto label_4f9cc8;
        case 0x4f9cccu: goto label_4f9ccc;
        case 0x4f9cd0u: goto label_4f9cd0;
        case 0x4f9cd4u: goto label_4f9cd4;
        case 0x4f9cd8u: goto label_4f9cd8;
        case 0x4f9cdcu: goto label_4f9cdc;
        case 0x4f9ce0u: goto label_4f9ce0;
        case 0x4f9ce4u: goto label_4f9ce4;
        case 0x4f9ce8u: goto label_4f9ce8;
        case 0x4f9cecu: goto label_4f9cec;
        case 0x4f9cf0u: goto label_4f9cf0;
        case 0x4f9cf4u: goto label_4f9cf4;
        case 0x4f9cf8u: goto label_4f9cf8;
        case 0x4f9cfcu: goto label_4f9cfc;
        case 0x4f9d00u: goto label_4f9d00;
        case 0x4f9d04u: goto label_4f9d04;
        case 0x4f9d08u: goto label_4f9d08;
        case 0x4f9d0cu: goto label_4f9d0c;
        case 0x4f9d10u: goto label_4f9d10;
        case 0x4f9d14u: goto label_4f9d14;
        case 0x4f9d18u: goto label_4f9d18;
        case 0x4f9d1cu: goto label_4f9d1c;
        case 0x4f9d20u: goto label_4f9d20;
        case 0x4f9d24u: goto label_4f9d24;
        case 0x4f9d28u: goto label_4f9d28;
        case 0x4f9d2cu: goto label_4f9d2c;
        case 0x4f9d30u: goto label_4f9d30;
        case 0x4f9d34u: goto label_4f9d34;
        case 0x4f9d38u: goto label_4f9d38;
        case 0x4f9d3cu: goto label_4f9d3c;
        case 0x4f9d40u: goto label_4f9d40;
        case 0x4f9d44u: goto label_4f9d44;
        case 0x4f9d48u: goto label_4f9d48;
        case 0x4f9d4cu: goto label_4f9d4c;
        case 0x4f9d50u: goto label_4f9d50;
        case 0x4f9d54u: goto label_4f9d54;
        case 0x4f9d58u: goto label_4f9d58;
        case 0x4f9d5cu: goto label_4f9d5c;
        case 0x4f9d60u: goto label_4f9d60;
        case 0x4f9d64u: goto label_4f9d64;
        case 0x4f9d68u: goto label_4f9d68;
        case 0x4f9d6cu: goto label_4f9d6c;
        case 0x4f9d70u: goto label_4f9d70;
        case 0x4f9d74u: goto label_4f9d74;
        case 0x4f9d78u: goto label_4f9d78;
        case 0x4f9d7cu: goto label_4f9d7c;
        case 0x4f9d80u: goto label_4f9d80;
        case 0x4f9d84u: goto label_4f9d84;
        case 0x4f9d88u: goto label_4f9d88;
        case 0x4f9d8cu: goto label_4f9d8c;
        case 0x4f9d90u: goto label_4f9d90;
        case 0x4f9d94u: goto label_4f9d94;
        case 0x4f9d98u: goto label_4f9d98;
        case 0x4f9d9cu: goto label_4f9d9c;
        case 0x4f9da0u: goto label_4f9da0;
        case 0x4f9da4u: goto label_4f9da4;
        case 0x4f9da8u: goto label_4f9da8;
        case 0x4f9dacu: goto label_4f9dac;
        case 0x4f9db0u: goto label_4f9db0;
        case 0x4f9db4u: goto label_4f9db4;
        case 0x4f9db8u: goto label_4f9db8;
        case 0x4f9dbcu: goto label_4f9dbc;
        case 0x4f9dc0u: goto label_4f9dc0;
        case 0x4f9dc4u: goto label_4f9dc4;
        case 0x4f9dc8u: goto label_4f9dc8;
        case 0x4f9dccu: goto label_4f9dcc;
        case 0x4f9dd0u: goto label_4f9dd0;
        case 0x4f9dd4u: goto label_4f9dd4;
        case 0x4f9dd8u: goto label_4f9dd8;
        case 0x4f9ddcu: goto label_4f9ddc;
        case 0x4f9de0u: goto label_4f9de0;
        case 0x4f9de4u: goto label_4f9de4;
        case 0x4f9de8u: goto label_4f9de8;
        case 0x4f9decu: goto label_4f9dec;
        case 0x4f9df0u: goto label_4f9df0;
        case 0x4f9df4u: goto label_4f9df4;
        case 0x4f9df8u: goto label_4f9df8;
        case 0x4f9dfcu: goto label_4f9dfc;
        case 0x4f9e00u: goto label_4f9e00;
        case 0x4f9e04u: goto label_4f9e04;
        case 0x4f9e08u: goto label_4f9e08;
        case 0x4f9e0cu: goto label_4f9e0c;
        case 0x4f9e10u: goto label_4f9e10;
        case 0x4f9e14u: goto label_4f9e14;
        case 0x4f9e18u: goto label_4f9e18;
        case 0x4f9e1cu: goto label_4f9e1c;
        case 0x4f9e20u: goto label_4f9e20;
        case 0x4f9e24u: goto label_4f9e24;
        case 0x4f9e28u: goto label_4f9e28;
        case 0x4f9e2cu: goto label_4f9e2c;
        case 0x4f9e30u: goto label_4f9e30;
        case 0x4f9e34u: goto label_4f9e34;
        case 0x4f9e38u: goto label_4f9e38;
        case 0x4f9e3cu: goto label_4f9e3c;
        case 0x4f9e40u: goto label_4f9e40;
        case 0x4f9e44u: goto label_4f9e44;
        case 0x4f9e48u: goto label_4f9e48;
        case 0x4f9e4cu: goto label_4f9e4c;
        case 0x4f9e50u: goto label_4f9e50;
        case 0x4f9e54u: goto label_4f9e54;
        case 0x4f9e58u: goto label_4f9e58;
        case 0x4f9e5cu: goto label_4f9e5c;
        case 0x4f9e60u: goto label_4f9e60;
        case 0x4f9e64u: goto label_4f9e64;
        case 0x4f9e68u: goto label_4f9e68;
        case 0x4f9e6cu: goto label_4f9e6c;
        case 0x4f9e70u: goto label_4f9e70;
        case 0x4f9e74u: goto label_4f9e74;
        case 0x4f9e78u: goto label_4f9e78;
        case 0x4f9e7cu: goto label_4f9e7c;
        case 0x4f9e80u: goto label_4f9e80;
        case 0x4f9e84u: goto label_4f9e84;
        case 0x4f9e88u: goto label_4f9e88;
        case 0x4f9e8cu: goto label_4f9e8c;
        case 0x4f9e90u: goto label_4f9e90;
        case 0x4f9e94u: goto label_4f9e94;
        case 0x4f9e98u: goto label_4f9e98;
        case 0x4f9e9cu: goto label_4f9e9c;
        case 0x4f9ea0u: goto label_4f9ea0;
        case 0x4f9ea4u: goto label_4f9ea4;
        case 0x4f9ea8u: goto label_4f9ea8;
        case 0x4f9eacu: goto label_4f9eac;
        case 0x4f9eb0u: goto label_4f9eb0;
        case 0x4f9eb4u: goto label_4f9eb4;
        case 0x4f9eb8u: goto label_4f9eb8;
        case 0x4f9ebcu: goto label_4f9ebc;
        case 0x4f9ec0u: goto label_4f9ec0;
        case 0x4f9ec4u: goto label_4f9ec4;
        case 0x4f9ec8u: goto label_4f9ec8;
        case 0x4f9eccu: goto label_4f9ecc;
        case 0x4f9ed0u: goto label_4f9ed0;
        case 0x4f9ed4u: goto label_4f9ed4;
        case 0x4f9ed8u: goto label_4f9ed8;
        case 0x4f9edcu: goto label_4f9edc;
        case 0x4f9ee0u: goto label_4f9ee0;
        case 0x4f9ee4u: goto label_4f9ee4;
        case 0x4f9ee8u: goto label_4f9ee8;
        case 0x4f9eecu: goto label_4f9eec;
        case 0x4f9ef0u: goto label_4f9ef0;
        case 0x4f9ef4u: goto label_4f9ef4;
        case 0x4f9ef8u: goto label_4f9ef8;
        case 0x4f9efcu: goto label_4f9efc;
        case 0x4f9f00u: goto label_4f9f00;
        case 0x4f9f04u: goto label_4f9f04;
        case 0x4f9f08u: goto label_4f9f08;
        case 0x4f9f0cu: goto label_4f9f0c;
        case 0x4f9f10u: goto label_4f9f10;
        case 0x4f9f14u: goto label_4f9f14;
        case 0x4f9f18u: goto label_4f9f18;
        case 0x4f9f1cu: goto label_4f9f1c;
        case 0x4f9f20u: goto label_4f9f20;
        case 0x4f9f24u: goto label_4f9f24;
        case 0x4f9f28u: goto label_4f9f28;
        case 0x4f9f2cu: goto label_4f9f2c;
        case 0x4f9f30u: goto label_4f9f30;
        case 0x4f9f34u: goto label_4f9f34;
        case 0x4f9f38u: goto label_4f9f38;
        case 0x4f9f3cu: goto label_4f9f3c;
        case 0x4f9f40u: goto label_4f9f40;
        case 0x4f9f44u: goto label_4f9f44;
        case 0x4f9f48u: goto label_4f9f48;
        case 0x4f9f4cu: goto label_4f9f4c;
        case 0x4f9f50u: goto label_4f9f50;
        case 0x4f9f54u: goto label_4f9f54;
        case 0x4f9f58u: goto label_4f9f58;
        case 0x4f9f5cu: goto label_4f9f5c;
        case 0x4f9f60u: goto label_4f9f60;
        case 0x4f9f64u: goto label_4f9f64;
        case 0x4f9f68u: goto label_4f9f68;
        case 0x4f9f6cu: goto label_4f9f6c;
        case 0x4f9f70u: goto label_4f9f70;
        case 0x4f9f74u: goto label_4f9f74;
        case 0x4f9f78u: goto label_4f9f78;
        case 0x4f9f7cu: goto label_4f9f7c;
        case 0x4f9f80u: goto label_4f9f80;
        case 0x4f9f84u: goto label_4f9f84;
        case 0x4f9f88u: goto label_4f9f88;
        case 0x4f9f8cu: goto label_4f9f8c;
        case 0x4f9f90u: goto label_4f9f90;
        case 0x4f9f94u: goto label_4f9f94;
        case 0x4f9f98u: goto label_4f9f98;
        case 0x4f9f9cu: goto label_4f9f9c;
        case 0x4f9fa0u: goto label_4f9fa0;
        case 0x4f9fa4u: goto label_4f9fa4;
        case 0x4f9fa8u: goto label_4f9fa8;
        case 0x4f9facu: goto label_4f9fac;
        case 0x4f9fb0u: goto label_4f9fb0;
        case 0x4f9fb4u: goto label_4f9fb4;
        case 0x4f9fb8u: goto label_4f9fb8;
        case 0x4f9fbcu: goto label_4f9fbc;
        case 0x4f9fc0u: goto label_4f9fc0;
        case 0x4f9fc4u: goto label_4f9fc4;
        case 0x4f9fc8u: goto label_4f9fc8;
        case 0x4f9fccu: goto label_4f9fcc;
        case 0x4f9fd0u: goto label_4f9fd0;
        case 0x4f9fd4u: goto label_4f9fd4;
        case 0x4f9fd8u: goto label_4f9fd8;
        case 0x4f9fdcu: goto label_4f9fdc;
        case 0x4f9fe0u: goto label_4f9fe0;
        case 0x4f9fe4u: goto label_4f9fe4;
        case 0x4f9fe8u: goto label_4f9fe8;
        case 0x4f9fecu: goto label_4f9fec;
        case 0x4f9ff0u: goto label_4f9ff0;
        case 0x4f9ff4u: goto label_4f9ff4;
        case 0x4f9ff8u: goto label_4f9ff8;
        case 0x4f9ffcu: goto label_4f9ffc;
        case 0x4fa000u: goto label_4fa000;
        case 0x4fa004u: goto label_4fa004;
        case 0x4fa008u: goto label_4fa008;
        case 0x4fa00cu: goto label_4fa00c;
        case 0x4fa010u: goto label_4fa010;
        case 0x4fa014u: goto label_4fa014;
        case 0x4fa018u: goto label_4fa018;
        case 0x4fa01cu: goto label_4fa01c;
        case 0x4fa020u: goto label_4fa020;
        case 0x4fa024u: goto label_4fa024;
        case 0x4fa028u: goto label_4fa028;
        case 0x4fa02cu: goto label_4fa02c;
        case 0x4fa030u: goto label_4fa030;
        case 0x4fa034u: goto label_4fa034;
        case 0x4fa038u: goto label_4fa038;
        case 0x4fa03cu: goto label_4fa03c;
        case 0x4fa040u: goto label_4fa040;
        case 0x4fa044u: goto label_4fa044;
        case 0x4fa048u: goto label_4fa048;
        case 0x4fa04cu: goto label_4fa04c;
        case 0x4fa050u: goto label_4fa050;
        case 0x4fa054u: goto label_4fa054;
        case 0x4fa058u: goto label_4fa058;
        case 0x4fa05cu: goto label_4fa05c;
        case 0x4fa060u: goto label_4fa060;
        case 0x4fa064u: goto label_4fa064;
        case 0x4fa068u: goto label_4fa068;
        case 0x4fa06cu: goto label_4fa06c;
        case 0x4fa070u: goto label_4fa070;
        case 0x4fa074u: goto label_4fa074;
        case 0x4fa078u: goto label_4fa078;
        case 0x4fa07cu: goto label_4fa07c;
        case 0x4fa080u: goto label_4fa080;
        case 0x4fa084u: goto label_4fa084;
        case 0x4fa088u: goto label_4fa088;
        case 0x4fa08cu: goto label_4fa08c;
        case 0x4fa090u: goto label_4fa090;
        case 0x4fa094u: goto label_4fa094;
        case 0x4fa098u: goto label_4fa098;
        case 0x4fa09cu: goto label_4fa09c;
        case 0x4fa0a0u: goto label_4fa0a0;
        case 0x4fa0a4u: goto label_4fa0a4;
        case 0x4fa0a8u: goto label_4fa0a8;
        case 0x4fa0acu: goto label_4fa0ac;
        case 0x4fa0b0u: goto label_4fa0b0;
        case 0x4fa0b4u: goto label_4fa0b4;
        case 0x4fa0b8u: goto label_4fa0b8;
        case 0x4fa0bcu: goto label_4fa0bc;
        case 0x4fa0c0u: goto label_4fa0c0;
        case 0x4fa0c4u: goto label_4fa0c4;
        case 0x4fa0c8u: goto label_4fa0c8;
        case 0x4fa0ccu: goto label_4fa0cc;
        case 0x4fa0d0u: goto label_4fa0d0;
        case 0x4fa0d4u: goto label_4fa0d4;
        case 0x4fa0d8u: goto label_4fa0d8;
        case 0x4fa0dcu: goto label_4fa0dc;
        case 0x4fa0e0u: goto label_4fa0e0;
        case 0x4fa0e4u: goto label_4fa0e4;
        case 0x4fa0e8u: goto label_4fa0e8;
        case 0x4fa0ecu: goto label_4fa0ec;
        case 0x4fa0f0u: goto label_4fa0f0;
        case 0x4fa0f4u: goto label_4fa0f4;
        case 0x4fa0f8u: goto label_4fa0f8;
        case 0x4fa0fcu: goto label_4fa0fc;
        case 0x4fa100u: goto label_4fa100;
        case 0x4fa104u: goto label_4fa104;
        case 0x4fa108u: goto label_4fa108;
        case 0x4fa10cu: goto label_4fa10c;
        case 0x4fa110u: goto label_4fa110;
        case 0x4fa114u: goto label_4fa114;
        case 0x4fa118u: goto label_4fa118;
        case 0x4fa11cu: goto label_4fa11c;
        case 0x4fa120u: goto label_4fa120;
        case 0x4fa124u: goto label_4fa124;
        case 0x4fa128u: goto label_4fa128;
        case 0x4fa12cu: goto label_4fa12c;
        case 0x4fa130u: goto label_4fa130;
        case 0x4fa134u: goto label_4fa134;
        case 0x4fa138u: goto label_4fa138;
        case 0x4fa13cu: goto label_4fa13c;
        case 0x4fa140u: goto label_4fa140;
        case 0x4fa144u: goto label_4fa144;
        case 0x4fa148u: goto label_4fa148;
        case 0x4fa14cu: goto label_4fa14c;
        case 0x4fa150u: goto label_4fa150;
        case 0x4fa154u: goto label_4fa154;
        case 0x4fa158u: goto label_4fa158;
        case 0x4fa15cu: goto label_4fa15c;
        case 0x4fa160u: goto label_4fa160;
        case 0x4fa164u: goto label_4fa164;
        case 0x4fa168u: goto label_4fa168;
        case 0x4fa16cu: goto label_4fa16c;
        case 0x4fa170u: goto label_4fa170;
        case 0x4fa174u: goto label_4fa174;
        case 0x4fa178u: goto label_4fa178;
        case 0x4fa17cu: goto label_4fa17c;
        case 0x4fa180u: goto label_4fa180;
        case 0x4fa184u: goto label_4fa184;
        case 0x4fa188u: goto label_4fa188;
        case 0x4fa18cu: goto label_4fa18c;
        case 0x4fa190u: goto label_4fa190;
        case 0x4fa194u: goto label_4fa194;
        case 0x4fa198u: goto label_4fa198;
        case 0x4fa19cu: goto label_4fa19c;
        case 0x4fa1a0u: goto label_4fa1a0;
        case 0x4fa1a4u: goto label_4fa1a4;
        case 0x4fa1a8u: goto label_4fa1a8;
        case 0x4fa1acu: goto label_4fa1ac;
        case 0x4fa1b0u: goto label_4fa1b0;
        case 0x4fa1b4u: goto label_4fa1b4;
        case 0x4fa1b8u: goto label_4fa1b8;
        case 0x4fa1bcu: goto label_4fa1bc;
        case 0x4fa1c0u: goto label_4fa1c0;
        case 0x4fa1c4u: goto label_4fa1c4;
        case 0x4fa1c8u: goto label_4fa1c8;
        case 0x4fa1ccu: goto label_4fa1cc;
        case 0x4fa1d0u: goto label_4fa1d0;
        case 0x4fa1d4u: goto label_4fa1d4;
        case 0x4fa1d8u: goto label_4fa1d8;
        case 0x4fa1dcu: goto label_4fa1dc;
        case 0x4fa1e0u: goto label_4fa1e0;
        case 0x4fa1e4u: goto label_4fa1e4;
        case 0x4fa1e8u: goto label_4fa1e8;
        case 0x4fa1ecu: goto label_4fa1ec;
        case 0x4fa1f0u: goto label_4fa1f0;
        case 0x4fa1f4u: goto label_4fa1f4;
        case 0x4fa1f8u: goto label_4fa1f8;
        case 0x4fa1fcu: goto label_4fa1fc;
        case 0x4fa200u: goto label_4fa200;
        case 0x4fa204u: goto label_4fa204;
        case 0x4fa208u: goto label_4fa208;
        case 0x4fa20cu: goto label_4fa20c;
        case 0x4fa210u: goto label_4fa210;
        case 0x4fa214u: goto label_4fa214;
        case 0x4fa218u: goto label_4fa218;
        case 0x4fa21cu: goto label_4fa21c;
        case 0x4fa220u: goto label_4fa220;
        case 0x4fa224u: goto label_4fa224;
        case 0x4fa228u: goto label_4fa228;
        case 0x4fa22cu: goto label_4fa22c;
        case 0x4fa230u: goto label_4fa230;
        case 0x4fa234u: goto label_4fa234;
        case 0x4fa238u: goto label_4fa238;
        case 0x4fa23cu: goto label_4fa23c;
        case 0x4fa240u: goto label_4fa240;
        case 0x4fa244u: goto label_4fa244;
        case 0x4fa248u: goto label_4fa248;
        case 0x4fa24cu: goto label_4fa24c;
        case 0x4fa250u: goto label_4fa250;
        case 0x4fa254u: goto label_4fa254;
        case 0x4fa258u: goto label_4fa258;
        case 0x4fa25cu: goto label_4fa25c;
        case 0x4fa260u: goto label_4fa260;
        case 0x4fa264u: goto label_4fa264;
        case 0x4fa268u: goto label_4fa268;
        case 0x4fa26cu: goto label_4fa26c;
        case 0x4fa270u: goto label_4fa270;
        case 0x4fa274u: goto label_4fa274;
        case 0x4fa278u: goto label_4fa278;
        case 0x4fa27cu: goto label_4fa27c;
        case 0x4fa280u: goto label_4fa280;
        case 0x4fa284u: goto label_4fa284;
        case 0x4fa288u: goto label_4fa288;
        case 0x4fa28cu: goto label_4fa28c;
        case 0x4fa290u: goto label_4fa290;
        case 0x4fa294u: goto label_4fa294;
        case 0x4fa298u: goto label_4fa298;
        case 0x4fa29cu: goto label_4fa29c;
        case 0x4fa2a0u: goto label_4fa2a0;
        case 0x4fa2a4u: goto label_4fa2a4;
        case 0x4fa2a8u: goto label_4fa2a8;
        case 0x4fa2acu: goto label_4fa2ac;
        case 0x4fa2b0u: goto label_4fa2b0;
        case 0x4fa2b4u: goto label_4fa2b4;
        case 0x4fa2b8u: goto label_4fa2b8;
        case 0x4fa2bcu: goto label_4fa2bc;
        case 0x4fa2c0u: goto label_4fa2c0;
        case 0x4fa2c4u: goto label_4fa2c4;
        case 0x4fa2c8u: goto label_4fa2c8;
        case 0x4fa2ccu: goto label_4fa2cc;
        case 0x4fa2d0u: goto label_4fa2d0;
        case 0x4fa2d4u: goto label_4fa2d4;
        case 0x4fa2d8u: goto label_4fa2d8;
        case 0x4fa2dcu: goto label_4fa2dc;
        case 0x4fa2e0u: goto label_4fa2e0;
        case 0x4fa2e4u: goto label_4fa2e4;
        case 0x4fa2e8u: goto label_4fa2e8;
        case 0x4fa2ecu: goto label_4fa2ec;
        case 0x4fa2f0u: goto label_4fa2f0;
        case 0x4fa2f4u: goto label_4fa2f4;
        case 0x4fa2f8u: goto label_4fa2f8;
        case 0x4fa2fcu: goto label_4fa2fc;
        case 0x4fa300u: goto label_4fa300;
        case 0x4fa304u: goto label_4fa304;
        case 0x4fa308u: goto label_4fa308;
        case 0x4fa30cu: goto label_4fa30c;
        case 0x4fa310u: goto label_4fa310;
        case 0x4fa314u: goto label_4fa314;
        case 0x4fa318u: goto label_4fa318;
        case 0x4fa31cu: goto label_4fa31c;
        case 0x4fa320u: goto label_4fa320;
        case 0x4fa324u: goto label_4fa324;
        case 0x4fa328u: goto label_4fa328;
        case 0x4fa32cu: goto label_4fa32c;
        case 0x4fa330u: goto label_4fa330;
        case 0x4fa334u: goto label_4fa334;
        case 0x4fa338u: goto label_4fa338;
        case 0x4fa33cu: goto label_4fa33c;
        case 0x4fa340u: goto label_4fa340;
        case 0x4fa344u: goto label_4fa344;
        case 0x4fa348u: goto label_4fa348;
        case 0x4fa34cu: goto label_4fa34c;
        case 0x4fa350u: goto label_4fa350;
        case 0x4fa354u: goto label_4fa354;
        case 0x4fa358u: goto label_4fa358;
        case 0x4fa35cu: goto label_4fa35c;
        case 0x4fa360u: goto label_4fa360;
        case 0x4fa364u: goto label_4fa364;
        case 0x4fa368u: goto label_4fa368;
        case 0x4fa36cu: goto label_4fa36c;
        case 0x4fa370u: goto label_4fa370;
        case 0x4fa374u: goto label_4fa374;
        case 0x4fa378u: goto label_4fa378;
        case 0x4fa37cu: goto label_4fa37c;
        case 0x4fa380u: goto label_4fa380;
        case 0x4fa384u: goto label_4fa384;
        case 0x4fa388u: goto label_4fa388;
        case 0x4fa38cu: goto label_4fa38c;
        case 0x4fa390u: goto label_4fa390;
        case 0x4fa394u: goto label_4fa394;
        case 0x4fa398u: goto label_4fa398;
        case 0x4fa39cu: goto label_4fa39c;
        case 0x4fa3a0u: goto label_4fa3a0;
        case 0x4fa3a4u: goto label_4fa3a4;
        case 0x4fa3a8u: goto label_4fa3a8;
        case 0x4fa3acu: goto label_4fa3ac;
        case 0x4fa3b0u: goto label_4fa3b0;
        case 0x4fa3b4u: goto label_4fa3b4;
        case 0x4fa3b8u: goto label_4fa3b8;
        case 0x4fa3bcu: goto label_4fa3bc;
        case 0x4fa3c0u: goto label_4fa3c0;
        case 0x4fa3c4u: goto label_4fa3c4;
        case 0x4fa3c8u: goto label_4fa3c8;
        case 0x4fa3ccu: goto label_4fa3cc;
        case 0x4fa3d0u: goto label_4fa3d0;
        case 0x4fa3d4u: goto label_4fa3d4;
        case 0x4fa3d8u: goto label_4fa3d8;
        case 0x4fa3dcu: goto label_4fa3dc;
        case 0x4fa3e0u: goto label_4fa3e0;
        case 0x4fa3e4u: goto label_4fa3e4;
        case 0x4fa3e8u: goto label_4fa3e8;
        case 0x4fa3ecu: goto label_4fa3ec;
        case 0x4fa3f0u: goto label_4fa3f0;
        case 0x4fa3f4u: goto label_4fa3f4;
        case 0x4fa3f8u: goto label_4fa3f8;
        case 0x4fa3fcu: goto label_4fa3fc;
        case 0x4fa400u: goto label_4fa400;
        case 0x4fa404u: goto label_4fa404;
        case 0x4fa408u: goto label_4fa408;
        case 0x4fa40cu: goto label_4fa40c;
        case 0x4fa410u: goto label_4fa410;
        case 0x4fa414u: goto label_4fa414;
        case 0x4fa418u: goto label_4fa418;
        case 0x4fa41cu: goto label_4fa41c;
        case 0x4fa420u: goto label_4fa420;
        case 0x4fa424u: goto label_4fa424;
        case 0x4fa428u: goto label_4fa428;
        case 0x4fa42cu: goto label_4fa42c;
        case 0x4fa430u: goto label_4fa430;
        case 0x4fa434u: goto label_4fa434;
        case 0x4fa438u: goto label_4fa438;
        case 0x4fa43cu: goto label_4fa43c;
        case 0x4fa440u: goto label_4fa440;
        case 0x4fa444u: goto label_4fa444;
        case 0x4fa448u: goto label_4fa448;
        case 0x4fa44cu: goto label_4fa44c;
        case 0x4fa450u: goto label_4fa450;
        case 0x4fa454u: goto label_4fa454;
        case 0x4fa458u: goto label_4fa458;
        case 0x4fa45cu: goto label_4fa45c;
        case 0x4fa460u: goto label_4fa460;
        case 0x4fa464u: goto label_4fa464;
        case 0x4fa468u: goto label_4fa468;
        case 0x4fa46cu: goto label_4fa46c;
        case 0x4fa470u: goto label_4fa470;
        case 0x4fa474u: goto label_4fa474;
        case 0x4fa478u: goto label_4fa478;
        case 0x4fa47cu: goto label_4fa47c;
        case 0x4fa480u: goto label_4fa480;
        case 0x4fa484u: goto label_4fa484;
        case 0x4fa488u: goto label_4fa488;
        case 0x4fa48cu: goto label_4fa48c;
        case 0x4fa490u: goto label_4fa490;
        case 0x4fa494u: goto label_4fa494;
        case 0x4fa498u: goto label_4fa498;
        case 0x4fa49cu: goto label_4fa49c;
        case 0x4fa4a0u: goto label_4fa4a0;
        case 0x4fa4a4u: goto label_4fa4a4;
        case 0x4fa4a8u: goto label_4fa4a8;
        case 0x4fa4acu: goto label_4fa4ac;
        case 0x4fa4b0u: goto label_4fa4b0;
        case 0x4fa4b4u: goto label_4fa4b4;
        case 0x4fa4b8u: goto label_4fa4b8;
        case 0x4fa4bcu: goto label_4fa4bc;
        case 0x4fa4c0u: goto label_4fa4c0;
        case 0x4fa4c4u: goto label_4fa4c4;
        case 0x4fa4c8u: goto label_4fa4c8;
        case 0x4fa4ccu: goto label_4fa4cc;
        case 0x4fa4d0u: goto label_4fa4d0;
        case 0x4fa4d4u: goto label_4fa4d4;
        case 0x4fa4d8u: goto label_4fa4d8;
        case 0x4fa4dcu: goto label_4fa4dc;
        case 0x4fa4e0u: goto label_4fa4e0;
        case 0x4fa4e4u: goto label_4fa4e4;
        case 0x4fa4e8u: goto label_4fa4e8;
        case 0x4fa4ecu: goto label_4fa4ec;
        case 0x4fa4f0u: goto label_4fa4f0;
        case 0x4fa4f4u: goto label_4fa4f4;
        case 0x4fa4f8u: goto label_4fa4f8;
        case 0x4fa4fcu: goto label_4fa4fc;
        case 0x4fa500u: goto label_4fa500;
        case 0x4fa504u: goto label_4fa504;
        case 0x4fa508u: goto label_4fa508;
        case 0x4fa50cu: goto label_4fa50c;
        case 0x4fa510u: goto label_4fa510;
        case 0x4fa514u: goto label_4fa514;
        case 0x4fa518u: goto label_4fa518;
        case 0x4fa51cu: goto label_4fa51c;
        case 0x4fa520u: goto label_4fa520;
        case 0x4fa524u: goto label_4fa524;
        case 0x4fa528u: goto label_4fa528;
        case 0x4fa52cu: goto label_4fa52c;
        case 0x4fa530u: goto label_4fa530;
        case 0x4fa534u: goto label_4fa534;
        case 0x4fa538u: goto label_4fa538;
        case 0x4fa53cu: goto label_4fa53c;
        case 0x4fa540u: goto label_4fa540;
        case 0x4fa544u: goto label_4fa544;
        case 0x4fa548u: goto label_4fa548;
        case 0x4fa54cu: goto label_4fa54c;
        case 0x4fa550u: goto label_4fa550;
        case 0x4fa554u: goto label_4fa554;
        case 0x4fa558u: goto label_4fa558;
        case 0x4fa55cu: goto label_4fa55c;
        case 0x4fa560u: goto label_4fa560;
        case 0x4fa564u: goto label_4fa564;
        case 0x4fa568u: goto label_4fa568;
        case 0x4fa56cu: goto label_4fa56c;
        case 0x4fa570u: goto label_4fa570;
        case 0x4fa574u: goto label_4fa574;
        case 0x4fa578u: goto label_4fa578;
        case 0x4fa57cu: goto label_4fa57c;
        case 0x4fa580u: goto label_4fa580;
        case 0x4fa584u: goto label_4fa584;
        case 0x4fa588u: goto label_4fa588;
        case 0x4fa58cu: goto label_4fa58c;
        case 0x4fa590u: goto label_4fa590;
        case 0x4fa594u: goto label_4fa594;
        case 0x4fa598u: goto label_4fa598;
        case 0x4fa59cu: goto label_4fa59c;
        case 0x4fa5a0u: goto label_4fa5a0;
        case 0x4fa5a4u: goto label_4fa5a4;
        case 0x4fa5a8u: goto label_4fa5a8;
        case 0x4fa5acu: goto label_4fa5ac;
        case 0x4fa5b0u: goto label_4fa5b0;
        case 0x4fa5b4u: goto label_4fa5b4;
        case 0x4fa5b8u: goto label_4fa5b8;
        case 0x4fa5bcu: goto label_4fa5bc;
        case 0x4fa5c0u: goto label_4fa5c0;
        case 0x4fa5c4u: goto label_4fa5c4;
        case 0x4fa5c8u: goto label_4fa5c8;
        case 0x4fa5ccu: goto label_4fa5cc;
        case 0x4fa5d0u: goto label_4fa5d0;
        case 0x4fa5d4u: goto label_4fa5d4;
        case 0x4fa5d8u: goto label_4fa5d8;
        case 0x4fa5dcu: goto label_4fa5dc;
        case 0x4fa5e0u: goto label_4fa5e0;
        case 0x4fa5e4u: goto label_4fa5e4;
        case 0x4fa5e8u: goto label_4fa5e8;
        case 0x4fa5ecu: goto label_4fa5ec;
        case 0x4fa5f0u: goto label_4fa5f0;
        case 0x4fa5f4u: goto label_4fa5f4;
        case 0x4fa5f8u: goto label_4fa5f8;
        case 0x4fa5fcu: goto label_4fa5fc;
        case 0x4fa600u: goto label_4fa600;
        case 0x4fa604u: goto label_4fa604;
        case 0x4fa608u: goto label_4fa608;
        case 0x4fa60cu: goto label_4fa60c;
        case 0x4fa610u: goto label_4fa610;
        case 0x4fa614u: goto label_4fa614;
        case 0x4fa618u: goto label_4fa618;
        case 0x4fa61cu: goto label_4fa61c;
        case 0x4fa620u: goto label_4fa620;
        case 0x4fa624u: goto label_4fa624;
        case 0x4fa628u: goto label_4fa628;
        case 0x4fa62cu: goto label_4fa62c;
        case 0x4fa630u: goto label_4fa630;
        case 0x4fa634u: goto label_4fa634;
        case 0x4fa638u: goto label_4fa638;
        case 0x4fa63cu: goto label_4fa63c;
        case 0x4fa640u: goto label_4fa640;
        case 0x4fa644u: goto label_4fa644;
        case 0x4fa648u: goto label_4fa648;
        case 0x4fa64cu: goto label_4fa64c;
        case 0x4fa650u: goto label_4fa650;
        case 0x4fa654u: goto label_4fa654;
        case 0x4fa658u: goto label_4fa658;
        case 0x4fa65cu: goto label_4fa65c;
        case 0x4fa660u: goto label_4fa660;
        case 0x4fa664u: goto label_4fa664;
        case 0x4fa668u: goto label_4fa668;
        case 0x4fa66cu: goto label_4fa66c;
        case 0x4fa670u: goto label_4fa670;
        case 0x4fa674u: goto label_4fa674;
        case 0x4fa678u: goto label_4fa678;
        case 0x4fa67cu: goto label_4fa67c;
        case 0x4fa680u: goto label_4fa680;
        case 0x4fa684u: goto label_4fa684;
        case 0x4fa688u: goto label_4fa688;
        case 0x4fa68cu: goto label_4fa68c;
        case 0x4fa690u: goto label_4fa690;
        case 0x4fa694u: goto label_4fa694;
        case 0x4fa698u: goto label_4fa698;
        case 0x4fa69cu: goto label_4fa69c;
        case 0x4fa6a0u: goto label_4fa6a0;
        case 0x4fa6a4u: goto label_4fa6a4;
        case 0x4fa6a8u: goto label_4fa6a8;
        case 0x4fa6acu: goto label_4fa6ac;
        case 0x4fa6b0u: goto label_4fa6b0;
        case 0x4fa6b4u: goto label_4fa6b4;
        case 0x4fa6b8u: goto label_4fa6b8;
        case 0x4fa6bcu: goto label_4fa6bc;
        case 0x4fa6c0u: goto label_4fa6c0;
        case 0x4fa6c4u: goto label_4fa6c4;
        case 0x4fa6c8u: goto label_4fa6c8;
        case 0x4fa6ccu: goto label_4fa6cc;
        case 0x4fa6d0u: goto label_4fa6d0;
        case 0x4fa6d4u: goto label_4fa6d4;
        case 0x4fa6d8u: goto label_4fa6d8;
        case 0x4fa6dcu: goto label_4fa6dc;
        case 0x4fa6e0u: goto label_4fa6e0;
        case 0x4fa6e4u: goto label_4fa6e4;
        case 0x4fa6e8u: goto label_4fa6e8;
        case 0x4fa6ecu: goto label_4fa6ec;
        case 0x4fa6f0u: goto label_4fa6f0;
        case 0x4fa6f4u: goto label_4fa6f4;
        case 0x4fa6f8u: goto label_4fa6f8;
        case 0x4fa6fcu: goto label_4fa6fc;
        case 0x4fa700u: goto label_4fa700;
        case 0x4fa704u: goto label_4fa704;
        case 0x4fa708u: goto label_4fa708;
        case 0x4fa70cu: goto label_4fa70c;
        case 0x4fa710u: goto label_4fa710;
        case 0x4fa714u: goto label_4fa714;
        case 0x4fa718u: goto label_4fa718;
        case 0x4fa71cu: goto label_4fa71c;
        case 0x4fa720u: goto label_4fa720;
        case 0x4fa724u: goto label_4fa724;
        case 0x4fa728u: goto label_4fa728;
        case 0x4fa72cu: goto label_4fa72c;
        case 0x4fa730u: goto label_4fa730;
        case 0x4fa734u: goto label_4fa734;
        case 0x4fa738u: goto label_4fa738;
        case 0x4fa73cu: goto label_4fa73c;
        case 0x4fa740u: goto label_4fa740;
        case 0x4fa744u: goto label_4fa744;
        case 0x4fa748u: goto label_4fa748;
        case 0x4fa74cu: goto label_4fa74c;
        case 0x4fa750u: goto label_4fa750;
        case 0x4fa754u: goto label_4fa754;
        case 0x4fa758u: goto label_4fa758;
        case 0x4fa75cu: goto label_4fa75c;
        case 0x4fa760u: goto label_4fa760;
        case 0x4fa764u: goto label_4fa764;
        case 0x4fa768u: goto label_4fa768;
        case 0x4fa76cu: goto label_4fa76c;
        case 0x4fa770u: goto label_4fa770;
        case 0x4fa774u: goto label_4fa774;
        case 0x4fa778u: goto label_4fa778;
        case 0x4fa77cu: goto label_4fa77c;
        case 0x4fa780u: goto label_4fa780;
        case 0x4fa784u: goto label_4fa784;
        case 0x4fa788u: goto label_4fa788;
        case 0x4fa78cu: goto label_4fa78c;
        case 0x4fa790u: goto label_4fa790;
        case 0x4fa794u: goto label_4fa794;
        case 0x4fa798u: goto label_4fa798;
        case 0x4fa79cu: goto label_4fa79c;
        case 0x4fa7a0u: goto label_4fa7a0;
        case 0x4fa7a4u: goto label_4fa7a4;
        case 0x4fa7a8u: goto label_4fa7a8;
        case 0x4fa7acu: goto label_4fa7ac;
        case 0x4fa7b0u: goto label_4fa7b0;
        case 0x4fa7b4u: goto label_4fa7b4;
        case 0x4fa7b8u: goto label_4fa7b8;
        case 0x4fa7bcu: goto label_4fa7bc;
        case 0x4fa7c0u: goto label_4fa7c0;
        case 0x4fa7c4u: goto label_4fa7c4;
        case 0x4fa7c8u: goto label_4fa7c8;
        case 0x4fa7ccu: goto label_4fa7cc;
        case 0x4fa7d0u: goto label_4fa7d0;
        case 0x4fa7d4u: goto label_4fa7d4;
        case 0x4fa7d8u: goto label_4fa7d8;
        case 0x4fa7dcu: goto label_4fa7dc;
        case 0x4fa7e0u: goto label_4fa7e0;
        case 0x4fa7e4u: goto label_4fa7e4;
        case 0x4fa7e8u: goto label_4fa7e8;
        case 0x4fa7ecu: goto label_4fa7ec;
        case 0x4fa7f0u: goto label_4fa7f0;
        case 0x4fa7f4u: goto label_4fa7f4;
        case 0x4fa7f8u: goto label_4fa7f8;
        case 0x4fa7fcu: goto label_4fa7fc;
        case 0x4fa800u: goto label_4fa800;
        case 0x4fa804u: goto label_4fa804;
        case 0x4fa808u: goto label_4fa808;
        case 0x4fa80cu: goto label_4fa80c;
        case 0x4fa810u: goto label_4fa810;
        case 0x4fa814u: goto label_4fa814;
        case 0x4fa818u: goto label_4fa818;
        case 0x4fa81cu: goto label_4fa81c;
        case 0x4fa820u: goto label_4fa820;
        case 0x4fa824u: goto label_4fa824;
        case 0x4fa828u: goto label_4fa828;
        case 0x4fa82cu: goto label_4fa82c;
        case 0x4fa830u: goto label_4fa830;
        case 0x4fa834u: goto label_4fa834;
        case 0x4fa838u: goto label_4fa838;
        case 0x4fa83cu: goto label_4fa83c;
        case 0x4fa840u: goto label_4fa840;
        case 0x4fa844u: goto label_4fa844;
        case 0x4fa848u: goto label_4fa848;
        case 0x4fa84cu: goto label_4fa84c;
        case 0x4fa850u: goto label_4fa850;
        case 0x4fa854u: goto label_4fa854;
        case 0x4fa858u: goto label_4fa858;
        case 0x4fa85cu: goto label_4fa85c;
        case 0x4fa860u: goto label_4fa860;
        case 0x4fa864u: goto label_4fa864;
        case 0x4fa868u: goto label_4fa868;
        case 0x4fa86cu: goto label_4fa86c;
        case 0x4fa870u: goto label_4fa870;
        case 0x4fa874u: goto label_4fa874;
        case 0x4fa878u: goto label_4fa878;
        case 0x4fa87cu: goto label_4fa87c;
        case 0x4fa880u: goto label_4fa880;
        case 0x4fa884u: goto label_4fa884;
        case 0x4fa888u: goto label_4fa888;
        case 0x4fa88cu: goto label_4fa88c;
        case 0x4fa890u: goto label_4fa890;
        case 0x4fa894u: goto label_4fa894;
        case 0x4fa898u: goto label_4fa898;
        case 0x4fa89cu: goto label_4fa89c;
        case 0x4fa8a0u: goto label_4fa8a0;
        case 0x4fa8a4u: goto label_4fa8a4;
        case 0x4fa8a8u: goto label_4fa8a8;
        case 0x4fa8acu: goto label_4fa8ac;
        case 0x4fa8b0u: goto label_4fa8b0;
        case 0x4fa8b4u: goto label_4fa8b4;
        case 0x4fa8b8u: goto label_4fa8b8;
        case 0x4fa8bcu: goto label_4fa8bc;
        case 0x4fa8c0u: goto label_4fa8c0;
        case 0x4fa8c4u: goto label_4fa8c4;
        case 0x4fa8c8u: goto label_4fa8c8;
        case 0x4fa8ccu: goto label_4fa8cc;
        case 0x4fa8d0u: goto label_4fa8d0;
        case 0x4fa8d4u: goto label_4fa8d4;
        case 0x4fa8d8u: goto label_4fa8d8;
        case 0x4fa8dcu: goto label_4fa8dc;
        case 0x4fa8e0u: goto label_4fa8e0;
        case 0x4fa8e4u: goto label_4fa8e4;
        case 0x4fa8e8u: goto label_4fa8e8;
        case 0x4fa8ecu: goto label_4fa8ec;
        case 0x4fa8f0u: goto label_4fa8f0;
        case 0x4fa8f4u: goto label_4fa8f4;
        case 0x4fa8f8u: goto label_4fa8f8;
        case 0x4fa8fcu: goto label_4fa8fc;
        case 0x4fa900u: goto label_4fa900;
        case 0x4fa904u: goto label_4fa904;
        case 0x4fa908u: goto label_4fa908;
        case 0x4fa90cu: goto label_4fa90c;
        case 0x4fa910u: goto label_4fa910;
        case 0x4fa914u: goto label_4fa914;
        case 0x4fa918u: goto label_4fa918;
        case 0x4fa91cu: goto label_4fa91c;
        case 0x4fa920u: goto label_4fa920;
        case 0x4fa924u: goto label_4fa924;
        case 0x4fa928u: goto label_4fa928;
        case 0x4fa92cu: goto label_4fa92c;
        case 0x4fa930u: goto label_4fa930;
        case 0x4fa934u: goto label_4fa934;
        case 0x4fa938u: goto label_4fa938;
        case 0x4fa93cu: goto label_4fa93c;
        case 0x4fa940u: goto label_4fa940;
        case 0x4fa944u: goto label_4fa944;
        case 0x4fa948u: goto label_4fa948;
        case 0x4fa94cu: goto label_4fa94c;
        case 0x4fa950u: goto label_4fa950;
        case 0x4fa954u: goto label_4fa954;
        case 0x4fa958u: goto label_4fa958;
        case 0x4fa95cu: goto label_4fa95c;
        case 0x4fa960u: goto label_4fa960;
        case 0x4fa964u: goto label_4fa964;
        case 0x4fa968u: goto label_4fa968;
        case 0x4fa96cu: goto label_4fa96c;
        case 0x4fa970u: goto label_4fa970;
        case 0x4fa974u: goto label_4fa974;
        case 0x4fa978u: goto label_4fa978;
        case 0x4fa97cu: goto label_4fa97c;
        case 0x4fa980u: goto label_4fa980;
        case 0x4fa984u: goto label_4fa984;
        case 0x4fa988u: goto label_4fa988;
        case 0x4fa98cu: goto label_4fa98c;
        case 0x4fa990u: goto label_4fa990;
        case 0x4fa994u: goto label_4fa994;
        case 0x4fa998u: goto label_4fa998;
        case 0x4fa99cu: goto label_4fa99c;
        case 0x4fa9a0u: goto label_4fa9a0;
        case 0x4fa9a4u: goto label_4fa9a4;
        case 0x4fa9a8u: goto label_4fa9a8;
        case 0x4fa9acu: goto label_4fa9ac;
        case 0x4fa9b0u: goto label_4fa9b0;
        case 0x4fa9b4u: goto label_4fa9b4;
        case 0x4fa9b8u: goto label_4fa9b8;
        case 0x4fa9bcu: goto label_4fa9bc;
        case 0x4fa9c0u: goto label_4fa9c0;
        case 0x4fa9c4u: goto label_4fa9c4;
        case 0x4fa9c8u: goto label_4fa9c8;
        case 0x4fa9ccu: goto label_4fa9cc;
        case 0x4fa9d0u: goto label_4fa9d0;
        case 0x4fa9d4u: goto label_4fa9d4;
        case 0x4fa9d8u: goto label_4fa9d8;
        case 0x4fa9dcu: goto label_4fa9dc;
        case 0x4fa9e0u: goto label_4fa9e0;
        case 0x4fa9e4u: goto label_4fa9e4;
        case 0x4fa9e8u: goto label_4fa9e8;
        case 0x4fa9ecu: goto label_4fa9ec;
        case 0x4fa9f0u: goto label_4fa9f0;
        case 0x4fa9f4u: goto label_4fa9f4;
        case 0x4fa9f8u: goto label_4fa9f8;
        case 0x4fa9fcu: goto label_4fa9fc;
        case 0x4faa00u: goto label_4faa00;
        case 0x4faa04u: goto label_4faa04;
        case 0x4faa08u: goto label_4faa08;
        case 0x4faa0cu: goto label_4faa0c;
        case 0x4faa10u: goto label_4faa10;
        case 0x4faa14u: goto label_4faa14;
        case 0x4faa18u: goto label_4faa18;
        case 0x4faa1cu: goto label_4faa1c;
        case 0x4faa20u: goto label_4faa20;
        case 0x4faa24u: goto label_4faa24;
        case 0x4faa28u: goto label_4faa28;
        case 0x4faa2cu: goto label_4faa2c;
        case 0x4faa30u: goto label_4faa30;
        case 0x4faa34u: goto label_4faa34;
        case 0x4faa38u: goto label_4faa38;
        case 0x4faa3cu: goto label_4faa3c;
        case 0x4faa40u: goto label_4faa40;
        case 0x4faa44u: goto label_4faa44;
        case 0x4faa48u: goto label_4faa48;
        case 0x4faa4cu: goto label_4faa4c;
        case 0x4faa50u: goto label_4faa50;
        case 0x4faa54u: goto label_4faa54;
        case 0x4faa58u: goto label_4faa58;
        case 0x4faa5cu: goto label_4faa5c;
        case 0x4faa60u: goto label_4faa60;
        case 0x4faa64u: goto label_4faa64;
        case 0x4faa68u: goto label_4faa68;
        case 0x4faa6cu: goto label_4faa6c;
        case 0x4faa70u: goto label_4faa70;
        case 0x4faa74u: goto label_4faa74;
        case 0x4faa78u: goto label_4faa78;
        case 0x4faa7cu: goto label_4faa7c;
        case 0x4faa80u: goto label_4faa80;
        case 0x4faa84u: goto label_4faa84;
        case 0x4faa88u: goto label_4faa88;
        case 0x4faa8cu: goto label_4faa8c;
        case 0x4faa90u: goto label_4faa90;
        case 0x4faa94u: goto label_4faa94;
        case 0x4faa98u: goto label_4faa98;
        case 0x4faa9cu: goto label_4faa9c;
        case 0x4faaa0u: goto label_4faaa0;
        case 0x4faaa4u: goto label_4faaa4;
        case 0x4faaa8u: goto label_4faaa8;
        case 0x4faaacu: goto label_4faaac;
        case 0x4faab0u: goto label_4faab0;
        case 0x4faab4u: goto label_4faab4;
        case 0x4faab8u: goto label_4faab8;
        case 0x4faabcu: goto label_4faabc;
        case 0x4faac0u: goto label_4faac0;
        case 0x4faac4u: goto label_4faac4;
        case 0x4faac8u: goto label_4faac8;
        case 0x4faaccu: goto label_4faacc;
        case 0x4faad0u: goto label_4faad0;
        case 0x4faad4u: goto label_4faad4;
        case 0x4faad8u: goto label_4faad8;
        case 0x4faadcu: goto label_4faadc;
        case 0x4faae0u: goto label_4faae0;
        case 0x4faae4u: goto label_4faae4;
        case 0x4faae8u: goto label_4faae8;
        case 0x4faaecu: goto label_4faaec;
        case 0x4faaf0u: goto label_4faaf0;
        case 0x4faaf4u: goto label_4faaf4;
        case 0x4faaf8u: goto label_4faaf8;
        case 0x4faafcu: goto label_4faafc;
        case 0x4fab00u: goto label_4fab00;
        case 0x4fab04u: goto label_4fab04;
        case 0x4fab08u: goto label_4fab08;
        case 0x4fab0cu: goto label_4fab0c;
        case 0x4fab10u: goto label_4fab10;
        case 0x4fab14u: goto label_4fab14;
        case 0x4fab18u: goto label_4fab18;
        case 0x4fab1cu: goto label_4fab1c;
        case 0x4fab20u: goto label_4fab20;
        case 0x4fab24u: goto label_4fab24;
        case 0x4fab28u: goto label_4fab28;
        case 0x4fab2cu: goto label_4fab2c;
        case 0x4fab30u: goto label_4fab30;
        case 0x4fab34u: goto label_4fab34;
        case 0x4fab38u: goto label_4fab38;
        case 0x4fab3cu: goto label_4fab3c;
        case 0x4fab40u: goto label_4fab40;
        case 0x4fab44u: goto label_4fab44;
        case 0x4fab48u: goto label_4fab48;
        case 0x4fab4cu: goto label_4fab4c;
        case 0x4fab50u: goto label_4fab50;
        case 0x4fab54u: goto label_4fab54;
        case 0x4fab58u: goto label_4fab58;
        case 0x4fab5cu: goto label_4fab5c;
        case 0x4fab60u: goto label_4fab60;
        case 0x4fab64u: goto label_4fab64;
        case 0x4fab68u: goto label_4fab68;
        case 0x4fab6cu: goto label_4fab6c;
        case 0x4fab70u: goto label_4fab70;
        case 0x4fab74u: goto label_4fab74;
        case 0x4fab78u: goto label_4fab78;
        case 0x4fab7cu: goto label_4fab7c;
        case 0x4fab80u: goto label_4fab80;
        case 0x4fab84u: goto label_4fab84;
        case 0x4fab88u: goto label_4fab88;
        case 0x4fab8cu: goto label_4fab8c;
        case 0x4fab90u: goto label_4fab90;
        case 0x4fab94u: goto label_4fab94;
        case 0x4fab98u: goto label_4fab98;
        case 0x4fab9cu: goto label_4fab9c;
        case 0x4faba0u: goto label_4faba0;
        case 0x4faba4u: goto label_4faba4;
        case 0x4faba8u: goto label_4faba8;
        case 0x4fabacu: goto label_4fabac;
        case 0x4fabb0u: goto label_4fabb0;
        case 0x4fabb4u: goto label_4fabb4;
        case 0x4fabb8u: goto label_4fabb8;
        case 0x4fabbcu: goto label_4fabbc;
        case 0x4fabc0u: goto label_4fabc0;
        case 0x4fabc4u: goto label_4fabc4;
        case 0x4fabc8u: goto label_4fabc8;
        case 0x4fabccu: goto label_4fabcc;
        case 0x4fabd0u: goto label_4fabd0;
        case 0x4fabd4u: goto label_4fabd4;
        case 0x4fabd8u: goto label_4fabd8;
        case 0x4fabdcu: goto label_4fabdc;
        case 0x4fabe0u: goto label_4fabe0;
        case 0x4fabe4u: goto label_4fabe4;
        case 0x4fabe8u: goto label_4fabe8;
        case 0x4fabecu: goto label_4fabec;
        case 0x4fabf0u: goto label_4fabf0;
        case 0x4fabf4u: goto label_4fabf4;
        case 0x4fabf8u: goto label_4fabf8;
        case 0x4fabfcu: goto label_4fabfc;
        case 0x4fac00u: goto label_4fac00;
        case 0x4fac04u: goto label_4fac04;
        case 0x4fac08u: goto label_4fac08;
        case 0x4fac0cu: goto label_4fac0c;
        case 0x4fac10u: goto label_4fac10;
        case 0x4fac14u: goto label_4fac14;
        case 0x4fac18u: goto label_4fac18;
        case 0x4fac1cu: goto label_4fac1c;
        case 0x4fac20u: goto label_4fac20;
        case 0x4fac24u: goto label_4fac24;
        case 0x4fac28u: goto label_4fac28;
        case 0x4fac2cu: goto label_4fac2c;
        case 0x4fac30u: goto label_4fac30;
        case 0x4fac34u: goto label_4fac34;
        case 0x4fac38u: goto label_4fac38;
        case 0x4fac3cu: goto label_4fac3c;
        case 0x4fac40u: goto label_4fac40;
        case 0x4fac44u: goto label_4fac44;
        case 0x4fac48u: goto label_4fac48;
        case 0x4fac4cu: goto label_4fac4c;
        case 0x4fac50u: goto label_4fac50;
        case 0x4fac54u: goto label_4fac54;
        case 0x4fac58u: goto label_4fac58;
        case 0x4fac5cu: goto label_4fac5c;
        case 0x4fac60u: goto label_4fac60;
        case 0x4fac64u: goto label_4fac64;
        case 0x4fac68u: goto label_4fac68;
        case 0x4fac6cu: goto label_4fac6c;
        case 0x4fac70u: goto label_4fac70;
        case 0x4fac74u: goto label_4fac74;
        case 0x4fac78u: goto label_4fac78;
        case 0x4fac7cu: goto label_4fac7c;
        case 0x4fac80u: goto label_4fac80;
        case 0x4fac84u: goto label_4fac84;
        case 0x4fac88u: goto label_4fac88;
        case 0x4fac8cu: goto label_4fac8c;
        case 0x4fac90u: goto label_4fac90;
        case 0x4fac94u: goto label_4fac94;
        case 0x4fac98u: goto label_4fac98;
        case 0x4fac9cu: goto label_4fac9c;
        case 0x4faca0u: goto label_4faca0;
        case 0x4faca4u: goto label_4faca4;
        case 0x4faca8u: goto label_4faca8;
        case 0x4facacu: goto label_4facac;
        case 0x4facb0u: goto label_4facb0;
        case 0x4facb4u: goto label_4facb4;
        case 0x4facb8u: goto label_4facb8;
        case 0x4facbcu: goto label_4facbc;
        case 0x4facc0u: goto label_4facc0;
        case 0x4facc4u: goto label_4facc4;
        case 0x4facc8u: goto label_4facc8;
        case 0x4facccu: goto label_4faccc;
        case 0x4facd0u: goto label_4facd0;
        case 0x4facd4u: goto label_4facd4;
        case 0x4facd8u: goto label_4facd8;
        case 0x4facdcu: goto label_4facdc;
        case 0x4face0u: goto label_4face0;
        case 0x4face4u: goto label_4face4;
        case 0x4face8u: goto label_4face8;
        case 0x4facecu: goto label_4facec;
        case 0x4facf0u: goto label_4facf0;
        case 0x4facf4u: goto label_4facf4;
        case 0x4facf8u: goto label_4facf8;
        case 0x4facfcu: goto label_4facfc;
        case 0x4fad00u: goto label_4fad00;
        case 0x4fad04u: goto label_4fad04;
        case 0x4fad08u: goto label_4fad08;
        case 0x4fad0cu: goto label_4fad0c;
        case 0x4fad10u: goto label_4fad10;
        case 0x4fad14u: goto label_4fad14;
        case 0x4fad18u: goto label_4fad18;
        case 0x4fad1cu: goto label_4fad1c;
        case 0x4fad20u: goto label_4fad20;
        case 0x4fad24u: goto label_4fad24;
        case 0x4fad28u: goto label_4fad28;
        case 0x4fad2cu: goto label_4fad2c;
        case 0x4fad30u: goto label_4fad30;
        case 0x4fad34u: goto label_4fad34;
        case 0x4fad38u: goto label_4fad38;
        case 0x4fad3cu: goto label_4fad3c;
        case 0x4fad40u: goto label_4fad40;
        case 0x4fad44u: goto label_4fad44;
        case 0x4fad48u: goto label_4fad48;
        case 0x4fad4cu: goto label_4fad4c;
        case 0x4fad50u: goto label_4fad50;
        case 0x4fad54u: goto label_4fad54;
        case 0x4fad58u: goto label_4fad58;
        case 0x4fad5cu: goto label_4fad5c;
        case 0x4fad60u: goto label_4fad60;
        case 0x4fad64u: goto label_4fad64;
        case 0x4fad68u: goto label_4fad68;
        case 0x4fad6cu: goto label_4fad6c;
        case 0x4fad70u: goto label_4fad70;
        case 0x4fad74u: goto label_4fad74;
        case 0x4fad78u: goto label_4fad78;
        case 0x4fad7cu: goto label_4fad7c;
        default: break;
    }

    ctx->pc = 0x4f7f60u;

label_4f7f60:
    // 0x4f7f60: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4f7f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4f7f64:
    // 0x4f7f64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f7f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f7f68:
    // 0x4f7f68: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4f7f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4f7f6c:
    // 0x4f7f6c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4f7f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4f7f70:
    // 0x4f7f70: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4f7f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4f7f74:
    // 0x4f7f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4f7f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4f7f78:
    // 0x4f7f78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4f7f78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f7f7c:
    // 0x4f7f7c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4f7f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4f7f80:
    // 0x4f7f80: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4f7f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4f7f84:
    // 0x4f7f84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f7f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f7f88:
    // 0x4f7f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4f7f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4f7f8c:
    // 0x4f7f8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f7f8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f7f90:
    // 0x4f7f90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4f7f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4f7f94:
    // 0x4f7f94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4f7f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f7f98:
    // 0x4f7f98: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x4f7f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f7f9c:
    // 0x4f7f9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4f7f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f7fa0:
    // 0x4f7fa0: 0x8c730e80  lw          $s3, 0xE80($v1)
    ctx->pc = 0x4f7fa0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4f7fa4:
    // 0x4f7fa4: 0x80a50e3f  lb          $a1, 0xE3F($a1)
    ctx->pc = 0x4f7fa4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 3647)));
label_4f7fa8:
    // 0x4f7fa8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f7fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f7fac:
    // 0x4f7fac: 0x8e63077c  lw          $v1, 0x77C($s3)
    ctx->pc = 0x4f7facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_4f7fb0:
    // 0x4f7fb0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4f7fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4f7fb4:
    // 0x4f7fb4: 0x5be3c  dsll32      $s7, $a1, 24
    ctx->pc = 0x4f7fb4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) << (32 + 24));
label_4f7fb8:
    // 0x4f7fb8: 0x10640060  beq         $v1, $a0, . + 4 + (0x60 << 2)
label_4f7fbc:
    if (ctx->pc == 0x4F7FBCu) {
        ctx->pc = 0x4F7FBCu;
            // 0x4f7fbc: 0x17be3f  dsra32      $s7, $s7, 24 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
        ctx->pc = 0x4F7FC0u;
        goto label_4f7fc0;
    }
    ctx->pc = 0x4F7FB8u;
    {
        const bool branch_taken_0x4f7fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x4F7FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7FB8u;
            // 0x4f7fbc: 0x17be3f  dsra32      $s7, $s7, 24 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7fb8) {
            ctx->pc = 0x4F813Cu;
            goto label_4f813c;
        }
    }
    ctx->pc = 0x4F7FC0u;
label_4f7fc0:
    // 0x4f7fc0: 0x9243005a  lbu         $v1, 0x5A($s2)
    ctx->pc = 0x4f7fc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_4f7fc4:
    // 0x4f7fc4: 0x17263c  dsll32      $a0, $s7, 24
    ctx->pc = 0x4f7fc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) << (32 + 24));
label_4f7fc8:
    // 0x4f7fc8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x4f7fc8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_4f7fcc:
    // 0x4f7fcc: 0x5083005c  beql        $a0, $v1, . + 4 + (0x5C << 2)
label_4f7fd0:
    if (ctx->pc == 0x4F7FD0u) {
        ctx->pc = 0x4F7FD0u;
            // 0x4f7fd0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4F7FD4u;
        goto label_4f7fd4;
    }
    ctx->pc = 0x4F7FCCu;
    {
        const bool branch_taken_0x4f7fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f7fcc) {
            ctx->pc = 0x4F7FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7FCCu;
            // 0x4f7fd0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8140u;
            goto label_4f8140;
        }
    }
    ctx->pc = 0x4F7FD4u;
label_4f7fd4:
    // 0x4f7fd4: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x4f7fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
label_4f7fd8:
    // 0x4f7fd8: 0x26940e80  addiu       $s4, $s4, 0xE80
    ctx->pc = 0x4f7fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3712));
label_4f7fdc:
    // 0x4f7fdc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4f7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4f7fe0:
    // 0x4f7fe0: 0x64150001  daddiu      $s5, $zero, 0x1
    ctx->pc = 0x4f7fe0u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4f7fe4:
    // 0x4f7fe4: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x4f7fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4f7fe8:
    // 0x4f7fe8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4f7fec:
    if (ctx->pc == 0x4F7FECu) {
        ctx->pc = 0x4F7FECu;
            // 0x4f7fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F7FF0u;
        goto label_4f7ff0;
    }
    ctx->pc = 0x4F7FE8u;
    {
        const bool branch_taken_0x4f7fe8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4F7FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F7FE8u;
            // 0x4f7fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f7fe8) {
            ctx->pc = 0x4F8000u;
            goto label_4f8000;
        }
    }
    ctx->pc = 0x4F7FF0u;
label_4f7ff0:
    // 0x4f7ff0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4f7ff0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4f7ff4:
    // 0x4f7ff4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4f7ff8:
    if (ctx->pc == 0x4F7FF8u) {
        ctx->pc = 0x4F7FFCu;
        goto label_4f7ffc;
    }
    ctx->pc = 0x4F7FF4u;
    {
        const bool branch_taken_0x4f7ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f7ff4) {
            ctx->pc = 0x4F8000u;
            goto label_4f8000;
        }
    }
    ctx->pc = 0x4F7FFCu;
label_4f7ffc:
    // 0x4f7ffc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4f7ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4f8000:
    // 0x4f8000: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_4f8004:
    if (ctx->pc == 0x4F8004u) {
        ctx->pc = 0x4F8008u;
        goto label_4f8008;
    }
    ctx->pc = 0x4F8000u;
    {
        const bool branch_taken_0x4f8000 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f8000) {
            ctx->pc = 0x4F8020u;
            goto label_4f8020;
        }
    }
    ctx->pc = 0x4F8008u;
label_4f8008:
    // 0x4f8008: 0xc075eb4  jal         func_1D7AD0
label_4f800c:
    if (ctx->pc == 0x4F800Cu) {
        ctx->pc = 0x4F8010u;
        goto label_4f8010;
    }
    ctx->pc = 0x4F8008u;
    SET_GPR_U32(ctx, 31, 0x4F8010u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8010u; }
        if (ctx->pc != 0x4F8010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8010u; }
        if (ctx->pc != 0x4F8010u) { return; }
    }
    ctx->pc = 0x4F8010u;
label_4f8010:
    // 0x4f8010: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4f8014:
    if (ctx->pc == 0x4F8014u) {
        ctx->pc = 0x4F8018u;
        goto label_4f8018;
    }
    ctx->pc = 0x4F8010u;
    {
        const bool branch_taken_0x4f8010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f8010) {
            ctx->pc = 0x4F8020u;
            goto label_4f8020;
        }
    }
    ctx->pc = 0x4F8018u;
label_4f8018:
    // 0x4f8018: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f8018u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f801c:
    // 0x4f801c: 0x0  nop
    ctx->pc = 0x4f801cu;
    // NOP
label_4f8020:
    // 0x4f8020: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
label_4f8024:
    if (ctx->pc == 0x4F8024u) {
        ctx->pc = 0x4F8028u;
        goto label_4f8028;
    }
    ctx->pc = 0x4F8020u;
    {
        const bool branch_taken_0x4f8020 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f8020) {
            ctx->pc = 0x4F8040u;
            goto label_4f8040;
        }
    }
    ctx->pc = 0x4F8028u;
label_4f8028:
    // 0x4f8028: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x4f8028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4f802c:
    // 0x4f802c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4f802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4f8030:
    // 0x4f8030: 0x8c840e34  lw          $a0, 0xE34($a0)
    ctx->pc = 0x4f8030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4f8034:
    // 0x4f8034: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_4f8038:
    if (ctx->pc == 0x4F8038u) {
        ctx->pc = 0x4F8038u;
            // 0x4f8038: 0x8e63077c  lw          $v1, 0x77C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
        ctx->pc = 0x4F803Cu;
        goto label_4f803c;
    }
    ctx->pc = 0x4F8034u;
    {
        const bool branch_taken_0x4f8034 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f8034) {
            ctx->pc = 0x4F8038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8034u;
            // 0x4f8038: 0x8e63077c  lw          $v1, 0x77C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8058u;
            goto label_4f8058;
        }
    }
    ctx->pc = 0x4F803Cu;
label_4f803c:
    // 0x4f803c: 0x0  nop
    ctx->pc = 0x4f803cu;
    // NOP
label_4f8040:
    // 0x4f8040: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f8040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f8044:
    // 0x4f8044: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x4f8044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4f8048:
    // 0x4f8048: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4f8048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4f804c:
    // 0x4f804c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f8050:
    // 0x4f8050: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f8054:
    if (ctx->pc == 0x4F8054u) {
        ctx->pc = 0x4F8054u;
            // 0x4f8054: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x4F8058u;
        goto label_4f8058;
    }
    ctx->pc = 0x4F8050u;
    {
        const bool branch_taken_0x4f8050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8050u;
            // 0x4f8054: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8050) {
            ctx->pc = 0x4F8068u;
            goto label_4f8068;
        }
    }
    ctx->pc = 0x4F8058u;
label_4f8058:
    // 0x4f8058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4f8058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4f805c:
    // 0x4f805c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x4f805cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f8060:
    // 0x4f8060: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_4f8064:
    if (ctx->pc == 0x4F8064u) {
        ctx->pc = 0x4F8064u;
            // 0x4f8064: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x4F8068u;
        goto label_4f8068;
    }
    ctx->pc = 0x4F8060u;
    {
        const bool branch_taken_0x4f8060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F8064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8060u;
            // 0x4f8064: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8060) {
            ctx->pc = 0x4F7FDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f7fdc;
        }
    }
    ctx->pc = 0x4F8068u;
label_4f8068:
    // 0x4f8068: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_4f806c:
    if (ctx->pc == 0x4F806Cu) {
        ctx->pc = 0x4F806Cu;
            // 0x4f806c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F8070u;
        goto label_4f8070;
    }
    ctx->pc = 0x4F8068u;
    {
        const bool branch_taken_0x4f8068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F806Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8068u;
            // 0x4f806c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8068) {
            ctx->pc = 0x4F813Cu;
            goto label_4f813c;
        }
    }
    ctx->pc = 0x4F8070u;
label_4f8070:
    // 0x4f8070: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f8070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f8074:
    // 0x4f8074: 0x82040e3f  lb          $a0, 0xE3F($s0)
    ctx->pc = 0x4f8074u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3647)));
label_4f8078:
    // 0x4f8078: 0x80630e3f  lb          $v1, 0xE3F($v1)
    ctx->pc = 0x4f8078u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 3647)));
label_4f807c:
    // 0x4f807c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x4f807cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4f8080:
    // 0x4f8080: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_4f8084:
    if (ctx->pc == 0x4F8084u) {
        ctx->pc = 0x4F8084u;
            // 0x4f8084: 0x9247005a  lbu         $a3, 0x5A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
        ctx->pc = 0x4F8088u;
        goto label_4f8088;
    }
    ctx->pc = 0x4F8080u;
    {
        const bool branch_taken_0x4f8080 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4f8080) {
            ctx->pc = 0x4F8084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8080u;
            // 0x4f8084: 0x9247005a  lbu         $a3, 0x5A($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8098u;
            goto label_4f8098;
        }
    }
    ctx->pc = 0x4F8088u;
label_4f8088:
    // 0x4f8088: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x4f8088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_4f808c:
    // 0x4f808c: 0x3be3c  dsll32      $s7, $v1, 24
    ctx->pc = 0x4f808cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 24));
label_4f8090:
    // 0x4f8090: 0x17be3f  dsra32      $s7, $s7, 24
    ctx->pc = 0x4f8090u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 24));
label_4f8094:
    // 0x4f8094: 0x9247005a  lbu         $a3, 0x5A($s2)
    ctx->pc = 0x4f8094u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 90)));
label_4f8098:
    // 0x4f8098: 0x17363c  dsll32      $a2, $s7, 24
    ctx->pc = 0x4f8098u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) << (32 + 24));
label_4f809c:
    // 0x4f809c: 0x6363f  dsra32      $a2, $a2, 24
    ctx->pc = 0x4f809cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
label_4f80a0:
    // 0x4f80a0: 0x10c70026  beq         $a2, $a3, . + 4 + (0x26 << 2)
label_4f80a4:
    if (ctx->pc == 0x4F80A4u) {
        ctx->pc = 0x4F80A8u;
        goto label_4f80a8;
    }
    ctx->pc = 0x4F80A0u;
    {
        const bool branch_taken_0x4f80a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x4f80a0) {
            ctx->pc = 0x4F813Cu;
            goto label_4f813c;
        }
    }
    ctx->pc = 0x4F80A8u;
label_4f80a8:
    // 0x4f80a8: 0x3c0900af  lui         $t1, 0xAF
    ctx->pc = 0x4f80a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)175 << 16));
label_4f80ac:
    // 0x4f80ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4f80acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f80b0:
    // 0x4f80b0: 0x25290e80  addiu       $t1, $t1, 0xE80
    ctx->pc = 0x4f80b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3712));
label_4f80b4:
    // 0x4f80b4: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x4f80b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_4f80b8:
    // 0x4f80b8: 0x8ca30e34  lw          $v1, 0xE34($a1)
    ctx->pc = 0x4f80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
label_4f80bc:
    // 0x4f80bc: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
label_4f80c0:
    if (ctx->pc == 0x4F80C0u) {
        ctx->pc = 0x4F80C0u;
            // 0x4f80c0: 0x8e63077c  lw          $v1, 0x77C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
        ctx->pc = 0x4F80C4u;
        goto label_4f80c4;
    }
    ctx->pc = 0x4F80BCu;
    {
        const bool branch_taken_0x4f80bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f80bc) {
            ctx->pc = 0x4F80C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F80BCu;
            // 0x4f80c0: 0x8e63077c  lw          $v1, 0x77C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F80F0u;
            goto label_4f80f0;
        }
    }
    ctx->pc = 0x4F80C4u;
label_4f80c4:
    // 0x4f80c4: 0x8ca30d60  lw          $v1, 0xD60($a1)
    ctx->pc = 0x4f80c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3424)));
label_4f80c8:
    // 0x4f80c8: 0x8063009a  lb          $v1, 0x9A($v1)
    ctx->pc = 0x4f80c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 154)));
label_4f80cc:
    // 0x4f80cc: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
label_4f80d0:
    if (ctx->pc == 0x4F80D0u) {
        ctx->pc = 0x4F80D4u;
        goto label_4f80d4;
    }
    ctx->pc = 0x4F80CCu;
    {
        const bool branch_taken_0x4f80cc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f80cc) {
            ctx->pc = 0x4F80ECu;
            goto label_4f80ec;
        }
    }
    ctx->pc = 0x4F80D4u;
label_4f80d4:
    // 0x4f80d4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4f80d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4f80d8:
    // 0x4f80d8: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x4f80d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4f80dc:
    // 0x4f80dc: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4f80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4f80e0:
    // 0x4f80e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f80e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f80e4:
    // 0x4f80e4: 0x10000006  b           . + 4 + (0x6 << 2)
label_4f80e8:
    if (ctx->pc == 0x4F80E8u) {
        ctx->pc = 0x4F80E8u;
            // 0x4f80e8: 0x8c760000  lw          $s6, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x4F80ECu;
        goto label_4f80ec;
    }
    ctx->pc = 0x4F80E4u;
    {
        const bool branch_taken_0x4f80e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F80E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F80E4u;
            // 0x4f80e8: 0x8c760000  lw          $s6, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f80e4) {
            ctx->pc = 0x4F8100u;
            goto label_4f8100;
        }
    }
    ctx->pc = 0x4F80ECu;
label_4f80ec:
    // 0x4f80ec: 0x8e63077c  lw          $v1, 0x77C($s3)
    ctx->pc = 0x4f80ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1916)));
label_4f80f0:
    // 0x4f80f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4f80f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4f80f4:
    // 0x4f80f4: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x4f80f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4f80f8:
    // 0x4f80f8: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
label_4f80fc:
    if (ctx->pc == 0x4F80FCu) {
        ctx->pc = 0x4F80FCu;
            // 0x4f80fc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x4F8100u;
        goto label_4f8100;
    }
    ctx->pc = 0x4F80F8u;
    {
        const bool branch_taken_0x4f80f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F80FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F80F8u;
            // 0x4f80fc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f80f8) {
            ctx->pc = 0x4F80B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4f80b4;
        }
    }
    ctx->pc = 0x4F8100u;
label_4f8100:
    // 0x4f8100: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
label_4f8104:
    if (ctx->pc == 0x4F8104u) {
        ctx->pc = 0x4F8108u;
        goto label_4f8108;
    }
    ctx->pc = 0x4F8100u;
    {
        const bool branch_taken_0x4f8100 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8100) {
            ctx->pc = 0x4F813Cu;
            goto label_4f813c;
        }
    }
    ctx->pc = 0x4F8108u;
label_4f8108:
    // 0x4f8108: 0x8ec30d60  lw          $v1, 0xD60($s6)
    ctx->pc = 0x4f8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3424)));
label_4f810c:
    // 0x4f810c: 0xa067009a  sb          $a3, 0x9A($v1)
    ctx->pc = 0x4f810cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 154), (uint8_t)GPR_U32(ctx, 7));
label_4f8110:
    // 0x4f8110: 0xa257005a  sb          $s7, 0x5A($s2)
    ctx->pc = 0x4f8110u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 90), (uint8_t)GPR_U32(ctx, 23));
label_4f8114:
    // 0x4f8114: 0x8ec40d60  lw          $a0, 0xD60($s6)
    ctx->pc = 0x4f8114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3424)));
label_4f8118:
    // 0x4f8118: 0x8e430094  lw          $v1, 0x94($s2)
    ctx->pc = 0x4f8118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
label_4f811c:
    // 0x4f811c: 0x8c8600d4  lw          $a2, 0xD4($a0)
    ctx->pc = 0x4f811cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_4f8120:
    // 0x4f8120: 0x8c8500d8  lw          $a1, 0xD8($a0)
    ctx->pc = 0x4f8120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_4f8124:
    // 0x4f8124: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x4f8124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
label_4f8128:
    // 0x4f8128: 0x8ec30d60  lw          $v1, 0xD60($s6)
    ctx->pc = 0x4f8128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3424)));
label_4f812c:
    // 0x4f812c: 0x8e440098  lw          $a0, 0x98($s2)
    ctx->pc = 0x4f812cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_4f8130:
    // 0x4f8130: 0xac6400d8  sw          $a0, 0xD8($v1)
    ctx->pc = 0x4f8130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 216), GPR_U32(ctx, 4));
label_4f8134:
    // 0x4f8134: 0xae460094  sw          $a2, 0x94($s2)
    ctx->pc = 0x4f8134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 6));
label_4f8138:
    // 0x4f8138: 0xae450098  sw          $a1, 0x98($s2)
    ctx->pc = 0x4f8138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 5));
label_4f813c:
    // 0x4f813c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4f813cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4f8140:
    // 0x4f8140: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4f8140u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f8144:
    // 0x4f8144: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4f8144u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f8148:
    // 0x4f8148: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4f8148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f814c:
    // 0x4f814c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4f814cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f8150:
    // 0x4f8150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4f8150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f8154:
    // 0x4f8154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f8154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f8158:
    // 0x4f8158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4f8158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f815c:
    // 0x4f815c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4f815cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4f8160:
    // 0x4f8160: 0x3e00008  jr          $ra
label_4f8164:
    if (ctx->pc == 0x4F8164u) {
        ctx->pc = 0x4F8164u;
            // 0x4f8164: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4F8168u;
        goto label_4f8168;
    }
    ctx->pc = 0x4F8160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8160u;
            // 0x4f8164: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F8168u;
label_4f8168:
    // 0x4f8168: 0x0  nop
    ctx->pc = 0x4f8168u;
    // NOP
label_4f816c:
    // 0x4f816c: 0x0  nop
    ctx->pc = 0x4f816cu;
    // NOP
label_4f8170:
    // 0x4f8170: 0x3e00008  jr          $ra
label_4f8174:
    if (ctx->pc == 0x4F8174u) {
        ctx->pc = 0x4F8174u;
            // 0x4f8174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F8178u;
        goto label_4f8178;
    }
    ctx->pc = 0x4F8170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8170u;
            // 0x4f8174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F8178u;
label_4f8178:
    // 0x4f8178: 0x0  nop
    ctx->pc = 0x4f8178u;
    // NOP
label_4f817c:
    // 0x4f817c: 0x0  nop
    ctx->pc = 0x4f817cu;
    // NOP
label_4f8180:
    // 0x4f8180: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4f8180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4f8184:
    // 0x4f8184: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f8184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f8188:
    // 0x4f8188: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4f8188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4f818c:
    // 0x4f818c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4f818cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4f8190:
    // 0x4f8190: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4f8190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4f8194:
    // 0x4f8194: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f8194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4f8198:
    // 0x4f8198: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4f8198u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f819c:
    // 0x4f819c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f81a0:
    // 0x4f81a0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f81a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f81a4:
    // 0x4f81a4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f81a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f81a8:
    // 0x4f81a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f81a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f81ac:
    // 0x4f81ac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f81acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f81b0:
    // 0x4f81b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f81b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f81b4:
    // 0x4f81b4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4f81b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4f81b8:
    // 0x4f81b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f81b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f81bc:
    // 0x4f81bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4f81bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4f81c0:
    // 0x4f81c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f81c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f81c4:
    // 0x4f81c4: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x4f81c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4f81c8:
    // 0x4f81c8: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x4f81c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f81cc:
    // 0x4f81cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f81ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f81d0:
    // 0x4f81d0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4f81d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4f81d4:
    // 0x4f81d4: 0x26910c6c  addiu       $s1, $s4, 0xC6C
    ctx->pc = 0x4f81d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3180));
label_4f81d8:
    // 0x4f81d8: 0x96830c7e  lhu         $v1, 0xC7E($s4)
    ctx->pc = 0x4f81d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 3198)));
label_4f81dc:
    // 0x4f81dc: 0x8c93012c  lw          $s3, 0x12C($a0)
    ctx->pc = 0x4f81dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_4f81e0:
    // 0x4f81e0: 0x8e820da0  lw          $v0, 0xDA0($s4)
    ctx->pc = 0x4f81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
label_4f81e4:
    // 0x4f81e4: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x4f81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4f81e8:
    // 0x4f81e8: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x4f81e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f81ec:
    // 0x4f81ec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f81ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4f81f0:
    // 0x4f81f0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4f81f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4f81f4:
    // 0x4f81f4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4f81f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4f81f8:
    // 0x4f81f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f81f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f81fc:
    // 0x4f81fc: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x4f81fcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_4f8200:
    // 0x4f8200: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4f8200u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4f8204:
    // 0x4f8204: 0x1440034a  bnez        $v0, . + 4 + (0x34A << 2)
label_4f8208:
    if (ctx->pc == 0x4F8208u) {
        ctx->pc = 0x4F8208u;
            // 0x4f8208: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x4F820Cu;
        goto label_4f820c;
    }
    ctx->pc = 0x4F8204u;
    {
        const bool branch_taken_0x4f8204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F8208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8204u;
            // 0x4f8208: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8204) {
            ctx->pc = 0x4F8F30u;
            goto label_4f8f30;
        }
    }
    ctx->pc = 0x4F820Cu;
label_4f820c:
    // 0x4f820c: 0x8e830db0  lw          $v1, 0xDB0($s4)
    ctx->pc = 0x4f820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
label_4f8210:
    // 0x4f8210: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f8210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f8214:
    // 0x4f8214: 0x50620347  beql        $v1, $v0, . + 4 + (0x347 << 2)
label_4f8218:
    if (ctx->pc == 0x4F8218u) {
        ctx->pc = 0x4F8218u;
            // 0x4f8218: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F821Cu;
        goto label_4f821c;
    }
    ctx->pc = 0x4F8214u;
    {
        const bool branch_taken_0x4f8214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f8214) {
            ctx->pc = 0x4F8218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8214u;
            // 0x4f8218: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8F34u;
            goto label_4f8f34;
        }
    }
    ctx->pc = 0x4F821Cu;
label_4f821c:
    // 0x4f821c: 0xc4d50018  lwc1        $f21, 0x18($a2)
    ctx->pc = 0x4f821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4f8220:
    // 0x4f8220: 0xc6940de4  lwc1        $f20, 0xDE4($s4)
    ctx->pc = 0x4f8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f8224:
    // 0x4f8224: 0xc04cc1c  jal         func_133070
label_4f8228:
    if (ctx->pc == 0x4F8228u) {
        ctx->pc = 0x4F8228u;
            // 0x4f8228: 0x268502c0  addiu       $a1, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->pc = 0x4F822Cu;
        goto label_4f822c;
    }
    ctx->pc = 0x4F8224u;
    SET_GPR_U32(ctx, 31, 0x4F822Cu);
    ctx->pc = 0x4F8228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8224u;
            // 0x4f8228: 0x268502c0  addiu       $a1, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F822Cu; }
        if (ctx->pc != 0x4F822Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F822Cu; }
        if (ctx->pc != 0x4F822Cu) { return; }
    }
    ctx->pc = 0x4F822Cu;
label_4f822c:
    // 0x4f822c: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x4f822cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f8230:
    // 0x4f8230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f8230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f8234:
    // 0x4f8234: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x4f8234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_4f8238:
    // 0x4f8238: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f8238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f823c:
    // 0x4f823c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4f823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4f8240:
    // 0x4f8240: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x4f8240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4f8244:
    // 0x4f8244: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x4f8244u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4f8248:
    // 0x4f8248: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4f8248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4f824c:
    // 0x4f824c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f824cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f8250:
    // 0x4f8250: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f8250u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4f8254:
    // 0x4f8254: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4f8254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f8258:
    // 0x4f8258: 0xc0c5f94  jal         func_317E50
label_4f825c:
    if (ctx->pc == 0x4F825Cu) {
        ctx->pc = 0x4F825Cu;
            // 0x4f825c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4F8260u;
        goto label_4f8260;
    }
    ctx->pc = 0x4F8258u;
    SET_GPR_U32(ctx, 31, 0x4F8260u);
    ctx->pc = 0x4F825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8258u;
            // 0x4f825c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317E50u;
    if (runtime->hasFunction(0x317E50u)) {
        auto targetFn = runtime->lookupFunction(0x317E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8260u; }
        if (ctx->pc != 0x4F8260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317E50_0x317e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8260u; }
        if (ctx->pc != 0x4F8260u) { return; }
    }
    ctx->pc = 0x4F8260u;
label_4f8260:
    // 0x4f8260: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4f8260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4f8264:
    // 0x4f8264: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4f8264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4f8268:
    // 0x4f8268: 0xc04cc90  jal         func_133240
label_4f826c:
    if (ctx->pc == 0x4F826Cu) {
        ctx->pc = 0x4F826Cu;
            // 0x4f826c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F8270u;
        goto label_4f8270;
    }
    ctx->pc = 0x4F8268u;
    SET_GPR_U32(ctx, 31, 0x4F8270u);
    ctx->pc = 0x4F826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8268u;
            // 0x4f826c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8270u; }
        if (ctx->pc != 0x4F8270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8270u; }
        if (ctx->pc != 0x4F8270u) { return; }
    }
    ctx->pc = 0x4F8270u;
label_4f8270:
    // 0x4f8270: 0xc04cc2c  jal         func_1330B0
label_4f8274:
    if (ctx->pc == 0x4F8274u) {
        ctx->pc = 0x4F8274u;
            // 0x4f8274: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4F8278u;
        goto label_4f8278;
    }
    ctx->pc = 0x4F8270u;
    SET_GPR_U32(ctx, 31, 0x4F8278u);
    ctx->pc = 0x4F8274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8270u;
            // 0x4f8274: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8278u; }
        if (ctx->pc != 0x4F8278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8278u; }
        if (ctx->pc != 0x4F8278u) { return; }
    }
    ctx->pc = 0x4F8278u;
label_4f8278:
    // 0x4f8278: 0x0  nop
    ctx->pc = 0x4f8278u;
    // NOP
label_4f827c:
    // 0x4f827c: 0x0  nop
    ctx->pc = 0x4f827cu;
    // NOP
label_4f8280:
    // 0x4f8280: 0x46000044  c1          0x44
    ctx->pc = 0x4f8280u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_4f8284:
    // 0x4f8284: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4f8284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f8288:
    // 0x4f8288: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x4f8288u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_4f828c:
    // 0x4f828c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4f828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4f8290:
    // 0x4f8290: 0x8e440968  lw          $a0, 0x968($s2)
    ctx->pc = 0x4f8290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8294:
    // 0x4f8294: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f8298:
    // 0x4f8298: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4f8298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4f829c:
    // 0x4f829c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f829cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f82a0:
    // 0x4f82a0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4f82a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f82a4:
    // 0x4f82a4: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_4f82a8:
    if (ctx->pc == 0x4F82A8u) {
        ctx->pc = 0x4F82A8u;
            // 0x4f82a8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F82ACu;
        goto label_4f82ac;
    }
    ctx->pc = 0x4F82A4u;
    {
        const bool branch_taken_0x4f82a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F82A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F82A4u;
            // 0x4f82a8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f82a4) {
            ctx->pc = 0x4F82CCu;
            goto label_4f82cc;
        }
    }
    ctx->pc = 0x4F82ACu;
label_4f82ac:
    // 0x4f82ac: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4f82acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f82b0:
    // 0x4f82b0: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_4f82b4:
    if (ctx->pc == 0x4F82B4u) {
        ctx->pc = 0x4F82B4u;
            // 0x4f82b4: 0x3c02430c  lui         $v0, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
        ctx->pc = 0x4F82B8u;
        goto label_4f82b8;
    }
    ctx->pc = 0x4F82B0u;
    {
        const bool branch_taken_0x4f82b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f82b0) {
            ctx->pc = 0x4F82B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F82B0u;
            // 0x4f82b4: 0x3c02430c  lui         $v0, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F82C0u;
            goto label_4f82c0;
        }
    }
    ctx->pc = 0x4F82B8u;
label_4f82b8:
    // 0x4f82b8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f82bc:
    if (ctx->pc == 0x4F82BCu) {
        ctx->pc = 0x4F82BCu;
            // 0x4f82bc: 0x4601ad81  sub.s       $f22, $f21, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->pc = 0x4F82C0u;
        goto label_4f82c0;
    }
    ctx->pc = 0x4F82B8u;
    {
        const bool branch_taken_0x4f82b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F82B8u;
            // 0x4f82bc: 0x4601ad81  sub.s       $f22, $f21, $f1 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f82b8) {
            ctx->pc = 0x4F82E0u;
            goto label_4f82e0;
        }
    }
    ctx->pc = 0x4F82C0u;
label_4f82c0:
    // 0x4f82c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f82c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f82c4:
    // 0x4f82c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f82c8:
    if (ctx->pc == 0x4F82C8u) {
        ctx->pc = 0x4F82C8u;
            // 0x4f82c8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F82CCu;
        goto label_4f82cc;
    }
    ctx->pc = 0x4F82C4u;
    {
        const bool branch_taken_0x4f82c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F82C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F82C4u;
            // 0x4f82c8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f82c4) {
            ctx->pc = 0x4F82DCu;
            goto label_4f82dc;
        }
    }
    ctx->pc = 0x4F82CCu;
label_4f82cc:
    // 0x4f82cc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4f82ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4f82d0:
    // 0x4f82d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f82d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f82d4:
    // 0x4f82d4: 0x0  nop
    ctx->pc = 0x4f82d4u;
    // NOP
label_4f82d8:
    // 0x4f82d8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4f82d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f82dc:
    // 0x4f82dc: 0x4601ad81  sub.s       $f22, $f21, $f1
    ctx->pc = 0x4f82dcu;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_4f82e0:
    // 0x4f82e0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4f82e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f82e4:
    // 0x4f82e4: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x4f82e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f82e8:
    // 0x4f82e8: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
label_4f82ec:
    if (ctx->pc == 0x4F82ECu) {
        ctx->pc = 0x4F82ECu;
            // 0x4f82ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F82F0u;
        goto label_4f82f0;
    }
    ctx->pc = 0x4F82E8u;
    {
        const bool branch_taken_0x4f82e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F82ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F82E8u;
            // 0x4f82ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f82e8) {
            ctx->pc = 0x4F83D0u;
            goto label_4f83d0;
        }
    }
    ctx->pc = 0x4F82F0u;
label_4f82f0:
    // 0x4f82f0: 0xc049820  jal         func_126080
label_4f82f4:
    if (ctx->pc == 0x4F82F4u) {
        ctx->pc = 0x4F82F4u;
            // 0x4f82f4: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x4F82F8u;
        goto label_4f82f8;
    }
    ctx->pc = 0x4F82F0u;
    SET_GPR_U32(ctx, 31, 0x4F82F8u);
    ctx->pc = 0x4F82F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F82F0u;
            // 0x4f82f4: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F82F8u; }
        if (ctx->pc != 0x4F82F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F82F8u; }
        if (ctx->pc != 0x4F82F8u) { return; }
    }
    ctx->pc = 0x4F82F8u;
label_4f82f8:
    // 0x4f82f8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4f82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4f82fc:
    // 0x4f82fc: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x4f82fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_4f8300:
    // 0x4f8300: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x4f8300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4f8304:
    // 0x4f8304: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x4f8304u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_4f8308:
    // 0x4f8308: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x4f8308u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f830c:
    // 0x4f830c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x4f830cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4f8310:
    // 0x4f8310: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4f8310u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f8314:
    // 0x4f8314: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x4f8314u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4f8318:
    // 0x4f8318: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4f8318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4f831c:
    // 0x4f831c: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x4f831cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4f8320:
    // 0x4f8320: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4f8320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4f8324:
    // 0x4f8324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8328:
    // 0x4f8328: 0x1810  mfhi        $v1
    ctx->pc = 0x4f8328u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4f832c:
    // 0x4f832c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4f832cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_4f8330:
    // 0x4f8330: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f8330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f8334:
    // 0x4f8334: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x4f8334u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4f8338:
    // 0x4f8338: 0x2010  mfhi        $a0
    ctx->pc = 0x4f8338u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4f833c:
    // 0x4f833c: 0xa30019  multu       $a1, $v1
    ctx->pc = 0x4f833cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f8340:
    // 0x4f8340: 0x1810  mfhi        $v1
    ctx->pc = 0x4f8340u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4f8344:
    // 0x4f8344: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x4f8344u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4f8348:
    // 0x4f8348: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x4f8348u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_4f834c:
    // 0x4f834c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4f834cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f8350:
    // 0x4f8350: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f8350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f8354:
    // 0x4f8354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8358:
    // 0x4f8358: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f8358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f835c:
    // 0x4f835c: 0x1010  mfhi        $v0
    ctx->pc = 0x4f835cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4f8360:
    // 0x4f8360: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4f8360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4f8364:
    // 0x4f8364: 0x0  nop
    ctx->pc = 0x4f8364u;
    // NOP
label_4f8368:
    // 0x4f8368: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4f8368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f836c:
    // 0x4f836c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4f836cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4f8370:
    // 0x4f8370: 0x0  nop
    ctx->pc = 0x4f8370u;
    // NOP
label_4f8374:
    // 0x4f8374: 0x0  nop
    ctx->pc = 0x4f8374u;
    // NOP
label_4f8378:
    // 0x4f8378: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f8378u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f837c:
    // 0x4f837c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4f8380:
    if (ctx->pc == 0x4F8380u) {
        ctx->pc = 0x4F8380u;
            // 0x4f8380: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F8384u;
        goto label_4f8384;
    }
    ctx->pc = 0x4F837Cu;
    {
        const bool branch_taken_0x4f837c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f837c) {
            ctx->pc = 0x4F8380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F837Cu;
            // 0x4f8380: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8394u;
            goto label_4f8394;
        }
    }
    ctx->pc = 0x4F8384u;
label_4f8384:
    // 0x4f8384: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f8384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f8388:
    // 0x4f8388: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f8388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4f838c:
    // 0x4f838c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8390:
    if (ctx->pc == 0x4F8390u) {
        ctx->pc = 0x4F8390u;
            // 0x4f8390: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x4F8394u;
        goto label_4f8394;
    }
    ctx->pc = 0x4F838Cu;
    {
        const bool branch_taken_0x4f838c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F838Cu;
            // 0x4f8390: 0x8e02007c  lw          $v0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f838c) {
            ctx->pc = 0x4F83ACu;
            goto label_4f83ac;
        }
    }
    ctx->pc = 0x4F8394u;
label_4f8394:
    // 0x4f8394: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f8394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4f8398:
    // 0x4f8398: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f8398u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f839c:
    // 0x4f839c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f839cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4f83a0:
    // 0x4f83a0: 0x0  nop
    ctx->pc = 0x4f83a0u;
    // NOP
label_4f83a4:
    // 0x4f83a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f83a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f83a8:
    // 0x4f83a8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x4f83a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_4f83ac:
    // 0x4f83ac: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x4f83acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f83b0:
    // 0x4f83b0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x4f83b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4f83b4:
    // 0x4f83b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4f83b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f83b8:
    // 0x4f83b8: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x4f83b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4f83bc:
    // 0x4f83bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f83bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f83c0:
    // 0x4f83c0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4f83c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_4f83c4:
    // 0x4f83c4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f83c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4f83c8:
    // 0x4f83c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f83c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f83cc:
    // 0x4f83cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4f83ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4f83d0:
    // 0x4f83d0: 0x8e050084  lw          $a1, 0x84($s0)
    ctx->pc = 0x4f83d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f83d4:
    // 0x4f83d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4f83d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4f83d8:
    // 0x4f83d8: 0x50a2015d  beql        $a1, $v0, . + 4 + (0x15D << 2)
label_4f83dc:
    if (ctx->pc == 0x4F83DCu) {
        ctx->pc = 0x4F83DCu;
            // 0x4f83dc: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4F83E0u;
        goto label_4f83e0;
    }
    ctx->pc = 0x4F83D8u;
    {
        const bool branch_taken_0x4f83d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f83d8) {
            ctx->pc = 0x4F83DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F83D8u;
            // 0x4f83dc: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8950u;
            goto label_4f8950;
        }
    }
    ctx->pc = 0x4F83E0u;
label_4f83e0:
    // 0x4f83e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f83e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f83e4:
    // 0x4f83e4: 0x50a200b8  beql        $a1, $v0, . + 4 + (0xB8 << 2)
label_4f83e8:
    if (ctx->pc == 0x4F83E8u) {
        ctx->pc = 0x4F83E8u;
            // 0x4f83e8: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4F83ECu;
        goto label_4f83ec;
    }
    ctx->pc = 0x4F83E4u;
    {
        const bool branch_taken_0x4f83e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f83e4) {
            ctx->pc = 0x4F83E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F83E4u;
            // 0x4f83e8: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F86C8u;
            goto label_4f86c8;
        }
    }
    ctx->pc = 0x4F83ECu;
label_4f83ec:
    // 0x4f83ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4f83ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f83f0:
    // 0x4f83f0: 0x50a40013  beql        $a1, $a0, . + 4 + (0x13 << 2)
label_4f83f4:
    if (ctx->pc == 0x4F83F4u) {
        ctx->pc = 0x4F83F4u;
            // 0x4f83f4: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4F83F8u;
        goto label_4f83f8;
    }
    ctx->pc = 0x4F83F0u;
    {
        const bool branch_taken_0x4f83f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f83f0) {
            ctx->pc = 0x4F83F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F83F0u;
            // 0x4f83f4: 0x8e06005c  lw          $a2, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8440u;
            goto label_4f8440;
        }
    }
    ctx->pc = 0x4F83F8u;
label_4f83f8:
    // 0x4f83f8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4f83fc:
    if (ctx->pc == 0x4F83FCu) {
        ctx->pc = 0x4F8400u;
        goto label_4f8400;
    }
    ctx->pc = 0x4F83F8u;
    {
        const bool branch_taken_0x4f83f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f83f8) {
            ctx->pc = 0x4F8408u;
            goto label_4f8408;
        }
    }
    ctx->pc = 0x4F8400u;
label_4f8400:
    // 0x4f8400: 0x100001ed  b           . + 4 + (0x1ED << 2)
label_4f8404:
    if (ctx->pc == 0x4F8404u) {
        ctx->pc = 0x4F8404u;
            // 0x4f8404: 0x8e420968  lw          $v0, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4F8408u;
        goto label_4f8408;
    }
    ctx->pc = 0x4F8400u;
    {
        const bool branch_taken_0x4f8400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8400u;
            // 0x4f8404: 0x8e420968  lw          $v0, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8400) {
            ctx->pc = 0x4F8BB8u;
            goto label_4f8bb8;
        }
    }
    ctx->pc = 0x4F8408u;
label_4f8408:
    // 0x4f8408: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4f8408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4f840c:
    // 0x4f840c: 0xc074740  jal         func_1D1D00
label_4f8410:
    if (ctx->pc == 0x4F8410u) {
        ctx->pc = 0x4F8410u;
            // 0x4f8410: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x4F8414u;
        goto label_4f8414;
    }
    ctx->pc = 0x4F840Cu;
    SET_GPR_U32(ctx, 31, 0x4F8414u);
    ctx->pc = 0x4F8410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F840Cu;
            // 0x4f8410: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8414u; }
        if (ctx->pc != 0x4F8414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8414u; }
        if (ctx->pc != 0x4F8414u) { return; }
    }
    ctx->pc = 0x4F8414u;
label_4f8414:
    // 0x4f8414: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x4f8414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_4f8418:
    // 0x4f8418: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x4f8418u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4f841c:
    // 0x4f841c: 0xae040090  sw          $a0, 0x90($s0)
    ctx->pc = 0x4f841cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 4));
label_4f8420:
    // 0x4f8420: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4f8420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f8424:
    // 0x4f8424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f8424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f8428:
    // 0x4f8428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4f8428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f842c:
    // 0x4f842c: 0xae030090  sw          $v1, 0x90($s0)
    ctx->pc = 0x4f842cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 3));
label_4f8430:
    // 0x4f8430: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4f8430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4f8434:
    // 0x4f8434: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x4f8434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_4f8438:
    // 0x4f8438: 0x100001de  b           . + 4 + (0x1DE << 2)
label_4f843c:
    if (ctx->pc == 0x4F843Cu) {
        ctx->pc = 0x4F843Cu;
            // 0x4f843c: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x4F8440u;
        goto label_4f8440;
    }
    ctx->pc = 0x4F8438u;
    {
        const bool branch_taken_0x4f8438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8438u;
            // 0x4f843c: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8438) {
            ctx->pc = 0x4F8BB4u;
            goto label_4f8bb4;
        }
    }
    ctx->pc = 0x4F8440u;
label_4f8440:
    // 0x4f8440: 0x38c50005  xori        $a1, $a2, 0x5
    ctx->pc = 0x4f8440u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
label_4f8444:
    // 0x4f8444: 0x38c40006  xori        $a0, $a2, 0x6
    ctx->pc = 0x4f8444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)6);
label_4f8448:
    // 0x4f8448: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f8448u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f844c:
    // 0x4f844c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f844cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f8450:
    // 0x4f8450: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f8450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f8454:
    // 0x4f8454: 0x38c40009  xori        $a0, $a2, 0x9
    ctx->pc = 0x4f8454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
label_4f8458:
    // 0x4f8458: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f8458u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f845c:
    // 0x4f845c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4f845cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4f8460:
    // 0x4f8460: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_4f8464:
    if (ctx->pc == 0x4F8464u) {
        ctx->pc = 0x4F8464u;
            // 0x4f8464: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F8468u;
        goto label_4f8468;
    }
    ctx->pc = 0x4F8460u;
    {
        const bool branch_taken_0x4f8460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8460) {
            ctx->pc = 0x4F8464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8460u;
            // 0x4f8464: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F84D4u;
            goto label_4f84d4;
        }
    }
    ctx->pc = 0x4F8468u;
label_4f8468:
    // 0x4f8468: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4f8468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f846c:
    // 0x4f846c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f846cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f8470:
    // 0x4f8470: 0x9204005a  lbu         $a0, 0x5A($s0)
    ctx->pc = 0x4f8470u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8474:
    // 0x4f8474: 0x24a5d6b8  addiu       $a1, $a1, -0x2948
    ctx->pc = 0x4f8474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956728));
label_4f8478:
    // 0x4f8478: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x4f8478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f847c:
    // 0x4f847c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f847cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f8480:
    // 0x4f8480: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f8480u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f8484:
    // 0x4f8484: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4f8484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f8488:
    // 0x4f8488: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f8488u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f848c:
    // 0x4f848c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f848cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8490:
    // 0x4f8490: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f8490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8494:
    // 0x4f8494: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f8494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f8498:
    // 0x4f8498: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4f8498u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f849c:
    // 0x4f849c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f84a0:
    // 0x4f84a0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f84a4:
    if (ctx->pc == 0x4F84A4u) {
        ctx->pc = 0x4F84A4u;
            // 0x4f84a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F84A8u;
        goto label_4f84a8;
    }
    ctx->pc = 0x4F84A0u;
    {
        const bool branch_taken_0x4f84a0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f84a0) {
            ctx->pc = 0x4F84A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F84A0u;
            // 0x4f84a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F84B4u;
            goto label_4f84b4;
        }
    }
    ctx->pc = 0x4F84A8u;
label_4f84a8:
    // 0x4f84a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f84a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f84ac:
    // 0x4f84ac: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f84b0:
    if (ctx->pc == 0x4F84B0u) {
        ctx->pc = 0x4F84B0u;
            // 0x4f84b0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F84B4u;
        goto label_4f84b4;
    }
    ctx->pc = 0x4F84ACu;
    {
        const bool branch_taken_0x4f84ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F84B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F84ACu;
            // 0x4f84b0: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f84ac) {
            ctx->pc = 0x4F84CCu;
            goto label_4f84cc;
        }
    }
    ctx->pc = 0x4F84B4u;
label_4f84b4:
    // 0x4f84b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f84b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f84b8:
    // 0x4f84b8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f84b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f84bc:
    // 0x4f84bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f84bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f84c0:
    // 0x4f84c0: 0x0  nop
    ctx->pc = 0x4f84c0u;
    // NOP
label_4f84c4:
    // 0x4f84c4: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f84c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f84c8:
    // 0x4f84c8: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f84c8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f84cc:
    // 0x4f84cc: 0x10000068  b           . + 4 + (0x68 << 2)
label_4f84d0:
    if (ctx->pc == 0x4F84D0u) {
        ctx->pc = 0x4F84D0u;
            // 0x4f84d0: 0x96040106  lhu         $a0, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->pc = 0x4F84D4u;
        goto label_4f84d4;
    }
    ctx->pc = 0x4F84CCu;
    {
        const bool branch_taken_0x4f84cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F84D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F84CCu;
            // 0x4f84d0: 0x96040106  lhu         $a0, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f84cc) {
            ctx->pc = 0x4F8670u;
            goto label_4f8670;
        }
    }
    ctx->pc = 0x4F84D4u;
label_4f84d4:
    // 0x4f84d4: 0x54c4003a  bnel        $a2, $a0, . + 4 + (0x3A << 2)
label_4f84d8:
    if (ctx->pc == 0x4F84D8u) {
        ctx->pc = 0x4F84D8u;
            // 0x4f84d8: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x4F84DCu;
        goto label_4f84dc;
    }
    ctx->pc = 0x4F84D4u;
    {
        const bool branch_taken_0x4f84d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f84d4) {
            ctx->pc = 0x4F84D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F84D4u;
            // 0x4f84d8: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F85C0u;
            goto label_4f85c0;
        }
    }
    ctx->pc = 0x4F84DCu;
label_4f84dc:
    // 0x4f84dc: 0x92440ce4  lbu         $a0, 0xCE4($s2)
    ctx->pc = 0x4f84dcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_4f84e0:
    // 0x4f84e0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f84e4:
    // 0x4f84e4: 0x5082001c  beql        $a0, $v0, . + 4 + (0x1C << 2)
label_4f84e8:
    if (ctx->pc == 0x4F84E8u) {
        ctx->pc = 0x4F84E8u;
            // 0x4f84e8: 0x8e470968  lw          $a3, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4F84ECu;
        goto label_4f84ec;
    }
    ctx->pc = 0x4F84E4u;
    {
        const bool branch_taken_0x4f84e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f84e4) {
            ctx->pc = 0x4F84E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F84E4u;
            // 0x4f84e8: 0x8e470968  lw          $a3, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8558u;
            goto label_4f8558;
        }
    }
    ctx->pc = 0x4F84ECu;
label_4f84ec:
    // 0x4f84ec: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4f84ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f84f0:
    // 0x4f84f0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f84f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f84f4:
    // 0x4f84f4: 0x9204005a  lbu         $a0, 0x5A($s0)
    ctx->pc = 0x4f84f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f84f8:
    // 0x4f84f8: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x4f84f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
label_4f84fc:
    // 0x4f84fc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x4f84fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f8500:
    // 0x4f8500: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f8500u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f8504:
    // 0x4f8504: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f8504u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f8508:
    // 0x4f8508: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4f8508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f850c:
    // 0x4f850c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f850cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8510:
    // 0x4f8510: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f8510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8514:
    // 0x4f8514: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f8514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8518:
    // 0x4f8518: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f8518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f851c:
    // 0x4f851c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4f851cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f8520:
    // 0x4f8520: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8524:
    // 0x4f8524: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8528:
    if (ctx->pc == 0x4F8528u) {
        ctx->pc = 0x4F8528u;
            // 0x4f8528: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F852Cu;
        goto label_4f852c;
    }
    ctx->pc = 0x4F8524u;
    {
        const bool branch_taken_0x4f8524 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8524) {
            ctx->pc = 0x4F8528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8524u;
            // 0x4f8528: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8538u;
            goto label_4f8538;
        }
    }
    ctx->pc = 0x4F852Cu;
label_4f852c:
    // 0x4f852c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f852cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8530:
    // 0x4f8530: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8534:
    if (ctx->pc == 0x4F8534u) {
        ctx->pc = 0x4F8534u;
            // 0x4f8534: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8538u;
        goto label_4f8538;
    }
    ctx->pc = 0x4F8530u;
    {
        const bool branch_taken_0x4f8530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8530u;
            // 0x4f8534: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8530) {
            ctx->pc = 0x4F8550u;
            goto label_4f8550;
        }
    }
    ctx->pc = 0x4F8538u;
label_4f8538:
    // 0x4f8538: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f853c:
    // 0x4f853c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f853cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8540:
    // 0x4f8540: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8540u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8544:
    // 0x4f8544: 0x0  nop
    ctx->pc = 0x4f8544u;
    // NOP
label_4f8548:
    // 0x4f8548: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f854c:
    // 0x4f854c: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f854cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8550:
    // 0x4f8550: 0x10000046  b           . + 4 + (0x46 << 2)
label_4f8554:
    if (ctx->pc == 0x4F8554u) {
        ctx->pc = 0x4F8558u;
        goto label_4f8558;
    }
    ctx->pc = 0x4F8550u;
    {
        const bool branch_taken_0x4f8550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8550) {
            ctx->pc = 0x4F866Cu;
            goto label_4f866c;
        }
    }
    ctx->pc = 0x4F8558u;
label_4f8558:
    // 0x4f8558: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f8558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f855c:
    // 0x4f855c: 0x9204005a  lbu         $a0, 0x5A($s0)
    ctx->pc = 0x4f855cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8560:
    // 0x4f8560: 0x24a5e1f8  addiu       $a1, $a1, -0x1E08
    ctx->pc = 0x4f8560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959608));
label_4f8564:
    // 0x4f8564: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x4f8564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f8568:
    // 0x4f8568: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f8568u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f856c:
    // 0x4f856c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f856cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f8570:
    // 0x4f8570: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4f8570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f8574:
    // 0x4f8574: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f8574u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8578:
    // 0x4f8578: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f8578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f857c:
    // 0x4f857c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f857cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8580:
    // 0x4f8580: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f8580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f8584:
    // 0x4f8584: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4f8584u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f8588:
    // 0x4f8588: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f858c:
    // 0x4f858c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8590:
    if (ctx->pc == 0x4F8590u) {
        ctx->pc = 0x4F8590u;
            // 0x4f8590: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8594u;
        goto label_4f8594;
    }
    ctx->pc = 0x4F858Cu;
    {
        const bool branch_taken_0x4f858c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f858c) {
            ctx->pc = 0x4F8590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F858Cu;
            // 0x4f8590: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F85A0u;
            goto label_4f85a0;
        }
    }
    ctx->pc = 0x4F8594u;
label_4f8594:
    // 0x4f8594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8598:
    // 0x4f8598: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f859c:
    if (ctx->pc == 0x4F859Cu) {
        ctx->pc = 0x4F859Cu;
            // 0x4f859c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F85A0u;
        goto label_4f85a0;
    }
    ctx->pc = 0x4F8598u;
    {
        const bool branch_taken_0x4f8598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8598u;
            // 0x4f859c: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8598) {
            ctx->pc = 0x4F85B8u;
            goto label_4f85b8;
        }
    }
    ctx->pc = 0x4F85A0u;
label_4f85a0:
    // 0x4f85a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f85a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f85a4:
    // 0x4f85a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f85a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f85a8:
    // 0x4f85a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f85a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f85ac:
    // 0x4f85ac: 0x0  nop
    ctx->pc = 0x4f85acu;
    // NOP
label_4f85b0:
    // 0x4f85b0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f85b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f85b4:
    // 0x4f85b4: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f85b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f85b8:
    // 0x4f85b8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4f85bc:
    if (ctx->pc == 0x4F85BCu) {
        ctx->pc = 0x4F85C0u;
        goto label_4f85c0;
    }
    ctx->pc = 0x4F85B8u;
    {
        const bool branch_taken_0x4f85b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f85b8) {
            ctx->pc = 0x4F866Cu;
            goto label_4f866c;
        }
    }
    ctx->pc = 0x4F85C0u;
label_4f85c0:
    // 0x4f85c0: 0x5482001c  bnel        $a0, $v0, . + 4 + (0x1C << 2)
label_4f85c4:
    if (ctx->pc == 0x4F85C4u) {
        ctx->pc = 0x4F85C4u;
            // 0x4f85c4: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x4F85C8u;
        goto label_4f85c8;
    }
    ctx->pc = 0x4F85C0u;
    {
        const bool branch_taken_0x4f85c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f85c0) {
            ctx->pc = 0x4F85C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F85C0u;
            // 0x4f85c4: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8634u;
            goto label_4f8634;
        }
    }
    ctx->pc = 0x4F85C8u;
label_4f85c8:
    // 0x4f85c8: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4f85c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f85cc:
    // 0x4f85cc: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f85ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f85d0:
    // 0x4f85d0: 0x9204005a  lbu         $a0, 0x5A($s0)
    ctx->pc = 0x4f85d0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f85d4:
    // 0x4f85d4: 0x24a5da78  addiu       $a1, $a1, -0x2588
    ctx->pc = 0x4f85d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
label_4f85d8:
    // 0x4f85d8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x4f85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f85dc:
    // 0x4f85dc: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f85dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f85e0:
    // 0x4f85e0: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f85e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f85e4:
    // 0x4f85e4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4f85e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f85e8:
    // 0x4f85e8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f85e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f85ec:
    // 0x4f85ec: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f85f0:
    // 0x4f85f0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f85f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f85f4:
    // 0x4f85f4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f85f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f85f8:
    // 0x4f85f8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4f85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f85fc:
    // 0x4f85fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f85fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8600:
    // 0x4f8600: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8604:
    if (ctx->pc == 0x4F8604u) {
        ctx->pc = 0x4F8604u;
            // 0x4f8604: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8608u;
        goto label_4f8608;
    }
    ctx->pc = 0x4F8600u;
    {
        const bool branch_taken_0x4f8600 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8600) {
            ctx->pc = 0x4F8604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8600u;
            // 0x4f8604: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8614u;
            goto label_4f8614;
        }
    }
    ctx->pc = 0x4F8608u;
label_4f8608:
    // 0x4f8608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f860c:
    // 0x4f860c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8610:
    if (ctx->pc == 0x4F8610u) {
        ctx->pc = 0x4F8610u;
            // 0x4f8610: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8614u;
        goto label_4f8614;
    }
    ctx->pc = 0x4F860Cu;
    {
        const bool branch_taken_0x4f860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F860Cu;
            // 0x4f8610: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f860c) {
            ctx->pc = 0x4F862Cu;
            goto label_4f862c;
        }
    }
    ctx->pc = 0x4F8614u;
label_4f8614:
    // 0x4f8614: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8618:
    // 0x4f8618: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f861c:
    // 0x4f861c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f861cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8620:
    // 0x4f8620: 0x0  nop
    ctx->pc = 0x4f8620u;
    // NOP
label_4f8624:
    // 0x4f8624: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8628:
    // 0x4f8628: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8628u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f862c:
    // 0x4f862c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4f8630:
    if (ctx->pc == 0x4F8630u) {
        ctx->pc = 0x4F8634u;
        goto label_4f8634;
    }
    ctx->pc = 0x4F862Cu;
    {
        const bool branch_taken_0x4f862c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f862c) {
            ctx->pc = 0x4F866Cu;
            goto label_4f866c;
        }
    }
    ctx->pc = 0x4F8634u;
label_4f8634:
    // 0x4f8634: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x4f8634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f8638:
    // 0x4f8638: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x4f8638u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f863c:
    // 0x4f863c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f863cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8640:
    // 0x4f8640: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8644:
    if (ctx->pc == 0x4F8644u) {
        ctx->pc = 0x4F8644u;
            // 0x4f8644: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8648u;
        goto label_4f8648;
    }
    ctx->pc = 0x4F8640u;
    {
        const bool branch_taken_0x4f8640 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8640) {
            ctx->pc = 0x4F8644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8640u;
            // 0x4f8644: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8654u;
            goto label_4f8654;
        }
    }
    ctx->pc = 0x4F8648u;
label_4f8648:
    // 0x4f8648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f864c:
    // 0x4f864c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8650:
    if (ctx->pc == 0x4F8650u) {
        ctx->pc = 0x4F8650u;
            // 0x4f8650: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8654u;
        goto label_4f8654;
    }
    ctx->pc = 0x4F864Cu;
    {
        const bool branch_taken_0x4f864c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F864Cu;
            // 0x4f8650: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f864c) {
            ctx->pc = 0x4F866Cu;
            goto label_4f866c;
        }
    }
    ctx->pc = 0x4F8654u;
label_4f8654:
    // 0x4f8654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8658:
    // 0x4f8658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f865c:
    // 0x4f865c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f865cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8660:
    // 0x4f8660: 0x0  nop
    ctx->pc = 0x4f8660u;
    // NOP
label_4f8664:
    // 0x4f8664: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8668:
    // 0x4f8668: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8668u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f866c:
    // 0x4f866c: 0x96040106  lhu         $a0, 0x106($s0)
    ctx->pc = 0x4f866cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
label_4f8670:
    // 0x4f8670: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4f8670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4f8674:
    // 0x4f8674: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x4f8674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4f8678:
    // 0x4f8678: 0x92050104  lbu         $a1, 0x104($s0)
    ctx->pc = 0x4f8678u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 260)));
label_4f867c:
    // 0x4f867c: 0x92060105  lbu         $a2, 0x105($s0)
    ctx->pc = 0x4f867cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 261)));
label_4f8680:
    // 0x4f8680: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x4f8680u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f8684:
    // 0x4f8684: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x4f8684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4f8688:
    // 0x4f8688: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x4f8688u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f868c:
    // 0x4f868c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x4f868cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_4f8690:
    // 0x4f8690: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4f8690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f8694:
    // 0x4f8694: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x4f8694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4f8698:
    // 0x4f8698: 0x1010  mfhi        $v0
    ctx->pc = 0x4f8698u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4f869c:
    // 0x4f869c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x4f869cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_4f86a0:
    // 0x4f86a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f86a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f86a4:
    // 0x4f86a4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4f86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f86a8:
    // 0x4f86a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f86ac:
    // 0x4f86ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f86acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f86b0:
    // 0x4f86b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f86b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f86b4:
    // 0x4f86b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f86b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f86b8:
    // 0x4f86b8: 0x0  nop
    ctx->pc = 0x4f86b8u;
    // NOP
label_4f86bc:
    // 0x4f86bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f86bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4f86c0:
    // 0x4f86c0: 0x1000013c  b           . + 4 + (0x13C << 2)
label_4f86c4:
    if (ctx->pc == 0x4F86C4u) {
        ctx->pc = 0x4F86C4u;
            // 0x4f86c4: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x4F86C8u;
        goto label_4f86c8;
    }
    ctx->pc = 0x4F86C0u;
    {
        const bool branch_taken_0x4f86c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F86C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F86C0u;
            // 0x4f86c4: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f86c0) {
            ctx->pc = 0x4F8BB4u;
            goto label_4f8bb4;
        }
    }
    ctx->pc = 0x4F86C8u;
label_4f86c8:
    // 0x4f86c8: 0x38c50005  xori        $a1, $a2, 0x5
    ctx->pc = 0x4f86c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
label_4f86cc:
    // 0x4f86cc: 0x38c40006  xori        $a0, $a2, 0x6
    ctx->pc = 0x4f86ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)6);
label_4f86d0:
    // 0x4f86d0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f86d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f86d4:
    // 0x4f86d4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f86d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f86d8:
    // 0x4f86d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f86d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f86dc:
    // 0x4f86dc: 0x38c40009  xori        $a0, $a2, 0x9
    ctx->pc = 0x4f86dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)9);
label_4f86e0:
    // 0x4f86e0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f86e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f86e4:
    // 0x4f86e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4f86e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4f86e8:
    // 0x4f86e8: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
label_4f86ec:
    if (ctx->pc == 0x4F86ECu) {
        ctx->pc = 0x4F86ECu;
            // 0x4f86ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F86F0u;
        goto label_4f86f0;
    }
    ctx->pc = 0x4F86E8u;
    {
        const bool branch_taken_0x4f86e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f86e8) {
            ctx->pc = 0x4F86ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F86E8u;
            // 0x4f86ec: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F875Cu;
            goto label_4f875c;
        }
    }
    ctx->pc = 0x4F86F0u;
label_4f86f0:
    // 0x4f86f0: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4f86f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f86f4:
    // 0x4f86f4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f86f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f86f8:
    // 0x4f86f8: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f86f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f86fc:
    // 0x4f86fc: 0x24a5d6b8  addiu       $a1, $a1, -0x2948
    ctx->pc = 0x4f86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956728));
label_4f8700:
    // 0x4f8700: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x4f8700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f8704:
    // 0x4f8704: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f8704u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f8708:
    // 0x4f8708: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f8708u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f870c:
    // 0x4f870c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f870cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8710:
    // 0x4f8710: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f8710u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8714:
    // 0x4f8714: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f8714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8718:
    // 0x4f8718: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f8718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f871c:
    // 0x4f871c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f8720:
    // 0x4f8720: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4f8720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f8724:
    // 0x4f8724: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8728:
    // 0x4f8728: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f872c:
    if (ctx->pc == 0x4F872Cu) {
        ctx->pc = 0x4F872Cu;
            // 0x4f872c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8730u;
        goto label_4f8730;
    }
    ctx->pc = 0x4F8728u;
    {
        const bool branch_taken_0x4f8728 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8728) {
            ctx->pc = 0x4F872Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8728u;
            // 0x4f872c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F873Cu;
            goto label_4f873c;
        }
    }
    ctx->pc = 0x4F8730u;
label_4f8730:
    // 0x4f8730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8734:
    // 0x4f8734: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8738:
    if (ctx->pc == 0x4F8738u) {
        ctx->pc = 0x4F8738u;
            // 0x4f8738: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F873Cu;
        goto label_4f873c;
    }
    ctx->pc = 0x4F8734u;
    {
        const bool branch_taken_0x4f8734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8734u;
            // 0x4f8738: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8734) {
            ctx->pc = 0x4F8754u;
            goto label_4f8754;
        }
    }
    ctx->pc = 0x4F873Cu;
label_4f873c:
    // 0x4f873c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f873cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8740:
    // 0x4f8740: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8744:
    // 0x4f8744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8748:
    // 0x4f8748: 0x0  nop
    ctx->pc = 0x4f8748u;
    // NOP
label_4f874c:
    // 0x4f874c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f874cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8750:
    // 0x4f8750: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8750u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8754:
    // 0x4f8754: 0x10000068  b           . + 4 + (0x68 << 2)
label_4f8758:
    if (ctx->pc == 0x4F8758u) {
        ctx->pc = 0x4F8758u;
            // 0x4f8758: 0x96040106  lhu         $a0, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->pc = 0x4F875Cu;
        goto label_4f875c;
    }
    ctx->pc = 0x4F8754u;
    {
        const bool branch_taken_0x4f8754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8754u;
            // 0x4f8758: 0x96040106  lhu         $a0, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8754) {
            ctx->pc = 0x4F88F8u;
            goto label_4f88f8;
        }
    }
    ctx->pc = 0x4F875Cu;
label_4f875c:
    // 0x4f875c: 0x54c4003a  bnel        $a2, $a0, . + 4 + (0x3A << 2)
label_4f8760:
    if (ctx->pc == 0x4F8760u) {
        ctx->pc = 0x4F8760u;
            // 0x4f8760: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x4F8764u;
        goto label_4f8764;
    }
    ctx->pc = 0x4F875Cu;
    {
        const bool branch_taken_0x4f875c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f875c) {
            ctx->pc = 0x4F8760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F875Cu;
            // 0x4f8760: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8848u;
            goto label_4f8848;
        }
    }
    ctx->pc = 0x4F8764u;
label_4f8764:
    // 0x4f8764: 0x92440ce4  lbu         $a0, 0xCE4($s2)
    ctx->pc = 0x4f8764u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_4f8768:
    // 0x4f8768: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f8768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f876c:
    // 0x4f876c: 0x5082001c  beql        $a0, $v0, . + 4 + (0x1C << 2)
label_4f8770:
    if (ctx->pc == 0x4F8770u) {
        ctx->pc = 0x4F8770u;
            // 0x4f8770: 0x8e470968  lw          $a3, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4F8774u;
        goto label_4f8774;
    }
    ctx->pc = 0x4F876Cu;
    {
        const bool branch_taken_0x4f876c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f876c) {
            ctx->pc = 0x4F8770u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F876Cu;
            // 0x4f8770: 0x8e470968  lw          $a3, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F87E0u;
            goto label_4f87e0;
        }
    }
    ctx->pc = 0x4F8774u;
label_4f8774:
    // 0x4f8774: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4f8774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8778:
    // 0x4f8778: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f8778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f877c:
    // 0x4f877c: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f877cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8780:
    // 0x4f8780: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x4f8780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
label_4f8784:
    // 0x4f8784: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x4f8784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f8788:
    // 0x4f8788: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f8788u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f878c:
    // 0x4f878c: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f878cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f8790:
    // 0x4f8790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8794:
    // 0x4f8794: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f8794u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8798:
    // 0x4f8798: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f8798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f879c:
    // 0x4f879c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f87a0:
    // 0x4f87a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f87a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f87a4:
    // 0x4f87a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4f87a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f87a8:
    // 0x4f87a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f87ac:
    // 0x4f87ac: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f87b0:
    if (ctx->pc == 0x4F87B0u) {
        ctx->pc = 0x4F87B0u;
            // 0x4f87b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F87B4u;
        goto label_4f87b4;
    }
    ctx->pc = 0x4F87ACu;
    {
        const bool branch_taken_0x4f87ac = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f87ac) {
            ctx->pc = 0x4F87B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F87ACu;
            // 0x4f87b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F87C0u;
            goto label_4f87c0;
        }
    }
    ctx->pc = 0x4F87B4u;
label_4f87b4:
    // 0x4f87b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f87b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f87b8:
    // 0x4f87b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f87bc:
    if (ctx->pc == 0x4F87BCu) {
        ctx->pc = 0x4F87BCu;
            // 0x4f87bc: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F87C0u;
        goto label_4f87c0;
    }
    ctx->pc = 0x4F87B8u;
    {
        const bool branch_taken_0x4f87b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F87BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F87B8u;
            // 0x4f87bc: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f87b8) {
            ctx->pc = 0x4F87D8u;
            goto label_4f87d8;
        }
    }
    ctx->pc = 0x4F87C0u;
label_4f87c0:
    // 0x4f87c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f87c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f87c4:
    // 0x4f87c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f87c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f87c8:
    // 0x4f87c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f87c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f87cc:
    // 0x4f87cc: 0x0  nop
    ctx->pc = 0x4f87ccu;
    // NOP
label_4f87d0:
    // 0x4f87d0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f87d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f87d4:
    // 0x4f87d4: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f87d4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f87d8:
    // 0x4f87d8: 0x10000046  b           . + 4 + (0x46 << 2)
label_4f87dc:
    if (ctx->pc == 0x4F87DCu) {
        ctx->pc = 0x4F87E0u;
        goto label_4f87e0;
    }
    ctx->pc = 0x4F87D8u;
    {
        const bool branch_taken_0x4f87d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f87d8) {
            ctx->pc = 0x4F88F4u;
            goto label_4f88f4;
        }
    }
    ctx->pc = 0x4F87E0u;
label_4f87e0:
    // 0x4f87e0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f87e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f87e4:
    // 0x4f87e4: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f87e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f87e8:
    // 0x4f87e8: 0x24a5e1f8  addiu       $a1, $a1, -0x1E08
    ctx->pc = 0x4f87e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959608));
label_4f87ec:
    // 0x4f87ec: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x4f87ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f87f0:
    // 0x4f87f0: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f87f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f87f4:
    // 0x4f87f4: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f87f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f87f8:
    // 0x4f87f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f87fc:
    // 0x4f87fc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f87fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8800:
    // 0x4f8800: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f8800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8804:
    // 0x4f8804: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f8808:
    // 0x4f8808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f8808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f880c:
    // 0x4f880c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4f880cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f8810:
    // 0x4f8810: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8814:
    // 0x4f8814: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8818:
    if (ctx->pc == 0x4F8818u) {
        ctx->pc = 0x4F8818u;
            // 0x4f8818: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F881Cu;
        goto label_4f881c;
    }
    ctx->pc = 0x4F8814u;
    {
        const bool branch_taken_0x4f8814 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8814) {
            ctx->pc = 0x4F8818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8814u;
            // 0x4f8818: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8828u;
            goto label_4f8828;
        }
    }
    ctx->pc = 0x4F881Cu;
label_4f881c:
    // 0x4f881c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f881cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8820:
    // 0x4f8820: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8824:
    if (ctx->pc == 0x4F8824u) {
        ctx->pc = 0x4F8824u;
            // 0x4f8824: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8828u;
        goto label_4f8828;
    }
    ctx->pc = 0x4F8820u;
    {
        const bool branch_taken_0x4f8820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8820u;
            // 0x4f8824: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8820) {
            ctx->pc = 0x4F8840u;
            goto label_4f8840;
        }
    }
    ctx->pc = 0x4F8828u;
label_4f8828:
    // 0x4f8828: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f882c:
    // 0x4f882c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f882cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8830:
    // 0x4f8830: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8830u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8834:
    // 0x4f8834: 0x0  nop
    ctx->pc = 0x4f8834u;
    // NOP
label_4f8838:
    // 0x4f8838: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f883c:
    // 0x4f883c: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f883cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8840:
    // 0x4f8840: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4f8844:
    if (ctx->pc == 0x4F8844u) {
        ctx->pc = 0x4F8848u;
        goto label_4f8848;
    }
    ctx->pc = 0x4F8840u;
    {
        const bool branch_taken_0x4f8840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8840) {
            ctx->pc = 0x4F88F4u;
            goto label_4f88f4;
        }
    }
    ctx->pc = 0x4F8848u;
label_4f8848:
    // 0x4f8848: 0x5482001c  bnel        $a0, $v0, . + 4 + (0x1C << 2)
label_4f884c:
    if (ctx->pc == 0x4F884Cu) {
        ctx->pc = 0x4F884Cu;
            // 0x4f884c: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x4F8850u;
        goto label_4f8850;
    }
    ctx->pc = 0x4F8848u;
    {
        const bool branch_taken_0x4f8848 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f8848) {
            ctx->pc = 0x4F884Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8848u;
            // 0x4f884c: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F88BCu;
            goto label_4f88bc;
        }
    }
    ctx->pc = 0x4F8850u;
label_4f8850:
    // 0x4f8850: 0x8e470968  lw          $a3, 0x968($s2)
    ctx->pc = 0x4f8850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8854:
    // 0x4f8854: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f8854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f8858:
    // 0x4f8858: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f8858u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f885c:
    // 0x4f885c: 0x24a5da78  addiu       $a1, $a1, -0x2588
    ctx->pc = 0x4f885cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
label_4f8860:
    // 0x4f8860: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x4f8860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f8864:
    // 0x4f8864: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x4f8864u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_4f8868:
    // 0x4f8868: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f8868u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f886c:
    // 0x4f886c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f886cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8870:
    // 0x4f8870: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f8870u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8874:
    // 0x4f8874: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f8874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8878:
    // 0x4f8878: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4f8878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4f887c:
    // 0x4f887c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f887cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f8880:
    // 0x4f8880: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4f8880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f8884:
    // 0x4f8884: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8888:
    // 0x4f8888: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f888c:
    if (ctx->pc == 0x4F888Cu) {
        ctx->pc = 0x4F888Cu;
            // 0x4f888c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8890u;
        goto label_4f8890;
    }
    ctx->pc = 0x4F8888u;
    {
        const bool branch_taken_0x4f8888 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8888) {
            ctx->pc = 0x4F888Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8888u;
            // 0x4f888c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F889Cu;
            goto label_4f889c;
        }
    }
    ctx->pc = 0x4F8890u;
label_4f8890:
    // 0x4f8890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8894:
    // 0x4f8894: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8898:
    if (ctx->pc == 0x4F8898u) {
        ctx->pc = 0x4F8898u;
            // 0x4f8898: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F889Cu;
        goto label_4f889c;
    }
    ctx->pc = 0x4F8894u;
    {
        const bool branch_taken_0x4f8894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8894u;
            // 0x4f8898: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8894) {
            ctx->pc = 0x4F88B4u;
            goto label_4f88b4;
        }
    }
    ctx->pc = 0x4F889Cu;
label_4f889c:
    // 0x4f889c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f88a0:
    // 0x4f88a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f88a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f88a4:
    // 0x4f88a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f88a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f88a8:
    // 0x4f88a8: 0x0  nop
    ctx->pc = 0x4f88a8u;
    // NOP
label_4f88ac:
    // 0x4f88ac: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f88acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f88b0:
    // 0x4f88b0: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f88b0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f88b4:
    // 0x4f88b4: 0x1000000f  b           . + 4 + (0xF << 2)
label_4f88b8:
    if (ctx->pc == 0x4F88B8u) {
        ctx->pc = 0x4F88BCu;
        goto label_4f88bc;
    }
    ctx->pc = 0x4F88B4u;
    {
        const bool branch_taken_0x4f88b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f88b4) {
            ctx->pc = 0x4F88F4u;
            goto label_4f88f4;
        }
    }
    ctx->pc = 0x4F88BCu;
label_4f88bc:
    // 0x4f88bc: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x4f88bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_4f88c0:
    // 0x4f88c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4f88c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f88c4:
    // 0x4f88c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f88c8:
    // 0x4f88c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f88cc:
    if (ctx->pc == 0x4F88CCu) {
        ctx->pc = 0x4F88CCu;
            // 0x4f88cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F88D0u;
        goto label_4f88d0;
    }
    ctx->pc = 0x4F88C8u;
    {
        const bool branch_taken_0x4f88c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f88c8) {
            ctx->pc = 0x4F88CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F88C8u;
            // 0x4f88cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F88DCu;
            goto label_4f88dc;
        }
    }
    ctx->pc = 0x4F88D0u;
label_4f88d0:
    // 0x4f88d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f88d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f88d4:
    // 0x4f88d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f88d8:
    if (ctx->pc == 0x4F88D8u) {
        ctx->pc = 0x4F88D8u;
            // 0x4f88d8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F88DCu;
        goto label_4f88dc;
    }
    ctx->pc = 0x4F88D4u;
    {
        const bool branch_taken_0x4f88d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F88D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F88D4u;
            // 0x4f88d8: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f88d4) {
            ctx->pc = 0x4F88F4u;
            goto label_4f88f4;
        }
    }
    ctx->pc = 0x4F88DCu;
label_4f88dc:
    // 0x4f88dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f88dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f88e0:
    // 0x4f88e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f88e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f88e4:
    // 0x4f88e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f88e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f88e8:
    // 0x4f88e8: 0x0  nop
    ctx->pc = 0x4f88e8u;
    // NOP
label_4f88ec:
    // 0x4f88ec: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f88ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f88f0:
    // 0x4f88f0: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f88f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f88f4:
    // 0x4f88f4: 0x96040106  lhu         $a0, 0x106($s0)
    ctx->pc = 0x4f88f4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
label_4f88f8:
    // 0x4f88f8: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4f88f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4f88fc:
    // 0x4f88fc: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x4f88fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4f8900:
    // 0x4f8900: 0x92050104  lbu         $a1, 0x104($s0)
    ctx->pc = 0x4f8900u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 260)));
label_4f8904:
    // 0x4f8904: 0x92060105  lbu         $a2, 0x105($s0)
    ctx->pc = 0x4f8904u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 261)));
label_4f8908:
    // 0x4f8908: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x4f8908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f890c:
    // 0x4f890c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x4f890cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4f8910:
    // 0x4f8910: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x4f8910u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f8914:
    // 0x4f8914: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x4f8914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_4f8918:
    // 0x4f8918: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4f8918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f891c:
    // 0x4f891c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x4f891cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4f8920:
    // 0x4f8920: 0x1010  mfhi        $v0
    ctx->pc = 0x4f8920u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4f8924:
    // 0x4f8924: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x4f8924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_4f8928:
    // 0x4f8928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f8928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f892c:
    // 0x4f892c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4f892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f8930:
    // 0x4f8930: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4f8930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f8934:
    // 0x4f8934: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f8934u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f8938:
    // 0x4f8938: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8938u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f893c:
    // 0x4f893c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f893cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8940:
    // 0x4f8940: 0x0  nop
    ctx->pc = 0x4f8940u;
    // NOP
label_4f8944:
    // 0x4f8944: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f8944u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4f8948:
    // 0x4f8948: 0x1000009a  b           . + 4 + (0x9A << 2)
label_4f894c:
    if (ctx->pc == 0x4F894Cu) {
        ctx->pc = 0x4F894Cu;
            // 0x4f894c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x4F8950u;
        goto label_4f8950;
    }
    ctx->pc = 0x4F8948u;
    {
        const bool branch_taken_0x4f8948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F894Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8948u;
            // 0x4f894c: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8948) {
            ctx->pc = 0x4F8BB4u;
            goto label_4f8bb4;
        }
    }
    ctx->pc = 0x4F8950u;
label_4f8950:
    // 0x4f8950: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x4f8950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_4f8954:
    // 0x4f8954: 0x38a20006  xori        $v0, $a1, 0x6
    ctx->pc = 0x4f8954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
label_4f8958:
    // 0x4f8958: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f8958u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f895c:
    // 0x4f895c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4f895cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f8960:
    // 0x4f8960: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4f8960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4f8964:
    // 0x4f8964: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_4f8968:
    if (ctx->pc == 0x4F8968u) {
        ctx->pc = 0x4F8968u;
            // 0x4f8968: 0x38a40007  xori        $a0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->pc = 0x4F896Cu;
        goto label_4f896c;
    }
    ctx->pc = 0x4F8964u;
    {
        const bool branch_taken_0x4f8964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8964) {
            ctx->pc = 0x4F8968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8964u;
            // 0x4f8968: 0x38a40007  xori        $a0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F89D0u;
            goto label_4f89d0;
        }
    }
    ctx->pc = 0x4F896Cu;
label_4f896c:
    // 0x4f896c: 0x8e460968  lw          $a2, 0x968($s2)
    ctx->pc = 0x4f896cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8970:
    // 0x4f8970: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f8970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f8974:
    // 0x4f8974: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f8974u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8978:
    // 0x4f8978: 0x2484d6b8  addiu       $a0, $a0, -0x2948
    ctx->pc = 0x4f8978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956728));
label_4f897c:
    // 0x4f897c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4f897cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8980:
    // 0x4f8980: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4f8980u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8984:
    // 0x4f8984: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8988:
    // 0x4f8988: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f8988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f898c:
    // 0x4f898c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f898cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8990:
    // 0x4f8990: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f8990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f8994:
    // 0x4f8994: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f8994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f8998:
    // 0x4f8998: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f899c:
    // 0x4f899c: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f89a0:
    if (ctx->pc == 0x4F89A0u) {
        ctx->pc = 0x4F89A0u;
            // 0x4f89a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F89A4u;
        goto label_4f89a4;
    }
    ctx->pc = 0x4F899Cu;
    {
        const bool branch_taken_0x4f899c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f899c) {
            ctx->pc = 0x4F89A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F899Cu;
            // 0x4f89a0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F89B0u;
            goto label_4f89b0;
        }
    }
    ctx->pc = 0x4F89A4u;
label_4f89a4:
    // 0x4f89a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f89a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f89a8:
    // 0x4f89a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f89ac:
    if (ctx->pc == 0x4F89ACu) {
        ctx->pc = 0x4F89ACu;
            // 0x4f89ac: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F89B0u;
        goto label_4f89b0;
    }
    ctx->pc = 0x4F89A8u;
    {
        const bool branch_taken_0x4f89a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F89ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F89A8u;
            // 0x4f89ac: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f89a8) {
            ctx->pc = 0x4F89C8u;
            goto label_4f89c8;
        }
    }
    ctx->pc = 0x4F89B0u;
label_4f89b0:
    // 0x4f89b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f89b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f89b4:
    // 0x4f89b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f89b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f89b8:
    // 0x4f89b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f89b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f89bc:
    // 0x4f89bc: 0x0  nop
    ctx->pc = 0x4f89bcu;
    // NOP
label_4f89c0:
    // 0x4f89c0: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f89c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f89c4:
    // 0x4f89c4: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f89c4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f89c8:
    // 0x4f89c8: 0x10000065  b           . + 4 + (0x65 << 2)
label_4f89cc:
    if (ctx->pc == 0x4F89CCu) {
        ctx->pc = 0x4F89CCu;
            // 0x4f89cc: 0x96040106  lhu         $a0, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->pc = 0x4F89D0u;
        goto label_4f89d0;
    }
    ctx->pc = 0x4F89C8u;
    {
        const bool branch_taken_0x4f89c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F89CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F89C8u;
            // 0x4f89cc: 0x96040106  lhu         $a0, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f89c8) {
            ctx->pc = 0x4F8B60u;
            goto label_4f8b60;
        }
    }
    ctx->pc = 0x4F89D0u;
label_4f89d0:
    // 0x4f89d0: 0x38a20009  xori        $v0, $a1, 0x9
    ctx->pc = 0x4f89d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_4f89d4:
    // 0x4f89d4: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f89d4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f89d8:
    // 0x4f89d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4f89d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f89dc:
    // 0x4f89dc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4f89dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4f89e0:
    // 0x4f89e0: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_4f89e4:
    if (ctx->pc == 0x4F89E4u) {
        ctx->pc = 0x4F89E4u;
            // 0x4f89e4: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x4F89E8u;
        goto label_4f89e8;
    }
    ctx->pc = 0x4F89E0u;
    {
        const bool branch_taken_0x4f89e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f89e0) {
            ctx->pc = 0x4F89E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F89E0u;
            // 0x4f89e4: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8ABCu;
            goto label_4f8abc;
        }
    }
    ctx->pc = 0x4F89E8u;
label_4f89e8:
    // 0x4f89e8: 0x92440ce4  lbu         $a0, 0xCE4($s2)
    ctx->pc = 0x4f89e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3300)));
label_4f89ec:
    // 0x4f89ec: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f89f0:
    // 0x4f89f0: 0x5082001a  beql        $a0, $v0, . + 4 + (0x1A << 2)
label_4f89f4:
    if (ctx->pc == 0x4F89F4u) {
        ctx->pc = 0x4F89F4u;
            // 0x4f89f4: 0x8e460968  lw          $a2, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->pc = 0x4F89F8u;
        goto label_4f89f8;
    }
    ctx->pc = 0x4F89F0u;
    {
        const bool branch_taken_0x4f89f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f89f0) {
            ctx->pc = 0x4F89F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F89F0u;
            // 0x4f89f4: 0x8e460968  lw          $a2, 0x968($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8A5Cu;
            goto label_4f8a5c;
        }
    }
    ctx->pc = 0x4F89F8u;
label_4f89f8:
    // 0x4f89f8: 0x8e460968  lw          $a2, 0x968($s2)
    ctx->pc = 0x4f89f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f89fc:
    // 0x4f89fc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f89fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f8a00:
    // 0x4f8a00: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f8a00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8a04:
    // 0x4f8a04: 0x2484de38  addiu       $a0, $a0, -0x21C8
    ctx->pc = 0x4f8a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
label_4f8a08:
    // 0x4f8a08: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4f8a08u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8a0c:
    // 0x4f8a0c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4f8a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8a10:
    // 0x4f8a10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8a14:
    // 0x4f8a14: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f8a18:
    // 0x4f8a18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f8a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8a1c:
    // 0x4f8a1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f8a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f8a20:
    // 0x4f8a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f8a24:
    // 0x4f8a24: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8a28:
    // 0x4f8a28: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8a2c:
    if (ctx->pc == 0x4F8A2Cu) {
        ctx->pc = 0x4F8A2Cu;
            // 0x4f8a2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8A30u;
        goto label_4f8a30;
    }
    ctx->pc = 0x4F8A28u;
    {
        const bool branch_taken_0x4f8a28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8a28) {
            ctx->pc = 0x4F8A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8A28u;
            // 0x4f8a2c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8A3Cu;
            goto label_4f8a3c;
        }
    }
    ctx->pc = 0x4F8A30u;
label_4f8a30:
    // 0x4f8a30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8a30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8a34:
    // 0x4f8a34: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8a38:
    if (ctx->pc == 0x4F8A38u) {
        ctx->pc = 0x4F8A38u;
            // 0x4f8a38: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8A3Cu;
        goto label_4f8a3c;
    }
    ctx->pc = 0x4F8A34u;
    {
        const bool branch_taken_0x4f8a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8A34u;
            // 0x4f8a38: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8a34) {
            ctx->pc = 0x4F8A54u;
            goto label_4f8a54;
        }
    }
    ctx->pc = 0x4F8A3Cu;
label_4f8a3c:
    // 0x4f8a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8a40:
    // 0x4f8a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8a44:
    // 0x4f8a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8a48:
    // 0x4f8a48: 0x0  nop
    ctx->pc = 0x4f8a48u;
    // NOP
label_4f8a4c:
    // 0x4f8a4c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8a50:
    // 0x4f8a50: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8a50u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8a54:
    // 0x4f8a54: 0x10000041  b           . + 4 + (0x41 << 2)
label_4f8a58:
    if (ctx->pc == 0x4F8A58u) {
        ctx->pc = 0x4F8A5Cu;
        goto label_4f8a5c;
    }
    ctx->pc = 0x4F8A54u;
    {
        const bool branch_taken_0x4f8a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8a54) {
            ctx->pc = 0x4F8B5Cu;
            goto label_4f8b5c;
        }
    }
    ctx->pc = 0x4F8A5Cu;
label_4f8a5c:
    // 0x4f8a5c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f8a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f8a60:
    // 0x4f8a60: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f8a60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8a64:
    // 0x4f8a64: 0x2484e1f8  addiu       $a0, $a0, -0x1E08
    ctx->pc = 0x4f8a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959608));
label_4f8a68:
    // 0x4f8a68: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4f8a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8a6c:
    // 0x4f8a6c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4f8a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8a70:
    // 0x4f8a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8a74:
    // 0x4f8a74: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f8a74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f8a78:
    // 0x4f8a78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8a7c:
    // 0x4f8a7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f8a80:
    // 0x4f8a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f8a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f8a84:
    // 0x4f8a84: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8a88:
    // 0x4f8a88: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8a8c:
    if (ctx->pc == 0x4F8A8Cu) {
        ctx->pc = 0x4F8A8Cu;
            // 0x4f8a8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8A90u;
        goto label_4f8a90;
    }
    ctx->pc = 0x4F8A88u;
    {
        const bool branch_taken_0x4f8a88 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8a88) {
            ctx->pc = 0x4F8A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8A88u;
            // 0x4f8a8c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8A9Cu;
            goto label_4f8a9c;
        }
    }
    ctx->pc = 0x4F8A90u;
label_4f8a90:
    // 0x4f8a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8a94:
    // 0x4f8a94: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8a98:
    if (ctx->pc == 0x4F8A98u) {
        ctx->pc = 0x4F8A98u;
            // 0x4f8a98: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8A9Cu;
        goto label_4f8a9c;
    }
    ctx->pc = 0x4F8A94u;
    {
        const bool branch_taken_0x4f8a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8A94u;
            // 0x4f8a98: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8a94) {
            ctx->pc = 0x4F8AB4u;
            goto label_4f8ab4;
        }
    }
    ctx->pc = 0x4F8A9Cu;
label_4f8a9c:
    // 0x4f8a9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8aa0:
    // 0x4f8aa0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8aa4:
    // 0x4f8aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8aa8:
    // 0x4f8aa8: 0x0  nop
    ctx->pc = 0x4f8aa8u;
    // NOP
label_4f8aac:
    // 0x4f8aac: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8aacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8ab0:
    // 0x4f8ab0: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8ab0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8ab4:
    // 0x4f8ab4: 0x10000029  b           . + 4 + (0x29 << 2)
label_4f8ab8:
    if (ctx->pc == 0x4F8AB8u) {
        ctx->pc = 0x4F8ABCu;
        goto label_4f8abc;
    }
    ctx->pc = 0x4F8AB4u;
    {
        const bool branch_taken_0x4f8ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8ab4) {
            ctx->pc = 0x4F8B5Cu;
            goto label_4f8b5c;
        }
    }
    ctx->pc = 0x4F8ABCu;
label_4f8abc:
    // 0x4f8abc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4f8abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f8ac0:
    // 0x4f8ac0: 0x5482001a  bnel        $a0, $v0, . + 4 + (0x1A << 2)
label_4f8ac4:
    if (ctx->pc == 0x4F8AC4u) {
        ctx->pc = 0x4F8AC4u;
            // 0x4f8ac4: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x4F8AC8u;
        goto label_4f8ac8;
    }
    ctx->pc = 0x4F8AC0u;
    {
        const bool branch_taken_0x4f8ac0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f8ac0) {
            ctx->pc = 0x4F8AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8AC0u;
            // 0x4f8ac4: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8B2Cu;
            goto label_4f8b2c;
        }
    }
    ctx->pc = 0x4F8AC8u;
label_4f8ac8:
    // 0x4f8ac8: 0x8e460968  lw          $a2, 0x968($s2)
    ctx->pc = 0x4f8ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8acc:
    // 0x4f8acc: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f8accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f8ad0:
    // 0x4f8ad0: 0x9202005a  lbu         $v0, 0x5A($s0)
    ctx->pc = 0x4f8ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f8ad4:
    // 0x4f8ad4: 0x2484da78  addiu       $a0, $a0, -0x2588
    ctx->pc = 0x4f8ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957688));
label_4f8ad8:
    // 0x4f8ad8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x4f8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f8adc:
    // 0x4f8adc: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x4f8adcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f8ae0:
    // 0x4f8ae0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8ae4:
    // 0x4f8ae4: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f8ae8:
    // 0x4f8ae8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f8ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8aec:
    // 0x4f8aec: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f8af0:
    // 0x4f8af0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f8af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f8af4:
    // 0x4f8af4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4f8af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f8af8:
    // 0x4f8af8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8afc:
    if (ctx->pc == 0x4F8AFCu) {
        ctx->pc = 0x4F8AFCu;
            // 0x4f8afc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8B00u;
        goto label_4f8b00;
    }
    ctx->pc = 0x4F8AF8u;
    {
        const bool branch_taken_0x4f8af8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8af8) {
            ctx->pc = 0x4F8AFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8AF8u;
            // 0x4f8afc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8B0Cu;
            goto label_4f8b0c;
        }
    }
    ctx->pc = 0x4F8B00u;
label_4f8b00:
    // 0x4f8b00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8b04:
    // 0x4f8b04: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8b08:
    if (ctx->pc == 0x4F8B08u) {
        ctx->pc = 0x4F8B08u;
            // 0x4f8b08: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8B0Cu;
        goto label_4f8b0c;
    }
    ctx->pc = 0x4F8B04u;
    {
        const bool branch_taken_0x4f8b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8B04u;
            // 0x4f8b08: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8b04) {
            ctx->pc = 0x4F8B24u;
            goto label_4f8b24;
        }
    }
    ctx->pc = 0x4F8B0Cu;
label_4f8b0c:
    // 0x4f8b0c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8b10:
    // 0x4f8b10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8b14:
    // 0x4f8b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8b18:
    // 0x4f8b18: 0x0  nop
    ctx->pc = 0x4f8b18u;
    // NOP
label_4f8b1c:
    // 0x4f8b1c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8b20:
    // 0x4f8b20: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8b20u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8b24:
    // 0x4f8b24: 0x1000000d  b           . + 4 + (0xD << 2)
label_4f8b28:
    if (ctx->pc == 0x4F8B28u) {
        ctx->pc = 0x4F8B2Cu;
        goto label_4f8b2c;
    }
    ctx->pc = 0x4F8B24u;
    {
        const bool branch_taken_0x4f8b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8b24) {
            ctx->pc = 0x4F8B5Cu;
            goto label_4f8b5c;
        }
    }
    ctx->pc = 0x4F8B2Cu;
label_4f8b2c:
    // 0x4f8b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f8b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f8b30:
    // 0x4f8b30: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4f8b34:
    if (ctx->pc == 0x4F8B34u) {
        ctx->pc = 0x4F8B34u;
            // 0x4f8b34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4F8B38u;
        goto label_4f8b38;
    }
    ctx->pc = 0x4F8B30u;
    {
        const bool branch_taken_0x4f8b30 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4f8b30) {
            ctx->pc = 0x4F8B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8B30u;
            // 0x4f8b34: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8B44u;
            goto label_4f8b44;
        }
    }
    ctx->pc = 0x4F8B38u;
label_4f8b38:
    // 0x4f8b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8b3c:
    // 0x4f8b3c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f8b40:
    if (ctx->pc == 0x4F8B40u) {
        ctx->pc = 0x4F8B40u;
            // 0x4f8b40: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F8B44u;
        goto label_4f8b44;
    }
    ctx->pc = 0x4F8B3Cu;
    {
        const bool branch_taken_0x4f8b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8B3Cu;
            // 0x4f8b40: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8b3c) {
            ctx->pc = 0x4F8B5Cu;
            goto label_4f8b5c;
        }
    }
    ctx->pc = 0x4F8B44u;
label_4f8b44:
    // 0x4f8b44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4f8b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4f8b48:
    // 0x4f8b48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f8b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f8b4c:
    // 0x4f8b4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8b4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8b50:
    // 0x4f8b50: 0x0  nop
    ctx->pc = 0x4f8b50u;
    // NOP
label_4f8b54:
    // 0x4f8b54: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x4f8b54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_4f8b58:
    // 0x4f8b58: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x4f8b58u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_4f8b5c:
    // 0x4f8b5c: 0x96040106  lhu         $a0, 0x106($s0)
    ctx->pc = 0x4f8b5cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
label_4f8b60:
    // 0x4f8b60: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x4f8b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_4f8b64:
    // 0x4f8b64: 0x34424dd3  ori         $v0, $v0, 0x4DD3
    ctx->pc = 0x4f8b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_4f8b68:
    // 0x4f8b68: 0x92050104  lbu         $a1, 0x104($s0)
    ctx->pc = 0x4f8b68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 260)));
label_4f8b6c:
    // 0x4f8b6c: 0x92060105  lbu         $a2, 0x105($s0)
    ctx->pc = 0x4f8b6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 261)));
label_4f8b70:
    // 0x4f8b70: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x4f8b70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f8b74:
    // 0x4f8b74: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x4f8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4f8b78:
    // 0x4f8b78: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x4f8b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f8b7c:
    // 0x4f8b7c: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x4f8b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_4f8b80:
    // 0x4f8b80: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4f8b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4f8b84:
    // 0x4f8b84: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x4f8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4f8b88:
    // 0x4f8b88: 0x1010  mfhi        $v0
    ctx->pc = 0x4f8b88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4f8b8c:
    // 0x4f8b8c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x4f8b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_4f8b90:
    // 0x4f8b90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f8b94:
    // 0x4f8b94: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x4f8b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f8b98:
    // 0x4f8b98: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4f8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f8b9c:
    // 0x4f8b9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f8ba0:
    // 0x4f8ba0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f8ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8ba4:
    // 0x4f8ba4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8ba4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8ba8:
    // 0x4f8ba8: 0x0  nop
    ctx->pc = 0x4f8ba8u;
    // NOP
label_4f8bac:
    // 0x4f8bac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f8bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4f8bb0:
    // 0x4f8bb0: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x4f8bb0u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_4f8bb4:
    // 0x4f8bb4: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x4f8bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8bb8:
    // 0x4f8bb8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4f8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f8bbc:
    // 0x4f8bbc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_4f8bc0:
    if (ctx->pc == 0x4F8BC0u) {
        ctx->pc = 0x4F8BC0u;
            // 0x4f8bc0: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x4F8BC4u;
        goto label_4f8bc4;
    }
    ctx->pc = 0x4F8BBCu;
    {
        const bool branch_taken_0x4f8bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f8bbc) {
            ctx->pc = 0x4F8BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8BBCu;
            // 0x4f8bc0: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8BD0u;
            goto label_4f8bd0;
        }
    }
    ctx->pc = 0x4F8BC4u;
label_4f8bc4:
    // 0x4f8bc4: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4f8bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f8bc8:
    // 0x4f8bc8: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x4f8bc8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_4f8bcc:
    // 0x4f8bcc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x4f8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4f8bd0:
    // 0x4f8bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f8bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8bd4:
    // 0x4f8bd4: 0x38640003  xori        $a0, $v1, 0x3
    ctx->pc = 0x4f8bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_4f8bd8:
    // 0x4f8bd8: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x4f8bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_4f8bdc:
    // 0x4f8bdc: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f8bdcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f8be0:
    // 0x4f8be0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f8be0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f8be4:
    // 0x4f8be4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4f8be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f8be8:
    // 0x4f8be8: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_4f8bec:
    if (ctx->pc == 0x4F8BECu) {
        ctx->pc = 0x4F8BF0u;
        goto label_4f8bf0;
    }
    ctx->pc = 0x4F8BE8u;
    {
        const bool branch_taken_0x4f8be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8be8) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8BF0u;
label_4f8bf0:
    // 0x4f8bf0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4f8bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4f8bf4:
    // 0x4f8bf4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4f8bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f8bf8:
    // 0x4f8bf8: 0x10830068  beq         $a0, $v1, . + 4 + (0x68 << 2)
label_4f8bfc:
    if (ctx->pc == 0x4F8BFCu) {
        ctx->pc = 0x4F8C00u;
        goto label_4f8c00;
    }
    ctx->pc = 0x4F8BF8u;
    {
        const bool branch_taken_0x4f8bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4f8bf8) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8C00u;
label_4f8c00:
    // 0x4f8c00: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x4f8c00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4f8c04:
    // 0x4f8c04: 0x50200063  beql        $at, $zero, . + 4 + (0x63 << 2)
label_4f8c08:
    if (ctx->pc == 0x4F8C08u) {
        ctx->pc = 0x4F8C08u;
            // 0x4f8c08: 0x3c033d97  lui         $v1, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
        ctx->pc = 0x4F8C0Cu;
        goto label_4f8c0c;
    }
    ctx->pc = 0x4F8C04u;
    {
        const bool branch_taken_0x4f8c04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8c04) {
            ctx->pc = 0x4F8C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8C04u;
            // 0x4f8c08: 0x3c033d97  lui         $v1, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8D94u;
            goto label_4f8d94;
        }
    }
    ctx->pc = 0x4F8C0Cu;
label_4f8c0c:
    // 0x4f8c0c: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4f8c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4f8c10:
    // 0x4f8c10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4f8c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f8c14:
    // 0x4f8c14: 0x24848ba0  addiu       $a0, $a0, -0x7460
    ctx->pc = 0x4f8c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937504));
label_4f8c18:
    // 0x4f8c18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f8c1c:
    // 0x4f8c1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f8c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f8c20:
    // 0x4f8c20: 0x600008  jr          $v1
label_4f8c24:
    if (ctx->pc == 0x4F8C24u) {
        ctx->pc = 0x4F8C28u;
        goto label_4f8c28;
    }
    ctx->pc = 0x4F8C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4F8C28u: goto label_4f8c28;
            case 0x4F8C64u: goto label_4f8c64;
            case 0x4F8C78u: goto label_4f8c78;
            case 0x4F8C8Cu: goto label_4f8c8c;
            case 0x4F8CA0u: goto label_4f8ca0;
            case 0x4F8CB4u: goto label_4f8cb4;
            case 0x4F8CC8u: goto label_4f8cc8;
            case 0x4F8CDCu: goto label_4f8cdc;
            case 0x4F8CF0u: goto label_4f8cf0;
            case 0x4F8D04u: goto label_4f8d04;
            case 0x4F8D18u: goto label_4f8d18;
            case 0x4F8D2Cu: goto label_4f8d2c;
            case 0x4F8D40u: goto label_4f8d40;
            case 0x4F8D54u: goto label_4f8d54;
            case 0x4F8D68u: goto label_4f8d68;
            case 0x4F8D7Cu: goto label_4f8d7c;
            case 0x4F8D90u: goto label_4f8d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4F8C28u;
label_4f8c28:
    // 0x4f8c28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4f8c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f8c2c:
    // 0x4f8c2c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4f8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4f8c30:
    // 0x4f8c30: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x4f8c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_4f8c34:
    // 0x4f8c34: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4f8c34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f8c38:
    // 0x4f8c38: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_4f8c3c:
    if (ctx->pc == 0x4F8C3Cu) {
        ctx->pc = 0x4F8C3Cu;
            // 0x4f8c3c: 0x3c033dd0  lui         $v1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15824 << 16));
        ctx->pc = 0x4F8C40u;
        goto label_4f8c40;
    }
    ctx->pc = 0x4F8C38u;
    {
        const bool branch_taken_0x4f8c38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4f8c38) {
            ctx->pc = 0x4F8C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8C38u;
            // 0x4f8c3c: 0x3c033dd0  lui         $v1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15824 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8C54u;
            goto label_4f8c54;
        }
    }
    ctx->pc = 0x4F8C40u;
label_4f8c40:
    // 0x4f8c40: 0x3c033de3  lui         $v1, 0x3DE3
    ctx->pc = 0x4f8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15843 << 16));
label_4f8c44:
    // 0x4f8c44: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x4f8c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_4f8c48:
    // 0x4f8c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8c4c:
    // 0x4f8c4c: 0x10000053  b           . + 4 + (0x53 << 2)
label_4f8c50:
    if (ctx->pc == 0x4F8C50u) {
        ctx->pc = 0x4F8C54u;
        goto label_4f8c54;
    }
    ctx->pc = 0x4F8C4Cu;
    {
        const bool branch_taken_0x4f8c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8c4c) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8C54u;
label_4f8c54:
    // 0x4f8c54: 0x346397b4  ori         $v1, $v1, 0x97B4
    ctx->pc = 0x4f8c54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38836);
label_4f8c58:
    // 0x4f8c58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8c58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8c5c:
    // 0x4f8c5c: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4f8c60:
    if (ctx->pc == 0x4F8C60u) {
        ctx->pc = 0x4F8C64u;
        goto label_4f8c64;
    }
    ctx->pc = 0x4F8C5Cu;
    {
        const bool branch_taken_0x4f8c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8c5c) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8C64u;
label_4f8c64:
    // 0x4f8c64: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x4f8c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_4f8c68:
    // 0x4f8c68: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x4f8c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_4f8c6c:
    // 0x4f8c6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8c6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8c70:
    // 0x4f8c70: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4f8c74:
    if (ctx->pc == 0x4F8C74u) {
        ctx->pc = 0x4F8C78u;
        goto label_4f8c78;
    }
    ctx->pc = 0x4F8C70u;
    {
        const bool branch_taken_0x4f8c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8c70) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8C78u;
label_4f8c78:
    // 0x4f8c78: 0x3c033d84  lui         $v1, 0x3D84
    ctx->pc = 0x4f8c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15748 << 16));
label_4f8c7c:
    // 0x4f8c7c: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4f8c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
label_4f8c80:
    // 0x4f8c80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8c84:
    // 0x4f8c84: 0x10000045  b           . + 4 + (0x45 << 2)
label_4f8c88:
    if (ctx->pc == 0x4F8C88u) {
        ctx->pc = 0x4F8C8Cu;
        goto label_4f8c8c;
    }
    ctx->pc = 0x4F8C84u;
    {
        const bool branch_taken_0x4f8c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8c84) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8C8Cu;
label_4f8c8c:
    // 0x4f8c8c: 0x3c033daa  lui         $v1, 0x3DAA
    ctx->pc = 0x4f8c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15786 << 16));
label_4f8c90:
    // 0x4f8c90: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4f8c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4f8c94:
    // 0x4f8c94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8c98:
    // 0x4f8c98: 0x10000040  b           . + 4 + (0x40 << 2)
label_4f8c9c:
    if (ctx->pc == 0x4F8C9Cu) {
        ctx->pc = 0x4F8CA0u;
        goto label_4f8ca0;
    }
    ctx->pc = 0x4F8C98u;
    {
        const bool branch_taken_0x4f8c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8c98) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8CA0u;
label_4f8ca0:
    // 0x4f8ca0: 0x3c033daa  lui         $v1, 0x3DAA
    ctx->pc = 0x4f8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15786 << 16));
label_4f8ca4:
    // 0x4f8ca4: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4f8ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4f8ca8:
    // 0x4f8ca8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8ca8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8cac:
    // 0x4f8cac: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4f8cb0:
    if (ctx->pc == 0x4F8CB0u) {
        ctx->pc = 0x4F8CB4u;
        goto label_4f8cb4;
    }
    ctx->pc = 0x4F8CACu;
    {
        const bool branch_taken_0x4f8cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8cac) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8CB4u;
label_4f8cb4:
    // 0x4f8cb4: 0x3c033d84  lui         $v1, 0x3D84
    ctx->pc = 0x4f8cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15748 << 16));
label_4f8cb8:
    // 0x4f8cb8: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4f8cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
label_4f8cbc:
    // 0x4f8cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8cc0:
    // 0x4f8cc0: 0x10000036  b           . + 4 + (0x36 << 2)
label_4f8cc4:
    if (ctx->pc == 0x4F8CC4u) {
        ctx->pc = 0x4F8CC8u;
        goto label_4f8cc8;
    }
    ctx->pc = 0x4F8CC0u;
    {
        const bool branch_taken_0x4f8cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8cc0) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8CC8u;
label_4f8cc8:
    // 0x4f8cc8: 0x3c033d17  lui         $v1, 0x3D17
    ctx->pc = 0x4f8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15639 << 16));
label_4f8ccc:
    // 0x4f8ccc: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8cd0:
    // 0x4f8cd0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8cd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8cd4:
    // 0x4f8cd4: 0x10000031  b           . + 4 + (0x31 << 2)
label_4f8cd8:
    if (ctx->pc == 0x4F8CD8u) {
        ctx->pc = 0x4F8CDCu;
        goto label_4f8cdc;
    }
    ctx->pc = 0x4F8CD4u;
    {
        const bool branch_taken_0x4f8cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8cd4) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8CDCu;
label_4f8cdc:
    // 0x4f8cdc: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8ce0:
    // 0x4f8ce0: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8ce4:
    // 0x4f8ce4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8ce4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8ce8:
    // 0x4f8ce8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4f8cec:
    if (ctx->pc == 0x4F8CECu) {
        ctx->pc = 0x4F8CF0u;
        goto label_4f8cf0;
    }
    ctx->pc = 0x4F8CE8u;
    {
        const bool branch_taken_0x4f8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8ce8) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8CF0u;
label_4f8cf0:
    // 0x4f8cf0: 0x3c033d63  lui         $v1, 0x3D63
    ctx->pc = 0x4f8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15715 << 16));
label_4f8cf4:
    // 0x4f8cf4: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x4f8cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_4f8cf8:
    // 0x4f8cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8cfc:
    // 0x4f8cfc: 0x10000027  b           . + 4 + (0x27 << 2)
label_4f8d00:
    if (ctx->pc == 0x4F8D00u) {
        ctx->pc = 0x4F8D04u;
        goto label_4f8d04;
    }
    ctx->pc = 0x4F8CFCu;
    {
        const bool branch_taken_0x4f8cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8cfc) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D04u;
label_4f8d04:
    // 0x4f8d04: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8d08:
    // 0x4f8d08: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8d08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8d0c:
    // 0x4f8d0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d10:
    // 0x4f8d10: 0x10000022  b           . + 4 + (0x22 << 2)
label_4f8d14:
    if (ctx->pc == 0x4F8D14u) {
        ctx->pc = 0x4F8D18u;
        goto label_4f8d18;
    }
    ctx->pc = 0x4F8D10u;
    {
        const bool branch_taken_0x4f8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d10) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D18u;
label_4f8d18:
    // 0x4f8d18: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8d1c:
    // 0x4f8d1c: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8d20:
    // 0x4f8d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d24:
    // 0x4f8d24: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4f8d28:
    if (ctx->pc == 0x4F8D28u) {
        ctx->pc = 0x4F8D2Cu;
        goto label_4f8d2c;
    }
    ctx->pc = 0x4F8D24u;
    {
        const bool branch_taken_0x4f8d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d24) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D2Cu;
label_4f8d2c:
    // 0x4f8d2c: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8d30:
    // 0x4f8d30: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8d34:
    // 0x4f8d34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d38:
    // 0x4f8d38: 0x10000018  b           . + 4 + (0x18 << 2)
label_4f8d3c:
    if (ctx->pc == 0x4F8D3Cu) {
        ctx->pc = 0x4F8D40u;
        goto label_4f8d40;
    }
    ctx->pc = 0x4F8D38u;
    {
        const bool branch_taken_0x4f8d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d38) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D40u;
label_4f8d40:
    // 0x4f8d40: 0x3c033d63  lui         $v1, 0x3D63
    ctx->pc = 0x4f8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15715 << 16));
label_4f8d44:
    // 0x4f8d44: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x4f8d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_4f8d48:
    // 0x4f8d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d4c:
    // 0x4f8d4c: 0x10000013  b           . + 4 + (0x13 << 2)
label_4f8d50:
    if (ctx->pc == 0x4F8D50u) {
        ctx->pc = 0x4F8D54u;
        goto label_4f8d54;
    }
    ctx->pc = 0x4F8D4Cu;
    {
        const bool branch_taken_0x4f8d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d4c) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D54u;
label_4f8d54:
    // 0x4f8d54: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8d58:
    // 0x4f8d58: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8d5c:
    // 0x4f8d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d60:
    // 0x4f8d60: 0x1000000e  b           . + 4 + (0xE << 2)
label_4f8d64:
    if (ctx->pc == 0x4F8D64u) {
        ctx->pc = 0x4F8D68u;
        goto label_4f8d68;
    }
    ctx->pc = 0x4F8D60u;
    {
        const bool branch_taken_0x4f8d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d60) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D68u;
label_4f8d68:
    // 0x4f8d68: 0x3c033d84  lui         $v1, 0x3D84
    ctx->pc = 0x4f8d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15748 << 16));
label_4f8d6c:
    // 0x4f8d6c: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4f8d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
label_4f8d70:
    // 0x4f8d70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d74:
    // 0x4f8d74: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f8d78:
    if (ctx->pc == 0x4F8D78u) {
        ctx->pc = 0x4F8D7Cu;
        goto label_4f8d7c;
    }
    ctx->pc = 0x4F8D74u;
    {
        const bool branch_taken_0x4f8d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d74) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D7Cu;
label_4f8d7c:
    // 0x4f8d7c: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8d80:
    // 0x4f8d80: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8d84:
    // 0x4f8d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d88:
    // 0x4f8d88: 0x10000004  b           . + 4 + (0x4 << 2)
label_4f8d8c:
    if (ctx->pc == 0x4F8D8Cu) {
        ctx->pc = 0x4F8D90u;
        goto label_4f8d90;
    }
    ctx->pc = 0x4F8D88u;
    {
        const bool branch_taken_0x4f8d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8d88) {
            ctx->pc = 0x4F8D9Cu;
            goto label_4f8d9c;
        }
    }
    ctx->pc = 0x4F8D90u;
label_4f8d90:
    // 0x4f8d90: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4f8d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4f8d94:
    // 0x4f8d94: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4f8d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4f8d98:
    // 0x4f8d98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f8d98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8d9c:
    // 0x4f8d9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4f8d9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f8da0:
    // 0x4f8da0: 0x0  nop
    ctx->pc = 0x4f8da0u;
    // NOP
label_4f8da4:
    // 0x4f8da4: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x4f8da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8da8:
    // 0x4f8da8: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4f8dac:
    if (ctx->pc == 0x4F8DACu) {
        ctx->pc = 0x4F8DACu;
            // 0x4f8dac: 0x3c023c17  lui         $v0, 0x3C17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
        ctx->pc = 0x4F8DB0u;
        goto label_4f8db0;
    }
    ctx->pc = 0x4F8DA8u;
    {
        const bool branch_taken_0x4f8da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8da8) {
            ctx->pc = 0x4F8DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8DA8u;
            // 0x4f8dac: 0x3c023c17  lui         $v0, 0x3C17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8DC0u;
            goto label_4f8dc0;
        }
    }
    ctx->pc = 0x4F8DB0u;
label_4f8db0:
    // 0x4f8db0: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x4f8db0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8db4:
    // 0x4f8db4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_4f8db8:
    if (ctx->pc == 0x4F8DB8u) {
        ctx->pc = 0x4F8DBCu;
        goto label_4f8dbc;
    }
    ctx->pc = 0x4F8DB4u;
    {
        const bool branch_taken_0x4f8db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8db4) {
            ctx->pc = 0x4F8E24u;
            goto label_4f8e24;
        }
    }
    ctx->pc = 0x4F8DBCu;
label_4f8dbc:
    // 0x4f8dbc: 0x3c023c17  lui         $v0, 0x3C17
    ctx->pc = 0x4f8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
label_4f8dc0:
    // 0x4f8dc0: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f8dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f8dc4:
    // 0x4f8dc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8dc8:
    // 0x4f8dc8: 0x0  nop
    ctx->pc = 0x4f8dc8u;
    // NOP
label_4f8dcc:
    // 0x4f8dcc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4f8dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4f8dd0:
    // 0x4f8dd0: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4f8dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4f8dd4:
    // 0x4f8dd4: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x4f8dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f8dd8:
    // 0x4f8dd8: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x4f8dd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8ddc:
    // 0x4f8ddc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4f8de0:
    if (ctx->pc == 0x4F8DE0u) {
        ctx->pc = 0x4F8DE0u;
            // 0x4f8de0: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4F8DE4u;
        goto label_4f8de4;
    }
    ctx->pc = 0x4F8DDCu;
    {
        const bool branch_taken_0x4f8ddc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8ddc) {
            ctx->pc = 0x4F8DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8DDCu;
            // 0x4f8de0: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8E04u;
            goto label_4f8e04;
        }
    }
    ctx->pc = 0x4F8DE4u;
label_4f8de4:
    // 0x4f8de4: 0xc6810df4  lwc1        $f1, 0xDF4($s4)
    ctx->pc = 0x4f8de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f8de8:
    // 0x4f8de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f8de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8dec:
    // 0x4f8dec: 0x0  nop
    ctx->pc = 0x4f8decu;
    // NOP
label_4f8df0:
    // 0x4f8df0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f8df0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8df4:
    // 0x4f8df4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4f8df8:
    if (ctx->pc == 0x4F8DF8u) {
        ctx->pc = 0x4F8DFCu;
        goto label_4f8dfc;
    }
    ctx->pc = 0x4F8DF4u;
    {
        const bool branch_taken_0x4f8df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8df4) {
            ctx->pc = 0x4F8E00u;
            goto label_4f8e00;
        }
    }
    ctx->pc = 0x4F8DFCu;
label_4f8dfc:
    // 0x4f8dfc: 0xe6820de4  swc1        $f2, 0xDE4($s4)
    ctx->pc = 0x4f8dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4f8e00:
    // 0x4f8e00: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4f8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4f8e04:
    // 0x4f8e04: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4f8e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4f8e08:
    // 0x4f8e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8e0c:
    // 0x4f8e0c: 0x0  nop
    ctx->pc = 0x4f8e0cu;
    // NOP
label_4f8e10:
    // 0x4f8e10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4f8e10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8e14:
    // 0x4f8e14: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_4f8e18:
    if (ctx->pc == 0x4F8E18u) {
        ctx->pc = 0x4F8E1Cu;
        goto label_4f8e1c;
    }
    ctx->pc = 0x4F8E14u;
    {
        const bool branch_taken_0x4f8e14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8e14) {
            ctx->pc = 0x4F8F30u;
            goto label_4f8f30;
        }
    }
    ctx->pc = 0x4F8E1Cu;
label_4f8e1c:
    // 0x4f8e1c: 0x10000044  b           . + 4 + (0x44 << 2)
label_4f8e20:
    if (ctx->pc == 0x4F8E20u) {
        ctx->pc = 0x4F8E20u;
            // 0x4f8e20: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F8E24u;
        goto label_4f8e24;
    }
    ctx->pc = 0x4F8E1Cu;
    {
        const bool branch_taken_0x4f8e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8E1Cu;
            // 0x4f8e20: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8e1c) {
            ctx->pc = 0x4F8F30u;
            goto label_4f8f30;
        }
    }
    ctx->pc = 0x4F8E24u;
label_4f8e24:
    // 0x4f8e24: 0x0  nop
    ctx->pc = 0x4f8e24u;
    // NOP
label_4f8e28:
    // 0x4f8e28: 0x0  nop
    ctx->pc = 0x4f8e28u;
    // NOP
label_4f8e2c:
    // 0x4f8e2c: 0x4615b543  div.s       $f21, $f22, $f21
    ctx->pc = 0x4f8e2cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[21] = ctx->f[22] / ctx->f[21];
label_4f8e30:
    // 0x4f8e30: 0x0  nop
    ctx->pc = 0x4f8e30u;
    // NOP
label_4f8e34:
    // 0x4f8e34: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x4f8e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_4f8e38:
    // 0x4f8e38: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4f8e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8e3c:
    // 0x4f8e3c: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_4f8e40:
    if (ctx->pc == 0x4F8E40u) {
        ctx->pc = 0x4F8E44u;
        goto label_4f8e44;
    }
    ctx->pc = 0x4F8E3Cu;
    {
        const bool branch_taken_0x4f8e3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8e3c) {
            ctx->pc = 0x4F8E94u;
            goto label_4f8e94;
        }
    }
    ctx->pc = 0x4F8E44u;
label_4f8e44:
    // 0x4f8e44: 0xc6800de8  lwc1        $f0, 0xDE8($s4)
    ctx->pc = 0x4f8e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f8e48:
    // 0x4f8e48: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f8e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8e4c:
    // 0x4f8e4c: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_4f8e50:
    if (ctx->pc == 0x4F8E50u) {
        ctx->pc = 0x4F8E50u;
            // 0x4f8e50: 0xc60200ac  lwc1        $f2, 0xAC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4F8E54u;
        goto label_4f8e54;
    }
    ctx->pc = 0x4F8E4Cu;
    {
        const bool branch_taken_0x4f8e4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8e4c) {
            ctx->pc = 0x4F8E50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8E4Cu;
            // 0x4f8e50: 0xc60200ac  lwc1        $f2, 0xAC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EE4u;
            goto label_4f8ee4;
        }
    }
    ctx->pc = 0x4F8E54u;
label_4f8e54:
    // 0x4f8e54: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x4f8e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
label_4f8e58:
    // 0x4f8e58: 0xc049820  jal         func_126080
label_4f8e5c:
    if (ctx->pc == 0x4F8E5Cu) {
        ctx->pc = 0x4F8E5Cu;
            // 0x4f8e5c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4F8E60u;
        goto label_4f8e60;
    }
    ctx->pc = 0x4F8E58u;
    SET_GPR_U32(ctx, 31, 0x4F8E60u);
    ctx->pc = 0x4F8E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8E58u;
            // 0x4f8e5c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8E60u; }
        if (ctx->pc != 0x4F8E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F8E60u; }
        if (ctx->pc != 0x4F8E60u) { return; }
    }
    ctx->pc = 0x4F8E60u;
label_4f8e60:
    // 0x4f8e60: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4f8e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4f8e64:
    // 0x4f8e64: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_4f8e68:
    if (ctx->pc == 0x4F8E68u) {
        ctx->pc = 0x4F8E6Cu;
        goto label_4f8e6c;
    }
    ctx->pc = 0x4F8E64u;
    {
        const bool branch_taken_0x4f8e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8e64) {
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8E6Cu;
label_4f8e6c:
    // 0x4f8e6c: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x4f8e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f8e70:
    // 0x4f8e70: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_4f8e74:
    if (ctx->pc == 0x4F8E74u) {
        ctx->pc = 0x4F8E74u;
            // 0x4f8e74: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4F8E78u;
        goto label_4f8e78;
    }
    ctx->pc = 0x4F8E70u;
    {
        const bool branch_taken_0x4f8e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8e70) {
            ctx->pc = 0x4F8E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8E70u;
            // 0x4f8e74: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8E78u;
label_4f8e78:
    // 0x4f8e78: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4f8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4f8e7c:
    // 0x4f8e7c: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f8e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f8e80:
    // 0x4f8e80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8e84:
    // 0x4f8e84: 0x0  nop
    ctx->pc = 0x4f8e84u;
    // NOP
label_4f8e88:
    // 0x4f8e88: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4f8e88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4f8e8c:
    // 0x4f8e8c: 0x10000014  b           . + 4 + (0x14 << 2)
label_4f8e90:
    if (ctx->pc == 0x4F8E90u) {
        ctx->pc = 0x4F8E90u;
            // 0x4f8e90: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4F8E94u;
        goto label_4f8e94;
    }
    ctx->pc = 0x4F8E8Cu;
    {
        const bool branch_taken_0x4f8e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F8E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8E8Cu;
            // 0x4f8e90: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8e8c) {
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8E94u;
label_4f8e94:
    // 0x4f8e94: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4f8e94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8e98:
    // 0x4f8e98: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_4f8e9c:
    if (ctx->pc == 0x4F8E9Cu) {
        ctx->pc = 0x4F8EA0u;
        goto label_4f8ea0;
    }
    ctx->pc = 0x4F8E98u;
    {
        const bool branch_taken_0x4f8e98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8e98) {
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8EA0u;
label_4f8ea0:
    // 0x4f8ea0: 0xc6800df4  lwc1        $f0, 0xDF4($s4)
    ctx->pc = 0x4f8ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f8ea4:
    // 0x4f8ea4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4f8ea4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8ea8:
    // 0x4f8ea8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4f8eac:
    if (ctx->pc == 0x4F8EACu) {
        ctx->pc = 0x4F8EB0u;
        goto label_4f8eb0;
    }
    ctx->pc = 0x4F8EA8u;
    {
        const bool branch_taken_0x4f8ea8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8ea8) {
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8EB0u;
label_4f8eb0:
    // 0x4f8eb0: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x4f8eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f8eb4:
    // 0x4f8eb4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4f8eb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8eb8:
    // 0x4f8eb8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_4f8ebc:
    if (ctx->pc == 0x4F8EBCu) {
        ctx->pc = 0x4F8EC0u;
        goto label_4f8ec0;
    }
    ctx->pc = 0x4F8EB8u;
    {
        const bool branch_taken_0x4f8eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8eb8) {
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8EC0u;
label_4f8ec0:
    // 0x4f8ec0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4f8ec4:
    if (ctx->pc == 0x4F8EC4u) {
        ctx->pc = 0x4F8EC4u;
            // 0x4f8ec4: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4F8EC8u;
        goto label_4f8ec8;
    }
    ctx->pc = 0x4F8EC0u;
    {
        const bool branch_taken_0x4f8ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f8ec0) {
            ctx->pc = 0x4F8EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8EC0u;
            // 0x4f8ec4: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8EE0u;
            goto label_4f8ee0;
        }
    }
    ctx->pc = 0x4F8EC8u;
label_4f8ec8:
    // 0x4f8ec8: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4f8ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4f8ecc:
    // 0x4f8ecc: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f8eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f8ed0:
    // 0x4f8ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8ed4:
    // 0x4f8ed4: 0x0  nop
    ctx->pc = 0x4f8ed4u;
    // NOP
label_4f8ed8:
    // 0x4f8ed8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4f8ed8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4f8edc:
    // 0x4f8edc: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4f8edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4f8ee0:
    // 0x4f8ee0: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x4f8ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f8ee4:
    // 0x4f8ee4: 0xc6830de4  lwc1        $f3, 0xDE4($s4)
    ctx->pc = 0x4f8ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f8ee8:
    // 0x4f8ee8: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4f8ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8eec:
    // 0x4f8eec: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4f8ef0:
    if (ctx->pc == 0x4F8EF0u) {
        ctx->pc = 0x4F8EF0u;
            // 0x4f8ef0: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4F8EF4u;
        goto label_4f8ef4;
    }
    ctx->pc = 0x4F8EECu;
    {
        const bool branch_taken_0x4f8eec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8eec) {
            ctx->pc = 0x4F8EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8EECu;
            // 0x4f8ef0: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F8F14u;
            goto label_4f8f14;
        }
    }
    ctx->pc = 0x4F8EF4u;
label_4f8ef4:
    // 0x4f8ef4: 0xc6810df4  lwc1        $f1, 0xDF4($s4)
    ctx->pc = 0x4f8ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f8ef8:
    // 0x4f8ef8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f8ef8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8efc:
    // 0x4f8efc: 0x0  nop
    ctx->pc = 0x4f8efcu;
    // NOP
label_4f8f00:
    // 0x4f8f00: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f8f00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8f04:
    // 0x4f8f04: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4f8f08:
    if (ctx->pc == 0x4F8F08u) {
        ctx->pc = 0x4F8F0Cu;
        goto label_4f8f0c;
    }
    ctx->pc = 0x4F8F04u;
    {
        const bool branch_taken_0x4f8f04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8f04) {
            ctx->pc = 0x4F8F10u;
            goto label_4f8f10;
        }
    }
    ctx->pc = 0x4F8F0Cu;
label_4f8f0c:
    // 0x4f8f0c: 0xe6820de4  swc1        $f2, 0xDE4($s4)
    ctx->pc = 0x4f8f0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4f8f10:
    // 0x4f8f10: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4f8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4f8f14:
    // 0x4f8f14: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4f8f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4f8f18:
    // 0x4f8f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f8f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f8f1c:
    // 0x4f8f1c: 0x0  nop
    ctx->pc = 0x4f8f1cu;
    // NOP
label_4f8f20:
    // 0x4f8f20: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4f8f20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f8f24:
    // 0x4f8f24: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4f8f28:
    if (ctx->pc == 0x4F8F28u) {
        ctx->pc = 0x4F8F2Cu;
        goto label_4f8f2c;
    }
    ctx->pc = 0x4F8F24u;
    {
        const bool branch_taken_0x4f8f24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f8f24) {
            ctx->pc = 0x4F8F30u;
            goto label_4f8f30;
        }
    }
    ctx->pc = 0x4F8F2Cu;
label_4f8f2c:
    // 0x4f8f2c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4f8f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f8f30:
    // 0x4f8f30: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4f8f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4f8f34:
    // 0x4f8f34: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4f8f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4f8f38:
    // 0x4f8f38: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4f8f38u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f8f3c:
    // 0x4f8f3c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4f8f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4f8f40:
    // 0x4f8f40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4f8f40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f8f44:
    // 0x4f8f44: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4f8f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4f8f48:
    // 0x4f8f48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4f8f48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f8f4c:
    // 0x4f8f4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f8f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f8f50:
    // 0x4f8f50: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f8f50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f8f54:
    // 0x4f8f54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f8f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f8f58:
    // 0x4f8f58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f8f58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f8f5c:
    // 0x4f8f5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f8f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f8f60:
    // 0x4f8f60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f8f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f8f64:
    // 0x4f8f64: 0x3e00008  jr          $ra
label_4f8f68:
    if (ctx->pc == 0x4F8F68u) {
        ctx->pc = 0x4F8F68u;
            // 0x4f8f68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F8F6Cu;
        goto label_4f8f6c;
    }
    ctx->pc = 0x4F8F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F8F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8F64u;
            // 0x4f8f68: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F8F6Cu;
label_4f8f6c:
    // 0x4f8f6c: 0x0  nop
    ctx->pc = 0x4f8f6cu;
    // NOP
label_4f8f70:
    // 0x4f8f70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4f8f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4f8f74:
    // 0x4f8f74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f8f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f8f78:
    // 0x4f8f78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4f8f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4f8f7c:
    // 0x4f8f7c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4f8f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4f8f80:
    // 0x4f8f80: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4f8f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4f8f84:
    // 0x4f8f84: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f8f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4f8f88:
    // 0x4f8f88: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f8f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f8f8c:
    // 0x4f8f8c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f8f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f8f90:
    // 0x4f8f90: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f8f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f8f94:
    // 0x4f8f94: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f8f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f8f98:
    // 0x4f8f98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f8f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f8f9c:
    // 0x4f8f9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f8fa0:
    // 0x4f8fa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f8fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f8fa4:
    // 0x4f8fa4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4f8fa4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4f8fa8:
    // 0x4f8fa8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4f8fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f8fac:
    // 0x4f8fac: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4f8facu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4f8fb0:
    // 0x4f8fb0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4f8fb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4f8fb4:
    // 0x4f8fb4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f8fb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f8fb8:
    // 0x4f8fb8: 0x8c540e80  lw          $s4, 0xE80($v0)
    ctx->pc = 0x4f8fb8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4f8fbc:
    // 0x4f8fbc: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x4f8fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f8fc0:
    // 0x4f8fc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f8fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f8fc4:
    // 0x4f8fc4: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4f8fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4f8fc8:
    // 0x4f8fc8: 0x26760c6c  addiu       $s6, $s3, 0xC6C
    ctx->pc = 0x4f8fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 3180));
label_4f8fcc:
    // 0x4f8fcc: 0x96630c7e  lhu         $v1, 0xC7E($s3)
    ctx->pc = 0x4f8fccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3198)));
label_4f8fd0:
    // 0x4f8fd0: 0x8c92012c  lw          $s2, 0x12C($a0)
    ctx->pc = 0x4f8fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_4f8fd4:
    // 0x4f8fd4: 0x8e620da0  lw          $v0, 0xDA0($s3)
    ctx->pc = 0x4f8fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_4f8fd8:
    // 0x4f8fd8: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x4f8fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4f8fdc:
    // 0x4f8fdc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x4f8fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f8fe0:
    // 0x4f8fe0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f8fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4f8fe4:
    // 0x4f8fe4: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4f8fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4f8fe8:
    // 0x4f8fe8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4f8fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4f8fec:
    // 0x4f8fec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f8ff0:
    // 0x4f8ff0: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x4f8ff0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_4f8ff4:
    // 0x4f8ff4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4f8ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4f8ff8:
    // 0x4f8ff8: 0x14400244  bnez        $v0, . + 4 + (0x244 << 2)
label_4f8ffc:
    if (ctx->pc == 0x4F8FFCu) {
        ctx->pc = 0x4F8FFCu;
            // 0x4f8ffc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x4F9000u;
        goto label_4f9000;
    }
    ctx->pc = 0x4F8FF8u;
    {
        const bool branch_taken_0x4f8ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F8FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F8FF8u;
            // 0x4f8ffc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f8ff8) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9000u;
label_4f9000:
    // 0x4f9000: 0x8e630db0  lw          $v1, 0xDB0($s3)
    ctx->pc = 0x4f9000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_4f9004:
    // 0x4f9004: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f9004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f9008:
    // 0x4f9008: 0x50620241  beql        $v1, $v0, . + 4 + (0x241 << 2)
label_4f900c:
    if (ctx->pc == 0x4F900Cu) {
        ctx->pc = 0x4F900Cu;
            // 0x4f900c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F9010u;
        goto label_4f9010;
    }
    ctx->pc = 0x4F9008u;
    {
        const bool branch_taken_0x4f9008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f9008) {
            ctx->pc = 0x4F900Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9008u;
            // 0x4f900c: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9910u;
            goto label_4f9910;
        }
    }
    ctx->pc = 0x4F9010u;
label_4f9010:
    // 0x4f9010: 0xc4d50018  lwc1        $f21, 0x18($a2)
    ctx->pc = 0x4f9010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4f9014:
    // 0x4f9014: 0xc6740de4  lwc1        $f20, 0xDE4($s3)
    ctx->pc = 0x4f9014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f9018:
    // 0x4f9018: 0xc04cc1c  jal         func_133070
label_4f901c:
    if (ctx->pc == 0x4F901Cu) {
        ctx->pc = 0x4F901Cu;
            // 0x4f901c: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x4F9020u;
        goto label_4f9020;
    }
    ctx->pc = 0x4F9018u;
    SET_GPR_U32(ctx, 31, 0x4F9020u);
    ctx->pc = 0x4F901Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9018u;
            // 0x4f901c: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9020u; }
        if (ctx->pc != 0x4F9020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9020u; }
        if (ctx->pc != 0x4F9020u) { return; }
    }
    ctx->pc = 0x4F9020u;
label_4f9020:
    // 0x4f9020: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x4f9020u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f9024:
    // 0x4f9024: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f9024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f9028:
    // 0x4f9028: 0x96c20012  lhu         $v0, 0x12($s6)
    ctx->pc = 0x4f9028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
label_4f902c:
    // 0x4f902c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4f902cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f9030:
    // 0x4f9030: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4f9030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4f9034:
    // 0x4f9034: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x4f9034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4f9038:
    // 0x4f9038: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x4f9038u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4f903c:
    // 0x4f903c: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4f903cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4f9040:
    // 0x4f9040: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f9040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f9044:
    // 0x4f9044: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f9044u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4f9048:
    // 0x4f9048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4f9048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f904c:
    // 0x4f904c: 0xc0c5f94  jal         func_317E50
label_4f9050:
    if (ctx->pc == 0x4F9050u) {
        ctx->pc = 0x4F9050u;
            // 0x4f9050: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4F9054u;
        goto label_4f9054;
    }
    ctx->pc = 0x4F904Cu;
    SET_GPR_U32(ctx, 31, 0x4F9054u);
    ctx->pc = 0x4F9050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F904Cu;
            // 0x4f9050: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317E50u;
    if (runtime->hasFunction(0x317E50u)) {
        auto targetFn = runtime->lookupFunction(0x317E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9054u; }
        if (ctx->pc != 0x4F9054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317E50_0x317e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9054u; }
        if (ctx->pc != 0x4F9054u) { return; }
    }
    ctx->pc = 0x4F9054u;
label_4f9054:
    // 0x4f9054: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4f9054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4f9058:
    // 0x4f9058: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4f9058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4f905c:
    // 0x4f905c: 0xc04cc90  jal         func_133240
label_4f9060:
    if (ctx->pc == 0x4F9060u) {
        ctx->pc = 0x4F9060u;
            // 0x4f9060: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F9064u;
        goto label_4f9064;
    }
    ctx->pc = 0x4F905Cu;
    SET_GPR_U32(ctx, 31, 0x4F9064u);
    ctx->pc = 0x4F9060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F905Cu;
            // 0x4f9060: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9064u; }
        if (ctx->pc != 0x4F9064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9064u; }
        if (ctx->pc != 0x4F9064u) { return; }
    }
    ctx->pc = 0x4F9064u;
label_4f9064:
    // 0x4f9064: 0xc04cc2c  jal         func_1330B0
label_4f9068:
    if (ctx->pc == 0x4F9068u) {
        ctx->pc = 0x4F9068u;
            // 0x4f9068: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4F906Cu;
        goto label_4f906c;
    }
    ctx->pc = 0x4F9064u;
    SET_GPR_U32(ctx, 31, 0x4F906Cu);
    ctx->pc = 0x4F9068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9064u;
            // 0x4f9068: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F906Cu; }
        if (ctx->pc != 0x4F906Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F906Cu; }
        if (ctx->pc != 0x4F906Cu) { return; }
    }
    ctx->pc = 0x4F906Cu;
label_4f906c:
    // 0x4f906c: 0x0  nop
    ctx->pc = 0x4f906cu;
    // NOP
label_4f9070:
    // 0x4f9070: 0x0  nop
    ctx->pc = 0x4f9070u;
    // NOP
label_4f9074:
    // 0x4f9074: 0x46000044  c1          0x44
    ctx->pc = 0x4f9074u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_4f9078:
    // 0x4f9078: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4f9078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f907c:
    // 0x4f907c: 0x96c50012  lhu         $a1, 0x12($s6)
    ctx->pc = 0x4f907cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
label_4f9080:
    // 0x4f9080: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4f9080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4f9084:
    // 0x4f9084: 0x8e830968  lw          $v1, 0x968($s4)
    ctx->pc = 0x4f9084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_4f9088:
    // 0x4f9088: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4f9088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4f908c:
    // 0x4f908c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4f908cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4f9090:
    // 0x4f9090: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9094:
    // 0x4f9094: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x4f9094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f9098:
    // 0x4f9098: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_4f909c:
    if (ctx->pc == 0x4F909Cu) {
        ctx->pc = 0x4F909Cu;
            // 0x4f909c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F90A0u;
        goto label_4f90a0;
    }
    ctx->pc = 0x4F9098u;
    {
        const bool branch_taken_0x4f9098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F909Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9098u;
            // 0x4f909c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9098) {
            ctx->pc = 0x4F90C0u;
            goto label_4f90c0;
        }
    }
    ctx->pc = 0x4F90A0u;
label_4f90a0:
    // 0x4f90a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4f90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f90a4:
    // 0x4f90a4: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4f90a8:
    if (ctx->pc == 0x4F90A8u) {
        ctx->pc = 0x4F90A8u;
            // 0x4f90a8: 0x3c02430c  lui         $v0, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
        ctx->pc = 0x4F90ACu;
        goto label_4f90ac;
    }
    ctx->pc = 0x4F90A4u;
    {
        const bool branch_taken_0x4f90a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f90a4) {
            ctx->pc = 0x4F90A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F90A4u;
            // 0x4f90a8: 0x3c02430c  lui         $v0, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F90B4u;
            goto label_4f90b4;
        }
    }
    ctx->pc = 0x4F90ACu;
label_4f90ac:
    // 0x4f90ac: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f90b0:
    if (ctx->pc == 0x4F90B0u) {
        ctx->pc = 0x4F90B0u;
            // 0x4f90b0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->pc = 0x4F90B4u;
        goto label_4f90b4;
    }
    ctx->pc = 0x4F90ACu;
    {
        const bool branch_taken_0x4f90ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F90B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F90ACu;
            // 0x4f90b0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f90ac) {
            ctx->pc = 0x4F90D4u;
            goto label_4f90d4;
        }
    }
    ctx->pc = 0x4F90B4u;
label_4f90b4:
    // 0x4f90b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f90b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f90b8:
    // 0x4f90b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f90bc:
    if (ctx->pc == 0x4F90BCu) {
        ctx->pc = 0x4F90BCu;
            // 0x4f90bc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F90C0u;
        goto label_4f90c0;
    }
    ctx->pc = 0x4F90B8u;
    {
        const bool branch_taken_0x4f90b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F90BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F90B8u;
            // 0x4f90bc: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f90b8) {
            ctx->pc = 0x4F90D0u;
            goto label_4f90d0;
        }
    }
    ctx->pc = 0x4F90C0u;
label_4f90c0:
    // 0x4f90c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4f90c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4f90c4:
    // 0x4f90c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f90c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f90c8:
    // 0x4f90c8: 0x0  nop
    ctx->pc = 0x4f90c8u;
    // NOP
label_4f90cc:
    // 0x4f90cc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4f90ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f90d0:
    // 0x4f90d0: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x4f90d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4f90d4:
    // 0x4f90d4: 0x4601ad81  sub.s       $f22, $f21, $f1
    ctx->pc = 0x4f90d4u;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_4f90d8:
    // 0x4f90d8: 0x38440003  xori        $a0, $v0, 0x3
    ctx->pc = 0x4f90d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_4f90dc:
    // 0x4f90dc: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x4f90dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_4f90e0:
    // 0x4f90e0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f90e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f90e4:
    // 0x4f90e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4f90e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f90e8:
    // 0x4f90e8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x4f90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4f90ec:
    // 0x4f90ec: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x4f90ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f90f0:
    // 0x4f90f0: 0x50400080  beql        $v0, $zero, . + 4 + (0x80 << 2)
label_4f90f4:
    if (ctx->pc == 0x4F90F4u) {
        ctx->pc = 0x4F90F4u;
            // 0x4f90f4: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->pc = 0x4F90F8u;
        goto label_4f90f8;
    }
    ctx->pc = 0x4F90F0u;
    {
        const bool branch_taken_0x4f90f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f90f0) {
            ctx->pc = 0x4F90F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F90F0u;
            // 0x4f90f4: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F92F4u;
            goto label_4f92f4;
        }
    }
    ctx->pc = 0x4F90F8u;
label_4f90f8:
    // 0x4f90f8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4f90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f90fc:
    // 0x4f90fc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4f90fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f9100:
    // 0x4f9100: 0x5082006a  beql        $a0, $v0, . + 4 + (0x6A << 2)
label_4f9104:
    if (ctx->pc == 0x4F9104u) {
        ctx->pc = 0x4F9104u;
            // 0x4f9104: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x4F9108u;
        goto label_4f9108;
    }
    ctx->pc = 0x4F9100u;
    {
        const bool branch_taken_0x4f9100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f9100) {
            ctx->pc = 0x4F9104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9100u;
            // 0x4f9104: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F92ACu;
            goto label_4f92ac;
        }
    }
    ctx->pc = 0x4F9108u;
label_4f9108:
    // 0x4f9108: 0x2c610011  sltiu       $at, $v1, 0x11
    ctx->pc = 0x4f9108u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4f910c:
    // 0x4f910c: 0x50200063  beql        $at, $zero, . + 4 + (0x63 << 2)
label_4f9110:
    if (ctx->pc == 0x4F9110u) {
        ctx->pc = 0x4F9110u;
            // 0x4f9110: 0x3c023d97  lui         $v0, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
        ctx->pc = 0x4F9114u;
        goto label_4f9114;
    }
    ctx->pc = 0x4F910Cu;
    {
        const bool branch_taken_0x4f910c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f910c) {
            ctx->pc = 0x4F9110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F910Cu;
            // 0x4f9110: 0x3c023d97  lui         $v0, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F929Cu;
            goto label_4f929c;
        }
    }
    ctx->pc = 0x4F9114u;
label_4f9114:
    // 0x4f9114: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4f9114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4f9118:
    // 0x4f9118: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f9118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f911c:
    // 0x4f911c: 0x24848bf0  addiu       $a0, $a0, -0x7410
    ctx->pc = 0x4f911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937584));
label_4f9120:
    // 0x4f9120: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f9124:
    // 0x4f9124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f9124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f9128:
    // 0x4f9128: 0x400008  jr          $v0
label_4f912c:
    if (ctx->pc == 0x4F912Cu) {
        ctx->pc = 0x4F9130u;
        goto label_4f9130;
    }
    ctx->pc = 0x4F9128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4F9130u: goto label_4f9130;
            case 0x4F916Cu: goto label_4f916c;
            case 0x4F9180u: goto label_4f9180;
            case 0x4F9194u: goto label_4f9194;
            case 0x4F91A8u: goto label_4f91a8;
            case 0x4F91BCu: goto label_4f91bc;
            case 0x4F91D0u: goto label_4f91d0;
            case 0x4F91E4u: goto label_4f91e4;
            case 0x4F91F8u: goto label_4f91f8;
            case 0x4F920Cu: goto label_4f920c;
            case 0x4F9220u: goto label_4f9220;
            case 0x4F9234u: goto label_4f9234;
            case 0x4F9248u: goto label_4f9248;
            case 0x4F925Cu: goto label_4f925c;
            case 0x4F9270u: goto label_4f9270;
            case 0x4F9284u: goto label_4f9284;
            case 0x4F9298u: goto label_4f9298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4F9130u;
label_4f9130:
    // 0x4f9130: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4f9130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4f9134:
    // 0x4f9134: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4f9134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4f9138:
    // 0x4f9138: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x4f9138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_4f913c:
    // 0x4f913c: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4f913cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4f9140:
    // 0x4f9140: 0x54820006  bnel        $a0, $v0, . + 4 + (0x6 << 2)
label_4f9144:
    if (ctx->pc == 0x4F9144u) {
        ctx->pc = 0x4F9144u;
            // 0x4f9144: 0x3c023dd0  lui         $v0, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15824 << 16));
        ctx->pc = 0x4F9148u;
        goto label_4f9148;
    }
    ctx->pc = 0x4F9140u;
    {
        const bool branch_taken_0x4f9140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f9140) {
            ctx->pc = 0x4F9144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9140u;
            // 0x4f9144: 0x3c023dd0  lui         $v0, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15824 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F915Cu;
            goto label_4f915c;
        }
    }
    ctx->pc = 0x4F9148u;
label_4f9148:
    // 0x4f9148: 0x3c023de3  lui         $v0, 0x3DE3
    ctx->pc = 0x4f9148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15843 << 16));
label_4f914c:
    // 0x4f914c: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f9150:
    // 0x4f9150: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9154:
    // 0x4f9154: 0x10000066  b           . + 4 + (0x66 << 2)
label_4f9158:
    if (ctx->pc == 0x4F9158u) {
        ctx->pc = 0x4F915Cu;
        goto label_4f915c;
    }
    ctx->pc = 0x4F9154u;
    {
        const bool branch_taken_0x4f9154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9154) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F915Cu;
label_4f915c:
    // 0x4f915c: 0x344297b4  ori         $v0, $v0, 0x97B4
    ctx->pc = 0x4f915cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38836);
label_4f9160:
    // 0x4f9160: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9164:
    // 0x4f9164: 0x10000062  b           . + 4 + (0x62 << 2)
label_4f9168:
    if (ctx->pc == 0x4F9168u) {
        ctx->pc = 0x4F916Cu;
        goto label_4f916c;
    }
    ctx->pc = 0x4F9164u;
    {
        const bool branch_taken_0x4f9164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9164) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F916Cu;
label_4f916c:
    // 0x4f916c: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x4f916cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_4f9170:
    // 0x4f9170: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4f9170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4f9174:
    // 0x4f9174: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9178:
    // 0x4f9178: 0x1000005d  b           . + 4 + (0x5D << 2)
label_4f917c:
    if (ctx->pc == 0x4F917Cu) {
        ctx->pc = 0x4F9180u;
        goto label_4f9180;
    }
    ctx->pc = 0x4F9178u;
    {
        const bool branch_taken_0x4f9178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9178) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9180u;
label_4f9180:
    // 0x4f9180: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x4f9180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_4f9184:
    // 0x4f9184: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x4f9184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_4f9188:
    // 0x4f9188: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f918c:
    // 0x4f918c: 0x10000058  b           . + 4 + (0x58 << 2)
label_4f9190:
    if (ctx->pc == 0x4F9190u) {
        ctx->pc = 0x4F9194u;
        goto label_4f9194;
    }
    ctx->pc = 0x4F918Cu;
    {
        const bool branch_taken_0x4f918c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f918c) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9194u;
label_4f9194:
    // 0x4f9194: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x4f9194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
label_4f9198:
    // 0x4f9198: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f9198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f919c:
    // 0x4f919c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f919cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f91a0:
    // 0x4f91a0: 0x10000053  b           . + 4 + (0x53 << 2)
label_4f91a4:
    if (ctx->pc == 0x4F91A4u) {
        ctx->pc = 0x4F91A8u;
        goto label_4f91a8;
    }
    ctx->pc = 0x4F91A0u;
    {
        const bool branch_taken_0x4f91a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f91a0) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F91A8u;
label_4f91a8:
    // 0x4f91a8: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x4f91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
label_4f91ac:
    // 0x4f91ac: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f91acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f91b0:
    // 0x4f91b0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f91b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f91b4:
    // 0x4f91b4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_4f91b8:
    if (ctx->pc == 0x4F91B8u) {
        ctx->pc = 0x4F91BCu;
        goto label_4f91bc;
    }
    ctx->pc = 0x4F91B4u;
    {
        const bool branch_taken_0x4f91b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f91b4) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F91BCu;
label_4f91bc:
    // 0x4f91bc: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x4f91bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_4f91c0:
    // 0x4f91c0: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x4f91c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_4f91c4:
    // 0x4f91c4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f91c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f91c8:
    // 0x4f91c8: 0x10000049  b           . + 4 + (0x49 << 2)
label_4f91cc:
    if (ctx->pc == 0x4F91CCu) {
        ctx->pc = 0x4F91D0u;
        goto label_4f91d0;
    }
    ctx->pc = 0x4F91C8u;
    {
        const bool branch_taken_0x4f91c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f91c8) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F91D0u;
label_4f91d0:
    // 0x4f91d0: 0x3c023d17  lui         $v0, 0x3D17
    ctx->pc = 0x4f91d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15639 << 16));
label_4f91d4:
    // 0x4f91d4: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f91d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f91d8:
    // 0x4f91d8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f91d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f91dc:
    // 0x4f91dc: 0x10000044  b           . + 4 + (0x44 << 2)
label_4f91e0:
    if (ctx->pc == 0x4F91E0u) {
        ctx->pc = 0x4F91E4u;
        goto label_4f91e4;
    }
    ctx->pc = 0x4F91DCu;
    {
        const bool branch_taken_0x4f91dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f91dc) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F91E4u;
label_4f91e4:
    // 0x4f91e4: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f91e8:
    // 0x4f91e8: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f91e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f91ec:
    // 0x4f91ec: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f91ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f91f0:
    // 0x4f91f0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4f91f4:
    if (ctx->pc == 0x4F91F4u) {
        ctx->pc = 0x4F91F8u;
        goto label_4f91f8;
    }
    ctx->pc = 0x4F91F0u;
    {
        const bool branch_taken_0x4f91f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f91f0) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F91F8u;
label_4f91f8:
    // 0x4f91f8: 0x3c023d63  lui         $v0, 0x3D63
    ctx->pc = 0x4f91f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15715 << 16));
label_4f91fc:
    // 0x4f91fc: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f91fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f9200:
    // 0x4f9200: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9204:
    // 0x4f9204: 0x1000003a  b           . + 4 + (0x3A << 2)
label_4f9208:
    if (ctx->pc == 0x4F9208u) {
        ctx->pc = 0x4F920Cu;
        goto label_4f920c;
    }
    ctx->pc = 0x4F9204u;
    {
        const bool branch_taken_0x4f9204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9204) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F920Cu;
label_4f920c:
    // 0x4f920c: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f920cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9210:
    // 0x4f9210: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9214:
    // 0x4f9214: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9218:
    // 0x4f9218: 0x10000035  b           . + 4 + (0x35 << 2)
label_4f921c:
    if (ctx->pc == 0x4F921Cu) {
        ctx->pc = 0x4F9220u;
        goto label_4f9220;
    }
    ctx->pc = 0x4F9218u;
    {
        const bool branch_taken_0x4f9218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9218) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9220u;
label_4f9220:
    // 0x4f9220: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9224:
    // 0x4f9224: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9228:
    // 0x4f9228: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f922c:
    // 0x4f922c: 0x10000030  b           . + 4 + (0x30 << 2)
label_4f9230:
    if (ctx->pc == 0x4F9230u) {
        ctx->pc = 0x4F9234u;
        goto label_4f9234;
    }
    ctx->pc = 0x4F922Cu;
    {
        const bool branch_taken_0x4f922c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f922c) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9234u;
label_4f9234:
    // 0x4f9234: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9238:
    // 0x4f9238: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f923c:
    // 0x4f923c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f923cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9240:
    // 0x4f9240: 0x1000002b  b           . + 4 + (0x2B << 2)
label_4f9244:
    if (ctx->pc == 0x4F9244u) {
        ctx->pc = 0x4F9248u;
        goto label_4f9248;
    }
    ctx->pc = 0x4F9240u;
    {
        const bool branch_taken_0x4f9240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9240) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9248u;
label_4f9248:
    // 0x4f9248: 0x3c023d63  lui         $v0, 0x3D63
    ctx->pc = 0x4f9248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15715 << 16));
label_4f924c:
    // 0x4f924c: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f924cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f9250:
    // 0x4f9250: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9250u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9254:
    // 0x4f9254: 0x10000026  b           . + 4 + (0x26 << 2)
label_4f9258:
    if (ctx->pc == 0x4F9258u) {
        ctx->pc = 0x4F925Cu;
        goto label_4f925c;
    }
    ctx->pc = 0x4F9254u;
    {
        const bool branch_taken_0x4f9254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9254) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F925Cu;
label_4f925c:
    // 0x4f925c: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f925cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9260:
    // 0x4f9260: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9264:
    // 0x4f9264: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9268:
    // 0x4f9268: 0x10000021  b           . + 4 + (0x21 << 2)
label_4f926c:
    if (ctx->pc == 0x4F926Cu) {
        ctx->pc = 0x4F9270u;
        goto label_4f9270;
    }
    ctx->pc = 0x4F9268u;
    {
        const bool branch_taken_0x4f9268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9268) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9270u;
label_4f9270:
    // 0x4f9270: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x4f9270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_4f9274:
    // 0x4f9274: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x4f9274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_4f9278:
    // 0x4f9278: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f927c:
    // 0x4f927c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4f9280:
    if (ctx->pc == 0x4F9280u) {
        ctx->pc = 0x4F9284u;
        goto label_4f9284;
    }
    ctx->pc = 0x4F927Cu;
    {
        const bool branch_taken_0x4f927c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f927c) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9284u;
label_4f9284:
    // 0x4f9284: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9288:
    // 0x4f9288: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f928c:
    // 0x4f928c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f928cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9290:
    // 0x4f9290: 0x10000017  b           . + 4 + (0x17 << 2)
label_4f9294:
    if (ctx->pc == 0x4F9294u) {
        ctx->pc = 0x4F9298u;
        goto label_4f9298;
    }
    ctx->pc = 0x4F9290u;
    {
        const bool branch_taken_0x4f9290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9290) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F9298u;
label_4f9298:
    // 0x4f9298: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f929c:
    // 0x4f929c: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f92a0:
    // 0x4f92a0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f92a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f92a4:
    // 0x4f92a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_4f92a8:
    if (ctx->pc == 0x4F92A8u) {
        ctx->pc = 0x4F92ACu;
        goto label_4f92ac;
    }
    ctx->pc = 0x4F92A4u;
    {
        const bool branch_taken_0x4f92a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f92a4) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F92ACu;
label_4f92ac:
    // 0x4f92ac: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_4f92b0:
    if (ctx->pc == 0x4F92B0u) {
        ctx->pc = 0x4F92B0u;
            // 0x4f92b0: 0x3c02bce3  lui         $v0, 0xBCE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48355 << 16));
        ctx->pc = 0x4F92B4u;
        goto label_4f92b4;
    }
    ctx->pc = 0x4F92ACu;
    {
        const bool branch_taken_0x4f92ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f92ac) {
            ctx->pc = 0x4F92B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F92ACu;
            // 0x4f92b0: 0x3c02bce3  lui         $v0, 0xBCE3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48355 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F92D8u;
            goto label_4f92d8;
        }
    }
    ctx->pc = 0x4F92B4u;
label_4f92b4:
    // 0x4f92b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4f92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f92b8:
    // 0x4f92b8: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_4f92bc:
    if (ctx->pc == 0x4F92BCu) {
        ctx->pc = 0x4F92BCu;
            // 0x4f92bc: 0x3c02bdaa  lui         $v0, 0xBDAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48554 << 16));
        ctx->pc = 0x4F92C0u;
        goto label_4f92c0;
    }
    ctx->pc = 0x4F92B8u;
    {
        const bool branch_taken_0x4f92b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f92b8) {
            ctx->pc = 0x4F92BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F92B8u;
            // 0x4f92bc: 0x3c02bdaa  lui         $v0, 0xBDAA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48554 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F92C8u;
            goto label_4f92c8;
        }
    }
    ctx->pc = 0x4F92C0u;
label_4f92c0:
    // 0x4f92c0: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f92c4:
    if (ctx->pc == 0x4F92C4u) {
        ctx->pc = 0x4F92C4u;
            // 0x4f92c4: 0x3c02bd97  lui         $v0, 0xBD97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48535 << 16));
        ctx->pc = 0x4F92C8u;
        goto label_4f92c8;
    }
    ctx->pc = 0x4F92C0u;
    {
        const bool branch_taken_0x4f92c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F92C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F92C0u;
            // 0x4f92c4: 0x3c02bd97  lui         $v0, 0xBD97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f92c0) {
            ctx->pc = 0x4F92E8u;
            goto label_4f92e8;
        }
    }
    ctx->pc = 0x4F92C8u;
label_4f92c8:
    // 0x4f92c8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f92c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f92cc:
    // 0x4f92cc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f92ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f92d0:
    // 0x4f92d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f92d4:
    if (ctx->pc == 0x4F92D4u) {
        ctx->pc = 0x4F92D8u;
        goto label_4f92d8;
    }
    ctx->pc = 0x4F92D0u;
    {
        const bool branch_taken_0x4f92d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f92d0) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F92D8u;
label_4f92d8:
    // 0x4f92d8: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f92d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f92dc:
    // 0x4f92dc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f92dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f92e0:
    // 0x4f92e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_4f92e4:
    if (ctx->pc == 0x4F92E4u) {
        ctx->pc = 0x4F92E8u;
        goto label_4f92e8;
    }
    ctx->pc = 0x4F92E0u;
    {
        const bool branch_taken_0x4f92e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f92e0) {
            ctx->pc = 0x4F92F0u;
            goto label_4f92f0;
        }
    }
    ctx->pc = 0x4F92E8u;
label_4f92e8:
    // 0x4f92e8: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f92ec:
    // 0x4f92ec: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f92ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f92f0:
    // 0x4f92f0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x4f92f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f92f4:
    // 0x4f92f4: 0x38450005  xori        $a1, $v0, 0x5
    ctx->pc = 0x4f92f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_4f92f8:
    // 0x4f92f8: 0x38440006  xori        $a0, $v0, 0x6
    ctx->pc = 0x4f92f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_4f92fc:
    // 0x4f92fc: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f92fcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9300:
    // 0x4f9300: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f9300u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9304:
    // 0x4f9304: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f9304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f9308:
    // 0x4f9308: 0x38440009  xori        $a0, $v0, 0x9
    ctx->pc = 0x4f9308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_4f930c:
    // 0x4f930c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4f930cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9310:
    // 0x4f9310: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4f9310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_4f9314:
    // 0x4f9314: 0x50800018  beql        $a0, $zero, . + 4 + (0x18 << 2)
label_4f9318:
    if (ctx->pc == 0x4F9318u) {
        ctx->pc = 0x4F9318u;
            // 0x4f9318: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F931Cu;
        goto label_4f931c;
    }
    ctx->pc = 0x4F9314u;
    {
        const bool branch_taken_0x4f9314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9314) {
            ctx->pc = 0x4F9318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9314u;
            // 0x4f9318: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9378u;
            goto label_4f9378;
        }
    }
    ctx->pc = 0x4F931Cu;
label_4f931c:
    // 0x4f931c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x4f931cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4f9320:
    // 0x4f9320: 0x9226005a  lbu         $a2, 0x5A($s1)
    ctx->pc = 0x4f9320u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4f9324:
    // 0x4f9324: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x4f9324u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4f9328:
    // 0x4f9328: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f9328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f932c:
    // 0x4f932c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f932cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f9330:
    // 0x4f9330: 0x2484d6b8  addiu       $a0, $a0, -0x2948
    ctx->pc = 0x4f9330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956728));
label_4f9334:
    // 0x4f9334: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9338:
    // 0x4f9338: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4f9338u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f933c:
    // 0x4f933c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4f933cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f9340:
    // 0x4f9340: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f9340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f9344:
    // 0x4f9344: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4f9348:
    if (ctx->pc == 0x4F9348u) {
        ctx->pc = 0x4F9348u;
            // 0x4f9348: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4F934Cu;
        goto label_4f934c;
    }
    ctx->pc = 0x4F9344u;
    {
        const bool branch_taken_0x4f9344 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4f9344) {
            ctx->pc = 0x4F9348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9344u;
            // 0x4f9348: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9358u;
            goto label_4f9358;
        }
    }
    ctx->pc = 0x4F934Cu;
label_4f934c:
    // 0x4f934c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f934cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9350:
    // 0x4f9350: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9354:
    if (ctx->pc == 0x4F9354u) {
        ctx->pc = 0x4F9354u;
            // 0x4f9354: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9358u;
        goto label_4f9358;
    }
    ctx->pc = 0x4F9350u;
    {
        const bool branch_taken_0x4f9350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9350u;
            // 0x4f9354: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9350) {
            ctx->pc = 0x4F9370u;
            goto label_4f9370;
        }
    }
    ctx->pc = 0x4F9358u;
label_4f9358:
    // 0x4f9358: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4f9358u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4f935c:
    // 0x4f935c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f935cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f9360:
    // 0x4f9360: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4f9360u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9364:
    // 0x4f9364: 0x0  nop
    ctx->pc = 0x4f9364u;
    // NOP
label_4f9368:
    // 0x4f9368: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4f9368u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4f936c:
    // 0x4f936c: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x4f936cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_4f9370:
    // 0x4f9370: 0x1000005a  b           . + 4 + (0x5A << 2)
label_4f9374:
    if (ctx->pc == 0x4F9374u) {
        ctx->pc = 0x4F9374u;
            // 0x4f9374: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F9378u;
        goto label_4f9378;
    }
    ctx->pc = 0x4F9370u;
    {
        const bool branch_taken_0x4f9370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9370u;
            // 0x4f9374: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9370) {
            ctx->pc = 0x4F94DCu;
            goto label_4f94dc;
        }
    }
    ctx->pc = 0x4F9378u;
label_4f9378:
    // 0x4f9378: 0x54440032  bnel        $v0, $a0, . + 4 + (0x32 << 2)
label_4f937c:
    if (ctx->pc == 0x4F937Cu) {
        ctx->pc = 0x4F937Cu;
            // 0x4f937c: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->pc = 0x4F9380u;
        goto label_4f9380;
    }
    ctx->pc = 0x4F9378u;
    {
        const bool branch_taken_0x4f9378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f9378) {
            ctx->pc = 0x4F937Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9378u;
            // 0x4f937c: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9444u;
            goto label_4f9444;
        }
    }
    ctx->pc = 0x4F9380u;
label_4f9380:
    // 0x4f9380: 0x92850ce4  lbu         $a1, 0xCE4($s4)
    ctx->pc = 0x4f9380u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3300)));
label_4f9384:
    // 0x4f9384: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x4f9384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f9388:
    // 0x4f9388: 0x50a40018  beql        $a1, $a0, . + 4 + (0x18 << 2)
label_4f938c:
    if (ctx->pc == 0x4F938Cu) {
        ctx->pc = 0x4F938Cu;
            // 0x4f938c: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->pc = 0x4F9390u;
        goto label_4f9390;
    }
    ctx->pc = 0x4F9388u;
    {
        const bool branch_taken_0x4f9388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x4f9388) {
            ctx->pc = 0x4F938Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9388u;
            // 0x4f938c: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F93ECu;
            goto label_4f93ec;
        }
    }
    ctx->pc = 0x4F9390u;
label_4f9390:
    // 0x4f9390: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x4f9390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4f9394:
    // 0x4f9394: 0x9226005a  lbu         $a2, 0x5A($s1)
    ctx->pc = 0x4f9394u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4f9398:
    // 0x4f9398: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x4f9398u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4f939c:
    // 0x4f939c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f939cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f93a0:
    // 0x4f93a0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f93a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f93a4:
    // 0x4f93a4: 0x2484de38  addiu       $a0, $a0, -0x21C8
    ctx->pc = 0x4f93a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
label_4f93a8:
    // 0x4f93a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f93a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f93ac:
    // 0x4f93ac: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4f93acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f93b0:
    // 0x4f93b0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4f93b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f93b4:
    // 0x4f93b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f93b8:
    // 0x4f93b8: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4f93bc:
    if (ctx->pc == 0x4F93BCu) {
        ctx->pc = 0x4F93BCu;
            // 0x4f93bc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4F93C0u;
        goto label_4f93c0;
    }
    ctx->pc = 0x4F93B8u;
    {
        const bool branch_taken_0x4f93b8 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4f93b8) {
            ctx->pc = 0x4F93BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F93B8u;
            // 0x4f93bc: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F93CCu;
            goto label_4f93cc;
        }
    }
    ctx->pc = 0x4F93C0u;
label_4f93c0:
    // 0x4f93c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f93c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f93c4:
    // 0x4f93c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f93c8:
    if (ctx->pc == 0x4F93C8u) {
        ctx->pc = 0x4F93C8u;
            // 0x4f93c8: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F93CCu;
        goto label_4f93cc;
    }
    ctx->pc = 0x4F93C4u;
    {
        const bool branch_taken_0x4f93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F93C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F93C4u;
            // 0x4f93c8: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f93c4) {
            ctx->pc = 0x4F93E4u;
            goto label_4f93e4;
        }
    }
    ctx->pc = 0x4F93CCu;
label_4f93cc:
    // 0x4f93cc: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4f93ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4f93d0:
    // 0x4f93d0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f93d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f93d4:
    // 0x4f93d4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4f93d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f93d8:
    // 0x4f93d8: 0x0  nop
    ctx->pc = 0x4f93d8u;
    // NOP
label_4f93dc:
    // 0x4f93dc: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4f93dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4f93e0:
    // 0x4f93e0: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x4f93e0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_4f93e4:
    // 0x4f93e4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_4f93e8:
    if (ctx->pc == 0x4F93E8u) {
        ctx->pc = 0x4F93ECu;
        goto label_4f93ec;
    }
    ctx->pc = 0x4F93E4u;
    {
        const bool branch_taken_0x4f93e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f93e4) {
            ctx->pc = 0x4F94D8u;
            goto label_4f94d8;
        }
    }
    ctx->pc = 0x4F93ECu;
label_4f93ec:
    // 0x4f93ec: 0x9226005a  lbu         $a2, 0x5A($s1)
    ctx->pc = 0x4f93ecu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4f93f0:
    // 0x4f93f0: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x4f93f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4f93f4:
    // 0x4f93f4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f93f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f93f8:
    // 0x4f93f8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f93f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f93fc:
    // 0x4f93fc: 0x2484e1f8  addiu       $a0, $a0, -0x1E08
    ctx->pc = 0x4f93fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959608));
label_4f9400:
    // 0x4f9400: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9404:
    // 0x4f9404: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4f9404u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f9408:
    // 0x4f9408: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4f9408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f940c:
    // 0x4f940c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f940cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f9410:
    // 0x4f9410: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4f9414:
    if (ctx->pc == 0x4F9414u) {
        ctx->pc = 0x4F9414u;
            // 0x4f9414: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4F9418u;
        goto label_4f9418;
    }
    ctx->pc = 0x4F9410u;
    {
        const bool branch_taken_0x4f9410 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4f9410) {
            ctx->pc = 0x4F9414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9410u;
            // 0x4f9414: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9424u;
            goto label_4f9424;
        }
    }
    ctx->pc = 0x4F9418u;
label_4f9418:
    // 0x4f9418: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9418u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f941c:
    // 0x4f941c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9420:
    if (ctx->pc == 0x4F9420u) {
        ctx->pc = 0x4F9420u;
            // 0x4f9420: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9424u;
        goto label_4f9424;
    }
    ctx->pc = 0x4F941Cu;
    {
        const bool branch_taken_0x4f941c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F941Cu;
            // 0x4f9420: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f941c) {
            ctx->pc = 0x4F943Cu;
            goto label_4f943c;
        }
    }
    ctx->pc = 0x4F9424u;
label_4f9424:
    // 0x4f9424: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4f9424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4f9428:
    // 0x4f9428: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f9428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f942c:
    // 0x4f942c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4f942cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9430:
    // 0x4f9430: 0x0  nop
    ctx->pc = 0x4f9430u;
    // NOP
label_4f9434:
    // 0x4f9434: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4f9434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4f9438:
    // 0x4f9438: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x4f9438u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_4f943c:
    // 0x4f943c: 0x10000026  b           . + 4 + (0x26 << 2)
label_4f9440:
    if (ctx->pc == 0x4F9440u) {
        ctx->pc = 0x4F9444u;
        goto label_4f9444;
    }
    ctx->pc = 0x4F943Cu;
    {
        const bool branch_taken_0x4f943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f943c) {
            ctx->pc = 0x4F94D8u;
            goto label_4f94d8;
        }
    }
    ctx->pc = 0x4F9444u;
label_4f9444:
    // 0x4f9444: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x4f9444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f9448:
    // 0x4f9448: 0x54a40018  bnel        $a1, $a0, . + 4 + (0x18 << 2)
label_4f944c:
    if (ctx->pc == 0x4F944Cu) {
        ctx->pc = 0x4F944Cu;
            // 0x4f944c: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->pc = 0x4F9450u;
        goto label_4f9450;
    }
    ctx->pc = 0x4F9448u;
    {
        const bool branch_taken_0x4f9448 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f9448) {
            ctx->pc = 0x4F944Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9448u;
            // 0x4f944c: 0x8e240098  lw          $a0, 0x98($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F94ACu;
            goto label_4f94ac;
        }
    }
    ctx->pc = 0x4F9450u;
label_4f9450:
    // 0x4f9450: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x4f9450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4f9454:
    // 0x4f9454: 0x9226005a  lbu         $a2, 0x5A($s1)
    ctx->pc = 0x4f9454u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4f9458:
    // 0x4f9458: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x4f9458u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4f945c:
    // 0x4f945c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4f945cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4f9460:
    // 0x4f9460: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4f9460u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4f9464:
    // 0x4f9464: 0x2484da78  addiu       $a0, $a0, -0x2588
    ctx->pc = 0x4f9464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957688));
label_4f9468:
    // 0x4f9468: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f946c:
    // 0x4f946c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4f946cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f9470:
    // 0x4f9470: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4f9470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f9474:
    // 0x4f9474: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4f9474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4f9478:
    // 0x4f9478: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4f947c:
    if (ctx->pc == 0x4F947Cu) {
        ctx->pc = 0x4F947Cu;
            // 0x4f947c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4F9480u;
        goto label_4f9480;
    }
    ctx->pc = 0x4F9478u;
    {
        const bool branch_taken_0x4f9478 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4f9478) {
            ctx->pc = 0x4F947Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9478u;
            // 0x4f947c: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F948Cu;
            goto label_4f948c;
        }
    }
    ctx->pc = 0x4F9480u;
label_4f9480:
    // 0x4f9480: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9480u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9484:
    // 0x4f9484: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9488:
    if (ctx->pc == 0x4F9488u) {
        ctx->pc = 0x4F9488u;
            // 0x4f9488: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F948Cu;
        goto label_4f948c;
    }
    ctx->pc = 0x4F9484u;
    {
        const bool branch_taken_0x4f9484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9484u;
            // 0x4f9488: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9484) {
            ctx->pc = 0x4F94A4u;
            goto label_4f94a4;
        }
    }
    ctx->pc = 0x4F948Cu;
label_4f948c:
    // 0x4f948c: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4f948cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4f9490:
    // 0x4f9490: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f9490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f9494:
    // 0x4f9494: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4f9494u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9498:
    // 0x4f9498: 0x0  nop
    ctx->pc = 0x4f9498u;
    // NOP
label_4f949c:
    // 0x4f949c: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4f949cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4f94a0:
    // 0x4f94a0: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x4f94a0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_4f94a4:
    // 0x4f94a4: 0x1000000c  b           . + 4 + (0xC << 2)
label_4f94a8:
    if (ctx->pc == 0x4F94A8u) {
        ctx->pc = 0x4F94ACu;
        goto label_4f94ac;
    }
    ctx->pc = 0x4F94A4u;
    {
        const bool branch_taken_0x4f94a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f94a4) {
            ctx->pc = 0x4F94D8u;
            goto label_4f94d8;
        }
    }
    ctx->pc = 0x4F94ACu;
label_4f94ac:
    // 0x4f94ac: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_4f94b0:
    if (ctx->pc == 0x4F94B0u) {
        ctx->pc = 0x4F94B0u;
            // 0x4f94b0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x4F94B4u;
        goto label_4f94b4;
    }
    ctx->pc = 0x4F94ACu;
    {
        const bool branch_taken_0x4f94ac = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x4f94ac) {
            ctx->pc = 0x4F94B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F94ACu;
            // 0x4f94b0: 0x42842  srl         $a1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F94C0u;
            goto label_4f94c0;
        }
    }
    ctx->pc = 0x4F94B4u;
label_4f94b4:
    // 0x4f94b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f94b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f94b8:
    // 0x4f94b8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f94bc:
    if (ctx->pc == 0x4F94BCu) {
        ctx->pc = 0x4F94BCu;
            // 0x4f94bc: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F94C0u;
        goto label_4f94c0;
    }
    ctx->pc = 0x4F94B8u;
    {
        const bool branch_taken_0x4f94b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F94BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F94B8u;
            // 0x4f94bc: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f94b8) {
            ctx->pc = 0x4F94D8u;
            goto label_4f94d8;
        }
    }
    ctx->pc = 0x4F94C0u;
label_4f94c0:
    // 0x4f94c0: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x4f94c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4f94c4:
    // 0x4f94c4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x4f94c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_4f94c8:
    // 0x4f94c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x4f94c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f94cc:
    // 0x4f94cc: 0x0  nop
    ctx->pc = 0x4f94ccu;
    // NOP
label_4f94d0:
    // 0x4f94d0: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4f94d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4f94d4:
    // 0x4f94d4: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x4f94d4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_4f94d8:
    // 0x4f94d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x4f94d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f94dc:
    // 0x4f94dc: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
label_4f94e0:
    if (ctx->pc == 0x4F94E0u) {
        ctx->pc = 0x4F94E0u;
            // 0x4f94e0: 0x96260106  lhu         $a2, 0x106($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 262)));
        ctx->pc = 0x4F94E4u;
        goto label_4f94e4;
    }
    ctx->pc = 0x4F94DCu;
    {
        const bool branch_taken_0x4f94dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x4f94dc) {
            ctx->pc = 0x4F94E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F94DCu;
            // 0x4f94e0: 0x96260106  lhu         $a2, 0x106($s1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 262)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F94F0u;
            goto label_4f94f0;
        }
    }
    ctx->pc = 0x4F94E4u;
label_4f94e4:
    // 0x4f94e4: 0xc62000f8  lwc1        $f0, 0xF8($s1)
    ctx->pc = 0x4f94e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f94e8:
    // 0x4f94e8: 0x4600bdc1  sub.s       $f23, $f23, $f0
    ctx->pc = 0x4f94e8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
label_4f94ec:
    // 0x4f94ec: 0x96260106  lhu         $a2, 0x106($s1)
    ctx->pc = 0x4f94ecu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 262)));
label_4f94f0:
    // 0x4f94f0: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4f94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4f94f4:
    // 0x4f94f4: 0x34644dd3  ori         $a0, $v1, 0x4DD3
    ctx->pc = 0x4f94f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4f94f8:
    // 0x4f94f8: 0x92270104  lbu         $a3, 0x104($s1)
    ctx->pc = 0x4f94f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 260)));
label_4f94fc:
    // 0x4f94fc: 0x92280105  lbu         $t0, 0x105($s1)
    ctx->pc = 0x4f94fcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 261)));
label_4f9500:
    // 0x4f9500: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4f9500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f9504:
    // 0x4f9504: 0x860018  mult        $zero, $a0, $a2
    ctx->pc = 0x4f9504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f9508:
    // 0x4f9508: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x4f9508u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_4f950c:
    // 0x4f950c: 0xa73823  subu        $a3, $a1, $a3
    ctx->pc = 0x4f950cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_4f9510:
    // 0x4f9510: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x4f9510u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_4f9514:
    // 0x4f9514: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x4f9514u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f9518:
    // 0x4f9518: 0x1043021  addu        $a2, $t0, $a0
    ctx->pc = 0x4f9518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_4f951c:
    // 0x4f951c: 0x2010  mfhi        $a0
    ctx->pc = 0x4f951cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4f9520:
    // 0x4f9520: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x4f9520u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
label_4f9524:
    // 0x4f9524: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9528:
    // 0x4f9528: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x4f9528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4f952c:
    // 0x4f952c: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x4f952cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4f9530:
    // 0x4f9530: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4f9530u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9534:
    // 0x4f9534: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4f9534u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f9538:
    // 0x4f9538: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9538u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f953c:
    // 0x4f953c: 0x0  nop
    ctx->pc = 0x4f953cu;
    // NOP
label_4f9540:
    // 0x4f9540: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4f9540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4f9544:
    // 0x4f9544: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
label_4f9548:
    if (ctx->pc == 0x4F9548u) {
        ctx->pc = 0x4F9548u;
            // 0x4f9548: 0x4600bdc1  sub.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x4F954Cu;
        goto label_4f954c;
    }
    ctx->pc = 0x4F9544u;
    {
        const bool branch_taken_0x4f9544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4F9548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9544u;
            // 0x4f9548: 0x4600bdc1  sub.s       $f23, $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9544) {
            ctx->pc = 0x4F958Cu;
            goto label_4f958c;
        }
    }
    ctx->pc = 0x4F954Cu;
label_4f954c:
    // 0x4f954c: 0x92830ce4  lbu         $v1, 0xCE4($s4)
    ctx->pc = 0x4f954cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3300)));
label_4f9550:
    // 0x4f9550: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f9554:
    // 0x4f9554: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_4f9558:
    if (ctx->pc == 0x4F9558u) {
        ctx->pc = 0x4F955Cu;
        goto label_4f955c;
    }
    ctx->pc = 0x4F9554u;
    {
        const bool branch_taken_0x4f9554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f9554) {
            ctx->pc = 0x4F958Cu;
            goto label_4f958c;
        }
    }
    ctx->pc = 0x4F955Cu;
label_4f955c:
    // 0x4f955c: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4f955cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4f9560:
    // 0x4f9560: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4f9560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4f9564:
    // 0x4f9564: 0x320f809  jalr        $t9
label_4f9568:
    if (ctx->pc == 0x4F9568u) {
        ctx->pc = 0x4F9568u;
            // 0x4f9568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F956Cu;
        goto label_4f956c;
    }
    ctx->pc = 0x4F9564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4F956Cu);
        ctx->pc = 0x4F9568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9564u;
            // 0x4f9568: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4F956Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4F956Cu; }
            if (ctx->pc != 0x4F956Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4F956Cu;
label_4f956c:
    // 0x4f956c: 0x2c412711  sltiu       $at, $v0, 0x2711
    ctx->pc = 0x4f956cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10001) ? 1 : 0);
label_4f9570:
    // 0x4f9570: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_4f9574:
    if (ctx->pc == 0x4F9574u) {
        ctx->pc = 0x4F9578u;
        goto label_4f9578;
    }
    ctx->pc = 0x4F9570u;
    {
        const bool branch_taken_0x4f9570 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9570) {
            ctx->pc = 0x4F958Cu;
            goto label_4f958c;
        }
    }
    ctx->pc = 0x4F9578u;
label_4f9578:
    // 0x4f9578: 0x3c033f94  lui         $v1, 0x3F94
    ctx->pc = 0x4f9578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16276 << 16));
label_4f957c:
    // 0x4f957c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f9580:
    // 0x4f9580: 0x346325ed  ori         $v1, $v1, 0x25ED
    ctx->pc = 0x4f9580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9709);
label_4f9584:
    // 0x4f9584: 0x100000e2  b           . + 4 + (0xE2 << 2)
label_4f9588:
    if (ctx->pc == 0x4F9588u) {
        ctx->pc = 0x4F9588u;
            // 0x4f9588: 0xae630de4  sw          $v1, 0xDE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3556), GPR_U32(ctx, 3));
        ctx->pc = 0x4F958Cu;
        goto label_4f958c;
    }
    ctx->pc = 0x4F9584u;
    {
        const bool branch_taken_0x4f9584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9584u;
            // 0x4f9588: 0xae630de4  sw          $v1, 0xDE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3556), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9584) {
            ctx->pc = 0x4F9910u;
            goto label_4f9910;
        }
    }
    ctx->pc = 0x4F958Cu;
label_4f958c:
    // 0x4f958c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4f958cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f9590:
    // 0x4f9590: 0x0  nop
    ctx->pc = 0x4f9590u;
    // NOP
label_4f9594:
    // 0x4f9594: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x4f9594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9598:
    // 0x4f9598: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4f959c:
    if (ctx->pc == 0x4F959Cu) {
        ctx->pc = 0x4F959Cu;
            // 0x4f959c: 0x3c023c17  lui         $v0, 0x3C17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
        ctx->pc = 0x4F95A0u;
        goto label_4f95a0;
    }
    ctx->pc = 0x4F9598u;
    {
        const bool branch_taken_0x4f9598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9598) {
            ctx->pc = 0x4F959Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9598u;
            // 0x4f959c: 0x3c023c17  lui         $v0, 0x3C17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F95B0u;
            goto label_4f95b0;
        }
    }
    ctx->pc = 0x4F95A0u;
label_4f95a0:
    // 0x4f95a0: 0x4601b836  c.le.s      $f23, $f1
    ctx->pc = 0x4f95a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f95a4:
    // 0x4f95a4: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_4f95a8:
    if (ctx->pc == 0x4F95A8u) {
        ctx->pc = 0x4F95ACu;
        goto label_4f95ac;
    }
    ctx->pc = 0x4F95A4u;
    {
        const bool branch_taken_0x4f95a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f95a4) {
            ctx->pc = 0x4F9614u;
            goto label_4f9614;
        }
    }
    ctx->pc = 0x4F95ACu;
label_4f95ac:
    // 0x4f95ac: 0x3c023c17  lui         $v0, 0x3C17
    ctx->pc = 0x4f95acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
label_4f95b0:
    // 0x4f95b0: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f95b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f95b4:
    // 0x4f95b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f95b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f95b8:
    // 0x4f95b8: 0x0  nop
    ctx->pc = 0x4f95b8u;
    // NOP
label_4f95bc:
    // 0x4f95bc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4f95bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4f95c0:
    // 0x4f95c0: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x4f95c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f95c4:
    // 0x4f95c4: 0xc62200ac  lwc1        $f2, 0xAC($s1)
    ctx->pc = 0x4f95c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f95c8:
    // 0x4f95c8: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x4f95c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f95cc:
    // 0x4f95cc: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4f95d0:
    if (ctx->pc == 0x4F95D0u) {
        ctx->pc = 0x4F95D0u;
            // 0x4f95d0: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4F95D4u;
        goto label_4f95d4;
    }
    ctx->pc = 0x4F95CCu;
    {
        const bool branch_taken_0x4f95cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f95cc) {
            ctx->pc = 0x4F95D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F95CCu;
            // 0x4f95d0: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F95F4u;
            goto label_4f95f4;
        }
    }
    ctx->pc = 0x4F95D4u;
label_4f95d4:
    // 0x4f95d4: 0xc6610df4  lwc1        $f1, 0xDF4($s3)
    ctx->pc = 0x4f95d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f95d8:
    // 0x4f95d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f95d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f95dc:
    // 0x4f95dc: 0x0  nop
    ctx->pc = 0x4f95dcu;
    // NOP
label_4f95e0:
    // 0x4f95e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f95e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f95e4:
    // 0x4f95e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4f95e8:
    if (ctx->pc == 0x4F95E8u) {
        ctx->pc = 0x4F95ECu;
        goto label_4f95ec;
    }
    ctx->pc = 0x4F95E4u;
    {
        const bool branch_taken_0x4f95e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f95e4) {
            ctx->pc = 0x4F95F0u;
            goto label_4f95f0;
        }
    }
    ctx->pc = 0x4F95ECu;
label_4f95ec:
    // 0x4f95ec: 0xe6620de4  swc1        $f2, 0xDE4($s3)
    ctx->pc = 0x4f95ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f95f0:
    // 0x4f95f0: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4f95f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4f95f4:
    // 0x4f95f4: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4f95f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4f95f8:
    // 0x4f95f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f95f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f95fc:
    // 0x4f95fc: 0x0  nop
    ctx->pc = 0x4f95fcu;
    // NOP
label_4f9600:
    // 0x4f9600: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4f9600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9604:
    // 0x4f9604: 0x450100c1  bc1t        . + 4 + (0xC1 << 2)
label_4f9608:
    if (ctx->pc == 0x4F9608u) {
        ctx->pc = 0x4F960Cu;
        goto label_4f960c;
    }
    ctx->pc = 0x4F9604u;
    {
        const bool branch_taken_0x4f9604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9604) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F960Cu;
label_4f960c:
    // 0x4f960c: 0x100000bf  b           . + 4 + (0xBF << 2)
label_4f9610:
    if (ctx->pc == 0x4F9610u) {
        ctx->pc = 0x4F9610u;
            // 0x4f9610: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F9614u;
        goto label_4f9614;
    }
    ctx->pc = 0x4F960Cu;
    {
        const bool branch_taken_0x4f960c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F960Cu;
            // 0x4f9610: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f960c) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9614u;
label_4f9614:
    // 0x4f9614: 0x0  nop
    ctx->pc = 0x4f9614u;
    // NOP
label_4f9618:
    // 0x4f9618: 0x0  nop
    ctx->pc = 0x4f9618u;
    // NOP
label_4f961c:
    // 0x4f961c: 0x4617b583  div.s       $f22, $f22, $f23
    ctx->pc = 0x4f961cu;
    if (ctx->f[23] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[23];
label_4f9620:
    // 0x4f9620: 0x0  nop
    ctx->pc = 0x4f9620u;
    // NOP
label_4f9624:
    // 0x4f9624: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x4f9624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4f9628:
    // 0x4f9628: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4f9628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f962c:
    // 0x4f962c: 0x54620078  bnel        $v1, $v0, . + 4 + (0x78 << 2)
label_4f9630:
    if (ctx->pc == 0x4F9630u) {
        ctx->pc = 0x4F9630u;
            // 0x4f9630: 0x4615b001  sub.s       $f0, $f22, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
        ctx->pc = 0x4F9634u;
        goto label_4f9634;
    }
    ctx->pc = 0x4F962Cu;
    {
        const bool branch_taken_0x4f962c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f962c) {
            ctx->pc = 0x4F9630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F962Cu;
            // 0x4f9630: 0x4615b001  sub.s       $f0, $f22, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9810u;
            goto label_4f9810;
        }
    }
    ctx->pc = 0x4F9634u;
label_4f9634:
    // 0x4f9634: 0x92830ce4  lbu         $v1, 0xCE4($s4)
    ctx->pc = 0x4f9634u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3300)));
label_4f9638:
    // 0x4f9638: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f9638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f963c:
    // 0x4f963c: 0x54620034  bnel        $v1, $v0, . + 4 + (0x34 << 2)
label_4f9640:
    if (ctx->pc == 0x4F9640u) {
        ctx->pc = 0x4F9640u;
            // 0x4f9640: 0x4615b001  sub.s       $f0, $f22, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
        ctx->pc = 0x4F9644u;
        goto label_4f9644;
    }
    ctx->pc = 0x4F963Cu;
    {
        const bool branch_taken_0x4f963c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f963c) {
            ctx->pc = 0x4F9640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F963Cu;
            // 0x4f9640: 0x4615b001  sub.s       $f0, $f22, $f21 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9710u;
            goto label_4f9710;
        }
    }
    ctx->pc = 0x4F9644u;
label_4f9644:
    // 0x4f9644: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x4f9644u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9648:
    // 0x4f9648: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4f964c:
    if (ctx->pc == 0x4F964Cu) {
        ctx->pc = 0x4F9650u;
        goto label_4f9650;
    }
    ctx->pc = 0x4F9648u;
    {
        const bool branch_taken_0x4f9648 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9648) {
            ctx->pc = 0x4F9680u;
            goto label_4f9680;
        }
    }
    ctx->pc = 0x4F9650u;
label_4f9650:
    // 0x4f9650: 0xc6600de8  lwc1        $f0, 0xDE8($s3)
    ctx->pc = 0x4f9650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f9654:
    // 0x4f9654: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f9654u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9658:
    // 0x4f9658: 0x45020016  bc1fl       . + 4 + (0x16 << 2)
label_4f965c:
    if (ctx->pc == 0x4F965Cu) {
        ctx->pc = 0x4F965Cu;
            // 0x4f965c: 0x3c023f94  lui         $v0, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
        ctx->pc = 0x4F9660u;
        goto label_4f9660;
    }
    ctx->pc = 0x4F9658u;
    {
        const bool branch_taken_0x4f9658 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9658) {
            ctx->pc = 0x4F965Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9658u;
            // 0x4f965c: 0x3c023f94  lui         $v0, 0x3F94 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F96B4u;
            goto label_4f96b4;
        }
    }
    ctx->pc = 0x4F9660u;
label_4f9660:
    // 0x4f9660: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x4f9660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_4f9664:
    // 0x4f9664: 0xc049820  jal         func_126080
label_4f9668:
    if (ctx->pc == 0x4F9668u) {
        ctx->pc = 0x4F9668u;
            // 0x4f9668: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4F966Cu;
        goto label_4f966c;
    }
    ctx->pc = 0x4F9664u;
    SET_GPR_U32(ctx, 31, 0x4F966Cu);
    ctx->pc = 0x4F9668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9664u;
            // 0x4f9668: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F966Cu; }
        if (ctx->pc != 0x4F966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F966Cu; }
        if (ctx->pc != 0x4F966Cu) { return; }
    }
    ctx->pc = 0x4F966Cu;
label_4f966c:
    // 0x4f966c: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4f966cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4f9670:
    // 0x4f9670: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_4f9674:
    if (ctx->pc == 0x4F9674u) {
        ctx->pc = 0x4F9678u;
        goto label_4f9678;
    }
    ctx->pc = 0x4F9670u;
    {
        const bool branch_taken_0x4f9670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9670) {
            ctx->pc = 0x4F96B0u;
            goto label_4f96b0;
        }
    }
    ctx->pc = 0x4F9678u;
label_4f9678:
    // 0x4f9678: 0x1000000d  b           . + 4 + (0xD << 2)
label_4f967c:
    if (ctx->pc == 0x4F967Cu) {
        ctx->pc = 0x4F967Cu;
            // 0x4f967c: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F9680u;
        goto label_4f9680;
    }
    ctx->pc = 0x4F9678u;
    {
        const bool branch_taken_0x4f9678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F967Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9678u;
            // 0x4f967c: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9678) {
            ctx->pc = 0x4F96B0u;
            goto label_4f96b0;
        }
    }
    ctx->pc = 0x4F9680u;
label_4f9680:
    // 0x4f9680: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x4f9680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9684:
    // 0x4f9684: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_4f9688:
    if (ctx->pc == 0x4F9688u) {
        ctx->pc = 0x4F968Cu;
        goto label_4f968c;
    }
    ctx->pc = 0x4F9684u;
    {
        const bool branch_taken_0x4f9684 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9684) {
            ctx->pc = 0x4F96B0u;
            goto label_4f96b0;
        }
    }
    ctx->pc = 0x4F968Cu;
label_4f968c:
    // 0x4f968c: 0xc6600df4  lwc1        $f0, 0xDF4($s3)
    ctx->pc = 0x4f968cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f9690:
    // 0x4f9690: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4f9690u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9694:
    // 0x4f9694: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4f9698:
    if (ctx->pc == 0x4F9698u) {
        ctx->pc = 0x4F969Cu;
        goto label_4f969c;
    }
    ctx->pc = 0x4F9694u;
    {
        const bool branch_taken_0x4f9694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9694) {
            ctx->pc = 0x4F96B0u;
            goto label_4f96b0;
        }
    }
    ctx->pc = 0x4F969Cu;
label_4f969c:
    // 0x4f969c: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x4f969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f96a0:
    // 0x4f96a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4f96a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f96a4:
    // 0x4f96a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4f96a8:
    if (ctx->pc == 0x4F96A8u) {
        ctx->pc = 0x4F96ACu;
        goto label_4f96ac;
    }
    ctx->pc = 0x4F96A4u;
    {
        const bool branch_taken_0x4f96a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f96a4) {
            ctx->pc = 0x4F96B0u;
            goto label_4f96b0;
        }
    }
    ctx->pc = 0x4F96ACu;
label_4f96ac:
    // 0x4f96ac: 0xe6760de4  swc1        $f22, 0xDE4($s3)
    ctx->pc = 0x4f96acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f96b0:
    // 0x4f96b0: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x4f96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_4f96b4:
    // 0x4f96b4: 0x344225ed  ori         $v0, $v0, 0x25ED
    ctx->pc = 0x4f96b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
label_4f96b8:
    // 0x4f96b8: 0xc6600de4  lwc1        $f0, 0xDE4($s3)
    ctx->pc = 0x4f96b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f96bc:
    // 0x4f96bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4f96bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4f96c0:
    // 0x4f96c0: 0x0  nop
    ctx->pc = 0x4f96c0u;
    // NOP
label_4f96c4:
    // 0x4f96c4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x4f96c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f96c8:
    // 0x4f96c8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4f96cc:
    if (ctx->pc == 0x4F96CCu) {
        ctx->pc = 0x4F96CCu;
            // 0x4f96cc: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4F96D0u;
        goto label_4f96d0;
    }
    ctx->pc = 0x4F96C8u;
    {
        const bool branch_taken_0x4f96c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f96c8) {
            ctx->pc = 0x4F96CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F96C8u;
            // 0x4f96cc: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F96F0u;
            goto label_4f96f0;
        }
    }
    ctx->pc = 0x4F96D0u;
label_4f96d0:
    // 0x4f96d0: 0xc6610df4  lwc1        $f1, 0xDF4($s3)
    ctx->pc = 0x4f96d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f96d4:
    // 0x4f96d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f96d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f96d8:
    // 0x4f96d8: 0x0  nop
    ctx->pc = 0x4f96d8u;
    // NOP
label_4f96dc:
    // 0x4f96dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f96dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f96e0:
    // 0x4f96e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4f96e4:
    if (ctx->pc == 0x4F96E4u) {
        ctx->pc = 0x4F96E8u;
        goto label_4f96e8;
    }
    ctx->pc = 0x4F96E0u;
    {
        const bool branch_taken_0x4f96e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f96e0) {
            ctx->pc = 0x4F96ECu;
            goto label_4f96ec;
        }
    }
    ctx->pc = 0x4F96E8u;
label_4f96e8:
    // 0x4f96e8: 0xe6620de4  swc1        $f2, 0xDE4($s3)
    ctx->pc = 0x4f96e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f96ec:
    // 0x4f96ec: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4f96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4f96f0:
    // 0x4f96f0: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4f96f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4f96f4:
    // 0x4f96f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f96f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f96f8:
    // 0x4f96f8: 0x0  nop
    ctx->pc = 0x4f96f8u;
    // NOP
label_4f96fc:
    // 0x4f96fc: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x4f96fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9700:
    // 0x4f9700: 0x45010082  bc1t        . + 4 + (0x82 << 2)
label_4f9704:
    if (ctx->pc == 0x4F9704u) {
        ctx->pc = 0x4F9708u;
        goto label_4f9708;
    }
    ctx->pc = 0x4F9700u;
    {
        const bool branch_taken_0x4f9700 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9700) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9708u;
label_4f9708:
    // 0x4f9708: 0x10000080  b           . + 4 + (0x80 << 2)
label_4f970c:
    if (ctx->pc == 0x4F970Cu) {
        ctx->pc = 0x4F970Cu;
            // 0x4f970c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F9710u;
        goto label_4f9710;
    }
    ctx->pc = 0x4F9708u;
    {
        const bool branch_taken_0x4f9708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9708u;
            // 0x4f970c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9708) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9710u;
label_4f9710:
    // 0x4f9710: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4f9710u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9714:
    // 0x4f9714: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_4f9718:
    if (ctx->pc == 0x4F9718u) {
        ctx->pc = 0x4F971Cu;
        goto label_4f971c;
    }
    ctx->pc = 0x4F9714u;
    {
        const bool branch_taken_0x4f9714 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9714) {
            ctx->pc = 0x4F976Cu;
            goto label_4f976c;
        }
    }
    ctx->pc = 0x4F971Cu;
label_4f971c:
    // 0x4f971c: 0xc6600de8  lwc1        $f0, 0xDE8($s3)
    ctx->pc = 0x4f971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f9720:
    // 0x4f9720: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f9720u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9724:
    // 0x4f9724: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_4f9728:
    if (ctx->pc == 0x4F9728u) {
        ctx->pc = 0x4F9728u;
            // 0x4f9728: 0xc62200ac  lwc1        $f2, 0xAC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4F972Cu;
        goto label_4f972c;
    }
    ctx->pc = 0x4F9724u;
    {
        const bool branch_taken_0x4f9724 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9724) {
            ctx->pc = 0x4F9728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9724u;
            // 0x4f9728: 0xc62200ac  lwc1        $f2, 0xAC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F97C0u;
            goto label_4f97c0;
        }
    }
    ctx->pc = 0x4F972Cu;
label_4f972c:
    // 0x4f972c: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x4f972cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_4f9730:
    // 0x4f9730: 0xc049820  jal         func_126080
label_4f9734:
    if (ctx->pc == 0x4F9734u) {
        ctx->pc = 0x4F9734u;
            // 0x4f9734: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4F9738u;
        goto label_4f9738;
    }
    ctx->pc = 0x4F9730u;
    SET_GPR_U32(ctx, 31, 0x4F9738u);
    ctx->pc = 0x4F9734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9730u;
            // 0x4f9734: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9738u; }
        if (ctx->pc != 0x4F9738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9738u; }
        if (ctx->pc != 0x4F9738u) { return; }
    }
    ctx->pc = 0x4F9738u;
label_4f9738:
    // 0x4f9738: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4f9738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4f973c:
    // 0x4f973c: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_4f9740:
    if (ctx->pc == 0x4F9740u) {
        ctx->pc = 0x4F9744u;
        goto label_4f9744;
    }
    ctx->pc = 0x4F973Cu;
    {
        const bool branch_taken_0x4f973c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f973c) {
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F9744u;
label_4f9744:
    // 0x4f9744: 0x8e820968  lw          $v0, 0x968($s4)
    ctx->pc = 0x4f9744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_4f9748:
    // 0x4f9748: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_4f974c:
    if (ctx->pc == 0x4F974Cu) {
        ctx->pc = 0x4F974Cu;
            // 0x4f974c: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F9750u;
        goto label_4f9750;
    }
    ctx->pc = 0x4F9748u;
    {
        const bool branch_taken_0x4f9748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9748) {
            ctx->pc = 0x4F974Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9748u;
            // 0x4f974c: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F9750u;
label_4f9750:
    // 0x4f9750: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4f9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4f9754:
    // 0x4f9754: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9758:
    // 0x4f9758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f9758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f975c:
    // 0x4f975c: 0x0  nop
    ctx->pc = 0x4f975cu;
    // NOP
label_4f9760:
    // 0x4f9760: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4f9760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4f9764:
    // 0x4f9764: 0x10000015  b           . + 4 + (0x15 << 2)
label_4f9768:
    if (ctx->pc == 0x4F9768u) {
        ctx->pc = 0x4F9768u;
            // 0x4f9768: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F976Cu;
        goto label_4f976c;
    }
    ctx->pc = 0x4F9764u;
    {
        const bool branch_taken_0x4f9764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9764u;
            // 0x4f9768: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9764) {
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F976Cu;
label_4f976c:
    // 0x4f976c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4f976cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9770:
    // 0x4f9770: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_4f9774:
    if (ctx->pc == 0x4F9774u) {
        ctx->pc = 0x4F9778u;
        goto label_4f9778;
    }
    ctx->pc = 0x4F9770u;
    {
        const bool branch_taken_0x4f9770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9770) {
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F9778u;
label_4f9778:
    // 0x4f9778: 0xc6600df4  lwc1        $f0, 0xDF4($s3)
    ctx->pc = 0x4f9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f977c:
    // 0x4f977c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4f977cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9780:
    // 0x4f9780: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_4f9784:
    if (ctx->pc == 0x4F9784u) {
        ctx->pc = 0x4F9788u;
        goto label_4f9788;
    }
    ctx->pc = 0x4F9780u;
    {
        const bool branch_taken_0x4f9780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9780) {
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F9788u;
label_4f9788:
    // 0x4f9788: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x4f9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f978c:
    // 0x4f978c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4f978cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9790:
    // 0x4f9790: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_4f9794:
    if (ctx->pc == 0x4F9794u) {
        ctx->pc = 0x4F9798u;
        goto label_4f9798;
    }
    ctx->pc = 0x4F9790u;
    {
        const bool branch_taken_0x4f9790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9790) {
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F9798u;
label_4f9798:
    // 0x4f9798: 0x8e820968  lw          $v0, 0x968($s4)
    ctx->pc = 0x4f9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_4f979c:
    // 0x4f979c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4f97a0:
    if (ctx->pc == 0x4F97A0u) {
        ctx->pc = 0x4F97A0u;
            // 0x4f97a0: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F97A4u;
        goto label_4f97a4;
    }
    ctx->pc = 0x4F979Cu;
    {
        const bool branch_taken_0x4f979c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f979c) {
            ctx->pc = 0x4F97A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F979Cu;
            // 0x4f97a0: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F97BCu;
            goto label_4f97bc;
        }
    }
    ctx->pc = 0x4F97A4u;
label_4f97a4:
    // 0x4f97a4: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4f97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4f97a8:
    // 0x4f97a8: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f97ac:
    // 0x4f97ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f97acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f97b0:
    // 0x4f97b0: 0x0  nop
    ctx->pc = 0x4f97b0u;
    // NOP
label_4f97b4:
    // 0x4f97b4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4f97b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4f97b8:
    // 0x4f97b8: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x4f97b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f97bc:
    // 0x4f97bc: 0xc62200ac  lwc1        $f2, 0xAC($s1)
    ctx->pc = 0x4f97bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f97c0:
    // 0x4f97c0: 0xc6630de4  lwc1        $f3, 0xDE4($s3)
    ctx->pc = 0x4f97c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f97c4:
    // 0x4f97c4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4f97c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f97c8:
    // 0x4f97c8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4f97cc:
    if (ctx->pc == 0x4F97CCu) {
        ctx->pc = 0x4F97CCu;
            // 0x4f97cc: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4F97D0u;
        goto label_4f97d0;
    }
    ctx->pc = 0x4F97C8u;
    {
        const bool branch_taken_0x4f97c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f97c8) {
            ctx->pc = 0x4F97CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F97C8u;
            // 0x4f97cc: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F97F0u;
            goto label_4f97f0;
        }
    }
    ctx->pc = 0x4F97D0u;
label_4f97d0:
    // 0x4f97d0: 0xc6610df4  lwc1        $f1, 0xDF4($s3)
    ctx->pc = 0x4f97d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f97d4:
    // 0x4f97d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f97d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f97d8:
    // 0x4f97d8: 0x0  nop
    ctx->pc = 0x4f97d8u;
    // NOP
label_4f97dc:
    // 0x4f97dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f97dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f97e0:
    // 0x4f97e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4f97e4:
    if (ctx->pc == 0x4F97E4u) {
        ctx->pc = 0x4F97E8u;
        goto label_4f97e8;
    }
    ctx->pc = 0x4F97E0u;
    {
        const bool branch_taken_0x4f97e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f97e0) {
            ctx->pc = 0x4F97ECu;
            goto label_4f97ec;
        }
    }
    ctx->pc = 0x4F97E8u;
label_4f97e8:
    // 0x4f97e8: 0xe6620de4  swc1        $f2, 0xDE4($s3)
    ctx->pc = 0x4f97e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f97ec:
    // 0x4f97ec: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4f97ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4f97f0:
    // 0x4f97f0: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4f97f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4f97f4:
    // 0x4f97f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f97f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f97f8:
    // 0x4f97f8: 0x0  nop
    ctx->pc = 0x4f97f8u;
    // NOP
label_4f97fc:
    // 0x4f97fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4f97fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9800:
    // 0x4f9800: 0x45010042  bc1t        . + 4 + (0x42 << 2)
label_4f9804:
    if (ctx->pc == 0x4F9804u) {
        ctx->pc = 0x4F9808u;
        goto label_4f9808;
    }
    ctx->pc = 0x4F9800u;
    {
        const bool branch_taken_0x4f9800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9800) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9808u;
label_4f9808:
    // 0x4f9808: 0x10000040  b           . + 4 + (0x40 << 2)
label_4f980c:
    if (ctx->pc == 0x4F980Cu) {
        ctx->pc = 0x4F980Cu;
            // 0x4f980c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4F9810u;
        goto label_4f9810;
    }
    ctx->pc = 0x4F9808u;
    {
        const bool branch_taken_0x4f9808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F980Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9808u;
            // 0x4f980c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9808) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9810u;
label_4f9810:
    // 0x4f9810: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4f9810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9814:
    // 0x4f9814: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_4f9818:
    if (ctx->pc == 0x4F9818u) {
        ctx->pc = 0x4F981Cu;
        goto label_4f981c;
    }
    ctx->pc = 0x4F9814u;
    {
        const bool branch_taken_0x4f9814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9814) {
            ctx->pc = 0x4F986Cu;
            goto label_4f986c;
        }
    }
    ctx->pc = 0x4F981Cu;
label_4f981c:
    // 0x4f981c: 0xc6600de8  lwc1        $f0, 0xDE8($s3)
    ctx->pc = 0x4f981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f9820:
    // 0x4f9820: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f9820u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9824:
    // 0x4f9824: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
label_4f9828:
    if (ctx->pc == 0x4F9828u) {
        ctx->pc = 0x4F9828u;
            // 0x4f9828: 0xc62200ac  lwc1        $f2, 0xAC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4F982Cu;
        goto label_4f982c;
    }
    ctx->pc = 0x4F9824u;
    {
        const bool branch_taken_0x4f9824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9824) {
            ctx->pc = 0x4F9828u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9824u;
            // 0x4f9828: 0xc62200ac  lwc1        $f2, 0xAC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F98C0u;
            goto label_4f98c0;
        }
    }
    ctx->pc = 0x4F982Cu;
label_4f982c:
    // 0x4f982c: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x4f982cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_4f9830:
    // 0x4f9830: 0xc049820  jal         func_126080
label_4f9834:
    if (ctx->pc == 0x4F9834u) {
        ctx->pc = 0x4F9834u;
            // 0x4f9834: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4F9838u;
        goto label_4f9838;
    }
    ctx->pc = 0x4F9830u;
    SET_GPR_U32(ctx, 31, 0x4F9838u);
    ctx->pc = 0x4F9834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9830u;
            // 0x4f9834: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9838u; }
        if (ctx->pc != 0x4F9838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9838u; }
        if (ctx->pc != 0x4F9838u) { return; }
    }
    ctx->pc = 0x4F9838u;
label_4f9838:
    // 0x4f9838: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4f9838u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4f983c:
    // 0x4f983c: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_4f9840:
    if (ctx->pc == 0x4F9840u) {
        ctx->pc = 0x4F9844u;
        goto label_4f9844;
    }
    ctx->pc = 0x4F983Cu;
    {
        const bool branch_taken_0x4f983c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f983c) {
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F9844u;
label_4f9844:
    // 0x4f9844: 0x8e820968  lw          $v0, 0x968($s4)
    ctx->pc = 0x4f9844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_4f9848:
    // 0x4f9848: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_4f984c:
    if (ctx->pc == 0x4F984Cu) {
        ctx->pc = 0x4F984Cu;
            // 0x4f984c: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F9850u;
        goto label_4f9850;
    }
    ctx->pc = 0x4F9848u;
    {
        const bool branch_taken_0x4f9848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9848) {
            ctx->pc = 0x4F984Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9848u;
            // 0x4f984c: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F9850u;
label_4f9850:
    // 0x4f9850: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4f9850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4f9854:
    // 0x4f9854: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9858:
    // 0x4f9858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f9858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f985c:
    // 0x4f985c: 0x0  nop
    ctx->pc = 0x4f985cu;
    // NOP
label_4f9860:
    // 0x4f9860: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4f9860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4f9864:
    // 0x4f9864: 0x10000015  b           . + 4 + (0x15 << 2)
label_4f9868:
    if (ctx->pc == 0x4F9868u) {
        ctx->pc = 0x4F9868u;
            // 0x4f9868: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F986Cu;
        goto label_4f986c;
    }
    ctx->pc = 0x4F9864u;
    {
        const bool branch_taken_0x4f9864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9864u;
            // 0x4f9868: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9864) {
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F986Cu;
label_4f986c:
    // 0x4f986c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4f986cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9870:
    // 0x4f9870: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_4f9874:
    if (ctx->pc == 0x4F9874u) {
        ctx->pc = 0x4F9878u;
        goto label_4f9878;
    }
    ctx->pc = 0x4F9870u;
    {
        const bool branch_taken_0x4f9870 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9870) {
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F9878u;
label_4f9878:
    // 0x4f9878: 0xc6600df4  lwc1        $f0, 0xDF4($s3)
    ctx->pc = 0x4f9878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f987c:
    // 0x4f987c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4f987cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9880:
    // 0x4f9880: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_4f9884:
    if (ctx->pc == 0x4F9884u) {
        ctx->pc = 0x4F9888u;
        goto label_4f9888;
    }
    ctx->pc = 0x4F9880u;
    {
        const bool branch_taken_0x4f9880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9880) {
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F9888u;
label_4f9888:
    // 0x4f9888: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x4f9888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f988c:
    // 0x4f988c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4f988cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9890:
    // 0x4f9890: 0x4501000a  bc1t        . + 4 + (0xA << 2)
label_4f9894:
    if (ctx->pc == 0x4F9894u) {
        ctx->pc = 0x4F9898u;
        goto label_4f9898;
    }
    ctx->pc = 0x4F9890u;
    {
        const bool branch_taken_0x4f9890 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9890) {
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F9898u;
label_4f9898:
    // 0x4f9898: 0x8e820968  lw          $v0, 0x968($s4)
    ctx->pc = 0x4f9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2408)));
label_4f989c:
    // 0x4f989c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4f98a0:
    if (ctx->pc == 0x4F98A0u) {
        ctx->pc = 0x4F98A0u;
            // 0x4f98a0: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x4F98A4u;
        goto label_4f98a4;
    }
    ctx->pc = 0x4F989Cu;
    {
        const bool branch_taken_0x4f989c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f989c) {
            ctx->pc = 0x4F98A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F989Cu;
            // 0x4f98a0: 0xe6760de4  swc1        $f22, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F98BCu;
            goto label_4f98bc;
        }
    }
    ctx->pc = 0x4F98A4u;
label_4f98a4:
    // 0x4f98a4: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4f98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4f98a8:
    // 0x4f98a8: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f98a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f98ac:
    // 0x4f98ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f98acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f98b0:
    // 0x4f98b0: 0x0  nop
    ctx->pc = 0x4f98b0u;
    // NOP
label_4f98b4:
    // 0x4f98b4: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4f98b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4f98b8:
    // 0x4f98b8: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x4f98b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f98bc:
    // 0x4f98bc: 0xc62200ac  lwc1        $f2, 0xAC($s1)
    ctx->pc = 0x4f98bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4f98c0:
    // 0x4f98c0: 0xc6630de4  lwc1        $f3, 0xDE4($s3)
    ctx->pc = 0x4f98c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4f98c4:
    // 0x4f98c4: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4f98c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f98c8:
    // 0x4f98c8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4f98cc:
    if (ctx->pc == 0x4F98CCu) {
        ctx->pc = 0x4F98CCu;
            // 0x4f98cc: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4F98D0u;
        goto label_4f98d0;
    }
    ctx->pc = 0x4F98C8u;
    {
        const bool branch_taken_0x4f98c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f98c8) {
            ctx->pc = 0x4F98CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F98C8u;
            // 0x4f98cc: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F98F0u;
            goto label_4f98f0;
        }
    }
    ctx->pc = 0x4F98D0u;
label_4f98d0:
    // 0x4f98d0: 0xc6610df4  lwc1        $f1, 0xDF4($s3)
    ctx->pc = 0x4f98d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4f98d4:
    // 0x4f98d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4f98d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f98d8:
    // 0x4f98d8: 0x0  nop
    ctx->pc = 0x4f98d8u;
    // NOP
label_4f98dc:
    // 0x4f98dc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4f98dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f98e0:
    // 0x4f98e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4f98e4:
    if (ctx->pc == 0x4F98E4u) {
        ctx->pc = 0x4F98E8u;
        goto label_4f98e8;
    }
    ctx->pc = 0x4F98E0u;
    {
        const bool branch_taken_0x4f98e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f98e0) {
            ctx->pc = 0x4F98ECu;
            goto label_4f98ec;
        }
    }
    ctx->pc = 0x4F98E8u;
label_4f98e8:
    // 0x4f98e8: 0xe6620de4  swc1        $f2, 0xDE4($s3)
    ctx->pc = 0x4f98e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_4f98ec:
    // 0x4f98ec: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4f98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4f98f0:
    // 0x4f98f0: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4f98f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4f98f4:
    // 0x4f98f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f98f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f98f8:
    // 0x4f98f8: 0x0  nop
    ctx->pc = 0x4f98f8u;
    // NOP
label_4f98fc:
    // 0x4f98fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4f98fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9900:
    // 0x4f9900: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4f9904:
    if (ctx->pc == 0x4F9904u) {
        ctx->pc = 0x4F9908u;
        goto label_4f9908;
    }
    ctx->pc = 0x4F9900u;
    {
        const bool branch_taken_0x4f9900 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9900) {
            ctx->pc = 0x4F990Cu;
            goto label_4f990c;
        }
    }
    ctx->pc = 0x4F9908u;
label_4f9908:
    // 0x4f9908: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4f9908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4f990c:
    // 0x4f990c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4f990cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4f9910:
    // 0x4f9910: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4f9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4f9914:
    // 0x4f9914: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4f9914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4f9918:
    // 0x4f9918: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4f9918u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f991c:
    // 0x4f991c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4f991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4f9920:
    // 0x4f9920: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4f9920u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f9924:
    // 0x4f9924: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4f9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4f9928:
    // 0x4f9928: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4f9928u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f992c:
    // 0x4f992c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4f992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f9930:
    // 0x4f9930: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f9930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f9934:
    // 0x4f9934: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4f9934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f9938:
    // 0x4f9938: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4f9938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f993c:
    // 0x4f993c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f993cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f9940:
    // 0x4f9940: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f9940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f9944:
    // 0x4f9944: 0x3e00008  jr          $ra
label_4f9948:
    if (ctx->pc == 0x4F9948u) {
        ctx->pc = 0x4F9948u;
            // 0x4f9948: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4F994Cu;
        goto label_4f994c;
    }
    ctx->pc = 0x4F9944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F9948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9944u;
            // 0x4f9948: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4F994Cu;
label_4f994c:
    // 0x4f994c: 0x0  nop
    ctx->pc = 0x4f994cu;
    // NOP
label_4f9950:
    // 0x4f9950: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4f9950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4f9954:
    // 0x4f9954: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f9954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f9958:
    // 0x4f9958: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4f9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4f995c:
    // 0x4f995c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4f995cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4f9960:
    // 0x4f9960: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4f9960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4f9964:
    // 0x4f9964: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4f9964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4f9968:
    // 0x4f9968: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4f9968u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f996c:
    // 0x4f996c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f996cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f9970:
    // 0x4f9970: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4f9970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f9974:
    // 0x4f9974: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4f9974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4f9978:
    // 0x4f9978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4f9978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4f997c:
    // 0x4f997c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f9980:
    // 0x4f9980: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f9980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f9984:
    // 0x4f9984: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4f9984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4f9988:
    // 0x4f9988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f9988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f998c:
    // 0x4f998c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4f998cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4f9990:
    // 0x4f9990: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4f9990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4f9994:
    // 0x4f9994: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x4f9994u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4f9998:
    // 0x4f9998: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x4f9998u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4f999c:
    // 0x4f999c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4f999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4f99a0:
    // 0x4f99a0: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4f99a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4f99a4:
    // 0x4f99a4: 0x26910c6c  addiu       $s1, $s4, 0xC6C
    ctx->pc = 0x4f99a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3180));
label_4f99a8:
    // 0x4f99a8: 0x96830c7e  lhu         $v1, 0xC7E($s4)
    ctx->pc = 0x4f99a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 3198)));
label_4f99ac:
    // 0x4f99ac: 0x8c93012c  lw          $s3, 0x12C($a0)
    ctx->pc = 0x4f99acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_4f99b0:
    // 0x4f99b0: 0x8e820da0  lw          $v0, 0xDA0($s4)
    ctx->pc = 0x4f99b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
label_4f99b4:
    // 0x4f99b4: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x4f99b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4f99b8:
    // 0x4f99b8: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x4f99b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f99bc:
    // 0x4f99bc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4f99bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4f99c0:
    // 0x4f99c0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4f99c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4f99c4:
    // 0x4f99c4: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4f99c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4f99c8:
    // 0x4f99c8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f99c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f99cc:
    // 0x4f99cc: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x4f99ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_4f99d0:
    // 0x4f99d0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4f99d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4f99d4:
    // 0x4f99d4: 0x14400239  bnez        $v0, . + 4 + (0x239 << 2)
label_4f99d8:
    if (ctx->pc == 0x4F99D8u) {
        ctx->pc = 0x4F99D8u;
            // 0x4f99d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x4F99DCu;
        goto label_4f99dc;
    }
    ctx->pc = 0x4F99D4u;
    {
        const bool branch_taken_0x4f99d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F99D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F99D4u;
            // 0x4f99d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f99d4) {
            ctx->pc = 0x4FA2BCu;
            goto label_4fa2bc;
        }
    }
    ctx->pc = 0x4F99DCu;
label_4f99dc:
    // 0x4f99dc: 0x8e830db0  lw          $v1, 0xDB0($s4)
    ctx->pc = 0x4f99dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
label_4f99e0:
    // 0x4f99e0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4f99e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f99e4:
    // 0x4f99e4: 0x50620236  beql        $v1, $v0, . + 4 + (0x236 << 2)
label_4f99e8:
    if (ctx->pc == 0x4F99E8u) {
        ctx->pc = 0x4F99E8u;
            // 0x4f99e8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4F99ECu;
        goto label_4f99ec;
    }
    ctx->pc = 0x4F99E4u;
    {
        const bool branch_taken_0x4f99e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f99e4) {
            ctx->pc = 0x4F99E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F99E4u;
            // 0x4f99e8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA2C0u;
            goto label_4fa2c0;
        }
    }
    ctx->pc = 0x4F99ECu;
label_4f99ec:
    // 0x4f99ec: 0xc4d50018  lwc1        $f21, 0x18($a2)
    ctx->pc = 0x4f99ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4f99f0:
    // 0x4f99f0: 0xc6940de4  lwc1        $f20, 0xDE4($s4)
    ctx->pc = 0x4f99f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4f99f4:
    // 0x4f99f4: 0xc04cc1c  jal         func_133070
label_4f99f8:
    if (ctx->pc == 0x4F99F8u) {
        ctx->pc = 0x4F99F8u;
            // 0x4f99f8: 0x268502c0  addiu       $a1, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->pc = 0x4F99FCu;
        goto label_4f99fc;
    }
    ctx->pc = 0x4F99F4u;
    SET_GPR_U32(ctx, 31, 0x4F99FCu);
    ctx->pc = 0x4F99F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F99F4u;
            // 0x4f99f8: 0x268502c0  addiu       $a1, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F99FCu; }
        if (ctx->pc != 0x4F99FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F99FCu; }
        if (ctx->pc != 0x4F99FCu) { return; }
    }
    ctx->pc = 0x4F99FCu;
label_4f99fc:
    // 0x4f99fc: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x4f99fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f9a00:
    // 0x4f9a00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4f9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4f9a04:
    // 0x4f9a04: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x4f9a04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_4f9a08:
    // 0x4f9a08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4f9a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4f9a0c:
    // 0x4f9a0c: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4f9a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4f9a10:
    // 0x4f9a10: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x4f9a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4f9a14:
    // 0x4f9a14: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x4f9a14u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4f9a18:
    // 0x4f9a18: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4f9a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4f9a1c:
    // 0x4f9a1c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f9a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f9a20:
    // 0x4f9a20: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4f9a20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4f9a24:
    // 0x4f9a24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4f9a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f9a28:
    // 0x4f9a28: 0xc0c5f94  jal         func_317E50
label_4f9a2c:
    if (ctx->pc == 0x4F9A2Cu) {
        ctx->pc = 0x4F9A2Cu;
            // 0x4f9a2c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4F9A30u;
        goto label_4f9a30;
    }
    ctx->pc = 0x4F9A28u;
    SET_GPR_U32(ctx, 31, 0x4F9A30u);
    ctx->pc = 0x4F9A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A28u;
            // 0x4f9a2c: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317E50u;
    if (runtime->hasFunction(0x317E50u)) {
        auto targetFn = runtime->lookupFunction(0x317E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9A30u; }
        if (ctx->pc != 0x4F9A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317E50_0x317e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9A30u; }
        if (ctx->pc != 0x4F9A30u) { return; }
    }
    ctx->pc = 0x4F9A30u;
label_4f9a30:
    // 0x4f9a30: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4f9a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4f9a34:
    // 0x4f9a34: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4f9a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4f9a38:
    // 0x4f9a38: 0xc04cc90  jal         func_133240
label_4f9a3c:
    if (ctx->pc == 0x4F9A3Cu) {
        ctx->pc = 0x4F9A3Cu;
            // 0x4f9a3c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4F9A40u;
        goto label_4f9a40;
    }
    ctx->pc = 0x4F9A38u;
    SET_GPR_U32(ctx, 31, 0x4F9A40u);
    ctx->pc = 0x4F9A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A38u;
            // 0x4f9a3c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9A40u; }
        if (ctx->pc != 0x4F9A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9A40u; }
        if (ctx->pc != 0x4F9A40u) { return; }
    }
    ctx->pc = 0x4F9A40u;
label_4f9a40:
    // 0x4f9a40: 0xc04cc2c  jal         func_1330B0
label_4f9a44:
    if (ctx->pc == 0x4F9A44u) {
        ctx->pc = 0x4F9A44u;
            // 0x4f9a44: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4F9A48u;
        goto label_4f9a48;
    }
    ctx->pc = 0x4F9A40u;
    SET_GPR_U32(ctx, 31, 0x4F9A48u);
    ctx->pc = 0x4F9A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A40u;
            // 0x4f9a44: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9A48u; }
        if (ctx->pc != 0x4F9A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9A48u; }
        if (ctx->pc != 0x4F9A48u) { return; }
    }
    ctx->pc = 0x4F9A48u;
label_4f9a48:
    // 0x4f9a48: 0x0  nop
    ctx->pc = 0x4f9a48u;
    // NOP
label_4f9a4c:
    // 0x4f9a4c: 0x0  nop
    ctx->pc = 0x4f9a4cu;
    // NOP
label_4f9a50:
    // 0x4f9a50: 0x46000044  c1          0x44
    ctx->pc = 0x4f9a50u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_4f9a54:
    // 0x4f9a54: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x4f9a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f9a58:
    // 0x4f9a58: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x4f9a58u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_4f9a5c:
    // 0x4f9a5c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4f9a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4f9a60:
    // 0x4f9a60: 0x8e440968  lw          $a0, 0x968($s2)
    ctx->pc = 0x4f9a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f9a64:
    // 0x4f9a64: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x4f9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_4f9a68:
    // 0x4f9a68: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4f9a68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4f9a6c:
    // 0x4f9a6c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4f9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4f9a70:
    // 0x4f9a70: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x4f9a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4f9a74:
    // 0x4f9a74: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
label_4f9a78:
    if (ctx->pc == 0x4F9A78u) {
        ctx->pc = 0x4F9A78u;
            // 0x4f9a78: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F9A7Cu;
        goto label_4f9a7c;
    }
    ctx->pc = 0x4F9A74u;
    {
        const bool branch_taken_0x4f9a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4F9A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A74u;
            // 0x4f9a78: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9a74) {
            ctx->pc = 0x4F9A9Cu;
            goto label_4f9a9c;
        }
    }
    ctx->pc = 0x4F9A7Cu;
label_4f9a7c:
    // 0x4f9a7c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4f9a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4f9a80:
    // 0x4f9a80: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_4f9a84:
    if (ctx->pc == 0x4F9A84u) {
        ctx->pc = 0x4F9A84u;
            // 0x4f9a84: 0x3c02430c  lui         $v0, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
        ctx->pc = 0x4F9A88u;
        goto label_4f9a88;
    }
    ctx->pc = 0x4F9A80u;
    {
        const bool branch_taken_0x4f9a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f9a80) {
            ctx->pc = 0x4F9A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A80u;
            // 0x4f9a84: 0x3c02430c  lui         $v0, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17164 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9A90u;
            goto label_4f9a90;
        }
    }
    ctx->pc = 0x4F9A88u;
label_4f9a88:
    // 0x4f9a88: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f9a8c:
    if (ctx->pc == 0x4F9A8Cu) {
        ctx->pc = 0x4F9A8Cu;
            // 0x4f9a8c: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x4F9A90u;
        goto label_4f9a90;
    }
    ctx->pc = 0x4F9A88u;
    {
        const bool branch_taken_0x4f9a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A88u;
            // 0x4f9a8c: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9a88) {
            ctx->pc = 0x4F9AB0u;
            goto label_4f9ab0;
        }
    }
    ctx->pc = 0x4F9A90u;
label_4f9a90:
    // 0x4f9a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f9a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9a94:
    // 0x4f9a94: 0x10000005  b           . + 4 + (0x5 << 2)
label_4f9a98:
    if (ctx->pc == 0x4F9A98u) {
        ctx->pc = 0x4F9A98u;
            // 0x4f9a98: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F9A9Cu;
        goto label_4f9a9c;
    }
    ctx->pc = 0x4F9A94u;
    {
        const bool branch_taken_0x4f9a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9A94u;
            // 0x4f9a98: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9a94) {
            ctx->pc = 0x4F9AACu;
            goto label_4f9aac;
        }
    }
    ctx->pc = 0x4F9A9Cu;
label_4f9a9c:
    // 0x4f9a9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4f9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4f9aa0:
    // 0x4f9aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4f9aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9aa4:
    // 0x4f9aa4: 0x0  nop
    ctx->pc = 0x4f9aa4u;
    // NOP
label_4f9aa8:
    // 0x4f9aa8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4f9aa8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4f9aac:
    // 0x4f9aac: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x4f9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4f9ab0:
    // 0x4f9ab0: 0x4601ad81  sub.s       $f22, $f21, $f1
    ctx->pc = 0x4f9ab0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_4f9ab4:
    // 0x4f9ab4: 0x38430003  xori        $v1, $v0, 0x3
    ctx->pc = 0x4f9ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_4f9ab8:
    // 0x4f9ab8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x4f9ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_4f9abc:
    // 0x4f9abc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4f9abcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9ac0:
    // 0x4f9ac0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4f9ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9ac4:
    // 0x4f9ac4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x4f9ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f9ac8:
    // 0x4f9ac8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x4f9ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9acc:
    // 0x4f9acc: 0x5040006d  beql        $v0, $zero, . + 4 + (0x6D << 2)
label_4f9ad0:
    if (ctx->pc == 0x4F9AD0u) {
        ctx->pc = 0x4F9AD0u;
            // 0x4f9ad0: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x4F9AD4u;
        goto label_4f9ad4;
    }
    ctx->pc = 0x4F9ACCu;
    {
        const bool branch_taken_0x4f9acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9acc) {
            ctx->pc = 0x4F9AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9ACCu;
            // 0x4f9ad0: 0x8e04007c  lw          $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9C84u;
            goto label_4f9c84;
        }
    }
    ctx->pc = 0x4F9AD4u;
label_4f9ad4:
    // 0x4f9ad4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x4f9ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4f9ad8:
    // 0x4f9ad8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4f9ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4f9adc:
    // 0x4f9adc: 0x10620068  beq         $v1, $v0, . + 4 + (0x68 << 2)
label_4f9ae0:
    if (ctx->pc == 0x4F9AE0u) {
        ctx->pc = 0x4F9AE4u;
        goto label_4f9ae4;
    }
    ctx->pc = 0x4F9ADCu;
    {
        const bool branch_taken_0x4f9adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4f9adc) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9AE4u;
label_4f9ae4:
    // 0x4f9ae4: 0x2c810011  sltiu       $at, $a0, 0x11
    ctx->pc = 0x4f9ae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4f9ae8:
    // 0x4f9ae8: 0x50200063  beql        $at, $zero, . + 4 + (0x63 << 2)
label_4f9aec:
    if (ctx->pc == 0x4F9AECu) {
        ctx->pc = 0x4F9AECu;
            // 0x4f9aec: 0x3c023d97  lui         $v0, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
        ctx->pc = 0x4F9AF0u;
        goto label_4f9af0;
    }
    ctx->pc = 0x4F9AE8u;
    {
        const bool branch_taken_0x4f9ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9ae8) {
            ctx->pc = 0x4F9AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9AE8u;
            // 0x4f9aec: 0x3c023d97  lui         $v0, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9C78u;
            goto label_4f9c78;
        }
    }
    ctx->pc = 0x4F9AF0u;
label_4f9af0:
    // 0x4f9af0: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4f9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4f9af4:
    // 0x4f9af4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4f9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f9af8:
    // 0x4f9af8: 0x24638c40  addiu       $v1, $v1, -0x73C0
    ctx->pc = 0x4f9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937664));
label_4f9afc:
    // 0x4f9afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4f9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f9b00:
    // 0x4f9b00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4f9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f9b04:
    // 0x4f9b04: 0x400008  jr          $v0
label_4f9b08:
    if (ctx->pc == 0x4F9B08u) {
        ctx->pc = 0x4F9B0Cu;
        goto label_4f9b0c;
    }
    ctx->pc = 0x4F9B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4F9B0Cu: goto label_4f9b0c;
            case 0x4F9B48u: goto label_4f9b48;
            case 0x4F9B5Cu: goto label_4f9b5c;
            case 0x4F9B70u: goto label_4f9b70;
            case 0x4F9B84u: goto label_4f9b84;
            case 0x4F9B98u: goto label_4f9b98;
            case 0x4F9BACu: goto label_4f9bac;
            case 0x4F9BC0u: goto label_4f9bc0;
            case 0x4F9BD4u: goto label_4f9bd4;
            case 0x4F9BE8u: goto label_4f9be8;
            case 0x4F9BFCu: goto label_4f9bfc;
            case 0x4F9C10u: goto label_4f9c10;
            case 0x4F9C24u: goto label_4f9c24;
            case 0x4F9C38u: goto label_4f9c38;
            case 0x4F9C4Cu: goto label_4f9c4c;
            case 0x4F9C60u: goto label_4f9c60;
            case 0x4F9C74u: goto label_4f9c74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4F9B0Cu;
label_4f9b0c:
    // 0x4f9b0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4f9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4f9b10:
    // 0x4f9b10: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4f9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4f9b14:
    // 0x4f9b14: 0x8c630d6c  lw          $v1, 0xD6C($v1)
    ctx->pc = 0x4f9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_4f9b18:
    // 0x4f9b18: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4f9b18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4f9b1c:
    // 0x4f9b1c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_4f9b20:
    if (ctx->pc == 0x4F9B20u) {
        ctx->pc = 0x4F9B20u;
            // 0x4f9b20: 0x3c023dd0  lui         $v0, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15824 << 16));
        ctx->pc = 0x4F9B24u;
        goto label_4f9b24;
    }
    ctx->pc = 0x4F9B1Cu;
    {
        const bool branch_taken_0x4f9b1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4f9b1c) {
            ctx->pc = 0x4F9B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9B1Cu;
            // 0x4f9b20: 0x3c023dd0  lui         $v0, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15824 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9B38u;
            goto label_4f9b38;
        }
    }
    ctx->pc = 0x4F9B24u;
label_4f9b24:
    // 0x4f9b24: 0x3c023de3  lui         $v0, 0x3DE3
    ctx->pc = 0x4f9b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15843 << 16));
label_4f9b28:
    // 0x4f9b28: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f9b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f9b2c:
    // 0x4f9b2c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9b30:
    // 0x4f9b30: 0x10000053  b           . + 4 + (0x53 << 2)
label_4f9b34:
    if (ctx->pc == 0x4F9B34u) {
        ctx->pc = 0x4F9B38u;
        goto label_4f9b38;
    }
    ctx->pc = 0x4F9B30u;
    {
        const bool branch_taken_0x4f9b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9b30) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9B38u;
label_4f9b38:
    // 0x4f9b38: 0x344297b4  ori         $v0, $v0, 0x97B4
    ctx->pc = 0x4f9b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38836);
label_4f9b3c:
    // 0x4f9b3c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9b3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9b40:
    // 0x4f9b40: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4f9b44:
    if (ctx->pc == 0x4F9B44u) {
        ctx->pc = 0x4F9B48u;
        goto label_4f9b48;
    }
    ctx->pc = 0x4F9B40u;
    {
        const bool branch_taken_0x4f9b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9b40) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9B48u;
label_4f9b48:
    // 0x4f9b48: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x4f9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_4f9b4c:
    // 0x4f9b4c: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4f9b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4f9b50:
    // 0x4f9b50: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9b54:
    // 0x4f9b54: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4f9b58:
    if (ctx->pc == 0x4F9B58u) {
        ctx->pc = 0x4F9B5Cu;
        goto label_4f9b5c;
    }
    ctx->pc = 0x4F9B54u;
    {
        const bool branch_taken_0x4f9b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9b54) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9B5Cu;
label_4f9b5c:
    // 0x4f9b5c: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x4f9b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_4f9b60:
    // 0x4f9b60: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x4f9b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_4f9b64:
    // 0x4f9b64: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9b68:
    // 0x4f9b68: 0x10000045  b           . + 4 + (0x45 << 2)
label_4f9b6c:
    if (ctx->pc == 0x4F9B6Cu) {
        ctx->pc = 0x4F9B70u;
        goto label_4f9b70;
    }
    ctx->pc = 0x4F9B68u;
    {
        const bool branch_taken_0x4f9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9b68) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9B70u;
label_4f9b70:
    // 0x4f9b70: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x4f9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
label_4f9b74:
    // 0x4f9b74: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f9b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f9b78:
    // 0x4f9b78: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9b7c:
    // 0x4f9b7c: 0x10000040  b           . + 4 + (0x40 << 2)
label_4f9b80:
    if (ctx->pc == 0x4F9B80u) {
        ctx->pc = 0x4F9B84u;
        goto label_4f9b84;
    }
    ctx->pc = 0x4F9B7Cu;
    {
        const bool branch_taken_0x4f9b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9b7c) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9B84u;
label_4f9b84:
    // 0x4f9b84: 0x3c023daa  lui         $v0, 0x3DAA
    ctx->pc = 0x4f9b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15786 << 16));
label_4f9b88:
    // 0x4f9b88: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4f9b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
label_4f9b8c:
    // 0x4f9b8c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9b8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9b90:
    // 0x4f9b90: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4f9b94:
    if (ctx->pc == 0x4F9B94u) {
        ctx->pc = 0x4F9B98u;
        goto label_4f9b98;
    }
    ctx->pc = 0x4F9B90u;
    {
        const bool branch_taken_0x4f9b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9b90) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9B98u;
label_4f9b98:
    // 0x4f9b98: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x4f9b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_4f9b9c:
    // 0x4f9b9c: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x4f9b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_4f9ba0:
    // 0x4f9ba0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9ba4:
    // 0x4f9ba4: 0x10000036  b           . + 4 + (0x36 << 2)
label_4f9ba8:
    if (ctx->pc == 0x4F9BA8u) {
        ctx->pc = 0x4F9BACu;
        goto label_4f9bac;
    }
    ctx->pc = 0x4F9BA4u;
    {
        const bool branch_taken_0x4f9ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9ba4) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9BACu;
label_4f9bac:
    // 0x4f9bac: 0x3c023d17  lui         $v0, 0x3D17
    ctx->pc = 0x4f9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15639 << 16));
label_4f9bb0:
    // 0x4f9bb0: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9bb4:
    // 0x4f9bb4: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9bb8:
    // 0x4f9bb8: 0x10000031  b           . + 4 + (0x31 << 2)
label_4f9bbc:
    if (ctx->pc == 0x4F9BBCu) {
        ctx->pc = 0x4F9BC0u;
        goto label_4f9bc0;
    }
    ctx->pc = 0x4F9BB8u;
    {
        const bool branch_taken_0x4f9bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9bb8) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9BC0u;
label_4f9bc0:
    // 0x4f9bc0: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9bc4:
    // 0x4f9bc4: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9bc8:
    // 0x4f9bc8: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9bc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9bcc:
    // 0x4f9bcc: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4f9bd0:
    if (ctx->pc == 0x4F9BD0u) {
        ctx->pc = 0x4F9BD4u;
        goto label_4f9bd4;
    }
    ctx->pc = 0x4F9BCCu;
    {
        const bool branch_taken_0x4f9bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9bcc) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9BD4u;
label_4f9bd4:
    // 0x4f9bd4: 0x3c023d63  lui         $v0, 0x3D63
    ctx->pc = 0x4f9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15715 << 16));
label_4f9bd8:
    // 0x4f9bd8: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f9bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f9bdc:
    // 0x4f9bdc: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9bdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9be0:
    // 0x4f9be0: 0x10000027  b           . + 4 + (0x27 << 2)
label_4f9be4:
    if (ctx->pc == 0x4F9BE4u) {
        ctx->pc = 0x4F9BE8u;
        goto label_4f9be8;
    }
    ctx->pc = 0x4F9BE0u;
    {
        const bool branch_taken_0x4f9be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9be0) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9BE8u;
label_4f9be8:
    // 0x4f9be8: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9bec:
    // 0x4f9bec: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9bf0:
    // 0x4f9bf0: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9bf4:
    // 0x4f9bf4: 0x10000022  b           . + 4 + (0x22 << 2)
label_4f9bf8:
    if (ctx->pc == 0x4F9BF8u) {
        ctx->pc = 0x4F9BFCu;
        goto label_4f9bfc;
    }
    ctx->pc = 0x4F9BF4u;
    {
        const bool branch_taken_0x4f9bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9bf4) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9BFCu;
label_4f9bfc:
    // 0x4f9bfc: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9c00:
    // 0x4f9c00: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9c04:
    // 0x4f9c04: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c08:
    // 0x4f9c08: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4f9c0c:
    if (ctx->pc == 0x4F9C0Cu) {
        ctx->pc = 0x4F9C10u;
        goto label_4f9c10;
    }
    ctx->pc = 0x4F9C08u;
    {
        const bool branch_taken_0x4f9c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9c08) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9C10u;
label_4f9c10:
    // 0x4f9c10: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9c14:
    // 0x4f9c14: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9c18:
    // 0x4f9c18: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c1c:
    // 0x4f9c1c: 0x10000018  b           . + 4 + (0x18 << 2)
label_4f9c20:
    if (ctx->pc == 0x4F9C20u) {
        ctx->pc = 0x4F9C24u;
        goto label_4f9c24;
    }
    ctx->pc = 0x4F9C1Cu;
    {
        const bool branch_taken_0x4f9c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9c1c) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9C24u;
label_4f9c24:
    // 0x4f9c24: 0x3c023d63  lui         $v0, 0x3D63
    ctx->pc = 0x4f9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15715 << 16));
label_4f9c28:
    // 0x4f9c28: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4f9c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4f9c2c:
    // 0x4f9c2c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c30:
    // 0x4f9c30: 0x10000013  b           . + 4 + (0x13 << 2)
label_4f9c34:
    if (ctx->pc == 0x4F9C34u) {
        ctx->pc = 0x4F9C38u;
        goto label_4f9c38;
    }
    ctx->pc = 0x4F9C30u;
    {
        const bool branch_taken_0x4f9c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9c30) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9C38u;
label_4f9c38:
    // 0x4f9c38: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9c3c:
    // 0x4f9c3c: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9c40:
    // 0x4f9c40: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c44:
    // 0x4f9c44: 0x1000000e  b           . + 4 + (0xE << 2)
label_4f9c48:
    if (ctx->pc == 0x4F9C48u) {
        ctx->pc = 0x4F9C4Cu;
        goto label_4f9c4c;
    }
    ctx->pc = 0x4F9C44u;
    {
        const bool branch_taken_0x4f9c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9c44) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9C4Cu;
label_4f9c4c:
    // 0x4f9c4c: 0x3c023d84  lui         $v0, 0x3D84
    ctx->pc = 0x4f9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15748 << 16));
label_4f9c50:
    // 0x4f9c50: 0x3442bda1  ori         $v0, $v0, 0xBDA1
    ctx->pc = 0x4f9c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48545);
label_4f9c54:
    // 0x4f9c54: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c58:
    // 0x4f9c58: 0x10000009  b           . + 4 + (0x9 << 2)
label_4f9c5c:
    if (ctx->pc == 0x4F9C5Cu) {
        ctx->pc = 0x4F9C60u;
        goto label_4f9c60;
    }
    ctx->pc = 0x4F9C58u;
    {
        const bool branch_taken_0x4f9c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9c58) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9C60u;
label_4f9c60:
    // 0x4f9c60: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9c64:
    // 0x4f9c64: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9c68:
    // 0x4f9c68: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c6c:
    // 0x4f9c6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_4f9c70:
    if (ctx->pc == 0x4F9C70u) {
        ctx->pc = 0x4F9C74u;
        goto label_4f9c74;
    }
    ctx->pc = 0x4F9C6Cu;
    {
        const bool branch_taken_0x4f9c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9c6c) {
            ctx->pc = 0x4F9C80u;
            goto label_4f9c80;
        }
    }
    ctx->pc = 0x4F9C74u;
label_4f9c74:
    // 0x4f9c74: 0x3c023d97  lui         $v0, 0x3D97
    ctx->pc = 0x4f9c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15767 << 16));
label_4f9c78:
    // 0x4f9c78: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4f9c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4f9c7c:
    // 0x4f9c7c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4f9c7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4f9c80:
    // 0x4f9c80: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x4f9c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_4f9c84:
    // 0x4f9c84: 0xc049820  jal         func_126080
label_4f9c88:
    if (ctx->pc == 0x4F9C88u) {
        ctx->pc = 0x4F9C8Cu;
        goto label_4f9c8c;
    }
    ctx->pc = 0x4F9C84u;
    SET_GPR_U32(ctx, 31, 0x4F9C8Cu);
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9C8Cu; }
        if (ctx->pc != 0x4F9C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4F9C8Cu; }
        if (ctx->pc != 0x4F9C8Cu) { return; }
    }
    ctx->pc = 0x4F9C8Cu;
label_4f9c8c:
    // 0x4f9c8c: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4f9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4f9c90:
    // 0x4f9c90: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x4f9c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_4f9c94:
    // 0x4f9c94: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x4f9c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4f9c98:
    // 0x4f9c98: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x4f9c98u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_4f9c9c:
    // 0x4f9c9c: 0x620018  mult        $zero, $v1, $v0
    ctx->pc = 0x4f9c9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f9ca0:
    // 0x4f9ca0: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x4f9ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4f9ca4:
    // 0x4f9ca4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4f9ca4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4f9ca8:
    // 0x4f9ca8: 0x240803e8  addiu       $t0, $zero, 0x3E8
    ctx->pc = 0x4f9ca8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4f9cac:
    // 0x4f9cac: 0x3c038888  lui         $v1, 0x8888
    ctx->pc = 0x4f9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34952 << 16));
label_4f9cb0:
    // 0x4f9cb0: 0x34658889  ori         $a1, $v1, 0x8889
    ctx->pc = 0x4f9cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
label_4f9cb4:
    // 0x4f9cb4: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4f9cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4f9cb8:
    // 0x4f9cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9cbc:
    // 0x4f9cbc: 0x1810  mfhi        $v1
    ctx->pc = 0x4f9cbcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4f9cc0:
    // 0x4f9cc0: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4f9cc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_4f9cc4:
    // 0x4f9cc4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4f9cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4f9cc8:
    // 0x4f9cc8: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x4f9cc8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4f9ccc:
    // 0x4f9ccc: 0x2010  mfhi        $a0
    ctx->pc = 0x4f9cccu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_4f9cd0:
    // 0x4f9cd0: 0xa30019  multu       $a1, $v1
    ctx->pc = 0x4f9cd0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4f9cd4:
    // 0x4f9cd4: 0x1810  mfhi        $v1
    ctx->pc = 0x4f9cd4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4f9cd8:
    // 0x4f9cd8: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x4f9cd8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4f9cdc:
    // 0x4f9cdc: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x4f9cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_4f9ce0:
    // 0x4f9ce0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4f9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4f9ce4:
    // 0x4f9ce4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4f9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4f9ce8:
    // 0x4f9ce8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f9cec:
    // 0x4f9cec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f9cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f9cf0:
    // 0x4f9cf0: 0x1010  mfhi        $v0
    ctx->pc = 0x4f9cf0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_4f9cf4:
    // 0x4f9cf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4f9cf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4f9cf8:
    // 0x4f9cf8: 0x0  nop
    ctx->pc = 0x4f9cf8u;
    // NOP
label_4f9cfc:
    // 0x4f9cfc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4f9cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f9d00:
    // 0x4f9d00: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4f9d00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4f9d04:
    // 0x4f9d04: 0x0  nop
    ctx->pc = 0x4f9d04u;
    // NOP
label_4f9d08:
    // 0x4f9d08: 0x0  nop
    ctx->pc = 0x4f9d08u;
    // NOP
label_4f9d0c:
    // 0x4f9d0c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4f9d0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4f9d10:
    // 0x4f9d10: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4f9d14:
    if (ctx->pc == 0x4F9D14u) {
        ctx->pc = 0x4F9D14u;
            // 0x4f9d14: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4F9D18u;
        goto label_4f9d18;
    }
    ctx->pc = 0x4F9D10u;
    {
        const bool branch_taken_0x4f9d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4f9d10) {
            ctx->pc = 0x4F9D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9D10u;
            // 0x4f9d14: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9D28u;
            goto label_4f9d28;
        }
    }
    ctx->pc = 0x4F9D18u;
label_4f9d18:
    // 0x4f9d18: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f9d18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f9d1c:
    // 0x4f9d1c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f9d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4f9d20:
    // 0x4f9d20: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9d24:
    if (ctx->pc == 0x4F9D24u) {
        ctx->pc = 0x4F9D24u;
            // 0x4f9d24: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x4F9D28u;
        goto label_4f9d28;
    }
    ctx->pc = 0x4F9D20u;
    {
        const bool branch_taken_0x4f9d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9D20u;
            // 0x4f9d24: 0x642821  addu        $a1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9d20) {
            ctx->pc = 0x4F9D40u;
            goto label_4f9d40;
        }
    }
    ctx->pc = 0x4F9D28u;
label_4f9d28:
    // 0x4f9d28: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4f9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4f9d2c:
    // 0x4f9d2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4f9d2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4f9d30:
    // 0x4f9d30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4f9d30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4f9d34:
    // 0x4f9d34: 0x0  nop
    ctx->pc = 0x4f9d34u;
    // NOP
label_4f9d38:
    // 0x4f9d38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f9d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4f9d3c:
    // 0x4f9d3c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x4f9d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9d40:
    // 0x4f9d40: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x4f9d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4f9d44:
    // 0x4f9d44: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x4f9d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4f9d48:
    // 0x4f9d48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4f9d48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f9d4c:
    // 0x4f9d4c: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4f9d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9d50:
    // 0x4f9d50: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x4f9d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4f9d54:
    // 0x4f9d54: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
label_4f9d58:
    if (ctx->pc == 0x4F9D58u) {
        ctx->pc = 0x4F9D58u;
            // 0x4f9d58: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x4F9D5Cu;
        goto label_4f9d5c;
    }
    ctx->pc = 0x4F9D54u;
    {
        const bool branch_taken_0x4f9d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x4F9D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9D54u;
            // 0x4f9d58: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9d54) {
            ctx->pc = 0x4F9D74u;
            goto label_4f9d74;
        }
    }
    ctx->pc = 0x4F9D5Cu;
label_4f9d5c:
    // 0x4f9d5c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4f9d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4f9d60:
    // 0x4f9d60: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4f9d60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4f9d64:
    // 0x4f9d64: 0x2463e9b4  addiu       $v1, $v1, -0x164C
    ctx->pc = 0x4f9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961588));
label_4f9d68:
    // 0x4f9d68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9d6c:
    // 0x4f9d6c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4f9d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f9d70:
    // 0x4f9d70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4f9d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4f9d74:
    // 0x4f9d74: 0x8e05007c  lw          $a1, 0x7C($s0)
    ctx->pc = 0x4f9d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_4f9d78:
    // 0x4f9d78: 0x58a0006b  blezl       $a1, . + 4 + (0x6B << 2)
label_4f9d7c:
    if (ctx->pc == 0x4F9D7Cu) {
        ctx->pc = 0x4F9D7Cu;
            // 0x4f9d7c: 0x8e07005c  lw          $a3, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4F9D80u;
        goto label_4f9d80;
    }
    ctx->pc = 0x4F9D78u;
    {
        const bool branch_taken_0x4f9d78 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x4f9d78) {
            ctx->pc = 0x4F9D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9D78u;
            // 0x4f9d7c: 0x8e07005c  lw          $a3, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9F28u;
            goto label_4f9f28;
        }
    }
    ctx->pc = 0x4F9D80u;
label_4f9d80:
    // 0x4f9d80: 0x8e07005c  lw          $a3, 0x5C($s0)
    ctx->pc = 0x4f9d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4f9d84:
    // 0x4f9d84: 0x38e60005  xori        $a2, $a3, 0x5
    ctx->pc = 0x4f9d84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)5);
label_4f9d88:
    // 0x4f9d88: 0x38e50006  xori        $a1, $a3, 0x6
    ctx->pc = 0x4f9d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)6);
label_4f9d8c:
    // 0x4f9d8c: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x4f9d8cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9d90:
    // 0x4f9d90: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f9d90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9d94:
    // 0x4f9d94: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4f9d94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_4f9d98:
    // 0x4f9d98: 0x38e50009  xori        $a1, $a3, 0x9
    ctx->pc = 0x4f9d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)9);
label_4f9d9c:
    // 0x4f9d9c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f9d9cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9da0:
    // 0x4f9da0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4f9da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4f9da4:
    // 0x4f9da4: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
label_4f9da8:
    if (ctx->pc == 0x4F9DA8u) {
        ctx->pc = 0x4F9DA8u;
            // 0x4f9da8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F9DACu;
        goto label_4f9dac;
    }
    ctx->pc = 0x4F9DA4u;
    {
        const bool branch_taken_0x4f9da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9da4) {
            ctx->pc = 0x4F9DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9DA4u;
            // 0x4f9da8: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9E10u;
            goto label_4f9e10;
        }
    }
    ctx->pc = 0x4F9DACu;
label_4f9dac:
    // 0x4f9dac: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4f9dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4f9db0:
    // 0x4f9db0: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4f9db0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f9db4:
    // 0x4f9db4: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4f9db4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4f9db8:
    // 0x4f9db8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f9db8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f9dbc:
    // 0x4f9dbc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f9dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f9dc0:
    // 0x4f9dc0: 0x24a5d6b8  addiu       $a1, $a1, -0x2948
    ctx->pc = 0x4f9dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956728));
label_4f9dc4:
    // 0x4f9dc4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f9dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f9dc8:
    // 0x4f9dc8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4f9dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f9dcc:
    // 0x4f9dcc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4f9dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f9dd0:
    // 0x4f9dd0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f9dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f9dd4:
    // 0x4f9dd4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x4f9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f9dd8:
    // 0x4f9dd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9ddc:
    // 0x4f9ddc: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4f9de0:
    if (ctx->pc == 0x4F9DE0u) {
        ctx->pc = 0x4F9DE0u;
            // 0x4f9de0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4F9DE4u;
        goto label_4f9de4;
    }
    ctx->pc = 0x4F9DDCu;
    {
        const bool branch_taken_0x4f9ddc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4f9ddc) {
            ctx->pc = 0x4F9DE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9DDCu;
            // 0x4f9de0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9DF0u;
            goto label_4f9df0;
        }
    }
    ctx->pc = 0x4F9DE4u;
label_4f9de4:
    // 0x4f9de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9de8:
    // 0x4f9de8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9dec:
    if (ctx->pc == 0x4F9DECu) {
        ctx->pc = 0x4F9DECu;
            // 0x4f9dec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9DF0u;
        goto label_4f9df0;
    }
    ctx->pc = 0x4F9DE8u;
    {
        const bool branch_taken_0x4f9de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9DE8u;
            // 0x4f9dec: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9de8) {
            ctx->pc = 0x4F9E08u;
            goto label_4f9e08;
        }
    }
    ctx->pc = 0x4F9DF0u;
label_4f9df0:
    // 0x4f9df0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4f9df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4f9df4:
    // 0x4f9df4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f9df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f9df8:
    // 0x4f9df8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9df8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9dfc:
    // 0x4f9dfc: 0x0  nop
    ctx->pc = 0x4f9dfcu;
    // NOP
label_4f9e00:
    // 0x4f9e00: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4f9e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f9e04:
    // 0x4f9e04: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4f9e04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4f9e08:
    // 0x4f9e08: 0x100000af  b           . + 4 + (0xAF << 2)
label_4f9e0c:
    if (ctx->pc == 0x4F9E0Cu) {
        ctx->pc = 0x4F9E0Cu;
            // 0x4f9e0c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F9E10u;
        goto label_4f9e10;
    }
    ctx->pc = 0x4F9E08u;
    {
        const bool branch_taken_0x4f9e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9E08u;
            // 0x4f9e0c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9e08) {
            ctx->pc = 0x4FA0C8u;
            goto label_4fa0c8;
        }
    }
    ctx->pc = 0x4F9E10u;
label_4f9e10:
    // 0x4f9e10: 0x54e5001a  bnel        $a3, $a1, . + 4 + (0x1A << 2)
label_4f9e14:
    if (ctx->pc == 0x4F9E14u) {
        ctx->pc = 0x4F9E14u;
            // 0x4f9e14: 0x8e0600a0  lw          $a2, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x4F9E18u;
        goto label_4f9e18;
    }
    ctx->pc = 0x4F9E10u;
    {
        const bool branch_taken_0x4f9e10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f9e10) {
            ctx->pc = 0x4F9E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9E10u;
            // 0x4f9e14: 0x8e0600a0  lw          $a2, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9E7Cu;
            goto label_4f9e7c;
        }
    }
    ctx->pc = 0x4F9E18u;
label_4f9e18:
    // 0x4f9e18: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4f9e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4f9e1c:
    // 0x4f9e1c: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4f9e1cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f9e20:
    // 0x4f9e20: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4f9e20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4f9e24:
    // 0x4f9e24: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f9e28:
    // 0x4f9e28: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f9e28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f9e2c:
    // 0x4f9e2c: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x4f9e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
label_4f9e30:
    // 0x4f9e30: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f9e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f9e34:
    // 0x4f9e34: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4f9e34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f9e38:
    // 0x4f9e38: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4f9e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f9e3c:
    // 0x4f9e3c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f9e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f9e40:
    // 0x4f9e40: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x4f9e40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f9e44:
    // 0x4f9e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9e48:
    // 0x4f9e48: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4f9e4c:
    if (ctx->pc == 0x4F9E4Cu) {
        ctx->pc = 0x4F9E4Cu;
            // 0x4f9e4c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4F9E50u;
        goto label_4f9e50;
    }
    ctx->pc = 0x4F9E48u;
    {
        const bool branch_taken_0x4f9e48 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4f9e48) {
            ctx->pc = 0x4F9E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9E48u;
            // 0x4f9e4c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9E5Cu;
            goto label_4f9e5c;
        }
    }
    ctx->pc = 0x4F9E50u;
label_4f9e50:
    // 0x4f9e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9e54:
    // 0x4f9e54: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9e58:
    if (ctx->pc == 0x4F9E58u) {
        ctx->pc = 0x4F9E58u;
            // 0x4f9e58: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9E5Cu;
        goto label_4f9e5c;
    }
    ctx->pc = 0x4F9E54u;
    {
        const bool branch_taken_0x4f9e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9E54u;
            // 0x4f9e58: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9e54) {
            ctx->pc = 0x4F9E74u;
            goto label_4f9e74;
        }
    }
    ctx->pc = 0x4F9E5Cu;
label_4f9e5c:
    // 0x4f9e5c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4f9e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4f9e60:
    // 0x4f9e60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f9e60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f9e64:
    // 0x4f9e64: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9e64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9e68:
    // 0x4f9e68: 0x0  nop
    ctx->pc = 0x4f9e68u;
    // NOP
label_4f9e6c:
    // 0x4f9e6c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4f9e6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f9e70:
    // 0x4f9e70: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4f9e70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4f9e74:
    // 0x4f9e74: 0x10000093  b           . + 4 + (0x93 << 2)
label_4f9e78:
    if (ctx->pc == 0x4F9E78u) {
        ctx->pc = 0x4F9E7Cu;
        goto label_4f9e7c;
    }
    ctx->pc = 0x4F9E74u;
    {
        const bool branch_taken_0x4f9e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9e74) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4F9E7Cu;
label_4f9e7c:
    // 0x4f9e7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f9e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f9e80:
    // 0x4f9e80: 0x54c5001a  bnel        $a2, $a1, . + 4 + (0x1A << 2)
label_4f9e84:
    if (ctx->pc == 0x4F9E84u) {
        ctx->pc = 0x4F9E84u;
            // 0x4f9e84: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x4F9E88u;
        goto label_4f9e88;
    }
    ctx->pc = 0x4F9E80u;
    {
        const bool branch_taken_0x4f9e80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f9e80) {
            ctx->pc = 0x4F9E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9E80u;
            // 0x4f9e84: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9EECu;
            goto label_4f9eec;
        }
    }
    ctx->pc = 0x4F9E88u;
label_4f9e88:
    // 0x4f9e88: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4f9e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4f9e8c:
    // 0x4f9e8c: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4f9e8cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f9e90:
    // 0x4f9e90: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4f9e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4f9e94:
    // 0x4f9e94: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f9e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f9e98:
    // 0x4f9e98: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f9e98u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f9e9c:
    // 0x4f9e9c: 0x24a5da78  addiu       $a1, $a1, -0x2588
    ctx->pc = 0x4f9e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
label_4f9ea0:
    // 0x4f9ea0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f9ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f9ea4:
    // 0x4f9ea4: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4f9ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f9ea8:
    // 0x4f9ea8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4f9ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f9eac:
    // 0x4f9eac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f9eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f9eb0:
    // 0x4f9eb0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x4f9eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f9eb4:
    // 0x4f9eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9eb8:
    // 0x4f9eb8: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4f9ebc:
    if (ctx->pc == 0x4F9EBCu) {
        ctx->pc = 0x4F9EBCu;
            // 0x4f9ebc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4F9EC0u;
        goto label_4f9ec0;
    }
    ctx->pc = 0x4F9EB8u;
    {
        const bool branch_taken_0x4f9eb8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4f9eb8) {
            ctx->pc = 0x4F9EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9EB8u;
            // 0x4f9ebc: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9ECCu;
            goto label_4f9ecc;
        }
    }
    ctx->pc = 0x4F9EC0u;
label_4f9ec0:
    // 0x4f9ec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9ec4:
    // 0x4f9ec4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9ec8:
    if (ctx->pc == 0x4F9EC8u) {
        ctx->pc = 0x4F9EC8u;
            // 0x4f9ec8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9ECCu;
        goto label_4f9ecc;
    }
    ctx->pc = 0x4F9EC4u;
    {
        const bool branch_taken_0x4f9ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9EC4u;
            // 0x4f9ec8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9ec4) {
            ctx->pc = 0x4F9EE4u;
            goto label_4f9ee4;
        }
    }
    ctx->pc = 0x4F9ECCu;
label_4f9ecc:
    // 0x4f9ecc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4f9eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4f9ed0:
    // 0x4f9ed0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f9ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f9ed4:
    // 0x4f9ed4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9ed4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9ed8:
    // 0x4f9ed8: 0x0  nop
    ctx->pc = 0x4f9ed8u;
    // NOP
label_4f9edc:
    // 0x4f9edc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4f9edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f9ee0:
    // 0x4f9ee0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4f9ee0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4f9ee4:
    // 0x4f9ee4: 0x10000077  b           . + 4 + (0x77 << 2)
label_4f9ee8:
    if (ctx->pc == 0x4F9EE8u) {
        ctx->pc = 0x4F9EECu;
        goto label_4f9eec;
    }
    ctx->pc = 0x4F9EE4u;
    {
        const bool branch_taken_0x4f9ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9ee4) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4F9EECu;
label_4f9eec:
    // 0x4f9eec: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x4f9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4f9ef0:
    // 0x4f9ef0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9ef4:
    // 0x4f9ef4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4f9ef8:
    if (ctx->pc == 0x4F9EF8u) {
        ctx->pc = 0x4F9EF8u;
            // 0x4f9ef8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4F9EFCu;
        goto label_4f9efc;
    }
    ctx->pc = 0x4F9EF4u;
    {
        const bool branch_taken_0x4f9ef4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4f9ef4) {
            ctx->pc = 0x4F9EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9EF4u;
            // 0x4f9ef8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9F08u;
            goto label_4f9f08;
        }
    }
    ctx->pc = 0x4F9EFCu;
label_4f9efc:
    // 0x4f9efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9f00:
    // 0x4f9f00: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9f04:
    if (ctx->pc == 0x4F9F04u) {
        ctx->pc = 0x4F9F04u;
            // 0x4f9f04: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9F08u;
        goto label_4f9f08;
    }
    ctx->pc = 0x4F9F00u;
    {
        const bool branch_taken_0x4f9f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9F00u;
            // 0x4f9f04: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9f00) {
            ctx->pc = 0x4F9F20u;
            goto label_4f9f20;
        }
    }
    ctx->pc = 0x4F9F08u;
label_4f9f08:
    // 0x4f9f08: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4f9f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4f9f0c:
    // 0x4f9f0c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f9f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f9f10:
    // 0x4f9f10: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9f10u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9f14:
    // 0x4f9f14: 0x0  nop
    ctx->pc = 0x4f9f14u;
    // NOP
label_4f9f18:
    // 0x4f9f18: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4f9f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f9f1c:
    // 0x4f9f1c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4f9f1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4f9f20:
    // 0x4f9f20: 0x10000068  b           . + 4 + (0x68 << 2)
label_4f9f24:
    if (ctx->pc == 0x4F9F24u) {
        ctx->pc = 0x4F9F28u;
        goto label_4f9f28;
    }
    ctx->pc = 0x4F9F20u;
    {
        const bool branch_taken_0x4f9f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9f20) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4F9F28u;
label_4f9f28:
    // 0x4f9f28: 0x38e60005  xori        $a2, $a3, 0x5
    ctx->pc = 0x4f9f28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)5);
label_4f9f2c:
    // 0x4f9f2c: 0x38e50006  xori        $a1, $a3, 0x6
    ctx->pc = 0x4f9f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)6);
label_4f9f30:
    // 0x4f9f30: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x4f9f30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9f34:
    // 0x4f9f34: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f9f34u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9f38:
    // 0x4f9f38: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x4f9f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_4f9f3c:
    // 0x4f9f3c: 0x38e50009  xori        $a1, $a3, 0x9
    ctx->pc = 0x4f9f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)9);
label_4f9f40:
    // 0x4f9f40: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x4f9f40u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4f9f44:
    // 0x4f9f44: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4f9f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_4f9f48:
    // 0x4f9f48: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
label_4f9f4c:
    if (ctx->pc == 0x4F9F4Cu) {
        ctx->pc = 0x4F9F4Cu;
            // 0x4f9f4c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4F9F50u;
        goto label_4f9f50;
    }
    ctx->pc = 0x4F9F48u;
    {
        const bool branch_taken_0x4f9f48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9f48) {
            ctx->pc = 0x4F9F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9F48u;
            // 0x4f9f4c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9FB4u;
            goto label_4f9fb4;
        }
    }
    ctx->pc = 0x4F9F50u;
label_4f9f50:
    // 0x4f9f50: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4f9f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4f9f54:
    // 0x4f9f54: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4f9f54u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f9f58:
    // 0x4f9f58: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4f9f58u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4f9f5c:
    // 0x4f9f5c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f9f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f9f60:
    // 0x4f9f60: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f9f60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f9f64:
    // 0x4f9f64: 0x24a5d6b8  addiu       $a1, $a1, -0x2948
    ctx->pc = 0x4f9f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956728));
label_4f9f68:
    // 0x4f9f68: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f9f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f9f6c:
    // 0x4f9f6c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4f9f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f9f70:
    // 0x4f9f70: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4f9f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f9f74:
    // 0x4f9f74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f9f78:
    // 0x4f9f78: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9f7c:
    // 0x4f9f7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9f80:
    // 0x4f9f80: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4f9f84:
    if (ctx->pc == 0x4F9F84u) {
        ctx->pc = 0x4F9F84u;
            // 0x4f9f84: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4F9F88u;
        goto label_4f9f88;
    }
    ctx->pc = 0x4F9F80u;
    {
        const bool branch_taken_0x4f9f80 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4f9f80) {
            ctx->pc = 0x4F9F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9F80u;
            // 0x4f9f84: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4F9F94u;
            goto label_4f9f94;
        }
    }
    ctx->pc = 0x4F9F88u;
label_4f9f88:
    // 0x4f9f88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9f8c:
    // 0x4f9f8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9f90:
    if (ctx->pc == 0x4F9F90u) {
        ctx->pc = 0x4F9F90u;
            // 0x4f9f90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4F9F94u;
        goto label_4f9f94;
    }
    ctx->pc = 0x4F9F8Cu;
    {
        const bool branch_taken_0x4f9f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9F8Cu;
            // 0x4f9f90: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9f8c) {
            ctx->pc = 0x4F9FACu;
            goto label_4f9fac;
        }
    }
    ctx->pc = 0x4F9F94u;
label_4f9f94:
    // 0x4f9f94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4f9f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4f9f98:
    // 0x4f9f98: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4f9f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4f9f9c:
    // 0x4f9f9c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4f9f9cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9fa0:
    // 0x4f9fa0: 0x0  nop
    ctx->pc = 0x4f9fa0u;
    // NOP
label_4f9fa4:
    // 0x4f9fa4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4f9fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4f9fa8:
    // 0x4f9fa8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4f9fa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4f9fac:
    // 0x4f9fac: 0x10000045  b           . + 4 + (0x45 << 2)
label_4f9fb0:
    if (ctx->pc == 0x4F9FB0u) {
        ctx->pc = 0x4F9FB4u;
        goto label_4f9fb4;
    }
    ctx->pc = 0x4F9FACu;
    {
        const bool branch_taken_0x4f9fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f9fac) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4F9FB4u;
label_4f9fb4:
    // 0x4f9fb4: 0x54e5001a  bnel        $a3, $a1, . + 4 + (0x1A << 2)
label_4f9fb8:
    if (ctx->pc == 0x4F9FB8u) {
        ctx->pc = 0x4F9FB8u;
            // 0x4f9fb8: 0x8e0600a0  lw          $a2, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x4F9FBCu;
        goto label_4f9fbc;
    }
    ctx->pc = 0x4F9FB4u;
    {
        const bool branch_taken_0x4f9fb4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        if (branch_taken_0x4f9fb4) {
            ctx->pc = 0x4F9FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9FB4u;
            // 0x4f9fb8: 0x8e0600a0  lw          $a2, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA020u;
            goto label_4fa020;
        }
    }
    ctx->pc = 0x4F9FBCu;
label_4f9fbc:
    // 0x4f9fbc: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4f9fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4f9fc0:
    // 0x4f9fc0: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4f9fc0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4f9fc4:
    // 0x4f9fc4: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4f9fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4f9fc8:
    // 0x4f9fc8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4f9fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4f9fcc:
    // 0x4f9fcc: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4f9fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4f9fd0:
    // 0x4f9fd0: 0x24a5de38  addiu       $a1, $a1, -0x21C8
    ctx->pc = 0x4f9fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958648));
label_4f9fd4:
    // 0x4f9fd4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f9fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4f9fd8:
    // 0x4f9fd8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4f9fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4f9fdc:
    // 0x4f9fdc: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4f9fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f9fe0:
    // 0x4f9fe0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4f9fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4f9fe4:
    // 0x4f9fe4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4f9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4f9fe8:
    // 0x4f9fe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f9fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f9fec:
    // 0x4f9fec: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4f9ff0:
    if (ctx->pc == 0x4F9FF0u) {
        ctx->pc = 0x4F9FF0u;
            // 0x4f9ff0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4F9FF4u;
        goto label_4f9ff4;
    }
    ctx->pc = 0x4F9FECu;
    {
        const bool branch_taken_0x4f9fec = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4f9fec) {
            ctx->pc = 0x4F9FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9FECu;
            // 0x4f9ff0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA000u;
            goto label_4fa000;
        }
    }
    ctx->pc = 0x4F9FF4u;
label_4f9ff4:
    // 0x4f9ff4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4f9ff4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4f9ff8:
    // 0x4f9ff8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f9ffc:
    if (ctx->pc == 0x4F9FFCu) {
        ctx->pc = 0x4F9FFCu;
            // 0x4f9ffc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA000u;
        goto label_4fa000;
    }
    ctx->pc = 0x4F9FF8u;
    {
        const bool branch_taken_0x4f9ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F9FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4F9FF8u;
            // 0x4f9ffc: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9ff8) {
            ctx->pc = 0x4FA018u;
            goto label_4fa018;
        }
    }
    ctx->pc = 0x4FA000u;
label_4fa000:
    // 0x4fa000: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa004:
    // 0x4fa004: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa008:
    // 0x4fa008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa00c:
    // 0x4fa00c: 0x0  nop
    ctx->pc = 0x4fa00cu;
    // NOP
label_4fa010:
    // 0x4fa010: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa010u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa014:
    // 0x4fa014: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa014u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa018:
    // 0x4fa018: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4fa01c:
    if (ctx->pc == 0x4FA01Cu) {
        ctx->pc = 0x4FA020u;
        goto label_4fa020;
    }
    ctx->pc = 0x4FA018u;
    {
        const bool branch_taken_0x4fa018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa018) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4FA020u;
label_4fa020:
    // 0x4fa020: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4fa020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fa024:
    // 0x4fa024: 0x54c5001a  bnel        $a2, $a1, . + 4 + (0x1A << 2)
label_4fa028:
    if (ctx->pc == 0x4FA028u) {
        ctx->pc = 0x4FA028u;
            // 0x4fa028: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->pc = 0x4FA02Cu;
        goto label_4fa02c;
    }
    ctx->pc = 0x4FA024u;
    {
        const bool branch_taken_0x4fa024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x4fa024) {
            ctx->pc = 0x4FA028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA024u;
            // 0x4fa028: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA090u;
            goto label_4fa090;
        }
    }
    ctx->pc = 0x4FA02Cu;
label_4fa02c:
    // 0x4fa02c: 0x228c0  sll         $a1, $v0, 3
    ctx->pc = 0x4fa02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fa030:
    // 0x4fa030: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4fa030u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4fa034:
    // 0x4fa034: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x4fa034u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4fa038:
    // 0x4fa038: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x4fa038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_4fa03c:
    // 0x4fa03c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x4fa03cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_4fa040:
    // 0x4fa040: 0x24a5da78  addiu       $a1, $a1, -0x2588
    ctx->pc = 0x4fa040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957688));
label_4fa044:
    // 0x4fa044: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4fa044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4fa048:
    // 0x4fa048: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x4fa048u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4fa04c:
    // 0x4fa04c: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x4fa04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4fa050:
    // 0x4fa050: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4fa050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4fa054:
    // 0x4fa054: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fa054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fa058:
    // 0x4fa058: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fa058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa05c:
    // 0x4fa05c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4fa060:
    if (ctx->pc == 0x4FA060u) {
        ctx->pc = 0x4FA060u;
            // 0x4fa060: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FA064u;
        goto label_4fa064;
    }
    ctx->pc = 0x4FA05Cu;
    {
        const bool branch_taken_0x4fa05c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4fa05c) {
            ctx->pc = 0x4FA060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA05Cu;
            // 0x4fa060: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA070u;
            goto label_4fa070;
        }
    }
    ctx->pc = 0x4FA064u;
label_4fa064:
    // 0x4fa064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa068:
    // 0x4fa068: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fa06c:
    if (ctx->pc == 0x4FA06Cu) {
        ctx->pc = 0x4FA06Cu;
            // 0x4fa06c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA070u;
        goto label_4fa070;
    }
    ctx->pc = 0x4FA068u;
    {
        const bool branch_taken_0x4fa068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA068u;
            // 0x4fa06c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa068) {
            ctx->pc = 0x4FA088u;
            goto label_4fa088;
        }
    }
    ctx->pc = 0x4FA070u;
label_4fa070:
    // 0x4fa070: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa074:
    // 0x4fa074: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa078:
    // 0x4fa078: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa07c:
    // 0x4fa07c: 0x0  nop
    ctx->pc = 0x4fa07cu;
    // NOP
label_4fa080:
    // 0x4fa080: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa080u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa084:
    // 0x4fa084: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa084u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa088:
    // 0x4fa088: 0x1000000e  b           . + 4 + (0xE << 2)
label_4fa08c:
    if (ctx->pc == 0x4FA08Cu) {
        ctx->pc = 0x4FA090u;
        goto label_4fa090;
    }
    ctx->pc = 0x4FA088u;
    {
        const bool branch_taken_0x4fa088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa088) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4FA090u;
label_4fa090:
    // 0x4fa090: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4fa090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fa094:
    // 0x4fa094: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fa094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa098:
    // 0x4fa098: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4fa09c:
    if (ctx->pc == 0x4FA09Cu) {
        ctx->pc = 0x4FA09Cu;
            // 0x4fa09c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FA0A0u;
        goto label_4fa0a0;
    }
    ctx->pc = 0x4FA098u;
    {
        const bool branch_taken_0x4fa098 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4fa098) {
            ctx->pc = 0x4FA09Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA098u;
            // 0x4fa09c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA0ACu;
            goto label_4fa0ac;
        }
    }
    ctx->pc = 0x4FA0A0u;
label_4fa0a0:
    // 0x4fa0a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa0a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa0a4:
    // 0x4fa0a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fa0a8:
    if (ctx->pc == 0x4FA0A8u) {
        ctx->pc = 0x4FA0A8u;
            // 0x4fa0a8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA0ACu;
        goto label_4fa0ac;
    }
    ctx->pc = 0x4FA0A4u;
    {
        const bool branch_taken_0x4fa0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA0A4u;
            // 0x4fa0a8: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa0a4) {
            ctx->pc = 0x4FA0C4u;
            goto label_4fa0c4;
        }
    }
    ctx->pc = 0x4FA0ACu;
label_4fa0ac:
    // 0x4fa0ac: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa0b0:
    // 0x4fa0b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa0b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa0b4:
    // 0x4fa0b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa0b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa0b8:
    // 0x4fa0b8: 0x0  nop
    ctx->pc = 0x4fa0b8u;
    // NOP
label_4fa0bc:
    // 0x4fa0bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa0bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa0c0:
    // 0x4fa0c0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa0c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa0c4:
    // 0x4fa0c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4fa0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4fa0c8:
    // 0x4fa0c8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_4fa0cc:
    if (ctx->pc == 0x4FA0CCu) {
        ctx->pc = 0x4FA0CCu;
            // 0x4fa0cc: 0x96050106  lhu         $a1, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->pc = 0x4FA0D0u;
        goto label_4fa0d0;
    }
    ctx->pc = 0x4FA0C8u;
    {
        const bool branch_taken_0x4fa0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fa0c8) {
            ctx->pc = 0x4FA0CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA0C8u;
            // 0x4fa0cc: 0x96050106  lhu         $a1, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA0DCu;
            goto label_4fa0dc;
        }
    }
    ctx->pc = 0x4FA0D0u;
label_4fa0d0:
    // 0x4fa0d0: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4fa0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa0d4:
    // 0x4fa0d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4fa0d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4fa0d8:
    // 0x4fa0d8: 0x96050106  lhu         $a1, 0x106($s0)
    ctx->pc = 0x4fa0d8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
label_4fa0dc:
    // 0x4fa0dc: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fa0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4fa0e0:
    // 0x4fa0e0: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x4fa0e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4fa0e4:
    // 0x4fa0e4: 0x92060104  lbu         $a2, 0x104($s0)
    ctx->pc = 0x4fa0e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 260)));
label_4fa0e8:
    // 0x4fa0e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4fa0e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4fa0ec:
    // 0x4fa0ec: 0x92070105  lbu         $a3, 0x105($s0)
    ctx->pc = 0x4fa0ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 261)));
label_4fa0f0:
    // 0x4fa0f0: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x4fa0f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fa0f4:
    // 0x4fa0f4: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x4fa0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4fa0f8:
    // 0x4fa0f8: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x4fa0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4fa0fc:
    // 0x4fa0fc: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x4fa0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_4fa100:
    // 0x4fa100: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x4fa100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa104:
    // 0x4fa104: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4fa104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4fa108:
    // 0x4fa108: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x4fa108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4fa10c:
    // 0x4fa10c: 0x1810  mfhi        $v1
    ctx->pc = 0x4fa10cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4fa110:
    // 0x4fa110: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4fa110u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_4fa114:
    // 0x4fa114: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fa114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa118:
    // 0x4fa118: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x4fa118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4fa11c:
    // 0x4fa11c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x4fa11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4fa120:
    // 0x4fa120: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4fa120u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa124:
    // 0x4fa124: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fa124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fa128:
    // 0x4fa128: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa128u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa12c:
    // 0x4fa12c: 0x0  nop
    ctx->pc = 0x4fa12cu;
    // NOP
label_4fa130:
    // 0x4fa130: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fa130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4fa134:
    // 0x4fa134: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_4fa138:
    if (ctx->pc == 0x4FA138u) {
        ctx->pc = 0x4FA138u;
            // 0x4fa138: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x4FA13Cu;
        goto label_4fa13c;
    }
    ctx->pc = 0x4FA134u;
    {
        const bool branch_taken_0x4fa134 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FA138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA134u;
            // 0x4fa138: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa134) {
            ctx->pc = 0x4FA148u;
            goto label_4fa148;
        }
    }
    ctx->pc = 0x4FA13Cu;
label_4fa13c:
    // 0x4fa13c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4fa13cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa140:
    // 0x4fa140: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_4fa144:
    if (ctx->pc == 0x4FA144u) {
        ctx->pc = 0x4FA148u;
        goto label_4fa148;
    }
    ctx->pc = 0x4FA140u;
    {
        const bool branch_taken_0x4fa140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa140) {
            ctx->pc = 0x4FA1B0u;
            goto label_4fa1b0;
        }
    }
    ctx->pc = 0x4FA148u;
label_4fa148:
    // 0x4fa148: 0x3c023c17  lui         $v0, 0x3C17
    ctx->pc = 0x4fa148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
label_4fa14c:
    // 0x4fa14c: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fa14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fa150:
    // 0x4fa150: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa154:
    // 0x4fa154: 0x0  nop
    ctx->pc = 0x4fa154u;
    // NOP
label_4fa158:
    // 0x4fa158: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4fa158u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4fa15c:
    // 0x4fa15c: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4fa15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa160:
    // 0x4fa160: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x4fa160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fa164:
    // 0x4fa164: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x4fa164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa168:
    // 0x4fa168: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4fa16c:
    if (ctx->pc == 0x4FA16Cu) {
        ctx->pc = 0x4FA16Cu;
            // 0x4fa16c: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4FA170u;
        goto label_4fa170;
    }
    ctx->pc = 0x4FA168u;
    {
        const bool branch_taken_0x4fa168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa168) {
            ctx->pc = 0x4FA16Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA168u;
            // 0x4fa16c: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA190u;
            goto label_4fa190;
        }
    }
    ctx->pc = 0x4FA170u;
label_4fa170:
    // 0x4fa170: 0xc6810df4  lwc1        $f1, 0xDF4($s4)
    ctx->pc = 0x4fa170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fa174:
    // 0x4fa174: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fa174u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa178:
    // 0x4fa178: 0x0  nop
    ctx->pc = 0x4fa178u;
    // NOP
label_4fa17c:
    // 0x4fa17c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4fa17cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa180:
    // 0x4fa180: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4fa184:
    if (ctx->pc == 0x4FA184u) {
        ctx->pc = 0x4FA188u;
        goto label_4fa188;
    }
    ctx->pc = 0x4FA180u;
    {
        const bool branch_taken_0x4fa180 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa180) {
            ctx->pc = 0x4FA18Cu;
            goto label_4fa18c;
        }
    }
    ctx->pc = 0x4FA188u;
label_4fa188:
    // 0x4fa188: 0xe6820de4  swc1        $f2, 0xDE4($s4)
    ctx->pc = 0x4fa188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa18c:
    // 0x4fa18c: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4fa18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4fa190:
    // 0x4fa190: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4fa190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4fa194:
    // 0x4fa194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa198:
    // 0x4fa198: 0x0  nop
    ctx->pc = 0x4fa198u;
    // NOP
label_4fa19c:
    // 0x4fa19c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4fa19cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa1a0:
    // 0x4fa1a0: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_4fa1a4:
    if (ctx->pc == 0x4FA1A4u) {
        ctx->pc = 0x4FA1A8u;
        goto label_4fa1a8;
    }
    ctx->pc = 0x4FA1A0u;
    {
        const bool branch_taken_0x4fa1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa1a0) {
            ctx->pc = 0x4FA2BCu;
            goto label_4fa2bc;
        }
    }
    ctx->pc = 0x4FA1A8u;
label_4fa1a8:
    // 0x4fa1a8: 0x10000044  b           . + 4 + (0x44 << 2)
label_4fa1ac:
    if (ctx->pc == 0x4FA1ACu) {
        ctx->pc = 0x4FA1ACu;
            // 0x4fa1ac: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FA1B0u;
        goto label_4fa1b0;
    }
    ctx->pc = 0x4FA1A8u;
    {
        const bool branch_taken_0x4fa1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA1A8u;
            // 0x4fa1ac: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa1a8) {
            ctx->pc = 0x4FA2BCu;
            goto label_4fa2bc;
        }
    }
    ctx->pc = 0x4FA1B0u;
label_4fa1b0:
    // 0x4fa1b0: 0x0  nop
    ctx->pc = 0x4fa1b0u;
    // NOP
label_4fa1b4:
    // 0x4fa1b4: 0x0  nop
    ctx->pc = 0x4fa1b4u;
    // NOP
label_4fa1b8:
    // 0x4fa1b8: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x4fa1b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
label_4fa1bc:
    // 0x4fa1bc: 0x0  nop
    ctx->pc = 0x4fa1bcu;
    // NOP
label_4fa1c0:
    // 0x4fa1c0: 0x4615b001  sub.s       $f0, $f22, $f21
    ctx->pc = 0x4fa1c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_4fa1c4:
    // 0x4fa1c4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4fa1c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa1c8:
    // 0x4fa1c8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_4fa1cc:
    if (ctx->pc == 0x4FA1CCu) {
        ctx->pc = 0x4FA1D0u;
        goto label_4fa1d0;
    }
    ctx->pc = 0x4FA1C8u;
    {
        const bool branch_taken_0x4fa1c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa1c8) {
            ctx->pc = 0x4FA220u;
            goto label_4fa220;
        }
    }
    ctx->pc = 0x4FA1D0u;
label_4fa1d0:
    // 0x4fa1d0: 0xc6800de8  lwc1        $f0, 0xDE8($s4)
    ctx->pc = 0x4fa1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa1d4:
    // 0x4fa1d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4fa1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa1d8:
    // 0x4fa1d8: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_4fa1dc:
    if (ctx->pc == 0x4FA1DCu) {
        ctx->pc = 0x4FA1DCu;
            // 0x4fa1dc: 0xc60200ac  lwc1        $f2, 0xAC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4FA1E0u;
        goto label_4fa1e0;
    }
    ctx->pc = 0x4FA1D8u;
    {
        const bool branch_taken_0x4fa1d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa1d8) {
            ctx->pc = 0x4FA1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA1D8u;
            // 0x4fa1dc: 0xc60200ac  lwc1        $f2, 0xAC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA270u;
            goto label_4fa270;
        }
    }
    ctx->pc = 0x4FA1E0u;
label_4fa1e0:
    // 0x4fa1e0: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x4fa1e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
label_4fa1e4:
    // 0x4fa1e4: 0xc049820  jal         func_126080
label_4fa1e8:
    if (ctx->pc == 0x4FA1E8u) {
        ctx->pc = 0x4FA1E8u;
            // 0x4fa1e8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4FA1ECu;
        goto label_4fa1ec;
    }
    ctx->pc = 0x4FA1E4u;
    SET_GPR_U32(ctx, 31, 0x4FA1ECu);
    ctx->pc = 0x4FA1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA1E4u;
            // 0x4fa1e8: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA1ECu; }
        if (ctx->pc != 0x4FA1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA1ECu; }
        if (ctx->pc != 0x4FA1ECu) { return; }
    }
    ctx->pc = 0x4FA1ECu;
label_4fa1ec:
    // 0x4fa1ec: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4fa1ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4fa1f0:
    // 0x4fa1f0: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_4fa1f4:
    if (ctx->pc == 0x4FA1F4u) {
        ctx->pc = 0x4FA1F8u;
        goto label_4fa1f8;
    }
    ctx->pc = 0x4FA1F0u;
    {
        const bool branch_taken_0x4fa1f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa1f0) {
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA1F8u;
label_4fa1f8:
    // 0x4fa1f8: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x4fa1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fa1fc:
    // 0x4fa1fc: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_4fa200:
    if (ctx->pc == 0x4FA200u) {
        ctx->pc = 0x4FA200u;
            // 0x4fa200: 0xe6960de4  swc1        $f22, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FA204u;
        goto label_4fa204;
    }
    ctx->pc = 0x4FA1FCu;
    {
        const bool branch_taken_0x4fa1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa1fc) {
            ctx->pc = 0x4FA200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA1FCu;
            // 0x4fa200: 0xe6960de4  swc1        $f22, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA204u;
label_4fa204:
    // 0x4fa204: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4fa204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4fa208:
    // 0x4fa208: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fa208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fa20c:
    // 0x4fa20c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa20cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa210:
    // 0x4fa210: 0x0  nop
    ctx->pc = 0x4fa210u;
    // NOP
label_4fa214:
    // 0x4fa214: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4fa214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4fa218:
    // 0x4fa218: 0x10000014  b           . + 4 + (0x14 << 2)
label_4fa21c:
    if (ctx->pc == 0x4FA21Cu) {
        ctx->pc = 0x4FA21Cu;
            // 0x4fa21c: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FA220u;
        goto label_4fa220;
    }
    ctx->pc = 0x4FA218u;
    {
        const bool branch_taken_0x4fa218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA218u;
            // 0x4fa21c: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa218) {
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA220u;
label_4fa220:
    // 0x4fa220: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4fa220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa224:
    // 0x4fa224: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_4fa228:
    if (ctx->pc == 0x4FA228u) {
        ctx->pc = 0x4FA22Cu;
        goto label_4fa22c;
    }
    ctx->pc = 0x4FA224u;
    {
        const bool branch_taken_0x4fa224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa224) {
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA22Cu;
label_4fa22c:
    // 0x4fa22c: 0xc6800df4  lwc1        $f0, 0xDF4($s4)
    ctx->pc = 0x4fa22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa230:
    // 0x4fa230: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4fa230u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa234:
    // 0x4fa234: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4fa238:
    if (ctx->pc == 0x4FA238u) {
        ctx->pc = 0x4FA23Cu;
        goto label_4fa23c;
    }
    ctx->pc = 0x4FA234u;
    {
        const bool branch_taken_0x4fa234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa234) {
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA23Cu;
label_4fa23c:
    // 0x4fa23c: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x4fa23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa240:
    // 0x4fa240: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4fa240u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa244:
    // 0x4fa244: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_4fa248:
    if (ctx->pc == 0x4FA248u) {
        ctx->pc = 0x4FA24Cu;
        goto label_4fa24c;
    }
    ctx->pc = 0x4FA244u;
    {
        const bool branch_taken_0x4fa244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa244) {
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA24Cu;
label_4fa24c:
    // 0x4fa24c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4fa250:
    if (ctx->pc == 0x4FA250u) {
        ctx->pc = 0x4FA250u;
            // 0x4fa250: 0xe6960de4  swc1        $f22, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FA254u;
        goto label_4fa254;
    }
    ctx->pc = 0x4FA24Cu;
    {
        const bool branch_taken_0x4fa24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa24c) {
            ctx->pc = 0x4FA250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA24Cu;
            // 0x4fa250: 0xe6960de4  swc1        $f22, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA26Cu;
            goto label_4fa26c;
        }
    }
    ctx->pc = 0x4FA254u;
label_4fa254:
    // 0x4fa254: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4fa254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4fa258:
    // 0x4fa258: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fa258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fa25c:
    // 0x4fa25c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa25cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa260:
    // 0x4fa260: 0x0  nop
    ctx->pc = 0x4fa260u;
    // NOP
label_4fa264:
    // 0x4fa264: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4fa264u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4fa268:
    // 0x4fa268: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4fa268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa26c:
    // 0x4fa26c: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x4fa26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fa270:
    // 0x4fa270: 0xc6830de4  lwc1        $f3, 0xDE4($s4)
    ctx->pc = 0x4fa270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4fa274:
    // 0x4fa274: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4fa274u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa278:
    // 0x4fa278: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4fa27c:
    if (ctx->pc == 0x4FA27Cu) {
        ctx->pc = 0x4FA27Cu;
            // 0x4fa27c: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4FA280u;
        goto label_4fa280;
    }
    ctx->pc = 0x4FA278u;
    {
        const bool branch_taken_0x4fa278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa278) {
            ctx->pc = 0x4FA27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA278u;
            // 0x4fa27c: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA2A0u;
            goto label_4fa2a0;
        }
    }
    ctx->pc = 0x4FA280u;
label_4fa280:
    // 0x4fa280: 0xc6810df4  lwc1        $f1, 0xDF4($s4)
    ctx->pc = 0x4fa280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fa284:
    // 0x4fa284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fa284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa288:
    // 0x4fa288: 0x0  nop
    ctx->pc = 0x4fa288u;
    // NOP
label_4fa28c:
    // 0x4fa28c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4fa28cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa290:
    // 0x4fa290: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4fa294:
    if (ctx->pc == 0x4FA294u) {
        ctx->pc = 0x4FA298u;
        goto label_4fa298;
    }
    ctx->pc = 0x4FA290u;
    {
        const bool branch_taken_0x4fa290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa290) {
            ctx->pc = 0x4FA29Cu;
            goto label_4fa29c;
        }
    }
    ctx->pc = 0x4FA298u;
label_4fa298:
    // 0x4fa298: 0xe6820de4  swc1        $f2, 0xDE4($s4)
    ctx->pc = 0x4fa298u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa29c:
    // 0x4fa29c: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4fa29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4fa2a0:
    // 0x4fa2a0: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4fa2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4fa2a4:
    // 0x4fa2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa2a8:
    // 0x4fa2a8: 0x0  nop
    ctx->pc = 0x4fa2a8u;
    // NOP
label_4fa2ac:
    // 0x4fa2ac: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4fa2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa2b0:
    // 0x4fa2b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fa2b4:
    if (ctx->pc == 0x4FA2B4u) {
        ctx->pc = 0x4FA2B8u;
        goto label_4fa2b8;
    }
    ctx->pc = 0x4FA2B0u;
    {
        const bool branch_taken_0x4fa2b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa2b0) {
            ctx->pc = 0x4FA2BCu;
            goto label_4fa2bc;
        }
    }
    ctx->pc = 0x4FA2B8u;
label_4fa2b8:
    // 0x4fa2b8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4fa2b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fa2bc:
    // 0x4fa2bc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4fa2bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4fa2c0:
    // 0x4fa2c0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4fa2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4fa2c4:
    // 0x4fa2c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4fa2c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4fa2c8:
    // 0x4fa2c8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4fa2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4fa2cc:
    // 0x4fa2cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4fa2ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4fa2d0:
    // 0x4fa2d0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4fa2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4fa2d4:
    // 0x4fa2d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4fa2d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4fa2d8:
    // 0x4fa2d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4fa2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4fa2dc:
    // 0x4fa2dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4fa2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4fa2e0:
    // 0x4fa2e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4fa2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fa2e4:
    // 0x4fa2e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4fa2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fa2e8:
    // 0x4fa2e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4fa2e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fa2ec:
    // 0x4fa2ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4fa2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fa2f0:
    // 0x4fa2f0: 0x3e00008  jr          $ra
label_4fa2f4:
    if (ctx->pc == 0x4FA2F4u) {
        ctx->pc = 0x4FA2F4u;
            // 0x4fa2f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4FA2F8u;
        goto label_4fa2f8;
    }
    ctx->pc = 0x4FA2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FA2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA2F0u;
            // 0x4fa2f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FA2F8u;
label_4fa2f8:
    // 0x4fa2f8: 0x0  nop
    ctx->pc = 0x4fa2f8u;
    // NOP
label_4fa2fc:
    // 0x4fa2fc: 0x0  nop
    ctx->pc = 0x4fa2fcu;
    // NOP
label_4fa300:
    // 0x4fa300: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4fa300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4fa304:
    // 0x4fa304: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fa304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fa308:
    // 0x4fa308: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4fa308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4fa30c:
    // 0x4fa30c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4fa30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4fa310:
    // 0x4fa310: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4fa310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4fa314:
    // 0x4fa314: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4fa314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4fa318:
    // 0x4fa318: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4fa318u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4fa31c:
    // 0x4fa31c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4fa31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4fa320:
    // 0x4fa320: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4fa320u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fa324:
    // 0x4fa324: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4fa324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4fa328:
    // 0x4fa328: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4fa328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4fa32c:
    // 0x4fa32c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4fa32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4fa330:
    // 0x4fa330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4fa330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4fa334:
    // 0x4fa334: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4fa334u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4fa338:
    // 0x4fa338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4fa338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fa33c:
    // 0x4fa33c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4fa33cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4fa340:
    // 0x4fa340: 0x8c520e80  lw          $s2, 0xE80($v0)
    ctx->pc = 0x4fa340u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4fa344:
    // 0x4fa344: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x4fa344u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4fa348:
    // 0x4fa348: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4fa348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4fa34c:
    // 0x4fa34c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4fa34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4fa350:
    // 0x4fa350: 0x26910c6c  addiu       $s1, $s4, 0xC6C
    ctx->pc = 0x4fa350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 3180));
label_4fa354:
    // 0x4fa354: 0x96830c7e  lhu         $v1, 0xC7E($s4)
    ctx->pc = 0x4fa354u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 3198)));
label_4fa358:
    // 0x4fa358: 0x8c93012c  lw          $s3, 0x12C($a0)
    ctx->pc = 0x4fa358u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
label_4fa35c:
    // 0x4fa35c: 0x8e820da0  lw          $v0, 0xDA0($s4)
    ctx->pc = 0x4fa35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
label_4fa360:
    // 0x4fa360: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x4fa360u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4fa364:
    // 0x4fa364: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x4fa364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4fa368:
    // 0x4fa368: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4fa368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4fa36c:
    // 0x4fa36c: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x4fa36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_4fa370:
    // 0x4fa370: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x4fa370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4fa374:
    // 0x4fa374: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fa374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fa378:
    // 0x4fa378: 0x94840002  lhu         $a0, 0x2($a0)
    ctx->pc = 0x4fa378u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_4fa37c:
    // 0x4fa37c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x4fa37cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4fa380:
    // 0x4fa380: 0x1440019d  bnez        $v0, . + 4 + (0x19D << 2)
label_4fa384:
    if (ctx->pc == 0x4FA384u) {
        ctx->pc = 0x4FA384u;
            // 0x4fa384: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x4FA388u;
        goto label_4fa388;
    }
    ctx->pc = 0x4FA380u;
    {
        const bool branch_taken_0x4fa380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FA384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA380u;
            // 0x4fa384: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa380) {
            ctx->pc = 0x4FA9F8u;
            goto label_4fa9f8;
        }
    }
    ctx->pc = 0x4FA388u;
label_4fa388:
    // 0x4fa388: 0x8e830db0  lw          $v1, 0xDB0($s4)
    ctx->pc = 0x4fa388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3504)));
label_4fa38c:
    // 0x4fa38c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4fa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4fa390:
    // 0x4fa390: 0x5062019a  beql        $v1, $v0, . + 4 + (0x19A << 2)
label_4fa394:
    if (ctx->pc == 0x4FA394u) {
        ctx->pc = 0x4FA394u;
            // 0x4fa394: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FA398u;
        goto label_4fa398;
    }
    ctx->pc = 0x4FA390u;
    {
        const bool branch_taken_0x4fa390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4fa390) {
            ctx->pc = 0x4FA394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA390u;
            // 0x4fa394: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA9FCu;
            goto label_4fa9fc;
        }
    }
    ctx->pc = 0x4FA398u;
label_4fa398:
    // 0x4fa398: 0xc4d50018  lwc1        $f21, 0x18($a2)
    ctx->pc = 0x4fa398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4fa39c:
    // 0x4fa39c: 0xc6940de4  lwc1        $f20, 0xDE4($s4)
    ctx->pc = 0x4fa39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4fa3a0:
    // 0x4fa3a0: 0xc04cc1c  jal         func_133070
label_4fa3a4:
    if (ctx->pc == 0x4FA3A4u) {
        ctx->pc = 0x4FA3A4u;
            // 0x4fa3a4: 0x268502c0  addiu       $a1, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->pc = 0x4FA3A8u;
        goto label_4fa3a8;
    }
    ctx->pc = 0x4FA3A0u;
    SET_GPR_U32(ctx, 31, 0x4FA3A8u);
    ctx->pc = 0x4FA3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA3A0u;
            // 0x4fa3a4: 0x268502c0  addiu       $a1, $s4, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3A8u; }
        if (ctx->pc != 0x4FA3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3A8u; }
        if (ctx->pc != 0x4FA3A8u) { return; }
    }
    ctx->pc = 0x4FA3A8u;
label_4fa3a8:
    // 0x4fa3a8: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x4fa3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4fa3ac:
    // 0x4fa3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4fa3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4fa3b0:
    // 0x4fa3b0: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x4fa3b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_4fa3b4:
    // 0x4fa3b4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4fa3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4fa3b8:
    // 0x4fa3b8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x4fa3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4fa3bc:
    // 0x4fa3bc: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x4fa3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4fa3c0:
    // 0x4fa3c0: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x4fa3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_4fa3c4:
    // 0x4fa3c4: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x4fa3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_4fa3c8:
    // 0x4fa3c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fa3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4fa3cc:
    // 0x4fa3cc: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x4fa3ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4fa3d0:
    // 0x4fa3d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4fa3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4fa3d4:
    // 0x4fa3d4: 0xc0c5f94  jal         func_317E50
label_4fa3d8:
    if (ctx->pc == 0x4FA3D8u) {
        ctx->pc = 0x4FA3D8u;
            // 0x4fa3d8: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4FA3DCu;
        goto label_4fa3dc;
    }
    ctx->pc = 0x4FA3D4u;
    SET_GPR_U32(ctx, 31, 0x4FA3DCu);
    ctx->pc = 0x4FA3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA3D4u;
            // 0x4fa3d8: 0x43b821  addu        $s7, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317E50u;
    if (runtime->hasFunction(0x317E50u)) {
        auto targetFn = runtime->lookupFunction(0x317E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3DCu; }
        if (ctx->pc != 0x4FA3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317E50_0x317e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3DCu; }
        if (ctx->pc != 0x4FA3DCu) { return; }
    }
    ctx->pc = 0x4FA3DCu;
label_4fa3dc:
    // 0x4fa3dc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4fa3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4fa3e0:
    // 0x4fa3e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4fa3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4fa3e4:
    // 0x4fa3e4: 0xc04cc90  jal         func_133240
label_4fa3e8:
    if (ctx->pc == 0x4FA3E8u) {
        ctx->pc = 0x4FA3E8u;
            // 0x4fa3e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4FA3ECu;
        goto label_4fa3ec;
    }
    ctx->pc = 0x4FA3E4u;
    SET_GPR_U32(ctx, 31, 0x4FA3ECu);
    ctx->pc = 0x4FA3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA3E4u;
            // 0x4fa3e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3ECu; }
        if (ctx->pc != 0x4FA3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3ECu; }
        if (ctx->pc != 0x4FA3ECu) { return; }
    }
    ctx->pc = 0x4FA3ECu;
label_4fa3ec:
    // 0x4fa3ec: 0xc04cc2c  jal         func_1330B0
label_4fa3f0:
    if (ctx->pc == 0x4FA3F0u) {
        ctx->pc = 0x4FA3F0u;
            // 0x4fa3f0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4FA3F4u;
        goto label_4fa3f4;
    }
    ctx->pc = 0x4FA3ECu;
    SET_GPR_U32(ctx, 31, 0x4FA3F4u);
    ctx->pc = 0x4FA3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA3ECu;
            // 0x4fa3f0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3F4u; }
        if (ctx->pc != 0x4FA3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA3F4u; }
        if (ctx->pc != 0x4FA3F4u) { return; }
    }
    ctx->pc = 0x4FA3F4u;
label_4fa3f4:
    // 0x4fa3f4: 0x0  nop
    ctx->pc = 0x4fa3f4u;
    // NOP
label_4fa3f8:
    // 0x4fa3f8: 0x0  nop
    ctx->pc = 0x4fa3f8u;
    // NOP
label_4fa3fc:
    // 0x4fa3fc: 0x46000044  c1          0x44
    ctx->pc = 0x4fa3fcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_4fa400:
    // 0x4fa400: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x4fa400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4fa404:
    // 0x4fa404: 0x96250012  lhu         $a1, 0x12($s1)
    ctx->pc = 0x4fa404u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_4fa408:
    // 0x4fa408: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x4fa408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4fa40c:
    // 0x4fa40c: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x4fa40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fa410:
    // 0x4fa410: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4fa410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4fa414:
    // 0x4fa414: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x4fa414u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4fa418:
    // 0x4fa418: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fa418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fa41c:
    // 0x4fa41c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x4fa41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa420:
    // 0x4fa420: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_4fa424:
    if (ctx->pc == 0x4FA424u) {
        ctx->pc = 0x4FA424u;
            // 0x4fa424: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FA428u;
        goto label_4fa428;
    }
    ctx->pc = 0x4FA420u;
    {
        const bool branch_taken_0x4fa420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FA424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA420u;
            // 0x4fa424: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa420) {
            ctx->pc = 0x4FA448u;
            goto label_4fa448;
        }
    }
    ctx->pc = 0x4FA428u;
label_4fa428:
    // 0x4fa428: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4fa428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4fa42c:
    // 0x4fa42c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_4fa430:
    if (ctx->pc == 0x4FA430u) {
        ctx->pc = 0x4FA430u;
            // 0x4fa430: 0x3c03430c  lui         $v1, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
        ctx->pc = 0x4FA434u;
        goto label_4fa434;
    }
    ctx->pc = 0x4FA42Cu;
    {
        const bool branch_taken_0x4fa42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fa42c) {
            ctx->pc = 0x4FA430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA42Cu;
            // 0x4fa430: 0x3c03430c  lui         $v1, 0x430C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17164 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA43Cu;
            goto label_4fa43c;
        }
    }
    ctx->pc = 0x4FA434u;
label_4fa434:
    // 0x4fa434: 0x10000009  b           . + 4 + (0x9 << 2)
label_4fa438:
    if (ctx->pc == 0x4FA438u) {
        ctx->pc = 0x4FA438u;
            // 0x4fa438: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x4FA43Cu;
        goto label_4fa43c;
    }
    ctx->pc = 0x4FA434u;
    {
        const bool branch_taken_0x4fa434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA434u;
            // 0x4fa438: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa434) {
            ctx->pc = 0x4FA45Cu;
            goto label_4fa45c;
        }
    }
    ctx->pc = 0x4FA43Cu;
label_4fa43c:
    // 0x4fa43c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa43cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa440:
    // 0x4fa440: 0x10000005  b           . + 4 + (0x5 << 2)
label_4fa444:
    if (ctx->pc == 0x4FA444u) {
        ctx->pc = 0x4FA444u;
            // 0x4fa444: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4FA448u;
        goto label_4fa448;
    }
    ctx->pc = 0x4FA440u;
    {
        const bool branch_taken_0x4fa440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA440u;
            // 0x4fa444: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa440) {
            ctx->pc = 0x4FA458u;
            goto label_4fa458;
        }
    }
    ctx->pc = 0x4FA448u;
label_4fa448:
    // 0x4fa448: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4fa44c:
    // 0x4fa44c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa44cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa450:
    // 0x4fa450: 0x0  nop
    ctx->pc = 0x4fa450u;
    // NOP
label_4fa454:
    // 0x4fa454: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4fa454u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4fa458:
    // 0x4fa458: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x4fa458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4fa45c:
    // 0x4fa45c: 0x38640003  xori        $a0, $v1, 0x3
    ctx->pc = 0x4fa45cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_4fa460:
    // 0x4fa460: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x4fa460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
label_4fa464:
    // 0x4fa464: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4fa464u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fa468:
    // 0x4fa468: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fa468u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fa46c:
    // 0x4fa46c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4fa46cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa470:
    // 0x4fa470: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x4fa470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa474:
    // 0x4fa474: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_4fa478:
    if (ctx->pc == 0x4FA478u) {
        ctx->pc = 0x4FA478u;
            // 0x4fa478: 0x4601a901  sub.s       $f4, $f21, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->pc = 0x4FA47Cu;
        goto label_4fa47c;
    }
    ctx->pc = 0x4FA474u;
    {
        const bool branch_taken_0x4fa474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA474u;
            // 0x4fa478: 0x4601a901  sub.s       $f4, $f21, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa474) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA47Cu;
label_4fa47c:
    // 0x4fa47c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x4fa47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4fa480:
    // 0x4fa480: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4fa480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4fa484:
    // 0x4fa484: 0x50830069  beql        $a0, $v1, . + 4 + (0x69 << 2)
label_4fa488:
    if (ctx->pc == 0x4FA488u) {
        ctx->pc = 0x4FA488u;
            // 0x4fa488: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x4FA48Cu;
        goto label_4fa48c;
    }
    ctx->pc = 0x4FA484u;
    {
        const bool branch_taken_0x4fa484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4fa484) {
            ctx->pc = 0x4FA488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA484u;
            // 0x4fa488: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA62Cu;
            goto label_4fa62c;
        }
    }
    ctx->pc = 0x4FA48Cu;
label_4fa48c:
    // 0x4fa48c: 0x2c410011  sltiu       $at, $v0, 0x11
    ctx->pc = 0x4fa48cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_4fa490:
    // 0x4fa490: 0x50200063  beql        $at, $zero, . + 4 + (0x63 << 2)
label_4fa494:
    if (ctx->pc == 0x4FA494u) {
        ctx->pc = 0x4FA494u;
            // 0x4fa494: 0x3c033d97  lui         $v1, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
        ctx->pc = 0x4FA498u;
        goto label_4fa498;
    }
    ctx->pc = 0x4FA490u;
    {
        const bool branch_taken_0x4fa490 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa490) {
            ctx->pc = 0x4FA494u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA490u;
            // 0x4fa494: 0x3c033d97  lui         $v1, 0x3D97 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA620u;
            goto label_4fa620;
        }
    }
    ctx->pc = 0x4FA498u;
label_4fa498:
    // 0x4fa498: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x4fa498u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
label_4fa49c:
    // 0x4fa49c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4fa49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fa4a0:
    // 0x4fa4a0: 0x24848c90  addiu       $a0, $a0, -0x7370
    ctx->pc = 0x4fa4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937744));
label_4fa4a4:
    // 0x4fa4a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fa4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa4a8:
    // 0x4fa4a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fa4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fa4ac:
    // 0x4fa4ac: 0x600008  jr          $v1
label_4fa4b0:
    if (ctx->pc == 0x4FA4B0u) {
        ctx->pc = 0x4FA4B4u;
        goto label_4fa4b4;
    }
    ctx->pc = 0x4FA4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4FA4B4u: goto label_4fa4b4;
            case 0x4FA4F0u: goto label_4fa4f0;
            case 0x4FA504u: goto label_4fa504;
            case 0x4FA518u: goto label_4fa518;
            case 0x4FA52Cu: goto label_4fa52c;
            case 0x4FA540u: goto label_4fa540;
            case 0x4FA554u: goto label_4fa554;
            case 0x4FA568u: goto label_4fa568;
            case 0x4FA57Cu: goto label_4fa57c;
            case 0x4FA590u: goto label_4fa590;
            case 0x4FA5A4u: goto label_4fa5a4;
            case 0x4FA5B8u: goto label_4fa5b8;
            case 0x4FA5CCu: goto label_4fa5cc;
            case 0x4FA5E0u: goto label_4fa5e0;
            case 0x4FA5F4u: goto label_4fa5f4;
            case 0x4FA608u: goto label_4fa608;
            case 0x4FA61Cu: goto label_4fa61c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4FA4B4u;
label_4fa4b4:
    // 0x4fa4b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4fa4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4fa4b8:
    // 0x4fa4b8: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x4fa4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4fa4bc:
    // 0x4fa4bc: 0x8c840d6c  lw          $a0, 0xD6C($a0)
    ctx->pc = 0x4fa4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_4fa4c0:
    // 0x4fa4c0: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4fa4c0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4fa4c4:
    // 0x4fa4c4: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_4fa4c8:
    if (ctx->pc == 0x4FA4C8u) {
        ctx->pc = 0x4FA4C8u;
            // 0x4fa4c8: 0x3c033dd0  lui         $v1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15824 << 16));
        ctx->pc = 0x4FA4CCu;
        goto label_4fa4cc;
    }
    ctx->pc = 0x4FA4C4u;
    {
        const bool branch_taken_0x4fa4c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fa4c4) {
            ctx->pc = 0x4FA4C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA4C4u;
            // 0x4fa4c8: 0x3c033dd0  lui         $v1, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15824 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA4E0u;
            goto label_4fa4e0;
        }
    }
    ctx->pc = 0x4FA4CCu;
label_4fa4cc:
    // 0x4fa4cc: 0x3c033de3  lui         $v1, 0x3DE3
    ctx->pc = 0x4fa4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15843 << 16));
label_4fa4d0:
    // 0x4fa4d0: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x4fa4d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_4fa4d4:
    // 0x4fa4d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa4d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa4d8:
    // 0x4fa4d8: 0x10000053  b           . + 4 + (0x53 << 2)
label_4fa4dc:
    if (ctx->pc == 0x4FA4DCu) {
        ctx->pc = 0x4FA4E0u;
        goto label_4fa4e0;
    }
    ctx->pc = 0x4FA4D8u;
    {
        const bool branch_taken_0x4fa4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa4d8) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA4E0u;
label_4fa4e0:
    // 0x4fa4e0: 0x346397b4  ori         $v1, $v1, 0x97B4
    ctx->pc = 0x4fa4e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38836);
label_4fa4e4:
    // 0x4fa4e4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa4e8:
    // 0x4fa4e8: 0x1000004f  b           . + 4 + (0x4F << 2)
label_4fa4ec:
    if (ctx->pc == 0x4FA4ECu) {
        ctx->pc = 0x4FA4F0u;
        goto label_4fa4f0;
    }
    ctx->pc = 0x4FA4E8u;
    {
        const bool branch_taken_0x4fa4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa4e8) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA4F0u;
label_4fa4f0:
    // 0x4fa4f0: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x4fa4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_4fa4f4:
    // 0x4fa4f4: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x4fa4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_4fa4f8:
    // 0x4fa4f8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa4f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa4fc:
    // 0x4fa4fc: 0x1000004a  b           . + 4 + (0x4A << 2)
label_4fa500:
    if (ctx->pc == 0x4FA500u) {
        ctx->pc = 0x4FA504u;
        goto label_4fa504;
    }
    ctx->pc = 0x4FA4FCu;
    {
        const bool branch_taken_0x4fa4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa4fc) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA504u;
label_4fa504:
    // 0x4fa504: 0x3c033d84  lui         $v1, 0x3D84
    ctx->pc = 0x4fa504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15748 << 16));
label_4fa508:
    // 0x4fa508: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4fa508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
label_4fa50c:
    // 0x4fa50c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa50cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa510:
    // 0x4fa510: 0x10000045  b           . + 4 + (0x45 << 2)
label_4fa514:
    if (ctx->pc == 0x4FA514u) {
        ctx->pc = 0x4FA518u;
        goto label_4fa518;
    }
    ctx->pc = 0x4FA510u;
    {
        const bool branch_taken_0x4fa510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa510) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA518u;
label_4fa518:
    // 0x4fa518: 0x3c033daa  lui         $v1, 0x3DAA
    ctx->pc = 0x4fa518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15786 << 16));
label_4fa51c:
    // 0x4fa51c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4fa51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4fa520:
    // 0x4fa520: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa524:
    // 0x4fa524: 0x10000040  b           . + 4 + (0x40 << 2)
label_4fa528:
    if (ctx->pc == 0x4FA528u) {
        ctx->pc = 0x4FA52Cu;
        goto label_4fa52c;
    }
    ctx->pc = 0x4FA524u;
    {
        const bool branch_taken_0x4fa524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa524) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA52Cu;
label_4fa52c:
    // 0x4fa52c: 0x3c033daa  lui         $v1, 0x3DAA
    ctx->pc = 0x4fa52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15786 << 16));
label_4fa530:
    // 0x4fa530: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x4fa530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_4fa534:
    // 0x4fa534: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa538:
    // 0x4fa538: 0x1000003b  b           . + 4 + (0x3B << 2)
label_4fa53c:
    if (ctx->pc == 0x4FA53Cu) {
        ctx->pc = 0x4FA540u;
        goto label_4fa540;
    }
    ctx->pc = 0x4FA538u;
    {
        const bool branch_taken_0x4fa538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa538) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA540u;
label_4fa540:
    // 0x4fa540: 0x3c033d84  lui         $v1, 0x3D84
    ctx->pc = 0x4fa540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15748 << 16));
label_4fa544:
    // 0x4fa544: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4fa544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
label_4fa548:
    // 0x4fa548: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa54c:
    // 0x4fa54c: 0x10000036  b           . + 4 + (0x36 << 2)
label_4fa550:
    if (ctx->pc == 0x4FA550u) {
        ctx->pc = 0x4FA554u;
        goto label_4fa554;
    }
    ctx->pc = 0x4FA54Cu;
    {
        const bool branch_taken_0x4fa54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa54c) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA554u;
label_4fa554:
    // 0x4fa554: 0x3c033d17  lui         $v1, 0x3D17
    ctx->pc = 0x4fa554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15639 << 16));
label_4fa558:
    // 0x4fa558: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa55c:
    // 0x4fa55c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa560:
    // 0x4fa560: 0x10000031  b           . + 4 + (0x31 << 2)
label_4fa564:
    if (ctx->pc == 0x4FA564u) {
        ctx->pc = 0x4FA568u;
        goto label_4fa568;
    }
    ctx->pc = 0x4FA560u;
    {
        const bool branch_taken_0x4fa560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa560) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA568u;
label_4fa568:
    // 0x4fa568: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa56c:
    // 0x4fa56c: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa56cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa570:
    // 0x4fa570: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa570u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa574:
    // 0x4fa574: 0x1000002c  b           . + 4 + (0x2C << 2)
label_4fa578:
    if (ctx->pc == 0x4FA578u) {
        ctx->pc = 0x4FA57Cu;
        goto label_4fa57c;
    }
    ctx->pc = 0x4FA574u;
    {
        const bool branch_taken_0x4fa574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa574) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA57Cu;
label_4fa57c:
    // 0x4fa57c: 0x3c033d63  lui         $v1, 0x3D63
    ctx->pc = 0x4fa57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15715 << 16));
label_4fa580:
    // 0x4fa580: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x4fa580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_4fa584:
    // 0x4fa584: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa584u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa588:
    // 0x4fa588: 0x10000027  b           . + 4 + (0x27 << 2)
label_4fa58c:
    if (ctx->pc == 0x4FA58Cu) {
        ctx->pc = 0x4FA590u;
        goto label_4fa590;
    }
    ctx->pc = 0x4FA588u;
    {
        const bool branch_taken_0x4fa588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa588) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA590u;
label_4fa590:
    // 0x4fa590: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa594:
    // 0x4fa594: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa598:
    // 0x4fa598: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa59c:
    // 0x4fa59c: 0x10000022  b           . + 4 + (0x22 << 2)
label_4fa5a0:
    if (ctx->pc == 0x4FA5A0u) {
        ctx->pc = 0x4FA5A4u;
        goto label_4fa5a4;
    }
    ctx->pc = 0x4FA59Cu;
    {
        const bool branch_taken_0x4fa59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa59c) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA5A4u;
label_4fa5a4:
    // 0x4fa5a4: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa5a8:
    // 0x4fa5a8: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa5a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa5ac:
    // 0x4fa5ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa5acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa5b0:
    // 0x4fa5b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_4fa5b4:
    if (ctx->pc == 0x4FA5B4u) {
        ctx->pc = 0x4FA5B8u;
        goto label_4fa5b8;
    }
    ctx->pc = 0x4FA5B0u;
    {
        const bool branch_taken_0x4fa5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa5b0) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA5B8u;
label_4fa5b8:
    // 0x4fa5b8: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa5bc:
    // 0x4fa5bc: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa5c0:
    // 0x4fa5c0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa5c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa5c4:
    // 0x4fa5c4: 0x10000018  b           . + 4 + (0x18 << 2)
label_4fa5c8:
    if (ctx->pc == 0x4FA5C8u) {
        ctx->pc = 0x4FA5CCu;
        goto label_4fa5cc;
    }
    ctx->pc = 0x4FA5C4u;
    {
        const bool branch_taken_0x4fa5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa5c4) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA5CCu;
label_4fa5cc:
    // 0x4fa5cc: 0x3c033d63  lui         $v1, 0x3D63
    ctx->pc = 0x4fa5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15715 << 16));
label_4fa5d0:
    // 0x4fa5d0: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x4fa5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_4fa5d4:
    // 0x4fa5d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa5d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa5d8:
    // 0x4fa5d8: 0x10000013  b           . + 4 + (0x13 << 2)
label_4fa5dc:
    if (ctx->pc == 0x4FA5DCu) {
        ctx->pc = 0x4FA5E0u;
        goto label_4fa5e0;
    }
    ctx->pc = 0x4FA5D8u;
    {
        const bool branch_taken_0x4fa5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa5d8) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA5E0u;
label_4fa5e0:
    // 0x4fa5e0: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa5e4:
    // 0x4fa5e4: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa5e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa5e8:
    // 0x4fa5e8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa5ec:
    // 0x4fa5ec: 0x1000000e  b           . + 4 + (0xE << 2)
label_4fa5f0:
    if (ctx->pc == 0x4FA5F0u) {
        ctx->pc = 0x4FA5F4u;
        goto label_4fa5f4;
    }
    ctx->pc = 0x4FA5ECu;
    {
        const bool branch_taken_0x4fa5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa5ec) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA5F4u;
label_4fa5f4:
    // 0x4fa5f4: 0x3c033d84  lui         $v1, 0x3D84
    ctx->pc = 0x4fa5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15748 << 16));
label_4fa5f8:
    // 0x4fa5f8: 0x3463bda1  ori         $v1, $v1, 0xBDA1
    ctx->pc = 0x4fa5f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48545);
label_4fa5fc:
    // 0x4fa5fc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa600:
    // 0x4fa600: 0x10000009  b           . + 4 + (0x9 << 2)
label_4fa604:
    if (ctx->pc == 0x4FA604u) {
        ctx->pc = 0x4FA608u;
        goto label_4fa608;
    }
    ctx->pc = 0x4FA600u;
    {
        const bool branch_taken_0x4fa600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa600) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA608u;
label_4fa608:
    // 0x4fa608: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa60c:
    // 0x4fa60c: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa610:
    // 0x4fa610: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa610u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa614:
    // 0x4fa614: 0x10000004  b           . + 4 + (0x4 << 2)
label_4fa618:
    if (ctx->pc == 0x4FA618u) {
        ctx->pc = 0x4FA61Cu;
        goto label_4fa61c;
    }
    ctx->pc = 0x4FA614u;
    {
        const bool branch_taken_0x4fa614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa614) {
            ctx->pc = 0x4FA628u;
            goto label_4fa628;
        }
    }
    ctx->pc = 0x4FA61Cu;
label_4fa61c:
    // 0x4fa61c: 0x3c033d97  lui         $v1, 0x3D97
    ctx->pc = 0x4fa61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15767 << 16));
label_4fa620:
    // 0x4fa620: 0x3463b426  ori         $v1, $v1, 0xB426
    ctx->pc = 0x4fa620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46118);
label_4fa624:
    // 0x4fa624: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4fa624u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4fa628:
    // 0x4fa628: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x4fa628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_4fa62c:
    // 0x4fa62c: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x4fa62cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_4fa630:
    // 0x4fa630: 0x38a30006  xori        $v1, $a1, 0x6
    ctx->pc = 0x4fa630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)6);
label_4fa634:
    // 0x4fa634: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x4fa634u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fa638:
    // 0x4fa638: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fa638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fa63c:
    // 0x4fa63c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa640:
    // 0x4fa640: 0x38a30009  xori        $v1, $a1, 0x9
    ctx->pc = 0x4fa640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)9);
label_4fa644:
    // 0x4fa644: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4fa644u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4fa648:
    // 0x4fa648: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4fa648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_4fa64c:
    // 0x4fa64c: 0x5060001d  beql        $v1, $zero, . + 4 + (0x1D << 2)
label_4fa650:
    if (ctx->pc == 0x4FA650u) {
        ctx->pc = 0x4FA650u;
            // 0x4fa650: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FA654u;
        goto label_4fa654;
    }
    ctx->pc = 0x4FA64Cu;
    {
        const bool branch_taken_0x4fa64c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa64c) {
            ctx->pc = 0x4FA650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA64Cu;
            // 0x4fa650: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA6C4u;
            goto label_4fa6c4;
        }
    }
    ctx->pc = 0x4FA654u;
label_4fa654:
    // 0x4fa654: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x4fa654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fa658:
    // 0x4fa658: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4fa658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4fa65c:
    // 0x4fa65c: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x4fa65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4fa660:
    // 0x4fa660: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4fa660u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4fa664:
    // 0x4fa664: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x4fa664u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4fa668:
    // 0x4fa668: 0x2484d6b8  addiu       $a0, $a0, -0x2948
    ctx->pc = 0x4fa668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956728));
label_4fa66c:
    // 0x4fa66c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fa66cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fa670:
    // 0x4fa670: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fa670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fa674:
    // 0x4fa674: 0x2463e9b0  addiu       $v1, $v1, -0x1650
    ctx->pc = 0x4fa674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961584));
label_4fa678:
    // 0x4fa678: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4fa678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4fa67c:
    // 0x4fa67c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4fa67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4fa680:
    // 0x4fa680: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4fa680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fa684:
    // 0x4fa684: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fa684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fa688:
    // 0x4fa688: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4fa688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fa68c:
    // 0x4fa68c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4fa68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4fa690:
    // 0x4fa690: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4fa694:
    if (ctx->pc == 0x4FA694u) {
        ctx->pc = 0x4FA694u;
            // 0x4fa694: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FA698u;
        goto label_4fa698;
    }
    ctx->pc = 0x4FA690u;
    {
        const bool branch_taken_0x4fa690 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4fa690) {
            ctx->pc = 0x4FA694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA690u;
            // 0x4fa694: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA6A4u;
            goto label_4fa6a4;
        }
    }
    ctx->pc = 0x4FA698u;
label_4fa698:
    // 0x4fa698: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa698u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa69c:
    // 0x4fa69c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fa6a0:
    if (ctx->pc == 0x4FA6A0u) {
        ctx->pc = 0x4FA6A0u;
            // 0x4fa6a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA6A4u;
        goto label_4fa6a4;
    }
    ctx->pc = 0x4FA69Cu;
    {
        const bool branch_taken_0x4fa69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA69Cu;
            // 0x4fa6a0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa69c) {
            ctx->pc = 0x4FA6BCu;
            goto label_4fa6bc;
        }
    }
    ctx->pc = 0x4FA6A4u;
label_4fa6a4:
    // 0x4fa6a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa6a8:
    // 0x4fa6a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa6a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa6ac:
    // 0x4fa6ac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa6acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa6b0:
    // 0x4fa6b0: 0x0  nop
    ctx->pc = 0x4fa6b0u;
    // NOP
label_4fa6b4:
    // 0x4fa6b4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa6b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa6b8:
    // 0x4fa6b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa6b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa6bc:
    // 0x4fa6bc: 0x10000051  b           . + 4 + (0x51 << 2)
label_4fa6c0:
    if (ctx->pc == 0x4FA6C0u) {
        ctx->pc = 0x4FA6C0u;
            // 0x4fa6c0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4FA6C4u;
        goto label_4fa6c4;
    }
    ctx->pc = 0x4FA6BCu;
    {
        const bool branch_taken_0x4fa6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA6BCu;
            // 0x4fa6c0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa6bc) {
            ctx->pc = 0x4FA804u;
            goto label_4fa804;
        }
    }
    ctx->pc = 0x4FA6C4u;
label_4fa6c4:
    // 0x4fa6c4: 0x54a3001d  bnel        $a1, $v1, . + 4 + (0x1D << 2)
label_4fa6c8:
    if (ctx->pc == 0x4FA6C8u) {
        ctx->pc = 0x4FA6C8u;
            // 0x4fa6c8: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->pc = 0x4FA6CCu;
        goto label_4fa6cc;
    }
    ctx->pc = 0x4FA6C4u;
    {
        const bool branch_taken_0x4fa6c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fa6c4) {
            ctx->pc = 0x4FA6C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA6C4u;
            // 0x4fa6c8: 0x8e0400a0  lw          $a0, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA73Cu;
            goto label_4fa73c;
        }
    }
    ctx->pc = 0x4FA6CCu;
label_4fa6cc:
    // 0x4fa6cc: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x4fa6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fa6d0:
    // 0x4fa6d0: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4fa6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4fa6d4:
    // 0x4fa6d4: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x4fa6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4fa6d8:
    // 0x4fa6d8: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4fa6d8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4fa6dc:
    // 0x4fa6dc: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x4fa6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4fa6e0:
    // 0x4fa6e0: 0x2484de38  addiu       $a0, $a0, -0x21C8
    ctx->pc = 0x4fa6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
label_4fa6e4:
    // 0x4fa6e4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fa6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fa6e8:
    // 0x4fa6e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fa6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fa6ec:
    // 0x4fa6ec: 0x2463e9b0  addiu       $v1, $v1, -0x1650
    ctx->pc = 0x4fa6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961584));
label_4fa6f0:
    // 0x4fa6f0: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4fa6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4fa6f4:
    // 0x4fa6f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4fa6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4fa6f8:
    // 0x4fa6f8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4fa6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fa6fc:
    // 0x4fa6fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fa6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fa700:
    // 0x4fa700: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4fa700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fa704:
    // 0x4fa704: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4fa704u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4fa708:
    // 0x4fa708: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4fa70c:
    if (ctx->pc == 0x4FA70Cu) {
        ctx->pc = 0x4FA70Cu;
            // 0x4fa70c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FA710u;
        goto label_4fa710;
    }
    ctx->pc = 0x4FA708u;
    {
        const bool branch_taken_0x4fa708 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4fa708) {
            ctx->pc = 0x4FA70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA708u;
            // 0x4fa70c: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA71Cu;
            goto label_4fa71c;
        }
    }
    ctx->pc = 0x4FA710u;
label_4fa710:
    // 0x4fa710: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa710u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa714:
    // 0x4fa714: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fa718:
    if (ctx->pc == 0x4FA718u) {
        ctx->pc = 0x4FA718u;
            // 0x4fa718: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA71Cu;
        goto label_4fa71c;
    }
    ctx->pc = 0x4FA714u;
    {
        const bool branch_taken_0x4fa714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA714u;
            // 0x4fa718: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa714) {
            ctx->pc = 0x4FA734u;
            goto label_4fa734;
        }
    }
    ctx->pc = 0x4FA71Cu;
label_4fa71c:
    // 0x4fa71c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa720:
    // 0x4fa720: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa724:
    // 0x4fa724: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa724u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa728:
    // 0x4fa728: 0x0  nop
    ctx->pc = 0x4fa728u;
    // NOP
label_4fa72c:
    // 0x4fa72c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa72cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa730:
    // 0x4fa730: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa730u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa734:
    // 0x4fa734: 0x10000032  b           . + 4 + (0x32 << 2)
label_4fa738:
    if (ctx->pc == 0x4FA738u) {
        ctx->pc = 0x4FA73Cu;
        goto label_4fa73c;
    }
    ctx->pc = 0x4FA734u;
    {
        const bool branch_taken_0x4fa734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa734) {
            ctx->pc = 0x4FA800u;
            goto label_4fa800;
        }
    }
    ctx->pc = 0x4FA73Cu;
label_4fa73c:
    // 0x4fa73c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4fa73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fa740:
    // 0x4fa740: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_4fa744:
    if (ctx->pc == 0x4FA744u) {
        ctx->pc = 0x4FA748u;
        goto label_4fa748;
    }
    ctx->pc = 0x4FA740u;
    {
        const bool branch_taken_0x4fa740 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fa740) {
            ctx->pc = 0x4FA7B8u;
            goto label_4fa7b8;
        }
    }
    ctx->pc = 0x4FA748u;
label_4fa748:
    // 0x4fa748: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x4fa748u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fa74c:
    // 0x4fa74c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4fa74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4fa750:
    // 0x4fa750: 0xc21823  subu        $v1, $a2, $v0
    ctx->pc = 0x4fa750u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4fa754:
    // 0x4fa754: 0x9207005a  lbu         $a3, 0x5A($s0)
    ctx->pc = 0x4fa754u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 90)));
label_4fa758:
    // 0x4fa758: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x4fa758u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4fa75c:
    // 0x4fa75c: 0x2484da78  addiu       $a0, $a0, -0x2588
    ctx->pc = 0x4fa75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957688));
label_4fa760:
    // 0x4fa760: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fa760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fa764:
    // 0x4fa764: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fa764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fa768:
    // 0x4fa768: 0x2463e9b0  addiu       $v1, $v1, -0x1650
    ctx->pc = 0x4fa768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961584));
label_4fa76c:
    // 0x4fa76c: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x4fa76cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4fa770:
    // 0x4fa770: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4fa770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4fa774:
    // 0x4fa774: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4fa774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4fa778:
    // 0x4fa778: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fa778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fa77c:
    // 0x4fa77c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4fa77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fa780:
    // 0x4fa780: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x4fa780u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4fa784:
    // 0x4fa784: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4fa788:
    if (ctx->pc == 0x4FA788u) {
        ctx->pc = 0x4FA788u;
            // 0x4fa788: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FA78Cu;
        goto label_4fa78c;
    }
    ctx->pc = 0x4FA784u;
    {
        const bool branch_taken_0x4fa784 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4fa784) {
            ctx->pc = 0x4FA788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA784u;
            // 0x4fa788: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA798u;
            goto label_4fa798;
        }
    }
    ctx->pc = 0x4FA78Cu;
label_4fa78c:
    // 0x4fa78c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa78cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa790:
    // 0x4fa790: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fa794:
    if (ctx->pc == 0x4FA794u) {
        ctx->pc = 0x4FA794u;
            // 0x4fa794: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA798u;
        goto label_4fa798;
    }
    ctx->pc = 0x4FA790u;
    {
        const bool branch_taken_0x4fa790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA790u;
            // 0x4fa794: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa790) {
            ctx->pc = 0x4FA7B0u;
            goto label_4fa7b0;
        }
    }
    ctx->pc = 0x4FA798u;
label_4fa798:
    // 0x4fa798: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa79c:
    // 0x4fa79c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa7a0:
    // 0x4fa7a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa7a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa7a4:
    // 0x4fa7a4: 0x0  nop
    ctx->pc = 0x4fa7a4u;
    // NOP
label_4fa7a8:
    // 0x4fa7a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa7a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa7ac:
    // 0x4fa7ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa7acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa7b0:
    // 0x4fa7b0: 0x10000013  b           . + 4 + (0x13 << 2)
label_4fa7b4:
    if (ctx->pc == 0x4FA7B4u) {
        ctx->pc = 0x4FA7B8u;
        goto label_4fa7b8;
    }
    ctx->pc = 0x4FA7B0u;
    {
        const bool branch_taken_0x4fa7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa7b0) {
            ctx->pc = 0x4FA800u;
            goto label_4fa800;
        }
    }
    ctx->pc = 0x4FA7B8u;
label_4fa7b8:
    // 0x4fa7b8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4fa7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4fa7bc:
    // 0x4fa7bc: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x4fa7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4fa7c0:
    // 0x4fa7c0: 0x2463e9b0  addiu       $v1, $v1, -0x1650
    ctx->pc = 0x4fa7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961584));
label_4fa7c4:
    // 0x4fa7c4: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x4fa7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_4fa7c8:
    // 0x4fa7c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa7cc:
    // 0x4fa7cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4fa7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4fa7d0:
    // 0x4fa7d0: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x4fa7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4fa7d4:
    // 0x4fa7d4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_4fa7d8:
    if (ctx->pc == 0x4FA7D8u) {
        ctx->pc = 0x4FA7D8u;
            // 0x4fa7d8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x4FA7DCu;
        goto label_4fa7dc;
    }
    ctx->pc = 0x4FA7D4u;
    {
        const bool branch_taken_0x4fa7d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4fa7d4) {
            ctx->pc = 0x4FA7D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA7D4u;
            // 0x4fa7d8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA7E8u;
            goto label_4fa7e8;
        }
    }
    ctx->pc = 0x4FA7DCu;
label_4fa7dc:
    // 0x4fa7dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa7e0:
    // 0x4fa7e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fa7e4:
    if (ctx->pc == 0x4FA7E4u) {
        ctx->pc = 0x4FA7E4u;
            // 0x4fa7e4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FA7E8u;
        goto label_4fa7e8;
    }
    ctx->pc = 0x4FA7E0u;
    {
        const bool branch_taken_0x4fa7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA7E0u;
            // 0x4fa7e4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa7e0) {
            ctx->pc = 0x4FA800u;
            goto label_4fa800;
        }
    }
    ctx->pc = 0x4FA7E8u;
label_4fa7e8:
    // 0x4fa7e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4fa7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4fa7ec:
    // 0x4fa7ec: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4fa7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4fa7f0:
    // 0x4fa7f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4fa7f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa7f4:
    // 0x4fa7f4: 0x0  nop
    ctx->pc = 0x4fa7f4u;
    // NOP
label_4fa7f8:
    // 0x4fa7f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4fa7f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4fa7fc:
    // 0x4fa7fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4fa7fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4fa800:
    // 0x4fa800: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4fa800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4fa804:
    // 0x4fa804: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_4fa808:
    if (ctx->pc == 0x4FA808u) {
        ctx->pc = 0x4FA808u;
            // 0x4fa808: 0x96050106  lhu         $a1, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->pc = 0x4FA80Cu;
        goto label_4fa80c;
    }
    ctx->pc = 0x4FA804u;
    {
        const bool branch_taken_0x4fa804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4fa804) {
            ctx->pc = 0x4FA808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA804u;
            // 0x4fa808: 0x96050106  lhu         $a1, 0x106($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA818u;
            goto label_4fa818;
        }
    }
    ctx->pc = 0x4FA80Cu;
label_4fa80c:
    // 0x4fa80c: 0xc60000f8  lwc1        $f0, 0xF8($s0)
    ctx->pc = 0x4fa80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa810:
    // 0x4fa810: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4fa810u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_4fa814:
    // 0x4fa814: 0x96050106  lhu         $a1, 0x106($s0)
    ctx->pc = 0x4fa814u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 262)));
label_4fa818:
    // 0x4fa818: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x4fa818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_4fa81c:
    // 0x4fa81c: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x4fa81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_4fa820:
    // 0x4fa820: 0x92060104  lbu         $a2, 0x104($s0)
    ctx->pc = 0x4fa820u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 260)));
label_4fa824:
    // 0x4fa824: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4fa824u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4fa828:
    // 0x4fa828: 0x92070105  lbu         $a3, 0x105($s0)
    ctx->pc = 0x4fa828u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 261)));
label_4fa82c:
    // 0x4fa82c: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x4fa82cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_4fa830:
    // 0x4fa830: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x4fa830u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4fa834:
    // 0x4fa834: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x4fa834u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4fa838:
    // 0x4fa838: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x4fa838u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_4fa83c:
    // 0x4fa83c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x4fa83cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa840:
    // 0x4fa840: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x4fa840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4fa844:
    // 0x4fa844: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x4fa844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_4fa848:
    // 0x4fa848: 0x1810  mfhi        $v1
    ctx->pc = 0x4fa848u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_4fa84c:
    // 0x4fa84c: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x4fa84cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_4fa850:
    // 0x4fa850: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fa850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa854:
    // 0x4fa854: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x4fa854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4fa858:
    // 0x4fa858: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x4fa858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_4fa85c:
    // 0x4fa85c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4fa85cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fa860:
    // 0x4fa860: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4fa860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4fa864:
    // 0x4fa864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fa864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa868:
    // 0x4fa868: 0x0  nop
    ctx->pc = 0x4fa868u;
    // NOP
label_4fa86c:
    // 0x4fa86c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fa86cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4fa870:
    // 0x4fa870: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_4fa874:
    if (ctx->pc == 0x4FA874u) {
        ctx->pc = 0x4FA874u;
            // 0x4fa874: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x4FA878u;
        goto label_4fa878;
    }
    ctx->pc = 0x4FA870u;
    {
        const bool branch_taken_0x4fa870 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FA874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA870u;
            // 0x4fa874: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa870) {
            ctx->pc = 0x4FA884u;
            goto label_4fa884;
        }
    }
    ctx->pc = 0x4FA878u;
label_4fa878:
    // 0x4fa878: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4fa878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa87c:
    // 0x4fa87c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_4fa880:
    if (ctx->pc == 0x4FA880u) {
        ctx->pc = 0x4FA884u;
        goto label_4fa884;
    }
    ctx->pc = 0x4FA87Cu;
    {
        const bool branch_taken_0x4fa87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa87c) {
            ctx->pc = 0x4FA8ECu;
            goto label_4fa8ec;
        }
    }
    ctx->pc = 0x4FA884u;
label_4fa884:
    // 0x4fa884: 0x3c023c17  lui         $v0, 0x3C17
    ctx->pc = 0x4fa884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15383 << 16));
label_4fa888:
    // 0x4fa888: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fa888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fa88c:
    // 0x4fa88c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa88cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa890:
    // 0x4fa890: 0x0  nop
    ctx->pc = 0x4fa890u;
    // NOP
label_4fa894:
    // 0x4fa894: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4fa894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4fa898:
    // 0x4fa898: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4fa898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa89c:
    // 0x4fa89c: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x4fa89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fa8a0:
    // 0x4fa8a0: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x4fa8a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa8a4:
    // 0x4fa8a4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4fa8a8:
    if (ctx->pc == 0x4FA8A8u) {
        ctx->pc = 0x4FA8A8u;
            // 0x4fa8a8: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4FA8ACu;
        goto label_4fa8ac;
    }
    ctx->pc = 0x4FA8A4u;
    {
        const bool branch_taken_0x4fa8a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa8a4) {
            ctx->pc = 0x4FA8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA8A4u;
            // 0x4fa8a8: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA8CCu;
            goto label_4fa8cc;
        }
    }
    ctx->pc = 0x4FA8ACu;
label_4fa8ac:
    // 0x4fa8ac: 0xc6810df4  lwc1        $f1, 0xDF4($s4)
    ctx->pc = 0x4fa8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fa8b0:
    // 0x4fa8b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fa8b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa8b4:
    // 0x4fa8b4: 0x0  nop
    ctx->pc = 0x4fa8b4u;
    // NOP
label_4fa8b8:
    // 0x4fa8b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4fa8b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa8bc:
    // 0x4fa8bc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4fa8c0:
    if (ctx->pc == 0x4FA8C0u) {
        ctx->pc = 0x4FA8C4u;
        goto label_4fa8c4;
    }
    ctx->pc = 0x4FA8BCu;
    {
        const bool branch_taken_0x4fa8bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa8bc) {
            ctx->pc = 0x4FA8C8u;
            goto label_4fa8c8;
        }
    }
    ctx->pc = 0x4FA8C4u;
label_4fa8c4:
    // 0x4fa8c4: 0xe6820de4  swc1        $f2, 0xDE4($s4)
    ctx->pc = 0x4fa8c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa8c8:
    // 0x4fa8c8: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4fa8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4fa8cc:
    // 0x4fa8cc: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4fa8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4fa8d0:
    // 0x4fa8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa8d4:
    // 0x4fa8d4: 0x0  nop
    ctx->pc = 0x4fa8d4u;
    // NOP
label_4fa8d8:
    // 0x4fa8d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4fa8d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa8dc:
    // 0x4fa8dc: 0x45010046  bc1t        . + 4 + (0x46 << 2)
label_4fa8e0:
    if (ctx->pc == 0x4FA8E0u) {
        ctx->pc = 0x4FA8E4u;
        goto label_4fa8e4;
    }
    ctx->pc = 0x4FA8DCu;
    {
        const bool branch_taken_0x4fa8dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa8dc) {
            ctx->pc = 0x4FA9F8u;
            goto label_4fa9f8;
        }
    }
    ctx->pc = 0x4FA8E4u;
label_4fa8e4:
    // 0x4fa8e4: 0x10000044  b           . + 4 + (0x44 << 2)
label_4fa8e8:
    if (ctx->pc == 0x4FA8E8u) {
        ctx->pc = 0x4FA8E8u;
            // 0x4fa8e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FA8ECu;
        goto label_4fa8ec;
    }
    ctx->pc = 0x4FA8E4u;
    {
        const bool branch_taken_0x4fa8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA8E4u;
            // 0x4fa8e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa8e4) {
            ctx->pc = 0x4FA9F8u;
            goto label_4fa9f8;
        }
    }
    ctx->pc = 0x4FA8ECu;
label_4fa8ec:
    // 0x4fa8ec: 0x0  nop
    ctx->pc = 0x4fa8ecu;
    // NOP
label_4fa8f0:
    // 0x4fa8f0: 0x0  nop
    ctx->pc = 0x4fa8f0u;
    // NOP
label_4fa8f4:
    // 0x4fa8f4: 0x46002543  div.s       $f21, $f4, $f0
    ctx->pc = 0x4fa8f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[21] = ctx->f[4] / ctx->f[0];
label_4fa8f8:
    // 0x4fa8f8: 0x0  nop
    ctx->pc = 0x4fa8f8u;
    // NOP
label_4fa8fc:
    // 0x4fa8fc: 0x4603a801  sub.s       $f0, $f21, $f3
    ctx->pc = 0x4fa8fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[3]);
label_4fa900:
    // 0x4fa900: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4fa900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa904:
    // 0x4fa904: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_4fa908:
    if (ctx->pc == 0x4FA908u) {
        ctx->pc = 0x4FA90Cu;
        goto label_4fa90c;
    }
    ctx->pc = 0x4FA904u;
    {
        const bool branch_taken_0x4fa904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa904) {
            ctx->pc = 0x4FA95Cu;
            goto label_4fa95c;
        }
    }
    ctx->pc = 0x4FA90Cu;
label_4fa90c:
    // 0x4fa90c: 0xc6800de8  lwc1        $f0, 0xDE8($s4)
    ctx->pc = 0x4fa90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa910:
    // 0x4fa910: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4fa910u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa914:
    // 0x4fa914: 0x45020025  bc1fl       . + 4 + (0x25 << 2)
label_4fa918:
    if (ctx->pc == 0x4FA918u) {
        ctx->pc = 0x4FA918u;
            // 0x4fa918: 0xc60200ac  lwc1        $f2, 0xAC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x4FA91Cu;
        goto label_4fa91c;
    }
    ctx->pc = 0x4FA914u;
    {
        const bool branch_taken_0x4fa914 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa914) {
            ctx->pc = 0x4FA918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA914u;
            // 0x4fa918: 0xc60200ac  lwc1        $f2, 0xAC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA9ACu;
            goto label_4fa9ac;
        }
    }
    ctx->pc = 0x4FA91Cu;
label_4fa91c:
    // 0x4fa91c: 0x16263c  dsll32      $a0, $s6, 24
    ctx->pc = 0x4fa91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) << (32 + 24));
label_4fa920:
    // 0x4fa920: 0xc049820  jal         func_126080
label_4fa924:
    if (ctx->pc == 0x4FA924u) {
        ctx->pc = 0x4FA924u;
            // 0x4fa924: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4FA928u;
        goto label_4fa928;
    }
    ctx->pc = 0x4FA920u;
    SET_GPR_U32(ctx, 31, 0x4FA928u);
    ctx->pc = 0x4FA924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA920u;
            // 0x4fa924: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA928u; }
        if (ctx->pc != 0x4FA928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FA928u; }
        if (ctx->pc != 0x4FA928u) { return; }
    }
    ctx->pc = 0x4FA928u;
label_4fa928:
    // 0x4fa928: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4fa928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4fa92c:
    // 0x4fa92c: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
label_4fa930:
    if (ctx->pc == 0x4FA930u) {
        ctx->pc = 0x4FA934u;
        goto label_4fa934;
    }
    ctx->pc = 0x4FA92Cu;
    {
        const bool branch_taken_0x4fa92c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa92c) {
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA934u;
label_4fa934:
    // 0x4fa934: 0x8e420968  lw          $v0, 0x968($s2)
    ctx->pc = 0x4fa934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2408)));
label_4fa938:
    // 0x4fa938: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_4fa93c:
    if (ctx->pc == 0x4FA93Cu) {
        ctx->pc = 0x4FA93Cu;
            // 0x4fa93c: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FA940u;
        goto label_4fa940;
    }
    ctx->pc = 0x4FA938u;
    {
        const bool branch_taken_0x4fa938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa938) {
            ctx->pc = 0x4FA93Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA938u;
            // 0x4fa93c: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA940u;
label_4fa940:
    // 0x4fa940: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4fa940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4fa944:
    // 0x4fa944: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fa944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fa948:
    // 0x4fa948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa94c:
    // 0x4fa94c: 0x0  nop
    ctx->pc = 0x4fa94cu;
    // NOP
label_4fa950:
    // 0x4fa950: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4fa950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4fa954:
    // 0x4fa954: 0x10000014  b           . + 4 + (0x14 << 2)
label_4fa958:
    if (ctx->pc == 0x4FA958u) {
        ctx->pc = 0x4FA958u;
            // 0x4fa958: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FA95Cu;
        goto label_4fa95c;
    }
    ctx->pc = 0x4FA954u;
    {
        const bool branch_taken_0x4fa954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FA958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA954u;
            // 0x4fa958: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fa954) {
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA95Cu;
label_4fa95c:
    // 0x4fa95c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4fa95cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa960:
    // 0x4fa960: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_4fa964:
    if (ctx->pc == 0x4FA964u) {
        ctx->pc = 0x4FA968u;
        goto label_4fa968;
    }
    ctx->pc = 0x4FA960u;
    {
        const bool branch_taken_0x4fa960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa960) {
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA968u;
label_4fa968:
    // 0x4fa968: 0xc6800df4  lwc1        $f0, 0xDF4($s4)
    ctx->pc = 0x4fa968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa96c:
    // 0x4fa96c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4fa96cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa970:
    // 0x4fa970: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_4fa974:
    if (ctx->pc == 0x4FA974u) {
        ctx->pc = 0x4FA978u;
        goto label_4fa978;
    }
    ctx->pc = 0x4FA970u;
    {
        const bool branch_taken_0x4fa970 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa970) {
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA978u;
label_4fa978:
    // 0x4fa978: 0xc60000b0  lwc1        $f0, 0xB0($s0)
    ctx->pc = 0x4fa978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fa97c:
    // 0x4fa97c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4fa97cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa980:
    // 0x4fa980: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_4fa984:
    if (ctx->pc == 0x4FA984u) {
        ctx->pc = 0x4FA988u;
        goto label_4fa988;
    }
    ctx->pc = 0x4FA980u;
    {
        const bool branch_taken_0x4fa980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa980) {
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA988u;
label_4fa988:
    // 0x4fa988: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4fa98c:
    if (ctx->pc == 0x4FA98Cu) {
        ctx->pc = 0x4FA98Cu;
            // 0x4fa98c: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FA990u;
        goto label_4fa990;
    }
    ctx->pc = 0x4FA988u;
    {
        const bool branch_taken_0x4fa988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fa988) {
            ctx->pc = 0x4FA98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA988u;
            // 0x4fa98c: 0xe6950de4  swc1        $f21, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA9A8u;
            goto label_4fa9a8;
        }
    }
    ctx->pc = 0x4FA990u;
label_4fa990:
    // 0x4fa990: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4fa990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4fa994:
    // 0x4fa994: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fa994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fa998:
    // 0x4fa998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa99c:
    // 0x4fa99c: 0x0  nop
    ctx->pc = 0x4fa99cu;
    // NOP
label_4fa9a0:
    // 0x4fa9a0: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4fa9a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4fa9a4:
    // 0x4fa9a4: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4fa9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa9a8:
    // 0x4fa9a8: 0xc60200ac  lwc1        $f2, 0xAC($s0)
    ctx->pc = 0x4fa9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4fa9ac:
    // 0x4fa9ac: 0xc6830de4  lwc1        $f3, 0xDE4($s4)
    ctx->pc = 0x4fa9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4fa9b0:
    // 0x4fa9b0: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x4fa9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa9b4:
    // 0x4fa9b4: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4fa9b8:
    if (ctx->pc == 0x4FA9B8u) {
        ctx->pc = 0x4FA9B8u;
            // 0x4fa9b8: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->pc = 0x4FA9BCu;
        goto label_4fa9bc;
    }
    ctx->pc = 0x4FA9B4u;
    {
        const bool branch_taken_0x4fa9b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa9b4) {
            ctx->pc = 0x4FA9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FA9B4u;
            // 0x4fa9b8: 0x3c023f2b  lui         $v0, 0x3F2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FA9DCu;
            goto label_4fa9dc;
        }
    }
    ctx->pc = 0x4FA9BCu;
label_4fa9bc:
    // 0x4fa9bc: 0xc6810df4  lwc1        $f1, 0xDF4($s4)
    ctx->pc = 0x4fa9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fa9c0:
    // 0x4fa9c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fa9c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa9c4:
    // 0x4fa9c4: 0x0  nop
    ctx->pc = 0x4fa9c4u;
    // NOP
label_4fa9c8:
    // 0x4fa9c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4fa9c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa9cc:
    // 0x4fa9cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4fa9d0:
    if (ctx->pc == 0x4FA9D0u) {
        ctx->pc = 0x4FA9D4u;
        goto label_4fa9d4;
    }
    ctx->pc = 0x4FA9CCu;
    {
        const bool branch_taken_0x4fa9cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa9cc) {
            ctx->pc = 0x4FA9D8u;
            goto label_4fa9d8;
        }
    }
    ctx->pc = 0x4FA9D4u;
label_4fa9d4:
    // 0x4fa9d4: 0xe6820de4  swc1        $f2, 0xDE4($s4)
    ctx->pc = 0x4fa9d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fa9d8:
    // 0x4fa9d8: 0x3c023f2b  lui         $v0, 0x3F2B
    ctx->pc = 0x4fa9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16171 << 16));
label_4fa9dc:
    // 0x4fa9dc: 0x3442da13  ori         $v0, $v0, 0xDA13
    ctx->pc = 0x4fa9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55827);
label_4fa9e0:
    // 0x4fa9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fa9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fa9e4:
    // 0x4fa9e4: 0x0  nop
    ctx->pc = 0x4fa9e4u;
    // NOP
label_4fa9e8:
    // 0x4fa9e8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x4fa9e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fa9ec:
    // 0x4fa9ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fa9f0:
    if (ctx->pc == 0x4FA9F0u) {
        ctx->pc = 0x4FA9F4u;
        goto label_4fa9f4;
    }
    ctx->pc = 0x4FA9ECu;
    {
        const bool branch_taken_0x4fa9ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fa9ec) {
            ctx->pc = 0x4FA9F8u;
            goto label_4fa9f8;
        }
    }
    ctx->pc = 0x4FA9F4u;
label_4fa9f4:
    // 0x4fa9f4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x4fa9f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fa9f8:
    // 0x4fa9f8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x4fa9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4fa9fc:
    // 0x4fa9fc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4fa9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4faa00:
    // 0x4faa00: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4faa00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4faa04:
    // 0x4faa04: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4faa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4faa08:
    // 0x4faa08: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4faa08u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4faa0c:
    // 0x4faa0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4faa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4faa10:
    // 0x4faa10: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4faa10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4faa14:
    // 0x4faa14: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4faa14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4faa18:
    // 0x4faa18: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4faa18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4faa1c:
    // 0x4faa1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4faa1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4faa20:
    // 0x4faa20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4faa20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4faa24:
    // 0x4faa24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4faa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4faa28:
    // 0x4faa28: 0x3e00008  jr          $ra
label_4faa2c:
    if (ctx->pc == 0x4FAA2Cu) {
        ctx->pc = 0x4FAA2Cu;
            // 0x4faa2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4FAA30u;
        goto label_4faa30;
    }
    ctx->pc = 0x4FAA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FAA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAA28u;
            // 0x4faa2c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FAA30u;
label_4faa30:
    // 0x4faa30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4faa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4faa34:
    // 0x4faa34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4faa34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4faa38:
    // 0x4faa38: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4faa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4faa3c:
    // 0x4faa3c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4faa3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4faa40:
    // 0x4faa40: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4faa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4faa44:
    // 0x4faa44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4faa44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4faa48:
    // 0x4faa48: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4faa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4faa4c:
    // 0x4faa4c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4faa4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4faa50:
    // 0x4faa50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4faa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4faa54:
    // 0x4faa54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4faa54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4faa58:
    // 0x4faa58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4faa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4faa5c:
    // 0x4faa5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4faa5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4faa60:
    // 0x4faa60: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4faa60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4faa64:
    // 0x4faa64: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4faa64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4faa68:
    // 0x4faa68: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x4faa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4faa6c:
    // 0x4faa6c: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x4faa6cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4faa70:
    // 0x4faa70: 0x8c63012c  lw          $v1, 0x12C($v1)
    ctx->pc = 0x4faa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_4faa74:
    // 0x4faa74: 0x8e820da0  lw          $v0, 0xDA0($s4)
    ctx->pc = 0x4faa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3488)));
label_4faa78:
    // 0x4faa78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x4faa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_4faa7c:
    // 0x4faa7c: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
label_4faa80:
    if (ctx->pc == 0x4FAA80u) {
        ctx->pc = 0x4FAA80u;
            // 0x4faa80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FAA84u;
        goto label_4faa84;
    }
    ctx->pc = 0x4FAA7Cu;
    {
        const bool branch_taken_0x4faa7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FAA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAA7Cu;
            // 0x4faa80: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faa7c) {
            ctx->pc = 0x4FAD44u;
            goto label_4fad44;
        }
    }
    ctx->pc = 0x4FAA84u;
label_4faa84:
    // 0x4faa84: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4faa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4faa88:
    // 0x4faa88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4faa88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4faa8c:
    // 0x4faa8c: 0x8c550e80  lw          $s5, 0xE80($v0)
    ctx->pc = 0x4faa8cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4faa90:
    // 0x4faa90: 0x8e920d78  lw          $s2, 0xD78($s4)
    ctx->pc = 0x4faa90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3448)));
label_4faa94:
    // 0x4faa94: 0x96830c7e  lhu         $v1, 0xC7E($s4)
    ctx->pc = 0x4faa94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 3198)));
label_4faa98:
    // 0x4faa98: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x4faa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4faa9c:
    // 0x4faa9c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4faa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4faaa0:
    // 0x4faaa0: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x4faaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_4faaa4:
    // 0x4faaa4: 0x8ea30968  lw          $v1, 0x968($s5)
    ctx->pc = 0x4faaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_4faaa8:
    // 0x4faaa8: 0x106200a6  beq         $v1, $v0, . + 4 + (0xA6 << 2)
label_4faaac:
    if (ctx->pc == 0x4FAAACu) {
        ctx->pc = 0x4FAAACu;
            // 0x4faaac: 0x859821  addu        $s3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x4FAAB0u;
        goto label_4faab0;
    }
    ctx->pc = 0x4FAAA8u;
    {
        const bool branch_taken_0x4faaa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4FAAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAAA8u;
            // 0x4faaac: 0x859821  addu        $s3, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faaa8) {
            ctx->pc = 0x4FAD44u;
            goto label_4fad44;
        }
    }
    ctx->pc = 0x4FAAB0u;
label_4faab0:
    // 0x4faab0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4faab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4faab4:
    // 0x4faab4: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4faab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4faab8:
    // 0x4faab8: 0x320f809  jalr        $t9
label_4faabc:
    if (ctx->pc == 0x4FAABCu) {
        ctx->pc = 0x4FAABCu;
            // 0x4faabc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FAAC0u;
        goto label_4faac0;
    }
    ctx->pc = 0x4FAAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FAAC0u);
        ctx->pc = 0x4FAABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAAB8u;
            // 0x4faabc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FAAC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FAAC0u; }
            if (ctx->pc != 0x4FAAC0u) { return; }
        }
        }
    }
    ctx->pc = 0x4FAAC0u;
label_4faac0:
    // 0x4faac0: 0x2c422710  sltiu       $v0, $v0, 0x2710
    ctx->pc = 0x4faac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10000) ? 1 : 0);
label_4faac4:
    // 0x4faac4: 0x544000a0  bnel        $v0, $zero, . + 4 + (0xA0 << 2)
label_4faac8:
    if (ctx->pc == 0x4FAAC8u) {
        ctx->pc = 0x4FAAC8u;
            // 0x4faac8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FAACCu;
        goto label_4faacc;
    }
    ctx->pc = 0x4FAAC4u;
    {
        const bool branch_taken_0x4faac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4faac4) {
            ctx->pc = 0x4FAAC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAAC4u;
            // 0x4faac8: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAD48u;
            goto label_4fad48;
        }
    }
    ctx->pc = 0x4FAACCu;
label_4faacc:
    // 0x4faacc: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x4faaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4faad0:
    // 0x4faad0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4faad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4faad4:
    // 0x4faad4: 0x8ea6078c  lw          $a2, 0x78C($s5)
    ctx->pc = 0x4faad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1932)));
label_4faad8:
    // 0x4faad8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4faad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4faadc:
    // 0x4faadc: 0x8c470ea4  lw          $a3, 0xEA4($v0)
    ctx->pc = 0x4faadcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4faae0:
    // 0x4faae0: 0x2463d4bc  addiu       $v1, $v1, -0x2B44
    ctx->pc = 0x4faae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956220));
label_4faae4:
    // 0x4faae4: 0x8ea50968  lw          $a1, 0x968($s5)
    ctx->pc = 0x4faae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2408)));
label_4faae8:
    // 0x4faae8: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x4faae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4faaec:
    // 0x4faaec: 0xc42023  subu        $a0, $a2, $a0
    ctx->pc = 0x4faaecu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4faaf0:
    // 0x4faaf0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4faaf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4faaf4:
    // 0x4faaf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4faaf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4faaf8:
    // 0x4faaf8: 0x8ce6012c  lw          $a2, 0x12C($a3)
    ctx->pc = 0x4faaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
label_4faafc:
    // 0x4faafc: 0x9222005a  lbu         $v0, 0x5A($s1)
    ctx->pc = 0x4faafcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
label_4fab00:
    // 0x4fab00: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x4fab00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4fab04:
    // 0x4fab04: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x4fab04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4fab08:
    // 0x4fab08: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x4fab08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_4fab0c:
    // 0x4fab0c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x4fab0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_4fab10:
    // 0x4fab10: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4fab10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4fab14:
    // 0x4fab14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4fab14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4fab18:
    // 0x4fab18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4fab18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4fab1c:
    // 0x4fab1c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4fab1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4fab20:
    // 0x4fab20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4fab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4fab24:
    // 0x4fab24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4fab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4fab28:
    // 0x4fab28: 0xc4a40018  lwc1        $f4, 0x18($a1)
    ctx->pc = 0x4fab28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4fab2c:
    // 0x4fab2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4fab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4fab30:
    // 0x4fab30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4fab30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4fab34:
    // 0x4fab34: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x4fab34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_4fab38:
    // 0x4fab38: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4fab38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4fab3c:
    // 0x4fab3c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x4fab3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_4fab40:
    // 0x4fab40: 0x320f809  jalr        $t9
label_4fab44:
    if (ctx->pc == 0x4FAB44u) {
        ctx->pc = 0x4FAB44u;
            // 0x4fab44: 0x46041d5c  madd.s      $f21, $f3, $f4 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->pc = 0x4FAB48u;
        goto label_4fab48;
    }
    ctx->pc = 0x4FAB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FAB48u);
        ctx->pc = 0x4FAB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAB40u;
            // 0x4fab44: 0x46041d5c  madd.s      $f21, $f3, $f4 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FAB48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FAB48u; }
            if (ctx->pc != 0x4FAB48u) { return; }
        }
        }
    }
    ctx->pc = 0x4FAB48u;
label_4fab48:
    // 0x4fab48: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4fab4c:
    if (ctx->pc == 0x4FAB4Cu) {
        ctx->pc = 0x4FAB4Cu;
            // 0x4fab4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4FAB50u;
        goto label_4fab50;
    }
    ctx->pc = 0x4FAB48u;
    {
        const bool branch_taken_0x4fab48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4fab48) {
            ctx->pc = 0x4FAB4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAB48u;
            // 0x4fab4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAB5Cu;
            goto label_4fab5c;
        }
    }
    ctx->pc = 0x4FAB50u;
label_4fab50:
    // 0x4fab50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fab50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fab54:
    // 0x4fab54: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fab58:
    if (ctx->pc == 0x4FAB58u) {
        ctx->pc = 0x4FAB58u;
            // 0x4fab58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4FAB5Cu;
        goto label_4fab5c;
    }
    ctx->pc = 0x4FAB54u;
    {
        const bool branch_taken_0x4fab54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAB54u;
            // 0x4fab58: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fab54) {
            ctx->pc = 0x4FAB74u;
            goto label_4fab74;
        }
    }
    ctx->pc = 0x4FAB5Cu;
label_4fab5c:
    // 0x4fab5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4fab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4fab60:
    // 0x4fab60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4fab60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4fab64:
    // 0x4fab64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4fab64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fab68:
    // 0x4fab68: 0x0  nop
    ctx->pc = 0x4fab68u;
    // NOP
label_4fab6c:
    // 0x4fab6c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4fab6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4fab70:
    // 0x4fab70: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4fab70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4fab74:
    // 0x4fab74: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x4fab74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4fab78:
    // 0x4fab78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fab78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fab7c:
    // 0x4fab7c: 0x0  nop
    ctx->pc = 0x4fab7cu;
    // NOP
label_4fab80:
    // 0x4fab80: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4fab80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fab84:
    // 0x4fab84: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4fab88:
    if (ctx->pc == 0x4FAB88u) {
        ctx->pc = 0x4FAB88u;
            // 0x4fab88: 0xc6940de4  lwc1        $f20, 0xDE4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x4FAB8Cu;
        goto label_4fab8c;
    }
    ctx->pc = 0x4FAB84u;
    {
        const bool branch_taken_0x4fab84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4FAB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAB84u;
            // 0x4fab88: 0xc6940de4  lwc1        $f20, 0xDE4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fab84) {
            ctx->pc = 0x4FABA0u;
            goto label_4faba0;
        }
    }
    ctx->pc = 0x4FAB8Cu;
label_4fab8c:
    // 0x4fab8c: 0x3c023f50  lui         $v0, 0x3F50
    ctx->pc = 0x4fab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16208 << 16));
label_4fab90:
    // 0x4fab90: 0x344297b4  ori         $v0, $v0, 0x97B4
    ctx->pc = 0x4fab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38836);
label_4fab94:
    // 0x4fab94: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x4fab94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_4fab98:
    // 0x4fab98: 0x10000005  b           . + 4 + (0x5 << 2)
label_4fab9c:
    if (ctx->pc == 0x4FAB9Cu) {
        ctx->pc = 0x4FAB9Cu;
            // 0x4fab9c: 0x3c023f31  lui         $v0, 0x3F31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16177 << 16));
        ctx->pc = 0x4FABA0u;
        goto label_4faba0;
    }
    ctx->pc = 0x4FAB98u;
    {
        const bool branch_taken_0x4fab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAB98u;
            // 0x4fab9c: 0x3c023f31  lui         $v0, 0x3F31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16177 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fab98) {
            ctx->pc = 0x4FABB0u;
            goto label_4fabb0;
        }
    }
    ctx->pc = 0x4FABA0u;
label_4faba0:
    // 0x4faba0: 0x0  nop
    ctx->pc = 0x4faba0u;
    // NOP
label_4faba4:
    // 0x4faba4: 0x0  nop
    ctx->pc = 0x4faba4u;
    // NOP
label_4faba8:
    // 0x4faba8: 0x4601ad43  div.s       $f21, $f21, $f1
    ctx->pc = 0x4faba8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[1];
label_4fabac:
    // 0x4fabac: 0x3c023f31  lui         $v0, 0x3F31
    ctx->pc = 0x4fabacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16177 << 16));
label_4fabb0:
    // 0x4fabb0: 0x3442c71c  ori         $v0, $v0, 0xC71C
    ctx->pc = 0x4fabb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50972);
label_4fabb4:
    // 0x4fabb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fabb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fabb8:
    // 0x4fabb8: 0x0  nop
    ctx->pc = 0x4fabb8u;
    // NOP
label_4fabbc:
    // 0x4fabbc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x4fabbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fabc0:
    // 0x4fabc0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_4fabc4:
    if (ctx->pc == 0x4FABC4u) {
        ctx->pc = 0x4FABC4u;
            // 0x4fabc4: 0x3c023f43  lui         $v0, 0x3F43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16195 << 16));
        ctx->pc = 0x4FABC8u;
        goto label_4fabc8;
    }
    ctx->pc = 0x4FABC0u;
    {
        const bool branch_taken_0x4fabc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fabc0) {
            ctx->pc = 0x4FABC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FABC0u;
            // 0x4fabc4: 0x3c023f43  lui         $v0, 0x3F43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16195 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FABE4u;
            goto label_4fabe4;
        }
    }
    ctx->pc = 0x4FABC8u;
label_4fabc8:
    // 0x4fabc8: 0x3c023d8e  lui         $v0, 0x3D8E
    ctx->pc = 0x4fabc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15758 << 16));
label_4fabcc:
    // 0x4fabcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4fabccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4fabd0:
    // 0x4fabd0: 0x344238e4  ori         $v0, $v0, 0x38E4
    ctx->pc = 0x4fabd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14564);
label_4fabd4:
    // 0x4fabd4: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x4fabd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_4fabd8:
    // 0x4fabd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fabd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fabdc:
    // 0x4fabdc: 0x10000013  b           . + 4 + (0x13 << 2)
label_4fabe0:
    if (ctx->pc == 0x4FABE0u) {
        ctx->pc = 0x4FABE0u;
            // 0x4fabe0: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x4FABE4u;
        goto label_4fabe4;
    }
    ctx->pc = 0x4FABDCu;
    {
        const bool branch_taken_0x4fabdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FABDCu;
            // 0x4fabe0: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fabdc) {
            ctx->pc = 0x4FAC2Cu;
            goto label_4fac2c;
        }
    }
    ctx->pc = 0x4FABE4u;
label_4fabe4:
    // 0x4fabe4: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4fabe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4fabe8:
    // 0x4fabe8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fabe8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fabec:
    // 0x4fabec: 0x0  nop
    ctx->pc = 0x4fabecu;
    // NOP
label_4fabf0:
    // 0x4fabf0: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x4fabf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fabf4:
    // 0x4fabf4: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_4fabf8:
    if (ctx->pc == 0x4FABF8u) {
        ctx->pc = 0x4FABF8u;
            // 0x4fabf8: 0x3c023b97  lui         $v0, 0x3B97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
        ctx->pc = 0x4FABFCu;
        goto label_4fabfc;
    }
    ctx->pc = 0x4FABF4u;
    {
        const bool branch_taken_0x4fabf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fabf4) {
            ctx->pc = 0x4FABF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FABF4u;
            // 0x4fabf8: 0x3c023b97  lui         $v0, 0x3B97 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAC14u;
            goto label_4fac14;
        }
    }
    ctx->pc = 0x4FABFCu;
label_4fabfc:
    // 0x4fabfc: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x4fabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_4fac00:
    // 0x4fac00: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x4fac00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_4fac04:
    // 0x4fac04: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4fac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4fac08:
    // 0x4fac08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fac08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fac0c:
    // 0x4fac0c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4fac10:
    if (ctx->pc == 0x4FAC10u) {
        ctx->pc = 0x4FAC10u;
            // 0x4fac10: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x4FAC14u;
        goto label_4fac14;
    }
    ctx->pc = 0x4FAC0Cu;
    {
        const bool branch_taken_0x4fac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAC0Cu;
            // 0x4fac10: 0x4600ad40  add.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fac0c) {
            ctx->pc = 0x4FAC2Cu;
            goto label_4fac2c;
        }
    }
    ctx->pc = 0x4FAC14u;
label_4fac14:
    // 0x4fac14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4fac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4fac18:
    // 0x4fac18: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fac18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fac1c:
    // 0x4fac1c: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x4fac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_4fac20:
    // 0x4fac20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fac20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fac24:
    // 0x4fac24: 0x0  nop
    ctx->pc = 0x4fac24u;
    // NOP
label_4fac28:
    // 0x4fac28: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x4fac28u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_4fac2c:
    // 0x4fac2c: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x4fac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_4fac30:
    // 0x4fac30: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4fac30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4fac34:
    // 0x4fac34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fac34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fac38:
    // 0x4fac38: 0x0  nop
    ctx->pc = 0x4fac38u;
    // NOP
label_4fac3c:
    // 0x4fac3c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4fac3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fac40:
    // 0x4fac40: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_4fac44:
    if (ctx->pc == 0x4FAC44u) {
        ctx->pc = 0x4FAC48u;
        goto label_4fac48;
    }
    ctx->pc = 0x4FAC40u;
    {
        const bool branch_taken_0x4fac40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fac40) {
            ctx->pc = 0x4FAC50u;
            goto label_4fac50;
        }
    }
    ctx->pc = 0x4FAC48u;
label_4fac48:
    // 0x4fac48: 0x10000036  b           . + 4 + (0x36 << 2)
label_4fac4c:
    if (ctx->pc == 0x4FAC4Cu) {
        ctx->pc = 0x4FAC4Cu;
            // 0x4fac4c: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FAC50u;
        goto label_4fac50;
    }
    ctx->pc = 0x4FAC48u;
    {
        const bool branch_taken_0x4fac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAC48u;
            // 0x4fac4c: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fac48) {
            ctx->pc = 0x4FAD24u;
            goto label_4fad24;
        }
    }
    ctx->pc = 0x4FAC50u;
label_4fac50:
    // 0x4fac50: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x4fac50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fac54:
    // 0x4fac54: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
label_4fac58:
    if (ctx->pc == 0x4FAC58u) {
        ctx->pc = 0x4FAC58u;
            // 0x4fac58: 0x3c023f3d  lui         $v0, 0x3F3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16189 << 16));
        ctx->pc = 0x4FAC5Cu;
        goto label_4fac5c;
    }
    ctx->pc = 0x4FAC54u;
    {
        const bool branch_taken_0x4fac54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fac54) {
            ctx->pc = 0x4FAC58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAC54u;
            // 0x4fac58: 0x3c023f3d  lui         $v0, 0x3F3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16189 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FACA8u;
            goto label_4faca8;
        }
    }
    ctx->pc = 0x4FAC5Cu;
label_4fac5c:
    // 0x4fac5c: 0xc6810de8  lwc1        $f1, 0xDE8($s4)
    ctx->pc = 0x4fac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4fac60:
    // 0x4fac60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4fac60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fac64:
    // 0x4fac64: 0x0  nop
    ctx->pc = 0x4fac64u;
    // NOP
label_4fac68:
    // 0x4fac68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4fac68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fac6c:
    // 0x4fac6c: 0x4502002e  bc1fl       . + 4 + (0x2E << 2)
label_4fac70:
    if (ctx->pc == 0x4FAC70u) {
        ctx->pc = 0x4FAC70u;
            // 0x4fac70: 0x3c023f43  lui         $v0, 0x3F43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16195 << 16));
        ctx->pc = 0x4FAC74u;
        goto label_4fac74;
    }
    ctx->pc = 0x4FAC6Cu;
    {
        const bool branch_taken_0x4fac6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fac6c) {
            ctx->pc = 0x4FAC70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAC6Cu;
            // 0x4fac70: 0x3c023f43  lui         $v0, 0x3F43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16195 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAD28u;
            goto label_4fad28;
        }
    }
    ctx->pc = 0x4FAC74u;
label_4fac74:
    // 0x4fac74: 0x10263c  dsll32      $a0, $s0, 24
    ctx->pc = 0x4fac74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 24));
label_4fac78:
    // 0x4fac78: 0xc049820  jal         func_126080
label_4fac7c:
    if (ctx->pc == 0x4FAC7Cu) {
        ctx->pc = 0x4FAC7Cu;
            // 0x4fac7c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->pc = 0x4FAC80u;
        goto label_4fac80;
    }
    ctx->pc = 0x4FAC78u;
    SET_GPR_U32(ctx, 31, 0x4FAC80u);
    ctx->pc = 0x4FAC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAC78u;
            // 0x4fac7c: 0x4263f  dsra32      $a0, $a0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FAC80u; }
        if (ctx->pc != 0x4FAC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FAC80u; }
        if (ctx->pc != 0x4FAC80u) { return; }
    }
    ctx->pc = 0x4FAC80u;
label_4fac80:
    // 0x4fac80: 0x2841001a  slti        $at, $v0, 0x1A
    ctx->pc = 0x4fac80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
label_4fac84:
    // 0x4fac84: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
label_4fac88:
    if (ctx->pc == 0x4FAC88u) {
        ctx->pc = 0x4FAC8Cu;
        goto label_4fac8c;
    }
    ctx->pc = 0x4FAC84u;
    {
        const bool branch_taken_0x4fac84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fac84) {
            ctx->pc = 0x4FAD24u;
            goto label_4fad24;
        }
    }
    ctx->pc = 0x4FAC8Cu;
label_4fac8c:
    // 0x4fac8c: 0x3c023b97  lui         $v0, 0x3B97
    ctx->pc = 0x4fac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15255 << 16));
label_4fac90:
    // 0x4fac90: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fac94:
    // 0x4fac94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fac94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fac98:
    // 0x4fac98: 0x0  nop
    ctx->pc = 0x4fac98u;
    // NOP
label_4fac9c:
    // 0x4fac9c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x4fac9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_4faca0:
    // 0x4faca0: 0x10000020  b           . + 4 + (0x20 << 2)
label_4faca4:
    if (ctx->pc == 0x4FACA4u) {
        ctx->pc = 0x4FACA4u;
            // 0x4faca4: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FACA8u;
        goto label_4faca8;
    }
    ctx->pc = 0x4FACA0u;
    {
        const bool branch_taken_0x4faca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FACA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FACA0u;
            // 0x4faca4: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4faca0) {
            ctx->pc = 0x4FAD24u;
            goto label_4fad24;
        }
    }
    ctx->pc = 0x4FACA8u;
label_4faca8:
    // 0x4faca8: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x4faca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_4facac:
    // 0x4facac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4facacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4facb0:
    // 0x4facb0: 0x0  nop
    ctx->pc = 0x4facb0u;
    // NOP
label_4facb4:
    // 0x4facb4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4facb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4facb8:
    // 0x4facb8: 0x45030015  bc1tl       . + 4 + (0x15 << 2)
label_4facbc:
    if (ctx->pc == 0x4FACBCu) {
        ctx->pc = 0x4FACBCu;
            // 0x4facbc: 0x3c023b17  lui         $v0, 0x3B17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15127 << 16));
        ctx->pc = 0x4FACC0u;
        goto label_4facc0;
    }
    ctx->pc = 0x4FACB8u;
    {
        const bool branch_taken_0x4facb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4facb8) {
            ctx->pc = 0x4FACBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FACB8u;
            // 0x4facbc: 0x3c023b17  lui         $v0, 0x3B17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15127 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FAD10u;
            goto label_4fad10;
        }
    }
    ctx->pc = 0x4FACC0u;
label_4facc0:
    // 0x4facc0: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x4facc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_4facc4:
    // 0x4facc4: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x4facc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_4facc8:
    // 0x4facc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4facc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4faccc:
    // 0x4faccc: 0x0  nop
    ctx->pc = 0x4facccu;
    // NOP
label_4facd0:
    // 0x4facd0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x4facd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4facd4:
    // 0x4facd4: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_4facd8:
    if (ctx->pc == 0x4FACD8u) {
        ctx->pc = 0x4FACDCu;
        goto label_4facdc;
    }
    ctx->pc = 0x4FACD4u;
    {
        const bool branch_taken_0x4facd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4facd4) {
            ctx->pc = 0x4FAD24u;
            goto label_4fad24;
        }
    }
    ctx->pc = 0x4FACDCu;
label_4facdc:
    // 0x4facdc: 0xc6810de8  lwc1        $f1, 0xDE8($s4)
    ctx->pc = 0x4facdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4face0:
    // 0x4face0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4face0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4face4:
    // 0x4face4: 0x0  nop
    ctx->pc = 0x4face4u;
    // NOP
label_4face8:
    // 0x4face8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4face8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4facec:
    // 0x4facec: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_4facf0:
    if (ctx->pc == 0x4FACF0u) {
        ctx->pc = 0x4FACF4u;
        goto label_4facf4;
    }
    ctx->pc = 0x4FACECu;
    {
        const bool branch_taken_0x4facec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4facec) {
            ctx->pc = 0x4FAD24u;
            goto label_4fad24;
        }
    }
    ctx->pc = 0x4FACF4u;
label_4facf4:
    // 0x4facf4: 0x3c023b17  lui         $v0, 0x3B17
    ctx->pc = 0x4facf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15127 << 16));
label_4facf8:
    // 0x4facf8: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4facf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4facfc:
    // 0x4facfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4facfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fad00:
    // 0x4fad00: 0x0  nop
    ctx->pc = 0x4fad00u;
    // NOP
label_4fad04:
    // 0x4fad04: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4fad04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4fad08:
    // 0x4fad08: 0x10000006  b           . + 4 + (0x6 << 2)
label_4fad0c:
    if (ctx->pc == 0x4FAD0Cu) {
        ctx->pc = 0x4FAD0Cu;
            // 0x4fad0c: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->pc = 0x4FAD10u;
        goto label_4fad10;
    }
    ctx->pc = 0x4FAD08u;
    {
        const bool branch_taken_0x4fad08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FAD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAD08u;
            // 0x4fad0c: 0xe6800de4  swc1        $f0, 0xDE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fad08) {
            ctx->pc = 0x4FAD24u;
            goto label_4fad24;
        }
    }
    ctx->pc = 0x4FAD10u;
label_4fad10:
    // 0x4fad10: 0x3442b426  ori         $v0, $v0, 0xB426
    ctx->pc = 0x4fad10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46118);
label_4fad14:
    // 0x4fad14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fad14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fad18:
    // 0x4fad18: 0x0  nop
    ctx->pc = 0x4fad18u;
    // NOP
label_4fad1c:
    // 0x4fad1c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x4fad1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_4fad20:
    // 0x4fad20: 0xe6800de4  swc1        $f0, 0xDE4($s4)
    ctx->pc = 0x4fad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3556), bits); }
label_4fad24:
    // 0x4fad24: 0x3c023f43  lui         $v0, 0x3F43
    ctx->pc = 0x4fad24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16195 << 16));
label_4fad28:
    // 0x4fad28: 0x34428e39  ori         $v0, $v0, 0x8E39
    ctx->pc = 0x4fad28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36409);
label_4fad2c:
    // 0x4fad2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4fad2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4fad30:
    // 0x4fad30: 0x0  nop
    ctx->pc = 0x4fad30u;
    // NOP
label_4fad34:
    // 0x4fad34: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x4fad34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4fad38:
    // 0x4fad38: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4fad3c:
    if (ctx->pc == 0x4FAD3Cu) {
        ctx->pc = 0x4FAD40u;
        goto label_4fad40;
    }
    ctx->pc = 0x4FAD38u;
    {
        const bool branch_taken_0x4fad38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4fad38) {
            ctx->pc = 0x4FAD44u;
            goto label_4fad44;
        }
    }
    ctx->pc = 0x4FAD40u;
label_4fad40:
    // 0x4fad40: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x4fad40u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4fad44:
    // 0x4fad44: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x4fad44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4fad48:
    // 0x4fad48: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4fad48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4fad4c:
    // 0x4fad4c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4fad4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4fad50:
    // 0x4fad50: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4fad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4fad54:
    // 0x4fad54: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4fad54u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4fad58:
    // 0x4fad58: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4fad58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4fad5c:
    // 0x4fad5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4fad5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4fad60:
    // 0x4fad60: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4fad60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4fad64:
    // 0x4fad64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4fad64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fad68:
    // 0x4fad68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4fad68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fad6c:
    // 0x4fad6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4fad6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fad70:
    // 0x4fad70: 0x3e00008  jr          $ra
label_4fad74:
    if (ctx->pc == 0x4FAD74u) {
        ctx->pc = 0x4FAD74u;
            // 0x4fad74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4FAD78u;
        goto label_4fad78;
    }
    ctx->pc = 0x4FAD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FAD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FAD70u;
            // 0x4fad74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FAD78u;
label_4fad78:
    // 0x4fad78: 0x0  nop
    ctx->pc = 0x4fad78u;
    // NOP
label_4fad7c:
    // 0x4fad7c: 0x0  nop
    ctx->pc = 0x4fad7cu;
    // NOP
}
