#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DA0C0
// Address: 0x2da0c0 - 0x2db320
void sub_002DA0C0_0x2da0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA0C0_0x2da0c0");
#endif

    switch (ctx->pc) {
        case 0x2da0c0u: goto label_2da0c0;
        case 0x2da0c4u: goto label_2da0c4;
        case 0x2da0c8u: goto label_2da0c8;
        case 0x2da0ccu: goto label_2da0cc;
        case 0x2da0d0u: goto label_2da0d0;
        case 0x2da0d4u: goto label_2da0d4;
        case 0x2da0d8u: goto label_2da0d8;
        case 0x2da0dcu: goto label_2da0dc;
        case 0x2da0e0u: goto label_2da0e0;
        case 0x2da0e4u: goto label_2da0e4;
        case 0x2da0e8u: goto label_2da0e8;
        case 0x2da0ecu: goto label_2da0ec;
        case 0x2da0f0u: goto label_2da0f0;
        case 0x2da0f4u: goto label_2da0f4;
        case 0x2da0f8u: goto label_2da0f8;
        case 0x2da0fcu: goto label_2da0fc;
        case 0x2da100u: goto label_2da100;
        case 0x2da104u: goto label_2da104;
        case 0x2da108u: goto label_2da108;
        case 0x2da10cu: goto label_2da10c;
        case 0x2da110u: goto label_2da110;
        case 0x2da114u: goto label_2da114;
        case 0x2da118u: goto label_2da118;
        case 0x2da11cu: goto label_2da11c;
        case 0x2da120u: goto label_2da120;
        case 0x2da124u: goto label_2da124;
        case 0x2da128u: goto label_2da128;
        case 0x2da12cu: goto label_2da12c;
        case 0x2da130u: goto label_2da130;
        case 0x2da134u: goto label_2da134;
        case 0x2da138u: goto label_2da138;
        case 0x2da13cu: goto label_2da13c;
        case 0x2da140u: goto label_2da140;
        case 0x2da144u: goto label_2da144;
        case 0x2da148u: goto label_2da148;
        case 0x2da14cu: goto label_2da14c;
        case 0x2da150u: goto label_2da150;
        case 0x2da154u: goto label_2da154;
        case 0x2da158u: goto label_2da158;
        case 0x2da15cu: goto label_2da15c;
        case 0x2da160u: goto label_2da160;
        case 0x2da164u: goto label_2da164;
        case 0x2da168u: goto label_2da168;
        case 0x2da16cu: goto label_2da16c;
        case 0x2da170u: goto label_2da170;
        case 0x2da174u: goto label_2da174;
        case 0x2da178u: goto label_2da178;
        case 0x2da17cu: goto label_2da17c;
        case 0x2da180u: goto label_2da180;
        case 0x2da184u: goto label_2da184;
        case 0x2da188u: goto label_2da188;
        case 0x2da18cu: goto label_2da18c;
        case 0x2da190u: goto label_2da190;
        case 0x2da194u: goto label_2da194;
        case 0x2da198u: goto label_2da198;
        case 0x2da19cu: goto label_2da19c;
        case 0x2da1a0u: goto label_2da1a0;
        case 0x2da1a4u: goto label_2da1a4;
        case 0x2da1a8u: goto label_2da1a8;
        case 0x2da1acu: goto label_2da1ac;
        case 0x2da1b0u: goto label_2da1b0;
        case 0x2da1b4u: goto label_2da1b4;
        case 0x2da1b8u: goto label_2da1b8;
        case 0x2da1bcu: goto label_2da1bc;
        case 0x2da1c0u: goto label_2da1c0;
        case 0x2da1c4u: goto label_2da1c4;
        case 0x2da1c8u: goto label_2da1c8;
        case 0x2da1ccu: goto label_2da1cc;
        case 0x2da1d0u: goto label_2da1d0;
        case 0x2da1d4u: goto label_2da1d4;
        case 0x2da1d8u: goto label_2da1d8;
        case 0x2da1dcu: goto label_2da1dc;
        case 0x2da1e0u: goto label_2da1e0;
        case 0x2da1e4u: goto label_2da1e4;
        case 0x2da1e8u: goto label_2da1e8;
        case 0x2da1ecu: goto label_2da1ec;
        case 0x2da1f0u: goto label_2da1f0;
        case 0x2da1f4u: goto label_2da1f4;
        case 0x2da1f8u: goto label_2da1f8;
        case 0x2da1fcu: goto label_2da1fc;
        case 0x2da200u: goto label_2da200;
        case 0x2da204u: goto label_2da204;
        case 0x2da208u: goto label_2da208;
        case 0x2da20cu: goto label_2da20c;
        case 0x2da210u: goto label_2da210;
        case 0x2da214u: goto label_2da214;
        case 0x2da218u: goto label_2da218;
        case 0x2da21cu: goto label_2da21c;
        case 0x2da220u: goto label_2da220;
        case 0x2da224u: goto label_2da224;
        case 0x2da228u: goto label_2da228;
        case 0x2da22cu: goto label_2da22c;
        case 0x2da230u: goto label_2da230;
        case 0x2da234u: goto label_2da234;
        case 0x2da238u: goto label_2da238;
        case 0x2da23cu: goto label_2da23c;
        case 0x2da240u: goto label_2da240;
        case 0x2da244u: goto label_2da244;
        case 0x2da248u: goto label_2da248;
        case 0x2da24cu: goto label_2da24c;
        case 0x2da250u: goto label_2da250;
        case 0x2da254u: goto label_2da254;
        case 0x2da258u: goto label_2da258;
        case 0x2da25cu: goto label_2da25c;
        case 0x2da260u: goto label_2da260;
        case 0x2da264u: goto label_2da264;
        case 0x2da268u: goto label_2da268;
        case 0x2da26cu: goto label_2da26c;
        case 0x2da270u: goto label_2da270;
        case 0x2da274u: goto label_2da274;
        case 0x2da278u: goto label_2da278;
        case 0x2da27cu: goto label_2da27c;
        case 0x2da280u: goto label_2da280;
        case 0x2da284u: goto label_2da284;
        case 0x2da288u: goto label_2da288;
        case 0x2da28cu: goto label_2da28c;
        case 0x2da290u: goto label_2da290;
        case 0x2da294u: goto label_2da294;
        case 0x2da298u: goto label_2da298;
        case 0x2da29cu: goto label_2da29c;
        case 0x2da2a0u: goto label_2da2a0;
        case 0x2da2a4u: goto label_2da2a4;
        case 0x2da2a8u: goto label_2da2a8;
        case 0x2da2acu: goto label_2da2ac;
        case 0x2da2b0u: goto label_2da2b0;
        case 0x2da2b4u: goto label_2da2b4;
        case 0x2da2b8u: goto label_2da2b8;
        case 0x2da2bcu: goto label_2da2bc;
        case 0x2da2c0u: goto label_2da2c0;
        case 0x2da2c4u: goto label_2da2c4;
        case 0x2da2c8u: goto label_2da2c8;
        case 0x2da2ccu: goto label_2da2cc;
        case 0x2da2d0u: goto label_2da2d0;
        case 0x2da2d4u: goto label_2da2d4;
        case 0x2da2d8u: goto label_2da2d8;
        case 0x2da2dcu: goto label_2da2dc;
        case 0x2da2e0u: goto label_2da2e0;
        case 0x2da2e4u: goto label_2da2e4;
        case 0x2da2e8u: goto label_2da2e8;
        case 0x2da2ecu: goto label_2da2ec;
        case 0x2da2f0u: goto label_2da2f0;
        case 0x2da2f4u: goto label_2da2f4;
        case 0x2da2f8u: goto label_2da2f8;
        case 0x2da2fcu: goto label_2da2fc;
        case 0x2da300u: goto label_2da300;
        case 0x2da304u: goto label_2da304;
        case 0x2da308u: goto label_2da308;
        case 0x2da30cu: goto label_2da30c;
        case 0x2da310u: goto label_2da310;
        case 0x2da314u: goto label_2da314;
        case 0x2da318u: goto label_2da318;
        case 0x2da31cu: goto label_2da31c;
        case 0x2da320u: goto label_2da320;
        case 0x2da324u: goto label_2da324;
        case 0x2da328u: goto label_2da328;
        case 0x2da32cu: goto label_2da32c;
        case 0x2da330u: goto label_2da330;
        case 0x2da334u: goto label_2da334;
        case 0x2da338u: goto label_2da338;
        case 0x2da33cu: goto label_2da33c;
        case 0x2da340u: goto label_2da340;
        case 0x2da344u: goto label_2da344;
        case 0x2da348u: goto label_2da348;
        case 0x2da34cu: goto label_2da34c;
        case 0x2da350u: goto label_2da350;
        case 0x2da354u: goto label_2da354;
        case 0x2da358u: goto label_2da358;
        case 0x2da35cu: goto label_2da35c;
        case 0x2da360u: goto label_2da360;
        case 0x2da364u: goto label_2da364;
        case 0x2da368u: goto label_2da368;
        case 0x2da36cu: goto label_2da36c;
        case 0x2da370u: goto label_2da370;
        case 0x2da374u: goto label_2da374;
        case 0x2da378u: goto label_2da378;
        case 0x2da37cu: goto label_2da37c;
        case 0x2da380u: goto label_2da380;
        case 0x2da384u: goto label_2da384;
        case 0x2da388u: goto label_2da388;
        case 0x2da38cu: goto label_2da38c;
        case 0x2da390u: goto label_2da390;
        case 0x2da394u: goto label_2da394;
        case 0x2da398u: goto label_2da398;
        case 0x2da39cu: goto label_2da39c;
        case 0x2da3a0u: goto label_2da3a0;
        case 0x2da3a4u: goto label_2da3a4;
        case 0x2da3a8u: goto label_2da3a8;
        case 0x2da3acu: goto label_2da3ac;
        case 0x2da3b0u: goto label_2da3b0;
        case 0x2da3b4u: goto label_2da3b4;
        case 0x2da3b8u: goto label_2da3b8;
        case 0x2da3bcu: goto label_2da3bc;
        case 0x2da3c0u: goto label_2da3c0;
        case 0x2da3c4u: goto label_2da3c4;
        case 0x2da3c8u: goto label_2da3c8;
        case 0x2da3ccu: goto label_2da3cc;
        case 0x2da3d0u: goto label_2da3d0;
        case 0x2da3d4u: goto label_2da3d4;
        case 0x2da3d8u: goto label_2da3d8;
        case 0x2da3dcu: goto label_2da3dc;
        case 0x2da3e0u: goto label_2da3e0;
        case 0x2da3e4u: goto label_2da3e4;
        case 0x2da3e8u: goto label_2da3e8;
        case 0x2da3ecu: goto label_2da3ec;
        case 0x2da3f0u: goto label_2da3f0;
        case 0x2da3f4u: goto label_2da3f4;
        case 0x2da3f8u: goto label_2da3f8;
        case 0x2da3fcu: goto label_2da3fc;
        case 0x2da400u: goto label_2da400;
        case 0x2da404u: goto label_2da404;
        case 0x2da408u: goto label_2da408;
        case 0x2da40cu: goto label_2da40c;
        case 0x2da410u: goto label_2da410;
        case 0x2da414u: goto label_2da414;
        case 0x2da418u: goto label_2da418;
        case 0x2da41cu: goto label_2da41c;
        case 0x2da420u: goto label_2da420;
        case 0x2da424u: goto label_2da424;
        case 0x2da428u: goto label_2da428;
        case 0x2da42cu: goto label_2da42c;
        case 0x2da430u: goto label_2da430;
        case 0x2da434u: goto label_2da434;
        case 0x2da438u: goto label_2da438;
        case 0x2da43cu: goto label_2da43c;
        case 0x2da440u: goto label_2da440;
        case 0x2da444u: goto label_2da444;
        case 0x2da448u: goto label_2da448;
        case 0x2da44cu: goto label_2da44c;
        case 0x2da450u: goto label_2da450;
        case 0x2da454u: goto label_2da454;
        case 0x2da458u: goto label_2da458;
        case 0x2da45cu: goto label_2da45c;
        case 0x2da460u: goto label_2da460;
        case 0x2da464u: goto label_2da464;
        case 0x2da468u: goto label_2da468;
        case 0x2da46cu: goto label_2da46c;
        case 0x2da470u: goto label_2da470;
        case 0x2da474u: goto label_2da474;
        case 0x2da478u: goto label_2da478;
        case 0x2da47cu: goto label_2da47c;
        case 0x2da480u: goto label_2da480;
        case 0x2da484u: goto label_2da484;
        case 0x2da488u: goto label_2da488;
        case 0x2da48cu: goto label_2da48c;
        case 0x2da490u: goto label_2da490;
        case 0x2da494u: goto label_2da494;
        case 0x2da498u: goto label_2da498;
        case 0x2da49cu: goto label_2da49c;
        case 0x2da4a0u: goto label_2da4a0;
        case 0x2da4a4u: goto label_2da4a4;
        case 0x2da4a8u: goto label_2da4a8;
        case 0x2da4acu: goto label_2da4ac;
        case 0x2da4b0u: goto label_2da4b0;
        case 0x2da4b4u: goto label_2da4b4;
        case 0x2da4b8u: goto label_2da4b8;
        case 0x2da4bcu: goto label_2da4bc;
        case 0x2da4c0u: goto label_2da4c0;
        case 0x2da4c4u: goto label_2da4c4;
        case 0x2da4c8u: goto label_2da4c8;
        case 0x2da4ccu: goto label_2da4cc;
        case 0x2da4d0u: goto label_2da4d0;
        case 0x2da4d4u: goto label_2da4d4;
        case 0x2da4d8u: goto label_2da4d8;
        case 0x2da4dcu: goto label_2da4dc;
        case 0x2da4e0u: goto label_2da4e0;
        case 0x2da4e4u: goto label_2da4e4;
        case 0x2da4e8u: goto label_2da4e8;
        case 0x2da4ecu: goto label_2da4ec;
        case 0x2da4f0u: goto label_2da4f0;
        case 0x2da4f4u: goto label_2da4f4;
        case 0x2da4f8u: goto label_2da4f8;
        case 0x2da4fcu: goto label_2da4fc;
        case 0x2da500u: goto label_2da500;
        case 0x2da504u: goto label_2da504;
        case 0x2da508u: goto label_2da508;
        case 0x2da50cu: goto label_2da50c;
        case 0x2da510u: goto label_2da510;
        case 0x2da514u: goto label_2da514;
        case 0x2da518u: goto label_2da518;
        case 0x2da51cu: goto label_2da51c;
        case 0x2da520u: goto label_2da520;
        case 0x2da524u: goto label_2da524;
        case 0x2da528u: goto label_2da528;
        case 0x2da52cu: goto label_2da52c;
        case 0x2da530u: goto label_2da530;
        case 0x2da534u: goto label_2da534;
        case 0x2da538u: goto label_2da538;
        case 0x2da53cu: goto label_2da53c;
        case 0x2da540u: goto label_2da540;
        case 0x2da544u: goto label_2da544;
        case 0x2da548u: goto label_2da548;
        case 0x2da54cu: goto label_2da54c;
        case 0x2da550u: goto label_2da550;
        case 0x2da554u: goto label_2da554;
        case 0x2da558u: goto label_2da558;
        case 0x2da55cu: goto label_2da55c;
        case 0x2da560u: goto label_2da560;
        case 0x2da564u: goto label_2da564;
        case 0x2da568u: goto label_2da568;
        case 0x2da56cu: goto label_2da56c;
        case 0x2da570u: goto label_2da570;
        case 0x2da574u: goto label_2da574;
        case 0x2da578u: goto label_2da578;
        case 0x2da57cu: goto label_2da57c;
        case 0x2da580u: goto label_2da580;
        case 0x2da584u: goto label_2da584;
        case 0x2da588u: goto label_2da588;
        case 0x2da58cu: goto label_2da58c;
        case 0x2da590u: goto label_2da590;
        case 0x2da594u: goto label_2da594;
        case 0x2da598u: goto label_2da598;
        case 0x2da59cu: goto label_2da59c;
        case 0x2da5a0u: goto label_2da5a0;
        case 0x2da5a4u: goto label_2da5a4;
        case 0x2da5a8u: goto label_2da5a8;
        case 0x2da5acu: goto label_2da5ac;
        case 0x2da5b0u: goto label_2da5b0;
        case 0x2da5b4u: goto label_2da5b4;
        case 0x2da5b8u: goto label_2da5b8;
        case 0x2da5bcu: goto label_2da5bc;
        case 0x2da5c0u: goto label_2da5c0;
        case 0x2da5c4u: goto label_2da5c4;
        case 0x2da5c8u: goto label_2da5c8;
        case 0x2da5ccu: goto label_2da5cc;
        case 0x2da5d0u: goto label_2da5d0;
        case 0x2da5d4u: goto label_2da5d4;
        case 0x2da5d8u: goto label_2da5d8;
        case 0x2da5dcu: goto label_2da5dc;
        case 0x2da5e0u: goto label_2da5e0;
        case 0x2da5e4u: goto label_2da5e4;
        case 0x2da5e8u: goto label_2da5e8;
        case 0x2da5ecu: goto label_2da5ec;
        case 0x2da5f0u: goto label_2da5f0;
        case 0x2da5f4u: goto label_2da5f4;
        case 0x2da5f8u: goto label_2da5f8;
        case 0x2da5fcu: goto label_2da5fc;
        case 0x2da600u: goto label_2da600;
        case 0x2da604u: goto label_2da604;
        case 0x2da608u: goto label_2da608;
        case 0x2da60cu: goto label_2da60c;
        case 0x2da610u: goto label_2da610;
        case 0x2da614u: goto label_2da614;
        case 0x2da618u: goto label_2da618;
        case 0x2da61cu: goto label_2da61c;
        case 0x2da620u: goto label_2da620;
        case 0x2da624u: goto label_2da624;
        case 0x2da628u: goto label_2da628;
        case 0x2da62cu: goto label_2da62c;
        case 0x2da630u: goto label_2da630;
        case 0x2da634u: goto label_2da634;
        case 0x2da638u: goto label_2da638;
        case 0x2da63cu: goto label_2da63c;
        case 0x2da640u: goto label_2da640;
        case 0x2da644u: goto label_2da644;
        case 0x2da648u: goto label_2da648;
        case 0x2da64cu: goto label_2da64c;
        case 0x2da650u: goto label_2da650;
        case 0x2da654u: goto label_2da654;
        case 0x2da658u: goto label_2da658;
        case 0x2da65cu: goto label_2da65c;
        case 0x2da660u: goto label_2da660;
        case 0x2da664u: goto label_2da664;
        case 0x2da668u: goto label_2da668;
        case 0x2da66cu: goto label_2da66c;
        case 0x2da670u: goto label_2da670;
        case 0x2da674u: goto label_2da674;
        case 0x2da678u: goto label_2da678;
        case 0x2da67cu: goto label_2da67c;
        case 0x2da680u: goto label_2da680;
        case 0x2da684u: goto label_2da684;
        case 0x2da688u: goto label_2da688;
        case 0x2da68cu: goto label_2da68c;
        case 0x2da690u: goto label_2da690;
        case 0x2da694u: goto label_2da694;
        case 0x2da698u: goto label_2da698;
        case 0x2da69cu: goto label_2da69c;
        case 0x2da6a0u: goto label_2da6a0;
        case 0x2da6a4u: goto label_2da6a4;
        case 0x2da6a8u: goto label_2da6a8;
        case 0x2da6acu: goto label_2da6ac;
        case 0x2da6b0u: goto label_2da6b0;
        case 0x2da6b4u: goto label_2da6b4;
        case 0x2da6b8u: goto label_2da6b8;
        case 0x2da6bcu: goto label_2da6bc;
        case 0x2da6c0u: goto label_2da6c0;
        case 0x2da6c4u: goto label_2da6c4;
        case 0x2da6c8u: goto label_2da6c8;
        case 0x2da6ccu: goto label_2da6cc;
        case 0x2da6d0u: goto label_2da6d0;
        case 0x2da6d4u: goto label_2da6d4;
        case 0x2da6d8u: goto label_2da6d8;
        case 0x2da6dcu: goto label_2da6dc;
        case 0x2da6e0u: goto label_2da6e0;
        case 0x2da6e4u: goto label_2da6e4;
        case 0x2da6e8u: goto label_2da6e8;
        case 0x2da6ecu: goto label_2da6ec;
        case 0x2da6f0u: goto label_2da6f0;
        case 0x2da6f4u: goto label_2da6f4;
        case 0x2da6f8u: goto label_2da6f8;
        case 0x2da6fcu: goto label_2da6fc;
        case 0x2da700u: goto label_2da700;
        case 0x2da704u: goto label_2da704;
        case 0x2da708u: goto label_2da708;
        case 0x2da70cu: goto label_2da70c;
        case 0x2da710u: goto label_2da710;
        case 0x2da714u: goto label_2da714;
        case 0x2da718u: goto label_2da718;
        case 0x2da71cu: goto label_2da71c;
        case 0x2da720u: goto label_2da720;
        case 0x2da724u: goto label_2da724;
        case 0x2da728u: goto label_2da728;
        case 0x2da72cu: goto label_2da72c;
        case 0x2da730u: goto label_2da730;
        case 0x2da734u: goto label_2da734;
        case 0x2da738u: goto label_2da738;
        case 0x2da73cu: goto label_2da73c;
        case 0x2da740u: goto label_2da740;
        case 0x2da744u: goto label_2da744;
        case 0x2da748u: goto label_2da748;
        case 0x2da74cu: goto label_2da74c;
        case 0x2da750u: goto label_2da750;
        case 0x2da754u: goto label_2da754;
        case 0x2da758u: goto label_2da758;
        case 0x2da75cu: goto label_2da75c;
        case 0x2da760u: goto label_2da760;
        case 0x2da764u: goto label_2da764;
        case 0x2da768u: goto label_2da768;
        case 0x2da76cu: goto label_2da76c;
        case 0x2da770u: goto label_2da770;
        case 0x2da774u: goto label_2da774;
        case 0x2da778u: goto label_2da778;
        case 0x2da77cu: goto label_2da77c;
        case 0x2da780u: goto label_2da780;
        case 0x2da784u: goto label_2da784;
        case 0x2da788u: goto label_2da788;
        case 0x2da78cu: goto label_2da78c;
        case 0x2da790u: goto label_2da790;
        case 0x2da794u: goto label_2da794;
        case 0x2da798u: goto label_2da798;
        case 0x2da79cu: goto label_2da79c;
        case 0x2da7a0u: goto label_2da7a0;
        case 0x2da7a4u: goto label_2da7a4;
        case 0x2da7a8u: goto label_2da7a8;
        case 0x2da7acu: goto label_2da7ac;
        case 0x2da7b0u: goto label_2da7b0;
        case 0x2da7b4u: goto label_2da7b4;
        case 0x2da7b8u: goto label_2da7b8;
        case 0x2da7bcu: goto label_2da7bc;
        case 0x2da7c0u: goto label_2da7c0;
        case 0x2da7c4u: goto label_2da7c4;
        case 0x2da7c8u: goto label_2da7c8;
        case 0x2da7ccu: goto label_2da7cc;
        case 0x2da7d0u: goto label_2da7d0;
        case 0x2da7d4u: goto label_2da7d4;
        case 0x2da7d8u: goto label_2da7d8;
        case 0x2da7dcu: goto label_2da7dc;
        case 0x2da7e0u: goto label_2da7e0;
        case 0x2da7e4u: goto label_2da7e4;
        case 0x2da7e8u: goto label_2da7e8;
        case 0x2da7ecu: goto label_2da7ec;
        case 0x2da7f0u: goto label_2da7f0;
        case 0x2da7f4u: goto label_2da7f4;
        case 0x2da7f8u: goto label_2da7f8;
        case 0x2da7fcu: goto label_2da7fc;
        case 0x2da800u: goto label_2da800;
        case 0x2da804u: goto label_2da804;
        case 0x2da808u: goto label_2da808;
        case 0x2da80cu: goto label_2da80c;
        case 0x2da810u: goto label_2da810;
        case 0x2da814u: goto label_2da814;
        case 0x2da818u: goto label_2da818;
        case 0x2da81cu: goto label_2da81c;
        case 0x2da820u: goto label_2da820;
        case 0x2da824u: goto label_2da824;
        case 0x2da828u: goto label_2da828;
        case 0x2da82cu: goto label_2da82c;
        case 0x2da830u: goto label_2da830;
        case 0x2da834u: goto label_2da834;
        case 0x2da838u: goto label_2da838;
        case 0x2da83cu: goto label_2da83c;
        case 0x2da840u: goto label_2da840;
        case 0x2da844u: goto label_2da844;
        case 0x2da848u: goto label_2da848;
        case 0x2da84cu: goto label_2da84c;
        case 0x2da850u: goto label_2da850;
        case 0x2da854u: goto label_2da854;
        case 0x2da858u: goto label_2da858;
        case 0x2da85cu: goto label_2da85c;
        case 0x2da860u: goto label_2da860;
        case 0x2da864u: goto label_2da864;
        case 0x2da868u: goto label_2da868;
        case 0x2da86cu: goto label_2da86c;
        case 0x2da870u: goto label_2da870;
        case 0x2da874u: goto label_2da874;
        case 0x2da878u: goto label_2da878;
        case 0x2da87cu: goto label_2da87c;
        case 0x2da880u: goto label_2da880;
        case 0x2da884u: goto label_2da884;
        case 0x2da888u: goto label_2da888;
        case 0x2da88cu: goto label_2da88c;
        case 0x2da890u: goto label_2da890;
        case 0x2da894u: goto label_2da894;
        case 0x2da898u: goto label_2da898;
        case 0x2da89cu: goto label_2da89c;
        case 0x2da8a0u: goto label_2da8a0;
        case 0x2da8a4u: goto label_2da8a4;
        case 0x2da8a8u: goto label_2da8a8;
        case 0x2da8acu: goto label_2da8ac;
        case 0x2da8b0u: goto label_2da8b0;
        case 0x2da8b4u: goto label_2da8b4;
        case 0x2da8b8u: goto label_2da8b8;
        case 0x2da8bcu: goto label_2da8bc;
        case 0x2da8c0u: goto label_2da8c0;
        case 0x2da8c4u: goto label_2da8c4;
        case 0x2da8c8u: goto label_2da8c8;
        case 0x2da8ccu: goto label_2da8cc;
        case 0x2da8d0u: goto label_2da8d0;
        case 0x2da8d4u: goto label_2da8d4;
        case 0x2da8d8u: goto label_2da8d8;
        case 0x2da8dcu: goto label_2da8dc;
        case 0x2da8e0u: goto label_2da8e0;
        case 0x2da8e4u: goto label_2da8e4;
        case 0x2da8e8u: goto label_2da8e8;
        case 0x2da8ecu: goto label_2da8ec;
        case 0x2da8f0u: goto label_2da8f0;
        case 0x2da8f4u: goto label_2da8f4;
        case 0x2da8f8u: goto label_2da8f8;
        case 0x2da8fcu: goto label_2da8fc;
        case 0x2da900u: goto label_2da900;
        case 0x2da904u: goto label_2da904;
        case 0x2da908u: goto label_2da908;
        case 0x2da90cu: goto label_2da90c;
        case 0x2da910u: goto label_2da910;
        case 0x2da914u: goto label_2da914;
        case 0x2da918u: goto label_2da918;
        case 0x2da91cu: goto label_2da91c;
        case 0x2da920u: goto label_2da920;
        case 0x2da924u: goto label_2da924;
        case 0x2da928u: goto label_2da928;
        case 0x2da92cu: goto label_2da92c;
        case 0x2da930u: goto label_2da930;
        case 0x2da934u: goto label_2da934;
        case 0x2da938u: goto label_2da938;
        case 0x2da93cu: goto label_2da93c;
        case 0x2da940u: goto label_2da940;
        case 0x2da944u: goto label_2da944;
        case 0x2da948u: goto label_2da948;
        case 0x2da94cu: goto label_2da94c;
        case 0x2da950u: goto label_2da950;
        case 0x2da954u: goto label_2da954;
        case 0x2da958u: goto label_2da958;
        case 0x2da95cu: goto label_2da95c;
        case 0x2da960u: goto label_2da960;
        case 0x2da964u: goto label_2da964;
        case 0x2da968u: goto label_2da968;
        case 0x2da96cu: goto label_2da96c;
        case 0x2da970u: goto label_2da970;
        case 0x2da974u: goto label_2da974;
        case 0x2da978u: goto label_2da978;
        case 0x2da97cu: goto label_2da97c;
        case 0x2da980u: goto label_2da980;
        case 0x2da984u: goto label_2da984;
        case 0x2da988u: goto label_2da988;
        case 0x2da98cu: goto label_2da98c;
        case 0x2da990u: goto label_2da990;
        case 0x2da994u: goto label_2da994;
        case 0x2da998u: goto label_2da998;
        case 0x2da99cu: goto label_2da99c;
        case 0x2da9a0u: goto label_2da9a0;
        case 0x2da9a4u: goto label_2da9a4;
        case 0x2da9a8u: goto label_2da9a8;
        case 0x2da9acu: goto label_2da9ac;
        case 0x2da9b0u: goto label_2da9b0;
        case 0x2da9b4u: goto label_2da9b4;
        case 0x2da9b8u: goto label_2da9b8;
        case 0x2da9bcu: goto label_2da9bc;
        case 0x2da9c0u: goto label_2da9c0;
        case 0x2da9c4u: goto label_2da9c4;
        case 0x2da9c8u: goto label_2da9c8;
        case 0x2da9ccu: goto label_2da9cc;
        case 0x2da9d0u: goto label_2da9d0;
        case 0x2da9d4u: goto label_2da9d4;
        case 0x2da9d8u: goto label_2da9d8;
        case 0x2da9dcu: goto label_2da9dc;
        case 0x2da9e0u: goto label_2da9e0;
        case 0x2da9e4u: goto label_2da9e4;
        case 0x2da9e8u: goto label_2da9e8;
        case 0x2da9ecu: goto label_2da9ec;
        case 0x2da9f0u: goto label_2da9f0;
        case 0x2da9f4u: goto label_2da9f4;
        case 0x2da9f8u: goto label_2da9f8;
        case 0x2da9fcu: goto label_2da9fc;
        case 0x2daa00u: goto label_2daa00;
        case 0x2daa04u: goto label_2daa04;
        case 0x2daa08u: goto label_2daa08;
        case 0x2daa0cu: goto label_2daa0c;
        case 0x2daa10u: goto label_2daa10;
        case 0x2daa14u: goto label_2daa14;
        case 0x2daa18u: goto label_2daa18;
        case 0x2daa1cu: goto label_2daa1c;
        case 0x2daa20u: goto label_2daa20;
        case 0x2daa24u: goto label_2daa24;
        case 0x2daa28u: goto label_2daa28;
        case 0x2daa2cu: goto label_2daa2c;
        case 0x2daa30u: goto label_2daa30;
        case 0x2daa34u: goto label_2daa34;
        case 0x2daa38u: goto label_2daa38;
        case 0x2daa3cu: goto label_2daa3c;
        case 0x2daa40u: goto label_2daa40;
        case 0x2daa44u: goto label_2daa44;
        case 0x2daa48u: goto label_2daa48;
        case 0x2daa4cu: goto label_2daa4c;
        case 0x2daa50u: goto label_2daa50;
        case 0x2daa54u: goto label_2daa54;
        case 0x2daa58u: goto label_2daa58;
        case 0x2daa5cu: goto label_2daa5c;
        case 0x2daa60u: goto label_2daa60;
        case 0x2daa64u: goto label_2daa64;
        case 0x2daa68u: goto label_2daa68;
        case 0x2daa6cu: goto label_2daa6c;
        case 0x2daa70u: goto label_2daa70;
        case 0x2daa74u: goto label_2daa74;
        case 0x2daa78u: goto label_2daa78;
        case 0x2daa7cu: goto label_2daa7c;
        case 0x2daa80u: goto label_2daa80;
        case 0x2daa84u: goto label_2daa84;
        case 0x2daa88u: goto label_2daa88;
        case 0x2daa8cu: goto label_2daa8c;
        case 0x2daa90u: goto label_2daa90;
        case 0x2daa94u: goto label_2daa94;
        case 0x2daa98u: goto label_2daa98;
        case 0x2daa9cu: goto label_2daa9c;
        case 0x2daaa0u: goto label_2daaa0;
        case 0x2daaa4u: goto label_2daaa4;
        case 0x2daaa8u: goto label_2daaa8;
        case 0x2daaacu: goto label_2daaac;
        case 0x2daab0u: goto label_2daab0;
        case 0x2daab4u: goto label_2daab4;
        case 0x2daab8u: goto label_2daab8;
        case 0x2daabcu: goto label_2daabc;
        case 0x2daac0u: goto label_2daac0;
        case 0x2daac4u: goto label_2daac4;
        case 0x2daac8u: goto label_2daac8;
        case 0x2daaccu: goto label_2daacc;
        case 0x2daad0u: goto label_2daad0;
        case 0x2daad4u: goto label_2daad4;
        case 0x2daad8u: goto label_2daad8;
        case 0x2daadcu: goto label_2daadc;
        case 0x2daae0u: goto label_2daae0;
        case 0x2daae4u: goto label_2daae4;
        case 0x2daae8u: goto label_2daae8;
        case 0x2daaecu: goto label_2daaec;
        case 0x2daaf0u: goto label_2daaf0;
        case 0x2daaf4u: goto label_2daaf4;
        case 0x2daaf8u: goto label_2daaf8;
        case 0x2daafcu: goto label_2daafc;
        case 0x2dab00u: goto label_2dab00;
        case 0x2dab04u: goto label_2dab04;
        case 0x2dab08u: goto label_2dab08;
        case 0x2dab0cu: goto label_2dab0c;
        case 0x2dab10u: goto label_2dab10;
        case 0x2dab14u: goto label_2dab14;
        case 0x2dab18u: goto label_2dab18;
        case 0x2dab1cu: goto label_2dab1c;
        case 0x2dab20u: goto label_2dab20;
        case 0x2dab24u: goto label_2dab24;
        case 0x2dab28u: goto label_2dab28;
        case 0x2dab2cu: goto label_2dab2c;
        case 0x2dab30u: goto label_2dab30;
        case 0x2dab34u: goto label_2dab34;
        case 0x2dab38u: goto label_2dab38;
        case 0x2dab3cu: goto label_2dab3c;
        case 0x2dab40u: goto label_2dab40;
        case 0x2dab44u: goto label_2dab44;
        case 0x2dab48u: goto label_2dab48;
        case 0x2dab4cu: goto label_2dab4c;
        case 0x2dab50u: goto label_2dab50;
        case 0x2dab54u: goto label_2dab54;
        case 0x2dab58u: goto label_2dab58;
        case 0x2dab5cu: goto label_2dab5c;
        case 0x2dab60u: goto label_2dab60;
        case 0x2dab64u: goto label_2dab64;
        case 0x2dab68u: goto label_2dab68;
        case 0x2dab6cu: goto label_2dab6c;
        case 0x2dab70u: goto label_2dab70;
        case 0x2dab74u: goto label_2dab74;
        case 0x2dab78u: goto label_2dab78;
        case 0x2dab7cu: goto label_2dab7c;
        case 0x2dab80u: goto label_2dab80;
        case 0x2dab84u: goto label_2dab84;
        case 0x2dab88u: goto label_2dab88;
        case 0x2dab8cu: goto label_2dab8c;
        case 0x2dab90u: goto label_2dab90;
        case 0x2dab94u: goto label_2dab94;
        case 0x2dab98u: goto label_2dab98;
        case 0x2dab9cu: goto label_2dab9c;
        case 0x2daba0u: goto label_2daba0;
        case 0x2daba4u: goto label_2daba4;
        case 0x2daba8u: goto label_2daba8;
        case 0x2dabacu: goto label_2dabac;
        case 0x2dabb0u: goto label_2dabb0;
        case 0x2dabb4u: goto label_2dabb4;
        case 0x2dabb8u: goto label_2dabb8;
        case 0x2dabbcu: goto label_2dabbc;
        case 0x2dabc0u: goto label_2dabc0;
        case 0x2dabc4u: goto label_2dabc4;
        case 0x2dabc8u: goto label_2dabc8;
        case 0x2dabccu: goto label_2dabcc;
        case 0x2dabd0u: goto label_2dabd0;
        case 0x2dabd4u: goto label_2dabd4;
        case 0x2dabd8u: goto label_2dabd8;
        case 0x2dabdcu: goto label_2dabdc;
        case 0x2dabe0u: goto label_2dabe0;
        case 0x2dabe4u: goto label_2dabe4;
        case 0x2dabe8u: goto label_2dabe8;
        case 0x2dabecu: goto label_2dabec;
        case 0x2dabf0u: goto label_2dabf0;
        case 0x2dabf4u: goto label_2dabf4;
        case 0x2dabf8u: goto label_2dabf8;
        case 0x2dabfcu: goto label_2dabfc;
        case 0x2dac00u: goto label_2dac00;
        case 0x2dac04u: goto label_2dac04;
        case 0x2dac08u: goto label_2dac08;
        case 0x2dac0cu: goto label_2dac0c;
        case 0x2dac10u: goto label_2dac10;
        case 0x2dac14u: goto label_2dac14;
        case 0x2dac18u: goto label_2dac18;
        case 0x2dac1cu: goto label_2dac1c;
        case 0x2dac20u: goto label_2dac20;
        case 0x2dac24u: goto label_2dac24;
        case 0x2dac28u: goto label_2dac28;
        case 0x2dac2cu: goto label_2dac2c;
        case 0x2dac30u: goto label_2dac30;
        case 0x2dac34u: goto label_2dac34;
        case 0x2dac38u: goto label_2dac38;
        case 0x2dac3cu: goto label_2dac3c;
        case 0x2dac40u: goto label_2dac40;
        case 0x2dac44u: goto label_2dac44;
        case 0x2dac48u: goto label_2dac48;
        case 0x2dac4cu: goto label_2dac4c;
        case 0x2dac50u: goto label_2dac50;
        case 0x2dac54u: goto label_2dac54;
        case 0x2dac58u: goto label_2dac58;
        case 0x2dac5cu: goto label_2dac5c;
        case 0x2dac60u: goto label_2dac60;
        case 0x2dac64u: goto label_2dac64;
        case 0x2dac68u: goto label_2dac68;
        case 0x2dac6cu: goto label_2dac6c;
        case 0x2dac70u: goto label_2dac70;
        case 0x2dac74u: goto label_2dac74;
        case 0x2dac78u: goto label_2dac78;
        case 0x2dac7cu: goto label_2dac7c;
        case 0x2dac80u: goto label_2dac80;
        case 0x2dac84u: goto label_2dac84;
        case 0x2dac88u: goto label_2dac88;
        case 0x2dac8cu: goto label_2dac8c;
        case 0x2dac90u: goto label_2dac90;
        case 0x2dac94u: goto label_2dac94;
        case 0x2dac98u: goto label_2dac98;
        case 0x2dac9cu: goto label_2dac9c;
        case 0x2daca0u: goto label_2daca0;
        case 0x2daca4u: goto label_2daca4;
        case 0x2daca8u: goto label_2daca8;
        case 0x2dacacu: goto label_2dacac;
        case 0x2dacb0u: goto label_2dacb0;
        case 0x2dacb4u: goto label_2dacb4;
        case 0x2dacb8u: goto label_2dacb8;
        case 0x2dacbcu: goto label_2dacbc;
        case 0x2dacc0u: goto label_2dacc0;
        case 0x2dacc4u: goto label_2dacc4;
        case 0x2dacc8u: goto label_2dacc8;
        case 0x2dacccu: goto label_2daccc;
        case 0x2dacd0u: goto label_2dacd0;
        case 0x2dacd4u: goto label_2dacd4;
        case 0x2dacd8u: goto label_2dacd8;
        case 0x2dacdcu: goto label_2dacdc;
        case 0x2dace0u: goto label_2dace0;
        case 0x2dace4u: goto label_2dace4;
        case 0x2dace8u: goto label_2dace8;
        case 0x2dacecu: goto label_2dacec;
        case 0x2dacf0u: goto label_2dacf0;
        case 0x2dacf4u: goto label_2dacf4;
        case 0x2dacf8u: goto label_2dacf8;
        case 0x2dacfcu: goto label_2dacfc;
        case 0x2dad00u: goto label_2dad00;
        case 0x2dad04u: goto label_2dad04;
        case 0x2dad08u: goto label_2dad08;
        case 0x2dad0cu: goto label_2dad0c;
        case 0x2dad10u: goto label_2dad10;
        case 0x2dad14u: goto label_2dad14;
        case 0x2dad18u: goto label_2dad18;
        case 0x2dad1cu: goto label_2dad1c;
        case 0x2dad20u: goto label_2dad20;
        case 0x2dad24u: goto label_2dad24;
        case 0x2dad28u: goto label_2dad28;
        case 0x2dad2cu: goto label_2dad2c;
        case 0x2dad30u: goto label_2dad30;
        case 0x2dad34u: goto label_2dad34;
        case 0x2dad38u: goto label_2dad38;
        case 0x2dad3cu: goto label_2dad3c;
        case 0x2dad40u: goto label_2dad40;
        case 0x2dad44u: goto label_2dad44;
        case 0x2dad48u: goto label_2dad48;
        case 0x2dad4cu: goto label_2dad4c;
        case 0x2dad50u: goto label_2dad50;
        case 0x2dad54u: goto label_2dad54;
        case 0x2dad58u: goto label_2dad58;
        case 0x2dad5cu: goto label_2dad5c;
        case 0x2dad60u: goto label_2dad60;
        case 0x2dad64u: goto label_2dad64;
        case 0x2dad68u: goto label_2dad68;
        case 0x2dad6cu: goto label_2dad6c;
        case 0x2dad70u: goto label_2dad70;
        case 0x2dad74u: goto label_2dad74;
        case 0x2dad78u: goto label_2dad78;
        case 0x2dad7cu: goto label_2dad7c;
        case 0x2dad80u: goto label_2dad80;
        case 0x2dad84u: goto label_2dad84;
        case 0x2dad88u: goto label_2dad88;
        case 0x2dad8cu: goto label_2dad8c;
        case 0x2dad90u: goto label_2dad90;
        case 0x2dad94u: goto label_2dad94;
        case 0x2dad98u: goto label_2dad98;
        case 0x2dad9cu: goto label_2dad9c;
        case 0x2dada0u: goto label_2dada0;
        case 0x2dada4u: goto label_2dada4;
        case 0x2dada8u: goto label_2dada8;
        case 0x2dadacu: goto label_2dadac;
        case 0x2dadb0u: goto label_2dadb0;
        case 0x2dadb4u: goto label_2dadb4;
        case 0x2dadb8u: goto label_2dadb8;
        case 0x2dadbcu: goto label_2dadbc;
        case 0x2dadc0u: goto label_2dadc0;
        case 0x2dadc4u: goto label_2dadc4;
        case 0x2dadc8u: goto label_2dadc8;
        case 0x2dadccu: goto label_2dadcc;
        case 0x2dadd0u: goto label_2dadd0;
        case 0x2dadd4u: goto label_2dadd4;
        case 0x2dadd8u: goto label_2dadd8;
        case 0x2daddcu: goto label_2daddc;
        case 0x2dade0u: goto label_2dade0;
        case 0x2dade4u: goto label_2dade4;
        case 0x2dade8u: goto label_2dade8;
        case 0x2dadecu: goto label_2dadec;
        case 0x2dadf0u: goto label_2dadf0;
        case 0x2dadf4u: goto label_2dadf4;
        case 0x2dadf8u: goto label_2dadf8;
        case 0x2dadfcu: goto label_2dadfc;
        case 0x2dae00u: goto label_2dae00;
        case 0x2dae04u: goto label_2dae04;
        case 0x2dae08u: goto label_2dae08;
        case 0x2dae0cu: goto label_2dae0c;
        case 0x2dae10u: goto label_2dae10;
        case 0x2dae14u: goto label_2dae14;
        case 0x2dae18u: goto label_2dae18;
        case 0x2dae1cu: goto label_2dae1c;
        case 0x2dae20u: goto label_2dae20;
        case 0x2dae24u: goto label_2dae24;
        case 0x2dae28u: goto label_2dae28;
        case 0x2dae2cu: goto label_2dae2c;
        case 0x2dae30u: goto label_2dae30;
        case 0x2dae34u: goto label_2dae34;
        case 0x2dae38u: goto label_2dae38;
        case 0x2dae3cu: goto label_2dae3c;
        case 0x2dae40u: goto label_2dae40;
        case 0x2dae44u: goto label_2dae44;
        case 0x2dae48u: goto label_2dae48;
        case 0x2dae4cu: goto label_2dae4c;
        case 0x2dae50u: goto label_2dae50;
        case 0x2dae54u: goto label_2dae54;
        case 0x2dae58u: goto label_2dae58;
        case 0x2dae5cu: goto label_2dae5c;
        case 0x2dae60u: goto label_2dae60;
        case 0x2dae64u: goto label_2dae64;
        case 0x2dae68u: goto label_2dae68;
        case 0x2dae6cu: goto label_2dae6c;
        case 0x2dae70u: goto label_2dae70;
        case 0x2dae74u: goto label_2dae74;
        case 0x2dae78u: goto label_2dae78;
        case 0x2dae7cu: goto label_2dae7c;
        case 0x2dae80u: goto label_2dae80;
        case 0x2dae84u: goto label_2dae84;
        case 0x2dae88u: goto label_2dae88;
        case 0x2dae8cu: goto label_2dae8c;
        case 0x2dae90u: goto label_2dae90;
        case 0x2dae94u: goto label_2dae94;
        case 0x2dae98u: goto label_2dae98;
        case 0x2dae9cu: goto label_2dae9c;
        case 0x2daea0u: goto label_2daea0;
        case 0x2daea4u: goto label_2daea4;
        case 0x2daea8u: goto label_2daea8;
        case 0x2daeacu: goto label_2daeac;
        case 0x2daeb0u: goto label_2daeb0;
        case 0x2daeb4u: goto label_2daeb4;
        case 0x2daeb8u: goto label_2daeb8;
        case 0x2daebcu: goto label_2daebc;
        case 0x2daec0u: goto label_2daec0;
        case 0x2daec4u: goto label_2daec4;
        case 0x2daec8u: goto label_2daec8;
        case 0x2daeccu: goto label_2daecc;
        case 0x2daed0u: goto label_2daed0;
        case 0x2daed4u: goto label_2daed4;
        case 0x2daed8u: goto label_2daed8;
        case 0x2daedcu: goto label_2daedc;
        case 0x2daee0u: goto label_2daee0;
        case 0x2daee4u: goto label_2daee4;
        case 0x2daee8u: goto label_2daee8;
        case 0x2daeecu: goto label_2daeec;
        case 0x2daef0u: goto label_2daef0;
        case 0x2daef4u: goto label_2daef4;
        case 0x2daef8u: goto label_2daef8;
        case 0x2daefcu: goto label_2daefc;
        case 0x2daf00u: goto label_2daf00;
        case 0x2daf04u: goto label_2daf04;
        case 0x2daf08u: goto label_2daf08;
        case 0x2daf0cu: goto label_2daf0c;
        case 0x2daf10u: goto label_2daf10;
        case 0x2daf14u: goto label_2daf14;
        case 0x2daf18u: goto label_2daf18;
        case 0x2daf1cu: goto label_2daf1c;
        case 0x2daf20u: goto label_2daf20;
        case 0x2daf24u: goto label_2daf24;
        case 0x2daf28u: goto label_2daf28;
        case 0x2daf2cu: goto label_2daf2c;
        case 0x2daf30u: goto label_2daf30;
        case 0x2daf34u: goto label_2daf34;
        case 0x2daf38u: goto label_2daf38;
        case 0x2daf3cu: goto label_2daf3c;
        case 0x2daf40u: goto label_2daf40;
        case 0x2daf44u: goto label_2daf44;
        case 0x2daf48u: goto label_2daf48;
        case 0x2daf4cu: goto label_2daf4c;
        case 0x2daf50u: goto label_2daf50;
        case 0x2daf54u: goto label_2daf54;
        case 0x2daf58u: goto label_2daf58;
        case 0x2daf5cu: goto label_2daf5c;
        case 0x2daf60u: goto label_2daf60;
        case 0x2daf64u: goto label_2daf64;
        case 0x2daf68u: goto label_2daf68;
        case 0x2daf6cu: goto label_2daf6c;
        case 0x2daf70u: goto label_2daf70;
        case 0x2daf74u: goto label_2daf74;
        case 0x2daf78u: goto label_2daf78;
        case 0x2daf7cu: goto label_2daf7c;
        case 0x2daf80u: goto label_2daf80;
        case 0x2daf84u: goto label_2daf84;
        case 0x2daf88u: goto label_2daf88;
        case 0x2daf8cu: goto label_2daf8c;
        case 0x2daf90u: goto label_2daf90;
        case 0x2daf94u: goto label_2daf94;
        case 0x2daf98u: goto label_2daf98;
        case 0x2daf9cu: goto label_2daf9c;
        case 0x2dafa0u: goto label_2dafa0;
        case 0x2dafa4u: goto label_2dafa4;
        case 0x2dafa8u: goto label_2dafa8;
        case 0x2dafacu: goto label_2dafac;
        case 0x2dafb0u: goto label_2dafb0;
        case 0x2dafb4u: goto label_2dafb4;
        case 0x2dafb8u: goto label_2dafb8;
        case 0x2dafbcu: goto label_2dafbc;
        case 0x2dafc0u: goto label_2dafc0;
        case 0x2dafc4u: goto label_2dafc4;
        case 0x2dafc8u: goto label_2dafc8;
        case 0x2dafccu: goto label_2dafcc;
        case 0x2dafd0u: goto label_2dafd0;
        case 0x2dafd4u: goto label_2dafd4;
        case 0x2dafd8u: goto label_2dafd8;
        case 0x2dafdcu: goto label_2dafdc;
        case 0x2dafe0u: goto label_2dafe0;
        case 0x2dafe4u: goto label_2dafe4;
        case 0x2dafe8u: goto label_2dafe8;
        case 0x2dafecu: goto label_2dafec;
        case 0x2daff0u: goto label_2daff0;
        case 0x2daff4u: goto label_2daff4;
        case 0x2daff8u: goto label_2daff8;
        case 0x2daffcu: goto label_2daffc;
        case 0x2db000u: goto label_2db000;
        case 0x2db004u: goto label_2db004;
        case 0x2db008u: goto label_2db008;
        case 0x2db00cu: goto label_2db00c;
        case 0x2db010u: goto label_2db010;
        case 0x2db014u: goto label_2db014;
        case 0x2db018u: goto label_2db018;
        case 0x2db01cu: goto label_2db01c;
        case 0x2db020u: goto label_2db020;
        case 0x2db024u: goto label_2db024;
        case 0x2db028u: goto label_2db028;
        case 0x2db02cu: goto label_2db02c;
        case 0x2db030u: goto label_2db030;
        case 0x2db034u: goto label_2db034;
        case 0x2db038u: goto label_2db038;
        case 0x2db03cu: goto label_2db03c;
        case 0x2db040u: goto label_2db040;
        case 0x2db044u: goto label_2db044;
        case 0x2db048u: goto label_2db048;
        case 0x2db04cu: goto label_2db04c;
        case 0x2db050u: goto label_2db050;
        case 0x2db054u: goto label_2db054;
        case 0x2db058u: goto label_2db058;
        case 0x2db05cu: goto label_2db05c;
        case 0x2db060u: goto label_2db060;
        case 0x2db064u: goto label_2db064;
        case 0x2db068u: goto label_2db068;
        case 0x2db06cu: goto label_2db06c;
        case 0x2db070u: goto label_2db070;
        case 0x2db074u: goto label_2db074;
        case 0x2db078u: goto label_2db078;
        case 0x2db07cu: goto label_2db07c;
        case 0x2db080u: goto label_2db080;
        case 0x2db084u: goto label_2db084;
        case 0x2db088u: goto label_2db088;
        case 0x2db08cu: goto label_2db08c;
        case 0x2db090u: goto label_2db090;
        case 0x2db094u: goto label_2db094;
        case 0x2db098u: goto label_2db098;
        case 0x2db09cu: goto label_2db09c;
        case 0x2db0a0u: goto label_2db0a0;
        case 0x2db0a4u: goto label_2db0a4;
        case 0x2db0a8u: goto label_2db0a8;
        case 0x2db0acu: goto label_2db0ac;
        case 0x2db0b0u: goto label_2db0b0;
        case 0x2db0b4u: goto label_2db0b4;
        case 0x2db0b8u: goto label_2db0b8;
        case 0x2db0bcu: goto label_2db0bc;
        case 0x2db0c0u: goto label_2db0c0;
        case 0x2db0c4u: goto label_2db0c4;
        case 0x2db0c8u: goto label_2db0c8;
        case 0x2db0ccu: goto label_2db0cc;
        case 0x2db0d0u: goto label_2db0d0;
        case 0x2db0d4u: goto label_2db0d4;
        case 0x2db0d8u: goto label_2db0d8;
        case 0x2db0dcu: goto label_2db0dc;
        case 0x2db0e0u: goto label_2db0e0;
        case 0x2db0e4u: goto label_2db0e4;
        case 0x2db0e8u: goto label_2db0e8;
        case 0x2db0ecu: goto label_2db0ec;
        case 0x2db0f0u: goto label_2db0f0;
        case 0x2db0f4u: goto label_2db0f4;
        case 0x2db0f8u: goto label_2db0f8;
        case 0x2db0fcu: goto label_2db0fc;
        case 0x2db100u: goto label_2db100;
        case 0x2db104u: goto label_2db104;
        case 0x2db108u: goto label_2db108;
        case 0x2db10cu: goto label_2db10c;
        case 0x2db110u: goto label_2db110;
        case 0x2db114u: goto label_2db114;
        case 0x2db118u: goto label_2db118;
        case 0x2db11cu: goto label_2db11c;
        case 0x2db120u: goto label_2db120;
        case 0x2db124u: goto label_2db124;
        case 0x2db128u: goto label_2db128;
        case 0x2db12cu: goto label_2db12c;
        case 0x2db130u: goto label_2db130;
        case 0x2db134u: goto label_2db134;
        case 0x2db138u: goto label_2db138;
        case 0x2db13cu: goto label_2db13c;
        case 0x2db140u: goto label_2db140;
        case 0x2db144u: goto label_2db144;
        case 0x2db148u: goto label_2db148;
        case 0x2db14cu: goto label_2db14c;
        case 0x2db150u: goto label_2db150;
        case 0x2db154u: goto label_2db154;
        case 0x2db158u: goto label_2db158;
        case 0x2db15cu: goto label_2db15c;
        case 0x2db160u: goto label_2db160;
        case 0x2db164u: goto label_2db164;
        case 0x2db168u: goto label_2db168;
        case 0x2db16cu: goto label_2db16c;
        case 0x2db170u: goto label_2db170;
        case 0x2db174u: goto label_2db174;
        case 0x2db178u: goto label_2db178;
        case 0x2db17cu: goto label_2db17c;
        case 0x2db180u: goto label_2db180;
        case 0x2db184u: goto label_2db184;
        case 0x2db188u: goto label_2db188;
        case 0x2db18cu: goto label_2db18c;
        case 0x2db190u: goto label_2db190;
        case 0x2db194u: goto label_2db194;
        case 0x2db198u: goto label_2db198;
        case 0x2db19cu: goto label_2db19c;
        case 0x2db1a0u: goto label_2db1a0;
        case 0x2db1a4u: goto label_2db1a4;
        case 0x2db1a8u: goto label_2db1a8;
        case 0x2db1acu: goto label_2db1ac;
        case 0x2db1b0u: goto label_2db1b0;
        case 0x2db1b4u: goto label_2db1b4;
        case 0x2db1b8u: goto label_2db1b8;
        case 0x2db1bcu: goto label_2db1bc;
        case 0x2db1c0u: goto label_2db1c0;
        case 0x2db1c4u: goto label_2db1c4;
        case 0x2db1c8u: goto label_2db1c8;
        case 0x2db1ccu: goto label_2db1cc;
        case 0x2db1d0u: goto label_2db1d0;
        case 0x2db1d4u: goto label_2db1d4;
        case 0x2db1d8u: goto label_2db1d8;
        case 0x2db1dcu: goto label_2db1dc;
        case 0x2db1e0u: goto label_2db1e0;
        case 0x2db1e4u: goto label_2db1e4;
        case 0x2db1e8u: goto label_2db1e8;
        case 0x2db1ecu: goto label_2db1ec;
        case 0x2db1f0u: goto label_2db1f0;
        case 0x2db1f4u: goto label_2db1f4;
        case 0x2db1f8u: goto label_2db1f8;
        case 0x2db1fcu: goto label_2db1fc;
        case 0x2db200u: goto label_2db200;
        case 0x2db204u: goto label_2db204;
        case 0x2db208u: goto label_2db208;
        case 0x2db20cu: goto label_2db20c;
        case 0x2db210u: goto label_2db210;
        case 0x2db214u: goto label_2db214;
        case 0x2db218u: goto label_2db218;
        case 0x2db21cu: goto label_2db21c;
        case 0x2db220u: goto label_2db220;
        case 0x2db224u: goto label_2db224;
        case 0x2db228u: goto label_2db228;
        case 0x2db22cu: goto label_2db22c;
        case 0x2db230u: goto label_2db230;
        case 0x2db234u: goto label_2db234;
        case 0x2db238u: goto label_2db238;
        case 0x2db23cu: goto label_2db23c;
        case 0x2db240u: goto label_2db240;
        case 0x2db244u: goto label_2db244;
        case 0x2db248u: goto label_2db248;
        case 0x2db24cu: goto label_2db24c;
        case 0x2db250u: goto label_2db250;
        case 0x2db254u: goto label_2db254;
        case 0x2db258u: goto label_2db258;
        case 0x2db25cu: goto label_2db25c;
        case 0x2db260u: goto label_2db260;
        case 0x2db264u: goto label_2db264;
        case 0x2db268u: goto label_2db268;
        case 0x2db26cu: goto label_2db26c;
        case 0x2db270u: goto label_2db270;
        case 0x2db274u: goto label_2db274;
        case 0x2db278u: goto label_2db278;
        case 0x2db27cu: goto label_2db27c;
        case 0x2db280u: goto label_2db280;
        case 0x2db284u: goto label_2db284;
        case 0x2db288u: goto label_2db288;
        case 0x2db28cu: goto label_2db28c;
        case 0x2db290u: goto label_2db290;
        case 0x2db294u: goto label_2db294;
        case 0x2db298u: goto label_2db298;
        case 0x2db29cu: goto label_2db29c;
        case 0x2db2a0u: goto label_2db2a0;
        case 0x2db2a4u: goto label_2db2a4;
        case 0x2db2a8u: goto label_2db2a8;
        case 0x2db2acu: goto label_2db2ac;
        case 0x2db2b0u: goto label_2db2b0;
        case 0x2db2b4u: goto label_2db2b4;
        case 0x2db2b8u: goto label_2db2b8;
        case 0x2db2bcu: goto label_2db2bc;
        case 0x2db2c0u: goto label_2db2c0;
        case 0x2db2c4u: goto label_2db2c4;
        case 0x2db2c8u: goto label_2db2c8;
        case 0x2db2ccu: goto label_2db2cc;
        case 0x2db2d0u: goto label_2db2d0;
        case 0x2db2d4u: goto label_2db2d4;
        case 0x2db2d8u: goto label_2db2d8;
        case 0x2db2dcu: goto label_2db2dc;
        case 0x2db2e0u: goto label_2db2e0;
        case 0x2db2e4u: goto label_2db2e4;
        case 0x2db2e8u: goto label_2db2e8;
        case 0x2db2ecu: goto label_2db2ec;
        case 0x2db2f0u: goto label_2db2f0;
        case 0x2db2f4u: goto label_2db2f4;
        case 0x2db2f8u: goto label_2db2f8;
        case 0x2db2fcu: goto label_2db2fc;
        case 0x2db300u: goto label_2db300;
        case 0x2db304u: goto label_2db304;
        case 0x2db308u: goto label_2db308;
        case 0x2db30cu: goto label_2db30c;
        case 0x2db310u: goto label_2db310;
        case 0x2db314u: goto label_2db314;
        case 0x2db318u: goto label_2db318;
        case 0x2db31cu: goto label_2db31c;
        default: break;
    }

    ctx->pc = 0x2da0c0u;

label_2da0c0:
    // 0x2da0c0: 0x27bdfaf0  addiu       $sp, $sp, -0x510
    ctx->pc = 0x2da0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966000));
label_2da0c4:
    // 0x2da0c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2da0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2da0c8:
    // 0x2da0c8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2da0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2da0cc:
    // 0x2da0cc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2da0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2da0d0:
    // 0x2da0d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2da0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2da0d4:
    // 0x2da0d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2da0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2da0d8:
    // 0x2da0d8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2da0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2da0dc:
    // 0x2da0dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2da0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2da0e0:
    // 0x2da0e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2da0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2da0e4:
    // 0x2da0e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2da0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2da0e8:
    // 0x2da0e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2da0e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2da0ec:
    // 0x2da0ec: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2da0ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2da0f0:
    // 0x2da0f0: 0x908202c4  lbu         $v0, 0x2C4($a0)
    ctx->pc = 0x2da0f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 708)));
label_2da0f4:
    // 0x2da0f4: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_2da0f8:
    if (ctx->pc == 0x2DA0F8u) {
        ctx->pc = 0x2DA0F8u;
            // 0x2da0f8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0FCu;
        goto label_2da0fc;
    }
    ctx->pc = 0x2DA0F4u;
    {
        const bool branch_taken_0x2da0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA0F4u;
            // 0x2da0f8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da0f4) {
            ctx->pc = 0x2DA3C8u;
            goto label_2da3c8;
        }
    }
    ctx->pc = 0x2DA0FCu;
label_2da0fc:
    // 0x2da0fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2da0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2da100:
    // 0x2da100: 0x27a203f8  addiu       $v0, $sp, 0x3F8
    ctx->pc = 0x2da100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
label_2da104:
    // 0x2da104: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x2da104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
label_2da108:
    // 0x2da108: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2da108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2da10c:
    // 0x2da10c: 0xafa303f0  sw          $v1, 0x3F0($sp)
    ctx->pc = 0x2da10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 3));
label_2da110:
    // 0x2da110: 0x27a503f0  addiu       $a1, $sp, 0x3F0
    ctx->pc = 0x2da110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_2da114:
    // 0x2da114: 0xafa203f8  sw          $v0, 0x3F8($sp)
    ctx->pc = 0x2da114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 2));
label_2da118:
    // 0x2da118: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2da118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_2da11c:
    // 0x2da11c: 0xafa003fc  sw          $zero, 0x3FC($sp)
    ctx->pc = 0x2da11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 0));
label_2da120:
    // 0x2da120: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2da120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2da124:
    // 0x2da124: 0xafa20400  sw          $v0, 0x400($sp)
    ctx->pc = 0x2da124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1024), GPR_U32(ctx, 2));
label_2da128:
    // 0x2da128: 0xafa003fc  sw          $zero, 0x3FC($sp)
    ctx->pc = 0x2da128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 0));
label_2da12c:
    // 0x2da12c: 0xa3a003f4  sb          $zero, 0x3F4($sp)
    ctx->pc = 0x2da12cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1012), (uint8_t)GPR_U32(ctx, 0));
label_2da130:
    // 0x2da130: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x2da130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2da134:
    // 0x2da134: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2da134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2da138:
    // 0x2da138: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x2da138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_2da13c:
    // 0x2da13c: 0x320f809  jalr        $t9
label_2da140:
    if (ctx->pc == 0x2DA140u) {
        ctx->pc = 0x2DA140u;
            // 0x2da140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA144u;
        goto label_2da144;
    }
    ctx->pc = 0x2DA13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA144u);
        ctx->pc = 0x2DA140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA13Cu;
            // 0x2da140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA144u; }
            if (ctx->pc != 0x2DA144u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA144u;
label_2da144:
    // 0x2da144: 0x8fa203fc  lw          $v0, 0x3FC($sp)
    ctx->pc = 0x2da144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
label_2da148:
    // 0x2da148: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2da148u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da14c:
    // 0x2da14c: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_2da150:
    if (ctx->pc == 0x2DA150u) {
        ctx->pc = 0x2DA150u;
            // 0x2da150: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA154u;
        goto label_2da154;
    }
    ctx->pc = 0x2DA14Cu;
    {
        const bool branch_taken_0x2da14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA14Cu;
            // 0x2da150: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da14c) {
            ctx->pc = 0x2DA3A0u;
            goto label_2da3a0;
        }
    }
    ctx->pc = 0x2DA154u;
label_2da154:
    // 0x2da154: 0x8fa203f8  lw          $v0, 0x3F8($sp)
    ctx->pc = 0x2da154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
label_2da158:
    // 0x2da158: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x2da158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_2da15c:
    // 0x2da15c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2da15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2da160:
    // 0x2da160: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2da160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2da164:
    // 0x2da164: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x2da164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_2da168:
    // 0x2da168: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2da168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2da16c:
    // 0x2da16c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_2da170:
    if (ctx->pc == 0x2DA170u) {
        ctx->pc = 0x2DA170u;
            // 0x2da170: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA174u;
        goto label_2da174;
    }
    ctx->pc = 0x2DA16Cu;
    {
        const bool branch_taken_0x2da16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da16c) {
            ctx->pc = 0x2DA170u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA16Cu;
            // 0x2da170: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA178u;
            goto label_2da178;
        }
    }
    ctx->pc = 0x2DA174u;
label_2da174:
    // 0x2da174: 0x8c52000c  lw          $s2, 0xC($v0)
    ctx->pc = 0x2da174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2da178:
    // 0x2da178: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x2da178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da17c:
    // 0x2da17c: 0x8e440d98  lw          $a0, 0xD98($s2)
    ctx->pc = 0x2da17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_2da180:
    // 0x2da180: 0x8ca20d98  lw          $v0, 0xD98($a1)
    ctx->pc = 0x2da180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3480)));
label_2da184:
    // 0x2da184: 0x10820080  beq         $a0, $v0, . + 4 + (0x80 << 2)
label_2da188:
    if (ctx->pc == 0x2DA188u) {
        ctx->pc = 0x2DA18Cu;
        goto label_2da18c;
    }
    ctx->pc = 0x2DA184u;
    {
        const bool branch_taken_0x2da184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da184) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA18Cu;
label_2da18c:
    // 0x2da18c: 0x924211a1  lbu         $v0, 0x11A1($s2)
    ctx->pc = 0x2da18cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4513)));
label_2da190:
    // 0x2da190: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
label_2da194:
    if (ctx->pc == 0x2DA194u) {
        ctx->pc = 0x2DA198u;
        goto label_2da198;
    }
    ctx->pc = 0x2DA190u;
    {
        const bool branch_taken_0x2da190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da190) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA198u;
label_2da198:
    // 0x2da198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da19c:
    // 0x2da19c: 0x8ea202bc  lw          $v0, 0x2BC($s5)
    ctx->pc = 0x2da19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 700)));
label_2da1a0:
    // 0x2da1a0: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x2da1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_2da1a4:
    // 0x2da1a4: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x2da1a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_2da1a8:
    // 0x2da1a8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2da1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2da1ac:
    // 0x2da1ac: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_2da1b0:
    if (ctx->pc == 0x2DA1B0u) {
        ctx->pc = 0x2DA1B4u;
        goto label_2da1b4;
    }
    ctx->pc = 0x2DA1ACu;
    {
        const bool branch_taken_0x2da1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da1ac) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA1B4u;
label_2da1b4:
    // 0x2da1b4: 0x8e440db0  lw          $a0, 0xDB0($s2)
    ctx->pc = 0x2da1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_2da1b8:
    // 0x2da1b8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2da1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2da1bc:
    // 0x2da1bc: 0x10820072  beq         $a0, $v0, . + 4 + (0x72 << 2)
label_2da1c0:
    if (ctx->pc == 0x2DA1C0u) {
        ctx->pc = 0x2DA1C4u;
        goto label_2da1c4;
    }
    ctx->pc = 0x2DA1BCu;
    {
        const bool branch_taken_0x2da1bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da1bc) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA1C4u;
label_2da1c4:
    // 0x2da1c4: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2da1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2da1c8:
    // 0x2da1c8: 0x1082006f  beq         $a0, $v0, . + 4 + (0x6F << 2)
label_2da1cc:
    if (ctx->pc == 0x2DA1CCu) {
        ctx->pc = 0x2DA1D0u;
        goto label_2da1d0;
    }
    ctx->pc = 0x2DA1C8u;
    {
        const bool branch_taken_0x2da1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da1c8) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA1D0u;
label_2da1d0:
    // 0x2da1d0: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x2da1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_2da1d4:
    // 0x2da1d4: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2da1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_2da1d8:
    // 0x2da1d8: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
label_2da1dc:
    if (ctx->pc == 0x2DA1DCu) {
        ctx->pc = 0x2DA1E0u;
        goto label_2da1e0;
    }
    ctx->pc = 0x2DA1D8u;
    {
        const bool branch_taken_0x2da1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da1d8) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA1E0u;
label_2da1e0:
    // 0x2da1e0: 0x80a311ad  lb          $v1, 0x11AD($a1)
    ctx->pc = 0x2da1e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4525)));
label_2da1e4:
    // 0x2da1e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2da1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2da1e8:
    // 0x2da1e8: 0x14620067  bne         $v1, $v0, . + 4 + (0x67 << 2)
label_2da1ec:
    if (ctx->pc == 0x2DA1ECu) {
        ctx->pc = 0x2DA1F0u;
        goto label_2da1f0;
    }
    ctx->pc = 0x2DA1E8u;
    {
        const bool branch_taken_0x2da1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da1e8) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA1F0u;
label_2da1f0:
    // 0x2da1f0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x2da1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_2da1f4:
    // 0x2da1f4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2da1f8:
    if (ctx->pc == 0x2DA1F8u) {
        ctx->pc = 0x2DA1FCu;
        goto label_2da1fc;
    }
    ctx->pc = 0x2DA1F4u;
    {
        const bool branch_taken_0x2da1f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da1f4) {
            ctx->pc = 0x2DA218u;
            goto label_2da218;
        }
    }
    ctx->pc = 0x2DA1FCu;
label_2da1fc:
    // 0x2da1fc: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2da1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2da200:
    // 0x2da200: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2da204:
    if (ctx->pc == 0x2DA204u) {
        ctx->pc = 0x2DA208u;
        goto label_2da208;
    }
    ctx->pc = 0x2DA200u;
    {
        const bool branch_taken_0x2da200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da200) {
            ctx->pc = 0x2DA218u;
            goto label_2da218;
        }
    }
    ctx->pc = 0x2DA208u;
label_2da208:
    // 0x2da208: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x2da208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2da20c:
    // 0x2da20c: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
label_2da210:
    if (ctx->pc == 0x2DA210u) {
        ctx->pc = 0x2DA214u;
        goto label_2da214;
    }
    ctx->pc = 0x2DA20Cu;
    {
        const bool branch_taken_0x2da20c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da20c) {
            ctx->pc = 0x2DA250u;
            goto label_2da250;
        }
    }
    ctx->pc = 0x2DA214u;
label_2da214:
    // 0x2da214: 0x0  nop
    ctx->pc = 0x2da214u;
    // NOP
label_2da218:
    // 0x2da218: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2da218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
label_2da21c:
    // 0x2da21c: 0x26430a50  addiu       $v1, $s2, 0xA50
    ctx->pc = 0x2da21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2640));
label_2da220:
    // 0x2da220: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2da220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2da224:
    // 0x2da224: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2da224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2da228:
    // 0x2da228: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2da228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2da22c:
    // 0x2da22c: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x2da22cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2da230:
    // 0x2da230: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2da230u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2da234:
    // 0x2da234: 0x320f809  jalr        $t9
label_2da238:
    if (ctx->pc == 0x2DA238u) {
        ctx->pc = 0x2DA23Cu;
        goto label_2da23c;
    }
    ctx->pc = 0x2DA234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA23Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA23Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA23Cu; }
            if (ctx->pc != 0x2DA23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2DA23Cu;
label_2da23c:
    // 0x2da23c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2da23cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da240:
    // 0x2da240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da244:
    // 0x2da244: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2da244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2da248:
    // 0x2da248: 0x320f809  jalr        $t9
label_2da24c:
    if (ctx->pc == 0x2DA24Cu) {
        ctx->pc = 0x2DA24Cu;
            // 0x2da24c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x2DA250u;
        goto label_2da250;
    }
    ctx->pc = 0x2DA248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA250u);
        ctx->pc = 0x2DA24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA248u;
            // 0x2da24c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA250u; }
            if (ctx->pc != 0x2DA250u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA250u;
label_2da250:
    // 0x2da250: 0x8e420da0  lw          $v0, 0xDA0($s2)
    ctx->pc = 0x2da250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_2da254:
    // 0x2da254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2da254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2da258:
    // 0x2da258: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
label_2da25c:
    if (ctx->pc == 0x2DA25Cu) {
        ctx->pc = 0x2DA260u;
        goto label_2da260;
    }
    ctx->pc = 0x2DA258u;
    {
        const bool branch_taken_0x2da258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da258) {
            ctx->pc = 0x2DA370u;
            goto label_2da370;
        }
    }
    ctx->pc = 0x2DA260u;
label_2da260:
    // 0x2da260: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2da260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da264:
    // 0x2da264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da268:
    // 0x2da268: 0x8c420d98  lw          $v0, 0xD98($v0)
    ctx->pc = 0x2da268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
label_2da26c:
    // 0x2da26c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2da26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2da270:
    // 0x2da270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2da270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2da274:
    // 0x2da274: 0x0  nop
    ctx->pc = 0x2da274u;
    // NOP
label_2da278:
    // 0x2da278: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2da278u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2da27c:
    // 0x2da27c: 0xe6400e1c  swc1        $f0, 0xE1C($s2)
    ctx->pc = 0x2da27cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3612), bits); }
label_2da280:
    // 0x2da280: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2da280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2da284:
    // 0x2da284: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x2da284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_2da288:
    // 0x2da288: 0x320f809  jalr        $t9
label_2da28c:
    if (ctx->pc == 0x2DA28Cu) {
        ctx->pc = 0x2DA28Cu;
            // 0x2da28c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x2DA290u;
        goto label_2da290;
    }
    ctx->pc = 0x2DA288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA290u);
        ctx->pc = 0x2DA28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA288u;
            // 0x2da28c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA290u; }
            if (ctx->pc != 0x2DA290u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA290u;
label_2da290:
    // 0x2da290: 0x8e440d98  lw          $a0, 0xD98($s2)
    ctx->pc = 0x2da290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_2da294:
    // 0x2da294: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2da294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2da298:
    // 0x2da298: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2da298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da29c:
    // 0x2da29c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x2da29cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2da2a0:
    // 0x2da2a0: 0xa04411ad  sb          $a0, 0x11AD($v0)
    ctx->pc = 0x2da2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4525), (uint8_t)GPR_U32(ctx, 4));
label_2da2a4:
    // 0x2da2a4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da2a8:
    // 0x2da2a8: 0xac430e1c  sw          $v1, 0xE1C($v0)
    ctx->pc = 0x2da2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3612), GPR_U32(ctx, 3));
label_2da2ac:
    // 0x2da2ac: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2da2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da2b0:
    // 0x2da2b0: 0x8c850e34  lw          $a1, 0xE34($a0)
    ctx->pc = 0x2da2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_2da2b4:
    // 0x2da2b4: 0xa0102a  slt         $v0, $a1, $zero
    ctx->pc = 0x2da2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_2da2b8:
    // 0x2da2b8: 0x38a30005  xori        $v1, $a1, 0x5
    ctx->pc = 0x2da2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_2da2bc:
    // 0x2da2bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2da2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2da2c0:
    // 0x2da2c0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2da2c4:
    if (ctx->pc == 0x2DA2C4u) {
        ctx->pc = 0x2DA2C4u;
            // 0x2da2c4: 0x2c770001  sltiu       $s7, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x2DA2C8u;
        goto label_2da2c8;
    }
    ctx->pc = 0x2DA2C0u;
    {
        const bool branch_taken_0x2da2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA2C0u;
            // 0x2da2c4: 0x2c770001  sltiu       $s7, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2c0) {
            ctx->pc = 0x2DA2CCu;
            goto label_2da2cc;
        }
    }
    ctx->pc = 0x2DA2C8u;
label_2da2c8:
    // 0x2da2c8: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2da2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2da2cc:
    // 0x2da2cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2da2d0:
    if (ctx->pc == 0x2DA2D0u) {
        ctx->pc = 0x2DA2D4u;
        goto label_2da2d4;
    }
    ctx->pc = 0x2DA2CCu;
    {
        const bool branch_taken_0x2da2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da2cc) {
            ctx->pc = 0x2DA2E8u;
            goto label_2da2e8;
        }
    }
    ctx->pc = 0x2DA2D4u;
label_2da2d4:
    // 0x2da2d4: 0xc075eb4  jal         func_1D7AD0
label_2da2d8:
    if (ctx->pc == 0x2DA2D8u) {
        ctx->pc = 0x2DA2DCu;
        goto label_2da2dc;
    }
    ctx->pc = 0x2DA2D4u;
    SET_GPR_U32(ctx, 31, 0x2DA2DCu);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA2DCu; }
        if (ctx->pc != 0x2DA2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA2DCu; }
        if (ctx->pc != 0x2DA2DCu) { return; }
    }
    ctx->pc = 0x2DA2DCu;
label_2da2dc:
    // 0x2da2dc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2da2e0:
    if (ctx->pc == 0x2DA2E0u) {
        ctx->pc = 0x2DA2E4u;
        goto label_2da2e4;
    }
    ctx->pc = 0x2DA2DCu;
    {
        const bool branch_taken_0x2da2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da2dc) {
            ctx->pc = 0x2DA2E8u;
            goto label_2da2e8;
        }
    }
    ctx->pc = 0x2DA2E4u;
label_2da2e4:
    // 0x2da2e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2da2e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da2e8:
    // 0x2da2e8: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x2da2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_2da2ec:
    // 0x2da2ec: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x2da2ecu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2da2f0:
    // 0x2da2f0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_2da2f4:
    if (ctx->pc == 0x2DA2F4u) {
        ctx->pc = 0x2DA2F4u;
            // 0x2da2f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA2F8u;
        goto label_2da2f8;
    }
    ctx->pc = 0x2DA2F0u;
    {
        const bool branch_taken_0x2da2f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2DA2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA2F0u;
            // 0x2da2f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da2f0) {
            ctx->pc = 0x2DA308u;
            goto label_2da308;
        }
    }
    ctx->pc = 0x2DA2F8u;
label_2da2f8:
    // 0x2da2f8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x2da2f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_2da2fc:
    // 0x2da2fc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_2da300:
    if (ctx->pc == 0x2DA300u) {
        ctx->pc = 0x2DA304u;
        goto label_2da304;
    }
    ctx->pc = 0x2DA2FCu;
    {
        const bool branch_taken_0x2da2fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da2fc) {
            ctx->pc = 0x2DA308u;
            goto label_2da308;
        }
    }
    ctx->pc = 0x2DA304u;
label_2da304:
    // 0x2da304: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2da304u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da308:
    // 0x2da308: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2da30c:
    if (ctx->pc == 0x2DA30Cu) {
        ctx->pc = 0x2DA310u;
        goto label_2da310;
    }
    ctx->pc = 0x2DA308u;
    {
        const bool branch_taken_0x2da308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da308) {
            ctx->pc = 0x2DA328u;
            goto label_2da328;
        }
    }
    ctx->pc = 0x2DA310u;
label_2da310:
    // 0x2da310: 0xc075eb4  jal         func_1D7AD0
label_2da314:
    if (ctx->pc == 0x2DA314u) {
        ctx->pc = 0x2DA314u;
            // 0x2da314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA318u;
        goto label_2da318;
    }
    ctx->pc = 0x2DA310u;
    SET_GPR_U32(ctx, 31, 0x2DA318u);
    ctx->pc = 0x2DA314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA310u;
            // 0x2da314: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA318u; }
        if (ctx->pc != 0x2DA318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA318u; }
        if (ctx->pc != 0x2DA318u) { return; }
    }
    ctx->pc = 0x2DA318u;
label_2da318:
    // 0x2da318: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2da31c:
    if (ctx->pc == 0x2DA31Cu) {
        ctx->pc = 0x2DA320u;
        goto label_2da320;
    }
    ctx->pc = 0x2DA318u;
    {
        const bool branch_taken_0x2da318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da318) {
            ctx->pc = 0x2DA328u;
            goto label_2da328;
        }
    }
    ctx->pc = 0x2DA320u;
label_2da320:
    // 0x2da320: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2da320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da324:
    // 0x2da324: 0x0  nop
    ctx->pc = 0x2da324u;
    // NOP
label_2da328:
    // 0x2da328: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x2da328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2da32c:
    // 0x2da32c: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x2da32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_2da330:
    // 0x2da330: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x2da330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_2da334:
    // 0x2da334: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2da334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2da338:
    // 0x2da338: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x2da338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2da33c:
    // 0x2da33c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2da33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2da340:
    // 0x2da340: 0x38830005  xori        $v1, $a0, 0x5
    ctx->pc = 0x2da340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
label_2da344:
    // 0x2da344: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x2da344u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2da348:
    // 0x2da348: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2da348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2da34c:
    // 0x2da34c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2da350:
    if (ctx->pc == 0x2DA350u) {
        ctx->pc = 0x2DA354u;
        goto label_2da354;
    }
    ctx->pc = 0x2DA34Cu;
    {
        const bool branch_taken_0x2da34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da34c) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA354u;
label_2da354:
    // 0x2da354: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2da354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da358:
    // 0x2da358: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2da358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2da35c:
    // 0x2da35c: 0xc12ca3c  jal         func_4B28F0
label_2da360:
    if (ctx->pc == 0x2DA360u) {
        ctx->pc = 0x2DA360u;
            // 0x2da360: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x2DA364u;
        goto label_2da364;
    }
    ctx->pc = 0x2DA35Cu;
    SET_GPR_U32(ctx, 31, 0x2DA364u);
    ctx->pc = 0x2DA360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA35Cu;
            // 0x2da360: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA364u; }
        if (ctx->pc != 0x2DA364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA364u; }
        if (ctx->pc != 0x2DA364u) { return; }
    }
    ctx->pc = 0x2DA364u;
label_2da364:
    // 0x2da364: 0x10000008  b           . + 4 + (0x8 << 2)
label_2da368:
    if (ctx->pc == 0x2DA368u) {
        ctx->pc = 0x2DA36Cu;
        goto label_2da36c;
    }
    ctx->pc = 0x2DA364u;
    {
        const bool branch_taken_0x2da364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da364) {
            ctx->pc = 0x2DA388u;
            goto label_2da388;
        }
    }
    ctx->pc = 0x2DA36Cu;
label_2da36c:
    // 0x2da36c: 0x0  nop
    ctx->pc = 0x2da36cu;
    // NOP
label_2da370:
    // 0x2da370: 0x8e430d98  lw          $v1, 0xD98($s2)
    ctx->pc = 0x2da370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_2da374:
    // 0x2da374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2da374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2da378:
    // 0x2da378: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x2da378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_2da37c:
    // 0x2da37c: 0x401027  not         $v0, $v0
    ctx->pc = 0x2da37cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_2da380:
    // 0x2da380: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x2da380u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_2da384:
    // 0x2da384: 0x0  nop
    ctx->pc = 0x2da384u;
    // NOP
label_2da388:
    // 0x2da388: 0x8fa203fc  lw          $v0, 0x3FC($sp)
    ctx->pc = 0x2da388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
label_2da38c:
    // 0x2da38c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2da38cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2da390:
    // 0x2da390: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2da390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2da394:
    // 0x2da394: 0x5440ff70  bnel        $v0, $zero, . + 4 + (-0x90 << 2)
label_2da398:
    if (ctx->pc == 0x2DA398u) {
        ctx->pc = 0x2DA398u;
            // 0x2da398: 0x8fa203f8  lw          $v0, 0x3F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
        ctx->pc = 0x2DA39Cu;
        goto label_2da39c;
    }
    ctx->pc = 0x2DA394u;
    {
        const bool branch_taken_0x2da394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da394) {
            ctx->pc = 0x2DA398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA394u;
            // 0x2da398: 0x8fa203f8  lw          $v0, 0x3F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1016)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da158;
        }
    }
    ctx->pc = 0x2DA39Cu;
label_2da39c:
    // 0x2da39c: 0x0  nop
    ctx->pc = 0x2da39cu;
    // NOP
label_2da3a0:
    // 0x2da3a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2da3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2da3a4:
    // 0x2da3a4: 0xaeb302bc  sw          $s3, 0x2BC($s5)
    ctx->pc = 0x2da3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 700), GPR_U32(ctx, 19));
label_2da3a8:
    // 0x2da3a8: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x2da3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_2da3ac:
    // 0x2da3ac: 0x27a403f8  addiu       $a0, $sp, 0x3F8
    ctx->pc = 0x2da3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1016));
label_2da3b0:
    // 0x2da3b0: 0xafa203f0  sw          $v0, 0x3F0($sp)
    ctx->pc = 0x2da3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1008), GPR_U32(ctx, 2));
label_2da3b4:
    // 0x2da3b4: 0xc07f7a4  jal         func_1FDE90
label_2da3b8:
    if (ctx->pc == 0x2DA3B8u) {
        ctx->pc = 0x2DA3B8u;
            // 0x2da3b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DA3BCu;
        goto label_2da3bc;
    }
    ctx->pc = 0x2DA3B4u;
    SET_GPR_U32(ctx, 31, 0x2DA3BCu);
    ctx->pc = 0x2DA3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3B4u;
            // 0x2da3b8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE90u;
    if (runtime->hasFunction(0x1FDE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FDE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3BCu; }
        if (ctx->pc != 0x2DA3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDE90_0x1fde90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3BCu; }
        if (ctx->pc != 0x2DA3BCu) { return; }
    }
    ctx->pc = 0x2DA3BCu;
label_2da3bc:
    // 0x2da3bc: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x2da3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_2da3c0:
    // 0x2da3c0: 0xc0793f4  jal         func_1E4FD0
label_2da3c4:
    if (ctx->pc == 0x2DA3C4u) {
        ctx->pc = 0x2DA3C4u;
            // 0x2da3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3C8u;
        goto label_2da3c8;
    }
    ctx->pc = 0x2DA3C0u;
    SET_GPR_U32(ctx, 31, 0x2DA3C8u);
    ctx->pc = 0x2DA3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3C0u;
            // 0x2da3c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4FD0u;
    if (runtime->hasFunction(0x1E4FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3C8u; }
        if (ctx->pc != 0x2DA3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4FD0_0x1e4fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3C8u; }
        if (ctx->pc != 0x2DA3C8u) { return; }
    }
    ctx->pc = 0x2DA3C8u;
label_2da3c8:
    // 0x2da3c8: 0xc0a5440  jal         func_295100
label_2da3cc:
    if (ctx->pc == 0x2DA3CCu) {
        ctx->pc = 0x2DA3CCu;
            // 0x2da3cc: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->pc = 0x2DA3D0u;
        goto label_2da3d0;
    }
    ctx->pc = 0x2DA3C8u;
    SET_GPR_U32(ctx, 31, 0x2DA3D0u);
    ctx->pc = 0x2DA3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3C8u;
            // 0x2da3cc: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3D0u; }
        if (ctx->pc != 0x2DA3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3D0u; }
        if (ctx->pc != 0x2DA3D0u) { return; }
    }
    ctx->pc = 0x2DA3D0u;
label_2da3d0:
    // 0x2da3d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da3d4:
    // 0x2da3d4: 0xc0b6e90  jal         func_2DBA40
label_2da3d8:
    if (ctx->pc == 0x2DA3D8u) {
        ctx->pc = 0x2DA3D8u;
            // 0x2da3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA3DCu;
        goto label_2da3dc;
    }
    ctx->pc = 0x2DA3D4u;
    SET_GPR_U32(ctx, 31, 0x2DA3DCu);
    ctx->pc = 0x2DA3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3D4u;
            // 0x2da3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3DCu; }
        if (ctx->pc != 0x2DA3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3DCu; }
        if (ctx->pc != 0x2DA3DCu) { return; }
    }
    ctx->pc = 0x2DA3DCu;
label_2da3dc:
    // 0x2da3dc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da3e0:
    // 0x2da3e0: 0xc0a5440  jal         func_295100
label_2da3e4:
    if (ctx->pc == 0x2DA3E4u) {
        ctx->pc = 0x2DA3E4u;
            // 0x2da3e4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DA3E8u;
        goto label_2da3e8;
    }
    ctx->pc = 0x2DA3E0u;
    SET_GPR_U32(ctx, 31, 0x2DA3E8u);
    ctx->pc = 0x2DA3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3E0u;
            // 0x2da3e4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3E8u; }
        if (ctx->pc != 0x2DA3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3E8u; }
        if (ctx->pc != 0x2DA3E8u) { return; }
    }
    ctx->pc = 0x2DA3E8u;
label_2da3e8:
    // 0x2da3e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da3ec:
    // 0x2da3ec: 0xc0b6e90  jal         func_2DBA40
label_2da3f0:
    if (ctx->pc == 0x2DA3F0u) {
        ctx->pc = 0x2DA3F0u;
            // 0x2da3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DA3F4u;
        goto label_2da3f4;
    }
    ctx->pc = 0x2DA3ECu;
    SET_GPR_U32(ctx, 31, 0x2DA3F4u);
    ctx->pc = 0x2DA3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3ECu;
            // 0x2da3f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3F4u; }
        if (ctx->pc != 0x2DA3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA3F4u; }
        if (ctx->pc != 0x2DA3F4u) { return; }
    }
    ctx->pc = 0x2DA3F4u;
label_2da3f4:
    // 0x2da3f4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da3f8:
    // 0x2da3f8: 0xc0a5440  jal         func_295100
label_2da3fc:
    if (ctx->pc == 0x2DA3FCu) {
        ctx->pc = 0x2DA3FCu;
            // 0x2da3fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DA400u;
        goto label_2da400;
    }
    ctx->pc = 0x2DA3F8u;
    SET_GPR_U32(ctx, 31, 0x2DA400u);
    ctx->pc = 0x2DA3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA3F8u;
            // 0x2da3fc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA400u; }
        if (ctx->pc != 0x2DA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA400u; }
        if (ctx->pc != 0x2DA400u) { return; }
    }
    ctx->pc = 0x2DA400u;
label_2da400:
    // 0x2da400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da404:
    // 0x2da404: 0xc0b6e90  jal         func_2DBA40
label_2da408:
    if (ctx->pc == 0x2DA408u) {
        ctx->pc = 0x2DA408u;
            // 0x2da408: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DA40Cu;
        goto label_2da40c;
    }
    ctx->pc = 0x2DA404u;
    SET_GPR_U32(ctx, 31, 0x2DA40Cu);
    ctx->pc = 0x2DA408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA404u;
            // 0x2da408: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA40Cu; }
        if (ctx->pc != 0x2DA40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA40Cu; }
        if (ctx->pc != 0x2DA40Cu) { return; }
    }
    ctx->pc = 0x2DA40Cu;
label_2da40c:
    // 0x2da40c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2da40cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2da410:
    // 0x2da410: 0x27a403e0  addiu       $a0, $sp, 0x3E0
    ctx->pc = 0x2da410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_2da414:
    // 0x2da414: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2da414u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2da418:
    // 0x2da418: 0xc04cbd8  jal         func_132F60
label_2da41c:
    if (ctx->pc == 0x2DA41Cu) {
        ctx->pc = 0x2DA41Cu;
            // 0x2da41c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DA420u;
        goto label_2da420;
    }
    ctx->pc = 0x2DA418u;
    SET_GPR_U32(ctx, 31, 0x2DA420u);
    ctx->pc = 0x2DA41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA418u;
            // 0x2da41c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA420u; }
        if (ctx->pc != 0x2DA420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA420u; }
        if (ctx->pc != 0x2DA420u) { return; }
    }
    ctx->pc = 0x2DA420u;
label_2da420:
    // 0x2da420: 0xc0b6e8c  jal         func_2DBA30
label_2da424:
    if (ctx->pc == 0x2DA424u) {
        ctx->pc = 0x2DA424u;
            // 0x2da424: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA428u;
        goto label_2da428;
    }
    ctx->pc = 0x2DA420u;
    SET_GPR_U32(ctx, 31, 0x2DA428u);
    ctx->pc = 0x2DA424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA420u;
            // 0x2da424: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA30u;
    if (runtime->hasFunction(0x2DBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA428u; }
        if (ctx->pc != 0x2DA428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA30_0x2dba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA428u; }
        if (ctx->pc != 0x2DA428u) { return; }
    }
    ctx->pc = 0x2DA428u;
label_2da428:
    // 0x2da428: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2da428u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da42c:
    // 0x2da42c: 0xc0b6e88  jal         func_2DBA20
label_2da430:
    if (ctx->pc == 0x2DA430u) {
        ctx->pc = 0x2DA430u;
            // 0x2da430: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA434u;
        goto label_2da434;
    }
    ctx->pc = 0x2DA42Cu;
    SET_GPR_U32(ctx, 31, 0x2DA434u);
    ctx->pc = 0x2DA430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA42Cu;
            // 0x2da430: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA20u;
    if (runtime->hasFunction(0x2DBA20u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA434u; }
        if (ctx->pc != 0x2DA434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA20_0x2dba20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA434u; }
        if (ctx->pc != 0x2DA434u) { return; }
    }
    ctx->pc = 0x2DA434u;
label_2da434:
    // 0x2da434: 0xc0b6e84  jal         func_2DBA10
label_2da438:
    if (ctx->pc == 0x2DA438u) {
        ctx->pc = 0x2DA438u;
            // 0x2da438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA43Cu;
        goto label_2da43c;
    }
    ctx->pc = 0x2DA434u;
    SET_GPR_U32(ctx, 31, 0x2DA43Cu);
    ctx->pc = 0x2DA438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA434u;
            // 0x2da438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA10u;
    if (runtime->hasFunction(0x2DBA10u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA43Cu; }
        if (ctx->pc != 0x2DA43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA10_0x2dba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA43Cu; }
        if (ctx->pc != 0x2DA43Cu) { return; }
    }
    ctx->pc = 0x2DA43Cu;
label_2da43c:
    // 0x2da43c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2da43cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da440:
    // 0x2da440: 0xc0b6e6c  jal         func_2DB9B0
label_2da444:
    if (ctx->pc == 0x2DA444u) {
        ctx->pc = 0x2DA444u;
            // 0x2da444: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2DA448u;
        goto label_2da448;
    }
    ctx->pc = 0x2DA440u;
    SET_GPR_U32(ctx, 31, 0x2DA448u);
    ctx->pc = 0x2DA444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA440u;
            // 0x2da444: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9B0u;
    if (runtime->hasFunction(0x2DB9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA448u; }
        if (ctx->pc != 0x2DA448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9B0_0x2db9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA448u; }
        if (ctx->pc != 0x2DA448u) { return; }
    }
    ctx->pc = 0x2DA448u;
label_2da448:
    // 0x2da448: 0xc0b6e68  jal         func_2DB9A0
label_2da44c:
    if (ctx->pc == 0x2DA44Cu) {
        ctx->pc = 0x2DA44Cu;
            // 0x2da44c: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA450u;
        goto label_2da450;
    }
    ctx->pc = 0x2DA448u;
    SET_GPR_U32(ctx, 31, 0x2DA450u);
    ctx->pc = 0x2DA44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA448u;
            // 0x2da44c: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA450u; }
        if (ctx->pc != 0x2DA450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA450u; }
        if (ctx->pc != 0x2DA450u) { return; }
    }
    ctx->pc = 0x2DA450u;
label_2da450:
    // 0x2da450: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2da450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2da454:
    // 0x2da454: 0xc0b6e64  jal         func_2DB990
label_2da458:
    if (ctx->pc == 0x2DA458u) {
        ctx->pc = 0x2DA458u;
            // 0x2da458: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA45Cu;
        goto label_2da45c;
    }
    ctx->pc = 0x2DA454u;
    SET_GPR_U32(ctx, 31, 0x2DA45Cu);
    ctx->pc = 0x2DA458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA454u;
            // 0x2da458: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB990u;
    if (runtime->hasFunction(0x2DB990u)) {
        auto targetFn = runtime->lookupFunction(0x2DB990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA45Cu; }
        if (ctx->pc != 0x2DA45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB990_0x2db990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA45Cu; }
        if (ctx->pc != 0x2DA45Cu) { return; }
    }
    ctx->pc = 0x2DA45Cu;
label_2da45c:
    // 0x2da45c: 0xc0b6e60  jal         func_2DB980
label_2da460:
    if (ctx->pc == 0x2DA460u) {
        ctx->pc = 0x2DA460u;
            // 0x2da460: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA464u;
        goto label_2da464;
    }
    ctx->pc = 0x2DA45Cu;
    SET_GPR_U32(ctx, 31, 0x2DA464u);
    ctx->pc = 0x2DA460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA45Cu;
            // 0x2da460: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA464u; }
        if (ctx->pc != 0x2DA464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA464u; }
        if (ctx->pc != 0x2DA464u) { return; }
    }
    ctx->pc = 0x2DA464u;
label_2da464:
    // 0x2da464: 0xc0775b8  jal         func_1DD6E0
label_2da468:
    if (ctx->pc == 0x2DA468u) {
        ctx->pc = 0x2DA468u;
            // 0x2da468: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA46Cu;
        goto label_2da46c;
    }
    ctx->pc = 0x2DA464u;
    SET_GPR_U32(ctx, 31, 0x2DA46Cu);
    ctx->pc = 0x2DA468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA464u;
            // 0x2da468: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA46Cu; }
        if (ctx->pc != 0x2DA46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA46Cu; }
        if (ctx->pc != 0x2DA46Cu) { return; }
    }
    ctx->pc = 0x2DA46Cu;
label_2da46c:
    // 0x2da46c: 0xc0b6e5c  jal         func_2DB970
label_2da470:
    if (ctx->pc == 0x2DA470u) {
        ctx->pc = 0x2DA470u;
            // 0x2da470: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2DA474u;
        goto label_2da474;
    }
    ctx->pc = 0x2DA46Cu;
    SET_GPR_U32(ctx, 31, 0x2DA474u);
    ctx->pc = 0x2DA470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA46Cu;
            // 0x2da470: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA474u; }
        if (ctx->pc != 0x2DA474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA474u; }
        if (ctx->pc != 0x2DA474u) { return; }
    }
    ctx->pc = 0x2DA474u;
label_2da474:
    // 0x2da474: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2da474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2da478:
    // 0x2da478: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2da478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da47c:
    // 0x2da47c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2da47cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2da480:
    // 0x2da480: 0x0  nop
    ctx->pc = 0x2da480u;
    // NOP
label_2da484:
    // 0x2da484: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x2da484u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_2da488:
    // 0x2da488: 0x0  nop
    ctx->pc = 0x2da488u;
    // NOP
label_2da48c:
    // 0x2da48c: 0x0  nop
    ctx->pc = 0x2da48cu;
    // NOP
label_2da490:
    // 0x2da490: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2da490u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2da494:
    // 0x2da494: 0xc0b6e48  jal         func_2DB920
label_2da498:
    if (ctx->pc == 0x2DA498u) {
        ctx->pc = 0x2DA49Cu;
        goto label_2da49c;
    }
    ctx->pc = 0x2DA494u;
    SET_GPR_U32(ctx, 31, 0x2DA49Cu);
    ctx->pc = 0x2DB920u;
    if (runtime->hasFunction(0x2DB920u)) {
        auto targetFn = runtime->lookupFunction(0x2DB920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA49Cu; }
        if (ctx->pc != 0x2DA49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB920_0x2db920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA49Cu; }
        if (ctx->pc != 0x2DA49Cu) { return; }
    }
    ctx->pc = 0x2DA49Cu;
label_2da49c:
    // 0x2da49c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2da49cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2da4a0:
    // 0x2da4a0: 0xc0b6e44  jal         func_2DB910
label_2da4a4:
    if (ctx->pc == 0x2DA4A4u) {
        ctx->pc = 0x2DA4A4u;
            // 0x2da4a4: 0x24841950  addiu       $a0, $a0, 0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6480));
        ctx->pc = 0x2DA4A8u;
        goto label_2da4a8;
    }
    ctx->pc = 0x2DA4A0u;
    SET_GPR_U32(ctx, 31, 0x2DA4A8u);
    ctx->pc = 0x2DA4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4A0u;
            // 0x2da4a4: 0x24841950  addiu       $a0, $a0, 0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4A8u; }
        if (ctx->pc != 0x2DA4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4A8u; }
        if (ctx->pc != 0x2DA4A8u) { return; }
    }
    ctx->pc = 0x2DA4A8u;
label_2da4a8:
    // 0x2da4a8: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x2da4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2da4ac:
    // 0x2da4ac: 0xc60d0004  lwc1        $f13, 0x4($s0)
    ctx->pc = 0x2da4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2da4b0:
    // 0x2da4b0: 0xc60e0008  lwc1        $f14, 0x8($s0)
    ctx->pc = 0x2da4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2da4b4:
    // 0x2da4b4: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2da4b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2da4b8:
    // 0x2da4b8: 0xc0b6e3c  jal         func_2DB8F0
label_2da4bc:
    if (ctx->pc == 0x2DA4BCu) {
        ctx->pc = 0x2DA4BCu;
            // 0x2da4bc: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA4C0u;
        goto label_2da4c0;
    }
    ctx->pc = 0x2DA4B8u;
    SET_GPR_U32(ctx, 31, 0x2DA4C0u);
    ctx->pc = 0x2DA4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4B8u;
            // 0x2da4bc: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4C0u; }
        if (ctx->pc != 0x2DA4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4C0u; }
        if (ctx->pc != 0x2DA4C0u) { return; }
    }
    ctx->pc = 0x2DA4C0u;
label_2da4c0:
    // 0x2da4c0: 0xc0b6e60  jal         func_2DB980
label_2da4c4:
    if (ctx->pc == 0x2DA4C4u) {
        ctx->pc = 0x2DA4C4u;
            // 0x2da4c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA4C8u;
        goto label_2da4c8;
    }
    ctx->pc = 0x2DA4C0u;
    SET_GPR_U32(ctx, 31, 0x2DA4C8u);
    ctx->pc = 0x2DA4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4C0u;
            // 0x2da4c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4C8u; }
        if (ctx->pc != 0x2DA4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4C8u; }
        if (ctx->pc != 0x2DA4C8u) { return; }
    }
    ctx->pc = 0x2DA4C8u;
label_2da4c8:
    // 0x2da4c8: 0xc0b6e38  jal         func_2DB8E0
label_2da4cc:
    if (ctx->pc == 0x2DA4CCu) {
        ctx->pc = 0x2DA4CCu;
            // 0x2da4cc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x2DA4D0u;
        goto label_2da4d0;
    }
    ctx->pc = 0x2DA4C8u;
    SET_GPR_U32(ctx, 31, 0x2DA4D0u);
    ctx->pc = 0x2DA4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4C8u;
            // 0x2da4cc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4D0u; }
        if (ctx->pc != 0x2DA4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4D0u; }
        if (ctx->pc != 0x2DA4D0u) { return; }
    }
    ctx->pc = 0x2DA4D0u;
label_2da4d0:
    // 0x2da4d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2da4d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2da4d4:
    // 0x2da4d4: 0xc0b6e28  jal         func_2DB8A0
label_2da4d8:
    if (ctx->pc == 0x2DA4D8u) {
        ctx->pc = 0x2DA4D8u;
            // 0x2da4d8: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA4DCu;
        goto label_2da4dc;
    }
    ctx->pc = 0x2DA4D4u;
    SET_GPR_U32(ctx, 31, 0x2DA4DCu);
    ctx->pc = 0x2DA4D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4D4u;
            // 0x2da4d8: 0x27a40220  addiu       $a0, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8A0u;
    if (runtime->hasFunction(0x2DB8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4DCu; }
        if (ctx->pc != 0x2DA4DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8A0_0x2db8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4DCu; }
        if (ctx->pc != 0x2DA4DCu) { return; }
    }
    ctx->pc = 0x2DA4DCu;
label_2da4dc:
    // 0x2da4dc: 0x8ea302cc  lw          $v1, 0x2CC($s5)
    ctx->pc = 0x2da4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
label_2da4e0:
    // 0x2da4e0: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
label_2da4e4:
    if (ctx->pc == 0x2DA4E4u) {
        ctx->pc = 0x2DA4E4u;
            // 0x2da4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DA4E8u;
        goto label_2da4e8;
    }
    ctx->pc = 0x2DA4E0u;
    {
        const bool branch_taken_0x2da4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da4e0) {
            ctx->pc = 0x2DA4E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4E0u;
            // 0x2da4e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA54Cu;
            goto label_2da54c;
        }
    }
    ctx->pc = 0x2DA4E8u;
label_2da4e8:
    // 0x2da4e8: 0xc0fcb4c  jal         func_3F2D30
label_2da4ec:
    if (ctx->pc == 0x2DA4ECu) {
        ctx->pc = 0x2DA4ECu;
            // 0x2da4ec: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA4F0u;
        goto label_2da4f0;
    }
    ctx->pc = 0x2DA4E8u;
    SET_GPR_U32(ctx, 31, 0x2DA4F0u);
    ctx->pc = 0x2DA4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4E8u;
            // 0x2da4ec: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2D30u;
    if (runtime->hasFunction(0x3F2D30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4F0u; }
        if (ctx->pc != 0x2DA4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2D30_0x3f2d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4F0u; }
        if (ctx->pc != 0x2DA4F0u) { return; }
    }
    ctx->pc = 0x2DA4F0u;
label_2da4f0:
    // 0x2da4f0: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da4f4:
    // 0x2da4f4: 0xc0a5450  jal         func_295140
label_2da4f8:
    if (ctx->pc == 0x2DA4F8u) {
        ctx->pc = 0x2DA4F8u;
            // 0x2da4f8: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA4FCu;
        goto label_2da4fc;
    }
    ctx->pc = 0x2DA4F4u;
    SET_GPR_U32(ctx, 31, 0x2DA4FCu);
    ctx->pc = 0x2DA4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4F4u;
            // 0x2da4f8: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295140u;
    if (runtime->hasFunction(0x295140u)) {
        auto targetFn = runtime->lookupFunction(0x295140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4FCu; }
        if (ctx->pc != 0x2DA4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295140_0x295140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA4FCu; }
        if (ctx->pc != 0x2DA4FCu) { return; }
    }
    ctx->pc = 0x2DA4FCu;
label_2da4fc:
    // 0x2da4fc: 0xc0b6e60  jal         func_2DB980
label_2da500:
    if (ctx->pc == 0x2DA500u) {
        ctx->pc = 0x2DA500u;
            // 0x2da500: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA504u;
        goto label_2da504;
    }
    ctx->pc = 0x2DA4FCu;
    SET_GPR_U32(ctx, 31, 0x2DA504u);
    ctx->pc = 0x2DA500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA4FCu;
            // 0x2da500: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA504u; }
        if (ctx->pc != 0x2DA504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA504u; }
        if (ctx->pc != 0x2DA504u) { return; }
    }
    ctx->pc = 0x2DA504u;
label_2da504:
    // 0x2da504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da508:
    // 0x2da508: 0xc0b6e24  jal         func_2DB890
label_2da50c:
    if (ctx->pc == 0x2DA50Cu) {
        ctx->pc = 0x2DA50Cu;
            // 0x2da50c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA510u;
        goto label_2da510;
    }
    ctx->pc = 0x2DA508u;
    SET_GPR_U32(ctx, 31, 0x2DA510u);
    ctx->pc = 0x2DA50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA508u;
            // 0x2da50c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB890u;
    if (runtime->hasFunction(0x2DB890u)) {
        auto targetFn = runtime->lookupFunction(0x2DB890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA510u; }
        if (ctx->pc != 0x2DA510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB890_0x2db890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA510u; }
        if (ctx->pc != 0x2DA510u) { return; }
    }
    ctx->pc = 0x2DA510u;
label_2da510:
    // 0x2da510: 0xc0b6e20  jal         func_2DB880
label_2da514:
    if (ctx->pc == 0x2DA514u) {
        ctx->pc = 0x2DA514u;
            // 0x2da514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA518u;
        goto label_2da518;
    }
    ctx->pc = 0x2DA510u;
    SET_GPR_U32(ctx, 31, 0x2DA518u);
    ctx->pc = 0x2DA514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA510u;
            // 0x2da514: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB880u;
    if (runtime->hasFunction(0x2DB880u)) {
        auto targetFn = runtime->lookupFunction(0x2DB880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA518u; }
        if (ctx->pc != 0x2DA518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB880_0x2db880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA518u; }
        if (ctx->pc != 0x2DA518u) { return; }
    }
    ctx->pc = 0x2DA518u;
label_2da518:
    // 0x2da518: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da51c:
    // 0x2da51c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da51cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da520:
    // 0x2da520: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2da520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da524:
    // 0x2da524: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x2da524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2da528:
    // 0x2da528: 0xc0a4928  jal         func_2924A0
label_2da52c:
    if (ctx->pc == 0x2DA52Cu) {
        ctx->pc = 0x2DA52Cu;
            // 0x2da52c: 0x26a80020  addiu       $t0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA530u;
        goto label_2da530;
    }
    ctx->pc = 0x2DA528u;
    SET_GPR_U32(ctx, 31, 0x2DA530u);
    ctx->pc = 0x2DA52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA528u;
            // 0x2da52c: 0x26a80020  addiu       $t0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2924A0u;
    if (runtime->hasFunction(0x2924A0u)) {
        auto targetFn = runtime->lookupFunction(0x2924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA530u; }
        if (ctx->pc != 0x2DA530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002924A0_0x2924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA530u; }
        if (ctx->pc != 0x2DA530u) { return; }
    }
    ctx->pc = 0x2DA530u;
label_2da530:
    // 0x2da530: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da534:
    // 0x2da534: 0xc0a4d3c  jal         func_2934F0
label_2da538:
    if (ctx->pc == 0x2DA538u) {
        ctx->pc = 0x2DA538u;
            // 0x2da538: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA53Cu;
        goto label_2da53c;
    }
    ctx->pc = 0x2DA534u;
    SET_GPR_U32(ctx, 31, 0x2DA53Cu);
    ctx->pc = 0x2DA538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA534u;
            // 0x2da538: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (runtime->hasFunction(0x2934F0u)) {
        auto targetFn = runtime->lookupFunction(0x2934F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA53Cu; }
        if (ctx->pc != 0x2DA53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002934F0_0x2934f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA53Cu; }
        if (ctx->pc != 0x2DA53Cu) { return; }
    }
    ctx->pc = 0x2DA53Cu;
label_2da53c:
    // 0x2da53c: 0xc0fcb40  jal         func_3F2D00
label_2da540:
    if (ctx->pc == 0x2DA540u) {
        ctx->pc = 0x2DA540u;
            // 0x2da540: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA544u;
        goto label_2da544;
    }
    ctx->pc = 0x2DA53Cu;
    SET_GPR_U32(ctx, 31, 0x2DA544u);
    ctx->pc = 0x2DA540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA53Cu;
            // 0x2da540: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2D00u;
    if (runtime->hasFunction(0x3F2D00u)) {
        auto targetFn = runtime->lookupFunction(0x3F2D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA544u; }
        if (ctx->pc != 0x2DA544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2D00_0x3f2d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA544u; }
        if (ctx->pc != 0x2DA544u) { return; }
    }
    ctx->pc = 0x2DA544u;
label_2da544:
    // 0x2da544: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2da548:
    if (ctx->pc == 0x2DA548u) {
        ctx->pc = 0x2DA54Cu;
        goto label_2da54c;
    }
    ctx->pc = 0x2DA544u;
    {
        const bool branch_taken_0x2da544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da544) {
            ctx->pc = 0x2DA67Cu;
            goto label_2da67c;
        }
    }
    ctx->pc = 0x2DA54Cu;
label_2da54c:
    // 0x2da54c: 0x54620020  bnel        $v1, $v0, . + 4 + (0x20 << 2)
label_2da550:
    if (ctx->pc == 0x2DA550u) {
        ctx->pc = 0x2DA550u;
            // 0x2da550: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA554u;
        goto label_2da554;
    }
    ctx->pc = 0x2DA54Cu;
    {
        const bool branch_taken_0x2da54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2da54c) {
            ctx->pc = 0x2DA550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA54Cu;
            // 0x2da550: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA5D0u;
            goto label_2da5d0;
        }
    }
    ctx->pc = 0x2DA554u;
label_2da554:
    // 0x2da554: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2da554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2da558:
    // 0x2da558: 0xc0b6e14  jal         func_2DB850
label_2da55c:
    if (ctx->pc == 0x2DA55Cu) {
        ctx->pc = 0x2DA55Cu;
            // 0x2da55c: 0x26a502d0  addiu       $a1, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->pc = 0x2DA560u;
        goto label_2da560;
    }
    ctx->pc = 0x2DA558u;
    SET_GPR_U32(ctx, 31, 0x2DA560u);
    ctx->pc = 0x2DA55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA558u;
            // 0x2da55c: 0x26a502d0  addiu       $a1, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB850u;
    if (runtime->hasFunction(0x2DB850u)) {
        auto targetFn = runtime->lookupFunction(0x2DB850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA560u; }
        if (ctx->pc != 0x2DA560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB850_0x2db850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA560u; }
        if (ctx->pc != 0x2DA560u) { return; }
    }
    ctx->pc = 0x2DA560u;
label_2da560:
    // 0x2da560: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x2da560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2da564:
    // 0x2da564: 0xc0b6e00  jal         func_2DB800
label_2da568:
    if (ctx->pc == 0x2DA568u) {
        ctx->pc = 0x2DA568u;
            // 0x2da568: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA56Cu;
        goto label_2da56c;
    }
    ctx->pc = 0x2DA564u;
    SET_GPR_U32(ctx, 31, 0x2DA56Cu);
    ctx->pc = 0x2DA568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA564u;
            // 0x2da568: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA56Cu; }
        if (ctx->pc != 0x2DA56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA56Cu; }
        if (ctx->pc != 0x2DA56Cu) { return; }
    }
    ctx->pc = 0x2DA56Cu;
label_2da56c:
    // 0x2da56c: 0xc0fcb4c  jal         func_3F2D30
label_2da570:
    if (ctx->pc == 0x2DA570u) {
        ctx->pc = 0x2DA570u;
            // 0x2da570: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA574u;
        goto label_2da574;
    }
    ctx->pc = 0x2DA56Cu;
    SET_GPR_U32(ctx, 31, 0x2DA574u);
    ctx->pc = 0x2DA570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA56Cu;
            // 0x2da570: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2D30u;
    if (runtime->hasFunction(0x3F2D30u)) {
        auto targetFn = runtime->lookupFunction(0x3F2D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA574u; }
        if (ctx->pc != 0x2DA574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2D30_0x3f2d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA574u; }
        if (ctx->pc != 0x2DA574u) { return; }
    }
    ctx->pc = 0x2DA574u;
label_2da574:
    // 0x2da574: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da578:
    // 0x2da578: 0xc0a5450  jal         func_295140
label_2da57c:
    if (ctx->pc == 0x2DA57Cu) {
        ctx->pc = 0x2DA57Cu;
            // 0x2da57c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x2DA580u;
        goto label_2da580;
    }
    ctx->pc = 0x2DA578u;
    SET_GPR_U32(ctx, 31, 0x2DA580u);
    ctx->pc = 0x2DA57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA578u;
            // 0x2da57c: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295140u;
    if (runtime->hasFunction(0x295140u)) {
        auto targetFn = runtime->lookupFunction(0x295140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA580u; }
        if (ctx->pc != 0x2DA580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295140_0x295140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA580u; }
        if (ctx->pc != 0x2DA580u) { return; }
    }
    ctx->pc = 0x2DA580u;
label_2da580:
    // 0x2da580: 0xc0b6e60  jal         func_2DB980
label_2da584:
    if (ctx->pc == 0x2DA584u) {
        ctx->pc = 0x2DA584u;
            // 0x2da584: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA588u;
        goto label_2da588;
    }
    ctx->pc = 0x2DA580u;
    SET_GPR_U32(ctx, 31, 0x2DA588u);
    ctx->pc = 0x2DA584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA580u;
            // 0x2da584: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA588u; }
        if (ctx->pc != 0x2DA588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA588u; }
        if (ctx->pc != 0x2DA588u) { return; }
    }
    ctx->pc = 0x2DA588u;
label_2da588:
    // 0x2da588: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da58c:
    // 0x2da58c: 0xc0b6e24  jal         func_2DB890
label_2da590:
    if (ctx->pc == 0x2DA590u) {
        ctx->pc = 0x2DA590u;
            // 0x2da590: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA594u;
        goto label_2da594;
    }
    ctx->pc = 0x2DA58Cu;
    SET_GPR_U32(ctx, 31, 0x2DA594u);
    ctx->pc = 0x2DA590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA58Cu;
            // 0x2da590: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB890u;
    if (runtime->hasFunction(0x2DB890u)) {
        auto targetFn = runtime->lookupFunction(0x2DB890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA594u; }
        if (ctx->pc != 0x2DA594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB890_0x2db890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA594u; }
        if (ctx->pc != 0x2DA594u) { return; }
    }
    ctx->pc = 0x2DA594u;
label_2da594:
    // 0x2da594: 0xc0b6e20  jal         func_2DB880
label_2da598:
    if (ctx->pc == 0x2DA598u) {
        ctx->pc = 0x2DA598u;
            // 0x2da598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA59Cu;
        goto label_2da59c;
    }
    ctx->pc = 0x2DA594u;
    SET_GPR_U32(ctx, 31, 0x2DA59Cu);
    ctx->pc = 0x2DA598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA594u;
            // 0x2da598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB880u;
    if (runtime->hasFunction(0x2DB880u)) {
        auto targetFn = runtime->lookupFunction(0x2DB880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA59Cu; }
        if (ctx->pc != 0x2DA59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB880_0x2db880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA59Cu; }
        if (ctx->pc != 0x2DA59Cu) { return; }
    }
    ctx->pc = 0x2DA59Cu;
label_2da59c:
    // 0x2da59c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da5a0:
    // 0x2da5a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da5a4:
    // 0x2da5a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2da5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da5a8:
    // 0x2da5a8: 0x27a70230  addiu       $a3, $sp, 0x230
    ctx->pc = 0x2da5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2da5ac:
    // 0x2da5ac: 0xc0a4928  jal         func_2924A0
label_2da5b0:
    if (ctx->pc == 0x2DA5B0u) {
        ctx->pc = 0x2DA5B0u;
            // 0x2da5b0: 0x26a80020  addiu       $t0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA5B4u;
        goto label_2da5b4;
    }
    ctx->pc = 0x2DA5ACu;
    SET_GPR_U32(ctx, 31, 0x2DA5B4u);
    ctx->pc = 0x2DA5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5ACu;
            // 0x2da5b0: 0x26a80020  addiu       $t0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2924A0u;
    if (runtime->hasFunction(0x2924A0u)) {
        auto targetFn = runtime->lookupFunction(0x2924A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5B4u; }
        if (ctx->pc != 0x2DA5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002924A0_0x2924a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5B4u; }
        if (ctx->pc != 0x2DA5B4u) { return; }
    }
    ctx->pc = 0x2DA5B4u;
label_2da5b4:
    // 0x2da5b4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da5b8:
    // 0x2da5b8: 0xc0a4d3c  jal         func_2934F0
label_2da5bc:
    if (ctx->pc == 0x2DA5BCu) {
        ctx->pc = 0x2DA5BCu;
            // 0x2da5bc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA5C0u;
        goto label_2da5c0;
    }
    ctx->pc = 0x2DA5B8u;
    SET_GPR_U32(ctx, 31, 0x2DA5C0u);
    ctx->pc = 0x2DA5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5B8u;
            // 0x2da5bc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2934F0u;
    if (runtime->hasFunction(0x2934F0u)) {
        auto targetFn = runtime->lookupFunction(0x2934F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5C0u; }
        if (ctx->pc != 0x2DA5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002934F0_0x2934f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5C0u; }
        if (ctx->pc != 0x2DA5C0u) { return; }
    }
    ctx->pc = 0x2DA5C0u;
label_2da5c0:
    // 0x2da5c0: 0xc0fcb40  jal         func_3F2D00
label_2da5c4:
    if (ctx->pc == 0x2DA5C4u) {
        ctx->pc = 0x2DA5C4u;
            // 0x2da5c4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DA5C8u;
        goto label_2da5c8;
    }
    ctx->pc = 0x2DA5C0u;
    SET_GPR_U32(ctx, 31, 0x2DA5C8u);
    ctx->pc = 0x2DA5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5C0u;
            // 0x2da5c4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F2D00u;
    if (runtime->hasFunction(0x3F2D00u)) {
        auto targetFn = runtime->lookupFunction(0x3F2D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5C8u; }
        if (ctx->pc != 0x2DA5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2D00_0x3f2d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5C8u; }
        if (ctx->pc != 0x2DA5C8u) { return; }
    }
    ctx->pc = 0x2DA5C8u;
label_2da5c8:
    // 0x2da5c8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2da5cc:
    if (ctx->pc == 0x2DA5CCu) {
        ctx->pc = 0x2DA5D0u;
        goto label_2da5d0;
    }
    ctx->pc = 0x2DA5C8u;
    {
        const bool branch_taken_0x2da5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5c8) {
            ctx->pc = 0x2DA67Cu;
            goto label_2da67c;
        }
    }
    ctx->pc = 0x2DA5D0u;
label_2da5d0:
    // 0x2da5d0: 0xc0fcb34  jal         func_3F2CD0
label_2da5d4:
    if (ctx->pc == 0x2DA5D4u) {
        ctx->pc = 0x2DA5D8u;
        goto label_2da5d8;
    }
    ctx->pc = 0x2DA5D0u;
    SET_GPR_U32(ctx, 31, 0x2DA5D8u);
    ctx->pc = 0x3F2CD0u;
    if (runtime->hasFunction(0x3F2CD0u)) {
        auto targetFn = runtime->lookupFunction(0x3F2CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5D8u; }
        if (ctx->pc != 0x2DA5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F2CD0_0x3f2cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5D8u; }
        if (ctx->pc != 0x2DA5D8u) { return; }
    }
    ctx->pc = 0x2DA5D8u;
label_2da5d8:
    // 0x2da5d8: 0xc077588  jal         func_1DD620
label_2da5dc:
    if (ctx->pc == 0x2DA5DCu) {
        ctx->pc = 0x2DA5DCu;
            // 0x2da5dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2DA5E0u;
        goto label_2da5e0;
    }
    ctx->pc = 0x2DA5D8u;
    SET_GPR_U32(ctx, 31, 0x2DA5E0u);
    ctx->pc = 0x2DA5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5D8u;
            // 0x2da5dc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5E0u; }
        if (ctx->pc != 0x2DA5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5E0u; }
        if (ctx->pc != 0x2DA5E0u) { return; }
    }
    ctx->pc = 0x2DA5E0u;
label_2da5e0:
    // 0x2da5e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2da5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2da5e4:
    // 0x2da5e4: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_2da5e8:
    if (ctx->pc == 0x2DA5E8u) {
        ctx->pc = 0x2DA5E8u;
            // 0x2da5e8: 0x26a402d0  addiu       $a0, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->pc = 0x2DA5ECu;
        goto label_2da5ec;
    }
    ctx->pc = 0x2DA5E4u;
    {
        const bool branch_taken_0x2da5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5e4) {
            ctx->pc = 0x2DA5E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5E4u;
            // 0x2da5e8: 0x26a402d0  addiu       $a0, $s5, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA668u;
            goto label_2da668;
        }
    }
    ctx->pc = 0x2DA5ECu;
label_2da5ec:
    // 0x2da5ec: 0xc0b6dfc  jal         func_2DB7F0
label_2da5f0:
    if (ctx->pc == 0x2DA5F0u) {
        ctx->pc = 0x2DA5F0u;
            // 0x2da5f0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2DA5F4u;
        goto label_2da5f4;
    }
    ctx->pc = 0x2DA5ECu;
    SET_GPR_U32(ctx, 31, 0x2DA5F4u);
    ctx->pc = 0x2DA5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA5ECu;
            // 0x2da5f0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7F0u;
    if (runtime->hasFunction(0x2DB7F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5F4u; }
        if (ctx->pc != 0x2DA5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7F0_0x2db7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA5F4u; }
        if (ctx->pc != 0x2DA5F4u) { return; }
    }
    ctx->pc = 0x2DA5F4u;
label_2da5f4:
    // 0x2da5f4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2da5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2da5f8:
    // 0x2da5f8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2da5fc:
    if (ctx->pc == 0x2DA5FCu) {
        ctx->pc = 0x2DA600u;
        goto label_2da600;
    }
    ctx->pc = 0x2DA5F8u;
    {
        const bool branch_taken_0x2da5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da5f8) {
            ctx->pc = 0x2DA664u;
            goto label_2da664;
        }
    }
    ctx->pc = 0x2DA600u;
label_2da600:
    // 0x2da600: 0xc0b6df8  jal         func_2DB7E0
label_2da604:
    if (ctx->pc == 0x2DA604u) {
        ctx->pc = 0x2DA604u;
            // 0x2da604: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2DA608u;
        goto label_2da608;
    }
    ctx->pc = 0x2DA600u;
    SET_GPR_U32(ctx, 31, 0x2DA608u);
    ctx->pc = 0x2DA604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA600u;
            // 0x2da604: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7E0u;
    if (runtime->hasFunction(0x2DB7E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA608u; }
        if (ctx->pc != 0x2DA608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7E0_0x2db7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA608u; }
        if (ctx->pc != 0x2DA608u) { return; }
    }
    ctx->pc = 0x2DA608u;
label_2da608:
    // 0x2da608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da60c:
    // 0x2da60c: 0xc0b6e60  jal         func_2DB980
label_2da610:
    if (ctx->pc == 0x2DA610u) {
        ctx->pc = 0x2DA610u;
            // 0x2da610: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA614u;
        goto label_2da614;
    }
    ctx->pc = 0x2DA60Cu;
    SET_GPR_U32(ctx, 31, 0x2DA614u);
    ctx->pc = 0x2DA610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA60Cu;
            // 0x2da610: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA614u; }
        if (ctx->pc != 0x2DA614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA614u; }
        if (ctx->pc != 0x2DA614u) { return; }
    }
    ctx->pc = 0x2DA614u;
label_2da614:
    // 0x2da614: 0xc0b6e38  jal         func_2DB8E0
label_2da618:
    if (ctx->pc == 0x2DA618u) {
        ctx->pc = 0x2DA618u;
            // 0x2da618: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x2DA61Cu;
        goto label_2da61c;
    }
    ctx->pc = 0x2DA614u;
    SET_GPR_U32(ctx, 31, 0x2DA61Cu);
    ctx->pc = 0x2DA618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA614u;
            // 0x2da618: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA61Cu; }
        if (ctx->pc != 0x2DA61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA61Cu; }
        if (ctx->pc != 0x2DA61Cu) { return; }
    }
    ctx->pc = 0x2DA61Cu;
label_2da61c:
    // 0x2da61c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2da61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_2da620:
    // 0x2da620: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2da620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da624:
    // 0x2da624: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2da624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2da628:
    // 0x2da628: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x2da628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_2da62c:
    // 0x2da62c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2da62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_2da630:
    // 0x2da630: 0xc441c6d0  lwc1        $f1, -0x3930($v0)
    ctx->pc = 0x2da630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2da634:
    // 0x2da634: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2da634u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2da638:
    // 0x2da638: 0xc04cc70  jal         func_1331C0
label_2da63c:
    if (ctx->pc == 0x2DA63Cu) {
        ctx->pc = 0x2DA63Cu;
            // 0x2da63c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2DA640u;
        goto label_2da640;
    }
    ctx->pc = 0x2DA638u;
    SET_GPR_U32(ctx, 31, 0x2DA640u);
    ctx->pc = 0x2DA63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA638u;
            // 0x2da63c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA640u; }
        if (ctx->pc != 0x2DA640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA640u; }
        if (ctx->pc != 0x2DA640u) { return; }
    }
    ctx->pc = 0x2DA640u;
label_2da640:
    // 0x2da640: 0xc7ac0200  lwc1        $f12, 0x200($sp)
    ctx->pc = 0x2da640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2da644:
    // 0x2da644: 0xc7ad0204  lwc1        $f13, 0x204($sp)
    ctx->pc = 0x2da644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2da648:
    // 0x2da648: 0xc7ae0208  lwc1        $f14, 0x208($sp)
    ctx->pc = 0x2da648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2da64c:
    // 0x2da64c: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2da64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2da650:
    // 0x2da650: 0xc0b6df0  jal         func_2DB7C0
label_2da654:
    if (ctx->pc == 0x2DA654u) {
        ctx->pc = 0x2DA654u;
            // 0x2da654: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2DA658u;
        goto label_2da658;
    }
    ctx->pc = 0x2DA650u;
    SET_GPR_U32(ctx, 31, 0x2DA658u);
    ctx->pc = 0x2DA654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA650u;
            // 0x2da654: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA658u; }
        if (ctx->pc != 0x2DA658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA658u; }
        if (ctx->pc != 0x2DA658u) { return; }
    }
    ctx->pc = 0x2DA658u;
label_2da658:
    // 0x2da658: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x2da658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2da65c:
    // 0x2da65c: 0xc0b6e00  jal         func_2DB800
label_2da660:
    if (ctx->pc == 0x2DA660u) {
        ctx->pc = 0x2DA660u;
            // 0x2da660: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2DA664u;
        goto label_2da664;
    }
    ctx->pc = 0x2DA65Cu;
    SET_GPR_U32(ctx, 31, 0x2DA664u);
    ctx->pc = 0x2DA660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA65Cu;
            // 0x2da660: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA664u; }
        if (ctx->pc != 0x2DA664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA664u; }
        if (ctx->pc != 0x2DA664u) { return; }
    }
    ctx->pc = 0x2DA664u;
label_2da664:
    // 0x2da664: 0x26a402d0  addiu       $a0, $s5, 0x2D0
    ctx->pc = 0x2da664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 720));
label_2da668:
    // 0x2da668: 0xc0b6de4  jal         func_2DB790
label_2da66c:
    if (ctx->pc == 0x2DA66Cu) {
        ctx->pc = 0x2DA66Cu;
            // 0x2da66c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA670u;
        goto label_2da670;
    }
    ctx->pc = 0x2DA668u;
    SET_GPR_U32(ctx, 31, 0x2DA670u);
    ctx->pc = 0x2DA66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA668u;
            // 0x2da66c: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB790u;
    if (runtime->hasFunction(0x2DB790u)) {
        auto targetFn = runtime->lookupFunction(0x2DB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA670u; }
        if (ctx->pc != 0x2DA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB790_0x2db790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA670u; }
        if (ctx->pc != 0x2DA670u) { return; }
    }
    ctx->pc = 0x2DA670u;
label_2da670:
    // 0x2da670: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da674:
    // 0x2da674: 0xc0a5450  jal         func_295140
label_2da678:
    if (ctx->pc == 0x2DA678u) {
        ctx->pc = 0x2DA678u;
            // 0x2da678: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DA67Cu;
        goto label_2da67c;
    }
    ctx->pc = 0x2DA674u;
    SET_GPR_U32(ctx, 31, 0x2DA67Cu);
    ctx->pc = 0x2DA678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA674u;
            // 0x2da678: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295140u;
    if (runtime->hasFunction(0x295140u)) {
        auto targetFn = runtime->lookupFunction(0x295140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA67Cu; }
        if (ctx->pc != 0x2DA67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295140_0x295140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA67Cu; }
        if (ctx->pc != 0x2DA67Cu) { return; }
    }
    ctx->pc = 0x2DA67Cu;
label_2da67c:
    // 0x2da67c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2da67cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2da680:
    // 0x2da680: 0xc0b6de0  jal         func_2DB780
label_2da684:
    if (ctx->pc == 0x2DA684u) {
        ctx->pc = 0x2DA684u;
            // 0x2da684: 0x24841930  addiu       $a0, $a0, 0x1930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
        ctx->pc = 0x2DA688u;
        goto label_2da688;
    }
    ctx->pc = 0x2DA680u;
    SET_GPR_U32(ctx, 31, 0x2DA688u);
    ctx->pc = 0x2DA684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA680u;
            // 0x2da684: 0x24841930  addiu       $a0, $a0, 0x1930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA688u; }
        if (ctx->pc != 0x2DA688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA688u; }
        if (ctx->pc != 0x2DA688u) { return; }
    }
    ctx->pc = 0x2DA688u;
label_2da688:
    // 0x2da688: 0xc07753c  jal         func_1DD4F0
label_2da68c:
    if (ctx->pc == 0x2DA68Cu) {
        ctx->pc = 0x2DA68Cu;
            // 0x2da68c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA690u;
        goto label_2da690;
    }
    ctx->pc = 0x2DA688u;
    SET_GPR_U32(ctx, 31, 0x2DA690u);
    ctx->pc = 0x2DA68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA688u;
            // 0x2da68c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA690u; }
        if (ctx->pc != 0x2DA690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA690u; }
        if (ctx->pc != 0x2DA690u) { return; }
    }
    ctx->pc = 0x2DA690u;
label_2da690:
    // 0x2da690: 0x8ea40010  lw          $a0, 0x10($s5)
    ctx->pc = 0x2da690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_2da694:
    // 0x2da694: 0xc0b6dd0  jal         func_2DB740
label_2da698:
    if (ctx->pc == 0x2DA698u) {
        ctx->pc = 0x2DA698u;
            // 0x2da698: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA69Cu;
        goto label_2da69c;
    }
    ctx->pc = 0x2DA694u;
    SET_GPR_U32(ctx, 31, 0x2DA69Cu);
    ctx->pc = 0x2DA698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA694u;
            // 0x2da698: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB740u;
    if (runtime->hasFunction(0x2DB740u)) {
        auto targetFn = runtime->lookupFunction(0x2DB740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA69Cu; }
        if (ctx->pc != 0x2DA69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB740_0x2db740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA69Cu; }
        if (ctx->pc != 0x2DA69Cu) { return; }
    }
    ctx->pc = 0x2DA69Cu;
label_2da69c:
    // 0x2da69c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2da69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2da6a0:
    // 0x2da6a0: 0xc0b6e44  jal         func_2DB910
label_2da6a4:
    if (ctx->pc == 0x2DA6A4u) {
        ctx->pc = 0x2DA6A4u;
            // 0x2da6a4: 0x24841920  addiu       $a0, $a0, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6432));
        ctx->pc = 0x2DA6A8u;
        goto label_2da6a8;
    }
    ctx->pc = 0x2DA6A0u;
    SET_GPR_U32(ctx, 31, 0x2DA6A8u);
    ctx->pc = 0x2DA6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6A0u;
            // 0x2da6a4: 0x24841920  addiu       $a0, $a0, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB910u;
    if (runtime->hasFunction(0x2DB910u)) {
        auto targetFn = runtime->lookupFunction(0x2DB910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6A8u; }
        if (ctx->pc != 0x2DA6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB910_0x2db910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6A8u; }
        if (ctx->pc != 0x2DA6A8u) { return; }
    }
    ctx->pc = 0x2DA6A8u;
label_2da6a8:
    // 0x2da6a8: 0x8ea302cc  lw          $v1, 0x2CC($s5)
    ctx->pc = 0x2da6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
label_2da6ac:
    // 0x2da6ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2da6b0:
    // 0x2da6b0: 0x106200bb  beq         $v1, $v0, . + 4 + (0xBB << 2)
label_2da6b4:
    if (ctx->pc == 0x2DA6B4u) {
        ctx->pc = 0x2DA6B8u;
        goto label_2da6b8;
    }
    ctx->pc = 0x2DA6B0u;
    {
        const bool branch_taken_0x2da6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da6b0) {
            ctx->pc = 0x2DA9A0u;
            goto label_2da9a0;
        }
    }
    ctx->pc = 0x2DA6B8u;
label_2da6b8:
    // 0x2da6b8: 0x26b2021c  addiu       $s2, $s5, 0x21C
    ctx->pc = 0x2da6b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 540));
label_2da6bc:
    // 0x2da6bc: 0x26b001c0  addiu       $s0, $s5, 0x1C0
    ctx->pc = 0x2da6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 448));
label_2da6c0:
    // 0x2da6c0: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2da6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2da6c4:
    // 0x2da6c4: 0xc0b6db8  jal         func_2DB6E0
label_2da6c8:
    if (ctx->pc == 0x2DA6C8u) {
        ctx->pc = 0x2DA6C8u;
            // 0x2da6c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6CCu;
        goto label_2da6cc;
    }
    ctx->pc = 0x2DA6C4u;
    SET_GPR_U32(ctx, 31, 0x2DA6CCu);
    ctx->pc = 0x2DA6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6C4u;
            // 0x2da6c8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6CCu; }
        if (ctx->pc != 0x2DA6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6CCu; }
        if (ctx->pc != 0x2DA6CCu) { return; }
    }
    ctx->pc = 0x2DA6CCu;
label_2da6cc:
    // 0x2da6cc: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2da6d0:
    if (ctx->pc == 0x2DA6D0u) {
        ctx->pc = 0x2DA6D4u;
        goto label_2da6d4;
    }
    ctx->pc = 0x2DA6CCu;
    {
        const bool branch_taken_0x2da6cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da6cc) {
            ctx->pc = 0x2DA740u;
            goto label_2da740;
        }
    }
    ctx->pc = 0x2DA6D4u;
label_2da6d4:
    // 0x2da6d4: 0xc0b6dcc  jal         func_2DB730
label_2da6d8:
    if (ctx->pc == 0x2DA6D8u) {
        ctx->pc = 0x2DA6DCu;
        goto label_2da6dc;
    }
    ctx->pc = 0x2DA6D4u;
    SET_GPR_U32(ctx, 31, 0x2DA6DCu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6DCu; }
        if (ctx->pc != 0x2DA6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6DCu; }
        if (ctx->pc != 0x2DA6DCu) { return; }
    }
    ctx->pc = 0x2DA6DCu;
label_2da6dc:
    // 0x2da6dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2da6dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da6e0:
    // 0x2da6e0: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2da6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2da6e4:
    // 0x2da6e4: 0xc0b6dc8  jal         func_2DB720
label_2da6e8:
    if (ctx->pc == 0x2DA6E8u) {
        ctx->pc = 0x2DA6E8u;
            // 0x2da6e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6ECu;
        goto label_2da6ec;
    }
    ctx->pc = 0x2DA6E4u;
    SET_GPR_U32(ctx, 31, 0x2DA6ECu);
    ctx->pc = 0x2DA6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6E4u;
            // 0x2da6e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB720u;
    if (runtime->hasFunction(0x2DB720u)) {
        auto targetFn = runtime->lookupFunction(0x2DB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6ECu; }
        if (ctx->pc != 0x2DA6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB720_0x2db720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6ECu; }
        if (ctx->pc != 0x2DA6ECu) { return; }
    }
    ctx->pc = 0x2DA6ECu;
label_2da6ec:
    // 0x2da6ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da6f0:
    // 0x2da6f0: 0xc0b6dc0  jal         func_2DB700
label_2da6f4:
    if (ctx->pc == 0x2DA6F4u) {
        ctx->pc = 0x2DA6F4u;
            // 0x2da6f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA6F8u;
        goto label_2da6f8;
    }
    ctx->pc = 0x2DA6F0u;
    SET_GPR_U32(ctx, 31, 0x2DA6F8u);
    ctx->pc = 0x2DA6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA6F0u;
            // 0x2da6f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6F8u; }
        if (ctx->pc != 0x2DA6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA6F8u; }
        if (ctx->pc != 0x2DA6F8u) { return; }
    }
    ctx->pc = 0x2DA6F8u;
label_2da6f8:
    // 0x2da6f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2da6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da6fc:
    // 0x2da6fc: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2da700:
    if (ctx->pc == 0x2DA700u) {
        ctx->pc = 0x2DA704u;
        goto label_2da704;
    }
    ctx->pc = 0x2DA6FCu;
    {
        const bool branch_taken_0x2da6fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da6fc) {
            ctx->pc = 0x2DA728u;
            goto label_2da728;
        }
    }
    ctx->pc = 0x2DA704u;
label_2da704:
    // 0x2da704: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x2da704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_2da708:
    // 0x2da708: 0xc0b6dbc  jal         func_2DB6F0
label_2da70c:
    if (ctx->pc == 0x2DA70Cu) {
        ctx->pc = 0x2DA70Cu;
            // 0x2da70c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA710u;
        goto label_2da710;
    }
    ctx->pc = 0x2DA708u;
    SET_GPR_U32(ctx, 31, 0x2DA710u);
    ctx->pc = 0x2DA70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA708u;
            // 0x2da70c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6F0u;
    if (runtime->hasFunction(0x2DB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA710u; }
        if (ctx->pc != 0x2DA710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6F0_0x2db6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA710u; }
        if (ctx->pc != 0x2DA710u) { return; }
    }
    ctx->pc = 0x2DA710u;
label_2da710:
    // 0x2da710: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2da710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2da714:
    // 0x2da714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2da714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da718:
    // 0x2da718: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2da718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da71c:
    // 0x2da71c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2da71cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2da720:
    // 0x2da720: 0x320f809  jalr        $t9
label_2da724:
    if (ctx->pc == 0x2DA724u) {
        ctx->pc = 0x2DA724u;
            // 0x2da724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA728u;
        goto label_2da728;
    }
    ctx->pc = 0x2DA720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA728u);
        ctx->pc = 0x2DA724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA720u;
            // 0x2da724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA728u; }
            if (ctx->pc != 0x2DA728u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA728u;
label_2da728:
    // 0x2da728: 0x26440018  addiu       $a0, $s2, 0x18
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2da72c:
    // 0x2da72c: 0xc0b6db8  jal         func_2DB6E0
label_2da730:
    if (ctx->pc == 0x2DA730u) {
        ctx->pc = 0x2DA730u;
            // 0x2da730: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2DA734u;
        goto label_2da734;
    }
    ctx->pc = 0x2DA72Cu;
    SET_GPR_U32(ctx, 31, 0x2DA734u);
    ctx->pc = 0x2DA730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA72Cu;
            // 0x2da730: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA734u; }
        if (ctx->pc != 0x2DA734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA734u; }
        if (ctx->pc != 0x2DA734u) { return; }
    }
    ctx->pc = 0x2DA734u;
label_2da734:
    // 0x2da734: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2da734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2da738:
    // 0x2da738: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2da73c:
    if (ctx->pc == 0x2DA73Cu) {
        ctx->pc = 0x2DA740u;
        goto label_2da740;
    }
    ctx->pc = 0x2DA738u;
    {
        const bool branch_taken_0x2da738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da738) {
            ctx->pc = 0x2DA6D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da6d4;
        }
    }
    ctx->pc = 0x2DA740u;
label_2da740:
    // 0x2da740: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2da740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2da744:
    // 0x2da744: 0xc0b6db8  jal         func_2DB6E0
label_2da748:
    if (ctx->pc == 0x2DA748u) {
        ctx->pc = 0x2DA748u;
            // 0x2da748: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA74Cu;
        goto label_2da74c;
    }
    ctx->pc = 0x2DA744u;
    SET_GPR_U32(ctx, 31, 0x2DA74Cu);
    ctx->pc = 0x2DA748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA744u;
            // 0x2da748: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA74Cu; }
        if (ctx->pc != 0x2DA74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA74Cu; }
        if (ctx->pc != 0x2DA74Cu) { return; }
    }
    ctx->pc = 0x2DA74Cu;
label_2da74c:
    // 0x2da74c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2da750:
    if (ctx->pc == 0x2DA750u) {
        ctx->pc = 0x2DA754u;
        goto label_2da754;
    }
    ctx->pc = 0x2DA74Cu;
    {
        const bool branch_taken_0x2da74c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da74c) {
            ctx->pc = 0x2DA7C0u;
            goto label_2da7c0;
        }
    }
    ctx->pc = 0x2DA754u;
label_2da754:
    // 0x2da754: 0xc0b6dcc  jal         func_2DB730
label_2da758:
    if (ctx->pc == 0x2DA758u) {
        ctx->pc = 0x2DA75Cu;
        goto label_2da75c;
    }
    ctx->pc = 0x2DA754u;
    SET_GPR_U32(ctx, 31, 0x2DA75Cu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA75Cu; }
        if (ctx->pc != 0x2DA75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA75Cu; }
        if (ctx->pc != 0x2DA75Cu) { return; }
    }
    ctx->pc = 0x2DA75Cu;
label_2da75c:
    // 0x2da75c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2da75cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da760:
    // 0x2da760: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2da760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2da764:
    // 0x2da764: 0xc0b6dc8  jal         func_2DB720
label_2da768:
    if (ctx->pc == 0x2DA768u) {
        ctx->pc = 0x2DA768u;
            // 0x2da768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA76Cu;
        goto label_2da76c;
    }
    ctx->pc = 0x2DA764u;
    SET_GPR_U32(ctx, 31, 0x2DA76Cu);
    ctx->pc = 0x2DA768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA764u;
            // 0x2da768: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB720u;
    if (runtime->hasFunction(0x2DB720u)) {
        auto targetFn = runtime->lookupFunction(0x2DB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA76Cu; }
        if (ctx->pc != 0x2DA76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB720_0x2db720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA76Cu; }
        if (ctx->pc != 0x2DA76Cu) { return; }
    }
    ctx->pc = 0x2DA76Cu;
label_2da76c:
    // 0x2da76c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da770:
    // 0x2da770: 0xc0b6dc0  jal         func_2DB700
label_2da774:
    if (ctx->pc == 0x2DA774u) {
        ctx->pc = 0x2DA774u;
            // 0x2da774: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA778u;
        goto label_2da778;
    }
    ctx->pc = 0x2DA770u;
    SET_GPR_U32(ctx, 31, 0x2DA778u);
    ctx->pc = 0x2DA774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA770u;
            // 0x2da774: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA778u; }
        if (ctx->pc != 0x2DA778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA778u; }
        if (ctx->pc != 0x2DA778u) { return; }
    }
    ctx->pc = 0x2DA778u;
label_2da778:
    // 0x2da778: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2da778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da77c:
    // 0x2da77c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2da780:
    if (ctx->pc == 0x2DA780u) {
        ctx->pc = 0x2DA784u;
        goto label_2da784;
    }
    ctx->pc = 0x2DA77Cu;
    {
        const bool branch_taken_0x2da77c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da77c) {
            ctx->pc = 0x2DA7A8u;
            goto label_2da7a8;
        }
    }
    ctx->pc = 0x2DA784u;
label_2da784:
    // 0x2da784: 0x2644003c  addiu       $a0, $s2, 0x3C
    ctx->pc = 0x2da784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 60));
label_2da788:
    // 0x2da788: 0xc0b6dbc  jal         func_2DB6F0
label_2da78c:
    if (ctx->pc == 0x2DA78Cu) {
        ctx->pc = 0x2DA78Cu;
            // 0x2da78c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA790u;
        goto label_2da790;
    }
    ctx->pc = 0x2DA788u;
    SET_GPR_U32(ctx, 31, 0x2DA790u);
    ctx->pc = 0x2DA78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA788u;
            // 0x2da78c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6F0u;
    if (runtime->hasFunction(0x2DB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA790u; }
        if (ctx->pc != 0x2DA790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6F0_0x2db6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA790u; }
        if (ctx->pc != 0x2DA790u) { return; }
    }
    ctx->pc = 0x2DA790u;
label_2da790:
    // 0x2da790: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x2da790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2da794:
    // 0x2da794: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2da794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da798:
    // 0x2da798: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2da798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da79c:
    // 0x2da79c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2da79cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2da7a0:
    // 0x2da7a0: 0x320f809  jalr        $t9
label_2da7a4:
    if (ctx->pc == 0x2DA7A4u) {
        ctx->pc = 0x2DA7A4u;
            // 0x2da7a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7A8u;
        goto label_2da7a8;
    }
    ctx->pc = 0x2DA7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA7A8u);
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7A0u;
            // 0x2da7a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA7A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7A8u; }
            if (ctx->pc != 0x2DA7A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA7A8u;
label_2da7a8:
    // 0x2da7a8: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x2da7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_2da7ac:
    // 0x2da7ac: 0xc0b6db8  jal         func_2DB6E0
label_2da7b0:
    if (ctx->pc == 0x2DA7B0u) {
        ctx->pc = 0x2DA7B0u;
            // 0x2da7b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2DA7B4u;
        goto label_2da7b4;
    }
    ctx->pc = 0x2DA7ACu;
    SET_GPR_U32(ctx, 31, 0x2DA7B4u);
    ctx->pc = 0x2DA7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7ACu;
            // 0x2da7b0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7B4u; }
        if (ctx->pc != 0x2DA7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7B4u; }
        if (ctx->pc != 0x2DA7B4u) { return; }
    }
    ctx->pc = 0x2DA7B4u;
label_2da7b4:
    // 0x2da7b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2da7b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2da7b8:
    // 0x2da7b8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2da7bc:
    if (ctx->pc == 0x2DA7BCu) {
        ctx->pc = 0x2DA7C0u;
        goto label_2da7c0;
    }
    ctx->pc = 0x2DA7B8u;
    {
        const bool branch_taken_0x2da7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da7b8) {
            ctx->pc = 0x2DA754u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da754;
        }
    }
    ctx->pc = 0x2DA7C0u;
label_2da7c0:
    // 0x2da7c0: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x2da7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_2da7c4:
    // 0x2da7c4: 0xc0b6db8  jal         func_2DB6E0
label_2da7c8:
    if (ctx->pc == 0x2DA7C8u) {
        ctx->pc = 0x2DA7C8u;
            // 0x2da7c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7CCu;
        goto label_2da7cc;
    }
    ctx->pc = 0x2DA7C4u;
    SET_GPR_U32(ctx, 31, 0x2DA7CCu);
    ctx->pc = 0x2DA7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7C4u;
            // 0x2da7c8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7CCu; }
        if (ctx->pc != 0x2DA7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7CCu; }
        if (ctx->pc != 0x2DA7CCu) { return; }
    }
    ctx->pc = 0x2DA7CCu;
label_2da7cc:
    // 0x2da7cc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_2da7d0:
    if (ctx->pc == 0x2DA7D0u) {
        ctx->pc = 0x2DA7D4u;
        goto label_2da7d4;
    }
    ctx->pc = 0x2DA7CCu;
    {
        const bool branch_taken_0x2da7cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da7cc) {
            ctx->pc = 0x2DA830u;
            goto label_2da830;
        }
    }
    ctx->pc = 0x2DA7D4u;
label_2da7d4:
    // 0x2da7d4: 0xc0b6dcc  jal         func_2DB730
label_2da7d8:
    if (ctx->pc == 0x2DA7D8u) {
        ctx->pc = 0x2DA7DCu;
        goto label_2da7dc;
    }
    ctx->pc = 0x2DA7D4u;
    SET_GPR_U32(ctx, 31, 0x2DA7DCu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7DCu; }
        if (ctx->pc != 0x2DA7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7DCu; }
        if (ctx->pc != 0x2DA7DCu) { return; }
    }
    ctx->pc = 0x2DA7DCu;
label_2da7dc:
    // 0x2da7dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da7dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da7e0:
    // 0x2da7e0: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x2da7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_2da7e4:
    // 0x2da7e4: 0xc0b6dc8  jal         func_2DB720
label_2da7e8:
    if (ctx->pc == 0x2DA7E8u) {
        ctx->pc = 0x2DA7E8u;
            // 0x2da7e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7ECu;
        goto label_2da7ec;
    }
    ctx->pc = 0x2DA7E4u;
    SET_GPR_U32(ctx, 31, 0x2DA7ECu);
    ctx->pc = 0x2DA7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7E4u;
            // 0x2da7e8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB720u;
    if (runtime->hasFunction(0x2DB720u)) {
        auto targetFn = runtime->lookupFunction(0x2DB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7ECu; }
        if (ctx->pc != 0x2DA7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB720_0x2db720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7ECu; }
        if (ctx->pc != 0x2DA7ECu) { return; }
    }
    ctx->pc = 0x2DA7ECu;
label_2da7ec:
    // 0x2da7ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da7f0:
    // 0x2da7f0: 0xc0b6dc0  jal         func_2DB700
label_2da7f4:
    if (ctx->pc == 0x2DA7F4u) {
        ctx->pc = 0x2DA7F4u;
            // 0x2da7f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7F8u;
        goto label_2da7f8;
    }
    ctx->pc = 0x2DA7F0u;
    SET_GPR_U32(ctx, 31, 0x2DA7F8u);
    ctx->pc = 0x2DA7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA7F0u;
            // 0x2da7f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7F8u; }
        if (ctx->pc != 0x2DA7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA7F8u; }
        if (ctx->pc != 0x2DA7F8u) { return; }
    }
    ctx->pc = 0x2DA7F8u;
label_2da7f8:
    // 0x2da7f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2da7fc:
    if (ctx->pc == 0x2DA7FCu) {
        ctx->pc = 0x2DA800u;
        goto label_2da800;
    }
    ctx->pc = 0x2DA7F8u;
    {
        const bool branch_taken_0x2da7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da7f8) {
            ctx->pc = 0x2DA818u;
            goto label_2da818;
        }
    }
    ctx->pc = 0x2DA800u;
label_2da800:
    // 0x2da800: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da804:
    // 0x2da804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da808:
    // 0x2da808: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2da808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da80c:
    // 0x2da80c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2da80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2da810:
    // 0x2da810: 0x320f809  jalr        $t9
label_2da814:
    if (ctx->pc == 0x2DA814u) {
        ctx->pc = 0x2DA814u;
            // 0x2da814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA818u;
        goto label_2da818;
    }
    ctx->pc = 0x2DA810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA818u);
        ctx->pc = 0x2DA814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA810u;
            // 0x2da814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA818u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA818u; }
            if (ctx->pc != 0x2DA818u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA818u;
label_2da818:
    // 0x2da818: 0x26440048  addiu       $a0, $s2, 0x48
    ctx->pc = 0x2da818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_2da81c:
    // 0x2da81c: 0xc0b6db8  jal         func_2DB6E0
label_2da820:
    if (ctx->pc == 0x2DA820u) {
        ctx->pc = 0x2DA820u;
            // 0x2da820: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x2DA824u;
        goto label_2da824;
    }
    ctx->pc = 0x2DA81Cu;
    SET_GPR_U32(ctx, 31, 0x2DA824u);
    ctx->pc = 0x2DA820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA81Cu;
            // 0x2da820: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA824u; }
        if (ctx->pc != 0x2DA824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA824u; }
        if (ctx->pc != 0x2DA824u) { return; }
    }
    ctx->pc = 0x2DA824u;
label_2da824:
    // 0x2da824: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2da824u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2da828:
    // 0x2da828: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2da82c:
    if (ctx->pc == 0x2DA82Cu) {
        ctx->pc = 0x2DA830u;
        goto label_2da830;
    }
    ctx->pc = 0x2DA828u;
    {
        const bool branch_taken_0x2da828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da828) {
            ctx->pc = 0x2DA7D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da7d4;
        }
    }
    ctx->pc = 0x2DA830u;
label_2da830:
    // 0x2da830: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2da830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2da834:
    // 0x2da834: 0xc0b6db8  jal         func_2DB6E0
label_2da838:
    if (ctx->pc == 0x2DA838u) {
        ctx->pc = 0x2DA838u;
            // 0x2da838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA83Cu;
        goto label_2da83c;
    }
    ctx->pc = 0x2DA834u;
    SET_GPR_U32(ctx, 31, 0x2DA83Cu);
    ctx->pc = 0x2DA838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA834u;
            // 0x2da838: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA83Cu; }
        if (ctx->pc != 0x2DA83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA83Cu; }
        if (ctx->pc != 0x2DA83Cu) { return; }
    }
    ctx->pc = 0x2DA83Cu;
label_2da83c:
    // 0x2da83c: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2da840:
    if (ctx->pc == 0x2DA840u) {
        ctx->pc = 0x2DA844u;
        goto label_2da844;
    }
    ctx->pc = 0x2DA83Cu;
    {
        const bool branch_taken_0x2da83c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da83c) {
            ctx->pc = 0x2DA8B0u;
            goto label_2da8b0;
        }
    }
    ctx->pc = 0x2DA844u;
label_2da844:
    // 0x2da844: 0xc0b6dcc  jal         func_2DB730
label_2da848:
    if (ctx->pc == 0x2DA848u) {
        ctx->pc = 0x2DA84Cu;
        goto label_2da84c;
    }
    ctx->pc = 0x2DA844u;
    SET_GPR_U32(ctx, 31, 0x2DA84Cu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA84Cu; }
        if (ctx->pc != 0x2DA84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA84Cu; }
        if (ctx->pc != 0x2DA84Cu) { return; }
    }
    ctx->pc = 0x2DA84Cu;
label_2da84c:
    // 0x2da84c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da84cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da850:
    // 0x2da850: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2da850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2da854:
    // 0x2da854: 0xc0b6dc8  jal         func_2DB720
label_2da858:
    if (ctx->pc == 0x2DA858u) {
        ctx->pc = 0x2DA858u;
            // 0x2da858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA85Cu;
        goto label_2da85c;
    }
    ctx->pc = 0x2DA854u;
    SET_GPR_U32(ctx, 31, 0x2DA85Cu);
    ctx->pc = 0x2DA858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA854u;
            // 0x2da858: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB720u;
    if (runtime->hasFunction(0x2DB720u)) {
        auto targetFn = runtime->lookupFunction(0x2DB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA85Cu; }
        if (ctx->pc != 0x2DA85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB720_0x2db720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA85Cu; }
        if (ctx->pc != 0x2DA85Cu) { return; }
    }
    ctx->pc = 0x2DA85Cu;
label_2da85c:
    // 0x2da85c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da860:
    // 0x2da860: 0xc0b6dc0  jal         func_2DB700
label_2da864:
    if (ctx->pc == 0x2DA864u) {
        ctx->pc = 0x2DA864u;
            // 0x2da864: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA868u;
        goto label_2da868;
    }
    ctx->pc = 0x2DA860u;
    SET_GPR_U32(ctx, 31, 0x2DA868u);
    ctx->pc = 0x2DA864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA860u;
            // 0x2da864: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA868u; }
        if (ctx->pc != 0x2DA868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA868u; }
        if (ctx->pc != 0x2DA868u) { return; }
    }
    ctx->pc = 0x2DA868u;
label_2da868:
    // 0x2da868: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da868u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da86c:
    // 0x2da86c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2da870:
    if (ctx->pc == 0x2DA870u) {
        ctx->pc = 0x2DA874u;
        goto label_2da874;
    }
    ctx->pc = 0x2DA86Cu;
    {
        const bool branch_taken_0x2da86c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da86c) {
            ctx->pc = 0x2DA898u;
            goto label_2da898;
        }
    }
    ctx->pc = 0x2DA874u;
label_2da874:
    // 0x2da874: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2da878:
    // 0x2da878: 0xc0b6dbc  jal         func_2DB6F0
label_2da87c:
    if (ctx->pc == 0x2DA87Cu) {
        ctx->pc = 0x2DA87Cu;
            // 0x2da87c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA880u;
        goto label_2da880;
    }
    ctx->pc = 0x2DA878u;
    SET_GPR_U32(ctx, 31, 0x2DA880u);
    ctx->pc = 0x2DA87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA878u;
            // 0x2da87c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6F0u;
    if (runtime->hasFunction(0x2DB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA880u; }
        if (ctx->pc != 0x2DA880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6F0_0x2db6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA880u; }
        if (ctx->pc != 0x2DA880u) { return; }
    }
    ctx->pc = 0x2DA880u;
label_2da880:
    // 0x2da880: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2da880u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2da884:
    // 0x2da884: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2da884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da888:
    // 0x2da888: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2da888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da88c:
    // 0x2da88c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2da890:
    // 0x2da890: 0x320f809  jalr        $t9
label_2da894:
    if (ctx->pc == 0x2DA894u) {
        ctx->pc = 0x2DA894u;
            // 0x2da894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA898u;
        goto label_2da898;
    }
    ctx->pc = 0x2DA890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA898u);
        ctx->pc = 0x2DA894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA890u;
            // 0x2da894: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA898u; }
            if (ctx->pc != 0x2DA898u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA898u;
label_2da898:
    // 0x2da898: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x2da898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_2da89c:
    // 0x2da89c: 0xc0b6db8  jal         func_2DB6E0
label_2da8a0:
    if (ctx->pc == 0x2DA8A0u) {
        ctx->pc = 0x2DA8A0u;
            // 0x2da8a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2DA8A4u;
        goto label_2da8a4;
    }
    ctx->pc = 0x2DA89Cu;
    SET_GPR_U32(ctx, 31, 0x2DA8A4u);
    ctx->pc = 0x2DA8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA89Cu;
            // 0x2da8a0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8A4u; }
        if (ctx->pc != 0x2DA8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8A4u; }
        if (ctx->pc != 0x2DA8A4u) { return; }
    }
    ctx->pc = 0x2DA8A4u;
label_2da8a4:
    // 0x2da8a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2da8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2da8a8:
    // 0x2da8a8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2da8ac:
    if (ctx->pc == 0x2DA8ACu) {
        ctx->pc = 0x2DA8B0u;
        goto label_2da8b0;
    }
    ctx->pc = 0x2DA8A8u;
    {
        const bool branch_taken_0x2da8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da8a8) {
            ctx->pc = 0x2DA844u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da844;
        }
    }
    ctx->pc = 0x2DA8B0u;
label_2da8b0:
    // 0x2da8b0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2da8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2da8b4:
    // 0x2da8b4: 0xc0b6db8  jal         func_2DB6E0
label_2da8b8:
    if (ctx->pc == 0x2DA8B8u) {
        ctx->pc = 0x2DA8B8u;
            // 0x2da8b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8BCu;
        goto label_2da8bc;
    }
    ctx->pc = 0x2DA8B4u;
    SET_GPR_U32(ctx, 31, 0x2DA8BCu);
    ctx->pc = 0x2DA8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8B4u;
            // 0x2da8b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8BCu; }
        if (ctx->pc != 0x2DA8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8BCu; }
        if (ctx->pc != 0x2DA8BCu) { return; }
    }
    ctx->pc = 0x2DA8BCu;
label_2da8bc:
    // 0x2da8bc: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2da8c0:
    if (ctx->pc == 0x2DA8C0u) {
        ctx->pc = 0x2DA8C4u;
        goto label_2da8c4;
    }
    ctx->pc = 0x2DA8BCu;
    {
        const bool branch_taken_0x2da8bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da8bc) {
            ctx->pc = 0x2DA930u;
            goto label_2da930;
        }
    }
    ctx->pc = 0x2DA8C4u;
label_2da8c4:
    // 0x2da8c4: 0xc0b6dcc  jal         func_2DB730
label_2da8c8:
    if (ctx->pc == 0x2DA8C8u) {
        ctx->pc = 0x2DA8CCu;
        goto label_2da8cc;
    }
    ctx->pc = 0x2DA8C4u;
    SET_GPR_U32(ctx, 31, 0x2DA8CCu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8CCu; }
        if (ctx->pc != 0x2DA8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8CCu; }
        if (ctx->pc != 0x2DA8CCu) { return; }
    }
    ctx->pc = 0x2DA8CCu;
label_2da8cc:
    // 0x2da8cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da8d0:
    // 0x2da8d0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2da8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2da8d4:
    // 0x2da8d4: 0xc0b6dc8  jal         func_2DB720
label_2da8d8:
    if (ctx->pc == 0x2DA8D8u) {
        ctx->pc = 0x2DA8D8u;
            // 0x2da8d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8DCu;
        goto label_2da8dc;
    }
    ctx->pc = 0x2DA8D4u;
    SET_GPR_U32(ctx, 31, 0x2DA8DCu);
    ctx->pc = 0x2DA8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8D4u;
            // 0x2da8d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB720u;
    if (runtime->hasFunction(0x2DB720u)) {
        auto targetFn = runtime->lookupFunction(0x2DB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8DCu; }
        if (ctx->pc != 0x2DA8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB720_0x2db720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8DCu; }
        if (ctx->pc != 0x2DA8DCu) { return; }
    }
    ctx->pc = 0x2DA8DCu;
label_2da8dc:
    // 0x2da8dc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da8e0:
    // 0x2da8e0: 0xc0b6dc0  jal         func_2DB700
label_2da8e4:
    if (ctx->pc == 0x2DA8E4u) {
        ctx->pc = 0x2DA8E4u;
            // 0x2da8e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA8E8u;
        goto label_2da8e8;
    }
    ctx->pc = 0x2DA8E0u;
    SET_GPR_U32(ctx, 31, 0x2DA8E8u);
    ctx->pc = 0x2DA8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8E0u;
            // 0x2da8e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8E8u; }
        if (ctx->pc != 0x2DA8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA8E8u; }
        if (ctx->pc != 0x2DA8E8u) { return; }
    }
    ctx->pc = 0x2DA8E8u;
label_2da8e8:
    // 0x2da8e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2da8e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da8ec:
    // 0x2da8ec: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_2da8f0:
    if (ctx->pc == 0x2DA8F0u) {
        ctx->pc = 0x2DA8F4u;
        goto label_2da8f4;
    }
    ctx->pc = 0x2DA8ECu;
    {
        const bool branch_taken_0x2da8ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da8ec) {
            ctx->pc = 0x2DA918u;
            goto label_2da918;
        }
    }
    ctx->pc = 0x2DA8F4u;
label_2da8f4:
    // 0x2da8f4: 0x2604003c  addiu       $a0, $s0, 0x3C
    ctx->pc = 0x2da8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
label_2da8f8:
    // 0x2da8f8: 0xc0b6dbc  jal         func_2DB6F0
label_2da8fc:
    if (ctx->pc == 0x2DA8FCu) {
        ctx->pc = 0x2DA8FCu;
            // 0x2da8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA900u;
        goto label_2da900;
    }
    ctx->pc = 0x2DA8F8u;
    SET_GPR_U32(ctx, 31, 0x2DA900u);
    ctx->pc = 0x2DA8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA8F8u;
            // 0x2da8fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6F0u;
    if (runtime->hasFunction(0x2DB6F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA900u; }
        if (ctx->pc != 0x2DA900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6F0_0x2db6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA900u; }
        if (ctx->pc != 0x2DA900u) { return; }
    }
    ctx->pc = 0x2DA900u;
label_2da900:
    // 0x2da900: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2da900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2da904:
    // 0x2da904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2da904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da908:
    // 0x2da908: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2da908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da90c:
    // 0x2da90c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2da90cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2da910:
    // 0x2da910: 0x320f809  jalr        $t9
label_2da914:
    if (ctx->pc == 0x2DA914u) {
        ctx->pc = 0x2DA914u;
            // 0x2da914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA918u;
        goto label_2da918;
    }
    ctx->pc = 0x2DA910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA918u);
        ctx->pc = 0x2DA914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA910u;
            // 0x2da914: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA918u; }
            if (ctx->pc != 0x2DA918u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA918u;
label_2da918:
    // 0x2da918: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2da918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2da91c:
    // 0x2da91c: 0xc0b6db8  jal         func_2DB6E0
label_2da920:
    if (ctx->pc == 0x2DA920u) {
        ctx->pc = 0x2DA920u;
            // 0x2da920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x2DA924u;
        goto label_2da924;
    }
    ctx->pc = 0x2DA91Cu;
    SET_GPR_U32(ctx, 31, 0x2DA924u);
    ctx->pc = 0x2DA920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA91Cu;
            // 0x2da920: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA924u; }
        if (ctx->pc != 0x2DA924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA924u; }
        if (ctx->pc != 0x2DA924u) { return; }
    }
    ctx->pc = 0x2DA924u;
label_2da924:
    // 0x2da924: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x2da924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2da928:
    // 0x2da928: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2da92c:
    if (ctx->pc == 0x2DA92Cu) {
        ctx->pc = 0x2DA930u;
        goto label_2da930;
    }
    ctx->pc = 0x2DA928u;
    {
        const bool branch_taken_0x2da928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da928) {
            ctx->pc = 0x2DA8C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da8c4;
        }
    }
    ctx->pc = 0x2DA930u;
label_2da930:
    // 0x2da930: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2da930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2da934:
    // 0x2da934: 0xc0b6db8  jal         func_2DB6E0
label_2da938:
    if (ctx->pc == 0x2DA938u) {
        ctx->pc = 0x2DA938u;
            // 0x2da938: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA93Cu;
        goto label_2da93c;
    }
    ctx->pc = 0x2DA934u;
    SET_GPR_U32(ctx, 31, 0x2DA93Cu);
    ctx->pc = 0x2DA938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA934u;
            // 0x2da938: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA93Cu; }
        if (ctx->pc != 0x2DA93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA93Cu; }
        if (ctx->pc != 0x2DA93Cu) { return; }
    }
    ctx->pc = 0x2DA93Cu;
label_2da93c:
    // 0x2da93c: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_2da940:
    if (ctx->pc == 0x2DA940u) {
        ctx->pc = 0x2DA944u;
        goto label_2da944;
    }
    ctx->pc = 0x2DA93Cu;
    {
        const bool branch_taken_0x2da93c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2da93c) {
            ctx->pc = 0x2DA9A0u;
            goto label_2da9a0;
        }
    }
    ctx->pc = 0x2DA944u;
label_2da944:
    // 0x2da944: 0xc0b6dcc  jal         func_2DB730
label_2da948:
    if (ctx->pc == 0x2DA948u) {
        ctx->pc = 0x2DA94Cu;
        goto label_2da94c;
    }
    ctx->pc = 0x2DA944u;
    SET_GPR_U32(ctx, 31, 0x2DA94Cu);
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA94Cu; }
        if (ctx->pc != 0x2DA94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA94Cu; }
        if (ctx->pc != 0x2DA94Cu) { return; }
    }
    ctx->pc = 0x2DA94Cu;
label_2da94c:
    // 0x2da94c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2da94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da950:
    // 0x2da950: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2da950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2da954:
    // 0x2da954: 0xc0b6dc8  jal         func_2DB720
label_2da958:
    if (ctx->pc == 0x2DA958u) {
        ctx->pc = 0x2DA958u;
            // 0x2da958: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA95Cu;
        goto label_2da95c;
    }
    ctx->pc = 0x2DA954u;
    SET_GPR_U32(ctx, 31, 0x2DA95Cu);
    ctx->pc = 0x2DA958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA954u;
            // 0x2da958: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB720u;
    if (runtime->hasFunction(0x2DB720u)) {
        auto targetFn = runtime->lookupFunction(0x2DB720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA95Cu; }
        if (ctx->pc != 0x2DA95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB720_0x2db720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA95Cu; }
        if (ctx->pc != 0x2DA95Cu) { return; }
    }
    ctx->pc = 0x2DA95Cu;
label_2da95c:
    // 0x2da95c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2da95cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da960:
    // 0x2da960: 0xc0b6dc0  jal         func_2DB700
label_2da964:
    if (ctx->pc == 0x2DA964u) {
        ctx->pc = 0x2DA964u;
            // 0x2da964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA968u;
        goto label_2da968;
    }
    ctx->pc = 0x2DA960u;
    SET_GPR_U32(ctx, 31, 0x2DA968u);
    ctx->pc = 0x2DA964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA960u;
            // 0x2da964: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB700u;
    if (runtime->hasFunction(0x2DB700u)) {
        auto targetFn = runtime->lookupFunction(0x2DB700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA968u; }
        if (ctx->pc != 0x2DA968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB700_0x2db700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA968u; }
        if (ctx->pc != 0x2DA968u) { return; }
    }
    ctx->pc = 0x2DA968u;
label_2da968:
    // 0x2da968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2da96c:
    if (ctx->pc == 0x2DA96Cu) {
        ctx->pc = 0x2DA970u;
        goto label_2da970;
    }
    ctx->pc = 0x2DA968u;
    {
        const bool branch_taken_0x2da968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da968) {
            ctx->pc = 0x2DA988u;
            goto label_2da988;
        }
    }
    ctx->pc = 0x2DA970u;
label_2da970:
    // 0x2da970: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2da970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2da974:
    // 0x2da974: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da978:
    // 0x2da978: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2da978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2da97c:
    // 0x2da97c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2da97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2da980:
    // 0x2da980: 0x320f809  jalr        $t9
label_2da984:
    if (ctx->pc == 0x2DA984u) {
        ctx->pc = 0x2DA984u;
            // 0x2da984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA988u;
        goto label_2da988;
    }
    ctx->pc = 0x2DA980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DA988u);
        ctx->pc = 0x2DA984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA980u;
            // 0x2da984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DA988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DA988u; }
            if (ctx->pc != 0x2DA988u) { return; }
        }
        }
    }
    ctx->pc = 0x2DA988u;
label_2da988:
    // 0x2da988: 0x26040048  addiu       $a0, $s0, 0x48
    ctx->pc = 0x2da988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2da98c:
    // 0x2da98c: 0xc0b6db8  jal         func_2DB6E0
label_2da990:
    if (ctx->pc == 0x2DA990u) {
        ctx->pc = 0x2DA990u;
            // 0x2da990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2DA994u;
        goto label_2da994;
    }
    ctx->pc = 0x2DA98Cu;
    SET_GPR_U32(ctx, 31, 0x2DA994u);
    ctx->pc = 0x2DA990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA98Cu;
            // 0x2da990: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6E0u;
    if (runtime->hasFunction(0x2DB6E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA994u; }
        if (ctx->pc != 0x2DA994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6E0_0x2db6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA994u; }
        if (ctx->pc != 0x2DA994u) { return; }
    }
    ctx->pc = 0x2DA994u;
label_2da994:
    // 0x2da994: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2da994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2da998:
    // 0x2da998: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_2da99c:
    if (ctx->pc == 0x2DA99Cu) {
        ctx->pc = 0x2DA9A0u;
        goto label_2da9a0;
    }
    ctx->pc = 0x2DA998u;
    {
        const bool branch_taken_0x2da998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da998) {
            ctx->pc = 0x2DA944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2da944;
        }
    }
    ctx->pc = 0x2DA9A0u;
label_2da9a0:
    // 0x2da9a0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2da9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2da9a4:
    // 0x2da9a4: 0xc0b6de0  jal         func_2DB780
label_2da9a8:
    if (ctx->pc == 0x2DA9A8u) {
        ctx->pc = 0x2DA9A8u;
            // 0x2da9a8: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
        ctx->pc = 0x2DA9ACu;
        goto label_2da9ac;
    }
    ctx->pc = 0x2DA9A4u;
    SET_GPR_U32(ctx, 31, 0x2DA9ACu);
    ctx->pc = 0x2DA9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9A4u;
            // 0x2da9a8: 0x24841910  addiu       $a0, $a0, 0x1910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB780u;
    if (runtime->hasFunction(0x2DB780u)) {
        auto targetFn = runtime->lookupFunction(0x2DB780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9ACu; }
        if (ctx->pc != 0x2DA9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB780_0x2db780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9ACu; }
        if (ctx->pc != 0x2DA9ACu) { return; }
    }
    ctx->pc = 0x2DA9ACu;
label_2da9ac:
    // 0x2da9ac: 0x8ea302cc  lw          $v1, 0x2CC($s5)
    ctx->pc = 0x2da9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
label_2da9b0:
    // 0x2da9b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2da9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2da9b4:
    // 0x2da9b4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_2da9b8:
    if (ctx->pc == 0x2DA9B8u) {
        ctx->pc = 0x2DA9B8u;
            // 0x2da9b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9BCu;
        goto label_2da9bc;
    }
    ctx->pc = 0x2DA9B4u;
    {
        const bool branch_taken_0x2da9b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da9b4) {
            ctx->pc = 0x2DA9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9B4u;
            // 0x2da9b8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA9D4u;
            goto label_2da9d4;
        }
    }
    ctx->pc = 0x2DA9BCu;
label_2da9bc:
    // 0x2da9bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2da9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2da9c0:
    // 0x2da9c0: 0xc0b6db4  jal         func_2DB6D0
label_2da9c4:
    if (ctx->pc == 0x2DA9C4u) {
        ctx->pc = 0x2DA9C4u;
            // 0x2da9c4: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->pc = 0x2DA9C8u;
        goto label_2da9c8;
    }
    ctx->pc = 0x2DA9C0u;
    SET_GPR_U32(ctx, 31, 0x2DA9C8u);
    ctx->pc = 0x2DA9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9C0u;
            // 0x2da9c4: 0x27a503e0  addiu       $a1, $sp, 0x3E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6D0u;
    if (runtime->hasFunction(0x2DB6D0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9C8u; }
        if (ctx->pc != 0x2DA9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6D0_0x2db6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9C8u; }
        if (ctx->pc != 0x2DA9C8u) { return; }
    }
    ctx->pc = 0x2DA9C8u;
label_2da9c8:
    // 0x2da9c8: 0xc0b6db0  jal         func_2DB6C0
label_2da9cc:
    if (ctx->pc == 0x2DA9CCu) {
        ctx->pc = 0x2DA9CCu;
            // 0x2da9cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9D0u;
        goto label_2da9d0;
    }
    ctx->pc = 0x2DA9C8u;
    SET_GPR_U32(ctx, 31, 0x2DA9D0u);
    ctx->pc = 0x2DA9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9C8u;
            // 0x2da9cc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6C0u;
    if (runtime->hasFunction(0x2DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9D0u; }
        if (ctx->pc != 0x2DA9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6C0_0x2db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9D0u; }
        if (ctx->pc != 0x2DA9D0u) { return; }
    }
    ctx->pc = 0x2DA9D0u;
label_2da9d0:
    // 0x2da9d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2da9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2da9d4:
    // 0x2da9d4: 0xc077264  jal         func_1DC990
label_2da9d8:
    if (ctx->pc == 0x2DA9D8u) {
        ctx->pc = 0x2DA9DCu;
        goto label_2da9dc;
    }
    ctx->pc = 0x2DA9D4u;
    SET_GPR_U32(ctx, 31, 0x2DA9DCu);
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9DCu; }
        if (ctx->pc != 0x2DA9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9DCu; }
        if (ctx->pc != 0x2DA9DCu) { return; }
    }
    ctx->pc = 0x2DA9DCu;
label_2da9dc:
    // 0x2da9dc: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da9e0:
    // 0x2da9e0: 0xc0a5440  jal         func_295100
label_2da9e4:
    if (ctx->pc == 0x2DA9E4u) {
        ctx->pc = 0x2DA9E4u;
            // 0x2da9e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9E8u;
        goto label_2da9e8;
    }
    ctx->pc = 0x2DA9E0u;
    SET_GPR_U32(ctx, 31, 0x2DA9E8u);
    ctx->pc = 0x2DA9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9E0u;
            // 0x2da9e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9E8u; }
        if (ctx->pc != 0x2DA9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9E8u; }
        if (ctx->pc != 0x2DA9E8u) { return; }
    }
    ctx->pc = 0x2DA9E8u;
label_2da9e8:
    // 0x2da9e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2da9ec:
    // 0x2da9ec: 0xc0b6e90  jal         func_2DBA40
label_2da9f0:
    if (ctx->pc == 0x2DA9F0u) {
        ctx->pc = 0x2DA9F0u;
            // 0x2da9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DA9F4u;
        goto label_2da9f4;
    }
    ctx->pc = 0x2DA9ECu;
    SET_GPR_U32(ctx, 31, 0x2DA9F4u);
    ctx->pc = 0x2DA9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9ECu;
            // 0x2da9f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9F4u; }
        if (ctx->pc != 0x2DA9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA9F4u; }
        if (ctx->pc != 0x2DA9F4u) { return; }
    }
    ctx->pc = 0x2DA9F4u;
label_2da9f4:
    // 0x2da9f4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2da9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2da9f8:
    // 0x2da9f8: 0xc0a5440  jal         func_295100
label_2da9fc:
    if (ctx->pc == 0x2DA9FCu) {
        ctx->pc = 0x2DA9FCu;
            // 0x2da9fc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DAA00u;
        goto label_2daa00;
    }
    ctx->pc = 0x2DA9F8u;
    SET_GPR_U32(ctx, 31, 0x2DAA00u);
    ctx->pc = 0x2DA9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA9F8u;
            // 0x2da9fc: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA00u; }
        if (ctx->pc != 0x2DAA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA00u; }
        if (ctx->pc != 0x2DAA00u) { return; }
    }
    ctx->pc = 0x2DAA00u;
label_2daa00:
    // 0x2daa00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daa00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daa04:
    // 0x2daa04: 0xc0b6e90  jal         func_2DBA40
label_2daa08:
    if (ctx->pc == 0x2DAA08u) {
        ctx->pc = 0x2DAA08u;
            // 0x2daa08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DAA0Cu;
        goto label_2daa0c;
    }
    ctx->pc = 0x2DAA04u;
    SET_GPR_U32(ctx, 31, 0x2DAA0Cu);
    ctx->pc = 0x2DAA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA04u;
            // 0x2daa08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA0Cu; }
        if (ctx->pc != 0x2DAA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA0Cu; }
        if (ctx->pc != 0x2DAA0Cu) { return; }
    }
    ctx->pc = 0x2DAA0Cu;
label_2daa0c:
    // 0x2daa0c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x2daa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2daa10:
    // 0x2daa10: 0xc0a5440  jal         func_295100
label_2daa14:
    if (ctx->pc == 0x2DAA14u) {
        ctx->pc = 0x2DAA14u;
            // 0x2daa14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DAA18u;
        goto label_2daa18;
    }
    ctx->pc = 0x2DAA10u;
    SET_GPR_U32(ctx, 31, 0x2DAA18u);
    ctx->pc = 0x2DAA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA10u;
            // 0x2daa14: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA18u; }
        if (ctx->pc != 0x2DAA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA18u; }
        if (ctx->pc != 0x2DAA18u) { return; }
    }
    ctx->pc = 0x2DAA18u;
label_2daa18:
    // 0x2daa18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daa1c:
    // 0x2daa1c: 0xc0b6e90  jal         func_2DBA40
label_2daa20:
    if (ctx->pc == 0x2DAA20u) {
        ctx->pc = 0x2DAA20u;
            // 0x2daa20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DAA24u;
        goto label_2daa24;
    }
    ctx->pc = 0x2DAA1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAA24u);
    ctx->pc = 0x2DAA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA1Cu;
            // 0x2daa20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA40u;
    if (runtime->hasFunction(0x2DBA40u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA24u; }
        if (ctx->pc != 0x2DAA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA40_0x2dba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA24u; }
        if (ctx->pc != 0x2DAA24u) { return; }
    }
    ctx->pc = 0x2DAA24u;
label_2daa24:
    // 0x2daa24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2daa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2daa28:
    // 0x2daa28: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2daa28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2daa2c:
    // 0x2daa2c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2daa2cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2daa30:
    // 0x2daa30: 0xc04cbd8  jal         func_132F60
label_2daa34:
    if (ctx->pc == 0x2DAA34u) {
        ctx->pc = 0x2DAA34u;
            // 0x2daa34: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DAA38u;
        goto label_2daa38;
    }
    ctx->pc = 0x2DAA30u;
    SET_GPR_U32(ctx, 31, 0x2DAA38u);
    ctx->pc = 0x2DAA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA30u;
            // 0x2daa34: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA38u; }
        if (ctx->pc != 0x2DAA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA38u; }
        if (ctx->pc != 0x2DAA38u) { return; }
    }
    ctx->pc = 0x2DAA38u;
label_2daa38:
    // 0x2daa38: 0x8ea302cc  lw          $v1, 0x2CC($s5)
    ctx->pc = 0x2daa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
label_2daa3c:
    // 0x2daa3c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2daa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2daa40:
    // 0x2daa40: 0x54620050  bnel        $v1, $v0, . + 4 + (0x50 << 2)
label_2daa44:
    if (ctx->pc == 0x2DAA44u) {
        ctx->pc = 0x2DAA44u;
            // 0x2daa44: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x2DAA48u;
        goto label_2daa48;
    }
    ctx->pc = 0x2DAA40u;
    {
        const bool branch_taken_0x2daa40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2daa40) {
            ctx->pc = 0x2DAA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA40u;
            // 0x2daa44: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB84u;
            goto label_2dab84;
        }
    }
    ctx->pc = 0x2DAA48u;
label_2daa48:
    // 0x2daa48: 0xc0775b8  jal         func_1DD6E0
label_2daa4c:
    if (ctx->pc == 0x2DAA4Cu) {
        ctx->pc = 0x2DAA50u;
        goto label_2daa50;
    }
    ctx->pc = 0x2DAA48u;
    SET_GPR_U32(ctx, 31, 0x2DAA50u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA50u; }
        if (ctx->pc != 0x2DAA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA50u; }
        if (ctx->pc != 0x2DAA50u) { return; }
    }
    ctx->pc = 0x2DAA50u;
label_2daa50:
    // 0x2daa50: 0xc0b6e5c  jal         func_2DB970
label_2daa54:
    if (ctx->pc == 0x2DAA54u) {
        ctx->pc = 0x2DAA54u;
            // 0x2daa54: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2DAA58u;
        goto label_2daa58;
    }
    ctx->pc = 0x2DAA50u;
    SET_GPR_U32(ctx, 31, 0x2DAA58u);
    ctx->pc = 0x2DAA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA50u;
            // 0x2daa54: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB970u;
    if (runtime->hasFunction(0x2DB970u)) {
        auto targetFn = runtime->lookupFunction(0x2DB970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA58u; }
        if (ctx->pc != 0x2DAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB970_0x2db970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA58u; }
        if (ctx->pc != 0x2DAA58u) { return; }
    }
    ctx->pc = 0x2DAA58u;
label_2daa58:
    // 0x2daa58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2daa58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2daa5c:
    // 0x2daa5c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2daa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2daa60:
    // 0x2daa60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2daa60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2daa64:
    // 0x2daa64: 0x0  nop
    ctx->pc = 0x2daa64u;
    // NOP
label_2daa68:
    // 0x2daa68: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2daa68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_2daa6c:
    // 0x2daa6c: 0x0  nop
    ctx->pc = 0x2daa6cu;
    // NOP
label_2daa70:
    // 0x2daa70: 0x0  nop
    ctx->pc = 0x2daa70u;
    // NOP
label_2daa74:
    // 0x2daa74: 0xc0b6dac  jal         func_2DB6B0
label_2daa78:
    if (ctx->pc == 0x2DAA78u) {
        ctx->pc = 0x2DAA7Cu;
        goto label_2daa7c;
    }
    ctx->pc = 0x2DAA74u;
    SET_GPR_U32(ctx, 31, 0x2DAA7Cu);
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA7Cu; }
        if (ctx->pc != 0x2DAA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA7Cu; }
        if (ctx->pc != 0x2DAA7Cu) { return; }
    }
    ctx->pc = 0x2DAA7Cu;
label_2daa7c:
    // 0x2daa7c: 0xc0b6d98  jal         func_2DB660
label_2daa80:
    if (ctx->pc == 0x2DAA80u) {
        ctx->pc = 0x2DAA80u;
            // 0x2daa80: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2DAA84u;
        goto label_2daa84;
    }
    ctx->pc = 0x2DAA7Cu;
    SET_GPR_U32(ctx, 31, 0x2DAA84u);
    ctx->pc = 0x2DAA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA7Cu;
            // 0x2daa80: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB660u;
    if (runtime->hasFunction(0x2DB660u)) {
        auto targetFn = runtime->lookupFunction(0x2DB660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA84u; }
        if (ctx->pc != 0x2DAA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB660_0x2db660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA84u; }
        if (ctx->pc != 0x2DAA84u) { return; }
    }
    ctx->pc = 0x2DAA84u;
label_2daa84:
    // 0x2daa84: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2daa84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2daa88:
    // 0x2daa88: 0xc0a3414  jal         func_28D050
label_2daa8c:
    if (ctx->pc == 0x2DAA8Cu) {
        ctx->pc = 0x2DAA8Cu;
            // 0x2daa8c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x2DAA90u;
        goto label_2daa90;
    }
    ctx->pc = 0x2DAA88u;
    SET_GPR_U32(ctx, 31, 0x2DAA90u);
    ctx->pc = 0x2DAA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA88u;
            // 0x2daa8c: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D050u;
    if (runtime->hasFunction(0x28D050u)) {
        auto targetFn = runtime->lookupFunction(0x28D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA90u; }
        if (ctx->pc != 0x2DAA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D050_0x28d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA90u; }
        if (ctx->pc != 0x2DAA90u) { return; }
    }
    ctx->pc = 0x2DAA90u;
label_2daa90:
    // 0x2daa90: 0xc0b6e68  jal         func_2DB9A0
label_2daa94:
    if (ctx->pc == 0x2DAA94u) {
        ctx->pc = 0x2DAA94u;
            // 0x2daa94: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x2DAA98u;
        goto label_2daa98;
    }
    ctx->pc = 0x2DAA90u;
    SET_GPR_U32(ctx, 31, 0x2DAA98u);
    ctx->pc = 0x2DAA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAA90u;
            // 0x2daa94: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA98u; }
        if (ctx->pc != 0x2DAA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAA98u; }
        if (ctx->pc != 0x2DAA98u) { return; }
    }
    ctx->pc = 0x2DAA98u;
label_2daa98:
    // 0x2daa98: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2daa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2daa9c:
    // 0x2daa9c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2daa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_2daaa0:
    // 0x2daaa0: 0xc0a4660  jal         func_291980
label_2daaa4:
    if (ctx->pc == 0x2DAAA4u) {
        ctx->pc = 0x2DAAA4u;
            // 0x2daaa4: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x2DAAA8u;
        goto label_2daaa8;
    }
    ctx->pc = 0x2DAAA0u;
    SET_GPR_U32(ctx, 31, 0x2DAAA8u);
    ctx->pc = 0x2DAAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAA0u;
            // 0x2daaa4: 0x27a60220  addiu       $a2, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291980u;
    if (runtime->hasFunction(0x291980u)) {
        auto targetFn = runtime->lookupFunction(0x291980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAA8u; }
        if (ctx->pc != 0x2DAAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291980_0x291980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAA8u; }
        if (ctx->pc != 0x2DAAA8u) { return; }
    }
    ctx->pc = 0x2DAAA8u;
label_2daaa8:
    // 0x2daaa8: 0xc077588  jal         func_1DD620
label_2daaac:
    if (ctx->pc == 0x2DAAACu) {
        ctx->pc = 0x2DAAACu;
            // 0x2daaac: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2DAAB0u;
        goto label_2daab0;
    }
    ctx->pc = 0x2DAAA8u;
    SET_GPR_U32(ctx, 31, 0x2DAAB0u);
    ctx->pc = 0x2DAAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAA8u;
            // 0x2daaac: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAB0u; }
        if (ctx->pc != 0x2DAAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAB0u; }
        if (ctx->pc != 0x2DAAB0u) { return; }
    }
    ctx->pc = 0x2DAAB0u;
label_2daab0:
    // 0x2daab0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2daab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2daab4:
    // 0x2daab4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_2daab8:
    if (ctx->pc == 0x2DAAB8u) {
        ctx->pc = 0x2DAAB8u;
            // 0x2daab8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x2DAABCu;
        goto label_2daabc;
    }
    ctx->pc = 0x2DAAB4u;
    {
        const bool branch_taken_0x2daab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daab4) {
            ctx->pc = 0x2DAAB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAB4u;
            // 0x2daab8: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DAB18u;
            goto label_2dab18;
        }
    }
    ctx->pc = 0x2DAABCu;
label_2daabc:
    // 0x2daabc: 0xc0770c0  jal         func_1DC300
label_2daac0:
    if (ctx->pc == 0x2DAAC0u) {
        ctx->pc = 0x2DAAC0u;
            // 0x2daac0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x2DAAC4u;
        goto label_2daac4;
    }
    ctx->pc = 0x2DAABCu;
    SET_GPR_U32(ctx, 31, 0x2DAAC4u);
    ctx->pc = 0x2DAAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAABCu;
            // 0x2daac0: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAC4u; }
        if (ctx->pc != 0x2DAAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAC4u; }
        if (ctx->pc != 0x2DAAC4u) { return; }
    }
    ctx->pc = 0x2DAAC4u;
label_2daac4:
    // 0x2daac4: 0xc0b6d94  jal         func_2DB650
label_2daac8:
    if (ctx->pc == 0x2DAAC8u) {
        ctx->pc = 0x2DAAC8u;
            // 0x2daac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAACCu;
        goto label_2daacc;
    }
    ctx->pc = 0x2DAAC4u;
    SET_GPR_U32(ctx, 31, 0x2DAACCu);
    ctx->pc = 0x2DAAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAC4u;
            // 0x2daac8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB650u;
    if (runtime->hasFunction(0x2DB650u)) {
        auto targetFn = runtime->lookupFunction(0x2DB650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAACCu; }
        if (ctx->pc != 0x2DAACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB650_0x2db650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAACCu; }
        if (ctx->pc != 0x2DAACCu) { return; }
    }
    ctx->pc = 0x2DAACCu;
label_2daacc:
    // 0x2daacc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2daaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2daad0:
    // 0x2daad0: 0xc0b6e60  jal         func_2DB980
label_2daad4:
    if (ctx->pc == 0x2DAAD4u) {
        ctx->pc = 0x2DAAD4u;
            // 0x2daad4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAAD8u;
        goto label_2daad8;
    }
    ctx->pc = 0x2DAAD0u;
    SET_GPR_U32(ctx, 31, 0x2DAAD8u);
    ctx->pc = 0x2DAAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAD0u;
            // 0x2daad4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB980u;
    if (runtime->hasFunction(0x2DB980u)) {
        auto targetFn = runtime->lookupFunction(0x2DB980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAD8u; }
        if (ctx->pc != 0x2DAAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB980_0x2db980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAD8u; }
        if (ctx->pc != 0x2DAAD8u) { return; }
    }
    ctx->pc = 0x2DAAD8u;
label_2daad8:
    // 0x2daad8: 0xc0b6e38  jal         func_2DB8E0
label_2daadc:
    if (ctx->pc == 0x2DAADCu) {
        ctx->pc = 0x2DAADCu;
            // 0x2daadc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x2DAAE0u;
        goto label_2daae0;
    }
    ctx->pc = 0x2DAAD8u;
    SET_GPR_U32(ctx, 31, 0x2DAAE0u);
    ctx->pc = 0x2DAADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAD8u;
            // 0x2daadc: 0x2444000c  addiu       $a0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8E0u;
    if (runtime->hasFunction(0x2DB8E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAE0u; }
        if (ctx->pc != 0x2DAAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8E0_0x2db8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAE0u; }
        if (ctx->pc != 0x2DAAE0u) { return; }
    }
    ctx->pc = 0x2DAAE0u;
label_2daae0:
    // 0x2daae0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2daae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2daae4:
    // 0x2daae4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2daae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2daae8:
    // 0x2daae8: 0xc04cc70  jal         func_1331C0
label_2daaec:
    if (ctx->pc == 0x2DAAECu) {
        ctx->pc = 0x2DAAECu;
            // 0x2daaec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2DAAF0u;
        goto label_2daaf0;
    }
    ctx->pc = 0x2DAAE8u;
    SET_GPR_U32(ctx, 31, 0x2DAAF0u);
    ctx->pc = 0x2DAAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAAE8u;
            // 0x2daaec: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAF0u; }
        if (ctx->pc != 0x2DAAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAAF0u; }
        if (ctx->pc != 0x2DAAF0u) { return; }
    }
    ctx->pc = 0x2DAAF0u;
label_2daaf0:
    // 0x2daaf0: 0xc7ac01a0  lwc1        $f12, 0x1A0($sp)
    ctx->pc = 0x2daaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2daaf4:
    // 0x2daaf4: 0xc7ad01a4  lwc1        $f13, 0x1A4($sp)
    ctx->pc = 0x2daaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2daaf8:
    // 0x2daaf8: 0xc7ae01a8  lwc1        $f14, 0x1A8($sp)
    ctx->pc = 0x2daaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2daafc:
    // 0x2daafc: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x2daafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2dab00:
    // 0x2dab00: 0xc0b6df0  jal         func_2DB7C0
label_2dab04:
    if (ctx->pc == 0x2DAB04u) {
        ctx->pc = 0x2DAB04u;
            // 0x2dab04: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2DAB08u;
        goto label_2dab08;
    }
    ctx->pc = 0x2DAB00u;
    SET_GPR_U32(ctx, 31, 0x2DAB08u);
    ctx->pc = 0x2DAB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB00u;
            // 0x2dab04: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB08u; }
        if (ctx->pc != 0x2DAB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB08u; }
        if (ctx->pc != 0x2DAB08u) { return; }
    }
    ctx->pc = 0x2DAB08u;
label_2dab08:
    // 0x2dab08: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x2dab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_2dab0c:
    // 0x2dab0c: 0xc0b6e00  jal         func_2DB800
label_2dab10:
    if (ctx->pc == 0x2DAB10u) {
        ctx->pc = 0x2DAB10u;
            // 0x2dab10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB14u;
        goto label_2dab14;
    }
    ctx->pc = 0x2DAB0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB14u);
    ctx->pc = 0x2DAB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB0Cu;
            // 0x2dab10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB800u;
    if (runtime->hasFunction(0x2DB800u)) {
        auto targetFn = runtime->lookupFunction(0x2DB800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB14u; }
        if (ctx->pc != 0x2DAB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB800_0x2db800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB14u; }
        if (ctx->pc != 0x2DAB14u) { return; }
    }
    ctx->pc = 0x2DAB14u;
label_2dab14:
    // 0x2dab14: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2dab14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2dab18:
    // 0x2dab18: 0xc0b6d90  jal         func_2DB640
label_2dab1c:
    if (ctx->pc == 0x2DAB1Cu) {
        ctx->pc = 0x2DAB1Cu;
            // 0x2dab1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB20u;
        goto label_2dab20;
    }
    ctx->pc = 0x2DAB18u;
    SET_GPR_U32(ctx, 31, 0x2DAB20u);
    ctx->pc = 0x2DAB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB18u;
            // 0x2dab1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB20u; }
        if (ctx->pc != 0x2DAB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB20u; }
        if (ctx->pc != 0x2DAB20u) { return; }
    }
    ctx->pc = 0x2DAB20u;
label_2dab20:
    // 0x2dab20: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2dab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dab24:
    // 0x2dab24: 0xc077264  jal         func_1DC990
label_2dab28:
    if (ctx->pc == 0x2DAB28u) {
        ctx->pc = 0x2DAB28u;
            // 0x2dab28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB2Cu;
        goto label_2dab2c;
    }
    ctx->pc = 0x2DAB24u;
    SET_GPR_U32(ctx, 31, 0x2DAB2Cu);
    ctx->pc = 0x2DAB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB24u;
            // 0x2dab28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB2Cu; }
        if (ctx->pc != 0x2DAB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB2Cu; }
        if (ctx->pc != 0x2DAB2Cu) { return; }
    }
    ctx->pc = 0x2DAB2Cu;
label_2dab2c:
    // 0x2dab2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2dab2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dab30:
    // 0x2dab30: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2dab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2dab34:
    // 0x2dab34: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dab38:
    // 0x2dab38: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2dab38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dab3c:
    // 0x2dab3c: 0xc0b6d90  jal         func_2DB640
label_2dab40:
    if (ctx->pc == 0x2DAB40u) {
        ctx->pc = 0x2DAB40u;
            // 0x2dab40: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2DAB44u;
        goto label_2dab44;
    }
    ctx->pc = 0x2DAB3Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB44u);
    ctx->pc = 0x2DAB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB3Cu;
            // 0x2dab40: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB44u; }
        if (ctx->pc != 0x2DAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB44u; }
        if (ctx->pc != 0x2DAB44u) { return; }
    }
    ctx->pc = 0x2DAB44u;
label_2dab44:
    // 0x2dab44: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2dab44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dab48:
    // 0x2dab48: 0xc077264  jal         func_1DC990
label_2dab4c:
    if (ctx->pc == 0x2DAB4Cu) {
        ctx->pc = 0x2DAB4Cu;
            // 0x2dab4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB50u;
        goto label_2dab50;
    }
    ctx->pc = 0x2DAB48u;
    SET_GPR_U32(ctx, 31, 0x2DAB50u);
    ctx->pc = 0x2DAB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB48u;
            // 0x2dab4c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB50u; }
        if (ctx->pc != 0x2DAB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB50u; }
        if (ctx->pc != 0x2DAB50u) { return; }
    }
    ctx->pc = 0x2DAB50u;
label_2dab50:
    // 0x2dab50: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dab54:
    // 0x2dab54: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2dab54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2dab58:
    // 0x2dab58: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2dab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dab5c:
    // 0x2dab5c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2dab5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dab60:
    // 0x2dab60: 0xc0b6d90  jal         func_2DB640
label_2dab64:
    if (ctx->pc == 0x2DAB64u) {
        ctx->pc = 0x2DAB64u;
            // 0x2dab64: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->pc = 0x2DAB68u;
        goto label_2dab68;
    }
    ctx->pc = 0x2DAB60u;
    SET_GPR_U32(ctx, 31, 0x2DAB68u);
    ctx->pc = 0x2DAB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB60u;
            // 0x2dab64: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB68u; }
        if (ctx->pc != 0x2DAB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB68u; }
        if (ctx->pc != 0x2DAB68u) { return; }
    }
    ctx->pc = 0x2DAB68u;
label_2dab68:
    // 0x2dab68: 0xc4540000  lwc1        $f20, 0x0($v0)
    ctx->pc = 0x2dab68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2dab6c:
    // 0x2dab6c: 0xc077264  jal         func_1DC990
label_2dab70:
    if (ctx->pc == 0x2DAB70u) {
        ctx->pc = 0x2DAB70u;
            // 0x2dab70: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB74u;
        goto label_2dab74;
    }
    ctx->pc = 0x2DAB6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB74u);
    ctx->pc = 0x2DAB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB6Cu;
            // 0x2dab70: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB74u; }
        if (ctx->pc != 0x2DAB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB74u; }
        if (ctx->pc != 0x2DAB74u) { return; }
    }
    ctx->pc = 0x2DAB74u;
label_2dab74:
    // 0x2dab74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dab78:
    // 0x2dab78: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2dab78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2dab7c:
    // 0x2dab7c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2dab7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2dab80:
    // 0x2dab80: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2dab80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_2dab84:
    // 0x2dab84: 0xc0b6d60  jal         func_2DB580
label_2dab88:
    if (ctx->pc == 0x2DAB88u) {
        ctx->pc = 0x2DAB88u;
            // 0x2dab88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DAB8Cu;
        goto label_2dab8c;
    }
    ctx->pc = 0x2DAB84u;
    SET_GPR_U32(ctx, 31, 0x2DAB8Cu);
    ctx->pc = 0x2DAB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB84u;
            // 0x2dab88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB580u;
    if (runtime->hasFunction(0x2DB580u)) {
        auto targetFn = runtime->lookupFunction(0x2DB580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB8Cu; }
        if (ctx->pc != 0x2DAB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB580_0x2db580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB8Cu; }
        if (ctx->pc != 0x2DAB8Cu) { return; }
    }
    ctx->pc = 0x2DAB8Cu;
label_2dab8c:
    // 0x2dab8c: 0xc0b6e8c  jal         func_2DBA30
label_2dab90:
    if (ctx->pc == 0x2DAB90u) {
        ctx->pc = 0x2DAB90u;
            // 0x2dab90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAB94u;
        goto label_2dab94;
    }
    ctx->pc = 0x2DAB8Cu;
    SET_GPR_U32(ctx, 31, 0x2DAB94u);
    ctx->pc = 0x2DAB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB8Cu;
            // 0x2dab90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DBA30u;
    if (runtime->hasFunction(0x2DBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2DBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB94u; }
        if (ctx->pc != 0x2DAB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DBA30_0x2dba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAB94u; }
        if (ctx->pc != 0x2DAB94u) { return; }
    }
    ctx->pc = 0x2DAB94u;
label_2dab94:
    // 0x2dab94: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2dab94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dab98:
    // 0x2dab98: 0xc0b6d5c  jal         func_2DB570
label_2dab9c:
    if (ctx->pc == 0x2DAB9Cu) {
        ctx->pc = 0x2DAB9Cu;
            // 0x2dab9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABA0u;
        goto label_2daba0;
    }
    ctx->pc = 0x2DAB98u;
    SET_GPR_U32(ctx, 31, 0x2DABA0u);
    ctx->pc = 0x2DAB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAB98u;
            // 0x2dab9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABA0u; }
        if (ctx->pc != 0x2DABA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABA0u; }
        if (ctx->pc != 0x2DABA0u) { return; }
    }
    ctx->pc = 0x2DABA0u;
label_2daba0:
    // 0x2daba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2daba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daba4:
    // 0x2daba4: 0xc077264  jal         func_1DC990
label_2daba8:
    if (ctx->pc == 0x2DABA8u) {
        ctx->pc = 0x2DABA8u;
            // 0x2daba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABACu;
        goto label_2dabac;
    }
    ctx->pc = 0x2DABA4u;
    SET_GPR_U32(ctx, 31, 0x2DABACu);
    ctx->pc = 0x2DABA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABA4u;
            // 0x2daba8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABACu; }
        if (ctx->pc != 0x2DABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABACu; }
        if (ctx->pc != 0x2DABACu) { return; }
    }
    ctx->pc = 0x2DABACu;
label_2dabac:
    // 0x2dabac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2dabacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dabb0:
    // 0x2dabb0: 0xc0b6d58  jal         func_2DB560
label_2dabb4:
    if (ctx->pc == 0x2DABB4u) {
        ctx->pc = 0x2DABB4u;
            // 0x2dabb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABB8u;
        goto label_2dabb8;
    }
    ctx->pc = 0x2DABB0u;
    SET_GPR_U32(ctx, 31, 0x2DABB8u);
    ctx->pc = 0x2DABB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABB0u;
            // 0x2dabb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB560u;
    if (runtime->hasFunction(0x2DB560u)) {
        auto targetFn = runtime->lookupFunction(0x2DB560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABB8u; }
        if (ctx->pc != 0x2DABB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB560_0x2db560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABB8u; }
        if (ctx->pc != 0x2DABB8u) { return; }
    }
    ctx->pc = 0x2DABB8u;
label_2dabb8:
    // 0x2dabb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dabb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dabbc:
    // 0x2dabbc: 0xc077588  jal         func_1DD620
label_2dabc0:
    if (ctx->pc == 0x2DABC0u) {
        ctx->pc = 0x2DABC0u;
            // 0x2dabc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DABC4u;
        goto label_2dabc4;
    }
    ctx->pc = 0x2DABBCu;
    SET_GPR_U32(ctx, 31, 0x2DABC4u);
    ctx->pc = 0x2DABC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABBCu;
            // 0x2dabc0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD620u;
    if (runtime->hasFunction(0x1DD620u)) {
        auto targetFn = runtime->lookupFunction(0x1DD620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABC4u; }
        if (ctx->pc != 0x2DABC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD620_0x1dd620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DABC4u; }
        if (ctx->pc != 0x2DABC4u) { return; }
    }
    ctx->pc = 0x2DABC4u;
label_2dabc4:
    // 0x2dabc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dabc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dabc8:
    // 0x2dabc8: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x2dabc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_2dabcc:
    // 0x2dabcc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2dabccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2dabd0:
    // 0x2dabd0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_2dabd4:
    if (ctx->pc == 0x2DABD4u) {
        ctx->pc = 0x2DABD4u;
            // 0x2dabd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x2DABD8u;
        goto label_2dabd8;
    }
    ctx->pc = 0x2DABD0u;
    {
        const bool branch_taken_0x2dabd0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2dabd0) {
            ctx->pc = 0x2DABD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABD0u;
            // 0x2dabd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DABE4u;
            goto label_2dabe4;
        }
    }
    ctx->pc = 0x2DABD8u;
label_2dabd8:
    // 0x2dabd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2dabd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dabdc:
    // 0x2dabdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2dabe0:
    if (ctx->pc == 0x2DABE0u) {
        ctx->pc = 0x2DABE0u;
            // 0x2dabe0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2DABE4u;
        goto label_2dabe4;
    }
    ctx->pc = 0x2DABDCu;
    {
        const bool branch_taken_0x2dabdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DABE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABDCu;
            // 0x2dabe0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dabdc) {
            ctx->pc = 0x2DABFCu;
            goto label_2dabfc;
        }
    }
    ctx->pc = 0x2DABE4u;
label_2dabe4:
    // 0x2dabe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2dabe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2dabe8:
    // 0x2dabe8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2dabe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2dabec:
    // 0x2dabec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2dabecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dabf0:
    // 0x2dabf0: 0x0  nop
    ctx->pc = 0x2dabf0u;
    // NOP
label_2dabf4:
    // 0x2dabf4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x2dabf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2dabf8:
    // 0x2dabf8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2dabf8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2dabfc:
    // 0x2dabfc: 0xc077570  jal         func_1DD5C0
label_2dac00:
    if (ctx->pc == 0x2DAC00u) {
        ctx->pc = 0x2DAC00u;
            // 0x2dac00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC04u;
        goto label_2dac04;
    }
    ctx->pc = 0x2DABFCu;
    SET_GPR_U32(ctx, 31, 0x2DAC04u);
    ctx->pc = 0x2DAC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DABFCu;
            // 0x2dac00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5C0u;
    if (runtime->hasFunction(0x1DD5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC04u; }
        if (ctx->pc != 0x2DAC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5C0_0x1dd5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC04u; }
        if (ctx->pc != 0x2DAC04u) { return; }
    }
    ctx->pc = 0x2DAC04u;
label_2dac04:
    // 0x2dac04: 0xc0b6d54  jal         func_2DB550
label_2dac08:
    if (ctx->pc == 0x2DAC08u) {
        ctx->pc = 0x2DAC08u;
            // 0x2dac08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC0Cu;
        goto label_2dac0c;
    }
    ctx->pc = 0x2DAC04u;
    SET_GPR_U32(ctx, 31, 0x2DAC0Cu);
    ctx->pc = 0x2DAC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC04u;
            // 0x2dac08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB550u;
    if (runtime->hasFunction(0x2DB550u)) {
        auto targetFn = runtime->lookupFunction(0x2DB550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC0Cu; }
        if (ctx->pc != 0x2DAC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB550_0x2db550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC0Cu; }
        if (ctx->pc != 0x2DAC0Cu) { return; }
    }
    ctx->pc = 0x2DAC0Cu;
label_2dac0c:
    // 0x2dac0c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dac10:
    // 0x2dac10: 0x10430010  beq         $v0, $v1, . + 4 + (0x10 << 2)
label_2dac14:
    if (ctx->pc == 0x2DAC14u) {
        ctx->pc = 0x2DAC18u;
        goto label_2dac18;
    }
    ctx->pc = 0x2DAC10u;
    {
        const bool branch_taken_0x2dac10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dac10) {
            ctx->pc = 0x2DAC54u;
            goto label_2dac54;
        }
    }
    ctx->pc = 0x2DAC18u;
label_2dac18:
    // 0x2dac18: 0xc077574  jal         func_1DD5D0
label_2dac1c:
    if (ctx->pc == 0x2DAC1Cu) {
        ctx->pc = 0x2DAC1Cu;
            // 0x2dac1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC20u;
        goto label_2dac20;
    }
    ctx->pc = 0x2DAC18u;
    SET_GPR_U32(ctx, 31, 0x2DAC20u);
    ctx->pc = 0x2DAC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC18u;
            // 0x2dac1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC20u; }
        if (ctx->pc != 0x2DAC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC20u; }
        if (ctx->pc != 0x2DAC20u) { return; }
    }
    ctx->pc = 0x2DAC20u;
label_2dac20:
    // 0x2dac20: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2dac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2dac24:
    // 0x2dac24: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_2dac28:
    if (ctx->pc == 0x2DAC28u) {
        ctx->pc = 0x2DAC2Cu;
        goto label_2dac2c;
    }
    ctx->pc = 0x2DAC24u;
    {
        const bool branch_taken_0x2dac24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dac24) {
            ctx->pc = 0x2DAC54u;
            goto label_2dac54;
        }
    }
    ctx->pc = 0x2DAC2Cu;
label_2dac2c:
    // 0x2dac2c: 0xc077574  jal         func_1DD5D0
label_2dac30:
    if (ctx->pc == 0x2DAC30u) {
        ctx->pc = 0x2DAC30u;
            // 0x2dac30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC34u;
        goto label_2dac34;
    }
    ctx->pc = 0x2DAC2Cu;
    SET_GPR_U32(ctx, 31, 0x2DAC34u);
    ctx->pc = 0x2DAC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC2Cu;
            // 0x2dac30: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC34u; }
        if (ctx->pc != 0x2DAC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC34u; }
        if (ctx->pc != 0x2DAC34u) { return; }
    }
    ctx->pc = 0x2DAC34u;
label_2dac34:
    // 0x2dac34: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2dac34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2dac38:
    // 0x2dac38: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_2dac3c:
    if (ctx->pc == 0x2DAC3Cu) {
        ctx->pc = 0x2DAC40u;
        goto label_2dac40;
    }
    ctx->pc = 0x2DAC38u;
    {
        const bool branch_taken_0x2dac38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dac38) {
            ctx->pc = 0x2DAC54u;
            goto label_2dac54;
        }
    }
    ctx->pc = 0x2DAC40u;
label_2dac40:
    // 0x2dac40: 0xc077574  jal         func_1DD5D0
label_2dac44:
    if (ctx->pc == 0x2DAC44u) {
        ctx->pc = 0x2DAC44u;
            // 0x2dac44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAC48u;
        goto label_2dac48;
    }
    ctx->pc = 0x2DAC40u;
    SET_GPR_U32(ctx, 31, 0x2DAC48u);
    ctx->pc = 0x2DAC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC40u;
            // 0x2dac44: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC48u; }
        if (ctx->pc != 0x2DAC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC48u; }
        if (ctx->pc != 0x2DAC48u) { return; }
    }
    ctx->pc = 0x2DAC48u;
label_2dac48:
    // 0x2dac48: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2dac48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2dac4c:
    // 0x2dac4c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_2dac50:
    if (ctx->pc == 0x2DAC50u) {
        ctx->pc = 0x2DAC50u;
            // 0x2dac50: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DAC54u;
        goto label_2dac54;
    }
    ctx->pc = 0x2DAC4Cu;
    {
        const bool branch_taken_0x2dac4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dac4c) {
            ctx->pc = 0x2DAC50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC4Cu;
            // 0x2dac50: 0xc6010000  lwc1        $f1, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DAC74u;
            goto label_2dac74;
        }
    }
    ctx->pc = 0x2DAC54u;
label_2dac54:
    // 0x2dac54: 0xc0775b8  jal         func_1DD6E0
label_2dac58:
    if (ctx->pc == 0x2DAC58u) {
        ctx->pc = 0x2DAC5Cu;
        goto label_2dac5c;
    }
    ctx->pc = 0x2DAC54u;
    SET_GPR_U32(ctx, 31, 0x2DAC5Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC5Cu; }
        if (ctx->pc != 0x2DAC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC5Cu; }
        if (ctx->pc != 0x2DAC5Cu) { return; }
    }
    ctx->pc = 0x2DAC5Cu;
label_2dac5c:
    // 0x2dac5c: 0xc0775b4  jal         func_1DD6D0
label_2dac60:
    if (ctx->pc == 0x2DAC60u) {
        ctx->pc = 0x2DAC60u;
            // 0x2dac60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2DAC64u;
        goto label_2dac64;
    }
    ctx->pc = 0x2DAC5Cu;
    SET_GPR_U32(ctx, 31, 0x2DAC64u);
    ctx->pc = 0x2DAC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC5Cu;
            // 0x2dac60: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC64u; }
        if (ctx->pc != 0x2DAC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC64u; }
        if (ctx->pc != 0x2DAC64u) { return; }
    }
    ctx->pc = 0x2DAC64u;
label_2dac64:
    // 0x2dac64: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2dac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dac68:
    // 0x2dac68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2dac68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2dac6c:
    // 0x2dac6c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2dac6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2dac70:
    // 0x2dac70: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2dac70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dac74:
    // 0x2dac74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dac74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dac78:
    // 0x2dac78: 0x0  nop
    ctx->pc = 0x2dac78u;
    // NOP
label_2dac7c:
    // 0x2dac7c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2dac7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2dac80:
    // 0x2dac80: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2dac80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2dac84:
    // 0x2dac84: 0xc6a102c0  lwc1        $f1, 0x2C0($s5)
    ctx->pc = 0x2dac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dac88:
    // 0x2dac88: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dac88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dac8c:
    // 0x2dac8c: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
label_2dac90:
    if (ctx->pc == 0x2DAC90u) {
        ctx->pc = 0x2DAC90u;
            // 0x2dac90: 0x8ea402cc  lw          $a0, 0x2CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
        ctx->pc = 0x2DAC94u;
        goto label_2dac94;
    }
    ctx->pc = 0x2DAC8Cu;
    {
        const bool branch_taken_0x2dac8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dac8c) {
            ctx->pc = 0x2DAC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC8Cu;
            // 0x2dac90: 0x8ea402cc  lw          $a0, 0x2CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DACC8u;
            goto label_2dacc8;
        }
    }
    ctx->pc = 0x2DAC94u;
label_2dac94:
    // 0x2dac94: 0xc0775b8  jal         func_1DD6E0
label_2dac98:
    if (ctx->pc == 0x2DAC98u) {
        ctx->pc = 0x2DAC9Cu;
        goto label_2dac9c;
    }
    ctx->pc = 0x2DAC94u;
    SET_GPR_U32(ctx, 31, 0x2DAC9Cu);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC9Cu; }
        if (ctx->pc != 0x2DAC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAC9Cu; }
        if (ctx->pc != 0x2DAC9Cu) { return; }
    }
    ctx->pc = 0x2DAC9Cu;
label_2dac9c:
    // 0x2dac9c: 0xc0775b4  jal         func_1DD6D0
label_2daca0:
    if (ctx->pc == 0x2DACA0u) {
        ctx->pc = 0x2DACA0u;
            // 0x2daca0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2DACA4u;
        goto label_2daca4;
    }
    ctx->pc = 0x2DAC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DACA4u);
    ctx->pc = 0x2DACA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAC9Cu;
            // 0x2daca0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DACA4u; }
        if (ctx->pc != 0x2DACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DACA4u; }
        if (ctx->pc != 0x2DACA4u) { return; }
    }
    ctx->pc = 0x2DACA4u;
label_2daca4:
    // 0x2daca4: 0xc6a202c0  lwc1        $f2, 0x2C0($s5)
    ctx->pc = 0x2daca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2daca8:
    // 0x2daca8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2daca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dacac:
    // 0x2dacac: 0x0  nop
    ctx->pc = 0x2dacacu;
    // NOP
label_2dacb0:
    // 0x2dacb0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2dacb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2dacb4:
    // 0x2dacb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2dacb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dacb8:
    // 0x2dacb8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dacbc:
    if (ctx->pc == 0x2DACBCu) {
        ctx->pc = 0x2DACBCu;
            // 0x2dacbc: 0xe6a002c0  swc1        $f0, 0x2C0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 704), bits); }
        ctx->pc = 0x2DACC0u;
        goto label_2dacc0;
    }
    ctx->pc = 0x2DACB8u;
    {
        const bool branch_taken_0x2dacb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DACBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACB8u;
            // 0x2dacbc: 0xe6a002c0  swc1        $f0, 0x2C0($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dacb8) {
            ctx->pc = 0x2DACC4u;
            goto label_2dacc4;
        }
    }
    ctx->pc = 0x2DACC0u;
label_2dacc0:
    // 0x2dacc0: 0xe6a102c0  swc1        $f1, 0x2C0($s5)
    ctx->pc = 0x2dacc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 704), bits); }
label_2dacc4:
    // 0x2dacc4: 0x8ea402cc  lw          $a0, 0x2CC($s5)
    ctx->pc = 0x2dacc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
label_2dacc8:
    // 0x2dacc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dacc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2daccc:
    // 0x2daccc: 0x5083017c  beql        $a0, $v1, . + 4 + (0x17C << 2)
label_2dacd0:
    if (ctx->pc == 0x2DACD0u) {
        ctx->pc = 0x2DACD0u;
            // 0x2dacd0: 0x8ea502cc  lw          $a1, 0x2CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
        ctx->pc = 0x2DACD4u;
        goto label_2dacd4;
    }
    ctx->pc = 0x2DACCCu;
    {
        const bool branch_taken_0x2daccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2daccc) {
            ctx->pc = 0x2DACD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACCCu;
            // 0x2dacd0: 0x8ea502cc  lw          $a1, 0x2CC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2C0u;
            goto label_2db2c0;
        }
    }
    ctx->pc = 0x2DACD4u;
label_2dacd4:
    // 0x2dacd4: 0xc0b6d50  jal         func_2DB540
label_2dacd8:
    if (ctx->pc == 0x2DACD8u) {
        ctx->pc = 0x2DACD8u;
            // 0x2dacd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DACDCu;
        goto label_2dacdc;
    }
    ctx->pc = 0x2DACD4u;
    SET_GPR_U32(ctx, 31, 0x2DACDCu);
    ctx->pc = 0x2DACD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACD4u;
            // 0x2dacd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB540u;
    if (runtime->hasFunction(0x2DB540u)) {
        auto targetFn = runtime->lookupFunction(0x2DB540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DACDCu; }
        if (ctx->pc != 0x2DACDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB540_0x2db540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DACDCu; }
        if (ctx->pc != 0x2DACDCu) { return; }
    }
    ctx->pc = 0x2DACDCu;
label_2dacdc:
    // 0x2dacdc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2dacdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2dace0:
    // 0x2dace0: 0x504300fc  beql        $v0, $v1, . + 4 + (0xFC << 2)
label_2dace4:
    if (ctx->pc == 0x2DACE4u) {
        ctx->pc = 0x2DACE4u;
            // 0x2dace4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x2DACE8u;
        goto label_2dace8;
    }
    ctx->pc = 0x2DACE0u;
    {
        const bool branch_taken_0x2dace0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dace0) {
            ctx->pc = 0x2DACE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACE0u;
            // 0x2dace4: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0D4u;
            goto label_2db0d4;
        }
    }
    ctx->pc = 0x2DACE8u;
label_2dace8:
    // 0x2dace8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2dace8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2dacec:
    // 0x2dacec: 0x104300f8  beq         $v0, $v1, . + 4 + (0xF8 << 2)
label_2dacf0:
    if (ctx->pc == 0x2DACF0u) {
        ctx->pc = 0x2DACF4u;
        goto label_2dacf4;
    }
    ctx->pc = 0x2DACECu;
    {
        const bool branch_taken_0x2dacec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dacec) {
            ctx->pc = 0x2DB0D0u;
            goto label_2db0d0;
        }
    }
    ctx->pc = 0x2DACF4u;
label_2dacf4:
    // 0x2dacf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2dacf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2dacf8:
    // 0x2dacf8: 0x50430012  beql        $v0, $v1, . + 4 + (0x12 << 2)
label_2dacfc:
    if (ctx->pc == 0x2DACFCu) {
        ctx->pc = 0x2DACFCu;
            // 0x2dacfc: 0xc6a102c0  lwc1        $f1, 0x2C0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x2DAD00u;
        goto label_2dad00;
    }
    ctx->pc = 0x2DACF8u;
    {
        const bool branch_taken_0x2dacf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dacf8) {
            ctx->pc = 0x2DACFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DACF8u;
            // 0x2dacfc: 0xc6a102c0  lwc1        $f1, 0x2C0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DAD44u;
            goto label_2dad44;
        }
    }
    ctx->pc = 0x2DAD00u;
label_2dad00:
    // 0x2dad00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2dad00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dad04:
    // 0x2dad04: 0x1045000e  beq         $v0, $a1, . + 4 + (0xE << 2)
label_2dad08:
    if (ctx->pc == 0x2DAD08u) {
        ctx->pc = 0x2DAD0Cu;
        goto label_2dad0c;
    }
    ctx->pc = 0x2DAD04u;
    {
        const bool branch_taken_0x2dad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2dad04) {
            ctx->pc = 0x2DAD40u;
            goto label_2dad40;
        }
    }
    ctx->pc = 0x2DAD0Cu;
label_2dad0c:
    // 0x2dad0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_2dad10:
    if (ctx->pc == 0x2DAD10u) {
        ctx->pc = 0x2DAD10u;
            // 0x2dad10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD14u;
        goto label_2dad14;
    }
    ctx->pc = 0x2DAD0Cu;
    {
        const bool branch_taken_0x2dad0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dad0c) {
            ctx->pc = 0x2DAD10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD0Cu;
            // 0x2dad10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DAD1Cu;
            goto label_2dad1c;
        }
    }
    ctx->pc = 0x2DAD14u;
label_2dad14:
    // 0x2dad14: 0x1000015b  b           . + 4 + (0x15B << 2)
label_2dad18:
    if (ctx->pc == 0x2DAD18u) {
        ctx->pc = 0x2DAD18u;
            // 0x2dad18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD1Cu;
        goto label_2dad1c;
    }
    ctx->pc = 0x2DAD14u;
    {
        const bool branch_taken_0x2dad14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD14u;
            // 0x2dad18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad14) {
            ctx->pc = 0x2DB284u;
            goto label_2db284;
        }
    }
    ctx->pc = 0x2DAD1Cu;
label_2dad1c:
    // 0x2dad1c: 0xc077fb0  jal         func_1DFEC0
label_2dad20:
    if (ctx->pc == 0x2DAD20u) {
        ctx->pc = 0x2DAD24u;
        goto label_2dad24;
    }
    ctx->pc = 0x2DAD1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAD24u);
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD24u; }
        if (ctx->pc != 0x2DAD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD24u; }
        if (ctx->pc != 0x2DAD24u) { return; }
    }
    ctx->pc = 0x2DAD24u;
label_2dad24:
    // 0x2dad24: 0xc0b6d4c  jal         func_2DB530
label_2dad28:
    if (ctx->pc == 0x2DAD28u) {
        ctx->pc = 0x2DAD28u;
            // 0x2dad28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD2Cu;
        goto label_2dad2c;
    }
    ctx->pc = 0x2DAD24u;
    SET_GPR_U32(ctx, 31, 0x2DAD2Cu);
    ctx->pc = 0x2DAD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD24u;
            // 0x2dad28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB530u;
    if (runtime->hasFunction(0x2DB530u)) {
        auto targetFn = runtime->lookupFunction(0x2DB530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD2Cu; }
        if (ctx->pc != 0x2DAD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB530_0x2db530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD2Cu; }
        if (ctx->pc != 0x2DAD2Cu) { return; }
    }
    ctx->pc = 0x2DAD2Cu;
label_2dad2c:
    // 0x2dad2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2dad2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2dad30:
    // 0x2dad30: 0xc077578  jal         func_1DD5E0
label_2dad34:
    if (ctx->pc == 0x2DAD34u) {
        ctx->pc = 0x2DAD34u;
            // 0x2dad34: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DAD38u;
        goto label_2dad38;
    }
    ctx->pc = 0x2DAD30u;
    SET_GPR_U32(ctx, 31, 0x2DAD38u);
    ctx->pc = 0x2DAD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD30u;
            // 0x2dad34: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5E0u;
    if (runtime->hasFunction(0x1DD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD38u; }
        if (ctx->pc != 0x2DAD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5E0_0x1dd5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD38u; }
        if (ctx->pc != 0x2DAD38u) { return; }
    }
    ctx->pc = 0x2DAD38u;
label_2dad38:
    // 0x2dad38: 0x10000151  b           . + 4 + (0x151 << 2)
label_2dad3c:
    if (ctx->pc == 0x2DAD3Cu) {
        ctx->pc = 0x2DAD3Cu;
            // 0x2dad3c: 0xa0500001  sb          $s0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x2DAD40u;
        goto label_2dad40;
    }
    ctx->pc = 0x2DAD38u;
    {
        const bool branch_taken_0x2dad38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD38u;
            // 0x2dad3c: 0xa0500001  sb          $s0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dad38) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DAD40u;
label_2dad40:
    // 0x2dad40: 0xc6a102c0  lwc1        $f1, 0x2C0($s5)
    ctx->pc = 0x2dad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dad44:
    // 0x2dad44: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dad44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dad48:
    // 0x2dad48: 0x0  nop
    ctx->pc = 0x2dad48u;
    // NOP
label_2dad4c:
    // 0x2dad4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2dad4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dad50:
    // 0x2dad50: 0x4500014b  bc1f        . + 4 + (0x14B << 2)
label_2dad54:
    if (ctx->pc == 0x2DAD54u) {
        ctx->pc = 0x2DAD58u;
        goto label_2dad58;
    }
    ctx->pc = 0x2DAD50u;
    {
        const bool branch_taken_0x2dad50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dad50) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DAD58u;
label_2dad58:
    // 0x2dad58: 0xc0b6d48  jal         func_2DB520
label_2dad5c:
    if (ctx->pc == 0x2DAD5Cu) {
        ctx->pc = 0x2DAD5Cu;
            // 0x2dad5c: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAD60u;
        goto label_2dad60;
    }
    ctx->pc = 0x2DAD58u;
    SET_GPR_U32(ctx, 31, 0x2DAD60u);
    ctx->pc = 0x2DAD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD58u;
            // 0x2dad5c: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD60u; }
        if (ctx->pc != 0x2DAD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD60u; }
        if (ctx->pc != 0x2DAD60u) { return; }
    }
    ctx->pc = 0x2DAD60u;
label_2dad60:
    // 0x2dad60: 0xc0b6d44  jal         func_2DB510
label_2dad64:
    if (ctx->pc == 0x2DAD64u) {
        ctx->pc = 0x2DAD64u;
            // 0x2dad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD68u;
        goto label_2dad68;
    }
    ctx->pc = 0x2DAD60u;
    SET_GPR_U32(ctx, 31, 0x2DAD68u);
    ctx->pc = 0x2DAD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD60u;
            // 0x2dad64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB510u;
    if (runtime->hasFunction(0x2DB510u)) {
        auto targetFn = runtime->lookupFunction(0x2DB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD68u; }
        if (ctx->pc != 0x2DAD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB510_0x2db510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD68u; }
        if (ctx->pc != 0x2DAD68u) { return; }
    }
    ctx->pc = 0x2DAD68u;
label_2dad68:
    // 0x2dad68: 0x584000d0  blezl       $v0, . + 4 + (0xD0 << 2)
label_2dad6c:
    if (ctx->pc == 0x2DAD6Cu) {
        ctx->pc = 0x2DAD6Cu;
            // 0x2dad6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD70u;
        goto label_2dad70;
    }
    ctx->pc = 0x2DAD68u;
    {
        const bool branch_taken_0x2dad68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dad68) {
            ctx->pc = 0x2DAD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD68u;
            // 0x2dad6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB0ACu;
            goto label_2db0ac;
        }
    }
    ctx->pc = 0x2DAD70u;
label_2dad70:
    // 0x2dad70: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2dad70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2dad74:
    // 0x2dad74: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2dad74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2dad78:
    // 0x2dad78: 0xc0b6e68  jal         func_2DB9A0
label_2dad7c:
    if (ctx->pc == 0x2DAD7Cu) {
        ctx->pc = 0x2DAD7Cu;
            // 0x2dad7c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DAD80u;
        goto label_2dad80;
    }
    ctx->pc = 0x2DAD78u;
    SET_GPR_U32(ctx, 31, 0x2DAD80u);
    ctx->pc = 0x2DAD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD78u;
            // 0x2dad7c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD80u; }
        if (ctx->pc != 0x2DAD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD80u; }
        if (ctx->pc != 0x2DAD80u) { return; }
    }
    ctx->pc = 0x2DAD80u;
label_2dad80:
    // 0x2dad80: 0xc0b6d50  jal         func_2DB540
label_2dad84:
    if (ctx->pc == 0x2DAD84u) {
        ctx->pc = 0x2DAD84u;
            // 0x2dad84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD88u;
        goto label_2dad88;
    }
    ctx->pc = 0x2DAD80u;
    SET_GPR_U32(ctx, 31, 0x2DAD88u);
    ctx->pc = 0x2DAD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD80u;
            // 0x2dad84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB540u;
    if (runtime->hasFunction(0x2DB540u)) {
        auto targetFn = runtime->lookupFunction(0x2DB540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD88u; }
        if (ctx->pc != 0x2DAD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB540_0x2db540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD88u; }
        if (ctx->pc != 0x2DAD88u) { return; }
    }
    ctx->pc = 0x2DAD88u;
label_2dad88:
    // 0x2dad88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dad88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dad8c:
    // 0x2dad8c: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
label_2dad90:
    if (ctx->pc == 0x2DAD90u) {
        ctx->pc = 0x2DAD90u;
            // 0x2dad90: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2DAD94u;
        goto label_2dad94;
    }
    ctx->pc = 0x2DAD8Cu;
    {
        const bool branch_taken_0x2dad8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dad8c) {
            ctx->pc = 0x2DAD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD8Cu;
            // 0x2dad90: 0xc64c0000  lwc1        $f12, 0x0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DADC4u;
            goto label_2dadc4;
        }
    }
    ctx->pc = 0x2DAD94u;
label_2dad94:
    // 0x2dad94: 0xc0770c0  jal         func_1DC300
label_2dad98:
    if (ctx->pc == 0x2DAD98u) {
        ctx->pc = 0x2DAD98u;
            // 0x2dad98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAD9Cu;
        goto label_2dad9c;
    }
    ctx->pc = 0x2DAD94u;
    SET_GPR_U32(ctx, 31, 0x2DAD9Cu);
    ctx->pc = 0x2DAD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD94u;
            // 0x2dad98: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD9Cu; }
        if (ctx->pc != 0x2DAD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAD9Cu; }
        if (ctx->pc != 0x2DAD9Cu) { return; }
    }
    ctx->pc = 0x2DAD9Cu;
label_2dad9c:
    // 0x2dad9c: 0xc0b6d40  jal         func_2DB500
label_2dada0:
    if (ctx->pc == 0x2DADA0u) {
        ctx->pc = 0x2DADA0u;
            // 0x2dada0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DADA4u;
        goto label_2dada4;
    }
    ctx->pc = 0x2DAD9Cu;
    SET_GPR_U32(ctx, 31, 0x2DADA4u);
    ctx->pc = 0x2DADA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAD9Cu;
            // 0x2dada0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB500u;
    if (runtime->hasFunction(0x2DB500u)) {
        auto targetFn = runtime->lookupFunction(0x2DB500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADA4u; }
        if (ctx->pc != 0x2DADA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB500_0x2db500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADA4u; }
        if (ctx->pc != 0x2DADA4u) { return; }
    }
    ctx->pc = 0x2DADA4u;
label_2dada4:
    // 0x2dada4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2dada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dada8:
    // 0x2dada8: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2dada8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2dadac:
    // 0x2dadac: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x2dadacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dadb0:
    // 0x2dadb0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x2dadb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2dadb4:
    // 0x2dadb4: 0xc0b6e3c  jal         func_2DB8F0
label_2dadb8:
    if (ctx->pc == 0x2DADB8u) {
        ctx->pc = 0x2DADB8u;
            // 0x2dadb8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2DADBCu;
        goto label_2dadbc;
    }
    ctx->pc = 0x2DADB4u;
    SET_GPR_U32(ctx, 31, 0x2DADBCu);
    ctx->pc = 0x2DADB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADB4u;
            // 0x2dadb8: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADBCu; }
        if (ctx->pc != 0x2DADBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADBCu; }
        if (ctx->pc != 0x2DADBCu) { return; }
    }
    ctx->pc = 0x2DADBCu;
label_2dadbc:
    // 0x2dadbc: 0x10000007  b           . + 4 + (0x7 << 2)
label_2dadc0:
    if (ctx->pc == 0x2DADC0u) {
        ctx->pc = 0x2DADC0u;
            // 0x2dadc0: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DADC4u;
        goto label_2dadc4;
    }
    ctx->pc = 0x2DADBCu;
    {
        const bool branch_taken_0x2dadbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DADC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADBCu;
            // 0x2dadc0: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dadbc) {
            ctx->pc = 0x2DADDCu;
            goto label_2daddc;
        }
    }
    ctx->pc = 0x2DADC4u;
label_2dadc4:
    // 0x2dadc4: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x2dadc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_2dadc8:
    // 0x2dadc8: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2dadc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dadcc:
    // 0x2dadcc: 0xc64e0008  lwc1        $f14, 0x8($s2)
    ctx->pc = 0x2dadccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2dadd0:
    // 0x2dadd0: 0xc0b6e3c  jal         func_2DB8F0
label_2dadd4:
    if (ctx->pc == 0x2DADD4u) {
        ctx->pc = 0x2DADD4u;
            // 0x2dadd4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2DADD8u;
        goto label_2dadd8;
    }
    ctx->pc = 0x2DADD0u;
    SET_GPR_U32(ctx, 31, 0x2DADD8u);
    ctx->pc = 0x2DADD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADD0u;
            // 0x2dadd4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (runtime->hasFunction(0x2DB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADD8u; }
        if (ctx->pc != 0x2DADD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB8F0_0x2db8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADD8u; }
        if (ctx->pc != 0x2DADD8u) { return; }
    }
    ctx->pc = 0x2DADD8u;
label_2dadd8:
    // 0x2dadd8: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2dadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2daddc:
    // 0x2daddc: 0xc0b6d48  jal         func_2DB520
label_2dade0:
    if (ctx->pc == 0x2DADE0u) {
        ctx->pc = 0x2DADE0u;
            // 0x2dade0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DADE4u;
        goto label_2dade4;
    }
    ctx->pc = 0x2DADDCu;
    SET_GPR_U32(ctx, 31, 0x2DADE4u);
    ctx->pc = 0x2DADE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADDCu;
            // 0x2dade0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADE4u; }
        if (ctx->pc != 0x2DADE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADE4u; }
        if (ctx->pc != 0x2DADE4u) { return; }
    }
    ctx->pc = 0x2DADE4u;
label_2dade4:
    // 0x2dade4: 0xc0b6d44  jal         func_2DB510
label_2dade8:
    if (ctx->pc == 0x2DADE8u) {
        ctx->pc = 0x2DADE8u;
            // 0x2dade8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DADECu;
        goto label_2dadec;
    }
    ctx->pc = 0x2DADE4u;
    SET_GPR_U32(ctx, 31, 0x2DADECu);
    ctx->pc = 0x2DADE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADE4u;
            // 0x2dade8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB510u;
    if (runtime->hasFunction(0x2DB510u)) {
        auto targetFn = runtime->lookupFunction(0x2DB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADECu; }
        if (ctx->pc != 0x2DADECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB510_0x2db510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DADECu; }
        if (ctx->pc != 0x2DADECu) { return; }
    }
    ctx->pc = 0x2DADECu;
label_2dadec:
    // 0x2dadec: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
label_2dadf0:
    if (ctx->pc == 0x2DADF0u) {
        ctx->pc = 0x2DADF4u;
        goto label_2dadf4;
    }
    ctx->pc = 0x2DADECu;
    {
        const bool branch_taken_0x2dadec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dadec) {
            ctx->pc = 0x2DAEA8u;
            goto label_2daea8;
        }
    }
    ctx->pc = 0x2DADF4u;
label_2dadf4:
    // 0x2dadf4: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2dadf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2dadf8:
    // 0x2dadf8: 0xc0b6d48  jal         func_2DB520
label_2dadfc:
    if (ctx->pc == 0x2DADFCu) {
        ctx->pc = 0x2DADFCu;
            // 0x2dadfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE00u;
        goto label_2dae00;
    }
    ctx->pc = 0x2DADF8u;
    SET_GPR_U32(ctx, 31, 0x2DAE00u);
    ctx->pc = 0x2DADFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DADF8u;
            // 0x2dadfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE00u; }
        if (ctx->pc != 0x2DAE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE00u; }
        if (ctx->pc != 0x2DAE00u) { return; }
    }
    ctx->pc = 0x2DAE00u;
label_2dae00:
    // 0x2dae00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dae00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dae04:
    // 0x2dae04: 0xc0b6d38  jal         func_2DB4E0
label_2dae08:
    if (ctx->pc == 0x2DAE08u) {
        ctx->pc = 0x2DAE08u;
            // 0x2dae08: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE0Cu;
        goto label_2dae0c;
    }
    ctx->pc = 0x2DAE04u;
    SET_GPR_U32(ctx, 31, 0x2DAE0Cu);
    ctx->pc = 0x2DAE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE04u;
            // 0x2dae08: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE0Cu; }
        if (ctx->pc != 0x2DAE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE0Cu; }
        if (ctx->pc != 0x2DAE0Cu) { return; }
    }
    ctx->pc = 0x2DAE0Cu;
label_2dae0c:
    // 0x2dae0c: 0xc0b6d30  jal         func_2DB4C0
label_2dae10:
    if (ctx->pc == 0x2DAE10u) {
        ctx->pc = 0x2DAE10u;
            // 0x2dae10: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->pc = 0x2DAE14u;
        goto label_2dae14;
    }
    ctx->pc = 0x2DAE0Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE14u);
    ctx->pc = 0x2DAE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE0Cu;
            // 0x2dae10: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4C0u;
    if (runtime->hasFunction(0x2DB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE14u; }
        if (ctx->pc != 0x2DAE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4C0_0x2db4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE14u; }
        if (ctx->pc != 0x2DAE14u) { return; }
    }
    ctx->pc = 0x2DAE14u;
label_2dae14:
    // 0x2dae14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2dae18:
    if (ctx->pc == 0x2DAE18u) {
        ctx->pc = 0x2DAE1Cu;
        goto label_2dae1c;
    }
    ctx->pc = 0x2DAE14u;
    {
        const bool branch_taken_0x2dae14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae14) {
            ctx->pc = 0x2DAE40u;
            goto label_2dae40;
        }
    }
    ctx->pc = 0x2DAE1Cu;
label_2dae1c:
    // 0x2dae1c: 0xc0b6d2c  jal         func_2DB4B0
label_2dae20:
    if (ctx->pc == 0x2DAE20u) {
        ctx->pc = 0x2DAE20u;
            // 0x2dae20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE24u;
        goto label_2dae24;
    }
    ctx->pc = 0x2DAE1Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE24u);
    ctx->pc = 0x2DAE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE1Cu;
            // 0x2dae20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4B0u;
    if (runtime->hasFunction(0x2DB4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE24u; }
        if (ctx->pc != 0x2DAE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4B0_0x2db4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE24u; }
        if (ctx->pc != 0x2DAE24u) { return; }
    }
    ctx->pc = 0x2DAE24u;
label_2dae24:
    // 0x2dae24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2dae28:
    if (ctx->pc == 0x2DAE28u) {
        ctx->pc = 0x2DAE2Cu;
        goto label_2dae2c;
    }
    ctx->pc = 0x2DAE24u;
    {
        const bool branch_taken_0x2dae24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae24) {
            ctx->pc = 0x2DAE40u;
            goto label_2dae40;
        }
    }
    ctx->pc = 0x2DAE2Cu;
label_2dae2c:
    // 0x2dae2c: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x2dae2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_2dae30:
    // 0x2dae30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dae34:
    // 0x2dae34: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2dae38:
    if (ctx->pc == 0x2DAE38u) {
        ctx->pc = 0x2DAE3Cu;
        goto label_2dae3c;
    }
    ctx->pc = 0x2DAE34u;
    {
        const bool branch_taken_0x2dae34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dae34) {
            ctx->pc = 0x2DAE40u;
            goto label_2dae40;
        }
    }
    ctx->pc = 0x2DAE3Cu;
label_2dae3c:
    // 0x2dae3c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2dae3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2dae40:
    // 0x2dae40: 0xc0b6d48  jal         func_2DB520
label_2dae44:
    if (ctx->pc == 0x2DAE44u) {
        ctx->pc = 0x2DAE44u;
            // 0x2dae44: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAE48u;
        goto label_2dae48;
    }
    ctx->pc = 0x2DAE40u;
    SET_GPR_U32(ctx, 31, 0x2DAE48u);
    ctx->pc = 0x2DAE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE40u;
            // 0x2dae44: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE48u; }
        if (ctx->pc != 0x2DAE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE48u; }
        if (ctx->pc != 0x2DAE48u) { return; }
    }
    ctx->pc = 0x2DAE48u;
label_2dae48:
    // 0x2dae48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dae48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dae4c:
    // 0x2dae4c: 0xc0b6d38  jal         func_2DB4E0
label_2dae50:
    if (ctx->pc == 0x2DAE50u) {
        ctx->pc = 0x2DAE50u;
            // 0x2dae50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE54u;
        goto label_2dae54;
    }
    ctx->pc = 0x2DAE4Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE54u);
    ctx->pc = 0x2DAE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE4Cu;
            // 0x2dae50: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE54u; }
        if (ctx->pc != 0x2DAE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE54u; }
        if (ctx->pc != 0x2DAE54u) { return; }
    }
    ctx->pc = 0x2DAE54u;
label_2dae54:
    // 0x2dae54: 0xc0b6d28  jal         func_2DB4A0
label_2dae58:
    if (ctx->pc == 0x2DAE58u) {
        ctx->pc = 0x2DAE58u;
            // 0x2dae58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE5Cu;
        goto label_2dae5c;
    }
    ctx->pc = 0x2DAE54u;
    SET_GPR_U32(ctx, 31, 0x2DAE5Cu);
    ctx->pc = 0x2DAE58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE54u;
            // 0x2dae58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4A0u;
    if (runtime->hasFunction(0x2DB4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE5Cu; }
        if (ctx->pc != 0x2DAE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4A0_0x2db4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE5Cu; }
        if (ctx->pc != 0x2DAE5Cu) { return; }
    }
    ctx->pc = 0x2DAE5Cu;
label_2dae5c:
    // 0x2dae5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dae60:
    // 0x2dae60: 0xc0b6d1c  jal         func_2DB470
label_2dae64:
    if (ctx->pc == 0x2DAE64u) {
        ctx->pc = 0x2DAE64u;
            // 0x2dae64: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2DAE68u;
        goto label_2dae68;
    }
    ctx->pc = 0x2DAE60u;
    SET_GPR_U32(ctx, 31, 0x2DAE68u);
    ctx->pc = 0x2DAE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE60u;
            // 0x2dae64: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB470u;
    if (runtime->hasFunction(0x2DB470u)) {
        auto targetFn = runtime->lookupFunction(0x2DB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE68u; }
        if (ctx->pc != 0x2DAE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB470_0x2db470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE68u; }
        if (ctx->pc != 0x2DAE68u) { return; }
    }
    ctx->pc = 0x2DAE68u;
label_2dae68:
    // 0x2dae68: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2dae68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dae6c:
    // 0x2dae6c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2dae70:
    if (ctx->pc == 0x2DAE70u) {
        ctx->pc = 0x2DAE74u;
        goto label_2dae74;
    }
    ctx->pc = 0x2DAE6Cu;
    {
        const bool branch_taken_0x2dae6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2dae6c) {
            ctx->pc = 0x2DAE80u;
            goto label_2dae80;
        }
    }
    ctx->pc = 0x2DAE74u;
label_2dae74:
    // 0x2dae74: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2dae78:
    if (ctx->pc == 0x2DAE78u) {
        ctx->pc = 0x2DAE7Cu;
        goto label_2dae7c;
    }
    ctx->pc = 0x2DAE74u;
    {
        const bool branch_taken_0x2dae74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dae74) {
            ctx->pc = 0x2DAE88u;
            goto label_2dae88;
        }
    }
    ctx->pc = 0x2DAE7Cu;
label_2dae7c:
    // 0x2dae7c: 0x0  nop
    ctx->pc = 0x2dae7cu;
    // NOP
label_2dae80:
    // 0x2dae80: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2dae80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2dae84:
    // 0x2dae84: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2dae84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2dae88:
    // 0x2dae88: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2dae88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2dae8c:
    // 0x2dae8c: 0xc0b6d48  jal         func_2DB520
label_2dae90:
    if (ctx->pc == 0x2DAE90u) {
        ctx->pc = 0x2DAE90u;
            // 0x2dae90: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x2DAE94u;
        goto label_2dae94;
    }
    ctx->pc = 0x2DAE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DAE94u);
    ctx->pc = 0x2DAE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE8Cu;
            // 0x2dae90: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE94u; }
        if (ctx->pc != 0x2DAE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE94u; }
        if (ctx->pc != 0x2DAE94u) { return; }
    }
    ctx->pc = 0x2DAE94u;
label_2dae94:
    // 0x2dae94: 0xc0b6d44  jal         func_2DB510
label_2dae98:
    if (ctx->pc == 0x2DAE98u) {
        ctx->pc = 0x2DAE98u;
            // 0x2dae98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAE9Cu;
        goto label_2dae9c;
    }
    ctx->pc = 0x2DAE94u;
    SET_GPR_U32(ctx, 31, 0x2DAE9Cu);
    ctx->pc = 0x2DAE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAE94u;
            // 0x2dae98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB510u;
    if (runtime->hasFunction(0x2DB510u)) {
        auto targetFn = runtime->lookupFunction(0x2DB510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE9Cu; }
        if (ctx->pc != 0x2DAE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB510_0x2db510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAE9Cu; }
        if (ctx->pc != 0x2DAE9Cu) { return; }
    }
    ctx->pc = 0x2DAE9Cu;
label_2dae9c:
    // 0x2dae9c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2dae9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2daea0:
    // 0x2daea0: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
label_2daea4:
    if (ctx->pc == 0x2DAEA4u) {
        ctx->pc = 0x2DAEA4u;
            // 0x2daea4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAEA8u;
        goto label_2daea8;
    }
    ctx->pc = 0x2DAEA0u;
    {
        const bool branch_taken_0x2daea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2daea0) {
            ctx->pc = 0x2DAEA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEA0u;
            // 0x2daea4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DADF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dadf8;
        }
    }
    ctx->pc = 0x2DAEA8u;
label_2daea8:
    // 0x2daea8: 0x6020077  bltzl       $s0, . + 4 + (0x77 << 2)
label_2daeac:
    if (ctx->pc == 0x2DAEACu) {
        ctx->pc = 0x2DAEACu;
            // 0x2daeac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEB0u;
        goto label_2daeb0;
    }
    ctx->pc = 0x2DAEA8u;
    {
        const bool branch_taken_0x2daea8 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x2daea8) {
            ctx->pc = 0x2DAEACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEA8u;
            // 0x2daeac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB088u;
            goto label_2db088;
        }
    }
    ctx->pc = 0x2DAEB0u;
label_2daeb0:
    // 0x2daeb0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2daeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2daeb4:
    // 0x2daeb4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2daeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2daeb8:
    // 0x2daeb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2daeb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2daebc:
    // 0x2daebc: 0x0  nop
    ctx->pc = 0x2daebcu;
    // NOP
label_2daec0:
    // 0x2daec0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2daec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2daec4:
    // 0x2daec4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2daec8:
    if (ctx->pc == 0x2DAEC8u) {
        ctx->pc = 0x2DAEC8u;
            // 0x2daec8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAECCu;
        goto label_2daecc;
    }
    ctx->pc = 0x2DAEC4u;
    {
        const bool branch_taken_0x2daec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2daec4) {
            ctx->pc = 0x2DAEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEC4u;
            // 0x2daec8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DAED8u;
            goto label_2daed8;
        }
    }
    ctx->pc = 0x2DAECCu;
label_2daecc:
    // 0x2daecc: 0x1220006d  beqz        $s1, . + 4 + (0x6D << 2)
label_2daed0:
    if (ctx->pc == 0x2DAED0u) {
        ctx->pc = 0x2DAED4u;
        goto label_2daed4;
    }
    ctx->pc = 0x2DAECCu;
    {
        const bool branch_taken_0x2daecc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daecc) {
            ctx->pc = 0x2DB084u;
            goto label_2db084;
        }
    }
    ctx->pc = 0x2DAED4u;
label_2daed4:
    // 0x2daed4: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2daed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_2daed8:
    // 0x2daed8: 0xc0b6d48  jal         func_2DB520
label_2daedc:
    if (ctx->pc == 0x2DAEDCu) {
        ctx->pc = 0x2DAEE0u;
        goto label_2daee0;
    }
    ctx->pc = 0x2DAED8u;
    SET_GPR_U32(ctx, 31, 0x2DAEE0u);
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEE0u; }
        if (ctx->pc != 0x2DAEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEE0u; }
        if (ctx->pc != 0x2DAEE0u) { return; }
    }
    ctx->pc = 0x2DAEE0u;
label_2daee0:
    // 0x2daee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daee4:
    // 0x2daee4: 0xc0b6d38  jal         func_2DB4E0
label_2daee8:
    if (ctx->pc == 0x2DAEE8u) {
        ctx->pc = 0x2DAEE8u;
            // 0x2daee8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAEECu;
        goto label_2daeec;
    }
    ctx->pc = 0x2DAEE4u;
    SET_GPR_U32(ctx, 31, 0x2DAEECu);
    ctx->pc = 0x2DAEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEE4u;
            // 0x2daee8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEECu; }
        if (ctx->pc != 0x2DAEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEECu; }
        if (ctx->pc != 0x2DAEECu) { return; }
    }
    ctx->pc = 0x2DAEECu;
label_2daeec:
    // 0x2daeec: 0xc0b6d30  jal         func_2DB4C0
label_2daef0:
    if (ctx->pc == 0x2DAEF0u) {
        ctx->pc = 0x2DAEF0u;
            // 0x2daef0: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->pc = 0x2DAEF4u;
        goto label_2daef4;
    }
    ctx->pc = 0x2DAEECu;
    SET_GPR_U32(ctx, 31, 0x2DAEF4u);
    ctx->pc = 0x2DAEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEECu;
            // 0x2daef0: 0x8c440028  lw          $a0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4C0u;
    if (runtime->hasFunction(0x2DB4C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEF4u; }
        if (ctx->pc != 0x2DAEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4C0_0x2db4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAEF4u; }
        if (ctx->pc != 0x2DAEF4u) { return; }
    }
    ctx->pc = 0x2DAEF4u;
label_2daef4:
    // 0x2daef4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2daef4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daef8:
    // 0x2daef8: 0x52800059  beql        $s4, $zero, . + 4 + (0x59 << 2)
label_2daefc:
    if (ctx->pc == 0x2DAEFCu) {
        ctx->pc = 0x2DAEFCu;
            // 0x2daefc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF00u;
        goto label_2daf00;
    }
    ctx->pc = 0x2DAEF8u;
    {
        const bool branch_taken_0x2daef8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daef8) {
            ctx->pc = 0x2DAEFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAEF8u;
            // 0x2daefc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB060u;
            goto label_2db060;
        }
    }
    ctx->pc = 0x2DAF00u;
label_2daf00:
    // 0x2daf00: 0xc0b6d2c  jal         func_2DB4B0
label_2daf04:
    if (ctx->pc == 0x2DAF04u) {
        ctx->pc = 0x2DAF04u;
            // 0x2daf04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF08u;
        goto label_2daf08;
    }
    ctx->pc = 0x2DAF00u;
    SET_GPR_U32(ctx, 31, 0x2DAF08u);
    ctx->pc = 0x2DAF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF00u;
            // 0x2daf04: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4B0u;
    if (runtime->hasFunction(0x2DB4B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF08u; }
        if (ctx->pc != 0x2DAF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4B0_0x2db4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF08u; }
        if (ctx->pc != 0x2DAF08u) { return; }
    }
    ctx->pc = 0x2DAF08u;
label_2daf08:
    // 0x2daf08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2daf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf0c:
    // 0x2daf0c: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
label_2daf10:
    if (ctx->pc == 0x2DAF10u) {
        ctx->pc = 0x2DAF14u;
        goto label_2daf14;
    }
    ctx->pc = 0x2DAF0Cu;
    {
        const bool branch_taken_0x2daf0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2daf0c) {
            ctx->pc = 0x2DB05Cu;
            goto label_2db05c;
        }
    }
    ctx->pc = 0x2DAF14u;
label_2daf14:
    // 0x2daf14: 0xc0b6d48  jal         func_2DB520
label_2daf18:
    if (ctx->pc == 0x2DAF18u) {
        ctx->pc = 0x2DAF18u;
            // 0x2daf18: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAF1Cu;
        goto label_2daf1c;
    }
    ctx->pc = 0x2DAF14u;
    SET_GPR_U32(ctx, 31, 0x2DAF1Cu);
    ctx->pc = 0x2DAF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF14u;
            // 0x2daf18: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF1Cu; }
        if (ctx->pc != 0x2DAF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF1Cu; }
        if (ctx->pc != 0x2DAF1Cu) { return; }
    }
    ctx->pc = 0x2DAF1Cu;
label_2daf1c:
    // 0x2daf1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf20:
    // 0x2daf20: 0xc0b6d38  jal         func_2DB4E0
label_2daf24:
    if (ctx->pc == 0x2DAF24u) {
        ctx->pc = 0x2DAF24u;
            // 0x2daf24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF28u;
        goto label_2daf28;
    }
    ctx->pc = 0x2DAF20u;
    SET_GPR_U32(ctx, 31, 0x2DAF28u);
    ctx->pc = 0x2DAF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF20u;
            // 0x2daf24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF28u; }
        if (ctx->pc != 0x2DAF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF28u; }
        if (ctx->pc != 0x2DAF28u) { return; }
    }
    ctx->pc = 0x2DAF28u;
label_2daf28:
    // 0x2daf28: 0xc0b6d28  jal         func_2DB4A0
label_2daf2c:
    if (ctx->pc == 0x2DAF2Cu) {
        ctx->pc = 0x2DAF2Cu;
            // 0x2daf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF30u;
        goto label_2daf30;
    }
    ctx->pc = 0x2DAF28u;
    SET_GPR_U32(ctx, 31, 0x2DAF30u);
    ctx->pc = 0x2DAF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF28u;
            // 0x2daf2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4A0u;
    if (runtime->hasFunction(0x2DB4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF30u; }
        if (ctx->pc != 0x2DAF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4A0_0x2db4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF30u; }
        if (ctx->pc != 0x2DAF30u) { return; }
    }
    ctx->pc = 0x2DAF30u;
label_2daf30:
    // 0x2daf30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf34:
    // 0x2daf34: 0xc0b6d90  jal         func_2DB640
label_2daf38:
    if (ctx->pc == 0x2DAF38u) {
        ctx->pc = 0x2DAF38u;
            // 0x2daf38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF3Cu;
        goto label_2daf3c;
    }
    ctx->pc = 0x2DAF34u;
    SET_GPR_U32(ctx, 31, 0x2DAF3Cu);
    ctx->pc = 0x2DAF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF34u;
            // 0x2daf38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF3Cu; }
        if (ctx->pc != 0x2DAF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF3Cu; }
        if (ctx->pc != 0x2DAF3Cu) { return; }
    }
    ctx->pc = 0x2DAF3Cu;
label_2daf3c:
    // 0x2daf3c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2daf3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf40:
    // 0x2daf40: 0xc0b6d48  jal         func_2DB520
label_2daf44:
    if (ctx->pc == 0x2DAF44u) {
        ctx->pc = 0x2DAF44u;
            // 0x2daf44: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAF48u;
        goto label_2daf48;
    }
    ctx->pc = 0x2DAF40u;
    SET_GPR_U32(ctx, 31, 0x2DAF48u);
    ctx->pc = 0x2DAF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF40u;
            // 0x2daf44: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF48u; }
        if (ctx->pc != 0x2DAF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF48u; }
        if (ctx->pc != 0x2DAF48u) { return; }
    }
    ctx->pc = 0x2DAF48u;
label_2daf48:
    // 0x2daf48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf4c:
    // 0x2daf4c: 0xc0b6d38  jal         func_2DB4E0
label_2daf50:
    if (ctx->pc == 0x2DAF50u) {
        ctx->pc = 0x2DAF50u;
            // 0x2daf50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF54u;
        goto label_2daf54;
    }
    ctx->pc = 0x2DAF4Cu;
    SET_GPR_U32(ctx, 31, 0x2DAF54u);
    ctx->pc = 0x2DAF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF4Cu;
            // 0x2daf50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF54u; }
        if (ctx->pc != 0x2DAF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF54u; }
        if (ctx->pc != 0x2DAF54u) { return; }
    }
    ctx->pc = 0x2DAF54u;
label_2daf54:
    // 0x2daf54: 0xc0b6d28  jal         func_2DB4A0
label_2daf58:
    if (ctx->pc == 0x2DAF58u) {
        ctx->pc = 0x2DAF58u;
            // 0x2daf58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF5Cu;
        goto label_2daf5c;
    }
    ctx->pc = 0x2DAF54u;
    SET_GPR_U32(ctx, 31, 0x2DAF5Cu);
    ctx->pc = 0x2DAF58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF54u;
            // 0x2daf58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4A0u;
    if (runtime->hasFunction(0x2DB4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF5Cu; }
        if (ctx->pc != 0x2DAF5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4A0_0x2db4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF5Cu; }
        if (ctx->pc != 0x2DAF5Cu) { return; }
    }
    ctx->pc = 0x2DAF5Cu;
label_2daf5c:
    // 0x2daf5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf60:
    // 0x2daf60: 0xc0b6d90  jal         func_2DB640
label_2daf64:
    if (ctx->pc == 0x2DAF64u) {
        ctx->pc = 0x2DAF64u;
            // 0x2daf64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DAF68u;
        goto label_2daf68;
    }
    ctx->pc = 0x2DAF60u;
    SET_GPR_U32(ctx, 31, 0x2DAF68u);
    ctx->pc = 0x2DAF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF60u;
            // 0x2daf64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF68u; }
        if (ctx->pc != 0x2DAF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF68u; }
        if (ctx->pc != 0x2DAF68u) { return; }
    }
    ctx->pc = 0x2DAF68u;
label_2daf68:
    // 0x2daf68: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2daf68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf6c:
    // 0x2daf6c: 0xc0b6d48  jal         func_2DB520
label_2daf70:
    if (ctx->pc == 0x2DAF70u) {
        ctx->pc = 0x2DAF70u;
            // 0x2daf70: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAF74u;
        goto label_2daf74;
    }
    ctx->pc = 0x2DAF6Cu;
    SET_GPR_U32(ctx, 31, 0x2DAF74u);
    ctx->pc = 0x2DAF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF6Cu;
            // 0x2daf70: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF74u; }
        if (ctx->pc != 0x2DAF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF74u; }
        if (ctx->pc != 0x2DAF74u) { return; }
    }
    ctx->pc = 0x2DAF74u;
label_2daf74:
    // 0x2daf74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf78:
    // 0x2daf78: 0xc0b6d38  jal         func_2DB4E0
label_2daf7c:
    if (ctx->pc == 0x2DAF7Cu) {
        ctx->pc = 0x2DAF7Cu;
            // 0x2daf7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF80u;
        goto label_2daf80;
    }
    ctx->pc = 0x2DAF78u;
    SET_GPR_U32(ctx, 31, 0x2DAF80u);
    ctx->pc = 0x2DAF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF78u;
            // 0x2daf7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF80u; }
        if (ctx->pc != 0x2DAF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF80u; }
        if (ctx->pc != 0x2DAF80u) { return; }
    }
    ctx->pc = 0x2DAF80u;
label_2daf80:
    // 0x2daf80: 0xc0b6d28  jal         func_2DB4A0
label_2daf84:
    if (ctx->pc == 0x2DAF84u) {
        ctx->pc = 0x2DAF84u;
            // 0x2daf84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAF88u;
        goto label_2daf88;
    }
    ctx->pc = 0x2DAF80u;
    SET_GPR_U32(ctx, 31, 0x2DAF88u);
    ctx->pc = 0x2DAF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF80u;
            // 0x2daf84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4A0u;
    if (runtime->hasFunction(0x2DB4A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF88u; }
        if (ctx->pc != 0x2DAF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4A0_0x2db4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF88u; }
        if (ctx->pc != 0x2DAF88u) { return; }
    }
    ctx->pc = 0x2DAF88u;
label_2daf88:
    // 0x2daf88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2daf8c:
    // 0x2daf8c: 0xc0b6d90  jal         func_2DB640
label_2daf90:
    if (ctx->pc == 0x2DAF90u) {
        ctx->pc = 0x2DAF90u;
            // 0x2daf90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DAF94u;
        goto label_2daf94;
    }
    ctx->pc = 0x2DAF8Cu;
    SET_GPR_U32(ctx, 31, 0x2DAF94u);
    ctx->pc = 0x2DAF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAF8Cu;
            // 0x2daf90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF94u; }
        if (ctx->pc != 0x2DAF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAF94u; }
        if (ctx->pc != 0x2DAF94u) { return; }
    }
    ctx->pc = 0x2DAF94u;
label_2daf94:
    // 0x2daf94: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x2daf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2daf98:
    // 0x2daf98: 0xc6ed0000  lwc1        $f13, 0x0($s7)
    ctx->pc = 0x2daf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2daf9c:
    // 0x2daf9c: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x2daf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2dafa0:
    // 0x2dafa0: 0xc04cbd8  jal         func_132F60
label_2dafa4:
    if (ctx->pc == 0x2DAFA4u) {
        ctx->pc = 0x2DAFA4u;
            // 0x2dafa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFA8u;
        goto label_2dafa8;
    }
    ctx->pc = 0x2DAFA0u;
    SET_GPR_U32(ctx, 31, 0x2DAFA8u);
    ctx->pc = 0x2DAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFA0u;
            // 0x2dafa4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFA8u; }
        if (ctx->pc != 0x2DAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFA8u; }
        if (ctx->pc != 0x2DAFA8u) { return; }
    }
    ctx->pc = 0x2DAFA8u;
label_2dafa8:
    // 0x2dafa8: 0xc0b6d18  jal         func_2DB460
label_2dafac:
    if (ctx->pc == 0x2DAFACu) {
        ctx->pc = 0x2DAFACu;
            // 0x2dafac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFB0u;
        goto label_2dafb0;
    }
    ctx->pc = 0x2DAFA8u;
    SET_GPR_U32(ctx, 31, 0x2DAFB0u);
    ctx->pc = 0x2DAFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFA8u;
            // 0x2dafac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB460u;
    if (runtime->hasFunction(0x2DB460u)) {
        auto targetFn = runtime->lookupFunction(0x2DB460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFB0u; }
        if (ctx->pc != 0x2DAFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB460_0x2db460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFB0u; }
        if (ctx->pc != 0x2DAFB0u) { return; }
    }
    ctx->pc = 0x2DAFB0u;
label_2dafb0:
    // 0x2dafb0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2dafb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dafb4:
    // 0x2dafb4: 0xc0b6d48  jal         func_2DB520
label_2dafb8:
    if (ctx->pc == 0x2DAFB8u) {
        ctx->pc = 0x2DAFB8u;
            // 0x2dafb8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAFBCu;
        goto label_2dafbc;
    }
    ctx->pc = 0x2DAFB4u;
    SET_GPR_U32(ctx, 31, 0x2DAFBCu);
    ctx->pc = 0x2DAFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFB4u;
            // 0x2dafb8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFBCu; }
        if (ctx->pc != 0x2DAFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFBCu; }
        if (ctx->pc != 0x2DAFBCu) { return; }
    }
    ctx->pc = 0x2DAFBCu;
label_2dafbc:
    // 0x2dafbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dafbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dafc0:
    // 0x2dafc0: 0xc0b6d38  jal         func_2DB4E0
label_2dafc4:
    if (ctx->pc == 0x2DAFC4u) {
        ctx->pc = 0x2DAFC4u;
            // 0x2dafc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFC8u;
        goto label_2dafc8;
    }
    ctx->pc = 0x2DAFC0u;
    SET_GPR_U32(ctx, 31, 0x2DAFC8u);
    ctx->pc = 0x2DAFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFC0u;
            // 0x2dafc4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFC8u; }
        if (ctx->pc != 0x2DAFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFC8u; }
        if (ctx->pc != 0x2DAFC8u) { return; }
    }
    ctx->pc = 0x2DAFC8u;
label_2dafc8:
    // 0x2dafc8: 0xc0b6d14  jal         func_2DB450
label_2dafcc:
    if (ctx->pc == 0x2DAFCCu) {
        ctx->pc = 0x2DAFCCu;
            // 0x2dafcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFD0u;
        goto label_2dafd0;
    }
    ctx->pc = 0x2DAFC8u;
    SET_GPR_U32(ctx, 31, 0x2DAFD0u);
    ctx->pc = 0x2DAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFC8u;
            // 0x2dafcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB450u;
    if (runtime->hasFunction(0x2DB450u)) {
        auto targetFn = runtime->lookupFunction(0x2DB450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFD0u; }
        if (ctx->pc != 0x2DAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB450_0x2db450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFD0u; }
        if (ctx->pc != 0x2DAFD0u) { return; }
    }
    ctx->pc = 0x2DAFD0u;
label_2dafd0:
    // 0x2dafd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dafd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dafd4:
    // 0x2dafd4: 0xc0b6d90  jal         func_2DB640
label_2dafd8:
    if (ctx->pc == 0x2DAFD8u) {
        ctx->pc = 0x2DAFD8u;
            // 0x2dafd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFDCu;
        goto label_2dafdc;
    }
    ctx->pc = 0x2DAFD4u;
    SET_GPR_U32(ctx, 31, 0x2DAFDCu);
    ctx->pc = 0x2DAFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFD4u;
            // 0x2dafd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFDCu; }
        if (ctx->pc != 0x2DAFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFDCu; }
        if (ctx->pc != 0x2DAFDCu) { return; }
    }
    ctx->pc = 0x2DAFDCu;
label_2dafdc:
    // 0x2dafdc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2dafdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dafe0:
    // 0x2dafe0: 0xc0b6d48  jal         func_2DB520
label_2dafe4:
    if (ctx->pc == 0x2DAFE4u) {
        ctx->pc = 0x2DAFE4u;
            // 0x2dafe4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DAFE8u;
        goto label_2dafe8;
    }
    ctx->pc = 0x2DAFE0u;
    SET_GPR_U32(ctx, 31, 0x2DAFE8u);
    ctx->pc = 0x2DAFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFE0u;
            // 0x2dafe4: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFE8u; }
        if (ctx->pc != 0x2DAFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFE8u; }
        if (ctx->pc != 0x2DAFE8u) { return; }
    }
    ctx->pc = 0x2DAFE8u;
label_2dafe8:
    // 0x2dafe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dafe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dafec:
    // 0x2dafec: 0xc0b6d38  jal         func_2DB4E0
label_2daff0:
    if (ctx->pc == 0x2DAFF0u) {
        ctx->pc = 0x2DAFF0u;
            // 0x2daff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFF4u;
        goto label_2daff4;
    }
    ctx->pc = 0x2DAFECu;
    SET_GPR_U32(ctx, 31, 0x2DAFF4u);
    ctx->pc = 0x2DAFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFECu;
            // 0x2daff0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFF4u; }
        if (ctx->pc != 0x2DAFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFF4u; }
        if (ctx->pc != 0x2DAFF4u) { return; }
    }
    ctx->pc = 0x2DAFF4u;
label_2daff4:
    // 0x2daff4: 0xc0b6d14  jal         func_2DB450
label_2daff8:
    if (ctx->pc == 0x2DAFF8u) {
        ctx->pc = 0x2DAFF8u;
            // 0x2daff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DAFFCu;
        goto label_2daffc;
    }
    ctx->pc = 0x2DAFF4u;
    SET_GPR_U32(ctx, 31, 0x2DAFFCu);
    ctx->pc = 0x2DAFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DAFF4u;
            // 0x2daff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB450u;
    if (runtime->hasFunction(0x2DB450u)) {
        auto targetFn = runtime->lookupFunction(0x2DB450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFFCu; }
        if (ctx->pc != 0x2DAFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB450_0x2db450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DAFFCu; }
        if (ctx->pc != 0x2DAFFCu) { return; }
    }
    ctx->pc = 0x2DAFFCu;
label_2daffc:
    // 0x2daffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2daffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db000:
    // 0x2db000: 0xc0b6d90  jal         func_2DB640
label_2db004:
    if (ctx->pc == 0x2DB004u) {
        ctx->pc = 0x2DB004u;
            // 0x2db004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB008u;
        goto label_2db008;
    }
    ctx->pc = 0x2DB000u;
    SET_GPR_U32(ctx, 31, 0x2DB008u);
    ctx->pc = 0x2DB004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB000u;
            // 0x2db004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB008u; }
        if (ctx->pc != 0x2DB008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB008u; }
        if (ctx->pc != 0x2DB008u) { return; }
    }
    ctx->pc = 0x2DB008u;
label_2db008:
    // 0x2db008: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2db008u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db00c:
    // 0x2db00c: 0xc0b6d48  jal         func_2DB520
label_2db010:
    if (ctx->pc == 0x2DB010u) {
        ctx->pc = 0x2DB010u;
            // 0x2db010: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x2DB014u;
        goto label_2db014;
    }
    ctx->pc = 0x2DB00Cu;
    SET_GPR_U32(ctx, 31, 0x2DB014u);
    ctx->pc = 0x2DB010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB00Cu;
            // 0x2db010: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB520u;
    if (runtime->hasFunction(0x2DB520u)) {
        auto targetFn = runtime->lookupFunction(0x2DB520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB014u; }
        if (ctx->pc != 0x2DB014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB520_0x2db520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB014u; }
        if (ctx->pc != 0x2DB014u) { return; }
    }
    ctx->pc = 0x2DB014u;
label_2db014:
    // 0x2db014: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2db014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db018:
    // 0x2db018: 0xc0b6d38  jal         func_2DB4E0
label_2db01c:
    if (ctx->pc == 0x2DB01Cu) {
        ctx->pc = 0x2DB01Cu;
            // 0x2db01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB020u;
        goto label_2db020;
    }
    ctx->pc = 0x2DB018u;
    SET_GPR_U32(ctx, 31, 0x2DB020u);
    ctx->pc = 0x2DB01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB018u;
            // 0x2db01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB4E0u;
    if (runtime->hasFunction(0x2DB4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB020u; }
        if (ctx->pc != 0x2DB020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB4E0_0x2db4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB020u; }
        if (ctx->pc != 0x2DB020u) { return; }
    }
    ctx->pc = 0x2DB020u;
label_2db020:
    // 0x2db020: 0xc0b6d14  jal         func_2DB450
label_2db024:
    if (ctx->pc == 0x2DB024u) {
        ctx->pc = 0x2DB024u;
            // 0x2db024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB028u;
        goto label_2db028;
    }
    ctx->pc = 0x2DB020u;
    SET_GPR_U32(ctx, 31, 0x2DB028u);
    ctx->pc = 0x2DB024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB020u;
            // 0x2db024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB450u;
    if (runtime->hasFunction(0x2DB450u)) {
        auto targetFn = runtime->lookupFunction(0x2DB450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB028u; }
        if (ctx->pc != 0x2DB028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB450_0x2db450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB028u; }
        if (ctx->pc != 0x2DB028u) { return; }
    }
    ctx->pc = 0x2DB028u;
label_2db028:
    // 0x2db028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db02c:
    // 0x2db02c: 0xc0b6d90  jal         func_2DB640
label_2db030:
    if (ctx->pc == 0x2DB030u) {
        ctx->pc = 0x2DB030u;
            // 0x2db030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2DB034u;
        goto label_2db034;
    }
    ctx->pc = 0x2DB02Cu;
    SET_GPR_U32(ctx, 31, 0x2DB034u);
    ctx->pc = 0x2DB030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB02Cu;
            // 0x2db030: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB640u;
    if (runtime->hasFunction(0x2DB640u)) {
        auto targetFn = runtime->lookupFunction(0x2DB640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB034u; }
        if (ctx->pc != 0x2DB034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB640_0x2db640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB034u; }
        if (ctx->pc != 0x2DB034u) { return; }
    }
    ctx->pc = 0x2DB034u;
label_2db034:
    // 0x2db034: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x2db034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2db038:
    // 0x2db038: 0xc6ed0000  lwc1        $f13, 0x0($s7)
    ctx->pc = 0x2db038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2db03c:
    // 0x2db03c: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x2db03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2db040:
    // 0x2db040: 0xc04cbd8  jal         func_132F60
label_2db044:
    if (ctx->pc == 0x2DB044u) {
        ctx->pc = 0x2DB044u;
            // 0x2db044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB048u;
        goto label_2db048;
    }
    ctx->pc = 0x2DB040u;
    SET_GPR_U32(ctx, 31, 0x2DB048u);
    ctx->pc = 0x2DB044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB040u;
            // 0x2db044: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB048u; }
        if (ctx->pc != 0x2DB048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB048u; }
        if (ctx->pc != 0x2DB048u) { return; }
    }
    ctx->pc = 0x2DB048u;
label_2db048:
    // 0x2db048: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2db04c:
    if (ctx->pc == 0x2DB04Cu) {
        ctx->pc = 0x2DB050u;
        goto label_2db050;
    }
    ctx->pc = 0x2DB048u;
    {
        const bool branch_taken_0x2db048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db048) {
            ctx->pc = 0x2DB05Cu;
            goto label_2db05c;
        }
    }
    ctx->pc = 0x2DB050u;
label_2db050:
    // 0x2db050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2db050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2db054:
    // 0x2db054: 0xc0b6d08  jal         func_2DB420
label_2db058:
    if (ctx->pc == 0x2DB058u) {
        ctx->pc = 0x2DB058u;
            // 0x2db058: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB05Cu;
        goto label_2db05c;
    }
    ctx->pc = 0x2DB054u;
    SET_GPR_U32(ctx, 31, 0x2DB05Cu);
    ctx->pc = 0x2DB058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB054u;
            // 0x2db058: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB420u;
    if (runtime->hasFunction(0x2DB420u)) {
        auto targetFn = runtime->lookupFunction(0x2DB420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB05Cu; }
        if (ctx->pc != 0x2DB05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB420_0x2db420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB05Cu; }
        if (ctx->pc != 0x2DB05Cu) { return; }
    }
    ctx->pc = 0x2DB05Cu;
label_2db05c:
    // 0x2db05c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db060:
    // 0x2db060: 0xc0770dc  jal         func_1DC370
label_2db064:
    if (ctx->pc == 0x2DB064u) {
        ctx->pc = 0x2DB064u;
            // 0x2db064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB068u;
        goto label_2db068;
    }
    ctx->pc = 0x2DB060u;
    SET_GPR_U32(ctx, 31, 0x2DB068u);
    ctx->pc = 0x2DB064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB060u;
            // 0x2db064: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC370u;
    if (runtime->hasFunction(0x1DC370u)) {
        auto targetFn = runtime->lookupFunction(0x1DC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB068u; }
        if (ctx->pc != 0x2DB068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC370_0x1dc370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB068u; }
        if (ctx->pc != 0x2DB068u) { return; }
    }
    ctx->pc = 0x2DB068u;
label_2db068:
    // 0x2db068: 0xc0b6d04  jal         func_2DB410
label_2db06c:
    if (ctx->pc == 0x2DB06Cu) {
        ctx->pc = 0x2DB06Cu;
            // 0x2db06c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB070u;
        goto label_2db070;
    }
    ctx->pc = 0x2DB068u;
    SET_GPR_U32(ctx, 31, 0x2DB070u);
    ctx->pc = 0x2DB06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB068u;
            // 0x2db06c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB410u;
    if (runtime->hasFunction(0x2DB410u)) {
        auto targetFn = runtime->lookupFunction(0x2DB410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB070u; }
        if (ctx->pc != 0x2DB070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB410_0x2db410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB070u; }
        if (ctx->pc != 0x2DB070u) { return; }
    }
    ctx->pc = 0x2DB070u;
label_2db070:
    // 0x2db070: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db074:
    // 0x2db074: 0xc0b6d00  jal         func_2DB400
label_2db078:
    if (ctx->pc == 0x2DB078u) {
        ctx->pc = 0x2DB078u;
            // 0x2db078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB07Cu;
        goto label_2db07c;
    }
    ctx->pc = 0x2DB074u;
    SET_GPR_U32(ctx, 31, 0x2DB07Cu);
    ctx->pc = 0x2DB078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB074u;
            // 0x2db078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB400u;
    if (runtime->hasFunction(0x2DB400u)) {
        auto targetFn = runtime->lookupFunction(0x2DB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB07Cu; }
        if (ctx->pc != 0x2DB07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB400_0x2db400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB07Cu; }
        if (ctx->pc != 0x2DB07Cu) { return; }
    }
    ctx->pc = 0x2DB07Cu;
label_2db07c:
    // 0x2db07c: 0x10000080  b           . + 4 + (0x80 << 2)
label_2db080:
    if (ctx->pc == 0x2DB080u) {
        ctx->pc = 0x2DB084u;
        goto label_2db084;
    }
    ctx->pc = 0x2DB07Cu;
    {
        const bool branch_taken_0x2db07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db07c) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB084u;
label_2db084:
    // 0x2db084: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db088:
    // 0x2db088: 0xc077fb0  jal         func_1DFEC0
label_2db08c:
    if (ctx->pc == 0x2DB08Cu) {
        ctx->pc = 0x2DB08Cu;
            // 0x2db08c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB090u;
        goto label_2db090;
    }
    ctx->pc = 0x2DB088u;
    SET_GPR_U32(ctx, 31, 0x2DB090u);
    ctx->pc = 0x2DB08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB088u;
            // 0x2db08c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB090u; }
        if (ctx->pc != 0x2DB090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB090u; }
        if (ctx->pc != 0x2DB090u) { return; }
    }
    ctx->pc = 0x2DB090u;
label_2db090:
    // 0x2db090: 0xc0b6d4c  jal         func_2DB530
label_2db094:
    if (ctx->pc == 0x2DB094u) {
        ctx->pc = 0x2DB094u;
            // 0x2db094: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB098u;
        goto label_2db098;
    }
    ctx->pc = 0x2DB090u;
    SET_GPR_U32(ctx, 31, 0x2DB098u);
    ctx->pc = 0x2DB094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB090u;
            // 0x2db094: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB530u;
    if (runtime->hasFunction(0x2DB530u)) {
        auto targetFn = runtime->lookupFunction(0x2DB530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB098u; }
        if (ctx->pc != 0x2DB098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB530_0x2db530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB098u; }
        if (ctx->pc != 0x2DB098u) { return; }
    }
    ctx->pc = 0x2DB098u;
label_2db098:
    // 0x2db098: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db09c:
    // 0x2db09c: 0xc077578  jal         func_1DD5E0
label_2db0a0:
    if (ctx->pc == 0x2DB0A0u) {
        ctx->pc = 0x2DB0A0u;
            // 0x2db0a0: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DB0A4u;
        goto label_2db0a4;
    }
    ctx->pc = 0x2DB09Cu;
    SET_GPR_U32(ctx, 31, 0x2DB0A4u);
    ctx->pc = 0x2DB0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB09Cu;
            // 0x2db0a0: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5E0u;
    if (runtime->hasFunction(0x1DD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0A4u; }
        if (ctx->pc != 0x2DB0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5E0_0x1dd5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0A4u; }
        if (ctx->pc != 0x2DB0A4u) { return; }
    }
    ctx->pc = 0x2DB0A4u;
label_2db0a4:
    // 0x2db0a4: 0x10000076  b           . + 4 + (0x76 << 2)
label_2db0a8:
    if (ctx->pc == 0x2DB0A8u) {
        ctx->pc = 0x2DB0A8u;
            // 0x2db0a8: 0xa0500001  sb          $s0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x2DB0ACu;
        goto label_2db0ac;
    }
    ctx->pc = 0x2DB0A4u;
    {
        const bool branch_taken_0x2db0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0A4u;
            // 0x2db0a8: 0xa0500001  sb          $s0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0a4) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB0ACu;
label_2db0ac:
    // 0x2db0ac: 0xc077fb0  jal         func_1DFEC0
label_2db0b0:
    if (ctx->pc == 0x2DB0B0u) {
        ctx->pc = 0x2DB0B0u;
            // 0x2db0b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB0B4u;
        goto label_2db0b4;
    }
    ctx->pc = 0x2DB0ACu;
    SET_GPR_U32(ctx, 31, 0x2DB0B4u);
    ctx->pc = 0x2DB0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0ACu;
            // 0x2db0b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0B4u; }
        if (ctx->pc != 0x2DB0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0B4u; }
        if (ctx->pc != 0x2DB0B4u) { return; }
    }
    ctx->pc = 0x2DB0B4u;
label_2db0b4:
    // 0x2db0b4: 0xc0b6d4c  jal         func_2DB530
label_2db0b8:
    if (ctx->pc == 0x2DB0B8u) {
        ctx->pc = 0x2DB0B8u;
            // 0x2db0b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0BCu;
        goto label_2db0bc;
    }
    ctx->pc = 0x2DB0B4u;
    SET_GPR_U32(ctx, 31, 0x2DB0BCu);
    ctx->pc = 0x2DB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0B4u;
            // 0x2db0b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB530u;
    if (runtime->hasFunction(0x2DB530u)) {
        auto targetFn = runtime->lookupFunction(0x2DB530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0BCu; }
        if (ctx->pc != 0x2DB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB530_0x2db530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0BCu; }
        if (ctx->pc != 0x2DB0BCu) { return; }
    }
    ctx->pc = 0x2DB0BCu;
label_2db0bc:
    // 0x2db0bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db0c0:
    // 0x2db0c0: 0xc077578  jal         func_1DD5E0
label_2db0c4:
    if (ctx->pc == 0x2DB0C4u) {
        ctx->pc = 0x2DB0C4u;
            // 0x2db0c4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DB0C8u;
        goto label_2db0c8;
    }
    ctx->pc = 0x2DB0C0u;
    SET_GPR_U32(ctx, 31, 0x2DB0C8u);
    ctx->pc = 0x2DB0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0C0u;
            // 0x2db0c4: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5E0u;
    if (runtime->hasFunction(0x1DD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0C8u; }
        if (ctx->pc != 0x2DB0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5E0_0x1dd5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0C8u; }
        if (ctx->pc != 0x2DB0C8u) { return; }
    }
    ctx->pc = 0x2DB0C8u;
label_2db0c8:
    // 0x2db0c8: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2db0cc:
    if (ctx->pc == 0x2DB0CCu) {
        ctx->pc = 0x2DB0CCu;
            // 0x2db0cc: 0xa0500001  sb          $s0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x2DB0D0u;
        goto label_2db0d0;
    }
    ctx->pc = 0x2DB0C8u;
    {
        const bool branch_taken_0x2db0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0C8u;
            // 0x2db0cc: 0xa0500001  sb          $s0, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0c8) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB0D0u;
label_2db0d0:
    // 0x2db0d0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2db0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2db0d4:
    // 0x2db0d4: 0xc0b6cfc  jal         func_2DB3F0
label_2db0d8:
    if (ctx->pc == 0x2DB0D8u) {
        ctx->pc = 0x2DB0DCu;
        goto label_2db0dc;
    }
    ctx->pc = 0x2DB0D4u;
    SET_GPR_U32(ctx, 31, 0x2DB0DCu);
    ctx->pc = 0x2DB3F0u;
    if (runtime->hasFunction(0x2DB3F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0DCu; }
        if (ctx->pc != 0x2DB0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3F0_0x2db3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0DCu; }
        if (ctx->pc != 0x2DB0DCu) { return; }
    }
    ctx->pc = 0x2DB0DCu;
label_2db0dc:
    // 0x2db0dc: 0xc0b6cf0  jal         func_2DB3C0
label_2db0e0:
    if (ctx->pc == 0x2DB0E0u) {
        ctx->pc = 0x2DB0E0u;
            // 0x2db0e0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x2DB0E4u;
        goto label_2db0e4;
    }
    ctx->pc = 0x2DB0DCu;
    SET_GPR_U32(ctx, 31, 0x2DB0E4u);
    ctx->pc = 0x2DB0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0DCu;
            // 0x2db0e0: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3C0u;
    if (runtime->hasFunction(0x2DB3C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0E4u; }
        if (ctx->pc != 0x2DB0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3C0_0x2db3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0E4u; }
        if (ctx->pc != 0x2DB0E4u) { return; }
    }
    ctx->pc = 0x2DB0E4u;
label_2db0e4:
    // 0x2db0e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2db0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2db0e8:
    // 0x2db0e8: 0xc04cc04  jal         func_133010
label_2db0ec:
    if (ctx->pc == 0x2DB0ECu) {
        ctx->pc = 0x2DB0ECu;
            // 0x2db0ec: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2DB0F0u;
        goto label_2db0f0;
    }
    ctx->pc = 0x2DB0E8u;
    SET_GPR_U32(ctx, 31, 0x2DB0F0u);
    ctx->pc = 0x2DB0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0E8u;
            // 0x2db0ec: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0F0u; }
        if (ctx->pc != 0x2DB0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0F0u; }
        if (ctx->pc != 0x2DB0F0u) { return; }
    }
    ctx->pc = 0x2DB0F0u;
label_2db0f0:
    // 0x2db0f0: 0xc0b6d50  jal         func_2DB540
label_2db0f4:
    if (ctx->pc == 0x2DB0F4u) {
        ctx->pc = 0x2DB0F4u;
            // 0x2db0f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0F8u;
        goto label_2db0f8;
    }
    ctx->pc = 0x2DB0F0u;
    SET_GPR_U32(ctx, 31, 0x2DB0F8u);
    ctx->pc = 0x2DB0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0F0u;
            // 0x2db0f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB540u;
    if (runtime->hasFunction(0x2DB540u)) {
        auto targetFn = runtime->lookupFunction(0x2DB540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0F8u; }
        if (ctx->pc != 0x2DB0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB540_0x2db540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB0F8u; }
        if (ctx->pc != 0x2DB0F8u) { return; }
    }
    ctx->pc = 0x2DB0F8u;
label_2db0f8:
    // 0x2db0f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2db0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2db0fc:
    // 0x2db0fc: 0x50430017  beql        $v0, $v1, . + 4 + (0x17 << 2)
label_2db100:
    if (ctx->pc == 0x2DB100u) {
        ctx->pc = 0x2DB100u;
            // 0x2db100: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB104u;
        goto label_2db104;
    }
    ctx->pc = 0x2DB0FCu;
    {
        const bool branch_taken_0x2db0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db0fc) {
            ctx->pc = 0x2DB100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB0FCu;
            // 0x2db100: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB15Cu;
            goto label_2db15c;
        }
    }
    ctx->pc = 0x2DB104u;
label_2db104:
    // 0x2db104: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2db108:
    // 0x2db108: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_2db10c:
    if (ctx->pc == 0x2DB10Cu) {
        ctx->pc = 0x2DB10Cu;
            // 0x2db10c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB110u;
        goto label_2db110;
    }
    ctx->pc = 0x2DB108u;
    {
        const bool branch_taken_0x2db108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db108) {
            ctx->pc = 0x2DB10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB108u;
            // 0x2db10c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB118u;
            goto label_2db118;
        }
    }
    ctx->pc = 0x2DB110u;
label_2db110:
    // 0x2db110: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2db114:
    if (ctx->pc == 0x2DB114u) {
        ctx->pc = 0x2DB114u;
            // 0x2db114: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB118u;
        goto label_2db118;
    }
    ctx->pc = 0x2DB110u;
    {
        const bool branch_taken_0x2db110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB110u;
            // 0x2db114: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db110) {
            ctx->pc = 0x2DB180u;
            goto label_2db180;
        }
    }
    ctx->pc = 0x2DB118u;
label_2db118:
    // 0x2db118: 0xc0b6cec  jal         func_2DB3B0
label_2db11c:
    if (ctx->pc == 0x2DB11Cu) {
        ctx->pc = 0x2DB120u;
        goto label_2db120;
    }
    ctx->pc = 0x2DB118u;
    SET_GPR_U32(ctx, 31, 0x2DB120u);
    ctx->pc = 0x2DB3B0u;
    if (runtime->hasFunction(0x2DB3B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB120u; }
        if (ctx->pc != 0x2DB120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3B0_0x2db3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB120u; }
        if (ctx->pc != 0x2DB120u) { return; }
    }
    ctx->pc = 0x2DB120u;
label_2db120:
    // 0x2db120: 0xc0b6ce8  jal         func_2DB3A0
label_2db124:
    if (ctx->pc == 0x2DB124u) {
        ctx->pc = 0x2DB124u;
            // 0x2db124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB128u;
        goto label_2db128;
    }
    ctx->pc = 0x2DB120u;
    SET_GPR_U32(ctx, 31, 0x2DB128u);
    ctx->pc = 0x2DB124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB120u;
            // 0x2db124: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3A0u;
    if (runtime->hasFunction(0x2DB3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB128u; }
        if (ctx->pc != 0x2DB128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB3A0_0x2db3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB128u; }
        if (ctx->pc != 0x2DB128u) { return; }
    }
    ctx->pc = 0x2DB128u;
label_2db128:
    // 0x2db128: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x2db128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_2db12c:
    // 0x2db12c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db130:
    // 0x2db130: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2db130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2db134:
    // 0x2db134: 0xc04cca0  jal         func_133280
label_2db138:
    if (ctx->pc == 0x2DB138u) {
        ctx->pc = 0x2DB138u;
            // 0x2db138: 0x24c61990  addiu       $a2, $a2, 0x1990 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6544));
        ctx->pc = 0x2DB13Cu;
        goto label_2db13c;
    }
    ctx->pc = 0x2DB134u;
    SET_GPR_U32(ctx, 31, 0x2DB13Cu);
    ctx->pc = 0x2DB138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB134u;
            // 0x2db138: 0x24c61990  addiu       $a2, $a2, 0x1990 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB13Cu; }
        if (ctx->pc != 0x2DB13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB13Cu; }
        if (ctx->pc != 0x2DB13Cu) { return; }
    }
    ctx->pc = 0x2DB13Cu;
label_2db13c:
    // 0x2db13c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2db13cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_2db140:
    // 0x2db140: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2db140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2db144:
    // 0x2db144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db148:
    // 0x2db148: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2db148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2db14c:
    // 0x2db14c: 0xc04cc7c  jal         func_1331F0
label_2db150:
    if (ctx->pc == 0x2DB150u) {
        ctx->pc = 0x2DB150u;
            // 0x2db150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB154u;
        goto label_2db154;
    }
    ctx->pc = 0x2DB14Cu;
    SET_GPR_U32(ctx, 31, 0x2DB154u);
    ctx->pc = 0x2DB150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB14Cu;
            // 0x2db150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB154u; }
        if (ctx->pc != 0x2DB154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB154u; }
        if (ctx->pc != 0x2DB154u) { return; }
    }
    ctx->pc = 0x2DB154u;
label_2db154:
    // 0x2db154: 0x10000009  b           . + 4 + (0x9 << 2)
label_2db158:
    if (ctx->pc == 0x2DB158u) {
        ctx->pc = 0x2DB15Cu;
        goto label_2db15c;
    }
    ctx->pc = 0x2DB154u;
    {
        const bool branch_taken_0x2db154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db154) {
            ctx->pc = 0x2DB17Cu;
            goto label_2db17c;
        }
    }
    ctx->pc = 0x2DB15Cu;
label_2db15c:
    // 0x2db15c: 0xc0b6ce4  jal         func_2DB390
label_2db160:
    if (ctx->pc == 0x2DB160u) {
        ctx->pc = 0x2DB164u;
        goto label_2db164;
    }
    ctx->pc = 0x2DB15Cu;
    SET_GPR_U32(ctx, 31, 0x2DB164u);
    ctx->pc = 0x2DB390u;
    if (runtime->hasFunction(0x2DB390u)) {
        auto targetFn = runtime->lookupFunction(0x2DB390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB164u; }
        if (ctx->pc != 0x2DB164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB390_0x2db390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB164u; }
        if (ctx->pc != 0x2DB164u) { return; }
    }
    ctx->pc = 0x2DB164u;
label_2db164:
    // 0x2db164: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2db164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db168:
    // 0x2db168: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2db168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2db16c:
    // 0x2db16c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2db16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2db170:
    // 0x2db170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2db170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2db174:
    // 0x2db174: 0xc04cc7c  jal         func_1331F0
label_2db178:
    if (ctx->pc == 0x2DB178u) {
        ctx->pc = 0x2DB178u;
            // 0x2db178: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2DB17Cu;
        goto label_2db17c;
    }
    ctx->pc = 0x2DB174u;
    SET_GPR_U32(ctx, 31, 0x2DB17Cu);
    ctx->pc = 0x2DB178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB174u;
            // 0x2db178: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB17Cu; }
        if (ctx->pc != 0x2DB17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB17Cu; }
        if (ctx->pc != 0x2DB17Cu) { return; }
    }
    ctx->pc = 0x2DB17Cu;
label_2db17c:
    // 0x2db17c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db180:
    // 0x2db180: 0xc0b6ce0  jal         func_2DB380
label_2db184:
    if (ctx->pc == 0x2DB184u) {
        ctx->pc = 0x2DB188u;
        goto label_2db188;
    }
    ctx->pc = 0x2DB180u;
    SET_GPR_U32(ctx, 31, 0x2DB188u);
    ctx->pc = 0x2DB380u;
    if (runtime->hasFunction(0x2DB380u)) {
        auto targetFn = runtime->lookupFunction(0x2DB380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB188u; }
        if (ctx->pc != 0x2DB188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB380_0x2db380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB188u; }
        if (ctx->pc != 0x2DB188u) { return; }
    }
    ctx->pc = 0x2DB188u;
label_2db188:
    // 0x2db188: 0xc0a545c  jal         func_295170
label_2db18c:
    if (ctx->pc == 0x2DB18Cu) {
        ctx->pc = 0x2DB18Cu;
            // 0x2db18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB190u;
        goto label_2db190;
    }
    ctx->pc = 0x2DB188u;
    SET_GPR_U32(ctx, 31, 0x2DB190u);
    ctx->pc = 0x2DB18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB188u;
            // 0x2db18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB190u; }
        if (ctx->pc != 0x2DB190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB190u; }
        if (ctx->pc != 0x2DB190u) { return; }
    }
    ctx->pc = 0x2DB190u;
label_2db190:
    // 0x2db190: 0xc0b6cdc  jal         func_2DB370
label_2db194:
    if (ctx->pc == 0x2DB194u) {
        ctx->pc = 0x2DB194u;
            // 0x2db194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB198u;
        goto label_2db198;
    }
    ctx->pc = 0x2DB190u;
    SET_GPR_U32(ctx, 31, 0x2DB198u);
    ctx->pc = 0x2DB194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB190u;
            // 0x2db194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (runtime->hasFunction(0x2DB370u)) {
        auto targetFn = runtime->lookupFunction(0x2DB370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB198u; }
        if (ctx->pc != 0x2DB198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB370_0x2db370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB198u; }
        if (ctx->pc != 0x2DB198u) { return; }
    }
    ctx->pc = 0x2DB198u;
label_2db198:
    // 0x2db198: 0xc0b6cd8  jal         func_2DB360
label_2db19c:
    if (ctx->pc == 0x2DB19Cu) {
        ctx->pc = 0x2DB19Cu;
            // 0x2db19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1A0u;
        goto label_2db1a0;
    }
    ctx->pc = 0x2DB198u;
    SET_GPR_U32(ctx, 31, 0x2DB1A0u);
    ctx->pc = 0x2DB19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB198u;
            // 0x2db19c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB360u;
    if (runtime->hasFunction(0x2DB360u)) {
        auto targetFn = runtime->lookupFunction(0x2DB360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1A0u; }
        if (ctx->pc != 0x2DB1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB360_0x2db360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1A0u; }
        if (ctx->pc != 0x2DB1A0u) { return; }
    }
    ctx->pc = 0x2DB1A0u;
label_2db1a0:
    // 0x2db1a0: 0x3c032001  lui         $v1, 0x2001
    ctx->pc = 0x2db1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8193 << 16));
label_2db1a4:
    // 0x2db1a4: 0xc0b6dcc  jal         func_2DB730
label_2db1a8:
    if (ctx->pc == 0x2DB1A8u) {
        ctx->pc = 0x2DB1A8u;
            // 0x2db1a8: 0x438024  and         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->pc = 0x2DB1ACu;
        goto label_2db1ac;
    }
    ctx->pc = 0x2DB1A4u;
    SET_GPR_U32(ctx, 31, 0x2DB1ACu);
    ctx->pc = 0x2DB1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1A4u;
            // 0x2db1a8: 0x438024  and         $s0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB730u;
    if (runtime->hasFunction(0x2DB730u)) {
        auto targetFn = runtime->lookupFunction(0x2DB730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1ACu; }
        if (ctx->pc != 0x2DB1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB730_0x2db730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1ACu; }
        if (ctx->pc != 0x2DB1ACu) { return; }
    }
    ctx->pc = 0x2DB1ACu;
label_2db1ac:
    // 0x2db1ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2db1acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2db1b0:
    // 0x2db1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db1b4:
    // 0x2db1b4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x2db1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2db1b8:
    // 0x2db1b8: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2db1b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2db1bc:
    // 0x2db1bc: 0xc0d16dc  jal         func_345B70
label_2db1c0:
    if (ctx->pc == 0x2DB1C0u) {
        ctx->pc = 0x2DB1C0u;
            // 0x2db1c0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2DB1C4u;
        goto label_2db1c4;
    }
    ctx->pc = 0x2DB1BCu;
    SET_GPR_U32(ctx, 31, 0x2DB1C4u);
    ctx->pc = 0x2DB1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1BCu;
            // 0x2db1c0: 0x27a700d0  addiu       $a3, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x345B70u;
    if (runtime->hasFunction(0x345B70u)) {
        auto targetFn = runtime->lookupFunction(0x345B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1C4u; }
        if (ctx->pc != 0x2DB1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00345B70_0x345b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1C4u; }
        if (ctx->pc != 0x2DB1C4u) { return; }
    }
    ctx->pc = 0x2DB1C4u;
label_2db1c4:
    // 0x2db1c4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2db1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_2db1c8:
    // 0x2db1c8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2db1c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2db1cc:
    // 0x2db1cc: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_2db1d0:
    if (ctx->pc == 0x2DB1D0u) {
        ctx->pc = 0x2DB1D0u;
            // 0x2db1d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1D4u;
        goto label_2db1d4;
    }
    ctx->pc = 0x2DB1CCu;
    {
        const bool branch_taken_0x2db1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1cc) {
            ctx->pc = 0x2DB1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1CCu;
            // 0x2db1d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB260u;
            goto label_2db260;
        }
    }
    ctx->pc = 0x2DB1D4u;
label_2db1d4:
    // 0x2db1d4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2db1d8:
    // 0x2db1d8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_2db1dc:
    if (ctx->pc == 0x2DB1DCu) {
        ctx->pc = 0x2DB1DCu;
            // 0x2db1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1E0u;
        goto label_2db1e0;
    }
    ctx->pc = 0x2DB1D8u;
    {
        const bool branch_taken_0x2db1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db1d8) {
            ctx->pc = 0x2DB1DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1D8u;
            // 0x2db1dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB244u;
            goto label_2db244;
        }
    }
    ctx->pc = 0x2DB1E0u;
label_2db1e0:
    // 0x2db1e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db1e4:
    // 0x2db1e4: 0xc04cc08  jal         func_133020
label_2db1e8:
    if (ctx->pc == 0x2DB1E8u) {
        ctx->pc = 0x2DB1E8u;
            // 0x2db1e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2DB1ECu;
        goto label_2db1ec;
    }
    ctx->pc = 0x2DB1E4u;
    SET_GPR_U32(ctx, 31, 0x2DB1ECu);
    ctx->pc = 0x2DB1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB1E4u;
            // 0x2db1e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1ECu; }
        if (ctx->pc != 0x2DB1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB1ECu; }
        if (ctx->pc != 0x2DB1ECu) { return; }
    }
    ctx->pc = 0x2DB1ECu;
label_2db1ec:
    // 0x2db1ec: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x2db1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_2db1f0:
    // 0x2db1f0: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x2db1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
label_2db1f4:
    // 0x2db1f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2db1f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2db1f8:
    // 0x2db1f8: 0x0  nop
    ctx->pc = 0x2db1f8u;
    // NOP
label_2db1fc:
    // 0x2db1fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2db1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2db200:
    // 0x2db200: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_2db204:
    if (ctx->pc == 0x2DB204u) {
        ctx->pc = 0x2DB204u;
            // 0x2db204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB208u;
        goto label_2db208;
    }
    ctx->pc = 0x2DB200u;
    {
        const bool branch_taken_0x2db200 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db200) {
            ctx->pc = 0x2DB204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB200u;
            // 0x2db204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB218u;
            goto label_2db218;
        }
    }
    ctx->pc = 0x2DB208u;
label_2db208:
    // 0x2db208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2db208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2db20c:
    // 0x2db20c: 0xc04cc04  jal         func_133010
label_2db210:
    if (ctx->pc == 0x2DB210u) {
        ctx->pc = 0x2DB210u;
            // 0x2db210: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2DB214u;
        goto label_2db214;
    }
    ctx->pc = 0x2DB20Cu;
    SET_GPR_U32(ctx, 31, 0x2DB214u);
    ctx->pc = 0x2DB210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB20Cu;
            // 0x2db210: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB214u; }
        if (ctx->pc != 0x2DB214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB214u; }
        if (ctx->pc != 0x2DB214u) { return; }
    }
    ctx->pc = 0x2DB214u;
label_2db214:
    // 0x2db214: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db218:
    // 0x2db218: 0xc0b6d18  jal         func_2DB460
label_2db21c:
    if (ctx->pc == 0x2DB21Cu) {
        ctx->pc = 0x2DB220u;
        goto label_2db220;
    }
    ctx->pc = 0x2DB218u;
    SET_GPR_U32(ctx, 31, 0x2DB220u);
    ctx->pc = 0x2DB460u;
    if (runtime->hasFunction(0x2DB460u)) {
        auto targetFn = runtime->lookupFunction(0x2DB460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB220u; }
        if (ctx->pc != 0x2DB220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB460_0x2db460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB220u; }
        if (ctx->pc != 0x2DB220u) { return; }
    }
    ctx->pc = 0x2DB220u;
label_2db220:
    // 0x2db220: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db224:
    // 0x2db224: 0xc04cc04  jal         func_133010
label_2db228:
    if (ctx->pc == 0x2DB228u) {
        ctx->pc = 0x2DB228u;
            // 0x2db228: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2DB22Cu;
        goto label_2db22c;
    }
    ctx->pc = 0x2DB224u;
    SET_GPR_U32(ctx, 31, 0x2DB22Cu);
    ctx->pc = 0x2DB228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB224u;
            // 0x2db228: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB22Cu; }
        if (ctx->pc != 0x2DB22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB22Cu; }
        if (ctx->pc != 0x2DB22Cu) { return; }
    }
    ctx->pc = 0x2DB22Cu;
label_2db22c:
    // 0x2db22c: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x2db22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2db230:
    // 0x2db230: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2db234:
    if (ctx->pc == 0x2DB234u) {
        ctx->pc = 0x2DB238u;
        goto label_2db238;
    }
    ctx->pc = 0x2DB230u;
    {
        const bool branch_taken_0x2db230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db230) {
            ctx->pc = 0x2DB240u;
            goto label_2db240;
        }
    }
    ctx->pc = 0x2DB238u;
label_2db238:
    // 0x2db238: 0xc0b6d08  jal         func_2DB420
label_2db23c:
    if (ctx->pc == 0x2DB23Cu) {
        ctx->pc = 0x2DB23Cu;
            // 0x2db23c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB240u;
        goto label_2db240;
    }
    ctx->pc = 0x2DB238u;
    SET_GPR_U32(ctx, 31, 0x2DB240u);
    ctx->pc = 0x2DB23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB238u;
            // 0x2db23c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB420u;
    if (runtime->hasFunction(0x2DB420u)) {
        auto targetFn = runtime->lookupFunction(0x2DB420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB240u; }
        if (ctx->pc != 0x2DB240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB420_0x2db420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB240u; }
        if (ctx->pc != 0x2DB240u) { return; }
    }
    ctx->pc = 0x2DB240u;
label_2db240:
    // 0x2db240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2db240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db244:
    // 0x2db244: 0xc0770dc  jal         func_1DC370
label_2db248:
    if (ctx->pc == 0x2DB248u) {
        ctx->pc = 0x2DB248u;
            // 0x2db248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB24Cu;
        goto label_2db24c;
    }
    ctx->pc = 0x2DB244u;
    SET_GPR_U32(ctx, 31, 0x2DB24Cu);
    ctx->pc = 0x2DB248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB244u;
            // 0x2db248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC370u;
    if (runtime->hasFunction(0x1DC370u)) {
        auto targetFn = runtime->lookupFunction(0x1DC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB24Cu; }
        if (ctx->pc != 0x2DB24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC370_0x1dc370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB24Cu; }
        if (ctx->pc != 0x2DB24Cu) { return; }
    }
    ctx->pc = 0x2DB24Cu;
label_2db24c:
    // 0x2db24c: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x2db24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2db250:
    // 0x2db250: 0xc0b6d00  jal         func_2DB400
label_2db254:
    if (ctx->pc == 0x2DB254u) {
        ctx->pc = 0x2DB254u;
            // 0x2db254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB258u;
        goto label_2db258;
    }
    ctx->pc = 0x2DB250u;
    SET_GPR_U32(ctx, 31, 0x2DB258u);
    ctx->pc = 0x2DB254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB250u;
            // 0x2db254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB400u;
    if (runtime->hasFunction(0x2DB400u)) {
        auto targetFn = runtime->lookupFunction(0x2DB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB258u; }
        if (ctx->pc != 0x2DB258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB400_0x2db400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB258u; }
        if (ctx->pc != 0x2DB258u) { return; }
    }
    ctx->pc = 0x2DB258u;
label_2db258:
    // 0x2db258: 0x10000009  b           . + 4 + (0x9 << 2)
label_2db25c:
    if (ctx->pc == 0x2DB25Cu) {
        ctx->pc = 0x2DB260u;
        goto label_2db260;
    }
    ctx->pc = 0x2DB258u;
    {
        const bool branch_taken_0x2db258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db258) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB260u;
label_2db260:
    // 0x2db260: 0xc077fb0  jal         func_1DFEC0
label_2db264:
    if (ctx->pc == 0x2DB264u) {
        ctx->pc = 0x2DB264u;
            // 0x2db264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB268u;
        goto label_2db268;
    }
    ctx->pc = 0x2DB260u;
    SET_GPR_U32(ctx, 31, 0x2DB268u);
    ctx->pc = 0x2DB264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB260u;
            // 0x2db264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB268u; }
        if (ctx->pc != 0x2DB268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB268u; }
        if (ctx->pc != 0x2DB268u) { return; }
    }
    ctx->pc = 0x2DB268u;
label_2db268:
    // 0x2db268: 0xc0b6d4c  jal         func_2DB530
label_2db26c:
    if (ctx->pc == 0x2DB26Cu) {
        ctx->pc = 0x2DB26Cu;
            // 0x2db26c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB270u;
        goto label_2db270;
    }
    ctx->pc = 0x2DB268u;
    SET_GPR_U32(ctx, 31, 0x2DB270u);
    ctx->pc = 0x2DB26Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB268u;
            // 0x2db26c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB530u;
    if (runtime->hasFunction(0x2DB530u)) {
        auto targetFn = runtime->lookupFunction(0x2DB530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB270u; }
        if (ctx->pc != 0x2DB270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB530_0x2db530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB270u; }
        if (ctx->pc != 0x2DB270u) { return; }
    }
    ctx->pc = 0x2DB270u;
label_2db270:
    // 0x2db270: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db274:
    // 0x2db274: 0xc077578  jal         func_1DD5E0
label_2db278:
    if (ctx->pc == 0x2DB278u) {
        ctx->pc = 0x2DB278u;
            // 0x2db278: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2DB27Cu;
        goto label_2db27c;
    }
    ctx->pc = 0x2DB274u;
    SET_GPR_U32(ctx, 31, 0x2DB27Cu);
    ctx->pc = 0x2DB278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB274u;
            // 0x2db278: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5E0u;
    if (runtime->hasFunction(0x1DD5E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB27Cu; }
        if (ctx->pc != 0x2DB27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5E0_0x1dd5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB27Cu; }
        if (ctx->pc != 0x2DB27Cu) { return; }
    }
    ctx->pc = 0x2DB27Cu;
label_2db27c:
    // 0x2db27c: 0xa0500001  sb          $s0, 0x1($v0)
    ctx->pc = 0x2db27cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 16));
label_2db280:
    // 0x2db280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2db280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2db284:
    // 0x2db284: 0xc0b6cd0  jal         func_2DB340
label_2db288:
    if (ctx->pc == 0x2DB288u) {
        ctx->pc = 0x2DB28Cu;
        goto label_2db28c;
    }
    ctx->pc = 0x2DB284u;
    SET_GPR_U32(ctx, 31, 0x2DB28Cu);
    ctx->pc = 0x2DB340u;
    if (runtime->hasFunction(0x2DB340u)) {
        auto targetFn = runtime->lookupFunction(0x2DB340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB28Cu; }
        if (ctx->pc != 0x2DB28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB340_0x2db340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB28Cu; }
        if (ctx->pc != 0x2DB28Cu) { return; }
    }
    ctx->pc = 0x2DB28Cu;
label_2db28c:
    // 0x2db28c: 0x90500001  lbu         $s0, 0x1($v0)
    ctx->pc = 0x2db28cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2db290:
    // 0x2db290: 0xc0b6cc8  jal         func_2DB320
label_2db294:
    if (ctx->pc == 0x2DB294u) {
        ctx->pc = 0x2DB294u;
            // 0x2db294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB298u;
        goto label_2db298;
    }
    ctx->pc = 0x2DB290u;
    SET_GPR_U32(ctx, 31, 0x2DB298u);
    ctx->pc = 0x2DB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB290u;
            // 0x2db294: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB320u;
    if (runtime->hasFunction(0x2DB320u)) {
        auto targetFn = runtime->lookupFunction(0x2DB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB298u; }
        if (ctx->pc != 0x2DB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB320_0x2db320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB298u; }
        if (ctx->pc != 0x2DB298u) { return; }
    }
    ctx->pc = 0x2DB298u;
label_2db298:
    // 0x2db298: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2db298u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2db29c:
    // 0x2db29c: 0x12030007  beq         $s0, $v1, . + 4 + (0x7 << 2)
label_2db2a0:
    if (ctx->pc == 0x2DB2A0u) {
        ctx->pc = 0x2DB2A4u;
        goto label_2db2a4;
    }
    ctx->pc = 0x2DB29Cu;
    {
        const bool branch_taken_0x2db29c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db29c) {
            ctx->pc = 0x2DB2BCu;
            goto label_2db2bc;
        }
    }
    ctx->pc = 0x2DB2A4u;
label_2db2a4:
    // 0x2db2a4: 0xc0b6cc8  jal         func_2DB320
label_2db2a8:
    if (ctx->pc == 0x2DB2A8u) {
        ctx->pc = 0x2DB2A8u;
            // 0x2db2a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DB2ACu;
        goto label_2db2ac;
    }
    ctx->pc = 0x2DB2A4u;
    SET_GPR_U32(ctx, 31, 0x2DB2ACu);
    ctx->pc = 0x2DB2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB2A4u;
            // 0x2db2a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB320u;
    if (runtime->hasFunction(0x2DB320u)) {
        auto targetFn = runtime->lookupFunction(0x2DB320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB2ACu; }
        if (ctx->pc != 0x2DB2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB320_0x2db320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB2ACu; }
        if (ctx->pc != 0x2DB2ACu) { return; }
    }
    ctx->pc = 0x2DB2ACu;
label_2db2ac:
    // 0x2db2ac: 0x26a402a0  addiu       $a0, $s5, 0x2A0
    ctx->pc = 0x2db2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 672));
label_2db2b0:
    // 0x2db2b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2db2b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2db2b4:
    // 0x2db2b4: 0xc04a508  jal         func_129420
label_2db2b8:
    if (ctx->pc == 0x2DB2B8u) {
        ctx->pc = 0x2DB2B8u;
            // 0x2db2b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2DB2BCu;
        goto label_2db2bc;
    }
    ctx->pc = 0x2DB2B4u;
    SET_GPR_U32(ctx, 31, 0x2DB2BCu);
    ctx->pc = 0x2DB2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB2B4u;
            // 0x2db2b8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB2BCu; }
        if (ctx->pc != 0x2DB2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DB2BCu; }
        if (ctx->pc != 0x2DB2BCu) { return; }
    }
    ctx->pc = 0x2DB2BCu;
label_2db2bc:
    // 0x2db2bc: 0x8ea502cc  lw          $a1, 0x2CC($s5)
    ctx->pc = 0x2db2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 716)));
label_2db2c0:
    // 0x2db2c0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2db2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2db2c4:
    // 0x2db2c4: 0x50a40008  beql        $a1, $a0, . + 4 + (0x8 << 2)
label_2db2c8:
    if (ctx->pc == 0x2DB2C8u) {
        ctx->pc = 0x2DB2C8u;
            // 0x2db2c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DB2CCu;
        goto label_2db2cc;
    }
    ctx->pc = 0x2DB2C4u;
    {
        const bool branch_taken_0x2db2c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2db2c4) {
            ctx->pc = 0x2DB2C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB2C4u;
            // 0x2db2c8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2E8u;
            goto label_2db2e8;
        }
    }
    ctx->pc = 0x2DB2CCu;
label_2db2cc:
    // 0x2db2cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2db2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2db2d0:
    // 0x2db2d0: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_2db2d4:
    if (ctx->pc == 0x2DB2D4u) {
        ctx->pc = 0x2DB2D4u;
            // 0x2db2d4: 0xaea402cc  sw          $a0, 0x2CC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 716), GPR_U32(ctx, 4));
        ctx->pc = 0x2DB2D8u;
        goto label_2db2d8;
    }
    ctx->pc = 0x2DB2D0u;
    {
        const bool branch_taken_0x2db2d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db2d0) {
            ctx->pc = 0x2DB2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB2D0u;
            // 0x2db2d4: 0xaea402cc  sw          $a0, 0x2CC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 716), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2ECu;
            goto label_2db2ec;
        }
    }
    ctx->pc = 0x2DB2D8u;
label_2db2d8:
    // 0x2db2d8: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_2db2dc:
    if (ctx->pc == 0x2DB2DCu) {
        ctx->pc = 0x2DB2DCu;
            // 0x2db2dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x2DB2E0u;
        goto label_2db2e0;
    }
    ctx->pc = 0x2DB2D8u;
    {
        const bool branch_taken_0x2db2d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db2d8) {
            ctx->pc = 0x2DB2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB2D8u;
            // 0x2db2dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DB2F0u;
            goto label_2db2f0;
        }
    }
    ctx->pc = 0x2DB2E0u;
label_2db2e0:
    // 0x2db2e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2db2e4:
    if (ctx->pc == 0x2DB2E4u) {
        ctx->pc = 0x2DB2E8u;
        goto label_2db2e8;
    }
    ctx->pc = 0x2DB2E0u;
    {
        const bool branch_taken_0x2db2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2db2e0) {
            ctx->pc = 0x2DB2ECu;
            goto label_2db2ec;
        }
    }
    ctx->pc = 0x2DB2E8u;
label_2db2e8:
    // 0x2db2e8: 0xaea302cc  sw          $v1, 0x2CC($s5)
    ctx->pc = 0x2db2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 716), GPR_U32(ctx, 3));
label_2db2ec:
    // 0x2db2ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2db2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2db2f0:
    // 0x2db2f0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2db2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2db2f4:
    // 0x2db2f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2db2f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2db2f8:
    // 0x2db2f8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2db2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2db2fc:
    // 0x2db2fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2db2fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2db300:
    // 0x2db300: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2db300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2db304:
    // 0x2db304: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2db304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2db308:
    // 0x2db308: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2db308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2db30c:
    // 0x2db30c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2db30cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2db310:
    // 0x2db310: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2db310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2db314:
    // 0x2db314: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2db314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2db318:
    // 0x2db318: 0x3e00008  jr          $ra
label_2db31c:
    if (ctx->pc == 0x2DB31Cu) {
        ctx->pc = 0x2DB31Cu;
            // 0x2db31c: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->pc = 0x2DB320u;
        goto label_fallthrough_0x2db318;
    }
    ctx->pc = 0x2DB318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DB318u;
            // 0x2db31c: 0x27bd0510  addiu       $sp, $sp, 0x510 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2db318:
    ctx->pc = 0x2DB320u;
}
